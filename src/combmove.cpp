/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: combmove.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 5
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : combmove_room_state_016640 (Original VA: 0x16640, Ghidra: FUN_00016640)
 * Prototype: undefined4 combmove_room_state_016640(void);
 * Address  : 0x16640 (Size: 218 bytes)
 * Module   : combmove.cpp [direct_file_string_xref]
 * OrigLine : combmove.cpp lines 47, 50
 * Purpose  : String 'NO ROOM FOR STATE'
 * Callers  : 3 -> combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29
 * Callees  : 4 -> scavenge_fn_0671e9, room_fn_0cc4a0, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
undefined4 combmove_room_state_016640(void)

{
  int arg_eax;
  int val;
  int room_off;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 arg_dl;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val == 0) || (*(short *)(val + 10) != 0x10)) ||
     (*(short *)(val + 1) != *(short *)(extraout_ECX + 0x7c))) {
    if (*(short *)(extraout_ECX + 0x7c) == 0) {
      LbErrorLog(); /* LbErrorLog("combmove.cpp", line 47, "NO ROOM FOR STATE") */
      LbErrorLog(); /* LbErrorLog("combmove.cpp", line 50, "HMMM CANNOT GET TO GUARD POST!") */
      val = extraout_ECX_01;
    }
    else {
      room_off = (uint)*(ushort *)(extraout_ECX + 0x7c) * 0x45;
      val = extraout_ECX;
      if (((((&g_rooms)[room_off] & 1) != 0) && ((&g_bss_002ddd1e)[room_off] == *(char *)(arg_eax + 6)))
         && (*(short *)(&g_room_slabs_count + room_off) == 0x10)) {
        val = scavenge_fn_0671e9();
        if (val < 0x1b01) {
          return 0;
        }
        val = room_fn_0cc4a0();
        if (val == 0) {
          *(undefined2 *)(extraout_ECX_00 + 0x2b1) = 0;
          return 0;
        }
        *(undefined1 *)(arg_eax + 8) = arg_dl;
        return 1;
      }
    }
    *(undefined2 *)(val + 0x2b1) = 0;
  }
  return 0;
}

/******************************************************************************
 * Function : combmove_update_creature_control_01671a (Original VA: 0x1671a, Ghidra: FUN_0001671a)
 * Prototype: undefined4 combmove_update_creature_control_01671a(void);
 * Address  : 0x1671a (Size: 392 bytes)
 * Module   : combmove.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 5 -> combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29, research_update_creature_control_066247, train_get_where_we_re_0752c3
 * Callees  : 4 -> move_process_map_subtile_0b28e8, move_fn_0b3d90, move_fn_0b4ac4, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 combmove_update_creature_control_01671a(void)

{
  uint rand_seed;
  short short_val;
  int thing;
  int val;
  int val_2;
  int val_3;
  int arg_ecx;
  int arg_edx;
  undefined1 arg_bl;
  undefined4 *cctrl_ptr;
  undefined8 uval;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  
  val = (uint)*(ushort *)(arg_edx + 0xd) - (uint)*(ushort *)(thing + 0xd); /* thing->mappos.val_x */
  val_2 = (uint)*(ushort *)(arg_edx + 0xf) - (uint)*(ushort *)(thing + 0xf); /* thing->mappos.val_y */
  cctrl_ptr = (undefined4 *)&local_1c;
  if (((arg_ecx != 0) &&
      (cctrl_ptr = (undefined4 *)&local_1c,
      (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 3) & 0x10) == 0)) && /* thing->ccontrol_idx */
     (cctrl_ptr = (undefined4 *)&local_1c,
     (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 3) & 8) == 0)) { /* thing->ccontrol_idx */
    local_1c = *(short *)(thing + 0xd) - (short)val; /* thing->mappos.val_x */
    local_1a = *(short *)(thing + 0xf) - (short)val_2; /* thing->mappos.val_y */
    uStack_20 = 0x1677a;
    local_18 = move_process_map_subtile_0b28e8();
    cctrl_ptr = &uStack_20;
    uStack_20 = 1;
    val_3 = move_fn_0b4ac4();
    if (val_3 != -1) {
      return 1;
    }
  }
  local_1c = *(short *)(thing + 0xd); /* thing->mappos.val_x */
  local_1a = *(short *)(thing + 0xf); /* thing->mappos.val_y */
  *(undefined4 *)((int)cctrl_ptr + -4) = 0x167b2;
  bflib_system_io_fn_0e69fc();
  *(undefined4 *)((int)cctrl_ptr + -4) = 0x167bb;
  uval = bflib_system_io_fn_0e69fc();
  if ((int)uval < (int)((ulonglong)uval >> 0x20)) {
    if (val < 1) {
      local_1c = CONCAT11(local_1c._1_1_ + '\x01',(undefined1)local_1c);
    }
    else {
      local_1c = local_1c + -0x100;
    }
  }
  else if (val_2 < 1) {
    local_1a = CONCAT11(local_1a._1_1_ + '\x01',(undefined1)local_1a);
  }
  else {
    local_1a = local_1a + -0x100;
  }
  *(undefined4 *)((int)cctrl_ptr + -4) = 0x167eb;
  local_18 = move_process_map_subtile_0b28e8();
  *(undefined4 *)((int)cctrl_ptr + -4) = 0x167fb;
  short_val = move_fn_0b3d90();
  if (short_val == 0) {
    local_1c = *(short *)(thing + 0xd); /* thing->mappos.val_x */
    local_1a = *(short *)(thing + 0xf); /* thing->mappos.val_y */
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    rand_seed = g_action_random_seed >> 0xd;
    g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
    if ((rand_seed & 1) == 0) {
      short_val = 1;
    }
    else {
      short_val = -1;
    }
    *(undefined4 *)((int)cctrl_ptr + -4) = 0x1685f;
    bflib_system_io_fn_0e69fc();
    *(undefined4 *)((int)cctrl_ptr + -4) = 0x16868;
    uval = bflib_system_io_fn_0e69fc();
    if ((int)uval < (int)((ulonglong)uval >> 0x20)) {
      local_1a = local_1a + short_val * 0x300;
    }
    else {
      local_1c = local_1c + short_val * 0x300;
    }
    *(undefined4 *)((int)cctrl_ptr + -4) = 0x16880;
    local_18 = move_process_map_subtile_0b28e8();
    *(undefined4 *)((int)cctrl_ptr + -4) = 0x16890;
    short_val = move_fn_0b3d90();
    if (short_val == 0) {
      return 1;
    }
  }
  *(undefined1 *)(thing + 8) = arg_bl; /* thing->active_state */
  return 1;
}

