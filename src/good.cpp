/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: good.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 24
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : good_fn_038212 (Original VA: 0x38212, Ghidra: FUN_00038212)
 * Prototype: longlong good_fn_038212(void);
 * Address  : 0x38212 (Size: 90 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Module good.cpp procedure @ 0x038212
 * Callers  : 0 -> 
 * Callees  : 4 -> good_update_creature_control_03826c, person_fn_063b6d, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong good_fn_038212(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  undefined8 uval;
  
  uval = room_update_slab_subtile_columns_0d0f50();
  val = (int)uval;
  if ((((val != 0) && (*(short *)(val + 10) == 0x10)) &&
      (*(short *)(val + 1) == *(short *)((int)((ulonglong)uval >> 0x20) + 0x7e))) &&
     (*(char *)(val + 3) == *(char *)(arg_eax + 6))) {
    good_update_creature_control_03826c();
    return CONCAT44(arg_edx,1);
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : good_update_creature_control_03826c (Original VA: 0x3826c, Ghidra: FUN_0003826c)
 * Prototype: undefined4 good_update_creature_control_03826c(void);
 * Address  : 0x3826c (Size: 91 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> good_fn_038212
 * Callees  : 2 -> move_fn_0b4ac4, room_update_slab_subtile_columns_0cdcd0
 ******************************************************************************/
undefined4 good_update_creature_control_03826c(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  byte flag;
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = move_fn_0b4ac4(0);
  if (val != 0) {
    val = room_update_slab_subtile_columns_0cdcd0();
    if (val == 0) {
      *(undefined4 *)(cctrl_ptr + 0x2d) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
      *(undefined2 *)(cctrl_ptr + 0x31 + (uint)flag * -8) =
           *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : good_level_design_player_should_0382d8 (Original VA: 0x382d8, Ghidra: FUN_000382d8)
 * Prototype: longlong good_level_design_player_should_0382d8(void);
 * Address  : 0x382d8 (Size: 558 bytes)
 * Module   : good.cpp [direct_file_string_xref]
 * OrigLine : good.cpp lines 179
 * Purpose  : String 'Level design error - Player %d should have lost by now'
 * Callers  : 0 -> 
 * Callees  : 11 -> good_update_creature_control_038a99, good_process_thing_entity_038b05, good_update_creature_control_038b5e, good_update_creature_and_thing_038cba, good_update_creature_and_thing_038dcb, good_update_player_dungeon_038edc, good_fn_038f70, good_update_creature_control_038faa ...
 ******************************************************************************/
longlong good_level_design_player_should_0382d8(void)

{
  int cctrl_ptr;
  uint rand_seed;
  undefined1 uval;
  short short_val;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (g_game_turn - *(int *)(cctrl_ptr + 0x9a) < 2) goto LAB_00038432;
  if (g_game_turn < *(uint *)(cctrl_ptr + 5)) {
    short_val = move_process_slabmap_tile_0b5264();
    if (short_val != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x22;
    }
    goto LAB_00038432;
  }
  if (*(char *)(cctrl_ptr + 0x89) != -1) {
    if ((&g_bss_0019d0f1)[*(char *)(cctrl_ptr + 0x89) * 0x4ef] == '\x02') {
LAB_0003833e:
      *(undefined1 *)(cctrl_ptr + 0x89) = 0xff;
    }
    else if (g_game_turn - *(int *)(cctrl_ptr + 0x91) < 0x191) {
      short_val = move_process_slabmap_tile_0b5264();
      thing = extraout_ECX_01;
      if (short_val != 0) {
        *(undefined1 *)(extraout_ECX_01 + 8) = 0x22;
        goto LAB_00038457;
      }
    }
    else {
      val = good_process_thing_entity_038b05();
      thing = extraout_ECX_00;
      if (val == 0) goto LAB_0003833e;
    }
  }
  if (*(char *)(cctrl_ptr + 0x89) == -1) {
    if (400 < g_game_turn - *(int *)(cctrl_ptr + 0x91)) {
      *(uint *)(cctrl_ptr + 0x91) = g_game_turn;
      *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8c) = 1; /* thing->ccontrol_idx */
    }
    if (0x40 < g_game_turn - *(int *)(cctrl_ptr + 0x8d)) {
      *(uint *)(cctrl_ptr + 0x8d) = g_game_turn;
      uval = good_update_creature_control_038a99();
      *(undefined1 *)(cctrl_ptr + 0x89) = uval;
    }
    if (*(char *)(cctrl_ptr + 0x89) == -1) {
      short_val = move_process_slabmap_tile_0b5264();
      if (short_val == 0) {
        *(uint *)(cctrl_ptr + 5) = g_game_turn + 0x10;
      }
      else {
        *(undefined1 *)(extraout_ECX_02 + 8) = 0x22;
      }
    }
  }
  else {
    switch(*(undefined1 *)(cctrl_ptr + 4)) {
    case 1:
      val = good_update_creature_control_038faa();
      break;
    default:
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      rand_seed = g_action_random_seed >> 0xd;
      g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
      if (((rand_seed & 1) == 1) && (val = good_update_creature_and_thing_038dcb(), val != 0)) goto LAB_00038432;
      val = good_update_creature_and_thing_038cba();
      break;
    case 3:
      val = good_update_player_dungeon_038edc();
      if (val != 0) goto LAB_00038432;
      dk_sprintf(&g_log_sprintf_buf,s_Level_design_error___Player__d_s_00164910,
                   (int)*(char *)(cctrl_ptr + 0x89));
      LbErrorLog(); /* LbErrorLog("good.cpp", line 179, g_log_buf) */
      goto LAB_00038457;
    case 4:
      if (*(int *)(thing + 0x13) < /* thing->anim_sprite */
          (int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing + 0x1a) * 0xe6)) {
        val = good_update_creature_control_038b5e();
      }
      else {
        val = good_fn_038f70();
      }
    }
    if (val == 0) {
      *(undefined1 *)(cctrl_ptr + 4) = 3;
LAB_00038457:
      return (ulonglong)arg_edx << 0x20;
    }
  }
LAB_00038432:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : good_fn_038506 (Original VA: 0x38506, Ghidra: FUN_00038506)
 * Prototype: undefined8 good_fn_038506(void);
 * Address  : 0x38506 (Size: 66 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Module good.cpp procedure @ 0x038506
 * Callers  : 0 -> 
 * Callees  : 1 -> move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 good_fn_038506(void)

{
  int arg_eax;
  undefined4 uval;
  undefined4 arg_edx;
  
  uval = move_update_creature_control_0b3b58();
  if ((short)uval != 0) {
    uval = 1;
    *(undefined1 *)(arg_eax + 8) = 0x24;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : good_process_map_subtile_038548 (Original VA: 0x38548, Ghidra: FUN_00038548)
 * Prototype: undefined8 good_process_map_subtile_038548(void);
 * Address  : 0x38548 (Size: 205 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_063b6d, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 good_process_map_subtile_038548(void)

{
  ushort loop_i;
  short short_val;
  int arg_eax;
  undefined4 arg_edx;
  uint rand_seed;
  uint uval;
  
  if (*(int *)(arg_eax + 0x13) != 0) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    rand_seed = g_action_random_seed % 9;
    for (loop_i = 0; loop_i < 9; loop_i = loop_i + 1) {
      uval = (uint)(ushort)(CONCAT11(*(undefined1 *)(arg_eax + 0x10),*(undefined1 *)(arg_eax + 0xe))
                            + *(short *)((int)&g_data_0018b624 + (rand_seed & 0xffff) * 2 + 2));
      if ((*(byte *)((int)&g_map_subtiles + uval * 5) & 0x10) == 0) {
        short_val = move_update_creature_control_0b3b58((int)uval >> 8);
        if (short_val != 0) {
          *(undefined1 *)(arg_eax + 8) = 0x25;
          goto LAB_00038982;
        }
      }
      rand_seed = rand_seed + 1;
    }
  }
  person_fn_063b6d();
LAB_00038982:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : good_fn_038615 (Original VA: 0x38615, Ghidra: FUN_00038615)
 * Prototype: undefined8 good_fn_038615(void);
 * Address  : 0x38615 (Size: 83 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Module good.cpp procedure @ 0x038615
 * Callers  : 0 -> 
 * Callees  : 2 -> inits_allocate_light_object_043f07, person_update_creature_control_064ae7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 good_fn_038615(void)

{
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val_2 = (int)g_bss_002eb9ea;
  if (*(int *)(arg_eax + 0x13) <= val_2) {
    val_2 = *(int *)(arg_eax + 0x13);
  }
  val = inits_allocate_light_object_043f07();
  if (val != 0) {
    *(int *)(val + 0x13) = val_2;
    *(int *)(arg_eax + 0x13) = *(int *)(arg_eax + 0x13) - val_2;
    person_update_creature_control_064ae7();
  }
  return CONCAT44(arg_edx,(uint)(val != 0));
}

/******************************************************************************
 * Function : good_update_creature_control_038668 (Original VA: 0x38668, Ghidra: FUN_00038668)
 * Prototype: longlong good_update_creature_control_038668(void);
 * Address  : 0x38668 (Size: 121 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> mapwho_process_map_subtile_050d3c, person_update_creature_control_064ae7, creature_fn_081ed4
 ******************************************************************************/
longlong good_update_creature_control_038668(void)

{
  int thing;
  int val;
  uint arg_edx;
  
  val = mapwho_process_map_subtile_050d3c();
  if (val != 0) {
    *(undefined4 *)(thing + 0x13) = 0; /* thing->anim_sprite */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) = g_bss_002ed3ef; /* thing->ccontrol_idx */
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8a) = *(undefined1 *)(val + 9); /* thing->ccontrol_idx */
    creature_fn_081ed4();
    person_update_creature_control_064ae7();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : good_update_creature_control_0386e1 (Original VA: 0x386e1, Ghidra: FUN_000386e1)
 * Prototype: longlong good_update_creature_control_0386e1(void);
 * Address  : 0x386e1 (Size: 210 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> mapwho_process_map_subtile_050d3c, person_fn_063b6d, structs_update_creature_control_072af4, creature_fn_081ef4, creature_how_hero_have_tend_08608c
 ******************************************************************************/
longlong good_update_creature_control_0386e1(void)

{
  short *cctrl_ptr;
  int thing;
  int val;
  undefined4 arg_edx;
  undefined4 *cctrl_ptr_2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cctrl_ptr_2 = (undefined4 *)&stack0xfffffff0;
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) != 0) && /* thing->ccontrol_idx */
     (cctrl_ptr = (short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282), *cctrl_ptr = *cctrl_ptr + -1 /* thing->ccontrol_idx */
     , cctrl_ptr_2 = (undefined4 *)&stack0xfffffff0,
     *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) == 0)) { /* thing->ccontrol_idx */
    uStack_14 = 0x38737;
    val = mapwho_process_map_subtile_050d3c();
    if ((val != 0) &&
       ((int)*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8a) == *(int *)(val + 9))) { /* thing->ccontrol_idx */
      uStack_14 = 0x38759;
      creature_fn_081ef4();
      uStack_14 = 0x38760;
      person_fn_063b6d();
      return CONCAT44(arg_edx,1);
    }
    *(undefined4 *)(thing + 0x13) = 0; /* thing->anim_sprite */
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) != 0) { /* thing->ccontrol_idx */
      uStack_14 = 0x38795;
      structs_update_creature_control_072af4();
    }
    uStack_14 = 0;
    cctrl_ptr_2 = &uStack_18;
    uStack_18 = 0;
    creature_how_hero_have_tend_08608c();
  }
  return (ulonglong)*(uint *)((int)cctrl_ptr_2 + 4) << 0x20;
}

/******************************************************************************
 * Function : good_update_creature_control_0387b3 (Original VA: 0x387b3, Ghidra: FUN_000387b3)
 * Prototype: undefined8 good_update_creature_control_0387b3(void);
 * Address  : 0x387b3 (Size: 470 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> event_fn_0274ad, instance_negative_instance_049bfc, moodneed_fn_051374, person_fn_063b6d, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 good_update_creature_control_0387b3(void)

{
  byte flag;
  byte flag_2;
  short short_val;
  int thing;
  undefined4 uval;
  undefined4 arg_edx;
  int room_off;
  uint local_20;
  int local_1c;
  
  if ((&g_rooms +
       (uint)(byte)(&g_bss_002d33c8)
                   [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                    (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] * 0x45 < &g_bss_002ddd1c)
     || ((&g_bss_002ddd1e)
         [(uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                       (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] * 0x45] ==
         *(char *)(thing + 6))) { /* thing->owner */
    flag = *(byte *)(thing + 0xe);
    flag_2 = *(byte *)(thing + 0x10);
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    local_20 = g_action_random_seed >> 0xd;
    g_action_random_seed = local_20 | g_action_random_seed * 0x80000;
    local_20 = local_20 & 3;
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      room_off = (uint)(byte)(&g_bss_002d33c8)
                          [((&g_subtile_to_slab_lut)
                            [((int)(*(char *)((int)&g_data_0018b67b + local_20 * 2 + 3) * 3 +
                                   (uint)flag) / 3) * 3 + 1] +
                           (&g_subtile_to_slab_lut)
                           [((int)((char)(&g_data_0018b67f)[local_20 * 2] * 3 + (uint)flag_2) / 3) * 3 +
                            1] * 0x55) * 6] * 0x45;
      if ((&g_rooms < &g_rooms + room_off) &&
         ((&g_bss_002ddd1e)[room_off] != *(char *)(thing + 6))) { /* thing->owner */
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          event_fn_0274ad(0);
          if ((int)(char)(&g_bss_002ddd1e)[room_off] ==
              (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
            moodneed_fn_051374();
          }
          uval = 1;
          *(undefined1 *)(thing + 8) = 0x82; /* thing->active_state */
          goto LAB_00038982;
        }
      }
      local_20 = (int)(local_20 + 1) % 4;
    }
    person_fn_063b6d();
    uval = 0;
  }
  else {
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0') { /* thing->ccontrol_idx */
      instance_negative_instance_049bfc(0);
    }
    uval = 1;
  }
LAB_00038982:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : good_update_creature_and_thing_038989 (Original VA: 0x38989, Ghidra: FUN_00038989)
 * Prototype: undefined8 good_update_creature_and_thing_038989(void);
 * Address  : 0x38989 (Size: 272 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 8 -> dungeon_attempt_get_random_position_0239ee, dungeon_update_player_dungeon_023a48, good_update_creature_control_038a99, good_update_player_dungeon_038edc, good_update_creature_control_0390af, person_update_creature_control_064ae7, scrsupp_script_support_could_find_069987, creature_fn_082774
 ******************************************************************************/
undefined8 good_update_creature_and_thing_038989(void)

{
  char ch;
  undefined1 uval;
  int thing;
  undefined4 uval_2;
  int cctrl_ptr;
  undefined4 arg_edx;
  
  if (1 < (uint)(g_game_turn - *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a))) { /* thing->ccontrol_idx */
    cctrl_ptr = (int)*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89); /* thing->ccontrol_idx */
    if (cctrl_ptr < 0) {
      scrsupp_script_support_could_find_069987();
      uval_2 = 0;
      goto LAB_00038982;
    }
    if (*(char *)((&g_thing_ptrs)[(ushort)(&g_dungeons)[cctrl_ptr * 0xa84]] + 7) == '\x03') {
LAB_00038a02:
      uval = good_update_creature_control_038a99();
      *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89) = uval; /* thing->ccontrol_idx */
      if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89) == -1) { /* thing->ccontrol_idx */
        cctrl_ptr = dungeon_update_player_dungeon_023a48();
        if (cctrl_ptr != -1) {
          if (((&g_bss_002e0ea2)[cctrl_ptr * 0x1508] == '\0') && ((&g_bss_002e0ea1)[cctrl_ptr * 0x1508] == '\0')
             ) {
            good_update_player_dungeon_038edc();
          }
          else {
            dungeon_attempt_get_random_position_0239ee();
            good_update_creature_control_0390af();
          }
        }
        goto LAB_000389b0;
      }
    }
    else {
      ch = creature_fn_082774();
      if (ch == '\0') goto LAB_00038a02;
    }
    person_update_creature_control_064ae7();
  }
