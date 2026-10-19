/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: effect.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 26
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : effect_process_thing_entity_024344 (Original VA: 0x24344, Ghidra: FUN_00024344)
 * Prototype: void effect_process_thing_entity_024344(void);
 * Address  : 0x24344 (Size: 567 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 0 -> 
 ******************************************************************************/
void effect_process_thing_entity_024344(void)

{
  int thing_ptr;
  int arg_eax;
  int dungeon_off;
  int loop_i;
  int val;
  int loop_i_2;
  int val_2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  if (*(short *)(&g_bss_002e0b61 + dungeon_off) != 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + dungeon_off)];
    local_4c = *(byte *)(thing_ptr + 0x10) - 0xd;
    local_48 = 0;
    do {
      if ((-1 < local_4c) && (local_4c < 0x101)) {
        val = local_48 * 0x1a + dungeon_off;
        loop_i = *(byte *)(thing_ptr + 0xe) - 0xd;
        for (loop_i_2 = 0; loop_i_2 < 0xe; loop_i_2 = loop_i_2 + 1) {
          if (*(char *)((int)&g_dungeons + loop_i_2 + val + 0x5dd) != '\0') {
            local_1c = 0;
            loop_i_2 = loop_i_2 + 1;
            local_28 = 1;
            val_2 = (int)&g_dungeons + loop_i_2 + val;
            for (; loop_i_2 < 0x1a; loop_i_2 = loop_i_2 + 1) {
              if (*(char *)(val_2 + 0x5dd) != '\0') {
                local_1c = local_28;
              }
              local_28 = local_28 + 1;
              val_2 = val_2 + 1;
            }
            local_1c = local_1c + loop_i;
            if (loop_i < 0) {
              loop_i = 0;
            }
            else if (0xfe < loop_i) {
              loop_i = 0xfe;
            }
            if (local_1c < 0) {
              local_1c = 0;
            }
            else if (0xfe < local_1c) {
              local_1c = 0xfe;
            }
            local_2c = (loop_i - (uint)*(byte *)(thing_ptr + 0xe)) + 0xd;
            for (; loop_i <= local_1c; loop_i = loop_i + 1) {
              if (*(char *)((int)&g_dungeons + local_2c + val + 0x5dd) == '\0') {
                *(undefined1 *)((int)&g_dungeons + local_2c + val + 0x5dd) = 1;
              }
              local_2c = local_2c + 1;
            }
          }
          loop_i = loop_i + 1;
        }
      }
      local_48 = local_48 + 1;
      local_4c = local_4c + 1;
    } while (local_48 < 0x1a);
    local_50 = *(byte *)(thing_ptr + 0xe) - 0xd;
    local_44 = 0;
    do {
      if ((-1 < local_50) && (local_50 < 0x100)) {
        val = *(byte *)(thing_ptr + 0x10) - 0xd;
        for (loop_i = 0; loop_i < 0xe; loop_i = loop_i + 1) {
          if (*(char *)((int)&g_dungeons + local_44 + loop_i * 0x1a + dungeon_off + 0x5dd) != '\0') {
            loop_i = loop_i + 1;
            local_40 = 0;
            local_34 = (int)&g_dungeons + loop_i * 0x1a + local_44 + dungeon_off;
            local_24 = 1;
            for (; loop_i < 0x1a; loop_i = loop_i + 1) {
              if (*(char *)(local_34 + 0x5dd) != '\0') {
                local_40 = local_24;
              }
              local_34 = local_34 + 0x1a;
              local_24 = local_24 + 1;
            }
            local_40 = local_40 + val;
            if (local_40 < 0) {
              local_40 = 0;
            }
            else if (0xfe < local_40) {
              local_40 = 0xfe;
            }
            if (val < 0) {
              val = 0;
            }
            else if (0xfe < val) {
              val = 0xfe;
            }
            local_20 = (int)&g_dungeons +
                       ((val - (uint)*(byte *)(thing_ptr + 0x10)) + 0xd) * 0x1a + local_44 + dungeon_off;
            for (; val <= local_40; val = val + 1) {
              if (*(char *)(local_20 + 0x5dd) == '\0') {
                *(undefined1 *)(local_20 + 0x5dd) = 1;
              }
              local_20 = local_20 + 0x1a;
            }
          }
          val = val + 1;
        }
      }
      local_44 = local_44 + 1;
      local_50 = local_50 + 1;
    } while (local_44 < 0x1a);
  }
  return;
}

/******************************************************************************
 * Function : effect_process_map_subtile_02457b (Original VA: 0x2457b, Ghidra: FUN_0002457b)
 * Prototype: void effect_process_map_subtile_02457b(void);
 * Address  : 0x2457b (Size: 375 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 0 -> 
 ******************************************************************************/
void effect_process_map_subtile_02457b(void)

{
  uint *word_ptr;
  byte *byte_ptr;
  int val;
  byte flag;
  byte flag_2;
  byte flag_3;
  int thing_ptr;
  uint uval;
  int val_2;
  int arg_eax;
  int dungeon_off;
  int val_3;
  int val_4;
  int local_40;
  int local_20;
  int local_1c;
  
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  if (*(short *)(&g_bss_002e0b61 + dungeon_off) != 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + dungeon_off)];
    flag = *(byte *)(thing_ptr + 0x10);
    local_40 = 0;
    do {
      val_3 = ((flag - 0xd) + local_40) * 0x100;
      val_4 = local_40 * 0x1a;
      local_20 = *(byte *)(thing_ptr + 0xe) - 0xd;
      local_1c = 0;
      val = dungeon_off + val_4;
      do {
        if (*(char *)(val + local_1c + 0x2e0b66) != '\0') {
          val_2 = (local_20 + val_3) * 5;
          uval = *(uint *)((int)&g_map_subtiles + val_2 + 1);
          flag_2 = *(byte *)(arg_eax + 0x2b);
          *(uint *)((int)&g_map_subtiles + val_2 + 1) = uval & 0xfffffff;
          word_ptr = (uint *)((int)&g_map_subtiles + val_2 + 1);
          *word_ptr = *word_ptr | (~(1 << (flag_2 & 0x1f)) & uval >> 0x1c) << 0x1c;
          uval = *(uint *)((int)&g_map_subtiles + val_2 + 1);
          flag_2 = (&g_bss_00334078)[val_4];
          flag_3 = *(byte *)(arg_eax + 0x2b);
          *(uint *)((int)&g_map_subtiles + val_2 + 1) = uval & 0xfffffff;
          word_ptr = (uint *)((int)&g_map_subtiles + val_2 + 1);
          *word_ptr = *word_ptr | (1 << (flag_3 & 0x1f) & (uint)flag_2 << (flag_3 & 0x1f) | uval >> 0x1c)
                              << 0x1c;
          if (((&g_bss_00334078)[val_4] & 2) != 0) {
            *(byte *)((int)&g_map_subtiles + val_2) = *(byte *)((int)&g_map_subtiles + val_2) | 0x80;
          }
          if (((&g_bss_00334078)[val_4] & 4) != 0) {
            byte_ptr = (byte *)((int)&g_map_subtiles + (local_20 + val_3) * 5);
            *byte_ptr = *byte_ptr | 4;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
        val_4 = val_4 + 1;
      } while (local_1c < 0x1a);
      local_40 = local_40 + 1;
    } while (local_40 < 0x1a);
  }
  return;
}

/******************************************************************************
 * Function : effect_update_slab_subtile_columns_0246f2 (Original VA: 0x246f2, Ghidra: FUN_000246f2)
 * Prototype: undefined4 effect_update_slab_subtile_columns_0246f2(void);
 * Address  : 0x246f2 (Size: 151 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> instance_update_creature_control_04a0d6
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 effect_update_slab_subtile_columns_0246f2(void)

{
  char arg_al;
  byte flag;
  int val;
  byte flag_2;
  char arg_dl;
  byte arg_bl;
  byte flag_3;
  
  flag_3 = 0;
  while( true ) {
    if (3 < flag_3) {
      return 0;
    }
    val = (uint)flag_3 * 2;
    flag_2 = arg_al + *(char *)((int)&g_data_0018b67b + val + 3) * '\x03';
    flag = (&g_data_0018b67f)[val] * '\x03' + arg_dl;
    if (((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(flag,flag_2) * 5 + 1) >> 0x1c &
         1 << (arg_bl & 0x1f) & 0xffffU) == 0) &&
       (val = (&g_subtile_to_slab_lut)[flag] * 0x55 + (&g_subtile_to_slab_lut)[flag_2],
       ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[val * 6] * 0x16] & 0x29) == 0)) break;
    flag_3 = flag_3 + 1;
  }
  return CONCAT31((int3)((uint)val >> 8),1);
}

/******************************************************************************
 * Function : effect_process_thing_entity_0248e5 (Original VA: 0x248e5, Ghidra: FUN_000248e5)
 * Prototype: undefined4 effect_process_thing_entity_0248e5(void);
 * Address  : 0x248e5 (Size: 176 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 3 -> magic_update_creature_control_04fbd8, person_fn_063b6d, creature_fn_081ec8
 ******************************************************************************/
undefined4 effect_process_thing_entity_0248e5(void)

