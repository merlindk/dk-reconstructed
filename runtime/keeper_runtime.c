/**
 * Dungeon Keeper (KEEPER.EXE) - Native 32-bit Hybrid Runtime & SDL2/Win32 Platform Layer
 *
 * Maps the relocated 32-bit code (.text_obj1 @ 0x00010000) and data/BSS segments
 * (.data_obj3 / .bss_obj3 @ 0x00190000..0x003f0000) from KEEPER.elf, replaces the
 * DOS/4GW + VESA/VGA + DPMI + INT 21h/33h Bullfrog Library (BFLib) OS boundary with
 * native OS calls (POSIX / Win32 / SDL2), and installs live x86 detour hooks for
 * recompiled C++ functions from src/.
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#include <io.h>
#include <direct.h>
#else
#include <unistd.h>
#include <dirent.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <signal.h>
#include <ucontext.h>
#endif

#ifdef USE_SDL2
#include <SDL2/SDL.h>
#endif

#include "../include/dk_ghidra_intrinsics.h"

/* ============================================================================
 * 1. Global Runtime Configuration & State
 * ============================================================================ */
static char g_game_dir[1024] = "/home/merlin/Dungeon Keeper";
static char g_elf_path[1024] = "/home/merlin/Dungeon Keeper/re/KEEPER.elf";
static char g_dump_dir[1024] = "";
static int  g_max_frames     = 0; /* 0 = unlimited interactive mode */
static int  g_swap_counter   = 0;
static bool g_headless_mode  = false;
static bool g_verbose_io     = false;

/* 32-bit RGB palette converted from 6-bit VGA (0..63 -> 0..255) */
static uint8_t  g_vga_palette_6bit[768];
static uint32_t g_argb_palette[256];
static uint32_t g_frame_argb_buf[640 * 480];

/* Global base relocation delta (0 on Linux, 0x20000000 on Windows/rebased ELFs) */
uint32_t g_rebase_delta = 0;
#define DK_VA(orig_va)   ((uint32_t)((orig_va) + g_rebase_delta))

/* Fixed Virtual Address Pointers into Dungeon Keeper's loaded .bss_obj3 / .data_obj3 */
#define DK_MEM_U8(addr)  (*(volatile uint8_t  *)(uintptr_t)(DK_VA(addr)))
#define DK_MEM_U16(addr) (*(volatile uint16_t *)(uintptr_t)(DK_VA(addr)))
#define DK_MEM_S16(addr) (*(volatile int16_t  *)(uintptr_t)(DK_VA(addr)))
#define DK_MEM_U32(addr) (*(volatile uint32_t *)(uintptr_t)(DK_VA(addr)))
#define DK_MEM_S32(addr) (*(volatile int32_t  *)(uintptr_t)(DK_VA(addr)))
#define DK_MEM_PTR(addr) ((void *)(uintptr_t)(DK_VA(addr)))

/* Verified BFLib Display / Input / Sound Global Addresses */
#define VA_LB_SCREEN_INITIALIZED  0x003d980c
#define VA_LB_SCREEN_MODE_READY   0x003d9810
#define VA_LB_PHYSICAL_SCREEN     0x003d9814
#define VA_LB_WSCREEN_PTR         0x003d9818
#define VA_LB_GHOST_TABLE_PTR     0x003d981c
#define VA_LB_FADE_TABLE_PTR      0x003d9820
#define VA_LB_GWINDOW_PTR         0x003d9824
#define VA_LB_MOUSE_SPRITE_PTR    0x003d9828
#define VA_LB_PHYS_WIDTH          0x003d982c
#define VA_LB_PHYS_HEIGHT         0x003d9830
#define VA_LB_WSCREEN_WIDTH       0x003d9834
#define VA_LB_WSCREEN_HEIGHT      0x003d9838
#define VA_LB_GWINDOW_X           0x003d983c
#define VA_LB_GWINDOW_Y           0x003d9840
#define VA_LB_GWINDOW_W           0x003d9844
#define VA_LB_GWINDOW_H           0x003d9848
#define VA_LB_MOUSE_WIN_X         0x003d984c
#define VA_LB_MOUSE_WIN_Y         0x003d9850
#define VA_LB_MOUSE_WIN_W         0x003d9854
#define VA_LB_MOUSE_WIN_H         0x003d9858
#define VA_LB_MOUSE_X             0x003d985c
#define VA_LB_MOUSE_Y             0x003d9860
#define VA_LB_MMOUSE_X            0x003d9864
#define VA_LB_MMOUSE_Y            0x003d9868
#define VA_LB_RMOUSE_X            0x003d986c
#define VA_LB_RMOUSE_Y            0x003d9870
#define VA_LB_DRAW_FLAGS          0x003d9874
#define VA_LB_OLD_VIDEO_MODE      0x003d9876
#define VA_LB_SCREEN_MODE         0x003d9878
#define VA_LB_VESA_PAGED          0x003d987a
#define VA_LB_LEFT_BUTTON         0x003d987b
#define VA_LB_RIGHT_BUTTON        0x003d987c
#define VA_LB_MIDDLE_BUTTON       0x003d987d
#define VA_LB_MLEFT_BUTTON        0x003d987e
#define VA_LB_MRIGHT_BUTTON       0x003d987f
#define VA_LB_MMIDDLE_BUTTON      0x003d9880
#define VA_LB_RLEFT_BUTTON        0x003d9881
#define VA_LB_RMIDDLE_BUTTON      0x003d9882
#define VA_LB_RRIGHT_BUTTON       0x003d9883
#define VA_LB_FONT_PTR            0x003d98b4
#define VA_LB_SCREEN_ACTIVE       0x003d98c4
#define VA_LB_KEY_ON_TABLE        0x003db4fc
#define VA_LB_INKEY               0x003db5fc
#define VA_LB_INKEY_FLAGS         0x003db5fd
#define VA_LB_IINKEY              0x003db5fe
#define VA_LB_IINKEY_FLAGS        0x003db5ff
#define VA_LB_MOUSE_INSTALLED     0x003db7f0
#define VA_LB_NOSOUND_FLAG        0x00334019
#define VA_LB_EXIT_GAME_FLAG      0x0019a2a1
#define VA_LB_SKIP_INTRO_FLAG     0x002ed3ee
#define VA_LB_INSTALL_PATH        0x002ee923
#define VA_LB_LANGUAGE_ID         0x002ee9b9
#define VA_LB_PHYSICAL_RAM_MB     0x00334065

/* ============================================================================
 * 2. Universal x86 (__watcall + __cdecl) Detour Trampoline Engine
 * ============================================================================ */
typedef uint32_t (*dk_hook_handler_t)(
    uint32_t eax,
    uint32_t edx,
    uint32_t ebx,
    uint32_t ecx,
    uint32_t *stack_args
);

#define MAX_HOOK_STUBS 256
static uint8_t *g_stub_pool = NULL;
static size_t   g_stub_count = 0;

/**
 * Dynamically emits a 36-byte x86 machine-code bridge stub that:
 *   1. Saves callee-saved & scratch registers (EBP, EDI, ESI, EDX, ECX, EBX)
 *   2. Computes &stack_args[0] (28 bytes above ESP after 6 pushes)
 *   3. Pushes (stack_args, ecx, ebx, edx, eax) and calls the C handler
 *   4. Restores EBX, ECX, EDX, ESI, EDI, EBP and returns result in EAX
 */
static void *create_watcall_bridge_stub_ex(dk_hook_handler_t handler, int stack_pop_bytes) {
    uint8_t *stub = g_stub_pool + (g_stub_count * 64);
    g_stub_count++;
    uint8_t *p = stub;

    *p++ = 0x55; /* push %ebp */
    *p++ = 0x57; /* push %edi */
    *p++ = 0x56; /* push %esi */
    *p++ = 0x52; /* push %edx */
    *p++ = 0x51; /* push %ecx */
    *p++ = 0x53; /* push %ebx */

    /* lea 28(%esp), %esi */
    *p++ = 0x8D; *p++ = 0x74; *p++ = 0x24; *p++ = 0x1C;

    *p++ = 0x56; /* push %esi (stack_args) */
    *p++ = 0x51; /* push %ecx */
    *p++ = 0x53; /* push %ebx */
    *p++ = 0x52; /* push %edx */
    *p++ = 0x50; /* push %eax */

    /* call rel32 -> handler */
    *p++ = 0xE8;
    int32_t rel = (int32_t)((uintptr_t)handler - ((uintptr_t)p + 4));
    memcpy(p, &rel, 4);
    p += 4;

    /* add $20, %esp */
    *p++ = 0x83; *p++ = 0xC4; *p++ = 0x14;

    *p++ = 0x5B; /* pop %ebx */
    *p++ = 0x59; /* pop %ecx */
    *p++ = 0x5A; /* pop %edx */
    *p++ = 0x5E; /* pop %esi */
    *p++ = 0x5F; /* pop %edi */
    *p++ = 0x5D; /* pop %ebp */

    if (stack_pop_bytes > 0) {
        *p++ = 0xC2; /* ret $imm16 */
        uint16_t pop_val = (uint16_t)stack_pop_bytes;
        memcpy(p, &pop_val, 2);
        p += 2;
    } else {
        *p++ = 0xC3; /* ret */
    }

    return stub;
}

