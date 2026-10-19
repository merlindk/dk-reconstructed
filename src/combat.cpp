/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: combat.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 15
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : combat_process_map_subtile_015861 (Original VA: 0x15861, Ghidra: FUN_00015861)
 * Prototype: void combat_process_map_subtile_015861(void);
 * Address  : 0x15861 (Size: 69 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 1 -> column_process_map_subtile_015502
 ******************************************************************************/
void combat_process_map_subtile_015861(void)

{
  uint *word_ptr;
  int val;
  uint extraout_ECX;
  uint arg_edx;
  uint arg_ebx;
  
  column_process_map_subtile_015502();
  val = ((arg_edx & 0xff) + (arg_ebx & 0xff) * 0x100) * 5;
  *(undefined1 *)((int)&g_map_subtiles + val + 1) = 0;
  *(byte *)((int)&g_bss_00279205 + val) = *(byte *)((int)&g_bss_00279205 + val) & 0xf8;
  word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
  *word_ptr = *word_ptr | extraout_ECX & 0x7ff;
  *(short *)(&g_bss_0019e973 + extraout_ECX * 6) = *(short *)(&g_bss_0019e973 + extraout_ECX * 6) + 1;
  return;
}

/******************************************************************************
 * Function : combat_fn_0158a6 (Original VA: 0x158a6, Ghidra: FUN_000158a6)
 * Prototype: void combat_fn_0158a6(void);
 * Address  : 0x158a6 (Size: 167 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x0158a6
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 2 -> column_fn_015318, column_fn_0157ac
 ******************************************************************************/
void combat_fn_0158a6(void)

{
  byte flag;
  char ch;
  short *loop_i;
  short *val;
  uint uval;
  short *val_2;
  short *extraout_EDX;
  
  val_2 = (short *)&g_bss_0019e98b;
  do {
    loop_i = val_2;
    if (*val_2 != 0) {
      column_fn_015318();
      ch = column_fn_0157ac();
      *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) & 0xf;
      *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) | ch << 4;
      uval = (uint)(*(byte *)(extraout_EDX + 1) >> 4);
      for (loop_i = extraout_EDX + uval; ((int)uval < 8 && (loop_i[4] == 0)); loop_i = loop_i + 1)
      {
        uval = uval + 1;
      }
      loop_i = extraout_EDX;
      if ((int)uval < 8) {
        val = val_2 + 7;
        flag = 0;
        do {
          if (val[4] != 0) {
            *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xf1;
            *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) | (flag & 7) * '\x02';
          }
          val = val + -1;
          flag = flag + 1;
        } while (val != val_2);
      }
      else {
        *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xf1;
      }
    }
    val_2 = loop_i + 0xc;
  } while (val_2 != (short *)&g_bss_001aa973);
  return;
}

/******************************************************************************
 * Function : combat_get_flee_015950 (Original VA: 0x15950, Ghidra: FUN_00015950)
 * Prototype: longlong combat_get_flee_015950(void);
 * Address  : 0x15950 (Size: 203 bytes)
 * Module   : combat.cpp [direct_file_string_xref]
 * OrigLine : combat.cpp lines 31, 42
 * Purpose  : String 'CANNOT GET IN FLEE'
 * Callers  : 0 -> 
 * Callees  : 5 -> combchk_control_structure_gt_ca_016423, combchk_fn_01660d, person_fn_063b6d, person_external_change_state_but_064a5f, LbErrorLog
 ******************************************************************************/
longlong combat_get_flee_015950(void)

