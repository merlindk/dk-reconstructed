/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: shot.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : shot_update_creature_and_thing_06c444 (Original VA: 0x6c444, Ghidra: FUN_0006c444)
 * Prototype: undefined4 shot_update_creature_and_thing_06c444(void);
 * Address  : 0x6c444 (Size: 573 bytes)
 * Module   : shot.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> setup_compute_creature_eye_offset
 * Callees  : 7 -> event_fn_0274ad, moodneed_fn_051374, shot_attempt_kill_non_handled_06d114, shot_update_creature_control_06d223, sound_fn_06e538, structs_update_creature_control_072af4, creature_update_creature_and_thing_081a2c
 ******************************************************************************/
undefined4 shot_update_creature_and_thing_06c444(void)

{
  int gui_btn;
  int cctrl_ptr;
  uint unsynced_seed;
  int arg_edx;
  undefined **val;
  undefined **val_2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *local_18;
  int local_14;
  
  val_2 = &local_18;
  val = &local_18;
  cctrl_ptr = (uint)*(byte *)(gui_btn + 0x1a) * 0x65;
  local_18 = &g_data_00188c94 + cctrl_ptr;
  if ((((*(char *)(arg_edx + 0x1f) != '\x01') || ((&g_data_00188cbc)[cctrl_ptr] != '\0')) ||
      (*(short *)(arg_edx + 0x5e) < 0)) ||
     (((&g_bss_001acd7a)[(uint)*(byte *)(arg_edx + 0x1a) * 0x1d] != '\0' &&
      ((&g_data_00188ce0)[cctrl_ptr] == '\0')))) {
    return 0;
  }
  if (*(ushort *)(gui_btn + 0x1d) == *(ushort *)(gui_btn + 0x1b)) { /* gui_btn->id_num */
    local_14 = 0;
  }
  else {
    local_14 = (&g_thing_ptrs)[*(ushort *)(gui_btn + 0x1d)];
  }
  if ((&g_bss_001acd79)[(uint)*(byte *)(arg_edx + 0x1a) * 0x1d] == '\0') {
    if (*(short *)(&g_data_00188cb6 + cctrl_ptr) != 0) {
      uStack_1c = 0x100;
      uStack_20 = 3;
      uStack_24 = 0;
      val_2 = (undefined **)&uStack_28;
      uStack_28 = 3;
      sound_fn_06e538();
    }
    goto LAB_0006c5c0;
  }
  unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  if (*(char *)(gui_btn + 0x1a) == '\x15') {
    g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
LAB_0006c547:
    uStack_1c = 0x100;
    uStack_20 = 3;
    uStack_24 = 0;
    uStack_28 = 3;
    val = (undefined **)&uStack_28;
    sound_fn_06e538();
  }
  else if (*(char *)(gui_btn + 0x1a) == '\x16') {
    g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
    goto LAB_0006c547;
  }
  *(undefined4 *)((int)val + -4) = 0;
  *(undefined4 *)((int)val + -8) = 0x6c567;
  event_fn_0274ad();
  val_2 = (undefined **)((int)val + -4);
  if ((int)*(char *)(arg_edx + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
    *(undefined4 *)((int)val + -8) = 0x6c597;
    moodneed_fn_051374();
    val_2 = (undefined **)((int)val + -4);
  }
LAB_0006c5c0:
  if (*(short *)(gui_btn + 0x14) != 0) {
    if ((local_18[0x27] != '\0') && (local_14 != 0)) {
      *(short *)(local_14 + 0x5e) = *(short *)(local_14 + 0x5e) + (*(short *)(gui_btn + 0x14) >> 1);
      cctrl_ptr = (int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(local_14 + 0x1a) * 0x73] *
                    (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(local_14 + 100)] + 0x23) * 0x23) /
              100 + (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(local_14 + 0x1a) * 0x73];
      if (cctrl_ptr < *(short *)(local_14 + 0x5e)) {
        *(short *)(local_14 + 0x5e) = (short)cctrl_ptr;
      }
    }
    *(undefined4 *)((int)val_2 + -4) = 0x6c647;
    creature_update_creature_and_thing_081a2c();
    *(undefined1 *)(arg_edx + 0x13) = 0x14;
  }
  *(undefined4 *)((int)val_2 + -4) = 0x6c654;
  shot_update_creature_control_06d223();
  if (*(short *)(arg_edx + 0x5e) < 0) {
    *(undefined4 *)((int)val_2 + -4) = 0x6c665;
    shot_attempt_kill_non_handled_06d114();
  }
  if (local_18[0x18] != '\0') {
    *(undefined4 *)((int)val_2 + -4) = 0x6c677;
    structs_update_creature_control_072af4();
  }
  return 1;
}

/******************************************************************************
 * Function : shot_update_slab_subtile_columns_06c681 (Original VA: 0x6c681, Ghidra: FUN_0006c681)
 * Prototype: void shot_update_slab_subtile_columns_06c681(void);
 * Address  : 0x6c681 (Size: 917 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> shot_process_thing_entity_06ca16
 * Callees  : 5 -> build_process_map_subtile_014afe, build_process_map_subtile_014d45, mapwho_fn_050ea6, sound_fn_06e538, creature_update_creature_and_thing_082cac
 ******************************************************************************/
void shot_update_slab_subtile_columns_06c681(void)

