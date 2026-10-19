/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: dungeon.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dungeon_update_player_dungeon_0235e8 (Original VA: 0x235e8, Ghidra: FUN_000235e8)
 * Prototype: void dungeon_update_player_dungeon_0235e8(void);
 * Address  : 0x235e8 (Size: 197 bytes)
 * Module   : dungeon.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 4 -> dungeon_remove_reserve_023868, magic_update_creature_and_thing_04e4ad, magic_update_creature_and_thing_04eb02, magic_update_creature_and_thing_04f121
 ******************************************************************************/
void dungeon_update_player_dungeon_0235e8(void)

{
  int val;
  undefined2 *word_ptr;
  undefined2 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *extraout_ECX_01;
  undefined2 *extraout_ECX_02;
  int val_2;
  int val_3;
  
  word_ptr = &g_dungeons;
  val_2 = 0;
  val_3 = 0;
  do {
    if (((&g_players)[val_3] & 1) != 0) {
      if (*(int *)(word_ptr + 0x442) != 0) {
        magic_update_creature_and_thing_04eb02();
        word_ptr = extraout_ECX;
      }
      if (*(int *)(word_ptr + 0x446) != 0) {
        magic_update_creature_and_thing_04f121();
        word_ptr = extraout_ECX_00;
      }
      if ((*(int *)(word_ptr + 0x444) != 0) &&
         ((int)(g_game_turn - *(int *)(word_ptr + 0x444)) % g_bss_002eaf19 == 0)) {
        val = dungeon_remove_reserve_023868();
        word_ptr = extraout_ECX_01;
        if (val < 0) {
          magic_update_creature_and_thing_04e4ad();
          word_ptr = extraout_ECX_02;
        }
      }
      if ((g_bss_002ed402 != 0) && (g_bss_002ed406 < g_game_turn)) {
        g_bss_002ed402 = 0;
        g_bss_002ed406 = 0;
      }
    }
    val_3 = val_3 + 0x4ef;
    val_2 = val_2 + 1;
    word_ptr = word_ptr + 0xa84;
  } while (val_2 < 5);
  return;
}

/******************************************************************************
 * Function : dungeon_update_player_view_state_0236ad (Original VA: 0x236ad, Ghidra: FUN_000236ad)
 * Prototype: void dungeon_update_player_view_state_0236ad(void);
 * Address  : 0x236ad (Size: 110 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dungeon_update_player_view_state_0236ad(void)

{
  int val;
  int val_2;
  
  g_bss_002eb54c = 0;
  g_bss_002eb550 = 0;
  g_bss_002eb54a = 0;
  val_2 = 0;
  val = 0;
  do {
    if (((&g_players)[val_2] & 1) != 0) {
      g_bss_002eb54c = g_bss_002eb54c + *(int *)((int)&g_bss_002e1082 + val);
      g_bss_002eb550 = g_bss_002eb550 + (ushort)(byte)(&g_bss_002e0ea1)[val];
      g_bss_002eb54a = g_bss_002eb54a + (ushort)(byte)(&g_bss_002e0ea2)[val];
    }
    val = val + 0x1508;
    val_2 = val_2 + 0x4ef;
  } while (val != 0x6928);
  return;
}

/******************************************************************************
 * Function : dungeon_update_player_dungeon_02371b (Original VA: 0x2371b, Ghidra: FUN_0002371b)
 * Prototype: void dungeon_update_player_dungeon_02371b(void);
 * Address  : 0x2371b (Size: 25 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> dungeon_process_slabmap_tile_0237c6, instance_update_player_dungeon_04a40c, room_how_come_this_bridge_0c9040
 * Callees  : 0 -> 
 ******************************************************************************/
void dungeon_update_player_dungeon_02371b(void)

{
  byte arg_al;
  short arg_dx;
  
  if (arg_al != g_neutral_player_number) {
    (&g_bss_002e0ec6)[(uint)arg_al * 0xa84] = (&g_bss_002e0ec6)[(uint)arg_al * 0xa84] + arg_dx;
  }
  return;
}

/******************************************************************************
 * Function : dungeon_update_player_dungeon_023734 (Original VA: 0x23734, Ghidra: FUN_00023734)
 * Prototype: void dungeon_update_player_dungeon_023734(void);
 * Address  : 0x23734 (Size: 32 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> dungeon_process_slabmap_tile_0237c6, room_how_room_exist_slabs_0cae40, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 0 -> 
 ******************************************************************************/
