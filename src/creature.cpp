/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: creature.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 93
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : creature_update_slab_subtile_columns_07df64 (Original VA: 0x7df64, Ghidra: FUN_0007df64)
 * Prototype: int creature_update_slab_subtile_columns_07df64(void);
 * Address  : 0x7df64 (Size: 463 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 3 -> creature_fn_07e868, creature_fn_07f290, creature_fn_07f310
 * Callees  : 2 -> door_process_map_subtile_022b3a, door_update_player_view_state_022b94
 ******************************************************************************/
int creature_update_slab_subtile_columns_07df64(void)

{
  int arg_eax;
  uint uval;
  uint uval_2;
  int val;
  byte arg_cl;
  ushort *arg_edx;
  int val_2;
  int val_3;
  byte arg_bl;
  int val_4;
  int val_5;
  int val_6;
  
  uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  val_2 = (int)(*arg_edx - uval) >> 0x1f;
  val_2 = (int)(((*arg_edx - uval) + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
  if (val_2 < 0) {
    val_2 = 0;
  }
  val_3 = (int)(arg_edx[1] - uval) >> 0x1f;
  val_3 = (int)(((arg_edx[1] - uval) + val_3 * -0x100) - (uint)(val_3 << 7 < 0)) >> 8;
  if (val_3 < 0) {
    val_3 = 0;
  }
  uval_2 = ((int)(*arg_edx + uval) >> 8) + 1;
  if (0xff < uval_2) {
    uval_2 = 0xff;
  }
  uval = ((int)(arg_edx[1] + uval) >> 8) + 1;
  if (0xff < uval) {
    uval = 0xff;
  }
  do {
    if ((int)uval <= val_3) {
      return -1;
    }
    if (val_2 < (int)uval_2) {
      val_6 = val_2 * 4;
      val_5 = val_2 * 5 + val_3 * 0x500;
      val_4 = val_2;
      do {
        if ((((*(byte *)((int)&g_map_subtiles + val_5) & arg_bl) != 0) ||
            ((&g_slabmap_base)
             [((&g_subtile_to_slab_lut)[val_3] * 0x55 + *(int *)((int)&g_subtile_to_slab_lut + val_6)) * 6] == '\0'))
           && (((*(byte *)((int)&g_map_subtiles + val_5) & arg_bl & 0x20) == 0 ||
               (((uint)arg_cl &
                1 << ((&g_slabmap)
                      [((&g_subtile_to_slab_lut)[val_3] * 0x55 + *(int *)((int)&g_subtile_to_slab_lut + val_6)) * 6] &
                     7)) == 0)))) {
          if ((*(byte *)((int)&g_map_subtiles + val_5) & 0x40) == 0) {
            return val_3 * 0x100 + val_4;
          }
          val = door_process_map_subtile_022b3a();
          if ((val == 0) || (val = door_update_player_view_state_022b94(), val == 0)) {
            return val_3 * 0x100 + val_4;
          }
        }
        val_6 = val_6 + 4;
        val_4 = val_4 + 1;
        val_5 = val_5 + 5;
      } while (val_4 < (int)uval_2);
    }
    val_3 = val_3 + 1;
  } while( true );
}

/******************************************************************************
 * Function : creature_fn_07e134 (Original VA: 0x7e134, Ghidra: FUN_0007e134)
 * Prototype: undefined4 creature_fn_07e134(void);
 * Address  : 0x7e134 (Size: 1841 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07e134
 * Callers  : 3 -> ariadne_fn_012a2e, move_update_creature_control_0b3dac, room_fn_0c6ec0
 * Callees  : 5 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, move_process_map_subtile_0b3040, room_fn_0c79e0, room_fn_0c7a58
 ******************************************************************************/
undefined4 creature_fn_07e134(void)

{
  uint uval;
  bool flag;
  undefined2 uval_2;
  ushort uval_3;
  int arg_eax;
  int val;
  undefined4 uval_4;
  ushort *extraout_ECX;
  int extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  ushort *extraout_ECX_05;
  undefined4 *extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  undefined4 *extraout_ECX_08;
  undefined4 *word_ptr;
  undefined4 *extraout_ECX_09;
  ushort *extraout_ECX_10;
  ushort *arg_edx;
  int val_2;
  byte flag_2;
  undefined2 auStack_70 [2];
  undefined4 local_6c;
  undefined2 auStack_68 [2];
  undefined4 local_64;
  undefined2 auStack_60 [2];
  undefined1 local_5c;
  byte bStack_5b;
  undefined1 uStack_5a;
  byte bStack_59;
  undefined2 local_58 [2];
  undefined4 local_54;
  undefined2 auStack_50 [2];
  undefined4 local_4c;
  ushort auStack_48 [2];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 local_3c;
  undefined2 auStack_38 [2];
  undefined4 local_34;
  undefined2 auStack_30 [2];
  undefined4 local_2c;
  ushort auStack_28 [2];
  undefined4 local_24;
  undefined2 auStack_20 [2];
  int local_1c;
  int local_18;
  
  flag_2 = 0;
  uval = *(uint *)(arg_eax + 0xd);
  local_5c = (undefined1)uval;
  bStack_5b = (byte)(uval >> 8);
  uStack_5a = (undefined1)(uval >> 0x10);
  bStack_59 = (byte)(uval >> 0x18);
  local_58[0] = *(ushort *)(arg_eax + 0x11);
  local_1c = (uint)*arg_edx - (uval & 0xffff);
  local_18 = (uint)arg_edx[1] - (uval >> 0x10);
  local_24 = *(uint *)(arg_eax + 0xd);
  auStack_20[0] = *(undefined2 *)(arg_eax + 0x11);
  if ((bStack_5b == *(byte *)((int)arg_edx + 1)) || (bStack_59 == *(byte *)((int)arg_edx + 3))) {
    local_2c = *(undefined4 *)arg_edx;
    auStack_28[0] = arg_edx[2];
    val = ceiling_process_map_subtile_07dbc0();
    if (val != 0) {
      val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
      val = move_process_map_subtile_0b3040();
      if (val < val_2) {
        uval_4 = 1;
        arg_edx = extraout_ECX_10;
        goto LAB_0007e844;
      }
      extraout_ECX_10[2] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val == -1) || (0x100 < val - val_2)) {
        uval_4 = 1;
        goto LAB_0007e844;
      }
    }
    uval_4 = 0;
LAB_0007e844:
    *(undefined4 *)arg_edx = local_2c;
    arg_edx[(uint)flag_2 * -4 + 2] = auStack_28[(uint)flag_2 * -4];
    return uval_4;
  }
  val = room_fn_0c79e0();
  if (val == 0) {
    val = room_fn_0c7a58();
    if (val == 0) {
      local_54 = *extraout_ECX_04;
      auStack_50[(uint)flag_2 * -4] = *(undefined2 *)(extraout_ECX_04 + (uint)flag_2 * -2 + 1);
      val = ceiling_process_map_subtile_07dbc0();
      word_ptr = extraout_ECX_04;
      if (val == 0) {
LAB_0007e7af:
        flag = false;
      }
      else {
        val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
        val = move_process_map_subtile_0b3040();
        if (val < val_2) {
          flag = true;
          word_ptr = extraout_ECX_09;
        }
        else {
          *(undefined2 *)(extraout_ECX_09 + 1) = 0xffff;
          val = move_process_map_subtile_0b28e8();
          if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e7af;
          flag = true;
        }
      }
      *word_ptr = local_54;
      *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1) = auStack_50[(uint)flag_2 * -4];
      if (flag) {
        *(uint *)(arg_eax + 0xd) = local_24;
        *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_20[(uint)flag_2 * -4];
        return 1;
      }
    }
    else {
      local_44 = CONCAT13(bStack_59,CONCAT12(uStack_5a,CONCAT11(bStack_5b,local_5c)));
      local_40[(uint)flag_2 * -4] = local_58[(uint)flag_2 * -4];
      if (CONCAT11(bStack_59,uStack_5a) < *(ushort *)((int)extraout_ECX_04 + 2)) {
        uval_3 = (ushort)(byte)(bStack_59 + 1) << 8;
      }
      else {
        uval_3 = (ushort)bStack_59 * 0x100 - 1;
      }
      local_44 = CONCAT22(uval_3,(short)((int)(local_1c * ((uint)uval_3 - (local_24 >> 0x10))) /
                                       local_18) + (short)local_24);
      local_40[0] = local_58[0];
      local_4c = local_44;
      auStack_48[(uint)flag_2 * -4] = local_40[(uint)flag_2 * -4];
      val = ceiling_process_map_subtile_07dbc0();
      if (val == 0) {
LAB_0007e546:
        flag = false;
      }
      else {
        val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
        val = move_process_map_subtile_0b3040();
        if (val < val_2) {
          flag = true;
        }
        else {
          local_40[0] = 0xffff;
          val = move_process_map_subtile_0b28e8();
          if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e546;
          flag = true;
        }
      }
      local_44 = local_4c;
      local_40[(uint)flag_2 * -4] = auStack_48[(uint)flag_2 * -4];
      if (flag) {
        return 1;
      }
      *(undefined4 *)(arg_eax + 0xd) = local_4c;
      *(ushort *)(arg_eax + 0x11 + (uint)flag_2 * -8) = local_40[(uint)flag_2 * -4];
      uval_2 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval_2;
      uval_4 = *(undefined4 *)(arg_eax + 0xd);
      local_5c = (undefined1)uval_4;
      bStack_5b = (byte)((uint)uval_4 >> 8);
      uStack_5a = (undefined1)((uint)uval_4 >> 0x10);
      bStack_59 = (byte)((uint)uval_4 >> 0x18);
      local_58[(uint)flag_2 * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8);
      if ((ushort)uval_4 < *extraout_ECX_05) {
        uval_3 = (ushort)(byte)(bStack_5b + 1) << 8;
      }
      else {
        uval_3 = ((ushort)uval_4 & 0xff00) - 1;
      }
      local_44 = (uint)uval_3;
      local_44 = CONCAT22((short)((int)((local_44 - (local_24 & 0xffff)) * local_18) / local_1c) +
                          local_24._2_2_,uval_3);
      local_40[0] = local_58[0];
      local_34 = local_44;
      auStack_30[(uint)flag_2 * -4] = local_40[(uint)flag_2 * -4];
      val = ceiling_process_map_subtile_07dbc0();
      if (val == 0) {
LAB_0007e64c:
        flag = false;
      }
      else {
        val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
        val = move_process_map_subtile_0b3040();
        if (val < val_2) {
          flag = true;
        }
        else {
          local_40[0] = 0xffff;
          val = move_process_map_subtile_0b28e8();
          if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e64c;
          flag = true;
        }
      }
      uval_4 = local_34;
      local_44 = local_34;
      local_40[(uint)flag_2 * -4] = auStack_30[(uint)flag_2 * -4];
      if (flag) {
        *(uint *)(arg_eax + 0xd) = local_24;
        *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_20[(uint)flag_2 * -4];
        return 1;
      }
      *(undefined4 *)(arg_eax + 0xd) = uval_4;
      *(ushort *)(arg_eax + 0x11 + (uint)flag_2 * -8) = local_40[(uint)flag_2 * -4];
      uval_2 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval_2;
      uval_4 = *(undefined4 *)(arg_eax + 0xd);
      local_5c = (undefined1)uval_4;
      bStack_5b = (byte)((uint)uval_4 >> 8);
      uStack_5a = (undefined1)((uint)uval_4 >> 0x10);
      bStack_59 = (byte)((uint)uval_4 >> 0x18);
      local_58[(uint)flag_2 * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8);
      local_44 = *extraout_ECX_06;
      local_40[0] = local_58[0];
      local_64 = *extraout_ECX_06;
      auStack_60[(uint)flag_2 * -4] = local_40[(uint)flag_2 * -4];
      val = ceiling_process_map_subtile_07dbc0();
      word_ptr = extraout_ECX_07;
      if (val == 0) {
LAB_0007e722:
        flag = false;
      }
      else {
        val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
        val = move_process_map_subtile_0b3040();
        if (val < val_2) {
          word_ptr = &local_44;
          flag = true;
        }
        else {
          local_40[0] = 0xffff;
          val = move_process_map_subtile_0b28e8();
          word_ptr = extraout_ECX_08;
          if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e722;
          flag = true;
        }
      }
      *word_ptr = local_64;
      *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1) = auStack_60[(uint)flag_2 * -4];
      if (flag) {
        *(uint *)(arg_eax + 0xd) = local_24;
        *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_20[(uint)flag_2 * -4];
        return 1;
      }
    }
  }
  else {
    if (CONCAT11(bStack_5b,local_5c) < *extraout_ECX) {
      uval_3 = (ushort)(byte)(bStack_5b + 1) << 8;
    }
    else {
      uval_3 = (ushort)bStack_5b * 0x100 - 1;
    }
    local_44 = (uint)uval_3;
    local_44 = CONCAT22((short)((int)((local_44 - (local_24 & 0xffff)) * local_18) / local_1c) +
                        local_24._2_2_,uval_3);
    local_40[0] = local_58[0];
    local_3c = local_44;
    auStack_38[(uint)flag_2 * -4] = local_40[(uint)flag_2 * -4];
    val = ceiling_process_map_subtile_07dbc0();
    if (val == 0) {
LAB_0007e26c:
      flag = false;
    }
    else {
      val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
      val = move_process_map_subtile_0b3040();
      if (val < val_2) {
        flag = true;
      }
      else {
        local_40[0] = 0xffff;
        val = move_process_map_subtile_0b28e8();
        if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e26c;
        flag = true;
      }
    }
    uval_4 = local_3c;
    local_44 = local_3c;
    local_40[(uint)flag_2 * -4] = auStack_38[(uint)flag_2 * -4];
    if (flag) {
      return 1;
    }
    *(undefined4 *)(arg_eax + 0xd) = uval_4;
    *(ushort *)(arg_eax + 0x11 + (uint)flag_2 * -8) = local_40[(uint)flag_2 * -4];
    uval_2 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(arg_eax + 0x11) = uval_2;
    uval_4 = *(undefined4 *)(arg_eax + 0xd);
    local_5c = (undefined1)uval_4;
    bStack_5b = (byte)((uint)uval_4 >> 8);
    uStack_5a = (undefined1)((uint)uval_4 >> 0x10);
    bStack_59 = (byte)((uint)uval_4 >> 0x18);
    local_58[(uint)flag_2 * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8);
    uval_3 = (ushort)((uint)uval_4 >> 0x10);
    if (uval_3 < *(ushort *)(extraout_ECX_00 + 2)) {
      uval_3 = (ushort)(byte)(bStack_59 + 1) << 8;
    }
    else {
      uval_3 = (uval_3 & 0xff00) - 1;
    }
    local_44 = CONCAT22(uval_3,(short)((int)(local_1c * ((uint)uval_3 - (local_24 >> 0x10))) /
                                     local_18) + (short)local_24);
    uval_4 = local_44;
    local_40[0] = local_58[0];
    auStack_70[(uint)flag_2 * -4] = local_40[(uint)flag_2 * -4];
    val = ceiling_process_map_subtile_07dbc0();
    if (val == 0) {
LAB_0007e369:
      flag = false;
    }
    else {
      val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
      val = move_process_map_subtile_0b3040();
      if (val < val_2) {
        flag = true;
      }
      else {
        local_40[0] = 0xffff;
        val = move_process_map_subtile_0b28e8();
        if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e369;
        flag = true;
      }
    }
    local_44 = uval_4;
    local_40[(uint)flag_2 * -4] = auStack_70[(uint)flag_2 * -4];
    if (flag) {
      uval_4 = 1;
      goto LAB_0007e859;
    }
    *(undefined4 *)(arg_eax + 0xd) = uval_4;
    *(ushort *)(arg_eax + 0x11 + (uint)flag_2 * -8) = local_40[(uint)flag_2 * -4];
    uval_2 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(arg_eax + 0x11) = uval_2;
    uval_4 = *(undefined4 *)(arg_eax + 0xd);
    local_5c = (undefined1)uval_4;
    bStack_5b = (byte)((uint)uval_4 >> 8);
    uStack_5a = (undefined1)((uint)uval_4 >> 0x10);
    bStack_59 = (byte)((uint)uval_4 >> 0x18);
    local_58[(uint)flag_2 * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8);
    local_44 = *extraout_ECX_01;
    local_40[0] = local_58[0];
    local_6c = *extraout_ECX_01;
    auStack_68[(uint)flag_2 * -4] = local_40[(uint)flag_2 * -4];
    val = ceiling_process_map_subtile_07dbc0();
    word_ptr = extraout_ECX_02;
    if (val == 0) {
LAB_0007e436:
      flag = false;
    }
    else {
      val_2 = *(int *)(arg_eax + 0xf) >> 0x10;
      val = move_process_map_subtile_0b3040();
      if (val < val_2) {
        word_ptr = &local_44;
        flag = true;
      }
      else {
        local_40[0] = 0xffff;
        val = move_process_map_subtile_0b28e8();
        word_ptr = extraout_ECX_03;
        if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007e436;
        flag = true;
      }
    }
    *word_ptr = local_6c;
    *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1) = auStack_68[(uint)flag_2 * -4];
    if (flag) {
      *(uint *)(arg_eax + 0xd) = local_24;
      *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_20[(uint)flag_2 * -4];
      return 1;
    }
  }
  uval_4 = 0;
LAB_0007e859:
  *(uint *)(arg_eax + 0xd) = local_24;
  *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_20[(uint)flag_2 * -4];
  return uval_4;
}

/******************************************************************************
 * Function : creature_fn_07e868 (Original VA: 0x7e868, Ghidra: FUN_0007e868)
 * Prototype: uint creature_fn_07e868(void);
 * Address  : 0x7e868 (Size: 2496 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07e868
 * Callers  : 8 -> routes_ve_been_pushing_very_0d1ae0, routes_update_creature_control_0d2510, routes_illegal_block_direction_lookahead_0d29ac, routes_fn_0d3ee8, routes_fn_0d3f64, routes_fn_0d402c, routes_ve_been_pushing_very_0d4188, routes_update_creature_control_0d5624
 * Callees  : 5 -> ceiling_process_map_subtile_07dbc0, creature_update_slab_subtile_columns_07df64, move_process_map_subtile_0b28e8, room_fn_0c79e0, room_fn_0c7a58
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

uint creature_fn_07e868(void)

{
  undefined4 uval;
  ushort *word_ptr;
  ushort uval_2;
  undefined2 uval_3;
  int arg_eax;
  int val;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  ushort *arg_edx;
  uint uval_4;
  uint uval_5;
  ushort *word_ptr_2;
  byte flag;
  undefined1 uval_6;
  byte bStack_db;
  undefined1 uStack_da;
  char cStack_d9;
  ushort local_d8 [2];
  undefined4 local_d4;
  ushort auStack_d0 [2];
  undefined4 local_cc;
  ushort auStack_c8 [2];
  undefined4 local_c4;
  ushort auStack_c0 [2];
  undefined4 local_bc;
  undefined2 auStack_b8 [2];
  undefined4 local_b4;
  ushort auStack_b0 [2];
  undefined4 local_ac;
  ushort local_a8 [2];
  undefined4 local_a4;
  ushort auStack_a0 [2];
  undefined4 local_9c;
  ushort auStack_98 [2];
  undefined4 local_94;
  ushort auStack_90 [2];
  undefined4 local_8c;
  ushort auStack_88 [4];
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_78;
  ushort *local_70;
  int local_68;
  byte local_28;
  
  flag = 0;
  uval_4 = *(uint *)(arg_eax + 0xd);
  uval_6 = (undefined1)uval_4;
  bStack_db = (byte)(uval_4 >> 8);
  uStack_da = (undefined1)(uval_4 >> 0x10);
  cStack_d9 = (char)(uval_4 >> 0x18);
  local_d8[0] = *(ushort *)(arg_eax + 0x11);
  local_68 = (uval_4 & 0xffff) - (uint)*arg_edx;
  local_78 = (uval_4 >> 0x10) - (uint)arg_edx[1];
  local_bc = *(uint *)(arg_eax + 0xd);
  auStack_b8[0] = *(undefined2 *)(arg_eax + 0x11);
  local_28 = 0;
  local_70 = arg_edx;
  if ((bStack_db == *(byte *)((int)arg_edx + 1)) || (cStack_d9 == *(char *)((int)arg_edx + 3))) {
    local_9c = *(undefined4 *)arg_edx;
    auStack_98[0] = arg_edx[2];
    val = ceiling_process_map_subtile_07dbc0();
    uval_4 = extraout_ECX_11;
    if (val != 0) {
      local_70[2] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val == -1) ||
         (uval_4 = extraout_ECX_12, 0x100 < val - (*(int *)(arg_eax + 0xf) >> 0x10))) {
        val = creature_update_slab_subtile_columns_07df64();
        if (val < 0) {
          uval_4 = 1;
        }
        else {
          uval_4 = 4;
        }
      }
    }
    *(undefined4 *)arg_edx = local_9c;
    arg_edx[(uint)flag * -4 + 2] = auStack_98[(uint)flag * -4];
    return uval_4;
  }
  val = room_fn_0c79e0();
  if (val == 0) {
    val = room_fn_0c7a58();
    word_ptr_2 = local_70;
    if (val == 0) {
      local_a4 = *(undefined4 *)local_70;
      auStack_a0[(uint)flag * -4] = local_70[(uint)flag * -4 + 2];
      val = ceiling_process_map_subtile_07dbc0();
      uval_4 = extraout_ECX_09;
      if (val == 0) {
LAB_0007f140:
        *(undefined4 *)word_ptr_2 = local_a4;
        word_ptr_2[(uint)flag * -4 + 2] = auStack_a0[(uint)flag * -4];
      }
      else {
        local_70[2] = 0xffff;
        val = move_process_map_subtile_0b28e8();
        if ((val != -1) &&
           (uval_4 = extraout_ECX_10, val - (*(int *)(arg_eax + 0xf) >> 0x10) < 0x101))
        goto LAB_0007f140;
        val = creature_update_slab_subtile_columns_07df64();
        if (val < 0) {
          uval_4 = 1;
          goto LAB_0007f140;
        }
        *(undefined4 *)word_ptr_2 = local_a4;
        word_ptr_2[(uint)flag * -4 + 2] = auStack_a0[(uint)flag * -4];
        uval_4 = 4;
      }
      goto joined_r0x0007f153;
    }
    local_ac = CONCAT13(cStack_d9,CONCAT12(uStack_da,CONCAT11(bStack_db,uval_6)));
    local_a8[(uint)flag * -4] = local_d8[(uint)flag * -4];
    uval_2 = (ushort)(uval_4 >> 0x10);
    if (uval_2 < word_ptr_2[1]) {
      uval_2 = (ushort)(byte)(cStack_d9 + 1) << 8;
    }
    else {
      uval_2 = (uval_2 & 0xff00) - 1;
    }
    uval_4 = (uint)uval_2 - (local_bc >> 0x10);
    uval_5 = (int)uval_4 >> 0x1f;
    local_ac = CONCAT22(uval_2,(short)((int)(local_68 * ((uval_4 ^ uval_5) - uval_5)) / local_78) +
                              (short)local_bc);
    local_a8[0] = local_d8[0];
    local_80 = &local_ac;
    local_b4 = local_ac;
    auStack_b0[(uint)flag * -4] = local_a8[(uint)flag * -4];
    val = ceiling_process_map_subtile_07dbc0();
    uval_4 = extraout_ECX_03;
    if (val == 0) {
LAB_0007edfd:
      word_ptr_2 = (ushort *)(local_80 + (uint)flag * -2 + 1);
      *local_80 = local_b4;
      *word_ptr_2 = auStack_b0[(uint)flag * -4];
    }
    else {
      local_a8[0] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val != -1) &&
         (uval_4 = extraout_ECX_04, val - (*(int *)(arg_eax + 0xf) >> 0x10) < 0x101))
      goto LAB_0007edfd;
      val = creature_update_slab_subtile_columns_07df64();
      if (val < 0) {
        uval_4 = 1;
        goto LAB_0007edfd;
      }
      word_ptr_2 = (ushort *)(local_80 + (uint)flag * -2 + 1);
      *local_80 = local_b4;
      *word_ptr_2 = auStack_b0[(uint)flag * -4];
      uval_4 = 4;
    }
    if (uval_4 == 0) {
      *(uint *)(arg_eax + 0xd) = local_ac;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      uval_3 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval_3;
    }
    else if (uval_4 < 2) {
      *(uint *)(arg_eax + 0xd) = local_ac;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      local_28 = 1;
      *(undefined2 *)(arg_eax + 0x11) = 0;
    }
    else if (uval_4 == 4) {
      return 4;
    }
    uval = *(undefined4 *)(arg_eax + 0xd);
    local_d8[(uint)flag * -4] = *(ushort *)(arg_eax + 0x11 + (uint)flag * -8);
    uval_2 = (ushort)uval;
    if (uval_2 < *local_70) {
      uval_2 = (ushort)(byte)((char)((uint)uval >> 8) + 1) << 8;
    }
    else {
      uval_2 = (uval_2 & 0xff00) - 1;
    }
    local_ac = (uint)uval_2;
    local_ac = local_ac - (local_bc & 0xffff);
    uval_4 = (int)local_ac >> 0x1f;
    local_ac = CONCAT22((short)((int)(local_78 * ((local_ac ^ uval_4) - uval_4)) / local_68) +
                        local_bc._2_2_,uval_2);
    local_a8[0] = local_d8[0];
    local_cc = local_ac;
    auStack_c8[(uint)flag * -4] = local_a8[(uint)flag * -4];
    val = ceiling_process_map_subtile_07dbc0();
    uval_4 = extraout_ECX_05;
    if (val == 0) {
LAB_0007ef5c:
      local_a8[(uint)flag * -4] = auStack_c8[(uint)flag * -4];
    }
    else {
      local_a8[0] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val != -1) &&
         (uval_4 = extraout_ECX_06, val - (*(int *)(arg_eax + 0xf) >> 0x10) < 0x101))
      goto LAB_0007ef5c;
      val = creature_update_slab_subtile_columns_07df64();
      if (val < 0) {
        uval_4 = 1;
        goto LAB_0007ef5c;
      }
      local_a8[(uint)flag * -4] = auStack_c8[(uint)flag * -4];
      uval_4 = 4;
    }
    if (uval_4 == 0) {
      *(undefined4 *)(arg_eax + 0xd) = local_cc;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      local_ac = local_cc;
      uval_3 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval_3;
LAB_0007efb8:
      word_ptr_2 = local_70;
      uval = *(undefined4 *)(arg_eax + 0xd);
      local_d8[(uint)flag * -4] = *(ushort *)(arg_eax + 0x11 + (uint)flag * -8);
      word_ptr = local_70;
      local_ac = CONCAT22(local_70[1],*word_ptr_2);
      local_a8[0] = local_d8[0];
      local_8c = *(undefined4 *)local_70;
      auStack_88[(uint)flag * -4] = local_70[(uint)flag * -4 + 2];
      val = ceiling_process_map_subtile_07dbc0((char)uval);
      uval_4 = extraout_ECX_07;
      if (val != 0) {
        local_70[2] = 0xffff;
        val = move_process_map_subtile_0b28e8();
        if ((val == -1) ||
           (uval_4 = extraout_ECX_08, 0x100 < val - (*(int *)(arg_eax + 0xf) >> 0x10))) {
          val = creature_update_slab_subtile_columns_07df64();
          if (-1 < val) {
            *(undefined4 *)word_ptr = local_8c;
            word_ptr[(uint)flag * -4 + 2] = auStack_88[(uint)flag * -4];
            uval_4 = 4;
            goto joined_r0x0007f153;
          }
          uval_4 = 1;
        }
      }
      *(undefined4 *)word_ptr = local_8c;
      word_ptr[(uint)flag * -4 + 2] = auStack_88[(uint)flag * -4];
      goto joined_r0x0007f153;
    }
    if (uval_4 < 2) {
      *(undefined4 *)(arg_eax + 0xd) = local_cc;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      local_28 = 1;
      *(undefined2 *)(arg_eax + 0x11) = 0;
      goto LAB_0007efb8;
    }
    if (uval_4 != 4) goto LAB_0007efb8;
LAB_0007eb87:
    uval_4 = 4;
  }
  else {
    if (CONCAT11(bStack_db,uval_6) < *local_70) {
      uval_2 = (ushort)(byte)(bStack_db + 1) << 8;
    }
    else {
      uval_2 = (ushort)bStack_db * 0x100 - 1;
    }
    local_ac = (uint)uval_2;
    local_ac = local_ac - (local_bc & 0xffff);
    uval_4 = (int)local_ac >> 0x1f;
    local_ac = CONCAT22((short)((int)(local_78 * ((local_ac ^ uval_4) - uval_4)) / local_68) +
                        local_bc._2_2_,uval_2);
    uval_4 = 0;
    local_a8[0] = local_d8[0];
    local_7c = &local_ac;
    local_d4 = local_ac;
    auStack_d0[(uint)flag * -4] = local_a8[(uint)flag * -4];
    val = ceiling_process_map_subtile_07dbc0();
    if (val == 0) {
LAB_0007e9f9:
      word_ptr_2 = (ushort *)(local_7c + (uint)flag * -2 + 1);
      *local_7c = local_d4;
      *word_ptr_2 = auStack_d0[(uint)flag * -4];
    }
    else {
      local_a8[0] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val != -1) && (val - (*(int *)(arg_eax + 0xf) >> 0x10) < 0x101)) goto LAB_0007e9f9;
      val = creature_update_slab_subtile_columns_07df64();
      if (val < 0) {
        uval_4 = 1;
        goto LAB_0007e9f9;
      }
      word_ptr_2 = (ushort *)(local_7c + (uint)flag * -2 + 1);
      *local_7c = local_d4;
      *word_ptr_2 = auStack_d0[(uint)flag * -4];
      uval_4 = 4;
    }
    if (uval_4 == 0) {
      *(uint *)(arg_eax + 0xd) = local_ac;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      uval_3 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval_3;
    }
    else if (uval_4 < 2) {
      *(uint *)(arg_eax + 0xd) = local_ac;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      *(undefined2 *)(arg_eax + 0x11) = 0;
      local_28 = 1;
      *(uint *)(arg_eax + 0xd) = local_bc;
      *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) = auStack_b8[(uint)flag * -4];
    }
    else if (uval_4 == 4) {
      return 4;
    }
    uval = *(undefined4 *)(arg_eax + 0xd);
    local_d8[(uint)flag * -4] = *(ushort *)(arg_eax + 0x11 + (uint)flag * -8);
    uval_2 = (ushort)((uint)uval >> 0x10);
    if (uval_2 < local_70[1]) {
      uval_2 = (ushort)(byte)((char)((uint)uval >> 0x18) + 1) << 8;
    }
    else {
      uval_2 = (uval_2 & 0xff00) - 1;
    }
    uval_4 = (uint)uval_2 - (local_bc >> 0x10);
    uval_5 = (int)uval_4 >> 0x1f;
    local_ac = CONCAT22(uval_2,(short)((int)(local_68 * ((uval_4 ^ uval_5) - uval_5)) / local_78) +
                              (short)local_bc);
    local_a8[0] = local_d8[0];
    local_c4 = local_ac;
    auStack_c0[(uint)flag * -4] = local_a8[(uint)flag * -4];
    val = ceiling_process_map_subtile_07dbc0((char)uval);
    uval_4 = extraout_ECX;
    if (val == 0) {
LAB_0007eb6b:
      local_a8[(uint)flag * -4] = auStack_c0[(uint)flag * -4];
    }
    else {
      local_a8[0] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val != -1) &&
         (uval_4 = extraout_ECX_00, val - (*(int *)(arg_eax + 0xf) >> 0x10) < 0x101))
      goto LAB_0007eb6b;
      val = creature_update_slab_subtile_columns_07df64();
      if (val < 0) {
        uval_4 = 1;
        goto LAB_0007eb6b;
      }
      local_a8[(uint)flag * -4] = auStack_c0[(uint)flag * -4];
      uval_4 = 4;
    }
    if (uval_4 == 0) {
      *(undefined4 *)(arg_eax + 0xd) = local_c4;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      local_ac = local_c4;
      uval_3 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval_3;
    }
    else if (uval_4 < 2) {
      *(undefined4 *)(arg_eax + 0xd) = local_c4;
      *(ushort *)(arg_eax + 0x11 + (uint)flag * -8) = local_a8[(uint)flag * -4];
      local_28 = 1;
      *(undefined2 *)(arg_eax + 0x11) = 0;
    }
    else if (uval_4 == 4) goto LAB_0007eb87;
    word_ptr_2 = local_70;
    uval = *(undefined4 *)(arg_eax + 0xd);
    local_d8[(uint)flag * -4] = *(ushort *)(arg_eax + 0x11 + (uint)flag * -8);
    local_ac = CONCAT22(local_70[1],*word_ptr_2);
    local_a8[0] = local_d8[0];
    local_94 = local_ac;
    auStack_90[(uint)flag * -4] = local_a8[(uint)flag * -4];
    val = ceiling_process_map_subtile_07dbc0((char)uval);
    uval_4 = extraout_ECX_01;
    if (val != 0) {
      local_a8[0] = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val == -1) ||
         (uval_4 = extraout_ECX_02, 0x100 < val - (*(int *)(arg_eax + 0xf) >> 0x10))) {
        val = creature_update_slab_subtile_columns_07df64();
        if (-1 < val) {
          local_a8[(uint)flag * -4] = auStack_90[(uint)flag * -4];
          uval_4 = 4;
          goto joined_r0x0007f153;
        }
        uval_4 = 1;
      }
    }
    local_a8[(uint)flag * -4] = auStack_90[(uint)flag * -4];
joined_r0x0007f153:
    if (uval_4 != 0) {
      if (uval_4 < 2) {
        local_28 = 1;
      }
      else if (uval_4 == 4) goto LAB_0007eb87;
    }
    uval_4 = (uint)local_28;
  }
  *(uint *)(arg_eax + 0xd) = local_bc;
  *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) = auStack_b8[(uint)flag * -4];
  return uval_4;
}

/******************************************************************************
 * Function : creature_fn_07f228 (Original VA: 0x7f228, Ghidra: FUN_0007f228)
 * Prototype: undefined4 creature_fn_07f228(void);
 * Address  : 0x7f228 (Size: 103 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f228
 * Callers  : 0 -> 
 * Callees  : 3 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, move_process_map_subtile_0b3040
 ******************************************************************************/