/******************************************************************************
 * Function : combmove_update_creature_control_0168a2 (Original VA: 0x168a2, Ghidra: FUN_000168a2)
 * Prototype: undefined4 combmove_update_creature_control_0168a2(void);
 * Address  : 0x168a2 (Size: 259 bytes)
 * Module   : combmove.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combat_fn_015a23, combobj_fn_016e9b
 * Callees  : 8 -> anger_fn_010010, anger_fn_010c1a, anger_fn_010c5f, combchk_update_creature_control_0163c9, combmove_room_state_016640, combmove_update_creature_control_01671a, person_fn_063b6d, move_fn_0b4ac4
 ******************************************************************************/
undefined4 combmove_update_creature_control_0168a2(void)

{
  ushort uval;
  int thing;
  int val;
  int arg_ebx;
  int *int_ptr;
  int iStack_18;
  undefined1 local_14 [4];
  
  int_ptr = (int *)local_14;
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0') { /* thing->ccontrol_idx */
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2b1) == 0x200) { /* thing->ccontrol_idx */
      iStack_18 = 0x168e4;
      val = combmove_room_state_016640();
      if (val != 0) {
        return 0;
      }
    }
    iStack_18 = 0x168f8;
    val = combchk_update_creature_control_0163c9();
    if (val == 0) {
      iStack_18 = val;
      val = move_fn_0b4ac4();
      if (val == -1) {
        person_fn_063b6d();
      }
    }
    else {
      if (arg_ebx < 0x300) {
        iStack_18 = 0x1691f;
        combmove_update_creature_control_01671a();
        int_ptr = (int *)local_14;
      }
      else if (0x800 < arg_ebx) {
        int_ptr = &iStack_18;
        iStack_18 = 0;
        move_fn_0b4ac4();
      }
      uval = *(ushort *)(&g_bss_002e918b + (uint)*(byte *)(thing + 0x1a) * 0xe6);
      *(undefined4 *)((int)int_ptr + -4) = 0x1695a;
      anger_fn_010c1a();
      *(undefined4 *)((int)int_ptr + -4) = 0x16967;
      val = anger_fn_010c5f();
      if (val < (int)(uint)uval) {
        return 1;
      }
    }
  }
  else {
    iStack_18 = 0x1699f;
    anger_fn_010010();
  }
  return 0;
}

/******************************************************************************
 * Function : combmove_update_creature_control_0169a5 (Original VA: 0x169a5, Ghidra: FUN_000169a5)
 * Prototype: undefined4 combmove_update_creature_control_0169a5(void);
 * Address  : 0x169a5 (Size: 388 bytes)
 * Module   : combmove.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combat_fn_015ac2, combobj_creature_has_melee_instance_016df5
 * Callees  : 12 -> anger_fn_010010, anger_fn_010c1a, anger_fn_010c5f, combat_update_creature_control_015db4, combchk_update_creature_control_0163c9, combmove_room_state_016640, combmove_update_creature_control_01671a, combold_update_creature_control_017381 ...
 ******************************************************************************/
undefined4 combmove_update_creature_control_0169a5(void)

