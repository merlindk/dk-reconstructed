/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: prison.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 9
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : prison_update_player_view_state_065c8e (Original VA: 0x65c8e, Ghidra: FUN_00065c8e)
 * Prototype: undefined4 prison_update_player_view_state_065c8e(void);
 * Address  : 0x65c8e (Size: 176 bytes)
 * Module   : prison.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> prison_update_creature_control_065ebd
 * Callees  : 2 -> moodneed_fn_051374, prison_couldn_create_skeleton_prison_066016
 ******************************************************************************/
undefined4 prison_update_player_view_state_065c8e(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((*(short *)(arg_eax + 0x5e) < 0) &&
     ((&g_bss_002e91a2)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0')) {
    if (1 < g_bss_002ebc4c) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      if (g_action_random_seed % (uint)g_bss_002ebc4c != 0) {
        return 0;
      }
    }
    if ((int)*(char *)(arg_edx + 3) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
    }
    prison_couldn_create_skeleton_prison_066016();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : prison_update_creature_control_065d3e (Original VA: 0x65d3e, Ghidra: FUN_00065d3e)
 * Prototype: undefined4 prison_update_creature_control_065d3e(void);
 * Address  : 0x65d3e (Size: 383 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> prison_update_creature_control_065ebd
 * Callees  : 10 -> instance_negative_instance_049bfc, mapwho_process_map_subtile_050de3, person_update_creature_control_064ae7, sound_fn_06e538, structs_update_creature_control_072af4, creature_update_player_view_state_085954, food_update_creature_control_0aafa4, move_update_creature_control_0b3b58 ...
 ******************************************************************************/
undefined4 prison_update_creature_control_065d3e(void)

{
  char ch;
  short short_val;
  int thing;
  int val;
  int arg_edx;
  undefined4 extraout_EDX;
  undefined4 cctrl_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(&g_bss_002e911f + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0) {
    val = mapwho_process_map_subtile_050de3(cctrl_ptr);
    if (val != 0) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      sound_fn_06e538(3,0,2,0x100);
      if (*(char *)(thing + 7) != ')') {
        person_update_creature_control_064ae7();
      }
      instance_negative_instance_049bfc(0);
      structs_update_creature_control_072af4();
      *(int *)(&g_bss_002e181c + *(char *)(arg_edx + 3) * 0x1508) =
           *(int *)(&g_bss_002e181c + *(char *)(arg_edx + 3) * 0x1508) + 1;
      return 1;
    }
    if ((((((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 0x3f) == 0) && /* thing->index_or_angle */
         (val = mapwho_process_map_subtile_050de3(cctrl_ptr), val == 0)) && (val = room_passed_0d1030(), val != 0)) &&
       (((val = creature_update_player_view_state_085954(), val == 0 && (ch = update_fn_0dd20c(), ch != '\0')) &&
        (short_val = move_update_creature_control_0b3b58(), short_val != 0)))) {
      *(undefined1 *)(thing + 8) = 0x29; /* thing->active_state */
      food_update_creature_control_0aafa4();
      return extraout_EDX;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : prison_update_creature_control_065ebd (Original VA: 0x65ebd, Ghidra: FUN_00065ebd)
 * Prototype: undefined8 prison_update_creature_control_065ebd(void);
 * Address  : 0x65ebd (Size: 197 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> prison_update_creature_control_065f8a
 * Callees  : 7 -> moodneed_fn_051374, moodneed_update_creature_control_0522f0, person_fn_063b6d, prison_update_player_view_state_065c8e, prison_update_creature_control_065d3e, prison_fn_066111, scavenge_fn_06709c
 ******************************************************************************/
undefined8 prison_update_creature_control_065ebd(void)

{
  ushort uval;
  int thing;
  int val;
  undefined4 uval_2;
  int cctrl_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = *(ushort *)(cctrl_ptr + 0x7e);
  val = scavenge_fn_06709c();
  if (val == 0) {
LAB_00065eef:
    person_fn_063b6d();
  }
  else {
    moodneed_update_creature_control_0522f0();
    val = prison_update_player_view_state_065c8e();
    if (val != 0) {
      uval_2 = 0xffffffff;
      goto LAB_00065f84;
    }
    val = extraout_ECX;
    if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
LAB_00065f33:
      if (((uint)*(ushort *)(val + 0x1b) + g_game_turn & 0x3f) == 0) {
        cctrl_ptr = prison_fn_066111();
        if (cctrl_ptr != 0) {
          if ((int)(char)(&g_bss_002ddd1e)[(uint)uval * 0x45] ==
              (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
            moodneed_fn_051374();
          }
          goto LAB_00065eef;
        }
      }
      uval_2 = 0;
      goto LAB_00065f84;
    }
    cctrl_ptr = prison_update_creature_control_065d3e();
    val = extraout_ECX_00;
    if (cctrl_ptr == 0) goto LAB_00065f33;
  }
  uval_2 = 1;
LAB_00065f84:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : prison_fn_065f82 (Original VA: 0x65f82, Ghidra: FUN_00065f82)
 * Prototype: longlong prison_fn_065f82(undefined4 param_1,uint param_2);
 * Address  : 0x65f82 (Size: 8 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Module prison.cpp procedure @ 0x065f82
 * Callers  : 1 -> research_update_creature_control_066247
 * Callees  : 0 -> 
 ******************************************************************************/
longlong prison_fn_065f82(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}

/******************************************************************************
 * Function : prison_update_creature_control_065f8a (Original VA: 0x65f8a, Ghidra: FUN_00065f8a)
 * Prototype: longlong prison_update_creature_control_065f8a(void);
 * Address  : 0x65f8a (Size: 140 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> moodneed_fn_051374, person_fn_063b6d, pom_update_creature_control_065be8, prison_update_creature_control_065ebd, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong prison_update_creature_control_065f8a(void)

{
  int thing;
  int val;
  int cctrl_ptr;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 4)) &&
     (*(short *)(val + 1) == *(short *)(cctrl_ptr + 0x7e))) {
    if (*(ushort *)(val + 0x10) <= *(ushort *)(val + 0xe)) {
      cctrl_ptr = prison_update_creature_control_065ebd();
      if (cctrl_ptr == 0) {
        pom_update_creature_control_065be8();
      }
      return CONCAT44(arg_edx,cctrl_ptr);
    }
    if ((int)*(char *)(val + 3) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : prison_couldn_create_skeleton_prison_066016 (Original VA: 0x66016, Ghidra: FUN_00066016)
 * Prototype: void prison_couldn_create_skeleton_prison_066016(void);
 * Address  : 0x66016 (Size: 219 bytes)
 * Module   : prison.cpp [direct_file_string_xref]
 * OrigLine : prison.cpp lines 299
 * Purpose  : String 'COULDN'T CREATE SKELETON IN PRISON'
 * Callers  : 1 -> prison_update_player_view_state_065c8e
 * Callees  : 6 -> effect_fn_0263c9, inits_told_you_so_create_043bb3, person_fn_063b6d, creature_update_creature_control_08240c, creature_how_hero_have_tend_08608c, LbErrorLog
 ******************************************************************************/
void prison_couldn_create_skeleton_prison_066016(void)

{
  char ch;
  int arg_eax;
  int val;
  uint uval;
  int arg_edx;
  
  val = inits_told_you_so_create_043bb3();
  if (val != 0) {
    creature_update_creature_control_08240c();
    person_fn_063b6d();
    if (g_bss_002ee9b9 == 3) {
      uval = (uint)*(byte *)(arg_edx + 0x1a);
      if (((&g_bss_002e91e7)[uval * 0xe6] == '\0') || ((uval != 0 && (uval < 0xe)))) {
        ch = '\0';
      }
      else {
        ch = '\x01';
      }
    }
    else {
      ch = (&g_bss_002e91e7)[(uint)*(byte *)(arg_edx + 0x1a) * 0xe6];
    }
    if (ch != '\0') {
      effect_fn_0263c9();
    }
    creature_how_hero_have_tend_08608c(0,0);
    *(int *)(&g_bss_002e182c + *(char *)(arg_eax + 3) * 0x1508) =
         *(int *)(&g_bss_002e182c + *(char *)(arg_eax + 3) * 0x1508) + 1;
    return;
  }
  LbErrorLog(); /* LbErrorLog("prison.cpp", line 299, "COULDN'T CREATE SKELETON IN PRISON") */
  return;
}

/******************************************************************************
 * Function : prison_update_creature_control_0660f1 (Original VA: 0x660f1, Ghidra: FUN_000660f1)
 * Prototype: undefined8 prison_update_creature_control_0660f1(void);
 * Address  : 0x660f1 (Size: 32 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> person_fn_064e59
 ******************************************************************************/
undefined8 prison_update_creature_control_0660f1(void)

{
  int thing;
  undefined4 arg_edx;
  
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 0xfd; /* thing->ccontrol_idx */
  person_fn_064e59();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : prison_fn_066111 (Original VA: 0x66111, Ghidra: FUN_00066111)
 * Prototype: undefined4 prison_fn_066111(void);
 * Address  : 0x66111 (Size: 92 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Module prison.cpp procedure @ 0x066111
 * Callers  : 1 -> prison_update_creature_control_065ebd
 * Callees  : 1 -> imptool_fn_03f80c
 ******************************************************************************/
undefined4 prison_fn_066111(void)

{
  short short_val;
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_edx;
  
  if (*(char *)(arg_eax + 3) != arg_edx) {
    short_val = *(short *)(arg_eax + 0x37);
    while (short_val != 0) {
      val = imptool_fn_03f80c();
      if (val != 0) {
        return 1;
      }
      short_val = *(short *)(&g_bss_002d33c6 + extraout_ECX * 6);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : prison_update_creature_and_thing_06616d (Original VA: 0x6616d, Ghidra: FUN_0006616d)
 * Prototype: undefined8 prison_update_creature_and_thing_06616d(void);
 * Address  : 0x6616d (Size: 218 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> research_update_creature_control_066247
 * Callees  : 3 -> spell_type_thing_0713cc, room_process_dungeon_room_0ca474, update_fn_0dc440
 ******************************************************************************/
undefined8 prison_update_creature_and_thing_06616d(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  bool flag;
  int arg_eax;
  int val;
  int val_2;
  undefined4 arg_edx;
  uint uval;
  int local_20;
  
  local_20 = 0x7fffffff;
  uval = 0;
  flag = false;
  if ((*(char *)(arg_eax + 6) < '\x05') && (val = room_process_dungeon_room_0ca474(1), val != 0)) {
    cctrl_ptr = *(ushort *)(val + 0x3d);
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      val_2 = update_fn_0dc440();
      val = local_20;
      if (flag) {
        if ((val_2 < 0x7fffffff) &&
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xab) & 2) == 0)) /* thing->ccontrol_idx */
        goto LAB_00066200;
      }
      else {
        if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xab) & 2) == 0) { /* thing->ccontrol_idx */
          flag = true;
        }
        else {
          val = spell_type_thing_0713cc();
          if ((val < 1) || (local_20 <= val)) goto LAB_000661b0;
        }
LAB_00066200:
        local_20 = val;
        uval = thing_ptr;
      }
LAB_000661b0:
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa); /* thing->ccontrol_idx */
    }
  }
  return CONCAT44(arg_edx,uval);
}