undefined4 creature_fn_07f228(void)

{
  undefined4 uval;
  int val;
  undefined4 uval_2;
  int extraout_ECX;
  undefined4 *arg_edx;
  int val_2;
  byte flag;
  undefined2 auStack_14 [2];
  
  flag = 0;
  uval = *arg_edx;
  auStack_14[0] = *(undefined2 *)(arg_edx + 1);
  val = ceiling_process_map_subtile_07dbc0();
  if (val == 0) {
LAB_0007f27e:
    uval_2 = 0;
  }
  else {
    val_2 = *(int *)(extraout_ECX + 0xf) >> 0x10;
    val = move_process_map_subtile_0b3040();
    if (val_2 <= val) {
      *(undefined2 *)(arg_edx + 1) = 0xffff;
      val = move_process_map_subtile_0b28e8();
      if ((val != -1) && (val - val_2 < 0x101)) goto LAB_0007f27e;
    }
    uval_2 = 1;
  }
  *arg_edx = uval;
  *(undefined2 *)(arg_edx + (uint)flag * -2 + 1) = auStack_14[(uint)flag * -4];
  return uval_2;
}

/******************************************************************************
 * Function : creature_fn_07f290 (Original VA: 0x7f290, Ghidra: FUN_0007f290)
 * Prototype: undefined4 creature_fn_07f290(void);
 * Address  : 0x7f290 (Size: 128 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f290
 * Callers  : 0 -> 
 * Callees  : 3 -> ceiling_process_map_subtile_07dbc0, creature_update_slab_subtile_columns_07df64, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 creature_fn_07f290(void)

{
  undefined4 uval;
  int val;
  undefined4 uval_2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *arg_edx;
  byte flag;
  undefined2 auStack_18 [2];
  int local_14;
  
  flag = 0;
  uval = *arg_edx;
  auStack_18[0] = *(undefined2 *)(arg_edx + 1);
  val = ceiling_process_map_subtile_07dbc0();
  uval_2 = extraout_ECX;
  if (val != 0) {
    *(undefined2 *)(arg_edx + 1) = 0xffff;
    val = move_process_map_subtile_0b28e8();
    if ((val == -1) ||
       (uval_2 = extraout_ECX_00, 0x100 < val - (*(int *)(local_14 + 0xf) >> 0x10))) {
      val = creature_update_slab_subtile_columns_07df64();
      if (val < 0) {
        uval_2 = 1;
      }
      else {
        uval_2 = 4;
      }
    }
  }
  *arg_edx = uval;
  *(undefined2 *)(arg_edx + (uint)flag * -2 + 1) = auStack_18[(uint)flag * -4];
  return uval_2;
}

/******************************************************************************
 * Function : creature_fn_07f310 (Original VA: 0x7f310, Ghidra: FUN_0007f310)
 * Prototype: int creature_fn_07f310(void);
 * Address  : 0x7f310 (Size: 893 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f310
 * Callers  : 1 -> routes_ve_been_pushing_very_0d4188
 * Callees  : 3 -> creature_update_slab_subtile_columns_07df64, room_fn_0c79e0, room_fn_0c7a58
 ******************************************************************************/
int creature_fn_07f310(void)

{
  undefined4 uval;
  ushort uval_2;
  int arg_eax;
  int val;
  int val_2;
  uint *arg_edx;
  int val_3;
  uint uval_3;
  uint uval_4;
  ushort *arg_ebx;
  byte flag;
  short local_3c [2];
  undefined4 local_38;
  undefined2 auStack_34 [2];
  undefined1 local_30;
  byte bStack_2f;
  undefined1 uStack_2e;
  byte bStack_2d;
  short local_2c [2];
  int local_1c;
  
  flag = 0;
  uval_3 = *arg_edx;
  local_30 = (undefined1)uval_3;
  bStack_2f = (byte)(uval_3 >> 8);
  uStack_2e = (undefined1)(uval_3 >> 0x10);
  bStack_2d = (byte)(uval_3 >> 0x18);
  local_2c[0] = (short)arg_edx[1];
  val_3 = (uval_3 & 0xffff) - (uint)*arg_ebx;
  val = (uval_3 >> 0x10) - (uint)arg_ebx[1];
  local_38 = *(uint *)(arg_eax + 0xd);
  auStack_34[0] = *(undefined2 *)(arg_eax + 0x11);
  local_1c = 0;
  if ((bStack_2f == *(byte *)((int)arg_ebx + 1)) || (bStack_2d == *(byte *)((int)arg_ebx + 3)))
  {
    val_2 = creature_update_slab_subtile_columns_07df64();
joined_r0x0007f655:
    if (val_2 < 0) goto LAB_0007f676;
  }
  else {
    val_2 = room_fn_0c79e0();
    if (val_2 == 0) {
      val_2 = room_fn_0c7a58();
      if (val_2 == 0) {
        val_2 = creature_update_slab_subtile_columns_07df64();
        goto joined_r0x0007f655;
      }
      local_3c[(uint)flag * -4] = local_2c[(uint)flag * -4];
      if (CONCAT11(bStack_2d,uStack_2e) < arg_ebx[1]) {
        uval_2 = (ushort)(byte)(bStack_2d + 1) << 8;
      }
      else {
        uval_2 = (ushort)bStack_2d * 0x100 - 1;
      }
      uval_3 = (uint)uval_2 - (local_38 >> 0x10);
      uval_4 = (int)uval_3 >> 0x1f;
      local_3c[0] = local_2c[0];
      val_2 = creature_update_slab_subtile_columns_07df64(CONCAT22(uval_2,(short)((int)(val_3 * ((uval_3 ^ uval_4) - uval_4)) / val)
                                          + (short)local_38));
      if (val_2 < 0) {
        uval = *(undefined4 *)(arg_eax + 0xd);
        local_30 = (undefined1)uval;
        bStack_2f = (byte)((uint)uval >> 8);
        uStack_2e = (undefined1)((uint)uval >> 0x10);
        bStack_2d = (byte)((uint)uval >> 0x18);
        local_2c[(uint)flag * -4] = *(short *)(arg_eax + 0x11 + (uint)flag * -8);
        if ((ushort)uval < *arg_ebx) {
          uval_2 = (ushort)(byte)(bStack_2f + 1) << 8;
        }
        else {
          uval_2 = ((ushort)uval & 0xff00) - 1;
        }
        uval_3 = (uint)uval_2 - (local_38 & 0xffff);
        uval_4 = (int)uval_3 >> 0x1f;
        local_3c[0] = local_2c[0];
        val_2 = creature_update_slab_subtile_columns_07df64(CONCAT22((short)((int)(val * ((uval_3 ^ uval_4) - uval_4)) / val_3) +
                                      local_38._2_2_,uval_2));
        if (val_2 < 0) {
          uval = *(undefined4 *)(arg_eax + 0xd);
          local_30 = (undefined1)uval;
          bStack_2f = (byte)((uint)uval >> 8);
          uStack_2e = (undefined1)((uint)uval >> 0x10);
          bStack_2d = (byte)((uint)uval >> 0x18);
          local_2c[(uint)flag * -4] = *(short *)(arg_eax + 0x11 + (uint)flag * -8);
          local_3c[0] = local_2c[0];
          val_2 = creature_update_slab_subtile_columns_07df64(*(undefined4 *)arg_ebx);
          goto joined_r0x0007f655;
        }
      }
    }
    else {
      if (CONCAT11(bStack_2f,local_30) < *arg_ebx) {
        uval_2 = (ushort)(byte)(bStack_2f + 1) << 8;
      }
      else {
        uval_2 = (ushort)bStack_2f * 0x100 - 1;
      }
      uval_3 = (uint)uval_2 - (local_38 & 0xffff);
      uval_4 = (int)uval_3 >> 0x1f;
      local_3c[0] = local_2c[0];
      val_2 = creature_update_slab_subtile_columns_07df64(CONCAT22((short)((int)(val * ((uval_3 ^ uval_4) - uval_4)) / val_3) +
                                    local_38._2_2_,uval_2));
      if (val_2 < 0) {
        uval = *(undefined4 *)(arg_eax + 0xd);
        local_30 = (undefined1)uval;
        bStack_2f = (byte)((uint)uval >> 8);
        uStack_2e = (undefined1)((uint)uval >> 0x10);
        bStack_2d = (byte)((uint)uval >> 0x18);
        local_2c[(uint)flag * -4] = *(short *)(arg_eax + 0x11 + (uint)flag * -8);
        uval_2 = (ushort)((uint)uval >> 0x10);
        if (uval_2 < arg_ebx[1]) {
          uval_2 = (ushort)(byte)(bStack_2d + 1) << 8;
        }
        else {
          uval_2 = (uval_2 & 0xff00) - 1;
        }
        uval_3 = (uint)uval_2 - (local_38 >> 0x10);
        uval_4 = (int)uval_3 >> 0x1f;
        local_3c[0] = local_2c[0];
        val_2 = creature_update_slab_subtile_columns_07df64(CONCAT22(uval_2,(short)((int)(val_3 * ((uval_3 ^ uval_4) - uval_4)) / val
                                                   ) + (short)local_38));
        if (val_2 < 0) {
          uval = *(undefined4 *)(arg_eax + 0xd);
          local_30 = (undefined1)uval;
          bStack_2f = (byte)((uint)uval >> 8);
          uStack_2e = (undefined1)((uint)uval >> 0x10);
          bStack_2d = (byte)((uint)uval >> 0x18);
          local_2c[(uint)flag * -4] = *(short *)(arg_eax + 0x11 + (uint)flag * -8);
          local_3c[0] = local_2c[0];
          val_2 = creature_update_slab_subtile_columns_07df64(*(undefined4 *)arg_ebx);
          goto joined_r0x0007f655;
        }
      }
    }
  }
  local_1c = val_2;
LAB_0007f676:
  *(uint *)(arg_eax + 0xd) = local_38;
  *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8) = auStack_34[(uint)flag * -4];
  return local_1c;
}

/******************************************************************************
 * Function : creature_process_map_subtile_07f690 (Original VA: 0x7f690, Ghidra: FUN_0007f690)
 * Prototype: int creature_process_map_subtile_07f690(code *param_1);
 * Address  : 0x7f690 (Size: 159 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> creature_fn_07f730, creature_fn_07f804, creature_fn_07f8e0
 * Callees  : 1 -> ceiling_fn_07dae0
 ******************************************************************************/
int creature_process_map_subtile_07f690(code *param_1)

