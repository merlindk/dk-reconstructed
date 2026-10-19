/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: mapwho.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 23
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : mapwho_process_map_subtile_050c38 (Original VA: 0x50c38, Ghidra: FUN_00050c38)
 * Prototype: void mapwho_process_map_subtile_050c38(void);
 * Address  : 0x50c38 (Size: 113 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 22 -> effect_allocate_light_effect_024998, inits_told_you_so_create_043bb3, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, inits_told_you_so_create_0449a4, inits_told_you_so_create_044b13 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void mapwho_process_map_subtile_050c38(void)

{
  uint *word_ptr;
  int val;
  byte *gui_btn;
  ushort uval;
  
  uval = (ushort)((uint)(*(int *)((int)&g_map_subtiles +
                                  (uint)CONCAT11(gui_btn[0x10],gui_btn[0xe]) * 5 + 1) << 10) >> 0x15);
  *(ushort *)(gui_btn + 2) = uval;
  if (uval != 0) {
    *(undefined2 *)((&g_thing_ptrs)[uval] + 4) = *(undefined2 *)(gui_btn + 0x1b); /* gui_btn->id_num */
  }
  uval = *(ushort *)(gui_btn + 0x1b); /* gui_btn->id_num */
  val = (uint)CONCAT11(gui_btn[0x10],gui_btn[0xe]) * 5;
  word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
  *word_ptr = *word_ptr & 0xffc007ff;
  word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
  *word_ptr = *word_ptr | (uval & 0x7ff) << 0xb;
  gui_btn[4] = 0;
  gui_btn[5] = 0;
  *gui_btn = *gui_btn | 2;
  return;
}

/******************************************************************************
 * Function : mapwho_process_map_subtile_050ca9 (Original VA: 0x50ca9, Ghidra: FUN_00050ca9)
 * Prototype: void mapwho_process_map_subtile_050ca9(void);
 * Address  : 0x50ca9 (Size: 124 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 13 -> lair_update_creature_control_04d2c3, structs_update_creature_control_072af4, creature_fn_081eac, creature_fn_081ed4, creature_thing_hand_084904, move_fn_0b3b10, move_update_creature_control_0b3dac, move_shot_has_hit_thing_0b41d8 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void mapwho_process_map_subtile_050ca9(void)

{
  uint *word_ptr;
  ushort uval;
  int val;
  byte *arg_eax;
  
  if ((*arg_eax & 2) != 0) {
    if (*(short *)(arg_eax + 4) == 0) {
      uval = *(ushort *)(arg_eax + 2);
      val = (uint)CONCAT11(arg_eax[0x10],arg_eax[0xe]) * 5;
      word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
      *word_ptr = *word_ptr & 0xffc007ff;
      word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
      *word_ptr = *word_ptr | (uval & 0x7ff) << 0xb;
    }
    else {
      *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(arg_eax + 4)] + 2) = *(undefined2 *)(arg_eax + 2);
    }
    if (*(short *)(arg_eax + 2) != 0) {
      *(undefined2 *)((&g_thing_ptrs)[*(ushort *)(arg_eax + 2)] + 4) = *(undefined2 *)(arg_eax + 4);
    }
    arg_eax[4] = 0;
    arg_eax[5] = 0;
    arg_eax[2] = 0;
    arg_eax[3] = 0;
    *arg_eax = *arg_eax & 0xfd;
  }
  return;
}

/******************************************************************************
 * Function : mapwho_process_map_subtile_050d25 (Original VA: 0x50d25, Ghidra: FUN_00050d25)
 * Prototype: void mapwho_process_map_subtile_050d25(void);
 * Address  : 0x50d25 (Size: 23 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> game_out_sync_gameturn_036ff4, inits_roll_action_random_040d25, inits_update_player_view_state_040db9
 * Callees  : 0 -> 
 ******************************************************************************/
void mapwho_process_map_subtile_050d25(void)

{
  uint *word_ptr;
  int val;
  int val_2;
  
  val_2 = 0;
  do {
    val = val_2 + 5;
    word_ptr = (uint *)((int)&g_map_subtiles + val_2 + 1);
    *word_ptr = *word_ptr & 0xffc007ff;
    val_2 = val;
  } while (val != 0x50000);
  return;
}

/******************************************************************************
 * Function : mapwho_process_map_subtile_050d3c (Original VA: 0x50d3c, Ghidra: FUN_00050d3c)
 * Prototype: uint mapwho_process_map_subtile_050d3c(void);
 * Address  : 0x50d3c (Size: 84 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 17 -> door_fn_023014, good_update_creature_control_038668, good_update_creature_control_0386e1, mapwho_fn_050e72, mapwho_fn_050ea6, torture_move_torture_0744d5, room_created_chicken_wall_0c7f7c, room_how_room_exist_slabs_0c8654 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint mapwho_process_map_subtile_050d3c(void)

{
  char arg_al;
  uint thing_ptr;
  uint arg_ecx;
  ushort arg_dx;
  uint arg_ebx;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles + ((arg_ecx & 0xffff) * 0x100 + (arg_ebx & 0xffff)) * 5 + 1
                    ) & 0x3fffff) >> 0xb;
  do {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(char *)(thing_ptr + 0x1f) == arg_al) { /* thing->class_id */
      if (*(byte *)(thing_ptr + 0x1a) == arg_dx) {
        return thing_ptr;
      }
      if (arg_dx == 0xffff) {
        return thing_ptr;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  } while( true );
}