{
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  int thing_ptr;
  
  if (((arg_eax <= (int)(uint)(byte)(&g_bss_002e05ec)[arg_edx * 0x1508]) &&
      (thing_ptr = arg_eax * 2 + arg_edx * 0x1508, *(short *)(&g_bss_002e05bc + thing_ptr) != 0)) &&
     (*(char *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + thing_ptr)] + 0x1f) == '\x05')) {
    creature_fn_081ec8();
    person_fn_063b6d();
    for (; arg_eax < 7; arg_eax = arg_eax + 1) {
      *(undefined2 *)(&g_bss_002e05bc + thing_ptr) = *(undefined2 *)(&g_bss_002e05be + thing_ptr);
      thing_ptr = thing_ptr + 2;
    }
    (&g_bss_002e05ec)[extraout_ECX] = (&g_bss_002e05ec)[extraout_ECX] + -1;
    *(undefined2 *)(&g_bss_002e05bc + (uint)(byte)(&g_bss_002e05ec)[extraout_ECX] * 2 + extraout_ECX) =
         0;
    magic_update_creature_control_04fbd8();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : effect_allocate_light_effect_024998 (Original VA: 0x24998, Ghidra: FUN_00024998)
 * Prototype: int effect_allocate_light_effect_024998(void);
 * Address  : 0x24998 (Size: 273 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp lines 60
 * Purpose  : String 'Cannot allocate light for effect'
 * Callers  : 57 -> compturn_process_map_subtile_022660, door_update_creature_and_thing_023250, effect_fn_025f6f, effect_fn_025fbb, effect_fn_026007, effect_process_thing_entity_02606f, effect_fn_0263c9, eyelens_fn_026f4d ...
 * Callees  : 7 -> mapwho_process_map_subtile_050c38, sound_fn_06e538, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, light_already_list_0acaf8, LbErrorLog
 ******************************************************************************/
int effect_allocate_light_effect_024998(void)

{
  undefined4 uval;
  short short_val;
  undefined4 *arg_eax;
  int val;
  int thing_ptr;
  undefined1 extraout_CL;
  uint arg_edx;
  int extraout_EDX;
  undefined1 arg_bl;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  undefined4 auStackY_1ffc [2032];
  undefined4 local_2c;
  undefined4 local_22;
  undefined2 uStack_1e;
  undefined1 local_1b;
  int local_18;
  undefined1 local_14;
  
  flag = 0;
  val = (arg_edx & 0xffff) * 0x27;
  local_18 = 0;
  local_14 = arg_bl;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val != 0) {
    thing_ptr = structs_even_free_up_effect_07290f();
    uval = g_game_turn;
    *(undefined1 *)(thing_ptr + 0x1f) = 6; /* thing->class_id */
    *(undefined4 *)(thing_ptr + 9) = uval;
    *(undefined1 *)(thing_ptr + 0x1a) = extraout_CL;
    *(undefined4 *)(thing_ptr + 0xd) = *arg_eax; /* thing->mappos.val_x */
    *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(arg_eax + (uint)flag * -2 + 1);
    *(undefined2 *)(thing_ptr + 2) = 0;
    *(undefined1 *)(thing_ptr + 0x20) = 0; /* thing->model */
    *(undefined1 *)(thing_ptr + 0x23) = 0;
    *(undefined1 *)(thing_ptr + 0x24) = 0;
    *(undefined1 *)(thing_ptr + 6) = local_14; /* thing->owner */
    *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 1; /* thing->render_flags */
    *(undefined2 *)(thing_ptr + 0x1d) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined2 *)(thing_ptr + 0x5e) = *(undefined2 *)((int)&PTR_LAB_0018de59 + val);
    local_18 = thing_ptr;
    if (*(short *)(&g_data_0018de6b + val) != 0) {
      word_ptr = (undefined4 *)(&g_data_0018de6f + (uint)flag * -8 + val);
      local_2c = *(undefined4 *)(&g_data_0018de6b + val);
      word_ptr_3 = (undefined4 *)(&stack0xffffffdc + (uint)flag * -8 + (uint)flag * -8);
      word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
      *(undefined4 *)(&stack0xffffffd8 + (uint)flag * -8) = *word_ptr;
      *word_ptr_3 = *word_ptr_2;
      word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
      (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      local_1b = 1;
      local_22 = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
      (&uStack_1e)[(uint)flag * -4] = *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8);
      short_val = light_already_list_0acaf8();
      *(short *)(extraout_EDX + 0x62) = short_val;
      if (short_val == 0) {
        LbErrorLog(); /* LbErrorLog("effect.cpp", line 60, "Cannot allocate light for effect") */
        return 0;
      }
    }
    structs_thing_already_list_072d90();
    mapwho_process_map_subtile_050c38();
    if (*(short *)(&g_data_0018de65 + val) != 0) {
      sound_fn_06e538(3,0,3,0x100);
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : effect_process_thing_entity_024ab9 (Original VA: 0x24ab9, Ghidra: FUN_00024ab9)
 * Prototype: undefined8 effect_process_thing_entity_024ab9(void);
 * Address  : 0x24ab9 (Size: 1590 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp lines 231
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 18 -> effect_update_creature_and_thing_025af0, effect_update_player_view_state_02666b, effect_process_map_subtile_026987, inits_allocate_dynamic_light_shot_0444a9, panmap_update_player_view_state_0627b5, sound_fn_06f671, structs_update_creature_control_072af4, light_attempt_set_intensity_unallocated_0ad148 ...
 ******************************************************************************/
undefined8 effect_process_thing_entity_024ab9(void)

{
  byte flag;
  uint rand_seed;
  uint rand_seed_2;
  undefined2 rand_seed_3;
  char ch;
  int arg_eax;
  int val;
  int val_2;
  short *val_3;
  short *extraout_ECX;
  short *extraout_ECX_00;
  int extraout_ECX_01;
  short *extraout_ECX_02;
  short *extraout_ECX_03;
  short *extraout_ECX_04;
  int extraout_ECX_05;
  short *extraout_ECX_06;
  short *extraout_ECX_07;
  short *extraout_ECX_08;
  short *extraout_ECX_09;
  short *extraout_ECX_10;
  short *extraout_ECX_11;
  short *extraout_ECX_12;
  undefined4 arg_edx;
  undefined4 uval;
  undefined2 extraout_var;
  int loop_i;
  undefined **val_4;
  undefined **val_5;
  undefined *puStack_6c;
  short local_68;
  short sStack_66;
  short local_64;
  short local_60;
  short local_5e;
  undefined2 local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  val_4 = (undefined **)&local_68;
  local_2c = 0;
  val_3 = (short *)((int)&PTR_LAB_0018de59 + (uint)*(byte *)(arg_eax + 0x1a) * 0x27);
  if (*(short *)(arg_eax + 0x1d) != 0) {
    local_2c = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x1d)];
  }
  if (*(short *)(arg_eax + 0x5e) < 1) {
    if (*(char *)(arg_eax + 0x1a) == '+') {
      local_4c = (uint)*(byte *)(arg_eax + 0xe);
      val_4 = &puStack_6c;
      puStack_6c = (undefined *)0x0;
      local_48 = (uint)*(byte *)(arg_eax + 0x10);
      slab_attempt_place_animating_slab_0d7688();
      slab_process_slabmap_tile_0da6fc();
    }
    if (*(char *)(arg_eax + 0x66) != '\0') {
      *(undefined4 *)((int)val_4 + -4) = 0x24b4f;
      sound_fn_06f671();
      *(undefined1 *)(arg_eax + 0x66) = 0;
    }
    *(undefined4 *)((int)val_4 + -4) = 0x24b5c;
    structs_update_creature_control_072af4();
    uval = 0;
    goto LAB_00024bd7;
  }
  if ((*(short *)(arg_eax + 0x62) != 0) && (*(short *)(arg_eax + 0x5e) < 4)) {
    puStack_6c = (undefined *)0x24b78;
    light_attempt_get_intensity_unallocated_0ad23c();
    puStack_6c = (undefined *)0x24b91;
    light_attempt_set_intensity_unallocated_0ad148();
    val_3 = extraout_ECX;
  }
  if (*(char *)((int)val_3 + 0x11) == '\0') {
LAB_000250aa:
    switch((char)val_3[1]) {
    case '\x01':
      local_38 = arg_eax + 0xd;
      for (loop_i = 0; loop_i < (int)(uint)*(byte *)((int)val_3 + 0xb); loop_i = loop_i + 1) {
        if ((char)val_3[7] != '\0') {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          local_54 = (uint)*(byte *)(val_3 + 7) +
                     g_action_random_seed %
                     (((uint)*(byte *)((int)val_3 + 0xf) - (uint)*(byte *)(val_3 + 7)) + 1);
          puStack_6c = (undefined *)0x24d4b;
          val = inits_allocate_dynamic_light_shot_0444a9();
          val_3 = extraout_ECX_04;
          if (val != 0) {
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            rand_seed = g_action_random_seed >> 0xd;
            rand_seed_2 = g_action_random_seed * 0x80000;
            g_action_random_seed._0_2_ = (undefined2)rand_seed;
            rand_seed_3 = (undefined2)g_action_random_seed;
            g_action_random_seed = (rand_seed | rand_seed_2) * 0x24a1 + 0x24df;
            rand_seed = g_action_random_seed >> 0xd;
            rand_seed_2 = g_action_random_seed * 0x80000;
            local_1c = CONCAT22(extraout_var,rand_seed_3) & 0xffff07ff;
            g_action_random_seed._0_2_ = (undefined2)rand_seed;
            rand_seed_3 = (undefined2)g_action_random_seed;
            g_action_random_seed = (rand_seed | rand_seed_2) * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            local_44 = (uint)*(short *)((int)extraout_ECX_04 + 5);
            local_20 = CONCAT22((short)(local_1c >> 0x10),rand_seed_3) & 0xffff03ff;
            puStack_6c = (undefined *)0x24dec;
            val_2 = bflib_system_io_fn_0e69fc();
            if (val_2 < 1) {
              local_30 = 1;
              val_2 = extraout_ECX_05;
            }
            else {
              puStack_6c = (undefined *)0x24bfc;
              local_30 = bflib_system_io_fn_0e69fc();
              val_2 = extraout_ECX_01;
            }
            local_3c = (int)*(short *)(val_2 + 3) + g_action_random_seed % local_30;
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            local_44 = (uint)*(short *)(val_2 + 9);
            puStack_6c = (undefined *)0x24c4f;
            val_2 = bflib_system_io_fn_0e69fc();
            if (val_2 < 1) {
              local_34 = 1;
              val_3 = extraout_ECX_02;
            }
            else {
              puStack_6c = (undefined *)0x24c6c;
              local_34 = bflib_system_io_fn_0e69fc();
              val_3 = extraout_ECX_03;
            }
            local_58 = (int)*(short *)((int)val_3 + 7) + g_action_random_seed % local_34;
            local_44 = local_3c * (&g_slab_attr_table)[local_1c & 0xffff] >> 0x10;
            local_68 = (short)((uint)(local_3c * (&g_slab_attr_table)[local_1c & 0xffff]) >> 0x10);
            sStack_66 = (short)((uint)-(local_3c * (int)(&PTR_LAB_00192fe0)[local_1c & 0xffff] >> 8)
                               >> 8);
            local_64 = (short)((uint)(local_58 * (&g_slab_attr_table)[local_20 & 0xffff]) >> 0x10);
            *(short *)(val + 0x32) = *(short *)(val + 0x32) + local_68;
            *(short *)(val + 0x34) = *(short *)(val + 0x34) + sStack_66;
            *(byte *)(val + 1) = *(byte *)(val + 1) | 4;
            *(short *)(val + 0x36) = *(short *)(val + 0x36) + local_64;
          }
        }
      }
      break;
    case '\x02':
      local_28 = 0;
      loop_i = 0;
      while (local_28 < (int)(uint)*(byte *)((int)val_3 + 0xb)) {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        local_54 = (uint)*(byte *)(val_3 + 7) +
                   g_action_random_seed %
                   (((uint)*(byte *)((int)val_3 + 0xf) - (uint)*(byte *)(val_3 + 7)) + 1);
        local_50 = (int)*val_3 - (int)*(short *)(arg_eax + 0x5e);
        local_44 = local_50 * 0x10;
        local_60 = (short)(local_44 *
                           (&g_slab_attr_table)
                           [loop_i / (int)(uint)*(byte *)((int)val_3 + 0xb) + local_50 * 0x80 &
                            0x7ff] >> 0x10) + *(short *)(arg_eax + 0xd);
        local_40 = (uint)*(byte *)((int)val_3 + 0xb);
        local_5e = (short)((uint)-((int)(local_44 *
                                        (int)(&PTR_LAB_00192fe0)
                                             [loop_i / (int)local_40 + local_50 * 0x80 & 0x7ff]) >>
                                  8) >> 8) + *(short *)(arg_eax + 0xf);
        local_28 = local_28 + 1;
        local_5c = *(undefined2 *)(arg_eax + 0x11);
        loop_i = loop_i + 0x800;
        puStack_6c = (undefined *)0x24ee7;
        inits_allocate_dynamic_light_shot_0444a9();
        val_3 = extraout_ECX_06;
      }
      break;
    case '\x03':
      local_24 = 0;
      loop_i = 0;
      while (local_24 < (int)(uint)*(byte *)((int)val_3 + 0xb)) {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        local_44 = (uint)*(byte *)((int)val_3 + 0xf);
        local_40 = (local_44 - *(byte *)(val_3 + 7)) + 1;
        local_54 = (uint)*(byte *)(val_3 + 7) + g_action_random_seed % local_40;
        local_60 = *(short *)(arg_eax + 0xd) +
                   (short)((uint)(*(short *)(arg_eax + 0x5e) * 0x10 *
                                 (&g_slab_attr_table)
                                 [loop_i / (int)(uint)*(byte *)((int)val_3 + 0xb) +
                                  *(short *)(arg_eax + 0x5e) * 0x80 & 0x7ff]) >> 0x10);
        local_5e = (short)((uint)-(*(short *)(arg_eax + 0x5e) * 0x10 *
                                   (int)(&PTR_LAB_00192fe0)
                                        [loop_i / (int)(uint)*(byte *)((int)val_3 + 0xb) +
                                         *(short *)(arg_eax + 0x5e) * 0x80 & 0x7ff] >> 8) >> 8) +
                   *(short *)(arg_eax + 0xf);
        local_24 = local_24 + 1;
        local_5c = *(undefined2 *)(arg_eax + 0x11);
        loop_i = loop_i + 0x800;
        puStack_6c = (undefined *)0x24fdb;
        inits_allocate_dynamic_light_shot_0444a9();
        val_3 = extraout_ECX_07;
      }
      break;
    case '\x04':
      if (*(char *)(arg_eax + 0x1a) == '0') {
        if (*(short *)(arg_eax + 0x5e) == *val_3) {
          puStack_6c = (undefined *)0x25017;
          LbScreenWaitVbi();
          val_3 = extraout_ECX_08;
        }
        else {
          loop_i = (int)*(short *)(arg_eax + 0x5e);
          if ((int)*val_3 / 2 < loop_i) {
LAB_00025035:
            puStack_6c = (undefined *)0x2503a;
            bflib_system_io_fn_0e8d80();
            val_3 = extraout_ECX_09;
          }
          else if (loop_i == (int)*val_3 / 2) {
            puStack_6c = (undefined *)0x25046;
            bflib_system_io_fn_0e8f24();
            puStack_6c = &g_bss_00334324;
            LbPaletteSet();
            val_3 = extraout_ECX_10;
          }
          else {
            if (loop_i != 0) goto LAB_00025035;
            puStack_6c = (undefined *)0x25087;
            panmap_update_player_view_state_0627b5();
            puStack_6c = (undefined *)0x2508c;
            bflib_system_io_fn_0e8f24();
            val_3 = extraout_ECX_11;
          }
        }
      }
      break;
    default:
      puStack_6c = (undefined *)0x250a5;
      LbErrorLog(); /* LbErrorLog("effect.cpp", line 231, "Unknown EffectGenerationType") */
      val_3 = extraout_ECX_12;
    }
  }
  else {
    puStack_6c = (undefined *)0x24ba3;
    ch = effect_update_player_view_state_02666b();
    val_3 = extraout_ECX_00;
    if (ch != '\0') goto LAB_000250aa;
  }
  flag = *(byte *)(val_3 + 8);
  val_5 = (undefined **)&local_68;
  if (flag != 0) {
    if (flag < 2) {
LAB_000250be:
      puStack_6c = (undefined *)(uint)*(byte *)(val_3 + 8);
      val_5 = &puStack_6c;
      effect_update_creature_and_thing_025af0();
    }
    else {
      val_5 = (undefined **)&local_68;
      if (2 < flag) {
        if (flag < 4) goto LAB_000250be;
        val_5 = (undefined **)&local_68;
        if (flag == 4) {
          puStack_6c = (undefined *)0x250ea;
          effect_process_map_subtile_026987();
          val_5 = (undefined **)&local_68;
        }
      }
    }
  }
  *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) + -1;
  *(undefined4 *)((int)val_5 + -4) = 0x24bd5;
  uval = move_fn_0b4994();
LAB_00024bd7:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : effect_roll_action_random_0250ef (Original VA: 0x250ef, Ghidra: FUN_000250ef)
 * Prototype: void effect_roll_action_random_0250ef(void);
 * Address  : 0x250ef (Size: 1045 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 6 -> effect_update_player_view_state_025780, effect_update_creature_and_thing_0266af, setup_switch_screen_resolution, object_update_creature_and_thing_0c3c3c, object_update_creature_and_thing_0c4f70, update_process_thing_entity_0e1ec4
 * Callees  : 2 -> inits_fn_043ac3, bflib_system_io_fn_0e69fc
 ******************************************************************************/
void effect_roll_action_random_0250ef(void)

{
  ushort *arg_eax;
  int val;
  int val_2;
  uint rand_seed;
  uint uval;
  ushort *arg_edx;
  int arg_ebx;
  short *val_3;
  undefined4 auStack_4c [2];
  short local_44;
  short sStack_42;
  short local_40;
  ushort local_3c;
  ushort local_3a;
  short local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  val_3 = &local_44;
  val = (uint)*arg_edx - (uint)*arg_eax;
  local_1c = 0;
  local_24 = (uint)arg_edx[1] - (uint)arg_eax[1];
  local_18 = 0;
  val_2 = (int)(short)arg_edx[2] - (int)(short)arg_eax[2];
  local_20 = 0;
  local_28 = arg_ebx;
  if (val < 0) {
    val = -val;
    local_28 = -arg_ebx;
  }
  local_30 = arg_ebx;
  if (local_24 < 0) {
    local_24 = -local_24;
    local_30 = -arg_ebx;
  }
  local_34 = arg_ebx;
  if (val_2 < 0) {
    val_2 = -val_2;
    local_34 = -arg_ebx;
  }
  if (((val != 0) || (local_24 != 0)) || (val_2 != 0)) {
    if ((val_2 < val) || (val_2 < local_24)) {
      if ((val < local_24) || (val < val_2)) {
        local_28 = (local_28 * val) / local_24;
        local_34 = (local_34 * val_2) / local_24;
      }
      else {
        local_30 = (local_30 * local_24) / val;
        local_34 = (local_34 * val_2) / val;
        local_24 = val;
      }
    }
    else {
      local_30 = (local_30 * local_24) / val_2;
      local_28 = (local_28 * val) / val_2;
      local_24 = val_2;
    }
    local_24 = local_24 / arg_ebx;
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    local_44 = (short)*(undefined4 *)arg_eax;
    sStack_42 = (short)((uint)*(undefined4 *)arg_eax >> 0x10);
    rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    uval = (int)((arg_ebx + (arg_ebx >> 0x1f) * -4) - (uint)((arg_ebx >> 0x1f) << 1 < 0)) >>
            2;
    local_44 = local_44 + (short)(rand_seed % uval);
    g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
    rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    sStack_42 = sStack_42 + (short)(rand_seed % uval);
    g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    local_40 = arg_eax[2] + (short)(g_action_random_seed % uval);
    for (local_24 = local_24 + 1; local_24 != 0; local_24 = local_24 + -1) {
      local_3c = local_44 + (short)local_1c;
      local_3a = sStack_42 + (short)local_18;
      local_38 = local_40 + (short)local_20;
      if ((local_3c < 0xff00) && (local_3a < 0xff00)) {
        *(undefined4 *)((int)val_3 + -4) = 0xffffffff;
        *(undefined4 *)((int)val_3 + -8) = 0x254bf;
        inits_fn_043ac3();
        val_3 = (short *)((int)val_3 + -4);
      }
      g_bss_0033431c = g_bss_0033431c * 0x24a1 + 0x24df;
      rand_seed = g_bss_0033431c >> 0xd | g_bss_0033431c * 0x80000;
      if (rand_seed % 6 < 3) {
        local_1c = local_1c + 0x20;
      }
      else {
        local_1c = local_1c + -0x20;
      }
      g_bss_0033431c = rand_seed * 0x24a1 + 0x24df;
      rand_seed = g_bss_0033431c >> 0xd | g_bss_0033431c * 0x80000;
      if (rand_seed % 6 < 3) {
        local_18 = local_18 + 0x20;
      }
      else {
        local_18 = local_18 + -0x20;
      }
      g_bss_0033431c = rand_seed * 0x24a1 + 0x24df;
      g_bss_0033431c = g_bss_0033431c >> 0xd | g_bss_0033431c * 0x80000;
      if (g_bss_0033431c % 6 < 3) {
        local_20 = local_20 + 0x20;
      }
      else {
        local_20 = local_20 + -0x20;
      }
      *(undefined4 *)((int)val_3 + -4) = 0x25345;
      bflib_system_io_fn_0e69fc();
      *(undefined4 *)((int)val_3 + -4) = 0x25359;
      bflib_system_io_fn_0e69fc();
      *(undefined4 *)((int)val_3 + -4) = 0x25379;
      val = bflib_system_io_fn_0e69fc();
      *(undefined4 *)((int)val_3 + -4) = 0x25391;
      val_2 = bflib_system_io_fn_0e69fc();
      if (val_2 < val) {
        *(undefined4 *)((int)val_3 + -4) = 0x253aa;
        bflib_system_io_fn_0e69fc();
        *(undefined4 *)((int)val_3 + -4) = 0x253c2;
        bflib_system_io_fn_0e69fc();
        *(undefined4 *)((int)val_3 + -4) = 0x253e2;
        val = bflib_system_io_fn_0e69fc();
      }
      else {
        *(undefined4 *)((int)val_3 + -4) = 0x253f4;
        val = bflib_system_io_fn_0e69fc();
      }
      if (val < 0x400) {
        val_2 = val * 0x80 >> 0x1f;
        val = (int)((val * 0x80 + val_2 * -0x400) - (uint)(val_2 << 9 < 0)) >> 10;
      }
      else {
        val = 0x80;
      }
      val_2 = -val;
      if ((-local_1c == val || -val < local_1c) && (val_2 = local_1c, val < local_1c)) {
        val_2 = val;
      }
      local_1c = val_2;
      val_2 = -val;
      if ((-local_18 == val || -val < local_18) && (val_2 = local_18, val < local_18)) {
        val_2 = val;
      }
      local_18 = val_2;
      val_2 = -val;
      if ((-local_20 == val || -val < local_20) && (val_2 = local_20, val < local_20)) {
        val_2 = val;
      }
      local_20 = val_2;
      local_44 = local_44 + (short)local_28;
      sStack_42 = sStack_42 + (short)local_30;
      local_40 = local_40 + (short)local_34;
    }
  }
  return;
}

/******************************************************************************
 * Function : effect_roll_action_random_025504 (Original VA: 0x25504, Ghidra: FUN_00025504)
 * Prototype: void effect_roll_action_random_025504(void);
 * Address  : 0x25504 (Size: 636 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> setup_switch_screen_resolution
 * Callees  : 1 -> inits_fn_043ac3
 ******************************************************************************/
void effect_roll_action_random_025504(void)

{
  short short_val;
  short short_val_2;
  short short_val_3;
  ushort *arg_eax;
  int val;
  int val_2;
  int val_3;
  int val_4;
  uint rand_seed;
  int val_5;
  int arg_ecx;
  ushort *arg_edx;
  int arg_ebx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  uint uval;
  undefined4 auStack_54 [2];
  undefined1 local_4c [4];
  ushort local_48;
  ushort local_46;
  short local_44;
  undefined4 local_40;
  ushort local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_10;
  
  word_ptr = local_4c;
  val = (uint)*arg_edx - (uint)*arg_eax;
  local_10 = (uint)arg_edx[1] - (uint)arg_eax[1];
  local_20 = 1;
  val_2 = (int)(short)arg_edx[2] - (int)(short)arg_eax[2];
  local_2c = &g_data_00189bf2;
  val_5 = arg_ebx;
  if (val < 0) {
    val = -val;
    val_5 = -arg_ebx;
  }
  val_3 = arg_ebx;
  if (local_10 < 0) {
    local_10 = -local_10;
    val_3 = -arg_ebx;
  }
  val_4 = arg_ebx;
  if (val_2 < 0) {
    val_2 = -val_2;
    val_4 = -arg_ebx;
  }
  if (((val != 0) || (local_10 != 0)) || (val_2 != 0)) {
    if ((val_2 < val) || (val_2 < local_10)) {
      if ((val < local_10) || (val < val_2)) {
        val_5 = (val_5 * val) / local_10;
        val_4 = (val_4 * val_2) / local_10;
      }
      else {
        val_3 = (val_3 * local_10) / val;
        val_4 = (val_4 * val_2) / val;
        local_10 = val;
      }
      short_val_2 = (short)val_3;
      short_val_3 = (short)val_5;
    }
    else {
      short_val_2 = (short)((val_3 * local_10) / val_2);
      short_val_3 = (short)((val_5 * val) / val_2);
      local_10 = val_2;
    }
    local_10 = local_10 / arg_ebx;
    local_10 = local_10 + 1;
    if ((uint)g_data_00189bfd - (uint)g_data_00189bfb == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (int)(((uint)g_data_00189bfd - (uint)g_data_00189bfb) * 0x100) / local_10;
    }
    local_40 = *(undefined4 *)arg_eax;
    local_3c = arg_eax[2];
    local_30 = (uint)g_data_00189bfb << 8;
    uval = 2;
    local_34 = arg_ecx;
    for (; local_10 != 0; local_10 = local_10 + -1) {
      local_28 = 0;
      local_38 = local_30 >> 8;
      while( true ) {
        if (local_34 <= local_28) break;
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        short_val = (short)local_20;
        local_48 = ((short)local_40 + short_val) - (short)(rand_seed % uval);
        g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
        rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        local_46 = (local_40._2_2_ + short_val) - (short)(rand_seed % uval);
        g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        local_44 = (local_3c + short_val) - (short)(g_action_random_seed % uval);
        if ((local_48 < 0xff00) && (local_46 < 0xff00)) {
          word_ptr_2 = word_ptr + -4;
          *(undefined4 *)(word_ptr + -4) = 0xffffffff;
          *(undefined4 *)(word_ptr + -8) = 0x2576c;
          val_5 = inits_fn_043ac3();
          word_ptr = word_ptr + -4;
          if (val_5 != 0) {
            *(short *)(val_5 + 0x46) = (short)local_38;
            word_ptr = word_ptr_2;
          }
        }
        local_28 = local_28 + 1;
      }
      local_20 = local_20 + 0x10;
      local_40 = CONCAT22(local_40._2_2_ + short_val_2,(short)local_40 + short_val_3);
      local_3c = local_3c + (short)val_4;
      uval = uval + 0x20;
      local_30 = local_30 + local_24;
    }
  }
  return;
}

/******************************************************************************
 * Function : effect_update_player_view_state_025780 (Original VA: 0x25780, Ghidra: FUN_00025780)
 * Prototype: void effect_update_player_view_state_025780(void);
 * Address  : 0x25780 (Size: 223 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 1 -> effect_roll_action_random_0250ef
 ******************************************************************************/
void effect_update_player_view_state_025780(void)

{
  int arg_eax;
  byte flag;
  undefined2 local_24 [2];
  int local_20;
  int local_1c;
  
  flag = 0;
  local_20 = arg_eax + 0xd;
  local_1c = 0x100;
  do {
    if (*(int *)((int)&g_player_active_camera + *(char *)(arg_eax + 6) * 0x4ef) != 0) {
      local_24[(uint)flag * -4] = *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8);
      local_24[0] = 0xc00;
      effect_roll_action_random_0250ef();
    }
    local_1c = local_1c + 0x200;
  } while (local_1c < 0x800);
  return;
}

/******************************************************************************
 * Function : effect_illegal_hit_thing_type_02585f (Original VA: 0x2585f, Ghidra: FUN_0002585f)
 * Prototype: void effect_illegal_hit_thing_type_02585f(byte param_1);
 * Address  : 0x2585f (Size: 657 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp lines 687
 * Purpose  : String 'Illegal hit thing type for explosion'
 * Callers  : 4 -> shot_process_thing_entity_06ca16, shot_process_thing_entity_06cee6, spell_update_creature_control_072109, update_process_thing_entity_0e1ec4
 * Callees  : 6 -> anger_fn_010c1a, creature_fn_081c10, creature_how_hero_have_tend_08608c, get_2d_box_distance, get_3d_angles_between_positions, LbErrorLog
 ******************************************************************************/
void effect_illegal_hit_thing_type_02585f(byte param_1)

{
  char ch;
  int arg_eax;
  int val;
  int arg_ecx;
  int arg_edx;
  int thing_ptr;
  int arg_ebx;
  undefined1 *word_ptr;
  bool flag;
  undefined4 auStack_5c [3];
  undefined1 local_50 [4];
  short local_4c;
  short sStack_4a;
  undefined2 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  word_ptr = local_50;
  local_30 = arg_ebx << 8;
  if (arg_eax == 0) {
    local_2c = -1;
  }
  else {
    local_2c = (int)*(char *)(arg_eax + 6);
  }
  local_1c = (uint)*(byte *)(arg_edx + 1) - arg_ebx;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_38 = (uint)*(byte *)(arg_edx + 3) - arg_ebx;
  if (local_38 < 0) {
    local_38 = 0;
  }
  local_44 = (uint)*(byte *)(arg_edx + 1) + arg_ebx;
  if (0xfe < local_44) {
    local_44 = 0xfe;
  }
  local_3c = arg_ebx + (uint)*(byte *)(arg_edx + 3);
  if (0xfe < local_3c) {
    local_3c = 0xfe;
  }
  thing_ptr = arg_ecx * 300 >> 0x1f;
  local_18 = (int)((arg_ecx * 300 + thing_ptr * -0x100) - (uint)(thing_ptr << 7 < 0)) >> 8;
  local_28 = local_44 * 5;
  local_1c = local_1c * 5;
  local_24 = local_38;
  do {
    if (local_3c < local_38) {
      return;
    }
    local_20 = local_28 + local_38 * 0x500;
    for (local_10 = local_1c + local_38 * 0x500; local_10 <= local_20; local_10 = local_10 + 5) {
      if ((*(uint *)((int)&g_map_subtiles + local_10 + 1) & 0x3ff800) != 0) {
        local_40 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + local_10 + 1) & 0x3fffff) >> 0xb]
        ;
LAB_00025aab:
        thing_ptr = local_40;
        if (*(short *)(thing_ptr + 0x1b) != 0) { /* thing->index_or_angle */
          local_40 = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
          if (param_1 < 3) {
            if (param_1 == 0) goto LAB_000259a7;
            if (param_1 < 2) {
              if (*(char *)(thing_ptr + 0x1f) == '\x05') goto LAB_000259d6; /* thing->class_id */
              flag = *(char *)(thing_ptr + 0x1f) == '\x01'; /* thing->class_id */
            }
            else {
              ch = *(char *)(thing_ptr + 0x1f); /* thing->class_id */
LAB_000259cd:
              flag = ch == '\x05';
            }
            if (flag) goto LAB_000259d6;
          }
          else {
            if (3 < param_1) {
              if (param_1 < 7) {
                if (param_1 == 4) {
                  flag = *(char *)(thing_ptr + 0x1f) == '\x05'; /* thing->class_id */
                  goto LAB_00025947;
                }
LAB_000259a7:
                *(undefined4 *)(word_ptr + -4) = 0x259bb;
                LbErrorLog(); /* LbErrorLog("effect.cpp", line 687, "Illegal hit thing type for explosion") */
              }
              else if (param_1 < 8) {
                if (*(char *)(thing_ptr + 0x1f) != '\x01') { /* thing->class_id */
                  ch = *(char *)(thing_ptr + 0x1a);
                  goto LAB_000259cd;
                }
              }
              else if (param_1 != 8) goto LAB_000259a7;
              goto LAB_000259d6;
            }
            if (*(char *)(thing_ptr + 0x1f) == '\x05') goto LAB_0002594d; /* thing->class_id */
            flag = *(char *)(thing_ptr + 0x1f) == '\x01'; /* thing->class_id */
LAB_00025947:
            if (flag) {
LAB_0002594d:
              if (*(char *)(thing_ptr + 6) != local_2c) { /* thing->owner */
LAB_000259d6:
                *(undefined4 *)(word_ptr + -4) = 0x259e2;
                ch = get_3d_angles_between_positions();
                if (ch != '\0') {
                  *(undefined4 *)(word_ptr + -4) = 0x259f3;
                  local_34 = anger_fn_010c1a();
                  *(undefined4 *)(word_ptr + -4) = 0x259ff;
                  val = get_2d_box_distance();
                  if (val < local_30) {
                    local_14 = ((local_30 - val) * 0x100) / local_30;
                    if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
                      *(undefined4 *)(word_ptr + -4) = 0x25a3c;
                      creature_fn_081c10();
                      if (*(short *)(thing_ptr + 0x5e) < 0) {
                        *(undefined4 *)(word_ptr + -4) = 0;
                        *(undefined4 *)(word_ptr + -8) = 1;
                        *(undefined4 *)(word_ptr + -0xc) = 0x25a59;
                        creature_how_hero_have_tend_08608c();
                        word_ptr = word_ptr + -8;
                        goto LAB_00025aab;
                      }
                    }
                    local_4c = (short)((uint)(local_14 * (&g_slab_attr_table)[local_34]) >> 0x10);
                    local_48 = 0;
                    sStack_4a = (short)((uint)-(local_14 * (int)(&PTR_LAB_00192fe0)[local_34] >> 8)
                                       >> 8);
                    *(short *)(thing_ptr + 0x32) = *(short *)(thing_ptr + 0x32) + local_4c;
                    *(short *)(thing_ptr + 0x34) = *(short *)(thing_ptr + 0x34) + sStack_4a;
                    *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) | 4;
                    *(undefined2 *)(thing_ptr + 0x36) = *(undefined2 *)(thing_ptr + 0x36);
                  }
                }
              }
            }
          }
          goto LAB_00025aab;
        }
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}

