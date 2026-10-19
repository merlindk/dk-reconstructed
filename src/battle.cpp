/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: battle.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 17
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : battle_attempt_create_battle_null_013bae (Original VA: 0x13bae, Ghidra: FUN_00013bae)
 * Prototype: void battle_attempt_create_battle_null_013bae(void);
 * Address  : 0x13bae (Size: 239 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 28
 * Purpose  : String 'Attempt to create battle with null target!'
 * Callers  : 3 -> combtool_creature_combat_already_adding_0178ed, combtool_creature_combat_already_adding_01798e, combtool_creature_combat_already_waiting_017a2f
 * Callees  : 6 -> battle_update_creature_and_thing_013c9d, battle_creature_has_been_removed_013d3b, battle_horrible_thing_battle_01433e, battle_update_creature_and_thing_01443f, battle_has_members_after_0144d2, LbErrorLog
 ******************************************************************************/
void battle_attempt_create_battle_null_013bae(void)

{
  char ch;
  int thing;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  
  if ((arg_edx != g_thing_ptrs) && (arg_edx != 0)) {
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2f7) != '\0') { /* thing->ccontrol_idx */
      battle_creature_has_been_removed_013d3b();
      arg_edx = extraout_ECX;
    }
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2f7) == '\0') { /* thing->ccontrol_idx */
      if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x2f7) == '\0') &&
         (ch = battle_horrible_thing_battle_01433e(), ch == '\0')) goto LAB_00013bd3;
      battle_update_creature_and_thing_013c9d();
      if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x2f7) == '\0') {
        battle_update_creature_and_thing_013c9d();
      }
      battle_update_creature_and_thing_01443f();
    }
    battle_has_members_after_0144d2();
    return;
  }
LAB_00013bd3:
  LbErrorLog(); /* LbErrorLog("battle.cpp", line 28, "Attempt to create battle with null target!") */
  return;
}

/******************************************************************************
 * Function : battle_update_creature_and_thing_013c9d (Original VA: 0x13c9d, Ghidra: FUN_00013c9d)
 * Prototype: void battle_update_creature_and_thing_013c9d(void);
 * Address  : 0x13c9d (Size: 158 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> battle_attempt_create_battle_null_013bae
 * Callees  : 0 -> 
 ******************************************************************************/
void battle_update_creature_and_thing_013c9d(void)

{
  undefined2 uval;
  int cctrl_ptr;
  int thing;
  ushort arg_dx;
  int packet_off;
  undefined1 local_10;
  
  packet_off = (uint)arg_dx * 0x11;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = *(undefined2 *)(&g_bss_002ed45f + packet_off);
  *(undefined2 *)(cctrl_ptr + 0x2f3) = 0;
  *(undefined2 *)(cctrl_ptr + 0x2f5) = uval;
  local_10 = (undefined1)arg_dx;
  *(undefined1 *)(cctrl_ptr + 0x2f7) = local_10;
  if (*(short *)(&g_bss_002ed45d + packet_off) == 0) {
    *(undefined2 *)(&g_bss_002ed45d + packet_off) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
  }
  if (*(short *)(&g_bss_002ed45f + (uint)arg_dx * 0x11) != 0) {
    *(undefined2 *)
     ((&g_creature_ctrl_ptrs)
      [*(ushort *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002ed45f + (uint)arg_dx * 0x11)] + 100)] + 0x2f3)
         = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
  }
  *(undefined2 *)(&g_bss_002ed45f + (uint)arg_dx * 0x11) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
  *(int *)(&g_bss_002ed450 + (uint)arg_dx * 0x11) = *(int *)(&g_bss_002ed450 + (uint)arg_dx * 0x11) + 1;
  return;
}

