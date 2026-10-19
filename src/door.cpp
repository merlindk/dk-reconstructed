/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: door.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : door_fn_022905 (Original VA: 0x22905, Ghidra: FUN_00022905)
 * Prototype: longlong door_fn_022905(void);
 * Address  : 0x22905 (Size: 46 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Module door.cpp procedure @ 0x022905
 * Callers  : 1 -> compturn_fn_0225fc
 * Callees  : 1 -> door_process_map_subtile_022a72
 ******************************************************************************/
longlong door_fn_022905(void)

{
  int arg_eax;
  int val;
  undefined4 *word_ptr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  uStack_14 = 0x22910;
  val = door_process_map_subtile_022a72();
  if (val != 0) {
    uStack_14 = 0x100;
    uStack_18 = 2;
    uStack_1c = 0;
    word_ptr = &uStack_20;
    uStack_20 = 3;
    *(undefined1 *)(arg_eax + 7) = 3;
    sound_fn_06e538();
  }
  return (ulonglong)*(uint *)((int)word_ptr + 4) << 0x20;
}

/******************************************************************************
 * Function : door_fn_022933 (Original VA: 0x22933, Ghidra: FUN_00022933)
 * Prototype: undefined4 door_fn_022933(void);
 * Address  : 0x22933 (Size: 177 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Module door.cpp procedure @ 0x022933
 * Callers  : 1 -> compturn_fn_0225fc
 * Callees  : 4 -> compturn_fn_0228a5, door_process_map_subtile_022a72, sound_fn_06e538, slab_attempt_dump_an_animating_0d8b7c
 ******************************************************************************/
undefined4 door_fn_022933(void)

{
  ushort uval;
  int arg_eax;
  undefined4 uval_2;
  int val;
  int *int_ptr;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  uint local_1c;
  
  int_ptr = &local_20;
  val = (int)*(short *)(arg_eax + 0x16) >> 0x1f;
  local_20 = (int)(((int)*(short *)(arg_eax + 0x16) + val * -0x100) - (uint)(val << 7 < 0)) >> 8;
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0x10;
  uval = *(ushort *)(&g_data_0018de0f + (uint)*(ushort *)(arg_eax + 0x13) * 8 + val);
  local_1c = (uint)*(ushort *)(&g_data_0018de09 + (uint)*(ushort *)(arg_eax + 0x13) * 8 + val);
  uStack_24 = 0x22973;
  val = door_process_map_subtile_022a72();
  if (val != 0) {
    uStack_24 = 0x100;
    uStack_28 = 2;
    uStack_2c = 0;
    int_ptr = &uStack_30;
    uStack_30 = 3;
    *(undefined1 *)(arg_eax + 7) = 3;
    sound_fn_06e538();
  }
  if ((int)(uint)uval < (int)*(short *)(arg_eax + 0x16)) {
    *(short *)(arg_eax + 0x16) = *(short *)(arg_eax + 0x16) - uval;
  }
  else {
    *(undefined2 *)(arg_eax + 0x16) = 0;
    *(undefined1 *)(arg_eax + 7) = 2;
  }
  val = (int)*(short *)(arg_eax + 0x16) >> 0x1f;
  if ((int)(((int)*(short *)(arg_eax + 0x16) + val * -0x100) - (uint)(val << 7 < 0)) >> 8 !=
      local_20) {
    *(uint *)((int)int_ptr + -4) = (uint)*(byte *)(arg_eax + 6);
    *(undefined4 *)((int)int_ptr + -8) = 0x229df;
    slab_attempt_dump_an_animating_0d8b7c();
    uval_2 = compturn_fn_0228a5();
    return uval_2;
  }
  return 1;
}

/******************************************************************************
 * Function : door_fn_0229e4 (Original VA: 0x229e4, Ghidra: FUN_000229e4)
 * Prototype: undefined8 door_fn_0229e4(void);
 * Address  : 0x229e4 (Size: 142 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Module door.cpp procedure @ 0x0229e4
 * Callers  : 1 -> compturn_fn_0225fc
 * Callees  : 1 -> slab_attempt_dump_an_animating_0d8b7c
 ******************************************************************************/
undefined8 door_fn_0229e4(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  int val_2;
  undefined4 arg_edx;
  
  val_2 = (int)*(short *)(arg_eax + 0x16);
  val = (uint)*(ushort *)(arg_eax + 0x13) * 8 + (uint)*(byte *)(arg_eax + 0x1a) * 0x10;
  uval = *(undefined2 *)(&g_data_0018de09 + val);
  if ((int)(val_2 + (uint)*(ushort *)(&g_data_0018de0f + val)) < 0x300) {
    *(short *)(arg_eax + 0x16) = *(short *)(arg_eax + 0x16) + *(ushort *)(&g_data_0018de0f + val);
  }
  else {
    *(undefined2 *)(arg_eax + 0x16) = 0x300;
    *(undefined1 *)(arg_eax + 7) = 1;
    *(undefined1 *)(arg_eax + 0x15) = 10;
  }
  val = (int)*(short *)(arg_eax + 0x16) >> 0x1f;
  if ((int)(((int)*(short *)(arg_eax + 0x16) + val * -0x100) - (uint)(val << 7 < 0)) >> 8 !=
      (int)((val_2 + (val_2 >> 0x1f) * -0x100) - (uint)((val_2 >> 0x1f) << 7 < 0)) >> 8) {
    slab_attempt_dump_an_animating_0d8b7c(*(undefined1 *)(arg_eax + 6),uval);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : door_process_map_subtile_022a72 (Original VA: 0x22a72, Ghidra: FUN_00022a72)
 * Prototype: undefined8 door_process_map_subtile_022a72(void);
 * Address  : 0x22a72 (Size: 200 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> compturn_fn_0228b1, door_fn_022905, door_fn_022933
 * Callees  : 1 -> door_update_player_view_state_022b94
 ******************************************************************************/
undefined8 door_process_map_subtile_022a72(void)

{
  byte flag;
  byte flag_2;
  int arg_eax;
  int val;
  undefined4 uval;
  char *str_ptr;
  char *extraout_ECX;
  undefined4 arg_edx;
  int val_2;
  uint thing_ptr;
  int loop_i;
  
  flag = *(byte *)(arg_eax + 0xe);
  flag_2 = *(byte *)(arg_eax + 0x10);
  str_ptr = (char *)&g_bss_002ee9c1;
  if (*(char *)(arg_eax + 0x18) == '\0') {
    for (loop_i = 0; loop_i < 0x20; loop_i = loop_i + 1) {
      val = (int)str_ptr[1] + (uint)flag;
      val_2 = (int)*str_ptr + (uint)flag_2;
      if (val < 0) {
        val = 0;
      }
      else if (0xfe < val) {
        val = 0xfe;
      }
      if (val_2 < 0) {
        val_2 = 0;
      }
      else if (0xfe < val_2) {
        val_2 = 0xfe;
      }
      val = (val + val_2 * 0x100) * 5;
      if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) {
        for (thing_ptr = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + val + 1) & 0x3fffff) >> 0xb];
            g_thing_ptrs < thing_ptr; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
          val = door_update_player_view_state_022b94();
          if (val != 0) {
            uval = 1;
            goto LAB_000228aa;
          }
          str_ptr = extraout_ECX;
        }
      }
      str_ptr = str_ptr + 4;
    }
  }
  uval = 0;
LAB_000228aa:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : door_process_map_subtile_022b3a (Original VA: 0x22b3a, Ghidra: FUN_00022b3a)
 * Prototype: uint door_process_map_subtile_022b3a(void);
 * Address  : 0x22b3a (Size: 90 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 24 -> angtool_update_creature_control_0115a4, compevnt_process_dungeon_room_0194e8, evil_update_creature_control_028afb, process_players_dungeon_command_packet, panmap_door_flagged_position_063122, pom_roll_action_random_065545, shot_process_thing_entity_06ca16, shot_process_thing_entity_06cee6 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint door_process_map_subtile_022b3a(void)

{
  int arg_eax;
  uint thing_ptr;
  int arg_edx;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles +
                    (((arg_edx / 3) * 3 + 1) * 0x100 + (arg_eax / 3) * 3 + 1) * 5 + 1) & 0x3fffff) >>
          0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(char *)(thing_ptr + 0x1f) == '\t') break; /* thing->class_id */
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : door_update_player_view_state_022b94 (Original VA: 0x22b94, Ghidra: FUN_00022b94)
 * Prototype: undefined4 door_update_player_view_state_022b94(void);
 * Address  : 0x22b94 (Size: 150 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> door_process_map_subtile_022a72, creature_update_slab_subtile_columns_07df64
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 door_update_player_view_state_022b94(void)

{
  int arg_eax;
  uint uval;
  int arg_edx;
  uint uval_2;
  uint uval_3;
  
  if ((*(char *)(arg_eax + 0x18) != '\0') || (*(char *)(arg_edx + 0x1f) != '\x05')) {
    return 0;
  }
  if (*(char *)(arg_eax + 6) != *(char *)(arg_edx + 6)) {
    uval_3 = (uint)*(char *)(arg_eax + 6);
    uval_2 = (uint)g_neutral_player_number;
    if (uval_3 == uval_2) {
      return 0;
    }
    uval = (uint)*(char *)(arg_edx + 6);
    if (uval_2 == uval) {
      return 0;
    }
    if (((uint)(byte)(&g_player_view_flags)[uval_3 * 0x4ef] & 1 << (*(byte *)(arg_edx + 6) & 0x1f)) == 0) {
      return 0;
    }
    if (uval_2 == uval) {
      return 0;
    }
    if (uval_3 == uval_2) {
      return 0;
    }
    if (((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f)) == 0) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : door_update_creature_control_022c2a (Original VA: 0x22c2a, Ghidra: FUN_00022c2a)
 * Prototype: void door_update_creature_control_022c2a(void);
 * Address  : 0x22c2a (Size: 306 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> move_update_creature_control_0b3dac
 * Callees  : 0 -> 
 ******************************************************************************/
void door_update_creature_control_022c2a(void)

{
  int thing;
  uint uval;
  int val;
  int loop_i;
  int val_2;
  ushort *arg_edx;
  int val_3;
  int val_4;
  int loop_i_2;
  uint arg_ebx;
  int val_5;
  
  uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2) / 2;
  val = *arg_edx - uval;
  val_3 = val >> 0x1f;
  val = (int)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0)) >> 8;
  val_3 = (int)(*arg_edx + uval) >> 8;
  loop_i = arg_edx[1] - uval;
  val_4 = loop_i >> 0x1f;
  loop_i = (int)((loop_i + val_4 * -0x100) - (uint)(val_4 << 7 < 0)) >> 8;
  val_4 = (int)(arg_edx[1] + uval) >> 8;
  if ((arg_ebx & 1) != 0) {
    val_5 = val;
    if (*(ushort *)(thing + 0xd) < *arg_edx) { /* thing->mappos.val_x */
      val_5 = val_3;
    }
    val_2 = loop_i;
    for (loop_i_2 = loop_i * 0x500 + val_5 * 5; loop_i_2 <= val_5 * 5 + val_4 * 0x500;
        loop_i_2 = loop_i_2 + 0x500) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i_2) & 0x40) != 0) goto LAB_00022d40;
      val_2 = val_2 + 1;
    }
  }
  if ((arg_ebx & 2) != 0) {
    val_2 = loop_i;
    if (*(ushort *)(thing + 0xf) < arg_edx[1]) { /* thing->mappos.val_y */
      val_2 = val_4;
    }
    for (loop_i = val * 5 + val_2 * 0x500; loop_i <= val_2 * 0x500 + val_3 * 5; loop_i = loop_i + 5) {
      val_5 = val;
      if ((*(byte *)((int)&g_map_subtiles + loop_i) & 0x40) != 0) {
LAB_00022d40:
        *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1d0) = /* thing->ccontrol_idx */
             (short)val_5 + (short)(val_2 << 8);
        return;
      }
      val = val + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : door_process_map_subtile_022d5c (Original VA: 0x22d5c, Ghidra: FUN_00022d5c)
 * Prototype: undefined4 door_process_map_subtile_022d5c(void);
 * Address  : 0x22d5c (Size: 262 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> ariadne_fn_01211a, ariadne_fn_012230
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 door_process_map_subtile_022d5c(void)

{
  int arg_eax;
  uint uval;
  int val;
  int val_2;
  int loop_i;
  ushort *arg_edx;
  int loop_i_2;
  int val_3;
  int val_4;
  uint arg_ebx;
  
  uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  val = *arg_edx - uval;
  loop_i_2 = val >> 0x1f;
  loop_i_2 = (int)((val + loop_i_2 * -0x100) - (uint)(loop_i_2 << 7 < 0)) >> 8;
  val_2 = (int)(*arg_edx + uval) >> 8;
  val = arg_edx[1] - uval;
  val_3 = val >> 0x1f;
  val_3 = (int)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0)) >> 8;
  val = (int)(arg_edx[1] + uval) >> 8;
  if ((arg_ebx & 1) != 0) {
    val_4 = loop_i_2;
    if (*(ushort *)(arg_eax + 0xd) < *arg_edx) {
      val_4 = val_2;
    }
    for (loop_i = val_3 * 0x500 + val_4 * 5; loop_i <= val_4 * 5 + val * 0x500;
        loop_i = loop_i + 0x500) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i) & 0x40) != 0) {
        return 1;
      }
    }
  }
  if ((arg_ebx & 2) != 0) {
    if (arg_edx[1] <= *(ushort *)(arg_eax + 0xf)) {
      val = val_3;
    }
    for (loop_i_2 = loop_i_2 * 5 + val * 0x500; loop_i_2 <= val * 0x500 + val_2 * 5; loop_i_2 = loop_i_2 + 5) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i_2) & 0x40) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : door_process_slabmap_tile_022e62 (Original VA: 0x22e62, Ghidra: FUN_00022e62)
 * Prototype: uint door_process_slabmap_tile_022e62(void);
 * Address  : 0x22e62 (Size: 241 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 2 -> packet_activate_dungeon_special_or_spell, draw_update_slab_subtile_columns_08f924
 * Callees  : 0 -> 
 ******************************************************************************/
uint door_process_slabmap_tile_022e62(void)

{
  char ch;
  byte flag;
  byte flag_2;
  uint arg_eax;
  uint uval;
  int slab_coord;
  uint uval_2;
  byte arg_dl;
  ushort uval_3;
  undefined3 uval_4;
  char arg_bl;
  
  flag = (byte)((ulonglong)(arg_eax & 0xff) / 3);
  flag_2 = (byte)((ulonglong)(uint)arg_dl / 3);
  uval = (uint)(byte)(&g_slabmap_base)[((uint)flag + (uint)flag_2 * 0x55) * 6];
  if ((uval == 0xb) &&
     (slab_coord = ((&g_subtile_to_slab_lut)[arg_eax & 0xff] + (&g_subtile_to_slab_lut)[arg_dl] * 0x55) * 6,
     uval = CONCAT31((int3)((uint)slab_coord >> 8),(&g_slabmap)[slab_coord]) & 0xffffff07,
     (char)uval == arg_bl)) {
    uval = 0;
    while( true ) {
      uval_2 = uval >> 8;
      if (3 < uval_2) break;
      uval_2 = (uint)(byte)(&g_slabmap_base)
                          [((int)*(char *)((int)&g_data_0018b67b + uval_2 * 2 + 3) + (uint)flag +
                           ((int)(char)(&g_data_0018b67f)[uval_2 * 2] + (uint)flag_2) * 0x55) * 6];
      uval_4 = (undefined3)(uval >> 8);
      ch = (char)uval * '\x02';
      uval_3 = (ushort)CONCAT31(uval_4,ch);
      if (((((&g_data_001921cf)[uval_2 * 0x16] == '\x03') || (uval_2 == 0)) || (uval_2 == 2)) ||
         (((uval_2 == 3 || (uval_2 == 1)) || (uval_2 == 0x34)))) {
        uval_3 = (ushort)CONCAT31(uval_4,ch) | 1;
      }
      uval = (uint)CONCAT11((char)(uval_3 >> 8) + '\x01',(char)uval_3);
    }
    return (uint)*(byte *)((uval & 0xff) + 0x179c0c);
  }
  return CONCAT31((int3)(uval >> 8),0xff);
}

/******************************************************************************
 * Function : door_process_slabmap_tile_022f53 (Original VA: 0x22f53, Ghidra: FUN_00022f53)
 * Prototype: undefined8 door_process_slabmap_tile_022f53(void);
 * Address  : 0x22f53 (Size: 146 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> compturn_fn_0225fc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 door_process_slabmap_tile_022f53(void)

{
  char ch;
  int arg_eax;
  undefined4 arg_edx;
  uint uval;
  ushort uval_2;
  uint uval_3;
  undefined3 uval_4;
  
  uval_3 = 0;
  while( true ) {
    uval = uval_3 >> 8;
    if (3 < uval) break;
    uval = (uint)(byte)(&g_slabmap_base)
                        [((int)*(char *)((int)&g_data_0018b67b + uval * 2 + 3) +
                          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
                         ((int)(char)(&g_data_0018b67f)[uval * 2] +
                         (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)]) * 0x55) * 6];
    uval_4 = (undefined3)(uval_3 >> 8);
    ch = (char)uval_3 * '\x02';
    uval_2 = (ushort)CONCAT31(uval_4,ch);
    if (((((&g_data_001921cf)[uval * 0x16] == '\x03') || (uval == 0)) || (uval == 2)) ||
       (((uval == 3 || (uval == 1)) || (uval == 0x34)))) {
      uval_2 = (ushort)CONCAT31(uval_4,ch) | 1;
    }
    uval_3 = (uint)CONCAT11((char)(uval_2 >> 8) + '\x01',(char)uval_2);
  }
  ch = *(char *)((uval_3 & 0xff) + 0x179c0c);
  return CONCAT44(arg_edx,CONCAT31(ch >> 7,ch != -1));
}

/******************************************************************************
 * Function : door_fn_022fe5 (Original VA: 0x22fe5, Ghidra: FUN_00022fe5)
 * Prototype: undefined8 door_fn_022fe5(void);
 * Address  : 0x22fe5 (Size: 47 bytes)
 * Module   : door.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module door.cpp procedure @ 0x022fe5
 * Callers  : 1 -> door_fn_023042
 * Callees  : 1 -> inits_allocate_light_object_043f07
 ******************************************************************************/
undefined8 door_fn_022fe5(void)

{
  int val;
  undefined4 arg_edx;
  
  val = inits_allocate_light_object_043f07();
  if (val != 0) {
    *(undefined1 *)(val + 0xd) = 0x80;
    *(undefined1 *)(val + 0xf) = 0x80;
    *(undefined1 *)(val + 0x12) = 4;
  }
  return CONCAT44(arg_edx,(uint)(val != 0));
}

/******************************************************************************
 * Function : door_fn_023014 (Original VA: 0x23014, Ghidra: FUN_00023014)
 * Prototype: undefined8 door_fn_023014(void);
 * Address  : 0x23014 (Size: 46 bytes)
 * Module   : door.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module door.cpp procedure @ 0x023014
 * Callers  : 1 -> door_remove_keyhole_0230d3
 * Callees  : 2 -> mapwho_process_map_subtile_050d3c, structs_update_creature_control_072af4
 ******************************************************************************/
undefined8 door_fn_023014(void)

{
  int val;
  undefined4 arg_edx;
  
  val = mapwho_process_map_subtile_050d3c();
  if (val != 0) {
    structs_update_creature_control_072af4();
  }
  return CONCAT44(arg_edx,(uint)(val != 0));
}

/******************************************************************************
 * Function : door_fn_023042 (Original VA: 0x23042, Ghidra: FUN_00023042)
 * Prototype: void door_fn_023042(void);
 * Address  : 0x23042 (Size: 145 bytes)
 * Module   : door.cpp [direct_file_string_xref]
 * OrigLine : door.cpp lines 541
 * Purpose  : Module door.cpp procedure @ 0x023042
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 5 -> door_fn_022fe5, panmap_door_flagged_position_063122, routes_fn_0d167c, slab_attempt_dump_an_animating_0d8b7c, LbErrorLog
 ******************************************************************************/
void door_fn_023042(void)

{
  int arg_eax;
  int val;
  
  *(undefined1 *)(arg_eax + 7) = 2;
  g_bss_002ebaf7 = 1;
  *(undefined2 *)(arg_eax + 0x16) = 0;
  *(undefined1 *)(arg_eax + 0x18) = 1;
  slab_attempt_dump_an_animating_0d8b7c(*(undefined1 *)(arg_eax + 6));
  routes_fn_0d167c();
  panmap_door_flagged_position_063122();
  val = door_fn_022fe5();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("door.cpp", line 541, g_log_buf) */
  }
  return;
}

