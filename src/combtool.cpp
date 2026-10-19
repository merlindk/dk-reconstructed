/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: combtool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 32
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : combtool_update_creature_control_0173e8 (Original VA: 0x173e8, Ghidra: FUN_000173e8)
 * Prototype: int combtool_update_creature_control_0173e8(void);
 * Address  : 0x173e8 (Size: 200 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 6 -> combchk_update_creature_control_0162f2, combold_update_creature_and_thing_0174b0, combold_process_thing_entity_0175fa, combtool_update_creature_and_thing_0176c6, combtool_process_thing_entity_01781a, combtool_ranged_attackers_serious_018119
 * Callees  : 1 -> combat_update_creature_control_015db4
 ******************************************************************************/
int combtool_update_creature_control_0173e8(void)

{
  int arg_eax;
  int arg_ecx;
  int extraout_ECX;
  int arg_edx;
  int cctrl_ptr;
  int arg_ebx;
  int val;
  undefined8 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  val = 1;
  if ((&g_bss_002e918a)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\x02') {
    if (arg_ebx != 2) {
      uval = combat_update_creature_control_015db4();
      cctrl_ptr = (int)((ulonglong)uval >> 0x20);
      arg_ecx = extraout_ECX;
      if ((int)uval == 0) goto LAB_00017458;
    }
    val = (4 - (uint)*(byte *)(cctrl_ptr + 0x1c)) * 0x102 + 0x102;
    if (0x14ff < arg_ecx) {
      arg_ecx = 0x1500;
    }
  }
  else {
    if (arg_ebx != 2) {
      val = 0x102;
    }
LAB_00017458:
    if (arg_ebx == 2) {
      val = val + (4 - (uint)*(byte *)(cctrl_ptr + 0x1c)) * 0x102;
    }
    else {
      val = val + (4 - (uint)*(byte *)(cctrl_ptr + 0x1b)) * 0x102 + 0x80;
    }
    if (0x14ff < arg_ecx) {
      arg_ecx = 0x1500;
    }
  }
  return ((0x1500 - arg_ecx) * 0x100) / 0x1500 + val;
}

/******************************************************************************
 * Function : combtool_update_creature_and_thing_0176c6 (Original VA: 0x176c6, Ghidra: FUN_000176c6)
 * Prototype: int combtool_update_creature_and_thing_0176c6(void);
 * Address  : 0x176c6 (Size: 340 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> combtool_process_thing_entity_01781a
 * Callees  : 3 -> combchk_fn_016175, combtool_update_creature_control_0173e8, combtool_fn_0189d4
 ******************************************************************************/
int combtool_update_creature_and_thing_0176c6(void)

{
  undefined4 thing_ptr;
  int thing;
  int val;
  int val_2;
  int *arg_ecx;
  undefined4 *arg_edx;
  int arg_ebx;
  int *int_ptr;
  int *int_ptr_2;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int aiStack_50 [4];
  undefined4 *local_40;
  int *local_3c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  int_ptr = aiStack_50 + 2;
  local_1c = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_10 = 0;
  local_40 = arg_edx;
  local_3c = arg_ecx;
  if (*(char *)(local_1c + 0x1b) != '\0') {
    aiStack_50[2] = local_1c + 8;
    int_ptr_2 = aiStack_50 + 2;
    local_18 = local_1c;
    do {
      int_ptr = int_ptr_2;
      if (*(ushort *)(local_18 + 0xb) != 0) {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(local_18 + 0xb)];
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x17728;
        val = combtool_fn_0189d4();
        if (val < arg_ebx) {
          *(undefined4 *)((int)int_ptr_2 + -4) = 0;
          *(undefined4 *)((int)int_ptr_2 + -8) = 0x17743;
          val = combchk_fn_016175();
          int_ptr = (int *)((int)int_ptr_2 + -4);
          if (0 < val) {
            *(undefined4 *)((int)int_ptr_2 + -8) = 0x17759;
            val_2 = combtool_update_creature_control_0173e8();
            int_ptr = (int *)((int)int_ptr_2 + -4);
            if (local_10 < val_2) {
              int_ptr = (int *)((int)int_ptr_2 + -4);
              local_28 = thing_ptr;
              local_20 = val;
              local_10 = val_2;
            }
          }
        }
      }
      local_18 = local_18 + 2;
      int_ptr_2 = int_ptr;
    } while (local_18 != aiStack_50[2]);
    if (local_10 != 0) goto LAB_00017775;
  }
  if (*(char *)(local_1c + 0x1c) != '\0') {
    aiStack_50[3] = local_1c + 8;
    word_ptr_2 = (undefined1 *)int_ptr;
    do {
      word_ptr = word_ptr_2;
      if (*(ushort *)(local_1c + 0x13) != 0) {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(local_1c + 0x13)];
        *(undefined4 *)(word_ptr_2 + -4) = 0x177c8;
        val = combtool_fn_0189d4();
        if (val < arg_ebx) {
          *(undefined4 *)(word_ptr_2 + -4) = 0;
          *(undefined4 *)(word_ptr_2 + -8) = 0x177e2;
          val = combchk_fn_016175();
          word_ptr = word_ptr_2 + -4;
          if (0 < val) {
            *(undefined4 *)(word_ptr_2 + -8) = 0x177f7;
            val_2 = combtool_update_creature_control_0173e8();
            word_ptr = word_ptr_2 + -4;
            if (local_10 < val_2) {
              word_ptr = word_ptr_2 + -4;
              local_28 = thing_ptr;
              local_20 = val;
              local_10 = val_2;
            }
          }
        }
      }
      local_1c = local_1c + 2;
      word_ptr_2 = word_ptr;
    } while (local_1c != aiStack_50[3]);
    if (local_10 != 0) {
LAB_00017775:
      *local_40 = local_28;
      *local_3c = local_10;
      return local_20;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : combtool_process_thing_entity_01781a (Original VA: 0x1781a, Ghidra: FUN_0001781a)
 * Prototype: int combtool_process_thing_entity_01781a(void);
 * Address  : 0x1781a (Size: 204 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> combat_update_creature_control_015be4
 * Callees  : 6 -> combchk_update_creature_and_thing_015ef2, combchk_update_creature_control_015f21, combchk_fn_016175, combtool_update_creature_control_0173e8, combtool_update_creature_and_thing_0176c6, combtool_fn_0189d4
 ******************************************************************************/
int combtool_process_thing_entity_01781a(void)

{
  int thing_ptr;
  int val;
  int val_2;
  int *arg_edx;
  int arg_ebx;
  undefined1 *word_ptr;
  int *int_ptr;
  uint uval;
  int aiStack_34 [5];
  
  int_ptr = aiStack_34 + 2;
  aiStack_34[3] = 0;
  aiStack_34[4] = combtool_update_creature_and_thing_0176c6();
  uval = g_bss_002e6eb6;
  if (0 < aiStack_34[4]) {
    *arg_edx = aiStack_34[2];
    return aiStack_34[4];
  }
  while (thing_ptr = (&g_thing_ptrs)[uval], thing_ptr != g_thing_ptrs) {
    *(undefined4 *)((int)int_ptr + -4) = 0x17877;
    val = combchk_update_creature_control_015f21();
    word_ptr = (undefined1 *)int_ptr;
    if (val != 0) {
      *(undefined4 *)((int)int_ptr + -4) = 0x17884;
      val = combchk_update_creature_and_thing_015ef2();
      if (val == 0) {
        *(undefined4 *)((int)int_ptr + -4) = 0x17891;
        val = combtool_fn_0189d4();
        if (val < arg_ebx) {
          *(undefined4 *)((int)int_ptr + -4) = 0;
          *(undefined4 *)((int)int_ptr + -8) = 0x178a8;
          val = combchk_fn_016175();
          word_ptr = (undefined1 *)((int)int_ptr + -4);
          if (0 < val) {
            *(undefined4 *)((int)int_ptr + -8) = 0x178bd;
            val_2 = combtool_update_creature_control_0173e8();
            word_ptr = (undefined1 *)((int)int_ptr + -4);
            if (aiStack_34[3] < val_2) {
              word_ptr = (undefined1 *)((int)int_ptr + -4);
              aiStack_34[2] = thing_ptr;
              aiStack_34[3] = val_2;
              aiStack_34[4] = val;
            }
          }
        }
      }
    }
    int_ptr = (int *)word_ptr;
    uval = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  if (aiStack_34[3] == 0) {
    return 0;
  }
  *arg_edx = aiStack_34[2];
  return aiStack_34[4];
}

/******************************************************************************
 * Function : combtool_fn_0178e6 (Original VA: 0x178e6, Ghidra: FUN_000178e6)
 * Prototype: undefined4 combtool_fn_0178e6(void);
 * Address  : 0x178e6 (Size: 7 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module combtool.cpp procedure @ 0x0178e6
 * Callers  : 1 -> combtool_ranged_attackers_serious_018119
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combtool_fn_0178e6(void)

{
  return 0;
}

/******************************************************************************
 * Function : combtool_creature_combat_already_adding_0178ed (Original VA: 0x178ed, Ghidra: FUN_000178ed)
 * Prototype: undefined4 combtool_creature_combat_already_adding_0178ed(void);
 * Address  : 0x178ed (Size: 161 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 365
 * Purpose  : String 'CREATURE IN COMBAT ALREADY - ADDING MELEE'
 * Callers  : 1 -> combtool_update_creature_control_017e7e
 * Callees  : 2 -> battle_attempt_create_battle_null_013bae, LbErrorLog
 ******************************************************************************/
undefined4 combtool_creature_combat_already_adding_0178ed(void)

{
  int cctrl_ptr;
  int thing;
  int cctrl_ptr_2;
  int arg_edx;
  int loop_i;
  
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (*(char *)(cctrl_ptr_2 + 3) == '\0') {
    if (3 < *(byte *)(cctrl_ptr + 0x1b)) {
      return 0;
    }
    *(byte *)(cctrl_ptr_2 + 3) = *(byte *)(cctrl_ptr_2 + 3) | 1;
    *(undefined2 *)(cctrl_ptr_2 + 0xa2) = *(undefined2 *)(arg_edx + 0x1b);
    *(undefined4 *)(cctrl_ptr_2 + 0x9e) = *(undefined4 *)(arg_edx + 9);
    cctrl_ptr_2 = cctrl_ptr;
    for (loop_i = 0; loop_i < 4; loop_i = loop_i + 1) {
      if (*(short *)(cctrl_ptr_2 + 0xb) == 0) {
        *(char *)(cctrl_ptr + 0x1b) = *(char *)(cctrl_ptr + 0x1b) + '\x01';
        *(undefined2 *)(cctrl_ptr_2 + 0xb) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
        battle_attempt_create_battle_null_013bae();
        return 1;
      }
      cctrl_ptr_2 = cctrl_ptr_2 + 2;
    }
  }
  LbErrorLog(); /* LbErrorLog("combtool.cpp", line 365, "I Cannot Add A Melee Attacker - NOT POSSIBLE") */
  return 0;
}

/******************************************************************************
 * Function : combtool_creature_combat_already_adding_01798e (Original VA: 0x1798e, Ghidra: FUN_0001798e)
 * Prototype: undefined4 combtool_creature_combat_already_adding_01798e(void);
 * Address  : 0x1798e (Size: 161 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 419
 * Purpose  : String 'CREATURE IN COMBAT ALREADY - ADDING RANGED'
 * Callers  : 1 -> combtool_update_creature_control_017e7e
 * Callees  : 2 -> battle_attempt_create_battle_null_013bae, LbErrorLog
 ******************************************************************************/
undefined4 combtool_creature_combat_already_adding_01798e(void)

{
  int cctrl_ptr;
  int thing;
  int cctrl_ptr_2;
  int arg_edx;
  int loop_i;
  
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (*(char *)(cctrl_ptr_2 + 3) == '\0') {
    if (3 < *(byte *)(cctrl_ptr + 0x1c)) {
      return 0;
    }
    *(byte *)(cctrl_ptr_2 + 3) = *(byte *)(cctrl_ptr_2 + 3) | 2;
    *(undefined2 *)(cctrl_ptr_2 + 0xa2) = *(undefined2 *)(arg_edx + 0x1b);
    *(undefined4 *)(cctrl_ptr_2 + 0x9e) = *(undefined4 *)(arg_edx + 9);
    cctrl_ptr_2 = cctrl_ptr;
    for (loop_i = 0; loop_i < 4; loop_i = loop_i + 1) {
      if (*(short *)(cctrl_ptr_2 + 0x13) == 0) {
        *(char *)(cctrl_ptr + 0x1c) = *(char *)(cctrl_ptr + 0x1c) + '\x01';
        *(undefined2 *)(cctrl_ptr_2 + 0x13) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
        battle_attempt_create_battle_null_013bae();
        return 1;
      }
      cctrl_ptr_2 = cctrl_ptr_2 + 2;
    }
  }
  LbErrorLog(); /* LbErrorLog("combtool.cpp", line 419, "I Cannot Add A Ranged Attacker - NOT POSSIBLE") */
  return 0;
}

/******************************************************************************
 * Function : combtool_creature_combat_already_waiting_017a2f (Original VA: 0x17a2f, Ghidra: FUN_00017a2f)
 * Prototype: undefined4 combtool_creature_combat_already_waiting_017a2f(void);
 * Address  : 0x17a2f (Size: 80 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 438
 * Purpose  : String 'CREATURE IN COMBAT ALREADY - WAITING'
 * Callers  : 1 -> combtool_update_creature_control_017e7e
 * Callees  : 2 -> battle_attempt_create_battle_null_013bae, LbErrorLog
 ******************************************************************************/
undefined4 combtool_creature_combat_already_waiting_017a2f(void)

{
  int thing;
  int extraout_ECX;
  int cctrl_ptr;
  int arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 3) != '\0') {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 438, "CREATURE IN COMBAT ALREADY - WAITING") */
    cctrl_ptr = extraout_ECX;
  }
  *(byte *)(cctrl_ptr + 3) = *(byte *)(cctrl_ptr + 3) | 4;
  *(undefined2 *)(cctrl_ptr + 0xa2) = *(undefined2 *)(arg_edx + 0x1b);
  *(undefined4 *)(cctrl_ptr + 0x9e) = *(undefined4 *)(arg_edx + 9);
  battle_attempt_create_battle_null_013bae();
  return 0;
}

/******************************************************************************
 * Function : combtool_combat_count_incorrect_017a7f (Original VA: 0x17a7f, Ghidra: FUN_00017a7f)
 * Prototype: void combtool_combat_count_incorrect_017a7f(void);
 * Address  : 0x17a7f (Size: 221 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 460, 469, 506
 * Purpose  : String 'COMBAT COUNT INCORRECT'
 * Callers  : 2 -> combtool_update_creature_control_017c99, combtool_update_creature_control_01836b
 * Callees  : 2 -> battle_hmmm_attempt_remove_creature_013e1b, LbErrorLog
 ******************************************************************************/
void combtool_combat_count_incorrect_017a7f(void)

{
  int cctrl_ptr;
  int thing;
  int dungeon_off;
  int extraout_ECX;
  int cctrl_ptr_2;
  int arg_edx;
  int loop_i;
  
  dungeon_off = *(char *)(thing + 6) * 0x1508; /* thing->owner */
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (*(int *)(&g_bss_002e1a32 + dungeon_off) < 1) {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 460, "COMBAT COUNT INCORRECT") */
    cctrl_ptr_2 = extraout_ECX;
  }
  else {
    *(int *)(&g_bss_002e1a32 + dungeon_off) = *(int *)(&g_bss_002e1a32 + dungeon_off) + -1;
  }
  if (arg_edx == g_thing_ptrs) {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 469, "TRYING TO REMOVE NULL MELEE ENEMY!") */
  }
  else {
    if (*(char *)(cctrl_ptr + 0x1b) == '\0') {
      LbErrorLog(); /* LbErrorLog("combtool.cpp", line 506, "Thing has no melee attackers to be removed!") */
    }
    else {
      dungeon_off = cctrl_ptr;
      for (loop_i = 0; loop_i < 4; loop_i = loop_i + 1) {
        if (*(short *)(dungeon_off + 0xb) == *(short *)(thing + 0x1b)) { /* thing->index_or_angle */
          *(char *)(cctrl_ptr + 0x1b) = *(char *)(cctrl_ptr + 0x1b) + -1;
          *(undefined2 *)(dungeon_off + 0xb) = 0;
          break;
        }
        dungeon_off = dungeon_off + 2;
      }
      *(undefined2 *)(cctrl_ptr_2 + 0xa2) = 0;
      *(undefined1 *)(cctrl_ptr_2 + 0xa9) = 0;
      *(undefined4 *)(cctrl_ptr_2 + 0x9e) = 0;
      *(byte *)(cctrl_ptr_2 + 3) = *(byte *)(cctrl_ptr_2 + 3) & 0xfe;
    }
    battle_hmmm_attempt_remove_creature_013e1b();
  }
  return;
}

