/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: scavenge.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 18
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : scavenge_fn_067018 (Original VA: 0x67018, Ghidra: FUN_00067018)
 * Prototype: void scavenge_fn_067018(void);
 * Address  : 0x67018 (Size: 132 bytes)
 * Module   : scavenge.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module scavenge.cpp procedure @ 0x067018
 * Callers  : 5 -> research_update_creature_control_066379, scavenge_take_money_am_supposed_067920, temple_update_creature_control_072fbc, train_take_money_am_supposed_074f40, workshop_update_player_dungeon_0769ea
 * Callees  : 0 -> 
 ******************************************************************************/
void scavenge_fn_067018(void)

{
  return;
}

/******************************************************************************
 * Function : scavenge_fn_06709c (Original VA: 0x6709c, Ghidra: FUN_0006709c)
 * Prototype: undefined4 scavenge_fn_06709c(void);
 * Address  : 0x6709c (Size: 22 bytes)
 * Module   : scavenge.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module scavenge.cpp procedure @ 0x06709c
 * Callers  : 5 -> prison_update_creature_control_065ebd, research_update_creature_control_066379, scavenge_take_money_am_supposed_067920, temple_update_creature_control_072fbc, torture_update_creature_control_074853
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 scavenge_fn_06709c(void)

{
  byte *arg_eax;
  uint arg_edx;
  
  if (((*arg_eax & 1) != 0) && (*(ushort *)(arg_eax + 10) == arg_edx)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : scavenge_fn_0671e9 (Original VA: 0x671e9, Ghidra: FUN_000671e9)
 * Prototype: void scavenge_fn_0671e9(void);
 * Address  : 0x671e9 (Size: 84 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scavenge.cpp procedure @ 0x0671e9
 * Callers  : 1 -> combmove_room_state_016640
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void scavenge_fn_0671e9(void)

{
  bflib_system_io_fn_0e69fc();
  bflib_system_io_fn_0e69fc();
  bflib_system_io_fn_0e69fc();
  return;
}

/******************************************************************************
 * Function : scavenge_process_dungeon_room_06723d (Original VA: 0x6723d, Ghidra: FUN_0006723d)
 * Prototype: int scavenge_process_dungeon_room_06723d(void);
 * Address  : 0x6723d (Size: 83 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> scavenge_update_player_dungeon_067290
 * Callees  : 0 -> 
 ******************************************************************************/
int scavenge_process_dungeon_room_06723d(void)

{
  ushort dungeon_off;
  int arg_eax;
  int room_ptr;
  uint arg_edx;
  int val;
  int val_2;
  
  val = 0;
  val_2 = 0;
  dungeon_off = *(ushort *)(&g_bss_002e0594 + arg_eax * 2 + (arg_edx & 0xff) * 0x1508);
  while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
    val = val + (uint)*(ushort *)(&g_bss_002ddd2b + room_ptr);
    val_2 = val_2 + (uint)*(ushort *)(&g_bss_002ddd29 + room_ptr);
    dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  if (val_2 == 0) {
    return 0;
  }
  return (val << 8) / val_2;
}

/******************************************************************************
 * Function : scavenge_update_player_dungeon_067290 (Original VA: 0x67290, Ghidra: FUN_00067290)
 * Prototype: int scavenge_update_player_dungeon_067290(void);
 * Address  : 0x67290 (Size: 228 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> gen2_fn_037f1b
 * Callees  : 2 -> scavenge_process_dungeon_room_06723d, room_process_dungeon_room_0d11f4
 ******************************************************************************/
int scavenge_update_player_dungeon_067290(void)