{
  int arg_eax;
  int val;
  byte arg_cl;
  uint arg_ebx;
  int thing_ptr;
  
  thing_ptr = (&g_thing_ptrs)
          [(*(uint *)((int)&g_map_subtiles + ((arg_ebx & 0xff) + (uint)arg_cl * 0x100) * 5 + 1) &
           0x3fffff) >> 0xb];
  if (thing_ptr != g_thing_ptrs) {
    do {
      if (((thing_ptr != arg_eax) && (val = (*param_1)(), val != 0)) &&
         (val = ceiling_fn_07dae0(), val != 0)) {
        return thing_ptr;
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
    } while (thing_ptr != g_thing_ptrs);
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_07f730 (Original VA: 0x7f730, Ghidra: FUN_0007f730)
 * Prototype: int creature_fn_07f730(void);
 * Address  : 0x7f730 (Size: 209 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f730
 * Callers  : 1 -> move_shot_has_hit_thing_0b41d8
 * Callees  : 1 -> creature_process_map_subtile_07f690
 ******************************************************************************/
int creature_fn_07f730(void)

{
  int thing;
  int val;
  ushort *arg_edx;
  uint *word_ptr;
  uint uval;
  uint local_24;
  int local_20;
  int local_18;
  
  word_ptr = &local_24;
  local_20 = (int)(*arg_edx - 0x180) >> 8;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_18 = (int)(arg_edx[1] - 0x180) >> 8;
  if (local_18 < 0) {
    local_18 = 0;
  }
  uval = (int)(*arg_edx + 0x180) >> 8;
  if (0xff < uval) {
    uval = 0xff;
  }
  local_24 = (int)(arg_edx[1] + 0x180) >> 8;
  if (0xff < local_24) {
    local_24 = 0xff;
  }
  if (local_18 <= (int)local_24) {
    do {
      val = word_ptr[1];
      word_ptr[2] = val;
      while (val <= (int)uval) {
        word_ptr[-1] = (uint)*(byte *)(thing + 0x1a);
        word_ptr[-2] = (uint)*(byte *)(thing + 0x1f); /* thing->class_id */
        word_ptr[-3] = (uint)creature_fn_07fa3c;
        word_ptr[-4] = 0x7f7f0;
        val = creature_process_map_subtile_07f690();
        if (val != 0) {
          return val;
        }
        val = word_ptr[-1] + 1;
        word_ptr[-1] = val;
        word_ptr = word_ptr + -3;
      }
      val = word_ptr[3];
      word_ptr[3] = val + 1;
    } while (val + 1 <= (int)*word_ptr);
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_07f804 (Original VA: 0x7f804, Ghidra: FUN_0007f804)
 * Prototype: int creature_fn_07f804(void);
 * Address  : 0x7f804 (Size: 219 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f804
 * Callers  : 2 -> move_update_creature_control_0b3dac, move_shot_has_hit_thing_0b41d8
 * Callees  : 1 -> creature_process_map_subtile_07f690
 ******************************************************************************/
int creature_fn_07f804(void)

{
  ushort *arg_edx;
  int val;
  uint uval;
  uint *word_ptr;
  uint local_24;
  int local_20;
  
  word_ptr = &local_24;
  local_20 = (int)(*arg_edx - 0x180) >> 8;
  if (local_20 < 0) {
    local_20 = 0;
  }
  val = (int)(arg_edx[1] - 0x180) >> 8;
  if (val < 0) {
    val = 0;
  }
  uval = (int)(*arg_edx + 0x180) >> 8;
  if (0xff < uval) {
    uval = 0xff;
  }
  local_24 = (int)(arg_edx[1] + 0x180) >> 8;
  if (0xff < local_24) {
    local_24 = 0xff;
  }
  if (val <= (int)local_24) {
    do {
      val = word_ptr[1];
      word_ptr[5] = val;
      while (val <= (int)uval) {
        word_ptr[-1] = word_ptr[10];
        word_ptr[-2] = word_ptr[3];
        word_ptr[-3] = word_ptr[2];
        word_ptr[-4] = 0x7f8ce;
        val = creature_process_map_subtile_07f690();
        if (val != 0) {
          return val;
        }
        val = word_ptr[2] + 1;
        word_ptr[2] = val;
        word_ptr = word_ptr + -3;
      }
      val = word_ptr[4];
      word_ptr[4] = val + 1;
    } while (val + 1 <= (int)*word_ptr);
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_07f8e0 (Original VA: 0x7f8e0, Ghidra: FUN_0007f8e0)
 * Prototype: int creature_fn_07f8e0(void);
 * Address  : 0x7f8e0 (Size: 257 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f8e0
 * Callers  : 1 -> combold_fn_0171cc
 * Callees  : 1 -> creature_process_map_subtile_07f690
 ******************************************************************************/
int creature_fn_07f8e0(void)

{
  int val;
  int val_2;
  ushort *arg_edx;
  int arg_ebx;
  uint *word_ptr;
  uint local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  word_ptr = &local_24;
  local_1c = (int)((uint)*arg_edx - arg_ebx / 2) >> 8;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_14 = (int)((uint)arg_edx[1] - arg_ebx / 2) >> 8;
  if (local_14 < 0) {
    local_14 = 0;
  }
  val = (int)(arg_ebx / 2 + (uint)*arg_edx) >> 8;
  if (0xff < val) {
    val = 0xff;
  }
  local_24 = (uint)arg_edx[1];
  local_20 = (int)(arg_ebx / 2 + (uint)arg_edx[1]) >> 8;
  if (0xff < local_20) {
    local_20 = 0xff;
  }
  if (local_14 <= local_20) {
    do {
      val_2 = *(int *)((int)word_ptr + 8);
      *(int *)((int)word_ptr + 0x14) = val_2;
      while (val_2 <= val) {
        *(undefined4 *)((int)word_ptr + -4) = *(undefined4 *)((int)word_ptr + 0x2c);
        *(undefined4 *)((int)word_ptr + -8) = *(undefined4 *)((int)word_ptr + 0x28);
        *(undefined4 *)((int)word_ptr + -0xc) = *(undefined4 *)((int)word_ptr + 0xc);
        *(undefined4 *)((int)word_ptr + -0x10) = 0x7f9d0;
        val_2 = creature_process_map_subtile_07f690();
        if (val_2 != 0) {
          return val_2;
        }
        val_2 = *(int *)((int)word_ptr + 8) + 1;
        *(int *)((int)word_ptr + 8) = val_2;
        word_ptr = (uint *)((int)word_ptr + -0xc);
      }
      val_2 = *(int *)((int)word_ptr + 0x10);
      *(int *)((int)word_ptr + 0x10) = val_2 + 1;
    } while (val_2 + 1 <= *(int *)((int)word_ptr + 4));
  }
  return 0;
}

/******************************************************************************
 * Function : creature_handle_creature_thing_07f9e4 (Original VA: 0x7f9e4, Ghidra: FUN_0007f9e4)
 * Prototype: longlong creature_handle_creature_thing_07f9e4(void);
 * Address  : 0x7f9e4 (Size: 5 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 5 (Creature) and processes state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong creature_handle_creature_thing_07f9e4(void)

{
  char ch;
  int val;
  int thing;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x05') && (*(char *)(thing + 0x1a) != '\x1f')) { /* thing->class_id */
LAB_0006d3f4:
    return CONCAT44(arg_edx,1);
  }
  if (*(char *)(thing + 0x1f) == '\x01') { /* thing->class_id */
    ch = *(char *)(thing + 0x1a);
    if ((ch == '\x05') || (ch == '\t')) goto LAB_0006d3f4;
    if (ch == '\n') {
      val = creature_update_player_view_state_085954();
      if (val == 0) goto LAB_0006d3f4;
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : creature_update_creature_control_07f9ec (Original VA: 0x7f9ec, Ghidra: FUN_0007f9ec)
 * Prototype: longlong creature_update_creature_control_07f9ec(void);
 * Address  : 0x7f9ec (Size: 5 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong creature_update_creature_control_07f9ec(void)

{
  int thing;
  uint arg_edx;
  
  if (((*(char *)(thing + 0x1f) == '\x05') && (*(char *)(thing + 0x1a) != '\x1f')) && /* thing->class_id */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 4) == 0)) { /* thing->ccontrol_idx */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : creature_fn_07f9f4 (Original VA: 0x7f9f4, Ghidra: FUN_0007f9f4)
 * Prototype: void creature_fn_07f9f4(void);
 * Address  : 0x7f9f4 (Size: 14 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07f9f4
 * Callers  : 0 -> 
 * Callees  : 1 -> shot_update_creature_control_06d334
 ******************************************************************************/
void creature_fn_07f9f4(void)

{
  shot_update_creature_control_06d334();
  return;
}

/******************************************************************************
 * Function : creature_fn_07fa04 (Original VA: 0x7fa04, Ghidra: FUN_0007fa04)
 * Prototype: void creature_fn_07fa04(void);
 * Address  : 0x7fa04 (Size: 14 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07fa04
 * Callers  : 0 -> 
 * Callees  : 1 -> shot_update_creature_control_06d39c
 ******************************************************************************/
void creature_fn_07fa04(void)

{
  shot_update_creature_control_06d39c();
  return;
}

/******************************************************************************
 * Function : creature_handle_object_thing_07fa14 (Original VA: 0x7fa14, Ghidra: FUN_0007fa14)
 * Prototype: undefined4 creature_handle_object_thing_07fa14(void);
 * Address  : 0x7fa14 (Size: 37 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 creature_handle_object_thing_07fa14(void)

{
  int thing;
  int arg_edx;
  
  if (((*(char *)(thing + 0x1f) == '\x01') && (*(char *)(thing + 0x1a) == '\x05')) && /* thing->class_id */
     (*(char *)(thing + 6) != *(char *)(arg_edx + 6))) { /* thing->owner */
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_07fa3c (Original VA: 0x7fa3c, Ghidra: FUN_0007fa3c)
 * Prototype: undefined4 creature_fn_07fa3c(void);
 * Address  : 0x7fa3c (Size: 89 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x07fa3c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 creature_fn_07fa3c(void)

{
  int thing;
  uint arg_ecx;
  uint arg_ebx;
  
  if (((int)arg_ecx < 0) && ((int)arg_ebx < 0)) {
    return 1;
  }
  if ((int)arg_ecx < 0) {
    if (arg_ebx == *(byte *)(thing + 0x1f)) { /* thing->class_id */
      return 1;
    }
  }
  else if ((int)arg_ebx < 0) {
    if (arg_ecx == *(byte *)(thing + 0x1a)) {
      return 1;
    }
  }
  else if ((arg_ecx == *(byte *)(thing + 0x1a)) &&
          (arg_ebx == CONCAT31((int3)(arg_ecx >> 8),*(undefined1 *)(thing + 0x1f)))) { /* thing->class_id */
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_create_dead_thing_07fac8 (Original VA: 0x7fac8, Ghidra: FUN_0007fac8)
 * Prototype: void creature_create_dead_thing_07fac8(void);
 * Address  : 0x7fac8 (Size: 1960 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 267, 391, 426
 * Purpose  : String 'Cannot create dead thing'
 * Callers  : 1 -> creature_how_hero_have_tend_08608c
 * Callees  : 12 -> anger_fn_010ad6, effect_allocate_light_effect_024998, gen2_fn_037eab, inits_allocate_light_object_043f07, sound_fn_06e538, structs_update_creature_control_072af4, creature_create_dead_thing_08057c, creature_create_dead_thing_08063c ...
 ******************************************************************************/
void creature_create_dead_thing_07fac8(void)

{
  undefined4 uval;
  byte flag;
  undefined2 uval_2;
  ushort uval_3;
  uint uval_4;
  uint uval_5;
  char ch;
  int thing;
  uint cctrl_ptr;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  int thing_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  char arg_dl;
  int thing_ptr_2;
  byte flag_2;
  short asStack_88 [4];
  short local_80;
  undefined4 local_7c;
  undefined2 auStack_78 [2];
  undefined4 local_74;
  undefined2 auStack_70 [2];
  undefined4 local_6c;
  undefined2 auStack_68 [2];
  undefined4 local_64;
  undefined2 auStack_60 [4];
  short local_58;
  undefined4 local_54;
  undefined2 auStack_50 [4];
  short local_48;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  short local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  char local_18;
  
  flag_2 = 0;
  local_20 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_18 = arg_dl;
  anger_fn_010ad6();
  thing_ptr_2 = *(int *)(thing + 0x13); /* thing->anim_sprite */
  while ((thing_ptr_2 != 0 && (local_24 = inits_allocate_light_object_043f07(), local_24 != 0))) {
    cctrl_ptr = g_action_random_seed * 0x24a1 + 0x24df;
    uval_4 = cctrl_ptr >> 0xd;
    local_34 = uval_4 & 0x7ff;
    cctrl_ptr = (uval_4 | cctrl_ptr * 0x80000) * 0x24a1 + 0x24df;
    uval_4 = cctrl_ptr >> 0xd;
    cctrl_ptr = (uval_4 | cctrl_ptr * 0x80000) * 0x24a1 + 0x24df;
    uval_5 = cctrl_ptr >> 0xd;
    g_action_random_seed = uval_5 | cctrl_ptr * 0x80000;
    local_30 = (uval_5 & 0x3f) + 0x60;
    uval_4 = uval_4 & 0x7f;
    thing_ptr = (&g_slab_attr_table)[local_34] * uval_4;
    local_2c = thing_ptr >> 0x10;
    asStack_88[2] = (short)((uint)thing_ptr >> 0x10);
    asStack_88[3] = (short)((uint)-((int)(uval_4 * (int)(&PTR_LAB_00192fe0)[local_34]) >> 8) >> 8);
    local_80 = (short)local_30;
    *(short *)(local_24 + 0x32) = *(short *)(local_24 + 0x32) + asStack_88[2];
    *(short *)(local_24 + 0x34) = *(short *)(local_24 + 0x34) + asStack_88[3];
    *(short *)(local_24 + 0x36) = *(short *)(local_24 + 0x36) + local_80;
    *(byte *)(local_24 + 1) = *(byte *)(local_24 + 1) | 4;
    thing_ptr = thing_ptr_2;
    if (399 < thing_ptr_2) {
      thing_ptr = 400;
    }
    *(int *)(local_24 + 0x13) = thing_ptr;
    thing_ptr_2 = thing_ptr_2 - thing_ptr;
  }
  thing_ptr_2 = (&g_thing_ptrs)[g_bss_002e6ebe];
  if ((&g_thing_ptrs)[g_bss_002e6ebe] != g_thing_ptrs) {
    do {
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 0x67)];
      if (*(short *)(thing_ptr_2 + 0x1d) == *(short *)(thing + 0x1b)) { /* thing->index_or_angle */
        *(undefined2 *)(thing_ptr_2 + 0x1d) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
      }
      thing_ptr_2 = thing_ptr;
    } while (thing_ptr != g_thing_ptrs);
  }
  if (local_18 == '\0') {
    thing_ptr_2 = (uint)*(byte *)(thing + 0x1a) * 0xe6;
    if ((((&g_bss_002e91e4)[thing_ptr_2] != '\0') &&
        (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) != 0)) && /* thing->ccontrol_idx */
       (cctrl_ptr = (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23), /* thing->ccontrol_idx */
       (int)((byte)(&g_bss_002e91e4)[thing_ptr_2] - 1) <= (int)cctrl_ptr)) {
      if (cctrl_ptr != 0) {
        creature_update_creature_control_082204();
      }
      *(undefined2 *)(thing + 0x5e) = *(undefined2 *)(local_20 + 0xc6);
      effect_allocate_light_effect_024998();
      move_fn_0b3b10();
      effect_allocate_light_effect_024998();
      return;
    }
    if (g_bss_002ee9b9 == 3) {
      ch = (&g_bss_002e91e7)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
    }
    else {
      flag = *(byte *)(thing + 0x1a);
      if (((&g_bss_002e91e7)[(uint)flag * 0xe6] == '\0') || ((flag != 0 && (flag < 0xe)))) {
        ch = '\0';
      }
      else {
        ch = '\x01';
      }
    }
    if (ch == '\0') {
      if ((*(byte *)(local_20 + 0xab) & 2) != 0) {
        if ((g_bss_0019d0bd & 8) != 0) {
          gen2_fn_037eab();
        }
switchD_000800a5_caseD_5:
        creature_create_dead_thing_08063c();
        return;
      }
      if ((g_bss_0019d0bd & 8) != 0) {
        gen2_fn_037eab();
      }
      flag = *(byte *)(local_20 + 0x1d3);
      if ((1 < flag) && ((flag < 3 || (flag == 0x18)))) {
switchD_0007fde2_caseD_2:
        creature_create_dead_thing_08057c();
        return;
      }
      switch((&g_data_0018b70a)[(uint)*(byte *)(thing + 0x1a) * 0x10]) {
      case 1:
        uval_2 = *(undefined2 *)(thing + 0x52); /* thing->health */
        uval = *(undefined4 *)(thing + 0x2c);
        asStack_88[(uint)flag_2 * -4] = *(short *)(thing + 0x30 + (uint)flag_2 * -8);
        thing_ptr_2 = creature_could_create_dead_thing_0808b8();
        if (thing_ptr_2 != 0) {
          *(undefined2 *)(thing_ptr_2 + 0x52) = uval_2; /* thing->health */
          *(undefined4 *)(thing_ptr_2 + 0x2c) = uval;
          *(short *)(thing_ptr_2 + 0x30 + (uint)flag_2 * -8) = asStack_88[(uint)flag_2 * -4];
          return;
        }
        goto LAB_0007fe21;
      case 2:
        goto switchD_0007fde2_caseD_2;
      case 3:
        uval_3 = *(ushort *)(thing + 0x52); /* thing->health */
        local_6c = *(undefined4 *)(thing + 0x2c);
        auStack_68[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x30 + (uint)flag_2 * -8);
        local_28 = (uint)uval_3;
        for (thing_ptr_2 = *(int *)(thing + 0xf) >> 0x10; /* thing->mappos.val_y */
            thing_ptr_2 <= (int)((uint)*(ushort *)(thing + 0x58) + (*(int *)(thing + 0xf) >> 0x10)); /* thing->mappos.val_y */
            thing_ptr_2 = thing_ptr_2 + 0x40) {
          local_3c = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
          local_3a = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
          local_38 = (short)thing_ptr_2;
          effect_allocate_light_effect_024998();
          thing = extraout_ECX_00;
        }
        local_3c = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
        local_3a = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
        local_38 = *(ushort *)(thing + 0x58) / 2 +
                   (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10); /* thing->mappos.val_y */
        effect_allocate_light_effect_024998();
        thing_ptr_2 = creature_could_create_dead_thing_0808b8();
        if (thing_ptr_2 != 0) {
          *(short *)(thing_ptr_2 + 0x52) = (short)local_28; /* thing->health */
          *(undefined4 *)(thing_ptr_2 + 0x2c) = local_6c;
          *(undefined2 *)(thing_ptr_2 + 0x30 + (uint)flag_2 * -8) = auStack_68[(uint)flag_2 * -4];
          sound_fn_06e538(3,0,4,0x100);
          return;
        }
        goto LAB_0007ff35;
      case 4:
        local_7c = *(undefined4 *)(thing + 0x2c);
        auStack_78[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x30 + (uint)flag_2 * -8);
        local_44 = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
        local_42 = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
        local_40 = *(ushort *)(thing + 0x58) / 2 +
                   (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10); /* thing->mappos.val_y */
        effect_allocate_light_effect_024998();
        thing_ptr_2 = creature_could_create_dead_thing_0808b8();
        if (thing_ptr_2 != 0) {
          *(undefined2 *)(thing_ptr_2 + 0x52) = extraout_CX_00; /* thing->health */
          *(undefined4 *)(thing_ptr_2 + 0x2c) = local_7c;
          *(undefined2 *)(thing_ptr_2 + 0x30 + (uint)flag_2 * -8) = auStack_78[(uint)flag_2 * -4];
          sound_fn_06e538(3,0,4,0x100);
          return;
        }
        goto LAB_0007ffe6;
      case 5:
        goto switchD_000800a5_caseD_5;
      default:
        goto switchD_0007fde2_default;
      }
    }
    if ((g_bss_0019d0bd & 8) != 0) {
      gen2_fn_037eab();
    }
    switch((&g_data_0018b70a)[(uint)*(byte *)(thing + 0x1a) * 0x10]) {
    case 1:
      uval_2 = *(undefined2 *)(thing + 0x52); /* thing->health */
      local_74 = *(undefined4 *)(thing + 0x2c);
      auStack_70[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x30 + (uint)flag_2 * -8);
      thing_ptr_2 = creature_could_create_dead_thing_0808b8();
      if (thing_ptr_2 != 0) {
        *(undefined2 *)(thing_ptr_2 + 0x52) = uval_2; /* thing->health */
        *(undefined4 *)(thing_ptr_2 + 0x2c) = local_74;
        *(undefined2 *)(thing_ptr_2 + 0x30 + (uint)flag_2 * -8) = auStack_70[(uint)flag_2 * -4];
        return;
      }
LAB_0007fe21:
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 267, "Cannot create dead thing") */
      return;
    case 2:
      goto switchD_0007fde2_caseD_2;
    case 3:
      uval_3 = *(ushort *)(thing + 0x52); /* thing->health */
      local_64 = *(undefined4 *)(thing + 0x2c);
      auStack_60[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x30 + (uint)flag_2 * -8);
      local_1c = (uint)uval_3;
      for (thing_ptr_2 = *(int *)(thing + 0xf) >> 0x10; /* thing->mappos.val_y */
          thing_ptr_2 <= (int)((uint)*(ushort *)(thing + 0x58) + (*(int *)(thing + 0xf) >> 0x10)); /* thing->mappos.val_y */
          thing_ptr_2 = thing_ptr_2 + 0x40) {
        auStack_60[2] = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
        auStack_60[3] = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
        local_58 = (short)thing_ptr_2;
        effect_allocate_light_effect_024998();
        thing = extraout_ECX;
      }
      auStack_60[2] = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
      auStack_60[3] = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
      local_58 = *(ushort *)(thing + 0x58) / 2 +
                 (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10); /* thing->mappos.val_y */
      effect_allocate_light_effect_024998();
      thing_ptr_2 = creature_could_create_dead_thing_0808b8();
      if (thing_ptr_2 != 0) {
        *(short *)(thing_ptr_2 + 0x52) = (short)local_1c; /* thing->health */
        *(undefined4 *)(thing_ptr_2 + 0x2c) = local_64;
        *(undefined2 *)(thing_ptr_2 + 0x30 + (uint)flag_2 * -8) = auStack_60[(uint)flag_2 * -4];
        sound_fn_06e538(3,0,4,0x100);
        return;
      }
LAB_0007ff35:
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 391, "Cannot create dead thing") */
      return;
    case 4:
      local_54 = *(undefined4 *)(thing + 0x2c);
      auStack_50[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x30 + (uint)flag_2 * -8);
      auStack_50[2] = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
      auStack_50[3] = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
      local_48 = *(ushort *)(thing + 0x58) / 2 +
                 (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10); /* thing->mappos.val_y */
      effect_allocate_light_effect_024998();
      thing_ptr_2 = creature_could_create_dead_thing_0808b8();
      if (thing_ptr_2 != 0) {
        *(undefined2 *)(thing_ptr_2 + 0x52) = extraout_CX; /* thing->health */
        *(undefined4 *)(thing_ptr_2 + 0x2c) = local_54;
        *(undefined2 *)(thing_ptr_2 + 0x30 + (uint)flag_2 * -8) = auStack_50[(uint)flag_2 * -4];
        sound_fn_06e538(3,0,4,0x100);
        return;
      }
LAB_0007ffe6:
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 426, "Cannot create dead thing") */
      return;
    case 5:
      creature_create_dead_thing_08063c();
      return;
    }
  }
  else {
    if ((g_bss_0019d0bd & 8) != 0) {
      gen2_fn_037eab();
    }
    structs_update_creature_control_072af4();
  }
switchD_0007fde2_default:
  return;
}

/******************************************************************************
 * Function : creature_create_dead_thing_080284 (Original VA: 0x80284, Ghidra: FUN_00080284)
 * Prototype: void creature_create_dead_thing_080284(void);
 * Address  : 0x80284 (Size: 596 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 267, 391, 426
 * Purpose  : String 'Cannot create dead thing'
 * Callers  : 0 -> 
 * Callees  : 6 -> effect_allocate_light_effect_024998, sound_fn_06e538, creature_create_dead_thing_08057c, creature_create_dead_thing_08063c, creature_could_create_dead_thing_0808b8, LbErrorLog
 ******************************************************************************/
void creature_create_dead_thing_080284(void)

{
  undefined4 uval;
  undefined2 uval_2;
  int thing;
  int thing_ptr;
  undefined2 extraout_CX;
  int extraout_ECX;
  byte flag;
  undefined2 auStack_38 [2];
  undefined4 local_34;
  undefined2 auStack_30 [4];
  short local_28;
  undefined4 local_24;
  undefined2 auStack_20 [2];
  uint local_1c;
  
  flag = 0;
  switch((&g_data_0018b70a)[(uint)*(byte *)(thing + 0x1a) * 0x10]) {
  case 1:
    uval_2 = *(undefined2 *)(thing + 0x52); /* thing->health */
    uval = *(undefined4 *)(thing + 0x2c);
    auStack_38[0] = *(undefined2 *)(thing + 0x30);
    thing_ptr = creature_could_create_dead_thing_0808b8();
    if (thing_ptr == 0) {
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 267, "Cannot create dead thing") */
      return;
    }
    *(undefined2 *)(thing_ptr + 0x52) = uval_2; /* thing->health */
    *(undefined4 *)(thing_ptr + 0x2c) = uval;
    *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_38[(uint)flag * -4];
    break;
  case 2:
    creature_create_dead_thing_08057c();
    return;
  case 3:
    local_1c = (uint)*(ushort *)(thing + 0x52); /* thing->health */
    local_34 = *(undefined4 *)(thing + 0x2c);
    auStack_30[0] = *(undefined2 *)(thing + 0x30);
    for (thing_ptr = *(int *)(thing + 0xf) >> 0x10; /* thing->mappos.val_y */
        thing_ptr <= (int)((uint)*(ushort *)(thing + 0x58) + (*(int *)(thing + 0xf) >> 0x10)); /* thing->mappos.val_y */
        thing_ptr = thing_ptr + 0x40) {
      effect_allocate_light_effect_024998(*(undefined2 *)(thing + 0xd),(short)thing_ptr); /* thing->mappos.val_x */
      thing = extraout_ECX;
    }
    effect_allocate_light_effect_024998(*(undefined2 *)(thing + 0xd), /* thing->mappos.val_x */
                 *(ushort *)(thing + 0x58) / 2 +
                 (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10)); /* thing->mappos.val_y */
    thing_ptr = creature_could_create_dead_thing_0808b8();
    if (thing_ptr == 0) {
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 391, "Cannot create dead thing") */
      return;
    }
    *(short *)(thing_ptr + 0x52) = (short)local_1c; /* thing->health */
    *(undefined4 *)(thing_ptr + 0x2c) = local_34;
    *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_30[(uint)flag * -4];
    sound_fn_06e538(3,0,4,0x100);
    return;
  case 4:
    local_24 = *(undefined4 *)(thing + 0x2c);
    auStack_20[0] = *(undefined2 *)(thing + 0x30);
    auStack_30[2] = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
    auStack_30[3] = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
    local_28 = *(ushort *)(thing + 0x58) / 2 + (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10) /* thing->mappos.val_y */
    ;
    effect_allocate_light_effect_024998();
    thing_ptr = creature_could_create_dead_thing_0808b8();
    if (thing_ptr == 0) {
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 426, "Cannot create dead thing") */
      return;
    }
    *(undefined2 *)(thing_ptr + 0x52) = extraout_CX; /* thing->health */
    *(undefined4 *)(thing_ptr + 0x2c) = local_24;
    *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_20[(uint)flag * -4];
    sound_fn_06e538(3,0,4,0x100);
    return;
  case 5:
    creature_create_dead_thing_08063c();
  }
  return;
}

/******************************************************************************
 * Function : creature_process_thing_entity_0804d8 (Original VA: 0x804d8, Ghidra: FUN_000804d8)
 * Prototype: void creature_process_thing_entity_0804d8(void);
 * Address  : 0x804d8 (Size: 81 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 267
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_process_thing_entity_0804d8(void)

{
  int thing_ptr;
  int gui_btn;
  int thing_ptr_2;
  
  thing_ptr_2 = (&g_thing_ptrs)[g_bss_002e6ebe];
  if ((&g_thing_ptrs)[g_bss_002e6ebe] == g_thing_ptrs) {
    return;
  }
  do {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 0x67)];
    if (*(short *)(thing_ptr_2 + 0x1d) == *(short *)(gui_btn + 0x1b)) { /* gui_btn->id_num */
      *(undefined2 *)(thing_ptr_2 + 0x1d) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    }
    thing_ptr_2 = thing_ptr;
  } while (thing_ptr != g_thing_ptrs);
  return;
}

/******************************************************************************
 * Function : creature_create_dead_thing_08057c (Original VA: 0x8057c, Ghidra: FUN_0008057c)
 * Prototype: void creature_create_dead_thing_08057c(void);
 * Address  : 0x8057c (Size: 191 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 307
 * Purpose  : String 'Cannot create dead thing'
 * Callers  : 2 -> creature_create_dead_thing_07fac8, creature_create_dead_thing_080284
 * Callees  : 4 -> effect_allocate_light_effect_024998, sound_fn_06e538, creature_could_create_dead_thing_0808b8, LbErrorLog
 ******************************************************************************/
void creature_create_dead_thing_08057c(void)

{
  undefined4 uval;
  int thing;
  int extraout_ECX;
  int thing_ptr;
  byte flag;
  undefined2 auStack_1c [2];
  uint local_18;
  
  flag = 0;
  local_18 = (uint)*(ushort *)(thing + 0x52); /* thing->health */
  uval = *(undefined4 *)(thing + 0x2c);
  auStack_1c[0] = *(undefined2 *)(thing + 0x30);
  for (thing_ptr = *(int *)(thing + 0xf) >> 0x10; /* thing->mappos.val_y */
      thing_ptr <= (int)((*(int *)(thing + 0xf) >> 0x10) + (uint)*(ushort *)(thing + 0x58)); /* thing->mappos.val_y */
      thing_ptr = thing_ptr + 0x40) {
    effect_allocate_light_effect_024998(*(undefined2 *)(thing + 0xd),(short)thing_ptr); /* thing->mappos.val_x */
    thing = extraout_ECX;
  }
  thing_ptr = creature_could_create_dead_thing_0808b8();
  if (thing_ptr == 0) {
    LbErrorLog(); /* LbErrorLog("creature.cpp", line 307, "Cannot create dead thing") */
  }
  else {
    *(short *)(thing_ptr + 0x52) = (short)local_18; /* thing->health */
    *(undefined4 *)(thing_ptr + 0x2c) = uval;
    *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_1c[(uint)flag * -4];
    sound_fn_06e538(3,0,4,0x100);
  }
  return;
}

/******************************************************************************
 * Function : creature_create_dead_thing_08063c (Original VA: 0x8063c, Ghidra: FUN_0008063c)
 * Prototype: void creature_create_dead_thing_08063c(void);
 * Address  : 0x8063c (Size: 191 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 346
 * Purpose  : String 'Cannot create dead thing'
 * Callers  : 2 -> creature_create_dead_thing_07fac8, creature_create_dead_thing_080284
 * Callees  : 4 -> effect_allocate_light_effect_024998, sound_fn_06e538, creature_could_create_dead_thing_0808b8, LbErrorLog
 ******************************************************************************/
void creature_create_dead_thing_08063c(void)

{
  undefined4 uval;
  int thing;
  int extraout_ECX;
  int thing_ptr;
  byte flag;
  undefined2 auStack_1c [2];
  uint local_18;
  
  flag = 0;
  local_18 = (uint)*(ushort *)(thing + 0x52); /* thing->health */
  uval = *(undefined4 *)(thing + 0x2c);
  auStack_1c[0] = *(undefined2 *)(thing + 0x30);
  for (thing_ptr = *(int *)(thing + 0xf) >> 0x10; /* thing->mappos.val_y */
      thing_ptr <= (int)((*(int *)(thing + 0xf) >> 0x10) + (uint)*(ushort *)(thing + 0x58)); /* thing->mappos.val_y */
      thing_ptr = thing_ptr + 0x40) {
    effect_allocate_light_effect_024998(*(undefined2 *)(thing + 0xd),(short)thing_ptr); /* thing->mappos.val_x */
    thing = extraout_ECX;
  }
  thing_ptr = creature_could_create_dead_thing_0808b8();
  if (thing_ptr == 0) {
    LbErrorLog(); /* LbErrorLog("creature.cpp", line 346, "Cannot create dead thing") */
  }
  else {
    *(short *)(thing_ptr + 0x52) = (short)local_18; /* thing->health */
    *(undefined4 *)(thing_ptr + 0x2c) = uval;
    *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_1c[(uint)flag * -4];
    sound_fn_06e538(3,0,4,0x100);
  }
  return;
}

/******************************************************************************
 * Function : creature_create_dead_thing_0806fc (Original VA: 0x806fc, Ghidra: FUN_000806fc)
 * Prototype: void creature_create_dead_thing_0806fc(void);
 * Address  : 0x806fc (Size: 253 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 391, 426
 * Purpose  : String 'Cannot create dead thing'
 * Callers  : 0 -> 
 * Callees  : 4 -> effect_allocate_light_effect_024998, sound_fn_06e538, creature_could_create_dead_thing_0808b8, LbErrorLog
 ******************************************************************************/
void creature_create_dead_thing_0806fc(void)

{
  undefined4 uval;
  int thing;
  int extraout_ECX;
  int thing_ptr;
  byte flag;
  undefined2 auStack_1c [2];
  uint local_18;
  
  flag = 0;
  local_18 = (uint)*(ushort *)(thing + 0x52); /* thing->health */
  uval = *(undefined4 *)(thing + 0x2c);
  auStack_1c[0] = *(undefined2 *)(thing + 0x30);
  for (thing_ptr = *(int *)(thing + 0xf) >> 0x10; /* thing->mappos.val_y */
      thing_ptr <= (int)((*(int *)(thing + 0xf) >> 0x10) + (uint)*(ushort *)(thing + 0x58)); /* thing->mappos.val_y */
      thing_ptr = thing_ptr + 0x40) {
    effect_allocate_light_effect_024998(*(undefined2 *)(thing + 0xd),(short)thing_ptr); /* thing->mappos.val_x */
    thing = extraout_ECX;
  }
  effect_allocate_light_effect_024998(*(undefined2 *)(thing + 0xd), /* thing->mappos.val_x */
               *(ushort *)(thing + 0x58) / 2 + (short)((uint)*(undefined4 *)(thing + 0xf) >> 0x10) /* thing->mappos.val_y */
              );
  thing_ptr = creature_could_create_dead_thing_0808b8();
  if (thing_ptr == 0) {
    LbErrorLog(); /* LbErrorLog("creature.cpp", line 391, "Cannot create dead thing") */
  }
  else {
    *(short *)(thing_ptr + 0x52) = (short)local_18; /* thing->health */
    *(undefined4 *)(thing_ptr + 0x2c) = uval;
    *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_1c[(uint)flag * -4];
    sound_fn_06e538(3,0,4,0x100);
  }
  return;
}

/******************************************************************************
 * Function : creature_could_create_dead_thing_0808b8 (Original VA: 0x808b8, Ghidra: FUN_000808b8)
 * Prototype: byte * creature_could_create_dead_thing_0808b8(void);
 * Address  : 0x808b8 (Size: 280 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 465
 * Purpose  : String 'Could not create dead thing.'
 * Callers  : 5 -> creature_create_dead_thing_07fac8, creature_create_dead_thing_080284, creature_create_dead_thing_08057c, creature_create_dead_thing_08063c, creature_create_dead_thing_0806fc
 * Callees  : 3 -> inits_told_you_so_create_044b13, structs_update_creature_control_072af4, LbErrorLog
 ******************************************************************************/
byte * creature_could_create_dead_thing_0808b8(void)

{
  undefined2 uval;
  undefined4 uval_2;
  byte flag;
  byte flag_2;
  short short_val;
  int thing;
  byte *byte_ptr;
  undefined1 arg_dl;
  ushort uval_3;
  byte cctrl_ptr;
  int player_off;
  
  flag = *(byte *)(thing + 0x1a);
  uval_2 = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
  uval = *(undefined2 *)(thing + 0x11);
  flag_2 = *(byte *)(thing + 6); /* thing->owner */
  short_val = *(short *)(thing + 0x1b); /* thing->index_or_angle */
  cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23); /* thing->ccontrol_idx */
  if ((int)(char)flag_2 != (uint)g_neutral_player_number) {
    *(uint *)(&g_bss_002e1431 + (char)flag_2 * 0x1508) =
         *(int *)(&g_bss_002e1431 + (char)flag_2 * 0x1508) -
         (uint)(byte)(&g_bss_002ebaf8)[(uint)*(byte *)(thing + 0x1a) * 10 + (uint)cctrl_ptr];
  }
  structs_update_creature_control_072af4(uval_2,uval);
  byte_ptr = (byte *)inits_told_you_so_create_044b13((uint)cctrl_ptr);
  if (byte_ptr == (byte *)0x0) {
    LbErrorLog(); /* LbErrorLog("creature.cpp", line 465, "Could not create dead thing.") */
    byte_ptr = (byte *)0x0;
  }
  else {
    uval_3 = CONCAT11(*byte_ptr,arg_dl) & 0xdf01;
    cctrl_ptr = (byte)(uval_3 >> 8);
    *byte_ptr = cctrl_ptr;
    *byte_ptr = cctrl_ptr | (char)uval_3 << 5;
    if ((flag != g_neutral_player_number) &&
       (player_off = (uint)flag_2 * 0x4ef, short_val == *(short *)((int)&g_bss_0019d0f7 + player_off))) {
      *(undefined2 *)((int)&g_bss_0019d0f7 + player_off) = *(undefined2 *)(byte_ptr + 0x1b);
      *(undefined4 *)(&g_bss_0019d0f9 + player_off) = *(undefined4 *)(byte_ptr + 9);
    }
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : creature_control_creature_as_passenger_0809d0 (Original VA: 0x809d0, Ghidra: FUN_000809d0)
 * Prototype: void creature_control_creature_as_passenger_0809d0(void);
 * Address  : 0x809d0 (Size: 158 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 503
 * Purpose  : String 'Cannot control creature as passenger (owned by a different p'
 * Callers  : 2 -> instance_fn_04b59e, creature_allocate_light_new_hero_080a94
 * Callees  : 4 -> input_maintain_gui_button_state_04823a, newgui_fn_05b645, newgui_fn_05c2e3, LbErrorLog
 ******************************************************************************/
void creature_control_creature_as_passenger_0809d0(void)

{
  char player_off;
  undefined1 *arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  
  if ((*(int *)(arg_edx + 3) >> 0x18 == (uint)(byte)arg_eax[0x2b]) &&
     (((player_off = *(char *)(arg_edx + 0x1f), player_off == '\x05' || (player_off == '\x04')) ||
      ((player_off == '\x01' && (*(char *)(arg_edx + 0x1a) == '\n')))))) {
    if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
      newgui_fn_05b645();
      newgui_fn_05c2e3();
      arg_edx = extraout_ECX;
    }
    *(undefined2 *)(arg_eax + 0x2f) = *(undefined2 *)(arg_edx + 0x1b);
    *(undefined4 *)(arg_eax + 0x31) = *(undefined4 *)(arg_edx + 9);
    arg_eax[0x4b5] = *(undefined1 *)(*(int *)(arg_eax + 0x38) + 6);
    input_maintain_gui_button_state_04823a();
    *(byte *)(extraout_ECX_00 + 0x4f) = *(byte *)(extraout_ECX_00 + 0x4f) | 1;
    return;
  }
  LbErrorLog(); /* LbErrorLog("creature.cpp", line 503, "Cannot control creature as passenger (owned by a different player)") */
  return;
}

/******************************************************************************
 * Function : creature_allocate_light_new_hero_080a94 (Original VA: 0x80a94, Ghidra: FUN_00080a94)
 * Prototype: undefined4 creature_allocate_light_new_hero_080a94(void);
 * Address  : 0x80a94 (Size: 493 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 562
 * Purpose  : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> instance_update_creature_and_thing_04b478, creature_could_create_creature_081fec
 * Callees  : 13 -> barracks_barrack_party_class_013b43, eyelens_data_frac_dat_027130, gravyard_fn_039d55, input_maintain_gui_button_state_04823a, newgui_fn_05b645, newgui_fn_05c2e3, person_fn_063b6d, creature_control_creature_as_passenger_0809d0 ...
 ******************************************************************************/
undefined4 creature_allocate_light_new_hero_080a94(void)

{
  undefined2 uval;
  short short_val;
  undefined1 *arg_eax;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *byte_ptr;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int val;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int arg_edx;
  byte flag;
  undefined2 uStack_16;
  undefined1 local_13;
  
  flag = 0;
  if ((*(int *)(arg_edx + 3) >> 0x18 == (uint)(byte)arg_eax[0x2b]) &&
     ((*(char *)(arg_edx + 0x1f) == '\x05' || (*(char *)(arg_edx + 0x1f) == '\x04')))) {
    LbScreenWaitVbi();
    byte_ptr = extraout_ECX;
    if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
      newgui_fn_05b645();
      newgui_fn_05c2e3();
      byte_ptr = extraout_ECX_00;
    }
    *(undefined2 *)(arg_eax + 0x2f) = *(undefined2 *)(byte_ptr + 0x1b);
    *(undefined4 *)(arg_eax + 0x31) = *(undefined4 *)(byte_ptr + 9);
    arg_eax[0x4b5] = *(undefined1 *)(*(int *)(arg_eax + 0x38) + 6);
    *byte_ptr = *byte_ptr | 0x20;
    byte_ptr[0x4f] = byte_ptr[0x4f] | 1;
    person_fn_063b6d();
    input_maintain_gui_button_state_04823a();
    val = extraout_ECX_01;
    if (*(char *)(extraout_ECX_01 + 0x1f) == '\x05') {
      uval = creature_update_creature_control_085890();
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_02 + 100)] + 0xc4) = uval;
      barracks_barrack_party_class_013b43();
      val = extraout_ECX_03;
      if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_03 + 100)] + 0x7a) & 0xfff) != 0) {
        gravyard_fn_039d55();
        val = extraout_ECX_04;
      }
    }
    (&uStack_16)[(uint)flag * -4] = *(undefined2 *)(val + 0x11 + (uint)flag * -8);
    local_13 = 1;
    short_val = light_already_list_0acaf8(0xa00);
    *(short *)(extraout_ECX_05 + 0x62) = short_val;
    if (short_val == 0) {
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 562, "Cannot allocate light to new hero") */
    }
    light_attempt_set_size_unallocated_0ad834();
    if ((*(int *)(extraout_ECX_06 + 3) >> 0x18 ==
         (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
       (*(char *)(extraout_ECX_06 + 0x1f) == '\x05')) {
      eyelens_data_frac_dat_027130();
    }
    return 1;
  }
  if ((*(char *)(arg_edx + 0x1f) == '\x01') &&
     ((*(char *)(arg_edx + 0x1a) == '\n' &&
      (*(int *)(arg_edx + 3) >> 0x18 == (uint)(byte)arg_eax[0x2b])))) {
    creature_control_creature_as_passenger_0809d0();
    *(short *)(*(int *)(arg_eax + 0x38) + 4) = *(short *)(*(int *)(arg_eax + 0x38) + 4) + g_bss_002ea60c
    ;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_allocate_light_new_hero_080c84 (Original VA: 0x80c84, Ghidra: FUN_00080c84)
 * Prototype: int creature_allocate_light_new_hero_080c84(void);
 * Address  : 0x80c84 (Size: 384 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 642
 * Purpose  : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> instance_update_creature_and_thing_04b9ee, newgui_create_floating_spirit_05ce63
 * Callees  : 10 -> eyelens_data_frac_dat_027130, inits_told_you_so_create_043bb3, input_maintain_gui_button_state_04823a, newgui_fn_05b645, newgui_fn_05c2e3, person_fn_063b6d, creature_update_creature_control_085890, light_already_list_0acaf8 ...
 ******************************************************************************/
int creature_allocate_light_new_hero_080c84(void)

{
  undefined2 uval;
  short short_val;
  undefined1 *arg_eax;
  byte *thing_ptr;
  byte *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int val;
  undefined2 extraout_var;
  byte flag;
  undefined2 uStack_12;
  undefined1 local_f;
  
  flag = 0;
  thing_ptr = (byte *)inits_told_you_so_create_043bb3();
  if (thing_ptr != (byte *)0x0) {
    (&g_bss_002e0ea2)[(*(int *)(thing_ptr + 3) >> 0x18) * 0x1508] =
         (&g_bss_002e0ea2)[(*(int *)(thing_ptr + 3) >> 0x18) * 0x1508] + -1;
    (&g_bss_002e0ea3)[(uint)thing_ptr[0x1a] + (*(int *)(thing_ptr + 3) >> 0x18) * 0x1508] =
         (&g_bss_002e0ea3)[(uint)thing_ptr[0x1a] + (*(int *)(thing_ptr + 3) >> 0x18) * 0x1508] + -1;
    if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
      newgui_fn_05b645();
      newgui_fn_05c2e3();
      thing_ptr = extraout_ECX;
    }
    *(undefined2 *)(arg_eax + 0x2f) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined4 *)(arg_eax + 0x31) = *(undefined4 *)(thing_ptr + 9);
    arg_eax[0x4b5] = *(undefined1 *)(*(int *)(arg_eax + 0x38) + 6);
    *thing_ptr = *thing_ptr | 0x20;
    thing_ptr[0x4f] = thing_ptr[0x4f] | 1;
    *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 2) = /* thing->ccontrol_idx */
         *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 2) | 2; /* thing->ccontrol_idx */
    uval = creature_update_creature_control_085890();
    *(undefined2 *)
     ((&g_creature_ctrl_ptrs)[CONCAT22(extraout_var,*(undefined2 *)(extraout_ECX_00 + 100))] + 0xc4) = uval
    ;
    input_maintain_gui_button_state_04823a();
    person_fn_063b6d();
    (&uStack_12)[(uint)flag * -4] = *(undefined2 *)(extraout_ECX_01 + 0x11 + (uint)flag * -8);
    local_f = 1;
    short_val = light_already_list_0acaf8(0xa00);
    *(short *)(extraout_ECX_02 + 0x62) = short_val;
    if (short_val == 0) {
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 642, "Cannot allocate light to new hero") */
    }
    light_attempt_set_size_unallocated_0ad834();
    val = extraout_ECX_03;
    if ((*(int *)(extraout_ECX_03 + 3) >> 0x18 ==
         (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
       (*(char *)(extraout_ECX_03 + 0x1f) == '\x05')) {
      eyelens_data_frac_dat_027130();
      val = extraout_ECX_04;
    }
    return val;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_080e04 (Original VA: 0x80e04, Ghidra: FUN_00080e04)
 * Prototype: void creature_fn_080e04(void);
 * Address  : 0x80e04 (Size: 438 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x080e04
 * Callers  : 1 -> instance_update_player_view_state_04b5ca
 * Callees  : 3 -> input_maintain_gui_button_state_04823a, instance_fn_049eff, command_update_player_view_state_0784ae
 ******************************************************************************/
void creature_fn_080e04(void)

{
  ushort uval;
  short short_val;
  int val;
  undefined *word_ptr;
  int arg_eax;
  byte *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *extraout_ECX_02;
  int extraout_ECX_03;
  int arg_edx;
  
  if ((*(int *)(arg_edx + 3) >> 0x18 == (uint)*(byte *)(arg_eax + 0x2b)) &&
     (*(short *)(arg_edx + 0x1b) == *(short *)(arg_eax + 0x2f))) {
    input_maintain_gui_button_state_04823a();
    *(byte *)(arg_edx + 0x4f) = *(byte *)(arg_edx + 0x4f) & 0xfe;
    *extraout_ECX = *extraout_ECX & 0xf7;
    command_update_player_view_state_0784ae();
    *(short *)(extraout_ECX_00 + 0x3c) =
         (short)((&g_slab_attr_table)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] *
                 ((*(int *)(arg_edx + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&g_bss_002e9162 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6)) >> 0x10)
         + *(short *)(arg_edx + 0xd);
    *(short *)(extraout_ECX_00 + 0x3e) =
         *(short *)(arg_edx + 0xf) -
         (short)((int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] *
                 ((uint)*(ushort *)(&g_bss_002e9162 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6) +
                 (*(int *)(arg_edx + 0xf) >> 0x10)) >> 0x10);
    *(short *)(extraout_ECX_00 + 0xba) =
         (short)(((uint)*(ushort *)(&g_bss_002e9162 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6) +
                 (*(int *)(arg_edx + 0xf) >> 0x10)) *
                 (&g_slab_attr_table)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10) +
         *(short *)(arg_edx + 0xd);
    uval = *(ushort *)(&g_bss_002e9162 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6);
    val = *(int *)(arg_edx + 0xf);
    word_ptr = (&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)];
    short_val = *(short *)(arg_edx + 0xf);
    *(undefined2 *)(extraout_ECX_00 + 0x2f) = 0;
    *(undefined4 *)(extraout_ECX_00 + 0x31) = 0;
    *(short *)(extraout_ECX_00 + 0xbc) =
         short_val - (short)(((val >> 0x10) + (uint)uval) * (int)word_ptr >> 0x10);
    return;
  }
  instance_fn_049eff();
  *(undefined2 *)(extraout_ECX_01 + 0x2f) = 0;
  *(undefined4 *)(extraout_ECX_01 + 0x31) = 0;
  input_maintain_gui_button_state_04823a();
  *extraout_ECX_02 = *extraout_ECX_02 & 0xf7;
  command_update_player_view_state_0784ae();
  *(undefined2 *)(extraout_ECX_03 + 0x3c) = 0;
  *(undefined2 *)(extraout_ECX_03 + 0x3e) = 0;
  *(undefined2 *)(extraout_ECX_03 + 0xba) = 0;
  *(undefined2 *)(extraout_ECX_03 + 0xbc) = 0;
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_080fbc (Original VA: 0x80fbc, Ghidra: FUN_00080fbc)
 * Prototype: void creature_update_creature_control_080fbc(void);
 * Address  : 0x80fbc (Size: 540 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> instance_update_player_view_state_04b6ae, instance_process_thing_entity_04bb19, creature_could_create_creature_081fec, creature_update_player_view_state_085f80
 * Callees  : 8 -> group_infinate_loop_dispand_group_03a237, input_maintain_gui_button_state_04823a, instance_fn_049eff, person_fn_063b6d, structs_update_creature_control_072af4, command_update_player_view_state_0784ae, creature_update_creature_control_085890, light_attempt_delete_light_0acce4
 ******************************************************************************/
void creature_update_creature_control_080fbc(void)

{
  undefined2 uval;
  int arg_eax;
  byte *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *extraout_ECX_02;
  int extraout_ECX_03;
  byte *arg_edx;
  undefined2 extraout_var;
  
  if ((*(int *)(arg_edx + 3) >> 0x18 == (uint)*(byte *)(arg_eax + 0x2b)) &&
     (*(short *)(arg_edx + 0x1b) == *(short *)(arg_eax + 0x2f))) {
    *(undefined2 *)(arg_eax + 0x2f) = 0;
    *(undefined4 *)(arg_eax + 0x31) = 0;
    input_maintain_gui_button_state_04823a();
    *arg_edx = *arg_edx & 0xdf;
    arg_edx[0x4f] = arg_edx[0x4f] & 0xfe;
    *extraout_ECX = *extraout_ECX & 0xf7;
    command_update_player_view_state_0784ae();
    *(short *)(extraout_ECX_00 + 0x3c) =
         (short)(((*(int *)(arg_edx + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&g_bss_002e9162 + (uint)arg_edx[0x1a] * 0xe6)) *
                 (&g_slab_attr_table)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10) +
         *(short *)(arg_edx + 0xd);
    *(short *)(extraout_ECX_00 + 0x3e) =
         *(short *)(arg_edx + 0xf) -
         (short)(((*(int *)(arg_edx + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&g_bss_002e9162 + (uint)arg_edx[0x1a] * 0xe6)) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10);
    *(short *)(extraout_ECX_00 + 0xba) =
         *(short *)(arg_edx + 0xd) +
         (short)(((*(int *)(arg_edx + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&g_bss_002e9162 + (uint)arg_edx[0x1a] * 0xe6)) *
                 (&g_slab_attr_table)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10);
    *(short *)(extraout_ECX_00 + 0xbc) =
         *(short *)(arg_edx + 0xf) -
         (short)(((*(int *)(arg_edx + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&g_bss_002e9162 + (uint)arg_edx[0x1a] * 0xe6)) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10);
    if (arg_edx[0x1f] == 5) {
      person_fn_063b6d();
      uval = creature_update_creature_control_085890();
      *(undefined2 *)((&g_creature_ctrl_ptrs)[CONCAT22(extraout_var,*(undefined2 *)(arg_edx + 100))] + 0xc4)
           = uval;
      if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 2) & 2) == 0) {
        group_infinate_loop_dispand_group_03a237();
      }
      else {
        structs_update_creature_control_072af4();
      }
    }
    if (*(short *)(arg_edx + 0x62) != 0) {
      light_attempt_delete_light_0acce4();
      arg_edx[0x62] = 0;
      arg_edx[99] = 0;
      return;
    }
  }
  else {
    instance_fn_049eff();
    *(undefined2 *)(extraout_ECX_01 + 0x2f) = 0;
    *(undefined4 *)(extraout_ECX_01 + 0x31) = 0;
    input_maintain_gui_button_state_04823a();
    *extraout_ECX_02 = *extraout_ECX_02 & 0xf7;
    command_update_player_view_state_0784ae();
    *(undefined2 *)(extraout_ECX_03 + 0x3c) = 0;
    *(undefined2 *)(extraout_ECX_03 + 0x3e) = 0;
    *(undefined2 *)(extraout_ECX_03 + 0xba) = 0;
    *(undefined2 *)(extraout_ECX_03 + 0xbc) = 0;
  }
  return;
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_0811d8 (Original VA: 0x811d8, Ghidra: FUN_000811d8)
 * Prototype: undefined8 creature_update_creature_and_thing_0811d8(void);
 * Address  : 0x811d8 (Size: 2132 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 3 -> temple_fn_073fa8, draw_roll_action_random_08ccec, update_fn_0dd2f0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 creature_update_creature_and_thing_0811d8(void)

{
  byte flag;
  short short_val;
  byte *thing;
  int val;
  int cctrl_ptr;
  uint uval;
  undefined4 uval_2;
  undefined4 arg_edx;
  int *int_ptr;
  int *int_ptr_2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  int_ptr = &local_1c;
  int_ptr_2 = &local_1c;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  thing[0x4f] = thing[0x4f] & 0x8e;
  if (((*thing & 0x20) == 0) ||
     (*(int *)(thing + 3) >> 0x18 != (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]))
  {
    if ((&g_data_0018b70d)[(uint)thing[0x1a] * 0x10] == '\0') {
      if (((*(byte *)(cctrl_ptr + 0xac) & 0x20) != 0) && (*(int *)(cctrl_ptr + 0xad) >> 0x10 < 1)) {
        if (*(int *)(thing + 3) >> 0x18 !=
            (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) goto LAB_00081285;
        flag = thing[0x4f];
        thing[0x4f] = flag & 0xcf;
        thing[0x4f] = flag & 0xcf | 0x20;
      }
    }
    else {
      thing[0x4f] = thing[0x4f] | 0x30;
    }
  }
  else {
LAB_00081285:
    thing[0x4f] = thing[0x4f] | 1;
  }
  if ((thing[0x50] & 1) == 0) {
    if ((thing[7] == 0x60) && (-1 < *(int *)(cctrl_ptr + 0x280) >> 0x10)) {
      thing[0x4f] = thing[0x4f] | 1;
      int_ptr_2 = &local_1c;
    }
    else {
      if ((*(byte *)(cctrl_ptr + 0xad) & 2) == 0) {
        if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
          if (((*(char *)(cctrl_ptr + 0xb1) == '\0') && (-1 < *(int *)(thing + 0x5c) >> 0x10)) &&
             ((*(byte *)(cctrl_ptr + 0xab) & 2) == 0)) {
            if ((*(byte *)(cctrl_ptr + 0xab) & 1) == 0) {
              flag = thing[7];
              if (flag == 0x42) {
                uStack_20 = 0x816a9;
                short_val = update_fn_0dd2f0();
                int_ptr_2 = &local_1c;
                if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
              }
              else if ((flag == 0x7c) || (flag == 0x7d)) {
                uStack_20 = 0x816e0;
                short_val = update_fn_0dd2f0();
                int_ptr_2 = &local_1c;
                if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
              }
              else {
                if (flag == 0x43) {
                  uStack_20 = 0x81717;
                  short_val = update_fn_0dd2f0();
                  if (short_val != *(short *)(thing + 0x44)) {
                    uStack_20 = 2;
                    uStack_24 = 0;
                    int_ptr = &uStack_28;
                    uStack_28 = 0xffffffff;
                    update_fn_0dd2f0();
                    draw_roll_action_random_08ccec();
                  }
                  thing[0x4f] = thing[0x4f] | 0x40;
                  int_ptr_2 = int_ptr;
                  goto LAB_00081921;
                }
                if (flag == 0x1a) {
                  thing[0x4f] = thing[0x4f] & 0xcf;
                  uStack_20 = 0x81766;
                  short_val = update_fn_0dd2f0();
                  int_ptr_2 = &local_1c;
                  if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
                }
                else if (*(short *)(cctrl_ptr + 9) == 0) {
                  uStack_20 = 0x818f8;
                  short_val = update_fn_0dd2f0();
                  if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
                }
                else if ((int)(uint)*(ushort *)(thing + 0x60) < *(int *)(thing + 0xf) >> 0x10) { /* thing->mappos.val_y */
                  uStack_20 = 0x817b0;
                  short_val = update_fn_0dd2f0();
                  int_ptr_2 = &local_1c;
                  if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
                }
                else if ((*(ushort *)(cctrl_ptr + 0x6e) == 0) ||
                        ((*(byte *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x6e)] + 1) & 1) == 0)) {
                  uStack_20 = 0x8183c;
                  short_val = update_fn_0dd2f0();
                  if (short_val == *(short *)(thing + 0x44)) {
                    int_ptr_2 = &local_1c;
                    if ((&g_data_0018b70c)[(uint)thing[0x1a] * 0x10] != '\x04') {
                      *(short *)(thing + 0x3e) =
                           (short)(((*(int *)(cctrl_ptr + 7) >> 0x10) << 8) /
                                  ((*(int *)(&g_bss_002e9184 + (uint)thing[0x1a] * 0xe6) >> 0x10) + 1
                                  ));
                      int_ptr_2 = &local_1c;
                    }
                    goto LAB_00081921;
                  }
                }
                else {
                  uStack_20 = 0x817e6;
                  short_val = update_fn_0dd2f0();
                  int_ptr_2 = &local_1c;
                  if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
                }
              }
            }
            else {
              uStack_20 = 0x81684;
              short_val = update_fn_0dd2f0();
              int_ptr_2 = &local_1c;
              if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
            }
          }
          else {
            uStack_20 = 0x81655;
            short_val = update_fn_0dd2f0();
            int_ptr_2 = &local_1c;
            if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
          }
        }
        else {
          if (*(char *)(cctrl_ptr + 0xd2) == '-') {
            thing[0x4f] = thing[0x4f] & 0xcf;
          }
          uStack_20 = 0x815e7;
          short_val = update_fn_0dd2f0();
          int_ptr_2 = &local_1c;
          if (short_val == *(short *)(thing + 0x44)) goto LAB_00081921;
        }
        uStack_20 = 2;
        uStack_24 = 0;
        uStack_28 = 0xffffffff;
        update_fn_0dd2f0();
      }
      else {
        thing[0x4f] = thing[0x4f] & 0xcf;
        if (*(short *)(cctrl_ptr + 9) == 0) {
          if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
            val = (int)sRam002f303b;
            if (val < 0) {
              val = 0x334;
            }
          }
          else if (g_bss_002f288f < 0) {
            val = 0x334;
          }
          else {
            val = (int)g_bss_002f288f;
          }
          int_ptr_2 = &local_1c;
          if (*(int *)(thing + 0x42) >> 0x10 == val) goto LAB_00081921;
          uStack_20 = 2;
          uStack_24 = 0;
          uStack_28 = 0xffffffff;
        }
        else if ((int)(uint)*(ushort *)(thing + 0x60) < *(int *)(thing + 0xf) >> 0x10) { /* thing->mappos.val_y */
          if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
            val = (int)sRam002f303b;
            if (val < 0) {
              val = 0x334;
            }
          }
          else if (g_bss_002f288f < 0) {
            val = 0x334;
          }
          else {
            val = (int)g_bss_002f288f;
          }
          int_ptr_2 = &local_1c;
          if (*(int *)(thing + 0x42) >> 0x10 == val) goto LAB_00081921;
          uStack_20 = 2;
          uStack_24 = 0;
          uStack_28 = 0xffffffff;
        }
        else {
          if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
            val = (int)g_bss_002f3037._2_2_;
            if (val < 0) {
              val = 0x333;
            }
          }
          else if (g_bss_002f288b._2_2_ < 0) {
            val = 0x333;
          }
          else {
            val = (int)g_bss_002f288b._2_2_;
          }
          if (*(int *)(thing + 0x42) >> 0x10 == val) {
            int_ptr_2 = &local_1c;
            if ((&g_data_0018b70c)[(uint)thing[0x1a] * 0x10] != '\x04') {
              *(short *)(thing + 0x3e) =
                   (short)(((*(int *)(cctrl_ptr + 7) >> 0x10) << 8) /
                          ((*(int *)(&g_bss_002e9184 + (uint)thing[0x1a] * 0xe6) >> 0x10) + 1));
              int_ptr_2 = &local_1c;
            }
            goto LAB_00081921;
          }
          if ((&g_data_0018b70c)[(uint)thing[0x1a] * 0x10] == '\x04') {
            uStack_20 = 2;
            uStack_24 = 0;
            uStack_28 = 0xffffffff;
          }
          else {
            local_1c = (*(int *)(&g_bss_002e9184 + (uint)thing[0x1a] * 0xe6) >> 0x10) + 1;
            uStack_20 = 2;
            uStack_24 = 0;
            uStack_28 = 0xffffffff;
          }
        }
      }
      draw_roll_action_random_08ccec();
      int_ptr_2 = &uStack_28;
    }
  }
  else {
    thing[0x50] = thing[0x50] & 0xfe;
    int_ptr_2 = &local_1c;
  }
LAB_00081921:
  if ((*(byte *)(cctrl_ptr + 0xab) & 2) == 0) {
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    if (((*(byte *)(cctrl_ptr + 3) & 1) == 0) && ((*(byte *)(cctrl_ptr + 3) & 2) == 0)) {
      thing[0x51] = 0;
      thing[0x4f] = thing[0x4f] & 0xf3;
    }
    else {
      uval = g_game_turn / 3;
      if (g_game_turn % 3 == 0) {
        thing[0x51] = 0;
        thing[0x4f] = thing[0x4f] & 0xf3;
        return CONCAT44(arg_edx,uval);
      }
      cctrl_ptr = *(int *)(thing + 3) >> 0x18;
      if (cctrl_ptr == 0) {
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x81995;
        uval_2 = temple_fn_073fa8();
        return CONCAT44(arg_edx,uval_2);
      }
      if (cctrl_ptr == 1) {
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x819b4;
        uval_2 = temple_fn_073fa8();
        return CONCAT44(arg_edx,uval_2);
      }
      if (cctrl_ptr == 2) {
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x819d6;
        uval_2 = temple_fn_073fa8();
        return CONCAT44(arg_edx,uval_2);
      }
      if (cctrl_ptr == 3) {
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x819f7;
        uval_2 = temple_fn_073fa8();
        return CONCAT44(arg_edx,uval_2);
      }
    }
  }
  else {
    *(undefined4 *)((int)int_ptr_2 + -4) = 0x8193e;
    cctrl_ptr = temple_fn_073fa8();
  }
  return CONCAT44(arg_edx,cctrl_ptr);
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_081a2c (Original VA: 0x81a2c, Ghidra: FUN_00081a2c)
 * Prototype: void creature_update_creature_and_thing_081a2c(void);
 * Address  : 0x81a2c (Size: 481 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 5 -> shot_update_creature_and_thing_06c444, shot_process_thing_entity_06ca16, shot_process_thing_entity_06cee6, creature_fn_081c10, creature_update_creature_control_0824dc
 * Callees  : 1 -> panmap_fn_062787
 ******************************************************************************/
void creature_update_creature_and_thing_081a2c(void)

{
  char cctrl_ptr;
  int thing;
  uint uval;
  int extraout_ECX;
  int arg_edx;
  int val;
  int val_2;
  char arg_bl;
  
  if ((0 < arg_edx) && (-1 < *(int *)(thing + 0x5c) >> 0x10)) {
    cctrl_ptr = *(char *)(thing + 0x1f); /* thing->class_id */
    if (cctrl_ptr == '\x05') {
      if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 4) == 0) { /* thing->ccontrol_idx */
        uval = (uint)(byte)(&g_bss_002e9119)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
        if ((*(short *)(thing + 100) != 0) && /* thing->ccontrol_idx */
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xac) & 4) != 0)) { /* thing->ccontrol_idx */
          uval = (int)(uval * 0x140) >> 8;
        }
        if ((int)uval < 0) {
          uval = 0;
        }
        else if (200 < uval) {
          uval = 200;
        }
        val = (0x100 - uval) * arg_edx;
        val_2 = val >> 0x1f;
        val = (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
        if (val < 1) {
          val = 1;
        }
        *(short *)(thing + 0x5e) = *(short *)(thing + 0x5e) - (short)val;
        *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) | 0x80; /* thing->render_flags */
        val = g_my_player_word >> 0x18;
        *(undefined2 *)(thing + 0x17) = 8;
        if (thing == (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + val * 0x4ef)]) {
          panmap_fn_062787();
          thing = extraout_ECX;
        }
      }
    }
    else if (cctrl_ptr == '\x01') {
      *(short *)(thing + 0x5e) = *(short *)(thing + 0x5e) - (short)arg_edx;
      *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) | 0x80; /* thing->render_flags */
    }
    else if (cctrl_ptr == '\t') {
      *(short *)(thing + 0x5e) = *(short *)(thing + 0x5e) - (short)arg_edx;
    }
    if ((((*(char *)(thing + 0x1f) == '\x05') && (*(int *)(thing + 0x5c) >> 0x10 < 0)) && /* thing->class_id */
        (*(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1cf) >> 0x18 == -1)) && /* thing->ccontrol_idx */
       (arg_bl != -1)) {
      *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1d2) = arg_bl; /* thing->ccontrol_idx */
    }
  }
  return;
}