/******************************************************************************
 * Function : combtool_fight_count_incorrect_017b5c (Original VA: 0x17b5c, Ghidra: FUN_00017b5c)
 * Prototype: void combtool_fight_count_incorrect_017b5c(void);
 * Address  : 0x17b5c (Size: 211 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 523, 534
 * Purpose  : String 'FIGHT COUNT INCORRECT'
 * Callers  : 2 -> combtool_update_creature_control_017c99, combtool_update_creature_control_01836b
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void combtool_fight_count_incorrect_017b5c(void)

{
  int cctrl_ptr;
  int thing;
  int dungeon_off;
  int extraout_ECX;
  int cctrl_ptr_2;
  int arg_edx;
  int loop_i;
  
  dungeon_off = *(char *)(thing + 6) * 0x1508; /* thing->owner */
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (*(int *)(&g_bss_002e1a32 + dungeon_off) < 1) {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 523, "FIGHT COUNT INCORRECT") */
    cctrl_ptr_2 = extraout_ECX;
  }
  else {
    *(int *)(&g_bss_002e1a32 + dungeon_off) = *(int *)(&g_bss_002e1a32 + dungeon_off) + -1;
  }
  if (arg_edx == g_thing_ptrs) {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 534, "TRYING TO REMOVE NULL RANGED ENEMY!") */
  }
  else {
    if (*(char *)(cctrl_ptr + 0x1c) == '\0') {
      LbErrorLog();
    }
    else {
      dungeon_off = cctrl_ptr;
      for (loop_i = 0; loop_i < 4; loop_i = loop_i + 1) {
        if (*(short *)(dungeon_off + 0x13) == *(short *)(thing + 0x1b)) { /* thing->index_or_angle */
          *(char *)(cctrl_ptr + 0x1c) = *(char *)(cctrl_ptr + 0x1c) + -1;
          *(undefined2 *)(dungeon_off + 0x13) = 0;
          break;
        }
        dungeon_off = dungeon_off + 2;
      }
      *(undefined2 *)(cctrl_ptr_2 + 0xa2) = 0;
      *(undefined1 *)(cctrl_ptr_2 + 0xa9) = 0;
      *(undefined4 *)(cctrl_ptr_2 + 0x9e) = 0;
      *(byte *)(cctrl_ptr_2 + 3) = *(byte *)(cctrl_ptr_2 + 3) & 0xfd;
    }
    battle_hmmm_attempt_remove_creature_013e1b();
  }
  return;
}

