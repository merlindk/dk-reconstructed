/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: heapmgr.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : heapmgr_overlapping_heap_blocks_03a8f7 (Original VA: 0x3a8f7, Ghidra: FUN_0003a8f7)
 * Prototype: int * heapmgr_overlapping_heap_blocks_03a8f7(void);
 * Address  : 0x3a8f7 (Size: 301 bytes)
 * Module   : heapmgr.cpp [direct_file_string_xref]
 * OrigLine : heapmgr.cpp lines 86, 135
 * Purpose  : String 'Overlapping heap blocks'
 * Callers  : 2 -> heap_find_freeable_item_03a5cb, sndheap_trying_use_two_sound_06e2aa
 * Callees  : 2 -> heapmgr_fn_03ad7a, LbErrorLog
 ******************************************************************************/
int * heapmgr_overlapping_heap_blocks_03a8f7(void)

{
  int val;
  int *arg_eax;
  int *int_ptr;
  int *int_ptr_2;
  int *extraout_ECX;
  int arg_edx;
  int val_2;
  
  if (arg_eax[2] - arg_eax[5] < arg_edx) {
LAB_0003a90d:
    int_ptr = (int *)0x0;
  }
  else {
    int_ptr = (int *)heapmgr_fn_03ad7a();
    if (int_ptr == (int *)0x0) {
      return (int *)0x0;
    }
    if (arg_eax[6] == 0) {
      arg_eax[6] = (int)int_ptr;
      *int_ptr = *arg_eax;
    }
    else {
      int_ptr_2 = (int *)arg_eax[6];
      if (*int_ptr_2 - *arg_eax < arg_edx) {
        while( true ) {
          if (int_ptr_2[4] == 0) {
            val_2 = arg_eax[1] - (*int_ptr_2 + int_ptr_2[1]);
          }
          else {
            val_2 = *(int *)int_ptr_2[4] - (int_ptr_2[1] + *int_ptr_2);
          }
          if (val_2 < 0) break;
          if (arg_edx <= val_2) {
            val_2 = *int_ptr_2;
            val = int_ptr_2[1];
            int_ptr[3] = (int)int_ptr_2;
            *int_ptr = val_2 + val;
            val_2 = int_ptr_2[4];
            int_ptr[4] = val_2;
            if (val_2 != 0) {
              *(int **)(val_2 + 0xc) = int_ptr;
            }
            int_ptr_2[4] = (int)int_ptr;
            goto LAB_0003a9d5;
          }
          if (int_ptr_2[4] == 0) goto LAB_0003a90d;
          int_ptr_2 = (int *)int_ptr_2[4];
        }
        LbErrorLog(); /* LbErrorLog("heapmgr.cpp", line 86, "Overlapping heap blocks") */
        goto LAB_0003a90d;
      }
      *int_ptr = *arg_eax;
      int_ptr[4] = (int)int_ptr_2;
      arg_eax[6] = (int)int_ptr;
      int_ptr_2[3] = (int)int_ptr;
    }
LAB_0003a9d5:
    *(undefined2 *)(int_ptr + 2) = 1;
    int_ptr[1] = arg_edx;
    arg_eax[4] = arg_eax[4] + 1;
    arg_eax[5] = arg_eax[5] + arg_edx;
    if (arg_eax[8] == 0) {
      arg_eax[7] = (int)int_ptr;
    }
    else {
      *(int **)(arg_eax[8] + 0x18) = int_ptr;
      int_ptr[5] = arg_eax[8];
    }
    arg_eax[8] = (int)int_ptr;
    if ((uint)arg_eax[1] <= (uint)(*int_ptr + int_ptr[1])) {
      LbErrorLog(); /* LbErrorLog("heapmgr.cpp", line 135, "Disaster. Handle allocated past end of heap area") */
      int_ptr = extraout_ECX;
    }
  }
  return int_ptr;
}

/******************************************************************************
 * Function : heapmgr_fn_03aa24 (Original VA: 0x3aa24, Ghidra: FUN_0003aa24)
 * Prototype: void heapmgr_fn_03aa24(void);
 * Address  : 0x3aa24 (Size: 62 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03aa24
 * Callers  : 2 -> heap_fn_03a742, sndheap_trying_use_two_sound_06e159
 * Callees  : 0 -> 
 ******************************************************************************/
void heapmgr_fn_03aa24(void)

