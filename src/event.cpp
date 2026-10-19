/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: event.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : event_fn_027348 (Original VA: 0x27348, Ghidra: FUN_00027348)
 * Prototype: void event_fn_027348(void);
 * Address  : 0x27348 (Size: 72 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Module event.cpp procedure @ 0x027348
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void event_fn_027348(void)

{
  int extraout_ECX;
  
  do {
    LbScreenWaitVbi();
  } while (extraout_ECX != 0x2e8258);
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : event_illegal_event_number_created_027390 (Original VA: 0x27390, Ghidra: FUN_00027390)
 * Prototype: int event_illegal_event_number_created_027390(undefined4 param_1);
 * Address  : 0x27390 (Size: 285 bytes)
 * Module   : event.cpp [direct_file_string_xref]
 * OrigLine : event.cpp lines 52, 74
 * Purpose  : String 'Illegal Event number created'
 * Callers  : 13 -> entrance_find_valid_place_entrance_026b04, eyelens_update_player_dungeon_026e5e, event_fn_0274ad, event_fn_027553, newgui_fn_05bcd7, research_illegal_research_type_process_066b28, research_could_find_room_thing_066dc2, scavenge_take_money_am_supposed_067920 ...
 * Callees  : 4 -> event_fn_027703, event_fn_02775f, event_fn_027824, LbErrorLog
 ******************************************************************************/
int event_illegal_event_number_created_027390(undefined4 param_1)

{
  uint uval;
  int val;
  byte arg_cl;
  uint extraout_ECX;
  uint extraout_ECX_00;
  byte arg_bl;
  uint uval_2;
  int dungeon_off;
  
  if (arg_cl < g_neutral_player_number) {
    uval_2 = (uint)arg_cl;
    dungeon_off = uval_2 * 0x1508;
    uval = (uint)arg_bl;
    if (uval < 0x1b) {
      if ((((*(int *)(&g_dungeons + uval_2 * 0xa84 + uval * 2 + 0x9da) == 0) ||
           ((uint)(*(int *)(&g_dungeons + uval_2 * 0xa84 + uval * 2 + 0x9da) +
                  *(int *)(&g_data_00191386 + uval * 0x10)) < g_game_turn)) ||
          (*(int *)(&g_data_00191386 + uval * 0x10) == 0)) && (val = event_fn_027703(), val != 0)) {
        event_fn_02775f(extraout_ECX & 0xff,param_1);
        uval = 0xc;
        *(uint *)(dungeon_off + 0x2e193d + (uint)arg_bl * 4) = g_game_turn;
        do {
          if (uval == 0) {
LAB_0002748a:
            if ((uval & 0xff) != 0) {
              return val;
            }
            event_fn_027824();
            (&g_bss_002e193c)[dungeon_off] = *(undefined1 *)(val + 1);
            return val;
          }
          if ((&g_bss_002e1930)[uval + dungeon_off] == '\0') {
            if ((int)(char)(&g_bss_002e1428)[dungeon_off] != (uint)*(byte *)(val + 10)) {
              LbErrorLog(); /* LbErrorLog("event.cpp", line 52, "Illegal Event number created") */
              uval = extraout_ECX_00;
            }
            (&g_bss_002e1930)[(uval & 0xff) + dungeon_off] = *(undefined1 *)(val + 1);
            goto LAB_0002748a;
          }
          uval = (uint)(byte)((char)uval - 1);
        } while( true );
      }
    }
    else {
      LbErrorLog(); /* LbErrorLog("event.cpp", line 74, "ILLEGAL MY_EVENT PLAYER ALLOCATION") */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : event_fn_0274ad (Original VA: 0x274ad, Ghidra: FUN_000274ad)
 * Prototype: uint event_fn_0274ad(undefined4 param_1);
 * Address  : 0x274ad (Size: 166 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Module event.cpp procedure @ 0x0274ad
 * Callers  : 20 -> anger_removing_annoyed_creature_non_0109ea, door_update_creature_and_thing_023291, evil_update_creature_control_02796f, evil_do_this_destroy_room_029254, gen2_update_player_view_state_03806d, good_update_creature_control_0387b3, good_update_creature_control_038faa, impset_update_creature_and_thing_03c53a ...
 * Callees  : 3 -> event_illegal_event_number_created_027390, event_fn_02775f, get_2d_box_distance_xy
 ******************************************************************************/
uint event_fn_0274ad(undefined4 param_1)

{
  byte *byte_ptr;
  int val;
  uint uval;
  byte arg_cl;
  byte arg_bl;
  byte *byte_ptr_2;
  byte *local_18;
  
  local_18 = (byte *)0x0;
  byte_ptr_2 = &g_bss_002e7091;
  while ((byte_ptr = local_18, byte_ptr_2 <= &g_bss_002e789b &&
         (((((*byte_ptr_2 & 1) == 0 || (byte_ptr_2[10] != arg_cl)) || (byte_ptr_2[0xb] != arg_bl)) ||
          (val = get_2d_box_distance_xy(), byte_ptr = byte_ptr_2, 0x4ff < val))))) {
    byte_ptr_2 = byte_ptr_2 + 0x15;
  }
  local_18 = byte_ptr;
  if (local_18 == (byte *)0x0) {
    val = event_illegal_event_number_created_027390(param_1);
    uval = 0;
    if (val != 0) {
      uval = (uint)*(byte *)(val + 1);
    }
  }
  else {
    event_fn_02775f(arg_cl,param_1);
    uval = -(uint)local_18[1];
  }
  return uval;
}

/******************************************************************************
 * Function : event_fn_027553 (Original VA: 0x27553, Ghidra: FUN_00027553)
 * Prototype: uint event_fn_027553(undefined4 param_1);
 * Address  : 0x27553 (Size: 110 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module event.cpp procedure @ 0x027553
 * Callers  : 2 -> battle_update_creature_and_thing_01443f, newgui_update_player_dungeon_05ba80
 * Callees  : 2 -> event_illegal_event_number_created_027390, event_fn_02775f
 ******************************************************************************/
uint event_fn_027553(undefined4 param_1)

{
  byte *loop_i;
  int val;
  uint uval;
  byte arg_cl;
  byte arg_bl;
  byte *byte_ptr;
  
  byte_ptr = (byte *)0x0;
  for (loop_i = &g_bss_002e7091; loop_i < (byte *)0x2e789c; loop_i = loop_i + 0x15) {
    if ((((*loop_i & 1) != 0) && (arg_cl == loop_i[10])) && (arg_bl == loop_i[0xb])) {
      byte_ptr = loop_i;
    }
  }
  if (byte_ptr == (byte *)0x0) {
    val = event_illegal_event_number_created_027390(param_1);
    uval = 0;
    if (val != 0) {
      uval = (uint)*(byte *)(val + 1);
    }
  }
  else {
    event_fn_02775f(arg_cl,param_1);
    uval = -(uint)byte_ptr[1];
  }
  return uval;
}

/******************************************************************************
 * Function : event_fn_0275c1 (Original VA: 0x275c1, Ghidra: FUN_000275c1)
 * Prototype: void event_fn_0275c1(void);
 * Address  : 0x275c1 (Size: 53 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Module event.cpp procedure @ 0x0275c1
 * Callers  : 2 -> door_process_thing_entity_02347d, update_go_first_person_without_0de6a8
 * Callees  : 1 -> event_update_player_dungeon_0275f6
 ******************************************************************************/
void event_fn_0275c1(void)

{
  uint arg_eax;
  uint extraout_ECX;
  byte *loop_i;
  
  for (loop_i = &g_bss_002e7091; loop_i < (byte *)0x2e789c; loop_i = loop_i + 0x15) {
    if (((*loop_i & 1) != 0) && (loop_i[10] == arg_eax)) {
      event_update_player_dungeon_0275f6();
      arg_eax = extraout_ECX;
    }
  }
  return;
}

/******************************************************************************
 * Function : event_update_player_dungeon_0275f6 (Original VA: 0x275f6, Ghidra: FUN_000275f6)
 * Prototype: void event_update_player_dungeon_0275f6(void);
 * Address  : 0x275f6 (Size: 89 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 4 -> event_fn_0275c1, event_update_player_dungeon_02764f, evil_fn_02778e, event_fn_027824
 * Callees  : 2 -> event_fn_027746, newgui_update_player_dungeon_05ab81
 ******************************************************************************/
void event_update_player_dungeon_0275f6(void)

{
  int arg_eax;
  uint arg_edx;
  int val;
  undefined2 *dungeon_off;
  
  dungeon_off = &g_dungeons + arg_eax * 0xa84;
  *(undefined4 *)(arg_eax * 0x1508 + 0x2e193d + (uint)(byte)(&g_bss_002e7087)[arg_edx * 0x15] * 4) =
       g_game_turn;
  val = 0;
  do {
    if (0xc < val) {
LAB_00027644:
      event_fn_027746();
      return;
    }
    if (*(byte *)((int)dungeon_off + 0x13a7) == arg_edx) {
      newgui_update_player_dungeon_05ab81();
      *(undefined1 *)((int)dungeon_off + 0x13a7) = 0;
      goto LAB_00027644;
    }
    dungeon_off = (undefined2 *)((int)dungeon_off + 1);
    val = val + 1;
  } while( true );
}

/******************************************************************************
 * Function : event_update_player_dungeon_02764f (Original VA: 0x2764f, Ghidra: FUN_0002764f)
 * Prototype: void event_update_player_dungeon_02764f(void);
 * Address  : 0x2764f (Size: 79 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 1 -> event_update_player_dungeon_0275f6
 ******************************************************************************/
void event_update_player_dungeon_02764f(void)

{
  byte *loop_i;
  
  for (loop_i = &g_bss_002e7091; loop_i < (byte *)0x2e789c; loop_i = loop_i + 0x15) {
    if ((*loop_i & 1) != 0) {
      if (0 < *(int *)(loop_i + 0x10)) {
        *(int *)(loop_i + 0x10) = *(int *)(loop_i + 0x10) + -1;
      }
      if ((*(int *)(loop_i + 0x10) == 0) &&
         ((&g_bss_002e16fc)[(uint)loop_i[10] * 0x1508] != loop_i[1])) {
        event_update_player_dungeon_0275f6();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : event_fn_02769e (Original VA: 0x2769e, Ghidra: FUN_0002769e)
 * Prototype: byte * event_fn_02769e(void);
 * Address  : 0x2769e (Size: 50 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Module event.cpp procedure @ 0x02769e
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * event_fn_02769e(void)

{
  uint arg_eax;
  byte *byte_ptr;
  uint arg_edx;
  
  byte_ptr = &g_bss_002e7091;
  while( true ) {
    if (&g_bss_002e789b < byte_ptr) {
      return (byte *)0x0;
    }
    if ((((*byte_ptr & 1) != 0) && (byte_ptr[10] == arg_edx)) && (byte_ptr[0xb] == arg_eax)) break;
    byte_ptr = byte_ptr + 0x15;
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : event_fn_0276d0 (Original VA: 0x276d0, Ghidra: FUN_000276d0)
 * Prototype: undefined4 event_fn_0276d0(void);
 * Address  : 0x276d0 (Size: 51 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Module event.cpp procedure @ 0x0276d0
 * Callers  : 0 -> 
 * Callees  : 1 -> instance_fn_049eff
 ******************************************************************************/
undefined4 event_fn_0276d0(void)

{
  int arg_eax;
  int arg_edx;
  
  *(undefined2 *)(arg_eax + 0xe4) = *(undefined2 *)(&g_bss_002e707e + arg_edx * 0x15);
  *(undefined2 *)(arg_eax + 0xe6) = *(undefined2 *)(&g_bss_002e7082 + arg_edx * 0x15);
  instance_fn_049eff();
  return 1;
}

/******************************************************************************
 * Function : event_fn_027703 (Original VA: 0x27703, Ghidra: FUN_00027703)
 * Prototype: longlong event_fn_027703(void);
 * Address  : 0x27703 (Size: 67 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module event.cpp procedure @ 0x027703
 * Callers  : 1 -> event_illegal_event_number_created_027390
 * Callees  : 0 -> 
 ******************************************************************************/
longlong event_fn_027703(void)

{
  int val;
  char ch;
  uint arg_edx;
  
  ch = '\x01';
  val = 0x15;
  while( true ) {
    if (0x833 < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (((&g_bss_002e707c)[val] & 1) == 0) break;
    val = val + 0x15;
    ch = ch + '\x01';
  }
  *(char *)(val + 0x2e707d) = ch;
  (&g_bss_002e707c)[val] = (&g_bss_002e707c)[val] | 1;
  return CONCAT44(arg_edx,&g_bss_002e707c + val);
}

/******************************************************************************
 * Function : event_fn_027746 (Original VA: 0x27746, Ghidra: FUN_00027746)
 * Prototype: void event_fn_027746(void);
 * Address  : 0x27746 (Size: 25 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Purpose  : Module event.cpp procedure @ 0x027746
 * Callers  : 1 -> event_update_player_dungeon_0275f6
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void event_fn_027746(void)

{
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : event_fn_02775f (Original VA: 0x2775f, Ghidra: FUN_0002775f)
 * Prototype: void event_fn_02775f(undefined1 param_1,undefined4 param_2);
 * Address  : 0x2775f (Size: 47 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module event.cpp procedure @ 0x02775f
 * Callers  : 3 -> event_illegal_event_number_created_027390, event_fn_0274ad, event_fn_027553
 * Callees  : 0 -> 
 ******************************************************************************/
void event_fn_02775f(undefined1 param_1,undefined4 param_2)

{
  undefined4 uval;
  int arg_eax;
  byte arg_cl;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  *(undefined4 *)(arg_eax + 2) = arg_edx;
  *(undefined1 *)(arg_eax + 10) = param_1;
  *(undefined4 *)(arg_eax + 6) = arg_ebx;
  *(byte *)(arg_eax + 0xb) = arg_cl;
  uval = *(undefined4 *)(&g_data_00191382 + (uint)arg_cl * 0x10);
  *(undefined1 *)(arg_eax + 0x14) = 1;
  *(undefined4 *)(arg_eax + 0x10) = uval;
  *(undefined4 *)(arg_eax + 0xc) = param_2;
  return;
}

/******************************************************************************
 * Function : event_fn_027824 (Original VA: 0x27824, Ghidra: FUN_00027824)
 * Prototype: void event_fn_027824(void);
 * Address  : 0x27824 (Size: 110 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module event.cpp procedure @ 0x027824
 * Callers  : 1 -> event_illegal_event_number_created_027390
 * Callees  : 2 -> event_update_player_dungeon_0275f6, newgui_update_player_view_state_052f78
 ******************************************************************************/
void event_fn_027824(void)

{
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  int val_4;
  int local_1c;
  
  val_4 = -1;
  val_2 = 0xc;
  local_1c = 0x7fffffff;
  val_3 = arg_eax + 0xc;
  do {
    val = *(int *)((int)&g_bss_002e708c + (uint)*(byte *)(val_3 + 0x13a7) * 0x15);
    if ((val < local_1c) && (-1 < val)) {
      val_4 = val_2;
      local_1c = val;
    }
    val_2 = val_2 + -1;
    val_3 = val_3 + -1;
  } while (0 < val_2);
  if (val_4 != -1) {
    event_update_player_dungeon_0275f6();
  }
  newgui_update_player_view_state_052f78();
  return;
}

