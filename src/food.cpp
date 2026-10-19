/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: food.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 16
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : food_fn_0aa558 (Original VA: 0xaa558, Ghidra: FUN_000aa558)
 * Prototype: void food_fn_0aa558(void);
 * Address  : 0xaa558 (Size: 2168 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Purpose  : Module food.cpp procedure @ 0x0aa558
 * Callers  : 0 -> 
 * Callees  : 1 -> engine3_scale_coord_by_camera_zoom
 ******************************************************************************/
void food_fn_0aa558(void)

{
  undefined4 uval;
  int val;
  undefined4 uval_2;
  int arg_eax;
  int val_2;
  int val_3;
  int val_4;
  uint ui_scale;
  uint uval_3;
  int val_5;
  undefined4 *poly_write_ptr;
  int val_6;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc;
  undefined1 local_6c;
  undefined1 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_54;
  undefined1 local_4c;
  int local_38;
  int local_34;
  int local_28;
  byte local_20;
  byte local_1c;
  
  if (g_engine3_bss_00387e02._2_1_ == '\0') {
    return;
  }
  local_1c = (byte)((int)(*(int *)(arg_eax + 7) + 0x100U & 0x7ff) >> 9);
  engine3_scale_coord_by_camera_zoom(local_c0,g_engine3_bss_00387e07,0x500);
  uval_3 = (uint)local_1c;
  val_6 = (5 - g_engine3_bss_00387e17) * ((int)(uval_3 * 0x80) >> 8);
  val = uval_3 * 3;
  if (local_20 < 2) {
    val_3 = local_cc;
    if (local_20 != 1) goto LAB_000aa666;
  }
  else {
    val_3 = local_cc + uval_3 * -3;
    if (2 < local_20) {
      if (local_20 != 3) {
        val_3 = local_cc;
      }
      goto LAB_000aa666;
    }
  }
  local_cc = val_3;
  val_3 = local_cc;
  local_c8 = local_c8 + uval_3 * -3;
  local_c4 = local_c4 + val;
LAB_000aa666:
  local_cc = val_3;
  val_3 = local_c4 - local_1c / 2;
  val_4 = 0;
  poly_write_ptr = g_render_poly_write_ptr;
  do {
    uval_2 = g_engine3_bss_00387e02;
    if (val_3 < 0) {
      val_2 = 0;
    }
    else {
      val_2 = val_3;
      if (0x2be < val_3) {
        val_2 = 0x2be;
      }
    }
    *poly_write_ptr = (&g_key_to_ascii_table)[val_2];
    ui_scale = (uint)g_units_per_pixel;
    *(undefined1 *)(poly_write_ptr + 1) = 0xd;
    (&g_key_to_ascii_table)[val_2] = poly_write_ptr;
    poly_write_ptr[2] = (int)((uint)local_1c * val_4 + local_cc) / (int)ui_scale;
    poly_write_ptr[3] = local_c8 / (int)ui_scale;
    poly_write_ptr[4] = (int)((val_4 + 1) * (uint)local_1c + local_cc) / (int)ui_scale;
    poly_write_ptr[5] = local_c8 / (int)ui_scale;
    local_6c = (undefined1)((uint)uval_2 >> 0x18);
    *(undefined1 *)(poly_write_ptr + 6) = local_6c;
    uval_2 = g_engine3_bss_00387e02;
    val_2 = val_3 + uval_3 * -3;
    if (val_2 < 0) {
      val_2 = 0;
    }
    else if (0x2be < val_2) {
      val_2 = 0x2be;
    }
    poly_write_ptr[7] = (&g_key_to_ascii_table)[val_2];
    ui_scale = (uint)g_units_per_pixel;
    *(undefined1 *)(poly_write_ptr + 8) = 0xd;
    (&g_key_to_ascii_table)[val_2] = poly_write_ptr + 7;
    poly_write_ptr[9] = (int)((uint)local_1c * val_4 + local_cc) / (int)ui_scale;
    poly_write_ptr[10] = (local_c8 + val) / (int)ui_scale;
    poly_write_ptr[0xb] = (int)(local_cc + (val_4 + 1) * (uint)local_1c) / (int)ui_scale;
    poly_write_ptr[0xc] = (local_c8 + val) / (int)ui_scale;
    *(char *)(poly_write_ptr + 0xd) = (char)((uint)uval_2 >> 0x18);
    uval_2 = g_engine3_bss_00387e02;
    if (val_3 < 0) {
      val_2 = 0;
    }
    else {
      val_2 = val_3;
      if (0x2be < val_3) {
        val_2 = 0x2be;
      }
    }
    poly_write_ptr[0xe] = (&g_key_to_ascii_table)[val_2];
    ui_scale = (uint)g_units_per_pixel;
    *(undefined1 *)(poly_write_ptr + 0xf) = 0xd;
    (&g_key_to_ascii_table)[val_2] = poly_write_ptr + 0xe;
    poly_write_ptr[0x10] = (int)(local_cc + (uint)local_1c * val_4) / (int)ui_scale;
    poly_write_ptr[0x11] = (local_c8 + val_6) / (int)ui_scale;
    poly_write_ptr[0x12] = (int)(local_cc + (val_4 + 1) * (uint)local_1c) / (int)ui_scale;
    poly_write_ptr[0x13] = (local_c8 + val_6) / (int)ui_scale;
    local_68 = (undefined1)((uint)uval_2 >> 0x18);
    *(undefined1 *)(poly_write_ptr + 0x14) = local_68;
    uval_2 = g_engine3_bss_00387e02;
    val_2 = local_c8 + val + val_6;
    local_28 = val_3 + uval_3 * -3;
    if (local_28 < 0) {
      local_28 = 0;
    }
    else if (0x2be < local_28) {
      local_28 = 0x2be;
    }
    uval = (&g_key_to_ascii_table)[local_28];
    *(undefined1 *)(poly_write_ptr + 0x16) = 0xd;
    poly_write_ptr[0x15] = uval;
    (&g_key_to_ascii_table)[local_28] = poly_write_ptr + 0x15;
    ui_scale = (uint)g_units_per_pixel;
    poly_write_ptr[0x17] = (int)((uint)local_1c * val_4 + local_cc) / (int)ui_scale;
    poly_write_ptr[0x18] = val_2 / (int)ui_scale;
    poly_write_ptr[0x19] = (int)(local_cc + (val_4 + 1) * (uint)local_1c) / (int)ui_scale;
    g_render_poly_write_ptr = poly_write_ptr + 0x1c;
    poly_write_ptr[0x1a] = val_2 / (int)ui_scale;
    local_4c = (undefined1)((uint)uval_2 >> 0x18);
    val_4 = val_4 + 1;
    *(undefined1 *)(poly_write_ptr + 0x1b) = local_4c;
    poly_write_ptr = g_render_poly_write_ptr;
  } while (val_4 < 3);
  val_4 = 0;
  do {
    uval_2 = g_engine3_bss_00387e02;
    val_2 = val_4 * (uint)local_1c;
    val_5 = val_3 - val_2;
    if (val_5 < 0) {
      val_5 = 0;
    }
    else if (0x2be < val_5) {
      val_5 = 0x2be;
    }
    uval = (&g_key_to_ascii_table)[val_5];
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
    *g_render_poly_write_ptr = uval;
    (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
    uval_3 = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[2] = local_cc / (int)uval_3;
    g_render_poly_write_ptr[3] = (local_c8 + val_2) / (int)uval_3;
    g_render_poly_write_ptr[4] = local_cc / (int)uval_3;
    g_render_poly_write_ptr[5] = (int)(local_c8 + (uint)local_1c * (val_4 + 1)) / (int)uval_3;
    local_60 = (undefined1)((uint)uval_2 >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 6) = local_60;
    uval_2 = g_engine3_bss_00387e02;
    val_2 = val_4 * (uint)local_1c;
    local_38 = val_3 - val_2;
    if (local_38 < 0) {
      local_38 = 0;
    }
    else if (0x2be < local_38) {
      local_38 = 0x2be;
    }
    g_render_poly_write_ptr[7] = (&g_key_to_ascii_table)[local_38];
    uval_3 = (uint)g_units_per_pixel;
    *(undefined1 *)(g_render_poly_write_ptr + 8) = 0xd;
    (&g_key_to_ascii_table)[local_38] = g_render_poly_write_ptr + 7;
    g_render_poly_write_ptr[9] = (local_cc + val) / (int)uval_3;
    g_render_poly_write_ptr[10] = (local_c8 + val_2) / (int)uval_3;
    g_render_poly_write_ptr[0xb] = (local_cc + val) / (int)uval_3;
    g_render_poly_write_ptr[0xc] = (int)(local_c8 + (uint)local_1c * (val_4 + 1)) / (int)uval_3;
    local_bc = (undefined1)((uint)uval_2 >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 0xd) = local_bc;
    uval_2 = g_engine3_bss_00387e02;
    val_2 = val_4 * (uint)local_1c;
    val_5 = val_3 - val_2;
    if (val_5 < 0) {
      val_5 = 0;
    }
    else if (0x2be < val_5) {
      val_5 = 0x2be;
    }
    uval = (&g_key_to_ascii_table)[val_5];
    *(undefined1 *)(g_render_poly_write_ptr + 0xf) = 0xd;
    g_render_poly_write_ptr[0xe] = uval;
    (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr + 0xe;
    uval_3 = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[0x10] = local_cc / (int)uval_3;
    g_render_poly_write_ptr[0x11] = (val_2 + local_c8 + val_6) / (int)uval_3;
    g_render_poly_write_ptr[0x12] = local_cc / (int)uval_3;
    g_render_poly_write_ptr[0x13] = (int)((uint)local_1c * (val_4 + 1) + local_c8 + val_6) / (int)uval_3;
    local_64 = (undefined1)((uint)uval_2 >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 0x14) = local_64;
    uval_2 = g_engine3_bss_00387e02;
    val_5 = val_4 * (uint)local_1c;
    local_34 = val_3 - val_5;
    val_2 = val_4 + 1;
    if (local_34 < 0) {
      local_34 = 0;
    }
    else if (0x2be < local_34) {
      local_34 = 0x2be;
    }
    uval = (&g_key_to_ascii_table)[local_34];
    *(undefined1 *)(g_render_poly_write_ptr + 0x16) = 0xd;
    g_render_poly_write_ptr[0x15] = uval;
    (&g_key_to_ascii_table)[local_34] = g_render_poly_write_ptr + 0x15;
    uval_3 = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[0x17] = (local_cc + val) / (int)uval_3;
    g_render_poly_write_ptr[0x18] = (local_c8 + val_5 + val_6) / (int)uval_3;
    g_render_poly_write_ptr[0x19] = (local_cc + val) / (int)uval_3;
    val_4 = val_4 + 1;
    g_render_poly_write_ptr[0x1a] = (int)((uint)local_1c * val_2 + local_c8 + val_6) / (int)uval_3;
    local_54 = (undefined1)((uint)uval_2 >> 0x18);
    poly_write_ptr = g_render_poly_write_ptr + 0x1b;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1c;
    *(undefined1 *)poly_write_ptr = local_54;
  } while (val_4 < 3);
  return;
}

/******************************************************************************
 * Function : food_trying_remove_some_food_0aadd0 (Original VA: 0xaadd0, Ghidra: FUN_000aadd0)
 * Prototype: void food_trying_remove_some_food_0aadd0(void);
 * Address  : 0xaadd0 (Size: 251 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp lines 32
 * Purpose  : String 'TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!'
 * Callers  : 2 -> food_get_near_food_0aafd4, food_update_creature_and_thing_0ab4bc
 * Callees  : 6 -> anger_fn_010434, instance_negative_instance_049bfc, person_update_creature_control_064ae7, sound_fn_06e538, structs_update_creature_control_072af4, LbErrorLog
 ******************************************************************************/
void food_trying_remove_some_food_0aadd0(void)

{
  uint unsynced_seed;
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
  sound_fn_06e538(3,0,2,0x100);
  person_update_creature_control_064ae7();
  instance_negative_instance_049bfc(0);
  *(undefined1 *)(arg_eax + 8) = 0x12;
  anger_fn_010434();
  if (*(char *)(arg_edx + 0x1f) == '\x05') {
    *(undefined2 *)(arg_edx + 0x5e) = 0xffff;
  }
  else {
    if (*(short *)(arg_ebx + 0x10) == 0) {
      LbErrorLog(); /* LbErrorLog("food.cpp", line 32, "TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!") */
    }
    else {
      *(short *)(arg_ebx + 0x10) = *(short *)(arg_ebx + 0x10) + -1;
    }
    structs_update_creature_control_072af4();
  }
  *(int *)(&g_bss_002e181c + (*(int *)(arg_eax + 3) >> 0x18) * 0x1508) =
       *(int *)(&g_bss_002e181c + (*(int *)(arg_eax + 3) >> 0x18) * 0x1508) + 1;
  return;
}

/******************************************************************************
 * Function : food_fn_0aaecc (Original VA: 0xaaecc, Ghidra: FUN_000aaecc)
 * Prototype: longlong food_fn_0aaecc(void);
 * Address  : 0xaaecc (Size: 100 bytes)
 * Module   : food.cpp [contiguous_same_unit_span]
 * Purpose  : Module food.cpp procedure @ 0x0aaecc
 * Callers  : 3 -> shot_attempt_kill_non_handled_06d114, food_update_player_dungeon_0abe58, object_picking_up_object_0c599c
 * Callees  : 1 -> room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong food_fn_0aaecc(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  int val_2;
  undefined8 uval;
  
  if ((*(int *)(arg_eax + 3) >> 0x18 != (uint)g_neutral_player_number) &&
     (*(int *)(arg_eax + 0x11) >> 0x10 == -1)) {
    uval = room_update_slab_subtile_columns_0d0f50();
    val_2 = (int)((ulonglong)uval >> 0x20);
    val = (int)uval;
    if ((val != 0) &&
       ((*(short *)(val + 10) == 0xd && (*(char *)(val + 3) == *(char *)(val_2 + 6))))) {
      if (*(short *)(val + 0x10) != 0) {
        *(short *)(val + 0x10) = *(short *)(val + 0x10) + -1;
      }
      *(undefined2 *)(val_2 + 0x13) = g_bss_002eb9f8;
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : food_null_room_structure_passed_0aaf30 (Original VA: 0xaaf30, Ghidra: FUN_000aaf30)
 * Prototype: undefined4 food_null_room_structure_passed_0aaf30(void);
 * Address  : 0xaaf30 (Size: 113 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp lines 100
 * Purpose  : String 'NULL ROOM STRUCTURE PASSED'
 * Callers  : 1 -> food_process_dungeon_room_0ab8dc
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 food_null_room_structure_passed_0aaf30(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((*(int *)(arg_eax + 3) >> 0x18 != (uint)g_neutral_player_number) &&
     (*(int *)(arg_eax + 0x11) >> 0x10 != -1)) {
    if (arg_edx == 0) {
      LbErrorLog(); /* LbErrorLog("food.cpp", line 100, "NULL ROOM STRUCTURE PASSED") */
    }
    else if (((*(short *)(arg_edx + 10) == 0xd) && (*(char *)(arg_edx + 3) == *(char *)(arg_eax + 6)))
            && (*(ushort *)(arg_edx + 0x10) < *(ushort *)(arg_edx + 0xe))) {
      *(ushort *)(arg_edx + 0x10) = *(ushort *)(arg_edx + 0x10) + 1;
      *(undefined2 *)(arg_eax + 0x13) = 0xffff;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : food_update_creature_control_0aafa4 (Original VA: 0xaafa4, Ghidra: FUN_000aafa4)
 * Prototype: void food_update_creature_control_0aafa4(void);
 * Address  : 0xaafa4 (Size: 46 bytes)
 * Module   : food.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> prison_update_creature_control_065d3e
 * Callees  : 0 -> 
 ******************************************************************************/
void food_update_creature_control_0aafa4(void)

{
  int thing;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xab) = /* thing->ccontrol_idx */
         *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xab) | 1; /* thing->ccontrol_idx */
    return;
  }
  *(undefined1 *)(thing + 0x15) = 0xff;
  *(undefined1 *)(thing + 0x16) = 0x7f;
  return;
}