/******************************************************************************
 * Function : creature_fn_081c10 (Original VA: 0x81c10, Ghidra: FUN_00081c10)
 * Prototype: void creature_fn_081c10(void);
 * Address  : 0x81c10 (Size: 23 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081c10
 * Callers  : 12 -> effect_illegal_hit_thing_type_02585f, effect_update_creature_and_thing_025af0, effect_update_creature_and_thing_0266af, effect_process_map_subtile_026987, magic_update_creature_and_thing_04f195, setup_compute_creature_eye_offset, setup_apply_possession_lens_and_eye, update_update_slab_subtile_columns_0df760 ...
 * Callees  : 1 -> creature_update_creature_and_thing_081a2c
 ******************************************************************************/
void creature_fn_081c10(void)

{
  int extraout_ECX;
  int arg_edx;
  
  if (0 < arg_edx) {
    creature_update_creature_and_thing_081a2c();
    *(undefined2 *)(extraout_ECX + 0x17) = 8;
  }
  return;
}

/******************************************************************************
 * Function : creature_fn_081c44 (Original VA: 0x81c44, Ghidra: FUN_00081c44)
 * Prototype: void creature_fn_081c44(void);
 * Address  : 0x81c44 (Size: 41 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081c44
 * Callers  : 2 -> moodneed_update_creature_control_0522f0, torture_update_creature_control_074853
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_fn_081c44(void)

{
  bool flag;
  int camera;
  int arg_edx;
  
  if ((*(int *)(camera + 0x5c) >> 0x10 < 0) || (arg_edx < 1)) {
    flag = false;
  }
  else {
    *(short *)(camera + 0x5e) = *(short *)(camera + 0x5e) - (short)arg_edx;
    flag = true;
  }
  if (flag) {
    *(undefined2 *)(camera + 0x17) = 8; /* camera->zoom */
  }
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_081c70 (Original VA: 0x81c70, Ghidra: FUN_00081c70)
 * Prototype: uint creature_update_creature_control_081c70(void);
 * Address  : 0x81c70 (Size: 123 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> creature_fn_081cec, creature_update_creature_control_085cc4
 * Callees  : 0 -> 
 ******************************************************************************/
uint creature_update_creature_control_081c70(void)

{
  int thing;
  uint cctrl_ptr;
  uint uval;
  int arg_edx;
  
  cctrl_ptr = (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10) * 0x23) /
          100 + (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10);
  if ((*(int *)(thing + 0x5c) >> 0x10 != cctrl_ptr) && (0 < arg_edx)) {
    uval = arg_edx + (*(int *)(thing + 0x5c) >> 0x10);
    if (uval < cctrl_ptr) {
      cctrl_ptr = uval;
    }
    *(short *)(thing + 0x5e) = (short)cctrl_ptr;
    return CONCAT31((int3)(cctrl_ptr >> 8),1);
  }
  return cctrl_ptr & 0xffffff00;
}

/******************************************************************************
 * Function : creature_fn_081cec (Original VA: 0x81cec, Ghidra: FUN_00081cec)
 * Prototype: void creature_fn_081cec(void);
 * Address  : 0x81cec (Size: 20 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081cec
 * Callers  : 3 -> impset_update_creature_control_03edee, instance_update_creature_control_04a8e1, shot_update_creature_control_06db51
 * Callees  : 1 -> creature_update_creature_control_081c70
 ******************************************************************************/
void creature_fn_081cec(void)

{
  char ch;
  int camera;
  
  ch = creature_update_creature_control_081c70();
  if (ch != '\0') {
    *(undefined2 *)(camera + 0x17) = 8; /* camera->zoom */
  }
  return;
}

/******************************************************************************
 * Function : creature_fn_081d00 (Original VA: 0x81d00, Ghidra: FUN_00081d00)
 * Prototype: undefined8 creature_fn_081d00(void);
 * Address  : 0x81d00 (Size: 132 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081d00
 * Callers  : 2 -> creature_update_creature_control_081d84, move_update_creature_control_0b3dac
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 creature_fn_081d00(void)

{
  int arg_eax;
  uint uval;
  undefined4 arg_edx;
  
  if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
    uval = *(int *)(&g_bss_002f29d1 +
                    (uint)*(ushort *)(&g_data_00187b76 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c) * 2) >>
            0x10;
    if (*(int *)(&g_bss_002f29d1 +
                (uint)*(ushort *)(&g_data_00187b76 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c) * 2) >>
        0x10 < 0) {
      uval = (uint)*(ushort *)(&g_data_00187b76 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c);
    }
  }
  else {
    uval = *(int *)((int)&g_bss_002f2223 +
                    (uint)*(ushort *)(&g_data_00187b76 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c) * 2 + 2
                    ) >> 0x10;
    if ((int)uval < 0) {
      uval = (uint)*(ushort *)(&g_data_00187b76 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c);
    }
  }
  return CONCAT44(arg_edx,(uint)(*(int *)(arg_eax + 0x42) >> 0x10 == uval));
}

/******************************************************************************
 * Function : creature_update_creature_control_081d84 (Original VA: 0x81d84, Ghidra: FUN_00081d84)
 * Prototype: undefined8 creature_update_creature_control_081d84(void);
 * Address  : 0x81d84 (Size: 84 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> sound_update_creature_control_06e61e, update_state_return_type_human_0e0b1c, update_update_slab_subtile_columns_0e45c0, update_update_creature_control_0e4e0c
 * Callees  : 1 -> creature_fn_081d00
 ******************************************************************************/
undefined8 creature_update_creature_control_081d84(void)

{
  int thing;
  undefined4 uval;
  undefined4 arg_edx;
  int cctrl_ptr;
  
  cctrl_ptr = *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xce) >> 0x1f; /* thing->ccontrol_idx */
  if ((int)((*(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xce) + cctrl_ptr * -0x100) - /* thing->ccontrol_idx */
           (uint)(cctrl_ptr << 7 < 0)) >> 8 != (uint)*(byte *)(thing + 0x48)) {
    cctrl_ptr = creature_fn_081d00();
    if (cctrl_ptr != 0) {
      uval = 1;
      if (*(char *)(thing + 0x48) == '\x01') goto LAB_00081dd5;
      if (*(char *)(thing + 0x48) == '\x04') {
        return CONCAT44(arg_edx,2);
      }
    }
  }
  uval = 0;