void dungeon_update_player_dungeon_023734(void)

{
  byte arg_al;
  short arg_dx;
  
  if (arg_al != g_neutral_player_number) {
    (&g_bss_002e0ed2)[(uint)arg_al * 0xa84] = (&g_bss_002e0ed2)[(uint)arg_al * 0xa84] + arg_dx;
    (&g_bss_002e0ec6)[(uint)arg_al * 0xa84] = (&g_bss_002e0ec6)[(uint)arg_al * 0xa84] + arg_dx;
  }
  return;
}

/******************************************************************************
 * Function : dungeon_update_player_dungeon_023754 (Original VA: 0x23754, Ghidra: FUN_00023754)
 * Prototype: void dungeon_update_player_dungeon_023754(void);
 * Address  : 0x23754 (Size: 51 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 4 -> dungeon_update_player_dungeon_023787, instance_process_dungeon_room_04a6a2, object_process_slabmap_tile_0c4b0c, room_how_room_exist_slabs_0cae40
 * Callees  : 0 -> 
 ******************************************************************************/
void dungeon_update_player_dungeon_023754(void)

{
  byte arg_al;
  uint uval;
  int arg_edx;
  
  if (arg_al != g_neutral_player_number) {
    uval = (uint)arg_al;
    if (-1 < (int)((uint)(ushort)(&g_bss_002e0ec6)[uval * 0xa84] - arg_edx)) {
      (&g_bss_002e0ec6)[uval * 0xa84] = (&g_bss_002e0ec6)[uval * 0xa84] - (short)arg_edx;
      return;
    }
    (&g_bss_002e0ec6)[uval * 0xa84] = 0;
  }
  return;
}

/******************************************************************************
 * Function : dungeon_update_player_dungeon_023787 (Original VA: 0x23787, Ghidra: FUN_00023787)
 * Prototype: void dungeon_update_player_dungeon_023787(void);
 * Address  : 0x23787 (Size: 63 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0c8d10, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 1 -> dungeon_update_player_dungeon_023754
 ******************************************************************************/
void dungeon_update_player_dungeon_023787(void)

{
  byte arg_al;
  uint uval;
  int arg_edx;
  
  if (arg_al != g_neutral_player_number) {
    uval = (uint)arg_al;
    if ((int)((uint)(ushort)(&g_bss_002e0ed2)[uval * 0xa84] - arg_edx) < 0) {
      (&g_bss_002e0ed2)[uval * 0xa84] = 0;
    }
    else {
      (&g_bss_002e0ed2)[uval * 0xa84] = (&g_bss_002e0ed2)[uval * 0xa84] - (short)arg_edx;
    }
    dungeon_update_player_dungeon_023754();
  }
  return;
}

/******************************************************************************
 * Function : dungeon_process_slabmap_tile_0237c6 (Original VA: 0x237c6, Ghidra: FUN_000237c6)
 * Prototype: undefined8 dungeon_process_slabmap_tile_0237c6(void);
 * Address  : 0x237c6 (Size: 162 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> inits_update_player_dungeon_040832
 * Callees  : 2 -> dungeon_update_player_dungeon_02371b, dungeon_update_player_dungeon_023734
 ******************************************************************************/
undefined8 dungeon_process_slabmap_tile_0237c6(void)