{
  char ch;
  int thing;
  int val;
  int cctrl_ptr;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = combchk_control_structure_gt_ca_016423();
  if (val != 0) {
    val = combchk_fn_01660d();
    if (val != 0) {
      ch = person_external_change_state_but_064a5f();
      if (ch == '\0') {
        LbErrorLog(); /* LbErrorLog("combat.cpp", line 42, "CANNOT GET IN FLEE") */
      }
      else {
        *(undefined4 *)(cctrl_ptr + 0x28e) = g_game_turn;
      }
      goto LAB_00015a15;
    }
    cctrl_ptr = (uint)*(byte *)(cctrl_ptr + 0xa6) * 4;
    if (*(int *)(&g_data_00174b84 + cctrl_ptr) != 0) {
      (**(code **)(&g_data_00174b84 + cctrl_ptr))();
      return CONCAT44(arg_edx,1);
    }
    LbErrorLog(); /* LbErrorLog("combat.cpp", line 31, "NO VALID FIGHT STATE") */
  }
  person_fn_063b6d();
LAB_00015a15:
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : combat_fn_015a1b (Original VA: 0x15a1b, Ghidra: FUN_00015a1b)
 * Prototype: undefined4 combat_fn_015a1b(void);
 * Address  : 0x15a1b (Size: 8 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015a1b
 * Callers  : 0 -> 
 * Callees  : 1 -> combtool_update_creature_control_01836b
 ******************************************************************************/
undefined4 combat_fn_015a1b(void)

{
  combtool_update_creature_control_01836b();
  return 0;
}

/******************************************************************************
 * Function : combat_fn_015a23 (Original VA: 0x15a23, Ghidra: FUN_00015a23)
 * Prototype: void combat_fn_015a23(void);
 * Address  : 0x15a23 (Size: 159 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015a23
 * Callers  : 0 -> 
 * Callees  : 8 -> combchk_update_creature_control_016242, combchk_update_creature_control_01629a, combchk_update_creature_control_0162f2, combmove_update_creature_control_0168a2, combtool_fn_018593, combtool_fn_0189d4, instance_negative_instance_049bfc, person_fn_063b6d
 ******************************************************************************/
void combat_fn_015a23(void)

{
  int val;
  int val_2;
  
  val = combchk_update_creature_control_0162f2();
  if (val != 0) {
    combchk_update_creature_control_016242();
    val = combchk_update_creature_control_01629a();
    if (val != 0) {
      combtool_fn_0189d4();
      val = combtool_fn_018593();
      if (val != 0) {
        val_2 = combmove_update_creature_control_0168a2();
        if (val_2 == 0) {
          return;
        }
        if (val < 1) {
          return;
        }
        instance_negative_instance_049bfc(0);
        return;
      }
    }
  }
  person_fn_063b6d();
  return;
}

/******************************************************************************
 * Function : combat_fn_015ac2 (Original VA: 0x15ac2, Ghidra: FUN_00015ac2)
 * Prototype: void combat_fn_015ac2(void);
 * Address  : 0x15ac2 (Size: 117 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015ac2
 * Callers  : 0 -> 
 * Callees  : 6 -> combchk_update_creature_control_016242, combchk_update_creature_control_01629a, combchk_update_creature_control_0162f2, combmove_update_creature_control_0169a5, combtool_fn_018607, combtool_fn_0189d4
 ******************************************************************************/
void combat_fn_015ac2(void)

{
  int val;
  int val_2;
  
  val = combchk_update_creature_control_0162f2();
  if (val != 0) {
    combchk_update_creature_control_016242();
    val = combchk_update_creature_control_01629a();
    if (val != 0) {
      combtool_fn_0189d4();
      val = combtool_fn_018607();
      if (val != 0) {
        val_2 = combmove_update_creature_control_0169a5();
        if (val_2 == 0) {
          return;
        }
        if (val < 1) {
          return;
        }
        instance_negative_instance_049bfc(0);
        return;
      }
    }
  }
  person_fn_063b6d();
  return;
}

/******************************************************************************
 * Function : combat_fn_015b37 (Original VA: 0x15b37, Ghidra: FUN_00015b37)
 * Prototype: void combat_fn_015b37(void);
 * Address  : 0x15b37 (Size: 173 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015b37
 * Callers  : 0 -> 
 * Callees  : 9 -> combchk_update_creature_control_016242, combchk_update_creature_control_01629a, combchk_update_creature_control_0162f2, combmove_update_creature_control_016b29, combobj_fn_016d38, combtool_update_creature_control_018938, combtool_fn_0189d4, person_fn_063b6d ...
 ******************************************************************************/
void combat_fn_015b37(void)

{
  int gui_btn;
  int val;
  
  val = combtool_update_creature_control_018938();
  if (val == 0) {
    if ((((((uint)*(ushort *)(gui_btn + 0x1b) + g_game_turn & 7) == 0) && /* gui_btn->id_num */
         (*(char *)(gui_btn + 0x1a) != '\x17')) && (val = creature_update_player_dungeon_084f04(), val != 0)) &&
       (val = combobj_fn_016d38(), val != 0)) {
      return;
    }
    val = combchk_update_creature_control_0162f2();
    if (val != 0) {
      combchk_update_creature_control_016242();
      val = combchk_update_creature_control_01629a();
      if (val != 0) {
        combtool_fn_0189d4();
        combmove_update_creature_control_016b29();
        return;
      }
    }
    person_fn_063b6d();
  }
  return;
}

/******************************************************************************
 * Function : combat_update_creature_control_015be4 (Original VA: 0x15be4, Ghidra: FUN_00015be4)
 * Prototype: undefined8 combat_update_creature_control_015be4(void);
 * Address  : 0x15be4 (Size: 408 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 6 -> combtool_process_thing_entity_01781a, combtool_creature_combat_already_adding_018087, person_fn_063b6d, move_fn_0b4ac4, move_process_slabmap_tile_0b5264, update_fn_0dc440
 ******************************************************************************/
undefined8 combat_update_creature_control_015be4(void)

{
  short short_val;
  int thing;
  int cctrl_ptr;
  int cctrl_ptr_2;
  uint uval;
  undefined4 arg_edx;
  int val;
  int val_2;
  byte flag;
  
  flag = 0;
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val_2 = g_game_turn - *(int *)(cctrl_ptr_2 + 0x28e);
  cctrl_ptr = update_fn_0dc440();
  if (cctrl_ptr < 0x600) {
    if (8 < val_2) {
      cctrl_ptr_2 = combtool_process_thing_entity_01781a();
      if (0 < cctrl_ptr_2) {
        combtool_creature_combat_already_adding_018087();
        goto LAB_00015ab2;
      }
    }
    if (val_2 <= (int)(uint)g_bss_002ebc44) {
LAB_00015c5e:
      short_val = move_process_slabmap_tile_0b5264();
      if (short_val != 0) {
        *(undefined1 *)(thing + 8) = 0x57; /* thing->active_state */
      }
      goto LAB_00015ab2;
    }
  }
  else {
    if (((*(char *)(cctrl_ptr_2 + 0x1b) != '\0') || (*(char *)(cctrl_ptr_2 + 0x1c) != '\0')) ||
       (cctrl_ptr = (uint)(byte)(&g_bss_002e9116)[(uint)*(byte *)(thing + 0x1a) * 0xe6] *
                ((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] +
                (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                      (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] * 0x23) /
                100), val = cctrl_ptr >> 0x1f,
       (int)*(short *)(thing + 0x5e) <
       (int)((cctrl_ptr + val * -0x100) - (uint)(val << 7 < 0)) >> 8)) {
      cctrl_ptr = move_fn_0b4ac4(0);
      if (cctrl_ptr == -1) {
        *(undefined4 *)(cctrl_ptr_2 + 0x288) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(cctrl_ptr_2 + 0x28c + (uint)flag * -8) =
             *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
      }
      *(int *)(cctrl_ptr_2 + 0x28e) = g_game_turn;
      goto LAB_00015ab2;
    }
    if (val_2 <= (int)(uint)g_bss_002ebc44) {
      uval = (int)(uint)g_bss_002ebc44 >> 2;
      if (uval < 0x32) {
        uval = 0x32;
      }
      if (val_2 <= (int)uval) {
        cctrl_ptr = move_fn_0b4ac4(0);
        if (cctrl_ptr == -1) {
          *(undefined4 *)(cctrl_ptr_2 + 0x288) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
          *(undefined2 *)(cctrl_ptr_2 + 0x28c + (uint)flag * -8) =
               *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
        }
        goto LAB_00015ab2;
      }
      goto LAB_00015c5e;
    }
  }
  person_fn_063b6d();
LAB_00015ab2:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : combat_fn_015d7c (Original VA: 0x15d7c, Ghidra: FUN_00015d7c)
 * Prototype: undefined4 combat_fn_015d7c(void);
 * Address  : 0x15d7c (Size: 56 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015d7c
 * Callers  : 1 -> combat_update_creature_control_015db4
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 combat_fn_015d7c(void)

{
  uint uval;
  bool flag;
  
  uval = bflib_system_io_fn_0e69fc();
  if (uval < 0xc) {
    if (uval < 4) {
      return 0;
    }
    if (uval < 7) {
      return 1;
    }
    flag = uval == 9;
  }
  else {
    if (uval < 0xd) {
      return 1;
    }
    if (uval < 0x13) {
      flag = uval == 0x11;
    }
    else {
      if (uval < 0x15) {
        return 1;
      }
      flag = uval == 0x1b;
    }
  }
  if (!flag) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : combat_update_creature_control_015db4 (Original VA: 0x15db4, Ghidra: FUN_00015db4)
 * Prototype: longlong combat_update_creature_control_015db4(void);
 * Address  : 0x15db4 (Size: 63 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 8 -> combchk_fn_016175, combchk_update_creature_control_01629a, combchk_update_creature_control_016376, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29, combtool_update_creature_control_0173e8, combtool_update_creature_control_017e02, combtool_update_creature_control_017e7e
 * Callees  : 1 -> combat_fn_015d7c
 ******************************************************************************/
longlong combat_update_creature_control_015db4(void)

{
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  int val;
  undefined8 uval;
  
  val = 1;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  do {
    if (0x2f < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (*(char *)(cctrl_ptr + 0x19f) != '\0') {
      uval = combat_fn_015d7c();
      val = (int)((ulonglong)uval >> 0x20);
      if ((int)uval != 0) {
        return CONCAT44(arg_edx,1);
      }
    }
    val = val + 1;
    cctrl_ptr = cctrl_ptr + 1;
  } while( true );
}

/******************************************************************************
 * Function : combat_fn_015df9 (Original VA: 0x15df9, Ghidra: FUN_00015df9)
 * Prototype: undefined4 combat_fn_015df9(void);
 * Address  : 0x15df9 (Size: 51 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015df9
 * Callers  : 1 -> combat_update_creature_control_015e26
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 combat_fn_015df9(void)

{
  uint uval;
  bool flag;
  
  uval = bflib_system_io_fn_0e69fc();
  if (uval < 0x11) {
    if (uval < 4) {
      return 0;
    }
    if (uval < 7) {
      return 1;
    }
    flag = uval == 9;
  }
  else {
    if (uval < 0x12) {
      return 1;
    }
    if (uval < 0x13) {
      return 0;
    }
    if (uval < 0x15) {
      return 1;
    }
    flag = uval == 0x1b;
  }
  if (!flag) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : combat_update_creature_control_015e26 (Original VA: 0x15e26, Ghidra: FUN_00015e26)
 * Prototype: longlong combat_update_creature_control_015e26(void);
 * Address  : 0x15e26 (Size: 63 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combobj_update_creature_control_016cd0, combobj_update_creature_control_016f23
 * Callees  : 1 -> combat_fn_015df9
 ******************************************************************************/
longlong combat_update_creature_control_015e26(void)

{
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  int val;
  undefined8 uval;
  
  val = 1;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  do {
    if (0x2f < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (*(char *)(cctrl_ptr + 0x19f) != '\0') {
      uval = combat_fn_015df9();
      val = (int)((ulonglong)uval >> 0x20);
      if ((int)uval != 0) {
        return CONCAT44(arg_edx,1);
      }
    }
    val = val + 1;
    cctrl_ptr = cctrl_ptr + 1;
  } while( true );
}

/******************************************************************************
 * Function : combat_update_creature_control_015e65 (Original VA: 0x15e65, Ghidra: FUN_00015e65)
 * Prototype: longlong combat_update_creature_control_015e65(void);
 * Address  : 0x15e65 (Size: 77 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combat_fn_015eb2, person_update_creature_control_063dd3
 * Callees  : 1 -> person_fn_064c4d
 ******************************************************************************/
longlong combat_update_creature_control_015e65(void)

{
  char ch;
  int thing;
  uint arg_edx;
  
  if ((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 2) == 0) && /* thing->ccontrol_idx */
      ((int)*(char *)(thing + 6) != (uint)g_neutral_player_number)) && /* thing->owner */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 2) == 0)) { /* thing->ccontrol_idx */
    ch = person_fn_064c4d();
    if (ch != '\0') {
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : combat_fn_015eb2 (Original VA: 0x15eb2, Ghidra: FUN_00015eb2)
 * Prototype: longlong combat_fn_015eb2(void);
 * Address  : 0x15eb2 (Size: 37 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015eb2
 * Callers  : 1 -> combat_fn_015ed7
 * Callees  : 1 -> combat_update_creature_control_015e65
 ******************************************************************************/
longlong combat_fn_015eb2(void)

{
  int arg_eax;
  undefined4 uval;
  char ch;
  uint arg_edx;
  
  if (*(char *)(arg_eax + 7) == '\x0e') {
    ch = *(char *)(arg_eax + 8);
  }
  else {
    ch = *(char *)(arg_eax + 7);
  }
  if (ch != 'W') {
    uval = combat_update_creature_control_015e65();
    return CONCAT44(arg_edx,uval);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : combat_fn_015ed7 (Original VA: 0x15ed7, Ghidra: FUN_00015ed7)
 * Prototype: longlong combat_fn_015ed7(void);
 * Address  : 0x15ed7 (Size: 27 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combat.cpp procedure @ 0x015ed7
 * Callers  : 1 -> update_creature_has_illegal_state_0e1b88
 * Callees  : 1 -> combat_fn_015eb2
 ******************************************************************************/
longlong combat_fn_015ed7(void)

{
  int gui_btn;
  undefined4 uval;
  uint arg_edx;
  
  if (((uint)*(ushort *)(gui_btn + 0x1b) + g_game_turn & 7) == 0) { /* gui_btn->id_num */
    uval = combat_fn_015eb2();
    return CONCAT44(arg_edx,uval);
  }
  return (ulonglong)arg_edx << 0x20;
}