LAB_00081dd5:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : creature_fn_081dd8 (Original VA: 0x81dd8, Ghidra: FUN_00081dd8)
 * Prototype: undefined8 creature_fn_081dd8(void);
 * Address  : 0x81dd8 (Size: 132 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081dd8
 * Callers  : 3 -> update_go_first_person_without_0de6a8, update_go_first_person_without_0e2cd0, update_go_first_person_without_0e31b8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 creature_fn_081dd8(void)

{
  int arg_eax;
  int val;
  undefined4 arg_edx;
  
  val = *(int *)(arg_eax + 0x40);
  if ((val < 0) || (0xff < val)) {
    if ((0xff < val) && (val < 0x280)) {
      val = 1;
      goto LAB_00081e49;
    }
    if ((((val < 0x280) || (0x3ff < val)) && (0x3ff < val)) && (val < 0x580)) {
      val = 1;
      goto LAB_00081e49;
    }
  }
  val = -1;
LAB_00081e49:
  if (*(int *)(arg_eax + 0x3c) >> 0x10 < 0) {
    val = -val;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : creature_fn_081e5c (Original VA: 0x81e5c, Ghidra: FUN_00081e5c)
 * Prototype: longlong creature_fn_081e5c(void);
 * Address  : 0x81e5c (Size: 31 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081e5c
 * Callers  : 4 -> impset_process_map_subtile_03b17f, impset_process_map_subtile_03bcbe, impset_update_creature_and_thing_03c91b, update_process_map_subtile_0e2a14
 * Callees  : 1 -> temple_update_player_view_state_074020
 ******************************************************************************/
longlong creature_fn_081e5c(void)

{
  int thing;
  int val;
  uint arg_edx;
  
  if (*(char *)(thing + 0x1f) == '\x04') { /* thing->class_id */
    val = temple_update_player_view_state_074020();
    if (val == 0) {
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : creature_select_thing_information_081e7c (Original VA: 0x81e7c, Ghidra: FUN_00081e7c)
 * Prototype: undefined4 creature_select_thing_information_081e7c(void);
 * Address  : 0x81e7c (Size: 47 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 1410
 * Purpose  : String 'Cannot select thing for information'
 * Callers  : 1 -> instance_fn_04b992
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 creature_select_thing_information_081e7c(void)

{
  int arg_eax;
  int arg_edx;
  
  if (*(char *)(arg_edx + 0x1f) == '\x05') {
    *(undefined2 *)(arg_eax + 0x2f) = *(undefined2 *)(arg_edx + 0x1b);
    return 1;
  }
  LbErrorLog(); /* LbErrorLog("creature.cpp", line 1410, "Cannot select thing for information") */
  return 0;
}

/******************************************************************************
 * Function : creature_fn_081eac (Original VA: 0x81eac, Ghidra: FUN_00081eac)
 * Prototype: void creature_fn_081eac(void);
 * Address  : 0x81eac (Size: 28 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081eac
 * Callers  : 4 -> comptool_computer_thing_hand_01e119, inits_update_player_view_state_04845c, instance_update_creature_and_thing_04ac70, packet_possess_thing_direct
 * Callees  : 1 -> mapwho_process_map_subtile_050ca9
 ******************************************************************************/
void creature_fn_081eac(void)

{
  byte *extraout_EDX;
  
  mapwho_process_map_subtile_050ca9();
  extraout_EDX[0x4f] = extraout_EDX[0x4f] | 1;
  *extraout_EDX = *extraout_EDX | 0x10;
  return;
}

/******************************************************************************
 * Function : creature_fn_081ec8 (Original VA: 0x81ec8, Ghidra: FUN_00081ec8)
 * Prototype: void creature_fn_081ec8(void);
 * Address  : 0x81ec8 (Size: 12 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081ec8
 * Callers  : 2 -> comptool_thing_held_computer_unconsious_01e226, effect_process_thing_entity_0248e5
 * Callees  : 1 -> mapwho_process_map_subtile_050c38
 ******************************************************************************/
void creature_fn_081ec8(void)

{
  byte *arg_eax;
  
  *arg_eax = *arg_eax & 0xef;
  arg_eax[0x4f] = arg_eax[0x4f] & 0xfe;
  mapwho_process_map_subtile_050c38();
  return;
}

/******************************************************************************
 * Function : creature_fn_081ed4 (Original VA: 0x81ed4, Ghidra: FUN_00081ed4)
 * Prototype: void creature_fn_081ed4(void);
 * Address  : 0x81ed4 (Size: 30 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081ed4
 * Callers  : 1 -> good_update_creature_control_038668
 * Callees  : 1 -> mapwho_process_map_subtile_050ca9
 ******************************************************************************/
void creature_fn_081ed4(void)

{
  int extraout_EDX;
  
  mapwho_process_map_subtile_050ca9();
  *(byte *)(extraout_EDX + 0x4f) = *(byte *)(extraout_EDX + 0x4f) | 1;
  *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) | 2;
  return;
}

/******************************************************************************
 * Function : creature_fn_081ef4 (Original VA: 0x81ef4, Ghidra: FUN_00081ef4)
 * Prototype: void creature_fn_081ef4(void);
 * Address  : 0x81ef4 (Size: 13 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x081ef4
 * Callers  : 1 -> good_update_creature_control_0386e1
 * Callees  : 1 -> mapwho_process_map_subtile_050c38
 ******************************************************************************/
void creature_fn_081ef4(void)

{
  int arg_eax;
  
  *(byte *)(arg_eax + 1) = *(byte *)(arg_eax + 1) & 0xfd;
  *(byte *)(arg_eax + 0x4f) = *(byte *)(arg_eax + 0x4f) & 0xfe;
  mapwho_process_map_subtile_050c38();
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_081f04 (Original VA: 0x81f04, Ghidra: FUN_00081f04)
 * Prototype: longlong creature_update_creature_control_081f04(void);
 * Address  : 0x81f04 (Size: 86 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> shot_update_creature_control_06d7d5, shot_update_creature_control_06db51, train_take_money_am_supposed_074f40
 * Callees  : 1 -> creature_update_creature_control_081f5c
 ******************************************************************************/
longlong creature_update_creature_control_081f04(void)

{
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(int *)(&g_bss_002e9133 +
              (uint)*(byte *)(thing + 0x1a) * 0xe6 + (uint)*(byte *)(cctrl_ptr + 0x23) * 4) * 0x100 <=
      *(int *)(cctrl_ptr + 0x24)) {
    *(int *)(cctrl_ptr + 0x24) =
         *(int *)(cctrl_ptr + 0x24) +
         *(int *)(&g_bss_002e9133 +
                 (uint)*(byte *)(thing + 0x1a) * 0xe6 + (uint)*(byte *)(cctrl_ptr + 0x23) * 4) * -0x100
    ;
    creature_update_creature_control_081f5c();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : creature_update_creature_control_081f5c (Original VA: 0x81f5c, Ghidra: FUN_00081f5c)
 * Prototype: void creature_update_creature_control_081f5c(void);
 * Address  : 0x81f5c (Size: 107 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> specials_update_creature_and_thing_070c96, creature_update_creature_control_081f04
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_update_creature_control_081f5c(void)

{
  int thing;
  
  if (((int)(uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < /* thing->ccontrol_idx */
       (int)(&g_bss_002e0fd8)[(*(int *)(thing + 3) >> 0x18) * 0x542 + (uint)*(byte *)(thing + 0x1a)]
      ) && ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < 9 || /* thing->ccontrol_idx */
            (*(short *)(&g_bss_002e915c + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0)))) {
    *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) = /* thing->ccontrol_idx */
         *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) | 0x40; /* thing->ccontrol_idx */
  }
  return;
}

/******************************************************************************
 * Function : creature_could_create_creature_081fec (Original VA: 0x81fec, Ghidra: FUN_00081fec)
 * Prototype: undefined8 creature_could_create_creature_081fec(void);
 * Address  : 0x81fec (Size: 535 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 1549
 * Purpose  : String 'COULD NOT CREATE CREATURE'
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 8 -> inits_told_you_so_create_043bb3, person_external_change_state_but_064a5f, creature_allocate_light_new_hero_080a94, creature_update_creature_control_080fbc, creature_update_creature_control_082204, creature_update_player_view_state_085954, creature_how_hero_have_tend_08608c, LbErrorLog
 ******************************************************************************/
undefined8 creature_could_create_creature_081fec(void)

{
  int thing;
  undefined4 uval;
  int thing_ptr;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  uint uval_2;
  undefined4 unaff_EDI;
  
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(byte *)(thing_ptr + 0xad) & 0x40) != 0) {
    *(byte *)(thing_ptr + 0xad) = *(byte *)(thing_ptr + 0xad) & 0xbf;
    uval_2 = *(int *)(thing + 3) >> 0x18;
    if (uval_2 != g_neutral_player_number) {
      *(uint *)(&g_bss_002e1431 + uval_2 * 0x1508) =
           *(int *)(&g_bss_002e1431 + uval_2 * 0x1508) -
           (uint)(byte)(&g_bss_002ebaf8)
                       [(uint)*(byte *)(thing + 0x1a) * 10 +
                        (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23)]; /* thing->ccontrol_idx */
    }
    if (*(byte *)(thing_ptr + 0x23) < 9) {
      creature_update_creature_control_082204();
      uval = 1;
      goto LAB_000821fc;
    }
    if (*(short *)(&g_bss_002e915c + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0) {
      thing_ptr = inits_told_you_so_create_043bb3();
      if (thing_ptr != 0) {
        creature_update_creature_control_082204();
        *(short *)(thing_ptr + 0x5e) =
             (short)((int)((*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6) >> 0x10)
                           * (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * /* thing->ccontrol_idx */
                          0x23) / 100) +
             (short)((uint)*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6) >> 0x10);
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x282) = 0x32; /* thing->ccontrol_idx */
        person_external_change_state_but_064a5f();
        val = creature_update_player_view_state_085954();
        thing_ptr = extraout_ECX;
        if (val != 0) {
          creature_update_creature_control_080fbc();
          creature_allocate_light_new_hero_080a94();
          thing_ptr = extraout_ECX_00;
        }
        val = (*(int *)(thing + 3) >> 0x18) * 0x4ef;
        if (*(short *)(thing + 0x1b) == *(short *)((int)&g_bss_0019d0f7 + val)) { /* thing->index_or_angle */
          *(undefined2 *)((int)&g_bss_0019d0f7 + val) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          *(undefined4 *)(&g_bss_0019d0f9 + (*(int *)(thing + 3) >> 0x18) * 0x4ef) =
               *(undefined4 *)(thing_ptr + 9);
        }
        creature_how_hero_have_tend_08608c(0,1);
        return CONCAT44(unaff_EDI,0xffffffff);
      }
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 1549, "COULD NOT CREATE CREATURE") */
    }
  }
  uval = 0;
LAB_000821fc:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : creature_update_creature_control_082204 (Original VA: 0x82204, Ghidra: FUN_00082204)
 * Prototype: void creature_update_creature_control_082204(void);
 * Address  : 0x82204 (Size: 518 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 6 -> inits_told_you_so_create_043bb3, process_players_dungeon_command_packet, specials_update_creature_and_thing_070d86, creature_create_dead_thing_07fac8, creature_could_create_creature_081fec, creature_update_creature_control_08240c
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_update_creature_control_082204(void)

{
  byte cctrl_ptr;
  int cctrl_ptr_2;
  int val;
  int thing;
  uint uval;
  int arg_edx;
  int val_2;
  
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (arg_edx < 0) {
    arg_edx = 0;
  }
  else if (9 < arg_edx) {
    arg_edx = 9;
  }
  cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23); /* thing->ccontrol_idx */
  val_2 = *(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6);
  val = *(int *)(thing + 0x5c);
  *(char *)(cctrl_ptr_2 + 0x23) = (char)arg_edx;
  *(short *)(cctrl_ptr_2 + 0xc6) =
       (short)((int)((*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10) *
                     (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
              100) +
       (short)((uint)*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10);
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 2) == 0) { /* thing->ccontrol_idx */
    *(short *)(thing + 0x46) =
         (short)(((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 300) / 0x14) /* thing->ccontrol_idx */
         + 300;
  }
  else {
    *(undefined2 *)(thing + 0x46) = 300;
  }
  *(short *)(thing + 0x5e) =
       (short)(((val >> 0x10) *
               ((int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                      (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10) *
                     0x23) / 100 +
               (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10))) /
              ((val_2 >> 0x10) + (int)((val_2 >> 0x10) * (uint)cctrl_ptr * 0x23) / 100));
  uval = 0;
  do {
    val_2 = (uint)*(byte *)(thing + 0x1a) * 0xe6 + uval;
    if (((&g_bss_002e918d)[val_2] != '\0') &&
       ((uint)(byte)(&g_bss_002e9197)[val_2] <= *(byte *)(cctrl_ptr_2 + 0x23) + 1)) {
      *(undefined1 *)((byte)(&g_bss_002e918d)[val_2] + 0x19e + cctrl_ptr_2) = 1;
    }
    uval = uval + 1;
  } while (uval < 10);
  uval = *(int *)(thing + 3) >> 0x18;
  if (uval != g_neutral_player_number) {
    *(uint *)(&g_bss_002e1431 + uval * 0x1508) =
         *(int *)(&g_bss_002e1431 + uval * 0x1508) +
         (uint)(byte)(&g_bss_002ebaf8)
                     [(uint)*(byte *)(cctrl_ptr_2 + 0x23) + (uint)*(byte *)(thing + 0x1a) * 10];
  }
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_08240c (Original VA: 0x8240c, Ghidra: FUN_0008240c)
 * Prototype: void creature_update_creature_control_08240c(void);
 * Address  : 0x8240c (Size: 92 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 8 -> file_buff_struct_num_02ab14, inits_update_player_dungeon_040832, prison_couldn_create_skeleton_prison_066016, script_update_creature_and_thing_068788, script_process_thing_entity_0689a7, specials_update_player_view_state_070a3c, temple_could_create_creature_07317c, torture_couldn_create_ghost_torture_074c0d
 * Callees  : 1 -> creature_update_creature_control_082204
 ******************************************************************************/
void creature_update_creature_control_08240c(void)

{
  int thing;
  
  creature_update_creature_control_082204();
  *(short *)(thing + 0x5e) =
       (short)((longlong)
               (int)((*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10) *
                     (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
              100) +
       (short)((uint)*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10);
  return;
}

/******************************************************************************
 * Function : creature_update_player_dungeon_082468 (Original VA: 0x82468, Ghidra: FUN_00082468)
 * Prototype: void creature_update_player_dungeon_082468(void);
 * Address  : 0x82468 (Size: 116 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_update_player_dungeon_082468(void)

{
  undefined2 uval;
  short short_val;
  int arg_eax;
  int dungeon_off;
  byte arg_dl;
  
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  if (arg_dl != 0) {
    if (arg_dl < 2) {
      uval = *(undefined2 *)(&g_bss_002e0591 + dungeon_off);
      (&g_bss_002e0591)[dungeon_off] = (&g_bss_002e0591)[dungeon_off] & 0xfe;
      *(ushort *)(&g_bss_002e0591 + dungeon_off) =
           *(ushort *)(&g_bss_002e0591 + dungeon_off) | (ushort)((byte)uval & 1 ^ 1);
      return;
    }
    if (arg_dl == 2) {
      short_val = *(short *)(&g_bss_002e0591 + dungeon_off);
      (&g_bss_002e0591)[dungeon_off] = (&g_bss_002e0591)[dungeon_off] & 0xfd;
      *(ushort *)(&g_bss_002e0591 + dungeon_off) =
           *(ushort *)(&g_bss_002e0591 + dungeon_off) |
           (ushort)(byte)((byte)((ushort)(short_val << 0xe) >> 0xf) ^ 1) * 2;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_0824dc (Original VA: 0x824dc, Ghidra: FUN_000824dc)
 * Prototype: void creature_update_creature_control_0824dc(void);
 * Address  : 0x824dc (Size: 378 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> instance_update_creature_and_thing_04af38
 * Callees  : 6 -> anger_fn_010434, instance_update_creature_control_049dd9, person_external_change_state_but_064a5f, sound_roll_unsynced_random_06edb9, creature_update_creature_and_thing_081a2c, creature_update_creature_control_085890
 ******************************************************************************/
void creature_update_creature_control_0824dc(void)

{
  int cctrl_ptr;
  undefined2 uval;
  int val;
  int arg_edx;
  
  val = (uint)*(byte *)(arg_edx + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  anger_fn_010434();
  if (((&g_bss_002e91df)[val] != '\0') &&
     (0 < ((*(int *)(&g_bss_002e9112 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6) >> 0x10) +
          (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x23) *
                (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6) >> 0x10) * 0x23) /
          100) / (int)(uint)(byte)(&g_bss_002e91df)[val])) {
    creature_update_creature_and_thing_081a2c();
    *(undefined2 *)(arg_edx + 0x17) = 8;
  }
  if (*(short *)(cctrl_ptr + 0x21) == 0) {
    *(undefined2 *)(cctrl_ptr + 0x21) = g_bss_002eaf65;
    uval = creature_update_creature_control_085890();
    *(undefined2 *)(cctrl_ptr + 0xc4) = uval;
  }
  else {
    *(undefined2 *)(cctrl_ptr + 0x21) = g_bss_002eaf65;
  }
  if (*(char *)(arg_edx + 7) != 'B') {
    instance_update_creature_control_049dd9();
    *(undefined1 *)(cctrl_ptr + 0x27d) = *(undefined1 *)(arg_edx + 7);
    *(undefined1 *)(cctrl_ptr + 0x27e) = *(undefined1 *)(arg_edx + 8);
    if (*(char *)(arg_edx + 7) == '\x1a') {
      anger_fn_010434();
    }
    person_external_change_state_but_064a5f();
  }
  *(undefined1 *)(cctrl_ptr + 0xb1) = 6;
  *(char *)(cctrl_ptr + 0x27f) = *(char *)(cctrl_ptr + 0xb1) + '\f';
  sound_roll_unsynced_random_06edb9();
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_0826a0 (Original VA: 0x826a0, Ghidra: FUN_000826a0)
 * Prototype: void creature_update_creature_control_0826a0(void);
 * Address  : 0x826a0 (Size: 109 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> person_update_creature_control_064174, person_update_slab_subtile_columns_064279
 * Callees  : 2 -> person_fn_063b6d, creature_thing_dragged_something_084e8c
 ******************************************************************************/
void creature_update_creature_control_0826a0(void)

{
  int thing;
  
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 0xfb; /* thing->ccontrol_idx */
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 0xfd; /* thing->ccontrol_idx */
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x280) = 0; /* thing->ccontrol_idx */
  if ((*(byte *)(thing + 1) & 1) != 0) {
    creature_thing_dragged_something_084e8c();
  }
  person_fn_063b6d();
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_082710 (Original VA: 0x82710, Ghidra: FUN_00082710)
 * Prototype: void creature_update_creature_control_082710(void);
 * Address  : 0x82710 (Size: 100 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> person_fn_064e63
 * Callees  : 1 -> creature_thing_dragged_something_084e8c
 ******************************************************************************/
void creature_update_creature_control_082710(void)

{
  int thing;
  
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 0xfb; /* thing->ccontrol_idx */
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 0xfd; /* thing->ccontrol_idx */
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x280) = 0; /* thing->ccontrol_idx */
  if ((*(byte *)(thing + 1) & 1) != 0) {
    creature_thing_dragged_something_084e8c();
  }
  return;
}

/******************************************************************************
 * Function : creature_fn_082774 (Original VA: 0x82774, Ghidra: FUN_00082774)
 * Prototype: undefined1 creature_fn_082774(void);
 * Address  : 0x82774 (Size: 135 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x082774
 * Callers  : 19 -> angtool_process_thing_entity_011be9, comptool_update_creature_and_thing_02002c, good_update_creature_and_thing_038989, good_process_thing_entity_038b05, good_update_creature_control_038b5e, good_update_creature_and_thing_038cba, good_update_creature_and_thing_038dcb, person_update_creature_control_064d00 ...
 * Callees  : 2 -> navigate_path_init8_0c241c, routes_fn_0d5ac0
 ******************************************************************************/
undefined1 creature_fn_082774(void)

{
  ushort uval;
  int extraout_ECX;
  char arg_bl;
  undefined8 uval_2;
  undefined1 local_814;
  
  uval_2 = routes_fn_0d5ac0();
  g_bss_003d9528 = (undefined4)uval_2;
  if (arg_bl == '\0') {
    g_bss_003d9524 = *(int *)(extraout_ECX + 3) >> 0x18;
    uval = *(ushort *)(extraout_ECX + 0x56);
  }
  else {
    uval = *(ushort *)(extraout_ECX + 0x56);
    g_bss_003d9524 = -1;
  }
  navigate_path_init8_0c241c(*(undefined2 *)((int)((ulonglong)uval_2 >> 0x20) + 2),0xfffffffe,
               (&g_data_00190d3d)[uval] + -1);
  g_bss_003d9528 = 0;
  return local_814;
}

/******************************************************************************
 * Function : creature_fn_0827fc (Original VA: 0x827fc, Ghidra: FUN_000827fc)
 * Prototype: bool creature_fn_0827fc(void);
 * Address  : 0x827fc (Size: 43 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x0827fc
 * Callers  : 18 -> angtool_fn_011606, angtool_update_creature_control_0119bc, angtool_update_creature_control_011a81, evil_update_creature_control_028d85, evil_do_this_destroy_room_029254, good_process_thing_entity_038f2b, good_update_creature_control_038faa, impset_stack_type_03d3f3 ...
 * Callees  : 1 -> ariadne_update_creature_control_011e00
 ******************************************************************************/
bool creature_fn_0827fc(void)

{
  char ch;
  
  ch = ariadne_update_creature_control_011e00();
  return ch == '\0';
}

/******************************************************************************
 * Function : creature_process_map_subtile_082828 (Original VA: 0x82828, Ghidra: FUN_00082828)
 * Prototype: undefined4 creature_process_map_subtile_082828(void);
 * Address  : 0x82828 (Size: 476 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 8 -> dungeon_process_map_subtile_023ad0, inits_update_slab_subtile_columns_040a20, magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e, torture_update_slab_subtile_columns_074038, creature_process_slabmap_tile_082c30, creature_update_creature_and_thing_082cac, room_lair_thinks_it_belongs_0d08a8, slab_process_slabmap_tile_0da7bc
 * Callees  : 1 -> panmap_door_flagged_position_063122
 ******************************************************************************/
undefined4 creature_process_map_subtile_082828(void)

{
  int val;
  byte arg_al;
  uint uval;
  int arg_edx;
  uint uval_2;
  int arg_ebx;
  uint uval_3;
  
  if (arg_al != g_neutral_player_number) {
    val = (arg_ebx * 0x300 + arg_edx * 3) * 5;
    uval_3 = *(uint *)((int)&g_map_subtiles + val + 1);
    uval_2 = (uint)(byte)('\x01' << (arg_al & 0x1f));
    uval = uval_3 >> 0x1c;
    if ((uval & uval_2) == 0) {
      uval_3 = uval_3 & 0xfffffff;
      *(uint *)((int)&g_map_subtiles + val + 1) = uval_3;
      *(uint *)((int)&g_map_subtiles + val + 1) = uval_3 | (uval | uval_2) << 0x1c;
      uval_3 = *(uint *)((int)&g_bss_00279209 + val);
      *(uint *)((int)&g_bss_00279209 + val) = uval_3 & 0xfffffff;
      *(uint *)((int)&g_bss_00279209 + val) =
           *(uint *)((int)&g_bss_00279209 + val) | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_0027920e + val);
      uval = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_0027920e + val) = uval;
      *(uint *)(&g_bss_0027920e + val) = uval | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_00279704 + val);
      uval = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_00279704 + val) = uval;
      *(uint *)(&g_bss_00279704 + val) = uval | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_00279709 + val);
      uval = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_00279709 + val) = uval;
      *(uint *)(&g_bss_00279709 + val) = uval | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_0027970e + val);
      uval = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_0027970e + val) = uval;
      *(uint *)(&g_bss_0027970e + val) = uval | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_00279c04 + val);
      *(uint *)(&g_bss_00279c04 + val) = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_00279c04 + val) =
           *(uint *)(&g_bss_00279c04 + val) | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_00279c09 + val);
      uval = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_00279c09 + val) = uval;
      *(uint *)(&g_bss_00279c09 + val) = uval | (uval_3 >> 0x1c | uval_2) << 0x1c;
      uval_3 = *(uint *)(&g_bss_00279c0e + val);
      uval = uval_3 & 0xfffffff;
      *(uint *)(&g_bss_00279c0e + val) = uval;
      *(uint *)(&g_bss_00279c0e + val) = uval | (uval_2 | uval_3 >> 0x1c) << 0x1c;
      panmap_door_flagged_position_063122();
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : creature_process_map_subtile_082a04 (Original VA: 0x82a04, Ghidra: FUN_00082a04)
 * Prototype: void creature_process_map_subtile_082a04(void);
 * Address  : 0x82a04 (Size: 274 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> build_process_map_subtile_014d45
 * Callees  : 1 -> panmap_door_flagged_position_063122
 ******************************************************************************/
void creature_process_map_subtile_082a04(void)

{
  uint *word_ptr;
  byte *byte_ptr;
  int val;
  byte arg_al;
  int arg_edx;
  uint uval;
  int arg_ebx;
  
  val = (arg_ebx * 0x300 + arg_edx * 3) * 5;
  uval = *(uint *)((int)&g_map_subtiles + val + 1);
  if (uval >> 0x1c != (uint)arg_al) {
    *(uint *)((int)&g_map_subtiles + val + 1) = uval & 0xfffffff;
    uval = (uint)arg_al << 0x1c;
    word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
    *word_ptr = *word_ptr | uval;
    byte_ptr = (byte *)((int)&g_bss_00279209 + val + 3);
    *byte_ptr = *byte_ptr & 0xf;
    *(uint *)((int)&g_bss_00279209 + val) = *(uint *)((int)&g_bss_00279209 + val) | uval;
    (&g_bss_00279211)[val] = (&g_bss_00279211)[val] & 0xf;
    *(uint *)(&g_bss_0027920e + val) = *(uint *)(&g_bss_0027920e + val) | uval;
    (&g_bss_00279707)[val] = (&g_bss_00279707)[val] & 0xf;
    *(uint *)(&g_bss_00279704 + val) = *(uint *)(&g_bss_00279704 + val) | uval;
    (&g_bss_0027970c)[val] = (&g_bss_0027970c)[val] & 0xf;
    *(uint *)(&g_bss_00279709 + val) = *(uint *)(&g_bss_00279709 + val) | uval;
    (&g_bss_00279711)[val] = (&g_bss_00279711)[val] & 0xf;
    *(uint *)(&g_bss_0027970e + val) = *(uint *)(&g_bss_0027970e + val) | uval;
    (&g_bss_00279c07)[val] = (&g_bss_00279c07)[val] & 0xf;
    *(uint *)(&g_bss_00279c04 + val) = *(uint *)(&g_bss_00279c04 + val) | uval;
    (&g_bss_00279c0c)[val] = (&g_bss_00279c0c)[val] & 0xf;
    *(uint *)(&g_bss_00279c09 + val) = *(uint *)(&g_bss_00279c09 + val) | uval;
    (&g_bss_00279c11)[val] = (&g_bss_00279c11)[val] & 0xf;
    *(uint *)(&g_bss_00279c0e + val) = *(uint *)(&g_bss_00279c0e + val) | uval;
    panmap_door_flagged_position_063122();
  }
  return;
}

/******************************************************************************
 * Function : creature_process_slabmap_tile_082c30 (Original VA: 0x82c30, Ghidra: FUN_00082c30)
 * Prototype: undefined4 creature_process_slabmap_tile_082c30(void);
 * Address  : 0x82c30 (Size: 122 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 2 -> dungeon_update_slab_subtile_columns_023de2, creature_process_map_subtile_082828
 ******************************************************************************/
undefined4 creature_process_slabmap_tile_082c30(void)

{
  char ch;
  char extraout_CL;
  int arg_edx;
  int arg_ebx;
  
  dungeon_update_slab_subtile_columns_023de2();
  if (((extraout_CL != '\0') ||
      (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] * 0x16] & 0x10)
       != 0)) && (ch = creature_process_map_subtile_082828(), ch != '\0')) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_082cac (Original VA: 0x82cac, Ghidra: FUN_00082cac)
 * Prototype: void creature_update_creature_and_thing_082cac(void);
 * Address  : 0x82cac (Size: 3625 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 7 -> combobj_door_combat_but_should_016fab, compturn_process_map_subtile_022660, instance_update_creature_control_04a0d6, person_update_creature_control_063dd3, shot_update_slab_subtile_columns_06c681, spell_update_creature_control_071416, move_update_creature_control_0b3dac
 * Callees  : 6 -> dungeon_update_slab_subtile_columns_023de2, event_illegal_event_number_created_027390, person_update_creature_control_063a25, creature_process_map_subtile_082828, move_process_map_subtile_0b3788, get_3d_angles_between_positions
 ******************************************************************************/
void creature_update_creature_and_thing_082cac(void)

{
  ushort cctrl_ptr;
  char ch;
  int arg_eax;
  undefined4 uval;
  int thing_ptr;
  uint3 uval_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  uint extraout_ECX_13;
  uint extraout_ECX_14;
  int arg_edx;
  uint slab_coord;
  int val;
  int subtile_y;
  int val_2;
  int val_3;
  undefined2 *thing_ptr_2;
  uint auStack_e8 [2];
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  int local_d4;
  int local_a8 [37];
  byte local_14 [4];
  
  thing_ptr_2 = &local_e0;
  if (*(int *)(arg_eax + 3) >> 0x18 < (int)(uint)g_bss_002eb542) {
    local_d4._0_1_ = (undefined1)arg_edx;
    local_e0 = CONCAT11((undefined1)local_d4,0x80);
    local_de = CONCAT11((char)subtile_y,0x80);
    local_d4 = arg_edx;
    local_dc = move_process_map_subtile_0b3788();
    local_d4 = (&g_subtile_to_slab_lut)[local_d4];
    thing_ptr = (&g_subtile_to_slab_lut)[subtile_y];
    val_2 = local_d4 + thing_ptr * 0x55;
    cctrl_ptr = g_bss_002ebaf2;
    if (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val_2 * 6] * 0x16] & 0x69) == 0) {
      while (cctrl_ptr != 0) {
        thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
        slab_coord = *(int *)((int)thing_ptr_2 + 0x38) - (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] >> 0x1f;
        if (((int)((*(int *)((int)thing_ptr_2 + 0x38) - (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] ^ slab_coord)
                  - slab_coord) <= *(int *)((int)thing_ptr_2 + 0x44)) &&
           (slab_coord = *(int *)((int)thing_ptr_2 + 0x3c) - (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] >> 0x1f
           , (int)((*(int *)((int)thing_ptr_2 + 0x3c) - (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] ^ slab_coord
                   ) - slab_coord) <= *(int *)((int)thing_ptr_2 + 0x44))) {
          *(undefined4 *)((int)thing_ptr_2 + -4) = 0x8305b;
          ch = get_3d_angles_between_positions();
          if (ch != '\0') {
            *(undefined4 *)((int)thing_ptr_2 + -4) = 0x83070;
            person_update_creature_control_063a25();
            if (*(byte *)((int)thing_ptr_2 + 0xcc) != g_neutral_player_number) {
              *(uint *)((int)thing_ptr_2 + 0x48) = (uint)*(byte *)((int)thing_ptr_2 + 0xcc) * 0x1508;
              val_2 = (uint)*(byte *)(thing_ptr + 0x1a) + *(int *)((int)thing_ptr_2 + 0x48);
              if (((byte)(&g_bss_002e0ea3)[val_2] < 2) && ((&g_bss_002e1a12)[val_2] == '\0')) {
                *(uint *)((int)thing_ptr_2 + -4) = (uint)*(ushort *)(thing_ptr + 0x1b); /* thing->index_or_angle */
                *(undefined4 *)((int)thing_ptr_2 + -8) = 0x830d7;
                event_illegal_event_number_created_027390();
                (&g_bss_002e1a12)[(uint)*(byte *)(thing_ptr + 0x1a) + *(int *)((int)thing_ptr_2 + 0x44)] = 1;
                thing_ptr_2 = (undefined2 *)((int)thing_ptr_2 + -4);
              }
            }
          }
        }
      }
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0x83100;
      dungeon_update_slab_subtile_columns_023de2();
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0x83112;
      creature_process_map_subtile_082828();
      thing_ptr = *(int *)((int)thing_ptr_2 + 200);
      *(int *)((int)thing_ptr_2 + 0x14) = thing_ptr;
      val_2 = -thing_ptr;
      *(int *)((int)thing_ptr_2 + 0x14) = val_2;
      if (-thing_ptr == thing_ptr || SBORROW4(val_2,thing_ptr) != thing_ptr * -2 < 0) {
        *(int *)((int)thing_ptr_2 + 0x4c) = thing_ptr << 8;
        *(int *)((int)thing_ptr_2 + 0xa4) = val_2 + *(int *)((int)thing_ptr_2 + 0xc);
        *(int *)((int)thing_ptr_2 + 0xa8) = thing_ptr * -0x100;
        do {
          if ((-1 < *(int *)((int)thing_ptr_2 + 0xa4)) && (*(int *)((int)thing_ptr_2 + 0xa4) < 0x55)) {
            *(undefined4 *)((int)thing_ptr_2 + 0x24) = 0x80;
            *(undefined4 *)((int)thing_ptr_2 + 0x30) = 0;
            *(undefined4 *)((int)thing_ptr_2 + 0x34) = 0;
            *(undefined4 *)((int)thing_ptr_2 + 0x28) = 0;
            slab_coord = 0x101;
            *(int *)((int)thing_ptr_2 + 0x1c) =
                 *(int *)((int)thing_ptr_2 + 0xa8) / *(int *)((int)thing_ptr_2 + 200);
            if (0 < *(int *)((int)thing_ptr_2 + 0x4c)) {
              do {
                if (((char)slab_coord == '\0') && ((char)(slab_coord >> 8) == '\0')) break;
                thing_ptr = *(int *)((int)thing_ptr_2 + 0x24);
                *(int *)((int)thing_ptr_2 + 0x24) = thing_ptr + *(int *)((int)thing_ptr_2 + 0x1c);
                *(int *)((int)thing_ptr_2 + 0x2c) = thing_ptr + *(int *)((int)thing_ptr_2 + 0x1c) >> 8;
                val_2 = *(int *)((int)thing_ptr_2 + 0x28) + 0x100 >> 8;
                thing_ptr = *(int *)((int)thing_ptr_2 + 0x10) - val_2;
                *(int *)((int)thing_ptr_2 + 0x28) = *(int *)((int)thing_ptr_2 + 0x28) + 0x100;
                if ((-1 < thing_ptr) && (*(int *)((int)thing_ptr_2 + 0x10) + val_2 < 0x55)) {
                  if ((char)slab_coord != '\0') {
                    val = thing_ptr * 0x55 +
                            *(int *)((int)thing_ptr_2 + 0xc) + *(int *)((int)thing_ptr_2 + 0x2c);
                    thing_ptr = (*(int *)((int)thing_ptr_2 + 0xc) + *(int *)((int)thing_ptr_2 + 0x2c) +
                            (thing_ptr + 1) * 0x55) * 6;
                    uval_2 = (uint3)(slab_coord >> 8);
                    if (*(int *)((int)thing_ptr_2 + 0x14) < 0) {
                      if ((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(val + 1) * 6] * 0x16] &
                           0x69) != 0) &&
                         (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[thing_ptr] * 0x16] & 0x69) != 0))
                      {
                        slab_coord = (uint)uval_2 << 8;
                        *(undefined4 *)((int)thing_ptr_2 + 0x30) = 1;
                      }
                    }
                    else if (((0 < *(int *)((int)thing_ptr_2 + 0x14)) &&
                             (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(val + -1) * 6] * 0x16]
                              & 0x69) != 0)) &&
                            (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[thing_ptr] * 0x16] & 0x69) !=
                             0)) {
                      slab_coord = (uint)uval_2 << 8;
                      *(undefined4 *)((int)thing_ptr_2 + 0x30) = 1;
                    }
                    thing_ptr = *(int *)((int)thing_ptr_2 + 0x10) - val_2;
                    *(int *)((int)thing_ptr_2 + 0x98) =
                         (thing_ptr * 0x55 +
                         *(int *)((int)thing_ptr_2 + 0xc) + *(int *)((int)thing_ptr_2 + 0x2c)) * 6;
                    if ((char)slab_coord == '\0') {
                      if ((*(int *)((int)thing_ptr_2 + 0x30) != 0) &&
                         (*(undefined4 *)((int)thing_ptr_2 + 0x30) = 0,
                         ((&g_data_001921c6)
                          [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0x98)] * 0x16] & 0x20
                         ) != 0)) {
                        *(int *)((int)thing_ptr_2 + 0x58) = arg_eax;
                        *(int *)((int)thing_ptr_2 + 0x5c) = thing_ptr;
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x83393;
                        dungeon_update_slab_subtile_columns_023de2();
                        if (((char)extraout_ECX_01 != '\0') ||
                           (slab_coord = extraout_ECX_01,
                           ((&g_data_001921c6)
                            [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0x98)] * 0x16] &
                           0x10) != 0)) {
                          *(undefined4 *)((int)thing_ptr_2 + -4) = 0x833c8;
                          creature_process_map_subtile_082828();
                          slab_coord = extraout_ECX_02;
                        }
                      }
                    }
                    else {
                      *(int *)((int)thing_ptr_2 + 0x50) = arg_eax;
                      *(int *)((int)thing_ptr_2 + 0x54) = thing_ptr;
                      *(undefined4 *)((int)thing_ptr_2 + -4) = 0x832ea;
                      dungeon_update_slab_subtile_columns_023de2();
                      if (((char)extraout_ECX != '\0') ||
                         (slab_coord = extraout_ECX,
                         ((&g_data_001921c6)
                          [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0x98)] * 0x16] & 0x10
                         ) != 0)) {
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x8331f;
                        creature_process_map_subtile_082828();
                        slab_coord = extraout_ECX_00;
                      }
                      if (((&g_data_001921c6)
                           [(uint)(byte)(&g_slabmap_base)
                                        [(*(int *)((int)thing_ptr_2 + 0xc) +
                                          *(int *)((int)thing_ptr_2 + 0x2c) +
                                         (*(int *)((int)thing_ptr_2 + 0x10) - val_2) * 0x55) * 6] * 0x16
                           ] & 0x69) != 0) {
                        slab_coord = slab_coord & 0xffffff00;
                      }
                    }
                  }
                  if ((char)(slab_coord >> 8) != '\0') {
                    thing_ptr = (*(int *)((int)thing_ptr_2 + 0x10) + val_2) * 0x55 +
                            *(int *)((int)thing_ptr_2 + 0xc) + *(int *)((int)thing_ptr_2 + 0x2c);
                    val = (*(int *)((int)thing_ptr_2 + 0xc) + *(int *)((int)thing_ptr_2 + 0x2c) +
                            (*(int *)((int)thing_ptr_2 + 0x10) + val_2 + -1) * 0x55) * 6;
                    if (*(int *)((int)thing_ptr_2 + 0x14) < 0) {
                      if ((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x69) != 0)
                         && (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(thing_ptr + 1) * 6] * 0x16] &
                             0x69) != 0)) {
                        slab_coord = slab_coord & 0xff;
                        *(undefined4 *)((int)thing_ptr_2 + 0x34) = 1;
                      }
                    }
                    else if (((0 < *(int *)((int)thing_ptr_2 + 0x14)) &&
                             (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x69) !=
                              0)) && (((&g_data_001921c6)
                                       [(uint)(byte)(&g_slabmap_base)[(thing_ptr + -1) * 6] * 0x16] & 0x69
                                      ) != 0)) {
                      slab_coord = slab_coord & 0xff;
                      *(undefined4 *)((int)thing_ptr_2 + 0x34) = 1;
                    }
                    thing_ptr = *(int *)((int)thing_ptr_2 + 0xc) + *(int *)((int)thing_ptr_2 + 0x2c);
                    val = ((*(int *)((int)thing_ptr_2 + 0x10) + val_2) * 0x55 + thing_ptr) * 6;
                    if ((char)(slab_coord >> 8) == '\0') {
                      if ((*(int *)((int)thing_ptr_2 + 0x34) != 0) &&
                         (*(undefined4 *)((int)thing_ptr_2 + 0x34) = 0,
                         ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x20) != 0))
                      {
                        *(int *)((int)thing_ptr_2 + 0x6c) = arg_eax;
                        *(int *)((int)thing_ptr_2 + 0x70) = thing_ptr;
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x8353c;
                        dungeon_update_slab_subtile_columns_023de2();
                        if (((char)(extraout_ECX_05 >> 8) != '\0') ||
                           (slab_coord = extraout_ECX_05,
                           ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x10) != 0)
                           ) {
                          *(undefined4 *)((int)thing_ptr_2 + -4) = 0x8356a;
                          creature_process_map_subtile_082828();
                          slab_coord = extraout_ECX_06;
                        }
                      }
                    }
                    else {
                      *(int *)((int)thing_ptr_2 + 0x60) = arg_eax;
                      *(int *)((int)thing_ptr_2 + 100) = thing_ptr; /* thing->ccontrol_idx */
                      *(int *)((int)thing_ptr_2 + 0x68) = *(int *)((int)thing_ptr_2 + 0x10) + val_2;
                      *(undefined4 *)((int)thing_ptr_2 + -4) = 0x834aa;
                      dungeon_update_slab_subtile_columns_023de2();
                      if (((char)(extraout_ECX_03 >> 8) != '\0') ||
                         (slab_coord = extraout_ECX_03,
                         ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x10) != 0))
                      {
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x834da;
                        creature_process_map_subtile_082828();
                        slab_coord = extraout_ECX_04;
                      }
                      if (((&g_data_001921c6)
                           [(uint)(byte)(&g_slabmap_base)
                                        [(*(int *)((int)thing_ptr_2 + 0xc) +
                                          *(int *)((int)thing_ptr_2 + 0x2c) +
                                         (val_2 + *(int *)((int)thing_ptr_2 + 0x10)) * 0x55) * 6] * 0x16
                           ] & 0x69) != 0) {
                        slab_coord = slab_coord & 0xff;
                      }
                    }
                  }
                }
              } while (*(int *)((int)thing_ptr_2 + 0x28) < *(int *)((int)thing_ptr_2 + 0x4c));
            }
          }
          thing_ptr = *(int *)((int)thing_ptr_2 + 0x14);
          *(int *)((int)thing_ptr_2 + 0xa4) = *(int *)((int)thing_ptr_2 + 0xa4) + 1;
          *(int *)((int)thing_ptr_2 + 0xa8) = *(int *)((int)thing_ptr_2 + 0xa8) + 0x100;
          *(int *)((int)thing_ptr_2 + 0x14) = thing_ptr + 1;
        } while (thing_ptr + 1 <= *(int *)((int)thing_ptr_2 + 200));
      }
      thing_ptr = *(int *)((int)thing_ptr_2 + 200);
      *(int *)((int)thing_ptr_2 + 0x18) = thing_ptr;
      val_2 = -thing_ptr;
      *(int *)((int)thing_ptr_2 + 0x18) = val_2;
      if (-thing_ptr == thing_ptr || SBORROW4(val_2,thing_ptr) != thing_ptr * -2 < 0) {
        *(int *)((int)thing_ptr_2 + 0x74) = thing_ptr << 8;
        *(int *)((int)thing_ptr_2 + 0xac) = val_2 + *(int *)((int)thing_ptr_2 + 0x10);
        *(int *)((int)thing_ptr_2 + 0xb0) = thing_ptr * -0x100;
        do {
          if ((-1 < *(int *)((int)thing_ptr_2 + 0xac)) && (*(int *)((int)thing_ptr_2 + 0xac) < 0x55)) {
            *(undefined4 *)((int)thing_ptr_2 + 0xb8) = 0x80;
            slab_coord = 0x101;
            *(int *)((int)thing_ptr_2 + 0x20) = /* thing->model */
                 *(int *)((int)thing_ptr_2 + 0xb0) / *(int *)((int)thing_ptr_2 + 200);
            *(undefined4 *)((int)thing_ptr_2 + 0xc0) = 0;
            *(undefined4 *)((int)thing_ptr_2 + 0xc4) = 0;
            *(undefined4 *)((int)thing_ptr_2 + 0xb4) = 0;
            if (0 < *(int *)((int)thing_ptr_2 + 0x74)) {
              do {
                ch = (char)(slab_coord >> 8);
                if ((ch == '\0') && ((char)slab_coord == '\0')) break;
                *(int *)((int)thing_ptr_2 + 0xb4) = *(int *)((int)thing_ptr_2 + 0xb4) + 0x100;
                val_2 = *(int *)((int)thing_ptr_2 + 0xb4) >> 8;
                *(int *)((int)thing_ptr_2 + 0xbc) =
                     *(int *)((int)thing_ptr_2 + 0xb8) + *(int *)((int)thing_ptr_2 + 0x20) >> 8; /* thing->model */
                thing_ptr = *(int *)((int)thing_ptr_2 + 0xc) - val_2;
                *(int *)((int)thing_ptr_2 + 0xb8) =
                     *(int *)((int)thing_ptr_2 + 0xb8) + *(int *)((int)thing_ptr_2 + 0x20); /* thing->model */
                if ((-1 < thing_ptr) && (*(int *)((int)thing_ptr_2 + 0xc) + val_2 < 0x55)) {
                  if (ch != '\0') {
                    val = *(int *)((int)thing_ptr_2 + 0x10) + *(int *)((int)thing_ptr_2 + 0xbc);
                    val_3 = (val * 0x55 + thing_ptr + 1) * 6;
                    if (*(int *)((int)thing_ptr_2 + 0x18) < 0) {
                      if ((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val_3] * 0x16] & 0x69) != 0)
                         && (((&g_data_001921c6)
                              [(uint)(byte)(&g_slabmap_base)[(thing_ptr + (val + 1) * 0x55) * 6] * 0x16]
                             & 0x69) != 0)) {
                        slab_coord = slab_coord & 0xff;
                        *(undefined4 *)((int)thing_ptr_2 + 0xc0) = 1;
                      }
                    }
                    else if (((0 < *(int *)((int)thing_ptr_2 + 0x18)) &&
                             (((&g_data_001921c6)
                               [(uint)(byte)(&g_slabmap_base)[(thing_ptr + (val + -1) * 0x55) * 6] *
                                0x16] & 0x69) != 0)) &&
                            (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val_3] * 0x16] & 0x69) !=
                             0)) {
                      slab_coord = slab_coord & 0xff;
                      *(undefined4 *)((int)thing_ptr_2 + 0xc0) = 1;
                    }
                    *(int *)((int)thing_ptr_2 + 0x9c) =
                         ((*(int *)((int)thing_ptr_2 + 0x10) + *(int *)((int)thing_ptr_2 + 0xbc)) * 0x55 +
                         (*(int *)((int)thing_ptr_2 + 0xc) - val_2)) * 6;
                    if ((char)(slab_coord >> 8) == '\0') {
                      if ((*(int *)((int)thing_ptr_2 + 0xc0) != 0) &&
                         (*(undefined4 *)((int)thing_ptr_2 + 0xc0) = 0,
                         ((&g_data_001921c6)
                          [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0x9c)] * 0x16] & 0x20
                         ) != 0)) {
                        *(int *)((int)thing_ptr_2 + 0x80) = arg_eax;
                        *(int *)((int)thing_ptr_2 + 0x84) =
                             *(int *)((int)thing_ptr_2 + 0x10) + *(int *)((int)thing_ptr_2 + 0xbc);
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x8386b;
                        dungeon_update_slab_subtile_columns_023de2();
                        if (((char)(extraout_ECX_09 >> 8) != '\0') ||
                           (slab_coord = extraout_ECX_09,
                           ((&g_data_001921c6)
                            [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0x9c)] * 0x16] &
                           0x10) != 0)) {
                          *(undefined4 *)((int)thing_ptr_2 + -4) = 0x838a6;
                          creature_process_map_subtile_082828();
                          slab_coord = extraout_ECX_10;
                        }
                      }
                    }
                    else {
                      *(int *)((int)thing_ptr_2 + 0x78) = arg_eax;
                      *(int *)((int)thing_ptr_2 + 0x7c) = *(int *)((int)thing_ptr_2 + 0xc) - val_2;
                      *(undefined4 *)((int)thing_ptr_2 + -4) = 0x837b1;
                      dungeon_update_slab_subtile_columns_023de2();
                      if (((char)(extraout_ECX_07 >> 8) != '\0') ||
                         (slab_coord = extraout_ECX_07,
                         ((&g_data_001921c6)
                          [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0x9c)] * 0x16] & 0x10
                         ) != 0)) {
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x837e6;
                        creature_process_map_subtile_082828();
                        slab_coord = extraout_ECX_08;
                      }
                      if (((&g_data_001921c6)
                           [(uint)(byte)(&g_slabmap_base)
                                        [((*(int *)((int)thing_ptr_2 + 0xc) - val_2) +
                                         (*(int *)((int)thing_ptr_2 + 0x10) +
                                         *(int *)((int)thing_ptr_2 + 0xbc)) * 0x55) * 6] * 0x16] & 0x69)
                          != 0) {
                        slab_coord = slab_coord & 0xff;
                      }
                    }
                  }
                  if ((char)slab_coord != '\0') {
                    val = *(int *)((int)thing_ptr_2 + 0x10) + *(int *)((int)thing_ptr_2 + 0xbc);
                    thing_ptr = *(int *)((int)thing_ptr_2 + 0xc) + val_2;
                    *(int *)((int)thing_ptr_2 + 0xa0) = (val * 0x55 + thing_ptr + -1) * 6;
                    if (*(int *)((int)thing_ptr_2 + 0x18) < 0) {
                      if ((((&g_data_001921c6)
                            [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0xa0)] * 0x16] &
                           0x69) != 0) &&
                         (((&g_data_001921c6)
                           [(uint)(byte)(&g_slabmap_base)[(thing_ptr + (val + 1) * 0x55) * 6] * 0x16] &
                          0x69) != 0)) {
                        uval = 1;
LAB_0008395c:
                        slab_coord = slab_coord & 0xffffff00;
                        *(undefined4 *)((int)thing_ptr_2 + 0xc4) = uval;
                      }
                    }
                    else if (((0 < *(int *)((int)thing_ptr_2 + 0x18)) &&
                             (((&g_data_001921c6)
                               [(uint)(byte)(&g_slabmap_base)[*(int *)((int)thing_ptr_2 + 0xa0)] * 0x16] &
                              0x69) != 0)) &&
                            (((&g_data_001921c6)
                              [(uint)(byte)(&g_slabmap_base)[(thing_ptr + (val + -1) * 0x55) * 6] * 0x16
                              ] & 0x69) != 0)) {
                      uval = 0;
                      goto LAB_0008395c;
                    }
                    thing_ptr = *(int *)((int)thing_ptr_2 + 0xc) + val_2;
                    val = ((*(int *)((int)thing_ptr_2 + 0x10) + *(int *)((int)thing_ptr_2 + 0xbc)) * 0x55
                            + thing_ptr) * 6;
                    if ((char)slab_coord == '\0') {
                      if ((*(int *)((int)thing_ptr_2 + 0xc4) != 0) &&
                         (*(undefined4 *)((int)thing_ptr_2 + 0xc4) = 0,
                         ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x20) != 0))
                      {
                        *(int *)((int)thing_ptr_2 + 8) = arg_eax; /* thing->active_state */
                        *(int *)((int)thing_ptr_2 + 0x94) = thing_ptr;
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x83a53;
                        dungeon_update_slab_subtile_columns_023de2();
                        if (((char)extraout_ECX_13 != '\0') ||
                           (slab_coord = extraout_ECX_13,
                           ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x10) != 0)
                           ) {
                          *(undefined4 *)((int)thing_ptr_2 + -4) = 0x83a84;
                          creature_process_map_subtile_082828();
                          slab_coord = extraout_ECX_14;
                        }
                      }
                    }
                    else {
                      *(int *)((int)thing_ptr_2 + 0x88) = arg_eax;
                      *(int *)((int)thing_ptr_2 + 0x8c) = thing_ptr;
                      *(int *)((int)thing_ptr_2 + 0x90) =
                           *(int *)((int)thing_ptr_2 + 0x10) + *(int *)((int)thing_ptr_2 + 0xbc);
                      *(undefined4 *)((int)thing_ptr_2 + -4) = 0x839a5;
                      dungeon_update_slab_subtile_columns_023de2();
                      if (((char)extraout_ECX_11 != '\0') ||
                         (slab_coord = extraout_ECX_11,
                         ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val] * 0x16] & 0x10) != 0))
                      {
                        *(undefined4 *)((int)thing_ptr_2 + -4) = 0x839de;
                        creature_process_map_subtile_082828();
                        slab_coord = extraout_ECX_12;
                      }
                      if (((&g_data_001921c6)
                           [(uint)(byte)(&g_slabmap_base)
                                        [((*(int *)((int)thing_ptr_2 + 0x10) +
                                          *(int *)((int)thing_ptr_2 + 0xbc)) * 0x55 +
                                         val_2 + *(int *)((int)thing_ptr_2 + 0xc)) * 6] * 0x16] & 0x69)
                          != 0) {
                        slab_coord = slab_coord & 0xffffff00;
                      }
                    }
                  }
                }
              } while (*(int *)((int)thing_ptr_2 + 0xb4) < *(int *)((int)thing_ptr_2 + 0x74));
            }
          }
          thing_ptr = *(int *)((int)thing_ptr_2 + 0x18);
          *(int *)((int)thing_ptr_2 + 0xac) = *(int *)((int)thing_ptr_2 + 0xac) + 1;
          *(int *)((int)thing_ptr_2 + 0xb0) = *(int *)((int)thing_ptr_2 + 0xb0) + 0x100;
          *(int *)((int)thing_ptr_2 + 0x18) = thing_ptr + 1;
        } while (thing_ptr + 1 <= *(int *)((int)thing_ptr_2 + 200));
      }
    }
    else if (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val_2 * 6] * 0x16] & 0x40) != 0) {
      if ((((-1 < local_d4 + 1) && (local_d4 + 1 < 0x55)) && (-1 < thing_ptr)) &&
         ((thing_ptr < 0x55 &&
          (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(val_2 + 1) * 6] * 0x16] & 0x40) != 0)))) {
        dungeon_update_slab_subtile_columns_023de2();
        creature_process_map_subtile_082828();
      }
      if (((-1 < local_d4 + -1) && (local_d4 + -1 < 0x55)) &&
         ((-1 < thing_ptr &&
          ((thing_ptr < 0x55 &&
           (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(thing_ptr * 0x55 + local_d4 + -1) * 6] * 0x16]
            & 0x40) != 0)))))) {
        dungeon_update_slab_subtile_columns_023de2();
        creature_process_map_subtile_082828();
      }
      if ((((-1 < local_d4) && (local_d4 < 0x55)) && (val_2 = thing_ptr + 1, -1 < val_2)) &&
         ((val_2 < 0x55 &&
          (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(local_d4 + val_2 * 0x55) * 6] * 0x16] &
           0x40) != 0)))) {
        dungeon_update_slab_subtile_columns_023de2();
        creature_process_map_subtile_082828();
      }
      if (((-1 < local_d4) && (local_d4 < 0x55)) &&
         ((thing_ptr = thing_ptr + -1, -1 < thing_ptr &&
          ((thing_ptr < 0x55 &&
           (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(thing_ptr * 0x55 + local_d4) * 6] * 0x16] &
            0x40) != 0)))))) {
        dungeon_update_slab_subtile_columns_023de2();
        creature_process_map_subtile_082828();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_083b20 (Original VA: 0x83b20, Ghidra: FUN_00083b20)
 * Prototype: byte * creature_update_creature_and_thing_083b20(void);
 * Address  : 0x83b20 (Size: 525 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> creature_update_creature_and_thing_083f40
 * Callees  : 2 -> creature_update_creature_control_084ff8, creature_fn_085220
 ******************************************************************************/
byte * creature_update_creature_and_thing_083b20(void)

{
  uint arg_eax;
  int cctrl_ptr;
  uint cctrl_ptr_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint arg_edx;
  byte *thing_ptr;
  byte cctrl_ptr_3;
  byte *byte_ptr;
  
  cctrl_ptr_2 = arg_edx & 0xff;
  byte_ptr = (byte *)0x0;
  cctrl_ptr_3 = 0;
  if (arg_eax == 0x17) {
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[(g_my_player_word >> 0x18) * 0xa84]];
    if (g_thing_ptrs < thing_ptr) {
      do {
        if (((((*(int *)(thing_ptr + 3) >> 0x18 ==
                (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
              ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
            ((thing_ptr[7] != 0x43 &&
             (cctrl_ptr_3 < *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23))))) && /* thing->ccontrol_idx */
           ((((char)cctrl_ptr_2 != '\0' && (cctrl_ptr = creature_update_creature_control_084ff8(), cctrl_ptr_2 = extraout_ECX, cctrl_ptr != 0)) ||
            (((char)cctrl_ptr_2 == '\0' && (cctrl_ptr = creature_fn_085220(), cctrl_ptr_2 = extraout_ECX_00, cctrl_ptr != 0)))
            ))) {
          cctrl_ptr_3 = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
          byte_ptr = thing_ptr;
        }
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
      } while (g_thing_ptrs < thing_ptr);
    }
  }
  else {
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[(g_my_player_word >> 0x18) * 0xa84]];
    if (thing_ptr <= g_thing_ptrs) {
      return (byte *)0x0;
    }
    do {
      if (((((*(int *)(thing_ptr + 3) >> 0x18 ==
              (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
            ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
          ((thing_ptr[7] != 0x43 && (thing_ptr[0x1a] == arg_eax)))) &&
         ((cctrl_ptr_3 < *(byte *)((&g_creature_ctrl_ptrs)
                             [CONCAT22((short)(arg_eax >> 0x10),*(undefined2 *)(thing_ptr + 100))] + /* thing->ccontrol_idx */
                            0x23) &&
          ((((char)cctrl_ptr_2 != '\0' && (cctrl_ptr = creature_update_creature_control_084ff8(), cctrl_ptr_2 = extraout_ECX_01, cctrl_ptr != 0))
           || (((char)cctrl_ptr_2 == '\0' && (cctrl_ptr = creature_fn_085220(), cctrl_ptr_2 = extraout_ECX_02, cctrl_ptr != 0)
               ))))))) {
        cctrl_ptr_3 = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
        byte_ptr = thing_ptr;
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
    } while (g_thing_ptrs < thing_ptr);
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_083d30 (Original VA: 0x83d30, Ghidra: FUN_00083d30)
 * Prototype: byte * creature_update_creature_and_thing_083d30(void);
 * Address  : 0x83d30 (Size: 528 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> creature_update_creature_and_thing_083f40
 * Callees  : 2 -> creature_update_creature_control_084ff8, creature_fn_085220
 ******************************************************************************/
byte * creature_update_creature_and_thing_083d30(void)

{
  uint arg_eax;
  int cctrl_ptr;
  uint cctrl_ptr_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint arg_edx;
  byte *thing_ptr;
  uint cctrl_ptr_3;
  byte *byte_ptr;
  
  cctrl_ptr_2 = arg_edx & 0xff;
  cctrl_ptr_3 = 0x7fffffff;
  byte_ptr = (byte *)0x0;
  if (arg_eax == 0x17) {
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[(g_my_player_word >> 0x18) * 0xa84]];
    if (g_thing_ptrs < thing_ptr) {
      do {
        if (((((*(int *)(thing_ptr + 3) >> 0x18 ==
                (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
              ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
            ((thing_ptr[7] != 0x43 &&
             (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) < cctrl_ptr_3)))) && /* thing->ccontrol_idx */
           ((((char)cctrl_ptr_2 != '\0' && (cctrl_ptr = creature_update_creature_control_084ff8(), cctrl_ptr_2 = extraout_ECX, cctrl_ptr != 0)) ||
            (((char)cctrl_ptr_2 == '\0' && (cctrl_ptr = creature_fn_085220(), cctrl_ptr_2 = extraout_ECX_00, cctrl_ptr != 0)))
            ))) {
          cctrl_ptr_3 = (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
          byte_ptr = thing_ptr;
        }
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
      } while (g_thing_ptrs < thing_ptr);
    }
  }
  else {
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[(g_my_player_word >> 0x18) * 0xa84]];
    if (thing_ptr <= g_thing_ptrs) {
      return (byte *)0x0;
    }
    do {
      if (((((*(int *)(thing_ptr + 3) >> 0x18 ==
              (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
            ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
          ((thing_ptr[7] != 0x43 && (thing_ptr[0x1a] == arg_eax)))) &&
         ((*(byte *)((&g_creature_ctrl_ptrs)
                     [CONCAT22((short)(arg_eax >> 0x10),*(undefined2 *)(thing_ptr + 100))] + 0x23) < /* thing->ccontrol_idx */
           cctrl_ptr_3 && ((((char)cctrl_ptr_2 != '\0' &&
                      (cctrl_ptr = creature_update_creature_control_084ff8(), cctrl_ptr_2 = extraout_ECX_01, cctrl_ptr != 0)) ||
                     (((char)cctrl_ptr_2 == '\0' &&
                      (cctrl_ptr = creature_fn_085220(), cctrl_ptr_2 = extraout_ECX_02, cctrl_ptr != 0)))))))) {
        cctrl_ptr_3 = (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
        byte_ptr = thing_ptr;
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
    } while (g_thing_ptrs < thing_ptr);
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_083f40 (Original VA: 0x83f40, Ghidra: FUN_00083f40)
 * Prototype: byte * creature_update_creature_and_thing_083f40(void);
 * Address  : 0x83f40 (Size: 1457 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> creature_fn_084704, creature_update_player_dungeon_084750
 * Callees  : 4 -> creature_update_creature_and_thing_083b20, creature_update_creature_and_thing_083d30, creature_update_creature_control_084ff8, creature_fn_085220
 ******************************************************************************/
byte * creature_update_creature_and_thing_083f40(void)

{
  uint arg_eax;
  uint uval;
  int thing_ptr;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  int arg_edx;
  int thing_ptr_2;
  char arg_bl;
  byte *thing_ptr_3;
  byte *thing_ptr_4;
  byte *thing_ptr_5;
  
  thing_ptr_2 = g_my_player_word >> 0x18;
  thing_ptr_4 = (byte *)0x0;
  thing_ptr_3 = (byte *)0x0;
  if (arg_eax == 0xffffffff) {
    if ((arg_edx == -1) ||
       (thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(&g_bss_002e1a8b + arg_edx * 2 + thing_ptr_2 * 0x1508)],
       thing_ptr_3 <= g_thing_ptrs)) goto LAB_000840d6;
    if ((((*thing_ptr_3 & 1) != 0) &&
        (((thing_ptr_3[0x1f] == 5 && ((*thing_ptr_3 & 0x10) == 0)) && ((thing_ptr_3[1] & 2) == 0)))) &&
       ((thing_ptr_3[7] != 0x43 &&
        ((uint)(byte)(&g_player_id_number)[thing_ptr_2 * 0x4ef] == *(int *)(thing_ptr_3 + 3) >> 0x18)))) {
      uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_3[7] * 0x29];
      if (uval == 6) {
        uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_3[8] * 0x29];
      }
      if (arg_edx == *(int *)(&g_data_0019133e + uval * 4)) goto LAB_000840b9;
    }
    thing_ptr_3 = (byte *)0x0;
    *(undefined2 *)(&g_bss_002e1a8b + arg_edx * 2 + thing_ptr_2 * 0x1508) = 0;
  }
  else {
    thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(&g_bss_002e1a4b + arg_eax * 2 + thing_ptr_2 * 0x1508)];
    if (thing_ptr_3 <= g_thing_ptrs) goto LAB_000840d6;
    if ((((((*thing_ptr_3 & 1) == 0) || (thing_ptr_3[0x1f] != 5)) || ((*thing_ptr_3 & 0x10) != 0)) ||
        (((thing_ptr_3[1] & 2) != 0 || (thing_ptr_3[7] == 0x43)))) ||
       (*(int *)(thing_ptr_3 + 3) >> 0x18 != (uint)(byte)(&g_player_id_number)[thing_ptr_2 * 0x4ef])) {
      *(undefined2 *)(&g_bss_002e1a4b + arg_eax * 2 + thing_ptr_2 * 0x1508) = 0;
      thing_ptr_3 = (byte *)0x0;
      goto LAB_000840d6;
    }
LAB_000840b9:
    thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_3 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
  }
LAB_000840d6:
  if ((arg_edx == -1) && (arg_eax != 0xffffffff)) {
    if ((g_bss_003db526 == '\0') && (g_bss_003db532 == '\0')) {
      thing_ptr_3 = (byte *)creature_update_creature_and_thing_083b20();
      arg_eax = extraout_ECX_00;
    }
    else {
      thing_ptr_3 = (byte *)creature_update_creature_and_thing_083d30();
      arg_eax = extraout_ECX;
    }
    thing_ptr_5 = thing_ptr_4;
    if (thing_ptr_3 != (byte *)0x0) {
      thing_ptr_5 = thing_ptr_3;
    }
  }
  else {
    for (; (thing_ptr_5 = thing_ptr_4, g_thing_ptrs < thing_ptr_3 && (thing_ptr_3 != (byte *)0x0));
        thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_3 + 100)] + 0x1f)]) { /* thing->ccontrol_idx */
      uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_3[7] * 0x29];
      if (uval == 6) {
        uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_3[8] * 0x29];
      }
      if ((((((*(int *)(thing_ptr_3 + 3) >> 0x18 ==
               (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) &&
             ((*thing_ptr_3 & 0x10) == 0)) && ((thing_ptr_3[1] & 2) == 0)) &&
           ((thing_ptr_3[7] != 0x43 && ((arg_eax == 0xffffffff || (thing_ptr_3[0x1a] == arg_eax)))))) &&
          ((arg_edx == -1 || (arg_edx == *(int *)(&g_data_0019133e + uval * 4))))) &&
         (((thing_ptr_5 = thing_ptr_3, arg_bl != '\0' &&
           (thing_ptr = creature_update_creature_control_084ff8(), arg_eax = extraout_ECX_01, thing_ptr != 0)) ||
          ((arg_bl == '\0' && (thing_ptr = creature_fn_085220(), arg_eax = extraout_ECX_02, thing_ptr != 0))))))
      break;
    }
  }
  if (thing_ptr_5 <= g_thing_ptrs) {
    thing_ptr_3 = thing_ptr_5;
    if (((arg_eax == 0x17) || (arg_eax == 0xffffffff)) &&
       (thing_ptr_4 = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[thing_ptr_2 * 0xa84]], g_thing_ptrs < thing_ptr_4)) {
      do {
        uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_4[7] * 0x29];
        if (uval == 6) {
          uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_4[8] * 0x29];
        }
      } while (((((((*(int *)(thing_ptr_4 + 3) >> 0x18 !=
                     (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) ||
                   ((*thing_ptr_4 & 0x10) != 0)) || (((thing_ptr_4[1] & 2) != 0 || (thing_ptr_4[7] == 0x43)))) ||
                 ((arg_eax != 0xffffffff && (thing_ptr_4[0x1a] != arg_eax)))) ||
                ((arg_edx != -1 && (arg_edx != *(int *)(&g_data_0019133e + uval * 4))))) ||
               (((thing_ptr_3 = thing_ptr_4, arg_bl == '\0' ||
                 (thing_ptr = creature_update_creature_control_084ff8(), arg_eax = extraout_ECX_03, thing_ptr == 0)) &&
                ((arg_bl != '\0' || (thing_ptr = creature_fn_085220(), arg_eax = extraout_ECX_04, thing_ptr == 0)
                 ))))) &&
              (thing_ptr_4 = (&g_thing_ptrs)
                        [*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_4 + 100)] + 0x1f)], /* thing->ccontrol_idx */
              thing_ptr_3 = thing_ptr_5, g_thing_ptrs < thing_ptr_4));
    }
    thing_ptr_5 = thing_ptr_3;
    if ((thing_ptr_3 == (byte *)0x0) &&
       (thing_ptr_4 = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[thing_ptr_2 * 0xa84]], g_thing_ptrs < thing_ptr_4)) {
      do {
        uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_4[7] * 0x29];
        if (uval == 6) {
          uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_4[8] * 0x29];
        }
      } while (((((((*(int *)(thing_ptr_4 + 3) >> 0x18 !=
                     (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) ||
                   ((*thing_ptr_4 & 0x10) != 0)) || ((thing_ptr_4[1] & 2) != 0)) || (thing_ptr_4[7] == 0x43)) ||
                (((arg_eax != 0xffffffff && (thing_ptr_4[0x1a] != arg_eax)) ||
                 ((arg_edx != -1 && (arg_edx != *(int *)(&g_data_0019133e + uval * 4))))))) ||
               (((thing_ptr_5 = thing_ptr_4, arg_bl == '\0' ||
                 (thing_ptr_2 = creature_update_creature_control_084ff8(), arg_eax = extraout_ECX_05, thing_ptr_2 == 0)) &&
                ((arg_bl != '\0' || (thing_ptr_2 = creature_fn_085220(), arg_eax = extraout_ECX_06, thing_ptr_2 == 0)
                 ))))) &&
              (thing_ptr_4 = (&g_thing_ptrs)
                        [*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_4 + 100)] + 0x1f)], /* thing->ccontrol_idx */
              thing_ptr_5 = thing_ptr_3, g_thing_ptrs < thing_ptr_4));
    }
  }
  if (thing_ptr_5 != (byte *)0x0) {
    thing_ptr_2 = (g_my_player_word >> 0x18) * 0x1508;
    *(undefined2 *)(&g_bss_002e1a4b + (uint)thing_ptr_5[0x1a] * 2 + thing_ptr_2) = *(undefined2 *)(thing_ptr_5 + 0x1b) /* thing->index_or_angle */
    ;
    uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_5[7] * 0x29];
    if (uval == 6) {
      uval = (uint)(byte)(&g_data_0018c4be)[(uint)thing_ptr_5[8] * 0x29];
    }
    *(undefined2 *)(&g_bss_002e1a8b + *(int *)(&g_data_0019133e + uval * 4) * 2 + thing_ptr_2) =
         *(undefined2 *)(thing_ptr_5 + 0x1b); /* thing->index_or_angle */
  }
  return thing_ptr_5;
}

/******************************************************************************
 * Function : creature_update_creature_and_thing_0844f4 (Original VA: 0x844f4, Ghidra: FUN_000844f4)
 * Prototype: undefined2 creature_update_creature_and_thing_0844f4(void);
 * Address  : 0x844f4 (Size: 527 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> input_update_player_dungeon_047bcd
 * Callees  : 1 -> anger_update_creature_control_010575
 ******************************************************************************/
undefined2 creature_update_creature_and_thing_0844f4(void)

{
  undefined2 uval;
  ushort cctrl_ptr;
  byte arg_al;
  undefined2 *extraout_ECX;
  undefined2 *dungeon_off;
  undefined2 *extraout_ECX_00;
  undefined2 *extraout_ECX_01;
  uint arg_edx;
  uint uval_2;
  int thing_ptr;
  byte *thing_ptr_2;
  undefined8 uval_3;
  
  uval_2 = (uint)arg_al;
  thing_ptr_2 = (&g_thing_ptrs)[arg_edx & 0xffff];
  dungeon_off = &g_dungeons + uval_2 * 0xa84;
  if (((((*thing_ptr_2 & 1) != 0) && (thing_ptr_2[0x1f] == 5)) && ((*thing_ptr_2 & 0x10) == 0)) &&
     (((thing_ptr_2[1] & 2) == 0 && (thing_ptr_2[7] != 0x43)))) {
    thing_ptr_2 = (&g_thing_ptrs)
             [*(ushort *)
               ((&g_creature_ctrl_ptrs)
                [*(ushort *)
                  ((int)(&g_thing_ptrs)[*(ushort *)(&g_bss_002e1700 + uval_2 * 0x1508)] + 100)] + 0x1f)
             ];
    if ((((*thing_ptr_2 & 1) != 0) && ((thing_ptr_2[0x1f] == 5 && ((*thing_ptr_2 & 0x10) == 0)))) &&
       (((thing_ptr_2[1] & 2) == 0 && (thing_ptr_2[7] != 0x43)))) {
      for (; g_thing_ptrs < thing_ptr_2;
          thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]) /* thing->ccontrol_idx */
      {
        uval_3 = anger_update_creature_control_010575();
        thing_ptr_2 = (byte *)((ulonglong)uval_3 >> 0x20);
        if ((((((int)uval_3 != 0) && ((*thing_ptr_2 & 1) != 0)) && (thing_ptr_2[0x1f] == 5)) &&
            (((*thing_ptr_2 & 0x10) == 0 && ((thing_ptr_2[1] & 2) == 0)))) && (thing_ptr_2[7] != 0x43)) {
          uval = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
          *(undefined2 *)((int)extraout_ECX_00 + 0x1177) = uval;
          return uval;
        }
        dungeon_off = extraout_ECX_00;
      }
    }
    cctrl_ptr = *(ushort *)((int)dungeon_off + 0x2d);
    while( true ) {
      if (((&g_thing_ptrs)[cctrl_ptr] == (&g_thing_ptrs)[arg_edx & 0xffff]) ||
         ((&g_thing_ptrs)[cctrl_ptr] <= g_thing_ptrs)) {
        return *(undefined2 *)((int)dungeon_off + 0x1177);
      }
      uval_3 = anger_update_creature_control_010575();
      thing_ptr_2 = (byte *)((ulonglong)uval_3 >> 0x20);
      if (((((int)uval_3 != 0) && ((*thing_ptr_2 & 1) != 0)) && (thing_ptr_2[0x1f] == 5)) &&
         ((((*thing_ptr_2 & 0x10) == 0 && ((thing_ptr_2[1] & 2) == 0)) && (thing_ptr_2[7] != 0x43)))) break;
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f); /* thing->ccontrol_idx */
      dungeon_off = extraout_ECX_01;
    }
    uval = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    *(undefined2 *)((int)extraout_ECX_01 + 0x1177) = uval;
    return uval;
  }
  if (g_thing_ptrs < (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[uval_2 * 0xa84]]) {
    do {
      uval_3 = anger_update_creature_control_010575();
      thing_ptr = (int)((ulonglong)uval_3 >> 0x20);
      if ((int)uval_3 != 0) {
        uval = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        *(undefined2 *)((int)extraout_ECX + 0x1177) = uval;
        return uval;
      }
      dungeon_off = extraout_ECX;
    } while (g_thing_ptrs <
             (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]); /* thing->ccontrol_idx */
  }
  *(undefined2 *)((int)dungeon_off + 0x1177) = 0;
  return 0;
}

