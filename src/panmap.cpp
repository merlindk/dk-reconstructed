/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: panmap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 12
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : panmap_fn_062570 (Original VA: 0x62570, Ghidra: FUN_00062570)
 * Prototype: undefined4 panmap_fn_062570(void);
 * Address  : 0x62570 (Size: 6 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062570
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 panmap_fn_062570(void)

{
  return 1;
}

/******************************************************************************
 * Function : panmap_fn_062578 (Original VA: 0x62578, Ghidra: FUN_00062578)
 * Prototype: undefined8 panmap_fn_062578(void);
 * Address  : 0x62578 (Size: 527 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062578
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 3 -> panmap_update_player_view_state_0627b5, bflib_system_io_fn_0e8214, LbPaletteSet
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00062680) */
/* WARNING: Removing unreachable block (ram,0x0006270a) */
/* WARNING: Removing unreachable block (ram,0x000626bb) */

undefined8 panmap_fn_062578(void)

{
  char ch;
  byte flag;
  int arg_eax;
  int val;
  uint uval;
  int val_2;
  undefined4 arg_edx;
  byte local_318 [768];
  
  if ((*(int *)(arg_eax + 0x4c1) != 0) || (*(int *)(arg_eax + 0x4c5) != 0)) {
    if ((*(byte *)(arg_eax + 3) & 8) == 0) {
      if ((*(int *)(arg_eax + 0x4c1) == 0) || (*(int *)(arg_eax + 0x4c5) == 0)) {
        if ((*(int *)(arg_eax + 0x4c1) == 0) || (*(int *)(arg_eax + 0x4c5) != 0)) {
          val = (*(int *)(arg_eax + 0x4c5) + -1) * 10;
          if (0x78 < val) {
            val = 0x78;
          }
        }
        else {
          val = (*(int *)(arg_eax + 0x4c1) + -1) * 0xc;
          if (0x78 < val) {
            val = 0x78;
          }
        }
      }
      else {
        val = (*(int *)(arg_eax + 0x4c1) + -1) * 0xc + (*(int *)(arg_eax + 0x4c5) + -1) * 10;
        if (0x78 < val) {
          val = 0x78;
        }
      }
      val = 0x78 - val;
      val_2 = 0;
      do {
        flag = (char)((int)((*(byte *)(val_2 + *(int *)(arg_eax + 0x4c9)) - 0x3f) * val) / 0x78) +
                0x3f;
        local_318[val_2] = flag;
        if (0x3f < flag) {
          local_318[val_2] = 0x3f;
        }
        uval = (int)((uint)*(byte *)(val_2 + 1 + *(int *)(arg_eax + 0x4c9)) * val) / 0x78;
        local_318[val_2 + 1] = (byte)uval;
        if (0x3f < (uval & 0xff)) {
          local_318[val_2 + 1] = 0x3f;
        }
        uval = (int)((uint)*(byte *)(val_2 + 2 + *(int *)(arg_eax + 0x4c9)) * val) / 0x78;
        local_318[val_2 + 2] = (byte)uval;
        if (0x3f < (uval & 0xff)) {
          local_318[val_2 + 2] = 0x3f;
        }
        val_2 = val_2 + 3;
      } while (val_2 != 0x300);
      if (*(int *)(arg_eax + 0x4c1) != 0) {
        *(int *)(arg_eax + 0x4c1) = *(int *)(arg_eax + 0x4c1) + -1;
      }
      if (((*(int *)(arg_eax + 0x4c5) != 0) && (ch = *(char *)(arg_eax + 0x4b0), ch != '\x12'))
         && (ch != '\x11')) {
        if ((ch == '\x05') || (ch == '\x06')) {
          if (*(int *)(arg_eax + 0x4c5) < 0xd) {
            *(int *)(arg_eax + 0x4c5) = *(int *)(arg_eax + 0x4c5) + 1;
          }
        }
        else if (*(int *)(arg_eax + 0x4c5) != 0) {
          *(int *)(arg_eax + 0x4c5) = *(int *)(arg_eax + 0x4c5) + -1;
        }
      }
      bflib_system_io_fn_0e8214();
      LbPaletteSet(local_318);
      goto LAB_00062780;
    }
    panmap_update_player_view_state_0627b5();
    *(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) & 0xf7;
    if (*(int *)(arg_eax + 0x4c1) != 0) {
      *(undefined4 *)(arg_eax + 0x4c1) = 0;
    }
  }
  val = 0;
LAB_00062780:
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : panmap_fn_062787 (Original VA: 0x62787, Ghidra: FUN_00062787)
 * Prototype: void panmap_fn_062787(void);
 * Address  : 0x62787 (Size: 46 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062787
 * Callers  : 1 -> creature_update_creature_and_thing_081a2c
 * Callees  : 0 -> 
 ******************************************************************************/
void panmap_fn_062787(void)

{
  int arg_eax;
  int arg_edx;
  
  *(int *)(arg_eax + 0x4c1) = *(int *)(arg_eax + 0x4c1) + arg_edx;
  if (*(int *)(arg_eax + 0x4c1) < 1) {
    *(undefined4 *)(arg_eax + 0x4c1) = 1;
    return;
  }
  if (10 < *(int *)(arg_eax + 0x4c1)) {
    *(undefined4 *)(arg_eax + 0x4c1) = 10;
  }
  return;
}

/******************************************************************************
 * Function : panmap_update_player_view_state_0627b5 (Original VA: 0x627b5, Ghidra: FUN_000627b5)
 * Prototype: void panmap_update_player_view_state_0627b5(void);
 * Address  : 0x627b5 (Size: 532 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 17 -> effect_process_thing_entity_024ab9, entrance_update_player_view_state_02684f, file_update_player_dungeon_02c833, game_out_sync_gameturn_036ff4, instance_process_thing_entity_04b2a7, instance_update_creature_and_thing_04b478, instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae ...
 * Callees  : 2 -> bflib_system_io_fn_0e8214, LbPaletteSet
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000628f0) */
/* WARNING: Removing unreachable block (ram,0x00062986) */
/* WARNING: Removing unreachable block (ram,0x0006292f) */

void panmap_update_player_view_state_0627b5(void)

{
  byte flag;
  undefined1 *arg_eax;
  int val;
  byte *arg_edx;
  byte *byte_ptr;
  byte local_320 [768];
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  if (arg_edx == g_data_00199218) {
    if ((arg_eax[3] & 4) != 0) {
      return;
    }
    arg_eax[3] = arg_eax[3] | 4;
  }
  else {
    arg_eax[3] = arg_eax[3] & 0xfb;
  }
  if (*(int *)(arg_eax + 7) != 0) {
    if (arg_edx == *(byte **)(arg_eax + 0x4c9)) {
      return;
    }
    if (arg_edx != *(byte **)(arg_eax + 7)) {
      return;
    }
  }
  if ((*(int *)(arg_eax + 0x4c1) == 0) && (*(int *)(arg_eax + 0x4c5) == 0)) {
    val = (int)g_my_player_word._3_1_;
    *(byte **)(arg_eax + 0x4c9) = arg_edx;
    if (arg_eax != &g_players + val * 0x4ef) {
      return;
    }
    bflib_system_io_fn_0e8214();
    LbPaletteSet();
    return;
  }
  if ((*(int *)(arg_eax + 0x4c1) == 0) || (*(int *)(arg_eax + 0x4c5) == 0)) {
    if ((*(int *)(arg_eax + 0x4c1) == 0) || (*(int *)(arg_eax + 0x4c5) != 0)) {
      local_1c = (*(int *)(arg_eax + 0x4c5) + -1) * 10;
      if (0x78 < local_1c) {
        local_1c = 0x78;
      }
      goto LAB_000628a3;
    }
    local_1c = (*(int *)(arg_eax + 0x4c1) + -1) * 0xc;
  }
  else {
    local_1c = (*(int *)(arg_eax + 0x4c5) + -1) * 10 + (*(int *)(arg_eax + 0x4c1) + -1) * 0xc;
  }
  if (0x78 < local_1c) {
    local_1c = 0x78;
  }
LAB_000628a3:
  local_1c = 0x78 - local_1c;
  local_20 = 0;
  byte_ptr = arg_edx;
  do {
    flag = (char)((int)((*byte_ptr - 0x3f) * local_1c) / 0xc) * '\n' + 0x3f;
    local_320[local_20 * 3] = flag;
    if (0x3f < flag) {
      local_320[local_20 * 3] = 0x3f;
    }
    flag = (char)((int)((uint)byte_ptr[1] * local_1c) / 0xc) * '\n';
    local_320[local_20 * 3 + 1] = flag;
    if (0x3f < flag) {
      local_320[local_20 * 3 + 1] = 0x3f;
    }
    local_18 = 0xc;
    flag = (char)((int)((uint)byte_ptr[2] * local_1c) / 0xc) * '\n';
    local_320[local_20 * 3 + 2] = flag;
    if (0x3f < flag) {
      local_320[local_20 * 3 + 2] = 0x3f;
    }
    local_20 = local_20 + 1;
    byte_ptr = byte_ptr + 3;
  } while (local_20 < 0x100);
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    bflib_system_io_fn_0e8214();
    LbPaletteSet(local_320);
  }
  *(byte **)(arg_eax + 0x4c9) = arg_edx;
  return;
}

/******************************************************************************
 * Function : panmap_fn_0629cc (Original VA: 0x629cc, Ghidra: FUN_000629cc)
 * Prototype: void panmap_fn_0629cc(void);
 * Address  : 0x629cc (Size: 65 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x0629cc
 * Callers  : 3 -> draw_process_thing_entity_088e2c, draw_update_creature_and_thing_0890bc, draw_update_player_dungeon_089ae8
 * Callees  : 0 -> 
 ******************************************************************************/
void panmap_fn_0629cc(void)

{
  int arg_eax;
  int arg_edx;
  undefined1 arg_bl;
  
  if ((((-1 < arg_edx) && (arg_edx < 0x74)) && ((int)(&g_bss_0035e254)[arg_edx] <= arg_eax)) &&
     (arg_eax < (int)(&g_bss_0035e424)[arg_edx])) {
    *(undefined1 *)((arg_edx + g_bss_0034d250) * g_screen_pitch + g_display_bss_003d9818 + arg_eax + g_bss_0034d24c) =
         arg_bl;
  }
  return;
}

/******************************************************************************
 * Function : panmap_fn_062a0d (Original VA: 0x62a0d, Ghidra: FUN_00062a0d)
 * Prototype: void panmap_fn_062a0d(void);
 * Address  : 0x62a0d (Size: 341 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062a0d
 * Callers  : 1 -> panmap_fn_062eb7
 * Callees  : 0 -> 
 ******************************************************************************/
void panmap_fn_062a0d(void)

{
  byte flag;
  undefined1 uval;
  undefined1 uval_2;
  int val;
  int loop_i;
  int val_2;
  int loop_i_2;
  uint uval_3;
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = 0x66;
  val = 0;
  uval_3 = g_game_turn & 3;
  for (loop_i_2 = 0; loop_i_2 < g_bss_00361b84; loop_i_2 = loop_i_2 + 1) {
    flag = (&g_bss_00361a84)[loop_i_2];
    if ((g_game_turn & 3) == 0) {
      (&g_bss_0035d257)[val] = flag;
      (&g_bss_0035d258)[val] = flag;
    }
    else {
      (&g_bss_0035d257)[val] = (&g_bss_00367610)[flag];
      (&g_bss_0035d258)[val] = (&g_bss_0036e810)[flag];
    }
    (&g_bss_0035d256)[val] = 0;
    (&g_bss_0035d25a)[val] = 0x92;
    (&g_bss_0035d25b)[val] = 0x55;
    uval = (&g_bss_00366c10)[flag];
    (&g_bss_0035d254)[val] = flag;
    uval_2 = (&g_bss_0036e810)[flag];
    (&g_bss_0035d255)[val] = uval;
    (&g_bss_0035d259)[val] = uval_2;
    for (loop_i = val; loop_i != local_28; loop_i = loop_i + 6) {
      (&g_bss_0035d25c)[loop_i] = 0x84;
      (&g_bss_0035d25d)[loop_i] = 0x5c;
      (&g_bss_0035d25e)[loop_i] = 0xa4;
      (&g_bss_0035d25f)[loop_i] = 0xb7;
      (&g_bss_0035d260)[loop_i] = 0x15;
      (&g_bss_0035d261)[loop_i] = (&g_data_00184278)[uval_3];
    }
    (&g_bss_0035d2fe)[val] = 0x83;
    (&g_bss_0035d2ff)[val] = 0x5a;
    (&g_bss_0035d300)[val] = 0xa3;
    local_20 = 0;
    (&g_bss_0035d301)[val] = 0xb5;
    (&g_bss_0035d302)[val] = 0x14;
    local_24 = val + 6;
    (&g_bss_0035d303)[val] = 4;
    do {
      val_2 = local_20 * 0xc + val;
      loop_i = local_24;
      do {
        (&g_bss_0035d2c2)[val_2] = 0x3c;
        val_2 = val_2 + 1;
        (&g_bss_0035d2c2)[loop_i] = 0x4f;
        loop_i = loop_i + 1;
      } while (val_2 != local_24);
      local_20 = local_20 + 1;
      local_24 = local_24 + 0xc;
    } while (local_20 < 5);
    local_28 = local_28 + 0x100;
    val = val + 0x100;
  }
  return;
}

/******************************************************************************
 * Function : panmap_fn_062b62 (Original VA: 0x62b62, Ghidra: FUN_00062b62)
 * Prototype: void panmap_fn_062b62(void);
 * Address  : 0x62b62 (Size: 526 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062b62
 * Callers  : 1 -> panmap_update_player_view_state_062ee2
 * Callees  : 0 -> 
 ******************************************************************************/
void panmap_fn_062b62(void)

{
  undefined1 *word_ptr;
  undefined1 uval;
  int loop_i;
  int val;
  int val_2;
  int loop_i_2;
  byte flag;
  uint uval_2;
  uint uval_3;
  int loop_i_3;
  int local_20;
  int local_1c;
  
  loop_i_3 = 0x66;
  uval_3 = g_game_turn & 3;
  for (loop_i_2 = 0; loop_i_2 < g_bss_00361b84; loop_i_2 = loop_i_2 + 1) {
    flag = (&g_bss_00361a84)[loop_i_2];
    loop_i = loop_i_2 * 0x100;
    if ((g_game_turn & 3) == 0) {
      (&g_bss_0035d257)[loop_i] = flag;
    }
    else {
      uval_2 = (uint)flag;
      flag = (&g_bss_0036e810)[flag];
      (&g_bss_0035d257)[loop_i] = (&g_bss_00367610)[uval_2];
    }
    (&g_bss_0035d258)[loop_i] = flag;
    uval = (&g_data_00184278)[uval_3];
    loop_i = loop_i_2 << 8;
    do {
      val = loop_i + 6;
      (&g_bss_0035d261)[loop_i] = uval;
      loop_i = val;
    } while (val != loop_i_3);
    loop_i_3 = loop_i_3 + 0x100;
  }
  loop_i_2 = (int)g_data_0017d17b._3_1_;
  if ((g_game_turn & 1) != 0) {
    loop_i_2 = -1;
  }
  if (loop_i_2 != g_data_0018427e) {
    if (-1 < g_data_0018427e) {
      loop_i_3 = g_data_0018427e * 6;
      for (loop_i = 0; loop_i < g_bss_00361b84; loop_i = loop_i + 1) {
        val_2 = 0;
        val = loop_i_3;
        do {
          word_ptr = &g_data_00184278 + val_2;
          val_2 = val_2 + 1;
          (&g_bss_0035d25c)[val] = *word_ptr;
          val = val + 1;
        } while (val_2 < 6);
        loop_i_3 = loop_i_3 + 0x100;
      }
    }
    g_data_0018427e = loop_i_2;
    if (-1 < loop_i_2) {
      loop_i_3 = loop_i_2 * 6 + 6;
      for (loop_i = 0; loop_i < g_bss_00361b84; loop_i = loop_i + 1) {
        val = loop_i * 0x100 + loop_i_2 * 6;
        do {
          val_2 = val + 1;
          (&g_bss_0035d25c)[val] = 0x1f;
          val = val_2;
        } while (val_2 != loop_i_3);
        loop_i_3 = loop_i_3 + 0x100;
      }
    }
  }
  loop_i_2 = (int)g_data_0017d17f;
  if ((g_game_turn & 1) != 0) {
    loop_i_2 = -1;
  }
  if (loop_i_2 != g_data_00184282) {
    if ((-1 < g_data_00184282) && (g_data_00184282 != 5)) {
      loop_i = (g_data_00184282 * 2 + 1) * 6;
      local_20 = g_data_00184282 * 0xc + 6;
      for (loop_i_3 = 0; loop_i_3 < g_bss_00361b84; loop_i_3 = loop_i_3 + 1) {
        val_2 = loop_i_3 * 0x100 + g_data_00184282 * 0xc;
        val = loop_i;
        do {
          (&g_bss_0035d2c2)[val_2] = 0x3c;
          val_2 = val_2 + 1;
          (&g_bss_0035d2c2)[val] = 0x4f;
          val = val + 1;
        } while (val_2 != local_20);
        local_20 = local_20 + 0x100;
        loop_i = loop_i + 0x100;
      }
    }
    g_data_00184282 = loop_i_2;
    if (-1 < loop_i_2) {
      loop_i = (loop_i_2 * 2 + 1) * 6;
      local_1c = loop_i_2 * 0xc + 6;
      for (loop_i_3 = 0; loop_i_3 < g_bss_00361b84; loop_i_3 = loop_i_3 + 1) {
        val_2 = loop_i_3 * 0x100 + loop_i_2 * 0xc;
        val = loop_i;
        do {
          (&g_bss_0035d2c2)[val_2] = 0x1f;
          val_2 = val_2 + 1;
          (&g_bss_0035d2c2)[val] = 0x1f;
          val = val + 1;
        } while (val_2 != local_1c);
        local_1c = local_1c + 0x100;
        loop_i = loop_i + 0x100;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : panmap_fn_062d70 (Original VA: 0x62d70, Ghidra: FUN_00062d70)
 * Prototype: void panmap_fn_062d70(void);
 * Address  : 0x62d70 (Size: 327 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062d70
 * Callers  : 1 -> panmap_fn_062eb7
 * Callees  : 1 -> bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void panmap_fn_062d70(void)

{
  char ch;
  int val;
  int val_2;
  int ui_scale;
  char *str_ptr;
  int extraout_ECX;
  int val_3;
  int loop_i;
  int val_4;
  int val_5;
  undefined8 uval;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  val_4 = 0;
  while( true ) {
    val = g_screen_pitch;
    val_2 = g_bss_0034d24c;
    ui_scale = (int)(0x74 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
    if (ui_scale <= local_20) break;
    local_20 = local_20 + 1;
    uval = bflib_system_io_fn_0e8cc8();
    *(int *)((int)&g_bss_0035e254 + val_4) = (int)((ulonglong)uval >> 0x20) - (int)uval;
    val_2 = bflib_system_io_fn_0e8cc8();
    *(int *)((int)&g_bss_0035e424 + val_4) = val_2 + extraout_ECX;
    val_4 = val_4 + 4;
  }
  g_bss_00361b84 = 0;
  val_4 = 0;
  local_2c = g_display_bss_003d9818 + g_screen_pitch * g_bss_0034d250;
  local_28 = 0;
  for (local_24 = 0; local_24 < (int)(0x74 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
      local_24 = local_24 + 1) {
    local_1c = *(int *)((int)&g_bss_0035e254 + val_4);
    str_ptr = (char *)(local_1c + local_2c + val_2);
    val_5 = local_1c + local_28;
    while (local_1c < *(int *)((int)&g_bss_0035e424 + val_4)) {
      ch = *str_ptr;
      *str_ptr = -1;
      for (loop_i = 0; (loop_i < g_bss_00361b84 && (ch != (&g_bss_00361a84)[loop_i])); loop_i = loop_i + 1
          ) {
      }
      val_3 = g_bss_00361b84;
      if (loop_i == g_bss_00361b84) {
        val_3 = g_bss_00361b84 + 1;
        (&g_bss_00361a84)[g_bss_00361b84] = ch;
      }
      local_1c = local_1c + 1;
      str_ptr = str_ptr + 1;
      (&g_bss_0035e5f4)[val_5] = (char)loop_i;
      g_bss_00361b84 = val_3;
      val_5 = val_5 + 1;
    }
    local_2c = local_2c + val;
    val_4 = val_4 + 4;
    local_28 = local_28 + ui_scale;
  }
  return;
}

/******************************************************************************
 * Function : panmap_fn_062eb7 (Original VA: 0x62eb7, Ghidra: FUN_00062eb7)
 * Prototype: void panmap_fn_062eb7(void);
 * Address  : 0x62eb7 (Size: 43 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x062eb7
 * Callers  : 1 -> panmap_update_player_view_state_062ee2
 * Callees  : 2 -> panmap_fn_062a0d, panmap_fn_062d70
 ******************************************************************************/
void panmap_fn_062eb7(void)

{
  int ui_scale;
  
  ui_scale = (int)(0x100 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
  if (ui_scale != g_data_00184274) {
    g_data_00184274 = ui_scale;
    panmap_fn_062d70();
    panmap_fn_062a0d();
  }
  return;
}

/******************************************************************************
 * Function : panmap_update_player_view_state_062ee2 (Original VA: 0x62ee2, Ghidra: FUN_00062ee2)
 * Prototype: void panmap_update_player_view_state_062ee2(void);
 * Address  : 0x62ee2 (Size: 576 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 2 -> panmap_fn_062b62, panmap_fn_062eb7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void panmap_update_player_view_state_062ee2(void)

{
  undefined1 uval;
  int val;
  uint uval_2;
  int val_2;
  int arg_eax;
  int ui_scale;
  uint uval_3;
  int val_3;
  int ui_scale_2;
  int extraout_ECX;
  int arg_edx;
  int val_4;
  int val_5;
  int loop_i;
  int val_6;
  undefined1 *word_ptr;
  int player_off;
  int arg_ebx;
  undefined *word_ptr_2;
  undefined *local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  
  g_bss_0034d24c = arg_eax / (int)(uint)g_units_per_pixel;
  ui_scale = arg_edx / (int)(uint)g_units_per_pixel;
  g_bss_0034d250 = ui_scale;
  panmap_fn_062eb7();
  panmap_fn_062b62();
  val_2 = g_screen_pitch;
  player_off = *(int *)((int)&g_player_active_camera + g_my_player_word._3_1_ * 0x4ef);
  uval_3 = -*(int *)(player_off + 7) & 0x7ff;
  val = (&g_slab_attr_table)[uval_3];
  val_4 = val * arg_ebx >> 0x1f;
  val_3 = (int)(&PTR_LAB_00192fe0)[uval_3] * arg_ebx;
  val_5 = val_3 >> 0x1f;
  val_3 = (int)((val_3 + val_5 * -0x100) - (uint)(val_5 << 7 < 0)) >> 8;
  val_5 = -arg_ebx * val >> 0x1f;
  val_5 = (int)((-arg_ebx * val + val_5 * -0x100) - (uint)(val_5 << 7 < 0)) >> 8;
  ui_scale_2 = (int)(0x74 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
  loop_i = ui_scale_2 * arg_ebx >> 0x1f;
  loop_i = (int)((ui_scale_2 * arg_ebx + loop_i * -0x200) - (uint)(loop_i << 8 < 0)) >> 9;
  val_6 = (int)(&PTR_LAB_00192fe0)[uval_3] * loop_i;
  local_20 = (uint)*(byte *)(player_off + 3) * 0x10000 - (val_6 + -loop_i * val);
  local_34 = &g_bss_0035e5f4;
  local_24 = (uint)*(byte *)(*(int *)((int)&g_player_active_camera + g_my_player_word._3_1_ * 0x4ef) + 1) *
             0x10000 - (val * loop_i + val_6);
  local_28 = extraout_ECX + g_display_bss_003d9818 + ui_scale * g_screen_pitch;
  g_bss_00361b88 = val_3;
  g_bss_00361b8c = val_5;
  for (local_14 = 0; local_14 < ui_scale_2 << 2; local_14 = local_14 + 4) {
    player_off = *(int *)((int)&g_bss_0035e424 + local_14);
    ui_scale = *(int *)((int)&g_bss_0035e254 + local_14);
    val_6 = val_3 * (player_off + -1) + local_24;
    for (loop_i = local_20 + (player_off + -1) * val_5;
        (ui_scale < player_off &&
        ((((val_6 < 0 || (loop_i < 0)) || (0xffffff < val_6)) || (0xffffff < loop_i))));
        loop_i = loop_i - val_5) {
      val_6 = val_6 - val_3;
      player_off = player_off + -1;
    }
    val_6 = val_3 * ui_scale + local_24;
    for (loop_i = val_5 * ui_scale + local_20;
        (ui_scale < player_off &&
        (((val_6 < 0 || (loop_i < 0)) || ((0xffffff < val_6 || (0xffffff < loop_i))))));
        loop_i = loop_i + val_5) {
      val_6 = val_6 + val_3;
      ui_scale = ui_scale + 1;
    }
    word_ptr = (undefined1 *)(local_28 + ui_scale);
    player_off = player_off - ui_scale;
    word_ptr_2 = local_34 + ui_scale;
    if (0 < player_off) {
      do {
        uval_3 = (uint)val_6 >> 0x10;
        uval_2 = (uint)loop_i >> 0x10;
        uval = *word_ptr_2;
        val_6 = val_6 + g_bss_00361b88;
        loop_i = loop_i + g_bss_00361b8c;
        word_ptr_2 = word_ptr_2 + 1;
        *word_ptr = (&g_bss_0035d254)
                   [CONCAT11(uval,(&g_bss_0034d254)[CONCAT11((char)uval_2,(char)uval_3)])];
        word_ptr = word_ptr + 1;
        player_off = player_off + -1;
      } while (player_off != 0);
    }
    local_28 = local_28 + val_2;
    local_34 = local_34 + ui_scale_2;
    local_24 = local_24 +
               ((int)((val * arg_ebx + val_4 * -0x100) - (uint)(val_4 << 7 < 0)) >> 8);
    local_20 = local_20 + val_3;
  }
  return;
}

/******************************************************************************
 * Function : panmap_door_flagged_position_063122 (Original VA: 0x63122, Ghidra: FUN_00063122)
 * Prototype: void panmap_door_flagged_position_063122(void);
 * Address  : 0x63122 (Size: 671 bytes)
 * Module   : panmap.cpp [direct_file_string_xref]
 * OrigLine : panmap.cpp lines 591
 * Purpose  : String 'No door for flagged position'
 * Callers  : 15 -> build_attempt_tag_area_outside_014614, build_attempt_tag_area_outside_01495c, door_fn_023042, door_remove_keyhole_0230d3, dungeon_process_map_subtile_023ad0, file_update_player_dungeon_02c833, inits_non_keeper_keeper_game_0402e5, specials_fn_070c0c ...
 * Callees  : 2 -> door_process_map_subtile_022b3a, LbErrorLog
 ******************************************************************************/
void panmap_door_flagged_position_063122(void)

{
  int val;
  byte player_off;
  byte flag;
  char slab_coord;
  byte slab_coord_2;
  int arg_eax;
  int val_2;
  char room_ptr;
  char extraout_CL;
  int arg_ecx;
  int subtile_x;
  int arg_ebx;
  int loop_i;
  char *local_58;
  int local_28;
  char *local_24;
  int local_1c;
  int local_18;
  
  local_24 = &g_bss_0034d254 + subtile_x * 0x100 + arg_eax;
  player_off = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
  val = subtile_x + arg_ecx;
  local_28 = subtile_x * 0x500;
  for (; (subtile_x < val && (subtile_x < 0x100)); subtile_x = subtile_x + 1) {
    local_58 = local_24;
    local_18 = arg_eax * 5 + local_28;
    local_1c = arg_eax << 2;
    for (loop_i = arg_eax; (loop_i < arg_eax + arg_ebx && (loop_i < 0x100)); loop_i = loop_i + 1) {
      val_2 = subtile_x * 0x100 + loop_i;
      flag = *(byte *)((int)&g_map_subtiles + local_18);
      room_ptr = '\0';
      if ((loop_i / 3 < 0x55) && (subtile_x / 3 < 0x55)) {
        slab_coord = (&g_slabmap_base)
                [((&g_subtile_to_slab_lut)[subtile_x] * 0x55 + *(int *)((int)&g_subtile_to_slab_lut + local_1c)) * 6];
        slab_coord_2 = (&g_slabmap)
                [((&g_subtile_to_slab_lut)[val_2 % 0x100] +
                 (&g_subtile_to_slab_lut)
                 [(int)((val_2 + (val_2 >> 0x1f) * -0x100) - (uint)((val_2 >> 0x1f) << 7 < 0)) >> 8]
                 * 0x55) * 6] & 7;
        if (6 < slab_coord_2) {
          slab_coord_2 = slab_coord_2 - 3;
        }
        if ((flag & 4) == 0) {
          if ((flag & 0x80) == 0) {
            if ((flag & 1) == 0) {
              if ((1 << (player_off & 0x1f) & *(uint *)((int)&g_map_subtiles + local_18 + 1) >> 0x1c) != 0)
              {
                if ((flag & 2) == 0) {
                  if (slab_coord == '\0') {
                    room_ptr = '\x02';
                  }
                  else if ((flag & 0x20) == 0) {
                    if ((flag & 0x40) == 0) {
                      if ((flag & 0x10) == 0) {
                        if (slab_coord == '\f') {
                          room_ptr = '\x06';
                        }
                        else if (slab_coord == '\r') {
                          room_ptr = '\a';
                        }
                        else {
                          room_ptr = slab_coord_2 + 0xaa;
                        }
                      }
                    }
                    else {
                      val_2 = door_process_map_subtile_022b3a();
                      if (val_2 == 0) {
                        LbErrorLog(); /* LbErrorLog("panmap.cpp", line 591, "No door for flagged position") */
                        room_ptr = extraout_CL;
                      }
                      else {
                        room_ptr = slab_coord_2 + 0x6e +
                                (*(char *)(val_2 + 0x1a) * '\x02' +
                                (*(char *)(val_2 + 0x18) == '\x01')) * '\x06';
                      }
                    }
                  }
                  else {
                    room_ptr = '\x01';
                  }
                }
                else {
                  room_ptr = (char)*(undefined2 *)
                                 (&g_room_slabs_count +
                                 (uint)(byte)(&g_bss_002d33c8)
                                             [((&g_subtile_to_slab_lut)[subtile_x] * 0x55 +
                                              *(int *)((int)&g_subtile_to_slab_lut + local_1c)) * 6] * 0x45)
                          * '\x06' + '\b' + slab_coord_2;
                }
              }
            }
            else {
              room_ptr = '\x05';
            }
          }
          else {
            room_ptr = '\x04';
          }
        }
        else {
          room_ptr = '\x03';
        }
        *local_58 = room_ptr;
      }
      local_58 = local_58 + 1;
      local_18 = local_18 + 5;
      local_1c = local_1c + 4;
    }
    local_24 = local_24 + 0x100;
    local_28 = local_28 + 0x500;
  }
  return;
}

/******************************************************************************
 * Function : panmap_fn_0633c4 (Original VA: 0x633c4, Ghidra: FUN_000633c4)
 * Prototype: undefined4 panmap_fn_0633c4(void);
 * Address  : 0x633c4 (Size: 78 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module panmap.cpp procedure @ 0x0633c4
 * Callers  : 1 -> watcom_crt_fn_10eec1
 * Callees  : 7 -> game_out_sync_gameturn_036ff4, person_ERROR_063412, setup_verify_cdrom_installation, setup_shutdown_video_and_audio, LbTimerClock, bflib_system_io_fn_0f071e, bflib_system_io_fn_0f4409
 ******************************************************************************/
undefined4 panmap_fn_0633c4(void)

{
  short short_val;
  int val;
  int extraout_EDX;
  
  LbTimerClock();
  bflib_system_io_fn_0f071e();
  short_val = person_ERROR_063412();
  if (-1 < short_val) {
    val = setup_verify_cdrom_installation();
    if (val != 0) {
      game_out_sync_gameturn_036ff4();
    }
    setup_shutdown_video_and_audio();
    if ((extraout_EDX == 0) || (g_bss_00334021 != 0)) {
      bflib_system_io_fn_0f4409(&g_bss_00361b90);
    }
  }
  return 0;
}