{
  int val;
  undefined4 uval;
  int thing;
  int arg_edx;
  
  if (*(int *)(arg_edx + 0x18) != 0) {
    val = *(int *)(arg_edx + 0x14);
    *(int *)(*(int *)(arg_edx + 0x18) + 0x14) = val;
    if (val == 0) {
      *(undefined4 *)(thing + 0x1c) = *(undefined4 *)(arg_edx + 0x18);
    }
    else {
      *(undefined4 *)(val + 0x18) = *(undefined4 *)(arg_edx + 0x18);
    }
    *(int *)(*(int *)(thing + 0x20) + 0x18) = arg_edx; /* thing->model */
    uval = *(undefined4 *)(thing + 0x20); /* thing->model */
    *(undefined4 *)(arg_edx + 0x18) = 0;
    *(undefined4 *)(arg_edx + 0x14) = uval;
    *(int *)(thing + 0x20) = arg_edx; /* thing->model */
  }
  return;
}

/******************************************************************************
 * Function : heapmgr_fn_03aa62 (Original VA: 0x3aa62, Ghidra: FUN_0003aa62)
 * Prototype: undefined8 heapmgr_fn_03aa62(void);
 * Address  : 0x3aa62 (Size: 48 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03aa62
 * Callers  : 2 -> heap_find_freeable_item_03a5cb, sndheap_trying_use_two_sound_06e2aa
 * Callees  : 1 -> heapmgr_fn_03aa92
 ******************************************************************************/
undefined8 heapmgr_fn_03aa62(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  if (*(int *)(arg_eax + 0x1c) != 0) {
    val = *(int *)(arg_eax + 0x1c);
    do {
      if ((*(byte *)(val + 8) & 2) == 0) {
        uval = heapmgr_fn_03aa92();
        return CONCAT44(arg_edx,uval);
      }
      val = *(int *)(val + 0x18);
    } while (val != 0);
  }
  return CONCAT44(arg_edx,0xffffffff);
}

/******************************************************************************
 * Function : heapmgr_fn_03aa92 (Original VA: 0x3aa92, Ghidra: FUN_0003aa92)
 * Prototype: undefined2 heapmgr_fn_03aa92(void);
 * Address  : 0x3aa92 (Size: 191 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03aa92
 * Callers  : 1 -> heapmgr_fn_03aa62
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_0f0b60
 ******************************************************************************/
undefined2 heapmgr_fn_03aa92(void)

{
  undefined2 uval;
  int *arg_eax;
  int *int_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int val;
  
  if (*(int *)(arg_edx + 0xc) == 0) {
    arg_eax[6] = *(int *)(arg_edx + 0x10);
  }
  else {
    *(undefined4 *)(*(int *)(arg_edx + 0xc) + 0x10) = *(undefined4 *)(arg_edx + 0x10);
  }
  if (*(int *)(arg_edx + 0x10) != 0) {
    val = *(int *)(arg_edx + 0xc);
    *(int *)(*(int *)(arg_edx + 0x10) + 0xc) = val;
    if ((*(byte *)(*(int *)(arg_edx + 0x10) + 8) & 4) == 0) {
      if (val == 0) {
        bflib_system_io_fn_0f0b60();
        int_ptr = *(int **)(extraout_ECX_00 + 0x10);
        val = *arg_eax;
        arg_edx = extraout_ECX_00;
      }
      else {
        bflib_system_io_fn_0f0b60();
        val = **(int **)(extraout_ECX + 0xc) + (*(int **)(extraout_ECX + 0xc))[1];
        int_ptr = *(int **)(extraout_ECX + 0x10);
        arg_edx = extraout_ECX;
      }
      *int_ptr = val;
    }
  }
  if (*(int *)(arg_edx + 0x14) == 0) {
    arg_eax[7] = *(int *)(arg_edx + 0x18);
  }
  else {
    *(undefined4 *)(*(int *)(arg_edx + 0x14) + 0x18) = *(undefined4 *)(arg_edx + 0x18);
  }
  if (*(int *)(arg_edx + 0x18) == 0) {
    arg_eax[8] = *(int *)(arg_edx + 0x14);
  }
  else {
    *(undefined4 *)(*(int *)(arg_edx + 0x18) + 0x14) = *(undefined4 *)(arg_edx + 0x14);
  }
  arg_eax[4] = arg_eax[4] + -1;
  arg_eax[5] = arg_eax[5] - *(int *)(arg_edx + 4);
  uval = *(undefined2 *)(arg_edx + 10);
  LbScreenWaitVbi();
  return uval;
}