/******************************************************************************
 * Function : mapwho_process_map_subtile_050d90 (Original VA: 0x50d90, Ghidra: FUN_00050d90)
 * Prototype: longlong mapwho_process_map_subtile_050d90(void);
 * Address  : 0x50d90 (Size: 83 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> room_process_dungeon_room_0c6be0
 * Callees  : 0 -> 
 ******************************************************************************/
longlong mapwho_process_map_subtile_050d90(void)

{
  uint thing;
  uint arg_edx;
  uint thing_ptr;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles +
                    (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe)) * 5
                    + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (((*(char *)(thing + 0x1f) == *(char *)(thing_ptr + 0x1f)) && /* thing->class_id */
        (*(char *)(thing + 0x1a) == *(char *)(thing_ptr + 0x1a))) && (thing_ptr != thing)) break;
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  }
  return CONCAT44(arg_edx,thing_ptr);
}

/******************************************************************************
 * Function : mapwho_process_map_subtile_050de3 (Original VA: 0x50de3, Ghidra: FUN_00050de3)
 * Prototype: uint mapwho_process_map_subtile_050de3(void);
 * Address  : 0x50de3 (Size: 84 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> person_update_creature_and_thing_06484c, prison_update_creature_control_065d3e
 * Callees  : 0 -> 
 ******************************************************************************/
uint mapwho_process_map_subtile_050de3(void)

{
  char arg_al;
  uint thing_ptr;
  ushort arg_dx;
  int arg_ebx;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles +
                    (uint)CONCAT11(*(undefined1 *)(arg_ebx + 3),*(undefined1 *)(arg_ebx + 1)) *
                    5 + 1) & 0x3fffff) >> 0xb;
  do {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (arg_al == *(char *)(thing_ptr + 0x1f)) { /* thing->class_id */
      if (*(byte *)(thing_ptr + 0x1a) == arg_dx) {
        return thing_ptr;
      }
      if (arg_dx == 0xffff) {
        return thing_ptr;
      }
    }
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  } while( true );
}

/******************************************************************************
 * Function : mapwho_fn_050e37 (Original VA: 0x50e37, Ghidra: FUN_00050e37)
 * Prototype: void mapwho_fn_050e37(void);
 * Address  : 0x50e37 (Size: 59 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x050e37
 * Callers  : 3 -> mapwho_fn_050ea6, object_process_map_subtile_0c6494, room_process_dungeon_room_0c6be0
 * Callees  : 0 -> 
 ******************************************************************************/
void mapwho_fn_050e37(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  
  *(int *)(arg_eax + 0x13) = *(int *)(arg_eax + 0x13) + arg_edx;
  if (arg_edx + *(int *)(arg_eax + 0x13) < (int)g_bss_002eb9f0) {
    val = *(int *)(arg_eax + 0x13) / 2 + 0x96;
    if (599 < val) {
      val = 600;
    }
    *(short *)(arg_eax + 0x46) = (short)val;
    return;
  }
  *(undefined2 *)(arg_eax + 0x46) = 600;
  return;
}

/******************************************************************************
 * Function : mapwho_fn_050e72 (Original VA: 0x50e72, Ghidra: FUN_00050e72)
 * Prototype: undefined4 mapwho_fn_050e72(void);
 * Address  : 0x50e72 (Size: 52 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x050e72
 * Callers  : 2 -> impset_update_creature_control_03ef50, impset_process_slabmap_tile_03fcd0
 * Callees  : 1 -> mapwho_process_map_subtile_050d3c
 ******************************************************************************/