/******************************************************************************
 * Function : battle_creature_has_been_removed_013d3b (Original VA: 0x13d3b, Ghidra: FUN_00013d3b)
 * Prototype: void battle_creature_has_been_removed_013d3b(void);
 * Address  : 0x13d3b (Size: 224 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 116
 * Purpose  : String 'Creature has been removed due to death'
 * Callers  : 3 -> battle_attempt_create_battle_null_013bae, battle_hmmm_attempt_remove_creature_013e1b, battle_has_members_after_0144d2
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void battle_creature_has_been_removed_013d3b(void)

{
  int thing;
  int extraout_ECX;
  int cctrl_ptr;
  uint uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = (uint)*(byte *)(cctrl_ptr + 0x2f7);
  if (*(char *)(thing + 0x1f) != '\x05') { /* thing->class_id */
    LbErrorLog(); /* LbErrorLog("battle.cpp", line 116, "Creature has been removed due to death") */
    cctrl_ptr = extraout_ECX;
  }
  if (*(ushort *)(cctrl_ptr + 0x2f5) == 0) {
    *(undefined2 *)(&g_bss_002ed45d + uval * 0x11) = *(undefined2 *)(cctrl_ptr + 0x2f3);
  }
  else {
    *(undefined2 *)
     ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x2f5)] + 100)] + 0x2f3) =
         *(undefined2 *)(cctrl_ptr + 0x2f3);
  }
  if (*(ushort *)(cctrl_ptr + 0x2f3) == 0) {
    *(undefined2 *)(&g_bss_002ed45f + uval * 0x11) = *(undefined2 *)(cctrl_ptr + 0x2f5);
  }
  else {
    *(undefined2 *)
     ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x2f3)] + 100)] + 0x2f5) =
         *(undefined2 *)(cctrl_ptr + 0x2f5);
  }
  *(undefined1 *)(cctrl_ptr + 0x2f7) = 0;
  *(undefined2 *)(cctrl_ptr + 0x2f3) = 0;
  *(undefined2 *)(cctrl_ptr + 0x2f5) = 0;
  *(int *)(&g_bss_002ed450 + uval * 0x11) = *(int *)(&g_bss_002ed450 + uval * 0x11) + -1;
  return;
}

/******************************************************************************
 * Function : battle_hmmm_attempt_remove_creature_013e1b (Original VA: 0x13e1b, Ghidra: FUN_00013e1b)
 * Prototype: void battle_hmmm_attempt_remove_creature_013e1b(void);
 * Address  : 0x13e1b (Size: 132 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 161, 200
 * Purpose  : String 'Hmmm... Attempt to remove creature from battle when he isn't'
 * Callers  : 3 -> battle_update_creature_control_014322, combtool_combat_count_incorrect_017a7f, combtool_fight_count_incorrect_017c2f
 * Callees  : 4 -> battle_creature_has_been_removed_013d3b, battle_fn_014083, battle_has_members_after_0144d2, LbErrorLog
 ******************************************************************************/
void battle_hmmm_attempt_remove_creature_013e1b(void)

