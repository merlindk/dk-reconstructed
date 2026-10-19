/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: comptask.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 53
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : comptask_process_dungeon_room_01ad1f (Original VA: 0x1ad1f, Ghidra: FUN_0001ad1f)
 * Prototype: undefined4 comptask_process_dungeon_room_01ad1f(void);
 * Address  : 0x1ad1f (Size: 317 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_process_dungeon_room_01d5a1, compturn_fn_0203f0
 ******************************************************************************/
undefined4 comptask_process_dungeon_room_01ad1f(void)

{
  ushort uval;
  int arg_eax;
  uint uval_2;
  int val;
  int loop_i;
  int room_ptr;
  uint uval_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  undefined4 uval_4;
  int local_28;
  uint local_1c;
  
  uval_2 = (uint)*(byte *)(*(int *)(arg_eax + 0x24) + 0x5c3);
  val = comptask_process_dungeon_room_01d5a1();
  local_28 = -1;
  loop_i = compturn_fn_0203f0();
  if (loop_i == 0) {
    for (loop_i = 0; uval = g_bss_002eb9e4, loop_i < 6; loop_i = loop_i + 1) {
      while( true ) {
        room_ptr = (uint)uval * 0x45;
        if (&g_rooms + room_ptr == &g_rooms) break;
        if (((((&g_rooms + room_ptr)[*(char *)(extraout_ECX + 0xe9f) + 0x12] & 1) != 0) &&
            ((&g_bss_002ddd1e)[room_ptr] != *(char *)(extraout_ECX + 0xe9f))) &&
           ((uint)(g_game_turn - *(int *)(arg_edx + 0x34)) < 2000)) goto LAB_0001ad63;
        uval = *(ushort *)(&g_bss_002ddd34 + room_ptr);
      }
    }
    room_ptr = 0;
    loop_i = extraout_ECX;
    local_1c = uval_2;
    do {
      if (((room_ptr != *(char *)(loop_i + 0xe9f)) &&
          (uval_3 = comptask_process_dungeon_room_01d5a1(), loop_i = extraout_ECX_00, (int)local_1c <= (int)uval_3)) &&
         (uval_3 != 0)) {
        local_28 = room_ptr;
        local_1c = uval_3;
      }
      room_ptr = room_ptr + 1;
    } while (room_ptr < 5);
    if ((local_28 < 0) || ((int)local_1c <= (int)uval_2)) {
      if ((val / 2 <= (int)uval_2) && (uval_2 != 0)) goto LAB_0001ad63;
      uval_3 = g_game_turn - *(int *)(arg_edx + 0x34);
      if (*(uint *)(arg_edx + 8) < uval_3) {
        uval_3 = *(uint *)(arg_edx + 8);
      }
      val = val - uval_2;
      if (val < 1) {
        val = 1;
      }
      if ((int)uval_3 < *(int *)(arg_edx + 8) / val) {
        return 0;
      }
    }
    uval_4 = 1;
  }
  else {
LAB_0001ad63:
    uval_4 = 4;
  }
  return uval_4;
}

/******************************************************************************
 * Function : comptask_update_player_dungeon_01ae5c (Original VA: 0x1ae5c, Ghidra: FUN_0001ae5c)
 * Prototype: undefined4 comptask_update_player_dungeon_01ae5c(void);
 * Address  : 0x1ae5c (Size: 701 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 7 -> compevnt_fn_01aada, comptask_fn_01ba46, comptask_fn_01d2ff, comptask_process_dungeon_room_01d391, comptask_process_dungeon_room_01d5a1, comptool_update_slab_subtile_columns_01e5de, compturn_update_creature_and_thing_020436
 ******************************************************************************/
undefined4 comptask_update_player_dungeon_01ae5c(void)

{
  byte *byte_ptr;
  code *str_ptr;
  short short_val;
  int arg_eax;
  int val;
  uint uval;
  int val_2;
  byte *byte_ptr_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_edx;
  int val_3;
  int *int_ptr;
  int val_4;
  byte flag;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int local_9c;
  int local_98;
  undefined4 local_44;
  int local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 auStack_30 [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  flag = 0;
  local_24 = 0x7fffffff;
  local_18 = *(int *)(arg_eax + 0x24);
  local_28 = 0;
  local_2c = 0;
  val_4 = -1;
  uStack_a0 = 0x1ae9b;
  local_9c = arg_edx;
  local_98 = arg_eax;
  local_1c = comptask_process_dungeon_room_01d5a1();
  val_3 = 0;
  uStack_a0 = 0x1aeb1;
  local_20 = comptask_process_dungeon_room_01d5a1();
  val_2 = extraout_ECX;
  do {
    if (val_3 != *(char *)(local_18 + 0xe9f)) {
      uStack_a0 = 0x1aed5;
      val = comptask_process_dungeon_room_01d5a1();
      val_2 = extraout_ECX_00;
      if (extraout_ECX_00 <= val) {
        val_2 = val;
        val_4 = val_3;
      }
    }
    val_3 = val_3 + 1;
  } while (val_3 < 5);
  uval = g_game_turn - *(int *)(local_9c + 0x34);
  if (*(uint *)(local_9c + 8) < uval) {
    uval = *(uint *)(local_9c + 8);
  }
  val_3 = (local_20 + val_2) - local_1c;
  if (val_3 < 1) {
    val_3 = 1;
  }
  if (*(int *)(local_9c + 8) / val_3 <= (int)uval) {
    if ((-1 < val_4) && (local_1c < val_2)) {
      uStack_a0 = 0x1af32;
      local_24 = comptask_process_dungeon_room_01d391();
      if (local_24 == 0) {
        local_24 = 0x7fffffff;
      }
    }
    if (local_20 != 0) {
      uStack_a0 = 0x1af5b;
      val_2 = comptask_process_dungeon_room_01d391();
      if ((val_2 != 0) &&
         ((val_2 < local_24 ||
          (*(byte *)(local_18 + 0x919) < (byte)(&g_bss_002e0ea2)[val_4 * 0x1508])))) {
        local_28 = local_2c;
        local_44 = local_34;
        *(undefined2 *)(local_40 + (uint)flag * -2) = auStack_30[(uint)flag * -4];
      }
    }
  }
  if (local_28 != 0) {
    int_ptr = &local_9c;
    if (*(int *)(local_98 + 0x20) != 0) {
      local_38 = CONCAT22(local_38._2_2_,0x100);
      uStack_a0 = local_38;
      local_40[1] = (uint)CONCAT21((ushort)*(byte *)(local_28 + 9) << 8,
                                   *(undefined1 *)(local_28 + 8)) << 8;
      iStack_a4 = local_40[1];
      iStack_a8 = local_40[0];
      uStack_ac = local_44;
      comptask_fn_01d2ff();
      do {
        short_val = comptool_update_slab_subtile_columns_01e5de();
      } while (short_val == 0);
      int_ptr = &uStack_ac;
      if ((short_val != -1) && (int_ptr = &uStack_ac, short_val != -5)) {
        byte_ptr_2 = (byte *)(*(char *)(local_18 + 0xe9f) + local_28 + 0x12);
        *byte_ptr_2 = *byte_ptr_2 | 2;
        return 0;
      }
    }
    *(undefined4 *)((int)int_ptr + -4) = 0x1b019;
    byte_ptr_2 = (byte *)comptask_fn_01ba46();
    if (byte_ptr_2 != (byte *)0x0) {
      byte_ptr_2[2] = 5;
      *byte_ptr_2 = *byte_ptr_2 | 4;
      *(undefined4 *)(byte_ptr_2 + 0x70) = local_44;
      *(short *)(byte_ptr_2 + (uint)flag * -8 + 0x74) = (short)local_40[(uint)flag * -2];
      *(ushort *)(byte_ptr_2 + 0x76) = (ushort)*(byte *)(local_28 + 8) << 8;
      *(ushort *)(byte_ptr_2 + 0x78) = (ushort)*(byte *)(local_28 + 9) << 8;
      byte_ptr_2[0x71] = (byte_ptr_2[0x71] / 3) * '\x03';
      byte_ptr_2[0x73] = (byte_ptr_2[0x73] / 3) * '\x03';
      byte_ptr_2[0x77] = (byte_ptr_2[0x77] / 3) * '\x03';
      byte_ptr_2[0x79] = (byte_ptr_2[0x79] / 3) * '\x03';
      byte_ptr_2[0x7a] = 0;
      byte_ptr_2[0x7b] = 1;
      *(short *)(byte_ptr_2 + 0x8c) = (short)((local_9c - (local_98 + 0x38)) / 0x48);
      *(undefined2 *)(byte_ptr_2 + 0x80) = *(undefined2 *)(local_28 + 1);
      byte_ptr = (byte *)(*(char *)(local_18 + 0xe9f) + local_28 + 0x12);
      *byte_ptr = *byte_ptr | 1;
      *(undefined4 *)((int)int_ptr + -4) = *(undefined4 *)(byte_ptr_2 + 0x7a);
      *(undefined4 *)((int)int_ptr + -8) = *(undefined4 *)(byte_ptr_2 + 0x76);
      *(int *)((int)int_ptr + -0xc) = local_40[0];
      *(undefined4 *)((int)int_ptr + -0x10) = local_44;
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b0e4;
      comptask_fn_01d2ff();
      str_ptr = *(code **)(extraout_ECX_01 + 0x24);
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b0ea;
      (*str_ptr)();
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b0f4;
      compevnt_fn_01aada();
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b104;
      compturn_update_creature_and_thing_020436();
      return 2;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01b119 (Original VA: 0x1b119, Ghidra: FUN_0001b119)
 * Prototype: undefined4 comptask_process_dungeon_room_01b119(void);
 * Address  : 0x1b119 (Size: 67 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptool_update_creature_and_thing_01d917, compturn_fn_0203f0
 ******************************************************************************/
undefined4 comptask_process_dungeon_room_01b119(void)

{
  int arg_eax;
  int val;
  undefined8 uval;
  
  if (&g_rooms < &g_rooms + (uint)*(ushort *)(*(int *)(arg_eax + 0x24) + 0xf) * 0x45) {
    uval = comptool_update_creature_and_thing_01d917();
    if ((int)uval < *(int *)((int)((ulonglong)uval >> 0x20) + 8)) {
      val = compturn_fn_0203f0();
      if (val == 0) {
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : comptask_fn_01b15c (Original VA: 0x1b15c, Ghidra: FUN_0001b15c)
 * Prototype: undefined4 comptask_fn_01b15c(void);
 * Address  : 0x1b15c (Size: 510 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b15c
 * Callers  : 0 -> 
 * Callees  : 6 -> compevnt_fn_01aada, comptask_fn_01ba46, comptask_fn_01d2ff, comptask_process_dungeon_room_01d601, comptool_update_slab_subtile_columns_01e5de, LbScreenWaitVbi
 ******************************************************************************/
undefined4 comptask_fn_01b15c(void)

{
  byte *byte_ptr;
  code *str_ptr;
  short short_val;
  undefined4 *arg_eax;
  uint uval;
  byte *byte_ptr_2;
  int arg_edx;
  int *int_ptr;
  byte flag;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int local_84;
  undefined4 *local_80;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [3];
  
  flag = 0;
  int_ptr = &local_84;
  local_20[2] = arg_eax[9];
  local_20[1] = 0;
  uStack_88 = 0x1b181;
  local_84 = arg_edx;
  local_80 = arg_eax;
  uval = comptask_process_dungeon_room_01d601();
  if (-2 < (int)uval) {
    if ((int)uval < 0) {
      *(byte *)(local_84 + 0x44) = *(byte *)(local_84 + 0x44) | 4;
      return 0;
    }
    if (uval == 4) {
      return 0;
    }
  }
  if (uval <= g_game_turn / *(uint *)(local_84 + 0xc) + *(int *)(local_84 + 0x14)) {
    uStack_88 = 0x1b1c6;
    LbScreenWaitVbi();
    local_2c._0_2_ =
         CONCAT11((char)(*(ushort *)(local_20[1] + 6) / 3) * '\x03',(undefined1)local_2c);
    local_2c = CONCAT13((char)(*(ushort *)(local_20[1] + 8) / 3) * '\x03',(undefined3)local_2c);
    local_24 = CONCAT22((local_24._2_2_ / 3) * 3,((ushort)local_24 / 3) * 3);
    if (local_80[8] != 0) {
      uStack_88 = local_28;
      uStack_8c = local_2c;
      iStack_90 = local_20[0];
      int_ptr = &uStack_94;
      uStack_94 = local_24;
      uval = 0;
      comptask_fn_01d2ff();
      while (short_val = comptool_update_slab_subtile_columns_01e5de(), short_val == 0) {
        uval = uval + 1;
      }
      if ((short_val != -1) && (short_val != -5)) {
        byte_ptr_2 = (byte *)(*(char *)(local_20[2] + 0xe9f) + local_20[1] + 1);
        *byte_ptr_2 = *byte_ptr_2 | 2;
        return 0;
      }
      if (g_game_turn / *(uint *)(local_84 + 0xc) + *(int *)(local_84 + 0x14) < uval) {
        return 0;
      }
    }
    *(undefined4 *)((int)int_ptr + -4) = 0x1b282;
    byte_ptr_2 = (byte *)comptask_fn_01ba46();
    if (byte_ptr_2 != (byte *)0x0) {
      byte_ptr_2[2] = 6;
      *(undefined4 *)(byte_ptr_2 + 0x70) = local_24;
      *(short *)(byte_ptr_2 + (uint)flag * -8 + 0x74) = (short)local_20[(uint)flag * -2];
      *(undefined4 *)(byte_ptr_2 + 0x76) = local_2c;
      *(undefined2 *)(byte_ptr_2 + (uint)flag * -8 + 0x7a) =
           *(undefined2 *)(&local_28 + (uint)flag * -2);
      *(undefined4 *)(byte_ptr_2 + 0x86) = *(undefined4 *)(local_84 + 0x10);
      byte_ptr_2[0x71] = (byte_ptr_2[0x71] / 3) * '\x03';
      byte_ptr_2[0x73] = (byte_ptr_2[0x73] / 3) * '\x03';
      *byte_ptr_2 = *byte_ptr_2 | 4;
      *(short *)(byte_ptr_2 + 0x8c) = (short)((local_84 - (int)(local_80 + 0xe)) / 0x48);
      *(short *)(byte_ptr_2 + 0x80) = (short)((local_20[1] + -0x2eb552) / 0x1c);
      byte_ptr = (byte *)(*(char *)(local_20[2] + 0xe9f) + local_20[1] + 1);
      *byte_ptr = *byte_ptr | 1;
      *(undefined4 *)((int)int_ptr + -4) = *(undefined4 *)(byte_ptr_2 + 0x7a);
      *(undefined4 *)((int)int_ptr + -8) = *(undefined4 *)(byte_ptr_2 + 0x76);
      *(undefined4 *)((int)int_ptr + -0xc) = *(undefined4 *)(byte_ptr_2 + 0x74);
      *(undefined4 *)((int)int_ptr + -0x10) = *(undefined4 *)(byte_ptr_2 + 0x70);
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b32d;
      comptask_fn_01d2ff();
      str_ptr = *(code **)(local_84 + 0x24);
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b333;
      (*str_ptr)();
      *(undefined4 *)((int)int_ptr + -0x14) = 0x1b33d;
      compevnt_fn_01aada();
      *local_80 = 2;
      return 2;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : comptask_fn_01b35a (Original VA: 0x1b35a, Ghidra: FUN_0001b35a)
 * Prototype: undefined4 comptask_fn_01b35a(void);
 * Address  : 0x1b35a (Size: 83 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b35a
 * Callers  : 0 -> 
 * Callees  : 1 -> comptool_update_player_dungeon_01e38d
 ******************************************************************************/
undefined4 comptask_fn_01b35a(void)

{
  int val;
  int arg_eax;
  int val_2;
  int arg_edx;
  
  val = *(int *)(arg_eax + 0x24);
  if (*(uint *)(arg_edx + 0x10) < g_game_turn) {
    val_2 = comptool_update_player_dungeon_01e38d();
    if (val_2 == 1) {
      if (*(short *)(val + 0x5d8) == 0) {
        return 1;
      }
      return 4;
    }
    if (val_2 == 0) {
      *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 4;
      return 0;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : comptask_fn_01b3ad (Original VA: 0x1b3ad, Ghidra: FUN_0001b3ad)
 * Prototype: undefined4 comptask_fn_01b3ad(void);
 * Address  : 0x1b3ad (Size: 35 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b3ad
 * Callers  : 0 -> 
 * Callees  : 1 -> compevnt_fn_01aabb
 ******************************************************************************/
undefined4 comptask_fn_01b3ad(void)

{
  undefined4 *arg_eax;
  int arg_edx;
  
  *(int *)(arg_edx + 0x40) = *(int *)(arg_edx + 0x40) + 1;
  if (*(int *)(arg_edx + 0xc) < *(int *)(arg_edx + 0x40)) {
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 1;
    compevnt_fn_01aabb();
    *arg_eax = 2;
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : comptask_fn_01b3d0 (Original VA: 0x1b3d0, Ghidra: FUN_0001b3d0)
 * Prototype: undefined4 comptask_fn_01b3d0(void);
 * Address  : 0x1b3d0 (Size: 7 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b3d0
 * Callers  : 1 -> comptask_roll_action_random_01b721
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01b3d0(void)

{
  return 1;
}

/******************************************************************************
 * Function : comptask_process_slabmap_tile_01b3d7 (Original VA: 0x1b3d7, Ghidra: FUN_0001b3d7)
 * Prototype: undefined4 comptask_process_slabmap_tile_01b3d7(void);
 * Address  : 0x1b3d7 (Size: 394 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 3 -> compevnt_fn_01aada, comptool_process_slabmap_tile_01d966, comptask_fn_01df28
 ******************************************************************************/
undefined4 comptask_process_slabmap_tile_01b3d7(void)

{
  uint *word_ptr;
  int arg_eax;
  int val;
  int val_2;
  int arg_edx;
  uint rand_seed;
  int val_3;
  undefined4 uval;
  int local_18;
  
  val_2 = *(int *)(arg_eax + 0x24);
  if (*(int *)(arg_eax + 0x10) < 1) {
    uval = 4;
  }
  else {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    rand_seed = g_action_random_seed >> 0xd;
    g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
    rand_seed = rand_seed & 0x3f;
    do {
      local_18 = 0;
      while ((val = (int)rand_seed >> 0x1f, local_18 < 0x40 &&
             ((*(uint *)(arg_eax + ((int)((rand_seed + val * -8) - (uint)(val << 2 < 0)) >> 3) * 4 +
                        0x13c4) & 1 << ((byte)((int)rand_seed % 8) & 0x1f)) != 0))) {
        rand_seed = (int)(rand_seed + 1) % 0x40;
        local_18 = local_18 + 1;
      }
      if (local_18 == 0x40) {
        *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 4;
        return 3;
      }
      val = (int)((rand_seed + val * -8) - (uint)(val << 2 < 0)) >> 3;
      word_ptr = (uint *)(arg_eax + val * 4 + 0x13c4);
      *word_ptr = *word_ptr | 1 << ((byte)((int)rand_seed % 8) & 0x1f);
      val_3 = ((int)rand_seed % 8) * 8 + 4;
      val = val * 8 + 4;
    } while ((uint)((&g_slabmap)
                    [((&g_subtile_to_slab_lut)[val_3 * 3] + (&g_subtile_to_slab_lut)[val * 3] * 0x55) * 6] & 7) ==
             (int)*(char *)(val_2 + 0xe9f));
    val_2 = comptask_fn_01df28(val_3 * 3 & 0xffff,val * 3 & 0xffff,0,0);
    if (0 < val_2) {
      comptool_process_slabmap_tile_01d966();
    }
    (**(code **)(arg_edx + 0x24))();
    compevnt_fn_01aada();
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : comptask_update_player_dungeon_01b561 (Original VA: 0x1b561, Ghidra: FUN_0001b561)
 * Prototype: undefined4 comptask_update_player_dungeon_01b561(void);
 * Address  : 0x1b561 (Size: 200 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 5 -> compevnt_fn_01aada, comptool_fn_01dbbc, comptool_fn_01ff84, comptool_update_creature_and_thing_02002c, compturn_fn_020596
 ******************************************************************************/
undefined4 comptask_update_player_dungeon_01b561(void)

{
  int arg_eax;
  int loop_i;
  int val;
  int arg_edx;
  int aiStack_60 [19];
  
  if ((((*(int *)(&g_bss_002e15e5 + *(char *)(*(int *)(arg_eax + 0x24) + 0xe9f) * 0x1508) != 0) &&
       (*(int *)(arg_edx + 0x10) <=
        (int)((longlong)(ulonglong)((uint)*(byte *)(*(int *)(arg_eax + 0x24) + 0x919) * 100) /
             (longlong)*(int *)(&g_bss_002e15e5 + *(char *)(*(int *)(arg_eax + 0x24) + 0xe9f) * 0x1508)
             ))) && (aiStack_60[0x12] = arg_edx, loop_i = compturn_fn_020596(), loop_i == 0)) &&
     (loop_i = comptool_update_creature_and_thing_02002c(),
     *(int *)(aiStack_60[0x12] + 0xc) <= (loop_i * *(int *)(aiStack_60[0x12] + 8)) / 100)) {
    comptool_fn_01dbbc();
    for (loop_i = 0; loop_i < 0x50; loop_i = loop_i + 0x10) {
      if ((*(int *)((int)aiStack_60 + loop_i) != 0) && (val = comptool_fn_01ff84(), val == 1)) {
        **(undefined2 **)((int)aiStack_60 + loop_i) = 0;
        return 1;
      }
    }
  }
  compevnt_fn_01aada();
  return 4;
}

/******************************************************************************
 * Function : comptask_update_player_dungeon_01b629 (Original VA: 0x1b629, Ghidra: FUN_0001b629)
 * Prototype: undefined4 comptask_update_player_dungeon_01b629(void);
 * Address  : 0x1b629 (Size: 248 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 4 -> comptool_fn_01dbbc, comptool_fn_01ff84, comptool_update_creature_and_thing_02002c, compturn_fn_020596
 ******************************************************************************/
undefined4 comptask_update_player_dungeon_01b629(void)

{
  int arg_eax;
  int loop_i;
  int val;
  int arg_edx;
  int aiStack_64 [20];
  
  aiStack_64[0x13] = *(int *)(arg_eax + 0x24);
  if ((((*(int *)(&g_bss_002e15e5 + *(char *)(aiStack_64[0x13] + 0xe9f) * 0x1508) != 0) &&
       (*(int *)(arg_edx + 0x10) <=
        (int)((longlong)(ulonglong)((uint)*(byte *)(aiStack_64[0x13] + 0x919) * 100) /
             (longlong)*(int *)(&g_bss_002e15e5 + *(char *)(aiStack_64[0x13] + 0xe9f) * 0x1508)))) &&
      (loop_i = comptool_update_creature_and_thing_02002c(), *(int *)(arg_edx + 0xc) <= (loop_i * *(int *)(arg_edx + 8)) / 100)) &&
     (loop_i = compturn_fn_020596(), loop_i == 0)) {
    comptool_fn_01dbbc();
    for (loop_i = 0; loop_i < 0x50; loop_i = loop_i + 0x10) {
      if (((*(int *)((int)aiStack_64 + loop_i + 4) != 0) &&
          ((int)((int)(*(int *)(arg_edx + 8) *
                      (uint)(byte)(&g_bss_002e0ea2)[*(int *)((int)aiStack_64 + loop_i) * 0x1508]) / 100
                + (uint)(byte)(&g_bss_002e0ea2)[*(int *)((int)aiStack_64 + loop_i) * 0x1508]) <
           (int)(uint)*(byte *)(aiStack_64[0x13] + 0x919))) && (val = comptool_fn_01ff84(), val == 1))
      {
        **(undefined2 **)((int)aiStack_64 + loop_i + 4) = 0;
        return 1;
      }
    }
  }
  compevnt_fn_01aada();
  return 4;
}

/******************************************************************************
 * Function : comptask_roll_action_random_01b721 (Original VA: 0x1b721, Ghidra: FUN_0001b721)
 * Prototype: void comptask_roll_action_random_01b721(void);
 * Address  : 0x1b721 (Size: 65 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01b3d0, moodneed_fn_051374
 ******************************************************************************/
void comptask_roll_action_random_01b721(void)

{
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  moodneed_fn_051374();
  comptask_fn_01b3d0();
  return;
}

/******************************************************************************
 * Function : comptask_fn_01b762 (Original VA: 0x1b762, Ghidra: FUN_0001b762)
 * Prototype: undefined4 comptask_fn_01b762(void);
 * Address  : 0x1b762 (Size: 323 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b762
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01ba46, comptool_process_slabmap_tile_01dd33, comptool_update_player_dungeon_01e38d, compturn_fn_02035a
 ******************************************************************************/
undefined4 comptask_fn_01b762(void)

{
  undefined4 *arg_eax;
  int val;
  int val_2;
  int val_3;
  undefined2 uval;
  int arg_edx;
  byte flag;
  
  flag = 0;
  val = (int)((uint)*(byte *)(arg_eax[9] + 0x919) * *(int *)(arg_edx + 8)) / 100;
  *arg_eax = 2;
  val_2 = (uint)*(ushort *)(arg_edx + 0x40) * 0x94;
  val_3 = comptool_process_slabmap_tile_01dd33();
  if (val_3 == 0) {
    if ((((*(int *)(arg_edx + 0xc) <= val) && (val_3 = comptool_update_player_dungeon_01e38d(), val_3 == 1)) &&
        (val_3 = compturn_fn_02035a(), val_3 != 0)) && (val_3 = comptask_fn_01ba46(), val_3 != 0)) {
      *(undefined1 *)(val_3 + 2) = 8;
      *(undefined1 *)(val_3 + 1) = 0;
      *(undefined4 *)(val_3 + 0x76) = *(undefined4 *)(&g_bss_002c921d + val_2);
      *(undefined2 *)(val_3 + 0x7a + (uint)flag * -8) =
           *(undefined2 *)(&g_bss_002c9221 + (uint)flag * -8 + val_2);
      *(undefined4 *)(val_3 + 10) = g_game_turn;
      *(int *)(val_3 + 0x7c) = val;
      uval = *(undefined2 *)(&g_bss_002c9289 + (uint)*(ushort *)(arg_edx + 0x40) * 0x94);
      *(undefined4 *)(val_3 + 0x8e) = 0x9c4;
LAB_0001b84e:
      *(undefined2 *)(val_3 + 0x86) = uval;
      return 1;
    }
  }
  else {
    val_3 = comptask_fn_01ba46();
    if (val_3 != 0) {
      *(undefined1 *)(val_3 + 2) = 9;
      *(undefined4 *)(val_3 + 0x76) = *(undefined4 *)(&g_bss_002c921d + val_2);
      *(undefined2 *)(val_3 + 0x7a + (uint)flag * -8) =
           *(undefined2 *)(&g_bss_002c9221 + (uint)flag * -8 + val_2);
      *(undefined4 *)(val_3 + 10) = g_game_turn;
      *(int *)(val_3 + 0x7c) = val;
      uval = *(undefined2 *)(&g_bss_002c9289 + (uint)*(ushort *)(arg_edx + 0x40) * 0x94);
      goto LAB_0001b84e;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : comptask_fn_01b8a5 (Original VA: 0x1b8a5, Ghidra: FUN_0001b8a5)
 * Prototype: undefined4 comptask_fn_01b8a5(void);
 * Address  : 0x1b8a5 (Size: 14 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b8a5
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01b8a5(void)

{
  undefined4 *arg_eax;
  int arg_edx;
  
  *arg_eax = 2;
  *(undefined4 *)(arg_edx + 0x34) = g_game_turn;
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01b8b3 (Original VA: 0x1b8b3, Ghidra: FUN_0001b8b3)
 * Prototype: undefined4 comptask_fn_01b8b3(void);
 * Address  : 0x1b8b3 (Size: 3 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b8b3
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01b8b3(void)

{
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01b8b6 (Original VA: 0x1b8b6, Ghidra: FUN_0001b8b6)
 * Prototype: undefined4 comptask_fn_01b8b6(void);
 * Address  : 0x1b8b6 (Size: 4 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b8b6
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01b8b6(void)

{
  undefined4 *arg_eax;
  int arg_edx;
  
  *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) & 0xf7;
  *arg_eax = 2;
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01b8ba (Original VA: 0x1b8ba, Ghidra: FUN_0001b8ba)
 * Prototype: undefined4 comptask_fn_01b8ba(void);
 * Address  : 0x1b8ba (Size: 9 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b8ba
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01b8ba(void)

{
  undefined4 *arg_eax;
  
  *arg_eax = 2;
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01b8c4 (Original VA: 0x1b8c4, Ghidra: FUN_0001b8c4)
 * Prototype: undefined4 comptask_fn_01b8c4(void);
 * Address  : 0x1b8c4 (Size: 59 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01b8c4
 * Callers  : 0 -> 
 * Callees  : 1 -> LbMemoryCopy
 ******************************************************************************/
undefined4 comptask_fn_01b8c4(void)

{
  int extraout_ECX;
  int arg_edx;
  undefined1 *arg_ebx;
  
  *arg_ebx = 0;
  if ((*(byte *)(arg_edx + 2) != 0) && (*(byte *)(arg_edx + 2) < 5)) {
    LbMemoryCopy();
    arg_edx = extraout_ECX;
  }
  return *(undefined4 *)(&g_data_00179344 + (uint)*(byte *)(arg_edx + 2) * 8);
}

/******************************************************************************
 * Function : comptask_computer_task_state_01b8ff (Original VA: 0x1b8ff, Ghidra: FUN_0001b8ff)
 * Prototype: undefined8 comptask_computer_task_state_01b8ff(void);
 * Address  : 0x1b8ff (Size: 121 bytes)
 * Module   : comptask.cpp [direct_file_string_xref]
 * OrigLine : comptask.cpp lines 82
 * Purpose  : String 'Bad Computer Task State'
 * Callers  : 1 -> compturn_process_computer_player_021416
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined8 comptask_computer_task_state_01b8ff(void)

{
  ushort uval;
  int val;
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int val_2;
  
  uval = *(ushort *)(arg_eax + 0x14c6);
  val_2 = 0;
  while( true ) {
    val = (uint)uval * 0x94;
    if ((*(int *)(arg_eax + 0x10) < 1) || (&g_bss_002c9203 + val < &g_bss_002c9204)) break;
    uval = *(ushort *)(&g_bss_002c9295 + val);
    if (((&g_bss_002c9203)[val] & 1) != 0) {
      if ((&g_bss_002c9205)[val] == '\0') {
        LbErrorLog(); /* LbErrorLog("comptask.cpp", line 82, "Bad Computer Task State") */
        arg_eax = extraout_ECX;
      }
      else {
        val_2 = val_2 + 1;
        (**(code **)(&g_data_00179348 + (uint)(byte)(&g_bss_002c9205)[val] * 8))();
        arg_eax = extraout_ECX_00;
      }
    }
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : comptask_fn_01b978 (Original VA: 0x1b978, Ghidra: FUN_0001b978)
 * Prototype: void comptask_fn_01b978(void);
 * Address  : 0x1b978 (Size: 53 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01b978
 * Callers  : 2 -> comptask_process_slabmap_tile_01be21, comptask_set_task_state_01caf6
 * Callees  : 1 -> comptask_fn_01bb1b
 ******************************************************************************/
void comptask_fn_01b978(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  
  val = (uint)*(ushort *)(arg_edx + 0x8c) * 0x48 + arg_eax + 0x38;
  if ((val != 0) && (arg_eax + 0x38 + (uint)*(ushort *)(arg_eax + 0x14c4) * 0x48 != val)) {
    *(byte *)(val + 0x44) = *(byte *)(val + 0x44) & 0xd7;
  }
  comptask_fn_01bb1b();
  return;
}

/******************************************************************************
 * Function : comptask_fn_01b9ad (Original VA: 0x1b9ad, Ghidra: FUN_0001b9ad)
 * Prototype: void comptask_fn_01b9ad(void);
 * Address  : 0x1b9ad (Size: 46 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01b9ad
 * Callers  : 3 -> comptask_fn_01bb96, comptask_process_map_subtile_01bc3e, comptask_process_slabmap_tile_01bf7d
 * Callees  : 2 -> compevnt_fn_01aabb, comptask_fn_01bb1b
 ******************************************************************************/
void comptask_fn_01b9ad(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((*(byte *)((uint)*(ushort *)(arg_edx + 0x8c) * 0x48 + arg_eax + 0x7c) & 0x20) != 0) {
    compevnt_fn_01aabb();
  }
  comptask_fn_01bb1b();
  return;
}

/******************************************************************************
 * Function : comptask_fn_01b9db (Original VA: 0x1b9db, Ghidra: FUN_0001b9db)
 * Prototype: void comptask_fn_01b9db(void);
 * Address  : 0x1b9db (Size: 67 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01b9db
 * Callers  : 0 -> 
 * Callees  : 1 -> comptask_fn_01bb1b
 ******************************************************************************/
void comptask_fn_01b9db(void)

{
  undefined4 uval;
  int arg_eax;
  int arg_edx;
  int val;
  
  val = arg_eax + 0x38 + (uint)*(ushort *)(arg_edx + 0x8c) * 0x48;
  if (val != 0) {
    (**(code **)(val + 0x28))();
    *(undefined4 *)(val + 0x3c) = 0;
    uval = g_game_turn;
    *(byte *)(val + 0x44) = *(byte *)(val + 0x44) | 1;
    *(undefined4 *)(val + 0x38) = uval;
    *(byte *)(val + 0x44) = *(byte *)(val + 0x44) & 0xdf;
  }
  comptask_fn_01bb1b();
  return;
}

/******************************************************************************
 * Function : comptask_fn_01ba1e (Original VA: 0x1ba1e, Ghidra: FUN_0001ba1e)
 * Prototype: void comptask_fn_01ba1e(void);
 * Address  : 0x1ba1e (Size: 40 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01ba1e
 * Callers  : 2 -> comptask_process_slabmap_tile_01c3d3, comptask_fn_01ca08
 * Callees  : 2 -> compevnt_fn_01aada, comptask_fn_01bb1b
 ******************************************************************************/
void comptask_fn_01ba1e(void)

{
  compevnt_fn_01aada();
  comptask_fn_01bb1b();
  return;
}

/******************************************************************************
 * Function : comptask_fn_01ba46 (Original VA: 0x1ba46, Ghidra: FUN_0001ba46)
 * Prototype: byte * comptask_fn_01ba46(void);
 * Address  : 0x1ba46 (Size: 213 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01ba46
 * Callers  : 20 -> compevnt_process_dungeon_room_018d28, compevnt_fn_018dcd, compevnt_roll_action_random_018ed3, compevnt_roll_action_random_018ffe, compevnt_fn_0192c1, compevnt_fn_0197a9, compevnt_update_creature_and_thing_019d32, compevnt_fn_01a08c ...
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
byte * comptask_fn_01ba46(void)

{
  int arg_eax;
  byte *byte_ptr;
  byte *extraout_ECX;
  int arg_edx;
  undefined *word_ptr;
  
  byte_ptr = &g_bss_002c9297;
  while( true ) {
    if (&g_bss_002ccbd3 <= byte_ptr) {
      return (byte *)0x0;
    }
    if ((*byte_ptr & 1) == 0) break;
    byte_ptr = byte_ptr + 0x94;
  }
  LbScreenWaitVbi();
  word_ptr = &g_bss_002c9203 + (uint)*(ushort *)(arg_eax + 0x14c6) * 0x94;
  if (&g_bss_002c9203 < word_ptr) {
    if (arg_edx == 0) {
      for (; *(short *)(word_ptr + 0x92) != 0;
          word_ptr = &g_bss_002c9203 + (uint)*(ushort *)(word_ptr + 0x92) * 0x94) {
      }
      *(short *)(word_ptr + 0x92) = (short)((int)(extraout_ECX + -0x2c9203) / 0x94);
      goto LAB_0001bb02;
    }
    *(undefined2 *)(extraout_ECX + 0x92) = *(undefined2 *)(arg_eax + 0x14c6);
  }
  *(short *)(arg_eax + 0x14c6) = (short)((int)(extraout_ECX + -0x2c9203) / 0x94);
LAB_0001bb02:
  *extraout_ECX = *extraout_ECX | 1;
  *(undefined4 *)(extraout_ECX + 10) = g_game_turn;
  return extraout_ECX;
}

/******************************************************************************
 * Function : comptask_fn_01bb1b (Original VA: 0x1bb1b, Ghidra: FUN_0001bb1b)
 * Prototype: undefined4 comptask_fn_01bb1b(void);
 * Address  : 0x1bb1b (Size: 123 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01bb1b
 * Callers  : 15 -> comptask_fn_01b978, comptask_fn_01b9ad, comptask_fn_01b9db, comptask_fn_01ba1e, comptask_process_dungeon_room_01c0ec, comptask_process_slabmap_tile_01c1f1, comptask_process_slabmap_tile_01c3d3, comptask_fn_01c563 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01bb1b(void)

{
  byte *byte_ptr;
  int arg_eax;
  byte *arg_edx;
  int val;
  byte *byte_ptr_2;
  
  val = (uint)*(ushort *)(arg_eax + 0x14c6) * 0x94;
  byte_ptr = &g_bss_002c9203 + val;
  if (arg_edx == &g_bss_002c9203 + val) {
    *(undefined2 *)(arg_eax + 0x14c6) = *(undefined2 *)(&g_bss_002c9295 + val);
    arg_edx[0x92] = 0;
    arg_edx[0x93] = 0;
    *arg_edx = *arg_edx & 0xfe;
    return 0;
  }
  do {
    byte_ptr_2 = byte_ptr;
    if (byte_ptr_2 < &g_bss_002c9204) {
      return 0;
    }
    byte_ptr = &g_bss_002c9203 + (uint)*(ushort *)(byte_ptr_2 + 0x92) * 0x94;
  } while (&g_bss_002c9203 + (uint)*(ushort *)(byte_ptr_2 + 0x92) * 0x94 != arg_edx);
  *(undefined2 *)(byte_ptr_2 + 0x92) = *(undefined2 *)(arg_edx + 0x92);
  arg_edx[0x92] = 0;
  arg_edx[0x93] = 0;
  *arg_edx = *arg_edx & 0xfe;
  return 1;
}

/******************************************************************************
 * Function : comptask_fn_01bb96 (Original VA: 0x1bb96, Ghidra: FUN_0001bb96)
 * Prototype: undefined4 comptask_fn_01bb96(void);
 * Address  : 0x1bb96 (Size: 168 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01bb96
 * Callers  : 0 -> 
 * Callees  : 5 -> comptask_fn_01b9ad, comptask_fn_01d34b, comptool_update_slab_subtile_columns_01e5de, compturn_update_creature_and_thing_020436, compturn_fn_020563
 ******************************************************************************/
undefined4 comptask_fn_01bb96(void)

{
  byte flag;
  ushort uval;
  undefined4 uval_2;
  byte *arg_edx;
  
  uval = comptool_update_slab_subtile_columns_01e5de(arg_edx + 0xe);
  if (uval < 0xfffd) {
    if (uval == 0xfffb) {
      flag = arg_edx[2];
      arg_edx[2] = 0x10;
      arg_edx[3] = flag;
      uval_2 = 4;
    }
    else {
      if ((*arg_edx & 4) != 0) {
        *arg_edx = *arg_edx & 0xfb;
        compturn_fn_020563();
      }
      uval_2 = 2;
    }
  }
  else if (uval == 0xffff) {
    compturn_update_creature_and_thing_020436();
    comptask_fn_01d34b(*(undefined4 *)(arg_edx + 100),*(undefined4 *)(arg_edx + 0x68),
                 *(undefined4 *)(arg_edx + 0x86));
    uval_2 = 1;
    arg_edx[2] = 2;
  }
  else {
    comptask_fn_01b9ad();
    uval_2 = 0;
  }
  return uval_2;
}

/******************************************************************************
 * Function : comptask_process_map_subtile_01bc3e (Original VA: 0x1bc3e, Ghidra: FUN_0001bc3e)
 * Prototype: undefined4 comptask_process_map_subtile_01bc3e(void);
 * Address  : 0x1bc3e (Size: 483 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01b9ad, comptask_fn_01df28, imptool_update_player_dungeon_0401aa
 ******************************************************************************/
undefined4 comptask_process_map_subtile_01bc3e(void)

{
  int val;
  int arg_eax;
  int val_2;
  int arg_edx;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint auStack_3c [8];
  uint local_1c;
  uint local_18;
  
  val = *(int *)(arg_eax + 0x24);
  if ((*(int *)(val + 0x116f) == 0) ||
     (*(int *)(val + 0x116f) <
      (int)((uint)*(ushort *)(val + 0x93d) * *(int *)(arg_eax + 0x1c)) / 100)) {
    local_1c = (uint)*(byte *)(arg_edx + 0x1b);
    local_18 = (uint)*(byte *)(arg_edx + 0x1d);
    word_ptr_2 = auStack_3c + 5;
    auStack_3c[5] = arg_edx;
    for (auStack_3c[7] = *(int *)(arg_edx + 0x2c); auStack_3c[7] != 0;
        auStack_3c[7] = auStack_3c[7] + -1) {
      word_ptr = (undefined1 *)word_ptr_2;
      if (0 < *(int *)(arg_edx + 0x38)) {
        if ((local_1c < 0xff) && (local_18 < 0xff)) {
          if ((((&g_data_001921d4)
                [(uint)(byte)(&g_slabmap_base)[((local_1c + 1) / 3 + ((local_18 + 1) / 3) * 0x55) * 6]
                 * 0x16] != '\0') &&
              ((byte)(&g_slabmap_base)[((local_1c + 1) / 3 + ((local_18 + 1) / 3) * 0x55) * 6] != 0x34
              )) && ((val_2 = (local_18 * 0x100 + local_1c + 0x101) * 5,
                     (*(byte *)((int)&g_map_subtiles + val_2) & 0x20) == 0 ||
                     (((*(byte *)((int)&g_map_subtiles + val_2) & 0x20) != 0 &&
                      ((uint)((&g_slabmap)
                              [((&g_data_0019033f)[local_1c] + (&g_data_0019033f)[local_18] * 0x55) * 6] &
                             7) == (int)*(char *)(val + 0xe9f))))))) {
            *(undefined4 *)((int)word_ptr_2 + -4) = 0x1bdc2;
            val_2 = imptool_update_player_dungeon_0401aa();
            if (val_2 < 0) {
              *(undefined4 *)((int)word_ptr_2 + -4) = 1;
              *(undefined4 *)((int)word_ptr_2 + -8) = 1;
              *(uint *)((int)word_ptr_2 + -0xc) = local_18 & 0xffff;
              word_ptr = (undefined1 *)((int)word_ptr_2 + -0x10);
              *(uint *)((int)word_ptr_2 + -0x10) = local_1c & 0xffff;
              *(undefined4 *)((int)word_ptr_2 + -0x14) = 0x1bdf6;
              val_2 = comptask_fn_01df28();
              if (val_2 < 1) {
                *(undefined4 *)((int)word_ptr_2 + -0x14) = 0x1be09;
                comptask_fn_01b9ad();
                return 0;
              }
            }
          }
          *(int *)(arg_edx + 0x44) = *(int *)(arg_edx + 0x44) + 1;
          if (*(int *)(arg_edx + 0x40) <= *(int *)(arg_edx + 0x44)) {
            *(undefined1 *)(auStack_3c[5] + 2) = 3;
            return 1;
          }
        }
        local_1c = local_1c + *(int *)(&g_data_00174dd0 + *(int *)(arg_edx + 0x3c) * 8);
        local_18 = local_18 + *(int *)(&g_data_00174dd4 + *(int *)(arg_edx + 0x3c) * 8);
      }
      *(int *)(arg_edx + 0x38) = *(int *)(arg_edx + 0x38) + -1;
      if (*(int *)(arg_edx + 0x38) < 1) {
        *(int *)(arg_edx + 0x30) = *(int *)(arg_edx + 0x30) + 1;
        if ((*(byte *)(arg_edx + 0x30) & 1) != 0) {
          *(int *)(arg_edx + 0x34) = *(int *)(arg_edx + 0x34) + 1;
        }
        *(undefined4 *)(arg_edx + 0x38) = *(undefined4 *)(arg_edx + 0x34);
        *(uint *)(arg_edx + 0x3c) = *(int *)(arg_edx + 0x3c) + 1U & 3;
      }
      word_ptr_2 = (uint *)word_ptr;
    }
    *(undefined1 *)(arg_edx + 0x1b) = (undefined1)local_1c;
    *(undefined1 *)(arg_edx + 0x1d) = (undefined1)local_18;
  }
  return 2;
}

/******************************************************************************
 * Function : comptask_process_slabmap_tile_01be21 (Original VA: 0x1be21, Ghidra: FUN_0001be21)
 * Prototype: undefined4 comptask_process_slabmap_tile_01be21(void);
 * Address  : 0x1be21 (Size: 348 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01b978, comptask_fn_01d34b
 ******************************************************************************/
undefined4 comptask_process_slabmap_tile_01be21(void)

{
  bool flag;
  int arg_eax;
  uint uval;
  undefined4 uval_2;
  undefined4 extraout_ECX;
  int arg_edx;
  uint uval_3;
  int local_38;
  int local_28;
  uint local_20;
  int local_1c;
  
  local_1c = 0;
  local_38 = 0;
  local_20 = 0;
  uval_3 = (uint)*(byte *)(arg_edx + 0x67);
  uval = (uint)*(byte *)(arg_edx + 0x65);
  if ((uint)(g_game_turn - *(int *)(arg_edx + 10)) < 0x1d4d) {
    flag = false;
    while (local_1c < *(int *)(arg_edx + 0x86)) {
      if (flag) {
        local_38 = local_38 + 1;
      }
      for (local_28 = local_38; local_28 != 0; local_28 = local_28 + -1) {
        if ((uval < 0xff) && (uval_3 < 0xff)) {
          if (((&g_slabmap_base)[(uval / 3 + (uval_3 / 3) * 0x55) * 6] != '\v') ||
             ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[uval] + (&g_subtile_to_slab_lut)[uval_3] * 0x55) * 6] &
                    7) != (int)*(char *)(*(int *)(arg_eax + 0x24) + 0xe9f))) {
            return 4;
          }
          local_1c = local_1c + 1;
          if (*(int *)(arg_edx + 0x86) <= local_1c) goto LAB_0001bf5b;
        }
        uval = uval + *(int *)(&g_data_00174dd0 + local_20 * 8);
        uval_3 = uval_3 + *(int *)(&g_data_00174dd4 + local_20 * 8);
      }
      local_20 = local_20 + 1 & 3;
      flag = (bool)(flag ^ 1);
    }
LAB_0001bf5b:
    *(undefined1 *)(arg_edx + 2) = 4;
    comptask_fn_01d34b(*(undefined4 *)(arg_edx + 100),*(undefined4 *)(arg_edx + 0x68),
                 *(undefined4 *)(arg_edx + 0x86));
    uval_2 = extraout_ECX;
  }
  else {
    comptask_fn_01b978();
    uval_2 = 0;
  }
  return uval_2;
}

/******************************************************************************
 * Function : comptask_process_slabmap_tile_01bf7d (Original VA: 0x1bf7d, Ghidra: FUN_0001bf7d)
 * Prototype: undefined4 comptask_process_slabmap_tile_01bf7d(void);
 * Address  : 0x1bf7d (Size: 367 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01b9ad, comptask_fn_01df28
 ******************************************************************************/
undefined4 comptask_process_slabmap_tile_01bf7d(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint auStack_40 [8];
  int local_20;
  uint local_1c;
  uint local_18;
  
  auStack_40[6] = *(int *)(arg_eax + 0x24);
  auStack_40[5] = *(uint *)(arg_edx + 0x80);
  if ((int)*(short *)(&g_bss_002eadcd + auStack_40[5] * 4) < *(int *)(auStack_40[6] + 0xaf9)) {
    local_1c = (uint)*(byte *)(arg_edx + 0x1b);
    local_18 = (uint)*(byte *)(arg_edx + 0x1d);
    word_ptr_2 = auStack_40 + 5;
    for (local_20 = *(int *)(arg_edx + 0x2c); local_20 != 0; local_20 = local_20 + -1) {
      word_ptr = (undefined1 *)word_ptr_2;
      if (0 < *(int *)(arg_edx + 0x38)) {
        if ((((local_1c < 0xff) && (local_18 < 0xff)) &&
            ((&g_slabmap_base)[(local_1c / 3 + (local_18 / 3) * 0x55) * 6] == '\v')) &&
           ((uint)((&g_slabmap)
                   [((&g_subtile_to_slab_lut)[local_1c] + (&g_subtile_to_slab_lut)[local_18] * 0x55) * 6] & 7) ==
            (int)*(char *)(auStack_40[6] + 0xe9f))) {
          *(uint *)((int)word_ptr_2 + -4) = auStack_40[5] & 0xffff;
          *(undefined4 *)((int)word_ptr_2 + -8) = 1;
          *(uint *)((int)word_ptr_2 + -0xc) = local_18 & 0xffff;
          *(uint *)((int)word_ptr_2 + -0x10) = local_1c & 0xffff;
          *(undefined4 *)((int)word_ptr_2 + -0x14) = 0x1c0b0;
          val = comptask_fn_01df28();
          word_ptr = (undefined1 *)((int)word_ptr_2 + -0x10);
          if ((0 < val) &&
             (*(int *)(arg_edx + 0x44) = *(int *)(arg_edx + 0x44) + 1,
             word_ptr = (undefined1 *)((int)word_ptr_2 + -0x10),
             *(int *)(arg_edx + 0x40) <= *(int *)(arg_edx + 0x44))) {
            *(undefined4 *)((int)word_ptr_2 + -0x14) = 0x1c0d1;
            comptask_fn_01b9ad();
            return 1;
          }
        }
        local_1c = local_1c + *(int *)(&g_data_00174dd0 + *(int *)(arg_edx + 0x3c) * 8);
        local_18 = local_18 + *(int *)(&g_data_00174dd4 + *(int *)(arg_edx + 0x3c) * 8);
      }
      *(int *)(arg_edx + 0x38) = *(int *)(arg_edx + 0x38) + -1;
      if (*(int *)(arg_edx + 0x38) < 1) {
        *(int *)(arg_edx + 0x30) = *(int *)(arg_edx + 0x30) + 1;
        if ((*(byte *)(arg_edx + 0x30) & 1) != 0) {
          *(int *)(arg_edx + 0x34) = *(int *)(arg_edx + 0x34) + 1;
        }
        *(undefined4 *)(arg_edx + 0x38) = *(undefined4 *)(arg_edx + 0x34);
        *(uint *)(arg_edx + 0x3c) = *(int *)(arg_edx + 0x3c) + 1U & 3;
      }
      word_ptr_2 = (uint *)word_ptr;
    }
    *(undefined1 *)(arg_edx + 0x1b) = (undefined1)local_1c;
    *(undefined1 *)(arg_edx + 0x1d) = (undefined1)local_18;
  }
  return 0;
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01c0ec (Original VA: 0x1c0ec, Ghidra: FUN_0001c0ec)
 * Prototype: uint comptask_process_dungeon_room_01c0ec(void);
 * Address  : 0x1c0ec (Size: 261 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01bb1b, comptool_update_slab_subtile_columns_01e5de, compturn_fn_020563
 ******************************************************************************/
uint comptask_process_dungeon_room_01c0ec(void)

{
  byte flag;
  int val;
  short short_val;
  int arg_eax;
  int val_2;
  byte *arg_edx;
  uint uval;
  
  val = *(int *)(arg_eax + 0x24);
  uval = 0;
  val_2 = 0;
  do {
    if (7 < val_2) {
LAB_0001c174:
      if (uval == 0) {
        short_val = comptool_update_slab_subtile_columns_01e5de();
        uval = (uint)short_val;
        if ((*arg_edx & 4) != 0) {
          *arg_edx = *arg_edx & 0xfb;
          compturn_fn_020563();
        }
      }
      if (uval < 0xfffffffd) {
        if (uval == 0xfffffffb) {
          flag = arg_edx[2];
          arg_edx[2] = 0x10;
          uval = 4;
          arg_edx[3] = flag;
        }
      }
      else {
        if (uval != 0xffffffff) {
          (&g_bss_002ddd2d)[(uint)*(ushort *)(arg_edx + 0x80) * 0x45 + (int)*(char *)(val + 0xe9f)] =
               (&g_bss_002ddd2d)
               [(uint)*(ushort *)(arg_edx + 0x80) * 0x45 + (int)*(char *)(val + 0xe9f)] | 2;
        }
        comptask_fn_01bb1b();
      }
      return uval;
    }
    if ((&g_rooms <
         &g_rooms +
         (uint)(byte)(&g_bss_002d33c8)
                     [((&g_subtile_to_slab_lut)[(int)(char)(&g_data_0018b67f)[val_2] + (uint)arg_edx[0x1b]] *
                       0x55 + (&g_subtile_to_slab_lut)
                              [(int)*(char *)((int)&g_data_0018b67b + val_2 + 3) + (uint)arg_edx[0x1b]])
                      * 6] * 0x45) &&
       (&g_rooms +
        (uint)(byte)(&g_bss_002d33c8)
                    [((&g_subtile_to_slab_lut)[(int)(char)(&g_data_0018b67f)[val_2] + (uint)arg_edx[0x1b]] * 0x55
                     + (&g_subtile_to_slab_lut)
                       [(int)*(char *)((int)&g_data_0018b67b + val_2 + 3) + (uint)arg_edx[0x1b]]) * 6] *
        0x45 == &g_rooms + (uint)*(ushort *)(arg_edx + 0x80) * 0x45)) {
      uval = 0xffffffff;
      goto LAB_0001c174;
    }
    val_2 = val_2 + 2;
  } while( true );
}

/******************************************************************************
 * Function : comptask_process_slabmap_tile_01c1f1 (Original VA: 0x1c1f1, Ghidra: FUN_0001c1f1)
 * Prototype: uint comptask_process_slabmap_tile_01c1f1(void);
 * Address  : 0x1c1f1 (Size: 482 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01bb1b, comptask_fn_01d807, comptool_update_slab_subtile_columns_01e5de, compturn_fn_020563
 ******************************************************************************/
uint comptask_process_slabmap_tile_01c1f1(void)

{
  byte flag;
  int val;
  short short_val;
  int arg_eax;
  int val_2;
  uint uval;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uval_2;
  byte *arg_edx;
  
  val = *(int *)(arg_eax + 0x24);
  if ((*(int *)(val + 0x116f) != 0) &&
     ((int)((uint)*(ushort *)(val + 0x93d) * *(int *)(arg_eax + 0x1c)) / 100 <=
      *(int *)(val + 0x116f))) {
    return 0;
  }
  if (*(int *)(arg_edx + 0x86) <= *(int *)(arg_edx + 0x58)) {
    if (((&g_data_001921c6)
         [(uint)(byte)(&g_slabmap_base)[(arg_edx[0x21] / 3 + (arg_edx[0x23] / 3) * 0x55) * 6] * 0x16] &
        1) == 0) {
      arg_edx[0x58] = 0;
      arg_edx[0x59] = 0;
      arg_edx[0x5a] = 0;
      arg_edx[0x5b] = 0;
    }
    else {
      *(int *)(arg_edx + 0x60) = *(int *)(arg_edx + 0x60) + -1;
      if (0 < *(int *)(arg_edx + 0x60)) {
        return 0;
      }
    }
    arg_edx[0x58] = 0;
    arg_edx[0x59] = 0;
    arg_edx[0x5a] = 0;
    arg_edx[0x5b] = 0;
  }
  short_val = comptool_update_slab_subtile_columns_01e5de();
  uval = (uint)short_val;
  if ((*arg_edx & 4) != 0) {
    *arg_edx = *arg_edx & 0xfb;
    compturn_fn_020563();
    uval = extraout_ECX;
  }
  if (*(int *)(arg_edx + 0x86) <= *(int *)(arg_edx + 0x58)) {
    *(int *)(arg_edx + 0x60) = (int)(700 / (longlong)*(int *)(arg_eax + 0x18));
  }
  if (uval < 0xfffffffd) {
    if (uval != 0xfffffffb) {
      return uval;
    }
    flag = arg_edx[2];
    arg_edx[2] = 0x10;
    arg_edx[3] = flag;
    return 4;
  }
  val_2 = comptask_fn_01d807();
  if (val_2 != 0) {
    return 0;
  }
  uval = (uint)*(ushort *)(arg_edx + 0x80);
  if (((ushort)arg_edx[0x1b] == (&g_bss_002eb558)[uval * 0xe]) &&
     ((ushort)arg_edx[0x1d] == (&g_bss_002eb55a)[uval * 0xe])) {
    if (extraout_ECX_00 < 0xfffffffd) {
      return extraout_ECX_00;
    }
    uval_2 = extraout_ECX_00;
    if (extraout_ECX_00 == 0xffffffff) {
LAB_0001c394:
      if (uval_2 != 0xffffffff) {
        return uval_2;
      }
      goto LAB_0001c378;
    }
  }
  else {
    arg_edx[0x21] = *(byte *)(&g_bss_002eb558 + uval * 0xe);
    arg_edx[0x23] = *(byte *)(&g_bss_002eb55a + uval * 0xe);
    arg_edx[0x1b] = *(byte *)(&g_bss_002eb558 + uval * 0xe);
    arg_edx[0x1d] = *(byte *)(&g_bss_002eb55a + uval * 0xe);
    val_2 = comptask_fn_01d807();
    if (val_2 != 0) {
      return extraout_ECX_01;
    }
    if (extraout_ECX_01 < 0xfffffffd) {
      return extraout_ECX_01;
    }
    uval_2 = extraout_ECX_01;
    if (extraout_ECX_01 == 0xffffffff) goto LAB_0001c394;
    uval = (uint)*(ushort *)(arg_edx + 0x80);
  }
  (&g_bss_002eb553)[(int)*(char *)(val + 0xe9f) + uval * 0x1c] =
       (&g_bss_002eb553)[(int)*(char *)(val + 0xe9f) + uval * 0x1c] | 2;
LAB_0001c378:
  comptask_fn_01bb1b();
  return extraout_ECX_02;
}

/******************************************************************************
 * Function : comptask_process_slabmap_tile_01c3d3 (Original VA: 0x1c3d3, Ghidra: FUN_0001c3d3)
 * Prototype: int comptask_process_slabmap_tile_01c3d3(void);
 * Address  : 0x1c3d3 (Size: 400 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 5 -> comptask_fn_01ba1e, comptask_fn_01bb1b, comptool_process_slabmap_tile_01dd33, comptool_update_slab_subtile_columns_01e5de, compturn_fn_020563
 ******************************************************************************/
int comptask_process_slabmap_tile_01c3d3(void)

{
  byte flag;
  ushort uval;
  short short_val;
  undefined4 *arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  byte *arg_edx;
  byte *byte_ptr;
  byte *byte_ptr_2;
  int local_1c;
  
  if (0x1d4c < (uint)(g_game_turn - *(int *)(arg_edx + 10))) {
    *arg_eax = 2;
    comptask_fn_01bb1b();
    return 0;
  }
  if (*(short *)(arg_edx + 0x20) != 0) {
    if ((uint)((&g_slabmap)
               [((&g_subtile_to_slab_lut)[arg_edx[0x21]] + (&g_subtile_to_slab_lut)[arg_edx[0x23]] * 0x55) * 6] & 7) !=
        (int)*(char *)(arg_eax[9] + 0xe9f)) {
      return 4;
    }
    if ((*arg_edx & 4) != 0) {
      val = *(int *)(arg_edx + 0x5c);
      *(int *)(arg_edx + 0x5c) = val + 1;
      if (4 < val) {
        *arg_edx = *arg_edx & 0xfb;
      }
      compturn_fn_020563();
    }
  }
  short_val = comptool_update_slab_subtile_columns_01e5de();
  val = (int)short_val;
  if (val < -3) {
    if (val == -5) {
      flag = arg_edx[2];
      arg_edx[2] = 0x10;
      arg_edx[3] = flag;
      return 4;
    }
    return val;
  }
  if (val < -1) {
    *arg_eax = 2;
  }
  else {
    if (-1 < val) {
      if (val != 0) {
        return val;
      }
      byte_ptr = arg_edx + 0x20;
      local_1c = 0;
      byte_ptr_2 = arg_edx + 0x21;
      val_2 = 0;
      while ((val_2 < 10 &&
             (val_2 = comptool_process_slabmap_tile_01dd33((char)(&g_data_0018b686)[val_2] * 3,(int)*(short *)(arg_edx + 0x86),
                                   byte_ptr,byte_ptr_2), val_2 == 0))) {
        local_1c = local_1c + 1;
        val_2 = extraout_ECX + 2;
      }
      if (local_1c == 5) {
        return 0;
      }
    }
    uval = *(ushort *)(arg_edx + 0x8c);
    *(short *)(arg_eax + (uint)uval * 0x12 + 0x1e) = (short)((int)(arg_edx + -0x2c9203) / 0x94);
    (*(code *)arg_eax[(uint)uval * 0x12 + 0x17])();
  }
  comptask_fn_01ba1e();
  return val;
}

/******************************************************************************
 * Function : comptask_fn_01c563 (Original VA: 0x1c563, Ghidra: FUN_0001c563)
 * Prototype: undefined4 comptask_fn_01c563(void);
 * Address  : 0x1c563 (Size: 473 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01c563
 * Callers  : 0 -> 
 * Callees  : 5 -> comptask_fn_01bb1b, comptask_fn_01df28, compturn_update_creature_and_thing_020607, compturn_update_creature_and_thing_020669, compturn_update_creature_and_thing_0206b2
 ******************************************************************************/
undefined4 comptask_fn_01c563(void)

{
  byte flag;
  int arg_eax;
  int val;
  int val_2;
  int arg_edx;
  uint *word_ptr;
  uint *word_ptr_2;
  undefined8 uval;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (uint *)&stack0xfffffff0;
  word_ptr_2 = (uint *)&stack0xfffffff0;
  val_2 = *(int *)(arg_eax + 0x24);
  flag = *(byte *)(arg_edx + 1);
  if (flag == 0) {
    if ((uint)(g_game_turn - *(int *)(arg_edx + 0x5c)) < *(uint *)(arg_edx + 0x60)) {
      return 4;
    }
    *(int *)(arg_edx + 0x5c) = g_game_turn;
    *(undefined4 *)(arg_edx + 0x60) = 0x12;
    uStack_14 = 0x1c5b3;
    uval = compturn_update_creature_and_thing_020607();
    val = (int)((ulonglong)uval >> 0x20);
    if (*(int *)(val + 0x7c) <= (int)uval) {
      *(undefined1 *)(val + 1) = 1;
      return 2;
    }
    uStack_14 = 0x1c5c8;
    val = compturn_update_creature_and_thing_0206b2();
    if (val != 0) {
      uStack_14 = 1;
      uStack_18 = 1;
      uStack_1c = (uint)*(byte *)(val + 0x10);
      uStack_20 = (uint)*(byte *)(val + 0xe);
      val_2 = comptask_fn_01df28();
      if (0 < val_2) {
        return 2;
      }
      *(undefined1 *)(arg_edx + 1) = 2;
      return 4;
    }
    uStack_14 = 0x1c5e0;
    uval = compturn_update_creature_and_thing_020607();
    if ((int)((ulonglong)uval >> 0x20) < (int)uval) {
      *(undefined1 *)(arg_edx + 1) = 1;
      return 4;
    }
    if (*(int *)(val_2 + 0x884) != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      word_ptr = &uStack_20;
      uStack_20 = 0;
      comptask_fn_01df28();
    }
  }
  else {
    if (1 < flag) {
      if (flag != 2) {
        return 4;
      }
      if ((uint)(g_game_turn - *(int *)(arg_edx + 0x5c)) < *(uint *)(arg_edx + 0x60)) {
        uStack_14 = 0x1c6ea;
        uval = compturn_update_creature_and_thing_020669();
        if ((int)uval < (int)((ulonglong)uval >> 0x20)) {
          return 1;
        }
      }
      if (*(int *)(val_2 + 0x884) != 0) {
        uStack_14 = 0;
        uStack_18 = 0;
        uStack_1c = 0;
        word_ptr_2 = &uStack_20;
        uStack_20 = 0;
        comptask_fn_01df28();
      }
      *(undefined4 *)((int)word_ptr_2 + -4) = 0x1c720;
      comptask_fn_01bb1b();
      return 1;
    }
    if ((uint)(g_game_turn - *(int *)(arg_edx + 0x5c)) < *(uint *)(arg_edx + 0x60)) {
      return 2;
    }
    uStack_14 = 1;
    uStack_18 = 1;
    uStack_1c = (uint)*(byte *)(arg_edx + 0x79);
    uStack_20 = (uint)*(byte *)(arg_edx + 0x77);
    word_ptr = &uStack_20;
    val_2 = comptask_fn_01df28();
    if (-1 < val_2) {
      *(undefined1 *)(arg_edx + 1) = 2;
      *(undefined4 *)(arg_edx + 0x60) = *(undefined4 *)(arg_edx + 0x8e);
      return 2;
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x1c616;
  comptask_fn_01bb1b();
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01c73c (Original VA: 0x1c73c, Ghidra: FUN_0001c73c)
 * Prototype: undefined4 comptask_fn_01c73c(void);
 * Address  : 0x1c73c (Size: 190 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01c73c
 * Callers  : 0 -> 
 * Callees  : 5 -> comptask_fn_01bb1b, comptool_process_slabmap_tile_01dd33, comptool_computer_thing_hand_01e119, comptool_thing_held_computer_unconsious_01e226, comptool_update_creature_and_thing_01f153
 ******************************************************************************/
undefined4 comptask_fn_01c73c(void)

{
  short short_val;
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_edx;
  bool flag;
  
  if (0x1d4c < (uint)(g_game_turn - *(int *)(arg_edx + 10))) {
    comptask_fn_01bb1b();
    return 0;
  }
  val = comptool_process_slabmap_tile_01dd33();
  if (val != 0) {
    if (*(short *)(arg_eax + 0x14c8) == 0) {
      val = *(int *)(extraout_ECX + 0x7c);
      *(int *)(extraout_ECX + 0x7c) = val + -1;
      if (val == 0) {
        comptask_fn_01bb1b();
        return 1;
      }
      val = comptool_update_creature_and_thing_01f153();
      if (val == 0) {
        return 4;
      }
      val = comptool_computer_thing_hand_01e119();
      flag = val == 0;
    }
    else {
      short_val = comptool_thing_held_computer_unconsious_01e226();
      flag = short_val == 0;
    }
    if (!flag) {
      return 2;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : comptask_fn_01c7fa (Original VA: 0x1c7fa, Ghidra: FUN_0001c7fa)
 * Prototype: undefined4 comptask_fn_01c7fa(void);
 * Address  : 0x1c7fa (Size: 157 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01c7fa
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01bb1b, comptool_computer_thing_hand_01e119, comptool_thing_held_computer_unconsious_01e226, creature_update_creature_control_084ff8
 ******************************************************************************/
undefined4 comptask_fn_01c7fa(void)

{
  short short_val;
  int arg_eax;
  int val;
  int arg_edx;
  undefined4 uval;
  
  uval = 2;
  if (*(short *)(arg_eax + 0x14c8) == 0) {
    val = creature_update_creature_control_084ff8(*(undefined1 *)(*(int *)(arg_eax + 0x24) + 0xe9f));
    if ((val == 0) || (val = comptool_computer_thing_hand_01e119(), val == 0)) {
      comptask_fn_01bb1b();
      uval = 0;
    }
  }
  else if (*(short *)(arg_eax + 0x14c8) == *(short *)(arg_edx + 0x76)) {
    short_val = comptool_thing_held_computer_unconsious_01e226();
    if (short_val == 0) {
      uval = 0;
    }
    comptask_fn_01bb1b();
  }
  return uval;
}

/******************************************************************************
 * Function : comptask_fn_01c897 (Original VA: 0x1c897, Ghidra: FUN_0001c897)
 * Prototype: undefined4 comptask_fn_01c897(void);
 * Address  : 0x1c897 (Size: 147 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01c897
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01bb1b, comptool_computer_thing_hand_01e119, comptool_thing_held_computer_unconsious_01e226, comptool_update_creature_and_thing_01f538
 ******************************************************************************/
undefined4 comptask_fn_01c897(void)

{
  short short_val;
  int arg_eax;
  int val;
  int arg_edx;
  
  if (*(short *)(arg_eax + 0x14c8) == 0) {
    if ((uint)(g_game_turn - *(int *)(arg_edx + 0x5c)) < *(uint *)(arg_edx + 0x60)) {
      return 4;
    }
    *(int *)(arg_edx + 0x5c) = g_game_turn;
    val = *(int *)(arg_edx + 0x7c);
    *(int *)(arg_edx + 0x7c) = val + -1;
    if (val < 1) {
      comptask_fn_01bb1b();
      return 1;
    }
    val = comptool_update_creature_and_thing_01f538();
    if (val == 0) {
      return 2;
    }
    val = comptool_computer_thing_hand_01e119();
  }
  else {
    short_val = comptool_thing_held_computer_unconsious_01e226();
    val = (int)short_val;
  }
  if (val != 0) {
    return 2;
  }
  comptask_fn_01bb1b();
  return 0;
}

/******************************************************************************
 * Function : comptask_update_creature_and_thing_01c92a (Original VA: 0x1c92a, Ghidra: FUN_0001c92a)
 * Prototype: undefined4 comptask_update_creature_and_thing_01c92a(void);
 * Address  : 0x1c92a (Size: 222 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01df28, spell_update_creature_control_0720ce
 ******************************************************************************/
undefined4 comptask_update_creature_and_thing_01c92a(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  byte flag;
  int arg_eax;
  int cctrl_ptr_2;
  int arg_edx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  uint auStack_30 [5];
  undefined1 local_1c [4];
  int local_18;
  
  word_ptr_2 = local_1c;
  local_18 = *(int *)(arg_eax + 0x24);
  cctrl_ptr_2 = *(int *)(arg_edx + 0x7c);
  *(int *)(arg_edx + 0x7c) = cctrl_ptr_2 + -1;
  if (0 < cctrl_ptr_2) {
    cctrl_ptr = *(ushort *)(local_18 + 0x2f);
    word_ptr_2 = local_1c;
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      word_ptr = word_ptr_2;
      if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
        *(undefined4 *)(word_ptr_2 + -4) = 0x1c98e;
        cctrl_ptr_2 = spell_update_creature_control_0720ce();
        if ((cctrl_ptr_2 == 0) && (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x21) == 0)) { /* thing->ccontrol_idx */
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if ((&g_data_0018c4be)[(uint)flag * 0x29] == '\x01') {
            *(undefined4 *)(word_ptr_2 + -4) = 0;
            *(uint *)(word_ptr_2 + -8) = (uint)*(ushort *)(thing_ptr + 0x1b); /* thing->index_or_angle */
            *(undefined4 *)(word_ptr_2 + -0xc) = 0;
            word_ptr = word_ptr_2 + -0x10;
            *(undefined4 *)(word_ptr_2 + -0x10) = 0;
            *(undefined4 *)(word_ptr_2 + -0x14) = 0x1c9ec;
            cctrl_ptr_2 = comptask_fn_01df28();
            if (0 < cctrl_ptr_2) {
              return 2;
            }
          }
        }
      }
      word_ptr_2 = word_ptr;
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x1c3fe;
  comptask_fn_01bb1b();
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01ca08 (Original VA: 0x1ca08, Ghidra: FUN_0001ca08)
 * Prototype: uint comptask_fn_01ca08(void);
 * Address  : 0x1ca08 (Size: 96 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Module comptask.cpp procedure @ 0x01ca08
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01ba1e, comptool_update_slab_subtile_columns_01e5de, compturn_fn_020563
 ******************************************************************************/
uint comptask_fn_01ca08(void)

{
  byte flag;
  short short_val;
  byte *arg_edx;
  uint uval;
  
  short_val = comptool_update_slab_subtile_columns_01e5de();
  uval = (uint)short_val;
  if (uval < 0xfffffffd) {
    if (uval == 0xfffffffb) {
      flag = arg_edx[2];
      arg_edx[2] = 0x10;
      uval = 4;
      arg_edx[3] = flag;
    }
    else if ((*arg_edx & 4) != 0) {
      *arg_edx = *arg_edx & 0xfb;
      compturn_fn_020563();
    }
  }
  else {
    comptask_fn_01ba1e();
  }
  return uval;
}

/******************************************************************************
 * Function : comptask_process_thing_entity_01ca68 (Original VA: 0x1ca68, Ghidra: FUN_0001ca68)
 * Prototype: undefined4 comptask_process_thing_entity_01ca68(void);
 * Address  : 0x1ca68 (Size: 142 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01bb1b, comptask_fn_01df28, comptool_update_player_dungeon_01e38d, spell_update_creature_control_0720ce
 ******************************************************************************/
undefined4 comptask_process_thing_entity_01ca68(void)

{
  int arg_eax;
  int thing_ptr;
  int val;
  int arg_edx;
  undefined4 *word_ptr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(undefined4 *)(arg_eax + 0x24);
  local_18 = 4;
  iStack_20 = 0x1ca95;
  thing_ptr = comptool_update_player_dungeon_01e38d();
  word_ptr = &local_1c;
  if ((thing_ptr == 1) &&
     (thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_edx + 0x76)], word_ptr = &local_1c, thing_ptr != 0)) {
    iStack_20 = 0x1cab5;
    val = spell_update_creature_control_0720ce();
    word_ptr = &local_1c;
    if (val == 0) {
      uStack_24 = (uint)*(ushort *)(thing_ptr + 0x1b); /* thing->index_or_angle */
      uStack_28 = 0;
      uStack_2c = 0;
      iStack_20 = val;
      thing_ptr = comptask_fn_01df28();
      word_ptr = &uStack_2c;
      if (0 < thing_ptr) {
        local_18 = 1;
        word_ptr = &uStack_2c;
      }
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x1caf1;
  comptask_fn_01bb1b();
  return local_18;
}

/******************************************************************************
 * Function : comptask_set_task_state_01caf6 (Original VA: 0x1caf6, Ghidra: FUN_0001caf6)
 * Prototype: undefined4 comptask_set_task_state_01caf6(void);
 * Address  : 0x1caf6 (Size: 227 bytes)
 * Module   : comptask.cpp [direct_file_string_xref]
 * OrigLine : comptask.cpp lines 976
 * Purpose  : String 'Bad set Task State'
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01b978, comptask_fn_01df28, LbErrorLog
 ******************************************************************************/
undefined4 comptask_set_task_state_01caf6(void)

{
  int arg_eax;
  undefined4 uval;
  int val;
  int arg_edx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int loop_i;
  uint auStack_38 [5];
  undefined1 local_24 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_20 = (uint)*(byte *)(arg_edx + 0x21);
  local_18 = (uint)*(byte *)(arg_edx + 0x23);
  local_1c = (uint)*(char *)(*(int *)(arg_eax + 0x24) + 0xe9f);
  if ((uint)(g_game_turn - *(int *)(arg_edx + 10)) < 0x1d4d) {
    word_ptr_2 = local_24;
    for (loop_i = 0; loop_i < 8; loop_i = loop_i + 2) {
      word_ptr = word_ptr_2;
      if (((&g_slabmap)
           [((&g_subtile_to_slab_lut)[*(char *)((int)&g_data_0018b67b + loop_i + 3) * 3 + local_20] +
            (&g_subtile_to_slab_lut)[(char)(&g_data_0018b67f)[loop_i] * 3 + local_18] * 0x55) * 6] & 7) ==
          local_1c) {
        *(undefined4 *)(word_ptr_2 + -4) = 0xf;
        *(undefined4 *)(word_ptr_2 + -8) = 1;
        *(uint *)(word_ptr_2 + -0xc) = local_18 & 0xffff;
        word_ptr = word_ptr_2 + -0x10;
        *(uint *)(word_ptr_2 + -0x10) = local_20 & 0xffff;
        *(undefined4 *)(word_ptr_2 + -0x14) = 0x1cbab;
        val = comptask_fn_01df28();
        if (0 < val) {
          *(char *)(arg_edx + 2) = *(char *)(arg_edx + 3);
          if (*(char *)(arg_edx + 3) == '\0') {
            *(undefined4 *)(word_ptr_2 + -0x14) = 0x1cbd4;
            LbErrorLog(); /* LbErrorLog("comptask.cpp", line 976, "Bad set Task State") */
          }
          return 1;
        }
      }
      word_ptr_2 = word_ptr;
    }
    uval = 4;
  }
  else {
    comptask_fn_01b978();
    uval = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : comptask_process_thing_entity_01cbd9 (Original VA: 0x1cbd9, Ghidra: FUN_0001cbd9)
 * Prototype: undefined4 comptask_process_thing_entity_01cbd9(void);
 * Address  : 0x1cbd9 (Size: 170 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01bb1b, comptask_fn_01df28, comptool_update_player_dungeon_01e38d
 ******************************************************************************/
undefined4 comptask_process_thing_entity_01cbd9(void)

{
  int arg_eax;
  undefined4 uval;
  int val;
  int thing_ptr;
  int arg_edx;
  
  uval = *(undefined4 *)(arg_eax + 0x24);
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_edx + 0x76)];
  val = *(int *)(arg_edx + 0x7c);
  *(int *)(arg_edx + 0x7c) = val + -1;
  if ((val == 0) || (*(short *)(thing_ptr + 0x5e) < 1)) {
    comptask_fn_01bb1b();
    uval = 1;
  }
  else {
    val = comptool_update_player_dungeon_01e38d(uval);
    if ((val == 1) &&
       (thing_ptr = comptask_fn_01df28(*(undefined1 *)(thing_ptr + 0xe),*(undefined1 *)(thing_ptr + 0x10),
                             *(undefined2 *)(arg_edx + 0x76),0), 0 < thing_ptr)) {
      return 2;
    }
    uval = 4;
  }
  return uval;
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01cc83 (Original VA: 0x1cc83, Ghidra: FUN_0001cc83)
 * Prototype: undefined4 comptask_process_dungeon_room_01cc83(void);
 * Address  : 0x1cc83 (Size: 253 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01bb1b, comptool_computer_thing_hand_01e119, comptool_thing_held_computer_unconsious_01e226, compturn_update_creature_and_thing_020826
 ******************************************************************************/
undefined4 comptask_process_dungeon_room_01cc83(void)

{
  short room_off;
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_edx;
  int local_14;
  
  if (*(short *)(arg_eax + 0x14c8) == 0) {
    val = *(int *)(arg_edx + 0x7c);
    *(int *)(arg_edx + 0x7c) = val + -1;
    if (val < 1) {
      comptask_fn_01bb1b();
      return 1;
    }
    val = compturn_update_creature_and_thing_020826();
    if (val != 0) {
      *(undefined2 *)(extraout_ECX + 0x80) = *(undefined2 *)(local_14 + 1);
      val = comptool_computer_thing_hand_01e119((ushort)*(byte *)(local_14 + 8) << 8,0x100);
      if (val != 0) {
        return 2;
      }
    }
  }
  else {
    room_off = comptool_thing_held_computer_unconsious_01e226((ushort)(byte)(&g_bss_002ddd23)[(uint)*(ushort *)(arg_edx + 0x80) * 0x45] << 8
                         ,0x100);
    if (0 < room_off) {
      return 2;
    }
  }
  comptask_fn_01bb1b();
  return 0;
}

/******************************************************************************
 * Function : comptask_sell_item_type_01cd80 (Original VA: 0x1cd80, Ghidra: FUN_0001cd80)
 * Prototype: undefined4 comptask_sell_item_type_01cd80(void);
 * Address  : 0x1cd80 (Size: 412 bytes)
 * Module   : comptask.cpp [direct_file_string_xref]
 * OrigLine : comptask.cpp lines 1126
 * Purpose  : String 'Unknown SELL_ITEM type'
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01bb1b, workshop_crate_workshop_ok_07795d, workshop_item_class_077a5b, LbErrorLog
 ******************************************************************************/
undefined4 comptask_sell_item_type_01cd80(void)

{
  int val;
  uint uval;
  bool flag;
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int arg_edx;
  int val_2;
  int local_20;
  int local_18;
  
  val = *(int *)(arg_eax + 0x24);
  if ((*(int *)(arg_edx + 0x76) <= *(int *)(arg_edx + 0x7c)) &&
     (*(int *)(val + 0xaf9) <= *(int *)(arg_edx + 0x80))) {
    val_2 = *(int *)(arg_edx + 0x86);
    flag = false;
    local_20 = 0;
    while( true ) {
      val_2 = val_2 * 8;
      if ((10 < local_20) || (flag)) break;
      uval = *(uint *)(&g_data_001793dc + val_2);
      if (uval == 0) {
LAB_0001ceec:
        LbErrorLog(); /* LbErrorLog("comptask.cpp", line 1126, "Unknown SELL_ITEM type") */
        arg_edx = extraout_ECX_02;
      }
      else if (uval < 2) {
        if (*(char *)(val + 0x101d + *(int *)(&g_data_001793e0 + val_2)) != '\0') {
          local_18 = *(int *)(&g_bss_001ae930 + *(int *)(&g_data_001793e0 + val_2) * 0x14);
          val_2 = workshop_item_class_077a5b();
          arg_edx = extraout_ECX;
joined_r0x0001ce0b:
          flag = true;
          if (val_2 != 0) {
            flag = true;
            workshop_crate_workshop_ok_07795d();
            arg_edx = extraout_ECX_00;
          }
        }
      }
      else {
        if (uval != 2) goto LAB_0001ceec;
        if (*(char *)(val + 0x1008 + *(int *)(&g_data_001793e0 + val_2)) != '\0') {
          local_18 = *(int *)(&g_bss_001ae8a4 + *(int *)(&g_data_001793e0 + val_2) * 0x14);
          val_2 = workshop_item_class_077a5b();
          arg_edx = extraout_ECX_01;
          goto joined_r0x0001ce0b;
        }
      }
      *(int *)(arg_edx + 0x86) = *(int *)(arg_edx + 0x86) + 1;
      if (*(int *)(&g_data_001793dc + *(int *)(arg_edx + 0x86) * 8) == 0) {
        *(undefined4 *)(arg_edx + 0x86) = 0;
      }
      val_2 = *(int *)(arg_edx + 0x86);
      local_20 = local_20 + 1;
    }
    if (flag) {
      *(int *)(arg_edx + 0x70) = *(int *)(arg_edx + 0x70) + -1;
      if (*(int *)(arg_edx + 0x70) < 1) {
        comptask_fn_01bb1b();
      }
      else {
        *(int *)(arg_edx + 0x76) = *(int *)(arg_edx + 0x76) + local_18;
        *(int *)(val + 0xafd) = *(int *)(val + 0xafd) + local_18;
        *(int *)(val + 0xaf9) = *(int *)(val + 0xaf9) + local_18;
      }
      return 1;
    }
  }
  comptask_fn_01bb1b();
  return 0;
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01cf1c (Original VA: 0x1cf1c, Ghidra: FUN_0001cf1c)
 * Prototype: int comptask_process_dungeon_room_01cf1c(uint param_1);
 * Address  : 0x1cf1c (Size: 498 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> compevnt_fn_01ac13, compevnt_fn_01ac93
 * Callees  : 2 -> comptask_roll_action_random_01d10e, bflib_system_io_fn_0e8cc8
 ******************************************************************************/
int comptask_process_dungeon_room_01cf1c(uint param_1)

{
  byte flag;
  ushort uval;
  short short_val;
  short short_val_2;
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  int val_4;
  int room_ptr;
  int arg_ecx;
  short arg_dx;
  int arg_ebx;
  undefined1 *word_ptr;
  short *val_5;
  byte *byte_ptr;
  short local_38;
  short local_36;
  undefined2 local_34;
  int local_30;
  int local_28;
  int local_1c;
  int local_18;
  uint local_14;
  
  val = *(int *)(arg_eax + 0x24);
  val_2 = arg_ecx;
  if (arg_ecx < arg_ebx) {
    val_2 = arg_ebx;
  }
  local_1c = (val_2 + 1) / 2 + 1;
  val_2 = local_1c * 2;
  val_3 = local_1c / 3;
  val_5 = &local_38;
  local_28 = arg_ecx;
  if ((arg_dx == 0xe) &&
     (val_5 = &local_38,
     arg_ebx * arg_ecx <
     *(int *)(&g_bss_002e15e5 + *(char *)(val + 0xe9f) * 0x1508) +
     *(int *)(&g_bss_002e15e5 + *(char *)(val + 0xe9f) * 0x1508) / 2)) {
    local_28 = bflib_system_io_fn_0e8cc8();
    local_28 = local_28 + 1;
    val_5 = &local_38;
  }
  do {
    if (val_2 + val_3 <= local_1c) {
      return 0;
    }
    for (local_30 = 1; -1 < local_30; local_30 = local_30 + -1) {
      local_14 = param_1;
      if ((int)param_1 < 0) {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        local_14 = g_action_random_seed % 0x12;
      }
      for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
        if ((byte)(&g_data_00174e09)[local_14 & 0xffff] == 0x11) {
          uval = *(ushort *)(arg_eax + 0x14c6);
          while( true ) {
            room_ptr = (uint)uval * 0x94;
            byte_ptr = &g_bss_002c9203 + room_ptr;
            if (byte_ptr < &g_bss_002c9204) break;
            word_ptr = (undefined1 *)val_5;
            if (((*byte_ptr & 1) != 0) && ((*byte_ptr & 2) != 0)) {
              short_val = *(short *)(&g_bss_002c927f + room_ptr);
              short_val_2 = *(short *)(&g_bss_002c9281 + room_ptr);
              *(int *)((int)val_5 + -4) = local_30;
              val_4 = (int)short_val_2 / 2;
              if ((int)short_val_2 / 2 < (int)short_val / 2) {
                val_4 = (int)short_val / 2;
              }
              *(int *)((int)val_5 + -8) = val_4 + local_1c + 1;
              word_ptr = (undefined1 *)((int)val_5 + -0xc);
              *(int *)((int)val_5 + -0xc) = local_28;
              *(undefined4 *)((int)val_5 + -0x10) = 0x1d100;
              val_4 = comptask_roll_action_random_01d10e();
              if (val_4 != 0) {
                return val_4;
              }
            }
            uval = *(ushort *)(&g_bss_002c9295 + room_ptr);
            val_5 = (short *)word_ptr;
          }
        }
        else {
          uval = *(ushort *)((uint)(byte)(&g_data_00174e09)[local_14 & 0xffff] * 2 + val + 0xb);
          while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
            *(int *)((int)val_5 + -4) = local_30;
            local_38 = (ushort)(byte)(&g_bss_002ddd23)[room_ptr] << 8;
            flag = (&g_bss_002ddd24)[room_ptr];
            *(int *)((int)val_5 + -8) = local_1c;
            local_36 = (ushort)flag << 8;
            *(int *)((int)val_5 + -0xc) = local_28;
            local_34 = 0x100;
            *(undefined4 *)((int)val_5 + -0x10) = 0x1d08e;
            val_4 = comptask_roll_action_random_01d10e();
            if (val_4 != 0) {
              return val_4;
            }
            val_5 = (short *)((int)val_5 + -0xc);
            uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
          }
        }
        local_14 = ((local_14 & 0xffff) + 1) % 0x12;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}

/******************************************************************************
 * Function : comptask_roll_action_random_01d10e (Original VA: 0x1d10e, Ghidra: FUN_0001d10e)
 * Prototype: byte * comptask_roll_action_random_01d10e(undefined4 param_1,ushort param_2,int param_3);
 * Address  : 0x1d10e (Size: 497 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> comptask_process_dungeon_room_01cf1c
 * Callees  : 6 -> comptask_fn_01ba46, comptask_fn_01d2ff, comptool_fn_01ddd4, comptool_fn_01df65, comptool_update_slab_subtile_columns_01fc2d, LbScreenWaitVbi
 ******************************************************************************/
byte * comptask_roll_action_random_01d10e(undefined4 param_1,ushort param_2,int param_3)

{
  undefined4 uval;
  int arg_eax;
  int val;
  undefined4 arg_ecx;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *arg_edx;
  ushort arg_bx;
  undefined1 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 local_54;
  undefined2 auStack_40 [2];
  undefined1 local_3b;
  undefined1 local_39;
  byte local_33;
  byte local_31;
  uint local_2c;
  undefined4 local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  flag = 0;
  local_28 = *(undefined4 *)(arg_eax + 0x24);
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_14 = 3;
  local_54 = arg_ecx;
  LbScreenWaitVbi();
  local_20 = extraout_ECX -
             ((int)((extraout_ECX + (extraout_ECX >> 0x1f) * -4) -
                   (uint)((extraout_ECX >> 0x1f) << 1 < 0)) >> 2);
  local_10 = 0;
  word_ptr_2 = &local_54;
  local_1c = extraout_ECX;
  do {
    if (3 < (ushort)local_10) {
      return (byte *)0x0;
    }
    *(uint *)((int)word_ptr_2 + -4) = (uint)param_2;
    uval = *arg_edx;
    auStack_40[(uint)flag * -4] = *(undefined2 *)(arg_edx + (uint)flag * -2 + 1);
    *(undefined4 *)((int)word_ptr_2 + -8) = 0x1d1df;
    val = comptool_update_slab_subtile_columns_01fc2d();
    word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
    if (val != 0) {
      local_2c = (uint)local_33;
      *(undefined4 *)((int)word_ptr_2 + -8) = param_1;
      local_18 = (uint)local_31;
      *(undefined4 *)((int)word_ptr_2 + -0xc) = 0x1d204;
      val = comptool_fn_01df65();
      word_ptr = (undefined1 *)((int)word_ptr_2 + -8);
      if (val != 0) {
        local_3b = (undefined1)local_2c;
        local_39 = (undefined1)local_18;
        if (param_3 == 0) {
          *(undefined4 *)((int)word_ptr_2 + -0xc) = 0x1d266;
          val = comptool_fn_01ddd4();
          word_ptr = (undefined1 *)((int)word_ptr_2 + -8);
          if (local_20 <= val) goto LAB_0001d271;
        }
        else {
          *(undefined4 *)((int)word_ptr_2 + -0xc) = 0x1d237;
          val = comptool_fn_01ddd4();
          word_ptr = (undefined1 *)((int)word_ptr_2 + -8);
          if (val == local_1c) {
LAB_0001d271:
            *(undefined4 *)((int)word_ptr_2 + -0xc) = 0x1d27b;
            local_24 = (byte *)comptask_fn_01ba46();
            if (local_24 == (byte *)0x0) {
              return (byte *)0x0;
            }
            local_24[2] = 1;
            local_24[4] = (byte)arg_bx;
            local_24[0x65] = (char)((int)local_2c / 3) * '\x03';
            local_24[0x67] = (char)((int)local_18 / 3) * '\x03';
            *(undefined4 *)(local_24 + 0x6a) = *arg_edx;
            *(undefined2 *)(local_24 + (uint)flag * -8 + 0x6e) =
                 *(undefined2 *)(arg_edx + (uint)flag * -2 + 1);
            *(undefined4 *)(local_24 + 0x70) = uval;
            *(undefined2 *)(local_24 + (uint)flag * -8 + 0x74) = auStack_40[(uint)flag * -4];
            *(undefined2 *)(local_24 + 0x7c) = (undefined2)local_54;
            *(undefined4 *)((int)word_ptr_2 + -0xc) = *(undefined4 *)(local_24 + 0x68);
            *(undefined4 *)(local_24 + 0x86) = extraout_ECX_00;
            *(undefined4 *)((int)word_ptr_2 + -0x10) = *(undefined4 *)(local_24 + 100);
            *(undefined4 *)((int)word_ptr_2 + -0x14) = *(undefined4 *)(local_24 + 0x74);
            *(short *)(local_24 + 0x7e) = (short)param_1;
            *(undefined4 *)((int)word_ptr_2 + -0x18) = *(undefined4 *)(local_24 + 0x70);
            *(uint *)(local_24 + 0x80) = (uint)arg_bx;
            *local_24 = *local_24 | 6;
            *(undefined4 *)((int)word_ptr_2 + -0x1c) = 0x1d2f2;
            comptask_fn_01d2ff();
            return local_24;
          }
        }
      }
    }
    local_14 = (local_14 + 1) % 4;
    local_10 = local_10 + 1;
    word_ptr_2 = (undefined4 *)word_ptr;
  } while( true );
}

/******************************************************************************
 * Function : comptask_fn_01d2ff (Original VA: 0x1d2ff, Ghidra: FUN_0001d2ff)
 * Prototype: void comptask_fn_01d2ff(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4);
 * Address  : 0x1d2ff (Size: 76 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01d2ff
 * Callers  : 5 -> compevnt_fn_0197a9, comptask_update_player_dungeon_01ae5c, comptask_fn_01b15c, comptask_roll_action_random_01d10e, comptool_fn_01ff84
 * Callees  : 0 -> 
 ******************************************************************************/
void comptask_fn_01d2ff(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 *arg_eax;
  
  arg_eax[3] = param_1;
  *(undefined2 *)(arg_eax + 4) = param_2;
  *arg_eax = param_1;
  *(undefined2 *)(arg_eax + 1) = param_2;
  *(undefined4 *)((int)arg_eax + 6) = param_3;
  *(undefined2 *)((int)arg_eax + 10) = param_4;
  *(undefined2 *)((int)arg_eax + 0x12) = 0;
  *(undefined2 *)(arg_eax + 5) = 0;
  *(undefined2 *)((int)arg_eax + 0x16) = 0;
  arg_eax[6] = 0x7fffffff;
  *(undefined4 *)((int)arg_eax + 0x1e) = 1;
  *(undefined4 *)((int)arg_eax + 0x46) = 0;
  return;
}

/******************************************************************************
 * Function : comptask_fn_01d34b (Original VA: 0x1d34b, Ghidra: FUN_0001d34b)
 * Prototype: void comptask_fn_01d34b(undefined4 param_1,undefined2 param_2,undefined4 param_3);
 * Address  : 0x1d34b (Size: 70 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01d34b
 * Callers  : 2 -> comptask_fn_01bb96, comptask_process_slabmap_tile_01be21
 * Callees  : 0 -> 
 ******************************************************************************/
void comptask_fn_01d34b(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  int arg_eax;
  
  *(undefined4 *)(arg_eax + 0xc) = param_1;
  *(undefined2 *)(arg_eax + 0x10) = param_2;
  *(undefined4 *)(arg_eax + 0x1e) = 1;
  *(undefined4 *)(arg_eax + 0x22) = 0;
  *(undefined4 *)(arg_eax + 0x26) = 0;
  *(undefined4 *)(arg_eax + 0x2a) = 0;
  *(undefined4 *)(arg_eax + 0x2e) = 0;
  *(undefined4 *)(arg_eax + 0x36) = 0;
  *(undefined4 *)(arg_eax + 0x32) = param_3;
  return;
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01d391 (Original VA: 0x1d391, Ghidra: FUN_0001d391)
 * Prototype: uint comptask_process_dungeon_room_01d391(void);
 * Address  : 0x1d391 (Size: 528 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> comptask_update_player_dungeon_01ae5c
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint comptask_process_dungeon_room_01d391(void)

{
  ushort uval;
  int room_off;
  int arg_eax;
  uint uval_2;
  short arg_cx;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *arg_edx;
  byte *thing_ptr;
  undefined4 *arg_ebx;
  undefined1 *room_ptr;
  byte flag;
  undefined8 uval_3;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  int local_38;
  uint local_34;
  byte *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  uint local_10;
  
  flag = 0;
  local_14 = *(int *)(arg_eax + 0x24);
  local_10 = (uint)arg_cx;
  local_18 = (undefined1 *)0x0;
  if ((int)local_10 < 0) {
    local_10 = (uint)g_neutral_player_number;
  }
  *arg_ebx = 0;
  local_20 = 0xffffffff;
  uval = g_bss_002eb9e4;
  if ((int)(short)(ushort)local_10 != (uint)g_neutral_player_number) {
    uval = (&g_bss_002e0596)[(short)(ushort)local_10 * 0xa84];
  }
  local_38 = local_14 + 0x22;
  local_2c = arg_edx;
  while( true ) {
    room_off = (uint)uval * 0x45;
    room_ptr = &g_rooms + room_off;
    if (room_ptr < &g_bss_002ddd1c) break;
    if ((((int)(char)(&g_bss_002ddd1e)[room_off] == (int)(short)(ushort)local_10) &&
        ((room_ptr[*(char *)(local_14 + 0xe9f) + 0x12] & 1) == 0)) &&
       (-1 < (char)(room_ptr[*(char *)(local_14 + 0xe9f) + 0x12] << 6))) {
      local_1c = (uint)(byte)(&g_bss_002ddd23)[room_off];
      local_34 = (uint)(byte)(&g_bss_002ddd24)[room_off];
      val = local_14;
      do {
        uval = *(ushort *)(val + 0xb);
        while (&g_rooms < &g_rooms + (uint)uval * 0x45) {
          local_28 = bflib_system_io_fn_0e69fc();
          uval_3 = bflib_system_io_fn_0e69fc();
          val = (int)((ulonglong)uval_3 >> 0x20);
          local_24 = (int)uval_3;
          uval_2 = local_28 + local_24;
          if ((uval_2 < local_20) && (uval_2 != 0)) {
            local_40 = (ushort)*(byte *)(val + 8) << 8;
            local_3e = (ushort)*(byte *)(val + 9) << 8;
            local_30 = (byte *)&local_40;
            local_3c = 0x100;
            local_20 = uval_2;
            local_18 = room_ptr;
          }
          uval = *(ushort *)(val + 6);
          val = extraout_ECX;
        }
        val = val + 2;
      } while (val != local_38);
    }
    uval = *(ushort *)(arg_eax + 0x14c6);
    while (thing_ptr = &g_bss_002c9203 + (uint)uval * 0x94, &g_bss_002c9203 < thing_ptr) {
      if (((*thing_ptr & 1) != 0) && ((*thing_ptr & 2) != 0)) {
        local_24 = bflib_system_io_fn_0e69fc();
        uval_3 = bflib_system_io_fn_0e69fc();
        thing_ptr = (byte *)((ulonglong)uval_3 >> 0x20);
        uval_2 = extraout_ECX_00 + (int)uval_3;
        if ((uval_2 < local_20) && (uval_2 != 0)) {
          local_30 = thing_ptr + 100; /* thing->ccontrol_idx */
          local_20 = uval_2;
          local_18 = room_ptr;
        }
      }
      uval = *(ushort *)(thing_ptr + 0x92);
    }
    if ((ushort)local_10 == g_neutral_player_number) {
      uval = *(ushort *)(&g_bss_002ddd34 + room_off);
    }
    else {
      uval = *(ushort *)(&g_bss_002ddd21 + room_off);
    }
  }
  if (local_18 == (undefined1 *)0x0) {
    local_20 = 0;
  }
  else {
    *arg_ebx = local_18;
    *local_2c = *(undefined4 *)local_30;
    *(undefined2 *)(local_2c + (uint)flag * -2 + 1) =
         *(undefined2 *)(local_30 + (uint)flag * -8 + 4);
  }
  return local_20;
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01d5a1 (Original VA: 0x1d5a1, Ghidra: FUN_0001d5a1)
 * Prototype: int comptask_process_dungeon_room_01d5a1(void);
 * Address  : 0x1d5a1 (Size: 86 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 3 -> combtool_update_player_dungeon_018a55, comptask_process_dungeon_room_01ad1f, comptask_update_player_dungeon_01ae5c
 * Callees  : 0 -> 
 ******************************************************************************/
int comptask_process_dungeon_room_01d5a1(void)

{
  ushort uval;
  int arg_eax;
  int room_ptr;
  uint arg_edx;
  int val;
  
  val = 0;
  uval = g_bss_002eb9e4;
  while( true ) {
    room_ptr = (uint)uval * 0x45;
    if (&g_rooms + room_ptr == &g_rooms) break;
    if ((((&g_rooms + room_ptr)[*(char *)(*(int *)(arg_eax + 0x24) + 0xe9f) + 0x12] & 1) == 0) &&
       ((int)(char)(&g_bss_002ddd1e)[room_ptr] == (arg_edx & 0xffff))) {
      val = val + 1;
    }
    uval = *(ushort *)(&g_bss_002ddd34 + room_ptr);
  }
  return val;
}

/******************************************************************************
 * Function : comptask_fn_01d5f7 (Original VA: 0x1d5f7, Ghidra: FUN_0001d5f7)
 * Prototype: undefined4 comptask_fn_01d5f7(void);
 * Address  : 0x1d5f7 (Size: 10 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01d5f7
 * Callers  : 1 -> comptool_update_creature_and_thing_01d917
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptask_fn_01d5f7(void)

{
  int arg_eax;
  
  return *(undefined4 *)(*(int *)(arg_eax + 0x24) + 0xaf9);
}

/******************************************************************************
 * Function : comptask_process_dungeon_room_01d601 (Original VA: 0x1d601, Ghidra: FUN_0001d601)
 * Prototype: int comptask_process_dungeon_room_01d601(void);
 * Address  : 0x1d601 (Size: 518 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> comptask_fn_01b15c
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
int comptask_process_dungeon_room_01d601(void)

{
  byte flag;
  byte flag_2;
  ushort uval;
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  int room_ptr;
  int val_4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *arg_edx;
  undefined4 *arg_ebx;
  byte *byte_ptr;
  byte *loop_i;
  byte flag_3;
  undefined8 uval_2;
  short local_50;
  short local_4e;
  undefined2 local_4c;
  uint local_48;
  short *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 *local_34;
  int local_2c;
  byte *local_24;
  int local_20;
  
  flag_3 = 0;
  local_24 = (byte *)0x0;
  local_2c = -1;
  val_4 = 0x7fffffff;
  val = *(int *)(arg_eax + 0x24);
  local_38 = val + 0x22;
  *arg_ebx = 0;
  local_34 = arg_edx;
  for (loop_i = &g_bss_002eb552; loop_i < &g_bss_002eb9b2; loop_i = loop_i + 0x1c) {
    if ((*loop_i & 1) != 0) {
      if (((loop_i[*(char *)(val + 0xe9f) + 1] & 1) == 0) &&
         (-1 < (char)(loop_i[*(char *)(val + 0xe9f) + 1] << 6))) {
        flag = loop_i[6];
        flag_2 = loop_i[8];
        local_20 = val;
        do {
          uval = *(ushort *)(local_20 + 0xb);
          while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
            local_3c = (uint)flag;
            bflib_system_io_fn_0e69fc();
            local_3c = (uint)flag_2;
            uval_2 = bflib_system_io_fn_0e69fc();
            val_2 = (int)uval_2 + (int)((ulonglong)uval_2 >> 0x20);
            val_4 = extraout_ECX;
            if (val_2 != 0) {
              if (*(short *)(&g_room_slabs_count + room_ptr) == 2) {
                val_3 = 0x16;
              }
              else {
                val_3 = 0;
              }
              val_3 = (val_2 - ((int)(uint)*(ushort *)(loop_i + 0xe) >> 3)) - val_3;
              val_4 = extraout_ECX;
              if (val_3 < extraout_ECX) {
                local_50 = (ushort)(byte)(&g_bss_002ddd23)[room_ptr] << 8;
                local_4e = (ushort)(byte)(&g_bss_002ddd24)[room_ptr] << 8;
                local_44 = &local_50;
                local_4c = 0x100;
                val_4 = val_3;
                local_24 = loop_i;
              }
            }
            uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
          }
          local_20 = local_20 + 2;
        } while (local_20 != local_38);
        uval = *(ushort *)(arg_eax + 0x14c6);
        while( true ) {
          room_ptr = (uint)uval * 0x94;
          byte_ptr = &g_bss_002c9203 + room_ptr;
          local_2c = 0;
          if (byte_ptr < &g_bss_002c9204) break;
          if (((*byte_ptr & 1) != 0) && ((*byte_ptr & 2) != 0)) {
            local_3c = bflib_system_io_fn_0e69fc();
            local_48 = (uint)(byte)(&g_bss_002c926a)[room_ptr];
            uval_2 = bflib_system_io_fn_0e69fc();
            local_40 = (int)((ulonglong)uval_2 >> 0x20) + (int)uval_2;
            val_4 = extraout_ECX_00;
            if ((local_40 != 0) &&
               (local_40 = local_40 - ((int)(uint)*(ushort *)(loop_i + 0xe) >> 3),
               val_4 = extraout_ECX_00, local_40 < extraout_ECX_00)) {
              local_44 = (short *)(&g_bss_002c9267 + room_ptr);
              val_4 = local_40;
              local_24 = loop_i;
            }
          }
          uval = *(ushort *)(&g_bss_002c9295 + room_ptr);
        }
      }
    }
  }
  if (local_24 != (byte *)0x0) {
    *arg_ebx = local_24;
    *local_34 = *(undefined4 *)local_44;
    *(short *)(local_34 + (uint)flag_3 * -2 + 1) = local_44[((uint)flag_3 * -2 + 1) * 2];
    if (val_4 < 0) {
      val_4 = 0;
    }
    return val_4;
  }
  return local_2c;
}

/******************************************************************************
 * Function : comptask_fn_01d807 (Original VA: 0x1d807, Ghidra: FUN_0001d807)
 * Prototype: undefined4 comptask_fn_01d807(void);
 * Address  : 0x1d807 (Size: 154 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptask.cpp procedure @ 0x01d807
 * Callers  : 1 -> comptask_process_slabmap_tile_01c1f1
 * Callees  : 2 -> comptool_fn_01ddd4, comptool_update_slab_subtile_columns_01e5de
 ******************************************************************************/
undefined4 comptask_fn_01d807(void)

{
  short short_val;
  int loop_i;
  int arg_edx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  byte flag;
  undefined1 local_64 [80];
  
  flag = 0;
  *(undefined4 *)(arg_edx + 0x14) = *(undefined4 *)(arg_edx + 0x20);
  *(undefined2 *)(arg_edx + 0x18) = *(undefined2 *)(arg_edx + 0x24);
  loop_i = comptool_fn_01ddd4();
  if (loop_i != 0x19) {
    *(undefined4 *)(arg_edx + 0x26) = 0x7fffffff;
    *(undefined4 *)(arg_edx + 0x54) = 0;
    *(undefined4 *)(arg_edx + 0x1a) = *(undefined4 *)(arg_edx + 0x20);
    *(undefined2 *)(arg_edx + 0x1e + (uint)flag * -8) =
         *(undefined2 *)(arg_edx + 0x24 + (uint)flag * -8);
    word_ptr = (undefined1 *)(arg_edx + 0xe);
    word_ptr_2 = local_64;
    for (loop_i = 0x4e; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
    do {
      short_val = comptool_update_slab_subtile_columns_01e5de();
    } while (short_val == 0);
    if ((short_val == -1) || (short_val == -5)) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : comptask_process_slabmap_tile_01d8a1 (Original VA: 0x1d8a1, Ghidra: FUN_0001d8a1)
 * Prototype: undefined4 comptask_process_slabmap_tile_01d8a1(void);
 * Address  : 0x1d8a1 (Size: 118 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 1 -> imptool_update_player_dungeon_0401aa
 ******************************************************************************/
undefined4 comptask_process_slabmap_tile_01d8a1(void)

{
  int val;
  int extraout_ECX;
  int arg_edx;
  
  imptool_update_player_dungeon_0401aa();
  if (((&g_data_001921c6)
       [(uint)(byte)(&g_slabmap_base)[(extraout_ECX / 3 + (arg_edx / 3) * 0x55) * 6] * 0x16] & 1) != 0)
  {
    val = imptool_update_player_dungeon_0401aa();
    if (val < 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : comptask_fn_01df28 (Original VA: 0x1df28, Ghidra: FUN_0001df28)
 * Prototype: void comptask_fn_01df28(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);
 * Address  : 0x1df28 (Size: 61 bytes)
 * Module   : comptask.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module comptask.cpp procedure @ 0x01df28
 * Callers  : 14 -> compevnt_process_thing_entity_018e3c, compevnt_update_creature_and_thing_01916a, compevnt_process_dungeon_room_0194e8, compevnt_process_slabmap_tile_0198cd, compevnt_process_dungeon_room_019af8, comptask_process_slabmap_tile_01b3d7, comptask_process_map_subtile_01bc3e, comptask_process_slabmap_tile_01bf7d ...
 * Callees  : 1 -> input_game_action_048c77
 ******************************************************************************/
void comptask_fn_01df28(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  short short_val;
  int arg_eax;
  
  short_val = input_game_action_048c77(param_2,param_3,param_4);
  if (0 < short_val) {
    *(int *)(arg_eax + 0x10) = *(int *)(arg_eax + 0x10) + -1;
  }
  return;
}

