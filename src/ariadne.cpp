/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: ariadne.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 19
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : ariadne_update_creature_control_011e00 (Original VA: 0x11e00, Ghidra: FUN_00011e00)
 * Prototype: undefined4 ariadne_update_creature_control_011e00(void);
 * Address  : 0x11e00 (Size: 514 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 6 -> ariadne_update_creature_control_012002, ariadne_fn_012230, ariadne_fn_0123ba, ariadne_manoeuvre_state_01264b, barracks_fn_013105, creature_fn_0827fc
 * Callees  : 7 -> ariadne_fn_01211a, ariadne_fn_01305f, ariadne_fn_0130a6, barracks_fn_0130c5, navigate_path_init8_0c241c, routes_fn_0d5ac0, LbScreenWaitVbi
 ******************************************************************************/
undefined4 ariadne_update_creature_control_011e00(void)

{
  char ch;
  undefined2 uval;
  ushort uval_2;
  int cctrl_ptr;
  int thing;
  int val;
  undefined1 arg_cl;
  char extraout_CL;
  undefined4 *arg_edx;
  undefined2 arg_bx;
  uint *word_ptr;
  byte flag;
  uint auStack_840 [3];
  int local_818;
  
  flag = 0;
  word_ptr = (uint *)&stack0xfffff7cc;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  auStack_840[2] = 0x11e37;
  LbScreenWaitVbi();
  auStack_840[2] = 0x11e42;
  val = ariadne_fn_0130a6();
  if (val == 0) {
    *(undefined4 *)(cctrl_ptr + 0x217) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x21b + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    *(undefined4 *)(cctrl_ptr + 0x21d) = *arg_edx;
    *(undefined2 *)(cctrl_ptr + 0x221 + (uint)flag * -8) =
         *(undefined2 *)(arg_edx + (uint)flag * -2 + 1);
    auStack_840[2] = 0x11ee5;
    g_bss_003d9528 = routes_fn_0d5ac0();
    if (extraout_CL == '\0') {
      g_bss_003d9524 = (int)*(char *)(thing + 6); /* thing->owner */
      ch = (&g_data_00190d3d)[*(ushort *)(thing + 0x56)];
      uval_2 = *(ushort *)(cctrl_ptr + 0x21f);
    }
    else {
      ch = (&g_data_00190d3d)[*(ushort *)(thing + 0x56)];
      uval_2 = *(ushort *)(cctrl_ptr + 0x21f);
      g_bss_003d9524 = -1;
    }
    auStack_840[2] = (uint)(byte)(ch - 1);
    auStack_840[0] = (uint)uval_2;
    auStack_840[1] = 0xfffffffe;
    word_ptr = auStack_840;
    navigate_path_init8_0c241c();
    g_bss_003d9528 = 0;
    if (local_818 == 0) {
      g_bss_003d9528 = 0;
      return 2;
    }
    ariadne_fn_01305f();
    *(undefined1 *)(cctrl_ptr + 0x23f) = 0;
    *(undefined1 *)(cctrl_ptr + 0x235) = arg_cl;
    *(undefined4 *)(cctrl_ptr + 0x229) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x22d + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    *(undefined2 *)(cctrl_ptr + 0x23d) = arg_bx;
    barracks_fn_0130c5();
  }
  else {
    *(undefined2 *)(cctrl_ptr + 0x240) = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x242) = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
    *(undefined2 *)(cctrl_ptr + 0x223) = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x225) = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
    uval = *(undefined2 *)(thing + 0x11);
    *(undefined1 *)(cctrl_ptr + 0x23f) = 0;
    *(undefined2 *)(cctrl_ptr + 0x227) = uval;
    *(undefined4 *)(cctrl_ptr + 0x229) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x22d + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    *(undefined1 *)(cctrl_ptr + 0x268) = 1;
    *(undefined1 *)(cctrl_ptr + 0x269) = 1;
    *(undefined4 *)(cctrl_ptr + 0x217) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x21b + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    *(undefined4 *)(cctrl_ptr + 0x21d) = *arg_edx;
    *(undefined2 *)(cctrl_ptr + 0x221 + (uint)flag * -8) =
         *(undefined2 *)(arg_edx + (uint)flag * -2 + 1);
    *(undefined1 *)(cctrl_ptr + 0x235) = 0;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x11ff6;
  ariadne_fn_01211a();
  return 0;
}

/******************************************************************************
 * Function : ariadne_update_creature_control_012002 (Original VA: 0x12002, Ghidra: FUN_00012002)
 * Prototype: undefined1 ariadne_update_creature_control_012002(void);
 * Address  : 0x12002 (Size: 280 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> routes_update_creature_control_0d18d0
 * Callees  : 7 -> ariadne_update_creature_control_011e00, ariadne_fn_01211a, ariadne_fn_012230, ariadne_fn_0123ba, ariadne_manoeuvre_state_01264b, ariadne_fn_0130a3, barracks_fn_013105
 ******************************************************************************/
undefined1 ariadne_update_creature_control_012002(void)

{
  byte flag;
  int cctrl_ptr;
  char ch;
  char extraout_AL;
  undefined1 uval;
  int thing;
  int val;
  undefined4 *arg_ecx;
  short *arg_edx;
  int arg_ebx;
  undefined4 *word_ptr;
  byte flag_2;
  
  flag_2 = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined1 *)(cctrl_ptr + 0x239) = 0;
  if (((*arg_edx != *(short *)(cctrl_ptr + 0x21d)) || (arg_edx[1] != *(short *)(cctrl_ptr + 0x21f))) ||
     (*(short *)(cctrl_ptr + 0x23d) != arg_ebx)) {
    ch = ariadne_update_creature_control_011e00();
    if (ch != '\0') {
      return 2;
    }
    *(short *)(cctrl_ptr + 0x23d) = (short)arg_ebx;
    if (*(char *)(cctrl_ptr + 0x239) != '\0') {
      word_ptr = (undefined4 *)(cctrl_ptr + 0x229);
      uval = 0;
      goto LAB_000120e2;
    }
  }
  val = ariadne_fn_0130a3();
  if (val != 0) {
    ch = barracks_fn_013105();
    if (ch == '\x01') {
      *(undefined2 *)(cctrl_ptr + 0x21d) = 0;
      *(undefined2 *)(cctrl_ptr + 0x21f) = 0;
      *(undefined2 *)(cctrl_ptr + 0x221) = 0;
      word_ptr = (undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
      uval = 1;
      goto LAB_000120e2;
    }
    if (ch == '\0') {
      ariadne_fn_01211a();
    }
    else {
      ariadne_update_creature_control_011e00();
      if (extraout_AL != '\0') {
        return 3;
      }
    }
  }
  flag = *(byte *)(cctrl_ptr + 0x238);
  if (flag < 2) {
    if (flag != 1) {
      return 3;
    }
    uval = ariadne_fn_012230();
  }
  else if (flag < 3) {
    uval = ariadne_fn_0123ba();
  }
  else {
    if (flag != 3) {
      return 3;
    }
    uval = ariadne_manoeuvre_state_01264b();
  }
  word_ptr = (undefined4 *)(cctrl_ptr + 0x229);
LAB_000120e2:
  *arg_ecx = *word_ptr;
  *(undefined2 *)(arg_ecx + (uint)flag_2 * -2 + 1) = *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1);
  return uval;
}