static void *create_watcall_bridge_stub(dk_hook_handler_t handler) {
    return create_watcall_bridge_stub_ex(handler, 0);
}

void dk_install_hook(uint32_t target_va, dk_hook_handler_t handler) {
    target_va = DK_VA(target_va);
    void *stub = create_watcall_bridge_stub(handler);
    uint8_t *code_ptr = (uint8_t *)(uintptr_t)target_va;
    code_ptr[0] = 0xE9; /* JMP rel32 */
    int32_t rel = (int32_t)((uintptr_t)stub - ((uintptr_t)code_ptr + 5));
    memcpy(code_ptr + 1, &rel, 4);
}

void dk_install_hook_ret_n(uint32_t target_va, dk_hook_handler_t handler, int stack_pop_bytes) {
    target_va = DK_VA(target_va);
    void *stub = create_watcall_bridge_stub_ex(handler, stack_pop_bytes);
    uint8_t *code_ptr = (uint8_t *)(uintptr_t)target_va;
    code_ptr[0] = 0xE9; /* JMP rel32 */
    int32_t rel = (int32_t)((uintptr_t)stub - ((uintptr_t)code_ptr + 5));
    memcpy(code_ptr + 1, &rel, 4);
}

void dk_install_direct_c_hook(uint32_t target_va, void *c_func_ptr) {
    target_va = DK_VA(target_va);
    uint8_t *code_ptr = (uint8_t *)(uintptr_t)target_va;
    code_ptr[0] = 0xE9; /* JMP rel32 */
    int32_t rel = (int32_t)((uintptr_t)c_func_ptr - ((uintptr_t)code_ptr + 5));
    memcpy(code_ptr + 1, &rel, 4);
}

/* ============================================================================
 * 3. BMP Frame Exporter (for Headless Verification & Screenshot Capture)
 * ============================================================================ */
static void save_bmp_frame(const char *filepath, const uint32_t *argb, int width, int height) {
    FILE *f = fopen(filepath, "wb");
    if (!f) return;

    uint32_t row_bytes = (uint32_t)(width * 3);
    uint32_t img_size  = row_bytes * (uint32_t)height;
    uint32_t file_size = 54 + img_size;

    uint8_t header[54];
    memset(header, 0, sizeof(header));
    header[0] = 'B';
    header[1] = 'M';
    memcpy(header + 2,  &file_size, 4);
    uint32_t data_off = 54;
    memcpy(header + 10, &data_off, 4);
    uint32_t dib_size = 40;
    memcpy(header + 14, &dib_size, 4);
    int32_t w32 = width;
    int32_t h32 = -height; /* top-down DIB */
    memcpy(header + 18, &w32, 4);
    memcpy(header + 22, &h32, 4);
    uint16_t planes = 1, bpp = 24;
    memcpy(header + 26, &planes, 2);
    memcpy(header + 28, &bpp, 2);
    memcpy(header + 34, &img_size, 4);

    fwrite(header, 1, 54, f);
    uint8_t *row = (uint8_t *)malloc(row_bytes);
    for (int y = 0; y < height; y++) {
        const uint32_t *src = argb + y * width;
        for (int x = 0; x < width; x++) {
            uint32_t px = src[x];
            row[x * 3 + 0] = (uint8_t)(px & 0xFF);         /* B */
            row[x * 3 + 1] = (uint8_t)((px >> 8) & 0xFF);  /* G */
            row[x * 3 + 2] = (uint8_t)((px >> 16) & 0xFF); /* R */
        }
        fwrite(row, 1, row_bytes, f);
    }
    free(row);
    fclose(f);
}

/* ============================================================================
 * 4. Window & Input Backend (SDL2 on Linux/Windows, or Native Win32 GDI)
 * ============================================================================ */
#ifdef USE_SDL2
static SDL_Window   *g_sdl_window   = NULL;
static SDL_Renderer *g_sdl_renderer = NULL;
static SDL_Texture  *g_sdl_texture  = NULL;
static int           g_tex_w = 0, g_tex_h = 0;

static uint8_t sdl_scancode_to_dk_set1(SDL_Scancode sc) {
    switch (sc) {
        case SDL_SCANCODE_ESCAPE:    return 0x01;
        case SDL_SCANCODE_1:         return 0x02;
        case SDL_SCANCODE_2:         return 0x03;
        case SDL_SCANCODE_3:         return 0x04;
        case SDL_SCANCODE_4:         return 0x05;
        case SDL_SCANCODE_5:         return 0x06;
        case SDL_SCANCODE_6:         return 0x07;
        case SDL_SCANCODE_7:         return 0x08;
        case SDL_SCANCODE_8:         return 0x09;
        case SDL_SCANCODE_9:         return 0x0A;
        case SDL_SCANCODE_0:         return 0x0B;
        case SDL_SCANCODE_MINUS:     return 0x0C;
        case SDL_SCANCODE_EQUALS:    return 0x0D;
        case SDL_SCANCODE_BACKSPACE: return 0x0E;
        case SDL_SCANCODE_TAB:       return 0x0F;
        case SDL_SCANCODE_Q:         return 0x10;
        case SDL_SCANCODE_W:         return 0x11;
        case SDL_SCANCODE_E:         return 0x12;
        case SDL_SCANCODE_R:         return 0x13;
        case SDL_SCANCODE_T:         return 0x14;
        case SDL_SCANCODE_Y:         return 0x15;
        case SDL_SCANCODE_U:         return 0x16;
        case SDL_SCANCODE_I:         return 0x17;
        case SDL_SCANCODE_O:         return 0x18;
        case SDL_SCANCODE_P:         return 0x19;
        case SDL_SCANCODE_RETURN:    return 0x1C;
        case SDL_SCANCODE_LCTRL:     return 0x1D;
        case SDL_SCANCODE_RCTRL:     return 0x9D;
        case SDL_SCANCODE_A:         return 0x1E;
        case SDL_SCANCODE_S:         return 0x1F;
        case SDL_SCANCODE_D:         return 0x20;
        case SDL_SCANCODE_F:         return 0x21;
        case SDL_SCANCODE_G:         return 0x22;
        case SDL_SCANCODE_H:         return 0x23;
        case SDL_SCANCODE_J:         return 0x24;
        case SDL_SCANCODE_K:         return 0x25;
        case SDL_SCANCODE_L:         return 0x26;
        case SDL_SCANCODE_LSHIFT:    return 0x2A;
        case SDL_SCANCODE_Z:         return 0x2C;
        case SDL_SCANCODE_X:         return 0x2D;
        case SDL_SCANCODE_C:         return 0x2E;
        case SDL_SCANCODE_V:         return 0x2F;
        case SDL_SCANCODE_B:         return 0x30;
        case SDL_SCANCODE_N:         return 0x31;
        case SDL_SCANCODE_M:         return 0x32;
        case SDL_SCANCODE_RSHIFT:    return 0x36;
        case SDL_SCANCODE_LALT:      return 0x38;
        case SDL_SCANCODE_SPACE:     return 0x39;
        case SDL_SCANCODE_F1:        return 0x3B;
        case SDL_SCANCODE_F2:        return 0x3C;
        case SDL_SCANCODE_F3:        return 0x3D;
        case SDL_SCANCODE_F4:        return 0x3E;
        case SDL_SCANCODE_F5:        return 0x3F;
        case SDL_SCANCODE_F6:        return 0x40;
        case SDL_SCANCODE_F7:        return 0x41;
        case SDL_SCANCODE_F8:        return 0x42;
        case SDL_SCANCODE_F9:        return 0x43;
        case SDL_SCANCODE_F10:       return 0x44;
        case SDL_SCANCODE_UP:        return 0xC8;
        case SDL_SCANCODE_LEFT:      return 0xCB;
        case SDL_SCANCODE_RIGHT:     return 0xCD;
        case SDL_SCANCODE_DOWN:      return 0xD0;
        case SDL_SCANCODE_DELETE:    return 0xD3;
        default:                     return 0;
    }
}
#endif

#if defined(_WIN32) && !defined(USE_SDL2)
static HWND g_hwnd = NULL;
static int  g_win_w = 640, g_win_h = 480;

