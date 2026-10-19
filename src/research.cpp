/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: research.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 19
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : research_update_creature_control_066247 (Original VA: 0x66247, Ghidra: FUN_00066247)
 * Prototype: undefined8 research_update_creature_control_066247(void);
 * Address  : 0x66247 (Size: 236 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 10 -> combchk_fn_01614f, combmove_update_creature_control_01671a, combtool_fn_0189d4, instance_negative_instance_049bfc, instance_update_creature_control_049ea9, person_fn_063b6d, prison_fn_065f82, prison_update_creature_and_thing_06616d ...
 ******************************************************************************/
undefined8 research_update_creature_control_066247(void)

{
  short short_val;
  int thing;
  int val;
  undefined4 *word_ptr;
  undefined8 uval;
  undefined4 uStack_18;
  
  word_ptr = (undefined4 *)&stack0xffffffec;
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0') { /* thing->ccontrol_idx */
    uStack_18 = 0x6627a;
    val = instance_update_creature_control_049ea9();
    if (val == 0) {
      uStack_18 = 0x66315;
      short_val = move_process_slabmap_tile_0b5264();
      word_ptr = (undefined4 *)&stack0xffffffec;
      if (short_val != 0) {
        *(undefined1 *)(thing + 8) = 0x88; /* thing->active_state */
        word_ptr = (undefined4 *)&stack0xffffffec;
      }
    }
    else {
      uStack_18 = 0x66289;
      val = prison_update_creature_and_thing_06616d();
      if (val == 0) {
        uStack_18 = 0x6632e;
        person_fn_063b6d();
        uval = prison_fn_065f82();
        return uval;
      }
      uStack_18 = 0x6629e;
      val = combtool_fn_0189d4();
      if (val < 0x9c) {
        uStack_18 = 0x66309;
        combmove_update_creature_control_01671a();
        word_ptr = (undefined4 *)&stack0xffffffec;
      }
      else {
        if (val < 0x801) {
          uStack_18 = 0x662b7;
          val = combchk_fn_01614f();
          if (val != 0) {
            uStack_18 = 0;
            instance_negative_instance_049bfc();
            word_ptr = &uStack_18;
            goto LAB_00066264;
          }
        }
        uStack_18 = 0;
        move_fn_0b4ac4();
        word_ptr = &uStack_18;
      }
    }
  }
LAB_00066264:
  return CONCAT44(*(undefined4 *)((int)word_ptr + 8),1);
}

/******************************************************************************
 * Function : research_update_player_dungeon_066334 (Original VA: 0x66334, Ghidra: FUN_00066334)
 * Prototype: longlong research_update_player_dungeon_066334(void);
 * Address  : 0x66334 (Size: 69 bytes)
 * Module   : research.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 5 -> evil_update_creature_control_02796f, research_update_creature_control_066379, research_move_research_room_066447, research_update_creature_control_06655e, room_update_creature_control_0cb33c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong research_update_player_dungeon_066334(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((((int)*(char *)(arg_eax + 6) != (uint)g_neutral_player_number) &&
      ((&g_bss_002e91a1)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0')) &&
     (-1 < *(int *)(&g_bss_002e1501 + *(char *)(arg_eax + 6) * 0x1508))) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : research_update_creature_control_066379 (Original VA: 0x66379, Ghidra: FUN_00066379)
 * Prototype: undefined8 research_update_creature_control_066379(void);
 * Address  : 0x66379 (Size: 206 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> research_update_creature_control_06655e
 * Callees  : 5 -> person_fn_063b6d, research_update_player_dungeon_066334, research_update_creature_and_thing_0666a8, scavenge_fn_067018, scavenge_fn_06709c
 ******************************************************************************/
undefined8 research_update_creature_control_066379(void)

{
  char ch;
  ushort cctrl_ptr;
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  int room_off;
  
  ch = *(char *)(thing + 6); /* thing->owner */
  cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e); /* thing->ccontrol_idx */
  val = research_update_player_dungeon_066334();
  if (val != 0) {
    val = scavenge_fn_06709c();
    if (val != 0) {
      val = scavenge_fn_067018(100);
      room_off = (int)(val * (uint)*(ushort *)(&g_bss_002ddd5a + (uint)cctrl_ptr * 0x45)) >> 0x1f;
      val = (int)((val * (uint)*(ushort *)(&g_bss_002ddd5a + (uint)cctrl_ptr * 0x45) + room_off * -0x100)
                   - (uint)(room_off << 7 < 0)) >> 8;
      (&g_bss_002e1706)[ch * 0x542] = (&g_bss_002e1706)[ch * 0x542] + val;
      *(int *)(&g_bss_002e171c + ch * 0x1508) = *(int *)(&g_bss_002e171c + ch * 0x1508) + val;
      research_update_creature_and_thing_0666a8();
      uval = 0;
      goto LAB_00066440;
    }
  }
  person_fn_063b6d();
  uval = 1;