/******************************************************************************
 * Function : ariadne_fn_01211a (Original VA: 0x1211a, Ghidra: FUN_0001211a)
 * Prototype: undefined4 ariadne_fn_01211a(void);
 * Address  : 0x1211a (Size: 278 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module ariadne.cpp procedure @ 0x01211a
 * Callers  : 3 -> ariadne_update_creature_control_011e00, ariadne_update_creature_control_012002, ariadne_fn_0123ba
 * Callees  : 7 -> anger_fn_010c1a, ariadne_speed_01277d, ariadne_fn_012a2e, ariadne_fn_012a67, ariadne_fn_012b04, door_process_map_subtile_022d5c, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 ariadne_fn_01211a(void)

{
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  byte flag;
  undefined4 local_2c;
  short asStack_28 [2];
  undefined4 local_24;
  undefined2 local_20 [2];
  uint local_1c;
  uint local_18;
  
  flag = 0;
  val = anger_fn_010c1a();
  local_24 = CONCAT22(*(short *)(arg_eax + 0xf) +
                      (short)((uint)-((int)*(short *)(extraout_ECX + 0x26) *
                                      (int)(&PTR_LAB_00192fe0)[val] >> 8) >> 8),
                      (short)((uint)((int)*(short *)(extraout_ECX + 0x26) * (&g_slab_attr_table)[val])
                             >> 0x10) + *(short *)(arg_eax + 0xd));
  local_20[0] = move_process_map_subtile_0b28e8();
  val_2 = ariadne_fn_012a2e();
  val = extraout_ECX_00;
  if (val_2 != 0) {
    local_1c = ariadne_fn_012a67();
    local_18 = local_1c;
    val_2 = door_process_map_subtile_022d5c();
    val = extraout_ECX_01;
    if (val_2 == 0) {
      ariadne_fn_012b04();
      if ((((local_1c & 1) == 0) || (*(short *)(arg_eax + 0xd) != (short)local_2c)) &&
         (((local_18 & 2) == 0 || (*(short *)(arg_eax + 0xf) != local_2c._2_2_)))) {
        *(undefined1 *)(extraout_ECX_02 + 0x21) = 3;
        *(undefined1 *)(extraout_ECX_02 + 0x5f) = 1;
        *(undefined4 *)(extraout_ECX_02 + 0x53) = local_2c;
        *(short *)(extraout_ECX_02 + 0x57 + (uint)flag * -8) = asStack_28[(uint)flag * -4];
        *(undefined4 *)(extraout_ECX_02 + 0x59) = local_24;
        *(undefined2 *)(extraout_ECX_02 + 0x5d + (uint)flag * -8) = local_20[(uint)flag * -4];
        *(undefined4 *)(extraout_ECX_02 + 0x12) = local_2c;
        *(short *)(extraout_ECX_02 + 0x16 + (uint)flag * -8) = asStack_28[(uint)flag * -4];
        return 1;
      }
      ariadne_speed_01277d();
      *(undefined1 *)(extraout_ECX_03 + 0x22) = 1;
      return 1;
    }
  }
  *(undefined1 *)(val + 0x21) = 1;
  return 1;
}

/******************************************************************************
 * Function : ariadne_fn_012230 (Original VA: 0x12230, Ghidra: FUN_00012230)
 * Prototype: undefined4 ariadne_fn_012230(void);
 * Address  : 0x12230 (Size: 394 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x012230
 * Callers  : 1 -> ariadne_update_creature_control_012002
 * Callees  : 8 -> anger_fn_010c1a, ariadne_update_creature_control_011e00, ariadne_fn_012a2e, ariadne_fn_012a67, ariadne_fn_012b04, door_process_map_subtile_022d5c, move_process_map_subtile_0b28e8, get_2d_box_distance
 ******************************************************************************/
undefined4 ariadne_fn_012230(void)

{
  char ch;
  undefined2 uval;
  int arg_eax;
  int val;
  undefined4 uval_2;
  int arg_edx;
  byte flag;
  undefined4 local_28;
  undefined2 auStack_24 [2];
  undefined4 local_20;
  undefined2 auStack_1c [2];
  int local_18;
  
  flag = 0;
  val = anger_fn_010c1a();
  local_18 = get_2d_box_distance();
  if (local_18 - *(int *)(arg_edx + 0x62) < 0x401) {
    if (*(short *)(arg_edx + 0x26) < local_18) {
      *(short *)(arg_edx + 0x12) =
           *(short *)(arg_eax + 0xd) +
           (short)((uint)((int)*(short *)(arg_edx + 0x26) * (&g_slab_attr_table)[val]) >> 0x10);
      *(short *)(arg_edx + 0x14) =
           *(short *)(arg_eax + 0xf) +
           (short)((uint)-((int)*(short *)(arg_edx + 0x26) * (int)(&PTR_LAB_00192fe0)[val] >> 8) >>
                  8);
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_edx + 0x16) = uval;
    }
    else {
      *(undefined2 *)(arg_edx + 0x12) = *(undefined2 *)(arg_edx + 0xc);
      *(undefined2 *)(arg_edx + 0x14) = *(undefined2 *)(arg_edx + 0xe);
    }
LAB_00012302:
    if (local_18 < *(int *)(arg_edx + 0x62)) {
      *(int *)(arg_edx + 0x62) = local_18;
    }
    val = ariadne_fn_012a2e();
    if (val != 0) {
      if (*(char *)(arg_edx + 0x23) == '\0') {
        ariadne_fn_012a67();
        val = door_process_map_subtile_022d5c();
        if (val == 0) {
          ariadne_fn_012b04();
          *(undefined1 *)(arg_edx + 0x21) = 3;
          *(undefined1 *)(arg_edx + 0x5f) = 1;
          *(undefined4 *)(arg_edx + 0x53) = local_28;
          *(undefined2 *)(arg_edx + 0x57 + (uint)flag * -8) = auStack_24[(uint)flag * -4];
          *(undefined4 *)(arg_edx + 0x59) = *(undefined4 *)(arg_edx + 0x12);
          *(undefined2 *)(arg_edx + 0x5d + (uint)flag * -8) =
               *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8);
          *(undefined4 *)(arg_edx + 0x12) = local_28;
          *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8) = auStack_24[(uint)flag * -4];
        }
      }
      else {
        local_20 = *(undefined4 *)(arg_edx + 6);
        auStack_1c[(uint)flag * -4] = *(undefined2 *)(arg_edx + 10 + (uint)flag * -8);
        ch = ariadne_update_creature_control_011e00();
        if (ch != '\0') goto LAB_00012297;
      }
    }
    uval_2 = 0;
  }
  else {
    *(undefined4 *)(arg_edx + 0x12) = *(undefined4 *)(arg_eax + 0xd);
    *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8) =
         *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8);
    local_20 = *(undefined4 *)(arg_edx + 6);
    auStack_1c[(uint)flag * -4] = *(undefined2 *)(arg_edx + 10 + (uint)flag * -8);
    ch = ariadne_update_creature_control_011e00();
    if (ch == '\0') goto LAB_00012302;