static LRESULT CALLBACK dk_wndproc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CLOSE:
            DK_MEM_U8(VA_LB_EXIT_GAME_FLAG) = 1;
            DestroyWindow(hwnd);
            return 0;
        case WM_DESTROY:
            DK_MEM_U8(VA_LB_EXIT_GAME_FLAG) = 1;
            PostQuitMessage(0);
            return 0;
        case WM_MOUSEMOVE: {
            RECT rc;
            GetClientRect(hwnd, &rc);
            int cw = (rc.right - rc.left) > 0 ? (rc.right - rc.left) : 640;
            int ch = (rc.bottom - rc.top) > 0 ? (rc.bottom - rc.top) : 480;
            int sw = DK_MEM_S32(VA_LB_PHYS_WIDTH)  > 0 ? DK_MEM_S32(VA_LB_PHYS_WIDTH)  : 640;
            int sh = DK_MEM_S32(VA_LB_PHYS_HEIGHT) > 0 ? DK_MEM_S32(VA_LB_PHYS_HEIGHT) : 480;
            int mx = ((int)(short)LOWORD(lParam) * sw) / cw;
            int my = ((int)(short)HIWORD(lParam) * sh) / ch;
            DK_MEM_S32(VA_LB_MMOUSE_X) = mx;
            DK_MEM_S32(VA_LB_MMOUSE_Y) = my;
            return 0;
        }
        case WM_LBUTTONDOWN:
            DK_MEM_U8(VA_LB_MLEFT_BUTTON) = 1;
            DK_MEM_U8(VA_LB_LEFT_BUTTON)  = 1;
            DK_MEM_S32(VA_LB_MOUSE_X)     = DK_MEM_S32(VA_LB_MMOUSE_X);
            DK_MEM_S32(VA_LB_MOUSE_Y)     = DK_MEM_S32(VA_LB_MMOUSE_Y);
            return 0;
        case WM_LBUTTONUP:
            DK_MEM_U8(VA_LB_MLEFT_BUTTON) = 0;
            DK_MEM_U8(VA_LB_RLEFT_BUTTON) = 1;
            DK_MEM_S32(VA_LB_RMOUSE_X)    = DK_MEM_S32(VA_LB_MMOUSE_X);
            DK_MEM_S32(VA_LB_RMOUSE_Y)    = DK_MEM_S32(VA_LB_MMOUSE_Y);
            return 0;
        case WM_RBUTTONDOWN:
            DK_MEM_U8(VA_LB_MRIGHT_BUTTON) = 1;
            DK_MEM_U8(VA_LB_RIGHT_BUTTON)  = 1;
            DK_MEM_S32(VA_LB_MOUSE_X)      = DK_MEM_S32(VA_LB_MMOUSE_X);
            DK_MEM_S32(VA_LB_MOUSE_Y)      = DK_MEM_S32(VA_LB_MMOUSE_Y);
            return 0;
        case WM_RBUTTONUP:
            DK_MEM_U8(VA_LB_MRIGHT_BUTTON) = 0;
            DK_MEM_U8(VA_LB_RRIGHT_BUTTON) = 1;
            DK_MEM_S32(VA_LB_RMOUSE_X)     = DK_MEM_S32(VA_LB_MMOUSE_X);
            DK_MEM_S32(VA_LB_RMOUSE_Y)     = DK_MEM_S32(VA_LB_MMOUSE_Y);
            return 0;
        case WM_KEYDOWN:
        case WM_SYSKEYDOWN: {
            uint8_t sc = (uint8_t)((lParam >> 16) & 0xFF);
            if (lParam & (1 << 24)) sc |= 0x80;
            volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)VA_LB_KEY_ON_TABLE;
            key_tab[sc] = 1;
            DK_MEM_U8(VA_LB_INKEY)  = sc;
            DK_MEM_U8(VA_LB_IINKEY) = sc;
            return 0;
        }
        case WM_KEYUP:
        case WM_SYSKEYUP: {
            uint8_t sc = (uint8_t)((lParam >> 16) & 0xFF);
            if (lParam & (1 << 24)) sc |= 0x80;
            volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)VA_LB_KEY_ON_TABLE;
            key_tab[sc] = 0;
            return 0;
        }
    }
    return DefWindowProcA(hwnd, msg, wParam, lParam);
}
#endif

static void platform_poll_events(void) {
#ifdef USE_SDL2
    if (!g_headless_mode && g_sdl_window) {
        SDL_Event ev;
        int sw = DK_MEM_S32(VA_LB_PHYS_WIDTH)  > 0 ? DK_MEM_S32(VA_LB_PHYS_WIDTH)  : 640;
        int sh = DK_MEM_S32(VA_LB_PHYS_HEIGHT) > 0 ? DK_MEM_S32(VA_LB_PHYS_HEIGHT) : 480;
        int ww = 640, wh = 480;
        SDL_GetWindowSize(g_sdl_window, &ww, &wh);
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_QUIT) {
                DK_MEM_U8(VA_LB_EXIT_GAME_FLAG) = 1;
            } else if (ev.type == SDL_MOUSEMOTION) {
                DK_MEM_S32(VA_LB_MMOUSE_X) = (ev.motion.x * sw) / (ww > 0 ? ww : 1);
                DK_MEM_S32(VA_LB_MMOUSE_Y) = (ev.motion.y * sh) / (wh > 0 ? wh : 1);
            } else if (ev.type == SDL_MOUSEBUTTONDOWN) {
                if (ev.button.button == SDL_BUTTON_LEFT) {
                    DK_MEM_U8(VA_LB_MLEFT_BUTTON) = 1;
                    DK_MEM_U8(VA_LB_LEFT_BUTTON)  = 1;
                    DK_MEM_S32(VA_LB_MOUSE_X)     = DK_MEM_S32(VA_LB_MMOUSE_X);
                    DK_MEM_S32(VA_LB_MOUSE_Y)     = DK_MEM_S32(VA_LB_MMOUSE_Y);
                } else if (ev.button.button == SDL_BUTTON_RIGHT) {
                    DK_MEM_U8(VA_LB_MRIGHT_BUTTON) = 1;
                    DK_MEM_U8(VA_LB_RIGHT_BUTTON)  = 1;
                    DK_MEM_S32(VA_LB_MOUSE_X)      = DK_MEM_S32(VA_LB_MMOUSE_X);
                    DK_MEM_S32(VA_LB_MOUSE_Y)      = DK_MEM_S32(VA_LB_MMOUSE_Y);
                }
            } else if (ev.type == SDL_MOUSEBUTTONUP) {
                if (ev.button.button == SDL_BUTTON_LEFT) {
                    DK_MEM_U8(VA_LB_MLEFT_BUTTON) = 0;
                    DK_MEM_U8(VA_LB_RLEFT_BUTTON) = 1;
                    DK_MEM_S32(VA_LB_RMOUSE_X)    = DK_MEM_S32(VA_LB_MMOUSE_X);
                    DK_MEM_S32(VA_LB_RMOUSE_Y)    = DK_MEM_S32(VA_LB_MMOUSE_Y);
                } else if (ev.button.button == SDL_BUTTON_RIGHT) {
                    DK_MEM_U8(VA_LB_MRIGHT_BUTTON) = 0;
                    DK_MEM_U8(VA_LB_RRIGHT_BUTTON) = 1;
                    DK_MEM_S32(VA_LB_RMOUSE_X)     = DK_MEM_S32(VA_LB_MMOUSE_X);
                    DK_MEM_S32(VA_LB_RMOUSE_Y)     = DK_MEM_S32(VA_LB_MMOUSE_Y);
                }
            } else if (ev.type == SDL_KEYDOWN) {
                uint8_t sc = sdl_scancode_to_dk_set1(ev.key.keysym.scancode);
                if (sc) {
                    volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)VA_LB_KEY_ON_TABLE;
                    key_tab[sc] = 1;
                    DK_MEM_U8(VA_LB_INKEY)  = sc;
                    DK_MEM_U8(VA_LB_IINKEY) = sc;
                }
            } else if (ev.type == SDL_KEYUP) {
                uint8_t sc = sdl_scancode_to_dk_set1(ev.key.keysym.scancode);
                if (sc) {
                    volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)VA_LB_KEY_ON_TABLE;
                    key_tab[sc] = 0;
                }
            }
        }
    }
#elif defined(_WIN32)
    if (!g_headless_mode) {
        MSG msg;
        while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }
    }
#endif
}

static void platform_present_frame(int width, int height) {
    const uint8_t *wscreen = (const uint8_t *)(uintptr_t)DK_MEM_U32(VA_LB_WSCREEN_PTR);
    int pitch = DK_MEM_S32(VA_LB_WSCREEN_WIDTH);
    if (!wscreen || width <= 0 || height <= 0 || width > 640 || height > 480) return;
    if (pitch <= 0) pitch = width;

    for (int y = 0; y < height; y++) {
        const uint8_t *src = wscreen + y * pitch;
        uint32_t *dst = g_frame_argb_buf + y * width;
        for (int x = 0; x < width; x++) {
            dst[x] = g_argb_palette[src[x]];
        }
    }

    g_swap_counter++;
    if (g_dump_dir[0] != '\0' && (g_swap_counter == 1 || g_swap_counter == 5 || g_swap_counter % 20 == 0 || g_swap_counter == g_max_frames)) {
        char bmp_path[1200];
        snprintf(bmp_path, sizeof(bmp_path), "%s/frame_%04d_%dx%d.bmp", g_dump_dir, g_swap_counter, width, height);
        save_bmp_frame(bmp_path, g_frame_argb_buf, width, height);
        printf("[Runtime] Saved rendered frame #%d (%dx%d) -> %s\n", g_swap_counter, width, height, bmp_path);
        fflush(stdout);
    }

    if (g_max_frames > 0 && g_swap_counter >= g_max_frames) {
        printf("[Runtime] Reached target validation frame count (%d). Requesting clean shutdown.\n", g_max_frames);
        fflush(stdout);
        DK_MEM_U8(VA_LB_EXIT_GAME_FLAG) = 1;
        exit(0);
    }

#ifdef USE_SDL2
    if (!g_headless_mode) {
        if (!g_sdl_window) {
            if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) == 0) {
                g_sdl_window = SDL_CreateWindow(
                    "Dungeon Keeper (Reconstructed Native Runtime)",
                    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                    960, 720, SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN
                );
                if (g_sdl_window) {
                    g_sdl_renderer = SDL_CreateRenderer(g_sdl_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
                    if (!g_sdl_renderer) {
                        g_sdl_renderer = SDL_CreateRenderer(g_sdl_window, -1, SDL_RENDERER_SOFTWARE);
                    }
                    SDL_ShowCursor(SDL_DISABLE);
                }
            }
        }
        if (g_sdl_renderer) {
            if (!g_sdl_texture || g_tex_w != width || g_tex_h != height) {
                if (g_sdl_texture) SDL_DestroyTexture(g_sdl_texture);
                g_sdl_texture = SDL_CreateTexture(g_sdl_renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, width, height);
                g_tex_w = width;
                g_tex_h = height;
            }
            SDL_UpdateTexture(g_sdl_texture, NULL, g_frame_argb_buf, width * 4);
            SDL_RenderClear(g_sdl_renderer);
            SDL_RenderCopy(g_sdl_renderer, g_sdl_texture, NULL, NULL);
            SDL_RenderPresent(g_sdl_renderer);
        }
    }