/******************************************************************************
 * Function : food_get_near_food_0aafd4 (Original VA: 0xaafd4, Ghidra: FUN_000aafd4)
 * Prototype: void food_get_near_food_0aafd4(void);
 * Address  : 0xaafd4 (Size: 686 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp lines 150, 168
 * Purpose  : String 'CANNOT GET NEAR TO FOOD'
 * Callers  : 1 -> food_update_creature_control_0ab594
 * Callees  : 10 -> anger_fn_010434, person_fn_063b6d, creature_update_player_view_state_085954, food_trying_remove_some_food_0aadd0, move_update_creature_control_0b3c00, room_process_dungeon_room_0ca474, room_fn_0cc4a0, room_fn_0ce0e4 ...
 ******************************************************************************/
void food_get_near_food_0aafd4(void)

{
  ushort uval;
  short short_val;
  int thing;
  int val;
  int extraout_ECX;
  int arg_edx;
  uint thing_ptr;
  int val_2;
  uint thing_ptr_2;
  int local_28;
  uint local_24;
  
  thing_ptr_2 = 0;
  local_28 = 0;
  uval = *(ushort *)(arg_edx + 0x37);
  for (; local_24 = (uint)uval, local_28 < (int)(uint)*(ushort *)(arg_edx + 0x3b);
      local_28 = local_28 + 1) {
    val_2 = 0;
    do {
      thing_ptr = (&g_thing_ptrs)
              [(*(uint *)((int)&g_map_subtiles +
                         ((val_2 / 3 + (local_24 / 0x55) * 3) * 0x100 +
                         (local_24 % 0x55) * 3 + val_2 % 3) * 5 + 1) & 0x3fffff) >> 0xb];
      if (g_thing_ptrs < thing_ptr) {
        do {
          if ((((*(char *)(thing_ptr + 0x1f) == '\x01') && (*(char *)(thing_ptr + 0x1a) == '\n')) || /* thing->class_id */
              ((*(char *)(thing_ptr + 0x1f) == '\x05' && /* thing->class_id */
               (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) != 0 && /* thing->ccontrol_idx */
                (0 < *(int *)(thing_ptr + 0x5c) >> 0x10)))))) &&
             (val = update_fn_0dc440(), val < extraout_ECX)) {
            thing_ptr_2 = thing_ptr;
          }
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
        } while (g_thing_ptrs < thing_ptr);
      }
      val_2 = val_2 + 1;
    } while (val_2 < 9);
    uval = *(ushort *)(&g_bss_002d33c6 + local_24 * 6);
  }
  if ((thing_ptr_2 == 0) || (val_2 = creature_update_player_view_state_085954(), val_2 != 0)) {
    val_2 = room_process_dungeon_room_0ca474();
    if (val_2 == 0) {
      anger_fn_010434();
      val_2 = room_fn_0ce0e4();
      if (val_2 != 0) {
        g_data_00000009 = 0x13;
        return;
      }
    }
    else {
      val_2 = room_fn_0cc4a0();
      if (val_2 != 0) {
        g_data_00000009 = 0x13;
        return;
      }
      LbErrorLog(); /* LbErrorLog("food.cpp", line 150, "CANNOT GET NEAR TO FOOD") */
    }
    person_fn_063b6d();
  }
  else {
    short_val = move_update_creature_control_0b3c00();
    if (short_val == 0) {
      LbErrorLog(); /* LbErrorLog("food.cpp", line 168, "Attempting to move to garden we cannot navigate to - this should not be possible") */
      food_trying_remove_some_food_0aadd0();
      return;
    }
    if (*(char *)(thing_ptr_2 + 0x1f) == '\x05') { /* thing->class_id */
      *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0xab) = /* thing->ccontrol_idx */
           *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0xab) | 1; /* thing->ccontrol_idx */
    }
    else {
      *(undefined1 *)(thing_ptr_2 + 0x15) = 0xff;
      *(undefined1 *)(thing_ptr_2 + 0x16) = 0x7f;
    }
    *(undefined1 *)(thing + 8) = 0x8a; /* thing->active_state */
    *(uint *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a) = (uint)*(ushort *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle, thing->ccontrol_idx */
  }
  return;
}