LAB_00012297:
    uval_2 = 3;
  }
  return uval_2;
}

/******************************************************************************
 * Function : ariadne_fn_0123ba (Original VA: 0x123ba, Ghidra: FUN_000123ba)
 * Prototype: undefined1 ariadne_fn_0123ba(void);
 * Address  : 0x123ba (Size: 657 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x0123ba
 * Callers  : 1 -> ariadne_update_creature_control_012002
 * Callees  : 10 -> ariadne_update_creature_control_011e00, ariadne_fn_01211a, ariadne_fn_0128cd, ariadne_fn_012a2e, ariadne_fn_012b04, ariadne_fn_012c46, ariadne_fn_012edf, ariadne_fn_012fef ...
 ******************************************************************************/
undefined1 ariadne_fn_0123ba(void)

{
  char ch;
  undefined2 uval;
  int thing;
  int val;
  int val_2;
  uint extraout_ECX;
  int arg_edx;
  byte flag;
  undefined4 local_24;
  undefined2 auStack_20 [2];
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  
  flag = 0;
  val = get_2d_box_distance();
  if (val - *(int *)(arg_edx + 0x62) < 0x401) {
    if (*(short *)(arg_edx + 0x26) < val) {
      if (*(short *)(thing + 0x52) != *(short *)(arg_edx + 0x60)) { /* thing->health */
        return 0;
      }
      if ((*(short *)(thing + 0xd) != *(short *)(arg_edx + 0x12)) || /* thing->mappos.val_x */
         (*(short *)(thing + 0xf) != *(short *)(arg_edx + 0x14))) { /* thing->mappos.val_y */
LAB_00012440:
        ariadne_fn_01211a();
        return 0;
      }
      if (val < *(int *)(arg_edx + 0x62)) {
        val_2 = ariadne_fn_012edf();
        if (val_2 != 0) {
          val = ariadne_fn_01211a();
          if (val == 0) {
            return 3;
          }
          return 0;
        }
        *(int *)(arg_edx + 0x62) = val;
      }
      val = ariadne_fn_0128cd();
      if (val == -1) goto LAB_00012440;
      *(short *)(arg_edx + 0x12) =
           (short)((uint)((int)*(short *)(arg_edx + 0x26) * (&g_slab_attr_table)[val]) >> 0x10) +
           *(short *)(thing + 0xd); /* thing->mappos.val_x */
      *(short *)(arg_edx + 0x14) =
           (short)((uint)-((int)(&PTR_LAB_00192fe0)[val] * (int)*(short *)(arg_edx + 0x26) >> 8) >>
                  8) + *(short *)(thing + 0xf); /* thing->mappos.val_y */
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_edx + 0x16) = uval;
      if ((extraout_ECX == *(ushort *)(thing + 0x52)) && (val_2 = ariadne_fn_012c46(), val_2 != 0)) { /* thing->health */
        *(undefined1 *)(arg_edx + 0x21) = 3;
        *(undefined1 *)(arg_edx + 0x5f) = 2;
        *(undefined4 *)(arg_edx + 0x53) = *(undefined4 *)(arg_edx + 0x12);
        *(undefined2 *)(arg_edx + 0x57 + (uint)flag * -8) =
             *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8);
        return 0;
      }
      *(short *)(arg_edx + 0x60) = (short)val;
      val = ariadne_fn_012fef();
      if (val != 0) {
        *(undefined4 *)(arg_edx + 0x12) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8) =
             *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
        local_1c = *(undefined4 *)(arg_edx + 6);
        auStack_18[(uint)flag * -4] = *(undefined2 *)(arg_edx + 10 + (uint)flag * -8);
        ch = ariadne_update_creature_control_011e00();
        if (ch != '\0') {
          return 3;
        }
        return 0;
      }
      val = ariadne_fn_012a2e();
      if (val == 0) {
        return 0;
      }
      if (*(char *)(arg_edx + 0x23) == '\0') {
        ariadne_fn_012b04();
        *(undefined1 *)(arg_edx + 0x21) = 3;
        *(undefined1 *)(arg_edx + 0x5f) = 2;
        goto LAB_0001262b;
      }
    }
    else {
      *(undefined2 *)(arg_edx + 0x12) = *(undefined2 *)(arg_edx + 0xc);
      *(undefined2 *)(arg_edx + 0x14) = *(undefined2 *)(arg_edx + 0xe);
      val = ariadne_fn_012a2e();
      if (val == 0) {
        return 0;
      }
      if (*(char *)(arg_edx + 0x23) == '\0') {
        ariadne_fn_012b04();
        *(undefined1 *)(arg_edx + 0x21) = 3;
        *(undefined1 *)(arg_edx + 0x5f) = 1;
LAB_0001262b:
        *(undefined4 *)(arg_edx + 0x53) = local_24;
        *(undefined2 *)(arg_edx + 0x57 + (uint)flag * -8) = auStack_20[(uint)flag * -4];
        *(undefined4 *)(arg_edx + 0x59) = *(undefined4 *)(arg_edx + 0x12);
        *(undefined2 *)(arg_edx + 0x5d + (uint)flag * -8) =
             *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8);
        *(undefined4 *)(arg_edx + 0x12) = local_24;
        *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8) = auStack_20[(uint)flag * -4];
        return 0;
      }
    }
    local_1c = *(undefined4 *)(arg_edx + 6);
    auStack_18[(uint)flag * -4] = *(undefined2 *)(arg_edx + 10 + (uint)flag * -8);
  }
  else {
    *(undefined4 *)(arg_edx + 0x12) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    local_1c = *(undefined4 *)(arg_edx + 6);
    auStack_18[(uint)flag * -4] = *(undefined2 *)(arg_edx + 10 + (uint)flag * -8);
  }
  ch = ariadne_update_creature_control_011e00();
  if (ch == '\0') {
    return 0;
  }
  return 3;
}

