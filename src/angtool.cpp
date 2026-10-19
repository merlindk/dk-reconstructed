/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: angtool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 22
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : angtool_fn_010ecc (Original VA: 0x10ecc, Ghidra: FUN_00010ecc)
 * Prototype: longlong angtool_fn_010ecc(void);
 * Address  : 0x10ecc (Size: 7 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module angtool.cpp procedure @ 0x010ecc
 * Callers  : 1 -> angtool_update_slab_subtile_columns_0110ed
 * Callees  : 0 -> 
 ******************************************************************************/
longlong angtool_fn_010ecc(void)

{
  int unaff_EBP;
  
  return (ulonglong)*(uint *)(unaff_EBP + 0xc) << 0x20;
}

/******************************************************************************
 * Function : angtool_update_creature_control_010ed3 (Original VA: 0x10ed3, Ghidra: FUN_00010ed3)
 * Prototype: longlong angtool_update_creature_control_010ed3(void);
 * Address  : 0x10ed3 (Size: 153 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> instance_negative_instance_049bfc, person_fn_063b6d
 ******************************************************************************/
longlong angtool_update_creature_control_010ed3(void)

{
  short room_ptr;
  int thing;
  uint arg_edx;
  uint *cctrl_ptr;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  if ((uint)(byte)(&g_bss_002d33c8)
                  [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                   (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] * 0x45 != 0) {
    room_ptr = *(short *)(&g_room_slabs_count +
                      (uint)(byte)(&g_bss_002d33c8)
                                  [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                                   (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] * 0x45);
    cctrl_ptr = auStack_c;
    if ((((room_ptr != 1) && (cctrl_ptr = auStack_c, room_ptr != 7)) && (cctrl_ptr = auStack_c, room_ptr != 0xf))
       && (cctrl_ptr = auStack_c, *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0') /* thing->ccontrol_idx */
       ) {
      cctrl_ptr = &uStack_10;
      uStack_10 = 0;
      instance_negative_instance_049bfc();
    }
    return CONCAT44(*cctrl_ptr,1);
  }
  uStack_10 = 0x10f66;
  auStack_c[0] = arg_edx;
  person_fn_063b6d();
  return (ulonglong)auStack_c[0] << 0x20;
}

/******************************************************************************
 * Function : angtool_process_dungeon_room_010f6c (Original VA: 0x10f6c, Ghidra: FUN_00010f6c)
 * Prototype: longlong angtool_process_dungeon_room_010f6c(void);
 * Address  : 0x10f6c (Size: 115 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 3 -> person_fn_063b6d, ceiling_roll_action_random_07d674, move_update_creature_control_0b3b58
 ******************************************************************************/
longlong angtool_process_dungeon_room_010f6c(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  if (&g_rooms <
      &g_rooms +
      (uint)(byte)(&g_bss_002d33c8)
                  [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
                   (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55) * 6] * 0x45) {
    val = ceiling_roll_action_random_07d674();
    if (val != 0) {
      move_update_creature_control_0b3b58();
      *(undefined1 *)(arg_eax + 8) = 0x72;
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_process_dungeon_room_010fdf (Original VA: 0x10fdf, Ghidra: FUN_00010fdf)
 * Prototype: longlong angtool_process_dungeon_room_010fdf(void);
 * Address  : 0x10fdf (Size: 155 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 4 -> inits_allocate_dynamic_light_shot_0444a9, mapwho_fn_05102d, mapwho_process_map_subtile_05131e, person_fn_063b6d
 ******************************************************************************/
longlong angtool_process_dungeon_room_010fdf(void)

{
  ushort uval;
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  
  uval = *(ushort *)(&g_bss_002e912a + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6);
  if ((&g_rooms <
       &g_rooms +
       (uint)(byte)(&g_bss_002d33c8)
                   [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
                    (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]) * 6] * 0x45) &&
     (*(short *)(&g_room_slabs_count +
                (uint)(byte)(&g_bss_002d33c8)
                            [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
                             (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]) * 6] * 0x45) == 2)) {
    val = mapwho_process_map_subtile_05131e();
    if ((val != 0) &&
       ((uint)uval != *(uint *)(extraout_ECX + 0x13) &&
        -1 < (int)((uint)uval - *(uint *)(extraout_ECX + 0x13)))) {
      val = mapwho_fn_05102d();
      *(int *)(extraout_ECX_00 + 0x13) = *(int *)(extraout_ECX_00 + 0x13) + val;
      val_2 = inits_allocate_dynamic_light_shot_0444a9();
      if (val_2 != 0) {
        *(int *)(val_2 + 0x13) = val;
      }
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_fn_01107a (Original VA: 0x1107a, Ghidra: FUN_0001107a)
 * Prototype: undefined8 angtool_fn_01107a(void);
 * Address  : 0x1107a (Size: 115 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module angtool.cpp procedure @ 0x01107a
 * Callers  : 0 -> 
 * Callees  : 4 -> dungeon_attempt_get_random_position_0239ee, person_fn_063b6d, person_external_change_state_but_064a5f, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 angtool_fn_01107a(void)

{
  char ch;
  int arg_eax;
  undefined4 uval;
  undefined4 arg_edx;
  
  ch = dungeon_attempt_get_random_position_0239ee();
  if (ch != '\0') {
    ch = person_external_change_state_but_064a5f();
    if (ch != '\0') {
      move_update_creature_control_0b3b58();
      uval = 1;
      *(undefined1 *)(arg_eax + 8) = 0x76;
      goto LAB_000110db;
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_000110db:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : angtool_update_slab_subtile_columns_0110ed (Original VA: 0x110ed, Ghidra: FUN_000110ed)
 * Prototype: undefined8 angtool_update_slab_subtile_columns_0110ed(void);
 * Address  : 0x110ed (Size: 295 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 4 -> anger_fn_010010, angtool_fn_010ecc, instance_negative_instance_049bfc, person_fn_063b6d
 ******************************************************************************/
undefined8 angtool_update_slab_subtile_columns_0110ed(void)

{
  ulonglong uval;
  int thing;
  uint uval_2;
  int cctrl_ptr;
  undefined4 arg_edx;
  int val;
  undefined8 uval_3;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x284) != 0) {
    uval = (ulonglong)(uint)*(ushort *)(cctrl_ptr + 0x284) % 0x100;
    val = (int)uval;
    uval_2 = (int)(uint)*(ushort *)(cctrl_ptr + 0x284) >> 8;
    if (((*(byte *)((int)&g_map_subtiles + (uval_2 * 0x100 + val) * 5) & 0x10) != 0) &&
       ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[uval_2] * 0x55) * 6] & 7) ==
        (int)*(char *)(thing + 6))) { /* thing->owner */
      if ((&g_data_001921cf)
          [(uint)(byte)(&g_slabmap_base)[((int)(uval / 3) + (uval_2 / 3) * 0x55) * 6] * 0x16] ==
          '\x03') {
        if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
          cctrl_ptr = anger_fn_010010((short)(val << 8) + 0x80);
          if (cctrl_ptr == 0) {
            instance_negative_instance_049bfc(0);
          }
        }
        return CONCAT44(arg_edx,1);
      }
    }
  }
  person_fn_063b6d();
  uval_3 = angtool_fn_010ecc();
  return uval_3;
}

/******************************************************************************
 * Function : angtool_update_creature_and_thing_011214 (Original VA: 0x11214, Ghidra: FUN_00011214)
 * Prototype: longlong angtool_update_creature_and_thing_011214(void);
 * Address  : 0x11214 (Size: 302 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 5 -> gravyard_update_creature_control_039a74, gravyard_update_creature_control_039ba4, group_update_creature_and_thing_039c3e, gravyard_update_creature_and_thing_039d83, group_infinate_loop_dispand_group_03a237
 ******************************************************************************/
longlong angtool_update_creature_and_thing_011214(void)

{
  char *str_ptr;
  byte flag;
  int cctrl_ptr;
  bool flag_2;
  uint thing;
  uint thing_ptr;
  int val;
  uint uval;
  int val_2;
  int val_3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint arg_edx;
  int val_4;
  int local_24;
  int local_1c;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0x9a) != '\0') {
    thing_ptr = gravyard_update_creature_and_thing_039d83();
    if (thing_ptr == thing) {
      flag_2 = true;
    }
    else {
      flag_2 = false;
      if (thing_ptr != 0) {
        group_infinate_loop_dispand_group_03a237();
      }
    }
    flag = *(byte *)(thing + 0x10);
    local_1c = ((uint)*(byte *)(thing + 0xe) - (uint)*(byte *)(thing + 0xe) % 3) * 5;
    local_24 = local_1c + 0xf00;
    val_3 = local_1c + 0xf;
    do {
      val = ((uint)flag - (uint)flag % 3) * 0x500;
      val_4 = local_1c + val;
      do {
        for (thing_ptr = (*(uint *)((int)&g_map_subtiles + val_4 + 1) & 0x3fffff) >> 0xb;
            thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
            thing_ptr = (uint)*(ushort *)(thing_ptr + 2)) {
          if ((((*(char *)(thing_ptr + 6) == *(char *)(thing + 6)) && /* thing->owner */
               (*(char *)(thing_ptr + 0x1f) == '\x05')) && (thing_ptr != thing)) && /* thing->class_id */
             (*(char *)(thing_ptr + 0x1a) != '\x17')) {
            uval = gravyard_update_creature_and_thing_039d83();
            if (uval != 0) {
              thing_ptr = extraout_ECX;
              if (uval == thing) goto LAB_000112d5;
              group_update_creature_and_thing_039c3e();
            }
            if (flag_2) {
              val_2 = gravyard_update_creature_control_039a74();
              thing_ptr = extraout_ECX_00;
            }
            else {
              val_2 = gravyard_update_creature_control_039ba4();
              thing_ptr = extraout_ECX_01;
            }
            if (val_2 != 0) {
              str_ptr = (char *)(cctrl_ptr + 0x9a);
              *str_ptr = *str_ptr + -1;
            }
          }
LAB_000112d5:
        }
        val_4 = val_4 + 0x500;
      } while (val_4 != local_24 + val);
      local_1c = local_1c + 5;
      local_24 = local_24 + 5;
    } while (local_1c != val_3);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_update_creature_and_thing_011342 (Original VA: 0x11342, Ghidra: FUN_00011342)
 * Prototype: longlong angtool_update_creature_and_thing_011342(void);
 * Address  : 0x11342 (Size: 198 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> group_infinate_loop_dispand_group_03a32d, move_fn_0b3be4
 ******************************************************************************/
longlong angtool_update_creature_and_thing_011342(void)

{
  ushort thing_ptr;
  short short_val;
  int thing;
  int dungeon_off;
  int extraout_ECX;
  uint arg_edx;
  uint rand_seed;
  
  dungeon_off = *(char *)(thing + 6) * 0x1508; /* thing->owner */
  if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a) != '\0') && /* thing->ccontrol_idx */
     (1 < (byte)(&g_bss_002e0ea2)[dungeon_off])) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    rand_seed = g_action_random_seed % (uint)(byte)(&g_bss_002e0ea2)[dungeon_off];
    for (thing_ptr = (&g_bss_002e05b6)[*(char *)(thing + 6) * 0xa84]; /* thing->owner */
        (rand_seed != 0 && (g_thing_ptrs < (&g_thing_ptrs)[thing_ptr]));
        thing_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[thing_ptr] + 100)] + 0x1f)) {
      rand_seed = rand_seed - 1;
    }
    short_val = move_fn_0b3be4();
    if (short_val != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x77;
    }
    return CONCAT44(arg_edx,1);
  }
  group_infinate_loop_dispand_group_03a32d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_process_map_subtile_011408 (Original VA: 0x11408, Ghidra: FUN_00011408)
 * Prototype: undefined8 angtool_process_map_subtile_011408(void);
 * Address  : 0x11408 (Size: 238 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 3 -> combchk_fn_016175, combtool_creature_combat_already_adding_018087, combtool_fn_0189d4
 ******************************************************************************/
undefined8 angtool_process_map_subtile_011408(void)

{
  undefined4 uval;
  uint arg_eax;
  int val;
  undefined4 arg_edx;
  undefined1 *word_ptr;
  int *int_ptr;
  uint thing_ptr;
  int aiStack_3c [5];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  int_ptr = aiStack_3c + 2;
  aiStack_3c[2] = ((uint)*(byte *)(arg_eax + 0x10) - (uint)*(byte *)(arg_eax + 0x10) % 3) * 0x500;
  local_20 = ((uint)*(byte *)(arg_eax + 0xe) - (uint)*(byte *)(arg_eax + 0xe) % 3) * 5;
  local_28 = local_20 + 0xf00;
  local_24 = 0;
  aiStack_3c[4] = aiStack_3c[2];
  do {
    if (2 < local_24) {
      uval = 0;
LAB_00011201:
      return CONCAT44(arg_edx,uval);
    }
    aiStack_3c[3] = aiStack_3c[2] + local_28;
    for (local_1c = local_20 + aiStack_3c[4]; local_1c < aiStack_3c[3]; local_1c = local_1c + 0x500)
    {
      for (thing_ptr = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + local_1c + 1) & 0x3fffff) >> 0xb]
          ; g_thing_ptrs < thing_ptr; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
        word_ptr = (undefined1 *)int_ptr;
        if (((*(char *)(thing_ptr + 0x1f) == '\x05') && (thing_ptr != arg_eax)) && /* thing->class_id */
           (*(char *)(thing_ptr + 0x1a) != '\x17')) {
          *(undefined4 *)((int)int_ptr + -4) = 0x114d3;
          combtool_fn_0189d4();
          word_ptr = (undefined1 *)((int)int_ptr + -4);
          *(undefined4 *)((int)int_ptr + -4) = 0;
          *(undefined4 *)((int)int_ptr + -8) = 0x114e2;
          val = combchk_fn_016175();
          if (0 < val) {
            *(undefined4 *)((int)int_ptr + -8) = 0x114f1;
            combtool_creature_combat_already_adding_018087();
            uval = 1;
            goto LAB_00011201;
          }
        }
        int_ptr = (int *)word_ptr;
      }
    }
    local_28 = local_28 + 5;
    local_20 = local_20 + 5;
    local_24 = local_24 + 1;
  } while( true );
}