/******************************************************************************
 * Function : effect_update_creature_and_thing_025af0 (Original VA: 0x25af0, Ghidra: FUN_00025af0)
 * Prototype: void effect_update_creature_and_thing_025af0(byte param_1);
 * Address  : 0x25af0 (Size: 519 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> effect_process_thing_entity_024ab9
 * Callees  : 5 -> effect_thing_has_hit_thing_0265d3, spell_update_creature_control_0717de, creature_fn_081c10, get_2d_box_distance, get_3d_angles_between_positions
 ******************************************************************************/
void effect_update_creature_and_thing_025af0(byte param_1)

{
  char cctrl_ptr;
  int cctrl_ptr_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int thing_ptr;
  int extraout_ECX_03;
  ushort *arg_edx;
  int arg_ebx;
  int val;
  int val_2;
  int thing_ptr_2;
  int local_28;
  int local_20;
  int local_10;
  
  val = (int)((uint)*arg_edx - arg_ebx) >> 8;
  local_20 = (int)((uint)arg_edx[1] - arg_ebx) >> 8;
  local_28 = ((int)((uint)arg_edx[1] + arg_ebx) >> 8) + 1;
  val_2 = ((int)((uint)*arg_edx + arg_ebx) >> 8) + 1;
  if (val < 0) {
    val = 0;
  }
  else if (0xfe < val) {
    val = 0xfe;
  }
  if (local_20 < 0) {
    local_20 = 0;
  }
  else if (0xfe < local_20) {
    local_20 = 0xfe;
  }
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (0xfe < val_2) {
    val_2 = 0xfe;
  }
  if (local_28 < 0) {
    local_28 = 0;
  }
  else if (0xfe < local_28) {
    local_28 = 0xfe;
  }
  local_10 = local_20 * 0x500;
  for (; local_20 <= local_28; local_20 = local_20 + 1) {
    for (thing_ptr_2 = val * 5 + local_10; thing_ptr_2 <= local_10 + val_2 * 5; thing_ptr_2 = thing_ptr_2 + 5) {
      if ((*(uint *)((int)&g_map_subtiles + thing_ptr_2 + 1) & 0x3ff800) != 0) {
        for (thing_ptr = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + thing_ptr_2 + 1) & 0x3fffff) >> 0xb];
            *(short *)(thing_ptr + 0x1b) != 0; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) { /* thing->index_or_angle */
          cctrl_ptr_2 = effect_thing_has_hit_thing_0265d3();
          thing_ptr = extraout_ECX_03;
          if (((((cctrl_ptr_2 != 0) && (*(char *)(extraout_ECX_03 + 0x1f) == '\x05')) &&
               ((&g_bss_002e9189)[(uint)*(byte *)(extraout_ECX_03 + 0x1a) * 0xe6] == '\0')) &&
              ((cctrl_ptr = get_3d_angles_between_positions(), thing_ptr = extraout_ECX, cctrl_ptr != '\0' &&
               (cctrl_ptr_2 = get_2d_box_distance(), thing_ptr = extraout_ECX_00, cctrl_ptr_2 < arg_ebx)))) &&
             (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0xad) =
                   *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0xad) | 4,
             param_1 != 0)) {
            if (param_1 < 2) {
              creature_fn_081c10();
              thing_ptr = extraout_ECX_01;
            }
            else if ((param_1 == 3) &&
                    ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0xac) & 1) ==
                     0)) {
              spell_update_creature_control_0717de();
              thing_ptr = extraout_ECX_02;
            }
          }
        }
      }
    }
    local_10 = local_10 + 0x500;
  }
  return;
}

