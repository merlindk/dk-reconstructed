/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: build.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 10
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : build_update_player_view_state_01458c (Original VA: 0x1458c, Ghidra: FUN_0001458c)
 * Prototype: int build_update_player_view_state_01458c(void);
 * Address  : 0x1458c (Size: 70 bytes)
 * Module   : build.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 2 -> build_attempt_tag_area_outside_014614, sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
int build_update_player_view_state_01458c(void)

{
  int val;
  char extraout_CL;
  int extraout_EDX;
  
  val = build_attempt_tag_area_outside_014614();
  if ((val != 0) && ((int)extraout_CL == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]))
  {
    sound_non_emitter_has_been_06e9ab();
    val = extraout_EDX;
  }
  return val;
}

/******************************************************************************
 * Function : build_update_player_view_state_0145d2 (Original VA: 0x145d2, Ghidra: FUN_000145d2)
 * Prototype: void build_update_player_view_state_0145d2(void);
 * Address  : 0x145d2 (Size: 66 bytes)
 * Module   : build.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 2 -> build_attempt_tag_area_outside_01495c, sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
void build_update_player_view_state_0145d2(void)

{
  int val;
  char extraout_CL;
  
  val = build_attempt_tag_area_outside_01495c();
  if ((val != 0) && ((int)extraout_CL == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]))
  {
    sound_non_emitter_has_been_06e9ab();
  }
  return;
}

/******************************************************************************
 * Function : build_attempt_tag_area_outside_014614 (Original VA: 0x14614, Ghidra: FUN_00014614)
 * Prototype: undefined1 build_attempt_tag_area_outside_014614(void);
 * Address  : 0x14614 (Size: 840 bytes)
 * Module   : build.cpp [direct_file_string_xref]
 * OrigLine : build.cpp lines 142
 * Purpose  : String 'Attempt to tag area outside of map'
 * Callers  : 1 -> build_update_player_view_state_01458c
 * Callees  : 6 -> build_fn_014a9f, build_fn_014ad2, build_fn_014ae8, imptool_update_player_dungeon_0401aa, panmap_door_flagged_position_063122, LbErrorLog
 ******************************************************************************/
undefined1 build_attempt_tag_area_outside_014614(void)