/******************************************************************************
 * Function : food_update_creature_control_0ab284 (Original VA: 0xab284, Ghidra: FUN_000ab284)
 * Prototype: ulonglong food_update_creature_control_0ab284(void);
 * Address  : 0xab284 (Size: 67 bytes)
 * Module   : food.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> moodneed_this_shouldn_happen_052362
 * Callees  : 1 -> person_fn_064c4d
 ******************************************************************************/
ulonglong food_update_creature_control_0ab284(void)

{
  byte cctrl_ptr;
  int thing;
  undefined4 arg_edx;
  
  if (((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x21) == 0) && /* thing->ccontrol_idx */
      (cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad), (cctrl_ptr & 8) == 0)) && /* thing->ccontrol_idx */
     ((cctrl_ptr & 2) == 0)) {
    thing = person_fn_064c4d();
    if ((char)thing != '\0') {
      return CONCAT44(arg_edx,CONCAT31((int3)((uint)thing >> 8),1));
    }
  }
  return CONCAT44(arg_edx,thing) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : food_attempting_move_garden_we_0ab2c8 (Original VA: 0xab2c8, Ghidra: FUN_000ab2c8)
 * Prototype: longlong food_attempting_move_garden_we_0ab2c8(void);
 * Address  : 0xab2c8 (Size: 498 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp lines 249
 * Purpose  : String 'Attempting to move to garden we cannot navigate to - this sh'
 * Callers  : 0 -> 
 * Callees  : 8 -> anger_fn_010434, event_fn_0274ad, moodneed_fn_051374, person_fn_063b6d, room_process_dungeon_room_0c9988, room_process_dungeon_room_0ca474, room_fn_0cc4a0, LbErrorLog
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

longlong food_attempting_move_garden_we_0ab2c8(void)

{
  int thing;
  uint uval;
  undefined1 *word_ptr;
  int val;
  undefined4 uval_2;
  undefined4 *word_ptr_2;
  undefined4 auStack_20 [3];
  
  word_ptr_2 = (undefined4 *)&stack0xffffffec;
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x41) != '\0') { /* thing->ccontrol_idx */
    uval = *(int *)(thing + 3) >> 0x18;
    if (*(short *)(&g_bss_002e05ae + uval * 0x1508) == 0) {
      if (uval == (byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
        auStack_20[2] = 0xab471;
        moodneed_fn_051374();
      }
      word_ptr_2 = auStack_20 + 2;
      auStack_20[2] = 0;
      auStack_20[1] = 0xab486;
      event_fn_0274ad();
      auStack_20[1] = 0xab4ab;
      anger_fn_010434();
    }
    else {
      auStack_20[2] = 1;
      auStack_20[1] = 0xab312;
      word_ptr = (undefined1 *)room_process_dungeon_room_0ca474();
      word_ptr_2 = auStack_20 + 2;
      if (word_ptr == (undefined1 *)0x0) {
        auStack_20[1] = 0xab330;
        word_ptr = (undefined1 *)room_process_dungeon_room_0c9988();
        if (&g_rooms < word_ptr) {
          if (*(int *)(thing + 3) >> 0x18 ==
              (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
            auStack_20[1] = 0xab3a3;
            moodneed_fn_051374();
          }
          word_ptr_2 = auStack_20 + 1;
          auStack_20[1] = 0;
          event_fn_0274ad();
        }
        else {
          word_ptr_2 = auStack_20 + 2;
          if (*(int *)(thing + 3) >> 0x18 ==
              (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
            auStack_20[1] = 0xab36d;
            moodneed_fn_051374();
            word_ptr_2 = auStack_20 + 2;
          }
        }
      }
      if (word_ptr == (undefined1 *)0x0) {
        word_ptr_2[0xffffffff] = 0xab42f;
        anger_fn_010434();
        word_ptr_2[0xffffffff] = 0xab436;
        person_fn_063b6d();
        return (ulonglong)(uint)word_ptr_2[2] << 0x20;
      }
      word_ptr_2[0xffffffff] = 0xab3c7;
      val = room_fn_0cc4a0();
      if (val != 0) {
        *(undefined1 *)(thing + 8) = 0x13; /* thing->active_state */
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
             *(undefined2 *)(word_ptr + 1);
        uval_2 = 1;
        goto LAB_000ab4b4;
      }
      word_ptr_2[0xffffffff] = 0xab405;
      LbErrorLog(); /* LbErrorLog("food.cpp", line 249, "Attempting to move to garden we cannot navigate to - this should not be possible") */
    }
  }
  word_ptr_2[0xffffffff] = 0xab4b2;
  person_fn_063b6d();
  uval_2 = 0;
LAB_000ab4b4:
  return CONCAT44(*(undefined4 *)((int)word_ptr_2 + 8),uval_2);
}

/******************************************************************************
 * Function : food_update_creature_and_thing_0ab4bc (Original VA: 0xab4bc, Ghidra: FUN_000ab4bc)
 * Prototype: longlong food_update_creature_and_thing_0ab4bc(void);
 * Address  : 0xab4bc (Size: 215 bytes)
 * Module   : food.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> person_fn_063b6d, creature_update_player_view_state_085954, food_trying_remove_some_food_0aadd0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong food_update_creature_and_thing_0ab4bc(void)

{
  int thing;
  int val;
  int extraout_ECX;
  uint arg_edx;
  byte *thing_ptr;
  undefined8 cctrl_ptr;
  
  if (g_thing_ptrs < (&g_thing_ptrs)[*(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a)]) { /* thing->ccontrol_idx */
    val = room_update_slab_subtile_columns_0d0f50();
    if ((val != 0) && (*(short *)(val + 10) == 0xd)) {
      cctrl_ptr = creature_update_player_view_state_085954();
      thing_ptr = (byte *)((ulonglong)cctrl_ptr >> 0x20);
      if (((int)cctrl_ptr == 0) &&
         ((((thing_ptr[0x1f] == 1 && (thing_ptr[0x1a] == 10)) ||
           ((thing_ptr[0x1f] == 5 &&
            ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) != 0)))) && /* thing->ccontrol_idx */
          ((((*thing_ptr & 0x10) == 0 && ((thing_ptr[1] & 2) == 0)) && ((*thing_ptr & 1) != 0)))))) {
        food_trying_remove_some_food_0aadd0();
        *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x9a) = 0;
        return CONCAT44(arg_edx,1);
      }
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : food_update_creature_control_0ab594 (Original VA: 0xab594, Ghidra: FUN_000ab594)
 * Prototype: longlong food_update_creature_control_0ab594(void);
 * Address  : 0xab594 (Size: 85 bytes)
 * Module   : food.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> person_fn_063b6d, food_get_near_food_0aafd4, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong food_update_creature_control_0ab594(void)