#elif defined(_WIN32)
    if (!g_headless_mode) {
        if (!g_hwnd) {
            WNDCLASSA wc;
            memset(&wc, 0, sizeof(wc));
            wc.lpfnWndProc   = dk_wndproc;
            wc.hInstance     = GetModuleHandleA(NULL);
            wc.lpszClassName = "DKReconstructedWnd";
            wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
            RegisterClassA(&wc);
            RECT rc = {0, 0, 960, 720};
            AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);
            g_hwnd = CreateWindowA(
                "DKReconstructedWnd",
                "Dungeon Keeper (Reconstructed Native Runtime)",
                WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                CW_USEDEFAULT, CW_USEDEFAULT,
                rc.right - rc.left, rc.bottom - rc.top,
                NULL, NULL, wc.hInstance, NULL
            );
            ShowCursor(FALSE);
        }
        if (g_hwnd) {
            HDC hdc = GetDC(g_hwnd);
            RECT rc;
            GetClientRect(g_hwnd, &rc);
            BITMAPINFO bmi;
            memset(&bmi, 0, sizeof(bmi));
            bmi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
            bmi.bmiHeader.biWidth       = width;
            bmi.bmiHeader.biHeight      = -height;
            bmi.bmiHeader.biPlanes      = 1;
            bmi.bmiHeader.biBitCount    = 32;
            bmi.bmiHeader.biCompression = BI_RGB;
            StretchDIBits(
                hdc,
                0, 0, rc.right - rc.left, rc.bottom - rc.top,
                0, 0, width, height,
                g_frame_argb_buf, &bmi, DIB_RGB_COLORS, SRCCOPY
            );
            ReleaseDC(g_hwnd, hdc);
        }
    }
#endif
}

/* ============================================================================
 * 5. Case-Insensitive Path Resolver for Dungeon Keeper Game Assets
 * ============================================================================ */
static void resolve_dk_path(const char *orig_path, char *out_path, size_t out_sz) {
    if (!orig_path || !*orig_path) {
        snprintf(out_path, out_sz, "%s", g_game_dir);
        return;
    }

    char clean[512];
    size_t j = 0;
    const char *p = orig_path;
    /* Strip DOS drive letter like "C:\" or "D:\" and optional "KEEPER\" prefix */
    if (isalpha((unsigned char)p[0]) && p[1] == ':') {
        p += 2;
        while (*p == '/' || *p == '\\') p++;
        if (strncasecmp(p, "keeper/", 7) == 0 || strncasecmp(p, "keeper\\", 7) == 0) {
            p += 7;
        }
    }
    /* Strip leading "./" or ".\" */
    while ((p[0] == '.' && (p[1] == '/' || p[1] == '\\')) || p[0] == '/' || p[0] == '\\') {
        if (strncmp(p, "/home/", 6) == 0) break;
        p++;
    }
    for (; *p && j + 1 < sizeof(clean); p++) {
        if (p[0] == '.' && (p[1] == '/' || p[1] == '\\') && (j == 0 || clean[j - 1] == '/')) {
            p++;
            continue;
        }
        clean[j++] = (*p == '\\') ? '/' : *p;
    }
    clean[j] = '\0';

    if (strncmp(clean, "/home/", 6) == 0) {
        snprintf(out_path, out_sz, "%.*s", (int)(out_sz - 1), clean);
    } else {
        snprintf(out_path, out_sz, "%.*s/%.*s", (int)(out_sz / 2), g_game_dir, (int)(out_sz / 2 - 2), clean);
    }

#ifndef _WIN32
    /* Walk path components case-insensitively on Linux */
    struct stat st;
    if (stat(out_path, &st) == 0) return;

    char cur_dir[2048];
    snprintf(cur_dir, sizeof(cur_dir), "%s", g_game_dir);

    char rel_copy[512];
    snprintf(rel_copy, sizeof(rel_copy), "%s", clean);
    /* If clean already started with g_game_dir, strip it */
    size_t g_len = strlen(g_game_dir);
    if (strncmp(clean, g_game_dir, g_len) == 0 && clean[g_len] == '/') {
        snprintf(rel_copy, sizeof(rel_copy), "%s", clean + g_len + 1);
    }

    char *saveptr = NULL;
    char *tok = strtok_r(rel_copy, "/", &saveptr);
    while (tok) {
        DIR *d = opendir(cur_dir);
        if (!d) break;
        struct dirent *de;
        const char *matched = tok;
        while ((de = readdir(d)) != NULL) {
            if (strcasecmp(de->d_name, tok) == 0) {
                matched = de->d_name;
                break;
            }
        }
        size_t clen = strlen(cur_dir);
        if (clen + strlen(matched) + 2 < sizeof(cur_dir)) {
            cur_dir[clen] = '/';
            strcpy(cur_dir + clen + 1, matched);
        }
        closedir(d);
        tok = strtok_r(NULL, "/", &saveptr);
    }
    snprintf(out_path, out_sz, "%.*s", (int)(out_sz - 1), cur_dir);
#endif
}

/* ============================================================================
 * 6. BFLib Native OS Hook Implementations
 * ============================================================================ */

/* 0x0ddaf0: LbErrorLog(const char *file=EAX, int line=EDX, const char *msg=EBX) */
static uint32_t hook_LbErrorLog(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    const char *file = (eax >= 0x10000 && eax < 0x3f0000) ? (const char *)(uintptr_t)eax : "unknown";
    const char *msg  = (ebx >= 0x10000 && ebx < 0x3f0000) ? (const char *)(uintptr_t)ebx : "";
    printf("[LbErrorLog] %s:%u: %s\n", file, edx, msg);
    fflush(stdout);
    return 1;
}

/* 0x0e94d0: LbMemorySetup */
static uint32_t hook_LbMemorySetup(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(0x003db4f4) = 1;
    return 1;
}

/* 0x0e94f8: LbMemoryReset */
static uint32_t hook_LbMemoryReset(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1;
}

/* 0x0e9460: LbMemoryCheck */
static uint32_t hook_LbMemoryCheck(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(0x00195454) = 1;
    return 1;
}

/* 0x0e9484 / 0x0e9498 / 0x0f4cb8: LbMemoryAlloc / LbMemoryAllocLow / watcom_malloc (size=EAX) */
static uint32_t hook_LbMemoryAlloc(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax == 0 || eax > 0x10000000u) return 0;
    void *ptr = calloc(1, eax + 64);
    return (uint32_t)(uintptr_t)ptr;
}

/* 0x0e94b0 / 0x0f4d9b: LbMemoryFree / watcom_free (ptr=EAX) */
static uint32_t hook_LbMemoryFree(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax >= 0x00400000u) {
        free((void *)(uintptr_t)eax);
    }
    return 1;
}

/* 0x06b04d: detect_physical_memory -> sets 32 MB RAM tier (0x20) */
static uint32_t hook_detect_physical_memory(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(VA_LB_PHYSICAL_RAM_MB) = 0x20;
    printf("[Runtime] Detected PhysicalMemory tier: 32 MB (0x20)\n");
    fflush(stdout);
    return 0x20;
}

/* File table for LbFile* handles (1-based index to avoid 0 ambiguity) */
#define MAX_DK_FILES 128
static FILE *g_dk_files[MAX_DK_FILES];

static int alloc_dk_fd(FILE *fp) {
    for (int i = 1; i < MAX_DK_FILES; i++) {
        if (!g_dk_files[i]) {
            g_dk_files[i] = fp;
            return i;
        }
    }
    fclose(fp);
    return -1;
}

/* 0x0e8960: LbFileExists(const char *fname=EAX) */
static uint32_t hook_LbFileExists(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    const char *fname = (const char *)(uintptr_t)eax;
    char resolved[1024];
    resolve_dk_path(fname, resolved, sizeof(resolved));
    struct stat st;
    int exists = (stat(resolved, &st) == 0 && S_ISREG(st.st_mode)) ? 1 : 0;
    if (g_verbose_io) {
        printf("[LbFileExists] '%s' -> '%s' (%d)\n", fname ? fname : "", resolved, exists);
    }
    return (uint32_t)exists;
}