/******************************************************************************
 * Function : ariadne_manoeuvre_state_01264b (Original VA: 0x1264b, Ghidra: FUN_0001264b)
 * Prototype: undefined4 ariadne_manoeuvre_state_01264b(void);
 * Address  : 0x1264b (Size: 306 bytes)
 * Module   : ariadne.cpp [direct_file_string_xref]
 * OrigLine : ariadne.cpp lines 798
 * Purpose  : String 'Unknown Manoeuvre state'
 * Callers  : 1 -> ariadne_update_creature_control_012002
 * Callees  : 6 -> ariadne_update_creature_control_011e00, ariadne_speed_01277d, ariadne_fn_0128cd, ariadne_fn_012a2e, get_2d_box_distance, LbErrorLog
 ******************************************************************************/
undefined4 ariadne_manoeuvre_state_01264b(void)

{
  short short_val;
  undefined *word_ptr;
  char ch;
  ushort uval;
  int arg_eax;
  int val;
  undefined4 uval_2;
  int arg_edx;
  byte flag;
  undefined2 auStack_18 [2];
  
  flag = 0;
  val = ariadne_fn_012a2e();
  if (val != 0) {
    auStack_18[(uint)flag * -4] = *(undefined2 *)(arg_edx + 10 + (uint)flag * -8);
    ch = ariadne_update_creature_control_011e00();
    if (ch != '\0') {
      return 3;
    }
  }
  val = get_2d_box_distance();
  if (val < *(int *)(arg_edx + 0x62)) {
    *(int *)(arg_edx + 0x62) = val;
  }
  if ((*(short *)(arg_eax + 0xd) == *(short *)(arg_edx + 0x53)) &&
     (*(short *)(arg_eax + 0xf) == *(short *)(arg_edx + 0x55))) {
    flag = *(byte *)(arg_edx + 0x5f);
    if (flag != 0) {
      if (flag < 2) {
        uval_2 = ariadne_speed_01277d();
        return uval_2;
      }
      if (flag == 2) {
        uval = ariadne_fn_0128cd();
        *(ushort *)(arg_edx + 0x60) = uval;
        *(short *)(arg_edx + 0x12) =
             (short)((uint)((&g_slab_attr_table)[uval] * (int)*(short *)(arg_edx + 0x26)) >> 0x10) +
             *(short *)(arg_eax + 0xd);
        word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(arg_edx + 0x60)];
        short_val = *(short *)(arg_eax + 0xf);
        *(undefined1 *)(arg_edx + 0x21) = 2;
        *(short *)(arg_edx + 0x14) =
             short_val + (short)((uint)-((int)*(short *)(arg_edx + 0x26) * (int)word_ptr >> 8) >> 8);
        return 0;
      }
    }
    LbErrorLog(); /* LbErrorLog("ariadne.cpp", line 798, "Unknown Manoeuvre state") */
  }
  else {
    *(undefined4 *)(arg_edx + 0x12) = *(undefined4 *)(arg_edx + 0x53);
    *(undefined2 *)(arg_edx + 0x16 + (uint)flag * -8) =
         *(undefined2 *)(arg_edx + 0x57 + (uint)flag * -8);
  }
  return 0;
}

/******************************************************************************
 * Function : ariadne_speed_01277d (Original VA: 0x1277d, Ghidra: FUN_0001277d)
 * Prototype: uint ariadne_speed_01277d(void);
 * Address  : 0x1277d (Size: 336 bytes)
 * Module   : ariadne.cpp [direct_file_string_xref]
 * OrigLine : ariadne.cpp lines 825
 * Purpose  : String 'Ariadne Speed == 0'
 * Callers  : 2 -> ariadne_fn_01211a, ariadne_manoeuvre_state_01264b
 * Callees  : 6 -> ariadne_fn_012a2e, ariadne_fn_012b04, ariadne_fn_012c46, ariadne_fn_013169, move_process_map_subtile_0b28e8, LbErrorLog
 ******************************************************************************/
uint ariadne_speed_01277d(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  uint uval_2;
  uint arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  int local_14;
  
  flag = 0;
  if (*(short *)(arg_edx + 0x26) == 0) {
    LbErrorLog(); /* LbErrorLog("ariadne.cpp", line 825, "Ariadne Speed == 0") */
  }
  val = ariadne_fn_013169(arg_edx + 0x20);
  if (val == 0) {
    *(undefined1 *)(arg_edx + 0x21) = 1;
    word_ptr_2 = (undefined4 *)(arg_edx + 0x12);
    word_ptr = (undefined4 *)(arg_eax + 0xd);
  }
  else {
    *(undefined1 *)(arg_edx + 0x21) = 2;
    *(short *)(arg_edx + 0x12) =
         (short)((uint)((&g_slab_attr_table)[*(ushort *)(arg_edx + 0x60)] * (int)*(short *)(arg_edx + 0x26)
                       ) >> 0x10) + *(short *)(arg_eax + 0xd);
    *(short *)(arg_edx + 0x14) =
         (short)((uint)-((int)*(short *)(arg_edx + 0x26) *
                         (int)(&PTR_LAB_00192fe0)[*(ushort *)(arg_edx + 0x60)] >> 8) >> 8) +
         *(short *)(arg_eax + 0xf);
    local_14 = arg_edx + 0x12;
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(arg_edx + 0x16) = uval;
    *(undefined4 *)(arg_edx + 0x18) = *(undefined4 *)(arg_eax + 0xd);
    *(undefined2 *)(arg_edx + 0x1c + (uint)flag * -8) =
         *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8);
    *(undefined2 *)(arg_edx + 0x24) = *(undefined2 *)(arg_edx + 0x60);
    val = ariadne_fn_012c46();
    if (val == 0) {
      val = ariadne_fn_012a2e();
      uval_2 = 0;
      if (val == 0) goto LAB_000128c6;
      ariadne_fn_012b04();
      *(undefined1 *)(arg_edx + 0x21) = 3;
      *(undefined1 *)(arg_edx + 0x5f) = 1;
      *(undefined4 *)(arg_edx + 0x53) = local_1c;
      *(undefined2 *)(arg_edx + 0x57 + (uint)flag * -8) = auStack_18[(uint)flag * -4];
      word_ptr_2 = (undefined4 *)(arg_edx + 0x59);
    }
    else {
      *(undefined1 *)(arg_edx + 0x21) = 3;
      *(undefined1 *)(arg_edx + 0x5f) = 2;
      word_ptr_2 = (undefined4 *)(arg_edx + 0x53);
    }
    word_ptr = (undefined4 *)(arg_edx + 0x12);
  }
  *word_ptr_2 = *word_ptr;
  *(undefined2 *)(word_ptr_2 + (uint)flag * -2 + 1) = *(undefined2 *)(word_ptr + (uint)flag * -2 + 1);
  uval_2 = arg_edx;