/******************************************************************************
 * Function : combtool_fight_count_incorrect_017c2f (Original VA: 0x17c2f, Ghidra: FUN_00017c2f)
 * Prototype: void combtool_fight_count_incorrect_017c2f(void);
 * Address  : 0x17c2f (Size: 106 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 587
 * Purpose  : String 'FIGHT COUNT INCORRECT'
 * Callers  : 1 -> combtool_update_creature_control_017c99
 * Callees  : 2 -> battle_hmmm_attempt_remove_creature_013e1b, LbErrorLog
 ******************************************************************************/
void combtool_fight_count_incorrect_017c2f(void)

{
  int thing;
  int dungeon_off;
  int extraout_ECX;
  int cctrl_ptr;
  
  dungeon_off = *(char *)(thing + 6) * 0x1508; /* thing->owner */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(int *)(&g_bss_002e1a32 + dungeon_off) < 1) {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 587, "FIGHT COUNT INCORRECT") */
    cctrl_ptr = extraout_ECX;
  }
  else {
    *(int *)(&g_bss_002e1a32 + dungeon_off) = *(int *)(&g_bss_002e1a32 + dungeon_off) + -1;
  }
  *(undefined2 *)(cctrl_ptr + 0xa2) = 0;
  *(undefined1 *)(cctrl_ptr + 0xa9) = 0;
  *(undefined4 *)(cctrl_ptr + 0x9e) = 0;
  *(byte *)(cctrl_ptr + 3) = *(byte *)(cctrl_ptr + 3) & 0xfb;
  battle_hmmm_attempt_remove_creature_013e1b();
  return;
}