LAB_00066440:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : research_move_research_room_066447 (Original VA: 0x66447, Ghidra: FUN_00066447)
 * Prototype: longlong research_move_research_room_066447(void);
 * Address  : 0x66447 (Size: 279 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 82
 * Purpose  : String 'CANNOT MOVE IN RESEARCH ROOM C%d, M%d'
 * Callers  : 0 -> 
 * Callees  : 9 -> moodneed_fn_051374, person_fn_063b6d, research_update_player_dungeon_066334, research_update_creature_control_06666f, room_attempt_add_creature_room_0cd85c, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50, LbErrorLog ...
 ******************************************************************************/
longlong research_move_research_room_066447(void)

{
  char ch;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  val = research_update_player_dungeon_066334();
  if (val == 0) {
    if ((((int)*(char *)(extraout_ECX + 6) != (uint)g_neutral_player_number) &&
        (val = *(char *)(extraout_ECX + 6) * 0x1508, *(int *)(&g_bss_002e1501 + val) < 0)) &&
       ((int)(char)(&g_bss_002e1428)[val] == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]
       )) {
      moodneed_fn_051374();
    }
  }
  else {
    val = room_update_slab_subtile_columns_0d0f50();
    if (((val != 0) && (*(short *)(val + 10) == 3)) &&
       (*(char *)(val + 3) == *(char *)(extraout_ECX_00 + 6))) {
      ch = room_attempt_add_creature_room_0cd85c();
      if (ch != '\0') {
        val = research_update_creature_control_06666f();
        if (val != 0) {
          return CONCAT44(arg_edx,1);
        }
        dk_sprintf(&g_log_sprintf_buf,s_CANNOT_MOVE_IN_RESEARCH_ROOM_C_d_00166918,
                     *(undefined1 *)(extraout_ECX_01 + 0x1f),*(undefined1 *)(extraout_ECX_01 + 0x1a)
                    );
        LbErrorLog(); /* LbErrorLog("research.cpp", line 82, g_log_buf) */
        room_attempt_remove_creature_room_0cd9b0();
      }
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : research_update_creature_control_06655e (Original VA: 0x6655e, Ghidra: FUN_0006655e)
 * Prototype: longlong research_update_creature_control_06655e(void);
 * Address  : 0x6655e (Size: 273 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 7 -> moodneed_fn_051374, person_fn_063b6d, research_update_player_dungeon_066334, research_update_creature_control_066379, research_move_research_room_0668b0, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong research_update_creature_control_06655e(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  undefined8 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = research_update_player_dungeon_066334();
  val = (int)((ulonglong)uval >> 0x20);
  if ((int)uval == 0) {
    if ((((int)*(char *)(extraout_ECX + 6) == (uint)g_neutral_player_number) ||
        (-1 < *(int *)(&g_bss_002e1501 + val))) ||
       ((int)(char)(&g_bss_002e1428)[val] != (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]
       )) goto LAB_0006665b;
  }
  else {
    val = room_update_slab_subtile_columns_0d0f50();
    if (((val == 0) || (*(short *)(val + 10) != 3)) ||
       ((*(short *)(val + 1) != *(short *)(cctrl_ptr + 0x7e) ||
        (*(char *)(val + 3) != *(char *)(extraout_ECX_00 + 6))))) goto LAB_0006665b;
    if (*(ushort *)(val + 0x10) <= *(ushort *)(val + 0xe)) {
      research_update_creature_control_066379();
      research_move_research_room_0668b0();
      return CONCAT44(arg_edx,1);
    }
    if ((int)*(char *)(val + 3) != (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])
    goto LAB_0006665b;
  }
  moodneed_fn_051374();
LAB_0006665b:
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : research_update_creature_control_06666f (Original VA: 0x6666f, Ghidra: FUN_0006666f)
 * Prototype: bool research_update_creature_control_06666f(void);
 * Address  : 0x6666f (Size: 57 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> research_move_research_room_066447, research_move_research_room_0668b0
 * Callees  : 1 -> room_fn_0cc4a0
 ******************************************************************************/
bool research_update_creature_control_06666f(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int extraout_ECX;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = room_fn_0cc4a0();
  if (val != 0) {
    *(undefined1 *)(extraout_ECX + 8) = 0x1f;
    *(undefined4 *)(cctrl_ptr + 0x82) = 0;
    *(undefined1 *)(cctrl_ptr + 0x9a) = 3;
  }
  return val != 0;
}

/******************************************************************************
 * Function : research_update_creature_and_thing_0666a8 (Original VA: 0x666a8, Ghidra: FUN_000666a8)
 * Prototype: uint research_update_creature_and_thing_0666a8(void);
 * Address  : 0x666a8 (Size: 520 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> research_update_creature_control_066379
 * Callees  : 8 -> anger_fn_010434, combchk_fn_01614f, combtool_fn_018736, combtool_fn_0189d4, evil_fn_027944, instance_negative_instance_049bfc, person_external_change_state_but_064a5f, move_update_creature_control_0b3b58
 ******************************************************************************/
uint research_update_creature_and_thing_0666a8(void)

{
  ushort uval;
  int thing;
  int val;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  int val_2;
  int val_3;
  uint cctrl_ptr;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int arg_edx;
  uint thing_ptr;
  int val_4;
  int local_30;
  uint local_28;
  int local_18;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_30 = 0x7fffffff;
  uval_3 = (int)*(short *)(&g_bss_002e91d7 + val);
  if ((((0 < *(short *)(&g_bss_002e91d7 + val)) &&
       (uval_3 = (uint)*(byte *)(cctrl_ptr + 0xd2), *(byte *)(cctrl_ptr + 0xd2) == 0)) &&
      (uval_2 = (uint)*(ushort *)(thing + 0x1b) + g_game_turn, /* thing->index_or_angle */
      uval_3 = uval_2 / (uint)(int)*(short *)(&g_bss_002e91d7 + val),
      uval_2 % (uint)(int)*(short *)(&g_bss_002e91d7 + val) == 0)) &&
     ((uval_3 = (uint)*(ushort *)(&g_bss_002e910d + val), *(ushort *)(&g_bss_002e910d + val) == 4 &&
      (uval_3 = combtool_fn_018736(), 0 < (int)uval_3)))) {
    uval = *(ushort *)(arg_edx + 0x37);
    uval_2 = extraout_ECX;
    local_28 = extraout_ECX;
    while( true ) {
      uval_4 = (uint)uval;
      if ((int)(uint)*(ushort *)(arg_edx + 0x3b) <= (int)local_28) break;
      val = (uval_4 % 0x55) * 3;
      val_4 = (uval_4 / 0x55) * 3;
      for (local_18 = 0; local_18 < 9; local_18 = local_18 + 1) {
        for (thing_ptr = (*(uint *)((int)&g_map_subtiles +
                               ((local_18 / 3 + val_4) * 0x100 + val + local_18 % 3) * 5 + 1) &
                     0x3fffff) >> 0xb; thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
            thing_ptr = (uint)*(ushort *)(thing_ptr + 2)) {
          if ((*(char *)(thing_ptr + 0x1f) == '\x05') && /* thing->class_id */
             (val_2 = evil_fn_027944(val,val_4,uval_3), uval_2 = extraout_ECX_00, val_2 == 0)) {
            val_2 = combtool_fn_0189d4();
            val_3 = combchk_fn_01614f();
            if (0 < val_3) {
              instance_negative_instance_049bfc(0);
              person_external_change_state_but_064a5f();
              *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x9a) = /* thing->ccontrol_idx */
                   *(undefined2 *)(arg_edx + 1);
              cctrl_ptr = anger_fn_010434();
              return cctrl_ptr;
            }
            uval_2 = extraout_ECX_01;
            if (val_2 < local_30) {
              uval_2 = thing_ptr;
              local_30 = val_2;
            }
          }
        }
      }
      uval = *(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
      local_28 = local_28 + 1;
    }
    uval_3 = (uint)*(ushort *)(arg_edx + 0x3b);
    if ((uval_2 != 0) && (uval_3 = move_update_creature_control_0b3b58(), (short)uval_3 != 0)) {
      *(undefined1 *)(thing + 8) = 0x1f; /* thing->active_state */
      *(undefined4 *)(cctrl_ptr + 0x82) = 0;
      *(undefined1 *)(cctrl_ptr + 0x9a) = 3;
      uval_3 = cctrl_ptr;
    }
  }
  return uval_3;
}

/******************************************************************************
 * Function : research_move_research_room_0668b0 (Original VA: 0x668b0, Ghidra: FUN_000668b0)
 * Prototype: uint research_move_research_room_0668b0(void);
 * Address  : 0x668b0 (Size: 362 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 289
 * Purpose  : String 'I CANNOT MOVE IN RESEARCH ROOM C%d, M%d'
 * Callers  : 1 -> research_update_creature_control_06655e
 * Callees  : 7 -> anger_fn_010132, person_fn_063b6d, person_external_change_state_but_064a5f, research_update_creature_control_06666f, research_fn_066eff, LbErrorLog, dk_sprintf
 ******************************************************************************/
uint research_move_research_room_0668b0(void)

{
  int val;
  ushort uval;
  int val_2;
  int thing;
  uint uval_2;
  int cctrl_ptr;
  int extraout_ECX;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (((uint)(g_game_turn - *(int *)(&g_bss_002e106e + *(char *)(thing + 6) * 0x1508)) < 0x32) && /* thing->owner */
     (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 3) == 0)) { /* thing->index_or_angle */
    uval_2 = person_external_change_state_but_064a5f();
    *(undefined2 *)(cctrl_ptr + 0x282) = 0x32;
    *(undefined4 *)(cctrl_ptr + 0x9a) = 0;
    return uval_2;
  }
  uval_2 = (uint)*(byte *)(cctrl_ptr + 0xd2);
  if (uval_2 == 0) {
    val_2 = *(int *)(cctrl_ptr + 0x82);
    val = val_2 + 1;
    *(int *)(cctrl_ptr + 0x82) = val;
    if (val_2 < 0x80) {
      if (*(char *)(cctrl_ptr + 0x9a) == '\x03') {
        uval_2 = val / 0x10;
        if (val % 0x10 == 0) {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          uval_2 = g_action_random_seed >> 0xd;
          g_action_random_seed = uval_2 | g_action_random_seed * 0x80000;
          uval = *(ushort *)(thing + 0x52); /* thing->health */
          *(undefined1 *)(cctrl_ptr + 0x9a) = 4;
          uval_2 = ((uint)uval + (uval_2 & 0x3ff)) - 0x200 & 0x7ff;
          *(uint *)(cctrl_ptr + 0x9b) = uval_2;
          return uval_2;
        }
      }
      else {
        uval_2 = anger_fn_010132();
        if ((int)uval_2 < 0x38) {
          *(undefined1 *)(cctrl_ptr + 0x9a) = 3;
          return uval_2;
        }
      }
    }
    else {
      cctrl_ptr = research_update_creature_control_06666f();
      if (cctrl_ptr != 0) {
        uval_2 = research_fn_066eff();
        return uval_2;
      }
      dk_sprintf(&g_log_sprintf_buf,s_I_CANNOT_MOVE_IN_RESEARCH_ROOM_C_0016694b,
                   *(undefined1 *)(extraout_ECX + 0x1f),*(undefined1 *)(extraout_ECX + 0x1a));
      LbErrorLog(); /* LbErrorLog("research.cpp", line 289, g_log_buf) */
      uval_2 = person_fn_063b6d();
    }
  }
  return uval_2;
}

/******************************************************************************
 * Function : research_illegal_research_type_getting_066a1a (Original VA: 0x66a1a, Ghidra: FUN_00066a1a)
 * Prototype: undefined8 research_illegal_research_type_getting_066a1a(void);
 * Address  : 0x66a1a (Size: 133 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 335
 * Purpose  : String 'Illegal research type in getting next research item'
 * Callers  : 3 -> inits_update_player_dungeon_040832, research_illegal_research_type_process_066b28, research_update_player_dungeon_066d65
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined8 research_illegal_research_type_getting_066a1a(void)

{
  char ch;
  byte flag;
  int arg_eax;
  byte *extraout_ECX;
  byte *byte_ptr;
  undefined4 arg_edx;
  int loop_i;
  
  byte_ptr = (byte *)(arg_eax + 0xeac);
  for (loop_i = 0; loop_i < (int)(uint)*(byte *)(arg_eax + 0xf7c); loop_i = loop_i + 1) {
    flag = *byte_ptr;
    if (flag == 0) {
LAB_00066a64:
      LbErrorLog(); /* LbErrorLog("research.cpp", line 335, "Illegal research type in getting next research item") */
      byte_ptr = extraout_ECX;
    }
    else if (flag < 2) {
      if (*(char *)((uint)byte_ptr[1] + arg_eax + 0xff4) != '\0') {
        ch = *(char *)((uint)byte_ptr[1] + arg_eax + 0xfe0);
LAB_00066a41:
        if (ch == '\0') goto LAB_00066441;
      }
    }
    else {
      if (flag != 2) goto LAB_00066a64;
      if (*(char *)((uint)byte_ptr[1] + arg_eax + 0xf8f) != '\0') {
        ch = *(char *)((uint)byte_ptr[1] + arg_eax + 0xf7e);
        goto LAB_00066a41;
      }
    }
    byte_ptr = byte_ptr + 6;
  }
  loop_i = -1;
LAB_00066441:
  return CONCAT44(arg_edx,loop_i);
}

/******************************************************************************
 * Function : research_illegal_research_type_process_066a9f (Original VA: 0x66a9f, Ghidra: FUN_00066a9f)
 * Prototype: undefined4 research_illegal_research_type_process_066a9f(void);
 * Address  : 0x66a9f (Size: 137 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 376
 * Purpose  : String 'Illegal research type in process player research'
 * Callers  : 2 -> research_illegal_research_type_process_066b28, research_update_player_dungeon_066d65
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 research_illegal_research_type_process_066a9f(void)

{
  byte flag;
  char ch;
  byte *arg_eax;
  int arg_edx;
  
  flag = *arg_eax;
  if (flag < 2) {
    if (flag != 1) {
LAB_00066b09:
      LbErrorLog(); /* LbErrorLog("research.cpp", line 376, "Illegal research type in process player research") */
      return 0;
    }
    if (*(char *)((uint)arg_eax[1] + arg_edx + 0xff4) == '\0') {
      return 0;
    }
    ch = *(char *)((uint)arg_eax[1] + arg_edx + 0xfe0);
  }
  else if (flag < 3) {
    if (*(char *)((uint)arg_eax[1] + arg_edx + 0xf8f) == '\0') {
      return 0;
    }
    ch = *(char *)((uint)arg_eax[1] + arg_edx + 0xf7e);
  }
  else {
    if (flag != 3) goto LAB_00066b09;
    if (*(char *)((uint)arg_eax[1] + arg_edx + 0xfc0) == '\0') {
      return 0;
    }
    ch = *(char *)((uint)arg_eax[1] + arg_edx + 4000);
  }
  if (ch != '\0') {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : research_illegal_research_type_process_066b28 (Original VA: 0x66b28, Ghidra: FUN_00066b28)
 * Prototype: void research_illegal_research_type_process_066b28(void);
 * Address  : 0x66b28 (Size: 573 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 471
 * Purpose  : String 'Illegal research type in process player research'
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 10 -> effect_allocate_light_effect_024998, event_illegal_event_number_created_027390, moodneed_fn_051374, research_illegal_research_type_getting_066a1a, research_illegal_research_type_process_066a9f, research_could_find_room_thing_066dc2, move_process_map_subtile_0b3788, room_process_dungeon_room_0ca65c ...
 ******************************************************************************/
void research_illegal_research_type_process_066b28(void)

{
  byte flag;
  uint arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  uint *word_ptr;
  int dungeon_off;
  byte *byte_ptr;
  uint uStack_28;
  uint local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  
  dungeon_off = arg_eax * 0x1508;
  uStack_28 = 0x66b42;
  local_24 = arg_eax;
  val = room_process_dungeon_room_0d129c();
  if (val == 0) {
    return;
  }
  if (*(int *)(&g_bss_002e1501 + dungeon_off) < 0) {
    uStack_28 = 0x66d5a;
    uval = research_illegal_research_type_getting_066a1a();
    *(undefined4 *)(&g_bss_002e1501 + dungeon_off) = uval;
    return;
  }
  val = *(int *)(&g_bss_002e1501 + dungeon_off);
  uStack_28 = 0x66b75;
  val_2 = research_illegal_research_type_process_066a9f();
  if (val_2 == 0) {
    uStack_28 = 0x66b80;
    val = research_illegal_research_type_getting_066a1a();
    *(int *)(&g_bss_002e1501 + dungeon_off) = val;
    if (val < 0) {
      return;
    }
  }
  byte_ptr = (byte *)(val * 6 + dungeon_off + 0x2e1435);
  if (*(int *)(&g_bss_002e171c + dungeon_off) < *(int *)(byte_ptr + 2) * 0x100) {
    return;
  }
  flag = *byte_ptr;
  if (flag < 2) {
    if (flag == 1) {
      word_ptr = &local_24;
      if (*(char *)((int)&g_dungeons + byte_ptr[1] + 0xff4 + dungeon_off) != '\0') {
        uStack_28 = 0x66ca7;
        val = room_process_dungeon_room_0ca65c();
        if (val == 0) {
          return;
        }
        uStack_28 = 0x66cbb;
        val = research_could_find_room_thing_066dc2();
        if (val == 0) {
          return;
        }
        if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_24) {
          uStack_28 = 0x66ced;
          moodneed_fn_051374();
        }
        *(undefined1 *)((int)&g_dungeons + byte_ptr[1] + 0xfe0 + dungeon_off) = 1;
        word_ptr = &local_24;
      }
      goto LAB_00066c5c;
    }
  }
  else {
    if (flag < 3) {
      word_ptr = &local_24;
      if ((&g_bss_002e1518)[(uint)byte_ptr[1] + dungeon_off] != '\0') {
        uStack_28 = (uint)byte_ptr[1];
        event_illegal_event_number_created_027390();
        *(undefined1 *)((int)&g_dungeons + byte_ptr[1] + 0xf7e + dungeon_off) = 1;
        if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_24) {
          moodneed_fn_051374();
        }
        val = room_process_dungeon_room_0ca65c();
        word_ptr = &uStack_28;
        if (val != 0) {
          local_20 = (ushort)*(byte *)(val + 8) * 0x100 + 0x80;
          local_1e = (ushort)*(byte *)(val + 9) * 0x100 + 0x80;
          local_1c = move_process_map_subtile_0b3788();
          effect_allocate_light_effect_024998();
          word_ptr = &uStack_28;
        }
      }
      goto LAB_00066c5c;
    }
    if (flag == 3) {
      word_ptr = &local_24;
      if (*(char *)((int)&g_dungeons + (uint)byte_ptr[1] + dungeon_off + 0xfc0) != '\0') {
        *(undefined1 *)((int)&g_dungeons + (uint)byte_ptr[1] + dungeon_off + 4000) = 1;
        word_ptr = &local_24;
      }
      goto LAB_00066c5c;
    }
  }
  uStack_28 = 0x66d4e;
  LbErrorLog(); /* LbErrorLog("research.cpp", line 471, "Illegal research type in process player research") */
  word_ptr = &local_24;
LAB_00066c5c:
  *(int *)(&g_bss_002e171c + dungeon_off) = *(int *)(&g_bss_002e171c + dungeon_off) + *(int *)(byte_ptr + 2) * -0x100;
  *(undefined4 *)(&g_bss_002e106e + dungeon_off) = g_game_turn;
  *(undefined4 *)((int)word_ptr + -4) = 0x66c7a;
  uval = research_illegal_research_type_getting_066a1a();
  *(undefined4 *)(&g_bss_002e1501 + dungeon_off) = uval;
  *(int *)(&g_bss_002e1720 + dungeon_off) = *(int *)(&g_bss_002e1720 + dungeon_off) + 1;
  return;
}