undefined4 mapwho_fn_050e72(void)

{
  int val;
  
  val = mapwho_process_map_subtile_050d3c();
  if ((val != 0) && ((int)g_bss_002eb9f0 <= *(int *)(val + 0x13))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : mapwho_fn_050ea6 (Original VA: 0x50ea6, Ghidra: FUN_00050ea6)
 * Prototype: int mapwho_fn_050ea6(void);
 * Address  : 0x50ea6 (Size: 116 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x050ea6
 * Callers  : 6 -> impset_update_creature_control_03ef50, shot_update_slab_subtile_columns_06c681, room_process_dungeon_room_0c6be0, room_lair_thinks_it_belongs_0c9280, room_process_thing_entity_0ce418, room_process_thing_entity_0ce630
 * Callees  : 3 -> inits_allocate_light_object_043f07, mapwho_process_map_subtile_050d3c, mapwho_fn_050e37
 ******************************************************************************/
int mapwho_fn_050ea6(void)

{
  int arg_eax;
  int val;
  int val_2;
  
  val = mapwho_process_map_subtile_050d3c();
  if (val == 0) {
    val = inits_allocate_light_object_043f07();
    if (val != 0) {
      *(int *)(val + 0x13) = arg_eax;
      val_2 = arg_eax / 2 + 0x96;
      if (599 < val_2) {
        val_2 = 600;
      }
      *(short *)(val + 0x46) = (short)val_2;
    }
  }
  else {
    mapwho_fn_050e37();
  }
  return val;
}

/******************************************************************************
 * Function : mapwho_trying_create_gold_hoarde_050f1a (Original VA: 0x50f1a, Ghidra: FUN_00050f1a)
 * Prototype: int mapwho_trying_create_gold_hoarde_050f1a(void);
 * Address  : 0x50f1a (Size: 275 bytes)
 * Module   : mapwho.cpp [direct_file_string_xref]
 * OrigLine : mapwho.cpp lines 315
 * Purpose  : String 'Trying to create a gold hoarde with %d gold'
 * Callers  : 3 -> impset_process_dungeon_room_03f238, object_fn_0c6b04, room_process_thing_entity_0ce630
 * Callees  : 3 -> inits_allocate_light_object_043f07, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mapwho_trying_create_gold_hoarde_050f1a(void)

{
  int camera;
  int val;
  int val_2;
  int arg_ebx;
  
  val = ((g_bss_002eb9ea * 9) / 5) *
          (int)((ulonglong)*(ushort *)(camera + 0xe) /
               (ulonglong)(longlong)(int)(uint)*(ushort *)(camera + 0x3b));
  if (arg_ebx < 1) {
    dk_sprintf(&g_log_sprintf_buf,s_Trying_to_create_a_gold_hoarde_w_001659cc);
    LbErrorLog(); /* LbErrorLog("mapwho.cpp", line 315, g_log_buf) */
    return 0;
  }
  if (val < arg_ebx) {
    arg_ebx = val;
  }
  val = inits_allocate_light_object_043f07((int)*(char *)(camera + 3));
  if (val != 0) {
    val_2 = g_bss_002eb9ea * 9;
    if (arg_ebx < g_bss_002eb9ea * 9) {
      val_2 = arg_ebx;
    }
    *(int *)(val + 0x13) = val_2;
    *(int *)(camera + 0x17) = *(int *)(camera + 0x17) + val_2; /* camera->zoom */
    (&g_bss_002e1082)[*(char *)(camera + 3) * 0x542] =
         (&g_bss_002e1082)[*(char *)(camera + 3) * 0x542] + *(int *)(val + 0x13);
    val_2 = *(int *)(val + 0x13) / ((g_bss_002eb9ea * 9) / 5);
    if (3 < val_2) {
      val_2 = 4;
    }
    *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + (short)val_2;
  }
  return val;
}

/******************************************************************************
 * Function : mapwho_fn_05102d (Original VA: 0x5102d, Ghidra: FUN_0005102d)
 * Prototype: int mapwho_fn_05102d(void);
 * Address  : 0x5102d (Size: 336 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x05102d
 * Callers  : 4 -> angtool_process_dungeon_room_010fdf, dungeon_remove_reserve_023868, magic_update_player_dungeon_04faf1, room_process_thing_entity_0ce418
 * Callees  : 1 -> structs_update_creature_control_072af4
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mapwho_fn_05102d(void)

{
  byte flag;
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  int local_14;
  
  if (arg_ebx != 0) {
    if (*(int *)(arg_eax + 0x13) < arg_ebx) {
      arg_ebx = *(int *)(arg_eax + 0x13);
    }
    local_14 = *(int *)(arg_eax + 0x13) / ((g_bss_002eb9ea * 9) / 5);
    if (3 < local_14) {
      local_14 = 4;
    }
    *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) - (short)local_14;
    *(int *)(arg_eax + 0x13) = *(int *)(arg_eax + 0x13) - arg_ebx;
    *(int *)(arg_edx + 0x17) = *(int *)(arg_edx + 0x17) - arg_ebx;
    (&g_bss_002e1082)[*(char *)(arg_eax + 6) * 0x542] =
         (&g_bss_002e1082)[*(char *)(arg_eax + 6) * 0x542] - arg_ebx;
    if (*(int *)(arg_eax + 0x13) == 0) {
      structs_update_creature_control_072af4();
    }
    else {
      val = *(int *)(arg_eax + 0x13) / ((g_bss_002eb9ea * 9) / 5);
      if (3 < val) {
        val = 4;
      }
      *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) + (short)val;
      val = *(int *)(arg_eax + 0x13) / ((g_bss_002eb9ea * 9) / 5);
      if (3 < val) {
        val = 4;
      }
      flag = (&g_data_0017c978)[val * 2];
      *(byte *)(arg_eax + 0x1a) = flag;
      val = (uint)flag * 0x16;
      draw_roll_action_random_08ccec(0,0,(&g_data_0018b917)[val],*(undefined2 *)(&g_data_0018b913 + val));
    }
  }
  return arg_ebx;
}

/******************************************************************************
 * Function : mapwho_fn_05117d (Original VA: 0x5117d, Ghidra: FUN_0005117d)
 * Prototype: int mapwho_fn_05117d(void);
 * Address  : 0x5117d (Size: 367 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x05117d
 * Callers  : 4 -> file_buff_struct_num_02ab14, impset_process_dungeon_room_03f238, object_fn_0c6b04, room_process_thing_entity_0ce630
 * Callees  : 1 -> draw_roll_action_random_08ccec
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mapwho_fn_05117d(void)

{
  byte flag;
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  int local_18;
  
  val = ((g_bss_002eb9ea * 9) / 5) *
          (int)((ulonglong)*(ushort *)(arg_edx + 0xe) /
               (ulonglong)(longlong)(int)(uint)*(ushort *)(arg_edx + 0x3b));
  if (val < *(int *)(arg_eax + 0x13) + arg_ebx) {
    arg_ebx = val - *(int *)(arg_eax + 0x13);
  }
  if (arg_ebx != 0) {
    local_18 = *(int *)(arg_eax + 0x13) / ((g_bss_002eb9ea * 9) / 5);
    if (3 < local_18) {
      local_18 = 4;
    }
    *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) - (short)local_18;
    *(int *)(arg_eax + 0x13) = *(int *)(arg_eax + 0x13) + arg_ebx;
    *(int *)(arg_edx + 0x17) = *(int *)(arg_edx + 0x17) + arg_ebx;
    if ((int)*(char *)(arg_eax + 6) != (uint)g_neutral_player_number) {
      (&g_bss_002e1082)[*(char *)(arg_eax + 6) * 0x542] =
           (&g_bss_002e1082)[*(char *)(arg_eax + 6) * 0x542] + arg_ebx;
    }
    val = *(int *)(arg_eax + 0x13) / ((g_bss_002eb9ea * 9) / 5);
    if (3 < val) {
      val = 4;
    }
    *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) + (short)val;
    val = *(int *)(arg_eax + 0x13) / ((g_bss_002eb9ea * 9) / 5);
    if (3 < val) {
      val = 4;
    }
    flag = (&g_data_0017c978)[val * 2];
    *(byte *)(arg_eax + 0x1a) = flag;
    draw_roll_action_random_08ccec(0,0,(&g_data_0018b917)[(uint)flag * 0x16]);
  }
  return arg_ebx;
}

/******************************************************************************
 * Function : mapwho_handle_object_thing_0512ec (Original VA: 0x512ec, Ghidra: FUN_000512ec)
 * Prototype: longlong mapwho_handle_object_thing_0512ec(void);
 * Address  : 0x512ec (Size: 50 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 2 -> mapwho_process_map_subtile_05131e, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 0 -> 
 ******************************************************************************/
longlong mapwho_handle_object_thing_0512ec(void)

{
  char ch;
  int thing;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x01') && /* thing->class_id */
     ((((ch = *(char *)(thing + 0x1a), ch == '4' || (ch == '5')) || (ch == '6')) ||
      ((ch == '7' || (ch == '8')))))) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : mapwho_process_map_subtile_05131e (Original VA: 0x5131e, Ghidra: FUN_0005131e)
 * Prototype: uint mapwho_process_map_subtile_05131e(void);
 * Address  : 0x5131e (Size: 84 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 8 -> angtool_process_dungeon_room_010fdf, dungeon_remove_reserve_023868, impset_process_dungeon_room_03f238, ceiling_roll_action_random_07d674, object_fn_0c6b04, room_lair_thinks_it_belongs_0c9280, room_roll_action_random_0cc51c, room_process_thing_entity_0ce418
 * Callees  : 1 -> mapwho_handle_object_thing_0512ec
 ******************************************************************************/
uint mapwho_process_map_subtile_05131e(void)

{
  uint arg_eax;
  uint arg_edx;
  uint thing_ptr;
  undefined8 uval;
  
  thing_ptr = (&g_thing_ptrs)
          [(*(uint *)((int)&g_map_subtiles + ((arg_edx & 0xffff) * 0x100 + (arg_eax & 0xffff)) * 5 + 1)
           & 0x3fffff) >> 0xb];
  do {
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(char *)(thing_ptr + 0x1f) == '\x01') { /* thing->class_id */
      uval = mapwho_handle_object_thing_0512ec();
      thing_ptr = (uint)((ulonglong)uval >> 0x20);
      if ((int)uval != 0) {
        return thing_ptr;
      }
    }
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
  } while( true );
}

/******************************************************************************
 * Function : mapwho_fn_051417 (Original VA: 0x51417, Ghidra: FUN_00051417)
 * Prototype: void mapwho_fn_051417(void);
 * Address  : 0x51417 (Size: 59 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x051417
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 3 -> moodneed_fn_051374, mapwho_fn_051533, sound_speech_emitter_has_been_06ebff
 ******************************************************************************/
void mapwho_fn_051417(void)

{
  int val;
  
  val = sound_speech_emitter_has_been_06ebff();
  if ((val == 0) && (g_bss_0034b238 = val, g_bss_0034b214 != '\0')) {
    mapwho_fn_051533();
    moodneed_fn_051374();
  }
  return;
}

/******************************************************************************
 * Function : mapwho_fn_051452 (Original VA: 0x51452, Ghidra: FUN_00051452)
 * Prototype: void mapwho_fn_051452(void);
 * Address  : 0x51452 (Size: 22 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x051452
 * Callers  : 2 -> inits_could_create_ambient_sound_0404f7, mapwho_fn_051468
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void mapwho_fn_051452(void)

{
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : mapwho_fn_051468 (Original VA: 0x51468, Ghidra: FUN_00051468)
 * Prototype: void mapwho_fn_051468(void);
 * Address  : 0x51468 (Size: 28 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x051468
 * Callers  : 2 -> inits_could_create_ambient_sound_0404f7, sound_process_thing_entity_06f3d6
 * Callees  : 1 -> mapwho_fn_051452
 ******************************************************************************/
void mapwho_fn_051468(void)

{
  int val;
  int val_2;
  
  mapwho_fn_051452();
  val_2 = 0;
  do {
    val = val_2 + 0xc;
    *(undefined4 *)((int)&g_data_0017cb84 + val_2) = 0;
    val_2 = val;
  } while (val != 0x5e8);
  return;
}

/******************************************************************************
 * Function : mapwho_roll_unsynced_random_051484 (Original VA: 0x51484, Ghidra: FUN_00051484)
 * Prototype: undefined8 mapwho_roll_unsynced_random_051484(void);
 * Address  : 0x51484 (Size: 62 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed)
 * Callers  : 1 -> moodneed_fn_051374
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 mapwho_roll_unsynced_random_051484(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  return CONCAT44(arg_edx,u________________0123456789__<_>___0017ca04[arg_eax * 3 + 0x5e] +
                         g_unsynced_random_seed % *(uint *)(&g_data_0017cb80 + arg_eax * 0xc));
}

/******************************************************************************
 * Function : mapwho_fn_0514c2 (Original VA: 0x514c2, Ghidra: FUN_000514c2)
 * Prototype: undefined4 mapwho_fn_0514c2(void);
 * Address  : 0x514c2 (Size: 8 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x0514c2
 * Callers  : 1 -> moodneed_fn_051374
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 mapwho_fn_0514c2(void)

{
  int arg_eax;
  
  return *(undefined4 *)(&g_data_0017c984 + arg_eax * 4);
}

/******************************************************************************
 * Function : mapwho_fn_0514ca (Original VA: 0x514ca, Ghidra: FUN_000514ca)
 * Prototype: longlong mapwho_fn_0514ca(void);
 * Address  : 0x514ca (Size: 46 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x0514ca
 * Callers  : 1 -> moodneed_fn_051374
 * Callees  : 0 -> 
 ******************************************************************************/
longlong mapwho_fn_0514ca(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = 0;
  while( true ) {
    if (0x23 < val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (((&g_bss_0034b214)[val] == '\x01') && (arg_eax == *(int *)((int)&g_bss_0034b215 + val)))
    break;
    val = val + 9;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : mapwho_fn_0514f8 (Original VA: 0x514f8, Ghidra: FUN_000514f8)
 * Prototype: undefined4 mapwho_fn_0514f8(void);
 * Address  : 0x514f8 (Size: 59 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x0514f8
 * Callers  : 1 -> moodneed_fn_051374
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 mapwho_fn_0514f8(void)

{
  undefined4 arg_eax;
  int val;
  undefined4 arg_edx;
  
  val = 0;
  while( true ) {
    if (0x23 < val) {
      return 0;
    }
    if ((&g_bss_0034b214)[val] == '\0') break;
    val = val + 9;
  }
  (&g_bss_0034b214)[val] = 1;
  *(undefined4 *)((int)&g_bss_0034b215 + val) = arg_eax;
  *(undefined4 *)((int)&g_bss_0034b219 + val) = arg_edx;
  return 1;
}

/******************************************************************************
 * Function : mapwho_fn_051533 (Original VA: 0x51533, Ghidra: FUN_00051533)
 * Prototype: longlong mapwho_fn_051533(void);
 * Address  : 0x51533 (Size: 102 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x051533
 * Callers  : 1 -> mapwho_fn_051417
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
longlong mapwho_fn_051533(void)

{
  int arg_eax;
  int loop_i;
  uint arg_edx;
  int val;
  
  if ((&g_bss_0034b214)[arg_eax * 9] != '\x01') {
    return (ulonglong)arg_edx << 0x20;
  }
  val = arg_eax + 1;
  for (loop_i = val * 9; loop_i < 0x24; loop_i = loop_i + 9) {
    *(undefined4 *)((int)&g_bss_0034b208 + loop_i + 3) = *(undefined4 *)(&g_bss_0034b214 + loop_i);
    *(undefined4 *)((int)&g_bss_0034b20c + loop_i + 3) =
         *(undefined4 *)((int)&g_bss_0034b215 + loop_i + 3);
    *(undefined1 *)((int)&g_bss_0034b210 + loop_i + 3) =
         *(undefined1 *)((int)&g_bss_0034b219 + loop_i + 3);
    if ((&g_bss_0034b214)[loop_i] == '\0') break;
    val = val + 1;
  }
  if (val == 4) {
    LbScreenWaitVbi();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : mapwho_fn_05159c (Original VA: 0x5159c, Ghidra: FUN_0005159c)
 * Prototype: undefined8 mapwho_fn_05159c(int param_1);
 * Address  : 0x5159c (Size: 66 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Purpose  : Module mapwho.cpp procedure @ 0x05159c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 mapwho_fn_05159c(int param_1)

{
  int arg_eax;
  int arg_ecx;
  int loop_i;
  undefined4 *arg_edx;
  int val;
  int arg_ebx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  
  word_ptr = (undefined4 *)(arg_eax + arg_ecx * 0x500 + arg_ebx);
  val = 0x1e0;
  word_ptr_2 = arg_edx;
  do {
    for (loop_i = 0xa0; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + 1;
      word_ptr_2 = word_ptr_2 + 1;
    }
    word_ptr = word_ptr + 0xa0;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + param_1 + -0x280);
    val = val + -1;
  } while (val != 0);
  return CONCAT44(arg_edx,arg_eax);
}