/******************************************************************************
 * Function : combtool_update_creature_control_017c99 (Original VA: 0x17c99, Ghidra: FUN_00017c99)
 * Prototype: void combtool_update_creature_control_017c99(void);
 * Address  : 0x17c99 (Size: 57 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combtool_fn_0180e7, combtool_update_creature_control_01836b
 * Callees  : 3 -> combtool_combat_count_incorrect_017a7f, combtool_fight_count_incorrect_017b5c, combtool_fight_count_incorrect_017c2f
 ******************************************************************************/
void combtool_update_creature_control_017c99(void)

{
  int cctrl_ptr;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(byte *)(cctrl_ptr + 3) & 1) != 0) {
    combtool_combat_count_incorrect_017a7f();
    return;
  }
  if ((*(byte *)(cctrl_ptr + 3) & 2) != 0) {
    combtool_fight_count_incorrect_017b5c();
    return;
  }
  if ((*(byte *)(cctrl_ptr + 3) & 4) != 0) {
    combtool_fight_count_incorrect_017c2f();
  }
  return;
}

/******************************************************************************
 * Function : combtool_creature_has_dungeon_heart_017cd2 (Original VA: 0x17cd2, Ghidra: FUN_00017cd2)
 * Prototype: undefined4 combtool_creature_has_dungeon_heart_017cd2(void);
 * Address  : 0x17cd2 (Size: 222 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 661
 * Purpose  : String 'CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE '
 * Callers  : 1 -> combtool_couldn_get_flee_position_017db0
 * Callees  : 2 -> good_process_thing_entity_038f2b, LbErrorLog
 ******************************************************************************/
undefined4 combtool_creature_has_dungeon_heart_017cd2(void)

{
  int cctrl_ptr;
  int thing;
  undefined4 uval;
  undefined4 *arg_edx;
  int player_off;
  uint uval_2;
  byte flag;
  
  flag = 0;
  uval_2 = (uint)*(char *)(thing + 6); /* thing->owner */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((int)uval_2 < (int)(uint)g_bss_002eb542) {
    if (*(ushort *)(cctrl_ptr + 0x6a) == 0) {
      if ((&g_dungeons)[uval_2 * 0xa84] == 0) {
        player_off = uval_2 * 0x4ef;
        if (((((&g_players)[player_off] & 1) != 0) && ((&g_bss_0019d0f4)[player_off] == '\x01')) &&
           ((&g_bss_0019d0f1)[player_off] != '\x02')) {
          LbErrorLog(); /* LbErrorLog("combtool.cpp", line 661, "CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE DESIGN ERROR") */
          return 0;
        }
        arg_edx = (undefined4 *)(cctrl_ptr + 0x288);
      }
      else {
        thing = (&g_thing_ptrs)[(ushort)(&g_dungeons)[uval_2 * 0xa84]];
      }
    }
    else {
      thing = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x6a)];
    }
  }
  else if ((uval_2 != g_bss_002eb542) || (thing = good_process_thing_entity_038f2b(), thing == 0)) {
    if ((*(short *)(cctrl_ptr + 0x288) != 0) || (uval = 0, *(short *)(cctrl_ptr + 0x28a) != 0)) {
      uval = 1;
    }
    return uval;
  }
  *arg_edx = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
  *(undefined2 *)(arg_edx + (uint)flag * -2 + 1) = *(undefined2 *)(thing + 0x11 + (uint)flag * -8)
  ;
  return 1;
}

/******************************************************************************
 * Function : combtool_couldn_get_flee_position_017db0 (Original VA: 0x17db0, Ghidra: FUN_00017db0)
 * Prototype: void combtool_couldn_get_flee_position_017db0(void);
 * Address  : 0x17db0 (Size: 82 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 695
 * Purpose  : String 'COULDN'T GET A FLEE POSITION'
 * Callers  : 4 -> combtool_creature_combat_already_state_017fee, combtool_update_creature_control_01829f, magic_update_slab_subtile_columns_050349, torture_update_slab_subtile_columns_074038
 * Callees  : 2 -> combtool_creature_has_dungeon_heart_017cd2, LbErrorLog
 ******************************************************************************/
void combtool_couldn_get_flee_position_017db0(void)

{
  int thing;
  int cctrl_ptr;
  byte flag;
  
  flag = 0;
  cctrl_ptr = combtool_creature_has_dungeon_heart_017cd2();
  if (cctrl_ptr == 0) {
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 695, "COULDN'T GET A FLEE POSITION") */
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    *(undefined4 *)(cctrl_ptr + 0x288) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    *(undefined2 *)(cctrl_ptr + 0x28c + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
  }
  return;
}

/******************************************************************************
 * Function : combtool_update_creature_control_017e02 (Original VA: 0x17e02, Ghidra: FUN_00017e02)
 * Prototype: undefined4 combtool_update_creature_control_017e02(void);
 * Address  : 0x17e02 (Size: 124 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combtool_update_creature_control_01829f
 * Callees  : 1 -> combat_update_creature_control_015db4
 ******************************************************************************/
undefined4 combtool_update_creature_control_017e02(void)