/******************************************************************************
 * Function : angtool_update_creature_and_thing_0114f6 (Original VA: 0x114f6, Ghidra: FUN_000114f6)
 * Prototype: longlong angtool_update_creature_and_thing_0114f6(void);
 * Address  : 0x114f6 (Size: 174 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_063b6d, move_fn_0b3be4
 ******************************************************************************/
longlong angtool_update_creature_and_thing_0114f6(void)

{
  ushort thing_ptr;
  short short_val;
  int arg_eax;
  int dungeon_off;
  int extraout_ECX;
  uint arg_edx;
  uint rand_seed;
  
  dungeon_off = *(char *)(arg_eax + 6) * 0x1508;
  if (1 < (byte)(&g_bss_002e0ea2)[dungeon_off]) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    rand_seed = g_action_random_seed % (uint)(byte)(&g_bss_002e0ea2)[dungeon_off];
    for (thing_ptr = (&g_bss_002e05b6)[*(char *)(arg_eax + 6) * 0xa84];
        (rand_seed != 0 && (g_thing_ptrs < (&g_thing_ptrs)[thing_ptr]));
        thing_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[thing_ptr] + 100)] + 0x1f)) {
      rand_seed = rand_seed - 1;
    }
    short_val = move_fn_0b3be4();
    if (short_val != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x3b;
    }
    return CONCAT44(arg_edx,1);
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_update_creature_control_0115a4 (Original VA: 0x115a4, Ghidra: FUN_000115a4)
 * Prototype: undefined8 angtool_update_creature_control_0115a4(void);
 * Address  : 0x115a4 (Size: 98 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> combobj_fn_016f8b, door_process_map_subtile_022b3a
 ******************************************************************************/
undefined8 angtool_update_creature_control_0115a4(void)

{
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1d0) != 0) { /* thing->ccontrol_idx */
    val = door_process_map_subtile_022b3a();
    if (val != 0) {
      combobj_fn_016f8b();
      uval = 1;
      goto LAB_00011202;
    }
  }
  uval = 0;