{
  int val;
  byte flag;
  int val_2;
  int val_3;
  int arg_eax;
  int val_4;
  int val_5;
  int val_6;
  byte extraout_CH;
  byte slab_coord;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte flag_2;
  undefined4 uval;
  int arg_edx;
  int local_4c;
  int local_30;
  int local_2c;
  undefined1 local_18;
  
  val_4 = arg_eax / 3;
  val_2 = val_4 * 3;
  local_4c = (arg_edx / 3) * 3;
  val = val_2 + 1;
  val_6 = local_4c + 1;
  local_18 = 0;
  if ((((val_2 < 0) || (0xfe < val_2)) || (local_4c < 0)) || (0xfe < local_4c)) {
    LbErrorLog(); /* LbErrorLog("build.cpp", line 142, "Attempt to tag area outside of map") */
  }
  else {
    val_3 = (val + val_6 * 0x100) * 5;
    flag_2 = *(byte *)((int)&g_map_subtiles + val_3);
    slab_coord = (&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_6] * 0x55) * 6];
    flag = (&g_slabmap_base)[(val / 3 + (val_6 / 3) * 0x55) * 6];
    val_5 = imptool_update_player_dungeon_0401aa();
    if ((((val_5 == -1) &&
         (((&g_data_001921d4)[(uint)flag * 0x16] != '\0' ||
          ((*(uint *)((int)&g_map_subtiles + val_3 + 1) >> 0x1c & 1 << (extraout_CH & 0x1f)) == 0))))
        && (((flag_2 & 2) == 0 || ((uint)(slab_coord & 7) != (int)(char)extraout_CH)))) &&
       ((((flag_2 & 0x20) == 0 || ((uint)(slab_coord & 7) == (int)(char)extraout_CH)) ||
        ((*(uint *)((int)&g_map_subtiles + (val_6 * 0x100 + val) * 5 + 1) >> 0x1c &
         1 << (extraout_CH & 0x1f)) == 0)))) {
      if ((flag_2 & 1) == 0) {
        if (((flag_2 & 8) == 0) &&
           (((flag_2 & 0x20) == 0 ||
            ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_6] * 0x55) * 6] &
                   7) != (int)(char)extraout_CH)))) {
          build_fn_014ae8();
          uval = extraout_ECX_01;
        }
        else {
          build_fn_014a9f();
          uval = extraout_ECX_00;
        }
      }
      else {
        build_fn_014ad2();
        uval = extraout_ECX;
      }
      local_18 = 1;
      if ((int)(char)((uint)uval >> 8) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])
      {
        val = local_4c + 3;
        local_30 = (arg_edx / 3) * 0xc;
        for (; local_4c < val; local_4c = local_4c + 1) {
          val_6 = local_4c * 0x500 + val_4 * 0xf;
          for (local_2c = val_4 * 0xc; local_2c < (val_2 + 3) * 4; local_2c = local_2c + 4) {
            flag_2 = *(byte *)((int)&g_map_subtiles + val_6);
            if ((flag_2 & 0x84) == 0) {
              slab_coord = (byte)((uint)uval >> 8);
              if ((flag_2 & 2) != 0) {
                if ((uint)((&g_slabmap)
                           [(*(int *)((int)&g_subtile_to_slab_lut + local_2c) +
                            *(int *)((int)&g_subtile_to_slab_lut + local_30) * 0x55) * 6] & 7) ==
                    (int)(char)slab_coord) goto LAB_00014886;
              }
              if (((flag_2 & 0x20) != 0) &&
                 ((uint)((&g_slabmap)
                         [(*(int *)((int)&g_subtile_to_slab_lut + local_2c) +
                          *(int *)((int)&g_subtile_to_slab_lut + local_30) * 0x55) * 6] & 7) !=
                  (int)(char)slab_coord)) {
                uval = CONCAT31((int3)((uint)uval >> 8),slab_coord);
                if ((*(uint *)((int)&g_map_subtiles + val_6 + 1) >> 0x1c & 1 << (slab_coord & 0x1f)) != 0)
                goto LAB_00014886;
              }
              if ((flag_2 & 1) == 0) {
                if ((flag_2 & 0x28) == 0) {
                  flag_2 = (byte)((uint)uval >> 8);
                  uval = CONCAT31((int3)((uint)uval >> 8),flag_2);
                  if ((*(uint *)((int)&g_map_subtiles + val_6 + 1) >> 0x1c & 1 << (flag_2 & 0x1f)) != 0
                     ) goto LAB_00014886;
                }
                *(byte *)((int)&g_map_subtiles + val_6) = *(byte *)((int)&g_map_subtiles + val_6) | 4;
              }
              else {
                *(byte *)((int)&g_map_subtiles + val_6) = *(byte *)((int)&g_map_subtiles + val_6) | 0x80
                ;
              }
            }
LAB_00014886:
            val_6 = val_6 + 5;
          }
          local_30 = local_30 + 4;
        }
      }
      panmap_door_flagged_position_063122();
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : build_attempt_tag_area_outside_01495c (Original VA: 0x1495c, Ghidra: FUN_0001495c)
 * Prototype: int build_attempt_tag_area_outside_01495c(void);
 * Address  : 0x1495c (Size: 268 bytes)
 * Module   : build.cpp [direct_file_string_xref]
 * OrigLine : build.cpp lines 194
 * Purpose  : String 'Attempt to tag area outside of map'
 * Callers  : 4 -> build_update_player_view_state_0145d2, build_process_map_subtile_014afe, build_process_map_subtile_014d45, dungeon_update_slab_subtile_columns_023de2
 * Callees  : 4 -> imptool_stack_pos_0400da, imptool_update_player_dungeon_0401aa, panmap_door_flagged_position_063122, LbErrorLog
 ******************************************************************************/
int build_attempt_tag_area_outside_01495c(void)