{
  int arg_eax;
  int arg_edx;
  int cctrl_ptr;
  int arg_ebx;
  undefined8 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  if (arg_ebx == 2) {
    if (*(byte *)(cctrl_ptr + 0x1c) < 4) {
      return 2;
    }
  }
  else {
    if ((&g_bss_002e918a)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\x02') {
      uval = combat_update_creature_control_015db4();
      cctrl_ptr = (int)((ulonglong)uval >> 0x20);
      if (((int)uval != 0) && (*(byte *)(cctrl_ptr + 0x1c) < 4)) {
        return 2;
      }
    }
    if (*(byte *)(cctrl_ptr + 0x1b) < 4) {
      return 3;
    }
    uval = combat_update_creature_control_015db4();
    if (((int)uval != 0) && (*(byte *)((int)((ulonglong)uval >> 0x20) + 0x1c) < 4)) {
      return 2;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : combtool_update_creature_control_017e7e (Original VA: 0x17e7e, Ghidra: FUN_00017e7e)
 * Prototype: void combtool_update_creature_control_017e7e(void);
 * Address  : 0x17e7e (Size: 368 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> combtool_creature_combat_already_state_017fee, combtool_creature_combat_already_adding_018087, combtool_fn_0180e7
 * Callees  : 6 -> combat_update_creature_control_015db4, combtool_creature_combat_already_adding_0178ed, combtool_creature_combat_already_adding_01798e, combtool_creature_combat_already_waiting_017a2f, moodneed_fn_051374, sound_roll_unsynced_random_06edb9
 ******************************************************************************/
void combtool_update_creature_control_017e7e(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int arg_edx;
  int arg_ebx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(int *)(&g_bss_002e1a32 + *(char *)(thing + 6) * 0x1508) = /* thing->owner */
       *(int *)(&g_bss_002e1a32 + *(char *)(thing + 6) * 0x1508) + 1; /* thing->owner */
  *(char *)(cctrl_ptr + 0xa7) = (char)arg_ebx;
  if ((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 3) & 1) == 0) &&
      ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 3) & 2) == 0)) &&
     (((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] || /* thing->owner */
      ((int)*(char *)(arg_edx + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])))) {
    moodneed_fn_051374();
  }
  if (arg_ebx == 2) {
    val = combtool_creature_combat_already_adding_01798e();
  }
  else {
    if ((((&g_bss_002e918a)[(uint)*(byte *)(thing + 0x1a) * 0xe6] == '\x02') &&
        (val = combat_update_creature_control_015db4(), val != 0)) && (val = combtool_creature_combat_already_adding_01798e(), val != 0))
    goto LAB_00017f44;
    val = combtool_creature_combat_already_adding_0178ed();
    if (val != 0) {
      sound_roll_unsynced_random_06edb9();
      *(undefined1 *)(cctrl_ptr + 0xa6) = 3;
      return;
    }
    val = combat_update_creature_control_015db4();
    if (val == 0) goto LAB_00017fd9;
    val = combtool_creature_combat_already_adding_01798e();
  }
  if (val == 0) {
LAB_00017fd9:
    combtool_creature_combat_already_waiting_017a2f();
    *(undefined1 *)(cctrl_ptr + 0xa6) = 1;
    return;
  }
LAB_00017f44:
  sound_roll_unsynced_random_06edb9();
  *(undefined1 *)(cctrl_ptr + 0xa6) = 2;
  return;
}

/******************************************************************************
 * Function : combtool_creature_combat_already_state_017fee (Original VA: 0x17fee, Ghidra: FUN_00017fee)
 * Prototype: void combtool_creature_combat_already_state_017fee(void);
 * Address  : 0x17fee (Size: 153 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 812
 * Purpose  : String 'CREATURE IN COMBAT ALREADY - STATE(%d)'
 * Callers  : 1 -> combtool_update_creature_control_01829f
 * Callees  : 5 -> combtool_couldn_get_flee_position_017db0, combtool_update_creature_control_017e7e, person_external_change_state_but_064a5f, LbErrorLog, dk_sprintf
 ******************************************************************************/
void combtool_creature_combat_already_state_017fee(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  undefined1 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (((*(char *)(cctrl_ptr + 3) != '\0') && ((*(byte *)(cctrl_ptr + 3) & 0x10) == 0)) &&
     ((*(byte *)(cctrl_ptr + 3) & 8) == 0)) {
    if (*(char *)(thing + 7) == '\x0e') {
      uval = *(undefined1 *)(thing + 8); /* thing->active_state */
    }
    else {
      uval = *(undefined1 *)(thing + 7);
    }
    dk_sprintf(&g_log_sprintf_buf,s_CREATURE_IN_COMBAT_ALREADY___STA_00160984,uval);
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 812, g_log_buf) */
    return;
  }
  ch = person_external_change_state_but_064a5f();
  if (ch != '\0') {
    *(undefined1 *)(cctrl_ptr + 0xaa) = 0;
    *(undefined1 *)(cctrl_ptr + 0xa9) = 0;
    combtool_update_creature_control_017e7e();
    combtool_couldn_get_flee_position_017db0();
  }
  return;
}

/******************************************************************************
 * Function : combtool_creature_combat_already_adding_018087 (Original VA: 0x18087, Ghidra: FUN_00018087)
 * Prototype: undefined4 combtool_creature_combat_already_adding_018087(void);
 * Address  : 0x18087 (Size: 96 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 842
 * Purpose  : String 'CREATURE IN COMBAT ALREADY - ADDING TILL DEATH'
 * Callers  : 3 -> angtool_process_map_subtile_011408, combat_update_creature_control_015be4, lair_update_slab_subtile_columns_04d8d2
 * Callees  : 3 -> combtool_update_creature_control_017e7e, person_external_change_state_but_064a5f, LbErrorLog
 ******************************************************************************/
undefined4 combtool_creature_combat_already_adding_018087(void)

{
  char ch;
  int thing;
  int extraout_ECX;
  
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 3) != '\0') { /* thing->ccontrol_idx */
    LbErrorLog(); /* LbErrorLog("combtool.cpp", line 842, "CREATURE IN COMBAT ALREADY - ADDING TILL DEATH") */
    return 0;
  }
  ch = person_external_change_state_but_064a5f();
  if (ch != '\0') {
    combtool_update_creature_control_017e7e();
    *(undefined1 *)(extraout_ECX + 0xaa) = 0;
    *(undefined1 *)(extraout_ECX + 0xa9) = 1;
  }
  return 1;
}

/******************************************************************************
 * Function : combtool_fn_0180e7 (Original VA: 0x180e7, Ghidra: FUN_000180e7)
 * Prototype: void combtool_fn_0180e7(void);
 * Address  : 0x180e7 (Size: 50 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Purpose  : Module combtool.cpp procedure @ 0x0180e7
 * Callers  : 2 -> combtool_ranged_attackers_serious_018119, combtool_update_creature_control_018938
 * Callees  : 2 -> combtool_update_creature_control_017c99, combtool_update_creature_control_017e7e
 ******************************************************************************/
void combtool_fn_0180e7(void)

{
  combtool_update_creature_control_017c99();
  combtool_update_creature_control_017e7e();
  return;
}

/******************************************************************************
 * Function : combtool_ranged_attackers_serious_018119 (Original VA: 0x18119, Ghidra: FUN_00018119)
 * Prototype: undefined4 combtool_ranged_attackers_serious_018119(void);
 * Address  : 0x18119 (Size: 390 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp lines 943
 * Purpose  : String 'NO RANGED ATTACKERS - SERIOUS'
 * Callers  : 1 -> combtool_update_creature_control_018938
 * Callees  : 7 -> combchk_update_creature_control_01652b, combtool_update_creature_control_0173e8, combtool_fn_0178e6, combtool_fn_0180e7, combtool_fn_0189d4, person_fn_063b6d, LbErrorLog
 ******************************************************************************/