{
  byte dungeon_off;
  uint arg_eax;
  int val;
  int val_2;
  uint arg_edx;
  int val_3;
  int arg_ebx;
  
  if (arg_eax < 8) {
    if (arg_eax < 2) {
      if (arg_eax == 0) goto LAB_000672bd;
    }
    else {
      if (arg_eax < 3) {
        val = room_process_dungeon_room_0d11f4();
        val_2 = scavenge_process_dungeon_room_06723d();
        val_3 = val_2 * val >> 0x1f;
        val = (val_2 * val + val_3 * -0x100) - (uint)(val_3 << 7 < 0);
        return (int)(CONCAT44(val >> 0x1f,val >> 8) / 3);
      }
      if (6 < arg_eax) {
LAB_000672bd:
        return -(uint)(byte)(&g_bss_002e0ea3)[(arg_edx & 0xff) * 0x1508 + arg_ebx];
      }
    }
  }
  else {
    if (arg_eax < 9) {
LAB_0006732c:
      dungeon_off = (&g_bss_002e0ea3)[arg_ebx + (arg_edx & 0xff) * 0x1508];
      val = room_process_dungeon_room_0d11f4();
      return ((int)((val + (val >> 0x1f) * -4) - (uint)((val >> 0x1f) << 1 < 0)) >> 2) -
             (uint)dungeon_off;
    }
    if (arg_eax < 0xe) {
      if (0xc < arg_eax) goto LAB_0006732c;
    }
    else {
      if ((arg_eax < 0xf) || (arg_eax < 0x10)) goto LAB_000672bd;
      if (arg_eax != 0x10) {
        return 0;
      }
    }
  }
  dungeon_off = (&g_bss_002e0ea3)[arg_ebx + (arg_edx & 0xff) * 0x1508];
  val = room_process_dungeon_room_0d11f4();
  return val / 3 - (uint)dungeon_off;
}

/******************************************************************************
 * Function : scavenge_fn_067374 (Original VA: 0x67374, Ghidra: FUN_00067374)
 * Prototype: bool scavenge_fn_067374(void);
 * Address  : 0x67374 (Size: 23 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scavenge.cpp procedure @ 0x067374
 * Callers  : 1 -> scavenge_fn_067d91
 * Callees  : 1 -> room_fn_0ce0e4
 ******************************************************************************/
bool scavenge_fn_067374(void)

{
  int arg_eax;
  int val;
  
  val = room_fn_0ce0e4();
  if (val != 0) {
    *(undefined1 *)(arg_eax + 8) = 0x2f;
  }
  return val != 0;
}

/******************************************************************************
 * Function : scavenge_could_find_valid_position_06738b (Original VA: 0x6738b, Ghidra: FUN_0006738b)
 * Prototype: undefined4 scavenge_could_find_valid_position_06738b(void);
 * Address  : 0x6738b (Size: 248 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp lines 61
 * Purpose  : String 'COULD NOT FIND VALID POSITION FOR THING'
 * Callers  : 1 -> scavenge_take_money_am_supposed_067920
 * Callees  : 4 -> person_external_change_state_but_064a5f, room_number_slabs_room_zero_0cc968, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
undefined4 scavenge_could_find_valid_position_06738b(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  int extraout_ECX;
  undefined8 uval;
  undefined1 local_1b;
  undefined1 local_19;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = room_update_slab_subtile_columns_0d0f50();
  val = (int)uval;
  if (val != 0) {
    if (*(short *)(val + 10) != 9) {
      return 0;
    }
    if (*(char *)(val + 3) != *(char *)((int)((ulonglong)uval >> 0x20) + 6)) {
      return 0;
    }
    ch = room_number_slabs_room_zero_0cc968();
    if (ch != '\0') {
      (&g_bss_002e0f14)[*(char *)(extraout_ECX + 6) * 0xa84] =
           (&g_bss_002e0f14)[*(char *)(extraout_ECX + 6) * 0xa84] + 1;
      *(short *)(&g_bss_002e0ed4 +
                (uint)*(byte *)(thing + 0x1a) * 2 + *(char *)(extraout_ECX + 6) * 0x1508) =
           *(short *)(&g_bss_002e0ed4 +
                     (uint)*(byte *)(thing + 0x1a) * 2 + *(char *)(extraout_ECX + 6) * 0x1508) + 1;
      if ((int)*(char *)(thing + 6) != (uint)g_neutral_player_number) { /* thing->owner */
        (&g_bss_002e0f16)[*(char *)(thing + 6) * 0xa84] = /* thing->owner */
             (&g_bss_002e0f16)[*(char *)(thing + 6) * 0xa84] + 1; /* thing->owner */
      }
      *(undefined1 *)(cctrl_ptr + 0x9a) = 8;
      *(undefined1 *)(cctrl_ptr + 0x9b) = *(undefined1 *)(extraout_ECX + 6);
      *(undefined1 *)(cctrl_ptr + 0x9d) = local_1b;
      *(undefined1 *)(cctrl_ptr + 0x9e) = local_19;
      person_external_change_state_but_064a5f();
      return 1;
    }
  }
  LbErrorLog(); /* LbErrorLog("scavenge.cpp", line 61, "SCAVENEGER NOT ON SCAVENGER ROOM") */
  return 0;
}