{
  int val;
  uint uval;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  
  val_2 = 0;
  do {
    val = val_2 + 0x1508;
    *(undefined2 *)((int)&g_bss_002e0ec6 + val_2) = 0;
    *(undefined2 *)((int)&g_bss_002e0ed2 + val_2) = 0;
    val_2 = val;
  } while (val != 0x6928);
  val = 0;
  val_2 = 0;
  do {
    uval = (uint)((&g_slabmap)[((val / 0x55) * 0x55 + val % 0x55) * 6] & 7);
    if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[val_2] * 0x16] == '\x04') {
      uval = dungeon_update_player_dungeon_023734();
      val_2 = extraout_ECX_00;
    }
    else if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[val_2] * 0x16] == '\x02') {
      uval = dungeon_update_player_dungeon_02371b();
      val_2 = extraout_ECX;
    }
    val = val + 1;
    val_2 = val_2 + 6;
  } while (val < 0x1c39);
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : dungeon_remove_reserve_023868 (Original VA: 0x23868, Ghidra: FUN_00023868)
 * Prototype: int dungeon_remove_reserve_023868(void);
 * Address  : 0x23868 (Size: 390 bytes)
 * Module   : dungeon.cpp [direct_file_string_xref]
 * OrigLine : dungeon.cpp lines 625
 * Purpose  : String 'Cannot remove %d: Reserve %d'
 * Callers  : 11 -> dungeon_update_player_dungeon_0235e8, evil_update_slab_subtile_columns_028904, input_game_action_048c77, lair_process_thing_entity_04e1f2, magic_process_thing_entity_04e66f, magic_update_creature_and_thing_04eb02, magic_update_slab_subtile_columns_04ee2c, magic_update_player_view_state_04fd30 ...
 * Callees  : 5 -> mapwho_fn_05102d, mapwho_process_map_subtile_05131e, moodneed_fn_051374, LbErrorLog, dk_sprintf
 ******************************************************************************/
int dungeon_remove_reserve_023868(void)

{
  ushort dungeon_off;
  int val;
  ushort arg_ax;
  int room_ptr;
  int val_2;
  undefined2 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *dungeon_off_2;
  int arg_edx;
  char arg_bl;
  int val_3;
  
  room_ptr = (int)(short)arg_ax;
  dungeon_off_2 = &g_dungeons + room_ptr * 0xa84;
  val = (&g_bss_002e1082)[room_ptr * 0x542];
  if (arg_edx == 0) {
    return 0;
  }
  if ((arg_edx <= val) || (arg_edx = val, arg_bl == '\0')) {
    val_3 = arg_edx;
    if ((&g_bss_002e1086)[room_ptr * 0x542] != 0) {
      if (arg_edx <= (int)(&g_bss_002e1086)[room_ptr * 0x542]) {
        (&g_bss_002e1086)[room_ptr * 0x542] = (&g_bss_002e1086)[room_ptr * 0x542] - arg_edx;
        (&g_bss_002e1082)[room_ptr * 0x542] = (&g_bss_002e1082)[room_ptr * 0x542] - arg_edx;
        return arg_edx;
      }
      val_2 = (&g_bss_002e1086)[room_ptr * 0x542];
      val_3 = arg_edx - (&g_bss_002e1086)[room_ptr * 0x542];
      (&g_bss_002e1086)[room_ptr * 0x542] = 0;
      (&g_bss_002e1082)[room_ptr * 0x542] = (&g_bss_002e1082)[room_ptr * 0x542] - val_2;
    }
    dungeon_off = (&g_bss_002e0598)[room_ptr * 0xa84];
    while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
      if (*(int *)(&g_bss_002ddd32 + room_ptr) != 0) {
        for (dungeon_off = *(ushort *)(&g_bss_002ddd52 + room_ptr); dungeon_off != 0;
            dungeon_off = *(ushort *)(&g_bss_002d33c6 + (uint)dungeon_off * 6)) {
          val_2 = mapwho_process_map_subtile_05131e();
          dungeon_off_2 = extraout_ECX;
          if (val_2 != 0) {
            val_2 = mapwho_fn_05102d();
            val_3 = val_3 - val_2;
            dungeon_off_2 = extraout_ECX_00;
          }
          if (val_3 < 1) {
            if (((arg_ax == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) && (999 < val)) &&
               (val - arg_edx < 1000)) {
              moodneed_fn_051374();
            }
            return arg_edx;
          }
        }
      }
      dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
    }
    dk_sprintf(&g_log_sprintf_buf,s_Cannot_remove__d__Reserve__d_0016260c,arg_edx,
                 *(undefined4 *)((int)dungeon_off_2 + 0xafd));
    LbErrorLog(); /* LbErrorLog("dungeon.cpp", line 625, g_log_buf) */
  }
  return -1;
}

