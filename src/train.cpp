/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: train.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 8
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : train_update_creature_control_074e70 (Original VA: 0x74e70, Ghidra: FUN_00074e70)
 * Prototype: undefined8 train_update_creature_control_074e70(void);
 * Address  : 0x74e70 (Size: 208 bytes)
 * Module   : train.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 8 -> moodneed_fn_051374, person_fn_063b6d, person_update_creature_control_064ae7, train_update_creature_and_thing_0750f8, train_fn_075b1e, train_update_creature_control_075b48, room_attempt_add_creature_room_0cd85c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 train_update_creature_control_074e70(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0x80) = 0;
  val = train_update_creature_control_075b48();
  if (val != 0) {
    val = train_fn_075b1e();
    if (val == 0) {
      if ((int)*(char *)(extraout_ECX + 6) ==
          (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
    }
    else {
      val = room_update_slab_subtile_columns_0d0f50();
      if (((val != 0) && (*(short *)(val + 10) == 6)) &&
         (*(char *)(val + 3) == *(char *)(extraout_ECX_00 + 6))) {
        ch = room_attempt_add_creature_room_0cd85c();
        if (ch != '\0') {
          person_update_creature_control_064ae7();
          train_update_creature_and_thing_0750f8();
          uval = 1;
          *(undefined4 *)(cctrl_ptr + 0x82) = 0;
          goto LAB_00074f3a;
        }
      }
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_00074f3a:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : train_take_money_am_supposed_074f40 (Original VA: 0x74f40, Ghidra: FUN_00074f40)
 * Prototype: undefined8 train_take_money_am_supposed_074f40(void);
 * Address  : 0x74f40 (Size: 440 bytes)
 * Module   : train.cpp [direct_file_string_xref]
 * OrigLine : train.cpp lines 81
 * Purpose  : String 'CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DU'
 * Callers  : 0 -> 
 * Callees  : 12 -> dungeon_remove_reserve_023868, inits_allocate_dynamic_light_shot_0444a9, moodneed_fn_051374, person_external_change_state_but_064a5f, scavenge_fn_067018, train_get_where_we_re_0752c3, train_fn_075b1e, train_update_creature_control_075b48 ...
 ******************************************************************************/
undefined8 train_take_money_am_supposed_074f40(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = train_update_creature_control_075b48();
  if (val != 0) {
    val = train_fn_075b1e();
    if (val == 0) {
      if ((int)*(char *)(extraout_ECX + 6) ==
          (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
    }
    else {
      val = room_update_slab_subtile_columns_0d0f50();
      if ((((val != 0) && (*(short *)(val + 10) == 6)) &&
          (*(short *)(val + 1) == *(short *)(cctrl_ptr + 0x7e))) &&
         (*(char *)(val + 3) == *(char *)(extraout_ECX_00 + 6))) {
        val = *(int *)(cctrl_ptr + 0x82);
        *(int *)(cctrl_ptr + 0x82) = val + 1;
        if (g_bss_002ed442 < val) {
          *(int *)(cctrl_ptr + 0x82) = *(int *)(cctrl_ptr + 0x82) - g_bss_002ed442;
          val = dungeon_remove_reserve_023868();
          if (val < 0) {
            LbErrorLog(); /* LbErrorLog("train.cpp", line 81, "CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON") */
          }
          val = inits_allocate_dynamic_light_shot_0444a9();
          if (val != 0) {
            *(uint *)(val + 0x13) =
                 (uint)*(ushort *)(&g_bss_002e912c + (uint)*(byte *)(extraout_ECX_01 + 0x1a) * 0xe6);
          }
        }
        if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
          val = creature_update_creature_control_081f04();
          if (val == 0) goto LAB_0007503c;
          ch = person_external_change_state_but_064a5f();
          if (ch != '\0') {
            *(undefined2 *)(cctrl_ptr + 0x282) = 0x32;
          }
          *(int *)(&g_bss_002e17c8 + *(char *)(extraout_ECX_03 + 6) * 0x1508) =
               *(int *)(&g_bss_002e17c8 + *(char *)(extraout_ECX_03 + 6) * 0x1508) + 1;
        }
        else {
LAB_0007503c:
          val = scavenge_fn_067018();
          *(int *)(cctrl_ptr + 0x24) = *(int *)(cctrl_ptr + 0x24) + val;
          (&g_bss_002e1702)[*(char *)(extraout_ECX_02 + 6) * 0x542] =
               (&g_bss_002e1702)[*(char *)(extraout_ECX_02 + 6) * 0x542] + val;
          train_get_where_we_re_0752c3();
        }
        uval = 1;
        goto LAB_00074f3a;
      }
    }
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  uval = 0;
LAB_00074f3a:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : train_update_creature_and_thing_0750f8 (Original VA: 0x750f8, Ghidra: FUN_000750f8)
 * Prototype: void train_update_creature_and_thing_0750f8(void);
 * Address  : 0x750f8 (Size: 322 bytes)
 * Module   : train.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> train_update_creature_control_074e70, train_get_where_we_re_0752c3, train_update_slab_subtile_columns_0759cc
 * Callees  : 3 -> instance_negative_instance_049bfc, train_illegal_setup_07523a, room_number_slabs_room_zero_0cc968
 ******************************************************************************/
void train_update_creature_and_thing_0750f8(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int cctrl_ptr_2;
  char ch;
  uint thing;
  int extraout_ECX;
  int extraout_ECX_00;
  int cctrl_ptr_3;
  int arg_edx;
  int arg_ebx;
  
  cctrl_ptr_3 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (arg_ebx != 0) {
    *(undefined1 *)(cctrl_ptr_3 + 0x9e) = 0x32;
  }
  if ((byte)(&g_bss_002e91b0)[(uint)*(byte *)(thing + 0x1a) * 0xe6] != 0) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    if (g_action_random_seed % (uint)(byte)(&g_bss_002e91b0)[(uint)*(byte *)(thing + 0x1a) * 0xe6] == 0) {
      cctrl_ptr = *(ushort *)(arg_edx + 0x3d);
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
        cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
        if ((thing_ptr != thing) && (*(short *)(cctrl_ptr_2 + 0x9f) == 0)) {
          *(undefined1 *)(cctrl_ptr_2 + 0x9a) = 6;
          *(undefined1 *)(cctrl_ptr_2 + 0x9b) = 0x4b;
          *(undefined2 *)(cctrl_ptr_2 + 0x9f) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
          *(undefined4 *)(cctrl_ptr_2 + 0xa1) = *(undefined4 *)(thing + 9);
          *(undefined1 *)(cctrl_ptr_3 + 0x9a) = 6;
          *(undefined1 *)(cctrl_ptr_3 + 0x9b) = 0x4b;
          *(undefined2 *)(cctrl_ptr_3 + 0x9f) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          *(undefined4 *)(cctrl_ptr_3 + 0xa1) = *(undefined4 *)(thing_ptr + 9);
          return;
        }
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa); /* thing->ccontrol_idx */
      }
    }
  }
  *(undefined1 *)(cctrl_ptr_3 + 0x9a) = 1;
  ch = room_number_slabs_room_zero_0cc968();
  cctrl_ptr_3 = extraout_ECX;
  if (ch != '\0') {
    train_illegal_setup_07523a();
    cctrl_ptr_3 = extraout_ECX_00;
  }
  if (*(char *)(cctrl_ptr_3 + 0xd2) == '\0') {
    instance_negative_instance_049bfc(0);
  }
  return;
}

/******************************************************************************
 * Function : train_illegal_setup_07523a (Original VA: 0x7523a, Ghidra: FUN_0007523a)
 * Prototype: void train_illegal_setup_07523a(void);
 * Address  : 0x7523a (Size: 137 bytes)
 * Module   : train.cpp [direct_file_string_xref]
 * OrigLine : train.cpp lines 210
 * Purpose  : String 'Illegal setup to X%d Y%d'
 * Callers  : 3 -> train_update_creature_and_thing_0750f8, train_get_where_we_re_0752c3, train_update_slab_subtile_columns_0759cc
 * Callees  : 5 -> person_fn_063b6d, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, LbErrorLog, dk_sprintf
 ******************************************************************************/
void train_illegal_setup_07523a(void)

{
  int cctrl_ptr;
  undefined2 uval;
  int thing;
  int val;
  int arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(char *)(cctrl_ptr + 0x2e) = (char)(arg_edx % 0x100);
  *(undefined1 *)(cctrl_ptr + 0x2d) = 0x80;
  *(char *)(cctrl_ptr + 0x30) = (char)(arg_edx / 0x100);
  *(undefined1 *)(cctrl_ptr + 0x2f) = 0x80;
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(cctrl_ptr + 0x31) = uval;
  val = ceiling_process_map_subtile_07dbc0();
  if (val != 0) {
    dk_sprintf(&g_log_sprintf_buf,s_Illegal_setup_to_X_d_Y_d_00167b50,*(undefined1 *)(cctrl_ptr + 0x2e),
                 *(undefined1 *)(cctrl_ptr + 0x30));
    LbErrorLog(); /* LbErrorLog("train.cpp", line 210, g_log_buf) */
    person_fn_063b6d();
  }
  return;
}

/******************************************************************************
 * Function : train_get_where_we_re_0752c3 (Original VA: 0x752c3, Ghidra: FUN_000752c3)
 * Prototype: uint train_get_where_we_re_0752c3(void);
 * Address  : 0x752c3 (Size: 1801 bytes)
 * Module   : train.cpp [direct_file_string_xref]
 * OrigLine : train.cpp lines 322, 448
 * Purpose  : String 'Cannot get where we're going in the training room.'
 * Callers  : 1 -> train_take_money_am_supposed_074f40
 * Callees  : 10 -> anger_fn_010010, combmove_update_creature_control_01671a, combtool_fn_0189d4, instance_negative_instance_049bfc, person_fn_063b6d, train_update_creature_and_thing_0750f8, train_illegal_setup_07523a, train_update_slab_subtile_columns_0759cc ...
 ******************************************************************************/
uint train_get_where_we_re_0752c3(void)

{
  char *str_ptr;
  char ch;
  int thing;
  uint thing_ptr;
  int thing_ptr_2;
  int cctrl_ptr;
  uint thing_ptr_3;
  int thing_ptr_4;
  int extraout_ECX;
  undefined1 *arg_edx;
  int val;
  short *cctrl_ptr_2;
  undefined4 uStack_44;
  short local_40;
  short local_3e;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  uint local_1c;
  undefined1 *local_18;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  ch = *(char *)(cctrl_ptr + 0x9a);
  *(undefined4 *)(cctrl_ptr + 0x4a) = 0;
  if (ch == '\x01') {
    if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
      return 1;
    }
    *(char *)(cctrl_ptr + 0x9e) = *(char *)(cctrl_ptr + 0x9e) + -1;
    if (*(char *)(cctrl_ptr + 0x9e) < '\x01') {
      uStack_44 = 0x75317;
      thing_ptr = train_update_slab_subtile_columns_0759cc();
LAB_00075317:
      *(undefined1 *)(cctrl_ptr + 0x9e) = 0x32;
      return thing_ptr;
    }
    uStack_44 = 0;
    ch = move_fn_0b4ac4();
    thing_ptr = (uint)ch;
    if (thing_ptr != 1) {
joined_r0x00075726:
      if (thing_ptr != 0xffffffff) {
        return thing_ptr;
      }
      LbErrorLog(); /* LbErrorLog("train.cpp", line 322, "Cannot get where we're going in the training room.") */
      thing_ptr = person_fn_063b6d();
      return thing_ptr;
    }
    for (thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                           (((&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 3 + 1) * 0x100 +
                           (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] * 3 + 1) * 5 + 1) & 0x3fffff) >>
                 0xb; cctrl_ptr_2 = (short *)&uStack_44, thing_ptr_3 != 0;
        thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2)) {
      thing_ptr_2 = (&g_thing_ptrs)[thing_ptr_3];
      if (((*(char *)(thing_ptr_2 + 0x1f) == '\x01') && (*(char *)(thing_ptr_2 + 0x1a) == '\x1f')) && /* thing->class_id */
         (thing_ptr = CONCAT31((int3)((uint)thing_ptr_2 >> 8),*(char *)(thing_ptr_2 + 6)), /* thing->owner */
         *(char *)(thing_ptr_2 + 6) == *(char *)(thing + 6))) { /* thing->owner */
        *(undefined1 *)(cctrl_ptr + 0x9a) = 2;
        goto LAB_00075317;
      }
    }
  }
  else if (ch == '\x02') {
    local_28 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)];
    local_24 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)];
    local_2c = 0;
    for (thing_ptr_2 = 0; thing_ptr_2 < 8; thing_ptr_2 = thing_ptr_2 + 2) {
      val = (char)(&g_data_0018b67f)[thing_ptr_2] + local_24;
      local_34 = (int)*(char *)((int)&g_data_0018b67b + thing_ptr_2 + 3);
      thing_ptr_4 = local_28 + local_34;
      if ((&g_slabmap_base)[(val * 0x55 + thing_ptr_4) * 6] == '\x18') {
        local_30 = thing_ptr_4 * 3;
        local_38 = (uint)((&g_slabmap)
                          [((&g_data_0019033f)[thing_ptr_4 * 3] + (&g_data_0019033f)[val * 3] * 0x55) * 6] & 7
                         );
        if ((int)*(char *)(thing + 6) == local_38) { /* thing->owner */
          local_1c = (*(uint *)((int)&g_map_subtiles +
                               ((char)(&g_data_001917b0)[thing_ptr_2] + local_30 +
                               (val * 3 + (int)(char)(&g_data_001917b1)[thing_ptr_2]) * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb;
          while ((local_1c != 0 &&
                 ((((thing_ptr_4 = (&g_thing_ptrs)[local_1c], *(char *)(thing_ptr_4 + 0x1f) != '\x05' || /* thing->class_id */
                    (*(char *)(thing_ptr_4 + 7) != '!')) ||
                   (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_4 + 100)] + 0x9a) < 2)) || /* thing->ccontrol_idx */
                  (*(char *)(thing_ptr_4 + 6) != *(char *)(thing + 6)))))) { /* thing->owner */
            local_1c = (uint)*(ushort *)((&g_thing_ptrs)[local_1c] + 2);
          }
          if (local_1c == 0) {
            local_1c = (*(uint *)((int)&g_map_subtiles +
                                 ((*(char *)((int)&g_data_0018b67b + thing_ptr_2 + 3) + local_28) * 3 +
                                  ((char)(&g_data_0018b67f)[thing_ptr_2] + local_24) * 0x300 + 0x101) * 5 + 1
                                 ) & 0x3fffff) >> 0xb;
            while ((local_1c != 0 &&
                   (((thing_ptr_4 = (&g_thing_ptrs)[local_1c], *(char *)(thing_ptr_4 + 0x1f) != '\x01' || /* thing->class_id */
                     (*(char *)(thing_ptr_4 + 0x1a) != '\x1f')) ||
                    (*(char *)(thing_ptr_4 + 6) != *(char *)(thing + 6)))))) { /* thing->owner */
              local_1c = (uint)*(ushort *)((&g_thing_ptrs)[local_1c] + 2);
            }
          }
          if (local_1c == 0) {
            *(char *)(cctrl_ptr + 0x9c) =
                 *(char *)(&g_subtile_to_slab_lut + *(byte *)(thing + 0xe)) * '\x03' + '\x01';
            *(char *)(cctrl_ptr + 0x9d) =
                 *(char *)(&g_subtile_to_slab_lut + *(byte *)(thing + 0x10)) * '\x03' + '\x01';
            local_28 = (*(char *)((int)&g_data_0018b67b + local_2c * 2 + 3) + local_28) * 3 +
                       (int)(char)(&g_data_001917b0)[local_2c * 2];
            local_24 = ((char)(&g_data_0018b67f)[local_2c * 2] + local_24) * 3 +
                       (int)(char)(&g_data_001917b1)[local_2c * 2];
            uStack_44 = 0x7561e;
            train_illegal_setup_07523a();
            *(undefined1 *)(cctrl_ptr + 0x9a) = 3;
            break;
          }
        }
      }
      local_2c = local_2c + 1;
    }
    cctrl_ptr_2 = &local_40;
    if (*(byte *)(cctrl_ptr + 0x9a) != 2) {
      return (uint)*(byte *)(cctrl_ptr + 0x9a);
    }
  }
  else {
    if (ch == '\x03') {
      uStack_44 = 0;
      ch = move_fn_0b4ac4();
      thing_ptr = (uint)ch;
      if (thing_ptr == 1) {
        thing_ptr = (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe)) * 5;
        thing_ptr_3 = (*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3fffff) >> 0xb;
        do {
          thing_ptr_2 = 0;
          if (thing_ptr_3 == 0) {
LAB_0007570f:
            if (thing_ptr_2 != 0) {
              return thing_ptr;
            }
            *(undefined1 *)(cctrl_ptr + 0x9a) = 4;
            return thing_ptr;
          }
          thing_ptr = thing_ptr_3 * 4;
          if ((((thing != (&g_thing_ptrs)[thing_ptr_3]) &&
               (thing_ptr = (&g_thing_ptrs)[thing_ptr_3], *(char *)(thing_ptr + 0x1f) == '\x05')) && /* thing->class_id */
              (*(char *)(thing_ptr + 7) == '!')) &&
             ((1 < *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x9a) && /* thing->ccontrol_idx */
              (str_ptr = (char *)(thing_ptr + 6), thing_ptr = CONCAT31((int3)(thing_ptr >> 8),*str_ptr), /* thing->owner */
              *str_ptr == *(char *)(thing + 6))))) { /* thing->owner */
            thing_ptr = train_update_creature_and_thing_0750f8();
            thing_ptr_2 = extraout_ECX;
            goto LAB_0007570f;
          }
          thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2);
        } while( true );
      }
      goto joined_r0x00075726;
    }
    if (ch == '\x04') {
      local_40 = (ushort)*(byte *)(cctrl_ptr + 0x9c) * 0x100 + 0x80;
      local_3e = (ushort)*(byte *)(cctrl_ptr + 0x9d) * 0x100 + 0x80;
      uStack_44 = 0x75777;
      thing_ptr = anger_fn_010010();
      if (0x37 < (int)thing_ptr) {
        return thing_ptr;
      }
      *(undefined1 *)(cctrl_ptr + 0x9a) = 5;
      *(undefined1 *)(cctrl_ptr + 0x9b) = 0x4b;
      return thing_ptr;
    }
    if (ch == '\x06') {
      cctrl_ptr_2 = &local_40;
      if (((*(ushort *)(cctrl_ptr + 0x9f) != 0) &&
          (local_20 = (byte *)(&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x9f)], cctrl_ptr_2 = &local_40,
          *(int *)(local_20 + 9) == *(int *)(cctrl_ptr + 0xa1))) &&
         (cctrl_ptr_2 = &local_40, (*local_20 & 1) != 0)) {
        if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(local_20 + 100)] + 0x9f) ==
             *(short *)(thing + 0x1b)) && /* thing->index_or_angle */
           (local_38 = (&g_subtile_to_slab_lut)[(int)(uint)CONCAT11(local_20[0x10],local_20[0xe]) >> 8] *
                       0x55,
           &g_rooms +
           (uint)(byte)(&g_bss_002d33c8)
                       [((&g_subtile_to_slab_lut)[(uint)CONCAT11(local_20[0x10],local_20[0xe]) % 0x100] +
                        local_38) * 6] * 0x45 == arg_edx)) {
          uStack_44 = 0x7585b;
          local_18 = arg_edx;
          thing_ptr_2 = combtool_fn_0189d4();
          if (0x11c < thing_ptr_2) {
            uStack_44 = 0;
            thing_ptr = move_fn_0b4ac4();
            if (thing_ptr != 0xffffffff) {
              return thing_ptr;
            }
            LbErrorLog(); /* LbErrorLog("train.cpp", line 448, "CANNOT NAVIGATE TO TRAINING PARTNER") */
            thing_ptr = train_update_creature_and_thing_0750f8();
            *(undefined2 *)(cctrl_ptr + 0x9f) = 0;
            return thing_ptr;
          }
          if (thing_ptr_2 < 0x9c) {
            uStack_44 = 0x758cf;
            thing_ptr = combmove_update_creature_control_01671a();
            return thing_ptr;
          }
          uStack_44 = 0x758dd;
          thing_ptr = anger_fn_010010();
          if (0x37 < (int)thing_ptr) {
            return thing_ptr;
          }
          *(char *)(cctrl_ptr + 0x9b) = *(char *)(cctrl_ptr + 0x9b) + -1;
          thing_ptr = (uint)*(char *)(cctrl_ptr + 0x9b);
          if ((int)thing_ptr < 1) {
            if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
              uStack_44 = 0x75915;
              train_update_creature_and_thing_0750f8();
              *(undefined2 *)(cctrl_ptr + 0x9f) = 0;
            }
            else {
              *(undefined1 *)(cctrl_ptr + 0x9b) = 1;
            }
            cctrl_ptr = (uint)*(ushort *)(local_18 + 0x3f) *
                    (uint)(byte)(&g_bss_002e91a4)[(uint)*(byte *)(thing + 0x1a) * 0xe6] * 0x100;
            thing_ptr_2 = cctrl_ptr >> 0x1f;
            thing_ptr = (int)((cctrl_ptr + thing_ptr_2 * -0x100) - (uint)(thing_ptr_2 << 7 < 0)) >> 8;
            *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x24) = /* thing->ccontrol_idx */
                 *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x24) + thing_ptr; /* thing->ccontrol_idx */
            return thing_ptr;
          }
          ch = *(char *)(cctrl_ptr + 0xd2);
          goto joined_r0x000759a7;
        }
        *(undefined2 *)(cctrl_ptr + 0x9f) = 0;
        cctrl_ptr_2 = &local_40;
      }
    }
    else {
      *(char *)(cctrl_ptr + 0x9b) = *(char *)(cctrl_ptr + 0x9b) + -1;
      thing_ptr = (uint)*(char *)(cctrl_ptr + 0x9b);
      if (0 < (int)thing_ptr) {
        ch = *(char *)(cctrl_ptr + 0xd2);
joined_r0x000759a7:
        if (ch != '\0') {
          return thing_ptr;
        }
        if ((int)thing_ptr % 8 != 0) {
          return (int)thing_ptr / 8;
        }
        uStack_44 = 0;
        thing_ptr = instance_negative_instance_049bfc();
        return thing_ptr;
      }
      cctrl_ptr_2 = &local_40;
      if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
        *(undefined1 *)(cctrl_ptr + 0x9b) = 1;
        return thing_ptr;
      }
    }
  }
  *(undefined4 *)((int)cctrl_ptr_2 + -4) = 0x75644;
  thing_ptr = train_update_creature_and_thing_0750f8();
  return thing_ptr;
}

