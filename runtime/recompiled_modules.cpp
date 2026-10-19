/**
 * Dungeon Keeper (KEEPER.EXE) - Recompiled C++ Functions Hooked Live into the Engine
 *
 * Any function from src/ that is adapted to standard C++ can be placed here
 * (or compiled in its own translation unit) and registered via dk_install_hook().
 * At runtime, calls to the original virtual address are detoured to these compiled C++
 * implementations!
 */

#include "../include/dk_ghidra_intrinsics.h"
#include "../include/dk_structs.h"
#include <stdio.h>
#include <stdlib.h>

extern "C" {
typedef uint32_t (*dk_hook_handler_t)(
    uint32_t eax,
    uint32_t edx,
    uint32_t ebx,
    uint32_t ecx,
    uint32_t *stack_args
);
void dk_install_hook(uint32_t target_va, dk_hook_handler_t handler);
void dk_install_hook_ret_n(uint32_t target_va, dk_hook_handler_t handler, int stack_pop_bytes);
}

/* ============================================================================
 * Recompiled Functions from src/packet.cpp
 * ============================================================================ */

/* 0x0005dde9: set_packet_control_flag (src/packet.cpp) */
static uint32_t recompiled_set_packet_control_flag(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    (void)ebx; (void)ecx; (void)stack;
    uint8_t *packet = (uint8_t *)(uintptr_t)eax;
    *(uint16_t *)(packet + 0x0e) |= (uint16_t)edx;
    return eax;
}

/* 0x0005ddee: set_packet_action (src/packet.cpp, Watcom C takes 2 extra stack args and returns with ret $8) */
static uint32_t recompiled_set_packet_action(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    uint8_t *packet = (uint8_t *)(uintptr_t)eax;
    packet[0x05] = (uint8_t)edx;                  /* action */
    *(uint16_t *)(packet + 0x06) = (uint16_t)ebx; /* actn_par1 */
    *(uint16_t *)(packet + 0x08) = (uint16_t)ecx; /* actn_par2 */
    if (stack) {
        *(uint16_t *)(packet + 0x0a) = (uint16_t)stack[0]; /* actn_par3 */
        *(uint16_t *)(packet + 0x0c) = (uint16_t)stack[1]; /* actn_par4 */
    }
    return eax;
}

/* ============================================================================
 * Recompiled Functions from src/ssprite.cpp & src/bflib/
 * ============================================================================ */

/* 0x000dd93c: coord3d_equal (src/bflib/bflib_system_io.cpp) */
static uint32_t recompiled_coord3d_equal(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    (void)ebx; (void)ecx; (void)stack;
    const uint32_t *pos_a = (const uint32_t *)(uintptr_t)eax;
    const uint32_t *pos_b = (const uint32_t *)(uintptr_t)edx;
    if (*pos_a == *pos_b && *(const uint16_t *)(pos_a + 1) == *(const uint16_t *)(pos_b + 1)) {
        return 1;
    }
    return 0;
}

/* 0x000dc0f0: scale_value_by_creature_level (src/ssprite.cpp) */
static uint32_t recompiled_scale_value_by_creature_level(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    (void)ebx; (void)ecx; (void)stack;
    int32_t base_val = (int32_t)eax;
    int8_t  level    = (int8_t)(edx & 0xFF);
    if (level <= 0) return (uint32_t)base_val;
    return (uint32_t)(base_val + (int32_t)((base_val * 10 * (int32_t)level) / 100));
}

/* 0x000dc2c8: get_2d_box_distance_xy (src/ssprite.cpp) */
static uint32_t recompiled_get_2d_box_distance_xy(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    (void)stack;
    uint32_t dx = (uint32_t)abs((int32_t)eax - (int32_t)ebx);
    uint32_t dy = (uint32_t)abs((int32_t)edx - (int32_t)ecx);
    if (dx < dy) {
        return dy + (dx >> 1);
    }
    return dx + (dy >> 1);
}

/* 0x000dc354: get_2d_box_distance (src/ssprite.cpp) */
static uint32_t recompiled_get_2d_box_distance(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    (void)ebx; (void)ecx; (void)stack;
    const uint16_t *pos_a = (const uint16_t *)(uintptr_t)eax;
    const uint16_t *pos_b = (const uint16_t *)(uintptr_t)edx;
    uint32_t dx = (uint32_t)abs((int32_t)pos_a[0] - (int32_t)pos_b[0]);
    uint32_t dy = (uint32_t)abs((int32_t)pos_a[1] - (int32_t)pos_b[1]);
    if (dx < dy) {
        return dy + (dx >> 1);
    }
    return dx + (dy >> 1);
}

/* 0x000dc4a0: get_chessboard_distance_xy (src/ssprite.cpp) */
static uint32_t recompiled_get_chessboard_distance_xy(
    uint32_t eax, uint32_t edx, uint32_t ebx, uint32_t ecx, uint32_t *stack
) {
    (void)stack;
    uint32_t dx = (uint32_t)abs((int32_t)eax - (int32_t)ebx);
    uint32_t dy = (uint32_t)abs((int32_t)edx - (int32_t)ecx);
    return (dx < dy) ? dy : dx;
}

extern "C" void dk_register_recompiled_cpp_functions(void) {
    dk_install_hook(0x0005dde9, recompiled_set_packet_control_flag);
    dk_install_hook_ret_n(0x0005ddee, recompiled_set_packet_action, 8);
    dk_install_hook(0x000dd93c, recompiled_coord3d_equal);
    dk_install_hook(0x000dc0f0, recompiled_scale_value_by_creature_level);
    dk_install_hook(0x000dc2c8, recompiled_get_2d_box_distance_xy);
    dk_install_hook(0x000dc354, recompiled_get_2d_box_distance);
    dk_install_hook(0x000dc4a0, recompiled_get_chessboard_distance_xy);
    printf("[RecompiledC++] Hooked 7 recompiled C++ functions from src/packet.cpp & src/ssprite.cpp!\n");
}