/******************************************************************************
 * Function : research_update_player_dungeon_066d65 (Original VA: 0x66d65, Ghidra: FUN_00066d65)
 * Prototype: void research_update_player_dungeon_066d65(void);
 * Address  : 0x66d65 (Size: 93 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> temple_how_you_sacrifice_neutral_0731f3
 * Callees  : 2 -> research_illegal_research_type_getting_066a1a, research_illegal_research_type_process_066a9f
 ******************************************************************************/
void research_update_player_dungeon_066d65(void)

{
  int arg_eax;
  int dungeon_off;
  int val;
  int val_2;
  int extraout_ECX;
  
  dungeon_off = arg_eax * 0x1508;
  if (-1 < *(int *)(&g_bss_002e1501 + dungeon_off)) {
    val = research_illegal_research_type_process_066a9f();
    val_2 = extraout_ECX;
    if (val == 0) {
      val_2 = research_illegal_research_type_getting_066a1a();
      *(int *)(&g_bss_002e1501 + dungeon_off) = val_2;
      if (val_2 < 0) {
        return;
      }
      val_2 = val_2 * 6 + dungeon_off + 0x2e1435;
    }
    *(int *)(&g_bss_002e171c + dungeon_off) = *(int *)(val_2 + 2) << 8;
  }
  return;
}

