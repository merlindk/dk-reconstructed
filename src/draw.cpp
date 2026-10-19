/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: draw.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 68
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : draw_fn_0872a4 (Original VA: 0x872a4, Ghidra: FUN_000872a4)
 * Prototype: void draw_fn_0872a4(void);
 * Address  : 0x872a4 (Size: 20 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x0872a4
 * Callers  : 2 -> magic_data_mapfadeg_dat_050708, magic_data_mapfadeg_dat_0508a9
 * Callees  : 4 -> newgui_draw_text_overlay_05449e, newgui_draw_text_overlay_058ba8, draw_fn_0880d0, draw_update_slab_subtile_columns_0882b4
 ******************************************************************************/
void draw_fn_0872a4(void)

{
  draw_fn_0880d0();
  draw_update_slab_subtile_columns_0882b4();
  newgui_draw_text_overlay_05449e();
  newgui_draw_text_overlay_058ba8();
  return;
}

/******************************************************************************
 * Function : draw_update_player_dungeon_0872b8 (Original VA: 0x872b8, Ghidra: FUN_000872b8)
 * Prototype: void draw_update_player_dungeon_0872b8(void);
 * Address  : 0x872b8 (Size: 985 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> magic_data_mapfadeg_dat_050708, magic_data_mapfadeg_dat_0508a9, creature_dene_says_big_hello_08685c
 * Callees  : 14 -> dungeon_update_slab_subtile_columns_023ece, effect_process_map_subtile_02457b, gravyard_fn_0397c3, newgui_draw_text_overlay_05449e, newgui_draw_text_overlay_058ba8, panmap_update_player_view_state_062ee2, workshop_update_player_view_state_0780df, draw_update_creature_and_thing_0890bc ...
 ******************************************************************************/
void draw_update_player_dungeon_0872b8(void)

{
  uint unsynced_seed;
  short *player_off;
  ushort *player_off_2;
  undefined4 *player_off_3;
  int player_off_4;
  int dungeon_off;
  int val;
  uint *word_ptr;
  byte flag;
  undefined2 auStack_820 [1018];
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  uint local_1c;
  
  flag = 0;
  word_ptr = &uStack_24;
  player_off_4 = (g_my_player_word >> 0x18) * 0x4ef;
  uStack_24 = **(undefined4 **)((int)&g_player_active_camera + player_off_4);
  uStack_20 = *(undefined2 *)(*(undefined4 **)((int)&g_player_active_camera + player_off_4) + 1);
  if ((&g_bss_0019d527)[player_off_4] != '\x01') {
    (&g_bss_0019d527)[player_off_4] = 1;
  }
  if (*(int *)(&g_bss_002e1429 + (g_my_player_word >> 0x18) * 0x1508) != 0) {
    unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
    player_off = *(short **)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef);
    *player_off = (short)((ulonglong)g_unsynced_random_seed % 0x50) + *player_off + -0x28;
    unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
    player_off_4 = *(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef);
    *(short *)(player_off_4 + 2) = (short)((ulonglong)g_unsynced_random_seed % 0x50) + *(short *)(player_off_4 + 2) + -0x28;
  }
  player_off_4 = g_my_player_word >> 0x18;
  dungeon_off = player_off_4 * 0x1508;
  if (*(int *)(&g_bss_002e142d + dungeon_off) != 0) {
    player_off_2 = *(ushort **)((int)&g_player_active_camera + player_off_4 * 0x4ef);
    val = (uint)*player_off_2 +
            (*(int *)(&g_bss_002e142d + dungeon_off) * (&g_slab_attr_table)[*(int *)((int)player_off_2 + 7)] >> 0x10);
    dungeon_off = (uint)player_off_2[1] +
            (-(*(int *)(&g_bss_002e142d + dungeon_off) * (int)(&PTR_LAB_00192fe0)[*(int *)((int)player_off_2 + 7)]
              >> 8) >> 8);
    if (val < 0) {
      val = 0;
    }
    else if (0xffff < val) {
      val = 0xffff;
    }
    if (dungeon_off < 0) {
      dungeon_off = 0;
    }
    else if (0xffff < dungeon_off) {
      dungeon_off = 0xffff;
    }
    **(undefined2 **)((int)&g_player_active_camera + player_off_4 * 0x4ef) = (short)val;
    *(short *)(*(int *)((int)&g_player_active_camera + player_off_4 * 0x4ef) + 2) = (short)dungeon_off;
  }
  uStack_28 = 0x87477;
  dungeon_update_slab_subtile_columns_023ece();
  if ((g_bss_0019d0ba & 8) != 0) {
    local_1c = (uint)*(ushort *)(&g_bss_0019d50e + (g_my_player_word >> 0x18) * 0x4ef);
    uStack_28 = 0x874d4;
    workshop_update_player_view_state_0780df();
  }
  uStack_28 = 0x874ef;
  draw_process_map_subtile_0a43b4();
  if ((g_bss_0019d0ba & 8) != 0) {
    uStack_28 = 0x87526;
    workshop_update_player_view_state_0780df();
  }
  if (g_bss_00377764 != '\0') {
    uStack_28 = g_screen_pitch;
    uStack_2c = (uint)g_mouse_cursor_x;
    word_ptr = &uStack_2c;
    draw_fn_08eadc();
  }
  word_ptr[-1] = 0x87571;
  effect_process_map_subtile_02457b();
  if ((g_game_operation_flags & 0x20) != 0) {
    g_lb_display_draw_flags = 0;
    g_render_frame_skip = g_bss_0019a29f;
    word_ptr[-1] = 0x875a5;
    gravyard_fn_0397c3();
    word_ptr[-1] = 0x875d9;
    draw_fn_08d220();
    word_ptr[-1] = 0x87622;
    panmap_update_player_view_state_062ee2();
    word_ptr[-1] = 0x87629;
    draw_update_creature_and_thing_0890bc();
  }
  word_ptr[-1] = 0x8762e;
  newgui_draw_text_overlay_05449e();
  if ((g_game_operation_flags & 0x20) != 0) {
    word_ptr[-1] = 0x8765f;
    draw_draw_text_overlay_08d348();
  }
  word_ptr[-1] = 0x87664;
  draw_draw_text_overlay_08ebb0();
  word_ptr[-1] = 0x87669;
  draw_update_slab_subtile_columns_08afd8();
  word_ptr[-1] = 0x8766e;
  newgui_draw_text_overlay_058ba8();
  player_off_3 = *(undefined4 **)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef);
  *player_off_3 = *word_ptr;
  *(undefined2 *)(player_off_3 + (uint)flag * -2 + 1) = *(undefined2 *)(word_ptr + (uint)flag * -2 + 1);
  return;
}

/******************************************************************************
 * Function : draw_fn_087694 (Original VA: 0x87694, Ghidra: FUN_00087694)
 * Prototype: void draw_fn_087694(void);
 * Address  : 0x87694 (Size: 476 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x087694
 * Callers  : 3 -> magic_data_mapfadeg_dat_050708, magic_data_mapfadeg_dat_0508a9, creature_dene_says_big_hello_08685c
 * Callees  : 13 -> dungeon_update_slab_subtile_columns_023ece, effect_process_map_subtile_02457b, gravyard_fn_0397c3, newgui_draw_text_overlay_05449e, newgui_draw_text_overlay_058ba8, panmap_update_player_view_state_062ee2, workshop_update_player_view_state_0780df, draw_update_creature_and_thing_0890bc ...
 ******************************************************************************/
void draw_fn_087694(void)

{
  dungeon_update_slab_subtile_columns_023ece();
  if ((g_bss_0019d0ba & 8) != 0) {
    workshop_update_player_view_state_0780df();
  }
  engine3_render_3d_dungeon_viewport();
  if ((g_bss_0019d0ba & 8) != 0) {
    workshop_update_player_view_state_0780df();
  }
  effect_process_map_subtile_02457b();
  if ((g_game_operation_flags & 0x20) != 0) {
    g_lb_display_draw_flags = 0;
    g_render_frame_skip = g_bss_0019a29f;
    gravyard_fn_0397c3();
    draw_fn_08d220();
    panmap_update_player_view_state_062ee2();
    draw_update_creature_and_thing_0890bc();
  }
  newgui_draw_text_overlay_05449e();
  if ((g_game_operation_flags & 0x20) != 0) {
    draw_draw_text_overlay_08d348();
  }
  draw_draw_text_overlay_08ebb0();
  draw_update_slab_subtile_columns_08afd8();
  newgui_draw_text_overlay_058ba8();
  return;
}

/******************************************************************************
 * Function : draw_update_creature_and_thing_087870 (Original VA: 0x87870, Ghidra: FUN_00087870)
 * Prototype: void draw_update_creature_and_thing_087870(void);
 * Address  : 0x87870 (Size: 1283 bytes)
 * Module   : draw.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 13 -> dungeon_update_slab_subtile_columns_023ece, effect_process_map_subtile_02457b, gravyard_fn_0397c3, newgui_draw_text_overlay_05449e, newgui_draw_text_overlay_058ba8, panmap_update_player_view_state_062ee2, draw_unhandled_screen_mode_087da4, draw_update_creature_and_thing_0890bc ...
 ******************************************************************************/
void draw_update_creature_and_thing_087870(void)

{
  char ch;
  byte unsynced_seed;
  ushort unsynced_seed_2;
  int thing_ptr;
  uint unsynced_seed_3;
  byte flag;
  int val;
  int player_off;
  uint *word_ptr;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [32];
  
  word_ptr = (uint *)local_38;
  thing_ptr = (g_my_player_word >> 0x18) * 0x4ef;
  if ((&g_bss_0019d527)[thing_ptr] != '\x02') {
    (&g_bss_0019d527)[thing_ptr] = 2;
  }
  local_3c = 0x878b3;
  dungeon_update_slab_subtile_columns_023ece();
  local_3c = 0x878d9;
  draw_unhandled_screen_mode_087da4();
  if (g_bss_00377764 != '\0') {
    local_3c = g_screen_pitch;
    local_40 = (uint)g_mouse_cursor_x;
    word_ptr = &local_40;
    draw_fn_08eadc();
  }
  word_ptr[-1] = 0x87924;
  effect_process_map_subtile_02457b();
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)];
  unsynced_seed_3 = g_unsynced_random_seed * 0x24a1 + 0x24df;
  if (thing_ptr == g_thing_ptrs) {
    g_unsynced_random_seed._0_1_ = (byte)(unsynced_seed_3 >> 0xd);
    unsynced_seed_2 = CONCAT11((&g_bss_0019d0c9)[player_off],(byte)g_unsynced_random_seed) & 0xfb01;
    flag = (byte)(unsynced_seed_2 >> 8);
    g_unsynced_random_seed = unsynced_seed_3 >> 0xd | unsynced_seed_3 * 0x80000;
    (&g_bss_0019d0c9)[player_off] = flag;
    (&g_bss_0019d0c9)[player_off] = flag | (char)unsynced_seed_2 << 2;
  }
  else if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
    thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
    ch = *(char *)(thing_ptr + 0xd2);
    if (((ch == '\x01') || (ch == '\x02')) || (ch == '\'')) {
      g_lb_display_draw_flags = 4;
      thing_ptr = (*(int *)(thing_ptr + 0xd2) >> 0x10) *
              (int)(0x500 / (longlong)(*(int *)(thing_ptr + 0xd6) >> 0x10));
      player_off = thing_ptr >> 0x1f;
      player_off = (int)((thing_ptr + player_off * -0x100) - (uint)(player_off << 7 < 0)) >> 8;
      word_ptr[2] = 0;
      val = 0;
      thing_ptr = *(int *)(&g_data_001991e8 + player_off * 4);
      do {
        val = val + 1;
        word_ptr[2] = word_ptr[2] + (uint)*(byte *)(thing_ptr + 10) * (uint)g_units_per_pixel;
        thing_ptr = thing_ptr + 6; /* thing->owner */
      } while (val < 3);
      player_off = player_off * 4;
      if (((&g_bss_0019d0c9)[(g_my_player_word >> 0x18) * 0x4ef] & 4) == 0) {
        g_lb_display_draw_flags = 5;
        word_ptr[3] = player_off;
        *word_ptr = 0x12;
        do {
          word_ptr[5] = (uint)*(byte *)(*(int *)(&g_data_001991e8 + word_ptr[3]) + *word_ptr + 5) *
                      (uint)g_units_per_pixel;
          word_ptr[1] = 0;
          do {
            word_ptr[-1] = 0x87c3e;
            watcom_crt_fn_13a710();
            thing_ptr = word_ptr[1];
            word_ptr[1] = thing_ptr + 1;
          } while (thing_ptr + 1 < 3);
          thing_ptr = *word_ptr;
          *word_ptr = thing_ptr + 0x12;
        } while (thing_ptr + 0x12 != 0x36);
      }
      else {
        word_ptr[4] = (uint)*(byte *)(*(int *)(&g_data_001991e8 + player_off) + 0xb) * (uint)g_units_per_pixel;
        word_ptr[6] = 0;
        do {
          word_ptr[7] = 0;
          do {
            word_ptr[-1] = 0x87b7e;
            watcom_crt_fn_13a710();
            thing_ptr = word_ptr[7];
            word_ptr[7] = thing_ptr + 1;
          } while (thing_ptr + 1 < 3);
          thing_ptr = word_ptr[6];
          word_ptr[6] = thing_ptr + 1;
        } while (thing_ptr + 1 < 2);
      }
      g_lb_display_draw_flags = 0;
    }
    else {
      g_unsynced_random_seed._0_1_ = (byte)(unsynced_seed_3 >> 0xd);
      flag = (&g_bss_0019d0c9)[player_off];
      unsynced_seed = (byte)g_unsynced_random_seed & 1;
      g_unsynced_random_seed = unsynced_seed_3 >> 0xd | unsynced_seed_3 * 0x80000;
      (&g_bss_0019d0c9)[player_off] = flag & 0xfb;
      (&g_bss_0019d0c9)[player_off] = flag & 0xfb | unsynced_seed << 2;
    }
  }
  else {
    g_unsynced_random_seed._0_1_ = (byte)(unsynced_seed_3 >> 0xd);
    flag = (&g_bss_0019d0c9)[player_off];
    unsynced_seed = (byte)g_unsynced_random_seed & 1;
    g_unsynced_random_seed = unsynced_seed_3 >> 0xd | unsynced_seed_3 * 0x80000;
    (&g_bss_0019d0c9)[player_off] = flag & 0xfb;
    (&g_bss_0019d0c9)[player_off] = flag & 0xfb | unsynced_seed << 2;
  }
  if ((g_game_operation_flags & 0x20) != 0) {
    g_lb_display_draw_flags = 0;
    g_render_frame_skip = g_bss_0019a29f;
    word_ptr[-1] = 0x87ca5;
    gravyard_fn_0397c3();
    word_ptr[-1] = 0x87cd9;
    draw_fn_08d220();
    word_ptr[-1] = 0x87d22;
    panmap_update_player_view_state_062ee2();
    word_ptr[-1] = 0x87d29;
    draw_update_creature_and_thing_0890bc();
  }
  word_ptr[-1] = 0x87d2e;
  newgui_draw_text_overlay_05449e();
  if ((g_game_operation_flags & 0x20) != 0) {
    word_ptr[-1] = 0x87d5f;
    draw_draw_text_overlay_08d348();
  }
  word_ptr[-1] = 0x87d64;
  draw_draw_text_overlay_08ebb0();
  word_ptr[-1] = 0x87d69;
  newgui_draw_text_overlay_058ba8();
  return;
}

/******************************************************************************
 * Function : draw_unhandled_screen_mode_087da4 (Original VA: 0x87da4, Ghidra: FUN_00087da4)
 * Prototype: void draw_unhandled_screen_mode_087da4(void);
 * Address  : 0x87da4 (Size: 811 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp lines 700, 768
 * Purpose  : String 'Unhandled screen mode'
 * Callers  : 1 -> draw_update_creature_and_thing_087870
 * Callees  : 8 -> frontend_fn_02d8e2, lair_fn_04e0dd, moodneed_fn_051a46, moodneed_fn_051a67, workshop_update_player_view_state_0780df, draw_process_map_subtile_0a43b4, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
void draw_unhandled_screen_mode_087da4(void)

{
  undefined4 uval;
  undefined4 uval_2;
  undefined4 uval_3;
  undefined4 uval_4;
  undefined4 uval_5;
  undefined4 uval_6;
  undefined4 uval_7;
  uint ui_scale;
  undefined4 uval_8;
  
  uval_7 = g_display_bss_003d9848;
  uval_6 = g_display_bss_003d9844;
  uval_5 = g_display_bss_003d9840;
  uval_4 = g_display_bss_003d983c;
  uval_3 = g_display_bss_003d9838;
  uval_2 = g_screen_pitch;
  uval = g_display_bss_003d9818;
  if (((((g_bss_0019d0bd & 2) == 0) || (g_bss_0019d0c7 == '\0')) || (g_bss_00333193 == 0)) ||
     ((g_bss_0019d0c7 == '\r' || (g_bss_0019d0c7 == '\x0e')))) {
    draw_process_map_subtile_0a43b4();
    return;
  }
  if (g_active_screen_mode < 10) {
    uval_8 = g_bss_00333197;
    if (g_active_screen_mode == 1) goto LAB_00087f52;
  }
  else {
    uval_8 = g_data_0019922c;
    if ((g_active_screen_mode < 0xb) || (g_active_screen_mode == 0xd)) {
LAB_00087f52:
      LbScreenWaitVbi();
      g_display_bss_003d9844 = g_screen_width * (uint)g_units_per_pixel;
      g_display_bss_003d983c = 0;
      g_display_bss_003d9838 = (uint)g_mouse_cursor_x;
      g_display_bss_003d9840 = 0;
      g_screen_pitch = g_screen_width;
      g_display_bss_003d9818 = uval_8;
      g_display_bss_003d9848 = g_display_bss_003d9838;
      workshop_update_player_view_state_0780df();
      draw_process_map_subtile_0a43b4();
      g_display_bss_003d9818 = uval;
      g_screen_pitch = uval_2;
      g_display_bss_003d9838 = uval_3;
      g_display_bss_003d983c = uval_4;
      g_display_bss_003d9840 = uval_5;
      g_display_bss_003d9844 = uval_6;
      g_display_bss_003d9848 = uval_7;
      workshop_update_player_view_state_0780df();
      switch(g_bss_0019d0c7) {
      case '\x01':
      case '\x02':
        lair_fn_04e0dd((uint)g_mouse_cursor_x / (uint)g_units_per_pixel,g_screen_pitch);
        return;
      case '\x03':
        frontend_fn_02d8e2(1,(uint)g_mouse_cursor_x / (uint)g_units_per_pixel);
        return;
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
      case '\v':
      case '\f':
        ui_scale = (uint)g_mouse_cursor_y / (uint)g_units_per_pixel;
        moodneed_fn_051a67(ui_scale,ui_scale,(uint)g_mouse_cursor_x / (uint)g_units_per_pixel);
        moodneed_fn_051a46();
        return;
      default:
        LbErrorLog(); /* LbErrorLog("draw.cpp", line 700, "Unhandled screen mode") */
        return;
      }
    }
  }
  LbErrorLog(); /* LbErrorLog("draw.cpp", line 768, "Invalid lens mode") */
  return;
}

/******************************************************************************
 * Function : draw_fn_0880d0 (Original VA: 0x880d0, Ghidra: FUN_000880d0)
 * Prototype: void draw_fn_0880d0(void);
 * Address  : 0x880d0 (Size: 481 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Module draw.cpp procedure @ 0x0880d0
 * Callers  : 2 -> creature_dene_says_big_hello_08685c, draw_fn_0872a4
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void draw_fn_0880d0(void)

{
  uint ui_scale;
  uint loop_i;
  int val;
  uint uval;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  int local_1c;
  
  if (g_active_screen_mode == 1) {
    word_ptr_2 = &g_render_poly_buf_start;
    word_ptr = g_display_bss_003d9818;
    for (local_1c = 0; local_1c < (int)((uint)g_mouse_cursor_x / (uint)g_units_per_pixel);
        local_1c = local_1c + 1) {
      ui_scale = (uint)g_mouse_cursor_y / (uint)g_units_per_pixel;
      word_ptr_3 = word_ptr_2;
      word_ptr_4 = word_ptr;
      for (loop_i = ui_scale >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_4 = *word_ptr_3;
        word_ptr_3 = word_ptr_3 + 1;
        word_ptr_4 = word_ptr_4 + 1;
      }
      for (ui_scale = ui_scale & 3; ui_scale != 0; ui_scale = ui_scale - 1) {
        *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + 1);
        word_ptr_4 = (undefined4 *)((int)word_ptr_4 + 1);
      }
      word_ptr = (undefined4 *)((int)word_ptr + g_screen_pitch);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)g_mouse_cursor_y / (uint)g_units_per_pixel);
    }
  }
  else {
    val = 0;
    word_ptr = g_display_bss_003d9818;
    word_ptr_2 = g_data_0019922c;
    while( true ) {
      if ((int)(((uint)g_mouse_cursor_x / (uint)g_units_per_pixel) / 2) <= val) break;
      ui_scale = (uint)g_mouse_cursor_y / (uint)g_units_per_pixel;
      word_ptr_3 = word_ptr_2;
      word_ptr_4 = word_ptr;
      for (loop_i = ui_scale >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_4 = *word_ptr_3;
        word_ptr_3 = word_ptr_3 + 1;
        word_ptr_4 = word_ptr_4 + 1;
      }
      for (ui_scale = ui_scale & 3; ui_scale != 0; ui_scale = ui_scale - 1) {
        *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + 1);
        word_ptr_4 = (undefined4 *)((int)word_ptr_4 + 1);
      }
      uval = (uint)g_mouse_cursor_y;
      ui_scale = (uint)g_units_per_pixel;
      word_ptr = (undefined4 *)((int)word_ptr + g_screen_pitch);
      word_ptr_3 = word_ptr_2;
      word_ptr_4 = word_ptr;
      for (loop_i = uval / ui_scale >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_4 = *word_ptr_3;
        word_ptr_3 = word_ptr_3 + 1;
        word_ptr_4 = word_ptr_4 + 1;
      }
      for (ui_scale = uval / ui_scale & 3; ui_scale != 0; ui_scale = ui_scale - 1) {
        *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + 1);
        word_ptr_4 = (undefined4 *)((int)word_ptr_4 + 1);
      }
      word_ptr = (undefined4 *)((int)word_ptr + g_screen_pitch);
      val = val + 1;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + ((uint)g_mouse_cursor_y / (uint)g_units_per_pixel) * 2);
    }
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_0882b4 (Original VA: 0x882b4, Ghidra: FUN_000882b4)
 * Prototype: void draw_update_slab_subtile_columns_0882b4(void);
 * Address  : 0x882b4 (Size: 994 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 2 -> creature_dene_says_big_hello_08685c, draw_fn_0872a4
 * Callees  : 3 -> door_process_map_subtile_022b3a, draw_update_slab_subtile_columns_088698, draw_process_map_subtile_088c6c
 ******************************************************************************/
void draw_update_slab_subtile_columns_0882b4(void)

