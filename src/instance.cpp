/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: instance.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 63
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : instance_fn_0499ce (Original VA: 0x499ce, Ghidra: FUN_000499ce)
 * Prototype: void instance_fn_0499ce(void);
 * Address  : 0x499ce (Size: 132 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Purpose  : Module instance.cpp procedure @ 0x0499ce
 * Callers  : 2 -> input_update_player_view_state_047ea3, input_draw_text_overlay_049426
 * Callees  : 2 -> newgui_fn_05b645, set_packet_action
 ******************************************************************************/
void instance_fn_0499ce(void)

{
  if (((g_game_system_flags & 1) != 0) || (0x140 < g_screen_width)) {
    newgui_fn_05b645();
  }
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : instance_fn_049a52 (Original VA: 0x49a52, Ghidra: FUN_00049a52)
 * Prototype: ulonglong instance_fn_049a52(void);
 * Address  : 0x49a52 (Size: 72 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Purpose  : Module instance.cpp procedure @ 0x049a52
 * Callers  : 1 -> input_update_player_dungeon_047bcd
 * Callees  : 2 -> inits_fn_045f23, room_fn_0cfefc
 ******************************************************************************/
ulonglong instance_fn_049a52(void)

{
  undefined4 arg_eax;
  undefined4 uval;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  int local_14;
  
  val = 10;
  while( true ) {
    if (0x18 < val) {
      return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
    }
    val = inits_fn_045f23();
    if (val != 0) break;
    val = extraout_ECX + 1;
    arg_eax = 0;
  }
  (&g_bss_003db4fc)[local_14] = 0;
  uval = room_fn_0cfefc();
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval >> 8),1));
}

/******************************************************************************
 * Function : instance_fn_049a9a (Original VA: 0x49a9a, Ghidra: FUN_00049a9a)
 * Prototype: void instance_fn_049a9a(void);
 * Address  : 0x49a9a (Size: 87 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Purpose  : Module instance.cpp procedure @ 0x049a9a
 * Callers  : 1 -> input_update_player_dungeon_047bcd
 * Callees  : 3 -> newgui_update_player_dungeon_05a6a6, newgui_update_player_dungeon_05d15e, set_packet_action
 ******************************************************************************/
void instance_fn_049a9a(void)

{
  char ch;
  
  ch = newgui_update_player_dungeon_05d15e();
  if (ch != '\0') {
    set_packet_action(0,0);
    newgui_update_player_dungeon_05a6a6();
  }
  return;
}

/******************************************************************************
 * Function : instance_fn_049af1 (Original VA: 0x49af1, Ghidra: FUN_00049af1)
 * Prototype: void instance_fn_049af1(void);
 * Address  : 0x49af1 (Size: 247 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Purpose  : Module instance.cpp procedure @ 0x049af1
 * Callers  : 1 -> inits_fn_045cc1
 * Callees  : 1 -> moodneed_fn_051374
 ******************************************************************************/
void instance_fn_049af1(void)

{
  if (g_bss_003db526 != '\0') {
    if ((g_bss_003482c1 == 0) && (g_bss_003db5fc == '\x1f')) {
      g_bss_003482c1 = 1;
      g_bss_003db5fc = '\0';
    }
    if ((g_bss_003482c1 == 1) && (g_bss_003db5fc == '%')) {
      g_bss_003482c1 = 2;
      g_bss_003db5fc = '\0';
    }
    if ((g_bss_003482c1 == 2) && (g_bss_003db5fc == '\x12')) {
      g_bss_003482c1 = 3;
      g_bss_003db5fc = '\0';
    }
    if ((g_bss_003482c1 == 3) && (g_bss_003db5fc == '%')) {
      g_bss_003482c1 = 4;
      g_bss_003db5fc = '\0';
    }
    if ((g_bss_003482c1 == 4) && (g_bss_003db5fc == '\x1f')) {
      g_bss_003482c1 = 5;
      g_bss_003db5fc = '\0';
    }
    if ((g_bss_003482c1 == 5) && (g_bss_003db5fc == '\x17')) {
      g_bss_003482c1 = 6;
      g_bss_003db5fc = '\0';
    }
    if ((g_bss_003482c1 == 6) && (g_bss_003db5fc == '\x1f')) {
      g_bss_003db5fc = '\0';
      g_bss_003482c1 = 7;
      moodneed_fn_051374();
    }
    if (g_bss_003db5fc == '\0') {
      return;
    }
  }
  g_bss_003482c1 = 0;
  return;
}

/******************************************************************************
 * Function : instance_negative_instance_049bfc (Original VA: 0x49bfc, Ghidra: FUN_00049bfc)
 * Prototype: void instance_negative_instance_049bfc(undefined2 *param_1);
 * Address  : 0x49bfc (Size: 477 bytes)
 * Module   : instance.cpp [direct_file_string_xref]
 * OrigLine : instance.cpp lines 26
 * Purpose  : String 'Negative instance'
 * Callers  : 33 -> angtool_update_creature_control_010ed3, angtool_update_slab_subtile_columns_0110ed, combat_fn_015a23, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29, combobj_fn_016e9b, evil_hope_we_never_get_0286d5, evil_update_creature_and_thing_028eb4 ...
 * Callees  : 2 -> update_fn_0ddad0, LbErrorLog
 ******************************************************************************/
void instance_negative_instance_049bfc(undefined2 *param_1)

{
  int cctrl_ptr;
  short short_val;
  byte *thing;
  int val;
  uint uval;
  undefined2 arg_cx;
  int val_2;
  uint arg_edx;
  int val_3;
  undefined1 local_18;
  
  val_2 = arg_edx * 0x2a;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (arg_edx != 0) {
    if (*(int *)(&g_data_0018edec + val_2) == -1) {
      LbErrorLog(); /* LbErrorLog("instance.cpp", line 26, "Negative instance") */
    }
    else {
      if (*(short *)(&g_data_0018ee06 + val_2) != 0) {
        short_val = *(short *)(cctrl_ptr + 0xaf);
        if (short_val <= *(short *)(&g_data_0018ee06 + val_2)) {
          short_val = *(short *)(&g_data_0018ee06 + val_2);
        }
        *(short *)(cctrl_ptr + 0xaf) = short_val;
      }
      if ((*thing & 0x20) == 0) {
        val = *(int *)(&g_data_0018edec + val_2);
        val_2 = *(int *)(&g_data_0018edf4 + val_2);
      }
      else {
        val = *(int *)(&g_data_0018edf0 + val_2);
        val_2 = *(int *)(&g_data_0018edf8 + val_2);
      }
      if ((*(byte *)(cctrl_ptr + 0xac) & 1) != 0) {
        val_2 = val_2 * 2;
        val = val * 2;
      }
      if ((*(byte *)(cctrl_ptr + 0xac) & 2) == 0) {
        if (*(short *)(cctrl_ptr + 0x21) == 0) {
          if (((uint)g_neutral_player_number != (int)(char)thing[6]) &&
             (*(int *)(&g_bss_002e0e11 + (char)thing[6] * 0x1508) != 0)) {
            val_2 = val_2 - ((int)((val_2 + (val_2 >> 0x1f) * -4) - (uint)((val_2 >> 0x1f) << 1 < 0)
                                  ) >> 2);
            val = val - ((int)((val + (val >> 0x1f) * -4) - (uint)((val >> 0x1f) << 1 < 0)
                                  ) >> 2);
          }
        }
        else {
          val_3 = val_2 * 3 >> 0x1f;
          val_2 = (int)((val_2 * 3 + val_3 * -4) - (uint)(val_3 << 1 < 0)) >> 2;
          val_3 = val * 3 >> 0x1f;
          val = (int)((val * 3 + val_3 * -4) - (uint)(val_3 << 1 < 0)) >> 2;
        }
      }
      else {
        val_2 = val_2 / 2;
        val = val / 2;
      }
      if (val_2 < 2) {
        val_2 = 1;
      }
      if (val < 2) {
        val = 1;
      }
      uval = (uint)*(byte *)(cctrl_ptr + 0xd2);
      if (((uval == 0) || (uval != arg_edx)) || ((&g_data_0018ee05)[uval * 0x2a] == '\0')) {
        *(undefined2 *)(cctrl_ptr + 0xd4) = 0;
        local_18 = (undefined1)arg_edx;
        *(short *)(cctrl_ptr + 0xd8) = (short)val;
        *(undefined1 *)(cctrl_ptr + 0xd2) = local_18;
        *(undefined2 *)(cctrl_ptr + 0xda) = arg_cx;
        *(short *)(cctrl_ptr + 0xd6) = (short)val_2;
        val_2 = update_fn_0ddad0();
        *(short *)(cctrl_ptr + 0x1ce) = (short)(val_2 / val);
        if (param_1 == (undefined2 *)0x0) {
          *(undefined1 *)(cctrl_ptr + 0xdc) = 0;
          *(undefined1 *)(cctrl_ptr + 0xdd) = 0;
        }
        else {
          *(char *)(cctrl_ptr + 0xdc) = (char)((ushort)*param_1 >> 8);
          *(char *)(cctrl_ptr + 0xdd) = (char)((ushort)param_1[1] >> 8);
        }
      }
      else {
        *(undefined1 *)(cctrl_ptr + 0xd3) = 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : instance_update_creature_control_049dd9 (Original VA: 0x49dd9, Ghidra: FUN_00049dd9)
 * Prototype: void instance_update_creature_control_049dd9(void);
 * Address  : 0x49dd9 (Size: 28 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 10 -> comptool_computer_thing_hand_01e119, impset_update_creature_control_03ef50, impset_fn_03f12c, impset_update_creature_control_03f42b, person_fn_064a2e, person_update_creature_control_064ae7, creature_update_creature_control_0824dc, creature_process_thing_entity_0847d4 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void instance_update_creature_control_049dd9(void)

{
  int cctrl_ptr;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined1 *)(cctrl_ptr + 0xd2) = 0;
  *(undefined2 *)(cctrl_ptr + 0xd4) = 0;
  return;
}

/******************************************************************************
 * Function : instance_update_creature_control_049df5 (Original VA: 0x49df5, Ghidra: FUN_00049df5)
 * Prototype: void instance_update_creature_control_049df5(void);
 * Address  : 0x49df5 (Size: 160 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 0 -> 
 ******************************************************************************/
void instance_update_creature_control_049df5(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
    *(short *)(cctrl_ptr + 0xd4) = *(short *)(cctrl_ptr + 0xd4) + 1;
    if ((*(short *)(cctrl_ptr + 0xd4) == *(short *)(cctrl_ptr + 0xd6)) &&
       (val = (uint)*(byte *)(cctrl_ptr + 0xd2) * 0x2a, *(int *)(&g_data_0018ee09 + val) != 0)) {
      (**(code **)(&g_data_0018ee09 + val))();
    }
    if (*(short *)(cctrl_ptr + 0xd4) == *(short *)(cctrl_ptr + 0xd8)) {
      if (*(char *)(cctrl_ptr + 0xd3) == '\0') {
        *(undefined4 *)(cctrl_ptr + 0xde + (uint)*(byte *)(cctrl_ptr + 0xd2) * 4) = g_game_turn;
        *(undefined1 *)(cctrl_ptr + 0xd2) = 0;
      }
      else {
        *(short *)(cctrl_ptr + 0xd4) = *(short *)(cctrl_ptr + 0xd4) + -1;
      }
    }
    *(undefined1 *)(cctrl_ptr + 0xd3) = 0;
  }
  return;
}

/******************************************************************************
 * Function : instance_update_creature_control_049e95 (Original VA: 0x49e95, Ghidra: FUN_00049e95)
 * Prototype: undefined1 instance_update_creature_control_049e95(void);
 * Address  : 0x49e95 (Size: 20 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 16 -> combtool_update_creature_control_01840a, combtool_fn_018593, combtool_fn_018607, combtool_fn_018671, combtool_fn_0186d2, combtool_fn_018736, evil_update_creature_control_02796f, evil_update_creature_control_0294ca ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 instance_update_creature_control_049e95(void)

{
  int thing;
  int arg_edx;
  
  return *(undefined1 *)(arg_edx + 0x19e + (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]); /* thing->ccontrol_idx */
}

/******************************************************************************
 * Function : instance_update_creature_control_049ea9 (Original VA: 0x49ea9, Ghidra: FUN_00049ea9)
 * Prototype: bool instance_update_creature_control_049ea9(void);
 * Address  : 0x49ea9 (Size: 86 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 12 -> combtool_update_creature_control_01840a, combtool_fn_018593, combtool_fn_018607, combtool_fn_018671, combtool_fn_0186d2, combtool_fn_018736, evil_update_creature_control_0294ca, newgui_draw_gui_button_label_055701 ...
 * Callees  : 0 -> 
 ******************************************************************************/
bool instance_update_creature_control_049ea9(void)

{
  byte *thing;
  int arg_edx;
  int cctrl_ptr;
  bool flag;
  
  if ((*thing & 0x20) == 0) {
    cctrl_ptr = g_game_turn - *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + arg_edx * 4 + 0xde); /* thing->ccontrol_idx */
    flag = SBORROW4(cctrl_ptr,*(int *)(&g_data_0018edfc + arg_edx * 0x2a));
    cctrl_ptr = cctrl_ptr - *(int *)(&g_data_0018edfc + arg_edx * 0x2a);
  }
  else {
    cctrl_ptr = g_game_turn - *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + arg_edx * 4 + 0xde); /* thing->ccontrol_idx */
    flag = SBORROW4(cctrl_ptr,*(int *)(&g_data_0018ee00 + arg_edx * 0x2a));
    cctrl_ptr = cctrl_ptr - *(int *)(&g_data_0018ee00 + arg_edx * 0x2a);
  }
  return flag == cctrl_ptr < 0;
}