{
  char ch;
  int thing;
  int extraout_EDX;
  byte loop_i;
  
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2f7) == '\0') { /* thing->ccontrol_idx */
    LbErrorLog(); /* LbErrorLog("battle.cpp", line 161, "Hmmm... Attempt to remove creature from battle when he isn't in one") */
  }
  else {
    battle_creature_has_been_removed_013d3b();
    battle_has_members_after_0144d2();
  }
  for (loop_i = 0; loop_i < 100; loop_i = loop_i + 1) {
    if ((&g_bss_002e7087)[(uint)loop_i * 0x15] == '\x02') {
      ch = battle_fn_014083();
      if (ch == '\0') {
        *(undefined4 *)(&g_bss_002e707e + extraout_EDX) = 0;
        *(undefined4 *)(&g_bss_002e7082 + extraout_EDX) = 0;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : battle_fn_014083 (Original VA: 0x14083, Ghidra: FUN_00014083)
 * Prototype: ulonglong battle_fn_014083(void);
 * Address  : 0x14083 (Size: 52 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Module battle.cpp procedure @ 0x014083
 * Callers  : 3 -> battle_hmmm_attempt_remove_creature_013e1b, battle_empty_battle_014127, newgui_undefined_event_type_05c408
 * Callees  : 1 -> battle_update_creature_and_thing_0142cc
 ******************************************************************************/
ulonglong battle_fn_014083(void)

{
  int arg_eax;
  undefined4 arg_edx;
  byte flag;
  
  flag = 1;
  do {
    if (0x20 < flag) {
      return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
    }
    arg_eax = (uint)flag * 0x11;
    if (*(int *)(&g_bss_002ed450 + arg_eax) != 0) {
      arg_eax = battle_update_creature_and_thing_0142cc();
      if ((char)arg_eax != '\0') {
        return CONCAT44(arg_edx,CONCAT31((int3)((uint)arg_eax >> 8),flag));
      }
    }
    flag = flag + 1;
  } while( true );
}

/******************************************************************************
 * Function : battle_fn_0140b7 (Original VA: 0x140b7, Ghidra: FUN_000140b7)
 * Prototype: ulonglong battle_fn_0140b7(void);
 * Address  : 0x140b7 (Size: 53 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Module battle.cpp procedure @ 0x0140b7
 * Callers  : 1 -> battle_empty_battle_0141d5
 * Callees  : 1 -> battle_update_creature_and_thing_0142cc
 ******************************************************************************/
ulonglong battle_fn_0140b7(void)

{
  int arg_eax;
  undefined4 arg_edx;
  byte flag;
  
  flag = 0x20;
  do {
    if (flag == 0) {
      return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
    }
    arg_eax = (uint)flag * 0x11;
    if (*(int *)(&g_bss_002ed450 + arg_eax) != 0) {
      arg_eax = battle_update_creature_and_thing_0142cc();
      if ((char)arg_eax != '\0') {
        return CONCAT44(arg_edx,CONCAT31((int3)((uint)arg_eax >> 8),flag));
      }
    }
    flag = flag - 1;
  } while( true );
}

/******************************************************************************
 * Function : battle_update_player_dungeon_0140ec (Original VA: 0x140ec, Ghidra: FUN_000140ec)
 * Prototype: undefined1 battle_update_player_dungeon_0140ec(void);
 * Address  : 0x140ec (Size: 59 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> battle_fn_014188, battle_fn_014235
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 battle_update_player_dungeon_0140ec(void)

{
  byte arg_al;
  byte flag;
  ushort arg_dx;
  
  flag = 0;
  while( true ) {
    if (2 < flag) {
      return 0;
    }
    if ((arg_dx != 0) && (arg_dx == (byte)(&g_bss_002e16fd)[(uint)flag + (uint)arg_al * 0x1508])) break;
    flag = flag + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : battle_empty_battle_014127 (Original VA: 0x14127, Ghidra: FUN_00014127)
 * Prototype: uint battle_empty_battle_014127(void);
 * Address  : 0x14127 (Size: 97 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 336
 * Purpose  : String 'Empty Battle'
 * Callers  : 1 -> battle_fn_014188
 * Callees  : 3 -> battle_fn_014083, battle_update_creature_and_thing_0142cc, LbErrorLog
 ******************************************************************************/
uint battle_empty_battle_014127(void)

{
  char ch;
  uint uval;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint arg_edx;
  
  if ((arg_edx & 0xffff) < 0x1f) {
    uval = arg_edx & 0xff;
    while (uval = (uint)(byte)((char)uval + 1), uval < 0x21) {
      if (*(int *)(&g_bss_002ed450 + uval * 0x11) != 0) {
        if (*(short *)(&g_bss_002ed45d + uval * 0x11) == 0) {
          LbErrorLog(); /* LbErrorLog("battle.cpp", line 336, "Empty Battle") */
          uval = extraout_ECX;
        }
        else {
          ch = battle_update_creature_and_thing_0142cc();
          uval = extraout_ECX_00;
          if (ch != '\0') {
            return extraout_ECX_00 & 0xff;
          }
        }
      }
    }
  }
  uval = battle_fn_014083();
  return uval;
}

/******************************************************************************
 * Function : battle_fn_014188 (Original VA: 0x14188, Ghidra: FUN_00014188)
 * Prototype: char battle_fn_014188(void);
 * Address  : 0x14188 (Size: 77 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Module battle.cpp procedure @ 0x014188
 * Callers  : 3 -> newgui_update_player_dungeon_05a6a6, newgui_update_player_dungeon_05a705, newgui_update_player_dungeon_05d032
 * Callees  : 2 -> battle_update_player_dungeon_0140ec, battle_empty_battle_014127
 ******************************************************************************/
char battle_fn_014188(void)

{
  char ch;
  char ch_2;
  char local_10;
  
  ch = battle_empty_battle_014127();
  local_10 = ch;
  do {
    ch_2 = battle_update_player_dungeon_0140ec();
    if (ch_2 == '\0') {
      return local_10;
    }
    local_10 = battle_empty_battle_014127();
  } while (local_10 != ch);
  return '\0';
}

/******************************************************************************
 * Function : battle_empty_battle_0141d5 (Original VA: 0x141d5, Ghidra: FUN_000141d5)
 * Prototype: uint battle_empty_battle_0141d5(void);
 * Address  : 0x141d5 (Size: 96 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 388
 * Purpose  : String 'Empty Battle'
 * Callers  : 1 -> battle_fn_014235
 * Callees  : 3 -> battle_fn_0140b7, battle_update_creature_and_thing_0142cc, LbErrorLog
 ******************************************************************************/
uint battle_empty_battle_0141d5(void)

{
  char ch;
  uint uval;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint arg_edx;
  
  if (1 < (arg_edx & 0xffff)) {
    uval = arg_edx & 0xff;
    while (uval = (uint)(byte)((char)uval - 1), uval != 0) {
      if (*(int *)(&g_bss_002ed450 + uval * 0x11) != 0) {
        if (*(short *)(&g_bss_002ed45d + uval * 0x11) == 0) {
          LbErrorLog(); /* LbErrorLog("battle.cpp", line 388, "Empty Battle") */
          uval = extraout_ECX;
        }
        else {
          ch = battle_update_creature_and_thing_0142cc();
          uval = extraout_ECX_00;
          if (ch != '\0') {
            return extraout_ECX_00 & 0xff;
          }
        }
      }
    }
  }
  uval = battle_fn_0140b7();
  return uval;
}

/******************************************************************************
 * Function : battle_fn_014235 (Original VA: 0x14235, Ghidra: FUN_00014235)
 * Prototype: undefined1 battle_fn_014235(void);
 * Address  : 0x14235 (Size: 75 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Module battle.cpp procedure @ 0x014235
 * Callers  : 2 -> newgui_update_player_dungeon_05a6a6, newgui_update_player_dungeon_05a705
 * Callees  : 2 -> battle_update_player_dungeon_0140ec, battle_empty_battle_0141d5
 ******************************************************************************/
undefined1 battle_fn_014235(void)

{
  char ch;
  char ch_2;
  undefined1 extraout_CH;
  
  ch = battle_empty_battle_0141d5();
  do {
    ch_2 = battle_update_player_dungeon_0140ec();
    if (ch_2 == '\0') {
      return extraout_CH;
    }
    ch_2 = battle_empty_battle_0141d5();
  } while (ch_2 != ch);
  return 0;
}

/******************************************************************************
 * Function : battle_process_thing_entity_014280 (Original VA: 0x14280, Ghidra: FUN_00014280)
 * Prototype: undefined4 battle_process_thing_entity_014280(void);
 * Address  : 0x14280 (Size: 76 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> instance_fn_049eff
 ******************************************************************************/
undefined4 battle_process_thing_entity_014280(void)

{
  int arg_eax;
  uint arg_edx;
  int packet_off;
  
  packet_off = (arg_edx & 0xffff) * 0x11;
  *(undefined2 *)(arg_eax + 0xe4) =
       *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002ed45d + packet_off)] + 0xd);
  *(undefined2 *)(arg_eax + 0xe6) =
       *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002ed45d + packet_off)] + 0xf);
  instance_fn_049eff();
  return 1;
}

