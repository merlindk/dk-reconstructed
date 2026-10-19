/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: torture.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : torture_update_slab_subtile_columns_074038 (Original VA: 0x74038, Ghidra: FUN_00074038)
 * Prototype: undefined4 torture_update_slab_subtile_columns_074038(void);
 * Address  : 0x74038 (Size: 818 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> torture_update_creature_control_074853
 * Callees  : 4 -> combtool_couldn_get_flee_position_017db0, dungeon_update_slab_subtile_columns_023de2, moodneed_fn_051374, creature_process_map_subtile_082828
 ******************************************************************************/
undefined4 torture_update_slab_subtile_columns_074038(void)

{
  int *slab_coord;
  byte thing_ptr;
  byte thing_ptr_2;
  bool flag;
  int val;
  int thing;
  char *str_ptr;
  int val_2;
  byte *byte_ptr;
  int val_3;
  char *extraout_ECX;
  char *str_ptr_2;
  uint arg_edx;
  int val_4;
  uint uval;
  int local_40;
  uint local_34;
  uint local_28;
  byte local_24;
  uint local_18;
  
  local_40 = 0x20;
  flag = false;
  if ((&g_dungeons)[*(char *)(thing + 6) * 0xa84] == 0) { /* thing->owner */
    combtool_couldn_get_flee_position_017db0();
    thing_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x289); /* thing->ccontrol_idx */
    thing_ptr_2 = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x28b); /* thing->ccontrol_idx */
  }
  else {
    thing_ptr = *(byte *)((&g_thing_ptrs)[(ushort)(&g_dungeons)[*(char *)(thing + 6) * 0xa84]] + 0xe) /* thing->owner */
    ;
    thing_ptr_2 = *(byte *)((&g_thing_ptrs)[(ushort)(&g_dungeons)[*(char *)(thing + 6) * 0xa84]] + 0x10 /* thing->owner */
                     );
  }
  val = g_scratch_work_buf;
  val_3 = 0;
  str_ptr = (char *)(g_scratch_work_buf + 0x1c39);
  val_4 = g_scratch_work_buf;
  do {
    val_2 = 0;
    do {
      slab_coord = (int *)((int)&g_subtile_to_slab_lut + val_2);
      val_2 = val_2 + 0xc;
      *(bool *)val_4 =
           (uint)((&g_slabmap)[(*slab_coord + *(int *)((int)&g_subtile_to_slab_lut + val_3) * 0x55) * 6] & 7)
           != (int)*(char *)(thing + 6); /* thing->owner */
      val_4 = val_4 + 1;
    } while (val_2 != 0x3fc);
    val_3 = val_3 + 0xc;
  } while (val_3 != 0x3fc);
  local_34 = thing_ptr / 3;
  local_18 = thing_ptr_2 / 3;
  local_24 = (byte)arg_edx;
  local_28 = 0;
  byte_ptr = (byte *)(local_18 * 0x55 + local_34 + val);
  uval = 0;
  *byte_ptr = *byte_ptr | 2;
  str_ptr_2 = str_ptr;
  do {
    if ((1 << (local_24 & 0x1f) &
        *(uint *)((int)&g_map_subtiles + (local_34 * 3 + local_18 * 0x300) * 5 + 1) >> 0x1c) == 0) {
      dungeon_update_slab_subtile_columns_023de2();
      flag = true;
      creature_process_map_subtile_082828();
      local_40 = local_40 + -1;
      str_ptr_2 = extraout_ECX;
      if (local_40 == 0) break;
    }
    val_4 = local_18 * 0x55 + local_34 + val;
    if ((((*(byte *)(val_4 + -1) & 1) == 0) && ((*(byte *)(val_4 + -1) & 2) == 0)) &&
       (*(byte *)(val_4 + -1) = *(byte *)(val_4 + -1) | 2,
       (uint)((&g_slabmap)
              [((&g_subtile_to_slab_lut)[(local_34 - 1) * 3] + (&g_subtile_to_slab_lut)[local_18 * 3] * 0x55) * 6] & 7
             ) == (int)*(char *)(thing + 6))) { /* thing->owner */
      val_4 = uval * 2;
      str_ptr[val_4] = (char)local_34 + -1;
      uval = uval + 1;
      (str_ptr + val_4)[1] = (char)local_18;
    }
    val_4 = local_18 * 0x55 + local_34 + val;
    if ((((*(byte *)(val_4 + 1) & 1) == 0) && ((*(byte *)(val_4 + 1) & 2) == 0)) &&
       (*(byte *)(val_4 + 1) = *(byte *)(val_4 + 1) | 2,
       (uint)((&g_slabmap)
              [((&g_subtile_to_slab_lut)[local_18 * 3] * 0x55 + (&g_subtile_to_slab_lut)[(local_34 + 1) * 3]) * 6] & 7
             ) == (int)*(char *)(thing + 6))) { /* thing->owner */
      val_4 = uval * 2;
      str_ptr[val_4] = (char)local_34 + '\x01';
      uval = uval + 1;
      (str_ptr + val_4)[1] = (char)local_18;
    }
    byte_ptr = (byte *)((local_18 - 1) * 0x55 + local_34 + val);
    if ((((*byte_ptr & 1) == 0) && ((*byte_ptr & 2) == 0)) &&
       (*byte_ptr = *byte_ptr | 2,
       (uint)((&g_slabmap)
              [((&g_subtile_to_slab_lut)[local_34 * 3] + (&g_subtile_to_slab_lut)[(local_18 - 1) * 3] * 0x55) * 6] & 7
             ) == (int)*(char *)(thing + 6))) { /* thing->owner */
      val_4 = uval * 2;
      str_ptr[val_4] = (char)local_34;
      uval = uval + 1;
      (str_ptr + val_4)[1] = (char)local_18 + -1;
    }
    byte_ptr = (byte *)((local_18 + 1) * 0x55 + local_34 + val);
    if ((((*byte_ptr & 1) == 0) && ((*byte_ptr & 2) == 0)) &&
       (*byte_ptr = *byte_ptr | 2,
       (uint)((&g_slabmap)
              [((&g_subtile_to_slab_lut)[local_34 * 3] + (&g_subtile_to_slab_lut)[(local_18 + 1) * 3] * 0x55) * 6] & 7
             ) == (int)*(char *)(thing + 6))) { /* thing->owner */
      val_4 = uval * 2;
      str_ptr[val_4] = (char)local_34;
      uval = uval + 1;
      (str_ptr + val_4)[1] = (char)local_18 + '\x01';
    }
    local_34 = (uint)*str_ptr_2;
    local_28 = local_28 + 1;
    local_18 = (uint)str_ptr_2[1];
    str_ptr_2 = str_ptr_2 + 2;
  } while (local_28 <= uval);
  if ((flag) &&
     (((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == arg_edx ||
      ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])))) { /* thing->owner */
    moodneed_fn_051374();
  }
  return 1;
}