/******************************************************************************
 * Function : heapmgr_heap_start_end_size_03ab51 (Original VA: 0x3ab51, Ghidra: FUN_0003ab51)
 * Prototype: void heapmgr_heap_start_end_size_03ab51(void);
 * Address  : 0x3ab51 (Size: 397 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'Heap Start %p, End %p, Size %d'
 * Callers  : 1 -> sndheap_fn_06e294
 * Callees  : 2 -> LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void heapmgr_heap_start_end_size_03ab51(void)

{
  uint *word_ptr;
  undefined4 *arg_eax;
  uint uval;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *int_ptr;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int val;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int val_2;
  int val_3;
  int arg_ebx;
  int val_4;
  char *str_ptr;
  uint uval_2;
  
  if ((arg_eax[4] != 0) && (arg_eax[6] != 0)) {
    dk_sprintf(&g_log_sprintf_buf,s_Heap_Start__p__End__p__Size__d_00164cd9,*arg_eax,arg_eax[1],arg_eax[2]
                );
    int_ptr = extraout_ECX;
    if (g_display_bss_003d9818 != 0) {
      LbTextDrawFormatted();
      int_ptr = extraout_ECX_00;
    }
    dk_sprintf(&g_log_sprintf_buf,s_Gap_to_first_block__d_00164cf8,*(int *)int_ptr[6] - *int_ptr);
    val = extraout_ECX_01;
    if (g_display_bss_003d9818 != 0) {
      LbTextDrawFormatted();
      val = extraout_ECX_02;
    }
    int_ptr = *(int **)(val + 0x18);
    val = arg_ebx + 0x20;
    for (; int_ptr != (int *)0x0; int_ptr = (int *)int_ptr[4]) {
      dk_sprintf(&g_log_sprintf_buf,s_Block_Start__p__End__p__Size__d_00164d0e,*int_ptr,
                   int_ptr[1] + *int_ptr,int_ptr[1]);
      val_2 = extraout_ECX_03;
      if (g_display_bss_003d9818 != 0) {
        LbTextDrawFormatted(val / (int)(uint)g_units_per_pixel);
        val_2 = extraout_ECX_04;
      }
      val_4 = val + 0x10;
      if (int_ptr[4] == 0) {
        uval = *int_ptr + int_ptr[1];
        if (uval < *(uint *)(val_2 + 4)) {
          val_3 = *(int *)(val_2 + 4) - uval;
          uval_2 = *(uint *)(val_2 + 4);
          str_ptr = s_Gap_Start__p__End__p__Size__d_00164d2e;
LAB_0003ac7a:
          dk_sprintf(&g_log_sprintf_buf,str_ptr,uval,uval_2,val_3);
          if (g_display_bss_003d9818 != 0) {
            LbTextDrawFormatted(val_4 / (int)(uint)g_units_per_pixel);
          }
          val_4 = val + 0x20;
        }
      }
      else {
        word_ptr = (uint *)int_ptr[4];
        uval = *int_ptr + int_ptr[1];
        if (uval < *word_ptr) {
          val_3 = *word_ptr - uval;
          uval_2 = *word_ptr;
          str_ptr = s_Gap_Start__p__End__p__Size__d_00164d4e;
          goto LAB_0003ac7a;
        }
      }
      val = val_4;
    }
  }
  return;
}

/******************************************************************************
 * Function : heapmgr_fn_03acde (Original VA: 0x3acde, Ghidra: FUN_0003acde)
 * Prototype: void heapmgr_fn_03acde(void);
 * Address  : 0x3acde (Size: 91 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03acde
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f0b60
 ******************************************************************************/
void heapmgr_fn_03acde(void)