/******************************************************************************
 * Function : scavenge_could_remove_creature_pool_067483 (Original VA: 0x67483, Ghidra: FUN_00067483)
 * Prototype: longlong scavenge_could_remove_creature_pool_067483(void);
 * Address  : 0x67483 (Size: 250 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp lines 121
 * Purpose  : String 'COULD REMOVE CREATURE FROM POOL'
 * Callers  : 1 -> scavenge_take_money_am_supposed_067920
 * Callees  : 6 -> gen2_trying_remove_an_unavailable_037ee4, inits_told_you_so_create_043bb3, person_update_creature_control_064ae7, room_number_slabs_room_zero_0cc968, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
longlong scavenge_could_remove_creature_pool_067483(void)

{
  char dungeon_off;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if ((((val != 0) && (*(short *)(val + 10) == 9)) &&
      (*(char *)(val + 3) == *(char *)(extraout_ECX + 6))) &&
     (((*(int *)(&g_bss_002ed35d + (uint)*(byte *)(extraout_ECX + 0x1a) * 4) != 0 &&
       (dungeon_off = room_number_slabs_room_zero_0cc968(), dungeon_off != '\0')) &&
      ((val = inits_told_you_so_create_043bb3(), val != 0 && (val = gen2_trying_remove_an_unavailable_037ee4(), val != 0)))))) {
    (&g_bss_002e0f14)[*(char *)(extraout_ECX_00 + 6) * 0xa84] =
         (&g_bss_002e0f14)[*(char *)(extraout_ECX_00 + 6) * 0xa84] + 1;
    person_update_creature_control_064ae7();
    return CONCAT44(arg_edx,1);
  }
  LbErrorLog(); /* LbErrorLog("scavenge.cpp", line 121, "SCAVENEGER NOT ON SCAVENGER ROOM") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : scavenge_update_creature_and_thing_06757d (Original VA: 0x6757d, Ghidra: FUN_0006757d)
 * Prototype: undefined8 scavenge_update_creature_and_thing_06757d(void);
 * Address  : 0x6757d (Size: 740 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> scavenge_take_money_am_supposed_067920
 * Callees  : 1 -> creature_update_player_view_state_085954
 ******************************************************************************/
undefined8 scavenge_update_creature_and_thing_06757d(void)