/******************************************************************************
 * Function : torture_update_creature_and_thing_07436a (Original VA: 0x7436a, Ghidra: FUN_0007436a)
 * Prototype: undefined4 torture_update_creature_and_thing_07436a(void);
 * Address  : 0x7436a (Size: 213 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> torture_update_creature_control_074616, torture_update_creature_control_074d42
 * Callees  : 3 -> spell_update_creature_control_071edd, creature_update_creature_control_085890, light_attempt_delete_light_0acce4
 ******************************************************************************/
undefined4 torture_update_creature_and_thing_07436a(void)

{
  short *dungeon_off;
  ushort cctrl_ptr;
  undefined2 uval;
  int thing;
  uint thing_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int cctrl_ptr_2;
  uint extraout_EDX;
  
  cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(thing + 0x62) != 0) {
    light_attempt_delete_light_0acce4();
    cctrl_ptr_2 = extraout_ECX;
  }
  if ((*(byte *)(cctrl_ptr_2 + 0xac) & 2) != 0) {
    spell_update_creature_control_071edd();
    cctrl_ptr_2 = extraout_ECX_00;
  }
  if ((*(byte *)(cctrl_ptr_2 + 0xac) & 0x20) != 0) {
    spell_update_creature_control_071edd();
  }
  cctrl_ptr_2 = (int)*(char *)(arg_edx + 3);
  *(int *)(&g_bss_002e17cc + cctrl_ptr_2 * 0x1508) = *(int *)(&g_bss_002e17cc + cctrl_ptr_2 * 0x1508) + 1;
  thing_ptr = (uint)*(byte *)(thing + 0x1a);
  if ((&g_dungeons)[cctrl_ptr_2 * 0xa84 + thing_ptr + 0xa10] == 0) {
    dungeon_off = &g_dungeons + cctrl_ptr_2 * 0xa84 + thing_ptr + 0xa10;
    *dungeon_off = *dungeon_off + 1;
    cctrl_ptr = (&g_bss_002e05b6)[cctrl_ptr_2 * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if (*(char *)(thing_ptr + 0x1a) == *(char *)(thing + 0x1a)) {
        uval = creature_update_creature_control_085890();
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uval;
        thing_ptr = extraout_EDX;
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  else {
    dungeon_off = &g_dungeons + cctrl_ptr_2 * 0xa84 + thing_ptr + 0xa10;
    *dungeon_off = *dungeon_off + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : torture_update_creature_and_thing_07443f (Original VA: 0x7443f, Ghidra: FUN_0007443f)
 * Prototype: undefined4 torture_update_creature_and_thing_07443f(void);
 * Address  : 0x7443f (Size: 128 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> torture_update_creature_and_thing_074b82
 * Callees  : 1 -> creature_update_creature_control_085890
 ******************************************************************************/
undefined4 torture_update_creature_and_thing_07443f(void)

{
  char ch;
  ushort cctrl_ptr;
  undefined2 uval;
  int arg_eax;
  int dungeon_off;
  int arg_edx;
  uint thing_ptr;
  uint extraout_EDX;
  
  ch = *(char *)(arg_edx + 3);
  dungeon_off = ch * 0x1508;
  *(short *)(&g_bss_002e19a9 + (uint)*(byte *)(arg_eax + 0x1a) * 2 + dungeon_off) =
       *(short *)(&g_bss_002e19a9 + (uint)*(byte *)(arg_eax + 0x1a) * 2 + dungeon_off) + -1;
  if (*(short *)(&g_bss_002e19a9 + (uint)*(byte *)(arg_eax + 0x1a) * 2 + dungeon_off) == 0) {
    cctrl_ptr = (&g_bss_002e05b6)[ch * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if (*(char *)(thing_ptr + 0x1a) == *(char *)(arg_eax + 0x1a)) {
        uval = creature_update_creature_control_085890();
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uval;
        thing_ptr = extraout_EDX;
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return 1;
}

/******************************************************************************
 * Function : torture_fn_0744bf (Original VA: 0x744bf, Ghidra: FUN_000744bf)
 * Prototype: bool torture_fn_0744bf(void);
 * Address  : 0x744bf (Size: 22 bytes)
 * Module   : torture.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module torture.cpp procedure @ 0x0744bf
 * Callers  : 1 -> torture_centre_table_torture_0746e4
 * Callees  : 1 -> room_fn_0ce0e4
 ******************************************************************************/
bool torture_fn_0744bf(void)

{
  int val;
  int extraout_ECX;
  undefined1 arg_bl;
  
  val = room_fn_0ce0e4();
  if (val != 0) {
    *(undefined1 *)(extraout_ECX + 8) = arg_bl;
  }
  return val != 0;
}

/******************************************************************************
 * Function : torture_move_torture_0744d5 (Original VA: 0x744d5, Ghidra: FUN_000744d5)
 * Prototype: undefined4 torture_move_torture_0744d5(void);
 * Address  : 0x744d5 (Size: 321 bytes)
 * Module   : torture.cpp [direct_file_string_xref]
 * OrigLine : torture.cpp lines 329
 * Purpose  : String 'MOVE FAILED IN TORTURE'
 * Callers  : 1 -> torture_centre_table_torture_0746e4
 * Callees  : 3 -> mapwho_process_map_subtile_050d3c, move_fn_0b3be4, LbErrorLog
 ******************************************************************************/
undefined4 torture_move_torture_0744d5(void)

{
  int cctrl_ptr;
  short short_val;
  int thing;
  uint loop_i;
  int val;
  int extraout_ECX;
  int arg_edx;
  undefined1 arg_bl;
  int local_1c;
  uint local_18;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_18 = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
  for (loop_i = local_18; 0 < (int)loop_i; loop_i = loop_i - 1) {
  }
  local_1c = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(arg_edx + 0x3b) <= local_1c) {
      return 0;
    }
    if (*(ushort *)(arg_edx + 0x3b) == local_18) {
      local_18 = 0;
    }
    val = mapwho_process_map_subtile_050d3c();
    if ((val != 0) && (*(short *)(val + 0x13) == 0)) break;
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  }
  short_val = move_fn_0b3be4();
  if (short_val < 1) {
    LbErrorLog(); /* LbErrorLog("torture.cpp", line 329, "MOVE FAILED IN TORTURE") */
    return 0;
  }
  *(undefined1 *)(thing + 8) = arg_bl; /* thing->active_state */
  *(undefined2 *)(extraout_ECX + 0x13) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
  *(undefined2 *)(extraout_ECX + 0x15) = *(undefined2 *)(extraout_ECX + 0x46);
  *(undefined2 *)(cctrl_ptr + 0xa6) = *(undefined2 *)(extraout_ECX + 0x1b);
  return 1;
}

/******************************************************************************
 * Function : torture_update_creature_control_074616 (Original VA: 0x74616, Ghidra: FUN_00074616)
 * Prototype: longlong torture_update_creature_control_074616(void);
 * Address  : 0x74616 (Size: 206 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 6 -> moodneed_fn_051374, person_fn_063b6d, person_update_creature_control_064ae7, torture_update_creature_and_thing_07436a, room_attempt_add_creature_room_0cd85c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong torture_update_creature_control_074616(void)

{
  int cctrl_ptr;
  undefined4 uval;
  char ch;
  int thing;
  int val;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0x80) = 0;
  val = room_update_slab_subtile_columns_0d0f50();
  if ((val != 0) && (*(short *)(val + 10) == 5)) {
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      torture_update_creature_and_thing_07436a();
      *(undefined2 *)(cctrl_ptr + 0xa6) = 0;
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 2;
      uval = g_game_turn;
      *(undefined4 *)(cctrl_ptr + 0x82) = g_game_turn;
      *(undefined4 *)(cctrl_ptr + 0x9a) = uval;
      *(undefined4 *)(cctrl_ptr + 0x9e) = uval;
      *(undefined4 *)(cctrl_ptr + 0xa2) = uval;
      *(undefined1 *)(cctrl_ptr + 0xa8) = 1;
      person_update_creature_control_064ae7();
      return CONCAT44(arg_edx,1);
    }
    if ((int)*(char *)(val + 3) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : torture_centre_table_torture_0746e4 (Original VA: 0x746e4, Ghidra: FUN_000746e4)
 * Prototype: undefined4 torture_centre_table_torture_0746e4(void);
 * Address  : 0x746e4 (Size: 367 bytes)
 * Module   : torture.cpp [direct_file_string_xref]
 * OrigLine : torture.cpp lines 441
 * Purpose  : String 'NO CENTRE TABLE FOR TORTURE'
 * Callers  : 2 -> torture_update_creature_control_074b25, torture_update_creature_control_074dde
 * Callees  : 7 -> anger_fn_010132, instance_negative_instance_049bfc, sound_roll_unsynced_random_06edb9, torture_fn_0744bf, torture_move_torture_0744d5, move_process_map_subtile_0b28e8, LbErrorLog
 ******************************************************************************/
undefined4 torture_centre_table_torture_0746e4(void)

{
  byte flag;
  undefined2 uval;
  int thing;
  int cctrl_ptr;
  int val;
  uint uval_2;
  uint *word_ptr;
  uint uStack_10;
  
  word_ptr = (uint *)&stack0xfffffff4;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  flag = *(byte *)(cctrl_ptr + 0xa8);
  if (flag == 0) {
    if (100 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x9e))) {
      *(undefined1 *)(cctrl_ptr + 0xa8) = 1;
    }
    uStack_10 = 0x74732;
    cctrl_ptr = torture_fn_0744bf();
    if (cctrl_ptr != 0) {
      return 1;
    }
  }
  else if (flag < 2) {
    uStack_10 = 0x7474c;
    val = torture_move_torture_0744d5();
    if (val != 0) {
      *(undefined1 *)(cctrl_ptr + 0xa8) = 2;
      *(int *)(cctrl_ptr + 0x9e) = g_game_turn;
      return 1;
    }
    *(undefined1 *)(cctrl_ptr + 0xa8) = 0;
    *(int *)(cctrl_ptr + 0x9e) = g_game_turn;
  }
  else if (flag == 2) {
    uStack_10 = 0x74794;
    val = anger_fn_010132();
    if (val < 0x55) {
      *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
      *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xef;
      uStack_10 = 0x747b2;
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing + 0x11) = uval;
      if (*(byte *)(cctrl_ptr + 0xd2) == 0) {
        word_ptr = &uStack_10;
        uStack_10 = (uint)*(byte *)(cctrl_ptr + 0xd2);
        instance_negative_instance_049bfc();
      }
      if (*(short *)(cctrl_ptr + 0xa6) == 0) {
        *(undefined4 *)((int)word_ptr + -4) = 0x74807;
        LbErrorLog(); /* LbErrorLog("torture.cpp", line 441, "NO CENTRE TABLE FOR TORTURE") */
      }
      else {
        *(byte *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa6)] + 0x4f) =
             *(byte *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa6)] + 0x4f) | 1;
      }
      uval_2 = g_game_turn - *(int *)(cctrl_ptr + 0xa2);
      if ((0x20 < uval_2) || (((*(byte *)(cctrl_ptr + 0xac) & 2) != 0 && (0x10 < uval_2)))) {
        *(undefined4 *)((int)word_ptr + -4) = 0x74838;
        sound_roll_unsynced_random_06edb9();
        *(int *)(cctrl_ptr + 0xa2) = g_game_turn;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : torture_update_creature_control_074853 (Original VA: 0x74853, Ghidra: FUN_00074853)
 * Prototype: undefined8 torture_update_creature_control_074853(void);
 * Address  : 0x74853 (Size: 722 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> torture_update_creature_control_074b25
 * Callees  : 9 -> anger_fn_010434, anger_fn_010ad6, moodneed_fn_051374, person_update_creature_control_063a25, person_fn_063b6d, scavenge_fn_06709c, torture_update_slab_subtile_columns_074038, torture_couldn_create_ghost_torture_074c0d ...
 ******************************************************************************/
undefined8 torture_update_creature_control_074853(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int room_off;
  int val_2;
  undefined4 uval;
  uint uval_2;
  undefined4 arg_edx;
  int val_3;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  room_off = (uint)*(ushort *)(cctrl_ptr + 0x7e) * 0x45;
  val_2 = scavenge_fn_06709c();
  if (val_2 == 0) {
    person_fn_063b6d();
    uval = 1;
    goto LAB_00074b1e;
  }
  anger_fn_010434();
  if ((uint)g_bss_002ebc4f <= (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x82))) {
    creature_fn_081c44();
    *(int *)(cctrl_ptr + 0x82) = g_game_turn;
  }
  if (*(short *)(thing + 0x5e) < 0) {
    if (g_bss_002ebc51 != 0) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      if (g_action_random_seed % (uint)g_bss_002ebc51 != 0) goto LAB_00074977;
    }
    torture_couldn_create_ghost_torture_074c0d();
    uval = 0xffffffff;
  }
  else {
LAB_00074977:
    if ((&g_bss_002ddd1e)[room_off] != *(char *)(thing + 6)) { /* thing->owner */
      uval_2 = (g_game_turn - *(int *)(cctrl_ptr + 0x9a)) * (uint)*(ushort *)(&g_bss_002ddd5a + room_off) >>
              8;
      if ((*(byte *)(cctrl_ptr + 0xac) & 2) != 0) {
        uval_2 = (uval_2 << 2) / 3;
      }
      if (*(short *)(cctrl_ptr + 0x21) != 0) {
        uval_2 = (int)(uval_2 * 5) >> 2;
      }
      if (((int)*(short *)(&g_bss_002e91b1 + val) <= (int)uval_2) && (*(short *)(cctrl_ptr + 0xa6) != 0))
      {
        val_2 = (g_game_turn - *(int *)(cctrl_ptr + 0x9a)) - (int)*(short *)(&g_bss_002e91b1 + val);
        val_3 = val_2 >> 0x1f;
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        if (g_action_random_seed % 100 < ((int)((val_2 + val_3 * -0x40) - (uint)(val_3 << 5 < 0)) >> 6) + 1U
           ) {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          if (g_action_random_seed % 3 == 0) {
            if (((int)(char)(&g_bss_002ddd1e)[room_off] ==
                 (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) ||
               ((int)*(char *)(thing + 6) == /* thing->owner */
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) {
              moodneed_fn_051374();
            }
            person_update_creature_control_063a25();
            anger_fn_010ad6();
            uval = 1;
            *(int *)(&g_bss_002e17d4 + (char)(&g_bss_002ddd1e)[room_off] * 0x1508) =
                 *(int *)(&g_bss_002e17d4 + (char)(&g_bss_002ddd1e)[room_off] * 0x1508) + 1;
            goto LAB_00074b1e;
          }
          *(int *)(cctrl_ptr + 0x9a) = g_game_turn - (int)*(short *)(&g_bss_002e91b1 + val) / 2;
          torture_update_slab_subtile_columns_074038();
        }
      }
    }
    uval = 0;
  }
LAB_00074b1e:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : torture_update_creature_control_074b25 (Original VA: 0x74b25, Ghidra: FUN_00074b25)
 * Prototype: longlong torture_update_creature_control_074b25(void);
 * Address  : 0x74b25 (Size: 93 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> person_fn_063b6d, torture_centre_table_torture_0746e4, torture_update_creature_control_074853, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong torture_update_creature_control_074b25(void)

{
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 5)) &&
     (*(short *)(val + 1) == *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x7e)))
  {
    val = torture_update_creature_control_074853();
    if (val == 0) {
      torture_centre_table_torture_0746e4();
    }
    return CONCAT44(arg_edx,val);
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : torture_update_creature_and_thing_074b82 (Original VA: 0x74b82, Ghidra: FUN_00074b82)
 * Prototype: undefined8 torture_update_creature_and_thing_074b82(void);
 * Address  : 0x74b82 (Size: 139 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_064e59, torture_update_creature_and_thing_07443f
 ******************************************************************************/
undefined8 torture_update_creature_and_thing_074b82(void)

{
  int cctrl_ptr;
  int thing;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0xa6) != 0) {
    *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa6)] + 0x13) = 0;
    *(byte *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa6)] + 0x4f) =
         *(byte *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xa6)] + 0x4f) & 0xfe;
    *(undefined2 *)(cctrl_ptr + 0xa6) = 0;
  }
  if ((&g_bss_002e9188)[(uint)*(byte *)(thing + 0x1a) * 0xe6] != '\0') {
    *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) | 0x20;
  }
  *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xfd;
  torture_update_creature_and_thing_07443f();
  person_fn_064e59();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : torture_couldn_create_ghost_torture_074c0d (Original VA: 0x74c0d, Ghidra: FUN_00074c0d)
 * Prototype: void torture_couldn_create_ghost_torture_074c0d(void);
 * Address  : 0x74c0d (Size: 262 bytes)
 * Module   : torture.cpp [direct_file_string_xref]
 * OrigLine : torture.cpp lines 633
 * Purpose  : String 'COULDN'T CREATE GHOST IN TORTURE ROOM'
 * Callers  : 1 -> torture_update_creature_control_074853
 * Callees  : 7 -> effect_fn_0263c9, inits_told_you_so_create_043bb3, moodneed_fn_051374, person_fn_063b6d, creature_update_creature_control_08240c, creature_how_hero_have_tend_08608c, LbErrorLog
 ******************************************************************************/