LAB_000128c6:
  return uval_2 & 0xffffff00;
}

/******************************************************************************
 * Function : ariadne_fn_0128cd (Original VA: 0x128cd, Ghidra: FUN_000128cd)
 * Prototype: int ariadne_fn_0128cd(void);
 * Address  : 0x128cd (Size: 270 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module ariadne.cpp procedure @ 0x0128cd
 * Callers  : 3 -> ariadne_fn_0123ba, ariadne_manoeuvre_state_01264b, barracks_fn_01342a
 * Callees  : 2 -> anger_fn_010d93, ariadne_fn_0129db
 ******************************************************************************/
int ariadne_fn_0128cd(void)

{
  int val;
  int val_2;
  uint uval;
  int arg_edx;
  
  if (*(char *)(arg_edx + 0x20) == '\x01') {
    val = anger_fn_010d93();
    val_2 = ariadne_fn_0129db();
    if (val_2 != 0) {
      return (val - 1U & 3) << 9;
    }
    uval = anger_fn_010d93();
    val = ariadne_fn_0129db();
    if (val != 0) {
      return (uval & 3) << 9;
    }
    val = anger_fn_010d93();
    uval = val + 1;
  }
  else {
    if (*(char *)(arg_edx + 0x20) != '\x02') {
      return -1;
    }
    val = anger_fn_010d93();
    val_2 = ariadne_fn_0129db();
    if (val_2 != 0) {
      return (val + 1U & 3) << 9;
    }
    uval = anger_fn_010d93();
    val = ariadne_fn_0129db();
    if (val != 0) {
      return (uval & 3) << 9;
    }
    val = anger_fn_010d93();
    uval = val - 1;
  }
  val = ariadne_fn_0129db();
  if (val == 0) {
    val = anger_fn_010d93();
    uval = val + 2;
    val = ariadne_fn_0129db();
    if (val == 0) {
      return -1;
    }
  }
  return (uval & 3) << 9;
}

/******************************************************************************
 * Function : ariadne_fn_0129db (Original VA: 0x129db, Ghidra: FUN_000129db)
 * Prototype: bool ariadne_fn_0129db(void);
 * Address  : 0x129db (Size: 83 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x0129db
 * Callers  : 2 -> ariadne_fn_0128cd, ariadne_fn_012c46
 * Callees  : 1 -> ariadne_fn_012a2e
 ******************************************************************************/
bool ariadne_fn_0129db(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  
  val = ariadne_fn_012a2e((short)((uint)((int)*(short *)(arg_edx + 0x26) * (&g_slab_attr_table)[arg_ebx])
                              >> 0x10) + *(short *)(arg_eax + 0xd));
  return val == 0;
}

/******************************************************************************
 * Function : ariadne_fn_012a2e (Original VA: 0x12a2e, Ghidra: FUN_00012a2e)
 * Prototype: void ariadne_fn_012a2e(void);
 * Address  : 0x12a2e (Size: 57 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module ariadne.cpp procedure @ 0x012a2e
 * Callers  : 8 -> ariadne_fn_01211a, ariadne_fn_012230, ariadne_fn_0123ba, ariadne_manoeuvre_state_01264b, ariadne_speed_01277d, ariadne_fn_0129db, ariadne_fn_012a67, ariadne_fn_012edf
 * Callees  : 2 -> creature_fn_07e134, move_process_map_subtile_0b3040
 ******************************************************************************/
void ariadne_fn_012a2e(void)

{
  undefined2 uval;
  int arg_eax;
  undefined2 extraout_CX;
  undefined4 *arg_edx;
  undefined4 uval_2;
  
  uval_2 = *arg_edx;
  uval = move_process_map_subtile_0b3040(uval_2,*(undefined2 *)(arg_edx + 1));
  *(undefined2 *)(arg_eax + 0x11) = uval;
  creature_fn_07e134(uval_2,uval);
  *(undefined2 *)(arg_eax + 0x11) = extraout_CX;
  return;
}

/******************************************************************************
 * Function : ariadne_fn_012a67 (Original VA: 0x12a67, Ghidra: FUN_00012a67)
 * Prototype: byte ariadne_fn_012a67(void);
 * Address  : 0x12a67 (Size: 157 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x012a67
 * Callers  : 4 -> ariadne_fn_01211a, ariadne_fn_012230, ariadne_fn_012b04, ariadne_fn_013169
 * Callees  : 1 -> ariadne_fn_012a2e
 ******************************************************************************/
byte ariadne_fn_012a67(void)

{
  int arg_eax;
  int val;
  undefined2 *extraout_ECX;
  undefined2 *arg_edx;
  byte flag;
  
  val = ariadne_fn_012a2e(*arg_edx,*(undefined2 *)(arg_eax + 0x11));
  flag = val != 0;
  val = ariadne_fn_012a2e(*(undefined2 *)(arg_eax + 0xd),*(undefined2 *)(arg_eax + 0x11));
  if (val != 0) {
    flag = flag | 2;
  }
  if ((flag == 0) &&
     (val = ariadne_fn_012a2e(*extraout_ECX,*(undefined2 *)(arg_eax + 0x11)), val != 0)) {
    flag = 4;
  }
  return flag;
}

/******************************************************************************
 * Function : ariadne_fn_012b04 (Original VA: 0x12b04, Ghidra: FUN_00012b04)
 * Prototype: uint ariadne_fn_012b04(void);
 * Address  : 0x12b04 (Size: 322 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module ariadne.cpp procedure @ 0x012b04
 * Callers  : 4 -> ariadne_fn_01211a, ariadne_fn_012230, ariadne_fn_0123ba, ariadne_speed_01277d
 * Callees  : 2 -> ariadne_fn_012a67, move_process_map_subtile_0b28e8
 ******************************************************************************/
uint ariadne_fn_012b04(void)

