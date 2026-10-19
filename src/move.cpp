/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: move.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 33
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : move_process_map_subtile_0b28e8 (Original VA: 0xb28e8, Ghidra: FUN_000b28e8)
 * Prototype: int move_process_map_subtile_0b28e8(void);
 * Address  : 0xb28e8 (Size: 969 bytes)
 * Module   : move.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 67 -> angtool_fn_011606, ariadne_fn_01211a, ariadne_fn_012230, ariadne_fn_0123ba, ariadne_speed_01277d, ariadne_fn_012b04, ariadne_fn_012c46, ariadne_fn_012edf ...
 * Callees  : 0 -> 
 ******************************************************************************/
int move_process_map_subtile_0b28e8(void)

{
  byte flag;
  ushort uval;
  uint uval_2;
  uint uval_3;
  int thing;
  uint uval_4;
  uint uval_5;
  int val;
  ushort *arg_edx;
  uint uval_6;
  uint uval_7;
  uint uval_8;
  uint loop_i;
  int val_2;
  uint local_5c;
  uint local_58;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2);
  }
  else {
    uval = *(ushort *)(thing + 0x56);
  }
  uval_4 = uval / 2;
  uval_6 = *arg_edx - uval_4;
  if ((int)uval_6 < 0) {
    uval_6 = 0;
  }
  uval_7 = arg_edx[1] - uval_4;
  if ((int)uval_7 < 0) {
    uval_7 = 0;
  }
  uval_8 = *arg_edx + uval_4;
  if (0xffff < uval_8) {
    uval_8 = 0xffff;
  }
  uval_4 = uval_4 + arg_edx[1];
  if (0xffff < uval_4) {
    uval_4 = 0xffff;
  }
  local_5c = 0;
  local_58 = 0xf;
  uval_2 = local_58;
  for (loop_i = uval_7; uval_3 = uval_6, loop_i < uval_4; loop_i = loop_i + 0x100) {
    for (; uval_3 < uval_8; uval_3 = uval_3 + 0x100) {
      val = ((loop_i >> 8 & 0xff) * 0x100 + (uval_3 >> 8 & 0xff)) * 5;
      val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
      uval_5 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
      if (uval_5 <= local_5c) {
        uval_5 = local_5c;
      }
      flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
      if ((flag & 0xe) == 0) {
        local_58 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
        if (uval_2 <= local_58) {
          local_58 = uval_2;
        }
      }
      else {
        local_58 = 8 - ((flag & 0xf) >> 1);
        if (uval_2 < local_58) {
          local_58 = uval_2;
        }
      }
      local_5c = uval_5;
      uval_2 = local_58;
    }
  }
  for (; uval_7 < uval_4; uval_7 = uval_7 + 0x100) {
    val = ((uval_7 >> 8 & 0xff) * 0x100 + (uval_8 >> 8 & 0xff)) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    loop_i = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (loop_i <= local_5c) {
      loop_i = local_5c;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_58 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_58) {
        local_58 = uval_2;
      }
    }
    else {
      local_58 = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_58) {
        local_58 = uval_2;
      }
    }
    local_5c = loop_i;
    uval_2 = local_58;
  }
  for (; uval_6 < uval_8; uval_6 = uval_6 + 0x100) {
    val = ((uval_6 >> 8 & 0xff) + (uval_4 >> 8 & 0xff) * 0x100) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    uval_7 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (uval_7 <= local_5c) {
      uval_7 = local_5c;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_58 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_58) {
        local_58 = uval_2;
      }
    }
    else {
      local_58 = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_58) {
        local_58 = uval_2;
      }
    }
    local_5c = uval_7;
    uval_2 = local_58;
  }
  val = ((uval_8 >> 8 & 0xff) + (uval_4 >> 8 & 0xff) * 0x100) * 5;
  val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
  uval_6 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
  if (uval_6 <= local_5c) {
    uval_6 = local_5c;
  }
  flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
  if ((flag & 0xe) == 0) {
    uval_4 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
    if (uval_2 <= uval_4) {
      uval_4 = uval_2;
    }
  }
  else {
    uval_4 = 8 - ((flag & 0xf) >> 1);
    if (uval_2 < uval_4) {
      uval_4 = uval_2;
    }
  }
  val = uval_6 * 0x100;
  if (uval_4 << 8 <= (uint)*(ushort *)(thing + 0x58) + val) {
    val = *(int *)(arg_edx + 1) >> 0x10;
  }
  return val;
}

/******************************************************************************
 * Function : move_process_map_subtile_0b2cb4 (Original VA: 0xb2cb4, Ghidra: FUN_000b2cb4)
 * Prototype: int move_process_map_subtile_0b2cb4(void);
 * Address  : 0xb2cb4 (Size: 907 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 7 -> temple_update_slab_subtile_columns_0739b9, room_number_slabs_room_zero_0cc968, room_could_find_valid_first_0ccc08, room_number_slabs_room_zero_0ccf10, room_could_find_valid_random_0cd1d4, room_update_slab_subtile_columns_0cdcd0, slab_could_find_nearby_space_0dacf0
 * Callees  : 0 -> 
 ******************************************************************************/
int move_process_map_subtile_0b2cb4(void)

{
  byte flag;
  uint uval;
  uint uval_2;
  int arg_eax;
  uint uval_3;
  uint uval_4;
  uint uval_5;
  int val;
  ushort *arg_edx;
  int arg_ebx;
  uint uval_6;
  uint loop_i;
  int val_2;
  uint uval_7;
  uint local_54;
  uint local_50;
  
  uval_4 = (uint)*arg_edx - arg_ebx;
  uval_6 = (uint)arg_edx[1] - arg_ebx;
  uval_7 = (uint)*arg_edx + arg_ebx;
  if (0xffff < uval_7) {
    uval_7 = 0xffff;
  }
  uval_3 = (uint)arg_edx[1] + arg_ebx;
  if (0xffff < uval_3) {
    uval_3 = 0xffff;
  }
  local_54 = 0;
  local_50 = 0xf;
  uval = local_50;
  for (loop_i = uval_6; uval_2 = uval_4, loop_i < uval_3; loop_i = loop_i + 0x100) {
    for (; uval_2 < uval_7; uval_2 = uval_2 + 0x100) {
      val = ((loop_i >> 8 & 0xff) * 0x100 + (uval_2 >> 8 & 0xff)) * 5;
      val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
      uval_5 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
      if (uval_5 <= local_54) {
        uval_5 = local_54;
      }
      flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
      if ((flag & 0xe) == 0) {
        local_50 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
        if (uval <= local_50) {
          local_50 = uval;
        }
      }
      else {
        local_50 = 8 - ((flag & 0xf) >> 1);
        if (uval < local_50) {
          local_50 = uval;
        }
      }
      local_54 = uval_5;
      uval = local_50;
    }
  }
  for (; uval_6 < uval_3; uval_6 = uval_6 + 0x100) {
    val = ((uval_6 >> 8 & 0xff) * 0x100 + (uval_7 >> 8 & 0xff)) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    loop_i = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (loop_i <= local_54) {
      loop_i = local_54;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_50 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval <= local_50) {
        local_50 = uval;
      }
    }
    else {
      local_50 = 8 - ((flag & 0xf) >> 1);
      if (uval < local_50) {
        local_50 = uval;
      }
    }
    local_54 = loop_i;
    uval = local_50;
  }
  for (; uval_4 < uval_7; uval_4 = uval_4 + 0x100) {
    val = ((uval_3 >> 8 & 0xff) * 0x100 + (uval_4 >> 8 & 0xff)) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    uval_6 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (uval_6 <= local_54) {
      uval_6 = local_54;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_50 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval <= local_50) {
        local_50 = uval;
      }
    }
    else {
      local_50 = 8 - ((flag & 0xf) >> 1);
      if (uval < local_50) {
        local_50 = uval;
      }
    }
    local_54 = uval_6;
    uval = local_50;
  }
  val = ((uval_3 >> 8 & 0xff) * 0x100 + (uval_7 >> 8 & 0xff)) * 5;
  val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
  uval_4 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
  if (uval_4 <= local_54) {
    uval_4 = local_54;
  }
  flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
  if ((flag & 0xe) == 0) {
    uval_6 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
    if (uval <= uval_6) {
      uval_6 = uval;
    }
  }
  else {
    uval_6 = 8 - ((flag & 0xf) >> 1);
    if (uval < uval_6) {
      uval_6 = uval;
    }
  }
  val = uval_4 * 0x100;
  if (uval_6 << 8 <= (uint)*(ushort *)(arg_eax + 0x58) + val) {
    val = *(int *)(arg_edx + 1) >> 0x10;
  }
  return val;
}

/******************************************************************************
 * Function : move_process_map_subtile_0b3040 (Original VA: 0xb3040, Ghidra: FUN_000b3040)
 * Prototype: int move_process_map_subtile_0b3040(void);
 * Address  : 0xb3040 (Size: 930 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 5 -> ariadne_fn_012a2e, creature_fn_07e134, creature_fn_07f228, update_state_return_type_human_0e0b1c, update_update_creature_control_0e4220
 * Callees  : 0 -> 
 ******************************************************************************/
int move_process_map_subtile_0b3040(void)