LAB_00011202:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : angtool_fn_011606 (Original VA: 0x11606, Ghidra: FUN_00011606)
 * Prototype: undefined4 angtool_fn_011606(void);
 * Address  : 0x11606 (Size: 313 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module angtool.cpp procedure @ 0x011606
 * Callers  : 1 -> angtool_update_slab_subtile_columns_01173f
 * Callees  : 4 -> imptool_process_slabmap_tile_03f7ad, creature_fn_0827fc, move_process_map_subtile_0b28e8, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 angtool_fn_011606(void)

{
  short short_val;
  undefined2 uval;
  int arg_eax;
  uint uval_2;
  uint uval_3;
  int val;
  int val_2;
  int val_3;
  int *extraout_ECX;
  int arg_edx;
  uint uval_4;
  int val_4;
  int *arg_ebx;
  int val_5;
  longlong val_6;
  uint uval_5;
  int local_10;
  
  uval_2 = (uint)*(byte *)(arg_eax + 0xe);
  uval_3 = (uint)*(byte *)(arg_eax + 0x10);
  uval_4 = arg_edx % 0x100;
  val = arg_edx / 0x100;
  uval_5 = uval_2;
  val_2 = bflib_system_io_fn_0e69fc();
  val_6 = bflib_system_io_fn_0e69fc();
  if ((int)val_6 < val_2) {
    if (uval_4 == uval_2 || (int)(uval_4 - uval_2) < 0) {
      val_2 = 1;
    }
    else {
      val_2 = 3;
    }
  }
  else if (val_6 < 0x100000000) {
    val_2 = 2;
  }
  else {
    val_2 = 0;
  }
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 0;
    }
    val_5 = uval_4 + *(char *)((int)&g_data_0018b67b + val_2 * 2 + 3) * 2;
    val_4 = val + (char)(&g_data_0018b67f)[val_2 * 2] * 2;
    val_3 = imptool_process_slabmap_tile_03f7ad();
    if (val_3 != 0) {
      short_val = (short)val_5 * 0x100 + 0x80;
      uval = move_process_map_subtile_0b28e8(short_val,0,val,uval_5,uval_3);
      uval_2 = creature_fn_0827fc(short_val,uval);
      if ((uval_2 & 0xff) != 0xffffffff) {
        *arg_ebx = val_5;
        *extraout_ECX = val_4;
        return 1;
      }
    }
    val_2 = (val_2 + 1) % 4;
    local_10 = local_10 + 1;
  } while( true );
}

