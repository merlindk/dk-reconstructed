/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: combobj.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : combobj_update_creature_control_016cd0 (Original VA: 0x16cd0, Ghidra: FUN_00016cd0)
 * Prototype: void combobj_update_creature_control_016cd0(void);
 * Address  : 0x16cd0 (Size: 104 bytes)
 * Module   : combobj.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combobj_fn_016d38
 * Callees  : 1 -> combat_update_creature_control_015e26
 ******************************************************************************/
void combobj_update_creature_control_016cd0(void)

{
  byte flag;
  undefined4 uval;
  int thing;
  int arg_edx;
  int cctrl_ptr;
  undefined8 uval_2;
  
  flag = *(byte *)(thing + 0x1a);
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0xa2) = *(undefined2 *)(arg_edx + 0x1b);
  uval = *(undefined4 *)(arg_edx + 9);
  *(undefined1 *)(cctrl_ptr + 0xaa) = 0;
  *(undefined4 *)(cctrl_ptr + 0x9e) = uval;
  *(byte *)(cctrl_ptr + 3) = *(byte *)(cctrl_ptr + 3) | 8;
  if ((&g_bss_002e918a)[(uint)flag * 0xe6] == '\x02') {
    uval_2 = combat_update_creature_control_015e26();
    cctrl_ptr = (int)((ulonglong)uval_2 >> 0x20);
    if ((int)uval_2 != 0) {
      *(undefined1 *)(cctrl_ptr + 0xa6) = 2;
      return;
    }
  }
  *(undefined1 *)(cctrl_ptr + 0xa6) = 1;
  return;
}

/******************************************************************************
 * Function : combobj_fn_016d38 (Original VA: 0x16d38, Ghidra: FUN_00016d38)
 * Prototype: undefined4 combobj_fn_016d38(void);
 * Address  : 0x16d38 (Size: 42 bytes)
 * Module   : combobj.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combobj.cpp procedure @ 0x016d38
 * Callers  : 4 -> combat_fn_015b37, good_update_player_dungeon_038edc, person_update_creature_control_063dd3, update_creature_has_illegal_state_0e1b88
 * Callees  : 2 -> combobj_update_creature_control_016cd0, person_external_change_state_but_064a5f
 ******************************************************************************/
undefined4 combobj_fn_016d38(void)