{
  byte flag;
  ushort uval;
  int val;
  uint uval_2;
  uint uval_3;
  int thing;
  uint uval_4;
  uint loop_i;
  uint uval_5;
  ushort *arg_edx;
  uint uval_6;
  uint uval_7;
  int val_2;
  uint uval_8;
  uint local_50;
  uint local_4c;
  undefined1 uStack_43;
  undefined1 uStack_3f;
  undefined1 uStack_33;
  byte bStack_2f;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2);
  }
  else {
    uval = *(ushort *)(thing + 0x56);
  }
  uval_4 = uval / 2;
  uval_6 = *arg_edx - uval_4;
  if ((int)uval_6 < 0) {
    uval_6 = 0;
  }
  uval_7 = arg_edx[1] - uval_4;
  if ((int)uval_7 < 0) {
    uval_7 = 0;
  }
  uval_8 = *arg_edx + uval_4;
  if (0xffff < uval_8) {
    uval_8 = 0xffff;
  }
  uval_4 = uval_4 + arg_edx[1];
  if (0xffff < uval_4) {
    uval_4 = 0xffff;
  }
  local_50 = 0;
  local_4c = 0xf;
  uval_2 = local_4c;
  for (loop_i = uval_7; uval_3 = uval_6, loop_i < uval_4; loop_i = loop_i + 0x100) {
    for (; uval_3 < uval_8; uval_3 = uval_3 + 0x100) {
      uStack_3f = (undefined1)(loop_i >> 8);
      uStack_43 = (undefined1)(uval_3 >> 8);
      val = (uint)CONCAT11(uStack_3f,uStack_43) * 5;
      val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
      uval_5 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
      if (uval_5 <= local_50) {
        uval_5 = local_50;
      }
      flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
      if ((flag & 0xe) == 0) {
        local_4c = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
        if (uval_2 <= local_4c) {
          local_4c = uval_2;
        }
      }
      else {
        local_4c = 8 - ((flag & 0xf) >> 1);
        if (uval_2 < local_4c) {
          local_4c = uval_2;
        }
      }
      local_50 = uval_5;
      uval_2 = local_4c;
    }
  }
  for (; uval_7 < uval_4; uval_7 = uval_7 + 0x100) {
    val = ((uval_7 >> 8 & 0xff) * 0x100 + (uval_8 >> 8 & 0xff)) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    loop_i = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (loop_i <= local_50) {
      loop_i = local_50;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_4c = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_4c) {
        local_4c = uval_2;
      }
    }
    else {
      local_4c = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_4c) {
        local_4c = uval_2;
      }
    }
    local_50 = loop_i;
    uval_2 = local_4c;
  }
  bStack_2f = (byte)(uval_4 >> 8);
  for (; uval_6 < uval_8; uval_6 = uval_6 + 0x100) {
    uStack_33 = (undefined1)(uval_6 >> 8);
    val = (uint)CONCAT11(bStack_2f,uStack_33) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    uval_4 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (uval_4 <= local_50) {
      uval_4 = local_50;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_4c = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_4c) {
        local_4c = uval_2;
      }
    }
    else {
      local_4c = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_4c) {
        local_4c = uval_2;
      }
    }
    local_50 = uval_4;
    uval_2 = local_4c;
  }
  uval_6 = (uint)(*(byte *)((int)&g_bss_0019e973 +
                          (*(uint *)((int)&g_map_subtiles +
                                    ((uval_8 >> 8 & 0xff) + (uint)bStack_2f * 0x100) * 5 + 1) &
                          0x7ff) * 0x18 + 2) >> 4);
  if (uval_6 <= local_50) {
    uval_6 = local_50;
  }
  return uval_6 << 8;
}

/******************************************************************************
 * Function : move_process_map_subtile_0b33e4 (Original VA: 0xb33e4, Ghidra: FUN_000b33e4)
 * Prototype: int move_process_map_subtile_0b33e4(void);
 * Address  : 0xb33e4 (Size: 931 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> comptool_thing_held_computer_unconsious_01e226, room_fn_0c7970
 * Callees  : 0 -> 
 ******************************************************************************/
int move_process_map_subtile_0b33e4(void)

{
  byte flag;
  ushort uval;
  int val;
  uint uval_2;
  uint uval_3;
  int thing;
  uint uval_4;
  uint loop_i;
  byte flag_2;
  ushort *arg_edx;
  uint uval_5;
  uint uval_6;
  int val_2;
  uint uval_7;
  uint local_4c;
  undefined1 uStack_43;
  undefined1 uStack_3f;
  undefined1 uStack_33;
  byte bStack_2f;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2);
  }
  else {
    uval = *(ushort *)(thing + 0x56);
  }
  uval_4 = uval / 2;
  uval_5 = *arg_edx - uval_4;
  if ((int)uval_5 < 0) {
    uval_5 = 0;
  }
  uval_6 = arg_edx[1] - uval_4;
  if ((int)uval_6 < 0) {
    uval_6 = 0;
  }
  uval_7 = *arg_edx + uval_4;
  if (0xffff < uval_7) {
    uval_7 = 0xffff;
  }
  uval_4 = uval_4 + arg_edx[1];
  if (0xffff < uval_4) {
    uval_4 = 0xffff;
  }
  flag = 0;
  local_4c = 0xf;
  uval_2 = local_4c;
  for (loop_i = uval_6; uval_3 = uval_5, loop_i < uval_4; loop_i = loop_i + 0x100) {
    for (; uval_3 < uval_7; uval_3 = uval_3 + 0x100) {
      uStack_3f = (undefined1)(loop_i >> 8);
      uStack_43 = (undefined1)(uval_3 >> 8);
      val = (uint)CONCAT11(uStack_3f,uStack_43) * 5;
      val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
      flag_2 = *(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4;
      if (flag_2 <= flag) {
        flag_2 = flag;
      }
      flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
      if ((flag & 0xe) == 0) {
        local_4c = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
        if (uval_2 <= local_4c) {
          local_4c = uval_2;
        }
      }
      else {
        local_4c = 8 - ((flag & 0xf) >> 1);
        if (uval_2 < local_4c) {
          local_4c = uval_2;
        }
      }
      uval_2 = local_4c;
      flag = flag_2;
    }
  }
  for (; uval_6 < uval_4; uval_6 = uval_6 + 0x100) {
    val = ((uval_6 >> 8 & 0xff) * 0x100 + (uval_7 >> 8 & 0xff)) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    flag_2 = *(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4;
    if (flag_2 <= flag) {
      flag_2 = flag;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_4c = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_4c) {
        local_4c = uval_2;
      }
    }
    else {
      local_4c = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_4c) {
        local_4c = uval_2;
      }
    }
    uval_2 = local_4c;
    flag = flag_2;
  }
  bStack_2f = (byte)(uval_4 >> 8);
  for (; uval_5 < uval_7; uval_5 = uval_5 + 0x100) {
    uStack_33 = (undefined1)(uval_5 >> 8);
    val = (uint)CONCAT11(bStack_2f,uStack_33) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    flag_2 = *(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4;
    if (flag_2 <= flag) {
      flag_2 = flag;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_4c = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_4c) {
        local_4c = uval_2;
      }
    }
    else {
      local_4c = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_4c) {
        local_4c = uval_2;
      }
    }
    uval_2 = local_4c;
    flag = flag_2;
  }
  val = ((uval_7 >> 8 & 0xff) + (uint)bStack_2f * 0x100) * 5;
  flag = *(byte *)((int)&g_bss_0019e973 +
                   (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2);
  if ((flag & 0xe) == 0) {
    uval_5 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
    if (uval_2 <= uval_5) {
      uval_5 = uval_2;
    }
  }
  else {
    uval_5 = 8 - ((flag & 0xf) >> 1);
    if (uval_2 < uval_5) {
      uval_5 = uval_2;
    }
  }
  return uval_5 << 8;
}

/******************************************************************************
 * Function : move_process_map_subtile_0b3788 (Original VA: 0xb3788, Ghidra: FUN_000b3788)
 * Prototype: undefined8 move_process_map_subtile_0b3788(void);
 * Address  : 0xb3788 (Size: 200 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 17 -> group_update_creature_control_039eca, input_game_action_048c77, instance_update_creature_control_04bf40, lair_process_thing_entity_04e1f2, packet_update_player_zoom_box, research_illegal_research_type_process_066b28, spell_could_find_teleport_destination_07225e, creature_update_creature_and_thing_082cac ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 move_process_map_subtile_0b3788(void)

{
  undefined2 *arg_eax;
  undefined4 arg_edx;
  uint uval;
  byte bStack_17;
  byte bStack_13;
  
  bStack_13 = (byte)((ushort)arg_eax[1] >> 8);
  bStack_17 = (byte)((ushort)*arg_eax >> 8);
  uval = (uint)(*(byte *)((int)&g_bss_0019e973 +
                          (*(uint *)((int)&g_map_subtiles +
                                    ((uint)bStack_17 + (uint)bStack_13 * 0x100) * 5 + 1) & 0x7ff) *
                          0x18 + 2) >> 4);
  if (uval == 0) {
    uval = 0;
  }
  return CONCAT44(arg_edx,uval << 8);
}

/******************************************************************************
 * Function : move_process_map_subtile_0b3850 (Original VA: 0xb3850, Ghidra: FUN_000b3850)
 * Prototype: undefined8 move_process_map_subtile_0b3850(void);
 * Address  : 0xb3850 (Size: 201 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> creature_process_thing_entity_0849c8, creature_update_creature_control_085ba4, creature_process_thing_entity_085df8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 move_process_map_subtile_0b3850(void)

{
  byte flag;
  int val;
  undefined2 *arg_eax;
  undefined4 arg_edx;
  uint uval;
  byte bStack_17;
  byte bStack_13;
  
  bStack_13 = (byte)((ushort)arg_eax[1] >> 8);
  bStack_17 = (byte)((ushort)*arg_eax >> 8);
  val = ((uint)bStack_17 + (uint)bStack_13 * 0x100) * 5;
  flag = *(byte *)((int)&g_bss_0019e973 +
                   (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2);
  if ((flag & 0xe) == 0) {
    uval = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
    if (0xe < uval) {
      uval = 0xf;
    }
  }
  else {
    uval = 8 - ((flag & 0xf) >> 1);
    if (0xf < uval) {
      uval = 0xf;
    }
  }
  return CONCAT44(arg_edx,uval << 8);
}

/******************************************************************************
 * Function : move_process_map_subtile_0b391c (Original VA: 0xb391c, Ghidra: FUN_000b391c)
 * Prototype: void move_process_map_subtile_0b391c(void);
 * Address  : 0xb391c (Size: 198 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> ceiling_process_map_subtile_07da18
 * Callees  : 0 -> 
 ******************************************************************************/
void move_process_map_subtile_0b391c(void)

{
  byte flag;
  int val;
  undefined2 *arg_eax;
  int val_2;
  uint *arg_edx;
  uint uval;
  byte bStack_1b;
  byte bStack_17;
  
  *arg_edx = 0;
  arg_edx[1] = 0xf;
  bStack_17 = (byte)((ushort)arg_eax[1] >> 8);
  bStack_1b = (byte)((ushort)*arg_eax >> 8);
  val = ((uint)bStack_1b + (uint)bStack_17 * 0x100) * 5;
  val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
  uval = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
  if (uval <= *arg_edx) {
    uval = *arg_edx;
  }
  *arg_edx = uval;
  flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
  if ((flag & 0xe) == 0) {
    uval = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
    if (arg_edx[1] <= uval) {
      uval = arg_edx[1];
    }
  }
  else {
    uval = 8 - ((flag & 0xf) >> 1);
    if (arg_edx[1] < uval) {
      uval = arg_edx[1];
    }
  }
  arg_edx[1] = uval;
  return;
}