/******************************************************************************
 * Function : train_update_slab_subtile_columns_0759cc (Original VA: 0x759cc, Ghidra: FUN_000759cc)
 * Prototype: void train_update_slab_subtile_columns_0759cc(void);
 * Address  : 0x759cc (Size: 338 bytes)
 * Module   : train.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> train_get_where_we_re_0752c3
 * Callees  : 2 -> train_update_creature_and_thing_0750f8, train_illegal_setup_07523a
 ******************************************************************************/
void train_update_slab_subtile_columns_0759cc(void)

{
  ushort uval;
  int thing_ptr;
  uint thing_ptr_2;
  int arg_eax;
  uint thing_ptr_3;
  uint uval_2;
  int room_off;
  uint local_24;
  int local_20;
  
  room_off = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
                       (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55) * 6] * 0x45;
  local_24 = 0xffffffff;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  thing_ptr_3 = g_action_random_seed % (uint)*(ushort *)(&g_bss_002ddd56 + room_off);
  uval = *(ushort *)(&g_bss_002ddd52 + room_off);
  while ((uval_2 = (uint)uval, 0 < (int)thing_ptr_3 && (uval_2 != 0))) {
    thing_ptr_3 = thing_ptr_3 - 1;
    uval = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(ushort *)(&g_bss_002ddd56 + room_off);
      local_20 = local_20 + 1) {
    if (uval_2 == 0) {
      uval_2 = (uint)*(ushort *)(&g_bss_002ddd52 + room_off);
    }
    thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                      ((uval_2 % 0x55) * 3 + (uval_2 / 0x55) * 0x300 + 0x101) * 5 + 1) & 0x3fffff) >>
            0xb;
    while ((thing_ptr_2 = local_24, thing_ptr_3 != 0 &&
           (((thing_ptr = (&g_thing_ptrs)[thing_ptr_3], *(char *)(thing_ptr + 0x1f) != '\x01' || /* thing->class_id */
             (*(char *)(thing_ptr + 0x1a) != '\x1f')) ||
            (thing_ptr_2 = thing_ptr_3, *(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6)))))) { /* thing->owner */
      thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2);
    }
    local_24 = thing_ptr_2;
    uval_2 = (uint)*(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  if (local_24 == 0xffffffff) {
    train_update_creature_and_thing_0750f8();
  }
  else {
    train_illegal_setup_07523a();
  }
  return;
}