{
  int thing;
  int val;
  int cctrl_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_ebx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
    anger_fn_010010();
    return 0;
  }
  if ((*(short *)(cctrl_ptr + 0x2b1) == 0x200) && (val = combmove_room_state_016640(), val != 0)) {
    return 0;
  }
  if (arg_ebx < 0x9c) {
    combmove_update_creature_control_01671a();
    *(undefined1 *)(cctrl_ptr + 0xaa) = 0;
  }
  else {
    if (0x11c < arg_ebx) {
      *(undefined1 *)(cctrl_ptr + 0xaa) = 0;
      anger_fn_010c1a();
      val = anger_fn_010c5f();
      if ((((val < extraout_ECX) && (val = combat_update_creature_control_015db4(), val != 0)) &&
          ((*(byte *)(cctrl_ptr + 3) & 0x10) == 0)) &&
         ((((*(byte *)(cctrl_ptr + 3) & 8) == 0 && (cctrl_ptr = combchk_update_creature_control_0163c9(), cctrl_ptr != 0)) &&
          (cctrl_ptr = combtool_fn_018593(), 0 < cctrl_ptr)))) {
        instance_negative_instance_049bfc(0);
        return 0;
      }
      cctrl_ptr = move_fn_0b4ac4(0);
      if (cctrl_ptr != -1) {
        return 0;
      }
      person_fn_063b6d();
      return 0;
    }
    cctrl_ptr = combold_update_creature_control_017381();
    if (cctrl_ptr != 0) {
      return 0;
    }
  }
  anger_fn_010c1a();
  cctrl_ptr = anger_fn_010c5f();
  if (extraout_ECX_00 <= cctrl_ptr) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : combmove_update_creature_control_016b29 (Original VA: 0x16b29, Ghidra: FUN_00016b29)
 * Prototype: undefined4 combmove_update_creature_control_016b29(void);
 * Address  : 0x16b29 (Size: 422 bytes)
 * Module   : combmove.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combat_fn_015b37
 * Callees  : 9 -> anger_fn_010010, combat_update_creature_control_015db4, combchk_update_creature_control_0163c9, combmove_room_state_016640, combmove_update_creature_control_01671a, combtool_fn_018593, instance_negative_instance_049bfc, ceiling_fn_07df48 ...
 ******************************************************************************/
undefined4 combmove_update_creature_control_016b29(void)

{
  ulonglong rand_seed;
  ulonglong rand_seed_2;
  int thing;
  int val;
  int arg_edx;
  int arg_ebx;
  int *int_ptr;
  int iStack_20;
  undefined1 local_1c [8];
  int local_14;
  
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0') { /* thing->ccontrol_idx */
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2b1) == 0x200) { /* thing->ccontrol_idx */
      iStack_20 = 0x16b69;
      val = combmove_room_state_016640();
      if (val != 0) {
        return 0;
      }
    }
    if (arg_ebx < 0x300) {
      iStack_20 = 0x16b88;
      combmove_update_creature_control_01671a();
    }
    else {
      local_14 = arg_edx + 0xd;
      if (arg_ebx < 0x801) {
        iStack_20 = 0x16bbe;
        val = anger_fn_010010();
        if (val < 0x55) {
          iStack_20 = 0x16bce;
          val = combat_update_creature_control_015db4();
          int_ptr = (int *)local_1c;
          if (val != 0) {
            iStack_20 = 0x16bde;
            iStack_20 = combchk_update_creature_control_0163c9();
            if (iStack_20 == 0) {
              int_ptr = &iStack_20;
              move_fn_0b4ac4();
            }
            else {
              iStack_20 = 0x16bec;
              val = combtool_fn_018593();
              int_ptr = (int *)local_1c;
              if (0 < val) {
                iStack_20 = 0;
                instance_negative_instance_049bfc();
                return 0;
              }
            }
          }
          *(undefined4 *)((int)int_ptr + -4) = 0x16c24;
          val = ceiling_fn_07df48();
          if (val != 0) {
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            rand_seed = (ulonglong)g_action_random_seed;
            if ((int)(rand_seed % 6) == 0) {
              g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
              g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
              rand_seed_2 = (ulonglong)g_action_random_seed;
              *(undefined2 *)(thing + 0x32) = *(undefined2 *)(thing + 0x32);
              *(undefined2 *)(thing + 0x34) = *(undefined2 *)(thing + 0x34);
              *(byte *)(thing + 1) = *(byte *)(thing + 1) | 4;
              *(short *)(thing + 0x36) =
                   *(short *)(thing + 0x36) + (short)((rand_seed % 6 << 0x20 | rand_seed_2) % 0x50) + 0x28;
            }
          }
          return 1;
        }
      }
      else {
        iStack_20 = 0;
        move_fn_0b4ac4();
      }
    }
  }
  else {
    iStack_20 = 0x16cc9;
    anger_fn_010010();
  }
  return 0;
}