{
  byte *thing_ptr;
  byte flag;
  int arg_eax;
  uint cctrl_ptr;
  int player_off;
  byte *thing_ptr_2;
  uint player_off_2;
  undefined4 arg_edx;
  uint dungeon_off;
  uint uval;
  undefined8 uval_2;
  byte *local_20;
  uint local_1c;
  
  uval = (uint)*(char *)(arg_eax + 6);
  local_20 = (byte *)0x0;
  dungeon_off = (uint)*(ushort *)(uval * 0x1508 + 0x2e0f98 + (uint)*(byte *)(arg_eax + 0x1a) * 2);
  local_1c = 0x7fffffff;
  cctrl_ptr = g_bss_002e6eb6;
  if (((((dungeon_off != 0) && (thing_ptr_2 = (&g_thing_ptrs)[dungeon_off], (*thing_ptr_2 & 1) != 0)) &&
       (thing_ptr_2[0x1f] == 5)) &&
      ((thing_ptr_2[0x1a] == *(byte *)(arg_eax + 0x1a) && (thing_ptr_2[6] != *(byte *)(arg_eax + 6))))) &&
     (((((dungeon_off = (uint)g_neutral_player_number, uval == dungeon_off ||
         ((player_off_2 = (uint)(char)thing_ptr_2[6], dungeon_off == player_off_2 ||
          (((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << (thing_ptr_2[6] & 0x1f)) == 0)))) ||
        (dungeon_off == player_off_2)) ||
       ((uval == dungeon_off ||
        (((uint)(byte)(&g_player_view_flags)[player_off_2 * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f)) == 0))))
      && (((*thing_ptr_2 & 0x10) == 0 && ((thing_ptr_2[1] & 2) == 0)))))) {
    uval_2 = creature_update_player_view_state_085954();
    thing_ptr_2 = (byte *)((ulonglong)uval_2 >> 0x20);
    cctrl_ptr = g_bss_002e6eb6;
    if (((int)uval_2 == 0) &&
       (((int)(char)thing_ptr_2[6] < (int)(uint)g_bss_002eb542 ||
        (*(short *)((int)&g_bss_0019d0f7 + (char)thing_ptr_2[6] * 0x4ef) != *(short *)(thing_ptr_2 + 0x1b))))) { /* thing->index_or_angle */
      if (thing_ptr_2[7] == 0xe) {
        flag = thing_ptr_2[8];
      }
      else {
        flag = thing_ptr_2[7];
      }
      if (flag != 0x29) {
        if (thing_ptr_2[7] == 0xe) {
          flag = thing_ptr_2[8];
        }
        else {
          flag = thing_ptr_2[7];
        }
        if (flag != 0x28) {
          if (thing_ptr_2[7] == 0xe) {
            flag = thing_ptr_2[8];
          }
          else {
            flag = thing_ptr_2[7];
          }
          if (flag != 0x2b) {
            if (thing_ptr_2[7] == 0xe) {
              flag = thing_ptr_2[8];
            }
            else {
              flag = thing_ptr_2[7];
            }
            if ((flag != 0x2a) &&
               (g_bss_002ed44a <
                (uint)(g_game_turn - *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x3d)))) /* thing->ccontrol_idx */
            goto LAB_0006785a;
          }
        }
      }
    }
  }
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], thing_ptr_2 = local_20, thing_ptr != g_thing_ptrs) {
    if ((((thing_ptr[0x1a] == *(byte *)(arg_eax + 0x1a)) && (thing_ptr[6] != *(byte *)(arg_eax + 6))) &&
        ((*thing_ptr & 0x10) == 0)) &&
       ((((thing_ptr[1] & 2) == 0 && (player_off = creature_update_player_view_state_085954(), player_off == 0)) &&
        (((int)(char)thing_ptr[6] < (int)(uint)g_bss_002eb542 ||
         (*(short *)((int)&g_bss_0019d0f7 + (char)thing_ptr[6] * 0x4ef) != *(short *)(thing_ptr + 0x1b)))))) /* thing->index_or_angle */
       ) {
      if (thing_ptr[7] == 0xe) {
        flag = thing_ptr[8];
      }
      else {
        flag = thing_ptr[7];
      }
      if (flag != 0x29) {
        if (thing_ptr[7] == 0xe) {
          flag = thing_ptr[8];
        }
        else {
          flag = thing_ptr[7];
        }
        if (flag != 0x28) {
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if (flag != 0x2b) {
            if (thing_ptr[7] == 0xe) {
              flag = thing_ptr[8];
            }
            else {
              flag = thing_ptr[7];
            }
            if (((flag != 0x2a) &&
                (g_bss_002ed44a <
                 (uint)(g_game_turn - *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x3d))) /* thing->ccontrol_idx */
                ) && (cctrl_ptr = ((uint)*(ushort *)(&g_bss_002e9130 + (uint)thing_ptr[0x1a] * 0xe6) *
                               (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * /* thing->ccontrol_idx */
                              0x23) / 100 +
                              (uint)*(ushort *)(&g_bss_002e9130 + (uint)thing_ptr[0x1a] * 0xe6),
                     cctrl_ptr < local_1c)) {
              local_20 = thing_ptr;
              local_1c = cctrl_ptr;
            }
          }
        }
      }
    }
    cctrl_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  }
LAB_0006785a:
  return CONCAT44(arg_edx,thing_ptr_2);
}