/******************************************************************************
 * Function : move_process_map_subtile_0b39e4 (Original VA: 0xb39e4, Ghidra: FUN_000b39e4)
 * Prototype: undefined8 move_process_map_subtile_0b39e4(void);
 * Address  : 0xb39e4 (Size: 125 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> anger_handle_door_thing_0102c0, combold_thing_stuck_finding_melee_0171e4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 move_process_map_subtile_0b39e4(void)

{
  byte flag;
  int arg_eax;
  int val;
  uint uval;
  undefined4 arg_edx;
  
  val = (*(uint *)((int)&g_map_subtiles +
                    (uint)CONCAT11(*(undefined1 *)(arg_eax + 3),*(undefined1 *)(arg_eax + 1)) * 5 + 1)
          & 0x7ff) * 0x18;
  flag = *(byte *)((int)&g_bss_0019e973 + val + 2);
  if ((flag & 0xf0) == 0) {
    uval = (uint)*(ushort *)
                   (&g_bss_002e8c11 + (*(int *)((int)&g_bss_0019e973 + val + 3) >> 0x10) * 2);
  }
  else {
    uval = *(int *)((int)&g_bss_0019e977 + (uint)(flag >> 4) * 2 + val) >> 0x10;
  }
  return CONCAT44(arg_edx,(uint)((uval & 0xfffffffe) == 0x28));
}

/******************************************************************************
 * Function : move_fn_0b3a64 (Original VA: 0xb3a64, Ghidra: FUN_000b3a64)
 * Prototype: ulonglong move_fn_0b3a64(void);
 * Address  : 0xb3a64 (Size: 151 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Module move.cpp procedure @ 0x0b3a64
 * Callers  : 1 -> draw_process_map_subtile_08bde8
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong move_fn_0b3a64(void)

{
  int arg_eax;
  uint uval;
  int val;
  undefined4 arg_edx;
  
  uval = *(uint *)(arg_eax + 1);
  if (((uval >> 0x1c & (uint)g_bss_00379395) != 0) && ((uval & 0x7ff) == 0)) {
    return CONCAT44(arg_edx,uval) & 0xffffffff000007ff;
  }
  if ((*(uint *)(arg_eax + 1) >> 0x1c & (uint)g_bss_00379395) == 0) {
    val = g_bss_002e6f23 * 4;
    uval = g_bss_002e6f23;
  }
  else {
    uval = *(uint *)(arg_eax + 1) & 0x7ff;
    val = uval << 2;
  }
  val = (val - uval) * 8;
  uval = (uint)(*(byte *)((int)&g_bss_0019e973 + val + 2) >> 4);
  if (uval == 0) {
    return CONCAT44(arg_edx,*(int *)((int)&g_bss_0019e973 + val + 3) >> 0x10);
  }
  return CONCAT44(arg_edx,(uint)*(ushort *)
                                ((int)&g_bss_001aa97b +
                                (*(int *)((int)&g_bss_0019e977 + uval * 2 + val) >> 0x10) * 0x12));
}

/******************************************************************************
 * Function : move_fn_0b3afc (Original VA: 0xb3afc, Ghidra: FUN_000b3afc)
 * Prototype: byte move_fn_0b3afc(void);
 * Address  : 0xb3afc (Size: 18 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Module move.cpp procedure @ 0x0b3afc
 * Callers  : 9 -> imptool_process_map_subtile_03fc39, can_thing_traverse_subtile, trace_line_of_sight_2d, update_fn_0ddb5c, update_fn_0de008, update_fn_0de074, update_fn_0e25c4, update_process_map_subtile_0e2a14 ...
 * Callees  : 0 -> 
 ******************************************************************************/
byte move_fn_0b3afc(void)

{
  int arg_eax;
  int arg_edx;
  
  return (&g_bss_00269203)[arg_eax + arg_edx * 0x100] & 0x10;
}

/******************************************************************************
 * Function : move_fn_0b3b10 (Original VA: 0xb3b10, Ghidra: FUN_000b3b10)
 * Prototype: void move_fn_0b3b10(void);
 * Address  : 0xb3b10 (Size: 71 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Module move.cpp procedure @ 0x0b3b10
 * Callers  : 20 -> door_update_creature_and_thing_023250, entrance_find_valid_place_entrance_026b04, gravyard_could_find_valid_position_039901, instance_process_thing_entity_04baad, magic_update_creature_and_thing_04efd4, research_could_find_room_thing_066dc2, scavenged_room_disappeared_valid_067e04, sound_room_ambient_sound_object_06e8fc ...
 * Callees  : 3 -> mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, move_process_map_subtile_0b28e8
 ******************************************************************************/
void move_fn_0b3b10(void)

{
  undefined2 uval;
  int arg_eax;
  undefined4 *arg_edx;
  byte flag;
  
  flag = 0;
  if ((*(char *)(arg_eax + 0xe) == *(char *)((int)arg_edx + 1)) &&
     (*(char *)(arg_eax + 0x10) == *(char *)((int)arg_edx + 3))) {
    *(undefined4 *)(arg_eax + 0xd) = *arg_edx;
    *(undefined2 *)(arg_eax + 0x11) = *(undefined2 *)(arg_edx + 1);
  }
  else {
    mapwho_process_map_subtile_050ca9();
    *(undefined4 *)(arg_eax + 0xd) = *arg_edx;
    *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(arg_edx + (uint)flag * -2 + 1);
    mapwho_process_map_subtile_050c38();
  }
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(arg_eax + 0x60) = uval;
  return;
}

/******************************************************************************
 * Function : move_update_creature_control_0b3b58 (Original VA: 0xb3b58, Ghidra: FUN_000b3b58)
 * Prototype: undefined4 move_update_creature_control_0b3b58(void);
 * Address  : 0xb3b58 (Size: 138 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 59 -> angtool_process_dungeon_room_010f6c, angtool_fn_01107a, angtool_update_slab_subtile_columns_01173f, effect_update_creature_and_thing_02649f, entrance_find_valid_place_entrance_026b04, evil_update_creature_control_02796f, evil_hope_we_never_get_0286d5, evil_update_creature_control_028aa0 ...
 * Callees  : 4 -> person_update_creature_control_064ae7, ceiling_process_map_subtile_07dbc0, creature_fn_0827fc, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 move_update_creature_control_0b3b58(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined1 extraout_CL;
  byte arg_dl;
  undefined1 arg_bl;
  byte flag;
  undefined4 local_10;
  undefined2 local_c [2];
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_10 = CONCAT31((uint3)arg_dl,0x80);
  local_10 = CONCAT13(arg_bl,CONCAT12(0x80,(undefined2)local_10));
  local_c[0] = move_process_map_subtile_0b28e8();
  val = ceiling_process_map_subtile_07dbc0();
  if ((val == 0) && (ch = creature_fn_0827fc(), ch != '\0')) {
    *(undefined1 *)(cctrl_ptr + 0x88) = extraout_CL;
    person_update_creature_control_064ae7();
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    *(undefined4 *)(cctrl_ptr + 0x2d) = local_10;
    *(undefined2 *)(cctrl_ptr + 0x31 + (uint)flag * -8) = local_c[(uint)flag * -4];
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : move_fn_0b3be4 (Original VA: 0xb3be4, Ghidra: FUN_000b3be4)
 * Prototype: void move_fn_0b3be4(void);
 * Address  : 0xb3be4 (Size: 26 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Module move.cpp procedure @ 0x0b3be4
 * Callers  : 9 -> angtool_update_creature_and_thing_011342, angtool_update_creature_and_thing_0114f6, combold_thing_stuck_finding_melee_0171e4, impset_stack_type_03d3f3, impset_update_creature_control_03de04, magic_update_slab_subtile_columns_050349, scavenge_update_creature_and_thing_067fd3, temple_this_should_happen_073d41 ...
 * Callees  : 1 -> move_update_creature_control_0b3b58
 ******************************************************************************/
void move_fn_0b3be4(void)

{
  move_update_creature_control_0b3b58();
  return;
}

/******************************************************************************
 * Function : move_update_creature_control_0b3c00 (Original VA: 0xb3c00, Ghidra: FUN_000b3c00)
 * Prototype: uint move_update_creature_control_0b3c00(void);
 * Address  : 0xb3c00 (Size: 141 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 5 -> evil_roll_action_random_02855c, evil_update_creature_control_02864e, evil_update_creature_and_thing_028eb4, food_get_near_food_0aafd4, move_fn_0b3c90
 * Callees  : 3 -> person_update_creature_control_064ae7, creature_fn_0827fc, routes_fn_0d1444
 ******************************************************************************/
uint move_update_creature_control_0b3c00(void)

{
  int cctrl_ptr;
  int thing;
  uint uval;
  undefined1 arg_cl;
  byte flag;
  undefined4 local_18;
  undefined2 auStack_14 [2];
  undefined1 local_10;
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_10 = arg_cl;
  routes_fn_0d1444(0x80);
  uval = creature_fn_0827fc();
  if ((char)uval == '\0') {
    uval = uval & 0xffff0000;
  }
  else {
    *(undefined1 *)(cctrl_ptr + 0x88) = local_10;
    person_update_creature_control_064ae7();
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    uval = 1;
    *(undefined4 *)(cctrl_ptr + 0x2d) = local_18;
    *(undefined2 *)(cctrl_ptr + 0x31 + (uint)flag * -8) = auStack_14[(uint)flag * -4];
  }
  return uval;
}

/******************************************************************************
 * Function : move_fn_0b3c90 (Original VA: 0xb3c90, Ghidra: FUN_000b3c90)
 * Prototype: void move_fn_0b3c90(void);
 * Address  : 0xb3c90 (Size: 26 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Module move.cpp procedure @ 0x0b3c90
 * Callers  : 1 -> light_update_creature_control_0ac094
 * Callees  : 1 -> move_update_creature_control_0b3c00
 ******************************************************************************/
void move_fn_0b3c90(void)

{
  move_update_creature_control_0b3c00();
  return;
}

/******************************************************************************
 * Function : move_update_creature_control_0b3cac (Original VA: 0xb3cac, Ghidra: FUN_000b3cac)
 * Prototype: undefined4 move_update_creature_control_0b3cac(void);
 * Address  : 0xb3cac (Size: 87 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> good_update_creature_control_0390af, good_update_creature_control_0390e3
 * Callees  : 2 -> person_update_creature_control_064ae7, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 move_update_creature_control_0b3cac(void)

{
  int cctrl_ptr;
  char ch;
  undefined2 uval;
  int thing;
  undefined1 extraout_CL;
  undefined1 arg_dl;
  undefined1 arg_bl;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  ch = person_update_creature_control_064ae7();
  if (ch != '\0') {
    *(undefined1 *)(cctrl_ptr + 0x2d) = extraout_CL;
    *(undefined1 *)(cctrl_ptr + 0x2e) = arg_dl;
    *(undefined1 *)(cctrl_ptr + 0x30) = arg_bl;
    *(undefined1 *)(cctrl_ptr + 0x2f) = extraout_CL;
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(cctrl_ptr + 0x31) = uval;
  }
  return 0;
}

/******************************************************************************
 * Function : move_update_creature_control_0b3d04 (Original VA: 0xb3d04, Ghidra: FUN_000b3d04)
 * Prototype: undefined4 move_update_creature_control_0b3d04(void);
 * Address  : 0xb3d04 (Size: 138 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 5 -> person_update_creature_and_thing_0641a6, person_update_creature_and_thing_0645dd, person_update_creature_and_thing_064703, person_update_creature_and_thing_064900, move_fn_0b3d90
 * Callees  : 4 -> person_update_creature_control_064ae7, ceiling_process_map_subtile_07dbc0, creature_fn_0827fc, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 move_update_creature_control_0b3d04(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined1 extraout_CL;
  byte arg_dl;
  undefined1 arg_bl;
  byte flag;
  undefined4 local_10;
  undefined2 local_c [2];
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_10 = CONCAT31((uint3)arg_dl,0x80);
  local_10 = CONCAT13(arg_bl,CONCAT12(0x80,(undefined2)local_10));
  local_c[0] = move_process_map_subtile_0b28e8();
  val = ceiling_process_map_subtile_07dbc0();
  if ((val == 0) && (ch = creature_fn_0827fc(), ch != '\0')) {
    *(undefined1 *)(cctrl_ptr + 0x88) = extraout_CL;
    person_update_creature_control_064ae7();
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    *(undefined4 *)(cctrl_ptr + 0x2d) = local_10;
    *(undefined2 *)(cctrl_ptr + 0x31 + (uint)flag * -8) = local_c[(uint)flag * -4];
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : move_fn_0b3d90 (Original VA: 0xb3d90, Ghidra: FUN_000b3d90)
 * Prototype: void move_fn_0b3d90(void);
 * Address  : 0xb3d90 (Size: 26 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Module move.cpp procedure @ 0x0b3d90
 * Callers  : 1 -> combmove_update_creature_control_01671a
 * Callees  : 1 -> move_update_creature_control_0b3d04
 ******************************************************************************/
