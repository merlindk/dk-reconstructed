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
#include <mmsystem.h>
#include <io.h>
#include <direct.h>
#else
#include <unistd.h>
#include <dirent.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <signal.h>
#include <ucontext.h>
#include <pthread.h>
#endif

#ifdef USE_SDL2
#include <SDL2/SDL.h>
#endif

#include "../include/dk_ghidra_intrinsics.h"
#include "../include/dk_net.h"

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
static bool g_test_start_game = false; /* Simulate click on Start New Game */
static bool g_test_multiplayer_gui = false; /* Simulate click on Multiplayer */
static bool g_fullscreen      = true;  /* Fullscreen by default */

/* CLI Network Parameters */
static char     g_net_cli_host_ip[128] = "";
static uint16_t g_net_cli_port = 0;
static bool     g_net_cli_is_host = false;
static bool     g_net_cli_is_client = false;
static char     g_net_cli_player_name[32] = "";

/* 32-bit RGB palette converted from 6-bit VGA (0..63 -> 0..255) */
static uint8_t  g_vga_palette_6bit[768];
static uint32_t g_argb_palette[256];
static uint32_t g_frame_argb_buf[640 * 480];

#define CANVAS_1080P_WIDTH    1920
#define CANVAS_1080P_HEIGHT   1080
#define VIEWPORT_43_WIDTH     1440
#define VIEWPORT_43_HEIGHT    1080
#define VIEWPORT_43_OFFSET_X  240
#define VIEWPORT_43_OFFSET_Y  0
#define BORDER_WIDTH          240

static uint32_t g_backbuffer_1080p[CANVAS_1080P_WIDTH * CANVAS_1080P_HEIGHT];
static uint32_t g_border_texture[BORDER_WIDTH * CANVAS_1080P_HEIGHT];
static uint32_t g_xbrz_temp_buf[1920 * 1440];
static uint8_t  g_persistent_wscreen[640 * 480 + 4096];
static uint8_t  g_persistent_pscreen[640 * 480 + 4096];
static uint8_t  g_persistent_bscreen[640 * 480 + 4096];
static bool     g_border_inited = false;
static bool     g_upscale_1080p_enabled = true;
static int      g_xbrz_factor = 2; /* 2 = 2x, 3 = 3x, 0 = nearest-neighbor */

#ifdef __cplusplus
extern "C"
#endif
void dk_xbrz_scale(int factor, const uint32_t *src, uint32_t *dst, int width, int height);

/* Global base relocation delta (0 on Linux, 0x20000000 on Windows/rebased ELFs) */
uint32_t g_rebase_delta = 0;
#define DK_VA(orig_va)   ((uint32_t)((orig_va) + g_rebase_delta))

static inline void *dk_to_host_ptr(uint32_t addr) {
    if (addr == 0) return NULL;
    if (g_rebase_delta != 0) {
        if (addr >= DK_VA(0x00010000) && addr < DK_VA(0x00450000)) {
            return (void *)(uintptr_t)addr;
        }
        if (addr >= 0x00010000 && addr < 0x00450000) {
            return (void *)(uintptr_t)DK_VA(addr);
        }
    }
    return (void *)(uintptr_t)addr;
}

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
 * 2b. Thematic Pillarbox Borders & Frame Composition (1080p Widescreen)
 * ============================================================================ */
static void init_thematic_borders(void) {
    if (g_border_inited) return;

    for (int y = 0; y < CANVAS_1080P_HEIGHT; y++) {
        for (int x = 0; x < BORDER_WIDTH; x++) {
            /* Create gothic dungeon stone brick pattern (approx 60px high, 120px wide bricks) */
            int brick_h = 60;
            int brick_w = 120;
            int row = y / brick_h;
            int x_offset = (row % 2) * (brick_w / 2);
            int col_x = (x + x_offset) % brick_w;
            int col_y = y % brick_h;

            /* Base dark obsidian / granite color */
            int base_lum = 22;

            /* Mortar lines between bricks */
            bool is_mortar = (col_y <= 2) || (col_x <= 2);

            /* Subtle torchlight vignette: warmer and brighter towards inner game screen edge (x = 240) */
            float edge_dist = (float)x / (float)BORDER_WIDTH; /* 0.0 at outer edge, 1.0 at screen edge */
            int ambient = (int)(edge_dist * 18.0f);

            /* Procedural pseudo-random stone noise */
            int noise = (((x * 37 + y * 17) ^ (x >> 2)) % 11) - 5;

            int r = base_lum + ambient + noise;
            int g = base_lum - 4 + (ambient * 3 / 4) + noise;
            int b = base_lum - 2 + (ambient / 2) + noise;

            if (is_mortar) {
                r = r / 3;
                g = g / 3;
                b = b / 3;
            }

            /* Golden runic bezel trim right at the game border seam (x = 236..239) */
            if (x >= BORDER_WIDTH - 4) {
                int trim_dist = x - (BORDER_WIDTH - 4);
                if (trim_dist == 0) {
                    r = 85; g = 65; b = 25; /* dark brass bevel */
                } else if (trim_dist == 1) {
                    r = 140; g = 110; b = 45; /* polished gold highlight */
                } else if (trim_dist == 2) {
                    r = 60; g = 45; b = 15;
                } else {
                    r = 0; g = 0; b = 0; /* inner drop shadow */
                }
            }

            if (r < 0) r = 0; else if (r > 255) r = 255;
            if (g < 0) g = 0; else if (g > 255) g = 255;
            if (b < 0) b = 0; else if (b > 255) b = 255;

            uint32_t color = (0xFF << 24) | (r << 16) | (g << 8) | b;
            g_border_texture[y * BORDER_WIDTH + x] = color;
        }
    }
    g_border_inited = true;
}

static inline uint32_t bilinear_sample(const uint32_t *src, int sw, int sh, float u, float v) {
    if (u < 0.0f) u = 0.0f;
    if (v < 0.0f) v = 0.0f;
    if (u > (float)(sw - 1)) u = (float)(sw - 1);
    if (v > (float)(sh - 1)) v = (float)(sh - 1);

    int x0 = (int)u;
    int y0 = (int)v;
    int x1 = (x0 < sw - 1) ? x0 + 1 : x0;
    int y1 = (y0 < sh - 1) ? y0 + 1 : y0;

    float fx = u - (float)x0;
    float fy = v - (float)y0;
    float ifx = 1.0f - fx;
    float ify = 1.0f - fy;

    float w00 = ifx * ify;
    float w10 = fx  * ify;
    float w01 = ifx * fy;
    float w11 = fx  * fy;

    uint32_t c00 = src[y0 * sw + x0];
    uint32_t c10 = src[y0 * sw + x1];
    uint32_t c01 = src[y1 * sw + x0];
    uint32_t c11 = src[y1 * sw + x1];

    int r = (int)(w00 * ((c00 >> 16) & 0xFF) + w10 * ((c10 >> 16) & 0xFF) + w01 * ((c01 >> 16) & 0xFF) + w11 * ((c11 >> 16) & 0xFF));
    int g = (int)(w00 * ((c00 >>  8) & 0xFF) + w10 * ((c10 >>  8) & 0xFF) + w01 * ((c01 >>  8) & 0xFF) + w11 * ((c11 >>  8) & 0xFF));
    int b = (int)(w00 * ( c00        & 0xFF) + w10 * ( c10        & 0xFF) + w01 * ( c01        & 0xFF) + w11 * ( c11        & 0xFF));

    return (0xFFU << 24) | ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | (b & 0xFF);
}

static void blit_bilinear_to_viewport(const uint32_t *src, int sw, int sh) {
    float x_ratio = (float)sw / (float)VIEWPORT_43_WIDTH;
    float y_ratio = (float)sh / (float)VIEWPORT_43_HEIGHT;

    for (int dy = 0; dy < VIEWPORT_43_HEIGHT; dy++) {
        float src_y = ((float)dy + 0.5f) * y_ratio - 0.5f;
        uint32_t *row_dst = g_backbuffer_1080p + dy * CANVAS_1080P_WIDTH + VIEWPORT_43_OFFSET_X;
        for (int dx = 0; dx < VIEWPORT_43_WIDTH; dx++) {
            float src_x = ((float)dx + 0.5f) * x_ratio - 0.5f;
            row_dst[dx] = bilinear_sample(src, sw, sh, src_x, src_y);
        }
    }
}