{
  char ch;
  
  ch = person_external_change_state_but_064a5f();
  if (ch != '\0') {
    combobj_update_creature_control_016cd0();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : combobj_object_combat_but_should_016d62 (Original VA: 0x16d62, Ghidra: FUN_00016d62)
 * Prototype: longlong combobj_object_combat_but_should_016d62(void);
 * Address  : 0x16d62 (Size: 147 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp lines 93
 * Purpose  : String 'NOT IN OBJECT COMBAT BUT SHOULD BE'
 * Callers  : 0 -> 
 * Callees  : 3 -> combchk_control_structure_gt_ca_016423, person_fn_063b6d, LbErrorLog
 ******************************************************************************/
longlong combobj_object_combat_but_should_016d62(void)

{
  int thing_ptr;
  int thing;
  int val;
  int cctrl_ptr;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa2)];
  if ((*(byte *)(cctrl_ptr + 3) & 8) != 0) {
    val = combchk_control_structure_gt_ca_016423();
    if ((val == 0) || (*(char *)(thing_ptr + 7) == '\x03')) goto LAB_00016de7;
    cctrl_ptr = (uint)*(byte *)(cctrl_ptr + 0xa6) * 4;
    if (*(int *)(&g_data_00174b94 + cctrl_ptr) != 0) {
      (**(code **)(&g_data_00174b94 + cctrl_ptr))();
      return CONCAT44(arg_edx,1);
    }
  }
  LbErrorLog(); /* LbErrorLog("combobj.cpp", line 93, "Invalid fight object state") */
LAB_00016de7:
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : combobj_creature_has_melee_instance_016df5 (Original VA: 0x16df5, Ghidra: FUN_00016df5)
 * Prototype: void combobj_creature_has_melee_instance_016df5(void);
 * Address  : 0x16df5 (Size: 166 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp lines 121
 * Purpose  : String 'CREATURE %d HAS NO MELEE INSTANCE IN FIGHT'
 * Callers  : 0 -> 
 * Callees  : 6 -> combmove_update_creature_control_0169a5, combtool_fn_018671, combtool_fn_0189d4, person_fn_063b6d, LbErrorLog, dk_sprintf
 ******************************************************************************/
void combobj_creature_has_melee_instance_016df5(void)

{
  int arg_eax;
  int val;
  int val_2;
  
  combtool_fn_0189d4();
  val = combtool_fn_018671();
  if (val == 0) {
    dk_sprintf(&g_log_sprintf_buf,s_CREATURE__d_HAS_NO_MELEE_INSTANC_0016058e,
                 *(undefined1 *)(arg_eax + 0x1a));
    LbErrorLog(); /* LbErrorLog("combobj.cpp", line 121, g_log_buf) */
    person_fn_063b6d();
  }
  else {
    val_2 = combmove_update_creature_control_0169a5();
    if ((val_2 != 0) && (0 < val)) {
      instance_negative_instance_049bfc(0);
    }
  }
  return;
}

/******************************************************************************
 * Function : combobj_fn_016e9b (Original VA: 0x16e9b, Ghidra: FUN_00016e9b)
 * Prototype: void combobj_fn_016e9b(void);
 * Address  : 0x16e9b (Size: 106 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Purpose  : Module combobj.cpp procedure @ 0x016e9b
 * Callers  : 0 -> 
 * Callees  : 4 -> combmove_update_creature_control_0168a2, combtool_fn_0186d2, combtool_fn_0189d4, instance_negative_instance_049bfc
 ******************************************************************************/
void combobj_fn_016e9b(void)

{
  int val;
  int val_2;
  
  combtool_fn_0189d4();
  val = combtool_fn_0186d2();
  val_2 = combmove_update_creature_control_0168a2();
  if ((val_2 != 0) && (0 < val)) {
    instance_negative_instance_049bfc(0);
  }
  return;
}

/******************************************************************************
 * Function : combobj_update_creature_control_016f05 (Original VA: 0x16f05, Ghidra: FUN_00016f05)
 * Prototype: undefined4 combobj_update_creature_control_016f05(void);
 * Address  : 0x16f05 (Size: 30 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combobj_update_creature_control_016f05(void)

{
  byte *byte_ptr;
  int cctrl_ptr;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0xa2) = 0;
  byte_ptr = (byte *)(cctrl_ptr + 3);
  *byte_ptr = *byte_ptr & 0xf7;
  return 1;
}

/******************************************************************************
 * Function : combobj_update_creature_control_016f23 (Original VA: 0x16f23, Ghidra: FUN_00016f23)
 * Prototype: void combobj_update_creature_control_016f23(void);
 * Address  : 0x16f23 (Size: 104 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combobj_fn_016f8b
 * Callees  : 1 -> combat_update_creature_control_015e26
 ******************************************************************************/
void combobj_update_creature_control_016f23(void)

{
  byte flag;
  undefined4 uval;
  int thing;
  int arg_edx;
  int cctrl_ptr;
  undefined8 uval_2;
  
  flag = *(byte *)(thing + 0x1a);
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0xa2) = *(undefined2 *)(arg_edx + 0x1b);
  uval = *(undefined4 *)(arg_edx + 9);
  *(undefined1 *)(cctrl_ptr + 0xaa) = 0;
  *(undefined4 *)(cctrl_ptr + 0x9e) = uval;
  *(byte *)(cctrl_ptr + 3) = *(byte *)(cctrl_ptr + 3) | 0x10;
  if ((&g_bss_002e918a)[(uint)flag * 0xe6] == '\x02') {
    uval_2 = combat_update_creature_control_015e26();
    cctrl_ptr = (int)((ulonglong)uval_2 >> 0x20);
    if ((int)uval_2 != 0) {
      *(undefined1 *)(cctrl_ptr + 0xa6) = 2;
      return;
    }
  }
  *(undefined1 *)(cctrl_ptr + 0xa6) = 1;
  return;
}

/******************************************************************************
 * Function : combobj_fn_016f8b (Original VA: 0x16f8b, Ghidra: FUN_00016f8b)
 * Prototype: void combobj_fn_016f8b(void);
 * Address  : 0x16f8b (Size: 32 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Purpose  : Module combobj.cpp procedure @ 0x016f8b
 * Callers  : 4 -> angtool_update_creature_control_0115a4, evil_roll_action_random_02855c, person_update_creature_control_063dd3, update_creature_has_illegal_state_0e1b88
 * Callees  : 2 -> combobj_update_creature_control_016f23, person_external_change_state_but_064a5f
 ******************************************************************************/
void combobj_fn_016f8b(void)

{
  char ch;
  
  ch = person_external_change_state_but_064a5f();
  if (ch != '\0') {
    combobj_update_creature_control_016f23();
  }
  return;
}

/******************************************************************************
 * Function : combobj_door_combat_but_should_016fab (Original VA: 0x16fab, Ghidra: FUN_00016fab)
 * Prototype: longlong combobj_door_combat_but_should_016fab(void);
 * Address  : 0x16fab (Size: 167 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp lines 240, 256
 * Purpose  : String 'NOT IN DOOR COMBAT BUT SHOULD BE'
 * Callers  : 0 -> 
 * Callees  : 4 -> combchk_control_structure_gt_ca_016423, person_fn_063b6d, creature_update_creature_and_thing_082cac, LbErrorLog
 ******************************************************************************/
longlong combobj_door_combat_but_should_016fab(void)

{
  int thing_ptr;
  int thing;
  int val;
  int cctrl_ptr;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa2)];
  if ((*(byte *)(cctrl_ptr + 3) & 0x10) == 0) {
    LbErrorLog(); /* LbErrorLog("combobj.cpp", line 240, "NOT IN DOOR COMBAT BUT SHOULD BE") */
  }
  else {
    val = combchk_control_structure_gt_ca_016423();
    if ((val != 0) && (*(char *)(thing_ptr + 7) != '\x01')) {
      cctrl_ptr = (uint)*(byte *)(cctrl_ptr + 0xa6) * 4;
      if (*(int *)(&g_data_00174ba0 + cctrl_ptr) != 0) {
        (**(code **)(&g_data_00174ba0 + cctrl_ptr))();
        return CONCAT44(arg_edx,1);
      }
      LbErrorLog(); /* LbErrorLog("combobj.cpp", line 256, "No valid fight door state") */
    }
    creature_update_creature_and_thing_082cac();
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : combobj_creature_has_melee_instance_017052 (Original VA: 0x17052, Ghidra: FUN_00017052)
 * Prototype: void combobj_creature_has_melee_instance_017052(void);
 * Address  : 0x17052 (Size: 126 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp lines 280
 * Purpose  : String 'CREATURE %d HAS NO MELEE INSTANCE IN FIGHT'
 * Callers  : 0 -> 
 * Callees  : 5 -> combtool_fn_018671, combtool_fn_0189d4, person_fn_063b6d, LbErrorLog, dk_sprintf
 ******************************************************************************/
void combobj_creature_has_melee_instance_017052(void)

{
  int val;
  int arg_eax;
  int val_2;
  
  combtool_fn_0189d4();
  val_2 = combtool_fn_018671();
  if (val_2 == 0) {
    dk_sprintf(&g_log_sprintf_buf,s_CREATURE__d_HAS_NO_MELEE_INSTANC_00160618,
                 *(undefined1 *)(arg_eax + 0x1a));
    LbErrorLog(); /* LbErrorLog("combobj.cpp", line 280, g_log_buf) */
    person_fn_063b6d();
  }
  else {
    val = combmove_update_creature_control_0169a5();
    if ((val != 0) && (0 < val_2)) {
      instance_negative_instance_049bfc(0);
    }
  }
  return;
}

/******************************************************************************
 * Function : combobj_fn_0170d0 (Original VA: 0x170d0, Ghidra: FUN_000170d0)
 * Prototype: void combobj_fn_0170d0(void);
 * Address  : 0x170d0 (Size: 59 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Purpose  : Module combobj.cpp procedure @ 0x0170d0
 * Callers  : 0 -> 
 * Callees  : 1 -> combtool_fn_0189d4
 ******************************************************************************/
void combobj_fn_0170d0(void)

{
  int val;
  int val_2;
  
  combtool_fn_0189d4();
  val = combtool_fn_0186d2();
  val_2 = combmove_update_creature_control_0168a2();
  if ((val_2 != 0) && (0 < val)) {
    instance_negative_instance_049bfc(0);
  }
  return;
}

/******************************************************************************
 * Function : combobj_update_creature_control_01710b (Original VA: 0x1710b, Ghidra: FUN_0001710b)
 * Prototype: undefined4 combobj_update_creature_control_01710b(void);
 * Address  : 0x1710b (Size: 29 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combobj_update_creature_control_01710b(void)

{
  byte *byte_ptr;
  int cctrl_ptr;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0xa2) = 0;
  byte_ptr = (byte *)(cctrl_ptr + 3);
  *byte_ptr = *byte_ptr & 0xef;
  return 1;
}

/******************************************************************************
 * Function : combobj_thing_this_check_017128 (Original VA: 0x17128, Ghidra: FUN_00017128)
 * Prototype: longlong combobj_thing_this_check_017128(void);
 * Address  : 0x17128 (Size: 91 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp lines 334
 * Purpose  : String 'INVALID THING FOR THIS CHECK'
 * Callers  : 2 -> setup_compute_creature_eye_offset, setup_apply_possession_lens_and_eye
 * Callees  : 2 -> person_fn_063b6d, LbErrorLog
 ******************************************************************************/
longlong combobj_thing_this_check_017128(void)

{
  int thing;
  char ch;
  uint arg_edx;
  
  if (*(char *)(thing + 0x1f) != '\x05') { /* thing->class_id */
    LbErrorLog(); /* LbErrorLog("combobj.cpp", line 334, "INVALID THING FOR THIS CHECK") */
    return (ulonglong)arg_edx << 0x20;
  }
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 3) & 0x10) != 0) { /* thing->ccontrol_idx */
    if (*(char *)(thing + 7) == '\x0e') {
      ch = *(char *)(thing + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing + 7);
    }
    if (ch != 'W') {
      person_fn_063b6d();
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : combobj_update_creature_control_017184 (Original VA: 0x17184, Ghidra: FUN_00017184)
 * Prototype: undefined4 combobj_update_creature_control_017184(void);
 * Address  : 0x17184 (Size: 72 bytes)
 * Module   : combobj.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combobj_update_creature_control_017184(void)

{
  int cctrl_ptr;
  int thing;
  int arg_edx;
  
  if ((((*(char *)(thing + 0x1f) == '\x05') && /* thing->class_id */
       (cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)], *(char *)(cctrl_ptr + 3) != '\0')) && /* thing->ccontrol_idx */
      (*(char *)(cctrl_ptr + 0xaa) != '\0')) &&
     ((*(char *)(cctrl_ptr + 3) == *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 3) &&
      (thing != arg_edx)))) {
    return 1;
  }
  return 0;
}