{
  byte player_off;
  char ch;
  byte slab_coord;
  byte flag;
  int val;
  uint ui_scale;
  int loop_i;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  byte *local_44;
  uint local_3c;
  int local_38;
  byte local_24;
  byte local_20;
  
  player_off = (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef];
  ui_scale = (uint)g_units_per_pixel;
  local_3c = 0x101;
  local_44 = (byte *)(g_display_bss_003d9818 +
                     (int)(0x96 / (ulonglong)(longlong)(int)ui_scale) +
                     g_screen_pitch * (int)(0x38 / (ulonglong)(longlong)(int)ui_scale));
  local_24 = 1;
  local_38 = 0;
  local_60 = 0;
  for (loop_i = (int)(4 / (ulonglong)(longlong)(int)ui_scale) * 0x55; loop_i != 0; loop_i = loop_i + -1) {
    if ((local_60 != 0) && (local_60 % (int)(4 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel) == 0)
       ) {
      local_38 = local_38 + 0x55;
      local_3c = local_3c + 0x300;
      local_24 = local_24 + 3;
    }
    local_50 = local_44;
    local_54 = local_3c;
    local_48 = local_3c * 5;
    local_4c = local_38 * 6;
    local_5c = 0x55;
    local_20 = 1;
    do {
      ch = (&g_slabmap_base)[local_4c];
      slab_coord = (&g_slabmap)
              [((&g_subtile_to_slab_lut)[local_54 & 0xff] + (&g_subtile_to_slab_lut)[local_54 >> 8] * 0x55) * 6];
      flag = *(byte *)((int)&g_map_subtiles + local_48);
      local_58 = (int)(4 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
      if (local_58 != 0) {
        do {
          ui_scale = (uint)(slab_coord & 7);
          if ((((flag & 4) == 0) && ((flag & 0x80) == 0)) || ((g_game_turn & 4) == 0)) {
            if ((flag & 1) == 0) {
              if ((*(uint *)((int)&g_map_subtiles + local_48 + 1) >> 0x1c &
                  (uint)(byte)('\x01' << (player_off & 0x1f))) != 0) {
                if ((flag & 2) == 0) {
                  if (ch == '\0') {
                    *local_50 = 0;
                  }
                  else if ((flag & 0x20) == 0) {
                    if ((flag & 0x40) == 0) {
                      if ((flag & 0x10) == 0) {
                        if (ch == '\f') {
                          *local_50 = 0x92;
                        }
                        else if (ch == '\r') {
                          *local_50 = 0x55;
                        }
                        else if (ui_scale == g_neutral_player_number) {
                          *local_50 = 4;
                        }
                        else {
                          *local_50 = (&g_data_0019176e)[ui_scale];
                        }
                      }
                    }
                    else {
                      val = door_process_map_subtile_022b3a();
                      if (((g_game_turn & 1) == 0) ||
                         ((uint)*(byte *)(val + 0x1a) != (int)g_data_0017d17f)) {
                        if (*(char *)(val + 0x18) == '\0') {
                          *local_50 = 0x3c;
                        }
                        else {
                          *local_50 = 0x4f;
                        }
                      }
                      else {
                        *local_50 = 0x1f;
                      }
                    }
                  }
                  else {
                    *local_50 = (&g_bss_00366c10)[*local_50];
                  }
                }
                else if (((g_game_turn & 1) == 0) ||
                        ((uint)*(ushort *)
                                (&g_room_slabs_count +
                                (uint)(byte)(&g_bss_002d33c8)
                                            [((&g_subtile_to_slab_lut)[local_24] * 0x55 +
                                             (&g_subtile_to_slab_lut)[local_20]) * 6] * 0x45) !=
                         g_data_0017d17b >> 0x18)) {
                  if (ui_scale == g_neutral_player_number) {
                    *local_50 = (&g_data_00191774)[g_game_turn & 3];
                  }
                  else {
                    *local_50 = (&g_data_00191774)[ui_scale];
                  }
                }
                else {
                  *local_50 = 0x1f;
                }
              }
            }
            else {
              *local_50 = (&g_bss_0036e810)[*local_50];
            }
          }
          else {
            *local_50 = (&g_bss_00367610)[*local_50];
          }
          local_58 = local_58 + -1;
          local_50 = local_50 + 1;
        } while (local_58 != 0);
      }
      local_5c = local_5c + -1;
      local_4c = local_4c + 6;
      local_48 = local_48 + 0xf;
      local_54 = local_54 + 3;
      local_20 = local_20 + 3;
    } while (local_5c != 0);
    local_44 = local_44 + g_screen_pitch;
    local_60 = local_60 + 1;
  }
  g_lb_display_draw_flags = 0;
  draw_update_slab_subtile_columns_088698();
  draw_process_map_subtile_088c6c();
  return;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_088698 (Original VA: 0x88698, Ghidra: FUN_00088698)
 * Prototype: void draw_update_slab_subtile_columns_088698(void);
 * Address  : 0x88698 (Size: 1489 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> draw_update_slab_subtile_columns_0882b4
 * Callees  : 4 -> object_handle_object_thing_0c6574, object_handle_object_thing_0c688c, bflib_system_io_fn_0f5390, bflib_system_io_fn_0f5460
 ******************************************************************************/
void draw_update_slab_subtile_columns_088698(void)

{
  byte player_off;
  byte flag;
  int extraout_ECX;
  byte *thing_ptr;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  int slab_coord;
  int val;
  int val_2;
  int val_3;
  byte *local_2c;
  
  player_off = '\x01' << ((&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] & 0x1f);
  local_2c = (&g_thing_ptrs)[g_bss_002e6eb6];
  if (local_2c != g_thing_ptrs) {
    do {
      if (((*local_2c & 0x10) == 0) && ((local_2c[1] & 2) == 0)) {
        if ((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(local_2c[0x10],local_2c[0xe]) * 5 + 1) >>
             0x1c & (uint)player_off) != 0) {
          bflib_system_io_fn_0f5390();
        }
        if (local_2c[0x1a] == 8) {
          flag = local_2c[7];
          if (flag == 0xe) {
            flag = local_2c[8];
          }
          if ((flag == 0x1c) || (flag == 0x4d)) {
            val_2 = 0;
            do {
              if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(local_2c + 100)] + val_2 + 0x90) == 0)
              break;
              bflib_system_io_fn_0f5390();
              val_2 = extraout_ECX;
            } while (extraout_ECX < 10);
          }
        }
      }
      local_2c = (&g_thing_ptrs)[*(ushort *)(local_2c + 0x67)];
    } while (local_2c != g_thing_ptrs);
  }
  val_3 = 0;
  val_2 = 0;
  do {
    if (*(int *)((int)&g_bss_002e0e0d + val_2) != 0) {
      slab_coord = (&g_subtile_to_slab_lut)[*(int *)(&g_bss_002eb001 + (uint)(byte)(&g_bss_002e0e0c)[val_2] * 4)] * 4
              * (g_game_turn + val_3 & 7);
      val = slab_coord >> 0x1f;
      g_lb_display_draw_flags = 0x10;
      bflib_system_io_fn_0f5460(((int)((slab_coord + val * -8) - (uint)(val << 2 < 0)) >> 3) /
                   (int)(uint)g_units_per_pixel);
    }
    val_3 = val_3 + 1;
    val_2 = val_2 + 0x1508;
  } while (val_3 < 5);
  if (((g_game_turn & 3) == 1) && (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6], thing_ptr != g_thing_ptrs))
  {
    do {
      if (((*thing_ptr & 0x10) == 0) &&
         (((thing_ptr[1] & 2) == 0 &&
          ((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(thing_ptr[0x10],thing_ptr[0xe]) * 5 + 1) >> 0x1c
           & (uint)player_off) != 0)))) {
        val_2 = object_handle_object_thing_0c688c();
        if (val_2 == 0) {
          val_2 = object_handle_object_thing_0c6574();
          thing_ptr = extraout_ECX_01;
          if (val_2 != 0) {
            bflib_system_io_fn_0f5390();
            thing_ptr = extraout_ECX_02;
          }
        }
        else {
          bflib_system_io_fn_0f5390();
          thing_ptr = extraout_ECX_00;
        }
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    } while (thing_ptr != g_thing_ptrs);
  }
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6eee];
  if (thing_ptr != g_thing_ptrs) {
    do {
      if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
         (*(int *)(thing_ptr + 3) >> 0x18 ==
          (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) {
        bflib_system_io_fn_0f5390();
        bflib_system_io_fn_0f5390();
        bflib_system_io_fn_0f5390();
        bflib_system_io_fn_0f5390();
        bflib_system_io_fn_0f5390();
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    } while (thing_ptr != g_thing_ptrs);
  }
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_088c6c (Original VA: 0x88c6c, Ghidra: FUN_00088c6c)
 * Prototype: uint draw_process_map_subtile_088c6c(void);
 * Address  : 0x88c6c (Size: 425 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> draw_update_slab_subtile_columns_0882b4
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
uint draw_process_map_subtile_088c6c(void)

{
  byte player_off;
  byte flag;
  char ch;
  uint uval;
  uint uval_2;
  byte *extraout_ECX;
  byte *byte_ptr;
  int val;
  bool flag_2;
  
  player_off = (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef];
  uval = g_game_turn >> 1;
  uval_2 = uval / 0x11;
  flag_2 = g_bss_002f10d2 < g_bss_002f10d6;
  byte_ptr = g_bss_002f10d2;
  while (flag_2) {
    if ((*byte_ptr & 1) != 0) {
      val = (int)(char)((ulonglong)uval % 0x11) - (uint)*(ushort *)(byte_ptr + 10);
      flag = (byte)(val >> 0x1f);
      ch = ((byte)val ^ flag) - flag;
      if ((ch < '\x02') || ('\x03' < ch)) {
        g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfb;
      }
      else {
        g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 4;
      }
      uval_2 = (uint)ch;
      if ((int)uval_2 < 4) {
        uval_2 = (uint)(byte)('\x01' << (player_off & 0x1f));
        if (((*(uint *)((int)&g_map_subtiles + ((uint)byte_ptr[9] * 0x100 + (uint)byte_ptr[8]) * 5 + 1) >>
              0x1c & uval_2) != 0) &&
           (uval_2 = (uint)*(ushort *)(&g_data_0018ebab + (uint)*(ushort *)(byte_ptr + 10) * 0x17),
           uval_2 != 0)) {
          uval_2 = watcom_crt_fn_13a710();
          byte_ptr = extraout_ECX;
        }
      }
    }
    byte_ptr = byte_ptr + 0x45;
    flag_2 = byte_ptr < g_bss_002f10d6;
  }
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfb;
  return uval_2;
}

/******************************************************************************
 * Function : draw_process_thing_entity_088e2c (Original VA: 0x88e2c, Ghidra: FUN_00088e2c)
 * Prototype: void draw_process_thing_entity_088e2c(void);
 * Address  : 0x88e2c (Size: 595 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> draw_update_creature_and_thing_0890bc
 * Callees  : 3 -> panmap_fn_0629cc, get_2d_box_distance_xy, bflib_system_io_fn_0e66ec
 ******************************************************************************/
void draw_process_thing_entity_088e2c(void)

{
  ushort uval;
  int arg_eax;
  uint ui_scale;
  int val;
  int val_2;
  uint uval_2;
  int thing_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_3;
  int player_off;
  int val_4;
  
  ui_scale = (uint)(0x74 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel) / 2;
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  if ((&g_dungeons)[(uint)(byte)(&g_player_id_number)[player_off] * 0xa84] != 0) {
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 4;
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)(byte)(&g_player_id_number)[player_off] * 0xa84]];
    val = (int)(((uint)*(byte *)(thing_ptr + 0xe) -
                  (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off) + 1)) * 0x100) / arg_eax;
    val_2 = (int)(((uint)*(byte *)(thing_ptr + 0x10) -
                  (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off) + 3)) * 0x100) / arg_eax;
    player_off = *(int *)(*(int *)((int)&g_player_active_camera + player_off) + 7);
    get_2d_box_distance_xy(thing_ptr,ui_scale + (val_2 * (&g_slab_attr_table)[player_off] +
                                val * (int)(&PTR_LAB_00192fe0)[player_off] >> 0x10),
                 (val_2 * (int)(&PTR_LAB_00192fe0)[player_off] + (&g_slab_attr_table)[player_off] * -val >> 0x10)
                 + ui_scale);
    uval = bflib_system_io_fn_0e66ec();
    uval_2 = -((uint)uval % 0x800) & 0x7ff;
    thing_ptr = (&g_slab_attr_table)[uval_2] * -0x400 >> 0x10;
    val_3 = (g_game_turn & 3) + 1;
    player_off = thing_ptr * val_3;
    val = (int)(&PTR_LAB_00192fe0)[uval_2] * -0x400 >> 0x10;
    val_2 = player_off >> 0x1f;
    val_3 = val * val_3;
    val_4 = ui_scale * 0x100 + ((int)((player_off + val_2 * -4) - (uint)(val_2 << 1 < 0)) >> 2) + thing_ptr / 2;
    val_2 = val_3 >> 0x1f;
    player_off = extraout_ECX + -4;
    val_2 = ui_scale * 0x100 + ((int)((val_3 + val_2 * -4) - (uint)(val_2 << 1 < 0)) >> 2) + val / 2;
    if (0 < player_off) {
      while (0 < player_off) {
        player_off = val_4 * (uint)g_units_per_pixel;
        if ((((player_off < 0) || (0x73ff < player_off)) || (player_off = (uint)g_units_per_pixel * val_2, player_off < 0))
           || (0x73ff < player_off)) break;
        panmap_fn_0629cc();
        val_4 = val_4 + thing_ptr;
        val_2 = val_2 + val;
        player_off = extraout_ECX_00;
      }
    }
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfb;
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_089080 (Original VA: 0x89080, Ghidra: FUN_00089080)
 * Prototype: void draw_fn_089080(int *param_1);
 * Address  : 0x89080 (Size: 59 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Module draw.cpp procedure @ 0x089080
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_089080(int *param_1)

{
  undefined *word_ptr;
  int val;
  int arg_eax;
  int *arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  word_ptr = (&PTR_LAB_00192fe0)[arg_eax];
  val = (&g_slab_attr_table)[arg_eax];
  *arg_ecx = arg_ebx * val + arg_edx * (int)word_ptr >> 0x10;
  *param_1 = val * -arg_edx + arg_ebx * (int)word_ptr >> 0x10;
  return;
}

/******************************************************************************
 * Function : draw_update_creature_and_thing_0890bc (Original VA: 0x890bc, Ghidra: FUN_000890bc)
 * Prototype: void draw_update_creature_and_thing_0890bc(void);
 * Address  : 0x890bc (Size: 2601 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 5 -> panmap_fn_0629cc, draw_process_thing_entity_088e2c, draw_update_player_dungeon_089ae8, object_handle_object_thing_0c6574, object_handle_object_thing_0c688c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_update_creature_and_thing_0890bc(void)

{
  byte flag;
  undefined1 uval;
  ushort cctrl_ptr;
  undefined *word_ptr;
  byte flag_2;
  int val;
  int val_2;
  uint uval_2;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  int player_off;
  int extraout_ECX_01;
  int extraout_ECX_02;
  byte *thing_ptr;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  uint ui_scale;
  int *int_ptr;
  int *int_ptr_2;
  int player_off_2;
  int player_off_3;
  int aiStack_4c [4];
  int local_3c;
  undefined1 local_38 [4];
  byte local_34 [12];
  int local_28;
  undefined1 local_24;
  undefined1 local_20;
  char local_1c;
  
  int_ptr = aiStack_4c + 3;
  int_ptr_2 = aiStack_4c + 3;
  local_20 = 0x1f;
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6];
  local_1c = '\x01' << ((&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] & 0x1f);
  local_24 = 1;
  if (thing_ptr != g_thing_ptrs) {
    do {
      int_ptr_2 = int_ptr;
      if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[0x1a] == 0x18)) {
        player_off_3 = (g_my_player_word >> 0x18) * 0x4ef;
        val = (int)(((uint)thing_ptr[0xe] -
                      (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off_3) + 1)) * 0x100) /
                int_ptr[6];
        player_off_3 = *(int *)((int)&g_player_active_camera + player_off_3);
        val_2 = (int)(((uint)thing_ptr[0x10] - (uint)*(byte *)(player_off_3 + 3)) * 0x100) / int_ptr[6];
        player_off_3 = *(int *)(player_off_3 + 7);
        word_ptr = (&PTR_LAB_00192fe0)[player_off_3];
        player_off_3 = (&g_slab_attr_table)[player_off_3];
        int_ptr[3] = val_2 * player_off_3;
        int_ptr[1] = val_2 * (int)word_ptr + player_off_3 * -val >> 0x10;
        *int_ptr = val * (int)word_ptr + int_ptr[3] >> 0x10;
        int_ptr[-1] = int_ptr[6];
        int_ptr_2 = int_ptr + -2;
        int_ptr[-2] = int_ptr[1];
        int_ptr[-3] = 0x891d9;
        draw_update_player_dungeon_089ae8();
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
      int_ptr = int_ptr_2;
    } while (thing_ptr != g_thing_ptrs);
  }
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6eee];
  if (thing_ptr != g_thing_ptrs) {
    do {
      player_off_3 = (g_my_player_word >> 0x18) * 0x4ef;
      flag_2 = (&g_player_id_number)[player_off_3];
      if (*(int *)(thing_ptr + 3) >> 0x18 == (uint)flag_2) {
        val = (int)(((uint)thing_ptr[0xe] -
                      (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off_3) + 1)) * 0x100) /
                int_ptr_2[6];
        val_2 = (int)(((uint)thing_ptr[0x10] -
                      (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off_3) + 3)) * 0x100) /
                int_ptr_2[6];
        player_off_3 = *(int *)(*(int *)((int)&g_player_active_camera + player_off_3) + 7);
        word_ptr = (&PTR_LAB_00192fe0)[player_off_3];
        player_off_3 = (&g_slab_attr_table)[player_off_3];
        int_ptr_2[4] = val_2 * player_off_3;
        int_ptr_2[1] = val_2 * (int)word_ptr + player_off_3 * -val >> 0x10;
        ui_scale = (uint)g_units_per_pixel;
        uval_2 = (uint)(0x74 / (ulonglong)(longlong)(int)ui_scale) / 2;
        int_ptr_2[3] = val * (int)word_ptr;
        *int_ptr_2 = int_ptr_2[4] + int_ptr_2[3] >> 0x10;
        player_off_3 = uval_2 + (int_ptr_2[4] + int_ptr_2[3] >> 0x10);
        val_2 = int_ptr_2[1] + uval_2;
        val = player_off_3 * ui_scale;
        *int_ptr_2 = player_off_3;
        int_ptr_2[1] = val_2;
        if ((((-1 < val) && (val < 0x74)) &&
            ((val_2 = ui_scale * val_2, -1 < val_2 && (val_2 < 0x74)))) &&
           ((thing_ptr[0x18] != 0 || (*(int *)(thing_ptr + 3) >> 0x18 == (uint)flag_2)))) {
          if (((uint)thing_ptr[0x1a] == ram0x0017d17d >> 0x18) && ((g_game_turn & 1) != 0)) {
            int_ptr_2[-1] = 0x8936c;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x8937e;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x89390;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x893a2;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x893b4;
            panmap_fn_0629cc();
            thing_ptr = extraout_ECX;
          }
          else {
            int_ptr_2[-1] = 0x893ca;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x893dc;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x893ee;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x89400;
            panmap_fn_0629cc();
            int_ptr_2[-1] = 0x89412;
            panmap_fn_0629cc();
            thing_ptr = extraout_ECX_00;
          }
        }
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    } while (thing_ptr != g_thing_ptrs);
  }
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6];
  if (thing_ptr != g_thing_ptrs) {
    do {
      if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
        flag_2 = thing_ptr[0x10];
        flag = thing_ptr[0xe];
        if ((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(flag_2,flag) * 5 + 1) >> 0x1c &
            (uint)*(byte *)(int_ptr_2 + 9)) != 0) {
          if ((g_game_turn & 4) == 0) {
            uval = (&g_data_00191774)[*(int *)(thing_ptr + 3) >> 0x18];
            *(undefined1 *)(int_ptr_2 + 8) = uval;
            *(undefined1 *)(int_ptr_2 + 7) = uval;
          }
          player_off = (g_my_player_word >> 0x18) * 0x4ef;
          val = (int)(((uint)flag - (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off) + 1)) *
                       0x100) / int_ptr_2[6];
          val_2 = (int)(((uint)flag_2 - (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off) + 3)) *
                       0x100) / int_ptr_2[6];
          player_off_3 = *(int *)(*(int *)((int)&g_player_active_camera + player_off) + 7);
          word_ptr = (&PTR_LAB_00192fe0)[player_off_3];
          player_off_3 = (&g_slab_attr_table)[player_off_3];
          int_ptr_2[4] = val_2 * player_off_3;
          int_ptr_2[1] = val_2 * (int)word_ptr + player_off_3 * -val >> 0x10;
          ui_scale = (uint)g_units_per_pixel;
          uval_2 = (uint)(0x74 / (ulonglong)(longlong)(int)ui_scale) / 2;
          int_ptr_2[3] = val * (int)word_ptr;
          *int_ptr_2 = int_ptr_2[4] + int_ptr_2[3] >> 0x10;
          val_2 = (int_ptr_2[4] + int_ptr_2[3] >> 0x10) + uval_2;
          val = int_ptr_2[1] + uval_2;
          player_off_3 = val_2 * ui_scale;
          *int_ptr_2 = val_2;
          int_ptr_2[1] = val;
          if ((((-1 < player_off_3) && (player_off_3 < 0x74)) && (val = ui_scale * val, -1 < val)) &&
             (val < 0x74)) {
            if (((*(int *)(thing_ptr + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[player_off]) &&
                ((uint)thing_ptr[0x1a] == (int)g_data_0017d181)) && ((g_game_turn & 1) != 0)) {
              int_ptr_2[-1] = 0x895c6;
              panmap_fn_0629cc();
              int_ptr_2[-1] = 0x895d9;
              panmap_fn_0629cc();
              int_ptr_2[-1] = 0x895e8;
              panmap_fn_0629cc();
              int_ptr_2[-1] = 0x895f7;
              panmap_fn_0629cc();
            }
            int_ptr_2[-1] = 0x8964d;
            panmap_fn_0629cc();
          }
        }
        if (thing_ptr[0x1a] == 8) {
          flag_2 = thing_ptr[7];
          if (flag_2 == 0xe) {
            flag_2 = thing_ptr[8];
          }
          if ((flag_2 == 0x1c) || (flag_2 == 0x4d)) {
            player_off_3 = 0;
            do {
              cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + player_off_3 + 0x90); /* thing->ccontrol_idx */
              if (cctrl_ptr == 0) break;
              int_ptr_2[5] = (uint)cctrl_ptr % 0x100;
              if ((g_game_turn & 4) == 0) {
                uval = (&g_data_00191774)[*(int *)(thing_ptr + 3) >> 0x18];
                *(undefined1 *)(int_ptr_2 + 8) = uval;
                *(undefined1 *)(int_ptr_2 + 7) = uval;
              }
              player_off_2 = (g_my_player_word >> 0x18) * 0x4ef;
              val_2 = (int)((int_ptr_2[5] - (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off_2) + 1)
                            ) * 0x100) / int_ptr_2[6];
              int_ptr_2[3] = *(int *)((int)&g_player_active_camera + player_off_2);
              player_off = (int)((cctrl_ptr / 0x100 - (uint)*(byte *)(int_ptr_2[3] + 3)) * 0x100) / int_ptr_2[6];
              val = *(int *)(int_ptr_2[3] + 7);
              int_ptr_2[2] = (int)(&PTR_LAB_00192fe0)[val];
              val = (&g_slab_attr_table)[val];
              int_ptr_2[3] = player_off * val;
              int_ptr_2[1] = player_off * int_ptr_2[2] + val * -val_2 >> 0x10;
              ui_scale = (uint)g_units_per_pixel;
              uval_2 = (uint)(0x74 / (ulonglong)(longlong)(int)ui_scale) / 2;
              int_ptr_2[4] = int_ptr_2[2] * val_2;
              *int_ptr_2 = int_ptr_2[3] + int_ptr_2[4] >> 0x10;
              player_off = (int_ptr_2[3] + int_ptr_2[4] >> 0x10) + uval_2;
              val_2 = int_ptr_2[1] + uval_2;
              val = player_off * ui_scale;
              *int_ptr_2 = player_off;
              int_ptr_2[1] = val_2;
              if ((((-1 < val) && (val < 0x74)) && (val_2 = ui_scale * val_2, -1 < val_2)) &&
                 (val_2 < 0x74)) {
                if (*(int *)(thing_ptr + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[player_off_2]) {
                  int_ptr_2[-1] = 0x897f1;
                  panmap_fn_0629cc();
                  player_off_3 = extraout_ECX_01;
                }
                else {
                  int_ptr_2[-1] = 0x89804;
                  panmap_fn_0629cc();
                  player_off_3 = extraout_ECX_02;
                }
              }
              player_off_3 = player_off_3 + 2;
            } while (player_off_3 < 10);
          }
        }
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    } while (thing_ptr != g_thing_ptrs);
  }
  if (((g_game_turn & 3) == 1) &&
     (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6], thing_ptr != g_thing_ptrs)) {
    do {
      if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
        if ((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(thing_ptr[0x10],thing_ptr[0xe]) * 5 + 1) >>
             0x1c & (uint)*(byte *)(int_ptr_2 + 9)) != 0) {
          player_off_3 = (g_my_player_word >> 0x18) * 0x4ef;
          val = (int)(((uint)thing_ptr[0xe] -
                        (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off_3) + 1)) * 0x100) /
                  int_ptr_2[6];
          player_off_3 = *(int *)((int)&g_player_active_camera + player_off_3);
          val_2 = (int)(((uint)thing_ptr[0x10] - (uint)*(byte *)(player_off_3 + 3)) * 0x100) / int_ptr_2[6];
          player_off_3 = *(int *)(player_off_3 + 7);
          word_ptr = (&PTR_LAB_00192fe0)[player_off_3];
          player_off_3 = (&g_slab_attr_table)[player_off_3];
          int_ptr_2[1] = val_2 * (int)word_ptr + player_off_3 * -val >> 0x10;
          ui_scale = (uint)g_units_per_pixel;
          uval_2 = (uint)(0x74 / (ulonglong)(longlong)(int)ui_scale) / 2;
          player_off_3 = val_2 * player_off_3 + val * (int)word_ptr >> 0x10;
          *int_ptr_2 = player_off_3;
          player_off_3 = player_off_3 + uval_2;
          val_2 = int_ptr_2[1] + uval_2;
          val = player_off_3 * ui_scale;
          *int_ptr_2 = player_off_3;
          int_ptr_2[1] = val_2;
          if (((-1 < val) && (val < 0x74)) &&
             ((val_2 = ui_scale * val_2, -1 < val_2 && (val_2 < 0x74)))) {
            int_ptr_2[-1] = 0x8996e;
            player_off_3 = object_handle_object_thing_0c688c();
            if (player_off_3 == 0) {
              int_ptr_2[-1] = 0x89992;
              player_off_3 = object_handle_object_thing_0c6574();
              thing_ptr = extraout_ECX_04;
              if (player_off_3 != 0) {
                int_ptr_2[-1] = 0x899ae;
                panmap_fn_0629cc();
                thing_ptr = extraout_ECX_05;
              }
            }
            else {
              int_ptr_2[-1] = 0x89986;
              panmap_fn_0629cc();
              thing_ptr = extraout_ECX_03;
            }
          }
        }
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    } while (thing_ptr != g_thing_ptrs);
  }
  int_ptr_2[-1] = 0x899bc;
  draw_process_thing_entity_088e2c();
  if (((g_game_turn & 1) != 0) &&
     (*(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6) == '\x01')) {
    int_ptr_2[-1] = 0x89a1b;
    panmap_fn_0629cc();
    int_ptr_2[-1] = 0x89a4d;
    panmap_fn_0629cc();
    int_ptr_2[-1] = 0x89a7f;
    panmap_fn_0629cc();
    int_ptr_2[-1] = 0x89aad;
    panmap_fn_0629cc();
    int_ptr_2[-1] = 0x89adb;
    panmap_fn_0629cc();
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_dungeon_089ae8 (Original VA: 0x89ae8, Ghidra: FUN_00089ae8)
 * Prototype: void draw_update_player_dungeon_089ae8(int param_1,int param_2);
 * Address  : 0x89ae8 (Size: 1497 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> draw_update_creature_and_thing_0890bc
 * Callees  : 1 -> panmap_fn_0629cc
 ******************************************************************************/
void draw_update_player_dungeon_089ae8(int param_1,int param_2)

{
  byte arg_al;
  uint ui_scale;
  int val;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int dungeon_off;
  int val_2;
  int local_2c;
  int local_20;
  
  ui_scale = (uint)(0x74 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel) / 2;
  val = arg_ecx + ui_scale;
  param_1 = param_1 + ui_scale;
  dungeon_off = (uint)((char)g_game_turn + arg_al & 7) *
          *(int *)(&g_bss_002eb001 + (uint)(byte)(&g_bss_002e0e0c)[(uint)arg_al * 0x1508] * 4);
  val_2 = dungeon_off >> 0x1f;
  param_2 = (((int)((dungeon_off + val_2 * -8) - (uint)(val_2 << 2 < 0)) >> 3) << 8) / param_2;
  if (1 < param_2) {
    local_20 = param_2 * -2 + 3;
    dungeon_off = 0;
    local_2c = 0;
    while( true ) {
      if (param_2 <= dungeon_off) break;
      val_2 = (val - dungeon_off) * (uint)g_units_per_pixel;
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (param_1 - param_2) * (uint)g_units_per_pixel, -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX;
      }
      val_2 = (dungeon_off + val) * (uint)g_units_per_pixel;
      if ((((-1 < val_2) && (val_2 < 0x74)) &&
          (val_2 = (uint)g_units_per_pixel * (param_1 - param_2), -1 < val_2)) && (val_2 < 0x74)) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_00;
      }
      val_2 = (val - dungeon_off) * (uint)g_units_per_pixel;
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (uint)g_units_per_pixel * (param_1 + param_2), -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_01;
      }
      val_2 = (dungeon_off + val) * (uint)g_units_per_pixel;
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (uint)g_units_per_pixel * (param_1 + param_2), -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_02;
      }
      val_2 = (val - param_2) * (uint)g_units_per_pixel;
      if ((((-1 < val_2) && (val_2 < 0x74)) &&
          (val_2 = (uint)g_units_per_pixel * (param_1 - dungeon_off), -1 < val_2)) && (val_2 < 0x74)) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_03;
      }
      val_2 = (param_2 + val) * (uint)g_units_per_pixel;
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (uint)g_units_per_pixel * (param_1 - dungeon_off), -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_04;
      }
      val_2 = (val - param_2) * (uint)g_units_per_pixel;
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (uint)g_units_per_pixel * (param_1 + dungeon_off), -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_05;
      }
      val_2 = (param_2 + val) * (uint)g_units_per_pixel;
      if ((((-1 < val_2) && (val_2 < 0x74)) &&
          (val_2 = (uint)g_units_per_pixel * (param_1 + dungeon_off), -1 < val_2)) && (val_2 < 0x74)) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_06;
      }
      if (local_20 < 0) {
        local_20 = local_20 + local_2c + 6;
      }
      else {
        local_20 = (dungeon_off - param_2) * 4 + local_20 + 10;
        param_2 = param_2 + -1;
      }
      dungeon_off = dungeon_off + 1;
      local_2c = local_2c + 4;
    }
    if (dungeon_off == param_2) {
      val_2 = (val - dungeon_off) * (uint)g_units_per_pixel;
      if ((((-1 < val_2) && (val_2 < 0x74)) &&
          (val_2 = (param_1 - param_2) * (uint)g_units_per_pixel, -1 < val_2)) && (val_2 < 0x74)) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_07;
      }
      val_2 = (uint)g_units_per_pixel * (dungeon_off + val);
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (uint)g_units_per_pixel * (param_1 - param_2), -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_08;
      }
      val_2 = (uint)g_units_per_pixel * (val - dungeon_off);
      if (((-1 < val_2) && (val_2 < 0x74)) &&
         ((val_2 = (uint)g_units_per_pixel * (param_1 + param_2), -1 < val_2 && (val_2 < 0x74)))) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_09;
      }
      val_2 = (uint)g_units_per_pixel * (dungeon_off + val);
      if ((((-1 < val_2) && (val_2 < 0x74)) &&
          (val_2 = (uint)g_units_per_pixel * (param_1 + param_2), -1 < val_2)) && (val_2 < 0x74)) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_10;
      }
      val_2 = (val - param_2) * (uint)g_units_per_pixel;
      if ((-1 < val_2) && (val_2 < 0x74)) {
        val_2 = (uint)g_units_per_pixel * (param_1 - dungeon_off);
        if ((-1 < val_2) && (val_2 < 0x74)) {
          panmap_fn_0629cc();
          dungeon_off = extraout_ECX_11;
        }
      }
      val_2 = (param_2 + val) * (uint)g_units_per_pixel;
      if ((-1 < val_2) && (val_2 < 0x74)) {
        val_2 = (uint)g_units_per_pixel * (param_1 - dungeon_off);
        if ((-1 < val_2) && (val_2 < 0x74)) {
          panmap_fn_0629cc();
          dungeon_off = extraout_ECX_12;
        }
      }
      val_2 = (val - param_2) * (uint)g_units_per_pixel;
      if ((((-1 < val_2) && (val_2 < 0x74)) &&
          (val_2 = (uint)g_units_per_pixel * (param_1 + dungeon_off), -1 < val_2)) && (val_2 < 0x74)) {
        panmap_fn_0629cc();
        dungeon_off = extraout_ECX_13;
      }
      val = (param_2 + val) * (uint)g_units_per_pixel;
      if (((-1 < val) && (val < 0x74)) &&
         ((val = (param_1 + dungeon_off) * (uint)g_units_per_pixel, -1 < val && (val < 0x74)))) {
        panmap_fn_0629cc();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_dungeon_08a194 (Original VA: 0x8a194, Ghidra: FUN_0008a194)
 * Prototype: void draw_update_player_dungeon_08a194(void);
 * Address  : 0x8a194 (Size: 2082 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 6 -> input_fn_0498d9, newgui_process_thing_entity_057f6b, creature_update_creature_control_0865b8, creature_fn_0866f8, draw_process_thing_entity_08eeec, bflib_system_io_fn_0ebc10
 ******************************************************************************/
void draw_update_player_dungeon_08a194(void)

{
  byte flag;
  char player_off;
  int player_off_2;
  int player_off_3;
  
  player_off_2 = (g_my_player_word >> 0x18) * 0x4ef;
  flag = (&g_bss_0019d51a)[player_off_2];
  if (flag < 2) {
    if (flag != 1) {
      return;
    }
    if ((&g_bss_0019d578)[player_off_2] == '\x0f') {
      bflib_system_io_fn_0ebc10();
      return;
    }
    if (((g_game_operation_flags & 0x20) == 0) || (player_off = input_fn_0498d9(), player_off == '\0')) {
      if (g_bss_0034d1a6 != 0) {
        if ((&g_data_00191780)[(byte)(&g_bss_0019d51b)[(g_my_player_word >> 0x18) * 0x4ef]] == '\0') {
          return;
        }
        if ((&g_data_0018e98c)
            [(uint)(byte)(&g_data_00191780)[(byte)(&g_bss_0019d51b)[(g_my_player_word >> 0x18) * 0x4ef]] *
             0x1b] == '\0') {
          return;
        }
        draw_process_thing_entity_08eeec();
        return;
      }
      player_off = newgui_process_thing_entity_057f6b();
      if (player_off != '\0') goto switchD_0008a965_caseD_3;
      player_off_2 = g_my_player_word >> 0x18;
      player_off_3 = player_off_2 * 0x4ef;
      switch((&g_bss_0019d51b)[player_off_3]) {
      case 1:
        if ((&g_bss_0019d51d)[player_off_2 * 0x4ef] == '\0') {
          flag = (&g_bss_0019d51c)[player_off_2 * 0x4ef];
        }
        else {
          flag = (&g_bss_0019d51d)[player_off_2 * 0x4ef];
        }
        if (flag < 2) {
          if (flag == 1) goto LAB_0008a549;
        }
        else {
          if (flag < 3) {
            bflib_system_io_fn_0ebc10();
            return;
          }
          if (flag == 3) {
            player_off_3 = player_off_2 * 0x4ef;
            if ((((*(short *)(&g_bss_0019d0fd + player_off_3) != 0) && ((&g_player_alloc_flags)[player_off_3] != '\0')) &&
                (*(short *)(&g_bss_0019d0fd + player_off_3) != *(short *)(&g_bss_002e05bc + player_off_2 * 0x1508)))
               && (player_off_2 = creature_update_creature_control_0865b8(), player_off_2 != 0)) {
              bflib_system_io_fn_0ebc10();
              (&g_player_state_base)[(g_my_player_word >> 0x18) * 0x4ef] =
                   (&g_player_state_base)[(g_my_player_word >> 0x18) * 0x4ef] | 1;
              return;
            }
            player_off_2 = (g_my_player_word >> 0x18) * 0x4ef;
            if (((*(short *)(&g_bss_0019d0fd + player_off_2) != 0) && ((&g_bss_0019d0cd)[player_off_2] != '\0')) &&
               ((*(short *)(&g_bss_0019d0fd + player_off_2) !=
                 *(short *)(&g_bss_002e05bc + (g_my_player_word >> 0x18) * 0x1508) &&
                (player_off_2 = creature_fn_0866f8(), player_off_2 != 0)))) {
              bflib_system_io_fn_0ebc10();
              (&g_player_state_base)[(g_my_player_word >> 0x18) * 0x4ef] =
                   (&g_player_state_base)[(g_my_player_word >> 0x18) * 0x4ef] | 1;
              return;
            }
            if (((&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] & 2) == 0) goto LAB_0008a229;
LAB_0008a549:
            bflib_system_io_fn_0ebc10();
            return;
          }
        }
        if (g_game_turn < *(uint *)(&g_player_double_click_turn + player_off_2 * 0x4ef)) goto switchD_0008a965_caseD_5;
      default:
switchD_0008a965_caseD_3:
        bflib_system_io_fn_0ebc10();
        return;
      case 2:
        switch((&g_bss_0019d56b)[player_off_3]) {
        case 2:
          bflib_system_io_fn_0ebc10();
          return;
        case 3:
          bflib_system_io_fn_0ebc10();
          return;
        case 4:
          bflib_system_io_fn_0ebc10();
          return;
        case 5:
          bflib_system_io_fn_0ebc10();
          return;
        case 6:
          bflib_system_io_fn_0ebc10();
          return;
        case 8:
          bflib_system_io_fn_0ebc10();
          return;
        case 9:
          bflib_system_io_fn_0ebc10();
          return;
        case 10:
          bflib_system_io_fn_0ebc10();
          return;
        case 0xb:
          bflib_system_io_fn_0ebc10();
          return;
        case 0xc:
          bflib_system_io_fn_0ebc10();
          return;
        case 0xd:
          bflib_system_io_fn_0ebc10();
          return;
        case 0xe:
          bflib_system_io_fn_0ebc10();
          return;
        case 0xf:
          bflib_system_io_fn_0ebc10();
          return;
        case 0x10:
          bflib_system_io_fn_0ebc10();
          return;
        }
        break;
      case 5:
      case 9:
switchD_0008a965_caseD_5:
        bflib_system_io_fn_0ebc10();
        return;
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0x11:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        draw_process_thing_entity_08eeec();
        return;
      case 0xc:
      case 0xf:
        bflib_system_io_fn_0ebc10();
        return;
      case 0x10:
        switch((&g_bss_0019d56d)[player_off_3]) {
        case 1:
          bflib_system_io_fn_0ebc10();
          return;
        case 2:
          bflib_system_io_fn_0ebc10();
          return;
        case 3:
          bflib_system_io_fn_0ebc10();
          return;
        case 4:
          bflib_system_io_fn_0ebc10();
          return;
        case 5:
          bflib_system_io_fn_0ebc10();
          return;
        case 6:
          bflib_system_io_fn_0ebc10();
          return;
        }
        break;
      case 0x12:
        switch((&g_bss_0019d56e)[player_off_3]) {
        case 1:
          bflib_system_io_fn_0ebc10();
          return;
        case 2:
          bflib_system_io_fn_0ebc10();
          return;
        case 3:
          bflib_system_io_fn_0ebc10();
          return;
        case 4:
          bflib_system_io_fn_0ebc10();
          return;
        }
        break;
      case 0x17:
        bflib_system_io_fn_0ebc10();
        return;
      }
      return;
    }
    if (g_bss_002e90b1 == '\x02') {
LAB_0008a229:
      bflib_system_io_fn_0ebc10();
      return;
    }
  }
  else if (flag < 4) {
    if ((g_bss_0019d0b9 & 8) == 0) {
      bflib_system_io_fn_0ebc10();
      return;
    }
  }
  else if (6 < flag) {
    return;
  }
  bflib_system_io_fn_0ebc10();
  return;
}

/******************************************************************************
 * Function : draw_update_player_view_state_08a9f4 (Original VA: 0x8a9f4, Ghidra: FUN_0008a9f4)
 * Prototype: void draw_update_player_view_state_08a9f4(void);
 * Address  : 0x8a9f4 (Size: 437 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ebc10
 ******************************************************************************/
void draw_update_player_view_state_08a9f4(void)

{
  switch((&g_bss_0019d56b)[(g_my_player_word >> 0x18) * 0x4ef]) {
  case 2:
    bflib_system_io_fn_0ebc10();
    return;
  case 3:
    bflib_system_io_fn_0ebc10();
    return;
  case 4:
    bflib_system_io_fn_0ebc10();
    return;
  case 5:
    bflib_system_io_fn_0ebc10();
    return;
  case 6:
    bflib_system_io_fn_0ebc10();
    return;
  case 8:
    bflib_system_io_fn_0ebc10();
    return;
  case 9:
    bflib_system_io_fn_0ebc10();
    return;
  case 10:
    bflib_system_io_fn_0ebc10();
    return;
  case 0xb:
    bflib_system_io_fn_0ebc10();
    return;
  case 0xc:
    bflib_system_io_fn_0ebc10();
    return;
  case 0xd:
    bflib_system_io_fn_0ebc10();
    return;
  case 0xe:
    bflib_system_io_fn_0ebc10();
    return;
  case 0xf:
    bflib_system_io_fn_0ebc10();
    return;
  case 0x10:
    bflib_system_io_fn_0ebc10();
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_view_state_08abc4 (Original VA: 0x8abc4, Ghidra: FUN_0008abc4)
 * Prototype: void draw_update_player_view_state_08abc4(void);
 * Address  : 0x8abc4 (Size: 197 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ebc10
 ******************************************************************************/
void draw_update_player_view_state_08abc4(void)

{
  switch((&g_bss_0019d56d)[(g_my_player_word >> 0x18) * 0x4ef]) {
  case 1:
    bflib_system_io_fn_0ebc10();
    return;
  case 2:
    bflib_system_io_fn_0ebc10();
    return;
  case 3:
    bflib_system_io_fn_0ebc10();
    return;
  case 4:
    bflib_system_io_fn_0ebc10();
    return;
  case 5:
    bflib_system_io_fn_0ebc10();
    return;
  case 6:
    bflib_system_io_fn_0ebc10();
    return;
  default:
    return;
  }
}

/******************************************************************************
 * Function : draw_update_player_view_state_08ac9c (Original VA: 0x8ac9c, Ghidra: FUN_0008ac9c)
 * Prototype: void draw_update_player_view_state_08ac9c(void);
 * Address  : 0x8ac9c (Size: 149 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ebc10
 ******************************************************************************/
void draw_update_player_view_state_08ac9c(void)

{
  switch((&g_bss_0019d56e)[(g_my_player_word >> 0x18) * 0x4ef]) {
  case 1:
    bflib_system_io_fn_0ebc10();
    return;
  case 2:
    bflib_system_io_fn_0ebc10();
    return;
  case 3:
    bflib_system_io_fn_0ebc10();
    return;
  case 4:
    bflib_system_io_fn_0ebc10();
    return;
  default:
    return;
  }
}

/******************************************************************************
 * Function : draw_frames_different_between_views_08ae00 (Original VA: 0x8ae00, Ghidra: FUN_0008ae00)
 * Prototype: void draw_frames_different_between_views_08ae00(void);
 * Address  : 0x8ae00 (Size: 225 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp lines 2991
 * Purpose  : String 'No frames different between views C%d, M%d, A%d, B%d'
 * Callers  : 1 -> command_update_player_view_state_0784ae
 * Callees  : 3 -> jtyedit_fn_04c2eb, LbErrorLog, dk_sprintf
 ******************************************************************************/
void draw_frames_different_between_views_08ae00(void)

{
  byte *thing_ptr;
  char ch;
  undefined1 uval;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  uint uval_3;
  int val;
  
  val = 4;
  do {
    thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
    if (((*thing_ptr & 1) != 0) &&
       (((thing_ptr[0x1f] == 5 || ((thing_ptr[0x4f] & 1) == 0)) &&
        (-1 < *(int *)((int)&g_bss_002f2223 + (*(int *)(thing_ptr + 0x42) >> 0x10) * 2 + 2) >> 0x10)))) {
      *(undefined2 *)(thing_ptr + 0x44) = (&g_bss_002f2227)[*(int *)(thing_ptr + 0x42) >> 0x10];
      ch = jtyedit_fn_04c2eb();
      if (ch != *(char *)(extraout_ECX + 0x49)) {
        uval = jtyedit_fn_04c2eb();
        dk_sprintf(&g_log_sprintf_buf,s_No_frames_different_between_view_0016a1d7,
                     *(undefined1 *)(extraout_ECX_00 + 0x1f),*(undefined1 *)(extraout_ECX_00 + 0x1a)
                     ,*(undefined1 *)(extraout_ECX_00 + 0x49),uval);
        LbErrorLog(); /* LbErrorLog("draw.cpp", line 2991, g_log_buf) */
        uval = jtyedit_fn_04c2eb();
        *(undefined1 *)(extraout_ECX_01 + 0x49) = uval;
        uval_3 = CONCAT31((int3)((uint)extraout_EDX >> 8),uval) - 1;
        uval_2 = (uint)*(byte *)(extraout_ECX_01 + 0x48);
        if ((int)uval_3 < (int)(uint)*(byte *)(extraout_ECX_01 + 0x48)) {
          uval_2 = uval_3;
        }
        *(char *)(extraout_ECX_01 + 0x48) = (char)uval_2;
        *(uint *)(extraout_ECX_01 + 0x40) = (uint)*(byte *)(extraout_ECX_01 + 0x48) << 8;
      }
    }
    val = val + 4;
  } while (val != 0x2000);
  return;
}

/******************************************************************************
 * Function : draw_frames_different_between_views_08aee4 (Original VA: 0x8aee4, Ghidra: FUN_0008aee4)
 * Prototype: void draw_frames_different_between_views_08aee4(void);
 * Address  : 0x8aee4 (Size: 225 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp lines 3022
 * Purpose  : String 'No frames different between views C%d, M%d, A%d, B%d'
 * Callers  : 1 -> command_update_player_view_state_0784ae
 * Callees  : 3 -> jtyedit_fn_04c2eb, LbErrorLog, dk_sprintf
 ******************************************************************************/
void draw_frames_different_between_views_08aee4(void)

{
  byte *thing_ptr;
  char ch;
  undefined1 uval;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  uint uval_3;
  int val;
  
  val = 4;
  do {
    thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
    if (((*thing_ptr & 1) != 0) &&
       (((thing_ptr[0x1f] == 5 || ((thing_ptr[0x4f] & 1) == 0)) &&
        (-1 < *(int *)(&g_bss_002f29d1 + (*(int *)(thing_ptr + 0x42) >> 0x10) * 2) >> 0x10)))) {
      *(undefined2 *)(thing_ptr + 0x44) = (&g_bss_002f29d3)[*(int *)(thing_ptr + 0x42) >> 0x10];
      ch = jtyedit_fn_04c2eb();
      if (ch != *(char *)(extraout_ECX + 0x49)) {
        uval = jtyedit_fn_04c2eb();
        dk_sprintf(&g_log_sprintf_buf,s_No_frames_different_between_view_0016a215,
                     *(undefined1 *)(extraout_ECX_00 + 0x1f),*(undefined1 *)(extraout_ECX_00 + 0x1a)
                     ,*(undefined1 *)(extraout_ECX_00 + 0x49),uval);
        LbErrorLog(); /* LbErrorLog("draw.cpp", line 3022, g_log_buf) */
        uval = jtyedit_fn_04c2eb();
        *(undefined1 *)(extraout_ECX_01 + 0x49) = uval;
        uval_3 = CONCAT31((int3)((uint)extraout_EDX >> 8),uval) - 1;
        uval_2 = (uint)*(byte *)(extraout_ECX_01 + 0x48);
        if ((int)uval_3 < (int)(uint)*(byte *)(extraout_ECX_01 + 0x48)) {
          uval_2 = uval_3;
        }
        *(char *)(extraout_ECX_01 + 0x48) = (char)uval_2;
        *(uint *)(extraout_ECX_01 + 0x40) = (uint)*(byte *)(extraout_ECX_01 + 0x48) << 8;
      }
    }
    val = val + 4;
  } while (val != 0x2000);
  return;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08afd8 (Original VA: 0x8afd8, Ghidra: FUN_0008afd8)
 * Prototype: void draw_update_slab_subtile_columns_08afd8(void);
 * Address  : 0x8afd8 (Size: 2241 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 2 -> draw_update_player_dungeon_0872b8, draw_fn_087694
 * Callees  : 7 -> input_fn_0498d9, lair_update_creature_control_04c7eb, newgui_process_thing_entity_057f6b, draw_update_creature_and_thing_08bb2c, object_fn_0c57a4, get_scaled_viewport_bottom_y, watcom_crt_fn_13a710
 ******************************************************************************/
void draw_update_slab_subtile_columns_08afd8(void)

{
  uint thing_ptr;
  char thing_ptr_2;
  uint extraout_ECX;
  uint thing_ptr_3;
  int player_off;
  int player_off_2;
  uint *thing_ptr_4;
  uint uStack_20;
  undefined4 uStack_1c;
  
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_player_controlled_thing_idx + player_off)];
  if (((((&g_player_state_base)[player_off] & 1) == 0) && (g_bss_002e90b1 != '\x02')) &&
     (g_lb_display_draw_flags = 0, (&g_bss_0019d51a)[player_off] == '\x01')) {
    if (((g_game_operation_flags & 0x20) != 0) && (g_bss_002e90b1 != '\x02')) {
      uStack_1c = 0x8b063;
      thing_ptr_2 = input_fn_0498d9();
      if (thing_ptr_2 != '\0') {
        if (((g_bss_002ee8a9 < 0xff) && (g_bss_002ee8ab < 0xff)) &&
           (((uint)(byte)(&g_bss_002d33c8)
                         [((&g_subtile_to_slab_lut)[g_bss_002ee8a9] + (&g_subtile_to_slab_lut)[g_bss_002ee8ab] * 0x55) * 6
                         ] * 0x45 != 0 &&
            (((*(uint *)((int)&g_map_subtiles +
                        ((uint)g_bss_002ee8a9 + (uint)g_bss_002ee8ab * 0x100) * 5 + 1) >> 0x1c &
              1 << ((&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] & 0x1f)) != 0 &&
             (*(short *)(&g_data_0018ebab +
                        (uint)*(ushort *)
                               (&g_room_slabs_count +
                               (uint)(byte)(&g_bss_002d33c8)
                                           [((&g_subtile_to_slab_lut)[g_bss_002ee8a9] +
                                            (&g_subtile_to_slab_lut)[g_bss_002ee8ab] * 0x55) * 6] * 0x45) *
                        0x17) != 0)))))) {
          uStack_1c = 0x8b17d;
          get_scaled_viewport_bottom_y();
          uStack_1c = 0x8b1c6;
          watcom_crt_fn_13a710();
        }
        if ((&g_thing_ptrs)
            [*(ushort *)
              (&g_bss_002e05bc + (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] * 0x1508)
            ] <= g_thing_ptrs) {
          return;
        }
        switch(g_bss_002e90b1) {
        default:
          return;
        case '\x01':
          uStack_1c = 0x8b20a;
          get_scaled_viewport_bottom_y();
          uStack_1c = 0x8b224;
          draw_update_creature_and_thing_08bb2c();
          return;
        }
      }
    }
    uStack_1c = 0x8b248;
    thing_ptr_2 = newgui_process_thing_entity_057f6b();
    if (thing_ptr_2 == '\0') {
      if (thing_ptr != g_thing_ptrs) {
        player_off = g_my_player_word >> 0x18;
        player_off_2 = player_off * 0x4ef;
        if (g_game_turn < *(uint *)(&g_player_double_click_turn + player_off_2)) {
          uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
          uStack_20 = (uint)*(byte *)(thing_ptr + 0x48);
          get_scaled_viewport_bottom_y();
          lair_update_creature_control_04c7eb();
          get_scaled_viewport_bottom_y();
          draw_update_creature_and_thing_08bb2c();
          return;
        }
        if (((&g_bss_0019d0cb)[player_off_2] & 2) != 0) {
          uStack_1c = 0x8b329;
          get_scaled_viewport_bottom_y();
          uStack_1c = 0x8b342;
          draw_update_creature_and_thing_08bb2c();
          return;
        }
        if ((((&g_bss_0019d51b)[player_off_2] != '\x05') &&
            (((&g_bss_0019d51b)[player_off_2] != '\x01' || ((&g_bss_0019d51d)[player_off_2] != '\x03')))) &&
           ((player_off_2 = player_off * 0x4ef, (&g_bss_0019d51b)[player_off_2] != '\x01' ||
            (((&g_bss_0019d51d)[player_off_2] != '\0' || ((&g_bss_0019d51c)[player_off_2] != '\x03')))))) {
          player_off_2 = player_off * 0x4ef;
          if (((&g_bss_0019d578)[player_off_2] != '\x01') && ((&g_bss_0019d578)[player_off_2] != '\x02')) {
            if ((&g_bss_0019d51b)[player_off_2] == '\t') {
              uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
              uStack_20 = (uint)*(byte *)(thing_ptr + 0x48);
              get_scaled_viewport_bottom_y();
              lair_update_creature_control_04c7eb();
              return;
            }
            if ((&g_bss_0019d51b)[player_off_2] != '\x01') {
              return;
            }
            if (((&g_bss_0019d51d)[player_off_2] != '\x02') && ((&g_bss_0019d51c)[player_off_2] != '\x02')) {
              return;
            }
            uStack_1c = 0x8b853;
            get_scaled_viewport_bottom_y();
            uStack_1c = 0x8b86c;
            draw_update_creature_and_thing_08bb2c();
            return;
          }
        }
        thing_ptr_4 = (uint *)&stack0xffffffe8;
        if (((*(ushort *)(&g_bss_002e05bc + (uint)(byte)(&g_player_id_number)[player_off * 0x4ef] * 0x1508) != 0)
            && (thing_ptr_3 = (&g_thing_ptrs)
                        [*(ushort *)
                          (&g_bss_002e05bc + (uint)(byte)(&g_player_id_number)[player_off * 0x4ef] * 0x1508)],
               thing_ptr_4 = (uint *)&stack0xffffffe8, (*(byte *)(thing_ptr_3 + 0x4f) & 1) == 0)) && /* thing->render_flags */
           (thing_ptr_4 = (uint *)&stack0xffffffe8, g_thing_ptrs < thing_ptr_3)) {
          if (*(char *)(thing_ptr_3 + 0x1f) == '\x05') { /* thing->class_id */
            if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_3 + 100)] + 0xad) & 2) == 0) { /* thing->ccontrol_idx */
              if ((&g_data_0018b70d)[(uint)*(byte *)(thing_ptr_3 + 0x1a) * 0x10] != '\0') {
                g_bss_003d9581 = 1;
              }
              uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
              uStack_20 = (uint)*(byte *)(thing_ptr_3 + 0x48);
              get_scaled_viewport_bottom_y();
              lair_update_creature_control_04c7eb();
              g_bss_003d9581 = 0;
              thing_ptr_4 = &uStack_20;
              goto LAB_0008b651;
            }
            uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
            uStack_20 = (uint)*(byte *)(thing_ptr_3 + 0x48);
            get_scaled_viewport_bottom_y();
          }
          else if ((*(char *)(thing_ptr_3 + 0x1f) == '\x01') && (*(char *)(thing_ptr_3 + 0x1a) == '\n')) { /* thing->class_id */
            uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
            uStack_20 = (uint)*(byte *)(thing_ptr_3 + 0x48);
            get_scaled_viewport_bottom_y();
          }
          else {
            if (*(char *)(thing_ptr_3 + 0x1f) == '\x01') { /* thing->class_id */
              uStack_1c = 0x8b5f7;
              player_off = object_fn_0c57a4();
              thing_ptr_3 = extraout_ECX;
              thing_ptr_4 = (uint *)&stack0xffffffe8;
              if (player_off != 0) goto LAB_0008b651;
            }
            uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
            uStack_20 = (uint)*(byte *)(thing_ptr_3 + 0x48);
            get_scaled_viewport_bottom_y();
          }
          lair_update_creature_control_04c7eb();
          thing_ptr_4 = &uStack_20;
        }
LAB_0008b651:
        if (*(int *)(&g_bss_0019d0d4 + (g_my_player_word >> 0x18) * 0x4ef) != 0x310) {
          *(int *)((int)thing_ptr_4 + -4) = (int)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
          *(uint *)((int)thing_ptr_4 + -8) = (uint)*(byte *)(thing_ptr + 0x48);
          *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b733;
          get_scaled_viewport_bottom_y();
          *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b780;
          lair_update_creature_control_04c7eb();
          *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b785;
          get_scaled_viewport_bottom_y();
          *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b79e;
          draw_update_creature_and_thing_08bb2c();
          return;
        }
        *(int *)((int)thing_ptr_4 + -4) = (int)(0x40 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
        *(uint *)((int)thing_ptr_4 + -8) = (uint)*(byte *)(thing_ptr + 0x48);
        *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b698;
        get_scaled_viewport_bottom_y();
        *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b6e5;
        lair_update_creature_control_04c7eb();
        *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b6ea;
        get_scaled_viewport_bottom_y();
        *(undefined4 *)((int)thing_ptr_4 + -0xc) = 0x8b703;
        draw_update_creature_and_thing_08bb2c();
        return;
      }
    }
    else {
      uStack_1c = 0x8b878;
      get_scaled_viewport_bottom_y();
      uStack_1c = 0x8b892;
      draw_update_creature_and_thing_08bb2c();
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_update_creature_and_thing_08bb2c (Original VA: 0x8bb2c, Ghidra: FUN_0008bb2c)
 * Prototype: int draw_update_creature_and_thing_08bb2c(void);
 * Address  : 0x8bb2c (Size: 700 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> draw_update_slab_subtile_columns_08afd8
 * Callees  : 3 -> engine3_queue_room_flag_or_special_sprite, object_fn_0c57a4, watcom_crt_fn_13a710
 ******************************************************************************/
int draw_update_creature_and_thing_08bb2c(void)

{
  byte cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  int dungeon_off;
  int ui_scale;
  char local_18;
  
  dungeon_off = (g_my_player_word >> 0x18) * 0x1508;
  local_18 = (&g_bss_002e05ec)[dungeon_off];
  if (local_18 != '\0') {
    ui_scale = arg_eax + (uint)g_units_per_pixel *
                     ((int)((uint)*(byte *)(g_data_00199230 + 4 + (uint)g_data_00187f90 * 6) -
                           (uint)*(byte *)(g_data_001991c0 + 0x454)) / 2);
    dungeon_off = arg_eax + -2;
    while( true ) {
      local_18 = local_18 + -1;
      if (local_18 < 0) break;
      dungeon_off = (g_my_player_word >> 0x18) * 0x1508;
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + local_18 * 2 + dungeon_off)];
      if (g_thing_ptrs < thing_ptr) {
        if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
          dungeon_off = (uint)*(byte *)(thing_ptr + 0x1a) * 0x2c;
          if (*(short *)(&g_data_00187b9c + dungeon_off) != 0) {
            cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
            engine3_queue_room_flag_or_special_sprite();
            watcom_crt_fn_13a710(g_data_001991c0 + (cctrl_ptr + 0xb8) * 6,ui_scale);
            dungeon_off = watcom_crt_fn_13a710();
          }
        }
        else if ((*(char *)(thing_ptr + 0x1f) == '\x01') && (dungeon_off = object_fn_0c57a4(), dungeon_off != 0)) { /* thing->class_id */
          dungeon_off = watcom_crt_fn_13a710();
        }
        else {
          dungeon_off = watcom_crt_fn_13a710();
        }
      }
    }
  }
  return dungeon_off;
}

/******************************************************************************
 * Function : draw_process_map_subtile_08bde8 (Original VA: 0x8bde8, Ghidra: FUN_0008bde8)
 * Prototype: void draw_process_map_subtile_08bde8(void);
 * Address  : 0x8bde8 (Size: 2434 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 12 -> good_fn_03915c, engine3_draw_queued_billboard_sprite, move_fn_0b3a64, object_fn_0c577c, object_handle_object_thing_0c6574, object_handle_object_thing_0c688c, get_scaled_viewport_bottom_y, bflib_system_io_fn_0e6a6c ...
 ******************************************************************************/
void draw_process_map_subtile_08bde8(void)

{
  byte flag;
  byte flag_2;
  int player_off;
  uint uval;
  int ui_scale;
  undefined4 uval_2;
  int val;
  uint *word_ptr;
  int *int_ptr;
  int val_2;
  byte *thing_ptr;
  undefined8 uval_3;
  uint local_7c [3];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  
  g_lb_display_draw_flags = 0;
  local_58 = (uint)g_units_per_pixel * g_graphics_window_width + 0x18;
  local_7c[0] = 0x8be15;
  local_68 = get_scaled_viewport_bottom_y();
  local_68 = local_68 + 0x18;
  ui_scale = ((uint)g_units_per_pixel * g_graphics_window_width + -0x96) * 3;
  val = ui_scale >> 0x1f;
  local_5c = ((int)((ui_scale + val * -4) - (uint)(val << 1 < 0)) >> 2) + -6;
  local_7c[0] = 0x8be53;
  ui_scale = get_scaled_viewport_bottom_y();
  ui_scale = (ui_scale + -0x38) * 3;
  val = ui_scale >> 0x1f;
  local_6c = ((int)((ui_scale + val * -4) - (uint)(val << 1 < 0)) >> 2) + -6;
  if ((((-10 < local_5c) && (local_5c < 0xf9)) && (-10 < local_6c)) && (local_6c < 0xf9)) {
    local_7c[0] = (uint)g_mouse_cursor_x / (uint)g_units_per_pixel;
    word_ptr = local_7c;
    local_58 = local_58 + 4;
    local_68 = local_68 + -4;
    watcom_crt_fn_137e43();
    if (local_6c < 0) {
      local_6c = 0;
    }
    else if ((int)(g_mouse_cursor_x - 0x68) < local_6c) {
      local_6c = g_mouse_cursor_x - 0x68;
    }
    local_54 = local_6c;
    local_58 = local_70;
    local_64 = local_6c + 0x68;
    do {
      ui_scale = *(int *)((int)word_ptr + 0x28);
      val = *(int *)((int)word_ptr + 0x20);
      *(undefined4 *)((int)word_ptr + 0x40) = *(undefined4 *)((int)word_ptr + 0x24);
      val_2 = *(int *)((int)word_ptr + 0x1c);
      *(int *)((int)word_ptr + 0x30) = val + 0x68;
      int_ptr = (int *)word_ptr;
      do {
        word_ptr = (uint *)int_ptr;
        if (((-1 < val_2) && (val_2 < 0xff)) &&
           ((player_off = int_ptr[0x10], -1 < player_off && (player_off < 0xff)))) {
          if ((*(uint *)((int)&g_map_subtiles + (player_off * 0x100 + val_2) * 5 + 1) >> 0x1c &
              1 << ((&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] & 0x1f)) == 0) {
            *int_ptr = ui_scale / (int)(uint)g_units_per_pixel;
            word_ptr = (uint *)(int_ptr + -1);
            int_ptr[-1] = 1;
            int_ptr[-2] = 0x8bfb1;
            bflib_system_io_fn_0f0870();
          }
          else {
            int_ptr[-1] = 0x8c01e;
            uval_2 = move_fn_0b3a64();
            int_ptr[-1] = 0xffffffff;
            int_ptr[-2] = 0;
            word_ptr = (uint *)(int_ptr + -3);
            int_ptr[-3] = uval_2;
            int_ptr[-4] = 0x8c033;
            good_fn_03915c();
          }
        }
        val = val + 8;
        val_2 = val_2 + 1;
        int_ptr = (int *)word_ptr;
      } while (val != word_ptr[0xc]);
      ui_scale = word_ptr[10];
      word_ptr[9] = word_ptr[9] + 1;
      word_ptr[10] = ui_scale + 8;
    } while (ui_scale + 8 != word_ptr[6]);
    g_lb_display_draw_flags = g_lb_display_draw_flags | 0x10;
    word_ptr[-1] = 0;
    word_ptr[-2] = 0x8c083;
    bflib_system_io_fn_0f0870();
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffef;
    ui_scale = word_ptr[2];
    word_ptr[-2] = 0x8c0d8;
    bflib_system_io_fn_0e6a6c();
    word_ptr[10] = ui_scale;
    *word_ptr = 0;
    word_ptr[4] = word_ptr[6];
    do {
      word_ptr[0xc] = *word_ptr;
      word_ptr[0xe] = word_ptr[10];
      word_ptr[0x11] = word_ptr[4];
      word_ptr[0x10] = 0;
      word_ptr[0xd] = word_ptr[10] << 8;
      do {
        ui_scale = word_ptr[0x11];
        if (((-1 < ui_scale) && (ui_scale < 0xff)) &&
           ((-1 < (int)word_ptr[0xe] && ((int)word_ptr[0xe] < 0xff)))) {
          word_ptr[0x16] = word_ptr[0x10];
          word_ptr[0x15] = word_ptr[0xc];
          uval = *(uint *)((int)&g_map_subtiles + (ui_scale + word_ptr[0xd]) * 5 + 1);
          if (((uval >> 0x1c & 1 << ((&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] & 0x1f)) != 0)
             && (thing_ptr = (&g_thing_ptrs)[(uval & 0x3fffff) >> 0xb], thing_ptr != g_thing_ptrs)) {
            do {
              if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
                flag = thing_ptr[0xf];
                ui_scale = (int)((uint)thing_ptr[0xd] * 8) >> 8;
                flag_2 = thing_ptr[0x1f];
                if (flag_2 < 5) {
LAB_0008c40e:
                  if ((thing_ptr[0x1f] == 1) && (thing_ptr[0x1a] == 5)) {
                    word_ptr[-2] = 0x8c488;
                    watcom_crt_fn_13a710();
                  }
                  else {
                    if (thing_ptr[0x1f] == 1) {
                      word_ptr[-2] = 0x8c49e;
                      val = object_fn_0c577c();
                      if (val != 0) {
                        word_ptr[-2] = 0x8c508;
                        watcom_crt_fn_13a710();
                        goto LAB_0008c1d2;
                      }
                    }
                    word_ptr[-2] = 0x8c518;
                    uval_3 = object_handle_object_thing_0c688c();
                    word_ptr[0x13] = (int)((ulonglong)uval_3 >> 0x20) + ui_scale;
                    if ((int)uval_3 == 0) {
                      word_ptr[-2] = 0x8c592;
                      ui_scale = object_handle_object_thing_0c6574();
                      if (ui_scale != 0) {
                        word_ptr[-2] = 0x8c60e;
                        watcom_crt_fn_13a710();
                      }
                    }
                    else {
                      word_ptr[-2] = 0x8c586;
                      watcom_crt_fn_13a710();
                    }
                  }
                }
                else if (flag_2 < 6) {
                  if (*(ushort *)(&g_data_00187b9c + (uint)thing_ptr[0x1a] * 0x2c) != 0) {
                    val = (uint)*(ushort *)(&g_data_00187b9c + (uint)thing_ptr[0x1a] * 0x2c) * 6 +
                            g_data_00199230;
                    word_ptr[0x12] = word_ptr[0x16] + ui_scale;
                    word_ptr[0x14] = word_ptr[0x15] + ((int)((uint)flag * 8) >> 8);
                    if (((byte)g_game_turn & 4) == 0) {
                      word_ptr[1] = (int)(word_ptr[0x14] -
                                       ((uint)*(byte *)(val + 5) * (uint)g_units_per_pixel) / 2) /
                                  (int)(uint)g_units_per_pixel;
                      word_ptr[-2] = 0x8c32b;
                      watcom_crt_fn_13a710();
                    }
                    else {
                      flag = *(byte *)(val + 5);
                      word_ptr[-1] = (uint)(byte)(&g_data_0019176e)[*(int *)(thing_ptr + 3) >> 0x18];
                      word_ptr[1] = (int)(word_ptr[0x14] - ((uint)flag * (uint)g_units_per_pixel) / 2) /
                                  (int)(uint)g_units_per_pixel;
                      word_ptr[-2] = 0x8c2d7;
                      bflib_system_io_fn_0f3300();
                    }
                    word_ptr[-2] = 0x8c364;
                    engine3_draw_queued_billboard_sprite();
                  }
                }
                else {
                  if (flag_2 != 8) goto LAB_0008c40e;
                  if ((thing_ptr[0x18] != 0) ||
                     (*(int *)(thing_ptr + 3) >> 0x18 ==
                      (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) {
                    word_ptr[-2] = 0x8c409;
                    watcom_crt_fn_13a710();
                  }
                }
              }
LAB_0008c1d2:
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
            } while (thing_ptr != g_thing_ptrs);
          }
        }
        ui_scale = word_ptr[0x10];
        word_ptr[0x11] = word_ptr[0x11] + 1;
        word_ptr[0x10] = ui_scale + 8;
      } while (ui_scale + 8 != 0x68);
      ui_scale = *word_ptr;
      word_ptr[10] = word_ptr[10] + 1;
      *word_ptr = ui_scale + 8;
    } while (ui_scale + 8 != 0x68);
    word_ptr[-2] = 0x8c649;
    bflib_system_io_fn_0e6a6c();
    word_ptr[-2] = 0x8c685;
    watcom_crt_fn_13a710();
    word_ptr[-2] = 0x8c6ba;
    watcom_crt_fn_13a710();
    word_ptr[1] = (uint)g_units_per_pixel;
    word_ptr[-2] = 0x8c6fc;
    watcom_crt_fn_13a710();
    word_ptr[-2] = 0x8c72a;
    watcom_crt_fn_13a710();
    word_ptr[-2] = 0x8c760;
    bflib_system_io_fn_0e6a6c();
  }
  return;
}

/******************************************************************************
 * Function : draw_load_palette_file_08cc24 (Original VA: 0x8cc24, Ghidra: FUN_0008cc24)
 * Prototype: void draw_load_palette_file_08cc24(void);
 * Address  : 0x8cc24 (Size: 191 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp lines 3720
 * Purpose  : String 'Cannot load palette file %s'
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 6 -> file_fn_02c3d0, panmap_update_player_view_state_0627b5, prepare_file_path, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e984c
 ******************************************************************************/
void draw_load_palette_file_08cc24(void)

{
  char arg_al;
  char ch;
  undefined4 uval;
  int arg_edx;
  undefined1 local_9c [152];
  
  if (arg_al < '\0') {
    arg_al = '\0';
  }
  else if ('\x04' < arg_al) {
    arg_al = '\x04';
  }
  g_bss_002ee8da = arg_al;
  prepare_file_path(arg_al);
  uval = prepare_file_path();
  dk_sprintf(local_9c,s__s_pal_05d_dat_0016a25a,uval);
  ch = file_fn_02c3d0();
  if (ch == '\0') {
    dk_sprintf(&g_log_sprintf_buf,s_Cannot_load_palette_file__s_0016a269,local_9c);
    LbErrorLog(); /* LbErrorLog("draw.cpp", line 3720, g_log_buf) */
  }
  else {
    bflib_system_io_fn_0e984c();
    if (arg_edx != 0) {
      panmap_update_player_view_state_0627b5();
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_roll_action_random_08ccec (Original VA: 0x8ccec, Ghidra: FUN_0008ccec)
 * Prototype: void draw_roll_action_random_08ccec(undefined1 param_1);
 * Address  : 0x8ccec (Size: 263 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 25 -> inits_told_you_so_create_043bb3, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, inits_told_you_so_create_044b13, inits_roll_action_random_044f33, instance_update_creature_and_thing_04ac70 ...
 * Callees  : 1 -> jtyedit_fn_04c2eb
 ******************************************************************************/
void draw_roll_action_random_08ccec(undefined1 param_1)

{
  uint rand_seed;
  undefined1 uval;
  ushort uval_2;
  int arg_eax;
  int val;
  int extraout_ECX;
  byte flag;
  int arg_edx;
  int arg_ebx;
  byte bStack00000004;
  int iStack00000005;
  undefined1 in_stack_00000001 [11];
  
  if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
    val = *(int *)(&g_bss_002f29d1 + arg_edx * 2) >> 0x10;
    if (*(int *)(&g_bss_002f29d1 + arg_edx * 2) >> 0x10 < 0) {
      val = arg_edx;
    }
  }
  else {
    val = *(int *)((int)&g_bss_002f2223 + arg_edx * 2 + 2) >> 0x10;
    if (val < 0) {
      val = arg_edx;
    }
  }
  *(short *)(arg_eax + 0x44) = (short)val;
  uval_2 = CONCAT11(*(undefined1 *)(arg_eax + 0x50),param_1) & 0x33f;
  flag = (byte)(uval_2 >> 8);
  *(byte *)(arg_eax + 0x50) = flag;
  *(byte *)(arg_eax + 0x50) = flag | (char)uval_2 << 2;
  uval = jtyedit_fn_04c2eb();
  *(undefined1 *)(arg_eax + 0x49) = uval;
  if (arg_ebx != -1) {
    *(short *)(arg_eax + 0x3e) = (short)arg_ebx;
  }
  if (extraout_ECX != -1) {
    *(short *)(arg_eax + 0x46) = (short)extraout_ECX;
  }
  if (in_stack_00000001._0_4_ >> 0x18 != -1) {
    flag = *(byte *)(arg_eax + 0x4f) & 0xbf;
    *(byte *)(arg_eax + 0x4f) = flag;
    *(byte *)(arg_eax + 0x4f) = flag | (bStack00000004 & 1) << 6;
  }
  if (iStack00000005 >> 0x18 == -2) {
    iStack00000005._3_1_ = jtyedit_fn_04c2eb();
    iStack00000005._3_1_ = iStack00000005._3_1_ + -1;
  }
  else {
    if (iStack00000005 >> 0x18 == -1) {
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
      flag = (byte)(g_action_random_seed % (uint)*(byte *)(arg_eax + 0x49));
      *(byte *)(arg_eax + 0x48) = flag;
      goto LAB_0008cde9;
    }
  }
  *(char *)(arg_eax + 0x48) = iStack00000005._3_1_;
  flag = *(byte *)(arg_eax + 0x48);
LAB_0008cde9:
  *(uint *)(arg_eax + 0x40) = (uint)flag << 8;
  return;
}

/******************************************************************************
 * Function : draw_draw_text_overlay_08cdf4 (Original VA: 0x8cdf4, Ghidra: FUN_0008cdf4)
 * Prototype: void draw_draw_text_overlay_08cdf4(void);
 * Address  : 0x8cdf4 (Size: 185 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void draw_draw_text_overlay_08cdf4(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  byte *byte_ptr;
  
  byte_ptr = &g_bss_002e7091;
  val = 0x15;
  do {
    if ((((*byte_ptr & 1) != 0) && (byte_ptr[10] == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) &&
       (dk_sprintf(&g_log_sprintf_buf,s_Event__d_0016a28e,val / 0x15), val = extraout_ECX,
       g_display_bss_003d9818 != 0)) {
      LbTextDrawFormatted();
      val = extraout_ECX_00;
    }
    byte_ptr = byte_ptr + 0x15;
    val = val + 0x15;
  } while (byte_ptr < &g_bss_002e78b0);
  return;
}

/******************************************************************************
 * Function : draw_fn_08d220 (Original VA: 0x8d220, Ghidra: FUN_0008d220)
 * Prototype: void draw_fn_08d220(void);
 * Address  : 0x8d220 (Size: 293 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Module draw.cpp procedure @ 0x08d220
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void draw_fn_08d220(void)

{
  uint saved_draw_flags;
  int loop_i;
  int arg_ecx;
  int extraout_ECX;
  int ui_scale;
  int val;
  
  saved_draw_flags = (uint)g_lb_display_draw_flags;
  ui_scale = (uint)*(byte *)(g_data_001991c0 + 0x1ae) * (uint)g_units_per_pixel;
  val = 0;
  for (loop_i = arg_ecx; 0 < loop_i; loop_i = loop_i / 10) {
    val = val + 1;
  }
  if (val < 1) {
    watcom_crt_fn_13a710();
    g_lb_display_draw_flags = (ushort)saved_draw_flags;
  }
  else if (0 < arg_ecx) {
    do {
      watcom_crt_fn_13a710(g_units_per_pixel,saved_draw_flags,ui_scale);
    } while (0 < extraout_ECX / 10);
    g_lb_display_draw_flags = (short)saved_draw_flags;
    return;
  }
  return;
}

/******************************************************************************
 * Function : draw_draw_text_overlay_08d348 (Original VA: 0x8d348, Ghidra: FUN_0008d348)
 * Prototype: void draw_draw_text_overlay_08d348(void);
 * Address  : 0x8d348 (Size: 1014 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void draw_draw_text_overlay_08d348(void)

{
  int player_off;
  ushort saved_draw_flags;
  int val;
  int val_2;
  undefined *word_ptr;
  
  saved_draw_flags = g_lb_display_draw_flags;
  g_lb_display_draw_flags = g_lb_display_draw_flags | 4;
  g_lb_current_font_ptr = g_frontend_font_ptr;
  LbTextDraw();
  dk_sprintf(&g_log_sprintf_buf,&g_data_0016a297,g_bss_00333f4f);
  player_off = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 7);
  val = (&g_slab_attr_table)[player_off];
  if (g_display_bss_003d9818 != 0) {
    LbTextDrawFormatted(val * -0x32 >> 0x10,(int)(&PTR_LAB_00192fe0)[player_off] * -0x32 >> 0x10,val);
  }
  dk_sprintf(&g_log_sprintf_buf,&g_data_0016a29a,g_bss_00333f57);
  player_off = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 7);
  val_2 = (&g_slab_attr_table)[player_off];
  if (g_display_bss_003d9818 != 0) {
    LbTextDrawFormatted(val_2 * 0x32 >> 0x10,(int)(&PTR_LAB_00192fe0)[player_off] * 0x32 >> 0x10,val,val_2);
  }
  dk_sprintf(&g_log_sprintf_buf,&g_data_0016a29d,g_bss_00333f53);
  player_off = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 7);
  word_ptr = (&PTR_LAB_00192fe0)[player_off];
  if (g_display_bss_003d9818 != 0) {
    LbTextDrawFormatted((int)word_ptr * 0x32 >> 0x10,(&g_slab_attr_table)[player_off] * -0x32 >> 0x10,val,val_2,
                 word_ptr);
  }
  dk_sprintf(&g_log_sprintf_buf,&g_data_0016a2a0,g_bss_00333f5b);
  player_off = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 7);
  if (g_display_bss_003d9818 != 0) {
    LbTextDrawFormatted((int)(&PTR_LAB_00192fe0)[player_off] * -0x32 >> 0x10,
                 (&g_slab_attr_table)[player_off] * 0x32 >> 0x10,val,val_2,word_ptr);
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : draw_fn_08d740 (Original VA: 0x8d740, Ghidra: FUN_0008d740)
 * Prototype: void draw_fn_08d740(void);
 * Address  : 0x8d740 (Size: 597 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Module draw.cpp procedure @ 0x08d740
 * Callers  : 1 -> engine3_draw_translucent_effect_sprite
 * Callees  : 2 -> bflib_system_io_fn_0f0870, watcom_crt_fn_13a710
 ******************************************************************************/
void draw_fn_08d740(void)

{
  int arg_eax;
  uint uval;
  uint saved_draw_flags;
  uint ui_scale;
  int arg_edx;
  int arg_ebx;
  int val;
  undefined2 uval_2;
  
  saved_draw_flags = (uint)g_lb_display_draw_flags;
  watcom_crt_fn_13a710(g_data_00199230 + 0x71a);
  watcom_crt_fn_13a710(g_units_per_pixel);
  val = 0;
  if (*(ushort *)(arg_ebx + 0x3b) != 0) {
    val = 10 - ((uint)*(ushort *)(arg_ebx + 0xc) * 10) / (uint)*(ushort *)(arg_ebx + 0x3b);
  }
  uval = (uint)g_data_001992a0;
  ui_scale = (uint)g_units_per_pixel;
  bflib_system_io_fn_0f0870(uval,(int)(4 / (ulonglong)(longlong)(int)ui_scale),(arg_edx + 8) / (int)ui_scale,
               (val * 2) / (int)ui_scale);
  ui_scale = (uint)*(ushort *)(saved_draw_flags + 0xe);
  if (ui_scale != 0) {
    val = 10 - ((uint)*(ushort *)(saved_draw_flags + 0x10) * 10) / ui_scale;
  }
  saved_draw_flags = (uint)g_data_001992a0;
  val = (val * 2) / (int)(uint)g_units_per_pixel;
  bflib_system_io_fn_0f0870(saved_draw_flags,uval,val,(arg_edx + 0x10) / (int)(uint)g_units_per_pixel);
  uval_2 = (undefined2)val;
  bflib_system_io_fn_0f0870(g_data_001992a0,saved_draw_flags,arg_eax + 0x34);
  g_lb_display_draw_flags = uval_2;
  return;
}

/******************************************************************************
 * Function : draw_draw_text_overlay_08d998 (Original VA: 0x8d998, Ghidra: FUN_0008d998)
 * Prototype: void draw_draw_text_overlay_08d998(void);
 * Address  : 0x8d998 (Size: 385 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 4 -> newgui_fn_058e1c, LbTextDraw, LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void draw_draw_text_overlay_08d998(void)

{
  uint uval;
  uint uval_2;
  int val;
  uint uval_3;
  uint ui_scale;
  
  val = g_bss_002ee88e - g_game_turn;
  if (val < 0) {
    val = 0;
  }
  else if (99999 < val) {
    val = 99999;
  }
  g_lb_current_font_ptr = g_frontend_font_ptr;
  dk_sprintf(&g_log_sprintf_buf,&g_data_0016a2a3,val / 2); /* 0x16a2a3="%05d" */
  if (g_lb_current_font_ptr == 0) {
    uval = 0;
  }
  else {
    uval = (uint)*(byte *)(g_lb_current_font_ptr + 0x6a);
  }
  if (g_lb_current_font_ptr == 0) {
    uval_3 = 0;
  }
  else {
    uval_3 = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
  }
  if (g_lb_current_font_ptr == 0) {
    uval_2 = 0;
  }
  else {
    uval_2 = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
  }
  ui_scale = (uint)g_units_per_pixel;
  g_lb_display_draw_flags = 0x100;
  LbTextDraw(uval_2 * ui_scale + (uval_3 * g_units_per_pixel) / 2,(uval * g_units_per_pixel * 10) / ui_scale,
               (int)(0x10 / (ulonglong)(longlong)(int)ui_scale));
  newgui_fn_058e1c();
  LbTextDrawFormatted();
  LbTextDraw();
  return;
}

/******************************************************************************
 * Function : draw_draw_text_overlay_08dcd0 (Original VA: 0x8dcd0, Ghidra: FUN_0008dcd0)
 * Prototype: void draw_draw_text_overlay_08dcd0(void);
 * Address  : 0x8dcd0 (Size: 448 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_fn_058e1c, LbTextDraw, bflib_system_io_draw_text_overlay_0e6c1c, LbTextDrawFormatted
 ******************************************************************************/
void draw_draw_text_overlay_08dcd0(void)

{
  uint uval;
  int val;
  uint ui_scale;
  undefined2 extraout_var;
  
  if ((g_game_operation_flags & 0x80) == 0) {
    g_lb_current_font_ptr = g_frontend_font_ptr;
    uval = 0;
    if (g_frontend_font_ptr != 0) {
      uval = (uint)*(byte *)(g_frontend_font_ptr + 10);
    }
    ui_scale = (uint)g_units_per_pixel;
    val = bflib_system_io_draw_text_overlay_0e6c1c();
    g_lb_display_draw_flags = 0x100;
    LbTextDraw((int)(uval * ui_scale * 2 + val * CONCAT22(extraout_var,g_units_per_pixel)) /
                 (int)(uint)g_units_per_pixel,0x10 / g_units_per_pixel);
    newgui_fn_058e1c();
    LbTextDrawFormatted();
    LbTextDraw();
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_08de90 (Original VA: 0x8de90, Ghidra: FUN_0008de90)
 * Prototype: void draw_fn_08de90(void);
 * Address  : 0x8de90 (Size: 157 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp lines 4249
 * Purpose  : Module draw.cpp procedure @ 0x08de90
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, bflib_system_io_fn_0f5390
 ******************************************************************************/
void draw_fn_08de90(void)

{
  int val;
  int *int_ptr;
  int *extraout_ECX;
  
  int_ptr = &g_bss_001baded;
  while (int_ptr < &g_bss_001baded + g_bss_001e31ff * 2) {
    val = (int)*(char *)((int)int_ptr + 2);
    if ((((0x20 < val) || (val != -0x20 && 0x1f < -val)) ||
        (val = *int_ptr >> 0x18, 0x20 < val)) || (val != -0x20 && 0x1f < -val)) {
      LbErrorLog(); /* LbErrorLog("draw.cpp", line 4249, "Wank") */
    }
    bflib_system_io_fn_0f5390();
    int_ptr = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_08eadc (Original VA: 0x8eadc, Ghidra: FUN_0008eadc)
 * Prototype: void draw_fn_08eadc(int param_1,int param_2);
 * Address  : 0x8eadc (Size: 209 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x08eadc
 * Callers  : 2 -> draw_update_player_dungeon_0872b8, draw_update_creature_and_thing_087870
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_08eadc(int param_1,int param_2)

{
  int val;
  byte flag;
  byte *byte_ptr;
  int arg_eax;
  int val_2;
  int arg_ecx;
  int arg_edx;
  int loop_i;
  int arg_ebx;
  byte *byte_ptr_2;
  uint ui_scale;
  int local_10;
  
  ui_scale = (uint)g_units_per_pixel;
  val_2 = arg_ebx / (int)ui_scale;
  val = param_1 / (int)ui_scale + -1;
  local_10 = param_2 * val_2 + arg_edx / (int)ui_scale;
  loop_i = val_2 - val;
  while (SBORROW4(val_2,val) != loop_i < 0) {
    byte_ptr_2 = (byte *)(arg_eax + local_10) + param_2;
    byte_ptr = (byte *)(arg_eax + local_10);
    for (loop_i = arg_edx / (int)ui_scale; loop_i < arg_ecx / (int)ui_scale + -1; loop_i = loop_i + 1) {
      flag = *byte_ptr_2;
      byte_ptr_2 = byte_ptr_2 + 1;
      *byte_ptr = (&g_pixmap_ghost_tables)
                [(uint)flag * 0x100 +
                 (uint)(byte)(&g_pixmap_ghost_tables)[(uint)byte_ptr[1] + (uint)*byte_ptr * 0x100]];
      byte_ptr = byte_ptr + 1;
    }
    val_2 = val_2 + 1;
    local_10 = local_10 + param_2;
    loop_i = val_2 - val;
  }
  return;
}

/******************************************************************************
 * Function : draw_draw_text_overlay_08ebb0 (Original VA: 0x8ebb0, Ghidra: FUN_0008ebb0)
 * Prototype: void draw_draw_text_overlay_08ebb0(void);
 * Address  : 0x8ebb0 (Size: 254 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, watcom_crt_fn_13a710
 ******************************************************************************/
void draw_draw_text_overlay_08ebb0(void)

{
  int room_off;
  int loop_i;
  
  g_lb_current_font_ptr = g_frontend_font_ptr;
  for (loop_i = 0; loop_i < (int)(uint)g_bss_002ee887; loop_i = loop_i + 1) {
    LbTextDraw();
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xbf;
    room_off = loop_i * 0x45;
    LbTextDrawFormatted();
    watcom_crt_fn_13a710(g_data_00199230 + ((byte)(&g_bss_002ee7f8)[room_off] + 0x1e8) * 6);
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_view_state_08ecb0 (Original VA: 0x8ecb0, Ghidra: FUN_0008ecb0)
 * Prototype: void draw_update_player_view_state_08ecb0(void);
 * Address  : 0x8ecb0 (Size: 121 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f0b60
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_update_player_view_state_08ecb0(void)

{
  char ch;
  byte arg_al;
  undefined1 extraout_CL;
  char *player_off;
  char *str_ptr;
  
  str_ptr = &g_bss_002ee7b8;
  player_off = &g_player_mp_message_text + (uint)arg_al * 0x4ef;
  bflib_system_io_fn_0f0b60();
  do {
    ch = *player_off;
    *str_ptr = ch;
    if (ch == '\0') break;
    ch = player_off[1];
    player_off = player_off + 2;
    str_ptr[1] = ch;
    str_ptr = str_ptr + 2;
  } while (ch != '\0');
  g_bss_002ee7f9 = g_game_turn;
  g_bss_002ee7f8 = extraout_CL;
  if (g_bss_002ee887 != '\x03') {
    g_bss_002ee887 = g_bss_002ee887 + '\x01';
  }
  return;
}

/******************************************************************************
 * Function : draw_process_dungeon_room_08ed2c (Original VA: 0x8ed2c, Ghidra: FUN_0008ed2c)
 * Prototype: void draw_process_dungeon_room_08ed2c(void);
 * Address  : 0x8ed2c (Size: 85 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_process_dungeon_room_08ed2c(void)

{
  int room_off;
  
  if (-1 < (int)(g_bss_002ee887 - 1)) {
    room_off = (g_bss_002ee887 - 1) * 0x45;
    do {
      if (*(int *)(&g_bss_002ee7f9 + room_off) + 400U < g_game_turn) {
        g_bss_002ee887 = g_bss_002ee887 - 1;
        (&g_bss_002ee7b8)[(uint)g_bss_002ee887 * 0x45] = 0;
      }
      room_off = room_off + -0x45;
    } while (-1 < room_off);
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_view_state_08ed84 (Original VA: 0x8ed84, Ghidra: FUN_0008ed84)
 * Prototype: undefined4 draw_update_player_view_state_08ed84(void);
 * Address  : 0x8ed84 (Size: 21 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 draw_update_player_view_state_08ed84(void)

{
  int player_off;
  
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  return CONCAT31((int3)((uint)player_off >> 8),(&g_player_victory_state)[player_off]);
}

/******************************************************************************
 * Function : draw_update_player_dungeon_08ee8c (Original VA: 0x8ee8c, Ghidra: FUN_0008ee8c)
 * Prototype: ulonglong draw_update_player_dungeon_08ee8c(void);
 * Address  : 0x8ee8c (Size: 47 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong draw_update_player_dungeon_08ee8c(void)

{
  int val;
  int val_2;
  undefined4 arg_edx;
  
  val = g_my_player_word >> 0x18;
  val_2 = val;
  if ((*(int *)(&g_player_victory_state + val * 0x4ef) != 0) &&
     (val_2 = val * 0x1508, (&g_bss_002e0e0d)[val * 0x542] == 0)) {
    return CONCAT44(arg_edx,CONCAT31((int3)((uint)val_2 >> 8),1));
  }
  return CONCAT44(arg_edx,val_2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : draw_update_player_dungeon_08eebc (Original VA: 0x8eebc, Ghidra: FUN_0008eebc)
 * Prototype: ulonglong draw_update_player_dungeon_08eebc(void);
 * Address  : 0x8eebc (Size: 48 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong draw_update_player_dungeon_08eebc(void)

{
  int val;
  undefined4 arg_edx;
  
  val = g_my_player_word >> 0x18;
  if ((*(int *)(&g_player_victory_state + val * 0x4ef) != 0) &&
     (val = val * 0x1508, *(short *)(&g_bss_002e0b61 + val) == 0)) {
    return CONCAT44(arg_edx,CONCAT31((int3)((uint)val >> 8),1));
  }
  return CONCAT44(arg_edx,val) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : draw_process_thing_entity_08eeec (Original VA: 0x8eeec, Ghidra: FUN_0008eeec)
 * Prototype: void draw_process_thing_entity_08eeec(void);
 * Address  : 0x8eeec (Size: 675 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> draw_update_player_dungeon_08a194
 * Callees  : 3 -> magic_update_slab_subtile_columns_05003d, magic_update_creature_control_0502a9, bflib_system_io_fn_0ebc10
 ******************************************************************************/
void draw_process_thing_entity_08eeec(void)

{
  char ch;
  uint arg_eax;
  int val;
  ushort arg_dx;
  uint *word_ptr;
  int local_14;
  uint local_10;
  
  local_10 = (uint)(byte)(&g_data_00191780)[arg_eax & 0xff];
  word_ptr = &local_10;
  if ((local_10 != 0) &&
     (((arg_dx == 0 ||
       (*(int *)((&g_thing_ptrs)[arg_dx] + 3) >> 0x18 ==
        (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) ||
      (word_ptr = &local_10, (&g_data_0018e98d)[local_10 * 0x1b] != '\0')))) {
    local_14 = 0;
    ch = magic_update_slab_subtile_columns_05003d();
    word_ptr = (uint *)&local_14;
    if ((ch != '\0') &&
       ((arg_dx == 0 || (val = magic_update_creature_control_0502a9(), word_ptr = (uint *)&local_14, val != 0)))) {
      if ((*(int *)(&g_data_0018e988 + local_14 * 0x1b) != 0) &&
         (ch = (**(code **)(&g_data_0018e988 + local_14 * 0x1b))(), ch != '\0')) {
        bflib_system_io_fn_0ebc10();
        val = *(int *)(&g_player_victory_state + (g_my_player_word >> 0x18) * 0x4ef) >> 0x1f;
        val = (int)((*(int *)(&g_player_victory_state + (g_my_player_word >> 0x18) * 0x4ef) + val * -4) -
                     (uint)(val << 1 < 0)) >> 2;
        if (7 < val) {
          val = 8;
        }
        g_bss_0037776c = *(undefined4 *)(&g_bss_002eae11 + local_14 * 0x4c + val * 4);
        return;
      }
      bflib_system_io_fn_0ebc10();
      return;
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x8f188;
  bflib_system_io_fn_0ebc10();
  return;
}

/******************************************************************************
 * Function : draw_dene_says_big_hello_08f190 (Original VA: 0x8f190, Ghidra: FUN_0008f190)
 * Prototype: void draw_dene_says_big_hello_08f190(void);
 * Address  : 0x8f190 (Size: 391 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void draw_dene_says_big_hello_08f190(void)

{
  int extraout_ECX;
  int val;
  int extraout_ECX_00;
  ushort extraout_DX;
  
  LbTextDraw();
  if (6 < g_bss_003482c1) {
    g_bss_003482c1 = g_bss_003482c1 + 1;
    g_lb_current_font_ptr = g_frontend_font_ptr;
    dk_sprintf(&g_log_sprintf_buf,s_Dene_says_a_big__Hello__to_Goth_B_0016a154);
    val = extraout_ECX;
    g_lb_display_draw_flags = extraout_DX;
    do {
      g_render_frame_skip = (char)g_game_turn - (char)val;
      LbTextDrawFormatted();
      val = extraout_ECX_00;
    } while (extraout_ECX_00 < 0x1e);
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
    LbTextDrawFormatted();
    if (1000 < g_bss_003482c1) {
      g_bss_003482c1 = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08f320 (Original VA: 0x8f320, Ghidra: FUN_0008f320)
 * Prototype: void draw_update_slab_subtile_columns_08f320(void);
 * Address  : 0x8f320 (Size: 501 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 1 -> newgui_process_thing_entity_057f6b
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_update_slab_subtile_columns_08f320(void)

{
  int slab_coord;
  byte arg_al;
  char ch;
  int arg_ecx;
  undefined4 extraout_ECX;
  int subtile_x;
  int subtile_y;
  int slab_coord_2;
  undefined1 local_18;
  
  local_18 = 1;
  slab_coord_2 = (&g_subtile_to_slab_lut)[subtile_x];
  slab_coord = (&g_subtile_to_slab_lut)[subtile_y];
  if ((*(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) >> 0x1c &
      1 << (arg_al & 0x1f)) != 0) {
    if ((*(uint *)(&g_data_001921c6 +
                  (uint)(byte)(&g_slabmap_base)[(subtile_x / 3 + (subtile_y / 3) * 0x55) * 6] * 0x16) &
        0x29) == 0) {
      local_18 = 0;
    }
    else if (((&g_data_001921d4)
              [(uint)(byte)(&g_slabmap_base)[(subtile_x / 3 + (subtile_y / 3) * 0x55) * 6] * 0x16] ==
              '\0') ||
            ((((&g_slabmap)[((&g_subtile_to_slab_lut)[subtile_x] + (&g_subtile_to_slab_lut)[subtile_y] * 0x55) * 6] &
              7) != arg_al &&
             ((*(uint *)(&g_data_001921c6 +
                        (uint)(byte)(&g_slabmap_base)[(subtile_x / 3 + (subtile_y / 3) * 0x55) * 6] *
                        0x16) & 0x20) != 0)))) {
      local_18 = 0;
    }
  }
  if (((arg_al == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
      (ch = newgui_process_thing_entity_057f6b(), ch == '\0')) && (g_bss_002e90b1 != '\x02')) {
    g_engine3_bss_00387e07 = slab_coord_2 * 0x300;
    slab_coord_2 = arg_ecx * 2 + slab_coord_2 * 3 + 1;
    g_engine3_bss_00387e13 = (slab_coord * 3 + 1 + arg_ecx * 2) * 0x100;
    g_engine3_bss_00387e0f = CONCAT22((short)((uint)slab_coord_2 >> 8),(short)slab_coord_2 * 0x100);
    g_engine3_bss_00387e02._2_1_ = 1;
    g_engine3_bss_00387e0b = slab_coord * 0x300;
    g_engine3_bss_00387e02._3_1_ = local_18;
    g_engine3_bss_00387e17 = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08f518 (Original VA: 0x8f518, Ghidra: FUN_0008f518)
 * Prototype: undefined1 draw_update_slab_subtile_columns_08f518(void);
 * Address  : 0x8f518 (Size: 580 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 4 -> door_process_map_subtile_022b3a, imptool_fn_03f80c, newgui_process_thing_entity_057f6b, trap_process_map_subtile_076789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 draw_update_slab_subtile_columns_08f518(void)

{
  int slab_coord;
  int slab_coord_2;
  undefined1 uval;
  byte arg_al;
  char ch;
  int slab_coord_3;
  byte extraout_CH;
  int arg_ecx;
  int subtile_x;
  uint uval_2;
  int subtile_y;
  undefined4 uval_3;
  undefined1 local_14;
  
  uval = 0;
  local_14 = 0;
  slab_coord = (&g_subtile_to_slab_lut)[subtile_x];
  slab_coord_2 = (&g_subtile_to_slab_lut)[subtile_y];
  slab_coord_3 = ((&g_subtile_to_slab_lut)[subtile_x] + slab_coord_2 * 0x55) * 6;
  uval_2 = (uint)(byte)(&g_slabmap_base)[slab_coord_3];
  if ((*(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) >> 0x1c &
      1 << (arg_al & 0x1f)) == 0) {
    if (g_engine3_bss_00387e00 == '\0') {
      uval_3 = 5;
    }
    else {
      uval_3 = 2;
    }
  }
  else if ((*(uint *)(&g_data_001921c6 + uval_2 * 0x16) & 0x29) == 0) {
    if ((uval_2 == 0xd) || (uval_2 == 0xc)) {
      uval_3 = 0;
      if (((&g_bss_0019d51b)[(uint)arg_al * 0x4ef] == '\x02') &&
         ((&g_bss_0019d56b)[(uint)arg_al * 0x4ef] == '\x0f')) {
        slab_coord_3 = imptool_fn_03f80c();
        if (slab_coord_3 != 0) {
          local_14 = 1;
        }
      }
    }
    else {
      local_14 = uval;
      if ((((&g_slabmap)[slab_coord_3] & 7) == arg_al) && (uval_2 == 0xb)) {
        slab_coord_3 = trap_process_map_subtile_076789();
        if (slab_coord_3 == 0) {
          slab_coord_3 = door_process_map_subtile_022b3a();
          if ((slab_coord_3 == 0) && ((&g_bss_0019d56b)[(uint)extraout_CH * 0x4ef] != '\x0f')) {
            local_14 = 1;
          }
        }
      }
      uval_3 = 1;
    }
  }
  else if (g_engine3_bss_00387e00 == '\0') {
    uval_3 = 5;
  }
  else {
    uval_3 = 2;
  }
  if (arg_al == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
    ch = newgui_process_thing_entity_057f6b();
    if ((ch == '\0') && (g_bss_002e90b1 != '\x02')) {
      g_engine3_bss_00387e07 = slab_coord * 0x300;
      g_engine3_bss_00387e0f = (slab_coord * 3 + 1 + arg_ecx * 2) * 0x100;
      g_engine3_bss_00387e02._2_1_ = 1;
      g_engine3_bss_00387e0b = slab_coord_2 * 0x300;
      g_engine3_bss_00387e13 = (uint)(uint3)((int3)slab_coord_2 * 3 + 1 + (int3)(arg_ecx * 2)) << 8;
      g_engine3_bss_00387e02._3_1_ = local_14;
      g_engine3_bss_00387e17 = uval_3;
    }
  }
  return local_14;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08f75c (Original VA: 0x8f75c, Ghidra: FUN_0008f75c)
 * Prototype: undefined4 draw_update_slab_subtile_columns_08f75c(void);
 * Address  : 0x8f75c (Size: 456 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 3 -> door_process_map_subtile_022b3a, newgui_process_thing_entity_057f6b, trap_process_map_subtile_076789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 draw_update_slab_subtile_columns_08f75c(void)

{
  int slab_coord;
  int slab_coord_2;
  undefined1 uval;
  byte arg_al;
  int slab_coord_3;
  uint uval_2;
  byte extraout_CH;
  byte extraout_CH_00;
  int subtile_x;
  int subtile_y;
  undefined8 uval_3;
  undefined1 local_14;
  
  uval = 0;
  local_14 = 0;
  slab_coord = (&g_subtile_to_slab_lut)[subtile_x];
  slab_coord_2 = (&g_subtile_to_slab_lut)[subtile_y];
  slab_coord_3 = ((&g_subtile_to_slab_lut)[subtile_x] + slab_coord_2 * 0x55) * 6;
  uval_2 = (uint)(byte)(&g_slabmap_base)[slab_coord_3];
  if ((((((1 << (arg_al & 0x1f) &
          *(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) >> 0x1c) != 0) &&
        ((*(uint *)(&g_data_001921c6 + uval_2 * 0x16) & 0x29) == 0)) && (uval_2 != 0xd)) &&
      ((uval_2 != 0xc && (local_14 = uval, ((&g_slabmap)[slab_coord_3] & 7) == arg_al)))) &&
     ((uval_2 == 0xb &&
      ((slab_coord_3 = trap_process_map_subtile_076789(), arg_al = extraout_CH, slab_coord_3 == 0 &&
       (slab_coord_3 = door_process_map_subtile_022b3a(), arg_al = extraout_CH_00, slab_coord_3 == 0)))))) {
    local_14 = 1;
  }
  uval_2 = (g_my_player_word >> 0x18) * 0x4ef;
  if (arg_al == (&g_player_id_number)[uval_2]) {
    uval_3 = newgui_process_thing_entity_057f6b();
    uval_2 = (uint)uval_3;
    if (((char)uval_3 == '\0') && (uval_2 = (uint)g_bss_002e90b1, uval_2 != 2)) {
      g_engine3_bss_00387e02._2_1_ = 1;
      g_engine3_bss_00387e0f = slab_coord * 0x300 + 0x300;
      g_engine3_bss_00387e13 = slab_coord_2 * 0x300 + 0x300;
      g_engine3_bss_00387e07 = slab_coord * 0x300;
      g_engine3_bss_00387e0b = slab_coord_2 * 0x300;
      uval_2 = CONCAT31((int3)slab_coord_2 * 3,local_14);
      g_engine3_bss_00387e02._3_1_ = local_14;
      g_engine3_bss_00387e17 = (int)((ulonglong)uval_3 >> 0x20);
    }
  }
  return CONCAT31((int3)(uval_2 >> 8),local_14);
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08f924 (Original VA: 0x8f924, Ghidra: FUN_0008f924)
 * Prototype: undefined4 draw_update_slab_subtile_columns_08f924(void);
 * Address  : 0x8f924 (Size: 492 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 3 -> compevnt_process_dungeon_room_0194e8, input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 4 -> door_process_map_subtile_022b3a, door_process_slabmap_tile_022e62, newgui_process_thing_entity_057f6b, trap_process_map_subtile_076789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 draw_update_slab_subtile_columns_08f924(void)

{
  int slab_coord;
  int slab_coord_2;
  undefined1 uval;
  byte arg_al;
  char ch;
  int slab_coord_3;
  uint uval_2;
  byte extraout_CH;
  byte extraout_CH_00;
  byte extraout_CH_01;
  int subtile_x;
  int subtile_y;
  undefined8 uval_3;
  undefined1 local_1c;
  
  uval = 0;
  local_1c = 0;
  slab_coord = (&g_subtile_to_slab_lut)[subtile_x];
  slab_coord_2 = (&g_subtile_to_slab_lut)[subtile_y];
  slab_coord_3 = ((&g_subtile_to_slab_lut)[subtile_x] + slab_coord_2 * 0x55) * 6;
  uval_2 = (uint)(byte)(&g_slabmap_base)[slab_coord_3];
  if (((((((1 << (arg_al & 0x1f) &
           *(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) >> 0x1c) != 0) &&
         ((*(uint *)(&g_data_001921c6 + uval_2 * 0x16) & 0x29) == 0)) && (uval_2 != 0xd)) &&
       ((uval_2 != 0xc && (local_1c = uval, ((&g_slabmap)[slab_coord_3] & 7) == arg_al)))) &&
      ((uval_2 == 0xb &&
       ((ch = door_process_slabmap_tile_022e62(), arg_al = extraout_CH, ch != -1 &&
        (slab_coord_3 = trap_process_map_subtile_076789(), arg_al = extraout_CH_00, slab_coord_3 == 0)))))) &&
     (slab_coord_3 = door_process_map_subtile_022b3a(), arg_al = extraout_CH_01, slab_coord_3 == 0)) {
    local_1c = 1;
  }
  uval_2 = (g_my_player_word >> 0x18) * 0x4ef;
  if (arg_al == (&g_player_id_number)[uval_2]) {
    uval_3 = newgui_process_thing_entity_057f6b();
    uval_2 = (uint)uval_3;
    if (((char)uval_3 == '\0') && (uval_2 = (uint)g_bss_002e90b1, uval_2 != 2)) {
      g_engine3_bss_00387e02._2_1_ = 1;
      g_engine3_bss_00387e0f = slab_coord * 0x300 + 0x300;
      g_engine3_bss_00387e13 = slab_coord_2 * 0x300 + 0x300;
      g_engine3_bss_00387e07 = slab_coord * 0x300;
      g_engine3_bss_00387e0b = slab_coord_2 * 0x300;
      uval_2 = CONCAT31((int3)slab_coord * 3,local_1c);
      g_engine3_bss_00387e02._3_1_ = local_1c;
      g_engine3_bss_00387e17 = (int)((ulonglong)uval_3 >> 0x20);
    }
  }
  return CONCAT31((int3)(uval_2 >> 8),local_1c);
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08fb10 (Original VA: 0x8fb10, Ghidra: FUN_0008fb10)
 * Prototype: void draw_update_slab_subtile_columns_08fb10(void);
 * Address  : 0x8fb10 (Size: 515 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 3 -> door_process_map_subtile_022b3a, newgui_process_thing_entity_057f6b, trap_process_map_subtile_076789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_update_slab_subtile_columns_08fb10(void)

{
  int slab_coord;
  int slab_coord_2;
  int val;
  undefined1 uval;
  byte arg_al;
  char ch;
  int slab_coord_3;
  int arg_ecx;
  int subtile_x;
  int subtile_y;
  uint uval_2;
  undefined4 uval_3;
  undefined1 local_18;
  
  slab_coord = (&g_subtile_to_slab_lut)[subtile_y];
  uval = 0;
  local_18 = 0;
  slab_coord_2 = (&g_subtile_to_slab_lut)[subtile_x];
  val = slab_coord_2 * 3;
  slab_coord_3 = ((&g_subtile_to_slab_lut)[subtile_x] + slab_coord * 0x55) * 6;
  uval_2 = (uint)(byte)(&g_slabmap_base)[slab_coord_3];
  if ((*(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) >> 0x1c &
      1 << (arg_al & 0x1f)) == 0) {
    if (g_engine3_bss_00387e00 == '\0') {
      uval_3 = 5;
    }
    else {
      uval_3 = 2;
    }
    goto LAB_0008fc84;
  }
  if ((*(uint *)(&g_data_001921c6 + uval_2 * 0x16) & 0x29) != 0) {
    if (g_engine3_bss_00387e00 == '\0') {
      uval_3 = 5;
    }
    else {
      uval_3 = 2;
    }
    goto LAB_0008fc84;
  }
  if ((uval_2 == 0xd) || (uval_2 == 0xc)) {
    uval_3 = 0;
    goto LAB_0008fc84;
  }
  local_18 = uval;
  if (((&g_slabmap)[slab_coord_3] & 7) == arg_al) {
    if ((uint)(byte)(&g_bss_002d33c8)[slab_coord_3] * 0x45 == 0) {
      slab_coord_3 = door_process_map_subtile_022b3a();
      if (slab_coord_3 == 0) {
        slab_coord_3 = trap_process_map_subtile_076789();
        if (slab_coord_3 == 0) goto LAB_0008fc68;
      }
    }
    if ((uval_2 != 0xe) && (uval_2 != 0x1a)) {
      local_18 = 1;
    }
  }
LAB_0008fc68:
  uval_3 = 1;
LAB_0008fc84:
  if (arg_al == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
    ch = newgui_process_thing_entity_057f6b();
    if ((ch == '\0') && (g_bss_002e90b1 != '\x02')) {
      g_engine3_bss_00387e07 = CONCAT22((short)((uint)val >> 8),(short)slab_coord_2 * 0x300);
      g_engine3_bss_00387e0b = slab_coord * 0x300;
      g_engine3_bss_00387e0f = (arg_ecx * 2 + val + 1) * 0x100;
      g_engine3_bss_00387e02._2_1_ = 1;
      g_engine3_bss_00387e13 = (uint)(uint3)((int3)slab_coord * 3 + 1 + (int3)(arg_ecx * 2)) << 8;
      g_engine3_bss_00387e02._3_1_ = local_18;
      g_engine3_bss_00387e17 = uval_3;
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_update_slab_subtile_columns_08fd14 (Original VA: 0x8fd14, Ghidra: FUN_0008fd14)
 * Prototype: void draw_update_slab_subtile_columns_08fd14(int param_1);
 * Address  : 0x8fd14 (Size: 416 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 2 -> newgui_process_thing_entity_057f6b, is_subtile_revealed_and_within_bounds
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_update_slab_subtile_columns_08fd14(int param_1)

{
  int slab_coord;
  int slab_coord_2;
  byte arg_al;
  char ch;
  int val;
  int subtile_x;
  undefined4 extraout_EDX;
  int subtile_y;
  bool flag;
  
  flag = false;
  slab_coord = (&g_subtile_to_slab_lut)[subtile_x];
  slab_coord_2 = (&g_subtile_to_slab_lut)[subtile_y];
  if (((*(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) >> 0x1c &
       1 << (arg_al & 0x1f)) != 0) &&
     ((*(uint *)(&g_data_001921c6 +
                (uint)(byte)(&g_slabmap_base)[(subtile_x / 3 + (subtile_y / 3) * 0x55) * 6] * 0x16) &
      0x29) == 0)) {
    val = is_subtile_revealed_and_within_bounds();
    flag = val != 0;
  }
  if (((arg_al == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
      (ch = newgui_process_thing_entity_057f6b(), ch == '\0')) && (g_bss_002e90b1 != '\x02')) {
    g_engine3_bss_00387e07 = slab_coord * 0x300;
    g_engine3_bss_00387e0f = (slab_coord * 3 + 1 + param_1 * 2) * 0x100;
    g_engine3_bss_00387e02._2_1_ = 1;
    g_engine3_bss_00387e0b = slab_coord_2 * 0x300;
    g_engine3_bss_00387e13 = (uint)(uint3)((int3)slab_coord_2 * 3 + 1 + (int3)(param_1 * 2)) << 8;
    g_engine3_bss_00387e02._3_1_ = flag;
    g_engine3_bss_00387e17 = extraout_EDX;
  }
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_08feb4 (Original VA: 0x8feb4, Ghidra: FUN_0008feb4)
 * Prototype: void draw_process_map_subtile_08feb4(void);
 * Address  : 0x8feb4 (Size: 426 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_process_map_subtile_08feb4(void)

{
  int arg_eax;
  int val;
  int val_2;
  uint uval;
  undefined1 arg_cl;
  int val_3;
  int val_4;
  int arg_edx;
  int val_5;
  int arg_ebx;
  int val_6;
  uint local_2c;
  int local_20;
  int local_1c;
  
  val_3 = arg_eax;
  if (arg_eax < 0) {
    val_3 = 0;
  }
  val_4 = arg_edx;
  if (arg_edx < 0) {
    val_4 = 0;
  }
  val = arg_eax + arg_ebx;
  if (0xfe < val) {
    val = 0xfe;
  }
  val_2 = arg_edx + arg_ebx;
  if (0xfe < val_2) {
    val_2 = 0xfe;
  }
  local_2c = 0;
  if (val_4 <= val_2) {
    local_20 = val_4 * 0x500;
    local_1c = val_4;
    do {
      if (val_3 <= val) {
        val_5 = (int)&g_map_subtiles + local_20 + val_3 * 5;
        val_6 = val_3;
        do {
          if (((*(uint *)(val_5 + 1) >> 0x1c & (uint)g_bss_00379395) == 0) ||
             (uval = local_2c, (*(uint *)(val_5 + 1) & 0x7ff) != 0)) {
            uval = g_bss_002e6f23;
            if ((*(uint *)(val_5 + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
              uval = *(uint *)(val_5 + 1) & 0x7ff;
            }
            uval = (uint)(*(byte *)((int)&g_bss_0019e973 + uval * 0x18 + 2) >> 4);
            if ((g_engine3_bss_00387e00 != '\0') && (uval < 3)) {
              uval = 2;
            }
            if (uval <= local_2c) {
              uval = local_2c;
            }
          }
          local_2c = uval;
          val_6 = val_6 + 1;
          val_5 = val_5 + 5;
        } while (val_6 <= val);
      }
      local_20 = local_20 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c <= val_2);
  }
  g_engine3_bss_00387e02._2_1_ = 1;
  g_engine3_bss_00387e07 = val_3 << 8;
  g_engine3_bss_00387e0b = val_4 << 8;
  g_engine3_bss_00387e0f = val * 0x100 + 0x100;
  g_engine3_bss_00387e17 = local_2c;
  g_engine3_bss_00387e13 = val_2 * 0x100 + 0x100;
  g_engine3_bss_00387e02._3_1_ = arg_cl;
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_0902e4 (Original VA: 0x902e4, Ghidra: FUN_000902e4)
 * Prototype: void draw_process_map_subtile_0902e4(int *param_1,int *param_2,int *param_3,int *param_4);
 * Address  : 0x902e4 (Size: 811 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_process_map_subtile_0902e4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  uint uval;
  uint uval_2;
  int val_4;
  int *arg_ecx;
  ushort uval_3;
  int arg_edx;
  int val_5;
  int *arg_ebx;
  int val_6;
  short loop_i;
  int val_7;
  int local_30;
  
  local_30 = g_engine3_bss_003882c0;
  if ((g_engine3_bss_003882d8 == 0) && (g_engine3_bss_003882cc == 0)) {
    *arg_ebx = 0;
    g_engine3_bss_00387da4 = &g_map_subtiles;
    *arg_ecx = 0;
  }
  else {
    val_3 = arg_eax - g_engine3_bss_003882bc;
    for (loop_i = 0; loop_i < 8; loop_i = loop_i + 1) {
      uval = ((val_3 * g_engine3_bss_003882d8 >> 1) - (g_engine3_bss_003882d4 * (arg_edx - local_30) >> 1)) /
              (g_engine3_bss_003882d8 * g_engine3_bss_003882c8 - g_engine3_bss_003882d4 * g_engine3_bss_003882cc >> 0xb);
      uval_2 = ((val_3 * g_engine3_bss_003882cc >> 1) - (g_engine3_bss_003882c8 * (arg_edx - local_30) >> 1)) /
              (g_engine3_bss_003882d8 * -g_engine3_bss_003882c8 + g_engine3_bss_003882d4 * g_engine3_bss_003882cc >> 0xb);
      val_6 = (int)uval >> 2;
      val_4 = (int)uval_2 >> 2;
      val_5 = (uval & 3) << 6;
      val_7 = (uval_2 & 3) << 6;
      if ((((-1 < val_6) && (val_6 < 0xff)) && (-1 < val_4)) && (val_4 < 0xff)) {
        val = (val_4 * 0x100 + val_6) * 5;
        if (loop_i == 0) {
          g_engine3_bss_00387de8 = val_5;
          *param_1 = val_6;
          *param_2 = val_4;
          *arg_ebx = val_6;
          g_engine3_bss_00387da4 = (undefined2 *)((int)&g_map_subtiles + val);
          g_engine3_bss_00387dec = val_7;
          *arg_ecx = val_4;
        }
        else {
          uval = *(uint *)((int)&g_map_subtiles + val + 1);
          if ((((uint)g_bss_00379395 & uval >> 0x1c) == 0) || ((uval & 0x7ff) != 0)) {
            uval = *(uint *)((int)&g_map_subtiles + val + 1);
            uval_2 = g_bss_002e6f23;
            if (((uint)g_bss_00379395 & uval >> 0x1c) != 0) {
              uval_2 = uval & 0x7ff;
            }
            uval_3 = *(ushort *)((int)&g_bss_0019e973 + uval_2 * 0x18 + 3);
            if ((g_engine3_bss_00387e00 != '\0') && (uval_3 != 0)) {
              uval = *(uint *)((int)&g_map_subtiles + val + 1);
              uval_2 = g_bss_002e6f23;
              if ((uval >> 0x1c & (uint)g_bss_00379395) != 0) {
                uval_2 = uval & 0x7ff;
              }
              if (7 < *(ushort *)((int)&g_bss_0019e973 + uval_2 * 0x18 + 3)) {
                val = val_6 + val_4 * 0x100;
                val_2 = val * 5;
                if (((*(uint *)((int)&g_map_subtiles + val_2 + 1) >> 0x1c & (uint)g_bss_00379395) == 0)
                   || ((((&g_bss_00269203)[val] & 0x80) == 0 &&
                       ((*(byte *)((int)&g_map_subtiles + val_2) & 2) == 0)))) {
                  uval_3 = uval_3 & 3;
                }
              }
            }
            if (((int)(short)uval_3 & 1 << ((char)loop_i - 1U & 0x1f)) != 0) {
              g_engine3_bss_00387de8 = val_5;
              *arg_ebx = val_6;
              *arg_ecx = val_4;
              g_engine3_bss_00387da4 = (undefined2 *)((int)&g_map_subtiles + (val_4 * 0x100 + *arg_ebx) * 5);
              g_engine3_bss_00387dec = val_7;
            }
            if (((g_engine3_bss_00387e00 != '\0') && (loop_i == 2)) ||
               ((g_engine3_bss_00387e00 == '\0' && (loop_i == 5)))) {
              g_engine3_bss_00387df8 = val_5;
              *param_3 = val_6;
              g_engine3_bss_00387dfc = val_7;
              *param_4 = val_4;
            }
          }
        }
      }
      local_30 = local_30 + (g_engine3_bss_003882e4 >> 8);
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_090610 (Original VA: 0x90610, Ghidra: FUN_00090610)
 * Prototype: void draw_fn_090610(void);
 * Address  : 0x90610 (Size: 203 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x090610
 * Callers  : 2 -> engine3_determine_visible_subtiles_for_camera, engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_090610(void)

{
  int arg_eax;
  int val;
  int *arg_ecx;
  int arg_edx;
  int val_2;
  int *arg_ebx;
  int val_3;
  int val_4;
  
  if ((g_engine3_bss_003882d8 == 0) && (g_engine3_bss_003882cc == 0)) {
    *arg_ebx = 0;
    *arg_ecx = 0;
  }
  else {
    val_3 = g_engine3_bss_003882d4 * g_engine3_bss_003882cc;
    val_2 = (arg_eax - g_engine3_bss_003882bc) * g_engine3_bss_003882cc;
    val_4 = (arg_edx - g_engine3_bss_003882c0) * g_engine3_bss_003882c8;
    val = -g_engine3_bss_003882c8 * g_engine3_bss_003882d8;
    *arg_ebx = ((g_engine3_bss_003882d8 * (arg_eax - g_engine3_bss_003882bc) >> 1) -
                 (g_engine3_bss_003882d4 * (arg_edx - g_engine3_bss_003882c0) >> 1)) /
                 (g_engine3_bss_003882c8 * g_engine3_bss_003882d8 - val_3 >> 0xb) >> 2;
    *arg_ecx = ((val_2 >> 1) - (val_4 >> 1)) / (val_3 + val >> 0xb) >> 2;
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_090720 (Original VA: 0x90720, Ghidra: FUN_00090720)
 * Prototype: undefined4 draw_fn_090720(void);
 * Address  : 0x90720 (Size: 183 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x090720
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 draw_fn_090720(void)

{
  int *arg_eax;
  int val;
  undefined4 uval;
  int *arg_ecx;
  int val_2;
  int *arg_edx;
  int *arg_ebx;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  
  val_6 = *arg_ebx;
  val_4 = *arg_eax;
  val_3 = *arg_ecx;
  val_2 = *arg_edx;
  val = val_3 - val_2;
  val_5 = val_6 - val_4;
  if ((val_2 < 0) && (val_3 < 0)) {
    uval = 0;
  }
  else {
    if (val_2 < 0) {
      if (val_5 != 0) {
        val_4 = val_4 + ((-val_2 * val_5 * 0x100) / val >> 8);
      }
      val_2 = 0;
    }
    if (val_3 < 0) {
      if (val_5 != 0) {
        val_6 = val_6 + ((-val_3 * val_5 * 0x100) / val >> 8);
      }
      val_3 = 0;
    }
    if ((val_2 < 0) || (val_3 < 0)) {
      return 0;
    }
    *arg_eax = val_4;
    *arg_edx = val_2;
    *arg_ebx = val_6;
    *arg_ecx = val_3;
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : draw_update_player_view_state_0907d8 (Original VA: 0x907d8, Ghidra: FUN_000907d8)
 * Prototype: undefined4 draw_update_player_view_state_0907d8(void);
 * Address  : 0x907d8 (Size: 445 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 draw_update_player_view_state_0907d8(void)

{
  int *arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  int *arg_ecx;
  int val_3;
  int *arg_edx;
  int *arg_ebx;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  
  val_6 = *arg_ebx;
  val_7 = *arg_eax;
  val_4 = *arg_ecx;
  val_3 = *arg_edx;
  val = val_4 - val_3;
  val_2 = g_my_player_word >> 0x18;
  val_5 = val_6 - val_7;
  if ((val_3 < (int)((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel)) ||
     (val_4 < (int)((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel))) {
    if ((int)((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_3) {
      if (val_5 != 0) {
        val_7 = val_7 + ((int)(((val_5 * 0x100) / val) *
                              (((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) /
                                (uint)g_units_per_pixel - 1) - val_3)) >> 8);
      }
      val_3 = (uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel - 1;
    }
    if ((int)((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_4) {
      if (val_5 != 0) {
        val_6 = val_6 + ((int)(((val_5 * 0x100) / val) *
                              (((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) /
                                (uint)g_units_per_pixel - 1) - val_4)) >> 8);
      }
      val_4 = (uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel - 1;
    }
    if (((int)((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_3) ||
       ((int)((uint)*(ushort *)(&g_bss_0019d50e + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_4)) {
      return 0;
    }
    *arg_eax = val_7;
    *arg_edx = val_3;
    *arg_ebx = val_6;
    *arg_ecx = val_4;
    uval = 1;
  }
  else {
    uval = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : draw_update_player_view_state_090a50 (Original VA: 0x90a50, Ghidra: FUN_00090a50)
 * Prototype: undefined4 draw_update_player_view_state_090a50(void);
 * Address  : 0x90a50 (Size: 452 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 draw_update_player_view_state_090a50(void)

{
  int *arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  int *arg_ecx;
  int val_3;
  int *arg_edx;
  int *arg_ebx;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  
  val_3 = *arg_ebx;
  val_4 = *arg_eax;
  val = val_3 - val_4;
  val_2 = g_my_player_word >> 0x18;
  val_7 = *arg_edx;
  val_5 = *arg_ecx;
  val_6 = val_5 - val_7;
  if ((val_4 < (int)((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel)) ||
     (val_3 < (int)((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel))) {
    if ((int)((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_4) {
      if (val_6 != 0) {
        val_7 = val_7 + ((int)(((val_6 * 0x100) / val) *
                              (((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) /
                                (uint)g_units_per_pixel - 1) - val_4)) >> 8);
      }
      val_4 = (uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel - 1;
    }
    if ((int)((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_3) {
      if (val_6 != 0) {
        val_5 = val_5 + ((int)(((val_6 * 0x100) / val) *
                              (((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) /
                                (uint)g_units_per_pixel - 1) - val_3)) >> 8);
      }
      val_3 = (uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel - 1;
    }
    if (((int)((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_4) ||
       ((int)((uint)*(ushort *)(&g_bss_0019d50c + val_2 * 0x4ef) / (uint)g_units_per_pixel) <= val_3)) {
      return 0;
    }
    *arg_eax = val_4;
    *arg_edx = val_7;
    *arg_ebx = val_3;
    *arg_ecx = val_5;
    uval = 1;
  }
  else {
    uval = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : draw_update_player_view_state_090c14 (Original VA: 0x90c14, Ghidra: FUN_00090c14)
 * Prototype: void draw_update_player_view_state_090c14(void);
 * Address  : 0x90c14 (Size: 2503 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> draw_update_player_view_state_0915dc
 * Callees  : 1 -> bflib_system_io_fn_0f5390
 ******************************************************************************/
void draw_update_player_view_state_090c14(void)

{
  bool flag;
  int arg_eax;
  uint uval;
  int val;
  int val_2;
  int arg_ecx;
  int loop_i;
  int arg_edx;
  uint uval_2;
  uint uval_3;
  int arg_ebx;
  uint uval_4;
  int val_3;
  int val_4;
  undefined4 *word_ptr;
  int val_5;
  undefined4 *word_ptr_2;
  undefined4 auStack_110 [8];
  int local_ec;
  int local_e4;
  int local_e0;
  int *local_dc;
  uint local_d8;
  uint local_d4;
  undefined1 *local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 *local_c0;
  int *local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  int *local_a0;
  undefined1 *local_9c;
  int *local_98;
  uint local_94;
  int *local_90;
  uint local_8c;
  int *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  uint local_7c;
  int *local_78;
  undefined1 *local_74;
  int *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uval = arg_ebx - arg_eax;
  word_ptr = &g_data_00191eac;
  word_ptr_2 = auStack_110;
  local_20 = arg_edx;
  local_1c = arg_ecx;
  local_10 = arg_eax;
  for (loop_i = 8; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + 1;
    word_ptr_2 = word_ptr_2 + 1;
  }
  uval_4 = arg_ecx - local_20;
  val_5 = 0;
  uval_2 = (int)uval >> 0x1f;
  local_e0 = (uval ^ uval_2) - uval_2;
  loop_i = 0;
  uval_3 = (int)uval_4 >> 0x1f;
  if (((((int)((uval_4 ^ uval_3) - uval_3) < local_e0) && (local_10 < arg_ebx)) ||
      ((local_e0 = (uval ^ uval_2) - uval_2, local_e0 < (int)((uval_4 ^ uval_3) - uval_3) &&
       (local_20 < local_1c)))) ||
     ((local_e0 = (uval ^ uval_2) - uval_2, (uval_4 ^ uval_3) - uval_3 == local_e0 &&
      (local_10 < arg_ebx)))) {
    local_ec = local_20;
    local_e4 = local_1c;
    val_2 = local_10;
  }
  else {
    local_ec = local_1c;
    local_e4 = local_20;
    val_2 = arg_ebx;
    arg_ebx = local_10;
  }
  local_a8 = &stack0xffffff10;
  local_bc = &local_ec;
  local_d0 = &stack0xffffff18;
  local_dc = &local_e4;
  local_18 = arg_ebx - val_2;
  local_50 = local_e4 - local_ec;
  local_44 = arg_ebx;
  local_34 = val_2;
  if ((local_ec < 0) && (local_e4 < 0)) {
    flag = false;
  }
  else {
    val = local_ec;
    if (local_ec < 0) {
      if (local_18 != 0) {
        local_34 = val_2 + ((local_18 * 0x100 * -local_ec) / local_50 >> 8);
      }
      val = 0;
    }
    val_3 = local_e4;
    if (local_e4 < 0) {
      if (local_18 != 0) {
        local_44 = arg_ebx + ((local_18 * 0x100 * -local_e4) / local_50 >> 8);
      }
      val_3 = 0;
    }
    if ((val < 0) || (val_3 < 0)) {
      flag = false;
    }
    else {
      flag = true;
      local_ec = val;
      local_e4 = val_3;
    }
  }
  if (flag) {
    local_a4 = &stack0xffffff10;
    local_a0 = &local_ec;
    local_9c = &stack0xffffff18;
    local_98 = &local_e4;
    local_28 = arg_ebx - val_2;
    local_5c = local_e4 - local_ec;
    val = g_my_player_word >> 0x18;
    local_c4 = (uint)*(ushort *)(&g_bss_0019d50e + val * 0x4ef);
    local_c8 = (uint)g_units_per_pixel;
    local_48 = val_2;
    local_38 = arg_ebx;
    if ((local_ec < (int)(local_c4 / local_c8)) || (local_e4 < (int)(local_c4 / local_c8))) {
      local_60 = (uint)*(ushort *)(&g_bss_0019d50e + val * 0x4ef);
      local_6c = (uint)g_units_per_pixel;
      val_3 = local_ec;
      if ((int)(local_60 / local_6c) <= local_ec) {
        if (local_28 != 0) {
          local_48 = val_2 + ((int)(((local_28 * 0x100) / local_5c) *
                                   ((local_60 / local_6c - 1) - local_ec)) >> 8);
        }
        val_3 = (uint)*(ushort *)(&g_bss_0019d50e + val * 0x4ef) / (uint)g_units_per_pixel - 1;
      }
      local_b4 = (uint)*(ushort *)(&g_bss_0019d50e + val * 0x4ef);
      local_94 = (uint)g_units_per_pixel;
      val_4 = local_e4;
      if ((int)(local_b4 / local_94) <= local_e4) {
        if (local_28 != 0) {
          local_38 = arg_ebx +
                     ((int)(((local_28 * 0x100) / local_5c) * ((local_b4 / local_94 - 1) - local_e4)
                           ) >> 8);
        }
        val_4 = (uint)*(ushort *)(&g_bss_0019d50e + val * 0x4ef) / (uint)g_units_per_pixel - 1;
      }
      local_ac = (uint)*(ushort *)(&g_bss_0019d50e + val * 0x4ef);
      local_64 = (uint)g_units_per_pixel;
      if ((val_3 < (int)(local_ac / local_64)) && (val_4 < (int)(local_ac / local_64))) {
        flag = true;
        local_ec = val_3;
        local_e4 = val_4;
      }
      else {
        flag = false;
      }
    }
    else {
      flag = false;
    }
    if (flag) {
      local_74 = &stack0xffffff10;
      local_90 = &local_ec;
      local_80 = &stack0xffffff18;
      local_78 = &local_e4;
      local_3c = local_ec;
      local_40 = local_e4;
      local_58 = arg_ebx - val_2;
      local_24 = local_e4 - local_ec;
      if ((val_2 < 0) && (arg_ebx < 0)) {
        flag = false;
      }
      else {
        val_3 = val_2;
        if (val_2 < 0) {
          if (local_24 != 0) {
            local_3c = local_ec + ((local_24 * 0x100 * -val_2) / local_58 >> 8);
          }
          val_3 = 0;
        }
        val_4 = arg_ebx;
        if (arg_ebx < 0) {
          if (local_24 != 0) {
            local_40 = local_e4 + ((-arg_ebx * local_24 * 0x100) / local_58 >> 8);
          }
          val_4 = 0;
        }
        if ((val_3 < 0) || (val_4 < 0)) {
          flag = false;
        }
        else {
          local_ec = local_3c;
          local_e4 = local_40;
          flag = true;
        }
      }
      if (flag) {
        local_c0 = &stack0xffffff10;
        local_88 = &local_ec;
        local_84 = &stack0xffffff18;
        local_70 = &local_e4;
        local_30 = local_ec;
        local_4c = local_e4;
        local_54 = arg_ebx - val_2;
        local_14 = local_e4 - local_ec;
        local_cc = (uint)*(ushort *)(&g_bss_0019d50c + val * 0x4ef);
        local_b8 = (uint)g_units_per_pixel;
        if ((val_2 < (int)(local_cc / local_b8)) || (arg_ebx < (int)(local_cc / local_b8))) {
          local_7c = (uint)*(ushort *)(&g_bss_0019d50c + val * 0x4ef);
          local_68 = (uint)g_units_per_pixel;
          val_3 = val_2;
          if ((int)(local_7c / local_68) <= val_2) {
            if (local_14 != 0) {
              local_30 = local_ec +
                         ((int)(((local_14 * 0x100) / local_54) *
                               ((local_7c / local_68 - 1) - val_2)) >> 8);
            }
            val_3 = (uint)*(ushort *)(&g_bss_0019d50c + val * 0x4ef) / (uint)g_units_per_pixel - 1;
          }
          local_d4 = (uint)*(ushort *)(&g_bss_0019d50c + val * 0x4ef);
          local_d8 = (uint)g_units_per_pixel;
          val_4 = arg_ebx;
          if ((int)(local_d4 / local_d8) <= arg_ebx) {
            if (local_14 != 0) {
              local_4c = local_e4 +
                         ((int)(((local_14 * 0x100) / local_54) *
                               ((local_d4 / local_d8 - 1) - arg_ebx)) >> 8);
            }
            val_4 = (uint)*(ushort *)(&g_bss_0019d50c + val * 0x4ef) / (uint)g_units_per_pixel - 1;
          }
          local_8c = (uint)*(ushort *)(&g_bss_0019d50c + val * 0x4ef);
          local_b0 = (uint)g_units_per_pixel;
          if ((val_3 < (int)(local_8c / local_b0)) && (val_4 < (int)(local_8c / local_b0))) {
            local_ec = local_30;
            local_e4 = local_4c;
            flag = true;
          }
          else {
            flag = false;
          }
        }
        else {
          flag = false;
        }
        if ((flag) && ((val_2 != arg_ebx || (local_ec != local_e4)))) {
          val = val_2 * 0x100 + 0x80;
          local_ec = local_ec * 0x100 + 0x80;
          val_2 = arg_ebx * 0x100 + 0x80;
          local_e4 = local_e4 * 0x100 + 0x80;
          uval_2 = local_e4 - local_ec;
          uval_3 = val_2 - val;
          local_2c = uval;
          if (val == val_2) {
            loop_i = 0x100;
            val_5 = 0;
          }
          else if (local_ec == local_e4) {
            val_5 = 0x100;
            loop_i = 0;
          }
          else if (uval_3 == uval_2) {
            val_5 = 0x100;
            loop_i = 0x100;
          }
          else if (uval_3 == -uval_2) {
            val_5 = 0x100;
            loop_i = -0x100;
          }
          else {
            uval = (int)uval_3 >> 0x1f;
            local_e0 = (uval_3 ^ uval) - uval;
            uval_4 = (int)uval_2 >> 0x1f;
            if ((int)((uval_2 ^ uval_4) - uval_4) < local_e0) {
              loop_i = (int)(uval_2 * 0x100) / (int)uval_3;
              val_5 = 0x100;
            }
            else {
              local_e0 = (uval_3 ^ uval) - uval;
              if (local_e0 < (int)((uval_2 ^ uval_4) - uval_4)) {
                val_5 = (int)(uval_3 * 0x100) / (int)uval_2;
                loop_i = 0x100;
              }
            }
          }
          for (; ((val_5 == 0x100 && (val <= val_2)) ||
                 ((loop_i == 0x100 && (local_ec <= local_e4)))); local_ec = local_ec + loop_i) {
            bflib_system_io_fn_0f5390();
            val = val + val_5;
          }
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_view_state_0915dc (Original VA: 0x915dc, Ghidra: FUN_000915dc)
 * Prototype: void draw_update_player_view_state_0915dc(undefined1 param_1);
 * Address  : 0x915dc (Size: 109 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> engine3_rasterize_depth_buckets_high, engine3_rasterize_depth_buckets_low
 * Callees  : 1 -> draw_update_player_view_state_090c14
 ******************************************************************************/
void draw_update_player_view_state_0915dc(undefined1 param_1)

{
  int arg_eax;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  if (((((-1 < arg_eax) || (-1 < arg_ebx)) && ((-1 < arg_edx || (-1 < arg_ecx)))) &&
      ((arg_eax < (int)(uint)*(ushort *)(&g_bss_0019d50c + (g_my_player_word >> 0x18) * 0x4ef) ||
       (arg_ebx < (int)(uint)*(ushort *)(&g_bss_0019d50c + (g_my_player_word >> 0x18) * 0x4ef))))) &&
     ((arg_edx < (int)(uint)*(ushort *)(&g_bss_0019d50c + (g_my_player_word >> 0x18) * 0x4ef) ||
      (arg_ecx < (int)(uint)*(ushort *)(&g_bss_0019d50c + (g_my_player_word >> 0x18) * 0x4ef))))) {
    draw_update_player_view_state_090c14(param_1);
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_09164c (Original VA: 0x9164c, Ghidra: FUN_0009164c)
 * Prototype: void draw_fn_09164c(void);
 * Address  : 0x9164c (Size: 4978 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x09164c
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_fn_09164c(void)

{
  undefined4 uval;
  undefined1 uval_2;
  int arg_eax;
  int loop_i;
  int loop_i_2;
  int val;
  int extraout_ECX;
  int arg_edx;
  int val_2;
  int arg_ebx;
  int val_3;
  undefined4 *poly_write_ptr;
  undefined4 *word_ptr;
  bool flag;
  byte flag_2;
  bool flag_3;
  undefined4 local_358;
  undefined4 local_354;
  undefined2 local_350;
  int local_348;
  int local_344;
  int local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined2 local_334;
  int local_32c;
  int local_328;
  int local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined2 local_318;
  int local_310;
  int local_30c;
  int local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined2 local_2fc;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined2 local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined2 local_2c4;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined2 local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined2 local_28c;
  int local_284;
  int local_280;
  int local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined2 local_270;
  int local_268;
  int local_264;
  int local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined2 local_254;
  int local_24c;
  int local_248;
  int local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  int local_230;
  int local_22c;
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined2 local_21c;
  int local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined2 local_1e4;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined2 local_1ac;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  int local_188;
  int local_184;
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined2 local_174;
  int local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  int local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  
  val_3 = g_engine3_bss_00387e0b;
  loop_i_2 = g_engine3_bss_00387e07;
  flag_2 = 0;
  val = g_engine3_bss_00387e07 - arg_eax;
  local_50 = arg_edx - g_engine3_bss_00387e0b;
  val_2 = arg_edx - g_engine3_bss_00387e13;
  local_b4 = g_engine3_bss_00387e0f - arg_eax;
  loop_i = g_engine3_bss_00387e17 * 0x100 - arg_ebx;
  if (g_engine3_bss_00387e00 == '\0') {
    local_ac = 0x500;
  }
  else {
    local_ac = 0x200;
  }
  local_ac = local_ac - arg_ebx;
  if (local_ac <= loop_i) {
    loop_i = local_ac;
  }
  local_b8 = val;
  if (local_b4 < val) {
    g_engine3_bss_00387e07 = g_engine3_bss_00387e0f;
    g_engine3_bss_00387e0f = loop_i_2;
    local_b8 = local_b4;
    local_b4 = val;
  }
  local_b0 = val_2;
  if (val_2 < local_50) {
    g_engine3_bss_00387e0b = g_engine3_bss_00387e13;
    g_engine3_bss_00387e13 = val_3;
    local_b0 = local_50;
    local_50 = val_2;
  }
  local_a8 = local_b4;
  local_a4 = local_50;
  local_174 = 0;
  local_16c = local_b8;
  local_164 = local_50;
  val_3 = local_b8 + 0x100;
  local_168 = loop_i;
  local_3c = loop_i;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,extraout_ECX);
  loop_i_2 = val_3 - extraout_ECX;
  flag = val_3 == extraout_ECX;
  while (val_2 = local_b0, val = local_b4, flag || flag_3 != loop_i_2 < 0) {
    local_148 = local_a4;
    local_158 = 0;
    local_150 = val_3;
    local_14c = loop_i;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_1c = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_164 + local_148) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val * -0x10) - (uint)(val << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_17c;
      g_render_poly_write_ptr[3] = local_178;
      g_render_poly_write_ptr[4] = local_160;
      g_render_poly_write_ptr[5] = local_15c;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_160;
    word_ptr = &local_17c;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    val_3 = val_3 + 0x100;
    flag_3 = SBORROW4(val_3,local_a8);
    loop_i_2 = val_3 - local_a8;
    flag = val_3 == local_a8;
  }
  local_a0 = local_b4;
  local_110 = local_b0;
  local_9c = local_3c;
  local_120 = 0;
  local_118 = local_b8;
  local_114 = local_3c;
  val_3 = local_b8 + 0x100;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,val);
  loop_i_2 = val_3 - val;
  flag = val_3 == val;
  while (loop_i = local_ac, flag || flag_3 != loop_i_2 < 0) {
    local_12c = val_2;
    local_130 = local_9c;
    local_13c = 0;
    local_134 = val_3;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_34 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_110 + local_12c) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      loop_i = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + loop_i * -0x10) - (uint)(loop_i << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_128;
      g_render_poly_write_ptr[3] = local_124;
      g_render_poly_write_ptr[4] = local_144;
      g_render_poly_write_ptr[5] = local_140;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_144;
    word_ptr = &local_128;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    val_3 = val_3 + 0x100;
    flag_3 = SBORROW4(val_3,local_a0);
    loop_i_2 = val_3 - local_a0;
    flag = val_3 == local_a0;
  }
  local_98 = local_b4;
  local_94 = local_50;
  local_29c = local_ac;
  local_2a0 = local_b8;
  local_2a8 = 0;
  local_298 = local_50;
  val_3 = local_b8 + 0x100;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,local_b4);
  loop_i_2 = val_3 - local_b4;
  flag = val_3 == local_b4;
  while (val = local_ac, flag || flag_3 != loop_i_2 < 0) {
    local_1d4 = local_94;
    local_1e4 = 0;
    local_1d8 = loop_i;
    local_1dc = val_3;
    (*g_engine3_bss_00388300)();
    val = local_98;
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_38 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_298 + local_1d4) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val_2 = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val_2 * -0x10) - (uint)(val_2 << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_2b0;
      g_render_poly_write_ptr[3] = local_2ac;
      g_render_poly_write_ptr[4] = local_1ec;
      g_render_poly_write_ptr[5] = local_1e8;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    val_3 = val_3 + 0x100;
    poly_write_ptr = &local_1ec;
    word_ptr = &local_2b0;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    flag_3 = SBORROW4(val_3,val);
    loop_i_2 = val_3 - val;
    flag = val_3 == val;
  }
  local_90 = local_b4;
  local_8c = local_b0;
  local_2d8 = local_b8;
  local_2d0 = local_b0;
  local_2d4 = local_ac;
  local_2e0 = 0;
  val_3 = local_b8 + 0x100;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,local_b4);
  loop_i_2 = val_3 - local_b4;
  flag = val_3 == local_b4;
  while (loop_i = local_b8, flag || flag_3 != loop_i_2 < 0) {
    local_248 = val;
    local_244 = local_8c;
    local_254 = 0;
    local_24c = val_3;
    (*g_engine3_bss_00388300)();
    loop_i = local_90;
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_28 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_2d0 + local_244) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val_2 = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val_2 * -0x10) - (uint)(val_2 << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_2e8;
      g_render_poly_write_ptr[3] = local_2e4;
      g_render_poly_write_ptr[4] = local_25c;
      g_render_poly_write_ptr[5] = local_258;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    val_3 = val_3 + 0x100;
    poly_write_ptr = &local_25c;
    word_ptr = &local_2e8;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    flag_3 = SBORROW4(val_3,loop_i);
    loop_i_2 = val_3 - loop_i;
    flag = val_3 == loop_i;
  }
  local_88 = local_b0;
  local_fc = local_b8;
  local_84 = local_3c;
  local_104 = 0;
  local_f4 = local_50;
  local_f8 = local_3c;
  val_3 = local_50 + 0x100;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,local_b0);
  loop_i_2 = val_3 - local_b0;
  flag = val_3 == local_b0;
  while (flag || flag_3 != loop_i_2 < 0) {
    local_2f4 = loop_i;
    local_2f0 = local_84;
    local_2fc = 0;
    local_2ec = val_3;
    (*g_engine3_bss_00388300)();
    val = local_88;
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_30 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_f4 + local_2ec) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val_2 = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val_2 * -0x10) - (uint)(val_2 << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_10c;
      g_render_poly_write_ptr[3] = local_108;
      g_render_poly_write_ptr[4] = local_304;
      g_render_poly_write_ptr[5] = local_300;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    val_3 = val_3 + 0x100;
    poly_write_ptr = &local_304;
    word_ptr = &local_10c;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    flag_3 = SBORROW4(val_3,val);
    loop_i_2 = val_3 - val;
    flag = val_3 == val;
  }
  local_80 = local_b4;
  local_7c = local_b0;
  local_78 = local_3c;
  local_e0 = local_b4;
  local_d8 = local_50;
  local_e8 = 0;
  local_dc = local_3c;
  val_3 = local_50 + 0x100;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,local_b0);
  loop_i_2 = val_3 - local_b0;
  flag = val_3 == local_b0;
  while (loop_i = local_50, val = local_b0, flag || flag_3 != loop_i_2 < 0) {
    local_310 = local_80;
    local_318 = 0;
    local_30c = local_78;
    local_308 = val_3;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_d8 + local_308) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      loop_i = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + loop_i * -0x10) - (uint)(loop_i << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_f0;
      g_render_poly_write_ptr[3] = local_ec;
      g_render_poly_write_ptr[4] = local_320;
      g_render_poly_write_ptr[5] = local_31c;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_320;
    word_ptr = &local_f0;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    val_3 = val_3 + 0x100;
    flag_3 = SBORROW4(val_3,local_7c);
    loop_i_2 = val_3 - local_7c;
    flag = val_3 == local_7c;
  }
  local_74 = local_b8;
  local_70 = local_ac;
  local_214 = local_b8;
  local_20c = local_50;
  local_210 = local_ac;
  local_21c = 0;
  (*g_engine3_bss_00388300)();
  while (loop_i = loop_i + 0x100, loop_i <= val) {
    local_1a4 = local_74;
    local_1a0 = local_70;
    local_1ac = 0;
    local_19c = loop_i;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_2c = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_20c + local_19c) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val_3 = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val_3 * -0x10) - (uint)(val_3 << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_224;
      g_render_poly_write_ptr[3] = local_220;
      g_render_poly_write_ptr[4] = local_1b4;
      g_render_poly_write_ptr[5] = local_1b0;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_1b4;
    word_ptr = &local_224;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
  }
  local_6c = local_b4;
  local_68 = local_b0;
  local_64 = local_ac;
  local_284 = local_b4;
  local_28c = 0;
  local_27c = local_50;
  local_280 = local_ac;
  val_3 = local_50 + 0x100;
  (*g_engine3_bss_00388300)();
  flag_3 = SBORROW4(val_3,local_b0);
  loop_i_2 = val_3 - local_b0;
  flag = val_3 == local_b0;
  while (loop_i = local_3c, val = local_ac, flag || flag_3 != loop_i_2 < 0) {
    local_1c0 = local_6c;
    local_1bc = local_64;
    local_1c8 = 0;
    local_1b8 = val_3;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_27c + local_1b8) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      loop_i = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + loop_i * -0x10) - (uint)(loop_i << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_294;
      g_render_poly_write_ptr[3] = local_290;
      g_render_poly_write_ptr[4] = local_1d0;
      g_render_poly_write_ptr[5] = local_1cc;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_1d0;
    word_ptr = &local_294;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    val_3 = val_3 + 0x100;
    flag_3 = SBORROW4(val_3,local_68);
    loop_i_2 = val_3 - local_68;
    flag = val_3 == local_68;
  }
  local_60 = local_b8;
  local_5c = local_50;
  local_32c = local_b8;
  local_324 = local_50;
  local_334 = 0;
  local_328 = local_3c;
  (*g_engine3_bss_00388300)();
  while (loop_i_2 = local_3c, val_3 = local_ac, loop_i = loop_i + 0x100, loop_i <= val) {
    local_230 = local_60;
    local_238 = 0;
    local_228 = local_5c;
    local_22c = loop_i;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_18 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_324 + local_228) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val_3 = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val_3 * -0x10) - (uint)(val_3 << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_33c;
      g_render_poly_write_ptr[3] = local_338;
      g_render_poly_write_ptr[4] = local_240;
      g_render_poly_write_ptr[5] = local_23c;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_240;
    word_ptr = &local_33c;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
  }
  local_58 = local_b4;
  local_54 = local_50;
  local_348 = local_b4;
  local_340 = local_50;
  local_344 = local_3c;
  local_350 = 0;
  (*g_engine3_bss_00388300)();
  while (loop_i = local_3c, val = local_ac, loop_i_2 = loop_i_2 + 0x100, loop_i_2 <= val_3) {
    local_2bc = local_58;
    local_2b4 = local_54;
    local_2c4 = 0;
    local_2b8 = loop_i_2;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_24 = g_engine3_bss_00387e02._3_1_;
    loop_i = (local_340 + local_2b4) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val = loop_i >> 0x1f;
      loop_i = ((int)((loop_i + val * -0x10) - (uint)(val << 3 < 0)) >> 4) + -2;
      if (loop_i < 0) {
        loop_i = 0;
      }
      else if (0x2be < loop_i) {
        loop_i = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_358;
      g_render_poly_write_ptr[3] = local_354;
      g_render_poly_write_ptr[4] = local_2cc;
      g_render_poly_write_ptr[5] = local_2c8;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_2cc;
    word_ptr = &local_358;
    for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
  }
  local_4c = local_b4;
  local_48 = local_b0;
  local_188 = local_b4;
  local_190 = 0;
  local_180 = local_b0;
  local_184 = local_3c;
  (*g_engine3_bss_00388300)();
  while (loop_i_2 = local_3c, val_3 = local_ac, loop_i = loop_i + 0x100, loop_i <= val) {
    local_268 = local_4c;
    local_260 = local_48;
    local_270 = 0;
    local_264 = loop_i;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_20 = g_engine3_bss_00387e02._3_1_;
    loop_i_2 = (local_180 + local_260) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val_3 = loop_i_2 >> 0x1f;
      loop_i_2 = ((int)((loop_i_2 + val_3 * -0x10) - (uint)(val_3 << 3 < 0)) >> 4) + -2;
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x2be < loop_i_2) {
        loop_i_2 = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i_2];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i_2] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_198;
      g_render_poly_write_ptr[3] = local_194;
      g_render_poly_write_ptr[4] = local_278;
      g_render_poly_write_ptr[5] = local_274;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_278;
    word_ptr = &local_198;
    for (loop_i_2 = 7; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
  }
  local_44 = local_b8;
  local_40 = local_b0;
  local_1f8 = local_b8;
  local_1f0 = local_b0;
  local_200 = 0;
  local_1f4 = local_3c;
  (*g_engine3_bss_00388300)();
  while (loop_i_2 = loop_i_2 + 0x100, loop_i_2 <= val_3) {
    local_c4 = local_44;
    local_bc = local_40;
    local_cc = 0;
    local_c0 = loop_i_2;
    (*g_engine3_bss_00388300)();
    uval_2 = g_engine3_bss_00387e02._3_1_;
    local_14 = g_engine3_bss_00387e02._3_1_;
    loop_i = (local_1f0 + local_bc) / 2;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      val = loop_i >> 0x1f;
      loop_i = ((int)((loop_i + val * -0x10) - (uint)(val << 3 < 0)) >> 4) + -2;
      if (loop_i < 0) {
        loop_i = 0;
      }
      else if (0x2be < loop_i) {
        loop_i = 0x2be;
      }
      uval = (&g_key_to_ascii_table)[loop_i];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = local_208;
      g_render_poly_write_ptr[3] = local_204;
      g_render_poly_write_ptr[4] = local_d4;
      g_render_poly_write_ptr[5] = local_d0;
      poly_write_ptr = g_render_poly_write_ptr + 6;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
      *(undefined1 *)poly_write_ptr = uval_2;
    }
    poly_write_ptr = &local_d4;
    word_ptr = &local_208;
    for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr = *poly_write_ptr;
      poly_write_ptr = poly_write_ptr + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_fn_0929c0 (Original VA: 0x929c0, Ghidra: FUN_000929c0)
 * Prototype: void draw_fn_0929c0(void);
 * Address  : 0x929c0 (Size: 541 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x0929c0
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 1 -> file_data_ceiling_txt_02d32d
 ******************************************************************************/
void draw_fn_0929c0(void)

{
  int val;
  ushort uval;
  int val_2;
  int val_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_3;
  uint uval_2;
  uint uval_3;
  int val_4;
  int val_5;
  int val_6;
  ushort local_1c;
  undefined4 *word_ptr_2;
  
  uval_3 = 0;
  val_4 = 0;
  do {
    uval_2 = 1;
    val_2 = 0;
    do {
      val_3 = val_2;
      if ((uval_3 & uval_2) == 0) break;
      val_2 = val_2 + 1;
      uval_2 = uval_2 * 2;
      val_3 = val_2;
    } while (val_2 < 8);
    for (; (val_2 < 8 && ((uval_3 & uval_2) == 0)); uval_2 = uval_2 * 2) {
      val_2 = val_2 + 1;
    }
    val_5 = 0;
    val_6 = 0;
    val = val_2;
    if (val_2 < 8) {
      for (; (val_5 = val, val_6 = val_2, val_5 < 8 && ((uval_3 & uval_2) != 0));
          uval_2 = uval_2 * 2) {
        val = val_5 + 1;
      }
    }
    uval_3 = uval_3 + 1;
    *(int *)((int)&g_bss_00377770 + val_4) = val_6;
    *(int *)((int)&g_bss_00377b70 + val_4) = val_5;
    *(int *)((int)&g_bss_00377f70 + val_4) = val_3;
    val_4 = val_4 + 4;
    if (0xff < (int)uval_3) {
      val_4 = 0;
      word_ptr_3 = &g_bss_00378774;
      do {
        word_ptr = &g_bss_00378374 + val_4 * 0x100;
        do {
          word_ptr_2 = word_ptr + 8;
          *word_ptr = 0;
          word_ptr[1] = 0;
          word_ptr[2] = 0;
          word_ptr[3] = 0;
          word_ptr[4] = 0;
          word_ptr[5] = 0;
          word_ptr = word_ptr_2;
        } while (word_ptr_2 != word_ptr_3);
        val_4 = val_4 + 1;
        word_ptr_3 = word_ptr_3 + 0x100;
      } while (val_4 < 4);
      local_1c = 0;
      val_4 = 0;
      do {
        uval = local_1c * 0x24a1 + 0x24df;
        (&g_bss_00378774)[val_4 * 8] = (uint)(uval % 0xffa7) % 0x7f - 0x3f;
        uval = uval * 0x24a1 + 0x24df;
        (&g_bss_00378778)[val_4 * 8] = (int)((uint)(uval % 0xffa7) % 0x7f - 0x3f) / 3;
        uval = uval * 0x24a1 + 0x24df;
        (&g_bss_0037877c)[val_4 * 8] = (uint)(uval % 0xffa7) % 0x7f - 0x3f;
        uval = uval * 0x24a1 + 0x24df;
        (&g_bss_00378780)[val_4 * 8] = (uint)(uval % 0xffa7) % 0x800 - 0x400;
        uval = uval * 0x24a1 + 0x24df;
        (&g_bss_00378b74)[val_4 * 8] = (uint)(uval % 0xffa7) % 0x7f - 0x3f;
        local_1c = uval * 0x24a1 + 0x24df;
        val_2 = val_4 + 1;
        (&g_bss_00378b7c)[val_4 * 8] = (uint)(local_1c % 0xffa7) % 0x7f - 0x3f;
        val_4 = val_2;
      } while (val_2 < 0x20);
      file_data_ceiling_txt_02d32d();
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : draw_update_player_view_state_092be0 (Original VA: 0x92be0, Ghidra: FUN_00092be0)
 * Prototype: void draw_update_player_view_state_092be0(void);
 * Address  : 0x92be0 (Size: 301 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_update_player_view_state_092be0(void)

{
  uint uval;
  int val;
  int *int_ptr;
  undefined4 *word_ptr;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  
  uval = 0;
  word_ptr = &g_bss_00378b74;
  do {
    val = (&g_slab_attr_table)
            [(((int)uval >> 2) + (uval & 3) * ((int)uval >> 2)) * 0x200 + g_bss_00378370 & 0x7ff];
    word_ptr[1] = val >> 0xb;
    uval = uval + 1;
    word_ptr[3] = val >> 6;
    word_ptr = word_ptr + 8;
  } while ((int)uval < 0x10);
  g_bss_00378370 = g_bss_00378370 + 0x2e & 0x7ff;
  val = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
          (int)(uint)g_units_per_pixel;
  val_5 = g_engine3_bss_00387d58 * val;
  val_6 = g_engine3_bss_00387d60 * val;
  val_2 = g_engine3_bss_00387d68 * val;
  val_3 = g_engine3_bss_00387d70 * val;
  val = val * g_engine3_bss_00387d6c;
  val_4 = 0;
  int_ptr = &g_bss_00378774;
  do {
    int_ptr[4] = (*int_ptr * (val_5 >> 0xe) >> 8) + (int_ptr[2] * (val_6 >> 0xe) >> 8);
    val_4 = val_4 + 1;
    int_ptr[5] = (-((val_3 >> 0xe) * int_ptr[2] >> 8) - ((val_2 >> 0xe) * *int_ptr >> 8)) -
                ((val >> 0xe) * int_ptr[1] >> 8);
    int_ptr = int_ptr + 8;
  } while (val_4 < 0x40);
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_092d10 (Original VA: 0x92d10, Ghidra: FUN_00092d10)
 * Prototype: void draw_process_map_subtile_092d10(void);
 * Address  : 0x92d10 (Size: 1037 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_process_map_subtile_092d10(void)

{
  uint uval;
  int val;
  int arg_eax;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  uint uval_5;
  int thing_ptr;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint uval_6;
  int arg_edx;
  int val_2;
  int *arg_ebx;
  int val_3;
  int val_4;
  uint uval_7;
  uint uval_8;
  int *int_ptr;
  uint local_3c;
  uint local_38;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_18;
  
  if ((-1 < arg_edx) && (arg_edx < 0xff)) {
    thing_ptr = arg_ebx[2];
    if (*arg_ebx < arg_ebx[2]) {
      thing_ptr = *arg_ebx;
    }
    val_3 = arg_ebx[3];
    if (val_3 < arg_ebx[1]) {
      val_3 = arg_ebx[1];
    }
    if (arg_eax + thing_ptr < 1) {
      thing_ptr = 1 - arg_eax;
    }
    if (0xff < arg_eax + val_3) {
      val_3 = 0xff - arg_eax;
    }
    g_engine3_bss_00387d98 = g_engine3_bss_00387d98 + thing_ptr * 0x100;
    local_20 = arg_eax + thing_ptr;
    local_24 = g_bss_0038721c + (thing_ptr + 0x1f) * 0x1c0; /* thing->class_id */
    val_2 = arg_edx + 1;
    uval_2 = *(ushort *)((int)&g_bss_0019e973 + g_bss_002e6f23 * 0x18 + 3) + 0x10000;
    val_4 = (local_20 + val_2 * 0x100) * 5;
    local_18 = (int)&g_map_subtiles + val_4;
    local_3c = uval_2;
    if (((uint)g_bss_00379395 & *(uint *)(&g_bss_002791ff + val_4) >> 0x1c) != 0) {
      local_3c = (uint)*(ushort *)
                        ((int)&g_bss_0019e973 + (*(uint *)(&g_bss_002791ff + val_4) & 0x7ff) * 0x18 + 3
                        );
    }
    uval_3 = uval_2;
    if (((uint)g_bss_00379395 & *(uint *)(&g_bss_00278cff + val_4) >> 0x1c) != 0) {
      uval_3 = (uint)*(ushort *)
                     ((int)&g_bss_0019e973 + (*(uint *)(&g_bss_00278cff + val_4) & 0x7ff) * 0x18 + 3);
    }
    local_38 = local_3c | uval_3;
    local_2c = 0;
    local_3c = local_3c & uval_3;
    uval_3 = val_2 * 4 & 0xf;
    thing_ptr = (val_3 + 1) - thing_ptr;
    local_28 = local_20 * 2 + val_2 * 0x200;
    if (0 < thing_ptr) {
      do {
        uval_7 = uval_2;
        if ((*(uint *)(local_18 + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
          uval_7 = (uint)*(ushort *)
                          ((int)&g_bss_0019e973 + (*(uint *)(local_18 + 1) & 0x7ff) * 0x18 + 3);
        }
        uval_5 = uval_2;
        if ((*(uint *)(local_18 + -0x4ff) >> 0x1c & (uint)g_bss_00379395) != 0) {
          uval_5 = (uint)*(ushort *)
                         ((int)&g_bss_0019e973 + (*(uint *)(local_18 + -0x4ff) & 0x7ff) * 0x18 + 3);
        }
        local_38 = local_38 | uval_7 | uval_5;
        if ((local_38 & 0x10000) == 0) {
          uval_6 = (uint)*(ushort *)((int)&g_bss_001e3203 + local_28);
        }
        else {
          uval_6 = 0;
        }
        uval_4 = (uint)(byte)(&g_data_00191dac)[local_38 & 0xff];
        uval = (&g_bss_00377f70)[local_3c & uval_5 & uval_7 & 0xff];
        val_4 = uval * 0x1c + local_24;
        val_2 = uval * 0x100 - g_engine3_bss_00387da0;
        int_ptr = &g_bss_00378374 +
                  ((*(uint *)(local_18 + 1) & 0xffffff) >> 0x16) * 0x100 +
                  ((local_20 & 3) + uval_3) * 8;
        val_3 = uval - uval_4;
        uval_8 = uval;
        while (uval_8 == uval_4 || SBORROW4(uval_8,uval_4) != val_3 < 0) {
          *(int *)(val_4 + 0x10) = g_engine3_bss_00387d98 + *int_ptr;
          *(int *)(val_4 + 0x14) = val_2 + int_ptr[1];
          val = g_engine3_bss_00387d9c;
          val_3 = int_ptr[2];
          *(undefined2 *)(val_4 + 8) = 0;
          *(int *)(val_4 + 0x18) = val + val_3;
          val_3 = uval_6 + int_ptr[3];
          if (val_3 < 0) {
            val_3 = 0;
          }
          if (0x3f00 < val_3) {
            val_3 = 0x3f00;
          }
          int_ptr = int_ptr + 0x10;
          val_2 = val_2 + 0x100;
          uval_8 = uval_8 + 1;
          *(short *)(val_4 + 10) = (short)val_3;
          (*g_engine3_bss_00388300)();
          val_4 = val_4 + 0x1c;
          uval_6 = extraout_ECX;
          val_3 = uval_8 - uval_4;
        }
        val_3 = ((*(uint *)(local_18 + 1) & 0xfffffff) >> 0x18) * 0x100 - g_engine3_bss_00387da0;
        int_ptr = int_ptr + -0x10;
        if ((*(uint *)(local_18 + 1) & 0xc00000) == 0x800000) {
          int_ptr = &g_bss_00378774 + ((local_20 & 3) + uval_3) * 8 + (uval_4 - uval) * 0x10;
        }
        *(int *)(local_24 + 0xf0) = g_engine3_bss_00387d98 + *int_ptr;
        local_28 = local_28 + 2;
        *(int *)(local_24 + 0xf4) = val_3 + int_ptr[1];
        val_4 = g_engine3_bss_00387d9c;
        val_3 = int_ptr[2];
        *(undefined2 *)(local_24 + 0xe8) = 0;
        *(short *)(local_24 + 0xea) = (short)uval_6;
        local_2c = local_2c + 1;
        *(int *)(local_24 + 0xf8) = val_4 + val_3;
        (*g_engine3_bss_00388300)();
        local_18 = extraout_ECX_00 + 5;
        local_20 = local_20 + 1;
        local_24 = local_24 + 0x1c0;
        g_engine3_bss_00387d98 = g_engine3_bss_00387d98 + 0x100;
        local_3c = uval_5 & uval_7;
        local_38 = uval_7 | uval_5;
      } while (local_2c < thing_ptr);
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_093120 (Original VA: 0x93120, Ghidra: FUN_00093120)
 * Prototype: void draw_process_map_subtile_093120(void);
 * Address  : 0x93120 (Size: 1975 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_process_map_subtile_093120(void)

{
  byte flag;
  int val;
  bool flag_2;
  bool flag_3;
  int arg_eax;
  uint uval;
  int val_2;
  int val_3;
  uint uval_2;
  int *int_ptr;
  int val_4;
  uint *word_ptr;
  int arg_edx;
  int val_5;
  int val_6;
  int val_7;
  uint uval_3;
  int *arg_ebx;
  uint uval_4;
  int val_8;
  undefined4 *word_ptr_2;
  int val_9;
  int val_10;
  bool flag_4;
  bool flag_5;
  int local_8c;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_68;
  uint local_44;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_18;
  int local_14;
  
  if ((-1 < arg_edx) && (arg_edx < 0xff)) {
    local_2c = arg_ebx[2];
    if (*arg_ebx < local_2c) {
      local_2c = *arg_ebx;
    }
    val_9 = arg_ebx[3];
    if (val_9 < arg_ebx[1]) {
      val_9 = arg_ebx[1];
    }
    flag_2 = arg_eax + local_2c < 1;
    if (flag_2) {
      local_2c = 1 - arg_eax;
    }
    flag_3 = 0xff < arg_eax + val_9;
    if (flag_3) {
      val_9 = 0xff - arg_eax;
    }
    if (local_2c <= val_9) {
      flag_4 = arg_edx == 0;
      flag_5 = arg_edx == 0xfe;
      g_engine3_bss_00387d98 = g_engine3_bss_00387d98 + local_2c * 0x100;
      local_30 = arg_eax + local_2c;
      local_38 = g_bss_0038721c + (local_2c + 0x1f) * 0x1c0;
      val_4 = arg_edx + 1;
      uval = *(ushort *)((int)&g_bss_0019e973 + g_bss_002e6f23 * 0x18 + 3) + 0x10000;
      val_2 = (local_30 + val_4 * 0x100) * 5;
      local_28 = (int)&g_map_subtiles + val_2;
      uval_4 = uval;
      if (((uint)g_bss_00379395 & *(uint *)(&g_bss_002791ff + val_2) >> 0x1c) != 0) {
        uval_4 = (uint)*(ushort *)
                        ((int)&g_bss_0019e973 + (*(uint *)(&g_bss_002791ff + val_2) & 0x7ff) * 0x18 + 3)
        ;
      }
      local_68 = uval;
      if (((uint)g_bss_00379395 & *(uint *)(&g_bss_00278cff + val_2) >> 0x1c) != 0) {
        local_68 = (uint)*(ushort *)
                          ((int)&g_bss_0019e973 +
                          (*(uint *)(&g_bss_00278cff + val_2) & 0x7ff) * 0x18 + 3);
      }
      if ((flag_4 || (flag_3 || flag_2)) || flag_5) {
        if ((flag_2) || (flag_4)) {
          uval_4 = 0;
        }
        if ((flag_2) || (flag_5)) {
          local_68 = 0;
        }
      }
      val_8 = -g_engine3_bss_00387da0;
      val_2 = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)g_units_per_pixel;
      val_3 = g_engine3_bss_00387d98 * val_8;
      local_8c = (g_view_render_radius * 0x100 +
                 (g_engine3_bss_00387d9c * g_engine3_bss_00387d80 +
                  (((g_engine3_bss_00387d78 + val_8) * (g_engine3_bss_00387d7c + g_engine3_bss_00387d98) - g_engine3_bss_00387d84) - val_3
                  ) >> 0xe) + g_engine3_bss_00387d54) / 2;
      if (local_8c < 0x20) {
        local_8c = 0;
      }
      else if (0x2bdf < local_8c) {
        local_8c = 0x2be0;
      }
      local_18 = (g_viewport_center_x +
                 ((((((g_engine3_bss_00387d58 + val_8) * (g_engine3_bss_00387d5c + g_engine3_bss_00387d98) - g_engine3_bss_00387d64) -
                    val_3) + g_engine3_bss_00387d9c * g_engine3_bss_00387d60 >> 0xe) + g_engine3_bss_00387d4c) * val_2 >> 0x10)) *
                 0x100;
      local_80 = (g_viewport_center_y -
                 (val_2 * (((((g_engine3_bss_00387d68 + val_8) * (g_engine3_bss_00387d6c + g_engine3_bss_00387d98) -
                             g_engine3_bss_00387d74) - val_3) + g_engine3_bss_00387d9c * g_engine3_bss_00387d70 >> 0xe) +
                          g_engine3_bss_00387d50) >> 0x10)) * 0x100;
      local_34 = local_8c;
      val_2 = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)g_units_per_pixel;
      val_5 = g_engine3_bss_00387d58 * val_2;
      val_6 = -g_engine3_bss_00387d68;
      val_3 = -(val_2 * g_engine3_bss_00387d6c) >> 0xe;
      val_7 = g_engine3_bss_00387d78 >> 7;
      val_8 = g_engine3_bss_00387d7c >> 7;
      local_2c = (val_9 + 1) - local_2c;
      if (local_2c != 0) {
        local_7c = local_30 * 2 + val_4 * 0x200;
        local_3c = local_30 + val_4 * 0x11;
        local_84 = local_68 & uval_4;
        local_44 = local_68 | uval_4;
        do {
          uval_4 = uval;
          if ((*(uint *)(local_28 + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
            uval_4 = (uint)*(ushort *)
                            ((int)&g_bss_0019e973 + (*(uint *)(local_28 + 1) & 0x7ff) * 0x18 + 3);
          }
          uval_2 = uval;
          if ((*(uint *)(local_28 + -0x4ff) >> 0x1c & (uint)g_bss_00379395) != 0) {
            uval_2 = (uint)*(ushort *)
                           ((int)&g_bss_0019e973 + (*(uint *)(local_28 + -0x4ff) & 0x7ff) * 0x18 + 3);
          }
          if ((flag_4 || (flag_3 || flag_2)) || flag_5) {
            if ((flag_3) && (local_2c == 1)) {
              uval_4 = 0;
              uval_2 = 0;
            }
            if (flag_4) {
              uval_4 = 0;
            }
            if (flag_5) {
              uval_2 = 0;
            }
          }
          local_44 = local_44 | uval_4 | uval_2;
          flag = (&g_data_00191dac)[local_44 & 0xff];
          local_14 = (&g_bss_00377f70)[local_84 & uval_4 & uval_2 & 0xff];
          if ((local_44 & 0x10000) == 0) {
            uval_3 = (uint)*(ushort *)((int)&g_bss_001e3203 + local_7c);
          }
          else {
            uval_3 = 0;
          }
          int_ptr = (int *)(local_14 * 0x1c + local_38);
          word_ptr_2 = &g_bss_00378374 +
                    ((*(uint *)(local_28 + 1) & 0xffffff) >> 0x16) * 0x100 +
                    ((val_4 * 4 & 0xfU) + (local_30 & 3)) * 8;
          val_9 = val_3 * local_14 + local_80;
          val_10 = val_8 * local_14 + local_34;
          if (local_14 <= (int)(uint)flag) {
            word_ptr = &g_bss_002f10e3 + (local_3c & 0xff) + local_14;
            do {
              *int_ptr = local_18 + word_ptr_2[4] >> 8;
              val = word_ptr_2[5];
              *(undefined2 *)(int_ptr + 2) = 0;
              int_ptr[6] = val_10;
              int_ptr[1] = val + val_9 >> 8;
              uval_3 = uval_3 + (*word_ptr & 0xff) * 4 + -0x200;
              if ((int)uval_3 < 0) {
                uval_3 = 0;
              }
              if (0x3e00 < (int)uval_3) {
                uval_3 = 0x3e00;
              }
              *(short *)((int)int_ptr + 10) = (short)uval_3;
              if (int_ptr[6] < 0x20) {
                int_ptr[6] = 0;
              }
              else if (0x2bdf < int_ptr[6]) {
                int_ptr[6] = 0x2be0;
              }
              if (*int_ptr < 0) {
                *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 8;
              }
              else if (g_data_0018429c <= *int_ptr) {
                *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x10;
              }
              if (int_ptr[1] < 0) {
                *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x20;
              }
              else if (g_data_001842a0 <= int_ptr[1]) {
                *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x40;
              }
              val_9 = val_9 + val_3;
              word_ptr_2 = word_ptr_2 + 0x10;
              val_10 = val_10 + val_8;
              int_ptr = int_ptr + 7;
              local_14 = local_14 + 1;
              word_ptr = word_ptr + 1;
            } while (local_14 <= (int)(uint)flag);
          }
          local_7c = local_7c + 2;
          local_3c = local_3c + 1;
          local_30 = local_30 + 1;
          local_38 = local_38 + 0x1c0;
          g_engine3_bss_00387d98 = g_engine3_bss_00387d98 + 0x100;
          local_28 = local_28 + 5;
          local_18 = local_18 + (val_5 >> 0xe);
          local_80 = local_80 + (val_6 * val_2 >> 0xe);
          local_34 = local_34 + val_7;
          local_2c = local_2c + -1;
          local_84 = uval_4 & uval_2;
          local_44 = uval_4 | uval_2;
        } while (local_2c != 0);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_0938d8 (Original VA: 0x938d8, Ghidra: FUN_000938d8)
 * Prototype: void draw_process_map_subtile_0938d8(void);
 * Address  : 0x938d8 (Size: 2051 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_process_map_subtile_0938d8(void)

{
  ushort uval;
  int arg_eax;
  uint uval_2;
  int val;
  int val_2;
  int val_3;
  int *int_ptr;
  int val_4;
  int val_5;
  int arg_edx;
  uint uval_3;
  int val_6;
  int val_7;
  int val_8;
  uint uval_4;
  uint uval_5;
  int *arg_ebx;
  uint uval_6;
  undefined4 *word_ptr;
  int val_9;
  int val_10;
  uint uval_7;
  int local_84;
  int local_78;
  int local_74;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_18;
  int *local_14;
  
  if ((-1 < arg_edx) && (arg_edx < 0xff)) {
    local_34 = arg_ebx[2];
    if (*arg_ebx < local_34) {
      local_34 = *arg_ebx;
    }
    val_9 = arg_ebx[3];
    if (val_9 < arg_ebx[1]) {
      val_9 = arg_ebx[1];
    }
    if (arg_eax + local_34 < 1) {
      local_34 = 1 - arg_eax;
    }
    if (0xff < arg_eax + val_9) {
      val_9 = 0xff - arg_eax;
    }
    if (local_34 <= val_9) {
      local_30 = arg_eax + local_34;
      g_engine3_bss_00387d98 = g_engine3_bss_00387d98 + local_34 * 0x100;
      local_3c = g_bss_0038721c + (local_34 + 0x1f) * 0x1c0;
      val_4 = arg_edx + 1;
      uval_2 = ((*(ushort *)((int)&g_bss_0019e973 + g_bss_002e6f23 * 0x18 + 3) & 0xff) & 0xffffff03) +
              0x10000;
      val_2 = local_30 + val_4 * 0x100;
      val_3 = val_2 * 5;
      local_2c = (int)&g_map_subtiles + val_3;
      uval_6 = uval_2;
      if (((uint)g_bss_00379395 & *(uint *)(&g_bss_002791ff + val_3) >> 0x1c) != 0) {
        val = (*(uint *)(&g_bss_002791ff + val_3) & 0x7ff) * 0x18;
        uval = *(ushort *)((int)&g_bss_0019e973 + val + 3);
        uval_6 = (uint)uval;
        if (((7 < uval_6) && ((*(byte *)((int)&g_map_subtiles + (val_2 + -1) * 5) & 0x42) == 0)) &&
           ((*(byte *)((int)&g_bss_0019e973 + val + 2) & 0xe) == 0)) {
          uval_6 = uval & 3;
        }
      }
      uval_3 = uval_2;
      if (((uint)g_bss_00379395 & *(uint *)(&g_bss_00278cff + val_3) >> 0x1c) != 0) {
        val_2 = (*(uint *)(&g_bss_00278cff + val_3) & 0x7ff) * 0x18;
        uval = *(ushort *)((int)&g_bss_0019e973 + val_2 + 3);
        uval_3 = (uint)uval;
        if (((7 < uval_3) &&
            ((*(byte *)((int)&g_map_subtiles + (val_4 * 0x100 + local_30 + -0x101) * 5) & 0x42) == 0))
           && ((*(byte *)((int)&g_bss_0019e973 + val_2 + 2) & 0xe) == 0)) {
          uval_3 = uval & 3;
        }
      }
      val_2 = -g_engine3_bss_00387da0;
      val_3 = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)g_units_per_pixel;
      val = g_engine3_bss_00387d98 * val_2;
      local_84 = (g_view_render_radius * 0x100 +
                 (g_engine3_bss_00387d9c * g_engine3_bss_00387d80 +
                  (((g_engine3_bss_00387d78 + val_2) * (g_engine3_bss_00387d7c + g_engine3_bss_00387d98) - g_engine3_bss_00387d84) - val)
                 >> 0xe) + g_engine3_bss_00387d54) / 2;
      if (local_84 < 0x20) {
        local_84 = 0;
      }
      else if (0x2bdf < local_84) {
        local_84 = 0x2be0;
      }
      local_18 = (g_viewport_center_x +
                 ((((((g_engine3_bss_00387d58 + val_2) * (g_engine3_bss_00387d5c + g_engine3_bss_00387d98) - g_engine3_bss_00387d64) -
                    val) + g_engine3_bss_00387d9c * g_engine3_bss_00387d60 >> 0xe) + g_engine3_bss_00387d4c) * val_3 >> 0x10)) *
                 0x100;
      local_78 = (g_viewport_center_y -
                 (val_3 * (((((g_engine3_bss_00387d68 + val_2) * (g_engine3_bss_00387d6c + g_engine3_bss_00387d98) - g_engine3_bss_00387d74
                             ) - val) + g_engine3_bss_00387d9c * g_engine3_bss_00387d70 >> 0xe) + g_engine3_bss_00387d50) >>
                 0x10)) * 0x100;
      local_44 = local_84;
      val_2 = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)g_units_per_pixel;
      val_6 = g_engine3_bss_00387d58 * val_2;
      val_7 = -g_engine3_bss_00387d68;
      val_3 = -(val_2 * g_engine3_bss_00387d6c) >> 0xe;
      val_8 = g_engine3_bss_00387d78 >> 7;
      val = g_engine3_bss_00387d7c >> 7;
      local_34 = (val_9 + 1) - local_34;
      if (local_34 != 0) {
        local_38 = local_30 * 5 + val_4 * 0x500;
        local_48 = local_30 * 5 + -0x500 + val_4 * 0x500;
        local_40 = val_4 * 0x11 + local_30;
        local_74 = local_30 * 2 + val_4 * 0x200;
        local_50 = uval_6 | uval_3;
        local_4c = uval_6 & uval_3;
        do {
          uval_6 = uval_2;
          if ((*(uint *)(local_2c + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
            val_9 = (*(uint *)(local_2c + 1) & 0x7ff) * 0x18;
            uval = *(ushort *)((int)&g_bss_0019e973 + val_9 + 3);
            uval_6 = (uint)uval;
            if (((7 < uval_6) && ((*(byte *)((int)&g_map_subtiles + local_38) & 0x42) == 0)) &&
               ((*(byte *)((int)&g_bss_0019e973 + val_9 + 2) & 0xe) == 0)) {
              uval_6 = uval & 3;
            }
          }
          uval_3 = uval_2;
          if ((*(uint *)(local_2c + -0x4ff) >> 0x1c & (uint)g_bss_00379395) != 0) {
            val_9 = (*(uint *)(local_2c + -0x4ff) & 0x7ff) * 0x18;
            uval = *(ushort *)((int)&g_bss_0019e973 + val_9 + 3);
            uval_3 = (uint)uval;
            if (((7 < uval_3) && ((*(byte *)((int)&g_map_subtiles + local_48) & 0x42) == 0)) &&
               ((*(byte *)((int)&g_bss_0019e973 + val_9 + 2) & 0xe) == 0)) {
              uval_3 = uval & 3;
            }
          }
          local_50 = local_50 | uval_6 | uval_3;
          uval_4 = (uint)(byte)(&g_data_00191dac)[local_50 & 0xff];
          uval_7 = (&g_bss_00377f70)[local_4c & uval_6 & uval_3 & 0xff];
          if ((local_50 & 0x10000) == 0) {
            uval_5 = (uint)*(ushort *)((int)&g_bss_001e3203 + local_74);
          }
          else {
            uval_5 = 0;
          }
          int_ptr = (int *)(uval_7 * 0x1c + local_3c);
          word_ptr = &g_bss_00378374 +
                    ((*(uint *)(local_2c + 1) & 0xffffff) >> 0x16) * 0x100 +
                    ((val_4 * 4 & 0xfU) + (local_30 & 3)) * 8;
          val_5 = uval_7 * val_3 + local_78;
          val_10 = uval_7 * val + local_44;
          val_9 = uval_7 - uval_4;
          local_14 = &g_bss_002f10e3 + (local_40 & 0xff);
          while (uval_7 == uval_4 || SBORROW4(uval_7,uval_4) != val_9 < 0) {
            *int_ptr = local_18 + word_ptr[4] >> 8;
            int_ptr[1] = word_ptr[5] + val_5 >> 8;
            *(undefined2 *)(int_ptr + 2) = 0;
            int_ptr[6] = val_10;
            uval_5 = uval_5 + *local_14;
            if ((int)uval_5 < 0) {
              uval_5 = 0;
            }
            if (0x3f00 < (int)uval_5) {
              uval_5 = 0x3f00;
            }
            *(short *)((int)int_ptr + 10) = (short)uval_5;
            if (int_ptr[6] < 0x20) {
              int_ptr[6] = 0;
              val_9 = *int_ptr;
              if (-1 < val_9) {
LAB_00093fff:
                if (g_data_0018429c <= val_9) {
                  *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x10;
                }
                goto LAB_0009400b;
              }
              *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 8;
              val_9 = int_ptr[1];
              if (-1 < val_9) goto LAB_00094018;
              *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x20;
            }
            else {
              if (0x2bdf < int_ptr[6]) {
                int_ptr[6] = 0x2be0;
              }
              val_9 = *int_ptr;
              if (-1 < val_9) goto LAB_00093fff;
              *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 8;
LAB_0009400b:
              val_9 = int_ptr[1];
              if (val_9 < 0) {
                *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x20;
              }
              else {
LAB_00094018:
                if (g_data_001842a0 <= val_9) {
                  *(byte *)(int_ptr + 2) = *(byte *)(int_ptr + 2) | 0x40;
                }
              }
            }
            word_ptr = word_ptr + 0x10;
            val_5 = val_5 + val_3;
            uval_7 = uval_7 + 1;
            val_10 = val_10 + val;
            int_ptr = int_ptr + 7;
            local_14 = local_14 + 1;
            val_9 = uval_7 - uval_4;
          }
          local_38 = local_38 + 5;
          local_48 = local_48 + 5;
          local_74 = local_74 + 2;
          local_40 = local_40 + 1;
          local_30 = local_30 + 1;
          local_3c = local_3c + 0x1c0;
          g_engine3_bss_00387d98 = g_engine3_bss_00387d98 + 0x100;
          local_2c = local_2c + 5;
          local_18 = local_18 + (val_6 >> 0xe);
          local_78 = local_78 + (val_7 * val_2 >> 0xe);
          local_44 = local_44 + val_8;
          local_34 = local_34 + -1;
          local_50 = uval_6 | uval_3;
          local_4c = uval_6 & uval_3;
        } while (local_34 != 0);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : draw_update_player_view_state_0940dc (Original VA: 0x940dc, Ghidra: FUN_000940dc)
 * Prototype: void draw_update_player_view_state_0940dc(void);
 * Address  : 0x940dc (Size: 316 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_update_player_view_state_0940dc(void)

{
  int val;
  int val_2;
  int val_3;
  int *arg_eax;
  int player_off;
  int *arg_edx;
  int val_4;
  
  player_off = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
          (int)(uint)g_units_per_pixel;
  val = arg_eax[4];
  val_2 = arg_eax[5];
  val_4 = val * val_2;
  val_3 = arg_eax[6];
  arg_eax[4] = (((*arg_edx + val_2) * (arg_edx[1] + val) - arg_edx[3]) - val_4) + arg_edx[2] * val_3 >>
              0xe;
  arg_eax[5] = (((arg_edx[4] + val_2) * (arg_edx[5] + val) - arg_edx[7]) - val_4) + arg_edx[6] * val_3
              >> 0xe;
  arg_eax[6] = arg_edx[10] * val_3 +
              (((val + arg_edx[9]) * (val_2 + arg_edx[8]) - arg_edx[0xb]) - val_4) >> 0xe;
  *arg_eax = g_viewport_center_x + (arg_eax[4] * player_off >> 0x10);
  arg_eax[1] = g_viewport_center_y - (arg_eax[5] * player_off >> 0x10);
  if (*arg_eax < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 8;
  }
  else if (g_data_0018429c <= *arg_eax) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x10;
  }
  if (arg_eax[1] < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x20;
  }
  else if (g_data_001842a0 <= arg_eax[1]) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x40;
  }
  *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 4;
  return;
}

/******************************************************************************
 * Function : draw_fn_094218 (Original VA: 0x94218, Ghidra: FUN_00094218)
 * Prototype: void draw_fn_094218(void);
 * Address  : 0x94218 (Size: 421 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x094218
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_094218(void)

{
  byte flag;
  int val;
  int val_2;
  int *arg_eax;
  int *arg_edx;
  int val_3;
  int val_4;
  
  val = arg_eax[4];
  val_3 = arg_eax[5];
  val_4 = val * val_3;
  val_2 = arg_eax[6];
  arg_eax[4] = (((*arg_edx + val_3) * (arg_edx[1] + val) - arg_edx[3]) - val_4) + arg_edx[2] * val_2 >>
              0xe;
  arg_eax[5] = (((arg_edx[4] + val_3) * (arg_edx[5] + val) - arg_edx[7]) - val_4) + arg_edx[6] * val_2
              >> 0xe;
  arg_eax[6] = (((val_3 + arg_edx[8]) * (val + arg_edx[9]) - arg_edx[0xb]) - val_4) +
              val_2 * arg_edx[10] >> 0xe;
  val = g_engine3_bss_00387d50;
  arg_eax[4] = arg_eax[4] + g_engine3_bss_00387d4c;
  val_3 = g_engine3_bss_00387d54;
  arg_eax[5] = arg_eax[5] + val;
  val = g_engine3_bss_00387d38;
  val_3 = arg_eax[6] + val_3;
  arg_eax[6] = val_3;
  arg_eax[3] = val_3;
  if (val < val_3) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x80;
  }
  if ((arg_eax[6] < 0x20) || (val_3 < 0x20)) {
    *arg_eax = g_viewport_center_x + arg_eax[4];
    val = g_viewport_center_y;
    *(ushort *)(arg_eax + 2) = *(ushort *)(arg_eax + 2) | 0x103;
    arg_eax[1] = val - arg_eax[5];
  }
  else {
    val_3 = (g_data_00191d30 << 0x10) / val_3;
    *arg_eax = g_viewport_center_x + (arg_eax[4] * val_3 >> 0x10);
    arg_eax[1] = g_viewport_center_y - (val_3 * arg_eax[5] >> 0x10);
    val = g_engine3_bss_00387d34;
    if (arg_eax[6] < g_engine3_bss_00387d30) {
      flag = *(byte *)(arg_eax + 2);
      *(byte *)(arg_eax + 2) = flag | 1;
      if (arg_eax[6] < val) {
        *(byte *)(arg_eax + 2) = flag | 3;
      }
    }
  }
  if (*arg_eax < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 8;
  }
  else if (g_data_0018429c <= *arg_eax) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x10;
  }
  if (arg_eax[1] < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x20;
  }
  else if (g_data_001842a0 <= arg_eax[1]) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x40;
  }
  *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 4;
  return;
}

/******************************************************************************
 * Function : draw_fn_0943c0 (Original VA: 0x943c0, Ghidra: FUN_000943c0)
 * Prototype: void draw_fn_0943c0(void);
 * Address  : 0x943c0 (Size: 468 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x0943c0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_0943c0(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  int val_8;
  int *arg_eax;
  uint uval;
  int val_9;
  int val_10;
  int val_11;
  int *arg_edx;
  uint uval_2;
  
  val_10 = arg_eax[5] * arg_eax[4];
  val_9 = arg_edx[4];
  val_11 = arg_edx[5];
  val = arg_eax[4];
  val_2 = arg_edx[7];
  val_3 = arg_edx[6];
  val_4 = arg_edx[8];
  val_5 = arg_eax[4];
  val_6 = arg_edx[9];
  val_7 = arg_edx[0xb];
  val_8 = arg_edx[10];
  uval = (arg_eax[6] * arg_edx[2] +
           (((arg_eax[4] + arg_edx[1]) * (*arg_edx + arg_eax[5]) - arg_edx[3]) - val_10) >> 0xe) +
          g_engine3_bss_00387d4c;
  arg_eax[4] = uval;
  uval_2 = (arg_eax[6] * val_3 + (((val_11 + val) * (val_9 + arg_eax[5]) - val_2) - val_10) >> 0xe)
           + g_engine3_bss_00387d50;
  val_11 = (arg_eax[6] * val_8 + (((val_6 + val_5) * (val_4 + arg_eax[5]) - val_7) - val_10) >> 0xe) +
           g_engine3_bss_00387d54;
  arg_eax[5] = uval_2;
  arg_eax[6] = val_11;
  val_9 = g_engine3_bss_00387d38;
  arg_eax[3] = val_11 + ((int)(((uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f)) +
                             ((uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f))) >> 2);
  if (val_9 < val_11) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x80;
  }
  if (val_11 < 0x20) {
    *(ushort *)(arg_eax + 2) = *(ushort *)(arg_eax + 2) | 0x103;
    val_9 = g_viewport_center_x + arg_eax[4] * 8;
    *arg_eax = val_9;
    if (val_9 < 0) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 8;
    }
    else if (g_data_0018429c <= val_9) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x10;
    }
    val_9 = g_viewport_center_y + arg_eax[5] * -8;
    arg_eax[1] = val_9;
    if (val_9 < 0) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x20;
      *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 4;
      return;
    }
    if (g_data_001842a0 <= val_9) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x40;
    }
  }
  else {
    val_9 = (g_data_00191d30 << 0x10) / arg_eax[6];
    if ((arg_eax[6] < g_engine3_bss_00387d30) &&
       (*(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 1, arg_eax[6] < g_engine3_bss_00387d34)) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 2;
    }
    val_11 = g_viewport_center_x + (arg_eax[4] * val_9 >> 0x10);
    *arg_eax = val_11;
    if (val_11 < 0) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 8;
    }
    else if (g_data_0018429c <= val_11) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x10;
    }
    val_9 = g_viewport_center_y - (val_9 * arg_eax[5] >> 0x10);
    arg_eax[1] = val_9;
    if (val_9 < 0) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x20;
    }
    else if (g_data_001842a0 <= val_9) {
      *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x40;
      *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 4;
      return;
    }
  }
  *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 4;
  return;
}

/******************************************************************************
 * Function : draw_fn_094594 (Original VA: 0x94594, Ghidra: FUN_00094594)
 * Prototype: void draw_fn_094594(void);
 * Address  : 0x94594 (Size: 548 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x094594
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_094594(void)

{
  int *arg_eax;
  int val;
  int val_2;
  int val_3;
  int val_4;
  int *arg_edx;
  int val_5;
  uint uval;
  
  val_4 = arg_eax[4];
  val_3 = arg_eax[5];
  val_2 = arg_eax[6];
  val = val_4 * val_3;
  arg_eax[4] = (((*arg_edx + val_3) * (arg_edx[1] + val_4) - arg_edx[3]) - val) + arg_edx[2] * val_2 >>
              0xe;
  arg_eax[5] = (((arg_edx[4] + val_3) * (arg_edx[5] + val_4) - arg_edx[7]) - val) + arg_edx[6] * val_2
              >> 0xe;
  val_5 = arg_eax[4] + g_engine3_bss_00387d4c;
  arg_eax[6] = (((val_3 + arg_edx[8]) * (val_4 + arg_edx[9]) - arg_edx[0xb]) - val) +
              val_2 * arg_edx[10] >> 0xe;
  arg_eax[4] = val_5;
  val_4 = g_engine3_bss_00387d54;
  arg_eax[5] = arg_eax[5] + g_engine3_bss_00387d50;
  uval = arg_eax[6] + val_4;
  arg_eax[6] = uval;
  val_4 = g_engine3_bss_00387d38;
  val_2 = (uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f);
  uval = arg_eax[4] >> 0x1f;
  val_3 = (arg_eax[4] ^ uval) - uval;
  if (val_3 < val_2) {
    val_2 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_2) * 8) * val_2;
  }
  else {
    uval = 0;
    if (val_3 == 0) goto LAB_000946a0;
    val_2 = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val_3) * 8) * val_3;
  }
  uval = val_2 >> 0xd;
LAB_000946a0:
  val_3 = (uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f);
  uval = arg_eax[5] >> 0x1f;
  val_2 = (arg_eax[5] ^ uval) - uval;
  if (val_2 < val_3) {
    val_3 = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val_3) * 8) * val_3 >> 0xd;
  }
  else if (val_2 == 0) {
    val_3 = 0;
  }
  else {
    val_3 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_2) * 8) * val_2 >> 0xd;
  }
  arg_eax[3] = val_3;
  if (val_4 < val_3) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x80;
  }
  if ((arg_eax[6] < 0x20) || (val_3 < 0x20)) {
    *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 1;
    val_4 = arg_eax[5];
    *arg_eax = g_viewport_center_x + arg_eax[4];
  }
  else {
    val_3 = (g_data_00191d30 << 0x10) / val_3;
    *arg_eax = g_viewport_center_x + (arg_eax[4] * val_3 >> 0x10);
    val_4 = val_3 * arg_eax[5] >> 0x10;
  }
  arg_eax[1] = g_viewport_center_y - val_4;
  if (*arg_eax < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 8;
  }
  else if (g_data_0018429c <= *arg_eax) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x10;
  }
  if (arg_eax[1] < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x20;
  }
  else if (g_data_001842a0 <= arg_eax[1]) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x40;
  }
  if ((arg_eax[6] < g_engine3_bss_00387d30) &&
     (*(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 1, arg_eax[6] < g_engine3_bss_00387d34)) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 2;
  }
  *(byte *)((int)arg_eax + 9) = *(byte *)((int)arg_eax + 9) | 4;
  return;
}

/******************************************************************************
 * Function : draw_fn_0947b8 (Original VA: 0x947b8, Ghidra: FUN_000947b8)
 * Prototype: void draw_fn_0947b8(void);
 * Address  : 0x947b8 (Size: 104 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x0947b8
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_0947b8(void)

{
  int *arg_eax;
  int *arg_edx;
  int val;
  
  if (arg_eax[2] < 0x20) {
    *arg_edx = g_viewport_center_x + *arg_eax;
    val = g_viewport_center_y - arg_eax[1];
  }
  else {
    val = (g_data_00191d30 << 0x10) / arg_eax[2];
    *arg_edx = g_viewport_center_x + (*arg_eax * val >> 0x10);
    val = g_viewport_center_y - (arg_eax[1] * val >> 0x10);
  }
  arg_edx[1] = val;
  return;
}

/******************************************************************************
 * Function : draw_fn_094820 (Original VA: 0x94820, Ghidra: FUN_00094820)
 * Prototype: void draw_fn_094820(void);
 * Address  : 0x94820 (Size: 1 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x094820
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_094820(void)

{
  return;
}

/******************************************************************************
 * Function : draw_fn_094824 (Original VA: 0x94824, Ghidra: FUN_00094824)
 * Prototype: void draw_fn_094824(int param_1);
 * Address  : 0x94824 (Size: 124 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Purpose  : Module draw.cpp procedure @ 0x094824
 * Callers  : 3 -> engine3_clip_and_emit_textured_tri_mode0, engine3_clip_and_emit_textured_tri_mode1, engine3_clip_and_emit_textured_tri_mode2
 * Callees  : 0 -> 
 ******************************************************************************/
void draw_fn_094824(int param_1)

{
  int val;
  undefined4 *arg_eax;
  int val_2;
  undefined4 arg_ecx;
  undefined4 *arg_edx;
  undefined4 arg_ebx;
  
  val = arg_edx[3];
  *arg_eax = *arg_edx;
  arg_eax[1] = arg_edx[1];
  arg_eax[2] = arg_ebx;
  arg_eax[3] = arg_ecx;
  val_2 = (int)arg_edx[2] >> 0x10;
  if (-1 < param_1) {
    val_2 = val_2 * (int)(&g_data_00014000 + param_1 * 3) >> 0x11;
  }
  if (g_engine3_bss_00387d8c < val) {
    if (val < g_engine3_bss_00387d38) {
      val_2 = ((g_engine3_bss_00387d88 - val) * val_2) / g_engine3_bss_00387d94 + 0x8000;
    }
    else {
      val_2 = 0x8000;
    }
  }
  else {
    val_2 = val_2 << 8;
  }
  arg_eax[4] = val_2;
  return;
}

/******************************************************************************
 * Function : draw_process_map_subtile_0a43b4 (Original VA: 0xa43b4, Ghidra: FUN_000a43b4)
 * Prototype: void draw_process_map_subtile_0a43b4(void);
 * Address  : 0xa43b4 (Size: 1589 bytes)
 * Module   : draw.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> draw_update_player_dungeon_0872b8, draw_unhandled_screen_mode_087da4
 * Callees  : 4 -> engine3_project_camera_grid_to_screen, get_scaled_viewport_bottom_y, bflib_system_io_fn_0e6a6c, watcom_crt_fn_137e43
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void draw_process_map_subtile_0a43b4(void)

{
  int val;
  int val_2;
  undefined2 *word_ptr;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  undefined2 *arg_eax;
  uint uval;
  int val_7;
  uint uval_2;
  ushort uval_3;
  int val_8;
  int val_9;
  int val_10;
  short loop_i;
  int val_11;
  undefined8 uval_4;
  uint local_48;
  int local_24;
  
  g_bss_00379394 = (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef];
  g_bss_00379395 = '\x01' << (g_bss_00379394 & 0x1f);
  if (g_bss_002ee8d1 == '\0') {
    g_data_00191d28 = 4;
    g_data_00191d2c = 3;
  }
  else if (g_bss_002ee8d1 == '\x01') {
    g_data_00191d28 = 3;
    g_data_00191d2c = 2;
  }
  else if (g_bss_002ee8d1 == '\x02') {
    g_data_00191d2c = 1;
    g_data_00191d28 = 2;
  }
  if (g_bss_002ee8d1 == '\x03') {
    g_data_00191d28 = 0;
    g_data_00191d2c = 0;
  }
  g_data_00191d38 = (uint)(byte)(&g_data_00191d40)[g_bss_002ee8d3];
  g_engine3_bss_00387da4 = (undefined2 *)0x0;
  g_engine3_bss_00387da8 = 100000000;
  if (g_view_projection_mode == '\0') {
    g_engine3_bss_00387e00 = g_bss_002ee8d6;
  }
  else {
    g_engine3_bss_00387e00 = '\0';
  }
  g_engine3_bss_0038830c = *arg_eax;
  g_engine3_bss_0038830e = arg_eax[1];
  g_engine3_bss_00388310 = arg_eax[2];
  g_bss_003d9578 = 0;
  g_engine3_bss_00387db0 = (int)(g_graphics_window_width * (uint)g_units_per_pixel -
                      (uint)*(ushort *)(&g_player_hand_thing_idx + (g_my_player_word >> 0x18) * 0x4ef)) /
                 (int)(uint)g_units_per_pixel;
  uval_4 = get_scaled_viewport_bottom_y();
  g_engine3_bss_00387db4 = ((int)uval_4 - (int)((ulonglong)uval_4 >> 0x20)) / (int)(uint)g_units_per_pixel;
  g_data_00191d30 = (int)(*(int *)((int)arg_eax + 0x13) * ((uint)g_mouse_cursor_y / (uint)g_units_per_pixel)) /
                 0x140;
  if (g_view_projection_mode == '\0') {
    local_24 = g_engine3_bss_003882c0;
    if ((g_engine3_bss_003882d8 == 0) && (g_engine3_bss_003882cc == 0)) {
      g_engine3_bss_00387de0 = g_engine3_bss_003882d8;
      g_engine3_bss_00387de4 = g_engine3_bss_003882d8;
      g_engine3_bss_00387da4 = &g_map_subtiles;
    }
    else {
      for (loop_i = 0; loop_i < 8; loop_i = loop_i + 1) {
        uval_2 = (((g_engine3_bss_00387db0 - g_engine3_bss_003882bc) * g_engine3_bss_003882d8 >> 1) -
                 (g_engine3_bss_003882d4 * (g_engine3_bss_00387db4 - local_24) >> 1)) /
                 (g_engine3_bss_003882d8 * g_engine3_bss_003882c8 - g_engine3_bss_003882d4 * g_engine3_bss_003882cc >> 0xb);
        uval = (((g_engine3_bss_00387db0 - g_engine3_bss_003882bc) * g_engine3_bss_003882cc >> 1) -
                (g_engine3_bss_003882c8 * (g_engine3_bss_00387db4 - local_24) >> 1)) /
                (g_engine3_bss_003882d4 * g_engine3_bss_003882cc + -g_engine3_bss_003882c8 * g_engine3_bss_003882d8 >> 0xb);
        val_9 = (int)uval_2 >> 2;
        val_7 = (int)uval >> 2;
        val_8 = (uval_2 & 3) << 6;
        val_11 = (uval & 3) << 6;
        word_ptr = g_engine3_bss_00387da4;
        val_10 = g_engine3_bss_00387de0;
        val_2 = g_engine3_bss_00387de4;
        val_3 = g_engine3_bss_00387de8;
        val_4 = g_engine3_bss_00387dec;
        val_5 = g_engine3_bss_00387dd8;
        val_6 = g_engine3_bss_00387ddc;
        if ((((-1 < val_9) && (val_9 < 0xff)) && (-1 < val_7)) && (val_7 < 0xff)) {
          val = (val_7 * 0x100 + val_9) * 5;
          word_ptr = (undefined2 *)((int)&g_map_subtiles + val);
          val_10 = val_9;
          val_2 = val_7;
          val_3 = val_8;
          val_4 = val_11;
          val_5 = val_9;
          val_6 = val_7;
          if (loop_i != 0) {
            uval_2 = *(uint *)((int)&g_map_subtiles + val + 1);
            local_48 = uval_2 >> 0x1c;
            if (((g_bss_00379395 & local_48) == 0) ||
               (word_ptr = g_engine3_bss_00387da4, val_10 = g_engine3_bss_00387de0, val_2 = g_engine3_bss_00387de4,
               val_3 = g_engine3_bss_00387de8, val_4 = g_engine3_bss_00387dec, val_5 = g_engine3_bss_00387dd8,
               val_6 = g_engine3_bss_00387ddc, (uval_2 & 0x7ff) != 0)) {
              uval_2 = *(uint *)((int)&g_map_subtiles + val + 1);
              local_48 = uval_2 >> 0x1c;
              uval = g_bss_002e6f23;
              if ((g_bss_00379395 & local_48) != 0) {
                uval = uval_2 & 0x7ff;
              }
              uval_3 = *(ushort *)((int)&g_bss_0019e973 + uval * 0x18 + 3);
              if ((g_engine3_bss_00387e00 != '\0') && (uval_3 != 0)) {
                uval_2 = *(uint *)((int)&g_map_subtiles + val + 1);
                local_48 = (uint)g_bss_00379395;
                uval = g_bss_002e6f23;
                if ((local_48 & uval_2 >> 0x1c) != 0) {
                  uval = uval_2 & 0x7ff;
                }
                if (7 < *(ushort *)((int)&g_bss_0019e973 + uval * 0x18 + 3)) {
                  val_10 = val_9 + val_7 * 0x100;
                  val_2 = val_10 * 5;
                  if (((*(uint *)((int)&g_map_subtiles + val_2 + 1) >> 0x1c & (uint)g_bss_00379395) == 0
                      ) || ((((&g_bss_00269203)[val_10] & 0x80) == 0 &&
                            ((*(byte *)((int)&g_map_subtiles + val_2) & 2) == 0)))) {
                    uval_3 = uval_3 & 3;
                  }
                }
              }
              if (((int)(short)uval_3 & 1 << ((char)loop_i - 1U & 0x1f)) != 0) {
                g_engine3_bss_00387da4 = (undefined2 *)((int)&g_map_subtiles + (val_7 * 0x100 + val_9) * 5);
                g_engine3_bss_00387de0 = val_9;
                g_engine3_bss_00387de4 = val_7;
                g_engine3_bss_00387de8 = val_8;
                g_engine3_bss_00387dec = val_11;
              }
              word_ptr = g_engine3_bss_00387da4;
              val_10 = g_engine3_bss_00387de0;
              val_2 = g_engine3_bss_00387de4;
              val_3 = g_engine3_bss_00387de8;
              val_4 = g_engine3_bss_00387dec;
              if (((g_engine3_bss_00387e00 != '\0') && (loop_i == 2)) ||
                 ((val_5 = g_engine3_bss_00387dd8, val_6 = g_engine3_bss_00387ddc, g_engine3_bss_00387e00 == '\0' && (loop_i == 5)
                  ))) {
                g_engine3_bss_00387df8 = val_8;
                g_engine3_bss_00387dfc = val_11;
                val_5 = g_engine3_bss_00387dd8;
                val_6 = g_engine3_bss_00387ddc;
                g_engine3_bss_00387df0 = val_9;
                g_engine3_bss_00387df4 = val_7;
              }
            }
          }
        }
        g_engine3_bss_00387ddc = val_6;
        g_engine3_bss_00387dd8 = val_5;
        g_engine3_bss_00387dec = val_4;
        g_engine3_bss_00387de8 = val_3;
        g_engine3_bss_00387de4 = val_2;
        g_engine3_bss_00387de0 = val_10;
        g_engine3_bss_00387da4 = word_ptr;
        local_24 = local_24 + (g_engine3_bss_003882e4 >> 8);
      }
    }
  }
  val_10 = (g_my_player_word >> 0x18) * 0x4ef;
  uval_2 = (uint)*(ushort *)(&g_bss_0019d50e + val_10) / (uint)g_units_per_pixel;
  g_viewport_center_y = uval_2 / 2;
  g_viewport_center_x = ((uint)*(ushort *)(&g_bss_0019d50c + val_10) / (uint)g_units_per_pixel) / 2;
  watcom_crt_fn_137e43(uval_2);
  bflib_system_io_fn_0e6a6c();
  engine3_project_camera_grid_to_screen();
  g_bss_003d957c = 0;
  g_lb_display_draw_flags = (undefined2)local_48;
  bflib_system_io_fn_0e6a6c();
  return;
}