/******************************************************************************
 * Function : creature_fn_084704 (Original VA: 0x84704, Ghidra: FUN_00084704)
 * Prototype: void creature_fn_084704(void);
 * Address  : 0x84704 (Size: 76 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x084704
 * Callers  : 2 -> newgui_fn_05a18a, newgui_fn_05a22b
 * Callees  : 2 -> set_packet_action, creature_update_creature_and_thing_083f40
 ******************************************************************************/
void creature_fn_084704(void)

{
  int val;
  
  val = creature_update_creature_and_thing_083f40();
  if (val != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : creature_update_player_dungeon_084750 (Original VA: 0x84750, Ghidra: FUN_00084750)
 * Prototype: int creature_update_player_dungeon_084750(void);
 * Address  : 0x84750 (Size: 131 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> newgui_fn_05a1b6
 * Callees  : 2 -> set_packet_action, creature_update_creature_and_thing_083f40
 ******************************************************************************/
int creature_update_player_dungeon_084750(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_ebx;
  
  val = creature_update_creature_and_thing_083f40();
  if ((val != 0) &&
     ((extraout_ECX == -1 ||
      (*(short *)(&g_bss_002e09ad + extraout_ECX * 2 + arg_eax * 6 + arg_ebx * 0x1508) != 0)))) {
    set_packet_action(0,0);
  }
  return val;
}

/******************************************************************************
 * Function : creature_process_thing_entity_0847d4 (Original VA: 0x847d4, Ghidra: FUN_000847d4)
 * Prototype: undefined4 creature_process_thing_entity_0847d4(void);
 * Address  : 0x847d4 (Size: 136 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> lair_process_thing_entity_04e120
 * Callees  : 3 -> instance_update_creature_control_049dd9, instance_fn_049eff, packet_possess_thing_direct
 ******************************************************************************/
undefined4 creature_process_thing_entity_0847d4(void)

{
  uint arg_eax;
  int extraout_ECX;
  int thing_ptr;
  int extraout_ECX_00;
  int arg_edx;
  int extraout_EDX;
  
  thing_ptr = (&g_thing_ptrs)[arg_eax & 0xffff];
  if (*(short *)(&g_player_controlled_thing_idx + arg_edx * 0x4ef) == 0) {
    packet_possess_thing_direct();
    thing_ptr = extraout_ECX;
    arg_edx = extraout_EDX;
  }
  if ((byte)(&g_bss_002e05ec)[arg_edx * 0x1508] < 8) {
    *(undefined2 *)(&g_player_influenced_thing_idx + arg_edx * 0x4ef) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined4 *)(&g_bss_0019d508 + arg_edx * 0x4ef) = *(undefined4 *)(thing_ptr + 9);
    instance_fn_049eff();
    if (*(char *)(extraout_ECX_00 + 0x1f) == '\x05') {
      instance_update_creature_control_049dd9();
    }
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_update_player_dungeon_08485c (Original VA: 0x8485c, Ghidra: FUN_0008485c)
 * Prototype: undefined4 creature_update_player_dungeon_08485c(void);
 * Address  : 0x8485c (Size: 167 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> instance_update_creature_and_thing_04ac70, creature_thing_hand_084904
 * Callees  : 2 -> combtool_update_creature_control_01836b, sound_roll_unsynced_random_06edb9
 ******************************************************************************/
undefined4 creature_update_player_dungeon_08485c(void)

{
  int thing;
  int val;
  int arg_edx;
  int dungeon_off;
  int val_2;
  
  dungeon_off = arg_edx * 0x1508;
  if ((byte)(&g_bss_002e05ec)[dungeon_off] < 8) {
    if (*(short *)(&g_bss_002e05bc + dungeon_off) != 0) {
      val_2 = dungeon_off + 0x2e0595;
      do {
        val = val_2 + -2;
        *(undefined2 *)(val_2 + 0x35) = *(undefined2 *)(val_2 + 0x33);
        val_2 = val;
      } while (val != dungeon_off + 0x2e0587);
    }
    (&g_bss_002e05ec)[dungeon_off] = (&g_bss_002e05ec)[dungeon_off] + '\x01';
    *(undefined2 *)(&g_bss_002e05bc + dungeon_off) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
    if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
      combtool_update_creature_control_01836b();
    }
    if (((uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] == *(int *)(thing + 3) >> 0x18
        ) && (*(char *)(thing + 0x1f) == '\x05')) { /* thing->class_id */
      sound_roll_unsynced_random_06edb9();
    }
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_thing_hand_084904 (Original VA: 0x84904, Ghidra: FUN_00084904)
 * Prototype: undefined4 creature_thing_hand_084904(void);
 * Address  : 0x84904 (Size: 194 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 2814
 * Purpose  : String 'INVALID THING FOR HAND'
 * Callers  : 1 -> input_game_action_048c77
 * Callees  : 8 -> instance_update_creature_control_049dd9, mapwho_process_map_subtile_050ca9, person_external_change_state_but_064a5f, creature_update_player_dungeon_08485c, draw_roll_action_random_08ccec, object_process_slabmap_tile_0c57c4, update_fn_0dd2f0, LbErrorLog
 ******************************************************************************/
undefined4 creature_thing_hand_084904(void)

{
  char ch;
  byte *arg_eax;
  int val;
  undefined4 *word_ptr;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  if (((*arg_eax & 0x10) == 0) && ((arg_eax[1] & 2) == 0)) {
    if (arg_eax[0x1f] == 5) {
LAB_0008494e:
      if (arg_eax[0x1f] == 5) {
        uStack_14 = 0x84964;
        instance_update_creature_control_049dd9();
        uStack_14 = 0x8496b;
        ch = person_external_change_state_but_064a5f();
        if (ch == '\0') {
          return 0;
        }
        uStack_14 = 2;
        uStack_18 = 0;
        word_ptr = &uStack_1c;
        uStack_1c = 0xffffffff;
        update_fn_0dd2f0();
        draw_roll_action_random_08ccec();
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x849a5;
      creature_update_player_dungeon_08485c();
      *(undefined4 *)((int)word_ptr + -4) = 0x849ac;
      mapwho_process_map_subtile_050ca9();
      arg_eax[0x4f] = arg_eax[0x4f] | 1;
      *arg_eax = *arg_eax | 0x10;
      return 1;
    }
    if (arg_eax[0x1f] == 1) {
      uStack_14 = 0x8492f;
      val = object_process_slabmap_tile_0c57c4();
      if (val != 0) goto LAB_0008494e;
    }
  }
  uStack_14 = 0x84947;
  LbErrorLog(); /* LbErrorLog("creature.cpp", line 2814, "INVALID THING FOR HAND") */
  return 0;
}

/******************************************************************************
 * Function : creature_process_thing_entity_0849c8 (Original VA: 0x849c8, Ghidra: FUN_000849c8)
 * Prototype: undefined4 creature_process_thing_entity_0849c8(void);
 * Address  : 0x849c8 (Size: 975 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 18 -> instance_fn_049eff, magic_update_creature_control_04fbd8, mapwho_process_map_subtile_050c38, person_initialise_state_but_thing_064b0c, sound_non_emitter_has_been_06e9ab, sound_roll_unsynced_random_06edb9, sound_fn_06ee65, structs_update_creature_control_072af4 ...
 ******************************************************************************/
undefined4 creature_process_thing_entity_0849c8(void)

{
  byte flag;
  byte *thing_ptr;
  bool flag_2;
  byte arg_al;
  short short_val;
  int val;
  short arg_cx;
  short extraout_DX;
  int arg_edx;
  uint thing_ptr_2;
  int arg_ebx;
  int dungeon_off;
  short *val_2;
  short *val_3;
  undefined8 uval;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  int local_20;
  int local_1c;
  
  val_2 = &local_30;
  if ((&g_bss_002e05ec)[(uint)arg_al * 0x1508] == '\0') {
    return 0;
  }
  uStack_34 = 0x84a27;
  local_20 = arg_edx;
  local_1c = arg_edx;
  val = is_subtile_revealed_and_within_bounds();
  if (val == 0) {
LAB_00084a69:
    flag_2 = false;
  }
  else {
    local_28 = (short)(local_20 << 8) + 0x80;
    local_26 = (short)(arg_ebx << 8) + 0x80;
    uStack_34 = 0x84a53;
    local_24 = move_process_map_subtile_0b28e8();
    uStack_34 = 0x84a61;
    val = ceiling_process_map_subtile_07dbc0();
    if (val != 0) goto LAB_00084a69;
    flag_2 = true;
  }
  if (!flag_2) {
    return 0;
  }
  thing_ptr = (byte *)(&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + (uint)arg_al * 0x1508)];
  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(&g_bss_0019d0fd + (uint)arg_al * 0x4ef)];
  if (thing_ptr[0x1f] == 1) {
    uStack_34 = 0x84abd;
    uval = object_fn_0c57a4();
    thing_ptr_2 = (uint)((ulonglong)uval >> 0x20);
    if ((int)uval != 0) {
      if (((g_thing_ptrs < thing_ptr_2) && (*(char *)(thing_ptr_2 + 0x1f) == '\x05')) && /* thing->class_id */
         (*(char *)(thing_ptr_2 + 0x1a) != '\x17')) {
        uStack_34 = 0x84b02;
        creature_update_creature_control_085ba4();
      }
      else {
        local_2e = (short)(arg_ebx << 8) + 0x80;
        local_2c = 0;
        local_30 = (short)(local_1c << 8) + 0x80;
        uStack_34 = 0x84b36;
        creature_process_thing_entity_085df8();
        if (arg_al == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
          uStack_34 = 0x84b59;
          sound_non_emitter_has_been_06e9ab();
        }
      }
      uStack_34 = 0x84b62;
      structs_update_creature_control_072af4();
      val_3 = &local_30;
      goto LAB_00084cec;
    }
  }
  if (((thing_ptr[0x1f] == 1) && (thing_ptr[0x1a] == 10)) &&
     ((g_thing_ptrs < thing_ptr_2 &&
      ((*(char *)(thing_ptr_2 + 0x1f) == '\x05' && (*(char *)(thing_ptr_2 + 0x1a) != '\x17')))))) { /* thing->class_id */
    uStack_34 = 0x84bbc;
    creature_update_creature_control_085cc4();
    val_3 = &local_30;
  }
  else {
    thing_ptr[0x11] = 0;
    thing_ptr[0x12] = 8;
    *(short *)(thing_ptr + 0xd) = (short)(local_1c << 8) + 0x80; /* thing->mappos.val_x */
    *(short *)(thing_ptr + 0xf) = (short)(arg_ebx << 8) + 0x80; /* thing->mappos.val_y */
    uStack_34 = 0x84bed;
    move_process_map_subtile_0b3850();
    uStack_34 = 0x84bf8;
    move_process_map_subtile_0b3788();
    uStack_34 = 0x84c17;
    short_val = move_process_map_subtile_0b3788();
    *(short *)(thing_ptr + 0x11) = short_val + extraout_DX;
    thing_ptr[0x4f] = thing_ptr[0x4f] & 0xfe;
    *thing_ptr = *thing_ptr & 0xef;
    uStack_34 = 0x84c34;
    mapwho_process_map_subtile_050c38();
    if (thing_ptr[0x1f] == 5) {
      uStack_34 = 0x84c4f;
      person_initialise_state_but_thing_064b0c();
      uStack_34 = 0x84c5d;
      sound_fn_06ee65();
      uStack_34 = 0x84c69;
      sound_roll_unsynced_random_06edb9();
      *(undefined4 *)(&g_bss_002e1a37 + (uint)arg_al * 0x1508) = g_game_turn;
      val_3 = &local_30;
    }
    else {
      val_3 = &local_30;
      if (thing_ptr[0x1f] == 1) {
        if (thing_ptr[0x1a] == 10) {
          uStack_34 = 2;
          uStack_38 = 0;
          val_2 = (short *)&uStack_3c;
          uStack_3c = 0xffffffff;
          draw_roll_action_random_08ccec();
        }
        flag = thing_ptr[7];
        thing_ptr[7] = 4;
        thing_ptr[8] = flag;
        val_3 = val_2;
      }
    }
  }
LAB_00084cec:
  if ((&g_bss_002e05ec)[(uint)arg_al * 0x1508] == '\x01') {
    *(undefined4 *)((int)val_3 + -4) = 0x84d1f;
    instance_fn_049eff();
  }
  val = 0;
  do {
    dungeon_off = (uint)arg_al * 0x1508;
    val = val + 2;
    *(undefined2 *)(&g_bss_002e05ba + val + dungeon_off) = *(undefined2 *)(&g_bss_002e05bc + val + dungeon_off);
  } while (val != 0xe);
  (&g_bss_002e05ec)[dungeon_off] = (&g_bss_002e05ec)[dungeon_off] + -1;
  *(undefined2 *)(&g_bss_002e05bc + (uint)(byte)(&g_bss_002e05ec)[dungeon_off] * 2 + dungeon_off) = 0;
  if (arg_cx != 0) {
    *(undefined4 *)((int)val_3 + -4) = 0x84d84;
    magic_update_creature_control_04fbd8();
  }
  return 1;
}

/******************************************************************************
 * Function : creature_fn_084d98 (Original VA: 0x84d98, Ghidra: FUN_00084d98)
 * Prototype: uint creature_fn_084d98(void);
 * Address  : 0x84d98 (Size: 114 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x084d98
 * Callers  : 3 -> comptool_computer_thing_hand_01e119, comptool_thing_held_computer_unconsious_01e226, input_fn_048897
 * Callees  : 3 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, is_subtile_revealed_and_within_bounds
 ******************************************************************************/
uint creature_fn_084d98(void)

{
  undefined2 uval;
  int val;
  uint uval_2;
  short arg_dx;
  short short_val;
  
  val = is_subtile_revealed_and_within_bounds();
  uval_2 = 0;
  if (val != 0) {
    short_val = arg_dx * 0x100 + 0x80;
    uval = move_process_map_subtile_0b28e8(short_val);
    uval_2 = ceiling_process_map_subtile_07dbc0(short_val,uval);
    if (uval_2 == 0) {
      return 1;
    }
  }
  return uval_2 & 0xffffff00;
}

/******************************************************************************
 * Function : creature_thing_already_dragged_something_084e0c (Original VA: 0x84e0c, Ghidra: FUN_00084e0c)
 * Prototype: void creature_thing_already_dragged_something_084e0c(void);
 * Address  : 0x84e0c (Size: 127 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 3003
 * Purpose  : String 'Thing is already dragged by something'
 * Callers  : 1 -> person_update_creature_and_thing_0641a6
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void creature_thing_already_dragged_something_084e0c(void)

{
  int thing;
  int arg_edx;
  
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x6e) == 0) &&
     (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) == 0)) { /* thing->ccontrol_idx */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x6e) =
         *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
    *(byte *)(thing + 1) = *(byte *)(thing + 1) | 1;
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) = /* thing->ccontrol_idx */
         *(undefined2 *)(arg_edx + 0x1b);
    return;
  }
  LbErrorLog(); /* LbErrorLog("creature.cpp", line 3003, "Thing is already dragging something") */
  return;
}

/******************************************************************************
 * Function : creature_thing_dragged_something_084e8c (Original VA: 0x84e8c, Ghidra: FUN_00084e8c)
 * Prototype: void creature_thing_dragged_something_084e8c(void);
 * Address  : 0x84e8c (Size: 118 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 3025
 * Purpose  : String 'Thing is not dragged by something'
 * Callers  : 3 -> person_update_creature_control_064e28, creature_update_creature_control_0826a0, creature_update_creature_control_082710
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void creature_thing_dragged_something_084e8c(void)

{
  int thing;
  int arg_edx;
  
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x6e) != 0) &&
     (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) != 0)) { /* thing->ccontrol_idx */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x6e) = 0;
    *(byte *)(thing + 1) = *(byte *)(thing + 1) & 0xfe;
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) = 0; /* thing->ccontrol_idx */
    return;
  }
  LbErrorLog(); /* LbErrorLog("creature.cpp", line 3025, "Thing is not dragging something") */
  return;
}