/******************************************************************************
 * Function : train_fn_075b1e (Original VA: 0x75b1e, Ghidra: FUN_00075b1e)
 * Prototype: undefined8 train_fn_075b1e(void);
 * Address  : 0x75b1e (Size: 42 bytes)
 * Module   : train.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module train.cpp procedure @ 0x075b1e
 * Callers  : 3 -> impset_update_creature_control_03df64, train_update_creature_control_074e70, train_take_money_am_supposed_074f40
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 train_fn_075b1e(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,(uint)((int)(uint)*(ushort *)
                                            (&g_bss_002e912c + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6)
                               <= (int)(&g_bss_002e1082)[*(char *)(arg_eax + 6) * 0x542]));
}

/******************************************************************************
 * Function : train_update_creature_control_075b48 (Original VA: 0x75b48, Ghidra: FUN_00075b48)
 * Prototype: longlong train_update_creature_control_075b48(void);
 * Address  : 0x75b48 (Size: 86 bytes)
 * Module   : train.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 6 -> evil_update_creature_control_02796f, impset_update_creature_control_03df64, moodneed_update_creature_control_052734, train_update_creature_control_074e70, train_take_money_am_supposed_074f40, room_update_creature_control_0cb33c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong train_update_creature_control_075b48(void)

{
  int thing;
  uint arg_edx;
  int val;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  if ((((&g_bss_002e91a4)[val] != '\0') &&
      ((int)(uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < /* thing->ccontrol_idx */
       (int)(&g_bss_002e0fd8)[*(char *)(thing + 6) * 0x542 + (uint)*(byte *)(thing + 0x1a)])) && /* thing->owner */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) < 9 || /* thing->ccontrol_idx */
      (*(short *)(&g_bss_002e915c + val) != 0)))) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