/* 0x0e8980: LbFileOpen(const char *fname=EAX, int mode=EDX) */
static uint32_t hook_LbFileOpen(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ebx; (void)ecx; (void)stack;
    const char *fname = (const char *)(uintptr_t)eax;
    uint8_t mode = (uint8_t)(edx & 0xFF);
    char resolved[1024];
    resolve_dk_path(fname, resolved, sizeof(resolved));

    const char *fmode = "rb";
    if (mode == 0) {
        fmode = "w+b";
    } else if (mode == 1) {
        struct stat st;
        fmode = (stat(resolved, &st) == 0) ? "r+b" : "w+b";
    } else {
        fmode = "rb";
    }

    FILE *fp = fopen(resolved, fmode);
    int fd = fp ? alloc_dk_fd(fp) : -1;
    if (g_verbose_io || fd == -1) {
        printf("[LbFileOpen] '%s' (mode=%u) -> '%s' fd=%d\n", fname ? fname : "", mode, resolved, fd);
        fflush(stdout);
    }
    return (uint32_t)fd;
}

/* 0x0e8a1c: LbFileClose(int fd=EAX) */
static uint32_t hook_LbFileClose(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    int fd = (int)eax;
    if (fd > 0 && fd < MAX_DK_FILES && g_dk_files[fd]) {
        fclose(g_dk_files[fd]);
        g_dk_files[fd] = NULL;
        return 1;
    }
    return 0xFFFFFFFFu;
}

/* 0x0e8a34: LbFileSeek(int fd=EAX, int offset=EDX, int origin=EBX) */
static uint32_t hook_LbFileSeek(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    int fd = (int)eax;
    long offset = (long)(int32_t)edx;
    uint8_t origin = (uint8_t)(ebx & 0xFF);
    if (fd <= 0 || fd >= MAX_DK_FILES || !g_dk_files[fd]) return 0xFFFFFFFFu;
    int whence = (origin == 0) ? SEEK_SET : (origin == 1 ? SEEK_CUR : SEEK_END);
    if (fseek(g_dk_files[fd], offset, whence) != 0) return 0xFFFFFFFFu;
    return (uint32_t)ftell(g_dk_files[fd]);
}

/* 0x0e8974: LbFilePosition(int fd=EAX) */
static uint32_t hook_LbFilePosition(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    int fd = (int)eax;
    if (fd <= 0 || fd >= MAX_DK_FILES || !g_dk_files[fd]) return 0xFFFFFFFFu;
    return (uint32_t)ftell(g_dk_files[fd]);
}

/* 0x0e8a80: LbFileRead(int fd=EAX, void *buf=EDX, int len=EBX) */
static uint32_t hook_LbFileRead(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    int fd = (int)eax;
    void *buf = (void *)(uintptr_t)edx;
    size_t len = (size_t)ebx;
    if (fd <= 0 || fd >= MAX_DK_FILES || !g_dk_files[fd] || !buf) return 0xFFFFFFFFu;
    size_t n = fread(buf, 1, len, g_dk_files[fd]);
    return (uint32_t)n;
}

/* 0x0e8a8c: LbFileWrite(int fd=EAX, const void *buf=EDX, int len=EBX) */
static uint32_t hook_LbFileWrite(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    int fd = (int)eax;
    const void *buf = (const void *)(uintptr_t)edx;
    size_t len = (size_t)ebx;
    if (fd <= 0 || fd >= MAX_DK_FILES || !g_dk_files[fd] || !buf) return 0xFFFFFFFFu;
    size_t n = fwrite(buf, 1, len, g_dk_files[fd]);
    return (uint32_t)n;
}

/* 0x0f7f41: LbFileLengthHandle(int fd=EAX) */
static uint32_t hook_LbFileLengthHandle(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    int fd = (int)eax;
    if (fd <= 0 || fd >= MAX_DK_FILES || !g_dk_files[fd]) return 0xFFFFFFFFu;
    long cur = ftell(g_dk_files[fd]);
    fseek(g_dk_files[fd], 0, SEEK_END);
    long end = ftell(g_dk_files[fd]);
    fseek(g_dk_files[fd], cur, SEEK_SET);
    return (uint32_t)end;
}

/* 0x0e8ac4 / 0x0e8af0 / 0x0e8b18: LbFileFindFirst / LbFileFindNext / LbFileFindEnd */
static uint32_t hook_LbFileFindFirst(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0xFFFFFFFFu;
}
static uint32_t hook_LbFileFindNext(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0xFFFFFFFFu;
}
static uint32_t hook_LbFileFindEnd(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1;
}

/* 0x0e6a30: LbScreenIsModeAvailable(int mode=EAX) */
static uint32_t hook_LbScreenIsModeAvailable(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(VA_LB_SCREEN_INITIALIZED) = 1;
    return 1;
}

/* Helper to call original software 0x0e6a6c (LbScreenSetGraphicsWindow) and 0x0e6b20 (LbTextSetWindow) */
static void update_screen_windows(int width, int height) {
    uint32_t wscreen = DK_MEM_U32(VA_LB_WSCREEN_PTR);
    DK_MEM_S32(VA_LB_GWINDOW_X)   = 0;
    DK_MEM_S32(VA_LB_GWINDOW_Y)   = 0;
    DK_MEM_S32(VA_LB_GWINDOW_W)   = width;
    DK_MEM_S32(VA_LB_GWINDOW_H)   = height;
    DK_MEM_U32(VA_LB_GWINDOW_PTR) = wscreen;
    /* Text window bounds (0x003d9888..0x003d98b0) */
    DK_MEM_S32(0x003d9888) = 0;
    DK_MEM_S32(0x003d988c) = 0;
    DK_MEM_S32(0x003d9890) = width;
    DK_MEM_S32(0x003d9894) = height;
    DK_MEM_U32(0x003d989c) = wscreen;
    DK_MEM_S32(0x003d98a0) = width;
    DK_MEM_S32(0x003d98a4) = height;
    DK_MEM_U32(0x003d98b0) = wscreen;
}

/* 0x0e846c: LbPaletteSet(const uint8_t *pal=stack[0] or EAX) */
static uint32_t hook_LbPaletteSet(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx;
    uint32_t pal_addr = (stack && stack[0] >= 0x10000) ? stack[0] : eax;
    if (pal_addr >= 0x10000) {
        const uint8_t *pal = (const uint8_t *)(uintptr_t)pal_addr;
        memcpy(g_vga_palette_6bit, pal, 768);
        for (int i = 0; i < 256; i++) {
            uint32_t r = (pal[i * 3 + 0] & 0x3F) * 255 / 63;
            uint32_t g = (pal[i * 3 + 1] & 0x3F) * 255 / 63;
            uint32_t b = (pal[i * 3 + 2] & 0x3F) * 255 / 63;
            g_argb_palette[i] = 0xFF000000u | (r << 16) | (g << 8) | b;
        }
    }
    return 1;
}

/* 0x0e8420: LbPaletteGet(uint8_t *pal=stack[0] or EAX) */
static uint32_t hook_LbPaletteGet(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx;
    uint32_t pal_addr = (stack && stack[0] >= 0x10000) ? stack[0] : eax;
    if (pal_addr >= 0x10000) {
        memcpy((void *)(uintptr_t)pal_addr, g_vga_palette_6bit, 768);
    }
    return 1;
}

/* 0x0e7750: LbScreenSetup(__cdecl: mode=stack[0], width=stack[1], height=stack[2], palette=stack[3]) */
static uint32_t hook_LbScreenSetup(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    uint32_t mode    = stack[0] & 0xFF;
    int32_t  width   = (int32_t)stack[1];
    int32_t  height  = (int32_t)stack[2];
    uint32_t palette = stack[3];

    /* Lookup mode dimensions from mode table @ 0x00194fe0 if needed */
    uint16_t mode_w = DK_MEM_U16(0x00194fe0 + mode * 0x26);
    uint16_t mode_h = DK_MEM_U16(0x00194fe2 + mode * 0x26);
    if (mode_w == 0) mode_w = (uint16_t)(width > 0 ? width : 640);
    if (mode_h == 0) mode_h = (uint16_t)(height > 0 ? height : 480);
    if (width <= 0)  width  = mode_w;
    if (height <= 0) height = mode_h;

    /* Ensure WScreen buffer is allocated */
    if (DK_MEM_U32(VA_LB_WSCREEN_PTR) == 0) {
        void *wbuf = calloc(1, 640 * 480 + 4096);
        DK_MEM_U32(VA_LB_WSCREEN_PTR) = (uint32_t)(uintptr_t)wbuf;
    }

    DK_MEM_U32(VA_LB_PHYSICAL_SCREEN) = 0x000a0000u;
    DK_MEM_U16(VA_LB_DRAW_FLAGS)      = 0;
    DK_MEM_S32(VA_LB_PHYS_WIDTH)      = mode_w;
    DK_MEM_S32(VA_LB_PHYS_HEIGHT)     = mode_h;
    DK_MEM_S32(VA_LB_WSCREEN_WIDTH)   = width;
    DK_MEM_S32(VA_LB_WSCREEN_HEIGHT)  = height;
    DK_MEM_S16(VA_LB_SCREEN_MODE)     = (int16_t)mode;
    DK_MEM_U8(VA_LB_VESA_PAGED)       = 0;
    DK_MEM_U8(0x003d9885)             = 0;
    DK_MEM_U32(VA_LB_SCREEN_ACTIVE)   = 1;
    DK_MEM_U32(VA_LB_SCREEN_MODE_READY) = 1;

    update_screen_windows(width, height);

    if (palette != 0) {
        hook_LbPaletteSet(palette, 0, 0, 0, &palette);
    }

    printf("[LbScreenSetup] Mode %u initialized: Phys=%ux%u, WScreen=%dx%d, WScreenPtr=0x%08x\n",
           mode, mode_w, mode_h, width, height, DK_MEM_U32(VA_LB_WSCREEN_PTR));
    fflush(stdout);
    return 1;
}

