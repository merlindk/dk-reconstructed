/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: combchk.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 17
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : combchk_update_creature_and_thing_015ef2 (Original VA: 0x15ef2, Ghidra: FUN_00015ef2)
 * Prototype: undefined4 combchk_update_creature_and_thing_015ef2(void);
 * Address  : 0x15ef2 (Size: 47 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 4 -> combchk_update_creature_control_015f21, combchk_update_creature_control_0162f2, combold_process_thing_entity_0175fa, combtool_process_thing_entity_01781a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combchk_update_creature_and_thing_015ef2(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 3) != '\0') &&
     (arg_eax == (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xa2)])) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_update_creature_control_015f21 (Original VA: 0x15f21, Ghidra: FUN_00015f21)
 * Prototype: undefined4 combchk_update_creature_control_015f21(void);
 * Address  : 0x15f21 (Size: 302 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> combold_process_thing_entity_0175fa, combtool_process_thing_entity_01781a, evil_update_creature_and_thing_028eb4
 * Callees  : 1 -> combchk_update_creature_and_thing_015ef2
 ******************************************************************************/
undefined4 combchk_update_creature_control_015f21(void)

{
  int cctrl_ptr;
  byte *thing;
  uint uval;
  uint uval_2;
  int val;
  byte *arg_edx;
  uint player_off;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (thing[6] != arg_edx[6]) {
    uval = (uint)(char)arg_edx[6];
    uval_2 = (uint)g_neutral_player_number;
    if ((uval_2 != uval) &&
       ((((player_off = (uint)(char)thing[6], uval_2 == player_off || (uval_2 == uval)) ||
         (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (arg_edx[6] & 0x1f)) == 0)) ||
        (((uval_2 == uval || (uval_2 == player_off)) ||
         (((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << (thing[6] & 0x1f)) == 0))))))
    goto LAB_00015fee;
  }
  if ((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 0x10) == 0) && /* thing->ccontrol_idx */
      ((*(byte *)(cctrl_ptr + 0xad) & 0x10) == 0)) && (val = combchk_update_creature_and_thing_015ef2(), val == 0)) {
    return 0;
  }
  if (thing == arg_edx) {
    return 0;
  }
LAB_00015fee:
  if ((((((*(byte *)(cctrl_ptr + 1) & 1) != 0) && ((*(byte *)(cctrl_ptr + 1) & 2) == 0)) &&
       ((*arg_edx & 0x10) == 0)) && ((arg_edx[1] & 2) == 0)) &&
     ((((*(byte *)(cctrl_ptr + 0xac) & 0x20) == 0 || (0 < *(short *)(cctrl_ptr + 0xaf))) ||
      (((&g_bss_002e91e5)[(uint)thing[0x1a] * 0xe6] != '\0' ||
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xac) & 0x40) != 0)))))) { /* thing->ccontrol_idx */
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_update_creature_control_01604f (Original VA: 0x1604f, Ghidra: FUN_0001604f)
 * Prototype: undefined4 combchk_update_creature_control_01604f(void);
 * Address  : 0x1604f (Size: 219 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combchk_update_creature_control_016242
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combchk_update_creature_control_01604f(void)

{
  int cctrl_ptr;
  int val;
  byte *thing;
  byte *arg_edx;
  uint uval;
  uint uval_2;
  uint player_off;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (thing[6] != arg_edx[6]) {
    uval = (uint)(char)arg_edx[6];
    uval_2 = (uint)g_neutral_player_number;
    if ((uval != uval_2) &&
       ((((player_off = (uint)(char)thing[6], player_off == uval_2 || (uval == uval_2)) ||
         (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (arg_edx[6] & 0x1f)) == 0)) ||
        (((uval == uval_2 || (player_off == uval_2)) ||
         (((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << (thing[6] & 0x1f)) == 0))))))
    goto LAB_00015fee;
  }
  if (((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xa9) == '\0') && /* thing->ccontrol_idx */
      ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 0x10) == 0)) && /* thing->ccontrol_idx */
     (((*(byte *)(cctrl_ptr + 0xad) & 0x10) == 0 && (val = combchk_update_creature_and_thing_015ef2(), val == 0)))) {
    return 0;
  }
  if (thing == arg_edx) {
    return 0;
  }