/******************************************************************************
 * Function : angtool_update_slab_subtile_columns_01173f (Original VA: 0x1173f, Ghidra: FUN_0001173f)
 * Prototype: undefined8 angtool_update_slab_subtile_columns_01173f(void);
 * Address  : 0x1173f (Size: 291 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 2 -> angtool_fn_011606, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 angtool_update_slab_subtile_columns_01173f(void)

{
  short short_val;
  undefined4 uval;
  int thing;
  int val;
  int val_2;
  undefined4 arg_edx;
  int val_3;
  int val_4;
  
  val_3 = 0;
  do {
    if (7 < val_3) {
      uval = 0;
LAB_00011201:
      return CONCAT44(arg_edx,uval);
    }
    val = ((int)(*(char *)((int)&g_data_0018b67b + val_3 + 3) * 3 + (uint)*(byte *)(thing + 0xe)) /
            3) * 3 + 1;
    val_2 = ((int)((char)(&g_data_0018b67f)[val_3] * 3 + (uint)*(byte *)(thing + 0x10)) / 3) * 3 + 1;
    val_4 = val_2 * 0x100 + val;
    if ((((*(byte *)((int)&g_map_subtiles + val_4 * 5) & 0x10) != 0) &&
        ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6] & 7)
         == (int)*(char *)(thing + 6))) && /* thing->owner */
       ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val / 3 + (val_2 / 3) * 0x55) * 6] * 0x16] ==
        '\x03')) {
      val_3 = angtool_fn_011606();
      if (val_3 != 0) {
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          *(undefined1 *)(thing + 8) = 0x75; /* thing->active_state */
          *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x284) = (short)val_4; /* thing->ccontrol_idx */
        }
      }
      uval = 1;
      goto LAB_00011201;
    }
    val_3 = val_3 + 2;
  } while( true );
}