void move_fn_0b3d90(void)

{
  move_update_creature_control_0b3d04();
  return;
}

/******************************************************************************
 * Function : move_update_creature_control_0b3dac (Original VA: 0xb3dac, Ghidra: FUN_000b3dac)
 * Prototype: undefined8 move_update_creature_control_0b3dac(void);
 * Address  : 0xb3dac (Size: 1021 bytes)
 * Module   : move.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 17 -> anger_fn_010c5f, door_update_creature_control_022c2a, good_update_creature_control_039118, mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, ceiling_process_map_subtile_07dbc0, creature_fn_07e134, creature_fn_07f804 ...
 ******************************************************************************/
undefined8 move_update_creature_control_0b3dac(void)

{
  code *str_ptr;
  char ch;
  undefined2 uval;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int val_2;
  undefined4 *word_ptr;
  byte flag;
  undefined2 auStack_82c [1014];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  short local_34 [4];
  undefined4 local_2c;
  undefined2 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  
  flag = 0;
  word_ptr = &uStack_3c;
  local_1c = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_2c = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
  uStack_28 = *(undefined2 *)(thing + 0x11);
  local_24 = *(int *)(thing + 0x36) >> 0x10;
  local_20 = *(int *)(thing + 0x3a) >> 0x10;
  *(byte *)(local_1c + 1) = *(byte *)(local_1c + 1) & 0xf7;
  uStack_40 = 0xb3e03;
  val = ceiling_process_map_subtile_07dbc0();
  val_2 = extraout_ECX;
  if (val != 0) {
    uStack_3c = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(&local_38 + (uint)flag * -2) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    uStack_40 = 0xb3e18;
    ch = move_find_valid_position_place_0b516c();
    val_2 = extraout_ECX_00;
    if (ch != '\0') {
      if ((*(char *)(thing + 0xe) == uStack_3c._1_1_) &&
         (uStack_3c._3_1_ == *(char *)(thing + 0x10))) {
        *(undefined4 *)(thing + 0xd) = uStack_3c; /* thing->mappos.val_x */
        *(undefined2 *)(thing + 0x11 + (uint)flag * -8) =
             *(undefined2 *)(&local_38 + (uint)flag * -2);
      }
      else {
        uStack_40 = 0xb3e3c;
        mapwho_process_map_subtile_050ca9();
        *(undefined4 *)(thing + 0xd) = uStack_3c; /* thing->mappos.val_x */
        *(undefined2 *)(thing + 0x11 + (uint)flag * -8) =
             *(undefined2 *)(&local_38 + (uint)flag * -2);
        uStack_40 = 0xb3e49;
        mapwho_process_map_subtile_050c38();
      }
      uStack_40 = 0xb3e5b;
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing + 0x60) = uval;
      val_2 = extraout_ECX_01;
    }
    *(byte *)(local_1c + 1) = *(byte *)(local_1c + 1) | 8;
  }
  if (*(char *)(thing + 0x1a) == '\x16') {
    uStack_40 = 0xb3e78;
    val = creature_fn_081d00();
    val_2 = extraout_ECX_02;
    if ((val != 0) && (3 < *(byte *)(thing + 0x48))) {
      val_2 = 0;
      local_24 = 0;
    }
  }
  if (((local_24 != 0) || (val_2 != 0)) || (local_20 != 0)) {
    if (local_24 < -0x100) {
      local_24 = -0x100;
    }
    else if (0x100 < local_24) {
      local_24 = 0x100;
    }
    if (val_2 < -0x100) {
      val_2 = -0x100;
    }
    else if (0x100 < val_2) {
      val_2 = 0x100;
    }
    if (local_20 < -0x100) {
      local_20 = -0x100;
    }
    else if (0x100 < local_20) {
      local_20 = 0x100;
    }
    local_34[0] = *(short *)(thing + 0xd) + (short)local_24; /* thing->mappos.val_x */
    local_34[2] = *(short *)(thing + 0x11) + (short)local_20;
    local_34[1] = *(short *)(thing + 0xf) + (short)val_2; /* thing->mappos.val_y */
    if ((*(byte *)(thing + 0x25) & 0x20) == 0) {
      uStack_40 = 0xb3f91;
      val_2 = ceiling_process_map_subtile_07dbc0();
      if (val_2 != 0) {
        uStack_40 = 0xb3fa0;
        val_2 = creature_fn_07e134();
        if (val_2 == 0) {
          uStack_40 = 0xb3fea;
          uval = move_process_map_subtile_0b28e8();
          local_34[2] = uval;
        }
        else {
          uStack_40 = 0xb3faf;
          room_fn_0c6ec0();
          if (*(short *)(local_1c + 0x1d0) == 0) {
            uStack_40 = 0xb3fcc;
            door_update_creature_control_022c2a();
          }
          uStack_40 = 0xb3fd9;
          room_fn_0c7218();
        }
      }
    }
    else {
      uStack_40 = 0xb3f44;
      val_2 = ceiling_process_map_subtile_07dbc0();
      if (val_2 != 0) {
        uStack_40 = 0xb3f57;
        room_fn_0c7058();
        if (*(short *)(local_1c + 0x1d0) == 0) {
          uStack_40 = 0xb3f74;
          door_update_creature_control_022c2a();
        }
        uStack_40 = 0xb3f81;
        room_fn_0c7218();
      }
    }
    word_ptr = &uStack_3c;
    if ((*(byte *)(local_1c + 1) & 0x10) != 0) {
      uStack_40 = 0xffffffff;
      val_2 = creature_fn_07f804();
      word_ptr = &uStack_40;
      if (val_2 != 0) {
        local_38 = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
        local_34[(uint)flag * -4] = *(short *)(thing + 0x11 + (uint)flag * -8);
        word_ptr = &uStack_40;
      }
    }
    if ((*(char *)((int)word_ptr + 9) != *(char *)(thing + 0xe)) ||
       (*(char *)(thing + 0x10) != *(char *)((int)word_ptr + 0xb))) {
      if (*(char *)(thing + 0x1a) == '\b') {
        *(undefined4 *)((int)word_ptr + -4) = 0xb4058;
        good_update_creature_control_039118();
      }
      if ((*(byte *)(thing + 0xe) / 3 != *(byte *)((int)word_ptr + 9) / 3) ||
         (*(byte *)(thing + 0x10) / 3 != *(byte *)((int)word_ptr + 0xb) / 3)) {
        *(undefined4 *)((int)word_ptr + -4) = 0xb40b3;
        creature_update_creature_and_thing_082cac();
        val_2 = (uint)*(byte *)(thing + 7) * 0x29;
        if (*(int *)(&g_data_0018c4a8 + val_2) != 0) {
          str_ptr = *(code **)(&g_data_0018c4a8 + val_2);
          *(undefined4 *)((int)word_ptr + -4) = 0xb40d7;
          (*str_ptr)();
        }
      }
    }
    if ((*(char *)(thing + 0xe) == *(char *)((int)word_ptr + 9)) &&
       (*(char *)((int)word_ptr + 0xb) == *(char *)(thing + 0x10))) {
      *(undefined4 *)(thing + 0xd) = *(undefined4 *)((int)word_ptr + 8); /* thing->mappos.val_x */
      *(undefined2 *)(thing + 0x11 + (uint)flag * -8) =
           *(undefined2 *)((int)word_ptr + (uint)flag * -8 + 0xc);
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0xb40f9;
      mapwho_process_map_subtile_050ca9();
      *(undefined4 *)(thing + 0xd) = *(undefined4 *)((int)word_ptr + 8); /* thing->mappos.val_x */
      *(undefined2 *)(thing + 0x11 + (uint)flag * -8) =
           *(undefined2 *)((int)word_ptr + (uint)flag * -8 + 0xc);
      *(undefined4 *)((int)word_ptr + -4) = 0xb4106;
      mapwho_process_map_subtile_050c38();
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xb411c;
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(thing + 0x60) = uval;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0xb413f;
  bflib_system_io_fn_0e66ec();
  *(undefined4 *)((int)word_ptr + -4) = 0xb4160;
  val_2 = anger_fn_010c5f();
  if (val_2 < 0x201) {
    *(undefined4 *)((int)word_ptr + -4) = 0xb4192;
    uval = get_2d_box_distance();
    *(undefined2 *)(*(int *)((int)word_ptr + 0x20) + 9) = uval;
  }
  else {
    *(undefined4 *)((int)word_ptr + -4) = 0xb4173;
    uval = get_2d_box_distance();
    val_2 = *(int *)((int)word_ptr + 0x20);
    *(undefined2 *)(val_2 + 9) = uval;
    *(short *)(val_2 + 9) = -*(short *)(val_2 + 9);
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr + 0x30),1);
}

/******************************************************************************
 * Function : move_shot_has_hit_thing_0b41d8 (Original VA: 0xb41d8, Ghidra: FUN_000b41d8)
 * Prototype: longlong move_shot_has_hit_thing_0b41d8(void);
 * Address  : 0xb41d8 (Size: 626 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp lines 538
 * Purpose  : String 'Shot has no hit thing type'
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 10 -> mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, setup_compute_creature_eye_offset, shot_process_thing_entity_06ca16, shot_process_thing_entity_06cee6, ceiling_process_map_subtile_07dbc0, creature_fn_07f730, creature_fn_07f804 ...
 ******************************************************************************/