LAB_00015fee:
  if ((((((*(byte *)(cctrl_ptr + 1) & 1) != 0) && ((*(byte *)(cctrl_ptr + 1) & 2) == 0)) &&
       ((*arg_edx & 0x10) == 0)) && ((arg_edx[1] & 2) == 0)) &&
     ((((*(byte *)(cctrl_ptr + 0xac) & 0x20) == 0 || (0 < *(short *)(cctrl_ptr + 0xaf))) ||
      (((&g_bss_002e91e5)[(uint)thing[0x1a] * 0xe6] != '\0' ||
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xac) & 0x40) != 0)))))) { /* thing->ccontrol_idx */
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_fn_01612a (Original VA: 0x1612a, Ghidra: FUN_0001612a)
 * Prototype: int combchk_fn_01612a(void);
 * Address  : 0x1612a (Size: 37 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combchk.cpp procedure @ 0x01612a
 * Callers  : 1 -> combchk_fn_016175
 * Callees  : 1 -> routes_fn_0d1548
 ******************************************************************************/
int combchk_fn_01612a(void)

{
  int val;
  
  val = routes_fn_0d1548();
  if (((val == -1) || (val == 0x7fffffff)) || (0x14ff < val)) {
    val = -1;
  }
  return val;
}

/******************************************************************************
 * Function : combchk_fn_01614f (Original VA: 0x1614f, Ghidra: FUN_0001614f)
 * Prototype: undefined4 combchk_fn_01614f(void);
 * Address  : 0x1614f (Size: 38 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combchk.cpp procedure @ 0x01614f
 * Callers  : 5 -> combchk_fn_016175, combchk_update_creature_control_0163c9, research_update_creature_control_066247, research_update_creature_and_thing_0666a8, creature_update_player_dungeon_084f04
 * Callees  : 1 -> anger_handle_door_thing_0102c0
 ******************************************************************************/
undefined4 combchk_fn_01614f(void)

{
  int arg_eax;
  undefined4 uval;
  int arg_ebx;
  
  if ((int)((uint)(byte)(&g_bss_002e91af)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] * 0x100) < arg_ebx)
  {
    return 0;
  }
  uval = anger_handle_door_thing_0102c0();
  return uval;
}

/******************************************************************************
 * Function : combchk_fn_016175 (Original VA: 0x16175, Ghidra: FUN_00016175)
 * Prototype: undefined4 combchk_fn_016175(int param_1);
 * Address  : 0x16175 (Size: 205 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combchk.cpp procedure @ 0x016175
 * Callers  : 7 -> angtool_process_map_subtile_011408, combchk_update_creature_control_016242, combold_update_creature_and_thing_0174b0, combold_process_thing_entity_0175fa, combtool_update_creature_and_thing_0176c6, combtool_process_thing_entity_01781a, lair_update_slab_subtile_columns_04d8d2
 * Callees  : 5 -> anger_fn_010408, combat_update_creature_control_015db4, combchk_fn_01612a, combchk_fn_01614f, ceiling_fn_07bb10
 ******************************************************************************/
undefined4 combchk_fn_016175(int param_1)

{
  int val;
  undefined4 uval;
  int val_2;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int local_14;
  
  val = anger_fn_010408();
  if (val == 0) {
    val = combchk_fn_01614f();
    if (0 < val) {
      if (val != 2) goto LAB_000161b0;
      val_2 = combat_update_creature_control_015db4();
      local_14 = 2;
      val = extraout_ECX_00;
      if (val_2 != 0) goto LAB_000161eb;
    }
LAB_0001623a:
    uval = 0;
  }
  else {
    if (arg_ecx == 0) {
      val = ceiling_fn_07bb10();
      if (val < 1) goto LAB_000161cd;
    }
    else {
      val = combchk_fn_01612a();
      if (val < 0) {
LAB_000161cd:
        val = combat_update_creature_control_015db4();
        if ((val != 0) && (local_14 = combchk_fn_01614f(), val = extraout_ECX, 0 < local_14)) {
LAB_000161eb:
          if (param_1 != 0) {
            *(undefined1 *)(val + 0xa8) = (undefined1)local_14;
            *(undefined2 *)(val + 0xa4) = *(undefined2 *)(arg_edx + 0x1b);
            *(undefined4 *)(val + 0x9a) = g_game_turn;
          }
          return 2;
        }
        goto LAB_0001623a;
      }
    }
LAB_000161b0:
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : combchk_update_creature_control_016242 (Original VA: 0x16242, Ghidra: FUN_00016242)
 * Prototype: uint combchk_update_creature_control_016242(void);
 * Address  : 0x16242 (Size: 88 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> combat_fn_015a23, combat_fn_015ac2, combat_fn_015b37
 * Callees  : 3 -> combchk_update_creature_control_01604f, combchk_fn_016175, combtool_fn_0189d4
 ******************************************************************************/
uint combchk_update_creature_control_016242(void)

{
  byte cctrl_ptr;
  int thing;
  int val;
  uint uval;
  
  cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xa7); /* thing->ccontrol_idx */
  val = combchk_update_creature_control_01604f();
  uval = 0;
  if ((val != 0) &&
     (combtool_fn_0189d4(), uval = (uint)cctrl_ptr,
     ((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 7) == 0)) { /* thing->index_or_angle */
    uval = combchk_fn_016175(1);
  }
  return uval;
}

/******************************************************************************
 * Function : combchk_update_creature_control_01629a (Original VA: 0x1629a, Ghidra: FUN_0001629a)
 * Prototype: undefined4 combchk_update_creature_control_01629a(void);
 * Address  : 0x1629a (Size: 88 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> combat_fn_015a23, combat_fn_015ac2, combat_fn_015b37, combtool_update_creature_control_018938
 * Callees  : 1 -> combat_update_creature_control_015db4
 ******************************************************************************/
undefined4 combchk_update_creature_control_01629a(void)

{
  int thing;
  int val;
  int arg_edx;
  
  if (arg_edx == 0) {
    return 0;
  }
  if (arg_edx == 2) {
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xa7) != '\x02') { /* thing->ccontrol_idx */
      return 0;
    }
  }
  else if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xa7) == '\x02') { /* thing->ccontrol_idx */
    if ((&g_bss_002e918a)[(uint)*(byte *)(thing + 0x1a) * 0xe6] != '\x02') {
      return 0;
    }
    val = combat_update_creature_control_015db4();
    if (val == 0) {
      return 0;
    }
    return 1;
  }
  return 1;
}