/******************************************************************************
 * Function : angtool_update_creature_control_011862 (Original VA: 0x11862, Ghidra: FUN_00011862)
 * Prototype: undefined4 angtool_update_creature_control_011862(void);
 * Address  : 0x11862 (Size: 346 bytes)
 * Module   : angtool.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> anger_roll_action_random_010dfc
 * Callees  : 9 -> angtool_update_creature_control_0119bc, angtool_update_creature_control_011a81, angtool_update_player_view_state_011b51, angtool_process_thing_entity_011be9, angtool_update_creature_control_011c78, angtool_fn_011d2f, angtool_fn_011d65, moodneed_fn_051374 ...
 ******************************************************************************/
undefined4 angtool_update_creature_control_011862(void)

{
  char ch;
  int thing;
  int val;
  uint arg_edx;
  bool player_off;
  undefined8 uval;
  
  if (arg_edx < 8) {
    if (arg_edx < 2) {
      if (arg_edx != 1) {
        return 0;
      }
      uval = angtool_fn_011d2f();
      if ((int)uval == 0) {
        return 0;
      }
      return (int)((ulonglong)uval >> 0x20);
    }
    if (arg_edx < 3) {
      val = angtool_update_creature_control_0119bc();
      if (val == 0) {
        return 0;
      }
      player_off = (int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]; /* thing->owner */
LAB_000118e0:
      if (!player_off) {
        return 1;
      }
      moodneed_fn_051374();
      return 1;
    }
    if (arg_edx != 4) {
      return 0;
    }
  }
  else {
    if (arg_edx < 9) {
      val = angtool_update_creature_control_011a81();
      goto LAB_000118ff;
    }
    if (arg_edx < 0x20) {
      if (arg_edx != 0x10) {
        return 0;
      }
      val = angtool_fn_011d65();
      if (val == 0) {
        return 0;
      }
      player_off = (int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]; /* thing->owner */
      goto LAB_000118e0;
    }
    if (arg_edx < 0x21) {
      ch = person_external_change_state_but_064a5f();
      if (ch != '\0') {
        *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) = /* thing->ccontrol_idx */
             *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) | 0x10; /* thing->ccontrol_idx */
        *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a) = 0; /* thing->ccontrol_idx */
        return 1;
      }
      return 0;
    }
    if (arg_edx < 0x40) {
      return 0;
    }
    if (0x40 < arg_edx) {
      if (arg_edx != 0x80) {
        return 0;
      }
      val = angtool_process_thing_entity_011be9();
      goto LAB_000118ff;
    }
    val = angtool_update_creature_control_011c78();
    if (val != 0) {
      return 1;
    }
  }
  val = angtool_update_player_view_state_011b51();