{
  int val;
  int arg_eax;
  int val_2;
  int loop_i;
  char extraout_CL;
  char extraout_CL_00;
  char ch;
  int arg_edx;
  int val_3;
  int local_14;
  
  val = (arg_eax / 3) * 3;
  local_14 = 0;
  val_3 = (arg_edx / 3) * 3;
  if ((((val < 0) || (0xfe < val)) || (val_3 < 0)) || (0xfe < val_3)) {
    LbErrorLog(); /* LbErrorLog("build.cpp", line 194, "Attempt to tag area outside of map") */
  }
  else {
    val_2 = imptool_update_player_dungeon_0401aa();
    ch = extraout_CL;
    if (val_2 != -1) {
      imptool_stack_pos_0400da();
      ch = extraout_CL_00;
    }
    if ((int)ch == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      val_2 = val_3 + 3;
      for (; val_3 < val_2; val_3 = val_3 + 1) {
        for (loop_i = (arg_eax / 3) * 0xf + val_3 * 0x500; loop_i < val_3 * 0x500 + (val + 3) * 5;
            loop_i = loop_i + 5) {
          if ((*(byte *)((int)&g_map_subtiles + loop_i) & 0x84) != 0) {
            local_14 = local_14 + 1;
          }
          *(byte *)((int)&g_map_subtiles + loop_i) = *(byte *)((int)&g_map_subtiles + loop_i) & 0x7b;
        }
      }
    }
    panmap_door_flagged_position_063122();
  }
  return local_14;
}

/******************************************************************************
 * Function : build_fn_014a68 (Original VA: 0x14a68, Ghidra: FUN_00014a68)
 * Prototype: void build_fn_014a68(void);
 * Address  : 0x14a68 (Size: 55 bytes)
 * Module   : build.cpp [address_order_boundary_interpolation]
 * Purpose  : Module build.cpp procedure @ 0x014a68
 * Callers  : 2 -> slab_update_slab_subtile_columns_0d72f8, slab_attempt_place_animating_slab_0d7688
 * Callees  : 3 -> ceiling_process_map_subtile_07c590, light_fn_0aca68, routes_fn_0d167c
 ******************************************************************************/
void build_fn_014a68(void)

{
  routes_fn_0d167c();
  ceiling_process_map_subtile_07c590();
  light_fn_0aca68();
  return;
}

/******************************************************************************
 * Function : build_fn_014a9f (Original VA: 0x14a9f, Ghidra: FUN_00014a9f)
 * Prototype: void build_fn_014a9f(void);
 * Address  : 0x14a9f (Size: 27 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module build.cpp procedure @ 0x014a9f
 * Callers  : 1 -> build_attempt_tag_area_outside_014614
 * Callees  : 1 -> imptool_update_player_dungeon_04002e
 ******************************************************************************/
void build_fn_014a9f(void)

{
  imptool_update_player_dungeon_04002e();
  return;
}

/******************************************************************************
 * Function : build_fn_014ad2 (Original VA: 0x14ad2, Ghidra: FUN_00014ad2)
 * Prototype: void build_fn_014ad2(void);
 * Address  : 0x14ad2 (Size: 22 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module build.cpp procedure @ 0x014ad2
 * Callers  : 1 -> build_attempt_tag_area_outside_014614
 * Callees  : 0 -> 
 ******************************************************************************/
void build_fn_014ad2(void)

{
  imptool_update_player_dungeon_04002e();
  return;
}

/******************************************************************************
 * Function : build_fn_014ae8 (Original VA: 0x14ae8, Ghidra: FUN_00014ae8)
 * Prototype: void build_fn_014ae8(void);
 * Address  : 0x14ae8 (Size: 22 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module build.cpp procedure @ 0x014ae8
 * Callers  : 1 -> build_attempt_tag_area_outside_014614
 * Callees  : 0 -> 
 ******************************************************************************/
void build_fn_014ae8(void)

{
  imptool_update_player_dungeon_04002e();
  return;
}