{
  int thing;
  int val;
  uint arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 0xd)) &&
     (*(char *)(val + 3) == *(char *)(thing + 6))) { /* thing->owner */
    food_get_near_food_0aafd4();
    return CONCAT44(arg_edx,1);
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : food_update_player_dungeon_0ab60c (Original VA: 0xab60c, Ghidra: FUN_000ab60c)
 * Prototype: undefined8 food_update_player_dungeon_0ab60c(void);
 * Address  : 0xab60c (Size: 612 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 3 -> inits_allocate_light_object_043f07, sound_fn_06e538, structs_update_creature_control_072af4
 ******************************************************************************/
undefined8 food_update_player_dungeon_0ab60c(void)

{
  undefined4 uval;
  ulonglong rand_seed;
  int arg_eax;
  int thing_ptr;
  uint rand_seed_2;
  undefined4 arg_edx;
  undefined4 uval_2;
  undefined4 uStack_1c;
  
  uval_2 = 0;
  if (*(int *)(arg_eax + 0x11) >> 0x10 < 1) {
    uval = *(undefined4 *)(arg_eax + 0xd);
    uStack_1c = CONCAT22(uStack_1c._2_2_,*(undefined2 *)(arg_eax + 0x11));
    switch(*(undefined2 *)(arg_eax + 0x44)) {
    case 0x37d:
    case 0x381:
      uval_2 = 0xffffffff;
      structs_update_creature_control_072af4(uval);
      thing_ptr = inits_allocate_light_object_043f07();
      if (thing_ptr != 0) {
        *(short *)(thing_ptr + 0x13) = /* thing->anim_sprite */
             (short)((int)((uint)*(byte *)(thing_ptr + 0x49) << 8) / (*(int *)(thing_ptr + 0x3c) >> 0x10)) +
             -1;
        return CONCAT44(arg_edx,0xffffffff);
      }
      break;
    case 0x37e:
    case 0x382:
      uval_2 = 0xffffffff;
      structs_update_creature_control_072af4(uval);
      thing_ptr = inits_allocate_light_object_043f07();
      if (thing_ptr != 0) {
        *(short *)(thing_ptr + 0x13) = /* thing->anim_sprite */
             ((short)((int)((uint)*(byte *)(thing_ptr + 0x49) << 8) / (*(int *)(thing_ptr + 0x3c) >> 0x10))
             + -1) * 3;
        return CONCAT44(arg_edx,0xffffffff);
      }
      break;
    case 0x37f:
    case 899:
      uval_2 = 0xffffffff;
      structs_update_creature_control_072af4(uval);
      thing_ptr = inits_allocate_light_object_043f07();
      if (thing_ptr != 0) {
        *(short *)(thing_ptr + 0x13) = /* thing->anim_sprite */
             (short)((int)((uint)*(byte *)(thing_ptr + 0x49) << 8) / (*(int *)(thing_ptr + 0x3c) >> 0x10)) +
             -1;
        return CONCAT44(arg_edx,0xffffffff);
      }
      break;
    case 0x380:
    case 900:
      uval_2 = 0xffffffff;
      structs_update_creature_control_072af4(uval);
      thing_ptr = inits_allocate_light_object_043f07();
      if (thing_ptr != 0) {
        rand_seed_2 = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = rand_seed_2 >> 0xd | rand_seed_2 * 0x80000;
        *(short *)(thing_ptr + 0x52) = (short)((ulonglong)g_action_random_seed % 0x7ff); /* thing->health */
        rand_seed_2 = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = rand_seed_2 >> 0xd | rand_seed_2 * 0x80000;
        rand_seed = (ulonglong)g_action_random_seed;
        *(undefined1 *)(thing_ptr + 0x16) = 0;
        *(char *)(thing_ptr + 0x15) = (char)(rand_seed % 0x6ff);
        rand_seed_2 = g_unsynced_random_seed * 0x24a1 + 0x24df;
        g_unsynced_random_seed = rand_seed_2 >> 0xd | rand_seed_2 * 0x80000;
        sound_fn_06e538(3,0,1,0x100);
        rand_seed_2 = *(int *)(thing_ptr + 3) >> 0x18;
        if (rand_seed_2 != g_neutral_player_number) {
          *(int *)(&g_bss_002e1818 + rand_seed_2 * 0x1508) = *(int *)(&g_bss_002e1818 + rand_seed_2 * 0x1508) + 1;
        }
        *(undefined2 *)(thing_ptr + 0x13) = 0xffff; /* thing->anim_sprite */
        return CONCAT44(uStack_1c,0xffffffff);
      }
    }
  }
  else {
    uval_2 = 1;
    *(short *)(arg_eax + 0x13) = *(short *)(arg_eax + 0x13) + -1;
  }
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : food_fn_0ab870 (Original VA: 0xab870, Ghidra: FUN_000ab870)
 * Prototype: void food_fn_0ab870(void);
 * Address  : 0xab870 (Size: 106 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Purpose  : Module food.cpp procedure @ 0x0ab870
 * Callers  : 0 -> 
 * Callees  : 2 -> anger_fn_010c5f, anger_fn_010c85
 ******************************************************************************/
void food_fn_0ab870(void)

{
  short short_val;
  int val;
  int val_2;
  ushort *extraout_ECX;
  short arg_bx;
  
  val = anger_fn_010c5f();
  short_val = anger_fn_010c85();
  val_2 = (int)arg_bx;
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (val < val_2) {
    val_2 = val;
  }
  *extraout_ECX = (short)val_2 * short_val + *extraout_ECX & 0x7ff;
  anger_fn_010c5f();
  return;
}

/******************************************************************************
 * Function : food_process_dungeon_room_0ab8dc (Original VA: 0xab8dc, Ghidra: FUN_000ab8dc)
 * Prototype: undefined8 food_process_dungeon_room_0ab8dc(void);
 * Address  : 0xab8dc (Size: 1353 bytes)
 * Module   : food.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 15 -> anger_fn_010c1a, anger_fn_010c5f, anger_fn_010c85, anger_fn_010cd7, effect_allocate_light_effect_024998, sound_fn_06e538, structs_update_creature_control_072af4, ceiling_process_thing_entity_07d100 ...
 ******************************************************************************/
undefined8 food_process_dungeon_room_0ab8dc(void)

{
  ulonglong rand_seed;
  byte rand_seed_2;
  undefined2 uval;
  short short_val;
  int camera;
  undefined4 uval_2;
  undefined1 *word_ptr;
  int thing_ptr;
  uint thing_ptr_2;
  uint unsynced_seed;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  undefined4 *word_ptr_2;
  ushort *word_ptr_3;
  int val_2;
  undefined8 uval_3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  short local_3c;
  short sStack_3a;
  undefined2 uStack_38;
  ushort *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  char local_1c;
  
  local_1c = '\0';
  local_3c = (short)*(undefined4 *)(camera + 0xd);
  sStack_3a = (short)((uint)*(undefined4 *)(camera + 0xd) >> 0x10);
  uStack_38 = *(undefined2 *)(camera + 0x11);
  val_2 = 0;
  if (*(char *)(camera + 0x17) != '\0') { /* camera->zoom */
    uStack_48 = 0xab90b;
    food_update_player_dungeon_0abe58();
    uval_2 = 0xffffffff;
    goto LAB_000abe1c;
  }
  uStack_48 = 0xab91a;
  local_24 = camera;
  local_30 = creature_update_player_view_state_085954();
  if ((local_30 != 0) && (*(char *)(local_24 + 0x16) != '\0')) {
    *(char *)(local_24 + 0x16) = *(char *)(local_24 + 0x16) + -1;
    return CONCAT44(arg_edx,1);
  }
  uStack_48 = 0xab94e;
  uval_3 = room_update_slab_subtile_columns_0d0f50();
  word_ptr = (undefined1 *)uval_3;
  if (((int)((ulonglong)uval_3 >> 0x20) == 0) && (-1 < *(int *)(local_24 + 0x11) >> 0x10)) {
    if (&g_rooms < word_ptr) {
      uStack_48 = 0xab97a;
      thing_ptr = food_null_room_structure_passed_0aaf30();
      if (thing_ptr != 0) goto LAB_000ab9ee;
    }
    *(short *)(local_24 + 0x13) = *(short *)(local_24 + 0x13) + -1;
    if (*(int *)(local_24 + 0x11) >> 0x10 < 1) {
      val_2 = (*(int *)(local_24 + 3) >> 0x18) * 0x1508;
      *(int *)(&g_bss_002e1820 + val_2) = *(int *)(&g_bss_002e1820 + val_2) + 1;
      uStack_48 = 0xab9c2;
      effect_allocate_light_effect_024998();
      uStack_48 = 0xab9d6;
      effect_allocate_light_effect_024998();
      uStack_48 = 0xab9e0;
      structs_update_creature_control_072af4();
      return CONCAT44(arg_edx,0xffffffff);
    }
  }
LAB_000ab9ee:
  if (((&g_rooms < word_ptr) && (*(short *)(word_ptr + 10) == 0xd)) &&
     (*(int *)(local_24 + 0x11) >> 0x10 < 0)) {
    if (*(int *)(word_ptr + 0x17) == g_game_turn) {
      thing_ptr_2 = (&g_thing_ptrs)
              [CONCAT22((ushort)((uint)*(int *)(word_ptr + 0x17) >> 0x10) ^
                        (ushort)((uint)g_game_turn >> 0x10),*(undefined2 *)(word_ptr + 0x1b))];
    }
    else {
      *(int *)(word_ptr + 0x17) = g_game_turn;
      uStack_48 = 0xaba47;
      thing_ptr_2 = ceiling_process_thing_entity_07d100();
      if (g_thing_ptrs < thing_ptr_2) {
        *(undefined2 *)(word_ptr + 0x1b) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
      }
      else {
        thing_ptr_2 = 0;
      }
    }
    if (g_thing_ptrs < thing_ptr_2) {
      uStack_48 = 0xaba84;
      thing_ptr = update_fn_0dc440();
      if (0x2ff < thing_ptr) goto LAB_000aba8f;
      local_1c = '\x01';
    }
    else {
LAB_000aba8f:
      local_1c = '\0';
    }
    if (local_1c != '\0') {
      uStack_48 = 0xabaa3;
      uval = anger_fn_010c1a();
      *(undefined2 *)(local_24 + 0x18) = uval;
      if (*(char *)(local_24 + 0x66) == '\0') {
        unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
        thing_ptr_2 = unsynced_seed >> 0xd;
        g_unsynced_random_seed = thing_ptr_2 | unsynced_seed * 0x80000;
        if ((thing_ptr_2 & 0xf) == 0) {
          thing_ptr_2 = g_unsynced_random_seed * 0x24a1 + 0x24df;
          g_unsynced_random_seed = thing_ptr_2 >> 0xd | thing_ptr_2 * 0x80000;
          val_2 = g_unsynced_random_seed % 3 + 0x6d;
        }
      }
    }
  }
  thing_ptr = *(int *)(local_24 + 0x12) >> 0x18;
  if (thing_ptr < 1) {
    word_ptr_2 = (undefined4 *)&local_44;
    if (thing_ptr == 0) {
      uStack_48 = 2;
      uStack_4c = 0;
      word_ptr_2 = &uStack_50;
      uStack_50 = 0xffffffff;
      *(undefined1 *)(local_24 + 0x15) = 0xff;
      draw_roll_action_random_08ccec();
      if (local_30 == 0) {
        thing_ptr_2 = g_action_random_seed * 0x24a1 + 0x24df;
        unsynced_seed = thing_ptr_2 >> 0xd;
        g_action_random_seed._0_1_ = (byte)unsynced_seed;
        rand_seed_2 = (byte)g_action_random_seed & 3;
        g_action_random_seed = unsynced_seed | thing_ptr_2 * 0x80000;
        *(byte *)(local_24 + 0x16) = rand_seed_2 + 1;
      }
      else {
        *(undefined1 *)(local_24 + 0x16) = 6;
        word_ptr_2 = &uStack_50;
      }
    }
    if (((local_1c == '\0') || (4 < *(int *)(local_24 + 0x13) >> 0x18)) &&
       (thing_ptr = *(int *)(local_24 + 0x13) >> 0x18, thing_ptr != 0)) {
      if (((*(char *)(local_24 + 0x16) != '\0') &&
          (val = *(int *)(local_24 + 0x3c) >> 0x10,
          (int)((uint)*(byte *)(local_24 + 0x49) * val) <= val + *(int *)(local_24 + 0x40)))
         && (thing_ptr < 5)) {
        *(char *)(local_24 + 0x16) = *(char *)(local_24 + 0x16) + -1;
      }
    }
    else {
      *(undefined4 *)((int)word_ptr_2 + -4) = 2;
      *(undefined4 *)((int)word_ptr_2 + -8) = 0;
      *(undefined4 *)((int)word_ptr_2 + -0xc) = 0xffffffff;
      *(undefined4 *)((int)word_ptr_2 + -0x10) = 0xabd55;
      draw_roll_action_random_08ccec();
      thing_ptr_2 = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = thing_ptr_2 >> 0xd | thing_ptr_2 * 0x80000;
      *(char *)(local_24 + 0x15) = (char)((ulonglong)g_action_random_seed % 0x39);
      thing_ptr_2 = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = thing_ptr_2 >> 0xd | thing_ptr_2 * 0x80000;
      rand_seed = (ulonglong)g_action_random_seed;
      *(undefined1 *)(local_24 + 0x16) = 0;
      *(short *)(local_24 + 0x18) = (short)(rand_seed % 0x7ff);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + -0xc);
    }
  }
  else {
    thing_ptr = -(((int)(&PTR_LAB_00192fe0)[*(ushort *)(local_24 + 0x18)] << 5) >> 8);
    local_2c = (int)((&g_slab_attr_table)[*(ushort *)(local_24 + 0x18)] << 5) >> 0x10;
    local_28 = thing_ptr >> 8;
    local_3c = local_3c +
               (short)((uint)((&g_slab_attr_table)[*(ushort *)(local_24 + 0x18)] << 5) >> 0x10);
    sStack_3a = sStack_3a + (short)((uint)thing_ptr >> 8);
    uStack_48 = 0xabb67;
    val = ceiling_process_map_subtile_07dbc0();
    thing_ptr = local_24;
    if (val != 0) {
      thing_ptr_2 = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = thing_ptr_2 >> 0xd | thing_ptr_2 * 0x80000;
      *(short *)(local_24 + 0x18) = (short)((ulonglong)g_action_random_seed % 0x7ff);
    }
    local_20 = CONCAT22((short)((uint)local_24 >> 0x10),*(undefined2 *)(local_24 + 0x18));
    uStack_48 = 0xabbc1;
    anger_fn_010c5f();
    word_ptr_3 = (ushort *)(thing_ptr + 0x52); /* thing->health */
    uStack_48 = 0xabbd3;
    short_val = anger_fn_010c85();
    thing_ptr = 0x3e;
    if (extraout_ECX < 0x3e) {
      thing_ptr = extraout_ECX;
    }
    *word_ptr_3 = (short)thing_ptr * short_val + *word_ptr_3 & 0x7ff;
    uStack_48 = 0xabc08;
    local_34 = word_ptr_3;
    thing_ptr = anger_fn_010c5f();
    if (thing_ptr < 0x11c) {
      *(char *)(local_24 + 0x15) = *(char *)(local_24 + 0x15) + -1;
      local_44 = (undefined2)local_2c;
      local_42 = (undefined2)local_28;
      local_40 = 0;
      uStack_48 = 0xabc34;
      anger_fn_010cd7();
    }
    word_ptr_2 = (undefined4 *)&local_44;
    if ((*(char *)(local_24 + 0x66) == '\0') && (word_ptr_2 = (undefined4 *)&local_44, val_2 == 0)) {
      thing_ptr_2 = g_unsynced_random_seed * 0x24a1 + 0x24df;
      g_unsynced_random_seed = thing_ptr_2 >> 0xd | thing_ptr_2 * 0x80000;
      rand_seed = (ulonglong)g_unsynced_random_seed;
      word_ptr_2 = (undefined4 *)&local_44;
      if ((int)(rand_seed % 0x50) == 0) {
        thing_ptr_2 = g_unsynced_random_seed * 0x24a1 + 0x24df;
        g_unsynced_random_seed = thing_ptr_2 >> 0xd | thing_ptr_2 * 0x80000;
        val_2 = (int)((rand_seed % 0x50 << 0x20 | (ulonglong)g_unsynced_random_seed) % 9) + 100;
        word_ptr_2 = (undefined4 *)&local_44;
      }
    }
  }
  if (val_2 != 0) {
    *(undefined4 *)((int)word_ptr_2 + -4) = 0x100;
    *(undefined4 *)((int)word_ptr_2 + -8) = 1;
    *(undefined4 *)((int)word_ptr_2 + -0xc) = 0;
    *(undefined4 *)((int)word_ptr_2 + -0x10) = 3;
    *(undefined4 *)((int)word_ptr_2 + -0x14) = 0xabe17;
    sound_fn_06e538();
  }
  uval_2 = 1;
LAB_000abe1c:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : food_update_creature_control_0abe28 (Original VA: 0xabe28, Ghidra: FUN_000abe28)
 * Prototype: undefined8 food_update_creature_control_0abe28(void);
 * Address  : 0xabe28 (Size: 48 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> person_update_creature_control_064ae7
 ******************************************************************************/
undefined8 food_update_creature_control_0abe28(void)

{
  int thing;
  undefined4 arg_edx;
  
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) != '$') { /* thing->ccontrol_idx */
    person_update_creature_control_064ae7();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : food_update_player_dungeon_0abe58 (Original VA: 0xabe58, Ghidra: FUN_000abe58)
 * Prototype: void food_update_player_dungeon_0abe58(void);
 * Address  : 0xabe58 (Size: 223 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 4 -> food_process_dungeon_room_0ab8dc, object_fn_0c5980, room_lair_thinks_it_belongs_0d08a8, update_fn_0e25c4
 * Callees  : 4 -> effect_allocate_light_effect_024998, sound_fn_06e538, structs_update_creature_control_072af4, food_fn_0aaecc
 ******************************************************************************/
void food_update_player_dungeon_0abe58(void)

{
  int arg_eax;
  int val;
  uint unsynced_seed;
  undefined4 *word_ptr;
  byte flag;
  undefined2 auStack_828 [1018];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  flag = 0;
  word_ptr = (undefined4 *)auStack_24;
  local_1c = *(int *)(arg_eax + 3) >> 0x18;
  if (g_neutral_player_number != local_1c) {
    *(int *)(&g_bss_002e1820 + local_1c * 0x1508) = *(int *)(&g_bss_002e1820 + local_1c * 0x1508) + 1;
  }
  uStack_28 = 0xabe9b;
  val = effect_allocate_light_effect_024998();
  if (val != 0) {
    unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
    uStack_28 = 0x100;
    local_2c = 2;
    uStack_30 = 0;
    word_ptr = &uStack_34;
    uStack_34 = 3;
    sound_fn_06e538();
  }
  *word_ptr = *(undefined4 *)(arg_eax + 0xd);
  *(undefined2 *)(word_ptr + (uint)flag * -2 + 1) = *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8)
  ;
  *(char *)((int)word_ptr + 5) = *(char *)((int)word_ptr + 5) + '\x01';
  word_ptr[-1] = 0xabf0f;
  effect_allocate_light_effect_024998();
  word_ptr[-1] = 0xabf1d;
  effect_allocate_light_effect_024998();
  word_ptr[-1] = 0xabf24;
  food_fn_0aaecc();
  word_ptr[-1] = 0xabf2d;
  structs_update_creature_control_072af4();
  return;
}

/******************************************************************************
 * Function : food_update_creature_and_thing_0abf38 (Original VA: 0xabf38, Ghidra: FUN_000abf38)
 * Prototype: void food_update_creature_and_thing_0abf38(void);
 * Address  : 0xabf38 (Size: 346 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> temple_how_you_sacrifice_neutral_0731f3, temple_process_slabmap_tile_073d8d
 * Callees  : 0 -> 
 ******************************************************************************/
void food_update_creature_and_thing_0abf38(void)

{
  int arg_eax;
  byte *thing_ptr;
  
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6];
  if (thing_ptr != g_thing_ptrs) {
    do {
      if (((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == 10)) &&
          (*(int *)(thing_ptr + 3) >> 0x18 == arg_eax)) &&
         (((*thing_ptr & 0x10) == 0 && ((thing_ptr[1] & 2) == 0)))) {
        thing_ptr[0x17] = 1;
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    } while (thing_ptr != g_thing_ptrs);
  }
  thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[arg_eax * 0xa84]];
  if (thing_ptr != g_thing_ptrs) {
    do {
      if ((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) != 0) && /* thing->ccontrol_idx */
          ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) {
        thing_ptr[0x5e] = 0;
        thing_ptr[0x5f] = 0;
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
    } while (thing_ptr != g_thing_ptrs);
  }
  thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[arg_eax * 0xa84]];
  if (thing_ptr != g_thing_ptrs) {
    do {
      if ((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) != 0) && /* thing->ccontrol_idx */
          ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) {
        thing_ptr[0x5e] = 0;
        thing_ptr[0x5f] = 0;
      }
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
    } while (thing_ptr != g_thing_ptrs);
    return;
  }
  return;
}