LAB_000118ff:
  if (val != 0) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : angtool_update_creature_control_0119bc (Original VA: 0x119bc, Ghidra: FUN_000119bc)
 * Prototype: undefined8 angtool_update_creature_control_0119bc(void);
 * Address  : 0x119bc (Size: 197 bytes)
 * Module   : angtool.cpp [direct_file_string_xref]
 * OrigLine : angtool.cpp lines 621
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 7 -> person_external_change_state_but_064a5f, person_fn_064c4d, creature_fn_0827fc, room_process_dungeon_room_0ca34c, room_fn_0cc4a0, room_number_slabs_room_zero_0cc968, LbErrorLog
 ******************************************************************************/
undefined8 angtool_update_creature_control_0119bc(void)

{
  char ch;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  
  ch = person_fn_064c4d();
  if (ch != '\0') {
    val = room_process_dungeon_room_0ca34c(1);
    if (val != 0) {
      ch = room_number_slabs_room_zero_0cc968();
      if (ch != '\0') {
        ch = creature_fn_0827fc();
        if (ch != '\0') {
          ch = person_external_change_state_but_064a5f();
          if (ch != '\0') {
            val = room_fn_0cc4a0();
            if (val != 0) {
              *(undefined1 *)(thing + 8) = 0x71; /* thing->active_state */
              *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
                   *(undefined2 *)(extraout_ECX + 1);
              uval = 1;
              goto LAB_000110db;
            }
            LbErrorLog(); /* LbErrorLog("angtool.cpp", line 621, "Eh?") */
          }
        }
      }
    }
  }
  uval = 0;
LAB_000110db:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : angtool_update_creature_control_011a81 (Original VA: 0x11a81, Ghidra: FUN_00011a81)
 * Prototype: undefined8 angtool_update_creature_control_011a81(void);
 * Address  : 0x11a81 (Size: 208 bytes)
 * Module   : angtool.cpp [direct_file_string_xref]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 6 -> person_external_change_state_but_064a5f, person_fn_064c4d, creature_fn_0827fc, room_process_dungeon_room_0ca474, room_fn_0cc4a0, room_number_slabs_room_zero_0cc968
 ******************************************************************************/
undefined8 angtool_update_creature_control_011a81(void)

{
  char ch;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  
  ch = person_fn_064c4d();
  if ((ch != '\0') &&
     (*(int *)(thing + 0x13) < /* thing->anim_sprite */
      (int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing + 0x1a) * 0xe6))) {
    val = room_process_dungeon_room_0ca474(1);
    if (val != 0) {
      ch = room_number_slabs_room_zero_0cc968();
      if (ch != '\0') {
        ch = creature_fn_0827fc();
        if (ch != '\0') {
          ch = person_external_change_state_but_064a5f();
          if (ch != '\0') {
            val = room_fn_0cc4a0();
            if (val != 0) {
              *(undefined1 *)(thing + 8) = 0x70; /* thing->active_state */
              *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
                   *(undefined2 *)(extraout_ECX + 1);
              uval = 1;
              goto LAB_000110db;
            }
            LbErrorLog();
          }
        }
      }
    }
  }
  uval = 0;
LAB_000110db:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : angtool_update_player_view_state_011b51 (Original VA: 0x11b51, Ghidra: FUN_00011b51)
 * Prototype: longlong angtool_update_player_view_state_011b51(void);
 * Address  : 0x11b51 (Size: 152 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 5 -> moodneed_fn_051374, person_external_change_state_but_064a5f, person_fn_064c4d, room_process_dungeon_room_0c9988, room_fn_0cc4a0
 ******************************************************************************/
longlong angtool_update_player_view_state_011b51(void)

{
  char ch;
  int arg_eax;
  int val;
  uint arg_edx;
  
  ch = person_fn_064c4d();
  if (ch != '\0') {
    val = room_process_dungeon_room_0c9988();
    if (val != 0) {
      ch = person_external_change_state_but_064a5f();
      if (ch != '\0') {
        val = room_fn_0cc4a0();
        if (val != 0) {
          if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])
          {
            moodneed_fn_051374();
          }
          *(undefined1 *)(arg_eax + 8) = 0x33;
          return CONCAT44(arg_edx,1);
        }
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_process_thing_entity_011be9 (Original VA: 0x11be9, Ghidra: FUN_00011be9)
 * Prototype: undefined8 angtool_process_thing_entity_011be9(void);
 * Address  : 0x11be9 (Size: 143 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 3 -> anger_fn_010ad6, person_update_creature_control_063a25, creature_fn_082774
 ******************************************************************************/
undefined8 angtool_process_thing_entity_011be9(void)

{
  char ch;
  undefined4 uval;
  int arg_eax;
  int extraout_ECX;
  undefined4 arg_edx;
  int val;
  int val_2;
  int local_1c;
  
  local_1c = 0;
  val = 0;
  val_2 = 0;
  do {
    if (4 < local_1c) {
      uval = 0;
LAB_00011201:
      return CONCAT44(arg_edx,uval);
    }
    if ((((*(char *)(arg_eax + 6) != local_1c) && (((&g_players)[val] & 1) != 0)) &&
        ((&g_bss_0019d0f4)[val] == '\x01')) &&
       (*(char *)((&g_thing_ptrs)[*(ushort *)((int)&g_dungeons + val_2)] + 7) != '\x03')) {
      ch = creature_fn_082774();
      arg_eax = extraout_ECX;
      if (ch != '\0') {
        person_update_creature_control_063a25();
        anger_fn_010ad6();
        uval = 1;
        goto LAB_00011201;
      }
    }
    local_1c = local_1c + 1;
    val = val + 0x4ef;
    val_2 = val_2 + 0x1508;
  } while( true );
}

/******************************************************************************
 * Function : angtool_update_creature_control_011c78 (Original VA: 0x11c78, Ghidra: FUN_00011c78)
 * Prototype: longlong angtool_update_creature_control_011c78(void);
 * Address  : 0x11c78 (Size: 183 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 2 -> person_external_change_state_but_064a5f, person_fn_064c4d
 ******************************************************************************/
longlong angtool_update_creature_control_011c78(void)

{
  char ch;
  char ch_2;
  int thing;
  int extraout_ECX;
  uint arg_edx;
  uint dungeon_off;
  
  ch_2 = *(char *)(thing + 6); /* thing->owner */
  if (5 < *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23)) { /* thing->ccontrol_idx */
    ch = person_fn_064c4d();
    if (ch != '\0') {
      dungeon_off = (uint)(byte)(&g_bss_002e0ea2)[ch_2 * 0x1508];
      if (5 < dungeon_off) {
        dungeon_off = 5;
      }
      if (dungeon_off != 0) {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        dungeon_off = g_action_random_seed % dungeon_off;
        ch_2 = person_external_change_state_but_064a5f();
        if (ch_2 != '\0') {
          *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x9a) = (char)dungeon_off + '\x01';
          return CONCAT44(arg_edx,1);
        }
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_fn_011d2f (Original VA: 0x11d2f, Ghidra: FUN_00011d2f)
 * Prototype: longlong angtool_fn_011d2f(void);
 * Address  : 0x11d2f (Size: 54 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module angtool.cpp procedure @ 0x011d2f
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 2 -> person_external_change_state_but_064a5f, person_fn_064c4d
 ******************************************************************************/
longlong angtool_fn_011d2f(void)

{
  char ch;
  uint arg_edx;
  
  ch = person_fn_064c4d();
  if (ch != '\0') {
    ch = person_external_change_state_but_064a5f();
    if (ch != '\0') {
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : angtool_fn_011d65 (Original VA: 0x11d65, Ghidra: FUN_00011d65)
 * Prototype: undefined8 angtool_fn_011d65(void);
 * Address  : 0x11d65 (Size: 84 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module angtool.cpp procedure @ 0x011d65
 * Callers  : 1 -> angtool_update_creature_control_011862
 * Callees  : 3 -> dungeon_attempt_get_random_position_0239ee, person_external_change_state_but_064a5f, person_fn_064c4d
 ******************************************************************************/
undefined8 angtool_fn_011d65(void)

{
  char ch;
  undefined4 uval;
  int arg_eax;
  undefined4 arg_edx;
  
  ch = person_fn_064c4d();
  if (ch != '\0') {
    ch = dungeon_attempt_get_random_position_0239ee();
    if (ch != '\0') {
      ch = person_external_change_state_but_064a5f();
      if (ch != '\0') {
        move_update_creature_control_0b3b58();
        uval = 1;
        *(undefined1 *)(arg_eax + 8) = 0x76;
        goto LAB_000110db;
      }
    }
  }
  uval = 0;
LAB_000110db:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : angtool_update_creature_and_thing_011db9 (Original VA: 0x11db9, Ghidra: FUN_00011db9)
 * Prototype: undefined8 angtool_update_creature_and_thing_011db9(void);
 * Address  : 0x11db9 (Size: 70 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> temple_how_you_sacrifice_neutral_0731f3
 * Callees  : 1 -> anger_update_creature_control_010606
 ******************************************************************************/
undefined8 angtool_update_creature_and_thing_011db9(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_bss_002e05b6)[arg_eax * 0xa84];
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    anger_update_creature_control_010606();
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,1);
}

