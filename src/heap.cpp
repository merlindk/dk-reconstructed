/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: heap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : heap_graphics_heap_already_allocated_03a3d4 (Original VA: 0x3a3d4, Ghidra: FUN_0003a3d4)
 * Prototype: undefined8 heap_graphics_heap_already_allocated_03a3d4(void);
 * Address  : 0x3a3d4 (Size: 231 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp lines 47, 80
 * Purpose  : String 'Graphics heap already allocated'
 * Callers  : 1 -> setup_init_game_screen_and_subsystems
 * Callees  : 4 -> LbErrorLog, LbFileLoadAt, bflib_system_io_fn_0e94b0, bflib_system_io_fn_0f0f8c
 ******************************************************************************/
undefined8 heap_graphics_heap_already_allocated_03a3d4(void)

{
  bool flag;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int val;
  undefined4 uval;
  
  val = g_bss_00334065;
  flag = true;
  if (g_bss_00333187 != 0) {
    LbErrorLog(); /* LbErrorLog("heap.cpp", line 47, "Graphics heap already allocated") */
    bflib_system_io_fn_0e94b0();
    g_bss_00333187 = 0;
    arg_ecx = extraout_ECX;
  }
  do {
    do {
      if (g_bss_00333187 != 0) {
        uval = 1;
        bflib_system_io_fn_0f0f8c(s_GraphicsHeap_Size__d_00164b42,arg_ecx);
LAB_0003a4b3:
        return CONCAT44(arg_edx,uval);
      }
      if (val == 0x20) {
        val = 0x18;
      }
      else if (val == 0x18) {
        val = 0x10;
      }
      else if (val == 0x10) {
        val = 8;
      }
      else if (flag) {
        flag = false;
      }
      g_bss_00333187 = LbFileLoadAt();
      arg_ecx = extraout_ECX_00;
    } while ((val != 8) || (g_bss_00333187 != 0));
    if (extraout_ECX_00 < 0x80000) {
      LbErrorLog(); /* LbErrorLog("heap.cpp", line 80, "Unable to allocate Graphic Heap") */
      uval = 0;
      goto LAB_0003a4b3;
    }
    arg_ecx = extraout_ECX_00 + -0x4000;
  } while( true );
}

/******************************************************************************
 * Function : heap_fn_03a4bb (Original VA: 0x3a4bb, Ghidra: FUN_0003a4bb)
 * Prototype: void heap_fn_03a4bb(void);
 * Address  : 0x3a4bb (Size: 21 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Purpose  : Module heap.cpp procedure @ 0x03a4bb
 * Callers  : 2 -> setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 1 -> bflib_system_io_fn_0e94b0
 ******************************************************************************/
void heap_fn_03a4bb(void)

{
  bflib_system_io_fn_0e94b0();
  g_bss_00333187 = 0;
  return;
}

/******************************************************************************
 * Function : heap_graphics_heap_allocated_03a4e3 (Original VA: 0x3a4e3, Ghidra: FUN_0003a4e3)
 * Prototype: void heap_graphics_heap_allocated_03a4e3(void);
 * Address  : 0x3a4e3 (Size: 155 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp lines 147, 156
 * Purpose  : String 'Graphics Heap not allocated'
 * Callers  : 2 -> inits_could_create_ambient_sound_0404f7, setup_init_game_screen_and_subsystems
 * Callees  : 4 -> heap_open_keeper_data_file_03a7b8, heap_fn_03a8a8, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
void heap_graphics_heap_allocated_03a4e3(void)

{
  if (g_bss_00333187 == 0) {
    LbErrorLog(); /* LbErrorLog("heap.cpp", line 147, "Graphics Heap not allocated") */
    return;
  }
  g_bss_0033f29c = heap_fn_03a8a8();
  if (g_bss_0033f29c == 0) {
    LbErrorLog(); /* LbErrorLog("heap.cpp", line 156, "NOT ENOUGH MEMORY TO INITIALISE HEAP.") */
  }
  heap_open_keeper_data_file_03a7b8();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : heap_fn_03a57e (Original VA: 0x3a57e, Ghidra: FUN_0003a57e)
 * Prototype: void heap_fn_03a57e(void);
 * Address  : 0x3a57e (Size: 44 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Purpose  : Module heap.cpp procedure @ 0x03a57e
 * Callers  : 3 -> inits_could_create_ambient_sound_0404f7, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 2 -> heap_fn_03a839, LbScreenWaitVbi
 ******************************************************************************/
void heap_fn_03a57e(void)

{
  heap_fn_03a839();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : heap_fn_03a5aa (Original VA: 0x3a5aa, Ghidra: FUN_0003a5aa)
 * Prototype: undefined8 heap_fn_03a5aa(void);
 * Address  : 0x3a5aa (Size: 33 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Purpose  : Module heap.cpp procedure @ 0x03a5aa
 * Callers  : 2 -> lair_update_creature_control_04c7eb, lair_fn_04ca51
 * Callees  : 3 -> heap_fn_03a6a4, heap_fn_03a6f3, heap_fn_03a742
 ******************************************************************************/
undefined8 heap_fn_03a5aa(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  
  heap_fn_03a6a4();
  uval = heap_fn_03a742();
  heap_fn_03a6f3();
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : heap_find_freeable_item_03a5cb (Original VA: 0x3a5cb, Ghidra: FUN_0003a5cb)
 * Prototype: undefined8 heap_find_freeable_item_03a5cb(void);
 * Address  : 0x3a5cb (Size: 217 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp lines 314
 * Purpose  : String 'Unable to find freeable item'
 * Callers  : 1 -> heap_fn_03a742
 * Callees  : 5 -> heap_fn_03a857, heapmgr_overlapping_heap_blocks_03a8f7, heapmgr_fn_03aa62, heapmgr_fn_03ad39, LbErrorLog
 ******************************************************************************/
undefined8 heap_find_freeable_item_03a5cb(void)

{
  int val;
  int val_2;
  undefined4 uval;
  undefined2 extraout_CX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uval_2;
  undefined4 arg_edx;
  int val_3;
  
  val_3 = 0;
  do {
    val = heapmgr_overlapping_heap_blocks_03a8f7();
    uval_2 = extraout_ECX;
    if (val != 0) break;
    val_2 = heapmgr_fn_03aa62();
    if (val_2 < 0) {
      heapmgr_fn_03ad39();
      val = heapmgr_overlapping_heap_blocks_03a8f7();
      uval_2 = extraout_ECX_01;
      if (val == 0) goto LAB_0003a631;
      break;
    }
    val_3 = val_3 + 1;
    *(undefined4 *)(&g_bss_0033f2a0 + val_2 * 4) = 0;
    *(undefined4 *)(&g_bss_003363a8 + val_2 * 4) = 0;
    uval_2 = extraout_ECX_00;
  } while (val_3 < 100);
  if (val_3 < 100) {
    val_3 = heap_fn_03a857();
    if (val_3 != 0) {
      *(int *)(&g_bss_0033f2a0 + (uval_2 & 0xffff) * 4) = val;
      *(int *)(&g_bss_003363a8 + (uval_2 & 0xffff) * 4) = val;
      uval = 1;
      *(undefined2 *)(val + 10) = extraout_CX;
      goto LAB_0003a4b5;
    }
  }
LAB_0003a631:
  LbErrorLog(); /* LbErrorLog("heap.cpp", line 314, "Unable to find freeable item") */
  uval = 0;
LAB_0003a4b5:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : heap_fn_03a6a4 (Original VA: 0x3a6a4, Ghidra: FUN_0003a6a4)
 * Prototype: void heap_fn_03a6a4(void);
 * Address  : 0x3a6a4 (Size: 79 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Purpose  : Module heap.cpp procedure @ 0x03a6a4
 * Callers  : 1 -> heap_fn_03a5aa
 * Callees  : 0 -> 
 ******************************************************************************/
void heap_fn_03a6a4(void)

{
  uint arg_eax;
  int loop_i;
  int *int_ptr;
  uint uval;
  
  loop_i = g_bss_002f10da + (arg_eax & 0xffff) * 0x10;
  if (*(char *)(loop_i + 8) == '\0') {
    uval = (uint)*(byte *)(loop_i + 9);
  }
  else {
    uval = (uint)*(byte *)(loop_i + 9) * 5;
  }
  int_ptr = (int *)(&g_bss_0033f2a0 + (arg_eax & 0xffff) * 4);
  for (loop_i = 0; loop_i < (int)uval; loop_i = loop_i + 1) {
    if (*int_ptr != 0) {
      *(byte *)(*int_ptr + 8) = *(byte *)(*int_ptr + 8) | 2;
    }
    int_ptr = int_ptr + 1;
  }
  return;
}

/******************************************************************************
 * Function : heap_fn_03a6f3 (Original VA: 0x3a6f3, Ghidra: FUN_0003a6f3)
 * Prototype: void heap_fn_03a6f3(void);
 * Address  : 0x3a6f3 (Size: 79 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Purpose  : Module heap.cpp procedure @ 0x03a6f3
 * Callers  : 1 -> heap_fn_03a5aa
 * Callees  : 0 -> 
 ******************************************************************************/
void heap_fn_03a6f3(void)

{
  uint arg_eax;
  int loop_i;
  int *int_ptr;
  uint uval;
  
  loop_i = g_bss_002f10da + (arg_eax & 0xffff) * 0x10;
  if (*(char *)(loop_i + 8) == '\0') {
    uval = (uint)*(byte *)(loop_i + 9);
  }
  else {
    uval = (uint)*(byte *)(loop_i + 9) * 5;
  }
  int_ptr = (int *)(&g_bss_0033f2a0 + (arg_eax & 0xffff) * 4);
  for (loop_i = 0; loop_i < (int)uval; loop_i = loop_i + 1) {
    if (*int_ptr != 0) {
      *(byte *)(*int_ptr + 8) = *(byte *)(*int_ptr + 8) & 0xfd;
    }
    int_ptr = int_ptr + 1;
  }
  return;
}

/******************************************************************************
 * Function : heap_fn_03a742 (Original VA: 0x3a742, Ghidra: FUN_0003a742)
 * Prototype: undefined8 heap_fn_03a742(void);
 * Address  : 0x3a742 (Size: 118 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Purpose  : Module heap.cpp procedure @ 0x03a742
 * Callers  : 1 -> heap_fn_03a5aa
 * Callees  : 2 -> heap_find_freeable_item_03a5cb, heapmgr_fn_03aa24
 ******************************************************************************/
undefined8 heap_fn_03a742(void)

{
  uint arg_eax;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  int loop_i;
  int *int_ptr;
  uint uval_2;
  
  loop_i = (arg_eax & 0xffff) * 0x10 + g_bss_002f10da;
  if (*(char *)(loop_i + 8) == '\0') {
    uval_2 = (uint)*(byte *)(loop_i + 9);
  }
  else {
    uval_2 = (uint)*(byte *)(loop_i + 9) * 5;
  }
  int_ptr = (int *)(&g_bss_0033f2a0 + (arg_eax & 0xffff) * 4);
  for (loop_i = 0; loop_i < (int)uval_2; loop_i = loop_i + 1) {
    if (*int_ptr == 0) {
      val = heap_find_freeable_item_03a5cb();
      uval = 0;
      if (val == 0) goto LAB_0003a4b5;
      *(byte *)(*int_ptr + 8) = *(byte *)(*int_ptr + 8) | 2;
    }
    else {
      heapmgr_fn_03aa24();
    }
    int_ptr = int_ptr + 1;
  }
  uval = 1;
LAB_0003a4b5:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : heap_open_keeper_data_file_03a7b8 (Original VA: 0x3a7b8, Ghidra: FUN_0003a7b8)
 * Prototype: undefined8 heap_open_keeper_data_file_03a7b8(void);
 * Address  : 0x3a7b8 (Size: 129 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp lines 470
 * Purpose  : References 'can not open creature.jty <open_keeper_data_file()>'
 * Callers  : 1 -> heap_graphics_heap_allocated_03a4e3
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, LbErrorLog, dk_sprintf, LbFileOpen
 ******************************************************************************/
undefined8 heap_open_keeper_data_file_03a7b8(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 local_4c [64];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_4c,s__s_creature_jty_00164c2b,uval);
  g_data_0017bfec = LbFileOpen();
  if (g_data_0017bfec == -1) {
    cdtest_ldata_dkwind00_dat_0150f0();
    g_data_0017bfec = LbFileOpen();
    if (g_data_0017bfec == -1) {
      LbErrorLog(); /* LbErrorLog("heap.cpp", line 470, "can not open creature.jty <open_keeper_data_file()>") */
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : heap_fn_03a839 (Original VA: 0x3a839, Ghidra: FUN_0003a839)
 * Prototype: void heap_fn_03a839(void);
 * Address  : 0x3a839 (Size: 30 bytes)
 * Module   : heap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heap.cpp procedure @ 0x03a839
 * Callers  : 1 -> heap_fn_03a57e
 * Callees  : 1 -> bflib_system_io_fn_0e8a1c
 ******************************************************************************/
void heap_fn_03a839(void)

{
  if (g_data_0017bfec != -1) {
    bflib_system_io_fn_0e8a1c();
    g_data_0017bfec = -1;
  }
  return;
}

/******************************************************************************
 * Function : heap_fn_03a857 (Original VA: 0x3a857, Ghidra: FUN_0003a857)
 * Prototype: undefined4 heap_fn_03a857(void);
 * Address  : 0x3a857 (Size: 79 bytes)
 * Module   : heap.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module heap.cpp procedure @ 0x03a857
 * Callers  : 1 -> heap_find_freeable_item_03a5cb
 * Callees  : 2 -> LbFileWrite, LbFileRead
 ******************************************************************************/
undefined4 heap_fn_03a857(void)

{
  if (g_data_0017bfec != -1) {
    LbFileWrite();
    LbFileRead();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : heap_fn_03a8a8 (Original VA: 0x3a8a8, Ghidra: FUN_0003a8a8)
 * Prototype: int * heap_fn_03a8a8(void);
 * Address  : 0x3a8a8 (Size: 79 bytes)
 * Module   : heap.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module heap.cpp procedure @ 0x03a8a8
 * Callers  : 2 -> heap_graphics_heap_allocated_03a4e3, sndheap_fn_06deac
 * Callees  : 0 -> 
 ******************************************************************************/
int * heap_fn_03a8a8(void)

{
  int *arg_eax;
  int arg_edx;
  int arg_ebx;
  int val;
  
  val = arg_edx - (arg_ebx * 0x1c + 0x24);
  if (val < 1) {
    return (int *)0x0;
  }
  arg_eax[4] = 0;
  arg_eax[5] = 0;
  arg_eax[6] = 0;
  arg_eax[7] = 0;
  arg_eax[8] = 0;
  arg_eax[2] = val;
  arg_eax[3] = arg_ebx;
  *arg_eax = (int)(arg_eax + arg_ebx * 7 + 9);
  arg_eax[1] = (int)arg_eax + arg_edx;
  return arg_eax;
}

