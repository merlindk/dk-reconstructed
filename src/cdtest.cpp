/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: cdtest.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 8
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : cdtest_process_slabmap_tile_014c9a (Original VA: 0x14c9a, Ghidra: FUN_00014c9a)
 * Prototype: void cdtest_process_slabmap_tile_014c9a(void);
 * Address  : 0x14c9a (Size: 171 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> instance_process_dungeon_room_04a6a2
 * Callees  : 2 -> slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void cdtest_process_slabmap_tile_014c9a(void)

{
  byte slab_coord;
  int arg_eax;
  int arg_edx;
  undefined4 uval;
  
  slab_coord = ((&g_slabmap)
           [((&g_subtile_to_slab_lut)[(arg_eax / 3) * 3] + (&g_subtile_to_slab_lut)[(arg_edx / 3) * 3] * 0x55) * 6] &
          0x1f) >> 3;
  if (slab_coord == 1) {
    uval = 0;
  }
  else if (slab_coord == 2) {
    uval = 0;
  }
  else {
    uval = 1;
  }
  slab_attempt_place_animating_slab_0d7688(uval,(arg_edx / 3) * 3);
  slab_process_slabmap_tile_0da6fc();
  return;
}

/******************************************************************************
 * Function : cdtest_update_player_view_state_014e9f (Original VA: 0x14e9f, Ghidra: FUN_00014e9f)
 * Prototype: void cdtest_update_player_view_state_014e9f(void);
 * Address  : 0x14e9f (Size: 267 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> instance_update_creature_control_04bf40
 * Callees  : 7 -> imptool_stack_pos_0400da, imptool_update_player_dungeon_0401aa, engine3_mark_slab_subtiles_rendered, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0d99f8, slab_process_slabmap_tile_0da6fc, slab_process_slabmap_tile_0da7bc
 ******************************************************************************/
void cdtest_update_player_view_state_014e9f(void)

{
  int arg_eax;
  int val;
  undefined1 arg_bl;
  uint uval;
  
  slab_process_slabmap_tile_0d99f8(arg_bl);
  slab_attempt_place_animating_slab_0d7688(0);
  slab_process_slabmap_tile_0da6fc();
  uval = 0;
  do {
    if (uval != (int)*(char *)(arg_eax + 6)) {
      val = imptool_update_player_dungeon_0401aa();
      if (-1 < val) {
        imptool_stack_pos_0400da();
        if (uval == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
          engine3_mark_slab_subtiles_rendered();
        }
      }
    }
    uval = uval + 1;
  } while ((int)uval < 5);
  slab_process_slabmap_tile_0da7bc();
  return;
}

/******************************************************************************
 * Function : cdtest_process_slabmap_tile_014faa (Original VA: 0x14faa, Ghidra: FUN_00014faa)
 * Prototype: undefined4 cdtest_process_slabmap_tile_014faa(void);
 * Address  : 0x14faa (Size: 134 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> cdtest_fn_015030
 * Callees  : 1 -> imptool_fn_03f80c
 ******************************************************************************/
undefined4 cdtest_process_slabmap_tile_014faa(void)

{
  byte arg_al;
  int val;
  int arg_edx;
  int arg_ebx;
  
  if (((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] * 0x16] ==
       '\x03') &&
     (arg_al != ((&g_slabmap)
                [((&g_subtile_to_slab_lut)[arg_edx * 3 + 1] + (&g_subtile_to_slab_lut)[arg_ebx * 3 + 1] * 0x55) * 6]
               & 7))) {
    val = imptool_fn_03f80c();
    if (val == 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : cdtest_fn_015030 (Original VA: 0x15030, Ghidra: FUN_00015030)
 * Prototype: void cdtest_fn_015030(void);
 * Address  : 0x15030 (Size: 189 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Purpose  : Module cdtest.cpp procedure @ 0x015030
 * Callers  : 5 -> instance_update_player_dungeon_04a40c, object_process_slabmap_tile_0c4b0c, room_how_room_exist_slabs_0d0118, room_how_room_exist_slabs_0d0488, room_fn_0d137c
 * Callees  : 5 -> cdtest_process_slabmap_tile_014faa, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0d9dc0, slab_process_slabmap_tile_0da6fc, slab_process_slabmap_tile_0dab3c
 ******************************************************************************/
void cdtest_fn_015030(void)

{
  byte arg_al;
  int val;
  undefined4 arg_edx;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint auStack_3c [5];
  char local_1c;
  byte local_14;
  
  word_ptr_2 = auStack_3c + 2;
  auStack_3c[4] = arg_edx;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_1c = (char)auStack_3c[4] + *(char *)((int)&g_data_0018b67b + (uint)local_14 * 2 + 3);
    auStack_3c[3] = (uint)arg_al;
    *(undefined4 *)((int)word_ptr_2 + -4) = 0x15082;
    val = cdtest_process_slabmap_tile_014faa();
    word_ptr = (undefined1 *)word_ptr_2;
    if (val != 0) {
      word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
      *(undefined4 *)((int)word_ptr_2 + -4) = 0;
      auStack_3c[2] = (uint)(byte)(local_1c * '\x03' + 1);
      *(undefined4 *)((int)word_ptr_2 + -8) = 0x150c5;
      slab_process_slabmap_tile_0d9dc0();
      *(undefined4 *)((int)word_ptr_2 + -8) = 0x150d3;
      slab_attempt_place_animating_slab_0d7688();
      *(undefined4 *)((int)word_ptr_2 + -8) = 0x150df;
      slab_process_slabmap_tile_0dab3c();
      *(undefined4 *)((int)word_ptr_2 + -8) = 0x150e8;
      slab_process_slabmap_tile_0da6fc();
    }
    word_ptr_2 = (uint *)word_ptr;
  }
  return;
}

/******************************************************************************
 * Function : cdtest_ldata_dkwind00_dat_0150f0 (Original VA: 0x150f0, Ghidra: FUN_000150f0)
 * Prototype: void cdtest_ldata_dkwind00_dat_0150f0(void);
 * Address  : 0x150f0 (Size: 258 bytes)
 * Module   : cdtest.cpp [direct_file_string_xref]
 * OrigLine : cdtest.cpp lines 61
 * Purpose  : String 'LDATA\DKWIND00.DAT'
 * Callers  : 41 -> evil_settings_dat_029738, evil_fn_029800, evil_process_map_subtile_0298b5, file_process_map_subtile_029979, file_process_slabmap_tile_0299f8, file_process_map_subtile_029ac2, file_fn_029b54, file_fn_029bfe ...
 * Callees  : 12 -> cdtest_fn_0151f8, cdtest_fn_015251, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e7904, LbScreenLock, bflib_system_io_fn_0e79fc, LbDataLoadAll ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cdtest_ldata_dkwind00_dat_0150f0(void)

{
  int screen_res;
  int extraout_EDX;
  undefined8 screen_res_2;
  undefined1 local_9c [144];
  
  dk_sprintf(local_9c,s__s__s_001603b3,&g_bss_002ee923,s_LDATA_DKWIND00_DAT_001603a0); /* 0x1603a0="LDATA\DKWIND00.DAT" */
  screen_res_2 = cdtest_fn_0151f8();
  if ((int)screen_res_2 == 0) {
    if ((int)((ulonglong)screen_res_2 >> 0x20) != 0) {
      LbScreenLock();
    }
    screen_res = LbDataLoadAll();
    if (screen_res != 0) {
      LbErrorLog(); /* LbErrorLog("cdtest.cpp", line 61, "Unable to test for CD in drive") */
      return;
    }
    bflib_system_io_fn_0e7904(0);
    LbPaletteSet(g_data_001991a4);
    while (g_bss_0019a2a1 == '\0') {
      screen_res = cdtest_fn_0151f8();
      if (screen_res != 0) break;
      screen_res = cdtest_fn_015251();
      if (screen_res != 0) {
        bflib_system_io_fn_0e79fc();
      }
      while( true ) {
        screen_res = LbKeyboardRead();
        if (screen_res == 0) break;
        screen_res = LbScreenLock();
        if (((screen_res != 0) || (g_bss_0019a2a1 != '\0')) || (g_bss_0019a2a0 != '\0')) goto LAB_000151cf;
      }
      g_bss_0019a2a1 = '\x01';
LAB_000151cf:
      bflib_system_io_fn_0e8858();
    }
    LbDataFree();
    if (extraout_EDX != 0) {
      LbScreenLock();
    }
  }
  return;
}

/******************************************************************************
 * Function : cdtest_fn_0151f2 (Original VA: 0x151f2, Ghidra: FUN_000151f2)
 * Prototype: undefined4 cdtest_fn_0151f2(void);
 * Address  : 0x151f2 (Size: 6 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Purpose  : Module cdtest.cpp procedure @ 0x0151f2
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 cdtest_fn_0151f2(void)

{
  return 3;
}

/******************************************************************************
 * Function : cdtest_fn_0151f8 (Original VA: 0x151f8, Ghidra: FUN_000151f8)
 * Prototype: longlong cdtest_fn_0151f8(void);
 * Address  : 0x151f8 (Size: 89 bytes)
 * Module   : cdtest.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module cdtest.cpp procedure @ 0x0151f8
 * Callers  : 1 -> cdtest_ldata_dkwind00_dat_0150f0
 * Callees  : 4 -> bflib_system_io_fn_0e8876, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead
 ******************************************************************************/
longlong cdtest_fn_0151f8(void)

{
  int file_handle;
  uint arg_edx;
  
  bflib_system_io_fn_0e8876();
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    file_handle = LbFileRead();
    if (file_handle != -1) {
      bflib_system_io_fn_0e8a1c();
      return CONCAT44(arg_edx,1);
    }
    bflib_system_io_fn_0e8a1c();
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : cdtest_fn_015251 (Original VA: 0x15251, Ghidra: FUN_00015251)
 * Prototype: undefined8 cdtest_fn_015251(void);
 * Address  : 0x15251 (Size: 198 bytes)
 * Module   : cdtest.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module cdtest.cpp procedure @ 0x015251
 * Callers  : 1 -> cdtest_ldata_dkwind00_dat_0150f0
 * Callees  : 2 -> LbScreenLock, LbFileClose
 ******************************************************************************/
undefined8 cdtest_fn_015251(void)

{
  undefined1 uval;
  int screen_res;
  int val;
  undefined4 uval_2;
  undefined1 *word_ptr;
  int extraout_ECX;
  undefined4 arg_edx;
  undefined1 *word_ptr_2;
  
  screen_res = LbScreenLock();
  if (screen_res == 1) {
    if ((g_active_screen_mode == 0xd) || (g_active_screen_mode == 10)) {
      word_ptr = g_display_bss_003d9818;
      if (g_active_screen_mode == 0xd) {
        word_ptr = g_display_bss_003d9818 + g_screen_pitch * 0x28;
      }
      screen_res = 0;
      word_ptr_2 = g_data_001991a0;
      do {
        val = 0;
        do {
          uval = *word_ptr_2;
          *word_ptr = uval;
          val = val + 1;
          word_ptr_2 = word_ptr_2 + 1;
          word_ptr[1] = uval;
          word_ptr = word_ptr + 2;
        } while (val < 0x140);
        screen_res = screen_res + 1;
        LbFileClose();
        word_ptr = (undefined1 *)(extraout_ECX + g_screen_pitch);
      } while (screen_res < 200);
    }
    else {
      screen_res = 0;
      do {
        LbFileClose();
        screen_res = screen_res + 1;
      } while (screen_res < 200);
    }
    LbScreenLock();
    uval_2 = 1;
  }
  else {
    uval_2 = 0;
  }
  return CONCAT44(arg_edx,uval_2);
}