/******************************************************************************
 * Function : battle_update_creature_and_thing_0142cc (Original VA: 0x142cc, Ghidra: FUN_000142cc)
 * Prototype: int battle_update_creature_and_thing_0142cc(void);
 * Address  : 0x142cc (Size: 86 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 4 -> battle_fn_014083, battle_fn_0140b7, battle_empty_battle_014127, battle_empty_battle_0141d5
 * Callees  : 0 -> 
 ******************************************************************************/
int battle_update_creature_and_thing_0142cc(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  bool flag;
  byte arg_al;
  uint3 uval;
  uint arg_edx;
  
  cctrl_ptr = *(ushort *)(&g_bss_002ed45d + (arg_edx & 0xffff) * 0x11);
  flag = false;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    uval = (uint3)(thing_ptr >> 8);
    if (thing_ptr <= g_thing_ptrs) {
      return (uint)uval << 8;
    }
    if ((int)*(char *)(thing_ptr + 6) == (uint)arg_al) { /* thing->owner */
      flag = true;
    }
    if (flag) break;
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f3); /* thing->ccontrol_idx */
  }
  return CONCAT31(uval,1);
}

/******************************************************************************
 * Function : battle_update_creature_control_014322 (Original VA: 0x14322, Ghidra: FUN_00014322)
 * Prototype: void battle_update_creature_control_014322(void);
 * Address  : 0x14322 (Size: 28 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combtool_update_creature_control_01836b
 * Callees  : 1 -> battle_hmmm_attempt_remove_creature_013e1b
 ******************************************************************************/
void battle_update_creature_control_014322(void)

{
  int thing;
  
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2f7) != '\0') { /* thing->ccontrol_idx */
    battle_hmmm_attempt_remove_creature_013e1b();
  }
  return;
}