static void render_1080p_frame(int game_w, int game_h) {
    if (!g_border_inited) {
        init_thematic_borders();
    }

    /* 1. Blit thematic side borders into 1080p canvas */
    for (int y = 0; y < CANVAS_1080P_HEIGHT; y++) {
        uint32_t *dst_row = g_backbuffer_1080p + y * CANVAS_1080P_WIDTH;
        const uint32_t *src_border = g_border_texture + y * BORDER_WIDTH;

        /* Left pillarbox border (x = 0 .. 239) */
        memcpy(dst_row, src_border, BORDER_WIDTH * sizeof(uint32_t));

        /* Right pillarbox border (x = 1680 .. 1919), horizontally mirrored */
        uint32_t *right_dst = dst_row + (CANVAS_1080P_WIDTH - BORDER_WIDTH);
        for (int x = 0; x < BORDER_WIDTH; x++) {
            right_dst[x] = src_border[BORDER_WIDTH - 1 - x];
        }
    }

    /* 2. Upscale native game framebuffer into the 1440x1080 4:3 viewport */
    if (g_xbrz_factor >= 2) {
        int target_factor = g_xbrz_factor;
        /* For 320x200 low-res, use 4x xBRZ (or 3x) to generate high-resolution intermediate */
        if (game_w <= 320 && target_factor < 4) {
            target_factor = 4;
        }

        int up_w = game_w * target_factor;
        int up_h = game_h * target_factor;
        if (up_w <= 1920 && up_h <= 1440) {
            dk_xbrz_scale(target_factor, g_frame_argb_buf, g_xbrz_temp_buf, game_w, game_h);
            blit_bilinear_to_viewport(g_xbrz_temp_buf, up_w, up_h);
        } else {
            blit_bilinear_to_viewport(g_frame_argb_buf, game_w, game_h);
        }
    } else {
        /* Nearest-neighbor direct scaling */
        for (int dy = 0; dy < VIEWPORT_43_HEIGHT; dy++) {
            int sy = (dy * game_h) / VIEWPORT_43_HEIGHT;
            uint32_t *dst_row = g_backbuffer_1080p + dy * CANVAS_1080P_WIDTH + VIEWPORT_43_OFFSET_X;
            const uint32_t *src_row = g_frame_argb_buf + sy * game_w;
            for (int dx = 0; dx < VIEWPORT_43_WIDTH; dx++) {
                int sx = (dx * game_w) / VIEWPORT_43_WIDTH;
                dst_row[dx] = src_row[sx];
            }
        }
    }
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
static HWND  g_hwnd = NULL;
static int   g_win_w = 640, g_win_h = 480;
static RECT  g_prev_win_rect = {100, 100, 1700, 1000};
static DWORD g_prev_win_style = WS_OVERLAPPEDWINDOW;

static void get_viewport_dest_rect(int client_w, int client_h, int *dst_x, int *dst_y, int *dst_w, int *dst_h) {
    if (!g_upscale_1080p_enabled) {
        *dst_x = 0;
        *dst_y = 0;
        *dst_w = client_w;
        *dst_h = client_h;
        return;
    }
    int w = client_w;
    int h = (w * 9) / 16;
    if (h > client_h) {
        h = client_h;
        w = (h * 16) / 9;
    }
    *dst_w = (w > 0) ? w : client_w;
    *dst_h = (h > 0) ? h : client_h;
    *dst_x = (client_w - *dst_w) / 2;
    *dst_y = (client_h - *dst_h) / 2;
}

static void toggle_fullscreen(HWND hwnd) {
    g_fullscreen = !g_fullscreen;
    int screen_w = GetSystemMetrics(SM_CXSCREEN);
    int screen_h = GetSystemMetrics(SM_CYSCREEN);

    if (g_fullscreen) {
        GetWindowRect(hwnd, &g_prev_win_rect);
        g_prev_win_style = (DWORD)GetWindowLongPtrA(hwnd, GWL_STYLE);
        SetWindowLongPtrA(hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE);
        SetWindowPos(hwnd, HWND_TOP, 0, 0, screen_w, screen_h, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
    } else {
        SetWindowLongPtrA(hwnd, GWL_STYLE, WS_OVERLAPPEDWINDOW | WS_VISIBLE);
        int win_w = 1600;
        int win_h = 900;
        if (screen_w < 1600 || screen_h < 900) {
            win_w = 1280;
            win_h = 720;
        }
        int pos_x = (screen_w - win_w) / 2;
        int pos_y = (screen_h - win_h) / 2;
        if (pos_x < 0) pos_x = 0;
        if (pos_y < 0) pos_y = 0;
        if ((g_prev_win_rect.right - g_prev_win_rect.left > 640) &&
            (g_prev_win_rect.bottom - g_prev_win_rect.top > 480) &&
            (g_prev_win_rect.right - g_prev_win_rect.left < screen_w)) {
            win_w = g_prev_win_rect.right - g_prev_win_rect.left;
            win_h = g_prev_win_rect.bottom - g_prev_win_rect.top;
            pos_x = g_prev_win_rect.left;
            pos_y = g_prev_win_rect.top;
        }
        SetWindowPos(hwnd, HWND_NOTOPMOST, pos_x, pos_y, win_w, win_h, SWP_FRAMECHANGED | SWP_SHOWWINDOW);
    }
    InvalidateRect(hwnd, NULL, TRUE);
}

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
        case WM_ERASEBKGND:
            return 1;
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            RECT rc;
            GetClientRect(hwnd, &rc);
            int cw = rc.right - rc.left;
            int ch = rc.bottom - rc.top;

            if (g_upscale_1080p_enabled) {
                int dst_x, dst_y, dst_w, dst_h;
                get_viewport_dest_rect(cw, ch, &dst_x, &dst_y, &dst_w, &dst_h);

                if (dst_x > 0) {
                    RECT r1 = {0, 0, dst_x, ch};
                    RECT r2 = {dst_x + dst_w, 0, cw, ch};
                    FillRect(hdc, &r1, (HBRUSH)GetStockObject(BLACK_BRUSH));
                    FillRect(hdc, &r2, (HBRUSH)GetStockObject(BLACK_BRUSH));
                }
                if (dst_y > 0) {
                    RECT r1 = {0, 0, cw, dst_y};
                    RECT r2 = {0, dst_y + dst_h, cw, ch};
                    FillRect(hdc, &r1, (HBRUSH)GetStockObject(BLACK_BRUSH));
                    FillRect(hdc, &r2, (HBRUSH)GetStockObject(BLACK_BRUSH));
                }

                BITMAPINFO bmi;
                memset(&bmi, 0, sizeof(bmi));
                bmi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
                bmi.bmiHeader.biWidth       = CANVAS_1080P_WIDTH;
                bmi.bmiHeader.biHeight      = -CANVAS_1080P_HEIGHT;
                bmi.bmiHeader.biPlanes      = 1;
                bmi.bmiHeader.biBitCount    = 32;
                bmi.bmiHeader.biCompression = BI_RGB;
                StretchDIBits(
                    hdc,
                    dst_x, dst_y, dst_w, dst_h,
                    0, 0, CANVAS_1080P_WIDTH, CANVAS_1080P_HEIGHT,
                    g_backbuffer_1080p, &bmi, DIB_RGB_COLORS, SRCCOPY
                );
            } else {
                int w = DK_MEM_S32(VA_LB_WSCREEN_WIDTH);
                int h = DK_MEM_S32(VA_LB_WSCREEN_HEIGHT);
                if (w > 0 && h > 0 && g_frame_argb_buf) {
                    BITMAPINFO bmi;
                    memset(&bmi, 0, sizeof(bmi));
                    bmi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
                    bmi.bmiHeader.biWidth       = w;
                    bmi.bmiHeader.biHeight      = -h;
                    bmi.bmiHeader.biPlanes      = 1;
                    bmi.bmiHeader.biBitCount    = 32;
                    bmi.bmiHeader.biCompression = BI_RGB;
                    StretchDIBits(
                        hdc,
                        0, 0, cw, ch,
                        0, 0, w, h,
                        g_frame_argb_buf, &bmi, DIB_RGB_COLORS, SRCCOPY
                    );
                }
            }
            EndPaint(hwnd, &ps);
            return 0;
        }
        case WM_MOUSEMOVE: {
            RECT rc;
            GetClientRect(hwnd, &rc);
            int cw = (rc.right - rc.left) > 0 ? (rc.right - rc.left) : 640;
            int ch = (rc.bottom - rc.top) > 0 ? (rc.bottom - rc.top) : 480;
            int sw = DK_MEM_S32(VA_LB_PHYS_WIDTH)  > 0 ? DK_MEM_S32(VA_LB_PHYS_WIDTH)  : 640;
            int sh = DK_MEM_S32(VA_LB_PHYS_HEIGHT) > 0 ? DK_MEM_S32(VA_LB_PHYS_HEIGHT) : 480;

            int mouse_win_x = (short)LOWORD(lParam);
            int mouse_win_y = (short)HIWORD(lParam);

            if (g_upscale_1080p_enabled) {
                int dst_x, dst_y, dst_w, dst_h;
                get_viewport_dest_rect(cw, ch, &dst_x, &dst_y, &dst_w, &dst_h);

                float norm_x = ((float)(mouse_win_x - dst_x)) / (float)dst_w;
                float norm_y = ((float)(mouse_win_y - dst_y)) / (float)dst_h;
                if (norm_x < 0.0f) norm_x = 0.0f;
                if (norm_x > 1.0f) norm_x = 1.0f;
                if (norm_y < 0.0f) norm_y = 0.0f;
                if (norm_y > 1.0f) norm_y = 1.0f;

                float canvas_x = norm_x * (float)CANVAS_1080P_WIDTH;
                float canvas_y = norm_y * (float)CANVAS_1080P_HEIGHT;

                float rel_x = canvas_x - (float)VIEWPORT_43_OFFSET_X;
                float rel_y = canvas_y - (float)VIEWPORT_43_OFFSET_Y;

                int game_x = (int)((rel_x * (float)sw) / (float)VIEWPORT_43_WIDTH);
                int game_y = (int)((rel_y * (float)sh) / (float)VIEWPORT_43_HEIGHT);

                if (game_x < 0) game_x = 0;
                if (game_x >= sw) game_x = sw - 1;
                if (game_y < 0) game_y = 0;
                if (game_y >= sh) game_y = sh - 1;

                DK_MEM_S32(VA_LB_MMOUSE_X) = game_x;
                DK_MEM_S32(VA_LB_MMOUSE_Y) = game_y;
            } else {
                int mx = (mouse_win_x * sw) / cw;
                int my = (mouse_win_y * sh) / ch;
                if (mx < 0) mx = 0;
                if (mx >= sw) mx = sw - 1;
                if (my < 0) my = 0;
                if (my >= sh) my = sh - 1;
                DK_MEM_S32(VA_LB_MMOUSE_X) = mx;
                DK_MEM_S32(VA_LB_MMOUSE_Y) = my;
            }
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
            if (wParam == VK_F11 || (wParam == VK_RETURN && ((GetKeyState(VK_MENU) & 0x8000) || (lParam & (1 << 29))))) {
                toggle_fullscreen(hwnd);
                return 0;
            }
            uint8_t sc = (uint8_t)((lParam >> 16) & 0xFF);
            if (lParam & (1 << 24)) sc |= 0x80;
            volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)DK_VA(VA_LB_KEY_ON_TABLE);
            key_tab[sc] = 1;
            DK_MEM_U8(VA_LB_INKEY)  = sc;
            DK_MEM_U8(VA_LB_IINKEY) = sc;
            return 0;
        }
        case WM_KEYUP:
        case WM_SYSKEYUP: {
            uint8_t sc = (uint8_t)((lParam >> 16) & 0xFF);
            if (lParam & (1 << 24)) sc |= 0x80;
            volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)DK_VA(VA_LB_KEY_ON_TABLE);
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
                    volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)DK_VA(VA_LB_KEY_ON_TABLE);
                    key_tab[sc] = 1;
                    DK_MEM_U8(VA_LB_INKEY)  = sc;
                    DK_MEM_U8(VA_LB_IINKEY) = sc;
                }
            } else if (ev.type == SDL_KEYUP) {
                uint8_t sc = sdl_scancode_to_dk_set1(ev.key.keysym.scancode);
                if (sc) {
                    volatile uint8_t *key_tab = (volatile uint8_t *)(uintptr_t)DK_VA(VA_LB_KEY_ON_TABLE);
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
    dk_net_update();
}

static void platform_present_frame(int width, int height) {
    const uint8_t *wscreen = (const uint8_t *)(uintptr_t)DK_MEM_U32(VA_LB_WSCREEN_PTR);
    int pitch = DK_MEM_S32(VA_LB_WSCREEN_WIDTH);
    if (!wscreen) return;
    if (pitch <= 0) pitch = 640;

    int active_w = (int)DK_MEM_U16(0x0019cba4);
    int active_h = (int)DK_MEM_U16(0x0019cba2);
    if (active_w <= 0 || active_w > 640) active_w = (width > 0 && width <= 640) ? width : 640;
    if (active_h <= 0 || active_h > 480) active_h = (height > 0 && height <= 480) ? height : 480;

    /* Detect true rendered bounds: check if content extends beyond 320x200 */
    int render_w = 320;
    int render_h = 200;
    if (active_w >= 640 && pitch >= 640) {
        int non_zero_count = 0;
        for (int y = 50; y < 150; y += 10) {
            const uint8_t *row = wscreen + y * pitch;
            for (int x = 340; x < 620; x += 10) {
                if (row[x] != 0) non_zero_count++;
            }
        }
        if (non_zero_count > 10) {
            render_w = 640;
            render_h = (active_h >= 400) ? active_h : 400;
        }
    }

    static int print_count = 0;
    if (print_count++ < 5 || print_count % 30 == 0) {
        printf("[Present] width=%d, height=%d, active=%dx%d, render=%dx%d, pitch=%d\n",
               width, height, active_w, active_h, render_w, render_h, pitch);
        fflush(stdout);
    }

    /* Detect vertical content start offset in wscreen (e.g. 40-line centering offset) */
    int start_y = 0;
    while (start_y < 80) {
        const uint8_t *row = wscreen + start_y * pitch;
        int non_zero = 0;
        for (int x = 0; x < 320; x += 16) {
            if (row[x] != 0) non_zero++;
        }
        if (non_zero >= 3) break;
        start_y++;
    }
    if (start_y >= 80) start_y = 0;

    for (int y = 0; y < render_h; y++) {
        int sy = start_y + y;
        if (sy >= 480) sy = 479;
        const uint8_t *src = wscreen + sy * pitch;
        uint32_t *dst = g_frame_argb_buf + y * render_w;
        for (int x = 0; x < render_w; x++) {
            dst[x] = g_argb_palette[src[x]];
        }
    }

    if (g_upscale_1080p_enabled) {
        render_1080p_frame(render_w, render_h);
    }

    g_swap_counter++;
    if (g_dump_dir[0] != '\0' && (g_swap_counter == 1 || g_swap_counter == 5 || g_swap_counter % 20 == 0 || g_swap_counter == g_max_frames)) {
        char bmp_path[1200];
        if (g_upscale_1080p_enabled) {
            snprintf(bmp_path, sizeof(bmp_path), "%s/frame_%04d_1080p.bmp", g_dump_dir, g_swap_counter);
            save_bmp_frame(bmp_path, g_backbuffer_1080p, CANVAS_1080P_WIDTH, CANVAS_1080P_HEIGHT);
            printf("[Runtime] Saved 1080p rendered frame #%d (%dx%d) -> %s\n", g_swap_counter, CANVAS_1080P_WIDTH, CANVAS_1080P_HEIGHT, bmp_path);
        } else {
            snprintf(bmp_path, sizeof(bmp_path), "%s/frame_%04d_%dx%d.bmp", g_dump_dir, g_swap_counter, width, height);
            save_bmp_frame(bmp_path, g_frame_argb_buf, width, height);
            printf("[Runtime] Saved rendered frame #%d (%dx%d) -> %s\n", g_swap_counter, width, height, bmp_path);
        }
        fflush(stdout);
    }

    if (g_max_frames > 0 && g_swap_counter >= g_max_frames) {
        printf("[Runtime] Reached target validation frame count (%d). Requesting clean shutdown.\n", g_max_frames);
        fflush(stdout);
        DK_MEM_U8(VA_LB_EXIT_GAME_FLAG) = 1;
        exit(0);
    }

    if (g_test_start_game && g_swap_counter >= 15) {
        /* Start New Game button is at (320, 135) in 640x480 space (or 160, 68 in 320x200) */
        int sw = DK_MEM_S32(VA_LB_PHYS_WIDTH)  > 0 ? DK_MEM_S32(VA_LB_PHYS_WIDTH)  : 640;
        int click_x = (sw >= 640) ? 320 : 160;
        int click_y = (sw >= 640) ? 135 : 68;
        DK_MEM_S32(VA_LB_MMOUSE_X) = click_x;
        DK_MEM_S32(VA_LB_MMOUSE_Y) = click_y;
        DK_MEM_S32(VA_LB_MOUSE_X)  = click_x;
        DK_MEM_S32(VA_LB_MOUSE_Y)  = click_y;
        if (g_swap_counter == 15 || g_swap_counter == 16) {
            DK_MEM_U8(VA_LB_MLEFT_BUTTON) = 1;
            DK_MEM_U8(VA_LB_LEFT_BUTTON)  = 1;
            printf("[TestClick] Injected LeftMouseDown at (%d, %d) on frame %d\n", click_x, click_y, g_swap_counter);
            fflush(stdout);
        } else if (g_swap_counter == 17) {
            DK_MEM_U8(VA_LB_MLEFT_BUTTON) = 0;
            DK_MEM_U8(VA_LB_RLEFT_BUTTON) = 1;
            DK_MEM_S32(VA_LB_RMOUSE_X)    = click_x;
            DK_MEM_S32(VA_LB_RMOUSE_Y)    = click_y;
            printf("[TestClick] Injected LeftMouseUp at (%d, %d) on frame %d\n", click_x, click_y, g_swap_counter);
            fflush(stdout);
        }
    }

    if (g_test_multiplayer_gui || g_net_cli_is_client || g_net_cli_is_host) {
        if (g_swap_counter == 40) {
            printf("[Network] Auto-navigating to Multiplayer Services (screen 4)...\n");
            fflush(stdout);
            uint32_t eax = 4;
            uint32_t target_fn = DK_VA(0x0002e8a7);
            __asm__ __volatile__(
                "call *%1"
                : "+a"(eax)
                : "r"(target_fn)
                : "ecx", "edx", "ebx", "esi", "edi", "memory"
            );
        } else if (g_swap_counter == 50) {
            printf("[Network] Auto-selecting TCP/IP Internet & LAN (service 2)...\n");
            fflush(stdout);
            uint32_t eax = 2;
            uint32_t target_fn = DK_VA(0x0003315b);
            __asm__ __volatile__(
                "call *%1"
                : "+a"(eax)
                : "r"(target_fn)
                : "ecx", "edx", "ebx", "esi", "edi", "memory"
            );
        } else if (g_swap_counter == 60) {
            if (g_net_cli_is_host) {
                printf("[Network] Auto-hosting room (calling Create handler)...\n");
                fflush(stdout);
                typedef void (*fn_action_t)(void);
                ((fn_action_t)(uintptr_t)DK_VA(0x00034a8a))();
            } else if (g_net_cli_is_client || g_test_multiplayer_gui) {
                printf("[Network] Auto-joining room (calling Join handler)...\n");
                fflush(stdout);
                typedef void (*fn_action_t)(void);
                ((fn_action_t)(uintptr_t)DK_VA(0x000349d9))();
            }
        }
    }

    if (!g_headless_mode && (g_swap_counter == 1 || g_swap_counter % 300 == 0)) {
        printf("[Runtime] Interactive running: Frame #%d (%dx%d -> 1080p)\n", g_swap_counter, width, height);
        fflush(stdout);
    }

#ifdef USE_SDL2
    if (!g_headless_mode) {
        if (!g_sdl_window) {
            if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) == 0) {
                int win_w = g_upscale_1080p_enabled ? 1280 : 960;
                int win_h = g_upscale_1080p_enabled ? 720 : 720;
                int win_flags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN;
                if (g_fullscreen) win_flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
                g_sdl_window = SDL_CreateWindow(
                    "Dungeon Keeper (Reconstructed Native Runtime - 1080p)",
                    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                    win_w, win_h, win_flags
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
            int out_w = g_upscale_1080p_enabled ? CANVAS_1080P_WIDTH : width;
            int out_h = g_upscale_1080p_enabled ? CANVAS_1080P_HEIGHT : height;
            const uint32_t *out_pixels = g_upscale_1080p_enabled ? g_backbuffer_1080p : g_frame_argb_buf;

            if (!g_sdl_texture || g_tex_w != out_w || g_tex_h != out_h) {
                if (g_sdl_texture) SDL_DestroyTexture(g_sdl_texture);
                g_sdl_texture = SDL_CreateTexture(g_sdl_renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, out_w, out_h);
                g_tex_w = out_w;
                g_tex_h = out_h;
            }
            SDL_UpdateTexture(g_sdl_texture, NULL, out_pixels, out_w * 4);
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

            int screen_w = GetSystemMetrics(SM_CXSCREEN);
            int screen_h = GetSystemMetrics(SM_CYSCREEN);

            if (g_fullscreen) {
                g_hwnd = CreateWindowA(
                    "DKReconstructedWnd",
                    "Dungeon Keeper (Reconstructed Native Runtime - 1080p HD)",
                    WS_POPUP | WS_VISIBLE,
                    0, 0,
                    screen_w, screen_h,
                    NULL, NULL, wc.hInstance, NULL
                );
            } else {
                int win_w = 1600;
                int win_h = 900;
                if (screen_w < 1600 || screen_h < 900) {
                    win_w = 1280;
                    win_h = 720;
                }

                RECT rc = {0, 0, win_w, win_h};
                AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);
                int actual_w = rc.right - rc.left;
                int actual_h = rc.bottom - rc.top;
                int pos_x = (screen_w - actual_w) / 2;
                int pos_y = (screen_h - actual_h) / 2;
                if (pos_x < 0) pos_x = 0;
                if (pos_y < 0) pos_y = 0;

                g_hwnd = CreateWindowA(
                    "DKReconstructedWnd",
                    "Dungeon Keeper (Reconstructed Native Runtime - 1080p HD)",
                    WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                    pos_x, pos_y,
                    actual_w, actual_h,
                    NULL, NULL, wc.hInstance, NULL
                );
            }
            ShowCursor(FALSE);
        }
        if (g_hwnd) {
            HDC hdc = GetDC(g_hwnd);
            RECT rc;
            GetClientRect(g_hwnd, &rc);
            int cw = rc.right - rc.left;
            int ch = rc.bottom - rc.top;

            if (g_upscale_1080p_enabled) {
                int dst_x, dst_y, dst_w, dst_h;
                get_viewport_dest_rect(cw, ch, &dst_x, &dst_y, &dst_w, &dst_h);

                BITMAPINFO bmi;
                memset(&bmi, 0, sizeof(bmi));
                bmi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
                bmi.bmiHeader.biWidth       = CANVAS_1080P_WIDTH;
                bmi.bmiHeader.biHeight      = -CANVAS_1080P_HEIGHT;
                bmi.bmiHeader.biPlanes      = 1;
                bmi.bmiHeader.biBitCount    = 32;
                bmi.bmiHeader.biCompression = BI_RGB;
                StretchDIBits(
                    hdc,
                    dst_x, dst_y, dst_w, dst_h,
                    0, 0, CANVAS_1080P_WIDTH, CANVAS_1080P_HEIGHT,
                    g_backbuffer_1080p, &bmi, DIB_RGB_COLORS, SRCCOPY
                );
            } else {
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
                    0, 0, cw, ch,
                    0, 0, width, height,
                    g_frame_argb_buf, &bmi, DIB_RGB_COLORS, SRCCOPY
                );
            }
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
    const char *file = (eax >= DK_VA(0x10000) && eax < DK_VA(0x400000)) ? (const char *)(uintptr_t)eax :
                       ((eax >= 0x10000 && eax < 0x400000) ? (const char *)(uintptr_t)eax : "unknown");
    const char *msg  = (ebx >= DK_VA(0x10000) && ebx < DK_VA(0x400000)) ? (const char *)(uintptr_t)ebx :
                       ((ebx >= 0x10000 && ebx < 0x400000) ? (const char *)(uintptr_t)ebx : "");
    static char last_msg_buf[128] = {0};
    static int repeat_count = 0;
    if (msg != NULL && msg[0] != '\0' && strncmp(msg, last_msg_buf, sizeof(last_msg_buf)) == 0) {
        repeat_count++;
        if (repeat_count == 5) {
            printf("[LbErrorLog] (suppressing repeated error: '%s')\n", last_msg_buf);
            fflush(stdout);
        }
        if (repeat_count >= 5) {
            return 1;
        }
    } else {
        if (msg) snprintf(last_msg_buf, sizeof(last_msg_buf), "%s", msg);
        repeat_count = 0;
    }
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
    if (eax == 0x4b000u || eax == 0xfa00u || eax == 640 * 480) {
        static int sc_idx = 0;
        void *sc_bufs[3] = { g_persistent_wscreen, g_persistent_pscreen, g_persistent_bscreen };
        void *ptr = sc_bufs[(sc_idx++) % 3];
        memset(ptr, 0, 640 * 480 + 4096);
        return (uint32_t)(uintptr_t)ptr;
    }
    void *ptr = calloc(1, eax + 64);
    return (uint32_t)(uintptr_t)ptr;
}

/* 0x0e94b0 / 0x0f4d9b: LbMemoryFree / watcom_free (ptr=EAX) */
static uint32_t hook_LbMemoryFree(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    if (eax == (uint32_t)(uintptr_t)g_persistent_wscreen ||
        eax == (uint32_t)(uintptr_t)g_persistent_pscreen ||
        eax == (uint32_t)(uintptr_t)g_persistent_bscreen) {
        return 1;
    }
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
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U32(VA_LB_SCREEN_INITIALIZED) = 1;
    if (eax == 10) return 0; /* Reject legacy Mode 10 (640x400) so engine chooses Mode 13 (640x480) */
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

/* 0x0006b4c7: setup_show_bullfrog_legal_splash */
static uint32_t hook_setup_show_bullfrog_legal_splash(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    printf("[Splash] Skipping legal splash & intro cutscene; maintaining high-res Mode 13\n");
    fflush(stdout);
    return 1;
}

/* 0x0e7750: LbScreenSetup(__cdecl: mode=stack[0], width=stack[1], height=stack[2], palette=stack[3]) */
static uint32_t hook_LbScreenSetup(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    uint32_t mode    = stack[0] & 0xFF;
    int32_t  width   = (int32_t)stack[1];
    int32_t  height  = (int32_t)stack[2];
    uint32_t palette = stack[3];
    uint32_t caller  = stack ? stack[-1] : 0;

    printf("[LbScreenSetup] Caller=0x%08x (orig=0x%08x), Mode=%u, W=%d, H=%d\n",
           caller, caller - g_rebase_delta, mode, width, height);
    fflush(stdout);

    /* Lookup mode dimensions from mode table @ 0x00194fe0 if needed */
    uint16_t mode_w = DK_MEM_U16(0x00194fe0 + mode * 0x26);
    uint16_t mode_h = DK_MEM_U16(0x00194fe2 + mode * 0x26);
    if (mode_w == 0) mode_w = (uint16_t)(width > 0 ? width : (mode == 1 ? 320 : 640));
    if (mode_h == 0) mode_h = (uint16_t)(height > 0 ? height : (mode == 1 ? 200 : 480));
    if (width <= 0)  width  = mode_w;
    if (height <= 0) height = mode_h;

    /* Assign persistent screen buffers */
    DK_MEM_U32(VA_LB_WSCREEN_PTR)     = (uint32_t)(uintptr_t)g_persistent_wscreen;
    DK_MEM_U32(VA_LB_PHYSICAL_SCREEN) = (uint32_t)(uintptr_t)g_persistent_pscreen;
    DK_MEM_U16(VA_LB_DRAW_FLAGS)      = 0;
    DK_MEM_S32(VA_LB_PHYS_WIDTH)      = mode_w;
    DK_MEM_S32(VA_LB_PHYS_HEIGHT)     = mode_h;
    DK_MEM_S32(VA_LB_WSCREEN_WIDTH)   = width;
    DK_MEM_S32(VA_LB_WSCREEN_HEIGHT)  = height;
    DK_MEM_S16(VA_LB_SCREEN_MODE)     = (int16_t)mode;
    DK_MEM_U8(VA_LB_VESA_PAGED)       = 0;
    DK_MEM_U8(0x003d9885)             = 0;
    DK_MEM_U32(0x003de9b8)            = 0x00010000;
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

/* 0x06ae37: setup_clear_screen_backbuffer() */
static uint32_t hook_setup_clear_screen_backbuffer(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    memset(g_persistent_pscreen, 0, sizeof(g_persistent_pscreen));
    memset(g_persistent_wscreen, 0, sizeof(g_persistent_wscreen));
    return 1;
}

/* 0x0f0d1c: LbScreenSetBank(uint16_t bank=AX) */
static uint32_t hook_LbScreenSetBank(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    DK_MEM_U16(0x003de9b8) = (uint16_t)eax;
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

static uint32_t hook_ret_one(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1;
}

/* ============================================================================
 * Native Audio Mixer & Miles Sound System (AIL) Emulation Layer
 * ============================================================================ */
#define STB_VORBIS_HEADER_ONLY
#include "stb_vorbis.c"

#define MAX_AUDIO_VOICES 48
#define AUDIO_SAMPLE_RATE 44100

static stb_vorbis *g_music_vorbis = NULL;
static uint32_t g_dummy_redbook[64];
static uint32_t g_cd_current_track = 2;
static uint32_t g_cd_status = 1; /* 1 = REDBOOK_STOPPED, 2 = REDBOOK_PLAYING */
static int32_t  g_cd_volume = 127;

typedef struct {
    void *driver;             /* 0x00 */
    uint32_t system_data;     /* 0x04 */
    int32_t  status;          /* 0x08: 1=SMP_FREE, 2=SMP_DONE/STOPPED, 4=SMP_PLAYING */
    const uint8_t *pcm;       /* 0x0c: pointer to raw PCM bytes */
    uint32_t pos;             /* 0x10: current playback byte offset */
    uint32_t len;             /* 0x14: length in bytes */
    uint32_t done;            /* 0x18: bytes played */
    uint8_t  _pad1[0x38 - 0x1c];
    int32_t  loop_count;      /* 0x38: 1 = play once, 0 = loop forever */
    uint8_t  _pad2[0x44 - 0x3c];
    int32_t  format;          /* 0x44: 0 = mono 8-bit unsigned, 1 = mono 16-bit signed, 2 = stereo 8, 3 = stereo 16 */
    uint32_t flags;           /* 0x48 */
    int32_t  playback_rate;   /* 0x4c: sample rate, e.g. 22050, 11025 */
    int32_t  volume;          /* 0x50: 0..127 */
    int32_t  pan;             /* 0x54: 0..127 (64 = center) */
    double   pos_frac;        /* 0x58: fractional sample position accumulator */
    uint8_t  _reserved[0x8a8 - 0x60]; /* Total size 0x8a8 bytes matching AIL 3.0 _SAMPLE */
} native_voice_t;

static native_voice_t g_voices[MAX_AUDIO_VOICES];
static bool g_audio_initialized = false;
static bool g_nosound_requested = false;

#ifdef _WIN32
static CRITICAL_SECTION g_audio_cs;
#define AUDIO_LOCK()   EnterCriticalSection(&g_audio_cs)
#define AUDIO_UNLOCK() LeaveCriticalSection(&g_audio_cs)

#define AUDIO_NUM_BUFFERS 4
#define AUDIO_BUFFER_FRAMES 1024

static HWAVEOUT g_hWaveOut = NULL;
static WAVEHDR  g_wave_hdrs[AUDIO_NUM_BUFFERS];
static int16_t  g_audio_pcm[AUDIO_NUM_BUFFERS][AUDIO_BUFFER_FRAMES * 2];
static HANDLE   g_audio_thread = NULL;
static volatile bool g_audio_running = false;
#else
static pthread_mutex_t g_audio_mutex = PTHREAD_MUTEX_INITIALIZER;
#define AUDIO_LOCK()   pthread_mutex_lock(&g_audio_mutex)
#define AUDIO_UNLOCK() pthread_mutex_unlock(&g_audio_mutex)
#endif

static bool native_parse_wav(const uint8_t *data, native_voice_t *v) {
    if (!data) return false;
    if (memcmp(data, "RIFF", 4) != 0 || memcmp(data + 8, "WAVE", 4) != 0) return false;

    uint32_t riff_len = *(const uint32_t *)(data + 4);
    if (riff_len < 4 || riff_len > 0x10000000) return false;
    uint32_t total_size = riff_len + 8;

    uint32_t offset = 12;
    bool found_fmt = false, found_data = false;

    while (offset + 8 <= total_size) {
        const char *chunk_id = (const char *)(data + offset);
        uint32_t chunk_size = *(const uint32_t *)(data + offset + 4);
        const uint8_t *chunk_data = data + offset + 8;

        if (offset + 8 + chunk_size > total_size) {
            chunk_size = total_size - (offset + 8);
        }

        if (memcmp(chunk_id, "fmt ", 4) == 0 && chunk_size >= 14) {
            uint16_t audio_format = *(const uint16_t *)(chunk_data + 0);
            uint16_t channels = *(const uint16_t *)(chunk_data + 2);
            uint32_t sample_rate = *(const uint32_t *)(chunk_data + 4);
            uint16_t bits = (chunk_size >= 16) ? *(const uint16_t *)(chunk_data + 14) : 8;

            if (audio_format == 1) { /* PCM */
                v->playback_rate = sample_rate;
                if (channels == 1) {
                    v->format = (bits == 16) ? 1 : 0;
                } else {
                    v->format = (bits == 16) ? 3 : 2;
                }
                found_fmt = true;
            }
        } else if (memcmp(chunk_id, "data", 4) == 0) {
            v->pcm = chunk_data;
            v->len = chunk_size;
            found_data = true;
        }

        uint32_t step = 8 + ((chunk_size + 1) & ~1);
        if (step == 0 || offset + step <= offset) break;
        offset += step;
    }
    return found_fmt && found_data;
}

static bool native_parse_voc(const uint8_t *data, native_voice_t *v) {
    if (!data) return false;
    if (memcmp(data, "Creative Voice File", 19) != 0) return false;

    uint16_t header_len = *(const uint16_t *)(data + 20);
    uint32_t offset = header_len;

    while (offset < 0x2000000) {
        uint8_t block_type = data[offset];
        if (block_type == 0) break;

        uint32_t block_len = (uint32_t)data[offset + 1] |
                            ((uint32_t)data[offset + 2] << 8) |
                            ((uint32_t)data[offset + 3] << 16);
        const uint8_t *block_data = data + offset + 4;

        if (block_type == 1 && block_len >= 2) {
            uint8_t tc = block_data[0];
            uint8_t pack = block_data[1];
            if (pack == 0) {
                v->playback_rate = (256 > (uint32_t)tc) ? (1000000 / (256 - (uint32_t)tc)) : 11025;
                v->format = 0; /* mono 8-bit */
                v->pcm = block_data + 2;
                v->len = block_len - 2;
                return true;
            }
        }
        uint32_t step = 4 + block_len;
        if (step == 0) break;
        offset += step;
    }
    return false;
}

static bool native_parse_sample_file(const uint8_t *data, native_voice_t *v) {
    if (!data) return false;
    if (native_parse_wav(data, v)) return true;
    if (native_parse_voc(data, v)) return true;
    return false;
}

static void native_mix_audio(int16_t *out_stereo, int num_frames) {
    static int32_t mix_buf_l[1024];
    static int32_t mix_buf_r[1024];

    if (num_frames > 1024) num_frames = 1024;
    memset(mix_buf_l, 0, num_frames * sizeof(int32_t));
    memset(mix_buf_r, 0, num_frames * sizeof(int32_t));

    AUDIO_LOCK();
    for (int vi = 0; vi < MAX_AUDIO_VOICES; vi++) {
        native_voice_t *v = &g_voices[vi];
        if (v->status != 4 || !v->pcm || v->len == 0 || v->playback_rate <= 0) {
            continue;
        }

        double step = (double)v->playback_rate / (double)AUDIO_SAMPLE_RATE;
        int32_t vol = (v->volume < 0) ? 0 : (v->volume > 127 ? 127 : v->volume);
        int32_t pan = (v->pan < 0) ? 0 : (v->pan > 127 ? 127 : v->pan);

        int32_t left_gain  = (vol * (127 - pan)) / 64;
        int32_t right_gain = (vol * pan) / 64;
        if (left_gain > 127) left_gain = 127;
        if (right_gain > 127) right_gain = 127;

        for (int i = 0; i < num_frames; i++) {
            int16_t sample_val = 0;

            if (v->format == 1) { /* Mono 16-bit signed */
                uint32_t byte_idx = v->pos & ~1;
                if (byte_idx + 2 > v->len) {
                    if (v->loop_count == 0 || v->loop_count > 1) {
                        if (v->loop_count > 1) v->loop_count--;
                        v->pos = 0;
                        v->pos_frac = 0.0;
                        byte_idx = 0;
                    } else {
                        v->status = 2; /* SMP_STOPPED */
                        break;
                    }
                }
                sample_val = *(const int16_t *)(v->pcm + byte_idx);
            } else if (v->format == 0) { /* Mono 8-bit unsigned */
                if (v->pos >= v->len) {
                    if (v->loop_count == 0 || v->loop_count > 1) {
                        if (v->loop_count > 1) v->loop_count--;
                        v->pos = 0;
                        v->pos_frac = 0.0;
                    } else {
                        v->status = 2; /* SMP_STOPPED */
                        break;
                    }
                }
                uint8_t u8 = v->pcm[v->pos];
                sample_val = ((int16_t)u8 - 128) << 8;
            } else {
                v->status = 2;
                break;
            }

            mix_buf_l[i] += (sample_val * left_gain) >> 7;
            mix_buf_r[i] += (sample_val * right_gain) >> 7;

            v->pos_frac += step;
            uint32_t advance = (uint32_t)v->pos_frac;
            v->pos += (v->format == 1) ? (advance * 2) : advance;
            v->pos_frac -= advance;
        }
    }

    if (g_music_vorbis && g_cd_status == 2) {
        static int16_t vorbis_pcm[1024 * 2];
        int frames_to_read = num_frames;
        int frames_read = 0;
        while (frames_to_read > 0) {
            int n = stb_vorbis_get_samples_short_interleaved(
                g_music_vorbis, 2, vorbis_pcm + (frames_read * 2), frames_to_read * 2);
            if (n <= 0) {
                /* Loop track seamlessly */
                stb_vorbis_seek_start(g_music_vorbis);
                n = stb_vorbis_get_samples_short_interleaved(
                    g_music_vorbis, 2, vorbis_pcm + (frames_read * 2), frames_to_read * 2);
                if (n <= 0) break;
            }
            frames_read += n;
            frames_to_read -= n;
        }

        int32_t music_vol = (g_cd_volume < 0) ? 0 : (g_cd_volume > 127 ? 127 : g_cd_volume);
        for (int i = 0; i < frames_read; i++) {
            mix_buf_l[i] += (vorbis_pcm[i * 2 + 0] * music_vol) >> 7;
            mix_buf_r[i] += (vorbis_pcm[i * 2 + 1] * music_vol) >> 7;
        }
    }
    AUDIO_UNLOCK();

    for (int i = 0; i < num_frames; i++) {
        int32_t l = mix_buf_l[i];
        int32_t r = mix_buf_r[i];
        if (l > 32767) l = 32767; else if (l < -32768) l = -32768;
        if (r > 32767) r = 32767; else if (r < -32768) r = -32768;
        out_stereo[i * 2 + 0] = (int16_t)l;
        out_stereo[i * 2 + 1] = (int16_t)r;
    }
}

#ifdef _WIN32
static DWORD WINAPI win32_audio_worker(LPVOID param) {
    (void)param;
    while (g_audio_running) {
        bool wrote = false;
        for (int i = 0; i < AUDIO_NUM_BUFFERS; i++) {
            if (g_wave_hdrs[i].dwFlags & WHDR_DONE) {
                native_mix_audio(g_audio_pcm[i], AUDIO_BUFFER_FRAMES);
                waveOutWrite(g_hWaveOut, &g_wave_hdrs[i], sizeof(WAVEHDR));
                wrote = true;
            }
        }
        if (!wrote) {
            Sleep(5);
        }
    }
    return 0;
}

static void native_audio_init_win32(void) {
    static bool cs_inited = false;
    if (!cs_inited) {
        InitializeCriticalSection(&g_audio_cs);
        cs_inited = true;
    }

    WAVEFORMATEX wfx;
    memset(&wfx, 0, sizeof(wfx));
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = 2;
    wfx.nSamplesPerSec = AUDIO_SAMPLE_RATE;
    wfx.wBitsPerSample = 16;
    wfx.nBlockAlign = wfx.nChannels * (wfx.wBitsPerSample / 8); /* 4 */
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign; /* 88200 */
    wfx.cbSize = 0;

    MMRESULT res = waveOutOpen(&g_hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        fprintf(stderr, "[audio] waveOutOpen failed: %u\n", (unsigned)res);
        return;
    }

    for (int i = 0; i < AUDIO_NUM_BUFFERS; i++) {
        memset(&g_wave_hdrs[i], 0, sizeof(WAVEHDR));
        g_wave_hdrs[i].lpData = (LPSTR)g_audio_pcm[i];
        g_wave_hdrs[i].dwBufferLength = AUDIO_BUFFER_FRAMES * 2 * sizeof(int16_t);
        waveOutPrepareHeader(g_hWaveOut, &g_wave_hdrs[i], sizeof(WAVEHDR));
        memset(g_audio_pcm[i], 0, g_wave_hdrs[i].dwBufferLength);
        waveOutWrite(g_hWaveOut, &g_wave_hdrs[i], sizeof(WAVEHDR));
    }

    g_audio_running = true;
    g_audio_thread = CreateThread(NULL, 0, win32_audio_worker, NULL, 0, NULL);
    fprintf(stderr, "[audio] Native Win32 waveOut audio mixer initialized (22050Hz stereo 16-bit)\n");
}
#endif

/* --- AIL Hook Handlers --- */
static uint32_t hook_ail_startup(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0; /* AIL_startup success */
}

static uint32_t hook_ail_api_read_ini(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    void *ini_struct = (void *)stack[0];
    const char *ini_filename = (const char *)stack[1];

    if (ini_filename && (strstr(ini_filename, "DIG") != NULL || strstr(ini_filename, "dig") != NULL || strstr(ini_filename, "Dig") != NULL)) {
        if (ini_struct) {
            strcpy((char *)ini_struct + 0x80, "DirectSound / WaveOut");
        }
        return 1; /* Success */
    }
    return 0; /* MDI.INI not provided, game skips MIDI */
}

static uint32_t hook_ail_install_dig_ini(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    void **dig_driver = (void **)stack[0];
    if (dig_driver) {
        *dig_driver = (void *)0x12345678;
    }
#ifdef _WIN32
    if (!g_audio_initialized) {
        native_audio_init_win32();
        g_audio_initialized = true;
    }
#endif
    printf("[AIL] DIG.INI driver installed successfully (Native WinMM WaveOut)\n");
    fflush(stdout);
    return 0; /* DIG_OK */
}

static uint32_t hook_ail_install_dig_driver_file(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0x12345678;
}

static uint32_t hook_ail_uninstall_dig_driver(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}

static uint32_t hook_ail_allocate_sample_handle(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    void *driver = (void *)stack[0];

    AUDIO_LOCK();
    native_voice_t *chosen = NULL;
    for (int i = 0; i < MAX_AUDIO_VOICES; i++) {
        if (g_voices[i].status == 1 || g_voices[i].status == 0) {
            chosen = &g_voices[i];
            break;
        }
    }
    if (!chosen) {
        for (int i = 0; i < MAX_AUDIO_VOICES; i++) {
            if (g_voices[i].status == 2) {
                chosen = &g_voices[i];
                break;
            }
        }
    }
    if (chosen) {
        memset(chosen, 0, sizeof(native_voice_t));
        chosen->driver = driver;
        chosen->status = 2; /* SMP_STOPPED */
        chosen->format = 1; /* Mono 16-bit */
        chosen->playback_rate = 22050;
        chosen->volume = 127;
        chosen->pan = 64;
        chosen->loop_count = 1;
    }
    AUDIO_UNLOCK();

    return (uint32_t)(uintptr_t)chosen;
}

static uint32_t hook_ail_release_sample_handle(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    if (v) {
        AUDIO_LOCK();
        v->status = 1; /* SMP_FREE */
        v->pcm = NULL;
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_init_sample(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    if (v) {
        AUDIO_LOCK();
        v->status = 2; /* SMP_STOPPED */
        v->pos = 0;
        v->pos_frac = 0.0;
        v->loop_count = 1;
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_set_sample_file(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    const void *file_data = (const void *)stack[1];
    (void)stack[2];

    if (v && file_data) {
        AUDIO_LOCK();
        native_parse_sample_file((const uint8_t *)file_data, v);
        AUDIO_UNLOCK();
    }
    return 1;
}

static uint32_t hook_ail_set_sample_address(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    const void *pcm = (const void *)stack[1];
    uint32_t len = (uint32_t)stack[2];

    if (v) {
        AUDIO_LOCK();
        v->pcm = (const uint8_t *)pcm;
        v->len = len;
        v->pos = 0;
        v->pos_frac = 0.0;
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_set_sample_type(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    int32_t format = (int32_t)stack[1];
    uint32_t flags = (uint32_t)stack[2];

    if (v) {
        AUDIO_LOCK();
        v->format = format;
        v->flags = flags;
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_start_sample(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];

    if (v) {
        AUDIO_LOCK();
        v->pos = 0;
        v->pos_frac = 0.0;
        v->status = 4; /* SMP_PLAYING */
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_stop_sample(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];

    if (v) {
        AUDIO_LOCK();
        v->status = 2; /* SMP_STOPPED */
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_resume_sample(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];

    if (v) {
        AUDIO_LOCK();
        v->status = 4; /* SMP_PLAYING */
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_set_sample_playback_rate(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    int32_t rate = (int32_t)stack[1];

    if (v) {
        AUDIO_LOCK();
        v->playback_rate = rate;
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_set_sample_volume(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    int32_t vol = (int32_t)stack[1];

    if (v) {
        AUDIO_LOCK();
        v->volume = (vol < 0) ? 0 : (vol > 127 ? 127 : vol);
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_set_sample_pan(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    int32_t pan = (int32_t)stack[1];

    if (v) {
        AUDIO_LOCK();
        v->pan = (pan < 0) ? 0 : (pan > 127 ? 127 : pan);
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_set_sample_loop_count(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    int32_t loop_count = (int32_t)stack[1];

    if (v) {
        AUDIO_LOCK();
        v->loop_count = loop_count;
        AUDIO_UNLOCK();
    }
    return 0;
}

static uint32_t hook_ail_sample_status(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    native_voice_t *v = (native_voice_t *)stack[0];
    if (!v) return 2; /* SMP_STOPPED */
    return (uint32_t)v->status;
}

static uint32_t hook_ail_set_digital_master_volume(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}

static uint32_t hook_ail_digital_master_volume(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 127;
}

static uint32_t hook_ail_minimum_sample_buffer_size(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1024;
}

static uint32_t hook_ail_register_callback(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}

static uint32_t hook_ail_set_preference(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}


static uint32_t hook_ail_redbook_open(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    g_dummy_redbook[0] = (uint32_t)(uintptr_t)g_dummy_redbook;
    printf("[Redbook] Device opened\n");
    fflush(stdout);
    return (uint32_t)(uintptr_t)g_dummy_redbook;
}

static uint32_t hook_ail_redbook_close(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    printf("[Redbook] Device closed\n");
    fflush(stdout);
    return 0;
}

static uint32_t hook_ail_redbook_status(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return g_cd_status;
}

static uint32_t hook_ail_redbook_tracks(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 7; /* 1 data track + 6 audio tracks (keeper02..keeper07) */
}

static uint32_t hook_ail_redbook_track_info(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    uint32_t track = stack ? stack[1] : 0;
    uint32_t *start_ms = stack ? (uint32_t *)stack[2] : NULL;
    uint32_t *end_ms = stack ? (uint32_t *)stack[3] : NULL;
    if (start_ms) *start_ms = (track > 0 ? track - 1 : 0) * 300000;
    if (end_ms) *end_ms = (track > 0 ? track : 1) * 300000;
    return 1;
}

static uint32_t hook_ail_redbook_track(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return g_cd_current_track;
}

static uint32_t hook_ail_redbook_play(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    uint32_t start_ms = stack ? stack[1] : 0;
    uint32_t end_ms = stack ? stack[2] : 0;
    uint32_t track = (start_ms / 300000) + 1;
    if (track < 2) track = 2;

    AUDIO_LOCK();
    if (g_music_vorbis) {
        stb_vorbis_close(g_music_vorbis);
        g_music_vorbis = NULL;
    }
    char ogg_path[512];
    snprintf(ogg_path, sizeof(ogg_path), "%s/keeper%02u.ogg", g_game_dir, track);
    int vorbis_err = 0;
    g_music_vorbis = stb_vorbis_open_filename(ogg_path, &vorbis_err, NULL);
    if (!g_music_vorbis) {
        snprintf(ogg_path, sizeof(ogg_path), "keeper%02u.ogg", track);
        g_music_vorbis = stb_vorbis_open_filename(ogg_path, &vorbis_err, NULL);
    }
    if (g_music_vorbis) {
        printf("[Redbook] Playing OGG music '%s' (track %u, ms %u..%u)\n", ogg_path, track, start_ms, end_ms);
    } else {
        printf("[Redbook] Could not open OGG track '%s' (err=%d)\n", ogg_path, vorbis_err);
    }
    g_cd_current_track = track;
    g_cd_status = 2; /* REDBOOK_PLAYING */
    AUDIO_UNLOCK();
    fflush(stdout);
    return 1;
}

static uint32_t hook_ail_redbook_stop(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    AUDIO_LOCK();
    if (g_music_vorbis) {
        stb_vorbis_close(g_music_vorbis);
        g_music_vorbis = NULL;
    }
    g_cd_status = 1; /* REDBOOK_STOPPED */
    AUDIO_UNLOCK();
    printf("[Redbook] Stop requested\n");
    fflush(stdout);
    return 0;
}

static uint32_t hook_ail_redbook_pause(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    g_cd_status = 3; /* REDBOOK_PAUSED */
    return 0;
}

static uint32_t hook_ail_redbook_resume(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    g_cd_status = 2; /* REDBOOK_PLAYING */
    return 0;
}

static uint32_t hook_ail_redbook_volume(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return g_cd_volume;
}

static uint32_t hook_ail_redbook_set_volume(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    int32_t vol = stack ? (int32_t)stack[1] : 127;
    g_cd_volume = (vol < 0) ? 0 : (vol > 127 ? 127 : vol);
    return 0;
}

static uint32_t hook_ail_register_timer(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 1;
}

static uint32_t hook_ail_timer_stub(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}

static uint32_t hook_ail_mem_alloc_lock(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    uint32_t size = stack ? stack[0] : 0;
    void *ptr = malloc(size ? size : 4);
    return (uint32_t)(uintptr_t)ptr;
}

static uint32_t hook_ail_mem_free_lock(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    void *ptr = stack ? (void *)stack[0] : NULL;
    if (ptr) free(ptr);
    return 0;
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

/* 0x0f7786 / 0x0fed45 / 0x1101c7: Safety net for any unhooked DOS int386 / int386x calls */
static uint32_t hook_int386_safety(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    printf("[int386] Intercepted DOS interrupt 0x%02x (inregs=0x%08x, outregs=0x%08x)\n", eax & 0xFF, edx, ebx);
    fflush(stdout);
    if (ebx >= 0x10000 && edx >= 0x10000) {
        memcpy((void *)(uintptr_t)ebx, (const void *)(uintptr_t)edx, 28);
    }
    return 0;
}

/* 0x0011013b: watcom isatty(int fd=EAX) */
static uint32_t hook_watcom_isatty(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    return (eax <= 2) ? 1 : 0;
}

/* 0x000f9610: bflib sound debug logger */
static uint32_t hook_sound_debug_log(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    const char *str = (const char *)(uintptr_t)eax;
    if (str && (uintptr_t)str >= 0x10000 && (uintptr_t)str < 0x3f000000) {
        printf("[DK-Sound] %s", str);
        fflush(stdout);
    }
    return 1;
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

#ifdef _WIN32
static LONG WINAPI win32_crash_handler(EXCEPTION_POINTERS *ep) {
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    PCONTEXT ctx = ep->ContextRecord;
    uint32_t eip = (uint32_t)ctx->Eip;
    uint32_t esp = (uint32_t)ctx->Esp;
    uint32_t ebp = (uint32_t)ctx->Ebp;
    uint32_t eax = (uint32_t)ctx->Eax;
    uint32_t ebx = (uint32_t)ctx->Ebx;
    uint32_t ecx = (uint32_t)ctx->Ecx;
    uint32_t edx = (uint32_t)ctx->Edx;
    uint32_t esi = (uint32_t)ctx->Esi;
    uint32_t edi = (uint32_t)ctx->Edi;
    void *fault_addr = (void *)ep->ExceptionRecord->ExceptionInformation[1];
    ULONG_PTR access_type = ep->ExceptionRecord->ExceptionInformation[0];

    FILE *flog = fopen("keeper_crash.log", "w");
    if (!flog) flog = stderr;

    fprintf(stderr, "\n[CRASH] Windows Exception 0x%08lx (type=%lu) at EIP=0x%08x (fault_addr=%p)\n",
            code, (unsigned long)access_type, eip, fault_addr);
    fprintf(stderr, "  EAX=0x%08x EBX=0x%08x ECX=0x%08x EDX=0x%08x\n", eax, ebx, ecx, edx);
    fprintf(stderr, "  ESI=0x%08x EDI=0x%08x EBP=0x%08x ESP=0x%08x\n", esi, edi, ebp, esp);
    if (flog != stderr) {
        fprintf(flog, "\n[CRASH] Windows Exception 0x%08lx (type=%lu) at EIP=0x%08x (fault_addr=%p)\n",
                code, (unsigned long)access_type, eip, fault_addr);
        fprintf(flog, "  EAX=0x%08x EBX=0x%08x ECX=0x%08x EDX=0x%08x\n", eax, ebx, ecx, edx);
        fprintf(flog, "  ESI=0x%08x EDI=0x%08x EBP=0x%08x ESP=0x%08x\n", esi, edi, ebp, esp);
    }

    /* Print 64 bytes at EDX */
    if (edx >= DK_VA(0x10000) && edx < DK_VA(0x450000)) {
        fprintf(stderr, "  Dwords @ EDX (0x%08x):\n   ", edx);
        if (flog != stderr) fprintf(flog, "  Dwords @ EDX (0x%08x):\n   ", edx);
        uint32_t *dw = (uint32_t *)(uintptr_t)edx;
        for (int i = 0; i < 16; i++) {
            fprintf(stderr, " %08x", dw[i]);
            if (flog != stderr) fprintf(flog, " %08x", dw[i]);
        }
        fprintf(stderr, "\n");
        if (flog != stderr) fprintf(flog, "\n");
    }

    /* Print 32 bytes at 0x20034ea2 */
    {
        uint8_t *fn = (uint8_t *)(uintptr_t)DK_VA(0x00034ea2);
        fprintf(stderr, "  Bytes @ 0x00034ea2:");
        if (flog != stderr) fprintf(flog, "  Bytes @ 0x00034ea2:");
        for (int i = 0; i < 32; i++) {
            fprintf(stderr, " %02x", fn[i]);
            if (flog != stderr) fprintf(flog, " %02x", fn[i]);
        }
        fprintf(stderr, "\n");
        if (flog != stderr) fprintf(flog, "\n");
    }

    if (eip >= DK_VA(0x10000) && eip < DK_VA(0x450000)) {
        const uint8_t *inst = (const uint8_t *)(uintptr_t)eip;
        fprintf(stderr, "  Bytes @ EIP:");
        for (int i = 0; i < 16; i++) fprintf(stderr, " %02x", inst[i]);
        fprintf(stderr, "\n");
        if (flog != stderr) {
            fprintf(flog, "  Bytes @ EIP:");
            for (int i = 0; i < 16; i++) fprintf(flog, " %02x", inst[i]);
            fprintf(flog, "\n");
        }
    }
    fprintf(stderr, "  Stack trace (code VAs on stack):\n");
    if (flog != stderr) fprintf(flog, "  Stack trace (code VAs on stack):\n");
    const uint32_t *sp = (const uint32_t *)(uintptr_t)esp;
    int printed = 0;
    for (int i = 0; i < 128 && printed < 16; i++) {
        uint32_t val = sp[i];
        if (val >= DK_VA(0x00010000) && val < DK_VA(0x00150100)) {
            fprintf(stderr, "    [ESP+0x%03x] = 0x%08x (orig=0x%08x)\n", i * 4, val, val - g_rebase_delta);
            if (flog != stderr) {
                fprintf(flog, "    [ESP+0x%03x] = 0x%08x (orig=0x%08x)\n", i * 4, val, val - g_rebase_delta);
            }
            printed++;
        }
    }
    fflush(stderr);
    if (flog != stderr) {
        fflush(flog);
        fclose(flog);
    }
    return EXCEPTION_EXECUTE_HANDLER;
}
#endif

/* ============================================================================
 * 7.5. Native Internet & LAN Multiplayer Subsystem Hooks (BFLib LbNetwork)
 * ============================================================================ */
static uint8_t  g_net_composite_storage[4 * 1024];

static uint32_t hook_LbNetwork_Init(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx;
    uint32_t max_players  = stack ? stack[4] : 4;
    uint32_t players_info = stack ? stack[5] : 0;
    uint32_t packet_size  = stack ? stack[6] : 12;
    uint32_t exchange_buf = stack ? stack[7] : 0;
    if (max_players <= 0 || max_players > 4) max_players = 4;
    if (packet_size <= 0 || packet_size > 1024) packet_size = 12;

    printf("[Network] LbNetwork_Init: max_players=%u, packet_sz=%u, buf=0x%08x, pinfo=0x%08x\n",
           max_players, packet_size, exchange_buf, players_info);
    fflush(stdout);

    DK_MEM_U32(0x003dd884) = max_players;
    DK_MEM_U32(0x003dd894) = players_info;
    DK_MEM_U32(0x003dd898) = packet_size;
    DK_MEM_U32(0x003dd864) = exchange_buf;
    DK_MEM_U32(0x003dd880) = max_players * packet_size;
    DK_MEM_U32(0x003dd870) = (uint32_t)(uintptr_t)g_net_composite_storage;
    DK_MEM_U32(0x003dd89c) = (uint32_t)(uintptr_t)g_net_composite_storage;

    void *local_buf = exchange_buf ? dk_to_host_ptr(exchange_buf) : NULL;
    dk_net_set_exchange_params(local_buf, packet_size, g_net_composite_storage, (int)max_players);

    return 0;
}

static const char *get_active_player_name(void) {
    const char *n = (const char *)dk_to_host_ptr(0x003359b3);
    if (n && n[0] != '\0') return n;
    n = (const char *)dk_to_host_ptr(0x0017b976);
    if (n && n[0] != '\0') return n;
    return (g_net_cli_player_name[0] != '\0') ? g_net_cli_player_name : "Keeper";
}

#pragma pack(push, 1)
typedef struct {
    uint8_t flags;       /* offset 0 */
    uint32_t session_id; /* offset 1 */
    uint32_t reserved;   /* offset 5 */
    char name[51];       /* offset 9 */
    char host_ip[32];    /* offset 60 */
    uint16_t host_port;  /* offset 92 */
} dk_gui_session_entry_t;
#pragma pack(pop)

static dk_gui_session_entry_t s_gui_sessions[16];
static dk_gui_session_entry_t s_empty_session = {0, 0, 0, "", "", 0};
static uint32_t s_last_session_enum_ms = 0;
static int      s_last_discovered_count = -1;

static void call_watcom3(uint32_t fn, uint32_t a, uint32_t d, uint32_t b) {
    __asm__ __volatile__(
        "call *%3"
        : "+a"(a), "+d"(d), "+b"(b)
        : "rm"(fn)
        : "ecx", "esi", "edi", "memory"
    );
}

/* Safe hook for FUN_20034ea2 (selected session text renderer)
 * Guarantees that str is NULL (ebx=0) when unselected or invalid, safely skipping font rendering */
static uint32_t hook_gui_render_selected_session(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    int32_t sel_idx = DK_MEM_S32(0x003359ab);
    int32_t count = DK_MEM_S32(0x003359a3);
    const char *str = NULL;
    if (sel_idx >= 0 && sel_idx < count) {
        uint32_t sess_ptr = DK_MEM_U32(0x00335923 + sel_idx * 4);
        if (sess_ptr) {
            const char *cand = (const char *)dk_to_host_ptr(sess_ptr);
            if (cand) {
                cand += 9; /* name is at offset 9 */
                if (*cand) {
                    str = cand;
                }
            }
        }
    }

    uint8_t *ctrl_ptr = (uint8_t *)dk_to_host_ptr(eax);
    if (!ctrl_ptr) return 0;

    uint32_t ctrl_id = *(uint32_t *)(ctrl_ptr + 0x33);
    uint8_t *font_table = (uint8_t *)dk_to_host_ptr(0x0017ad09);
    uint32_t font_id = font_table ? (uint32_t)font_table[ctrl_id * 3] : 0;

    call_watcom3(DK_VA(0x0003378f), eax, font_id, (uint32_t)(uintptr_t)str);
    return 0;
}

static uint32_t hook_LbNetwork_Create(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    const char *p_sess = eax ? (const char *)dk_to_host_ptr(eax) : NULL;
    const char *p_user = edx ? (const char *)dk_to_host_ptr(edx) : NULL;
    if (!p_user || !*p_user) p_user = get_active_player_name();
    if (p_user && *p_user) snprintf(g_net_cli_player_name, sizeof(g_net_cli_player_name), "%s", p_user);

    char host_sess_name[64];
    if (p_sess && *p_sess) {
        snprintf(host_sess_name, sizeof(host_sess_name), "%s", p_sess);
    } else {
        snprintf(host_sess_name, sizeof(host_sess_name), "%s's Realm", g_net_cli_player_name);
    }

    printf("[Network] LbNetwork_Create: hosting '%s' (Host: %s)\n", host_sess_name, g_net_cli_player_name);
    fflush(stdout);

    uint16_t hport = g_net_cli_port ? g_net_cli_port : DK_NET_DEFAULT_PORT;
    if (!dk_net_is_host()) {
        dk_net_start_host(hport, host_sess_name, g_net_cli_player_name);
    }

    DK_MEM_U32(0x003dd888) = 0; /* local_player_id = 0 */
    DK_MEM_U32(0x003dd8a8) = 0; /* host_player_id = 0 */
    DK_MEM_U32(0x003dd8a0) = 0x12345678; /* Non-null ServiceProvider */
    DK_MEM_U32(0x003dd8ac) = 1;
    DK_MEM_U32(0x003e0250) = 1;
    DK_MEM_U32(0x003e024c) = 1;

    /* Initialize slot 0 in player buffer (36 bytes: 32 bytes name, active=1) */
    uint32_t pbuf_addr = DK_MEM_U32(0x003dd864);
    if (pbuf_addr) {
        char *host_slot = (char *)dk_to_host_ptr(pbuf_addr);
        if (host_slot) {
            memset(host_slot, 0, 36);
            snprintf(host_slot, 32, "%s", g_net_cli_player_name);
            *(uint32_t *)(host_slot + 32) = 1; /* active */
        }
    }

    /* Initialize slot 0 in player info array */
    uint32_t pinfo_addr = DK_MEM_U32(0x003dd894);
    if (pinfo_addr) {
        uint8_t *slot = (uint8_t *)dk_to_host_ptr(pinfo_addr);
        if (slot) {
            slot[0] = 1;
        }
    }

    /* Initialize player table for Screen 6 GUI */
    char *player_table = (char *)dk_to_host_ptr(DK_VA(0x00335323));
    if (player_table) {
        memset(player_table, 0, 100 * 20);
        snprintf(player_table, 20, "%s", g_net_cli_player_name);
    }
    DK_MEM_U32(0x0033607f) = 1; /* 1 player (Host) */

    /* Setup session slot 0 so Screen 6 tick (FUN_20034f38) finds a valid session */
    s_gui_sessions[0].flags = 0;
    s_gui_sessions[0].session_id = 1;
    s_gui_sessions[0].reserved = 0;
    snprintf(s_gui_sessions[0].name, sizeof(s_gui_sessions[0].name), "%s", host_sess_name);
    snprintf(s_gui_sessions[0].host_ip, sizeof(s_gui_sessions[0].host_ip), "0.0.0.0");
    s_gui_sessions[0].host_port = hport;
    DK_MEM_U32(0x00335923) = (uint32_t)(uintptr_t)&s_gui_sessions[0];
    DK_MEM_S32(0x003359a3) = 1;
    DK_MEM_S32(0x003359ab) = 0; /* Selected slot 0 (MUST NOT BE -1) */
    DK_MEM_U32(0x003359af) = 1;

    if (ebx) {
        uint32_t *p_id = (uint32_t *)dk_to_host_ptr(ebx);
        if (p_id) {
            *p_id = 1;
        }
    }

    return 0;
}

static uint32_t hook_LbNetwork_Join(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ecx; (void)stack;
    const char *p_user = edx ? (const char *)dk_to_host_ptr(edx) : NULL;
    if (!p_user || !*p_user) p_user = get_active_player_name();
    if (p_user && *p_user) snprintf(g_net_cli_player_name, sizeof(g_net_cli_player_name), "%s", p_user);

    const char *target_ip = (g_net_cli_host_ip[0] != '\0') ? g_net_cli_host_ip : "127.0.0.1";
    uint16_t target_port = g_net_cli_port ? g_net_cli_port : DK_NET_DEFAULT_PORT;

    int32_t sel = DK_MEM_S32(0x003359ab);
    if (sel >= 0 && sel < 16 && s_gui_sessions[sel].session_id != 0) {
        if (s_gui_sessions[sel].host_ip[0] != '\0') {
            target_ip = s_gui_sessions[sel].host_ip;
        }
        if (s_gui_sessions[sel].host_port != 0) {
            target_port = s_gui_sessions[sel].host_port;
        }
    } else if (eax >= (uintptr_t)s_gui_sessions && eax < (uintptr_t)(s_gui_sessions + 16)) {
        dk_gui_session_entry_t *entry = (dk_gui_session_entry_t *)(uintptr_t)eax;
        if (entry->host_ip[0] != '\0') {
            target_ip = entry->host_ip;
        }
        if (entry->host_port != 0) {
            target_port = entry->host_port;
        }
    }

    printf("[Network] LbNetwork_Join: connecting to %s:%u as '%s'...\n", target_ip, target_port, g_net_cli_player_name);
    fflush(stdout);

    if (!dk_net_is_active()) {
        if (!dk_net_connect_to_host(target_ip, target_port, g_net_cli_player_name)) {
            printf("[Network] Join failed to %s:%u\n", target_ip, target_port);
            fflush(stdout);
            return 0xff;
        }
    }

    uint8_t local_id = dk_net_get_local_player_id();
    DK_MEM_U32(0x003dd888) = local_id;
    DK_MEM_U32(0x003dd8a8) = 0;
    DK_MEM_U32(0x003dd8a0) = 0x12345678;

    uint32_t pbuf_addr = DK_MEM_U32(0x003dd864);
    if (pbuf_addr) {
        char *my_slot = (char *)dk_to_host_ptr(pbuf_addr) + local_id * 36;
        if (my_slot) {
            memset(my_slot, 0, 36);
            snprintf(my_slot, 32, "%s", g_net_cli_player_name);
            *(uint32_t *)(my_slot + 32) = 1;
        }
    }

    if (ebx) {
        uint32_t *p_id = (uint32_t *)dk_to_host_ptr(ebx);
        if (p_id) {
            *p_id = local_id;
        }
    }

    return 0;
}

static uint32_t hook_LbNetwork_Stop(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    printf("[Network] LbNetwork_Stop: session teardown\n");
    fflush(stdout);
    dk_net_disconnect();
    DK_MEM_U32(0x003dd8a0) = 0;
    return 0;
}

static uint32_t hook_LbNetwork_StartExchange(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    uint32_t turn = DK_MEM_U32(0x0019e314);
    dk_net_start_exchange(turn);
    return 0;
}

static uint32_t hook_LbNetwork_CompleteExchange(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    uint32_t turn = DK_MEM_U32(0x0019e314);
    bool ok = dk_net_complete_exchange(turn);
    return ok ? 0 : 1;
}

static uint32_t hook_LbNetwork_EnumerateSessions(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx; (void)ebx; (void)ecx; (void)stack;
    
    typedef uint32_t (__stdcall *fn_session_cb_t)(void *arg1, void *arg2);
    fn_session_cb_t cb = (fn_session_cb_t)(uintptr_t)eax;

    uint32_t now = hook_LbTimerClock(0, 0, 0, 0, NULL);
    bool should_query = (s_last_session_enum_ms == 0 || (now - s_last_session_enum_ms >= 1500));
    if (should_query) {
        s_last_session_enum_ms = now;
        dk_net_lan_broadcast_query(DK_NET_DEFAULT_PORT);
    }

    dk_lan_broadcast_t games[16];
    int count = dk_net_lan_get_discovered_games(games, 16);

    /* Fetch from master server (handles internal 2-second caching) */
    dk_lan_broadcast_t master_games[16];
    int mcount = dk_net_master_fetch_games(master_games, 16);
    for (int m = 0; m < mcount && count < 16; m++) {
        bool dup = false;
        for (int l = 0; l < count; l++) {
            if ((strcmp(games[l].host_ip, master_games[m].host_ip) == 0 &&
                 games[l].port == master_games[m].port) ||
                strcmp(games[l].game_name, master_games[m].game_name) == 0) {
                dup = true;
                break;
            }
        }
        if (!dup) {
            games[count++] = master_games[m];
        }
    }

    /* If CLI target was specified (--connect <ip>), ensure it's in the list */
    if (g_net_cli_host_ip[0] != '\0') {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (strcmp(games[i].host_ip, g_net_cli_host_ip) == 0) {
                found = true;
                break;
            }
        }
        if (!found && count < 16) {
            memset(&games[count], 0, sizeof(games[count]));
            snprintf(games[count].game_name, sizeof(games[count].game_name), "Direct (%s)", g_net_cli_host_ip);
            snprintf(games[count].host_ip, sizeof(games[count].host_ip), "%s", g_net_cli_host_ip);
            games[count].port = g_net_cli_port ? g_net_cli_port : DK_NET_DEFAULT_PORT;
            games[count].current_players = 1;
            games[count].max_players = 4;
            count++;
        }
    }

    if (count > 0) {
        if (count > 16) count = 16;
        for (int i = 0; i < count; i++) {
            s_gui_sessions[i].flags = 0;
            s_gui_sessions[i].session_id = i + 1;
            s_gui_sessions[i].reserved = 0;
            snprintf(s_gui_sessions[i].name, sizeof(s_gui_sessions[i].name), "%s", games[i].game_name);
            snprintf(s_gui_sessions[i].host_ip, sizeof(s_gui_sessions[i].host_ip), "%s", games[i].host_ip);
            s_gui_sessions[i].host_port = games[i].port;
            DK_MEM_U32(0x00335923 + i * 4) = (uint32_t)(uintptr_t)&s_gui_sessions[i];
            if (cb) {
                cb(&s_gui_sessions[i], &s_gui_sessions[i]);
            }
        }
        DK_MEM_S32(0x003359a3) = count;

        /* Auto-select slot 0 if nothing selected or index out of range, enabling "Join Game" button */
        int32_t sel = DK_MEM_S32(0x003359ab);
        if (sel < 0 || sel >= count) {
            DK_MEM_S32(0x003359ab) = 0;
            DK_MEM_U32(0x003359af) = s_gui_sessions[0].session_id;
        } else {
            /* Keep selected session ID in sync so FUN_200346de never resets selection */
            DK_MEM_U32(0x003359af) = s_gui_sessions[sel].session_id;
        }
    } else {
        /* No games found: clear session table and disable Join Game cleanly */
        DK_MEM_S32(0x003359a3) = 0;
        DK_MEM_S32(0x003359ab) = -1;
        DK_MEM_U32(0x003359af) = 0xffffffff;
        for (int s = 0; s < 32; s++) {
            DK_MEM_U32(0x00335923 + s * 4) = (uint32_t)(uintptr_t)&s_empty_session;
        }
    }

    if (count != s_last_discovered_count) {
        printf("[Network] EnumerateSessions: %d active session(s)\n", count);
        fflush(stdout);
        s_last_discovered_count = count;
    }

    return 0;
}

static uint32_t hook_LbNetwork_EnumeratePlayers(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)ebx; (void)ecx; (void)stack;
    typedef uint32_t (__stdcall *fn_player_cb_t)(void *arg1, void *arg2);
    fn_player_cb_t cb = (fn_player_cb_t)(uintptr_t)edx;

    DK_MEM_U32(0x0033607f) = 0;
    char *player_table = (char *)dk_to_host_ptr(DK_VA(0x00335323));
    if (player_table) {
        memset(player_table, 0, 100 * 20);
    }

    /* Pump network packets */
    dk_net_update();

    uint32_t pbuf_addr = DK_MEM_U32(0x003dd864);
    char *pbuf = pbuf_addr ? (char *)dk_to_host_ptr(pbuf_addr) : NULL;

    struct {
        uint8_t pad[13];
        char player_name[32];
    } pinfo;

    uint32_t count = 0;

    if (dk_net_is_host()) {
        /* On Screen 6 (Host Room): Slot 0 is local host, 1..3 are joined peers */
        const char *my_name = get_active_player_name();
        memset(&pinfo, 0, sizeof(pinfo));
        snprintf(pinfo.player_name, sizeof(pinfo.player_name), "%s", my_name);
        if (cb) cb(&pinfo, &pinfo);
        if (player_table) snprintf(player_table, 20, "%s", my_name);
        if (pbuf) {
            memset(pbuf, 0, 36);
            snprintf(pbuf, 32, "%s", my_name);
            *(uint32_t *)(pbuf + 32) = 1;
        }
        count = 1;

        for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
            char name[32] = {0};
            bool active = false;
            if (dk_net_get_peer_info(i, name, sizeof(name), &active) && active) {
                memset(&pinfo, 0, sizeof(pinfo));
                snprintf(pinfo.player_name, sizeof(pinfo.player_name), "%s", name);
                if (cb) cb(&pinfo, &pinfo);
                if (player_table) snprintf(player_table + count * 20, 20, "%s", name);
                if (pbuf) {
                    char *slot = pbuf + i * 36;
                    memset(slot, 0, 36);
                    snprintf(slot, 32, "%s", name);
                    *(uint32_t *)(slot + 32) = 1;
                }
                count++;
            }
        }
    } else if (dk_net_is_active()) {
        /* Client connected: enumerate peers from host */
        for (int i = 0; i < DK_NET_MAX_PLAYERS; i++) {
            char name[32] = {0};
            bool active = false;
            if (dk_net_get_peer_info(i, name, sizeof(name), &active) && active) {
                memset(&pinfo, 0, sizeof(pinfo));
                snprintf(pinfo.player_name, sizeof(pinfo.player_name), "%s", name);
                if (cb) cb(&pinfo, &pinfo);
                if (player_table) snprintf(player_table + count * 20, 20, "%s", name);
                if (pbuf) {
                    char *slot = pbuf + i * 36;
                    memset(slot, 0, 36);
                    snprintf(slot, 32, "%s", name);
                    *(uint32_t *)(slot + 32) = 1;
                }
                count++;
            }
        }
    } else {
        /* On Screen 5 (Session Browser): show host name of selected session */
        int32_t sel_idx = DK_MEM_S32(0x003359ab);
        int32_t sess_count = DK_MEM_S32(0x003359a3);
        if (sel_idx >= 0 && sel_idx < sess_count) {
            const char *host_name = NULL;
            if (eax >= (uintptr_t)s_gui_sessions && eax < (uintptr_t)(s_gui_sessions + 16)) {
                dk_gui_session_entry_t *s = (dk_gui_session_entry_t *)(uintptr_t)eax;
                if (s->name[0] != '\0') {
                    host_name = s->name;
                }
            }
            if (!host_name) host_name = s_gui_sessions[sel_idx].name;

            memset(&pinfo, 0, sizeof(pinfo));
            snprintf(pinfo.player_name, sizeof(pinfo.player_name), "%s", host_name ? host_name : "Host");
            if (cb) cb(&pinfo, &pinfo);
            if (player_table) snprintf(player_table, 20, "%s", pinfo.player_name);
            count = 1;
        }
    }

    DK_MEM_U32(0x0033607f) = count;
    return 0;
}

static uint32_t hook_LbNetwork_Send(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)edx;
    int dest_id = (int)eax;
    size_t len = (size_t)ebx;
    uint32_t raw_buf = ecx ? ecx : (stack ? stack[1] : 0);
    const void *buf = dk_to_host_ptr(raw_buf);
    dk_net_send_data(dest_id, buf, len);
    return 0;
}

static uint32_t hook_LbNetwork_Receive(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    return 0;
}

static uint32_t hook_frontnet_show_joining_box(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    printf("[Network] 'Attempting to join...' modal invoked\n");
    fflush(stdout);
    return 0;
}

static uint32_t hook_frontend_text_long_box(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    printf("[UI Dialog] frontend_text_long_box invoked\n");
    fflush(stdout);
    return 0;
}

static uint32_t hook_frontnet_LbNetwork_EnumerateServices(uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack) {
    (void)eax; (void)edx; (void)ebx; (void)ecx; (void)stack;
    printf("[Network] hook_frontnet_LbNetwork_EnumerateServices: Initializing network services menu\n");
    fflush(stdout);

    char *services = (char *)(uintptr_t)DK_VA(0x003359cf);
    memset(services, 0, 0x400);

    snprintf(services + 0 * 64, 64, "Direct Serial Cable");
    snprintf(services + 1 * 64, 64, "Modem Dialup");
    snprintf(services + 2 * 64, 64, "TCP/IP Internet & LAN");

    DK_MEM_U32(0x00335dcf) = 3; /* 3 services total */
    DK_MEM_U32(0x00335dd3) = 0; /* scroll offset = 0 */
    DK_MEM_U32(0x00335dd7) = 2; /* selected index = 2 (TCP/IP) */

    DK_MEM_S32(0x003359a3) = 0;
    for (int s = 0; s < 32; s++) {
        DK_MEM_U32(0x00335923 + s * 4) = (uint32_t)(uintptr_t)&s_empty_session;
    }

    static const char s_empty_levels[8] = "\0\0\0\0";
    if (DK_MEM_U32(0x0033400d) == 0) {
        DK_MEM_U32(0x0033400d) = (uint32_t)(uintptr_t)s_empty_levels;
        DK_MEM_U32(0x00334011) = (uint32_t)(uintptr_t)s_empty_levels;
    }

    const char *curr_name = get_active_player_name();
    if (curr_name && curr_name[0] != '\0') {
        snprintf(g_net_cli_player_name, sizeof(g_net_cli_player_name), "%s", curr_name);
    }
    DK_MEM_U32(0x003337eb) = (uint32_t)(uintptr_t)g_net_cli_player_name;

    char *user_name_buf = (char *)dk_to_host_ptr(0x0017b976);
    if (user_name_buf && user_name_buf[0] == '\0') {
        snprintf(user_name_buf, 32, "%s", g_net_cli_player_name);
    }
    char *user_name_buf2 = (char *)dk_to_host_ptr(0x003359b3);
    if (user_name_buf2 && user_name_buf2[0] == '\0') {
        snprintf(user_name_buf2, 32, "%s", g_net_cli_player_name);
    }

    static const char s_net_desc[32] = "TCP/IP Network";
    if (DK_MEM_U32(0x00333f33) == 0) {
        DK_MEM_U32(0x00333f33) = (uint32_t)(uintptr_t)s_net_desc;
    }

    typedef void (*fn_void_t)(void);
    ((fn_void_t)(uintptr_t)DK_VA(0x00032f9b))();
    ((fn_void_t)(uintptr_t)DK_VA(0x00035b51))();

    return 0;
}

/* ============================================================================
 * 8. Main Entry Point
 * ============================================================================ */
int main(int argc, char **argv) {
#ifdef _WIN32
    SetUnhandledExceptionFilter(win32_crash_handler);
#else
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
    bool  g_dump_tmap   = false;

    if (g_net_cli_player_name[0] == '\0') {
        const char *env_user = getenv("USERNAME");
        if (!env_user || !*env_user) env_user = getenv("USER");
        if (!env_user || !*env_user) env_user = "Keeper";
        snprintf(g_net_cli_player_name, sizeof(g_net_cli_player_name), "%s", env_user);
    }

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
            char full[MAX_PATH];
            if (_fullpath(full, arg_dir, sizeof(full)) != NULL) {
                snprintf(g_dump_dir, sizeof(g_dump_dir), "%s", full);
            } else {
                snprintf(g_dump_dir, sizeof(g_dump_dir), "%s", arg_dir);
            }
            _mkdir(g_dump_dir);
#endif
        } else if (strcmp(argv[i], "--max-frames") == 0 && i + 1 < argc) {
            g_max_frames = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--level") == 0 && i + 1 < argc) {
            g_start_level = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--headless") == 0) {
            g_headless_mode = true;
        } else if (strcmp(argv[i], "--no-1080p") == 0) {
            g_upscale_1080p_enabled = false;
        } else if (strcmp(argv[i], "--fullscreen") == 0 || strcmp(argv[i], "-f") == 0) {
            g_fullscreen = true;
        } else if (strcmp(argv[i], "--windowed") == 0 || strcmp(argv[i], "-w") == 0) {
            g_fullscreen = false;
        } else if (strcmp(argv[i], "--xbrz") == 0 && i + 1 < argc) {
            g_xbrz_factor = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--verbose-io") == 0) {
            g_verbose_io = true;
        } else if (strcmp(argv[i], "--nosound") == 0 || strcmp(argv[i], "-nosound") == 0) {
            g_nosound_requested = true;
        } else if (strcmp(argv[i], "--test-start-game") == 0) {
            g_test_start_game = true;
        } else if (strcmp(argv[i], "--test-multiplayer-gui") == 0) {
            g_test_multiplayer_gui = true;
        } else if (strcmp(argv[i], "--dump-tmap") == 0) {
            g_dump_tmap = true;
        } else if (strcmp(argv[i], "--host") == 0) {
            g_net_cli_is_host = true;
            if (i + 1 < argc && argv[i + 1][0] != '-') {
                g_net_cli_port = (uint16_t)atoi(argv[++i]);
            }
        } else if (strcmp(argv[i], "--connect") == 0 && i + 1 < argc) {
            g_net_cli_is_client = true;
            const char *target = argv[++i];
            const char *colon = strchr(target, ':');
            if (colon) {
                size_t hlen = colon - target;
                if (hlen < sizeof(g_net_cli_host_ip)) {
                    strncpy(g_net_cli_host_ip, target, hlen);
                    g_net_cli_host_ip[hlen] = '\0';
                }
                g_net_cli_port = (uint16_t)atoi(colon + 1);
            } else {
                snprintf(g_net_cli_host_ip, sizeof(g_net_cli_host_ip), "%s", target);
                g_net_cli_port = DK_NET_DEFAULT_PORT;
            }
        } else if (strcmp(argv[i], "--player-name") == 0 && i + 1 < argc) {
            snprintf(g_net_cli_player_name, sizeof(g_net_cli_player_name), "%s", argv[++i]);
        } else if (strcmp(argv[i], "--master-server") == 0 && i + 1 < argc) {
            const char *ms = argv[++i];
            char mshost[128] = "192.168.0.4";
            uint16_t msport = 5555;
            const char *colon = strchr(ms, ':');
            if (colon) {
                size_t hlen = colon - ms;
                strncpy(mshost, ms, hlen);
                mshost[hlen] = '\0';
                msport = (uint16_t)atoi(colon + 1);
            } else {
                snprintf(mshost, sizeof(mshost), "%s", ms);
            }
            dk_net_set_master_server(mshost, msport);
        } else if (argv[i][0] == '-' && argv[i][1] != '-' && dk_argc < 30) {
            dk_argv[dk_argc++] = argv[i];
        }
    }

    if (g_nosound_requested) {
        bool has_nosound = false;
        for (int i = 0; i < dk_argc; i++) {
            if (strcasecmp(dk_argv[i], "-nosound") == 0) {
                has_nosound = true;
                break;
            }
        }
        if (!has_nosound && dk_argc < 30) {
            dk_argv[dk_argc++] = (char *)"-nosound";
        }
    }
    dk_argv[dk_argc] = NULL;

#ifdef _WIN32
    /* On Windows, auto-detect game directory and rebased ELF (strictly local workspace) */
    if (strncmp(g_game_dir, "/home/", 6) == 0) {
        struct stat st;
        if (stat("KEEPER.CFG", &st) == 0 || stat("keeper.cfg", &st) == 0) {
            strcpy(g_game_dir, ".");
        } else if (stat("C:/Users/Merlin/workspace/Dungeon Keeper/KEEPER.CFG", &st) == 0 ||
                   stat("C:/Users/Merlin/workspace/Dungeon Keeper/keeper.cfg", &st) == 0) {
            strcpy(g_game_dir, "C:/Users/Merlin/workspace/Dungeon Keeper");
        } else if (stat("../Dungeon Keeper/KEEPER.CFG", &st) == 0 ||
                   stat("../Dungeon Keeper/keeper.cfg", &st) == 0) {
            strcpy(g_game_dir, "../Dungeon Keeper");
        }
    }
    if (strncmp(g_elf_path, "/home/", 6) == 0) {
        struct stat st;
        if (stat("KEEPER_20000000.elf", &st) == 0) {
            strcpy(g_elf_path, "KEEPER_20000000.elf");
        } else if (stat("build/KEEPER_20000000.elf", &st) == 0) {
            strcpy(g_elf_path, "build/KEEPER_20000000.elf");
        } else if (stat("C:/Users/Merlin/workspace/Dungeon Keeper/KEEPER_20000000.elf", &st) == 0) {
            strcpy(g_elf_path, "C:/Users/Merlin/workspace/Dungeon Keeper/KEEPER_20000000.elf");
        } else if (stat("../Dungeon Keeper/KEEPER_20000000.elf", &st) == 0) {
            strcpy(g_elf_path, "../Dungeon Keeper/KEEPER_20000000.elf");
        }
    }
#endif

    printf("================================================================\n");
    printf(" Dungeon Keeper (KEEPER.EXE) - Native Reconstructed Runtime\n");
    printf(" Game Directory : %s\n", g_game_dir);
    printf(" Binary Image   : %s\n", g_elf_path);
    printf(" Mode           : %s (Fullscreen=%s, MaxFrames=%d, StartLevel=%d)\n",
           g_headless_mode ? "Headless Validation" : "Interactive Display",
           g_fullscreen ? "Yes" : "No", g_max_frames, g_start_level);
    if (g_net_cli_is_host) {
        printf(" Network        : Hosting (Port %u, Player '%s')\n",
               g_net_cli_port ? g_net_cli_port : DK_NET_DEFAULT_PORT, g_net_cli_player_name);
    } else if (g_net_cli_is_client) {
        printf(" Network        : Client (Target %s:%u, Player '%s')\n",
               g_net_cli_host_ip, g_net_cli_port ? g_net_cli_port : DK_NET_DEFAULT_PORT, g_net_cli_player_name);
    } else {
        printf(" Network        : Ready (Auto-Discovery & Master Server Enabled)\n");
    }
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
    dk_install_hook(0x0006ae37, hook_setup_clear_screen_backbuffer);
    dk_install_hook(0x000f0d1c, hook_LbScreenSetBank);

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
    dk_install_hook(0x001101c7, hook_int386_safety);
    dk_install_hook(0x0011013b, hook_watcom_isatty);
    dk_install_hook(0x000f9610, hook_sound_debug_log);

    /* AIL Audio Hooks */
    dk_install_hook(0x000fee88, hook_ail_startup);
    dk_install_hook(0x001145bf, hook_ret_one);
    dk_install_hook(0x000f98ca, hook_ret_one);
    dk_install_hook(0x000f99cc, hook_ail_set_preference);
    dk_install_hook(0x000f9d16, hook_ail_api_read_ini);
    dk_install_hook(0x000fa535, hook_ail_install_dig_ini);
    dk_install_hook(0x000fa593, hook_ail_install_dig_driver_file);
    dk_install_hook(0x000fa5f7, hook_ail_uninstall_dig_driver);
    dk_install_hook(0x000fa655, hook_ail_allocate_sample_handle);
    dk_install_hook(0x000fa720, hook_ail_release_sample_handle);
    dk_install_hook(0x000fa77e, hook_ail_init_sample);
    dk_install_hook(0x000fa7dc, hook_ail_set_sample_file);
    dk_install_hook(0x000fa849, hook_ail_set_sample_address);
    dk_install_hook(0x000fa8b3, hook_ail_set_sample_type);
    dk_install_hook(0x000fa91d, hook_ail_start_sample);
    dk_install_hook(0x000fa97f, hook_ail_stop_sample);
    dk_install_hook(0x000fa9dd, hook_ail_resume_sample);
    dk_install_hook(0x000faa37, hook_ail_stop_sample);
    dk_install_hook(0x000faa95, hook_ail_set_sample_playback_rate);
    dk_install_hook(0x000faaf9, hook_ail_set_sample_volume);
    dk_install_hook(0x000fab5d, hook_ail_set_sample_pan);
    dk_install_hook(0x000fabc1, hook_ail_set_sample_loop_count);
    dk_install_hook(0x000fac8f, hook_ail_sample_status);
    dk_install_hook(0x000fae65, hook_ail_set_digital_master_volume);
    dk_install_hook(0x000faec9, hook_ail_digital_master_volume);
    dk_install_hook(0x000fb060, hook_ail_minimum_sample_buffer_size);
    dk_install_hook(0x000fb340, hook_ail_register_callback);
    dk_install_hook(0x000fb3a4, hook_ail_register_callback);
    dk_install_hook(0x000fe896, hook_ail_mem_alloc_lock);
    dk_install_hook(0x000fe8c1, hook_ail_mem_free_lock);

    /* AIL Timer hooks (prevent DOS PIT port 0x43 reprogramming crash) */
    dk_install_hook(0x000f9f10, hook_ail_register_timer);
    dk_install_hook(0x000f9f71, hook_ail_timer_stub);
    dk_install_hook(0x000f9fd5, hook_ail_timer_stub);
    dk_install_hook(0x000fa039, hook_ail_timer_stub);
    dk_install_hook(0x000fa1a4, hook_ail_timer_stub);
    dk_install_hook(0x000fa257, hook_ail_timer_stub);
    dk_install_hook(0x000fa30a, hook_ail_timer_stub);
    dk_install_hook(0x000fa368, hook_ail_timer_stub);
    dk_install_hook(0x000fa3bd, hook_ail_timer_stub);

    /* Redbook (CD audio) hooks */
    dk_install_hook(0x000fc8bd, hook_ail_redbook_open);
    dk_install_hook(0x000fc91b, hook_ail_redbook_close);
    dk_install_hook(0x000fca35, hook_ail_redbook_status);
    dk_install_hook(0x000fca93, hook_ail_redbook_tracks);
    dk_install_hook(0x000fcaf1, hook_ail_redbook_track_info);
    dk_install_hook(0x000fcbbf, hook_ail_redbook_track);
    dk_install_hook(0x000fcc7b, hook_ail_redbook_play);
    dk_install_hook(0x000fcce5, hook_ail_redbook_stop);
    dk_install_hook(0x000fcd43, hook_ail_redbook_pause);
    dk_install_hook(0x000fcda1, hook_ail_redbook_resume);
    dk_install_hook(0x000fcdff, hook_ail_redbook_volume);
    dk_install_hook(0x000fce5d, hook_ail_redbook_set_volume);

    /* Bullfrog Network Library (LbNetwork) Hooks */
    dk_install_hook_ret_n(0x000ed4e0, hook_LbNetwork_Init, 0x24);
    dk_install_hook(0x000ed84c, hook_LbNetwork_Create);
    dk_install_hook(0x000eda20, hook_LbNetwork_Join);
    dk_install_hook(0x000edc70, hook_LbNetwork_Stop);
    dk_install_hook(0x000ee694, hook_LbNetwork_StartExchange);
    dk_install_hook(0x000ee3c0, hook_LbNetwork_CompleteExchange);
    dk_install_hook(0x000edd8c, hook_LbNetwork_EnumerateSessions);
    dk_install_hook(0x000eddf0, hook_LbNetwork_EnumeratePlayers);
    dk_install_hook(0x000f3b50, hook_LbNetwork_Send);
    dk_install_hook(0x000f3ed8, hook_LbNetwork_Receive);
    dk_install_hook(0x00030a2d, hook_frontend_text_long_box);
    dk_install_hook(0x00033ead, hook_frontnet_LbNetwork_EnumerateServices);
    dk_install_hook(0x00034ea2, hook_gui_render_selected_session);
    dk_install_hook(0x00035e19, hook_frontnet_show_joining_box);


    /* Patch 0x00065724 (pom_benchmark) to `fld1; ret` (D9 E8 C3) so it returns 1.0 in ST(0) without port 0x43 IO */
    uint8_t *bench_ptr = (uint8_t *)(uintptr_t)DK_VA(0x00065724);
    bench_ptr[0] = 0xD9; bench_ptr[1] = 0xE8; bench_ptr[2] = 0xC3;

    /* If --level <N> was passed, enable direct level boot (bit 1 of g_game_operation_flags @ 0x0019d0b8) */
    if (g_start_level > 0) {
        DK_MEM_U8(0x0019d0b8)  |= 0x02;
        DK_MEM_U8(0x002e78ea)   = (uint8_t)g_start_level;
        DK_MEM_U32(0x00063637)  = (uint32_t)g_start_level;
    }

    /* Force high-resolution Mode 13 (640x480) across engine configuration */
    DK_MEM_U32(0x00334065) = 0x20;         /* VA_LB_PHYSICAL_RAM_MB = 32 MB */
    DK_MEM_U32(0x002ee8dc) = 0x0D;         /* Preferred screen mode: 0x0D (640x480) */
    DK_MEM_U16(VA_LB_SCREEN_MODE) = 0x0D;  /* Active screen mode: 0x0D (640x480) */
    DK_MEM_U8(VA_LB_SKIP_INTRO_FLAG) = 1;  /* Disable demo movie timeout in frontend */



    /* Register recompiled C++ functions from runtime/recompiled_modules.cpp */
    dk_register_recompiled_cpp_functions();

    /* Enable sound by default unless user explicitly passed --nosound */
    DK_MEM_U8(VA_LB_NOSOUND_FLAG) = g_nosound_requested ? 1 : 0;
    if (chdir(g_game_dir) != 0) {
        perror("chdir to game_dir failed");
    }
#ifdef _WIN32
    if (!g_headless_mode) {
        FILE *f_run = freopen("keeper_run.log", "a", stdout);
        if (f_run) {
            setvbuf(stdout, NULL, _IONBF, 0);
        }
        FILE *f_err = freopen("keeper_run.log", "a", stderr);
        if (f_err) {
            setvbuf(stderr, NULL, _IONBF, 0);
        }
    }
#endif

    if (g_dump_tmap) {
        printf("[TMAP] Extracting uncompressed 557,056-byte TMAPA archives...\n");
        fflush(stdout);
        uint8_t *tbuf = (uint8_t *)calloc(1, 1024 * 1024);
        typedef uint32_t (*fn_load_at_t)(const char *path, void *dst);
        fn_load_at_t load_at = (fn_load_at_t)(uintptr_t)DK_VA(0x000e984c);
        for (int t = 0; t < 8; t++) {
            char in_path[256], out_path[256];
            snprintf(in_path, sizeof(in_path), "DATA/backup_tmap/TMAPA%03d.DAT", t);
            snprintf(out_path, sizeof(out_path), "DATA/TMAPA%03d_raw.DAT", t);
            uint32_t len = load_at(in_path, tbuf);
            FILE *f = fopen(out_path, "wb");
            if (f) {
                fwrite(tbuf, 1, 557056, f);
                fclose(f);
                printf("[TMAP] %s (%u b) -> %s (557,056 b)\n", in_path, len, out_path);
                fflush(stdout);
            }
        }
        free(tbuf);
        return 0;
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
