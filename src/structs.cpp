/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: structs.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 20
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : structs_fn_072810 (Original VA: 0x72810, Ghidra: FUN_00072810)
 * Prototype: void structs_fn_072810(void);
 * Address  : 0x72810 (Size: 25 bytes)
 * Module   : structs.cpp [address_order_boundary_interpolation]
 * Purpose  : Module structs.cpp procedure @ 0x072810
 * Callers  : 4 -> game_out_sync_gameturn_036ff4, inits_roll_action_random_040d25, inits_update_player_view_state_040db9, light_fn_0b20e0
 * Callees  : 5 -> structs_process_thing_entity_072cca, structs_update_creature_control_072d1a, structs_update_player_dungeon_072d44, structs_fn_072d6a, light_fn_0ac630
 ******************************************************************************/
void structs_fn_072810(void)

{
  structs_process_thing_entity_072cca();
  structs_update_creature_control_072d1a();
  structs_update_player_dungeon_072d44();
  structs_fn_072d6a();
  light_fn_0ac630();
  return;
}

/******************************************************************************
 * Function : structs_allocate_thing_structure_072829 (Original VA: 0x72829, Ghidra: FUN_00072829)
 * Prototype: longlong structs_allocate_thing_structure_072829(void);
 * Address  : 0x72829 (Size: 153 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp lines 31, 33
 * Purpose  : String 'Cannot allocate thing structure.'
 * Callers  : 12 -> effect_allocate_light_effect_024998, inits_told_you_so_create_043bb3, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, inits_told_you_so_create_0449a4, inits_told_you_so_create_044b13 ...
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
longlong structs_allocate_thing_structure_072829(void)

{
  char arg_al;
  uint arg_edx;
  
  if ((0x7fe < g_bss_002e8bec) && ((arg_al == '\0' || (g_bss_002e6ece == 0)))) {
    if (arg_al != '\0') {
      LbErrorLog(); /* LbErrorLog("structs.cpp", line 31, "Cannot allocate thing structure.") */
      dk_sprintf(&g_log_sprintf_buf,s_Creats__d__Objs_d__Bods_d__Trps__0016781d,g_bss_002e6eb2,
                   g_bss_002e6ec2,g_bss_002e6ed2,g_bss_002e6eea,g_bss_002e6ef2,g_bss_002e6eba,g_bss_002e6eda,
                   g_bss_002e6eca);
      LbErrorLog(); /* LbErrorLog("structs.cpp", line 33, g_log_buf) */
    }
    return (ulonglong)arg_edx << 0x20;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : structs_update_creature_control_0728c2 (Original VA: 0x728c2, Ghidra: FUN_000728c2)
 * Prototype: longlong structs_update_creature_control_0728c2(void);
 * Address  : 0x728c2 (Size: 39 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> inits_told_you_so_create_043bb3, lair_process_thing_entity_04e1f2
 * Callees  : 0 -> 
 ******************************************************************************/
longlong structs_update_creature_control_0728c2(void)

{
  uint uval;
  uint arg_edx;
  
  uval = 1;
  while( true ) {
    if (0xff < (uval & 0xffff)) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*(byte *)((&g_creature_ctrl_ptrs)[uval & 0xffff] + 1) & 1) == 0) break;
    uval = uval + 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : structs_process_dungeon_room_0728e9 (Original VA: 0x728e9, Ghidra: FUN_000728e9)
 * Prototype: longlong structs_process_dungeon_room_0728e9(void);
 * Address  : 0x728e9 (Size: 38 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 3 -> input_game_action_048c77, process_players_dungeon_command_packet, room_process_dungeon_room_0caa90
 * Callees  : 0 -> 
 ******************************************************************************/
longlong structs_process_dungeon_room_0728e9(void)

{
  uint uval;
  uint arg_edx;
  
  uval = 1;
  while( true ) {
    if (0x95 < (uval & 0xffff)) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (((&g_rooms)[(uval & 0xffff) * 0x45] & 1) == 0) break;
    uval = uval + 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : structs_even_free_up_effect_07290f (Original VA: 0x7290f, Ghidra: FUN_0007290f)
 * Prototype: longlong structs_even_free_up_effect_07290f(void);
 * Address  : 0x7290f (Size: 142 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp lines 121
 * Purpose  : String 'Cannot even free up effect thing!'
 * Callers  : 11 -> effect_allocate_light_effect_024998, inits_told_you_so_create_043bb3, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, inits_told_you_so_create_0449a4, inits_told_you_so_create_044b13 ...
 * Callees  : 2 -> structs_update_creature_control_072af4, LbErrorLog
 ******************************************************************************/
longlong structs_even_free_up_effect_07290f(void)

{
  byte *thing_ptr;
  char arg_al;
  uint arg_edx;
  
  while( true ) {
    if (g_bss_002e8bec < 0x7ff) {
      thing_ptr = (byte *)(&g_thing_ptrs)[(ushort)(&g_bss_002e7bee)[g_bss_002e8bec]];
      *thing_ptr = *thing_ptr | 1;
      *(undefined2 *)(thing_ptr + 0x1b) = (&g_bss_002e7bee)[g_bss_002e8bec]; /* thing->index_or_angle */
      g_bss_002e8bec = g_bss_002e8bec + 1;
      return CONCAT44(arg_edx,thing_ptr);
    }
    if ((arg_al == '\0') || (g_bss_002e6ece == 0)) break;
    structs_update_creature_control_072af4();
    arg_al = '\x01';
  }
  LbErrorLog(); /* LbErrorLog("structs.cpp", line 121, "Cannot allocate a structure! ") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : structs_update_creature_control_07299d (Original VA: 0x7299d, Ghidra: FUN_0007299d)
 * Prototype: longlong structs_update_creature_control_07299d(void);
 * Address  : 0x7299d (Size: 98 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> inits_told_you_so_create_043bb3
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
longlong structs_update_creature_control_07299d(void)

{
  byte *cctrl_ptr;
  char ch;
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  ch = '\x01';
  val = 4;
  while( true ) {
    if (0x3ff < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*(byte *)(*(int *)((int)&g_creature_ctrl_ptrs + val) + 1) & 1) == 0) break;
    ch = ch + '\x01';
    val = val + 4;
  }
  LbScreenWaitVbi();
  cctrl_ptr = (byte *)(*(int *)((int)&g_creature_ctrl_ptrs + extraout_ECX) + 1);
  *cctrl_ptr = *cctrl_ptr | 1;
  **(char **)((int)&g_creature_ctrl_ptrs + extraout_ECX) = ch;
  return CONCAT44(arg_edx,*(undefined4 *)((int)&g_creature_ctrl_ptrs + extraout_ECX));
}

/******************************************************************************
 * Function : structs_process_dungeon_room_0729ff (Original VA: 0x729ff, Ghidra: FUN_000729ff)
 * Prototype: longlong structs_process_dungeon_room_0729ff(void);
 * Address  : 0x729ff (Size: 58 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> room_process_dungeon_room_0caa90
 * Callees  : 0 -> 
 ******************************************************************************/
longlong structs_process_dungeon_room_0729ff(void)

{
  int val;
  short short_val;
  uint arg_edx;
  
  short_val = 1;
  val = 0x45;
  while( true ) {
    if (0x286d < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (((&g_rooms)[val] & 1) == 0) break;
    val = val + 0x45;
    short_val = short_val + 1;
  }
  *(short *)(&g_bss_002ddd1c + val) = short_val;
  (&g_rooms)[val] = (&g_rooms)[val] | 1;
  return CONCAT44(arg_edx,&g_rooms + val);
}

/******************************************************************************
 * Function : structs_fn_072a39 (Original VA: 0x72a39, Ghidra: FUN_00072a39)
 * Prototype: longlong structs_fn_072a39(void);
 * Address  : 0x72a39 (Size: 65 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Module structs.cpp procedure @ 0x072a39
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong structs_fn_072a39(void)

{
  int val;
  short short_val;
  uint arg_edx;
  
  short_val = 1;
  val = 10;
  while( true ) {
    if (0x13f < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (((&g_bss_002eb401)[val] & 1) == 0) break;
    val = val + 10;
    short_val = short_val + 1;
  }
  (&g_bss_002eb40a)[val] = 0;
  *(short *)(&g_bss_002eb408 + val) = short_val;
  (&g_bss_002eb401)[val] = (&g_bss_002eb401)[val] | 1;
  return CONCAT44(arg_edx,&g_bss_002eb401 + val);
}

/******************************************************************************
 * Function : structs_attempt_allocate_action_point_072a7a (Original VA: 0x72a7a, Ghidra: FUN_00072a7a)
 * Prototype: longlong structs_attempt_allocate_action_point_072a7a(void);
 * Address  : 0x72a7a (Size: 70 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp lines 197
 * Purpose  : String 'Attempt to allocate action point over old one'
 * Callers  : 1 -> file_allocate_action_point_during_029df9
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong structs_attempt_allocate_action_point_072a7a(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = arg_eax * 10;
  if (((&g_bss_002eb401)[val] & 1) == 0) {
    (&g_bss_002eb40a)[val] = 0;
    *(short *)(&g_bss_002eb408 + val) = (short)arg_eax;
    (&g_bss_002eb401)[val] = (&g_bss_002eb401)[val] | 1;
    return CONCAT44(arg_edx,&g_bss_002eb401 + val);
  }
  LbErrorLog(); /* LbErrorLog("structs.cpp", line 197, "Attempt to allocate action point over old one") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : structs_update_creature_control_072af4 (Original VA: 0x72af4, Ghidra: FUN_00072af4)
 * Prototype: void structs_update_creature_control_072af4(void);
 * Address  : 0x72af4 (Size: 288 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 74 -> compturn_process_map_subtile_022660, door_fn_023014, effect_process_thing_entity_024ab9, effect_process_thing_entity_02606f, entrance_find_valid_place_entrance_026b04, file_buff_struct_num_02ab14, good_update_creature_control_0386e1, gravyard_could_find_valid_position_039901 ...
 * Callees  : 9 -> group_update_creature_and_thing_039c3e, lair_attempt_remove_creature_lair_04d3d4, mapwho_process_map_subtile_050ca9, person_peter_list_06385d, sound_fn_06f653, structs_fn_072c14, structs_list_has_structures_072de3, light_attempt_delete_light_0acce4 ...
 ******************************************************************************/
void structs_update_creature_control_072af4(void)

{
  byte *thing;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  int extraout_ECX_03;
  int arg_edx;
  int extraout_EDX;
  int extraout_EDX_00;
  int cctrl_ptr;
  
  if (*(ushort *)(thing + 100) == 0) { /* thing->ccontrol_idx */
    cctrl_ptr = 0;
  }
  else {
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  }
  if ((*thing & 8) != 0) {
    person_peter_list_06385d();
    thing = extraout_ECX;
    arg_edx = extraout_EDX;
  }
  if ((arg_edx == 0) && (*(short *)(thing + 0x62) != 0)) {
    light_attempt_delete_light_0acce4();
    thing = extraout_ECX_00;
    arg_edx = extraout_EDX_00;
  }
  if (cctrl_ptr != 0) {
    if (arg_edx == 0) {
      if (*(short *)(cctrl_ptr + 0x68) != 0) {
        lair_attempt_remove_creature_lair_04d3d4();
      }
      if ((*(ushort *)(cctrl_ptr + 0x7a) & 0xfff) != 0) {
        group_update_creature_and_thing_039c3e();
      }
    }
    structs_fn_072c14();
    thing = extraout_ECX_01;
  }
  if (thing[0x66] != 0) {
    sound_fn_06f653();
    thing = extraout_ECX_02;
  }
  switch(thing[0x1f]) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  default:
    goto switchD_00072b88_caseD_a;
  case 0xc:
    break;
  case 0xd:
  }
  structs_list_has_structures_072de3();
switchD_00072b88_caseD_a:
  mapwho_process_map_subtile_050ca9();
  g_bss_002e8bec = g_bss_002e8bec - 1;
  (&g_bss_002e7bee)[g_bss_002e8bec] = *(undefined2 *)(extraout_ECX_03 + 0x1b);
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : structs_fn_072c14 (Original VA: 0x72c14, Ghidra: FUN_00072c14)
 * Prototype: void structs_fn_072c14(void);
 * Address  : 0x72c14 (Size: 17 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Module structs.cpp procedure @ 0x072c14
 * Callers  : 2 -> structs_update_creature_control_072af4, structs_update_creature_control_072d1a
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void structs_fn_072c14(void)

{
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : structs_process_dungeon_room_072c25 (Original VA: 0x72c25, Ghidra: FUN_00072c25)
 * Prototype: void structs_process_dungeon_room_072c25(void);
 * Address  : 0x72c25 (Size: 139 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> structs_update_player_dungeon_072d44, room_process_dungeon_room_0c98d0
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void structs_process_dungeon_room_072c25(void)

{
  ushort uval;
  byte *arg_eax;
  int dungeon_off;
  
  if ((arg_eax != (byte *)0x0) && ((*arg_eax & 1) != 0)) {
    if ((int)(char)arg_eax[3] != (uint)g_neutral_player_number) {
      dungeon_off = (uint)*(ushort *)(arg_eax + 10) * 2 + (char)arg_eax[3] * 0x1508;
      if (*(short *)(&g_bss_002e0594 + dungeon_off) == *(short *)(arg_eax + 1)) {
        uval = *(ushort *)(arg_eax + 6);
        *(ushort *)(&g_bss_002e0594 + dungeon_off) = uval;
        *(undefined2 *)(&g_bss_002ddd1f + (uint)uval * 0x45) = 0;
      }
      else {
        uval = *(ushort *)(arg_eax + 4);
        *(ushort *)(&g_bss_002ddd1f + (uint)*(ushort *)(arg_eax + 6) * 0x45) = uval;
        *(undefined2 *)(&g_bss_002ddd21 + (uint)uval * 0x45) = *(undefined2 *)(arg_eax + 6);
      }
    }
    LbScreenWaitVbi();
  }
  return;
}

/******************************************************************************
 * Function : structs_fn_072cb0 (Original VA: 0x72cb0, Ghidra: FUN_00072cb0)
 * Prototype: void structs_fn_072cb0(void);
 * Address  : 0x72cb0 (Size: 26 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Module structs.cpp procedure @ 0x072cb0
 * Callers  : 1 -> structs_fn_072d6a
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void structs_fn_072cb0(void)

{
  byte *arg_eax;
  
  if ((arg_eax != (byte *)0x0) && ((*arg_eax & 1) != 0)) {
    LbScreenWaitVbi();
  }
  return;
}

/******************************************************************************
 * Function : structs_process_thing_entity_072cca (Original VA: 0x72cca, Ghidra: FUN_00072cca)
 * Prototype: void structs_process_thing_entity_072cca(void);
 * Address  : 0x72cca (Size: 80 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> structs_fn_072810
 * Callees  : 1 -> structs_update_creature_control_072af4
 ******************************************************************************/
void structs_process_thing_entity_072cca(void)

{
  short short_val;
  int val;
  int val_2;
  
  val_2 = 4;
  do {
    if ((**(byte **)((int)&g_thing_ptrs + val_2) & 1) != 0) {
      structs_update_creature_control_072af4();
    }
    val_2 = val_2 + 4;
  } while (val_2 != 0x2000);
  val = 0;
  val_2 = 0;
  do {
    short_val = (short)val;
    val = val + 1;
    *(short *)((int)&g_bss_002e7bee + val_2) = short_val + 1;
    val_2 = val_2 + 2;
  } while (val < 0x7ff);
  g_bss_002e8bec = 0;
  return;
}

/******************************************************************************
 * Function : structs_update_creature_control_072d1a (Original VA: 0x72d1a, Ghidra: FUN_00072d1a)
 * Prototype: void structs_update_creature_control_072d1a(void);
 * Address  : 0x72d1a (Size: 42 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> structs_fn_072810
 * Callees  : 1 -> structs_fn_072c14
 ******************************************************************************/
void structs_update_creature_control_072d1a(void)

{
  int val;
  int extraout_EDX;
  
  val = 4;
  do {
    if ((*(byte *)(*(int *)((int)&g_creature_ctrl_ptrs + val) + 1) & 1) != 0) {
      structs_fn_072c14();
      val = extraout_EDX;
    }
    val = val + 4;
  } while (val != 0x400);
  return;
}

/******************************************************************************
 * Function : structs_update_player_dungeon_072d44 (Original VA: 0x72d44, Ghidra: FUN_00072d44)
 * Prototype: void structs_update_player_dungeon_072d44(void);
 * Address  : 0x72d44 (Size: 38 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> structs_fn_072810
 * Callees  : 1 -> structs_process_dungeon_room_072c25
 ******************************************************************************/
void structs_update_player_dungeon_072d44(void)

{
  undefined2 *extraout_EDX;
  
  do {
    structs_process_dungeon_room_072c25();
  } while (extraout_EDX != &g_dungeons);
  return;
}

/******************************************************************************
 * Function : structs_fn_072d6a (Original VA: 0x72d6a, Ghidra: FUN_00072d6a)
 * Prototype: void structs_fn_072d6a(void);
 * Address  : 0x72d6a (Size: 38 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Purpose  : Module structs.cpp procedure @ 0x072d6a
 * Callers  : 1 -> structs_fn_072810
 * Callees  : 1 -> structs_fn_072cb0
 ******************************************************************************/
void structs_fn_072d6a(void)

{
  undefined1 *extraout_EDX;
  
  do {
    structs_fn_072cb0();
  } while (extraout_EDX != &g_network_game_active);
  return;
}

/******************************************************************************
 * Function : structs_thing_already_list_072d90 (Original VA: 0x72d90, Ghidra: FUN_00072d90)
 * Prototype: void structs_thing_already_list_072d90(void);
 * Address  : 0x72d90 (Size: 83 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp lines 460
 * Purpose  : String 'Thing is already in list'
 * Callers  : 11 -> effect_allocate_light_effect_024998, inits_told_you_so_create_043bb3, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, inits_told_you_so_create_0449a4, inits_told_you_so_create_044b13 ...
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void structs_thing_already_list_072d90(void)

{
  int val;
  byte *gui_btn;
  int *arg_edx;
  
  if ((*gui_btn & 4) == 0) {
    *arg_edx = *arg_edx + 1;
    *gui_btn = *gui_btn | 4;
    val = arg_edx[1];
    gui_btn[0x69] = 0;
    gui_btn[0x6a] = 0;
    *(short *)(gui_btn + 0x67) = (short)val;
    if (arg_edx[1] != 0) {
      *(undefined2 *)((&g_thing_ptrs)[arg_edx[1]] + 0x69) = *(undefined2 *)(gui_btn + 0x1b); /* gui_btn->id_num */
    }
    arg_edx[1] = (uint)*(ushort *)(gui_btn + 0x1b); /* gui_btn->id_num */
    return;
  }
  LbErrorLog(); /* LbErrorLog("structs.cpp", line 460, "Thing is already in list") */
  return;
}

/******************************************************************************
 * Function : structs_list_has_structures_072de3 (Original VA: 0x72de3, Ghidra: FUN_00072de3)
 * Prototype: void structs_list_has_structures_072de3(void);
 * Address  : 0x72de3 (Size: 162 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp lines 501
 * Purpose  : String 'List has < 0 structures'
 * Callers  : 1 -> structs_update_creature_control_072af4
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void structs_list_has_structures_072de3(void)

{
  byte *gui_btn;
  int *arg_edx;
  
  if ((*gui_btn & 4) != 0) {
    if ((uint)*(ushort *)(gui_btn + 0x1b) == arg_edx[1]) { /* gui_btn->id_num */
      arg_edx[1] = (uint)*(ushort *)(gui_btn + 0x67);
      if (*(short *)(gui_btn + 0x67) != 0) {
        *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(gui_btn + 0x67)] + 0x69) = 0;
      }
      gui_btn[0x67] = 0;
      gui_btn[0x68] = 0;
      gui_btn[0x69] = 0;
      gui_btn[0x6a] = 0;
    }
    else {
      if (*(short *)(gui_btn + 0x69) != 0) {
        *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(gui_btn + 0x69)] + 0x67) =
             *(undefined2 *)(gui_btn + 0x67);
      }
      if (*(short *)(gui_btn + 0x67) != 0) {
        *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(gui_btn + 0x67)] + 0x69) =
             *(undefined2 *)(gui_btn + 0x69);
      }
      gui_btn[0x69] = 0;
      gui_btn[0x6a] = 0;
      gui_btn[0x67] = 0;
      gui_btn[0x68] = 0;
    }
    *gui_btn = *gui_btn & 0xfb;
    *arg_edx = *arg_edx + -1;
    if (*arg_edx < 0) {
      LbErrorLog(); /* LbErrorLog("structs.cpp", line 501, "List has < 0 structures") */
    }
  }
  return;
}

/******************************************************************************
 * Function : structs_update_player_dungeon_072e88 (Original VA: 0x72e88, Ghidra: FUN_00072e88)
 * Prototype: undefined8 structs_update_player_dungeon_072e88(void);
 * Address  : 0x72e88 (Size: 35 bytes)
 * Module   : structs.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> temple_update_creature_control_073038
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 structs_update_player_dungeon_072e88(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  (&g_bss_002e0e3d)[(uint)*(byte *)(arg_eax + 0x1a) + *(char *)(arg_eax + 6) * 0x1508] =
       (&g_bss_002e0e3d)[(uint)*(byte *)(arg_eax + 0x1a) + *(char *)(arg_eax + 6) * 0x1508] + '\x01';
  return CONCAT44(arg_edx,1);
}