/******************************************************************************
 * Function : creature_update_player_dungeon_084f04 (Original VA: 0x84f04, Ghidra: FUN_00084f04)
 * Prototype: undefined8 creature_update_player_dungeon_084f04(void);
 * Address  : 0x84f04 (Size: 241 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> combat_fn_015b37, person_update_creature_control_063dd3, update_creature_has_illegal_state_0e1b88
 * Callees  : 2 -> combchk_fn_01614f, combtool_fn_0189d4
 ******************************************************************************/
undefined8 creature_update_player_dungeon_084f04(void)

{
  int arg_eax;
  uint player_off;
  int val;
  undefined4 uval;
  undefined4 extraout_ECX;
  undefined4 arg_edx;
  uint player_off_2;
  int val_2;
  int val_3;
  uint local_1c;
  
  val_3 = 0;
  val_2 = 0;
  local_1c = 0;
  do {
    if ((((((&g_players)[val_3] & 1) != 0) &&
         (player_off_2 = *(int *)(arg_eax + 3) >> 0x18, player_off_2 != local_1c)) &&
        (*(short *)((int)&g_dungeons + val_2) != 0)) &&
       ((((player_off = (uint)g_neutral_player_number, player_off == local_1c || (player_off_2 == player_off)) ||
         ((((uint)(byte)(&g_player_view_flags)[val_3] &
           1 << ((byte)((uint)*(undefined4 *)(arg_eax + 3) >> 0x18) & 0x1f)) == 0 ||
          ((player_off_2 == player_off || (player_off == local_1c)))))) ||
        (((uint)(byte)(&g_player_view_flags)[player_off_2 * 0x4ef] & 1 << ((byte)local_1c & 0x1f)) == 0)))) {
      combtool_fn_0189d4();
      val = combchk_fn_01614f();
      uval = extraout_ECX;
      if (val != 0) goto LAB_00084feb;
    }
    val_3 = val_3 + 0x4ef;
    local_1c = local_1c + 1;
    val_2 = val_2 + 0x1508;
  } while ((int)local_1c < 5);
  uval = 0;
LAB_00084feb:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : creature_update_creature_control_084ff8 (Original VA: 0x84ff8, Ghidra: FUN_00084ff8)
 * Prototype: undefined4 creature_update_creature_control_084ff8(void);
 * Address  : 0x84ff8 (Size: 552 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 16 -> compevnt_update_creature_and_thing_01a384, comptask_fn_01c7fa, comptool_computer_thing_hand_01e119, comptool_update_creature_and_thing_01f153, comptool_update_creature_and_thing_01f352, comptool_update_creature_and_thing_01f538, comptool_update_creature_and_thing_01f754, compturn_update_creature_and_thing_020436 ...
 * Callees  : 1 -> object_process_slabmap_tile_0c57c4
 ******************************************************************************/
undefined4 creature_update_creature_control_084ff8(void)

{
  byte *thing;
  int val;
  byte arg_dl;
  uint uval;
  byte cctrl_ptr;
  
  if (thing[0x1f] != 5) {
    if ((thing[0x1f] == 1) && (val = object_process_slabmap_tile_0c57c4(), val != 0)) {
      return 1;
    }
    return 0;
  }
  if (((((g_bss_002ed402 != 0) && ((uint)(g_bss_002ed402 + g_bss_002ee894) <= g_game_turn)) ||
       (cctrl_ptr = thing[7], cctrl_ptr == 0x43)) || (((*thing & 0x10) != 0 || ((thing[1] & 2) != 0))))
     || ((*(int *)(thing + 0x5c) >> 0x10 < 1 ||
         (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) != 0)))) { /* thing->ccontrol_idx */
    return 0;
  }
  if (cctrl_ptr == 0xe) {
    cctrl_ptr = thing[8];
  }
  if (cctrl_ptr == 0x58) {
    return 0;
  }
  cctrl_ptr = thing[7];
  if (cctrl_ptr == 0xe) {
    cctrl_ptr = thing[8];
  }
  if (cctrl_ptr != 0x5c) {
    cctrl_ptr = thing[7];
    if (cctrl_ptr == 0xe) {
      cctrl_ptr = thing[8];
    }
    uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
    if (cctrl_ptr != 0x5f) {
      if (*(int *)(thing + 3) >> 0x18 == (uint)arg_dl) {
        cctrl_ptr = thing[7];
        if (cctrl_ptr == 0xe) {
          cctrl_ptr = thing[8];
        }
        if (cctrl_ptr != 0x29) {
          cctrl_ptr = thing[7];
          if (cctrl_ptr == 0xe) {
            cctrl_ptr = thing[8];
          }
          uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
          if (cctrl_ptr != 0x28) {
            cctrl_ptr = thing[7];
            if (cctrl_ptr == 0xe) {
              cctrl_ptr = thing[8];
            }
            uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
            if (cctrl_ptr != 0x2b) {
              cctrl_ptr = thing[7];
              if (cctrl_ptr == 0xe) {
                cctrl_ptr = thing[8];
              }
              uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
              if (cctrl_ptr != 0x2a) {
                return 1;
              }
            }
          }
        }
        if (*(int *)(&g_rooms +
                    (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) * 0x45) >> /* thing->ccontrol_idx */
            0x18 != (uval & 0xff)) {
          return 0;
        }
      }
      else {
        cctrl_ptr = thing[7];
        if (cctrl_ptr == 0xe) {
          cctrl_ptr = thing[8];
        }
        uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
        if (cctrl_ptr != 0x29) {
          cctrl_ptr = thing[7];
          if (cctrl_ptr == 0xe) {
            cctrl_ptr = thing[8];
          }
          uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
          if (cctrl_ptr != 0x28) {
            cctrl_ptr = thing[7];
            if (cctrl_ptr == 0xe) {
              cctrl_ptr = thing[8];
            }
            uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
            if (cctrl_ptr != 0x2b) {
              cctrl_ptr = thing[7];
              if (cctrl_ptr == 0xe) {
                cctrl_ptr = thing[8];
              }
              uval = (uint)CONCAT11(cctrl_ptr,arg_dl);
              if (cctrl_ptr != 0x2a) {
                return 0;
              }
            }
          }
        }
        if (*(int *)(&g_rooms +
                    (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) * 0x45) >> /* thing->ccontrol_idx */
            0x18 != (uval & 0xff)) {
          return 0;
        }
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_085220 (Original VA: 0x85220, Ghidra: FUN_00085220)
 * Prototype: undefined4 creature_fn_085220(void);
 * Address  : 0x85220 (Size: 213 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Module creature.cpp procedure @ 0x085220
 * Callers  : 3 -> creature_update_creature_and_thing_083b20, creature_update_creature_and_thing_083d30, creature_update_creature_and_thing_083f40
 * Callees  : 1 -> object_process_slabmap_tile_0c57c4
 ******************************************************************************/
undefined4 creature_fn_085220(void)

{
  byte *arg_eax;
  int val;
  byte arg_dl;
  byte flag;
  
  if (arg_eax[0x1f] != 5) {
    if ((arg_eax[0x1f] == 1) && (val = object_process_slabmap_tile_0c57c4(), val != 0)) {
      return 1;
    }
    return 0;
  }
  if ((((g_bss_002ed402 == 0) || (g_game_turn < (uint)(g_bss_002ed402 + g_bss_002ee894))) &&
      (flag = arg_eax[7], flag != 0x43)) &&
     ((((*arg_eax & 0x10) == 0 && ((arg_eax[1] & 2) == 0)) && (0 < *(int *)(arg_eax + 0x5c) >> 0x10))))
  {
    if (flag == 0xe) {
      flag = arg_eax[8];
    }
    if (flag != 0x58) {
      flag = arg_eax[7];
      if (flag == 0xe) {
        flag = arg_eax[8];
      }
      if (flag != 0x5c) {
        flag = arg_eax[7];
        if (flag == 0xe) {
          flag = arg_eax[8];
        }
        if (flag != 0x5f) {
          if (*(int *)(arg_eax + 3) >> 0x18 != (uint)arg_dl) {
            return 0;
          }
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}

/******************************************************************************
 * Function : creature_process_map_subtile_085450 (Original VA: 0x85450, Ghidra: FUN_00085450)
 * Prototype: byte * creature_process_map_subtile_085450(void);
 * Address  : 0x85450 (Size: 338 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> magic_update_player_dungeon_04e585
 * Callees  : 1 -> magic_update_creature_control_04fe44
 ******************************************************************************/
byte * creature_process_map_subtile_085450(void)

{
  byte arg_al;
  int val;
  int arg_edx;
  int val_2;
  uint thing_ptr;
  uint uval;
  int arg_ebx;
  byte *thing_ptr_2;
  int val_3;
  int local_24;
  byte *local_20;
  
  local_20 = (byte *)0x0;
  val_3 = 0x7fffffff;
  local_24 = 0;
  do {
    val_2 = (*(int *)(&g_data_0018b6bf + local_24) >> 0x18) +
            ((arg_edx + (arg_edx >> 0x1f) * -0x100) - (uint)((arg_edx >> 0x1f) << 7 < 0) >> 8 & 0xff);
    val = (*(int *)(&g_data_0018b6c0 + local_24) >> 0x18) +
            ((arg_ebx + (arg_ebx >> 0x1f) * -0x100) - (uint)((arg_ebx >> 0x1f) << 7 < 0) >> 8
            & 0xff);
    if (((((-1 < val_2) && (val_2 < 0xff)) && (-1 < val)) &&
        ((val < 0xff &&
         (thing_ptr = *(uint *)((int)&g_map_subtiles + (val_2 + val * 0x100) * 5 + 1),
         (thing_ptr >> 0x1c & 1 << (arg_al & 0x1f)) != 0)))) &&
       (thing_ptr_2 = (&g_thing_ptrs)[(thing_ptr & 0x3fffff) >> 0xb], g_thing_ptrs < thing_ptr_2)) {
      do {
        if ((((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) &&
           ((thing_ptr_2[7] != 0x43 &&
            ((val = magic_update_creature_control_04fe44(), val != 0 &&
             (thing_ptr = (int)(arg_edx - (uint)*(ushort *)(thing_ptr_2 + 0xd)) >> 0x1f, /* thing->mappos.val_x */
             uval = (int)(arg_ebx - (uint)*(ushort *)(thing_ptr_2 + 0xf)) >> 0x1f, /* thing->mappos.val_y */
             val = ((arg_edx - (uint)*(ushort *)(thing_ptr_2 + 0xd) ^ thing_ptr) - thing_ptr) + /* thing->mappos.val_x */
                     ((arg_ebx - (uint)*(ushort *)(thing_ptr_2 + 0xf) ^ uval) - uval), val < val_3) /* thing->mappos.val_y */
             ))))) {
          val_3 = val;
          local_20 = thing_ptr_2;
        }
        thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
      } while (g_thing_ptrs < thing_ptr_2);
    }
    local_24 = local_24 + 2;
  } while (local_24 != 0x12);
  return local_20;
}

/******************************************************************************
 * Function : creature_process_map_subtile_085598 (Original VA: 0x85598, Ghidra: FUN_00085598)
 * Prototype: byte * creature_process_map_subtile_085598(void);
 * Address  : 0x85598 (Size: 351 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> inits_update_slab_subtile_columns_045fd1, process_players_dungeon_command_packet
 * Callees  : 2 -> magic_update_creature_control_04fe44, creature_update_creature_control_084ff8
 ******************************************************************************/
byte * creature_process_map_subtile_085598(void)

{
  byte arg_al;
  int val;
  int arg_edx;
  uint thing_ptr;
  uint uval;
  int arg_ebx;
  int val_2;
  byte *thing_ptr_2;
  int val_3;
  int local_24;
  byte *local_20;
  
  local_20 = (byte *)0x0;
  val_3 = 0x7fffffff;
  local_24 = 0;
  do {
    val = (*(int *)(&g_data_0018b6bf + local_24) >> 0x18) +
            ((arg_edx + (arg_edx >> 0x1f) * -0x100) - (uint)((arg_edx >> 0x1f) << 7 < 0) >> 8 & 0xff);
    val_2 = (*(int *)(&g_data_0018b6c0 + local_24) >> 0x18) +
            ((arg_ebx + (arg_ebx >> 0x1f) * -0x100) - (uint)((arg_ebx >> 0x1f) << 7 < 0) >> 8
            & 0xff);
    if ((((-1 < val) && (val < 0xff)) && (-1 < val_2)) &&
       (((val_2 < 0xff &&
         (thing_ptr = *(uint *)((int)&g_map_subtiles + (val + val_2 * 0x100) * 5 + 1),
         (thing_ptr >> 0x1c & 1 << (arg_al & 0x1f)) != 0)) &&
        (thing_ptr_2 = (&g_thing_ptrs)[(thing_ptr & 0x3fffff) >> 0xb], g_thing_ptrs < thing_ptr_2)))) {
      do {
        if ((((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) &&
           ((thing_ptr_2[7] != 0x43 &&
            (((val = creature_update_creature_control_084ff8(), val != 0 || (val = magic_update_creature_control_04fe44(), val != 0)) &&
             (thing_ptr = (int)(arg_edx - (uint)*(ushort *)(thing_ptr_2 + 0xd)) >> 0x1f, /* thing->mappos.val_x */
             uval = (int)(arg_ebx - (uint)*(ushort *)(thing_ptr_2 + 0xf)) >> 0x1f, /* thing->mappos.val_y */
             val = ((arg_ebx - (uint)*(ushort *)(thing_ptr_2 + 0xf) ^ uval) - uval) + /* thing->mappos.val_y */
                     ((arg_edx - (uint)*(ushort *)(thing_ptr_2 + 0xd) ^ thing_ptr) - thing_ptr), val < val_3)))) /* thing->mappos.val_x */
           )) {
          val_3 = val;
          local_20 = thing_ptr_2;
        }
        thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
      } while (g_thing_ptrs < thing_ptr_2);
    }
    local_24 = local_24 + 2;
  } while (local_24 != 0x12);
  return local_20;
}

/******************************************************************************
 * Function : creature_update_creature_control_0856f8 (Original VA: 0x856f8, Ghidra: FUN_000856f8)
 * Prototype: void creature_update_creature_control_0856f8(void);
 * Address  : 0x856f8 (Size: 86 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> person_fn_065199, person_update_creature_control_065283
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_update_creature_control_0856f8(void)

{
  int thing;
  
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 2) != 0) { /* thing->ccontrol_idx */
    *(undefined2 *)(thing + 0x46) = 300;
    return;
  }
  *(short *)(thing + 0x46) =
       (short)((ulonglong)
               (longlong)
               (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 300) / /* thing->ccontrol_idx */
              0x14) + 300;
  return;
}

/******************************************************************************
 * Function : creature_update_creature_control_085890 (Original VA: 0x85890, Ghidra: FUN_00085890)
 * Prototype: undefined8 creature_update_creature_control_085890(void);
 * Address  : 0x85890 (Size: 193 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 13 -> evil_update_creature_control_028833, inits_told_you_so_create_043bb3, magic_update_creature_and_thing_04e4ad, spell_update_creature_control_071416, spell_update_creature_control_0717de, spell_update_creature_control_071edd, torture_update_creature_and_thing_07436a, torture_update_creature_and_thing_07443f ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 creature_update_creature_control_085890(void)

{
  int thing;
  uint uval;
  uint uval_2;
  int cctrl_ptr;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = (uint)(byte)(&g_bss_002e915b)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
  if (*(short *)(cctrl_ptr + 0x21) != 0) {
    uval = uval * 2;
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 2) != 0) {
    uval = uval * 2;
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 1) != 0) {
    uval = uval / 2;
  }
  uval_2 = *(int *)(thing + 3) >> 0x18;
  if (uval_2 != g_neutral_player_number) {
    cctrl_ptr = uval_2 * 0x1508;
    if (*(short *)(&g_bss_002e19a9 + (uint)*(byte *)(thing + 0x1a) * 2 + cctrl_ptr) != 0) {
      uval = (int)(uval * 5) >> 2;
    }
    if (*(int *)(&g_bss_002e0e11 + cctrl_ptr) != 0) {
      uval = (int)(uval * 5) >> 2;
    }
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : creature_update_player_view_state_085954 (Original VA: 0x85954, Ghidra: FUN_00085954)
 * Prototype: longlong creature_update_player_view_state_085954(void);
 * Address  : 0x85954 (Size: 165 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 9 -> anger_update_creature_control_010dac, prison_update_creature_control_065d3e, scavenge_update_creature_and_thing_06757d, shot_handle_creature_thing_06d3e1, creature_could_create_creature_081fec, food_get_near_food_0aafd4, food_update_creature_and_thing_0ab4bc, food_process_dungeon_room_0ab8dc ...
 * Callees  : 0 -> 
 ******************************************************************************/
longlong creature_update_player_view_state_085954(void)

{
  char ch;
  int gui_btn;
  uint uval;
  int player_off;
  uint arg_edx;
  
  uval = *(int *)(gui_btn + 3) >> 0x18;
  if (uval == g_neutral_player_number) {
    return CONCAT44(arg_edx,uval ^ g_neutral_player_number);
  }
  player_off = uval * 0x4ef;
  if ((&g_bss_0019d51b)[player_off] == '\v') {
    ch = (&g_bss_0019d578)[player_off];
    if (ch == '\0') {
      return CONCAT44(arg_edx,(uint)(*(short *)((int)&g_bss_0019d0f7 + player_off) ==
                                   *(short *)(gui_btn + 0x1b))); /* gui_btn->id_num */
    }
    if (ch == '\x05') {
      return CONCAT44(arg_edx,(uint)(*(short *)(&g_player_influenced_thing_idx + player_off) == *(short *)(gui_btn + 0x1b))) /* gui_btn->id_num */
      ;
    }
    if (ch == '\r') {
      return CONCAT44(arg_edx,(uint)(*(short *)((int)&g_bss_0019d0f7 + player_off) ==
                                   *(short *)(gui_btn + 0x1b))); /* gui_btn->id_num */
    }
    if (ch == '\b') {
      return CONCAT44(arg_edx,(uint)(*(short *)(&g_player_influenced_thing_idx + player_off) == *(short *)(gui_btn + 0x1b))) /* gui_btn->id_num */
      ;
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : creature_process_thing_entity_0859fc (Original VA: 0x859fc, Ghidra: FUN_000859fc)
 * Prototype: undefined8 creature_process_thing_entity_0859fc(void);
 * Address  : 0x859fc (Size: 81 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> compturn_process_map_subtile_022660
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 creature_process_thing_entity_0859fc(void)

{
  int arg_eax;
  uint uval;
  undefined4 arg_edx;
  
  if ((arg_eax != (&g_thing_ptrs)
                 [*(ushort *)((int)&g_bss_0019d0f7 + (*(int *)(arg_eax + 3) >> 0x18) * 0x4ef)]) ||
     (uval = (byte)(&g_data_00191d40)[g_bss_002ee8d3] / 3, uval < 7)) {
    uval = 7;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : creature_update_player_view_state_085aa4 (Original VA: 0x85aa4, Ghidra: FUN_00085aa4)
 * Prototype: void creature_update_player_view_state_085aa4(void);
 * Address  : 0x85aa4 (Size: 47 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae
 * Callees  : 1 -> eyelens_data_frac_dat_027130
 ******************************************************************************/
void creature_update_player_view_state_085aa4(void)

{
  int arg_eax;
  
  if (*(int *)(arg_eax + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
    eyelens_data_frac_dat_027130();
  }
  return;
}

/******************************************************************************
 * Function : creature_process_thing_entity_085ad4 (Original VA: 0x85ad4, Ghidra: FUN_00085ad4)
 * Prototype: void creature_process_thing_entity_085ad4(void);
 * Address  : 0x85ad4 (Size: 69 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_update_player_dungeon_05ba80
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_process_thing_entity_085ad4(void)

{
  int thing_ptr;
  
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6];
  if (thing_ptr == g_thing_ptrs) {
    return;
  }
  do {
    if (*(char *)(thing_ptr + 0x1a) == '\x06') {
      return;
    }
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
  } while (thing_ptr != g_thing_ptrs);
  return;
}

/******************************************************************************
 * Function : creature_process_thing_entity_085b1c (Original VA: 0x85b1c, Ghidra: FUN_00085b1c)
 * Prototype: longlong creature_process_thing_entity_085b1c(void);
 * Address  : 0x85b1c (Size: 133 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> update_update_player_dungeon_0dd500
 * Callees  : 0 -> 
 ******************************************************************************/
longlong creature_process_thing_entity_085b1c(void)

{
  int thing_ptr;
  char ch;
  uint arg_edx;
  
  for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6];
      (thing_ptr != g_thing_ptrs && (*(char *)(thing_ptr + 0x1a) != '\x06'));
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
  }
  if (thing_ptr != 0) {
    ch = *(char *)(thing_ptr + 7);
    if (ch == '\x0e') {
      ch = *(char *)(thing_ptr + 8); /* thing->active_state */
    }
    if (ch != ')') {
      ch = *(char *)(thing_ptr + 7);
      if (ch == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      if (ch != '(') goto LAB_00085b9c;
    }
    return CONCAT44(arg_edx,1);
  }
LAB_00085b9c:
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : creature_update_creature_control_085ba4 (Original VA: 0x85ba4, Ghidra: FUN_00085ba4)
 * Prototype: undefined4 creature_update_creature_control_085ba4(void);
 * Address  : 0x85ba4 (Size: 285 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> creature_process_thing_entity_0849c8
 * Callees  : 7 -> anger_fn_0104db, anger_fn_010ad6, person_fn_063b6d, person_external_change_state_but_064a5f, person_fn_064c4d, creature_process_thing_entity_085df8, move_process_map_subtile_0b3850
 ******************************************************************************/
undefined4 creature_update_creature_control_085ba4(void)

{
  bool flag;
  char cctrl_ptr;
  undefined2 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_ebx;
  undefined4 uval_2;
  
  uval_2 = *(undefined4 *)(arg_ebx + 0xd);
  uval = move_process_map_subtile_0b3850(uval_2,*(undefined2 *)(arg_ebx + 0x11));
  cctrl_ptr = *(char *)(arg_ebx + 7);
  flag = false;
  if (cctrl_ptr != 'K') {
    if (cctrl_ptr == '\x0e') {
      cctrl_ptr = *(char *)(arg_ebx + 8);
    }
    if (cctrl_ptr != 'L') goto LAB_00085c10;
  }
  cctrl_ptr = *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x48);
  if (cctrl_ptr != '\0') {
    *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x48) = cctrl_ptr + -1;
  }
  person_fn_063b6d(uval_2,uval);
  flag = true;
LAB_00085c10:
  creature_process_thing_entity_085df8();
  if (!flag) {
    cctrl_ptr = *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x49);
    if (cctrl_ptr != -1) {
      *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x49) = cctrl_ptr + '\x01';
    }
  }
  anger_fn_0104db();
  anger_fn_010ad6();
  cctrl_ptr = person_fn_064c4d();
  if ((cctrl_ptr != '\0') && (cctrl_ptr = person_external_change_state_but_064a5f(), cctrl_ptr != '\0')) {
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_01 + 100)] + 0x282) = 0x32;
  }
  return 1;
}

/******************************************************************************
 * Function : creature_update_creature_control_085cc4 (Original VA: 0x85cc4, Ghidra: FUN_00085cc4)
 * Prototype: void creature_update_creature_control_085cc4(void);
 * Address  : 0x85cc4 (Size: 305 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> creature_process_thing_entity_0849c8, update_creature_has_illegal_state_0e1b88
 * Callees  : 5 -> anger_fn_010434, instance_negative_instance_049bfc, sound_fn_06e538, structs_update_creature_control_072af4, creature_update_creature_control_081c70
 ******************************************************************************/
void creature_update_creature_control_085cc4(void)

{
  uint unsynced_seed;
  char ch;
  int cctrl_ptr;
  int arg_edx;
  uint *word_ptr;
  uint uStack_18;
  int local_14;
  
  word_ptr = (uint *)&local_14;
  unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
  local_14 = g_unsynced_random_seed % 3 + 0x70;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  uStack_18 = (uint)*(byte *)(cctrl_ptr + 0xd2);
  if (uStack_18 == 0) {
    word_ptr = &uStack_18;
    instance_negative_instance_049bfc();
  }
  else {
    if (*(char *)(cctrl_ptr + 0x41) == '\0') {
      if (*(char *)(cctrl_ptr + 0x42) != -1) {
        *(char *)(cctrl_ptr + 0x42) = *(char *)(cctrl_ptr + 0x42) + '\x01';
      }
    }
    else {
      *(char *)(cctrl_ptr + 0x41) = *(char *)(cctrl_ptr + 0x41) + -1;
    }
    uStack_18 = 0x85d68;
    ch = creature_update_creature_control_081c70();
    if (ch != '\0') {
      *(undefined2 *)(arg_edx + 0x17) = 8;
    }
    *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x39) = 0;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x100;
  *(undefined4 *)((int)word_ptr + -8) = 2;
  *(undefined4 *)((int)word_ptr + -0xc) = 0;
  *(undefined4 *)((int)word_ptr + -0x10) = 3;
  *(undefined4 *)((int)word_ptr + -0x14) = 0x85da6;
  sound_fn_06e538();
  *(undefined4 *)((int)word_ptr + -0x14) = 0x85dcb;
  anger_fn_010434();
  cctrl_ptr = (*(int *)(arg_edx + 3) >> 0x18) * 0x1508;
  *(int *)(&g_bss_002e181c + cctrl_ptr) = *(int *)(&g_bss_002e181c + cctrl_ptr) + 1;
  *(undefined4 *)((int)word_ptr + -0x14) = 0x85ded;
  structs_update_creature_control_072af4();
  return;
}

/******************************************************************************
 * Function : creature_process_thing_entity_085df8 (Original VA: 0x85df8, Ghidra: FUN_00085df8)
 * Prototype: void creature_process_thing_entity_085df8(void);
 * Address  : 0x85df8 (Size: 389 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> creature_process_thing_entity_0849c8, creature_update_creature_control_085ba4
 * Callees  : 3 -> inits_allocate_light_object_043f07, packet_handle_double_click_action, move_process_map_subtile_0b3850
 ******************************************************************************/
void creature_process_thing_entity_085df8(void)

{
  uint uval;
  short short_val;
  short *arg_eax;
  uint rand_seed;
  short extraout_DX;
  short short_val_2;
  undefined4 arg_edx;
  int arg_ebx;
  int val;
  
  rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
  short_val = move_process_map_subtile_0b3850();
  short_val = short_val - extraout_DX;
  val = 0;
  do {
    if (val == 0) {
      short_val_2 = *arg_eax;
    }
    else {
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      uval = rand_seed >> 0xd;
      g_action_random_seed = uval | rand_seed * 0x80000;
      short_val_2 = (short)((uint)((&g_slab_attr_table)[uval & 0x7ff] * 0x7f) >> 0x10) + *arg_eax;
    }
    rand_seed = inits_allocate_light_object_043f07(short_val_2,short_val);
    if (rand_seed <= g_thing_ptrs) break;
    if (val == 0) {
      *(undefined4 *)(rand_seed + 0x13) = arg_edx;
    }
    else {
      uval = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = uval >> 0xd | uval * 0x80000;
      uval = g_action_random_seed % (uint)(*(int *)(rand_seed + 0x1d) >> 0x18);
      *(undefined4 *)(rand_seed + 0x13) = 0;
      *(char *)(rand_seed + 0x20) =
           ((char)uval - (char)((*(int *)(rand_seed + 0x1d) >> 0x18) / 2)) +
           (char)((uint)*(int *)(rand_seed + 0x1d) >> 0x18);
    }
    val = val + 1;
  } while (val < 8);
  packet_handle_double_click_action();
  *(int *)(&g_player_double_click_turn + arg_ebx * 0x4ef) = g_game_turn + 0x10;
  return;
}

/******************************************************************************
 * Function : creature_update_player_view_state_085f80 (Original VA: 0x85f80, Ghidra: FUN_00085f80)
 * Prototype: void creature_update_player_view_state_085f80(void);
 * Address  : 0x85f80 (Size: 268 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> creature_how_hero_have_tend_08608c
 * Callees  : 7 -> eyelens_data_frac_dat_027130, newgui_fn_05afda, newgui_fn_05c848, newgui_fn_05cf03, workshop_fn_0780c2, creature_update_creature_control_080fbc, light_already_list_0ad54c
 ******************************************************************************/
void creature_update_player_view_state_085f80(void)

{
  ushort uval;
  int arg_eax;
  
  creature_update_creature_control_080fbc();
  *(undefined2 *)(&g_player_influenced_thing_idx + (*(int *)(arg_eax + 3) >> 0x18) * 0x4ef) = 0;
  if (*(int *)(arg_eax + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
    eyelens_data_frac_dat_027130();
  }
  workshop_fn_0780c2();
  if (*(int *)(arg_eax + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
    newgui_fn_05afda();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05cf03();
    uval = CONCAT11(g_game_operation_flags,(g_game_operation_flags & 0x3f) >> 5) & 0xbf01;
    g_game_operation_flags = (byte)(uval >> 8) | (char)uval << 6;
  }
  light_already_list_0ad54c();
  return;
}

/******************************************************************************
 * Function : creature_how_hero_have_tend_08608c (Original VA: 0x8608c, Ghidra: FUN_0008608c)
 * Prototype: undefined4 creature_how_hero_have_tend_08608c(char param_1,char param_2);
 * Address  : 0x8608c (Size: 1324 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp lines 3859
 * Purpose  : String 'HOW CAN HERO HAVE TEND TO IMPRISON'
 * Callers  : 20 -> effect_illegal_hit_thing_type_02585f, effect_update_creature_and_thing_0266af, entrance_update_creature_and_thing_026ce2, entrance_update_creature_control_026dbc, eyelens_fn_026faa, good_update_creature_control_0386e1, instance_update_creature_and_thing_04af38, magic_update_creature_and_thing_04f92f ...
 * Callees  : 11 -> anger_fn_010434, combtool_update_creature_control_01836b, evil_fn_02778e, group_update_creature_and_thing_039c3e, instance_update_creature_control_049dd9, moodneed_fn_051374, person_fn_064a2e, structs_update_creature_control_072af4 ...
 ******************************************************************************/
undefined4 creature_how_hero_have_tend_08608c(char param_1,char param_2)

{
  short *val;
  char *str_ptr;
  char ch;
  byte flag;
  undefined2 *word_ptr;
  byte *thing;
  int val_2;
  uint uval;
  int cctrl_ptr;
  char arg_cl;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint arg_edx;
  undefined2 *extraout_EDX;
  byte arg_bl;
  undefined2 *word_ptr_2;
  int val_3;
  undefined2 *local_1c;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  person_fn_064a2e();
  combtool_update_creature_control_01836b();
  if ((*(ushort *)(cctrl_ptr + 0x7a) & 0xfff) != 0) {
    group_update_creature_and_thing_039c3e();
  }
  local_1c = extraout_EDX;
  if (*(int *)(thing + 3) >> 0x18 != (uint)g_neutral_player_number) {
    local_1c = &g_dungeons + (*(int *)(thing + 3) >> 0x18) * 0xa84;
  }
  if (((g_thing_ptrs < arg_edx) && (*(int *)(arg_edx + 3) >> 0x18 == (uint)g_neutral_player_number)) ||
     ((int)(char)arg_bl == (uint)g_neutral_player_number)) {
    param_1 = '\0';
  }
  evil_fn_02778e();
  if (extraout_ECX != 0) {
    ch = *(char *)(cctrl_ptr + 0x23);
    val_2 = *(int *)((int)local_1c + 0x139f);
    flag = thing[0x1a];
    word_ptr = local_1c + val_2;
    do {
      word_ptr_2 = word_ptr;
      val_2 = val_2 + -1;
      if (val_2 < 0) {
        if (*(int *)((int)local_1c + 0x139f) == 0x40) {
          *(byte *)((int)local_1c + *(int *)((int)local_1c + 0x13a3) * 2 + 0x131f) = flag;
          *(char *)(local_1c + *(int *)((int)local_1c + 0x13a3) + 0x990) = ch;
          val_2 = *(int *)((int)local_1c + 0x13a3) + 1;
          *(int *)((int)local_1c + 0x13a3) = val_2;
          if (val_2 == 0x40) {
            *(undefined4 *)((int)local_1c + 0x13a3) = 0;
          }
        }
        else {
          *(byte *)((int)local_1c + *(int *)((int)local_1c + 0x139f) * 2 + 0x131f) = flag;
          *(char *)(local_1c + *(int *)((int)local_1c + 0x139f) + 0x990) = ch;
          *(int *)((int)local_1c + 0x139f) = *(int *)((int)local_1c + 0x139f) + 1;
        }
        break;
      }
      word_ptr = word_ptr_2 + -1;
    } while ((*(byte *)((int)word_ptr_2 + 0x131d) != flag) || (*(char *)(word_ptr_2 + 0x98f) != ch));
  }
  if ((local_1c != (undefined2 *)0x0) && (param_1 != '\0')) {
    *(short *)((int)local_1c + 0xad1) = *(short *)((int)local_1c + 0xad1) + 1;
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 4) != 0) {
    *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xfb;
    val_2 = cctrl_ptr + 6;
    val_3 = cctrl_ptr;
    do {
      if (*(short *)(val_3 + 0x2b3) != 0) {
        structs_update_creature_control_072af4();
        *(undefined2 *)(val_3 + 0x2b3) = 0;
        val_2 = extraout_ECX_00;
      }
      val_3 = val_3 + 2;
    } while (val_3 != val_2);
  }
  if ((*(byte *)(cctrl_ptr + 0xad) & 1) != 0) {
    *(byte *)(cctrl_ptr + 0xad) = *(byte *)(cctrl_ptr + 0xad) & 0xfe;
    val_2 = cctrl_ptr + 6;
    val_3 = cctrl_ptr;
    do {
      if (*(short *)(val_3 + 0x2b9) != 0) {
        structs_update_creature_control_072af4();
        *(undefined2 *)(val_3 + 0x2b9) = 0;
        val_2 = extraout_ECX_01;
      }
      val_3 = val_3 + 2;
    } while (val_3 != val_2);
  }
  if (param_1 == '\0') {
    uval = *(int *)(cctrl_ptr + 0x1cf) >> 0x18;
    if ((uval == 0xffffffff) || (uval == g_neutral_player_number)) goto LAB_000863ab;
    val_2 = uval * 0x1508;
    if (*(byte *)(cctrl_ptr + 0x1d2) != thing[6]) {
      (&g_bss_002e105c)[uval * 0xa84] = (&g_bss_002e105c)[uval * 0xa84] + 1;
      goto LAB_000863ab;
    }
  }
  else if (g_thing_ptrs < arg_edx) {
    if (*(byte *)(arg_edx + 6) != thing[6]) {
      (&g_bss_002e105c)[(*(int *)(arg_edx + 3) >> 0x18) * 0xa84] =
           (&g_bss_002e105c)[(*(int *)(arg_edx + 3) >> 0x18) * 0xa84] + 1;
      goto LAB_000863ab;
    }
    val_2 = (*(int *)(arg_edx + 3) >> 0x18) * 0x1508;
  }
  else {
    uval = (uint)(char)arg_bl;
    if ((uval == 0xffffffff) || (uval == g_neutral_player_number)) {
      uval = *(int *)(cctrl_ptr + 0x1cf) >> 0x18;
      if ((uval == 0xffffffff) || (uval == g_neutral_player_number)) goto LAB_000863ab;
      val_2 = uval * 0x1508;
      if (*(byte *)(cctrl_ptr + 0x1d2) != thing[6]) {
        (&g_bss_002e105c)[uval * 0xa84] = (&g_bss_002e105c)[uval * 0xa84] + 1;
        goto LAB_000863ab;
      }
    }
    else {
      val_2 = uval * 0x1508;
      if (arg_bl != thing[6]) {
        (&g_bss_002e105c)[uval * 0xa84] = (&g_bss_002e105c)[uval * 0xa84] + 1;
        goto LAB_000863ab;
      }
    }
  }
  *(int *)(&g_bss_002e1830 + val_2) = *(int *)(&g_bss_002e1830 + val_2) + 1;
LAB_000863ab:
  if ((((g_thing_ptrs < arg_edx) && (*(int *)(arg_edx + 3) >> 0x18 != (uint)g_neutral_player_number)) &&
      ((int)(char)arg_bl != (uint)g_neutral_player_number)) && (local_1c != (undefined2 *)0x0)) {
    if (((*(byte *)(arg_edx + 6) == thing[6]) && (*(char *)(arg_edx + 0x1a) == '\x1a')) &&
       (thing[0x1a] == 0x13)) {
      *(int *)((int)local_1c + 0x1267) = *(int *)((int)local_1c + 0x1267) + 1;
    }
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
    val_2 = g_my_player_word >> 0x18;
    val = (short *)(cctrl_ptr + 0xc2);
    *val = *val + 1;
    if ((*(int *)(thing + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) ||
       (*(int *)(arg_edx + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef])) {
      moodneed_fn_051374();
    }
    if ((*(int *)(arg_edx + 3) >> 0x18 == (uint)g_bss_002eb542) &&
       (((&g_bss_002e0591)[(uint)g_bss_002eb542 * 0x1508] & 1) != 0)) {
      LbErrorLog(); /* LbErrorLog("creature.cpp", line 3859, "HOW CAN HERO HAVE TEND TO IMPRISON") */
    }
    anger_fn_010434();
    if (param_1 != '\0') {
      str_ptr = (char *)(cctrl_ptr + 0x9a);
      *str_ptr = *str_ptr + '\x01';
    }
    if (local_1c != (undefined2 *)0x0) {
      val = (short *)((int)local_1c + (*(int *)(arg_edx + 3) >> 0x18) * 2 + 0xb01);
      *val = *val + g_bss_002eb9fa;
    }
    if ((((param_2 == '\0') &&
         (cctrl_ptr = (*(int *)(arg_edx + 3) >> 0x18) * 0x1508, *(short *)(&g_bss_002e059c + cctrl_ptr) != 0))
        && (((&g_bss_002e0591)[cctrl_ptr] & 1) != 0)) && (arg_cl == '\0')) {
      instance_update_creature_control_049dd9();
      thing[7] = 0x43;
      *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
           *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) | 4; /* thing->ccontrol_idx */
      *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
           *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) | 2; /* thing->ccontrol_idx */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x280) = 2000; /* thing->ccontrol_idx */
      thing[0x5e] = 1;
      thing[0x5f] = 0;
      return 1;
    }
    if ((arg_cl != '\0') && ((*thing & 0x20) != 0)) {
      creature_update_player_view_state_085f80();
    }
  }
  else if ((arg_cl != '\0') && ((*thing & 0x20) != 0)) {
    creature_update_player_view_state_085f80();
  }
  creature_create_dead_thing_07fac8();
  return 1;
}

/******************************************************************************
 * Function : creature_update_creature_control_0865b8 (Original VA: 0x865b8, Ghidra: FUN_000865b8)
 * Prototype: undefined4 creature_update_creature_control_0865b8(void);
 * Address  : 0x865b8 (Size: 318 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> process_players_dungeon_command_packet, command_process_map_subtile_07884b, draw_update_player_dungeon_08a194
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 creature_update_creature_control_0865b8(void)

{
  byte *thing;
  int arg_edx;
  byte flag;
  
  if (*(int *)(thing + 3) >> 0x18 == arg_edx) {
    if ((((CONCAT31((uint3)(*(int *)(thing + 3) >> 0x1f) ^ (uint3)((uint)arg_edx >> 8),thing[0x1f])
           == 5) && ((*thing & 0x10) == 0)) && ((thing[1] & 2) == 0)) &&
       (flag = thing[7], flag != 0x43)) {
      if (flag == 0xe) {
        flag = thing[8];
      }
      if (flag != 0x58) {
        flag = thing[7];
        if (flag == 0xe) {
          flag = thing[8];
        }
        if (flag != 0x5c) {
          flag = thing[7];
          if (flag == 0xe) {
            flag = thing[8];
          }
          if (flag != 0x5f) {
            flag = thing[7];
            if (flag == 0xe) {
              flag = thing[8];
            }
            if (flag != 0x29) {
              flag = thing[7];
              if (flag == 0xe) {
                flag = thing[8];
              }
              if (flag != 0x28) {
                flag = thing[7];
                if (flag == 0xe) {
                  flag = thing[8];
                }
                if (flag != 0x2b) {
                  flag = thing[7];
                  if (flag == 0xe) {
                    flag = thing[8];
                  }
                  if (flag != 0x2a) {
                    return 1;
                  }
                }
              }
            }
            if (*(int *)(&g_rooms +
                        (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) * 0x45) /* thing->ccontrol_idx */
                >> 0x18 != arg_edx) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    if ((thing[0x1f] == 1) && (thing[0x1a] == 10)) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_0866f8 (Original VA: 0x866f8, Ghidra: FUN_000866f8)
 * Prototype: undefined4 creature_fn_0866f8(void);
 * Address  : 0x866f8 (Size: 135 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x0866f8
 * Callers  : 2 -> process_players_dungeon_command_packet, draw_update_player_dungeon_08a194
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 creature_fn_0866f8(void)

{
  byte *arg_eax;
  byte flag;
  int arg_edx;
  
  if ((((*(int *)(arg_eax + 3) >> 0x18 == arg_edx) && (arg_eax[0x1f] == 5)) && ((*arg_eax & 0x10) == 0))
     && (((arg_eax[1] & 2) == 0 && (flag = arg_eax[7], flag != 0x43)))) {
    if (flag == 0xe) {
      flag = arg_eax[8];
    }
    if (flag != 0x58) {
      flag = arg_eax[7];
      if (flag == 0xe) {
        flag = arg_eax[8];
      }
      if (flag != 0x5c) {
        flag = arg_eax[7];
        if (flag == 0xe) {
          flag = arg_eax[8];
        }
        if (flag != 0x5f) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : creature_fn_086780 (Original VA: 0x86780, Ghidra: FUN_00086780)
 * Prototype: void creature_fn_086780(void);
 * Address  : 0x86780 (Size: 173 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x086780
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void creature_fn_086780(void)

{
  int val;
  int arg_eax;
  int val_2;
  uint arg_edx;
  int val_3;
  int arg_ebx;
  
  val_3 = *(int *)(arg_eax + 0x139f);
  val = val_3 * 2 + arg_eax;
  while( true ) {
    val_2 = val;
    val_3 = val_3 + -1;
    if (val_3 < 0) break;
    val = val_2 + -2;
    if ((*(byte *)(val_2 + 0x131d) == arg_edx) &&
       (CONCAT31((int3)(arg_edx >> 8),*(undefined1 *)(val_2 + 0x131e)) == arg_ebx)) {
      return;
    }
  }
  if (*(int *)(arg_eax + 0x139f) != 0x40) {
    *(char *)(arg_eax + 0x131f + *(int *)(arg_eax + 0x139f) * 2) = (char)arg_edx;
    *(char *)(arg_eax + 0x1320 + *(int *)(arg_eax + 0x139f) * 2) = (char)arg_ebx;
    *(int *)(arg_eax + 0x139f) = *(int *)(arg_eax + 0x139f) + 1;
    return;
  }
  *(char *)(arg_eax + 0x131f + *(int *)(arg_eax + 0x13a3) * 2) = (char)arg_edx;
  *(char *)(arg_eax + 0x1320 + *(int *)(arg_eax + 0x13a3) * 2) = (char)arg_ebx;
  val_3 = *(int *)(arg_eax + 0x13a3) + 1;
  *(int *)(arg_eax + 0x13a3) = val_3;
  if (val_3 != 0x40) {
    return;
  }
  *(undefined4 *)(arg_eax + 0x13a3) = 0;
  return;
}

/******************************************************************************
 * Function : creature_fn_086830 (Original VA: 0x86830, Ghidra: FUN_00086830)
 * Prototype: undefined4 creature_fn_086830(void);
 * Address  : 0x86830 (Size: 6 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : Module creature.cpp procedure @ 0x086830
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 creature_fn_086830(void)

{
  return 0xffffffff;
}

/******************************************************************************
 * Function : creature_dene_says_big_hello_08685c (Original VA: 0x8685c, Ghidra: FUN_0008685c)
 * Prototype: void creature_dene_says_big_hello_08685c(void);
 * Address  : 0x8685c (Size: 2361 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies'
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 24 -> magic_data_mapfadeg_dat_050708, magic_data_mapfadeg_dat_0508a9, newgui_draw_text_overlay_05449e, newgui_draw_text_overlay_058ba8, newgui_fn_058e1c, sound_simon_says_hi_everyone_06f0cd, specials_fn_070bf9, draw_update_player_dungeon_0872b8 ...
 ******************************************************************************/
void creature_dene_says_big_hello_08685c(void)

{
  ushort saved_draw_flags;
  undefined4 uval;
  uint uval_2;
  int extraout_ECX;
  int val;
  int extraout_ECX_00;
  uint ui_scale;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined *word_ptr;
  
  (&g_player_state_base)[(g_my_player_word >> 0x18) * 0x4ef] =
       (&g_player_state_base)[(g_my_player_word >> 0x18) * 0x4ef] & 0xfe;
  if (g_game_type != '\x01') {
    if (g_bss_002e90b1 == '\x02') {
      bflib_system_io_fn_0ebc10();
    }
    else {
      draw_update_player_dungeon_08a194();
    }
    switch((&g_player_view_type)[(g_my_player_word >> 0x18) * 0x4ef]) {
    case 1:
      draw_update_creature_and_thing_087870();
      g_bss_00377768 = 0;
      break;
    case 2:
      draw_update_player_dungeon_0872b8();
      g_bss_00377768 = 0;
      break;
    case 3:
      if (g_bss_00377768 == 0) {
        if (g_active_screen_mode == 1) {
          prepare_file_path();
          uval = prepare_file_path();
          dk_sprintf(&g_log_sprintf_buf,s__s_gmap_raw_0016a133,uval);
        }
        else {
          prepare_file_path();
          uval = prepare_file_path();
          dk_sprintf(&g_log_sprintf_buf,s__s_gmaphi_raw_0016a146,uval);
        }
        bflib_system_io_fn_0e984c();
        g_bss_00377768 = 1;
      }
      draw_fn_0880d0();
      draw_update_slab_subtile_columns_0882b4();
      newgui_draw_text_overlay_05449e();
      draw_process_map_subtile_08bde8();
      if ((g_bss_002e78e9 == 0) || (g_bss_002e78e9 != 0x14 && 0x13 < g_bss_002e78e9)) {
        val = specials_fn_070bf9();
        word_ptr = g_bss_00333853;
        if ((val == 0) &&
           ((word_ptr = (undefined *)0x0, 0x31 < g_bss_002e78e9 && (g_bss_002e78e9 < 0x50)))) {
          word_ptr = &g_bss_00334025;
        }
      }
      else {
        word_ptr = *(undefined **)(&g_bss_003334bf + (uint)g_bss_002e78e9 * 4);
      }
      if (word_ptr != (undefined *)0x0) {
        g_lb_display_draw_flags = 0;
        g_lb_current_font_ptr = g_frontend_font_ptr;
        LbTextDraw();
        bflib_system_io_draw_text_overlay_0e6c1c();
        LbTextDrawFormatted();
      }
      newgui_draw_text_overlay_058ba8();
      break;
    case 5:
      draw_fn_087694();
      g_bss_00377768 = extraout_ECX;
      break;
    case 6:
      g_bss_00377768 = 0;
      uval = magic_data_mapfadeg_dat_050708();
      *(undefined4 *)(&g_bss_0019d585 + (g_my_player_word >> 0x18) * 0x4ef) = uval;
      break;
    case 7:
      g_bss_00377768 = 0;
      uval = magic_data_mapfadeg_dat_0508a9();
      *(undefined4 *)(&g_bss_0019d585 + (g_my_player_word >> 0x18) * 0x4ef) = uval;
    }
    LbTextDraw();
    if (6 < g_bss_003482c1) {
      g_bss_003482c1 = g_bss_003482c1 + 1;
      g_lb_current_font_ptr = g_frontend_font_ptr;
      dk_sprintf(&g_log_sprintf_buf,s_Dene_says_a_big__Hello__to_Goth_B_0016a154);
      g_lb_display_draw_flags = 0x40;
      val = 0;
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
    LbTextDraw();
    g_lb_current_font_ptr = g_frontend_font_ptr;
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
    LbTextDraw();
    val = (g_my_player_word >> 0x18) * 0x4ef;
    if (((&g_players)[val] & 4) != 0) {
      dk_sprintf(&g_log_sprintf_buf,&g_data_0016a18c,&g_player_mp_message_text + val); /* 0x16a18c=">%s_" */
      LbTextDrawFormatted();
    }
    saved_draw_flags = g_lb_display_draw_flags;
    if (g_bss_0037776c != 0) {
      LbTextDraw();
      g_lb_current_font_ptr = g_frontend_font_ptr;
      g_lb_display_draw_flags = 0;
      dk_sprintf(&g_log_sprintf_buf,&g_data_0016a191,g_bss_0037776c);
      bflib_system_io_draw_text_overlay_0e6d20();
      get_scaled_viewport_bottom_y();
      bflib_system_io_draw_text_overlay_0e6c1c();
      LbTextDrawFormatted();
      g_bss_0037776c = 0;
    }
    g_lb_display_draw_flags = saved_draw_flags;
    val = specials_fn_070bf9();
    if (val != 0) {
      draw_draw_text_overlay_08d998();
    }
    if (((g_game_operation_flags & 1) != 0) && ((g_game_operation_flags & 0x80) == 0)) {
      g_lb_current_font_ptr = g_frontend_font_ptr;
      uval_2 = 0;
      if (g_frontend_font_ptr != 0) {
        uval_2 = (uint)*(byte *)(g_frontend_font_ptr + 10);
      }
      ui_scale = (uint)g_units_per_pixel;
      val = bflib_system_io_draw_text_overlay_0e6c1c();
      g_lb_display_draw_flags = 0x100;
      LbTextDraw(0x10 / g_units_per_pixel,
                   (int)(uval_2 * ui_scale * 2 + val * CONCAT22(extraout_var,g_units_per_pixel)) /
                   (int)(uint)g_units_per_pixel);
      newgui_fn_058e1c();
      LbTextDrawFormatted();
      LbTextDraw();
    }
    if (g_bss_002ed402 != 0) {
      if (g_game_turn < (uint)(g_bss_002ee894 + g_bss_002ed402)) {
        val = g_game_turn - (g_bss_002ee894 + g_bss_002ed402);
      }
      else if (g_game_turn < (uint)(g_bss_002ed406 - g_bss_002ee898)) {
        val = 0;
      }
      else {
        val = g_bss_002ed406 - g_game_turn;
      }
      g_lb_current_font_ptr = g_frontend_font_ptr;
      dk_sprintf(&g_log_sprintf_buf,s__s__03d_0016a194,g_bss_00333bb3,val / 2);
      if (g_lb_current_font_ptr == 0) {
        uval_2 = 0;
      }
      else {
        uval_2 = (uint)*(byte *)(g_lb_current_font_ptr + 10);
      }
      val = bflib_system_io_draw_text_overlay_0e6c1c();
      g_lb_display_draw_flags = 0x100;
      LbTextDraw((int)(uval_2 * 6 + val * CONCAT22(extraout_var_00,g_units_per_pixel)) /
                   (int)(uint)g_units_per_pixel,0x10 / g_units_per_pixel);
      newgui_fn_058e1c();
      LbTextDrawFormatted();
      LbTextDraw();
    }
    sound_simon_says_hi_everyone_06f0cd();
  }
  return;
}