{
  int arg_eax;
  int *int_ptr;
  int *extraout_ECX;
  int *int_ptr_2;
  
  int_ptr_2 = (int *)0x0;
  if ((*(int *)(arg_eax + 0x10) != 0) && (int_ptr = *(int **)(arg_eax + 0x18), int_ptr != (int *)0x0)) {
    for (; int_ptr[4] != 0; int_ptr = (int *)int_ptr[4]) {
      if ((uint)(int_ptr[1] + *int_ptr) < *(uint *)int_ptr[4]) {
        if (int_ptr_2 == (int *)0x0) {
          int_ptr_2 = int_ptr;
        }
        if ((*(byte *)(int_ptr[4] + 8) & 4) == 0) {
          bflib_system_io_fn_0f0b60();
          *(int *)extraout_ECX[4] = *extraout_ECX + extraout_ECX[1];
          return;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : heapmgr_fn_03ad39 (Original VA: 0x3ad39, Ghidra: FUN_0003ad39)
 * Prototype: void heapmgr_fn_03ad39(void);
 * Address  : 0x3ad39 (Size: 65 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03ad39
 * Callers  : 1 -> heap_find_freeable_item_03a5cb
 * Callees  : 1 -> bflib_system_io_fn_0f0b60
 ******************************************************************************/
void heapmgr_fn_03ad39(void)

{
  int arg_eax;
  int *extraout_ECX;
  int *loop_i;
  
  if (*(int *)(arg_eax + 0x10) != 0) {
    for (loop_i = *(int **)(arg_eax + 0x18); loop_i[4] != 0; loop_i = (int *)loop_i[4]) {
      if ((uint)(*loop_i + loop_i[1]) < *(uint *)loop_i[4]) {
        bflib_system_io_fn_0f0b60();
        *(int *)extraout_ECX[4] = extraout_ECX[1] + *extraout_ECX;
        loop_i = extraout_ECX;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : heapmgr_fn_03ad7a (Original VA: 0x3ad7a, Ghidra: FUN_0003ad7a)
 * Prototype: undefined8 heapmgr_fn_03ad7a(void);
 * Address  : 0x3ad7a (Size: 28 bytes)
 * Module   : heapmgr.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03ad7a
 * Callers  : 1 -> heapmgr_overlapping_heap_blocks_03a8f7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 heapmgr_fn_03ad7a(void)

{
  int arg_eax;
  int loop_i;
  undefined4 arg_edx;
  
  if (*(int *)(arg_eax + 0x10) < *(int *)(arg_eax + 0xc)) {
    for (loop_i = arg_eax + 0x24; *(short *)(loop_i + 8) != 0; loop_i = loop_i + 0x1c) {
    }
  }
  else {
    loop_i = 0;
  }
  return CONCAT44(arg_edx,loop_i);
}

/******************************************************************************
 * Function : heapmgr_process_map_subtile_03ad98 (Original VA: 0x3ad98, Ghidra: FUN_0003ad98)
 * Prototype: undefined4 heapmgr_process_map_subtile_03ad98(void);
 * Address  : 0x3ad98 (Size: 89 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> impset_fn_03ef05, imptool_fn_03fed7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 heapmgr_process_map_subtile_03ad98(void)

{
  byte *thing_ptr;
  byte *arg_eax;
  uint uval;
  int arg_edx;
  int arg_ebx;
  
  uval = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((thing_ptr[0x1f] == 5) && (arg_eax != thing_ptr)) && ((*thing_ptr & 0x10) == 0)) &&
       (((thing_ptr[1] & 2) == 0 && (thing_ptr[7] == 0x62)))) break;
    uval = (uint)*(ushort *)(thing_ptr + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : heapmgr_process_map_subtile_03adf1 (Original VA: 0x3adf1, Ghidra: FUN_0003adf1)
 * Prototype: undefined4 heapmgr_process_map_subtile_03adf1(void);
 * Address  : 0x3adf1 (Size: 79 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> imptool_process_slabmap_tile_03fbe3
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 heapmgr_process_map_subtile_03adf1(void)

{
  byte *thing_ptr;
  int arg_eax;
  uint uval;
  int arg_edx;
  
  uval = (*(uint *)((int)&g_map_subtiles + (arg_eax + arg_edx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((thing_ptr[0x1f] == 5) && ((*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
       (thing_ptr[7] == 10)) break;
    uval = (uint)*(ushort *)(thing_ptr + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : heapmgr_process_map_subtile_03ae40 (Original VA: 0x3ae40, Ghidra: FUN_0003ae40)
 * Prototype: undefined4 heapmgr_process_map_subtile_03ae40(void);
 * Address  : 0x3ae40 (Size: 89 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_process_slabmap_tile_03aef2
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 heapmgr_process_map_subtile_03ae40(void)

{
  byte *thing_ptr;
  byte *arg_eax;
  uint uval;
  int arg_edx;
  int arg_ebx;
  
  uval = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((thing_ptr[0x1f] == 5) && (thing_ptr != arg_eax)) && ((*thing_ptr & 0x10) == 0)) &&
       (((thing_ptr[1] & 2) == 0 && (thing_ptr[7] == 10)))) break;
    uval = (uint)*(ushort *)(thing_ptr + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : heapmgr_process_map_subtile_03ae99 (Original VA: 0x3ae99, Ghidra: FUN_0003ae99)
 * Prototype: undefined4 heapmgr_process_map_subtile_03ae99(void);
 * Address  : 0x3ae99 (Size: 89 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_update_slab_subtile_columns_03af4b
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 heapmgr_process_map_subtile_03ae99(void)

{
  byte *thing_ptr;
  byte *arg_eax;
  uint uval;
  int arg_edx;
  int arg_ebx;
  
  uval = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((thing_ptr[0x1f] == 5) && (thing_ptr != arg_eax)) && ((*thing_ptr & 0x10) == 0)) &&
       (((thing_ptr[1] & 2) == 0 && (thing_ptr[7] == 0x4a)))) break;
    uval = (uint)*(ushort *)(thing_ptr + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : heapmgr_process_thing_entity_03b2c0 (Original VA: 0x3b2c0, Ghidra: FUN_0003b2c0)
 * Prototype: uint heapmgr_process_thing_entity_03b2c0(void);
 * Address  : 0x3b2c0 (Size: 78 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> impset_update_creature_and_thing_03c458, impset_update_creature_and_thing_03c53a
 * Callees  : 1 -> imptool_update_creature_and_thing_03f98b
 ******************************************************************************/
uint heapmgr_process_thing_entity_03b2c0(void)

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
 * Function : heapmgr_fn_03b3a4 (Original VA: 0x3b3a4, Ghidra: FUN_0003b3a4)
 * Prototype: undefined4 heapmgr_fn_03b3a4(void);
 * Address  : 0x3b3a4 (Size: 69 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03b3a4
 * Callers  : 1 -> heapmgr_process_map_subtile_03b643
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 heapmgr_fn_03b3a4(void)

{
  int val;
  int val_2;
  short arg_ax;
  short arg_dx;
  undefined2 arg_bx;
  
  if (g_bss_00348294 < 0x40) {
    val = g_bss_00348294 * 2;
    val_2 = g_bss_00348294 * 2;
    g_bss_00348294 = g_bss_00348294 + 1;
    (&g_bss_00348196)[val_2] = arg_bx;
    (&g_bss_00348194)[val] = arg_ax * 3 + 1 + (arg_dx * 3 + 1) * 0x100;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : heapmgr_fn_03b3e9 (Original VA: 0x3b3e9, Ghidra: FUN_0003b3e9)
 * Prototype: void heapmgr_fn_03b3e9(void);
 * Address  : 0x3b3e9 (Size: 64 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03b3e9
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 0 -> 
 ******************************************************************************/
void heapmgr_fn_03b3e9(void)

{
  undefined4 uval;
  int arg_eax;
  int val;
  int loop_i;
  
  val = arg_eax;
  for (loop_i = 0; uval = g_game_turn, loop_i < *(int *)(arg_eax + 0x116f); loop_i = loop_i + 1) {
    *(undefined2 *)(val + 0x106d) = 0;
    val = val + 4;
  }
  *(undefined4 *)(arg_eax + 0x116f) = 0;
  g_bss_00348294 = 0;
  *(undefined4 *)(arg_eax + 0x116b) = uval;
  return;
}

/******************************************************************************
 * Function : heapmgr_fn_03b429 (Original VA: 0x3b429, Ghidra: FUN_0003b429)
 * Prototype: bool heapmgr_fn_03b429(void);
 * Address  : 0x3b429 (Size: 50 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03b429
 * Callers  : 8 -> heapmgr_fn_03bb5e, heapmgr_process_map_subtile_03bb93, impset_process_map_subtile_03bcbe, impset_process_slabmap_tile_03bdb1, impset_process_slabmap_tile_03bec5, impset_process_slabmap_tile_03bfa4, impset_update_slab_subtile_columns_03c096, impset_update_slab_subtile_columns_03c17e
 * Callees  : 0 -> 
 ******************************************************************************/
bool heapmgr_fn_03b429(void)

{
  int val;
  undefined2 arg_ax;
  undefined2 arg_dx;
  int arg_ebx;
  
  val = *(int *)(arg_ebx + 0x116f);
  *(int *)(arg_ebx + 0x116f) = val + 1;
  *(undefined2 *)(arg_ebx + 0x106b + val * 4) = arg_ax;
  *(undefined2 *)(arg_ebx + 0x106d + val * 4) = arg_dx;
  return *(int *)(arg_ebx + 0x116f) != 0x40;
}

/******************************************************************************
 * Function : heapmgr_fn_03b45b (Original VA: 0x3b45b, Ghidra: FUN_0003b45b)
 * Prototype: bool heapmgr_fn_03b45b(void);
 * Address  : 0x3b45b (Size: 66 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03b45b
 * Callers  : 1 -> heapmgr_update_slab_subtile_columns_03b49d
 * Callees  : 0 -> 
 ******************************************************************************/
bool heapmgr_fn_03b45b(void)

{
  int val;
  short arg_ax;
  short *val_2;
  int arg_ecx;
  short arg_dx;
  short arg_bx;
  
  val = *(int *)(arg_ecx + 0x116f);
  *(int *)(arg_ecx + 0x116f) = val + 1;
  val_2 = (short *)(arg_ecx + 0x106b + val * 4);
  val_2[1] = arg_bx;
  *val_2 = arg_ax * 3 + 1 + (arg_dx * 3 + 1) * 0x100;
  return *(int *)(arg_ecx + 0x116f) != 0x40;
}

/******************************************************************************
 * Function : heapmgr_update_slab_subtile_columns_03b49d (Original VA: 0x3b49d, Ghidra: FUN_0003b49d)
 * Prototype: uint heapmgr_update_slab_subtile_columns_03b49d(void);
 * Address  : 0x3b49d (Size: 422 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> heapmgr_process_map_subtile_03b643
 * Callees  : 2 -> heapmgr_fn_03b45b, imptool_fn_03f80c
 ******************************************************************************/
uint heapmgr_update_slab_subtile_columns_03b49d(void)

{
  int arg_eax;
  int val;
  int val_2;
  int slab_coord;
  uint uval;
  int arg_edx;
  uint player_off;
  int arg_ebx;
  uint player_off_2;
  
  val = arg_eax * 3 + 1;
  val_2 = arg_edx * 3 + 1;
  slab_coord = ((&g_subtile_to_slab_lut)[val] + (&g_data_0019033f)[arg_edx * 3] * 0x55) * 6;
  uval = (uint)((&g_slabmap)[slab_coord] & 7);
  if ((&g_slabmap_base)[(arg_edx * 0x55 + arg_eax) * 6] == '\n') {
    if ((*(uint *)((int)&g_map_subtiles + (val_2 * 0x100 + val) * 5 + 1) >> 0x1c &
        1 << (*(byte *)(arg_ebx + 0xe9f) & 0x1f)) == 0) goto LAB_0003b631;
    val = imptool_fn_03f80c();
  }
  else {
    if (((((&g_slabmap_base)[(arg_edx * 0x55 + arg_eax) * 6] != '\v') &&
         (((uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45 == 0 ||
          (*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) == 7)))) ||
        (player_off_2 = (uint)*(char *)(arg_ebx + 0xe9f), uval == player_off_2)) ||
       (((((uval < g_bss_002eb542 && (player_off = (uint)g_neutral_player_number, uval != player_off)) &&
          (player_off_2 != player_off)) &&
         (((((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << (*(byte *)(arg_ebx + 0xe9f) & 0x1f)
            ) != 0 && (player_off_2 != player_off)) &&
          ((uval != player_off &&
           (((uint)(byte)(&g_player_view_flags)[player_off_2 * 0x4ef] & 1 << ((&g_slabmap)[slab_coord] & 7)) != 0)))
          ))) || ((*(uint *)((int)&g_map_subtiles + (val_2 * 0x100 + val) * 5 + 1) >> 0x1c &
                  1 << (*(byte *)(arg_ebx + 0xe9f) & 0x1f)) == 0)))) goto LAB_0003b631;
    val = imptool_fn_03f80c();
  }
  if (val != 0) {
    uval = heapmgr_fn_03b45b();
    return uval;
  }
LAB_0003b631:
  return (uint)(*(int *)(arg_ebx + 0x116f) != 0x40);
}

/******************************************************************************
 * Function : heapmgr_process_map_subtile_03b643 (Original VA: 0x3b643, Ghidra: FUN_0003b643)
 * Prototype: void heapmgr_process_map_subtile_03b643(void);
 * Address  : 0x3b643 (Size: 1307 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 3 -> heapmgr_fn_03b3a4, heapmgr_update_slab_subtile_columns_03b49d, imptool_fn_03f80c
 ******************************************************************************/
void heapmgr_process_map_subtile_03b643(void)

{
  int val;
  ushort *arg_eax;
  char *str_ptr;
  int val_2;
  byte *byte_ptr;
  int val_3;
  int val_4;
  uint uval;
  int local_7c;
  uint local_78;
  char *local_48;
  uint local_3c;
  int local_2c;
  uint local_28;
  uint local_1c;
  
  val = g_scratch_work_buf;
  if ((*arg_eax != 0) && (*(int *)((int)arg_eax + 0x116f) < 0x40)) {
    local_7c = 0x1fe;
    val_4 = 0;
    str_ptr = (char *)(g_scratch_work_buf + 0x1c39);
    local_2c = 0;
    do {
      val_3 = val_4 * 0x55 + val;
      val_2 = local_2c;
      do {
        byte_ptr = &g_slabmap_base + val_2;
        val_2 = val_2 + 6;
        *(bool *)val_3 = ((&g_data_001921c6)[(uint)*byte_ptr * 0x16] & 0x29) != 0;
        val_3 = val_3 + 1;
      } while (val_2 != local_7c);
      local_7c = local_7c + 0x1fe;
      val_4 = val_4 + 1;
      local_2c = local_2c + 0x1fe;
    } while (val_4 < 0x55);
    local_78 = *(byte *)((&g_thing_ptrs)[*arg_eax] + 0xe) / 3;
    local_1c = *(byte *)((&g_thing_ptrs)[*arg_eax] + 0x10) / 3;
    byte_ptr = (byte *)(local_1c * 0x55 + local_78 + val);
    local_28 = 0;
    *byte_ptr = *byte_ptr | 2;
    uval = 0;
    local_48 = str_ptr;
    do {
      val_4 = local_78 + local_1c * 0x55 + val;
      local_3c = 0;
      if ((*(byte *)(val_4 + -1) & 1) == 0) {
        if ((*(byte *)(val_4 + -1) & 2) == 0) {
          *(byte *)(val_4 + -1) = *(byte *)(val_4 + -1) | 2;
          str_ptr[uval * 2] = (char)local_78 + -1;
          (str_ptr + uval * 2)[1] = (char)local_1c;
          uval = uval + 1;
          val_4 = heapmgr_update_slab_subtile_columns_03b49d();
          if (val_4 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = 8;
        *(byte *)(val_4 + -1) = *(byte *)(val_4 + -1) | 2;
        if (((g_bss_00348294 < 0x40 - *(int *)((int)arg_eax + 0x116f)) &&
            ((((&g_slabmap_base)[(local_1c * 0x55 + (local_78 - 1)) * 6] == '\x02' ||
              ((&g_slabmap_base)[(local_1c * 0x55 + (local_78 - 1)) * 6] == '\x03')) &&
             ((*(uint *)((int)&g_map_subtiles +
                        ((local_1c * 3 + 1) * 0x100 + (local_78 - 1) * 3 + 1) * 5 + 1) >> 0x1c &
              1 << (*(byte *)((int)arg_eax + 0xe9f) & 0x1f)) != 0)))) &&
           (val_4 = imptool_fn_03f80c(), val_4 != 0)) {
          heapmgr_fn_03b3a4();
        }
      }
      val_4 = local_78 + local_1c * 0x55 + val;
      if ((*(byte *)(val_4 + 1) & 1) == 0) {
        if ((*(byte *)(val_4 + 1) & 2) == 0) {
          *(byte *)(val_4 + 1) = *(byte *)(val_4 + 1) | 2;
          str_ptr[uval * 2] = (char)local_78 + '\x01';
          (str_ptr + uval * 2)[1] = (char)local_1c;
          uval = uval + 1;
          val_4 = heapmgr_update_slab_subtile_columns_03b49d();
          if (val_4 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = local_3c | 2;
        *(byte *)(val_4 + 1) = *(byte *)(val_4 + 1) | 2;
        if (((g_bss_00348294 < 0x40 - *(int *)((int)arg_eax + 0x116f)) &&
            (((&g_slabmap_base)[(local_1c * 0x55 + local_78 + 1) * 6] == '\x02' ||
             ((&g_slabmap_base)[(local_1c * 0x55 + local_78 + 1) * 6] == '\x03')))) &&
           (((*(uint *)((int)&g_map_subtiles +
                       ((local_1c * 3 + 1) * 0x100 + (local_78 + 1) * 3 + 1) * 5 + 1) >> 0x1c &
             1 << (*(byte *)((int)arg_eax + 0xe9f) & 0x1f)) != 0 &&
            (val_4 = imptool_fn_03f80c(local_1c), val_4 != 0)))) {
          heapmgr_fn_03b3a4();
        }
      }
      val_4 = (local_1c - 1) * 0x55 + local_78;
      byte_ptr = (byte *)(val + val_4);
      if ((*byte_ptr & 1) == 0) {
        if ((*byte_ptr & 2) == 0) {
          *byte_ptr = *byte_ptr | 2;
          str_ptr[uval * 2] = (char)local_78;
          (str_ptr + uval * 2)[1] = (char)local_1c + -1;
          uval = uval + 1;
          val_4 = heapmgr_update_slab_subtile_columns_03b49d();
          if (val_4 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = local_3c | 1;
        *byte_ptr = *byte_ptr | 2;
        if (((g_bss_00348294 < 0x40 - *(int *)((int)arg_eax + 0x116f)) &&
            (((&g_slabmap_base)[val_4 * 6] == '\x02' || ((&g_slabmap_base)[val_4 * 6] == '\x03')))) &&
           (((*(uint *)((int)&g_map_subtiles +
                       (((local_1c - 1) * 3 + 1) * 0x100 + local_78 * 3 + 1) * 5 + 1) >> 0x1c &
             1 << (*(byte *)((int)arg_eax + 0xe9f) & 0x1f)) != 0 &&
            (val_4 = imptool_fn_03f80c(), val_4 != 0)))) {
          heapmgr_fn_03b3a4();
        }
      }
      val_4 = (local_1c + 1) * 0x55 + local_78;
      byte_ptr = (byte *)(val + val_4);
      if ((*byte_ptr & 1) == 0) {
        if ((*byte_ptr & 2) == 0) {
          *byte_ptr = *byte_ptr | 2;
          str_ptr[uval * 2] = (char)local_78;
          (str_ptr + uval * 2)[1] = (char)local_1c + '\x01';
          uval = uval + 1;
          val_4 = heapmgr_update_slab_subtile_columns_03b49d();
          if (val_4 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = local_3c | 4;
        *byte_ptr = *byte_ptr | 2;
        if (((g_bss_00348294 < 0x40 - *(int *)((int)arg_eax + 0x116f)) &&
            ((((&g_slabmap_base)[val_4 * 6] == '\x02' || ((&g_slabmap_base)[val_4 * 6] == '\x03')) &&
             ((*(uint *)((int)&g_map_subtiles +
                        (((local_1c + 1) * 3 + 1) * 0x100 + local_78 * 3 + 1) * 5 + 1) >> 0x1c &
              1 << (*(byte *)((int)arg_eax + 0xe9f) & 0x1f)) != 0)))) &&
           (val_4 = imptool_fn_03f80c(), val_4 != 0)) {
          heapmgr_fn_03b3a4();
        }
      }
      val_4 = (local_1c - 1) * 0x55 + local_78 + val;
      val_2 = (local_1c + 1) * 0x55 + local_78 + val;
      while( true ) {
        if (*(int *)(&g_data_0017bff0 + local_3c * 5) == 0) break;
        if (local_3c == 0xf) {
          byte_ptr = (byte *)(val_4 + 1);
          *byte_ptr = *byte_ptr | 2;
          byte_ptr = (byte *)(val_2 + 1);
          *byte_ptr = *byte_ptr | 2;
          byte_ptr = (byte *)(val_2 + -1);
          *byte_ptr = *byte_ptr | 2;
          local_3c = 0;
          byte_ptr = (byte *)(val_4 + -1);
          *byte_ptr = *byte_ptr | 2;
        }
        else {
          val_3 = *(int *)(&g_data_0017bff0 + local_3c * 5) * 2;
          byte_ptr = (byte *)(local_78 + (int)(char)(&g_data_0017c040)[val_3] +
                            (local_1c + (int)(char)(&g_data_0017c041)[val_3]) * 0x55 + val);
          *byte_ptr = *byte_ptr | 2;
          local_3c = local_3c & (int)(char)(&g_data_0017bff4)[local_3c * 5];
        }
      }
      local_78 = (uint)*local_48;
      local_28 = local_28 + 1;
      local_1c = (uint)local_48[1];
      local_48 = local_48 + 2;
    } while (local_28 <= uval);
  }
  return;
}

/******************************************************************************
 * Function : heapmgr_fn_03bb5e (Original VA: 0x3bb5e, Ghidra: FUN_0003bb5e)
 * Prototype: void heapmgr_fn_03bb5e(void);
 * Address  : 0x3bb5e (Size: 53 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Module heapmgr.cpp procedure @ 0x03bb5e
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 1 -> heapmgr_fn_03b429
 ******************************************************************************/
void heapmgr_fn_03bb5e(void)

{
  int arg_eax;
  int loop_i;
  
  for (loop_i = 0; (*(int *)(arg_eax + 0x116f) < 0x40 && (loop_i < g_bss_00348294)); loop_i = loop_i + 1) {
    heapmgr_fn_03b429();
  }
  return;
}

/******************************************************************************
 * Function : heapmgr_process_map_subtile_03bb93 (Original VA: 0x3bb93, Ghidra: FUN_0003bb93)
 * Prototype: undefined4 heapmgr_process_map_subtile_03bb93(void);
 * Address  : 0x3bb93 (Size: 299 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_update_player_dungeon_03c289
 * Callees  : 3 -> heapmgr_fn_03b429, moodneed_fn_051374, room_process_dungeon_room_0ca7ac
 ******************************************************************************/
undefined4 heapmgr_process_map_subtile_03bb93(void)

{
  int arg_eax;
  int val;
  uint uval;
  int arg_edx;
  int dungeon_off;
  uint thing_ptr;
  int local_18;
  
  val = room_process_dungeon_room_0ca7ac();
  dungeon_off = *(char *)(arg_eax + 0xe9f) * 0x1508;
  if ((*(short *)(&g_bss_002e059c + dungeon_off) != 0) &&
     (thing_ptr = g_bss_002e6eb6, local_18 = arg_edx, ((&g_bss_002e0591)[dungeon_off] & 1) != 0)) {
    for (; (thing_ptr = (&g_thing_ptrs)[thing_ptr], *(int *)(arg_eax + 0x116f) < 0x40 &&
           ((local_18 != 0 && (g_thing_ptrs < thing_ptr)))); thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
      if ((*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 0xe9f)) && /* thing->owner */
         ((*(char *)(thing_ptr + 7) == 'C' && ((*(byte *)(thing_ptr + 1) & 1) == 0)))) {
        if (val == 0) {
          if ((int)*(char *)(arg_eax + 0xe9f) ==
              (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
            moodneed_fn_051374();
          }
          return 0;
        }
        uval = (uint)CONCAT11(*(undefined1 *)(thing_ptr + 0x10),*(undefined1 *)(thing_ptr + 0xe));
        if ((*(uint *)((int)&g_map_subtiles + uval * 5 + 1) >> 0x1c &
            1 << (*(byte *)(arg_eax + 0xe9f) & 0x1f)) != 0) {
          local_18 = local_18 + -1;
          heapmgr_fn_03b429(val,uval);
        }
      }
    }
  }
  return 1;
}