/******************************************************************************
 * Function : dungeon_attempt_get_random_position_0239ee (Original VA: 0x239ee, Ghidra: FUN_000239ee)
 * Prototype: undefined4 dungeon_attempt_get_random_position_0239ee(void);
 * Address  : 0x239ee (Size: 90 bytes)
 * Module   : dungeon.cpp [direct_file_string_xref]
 * OrigLine : dungeon.cpp lines 634
 * Purpose  : String 'Attempt to get random position in neutral dungeon'
 * Callers  : 10 -> angtool_fn_01107a, angtool_fn_011d65, evil_update_creature_control_02796f, evil_update_creature_control_028d85, evil_update_creature_and_thing_028eb4, evil_fn_029423, good_update_creature_and_thing_038989, scrsupp_script_support_dungeon_heart_06992a ...
 * Callees  : 2 -> LbErrorLog, bflib_system_io_roll_action_random_0e6348
 ******************************************************************************/
undefined4 dungeon_attempt_get_random_position_0239ee(void)

{
  uint arg_eax;
  int val;
  
  if (arg_eax == g_neutral_player_number) {
    LbErrorLog(); /* LbErrorLog("dungeon.cpp", line 634, "Attempt to get random position in neutral dungeon") */
    return 0;
  }
  val = bflib_system_io_roll_action_random_0e6348();
  if (val != 0) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dungeon_update_player_dungeon_023a48 (Original VA: 0x23a48, Ghidra: FUN_00023a48)
 * Prototype: void dungeon_update_player_dungeon_023a48(void);
 * Address  : 0x23a48 (Size: 136 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> good_update_creature_and_thing_038989, scrsupp_script_support_could_find_069987
 * Callees  : 1 -> door_fn_023476
 ******************************************************************************/
void dungeon_update_player_dungeon_023a48(void)

{
  int arg_eax;
  uint uval;
  undefined2 *word_ptr;
  int val;
  int val_2;
  byte local_20;
  byte flag;
  
  val_2 = -0x80000000;
  flag = 0xff;
  word_ptr = &g_dungeons;
  for (local_20 = 0; uval = (uint)local_20, uval < 5; local_20 = local_20 + 1) {
    if ((((&g_players)[uval * 0x4ef] & 1) != 0) && (uval != (int)*(char *)(arg_eax + 6))) {
      val = *(int *)((int)word_ptr + 0xaed) -
              (int)((uint)*(byte *)((int)word_ptr + 0xf7d) * *(int *)((int)word_ptr + 0xaed) * 0x14) /
              100;
      if (0 < val) {
        val = 0;
      }
      if (val_2 < val) {
        val_2 = val;
        flag = local_20;
      }
    }
    word_ptr = word_ptr + 0xa84;
  }
  door_fn_023476(flag);
  return;
}

/******************************************************************************
 * Function : dungeon_process_map_subtile_023ad0 (Original VA: 0x23ad0, Ghidra: FUN_00023ad0)
 * Prototype: void dungeon_process_map_subtile_023ad0(void);
 * Address  : 0x23ad0 (Size: 786 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> inits_update_slab_subtile_columns_040a20, inits_update_slab_subtile_columns_040ba7
 * Callees  : 4 -> dungeon_update_slab_subtile_columns_023de2, panmap_door_flagged_position_063122, creature_process_map_subtile_082828, LbScreenWaitVbi
 ******************************************************************************/
void dungeon_process_map_subtile_023ad0(void)

{
  char *str_ptr;
  int val;
  int val_2;
  int val_3;
  byte arg_al;
  undefined1 *word_ptr;
  undefined2 *word_ptr_2;
  int val_4;
  byte *byte_ptr;
  int extraout_ECX;
  char ch;
  short arg_dx;
  int val_5;
  char ch_2;
  short arg_bx;
  int val_6;
  uint uval;
  int local_54;
  char *local_50;
  uint local_4c;
  int local_40;
  uint local_3c;
  byte *local_38;
  int local_34;
  int local_28;
  
  val_3 = g_scratch_work_buf;
  local_28 = 0;
  local_54 = 0;
  str_ptr = (char *)(g_scratch_work_buf + 0x1c39);
  local_34 = 0;
  LbScreenWaitVbi();
  do {
    val_5 = 0;
    word_ptr = (undefined1 *)(local_28 * 0x55 + val_3);
    val_6 = local_54;
    do {
      if (((*(uint *)(&g_data_001921c6 + (uint)(byte)(&g_slabmap_base)[val_6] * 0x16) & 0x29) != 0) ||
         (((*(uint *)(&g_data_001921c6 + (uint)(byte)(&g_slabmap_base)[val_6] * 0x16) & 0x40) != 0 &&
          (((&g_slabmap)
            [(*(int *)((int)&g_data_0019033f + val_5) + *(int *)((int)&g_data_0019033f + local_34) * 0x55
             ) * 6] & 7) != arg_al)))) {
        *word_ptr = 1;
      }
      word_ptr = word_ptr + 1;
      val_5 = val_5 + 0xc;
      val_6 = val_6 + 6;
    } while (val_5 != 0x3fc);
    local_54 = local_54 + 0x1fe;
    local_28 = local_28 + 1;
    local_34 = local_34 + 0xc;
  } while (local_28 < 0x55);
  val_6 = 0;
  word_ptr_2 = &g_map_subtiles;
  do {
    uval = *(uint *)((int)word_ptr_2 + 1);
    val_6 = val_6 + 1;
    *(uint *)((int)word_ptr_2 + 1) = uval & 0xfffffff;
    *(uint *)((int)word_ptr_2 + 1) =
         *(uint *)((int)word_ptr_2 + 1) | (uval >> 0x1c & ~(1 << (arg_al & 0x1f))) << 0x1c;
    word_ptr_2 = (undefined2 *)((int)word_ptr_2 + 5);
  } while (val_6 < 0x10000);
  val_6 = (int)arg_dx / 3;
  val_5 = (int)arg_bx / 3;
  local_3c = 0;
  byte_ptr = (byte *)(val_3 + val_5 * 0x55 + val_6);
  *byte_ptr = *byte_ptr | 2;
  uval = 0;
  local_50 = str_ptr;
  do {
    val_4 = val_5 * 0x55 + val_6 + val_3;
    local_4c = 0;
    ch_2 = (char)val_6;
    ch = (char)val_5;
    if ((*(byte *)(val_4 + -1) & 1) == 0) {
      if ((*(byte *)(val_4 + -1) & 2) == 0) {
        *(byte *)(val_4 + -1) = *(byte *)(val_4 + -1) | 2;
        val_4 = uval * 2;
        str_ptr[val_4] = ch_2 + -1;
        uval = uval + 1;
        (str_ptr + val_4)[1] = ch;
      }
    }
    else {
      local_4c = 8;
      *(byte *)(val_4 + -1) = *(byte *)(val_4 + -1) | 2;
    }
    val_4 = val_5 * 0x55 + val_6 + val_3;
    if ((*(byte *)(val_4 + 1) & 1) == 0) {
      if ((*(byte *)(val_4 + 1) & 2) == 0) {
        *(byte *)(val_4 + 1) = *(byte *)(val_4 + 1) | 2;
        val_4 = uval * 2;
        str_ptr[val_4] = ch_2 + '\x01';
        uval = uval + 1;
        (str_ptr + val_4)[1] = ch;
      }
    }
    else {
      local_4c = local_4c | 2;
      *(byte *)(val_4 + 1) = *(byte *)(val_4 + 1) | 2;
    }
    byte_ptr = (byte *)((val_5 + -1) * 0x55 + val_6 + val_3);
    if ((*byte_ptr & 1) == 0) {
      if ((*byte_ptr & 2) == 0) {
        *byte_ptr = *byte_ptr | 2;
        val_4 = uval * 2;
        str_ptr[val_4] = ch_2;
        uval = uval + 1;
        (str_ptr + val_4)[1] = ch + -1;
      }
    }
    else {
      local_4c = local_4c | 1;
      *byte_ptr = *byte_ptr | 2;
    }
    byte_ptr = (byte *)((val_5 + 1) * 0x55 + val_6 + val_3);
    if ((*byte_ptr & 1) == 0) {
      if ((*byte_ptr & 2) == 0) {
        *byte_ptr = *byte_ptr | 2;
        val_4 = uval * 2;
        str_ptr[val_4] = ch_2;
        uval = uval + 1;
        (str_ptr + val_4)[1] = ch + '\x01';
      }
    }
    else {
      local_4c = local_4c | 4;
      *byte_ptr = *byte_ptr | 2;
    }
    val_4 = val_3 + (val_5 + -1) * 0x55 + val_6;
    val = val_3 + (val_5 + 1) * 0x55 + val_6;
    while( true ) {
      if (*(int *)(&g_data_00179c1c + local_4c * 5) == 0) break;
      if (local_4c == 0xf) {
        byte_ptr = (byte *)(val_4 + 1);
        *byte_ptr = *byte_ptr | 2;
        byte_ptr = (byte *)(val + 1);
        *byte_ptr = *byte_ptr | 2;
        byte_ptr = (byte *)(val + -1);
        *byte_ptr = *byte_ptr | 2;
        local_4c = 0;
        byte_ptr = (byte *)(val_4 + -1);
        *byte_ptr = *byte_ptr | 2;
      }
      else {
        val_2 = *(int *)(&g_data_00179c1c + local_4c * 5) * 2;
        byte_ptr = (byte *)(val_3 + (char)(&g_data_00179c6c)[val_2] + val_6 +
                                  ((char)(&g_data_00179c6d)[val_2] + val_5) * 0x55);
        *byte_ptr = *byte_ptr | 2;
        local_4c = local_4c & (int)(char)(&g_data_00179c20)[local_4c * 5];
      }
    }
    local_3c = local_3c + 1;
    val_6 = (int)*local_50;
    val_5 = (int)local_50[1];
    local_50 = local_50 + 2;
  } while (local_3c <= uval);
  val_6 = 0;
  local_40 = 0;
  do {
    local_38 = (byte *)(local_40 + val_3);
    val_5 = 0;
    do {
      if ((*local_38 & 2) != 0) {
        dungeon_update_slab_subtile_columns_023de2();
        creature_process_map_subtile_082828();
        val_5 = extraout_ECX;
      }
      val_5 = val_5 + 1;
      local_38 = local_38 + 1;
    } while (val_5 < 0x55);
    val_6 = val_6 + 1;
    local_40 = local_40 + 0x55;
  } while (val_6 < 0x55);
  panmap_door_flagged_position_063122();
  return;
}

/******************************************************************************
 * Function : dungeon_update_slab_subtile_columns_023de2 (Original VA: 0x23de2, Ghidra: FUN_00023de2)
 * Prototype: void dungeon_update_slab_subtile_columns_023de2(void);
 * Address  : 0x23de2 (Size: 131 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 6 -> dungeon_process_map_subtile_023ad0, magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e, specials_fn_070c0c, torture_update_slab_subtile_columns_074038, creature_process_slabmap_tile_082c30, creature_update_creature_and_thing_082cac
 * Callees  : 1 -> build_attempt_tag_area_outside_01495c
 ******************************************************************************/
void dungeon_update_slab_subtile_columns_023de2(void)

{
  int arg_eax;
  int arg_edx;
  byte arg_bl;
  
  if (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(arg_edx * 0x55 + arg_eax) * 6] * 0x16] & 0x29) ==
      0) {
    if ((*(uint *)((int)&g_map_subtiles + (arg_edx * 0x300 + arg_eax * 3) * 5 + 1) >> 0x1c &
        1 << (arg_bl & 0x1f)) != 0) {
      return;
    }
  }
  else {
    if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(arg_edx * 0x55 + arg_eax) * 6] * 0x16] != '\x03')
    {
      return;
    }
    if (((&g_slabmap)[((&g_subtile_to_slab_lut)[arg_eax * 3] + (&g_subtile_to_slab_lut)[arg_edx * 3] * 0x55) * 6] & 7
        ) == arg_bl) {
      return;
    }
  }
  build_attempt_tag_area_outside_01495c();
  return;
}