longlong move_shot_has_hit_thing_0b41d8(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  uint thing_ptr;
  uint extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val_2;
  int val_3;
  short *thing_ptr_2;
  uint unaff_ESI;
  int val_4;
  byte flag;
  undefined2 auStack_818 [1018];
  undefined4 uStack_24;
  short local_20;
  short sStack_1e;
  short local_1c;
  
  flag = 0;
  thing_ptr_2 = &local_20;
  sStack_1e = (short)((uint)*(undefined4 *)(arg_eax + 0xd) >> 0x10);
  val_4 = (uint)*(byte *)(arg_eax + 0x1a) * 0x65;
  thing_ptr = 0;
  val_2 = *(int *)(arg_eax + 0x36) >> 0x10;
  val_3 = *(int *)(arg_eax + 0x38) >> 0x10;
  val = *(int *)(arg_eax + 0x3a) >> 0x10;
  if (val_2 < -0x100) {
    val_2 = -0x100;
  }
  else if (0x100 < val_2) {
    val_2 = 0x100;
  }
  if (val_3 < -0x100) {
    val_3 = -0x100;
  }
  else if (0x100 < val_3) {
    val_3 = 0x100;
  }
  if (val < -0x100) {
    val = -0x100;
  }
  else if (0x100 < val) {
    val = 0x100;
  }
  local_20 = (short)*(undefined4 *)(arg_eax + 0xd) + (short)val_2;
  sStack_1e = sStack_1e + (short)val_3;
  local_1c = *(short *)(arg_eax + 0x11) + (short)val;
  if ((&g_data_00188cbc)[val_4] == '\0') {
    thing_ptr_2 = &local_20;
    switch(*(undefined1 *)(arg_eax + 0x16)) {
    case 1:
      thing_ptr_2 = (short *)&uStack_24;
      uStack_24 = 0;
      thing_ptr = creature_fn_07f804();
      break;
    case 2:
      thing_ptr_2 = (short *)&uStack_24;
      uStack_24 = 0;
      thing_ptr = creature_fn_07f804();
      break;
    case 3:
      thing_ptr_2 = (short *)&uStack_24;
      uStack_24 = 0;
      thing_ptr = creature_fn_07f804();
      break;
    case 4:
      thing_ptr_2 = (short *)&uStack_24;
      uStack_24 = 0;
      thing_ptr = creature_fn_07f804();
      break;
    default:
      uStack_24 = 0xb437f;
      LbErrorLog(); /* LbErrorLog("move.cpp", line 538, "Shot has no hit thing type") */
      thing_ptr = extraout_ECX;
      thing_ptr_2 = &local_20;
      break;
    case 7:
      thing_ptr_2 = (short *)&uStack_24;
      uStack_24 = 0;
      thing_ptr = creature_fn_07f804();
      break;
    case 8:
      break;
    case 9:
      uStack_24 = 0;
      thing_ptr = creature_fn_07f804();
      thing_ptr_2 = (short *)&uStack_24;
      if ((thing_ptr == 0) &&
         (thing_ptr = creature_fn_07f730(), thing_ptr_2 = (short *)&uStack_24, g_thing_ptrs < thing_ptr)) {
        *(undefined2 *)(thing_ptr + 0x5e) = 0xffff;
        *(undefined2 *)(arg_eax + 0x5e) = 0xffff;
        return (ulonglong)unaff_ESI << 0x20;
      }
    }
    if (thing_ptr != 0) {
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb438e;
      val = setup_compute_creature_eye_offset();
      if (val != 0) {
        return (ulonglong)*(uint *)((int)thing_ptr_2 + 0x14) << 0x20;
      }
    }
  }
  if ((*(byte *)(arg_eax + 0x25) & 0x10) == 0) {
    *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb43ad;
    val = ceiling_process_map_subtile_07dbc0();
    if (val != 0) {
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb43ba;
      val = shot_process_thing_entity_06ca16();
      if (val != 0) {
        return (ulonglong)*(uint *)((int)thing_ptr_2 + 0x14) << 0x20;
      }
    }
  }
  else if ((&g_data_00188cdc)[val_4] != '\0') {
    *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb43d9;
    val = ceiling_process_map_subtile_07dbc0();
    if (val != 0) {
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb43e6;
      val = shot_process_thing_entity_06cee6();
      if (val != 0) {
        return (ulonglong)*(uint *)((int)thing_ptr_2 + 0x14) << 0x20;
      }
    }
  }
  if ((*(char *)(arg_eax + 0xe) == *(char *)((int)thing_ptr_2 + 1)) &&
     (*(char *)((int)thing_ptr_2 + 3) == *(char *)(arg_eax + 0x10))) {
    *(undefined4 *)(arg_eax + 0xd) = *(undefined4 *)thing_ptr_2;
    *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
         *(undefined2 *)((int)thing_ptr_2 + ((uint)flag * -2 + 1) * 4);
  }
  else {
    *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb4416;
    mapwho_process_map_subtile_050ca9();
    *(undefined4 *)(extraout_ECX_00 + 0xd) = *(undefined4 *)thing_ptr_2;
    *(undefined2 *)(extraout_ECX_00 + 0x11 + (uint)flag * -8) =
         *(undefined2 *)((int)thing_ptr_2 + ((uint)flag * -2 + 1) * 4);
    *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb4423;
    mapwho_process_map_subtile_050c38();
  }
  *(undefined4 *)((int)thing_ptr_2 + -4) = 0xb4437;
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(extraout_ECX_01 + 0x60) = uval;
  return CONCAT44(*(undefined4 *)((int)thing_ptr_2 + 0x14),1);
}

/******************************************************************************
 * Function : move_fn_0b444c (Original VA: 0xb444c, Ghidra: FUN_000b444c)
 * Prototype: undefined8 move_fn_0b444c(void);
 * Address  : 0xb444c (Size: 357 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Module move.cpp procedure @ 0x0b444c
 * Callers  : 1 -> update_fn_0e25c4
 * Callees  : 8 -> mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, sound_fn_06e538, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, room_fn_0c7058, room_fn_0c7218, room_fn_0c7550
 ******************************************************************************/
undefined8 move_fn_0b444c(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int val_2;
  undefined4 *extraout_EDX;
  int val_3;
  short *val_4;
  byte flag;
  undefined2 auStack_820 [1018];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  short local_1c;
  short local_1a;
  short local_18;
  
  flag = 0;
  val = *(int *)(arg_eax + 0x36) >> 0x10;
  val_2 = *(int *)(arg_eax + 0x38) >> 0x10;
  val_3 = *(int *)(arg_eax + 0x3a) >> 0x10;
  if (((val == 0) && (val_2 == 0)) && (val_3 == 0)) {
    uStack_20 = 0xb459f;
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(arg_eax + 0x60) = uval;
    return CONCAT44(arg_edx,1);
  }
  if (val < -0x100) {
    val = -0x100;
  }
  else if (0x100 < val) {
    val = 0x100;
  }
  if (val_2 < -0x100) {
    val_2 = -0x100;
  }
  else if (0x100 < val_2) {
    val_2 = 0x100;
  }
  if (val_3 < -0x100) {
    val_3 = -0x100;
  }
  else if (0x100 < val_3) {
    val_3 = 0x100;
  }
  local_1c = *(short *)(arg_eax + 0xd) + (short)val;
  local_1a = *(short *)(arg_eax + 0xf) + (short)val_2;
  local_18 = *(short *)(arg_eax + 0x11) + (short)val_3;
  uStack_20 = 0xb44f3;
  val = ceiling_process_map_subtile_07dbc0();
  val_4 = &local_1c;
  if (val != 0) {
    uStack_20 = 0xb4500;
    room_fn_0c7058();
    uStack_20 = 0xb450d;
    room_fn_0c7218();
    uStack_20 = 0xb4518;
    room_fn_0c7550();
    val_4 = &local_1c;
    if (*(char *)(arg_eax + 0x1a) == '\x06') {
      uStack_20 = 0x100;
      uStack_24 = 1;
      uStack_28 = 0;
      val_4 = (short *)&uStack_2c;
      uStack_2c = 3;
      sound_fn_06e538();
    }
  }
  if ((*(char *)(arg_eax + 0xe) == *(char *)((int)val_4 + 1)) &&
     (*(char *)((int)val_4 + 3) == *(char *)(arg_eax + 0x10))) {
    *(undefined4 *)(arg_eax + 0xd) = *(undefined4 *)val_4;
    *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
         *(undefined2 *)((int)val_4 + ((uint)flag * -2 + 1) * 4);
  }
  else {
    *(undefined4 *)((int)val_4 + -4) = 0xb4560;
    mapwho_process_map_subtile_050ca9();
    *(undefined4 *)(arg_eax + 0xd) = *extraout_EDX;
    *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(extraout_EDX + (uint)flag * -2 + 1);
    *(undefined4 *)((int)val_4 + -4) = 0xb456f;
    mapwho_process_map_subtile_050c38();
  }
  *(undefined4 *)((int)val_4 + -4) = 0xb4583;
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(arg_eax + 0x60) = uval;
  return CONCAT44(*(undefined4 *)((int)val_4 + 0x10),1);
}

/******************************************************************************
 * Function : move_fn_0b45b4 (Original VA: 0xb45b4, Ghidra: FUN_000b45b4)
 * Prototype: undefined8 move_fn_0b45b4(void);
 * Address  : 0xb45b4 (Size: 733 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Module move.cpp procedure @ 0x0b45b4
 * Callers  : 1 -> update_illegal_effect_element_bounce_0e26dc
 * Callees  : 12 -> effect_allocate_light_effect_024998, mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, sound_fn_06e538, ceiling_process_map_subtile_07dbc0, light_process_map_subtile_0b2398, move_process_map_subtile_0b28e8, room_fn_0c7058 ...
 ******************************************************************************/
undefined8 move_fn_0b45b4(void)