/******************************************************************************
 * Function : research_could_find_room_thing_066dc2 (Original VA: 0x66dc2, Ghidra: FUN_00066dc2)
 * Prototype: undefined4 research_could_find_room_thing_066dc2(void);
 * Address  : 0x66dc2 (Size: 266 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 551, 564
 * Purpose  : String 'Could not find room for thing'
 * Callers  : 1 -> research_illegal_research_type_process_066b28
 * Callees  : 10 -> effect_allocate_light_effect_024998, event_illegal_event_number_created_027390, inits_allocate_light_object_043f07, magic_update_player_dungeon_04fd81, structs_update_creature_control_072af4, move_process_map_subtile_0b28e8, move_fn_0b3b10, room_process_dungeon_room_0c9e8c ...
 ******************************************************************************/
undefined4 research_could_find_room_thing_066dc2(void)

{
  char ch;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  
  val = inits_allocate_light_object_043f07();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("research.cpp", line 551, "Could not find room for thing") */
  }
  else {
    val = room_process_dungeon_room_0c9e8c();
    if ((val != 0) && (ch = room_number_slabs_room_zero_0ccf10(), ch != '\0')) {
      move_process_map_subtile_0b28e8();
      magic_update_player_dungeon_04fd81();
      move_fn_0b3b10();
      *(short *)(extraout_ECX + 0x10) = *(short *)(extraout_ECX + 0x10) + 1;
      *(int *)(extraout_ECX + 0x17) = *(int *)(extraout_ECX + 0x17) + 1;
      event_illegal_event_number_created_027390(arg_edx);
      effect_allocate_light_effect_024998();
      return 1;
    }
    LbErrorLog(); /* LbErrorLog("research.cpp", line 564, "COULD NOT CREATE SPELL") */
    structs_update_creature_control_072af4();
  }
  return 0;
}