{
  char slab_coord;
  int val;
  int thing;
  int slab_coord_2;
  int val_2;
  int val_3;
  uint arg_edx;
  int val_4;
  int val_5;
  int *int_ptr;
  int thing_ptr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 local_18;
  
  int_ptr = &local_30;
  thing_ptr = 0;
  if (*(short *)(thing + 0x1d) != *(short *)(thing + 0x1b)) { /* thing->index_or_angle */
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing + 0x1d)];
  }
  if (thing_ptr == 0) {
    return;
  }
  if ((arg_edx & 1) == 0) {
    if ((arg_edx & 2) == 0) {
      val_2 = (int)(uint)*(ushort *)(thing + 0xd) >> 8; /* thing->mappos.val_x */
      local_1c = (int)(uint)*(ushort *)(thing + 0xf) >> 8; /* thing->mappos.val_y */
    }
    else {
      val_2 = (int)(uint)*(ushort *)(thing + 0x52) >> 9; /* thing->health */
      if ((val_2 == 0) || (val_2 == 3)) {
        val_2 = ((uint)((int)(uint)*(ushort *)(thing + 0xd) >> 8) / 3) * 3 + 1; /* thing->mappos.val_x */
        local_1c = ((uint)((int)(uint)*(ushort *)(thing + 0xf) >> 8) / 3) * 3 + -2; /* thing->mappos.val_y */
      }
      else {
        val_2 = ((uint)((int)(uint)*(ushort *)(thing + 0xd) >> 8) / 3) * 3 + 1; /* thing->mappos.val_x */
        local_1c = ((uint)((int)(uint)*(ushort *)(thing + 0xf) >> 8) / 3) * 3 + 4; /* thing->mappos.val_y */
      }
    }
  }
  else {
    if ((int)(uint)*(ushort *)(thing + 0x52) >> 10 == 0) { /* thing->health */
      val_2 = ((uint)((int)(uint)*(ushort *)(thing + 0xd) >> 8) / 3) * 3 + 4; /* thing->mappos.val_x */
    }
    else {
      val_2 = ((uint)((int)(uint)*(ushort *)(thing + 0xd) >> 8) / 3) * 3 + -2; /* thing->mappos.val_x */
    }
    local_1c = ((uint)((int)(uint)*(ushort *)(thing + 0xf) >> 8) / 3) * 3 + 1; /* thing->mappos.val_y */
  }
  val_3 = local_1c * 0x100 + val_2;
  val_4 = val_3 >> 0x1f;
  local_30 = (&g_subtile_to_slab_lut)[(int)((val_3 + val_4 * -0x100) - (uint)(val_4 << 7 < 0)) >> 8] * 0x55;
  slab_coord_2 = ((&g_subtile_to_slab_lut)[val_3 % 0x100] + local_30) * 6;
  local_20 = &g_slabmap_base + slab_coord_2;
  val_5 = (int)*(short *)(thing + 0x14);
  if ((((&g_slabmap)[slab_coord_2] & 7) != g_neutral_player_number) &&
     ((uint)((&g_slabmap)[slab_coord_2] & 7) != (int)*(char *)(thing_ptr + 6))) { /* thing->owner */
    return;
  }
  val = val_3 * 5;
  if ((*(byte *)((int)&g_map_subtiles + val) & 0x40) != 0) {
    return;
  }
  local_2c = (&g_subtile_to_slab_lut)[(int)((val_3 + val_4 * -0x100) - (uint)(val_4 << 7 < 0)) >> 8] * 0x55;
  local_18 = 0x100;
  if ((&g_slabmap_base)[((&g_subtile_to_slab_lut)[val_3 % 0x100] + local_2c) * 6] == '\0') {
    return;
  }
  if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) {
    return;
  }
  local_28 = (uint)(byte)(&g_bss_002d33c9)[slab_coord_2];
  local_24 = val_5;
  if (val_5 < (int)local_28) {
    slab_coord = (&g_slabmap_base)[((&g_subtile_to_slab_lut)[local_1c] * 0x55 + (&g_subtile_to_slab_lut)[val_2]) * 6];
    if (slab_coord != '4') {
      local_24._0_1_ = (char)*(short *)(thing + 0x14);
      (&g_bss_002d33c9)[slab_coord_2] = (&g_bss_002d33c9)[slab_coord_2] - (char)local_24;
    }
    if ((*(byte *)((int)&g_map_subtiles + val_3 * 5) & 1) == 0) {
      return;
    }
    val_2 = (g_bss_002eb9e8 * val_5) / (int)g_bss_002eb9b6;
    if ((slab_coord == '4') && (val_2 = val_2 / 6, val_2 < 1)) {
      val_2 = 1;
    }
    *(int *)(thing_ptr + 0x13) = *(int *)(thing_ptr + 0x13) + val_2; /* thing->anim_sprite */
    *(int *)(&g_bss_002e17ac + *(char *)(thing_ptr + 6) * 0x1508) = /* thing->owner */
         *(int *)(&g_bss_002e17ac + *(char *)(thing_ptr + 6) * 0x1508) + val_2; /* thing->owner */
    if (*(int *)(thing_ptr + 0x13) < /* thing->anim_sprite */
        (int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6)) {
      return;
    }
    uStack_34 = 0x6ca0a;
    mapwho_fn_050ea6();
    *(undefined4 *)(thing_ptr + 0x13) = 0; /* thing->anim_sprite */
    return;
  }
  if ((*(byte *)((int)&g_map_subtiles + val) & 1) == 0) {
    if ((*(byte *)((int)&g_map_subtiles + val) & 0x40) != 0) goto LAB_0006c95b;
    uStack_34 = 0x6c90d;
    build_process_map_subtile_014afe();
  }
  else {
    val_2 = (int)((int)g_bss_002eb9e8 * local_28) / (int)g_bss_002eb9b6;
    *(int *)(thing_ptr + 0x13) = *(int *)(thing_ptr + 0x13) + val_2; /* thing->anim_sprite */
    *(int *)(&g_bss_002e17ac + *(char *)(thing_ptr + 6) * 0x1508) = /* thing->owner */
         *(int *)(&g_bss_002e17ac + *(char *)(thing_ptr + 6) * 0x1508) + val_2; /* thing->owner */
    if ((int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6) <=
        *(int *)(thing_ptr + 0x13)) { /* thing->anim_sprite */
      uStack_34 = 0x6c8df;
      mapwho_fn_050ea6();
      *(undefined4 *)(thing_ptr + 0x13) = 0; /* thing->anim_sprite */
    }
    uStack_34 = 0x6c8f4;
    build_process_map_subtile_014d45();
  }
  uStack_34 = 0x100;
  uStack_38 = 2;
  uStack_3c = 0;
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  int_ptr = &uStack_40;
  uStack_40 = 3;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  sound_fn_06e538();
LAB_0006c95b:
  *(undefined4 *)((int)int_ptr + -4) = 0x6c967;
  creature_update_creature_and_thing_082cac();
  return;
}

/******************************************************************************
 * Function : shot_process_thing_entity_06ca16 (Original VA: 0x6ca16, Ghidra: FUN_0006ca16)
 * Prototype: undefined4 shot_process_thing_entity_06ca16(void);
 * Address  : 0x6ca16 (Size: 1232 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> move_shot_has_hit_thing_0b41d8
 * Callees  : 11 -> door_process_map_subtile_022b3a, effect_allocate_light_effect_024998, effect_illegal_hit_thing_type_02585f, shot_update_slab_subtile_columns_06c681, sound_fn_06e538, structs_update_creature_control_072af4, creature_update_creature_and_thing_081a2c, light_process_map_subtile_0b2398 ...
 ******************************************************************************/
undefined4 shot_process_thing_entity_06ca16(void)