/******************************************************************************
 * Function : effect_update_creature_and_thing_025cf7 (Original VA: 0x25cf7, Ghidra: FUN_00025cf7)
 * Prototype: void effect_update_creature_and_thing_025cf7(void);
 * Address  : 0x25cf7 (Size: 632 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 3 -> anger_fn_010cd7, person_fn_063b6d, update_fn_0dc440
 ******************************************************************************/
void effect_update_creature_and_thing_025cf7(void)

{
  int gui_btn;
  int val;
  uint thing_ptr;
  byte *extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  byte *thing_ptr_2;
  byte *extraout_ECX_06;
  byte *extraout_ECX_07;
  
  thing_ptr = g_bss_002e6eb6;
  while (thing_ptr_2 = (&g_thing_ptrs)[thing_ptr], thing_ptr = g_bss_002e6ece, thing_ptr_2 != g_thing_ptrs) {
    if ((((*(short *)(thing_ptr_2 + 0x1b) != *(short *)(gui_btn + 0x1d)) && ((*thing_ptr_2 & 0x10) == 0)) && /* thing->index_or_angle */
        ((thing_ptr_2[1] & 2) == 0)) &&
       ((thing_ptr_2[7] != 0x43 && ((&g_bss_002e91e8)[(uint)thing_ptr_2[0x1a] * 0xe6] != '\0')))) {
      val = update_fn_0dc440();
      val = val + 1;
      thing_ptr_2 = extraout_ECX;
      if (val < 0x800) {
        person_fn_063b6d();
        *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x9a) = g_game_turn;
        anger_fn_010cd7((short)(((int)*(short *)(gui_btn + 0x2c) << 0xb) / val),
                     (short)(((int)*(short *)(gui_btn + 0x30) << 0xb) / val));
        thing_ptr_2 = extraout_ECX_01;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr_2 + 0x67);
  }
  while (thing_ptr_2 = (&g_thing_ptrs)[thing_ptr], thing_ptr = g_bss_002e6ebe, thing_ptr_2 != g_thing_ptrs) {
    if ((((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) &&
       ((&g_data_00189981)[(uint)thing_ptr_2[0x1a] * 0x4e] != '\0')) {
      val = update_fn_0dc440();
      val = val + 1;
      thing_ptr_2 = extraout_ECX_02;
      if (val < 0x800) {
        anger_fn_010cd7((short)(((int)*(short *)(gui_btn + 0x2c) << 0xb) / val),
                     (short)(((int)*(short *)(gui_btn + 0x30) << 0xb) / val));
        thing_ptr_2 = extraout_ECX_03;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr_2 + 0x67);
  }
  while (thing_ptr_2 = (&g_thing_ptrs)[thing_ptr], thing_ptr = g_bss_002e6ede, thing_ptr_2 != g_thing_ptrs) {
    if ((((*(short *)(thing_ptr_2 + 0x1b) != *(short *)(gui_btn + 0x1b)) && ((*thing_ptr_2 & 0x10) == 0)) && /* thing->index_or_angle, gui_btn->id_num */
        ((thing_ptr_2[1] & 2) == 0)) && ((&g_data_00188cf8)[(uint)thing_ptr_2[0x1a] * 0x65] != '\0')) {
      val = update_fn_0dc440();
      val = val + 1;
      thing_ptr_2 = extraout_ECX_04;
      if (val < 0x800) {
        anger_fn_010cd7((short)(((int)*(short *)(gui_btn + 0x2c) << 0xb) / val),
                     (short)(((int)*(short *)(gui_btn + 0x30) << 0xb) / val));
        thing_ptr_2 = extraout_ECX_05;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr_2 + 0x67);
  }
  while (thing_ptr_2 = (&g_thing_ptrs)[thing_ptr], thing_ptr_2 != g_thing_ptrs) {
    if (((*(short *)(thing_ptr_2 + 0x1b) != *(short *)(gui_btn + 0x1b)) && ((*thing_ptr_2 & 0x10) == 0)) && /* thing->index_or_angle, gui_btn->id_num */
       (((thing_ptr_2[1] & 2) == 0 && ((&g_data_0018de7f)[(uint)thing_ptr_2[0x1a] * 0x27] != '\0')))) {
      val = update_fn_0dc440();
      val = val + 1;
      thing_ptr_2 = extraout_ECX_06;
      if (val < 0x800) {
        anger_fn_010cd7((short)(((int)*(short *)(gui_btn + 0x2c) << 0xb) / val),
                     (short)(((int)*(short *)(gui_btn + 0x30) << 0xb) / val));
        thing_ptr_2 = extraout_ECX_07;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr_2 + 0x67);
  }
  return;
}

/******************************************************************************
 * Function : effect_fn_025f6f (Original VA: 0x25f6f, Ghidra: FUN_00025f6f)
 * Prototype: void effect_fn_025f6f(void);
 * Address  : 0x25f6f (Size: 76 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Module effect.cpp procedure @ 0x025f6f
 * Callers  : 5 -> build_process_map_subtile_014afe, shot_update_slab_subtile_columns_06d909, object_update_creature_and_thing_0c3c3c, object_update_creature_and_thing_0c4f70, room_process_dungeon_room_0c6374
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
void effect_fn_025f6f(void)

{
  short arg_ax;
  short short_val;
  byte arg_bl;
  undefined2 local_c;
  
  short_val = arg_ax * 0x100 + 0x80;
  local_c = 0x180;
  while ((int)local_c < (int)((uint)arg_bl * 0x100)) {
    effect_allocate_light_effect_024998(short_val);
    local_c = CONCAT11(local_c._1_1_ + '\x01',(undefined1)local_c);
  }
  return;
}

/******************************************************************************
 * Function : effect_fn_025fbb (Original VA: 0x25fbb, Ghidra: FUN_00025fbb)
 * Prototype: void effect_fn_025fbb(void);
 * Address  : 0x25fbb (Size: 76 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Module effect.cpp procedure @ 0x025fbb
 * Callers  : 1 -> compturn_process_map_subtile_022660
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
void effect_fn_025fbb(void)

{
  short arg_ax;
  short short_val;
  byte arg_bl;
  undefined2 local_c;
  
  short_val = arg_ax * 0x100 + 0x80;
  local_c = 0x180;
  while ((int)local_c < (int)((uint)arg_bl * 0x100)) {
    effect_allocate_light_effect_024998(short_val);
    local_c = CONCAT11(local_c._1_1_ + '\x01',(undefined1)local_c);
  }
  return;
}

/******************************************************************************
 * Function : effect_fn_026007 (Original VA: 0x26007, Ghidra: FUN_00026007)
 * Prototype: void effect_fn_026007(void);
 * Address  : 0x26007 (Size: 97 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Module effect.cpp procedure @ 0x026007
 * Callers  : 1 -> build_process_map_subtile_014d45
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
void effect_fn_026007(void)

{
  short arg_ax;
  short short_val;
  byte arg_bl;
  undefined2 local_10;
  
  short_val = arg_ax * 0x100 + 0x80;
  local_10 = 0x180;
  while ((int)local_10 < (int)((uint)arg_bl * 0x100)) {
    effect_allocate_light_effect_024998(short_val);
    effect_allocate_light_effect_024998();
    local_10 = CONCAT11(local_10._1_1_ + '\x01',(undefined1)local_10);
  }
  return;
}

/******************************************************************************
 * Function : effect_fn_026068 (Original VA: 0x26068, Ghidra: FUN_00026068)
 * Prototype: void effect_fn_026068(void);
 * Address  : 0x26068 (Size: 7 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Module effect.cpp procedure @ 0x026068
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void effect_fn_026068(void)

{
  return;
}

/******************************************************************************
 * Function : effect_process_thing_entity_02606f (Original VA: 0x2606f, Ghidra: FUN_0002606f)
 * Prototype: undefined8 effect_process_thing_entity_02606f(void);
 * Address  : 0x2606f (Size: 858 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 8 -> effect_allocate_light_effect_024998, effect_update_player_view_state_02666b, inits_allocate_dynamic_light_shot_0444a9, sound_fn_06e538, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0, light_process_map_subtile_0b250c, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined8 effect_process_thing_entity_02606f(void)

{
  char ch;
  short short_val;
  int arg_eax;
  int val;
  undefined4 uval;
  uint rand_seed;
  int val_2;
  undefined4 arg_edx;
  uint rand_seed_2;
  int val_3;
  undefined1 *word_ptr;
  short *val_4;
  short local_38;
  short sStack_36;
  short local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  val_4 = &local_38;
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0x39;
  if (0 < *(short *)(arg_eax + 0x5e)) {
    *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) + -1;
  }
  if (*(short *)(arg_eax + 0x5e) == 0) {
    structs_update_creature_control_072af4();
    uval = 0;
  }
  else {
    ch = effect_update_player_view_state_02666b();
    if (ch != '\0') {
      if (*(int *)(arg_eax + 0x15) != 0) {
        *(int *)(arg_eax + 0x15) = *(int *)(arg_eax + 0x15) + -1;
      }
      if (*(int *)(arg_eax + 0x15) == 0) {
        for (local_24 = 0; local_24 < *(int *)(&g_data_0018fb9f + val); local_24 = local_24 + 1) {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          rand_seed = g_action_random_seed >> 0xd;
          g_action_random_seed = (rand_seed | g_action_random_seed * 0x80000) * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          rand_seed_2 = g_action_random_seed % (*(ushort *)(arg_eax + 0x13) + 1);
          rand_seed = rand_seed & 0x7ff;
          val_3 = ((int)((&g_slab_attr_table)[rand_seed] * rand_seed_2) >> 0x10) + (uint)*(ushort *)(arg_eax + 0xd);
          val_2 = (-((int)((int)(&PTR_LAB_00192fe0)[rand_seed] * rand_seed_2) >> 8) >> 8) +
                  (uint)*(ushort *)(arg_eax + 0xf);
          if (val_3 < 0) {
            val_3 = 0;
          }
          else if (0xffff < val_3) {
            val_3 = 0xffff;
          }
          if (val_2 < 0) {
            val_2 = 0;
          }
          else if (0xffff < val_2) {
            val_2 = 0xffff;
          }
          local_2c = 0;
          local_30 = (undefined2)val_3;
          local_2e = (undefined2)val_2;
          *(undefined4 *)((int)val_4 + -4) = 0x2611a;
          rand_seed = inits_allocate_dynamic_light_shot_0444a9();
          if (rand_seed <= g_thing_ptrs) break;
          *(undefined2 *)(rand_seed + 0x56) = 0x14;
          *(undefined2 *)(rand_seed + 0x58) = 0x14;
          local_1c = rand_seed;
          if ((&g_data_0018fba7)[val] == '\0') {
            if (*(int *)(&g_data_0018fba8 + val) == -1) {
              *(undefined2 *)(rand_seed + 0x11) = 0x800;
              *(undefined4 *)((int)val_4 + -4) = 0x26157;
              short_val = light_process_map_subtile_0b250c();
            }
            else {
              *(undefined4 *)((int)val_4 + -4) = 0x2615e;
              short_val = move_process_map_subtile_0b28e8();
              short_val = short_val + *(short *)(&g_data_0018fba8 + val);
            }
          }
          else {
            short_val = *(short *)(&g_data_0018fba8 + val);
          }
          *(short *)(rand_seed + 0x11) = short_val;
          *(undefined4 *)((int)val_4 + -4) = 0x26178;
          val_2 = ceiling_process_map_subtile_07dbc0();
          if (val_2 == 0) {
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
            local_38 = (short)(rand_seed % ((*(int *)(&g_data_0018fbb0 + val) -
                                        *(int *)(&g_data_0018fbac + val)) + 1U)) +
                       (short)*(undefined4 *)(&g_data_0018fbac + val);
            rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            local_20 = (*(int *)(&g_data_0018fbb8 + val) - *(int *)(&g_data_0018fbb4 + val)) + 1;
            g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
            sStack_36 = (short)(rand_seed % local_20) + (short)*(undefined4 *)(&g_data_0018fbb4 + val);
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            local_34 = (short)(g_action_random_seed %
                              ((*(int *)(&g_data_0018fbc0 + val) - *(int *)(&g_data_0018fbbc + val)) +
                              1U)) + (short)*(undefined4 *)(&g_data_0018fbbc + val);
            *(short *)(local_1c + 0x32) = *(short *)(local_1c + 0x32) + local_38;
            *(short *)(local_1c + 0x34) = *(short *)(local_1c + 0x34) + sStack_36;
            *(byte *)(local_1c + 1) = *(byte *)(local_1c + 1) | 4;
            *(short *)(local_1c + 0x36) = *(short *)(local_1c + 0x36) + local_34;
            word_ptr = (undefined1 *)val_4;
            if (*(int *)(&g_data_0018fbc4 + val) != 0) {
              *(undefined4 *)((int)val_4 + -4) = 0x2626f;
              local_28 = effect_allocate_light_effect_024998();
              if (local_28 != 0) {
                g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
                g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
                *(undefined4 *)((int)val_4 + -4) = 0x100;
                *(undefined4 *)((int)val_4 + -8) = 2;
                *(undefined4 *)((int)val_4 + -0xc) = 0;
                word_ptr = (undefined1 *)((int)val_4 + -0x10);
                *(undefined4 *)((int)val_4 + -0x10) = 3;
                *(undefined4 *)((int)val_4 + -0x14) = 0x262c1;
                sound_fn_06e538();
              }
            }
            val_4 = (short *)word_ptr;
            if (*(int *)(&g_data_0018fbcc + val) != 0) {
              *(undefined4 *)(word_ptr + -4) = 0x100;
              *(undefined4 *)(word_ptr + -8) = 2;
              *(undefined4 *)(word_ptr + -0xc) = 0;
              val_4 = (short *)(word_ptr + -0x10);
              *(undefined4 *)(word_ptr + -0x10) = 3;
              *(undefined4 *)(word_ptr + -0x14) = 0x262e5;
              sound_fn_06e538();
            }
          }
          else {
            *(undefined4 *)((int)val_4 + -4) = 0x26186;
            structs_update_creature_control_072af4();
          }
        }
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        *(uint *)(arg_eax + 0x15) =
             *(int *)(&g_data_0018fb97 + val) +
             g_action_random_seed %
             ((*(int *)(&g_data_0018fb9b + val) - *(int *)(&g_data_0018fb97 + val)) + 1U);
      }
    }
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : effect_fn_0263c9 (Original VA: 0x263c9, Ghidra: FUN_000263c9)
 * Prototype: void effect_fn_0263c9(void);
 * Address  : 0x263c9 (Size: 213 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Module effect.cpp procedure @ 0x0263c9
 * Callers  : 3 -> prison_couldn_create_skeleton_prison_066016, torture_couldn_create_ghost_torture_074c0d, update_process_thing_entity_0e1ec4
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
void effect_fn_0263c9(void)

{
  short short_val;
  int arg_eax;
  uint uval;
  int val;
  int val_2;
  uint uval_2;
  int val_3;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  uval = *(ushort *)(arg_eax + 0x56) / 2;
  val_2 = *(ushort *)(arg_eax + 0xd) - uval;
  if (val_2 < 1) {
    val_2 = 0;
  }
  uval_2 = *(ushort *)(arg_eax + 0xd) + uval;
  if (0xfffe < uval_2) {
    uval_2 = 0xffff;
  }
  val_3 = *(ushort *)(arg_eax + 0xf) - uval;
  if (val_3 < 1) {
    val_3 = 0;
  }
  uval = uval + *(ushort *)(arg_eax + 0xf);
  if (0xfffe < uval) {
    uval = 0xffff;
  }
  short_val = *(short *)(arg_eax + 0x11);
  if (short_val < 1) {
    short_val = 0;
  }
  val = (int)*(short *)(arg_eax + 0x11) + (uint)*(ushort *)(arg_eax + 0x58);
  if (0x7fe < val) {
    val = 0x7ff;
  }
  local_30 = (ushort)val_2;
  while (local_30 <= uval_2) {
    local_2e = (ushort)val_3;
    while (local_2c = short_val, local_2e <= uval) {
      while (local_2c <= val) {
        effect_allocate_light_effect_024998();
        local_2c = CONCAT11(local_2c._1_1_ + '\x01',(undefined1)local_2c);
      }
      local_2e = CONCAT11(local_2e._1_1_ + '\x01',(undefined1)local_2e);
    }
    local_30 = CONCAT11(local_30._1_1_ + '\x01',(undefined1)local_30);
  }
  return;
}

/******************************************************************************
 * Function : effect_fn_02649e (Original VA: 0x2649e, Ghidra: FUN_0002649e)
 * Prototype: void effect_fn_02649e(void);
 * Address  : 0x2649e (Size: 1 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Module effect.cpp procedure @ 0x02649e
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 0 -> 
 ******************************************************************************/
void effect_fn_02649e(void)

{
  return;
}

/******************************************************************************
 * Function : effect_update_creature_and_thing_02649f (Original VA: 0x2649f, Ghidra: FUN_0002649f)
 * Prototype: void effect_update_creature_and_thing_02649f(void);
 * Address  : 0x2649f (Size: 308 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 3 -> anger_fn_010434, move_update_creature_control_0b3b58, update_fn_0dc440
 ******************************************************************************/
void effect_update_creature_and_thing_02649f(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  byte flag;
  short short_val;
  int arg_eax;
  int val;
  int cctrl_ptr_2;
  
  if ((int)*(char *)(arg_eax + 6) != (uint)g_neutral_player_number) {
    val = arg_eax + 0xd;
    cctrl_ptr = (&g_bss_002e05b6)[*(char *)(arg_eax + 6) * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if (((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[7] != 0x43)) &&
         (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0')) { /* thing->ccontrol_idx */
        if (thing_ptr[7] == 0xe) {
          flag = thing_ptr[8];
        }
        else {
          flag = thing_ptr[7];
        }
        if ((&g_data_0018c4c8)[(uint)flag * 0x29] != '\0') {
          cctrl_ptr_2 = update_fn_0dc440(val);
          if (cctrl_ptr_2 < 0x1000) {
            if (thing_ptr[7] == 0x1a) {
              anger_fn_010434();
            }
            cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
            short_val = move_update_creature_control_0b3b58();
            if (short_val != 0) {
              thing_ptr[8] = 99;
              *(int *)(cctrl_ptr_2 + 0x2fa) = g_game_turn + 800;
              *(undefined1 *)(cctrl_ptr_2 + 0x2f8) = *(undefined1 *)(arg_eax + 0xe);
              *(undefined1 *)(cctrl_ptr_2 + 0x2f9) = *(undefined1 *)(arg_eax + 0x10);
            }
          }
        }
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return;
}

/******************************************************************************
 * Function : effect_thing_has_hit_thing_0265d3 (Original VA: 0x265d3, Ghidra: FUN_000265d3)
 * Prototype: undefined4 effect_thing_has_hit_thing_0265d3(void);
 * Address  : 0x265d3 (Size: 152 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp lines 1460
 * Purpose  : String 'Thing has no hit thing type'
 * Callers  : 2 -> effect_update_creature_and_thing_025af0, effect_process_map_subtile_026987
 * Callees  : 5 -> shot_update_creature_control_06d334, shot_update_creature_control_06d39c, shot_handle_creature_thing_06d3e1, shot_update_creature_control_06d424, LbErrorLog
 ******************************************************************************/
undefined4 effect_thing_has_hit_thing_0265d3(void)

{
  byte flag;
  int arg_eax;
  undefined4 uval;
  int arg_edx;
  
  flag = *(byte *)(arg_eax + 0x16);
  if (flag < 3) {
    if (flag != 0) {
      if (1 < flag) {
        uval = shot_update_creature_control_06d424();
        return uval;
      }
      uval = shot_handle_creature_thing_06d3e1();
      return uval;
    }
  }
  else {
    if (flag < 4) {
      uval = shot_update_creature_control_06d334();
      return uval;
    }
    if (flag < 7) {
      if (flag == 4) {
        uval = shot_update_creature_control_06d39c();
        return uval;
      }
    }
    else {
      if (flag < 8) {
        if (((*(char *)(arg_edx + 0x1f) == '\x01') && (*(char *)(arg_edx + 0x1a) == '\x05')) &&
           (*(char *)(arg_edx + 6) != *(char *)(arg_eax + 6))) {
          return 1;
        }
        return 0;
      }
      if (flag == 8) {
        return 0;
      }
    }
  }
  LbErrorLog(); /* LbErrorLog("effect.cpp", line 1460, "Thing has no hit thing type") */
  return 0;
}

/******************************************************************************
 * Function : effect_update_player_view_state_02666b (Original VA: 0x2666b, Ghidra: FUN_0002666b)
 * Prototype: ulonglong effect_update_player_view_state_02666b(void);
 * Address  : 0x2666b (Size: 68 bytes)
 * Module   : effect.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 3 -> effect_process_thing_entity_024ab9, effect_process_thing_entity_02606f, inits_allocate_dynamic_light_shot_0444a9
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
ulonglong effect_update_player_view_state_02666b(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  byte *byte_ptr;
  
  byte_ptr = &g_players;
  val = 0;
  do {
    if (4 < val) {
      return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
    }
    if (((*byte_ptr & 1) != 0) && ((*byte_ptr & 0x40) == 0)) {
      arg_eax = update_fn_0dc440();
      val = extraout_ECX;
      if (arg_eax < 0x1801) {
        return CONCAT44(arg_edx,CONCAT31((int3)((uint)arg_eax >> 8),1));
      }
    }
    byte_ptr = byte_ptr + 0x4ef;
    val = val + 1;
  } while( true );
}

/******************************************************************************
 * Function : effect_update_creature_and_thing_0266af (Original VA: 0x266af, Ghidra: FUN_000266af)
 * Prototype: undefined8 effect_update_creature_and_thing_0266af(void);
 * Address  : 0x266af (Size: 230 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> update_process_thing_entity_0e1ec4
 * Callees  : 5 -> effect_roll_action_random_0250ef, effect_process_thing_entity_026795, entrance_update_player_view_state_02684f, creature_fn_081c10, creature_how_hero_have_tend_08608c
 ******************************************************************************/
undefined8 effect_update_creature_and_thing_0266af(void)

{
  int camera;
  int val;
  undefined4 uval;
  int thing_ptr;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  val = g_game_turn - *(int *)(camera + 9);
  if (*(short *)(camera + 0x5e) == 0) {
    uStack_14 = 0x266cc;
    uval = entrance_update_player_view_state_02684f();
    return CONCAT44(arg_edx,uval);
  }
  thing_ptr = val / 0x10;
  val = val % 0x10;
  if (val == 0) {
    uStack_14 = 0x266e4;
    uval = effect_process_thing_entity_026795();
    return CONCAT44(arg_edx,uval);
  }
  if (val == 1) {
    word_ptr_2 = &stack0xfffffff0;
    if (*(short *)(camera + 0x17) != 0) { /* camera->zoom */
      uStack_14 = 0x26719;
      uval = effect_roll_action_random_0250ef();
      return CONCAT44(arg_edx,uval);
    }
  }
  else {
    word_ptr_2 = &stack0xfffffff0;
    if ((val == 2) && (word_ptr_2 = &stack0xfffffff0, *(short *)(camera + 0x17) != 0)) { /* camera->zoom */
      uStack_14 = 0x26745;
      creature_fn_081c10();
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(camera + 0x17)]; /* camera->zoom */
      if (*(short *)(thing_ptr + 0x5e) < 0) {
        uStack_14 = 0;
        *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1d3) = 0x18; /* thing->ccontrol_idx */
        word_ptr = &uStack_18;
        uStack_18 = 1;
        thing_ptr = creature_how_hero_have_tend_08608c();
      }
      *(undefined2 *)(camera + 0x17) = 0; /* camera->zoom */
      word_ptr_2 = (undefined1 *)word_ptr;
    }
  }
  return CONCAT44(*(undefined4 *)(word_ptr_2 + 4),thing_ptr);
}

/******************************************************************************
 * Function : effect_process_thing_entity_026795 (Original VA: 0x26795, Ghidra: FUN_00026795)
 * Prototype: void effect_process_thing_entity_026795(void);
 * Address  : 0x26795 (Size: 166 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> effect_update_creature_and_thing_0266af, update_process_thing_entity_0e1ec4
 * Callees  : 2 -> get_2d_box_distance, get_2d_angle_between_positions
 ******************************************************************************/
void effect_process_thing_entity_026795(void)

{
  byte *thing_ptr;
  char ch;
  int camera;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uval;
  byte *byte_ptr;
  int val_3;
  
  val_3 = 0x7fffffff;
  val = camera + 0xd;
  byte_ptr = (byte *)0x0;
  uval = g_bss_002e6eb6;
  while (thing_ptr = (&g_thing_ptrs)[uval], g_thing_ptrs < thing_ptr) {
    if (((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[6] != *(byte *)(camera + 6))
        ) && (-1 < *(short *)(thing_ptr + 0x5e))) {
      val_2 = get_2d_box_distance(val_3,val,thing_ptr + 0xd); /* thing->mappos.val_x */
      camera = extraout_ECX;
      if ((val_2 < val_3) &&
         (val_3 = val_2,
         val_2 < *(int *)(&g_bss_002eb131 + (uint)*(byte *)(extraout_ECX + 0x19) * 4) * 0x100)) {
        ch = get_2d_angle_between_positions();
        camera = extraout_ECX_00;
        val_3 = val_2;
        if (ch != '\0') {
          byte_ptr = thing_ptr;
        }
      }
    }
    uval = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  if (byte_ptr == (byte *)0x0) {
    *(undefined2 *)(camera + 0x17) = 0; /* camera->zoom */
  }
  else {
    *(undefined2 *)(camera + 0x17) = *(undefined2 *)(byte_ptr + 0x1b); /* camera->zoom */
  }
  return;
}

/******************************************************************************
 * Function : effect_fn_02683b (Original VA: 0x2683b, Ghidra: FUN_0002683b)
 * Prototype: bool effect_fn_02683b(void);
 * Address  : 0x2683b (Size: 20 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Purpose  : Module effect.cpp procedure @ 0x02683b
 * Callers  : 2 -> entrance_update_player_view_state_02684f, update_process_thing_entity_0e1ec4
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
bool effect_fn_02683b(void)

{
  int val;
  
  val = update_fn_0dc440();
  return val < 0x2d00;
}

/******************************************************************************
 * Function : effect_process_map_subtile_026987 (Original VA: 0x26987, Ghidra: FUN_00026987)
 * Prototype: void effect_process_map_subtile_026987(void);
 * Address  : 0x26987 (Size: 322 bytes)
 * Module   : effect.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> effect_process_thing_entity_024ab9
 * Callees  : 3 -> effect_thing_has_hit_thing_0265d3, entrance_fn_026ac9, creature_fn_081c10
 ******************************************************************************/
void effect_process_map_subtile_026987(void)

{
  int arg_eax;
  int val;
  int val_2;
  uint uval;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  ushort *arg_ebx;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  if (*(int *)(arg_eax + 9) == g_game_turn) {
    val = ((int)(uint)*arg_ebx >> 8) + -5;
    uval = ((int)(uint)*arg_ebx >> 8) + 6;
    local_14 = ((int)(uint)arg_ebx[1] >> 8) + 6;
    local_20 = ((int)(uint)arg_ebx[1] >> 8) + -5;
    if (val < 0) {
      val = 0;
    }
    else if (0xff < val) {
      val = 0xff;
    }
    if (local_20 < 0) {
      local_20 = 0;
    }
    else if (0xff < local_20) {
      local_20 = 0xff;
    }
    if ((int)uval < 0) {
      uval = 0;
    }
    else if (0xff < uval) {
      uval = 0xff;
    }
    if ((int)local_14 < 0) {
      local_14 = 0;
    }
    else if (0xff < local_14) {
      local_14 = 0xff;
    }
    local_18 = local_20 * 0x500;
    for (; local_20 <= (int)local_14; local_20 = local_20 + 1) {
      for (local_1c = val * 5 + local_18; local_1c <= (int)(local_18 + uval * 5);
          local_1c = local_1c + 5) {
        uval_2 = (*(uint *)((int)&g_map_subtiles + local_1c + 1) & 0x3fffff) >> 0xb;
        while (g_thing_ptrs < (&g_thing_ptrs)[uval_2]) {
          val_2 = effect_thing_has_hit_thing_0265d3();
          if ((val_2 != 0) ||
             ((val_2 = extraout_ECX, *(char *)(extraout_ECX + 0x1f) == '\t' &&
              (*(char *)(extraout_ECX + 6) != *(char *)(arg_edx + 6))))) {
            entrance_fn_026ac9();
            creature_fn_081c10();
            val_2 = extraout_ECX_00;
          }
          uval_2 = (uint)*(ushort *)(val_2 + 2);
        }
      }
      local_18 = local_18 + 0x500;
    }
  }
  return;
}