/******************************************************************************
 * Function : research_update_player_dungeon_066ecc (Original VA: 0x66ecc, Ghidra: FUN_00066ecc)
 * Prototype: longlong research_update_player_dungeon_066ecc(void);
 * Address  : 0x66ecc (Size: 51 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> newgui_update_player_dungeon_05674c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong research_update_player_dungeon_066ecc(void)

{
  int arg_eax;
  int dungeon_off;
  uint arg_edx;
  
  dungeon_off = arg_eax * 0x1508;
  if (-1 < *(int *)(&g_bss_002e1501 + dungeon_off)) {
    return CONCAT44(arg_edx,*(int *)(*(int *)(&g_bss_002e1501 + dungeon_off) * 6 + dungeon_off + 0x2e1437) << 8);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : research_fn_066eff (Original VA: 0x66eff, Ghidra: FUN_00066eff)
 * Prototype: longlong research_fn_066eff(void);
 * Address  : 0x66eff (Size: 80 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Purpose  : Module research.cpp procedure @ 0x066eff
 * Callers  : 1 -> research_move_research_room_0668b0
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
longlong research_fn_066eff(void)

{
  int val;
  uint arg_edx;
  
  val = effect_allocate_light_effect_024998();
  if (val == 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : research_much_research_player_066f4f (Original VA: 0x66f4f, Ghidra: FUN_00066f4f)
 * Prototype: undefined4 research_much_research_player_066f4f(void);
 * Address  : 0x66f4f (Size: 124 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp lines 635
 * Purpose  : String 'TOO MUCH RESEARCH FOR PLAYER %d'
 * Callers  : 1 -> research_fn_066fcb
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
undefined4 research_much_research_player_066f4f(void)

{
  int arg_eax;
  int dungeon_off;
  undefined4 arg_ecx;
  undefined1 arg_dl;
  undefined1 arg_bl;
  int val;
  
  dungeon_off = arg_eax * 0x1508;
  if ((byte)(&g_bss_002e1505)[dungeon_off] < 0x22) {
    val = (uint)(byte)(&g_bss_002e1505)[dungeon_off] * 6;
    *(undefined1 *)(dungeon_off + 0x2e1435 + val) = arg_dl;
    *(undefined4 *)(dungeon_off + 0x2e1437 + val) = arg_ecx;
    *(undefined1 *)(dungeon_off + 0x2e1436 + val) = arg_bl;
    (&g_bss_002e1505)[dungeon_off] = (&g_bss_002e1505)[dungeon_off] + '\x01';
    return 1;
  }
  dk_sprintf(&g_log_sprintf_buf,s_TOO_MUCH_RESEARCH_FOR_PLAYER__d_00166aac);
  LbErrorLog(); /* LbErrorLog("research.cpp", line 635, g_log_buf) */
  return 0;
}