LAB_000389b0:
  uval_2 = 1;
LAB_00038982:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : good_update_creature_control_038a99 (Original VA: 0x38a99, Ghidra: FUN_00038a99)
 * Prototype: undefined8 good_update_creature_control_038a99(void);
 * Address  : 0x38a99 (Size: 108 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> good_level_design_player_should_0382d8, good_update_creature_and_thing_038989
 * Callees  : 1 -> good_process_thing_entity_038b05
 ******************************************************************************/
undefined8 good_update_creature_control_038a99(void)

{
  int thing;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  
  if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8c) != '\0') || /* thing->ccontrol_idx */
     (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8b) != '\0')) { /* thing->ccontrol_idx */
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8c) = 0; /* thing->ccontrol_idx */
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x8b) = 0; /* thing->ccontrol_idx */
    val = 0;
    while (val < 5) {
      val = good_process_thing_entity_038b05();
      if (val != 0) {
        return CONCAT44(arg_edx,extraout_ECX);
      }
      val = extraout_ECX + 1;
    }
  }
  return CONCAT44(arg_edx,0xffffffff);
}

/******************************************************************************
 * Function : good_process_thing_entity_038b05 (Original VA: 0x38b05, Ghidra: FUN_00038b05)
 * Prototype: undefined4 good_process_thing_entity_038b05(void);
 * Address  : 0x38b05 (Size: 89 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> good_level_design_player_should_0382d8, good_update_creature_control_038a99
 * Callees  : 1 -> creature_fn_082774
 ******************************************************************************/