/******************************************************************************
 * Function : scavenge_update_creature_control_067861 (Original VA: 0x67861, Ghidra: FUN_00067861)
 * Prototype: longlong scavenge_update_creature_control_067861(void);
 * Address  : 0x67861 (Size: 166 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 6 -> moodneed_fn_051374, person_fn_063b6d, person_update_creature_control_064ae7, scavenge_fn_067fa9, room_attempt_add_creature_room_0cd85c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong scavenge_update_creature_control_067861(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 9)) &&
     (*(char *)(val + 3) == *(char *)(extraout_ECX + 6))) {
    val = scavenge_fn_067fa9();
    if (val == 0) {
      if ((int)*(char *)(extraout_ECX_00 + 6) ==
          (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
    }
    else {
      ch = room_attempt_add_creature_room_0cd85c();
      if (ch != '\0') {
        person_update_creature_control_064ae7();
        *(undefined4 *)(cctrl_ptr + 0x82) = 0;
        return CONCAT44(arg_edx,1);
      }
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : scavenge_fn_067907 (Original VA: 0x67907, Ghidra: FUN_00067907)
 * Prototype: undefined8 scavenge_fn_067907(void);
 * Address  : 0x67907 (Size: 25 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Purpose  : Module scavenge.cpp procedure @ 0x067907
 * Callers  : 1 -> scavenge_take_money_am_supposed_067920
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 scavenge_fn_067907(void)

{
  int thing;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val_2 = thing;
  do {
    val = val_2 + 1;
    *(undefined1 *)(val_2 + 0x894) = 0;
    val_2 = val;
  } while (val != thing + 0x20); /* thing->model */
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : scavenge_take_money_am_supposed_067920 (Original VA: 0x67920, Ghidra: FUN_00067920)
 * Prototype: undefined8 scavenge_take_money_am_supposed_067920(void);
 * Address  : 0x67920 (Size: 1137 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp lines 347
 * Purpose  : String 'CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DU'
 * Callers  : 1 -> scavenge_fn_067d9f
 * Callees  : 14 -> dungeon_remove_reserve_023868, event_illegal_event_number_created_027390, inits_allocate_dynamic_light_shot_0444a9, moodneed_fn_051374, person_fn_063b6d, person_external_change_state_but_064a5f, scavenge_fn_067018, scavenge_fn_06709c ...
 ******************************************************************************/
undefined8 scavenge_take_money_am_supposed_067920(void)

{
  int *int_ptr;
  ushort uval;
  byte *thing_ptr;
  char ch;
  int thing;
  int thing_ptr_2;
  undefined4 uval_2;
  int extraout_ECX;
  byte flag;
  undefined4 arg_edx;
  int extraout_EDX;
  int val;
  uint cctrl_ptr;
  uint uval_3;
  uint *word_ptr;
  uint *word_ptr_2;
  uint uval_4;
  undefined8 uval_5;
  uint uStack_28;
  uint local_24;
  int local_20;
  undefined2 *local_1c;
  
  word_ptr = &local_24;
  word_ptr_2 = &local_24;
  local_1c = &g_dungeons + *(char *)(thing + 6) * 0xa84; /* thing->owner */
  local_20 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uStack_28 = 0x67969;
  thing_ptr_2 = scavenge_fn_06709c();
  if (thing_ptr_2 != 0) {
    uStack_28 = 0x67978;
    thing_ptr_2 = scavenge_fn_067fa9();
    if (thing_ptr_2 != 0) {
      if (*(int *)(local_1c + 0x448) != g_game_turn) {
        uStack_28 = 0x6799c;
        scavenge_fn_067907();
        *(int *)(extraout_EDX + 0x890) = g_game_turn;
      }
      uStack_28 = 0x679d5;
      scavenge_fn_067018();
      uStack_28 = 0x679ee;
      uval_5 = scavenge_update_creature_and_thing_06757d();
      val = (int)((ulonglong)uval_5 >> 0x20);
      thing_ptr_2 = (int)uval_5;
      if (thing_ptr_2 == 0) {
        thing_ptr_2 = (uint)*(byte *)(thing + 0x1a) * 4;
        if ((*(int *)(&g_bss_002ed35d + thing_ptr_2) != 0) &&
           ((int)(uint)*(byte *)((int)local_1c + 0x919) < *(int *)(local_1c + 0x82e))) {
          int_ptr = (int *)((int)local_1c + thing_ptr_2 + 0x98f);
          *int_ptr = *int_ptr + val;
          if (*(int *)((int)local_1c + (uint)*(byte *)(thing + 0x1a) * 4 + 0x98f) <=
              (int)((((uint)*(ushort *)(&g_bss_002e9130 + (uint)*(byte *)(thing + 0x1a) * 0xe6) *
                      (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                     100 + (uint)*(ushort *)(&g_bss_002e9130 + (uint)*(byte *)(thing + 0x1a) * 0xe6))
                   * 0x100)) goto LAB_00067be4;
          uStack_28 = 0x67cf2;
          scavenge_could_remove_creature_pool_067483();
          uval_3 = (uint)*(byte *)(thing + 0x1a);
          uval_4 = (uint)*(ushort *)(&g_bss_002e9130 + uval_3 * 0xe6);
          cctrl_ptr = (uval_4 * *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                  100;
LAB_00067bd3:
          int_ptr = (int *)((int)local_1c + uval_3 * 4 + 0x98f);
          *int_ptr = *int_ptr + (cctrl_ptr + uval_4) * -0x100;
          word_ptr_2 = word_ptr;
          goto LAB_00067be4;
        }
        if ((&g_bss_002e915f)[(uint)*(byte *)(thing + 0x1a) * 0xe6] != '\0') {
          uval_2 = 0;
          *(int *)((int)local_1c + 0x1485) = *(int *)((int)local_1c + 0x1485) + 1;
          goto LAB_0006785a;
        }
      }
      else {
        if ((int)*(char *)(thing_ptr_2 + 6) == (uint)g_neutral_player_number) { /* thing->owner */
LAB_00067a3d:
          cctrl_ptr = (uint)*(byte *)(thing + 0x1a);
          if (*(short *)(thing_ptr_2 + 0x1b) == *(short *)((int)local_1c + cctrl_ptr * 2 + 0xa0f)) { /* thing->index_or_angle */
            int_ptr = (int *)((int)local_1c + cctrl_ptr * 4 + 0x98f);
            *int_ptr = *int_ptr + val;
            word_ptr = &local_24;
          }
          else {
            *(int *)((int)local_1c + cctrl_ptr * 4 + 0x98f) = val;
            if (((*(short *)((int)local_1c + (uint)*(byte *)(thing + 0x1a) * 2 + 0xa0f) != 0) &&
                (thing_ptr = (byte *)(&g_thing_ptrs)
                                  [*(ushort *)
                                    ((int)local_1c + (uint)*(byte *)(thing + 0x1a) * 2 + 0xa0f)],
                (*thing_ptr & 1) != 0)) && (thing_ptr[0x1a] == *(byte *)(thing + 0x1a))) {
              if (thing_ptr[7] == 0xe) {
                flag = thing_ptr[8];
              }
              else {
                flag = thing_ptr[7];
              }
              if (flag == 0x8e) {
                uStack_28 = 0x67aba;
                person_fn_063b6d();
              }
            }
            *(undefined2 *)((int)local_1c + (uint)*(byte *)(thing + 0x1a) * 2 + 0xa0f) =
                 *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
            if ((int)*(char *)(thing_ptr_2 + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] /* thing->owner */
               ) {
              uStack_28 = 0x67afe;
              moodneed_fn_051374();
            }
            uStack_28 = (uint)*(ushort *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
            word_ptr = &uStack_28;
            event_illegal_event_number_created_027390();
          }
          if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
            ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
          }
          else {
            ch = *(char *)(thing_ptr_2 + 7);
          }
          if ((ch != -0x72) && ((int)*(char *)(thing_ptr_2 + 6) != (uint)g_neutral_player_number)) { /* thing->owner */
            *(undefined4 *)((int)word_ptr + -4) = 0x67b4f;
            person_external_change_state_but_064a5f();
          }
          word_ptr_2 = word_ptr;
          if ((int)((((uint)*(ushort *)(&g_bss_002e9130 + (uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6) *
                      (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                     100 + (uint)*(ushort *)(&g_bss_002e9130 + (uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6))
                   * 0x100) < *(int *)((int)local_1c + (uint)*(byte *)(thing + 0x1a) * 4 + 0x98f))
          {
            *(undefined4 *)((int)word_ptr + -4) = 0x67ba4;
            scavenge_could_find_valid_position_06738b();
            uval_4 = (uint)*(ushort *)(&g_bss_002e9130 + (uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6);
            cctrl_ptr = (uint)((longlong)
                           (ulonglong)
                           (uval_4 * *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x23) * /* thing->ccontrol_idx */
                           0x23) / (longlong)extraout_ECX);
            uval_3 = (uint)*(byte *)(thing + 0x1a);
            goto LAB_00067bd3;
          }
        }
        else {
          cctrl_ptr = (uint)*(byte *)(thing + 0x1a);
          local_24 = (uint)(byte)(&g_bss_002e0e3d)[*(char *)(thing_ptr_2 + 6) * 0x1508 + cctrl_ptr] * 2; /* thing->owner */
          flag = *(byte *)((int)local_1c + cctrl_ptr + 0x894);
          *(byte *)((int)local_1c + cctrl_ptr + 0x894) = flag + 1;
          word_ptr_2 = &local_24;
          if (local_24 <= flag) goto LAB_00067a3d;
        }
LAB_00067be4:
        thing_ptr_2 = *(int *)(local_20 + 0x82);
        *(int *)(local_20 + 0x82) = thing_ptr_2 + 1;
        if (g_bss_002ed446 < thing_ptr_2) {
          *(int *)(local_20 + 0x82) = *(int *)(local_20 + 0x82) - g_bss_002ed446;
          uval = *(ushort *)(&g_bss_002e912e + (uint)*(byte *)(thing + 0x1a) * 0xe6);
          *(undefined4 *)((int)word_ptr_2 + -4) = 0x67c31;
          thing_ptr_2 = dungeon_remove_reserve_023868();
          if (thing_ptr_2 < 0) {
            *(undefined4 *)((int)word_ptr_2 + -4) = 0x67c49;
            LbErrorLog(); /* LbErrorLog("scavenge.cpp", line 347, "CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON") */
          }
          *(undefined4 *)((int)word_ptr_2 + -4) = 0x67c5a;
          thing_ptr_2 = inits_allocate_dynamic_light_shot_0444a9();
          if (thing_ptr_2 != 0) {
            *(uint *)(thing_ptr_2 + 0x13) = (uint)uval; /* thing->anim_sprite */
          }
        }
      }
      uval_2 = 0;
      goto LAB_0006785a;
    }
    if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) { /* thing->owner */
      uStack_28 = 0x67d80;
      moodneed_fn_051374();
    }
  }
  uStack_28 = 0x67d87;
  person_fn_063b6d();
  uval_2 = 1;
LAB_0006785a:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : scavenge_fn_067d91 (Original VA: 0x67d91, Ghidra: FUN_00067d91)
 * Prototype: bool scavenge_fn_067d91(void);
 * Address  : 0x67d91 (Size: 14 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Purpose  : Module scavenge.cpp procedure @ 0x067d91
 * Callers  : 1 -> scavenge_fn_067d9f
 * Callees  : 1 -> scavenge_fn_067374
 ******************************************************************************/
bool scavenge_fn_067d91(void)

{
  int val;
  
  val = scavenge_fn_067374();
  return val != 0;
}

/******************************************************************************
 * Function : scavenge_fn_067d9f (Original VA: 0x67d9f, Ghidra: FUN_00067d9f)
 * Prototype: longlong scavenge_fn_067d9f(void);
 * Address  : 0x67d9f (Size: 101 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Purpose  : Module scavenge.cpp procedure @ 0x067d9f
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, scavenge_take_money_am_supposed_067920, scavenge_fn_067d91, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong scavenge_fn_067d9f(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if ((((val != 0) && (*(short *)(val + 10) == 9)) &&
      (*(short *)(val + 1) == *(short *)(extraout_ECX + 0x7e))) &&
     (*(char *)(val + 3) == *(char *)(arg_eax + 6))) {
    val = scavenge_take_money_am_supposed_067920();
    if (val == 0) {
      scavenge_fn_067d91();
    }
    return CONCAT44(arg_edx,1);
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : scavenged_room_disappeared_valid_067e04 (Original VA: 0x67e04, Ghidra: FUN_00067e04)
 * Prototype: undefined8 scavenged_room_disappeared_valid_067e04(void);
 * Address  : 0x67e04 (Size: 373 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp lines 464
 * Purpose  : String 'Scavenged room disappeared or no valid position???'
 * Callers  : 0 -> 
 * Callees  : 9 -> anger_fn_010ad6, effect_allocate_light_effect_024998, moodneed_fn_051374, person_update_creature_control_063a25, person_update_creature_control_064ae7, creature_how_hero_have_tend_08608c, move_fn_0b3b10, room_number_slabs_room_zero_0cc968 ...
 ******************************************************************************/
undefined8 scavenged_room_disappeared_valid_067e04(void)

{
  char ch;
  undefined4 uval;
  int thing;
  int extraout_ECX;
  int extraout_ECX_00;
  int cctrl_ptr;
  undefined4 arg_edx;
  int val;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(char *)(cctrl_ptr + 0x9a) = *(char *)(cctrl_ptr + 0x9a) + -1;
  if (*(char *)(cctrl_ptr + 0x9a) < '\x01') {
    if (*(short *)(&g_room_slabs_count +
                  (uint)(byte)(&g_bss_002d33c8)
                              [((&g_subtile_to_slab_lut)[(uint)*(ushort *)(cctrl_ptr + 0x9d) % 0x100] +
                               (&g_subtile_to_slab_lut)[(int)(uint)*(ushort *)(cctrl_ptr + 0x9d) >> 8] * 0x55) *
                               6] * 0x45) == 9) {
      ch = room_number_slabs_room_zero_0cc968();
      if (ch != '\0') {
        move_fn_0b3b10();
        anger_fn_010ad6();
        val = (int)g_my_player_word._3_1_;
        (&g_bss_002e0f14)[(uint)*(byte *)(extraout_ECX + 0x9b) * 0xa84] =
             (&g_bss_002e0f14)[(uint)*(byte *)(extraout_ECX + 0x9b) * 0xa84] + 1;
        cctrl_ptr = extraout_ECX;
        if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[val * 0x4ef]) { /* thing->owner */
          moodneed_fn_051374();
          cctrl_ptr = extraout_ECX_00;
        }
        *(undefined1 *)(cctrl_ptr + 0x9c) = *(undefined1 *)(thing + 6); /* thing->owner */
        person_update_creature_control_063a25();
        person_update_creature_control_064ae7();
        goto LAB_00067c65;
      }
    }
    LbErrorLog(); /* LbErrorLog("scavenge.cpp", line 464, "Scavenged room disappeared or no valid position???") */
    creature_how_hero_have_tend_08608c(0,0);
    uval = 0xffffffff;
  }
  else {
    if (*(char *)(cctrl_ptr + 0x9a) == '\a') {
      effect_allocate_light_effect_024998();
    }
LAB_00067c65:
    uval = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : scavenge_fn_067f79 (Original VA: 0x67f79, Ghidra: FUN_00067f79)
 * Prototype: longlong scavenge_fn_067f79(void);
 * Address  : 0x67f79 (Size: 48 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scavenge.cpp procedure @ 0x067f79
 * Callers  : 0 -> 
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
longlong scavenge_fn_067f79(void)

{
  uint arg_edx;
  
  effect_allocate_light_effect_024998();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : scavenge_fn_067fa9 (Original VA: 0x67fa9, Ghidra: FUN_00067fa9)
 * Prototype: undefined8 scavenge_fn_067fa9(void);
 * Address  : 0x67fa9 (Size: 42 bytes)
 * Module   : scavenge.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module scavenge.cpp procedure @ 0x067fa9
 * Callers  : 3 -> evil_update_creature_control_02796f, scavenge_update_creature_control_067861, scavenge_take_money_am_supposed_067920
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 scavenge_fn_067fa9(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,(uint)((int)(uint)*(ushort *)
                                            (&g_bss_002e912e + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6)
                               < (int)(&g_bss_002e1082)[*(char *)(arg_eax + 6) * 0x542]));
}

/******************************************************************************
 * Function : scavenge_update_creature_and_thing_067fd3 (Original VA: 0x67fd3, Ghidra: FUN_00067fd3)
 * Prototype: longlong scavenge_update_creature_and_thing_067fd3(void);
 * Address  : 0x67fd3 (Size: 201 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> sound_fn_06e538, sound_fn_06f865, move_fn_0b3be4
 ******************************************************************************/
longlong scavenge_update_creature_and_thing_067fd3(void)

{
  ushort thing_ptr;
  short short_val;
  int arg_eax;
  int val;
  uint arg_edx;
  uint thing_ptr_2;
  undefined4 *word_ptr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  thing_ptr = (&g_bss_002e05b6)[*(char *)(arg_eax + 6) * 0xa84];
  for (thing_ptr_2 = g_action_random_seed % (uint)(byte)(&g_bss_002e0ea2)[*(char *)(arg_eax + 6) * 0x1508];
      (g_thing_ptrs < (&g_thing_ptrs)[thing_ptr] && (-1 < (int)thing_ptr_2)); thing_ptr_2 = thing_ptr_2 - 1) {
    thing_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[thing_ptr] + 100)] + 0x1f);
  }
  uStack_14 = 0x68050;
  short_val = move_fn_0b3be4();
  if (0 < short_val) {
    *(undefined1 *)(arg_eax + 8) = 0x8e;
    uStack_14 = 0x68069;
    val = sound_fn_06f865();
    if (val == 0) {
      uStack_14 = 0x100;
      uStack_18 = 2;
      uStack_1c = 1;
      word_ptr = &uStack_20;
      uStack_20 = 3;
      sound_fn_06e538();
    }
    return CONCAT44(*(undefined4 *)((int)word_ptr + 4),1);
  }
  return (ulonglong)arg_edx << 0x20;
}