/******************************************************************************
 * Function : research_fn_066fcb (Original VA: 0x66fcb, Ghidra: FUN_00066fcb)
 * Prototype: undefined4 research_fn_066fcb(void);
 * Address  : 0x66fcb (Size: 46 bytes)
 * Module   : research.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module research.cpp procedure @ 0x066fcb
 * Callers  : 1 -> file_data_creature_txt_02b36c
 * Callees  : 1 -> research_much_research_player_066f4f
 ******************************************************************************/
undefined4 research_fn_066fcb(void)

{
  int val;
  
  val = 0;
  do {
    val = val + 1;
    research_much_research_player_066f4f();
  } while (val < 5);
  return 1;
}

/******************************************************************************
 * Function : research_update_player_dungeon_066ff9 (Original VA: 0x66ff9, Ghidra: FUN_00066ff9)
 * Prototype: undefined4 research_update_player_dungeon_066ff9(void);
 * Address  : 0x66ff9 (Size: 31 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 research_update_player_dungeon_066ff9(void)

{
  int arg_eax;
  
  (&g_bss_002e1505)[arg_eax * 0x1508] = 0;
  (&g_bss_002e1a36)[arg_eax * 0x1508] = 1;
  return 1;
}

/******************************************************************************
 * Function : research_update_slab_subtile_columns_0670b2 (Original VA: 0x670b2, Ghidra: FUN_000670b2)
 * Prototype: void research_update_slab_subtile_columns_0670b2(void);
 * Address  : 0x670b2 (Size: 311 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 2 -> sound_room_ambient_sound_object_06e8fc, bflib_system_io_fn_0f27d0
 ******************************************************************************/