/* 0x0e792c: LbScreenReset */
static uint32_t hook_LbScreenReset(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(VA_LB_SCREEN_ACTIVE)     = 0;
    DK_MEM_U32(VA_LB_SCREEN_MODE_READY) = 0;
    return 1;
}

/* 0x0e79fc: LbScreenSwap */
static uint32_t hook_LbScreenSwap(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    platform_poll_events();

    /* Composite software mouse cursor onto WScreen via original 0x000eb840 */
    typedef void (*fn_void_t)(void);
    ((fn_void_t)(uintptr_t)DK_VA(0x000eb840))();

    int w = DK_MEM_S32(VA_LB_WSCREEN_WIDTH);
    int h = DK_MEM_S32(VA_LB_WSCREEN_HEIGHT);
    platform_present_frame(w, h);

    /* Restore background pixels under mouse cursor via original 0x000eb974 */
    ((fn_void_t)(uintptr_t)DK_VA(0x000eb974))();
    return 1;
}

/* 0x0e8214: LbScreenWaitVbi */
static uint32_t hook_LbScreenWaitVbi(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    platform_poll_events();
    return 1;
}

/* Monotonic clock in milliseconds & 100Hz ticks */
static uint64_t get_monotonic_ms(void) {
#ifdef _WIN32
    static LARGE_INTEGER freq = {0};
    LARGE_INTEGER now;
    if (freq.QuadPart == 0) QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&now);
    return (uint64_t)((now.QuadPart * 1000ULL) / freq.QuadPart);
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000ULL + (uint64_t)(ts.tv_nsec / 1000000ULL);
#endif
}

static uint64_t g_start_ms = 0;

/* 0x0eb818: LbTimerClock (returns milliseconds) */
static uint32_t hook_LbTimerClock(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    platform_poll_events();
    if (g_headless_mode) {
        /* Advance virtual clock deterministically in headless test mode so splash timers complete quickly */
        static uint32_t fake_ms = 100;
        fake_ms += 50;
        return fake_ms;
    }
    return (uint32_t)(get_monotonic_ms() - g_start_ms);
}

/* 0x0e8d4a: LbClockMSec (returns 100Hz ticks) */
static uint32_t hook_LbClockMSec(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    uint32_t ms = hook_LbTimerClock(eax, edx, ebx, ecx, stack);
    return ms / 10;
}

/* 0x0f0ab2: LbSleep(int ms=EAX) */
static uint32_t hook_LbSleep(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    platform_poll_events();
    if (!g_headless_mode && eax > 0 && eax < 1000) {
#ifdef _WIN32
        Sleep(eax);
#else
        usleep(eax * 1000);
#endif
    }
    return 1;
}

/* 0x0ebc98: LbMouseSetup(void *pointer_spr=EAX, int x=EDX, int y=EBX) */
static uint32_t hook_LbMouseSetup(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(VA_LB_MOUSE_INSTALLED) = 1;
    DK_MEM_U32(0x003dd828) = 1; /* Mouse handler installed flag */
    DK_MEM_U32(0x003d98c0) = 1; /* Disable direct-to-VGA ISR cursor drawing; use WScreen swap */
    DK_MEM_S32(0x003dc814) = 1;
    DK_MEM_S32(0x003dc818) = 1;
    int w = DK_MEM_S32(VA_LB_PHYS_WIDTH)  > 0 ? DK_MEM_S32(VA_LB_PHYS_WIDTH)  : 640;
    int h = DK_MEM_S32(VA_LB_PHYS_HEIGHT) > 0 ? DK_MEM_S32(VA_LB_PHYS_HEIGHT) : 480;
    DK_MEM_S32(VA_LB_MOUSE_WIN_X) = 0;
    DK_MEM_S32(VA_LB_MOUSE_WIN_Y) = 0;
    DK_MEM_S32(VA_LB_MOUSE_WIN_W) = w;
    DK_MEM_S32(VA_LB_MOUSE_WIN_H) = h;
    DK_MEM_S32(VA_LB_MMOUSE_X)    = w / 2;
    DK_MEM_S32(VA_LB_MMOUSE_Y)    = h / 2;
    DK_MEM_S32(VA_LB_MOUSE_X)     = w / 2;
    DK_MEM_S32(VA_LB_MOUSE_Y)     = h / 2;
    if (eax != 0) {
        /* Call 0x0ebab0 (LbMouseChangeSprite) with EAX=sprite_ptr */
        uint32_t fn_va = DK_VA(0x000ebab0);
        __asm__ volatile (
            "call *%%ecx\n\t"
            : "+a"(eax), "+c"(fn_va)
            :
            : "edx", "memory", "cc"
        );
    }
    return 1;
}

/* 0x0ebe68 / 0x0ebeec: LbMouseReset / LbMouseSuspend */
static uint32_t hook_LbMouseSuspend(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(VA_LB_MOUSE_SPRITE_PTR) = 0;
    return 1;
}

/* 0x0f4908 / 0x0f4960 / 0x0e8560: LbKeyboardOpen / LbKeyboardClose / LbKeyboardRead */
static uint32_t hook_LbKeyboardStub(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    platform_poll_events();
    return 1;
}

/* 0x0150f0 / 0x0151f8: CD-ROM presence verification -> always succeed */
static uint32_t hook_cdtest_ok(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1;
}

/* 0x0efde0: play_smk(const char *fname=EAX, ...) */
static uint32_t hook_play_smk(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    const char *fname = (eax >= 0x10000 && eax < 0x3f0000) ? (const char *)(uintptr_t)eax : "";
    printf("[Smacker] Video playback request: '%s'\n", fname);
    fflush(stdout);
    return 1;
}

/* 0x0ea370: LbDirectoryCurrent(char *buf=EAX, int size=EDX) */
static uint32_t hook_LbDirectoryCurrent(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax >= 0x10000) {
        strcpy((char *)(uintptr_t)eax, ".");
    }
    return 1;
}

/* 0x0ea338 / 0x0ea355 / 0x0e8b30: LbDirectoryChange / LbDirectoryMake / LbFileDelete */
static uint32_t hook_LbDirOrDeleteStub(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1;
}

/* 0x0f0ec0: LbErrorLogSetup */
static uint32_t hook_LbErrorLogSetup(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(0x003de9bc) = 1;
    return 1;
}

/* 0x0f0f58: LbErrorLogReset */
static uint32_t hook_LbErrorLogReset(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(0x003de9bc) = 0;
    return 1;
}

/* 0x0f0f8c / 0x0f4409: LbErrorLogPrintf / watcom_printf (stack[0] = fmt) */
static uint32_t hook_watcom_printf(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    if (stack[0] >= 0x10000 && stack[0] < 0x00450000) {
        const char *fmt = (const char *)(uintptr_t)stack[0];
        printf("[GameLog] %s\n", fmt);
        fflush(stdout);
    }
    return 1;
}

/* 0x10eb71: LbDateTime(struct TbDateTime *dt=EAX) */
static uint32_t hook_LbDateTime(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax >= 0x10000) {
        memset((void *)(uintptr_t)eax, 0, 24);
    }
    return 1;
}

/* 0x0eb7b0: LbDate(struct TbDate *d=EAX) */
static uint32_t hook_LbDate(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax >= 0x10000) {
        uint8_t *d = (uint8_t *)(uintptr_t)eax;
        time_t now = time(NULL);
        struct tm *tm_p = localtime(&now);
        if (tm_p) {
            d[0] = (uint8_t)tm_p->tm_mday;
            d[1] = (uint8_t)(tm_p->tm_mon + 1);
            *(uint16_t *)(d + 2) = (uint16_t)(tm_p->tm_year + 1900);
            d[4] = (uint8_t)tm_p->tm_wday;
        } else {
            memset(d, 0, 5);
        }
    }
    return 1;
}

/* 0x0eb7e4: LbTime(struct TbTime *t=EAX) */
static uint32_t hook_LbTime(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax >= 0x10000) {
        uint8_t *t = (uint8_t *)(uintptr_t)eax;
        time_t now = time(NULL);
        struct tm *tm_p = localtime(&now);
        if (tm_p) {
            t[0] = (uint8_t)tm_p->tm_hour;
            t[1] = (uint8_t)tm_p->tm_min;
            t[2] = (uint8_t)tm_p->tm_sec;
            t[3] = 0;
        } else {
            memset(t, 0, 4);
        }
    }
    return 1;
}