{
  short short_val;
  undefined2 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val;
  ushort *arg_edx;
  ushort uval_2;
  undefined4 *arg_ebx;
  byte flag;
  undefined4 local_20;
  undefined2 local_1c [2];
  uint local_18;
  uint local_14;
  
  flag = 0;
  local_18 = ariadne_fn_012a67();
  local_14 = local_18;
  uval_2 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(extraout_ECX + 0x56) * 2) / 2;
  local_20 = *(int *)arg_edx;
  val = extraout_ECX;
  if ((local_18 & 1) != 0) {
    local_20._2_2_ = (short)((uint)local_20 >> 0x10);
    uval = local_20._2_2_;
    if (*arg_edx < *(ushort *)(extraout_ECX + 0xd)) {
      local_20._0_2_ = *(short *)(extraout_ECX + 0xd) - uval_2 & 0xff00;
      short_val = (ushort)local_20 + uval_2;
    }
    else {
      local_20 = CONCAT22(local_20._2_2_,*(short *)(extraout_ECX + 0xd) + uval_2);
      local_20 = CONCAT31(local_20._1_3_,0xff);
      short_val = (ushort)local_20 - uval_2;
    }
    local_20 = CONCAT22(uval,short_val);
    local_1c[0] = move_process_map_subtile_0b28e8();
    val = extraout_ECX_00;
  }
  if ((local_14 & 2) != 0) {
    uval = (ushort)local_20;
    if (arg_edx[1] < *(ushort *)(val + 0xf)) {
      local_20._3_1_ = (byte)((ushort)(*(short *)(val + 0xf) - uval_2) >> 8);
      local_20 = (uint)local_20._3_1_ << 0x18;
      local_20._2_2_ = local_20._2_2_ + uval_2;
    }
    else {
      local_20._3_1_ = (byte)((ushort)(*(short *)(val + 0xf) + uval_2) >> 8);
      local_20._0_3_ = CONCAT12(0xff,(ushort)local_20);
      local_20._2_2_ = local_20._2_2_ - uval_2;
    }
    local_20 = CONCAT22(local_20._2_2_,uval);
    local_1c[0] = move_process_map_subtile_0b28e8();
    val = extraout_ECX_01;
  }
  if ((local_14 & 4) != 0) {
    if (*arg_edx < *(ushort *)(val + 0xd)) {
      local_20._0_2_ = *(short *)(val + 0xd) - uval_2 & 0xff00;
      short_val = (ushort)local_20 + uval_2;
    }
    else {
      local_20._1_3_ = (uint3)(byte)((ushort)(*(short *)(val + 0xd) + uval_2) >> 8);
      local_20 = CONCAT31(local_20._1_3_,0xff);
      short_val = (ushort)local_20 - uval_2;
    }
    if (arg_edx[1] < *(ushort *)(val + 0xf)) {
      local_20._3_1_ = (byte)((ushort)(*(short *)(val + 0xf) - uval_2) >> 8);
      local_20 = (uint)local_20._3_1_ << 0x18;
      local_20._2_2_ = local_20._2_2_ + uval_2;
    }
    else {
      local_20._3_1_ = (byte)((ushort)(*(short *)(val + 0xf) + uval_2) >> 8);
      local_20._0_3_ = CONCAT12(0xff,short_val);
      local_20._2_2_ = local_20._2_2_ - uval_2;
    }
    local_20 = CONCAT22(local_20._2_2_,short_val);
    local_1c[0] = move_process_map_subtile_0b28e8();
  }
  *arg_ebx = local_20;
  *(undefined2 *)(arg_ebx + (uint)flag * -2 + 1) = local_1c[(uint)flag * -4];
  return local_14;
}