undefined4 good_process_thing_entity_038b05(void)

{
  char ch;
  int arg_edx;
  
  if (((((&g_players)[arg_edx * 0x4ef] & 1) != 0) && ((&g_bss_0019d0f4)[arg_edx * 0x4ef] == '\x01'))
     && (*(char *)((&g_thing_ptrs)[(ushort)(&g_dungeons)[arg_edx * 0xa84]] + 7) != '\x03')) {
    ch = creature_fn_082774();
    if (ch != '\0') {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : good_update_creature_control_038b5e (Original VA: 0x38b5e, Ghidra: FUN_00038b5e)
 * Prototype: undefined4 good_update_creature_control_038b5e(void);
 * Address  : 0x38b5e (Size: 348 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> good_level_design_player_should_0382d8
 * Callees  : 2 -> creature_fn_082774, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 good_update_creature_control_038b5e(void)

{
  ushort dungeon_off;
  char ch;
  short short_val;
  int thing;
  int room_ptr;
  int extraout_ECX;
  int arg_edx;
  uint local_18;
  
  dungeon_off = (&g_bss_002e0598)[arg_edx * 0xa84];
  local_18 = 0;
  while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
    if ((*(short *)(&g_bss_002ddd2b + room_ptr) != 0) &&
       (ch = creature_fn_082774((ushort)(byte)(&g_bss_002ddd23)[room_ptr] << 8,0x100), arg_edx = extraout_ECX
       , ch != '\0')) {
      local_18 = local_18 + 1;
    }
    dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  if (local_18 != 0) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    local_18 = g_action_random_seed % local_18;
    dungeon_off = (&g_bss_002e0598)[arg_edx * 0xa84];
    while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
      if ((*(short *)(&g_bss_002ddd2b + room_ptr) != 0) &&
         (ch = creature_fn_082774((ushort)(byte)(&g_bss_002ddd23)[room_ptr] << 8,0x100), ch != '\0')) {
        if (local_18 == 0) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            *(undefined1 *)(thing + 8) = 0x83; /* thing->active_state */
            *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
                 *(undefined2 *)(&g_bss_002ddd1c + room_ptr);
            return 1;
          }
        }
        else {
          local_18 = local_18 - 1;
        }
      }
      dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : good_update_creature_and_thing_038cba (Original VA: 0x38cba, Ghidra: FUN_00038cba)
 * Prototype: undefined4 good_update_creature_and_thing_038cba(void);
 * Address  : 0x38cba (Size: 273 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> good_level_design_player_should_0382d8
 * Callees  : 2 -> creature_fn_082774, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 good_update_creature_and_thing_038cba(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  char ch;
  short short_val;
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  uint local_18;
  
  cctrl_ptr = (&g_bss_002e05b8)[arg_edx * 0xa84];
  local_18 = 0;
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
       (ch = creature_fn_082774(), arg_edx = extraout_ECX, ch != '\0')) {
      local_18 = local_18 + 1;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  if (local_18 != 0) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    local_18 = g_action_random_seed % local_18;
    cctrl_ptr = (&g_bss_002e05b8)[arg_edx * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
         (ch = creature_fn_082774(), ch != '\0')) {
        if (local_18 == 0) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            *(undefined1 *)(arg_eax + 8) = 0x22;
            return 1;
          }
        }
        else {
          local_18 = local_18 - 1;
        }
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : good_update_creature_and_thing_038dcb (Original VA: 0x38dcb, Ghidra: FUN_00038dcb)
 * Prototype: undefined4 good_update_creature_and_thing_038dcb(void);
 * Address  : 0x38dcb (Size: 273 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> good_level_design_player_should_0382d8
 * Callees  : 2 -> creature_fn_082774, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 good_update_creature_and_thing_038dcb(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  char ch;
  short short_val;
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  uint local_18;
  
  cctrl_ptr = (&g_bss_002e05b6)[arg_edx * 0xa84];
  local_18 = 0;
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
       (ch = creature_fn_082774(), arg_edx = extraout_ECX, ch != '\0')) {
      local_18 = local_18 + 1;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  if (local_18 != 0) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    local_18 = g_action_random_seed % local_18;
    cctrl_ptr = (&g_bss_002e05b6)[arg_edx * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
         (ch = creature_fn_082774(), ch != '\0')) {
        if (local_18 == 0) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            *(undefined1 *)(arg_eax + 8) = 0x22;
            return 1;
          }
        }
        else {
          local_18 = local_18 - 1;
        }
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : good_update_player_dungeon_038edc (Original VA: 0x38edc, Ghidra: FUN_00038edc)
 * Prototype: undefined4 good_update_player_dungeon_038edc(void);
 * Address  : 0x38edc (Size: 79 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> good_level_design_player_should_0382d8, good_update_creature_and_thing_038989
 * Callees  : 1 -> combobj_fn_016d38
 ******************************************************************************/
undefined4 good_update_player_dungeon_038edc(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((((-1 < arg_edx) && (arg_edx < 5)) && (arg_edx != *(char *)(arg_eax + 6))) &&
     ((((&g_players)[arg_edx * 0x4ef] & 1) != 0 && ((&g_dungeons)[arg_edx * 0xa84] != 0)))) {
    combobj_fn_016d38();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : good_process_thing_entity_038f2b (Original VA: 0x38f2b, Ghidra: FUN_00038f2b)
 * Prototype: undefined8 good_process_thing_entity_038f2b(void);
 * Address  : 0x38f2b (Size: 69 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> combtool_creature_has_dungeon_heart_017cd2, good_fn_038f70
 * Callees  : 1 -> creature_fn_0827fc
 ******************************************************************************/
undefined8 good_process_thing_entity_038f2b(void)

{
  char ch;
  uint thing_ptr;
  uint extraout_ECX;
  undefined4 arg_edx;
  
  for (thing_ptr = g_bss_002e6ec6; thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
      thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
    if ((*(char *)(thing_ptr + 0x1a) == '1') &&
       (ch = creature_fn_0827fc(), thing_ptr = extraout_ECX, ch != '\0')) goto LAB_00038f69;
  }
  thing_ptr = 0;
LAB_00038f69:
  return CONCAT44(arg_edx,thing_ptr);
}

/******************************************************************************
 * Function : good_fn_038f70 (Original VA: 0x38f70, Ghidra: FUN_00038f70)
 * Prototype: longlong good_fn_038f70(void);
 * Address  : 0x38f70 (Size: 58 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Purpose  : Module good.cpp procedure @ 0x038f70
 * Callers  : 1 -> good_level_design_player_should_0382d8
 * Callees  : 2 -> good_process_thing_entity_038f2b, move_update_creature_control_0b3b58
 ******************************************************************************/
longlong good_fn_038f70(void)

{
  short short_val;
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = good_process_thing_entity_038f2b();
  if (val != 0) {
    short_val = move_update_creature_control_0b3b58();
    if (short_val != 0) {
      *(undefined1 *)(arg_eax + 8) = 0x80;
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : good_update_creature_control_038faa (Original VA: 0x38faa, Ghidra: FUN_00038faa)
 * Prototype: undefined4 good_update_creature_control_038faa(void);
 * Address  : 0x38faa (Size: 261 bytes)
 * Module   : good.cpp [direct_file_string_xref]
 * OrigLine : good.cpp lines 971
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> good_level_design_player_should_0382d8
 * Callees  : 7 -> event_fn_0274ad, moodneed_fn_051374, creature_fn_0827fc, room_process_dungeon_room_0ca34c, room_fn_0cc4a0, room_number_slabs_room_zero_0cc968, LbErrorLog
 ******************************************************************************/
undefined4 good_update_creature_control_038faa(void)

{
  char ch;
  int thing;
  int val;
  int val_2;
  
  val = room_process_dungeon_room_0ca34c(1);
  if (((val != 0) && (ch = room_number_slabs_room_zero_0cc968(), ch != '\0')) &&
     (ch = creature_fn_0827fc(), ch != '\0')) {
    val_2 = room_fn_0cc4a0();
    if (val_2 != 0) {
      event_fn_0274ad(0);
      if ((int)*(char *)(val + 3) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
      *(undefined1 *)(thing + 8) = 0x82; /* thing->active_state */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
           *(undefined2 *)(val + 1);
      return 1;
    }
    LbErrorLog(); /* LbErrorLog("good.cpp", line 971, "Eh?") */
  }
  return 0;
}

/******************************************************************************
 * Function : good_update_creature_control_0390af (Original VA: 0x390af, Ghidra: FUN_000390af)
 * Prototype: undefined4 good_update_creature_control_0390af(void);
 * Address  : 0x390af (Size: 52 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> good_update_creature_and_thing_038989, scrsupp_script_support_dungeon_heart_0698da, scrsupp_script_support_dungeon_heart_06992a, scrsupp_script_support_could_find_069987
 * Callees  : 1 -> move_update_creature_control_0b3cac
 ******************************************************************************/
undefined4 good_update_creature_control_0390af(void)

{
  int thing;
  undefined1 arg_dl;
  
  *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89) = arg_dl; /* thing->ccontrol_idx */
  move_update_creature_control_0b3cac();
  *(undefined1 *)(thing + 8) = 0x4d; /* thing->active_state */
  return 1;
}

/******************************************************************************
 * Function : good_update_creature_control_0390e3 (Original VA: 0x390e3, Ghidra: FUN_000390e3)
 * Prototype: undefined4 good_update_creature_control_0390e3(void);
 * Address  : 0x390e3 (Size: 53 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> scrsupp_fn_0699e0
 * Callees  : 1 -> move_update_creature_control_0b3cac
 ******************************************************************************/
undefined4 good_update_creature_control_0390e3(void)

{
  int thing;
  
  *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89) = 0xff; /* thing->ccontrol_idx */
  move_update_creature_control_0b3cac();
  *(undefined1 *)(thing + 8) = 0x4d; /* thing->active_state */
  return 1;
}

/******************************************************************************
 * Function : good_update_creature_control_039118 (Original VA: 0x39118, Ghidra: FUN_00039118)
 * Prototype: void good_update_creature_control_039118(void);
 * Address  : 0x39118 (Size: 67 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> move_update_creature_control_0b3dac
 * Callees  : 0 -> 
 ******************************************************************************/
void good_update_creature_control_039118(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int val_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = cctrl_ptr + 8;
  do {
    val_2 = val + -2;
    *(undefined2 *)(val + 0x90) = *(undefined2 *)(val + 0x8e);
    val = val_2;
  } while (val_2 != cctrl_ptr);
  *(ushort *)(cctrl_ptr + 0x90) =
       (ushort)*(byte *)(thing + 0xe) + (ushort)*(byte *)(thing + 0x10) * 0x100;
  return;
}

/******************************************************************************
 * Function : good_fn_03915c (Original VA: 0x3915c, Ghidra: FUN_0003915c)
 * Prototype: void good_fn_03915c(void);
 * Address  : 0x3915c (Size: 63 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Module good.cpp procedure @ 0x03915c
 * Callers  : 1 -> draw_process_map_subtile_08bde8
 * Callees  : 1 -> gravyard_fn_0392c5
 ******************************************************************************/
void good_fn_03915c(void)

{
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  uint ui_scale;
  
  ui_scale = (uint)g_units_per_pixel;
  gravyard_fn_0392c5(arg_edx / (int)ui_scale,arg_ebx / (int)ui_scale,arg_ecx / (int)ui_scale);
  return;
}

/******************************************************************************
 * Function : good_fn_03919b (Original VA: 0x3919b, Ghidra: FUN_0003919b)
 * Prototype: void good_fn_03919b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0x3919b (Size: 73 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Purpose  : Module good.cpp procedure @ 0x03919b
 * Callers  : 0 -> 
 * Callees  : 1 -> gravyard_fn_039202
 ******************************************************************************/
void good_fn_03919b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int arg_ecx;
  
  gravyard_fn_039202(arg_ecx / (int)(uint)g_units_per_pixel,param_2,param_3,param_4,param_5);
  return;
}

