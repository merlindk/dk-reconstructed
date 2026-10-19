/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: impset.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 70
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : impset_process_slabmap_tile_03aef2 (Original VA: 0x3aef2, Ghidra: FUN_0003aef2)
 * Prototype: undefined4 impset_process_slabmap_tile_03aef2(void);
 * Address  : 0x3aef2 (Size: 89 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 10 -> impset_fn_03cf87, impset_fn_03d155, impset_fn_03d2d5, impset_fn_03d37a, impset_stack_type_03d3f3, impset_stack_type_03e493, impset_fn_03f3f7, impset_update_creature_control_03f42b ...
 * Callees  : 2 -> heapmgr_process_map_subtile_03ae40, imptool_fn_03f80c
 ******************************************************************************/
undefined4 impset_process_slabmap_tile_03aef2(void)

{
  int val;
  int arg_edx;
  int arg_ebx;
  
  if ((&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] == '\n') {
    val = imptool_fn_03f80c(arg_edx * 3 + 1);
    if (val != 0) {
      val = heapmgr_process_map_subtile_03ae40();
      if (val == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_slab_subtile_columns_03af4b (Original VA: 0x3af4b, Ghidra: FUN_0003af4b)
 * Prototype: undefined4 impset_update_slab_subtile_columns_03af4b(void);
 * Address  : 0x3af4b (Size: 341 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 8 -> impset_fn_03cd63, impset_fn_03cee2, impset_fn_03d02c, impset_fn_03d0cf, impset_stack_type_03d3f3, impset_stack_type_03e493, impset_fn_03f4c0, impset_update_creature_control_03f4f4
 * Callees  : 2 -> heapmgr_process_map_subtile_03ae99, imptool_fn_03f80c
 ******************************************************************************/
undefined4 impset_update_slab_subtile_columns_03af4b(void)

{
  int arg_eax;
  int val;
  uint slab_coord;
  int arg_edx;
  uint uval;
  int arg_ebx;
  uint player_off;
  int val_2;
  
  val = arg_edx * 3 + 1;
  uval = (uint)*(char *)(arg_eax + 6);
  slab_coord = (uint)((&g_slabmap)
                 [((&g_subtile_to_slab_lut)[val] + (&g_data_0019033f)[arg_ebx * 3] * 0x55) * 6] & 7);
  val_2 = arg_ebx * 3 + 1;
  if (slab_coord != uval) {
    if (((((slab_coord < g_bss_002eb542) && (player_off = (uint)g_neutral_player_number, slab_coord != player_off)) &&
         (uval != player_off)) &&
        ((((uint)(byte)(&g_player_view_flags)[slab_coord * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f)) != 0 &&
         (uval != player_off)))) &&
       ((slab_coord != player_off &&
        (((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] &
         1 << ((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_data_0019033f)[arg_ebx * 3] * 0x55) * 6]
              & 7)) != 0)))) {
      return 0;
    }
    if ((((&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] == '\v') ||
        (((uint)(byte)(&g_bss_002d33c8)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6]
          * 0x45 != 0 &&
         (*(short *)(&g_room_slabs_count +
                    (uint)(byte)(&g_bss_002d33c8)
                                [((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6] *
                    0x45) != 7)))) &&
       (((*(uint *)((int)&g_map_subtiles + (val_2 * 0x100 + val) * 5 + 1) >> 0x1c &
         1 << (*(byte *)(arg_eax + 6) & 0x1f)) != 0 &&
        ((val = imptool_fn_03f80c(), val != 0 && (val = heapmgr_process_map_subtile_03ae99(), val == 0)))))) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_process_map_subtile_03b0a0 (Original VA: 0x3b0a0, Ghidra: FUN_0003b0a0)
 * Prototype: undefined4 impset_process_map_subtile_03b0a0(void);
 * Address  : 0x3b0a0 (Size: 140 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 8 -> impset_update_creature_control_03d9f3, impset_update_creature_control_03db27, impset_update_creature_control_03dc2a, impset_update_creature_control_03dd25, impset_update_creature_control_03de04, impset_stack_type_03e493, impset_fn_03f12c, instance_update_creature_control_04bf40
 * Callees  : 2 -> imptool_fn_03f80c, imptool_update_player_dungeon_040160
 ******************************************************************************/
undefined4 impset_process_map_subtile_03b0a0(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  
  if ((((&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] == '\x02') ||
      ((&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] == '\x03')) &&
     ((*(uint *)((int)&g_map_subtiles + ((arg_ebx * 3 + 1) * 0x100 + arg_edx * 3 + 1) * 5 + 1) >>
       0x1c & 1 << (*(byte *)(arg_eax + 6) & 0x1f)) != 0)) {
    val = imptool_fn_03f80c();
    if (val != 0) {
      val = imptool_update_player_dungeon_040160();
      if (val == -1) {
        return 1;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_process_map_subtile_03b12c (Original VA: 0x3b12c, Ghidra: FUN_0003b12c)
 * Prototype: uint impset_process_map_subtile_03b12c(void);
 * Address  : 0x3b12c (Size: 83 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_stack_type_03e493
 * Callees  : 0 -> 
 ******************************************************************************/
uint impset_process_map_subtile_03b12c(void)

{
  int arg_eax;
  uint thing_ptr;
  int arg_edx;
  int arg_ebx;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6))) && /* thing->owner, thing->class_id */
        (*(char *)(thing_ptr + 7) == 'C')) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) break;
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : impset_process_map_subtile_03b17f (Original VA: 0x3b17f, Ghidra: FUN_0003b17f)
 * Prototype: uint impset_process_map_subtile_03b17f(void);
 * Address  : 0x3b17f (Size: 99 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_stack_type_03e493
 * Callees  : 1 -> creature_fn_081e5c
 ******************************************************************************/
uint impset_process_map_subtile_03b17f(void)

{
  int arg_edx;
  uint thing_ptr;
  int arg_ebx;
  undefined8 uval;
  
  thing_ptr = (&g_thing_ptrs)
          [(*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb]
  ;
  do {
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((*(char *)(thing_ptr + 0x1f) == '\x04') && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && /* thing->class_id */
        (*(char *)(thing_ptr + 7) == '\x02')) && (*(char *)(thing_ptr + 0x14) == '\0')) {
      uval = creature_fn_081e5c();
      thing_ptr = (uint)((ulonglong)uval >> 0x20);
      if ((int)uval != 0) {
        return thing_ptr;
      }
    }
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
  } while( true );
}

/******************************************************************************
 * Function : impset_update_slab_subtile_columns_03b1e2 (Original VA: 0x3b1e2, Ghidra: FUN_0003b1e2)
 * Prototype: byte * impset_update_slab_subtile_columns_03b1e2(void);
 * Address  : 0x3b1e2 (Size: 129 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> impset_stack_type_03e493
 * Callees  : 2 -> object_handle_object_thing_0c6574, object_handle_object_thing_0c688c
 ******************************************************************************/
byte * impset_update_slab_subtile_columns_03b1e2(void)

{
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  int subtile_x;
  uint uval;
  byte *byte_ptr;
  int subtile_y;
  undefined8 uval_2;
  
  if ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[subtile_y] * 0x55 + (&g_subtile_to_slab_lut)[subtile_x]) * 6] & 7)
      == (int)*(char *)(arg_eax + 6)) {
    uval = (*(uint *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5 + 1) & 0x3fffff) >> 0xb
    ;
    while (g_thing_ptrs < (&g_thing_ptrs)[uval]) {
      uval_2 = object_handle_object_thing_0c6574();
      byte_ptr = (byte *)((ulonglong)uval_2 >> 0x20);
      val = extraout_ECX;
      if ((int)uval_2 == 0) {
        uval_2 = object_handle_object_thing_0c688c();
        byte_ptr = (byte *)((ulonglong)uval_2 >> 0x20);
        val = extraout_ECX_00;
        if ((int)uval_2 != 0) goto LAB_0003b24c;
      }
      else {
LAB_0003b24c:
        if ((byte_ptr[6] != *(byte *)(val + 6)) && ((*byte_ptr & 0x80) == 0)) {
          return byte_ptr;
        }
      }
      uval = (uint)*(ushort *)(byte_ptr + 2);
    }
  }
  return (byte *)0x0;
}

/******************************************************************************
 * Function : impset_process_map_subtile_03b263 (Original VA: 0x3b263, Ghidra: FUN_0003b263)
 * Prototype: int impset_process_map_subtile_03b263(void);
 * Address  : 0x3b263 (Size: 93 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_stack_type_03e493
 * Callees  : 1 -> object_handle_object_thing_0c65c8
 ******************************************************************************/
int impset_process_map_subtile_03b263(void)

{
  int extraout_ECX;
  int arg_edx;
  uint uval;
  int val;
  int arg_ebx;
  undefined8 uval_2;
  
  uval = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    if ((&g_thing_ptrs)[uval] <= g_thing_ptrs) {
      return 0;
    }
    uval_2 = object_handle_object_thing_0c65c8();
    val = (int)((ulonglong)uval_2 >> 0x20);
    if (((int)uval_2 != 0) &&
       (((*(char *)(val + 6) == *(char *)(extraout_ECX + 6) ||
         ((int)*(char *)(val + 6) == (uint)g_neutral_player_number)) && ((*(byte *)(val + 1) & 1) == 0))))
    break;
    uval = (uint)*(ushort *)(val + 2);
  }
  return val;
}

/******************************************************************************
 * Function : impset_process_thing_entity_03b30e (Original VA: 0x3b30e, Ghidra: FUN_0003b30e)
 * Prototype: uint impset_process_thing_entity_03b30e(void);
 * Address  : 0x3b30e (Size: 78 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> impset_stack_type_03e493
 * Callees  : 1 -> imptool_update_creature_and_thing_03f98b
 ******************************************************************************/
uint impset_process_thing_entity_03b30e(void)

{
  int arg_eax;
  uint extraout_ECX;
  uint arg_edx;
  uint thing_ptr;
  undefined8 uval;
  
  thing_ptr = g_bss_002e6eee;
  do {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (((*(byte *)(thing_ptr + 0x1a) == arg_edx) && (*(char *)(thing_ptr + 6) == *(char *)(arg_eax + 6))) && /* thing->owner */
       (*(char *)(thing_ptr + 0x13) == '\0')) { /* thing->anim_sprite */
      uval = imptool_update_creature_and_thing_03f98b();
      thing_ptr = (uint)((ulonglong)uval >> 0x20);
      arg_edx = extraout_ECX;
      if ((int)uval == 0) {
        return thing_ptr;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  } while( true );
}

/******************************************************************************
 * Function : impset_process_map_subtile_03b35c (Original VA: 0x3b35c, Ghidra: FUN_0003b35c)
 * Prototype: uint impset_process_map_subtile_03b35c(void);
 * Address  : 0x3b35c (Size: 69 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_stack_type_03e493
 * Callees  : 1 -> object_fn_0c57a4
 ******************************************************************************/
uint impset_process_map_subtile_03b35c(void)

{
  int arg_edx;
  uint thing_ptr;
  int arg_ebx;
  undefined8 uval;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  do {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(char *)(thing_ptr + 0x1f) == '\x01') { /* thing->class_id */
      uval = object_fn_0c57a4();
      thing_ptr = (uint)((ulonglong)uval >> 0x20);
      if ((int)uval != 0) {
        return thing_ptr;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  } while( true );
}

/******************************************************************************
 * Function : impset_process_map_subtile_03bcbe (Original VA: 0x3bcbe, Ghidra: FUN_0003bcbe)
 * Prototype: undefined4 impset_process_map_subtile_03bcbe(void);
 * Address  : 0x3bcbe (Size: 243 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 3 -> heapmgr_fn_03b429, creature_fn_081e5c, room_process_dungeon_room_0ca7ac
 ******************************************************************************/
undefined4 impset_process_map_subtile_03bcbe(void)

{
  int arg_eax;
  int val;
  int player_off;
  int arg_edx;
  uint thing_ptr;
  int local_18;
  
  val = room_process_dungeon_room_0ca7ac();
  thing_ptr = g_bss_002e6ed6;
  local_18 = arg_edx;
  if (*(short *)(arg_eax + 0x21) != 0) {
    for (; ((thing_ptr = (&g_thing_ptrs)[thing_ptr], *(int *)(arg_eax + 0x116f) < 0x40 && (local_18 != 0)) &&
           (g_thing_ptrs < thing_ptr)); thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
      if ((((*(byte *)(thing_ptr + 1) & 1) == 0) && (*(char *)(thing_ptr + 7) == '\x02')) &&
         ((*(char *)(thing_ptr + 0x14) == '\0' && (player_off = creature_fn_081e5c(), player_off != 0)))) {
        if (val == 0) {
          if ((int)*(char *)(arg_eax + 0xe9f) ==
              (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
            moodneed_fn_051374();
          }
          return 0;
        }
        if ((*(uint *)((int)&g_map_subtiles +
                      (uint)CONCAT11(*(undefined1 *)(thing_ptr + 0x10),*(undefined1 *)(thing_ptr + 0xe)) * 5
                      + 1) >> 0x1c & 1 << (*(byte *)(arg_eax + 0xe9f) & 0x1f)) != 0) {
          local_18 = local_18 + -1;
          heapmgr_fn_03b429();
        }
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : impset_process_slabmap_tile_03bdb1 (Original VA: 0x3bdb1, Ghidra: FUN_0003bdb1)
 * Prototype: undefined4 impset_process_slabmap_tile_03bdb1(void);
 * Address  : 0x3bdb1 (Size: 276 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 5 -> heapmgr_fn_03b429, moodneed_fn_051374, object_handle_object_thing_0c6574, object_handle_object_thing_0c688c, room_process_dungeon_room_0ca65c
 ******************************************************************************/
undefined4 impset_process_slabmap_tile_03bdb1(void)

{
  int arg_eax;
  int val;
  int val_2;
  byte *extraout_ECX;
  byte *byte_ptr;
  uint uval;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  int arg_edx;
  
  val = room_process_dungeon_room_0ca65c();
  uval = g_bss_002e6ec6;
  if (*(short *)(arg_eax + 0x11) != 0) {
    while (((*(int *)(arg_eax + 0x116f) < 0x40 && (arg_edx != 0)) &&
           (g_thing_ptrs < (&g_thing_ptrs)[uval]))) {
      val_2 = object_handle_object_thing_0c6574();
      byte_ptr = extraout_ECX_00;
      if (((val_2 != 0) || (val_2 = object_handle_object_thing_0c688c(), byte_ptr = extraout_ECX_01, val_2 != 0)) &&
         ((byte_ptr[6] != *(byte *)(arg_eax + 0xe9f) && ((*byte_ptr & 0x80) == 0)))) {
        if ((uint)((&g_slabmap)
                   [((&g_subtile_to_slab_lut)[byte_ptr[0xe]] + (&g_subtile_to_slab_lut)[byte_ptr[0x10]] * 0x55) * 6] & 7)
            == (int)*(char *)(arg_eax + 0xe9f)) {
          if (val == 0) {
            if ((int)*(char *)(arg_eax + 0xe9f) ==
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
              moodneed_fn_051374();
            }
            return 0;
          }
          arg_edx = arg_edx + -1;
          heapmgr_fn_03b429((&g_subtile_to_slab_lut)[byte_ptr[0x10]] * 0x55,val,(uint)byte_ptr[0xe]);
          byte_ptr = extraout_ECX;
        }
      }
      uval = (uint)*(ushort *)(byte_ptr + 0x67);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : impset_process_slabmap_tile_03bec5 (Original VA: 0x3bec5, Ghidra: FUN_0003bec5)
 * Prototype: undefined4 impset_process_slabmap_tile_03bec5(void);
 * Address  : 0x3bec5 (Size: 132 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> impset_process_thing_entity_03bf49
 * Callees  : 1 -> heapmgr_fn_03b429
 ******************************************************************************/
undefined4 impset_process_slabmap_tile_03bec5(void)

{
  int arg_eax;
  uint thing_ptr;
  int arg_edx;
  
  thing_ptr = g_bss_002e6ec6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(char *)(thing_ptr + 0x1a) == (&g_data_00191160)[*(byte *)(arg_edx + 0x1a)]) break;
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  if ((uint)((&g_slabmap)
             [((&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] +
              (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] * 0x55) * 6] & 7) ==
      (int)*(char *)(arg_eax + 0xe9f)) {
    heapmgr_fn_03b429();
  }
  return 1;
}

/******************************************************************************
 * Function : impset_process_thing_entity_03bf49 (Original VA: 0x3bf49, Ghidra: FUN_0003bf49)
 * Prototype: undefined4 impset_process_thing_entity_03bf49(void);
 * Address  : 0x3bf49 (Size: 91 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 1 -> impset_process_slabmap_tile_03bec5
 ******************************************************************************/
undefined4 impset_process_thing_entity_03bf49(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_edx;
  uint thing_ptr;
  
  for (thing_ptr = g_bss_002e6eee;
      ((thing_ptr = (&g_thing_ptrs)[thing_ptr], *(int *)(arg_eax + 0x116f) < 0x40 && (arg_edx != 0)) &&
      (g_thing_ptrs < thing_ptr)); thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
    if ((*(char *)(thing_ptr + 0x13) == '\0') && (*(char *)(thing_ptr + 6) == *(char *)(arg_eax + 0xe9f))) { /* thing->owner, thing->anim_sprite */
      val = impset_process_slabmap_tile_03bec5();
      arg_eax = extraout_ECX;
      if (val != 0) {
        arg_edx = arg_edx + -1;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : impset_process_slabmap_tile_03bfa4 (Original VA: 0x3bfa4, Ghidra: FUN_0003bfa4)
 * Prototype: undefined8 impset_process_slabmap_tile_03bfa4(void);
 * Address  : 0x3bfa4 (Size: 242 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 4 -> heapmgr_fn_03b429, object_handle_object_thing_0c65c8, room_process_dungeon_room_0ca65c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 impset_process_slabmap_tile_03bfa4(void)

{
  int gui_btn;
  int val;
  int val_2;
  uint thing_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 arg_edx;
  
  val = room_process_dungeon_room_0ca65c();
  if ((*(short *)(gui_btn + 0x1b) != 0) && (thing_ptr = g_bss_002e6ec6, val != 0)) { /* gui_btn->id_num */
    while ((*(int *)(gui_btn + 0x116f) < 0x40 && (g_thing_ptrs < (&g_thing_ptrs)[thing_ptr]))) {
      val_2 = object_handle_object_thing_0c65c8();
      val = extraout_ECX;
      if ((((val_2 != 0) && ((*(byte *)(extraout_ECX + 1) & 1) == 0)) &&
          ((*(char *)(extraout_ECX + 6) == *(char *)(gui_btn + 0xe9f) ||
           ((int)*(char *)(extraout_ECX + 6) == (uint)g_neutral_player_number)))) &&
         (((uint)((&g_slabmap)
                  [((&g_subtile_to_slab_lut)[*(byte *)(extraout_ECX + 0xe)] +
                   (&g_subtile_to_slab_lut)[*(byte *)(extraout_ECX + 0x10)] * 0x55) * 6] & 7) ==
           (int)*(char *)(gui_btn + 0xe9f) &&
          ((val_2 = room_update_slab_subtile_columns_0d0f50(), val_2 == 0 ||
           (val = extraout_ECX_00, *(short *)(val_2 + 10) != 8)))))) {
        heapmgr_fn_03b429();
        val = extraout_ECX_01;
      }
      thing_ptr = (uint)*(ushort *)(val + 0x67);
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_update_slab_subtile_columns_03c096 (Original VA: 0x3c096, Ghidra: FUN_0003c096)
 * Prototype: undefined4 impset_update_slab_subtile_columns_03c096(void);
 * Address  : 0x3c096 (Size: 232 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 2 -> heapmgr_fn_03b429, imptool_fn_03fc88
 ******************************************************************************/
undefined4 impset_update_slab_subtile_columns_03c096(void)

{
  int arg_eax;
  uint uval;
  int slab_coord;
  int arg_edx;
  int val;
  int local_1c;
  int local_18;
  
  val = arg_eax;
  local_1c = arg_edx;
  for (local_18 = 0;
      ((*(int *)(arg_eax + 0x116f) < 0x40 && (local_1c != 0)) &&
      (local_18 < (int)(uint)*(ushort *)(arg_eax + 0xaf7))); local_18 = local_18 + 1) {
    if ((*(char *)(val + 0xb0b) != '\0') && (*(char *)(val + 0xb0b) != '\x03')) {
      uval = (uint)*(ushort *)(val + 0xb0c);
      if ((*(uint *)((int)&g_map_subtiles + (((int)uval >> 8) * 0x100 + uval % 0x100) * 5 + 1) >>
           0x1c & 1 << (*(byte *)(arg_eax + 0xe9f) & 0x1f)) != 0) {
        slab_coord = imptool_fn_03fc88(uval,(&g_subtile_to_slab_lut)[(int)uval >> 8],(&g_subtile_to_slab_lut)[uval % 0x100]);
        if (slab_coord != 0) {
          local_1c = local_1c + -1;
          heapmgr_fn_03b429();
        }
      }
    }
    val = val + 3;
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_slab_subtile_columns_03c17e (Original VA: 0x3c17e, Ghidra: FUN_0003c17e)
 * Prototype: undefined8 impset_update_slab_subtile_columns_03c17e(void);
 * Address  : 0x3c17e (Size: 267 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 3 -> heapmgr_fn_03b429, object_fn_0c57a4, room_process_dungeon_room_0ca8c0
 ******************************************************************************/
undefined8 impset_update_slab_subtile_columns_03c17e(void)

{
  byte *thing_ptr;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  uint uval;
  
  val = room_process_dungeon_room_0ca8c0();
  uval = g_bss_002e6ec6;
  if (val != 0) {
    while ((thing_ptr = (&g_thing_ptrs)[uval], *(int *)(arg_eax + 0x116f) < 0x40 &&
           (g_thing_ptrs < thing_ptr))) {
      if ((thing_ptr[0x1f] == 1) &&
         ((((*thing_ptr & 0x10) == 0 && ((thing_ptr[1] & 2) == 0)) && (val = object_fn_0c57a4(), val != 0)
          ))) {
        if (((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(thing_ptr[0x10],thing_ptr[0xe]) * 5 + 1) >>
              0x1c & 1 << (*(byte *)(arg_eax + 0xe9f) & 0x1f)) != 0) &&
           (((uint)((&g_slabmap)
                    [((&g_subtile_to_slab_lut)[thing_ptr[0xe]] + (&g_subtile_to_slab_lut)[thing_ptr[0x10]] * 0x55) * 6] & 7)
             == (int)*(char *)(arg_eax + 0xe9f) ||
            (((&g_slabmap)
              [((&g_subtile_to_slab_lut)[thing_ptr[0xe]] + (&g_subtile_to_slab_lut)[thing_ptr[0x10]] * 0x55) * 6] & 7) ==
             g_neutral_player_number)))) {
          heapmgr_fn_03b429();
        }
      }
      uval = (uint)*(ushort *)(thing_ptr + 0x67);
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_update_player_dungeon_03c289 (Original VA: 0x3c289, Ghidra: FUN_0003c289)
 * Prototype: longlong impset_update_player_dungeon_03c289(void);
 * Address  : 0x3c289 (Size: 145 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> impset_update_creature_control_03df64, impset_update_creature_control_03e286
 * Callees  : 10 -> heapmgr_fn_03b3e9, heapmgr_process_map_subtile_03b643, heapmgr_fn_03bb5e, heapmgr_process_map_subtile_03bb93, impset_process_map_subtile_03bcbe, impset_process_slabmap_tile_03bdb1, impset_process_thing_entity_03bf49, impset_process_slabmap_tile_03bfa4 ...
 ******************************************************************************/
longlong impset_update_player_dungeon_03c289(void)

{
  int arg_eax;
  uint arg_edx;
  
  if (0x7f < (uint)(g_game_turn - *(int *)(&g_bss_002e16f4 + *(char *)(arg_eax + 6) * 0x1508))) {
    heapmgr_fn_03b3e9();
    heapmgr_process_map_subtile_03bb93();
    impset_process_map_subtile_03bcbe();
    impset_process_slabmap_tile_03bdb1();
    impset_process_thing_entity_03bf49();
    impset_update_slab_subtile_columns_03c096();
    heapmgr_process_map_subtile_03b643();
    impset_update_slab_subtile_columns_03c17e();
    impset_process_slabmap_tile_03bfa4();
    heapmgr_fn_03bb5e();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03c31c (Original VA: 0x3c31c, Ghidra: FUN_0003c31c)
 * Prototype: undefined4 impset_update_creature_and_thing_03c31c(void);
 * Address  : 0x3c31c (Size: 203 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_process_thing_entity_03c3e7
 * Callees  : 2 -> imptool_update_creature_and_thing_03f8e8, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_update_creature_and_thing_03c31c(void)

{
  char ch;
  int cctrl_ptr;
  short short_val;
  int thing;
  int val;
  int arg_edx;
  uint thing_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  ch = (&g_data_00191160)[*(byte *)(arg_edx + 0x1a)];
  thing_ptr = g_bss_002e6ec6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((*(char *)(thing_ptr + 0x1a) == ch) &&
         ((uint)((&g_slabmap)
                 [((&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] +
                  (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] * 0x55) * 6] & 7) ==
          (int)*(char *)(thing + 6))) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && /* thing->owner */
       ((val = imptool_update_creature_and_thing_03f8e8(), val == 0 && (short_val = move_update_creature_control_0b3b58(), short_val != 0)))) break;
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  *(undefined1 *)(thing + 8) = 0xb; /* thing->active_state */
  *(undefined2 *)(cctrl_ptr + 0x72) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  *(undefined2 *)(cctrl_ptr + 0x70) = *(undefined2 *)(arg_edx + 0x1b);
  return 1;
}

/******************************************************************************
 * Function : impset_process_thing_entity_03c3e7 (Original VA: 0x3c3e7, Ghidra: FUN_0003c3e7)
 * Prototype: undefined4 impset_process_thing_entity_03c3e7(void);
 * Address  : 0x3c3e7 (Size: 113 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 3 -> impset_update_creature_and_thing_03c31c, imptool_update_creature_and_thing_03f98b, update_fn_0dc440
 ******************************************************************************/
undefined4 impset_process_thing_entity_03c3e7(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_edx;
  uint thing_ptr;
  
  thing_ptr = g_bss_002e6eee;
  do {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((*(char *)(thing_ptr + 0x13) == '\0') && (*(char *)(thing_ptr + 6) == *(char *)(arg_eax + 6))) { /* thing->owner, thing->anim_sprite */
      if (-1 < arg_edx) {
        val = update_fn_0dc440();
        arg_eax = extraout_ECX;
        if (arg_edx <= val) goto LAB_0003c3fa;
      }
      val = imptool_update_creature_and_thing_03f98b();
      arg_eax = extraout_ECX_00;
      if (val == 0) {
        val = impset_update_creature_and_thing_03c31c();
        arg_eax = extraout_ECX_01;
        if (val != 0) {
          return 1;
        }
      }
    }
LAB_0003c3fa:
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  } while( true );
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03c458 (Original VA: 0x3c458, Ghidra: FUN_0003c458)
 * Prototype: undefined8 impset_update_creature_and_thing_03c458(void);
 * Address  : 0x3c458 (Size: 226 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 5 -> heapmgr_process_thing_entity_03b2c0, imptool_update_creature_and_thing_03f8e8, move_update_creature_control_0b3b58, object_handle_object_thing_0c659c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 impset_update_creature_and_thing_03c458(void)

{
  int cctrl_ptr;
  short short_val;
  int thing;
  int val;
  int val_2;
  int val_3;
  undefined4 uval;
  undefined4 arg_edx;
  uint thing_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 8)) &&
     (thing_ptr = g_bss_002e6ec6, *(char *)(val + 3) == *(char *)(thing + 6))) { /* thing->owner */
    for (; thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
        thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
      val_2 = object_handle_object_thing_0c659c();
      if ((((val_2 != 0) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) &&
          ((val_2 = room_update_slab_subtile_columns_0d0f50(), val_2 == val &&
           ((val_2 = heapmgr_process_thing_entity_03b2c0(), val_2 != 0 && (val_3 = imptool_update_creature_and_thing_03f8e8(), val_3 == 0)))))) &&
         (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
        *(undefined1 *)(thing + 8) = 0xb; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x72) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        *(undefined2 *)(cctrl_ptr + 0x70) = *(undefined2 *)(val_2 + 0x1b);
        uval = 1;
        goto LAB_0003d776;
      }
    }
  }
  uval = 0;
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03c53a (Original VA: 0x3c53a, Ghidra: FUN_0003c53a)
 * Prototype: undefined4 impset_update_creature_and_thing_03c53a(void);
 * Address  : 0x3c53a (Size: 552 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 10 -> event_fn_0274ad, heapmgr_process_thing_entity_03b2c0, imptool_update_creature_and_thing_03f8e8, moodneed_fn_051374, move_update_creature_control_0b3b58, object_handle_object_thing_0c65c8, room_process_dungeon_room_0ca65c, room_process_dungeon_room_0ca6bc ...
 ******************************************************************************/
undefined4 impset_update_creature_and_thing_03c53a(void)

{
  int cctrl_ptr;
  short short_val;
  int thing;
  int val;
  int arg_edx;
  uint thing_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(&g_bss_002e05a4 + *(char *)(thing + 6) * 0x1508) != 0) { /* thing->owner */
    for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6]; g_thing_ptrs < thing_ptr;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
      val = object_handle_object_thing_0c65c8();
      if ((((val != 0) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) &&
          ((uint)((&g_slabmap)
                  [((&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] +
                   (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] * 0x55) * 6] & 7) ==
           (int)*(char *)(thing + 6))) && /* thing->owner */
         (((val = room_update_slab_subtile_columns_0d0f50(), val == 0 || (*(short *)(val + 10) != 8)) &&
          ((arg_edx < 0 || (val = update_fn_0dc440(), val < arg_edx)))))) {
        val = heapmgr_process_thing_entity_03b2c0();
        if (val == 0) {
          val = room_process_dungeon_room_0ca6bc();
          if (val == 0) {
            if ((((&g_bss_002e150f)[*(char *)(thing + 6) * 0x1508] != '\0') && /* thing->owner */
                ((int)*(char *)(thing + 6) == /* thing->owner */
                 (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) &&
               (val = room_process_dungeon_room_0ca65c(), val == 0)) {
              moodneed_fn_051374();
            }
          }
          else {
            val = room_update_slab_subtile_columns_0d0f50();
            if ((((val == 0) || (*(short *)(val + 10) != 8)) &&
                (val = imptool_update_creature_and_thing_03f8e8(), val == 0)) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
              if (((&g_data_001911f3)[*(byte *)(thing_ptr + 0x1a)] == '\b') ||
                 ((&g_data_001911f3)[*(byte *)(thing_ptr + 0x1a)] == '\t')) {
                event_fn_0274ad(*(undefined2 *)(thing_ptr + 0x1b)); /* thing->index_or_angle */
              }
              *(undefined1 *)(thing + 8) = 0xd; /* thing->active_state */
              *(undefined2 *)(cctrl_ptr + 0x72) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
              return 1;
            }
          }
        }
        else {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            *(undefined1 *)(thing + 8) = 0xb; /* thing->active_state */
            *(undefined2 *)(cctrl_ptr + 0x72) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
            *(undefined2 *)(cctrl_ptr + 0x70) = *(undefined2 *)(val + 0x1b);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03c762 (Original VA: 0x3c762, Ghidra: FUN_0003c762)
 * Prototype: undefined4 impset_update_creature_and_thing_03c762(void);
 * Address  : 0x3c762 (Size: 441 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 9 -> event_fn_0274ad, impset_update_creature_and_thing_03fad0, moodneed_fn_051374, move_update_creature_control_0b3b58, object_handle_object_thing_0c6574, object_handle_object_thing_0c688c, room_process_dungeon_room_0ca65c, room_process_dungeon_room_0ca6bc ...
 ******************************************************************************/
undefined4 impset_update_creature_and_thing_03c762(void)

{
  short short_val;
  int thing;
  int val;
  int val_2;
  int cctrl_ptr;
  int arg_edx;
  byte *thing_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(&g_bss_002e059a + *(char *)(thing + 6) * 0x1508) != 0) { /* thing->owner */
    val = room_process_dungeon_room_0ca6bc();
    if (val == 0) {
      if ((((&g_bss_002e150a)[*(char *)(thing + 6) * 0x1508] != '\0') && /* thing->owner */
          ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) /* thing->owner */
         && (cctrl_ptr = room_process_dungeon_room_0ca65c(), cctrl_ptr == 0)) {
        moodneed_fn_051374();
      }
    }
    else {
      val = thing + 0xd; /* thing->mappos.val_x */
      for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6]; g_thing_ptrs < thing_ptr;
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
        val_2 = object_handle_object_thing_0c6574(val);
        if (((((val_2 != 0) || (val_2 = object_handle_object_thing_0c688c(), val_2 != 0)) &&
             ((thing_ptr[6] != *(byte *)(thing + 6) && /* thing->owner */
              (((*thing_ptr & 0x80) == 0 &&
               ((uint)((&g_slabmap)
                       [((&g_subtile_to_slab_lut)[thing_ptr[0xe]] + (&g_subtile_to_slab_lut)[thing_ptr[0x10]] * 0x55) * 6] &
                      7) == (int)*(char *)(thing + 6))))))) && /* thing->owner */
            ((arg_edx < 0 || (val_2 = update_fn_0dc440(), val_2 < arg_edx)))) &&
           ((val_2 = impset_update_creature_and_thing_03fad0(), val_2 == 0 && (short_val = move_update_creature_control_0b3b58(), short_val != 0)))) {
          val = object_handle_object_thing_0c6574();
          if ((val != 0) || (val = object_handle_object_thing_0c688c(), val != 0)) {
            event_fn_0274ad(*(undefined2 *)(thing_ptr + 0x1b)); /* thing->index_or_angle */
          }
          *(undefined1 *)(thing + 8) = 100; /* thing->active_state */
          *(undefined2 *)(cctrl_ptr + 0x72) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03c91b (Original VA: 0x3c91b, Ghidra: FUN_0003c91b)
 * Prototype: undefined4 impset_update_creature_and_thing_03c91b(void);
 * Address  : 0x3c91b (Size: 333 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 7 -> impset_update_creature_and_thing_03fad0, moodneed_fn_051374, creature_fn_081e5c, move_update_creature_control_0b3b58, room_process_dungeon_room_0ca568, room_process_dungeon_room_0ca8c0, update_fn_0dc440
 ******************************************************************************/
undefined4 impset_update_creature_and_thing_03c91b(void)

{
  short short_val;
  int thing;
  int val;
  int val_2;
  int cctrl_ptr;
  int arg_edx;
  uint thing_ptr;
  undefined4 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(&g_bss_002e05aa + *(char *)(thing + 6) * 0x1508) != 0) { /* thing->owner */
    uval = 1;
    val = room_process_dungeon_room_0ca568(1);
    if (val == 0) {
      if ((((&g_bss_002e1512)[*(char *)(thing + 6) * 0x1508] != '\0') && /* thing->owner */
          ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) /* thing->owner */
         && (cctrl_ptr = room_process_dungeon_room_0ca8c0(), cctrl_ptr == 0)) {
        moodneed_fn_051374();
      }
    }
    else {
      val = thing + 0xd; /* thing->mappos.val_x */
      for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ed6]; g_thing_ptrs < thing_ptr;
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
        if ((((((*(byte *)(thing_ptr + 1) & 1) == 0) && (*(char *)(thing_ptr + 7) == '\x02')) &&
             ((*(char *)(thing_ptr + 0x14) == '\0' && (val_2 = creature_fn_081e5c(uval,val), val_2 != 0))))
            && ((arg_edx < 0 || (val_2 = update_fn_0dc440(), val_2 < arg_edx)))) &&
           ((val_2 = impset_update_creature_and_thing_03fad0(), val_2 == 0 && (short_val = move_update_creature_control_0b3b58(), short_val != 0)))) {
          *(undefined1 *)(thing + 8) = 0x66; /* thing->active_state */
          *(undefined2 *)(cctrl_ptr + 0x72) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03ca68 (Original VA: 0x3ca68, Ghidra: FUN_0003ca68)
 * Prototype: undefined4 impset_update_creature_and_thing_03ca68(void);
 * Address  : 0x3ca68 (Size: 322 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 5 -> impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58, room_process_dungeon_room_0ca568, room_process_dungeon_room_0ca8c0, update_fn_0dc440
 ******************************************************************************/
undefined4 impset_update_creature_and_thing_03ca68(void)

{
  short short_val;
  int thing;
  int val;
  int val_2;
  int cctrl_ptr;
  int arg_edx;
  uint thing_ptr;
  undefined4 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(&g_bss_002e059c + *(char *)(thing + 6) * 0x1508) != 0) { /* thing->owner */
    uval = 1;
    val = room_process_dungeon_room_0ca568(1);
    if (val == 0) {
      if ((((&g_bss_002e150b)[*(char *)(thing + 6) * 0x1508] != '\0') && /* thing->owner */
          ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) /* thing->owner */
         && (cctrl_ptr = room_process_dungeon_room_0ca8c0(), cctrl_ptr == 0)) {
        moodneed_fn_051374();
      }
    }
    else {
      val = thing + 0xd; /* thing->mappos.val_x */
      for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6]; g_thing_ptrs < thing_ptr;
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
        if (((((*(char *)(thing_ptr + 6) != *(char *)(thing + 6)) && (*(char *)(thing_ptr + 7) == 'C')) && /* thing->owner */
             (((*(byte *)(thing_ptr + 1) & 1) == 0 &&
              ((arg_edx < 0 || (val_2 = update_fn_0dc440(uval,val), val_2 < arg_edx)))))) &&
            (val_2 = impset_update_creature_and_thing_03fad0(), val_2 == 0)) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
          *(undefined1 *)(thing + 8) = 0x44; /* thing->active_state */
          *(undefined2 *)(cctrl_ptr + 0x74) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_slab_subtile_columns_03cbaa (Original VA: 0x3cbaa, Ghidra: FUN_0003cbaa)
 * Prototype: undefined4 impset_update_slab_subtile_columns_03cbaa(void);
 * Address  : 0x3cbaa (Size: 305 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 4 -> impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58, object_fn_0c57a4, update_fn_0dc440
 ******************************************************************************/
undefined4 impset_update_slab_subtile_columns_03cbaa(void)

{
  short short_val;
  int arg_eax;
  int val;
  int slab_coord;
  int arg_edx;
  byte *thing_ptr;
  
  if (*(int *)(arg_eax + 0x13) <
      (int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6)) {
    val = arg_eax + 0xd;
    for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6]; g_thing_ptrs < thing_ptr;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
      if ((((thing_ptr[0x1f] == 1) && ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
         (slab_coord = object_fn_0c57a4(val), slab_coord != 0)) {
        if (((((*(uint *)((int)&g_map_subtiles +
                         ((uint)thing_ptr[0x10] * 0x100 + (uint)thing_ptr[0xe]) * 5 + 1) >> 0x1c &
               1 << (*(byte *)(arg_eax + 6) & 0x1f)) != 0) &&
             ((((byte)(&g_slabmap)
                      [((&g_subtile_to_slab_lut)[thing_ptr[0xe]] + (&g_subtile_to_slab_lut)[thing_ptr[0x10]] * 0x55) * 6] &
               7) == (int)*(char *)(arg_eax + 6) ||
              (((&g_slabmap)
                [((&g_subtile_to_slab_lut)[thing_ptr[0xe]] + (&g_subtile_to_slab_lut)[thing_ptr[0x10]] * 0x55) * 6] & 7) ==
               g_neutral_player_number)))) && ((arg_edx < 0 || (slab_coord = update_fn_0dc440(), slab_coord < arg_edx)))) &&
           ((slab_coord = impset_update_creature_and_thing_03fad0(), slab_coord == 0 && (short_val = move_update_creature_control_0b3b58(), short_val != 0)))) {
          *(undefined1 *)(arg_eax + 8) = 0x46;
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_fn_03ccdb (Original VA: 0x3ccdb, Ghidra: FUN_0003ccdb)
 * Prototype: undefined4 impset_fn_03ccdb(void);
 * Address  : 0x3ccdb (Size: 68 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03ccdb
 * Callers  : 1 -> impset_fn_03eea6
 * Callees  : 2 -> impset_process_slabmap_tile_03fcd0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_fn_03ccdb(void)

{
  short short_val;
  int arg_eax;
  int val;
  
  val = impset_process_slabmap_tile_03fcd0();
  if (val != 0) {
    short_val = move_update_creature_control_0b3b58();
    if (short_val != 0) {
      *(undefined1 *)(arg_eax + 8) = 2;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_fn_03cd1f (Original VA: 0x3cd1f, Ghidra: FUN_0003cd1f)
 * Prototype: undefined4 impset_fn_03cd1f(void);
 * Address  : 0x3cd1f (Size: 68 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module impset.cpp procedure @ 0x03cd1f
 * Callers  : 6 -> impset_update_creature_control_03d9f3, impset_update_creature_control_03db27, impset_update_creature_control_03dc2a, impset_update_creature_control_03dd25, impset_stack_type_03e493, impset_fn_03ef05
 * Callees  : 2 -> imptool_fn_03fed7, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_fn_03cd1f(void)

{
  short short_val;
  int arg_eax;
  int val;
  
  val = imptool_fn_03fed7();
  if (val != 0) {
    short_val = move_update_creature_control_0b3b58();
    if (short_val != 0) {
      *(undefined1 *)(arg_eax + 8) = 0x61;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_fn_03cd63 (Original VA: 0x3cd63, Ghidra: FUN_0003cd63)
 * Prototype: undefined4 impset_fn_03cd63(void);
 * Address  : 0x3cd63 (Size: 105 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03cd63
 * Callers  : 1 -> impset_roll_action_random_03cdcc
 * Callees  : 3 -> impset_update_slab_subtile_columns_03af4b, imptool_update_creature_and_thing_03fa16, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_fn_03cd63(void)

{
  short short_val;
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  
  if ((((-1 < arg_edx) && (arg_edx < 0x55)) && (-1 < arg_ebx)) && (arg_ebx < 0x55)) {
    val = impset_update_slab_subtile_columns_03af4b(arg_edx * 3 + 1);
    if (val != 0) {
      val = imptool_update_creature_and_thing_03fa16();
      if (val == 0) {
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          *(undefined1 *)(arg_eax + 8) = 0x49;
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_roll_action_random_03cdcc (Original VA: 0x3cdcc, Ghidra: FUN_0003cdcc)
 * Prototype: undefined4 impset_roll_action_random_03cdcc(void);
 * Address  : 0x3cdcc (Size: 278 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 2 -> impset_fn_03d02c, impset_fn_03d0cf
 * Callees  : 1 -> impset_fn_03cd63
 ******************************************************************************/
undefined4 impset_roll_action_random_03cdcc(void)

{
  int val;
  int arg_edx;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_28 = 0;
  local_24 = 2;
  while( true ) {
    if (arg_edx <= local_28) {
      return 0;
    }
    local_1c = 1;
    val = impset_fn_03cd63();
    if (val != 0) break;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      for (; local_1c < local_24; local_1c = local_1c + 1) {
        val = impset_fn_03cd63();
        if (val != 0) {
          return 1;
        }
      }
      local_1c = 0;
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : impset_fn_03cee2 (Original VA: 0x3cee2, Ghidra: FUN_0003cee2)
 * Prototype: undefined4 impset_fn_03cee2(void);
 * Address  : 0x3cee2 (Size: 165 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03cee2
 * Callers  : 1 -> impset_fn_03d02c
 * Callees  : 4 -> impset_update_slab_subtile_columns_03af4b, impset_process_slabmap_tile_03f6fc, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_fn_03cee2(void)

{
  short short_val;
  int arg_eax;
  int val;
  int val_2;
  
  val_2 = 0;
  do {
    if (7 < val_2) {
      return 0;
    }
    val = impset_process_slabmap_tile_03f6fc();
    if (val != 0) {
      val = impset_update_slab_subtile_columns_03af4b();
      if (val != 0) {
        val = impset_update_creature_and_thing_03fad0();
        if (val == 0) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            *(undefined1 *)(arg_eax + 8) = 0x49;
            return 1;
          }
        }
      }
    }
    val_2 = val_2 + 2;
  } while( true );
}

/******************************************************************************
 * Function : impset_fn_03cf87 (Original VA: 0x3cf87, Ghidra: FUN_0003cf87)
 * Prototype: undefined4 impset_fn_03cf87(void);
 * Address  : 0x3cf87 (Size: 165 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03cf87
 * Callers  : 1 -> impset_fn_03d2d5
 * Callees  : 4 -> impset_process_slabmap_tile_03aef2, impset_process_slabmap_tile_03f6fc, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_fn_03cf87(void)

{
  short short_val;
  int arg_eax;
  int val;
  int val_2;
  
  val_2 = 0;
  do {
    if (7 < val_2) {
      return 0;
    }
    val = impset_process_slabmap_tile_03f6fc();
    if (val != 0) {
      val = impset_process_slabmap_tile_03aef2();
      if (val != 0) {
        val = impset_update_creature_and_thing_03fad0();
        if (val == 0) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            *(undefined1 *)(arg_eax + 8) = 9;
            return 1;
          }
        }
      }
    }
    val_2 = val_2 + 2;
  } while( true );
}

/******************************************************************************
 * Function : impset_fn_03d02c (Original VA: 0x3d02c, Ghidra: FUN_0003d02c)
 * Prototype: undefined8 impset_fn_03d02c(void);
 * Address  : 0x3d02c (Size: 163 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03d02c
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 5 -> impset_update_slab_subtile_columns_03af4b, impset_roll_action_random_03cdcc, impset_fn_03cee2, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 impset_fn_03d02c(void)

{
  short short_val;
  int arg_eax;
  int slab_coord;
  undefined4 uval;
  undefined4 arg_edx;
  
  slab_coord = impset_update_slab_subtile_columns_03af4b((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] * 3 + 1,
                       (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 3 + 1);
  if (slab_coord != 0) {
    slab_coord = impset_update_creature_and_thing_03fad0();
    if (slab_coord == 0) {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        uval = 1;
        *(undefined1 *)(arg_eax + 8) = 0x49;
        goto LAB_0003d776;
      }
    }
  }
  slab_coord = impset_roll_action_random_03cdcc();
  if (slab_coord == 0) {
    slab_coord = impset_fn_03cee2();
    if (slab_coord == 0) {
      uval = 0;
      goto LAB_0003d776;
    }
  }
  uval = 1;
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_fn_03d0cf (Original VA: 0x3d0cf, Ghidra: FUN_0003d0cf)
 * Prototype: undefined8 impset_fn_03d0cf(void);
 * Address  : 0x3d0cf (Size: 134 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03d0cf
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 4 -> impset_update_slab_subtile_columns_03af4b, impset_roll_action_random_03cdcc, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 impset_fn_03d0cf(void)

{
  short short_val;
  int arg_eax;
  int slab_coord;
  undefined4 uval;
  undefined4 arg_edx;
  
  slab_coord = impset_update_slab_subtile_columns_03af4b((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 3 + 1);
  if (slab_coord != 0) {
    slab_coord = impset_update_creature_and_thing_03fad0();
    if (slab_coord == 0) {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        uval = 1;
        *(undefined1 *)(arg_eax + 8) = 0x49;
        goto LAB_0003d776;
      }
    }
  }
  slab_coord = impset_roll_action_random_03cdcc();
  uval = 0;
  if (slab_coord != 0) {
    uval = 1;
  }
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_fn_03d155 (Original VA: 0x3d155, Ghidra: FUN_0003d155)
 * Prototype: undefined4 impset_fn_03d155(void);
 * Address  : 0x3d155 (Size: 105 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03d155
 * Callers  : 1 -> impset_roll_action_random_03d1be
 * Callees  : 3 -> impset_process_slabmap_tile_03aef2, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 impset_fn_03d155(void)

{
  short short_val;
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  
  if ((((-1 < arg_edx) && (arg_edx < 0x55)) && (-1 < arg_ebx)) && (arg_ebx < 0x55)) {
    val = impset_process_slabmap_tile_03aef2(arg_edx * 3 + 1);
    if (val != 0) {
      val = impset_update_creature_and_thing_03fad0();
      if (val == 0) {
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          *(undefined1 *)(arg_eax + 8) = 9;
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : impset_roll_action_random_03d1be (Original VA: 0x3d1be, Ghidra: FUN_0003d1be)
 * Prototype: undefined4 impset_roll_action_random_03d1be(void);
 * Address  : 0x3d1be (Size: 279 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 2 -> impset_fn_03d2d5, impset_fn_03d37a
 * Callees  : 1 -> impset_fn_03d155
 ******************************************************************************/
undefined4 impset_roll_action_random_03d1be(void)

{
  int val;
  int arg_edx;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_28 = 0;
  local_24 = 2;
  while( true ) {
    if (arg_edx <= local_28) {
      return 0;
    }
    local_1c = 1;
    val = impset_fn_03d155();
    if (val != 0) break;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      for (; local_1c < local_24; local_1c = local_1c + 1) {
        val = impset_fn_03d155();
        if (val != 0) {
          return 1;
        }
      }
      local_1c = 0;
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : impset_fn_03d2d5 (Original VA: 0x3d2d5, Ghidra: FUN_0003d2d5)
 * Prototype: undefined8 impset_fn_03d2d5(void);
 * Address  : 0x3d2d5 (Size: 165 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03d2d5
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 5 -> impset_process_slabmap_tile_03aef2, impset_fn_03cf87, impset_roll_action_random_03d1be, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 impset_fn_03d2d5(void)

{
  short short_val;
  int arg_eax;
  int slab_coord;
  undefined4 uval;
  undefined4 arg_edx;
  
  slab_coord = impset_process_slabmap_tile_03aef2((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] * 3 + 1,
                       (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 3 + 1);
  if (slab_coord != 0) {
    slab_coord = impset_update_creature_and_thing_03fad0();
    if (slab_coord == 0) {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        uval = 1;
        *(undefined1 *)(arg_eax + 8) = 9;
        goto LAB_0003d776;
      }
    }
  }
  slab_coord = impset_roll_action_random_03d1be();
  if (slab_coord == 0) {
    slab_coord = impset_fn_03cf87();
    if (slab_coord == 0) {
      uval = 0;
      goto LAB_0003d776;
    }
  }
  uval = 1;
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_fn_03d37a (Original VA: 0x3d37a, Ghidra: FUN_0003d37a)
 * Prototype: undefined8 impset_fn_03d37a(void);
 * Address  : 0x3d37a (Size: 121 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03d37a
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 4 -> impset_process_slabmap_tile_03aef2, impset_roll_action_random_03d1be, impset_update_creature_and_thing_03fad0, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 impset_fn_03d37a(void)

{
  short short_val;
  int arg_eax;
  int slab_coord;
  undefined4 uval;
  undefined4 arg_edx;
  
  slab_coord = impset_process_slabmap_tile_03aef2((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 3 + 1);
  if (slab_coord != 0) {
    slab_coord = impset_update_creature_and_thing_03fad0();
    if (slab_coord == 0) {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        uval = 1;
        *(undefined1 *)(arg_eax + 8) = 9;
        goto LAB_0003d776;
      }
    }
  }
  slab_coord = impset_roll_action_random_03d1be();
  uval = 0;
  if (slab_coord != 0) {
    uval = 1;
  }
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_stack_type_03d3f3 (Original VA: 0x3d3f3, Ghidra: FUN_0003d3f3)
 * Prototype: undefined8 impset_stack_type_03d3f3(void);
 * Address  : 0x3d3f3 (Size: 576 bytes)
 * Module   : impset.cpp [direct_file_string_xref]
 * OrigLine : impset.cpp lines 954, 978
 * Purpose  : String 'INVALID STACK TYPE'
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 8 -> impset_process_slabmap_tile_03aef2, impset_update_slab_subtile_columns_03af4b, impset_update_creature_and_thing_03fad0, creature_fn_0827fc, move_process_map_subtile_0b28e8, move_fn_0b3be4, get_chessboard_distance_xy, LbErrorLog
 ******************************************************************************/
undefined8 impset_stack_type_03d3f3(void)

{
  char ch;
  short short_val;
  int arg_eax;
  uint uval;
  int val;
  undefined4 uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  uint uval_3;
  byte flag;
  undefined4 local_58;
  undefined2 local_54 [2];
  undefined4 local_50;
  undefined2 auStack_4c [2];
  undefined2 *local_48;
  int local_44;
  ushort *local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  flag = 0;
  local_48 = &g_dungeons + *(char *)(arg_eax + 6) * 0xa84;
  local_40 = (ushort *)(&g_bss_002e15f4 + *(char *)(arg_eax + 6) * 0x1508);
  local_3c = (uint)*(byte *)(arg_eax + 0xe);
  local_44 = 0x1c;
  local_38 = (uint)*(byte *)(arg_eax + 0x10);
  for (local_28 = 0; local_28 < *(int *)((int)local_48 + 0x116f); local_28 = local_28 + 1) {
    if ((local_40[1] == 1) || (local_40[1] == 2)) {
      uval_3 = (uint)*local_40 % 0x100;
      uval = *local_40 / 0x100;
      local_30 = (&g_subtile_to_slab_lut)[uval_3];
      local_34 = (&g_subtile_to_slab_lut)[uval];
      val = get_chessboard_distance_xy();
      if (val < local_44) {
        local_1c = uval * 0x100;
        local_24 = local_1c + 0x80;
        local_20 = uval_3 * 0x100 + 0x80;
        if (local_40[1] == 1) {
          val = impset_process_slabmap_tile_03aef2();
          if (val != 0) {
            val = impset_update_creature_and_thing_03fad0();
            if (val == 0) {
              local_58 = CONCAT22((short)local_24,(short)local_20);
              local_54[0] = move_process_map_subtile_0b28e8();
              ch = creature_fn_0827fc();
              if (ch != '\0') {
                local_2c = 1;
                local_44 = extraout_ECX_00;
LAB_0003d5d7:
                local_50 = local_58;
                auStack_4c[(uint)flag * -4] = local_54[(uint)flag * -4];
              }
            }
            goto LAB_0003d4c8;
          }
        }
        else if (local_40[1] == 2) {
          val = impset_update_slab_subtile_columns_03af4b();
          if (val != 0) {
            val = impset_update_creature_and_thing_03fad0();
            if (val == 0) {
              local_58 = CONCAT22((short)local_24,(short)local_20);
              local_54[0] = move_process_map_subtile_0b28e8();
              ch = creature_fn_0827fc();
              if (ch != '\0') {
                local_2c = 2;
                local_44 = extraout_ECX;
                goto LAB_0003d5d7;
              }
            }
            goto LAB_0003d4c8;
          }
        }
        else {
          LbErrorLog(); /* LbErrorLog("impset.cpp", line 954, "INVALID STACK TYPE") */
        }
        local_40[1] = 0;
      }
    }
LAB_0003d4c8:
    local_40 = local_40 + 2;
  }
  if (local_44 != 0x1c) {
    short_val = move_fn_0b3be4();
    if (short_val != 0) {
      if (local_2c == 1) {
        *(undefined1 *)(arg_eax + 8) = 9;
      }
      else {
        *(undefined1 *)(arg_eax + 8) = 0x49;
      }
      uval_2 = 1;
      goto LAB_0003d776;
    }
    LbErrorLog(); /* LbErrorLog("impset.cpp", line 978, "IMP CAN NAVIGATE BUT NOT MOVE TO??") */
  }
  uval_2 = 0;
LAB_0003d776:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : impset_update_creature_control_03d633 (Original VA: 0x3d633, Ghidra: FUN_0003d633)
 * Prototype: undefined8 impset_update_creature_control_03d633(void);
 * Address  : 0x3d633 (Size: 330 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 3 -> impset_process_slabmap_tile_03fcd0, imptool_update_player_dungeon_040160, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 impset_update_creature_control_03d633(void)

{
  char ch;
  char ch_2;
  ushort uval;
  int cctrl_ptr;
  undefined4 slab_coord;
  short short_val;
  int thing;
  int val;
  int val_2;
  undefined4 uval_2;
  undefined4 arg_edx;
  uint local_28;
  int local_1c;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = *(ushort *)(cctrl_ptr + 0x8f);
  local_1c = 0;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  local_28 = g_action_random_seed >> 0xd;
  g_action_random_seed = local_28 | g_action_random_seed * 0x80000;
  local_28 = local_28 & 3;
  do {
    if (3 < local_1c) {
      uval_2 = 0;
LAB_0003d776:
      return CONCAT44(arg_edx,uval_2);
    }
    ch = *(char *)((int)&g_data_0018b67b + local_28 * 2 + 3);
    uval_2 = (&g_subtile_to_slab_lut)[(uint)uval % 0x100];
    ch_2 = (&g_data_0018b67f)[local_28 * 2];
    slab_coord = (&g_subtile_to_slab_lut)[(int)(uint)uval >> 8];
    val = imptool_update_player_dungeon_040160();
    if (val != -1) {
      val_2 = impset_process_slabmap_tile_03fcd0();
      if (val_2 != 0) {
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          *(short *)(cctrl_ptr + 0x91) = (short)val;
          *(short *)(cctrl_ptr + 0x8f) =
               ((short)ch + (short)uval_2) * 3 + 1 +
               (((short)ch_2 + (short)slab_coord) * 3 + 1) * 0x100;
          *(char *)(thing + 8) = /* thing->active_state */
               ((&g_bss_002e1094)[val * 3 + *(char *)(thing + 6) * 0x1508] == '\x02') + '\x02'; /* thing->owner */
          uval_2 = 1;
          goto LAB_0003d776;
        }
      }
    }
    local_28 = (int)(local_28 + 1) % 4;
    local_1c = local_1c + 1;
  } while( true );
}

/******************************************************************************
 * Function : impset_update_creature_control_03d77d (Original VA: 0x3d77d, Ghidra: FUN_0003d77d)
 * Prototype: undefined8 impset_update_creature_control_03d77d(void);
 * Address  : 0x3d77d (Size: 307 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 3 -> impset_process_slabmap_tile_03fcd0, imptool_update_player_dungeon_040160, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 impset_update_creature_control_03d77d(void)

{
  char ch;
  char ch_2;
  int slab_coord;
  int slab_coord_2;
  int cctrl_ptr;
  undefined4 slab_coord_3;
  short short_val;
  undefined4 uval;
  int thing;
  int val;
  int val_2;
  undefined4 arg_edx;
  int local_28;
  uint local_1c;
  
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)];
  slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)];
  local_28 = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  local_1c = g_action_random_seed >> 0xd;
  g_action_random_seed = local_1c | g_action_random_seed * 0x80000;
  local_1c = local_1c & 3;
  do {
    if (3 < local_28) {
      uval = 0;
LAB_0003d776:
      return CONCAT44(arg_edx,uval);
    }
    uval = (&g_subtile_to_slab_lut)[slab_coord * 3 + 1];
    ch = *(char *)((int)&g_data_0018b67b + local_1c * 2 + 3);
    ch_2 = (&g_data_0018b67f)[local_1c * 2];
    slab_coord_3 = (&g_subtile_to_slab_lut)[slab_coord_2 * 3 + 1];
    val = imptool_update_player_dungeon_040160();
    if (val != -1) {
      val_2 = impset_process_slabmap_tile_03fcd0();
      if (val_2 != 0) {
        short_val = move_update_creature_control_0b3b58();
        if (short_val != 0) {
          *(short *)(cctrl_ptr + 0x91) = (short)val;
          *(short *)(cctrl_ptr + 0x8f) =
               ((short)uval + (short)ch) * 3 + 1 +
               (((short)slab_coord_3 + (short)ch_2) * 3 + 1) * 0x100;
          *(char *)(thing + 8) = /* thing->active_state */
               ((&g_bss_002e1094)[val * 3 + *(char *)(thing + 6) * 0x1508] == '\x02') + '\x02'; /* thing->owner */
          uval = 1;
          goto LAB_0003d776;
        }
      }
    }
    local_1c = (int)(local_1c + 1) % 4;
    local_28 = local_28 + 1;
  } while( true );
}

/******************************************************************************
 * Function : impset_update_creature_control_03d8b0 (Original VA: 0x3d8b0, Ghidra: FUN_0003d8b0)
 * Prototype: undefined8 impset_update_creature_control_03d8b0(void);
 * Address  : 0x3d8b0 (Size: 323 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 3 -> impset_process_slabmap_tile_03fcd0, move_update_creature_control_0b3b58, get_chessboard_distance_xy
 ******************************************************************************/
undefined8 impset_update_creature_control_03d8b0(void)

{
  char ch;
  undefined2 uval;
  int cctrl_ptr;
  short short_val;
  undefined4 uval_2;
  int thing;
  int val;
  int val_2;
  undefined4 arg_edx;
  undefined2 *dungeon_off;
  int local_50;
  undefined2 local_44;
  int local_24;
  int local_1c;
  
  ch = *(char *)(thing + 6); /* thing->owner */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_24 = 0x18;
  dungeon_off = &g_dungeons + ch * 0xa84;
  for (local_1c = 0; local_1c < (int)(uint)*(ushort *)(&g_bss_002e1080 + ch * 0x1508);
      local_1c = local_1c + 1) {
    if ((*(char *)((int)dungeon_off + 0xb0b) != '\0') && (*(char *)((int)dungeon_off + 0xb0b) != '\x03')) {
      uval = dungeon_off[0x586];
      val = get_chessboard_distance_xy();
      if (val < local_24) {
        val_2 = impset_process_slabmap_tile_03fcd0();
        if (val_2 != 0) {
          local_50 = local_1c;
          local_24 = val;
          local_44 = uval;
        }
      }
    }
    dungeon_off = (undefined2 *)((int)dungeon_off + 3);
  }
  if (local_24 != 0x18) {
    short_val = move_update_creature_control_0b3b58();
    if (short_val != 0) {
      *(short *)(cctrl_ptr + 0x91) = (short)local_50;
      *(undefined2 *)(cctrl_ptr + 0x8f) = local_44;
      *(char *)(thing + 8) = /* thing->active_state */
           (*(char *)((int)(&g_dungeons + ch * 0xa84) + local_50 * 3 + 0xb0b) == '\x02') +
           '\x02';
      uval_2 = 1;
      goto LAB_0003d776;
    }
  }
  uval_2 = 0;
LAB_0003d776:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : impset_update_creature_control_03d9f3 (Original VA: 0x3d9f3, Ghidra: FUN_0003d9f3)
 * Prototype: undefined4 impset_update_creature_control_03d9f3(void);
 * Address  : 0x3d9f3 (Size: 308 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03dd25
 * Callees  : 2 -> impset_process_map_subtile_03b0a0, impset_fn_03cd1f
 ******************************************************************************/
undefined4 impset_update_creature_control_03d9f3(void)

{
  char ch;
  char ch_2;
  int cctrl_ptr;
  int thing;
  int val;
  int arg_edx;
  int slab_coord;
  int val_2;
  uint uval;
  int local_1c;
  
  slab_coord = (&g_subtile_to_slab_lut)[arg_edx % 0x100] +
          (&g_subtile_to_slab_lut)
          [(int)((arg_edx + (arg_edx >> 0x1f) * -0x100) - (uint)((arg_edx >> 0x1f) << 7 < 0)) >> 8] *
          0x55;
  local_1c = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = (uint)(byte)(&g_data_0017c04c)
                      [((uint)*(byte *)(thing + 0x10) % 3) * 3 + (uint)*(byte *)(thing + 0xe) % 3]
  ;
  do {
    if (3 < local_1c) {
      return 0;
    }
    ch = *(char *)((int)&g_data_0018b67b + uval * 2 + 3);
    ch_2 = (&g_data_0018b67f)[uval * 2];
    val = impset_process_map_subtile_03b0a0();
    if (0 < val) {
      val_2 = (slab_coord / 0x55 + (int)ch_2) * 0x55 + slab_coord % 0x55 + (int)ch;
      val = impset_fn_03cd1f();
      if (val != 0) {
        *(undefined1 *)(cctrl_ptr + 0x93) = 0;
        *(short *)(cctrl_ptr + 0x8d) = (short)(val_2 % 0x55) * 3 + (short)(val_2 / 0x55) * 0x300 + 0x101
        ;
        return 1;
      }
    }
    uval = (int)(uval + 2) % 4;
    local_1c = local_1c + 2;
  } while( true );
}

/******************************************************************************
 * Function : impset_update_creature_control_03db27 (Original VA: 0x3db27, Ghidra: FUN_0003db27)
 * Prototype: undefined8 impset_update_creature_control_03db27(void);
 * Address  : 0x3db27 (Size: 259 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_fn_03e199
 * Callees  : 2 -> impset_process_map_subtile_03b0a0, impset_fn_03cd1f
 ******************************************************************************/
undefined8 impset_update_creature_control_03db27(void)

{
  char ch;
  char ch_2;
  int slab_coord;
  int slab_coord_2;
  int cctrl_ptr;
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  int val_2;
  uint uval_2;
  int local_20;
  
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)];
  slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)];
  local_20 = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval_2 = (uint)(byte)(&g_data_0017c055)
                      [((uint)*(byte *)(thing + 0x10) % 3) * 3 + (uint)*(byte *)(thing + 0xe) % 3]
  ;
  do {
    if (3 < local_20) {
      uval = 0;
LAB_0003d776:
      return CONCAT44(arg_edx,uval);
    }
    ch = *(char *)((int)&g_data_0018b67b + uval_2 * 2 + 3);
    ch_2 = (&g_data_0018b67f)[uval_2 * 2];
    val = impset_process_map_subtile_03b0a0();
    if (0 < val) {
      val_2 = (slab_coord_2 + ch_2) * 0x55 + slab_coord + ch;
      val = impset_fn_03cd1f();
      if (val != 0) {
        *(undefined1 *)(cctrl_ptr + 0x93) = 0;
        uval = 1;
        *(short *)(cctrl_ptr + 0x8d) = (short)(val_2 % 0x55) * 3 + (short)(val_2 / 0x55) * 0x300 + 0x101
        ;
        goto LAB_0003d776;
      }
    }
    uval_2 = (int)(uval_2 + 1) % 4;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : impset_update_creature_control_03dc2a (Original VA: 0x3dc2a, Ghidra: FUN_0003dc2a)
 * Prototype: undefined4 impset_update_creature_control_03dc2a(void);
 * Address  : 0x3dc2a (Size: 251 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03dd25
 * Callees  : 2 -> impset_process_map_subtile_03b0a0, impset_fn_03cd1f
 ******************************************************************************/
undefined4 impset_update_creature_control_03dc2a(void)

{
  int cctrl_ptr;
  int val;
  int thing;
  int val_2;
  int arg_edx;
  int slab_coord;
  int slab_coord_2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_20 = 2;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)];
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)];
  do {
    if (arg_edx <= local_1c) {
      return 0;
    }
    slab_coord_2 = slab_coord_2 + -1;
    slab_coord = slab_coord + -1;
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      val = (local_18 + 1U & 3) * 2;
      for (local_24 = 0; local_24 < local_20; local_24 = local_24 + 1) {
        slab_coord_2 = slab_coord_2 + *(char *)((int)&g_data_0018b67b + val + 3);
        slab_coord = slab_coord + (char)(&g_data_0018b67f)[val];
        if ((((-1 < slab_coord_2) && (slab_coord_2 < 0x55)) && (-1 < slab_coord)) && (slab_coord < 0x55)) {
          val_2 = impset_process_map_subtile_03b0a0();
          if (0 < val_2) {
            val_2 = impset_fn_03cd1f();
            if (val_2 != 0) {
              *(undefined1 *)(cctrl_ptr + 0x93) = 0;
              *(short *)(cctrl_ptr + 0x8d) = ((short)slab_coord * 3 + 1) * 0x100 + (short)slab_coord_2 * 3 + 1;
              return 1;
            }
          }
        }
      }
    }
    local_1c = local_1c + 1;
    local_20 = local_20 + 2;
  } while( true );
}

/******************************************************************************
 * Function : impset_update_creature_control_03dd25 (Original VA: 0x3dd25, Ghidra: FUN_0003dd25)
 * Prototype: undefined8 impset_update_creature_control_03dd25(void);
 * Address  : 0x3dd25 (Size: 223 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 5 -> impset_process_map_subtile_03b0a0, impset_fn_03cd1f, impset_update_creature_control_03d9f3, impset_update_creature_control_03dc2a, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined8 impset_update_creature_control_03dd25(void)

{
  int thing;
  int slab_coord;
  undefined4 uval;
  int cctrl_ptr;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x8d) == 0) {
LAB_0003ddef:
    cctrl_ptr = impset_update_creature_control_03dc2a();
    if (cctrl_ptr == 0) {
      uval = 0;
      goto LAB_0003d776;
    }
  }
  else {
    slab_coord = bflib_system_io_fn_0e69fc((&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)],
                         (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)]);
    if (2 < slab_coord) goto LAB_0003ddef;
    slab_coord = bflib_system_io_fn_0e69fc();
    if (2 < slab_coord) goto LAB_0003ddef;
    slab_coord = impset_process_map_subtile_03b0a0();
    if (slab_coord < 1) {
LAB_0003ddd4:
      slab_coord = impset_update_creature_control_03d9f3();
      if (slab_coord == 0) {
        *(undefined2 *)(cctrl_ptr + 0x8d) = 0;
        goto LAB_0003ddef;
      }
    }
    else {
      slab_coord = impset_fn_03cd1f();
      if (slab_coord == 0) goto LAB_0003ddd4;
    }
  }
  uval = 1;
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_update_creature_control_03de04 (Original VA: 0x3de04, Ghidra: FUN_0003de04)
 * Prototype: undefined8 impset_update_creature_control_03de04(void);
 * Address  : 0x3de04 (Size: 352 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03df64
 * Callees  : 4 -> impset_process_map_subtile_03b0a0, imptool_fn_03fed7, move_fn_0b3be4, get_chessboard_distance_xy
 ******************************************************************************/
undefined8 impset_update_creature_control_03de04(void)

{
  short short_val;
  undefined4 uval;
  int thing;
  int val;
  int val_2;
  undefined4 arg_edx;
  uint uval_2;
  byte flag;
  undefined2 auStack_54 [2];
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 uStack_4e;
  undefined1 uStack_4d;
  undefined2 auStack_4c [2];
  int local_48;
  ushort *local_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined2 *local_20;
  int local_1c;
  
  flag = 0;
  local_24 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_20 = &g_dungeons + *(char *)(thing + 6) * 0xa84; /* thing->owner */
  local_44 = (ushort *)(&g_bss_002e15f4 + *(char *)(thing + 6) * 0x1508); /* thing->owner */
  local_34 = (uint)*(byte *)(thing + 0xe);
  local_48 = 0x1c;
  local_2c = (uint)*(byte *)(thing + 0x10);
  for (local_1c = 0; local_1c < *(int *)((int)local_20 + 0x116f); local_1c = local_1c + 1) {
    if (local_44[1] == 3) {
      uval_2 = (uint)*local_44;
      local_38 = (&g_subtile_to_slab_lut)[uval_2 % 0x100];
      local_30 = (&g_subtile_to_slab_lut)[(int)uval_2 >> 8];
      val = get_chessboard_distance_xy();
      if (val < local_48) {
        val_2 = impset_process_map_subtile_03b0a0();
        if (val_2 < 1) {
          local_44[1] = 0;
        }
        else {
          val_2 = imptool_fn_03fed7();
          if (val_2 != 0) {
            local_48 = val;
            local_28 = uval_2;
            _local_50 = CONCAT11(local_40,local_50);
            _local_50 = CONCAT13(local_3c,_local_50);
            auStack_54[(uint)flag * -4] = auStack_4c[(uint)flag * -4];
          }
        }
      }
    }
    local_44 = local_44 + 2;
  }
  if (local_48 != 0x1c) {
    short_val = move_fn_0b3be4();
    if (short_val != 0) {
      *(undefined1 *)(thing + 8) = 0x61; /* thing->active_state */
      *(undefined1 *)(local_24 + 0x93) = 0;
      *(short *)(local_24 + 0x8d) = (short)local_28;
      uval = 1;
      goto LAB_0003d776;
    }
  }
  uval = 0;
LAB_0003d776:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_update_creature_control_03df64 (Original VA: 0x3df64, Ghidra: FUN_0003df64)
 * Prototype: undefined8 impset_update_creature_control_03df64(void);
 * Address  : 0x3df64 (Size: 565 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> impset_fn_03f664, impset_update_creature_control_03f682
 * Callees  : 14 -> impset_update_player_dungeon_03c289, impset_fn_03d0cf, impset_fn_03d37a, impset_stack_type_03d3f3, impset_update_creature_control_03d633, impset_update_creature_control_03d8b0, impset_update_creature_control_03dd25, impset_update_creature_control_03de04 ...
 ******************************************************************************/
undefined8 impset_update_creature_control_03df64(void)

{
  byte flag;
  int cctrl_ptr;
  int thing;
  undefined4 uval;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined1 *word_ptr_3;
  undefined4 uStack_18;
  
  word_ptr_3 = &stack0xffffffec;
  word_ptr = (undefined4 *)&stack0xffffffec;
  word_ptr_2 = (undefined4 *)&stack0xffffffec;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  flag = *(byte *)(cctrl_ptr + 0x94);
  if (flag < 2) {
    if (flag != 0) {
      uStack_18 = 0x3e175;
      val = impset_update_creature_control_03d633();
      if (val == 0) {
        uStack_18 = 0x3e180;
        val = impset_update_creature_control_03d8b0();
        if (val == 0) {
          uStack_18 = 0x3dfb5;
          val = impset_fn_03d0cf();
          if (val == 0) {
            uStack_18 = 0x3dfc0;
            val = impset_fn_03d37a();
            if (val == 0) {
              uStack_18 = 0x3dfdc;
              impset_update_player_dungeon_03c289();
              uStack_18 = 0x3dfe3;
              val = impset_stack_type_03d3f3();
              if (val == 0) goto LAB_0003dfa0;
            }
          }
          goto LAB_0003dfc4;
        }
      }
LAB_0003e188:
      uval = 1;
      *(undefined1 *)(cctrl_ptr + 0x94) = 1;
      word_ptr = (undefined4 *)&stack0xffffffec;
      goto LAB_0003d777;
    }
  }
  else {
    if (flag < 3) {
      uStack_18 = 0x3dff0;
      val = impset_fn_03d0cf();
      if (val == 0) {
        uStack_18 = 0x3dffb;
        val = impset_fn_03d37a();
        if (val == 0) {
          uStack_18 = 0x3e006;
          impset_update_player_dungeon_03c289();
          uStack_18 = 0x3e00d;
          val = impset_stack_type_03d3f3();
          if (val == 0) {
            uStack_18 = 0x3e018;
            val = impset_update_creature_control_03d8b0();
            word_ptr_2 = (undefined4 *)&stack0xffffffec;
            if (val != 0) goto LAB_0003e188;
            goto LAB_0003dfa0;
          }
        }
      }
LAB_0003dfc4:
      uval = 1;
      *(undefined1 *)(cctrl_ptr + 0x94) = 2;
      goto LAB_0003d777;
    }
    if (flag < 4) {
      uStack_18 = 0x3e039;
      impset_update_player_dungeon_03c289();
      if ((*(int *)(cctrl_ptr + 0x89) == *(int *)(extraout_ECX + 0x116b)) ||
         (word_ptr_2 = (undefined4 *)&stack0xffffffec, *(short *)(extraout_ECX + 0x106d) == 3)) {
        uStack_18 = 0x3e05e;
        val = impset_update_creature_control_03dd25();
        if (val == 0) {
          uStack_18 = 0x3e07a;
          val = impset_update_creature_control_03de04();
          word_ptr_2 = (undefined4 *)&stack0xffffffec;
          if (val == 0) goto LAB_0003dfa0;
        }
        uval = 1;
        *(undefined1 *)(cctrl_ptr + 0x94) = 3;
        word_ptr = (undefined4 *)&stack0xffffffec;
        goto LAB_0003d777;
      }
    }
    else if (flag < 5) {
      uStack_18 = 0x3e08b;
      val = train_update_creature_control_075b48();
      word_ptr_2 = (undefined4 *)&stack0xffffffec;
      if (val != 0) {
        uStack_18 = 0x3e09a;
        val = train_fn_075b1e();
        word_ptr_2 = (undefined4 *)&stack0xffffffec;
        if (val != 0) {
          uStack_18 = 1;
          val = room_process_dungeon_room_0ca568();
          if (val == 0) {
            word_ptr_2 = &uStack_18;
            if (((int)*(char *)(thing + 6) == /* thing->owner */
                 (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) &&
               (val = room_process_dungeon_room_0ca8c0(), word_ptr_2 = &uStack_18, val == 0)) {
              moodneed_fn_051374();
              word_ptr_2 = &uStack_18;
            }
          }
          else {
            val = room_fn_0cc4a0();
            word_ptr_2 = &uStack_18;
            if (val != 0) {
              *(undefined1 *)(thing + 8) = 0x20; /* thing->active_state */
              *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)(extraout_ECX_00 + 1);
              uval = 1;
              word_ptr = &uStack_18;
              goto LAB_0003d777;
            }
          }
        }
      }
    }
    else {
      word_ptr_2 = (undefined4 *)&stack0xffffffec;
      if (flag == 9) {
        uStack_18 = 0x3e140;
        val = impset_update_creature_control_03dd25();
        if (val == 0) {
          uStack_18 = 0x3e15c;
          val = impset_update_creature_control_03de04();
          word_ptr_2 = (undefined4 *)&stack0xffffffec;
          if (val == 0) goto LAB_0003dfa0;
        }
        uval = 1;
        *(undefined1 *)(cctrl_ptr + 0x94) = 9;
        word_ptr = (undefined4 *)&stack0xffffffec;
        goto LAB_0003d777;
      }
    }
LAB_0003dfa0:
    *(undefined1 *)(cctrl_ptr + 0x94) = 0;
    word_ptr_3 = (undefined1 *)word_ptr_2;
  }
  uval = 0;
  word_ptr = (undefined4 *)word_ptr_3;
LAB_0003d777:
  return CONCAT44(*(undefined4 *)((int)word_ptr + 8),uval);
}

/******************************************************************************
 * Function : impset_fn_03e199 (Original VA: 0x3e199, Ghidra: FUN_0003e199)
 * Prototype: longlong impset_fn_03e199(void);
 * Address  : 0x3e199 (Size: 237 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Module impset.cpp procedure @ 0x03e199
 * Callers  : 2 -> impset_fn_03ed80, person_update_creature_control_063dd3
 * Callees  : 11 -> impset_process_thing_entity_03c3e7, impset_update_creature_and_thing_03c458, impset_update_creature_and_thing_03c53a, impset_update_creature_and_thing_03c762, impset_update_creature_and_thing_03c91b, impset_update_creature_and_thing_03ca68, impset_update_slab_subtile_columns_03cbaa, impset_fn_03d02c ...
 ******************************************************************************/
longlong impset_fn_03e199(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint arg_edx;
  
  val = impset_update_creature_and_thing_03ca68();
  if (val == 0) {
    val = impset_update_creature_and_thing_03c91b();
    if (val == 0) {
      val = impset_update_creature_and_thing_03c762();
      if (val == 0) {
        val = impset_update_creature_and_thing_03c53a();
        if (val == 0) {
          val = impset_process_thing_entity_03c3e7();
          if (val == 0) {
            val = impset_update_creature_control_03d77d();
            if (val != 0) {
              *(undefined1 *)(extraout_ECX + 0x94) = 1;
              return CONCAT44(arg_edx,1);
            }
            val_2 = impset_fn_03d02c();
            val = extraout_ECX_00;
            if (val_2 == 0) {
              val_2 = impset_fn_03d2d5();
              val = extraout_ECX_01;
              if (val_2 == 0) {
                val = impset_update_slab_subtile_columns_03cbaa();
                if (val == 0) {
                  val = impset_update_creature_control_03db27();
                  if (val != 0) {
                    *(undefined1 *)(extraout_ECX_02 + 0x94) = 9;
                    return CONCAT44(arg_edx,1);
                  }
                  val = impset_update_creature_and_thing_03c458();
                  if (val == 0) {
                    *(undefined1 *)(extraout_ECX_03 + 0x94) = 0;
                    return (ulonglong)arg_edx << 0x20;
                  }
                }
                goto LAB_0003e1e7;
              }
            }
            *(undefined1 *)(val + 0x94) = 2;
            return CONCAT44(arg_edx,1);
          }
        }
      }
    }
  }
LAB_0003e1e7:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_update_creature_control_03e286 (Original VA: 0x3e286, Ghidra: FUN_0003e286)
 * Prototype: longlong impset_update_creature_control_03e286(void);
 * Address  : 0x3e286 (Size: 82 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> impset_update_creature_control_03f682
 * Callees  : 3 -> impset_update_player_dungeon_03c289, impset_update_player_dungeon_03e33a, impset_stack_type_03e493
 ******************************************************************************/
longlong impset_update_creature_control_03e286(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  impset_update_player_dungeon_03c289();
  val = impset_stack_type_03e493();
  if (val == 0) {
    if ((uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2c7)) < 0x81) {
      return (ulonglong)arg_edx << 0x20;
    }
    impset_update_player_dungeon_03e33a();
    *(int *)(cctrl_ptr + 0x2c7) = g_game_turn;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_roll_action_random_03e2d8 (Original VA: 0x3e2d8, Ghidra: FUN_0003e2d8)
 * Prototype: longlong impset_roll_action_random_03e2d8(void);
 * Address  : 0x3e2d8 (Size: 98 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> impset_update_creature_control_03f682
 * Callees  : 1 -> person_update_creature_control_064ae7
 ******************************************************************************/
longlong impset_roll_action_random_03e2d8(void)

{
  uint rand_seed;
  int arg_eax;
  int extraout_ECX;
  uint arg_edx;
  
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = g_action_random_seed >> 0xd;
  g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
  if ((rand_seed & 0x3f) == 0) {
    person_update_creature_control_064ae7();
    *(undefined1 *)(arg_eax + 8) = 1;
    *(undefined2 *)(extraout_ECX + 0x282) = 200;
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : impset_update_player_dungeon_03e33a (Original VA: 0x3e33a, Ghidra: FUN_0003e33a)
 * Prototype: longlong impset_update_player_dungeon_03e33a(void);
 * Address  : 0x3e33a (Size: 301 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> impset_update_creature_control_03e286, impset_stack_type_03e493, impset_update_creature_control_03ef50
 * Callees  : 5 -> event_fn_0274ad, moodneed_fn_051374, room_process_dungeon_room_0ca568, room_process_dungeon_room_0ca8c0, room_roll_action_random_0cc51c
 ******************************************************************************/
longlong impset_update_player_dungeon_03e33a(void)

{
  int arg_eax;
  int val;
  uint *word_ptr;
  undefined4 unaff_ESI;
  undefined4 uStack_18;
  uint uStack_14;
  
  word_ptr = (uint *)&stack0xfffffff0;
  if (*(int *)(arg_eax + 0x13) != 0) {
    uStack_14 = 1;
    uStack_18 = 0x3e35c;
    val = room_process_dungeon_room_0ca568();
    if (val == 0) {
      if ((&g_bss_002e0598)[*(char *)(arg_eax + 6) * 0xa84] == 0) {
        if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
          uStack_18 = 0x3e44c;
          moodneed_fn_051374();
        }
      }
      else {
        uStack_18 = 0x3e3aa;
        val = room_process_dungeon_room_0ca8c0();
        if (val != 0) {
          word_ptr = &uStack_14;
          if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])
          {
            uStack_18 = 0x3e3e2;
            moodneed_fn_051374();
            word_ptr = &uStack_14;
          }
          goto LAB_0003e460;
        }
        if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
          uStack_18 = 0x3e417;
          moodneed_fn_051374();
        }
      }
      uStack_18 = 0;
      word_ptr = &uStack_18;
      event_fn_0274ad();
    }
    else {
      uStack_18 = 0x3e369;
      val = room_roll_action_random_0cc51c();
      word_ptr = &uStack_14;
      if (val != 0) {
        *(undefined1 *)(arg_eax + 8) = 7;
        return CONCAT44(unaff_ESI,1);
      }
    }
  }
LAB_0003e460:
  return (ulonglong)*(uint *)((int)word_ptr + 4) << 0x20;
}

/******************************************************************************
 * Function : impset_stack_type_03e493 (Original VA: 0x3e493, Ghidra: FUN_0003e493)
 * Prototype: undefined8 impset_stack_type_03e493(void);
 * Address  : 0x3e493 (Size: 2284 bytes)
 * Module   : impset.cpp [direct_file_string_xref]
 * OrigLine : impset.cpp lines 2175
 * Purpose  : String 'INVALID STACK TYPE'
 * Callers  : 1 -> impset_update_creature_control_03e286
 * Callees  : 25 -> event_fn_0274ad, impset_process_slabmap_tile_03aef2, impset_update_slab_subtile_columns_03af4b, impset_process_map_subtile_03b0a0, impset_process_map_subtile_03b12c, impset_process_map_subtile_03b17f, impset_update_slab_subtile_columns_03b1e2, impset_process_map_subtile_03b263 ...
 ******************************************************************************/
undefined8 impset_stack_type_03e493(void)

{
  ushort uval;
  uint *word_ptr;
  short short_val;
  undefined4 uval_2;
  int thing;
  int dungeon_off;
  undefined4 arg_edx;
  int extraout_EDX;
  ushort *word_ptr_2;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined2 *local_24;
  int local_20;
  uint local_1c;
  
  local_20 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  dungeon_off = *(char *)(thing + 6) * 0x1508; /* thing->owner */
  local_24 = &g_dungeons + *(char *)(thing + 6) * 0xa84; /* thing->owner */
  if (*(int *)(local_20 + 0x89) != *(int *)(&g_bss_002e16f4 + dungeon_off)) {
    uval_2 = *(undefined4 *)(&g_bss_002e16f4 + dungeon_off);
    *(undefined1 *)(local_20 + 0x95) = 0;
    *(undefined4 *)(local_20 + 0x89) = uval_2;
  }
  if ((int)(uint)*(byte *)(local_20 + 0x95) < *(int *)(&g_bss_002e16f8 + dungeon_off)) {
    word_ptr_2 = (ushort *)(&g_bss_002e15f4 + (uint)*(byte *)(local_20 + 0x95) * 4 + dungeon_off);
    while ((int)(uint)*(byte *)(local_20 + 0x95) < *(int *)((int)local_24 + 0x116f)) {
      *(char *)(local_20 + 0x95) = *(char *)(local_20 + 0x95) + '\x01';
      switch(word_ptr_2[1]) {
      case 0:
        break;
      case 1:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3e545;
        dungeon_off = impset_process_slabmap_tile_03aef2();
        if (dungeon_off != 0) {
          uStack_54 = 0x3e556;
          dungeon_off = impset_update_creature_and_thing_03fad0();
          if (dungeon_off != 0) break;
          uStack_54 = 0x3e56d;
          short_val = move_update_creature_control_0b3b58();
          if (short_val == 0) {
LAB_0003e585:
            word_ptr_2[1] = 0;
            uval_2 = 0xffffffff;
          }
          else {
            *(undefined1 *)(thing + 8) = 9; /* thing->active_state */
LAB_0003e579:
            *(undefined1 *)(local_20 + 0x94) = 2;
LAB_0003e639:
            uval_2 = 1;
          }
          goto LAB_0003d776;
        }
LAB_0003e593:
        word_ptr_2[1] = 0;
        break;
      case 2:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3e5d3;
        dungeon_off = impset_update_slab_subtile_columns_03af4b();
        if (dungeon_off == 0) goto LAB_0003e593;
        uStack_54 = 0x3e5e4;
        dungeon_off = impset_update_creature_and_thing_03fad0();
        if (dungeon_off == 0) {
          uStack_54 = 0x3e5fb;
          short_val = move_update_creature_control_0b3b58();
          if (short_val == 0) goto LAB_0003e585;
          *(undefined1 *)(thing + 8) = 0x49; /* thing->active_state */
          goto LAB_0003e579;
        }
        break;
      case 3:
        if (0x80 < (uint)(g_game_turn - *(int *)(local_20 + 0x2c7))) {
          *(char *)(local_20 + 0x95) = *(char *)(local_20 + 0x95) + -1;
LAB_0003e629:
          uStack_54 = 0x3e62e;
          impset_update_player_dungeon_03e33a();
          *(int *)(extraout_EDX + 0x2c7) = g_game_turn;
          goto LAB_0003e639;
        }
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3e678;
        dungeon_off = impset_process_map_subtile_03b0a0();
        if (dungeon_off < 1) goto LAB_0003e593;
        uStack_54 = 0x3e68a;
        dungeon_off = impset_fn_03cd1f();
        if (dungeon_off != 0) {
          *(undefined1 *)(local_20 + 0x93) = 0;
          *(undefined1 *)(local_20 + 0x94) = 3;
          *(short *)(local_20 + 0x8d) = (short)local_1c;
          goto LAB_0003e639;
        }
        goto LAB_0003e7c6;
      case 4:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if ((*(short *)(&g_bss_002e059c + *(char *)((int)local_24 + 0xe9f) * 0x1508) != 0) &&
           (((&g_bss_002e0591)[*(char *)((int)local_24 + 0xe9f) * 0x1508] & 1) != 0)) {
          uStack_54 = 1;
          dungeon_off = room_process_dungeon_room_0ca568();
          if (dungeon_off == 0) {
            if ((int)*(char *)(thing + 6) == /* thing->owner */
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
              dungeon_off = room_process_dungeon_room_0ca8c0();
joined_r0x0003e8ae:
              word_ptr = &uStack_54;
joined_r0x0003ebf0:
              if (dungeon_off == 0) {
                word_ptr[-1] = 0x3e7c6;
                moodneed_fn_051374();
              }
            }
          }
          else {
            local_3c = impset_process_map_subtile_03b12c();
            if (local_3c == 0) {
              word_ptr_2[1] = 0;
            }
            else {
              dungeon_off = impset_update_creature_and_thing_03fad0();
              if ((dungeon_off == 0) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
                *(undefined1 *)(thing + 8) = 0x44; /* thing->active_state */
                *(undefined2 *)(local_20 + 0x74) = *(undefined2 *)(local_3c + 0x1b);
                goto LAB_0003e639;
              }
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 5:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if (*(short *)((int)local_24 + 0x21) != 0) {
          uStack_54 = 1;
          dungeon_off = room_process_dungeon_room_0ca568();
          if (dungeon_off == 0) {
            if ((int)*(char *)(thing + 6) == /* thing->owner */
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
              dungeon_off = room_process_dungeon_room_0ca8c0();
              goto joined_r0x0003e8ae;
            }
          }
          else {
            local_38 = impset_process_map_subtile_03b17f();
            if (local_38 == 0) {
              word_ptr_2[1] = 0;
            }
            else {
              dungeon_off = impset_update_creature_and_thing_03fad0();
              if ((dungeon_off == 0) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
                *(undefined1 *)(thing + 8) = 0x66; /* thing->active_state */
                local_44 = local_38;
LAB_0003e85e:
                *(undefined2 *)(local_20 + 0x72) = *(undefined2 *)(local_44 + 0x1b);
                goto LAB_0003e639;
              }
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 6:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if (*(short *)((int)local_24 + 0x11) != 0) {
          uStack_54 = 0x3e902;
          dungeon_off = room_process_dungeon_room_0ca6bc();
          if (dungeon_off == 0) {
            if ((int)*(char *)(thing + 6) == /* thing->owner */
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
              uStack_54 = 0x3e9fe;
              dungeon_off = room_process_dungeon_room_0ca65c();
joined_r0x0003ebf0:
              word_ptr = &local_50;
              goto joined_r0x0003ebf0;
            }
          }
          else {
            uStack_54 = 0x3e917;
            local_28 = impset_update_slab_subtile_columns_03b1e2();
            if (local_28 == 0) {
              word_ptr_2[1] = 0;
            }
            else {
              uStack_54 = 0x3e92f;
              dungeon_off = impset_update_creature_and_thing_03fad0();
              if (dungeon_off == 0) {
                uStack_54 = 0x3e946;
                short_val = move_update_creature_control_0b3b58();
                if (short_val != 0) {
                  uStack_54 = 0x3e957;
                  dungeon_off = object_handle_object_thing_0c6574();
                  if (dungeon_off == 0) {
                    uStack_54 = 0x3e988;
                    dungeon_off = object_handle_object_thing_0c688c();
                    if (dungeon_off != 0) {
                      uval = *(ushort *)(local_28 + 0x1b);
                      goto LAB_0003e9af;
                    }
                  }
                  else {
                    uval = *(ushort *)(local_28 + 0x1b);
LAB_0003e9af:
                    uStack_54 = (uint)uval;
                    event_fn_0274ad();
                  }
                  *(undefined1 *)(thing + 8) = 100; /* thing->active_state */
                  local_44 = local_28;
                  goto LAB_0003e85e;
                }
              }
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 7:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3ea40;
        local_30 = impset_process_map_subtile_03b263();
        if (local_30 == 0) goto LAB_0003e593;
        uStack_54 = 0x3ea50;
        dungeon_off = object_handle_object_thing_0c659c();
        if (dungeon_off != 0) {
          uStack_54 = 0x3ea6d;
          local_40 = impset_process_thing_entity_03b30e();
          if (local_40 != 0) {
            uStack_54 = 0x3ea85;
            dungeon_off = impset_update_creature_and_thing_03fad0();
            if (dungeon_off == 0) {
              uStack_54 = 0x3ea9c;
              short_val = move_update_creature_control_0b3b58();
              if (short_val == 0) goto LAB_0003e585;
              *(undefined1 *)(thing + 8) = 0xb; /* thing->active_state */
              *(undefined2 *)(local_20 + 0x72) = *(undefined2 *)(local_30 + 0x1b);
              *(undefined2 *)(local_20 + 0x70) = *(undefined2 *)(local_40 + 0x1b);
              goto LAB_0003e639;
            }
          }
        }
        break;
      case 8:
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if (*(short *)((int)local_24 + 0x1b) != 0) {
          uStack_54 = 0x3eb01;
          dungeon_off = room_process_dungeon_room_0ca6bc();
          if (dungeon_off == 0) {
            if ((int)*(char *)(thing + 6) == /* thing->owner */
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
              uStack_54 = 0x3ebee;
              dungeon_off = room_process_dungeon_room_0ca65c();
              goto joined_r0x0003ebf0;
            }
            goto LAB_0003e7c6;
          }
          uStack_54 = 0x3eb16;
          local_44 = impset_process_map_subtile_03b263();
          if (local_44 == 0) goto LAB_0003ebb5;
          uStack_54 = 0x3eb31;
          local_2c = local_44;
          dungeon_off = impset_update_creature_and_thing_03fad0();
          if (dungeon_off == 0) {
            uStack_54 = 0x3eb48;
            short_val = move_update_creature_control_0b3b58();
            if (short_val != 0) {
              if ((&g_data_001911f3)[*(byte *)(local_2c + 0x1a)] == '\b') {
                uval = *(ushort *)(local_2c + 0x1b);
LAB_0003eba4:
                uStack_54 = (uint)uval;
                event_fn_0274ad();
              }
              else if ((&g_data_001911f3)[*(byte *)(local_2c + 0x1a)] == '\t') {
                uval = *(ushort *)(local_2c + 0x1b);
                goto LAB_0003eba4;
              }
              *(undefined1 *)(thing + 8) = 0xd; /* thing->active_state */
              goto LAB_0003e85e;
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 9:
        local_1c = (uint)*word_ptr_2;
        uStack_54 = 0x3ec1c;
        local_48 = imptool_update_player_dungeon_040160();
        if (local_48 == -1) {
LAB_0003ebb5:
          word_ptr_2[1] = 0;
        }
        else {
          uStack_54 = 0x3ec38;
          local_34 = local_48;
          dungeon_off = impset_process_slabmap_tile_03fcd0();
          if (dungeon_off != 0) {
            uStack_54 = 0x3ec4f;
            short_val = move_update_creature_control_0b3b58();
            if (short_val != 0) {
              *(short *)(local_20 + 0x91) = (short)local_48;
              *(short *)(local_20 + 0x8f) = (short)local_1c;
              *(undefined1 *)(local_20 + 0x94) = 1;
              *(char *)(thing + 8) = /* thing->active_state */
                   (*(char *)((int)local_24 + local_34 * 3 + 0xb0b) == '\x02') + '\x02';
              goto LAB_0003e639;
            }
          }
        }
LAB_0003e7c6:
        uval_2 = 0xffffffff;
        word_ptr_2[1] = 0;
        goto LAB_0003d776;
      case 10:
        if ((int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing + 0x1a) * 0xe6) <=
            *(int *)(thing + 0x13)) { /* thing->anim_sprite */
          if ((uint)(g_game_turn - *(int *)(local_20 + 0x2c7)) < 0x81) goto LAB_0003e639;
          goto LAB_0003e629;
        }
        local_1c = (uint)*word_ptr_2;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3ecd2;
        dungeon_off = impset_process_map_subtile_03b35c();
        if (dungeon_off == 0) goto LAB_0003e593;
        uStack_54 = 0x3ece7;
        dungeon_off = impset_update_creature_and_thing_03fad0();
        if (dungeon_off == 0) {
          uStack_54 = 0x3ecfa;
          short_val = move_update_creature_control_0b3b58();
          if (short_val == 0) goto LAB_0003e585;
          uval_2 = 1;
          *(undefined1 *)(thing + 8) = 0x46; /* thing->active_state */
          goto LAB_0003d776;
        }
        break;
      default:
        uStack_54 = 0x3ed45;
        LbErrorLog(); /* LbErrorLog("impset.cpp", line 2175, "INVALID STACK TYPE") */
      }
      word_ptr_2 = word_ptr_2 + 2;
    }
  }
  uval_2 = 0;
LAB_0003d776:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : impset_fn_03ed80 (Original VA: 0x3ed80, Ghidra: FUN_0003ed80)
 * Prototype: longlong impset_fn_03ed80(void);
 * Address  : 0x3ed80 (Size: 110 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03ed80
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_fn_010132, impset_fn_03e199, inits_allocate_dynamic_light_shot_0444a9, person_fn_063b6d, ceiling_fn_07df48
 ******************************************************************************/
longlong impset_fn_03ed80(void)

{
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  val = ceiling_fn_07df48();
  if (val != 0) {
    val = impset_fn_03e199();
    if (val == 0) {
      person_fn_063b6d();
    }
    return CONCAT44(arg_edx,1);
  }
  if ((g_game_turn - *(int *)(extraout_ECX + 9)) % 2 == 0) {
    inits_allocate_dynamic_light_shot_0444a9();
  }
  anger_fn_010132();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : impset_update_creature_control_03edee (Original VA: 0x3edee, Ghidra: FUN_0003edee)
 * Prototype: undefined8 impset_update_creature_control_03edee(void);
 * Address  : 0x3edee (Size: 184 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> instance_negative_instance_049bfc, person_update_creature_control_064ae7, creature_fn_081cec
 ******************************************************************************/
undefined8 impset_update_creature_control_03edee(void)

{
  int cctrl_ptr;
  int thing;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(short *)(cctrl_ptr + 0x282) == 0) && (*(char *)(cctrl_ptr + 0xd2) == '\0')) {
    uStack_14 = 0x3ee9c;
    person_update_creature_control_064ae7();
  }
  else {
    if (*(short *)(cctrl_ptr + 0x282) != 0) {
      *(short *)(cctrl_ptr + 0x282) = *(short *)(cctrl_ptr + 0x282) + -1;
    }
    word_ptr = (undefined4 *)&stack0xfffffff0;
    if ((*(short *)(cctrl_ptr + 0x282) != 0) &&
       (word_ptr = (undefined4 *)&stack0xfffffff0, *(char *)(cctrl_ptr + 0xd2) == '\0')) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      uStack_14 = 0;
      word_ptr = &uStack_14;
      instance_negative_instance_049bfc();
    }
    *(undefined4 *)((int)word_ptr + -4) = 0x3ee8f;
    creature_fn_081cec();
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr + 4),1);
}

/******************************************************************************
 * Function : impset_fn_03eea6 (Original VA: 0x3eea6, Ghidra: FUN_0003eea6)
 * Prototype: undefined8 impset_fn_03eea6(void);
 * Address  : 0x3eea6 (Size: 95 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03eea6
 * Callers  : 0 -> 
 * Callees  : 3 -> impset_fn_03ccdb, imptool_process_map_subtile_03f88a, person_update_creature_control_064ae7
 ******************************************************************************/
undefined8 impset_fn_03eea6(void)

{
  int val;
  undefined4 arg_edx;
  
  val = imptool_process_map_subtile_03f88a();
  if ((val == 0) || (val = impset_fn_03ccdb(), val == 0)) {
    person_update_creature_control_064ae7();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_fn_03ef05 (Original VA: 0x3ef05, Ghidra: FUN_0003ef05)
 * Prototype: undefined8 impset_fn_03ef05(void);
 * Address  : 0x3ef05 (Size: 75 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03ef05
 * Callers  : 0 -> 
 * Callees  : 2 -> heapmgr_process_map_subtile_03ad98, impset_fn_03cd1f
 ******************************************************************************/
undefined8 impset_fn_03ef05(void)

{
  int val;
  undefined4 arg_edx;
  
  val = heapmgr_process_map_subtile_03ad98();
  if ((val == 0) || (val = impset_fn_03cd1f(), val == 0)) {
    person_update_creature_control_064ae7();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_update_creature_control_03ef50 (Original VA: 0x3ef50, Ghidra: FUN_0003ef50)
 * Prototype: undefined8 impset_update_creature_control_03ef50(void);
 * Address  : 0x3ef50 (Size: 476 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 8 -> anger_fn_010010, impset_update_player_dungeon_03e33a, instance_negative_instance_049bfc, instance_update_creature_control_049dd9, mapwho_fn_050e72, mapwho_fn_050ea6, person_update_creature_control_064ae7, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined8 impset_update_creature_control_03ef50(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  undefined4 arg_edx;
  uint uval;
  uint *word_ptr;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int local_24;
  uint local_20;
  char *local_1c;
  
  word_ptr = (uint *)&local_2c;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval = (uint)*(ushort *)(cctrl_ptr + 0x8f);
  local_1c = &g_bss_002e1094 + (uint)*(ushort *)(cctrl_ptr + 0x91) * 3 + *(char *)(thing + 6) * 0x1508; /* thing->owner */
  local_24 = (&g_subtile_to_slab_lut)[(int)uval >> 8] * 0x55;
  local_20 = (uint)((&g_slabmap_base)[((&g_subtile_to_slab_lut)[uval % 0x100] + local_24) * 6] == '4');
  if (uval == *(ushort *)(local_1c + 1)) {
    uStack_30 = 0x3eff3;
    val = bflib_system_io_fn_0e69fc();
    if (val < 1) {
      uStack_30 = 0x3f00d;
      val = bflib_system_io_fn_0e69fc();
      if (val < 1) {
        if (local_20 != 0) {
          uStack_30 = 0x3f029;
          val = mapwho_fn_050e72();
          if (val != 0) goto LAB_0003f10d;
        }
        local_2b = (undefined1)((ulonglong)uval % 0x100);
        local_2c = 0x80;
        local_29 = (undefined1)((ulonglong)uval / 0x100);
        local_2a = 0x80;
        uStack_30 = 0x3f058;
        val = anger_fn_010010();
        if (val != 0) goto LAB_0003f120;
        if (*local_1c != '\0') {
          if (*(byte *)(cctrl_ptr + 0xd2) == 0) {
            word_ptr = &uStack_30;
            uStack_30 = (uint)*(byte *)(cctrl_ptr + 0xd2);
            instance_negative_instance_049bfc();
          }
          if ((*local_1c == '\x02') &&
             ((int)(uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing + 0x1a) * 0xe6) <
              *(int *)(thing + 0x13))) { /* thing->anim_sprite */
            if (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2c7))) {
              *(undefined4 *)((int)word_ptr + -4) = 0x3f0c8;
              val = impset_update_player_dungeon_03e33a();
              if (val != 0) goto LAB_0003f120;
              *(int *)(cctrl_ptr + 0x2c7) = g_game_turn;
            }
            *(undefined4 *)((int)word_ptr + -4) = 0x3f0f7;
            mapwho_fn_050ea6();
            *(uint *)(thing + 0x13) = /* thing->anim_sprite */
                 (uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing + 0x1a) * 0xe6);
          }
          goto LAB_0003f120;
        }
      }
    }
  }
LAB_0003f10d:
  uStack_30 = 0x3f119;
  instance_update_creature_control_049dd9();
  uStack_30 = 0x3f120;
  person_update_creature_control_064ae7();
LAB_0003f120:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_fn_03f12c (Original VA: 0x3f12c, Ghidra: FUN_0003f12c)
 * Prototype: undefined8 impset_fn_03f12c(void);
 * Address  : 0x3f12c (Size: 268 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03f12c
 * Callers  : 0 -> 
 * Callees  : 6 -> anger_fn_010010, impset_process_map_subtile_03b0a0, instance_negative_instance_049bfc, instance_update_creature_control_049dd9, person_update_creature_control_064ae7, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined8 impset_fn_03f12c(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  undefined1 uval_2;
  
  uval_2 = 0x80;
  val = bflib_system_io_fn_0e69fc(0x80);
  if (val < 1) {
    val = bflib_system_io_fn_0e69fc(uval_2);
    if (val < 1) {
      val = impset_process_map_subtile_03b0a0();
      if (0 < val) {
        val = anger_fn_010010();
        if ((val == 0) && (*(char *)(extraout_ECX_00 + 0xd2) == '\0')) {
          instance_negative_instance_049bfc(0);
        }
        uval = 1;
        goto LAB_0003f232;
      }
      if (val < 0) {
        *(undefined1 *)(extraout_ECX + 0x94) = 1;
        *(short *)(extraout_ECX + 0x8f) =
             (short)(&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] * 3 + 1 +
             ((short)(&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 3 + 1) * 0x100;
      }
    }
  }
  instance_update_creature_control_049dd9();
  person_update_creature_control_064ae7();
  uval = 0;
LAB_0003f232:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_process_dungeon_room_03f238 (Original VA: 0x3f238, Ghidra: FUN_0003f238)
 * Prototype: undefined8 impset_process_dungeon_room_03f238(void);
 * Address  : 0x3f238 (Size: 384 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 8 -> mapwho_trying_create_gold_hoarde_050f1a, mapwho_fn_05117d, mapwho_process_map_subtile_05131e, person_fn_063b6d, person_update_creature_control_064ae7, sound_fn_06e538, room_roll_action_random_0cc51c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 impset_process_dungeon_room_03f238(void)

{
  int arg_eax;
  undefined1 *word_ptr;
  int val;
  int slab_coord;
  undefined4 arg_edx;
  short *val_2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  int local_20;
  int local_1c;
  
  if (*(int *)(arg_eax + 0x13) == 0) {
    uStack_2c = 0x3f24e;
    person_fn_063b6d();
    goto LAB_0003f125;
  }
  uStack_2c = 0x3f258;
  word_ptr = (undefined1 *)room_update_slab_subtile_columns_0d0f50();
  val_2 = &local_28;
  if (((&g_rooms < word_ptr) && (val_2 = &local_28, word_ptr[3] == *(char *)(arg_eax + 6))) &&
     (val_2 = &local_28, *(short *)(word_ptr + 10) == 2)) {
    local_1c = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] * 3 + 1;
    slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)];
    local_20 = (&g_data_0019033f)[slab_coord * 3] * 0x55;
    val_2 = &local_28;
    if ((&g_rooms <
         &g_rooms +
         (uint)(byte)(&g_bss_002d33c8)[(local_20 + (&g_subtile_to_slab_lut)[local_1c]) * 6] * 0x45) &&
       (val_2 = &local_28,
       *(short *)(&g_bss_002ddd1c +
                 (uint)(byte)(&g_bss_002d33c8)[(local_20 + (&g_subtile_to_slab_lut)[local_1c]) * 6] * 0x45) ==
       *(short *)(word_ptr + 1))) {
      uStack_2c = 0x3f2e9;
      val = mapwho_process_map_subtile_05131e();
      if (val == 0) {
        local_26 = ((short)slab_coord * 3 + 1) * 0x100 + 0x80;
        local_28 = (short)(local_1c << 8) + 0x80;
        local_24 = *(undefined2 *)(arg_eax + 0x11);
        uStack_2c = 0x3f32a;
        slab_coord = mapwho_trying_create_gold_hoarde_050f1a();
        if (slab_coord != 0) {
          slab_coord = *(int *)(slab_coord + 0x13);
          goto LAB_0003f331;
        }
      }
      else {
        uStack_2c = 0x3f2f7;
        slab_coord = mapwho_fn_05117d();
LAB_0003f331:
        *(int *)(arg_eax + 0x13) = *(int *)(arg_eax + 0x13) - slab_coord;
      }
      g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
      g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
      uStack_2c = 0x100;
      uStack_30 = 2;
      uStack_34 = 0;
      uStack_38 = 3;
      sound_fn_06e538();
      val_2 = (short *)&uStack_38;
      if (((*(int *)(arg_eax + 0x13) != 0) &&
          (val_2 = (short *)&uStack_38, *(ushort *)(word_ptr + 0x10) < *(ushort *)(word_ptr + 0xe))) &&
         (slab_coord = room_roll_action_random_0cc51c(), val_2 = (short *)&uStack_38, slab_coord != 0)) {
        *(undefined1 *)(arg_eax + 8) = 7;
        goto LAB_0003f125;
      }
    }
  }
  *(undefined4 *)((int)val_2 + -4) = 0x3f280;
  person_update_creature_control_064ae7();
LAB_0003f125:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_fn_03f3b8 (Original VA: 0x3f3b8, Ghidra: FUN_0003f3b8)
 * Prototype: longlong impset_fn_03f3b8(void);
 * Address  : 0x3f3b8 (Size: 63 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03f3b8
 * Callers  : 0 -> 
 * Callees  : 2 -> person_update_creature_control_064ae7, object_process_map_subtile_0c6494
 ******************************************************************************/
longlong impset_fn_03f3b8(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  if ((uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6) !=
      *(uint *)(arg_eax + 0x13) &&
      -1 < (int)((uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6) -
                *(uint *)(arg_eax + 0x13))) {
    val = object_process_map_subtile_0c6494();
    *(int *)(extraout_ECX + 0x13) = *(int *)(extraout_ECX + 0x13) + val;
  }
  person_update_creature_control_064ae7();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : impset_fn_03f3f7 (Original VA: 0x3f3f7, Ghidra: FUN_0003f3f7)
 * Prototype: undefined8 impset_fn_03f3f7(void);
 * Address  : 0x3f3f7 (Size: 52 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03f3f7
 * Callers  : 0 -> 
 * Callees  : 1 -> impset_process_slabmap_tile_03aef2
 ******************************************************************************/
undefined8 impset_fn_03f3f7(void)

{
  undefined4 arg_edx;
  
  impset_process_slabmap_tile_03aef2();
  person_update_creature_control_064ae7();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_update_creature_control_03f42b (Original VA: 0x3f42b, Ghidra: FUN_0003f42b)
 * Prototype: undefined8 impset_update_creature_control_03f42b(void);
 * Address  : 0x3f42b (Size: 149 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> impset_process_slabmap_tile_03aef2, instance_negative_instance_049bfc, instance_update_creature_control_049dd9, person_update_creature_control_064ae7
 ******************************************************************************/
undefined8 impset_update_creature_control_03f42b(void)

{
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  
  if (((int)((uint)*(byte *)(thing + 0xe) -
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2e)) < 1) && /* thing->ccontrol_idx */
     ((int)((uint)*(byte *)(thing + 0x10) -
           (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x30)) < 1)) { /* thing->ccontrol_idx */
    val = impset_process_slabmap_tile_03aef2();
    if (val != 0) {
      if (*(char *)(extraout_ECX + 0xd2) == '\0') {
        instance_negative_instance_049bfc(0);
      }
      uval = 1;
      goto LAB_0003f125;
    }
  }
  instance_update_creature_control_049dd9();
  person_update_creature_control_064ae7();
  uval = 0;
LAB_0003f125:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_fn_03f4c0 (Original VA: 0x3f4c0, Ghidra: FUN_0003f4c0)
 * Prototype: undefined8 impset_fn_03f4c0(void);
 * Address  : 0x3f4c0 (Size: 52 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03f4c0
 * Callers  : 0 -> 
 * Callees  : 1 -> impset_update_slab_subtile_columns_03af4b
 ******************************************************************************/
undefined8 impset_fn_03f4c0(void)

{
  undefined4 arg_edx;
  
  impset_update_slab_subtile_columns_03af4b();
  person_update_creature_control_064ae7();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_update_creature_control_03f4f4 (Original VA: 0x3f4f4, Ghidra: FUN_0003f4f4)
 * Prototype: undefined8 impset_update_creature_control_03f4f4(void);
 * Address  : 0x3f4f4 (Size: 368 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> event_fn_0274ad, impset_process_slabmap_tile_03aef2, impset_update_slab_subtile_columns_03af4b, instance_negative_instance_049bfc, moodneed_fn_051374
 ******************************************************************************/
undefined8 impset_update_creature_control_03f4f4(void)

{
  byte room_off;
  int slab_coord;
  int thing;
  int val;
  undefined4 uval;
  int slab_coord_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  
  slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)];
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)];
  if (((int)((uint)*(byte *)(thing + 0xe) -
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2e)) < 1) && /* thing->ccontrol_idx */
     ((int)((uint)*(byte *)(thing + 0x10) -
           (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x30)) < 1)) { /* thing->ccontrol_idx */
    val = impset_update_slab_subtile_columns_03af4b();
    if (val == 0) {
      slab_coord_2 = impset_process_slabmap_tile_03aef2();
      if (slab_coord_2 == 0) goto LAB_0003f4a6;
      if (*(char *)(extraout_ECX_00 + 0xd2) != '\x1f') {
        instance_negative_instance_049bfc(0);
      }
    }
    else if (*(char *)(extraout_ECX + 0xd2) == '\0') {
      instance_negative_instance_049bfc(0);
      if (((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(slab_coord_2 + slab_coord * 0x55) * 6] * 0x16] == '\x04'
          ) && (room_off = (&g_bss_002d33c8)
                        [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55 +
                         (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)]) * 6], (uint)room_off * 0x45 != 0)) {
        event_fn_0274ad(0);
        if ((int)(char)(&g_bss_002ddd1e)[(uint)room_off * 0x45] ==
            (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
          moodneed_fn_051374();
        }
      }
    }
    uval = 1;
  }
  else {
LAB_0003f4a6:
    instance_update_creature_control_049dd9();
    person_update_creature_control_064ae7();
    uval = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : impset_fn_03f664 (Original VA: 0x3f664, Ghidra: FUN_0003f664)
 * Prototype: longlong impset_fn_03f664(void);
 * Address  : 0x3f664 (Size: 30 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Module impset.cpp procedure @ 0x03f664
 * Callers  : 0 -> 
 * Callees  : 2 -> impset_update_creature_control_03df64, person_fn_063b6d
 ******************************************************************************/
longlong impset_fn_03f664(void)

{
  int val;
  uint arg_edx;
  
  val = impset_update_creature_control_03df64();
  if (val != 0) {
    return CONCAT44(arg_edx,1);
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : impset_update_creature_control_03f682 (Original VA: 0x3f682, Ghidra: FUN_0003f682)
 * Prototype: undefined8 impset_update_creature_control_03f682(void);
 * Address  : 0x3f682 (Size: 121 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> impset_update_creature_control_03df64, impset_update_creature_control_03e286, impset_roll_action_random_03e2d8, move_process_slabmap_tile_0b5264
 ******************************************************************************/
undefined8 impset_update_creature_control_03f682(void)

{
  short short_val;
  int thing;
  int val;
  undefined4 arg_edx;
  int extraout_EDX;
  
  if (1 < (uint)(g_game_turn - *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a))) { /* thing->ccontrol_idx */
    val = impset_update_creature_control_03df64();
    if (val == 0) {
      val = impset_update_creature_control_03e286();
      if (val == 0) {
        val = impset_roll_action_random_03e2d8();
        if (val == 0) {
          short_val = move_process_slabmap_tile_0b5264();
          if (short_val != 0) {
            *(undefined1 *)(extraout_EDX + 8) = 1;
            return CONCAT44(arg_edx,1);
          }
          *(int *)(&g_bss_002e1824 + *(char *)(extraout_EDX + 6) * 0x1508) =
               *(int *)(&g_bss_002e1824 + *(char *)(extraout_EDX + 6) * 0x1508) + 1;
          return CONCAT44(arg_edx,1);
        }
      }
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : impset_process_slabmap_tile_03f6fc (Original VA: 0x3f6fc, Ghidra: FUN_0003f6fc)
 * Prototype: undefined4 impset_process_slabmap_tile_03f6fc(void);
 * Address  : 0x3f6fc (Size: 83 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 2 -> impset_fn_03cee2, impset_fn_03cf87
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 impset_process_slabmap_tile_03f6fc(void)

{
  uint arg_eax;
  int arg_edx;
  int arg_ebx;
  
  if ((((&g_slabmap)[((&g_subtile_to_slab_lut)[arg_edx * 3] + (&g_subtile_to_slab_lut)[arg_ebx * 3] * 0x55) * 6] &
       7) == arg_eax) &&
     (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] * 0x16] & 0x40)
      != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : impset_process_slabmap_tile_03f74f (Original VA: 0x3f74f, Ghidra: FUN_0003f74f)
 * Prototype: undefined4 impset_process_slabmap_tile_03f74f(void);
 * Address  : 0x3f74f (Size: 94 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> imptool_fn_03fc88
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 impset_process_slabmap_tile_03f74f(void)

{
  uint arg_eax;
  int arg_edx;
  int arg_ebx;
  
  if (((((&g_slabmap)[((&g_subtile_to_slab_lut)[arg_edx * 3] + (&g_subtile_to_slab_lut)[arg_ebx * 3] * 0x55) * 6]
        & 7) == arg_eax) ||
      ((uint)((&g_slabmap)
              [((&g_subtile_to_slab_lut)[arg_edx * 3] + (&g_subtile_to_slab_lut)[arg_ebx * 3] * 0x55) * 6] & 7) ==
       (uint)g_neutral_player_number)) &&
     ((&g_data_001921d2)[(uint)(byte)(&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] * 0x16] != '\0'))
  {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : impset_update_creature_and_thing_03fad0 (Original VA: 0x3fad0, Ghidra: FUN_0003fad0)
 * Prototype: undefined4 impset_update_creature_and_thing_03fad0(void);
 * Address  : 0x3fad0 (Size: 175 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 15 -> impset_update_creature_and_thing_03c762, impset_update_creature_and_thing_03c91b, impset_update_creature_and_thing_03ca68, impset_update_slab_subtile_columns_03cbaa, impset_fn_03cee2, impset_fn_03cf87, impset_fn_03d02c, impset_fn_03d0cf ...
 * Callees  : 1 -> imptool_fn_03f859
 ******************************************************************************/
undefined4 impset_update_creature_and_thing_03fad0(void)

{
  undefined2 uval;
  byte *arg_eax;
  int val;
  byte *thing_ptr;
  byte *extraout_ECX;
  uint arg_edx;
  uint arg_ebx;
  
  uval = (undefined2)(arg_edx << 8);
  thing_ptr = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[(char)arg_eax[6] * 0xa84]];
  do {
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr != arg_eax)) &&
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2e) == arg_edx && /* thing->ccontrol_idx */
        (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x30) == arg_ebx)))) { /* thing->ccontrol_idx */
      val = imptool_fn_03f859(uval);
      thing_ptr = extraout_ECX;
      if (val != 0) {
        return 1;
      }
    }
    thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]; /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : impset_process_slabmap_tile_03fcd0 (Original VA: 0x3fcd0, Ghidra: FUN_0003fcd0)
 * Prototype: undefined4 impset_process_slabmap_tile_03fcd0(void);
 * Address  : 0x3fcd0 (Size: 519 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 5 -> impset_fn_03ccdb, impset_update_creature_control_03d633, impset_update_creature_control_03d77d, impset_update_creature_control_03d8b0, impset_stack_type_03e493
 * Callees  : 8 -> imptool_process_map_subtile_03f88a, impset_update_creature_and_thing_03fad0, imptool_process_map_subtile_03fc39, imptool_fn_03fc88, mapwho_fn_050e72, creature_fn_0827fc, move_process_map_subtile_0b28e8, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 impset_process_slabmap_tile_03fcd0(void)

{
  byte flag;
  char slab_coord;
  short short_val;
  undefined2 uval;
  int arg_eax;
  int val;
  int val_2;
  uint uval_2;
  undefined4 *arg_ecx;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint arg_edx;
  uint uval_3;
  int *arg_ebx;
  int val_3;
  undefined8 uval_4;
  int local_34;
  int local_20;
  int local_14;
  int local_10;
  
  flag = *(byte *)(arg_eax + 0xe);
  uval_3 = (arg_edx & 0xffff) % 0x100;
  slab_coord = (&g_slabmap_base)
          [((&g_subtile_to_slab_lut)[(arg_edx & 0xffff) / 0x100] * 0x55 + (&g_subtile_to_slab_lut)[uval_3]) * 6];
  val = imptool_fn_03fc88();
  if (val != 0) {
    bflib_system_io_fn_0e69fc();
    uval_4 = bflib_system_io_fn_0e69fc();
    if ((int)uval_4 < (int)((ulonglong)uval_4 >> 0x20)) {
      if (uval_3 == flag || (int)(uval_3 - flag) < 0) {
        local_10 = 1;
      }
      else {
        local_10 = 3;
      }
    }
    else if (extraout_ECX < 1) {
      local_10 = 2;
    }
    else {
      local_10 = 0;
    }
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      val_3 = uval_3 + *(char *)((int)&g_data_0018b67b + local_10 * 2 + 3) * 2;
      val = imptool_process_map_subtile_03fc39();
      if (val != 0) {
        local_34 = 0;
        for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
          val = val_3;
          if (local_14 != 0) {
            val = *(char *)((int)&g_data_0018b67b +
                             (local_10 + *(int *)(&g_data_0017c060 + local_34) & 3U) * 2 + 3) + val_3;
          }
          val_2 = imptool_process_map_subtile_03fc39();
          if (((val_2 != 0) &&
              (((slab_coord != '4' || (val_2 = mapwho_fn_050e72(), val_2 == 0)) &&
               (val_2 = imptool_process_map_subtile_03f88a(), val_2 == 0)))) && (val_2 = impset_update_creature_and_thing_03fad0(), val_2 == 0)) {
            short_val = (short)(val << 8) + 0x80;
            uval = move_process_map_subtile_0b28e8(short_val,0);
            uval_2 = creature_fn_0827fc(short_val,uval);
            if ((uval_2 & 0xff) != 0xffffffff) {
              *arg_ebx = val;
              *arg_ecx = extraout_ECX_00;
              return 1;
            }
          }
          local_34 = local_34 + 4;
        }
      }
      local_10 = (local_10 + 1) % 4;
    }
  }
  return 0;
}