/******************************************************************************
 * Function : ariadne_fn_012c46 (Original VA: 0x12c46, Ghidra: FUN_00012c46)
 * Prototype: undefined4 ariadne_fn_012c46(void);
 * Address  : 0x12c46 (Size: 665 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module ariadne.cpp procedure @ 0x012c46
 * Callers  : 3 -> ariadne_fn_0123ba, ariadne_speed_01277d, barracks_fn_01342a
 * Callees  : 3 -> anger_fn_010d93, ariadne_fn_0129db, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 ariadne_fn_012c46(void)

{
  bool flag;
  undefined2 uval;
  int arg_eax;
  uint uval_2;
  int val;
  int arg_ecx;
  short short_val;
  int arg_edx;
  ushort *arg_ebx;
  undefined4 *word_ptr;
  byte flag_2;
  undefined2 auStack_818 [1012];
  undefined4 local_24;
  undefined2 auStack_20 [2];
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  undefined4 local_14;
  ushort auStack_10 [2];
  
  flag_2 = 0;
  uval_2 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  flag = false;
  short_val = (short)uval_2;
  if (arg_ecx == 0) {
    if ((int)(arg_ebx[1] - uval_2) >> 8 < (int)(*(ushort *)(arg_eax + 0xf) - uval_2) >> 8) {
      local_14._3_1_ = (byte)((ushort)(*(short *)(arg_eax + 0xf) - short_val) >> 8);
      local_14 = (uint)local_14._3_1_ << 0x18;
      flag = true;
      local_14 = CONCAT22(local_14._2_2_ + short_val,*arg_ebx);
    }
  }
  else if (arg_ecx == 0x400) {
    if ((uint)((int)(*(ushort *)(arg_eax + 0xf) + uval_2) >> 8) <
        (uint)((int)(arg_ebx[1] + uval_2) >> 8)) {
      local_14._3_1_ = (byte)((ushort)(*(short *)(arg_eax + 0xf) + short_val) >> 8);
      local_14._0_3_ = CONCAT12(0xff,*arg_ebx);
      flag = true;
      local_14 = CONCAT22(local_14._2_2_ - short_val,*arg_ebx);
    }
  }
  else if (arg_ecx == 0x600) {
    if ((int)(*arg_ebx - uval_2) >> 8 < (int)(*(ushort *)(arg_eax + 0xd) - uval_2) >> 8) {
      local_14._0_2_ = *(short *)(arg_eax + 0xd) - short_val & 0xff00;
      flag = true;
      local_14 = CONCAT22(arg_ebx[1],(ushort)local_14 + short_val);
    }
  }
  else if ((arg_ecx == 0x200) &&
          ((uint)((int)(*(ushort *)(arg_eax + 0xd) + uval_2) >> 8) <
           (uint)((int)(*arg_ebx + uval_2) >> 8))) {
    local_14 = CONCAT22(arg_ebx[1],*(short *)(arg_eax + 0xd) + short_val);
    local_14 = CONCAT31(local_14._1_3_,0xff);
    flag = true;
    local_14 = CONCAT22(arg_ebx[1],(ushort)local_14 - short_val);
  }
  if (!flag) {
    return 0;
  }
  if (*(char *)(arg_edx + 0x20) == '\x01') {
    anger_fn_010d93();
    val = ariadne_fn_0129db();
    if (val == 0) {
      local_24 = *(undefined4 *)(arg_eax + 0xd);
      auStack_20[(uint)flag_2 * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8);
      *(int *)(arg_eax + 0xd) = local_14;
      *(ushort *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_10[(uint)flag_2 * -4];
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(arg_eax + 0x11) = uval;
      anger_fn_010d93();
      val = ariadne_fn_0129db();
      if (val != 0) {
        *(int *)arg_ebx = local_14;
        arg_ebx[(uint)flag_2 * -4 + 2] = auStack_10[(uint)flag_2 * -4];
        word_ptr = &local_24;
        goto LAB_00012e1e;
      }
      word_ptr = &local_24;
      goto LAB_00012ed3;
    }
  }
  if (*(char *)(arg_edx + 0x20) != '\x02') {
    return 0;
  }
  anger_fn_010d93();
  val = ariadne_fn_0129db();
  if (val != 0) {
    return 0;
  }
  local_1c = *(undefined4 *)(arg_eax + 0xd);
  auStack_18[(uint)flag_2 * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8);
  *(int *)(arg_eax + 0xd) = local_14;
  *(ushort *)(arg_eax + 0x11 + (uint)flag_2 * -8) = auStack_10[(uint)flag_2 * -4];
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(arg_eax + 0x11) = uval;
  anger_fn_010d93();
  val = ariadne_fn_0129db();
  if (val != 0) {
    *(int *)arg_ebx = local_14;
    arg_ebx[(uint)flag_2 * -4 + 2] = auStack_10[(uint)flag_2 * -4];
    word_ptr = &local_1c;
LAB_00012e1e:
    *(undefined4 *)(arg_eax + 0xd) = *word_ptr;
    *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) =
         *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1);
    return 1;
  }
  word_ptr = &local_1c;
LAB_00012ed3:
  *(undefined4 *)(arg_eax + 0xd) = *word_ptr;
  *(undefined2 *)(arg_eax + 0x11 + (uint)flag_2 * -8) = *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1)
  ;
  return 0;
}

/******************************************************************************
 * Function : ariadne_fn_012edf (Original VA: 0x12edf, Ghidra: FUN_00012edf)
 * Prototype: undefined4 ariadne_fn_012edf(void);
 * Address  : 0x12edf (Size: 272 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x012edf
 * Callers  : 1 -> ariadne_fn_0123ba
 * Callees  : 3 -> anger_fn_010c1a, ariadne_fn_012a2e, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 ariadne_fn_012edf(void)

{
  ushort *word_ptr;
  ushort uval;
  int arg_eax;
  int val;
  ushort uval_2;
  int arg_ebx;
  byte flag;
  short local_2c;
  short sStack_2a;
  ushort local_28 [4];
  undefined2 local_20;
  ushort local_1c;
  short local_1a;
  undefined2 local_18;
  
  flag = 0;
  word_ptr = (ushort *)(arg_eax + 0xd);
  val = anger_fn_010c1a();
  local_2c = (short)*(undefined4 *)word_ptr;
  sStack_2a = (short)((uint)*(undefined4 *)word_ptr >> 0x10);
  local_28[(uint)flag * -4] = *(ushort *)(arg_eax + 0x11 + (uint)flag * -8);
  uval_2 = local_2c + (short)((uint)(arg_ebx * (&g_slab_attr_table)[val]) >> 0x10);
  uval = sStack_2a + (short)((uint)-(arg_ebx * (int)(&PTR_LAB_00192fe0)[val] >> 8) >> 8);
  local_28[0] = move_process_map_subtile_0b28e8();
  local_1a = (short)arg_ebx;
  if (*word_ptr < uval_2) {
    local_28[2] = *word_ptr + local_1a;
  }
  else if (uval_2 < *word_ptr) {
    local_28[2] = *word_ptr - local_1a;
  }
  else {
    local_28[2] = *word_ptr;
  }
  local_28[3] = *(undefined2 *)(arg_eax + 0xf);
  local_20 = move_process_map_subtile_0b28e8();
  if (*(ushort *)(arg_eax + 0xf) < uval) {
    local_1a = *(short *)(arg_eax + 0xf) + local_1a;
  }
  else if (uval < *(ushort *)(arg_eax + 0xf)) {
    local_1a = *(short *)(arg_eax + 0xf) - local_1a;
  }
  else {
    local_1a = *(short *)(arg_eax + 0xf);
  }
  local_1c = *word_ptr;
  local_18 = move_process_map_subtile_0b28e8();
  val = ariadne_fn_012a2e();
  if (val == 0) {
    val = ariadne_fn_012a2e();
    if (val == 0) {
      val = ariadne_fn_012a2e();
      if (val == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : ariadne_fn_012fef (Original VA: 0x12fef, Ghidra: FUN_00012fef)
 * Prototype: undefined4 ariadne_fn_012fef(void);
 * Address  : 0x12fef (Size: 112 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x012fef
 * Callers  : 1 -> ariadne_fn_0123ba
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 ariadne_fn_012fef(void)

{
  int arg_eax;
  int arg_edx;
  bool flag;
  bool flag_2;
  
  if (*(short *)(arg_eax + 0xd) == *(short *)(arg_edx + 0x18)) {
    if ((*(ushort *)(arg_eax + 0xf) <= *(ushort *)(arg_edx + 0x1a)) &&
       (*(ushort *)(arg_edx + 0x1a) <= *(ushort *)(arg_edx + 0x14))) {
      return 1;
    }
    if (*(ushort *)(arg_eax + 0xf) < *(ushort *)(arg_edx + 0x1a)) {
      return 0;
    }
    flag = *(ushort *)(arg_edx + 0x14) < *(ushort *)(arg_edx + 0x1a);
    flag_2 = *(ushort *)(arg_edx + 0x14) == *(ushort *)(arg_edx + 0x1a);
  }
  else {
    if (*(short *)(arg_eax + 0xf) != *(short *)(arg_edx + 0x1a)) {
      return 0;
    }
    if ((*(ushort *)(arg_eax + 0xd) <= *(ushort *)(arg_edx + 0x18)) &&
       (*(ushort *)(arg_edx + 0x18) <= *(ushort *)(arg_edx + 0x12))) {
      return 1;
    }
    if (*(ushort *)(arg_eax + 0xd) < *(ushort *)(arg_edx + 0x18)) {
      return 0;
    }
    flag = *(ushort *)(arg_edx + 0x12) < *(ushort *)(arg_edx + 0x18);
    flag_2 = *(ushort *)(arg_edx + 0x12) == *(ushort *)(arg_edx + 0x18);
  }
  if (flag || flag_2) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : ariadne_fn_01305f (Original VA: 0x1305f, Ghidra: FUN_0001305f)
 * Prototype: void ariadne_fn_01305f(void);
 * Address  : 0x1305f (Size: 68 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x01305f
 * Callers  : 1 -> ariadne_update_creature_control_011e00
 * Callees  : 0 -> 
 ******************************************************************************/