{
  char ch;
  int gui_btn;
  undefined4 uval;
  uint extraout_ECX;
  int arg_edx;
  uint *word_ptr;
  undefined1 *word_ptr_2;
  int val;
  uint auStack_5c [13];
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_18;
  
  word_ptr = auStack_5c + 10;
  val = (uint)*(byte *)(gui_btn + 0x1a) * 0x65;
  local_1c = 0;
  local_28 = 0;
  local_18 = '\0';
  if (*(short *)(gui_btn + 0x1d) != *(short *)(gui_btn + 0x1b)) { /* gui_btn->id_num */
    local_28 = (&g_thing_ptrs)[*(ushort *)(gui_btn + 0x1d)];
  }
  auStack_5c[9] = 0x6ca64;
  auStack_5c[0xb] = arg_edx;
  auStack_5c[0xc] = room_fn_0c7058();
  if ((&g_data_00188cdd)[val] != '\0') {
    auStack_5c[9] = 0x6ca76;
    shot_update_slab_subtile_columns_06c681();
  }
  if ((auStack_5c[0xc] & 4) != 0) {
    auStack_5c[9] = 0x6ca93;
    light_process_map_subtile_0b2398();
    auStack_5c[10] = (uint)*(byte *)(auStack_5c[0xb] + 3);
    auStack_5c[9] = 0x6caaa;
    local_24 = door_process_map_subtile_022b3a();
    if (local_24 == 0) {
      if ((extraout_ECX & 0xff) == 0x27) {
        if (*(short *)(&g_data_00188ccb + val) != 0) {
          auStack_5c[9] = 0x6cbc0;
          local_1c = effect_allocate_light_effect_024998();
        }
        word_ptr = auStack_5c + 10;
        if ((*(short *)(&g_data_00188ccd + val) != 0) && (word_ptr = auStack_5c + 10, local_1c != 0)) {
          auStack_5c[9] = 0x100;
          auStack_5c[8] = 2;
          auStack_5c[7] = 0;
          word_ptr = auStack_5c + 6;
          auStack_5c[6] = 3;
          sound_fn_06e538();
        }
        ch = (&g_data_00188ccf)[val];
      }
      else if (((byte)extraout_ECX & 0xfe) == 0x28) {
        if (*(short *)(&g_data_00188cd0 + val) != 0) {
          auStack_5c[9] = 0x6cc28;
          local_1c = effect_allocate_light_effect_024998();
        }
        word_ptr = auStack_5c + 10;
        if ((*(short *)(&g_data_00188cd2 + val) != 0) && (word_ptr = auStack_5c + 10, local_1c != 0)) {
          auStack_5c[9] = 0x100;
          auStack_5c[8] = 2;
          auStack_5c[7] = 0;
          word_ptr = auStack_5c + 6;
          auStack_5c[6] = 3;
          sound_fn_06e538();
        }
        ch = (&g_data_00188cd4)[val];
      }
      else {
        if (*(short *)(&g_data_00188cbf + val) != 0) {
          auStack_5c[9] = 0x6cc70;
          local_1c = effect_allocate_light_effect_024998();
        }
        word_ptr = auStack_5c + 10;
        if ((*(short *)(&g_data_00188cc1 + val) != 0) && (word_ptr = auStack_5c + 10, local_1c != 0)) {
          auStack_5c[9] = 0x100;
          auStack_5c[8] = 2;
          auStack_5c[7] = 0;
          g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
          word_ptr = auStack_5c + 6;
          auStack_5c[6] = 3;
          g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
          sound_fn_06e538();
        }
        ch = (&g_data_00188cc4)[val];
      }
      if (ch != '\0') {
        local_18 = '\x01';
      }
    }
    else {
      if (*(short *)(&g_data_00188cc5 + val) != 0) {
        auStack_5c[9] = 0x6cacc;
        local_1c = effect_allocate_light_effect_024998();
      }
      word_ptr = auStack_5c + 10;
      if ((*(short *)(&g_data_00188cc7 + val) != 0) && (word_ptr = auStack_5c + 10, local_1c != 0)) {
        auStack_5c[9] = 0x100;
        auStack_5c[8] = 2;
        auStack_5c[7] = 0;
        g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
        word_ptr = auStack_5c + 6;
        auStack_5c[6] = 3;
        g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
        sound_fn_06e538();
      }
      if ((&g_data_00188cca)[val] != '\0') {
        local_18 = '\x01';
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x6cb6c;
      creature_update_creature_and_thing_081a2c();
    }
  }
  if ((local_18 == '\0') && (((auStack_5c[0xc] & 1) != 0 || ((auStack_5c[0xc] & 2) != 0)))) {
    *(undefined4 *)((int)word_ptr + -4) = 0x6cd08;
    local_20 = door_process_map_subtile_022b3a();
    if (local_20 == 0) {
      if (*(short *)(&g_data_00188cbf + val) != 0) {
        *(undefined4 *)((int)word_ptr + -4) = 0x6ce0b;
        local_1c = effect_allocate_light_effect_024998();
      }
      if ((*(short *)(&g_data_00188cc1 + val) != 0) && (local_1c != 0)) {
        *(undefined4 *)((int)word_ptr + -4) = 0x100;
        *(undefined4 *)((int)word_ptr + -8) = 2;
        *(undefined4 *)((int)word_ptr + -0xc) = 0;
        g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
        *(undefined4 *)((int)word_ptr + -0x10) = 3;
        g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
        *(undefined4 *)((int)word_ptr + -0x14) = 0x6ce6c;
        sound_fn_06e538();
        word_ptr = (uint *)((int)word_ptr + -0x10);
      }
      if ((&g_data_00188cc4)[val] != '\0') {
        local_18 = '\x01';
      }
    }
    else {
      if (*(short *)(&g_data_00188cc5 + val) != 0) {
        *(undefined4 *)((int)word_ptr + -4) = 0x6cd2c;
        local_1c = effect_allocate_light_effect_024998();
      }
      if ((*(short *)(&g_data_00188cc7 + val) != 0) && (local_1c != 0)) {
        *(undefined4 *)((int)word_ptr + -4) = 0x100;
        *(undefined4 *)((int)word_ptr + -8) = 2;
        *(undefined4 *)((int)word_ptr + -0xc) = 0;
        g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
        *(undefined4 *)((int)word_ptr + -0x10) = 3;
        g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
        *(undefined4 *)((int)word_ptr + -0x14) = 0x6cd8d;
        sound_fn_06e538();
        word_ptr = (uint *)((int)word_ptr + -0x10);
      }
      if ((&g_data_00188cca)[val] != '\0') {
        local_18 = '\x01';
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x6cdcc;
      creature_update_creature_and_thing_081a2c();
    }
  }
  if (local_1c != 0) {
    *(undefined *)(local_1c + 0x16) = (&g_data_00188cde)[val];
  }
  if (local_18 == '\0') {
    if (*(short *)(&g_data_00188ca1 + val) < 1) {
      *(undefined4 *)((int)word_ptr + -4) = 0x6cede;
      room_fn_0c7218();
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x6cecf;
      room_fn_0c75b4();
    }
    uval = 0;
  }
  else {
    word_ptr_2 = (undefined1 *)word_ptr;
    if (*(short *)(&g_data_00188cd5 + val) != 0) {
      word_ptr_2 = (undefined1 *)((int)word_ptr + -4);
      *(uint *)((int)word_ptr + -4) = (uint)(byte)(&g_data_00188cde)[val];
      *(undefined4 *)((int)word_ptr + -8) = 0x6ceaa;
      effect_illegal_hit_thing_type_02585f();
    }
    *(undefined4 *)(word_ptr_2 + -4) = 0x6ceb3;
    structs_update_creature_control_072af4();
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : shot_process_thing_entity_06cee6 (Original VA: 0x6cee6, Ghidra: FUN_0006cee6)
 * Prototype: undefined4 shot_process_thing_entity_06cee6(void);
 * Address  : 0x6cee6 (Size: 450 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> move_shot_has_hit_thing_0b41d8
 * Callees  : 8 -> door_process_map_subtile_022b3a, effect_allocate_light_effect_024998, effect_illegal_hit_thing_type_02585f, sound_fn_06e538, structs_update_creature_control_072af4, creature_update_creature_and_thing_081a2c, room_fn_0c7058, room_fn_0c75b4
 ******************************************************************************/
undefined4 shot_process_thing_entity_06cee6(void)

{
  int gui_btn;
  int val;
  undefined4 uval;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_18;
  
  val = (uint)*(byte *)(gui_btn + 0x1a) * 0x65;
  local_20 = 0;
  local_2c = 0;
  local_18 = '\0';
  if (*(ushort *)(gui_btn + 0x1d) != *(ushort *)(gui_btn + 0x1b)) { /* gui_btn->id_num */
    local_2c = (&g_thing_ptrs)[*(ushort *)(gui_btn + 0x1d)];
  }
  uStack_30 = 0x6cf34;
  local_28 = room_fn_0c7058();
  word_ptr = &local_2c;
  if (local_28 != 0) {
    uStack_30 = 0x6cf52;
    local_24 = door_process_map_subtile_022b3a();
    word_ptr = &local_2c;
    if (local_24 != 0) {
      if (*(short *)(&g_data_00188cc5 + val) != 0) {
        uStack_30 = 0x6cf74;
        local_20 = effect_allocate_light_effect_024998();
      }
      word_ptr = &local_2c;
      if ((*(short *)(&g_data_00188cc7 + val) != 0) && (word_ptr = &local_2c, local_20 != 0)) {
        uStack_30 = 0x100;
        uStack_34 = 2;
        uStack_38 = 0;
        g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
        word_ptr = &uStack_3c;
        uStack_3c = 3;
        g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
        sound_fn_06e538();
      }
      if ((&g_data_00188cca)[val] != '\0') {
        local_18 = '\x01';
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x6d03c;
      creature_update_creature_and_thing_081a2c();
    }
  }
  if (local_20 != 0) {
    *(undefined *)(local_20 + 0x16) = (&g_data_00188cde)[val];
  }
  if (local_18 == '\0') {
    if (*(short *)(&g_data_00188ca1 + val) < 1) {
      *(undefined4 *)((int)word_ptr + -4) = 0x6cede;
      room_fn_0c7218();
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x6d098;
      room_fn_0c75b4();
    }
    uval = 0;
  }
  else {
    word_ptr_2 = (undefined1 *)word_ptr;
    if (*(short *)(&g_data_00188cd5 + val) != 0) {
      word_ptr_2 = (undefined1 *)((int)word_ptr + -4);
      *(uint *)((int)word_ptr + -4) = (uint)(byte)(&g_data_00188cde)[val];
      *(undefined4 *)((int)word_ptr + -8) = 0x6d070;
      effect_illegal_hit_thing_type_02585f();
    }
    *(undefined4 *)(word_ptr_2 + -4) = 0x6d079;
    structs_update_creature_control_072af4();
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d0a8 (Original VA: 0x6d0a8, Ghidra: FUN_0006d0a8)
 * Prototype: undefined4 shot_update_creature_control_06d0a8(void);
 * Address  : 0x6d0a8 (Size: 108 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> setup_compute_creature_eye_offset, setup_apply_possession_lens_and_eye
 * Callees  : 1 -> creature_how_hero_have_tend_08608c
 ******************************************************************************/
undefined4 shot_update_creature_control_06d0a8(void)

{
  byte flag;
  int gui_btn;
  int arg_edx;
  undefined1 uval;
  
  *(undefined2 *)(arg_edx + 0x5e) = 0xffff;
  flag = *(byte *)(gui_btn + 0x1a);
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x1d3) = flag;
  if (*(short *)(gui_btn + 0x1d) == *(short *)(gui_btn + 0x1b)) { /* gui_btn->id_num */
    uval = 0;
  }
  else {
    uval = (&g_data_00188ce1)[(uint)flag * 0x65];
  }
  creature_how_hero_have_tend_08608c(1,uval);
  return 1;
}

/******************************************************************************
 * Function : shot_attempt_kill_non_handled_06d114 (Original VA: 0x6d114, Ghidra: FUN_0006d114)
 * Prototype: undefined4 shot_attempt_kill_non_handled_06d114(void);
 * Address  : 0x6d114 (Size: 271 bytes)
 * Module   : shot.cpp [direct_file_string_xref]
 * OrigLine : shot.cpp lines 1130
 * Purpose  : String 'Attempt to kill non handled object'
 * Callers  : 1 -> shot_update_creature_and_thing_06c444
 * Callees  : 5 -> moodneed_fn_051374, sound_fn_06e538, structs_update_creature_control_072af4, food_fn_0aaecc, LbErrorLog
 ******************************************************************************/
undefined4 shot_attempt_kill_non_handled_06d114(void)

{
  int arg_eax;
  uint uval;
  int val;
  int arg_edx;
  undefined4 *word_ptr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  uval = (uint)*(byte *)(arg_edx + 0x1a);
  if ((&g_bss_001acd79)[uval * 0x1d] != '\0') {
    val = (int)g_my_player_word._3_1_;
    *(undefined2 *)(arg_edx + 0x5e) = 0xffff;
    *(undefined1 *)(arg_edx + 7) = 3;
    if (((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[val * 0x4ef]) &&
       ((&g_bss_0019d0f4)[*(char *)(arg_edx + 6) * 0x4ef] == '\x01')) {
      uStack_14 = 0x6d176;
      moodneed_fn_051374();
    }
    if (*(char *)(arg_edx + 0x1a) == '\x05') {
      *(int *)(&g_bss_002e180c + *(char *)(arg_eax + 6) * 0x1508) =
           *(int *)(&g_bss_002e180c + *(char *)(arg_eax + 6) * 0x1508) + 1;
    }
    return 1;
  }
  if (uval != 9) {
    if (uval != 10) {
      uStack_14 = 0x6d21c;
      LbErrorLog(); /* LbErrorLog("shot.cpp", line 1130, "Attempt to kill non handled object") */
      return 0;
    }
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    uStack_14 = 0x100;
    uStack_18 = 2;
    uStack_1c = 0;
    word_ptr = &uStack_20;
    uStack_20 = 3;
    sound_fn_06e538();
    food_fn_0aaecc();
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x6d1a7;
  structs_update_creature_control_072af4();
  return 0;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d223 (Original VA: 0x6d223, Ghidra: FUN_0006d223)
 * Prototype: void shot_update_creature_control_06d223(void);
 * Address  : 0x6d223 (Size: 273 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> setup_compute_creature_eye_offset, setup_apply_possession_lens_and_eye, shot_update_creature_and_thing_06c444
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
void shot_update_creature_control_06d223(void)

{
  byte flag;
  int arg_eax;
  int val;
  char ch;
  int arg_edx;
  uint uval;
  
  if (*(char *)(arg_edx + 0x1f) != '\x05') {
    return;
  }
  flag = *(byte *)(arg_eax + 0x1a);
  if (flag < 6) {
    if (flag < 4) {
      if (flag == 0) {
        return;
      }
      if (2 < flag) {
        return;
      }
    }
    else if (4 < flag) {
      val = effect_allocate_light_effect_024998();
      if (val == 0) {
        return;
      }
      *(undefined1 *)(val + 0x16) = 2;
      return;
    }
  }
  else if (6 < flag) {
    if (flag < 0xd) {
      if (flag != 9) {
        return;
      }
    }
    else {
      if (flag < 0xe) {
        return;
      }
      if (0xe < flag) {
        if (flag < 0x15) {
          return;
        }
        if (0x16 < flag) {
          return;
        }
      }
      if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xab) & 2) == 0) {
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
        if (ch == '\0') {
          return;
        }
      }
    }
  }
  effect_allocate_light_effect_024998();
  return;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d334 (Original VA: 0x6d334, Ghidra: FUN_0006d334)
 * Prototype: undefined4 shot_update_creature_control_06d334(void);
 * Address  : 0x6d334 (Size: 104 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> effect_thing_has_hit_thing_0265d3, creature_fn_07f9f4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 shot_update_creature_control_06d334(void)

{
  int thing;
  int arg_edx;
  bool flag;
  
  if (thing == 0) {
    return 1;
  }
  if ((*(short *)(arg_edx + 0x1b) != *(short *)(thing + 0x1b)) && /* thing->index_or_angle */
     (*(char *)(thing + 0x1f) == '\x05')) { /* thing->class_id */
    if ((*(char *)(arg_edx + 0x1f) == '\x05') &&
       ((*(char *)(arg_edx + 0x1a) != '\x1f' &&
        ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 1) & 4) == 0)))) {
      flag = *(char *)(thing + 6) == *(char *)(arg_edx + 6); /* thing->owner */
    }
    else {
      if (*(char *)(arg_edx + 0x1f) != '\x01') {
        return 0;
      }
      if (*(char *)(arg_edx + 0x1a) != '\x05') {
        return 0;
      }
      flag = *(char *)(arg_edx + 6) == *(char *)(thing + 6); /* thing->owner */
    }
    if (!flag) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d39c (Original VA: 0x6d39c, Ghidra: FUN_0006d39c)
 * Prototype: undefined4 shot_update_creature_control_06d39c(void);
 * Address  : 0x6d39c (Size: 69 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> effect_thing_has_hit_thing_0265d3, creature_fn_07fa04
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 shot_update_creature_control_06d39c(void)

{
  int gui_btn;
  int arg_edx;
  
  if ((gui_btn != 0) &&
     ((((*(short *)(arg_edx + 0x1b) == *(short *)(gui_btn + 0x1b) || /* gui_btn->id_num */
        (*(char *)(arg_edx + 0x1f) != '\x05')) || (*(char *)(arg_edx + 0x1a) == '\x1f')) ||
      (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 1) & 4) != 0 ||
       (*(char *)(gui_btn + 6) == *(char *)(arg_edx + 6))))))) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : shot_handle_creature_thing_06d3e1 (Original VA: 0x6d3e1, Ghidra: FUN_0006d3e1)
 * Prototype: longlong shot_handle_creature_thing_06d3e1(void);
 * Address  : 0x6d3e1 (Size: 67 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Checks Thing->class_id == 5 (Creature) and processes state
 * Callers  : 1 -> effect_thing_has_hit_thing_0265d3
 * Callees  : 1 -> creature_update_player_view_state_085954
 ******************************************************************************/
longlong shot_handle_creature_thing_06d3e1(void)

{
  char ch;
  int thing;
  int val;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x05') && (*(char *)(thing + 0x1a) != '\x1f')) { /* thing->class_id */
LAB_0006d3f4:
    return CONCAT44(arg_edx,1);
  }
  if (*(char *)(thing + 0x1f) == '\x01') { /* thing->class_id */
    ch = *(char *)(thing + 0x1a);
    if ((ch == '\x05') || (ch == '\t')) goto LAB_0006d3f4;
    if (ch == '\n') {
      val = creature_update_player_view_state_085954();
      if (val == 0) goto LAB_0006d3f4;
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d424 (Original VA: 0x6d424, Ghidra: FUN_0006d424)
 * Prototype: longlong shot_update_creature_control_06d424(void);
 * Address  : 0x6d424 (Size: 47 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> effect_thing_has_hit_thing_0265d3
 * Callees  : 0 -> 
 ******************************************************************************/
longlong shot_update_creature_control_06d424(void)

{
  int thing;
  uint arg_edx;
  
  if (((*(char *)(thing + 0x1f) == '\x05') && (*(char *)(thing + 0x1a) != '\x1f')) && /* thing->class_id */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 4) == 0)) { /* thing->ccontrol_idx */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d453 (Original VA: 0x6d453, Ghidra: FUN_0006d453)
 * Prototype: undefined8 shot_update_creature_control_06d453(void);
 * Address  : 0x6d453 (Size: 140 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> setup_switch_screen_resolution
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 shot_update_creature_control_06d453(void)

{
  uint rand_seed;
  int thing;
  undefined4 arg_edx;
  uint cctrl_ptr;
  int val;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (uint)(byte)(&g_bss_002e9118)[val] +
          ((uint)(byte)(&g_bss_002e9118)[val] *
           (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / 100; /* thing->ccontrol_idx */
  if ((byte)(&g_bss_002e911d)[val] != 0) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    rand_seed = g_action_random_seed >> 0xd;
    g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
    if ((rand_seed & 0xff) < (uint)(byte)(&g_bss_002e911d)[val]) {
      cctrl_ptr = cctrl_ptr * 2;
    }
  }
  if (cctrl_ptr < 0x100) {
    return CONCAT44(arg_edx,cctrl_ptr);
  }
  return CONCAT44(arg_edx,0x100);
}

/******************************************************************************
 * Function : shot_roll_action_random_06d4df (Original VA: 0x6d4df, Ghidra: FUN_0006d4df)
 * Prototype: longlong shot_roll_action_random_06d4df(void);
 * Address  : 0x6d4df (Size: 393 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 7 -> shot_find_boulder_wall_hug_06d668, shot_fn_06d8b6, ceiling_process_map_subtile_07dbc0, ceiling_fn_07df48, light_process_map_subtile_0b2398, room_fn_0c7058, room_fn_0c7218
 ******************************************************************************/
longlong shot_roll_action_random_06d4df(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  int thing_ptr;
  uint rand_seed;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint arg_edx;
  
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0x65;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = g_action_random_seed >> 0xd;
  g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
  if (((rand_seed & 7) == 0) && (*(short *)(arg_eax + 0x3c) == 0)) {
    thing_ptr = ceiling_fn_07df48();
    if (thing_ptr != 0) {
      rand_seed = light_process_map_subtile_0b2398();
      if (((rand_seed & 0xfffffffe) != 0x28) && (rand_seed != 0x27)) {
        *(undefined2 *)(extraout_ECX + 0x34) = *(undefined2 *)(extraout_ECX + 0x34);
        *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) | 4;
        *(short *)(extraout_ECX + 0x36) = *(short *)(extraout_ECX + 0x36) + 0x30;
      }
    }
  }
  val_2 = ceiling_process_map_subtile_07dbc0();
  thing_ptr = extraout_ECX_00;
  if (val_2 != 0) {
    room_fn_0c7058();
    val_2 = shot_fn_06d8b6();
    thing_ptr = extraout_ECX_01;
    if (val_2 != 1) {
      if ((*(char *)(extraout_ECX_01 + 0x1a) != '\x14') && (val_2 == 0)) {
        *(short *)(extraout_ECX_01 + 0x5e) = *(short *)(extraout_ECX_01 + 0x5e) - g_bss_002ee7ac;
      }
      room_fn_0c7218();
      uval = shot_find_boulder_wall_hug_06d668();
      *(undefined2 *)(extraout_ECX_02 + 0x52) = uval;
      thing_ptr = extraout_ECX_02;
    }
  }
  *(short *)(thing_ptr + 0x38) =
       (short)((uint)*(ushort *)(&g_data_00188cad + val) * (&g_slab_attr_table)[*(ushort *)(thing_ptr + 0x52)] /* thing->health */
              >> 0x10);
  *(short *)(thing_ptr + 0x3a) =
       (short)((uint)-((int)((uint)*(ushort *)(&g_data_00188cad + val) *
                            (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing_ptr + 0x52)]) >> 8) >> 8); /* thing->health */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : shot_find_boulder_wall_hug_06d668 (Original VA: 0x6d668, Ghidra: FUN_0006d668)
 * Prototype: undefined4 shot_find_boulder_wall_hug_06d668(void);
 * Address  : 0x6d668 (Size: 365 bytes)
 * Module   : shot.cpp [direct_file_string_xref]
 * OrigLine : shot.cpp lines 1514
 * Purpose  : String 'Cannot find boulder wall hug angle!'
 * Callers  : 1 -> shot_roll_action_random_06d4df
 * Callees  : 3 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, LbErrorLog
 ******************************************************************************/
undefined4 shot_find_boulder_wall_hug_06d668(void)

{
  undefined2 uval;
  undefined2 uval_2;
  int thing;
  int val;
  short short_val;
  uint arg_ebx;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0x65;
  if ((arg_ebx & 1) != 0) {
    if (((*(short *)(thing + 0x52) == 0) || (0x200 < *(ushort *)(thing + 0x52))) && /* thing->health */
       (*(ushort *)(thing + 0x52) < 0x601)) { /* thing->health */
      uval_2 = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
      uval = move_process_map_subtile_0b28e8(uval_2,0);
      val = ceiling_process_map_subtile_07dbc0(uval_2,uval);
      if (val != 0) {
        return 0;
      }
    }
    else {
      uval_2 = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
      uval = move_process_map_subtile_0b28e8(uval_2,0);
      val = ceiling_process_map_subtile_07dbc0(uval_2,uval);
      if (val == 0) {
        return 0;
      }
    }
    return 0x400;
  }
  if ((arg_ebx & 2) != 0) {
    if ((*(short *)(thing + 0x52) == 0) || (0x400 < *(ushort *)(thing + 0x52))) { /* thing->health */
      short_val = *(short *)(thing + 0xd) + *(short *)(&g_data_00188cad + val) * -3; /* thing->mappos.val_x */
      uval_2 = move_process_map_subtile_0b28e8(short_val,0);
      val = ceiling_process_map_subtile_07dbc0(short_val,uval_2);
      if (val == 0) {
        return 0x600;
      }
    }
    else {
      short_val = *(short *)(thing + 0xd) + *(short *)(&g_data_00188cad + val) * 3; /* thing->mappos.val_x */
      uval_2 = move_process_map_subtile_0b28e8(short_val,0);
      val = ceiling_process_map_subtile_07dbc0(short_val,uval_2);
      if (val != 0) {
        return 0x600;
      }
    }
    return 0x200;
  }
  LbErrorLog(); /* LbErrorLog("shot.cpp", line 1514, "Cannot find boulder wall hug angle!") */
  return 0;
}

/******************************************************************************
 * Function : shot_update_creature_control_06d7d5 (Original VA: 0x6d7d5, Ghidra: FUN_0006d7d5)
 * Prototype: void shot_update_creature_control_06d7d5(void);
 * Address  : 0x6d7d5 (Size: 225 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> setup_compute_creature_eye_offset
 * Callees  : 2 -> person_external_change_state_but_064a5f, creature_update_creature_control_081f04
 ******************************************************************************/
void shot_update_creature_control_06d7d5(void)

{
  int thing;
  int cctrl_ptr;
  int arg_edx;
  int val;
  int arg_ebx;
  
  if (((int)(uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < /* thing->ccontrol_idx */
       (int)(&g_bss_002e0fd8)[*(char *)(thing + 6) * 0x542 + (uint)*(byte *)(thing + 0x1a)]) && /* thing->owner */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < 9 || /* thing->ccontrol_idx */
      (*(short *)(&g_bss_002e915c + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0)))) {
    cctrl_ptr = (uint)*(ushort *)(&g_data_00188ce2 + arg_ebx * 0x65) *
            (((uint)*(ushort *)(&g_bss_002e9128 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6) *
              (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x23) * 0xc) / 100 +
            (uint)*(ushort *)(&g_bss_002e9128 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6)) * 0x100;
    val = cctrl_ptr >> 0x1f;
    *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x28) = /* thing->ccontrol_idx */
         *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x24); /* thing->ccontrol_idx */
    *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x24) = /* thing->ccontrol_idx */
         *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x24) + /* thing->ccontrol_idx */
         ((int)((cctrl_ptr + val * -0x100) - (uint)(val << 7 < 0)) >> 8);
    cctrl_ptr = creature_update_creature_control_081f04();
    if (cctrl_ptr != 0) {
      person_external_change_state_but_064a5f();
    }
  }
  return;
}

/******************************************************************************
 * Function : shot_fn_06d8b6 (Original VA: 0x6d8b6, Ghidra: FUN_0006d8b6)
 * Prototype: undefined4 shot_fn_06d8b6(void);
 * Address  : 0x6d8b6 (Size: 83 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Module shot.cpp procedure @ 0x06d8b6
 * Callers  : 1 -> shot_roll_action_random_06d4df
 * Callees  : 1 -> shot_update_slab_subtile_columns_06d909
 ******************************************************************************/
undefined4 shot_fn_06d8b6(void)

{
  undefined4 uval;
  uint arg_ebx;
  
  if (((arg_ebx & 1) == 0) && ((arg_ebx & 2) == 0)) {
    return 0;
  }
  uval = shot_update_slab_subtile_columns_06d909();
  return uval;
}

/******************************************************************************
 * Function : shot_update_slab_subtile_columns_06d909 (Original VA: 0x6d909, Ghidra: FUN_0006d909)
 * Prototype: undefined4 shot_update_slab_subtile_columns_06d909(void);
 * Address  : 0x6d909 (Size: 358 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> shot_fn_06d8b6
 * Callees  : 3 -> door_process_map_subtile_022b3a, effect_fn_025f6f, room_how_room_exist_slabs_0c8654
 ******************************************************************************/
undefined4 shot_update_slab_subtile_columns_06d909(void)

{
  short short_val;
  int arg_eax;
  uint uval;
  int val;
  int arg_ecx;
  ushort *arg_edx;
  int val_2;
  int arg_ebx;
  int room_off;
  int local_1c;
  int local_18;
  
  uval = *(ushort *)(arg_eax + 0x56) / 2;
  val = (int)((uint)arg_edx[1] + arg_ecx * uval) >> 8;
  val_2 = (int)((uint)*arg_edx + arg_ebx * uval) >> 8;
  room_off = (uint)(byte)(&g_bss_002d33c8)[((&g_subtile_to_slab_lut)[val] * 0x55 + (&g_subtile_to_slab_lut)[val_2]) * 6]
          * 0x45;
  if (&g_rooms + room_off < &g_bss_002ddd1c) {
    if ((*(byte *)((int)&g_map_subtiles + (val * 0x100 + val_2) * 5) & 0x40) != 0) {
      val = door_process_map_subtile_022b3a();
      if (val != 0) {
        short_val = *(short *)(val + 0x5e);
        *(short *)(val + 0x5e) = *(short *)(val + 0x5e) - *(short *)(arg_eax + 0x5e);
        *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) - short_val;
        if (*(short *)(val + 0x5e) < 1) {
          return 2;
        }
      }
    }
  }
  else if (*(short *)(&g_room_slabs_count + room_off) == 0x10) {
    for (local_18 = (&g_subtile_to_slab_lut)[val] * 3; local_18 < val + 3; local_18 = local_18 + 1) {
      local_1c = (&g_subtile_to_slab_lut)[val_2] * 3;
      while (local_1c < val_2 + 3) {
        local_1c = local_1c + 1;
        effect_fn_025f6f();
      }
    }
    if ((int)(char)(&g_bss_002ddd1e)[room_off] != (uint)g_neutral_player_number) {
      *(short *)(&g_bss_002e105e + (char)(&g_bss_002ddd1e)[room_off] * 0x1508) =
           *(short *)(&g_bss_002e105e + (char)(&g_bss_002ddd1e)[room_off] * 0x1508) + 1;
    }
    room_how_room_exist_slabs_0c8654();
    if (*(char *)(arg_eax + 0x1a) != '\x14') {
      *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) - g_bss_002ee7b4;
    }
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : shot_fn_06da70 (Original VA: 0x6da70, Ghidra: FUN_0006da70)
 * Prototype: undefined8 shot_fn_06da70(void);
 * Address  : 0x6da70 (Size: 39 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Module shot.cpp procedure @ 0x06da70
 * Callers  : 0 -> 
 * Callees  : 2 -> lair_update_creature_control_04d022, person_update_creature_control_064ae7
 ******************************************************************************/
undefined8 shot_fn_06da70(void)

{
  int arg_eax;
  int val;
  undefined4 arg_edx;
  
  val = lair_update_creature_control_04d022();
  if (val == 0) {
    person_update_creature_control_064ae7();
  }
  else {
    *(undefined1 *)(arg_eax + 8) = 0x59;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : shot_update_creature_and_thing_06da97 (Original VA: 0x6da97, Ghidra: FUN_0006da97)
 * Prototype: undefined8 shot_update_creature_and_thing_06da97(void);
 * Address  : 0x6da97 (Size: 186 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 7 -> anger_fn_010132, lair_update_slab_subtile_columns_04d8d2, lair_update_creature_control_04dbf1, person_fn_063b6d, person_update_creature_control_064ae7, sndheap_update_creature_control_06ddd9, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 shot_update_creature_and_thing_06da97(void)

{
  uint thing_ptr;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a)]; /* thing->ccontrol_idx */
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  if (g_thing_ptrs < thing_ptr) {
    val = sndheap_update_creature_control_06ddd9();
    if (val != 0) {
      val = lair_update_creature_control_04dbf1();
      if (val != 0) {
        val = room_update_slab_subtile_columns_0d0f50();
        if ((((val != 0) && (*(short *)(val + 10) == 0xe)) &&
            (*(char *)(val + 3) == *(char *)(thing + 6))) && /* thing->owner */
           (*(short *)(val + 1) == *(short *)(extraout_ECX + 0x68))) {
          val = anger_fn_010132();
          if (val == 0) {
            person_update_creature_control_064ae7();
            *(undefined4 *)(extraout_ECX_00 + 0x82) = 200;
            *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
          }
          lair_update_slab_subtile_columns_04d8d2();
          uval = 1;
          goto LAB_0006db4b;
        }
      }
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_0006db4b:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : shot_update_creature_control_06db51 (Original VA: 0x6db51, Ghidra: FUN_0006db51)
 * Prototype: undefined8 shot_update_creature_control_06db51(void);
 * Address  : 0x6db51 (Size: 591 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 10 -> anger_fn_010434, anger_removing_annoyed_creature_non_0109ea, lair_update_slab_subtile_columns_04d8d2, lair_update_creature_control_04dbf1, person_fn_063b6d, sndheap_update_creature_control_06ddd9, creature_fn_081cec, creature_update_creature_control_081f04 ...
 ******************************************************************************/
undefined8 shot_update_creature_control_06db51(void)

{
  int cctrl_ptr;
  int thing;
  int cctrl_ptr_2;
  undefined4 uval;
  undefined4 arg_edx;
  int val;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr_2 = sndheap_update_creature_control_06ddd9();
  if (cctrl_ptr_2 == 0) {
LAB_0006dd91:
    person_fn_063b6d();
  }
  else {
    cctrl_ptr_2 = lair_update_creature_control_04dbf1();
    if (cctrl_ptr_2 == 0) goto LAB_0006dd91;
    cctrl_ptr_2 = room_update_slab_subtile_columns_0d0f50();
    if ((((cctrl_ptr_2 == 0) || (*(short *)(cctrl_ptr_2 + 10) != 0xe)) ||
        (*(short *)(cctrl_ptr_2 + 1) != *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68))) || /* thing->ccontrol_idx */
       (*(char *)(cctrl_ptr_2 + 3) != *(char *)(thing + 6))) goto LAB_0006dd91; /* thing->owner */
    *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
    if (((uint)*(ushort *)(thing + 0x1b) + g_game_turn) % (uint)g_bss_002ebaef == 0) { /* thing->index_or_angle */
      creature_fn_081cec(cctrl_ptr_2);
    }
    anger_removing_annoyed_creature_non_0109ea();
    anger_fn_010434();
    if (0 < *(int *)(cctrl_ptr + 0x82)) {
      *(int *)(cctrl_ptr + 0x82) = *(int *)(cctrl_ptr + 0x82) + -1;
    }
    if (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 0x3f) == 0) { /* thing->index_or_angle */
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      if (g_action_random_seed % 100 < 5) {
        *(int *)(&g_bss_002e1814 + *(char *)(thing + 6) * 0x1508) = /* thing->owner */
             *(int *)(&g_bss_002e1814 + *(char *)(thing + 6) * 0x1508) + 1; /* thing->owner */
      }
    }
    cctrl_ptr_2 = (uint)*(byte *)(thing + 0x1a) * 0xe6;
    if ((((&g_bss_002e9126)[cctrl_ptr_2] != '\0') &&
        ((int)(uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < /* thing->ccontrol_idx */
         (int)(&g_bss_002e0fd8)[(uint)*(byte *)(thing + 0x1a) + *(char *)(thing + 6) * 0x542])) && /* thing->owner */
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < 9 || /* thing->ccontrol_idx */
        (*(short *)(&g_bss_002e915c + cctrl_ptr_2) != 0)))) {
      cctrl_ptr_2 = room_process_slabmap_tile_0d12cc();
      if (cctrl_ptr_2 != 0) {
        *(int *)(cctrl_ptr + 0x24) =
             *(int *)(cctrl_ptr + 0x24) +
             (uint)(byte)(&g_bss_002e9127)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
        creature_update_creature_control_081f04();
      }
    }
    cctrl_ptr_2 = ((int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                   (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] * 0x23) / 100
            + (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73]) *
            (uint)(byte)(&g_bss_002e9117)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
    val = cctrl_ptr_2 >> 0x1f;
    if (((int)((cctrl_ptr_2 + val * -0x100) - (uint)(val << 7 < 0)) >> 8 <=
         (int)*(short *)(thing + 0x5e)) && (*(int *)(cctrl_ptr + 0x82) == 0)) {
      person_fn_063b6d();
      uval = 1;
      goto LAB_0006db4b;
    }
    lair_update_slab_subtile_columns_04d8d2();
  }
  uval = 0;
LAB_0006db4b:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : shot_update_creature_control_06dda0 (Original VA: 0x6dda0, Ghidra: FUN_0006dda0)
 * Prototype: ulonglong shot_update_creature_control_06dda0(void);
 * Address  : 0x6dda0 (Size: 57 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> evil_update_creature_control_02796f, moodneed_update_creature_control_051f4c, moodneed_update_creature_control_052119, room_update_creature_control_0cb33c
 * Callees  : 1 -> person_fn_064c4d
 ******************************************************************************/
ulonglong shot_update_creature_control_06dda0(void)

{
  int thing;
  undefined4 arg_edx;
  
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x21) == 0) && /* thing->ccontrol_idx */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 8) == 0)) { /* thing->ccontrol_idx */
    thing = person_fn_064c4d();
    if ((char)thing != '\0') {
      return CONCAT44(arg_edx,CONCAT31((int3)((uint)thing >> 8),1));
    }
  }
  return CONCAT44(arg_edx,thing) & 0xffffffffffffff00;
}