/******************************************************************************
 * Function : dungeon_process_thing_entity_023e65 (Original VA: 0x23e65, Ghidra: FUN_00023e65)
 * Prototype: undefined1 dungeon_process_thing_entity_023e65(void);
 * Address  : 0x23e65 (Size: 105 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> magic_update_creature_and_thing_04f195, magic_update_slab_subtile_columns_05003d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 dungeon_process_thing_entity_023e65(void)

{
  int arg_eax;
  int dungeon_off;
  int thing_ptr;
  int arg_edx;
  uint arg_ebx;
  int thing_ptr_2;
  
  dungeon_off = (arg_ebx & 0xff) * 0x1508;
  if (*(short *)(&g_bss_002e0b61 + dungeon_off) != 0) {
    thing_ptr_2 = arg_eax - (*(byte *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + dungeon_off)] + 0xe) - 0xd);
    thing_ptr = arg_edx - (*(byte *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + dungeon_off)] + 0x10) - 0xd);
    if ((((-1 < thing_ptr_2) && (thing_ptr_2 < 0x1a)) && (-1 < thing_ptr)) && (thing_ptr < 0x1a)) {
      return *(undefined1 *)(thing_ptr_2 + dungeon_off + 0x2e0b66 + thing_ptr * 0x1a);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dungeon_update_slab_subtile_columns_023ece (Original VA: 0x23ece, Ghidra: FUN_00023ece)
 * Prototype: void dungeon_update_slab_subtile_columns_023ece(void);
 * Address  : 0x23ece (Size: 1142 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void dungeon_update_slab_subtile_columns_023ece(void)

{
  uint *word_ptr;
  byte flag;
  int thing_ptr;
  byte flag_2;
  int arg_eax;
  int dungeon_off;
  int val;
  int val_2;
  int val_3;
  int val_4;
  uint uval;
  int local_8c;
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  int local_70;
  int local_54;
  int local_48;
  int local_44;
  undefined2 *local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  flag = *(byte *)(arg_eax + 0x2b);
  dungeon_off = (uint)flag * 0x1508;
  if (*(short *)(&g_bss_002e0b61 + dungeon_off) != 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + dungeon_off)];
    LbScreenWaitVbi();
    local_1c = *(byte *)(thing_ptr + 0x10) - 0xd;
    local_2c = 0;
    do {
      val_3 = local_2c * 0x1a;
      local_24 = *(byte *)(thing_ptr + 0xe) - 0xd;
      local_40 = &g_dungeons + (uint)flag * 0xa84 + local_2c * 0xd;
      val = local_24 * 5 + local_1c * 0x500;
      val_4 = val_3 + 0x1a;
      do {
        if ((((*(char *)((int)local_40 + 0x5dd) != '\0') && (-1 < local_24)) && (local_24 < 0xff))
           && ((-1 < local_1c && (local_1c < 0xff)))) {
          uval = 1 << (*(byte *)(arg_eax + 0x2b) & 0x1f);
          (&g_bss_00334078)[val_3] =
               uval == (*(uint *)((int)&g_map_subtiles + val + 1) >> 0x1c & uval);
          if ((*(byte *)((int)&g_map_subtiles + val) & 4) == 0) {
            flag_2 = 0;
          }
          else {
            flag_2 = 2;
          }
          (&g_bss_00334078)[val_3] = (&g_bss_00334078)[val_3] | flag_2;
          if ((*(byte *)((int)&g_map_subtiles + val) & 0x80) == 0) {
            flag_2 = 0;
          }
          else {
            flag_2 = 4;
          }
          (&g_bss_00334078)[val_3] = (&g_bss_00334078)[val_3] | flag_2;
        }
        local_40 = (undefined2 *)((int)local_40 + 1);
        local_24 = local_24 + 1;
        val_3 = val_3 + 1;
        val = val + 5;
      } while (val_3 != val_4);
      local_2c = local_2c + 1;
      local_1c = local_1c + 1;
    } while (local_2c < 0x1a);
    local_54 = *(byte *)(thing_ptr + 0x10) - 0xd;
    local_48 = local_54 * 0x500;
    local_3c = local_54 * 4;
    local_8c = 0;
    do {
      if ((-1 < local_54) && (local_54 < 0x101)) {
        local_28 = 0;
        val_3 = *(byte *)(thing_ptr + 0xe) - 0xd;
        val = local_8c * 0x1a + dungeon_off;
        for (; local_28 < 0xe; local_28 = local_28 + 1) {
          if (*(char *)((int)&g_dungeons + local_28 + val + 0x5dd) != '\0') {
            local_28 = local_28 + 1;
            local_84 = 1;
            val_4 = 0;
            val_2 = (int)&g_dungeons + local_28 + val;
            for (; local_28 < 0x1a; local_28 = local_28 + 1) {
              if (*(char *)(val_2 + 0x5dd) != '\0') {
                val_4 = local_84;
              }
              local_84 = local_84 + 1;
              val_2 = val_2 + 1;
            }
            val_4 = val_4 + val_3;
            if (val_3 < 0) {
              val_3 = 0;
            }
            else if (0xfe < val_3) {
              val_3 = 0xfe;
            }
            if (val_4 < 0) {
              val_4 = 0;
            }
            else if (0xfe < val_4) {
              val_4 = 0xfe;
            }
            val_2 = val_3 * 5 + local_48;
            for (local_34 = val_3 << 2; local_34 <= val_4 << 2; local_34 = local_34 + 4) {
              uval = *(uint *)((int)&g_map_subtiles + val_2 + 1);
              flag = *(byte *)(arg_eax + 0x2b);
              *(uint *)((int)&g_map_subtiles + val_2 + 1) = uval & 0xfffffff;
              word_ptr = (uint *)((int)&g_map_subtiles + val_2 + 1);
              *word_ptr = *word_ptr | (uval >> 0x1c | 1 << (flag & 0x1f)) << 0x1c;
              if ((&g_data_001921d4)
                  [(uint)(byte)(&g_slabmap_base)
                               [(*(int *)((int)&g_subtile_to_slab_lut + local_3c) * 0x55 +
                                *(int *)((int)&g_subtile_to_slab_lut + local_34)) * 6] * 0x16] == '\0') {
                *(byte *)((int)&g_map_subtiles + val_2) = *(byte *)((int)&g_map_subtiles + val_2) & 0x7b
                ;
              }
              val_2 = val_2 + 5;
              val_3 = val_3 + 1;
            }
          }
          val_3 = val_3 + 1;
        }
      }
      local_48 = local_48 + 0x500;
      local_3c = local_3c + 4;
      local_8c = local_8c + 1;
      local_54 = local_54 + 1;
    } while (local_8c < 0x1a);
    local_88 = *(byte *)(thing_ptr + 0xe) - 0xd;
    local_44 = local_88 * 5;
    local_74 = local_88 * 4;
    local_20 = 0;
    do {
      if ((-1 < local_88) && (local_88 < 0x100)) {
        local_78 = 0;
        val = *(byte *)(thing_ptr + 0x10) - 0xd;
        for (; local_78 < 0xe; local_78 = local_78 + 1) {
          if (*(char *)((int)&g_dungeons + local_20 + local_78 * 0x1a + dungeon_off + 0x5dd) != '\0') {
            local_78 = local_78 + 1;
            local_70 = 1;
            val_3 = 0;
            val_4 = (int)&g_dungeons + local_78 * 0x1a + local_20 + dungeon_off;
            for (; local_78 < 0x1a; local_78 = local_78 + 1) {
              if (*(char *)(val_4 + 0x5dd) != '\0') {
                val_3 = local_70;
              }
              local_70 = local_70 + 1;
              val_4 = val_4 + 0x1a;
            }
            val_3 = val_3 + val;
            if (val_3 < 0) {
              val_3 = 0;
            }
            else if (0xfe < val_3) {
              val_3 = 0xfe;
            }
            if (val < 0) {
              val = 0;
            }
            else if (0xfe < val) {
              val = 0xfe;
            }
            val_4 = val * 0x500 + local_44;
            for (local_30 = val << 2; local_30 <= val_3 << 2; local_30 = local_30 + 4) {
              uval = *(uint *)((int)&g_map_subtiles + val_4 + 1);
              flag = *(byte *)(arg_eax + 0x2b);
              *(uint *)((int)&g_map_subtiles + val_4 + 1) = uval & 0xfffffff;
              val_2 = *(int *)((int)&g_subtile_to_slab_lut + local_30);
              word_ptr = (uint *)((int)&g_map_subtiles + val_4 + 1);
              *word_ptr = *word_ptr | (1 << (flag & 0x1f) | uval >> 0x1c) << 0x1c;
              if ((&g_data_001921d4)
                  [(uint)(byte)(&g_slabmap_base)
                               [(val_2 * 0x55 + *(int *)((int)&g_subtile_to_slab_lut + local_74)) * 6] * 0x16
                  ] == '\0') {
                *(byte *)((int)&g_map_subtiles + val_4) = *(byte *)((int)&g_map_subtiles + val_4) & 0x7b
                ;
              }
              val_4 = val_4 + 0x500;
              val = val + 1;
            }
          }
          val = val + 1;
        }
      }
      local_44 = local_44 + 5;
      local_74 = local_74 + 4;
      local_20 = local_20 + 1;
      local_88 = local_88 + 1;
    } while (local_20 < 0x1a);
  }
  return;
}