void ariadne_fn_01305f(void)

{
  int arg_eax;
  int loop_i;
  undefined2 *arg_edx;
  undefined1 uval;
  undefined2 *word_ptr;
  
  if (*(int *)(arg_eax + 0x10) < 10) {
    uval = (undefined1)*(undefined4 *)(arg_eax + 0x10);
  }
  else {
    uval = 10;
  }
  *(undefined1 *)(arg_edx + 0x14) = uval;
  *(undefined1 *)((int)arg_edx + 0x29) = *(undefined1 *)(arg_eax + 0x10);
  word_ptr = arg_edx;
  for (loop_i = 0; loop_i < (int)(uint)*(byte *)(arg_edx + 0x14); loop_i = loop_i + 1) {
    *word_ptr = *(undefined2 *)(arg_eax + 0x14);
    word_ptr[1] = *(undefined2 *)(arg_eax + 0x18);
    arg_eax = arg_eax + 8;
    word_ptr = word_ptr + 2;
  }
  return;
}

/******************************************************************************
 * Function : ariadne_fn_0130a3 (Original VA: 0x130a3, Ghidra: FUN_000130a3)
 * Prototype: undefined4 ariadne_fn_0130a3(void);
 * Address  : 0x130a3 (Size: 3 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x0130a3
 * Callers  : 1 -> ariadne_update_creature_control_012002
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 ariadne_fn_0130a3(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((*(short *)(arg_eax + 0xd) == *(short *)(arg_edx + 0xc)) &&
     (*(short *)(arg_eax + 0xf) == *(short *)(arg_edx + 0xe))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : ariadne_fn_0130a6 (Original VA: 0x130a6, Ghidra: FUN_000130a6)
 * Prototype: undefined4 ariadne_fn_0130a6(void);
 * Address  : 0x130a6 (Size: 31 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ariadne.cpp procedure @ 0x0130a6
 * Callers  : 1 -> ariadne_update_creature_control_011e00
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 ariadne_fn_0130a6(void)

{
  int arg_eax;
  short *arg_edx;
  
  if ((*(short *)(arg_eax + 0xd) == *arg_edx) && (*(short *)(arg_eax + 0xf) == arg_edx[1])) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : ariadne_fn_013169 (Original VA: 0x13169, Ghidra: FUN_00013169)
 * Prototype: undefined4 ariadne_fn_013169(undefined1 *param_1);
 * Address  : 0x13169 (Size: 496 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module ariadne.cpp procedure @ 0x013169
 * Callers  : 1 -> ariadne_speed_01277d
 * Callees  : 3 -> ariadne_fn_012a67, barracks_fn_01342a, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 ariadne_fn_013169(undefined1 *param_1)

{
  ushort uval;
  ushort uval_2;
  ushort uval_3;
  ushort uval_4;
  ushort uval_5;
  ushort uval_6;
  bool flag;
  bool flag_2;
  undefined1 uval_7;
  int arg_eax;
  uint uval_8;
  uint uval_9;
  uint uval_10;
  int val;
  undefined2 *extraout_ECX;
  int arg_edx;
  uint uval_11;
  ushort *arg_ebx;
  undefined8 uval_12;
  
  flag = (uint)*(ushort *)(arg_eax + 0xf) == (uint)arg_ebx[1] ||
          (int)((uint)*(ushort *)(arg_eax + 0xf) - (uint)arg_ebx[1]) < 0;
  flag_2 = (uint)*(ushort *)(arg_eax + 0xd) == (uint)*arg_ebx ||
          (int)((uint)*(ushort *)(arg_eax + 0xd) - (uint)*arg_ebx) < 0;
  uval = *(ushort *)(arg_edx + 0xe);
  uval_2 = *(ushort *)(arg_eax + 0xf);
  uval_3 = *(ushort *)(arg_eax + 0xd);
  uval_4 = *(ushort *)(arg_edx + 0xc);
  bflib_system_io_fn_0e69fc(*(undefined2 *)(arg_eax + 0xd));
  uval_12 = bflib_system_io_fn_0e69fc(*(undefined2 *)(arg_edx + 0xe),*(undefined2 *)(arg_eax + 0xf));
  uval_8 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  uval_5 = *(ushort *)(arg_eax + 0xd);
  uval_6 = *(ushort *)(arg_eax + 0xf);
  uval_11 = (uint)*(ushort *)(arg_edx + 0x29 + (uint)*(byte *)(arg_edx + 0x28) * 4);
  uval_9 = (uint)*(ushort *)(arg_edx + 0x2b + (uint)*(byte *)(arg_edx + 0x28) * 4);
  uval_10 = ariadne_fn_012a67();
  if ((uval_10 & 1) == 0) {
    if ((uval_10 & 2) == 0) {
      if ((uval_10 & 4) == 0) {
        return 0;
      }
      val = (uint)flag_2 * 6 + (uint)flag * 0xc +
               (uint)((int)((ulonglong)uval_12 >> 0x20) < (int)uval_12) * 3;
      *extraout_ECX = *(undefined2 *)(&g_data_0018e91b + val);
      uval_7 = (&g_data_0018e91d)[val];
    }
    else {
      if (((int)(uval_5 - uval_8) <= (int)uval_11) && (uval_11 <= uval_5 + uval_8)) goto LAB_0001328d;
      val = (uint)((uint)uval_3 == (uint)uval_4 || (int)((uint)uval_3 - (uint)uval_4) < 0) * 3 +
               (uint)flag * 6;
      *extraout_ECX = *(undefined2 *)(&g_data_0018e90f + val);
      uval_7 = (&g_data_0018e911)[val];
    }
  }
  else {
    if (((int)(uval_6 - uval_8) <= (int)uval_9) && (uval_9 <= uval_6 + uval_8)) {
LAB_0001328d:
      barracks_fn_01342a(param_1);
      return 1;
    }
    val = (uint)((uint)uval_2 == (uint)uval || (int)((uint)uval_2 - (uint)uval) < 0) * 3 +
             (uint)flag_2 * 6;
    *extraout_ECX = *(undefined2 *)(&g_data_0018e903 + val);
    uval_7 = (&g_data_0018e905)[val];
  }
  *param_1 = uval_7;
  return 1;
}