void torture_couldn_create_ghost_torture_074c0d(void)

{
  char ch;
  int arg_eax;
  int val;
  uint uval;
  int arg_edx;
  
  val = inits_told_you_so_create_043bb3();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("torture.cpp", line 633, "COULDN'T CREATE GHOST IN TORTURE ROOM") */
  }
  else {
    creature_update_creature_control_08240c();
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
    person_fn_063b6d();
    creature_how_hero_have_tend_08608c(1,0);
    val = (int)g_my_player_word._3_1_;
    *(int *)(&g_bss_002e1828 + *(char *)(arg_eax + 3) * 0x1508) =
         *(int *)(&g_bss_002e1828 + *(char *)(arg_eax + 3) * 0x1508) + 1;
    if ((int)*(char *)(arg_eax + 3) == (uint)(byte)(&g_player_id_number)[val * 0x4ef]) {
      moodneed_fn_051374();
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : torture_fn_074d13 (Original VA: 0x74d13, Ghidra: FUN_00074d13)
 * Prototype: longlong torture_fn_074d13(void);
 * Address  : 0x74d13 (Size: 47 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Purpose  : Module torture.cpp procedure @ 0x074d13
 * Callers  : 1 -> torture_update_creature_control_074dde
 * Callees  : 1 -> anger_fn_010434
 ******************************************************************************/
longlong torture_fn_074d13(void)

{
  uint arg_edx;
  
  anger_fn_010434();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : torture_update_creature_control_074d42 (Original VA: 0x74d42, Ghidra: FUN_00074d42)
 * Prototype: longlong torture_update_creature_control_074d42(void);
 * Address  : 0x74d42 (Size: 156 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, person_update_creature_control_064ae7, torture_update_creature_and_thing_07436a, room_attempt_add_creature_room_0cd85c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong torture_update_creature_control_074d42(void)

{
  int cctrl_ptr;
  undefined4 uval;
  char ch;
  int thing;
  int val;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0x80) = 0;
  val = room_update_slab_subtile_columns_0d0f50();
  if ((val != 0) && (*(short *)(val + 10) == 5)) {
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      torture_update_creature_and_thing_07436a();
      uval = g_game_turn;
      *(undefined2 *)(cctrl_ptr + 0xa6) = 0;
      *(undefined1 *)(cctrl_ptr + 0xa8) = 1;
      *(undefined4 *)(cctrl_ptr + 0x82) = uval;
      *(undefined4 *)(cctrl_ptr + 0x9a) = uval;
      *(undefined4 *)(cctrl_ptr + 0x9e) = uval;
      *(undefined4 *)(cctrl_ptr + 0xa2) = uval;
      *(undefined4 *)(cctrl_ptr + 0x82) = uval;
      person_update_creature_control_064ae7();
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : torture_update_creature_control_074dde (Original VA: 0x74dde, Ghidra: FUN_00074dde)
 * Prototype: undefined8 torture_update_creature_control_074dde(void);
 * Address  : 0x74dde (Size: 144 bytes)
 * Module   : torture.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> person_fn_063b6d, torture_centre_table_torture_0746e4, torture_fn_074d13, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 torture_update_creature_control_074dde(void)

{
  byte flag;
  int cctrl_ptr;
  int thing;
  int cctrl_ptr_2;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  
  flag = *(byte *)(thing + 0x1a);
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr_2 = room_update_slab_subtile_columns_0d0f50();
  if ((((cctrl_ptr_2 == 0) || (*(short *)(cctrl_ptr_2 + 10) != 5)) ||
      (*(short *)(cctrl_ptr_2 + 1) != *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x7e))
      ) || ((uint)(int)*(short *)(&g_bss_002e91b1 + (uint)flag * 0xe6) <
            (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x82)))) {
    person_fn_063b6d();
    uval = 0;
  }
  else {
    torture_fn_074d13();
    torture_centre_table_torture_0746e4();
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