{
  char ch;
  undefined2 uval;
  int arg_eax;
  int val;
  uint uval_2;
  uint extraout_ECX;
  int val_2;
  int val_3;
  short *val_4;
  short *val_5;
  short *val_6;
  short *val_7;
  byte flag;
  undefined2 auStack_828 [1018];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  short local_24;
  short sStack_22;
  short local_20;
  undefined *local_1c;
  
  flag = 0;
  val_4 = &local_24;
  val_5 = &local_24;
  val_6 = &local_24;
  val_7 = &local_24;
  sStack_22 = (short)((uint)*(undefined4 *)(arg_eax + 0xd) >> 0x10);
  local_1c = &g_data_00189934 + (uint)*(byte *)(arg_eax + 0x1a) * 0x4e;
  val_3 = *(int *)(arg_eax + 0x36) >> 0x10;
  val = *(int *)(arg_eax + 0x3a) >> 0x10;
  val_2 = *(int *)(arg_eax + 0x38) >> 0x10;
  if (val_3 < -0x100) {
    val_3 = -0x100;
  }
  else if (0x100 < val_3) {
    val_3 = 0x100;
  }
  if (val_2 < -0x100) {
    val_2 = -0x100;
  }
  else if (0x100 < val_2) {
    val_2 = 0x100;
  }
  if (val < -0x100) {
    val = -0x100;
  }
  else if (0x100 < val) {
    val = 0x100;
  }
  local_24 = (short)*(undefined4 *)(arg_eax + 0xd) + (short)val_3;
  sStack_22 = sStack_22 + (short)val_2;
  local_20 = *(short *)(arg_eax + 0x11) + (short)val;
  uStack_28 = 0xb4678;
  val = coord3d_equal();
  if (val == 0) {
    val_7 = &local_24;
    if ((*(byte *)(arg_eax + 0x25) & 0x10) == 0) {
      uStack_28 = 0xb4695;
      val = things_collide_at();
      val_7 = &local_24;
      if (val == 0) {
        uStack_28 = 0xb46a6;
        val = ceiling_process_map_subtile_07dbc0();
        val_7 = &local_24;
        if (val != 0) {
          uStack_28 = 0xb46b7;
          room_fn_0c7058();
          uStack_28 = 0xb46c6;
          room_fn_0c7218();
          val_7 = &local_24;
          if (((extraout_ECX & 4) != 0) && (val_7 = &local_24, local_1c[0x15] != '\0')) {
            uStack_28 = 0xb46ee;
            uval_2 = light_process_map_subtile_0b2398();
            if (uval_2 == 0x27) {
              if (*(short *)(local_1c + 0x29) != 0) {
                uStack_28 = 0xb471b;
                effect_allocate_light_effect_024998();
              }
              if (*(short *)(local_1c + 0x2b) != 0) {
                uStack_28 = (uint)*(ushort *)(local_1c + 0x2d);
                local_2c = 2;
                uStack_30 = 0;
                val_4 = (short *)&uStack_34;
                uStack_34 = 3;
                sound_fn_06e538();
              }
              ch = *(char *)(*(int *)((int)val_4 + 8) + 0x2f);
              val_7 = val_4;
            }
            else if ((uval_2 & 0xfffffffe) == 0x28) {
              if (*(short *)(local_1c + 0x30) != 0) {
                uStack_28 = 0xb4793;
                effect_allocate_light_effect_024998();
              }
              if (*(short *)(local_1c + 0x32) != 0) {
                uStack_28 = (uint)*(ushort *)(local_1c + 0x34);
                local_2c = 2;
                uStack_30 = 0;
                val_5 = (short *)&uStack_34;
                uStack_34 = 3;
                sound_fn_06e538();
              }
              ch = *(char *)(*(int *)((int)val_5 + 8) + 0x36);
              val_7 = val_5;
            }
            else {
              if (*(short *)(local_1c + 0x22) != 0) {
                uStack_28 = 0xb47f0;
                effect_allocate_light_effect_024998();
              }
              if (*(short *)(local_1c + 0x24) != 0) {
                uStack_28 = (uint)*(ushort *)(local_1c + 0x26);
                local_2c = 2;
                uStack_30 = 0;
                val_6 = (short *)&uStack_34;
                uStack_34 = 3;
                sound_fn_06e538();
              }
              ch = *(char *)(*(int *)((int)val_6 + 8) + 0x28);
              val_7 = val_6;
            }
            if (ch != '\0') {
              *(undefined2 *)(arg_eax + 0x5e) = 0;
            }
          }
          *(undefined4 *)((int)val_7 + -4) = 0xb483d;
          room_fn_0c7550();
        }
      }
    }
    if ((*(char *)(arg_eax + 0xe) == *(char *)((int)val_7 + 1)) &&
       (*(char *)((int)val_7 + 3) == *(char *)(arg_eax + 0x10))) {
      *(undefined4 *)(arg_eax + 0xd) = *(undefined4 *)val_7;
      *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
           *(undefined2 *)((int)val_7 + ((uint)flag * -2 + 1) * 4);
    }
    else {
      *(undefined4 *)((int)val_7 + -4) = 0xb485d;
      mapwho_process_map_subtile_050ca9();
      *(undefined4 *)(arg_eax + 0xd) = *(undefined4 *)val_7;
      *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
           *(undefined2 *)((int)val_7 + ((uint)flag * -2 + 1) * 4);
      *(undefined4 *)((int)val_7 + -4) = 0xb486a;
      mapwho_process_map_subtile_050c38();
    }
    *(undefined4 *)((int)val_7 + -4) = 0xb487e;
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(arg_eax + 0x60) = uval;
  }
  return CONCAT44(*(undefined4 *)((int)val_7 + 0x18),1);
}

/******************************************************************************
 * Function : move_fn_0b4894 (Original VA: 0xb4894, Ghidra: FUN_000b4894)
 * Prototype: undefined8 move_fn_0b4894(void);
 * Address  : 0xb4894 (Size: 255 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Module move.cpp procedure @ 0x0b4894
 * Callers  : 1 -> update_process_map_subtile_0e2a14
 * Callees  : 8 -> mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, room_fn_0c6ec0, room_fn_0c7218, room_fn_0c7550, coord3d_equal
 ******************************************************************************/