void research_update_slab_subtile_columns_0670b2(void)

{
  byte player_off;
  byte player_off_2;
  int room_ptr;
  int val;
  char *str_ptr;
  int val_2;
  int local_20;
  
  player_off = *(byte *)(*(int *)((int)&g_player_active_camera + g_my_player_word._3_1_ * 0x4ef) + 1);
  player_off_2 = *(byte *)(*(int *)((int)&g_player_active_camera + g_my_player_word._3_1_ * 0x4ef) + 3);
  str_ptr = (char *)&g_bss_002ee9c1;
  if ((g_bss_00334019 == 0) && (room_ptr = bflib_system_io_fn_0f27d0(), 0 < room_ptr)) {
    for (local_20 = 0; local_20 < 0x78; local_20 = local_20 + 1) {
      val_2 = (int)str_ptr[1] + player_off / 3;
      val = (int)*str_ptr + player_off_2 / 3;
      room_ptr = val_2 * 3;
      if ((((room_ptr < 0xfe) && (-1 < room_ptr)) && (val * 3 < 0xfe)) &&
         (((-1 < val * 3 &&
           ((*(byte *)((int)&g_map_subtiles + (val * 0x300 + room_ptr) * 5) & 2) != 0)) &&
          ((room_ptr = ((&g_subtile_to_slab_lut)[val_2 * 3] + (&g_subtile_to_slab_lut)[val * 3] * 0x55) * 6,
           ((&g_slabmap)[room_ptr] & 7) == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] &&
           (*(short *)(&g_data_0018f7cd +
                      (uint)*(ushort *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[room_ptr] * 0x45) *
                      6) != 0)))))) break;
      str_ptr = str_ptr + 4;
    }
    sound_room_ambient_sound_object_06e8fc();
  }
  return;
}