/******************************************************************************
 * Function : battle_horrible_thing_battle_01433e (Original VA: 0x1433e, Ghidra: FUN_0001433e)
 * Prototype: char battle_horrible_thing_battle_01433e(void);
 * Address  : 0x1433e (Size: 257 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 529
 * Purpose  : String 'Horrible 0 thing in battle.'
 * Callers  : 1 -> battle_attempt_create_battle_null_013bae
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
char battle_horrible_thing_battle_01433e(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  char ch;
  int arg_edx;
  int val;
  int val_2;
  int local_18;
  
  local_18 = 1;
  val = 0x11;
  ch = '\0';
  do {
    if (0x20 < local_18) {
      return ch;
    }
    if (*(int *)(&g_bss_002ed450 + val) == 0) {
      if (ch == '\0') {
        ch = (char)local_18;
      }
    }
    else {
      val_2 = 0;
      cctrl_ptr = *(ushort *)(&g_bss_002ed45d + val);
      while ((thing_ptr = (&g_thing_ptrs)[cctrl_ptr], val_2 < 200 && (g_thing_ptrs < thing_ptr))) {
        if (thing_ptr == 0) goto LAB_000143c6;
        if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) != '\0') && /* thing->ccontrol_idx */
           ((((&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xa2)] == /* thing->ccontrol_idx */
              arg_eax ||
             ((&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xa2)] == /* thing->ccontrol_idx */
              arg_edx)) && (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f7) != '\0')))) /* thing->ccontrol_idx */
        {
          return *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f7); /* thing->ccontrol_idx */
        }
        val_2 = val_2 + 1;
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f3); /* thing->ccontrol_idx */
      }
      if (val_2 == 200) {
LAB_000143c6:
        LbErrorLog(); /* LbErrorLog("battle.cpp", line 529, "Horrible 0 thing in battle.") */
        return '\0';
      }
    }
    local_18 = local_18 + 1;
    val = val + 0x11;
  } while( true );
}

/******************************************************************************
 * Function : battle_update_creature_and_thing_01443f (Original VA: 0x1443f, Ghidra: FUN_0001443f)
 * Prototype: void battle_update_creature_and_thing_01443f(void);
 * Address  : 0x1443f (Size: 147 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> battle_attempt_create_battle_null_013bae
 * Callees  : 1 -> event_fn_027553
 ******************************************************************************/
void battle_update_creature_and_thing_01443f(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  uint arg_eax;
  undefined1 *word_ptr;
  int *int_ptr;
  undefined4 auStack_28 [2];
  int local_20;
  undefined1 local_1c;
  undefined1 local_18;
  byte local_14;
  
  cctrl_ptr = *(ushort *)(&g_bss_002ed45d + (arg_eax & 0xffff) * 0x11);
  local_14 = 0;
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    local_14 = local_14 | '\x01' << (*(byte *)(thing_ptr + 6) & 0x1f); /* thing->owner */
    local_1c = *(undefined1 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
    local_18 = *(undefined1 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f3); /* thing->ccontrol_idx */
  }
  local_20 = 0;
  int_ptr = &local_20;
  do {
    word_ptr = (undefined1 *)int_ptr;
    if (((uint)local_14 & 1 << ((byte)local_20 & 0x1f)) != 0) {
      word_ptr = (undefined1 *)((int)int_ptr + -4);
      *(undefined4 *)((int)int_ptr + -4) = 0;
      *(undefined4 *)((int)int_ptr + -8) = 0x144cb;
      event_fn_027553();
    }
    local_20 = local_20 + 1;
    int_ptr = (int *)word_ptr;
  } while (local_20 < 4);
  return;
}

/******************************************************************************
 * Function : battle_has_members_after_0144d2 (Original VA: 0x144d2, Ghidra: FUN_000144d2)
 * Prototype: void battle_has_members_after_0144d2(void);
 * Address  : 0x144d2 (Size: 184 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp lines 613
 * Purpose  : String 'Battle has %d members AFTER cleanup!'
 * Callers  : 2 -> battle_attempt_create_battle_null_013bae, battle_hmmm_attempt_remove_creature_013e1b
 * Callees  : 3 -> battle_creature_has_been_removed_013d3b, LbErrorLog, dk_sprintf
 ******************************************************************************/
void battle_has_members_after_0144d2(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  uint arg_eax;
  uint extraout_EDX;
  int val;
  
  val = 0;
  if ((short)arg_eax != 0) {
    cctrl_ptr = *(ushort *)(&g_bss_002ed45d + (arg_eax & 0xffff) * 0x11);
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) != '\0') { /* thing->ccontrol_idx */
        val = val + 1;
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f3); /* thing->ccontrol_idx */
    }
    if (val == 0) {
      while (val = (arg_eax & 0xffff) * 0x11, *(short *)(&g_bss_002ed45d + val) != 0) {
        battle_creature_has_been_removed_013d3b();
        arg_eax = extraout_EDX;
      }
      if (*(int *)(&g_bss_002ed450 + val) != 0) {
        dk_sprintf(&g_log_sprintf_buf,s_Battle_has__d_members_AFTER_clea_00160314,
                     *(undefined4 *)(&g_bss_002ed450 + val));
        LbErrorLog(); /* LbErrorLog("battle.cpp", line 613, g_log_buf) */
      }
    }
  }
  return;
}