/******************************************************************************
 * Function : build_process_map_subtile_014afe (Original VA: 0x14afe, Ghidra: FUN_00014afe)
 * Prototype: void build_process_map_subtile_014afe(void);
 * Address  : 0x14afe (Size: 412 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 4 -> instance_update_creature_control_04a0d6, instance_update_creature_control_04a5d9, magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e, shot_update_slab_subtile_columns_06c681
 * Callees  : 4 -> build_attempt_tag_area_outside_01495c, effect_fn_025f6f, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void build_process_map_subtile_014afe(void)

{
  undefined4 uval;
  byte flag;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int arg_edx;
  int arg_ebx;
  int val_4;
  int local_1c;
  byte local_18;
  
  val = (arg_edx * 0x100 + arg_eax) * 5;
  if ((*(ushort *)((int)&g_map_subtiles + val + 1) & 0x7ff) == 0) {
    flag = 0;
  }
  else {
    flag = *(byte *)((int)&g_bss_0019e973 +
                     (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) >> 4;
  }
  val = (arg_eax / 3) * 3;
  val_2 = (arg_edx / 3) * 3;
  if (flag != 0) {
    val_3 = val_2 + 3;
    for (; val_4 = val, val_2 < val_3; val_2 = val_2 + 1) {
      for (; val_4 < val + 3; val_4 = val_4 + 1) {
        effect_fn_025f6f();
      }
    }
  }
  local_18 = 1;
  uval = *(undefined4 *)((int)&g_map_subtiles + ((arg_edx / 3) * 0x300 + val) * 5 + 1);
  local_1c = 0;
  val = 0;
  do {
    if ((((&g_players)[val] & 1) != 0) && (((byte)((uint)uval >> 0x1c) & local_18) != 0)) {
      build_attempt_tag_area_outside_01495c();
      val = extraout_ECX;
    }
    local_18 = local_18 << 1;
    local_1c = local_1c + 1;
    val = val + 0x4ef;
  } while (local_1c < 4);
  slab_attempt_place_animating_slab_0d7688(0);
  slab_process_slabmap_tile_0da6fc();
  *(int *)(&g_bss_002e17e8 + arg_ebx * 0x1508) = *(int *)(&g_bss_002e17e8 + arg_ebx * 0x1508) + 1;
  return;
}

/******************************************************************************
 * Function : build_process_map_subtile_014d45 (Original VA: 0x14d45, Ghidra: FUN_00014d45)
 * Prototype: void build_process_map_subtile_014d45(void);
 * Address  : 0x14d45 (Size: 346 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> instance_update_creature_control_04a0d6, shot_update_slab_subtile_columns_06c681
 * Callees  : 5 -> build_attempt_tag_area_outside_01495c, effect_fn_026007, creature_process_map_subtile_082a04, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void build_process_map_subtile_014d45(void)

{
  undefined4 uval;
  byte flag;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int arg_edx;
  int val_4;
  int local_1c;
  byte local_18;
  
  val = (arg_edx * 0x100 + arg_eax) * 5;
  if ((*(ushort *)((int)&g_map_subtiles + val + 1) & 0x7ff) == 0) {
    flag = 0;
  }
  else {
    flag = *(byte *)((int)&g_bss_0019e973 +
                     (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) >> 4;
  }
  val = (arg_eax / 3) * 3;
  val_2 = (arg_edx / 3) * 3;
  val_3 = val_2 + 3;
  for (; val_4 = val, val_2 < val_3; val_2 = val_2 + 1) {
    for (; val_4 < val + 3; val_4 = val_4 + 1) {
      if (flag != 0) {
        effect_fn_026007();
      }
    }
  }
  local_18 = 1;
  uval = *(undefined4 *)((int)&g_map_subtiles + ((arg_edx / 3) * 0x300 + val) * 5 + 1);
  local_1c = 0;
  val = 0;
  do {
    if ((((&g_players)[val] & 1) != 0) && (((byte)((uint)uval >> 0x1c) & local_18) != 0)) {
      build_attempt_tag_area_outside_01495c();
      val = extraout_ECX;
    }
    local_18 = local_18 << 1;
    local_1c = local_1c + 1;
    val = val + 0x4ef;
  } while (local_1c < 4);
  slab_attempt_place_animating_slab_0d7688(0);
  slab_process_slabmap_tile_0da6fc();
  creature_process_map_subtile_082a04();
  return;
}