/* 0x0e8876: LbDosCriticalErrorHandlerSetup */
static uint32_t hook_ret_zero(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}

/* 0x0f7786 / 0x0fed45: Safety net for any unhooked DOS int386 / int386x calls */
static uint32_t hook_int386_safety(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    printf("[int386] Intercepted DOS interrupt 0x%02x (inregs=0x%08x, outregs=0x%08x)\n", eax & 0xFF, edx, ebx);
    fflush(stdout);
    if (ebx >= 0x10000 && edx >= 0x10000) {
        memcpy((void *)(uintptr_t)ebx, (const void *)(uintptr_t)edx, 28);
    }
    return 0;
}

/* External registration point for recompiled C++ functions from runtime/recompiled_modules.cpp */
extern void dk_register_recompiled_cpp_functions(void);

/* ============================================================================
 * 7. ELF32 Segment Loader (Maps .text_obj1 and .data_obj3 / .bss_obj3)
 * ============================================================================ */
typedef struct {
    uint8_t  e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf32_Ehdr_t;

typedef struct {
    uint32_t p_type;
    uint32_t p_offset;
    uint32_t p_vaddr;
    uint32_t p_paddr;
    uint32_t p_filesz;
    uint32_t p_memsz;
    uint32_t p_flags;
    uint32_t p_align;
} Elf32_Phdr_t;

static bool load_keeper_elf_segments(const char *elf_path) {
    FILE *fp = fopen(elf_path, "rb");
    if (!fp) {
        fprintf(stderr, "ERROR: Cannot open '%s': %s\n", elf_path, strerror(errno));
        return false;
    }

    Elf32_Ehdr_t ehdr;
    if (fread(&ehdr, 1, sizeof(ehdr), fp) != sizeof(ehdr) || memcmp(ehdr.e_ident, "\x7f""ELF", 4) != 0) {
        fprintf(stderr, "ERROR: '%s' is not a valid ELF32 binary\n", elf_path);
        fclose(fp);
        return false;
    }

    /* Inspect first PT_LOAD segment to calculate base address and rebase delta */
    uintptr_t base_addr = 0x00010000u;
    size_t    region_sz = 0x00440000u;
    for (uint16_t i = 0; i < ehdr.e_phnum; i++) {
        Elf32_Phdr_t ph;
        fseek(fp, (long)(ehdr.e_phoff + i * ehdr.e_phentsize), SEEK_SET);
        if (fread(&ph, 1, sizeof(ph), fp) != sizeof(ph)) break;
        if (ph.p_type == 1 && ph.p_vaddr >= 0x00010000) {
            uint32_t aligned_base = ph.p_vaddr & ~0xFFFFu;
            if (aligned_base > 0x00010000u) {
                g_rebase_delta = aligned_base - 0x00010000u;
                base_addr = aligned_base;
            }
            break;
        }
    }
    printf("[Loader] Detected image base: 0x%08lx (Rebase Delta: +0x%08x)\n",
           (unsigned long)base_addr, g_rebase_delta);

#ifdef _WIN32
    void *mapped = VirtualAlloc((void *)base_addr, region_sz, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (mapped != (void *)base_addr) {
        fprintf(stderr, "ERROR: VirtualAlloc at 0x%08lx failed (got %p, err=%lu)\n",
                (unsigned long)base_addr, mapped, GetLastError());
        fclose(fp);
        return false;
    }
    g_stub_pool = (uint8_t *)VirtualAlloc(NULL, 65536, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
#else
    void *mapped = mmap((void *)base_addr, region_sz,
                        PROT_READ | PROT_WRITE | PROT_EXEC,
                        MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0);
    if (mapped == MAP_FAILED) {
        fprintf(stderr, "ERROR: mmap at 0x%08lx failed: %s\n", (unsigned long)base_addr, strerror(errno));
        fclose(fp);
        return false;
    }
    g_stub_pool = (uint8_t *)mmap(NULL, 65536,
                                  PROT_READ | PROT_WRITE | PROT_EXEC,
                                  MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
#endif
    memset((void *)base_addr, 0, region_sz);

    for (uint16_t i = 0; i < ehdr.e_phnum; i++) {
        Elf32_Phdr_t ph;
        fseek(fp, (long)(ehdr.e_phoff + i * ehdr.e_phentsize), SEEK_SET);
        if (fread(&ph, 1, sizeof(ph), fp) != sizeof(ph)) break;
        if (ph.p_type != 1 || ph.p_filesz == 0) continue; /* PT_LOAD */

        fseek(fp, (long)ph.p_offset, SEEK_SET);
        size_t n = fread((void *)(uintptr_t)ph.p_vaddr, 1, ph.p_filesz, fp);
        printf("[Loader] Mapped PT_LOAD #%u: VA=0x%08x..0x%08x (filesz=%u, memsz=%u, read=%u)\n",
               i, ph.p_vaddr, ph.p_vaddr + ph.p_memsz, ph.p_filesz, ph.p_memsz, (unsigned)n);
    }

    fclose(fp);
    return true;
}

#ifndef _WIN32
static void crash_signal_handler(int sig, siginfo_t *info, void *ucontext) {
    ucontext_t *uc = (ucontext_t *)ucontext;
    uint32_t eip = (uint32_t)uc->uc_mcontext.gregs[REG_EIP];
    uint32_t esp = (uint32_t)uc->uc_mcontext.gregs[REG_ESP];
    uint32_t ebp = (uint32_t)uc->uc_mcontext.gregs[REG_EBP];
    uint32_t eax = (uint32_t)uc->uc_mcontext.gregs[REG_EAX];
    uint32_t ebx = (uint32_t)uc->uc_mcontext.gregs[REG_EBX];
    uint32_t ecx = (uint32_t)uc->uc_mcontext.gregs[REG_ECX];
    uint32_t edx = (uint32_t)uc->uc_mcontext.gregs[REG_EDX];
    uint32_t esi = (uint32_t)uc->uc_mcontext.gregs[REG_ESI];
    uint32_t edi = (uint32_t)uc->uc_mcontext.gregs[REG_EDI];
    fprintf(stderr, "\n[CRASH] Signal %d at EIP=0x%08x (fault_addr=%p)\n", sig, eip, info ? info->si_addr : NULL);
    fprintf(stderr, "  EAX=0x%08x EBX=0x%08x ECX=0x%08x EDX=0x%08x\n", eax, ebx, ecx, edx);
    fprintf(stderr, "  ESI=0x%08x EDI=0x%08x EBP=0x%08x ESP=0x%08x\n", esi, edi, ebp, esp);
    if (eip >= 0x10000 && eip < 0x1500f0) {
        const uint8_t *code = (const uint8_t *)(uintptr_t)eip;
        fprintf(stderr, "  Bytes @ EIP:");
        for (int i = 0; i < 16; i++) fprintf(stderr, " %02x", code[i]);
        fprintf(stderr, "\n");
    }
    fprintf(stderr, "  Stack return trace (code VAs on stack):\n");
    const uint32_t *sp = (const uint32_t *)(uintptr_t)esp;
    int printed = 0;
    for (int i = 0; i < 128 && printed < 16; i++) {
        uint32_t val = sp[i];
        if (val >= 0x00010000 && val < 0x00150100) {
            fprintf(stderr, "    [ESP+0x%03x] = 0x%08x\n", i * 4, val);
            printed++;
        }
    }
    fflush(stderr);
    _exit(128 + sig);
}
#endif

/* ============================================================================
 * 8. Main Entry Point
 * ============================================================================ */
int main(int argc, char **argv) {
#ifndef _WIN32
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = crash_signal_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGSEGV, &sa, NULL);
    sigaction(SIGILL,  &sa, NULL);
    sigaction(SIGFPE,  &sa, NULL);
    sigaction(SIGBUS,  &sa, NULL);
#endif
    char *dk_argv[32];
    int   dk_argc = 0;
    dk_argv[dk_argc++] = (char *)"C:\\KEEPER\\KEEPER.EXE";

    int   g_start_level = 0;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--game-dir") == 0 && i + 1 < argc) {
            snprintf(g_game_dir, sizeof(g_game_dir), "%s", argv[++i]);
        } else if (strcmp(argv[i], "--elf") == 0 && i + 1 < argc) {
            snprintf(g_elf_path, sizeof(g_elf_path), "%s", argv[++i]);
        } else if (strcmp(argv[i], "--dump-frames") == 0 && i + 1 < argc) {
            const char *arg_dir = argv[++i];
#ifndef _WIN32
            if (arg_dir[0] != '/') {
                char cwd[512];
                if (getcwd(cwd, sizeof(cwd)) != NULL) {
                    snprintf(g_dump_dir, sizeof(g_dump_dir), "%s/%s", cwd, arg_dir);
                } else {
                    snprintf(g_dump_dir, sizeof(g_dump_dir), "%s", arg_dir);
                }
            } else {
                snprintf(g_dump_dir, sizeof(g_dump_dir), "%s", arg_dir);
            }
            mkdir(g_dump_dir, 0775);
#else
            snprintf(g_dump_dir, sizeof(g_dump_dir), "%s", arg_dir);
            _mkdir(g_dump_dir);
#endif
        } else if (strcmp(argv[i], "--max-frames") == 0 && i + 1 < argc) {
            g_max_frames = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--level") == 0 && i + 1 < argc) {
            g_start_level = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--headless") == 0) {
            g_headless_mode = true;
        } else if (strcmp(argv[i], "--verbose-io") == 0) {
            g_verbose_io = true;
        } else if (dk_argc < 30) {
            dk_argv[dk_argc++] = argv[i];
        }
    }
    dk_argv[dk_argc] = NULL;

#ifdef _WIN32
    /* On Windows, auto-detect game directory and rebased ELF */
    if (strncmp(g_game_dir, "/home/", 6) == 0) {
        struct stat st;
        if (stat("KEEPER.CFG", &st) == 0 || stat("keeper.cfg", &st) == 0) {
            strcpy(g_game_dir, ".");
        } else if (stat("D:/SteamLibrary/steamapps/common/Dungeon Keeper/KEEPER.CFG", &st) == 0 ||
                   stat("d:/SteamLibrary/steamapps/common/Dungeon Keeper/keeper.cfg", &st) == 0) {
            strcpy(g_game_dir, "D:/SteamLibrary/steamapps/common/Dungeon Keeper");
        }
    }
    if (strncmp(g_elf_path, "/home/", 6) == 0) {
        struct stat st;
        if (stat("build/KEEPER_20000000.elf", &st) == 0) {
            strcpy(g_elf_path, "build/KEEPER_20000000.elf");
        } else if (stat("KEEPER_20000000.elf", &st) == 0) {
            strcpy(g_elf_path, "KEEPER_20000000.elf");
        } else if (stat("build/KEEPER.elf", &st) == 0) {
            strcpy(g_elf_path, "build/KEEPER.elf");
        } else if (stat("KEEPER.elf", &st) == 0) {
            strcpy(g_elf_path, "KEEPER.elf");
        }
    }
#endif

    printf("================================================================\n");
    printf(" Dungeon Keeper (KEEPER.EXE) - Native Reconstructed Runtime\n");
    printf(" Game Directory : %s\n", g_game_dir);
    printf(" Binary Image   : %s\n", g_elf_path);
    printf(" Mode           : %s (MaxFrames=%d, StartLevel=%d)\n", g_headless_mode ? "Headless Validation" : "Interactive Window", g_max_frames, g_start_level);
    printf("================================================================\n");
    fflush(stdout);

    g_start_ms = get_monotonic_ms();

    if (!load_keeper_elf_segments(g_elf_path)) {
        return 1;
    }

    /* Install BFLib Native OS Platform Hooks */
    dk_install_hook(0x000ddaf0, hook_LbErrorLog);
    dk_install_hook(0x000f0ec0, hook_LbErrorLogSetup);
    dk_install_hook(0x000f0f58, hook_LbErrorLogReset);
    dk_install_hook(0x000f0f8c, hook_watcom_printf);
    dk_install_hook(0x000f4409, hook_watcom_printf);
    dk_install_hook(0x0010e8f0, hook_LbDirOrDeleteStub);
    dk_install_hook(0x0010e9cc, hook_LbDirOrDeleteStub);
    dk_install_hook(0x0010ea34, hook_LbDirOrDeleteStub);
    dk_install_hook(0x0010eaa8, hook_LbDirOrDeleteStub);
    dk_install_hook(0x0010eb71, hook_LbDateTime);
    dk_install_hook(0x000e8876, hook_ret_zero);

    dk_install_hook(0x000e94d0, hook_LbMemorySetup);
    dk_install_hook(0x000e94f8, hook_LbMemoryReset);
    dk_install_hook(0x000e9460, hook_LbMemoryCheck);
    dk_install_hook(0x000e9484, hook_LbMemoryAlloc);
    dk_install_hook(0x000e9498, hook_LbMemoryAlloc);
    dk_install_hook(0x000e94b0, hook_LbMemoryFree);
    dk_install_hook(0x000f4cb8, hook_LbMemoryAlloc);
    dk_install_hook(0x000f4d9b, hook_LbMemoryFree);
    dk_install_hook(0x0006b04d, hook_detect_physical_memory);

    dk_install_hook(0x000e8960, hook_LbFileExists);
    dk_install_hook(0x000e8974, hook_LbFilePosition);
    dk_install_hook(0x000e8980, hook_LbFileOpen);
    dk_install_hook(0x000e8a1c, hook_LbFileClose);
    dk_install_hook(0x000e8a34, hook_LbFileSeek);
    dk_install_hook(0x000e8a80, hook_LbFileRead);
    dk_install_hook(0x000e8a8c, hook_LbFileWrite);
    dk_install_hook(0x000f7f41, hook_LbFileLengthHandle);
    dk_install_hook(0x000e8ac4, hook_LbFileFindFirst);
    dk_install_hook(0x000e8af0, hook_LbFileFindNext);
    dk_install_hook(0x000e8b18, hook_LbFileFindEnd);
    dk_install_hook(0x000e8b30, hook_LbDirOrDeleteStub);
    dk_install_hook(0x000ea338, hook_LbDirOrDeleteStub);
    dk_install_hook(0x000ea355, hook_LbDirOrDeleteStub);
    dk_install_hook(0x000ea370, hook_LbDirectoryCurrent);

    dk_install_hook(0x000e6a30, hook_LbScreenIsModeAvailable);
    dk_install_hook(0x000e7750, hook_LbScreenSetup);
    dk_install_hook(0x000e792c, hook_LbScreenReset);
    dk_install_hook(0x000e79fc, hook_LbScreenSwap);
    dk_install_hook(0x000e8214, hook_LbScreenWaitVbi);
    dk_install_hook(0x000e8420, hook_LbPaletteGet);
    dk_install_hook(0x000e846c, hook_LbPaletteSet);

    dk_install_hook(0x000eb7b0, hook_LbDate);
    dk_install_hook(0x000eb7e4, hook_LbTime);
    dk_install_hook(0x000eb818, hook_LbTimerClock);
    dk_install_hook(0x000e8d4a, hook_LbClockMSec);
    dk_install_hook(0x000f0ab2, hook_LbSleep);

    dk_install_hook(0x000ebc98, hook_LbMouseSetup);
    dk_install_hook(0x000ebe68, hook_LbMouseSuspend);
    dk_install_hook(0x000ebeec, hook_LbMouseSuspend);
    dk_install_hook(0x000f4908, hook_LbKeyboardStub);
    dk_install_hook(0x000f4960, hook_LbKeyboardStub);
    dk_install_hook(0x000e8560, hook_LbKeyboardStub);

    dk_install_hook(0x000150f0, hook_cdtest_ok);
    dk_install_hook(0x000151f8, hook_cdtest_ok);
    dk_install_hook(0x000efde0, hook_play_smk);
    dk_install_hook(0x000f7786, hook_int386_safety);
    dk_install_hook(0x000fed45, hook_int386_safety);

    /* Patch 0x00065724 (pom_benchmark) to `fld1; ret` (D9 E8 C3) so it returns 1.0 in ST(0) without port 0x43 IO */
    uint8_t *bench_ptr = (uint8_t *)(uintptr_t)DK_VA(0x00065724);
    bench_ptr[0] = 0xD9; bench_ptr[1] = 0xE8; bench_ptr[2] = 0xC3;

    /* If --level <N> was passed, enable direct level boot (bit 1 of g_game_operation_flags @ 0x0019d0b8) */
    if (g_start_level > 0) {
        DK_MEM_U8(0x0019d0b8)  |= 0x02;
        DK_MEM_U32(0x00063637)  = (uint32_t)g_start_level;
    }

    /* Register recompiled C++ functions from runtime/recompiled_modules.cpp */
    dk_register_recompiled_cpp_functions();

    /* Default nosound=1 until AIL sound is hooked, and change to game directory */
    DK_MEM_U8(VA_LB_NOSOUND_FLAG) = 1;
    if (chdir(g_game_dir) != 0) {
        perror("chdir to game_dir failed");
    }

    uint32_t lbmain_va = DK_VA(0x000633c4);
    printf("[Runtime] Invoking Dungeon Keeper LbMain (0x%08x) with argc=%d...\n", lbmain_va, dk_argc);
    fflush(stdout);

    /* Call panmap_fn_0633c4 (LbMain @ 0x000633c4) with EAX=argc, EDX=argv */
    uint32_t ret_val = (uint32_t)dk_argc;
    char **argv_ptr  = dk_argv;
    __asm__ volatile (
        "pushl %%ebx\n\t"
        "pushl %%esi\n\t"
        "pushl %%edi\n\t"
        "pushl %%ebp\n\t"
        "call *%%ecx\n\t"
        "popl %%ebp\n\t"
        "popl %%edi\n\t"
        "popl %%esi\n\t"
        "popl %%ebx\n\t"
        : "+a"(ret_val), "+d"(argv_ptr), "+c"(lbmain_va)
        :
        : "memory", "cc"
    );

    printf("[Runtime] LbMain returned %u.\n", ret_val);
    return (int)ret_val;
}