/******************************************************************************
 * Function : combchk_update_creature_control_0162f2 (Original VA: 0x162f2, Ghidra: FUN_000162f2)
 * Prototype: undefined4 combchk_update_creature_control_0162f2(void);
 * Address  : 0x162f2 (Size: 132 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> combat_fn_015a23, combat_fn_015ac2, combat_fn_015b37
 * Callees  : 4 -> combchk_update_creature_and_thing_015ef2, combtool_update_creature_control_0173e8, combold_update_creature_and_thing_0174b0, combtool_fn_0189d4
 ******************************************************************************/
undefined4 combchk_update_creature_control_0162f2(void)

{
  int thing;
  int cctrl_ptr;
  int cctrl_ptr_2;
  int extraout_ECX;
  int arg_edx;
  
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr = combchk_update_creature_and_thing_015ef2();
  if ((cctrl_ptr == 0) ||
     (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 3) & 1) == 0 &&
      (*(char *)(cctrl_ptr_2 + 0x1b) != '\0')))) {
    combtool_fn_0189d4();
    cctrl_ptr_2 = combtool_update_creature_control_0173e8();
    combold_update_creature_and_thing_0174b0();
    if (extraout_ECX < cctrl_ptr_2 + 0x102) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : combchk_update_creature_control_016376 (Original VA: 0x16376, Ghidra: FUN_00016376)
 * Prototype: undefined4 combchk_update_creature_control_016376(void);
 * Address  : 0x16376 (Size: 83 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combtool_update_creature_control_018938
 * Callees  : 1 -> combat_update_creature_control_015db4
 ******************************************************************************/
undefined4 combchk_update_creature_control_016376(void)

{
  byte flag;
  int arg_eax;
  int arg_edx;
  int cctrl_ptr;
  int arg_ebx;
  undefined8 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (arg_ebx == 2) {
    flag = *(byte *)(cctrl_ptr + 0x1c);
  }
  else {
    if ((&g_bss_002e918a)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\x02') {
      uval = combat_update_creature_control_015db4();
      cctrl_ptr = (int)((ulonglong)uval >> 0x20);
      if (((int)uval != 0) && (*(byte *)(cctrl_ptr + 0x1c) < 4)) {
        return 1;
      }
    }
    flag = *(byte *)(cctrl_ptr + 0x1b);
  }
  if (flag < 4) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_update_creature_control_0163c9 (Original VA: 0x163c9, Ghidra: FUN_000163c9)
 * Prototype: undefined1 combchk_update_creature_control_0163c9(void);
 * Address  : 0x163c9 (Size: 90 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29
 * Callees  : 1 -> combchk_fn_01614f
 ******************************************************************************/
undefined1 combchk_update_creature_control_0163c9(void)

{
  int cctrl_ptr;
  undefined1 uval;
  int thing;
  int extraout_ECX;
  int arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(int *)(cctrl_ptr + 0x9a) == g_game_turn) &&
     (*(short *)(cctrl_ptr + 0xa4) == *(short *)(arg_edx + 0x1b))) {
    return *(undefined1 *)(cctrl_ptr + 0xa8);
  }
  *(int *)(cctrl_ptr + 0x9a) = g_game_turn;
  *(undefined2 *)(cctrl_ptr + 0xa4) = *(undefined2 *)(arg_edx + 0x1b);
  uval = combchk_fn_01614f();
  *(undefined1 *)(extraout_ECX + 0xa8) = uval;
  return uval;
}

/******************************************************************************
 * Function : combchk_control_structure_gt_ca_016423 (Original VA: 0x16423, Ghidra: FUN_00016423)
 * Prototype: undefined4 combchk_control_structure_gt_ca_016423(void);
 * Address  : 0x16423 (Size: 117 bytes)
 * Module   : combchk.cpp [direct_file_string_xref]
 * OrigLine : combchk.cpp lines 447
 * Purpose  : String 'NO CONTROL STRUCTURE - C%d M%d GT%d CA%d'
 * Callers  : 3 -> combat_get_flee_015950, combobj_object_combat_but_should_016d62, combobj_door_combat_but_should_016fab
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
undefined4 combchk_control_structure_gt_ca_016423(void)

{
  byte flag;
  int thing;
  byte *arg_edx;
  
  if (((*arg_edx & 1) == 0) ||
     (*(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9e) != *(int *)(arg_edx + 9))) { /* thing->ccontrol_idx */
    return 0;
  }
  if (((*(short *)(arg_edx + 100) == 0) && (flag = arg_edx[0x1f], flag != 1)) && (flag != 9)) {
    dk_sprintf(&g_log_sprintf_buf,s_NO_CONTROL_STRUCTURE___C_d_M_d_G_0016049c,flag,arg_edx[0x1a],
                 g_game_turn,*(undefined4 *)(thing + 9));
    LbErrorLog(); /* LbErrorLog("combchk.cpp", line 447, g_log_buf) */
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : combchk_fn_016498 (Original VA: 0x16498, Ghidra: FUN_00016498)
 * Prototype: undefined8 combchk_fn_016498(void);
 * Address  : 0x16498 (Size: 39 bytes)
 * Module   : combchk.cpp [contiguous_same_unit_span]
 * Purpose  : Module combchk.cpp procedure @ 0x016498
 * Callers  : 1 -> combchk_fn_01660d
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
undefined8 combchk_fn_016498(void)

{
  int val;
  undefined4 arg_edx;
  
  val = update_fn_0dc440();
  return CONCAT44(arg_edx,(uint)(val < 0x600));
}

/******************************************************************************
 * Function : combchk_update_creature_control_0164bf (Original VA: 0x164bf, Ghidra: FUN_000164bf)
 * Prototype: uint combchk_update_creature_control_0164bf(void);
 * Address  : 0x164bf (Size: 108 bytes)
 * Module   : combchk.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combchk_update_creature_control_01652b
 * Callees  : 0 -> 
 ******************************************************************************/
uint combchk_update_creature_control_0164bf(void)

{
  int thing;
  int loop_i;
  uint arg_edx;
  int cctrl_ptr;
  int loop_i_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0x1b) != '\0') {
    loop_i_2 = cctrl_ptr;
    for (loop_i = 0; loop_i < 4; loop_i = loop_i + 1) {
      if ((*(short *)(loop_i_2 + 0xb) != 0) && (arg_edx != *(byte *)(thing + 0x1a))) {
        return (uint)*(byte *)(thing + 0x1a);
      }
      loop_i_2 = loop_i_2 + 2;
    }
  }
  if (*(char *)(cctrl_ptr + 0x1c) != '\0') {
    for (loop_i_2 = 0; loop_i_2 < 4; loop_i_2 = loop_i_2 + 1) {
      if ((*(short *)(cctrl_ptr + 0x13) != 0) && (*(byte *)(thing + 0x1a) != arg_edx)) {
        return (uint)*(byte *)(thing + 0x1a);
      }
      cctrl_ptr = cctrl_ptr + 2;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_update_creature_control_01652b (Original VA: 0x1652b, Ghidra: FUN_0001652b)
 * Prototype: undefined4 combchk_update_creature_control_01652b(void);
 * Address  : 0x1652b (Size: 162 bytes)
 * Module   : combchk.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combchk_null_enemy_0165cd, combtool_ranged_attackers_serious_018119
 * Callees  : 1 -> combchk_update_creature_control_0164bf
 ******************************************************************************/
undefined4 combchk_update_creature_control_01652b(void)

{
  int thing;
  int cctrl_ptr;
  int arg_edx;
  int val;
  bool flag;
  
  if ((byte)(&g_bss_002e911b)[(uint)*(byte *)(thing + 0x1a) * 0xe6] == 0xff) {
    if (*(char *)(arg_edx + 0x1a) != *(char *)(thing + 0x1a)) {
      return 1;
    }
    cctrl_ptr = combchk_update_creature_control_0164bf();
    flag = cctrl_ptr == 0;
  }
  else {
    cctrl_ptr = ((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] *
                   (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / 100 /* thing->ccontrol_idx */
            + (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73]) *
            (uint)(byte)(&g_bss_002e911b)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
    val = cctrl_ptr >> 0x1f;
    if ((int)((cctrl_ptr + val * -0x100) - (uint)(val << 7 < 0)) >> 8 <
        (int)*(short *)(thing + 0x5e)) {
      return 0;
    }
    if ((int)*(char *)(thing + 6) == (uint)g_neutral_player_number) { /* thing->owner */
      return 0;
    }
    flag = ((&g_bss_002e0591)[*(char *)(thing + 6) * 0x1508] & 2) == 0; /* thing->owner */
  }
  if (!flag) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_null_enemy_0165cd (Original VA: 0x165cd, Ghidra: FUN_000165cd)
 * Prototype: undefined4 combchk_null_enemy_0165cd(void);
 * Address  : 0x165cd (Size: 64 bytes)
 * Module   : combchk.cpp [direct_file_string_xref]
 * OrigLine : combchk.cpp lines 551
 * Purpose  : String 'NULL - ENEMY'
 * Callers  : 1 -> combchk_fn_01660d
 * Callees  : 2 -> combchk_update_creature_control_01652b, LbErrorLog
 ******************************************************************************/
undefined4 combchk_null_enemy_0165cd(void)

{
  int thing;
  undefined4 uval;
  int arg_edx;
  
  if ((arg_edx == 0) || (arg_edx == g_thing_ptrs)) {
    LbErrorLog(); /* LbErrorLog("combchk.cpp", line 551, "NULL - ENEMY") */
  }
  else if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xa9) == '\0') { /* thing->ccontrol_idx */
    uval = combchk_update_creature_control_01652b();
    return uval;
  }
  return 0;
}

/******************************************************************************
 * Function : combchk_fn_01660d (Original VA: 0x1660d, Ghidra: FUN_0001660d)
 * Prototype: undefined4 combchk_fn_01660d(void);
 * Address  : 0x1660d (Size: 48 bytes)
 * Module   : combchk.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module combchk.cpp procedure @ 0x01660d
 * Callers  : 2 -> combat_get_flee_015950, combtool_update_creature_control_01829f
 * Callees  : 3 -> combchk_fn_016498, combchk_null_enemy_0165cd, combtool_fn_0189d4
 ******************************************************************************/
undefined4 combchk_fn_01660d(void)

{
  int val;
  undefined4 uval;
  
  combtool_fn_0189d4();
  val = combchk_null_enemy_0165cd();
  uval = 0;
  if (val != 0) {
    val = combchk_fn_016498();
    if (val != 0) {
      return 0;
    }
    uval = 1;
  }
  return uval;
}