undefined8 move_fn_0b4894(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val_2;
  int extraout_ECX_02;
  short short_val;
  undefined4 arg_edx;
  short short_val_2;
  byte flag;
  char cStack_1b;
  undefined1 uStack_1a;
  char cStack_19;
  short local_18 [2];
  
  flag = 0;
  if (((*(short *)(arg_eax + 0x38) == 0) && (*(short *)(arg_eax + 0x3a) == 0)) &&
     (*(short *)(arg_eax + 0x3c) == 0)) {
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(extraout_ECX_02 + 0x60) = uval;
    return CONCAT44(arg_edx,1);
  }
  short_val_2 = (short)*(undefined4 *)(arg_eax + 0xd) + *(short *)(arg_eax + 0x38);
  cStack_1b = (char)((ushort)short_val_2 >> 8);
  short_val = (short)((uint)*(undefined4 *)(arg_eax + 0xd) >> 0x10) + *(short *)(arg_eax + 0x3a);
  uStack_1a = (undefined1)short_val;
  cStack_19 = (char)((ushort)short_val >> 8);
  local_18[0] = *(short *)(arg_eax + 0x11) + *(short *)(arg_eax + 0x3c);
  val = coord3d_equal();
  val_2 = extraout_ECX;
  if (val == 0) {
    val = ceiling_process_map_subtile_07dbc0();
    val_2 = extraout_ECX_00;
    if (val != 0) {
      room_fn_0c6ec0();
      room_fn_0c7218();
      room_fn_0c7550();
      val_2 = extraout_ECX_01;
    }
  }
  if ((*(char *)(val_2 + 0xe) == cStack_1b) && (cStack_19 == *(char *)(val_2 + 0x10))) {
    *(uint *)(val_2 + 0xd) = CONCAT13(cStack_19,CONCAT12(uStack_1a,short_val_2));
    *(short *)(val_2 + 0x11 + (uint)flag * -8) = local_18[(uint)flag * -4];
  }
  else {
    mapwho_process_map_subtile_050ca9();
    *(uint *)(val_2 + 0xd) = CONCAT13(cStack_19,CONCAT12(uStack_1a,short_val_2));
    *(short *)(val_2 + 0x11 + (uint)flag * -8) = local_18[(uint)flag * -4];
    mapwho_process_map_subtile_050c38();
  }
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(val_2 + 0x60) = uval;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : move_fn_0b4994 (Original VA: 0xb4994, Ghidra: FUN_000b4994)
 * Prototype: undefined8 move_fn_0b4994(void);
 * Address  : 0xb4994 (Size: 303 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Module move.cpp procedure @ 0x0b4994
 * Callers  : 1 -> effect_process_thing_entity_024ab9
 * Callees  : 8 -> mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, room_fn_0c6ec0, room_fn_0c7218, room_fn_0c7550, coord3d_equal
 ******************************************************************************/
undefined8 move_fn_0b4994(void)

{
  undefined4 uval;
  undefined2 uval_2;
  int arg_eax;
  int val;
  short short_val;
  short short_val_2;
  undefined4 arg_edx;
  int val_2;
  undefined4 *extraout_EDX;
  int val_3;
  byte flag;
  undefined4 local_1c;
  short local_18 [2];
  
  flag = 0;
  val_2 = *(int *)(arg_eax + 0x36) >> 0x10;
  val_3 = *(int *)(arg_eax + 0x3a) >> 0x10;
  val = *(int *)(arg_eax + 0x38) >> 0x10;
  if (((val_2 != 0) || (val != 0)) || (val_3 != 0)) {
    if (val_2 < -0x100) {
      val_2 = -0x100;
    }
    else if (0x100 < val_2) {
      val_2 = 0x100;
    }
    if (val < -0x100) {
      val = -0x100;
    }
    else if (0x100 < val) {
      val = 0x100;
    }
    if (val_3 < -0x100) {
      val_3 = -0x100;
    }
    else if (0x100 < val_3) {
      val_3 = 0x100;
    }
    short_val = *(short *)(arg_eax + 0xd) + (short)val_2;
    short_val_2 = *(short *)(arg_eax + 0xf) + (short)val;
    local_1c = CONCAT22(short_val_2,short_val);
    uval = local_1c;
    local_18[0] = *(short *)(arg_eax + 0x11) + (short)val_3;
    val = coord3d_equal();
    if (val == 0) {
      val = ceiling_process_map_subtile_07dbc0();
      if (val != 0) {
        room_fn_0c6ec0();
        room_fn_0c7218();
        room_fn_0c7550();
      }
    }
    local_1c._1_1_ = (char)((ushort)short_val >> 8);
    if ((*(char *)(arg_eax + 0xe) == local_1c._1_1_) &&
       (local_1c._3_1_ = (char)((ushort)short_val_2 >> 8), *(char *)(arg_eax + 0x10) == local_1c._3_1_)) {
      *(undefined4 *)(arg_eax + 0xd) = uval;
      *(short *)(arg_eax + 0x11 + (uint)flag * -8) = local_18[(uint)flag * -4];
    }
    else {
      mapwho_process_map_subtile_050ca9();
      *(undefined4 *)(arg_eax + 0xd) = *extraout_EDX;
      *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) =
           *(undefined2 *)(extraout_EDX + (uint)flag * -2 + 1);
      mapwho_process_map_subtile_050c38();
    }
    uval_2 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(arg_eax + 0x60) = uval_2;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : move_fn_0b4ac4 (Original VA: 0xb4ac4, Ghidra: FUN_000b4ac4)
 * Prototype: void move_fn_0b4ac4(undefined1 param_1);
 * Address  : 0xb4ac4 (Size: 31 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Module move.cpp procedure @ 0x0b4ac4
 * Callers  : 13 -> barracks_update_creature_control_0138c9, combat_update_creature_control_015be4, combmove_update_creature_control_01671a, combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29, evil_hope_we_never_get_0286d5, good_update_creature_control_03826c ...
 * Callees  : 1 -> move_update_creature_control_0b4ae4
 ******************************************************************************/
void move_fn_0b4ac4(undefined1 param_1)

{
  undefined1 arg_cl;
  
  move_update_creature_control_0b4ae4(arg_cl,param_1);
  return;
}

/******************************************************************************
 * Function : move_update_creature_control_0b4ae4 (Original VA: 0xb4ae4, Ghidra: FUN_000b4ae4)
 * Prototype: undefined4 move_update_creature_control_0b4ae4(byte param_1,char param_2);
 * Address  : 0xb4ae4 (Size: 331 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> move_fn_0b4ac4, move_update_creature_control_0b4d88, move_shiiiiiit_place_move_backwards_0b4f00
 * Callees  : 4 -> anger_fn_010010, anger_fn_01009d, anger_update_creature_control_01017e, routes_update_creature_control_0d18d0
 ******************************************************************************/
undefined4 move_update_creature_control_0b4ae4(byte param_1,char param_2)

{
  short short_val;
  int cctrl_ptr;
  char ch;
  ushort uval;
  int thing;
  int val;
  char ch_2;
  byte flag;
  ushort local_18;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (param_2 != '\0') {
    flag = *(char *)(thing + 0x53) + 4;
    *(byte *)(thing + 0x53) = flag;
    *(byte *)(thing + 0x53) = flag & 7;
  }
  local_18 = (ushort)param_1;
  ch = routes_update_creature_control_0d18d0();
  if (param_1 != 0) {
    ch_2 = *(char *)(thing + 0x53) + '\x04';
    *(char *)(thing + 0x53) = ch_2;
    uval = CONCAT11(ch_2,ch) & 0x7ff;
    ch = (char)uval;
    *(char *)(thing + 0x53) = (char)(uval >> 8);
  }
  if ((ch != '\x03') && (ch != '\x02')) {
    if (ch == '\x01') {
      return 1;
    }
    if (param_1 == 0) {
      val = anger_fn_010010();
      if (val == 0) {
        anger_update_creature_control_01017e();
        *(byte *)(cctrl_ptr + 2) = *(byte *)(cctrl_ptr + 2) | 1;
        *(short *)(cctrl_ptr + 0xbb) = -*(short *)(thing + 0xd); /* thing->mappos.val_x */
        short_val = *(short *)(thing + 0xf); /* thing->mappos.val_y */
        *(undefined2 *)(cctrl_ptr + 0xbf) = 0;
        *(short *)(cctrl_ptr + 0xbd) = -short_val;
        return 0;
      }
    }
    else {
      val = anger_fn_01009d();
      if (val == 0) {
        anger_update_creature_control_01017e();
        *(byte *)(cctrl_ptr + 2) = *(byte *)(cctrl_ptr + 2) | 1;
        *(ushort *)(cctrl_ptr + 0xbb) = local_18 - *(short *)(thing + 0xd); /* thing->mappos.val_x */
        short_val = *(short *)(thing + 0xf); /* thing->mappos.val_y */
        *(undefined2 *)(cctrl_ptr + 0xbf) = 0;
        *(short *)(cctrl_ptr + 0xbd) = -short_val;
        return 0;
      }
    }
    anger_update_creature_control_01017e();
    return 0;
  }
  anger_update_creature_control_01017e();
  return 0xffffffff;
}

/******************************************************************************
 * Function : move_update_creature_control_0b4c30 (Original VA: 0xb4c30, Ghidra: FUN_000b4c30)
 * Prototype: undefined4 move_update_creature_control_0b4c30(void);
 * Address  : 0xb4c30 (Size: 342 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> move_shiiiiiit_place_tunnel_0b4fa0
 * Callees  : 9 -> anger_fn_010010, anger_fn_010132, anger_update_creature_control_01017e, instance_negative_instance_049bfc, move_process_map_subtile_0b28e8, routes_fn_0d1ac4, routes_ve_been_pushing_very_0d4188, get_2d_box_distance ...
 ******************************************************************************/
undefined4 move_update_creature_control_0b4c30(void)

{
  int cctrl_ptr;
  undefined2 uval;
  int thing;
  int val;
  undefined4 uval_2;
  short *extraout_ECX;
  int extraout_ECX_00;
  uint *word_ptr;
  uint uStack_18;
  undefined1 local_14 [4];
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined1 *)(cctrl_ptr + 0x203) = 0;
  uStack_18 = 0xb4c5c;
  val = update_fn_0dc440();
  if (val < 0x21) {
    uStack_18 = 0xb4c6a;
    anger_update_creature_control_01017e();
    uval_2 = 1;
  }
  else {
    val = *(int *)(cctrl_ptr + 0x8b);
    if ((0 < val) && (val < -1)) {
      *(int *)(cctrl_ptr + 0x8b) = val + 1;
    }
    if (((*(short *)(cctrl_ptr + 0x20b) != *extraout_ECX) ||
        (*(short *)(cctrl_ptr + 0x20d) != extraout_ECX[1])) ||
       (*(short *)(cctrl_ptr + 0x20f) != extraout_ECX[2])) {
      uStack_18 = 0xb4cb2;
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(extraout_ECX_00 + 4) = uval;
      uStack_18 = 0xb4cc2;
      routes_fn_0d1ac4();
    }
    uStack_18 = 0xb4cd3;
    val = routes_ve_been_pushing_very_0d4188();
    word_ptr = (uint *)local_14;
    if (val == 2) {
      if (*(short *)(cctrl_ptr + 0x1ff) == *(short *)(cctrl_ptr + 0x201)) {
        word_ptr = (uint *)local_14;
        if (*(byte *)(cctrl_ptr + 0xd2) == 0) {
          uStack_18 = (uint)*(byte *)(cctrl_ptr + 0xd2);
          instance_negative_instance_049bfc();
          word_ptr = &uStack_18;
        }
      }
      else {
        *(short *)(cctrl_ptr + 0x201) = *(short *)(cctrl_ptr + 0x1ff);
        word_ptr = (uint *)local_14;
      }
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xb4d12;
    val = get_2d_box_distance();
    if (val < 0x11) {
      *(undefined4 *)((int)word_ptr + -4) = 0xb4d73;
      anger_fn_010132();
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0xb4d22;
      val = anger_fn_010010();
      if (val == 0) {
        *(short *)(cctrl_ptr + 0xbb) = *(short *)(cctrl_ptr + 0x205) - *(short *)(thing + 0xd); /* thing->mappos.val_x */
        *(short *)(cctrl_ptr + 0xbd) = *(short *)(cctrl_ptr + 0x207) - *(short *)(thing + 0xf); /* thing->mappos.val_y */
        *(byte *)(cctrl_ptr + 2) = *(byte *)(cctrl_ptr + 2) | 1;
        *(undefined2 *)(cctrl_ptr + 0xbf) = 0;
      }
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xb4d7c;
    anger_update_creature_control_01017e();
    uval_2 = 0;
  }
  return uval_2;
}

/******************************************************************************
 * Function : move_update_creature_control_0b4d88 (Original VA: 0xb4d88, Ghidra: FUN_000b4d88)
 * Prototype: undefined8 move_update_creature_control_0b4d88(void);
 * Address  : 0xb4d88 (Size: 374 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 7 -> instance_negative_instance_049bfc, instance_update_creature_control_049e95, instance_update_creature_control_049ea9, person_fn_063b6d, person_update_creature_control_064ae7, move_update_creature_control_0b4ae4, update_fn_0dc440
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 move_update_creature_control_0b4d88(void)

{
  int thing;
  int val;
  int cctrl_ptr;
  uint uval;
  uint *word_ptr;
  undefined4 unaff_EDI;
  longlong val_2;
  uint auStack_24 [3];
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  auStack_24[2] = (uint)*(ushort *)(cctrl_ptr + 0xc4);
  if (0x100 < *(ushort *)(cctrl_ptr + 0xc4)) {
    auStack_24[2] = 0x100;
  }
  auStack_24[1] = 0xb4dc6;
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    auStack_24[1] = 0xb4dda;
    val = instance_update_creature_control_049ea9();
    if ((val != 0) && (*(char *)(cctrl_ptr + 0xd2) == '\0')) {
      val = *(int *)(thing + 3) >> 0x18;
      if (((int)(uint)g_bss_002eb542 <= val) ||
         ((val < (int)(uint)g_bss_002eb542 &&
          ((*(uint *)((int)&g_map_subtiles +
                     ((uint)*(byte *)(cctrl_ptr + 0x2e) + (uint)*(byte *)(cctrl_ptr + 0x30) * 0x100) * 5 + 1
                     ) >> 0x1c & 1 << ((byte)((uint)*(undefined4 *)(thing + 3) >> 0x18) & 0x1f)) !=
           0)))) {
        uval = (uint)g_bss_002ebaee;
        auStack_24[1] = 0xb4e48;
        val = update_fn_0dc440();
        if ((int)(uval * 0x100) < val) {
          auStack_24[0] = 0xb4e60;
          instance_negative_instance_049bfc();
          cctrl_ptr = 1;
          word_ptr = auStack_24 + 1;
          goto LAB_000b4ef4;
        }
      }
    }
  }
  auStack_24[1] = 0;
  auStack_24[0] = (uint)*(byte *)(cctrl_ptr + 0x88);
  uval = move_update_creature_control_0b4ae4();
  val_2 = (ulonglong)uval << 0x20;
  if ((*(byte *)(thing + 8) != 0) && /* thing->active_state */
     (cctrl_ptr = (uint)*(byte *)(thing + 8) * 0x29, val_2 = (ulonglong)uval << 0x20, /* thing->active_state */
     *(int *)(&g_data_0018c4ac + cctrl_ptr) != 0)) {
    val_2 = (**(code **)(&g_data_0018c4ac + cctrl_ptr))();
  }
  val = (int)((ulonglong)val_2 >> 0x20);
  cctrl_ptr = (int)val_2;
  word_ptr = auStack_24;
  if (cctrl_ptr == 0) {
    if (val == 1) {
      person_update_creature_control_064ae7();
      *(undefined1 *)(thing + 8) = 0; /* thing->active_state */
      return CONCAT44(unaff_EDI,1);
    }
    word_ptr = auStack_24;
    if (val == -1) {
      person_fn_063b6d();
      word_ptr = auStack_24;
    }
  }
LAB_000b4ef4:
  return CONCAT44(word_ptr[4],cctrl_ptr);
}

/******************************************************************************
 * Function : move_shiiiiiit_place_move_backwards_0b4f00 (Original VA: 0xb4f00, Ghidra: FUN_000b4f00)
 * Prototype: undefined8 move_shiiiiiit_place_move_backwards_0b4f00(void);
 * Address  : 0xb4f00 (Size: 157 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp lines 1501
 * Purpose  : String 'Shiiiiiit. Bad place to move backwards to!'
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, person_update_creature_control_064ae7, move_update_creature_control_0b4ae4, LbErrorLog, LbWarnLog
 ******************************************************************************/
undefined8 move_shiiiiiit_place_move_backwards_0b4f00(void)

{
  char cctrl_ptr;
  int thing;
  
  cctrl_ptr = move_update_creature_control_0b4ae4(*(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x88)); /* thing->ccontrol_idx */
  if (cctrl_ptr == '\x01') {
    person_update_creature_control_064ae7();
    *(undefined1 *)(thing + 8) = 0; /* thing->active_state */
    return 0x100000001;
  }
  if (cctrl_ptr == -1) {
    LbErrorLog(); /* LbErrorLog("move.cpp", line 1501, "Shiiiiiit. Bad place to move backwards to!") */
    LbWarnLog(); /* LbWarnLog("move.cpp", line 1501, "Shiiiiiit. Bad place to move backwards to!") */
    person_fn_063b6d();
    *(undefined1 *)(thing + 8) = 0; /* thing->active_state */
  }
  return 0x100000000;
}

/******************************************************************************
 * Function : move_shiiiiiit_place_tunnel_0b4fa0 (Original VA: 0xb4fa0, Ghidra: FUN_000b4fa0)
 * Prototype: undefined8 move_shiiiiiit_place_tunnel_0b4fa0(void);
 * Address  : 0xb4fa0 (Size: 350 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp lines 1552
 * Purpose  : String 'Shiiiiiit. Bad place to tunnel to!'
 * Callers  : 0 -> 
 * Callees  : 6 -> person_fn_063b6d, person_update_creature_control_064ae7, creature_fn_082774, move_update_creature_control_0b4c30, LbErrorLog, LbWarnLog
 ******************************************************************************/
undefined8 move_shiiiiiit_place_tunnel_0b4fa0(void)

{
  char ch;
  int thing;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  uint uval_2;
  
  uval_2 = (uint)*(byte *)(thing + 0xe) + (uint)*(byte *)(thing + 0x10) * 0x100;
  if ((uint)((&g_slabmap)
             [((&g_subtile_to_slab_lut)[uval_2 % 0x100] + (&g_subtile_to_slab_lut)[(int)uval_2 >> 8] * 0x55) * 6] & 7)
      == *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x86) >> 0x18) { /* thing->ccontrol_idx */
    person_update_creature_control_064ae7();
    uval = 1;
  }
  else {
    ch = move_update_creature_control_0b4c30();
    if (ch == '\x01') {
      person_update_creature_control_064ae7();
      return CONCAT44(arg_edx,1);
    }
    if (ch == -1) {
      LbErrorLog(); /* LbErrorLog("move.cpp", line 1552, "Shiiiiiit. Bad place to tunnel to!") */
      LbWarnLog(); /* LbWarnLog("move.cpp", line 1552, "Shiiiiiit. Bad place to tunnel to!") */
      person_fn_063b6d();
      *(undefined1 *)(extraout_ECX_00 + 8) = 0;
    }
    else if ((((uint)*(ushort *)(extraout_ECX + 0x1b) + g_game_turn & 0x7f) == 0) &&
            (ch = creature_fn_082774(), ch != '\0')) {
      return CONCAT44(arg_edx,1);
    }
    uval = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : move_fn_0b5100 (Original VA: 0xb5100, Ghidra: FUN_000b5100)
 * Prototype: undefined8 move_fn_0b5100(void);
 * Address  : 0xb5100 (Size: 107 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Purpose  : Module move.cpp procedure @ 0x0b5100
 * Callers  : 2 -> scrsupp_allocate_light_new_hero_069268, scrsupp_script_could_find_hero_0694d4
 * Callees  : 4 -> mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, move_process_map_subtile_0b28e8, move_find_valid_position_place_0b516c
 ******************************************************************************/
undefined8 move_fn_0b5100(void)

{
  int arg_eax;
  undefined4 uval;
  undefined4 uval_2;
  int extraout_ECX;
  undefined4 arg_edx;
  byte flag;
  char local_1b;
  char local_19;
  undefined2 auStack_18 [2];
  
  flag = 0;
  uval_2 = *(undefined4 *)(arg_eax + 0xd);
  auStack_18[0] = *(undefined2 *)(arg_eax + 0x11);
  uval = move_find_valid_position_place_0b516c();
  if ((char)uval != '\0') {
    local_1b = (char)((uint)uval_2 >> 8);
    if ((*(char *)(extraout_ECX + 0xe) == local_1b) &&
       (local_19 = (char)((uint)uval_2 >> 0x18), local_19 == *(char *)(extraout_ECX + 0x10))) {
      *(undefined4 *)(extraout_ECX + 0xd) = uval_2;
      *(undefined2 *)(extraout_ECX + 0x11 + (uint)flag * -8) = auStack_18[(uint)flag * -4];
    }
    else {
      mapwho_process_map_subtile_050ca9();
      *(undefined4 *)(extraout_ECX + 0xd) = uval_2;
      *(undefined2 *)(extraout_ECX + 0x11 + (uint)flag * -8) = auStack_18[(uint)flag * -4];
      mapwho_process_map_subtile_050c38();
    }
    uval_2 = move_process_map_subtile_0b28e8();
    *(short *)(extraout_ECX + 0x60) = (short)uval_2;
    uval = CONCAT31((int3)((uint)uval_2 >> 8),1);
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : move_find_valid_position_place_0b516c (Original VA: 0xb516c, Ghidra: FUN_000b516c)
 * Prototype: uint move_find_valid_position_place_0b516c(void);
 * Address  : 0xb516c (Size: 245 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp lines 1619
 * Purpose  : String 'Cannot find valid position to place thing'
 * Callers  : 3 -> move_update_creature_control_0b3dac, move_fn_0b5100, routes_fn_0d1444
 * Callees  : 3 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, LbErrorLog
 ******************************************************************************/
uint move_find_valid_position_place_0b516c(void)

{
  int val;
  uint uval;
  undefined4 *arg_edx;
  int val_2;
  int val_3;
  char *str_ptr;
  byte flag;
  undefined4 local_28;
  undefined2 local_24 [2];
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  
  flag = 0;
  str_ptr = (char *)&g_bss_002ee9c1;
  local_20 = (uint)*(byte *)((int)arg_edx + 1);
  local_1c = (uint)*(byte *)((int)arg_edx + 3);
  val_3 = 0;
  local_18 = arg_edx;
  do {
    val_2 = (int)str_ptr[1] + local_20;
    val = (int)*str_ptr + local_1c;
    if (val_2 < 0) {
      val_2 = 0;
    }
    else if (0xff < val_2) {
      val_2 = 0xff;
    }
    if (val < 0) {
      val = 0;
    }
    else if (0xff < val) {
      val = 0xff;
    }
    if ((*(byte *)((int)&g_map_subtiles + (val * 0x100 + val_2) * 5) & 0x10) == 0) {
      local_28 = CONCAT22((short)(val << 8) + 0x80,(short)(val_2 << 8) + 0x80);
      local_24[0] = move_process_map_subtile_0b28e8();
      val = ceiling_process_map_subtile_07dbc0();
      if (val == 0) {
        *local_18 = local_28;
        *(undefined2 *)(local_18 + (uint)flag * -2 + 1) = local_24[(uint)flag * -4];
        return 1;
      }
    }
    val_3 = val_3 + 1;
    str_ptr = str_ptr + 4;
  } while (val_3 < 0x9c4);
  uval = LbErrorLog(); /* LbErrorLog("move.cpp", line 1619, "Cannot find valid position to place thing") */
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : move_process_slabmap_tile_0b5264 (Original VA: 0xb5264, Ghidra: FUN_000b5264)
 * Prototype: longlong move_process_slabmap_tile_0b5264(void);
 * Address  : 0xb5264 (Size: 734 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 9 -> combat_update_creature_control_015be4, evil_update_creature_control_0280a7, evil_roll_action_random_02855c, evil_update_creature_control_02864e, evil_update_creature_and_thing_028eb4, good_level_design_player_should_0382d8, impset_update_creature_control_03f682, person_fn_063b55 ...
 * Callees  : 3 -> door_process_map_subtile_022b3a, light_process_map_subtile_0b2398, move_update_creature_control_0b3b58
 ******************************************************************************/
longlong move_process_slabmap_tile_0b5264(void)

{
  int slab_coord;
  int slab_coord_2;
  bool flag;
  short short_val;
  int arg_eax;
  uint uval;
  uint uval_2;
  uint rand_seed;
  int val;
  uint uval_3;
  undefined4 uval_4;
  uint arg_edx;
  uint uval_5;
  int val_2;
  uint local_4c;
  int local_30;
  int local_2c;
  int local_1c;
  
  uval = (uint)*(byte *)(arg_eax + 0xe);
  uval_2 = (uint)*(byte *)(arg_eax + 0x10);
  slab_coord = (&g_subtile_to_slab_lut)[uval_2];
  slab_coord_2 = (&g_subtile_to_slab_lut)[uval];
  rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = rand_seed >> 0xd | rand_seed * 0x80000;
  uval_5 = rand_seed % 9;
  rand_seed = rand_seed * 0x24a1 + 0x24df;
  local_2c = 0;
  local_4c = rand_seed >> 0xd;
  g_action_random_seed = local_4c | rand_seed * 0x80000;
  local_4c = local_4c & 3;
  do {
    val_2 = slab_coord_2 + slab_coord * 0x55 + (*(int *)(&g_data_0018b6b0 + local_4c * 2) >> 0x10);
    if ((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val_2 * 6] * 0x16] & 2) == 0) &&
       (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val_2 * 6] * 0x16] & 0x10) != 0)) {
      flag = false;
    }
    else {
      flag = true;
    }
    if (flag) {
LAB_000b53ba:
      local_1c = 0;
      rand_seed = uval_5;
      do {
        if (((val_2 % 0x55) * 3 + (int)rand_seed % 3 != uval) ||
           ((val_2 / 0x55) * 3 + (int)rand_seed / 3 != uval_2)) {
          if ((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0') {
            uval_3 = light_process_map_subtile_0b2398();
            if ((uval_3 & 0xfffffffe) == 0x28) goto LAB_000b543b;
          }
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            uval_4 = 1;
            goto LAB_000b5478;
          }
        }
LAB_000b543b:
        rand_seed = (int)(rand_seed + 1) % 9;
        local_1c = local_1c + 1;
      } while (local_1c < 9);
      if ((&g_slabmap_base)[val_2 * 6] != '\f') {
        uval_4 = 0;
LAB_000b5478:
        return CONCAT44(arg_edx,uval_4);
      }
    }
    else {
      val = door_process_map_subtile_022b3a();
      if (((val != 0) && (*(char *)(val + 6) == *(char *)(arg_eax + 6))) &&
         (*(char *)(val + 0x18) == '\0')) goto LAB_000b53ba;
    }
    local_2c = local_2c + 1;
    local_4c = (int)(local_4c + 1) % 4;
    if (3 < local_2c) {
      slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)];
      slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)];
      local_30 = 0;
      do {
        if ((slab_coord * 3 + (int)uval_5 % 3 != uval) || (slab_coord_2 * 3 + (int)uval_5 / 3 != uval_2)) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            return CONCAT44(arg_edx,1);
          }
        }
        local_30 = local_30 + 1;
        uval_5 = (int)(uval_5 + 1) % 9;
      } while (local_30 < 9);
      return (ulonglong)arg_edx << 0x20;
    }
  } while( true );
}