/******************************************************************************
 * Function : door_remove_keyhole_0230d3 (Original VA: 0x230d3, Ghidra: FUN_000230d3)
 * Prototype: void door_remove_keyhole_0230d3(void);
 * Address  : 0x230d3 (Size: 105 bytes)
 * Module   : door.cpp [direct_file_string_xref]
 * OrigLine : door.cpp lines 556
 * Purpose  : String 'Cannot remove keyhole'
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 4 -> door_fn_023014, panmap_door_flagged_position_063122, routes_fn_0d167c, LbErrorLog
 ******************************************************************************/
void door_remove_keyhole_0230d3(void)

{
  int arg_eax;
  int val;
  
  *(undefined1 *)(arg_eax + 0x18) = 0;
  g_bss_002ebaf7 = 1;
  routes_fn_0d167c();
  panmap_door_flagged_position_063122();
  val = door_fn_023014();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("door.cpp", line 556, "Cannot remove keyhole") */
  }
  return;
}

/******************************************************************************
 * Function : door_process_thing_entity_02313c (Original VA: 0x2313c, Ghidra: FUN_0002313c)
 * Prototype: void door_process_thing_entity_02313c(void);
 * Address  : 0x2313c (Size: 212 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_fn_05accc
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void door_process_thing_entity_02313c(void)

{
  uint arg_eax;
  int thing_ptr;
  uint uval;
  uint arg_edx;
  
  if (*(short *)(&g_bss_0033406c + arg_eax * 2) != 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_bss_0033406c + arg_eax * 2)];
    do {
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
      if (thing_ptr == g_thing_ptrs) break;
    } while (((int)*(char *)(thing_ptr + 6) != (arg_edx & 0xff)) || (*(byte *)(thing_ptr + 0x1a) != arg_eax)); /* thing->owner */
    *(undefined2 *)(&g_bss_0033406c + arg_eax * 2) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  }
  uval = g_bss_002e6ef6;
  if (*(short *)(&g_bss_0033406c + arg_eax * 2) == 0) {
    while (thing_ptr = (&g_thing_ptrs)[uval], thing_ptr != g_thing_ptrs) {
      if (((int)*(char *)(thing_ptr + 6) == (arg_edx & 0xff)) && (*(byte *)(thing_ptr + 0x1a) == arg_eax)) { /* thing->owner */
        *(undefined2 *)(&g_bss_0033406c + arg_eax * 2) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        break;
      }
      uval = (uint)*(ushort *)(thing_ptr + 0x67);
    }
  }
  if (*(short *)(&g_bss_0033406c + arg_eax * 2) != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : door_process_thing_entity_023210 (Original VA: 0x23210, Ghidra: FUN_00023210)
 * Prototype: int door_process_thing_entity_023210(void);
 * Address  : 0x23210 (Size: 62 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_update_player_dungeon_055e33
 * Callees  : 0 -> 
 ******************************************************************************/
int door_process_thing_entity_023210(void)

{
  int thing_ptr;
  uint arg_eax;
  uint uval;
  uint3 uval_2;
  byte arg_dl;
  
  uval = g_bss_002e6ef6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    uval_2 = (uint3)((uint)thing_ptr >> 8);
    if (thing_ptr == g_thing_ptrs) {
      return (uint)uval_2 << 8;
    }
    if (((int)*(char *)(thing_ptr + 6) == (uint)arg_dl) && (*(byte *)(thing_ptr + 0x1a) == arg_eax)) break; /* thing->owner */
    uval = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  return CONCAT31(uval_2,1);
}

/******************************************************************************
 * Function : door_update_creature_and_thing_023250 (Original VA: 0x23250, Ghidra: FUN_00023250)
 * Prototype: void door_update_creature_and_thing_023250(void);
 * Address  : 0x23250 (Size: 413 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 11 -> anger_fn_010434, door_update_creature_and_thing_023291, door_process_thing_entity_02347d, door_process_thing_entity_023519, dungeon_update_player_dungeon_0235e8, dungeon_update_player_view_state_0236ad, effect_process_thing_entity_0248e5, effect_allocate_light_effect_024998 ...
 ******************************************************************************/
void door_update_creature_and_thing_023250(void)

{
  int thing_ptr;
  int cctrl_ptr;
  int val;
  undefined2 *local_24;
  int local_20;
  int local_1c;
  
  door_process_thing_entity_023519();
  door_process_thing_entity_02347d();
  dungeon_update_player_dungeon_0235e8();
  dungeon_update_player_view_state_0236ad();
  object_update_player_dungeon_0c4d28();
  gen2_update_player_view_state_037964();
  door_update_creature_and_thing_023291();
  local_20 = 0;
  local_24 = &g_dungeons;
  val = 0;
  do {
    if ((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) {
      for (local_1c = 0; local_1c < (int)(uint)*(byte *)((int)local_24 + 99);
          local_1c = local_1c + 1) {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)local_24 + local_1c * 2 + 0x33)];
        if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
          if (((g_bss_002ed402 != 0) &&
              (cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)], *(int *)(cctrl_ptr + 0x2ef) != 0)) && /* thing->ccontrol_idx */
             (*(uint *)(cctrl_ptr + 0x2ef) <= g_game_turn)) {
            *(undefined4 *)(cctrl_ptr + 0x2ef) = 0;
            cctrl_ptr = effect_process_thing_entity_0248e5();
            if (cctrl_ptr != 0) {
              effect_allocate_light_effect_024998();
              local_1c = local_1c + -1;
              move_fn_0b3b10();
              goto LAB_000247c7;
            }
          }
          if (*(short *)(&g_bss_002e91ef + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6) != 0) {
            anger_fn_010434();
          }
          cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
          thing_ptr = cctrl_ptr + 0x14;
          do {
            if ((*(char *)(cctrl_ptr + 0x1d4) != '\0') && (0 < *(short *)(cctrl_ptr + 0x1d5))) {
              *(short *)(cctrl_ptr + 0x1d5) = *(short *)(cctrl_ptr + 0x1d5) + -1;
            }
            cctrl_ptr = cctrl_ptr + 4;
          } while (cctrl_ptr != thing_ptr);
        }
LAB_000247c7:
      }
    }
    local_24 = local_24 + 0xa84;
    local_20 = local_20 + 1;
    val = val + 0x4ef;
    if (4 < local_20) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : door_update_creature_and_thing_023291 (Original VA: 0x23291, Ghidra: FUN_00023291)
 * Prototype: void door_update_creature_and_thing_023291(void);
 * Address  : 0x23291 (Size: 485 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 2 -> event_fn_0274ad, moodneed_fn_051374
 ******************************************************************************/
void door_update_creature_and_thing_023291(void)

{
  ushort cctrl_ptr;
  int cctrl_ptr_2;
  uint cctrl_ptr_3;
  uint thing_ptr;
  undefined1 *word_ptr;
  char *str_ptr;
  undefined4 auStack_30 [2];
  char acStack_28 [8];
  byte local_20;
  byte local_1c;
  
  g_bss_002ed3e6 = g_bss_002ed3e6 + 1;
  for (local_1c = 0; local_1c < g_bss_002eb542; local_1c = local_1c + 1) {
    thing_ptr = (uint)local_1c;
    if ((((&g_players)[thing_ptr * 0x4ef] & 1) != 0) && ((&g_bss_0019d0f4)[thing_ptr * 0x4ef] == '\x01')) {
      cctrl_ptr = (&g_bss_002e05b6)[thing_ptr * 0xa84];
      *(undefined4 *)(&g_bss_002e1a41 + thing_ptr * 0x1508) = 0;
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
        cctrl_ptr_2 = (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6;
        if (*(short *)(&g_bss_002e91a5 + cctrl_ptr_2) != 0) {
          if (*(short *)(&g_bss_002e19a9 +
                        (uint)*(byte *)(thing_ptr + 0x1a) * 2 + *(char *)(thing_ptr + 6) * 0x1508) == 0) { /* thing->owner */
            cctrl_ptr_3 = ((uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr_2) *
                     (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / 100 /* thing->ccontrol_idx */
                    + (uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr_2);
          }
          else {
            cctrl_ptr_3 = (((uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr_2) *
                      (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                     100 + (uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr_2)) / 2;
          }
          *(uint *)(&g_bss_002e1a41 + (uint)local_1c * 0x1508) =
               *(int *)(&g_bss_002e1a41 + (uint)local_1c * 0x1508) + cctrl_ptr_3;
        }
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
    }
  }
  if (g_bss_002ed3e2 <= g_bss_002ed3e6) {
    moodneed_fn_051374();
    g_bss_002ed3e6 = 0;
    for (thing_ptr = g_bss_002e6eb6; thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
        thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
      if ((((int)*(char *)(thing_ptr + 6) != (uint)g_neutral_player_number) && /* thing->owner */
          ((int)*(char *)(thing_ptr + 6) != (uint)g_bss_002eb542)) && /* thing->owner */
         (*(short *)(&g_bss_002e91a5 + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6) != 0)) {
        cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
        if (*(char *)(cctrl_ptr_2 + 0x49) == '\0') {
          *(char *)(cctrl_ptr_2 + 0x48) = *(char *)(cctrl_ptr_2 + 0x48) + '\x01';
          acStack_28[*(char *)(thing_ptr + 6)] = '\x01'; /* thing->owner */
        }
        else {
          *(char *)(cctrl_ptr_2 + 0x49) = *(char *)(cctrl_ptr_2 + 0x49) + -1;
        }
      }
    }
    str_ptr = acStack_28;
    for (local_20 = 0; thing_ptr = (uint)local_20, thing_ptr < 5; local_20 = local_20 + 1) {
      word_ptr = str_ptr;
      if (acStack_28[thing_ptr] != '\0') {
        word_ptr = str_ptr + -4;
        *(undefined4 *)(str_ptr + -4) = *(undefined4 *)(&g_bss_002e1a41 + thing_ptr * 0x1508);
        *(undefined4 *)(str_ptr + -8) = 0x23474;
        event_fn_0274ad();
      }
      str_ptr = word_ptr;
    }
  }
  return;
}

/******************************************************************************
 * Function : door_fn_023476 (Original VA: 0x23476, Ghidra: FUN_00023476)
 * Prototype: void door_fn_023476(void);
 * Address  : 0x23476 (Size: 7 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Module door.cpp procedure @ 0x023476
 * Callers  : 1 -> dungeon_update_player_dungeon_023a48
 * Callees  : 0 -> 
 ******************************************************************************/
void door_fn_023476(void)

{
  return;
}

/******************************************************************************
 * Function : door_process_thing_entity_02347d (Original VA: 0x2347d, Ghidra: FUN_0002347d)
 * Prototype: void door_process_thing_entity_02347d(void);
 * Address  : 0x2347d (Size: 156 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 3 -> event_fn_0275c1, update_update_player_dungeon_0dd6c8, LbPaletteSet
 ******************************************************************************/
void door_process_thing_entity_02347d(void)

{
  uint uval;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int val;
  int extraout_EDX;
  int extraout_EDX_00;
  int val_2;
  
  uval = 0;
  val_2 = 0;
  val = 0;
  do {
    if ((((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
        ((*(short *)((int)&g_dungeons + val_2) == 0 ||
         (*(char *)((&g_thing_ptrs)[*(ushort *)((int)&g_dungeons + val_2)] + 7) == '\x03')))) &&
       ((&g_bss_0019d0f1)[val] == '\0')) {
      event_fn_0275c1();
      update_update_player_dungeon_0dd6c8();
      uval = extraout_ECX;
      val = extraout_EDX;
      if (extraout_ECX == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        LbPaletteSet(g_display_palette);
        uval = extraout_ECX_00;
        val = extraout_EDX_00;
      }
    }
    val_2 = val_2 + 0x1508;
    uval = uval + 1;
    val = val + 0x4ef;
  } while ((int)uval < 5);
  return;
}

/******************************************************************************
 * Function : door_process_thing_entity_023519 (Original VA: 0x23519, Ghidra: FUN_00023519)
 * Prototype: void door_process_thing_entity_023519(void);
 * Address  : 0x23519 (Size: 207 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 1 -> update_update_player_dungeon_0dd500
 ******************************************************************************/
void door_process_thing_entity_023519(void)

{
  bool flag;
  int val;
  int val_2;
  int val_3;
  int loop_i;
  int local_18;
  
  if ((g_game_system_flags & 1) != 0) {
    val = 0;
    for (loop_i = 0; loop_i < 5; loop_i = loop_i + 1) {
      if (((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
         ((&g_bss_0019d0f1)[val] == '\0')) {
        flag = true;
        val_3 = 0;
        val_2 = 0;
        for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
          if (((((&g_players)[val_3] & 1) != 0) && ((&g_bss_0019d0f4)[val_3] == '\x01')) &&
             ((loop_i != local_18 &&
              ((*(short *)((int)&g_dungeons + val_2) != 0 &&
               (*(char *)((&g_thing_ptrs)[*(ushort *)((int)&g_dungeons + val_2)] + 7) != '\x03')))
              ))) {
            flag = false;
            break;
          }
          val_3 = val_3 + 0x4ef;
          val_2 = val_2 + 0x1508;
        }
        if (flag) {
          update_update_player_dungeon_0dd500();
          return;
        }
      }
      val = val + 0x4ef;
    }
  }
  return;
}