undefined4 combtool_ranged_attackers_serious_018119(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int arg_ebx;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)];
  combtool_fn_0189d4();
  val_2 = combtool_update_creature_control_0173e8();
  val = local_1c + 8;
  local_14 = val_2;
  if (arg_ebx == 2) {
    if (*(char *)(local_1c + 0x1c) != '\0') {
      do {
        if (*(short *)(local_1c + 0x13) != 0) {
          combtool_fn_0189d4();
          val_3 = combtool_update_creature_control_0173e8();
          val_4 = combchk_update_creature_control_01652b();
          if (val_4 != 0) {
            val_3 = extraout_ECX + -0x200;
          }
          if (val_3 < local_14) {
            local_14 = val_3;
          }
        }
        local_1c = local_1c + 2;
      } while (local_1c != val);
      goto LAB_00018279;
    }
  }
  else {
    local_18 = local_1c;
    if (*(char *)(local_1c + 0x1b) != '\0') {
      do {
        if (*(short *)(local_18 + 0xb) != 0) {
          combtool_fn_0189d4();
          val_3 = combtool_update_creature_control_0173e8();
          val_4 = combchk_update_creature_control_01652b();
          if (val_4 != 0) {
            val_3 = extraout_ECX_00 + -0x200;
          }
          if (val_3 < local_14) {
            local_14 = val_3;
          }
        }
        local_18 = local_18 + 2;
      } while (local_18 != val);
      goto LAB_00018279;
    }
  }
  LbErrorLog(); /* LbErrorLog("combtool.cpp", line 943, "NO MELEE ATTACKERS - SERIOUS") */
LAB_00018279:
  if (local_14 == val_2) {
    return 0;
  }
  person_fn_063b6d();
  combtool_fn_0180e7();
  uval = combtool_fn_0178e6();
  return uval;
}

/******************************************************************************
 * Function : combtool_update_creature_control_01829f (Original VA: 0x1829f, Ghidra: FUN_0001829f)
 * Prototype: undefined8 combtool_update_creature_control_01829f(void);
 * Address  : 0x1829f (Size: 204 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> person_update_creature_control_063dd3, update_creature_has_illegal_state_0e1b88
 * Callees  : 6 -> combchk_fn_01660d, combold_process_thing_entity_0175fa, combtool_couldn_get_flee_position_017db0, combtool_update_creature_control_017e02, combtool_creature_combat_already_state_017fee, person_external_change_state_but_064a5f
 ******************************************************************************/
undefined8 combtool_update_creature_control_01829f(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = combold_process_thing_entity_0175fa();
  if (val < 1) {
LAB_0001834b:
    if ((*(char *)(cctrl_ptr + 0x1b) != '\0') || (*(char *)(cctrl_ptr + 0x1c) != '\0')) {
      ch = person_external_change_state_but_064a5f();
      if (ch != '\0') {
LAB_0001832d:
        combtool_couldn_get_flee_position_017db0();
        *(undefined4 *)(cctrl_ptr + 0x28e) = g_game_turn;
        goto LAB_0001833f;
      }
    }
  }
  else {
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 3) == '\0') {
LAB_000182ed:
      val = combchk_fn_01660d();
      if (val != 0) {
        if (((*(byte *)(cctrl_ptr + 0xac) & 0x20) != 0) && (*(short *)(cctrl_ptr + 0xaf) < 1))
        goto LAB_0001834b;
        ch = person_external_change_state_but_064a5f();
        if (ch == '\0') goto LAB_00018367;
        goto LAB_0001832d;
      }
      combtool_creature_combat_already_state_017fee();
LAB_0001833f:
      uval = 1;
      goto LAB_00018344;
    }
    val = combtool_update_creature_control_017e02();
    if (val != 1) goto LAB_000182ed;
  }
LAB_00018367:
  uval = 0;
