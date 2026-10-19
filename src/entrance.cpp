/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: entrance.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 6
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : entrance_update_player_view_state_02684f (Original VA: 0x2684f, Ghidra: FUN_0002684f)
 * Prototype: void entrance_update_player_view_state_02684f(void);
 * Address  : 0x2684f (Size: 312 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> effect_update_creature_and_thing_0266af, update_process_thing_entity_0e1ec4
 * Callees  : 2 -> effect_fn_02683b, panmap_update_player_view_state_0627b5
 ******************************************************************************/
void entrance_update_player_view_state_02684f(void)

{
  char player_off;
  uint rand_seed;
  int arg_eax;
  int val;
  
  val = (int)*(short *)(arg_eax + 0x5e);
  if (val == 0) {
LAB_00026951:
    panmap_update_player_view_state_0627b5();
    (&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] = (&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] & 0xf7
    ;
  }
  else {
    if ((val % 8 != 7) && (val != 1)) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      rand_seed = g_action_random_seed >> 0xd;
      g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
      if ((rand_seed & 3) != 0) {
        if (((&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] & 8) == 0) {
          return;
        }
        val = effect_fn_02683b();
        if (val == 0) {
          return;
        }
        goto LAB_00026951;
      }
    }
    player_off = (&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef];
    if ((((player_off != '\x06') && (player_off != '\a')) && (player_off != '\x03')) &&
       ((((&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] & 8) == 0 &&
        (val = effect_fn_02683b(), val != 0)))) {
      panmap_update_player_view_state_0627b5();
      (&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] = (&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] | 8;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : entrance_fn_026ac9 (Original VA: 0x26ac9, Ghidra: FUN_00026ac9)
 * Prototype: int entrance_fn_026ac9(void);
 * Address  : 0x26ac9 (Size: 56 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Purpose  : Module entrance.cpp procedure @ 0x026ac9
 * Callers  : 1 -> effect_process_map_subtile_026987
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
int entrance_fn_026ac9(void)

{
  int val;
  
  val = update_fn_0dc440();
  if (val < 0x280) {
    return 0x96;
  }
  return ((0x280 - (val + -0x280)) * 0x96) / 0x280;
}

/******************************************************************************
 * Function : entrance_find_valid_place_entrance_026b04 (Original VA: 0x26b04, Ghidra: FUN_00026b04)
 * Prototype: int entrance_find_valid_place_entrance_026b04(void);
 * Address  : 0x26b04 (Size: 361 bytes)
 * Module   : entrance.cpp [direct_file_string_xref]
 * OrigLine : entrance.cpp lines 54, 60
 * Purpose  : String 'Cannot find a valid place in entrance to create a creature'
 * Callers  : 1 -> gen2_could_get_random_entrance_037deb
 * Callees  : 8 -> event_illegal_event_number_created_027390, inits_told_you_so_create_043bb3, person_fn_063b6d, structs_update_creature_control_072af4, move_fn_0b3b10, move_update_creature_control_0b3b58, room_number_slabs_room_zero_0cc968, LbErrorLog
 ******************************************************************************/
int entrance_find_valid_place_entrance_026b04(void)

{
  char ch;
  short short_val;
  int gui_btn;
  int val;
  int dungeon_off;
  int arg_edx;
  uint *word_ptr;
  uint uStack_28;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  
  uStack_28 = 0x26b21;
  local_1c = arg_edx;
  val = inits_told_you_so_create_043bb3();
  local_18 = val;
  if (val == 0) {
    uStack_28 = 0x26c64;
    LbErrorLog(); /* LbErrorLog("entrance.cpp", line 54, "Cannot find a valid place in entrance to create a creature") */
  }
  else {
    word_ptr = (uint *)local_24;
    if ((((int)*(char *)(gui_btn + 3) != (uint)g_neutral_player_number) &&
        (dungeon_off = *(char *)(gui_btn + 3) * 0x1508 + local_1c, word_ptr = (uint *)local_24,
        (byte)(&g_bss_002e0ea3)[dungeon_off] < 2)) &&
       (word_ptr = (uint *)local_24, (&g_bss_002e1a12)[dungeon_off] == '\0')) {
      uStack_28 = (uint)*(ushort *)(val + 0x1b);
      word_ptr = &uStack_28;
      event_illegal_event_number_created_027390();
      (&g_bss_002e1a12)[(uint)*(byte *)(val + 0x1a) + *(char *)(gui_btn + 3) * 0x1508] = 1;
    }
    *(undefined4 *)((int)word_ptr + -4) = 0x26b99;
    ch = room_number_slabs_room_zero_0cc968();
    if (ch == '\0') {
      *(undefined4 *)((int)word_ptr + -4) = 0x26c44;
      LbErrorLog(); /* LbErrorLog("entrance.cpp", line 60, "Cannot create a creature for entrance") */
      *(undefined4 *)((int)word_ptr + -4) = 0x26c4e;
      structs_update_creature_control_072af4();
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x26bac;
      move_fn_0b3b10();
      *(int *)(&g_bss_002e1724 + *(char *)(gui_btn + 3) * 0x1508) =
           *(int *)(&g_bss_002e1724 + *(char *)(gui_btn + 3) * 0x1508) + 1;
      *(int *)(&g_bss_002e1728 + local_1c * 4 + *(char *)(gui_btn + 3) * 0x1508) =
           *(int *)(&g_bss_002e1728 + local_1c * 4 + *(char *)(gui_btn + 3) * 0x1508) + 1;
      *(int *)(&g_bss_002e17a8 + *(char *)(gui_btn + 3) * 0x1508) = local_1c;
      *(short *)(gui_btn + 0x1b) = *(short *)(gui_btn + 0x1b) + 1; /* gui_btn->id_num */
      if ((&g_dungeons)[*(char *)(gui_btn + 3) * 0xa84] != 0) {
        *(undefined4 *)((int)word_ptr + -4) = 0x26c18;
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          *(undefined1 *)(local_18 + 8) = 0x90;
          return local_18;
        }
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x26c2e;
      person_fn_063b6d();
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : entrance_update_player_view_state_026c6d (Original VA: 0x26c6d, Ghidra: FUN_00026c6d)
 * Prototype: longlong entrance_update_player_view_state_026c6d(void);
 * Address  : 0x26c6d (Size: 117 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 4 -> moodneed_fn_051374, person_fn_063b6d, room_process_dungeon_room_0c9988, room_fn_0cc4a0
 ******************************************************************************/
longlong entrance_update_player_view_state_026c6d(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = room_process_dungeon_room_0c9988();
  if (val != 0) {
    val = room_fn_0cc4a0();
    if (val != 0) {
      if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
      *(undefined1 *)(arg_eax + 8) = 0x33;
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : entrance_update_creature_and_thing_026ce2 (Original VA: 0x26ce2, Ghidra: FUN_00026ce2)
 * Prototype: undefined8 entrance_update_creature_and_thing_026ce2(void);
 * Address  : 0x26ce2 (Size: 218 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> anger_fn_010434, person_update_creature_control_064ae7, creature_how_hero_have_tend_08608c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 entrance_update_creature_and_thing_026ce2(void)

{
  char ch;
  ushort cctrl_ptr;
  int arg_eax;
  int thing_ptr;
  undefined4 uval;
  undefined4 *word_ptr;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  word_ptr = (undefined4 *)&stack0xffffffec;
  uStack_18 = 0x26cee;
  thing_ptr = room_update_slab_subtile_columns_0d0f50();
  if (((thing_ptr == 0) || (*(short *)(thing_ptr + 10) != 1)) ||
     (ch = *(char *)(arg_eax + 6), ch != *(char *)(thing_ptr + 3))) {
    uStack_18 = 0x26db1;
    person_update_creature_control_064ae7();
    uval = 1;
  }
  else {
    if ((int)ch != (uint)g_neutral_player_number) {
      *(short *)(&g_bss_002e0ec8 + ch * 0x1508) = *(short *)(&g_bss_002e0ec8 + ch * 0x1508) + 1;
      cctrl_ptr = (&g_bss_002e05b6)[*(char *)(arg_eax + 6) * 0xa84];
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], thing_ptr != g_thing_ptrs) {
        if (thing_ptr != arg_eax) {
          uStack_18 = 0x26d81;
          anger_fn_010434();
        }
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
    }
    uStack_18 = 0;
    word_ptr = &uStack_1c;
    uStack_1c = 0;
    creature_how_hero_have_tend_08608c();
    uval = 0xffffffff;
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr + 8),uval);
}

/******************************************************************************
 * Function : entrance_update_creature_control_026dbc (Original VA: 0x26dbc, Ghidra: FUN_00026dbc)
 * Prototype: undefined8 entrance_update_creature_control_026dbc(void);
 * Address  : 0x26dbc (Size: 162 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> creature_how_hero_have_tend_08608c, room_process_dungeon_room_0c9988, room_fn_0cc4a0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 entrance_update_creature_control_026dbc(void)

{
  int thing;
  int val;
  undefined4 arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if ((((val == 0) || (*(short *)(val + 10) != 1)) && (val = room_process_dungeon_room_0c9988(), val != 0)) &&
     (val = room_fn_0cc4a0(), val != 0)) {
    *(undefined1 *)(thing + 8) = 0x8b; /* thing->active_state */
    *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
         *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) | 2; /* thing->ccontrol_idx */
    return CONCAT44(arg_edx,1);
  }
  creature_how_hero_have_tend_08608c(0);
  return 0xffffffff;
}