/******************************************************************************
 * Function : instance_fn_049eff (Original VA: 0x49eff, Ghidra: FUN_00049eff)
 * Prototype: void instance_fn_049eff(void);
 * Address  : 0x49eff (Size: 79 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x049eff
 * Callers  : 23 -> battle_process_thing_entity_014280, event_fn_0276d0, game_out_sync_gameturn_036ff4, input_maintain_gui_button_state_04823a, input_draw_text_overlay_049426, instance_update_creature_and_thing_04af38, instance_process_thing_entity_04b2a7, instance_update_creature_and_thing_04b478 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void instance_fn_049eff(void)

{
  int arg_eax;
  int arg_edx;
  int val;
  int arg_ebx;
  
  if (((*(byte *)(arg_eax + 0x4b0) == 0) ||
      (*(int *)(&g_data_0018f857 + (uint)*(byte *)(arg_eax + 0x4b0) * 0x2c) != 1)) || (arg_ebx != 0))
  {
    *(char *)(arg_eax + 0x4b0) = (char)arg_edx;
    val = arg_edx * 0x2c;
    *(undefined4 *)(arg_eax + 0x4b1) = *(undefined4 *)(&g_data_0018f853 + val);
    if (*(int *)(&g_data_0018f85b + val) != 0) {
      (**(code **)(&g_data_0018f85b + val))();
    }
  }
  return;
}

/******************************************************************************
 * Function : instance_fn_049f4e (Original VA: 0x49f4e, Ghidra: FUN_00049f4e)
 * Prototype: void instance_fn_049f4e(void);
 * Address  : 0x49f4e (Size: 140 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x049f4e
 * Callers  : 2 -> update_go_first_person_without_0de6a8, update_update_player_view_state_0e4ffc
 * Callees  : 0 -> 
 ******************************************************************************/
void instance_fn_049f4e(void)

{
  int arg_eax;
  int val;
  
  if (*(char *)(arg_eax + 0x4b0) != '\0') {
    if (*(int *)(arg_eax + 0x4b1) != 0) {
      val = (uint)*(byte *)(arg_eax + 0x4b0) * 0x2c;
      *(int *)(arg_eax + 0x4b1) = *(int *)(arg_eax + 0x4b1) + -1;
      if (*(int *)(&g_data_0018f85f + val) != 0) {
        (**(code **)(&g_data_0018f85f + val))();
      }
    }
    if (*(int *)(arg_eax + 0x4b1) == 0) {
      val = (uint)*(byte *)(arg_eax + 0x4b0) * 0x2c;
      *(undefined1 *)(arg_eax + 0x4b0) = 0;
      if (*(int *)(&g_data_0018f863 + val) != 0) {
        (**(code **)(&g_data_0018f863 + val))();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : instance_update_creature_and_thing_049fda (Original VA: 0x49fda, Ghidra: FUN_00049fda)
 * Prototype: undefined4 instance_update_creature_and_thing_049fda(void);
 * Address  : 0x49fda (Size: 159 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> instance_fn_04ab11
 * Callees  : 1 -> setup_switch_screen_resolution
 ******************************************************************************/
undefined4 instance_update_creature_and_thing_049fda(void)

{
  int cctrl_ptr;
  byte *thing;
  undefined4 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0xda) == 0) {
    if ((*thing & 0x20) == 0) {
LAB_0004a03e:
      uval = 4;
      goto LAB_0004a040;
    }
  }
  else if ((*thing & 0x20) == 0) {
    if (*(char *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xda)] + 0x1f) != '\x01') {
      if (*(byte *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xda)] + 6) != thing[6]) goto LAB_0004a03e;
      goto LAB_0004a014;
    }
  }
  else if (*(char *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xda)] + 0x1f) != '\x01') {
LAB_0004a014:
    uval = 2;
    goto LAB_0004a040;
  }
  uval = 1;