LAB_00018344:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : combtool_update_creature_control_01836b (Original VA: 0x1836b, Ghidra: FUN_0001836b)
 * Prototype: undefined8 combtool_update_creature_control_01836b(void);
 * Address  : 0x1836b (Size: 159 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> combat_fn_015a1b, creature_update_player_dungeon_08485c, creature_how_hero_have_tend_08608c
 * Callees  : 5 -> battle_update_creature_control_014322, combtool_combat_count_incorrect_017a7f, combtool_fight_count_incorrect_017b5c, combtool_update_creature_control_017c99, person_fn_063b6d
 ******************************************************************************/
undefined8 combtool_update_creature_control_01836b(void)

{
  int val;
  int thing;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int val_2;
  int cctrl_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(char *)(cctrl_ptr + 3) != '\0') && (*(short *)(cctrl_ptr + 0xa2) != 0)) {
    combtool_update_creature_control_017c99();
    cctrl_ptr = extraout_ECX;
  }
  val = cctrl_ptr + 8;
  val_2 = cctrl_ptr;
  do {
    if (*(short *)(val_2 + 0x13) != 0) {
      combtool_fight_count_incorrect_017b5c();
      person_fn_063b6d();
      cctrl_ptr = extraout_ECX_00;
    }
    val_2 = val_2 + 2;
  } while (val_2 != val);
  val = cctrl_ptr + 8;
  do {
    if (*(short *)(cctrl_ptr + 0xb) != 0) {
      combtool_combat_count_incorrect_017a7f();
      person_fn_063b6d();
    }
    cctrl_ptr = cctrl_ptr + 2;
  } while (cctrl_ptr != val);
  battle_update_creature_control_014322();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : combtool_update_creature_control_01840a (Original VA: 0x1840a, Ghidra: FUN_0001840a)
 * Prototype: longlong combtool_update_creature_control_01840a(void);
 * Address  : 0x1840a (Size: 393 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> combtool_fn_018593, combtool_fn_018607
 * Callees  : 2 -> instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
longlong combtool_update_creature_control_01840a(void)

{
  int thing;
  int val;
  int cctrl_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(byte *)(cctrl_ptr + 0xad) & 4) != 0) {
    val = instance_update_creature_control_049e95();
    cctrl_ptr = extraout_ECX;
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      cctrl_ptr = extraout_ECX_00;
      if (val != 0) {
        return CONCAT44(arg_edx,0x16);
      }
    }
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 0x20) == 0) {
    cctrl_ptr = instance_update_creature_control_049e95();
    if (cctrl_ptr != 0) {
      cctrl_ptr = instance_update_creature_control_049ea9();
      if (cctrl_ptr != 0) {
        return CONCAT44(arg_edx,0xd);
      }
    }
  }
  val = instance_update_creature_control_049e95();
  cctrl_ptr = extraout_ECX_01;
  if ((val != 0) &&
     ((int)*(short *)(thing + 0x5e) < (int)(*(ushort *)(extraout_ECX_01 + 0xc6) / 3))) {
    val = instance_update_creature_control_049ea9();
    cctrl_ptr = extraout_ECX_02;
    if (val != 0) {
      return CONCAT44(arg_edx,0xb);
    }
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 4) == 0) {
    val = instance_update_creature_control_049e95();
    cctrl_ptr = extraout_ECX_03;
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      cctrl_ptr = extraout_ECX_04;
      if (val != 0) {
        return CONCAT44(arg_edx,8);
      }
    }
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 2) == 0) {
    val = instance_update_creature_control_049e95();
    cctrl_ptr = extraout_ECX_05;
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      cctrl_ptr = extraout_ECX_06;
      if (val != 0) {
        return CONCAT44(arg_edx,0xf);
      }
    }
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 8) == 0) {
    val = instance_update_creature_control_049e95();
    cctrl_ptr = extraout_ECX_07;
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      cctrl_ptr = extraout_ECX_08;
      if (val != 0) {
        return CONCAT44(arg_edx,10);
      }
    }
  }
  if ((*(byte *)(cctrl_ptr + 0xac) & 0x10) == 0) {
    cctrl_ptr = instance_update_creature_control_049e95();
    if (cctrl_ptr != 0) {
      cctrl_ptr = instance_update_creature_control_049ea9();
      if (cctrl_ptr != 0) {
        return CONCAT44(arg_edx,0x18);
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : combtool_fn_018593 (Original VA: 0x18593, Ghidra: FUN_00018593)
 * Prototype: int combtool_fn_018593(void);
 * Address  : 0x18593 (Size: 116 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x018593
 * Callers  : 3 -> combat_fn_015a23, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29
 * Callees  : 3 -> combtool_update_creature_control_01840a, instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
int combtool_fn_018593(void)

{
  int val;
  int val_2;
  int val_3;
  int arg_edx;
  int loop_i;
  
  val_2 = combtool_update_creature_control_01840a();
  if (val_2 == 0) {
    val_2 = 0;
    for (loop_i = 0; loop_i < 0xc0; loop_i = loop_i + 0xc) {
      val = *(int *)((int)&g_data_00174bcc + loop_i);
      val_3 = instance_update_creature_control_049e95();
      if (val_3 != 0) {
        val_3 = instance_update_creature_control_049ea9();
        if (((val_3 != 0) && (*(int *)((int)&g_data_00174bd0 + loop_i) <= arg_edx)) &&
           (arg_edx <= *(int *)((int)&g_data_00174bd4 + loop_i))) {
          return val;
        }
        if (val_2 == 0) {
          val_2 = -val;
        }
      }
    }
  }
  return val_2;
}

/******************************************************************************
 * Function : combtool_fn_018607 (Original VA: 0x18607, Ghidra: FUN_00018607)
 * Prototype: int combtool_fn_018607(void);
 * Address  : 0x18607 (Size: 106 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x018607
 * Callers  : 1 -> combat_fn_015ac2
 * Callees  : 3 -> combtool_update_creature_control_01840a, instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
int combtool_fn_018607(void)

{
  int val;
  int val_2;
  int val_3;
  int arg_edx;
  int loop_i;
  
  val_2 = combtool_update_creature_control_01840a();
  if (val_2 == 0) {
    val_2 = 0;
    for (loop_i = 0; loop_i < 0x54; loop_i = loop_i + 0xc) {
      val = *(int *)((int)&g_data_00174c8c + loop_i);
      val_3 = instance_update_creature_control_049e95();
      if (val_3 != 0) {
        val_3 = instance_update_creature_control_049ea9();
        if (((val_3 != 0) && (*(int *)((int)&g_data_00174c90 + loop_i) <= arg_edx)) &&
           (arg_edx <= *(int *)((int)&g_data_00174c94 + loop_i))) {
          return val;
        }
        if (val_2 == 0) {
          val_2 = -val;
        }
      }
    }
  }
  return val_2;
}

/******************************************************************************
 * Function : combtool_fn_018671 (Original VA: 0x18671, Ghidra: FUN_00018671)
 * Prototype: int combtool_fn_018671(void);
 * Address  : 0x18671 (Size: 97 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x018671
 * Callers  : 2 -> combobj_creature_has_melee_instance_016df5, combobj_creature_has_melee_instance_017052
 * Callees  : 2 -> instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
int combtool_fn_018671(void)

{
  int val;
  int extraout_ECX;
  int arg_edx;
  int val_2;
  int val_3;
  
  val_3 = 0;
  val_2 = 0;
  do {
    if (0x3b < val_2) {
      return val_3;
    }
    val = instance_update_creature_control_049e95();
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      if (((val != 0) && (*(int *)((int)&g_data_00174d74 + val_2) <= arg_edx)) &&
         (arg_edx <= *(int *)((int)&g_data_00174d78 + val_2))) {
        return extraout_ECX;
      }
      if (val_3 == 0) {
        val_3 = -extraout_ECX;
      }
    }
    val_2 = val_2 + 0xc;
  } while( true );
}

/******************************************************************************
 * Function : combtool_fn_0186d2 (Original VA: 0x186d2, Ghidra: FUN_000186d2)
 * Prototype: int combtool_fn_0186d2(void);
 * Address  : 0x186d2 (Size: 100 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x0186d2
 * Callers  : 1 -> combobj_fn_016e9b
 * Callees  : 2 -> instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
int combtool_fn_0186d2(void)

{
  int val;
  int extraout_ECX;
  int arg_edx;
  int val_2;
  int val_3;
  
  val_3 = 0;
  val_2 = 0;
  do {
    if (0x8f < val_2) {
      return val_3;
    }
    val = instance_update_creature_control_049e95();
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      if (((val != 0) && (*(int *)((int)&g_data_00174ce4 + val_2) <= arg_edx)) &&
         (arg_edx <= *(int *)((int)&g_data_00174ce8 + val_2))) {
        return extraout_ECX;
      }
      if (val_3 == 0) {
        val_3 = -extraout_ECX;
      }
    }
    val_2 = val_2 + 0xc;
  } while( true );
}

/******************************************************************************
 * Function : combtool_fn_018736 (Original VA: 0x18736, Ghidra: FUN_00018736)
 * Prototype: undefined8 combtool_fn_018736(void);
 * Address  : 0x18736 (Size: 514 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x018736
 * Callers  : 1 -> research_update_creature_and_thing_0666a8
 * Callees  : 2 -> instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
undefined8 combtool_fn_018736(void)

{
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,5);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,4);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,0x13);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,0x14);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,9);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,0x1b);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,0x1a);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    val = instance_update_creature_control_049ea9();
    if (val != 0) {
      return CONCAT44(arg_edx,0xc);
    }
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xfffffffb);
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xfffffffc);
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xffffffed);
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xffffffec);
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xfffffff7);
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xffffffe5);
  }
  val = instance_update_creature_control_049e95();
  if (val != 0) {
    return CONCAT44(arg_edx,0xffffffe6);
  }
  val = instance_update_creature_control_049e95();
  uval = 0;
  if (val != 0) {
    uval = 0xfffffff4;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : combtool_update_creature_control_018938 (Original VA: 0x18938, Ghidra: FUN_00018938)
 * Prototype: undefined8 combtool_update_creature_control_018938(void);
 * Address  : 0x18938 (Size: 156 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combat_fn_015b37
 * Callees  : 5 -> combchk_update_creature_control_01629a, combchk_update_creature_control_016376, combold_process_thing_entity_0175fa, combtool_fn_0180e7, combtool_ranged_attackers_serious_018119
 ******************************************************************************/
undefined8 combtool_update_creature_control_018938(void)

{
  int thing;
  undefined4 uval;
  int val;
  int cctrl_ptr;
  undefined4 arg_edx;
  int local_18;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 7) == 0) { /* thing->index_or_angle */
    val = combold_process_thing_entity_0175fa();
    if (val != 0) {
      if (*(short *)(local_18 + 0x1b) == *(short *)(cctrl_ptr + 0xa2)) {
        val = combchk_update_creature_control_01629a();
        if (val != 0) {
          if (*(char *)(cctrl_ptr + 0xa6) != '\x01') goto LAB_0001895b;
          cctrl_ptr = combchk_update_creature_control_016376();
          if (cctrl_ptr == 0) {
            cctrl_ptr = combtool_ranged_attackers_serious_018119();
            if (cctrl_ptr == 0) {
              uval = 0;
              goto LAB_000189ce;
            }
            goto LAB_000189c9;
          }
        }
      }
      combtool_fn_0180e7();
    }
LAB_000189c9:
    uval = 1;
  }
  else {
LAB_0001895b:
    uval = 0;
  }
LAB_000189ce:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : combtool_fn_0189d4 (Original VA: 0x189d4, Ghidra: FUN_000189d4)
 * Prototype: int combtool_fn_0189d4(void);
 * Address  : 0x189d4 (Size: 43 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module combtool.cpp procedure @ 0x0189d4
 * Callers  : 21 -> angtool_process_map_subtile_011408, combat_fn_015a23, combat_fn_015ac2, combat_fn_015b37, combchk_update_creature_control_016242, combchk_update_creature_control_0162f2, combchk_fn_01660d, combobj_creature_has_melee_instance_016df5 ...
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
int combtool_fn_0189d4(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  
  val = update_fn_0dc440();
  return val - ((uint)*(ushort *)(extraout_ECX + 0x56) + (uint)*(ushort *)(arg_eax + 0x56)) / 2;
}

/******************************************************************************
 * Function : combtool_fn_018a0c (Original VA: 0x18a0c, Ghidra: FUN_00018a0c)
 * Prototype: undefined8 combtool_fn_018a0c(void);
 * Address  : 0x18a0c (Size: 73 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x018a0c
 * Callers  : 1 -> compturn_process_computer_player_021416
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 combtool_fn_018a0c(void)

{
  int arg_eax;
  int extraout_ECX;
  undefined4 arg_edx;
  int val;
  
  val = arg_eax + 0x620;
  while (((*(byte *)(val + 4) & 2) == 0 && (0 < *(int *)(arg_eax + 0x10)))) {
    if (((*(byte *)(val + 4) & 1) == 0) &&
       (*(int *)(val + 8) < g_game_turn - *(int *)(val + 0x1c))) {
      (**(code **)(val + 0xc))();
      *(int *)(val + 0x1c) = g_game_turn;
      arg_eax = extraout_ECX;
    }
    val = val + 0x20;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : combtool_update_player_dungeon_018a55 (Original VA: 0x18a55, Ghidra: FUN_00018a55)
 * Prototype: undefined4 combtool_update_player_dungeon_018a55(void);
 * Address  : 0x18a55 (Size: 483 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_process_dungeon_room_01d5a1, comptool_update_creature_and_thing_01f0fb, comptool_update_creature_and_thing_01f127
 ******************************************************************************/
undefined4 combtool_update_player_dungeon_018a55(void)

{
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  int val_4;
  uint uval;
  uint player_off;
  int val_5;
  int extraout_ECX;
  int val_6;
  int arg_edx;
  int val_7;
  undefined8 uval_2;
  undefined2 *local_20;
  uint local_1c;
  
  val = *(int *)(arg_eax + 0x24);
  val_2 = comptool_update_creature_and_thing_01f0fb();
  val_3 = comptool_update_creature_and_thing_01f127();
  val_4 = comptask_process_dungeon_room_01d5a1();
  local_1c = 0;
  local_20 = &g_dungeons;
  val_7 = 0;
  do {
    uval = (uint)*(char *)(val + 0xe9f);
    if ((((local_1c != uval) && (((&g_players)[val_7] & 1) != 0)) &&
        ((&g_bss_0019d0f4)[val_7] == '\x01')) &&
       ((((player_off = (uint)g_neutral_player_number, player_off == uval || (player_off == local_1c)) ||
         ((((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << ((byte)local_1c & 0x1f)) == 0 ||
          ((player_off == local_1c || (player_off == uval)))))) ||
        (((uint)(byte)(&g_player_view_flags)[val_7] & 1 << (*(byte *)(val + 0xe9f) & 0x1f)) == 0)))) {
      comptool_update_creature_and_thing_01f0fb();
      comptool_update_creature_and_thing_01f127();
      uval_2 = comptool_update_creature_and_thing_01f0fb();
      if (val_2 <= (int)uval_2) {
        *(int *)(arg_eax + 0xa16) = *(int *)(arg_eax + 0xa16) + 1;
      }
      if (val_3 + val_3 / 6 < (int)((ulonglong)uval_2 >> 0x20)) {
        *(int *)(arg_eax + 0xa16) = *(int *)(arg_eax + 0xa16) + 1;
      }
      if ((uint)*(byte *)(val + 0x93a) + *(byte *)(val + 0x93a) / 6 <
          (uint)*(byte *)(local_20 + 0x49d)) {
        *(int *)(arg_eax + 0xa16) = *(int *)(arg_eax + 0xa16) + 1;
      }
      val_5 = comptask_process_dungeon_room_01d5a1();
      val_6 = extraout_ECX;
      if (val_4 < val_5) {
        val_6 = extraout_ECX + 1;
        *(int *)(arg_eax + 0xa16) = *(int *)(arg_eax + 0xa16) + 5;
      }
      if ((val_6 == 0) && (*(uint *)(arg_edx + 0x10) < g_game_turn)) {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        if (g_action_random_seed % 100 < 0x14) {
          *(int *)(arg_eax + 0xa16) = *(int *)(arg_eax + 0xa16) + 1;
        }
      }
    }
    local_20 = local_20 + 0xa84;
    local_1c = local_1c + 1;
    val_7 = val_7 + 0x4ef;
    arg_eax = arg_eax + 0x18a;
  } while ((int)local_1c < 5);
  return 4;
}

/******************************************************************************
 * Function : combtool_fn_018d16 (Original VA: 0x18d16, Ghidra: FUN_00018d16)
 * Prototype: undefined4 combtool_fn_018d16(void);
 * Address  : 0x18d16 (Size: 11 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combtool.cpp procedure @ 0x018d16
 * Callers  : 4 -> compevnt_roll_action_random_018ffe, compevnt_update_creature_and_thing_01916a, compevnt_process_dungeon_room_0194e8, compevnt_fn_0197a9
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 combtool_fn_018d16(void)

{
  return 1;
}