LAB_0004a040:
  setup_switch_screen_resolution(uval);
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_control_04a079 (Original VA: 0x4a079, Ghidra: FUN_0004a079)
 * Prototype: undefined4 instance_update_creature_control_04a079(void);
 * Address  : 0x4a079 (Size: 93 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> spell_update_creature_control_072109, spell_handle_object_thing_07220a
 ******************************************************************************/
undefined4 instance_update_creature_control_04a079(void)

{
  int thing;
  int *arg_edx;
  
  if (((&g_data_0018f5cb)[*arg_edx * 0x11] == '\0') ||
     (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xda) == 0)) { /* thing->ccontrol_idx */
    spell_update_creature_control_072109(*(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xdd)); /* thing->ccontrol_idx */
  }
  else {
    spell_handle_object_thing_07220a();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_control_04a0d6 (Original VA: 0x4a0d6, Ghidra: FUN_0004a0d6)
 * Prototype: undefined4 instance_update_creature_control_04a0d6(void);
 * Address  : 0x4a0d6 (Size: 822 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 9 -> build_process_map_subtile_014afe, build_process_map_subtile_014d45, effect_update_slab_subtile_columns_0246f2, effect_allocate_light_effect_024998, event_fn_0274ad, imptool_stack_pos_0400da, moodneed_fn_051374, sound_fn_06e538 ...
 ******************************************************************************/
undefined4 instance_update_creature_control_04a0d6(void)

{
  char ch;
  int thing;
  uint cctrl_ptr;
  int slab_coord;
  uint *word_ptr;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  
  local_2c = (uint)*(char *)(thing + 6); /* thing->owner */
  local_20 = (uint)(byte)(&g_bss_002e1094)
                         [(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x91) * 3 + /* thing->ccontrol_idx */
                          local_2c * 0x1508];
  local_40 = (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8f); /* thing->ccontrol_idx */
  cctrl_ptr = (uint)*(ushort *)
                 (&g_bss_002e1094 +
                  (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x91) * 3 + /* thing->ccontrol_idx */
                  local_2c * 0x1508 + 1);
  if (local_40 != cctrl_ptr) {
    return 0;
  }
  cctrl_ptr = (int)cctrl_ptr >> 8;
  local_40 = local_40 % 0x100;
  slab_coord = ((&g_subtile_to_slab_lut)[local_40] + (&g_subtile_to_slab_lut)[cctrl_ptr] * 0x55) * 6;
  local_38 = (cctrl_ptr / 3) * 0x55;
  local_18 = 3;
  local_28 = (uint)(byte)(&g_slabmap_base)[(local_40 / 3 + local_38) * 6];
  local_1c = g_bss_002ebc40;
  if (((&g_slabmap)[slab_coord] & 7) != local_2c) {
    local_1c = g_bss_002ebc3c;
  }
  local_3c = slab_coord;
  local_34 = local_40;
  if (local_1c < (int)(uint)(byte)(&g_bss_002d33c9)[slab_coord]) {
    if (local_28 != 0x34) {
      (&g_bss_002d33c9)[slab_coord] = (&g_bss_002d33c9)[slab_coord] - (char)local_1c;
    }
    uStack_44 = 0x100;
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    sound_fn_06e538(3,0,2);
    effect_allocate_light_effect_024998();
    if (local_20 != 2) {
      return 0;
    }
    slab_coord = (g_bss_002eb9e8 * local_1c) / (int)g_bss_002eb9b6;
    if ((local_28 == 0x34) && (slab_coord = slab_coord / 6, slab_coord < 1)) {
      slab_coord = 1;
    }
    *(int *)(thing + 0x13) = *(int *)(thing + 0x13) + slab_coord; /* thing->anim_sprite */
    *(int *)(&g_bss_002e17ac + *(char *)(thing + 6) * 0x1508) = /* thing->owner */
         *(int *)(&g_bss_002e17ac + *(char *)(thing + 6) * 0x1508) + slab_coord; /* thing->owner */
    return 0;
  }
  uStack_44 = 0x4a1db;
  imptool_stack_pos_0400da();
  local_24 = local_34 * 0x100 + 0x80;
  local_30 = cctrl_ptr * 0x100 + 0x80;
  if (local_20 == 2) {
    slab_coord = (int)((uint)(byte)(&g_bss_002d33c9)[slab_coord] * (int)g_bss_002eb9e8) / (int)g_bss_002eb9b6;
    *(int *)(thing + 0x13) = *(int *)(thing + 0x13) + slab_coord; /* thing->anim_sprite */
    *(int *)(&g_bss_002e17ac + *(char *)(thing + 6) * 0x1508) = /* thing->owner */
         *(int *)(&g_bss_002e17ac + *(char *)(thing + 6) * 0x1508) + slab_coord; /* thing->owner */
    uStack_44 = 0x4a23c;
    build_process_map_subtile_014d45();
    uStack_44 = 0x4a24a;
    ch = effect_update_slab_subtile_columns_0246f2();
    word_ptr = &local_40;
    if (ch == '\0') goto LAB_0004a2ef;
    uStack_44 = 0;
    event_fn_0274ad();
    word_ptr = &uStack_44;
    if ((int)*(char *)(thing + 6) != (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) /* thing->owner */
    goto LAB_0004a2ef;
  }
  else {
    word_ptr = &local_40;
    if (local_20 != 1) goto LAB_0004a2ef;
    uStack_44 = 0x4a29a;
    build_process_map_subtile_014afe();
    uStack_44 = 0x4a2a8;
    ch = effect_update_slab_subtile_columns_0246f2();
    word_ptr = &local_40;
    if (ch == '\0') goto LAB_0004a2ef;
    word_ptr = &uStack_44;
    uStack_44 = 0;
    event_fn_0274ad();
    if ((int)*(char *)(thing + 6) != (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) /* thing->owner */
    goto LAB_0004a2ef;
  }
  moodneed_fn_051374();
  word_ptr = &uStack_44;
LAB_0004a2ef:
  *(undefined4 *)((int)word_ptr + -4) = 0x4a2fb;
  creature_update_creature_and_thing_082cac();
  *(undefined4 *)((int)word_ptr + -4) = 0x100;
  *(undefined4 *)((int)word_ptr + -8) = 4;
  *(undefined4 *)((int)word_ptr + -0xc) = 0;
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  *(undefined4 *)((int)word_ptr + -0x10) = 3;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  *(undefined4 *)((int)word_ptr + -0x14) = 0x4a349;
  sound_fn_06e538();
  return 1;
}

/******************************************************************************
 * Function : instance_update_player_dungeon_04a40c (Original VA: 0x4a40c, Ghidra: FUN_0004a40c)
 * Prototype: undefined4 instance_update_player_dungeon_04a40c(void);
 * Address  : 0x4a40c (Size: 253 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> instance_fn_04ab11
 * Callees  : 8 -> cdtest_fn_015030, dungeon_update_player_dungeon_02371b, effect_allocate_light_effect_024998, sound_fn_06e538, trap_process_map_subtile_076753, trap_fn_0767f1, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
undefined4 instance_update_player_dungeon_04a40c(void)

{
  char ch;
  int arg_eax;
  int val;
  int val_2;
  
  ch = *(char *)(arg_eax + 6);
  effect_allocate_light_effect_024998((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)],(&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)]);
  sound_fn_06e538(3,0,2,0x100);
  slab_attempt_place_animating_slab_0d7688(1);
  cdtest_fn_015030();
  slab_process_slabmap_tile_0da6fc();
  dungeon_update_player_dungeon_02371b();
  val_2 = 0;
  *(int *)(&g_bss_002e1810 + ch * 0x1508) = *(int *)(&g_bss_002e1810 + ch * 0x1508) + 1;
  do {
    val = trap_process_map_subtile_076753();
    if (val != 0) {
      trap_fn_0767f1();
    }
    val_2 = val_2 + 2;
  } while (val_2 != 0x12);
  return 1;
}

/******************************************************************************
 * Function : instance_fn_04a562 (Original VA: 0x4a562, Ghidra: FUN_0004a562)
 * Prototype: undefined4 instance_fn_04a562(void);
 * Address  : 0x4a562 (Size: 17 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04a562
 * Callers  : 1 -> instance_roll_unsynced_random_04a573
 * Callees  : 1 -> sound_fn_06e538
 ******************************************************************************/
undefined4 instance_fn_04a562(void)

{
  sound_fn_06e538();
  return 1;
}

/******************************************************************************
 * Function : instance_roll_unsynced_random_04a573 (Original VA: 0x4a573, Ghidra: FUN_0004a573)
 * Prototype: void instance_roll_unsynced_random_04a573(void);
 * Address  : 0x4a573 (Size: 102 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed)
 * Callers  : 0 -> 
 * Callees  : 2 -> effect_allocate_light_effect_024998, instance_fn_04a562
 ******************************************************************************/
void instance_roll_unsynced_random_04a573(void)

{
  int val;
  
  val = effect_allocate_light_effect_024998();
  if (val != 0) {
    *(undefined1 *)(val + 0x16) = 4;
  }
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  instance_fn_04a562(0,4,0x100);
  return;
}

/******************************************************************************
 * Function : instance_update_creature_control_04a5d9 (Original VA: 0x4a5d9, Ghidra: FUN_0004a5d9)
 * Prototype: undefined4 instance_update_creature_control_04a5d9(void);
 * Address  : 0x4a5d9 (Size: 201 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> build_process_map_subtile_014afe, sound_fn_06e538
 ******************************************************************************/
undefined4 instance_update_creature_control_04a5d9(void)

{
  int thing;
  int cctrl_ptr;
  
  cctrl_ptr = ((&g_subtile_to_slab_lut)
           [(int)(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1ff) >> 8] * 0x55 /* thing->ccontrol_idx */
          + (&g_subtile_to_slab_lut)
            [(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1ff) % 0x100]) * 6; /* thing->ccontrol_idx */
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  sound_fn_06e538(3,0,2,0x100);
  if ((byte)(&g_bss_002d33c9)[cctrl_ptr] < 2) {
    build_process_map_subtile_014afe();
  }
  else {
    (&g_bss_002d33c9)[cctrl_ptr] = (&g_bss_002d33c9)[cctrl_ptr] + -1;
  }
  return 1;
}

/******************************************************************************
 * Function : instance_process_dungeon_room_04a6a2 (Original VA: 0x4a6a2, Ghidra: FUN_0004a6a2)
 * Prototype: undefined4 instance_process_dungeon_room_04a6a2(void);
 * Address  : 0x4a6a2 (Size: 575 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 9 -> cdtest_process_slabmap_tile_014c9a, dungeon_update_player_dungeon_023754, effect_allocate_light_effect_024998, event_fn_0274ad, sound_fn_06e538, trap_process_map_subtile_076753, trap_fn_0767f1, room_how_room_exist_slabs_0d0118 ...
 ******************************************************************************/
undefined4 instance_process_dungeon_room_04a6a2(void)

{
  byte flag;
  int arg_eax;
  int room_off;
  short short_val;
  int slab_coord;
  undefined4 *word_ptr;
  undefined4 uStack_30;
  undefined1 local_2c;
  char local_2b;
  undefined1 local_2a;
  char local_29;
  undefined1 local_28;
  undefined1 local_27;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  
  word_ptr = (undefined4 *)&local_2c;
  flag = *(byte *)(arg_eax + 0xe);
  local_18 = (uint)*(byte *)(arg_eax + 0x10);
  slab_coord = ((&g_subtile_to_slab_lut)[local_18] * 0x55 + (&g_subtile_to_slab_lut)[flag]) * 6;
  room_off = (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45;
  local_1c = 1;
  if ((room_off == 0) ||
     (local_24 = (uint)((&g_slabmap)[slab_coord] & 7), (int)*(char *)(arg_eax + 6) == local_24)) {
    if ((byte)(&g_bss_002d33c9)[slab_coord] < 2) {
      if (((&g_slabmap)[((&g_subtile_to_slab_lut)[flag] + (&g_subtile_to_slab_lut)[local_18] * 0x55) * 6] & 7) !=
          g_neutral_player_number) {
        *(int *)(&g_bss_002e17f8 +
                (uint)((&g_slabmap)
                       [((&g_subtile_to_slab_lut)[flag] + (&g_subtile_to_slab_lut)[local_18] * 0x55) * 6] & 7) *
                0x1508) =
             *(int *)(&g_bss_002e17f8 +
                     (uint)((&g_slabmap)
                            [((&g_subtile_to_slab_lut)[flag] + (&g_subtile_to_slab_lut)[local_18] * 0x55) * 6] & 7) *
                     0x1508) + 1;
      }
      local_24 = local_18 << 2;
      uStack_30 = 0x4a863;
      dungeon_update_player_dungeon_023754();
      uStack_30 = 0x4a871;
      cdtest_process_slabmap_tile_014c9a();
      room_off = 0;
      do {
        local_24 = (&g_subtile_to_slab_lut)[flag] * 3;
        local_20 = (int)*(char *)((int)&g_data_0018b647 + room_off + 3);
        uStack_30 = 0x4a8b0;
        slab_coord = trap_process_map_subtile_076753();
        if (slab_coord != 0) {
          uStack_30 = 0x4a8b9;
          trap_fn_0767f1();
        }
        room_off = room_off + 2;
      } while (room_off != 0x12);
      *(int *)(&g_bss_002e17f4 + *(char *)(arg_eax + 6) * 0x1508) =
           *(int *)(&g_bss_002e17f4 + *(char *)(arg_eax + 6) * 0x1508) + 1;
      return 1;
    }
    (&g_bss_002d33c9)[slab_coord] = (&g_bss_002d33c9)[slab_coord] + -1;
  }
  else if (*(ushort *)(&g_bss_002ddd27 + room_off) < 2) {
    if ((int)(char)(&g_bss_002ddd1e)[room_off] == (uint)g_neutral_player_number) {
      uStack_30 = 0x4a73a;
      room_how_room_exist_slabs_0d0118();
    }
    else {
      word_ptr = &uStack_30;
      uStack_30 = 0;
      event_fn_0274ad();
      room_how_room_exist_slabs_0d0488();
    }
    *(undefined4 *)((int)word_ptr + -4) = 0x100;
    *(undefined4 *)((int)word_ptr + -8) = 2;
    *(undefined4 *)((int)word_ptr + -0xc) = 0;
    *(undefined4 *)((int)word_ptr + -0x10) = 3;
    *(undefined4 *)((int)word_ptr + -0x14) = 0x4a78c;
    sound_fn_06e538();
    short_val = *(short *)(&g_bss_002ddd52 + room_off);
    while (room_off = (int)short_val, room_off != 0) {
      local_2b = (char)(room_off % 0x55) * '\x03' + '\x01';
      local_2c = 0x80;
      local_2a = 0x80;
      local_27 = 1;
      local_29 = (char)(room_off / 0x55) * '\x03' + '\x01';
      local_28 = 0x80;
      *(undefined4 *)((int)word_ptr + -0x14) = 0x4a7da;
      effect_allocate_light_effect_024998();
      short_val = *(short *)(&g_bss_002d33c6 + room_off * 6);
    }
  }
  else {
    *(short *)(&g_bss_002ddd27 + room_off) = *(short *)(&g_bss_002ddd27 + room_off) + -1;
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_control_04a8e1 (Original VA: 0x4a8e1, Ghidra: FUN_0004a8e1)
 * Prototype: undefined4 instance_update_creature_control_04a8e1(void);
 * Address  : 0x4a8e1 (Size: 47 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_fn_081cec
 ******************************************************************************/
undefined4 instance_update_creature_control_04a8e1(void)

{
  int cctrl_ptr;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0x41) != '\0') {
    *(char *)(cctrl_ptr + 0x41) = *(char *)(cctrl_ptr + 0x41) + -1;
  }
  creature_fn_081cec();
  *(undefined4 *)(cctrl_ptr + 0x39) = 0;
  return 1;
}

/******************************************************************************
 * Function : instance_fn_04a910 (Original VA: 0x4a910, Ghidra: FUN_0004a910)
 * Prototype: undefined4 instance_fn_04a910(void);
 * Address  : 0x4a910 (Size: 6 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04a910
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_fn_04a910(void)

{
  return 1;
}

/******************************************************************************
 * Function : instance_thing_room_04a916 (Original VA: 0x4a916, Ghidra: FUN_0004a916)
 * Prototype: undefined4 instance_thing_room_04a916(void);
 * Address  : 0x4a916 (Size: 272 bytes)
 * Module   : instance.cpp [direct_file_string_xref]
 * OrigLine : instance.cpp lines 674
 * Purpose  : String 'THING NOT ON ROOM'
 * Callers  : 0 -> 
 * Callees  : 4 -> effect_allocate_light_effect_024998, room_how_room_exist_slabs_0c8654, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
undefined4 instance_thing_room_04a916(void)

{
  int arg_eax;
  int slab_coord;
  
  slab_coord = ((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]) * 6;
  if ((byte)(&g_bss_002d33c9)[slab_coord] < 3) {
    slab_coord = room_update_slab_subtile_columns_0d0f50();
    if (slab_coord == 0) {
      LbErrorLog(); /* LbErrorLog("instance.cpp", line 674, "THING NOT ON ROOM") */
    }
    else if ((int)*(char *)(slab_coord + 3) != (uint)g_neutral_player_number) {
      *(short *)(&g_bss_002e105e + *(char *)(slab_coord + 3) * 0x1508) =
           *(short *)(&g_bss_002e105e + *(char *)(slab_coord + 3) * 0x1508) + 1;
    }
    room_how_room_exist_slabs_0c8654();
    effect_allocate_light_effect_024998();
  }
  else {
    (&g_bss_002d33c9)[slab_coord] = (&g_bss_002d33c9)[slab_coord] + -2;
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  }
  sound_fn_06e538(3,0,2,0x100);
  return 1;
}

/******************************************************************************
 * Function : instance_update_creature_control_04aa26 (Original VA: 0x4aa26, Ghidra: FUN_0004aa26)
 * Prototype: undefined4 instance_update_creature_control_04aa26(void);
 * Address  : 0x4aa26 (Size: 235 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
undefined4 instance_update_creature_control_04aa26(void)

{
  int thing;
  int cctrl_ptr;
  undefined4 *word_ptr;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  word_ptr = &local_20;
  cctrl_ptr = (int)(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x284) >> 8; /* thing->ccontrol_idx */
  local_1c = cctrl_ptr * 4;
  local_18 = (&g_subtile_to_slab_lut)[cctrl_ptr] * 0x55;
  cctrl_ptr = ((&g_subtile_to_slab_lut)
           [(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x284) % 0x100] + /* thing->ccontrol_idx */
          local_18) * 6;
  local_20 = 2;
  if ((byte)(&g_bss_002d33c9)[cctrl_ptr] < 3) {
    word_ptr = &uStack_24;
    uStack_24 = 0;
    slab_attempt_place_animating_slab_0d7688();
    slab_process_slabmap_tile_0da6fc();
  }
  else {
    (&g_bss_002d33c9)[cctrl_ptr] = (&g_bss_002d33c9)[cctrl_ptr] + -2;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x100;
  *(undefined4 *)((int)word_ptr + -8) = 2;
  *(undefined4 *)((int)word_ptr + -0xc) = 0;
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  *(undefined4 *)((int)word_ptr + -0x10) = 3;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  *(undefined4 *)((int)word_ptr + -0x14) = 0x4a349;
  sound_fn_06e538();
  return 1;
}

/******************************************************************************
 * Function : instance_fn_04ab11 (Original VA: 0x4ab11, Ghidra: FUN_0004ab11)
 * Prototype: undefined4 instance_fn_04ab11(void);
 * Address  : 0x4ab11 (Size: 78 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04ab11
 * Callers  : 0 -> 
 * Callees  : 3 -> impset_process_slabmap_tile_03aef2, instance_update_creature_and_thing_049fda, instance_update_player_dungeon_04a40c
 ******************************************************************************/
undefined4 instance_fn_04ab11(void)

{
  int val;
  
  val = impset_process_slabmap_tile_03aef2();
  if (val == 0) {
    instance_update_creature_and_thing_049fda(0x17);
  }
  else {
    instance_update_player_dungeon_04a40c();
  }
  return 1;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04ab5f (Original VA: 0x4ab5f, Ghidra: FUN_0004ab5f)
 * Prototype: undefined4 instance_process_thing_entity_04ab5f(void);
 * Address  : 0x4ab5f (Size: 93 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> packet_handle_double_click_action
 ******************************************************************************/
undefined4 instance_process_thing_entity_04ab5f(void)

{
  uint thing_ptr;
  int arg_eax;
  int dungeon_off;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)];
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  if ((&g_bss_002e05ec)[dungeon_off] != '\0') {
    *(undefined2 *)(&g_bss_002e05cc + dungeon_off) = 0x3c;
    *(undefined2 *)(&g_bss_002e05dc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x28;
  }
  if (g_thing_ptrs < thing_ptr) {
    packet_handle_double_click_action();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04abbc (Original VA: 0x4abbc, Ghidra: FUN_0004abbc)
 * Prototype: undefined4 instance_process_thing_entity_04abbc(void);
 * Address  : 0x4abbc (Size: 180 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_process_thing_entity_04abbc(void)

{
  int thing_ptr;
  int arg_eax;
  int val;
  int dungeon_off;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43e)];
  if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
    val = *(short *)(&g_data_0018fe87 + (uint)*(byte *)(thing_ptr + 0x1a) * 8) + -0x3c >> 0x1f;
    dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
    *(short *)(&g_bss_002e05cc + dungeon_off) =
         *(short *)(&g_bss_002e05cc + dungeon_off) +
         (short)((int)((*(short *)(&g_data_0018fe87 + (uint)*(byte *)(thing_ptr + 0x1a) * 8) + -0x3c +
                       val * -4) - (uint)(val << 1 < 0)) >> 2);
    val = *(short *)(&g_data_0018fe89 + (uint)*(byte *)(thing_ptr + 0x1a) * 8) + -0x28 >> 0x1f;
    dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
    *(short *)(&g_bss_002e05dc + dungeon_off) =
         *(short *)(&g_bss_002e05dc + dungeon_off) +
         (short)((int)((*(short *)(&g_data_0018fe89 + (uint)*(byte *)(thing_ptr + 0x1a) * 8) + -0x28 +
                       val * -4) - (uint)(val << 1 < 0)) >> 2);
  }
  else {
    *(undefined2 *)(&g_bss_002e05cc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x3c;
    *(undefined2 *)(&g_bss_002e05dc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x28;
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_and_thing_04ac70 (Original VA: 0x4ac70, Ghidra: FUN_0004ac70)
 * Prototype: undefined4 instance_update_creature_and_thing_04ac70(void);
 * Address  : 0x4ac70 (Size: 400 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 9 -> magic_update_creature_control_04fbd8, packet_handle_double_click_action, person_external_change_state_but_064a5f, creature_fn_081eac, creature_update_player_dungeon_08485c, draw_roll_action_random_08ccec, object_process_slabmap_tile_0c57c4, object_picking_up_object_0c599c ...
 ******************************************************************************/
undefined4 instance_update_creature_and_thing_04ac70(void)

{
  byte *thing_ptr;
  char ch;
  int arg_eax;
  int val;
  uint *word_ptr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  local_18 = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)];
  thing_ptr = (byte *)(&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43e)];
  if (((*thing_ptr & 1) != 0) && (*(int *)(arg_eax + 0x440) == *(int *)(thing_ptr + 9))) {
    if (thing_ptr[0x1f] == 5) {
LAB_0004acde:
      uStack_1c = 0x4ace7;
      magic_update_creature_control_04fbd8();
      if (thing_ptr[0x1f] == 5) {
        uStack_1c = 0x4ad00;
        ch = person_external_change_state_but_064a5f();
        if (ch == '\0') {
          return 0;
        }
        if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) == 0) { /* thing->ccontrol_idx */
          uStack_1c = 2;
          uStack_20 = 0;
          uStack_24 = 0xffffffff;
          update_fn_0dd2f0();
        }
        else {
          uStack_1c = 2;
          uStack_20 = 0;
          uStack_24 = 0xffffffff;
        }
        draw_roll_action_random_08ccec();
        word_ptr = &uStack_24;
      }
      else {
        word_ptr = &local_18;
        if (thing_ptr[0x1f] == 1) {
          uStack_1c = 0x4ad9e;
          val = object_picking_up_object_0c599c();
          word_ptr = &local_18;
          if (val == 0) {
            *(undefined2 *)(arg_eax + 0x43e) = 0;
            *(undefined4 *)(arg_eax + 0x440) = 0;
            return 0;
          }
        }
      }
      if (g_thing_ptrs < local_18) {
        *(undefined4 *)((int)word_ptr + -4) = 0x4add6;
        packet_handle_double_click_action();
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x4ade1;
      creature_update_player_dungeon_08485c();
      *(undefined2 *)(arg_eax + 0x43e) = 0;
      *(undefined4 *)(arg_eax + 0x440) = 0;
      *(undefined4 *)((int)word_ptr + -4) = 0x4adfb;
      creature_fn_081eac();
      return 0;
    }
    if (thing_ptr[0x1f] == 1) {
      uStack_1c = 0x4acc2;
      val = object_process_slabmap_tile_0c57c4();
      if (val != 0) goto LAB_0004acde;
    }
  }
  *(undefined2 *)(arg_eax + 0x43e) = 0;
  *(undefined4 *)(arg_eax + 0x440) = 0;
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04ae00 (Original VA: 0x4ae00, Ghidra: FUN_0004ae00)
 * Prototype: undefined4 instance_process_thing_entity_04ae00(void);
 * Address  : 0x4ae00 (Size: 70 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> packet_handle_double_click_action
 ******************************************************************************/
undefined4 instance_process_thing_entity_04ae00(void)

{
  uint thing_ptr;
  int arg_eax;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)];
  *(undefined2 *)(arg_eax + 0x43e) =
       *(undefined2 *)(&g_bss_002e05bc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508);
  if (g_thing_ptrs < thing_ptr) {
    packet_handle_double_click_action();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_dungeon_04ae46 (Original VA: 0x4ae46, Ghidra: FUN_0004ae46)
 * Prototype: undefined4 instance_update_player_dungeon_04ae46(void);
 * Address  : 0x4ae46 (Size: 99 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_update_player_dungeon_04ae46(void)

{
  int arg_eax;
  int dungeon_off;
  
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  *(short *)(&g_bss_002e05cc + dungeon_off) =
       (short)((0x3c - *(short *)(&g_bss_002e05cc + dungeon_off)) / (*(int *)(arg_eax + 0x4b1) + 1)) +
       *(short *)(&g_bss_002e05cc + dungeon_off);
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  *(short *)(&g_bss_002e05dc + dungeon_off) =
       (short)((0x28 - *(short *)(&g_bss_002e05dc + dungeon_off)) / (*(int *)(arg_eax + 0x4b1) + 1)) +
       *(short *)(&g_bss_002e05dc + dungeon_off);
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04aea9 (Original VA: 0x4aea9, Ghidra: FUN_0004aea9)
 * Prototype: undefined4 instance_process_thing_entity_04aea9(void);
 * Address  : 0x4aea9 (Size: 97 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> packet_handle_double_click_action
 ******************************************************************************/
undefined4 instance_process_thing_entity_04aea9(void)

{
  uint thing_ptr;
  int arg_eax;
  int extraout_ECX;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)];
  *(undefined2 *)(&g_bss_002e05cc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x3c;
  *(undefined2 *)(&g_bss_002e05dc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x28;
  if (g_thing_ptrs < thing_ptr) {
    packet_handle_double_click_action();
    arg_eax = extraout_ECX;
  }
  *(undefined2 *)(arg_eax + 0x43e) = 0;
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04af0a (Original VA: 0x4af0a, Ghidra: FUN_0004af0a)
 * Prototype: undefined4 instance_process_thing_entity_04af0a(void);
 * Address  : 0x4af0a (Size: 46 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> packet_handle_double_click_action
 ******************************************************************************/
undefined4 instance_process_thing_entity_04af0a(void)

{
  int arg_eax;
  
  if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)]) {
    packet_handle_double_click_action();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_and_thing_04af38 (Original VA: 0x4af38, Ghidra: FUN_0004af38)
 * Prototype: undefined4 instance_update_creature_and_thing_04af38(void);
 * Address  : 0x4af38 (Size: 654 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 9 -> effect_allocate_light_effect_024998, instance_fn_049eff, magic_update_creature_control_04fe44, sound_fn_06e538, trap_activation_shot_076569, creature_update_creature_control_0824dc, creature_how_hero_have_tend_08608c, object_fn_0c595c ...
 ******************************************************************************/
undefined4 instance_update_creature_and_thing_04af38(void)

{
  byte cctrl_ptr;
  byte *byte_ptr;
  byte *byte_ptr_2;
  char ch;
  int arg_eax;
  int val;
  uint uval;
  int *int_ptr;
  byte flag;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 local_20;
  short local_1c [2];
  byte *local_18;
  
  flag = 0;
  local_18 = (byte *)(&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43e)];
  local_24 = arg_eax;
  if (((*local_18 & 1) != 0) && (*(int *)(arg_eax + 0x440) == *(int *)(local_18 + 9))) {
    uStack_28 = 0x4af77;
    val = magic_update_creature_control_04fe44();
    byte_ptr = local_18;
    if (val != 0) {
      cctrl_ptr = local_18[0x1f];
      if (cctrl_ptr == 5) {
        if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(local_18 + 100)] + 0xab) & 2) == 0) {
          uStack_28 = 0x4afea;
          creature_update_creature_control_0824dc();
          byte_ptr_2 = local_18;
          local_20 = *(undefined4 *)(byte_ptr + 0xd);
          local_1c[(uint)flag * -4] = *(short *)(byte_ptr + (uint)flag * -8 + 0x11);
          local_1c[0] = local_1c[0] + *(ushort *)(byte_ptr_2 + 0x58) / 2;
          if (g_bss_002ee9b9 == 3) {
            uval = (uint)local_18[0x1a];
            if (((&g_bss_002e91e7)[uval * 0xe6] == '\0') || ((uval != 0 && (uval < 0xe)))) {
              ch = '\0';
            }
            else {
              ch = '\x01';
            }
          }
          else {
            ch = (&g_bss_002e91e7)[(uint)local_18[0x1a] * 0xe6];
          }
          if (ch != '\0') {
            uStack_28 = 0x4b068;
            effect_allocate_light_effect_024998();
          }
          uStack_28 = 0x100;
          uStack_2c = 3;
          uStack_30 = 0;
          uStack_34 = 3;
          sound_fn_06e538();
          int_ptr = &uStack_34;
          if (*(int *)(local_24 + 0x38) != 0) {
            *(short *)(local_18 + 0x2c) =
                 *(short *)(local_18 + 0x2c) +
                 (short)((uint)((&g_slab_attr_table)[*(int *)(*(int *)(local_24 + 0x38) + 7)] << 6) >>
                        0x10);
            *(short *)(local_18 + 0x2e) =
                 *(short *)(local_18 + 0x2e) +
                 (short)((uint)-(((int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(local_24 + 0x38) + 7)]
                                 << 6) >> 8) >> 8);
            int_ptr = &uStack_34;
          }
        }
        else {
          uStack_28 = 0;
          uStack_2c = 0;
          uStack_30 = 0x4afd4;
          creature_how_hero_have_tend_08608c();
          int_ptr = &uStack_2c;
        }
      }
      else if (cctrl_ptr == 2) {
        if (local_18[0x1a] == 0xf) {
          *(undefined2 *)(local_18 + 0x52) = *(undefined2 *)(*(int *)(local_24 + 0x38) + 7);
          *(short *)(local_18 + 0x5e) = *(short *)(local_18 + 0x5e) - g_bss_002ee7b0;
          int_ptr = &local_24;
        }
        else {
          int_ptr = &local_24;
          if (local_18[0x1a] == 0x14) {
            *(undefined2 *)(local_18 + 0x52) = *(undefined2 *)(*(int *)(local_24 + 0x38) + 7);
            int_ptr = &local_24;
          }
        }
      }
      else if (cctrl_ptr == 8) {
        int_ptr = &local_24;
        if (local_18[0x1a] == 1) {
          uStack_28 = 0x4b159;
          trap_activation_shot_076569();
          int_ptr = &local_24;
        }
      }
      else {
        int_ptr = &local_24;
        if (cctrl_ptr == 1) {
          uStack_28 = 0x4b16f;
          val = object_fn_0c595c();
          int_ptr = &local_24;
          if (val != 0) {
            uStack_28 = 0x4b18a;
            val = effect_allocate_light_effect_024998();
            int_ptr = &local_24;
            if (val != 0) {
              uStack_28 = 0x100;
              uStack_2c = 3;
              uStack_30 = 0;
              int_ptr = &uStack_34;
              uStack_34 = 3;
              sound_fn_06e538();
            }
            *(undefined4 *)((int)int_ptr + -4) = 0x4b1b2;
            object_fn_0c5980();
          }
        }
      }
      *(undefined4 *)((int)int_ptr + -4) = 0x4b1c1;
      instance_fn_049eff();
      return 0;
    }
  }
  *(undefined2 *)(local_24 + 0x43e) = 0;
  *(undefined4 *)(local_24 + 0x440) = 0;
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04b1c6 (Original VA: 0x4b1c6, Ghidra: FUN_0004b1c6)
 * Prototype: undefined4 instance_process_thing_entity_04b1c6(void);
 * Address  : 0x4b1c6 (Size: 46 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> packet_handle_double_click_action
 ******************************************************************************/
undefined4 instance_process_thing_entity_04b1c6(void)

{
  int arg_eax;
  
  if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)]) {
    packet_handle_double_click_action();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04b1f4 (Original VA: 0x4b1f4, Ghidra: FUN_0004b1f4)
 * Prototype: undefined4 instance_process_thing_entity_04b1f4(void);
 * Address  : 0x4b1f4 (Size: 46 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> packet_handle_double_click_action
 ******************************************************************************/
undefined4 instance_process_thing_entity_04b1f4(void)

{
  int arg_eax;
  
  if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43a)]) {
    packet_handle_double_click_action();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04b222 (Original VA: 0x4b222, Ghidra: FUN_0004b222)
 * Prototype: undefined4 instance_update_player_view_state_04b222(void);
 * Address  : 0x4b222 (Size: 133 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_fn_05afda, newgui_fn_05c848, sound_non_emitter_has_been_06e9ab, workshop_fn_0780a3
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 instance_update_player_view_state_04b222(void)

{
  byte *arg_eax;
  undefined4 uval;
  
  *arg_eax = *arg_eax | 0x80;
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    *(undefined4 *)(&g_bss_0019d58d + g_my_player_word._3_1_ * 0x4ef) = 1;
    newgui_fn_05afda();
    newgui_fn_05c848();
    newgui_fn_05c848();
    g_bss_002ed43a = 0;
    g_bss_0019d0ba = g_bss_0019d0ba | 4;
  }
  *arg_eax = *arg_eax | 0x10;
  uval = workshop_fn_0780a3();
  *(undefined4 *)(arg_eax + 0x4b6) = uval;
  if (&g_players + g_my_player_word._3_1_ * 0x4ef == arg_eax) {
    sound_non_emitter_has_been_06e9ab();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04b2a7 (Original VA: 0x4b2a7, Ghidra: FUN_0004b2a7)
 * Prototype: undefined4 instance_process_thing_entity_04b2a7(void);
 * Address  : 0x4b2a7 (Size: 465 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 4 -> instance_fn_049eff, panmap_update_player_view_state_0627b5, workshop_fn_077f16, workshop_fn_0780c2
 ******************************************************************************/
undefined4 instance_process_thing_entity_04b2a7(void)

{
  int *int_ptr;
  short *val;
  ushort *word_ptr;
  int arg_eax;
  uint thing_ptr;
  int thing_ptr_2;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *byte_ptr;
  int extraout_ECX_01;
  int val_2;
  int val_3;
  
  if (((*(ushort *)(arg_eax + 0x43e) == 0) ||
      (*(char *)((&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43e)] + 0x1f) == '\x04')) ||
     (*(short *)((&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43e)] + 0x5e) < 0)) {
    workshop_fn_0780c2();
    byte_ptr = extraout_ECX;
    if (extraout_ECX == &g_players + g_my_player_word._3_1_ * 0x4ef) {
      panmap_update_player_view_state_0627b5();
      byte_ptr = extraout_ECX_00;
    }
    byte_ptr[0x43e] = 0;
    byte_ptr[0x43f] = 0;
    *byte_ptr = *byte_ptr & 0x6f;
    instance_fn_049eff();
  }
  else if (*(char *)(arg_eax + 0x37) != '\x05') {
    workshop_fn_077f16();
    thing_ptr = ((uint)*(ushort *)((&g_thing_ptrs)[*(ushort *)(extraout_ECX_01 + 0x43e)] + 0x52) -
            *(int *)(*(int *)(extraout_ECX_01 + 0x38) + 7)) + 0x800 & 0x7ff;
    if (0x400 < thing_ptr) {
      thing_ptr = thing_ptr - 0x800;
    }
    if ((int)thing_ptr < -0xaa) {
      thing_ptr = 0xffffff56;
    }
    else if (0xaa < (int)thing_ptr) {
      thing_ptr = 0xaa;
    }
    int_ptr = (int *)(*(int *)(extraout_ECX_01 + 0x38) + 7);
    *int_ptr = *int_ptr + thing_ptr;
    *(uint *)(*(int *)(extraout_ECX_01 + 0x38) + 7) =
         *(uint *)(*(int *)(extraout_ECX_01 + 0x38) + 7) & 0x7ff;
    thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(extraout_ECX_01 + 0x43e)];
    val_2 = (int)*(short *)(thing_ptr_2 + 0x11) +
            (uint)*(ushort *)(&g_bss_002e9162 + (uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6);
    word_ptr = *(ushort **)(extraout_ECX_01 + 0x38);
    val_3 = ((uint)*(ushort *)(thing_ptr_2 + 0xd) + /* thing->mappos.val_x */
            (val_2 * (&g_slab_attr_table)[*(int *)((int)word_ptr + 7)] >> 0x10)) - (uint)*word_ptr;
    thing_ptr_2 = ((uint)*(ushort *)(thing_ptr_2 + 0xf) - /* thing->mappos.val_y */
            (val_2 * (int)(&PTR_LAB_00192fe0)[*(int *)((int)word_ptr + 7)] >> 0x10)) - (uint)word_ptr[1]
    ;
    if (val_3 < -0x80) {
      val_3 = -0x80;
    }
    else if (0x80 < val_3) {
      val_3 = 0x80;
    }
    if (thing_ptr_2 < -0x80) {
      thing_ptr_2 = -0x80;
    }
    else if (0x80 < thing_ptr_2) {
      thing_ptr_2 = 0x80;
    }
    **(short **)(extraout_ECX_01 + 0x38) = **(short **)(extraout_ECX_01 + 0x38) + (short)val_3;
    val = (short *)(*(int *)(extraout_ECX_01 + 0x38) + 2);
    *val = *val + (short)thing_ptr_2;
    thing_ptr_2 = *(int *)(extraout_ECX_01 + 0x38);
    if (*(int *)(thing_ptr_2 + 7) < 0) {
      *(int *)(thing_ptr_2 + 7) = *(int *)(thing_ptr_2 + 7) + 0x800;
    }
    else if (0x7ff < *(int *)(thing_ptr_2 + 7)) {
      *(int *)(thing_ptr_2 + 7) = *(int *)(thing_ptr_2 + 7) + -0x800;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_and_thing_04b478 (Original VA: 0x4b478, Ghidra: FUN_0004b478)
 * Prototype: undefined4 instance_update_creature_and_thing_04b478(void);
 * Address  : 0x4b478 (Size: 294 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 7 -> instance_update_creature_control_049e95, instance_fn_049eff, instance_data_swpe_dat_04c0ac, newgui_fn_05cf2d, panmap_update_player_view_state_0627b5, workshop_fn_0780c2, creature_allocate_light_new_hero_080a94
 ******************************************************************************/
undefined4 instance_update_creature_and_thing_04b478(void)

{
  undefined1 uval;
  int thing_ptr;
  int arg_eax;
  int loop_i;
  int val;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *word_ptr;
  undefined1 *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *byte_ptr;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x43e)];
  if ((*(short *)(arg_eax + 0x43e) == 0) || (loop_i = creature_allocate_light_new_hero_080a94(), loop_i == 0)) {
    workshop_fn_0780c2();
    byte_ptr = extraout_ECX_03;
    if (extraout_ECX_03 == &g_players + g_my_player_word._3_1_ * 0x4ef) {
      panmap_update_player_view_state_0627b5();
      byte_ptr = extraout_ECX_04;
    }
    *byte_ptr = *byte_ptr & 0x6f;
    return 0;
  }
  instance_fn_049eff();
  word_ptr = extraout_ECX;
  if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
    instance_data_swpe_dat_04c0ac();
    word_ptr = extraout_ECX_00;
    if ((extraout_ECX_00 == &g_players + g_my_player_word._3_1_ * 0x4ef) &&
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xab) & 2) != 0)) { /* thing->ccontrol_idx */
      panmap_update_player_view_state_0627b5();
      word_ptr = extraout_ECX_01;
    }
    for (loop_i = 0; loop_i < 10; loop_i = loop_i + 1) {
      uval = (&g_bss_002e918d)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6 + loop_i];
      val = instance_update_creature_control_049e95();
      word_ptr = extraout_ECX_02;
      if (val != 0) {
        *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1e8) = uval; /* thing->ccontrol_idx */
        break;
      }
    }
  }
  if (word_ptr != &g_players + g_my_player_word._3_1_ * 0x4ef) {
    return 0;
  }
  newgui_fn_05cf2d();
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b59e (Original VA: 0x4b59e, Ghidra: FUN_0004b59e)
 * Prototype: undefined4 instance_fn_04b59e(void);
 * Address  : 0x4b59e (Size: 44 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b59e
 * Callers  : 0 -> 
 * Callees  : 2 -> instance_fn_049eff, creature_control_creature_as_passenger_0809d0
 ******************************************************************************/
undefined4 instance_fn_04b59e(void)

{
  creature_control_creature_as_passenger_0809d0();
  instance_fn_049eff();
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04b5ca (Original VA: 0x4b5ca, Ghidra: FUN_0004b5ca)
 * Prototype: undefined4 instance_update_player_view_state_04b5ca(void);
 * Address  : 0x4b5ca (Size: 228 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 9 -> instance_fn_049eff, newgui_fn_05afda, newgui_fn_05c848, newgui_fn_05cf03, panmap_update_player_view_state_0627b5, sound_non_emitter_has_been_06e9ab, creature_fn_080e04, creature_update_player_view_state_085aa4 ...
 ******************************************************************************/
undefined4 instance_update_player_view_state_04b5ca(void)

{
  byte flag;
  byte *arg_eax;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_ECX_01;
  
  if (*(short *)(arg_eax + 0x43e) == 0) {
    instance_fn_049eff();
    return 0;
  }
  *arg_eax = *arg_eax | 0x80;
  creature_update_player_view_state_085aa4();
  if (extraout_ECX == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    panmap_update_player_view_state_0627b5();
    *(undefined4 *)(extraout_ECX_00 + 0x4c5) = 0xb;
    newgui_fn_05afda();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05cf03();
    flag = g_game_operation_flags & 0x3f;
    g_game_operation_flags = g_game_operation_flags & 0xbf;
    g_game_operation_flags = g_game_operation_flags | (flag >> 5) << 6;
  }
  creature_fn_080e04();
  extraout_ECX_01[0x43e] = 0;
  extraout_ECX_01[0x43f] = 0;
  *extraout_ECX_01 = *extraout_ECX_01 | 0x10;
  light_already_list_0ad54c();
  sound_non_emitter_has_been_06e9ab();
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04b6ae (Original VA: 0x4b6ae, Ghidra: FUN_0004b6ae)
 * Prototype: undefined4 instance_update_player_view_state_04b6ae(void);
 * Address  : 0x4b6ae (Size: 228 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 9 -> instance_fn_049eff, newgui_fn_05afda, newgui_fn_05c848, newgui_fn_05cf03, panmap_update_player_view_state_0627b5, sound_non_emitter_has_been_06e9ab, creature_update_creature_control_080fbc, creature_update_player_view_state_085aa4 ...
 ******************************************************************************/
undefined4 instance_update_player_view_state_04b6ae(void)

{
  byte flag;
  byte *arg_eax;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_ECX_01;
  
  if (*(short *)(arg_eax + 0x43e) == 0) {
    instance_fn_049eff();
    return 0;
  }
  *arg_eax = *arg_eax | 0x80;
  creature_update_player_view_state_085aa4();
  if (extraout_ECX == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    panmap_update_player_view_state_0627b5();
    *(undefined4 *)(extraout_ECX_00 + 0x4c5) = 0xb;
    newgui_fn_05afda();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05cf03();
    flag = g_game_operation_flags & 0x3f;
    g_game_operation_flags = g_game_operation_flags & 0xbf;
    g_game_operation_flags = g_game_operation_flags | (flag >> 5) << 6;
  }
  creature_update_creature_control_080fbc();
  extraout_ECX_01[0x43e] = 0;
  extraout_ECX_01[0x43f] = 0;
  *extraout_ECX_01 = *extraout_ECX_01 | 0x10;
  light_already_list_0ad54c();
  sound_non_emitter_has_been_06e9ab();
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b792 (Original VA: 0x4b792, Ghidra: FUN_0004b792)
 * Prototype: undefined4 instance_fn_04b792(void);
 * Address  : 0x4b792 (Size: 66 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b792
 * Callers  : 0 -> 
 * Callees  : 3 -> workshop_fn_077fdc, workshop_fn_0780a3, workshop_fn_0780c2
 ******************************************************************************/
undefined4 instance_fn_04b792(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  
  if (*(char *)(arg_eax + 0x37) != '\x05') {
    workshop_fn_077fdc();
    val = workshop_fn_0780a3();
    if (val < *(int *)(extraout_ECX + 0x4b6)) {
      workshop_fn_0780c2();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04b7d4 (Original VA: 0x4b7d4, Ghidra: FUN_0004b7d4)
 * Prototype: undefined4 instance_update_player_view_state_04b7d4(void);
 * Address  : 0x4b7d4 (Size: 57 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 2 -> panmap_update_player_view_state_0627b5, workshop_fn_0780c2
 ******************************************************************************/
undefined4 instance_update_player_view_state_04b7d4(void)

{
  byte *arg_eax;
  
  workshop_fn_0780c2();
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    panmap_update_player_view_state_0627b5();
  }
  *arg_eax = *arg_eax & 0x6f;
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b80d (Original VA: 0x4b80d, Ghidra: FUN_0004b80d)
 * Prototype: undefined4 instance_fn_04b80d(void);
 * Address  : 0x4b80d (Size: 221 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b80d
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_fn_04b80d(void)

{
  byte *arg_eax;
  undefined4 uval;
  int val;
  int val_2;
  
  arg_eax[0x2f] = 0;
  arg_eax[0x30] = 0;
  arg_eax[0x31] = 0;
  arg_eax[0x32] = 0;
  arg_eax[0x33] = 0;
  arg_eax[0x34] = 0;
  *arg_eax = *arg_eax | 0x90;
  val = (uint)*(ushort *)(arg_eax + 0xe4) - (uint)**(ushort **)(arg_eax + 0x38);
  val_2 = val >> 0x1f;
  *(int *)(arg_eax + 0x4db) = (int)((val + val_2 * -8) - (uint)(val_2 << 2 < 0)) >> 3;
  val = (uint)*(ushort *)(arg_eax + 0xe6) - (uint)(*(ushort **)(arg_eax + 0x38))[1];
  val_2 = val >> 0x1f;
  *(int *)(arg_eax + 0x4df) = (int)((val + val_2 * -8) - (uint)(val_2 << 2 < 0)) >> 3;
  if (*(int *)(arg_eax + 0x4db) < 0) {
    if (*(int *)(arg_eax + 0x4db) < -0xff) {
      uval = *(undefined4 *)(arg_eax + 0x4db);
    }
    else {
      uval = 0xffffff00;
    }
  }
  else if (*(int *)(arg_eax + 0x4db) < 0x100) {
    uval = 0x100;
  }
  else {
    uval = *(undefined4 *)(arg_eax + 0x4db);
  }
  *(undefined4 *)(arg_eax + 0x4db) = uval;
  if (*(int *)(arg_eax + 0x4df) < 0) {
    if (*(int *)(arg_eax + 0x4df) < -0xff) {
      uval = *(undefined4 *)(arg_eax + 0x4df);
    }
    else {
      uval = 0xffffff00;
    }
  }
  else if (*(int *)(arg_eax + 0x4df) < 0x100) {
    uval = 0x100;
  }
  else {
    uval = *(undefined4 *)(arg_eax + 0x4df);
  }
  *(undefined4 *)(arg_eax + 0x4df) = uval;
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b8ea (Original VA: 0x4b8ea, Ghidra: FUN_0004b8ea)
 * Prototype: undefined4 instance_fn_04b8ea(void);
 * Address  : 0x4b8ea (Size: 162 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b8ea
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 instance_fn_04b8ea(void)

{
  ushort uval;
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  uint uval_2;
  undefined2 *word_ptr;
  uint uval_3;
  undefined8 uval_4;
  
  uval = **(ushort **)(arg_eax + 0x38);
  val = bflib_system_io_fn_0e69fc();
  val_2 = bflib_system_io_fn_0e69fc();
  if (val < val_2) {
    uval_3 = (uint)*(ushort *)(arg_eax + 0xe4);
  }
  else {
    uval_3 = (uint)uval + *(int *)(arg_eax + 0x4db);
  }
  val = bflib_system_io_fn_0e69fc();
  uval_4 = bflib_system_io_fn_0e69fc();
  word_ptr = (undefined2 *)((ulonglong)uval_4 >> 0x20);
  if (val < (int)uval_4) {
    uval_2 = (uint)*(ushort *)(arg_eax + 0xe6);
  }
  else {
    uval_2 = extraout_ECX + *(int *)(arg_eax + 0x4df);
  }
  if ((uval_3 == *(ushort *)(arg_eax + 0xe4)) && (uval_2 == *(ushort *)(arg_eax + 0xe6))) {
    *(undefined4 *)(arg_eax + 0x4b1) = 0;
  }
  *word_ptr = (short)uval_3;
  word_ptr[1] = (short)uval_2;
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b98c (Original VA: 0x4b98c, Ghidra: FUN_0004b98c)
 * Prototype: undefined4 instance_fn_04b98c(void);
 * Address  : 0x4b98c (Size: 6 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b98c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_fn_04b98c(void)

{
  byte *arg_eax;
  
  *arg_eax = *arg_eax & 0x6f;
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b992 (Original VA: 0x4b992, Ghidra: FUN_0004b992)
 * Prototype: undefined4 instance_fn_04b992(void);
 * Address  : 0x4b992 (Size: 58 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b992
 * Callers  : 0 -> 
 * Callees  : 3 -> inits_update_player_view_state_04845c, workshop_fn_0780a3, creature_select_thing_information_081e7c
 ******************************************************************************/
undefined4 instance_fn_04b992(void)

{
  undefined4 uval;
  int extraout_ECX;
  
  uval = workshop_fn_0780a3();
  *(undefined4 *)(extraout_ECX + 0x4b6) = uval;
  creature_select_thing_information_081e7c();
  inits_update_player_view_state_04845c();
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04b9cc (Original VA: 0x4b9cc, Ghidra: FUN_0004b9cc)
 * Prototype: undefined4 instance_fn_04b9cc(void);
 * Address  : 0x4b9cc (Size: 34 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04b9cc
 * Callers  : 0 -> 
 * Callees  : 1 -> inits_update_player_view_state_04845c
 ******************************************************************************/
undefined4 instance_fn_04b9cc(void)

{
  int extraout_ECX;
  
  inits_update_player_view_state_04845c();
  *(undefined2 *)(extraout_ECX + 0x2f) = 0;
  *(undefined4 *)(extraout_ECX + 0x31) = 0;
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_and_thing_04b9ee (Original VA: 0x4b9ee, Ghidra: FUN_0004b9ee)
 * Prototype: undefined4 instance_update_creature_and_thing_04b9ee(void);
 * Address  : 0x4b9ee (Size: 191 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> creature_allocate_light_new_hero_080c84, light_attempt_turn_off_unallocated_0ad66c, LbScreenWaitVbi
 ******************************************************************************/
undefined4 instance_update_creature_and_thing_04b9ee(void)

{
  int thing_ptr;
  int extraout_ECX;
  byte *extraout_ECX_00;
  
  LbScreenWaitVbi();
  light_attempt_turn_off_unallocated_0ad66c();
  thing_ptr = creature_allocate_light_new_hero_080c84(*(undefined2 *)
                        ((&g_thing_ptrs)
                         [(ushort)(&g_dungeons)[(uint)*(byte *)(extraout_ECX + 0x2b) * 0xa84]] +
                        0xd),CONCAT11((char)((ushort)*(undefined2 *)
                                                      ((&g_thing_ptrs)
                                                       [(ushort)(&g_dungeons)
                                                                [(uint)*(byte *)(extraout_ECX + 0x2b
                                                                                ) * 0xa84]] + 0x11)
                                            >> 8) + '\x01',
                                      (char)*(undefined2 *)
                                             ((&g_thing_ptrs)
                                              [(ushort)(&g_dungeons)
                                                       [(uint)*(byte *)(extraout_ECX + 0x2b) * 0xa84
                                                       ]] + 0x11)));
  if (thing_ptr != 0) {
    *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 1) = /* thing->ccontrol_idx */
         *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 1) | 2; /* thing->ccontrol_idx */
    *extraout_ECX_00 = *extraout_ECX_00 | 0x90;
    g_bss_0019d0b9 = g_bss_0019d0b9 | 8;
  }
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04baad (Original VA: 0x4baad, Ghidra: FUN_0004baad)
 * Prototype: undefined4 instance_process_thing_entity_04baad(void);
 * Address  : 0x4baad (Size: 86 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 2 -> move_fn_0b3b10, bflib_system_io_fn_0e8d80
 ******************************************************************************/
undefined4 instance_process_thing_entity_04baad(void)

{
  undefined4 thing_ptr;
  int arg_eax;
  
  thing_ptr = *(undefined4 *)((&g_thing_ptrs)[*(ushort *)(arg_eax + 0x2f)] + 0xd);
  move_fn_0b3b10(CONCAT22((short)((uint)thing_ptr >> 0x10) + -0x70,(short)thing_ptr),
               *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(arg_eax + 0x2f)] + 0x11));
  if (*(int *)(arg_eax + 0x4b1) < 9) {
    bflib_system_io_fn_0e8d80();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04bb03 (Original VA: 0x4bb03, Ghidra: FUN_0004bb03)
 * Prototype: undefined4 instance_fn_04bb03(void);
 * Address  : 0x4bb03 (Size: 22 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04bb03
 * Callers  : 0 -> 
 * Callees  : 2 -> instance_fn_049eff, bflib_system_io_fn_0e8f24
 ******************************************************************************/
undefined4 instance_fn_04bb03(void)

{
  instance_fn_049eff();
  bflib_system_io_fn_0e8f24();
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04bb19 (Original VA: 0x4bb19, Ghidra: FUN_0004bb19)
 * Prototype: undefined4 instance_process_thing_entity_04bb19(void);
 * Address  : 0x4bb19 (Size: 203 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 2 -> input_maintain_gui_button_state_04823a, creature_update_creature_control_080fbc
 ******************************************************************************/
undefined4 instance_process_thing_entity_04bb19(void)

{
  int thing_ptr;
  int arg_eax;
  
  creature_update_creature_control_080fbc();
  input_maintain_gui_button_state_04823a();
  **(undefined2 **)(arg_eax + 0x38) =
       *(undefined2 *)
        ((&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]] + 0xd);
  if (*(char *)(arg_eax + 0x37) == '\x05') {
    *(undefined2 *)(*(int *)(arg_eax + 0x38) + 2) =
         *(undefined2 *)
          ((&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]] + 0xf);
    *(undefined4 *)(*(int *)(arg_eax + 0x38) + 0x17) = 0x10000;
  }
  else {
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]];
    *(ushort *)(*(int *)(arg_eax + 0x38) + 2) =
         (*(short *)(thing_ptr + 0xf) - *(short *)(thing_ptr + 0x11)) - *(ushort *)(thing_ptr + 0x58) / 2; /* thing->mappos.val_y */
    *(undefined4 *)(*(int *)(arg_eax + 0x38) + 0x17) = 24000;
  }
  *(undefined4 *)(*(int *)(arg_eax + 0x38) + 7) = 0;
  return 0;
}

/******************************************************************************
 * Function : instance_process_thing_entity_04bbe4 (Original VA: 0x4bbe4, Ghidra: FUN_0004bbe4)
 * Prototype: undefined4 instance_process_thing_entity_04bbe4(void);
 * Address  : 0x4bbe4 (Size: 337 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0e8d80
 ******************************************************************************/
undefined4 instance_process_thing_entity_04bbe4(void)

{
  int *int_ptr;
  int thing_ptr;
  int arg_eax;
  
  if (*(char *)(arg_eax + 0x37) != '\x05') {
    int_ptr = (int *)(*(int *)(arg_eax + 0x38) + 0x17);
    *int_ptr = *int_ptr + -0x3dc;
    int_ptr = (int *)(*(int *)(arg_eax + 0x38) + 7);
    *int_ptr = *int_ptr + 0x10;
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]];
    *(short *)(arg_eax + 0x3c) =
         *(short *)(thing_ptr + 0xd) + /* thing->mappos.val_x */
         (short)(((int)*(short *)(thing_ptr + 0x11) + *(ushort *)(thing_ptr + 0x58) / 2) *
                 (&g_slab_attr_table)[*(int *)(*(int *)(arg_eax + 0x38) + 7)] >> 0x10);
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]];
    *(short *)(arg_eax + 0x3e) =
         *(short *)(thing_ptr + 0xf) - /* thing->mappos.val_y */
         (short)(((int)*(short *)(thing_ptr + 0x11) + *(ushort *)(thing_ptr + 0x58) / 2) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(arg_eax + 0x38) + 7)] >> 0x10);
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]];
    *(short *)(arg_eax + 0xba) =
         (short)((&g_slab_attr_table)[*(int *)(*(int *)(arg_eax + 0x38) + 7)] *
                 ((int)*(short *)(thing_ptr + 0x11) + *(ushort *)(thing_ptr + 0x58) / 2) >> 0x10) +
         *(short *)(thing_ptr + 0xd); /* thing->mappos.val_x */
    thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]];
    *(short *)(arg_eax + 0xbc) =
         *(short *)(thing_ptr + 0xf) - /* thing->mappos.val_y */
         (short)(((int)*(short *)(thing_ptr + 0x11) + *(ushort *)(thing_ptr + 0x58) / 2) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(arg_eax + 0x38) + 7)] >> 0x10);
  }
  if (7 < *(int *)(arg_eax + 0x4b1)) {
    bflib_system_io_fn_0e8d80();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04bd35 (Original VA: 0x4bd35, Ghidra: FUN_0004bd35)
 * Prototype: undefined4 instance_update_player_view_state_04bd35(void);
 * Address  : 0x4bd35 (Size: 96 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 3 -> panmap_update_player_view_state_0627b5, light_already_list_0ad54c, bflib_system_io_fn_0e8f24
 ******************************************************************************/
undefined4 instance_update_player_view_state_04bd35(void)

{
  byte *arg_eax;
  int val;
  
  bflib_system_io_fn_0e8f24();
  if (arg_eax[0x37] != 5) {
    *(undefined4 *)(*(int *)(arg_eax + 0x38) + 0x17) = 0x2000;
    *(undefined4 *)(*(int *)(arg_eax + 0x38) + 7) = 0x100;
  }
  light_already_list_0ad54c();
  val = (int)g_my_player_word._3_1_;
  *arg_eax = *arg_eax & 0x6f;
  g_bss_0019d0b9 = g_bss_0019d0b9 & 0xf7;
  if (arg_eax == &g_players + val * 0x4ef) {
    panmap_update_player_view_state_0627b5();
  }
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04bd95 (Original VA: 0x4bd95, Ghidra: FUN_0004bd95)
 * Prototype: undefined4 instance_fn_04bd95(void);
 * Address  : 0x4bd95 (Size: 6 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04bd95
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_fn_04bd95(void)

{
  byte *arg_eax;
  
  *arg_eax = *arg_eax | 0x80;
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04bd9b (Original VA: 0x4bd9b, Ghidra: FUN_0004bd9b)
 * Prototype: undefined4 instance_update_player_view_state_04bd9b(void);
 * Address  : 0x4bd9b (Size: 72 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 2 -> panmap_update_player_view_state_0627b5, light_attempt_turn_off_unallocated_0ad66c
 ******************************************************************************/
undefined4 instance_update_player_view_state_04bd9b(void)

{
  byte *arg_eax;
  
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    panmap_update_player_view_state_0627b5();
  }
  *arg_eax = *arg_eax & 0xef;
  light_attempt_turn_off_unallocated_0ad66c();
  *arg_eax = *arg_eax & 0x7f;
  return 0;
}

/******************************************************************************
 * Function : instance_fn_04bdf7 (Original VA: 0x4bdf7, Ghidra: FUN_0004bdf7)
 * Prototype: undefined4 instance_fn_04bdf7(void);
 * Address  : 0x4bdf7 (Size: 3 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Module instance.cpp procedure @ 0x04bdf7
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 instance_fn_04bdf7(void)

{
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04bdfa (Original VA: 0x4bdfa, Ghidra: FUN_0004bdfa)
 * Prototype: undefined4 instance_update_player_view_state_04bdfa(void);
 * Address  : 0x4bdfa (Size: 105 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_05b645, command_update_player_view_state_0784ae
 ******************************************************************************/
undefined4 instance_update_player_view_state_04bdfa(void)

{
  byte flag;
  byte *arg_eax;
  
  arg_eax[0x4bd] = 0;
  arg_eax[0x4be] = 0;
  arg_eax[0x4bf] = 0;
  arg_eax[0x4c0] = 0;
  *arg_eax = *arg_eax | 0x80;
  arg_eax[0x4b5] = *(byte *)(*(int *)(arg_eax + 0x38) + 6);
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    arg_eax[1] = arg_eax[1] & 0xfd;
    arg_eax[1] = arg_eax[1] | (g_bss_002ee920 & 1) * '\x02';
    g_bss_002ee920 = 0;
    flag = newgui_fn_05b645();
    arg_eax[1] = arg_eax[1] & 0xfe;
    arg_eax[1] = arg_eax[1] | flag & 1;
  }
  command_update_player_view_state_0784ae();
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04be63 (Original VA: 0x4be63, Ghidra: FUN_0004be63)
 * Prototype: undefined4 instance_update_player_view_state_04be63(void);
 * Address  : 0x4be63 (Size: 58 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> input_maintain_gui_button_state_04823a
 ******************************************************************************/
undefined4 instance_update_player_view_state_04be63(void)

{
  byte *arg_eax;
  
  input_maintain_gui_button_state_04823a();
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    g_bss_002ee920 = ((&g_bss_0019d0c9)[g_my_player_word._3_1_ * 0x4ef] & 3) >> 1;
  }
  *arg_eax = *arg_eax & 0x7f;
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04be9d (Original VA: 0x4be9d, Ghidra: FUN_0004be9d)
 * Prototype: undefined4 instance_update_player_view_state_04be9d(void);
 * Address  : 0x4be9d (Size: 90 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> input_maintain_gui_button_state_04823a
 ******************************************************************************/
undefined4 instance_update_player_view_state_04be9d(void)

{
  byte *arg_eax;
  
  *arg_eax = *arg_eax | 0x80;
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    arg_eax[1] = arg_eax[1] & 0xfd;
    arg_eax[1] = arg_eax[1] | (g_bss_002ee920 & 1) * '\x02';
    g_bss_002ee920 = 0;
    g_game_operation_flags = g_game_operation_flags & 0xbf;
  }
  arg_eax[0x4bd] = 0x20;
  arg_eax[0x4be] = 0;
  arg_eax[0x4bf] = 0;
  arg_eax[0x4c0] = 0;
  input_maintain_gui_button_state_04823a();
  command_update_player_view_state_0784ae();
  return 0;
}

/******************************************************************************
 * Function : instance_update_player_view_state_04bef7 (Original VA: 0x4bef7, Ghidra: FUN_0004bef7)
 * Prototype: undefined4 instance_update_player_view_state_04bef7(void);
 * Address  : 0x4bef7 (Size: 73 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_05b645, command_update_player_view_state_0784ae
 ******************************************************************************/
undefined4 instance_update_player_view_state_04bef7(void)

{
  byte *arg_eax;
  
  command_update_player_view_state_0784ae();
  if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    g_bss_002ee920 = ((&g_bss_0019d0c9)[g_my_player_word._3_1_ * 0x4ef] & 3) >> 1;
    newgui_fn_05b645();
  }
  *arg_eax = *arg_eax & 0x7f;
  return 0;
}

/******************************************************************************
 * Function : instance_update_creature_control_04bf40 (Original VA: 0x4bf40, Ghidra: FUN_0004bf40)
 * Prototype: undefined4 instance_update_creature_control_04bf40(void);
 * Address  : 0x4bf40 (Size: 364 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 6 -> cdtest_update_player_view_state_014e9f, effect_allocate_light_effect_024998, impset_process_map_subtile_03b0a0, sound_fn_06e538, sound_fn_06f865, move_process_map_subtile_0b3788
 ******************************************************************************/
undefined4 instance_update_creature_control_04bf40(void)

{
  int val;
  undefined2 uval;
  int thing;
  uint cctrl_ptr;
  uint uval_2;
  int val_2;
  int extraout_ECX;
  uint cctrl_ptr_2;
  undefined4 uval_3;
  undefined1 uval_4;
  undefined2 in_stack_ffffffdc;
  undefined1 uval_5;
  
  uval_5 = (undefined1)((ushort)in_stack_ffffffdc >> 8);
  cctrl_ptr_2 = (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8d) % 0x100; /* thing->ccontrol_idx */
  cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8d) / 0x100; /* thing->ccontrol_idx */
  uval_2 = cctrl_ptr / 3;
  val_2 = impset_process_map_subtile_03b0a0();
  if (0 < val_2) {
    if (*(byte *)(extraout_ECX + 0x93) < 0x1a) {
      *(char *)(extraout_ECX + 0x93) = *(char *)(extraout_ECX + 0x93) + '\x01';
      val_2 = sound_fn_06f865();
      if (val_2 != 0) {
        return 0;
      }
      uval_3 = 2;
    }
    else {
      *(undefined1 *)(extraout_ECX + 0x93) = 0;
      cdtest_update_player_view_state_014e9f();
      uval_4 = 0x80;
      uval = CONCAT11(uval_5,0x80);
      val_2 = 0;
      do {
        val = ((uint)(byte)((char)cctrl_ptr_2 + *(char *)((int)&g_data_0018b67b + val_2 + 3) * '\x02') +
                (uint)(byte)((char)cctrl_ptr + (&g_data_0018b67f)[val_2] * '\x02') * 0x100) * 5;
        if (((*(uint *)((int)&g_map_subtiles + val + 1) >> 0x1c &
             1 << (*(byte *)(thing + 6) & 0x1f)) != 0) && /* thing->owner */
           ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0)) {
          uval = move_process_map_subtile_0b3788(uval_4,uval,cctrl_ptr_2,cctrl_ptr,uval_2);
          effect_allocate_light_effect_024998();
        }
        val_2 = val_2 + 2;
      } while (val_2 != 8);
      uval_3 = 3;
    }
    sound_fn_06e538(3,0,uval_3,0x100);
  }
  return 0;
}

/******************************************************************************
 * Function : instance_data_swpe_dat_04c0ac (Original VA: 0x4c0ac, Ghidra: FUN_0004c0ac)
 * Prototype: void instance_data_swpe_dat_04c0ac(void);
 * Address  : 0x4c0ac (Size: 162 bytes)
 * Module   : instance.cpp [direct_file_string_xref]
 * OrigLine : instance.cpp lines 1903
 * Purpose  : String 'data\swpe??.dat'
 * Callers  : 1 -> instance_update_creature_and_thing_04b478
 * Callees  : 5 -> instance_data_swpe_dat_04c14e, LbErrorLog, dk_sprintf, LbDataLoadAll, bflib_system_io_fn_0f05f0
 ******************************************************************************/
void instance_data_swpe_dat_04c0ac(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  char extraout_DL;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  char *str_ptr;
  
  if (((byte)(&g_data_0018b70e)[(uint)*(byte *)(arg_eax + 0x1a) * 0x10] != 0) &&
     ((int)g_bss_002ee7ab != (uint)(byte)(&g_data_0018b70e)[(uint)*(byte *)(arg_eax + 0x1a) * 0x10])) {
    instance_data_swpe_dat_04c14e();
    str_ptr = s_data_swpe___dat_0017c0b4;
    val = (extraout_EDX + -1) * 5;
    do {
      dk_sprintf(str_ptr,s_data_swpe_02d_dat_001656ba,val);
      dk_sprintf(str_ptr + 0x2c,s_data_swpe_02d_tab_001656cc,extraout_EDX_00);
      str_ptr = str_ptr + 0x58;
      val = extraout_EDX_01;
    } while (extraout_ECX < 5);
    val = LbDataLoadAll();
    if (val != 0) {
      instance_data_swpe_dat_04c14e();
      LbErrorLog(); /* LbErrorLog("instance.cpp", line 1903, "Unable to load swipe graphics") */
      return;
    }
    bflib_system_io_fn_0f05f0();
    g_bss_002ee7ab = extraout_DL;
  }
  return;
}

/******************************************************************************
 * Function : instance_data_swpe_dat_04c14e (Original VA: 0x4c14e, Ghidra: FUN_0004c14e)
 * Prototype: void instance_data_swpe_dat_04c14e(void);
 * Address  : 0x4c14e (Size: 30 bytes)
 * Module   : instance.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : String 'data\swpe??.dat'
 * Callers  : 2 -> inits_could_create_ambient_sound_0404f7, instance_data_swpe_dat_04c0ac
 * Callees  : 1 -> LbDataFree
 ******************************************************************************/
void instance_data_swpe_dat_04c14e(void)

{
  if (g_bss_002ee7ab != -1) {
    LbDataFree();
    g_bss_002ee7ab = -1;
  }
  return;
}

