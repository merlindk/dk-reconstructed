/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: navigate.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 111
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : navigate_fn_0b5550 (Original VA: 0xb5550, Ghidra: FUN_000b5550)
 * Prototype: undefined4 navigate_fn_0b5550(void);
 * Address  : 0xb5550 (Size: 39 bytes)
 * Module   : navigate.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module navigate.cpp procedure @ 0x0b5550
 * Callers  : 5 -> navigate_heap_add_heap_0bd5cc, navigate_heap_add_heap_0bd9b4, navigate_dfs_visit_0bdeec, navigate_pq_remove_0be84c, navigate_update_ariadne_navigation_0c02d4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_fn_0b5550(void)

{
  uint arg_eax;
  uint arg_edx;
  
  if (1 < (int)((arg_edx & 0xf) - (arg_eax & 0xf))) {
    return 0;
  }
  if ((arg_edx & 0x10) != 0) {
    return 2;
  }
  return 1;
}

/******************************************************************************
 * Function : navigate_fn_0b55a0 (Original VA: 0xb55a0, Ghidra: FUN_000b55a0)
 * Prototype: undefined4 navigate_fn_0b55a0(void);
 * Address  : 0xb55a0 (Size: 24 bytes)
 * Module   : navigate.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module navigate.cpp procedure @ 0x0b55a0
 * Callers  : 1 -> navigate_grtc_exceeded_max_path_0c0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_fn_0b55a0(void)

{
  uint arg_eax;
  int arg_edx;
  
  if ((int)arg_eax < 0) {
    arg_eax = -arg_eax;
    arg_edx = -arg_edx;
  }
  return (int)(CONCAT44(arg_eax >> 0x12,arg_eax << 0xe) / (longlong)arg_edx);
}

/******************************************************************************
 * Function : navigate_line_intersect_0b55b8 (Original VA: 0xb55b8, Ghidra: FUN_000b55b8)
 * Prototype: void navigate_line_intersect_0b55b8(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6);
 * Address  : 0xb55b8 (Size: 219 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 401
 * Purpose  : Log prefix 'line_intersect : division error'
 * Callers  : 1 -> navigate_thin_wall_0bb0ac
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void navigate_line_intersect_0b55b8(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int arg_eax;
  int arg_ecx;
  int val;
  int val_2;
  int arg_edx;
  int arg_ebx;
  int val_3;
  int val_4;
  int val_5;
  undefined4 local_10;
  
  val = param_4;
  val_4 = arg_ecx;
  val_5 = arg_ebx;
  local_10 = arg_edx;
  if (arg_ebx < arg_eax) {
    val_4 = arg_edx;
    val_5 = arg_eax;
    arg_eax = arg_ebx;
    local_10 = arg_ecx;
  }
  val_2 = param_1;
  if (param_3 < param_1) {
    param_4 = param_2;
    val_2 = param_3;
    param_2 = val;
    param_3 = param_1;
  }
  val_3 = (param_3 - arg_eax) - (val_2 - arg_eax);
  val = (param_4 - local_10) - (param_2 - local_10);
  val_2 = (param_2 - local_10) * val_3 - (val_2 - arg_eax) * val;
  val = val_3 * (val_4 - local_10) - val * (val_5 - arg_eax);
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 401, "line_intersect : division error") */
  }
  *param_5 = arg_eax * 0x100 +
             (int)(((longlong)((val_5 - arg_eax) * 0x100) * (longlong)val_2) / (longlong)val);
  *param_6 = local_10 * 0x100 +
             (int)(((longlong)((val_4 - local_10) * 0x100) * (longlong)val_2) / (longlong)val);
  return;
}

/******************************************************************************
 * Function : navigate_nav_log_0b5694 (Original VA: 0xb5694, Ghidra: FUN_000b5694)
 * Prototype: void navigate_nav_log_0b5694(void);
 * Address  : 0xb5694 (Size: 121 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : String 'nav.log'
 * Callers  : 0 -> 
 * Callees  : 3 -> bflib_system_io_fn_0e9fd7, bflib_system_io_fn_0f694b, bflib_system_io_fn_0f69c6
 ******************************************************************************/
void navigate_nav_log_0b5694(void)

{
  if (g_bss_00388ebc != 1) {
    g_bss_00388ebc = 1;
    g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
    g_bss_00388ec4 = g_game_turn;
  }
  if (g_bss_00388ec4 != g_game_turn) {
    g_bss_00388ec4 = g_game_turn;
    bflib_system_io_fn_0f694b();
    bflib_system_io_fn_0f69c6();
  }
  bflib_system_io_fn_0f694b();
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b577c (Original VA: 0xb577c, Ghidra: FUN_000b577c)
 * Prototype: void navigate_update_ariadne_navigation_0b577c(void);
 * Address  : 0xb577c (Size: 43 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_update_ariadne_navigation_0b577c(void)

{
  int val;
  int arg_eax;
  
  val = arg_eax;
  *(undefined2 *)((int)&g_ariadne_nav_state + arg_eax * 0x10 + 2) = g_data_00192148;
  g_data_00192148 = val;
  *(undefined1 *)((int)&g_bss_0038c621 + arg_eax * 0x10 + 3) = 0xff;
  g_bss_0038c5d4 = g_bss_0038c5d4 + -1;
  return;
}

/******************************************************************************
 * Function : navigate_tri_new_0b57a8 (Original VA: 0xb57a8, Ghidra: FUN_000b57a8)
 * Prototype: undefined8 navigate_tri_new_0b57a8(void);
 * Address  : 0xb57a8 (Size: 111 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 727
 * Purpose  : Log prefix 'tri_new : out of memory'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 navigate_tri_new_0b57a8(void)

{
  int val;
  int extraout_ECX;
  int val_2;
  undefined4 arg_edx;
  
  if (g_data_00192148 == -1) {
    val = g_bss_0038c5d0 + 1;
    val_2 = g_bss_0038c5d0;
    g_bss_0038c5d0 = val;
    if (8999 < val) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      val_2 = extraout_ECX;
    }
  }
  else {
    val_2 = g_data_00192148;
    g_data_00192148 = (int)(&g_ariadne_nav_state)[g_data_00192148 * 4] >> 0x10;
  }
  g_bss_0038c5d4 = g_bss_0038c5d4 + 1;
  *(undefined1 *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) = 0;
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : navigate_fn_0b5818 (Original VA: 0xb5818, Ghidra: FUN_000b5818)
 * Prototype: void navigate_fn_0b5818(void);
 * Address  : 0xb5818 (Size: 51 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0b5818
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_fn_0b5818(void)

{
  int val;
  int arg_eax;
  
  *(undefined2 *)(&g_bss_003af89a + arg_eax * 4) = 0x8000;
  val = arg_eax;
  *(undefined2 *)(&g_bss_003af898 + arg_eax * 4) = g_data_0019214c;
  g_data_0019214c = val;
  g_bss_003b3eec = g_bss_003b3eec + -1;
  return;
}

/******************************************************************************
 * Function : navigate_point_new_overflow_0b584c (Original VA: 0xb584c, Ghidra: FUN_000b584c)
 * Prototype: undefined8 navigate_point_new_overflow_0b584c(void);
 * Address  : 0xb584c (Size: 104 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 762
 * Purpose  : String 'point_new:overflow'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 navigate_point_new_overflow_0b584c(void)

{
  int val;
  int extraout_ECX;
  int val_2;
  undefined4 arg_edx;
  
  if (g_data_0019214c == -1) {
    val = g_bss_003b3ee8 + 1;
    val_2 = g_bss_003b3ee8;
    g_bss_003b3ee8 = val;
    if (0x1193 < val) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 762, "point_new:overflow") */
      val_2 = extraout_ECX;
    }
  }
  else {
    val_2 = g_data_0019214c;
    g_data_0019214c = *(int *)(&g_bss_003af896 + g_data_0019214c * 2) >> 0x10;
  }
  *(undefined2 *)(&g_bss_003af89a + val_2 * 4) = 0;
  g_bss_003b3eec = g_bss_003b3eec + 1;
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : navigate_triangle_find_first_used_0b58b4 (Original VA: 0xb58b4, Ghidra: FUN_000b58b4)
 * Prototype: void navigate_triangle_find_first_used_0b58b4(void);
 * Address  : 0xb58b4 (Size: 476 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1873
 * Purpose  : String 'triangle_find_first_used:not found!!'
 * Callers  : 2 -> navigate_fn_0b5a90, navigate_nav_log_0bfaec
 * Callees  : 3 -> navigate_update_ariadne_navigation_0b5d38, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_triangle_find_first_used_0b58b4(void)

{
  undefined2 arg_ax;
  int val;
  int val_2;
  undefined2 arg_cx;
  undefined2 arg_dx;
  int val_4;
  undefined2 arg_bx;
  int val_5;
  int val_3;
  
  val_4 = 0;
  do {
    val = val_4 + 0x10;
    *(undefined1 *)((int)&g_bss_0038c621 + val_4 + 3) = 0xff;
    val_4 = val;
  } while (val != 0x23280);
  g_bss_0038c5cc = 1;
  g_bss_0038c5d0 = 2;
  g_bss_0038c5d4 = 2;
  g_data_00192148 = 0xffffffff;
  val_4 = 0;
  do {
    val = val_4 + 4;
    *(undefined2 *)(&g_bss_003af89a + val_4) = 0x8000;
    val_4 = val;
  } while (val != 18000);
  g_bss_003b3ee8 = 4;
  g_bss_003b3eec = 4;
  g_data_0019214c = 0xffffffff;
  g_bss_0038c618 = 3;
  g_bss_0038c61a = 1;
  g_ariadne_nav_state._0_2_ = 0;
  g_bss_0038c628 = 1;
  g_bss_0038c62a = 3;
  g_ariadne_nav_state._2_2_ = 1;
  g_bss_0038c62e = 0;
  g_bss_0038c626 = 0;
  g_bss_0038c636 = 0;
  g_bss_0038c62c = 2;
  g_bss_0038c620 = 0xffff;
  g_bss_0038c621._1_2_ = 0xffff;
  g_bss_0038c630 = 0xffff;
  g_bss_0038c631._1_2_ = 0xffff;
  g_bss_0038c625 = 7;
  g_bss_0038c635 = 7;
  g_bss_0038c621._3_1_ = 0xf;
  g_bss_0038c631._3_1_ = 0xf;
  g_bss_003af898 = arg_ax;
  g_bss_003af89a = arg_dx;
  g_bss_003af89c._0_2_ = arg_bx;
  g_bss_003af89c._2_2_ = arg_dx;
  g_bss_003af8a0._0_2_ = arg_bx;
  g_bss_003af8a0._2_2_ = arg_cx;
  g_bss_003af8a4 = arg_ax;
  g_bss_003af8a6 = arg_cx;
  navigate_update_ariadne_navigation_0b5d38();
  navigate_update_ariadne_navigation_0b5d38();
  val_4 = 0;
  if (0 < g_bss_0038c5d0) {
    val = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + val) >> 0x18 != -1) goto LAB_000b5a53;
      val = val + 0x10;
      val_4 = val_4 + 1;
    } while (val < g_bss_0038c5d0 << 4);
  }
  LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1873, "triangle_find_first_used:not found!!") */
  val_4 = -1;
LAB_000b5a53:
  val_5 = 0x10;
  val = 0;
  do {
    val_3 = val << 4;
    do {
      val_2 = val_3 + 4;
      *(int *)((int)&g_bss_0038c5d8 + val_3) = val_4;
      val_3 = val_2;
    } while (val_2 != val_5);
    val = val + 1;
    val_5 = val_5 + 0x10;
  } while (val < 4);
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : navigate_fn_0b5a90 (Original VA: 0xb5a90, Ghidra: FUN_000b5a90)
 * Prototype: void navigate_fn_0b5a90(void);
 * Address  : 0xb5a90 (Size: 26 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0b5a90
 * Callers  : 0 -> 
 * Callees  : 1 -> navigate_triangle_find_first_used_0b58b4
 ******************************************************************************/
void navigate_fn_0b5a90(void)

{
  navigate_triangle_find_first_used_0b58b4();
  return;
}

/******************************************************************************
 * Function : navigate_fn_0b5bc4 (Original VA: 0xb5bc4, Ghidra: FUN_000b5bc4)
 * Prototype: void navigate_fn_0b5bc4(void);
 * Address  : 0xb5bc4 (Size: 155 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0b5bc4
 * Callers  : 3 -> navigate_nav_creature_radius_set_0b5c60, navigate_path_init8_0c241c, navigate_nav_creature_radius_set_0c2bc0
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_fn_0b5bc4(void)

{
  int val;
  uint uval;
  uint uval_2;
  
  if (g_bss_003d1b58 == 0) {
    val = 0;
    g_bss_003d1b58 = 1;
    do {
      *(undefined4 *)((int)&g_bss_003d1854 + val) = 1;
      val = val + 4;
    } while (val != 0x100);
    uval = 0;
    val = 0;
    do {
      uval_2 = uval & 0x2a;
      uval = uval + 1;
      *(uint *)((int)&g_bss_003d1954 + val) = (uint)(uval_2 == 0x2a);
      val = val + 4;
    } while (uval < 0x40);
    uval = 0;
    val = 0;
    do {
      uval_2 = uval & 0x3f;
      uval = uval + 1;
      *(uint *)((int)&g_bss_003d1a54 + val) = (uint)(uval_2 == 0x3f);
      val = val + 4;
    } while (uval < 0x40);
    g_bss_003d1b54 = &g_bss_003d1854;
  }
  return;
}

/******************************************************************************
 * Function : navigate_nav_creature_radius_set_0b5c60 (Original VA: 0xb5c60, Ghidra: FUN_000b5c60)
 * Prototype: void navigate_nav_creature_radius_set_0b5c60(void);
 * Address  : 0xb5c60 (Size: 65 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 976, 994, 995, 996
 * Purpose  : String 'nav.creature_radius_set : only radius 1..3 allowed'
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_fn_0b5bc4, LbErrorLog
 ******************************************************************************/
void navigate_nav_creature_radius_set_0b5c60(void)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  
  navigate_fn_0b5bc4();
  if ((extraout_ECX < 1) || (val = extraout_ECX, 3 < extraout_ECX)) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 976, "nav.creature_radius_set : only radius 1..3 allowed") */
    val = extraout_ECX_00;
  }
  g_bss_003d1b54 = val * 0x100 + 0x3d1754;
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b5d38 (Original VA: 0xb5d38, Ghidra: FUN_000b5d38)
 * Prototype: void navigate_update_ariadne_navigation_0b5d38(void);
 * Address  : 0xb5d38 (Size: 465 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 6 -> navigate_triangle_find_first_used_0b58b4, navigate_edge_rotateAC_0b8874, navigate_tri_new_0b8e64, navigate_tri_new_0b9274, navigate_update_ariadne_navigation_0b9c2c, navigate_update_ariadne_navigation_0ba5cc
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_update_ariadne_navigation_0b5d38(void)

{
  undefined4 uval;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  int val_4;
  
  uval_2 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10) -
          (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10);
  uval_3 = (int)uval_2 >> 0x1f;
  val = (uval_2 ^ uval_3) - uval_3;
  uval_3 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10) -
          (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >> 0x10);
  uval_2 = (int)uval_3 >> 0x1f;
  val_2 = (uval_3 ^ uval_2) - uval_2;
  if (3 < val) {
    val = 3;
  }
  if (3 < val_2) {
    val_2 = 3;
  }
  val = *(int *)(val_2 * 0x10 + 0x19206c + val * 4);
  uval_2 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >> 0x10) -
          (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10);
  uval_3 = (int)uval_2 >> 0x1f;
  val_2 = (uval_2 ^ uval_3) - uval_3;
  uval_3 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4) >> 0x10) -
          (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10);
  uval_2 = (int)uval_3 >> 0x1f;
  val_3 = (uval_3 ^ uval_2) - uval_2;
  if (3 < val_2) {
    val_2 = 3;
  }
  if (3 < val_3) {
    val_3 = 3;
  }
  val_4 = arg_eax * 0x10;
  uval_2 = *(uint *)(val_3 * 0x10 + 0x19206c + val_2 * 4);
  uval_3 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 2) >> 0x10) -
          (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_4) * 2) >> 0x10);
  uval_4 = (int)uval_3 >> 0x1f;
  val_2 = (uval_3 ^ uval_4) - uval_4;
  uval_3 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 4) >> 0x10) -
          (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_4) * 4) >> 0x10);
  uval_4 = (int)uval_3 >> 0x1f;
  val_3 = (uval_3 ^ uval_4) - uval_4;
  if (3 < val_2) {
    val_2 = 3;
  }
  if (3 < val_3) {
    val_3 = 3;
  }
  uval = *(undefined4 *)(val_3 * 0x10 + 0x19206c + val_2 * 4);
  *(byte *)(&g_bss_0038c626 + arg_eax * 8) = *(byte *)(&g_bss_0038c626 + arg_eax * 8) & 0xc0;
  (&g_bss_0038c626)[arg_eax * 8] =
       (&g_bss_0038c626)[arg_eax * 8] | (ushort)((val << 2 | uval_2) << 2) | (ushort)uval;
  return;
}

/******************************************************************************
 * Function : navigate_edgelen_diagnostic_0b5f44 (Original VA: 0xb5f44, Ghidra: FUN_000b5f44)
 * Prototype: int navigate_edgelen_diagnostic_0b5f44(void);
 * Address  : 0xb5f44 (Size: 530 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1088
 * Purpose  : String 'edgelen diagnostic:1'
 * Callers  : 1 -> navigate_triangulation_diagnostic_0c303c
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
int navigate_edgelen_diagnostic_0b5f44(void)

{
  uint arg_eax;
  uint uval;
  uint uval_2;
  int val;
  int arg_edx;
  int val_2;
  int arg_ebx;
  
  uval_2 = arg_eax;
  val = arg_edx;
  do {
    if ((*(byte *)((int)&g_bss_0038c621 + uval_2 * 0x10 + 3) & 0xf) == 0xf) {
      uval = 1;
      goto LAB_000b5fdf;
    }
    uval = *(int *)((int)&g_ariadne_nav_state + val * 2 + uval_2 * 0x10) >> 0x10;
    if (uval == 0xffffffff) {
      uval = 1;
      goto LAB_000b5fdf;
    }
    if ((int)(&g_ariadne_nav_state)[uval * 4] >> 0x10 == uval_2) {
      val = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + uval * 0x10 + 2) >> 0x10 == uval_2) {
      val = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + uval * 0x10) >> 0x10 == uval_2) {
      val = 2;
    }
    else {
      val = -1;
    }
    val = (&g_data_00192134)[val];
    uval_2 = uval;
  } while (uval != arg_eax);
  uval = uval ^ arg_eax;
LAB_000b5fdf:
  if (uval != 0) {
    val = (&g_data_00192134)[arg_edx];
    uval_2 = arg_eax;
    do {
      if ((*(byte *)((int)&g_bss_0038c621 + uval_2 * 0x10 + 3) & 0xf) == 0xf) {
        uval = 1;
        goto LAB_000b607b;
      }
      uval = *(int *)((int)&g_ariadne_nav_state + val * 2 + uval_2 * 0x10) >> 0x10;
      if (uval == 0xffffffff) {
        uval = 1;
        goto LAB_000b607b;
      }
      if ((int)(&g_ariadne_nav_state)[uval * 4] >> 0x10 == uval_2) {
        val = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + uval * 0x10 + 2) >> 0x10 == uval_2) {
        val = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + uval * 0x10) >> 0x10 == uval_2) {
        val = 2;
      }
      else {
        val = -1;
      }
      val = (&g_data_00192134)[val];
      uval_2 = uval;
    } while (uval != arg_eax);
    uval = uval ^ arg_eax;
LAB_000b607b:
    if (uval != 0) {
      val = (*(int *)(&g_bss_003af896 +
                       (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10 + arg_edx * 2) * 2) >> 0x10) -
              (*(int *)(&g_bss_003af896 +
                       (uint)*(ushort *)
                              (&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10) * 2) >>
              0x10);
      val_2 = (*(int *)(&g_bss_003af898 +
                       (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10 + arg_edx * 2) * 4) >> 0x10) -
              (*(int *)(&g_bss_003af898 +
                       (uint)*(ushort *)
                              (&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10) * 4) >>
              0x10);
      val = val * val + val_2 * val_2;
      if (val < 4) {
        if (arg_ebx == 1) goto LAB_000b6131;
      }
      else if (val < 9) {
        if (arg_ebx == 2) goto LAB_000b6131;
      }
      else if (arg_ebx == 3) goto LAB_000b6131;
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1088, "edgelen diagnostic:3") */
    }
  }
LAB_000b6131:
  return (int)(&g_ariadne_nav_state)
              [(*(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10) >> 0x10) * 4] >> 0x10;
}

/******************************************************************************
 * Function : navigate_region_alloc_overflow_0b62e4 (Original VA: 0xb62e4, Ghidra: FUN_000b62e4)
 * Prototype: undefined8 navigate_region_alloc_overflow_0b62e4(void);
 * Address  : 0xb62e4 (Size: 432 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1197
 * Purpose  : String 'region_alloc:overflow'
 * Callers  : 1 -> navigate_region_put_overflow_0b64ac
 * Callees  : 4 -> LbErrorLog, bflib_system_io_fn_0e9fd7, bflib_system_io_fn_0f694b, bflib_system_io_fn_0f69c6
 ******************************************************************************/
undefined8 navigate_region_alloc_overflow_0b62e4(void)

{
  short *val;
  uint uval;
  int val_2;
  ushort uval_2;
  undefined4 arg_edx;
  int val_3;
  uint uval_3;
  int val_4;
  uint uval_4;
  
  val_3 = 3;
  uval = 1;
  val_2 = 0x7fffffff;
  uval_4 = 0xffffffff;
  do {
    while (uval_3 = uval, val_4 = *(int *)((int)&g_bss_003d1b58 + val_3 + 2) >> 0x10, val_2 <= val_4)
    {
LAB_000b6319:
      uval = uval_3 + 1;
      val_3 = val_3 + 3;
      uval_3 = uval_4;
      if (299 < uval) goto LAB_000b6340;
    }
    if (val_4 == 0) goto LAB_000b6488;
    if ((&g_bss_003d1b5e)[val_3] != '\0') goto LAB_000b6319;
    val_3 = val_3 + 3;
    uval = uval_3 + 1;
    val_2 = val_4;
    uval_4 = uval_3;
  } while (uval_3 + 1 < 300);
LAB_000b6340:
  if (uval_3 == 0xffffffff) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1197, "region_alloc:overflow") */
  }
  if (g_bss_0038c5c4 != 0) {
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
    bflib_system_io_fn_0f694b();
  }
  if (0 < g_bss_0038c5d0) {
    val_3 = g_bss_0038c5d0 * 0x10;
    val_2 = 0;
    do {
      if ((*(int *)((int)&g_bss_0038c621 + val_2) >> 0x18 != -1) &&
         ((int)(uint)*(ushort *)((int)&g_bss_0038c626 + val_2) >> 6 == uval_3)) {
        if (uval_3 != 0) {
          val = (short *)((int)&g_bss_003d1b5c + uval_3 * 3);
          *val = *val + -1;
          (&g_bss_003d1b5e)[uval_3 * 3] = 0;
          uval_2 = *(ushort *)((int)&g_bss_0038c626 + val_2) & 0x3f;
          *(ushort *)((int)&g_bss_0038c626 + val_2) = uval_2;
          g_bss_003d1b5c = g_bss_003d1b5c + 1;
          *(ushort *)((int)&g_bss_0038c626 + val_2) = uval_2;
        }
        if (*(int *)((int)&g_bss_003d1b58 + uval_3 * 3 + 2) >> 0x10 == 0) break;
      }
      val_2 = val_2 + 0x10;
    } while (val_2 < val_3);
  }
LAB_000b6488:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : navigate_fn_0b6494 (Original VA: 0xb6494, Ghidra: FUN_000b6494)
 * Prototype: void navigate_fn_0b6494(void);
 * Address  : 0xb6494 (Size: 22 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0b6494
 * Callers  : 0 -> 
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void navigate_fn_0b6494(void)

{
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : navigate_region_put_overflow_0b64ac (Original VA: 0xb64ac, Ghidra: FUN_000b64ac)
 * Prototype: void navigate_region_put_overflow_0b64ac(void);
 * Address  : 0xb64ac (Size: 1529 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1270
 * Purpose  : String 'region_put:Q overflow'
 * Callers  : 1 -> navigate_nav_log_0b6aac
 * Callees  : 2 -> navigate_region_alloc_overflow_0b62e4, LbErrorLog
 ******************************************************************************/
void navigate_region_put_overflow_0b64ac(void)

{
  short *val;
  short short_val;
  ushort uval;
  int val_2;
  int val_3;
  uint uval_2;
  uint uval_3;
  int val_4;
  uint uval_4;
  int val_5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  int local_3c;
  int local_38;
  int local_28;
  int local_1c;
  
  val_2 = navigate_region_alloc_overflow_0b62e4();
  g_bss_003d2204 = 0;
  val_3 = val_2 * 3;
  (&g_bss_003d1b5e)[val_3] = 1;
  g_bss_003d2208 = 0;
  g_bss_003d220c = 0;
  if ((int)(uint)(ushort)(&g_bss_0038c626)[extraout_ECX * 8] >> 6 != val_2) {
    val_5 = ((int)(uint)(ushort)(&g_bss_0038c626)[extraout_ECX * 8] >> 6) * 3;
    val = (short *)((int)&g_bss_003d1b5c + val_5);
    *val = *val + -1;
    (&g_bss_003d1b5e)[val_5] = 0;
    (&g_bss_0038c626)[extraout_ECX * 8] = (&g_bss_0038c626)[extraout_ECX * 8] & 0x3f;
    short_val = *(short *)((int)&g_bss_003d1b5c + val_3);
    (&g_bss_0038c626)[extraout_ECX * 8] = (&g_bss_0038c626)[extraout_ECX * 8] | (ushort)(val_2 << 6);
    *(short *)((int)&g_bss_003d1b5c + val_3) = short_val + 1;
  }
  val_3 = g_bss_003d2204;
  g_bss_003d2204 = g_bss_003d2204 + 1;
  if (199 < g_bss_003d2204) {
    g_bss_003d2204 = 0;
  }
  uval_3 = extraout_ECX;
  if (g_bss_003d2204 == g_bss_003d2208) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
    uval_3 = extraout_ECX_00;
  }
  (&g_bss_003d1ee4)[val_3] = (int)(short)extraout_ECX;
  g_bss_003d220c = g_bss_003d220c + 1;
  if (g_bss_003d1ee0 < g_bss_003d220c) {
    g_bss_003d1ee0 = g_bss_003d220c;
  }
  local_28 = 0;
  uval_4 = uval_3;
  val_3 = local_28;
LAB_000b6739:
  do {
    if ((*(byte *)((int)&g_bss_0038c621 + uval_4 * 0x10 + 3) & 0xf) == 0xf) {
      uval_2 = 1;
    }
    else {
      uval_2 = *(int *)((int)&g_ariadne_nav_state + val_3 * 2 + uval_4 * 0x10) >> 0x10;
      if (uval_2 == 0xffffffff) {
        uval_2 = 1;
      }
      else {
        if ((int)(&g_ariadne_nav_state)[uval_2 * 4] >> 0x10 == uval_4) {
          val_3 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + uval_2 * 0x10 + 2) >> 0x10 == uval_4) {
          val_3 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + uval_2 * 0x10) >> 0x10 == uval_4) {
          val_3 = 2;
        }
        else {
          val_3 = -1;
        }
        uval_4 = uval_2;
        val_3 = (&g_data_00192134)[val_3];
        if (uval_2 != uval_3) goto LAB_000b6739;
        uval_2 = uval_2 ^ uval_3;
      }
    }
    val_3 = local_28;
    uval_4 = uval_3;
    if (uval_2 == 0) {
      do {
        uval = (&g_bss_0038c626)[uval_4 * 8];
        *(byte *)(&g_bss_0038c626 + uval_4 * 8) = *(byte *)(&g_bss_0038c626 + uval_4 * 8) & 0xc0;
        (&g_bss_0038c626)[uval_4 * 8] =
             (&g_bss_0038c626)[uval_4 * 8] |
             uval & 0x3f | (ushort)(3 << ((char)val_3 * '\x02' & 0x1fU));
        uval_2 = *(int *)((int)&g_ariadne_nav_state + val_3 * 2 + uval_4 * 0x10) >> 0x10;
        if (uval_2 == 0xffffffff) break;
        if ((int)(&g_ariadne_nav_state)[uval_2 * 4] >> 0x10 == uval_4) {
          val_3 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + uval_2 * 0x10 + 2) >> 0x10 == uval_4) {
          val_3 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + uval_2 * 0x10) >> 0x10 == uval_4) {
          val_3 = 2;
        }
        else {
          val_3 = -1;
        }
        uval = (&g_bss_0038c626)[uval_2 * 8];
        *(byte *)(&g_bss_0038c626 + uval_2 * 8) = *(byte *)(&g_bss_0038c626 + uval_2 * 8) & 0xc0;
        (&g_bss_0038c626)[uval_2 * 8] =
             (&g_bss_0038c626)[uval_2 * 8] |
             uval & 0x3f | (ushort)(3 << ((char)val_3 * '\x02' & 0x1fU));
        val_3 = (&g_data_00192134)[val_3];
        uval_4 = uval_2;
      } while (uval_2 != uval_3);
    }
    val_3 = local_28 + 1;
    uval_4 = uval_3;
    local_28 = val_3;
    if (2 < val_3) {
      do {
        val_3 = g_bss_003d2208;
        g_bss_003d220c = g_bss_003d220c + -1;
        if (g_bss_003d2208 == g_bss_003d2204) {
          uval_3 = 0xffffffff;
        }
        else {
          g_bss_003d2208 = g_bss_003d2208 + 1;
          if (199 < g_bss_003d2208) {
            g_bss_003d2208 = 0;
          }
          uval_3 = (&g_bss_003d1ee4)[val_3];
        }
        if (uval_3 == 0xffffffff) {
          return;
        }
        local_38 = uval_3 << 4;
        local_3c = 0;
        do {
          val_3 = *(int *)((int)&g_ariadne_nav_state + local_38);
          val_5 = val_3 >> 0x10;
          if (((val_5 != -1) && ((*(byte *)((int)&g_bss_0038c621 + val_5 * 0x10 + 3) & 0xf) != 0xf))
             && ((int)(uint)(ushort)(&g_bss_0038c626)[val_5 * 8] >> 6 != val_2)) {
            local_1c = 0;
            uval_4 = uval_3;
            val_4 = local_1c;
LAB_000b6943:
            do {
              if ((*(byte *)((int)&g_bss_0038c621 + uval_4 * 0x10 + 3) & 0xf) == 0xf) {
                uval_2 = 1;
              }
              else {
                uval_2 = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + uval_4 * 0x10) >> 0x10;
                if (uval_2 == 0xffffffff) {
                  uval_2 = 1;
                }
                else {
                  if ((int)(&g_ariadne_nav_state)[uval_2 * 4] >> 0x10 == uval_4) {
                    val_4 = 0;
                  }
                  else if (*(int *)((int)&g_ariadne_nav_state + uval_2 * 0x10 + 2) >> 0x10 == uval_4) {
                    val_4 = 1;
                  }
                  else if (*(int *)(&g_bss_0038c620 + uval_2 * 0x10) >> 0x10 == uval_4) {
                    val_4 = 2;
                  }
                  else {
                    val_4 = -1;
                  }
                  uval_4 = uval_2;
                  val_4 = (&g_data_00192134)[val_4];
                  if (uval_2 != uval_3) goto LAB_000b6943;
                  uval_2 = uval_2 ^ uval_3;
                }
              }
              val_4 = local_1c;
              uval_4 = uval_3;
              if (uval_2 == 0) {
                do {
                  uval = (&g_bss_0038c626)[uval_4 * 8];
                  *(byte *)(&g_bss_0038c626 + uval_4 * 8) = *(byte *)(&g_bss_0038c626 + uval_4 * 8) & 0xc0
                  ;
                  (&g_bss_0038c626)[uval_4 * 8] =
                       (&g_bss_0038c626)[uval_4 * 8] |
                       uval & 0x3f | (ushort)(3 << ((char)val_4 * '\x02' & 0x1fU));
                  uval_2 = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + uval_4 * 0x10) >> 0x10;
                  if (uval_2 == 0xffffffff) break;
                  if ((int)(&g_ariadne_nav_state)[uval_2 * 4] >> 0x10 == uval_4) {
                    val_4 = 0;
                  }
                  else if (*(int *)((int)&g_ariadne_nav_state + uval_2 * 0x10 + 2) >> 0x10 == uval_4) {
                    val_4 = 1;
                  }
                  else if (*(int *)(&g_bss_0038c620 + uval_2 * 0x10) >> 0x10 == uval_4) {
                    val_4 = 2;
                  }
                  else {
                    val_4 = -1;
                  }
                  uval = (&g_bss_0038c626)[uval_2 * 8];
                  *(byte *)(&g_bss_0038c626 + uval_2 * 8) = *(byte *)(&g_bss_0038c626 + uval_2 * 8) & 0xc0
                  ;
                  (&g_bss_0038c626)[uval_2 * 8] =
                       (&g_bss_0038c626)[uval_2 * 8] |
                       uval & 0x3f | (ushort)(3 << ((char)val_4 * '\x02' & 0x1fU));
                  val_4 = (&g_data_00192134)[val_4];
                  uval_4 = uval_2;
                } while (uval_2 != uval_3);
              }
              val_4 = local_1c + 1;
              uval_4 = uval_3;
              local_1c = val_4;
            } while (val_4 < 3);
            if ((int)(uint)(ushort)(&g_bss_0038c626)[val_5 * 8] >> 6 != val_2) {
              val_4 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_5 * 8] >> 6) * 3;
              (&g_bss_003d1b5e)[val_4] = 0;
              uval = (&g_bss_0038c626)[val_5 * 8];
              *(short *)((int)&g_bss_003d1b5c + val_4) = *(short *)((int)&g_bss_003d1b5c + val_4) + -1;
              (&g_bss_0038c626)[val_5 * 8] = uval & 0x3f;
              (&g_bss_0038c626)[val_5 * 8] = uval & 0x3f | (ushort)(val_2 << 6);
              val = (short *)((int)&g_bss_003d1b5c + val_2 * 3);
              *val = *val + 1;
            }
            val_5 = g_bss_003d2204;
            g_bss_003d2204 = g_bss_003d2204 + 1;
            if (199 < g_bss_003d2204) {
              g_bss_003d2204 = 0;
            }
            if (g_bss_003d2204 == g_bss_003d2208) {
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
              val_5 = extraout_ECX_01;
            }
            g_bss_003d220c = g_bss_003d220c + 1;
            (&g_bss_003d1ee4)[val_5] = (int)(short)((uint)val_3 >> 0x10);
            if (g_bss_003d1ee0 < g_bss_003d220c) {
              g_bss_003d1ee0 = g_bss_003d220c;
            }
          }
          local_38 = local_38 + 2;
          local_3c = local_3c + 1;
        } while (local_3c < 3);
      } while( true );
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_nav_log_0b6aac (Original VA: 0xb6aac, Ghidra: FUN_000b6aac)
 * Prototype: undefined4 navigate_nav_log_0b6aac(void);
 * Address  : 0xb6aac (Size: 344 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : String 'nav.log'
 * Callers  : 2 -> navigate_nav_log_0c206c, navigate_path_init8_0c241c
 * Callees  : 4 -> navigate_region_put_overflow_0b64ac, bflib_system_io_fn_0e9fd7, bflib_system_io_fn_0f694b, bflib_system_io_fn_0f69c6
 ******************************************************************************/
undefined4 navigate_nav_log_0b6aac(void)

{
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  int val;
  int val_2;
  
  if (((*(byte *)((int)&g_bss_0038c621 + arg_eax * 0x10 + 3) & 0xf) != 0xf) &&
     ((*(byte *)((int)&g_bss_0038c621 + arg_edx * 0x10 + 3) & 0xf) != 0xf)) {
    val = (int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6;
    val_2 = (int)(uint)(ushort)(&g_bss_0038c626)[arg_edx * 8] >> 6;
    if ((&g_bss_003d1b5e)[val * 3] == '\x01') {
      if (val == val_2) {
        return 1;
      }
    }
    else if ((&g_bss_003d1b5e)[val_2 * 3] == '\x01') {
      if (val == val_2) {
        return 1;
      }
    }
    else {
      if (g_bss_0038c5c4 != 0) {
        if (g_bss_00388ebc != 1) {
          g_bss_00388ebc = 1;
          g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
          g_bss_00388ec4 = g_game_turn;
        }
        if (g_bss_00388ec4 != g_game_turn) {
          g_bss_00388ec4 = g_game_turn;
          bflib_system_io_fn_0f694b();
          bflib_system_io_fn_0f69c6();
        }
        bflib_system_io_fn_0f694b();
      }
      navigate_region_put_overflow_0b64ac();
      if ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6 ==
          (int)(uint)(ushort)(&g_bss_0038c626)[extraout_ECX * 8] >> 6) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_region_diagnostic_count_0b6c04 (Original VA: 0xb6c04, Ghidra: FUN_000b6c04)
 * Prototype: void navigate_region_diagnostic_count_0b6c04(void);
 * Address  : 0xb6c04 (Size: 445 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1425, 1429, 1445
 * Purpose  : String 'region_diagnostic:count'
 * Callers  : 1 -> navigate_triangulation_diagnostic_0c303c
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void navigate_region_diagnostic_count_0b6c04(void)

{
  int val;
  int extraout_ECX;
  int val_2;
  int extraout_ECX_00;
  int val_3;
  int val_4;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  if (0 < g_bss_0038c5d0) {
    val_3 = 0;
    do {
      if ((*(int *)((int)&g_bss_0038c621 + val_3) >> 0x18 != -1) &&
         ((int)(uint)*(ushort *)((int)&g_bss_0038c626 + val_3) >> 6 == 0)) {
        local_24 = local_24 + 1;
      }
      val_3 = val_3 + 0x10;
    } while (val_3 < g_bss_0038c5d0 * 0x10);
  }
  val_4 = 1;
  val_3 = 3;
  do {
    if (*(int *)((int)&g_bss_003d1b58 + val_3 + 2) >> 0x10 != 0) {
      val_2 = 0;
      if (0 < g_bss_0038c5d0) {
        val = 0;
        do {
          if ((*(int *)((int)&g_bss_0038c621 + val) >> 0x18 != -1) &&
             ((int)(uint)*(ushort *)((int)&g_bss_0038c626 + val) >> 6 == val_4)) {
            val_2 = val_2 + 1;
          }
          val = val + 0x10;
        } while (val < g_bss_0038c5d0 * 0x10);
      }
      if (val_2 != *(int *)((int)&g_bss_003d1b58 + val_3 + 2) >> 0x10) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1425, "region_diagnostic:count") */
        val_2 = extraout_ECX;
      }
      local_24 = local_24 + val_2;
    }
    val_4 = val_4 + 1;
    val_3 = val_3 + 3;
  } while (val_4 < 300);
  if (local_24 != g_bss_0038c5d4) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1429, "region_diagnostic:total") */
  }
  local_20 = 0;
  if (0 < g_bss_0038c5d0) {
    local_1c = 0;
    do {
      val_3 = (int)(uint)*(ushort *)((int)&g_bss_0038c626 + local_1c) >> 6;
      if (*(int *)((int)&g_bss_0038c621 + local_1c) >> 0x18 != -1) {
        val_4 = local_1c;
        do {
          val_2 = (int)(uint)(ushort)(&g_bss_0038c626)
                                     [(*(int *)((int)&g_ariadne_nav_state + val_4) >> 0x10) * 8] >> 6;
          if ((val_3 != val_2) &&
             ((((&g_bss_003d1b5e)[val_3 * 3] == '\x01' && (val_2 != 0)) ||
              (((&g_bss_003d1b5e)[val_2 * 3] == '\x01' && (val_3 != 0)))))) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1445, "region_diagnostic:adjacent components") */
            val_4 = extraout_ECX_00;
          }
          val_4 = val_4 + 2;
        } while (val_4 != local_1c + 6);
      }
      local_1c = local_1c + 0x10;
      local_20 = local_20 + 1;
    } while (local_20 < g_bss_0038c5d0);
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0b6df0 (Original VA: 0xb6df0, Ghidra: FUN_000b6df0)
 * Prototype: undefined8 navigate_fn_0b6df0(void);
 * Address  : 0xb6df0 (Size: 57 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0b6df0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 navigate_fn_0b6df0(void)

{
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val = 3;
  val_2 = 0;
  do {
    if ((*(int *)((int)&g_bss_003d1b58 + val + 2) >> 0x10 != 0) &&
       ((&g_bss_003d1b5e)[val] == '\x01')) {
      val_2 = val_2 + 1;
    }
    val = val + 3;
  } while (val != 900);
  return CONCAT44(arg_edx,val_2 + 1);
}

/******************************************************************************
 * Function : navigate_Regions_0b6e29 (Original VA: 0xb6e29, Ghidra: FUN_000b6e29)
 * Prototype: void navigate_Regions_0b6e29(void);
 * Address  : 0xb6e29 (Size: 236 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Log prefix 'Regions : %d/%d  max %s:%d'
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void navigate_Regions_0b6e29(void)

{
  char ch;
  char *arg_eax;
  int val;
  int val_2;
  int extraout_EDX;
  int extraout_EDX_00;
  int val_3;
  char *str_ptr;
  char *str_ptr_2;
  byte flag;
  char local_58 [84];
  char *str_ptr_3;
  
  flag = 0;
  val = 3;
  do {
    val = val + 3;
  } while (val != 900);
  val = 3;
  do {
    val = val + 3;
  } while (val != 900);
  dk_sprintf();
  val_3 = 0;
  val = extraout_EDX;
  do {
    val_2 = *(int *)((int)&g_bss_003d1b58 + val_3 + 2) >> 0x10;
    if (val_2 != 0) {
      dk_sprintf(local_58,s_R_03d_Component__d_Tri__04d_0016b110,val,(&g_bss_003d1b5e)[val_3],
                   val_2);
      str_ptr = local_58;
      val = -1;
      str_ptr_3 = arg_eax;
      do {
        str_ptr_2 = str_ptr_3;
        if (val == 0) break;
        val = val + -1;
        str_ptr_2 = str_ptr_3 + (uint)flag * -2 + 1;
        ch = *str_ptr_3;
        str_ptr_3 = str_ptr_2;
      } while (ch != '\0');
      str_ptr_2 = str_ptr_2 + -1;
      do {
        ch = *str_ptr;
        *str_ptr_2 = ch;
        val = extraout_EDX_00;
        if (ch == '\0') break;
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        str_ptr_2[1] = ch;
        str_ptr_2 = str_ptr_2 + 2;
      } while (ch != '\0');
    }
    val = val + 1;
    val_3 = val_3 + 3;
    if (299 < val) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b70c4 (Original VA: 0xb70c4, Ghidra: FUN_000b70c4)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0b70c4(void);
 * Address  : 0xb70c4 (Size: 433 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 4 -> navigate_triangle_find_cache_get_0b7e14, navigate_update_ariadne_navigation_0b8368, navigate_make_edge_0bab7c, navigate_thin_wall_0bb0ac
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0b70c4(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  uint uval;
  uint uval_2;
  int *arg_ecx;
  int arg_edx;
  int val_3;
  int val_4;
  int val_5;
  int *arg_ebx;
  int val_6;
  int val_7;
  char ch;
  bool flag;
  bool flag_2;
  bool flag_3;
  
  val_7 = *arg_ecx;
  val_2 = *arg_ebx * 0x10;
  val_3 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_7 * 2 + val_2) * 4) >>
          0x10) * 0x100 - arg_edx;
  val_6 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_7 * 2 + val_2) * 2) >>
          0x10) * 0x100 - arg_eax;
  val = (longlong)val_6 *
          (longlong)
          ((*(int *)(&g_bss_003af898 +
                    (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_7] * 2 + val_2) * 4) >>
           0x10) * 0x100 - arg_edx);
  val_4 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)val_3 *
          (longlong)
          ((*(int *)(&g_bss_003af896 +
                    (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_7] * 2 + val_2) * 2) >>
           0x10) * 0x100 - arg_eax);
  val_2 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_4 - val_2;
  flag_2 = SBORROW4(val_4,val_2) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  val_2 = *arg_ebx;
  flag = '\0' < ch;
  while( true ) {
    val = (longlong)val_6 *
            (longlong)
            ((*(int *)(&g_bss_003af898 +
                      (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_7] * 2 + val_2 * 0x10) *
                      4) >> 0x10) * 0x100 - arg_edx);
    val_4 = (int)((ulonglong)val >> 0x20);
    uval = (uint)val;
    val = (longlong)val_3 *
            (longlong)
            ((*(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_7] * 2 + val_2 * 0x10) *
                      2) >> 0x10) * 0x100 - arg_eax);
    val_5 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_4 - val_5;
    flag_3 = SBORROW4(val_4,val_5) != SBORROW4(uval_2,uval);
    flag_2 = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_3 == flag_2) - (flag_3 != flag_2);
    }
    if ((flag) && ('\0' >= ch)) break;
    val_4 = *(int *)((int)&g_ariadne_nav_state + val_7 * 2 + val_2 * 0x10) >> 0x10;
    if (val_4 < 0) {
      return 0xffffffff;
    }
    if ((int)(&g_ariadne_nav_state)[val_4 * 4] >> 0x10 == val_2) {
      val_7 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_4 * 0x10 + 2) >> 0x10 == val_2) {
      val_7 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_4 * 0x10) >> 0x10 == val_2) {
      val_7 = 2;
    }
    else {
      val_7 = -1;
    }
    val_7 = (&g_data_00192134)[val_7];
    val_2 = val_4;
    flag = '\0' < ch;
  }
  *arg_ebx = val_2;
  *arg_ecx = val_7;
  return (&g_data_00192134)[val_7];
}

/******************************************************************************
 * Function : navigate_triangulation_border_start_0b72f8 (Original VA: 0xb72f8, Ghidra: FUN_000b72f8)
 * Prototype: void navigate_triangulation_border_start_0b72f8(void);
 * Address  : 0xb72f8 (Size: 228 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1695
 * Purpose  : Log prefix 'triangulation_border_start : not found'
 * Callers  : 1 -> navigate_triangulation_border_init_overflow_0b73dc
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void navigate_triangulation_border_start_0b72f8(void)

{
  int *arg_eax;
  int val;
  int val_2;
  int *arg_edx;
  int val_3;
  int val_4;
  
  if (0 < g_bss_003d23a0) {
    val_4 = 0;
    do {
      val_2 = *(int *)((int)&g_bss_003d2210 + val_4);
      val_3 = val_2 * 0x10;
      if ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1) {
        val = 0;
        do {
          if (*(int *)((int)&g_ariadne_nav_state + val_3) >> 0x10 == -1) {
            *arg_eax = val_2;
            *arg_edx = val;
            return;
          }
          val = val + 1;
          val_3 = val_3 + 2;
        } while (val < 3);
      }
      val_4 = val_4 + 4;
    } while (val_4 < g_bss_003d23a0 * 4);
  }
  val_4 = 0;
  if (0 < g_bss_0038c5d0) {
    val_2 = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + val_2) >> 0x18 != -1) {
        val = 0;
        val_3 = val_2;
        do {
          if (*(int *)((int)&g_ariadne_nav_state + val_3) >> 0x10 == -1) {
            *arg_eax = val_4;
            *arg_edx = val;
            return;
          }
          val = val + 1;
          val_3 = val_3 + 2;
        } while (val < 3);
      }
      val_2 = val_2 + 0x10;
      val_4 = val_4 + 1;
    } while (val_2 < g_bss_0038c5d0 * 0x10);
  }
  LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1695, "triangulation_border_start : not found") */
  return;
}

/******************************************************************************
 * Function : navigate_triangulation_border_init_overflow_0b73dc (Original VA: 0xb73dc, Ghidra: FUN_000b73dc)
 * Prototype: void navigate_triangulation_border_init_overflow_0b73dc(void);
 * Address  : 0xb73dc (Size: 226 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1715
 * Purpose  : String 'triangulation_border_init:overflow'
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 2 -> navigate_triangulation_border_start_0b72f8, LbErrorLog
 ******************************************************************************/
void navigate_triangulation_border_init_overflow_0b73dc(void)

{
  int val;
  int extraout_ECX;
  int val_2;
  int val_3;
  int local_20;
  int local_1c;
  
  navigate_triangulation_border_start_0b72f8();
  g_bss_003d23a0 = 0;
  val_2 = local_20;
  val_3 = local_1c;
  do {
    g_bss_003d23a0 = g_bss_003d23a0 + 1;
    (&g_bss_003d220c)[g_bss_003d23a0] = val_2;
    if (99 < g_bss_003d23a0) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1715, "triangulation_border_init:overflow") */
      val_2 = extraout_ECX;
    }
    val_3 = (&g_data_00192134)[val_3];
    while (val = *(int *)((int)&g_ariadne_nav_state + val_3 * 2 + val_2 * 0x10) >> 0x10, val != -1) {
      if ((int)(&g_ariadne_nav_state)[val * 4] >> 0x10 == val_2) {
        val_3 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val * 0x10 + 2) >> 0x10 == val_2) {
        val_3 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10 == val_2) {
        val_3 = 2;
      }
      else {
        val_3 = -1;
      }
      val_3 = (&g_data_00192134)[val_3];
      val_2 = val;
    }
  } while ((val_2 != local_20) || (val_3 != local_1c));
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b74fc (Original VA: 0xb74fc, Ghidra: FUN_000b74fc)
 * Prototype: bool navigate_update_ariadne_navigation_0b74fc(void);
 * Address  : 0xb74fc (Size: 348 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_triangle_reppoint_0bcddc
 * Callees  : 0 -> 
 ******************************************************************************/
bool navigate_update_ariadne_navigation_0b74fc(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  uint uval;
  uint uval_2;
  int arg_edx;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int arg_ebx;
  int val_7;
  int val_8;
  int val_9;
  char ch;
  bool flag;
  bool flag_2;
  
  val_3 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >> 0x10;
  val_7 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10;
  val_8 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >> 0x10;
  val_4 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4) >> 0x10;
  val_2 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10;
  val_9 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10;
  val = (longlong)(val_8 * 0x100 + val_7 * -0x100) * (longlong)(arg_ebx + val_3 * -0x100);
  val_5 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)(val_4 * 0x100 + val_3 * -0x100) * (longlong)(arg_edx + val_7 * -0x100);
  val_6 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_5 - val_6;
  flag_2 = SBORROW4(val_5,val_6) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  if (ch < '\x01') {
    val = (longlong)(val_9 * 0x100 + val_8 * -0x100) * (longlong)(arg_ebx + val_4 * -0x100);
    val_5 = (int)((ulonglong)val >> 0x20);
    uval = (uint)val;
    val = (longlong)(val_2 * 0x100 + val_4 * -0x100) * (longlong)(arg_edx + val_8 * -0x100);
    val_4 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_5 - val_4;
    flag_2 = SBORROW4(val_5,val_4) != SBORROW4(uval_2,uval);
    flag = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if (ch < '\x01') {
      val = (longlong)(val_7 * 0x100 + val_9 * -0x100) * (longlong)(arg_ebx + val_2 * -0x100);
      val_4 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)(val_3 * 0x100 + val_2 * -0x100) * (longlong)(arg_edx + val_9 * -0x100);
      val_2 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_4 - val_2;
      flag_2 = SBORROW4(val_4,val_2) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch < '\x01') {
        flag = false;
        goto LAB_000b7646;
      }
    }
  }
  flag = true;
LAB_000b7646:
  return !flag;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b7658 (Original VA: 0xb7658, Ghidra: FUN_000b7658)
 * Prototype: bool navigate_update_ariadne_navigation_0b7658(void);
 * Address  : 0xb7658 (Size: 348 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool navigate_update_ariadne_navigation_0b7658(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  uint uval;
  uint uval_2;
  int arg_edx;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int arg_ebx;
  int val_7;
  int val_8;
  int val_9;
  char ch;
  bool flag;
  bool flag_2;
  
  val_3 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >> 0x10;
  val_7 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10;
  val_8 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >> 0x10;
  val_4 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4) >> 0x10;
  val_2 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10;
  val_9 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10;
  val = (longlong)(val_8 * 0x100 + val_7 * -0x100) * (longlong)(arg_ebx + val_3 * -0x100);
  val_5 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)(val_4 * 0x100 + val_3 * -0x100) * (longlong)(arg_edx + val_7 * -0x100);
  val_6 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_5 - val_6;
  flag_2 = SBORROW4(val_5,val_6) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  if (ch < '\0') {
    val = (longlong)(val_9 * 0x100 + val_8 * -0x100) * (longlong)(arg_ebx + val_4 * -0x100);
    val_5 = (int)((ulonglong)val >> 0x20);
    uval = (uint)val;
    val = (longlong)(val_2 * 0x100 + val_4 * -0x100) * (longlong)(arg_edx + val_8 * -0x100);
    val_4 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_5 - val_4;
    flag_2 = SBORROW4(val_5,val_4) != SBORROW4(uval_2,uval);
    flag = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if (ch < '\0') {
      val = (longlong)(val_7 * 0x100 + val_9 * -0x100) * (longlong)(arg_ebx + val_2 * -0x100);
      val_4 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)(val_3 * 0x100 + val_2 * -0x100) * (longlong)(arg_edx + val_9 * -0x100);
      val_2 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_4 - val_2;
      flag_2 = SBORROW4(val_4,val_2) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch < '\0') {
        flag = false;
        goto LAB_000b77a2;
      }
    }
  }
  flag = true;
LAB_000b77a2:
  return !flag;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b77b4 (Original VA: 0xb77b4, Ghidra: FUN_000b77b4)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0b77b4(void);
 * Address  : 0xb77b4 (Size: 746 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1873
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_fn_0bafbc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0b77b4(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  undefined4 uval;
  uint uval_2;
  uint uval_3;
  int arg_ecx;
  int val_3;
  int val_4;
  int val_5;
  int arg_edx;
  int val_6;
  int val_7;
  int arg_ebx;
  int val_8;
  int val_9;
  int val_10;
  int val_11;
  char ch;
  bool flag;
  bool flag_2;
  
  val_8 = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10) >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_8 * 4] >> 0x10 == arg_eax) {
    val_11 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_8 * 0x10 + 2) >> 0x10 == arg_eax) {
    val_11 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_8 * 0x10) >> 0x10 == arg_eax) {
    val_11 = 2;
  }
  else {
    val_11 = -1;
  }
  val_2 = arg_eax * 0x10;
  val_9 = *(int *)(&g_bss_003af898 +
                   (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[arg_edx] * 2 + val_2) * 4) >>
           0x10;
  val_3 = *(int *)(&g_bss_003af896 +
                  (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[arg_edx] * 2 + val_2) * 2) >>
          0x10;
  val_4 = *(int *)(&g_bss_003af896 +
                  (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192130)[arg_edx] * 2 + val_2) * 2) >>
          0x10;
  val_10 = *(int *)(&g_bss_003af898 +
                   (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192130)[arg_edx] * 2 + val_2) * 4) >>
           0x10;
  val_5 = *(int *)(&g_bss_003af896 +
                  (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_11] * 2 + val_8 * 0x10) * 2
                  ) >> 0x10;
  val_11 = *(int *)(&g_bss_003af898 +
                   (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_11] * 2 + val_8 * 0x10) *
                   4) >> 0x10;
  val_8 = *(int *)(&g_bss_003af898 +
                   (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_2) * 4) >>
           0x10;
  val_2 = *(int *)(&g_bss_003af896 +
                  (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_2) * 2) >>
          0x10;
  if ((arg_ebx == val_3) && (arg_ecx == val_9)) {
    uval = 0;
  }
  else {
    if ((arg_ebx == val_4) && (arg_ecx == val_10)) {
      return 1;
    }
    if ((arg_ebx == val_5) && (arg_ecx == val_11)) {
      return 3;
    }
    if ((arg_ebx == val_2) && (arg_ecx == val_8)) {
      return 2;
    }
    val = (longlong)(val_4 - val_3) * (longlong)(arg_ecx - val_9);
    val_6 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    val = (longlong)(val_10 - val_9) * (longlong)(arg_ebx - val_3);
    val_7 = (int)((ulonglong)val >> 0x20);
    uval_3 = (uint)val;
    ch = uval_2 != uval_3;
    uval_2 = (uint)(uval_2 < uval_3);
    uval_3 = val_6 - val_7;
    flag_2 = SBORROW4(val_6,val_7) != SBORROW4(uval_3,uval_2);
    flag = (int)(uval_3 - uval_2) < 0;
    if (uval_3 != uval_2) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if ('\0' < ch) {
      return 0xfffffffe;
    }
    if (ch == '\0') {
      return 4;
    }
    val = (longlong)(val_5 - val_4) * (longlong)(arg_ecx - val_10);
    val_6 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    val = (longlong)(val_11 - val_10) * (longlong)(arg_ebx - val_4);
    val_4 = (int)((ulonglong)val >> 0x20);
    uval_3 = (uint)val;
    ch = uval_2 != uval_3;
    uval_2 = (uint)(uval_2 < uval_3);
    uval_3 = val_6 - val_4;
    flag_2 = SBORROW4(val_6,val_4) != SBORROW4(uval_3,uval_2);
    flag = (int)(uval_3 - uval_2) < 0;
    if (uval_3 != uval_2) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if ('\0' < ch) {
      return 0xfffffffe;
    }
    if (ch == '\0') {
      return 6;
    }
    val = (longlong)(val_2 - val_5) * (longlong)(arg_ecx - val_11);
    val_4 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    val = (longlong)(val_8 - val_11) * (longlong)(arg_ebx - val_5);
    val_11 = (int)((ulonglong)val >> 0x20);
    uval_3 = (uint)val;
    ch = uval_2 != uval_3;
    uval_2 = (uint)(uval_2 < uval_3);
    uval_3 = val_4 - val_11;
    flag_2 = SBORROW4(val_4,val_11) != SBORROW4(uval_3,uval_2);
    flag = (int)(uval_3 - uval_2) < 0;
    if (uval_3 != uval_2) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if ('\0' < ch) {
      return 0xfffffffe;
    }
    if (ch == '\0') {
      return 7;
    }
    val = (longlong)(val_3 - val_2) * (longlong)(arg_ecx - val_8);
    val_11 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    val = (longlong)(val_9 - val_8) * (longlong)(arg_ebx - val_2);
    val_8 = (int)((ulonglong)val >> 0x20);
    uval_3 = (uint)val;
    ch = uval_2 != uval_3;
    uval_2 = (uint)(uval_2 < uval_3);
    uval_3 = val_11 - val_8;
    flag_2 = SBORROW4(val_11,val_8) != SBORROW4(uval_3,uval_2);
    flag = (int)(uval_3 - uval_2) < 0;
    if (uval_3 != uval_2) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if ('\0' < ch) {
      return 0xfffffffe;
    }
    if (ch == '\0') {
      return 5;
    }
    uval = 0xffffffff;
  }
  return uval;
}

/******************************************************************************
 * Function : navigate_triangle_find_first_used_0b7b4c (Original VA: 0xb7b4c, Ghidra: FUN_000b7b4c)
 * Prototype: int navigate_triangle_find_first_used_0b7b4c(void);
 * Address  : 0xb7b4c (Size: 353 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1873
 * Purpose  : String 'triangle_find_first_used:not found!!'
 * Callers  : 2 -> navigate_triangle_find_cache_get_0b7d64, navigate_triangle_find_cache_get_0b7e14
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
int navigate_triangle_find_first_used_0b7b4c(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  int val_2;
  int val_3;
  
  val = arg_eax >> 0xe;
  if (val < 0) {
    val = 0;
  }
  if (3 < val) {
    val = 3;
  }
  val_2 = arg_edx >> 0xe;
  if (val_2 < 0) {
    val_2 = 0;
  }
  if (3 < val_2) {
    val_2 = 3;
  }
  if ((-1 < val + -1) &&
     ((int)(&g_bss_0038c621)[(&g_bss_0038c5d4)[val_2 * 4 + val] * 4] >> 0x18 != -1)) {
    return (&g_bss_0038c5d4)[val_2 * 4 + val];
  }
  if ((val + 1 < 4) &&
     ((int)(&g_bss_0038c621)[(&g_bss_0038c5dc)[val_2 * 4 + val] * 4] >> 0x18 != -1)) {
    return (&g_bss_0038c5dc)[val_2 * 4 + val];
  }
  if ((-1 < val_2 + -1) &&
     ((int)(&g_bss_0038c621)[(&g_bss_0038c5c8)[val_2 * 4 + val] * 4] >> 0x18 != -1)) {
    return (&g_bss_0038c5c8)[val_2 * 4 + val];
  }
  if ((val_2 + 1 < 4) &&
     ((int)(&g_bss_0038c621)[(&g_bss_0038c5e8)[val_2 * 4 + val] * 4] >> 0x18 != -1)) {
    return (&g_bss_0038c5e8)[val_2 * 4 + val];
  }
  val = 0;
  do {
    val_3 = 0;
    val_2 = val;
    do {
      if ((int)(&g_bss_0038c621)[*(int *)((int)&g_bss_0038c5d8 + val_2) * 4] >> 0x18 != -1) {
        return *(int *)((int)&g_bss_0038c5d8 + val_2);
      }
      val_3 = val_3 + 1;
      val_2 = val_2 + 4;
    } while (val_3 < 4);
    val = val + 0x10;
  } while (val < 0x40);
  val = 0;
  if (0 < g_bss_0038c5d0) {
    val_2 = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + val_2) >> 0x18 != -1) {
        return val;
      }
      val_2 = val_2 + 0x10;
      val = val + 1;
    } while (val_2 < g_bss_0038c5d0 << 4);
  }
  LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1873, "triangle_find_first_used:not found!!") */
  return -1;
}

/******************************************************************************
 * Function : navigate_triangle_find_cache_get_0b7d64 (Original VA: 0xb7d64, Ghidra: FUN_000b7d64)
 * Prototype: int navigate_triangle_find_cache_get_0b7d64(void);
 * Address  : 0xb7d64 (Size: 141 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1970
 * Purpose  : String 'triangle_find_cache_get:overflow'
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_triangle_find_first_used_0b7b4c, LbErrorLog
 ******************************************************************************/
int navigate_triangle_find_cache_get_0b7d64(void)

{
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int arg_edx;
  
  val = arg_eax >> 0xe;
  if (val < 0) {
    val = 0;
  }
  if (3 < val) {
    val = 3;
  }
  val_2 = arg_edx >> 0xe;
  if (val_2 < 0) {
    val_2 = 0;
  }
  if (3 < val_2) {
    val_2 = 3;
  }
  val_3 = (&g_bss_0038c5d8)[val_2 * 4 + val];
  if ((int)(&g_bss_0038c621)[val_3 * 4] >> 0x18 == -1) {
    val_3 = navigate_triangle_find_first_used_0b7b4c();
    if ((val_3 < 0) || (g_bss_0038c5d0 < val_3)) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1970, "triangle_find_cache_get:overflow") */
      val_3 = extraout_ECX;
    }
    (&g_bss_0038c5d8)[val_2 * 4 + val] = val_3;
  }
  return val_3;
}

/******************************************************************************
 * Function : navigate_triangle_find_cache_get_0b7e14 (Original VA: 0xb7e14, Ghidra: FUN_000b7e14)
 * Prototype: int navigate_triangle_find_cache_get_0b7e14(void);
 * Address  : 0xb7e14 (Size: 691 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1970
 * Purpose  : String 'triangle_find_cache_get:overflow'
 * Callers  : 4 -> navigate_update_ariadne_navigation_0b80c8, navigate_update_ariadne_navigation_0b8368, navigate_insert_point_0b95f0, navigate_update_ariadne_navigation_0bba28
 * Callees  : 3 -> navigate_update_ariadne_navigation_0b70c4, navigate_triangle_find_first_used_0b7b4c, LbErrorLog
 ******************************************************************************/
int navigate_triangle_find_cache_get_0b7e14(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  uint uval;
  uint uval_2;
  int extraout_ECX;
  int arg_edx;
  int val_7;
  int val_8;
  int val_9;
  int val_10;
  int val_11;
  char ch;
  char ch_2;
  char ch_3;
  bool flag;
  bool flag_2;
  undefined4 uval_3;
  
  val_2 = arg_eax >> 0xe;
  val_3 = val_2;
  if (val_2 < 0) {
    val_3 = 0;
  }
  if (3 < val_3) {
    val_3 = 3;
  }
  val_4 = arg_edx >> 0xe;
  val_5 = val_4;
  if (val_4 < 0) {
    val_5 = 0;
  }
  if (3 < val_5) {
    val_5 = 3;
  }
  val_6 = (&g_bss_0038c5d8)[val_5 * 4 + val_3];
  if ((int)(&g_bss_0038c621)[val_6 * 4] >> 0x18 == -1) {
    val_6 = navigate_triangle_find_first_used_0b7b4c();
    if ((val_6 < 0) || (g_bss_0038c5d0 < val_6)) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1970, "triangle_find_cache_get:overflow") */
      val_6 = extraout_ECX;
    }
    (&g_bss_0038c5d8)[val_5 * 4 + val_3] = val_6;
  }
switchD_000b80bf_default:
  val_9 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_6 * 0x10) * 4) >> 0x10) *
           0x100 - arg_edx;
  val_3 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_6 * 0x10) * 2) >> 0x10) *
          0x100 - arg_eax;
  val_5 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_6 * 0x10) * 2) >> 0x10) *
          0x100 - arg_eax;
  val_10 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_6 * 0x10) * 4) >> 0x10) *
           0x100 - arg_edx;
  val_11 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + val_6 * 4) * 2) >> 0x10) *
           0x100 - arg_eax;
  val = (longlong)val_3 * (longlong)val_10;
  val_7 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)val_9 * (longlong)val_5;
  val_8 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_7 - val_8;
  flag_2 = SBORROW4(val_7,val_8) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  val_8 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + val_6 * 4) * 4) >> 0x10) *
           0x100 - arg_edx;
  val = (longlong)val_5 * (longlong)val_8;
  val_5 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)val_10 * (longlong)val_11;
  val_7 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch_2 = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_5 - val_7;
  flag_2 = SBORROW4(val_5,val_7) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch_2 = (flag_2 == flag) - (flag_2 != flag);
  }
  val = (longlong)val_11 * (longlong)val_9;
  val_5 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)val_8 * (longlong)val_3;
  val_3 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch_3 = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_5 - val_3;
  flag_2 = SBORROW4(val_5,val_3) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch_3 = (flag_2 == flag) - (flag_2 != flag);
  }
  switch(('\0' < ch_3) * '\x04' + ('\0' < ch_2) * '\x02' + ('\0' < ch)) {
  case '\0':
    goto switchD_000b80bf_caseD_0;
  case '\x01':
    val_6 = (int)(&g_ariadne_nav_state)[val_6 * 4] >> 0x10;
    goto switchD_000b80bf_default;
  case '\x02':
    val_6 = *(int *)((int)&g_ariadne_nav_state + val_6 * 0x10 + 2) >> 0x10;
    goto switchD_000b80bf_default;
  case '\x03':
    uval_3 = 1;
    break;
  case '\x04':
    val_6 = *(int *)(&g_bss_0038c620 + val_6 * 0x10) >> 0x10;
    goto switchD_000b80bf_default;
  case '\x05':
    uval_3 = 0;
    break;
  case '\x06':
  case '\a':
    uval_3 = 2;
    break;
  default:
    goto switchD_000b80bf_default;
  }
  navigate_update_ariadne_navigation_0b70c4(val_6,uval_3);
  goto switchD_000b80bf_default;
switchD_000b80bf_caseD_0:
  if (val_2 < 0) {
    val_2 = 0;
  }
  if (3 < val_2) {
    val_2 = 3;
  }
  if (val_4 < 0) {
    val_4 = 0;
  }
  if (3 < val_4) {
    val_4 = 3;
  }
  (&g_bss_0038c5d8)[val_4 * 4 + val_2] = val_6;
  return val_6;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b80c8 (Original VA: 0xb80c8, Ghidra: FUN_000b80c8)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0b80c8(void);
 * Address  : 0xb80c8 (Size: 249 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 5 -> navigate_update_ariadne_navigation_0b81c4, navigate_make_edge_0bab7c, navigate_thin_wall_0bb0ac, navigate_update_ariadne_navigation_0bba28, navigate_delete_point_0bf698
 * Callees  : 1 -> navigate_triangle_find_cache_get_0b7e14
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0b80c8(void)

{
  int arg_eax;
  int val;
  undefined4 *extraout_ECX;
  int arg_edx;
  int *arg_ebx;
  
  val = navigate_triangle_find_cache_get_0b7e14();
  if (-1 < val) {
    if ((arg_eax == *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val * 0x10) * 2) >>
                   0x10) &&
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val * 0x10) * 4) >> 0x10 ==
        arg_edx)) {
      *arg_ebx = val;
      *extraout_ECX = 0;
      return 1;
    }
    if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val * 0x10) * 2) >> 0x10 ==
         arg_eax) &&
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val * 0x10) * 4) >> 0x10 ==
        arg_edx)) {
      *arg_ebx = val;
      *extraout_ECX = 1;
      return 1;
    }
    if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + val * 4) * 2) >> 0x10 ==
         arg_eax) &&
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + val * 4) * 4) >> 0x10 == arg_edx
       )) {
      *arg_ebx = val;
      *extraout_ECX = 2;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b81c4 (Original VA: 0xb81c4, Ghidra: FUN_000b81c4)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0b81c4(int *param_1,int *param_2);
 * Address  : 0xb81c4 (Size: 418 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 5 -> navigate_update_ariadne_navigation_0bb50c, navigate_fn_0bc3c8, navigate_delete_point_0bef98, navigate_lock_edge_0bf3f0, navigate_lock_edge_0bf588
 * Callees  : 1 -> navigate_update_ariadne_navigation_0b80c8
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0b81c4(int *param_1,int *param_2)

{
  longlong val;
  int arg_eax;
  int val_2;
  int val_3;
  uint uval;
  uint uval_2;
  int arg_ecx;
  int arg_edx;
  int val_4;
  int val_5;
  int arg_ebx;
  int val_6;
  int val_7;
  int val_8;
  char ch;
  bool flag;
  bool flag_2;
  int local_28;
  int local_24;
  int local_14;
  
  val_2 = navigate_update_ariadne_navigation_0b80c8();
  if (val_2 != 0) {
    local_14 = local_24;
    val_7 = arg_ebx - arg_eax;
    val_6 = arg_ecx - arg_edx;
    val_2 = local_28;
    do {
      val_3 = *(int *)(&g_bss_003af898 +
                      (uint)*(ushort *)
                             (&g_bss_0038c618 + (&g_data_00192134)[local_14] * 2 + val_2 * 0x10) * 4) >>
              0x10;
      val_8 = (*(int *)(&g_bss_003af896 +
                        (uint)*(ushort *)
                               (&g_bss_0038c618 + (&g_data_00192134)[local_14] * 2 + val_2 * 0x10) * 2)
               >> 0x10) - arg_eax;
      val_4 = (int)((ulonglong)((longlong)val_8 * (longlong)val_6) >> 0x20);
      uval = (uint)((longlong)val_8 * (longlong)val_6);
      val = (longlong)(val_3 - arg_edx) * (longlong)val_7;
      val_5 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_4 - val_5;
      flag_2 = SBORROW4(val_4,val_5) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch == '\0') {
        if (val_8 < 0) {
          uval = 0xffffffff;
        }
        else {
          uval = (uint)(val_8 != 0);
        }
        if (val_7 < 0) {
          uval_2 = 0xffffffff;
        }
        else {
          uval_2 = (uint)(val_7 != 0);
        }
        if (uval == uval_2) {
          if (val_3 - arg_edx < 0) {
            uval = 0xffffffff;
          }
          else {
            uval = (uint)(val_3 != arg_edx);
          }
          if (val_6 < 0) {
            uval_2 = 0xffffffff;
          }
          else {
            uval_2 = (uint)(val_6 != 0);
          }
          if (uval == uval_2) {
            *param_1 = val_2;
            *param_2 = local_14;
            return 1;
          }
        }
      }
      val_3 = *(int *)((int)&g_ariadne_nav_state + local_14 * 2 + val_2 * 0x10) >> 0x10;
      if (val_3 == -1) {
        return 0;
      }
      if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == val_2) {
        val_2 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == val_2) {
        val_2 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == val_2) {
        val_2 = 2;
      }
      else {
        val_2 = -1;
      }
      local_14 = (&g_data_00192134)[val_2];
      val_2 = val_3;
    } while (val_3 != local_28);
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b8368 (Original VA: 0xb8368, Ghidra: FUN_000b8368)
 * Prototype: int navigate_update_ariadne_navigation_0b8368(void);
 * Address  : 0xb8368 (Size: 420 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 5 -> navigate_fn_0c1ecc, navigate_nav_log_0c206c, navigate_path_init8_0c241c, navigate_nav_creature_radius_set_0c2bc0, navigate_fn_0c2f90
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b70c4, navigate_triangle_find_cache_get_0b7e14
 ******************************************************************************/
int navigate_update_ariadne_navigation_0b8368(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  int val_3;
  uint uval;
  uint uval_2;
  int arg_edx;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  int val_8;
  char ch;
  bool flag;
  bool flag_2;
  int local_24;
  
  val_2 = navigate_triangle_find_cache_get_0b7e14();
  if (-1 < val_2) {
    local_24 = 0;
    val_7 = val_2 << 4;
    do {
      if (((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_7) * 2) >> 0x10) * 0x100
           == arg_eax) &&
         ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_7) * 4) >> 0x10) * 0x100
          == arg_edx)) {
        navigate_update_ariadne_navigation_0b70c4();
        return val_2;
      }
      local_24 = local_24 + 1;
      val_7 = val_7 + 2;
    } while (local_24 < 3);
    local_24 = 0;
    do {
      val_7 = *(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + local_24 * 2 + val_2 * 0x10) * 2) >> 0x10;
      val_6 = *(int *)(&g_bss_003af898 +
                      (uint)*(ushort *)(&g_bss_0038c618 + local_24 * 2 + val_2 * 0x10) * 4) >> 0x10;
      val_8 = (*(int *)(&g_bss_003af898 +
                        (uint)*(ushort *)
                               (&g_bss_0038c618 + (&g_data_00192134)[local_24] * 2 + val_2 * 0x10) * 4)
               >> 0x10) * 0x100 + val_6 * -0x100;
      val_3 = (*(int *)(&g_bss_003af896 +
                       (uint)*(ushort *)
                              (&g_bss_0038c618 + (&g_data_00192134)[local_24] * 2 + val_2 * 0x10) * 2) >>
              0x10) * 0x100 + val_7 * -0x100;
      val = (longlong)val_3 * (longlong)(arg_edx + val_6 * -0x100);
      val_4 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)val_8 * (longlong)(arg_eax + val_7 * -0x100);
      val_5 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_4 - val_5;
      flag_2 = SBORROW4(val_4,val_5) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch == '\0') {
        val = (longlong)val_3 * (longlong)(val_6 * -0x100 + 0x10100);
        val_3 = (int)((ulonglong)val >> 0x20);
        uval = (uint)val;
        val = (longlong)val_8 * (longlong)(val_7 * -0x100 + 0x10100);
        val_7 = (int)((ulonglong)val >> 0x20);
        uval_2 = (uint)val;
        ch = uval != uval_2;
        uval = (uint)(uval < uval_2);
        uval_2 = val_3 - val_7;
        flag_2 = SBORROW4(val_3,val_7) != SBORROW4(uval_2,uval);
        flag = (int)(uval_2 - uval) < 0;
        if (uval_2 != uval) {
          ch = (flag_2 == flag) - (flag_2 != flag);
        }
        if ('\0' < ch) {
          return *(int *)((int)&g_ariadne_nav_state + local_24 * 2 + val_2 * 0x10) >> 0x10;
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < 3);
  }
  return val_2;
}

/******************************************************************************
 * Function : navigate_triangle_redirect_found_0b850c (Original VA: 0xb850c, Ghidra: FUN_000b850c)
 * Prototype: void navigate_triangle_redirect_found_0b850c(void);
 * Address  : 0xb850c (Size: 287 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1873, 2200, 2210, 2217, 2246, 2284
 * Purpose  : String 'triangle_redirect:not found A'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_triangle_redirect_found_0b850c(void)

{
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int val_3;
  int val_4;
  
  val = g_data_00192148;
  val_4 = arg_eax * 0x10;
  if ((int)(&g_bss_0038c621)[arg_eax * 4] >> 0x18 != -1) {
    val = val_4 + 6;
    do {
      val_3 = *(int *)((int)&g_ariadne_nav_state + val_4) >> 0x10;
      if (val_3 != -1) {
        if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == arg_eax) {
          val_2 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == arg_eax) {
          val_2 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == arg_eax) {
          val_2 = 2;
        }
        else {
          val_2 = -1;
        }
        if (val_2 != -1) {
          *(short *)(val_3 * 0x10 + 0x38c61e + val_2 * 2) = (short)arg_edx;
        }
      }
      val_4 = val_4 + 2;
    } while (val_4 != val);
    return;
  }
  if (g_bss_0038c5d0 <= arg_eax) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2200, "triangle_redirect:not found A") */
    return;
  }
  if (g_data_00192148 == -1) {
    LbErrorLog(); /* LbErrorLog(NULL, line 2210, "triangle_redirect:not found B") */
    arg_eax = extraout_ECX;
  }
  if (val != arg_eax) {
    while( true ) {
      val_4 = val * 0x10;
      val = (int)(&g_ariadne_nav_state)[val * 4] >> 0x10;
      if (val == arg_eax) break;
      if (val == -1) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2217, "triangle_redirect:above ix_Triangles") */
        arg_eax = extraout_ECX_00;
      }
    }
    *(short *)((int)&g_ariadne_nav_state + val_4 + 2) = (short)arg_edx;
    return;
  }
  g_data_00192148 = arg_edx;
  return;
}

/******************************************************************************
 * Function : navigate_edge_rotateAC_0b8874 (Original VA: 0xb8874, Ghidra: FUN_000b8874)
 * Prototype: undefined4 navigate_edge_rotateAC_0b8874(void);
 * Address  : 0xb8874 (Size: 1519 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2329, 2388, 2394
 * Purpose  : Log prefix 'edge_rotateAC : lB not found'
 * Callers  : 4 -> navigate_l0_ld_ld_l1_0b9940, navigate_update_ariadne_navigation_0baa20, navigate_delaunay_seeded_stack_full_0bbc9c, navigate_fn_0bc1bc
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b5d38, LbErrorLog
 ******************************************************************************/
undefined4 navigate_edge_rotateAC_0b8874(void)

{
  int val;
  byte flag;
  byte flag_2;
  byte flag_3;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  longlong val_7;
  byte flag_4;
  byte flag_5;
  byte flag_6;
  byte flag_7;
  int arg_eax;
  uint uval;
  uint uval_2;
  undefined4 uval_3;
  int val_8;
  int val_9;
  int val_10;
  int val_11;
  undefined4 extraout_ECX;
  int arg_edx;
  int val_12;
  int val_13;
  int val_14;
  int val_15;
  int val_16;
  undefined2 uval_4;
  int val_17;
  char ch;
  bool flag_8;
  bool flag_9;
  
  val_11 = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10);
  val_17 = val_11 >> 0x10;
  if (val_17 == -1) {
    uval_3 = 0;
  }
  else {
    if ((int)(&g_ariadne_nav_state)[val_17 * 4] >> 0x10 == arg_eax) {
      val_8 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_17 * 0x10 + 2) >> 0x10 == arg_eax) {
      val_8 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_17 * 0x10) >> 0x10 == arg_eax) {
      val_8 = 2;
    }
    else {
      val_8 = -1;
    }
    if (val_8 == -1) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2329, "edge_rotateAC : lB not found") */
    }
    val_2 = (&g_data_00192134)[arg_edx];
    val_3 = (&g_data_00192134)[val_8];
    val_4 = (&g_data_00192138)[arg_edx];
    val_13 = (&g_data_00192138)[val_8];
    val_5 = *(int *)((int)&g_ariadne_nav_state + val_2 * 2 + arg_eax * 0x10);
    val_12 = val_5 >> 0x10;
    val_6 = *(int *)((int)&g_ariadne_nav_state + val_3 * 2 + val_17 * 0x10);
    val_9 = val_6 >> 0x10;
    flag = (&g_bss_0038c625)[arg_eax * 0x10];
    flag_6 = (byte)arg_edx;
    if ((((uint)flag & 1 << (flag_6 + 3 & 0x1f)) != 0) ||
       (flag_7 = (byte)val_8,
       ((uint)(byte)(&g_bss_0038c625)[val_17 * 0x10] & 1 << (flag_7 + 3 & 0x1f)) != 0)) {
      return 0;
    }
    flag_4 = (byte)val_2;
    flag_5 = (byte)val_3;
    flag_2 = (&g_bss_0038c625)[val_17 * 0x10];
    val_16 = arg_eax * 0x10;
    val_10 = val_17 * 0x10;
    (&g_bss_0038c625)[val_16] = (&g_bss_0038c625)[val_16] & ~('\x01' << (flag_4 + 3 & 0x1f));
    (&g_bss_0038c625)[val_10] = (&g_bss_0038c625)[val_10] & ~('\x01' << (flag_5 + 3 & 0x1f));
    (&g_bss_0038c625)[val_16] =
         ~('\x01' << (flag_6 + 3 & 0x1f)) & (&g_bss_0038c625)[val_16] |
         (((uint)flag_2 & 1 << (flag_5 + 3 & 0x1f)) != 0) << (flag_6 + 3 & 0x1f);
    (&g_bss_0038c625)[val_10] =
         (((uint)flag & 1 << (flag_4 + 3 & 0x1f)) != 0) << (flag_7 + 3 & 0x1f) |
         ~('\x01' << (flag_7 + 3 & 0x1f)) & (&g_bss_0038c625)[val_10];
    val = arg_edx * 2 + val_16;
    val_4 = val_4 * 2 + val_16;
    val_15 = val_10 + val_13 * 2;
    val_7 = (longlong)
             ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_15) * 2) >> 0x10) -
             (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 2) >> 0x10)) *
             (longlong)
             ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 4) >> 0x10) -
             (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 4) >> 0x10));
    val_13 = (int)((ulonglong)val_7 >> 0x20);
    uval = (uint)val_7;
    val_7 = (longlong)
             ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_15) * 4) >> 0x10) -
             (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 4) >> 0x10)) *
             (longlong)
             ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 2) >> 0x10) -
             (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 2) >> 0x10));
    val_14 = (int)((ulonglong)val_7 >> 0x20);
    uval_2 = (uint)val_7;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_13 - val_14;
    flag_9 = SBORROW4(val_13,val_14) != SBORROW4(uval_2,uval);
    flag_8 = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_9 == flag_8) - (flag_9 != flag_8);
    }
    if (ch < '\x01') {
      return 0;
    }
    val_8 = val_10 + val_8 * 2;
    val_7 = (longlong)
             ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_15) * 2) >> 0x10) -
             (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 2) >> 0x10)) *
             (longlong)
             ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_8) * 4) >> 0x10) -
             (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 4) >> 0x10));
    val_13 = (int)((ulonglong)val_7 >> 0x20);
    uval = (uint)val_7;
    val_7 = (longlong)
             ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_15) * 4) >> 0x10) -
             (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 4) >> 0x10)) *
             (longlong)
             ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_8) * 2) >> 0x10) -
             (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 2) >> 0x10));
    val_14 = (int)((ulonglong)val_7 >> 0x20);
    uval_2 = (uint)val_7;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_13 - val_14;
    flag_9 = SBORROW4(val_13,val_14) != SBORROW4(uval_2,uval);
    flag_8 = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_9 == flag_8) - (flag_9 != flag_8);
    }
    if (-1 < ch) {
      return 0;
    }
    val_16 = val_16 + val_2 * 2;
    *(undefined2 *)(&g_bss_0038c618 + val_16) = *(undefined2 *)(&g_bss_0038c618 + val_15);
    val_10 = val_3 * 2 + val_10;
    *(undefined2 *)(&g_bss_0038c618 + val_10) = *(undefined2 *)(&g_bss_0038c618 + val_4);
    *(short *)((int)&g_ariadne_nav_state + val + 2) = (short)((uint)val_6 >> 0x10);
    uval_4 = (undefined2)((uint)val_11 >> 0x10);
    *(undefined2 *)((int)&g_ariadne_nav_state + val_16 + 2) = uval_4;
    *(short *)((int)&g_ariadne_nav_state + val_8 + 2) = (short)((uint)val_5 >> 0x10);
    *(short *)((int)&g_ariadne_nav_state + val_10 + 2) = (short)arg_eax;
    if (val_12 != -1) {
      if ((int)(&g_ariadne_nav_state)[val_12 * 4] >> 0x10 == arg_eax) {
        val_11 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_12 * 0x10 + 2) >> 0x10 == arg_eax) {
        val_11 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_12 * 0x10) >> 0x10 == arg_eax) {
        val_11 = 2;
      }
      else {
        val_11 = -1;
      }
      if (val_11 == -1) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2388, "edge_rotateAC : A not found") */
      }
      *(undefined2 *)(val_12 * 0x10 + 0x38c61e + val_11 * 2) = uval_4;
    }
    if (val_9 != -1) {
      if ((int)(&g_ariadne_nav_state)[val_9 * 4] >> 0x10 == val_17) {
        val_11 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_9 * 0x10 + 2) >> 0x10 == val_17) {
        val_11 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_9 * 0x10) >> 0x10 == val_17) {
        val_11 = 2;
      }
      else {
        val_11 = -1;
      }
      if (val_11 == -1) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2394, "edge_rotateAC : B not found") */
      }
      *(short *)(val_9 * 0x10 + 0x38c61e + val_11 * 2) = (short)arg_eax;
    }
    flag = (&g_bss_0038c625)[arg_eax * 0x10];
    flag_2 = (&g_bss_0038c625)[arg_eax * 0x10];
    flag_3 = (&g_bss_0038c625)[val_17 * 0x10];
    val_11 = arg_eax * 0x10;
    (&g_bss_0038c625)[val_11] =
         (((uint)(byte)(&g_bss_0038c625)[val_17 * 0x10] & 1 << (flag_5 & 0x1f)) != 0) <<
         (flag_6 & 0x1f) | (&g_bss_0038c625)[val_11] & ~('\x01' << (flag_6 & 0x1f));
    (&g_bss_0038c625)[val_11] =
         ~('\x01' << (flag_4 & 0x1f)) & (&g_bss_0038c625)[val_11] |
         (((uint)flag & 1 << (flag_6 & 0x1f)) != 0) << (flag_4 & 0x1f);
    val_17 = val_17 * 0x10;
    (&g_bss_0038c625)[val_17] =
         (((uint)flag_2 & 1 << (flag_4 & 0x1f)) != 0) << (flag_7 & 0x1f) |
         ~('\x01' << (flag_7 & 0x1f)) & (&g_bss_0038c625)[val_17];
    (&g_bss_0038c625)[val_17] =
         (((uint)flag_3 & 1 << (flag_7 & 0x1f)) != 0) << (flag_5 & 0x1f) |
         (&g_bss_0038c625)[val_17] & ~('\x01' << (flag_5 & 0x1f));
    navigate_update_ariadne_navigation_0b5d38();
    navigate_update_ariadne_navigation_0b5d38();
    uval_3 = extraout_ECX;
  }
  return uval_3;
}

/******************************************************************************
 * Function : navigate_tri_new_0b8e64 (Original VA: 0xb8e64, Ghidra: FUN_000b8e64)
 * Prototype: void navigate_tri_new_0b8e64(void);
 * Address  : 0xb8e64 (Size: 1037 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 727, 762, 2467, 2474
 * Purpose  : Log prefix 'tri_new : out of memory'
 * Callers  : 1 -> navigate_insert_point_0b95f0
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b5d38, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_tri_new_0b8e64(void)

{
  ushort uval;
  int arg_eax;
  int val;
  int val_2;
  undefined2 uval_2;
  undefined2 uval_3;
  int extraout_ECX;
  int val_3;
  int extraout_ECX_00;
  int loop_i;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined2 arg_dx;
  undefined2 arg_bx;
  int val_4;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  
  flag = 0;
  if (g_data_00192148 == -1) {
    val = g_bss_0038c5d0 + 1;
    val_3 = g_bss_0038c5d0;
    g_bss_0038c5d0 = val;
    if (8999 < val) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      val_3 = extraout_ECX;
    }
  }
  else {
    val_3 = g_data_00192148;
    g_data_00192148 = (int)(&g_ariadne_nav_state)[g_data_00192148 * 4] >> 0x10;
  }
  val = g_data_00192148;
  g_bss_0038c5d4 = g_bss_0038c5d4 + 1;
  *(undefined1 *)((int)&g_bss_0038c621 + val_3 * 0x10 + 3) = 0;
  if (val == -1) {
    loop_i = g_bss_0038c5d0 + 1;
    val = g_bss_0038c5d0;
    g_bss_0038c5d0 = loop_i;
    if (8999 < loop_i) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      val = extraout_ECX_00;
    }
  }
  else {
    g_data_00192148 = (int)(&g_ariadne_nav_state)[val * 4] >> 0x10;
  }
  *(undefined1 *)((int)&g_bss_0038c621 + val * 0x10 + 3) = 0;
  g_bss_0038c5d4 = g_bss_0038c5d4 + 1;
  word_ptr = (undefined4 *)(&g_bss_0038c618 + arg_eax * 0x10);
  word_ptr_2 = (undefined4 *)(&g_bss_0038c618 + val_3 * 0x10);
  for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  word_ptr = (undefined4 *)(&g_bss_0038c618 + arg_eax * 0x10);
  word_ptr_2 = (undefined4 *)(&g_bss_0038c618 + val * 0x10);
  for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  if (g_data_0019214c == -1) {
    val_2 = g_bss_003b3ee8 + 1;
    loop_i = g_bss_003b3ee8;
    g_bss_003b3ee8 = val_2;
    if (0x1193 < val_2) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 762, "point_new:overflow") */
      loop_i = extraout_ECX_01;
    }
  }
  else {
    loop_i = g_data_0019214c;
    g_data_0019214c = *(int *)(&g_bss_003af896 + g_data_0019214c * 2) >> 0x10;
  }
  *(undefined2 *)(&g_bss_003af89a + loop_i * 4) = 0;
  val_4 = arg_eax * 0x10;
  *(undefined2 *)(&g_bss_003af898 + loop_i * 4) = arg_dx;
  val_2 = val_3 * 0x10;
  *(undefined2 *)(&g_bss_003af89a + loop_i * 4) = arg_bx;
  uval_2 = (undefined2)loop_i;
  *(undefined2 *)(&g_ariadne_nav_state + arg_eax * 4) = uval_2;
  loop_i = val * 0x10;
  *(undefined2 *)(&g_bss_0038c618 + val_2) = uval_2;
  *(undefined2 *)(&g_bss_0038c61a + loop_i) = uval_2;
  uval_2 = (undefined2)val_3;
  *(undefined2 *)(&g_bss_0038c620 + val_4) = uval_2;
  uval_3 = (undefined2)val;
  *(undefined2 *)((int)&g_bss_0038c621 + val_4 + 1) = uval_3;
  flag = (&g_bss_0038c625)[val_4];
  (&g_bss_0038c625)[val_4] = flag | 6;
  (&g_bss_0038c625)[val_4] = flag & 0xf | 6;
  *(short *)((int)&g_ariadne_nav_state + val_2 + 2) = (short)arg_eax;
  *(undefined2 *)((int)&g_bss_0038c621 + val_2 + 1) = uval_3;
  flag = (&g_bss_0038c625)[val_2];
  (&g_bss_0038c625)[val_2] = flag | 5;
  (&g_bss_0038c625)[val_2] = flag & 0x17 | 5;
  flag = (&g_bss_0038c625)[loop_i];
  *(short *)((int)&g_ariadne_nav_state + loop_i + 2) = (short)arg_eax;
  (&g_bss_0038c625)[loop_i] = flag | 3;
  *(undefined2 *)(&g_bss_0038c620 + loop_i) = uval_2;
  (&g_bss_0038c625)[loop_i] = flag & 0x27 | 3;
  g_bss_003b3eec = g_bss_003b3eec + 1;
  loop_i = *(int *)((int)&g_ariadne_nav_state + val_2 + 2) >> 0x10;
  if (loop_i != -1) {
    if ((int)(&g_ariadne_nav_state)[loop_i * 4] >> 0x10 == arg_eax) {
      val_2 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + loop_i * 0x10 + 2) >> 0x10 == arg_eax) {
      val_2 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + loop_i * 0x10) >> 0x10 == arg_eax) {
      val_2 = 2;
    }
    else {
      val_2 = -1;
    }
    if (val_2 == -1) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2467, "tri_split3 : A not found") */
      loop_i = extraout_ECX_02;
    }
    *(undefined2 *)(loop_i * 0x10 + 0x38c61e + val_2 * 2) = uval_2;
  }
  loop_i = *(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10;
  if (loop_i != -1) {
    if ((int)(&g_ariadne_nav_state)[loop_i * 4] >> 0x10 == arg_eax) {
      val_2 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + loop_i * 0x10 + 2) >> 0x10 == arg_eax) {
      val_2 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + loop_i * 0x10) >> 0x10 == arg_eax) {
      val_2 = 2;
    }
    else {
      val_2 = -1;
    }
    if (val_2 == -1) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2474, "tri_split3 : B not found") */
      loop_i = extraout_ECX_03;
    }
    *(undefined2 *)(loop_i * 0x10 + 0x38c61e + val_2 * 2) = uval_3;
  }
  if ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6 != 0) {
    loop_i = ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6) * 3;
    uval = (&g_bss_0038c626)[arg_eax * 8];
    *(short *)((int)&g_bss_003d1b5c + loop_i) = *(short *)((int)&g_bss_003d1b5c + loop_i) + -1;
    (&g_bss_003d1b5e)[loop_i] = 0;
    (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
    g_bss_003d1b5c = g_bss_003d1b5c + 1;
    (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
  }
  (&g_bss_0038c626)[val_3 * 8] = 0;
  (&g_bss_0038c626)[val * 8] = 0;
  navigate_update_ariadne_navigation_0b5d38();
  navigate_update_ariadne_navigation_0b5d38();
  navigate_update_ariadne_navigation_0b5d38();
  return;
}

/******************************************************************************
 * Function : navigate_tri_new_0b9274 (Original VA: 0xb9274, Ghidra: FUN_000b9274)
 * Prototype: int navigate_tri_new_0b9274(undefined2 param_1);
 * Address  : 0xb9274 (Size: 579 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 727, 2526
 * Purpose  : Log prefix 'tri_new : out of memory'
 * Callers  : 1 -> navigate_point_new_overflow_0b94b8
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b5d38, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int navigate_tri_new_0b9274(undefined2 param_1)

{
  ushort uval;
  byte flag;
  int arg_eax;
  int extraout_ECX;
  int val;
  int loop_i;
  int extraout_ECX_00;
  int arg_edx;
  int val_2;
  int val_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag_2;
  
  flag_2 = 0;
  if (g_data_00192148 == -1) {
    loop_i = g_bss_0038c5d0 + 1;
    val = g_bss_0038c5d0;
    g_bss_0038c5d0 = loop_i;
    if (8999 < loop_i) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      val = extraout_ECX;
    }
  }
  else {
    val = g_data_00192148;
    g_data_00192148 = (int)(&g_ariadne_nav_state)[g_data_00192148 * 4] >> 0x10;
  }
  val_2 = val * 0x10;
  val_3 = arg_eax * 0x10;
  g_bss_0038c5d4 = g_bss_0038c5d4 + 1;
  *(undefined1 *)((int)&g_bss_0038c621 + val_2 + 3) = 0;
  word_ptr = (undefined4 *)(&g_bss_0038c618 + val_3);
  word_ptr_2 = (undefined4 *)(&g_bss_0038c618 + val_2);
  for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_2 * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
  }
  loop_i = (&g_data_00192134)[arg_edx];
  flag_2 = *(byte *)(&g_data_00192134 + arg_edx);
  *(undefined2 *)(&g_bss_0038c618 + loop_i * 2 + val_3) = param_1;
  *(undefined2 *)(&g_bss_0038c618 + arg_edx * 2 + val_2) = param_1;
  *(short *)(val_3 + 0x38c61e + loop_i * 2) = (short)val;
  (&g_bss_0038c625)[val_3] = (&g_bss_0038c625)[val_3] | '\x01' << (flag_2 & 0x1f);
  (&g_bss_0038c625)[val_3] =
       (&g_bss_0038c625)[val_3] & ~('\x01' << (*(char *)(&g_data_00192134 + arg_edx) + 3U & 0x1f));
  *(short *)(val_2 + 0x38c61e + (&g_data_00192138)[arg_edx] * 2) = (short)arg_eax;
  flag_2 = *(byte *)(&g_data_00192138 + arg_edx);
  flag = (&g_bss_0038c625)[val_2] | '\x01' << (flag_2 & 0x1f);
  (&g_bss_0038c625)[val_2] = flag;
  (&g_bss_0038c625)[val_2] = flag & ~('\x01' << (flag_2 + 3 & 0x1f));
  loop_i = *(int *)((int)&g_ariadne_nav_state + loop_i * 2 + val_2) >> 0x10;
  if (loop_i != -1) {
    if ((int)(&g_ariadne_nav_state)[loop_i * 4] >> 0x10 == arg_eax) {
      val_2 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + loop_i * 0x10 + 2) >> 0x10 == arg_eax) {
      val_2 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + loop_i * 0x10) >> 0x10 == arg_eax) {
      val_2 = 2;
    }
    else {
      val_2 = -1;
    }
    if (val_2 == -1) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2526, "tri_split2 : A not found") */
      loop_i = extraout_ECX_00;
    }
    *(short *)(loop_i * 0x10 + 0x38c61e + val_2 * 2) = (short)val;
  }
  if ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6 != 0) {
    loop_i = ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6) * 3;
    uval = (&g_bss_0038c626)[arg_eax * 8];
    *(short *)((int)&g_bss_003d1b5c + loop_i) = *(short *)((int)&g_bss_003d1b5c + loop_i) + -1;
    (&g_bss_003d1b5e)[loop_i] = 0;
    (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
    (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
    g_bss_003d1b5c = g_bss_003d1b5c + 1;
  }
  (&g_bss_0038c626)[val * 8] = 0;
  navigate_update_ariadne_navigation_0b5d38();
  navigate_update_ariadne_navigation_0b5d38();
  return val;
}

/******************************************************************************
 * Function : navigate_point_new_overflow_0b94b8 (Original VA: 0xb94b8, Ghidra: FUN_000b94b8)
 * Prototype: void navigate_point_new_overflow_0b94b8(void);
 * Address  : 0xb94b8 (Size: 312 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 762
 * Purpose  : String 'point_new:overflow'
 * Callers  : 2 -> navigate_insert_point_0b95f0, navigate_fn_0bafbc
 * Callees  : 2 -> navigate_tri_new_0b9274, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_point_new_overflow_0b94b8(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  undefined4 uval_2;
  undefined2 arg_cx;
  int arg_edx;
  undefined2 arg_bx;
  int val_2;
  int val_3;
  int local_20;
  
  val_2 = g_bss_003b3ee8;
  if (g_data_0019214c == -1) {
    g_bss_003b3ee8 = g_bss_003b3ee8 + 1;
    if (0x1193 < g_bss_003b3ee8) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 762, "point_new:overflow") */
    }
  }
  else {
    val_2 = g_data_0019214c;
    g_data_0019214c = *(int *)(&g_bss_003af896 + g_data_0019214c * 2) >> 0x10;
  }
  *(undefined2 *)(&g_bss_003af89a + val_2 * 4) = 0;
  *(undefined2 *)(&g_bss_003af89a + val_2 * 4) = arg_cx;
  *(undefined2 *)(&g_bss_003af898 + val_2 * 4) = arg_bx;
  val = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10) >> 0x10;
  g_bss_003b3eec = g_bss_003b3eec + 1;
  if ((int)(&g_ariadne_nav_state)[val * 4] >> 0x10 == arg_eax) {
    val_3 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val * 0x10 + 2) >> 0x10 == arg_eax) {
    val_3 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10 == arg_eax) {
    val_3 = 2;
  }
  else {
    val_3 = -1;
  }
  uval_2 = navigate_tri_new_0b9274(val_2);
  val_2 = local_20;
  uval = navigate_tri_new_0b9274(local_20,uval_2);
  *(undefined2 *)(arg_eax * 0x10 + 0x38c61e + val * 2) = uval;
  *(short *)(local_20 * 0x10 + 0x38c61e + val_3 * 2) = (short)val_2;
  return;
}

/******************************************************************************
 * Function : navigate_insert_point_0b95f0 (Original VA: 0xb95f0, Ghidra: FUN_000b95f0)
 * Prototype: void navigate_insert_point_0b95f0(void);
 * Address  : 0xb95f0 (Size: 678 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2584
 * Purpose  : Log prefix 'insert_point : triangle not found'
 * Callers  : 4 -> navigate_update_ariadne_navigation_0bbec8, navigate_fn_0bca9c, navigate_fn_0bed7c, navigate_fn_0bee04
 * Callees  : 4 -> navigate_triangle_find_cache_get_0b7e14, navigate_tri_new_0b8e64, navigate_point_new_overflow_0b94b8, LbErrorLog
 ******************************************************************************/
void navigate_insert_point_0b95f0(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  int val_3;
  uint uval;
  uint uval_2;
  int arg_edx;
  int val_4;
  int val_5;
  char ch;
  bool flag;
  bool flag_2;
  
  val_2 = navigate_triangle_find_cache_get_0b7e14();
  if (val_2 == -1) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2584, "insert_point : triangle not found") */
  }
  if ((((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_2 * 0x10) * 2) >> 0x10 !=
         arg_eax) ||
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_2 * 0x10) * 4) >> 0x10 !=
        arg_edx)) &&
      ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_2 * 0x10) * 2) >> 0x10 !=
        arg_eax ||
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_2 * 0x10) * 4) >> 0x10 !=
        arg_edx)))) &&
     ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 2) >> 0x10 != arg_eax
      || (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 4) >> 0x10 !=
          arg_edx)))) {
    val_3 = val_2 * 0x10;
    val = (longlong)
            ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 2) >> 0x10) -
            (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 2) >> 0x10)) *
            (longlong)
            (arg_edx - (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 4) >>
                      0x10));
    val_4 = (int)((ulonglong)val >> 0x20);
    uval = (uint)val;
    val = (longlong)
            ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 4) >> 0x10) -
            (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 4) >> 0x10)) *
            (longlong)
            (arg_eax - (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 2) >>
                      0x10));
    val_5 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_4 - val_5;
    flag_2 = SBORROW4(val_4,val_5) != SBORROW4(uval_2,uval);
    flag = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if (ch == '\0') {
      navigate_point_new_overflow_0b94b8();
    }
    else {
      val = (longlong)
              ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 2) >> 0x10)
              - (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 2) >> 0x10)) *
              (longlong)
              (arg_edx - (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 4) >>
                        0x10));
      val_4 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)
              ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 4) >> 0x10)
              - (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 4) >> 0x10)) *
              (longlong)
              (arg_eax - (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 2) >>
                        0x10));
      val_5 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_4 - val_5;
      flag_2 = SBORROW4(val_4,val_5) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch == '\0') {
        navigate_point_new_overflow_0b94b8();
        return;
      }
      val = (longlong)
              ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 2) >> 0x10) -
              (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 2) >> 0x10))
              * (longlong)
                (arg_edx - (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 4
                                   ) >> 0x10));
      val_4 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)
              ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 4) >> 0x10) -
              (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 4) >> 0x10))
              * (longlong)
                (arg_eax - (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + val_2 * 4) * 2
                                   ) >> 0x10));
      val_2 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_4 - val_2;
      flag_2 = SBORROW4(val_4,val_2) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch == '\0') {
        navigate_point_new_overflow_0b94b8();
        return;
      }
      navigate_tri_new_0b8e64();
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_l0_ld_ld_l1_0b9940 (Original VA: 0xb9940, Ghidra: FUN_000b9940)
 * Prototype: int navigate_l0_ld_ld_l1_0b9940(void);
 * Address  : 0xb9940 (Size: 576 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2681, 2682
 * Purpose  : String 'l0:%02ld n:%02ld l1:%02ld'
 * Callers  : 2 -> navigate_delete_point_0bef98, navigate_delete_point_0bf698
 * Callees  : 3 -> navigate_edge_rotateAC_0b8874, LbErrorLog, dk_sprintf
 ******************************************************************************/
int navigate_l0_ld_ld_l1_0b9940(void)

{
  int *arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *arg_edx;
  int val_3;
  int val_4;
  int val_5;
  undefined1 local_8c [100];
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  
  local_1c = arg_eax;
  local_18 = arg_edx;
  do {
    local_20 = 0;
    val_4 = *local_18;
    val_5 = *local_1c;
    do {
      val = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + val_5 * 0x10) >> 0x10;
      if (val == -1) {
        local_20 = -1;
        break;
      }
      if ((int)(&g_ariadne_nav_state)[val * 4] >> 0x10 == val_5) {
        val_4 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val * 0x10 + 2) >> 0x10 == val_5) {
        val_4 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10 == val_5) {
        val_4 = 2;
      }
      else {
        val_4 = -1;
      }
      local_20 = local_20 + 1;
      val_4 = (&g_data_00192134)[val_4];
      val_5 = val;
    } while (val != *local_1c);
    if (local_20 == 3) {
      return 3;
    }
    val = 0;
    local_28 = local_1c;
    val_4 = *local_1c;
    local_24 = local_18;
    val_5 = *local_18;
    val_3 = val_4;
    do {
      if (*(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_3 * 0x10) >> 0x10 == -1) {
        val = -1;
        goto LAB_000b9a7c;
      }
      val_2 = navigate_edge_rotateAC_0b8874();
      if (val_2 == 0) {
        if ((int)(&g_ariadne_nav_state)[extraout_ECX * 4] >> 0x10 == val_3) {
          val_5 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + extraout_ECX * 0x10 + 2) >> 0x10 == val_3) {
          val_5 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + extraout_ECX * 0x10) >> 0x10 == val_3) {
          val_5 = 2;
        }
        else {
          val_5 = -1;
        }
        val = val + 1;
        val_5 = (&g_data_00192134)[val_5];
        val_3 = extraout_ECX;
      }
    } while (extraout_ECX != val_4);
    *local_28 = val_3;
    *local_24 = val_5;
LAB_000b9a7c:
    if (val == 3) {
      return 3;
    }
    if (val == -1) {
      return -1;
    }
    val_5 = 0;
    val_4 = *local_18;
    val_3 = *local_1c;
    do {
      val_2 = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + val_3 * 0x10) >> 0x10;
      if (val_2 == -1) {
        val_5 = -1;
        break;
      }
      if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == val_3) {
        val_4 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val_3) {
        val_4 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == val_3) {
        val_4 = 2;
      }
      else {
        val_4 = -1;
      }
      val_5 = val_5 + 1;
      val_4 = (&g_data_00192134)[val_4];
      val_3 = val_2;
    } while (val_2 != *local_1c);
    if (val_5 == val) {
      if (val == 3) {
        return 3;
      }
      if (val == 4) {
        return 4;
      }
    }
    dk_sprintf(local_8c,s_l0__02ld_n__02ld_l1__02ld_0016b402,local_20,val,val_5);
    val_4 = extraout_ECX_00;
    if (extraout_ECX_00 != val) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2681, g_log_buf) */
      val_4 = extraout_ECX_01;
    }
    if (local_20 <= val_4) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2682, g_log_buf) */
    }
    if (val < 5) {
      return val;
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b9b80 (Original VA: 0xb9b80, Ghidra: FUN_000b9b80)
 * Prototype: void navigate_update_ariadne_navigation_0b9b80(void);
 * Address  : 0xb9b80 (Size: 172 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_update_ariadne_navigation_0b9b80(void)

{
  undefined2 uval;
  int val;
  int arg_eax;
  int val_2;
  int arg_ecx;
  int arg_edx;
  int val_3;
  int arg_ebx;
  int val_4;
  
  val = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[arg_ecx] * 2 + arg_ebx * 0x10);
  val_3 = val >> 0x10;
  if (arg_ebx == (int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10) {
    val_2 = 0;
  }
  else if (arg_ebx == *(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10) {
    val_2 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == arg_ebx) {
    val_2 = 2;
  }
  else {
    val_2 = -1;
  }
  val_4 = arg_edx * 2 + arg_eax * 0x10;
  uval = *(undefined2 *)(&g_bss_0038c618 + arg_ebx * 0x10 + (&g_data_00192134)[arg_ecx] * 2);
  *(short *)((int)&g_ariadne_nav_state + val_4 + 2) = (short)((uint)val >> 0x10);
  *(undefined2 *)(&g_bss_0038c618 + val_4) = uval;
  *(short *)(val_3 * 0x10 + 0x38c61e + val_2 * 2) = (short)arg_eax;
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0b9c2c (Original VA: 0xb9c2c, Ghidra: FUN_000b9c2c)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0b9c2c(void);
 * Address  : 0xb9c2c (Size: 2463 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 2 -> navigate_delete_point_0bef98, navigate_delete_point_0bf698
 * Callees  : 1 -> navigate_update_ariadne_navigation_0b5d38
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 navigate_update_ariadne_navigation_0b9c2c(void)

{
  ushort uval;
  longlong val;
  int arg_eax;
  uint uval_2;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  uint uval_3;
  uint uval_4;
  undefined2 uval_5;
  undefined2 uval_6;
  int arg_edx;
  int val_7;
  int val_8;
  int val_9;
  int val_10;
  int val_11;
  int val_12;
  int val_13;
  int val_14;
  char ch;
  bool flag;
  bool flag_2;
  
  val_13 = arg_eax * 0x10 + arg_edx * 2;
  uval_2 = (uint)*(ushort *)(&g_bss_0038c618 + val_13);
  val_13 = *(int *)((int)&g_ariadne_nav_state + val_13);
  val_14 = val_13 >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_14 * 4] >> 0x10 == arg_eax) {
    val_2 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_14 * 0x10 + 2) >> 0x10 == arg_eax) {
    val_2 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_14 * 0x10) >> 0x10 == arg_eax) {
    val_2 = 2;
  }
  else {
    val_2 = -1;
  }
  val_2 = (&g_data_00192134)[val_2];
  val_11 = *(int *)((int)&g_ariadne_nav_state + val_2 * 2 + val_14 * 0x10);
  val_3 = val_11 >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == val_14) {
    val_4 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == val_14) {
    val_4 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == val_14) {
    val_4 = 2;
  }
  else {
    val_4 = -1;
  }
  val_4 = (&g_data_00192134)[val_4];
  val_10 = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + val_3 * 0x10);
  val_5 = val_10 >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_5 * 4] >> 0x10 == val_3) {
    val_6 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_5 * 0x10 + 2) >> 0x10 == val_3) {
    val_6 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_5 * 0x10) >> 0x10 == val_3) {
    val_6 = 2;
  }
  else {
    val_6 = -1;
  }
  val_6 = (&g_data_00192134)[val_6];
  if (*(int *)((int)&g_ariadne_nav_state + val_6 * 2 + val_5 * 0x10) >> 0x10 != arg_eax) {
    return 0;
  }
  val_7 = arg_eax * 0x10;
  val_12 = val_3 * 0x10;
  val = (longlong)
          ((*(int *)(&g_bss_003af896 +
                    (uint)*(ushort *)(&g_bss_0038c618 + val_12 + (&g_data_00192138)[val_4] * 2) * 2) >>
           0x10) - (*(int *)(&g_bss_003af896 +
                            (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12) *
                            2) >> 0x10)) *
          (longlong)
          ((*(int *)(&g_bss_003af898 +
                    (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_7) * 4) >>
           0x10) - (*(int *)(&g_bss_003af898 +
                            (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12) *
                            4) >> 0x10));
  val_8 = (int)((ulonglong)val >> 0x20);
  uval_3 = (uint)val;
  val = (longlong)
          ((*(int *)(&g_bss_003af898 +
                    (uint)*(ushort *)(&g_bss_0038c618 + val_12 + (&g_data_00192138)[val_4] * 2) * 4) >>
           0x10) - (*(int *)(&g_bss_003af898 +
                            (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12) *
                            4) >> 0x10)) *
          (longlong)
          ((*(int *)(&g_bss_003af896 +
                    (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_7) * 2) >>
           0x10) - (*(int *)(&g_bss_003af896 +
                            (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12) *
                            2) >> 0x10));
  val_9 = (int)((ulonglong)val >> 0x20);
  uval_4 = (uint)val;
  ch = uval_3 != uval_4;
  uval_3 = (uint)(uval_3 < uval_4);
  uval_4 = val_8 - val_9;
  flag_2 = SBORROW4(val_8,val_9) != SBORROW4(uval_4,uval_3);
  flag = (int)(uval_4 - uval_3) < 0;
  if (uval_4 != uval_3) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  if (ch < '\0') {
    val = (longlong)
            ((*(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + val_7 + (&g_data_00192138)[arg_edx] * 2) * 2)
             >> 0x10) -
            (*(int *)(&g_bss_003af896 +
                     (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12) * 2) >>
            0x10)) * (longlong)
                     ((*(int *)(&g_bss_003af898 +
                               (uint)*(ushort *)
                                      (&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_7) * 4) >>
                      0x10) - (*(int *)(&g_bss_003af898 +
                                       (uint)*(ushort *)
                                              (&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12)
                                       * 4) >> 0x10));
    val_8 = (int)((ulonglong)val >> 0x20);
    uval_3 = (uint)val;
    val = (longlong)
            ((*(int *)(&g_bss_003af898 +
                      (uint)*(ushort *)(&g_bss_0038c618 + val_7 + (&g_data_00192138)[arg_edx] * 2) * 4)
             >> 0x10) -
            (*(int *)(&g_bss_003af898 +
                     (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12) * 4) >>
            0x10)) * (longlong)
                     ((*(int *)(&g_bss_003af896 +
                               (uint)*(ushort *)
                                      (&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_7) * 2) >>
                      0x10) - (*(int *)(&g_bss_003af896 +
                                       (uint)*(ushort *)
                                              (&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_12)
                                       * 2) >> 0x10));
    val_7 = (int)((ulonglong)val >> 0x20);
    uval_4 = (uint)val;
    ch = uval_3 != uval_4;
    uval_3 = (uint)(uval_3 < uval_4);
    uval_4 = val_8 - val_7;
    flag_2 = SBORROW4(val_8,val_7) != SBORROW4(uval_4,uval_3);
    flag = (int)(uval_4 - uval_3) < 0;
    if (uval_4 != uval_3) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if ('\0' < ch) {
      val_11 = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[val_4] * 2 + val_12);
      val_7 = val_11 >> 0x10;
      if ((int)(&g_ariadne_nav_state)[val_7 * 4] >> 0x10 == val_3) {
        val_8 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_7 * 0x10 + 2) >> 0x10 == val_3) {
        val_8 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_7 * 0x10) >> 0x10 == val_3) {
        val_8 = 2;
      }
      else {
        val_8 = -1;
      }
      val_9 = val_2 * 2 + val_14 * 0x10;
      uval_5 = *(undefined2 *)(&g_bss_0038c618 + (&g_data_00192134)[val_4] * 2 + val_3 * 0x10);
      *(short *)((int)&g_ariadne_nav_state + val_9 + 2) = (short)((uint)val_11 >> 0x10);
      *(undefined2 *)(&g_bss_0038c618 + val_9) = uval_5;
      uval_5 = (undefined2)((uint)val_13 >> 0x10);
      *(undefined2 *)((int)&g_ariadne_nav_state + val_8 * 2 + val_7 * 0x10 + 2) = uval_5;
      val_13 = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10);
      val_11 = val_13 >> 0x10;
      if ((int)(&g_ariadne_nav_state)[val_11 * 4] >> 0x10 == arg_eax) {
        val_4 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_11 * 0x10 + 2) >> 0x10 == arg_eax) {
        val_4 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_11 * 0x10) >> 0x10 == arg_eax) {
        val_4 = 2;
      }
      else {
        val_4 = -1;
      }
      val_7 = val_6 * 2 + val_5 * 0x10;
      uval_6 = *(undefined2 *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10);
      *(short *)((int)&g_ariadne_nav_state + val_7 + 2) = (short)((uint)val_13 >> 0x10);
      *(undefined2 *)(&g_bss_0038c618 + val_7) = uval_6;
      uval_6 = (undefined2)((uint)val_10 >> 0x10);
      *(undefined2 *)((int)&g_ariadne_nav_state + val_4 * 2 + val_11 * 0x10 + 2) = uval_6;
      *(undefined2 *)((int)&g_ariadne_nav_state + (&g_data_00192138)[val_2] * 2 + val_14 * 0x10 + 2) = uval_6;
      *(undefined2 *)(val_5 * 0x10 + 0x38c61e + (&g_data_00192138)[val_6] * 2) = uval_5;
      if ((int)(uint)(ushort)(&g_bss_0038c626)[val_3 * 8] >> 6 != 0) {
        val_13 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_3 * 8] >> 6) * 3;
        (&g_bss_003d1b5e)[val_13] = 0;
        uval = (&g_bss_0038c626)[val_3 * 8];
        *(short *)((int)&g_bss_003d1b5c + val_13) = *(short *)((int)&g_bss_003d1b5c + val_13) + -1;
        (&g_bss_0038c626)[val_3 * 8] = uval & 0x3f;
        g_bss_003d1b5c = g_bss_003d1b5c + 1;
        (&g_bss_0038c626)[val_3 * 8] = uval & 0x3f;
      }
      if ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6 != 0) {
        val_13 = ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6) * 3;
        (&g_bss_003d1b5e)[val_13] = 0;
        uval = (&g_bss_0038c626)[arg_eax * 8];
        *(short *)((int)&g_bss_003d1b5c + val_13) = *(short *)((int)&g_bss_003d1b5c + val_13) + -1;
        (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
        g_bss_003d1b5c = g_bss_003d1b5c + 1;
        (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
      }
      *(undefined2 *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) = g_data_00192148;
      g_data_00192148 = val_3;
      *(undefined1 *)((int)&g_bss_0038c621 + val_3 * 0x10 + 3) = 0xff;
      val_13 = arg_eax;
      *(undefined2 *)((int)&g_ariadne_nav_state + arg_eax * 0x10 + 2) = g_data_00192148;
      g_data_00192148 = val_13;
      g_bss_0038c5d4 = g_bss_0038c5d4 + -2;
      *(undefined1 *)((int)&g_bss_0038c621 + arg_eax * 0x10 + 3) = 0xff;
      navigate_update_ariadne_navigation_0b5d38();
      goto LAB_000ba585;
    }
  }
  val_13 = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[val_2] * 2 + val_14 * 0x10);
  val_10 = val_13 >> 0x10;
  if (val_14 == (int)(&g_ariadne_nav_state)[val_10 * 4] >> 0x10) {
    val_7 = 0;
  }
  else if (val_14 == *(int *)((int)&g_ariadne_nav_state + val_10 * 0x10 + 2) >> 0x10) {
    val_7 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_10 * 0x10) >> 0x10 == val_14) {
    val_7 = 2;
  }
  else {
    val_7 = -1;
  }
  val_8 = arg_eax * 0x10 + arg_edx * 2;
  uval_5 = *(undefined2 *)(&g_bss_0038c618 + (&g_data_00192134)[val_2] * 2 + val_14 * 0x10);
  *(short *)((int)&g_ariadne_nav_state + val_8 + 2) = (short)((uint)val_13 >> 0x10);
  *(undefined2 *)(&g_bss_0038c618 + val_8) = uval_5;
  *(short *)((int)&g_ariadne_nav_state + val_7 * 2 + val_10 * 0x10 + 2) = (short)arg_eax;
  val_13 = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[val_6] * 2 + val_5 * 0x10);
  val_2 = val_13 >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == val_5) {
    val_10 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val_5) {
    val_10 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == val_5) {
    val_10 = 2;
  }
  else {
    val_10 = -1;
  }
  val_7 = val_3 * 0x10 + val_4 * 2;
  uval_5 = *(undefined2 *)(&g_bss_0038c618 + (&g_data_00192134)[val_6] * 2 + val_5 * 0x10);
  *(short *)((int)&g_ariadne_nav_state + val_7 + 2) = (short)((uint)val_13 >> 0x10);
  *(undefined2 *)(&g_bss_0038c618 + val_7) = uval_5;
  uval_5 = (undefined2)((uint)val_11 >> 0x10);
  *(undefined2 *)((int)&g_ariadne_nav_state + val_10 * 2 + val_2 * 0x10 + 2) = uval_5;
  *(undefined2 *)((int)&g_ariadne_nav_state + (&g_data_00192138)[arg_edx] * 2 + arg_eax * 0x10 + 2) = uval_5;
  *(short *)(val_3 * 0x10 + 0x38c61e + (&g_data_00192138)[val_4] * 2) = (short)arg_eax;
  if ((int)(uint)(ushort)(&g_bss_0038c626)[val_14 * 8] >> 6 != 0) {
    val_13 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_14 * 8] >> 6) * 3;
    uval = (&g_bss_0038c626)[val_14 * 8];
    *(short *)((int)&g_bss_003d1b5c + val_13) = *(short *)((int)&g_bss_003d1b5c + val_13) + -1;
    (&g_bss_0038c626)[val_14 * 8] = uval & 0x3f;
    (&g_bss_003d1b5e)[val_13] = 0;
    g_bss_003d1b5c = g_bss_003d1b5c + 1;
    (&g_bss_0038c626)[val_14 * 8] = uval & 0x3f;
  }
  if ((int)(uint)(ushort)(&g_bss_0038c626)[val_5 * 8] >> 6 != 0) {
    val_13 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_5 * 8] >> 6) * 3;
    (&g_bss_003d1b5e)[val_13] = 0;
    uval = (&g_bss_0038c626)[val_5 * 8];
    *(short *)((int)&g_bss_003d1b5c + val_13) = *(short *)((int)&g_bss_003d1b5c + val_13) + -1;
    (&g_bss_0038c626)[val_5 * 8] = uval & 0x3f;
    g_bss_003d1b5c = g_bss_003d1b5c + 1;
    (&g_bss_0038c626)[val_5 * 8] = (&g_bss_0038c626)[val_5 * 8];
  }
  val_13 = val_14;
  *(undefined2 *)((int)&g_ariadne_nav_state + val_14 * 0x10 + 2) = g_data_00192148;
  g_data_00192148 = val_13;
  *(undefined1 *)((int)&g_bss_0038c621 + val_14 * 0x10 + 3) = 0xff;
  g_bss_0038c5d4 = g_bss_0038c5d4 + -2;
  *(undefined2 *)((int)&g_ariadne_nav_state + val_5 * 0x10 + 2) = g_data_00192148;
  *(undefined1 *)((int)&g_bss_0038c621 + val_5 * 0x10 + 3) = 0xff;
  g_data_00192148 = val_5;
  navigate_update_ariadne_navigation_0b5d38();
LAB_000ba585:
  navigate_update_ariadne_navigation_0b5d38();
  *(undefined2 *)(&g_bss_003af898 + uval_2 * 4) = g_data_0019214c;
  g_data_0019214c = uval_2;
  *(undefined2 *)(&g_bss_003af89a + uval_2 * 4) = 0x8000;
  g_bss_003b3eec = g_bss_003b3eec + -1;
  return 1;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0ba5cc (Original VA: 0xba5cc, Ghidra: FUN_000ba5cc)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0ba5cc(void);
 * Address  : 0xba5cc (Size: 973 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2854, 2871
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 2 -> navigate_delete_point_0bef98, navigate_delete_point_0bf698
 * Callees  : 1 -> navigate_update_ariadne_navigation_0b5d38
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 navigate_update_ariadne_navigation_0ba5cc(void)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  undefined4 uval;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  int arg_edx;
  uint uval_2;
  int val_8;
  int val_9;
  int val_10;
  int local_18;
  
  val_3 = arg_edx * 2 + arg_eax * 0x10;
  uval_2 = (uint)*(ushort *)(&g_bss_0038c618 + val_3);
  val_3 = *(int *)((int)&g_ariadne_nav_state + val_3) >> 0x10;
  if (val_3 == -1) {
    uval = 0;
  }
  else {
    if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == arg_eax) {
      val_8 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == arg_eax) {
      val_8 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == arg_eax) {
      val_8 = 2;
    }
    else {
      val_8 = -1;
    }
    val_8 = (&g_data_00192134)[val_8];
    val_9 = *(int *)((int)&g_ariadne_nav_state + val_8 * 2 + val_3 * 0x10) >> 0x10;
    if (val_9 == -1) {
      return 0;
    }
    if (val_3 == (int)(&g_ariadne_nav_state)[val_9 * 4] >> 0x10) {
      val_4 = 0;
    }
    else if (val_3 == *(int *)((int)&g_ariadne_nav_state + val_9 * 0x10 + 2) >> 0x10) {
      val_4 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_9 * 0x10) >> 0x10 == val_3) {
      val_4 = 2;
    }
    else {
      val_4 = -1;
    }
    if (*(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[val_4] * 2 + val_9 * 0x10) >> 0x10 != arg_eax)
    {
      return 0;
    }
    val = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[val_8] * 2 + val_3 * 0x10);
    val_5 = val >> 0x10;
    val_4 = *(int *)((int)&g_ariadne_nav_state +
                    (&g_data_00192134)[(&g_data_00192134)[val_4]] * 2 + val_9 * 0x10);
    val_6 = val_4 >> 0x10;
    if (val_3 == (int)(&g_ariadne_nav_state)[val_5 * 4] >> 0x10) {
      val_7 = 0;
    }
    else if (val_3 == *(int *)((int)&g_ariadne_nav_state + val_5 * 0x10 + 2) >> 0x10) {
      val_7 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_5 * 0x10) >> 0x10 == val_3) {
      val_7 = 2;
    }
    else {
      val_7 = -1;
    }
    if (val_9 == (int)(&g_ariadne_nav_state)[val_6 * 4] >> 0x10) {
      local_18 = 0;
    }
    else if (val_9 == *(int *)((int)&g_ariadne_nav_state + val_6 * 0x10 + 2) >> 0x10) {
      local_18 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_6 * 0x10) >> 0x10 == val_9) {
      local_18 = 2;
    }
    else {
      local_18 = -1;
    }
    val_10 = arg_eax * 0x10 + arg_edx * 2;
    val_2 = (&g_data_00192138)[arg_edx];
    *(undefined2 *)(&g_bss_0038c618 + val_10) =
         *(undefined2 *)(&g_bss_0038c618 + val_3 * 0x10 + (&g_data_00192134)[val_8] * 2);
    *(short *)((int)&g_ariadne_nav_state + val_10 + 2) = (short)((uint)val >> 0x10);
    *(short *)((int)&g_ariadne_nav_state + val_2 * 2 + arg_eax * 0x10 + 2) = (short)((uint)val_4 >> 0x10);
    *(short *)(val_5 * 0x10 + 0x38c61e + val_7 * 2) = (short)arg_eax;
    *(short *)(val_6 * 0x10 + 0x38c61e + local_18 * 2) = (short)arg_eax;
    if ((int)(uint)(ushort)(&g_bss_0038c626)[val_3 * 8] >> 6 != 0) {
      val_8 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_3 * 8] >> 6) * 3;
      (&g_bss_003d1b5e)[val_8] = 0;
      *(short *)((int)&g_bss_003d1b5c + val_8) = *(short *)((int)&g_bss_003d1b5c + val_8) + -1;
      (&g_bss_0038c626)[val_3 * 8] = (&g_bss_0038c626)[val_3 * 8] & 0x3f;
      (&g_bss_0038c626)[val_3 * 8] = (&g_bss_0038c626)[val_3 * 8];
      g_bss_003d1b5c = g_bss_003d1b5c + 1;
    }
    if ((int)(uint)(ushort)(&g_bss_0038c626)[val_9 * 8] >> 6 != 0) {
      val_8 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_9 * 8] >> 6) * 3;
      (&g_bss_003d1b5e)[val_8] = 0;
      *(short *)((int)&g_bss_003d1b5c + val_8) = *(short *)((int)&g_bss_003d1b5c + val_8) + -1;
      (&g_bss_0038c626)[val_9 * 8] = (&g_bss_0038c626)[val_9 * 8] & 0x3f;
      (&g_bss_0038c626)[val_9 * 8] = (&g_bss_0038c626)[val_9 * 8];
      g_bss_003d1b5c = g_bss_003d1b5c + 1;
    }
    val_8 = val_3;
    *(undefined2 *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) = g_data_00192148;
    g_data_00192148 = val_8;
    *(undefined1 *)((int)&g_bss_0038c621 + val_3 * 0x10 + 3) = 0xff;
    g_bss_0038c5d4 = g_bss_0038c5d4 + -2;
    val_3 = val_9;
    *(undefined2 *)((int)&g_ariadne_nav_state + val_9 * 0x10 + 2) = g_data_00192148;
    g_data_00192148 = val_3;
    *(undefined1 *)((int)&g_bss_0038c621 + val_9 * 0x10 + 3) = 0xff;
    navigate_update_ariadne_navigation_0b5d38();
    *(undefined2 *)(&g_bss_003af898 + uval_2 * 4) = g_data_0019214c;
    g_data_0019214c = uval_2;
    *(undefined2 *)(&g_bss_003af89a + uval_2 * 4) = 0x8000;
    uval = 1;
    g_bss_003b3eec = g_bss_003b3eec + -1;
  }
  return uval;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0baa20 (Original VA: 0xbaa20, Ghidra: FUN_000baa20)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0baa20(void);
 * Address  : 0xbaa20 (Size: 345 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_make_edge_0bab7c
 * Callees  : 1 -> navigate_edge_rotateAC_0b8874
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0baa20(void)

{
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int arg_edx;
  int arg_ebx;
  int val_3;
  int val_4;
  int val_5;
  
  do {
    val_3 = *(int *)((int)&g_ariadne_nav_state + arg_eax * 0x10 + arg_edx * 2) >> 0x10;
    if (val_3 == -1) {
      return 0;
    }
    if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == arg_eax) {
      val = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == arg_eax) {
      val = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == arg_eax) {
      val = 2;
    }
    else {
      val = -1;
    }
    val_4 = 0;
    val_5 = 0;
    val = (&g_data_00192134)[val];
    while (val = val * 2 + val_3 * 0x10,
          *(int *)((int)&g_ariadne_nav_state + val) >> 0x10 != arg_ebx) {
      val_2 = navigate_edge_rotateAC_0b8874();
      if (val_2 == 0) {
        val_2 = *(int *)((int)&g_ariadne_nav_state + val) >> 0x10;
        if ((val_2 == -1) || (val_2 == arg_eax)) {
          return 0;
        }
        if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == val_3) {
          val_3 = 0;
LAB_000bab51:
          val_5 = val_5 + 1;
          val = (&g_data_00192134)[val_3];
          val_3 = val_2;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val_3) {
          val_5 = val_5 + 1;
          val = g_data_00192138;
          val_3 = val_2;
        }
        else {
          if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 != val_3) {
            val_3 = -1;
            goto LAB_000bab51;
          }
          val_5 = val_5 + 1;
          val = g_data_0019213c;
          val_3 = val_2;
        }
      }
      else {
        val_4 = val_4 + 1;
        val = extraout_ECX;
      }
    }
    if ((val_5 == 0) || (val_4 == 0)) {
      return 1;
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_make_edge_0bab7c (Original VA: 0xbab7c, Ghidra: FUN_000bab7c)
 * Prototype: void navigate_make_edge_0bab7c(void);
 * Address  : 0xbab7c (Size: 1085 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2954
 * Purpose  : Log prefix 'make_edge : border point'
 * Callers  : 5 -> navigate_make_edge_0bab7c, navigate_update_ariadne_navigation_0bb50c, navigate_fn_0bca9c, navigate_fn_0bed7c, navigate_fn_0bee04
 * Callees  : 5 -> navigate_update_ariadne_navigation_0b70c4, navigate_update_ariadne_navigation_0b80c8, navigate_update_ariadne_navigation_0baa20, navigate_make_edge_0bab7c, LbErrorLog
 ******************************************************************************/
void navigate_make_edge_0bab7c(void)

{
  longlong val;
  int val_2;
  int val_3;
  int arg_eax;
  int val_4;
  uint uval;
  uint uval_2;
  int val_5;
  int arg_ecx;
  int arg_edx;
  int val_6;
  int val_7;
  int val_8;
  int val_9;
  int arg_ebx;
  char ch;
  bool flag;
  bool flag_2;
  int local_64;
  int local_60;
  int val_10;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_10;
  
  local_30 = arg_ecx;
  val_10 = arg_eax;
  local_28 = arg_edx;
  if ((arg_eax == arg_ebx) && (val_10 = arg_eax, arg_edx == arg_ecx)) {
    return;
  }
  do {
    local_2c = val_10;
    val_10 = arg_ebx;
    val_3 = local_28;
    val_2 = local_30;
    local_28 = local_30;
    local_30 = val_3;
    val_4 = navigate_update_ariadne_navigation_0b80c8();
    if (val_4 == 0) {
      return;
    }
    val_4 = navigate_update_ariadne_navigation_0b80c8();
    if (val_4 == 0) {
      return;
    }
    val_4 = navigate_update_ariadne_navigation_0b70c4();
    if (val_4 == -1) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2954, "make_edge : border point") */
    }
    if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4 * 2 + local_64 * 0x10) * 2
                 ) >> 0x10 == local_2c) &&
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4 * 2 + local_64 * 0x10) * 4)
        >> 0x10 == val_3)) {
      return;
    }
    local_20 = *(int *)((int)&g_ariadne_nav_state + local_60 * 2 + local_64 * 0x10) >> 0x10;
    if ((int)(&g_ariadne_nav_state)[local_20 * 4] >> 0x10 == local_64) {
      local_10 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + local_20 * 0x10 + 2) >> 0x10 == local_64) {
      local_10 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + local_20 * 0x10) >> 0x10 == local_64) {
      local_10 = 2;
    }
    else {
      local_10 = -1;
    }
    val = (longlong)(local_2c - val_10) *
            (longlong)
            ((*(int *)(&g_bss_003af898 +
                      (uint)*(ushort *)(&g_bss_0038c618 + local_10 * 2 + local_20 * 0x10) * 4) >> 0x10
             ) - val_2);
    val_6 = (int)((ulonglong)val >> 0x20);
    uval = (uint)val;
    val = (longlong)(val_3 - val_2) *
            (longlong)
            ((*(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + local_10 * 2 + local_20 * 0x10) * 2) >> 0x10
             ) - val_10);
    val_7 = (int)((ulonglong)val >> 0x20);
    uval_2 = (uint)val;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_6 - val_7;
    flag_2 = SBORROW4(val_6,val_7) != SBORROW4(uval_2,uval);
    flag = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    val_6 = local_64;
    if (ch == '\0') {
      navigate_make_edge_0bab7c();
      navigate_make_edge_0bab7c();
      return;
    }
    do {
      val_7 = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + val_6 * 0x10) >> 0x10;
      if ((int)(&g_ariadne_nav_state)[val_7 * 4] >> 0x10 == val_6) {
        val_5 = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_7 * 0x10 + 2) >> 0x10 == val_6) {
        val_5 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_7 * 0x10) >> 0x10 == val_6) {
        val_5 = 2;
      }
      else {
        val_5 = -1;
      }
      val_4 = (&g_data_00192134)[val_5];
      val = (longlong)(local_2c - val_10) *
              (longlong)
              ((*(int *)(&g_bss_003af898 +
                        (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_7 * 0x10)
                        * 4) >> 0x10) - val_2);
      val_6 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)(val_3 - val_2) *
              (longlong)
              ((*(int *)(&g_bss_003af896 +
                        (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_7 * 0x10)
                        * 2) >> 0x10) - val_10);
      val_8 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_6 - val_8;
      flag_2 = SBORROW4(val_6,val_8) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (-1 < ch) {
        val_6 = *(int *)((int)&g_ariadne_nav_state + val_4 * 2 + val_7 * 0x10) >> 0x10;
        if ((int)(&g_ariadne_nav_state)[val_6 * 4] >> 0x10 == val_7) {
          val_8 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_6 * 0x10 + 2) >> 0x10 == val_7) {
          val_8 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + val_6 * 0x10) >> 0x10 == val_7) {
          val_8 = 2;
        }
        else {
          val_8 = -1;
        }
        val = (longlong)
                ((*(int *)(&g_bss_003af896 +
                          (uint)*(ushort *)(&g_bss_0038c618 + local_20 * 0x10 + local_10 * 2) * 2) >>
                 0x10) - (*(int *)(&g_bss_003af896 +
                                  (uint)*(ushort *)
                                         (&g_bss_0038c618 +
                                         (&g_data_00192134)[local_10] * 2 + local_20 * 0x10) * 2) >>
                         0x10)) *
                (longlong)
                ((*(int *)(&g_bss_003af898 +
                          (uint)*(ushort *)(&g_bss_0038c618 + val_6 * 0x10 + val_8 * 2) * 4) >> 0x10)
                - (*(int *)(&g_bss_003af898 +
                           (uint)*(ushort *)
                                  (&g_bss_0038c618 + (&g_data_00192134)[local_10] * 2 + local_20 * 0x10)
                           * 4) >> 0x10));
        val_4 = (int)((ulonglong)val >> 0x20);
        uval = (uint)val;
        val = (longlong)
                ((*(int *)(&g_bss_003af898 +
                          (uint)*(ushort *)(&g_bss_0038c618 + local_20 * 0x10 + local_10 * 2) * 4) >>
                 0x10) - (*(int *)(&g_bss_003af898 +
                                  (uint)*(ushort *)
                                         (&g_bss_0038c618 +
                                         (&g_data_00192134)[local_10] * 2 + local_20 * 0x10) * 4) >>
                         0x10)) *
                (longlong)
                ((*(int *)(&g_bss_003af896 +
                          (uint)*(ushort *)(&g_bss_0038c618 + val_6 * 0x10 + val_8 * 2) * 2) >> 0x10)
                - (*(int *)(&g_bss_003af896 +
                           (uint)*(ushort *)
                                  (&g_bss_0038c618 + (&g_data_00192134)[local_10] * 2 + local_20 * 0x10)
                           * 2) >> 0x10));
        val_9 = (int)((ulonglong)val >> 0x20);
        uval_2 = (uint)val;
        ch = uval != uval_2;
        uval = (uint)(uval < uval_2);
        uval_2 = val_4 - val_9;
        flag_2 = SBORROW4(val_4,val_9) != SBORROW4(uval_2,uval);
        flag = (int)(uval_2 - uval) < 0;
        if (uval_2 != uval) {
          ch = (flag_2 == flag) - (flag_2 != flag);
        }
        if (ch < '\0') {
          navigate_update_ariadne_navigation_0baa20();
          arg_ebx = local_2c;
          break;
        }
        val_4 = (&g_data_00192138)[val_5];
        local_20 = val_6;
        local_10 = val_8;
      }
      val_6 = val_7;
    } while ((*(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_7 * 0x10) *
                      2) >> 0x10 != local_2c) ||
            (arg_ebx = local_2c,
            *(int *)(&g_bss_003af898 +
                    (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_7 * 0x10) * 4
                    ) >> 0x10 != val_3));
  } while( true );
}

/******************************************************************************
 * Function : navigate_fn_0bafbc (Original VA: 0xbafbc, Ghidra: FUN_000bafbc)
 * Prototype: void navigate_fn_0bafbc(int *param_1,int *param_2);
 * Address  : 0xbafbc (Size: 238 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bafbc
 * Callers  : 1 -> navigate_thin_wall_0bb0ac
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b77b4, navigate_point_new_overflow_0b94b8
 ******************************************************************************/
void navigate_fn_0bafbc(int *param_1,int *param_2)

{
  int arg_eax;
  int val;
  int val_2;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  
  *param_1 = arg_ebx >> 8;
  *param_2 = arg_ecx >> 8;
  val = navigate_update_ariadne_navigation_0b77b4();
  if (val == -1) {
    navigate_point_new_overflow_0b94b8();
  }
  else {
    val_2 = *(int *)(&g_bss_003af898 +
                    (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + arg_eax * 0x10) * 4) >> 0x10;
    val = *(int *)(&g_bss_003af898 +
                    (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10) *
                    4);
    val_3 = (*(int *)(&g_bss_003af896 +
                     (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10)
                     * 2) >> 0x10) - *param_1;
    val_6 = (val >> 0x10) - *param_2;
    val_4 = (*(int *)(&g_bss_003af896 +
                     (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + arg_eax * 0x10) * 2) >> 0x10) -
            *param_1;
    val_5 = val_2 - *param_2;
    if (val_6 * val_6 + val_3 * val_3 < val_5 * val_5 + val_4 * val_4) {
      *param_1 = *(int *)(&g_bss_003af896 +
                         (uint)*(ushort *)
                                (&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10) * 2)
                 >> 0x10;
      val_2 = val >> 0x10;
    }
    else {
      *param_1 = *(int *)(&g_bss_003af896 +
                         (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + arg_eax * 0x10) * 2) >> 0x10;
    }
    *param_2 = val_2;
  }
  return;
}

/******************************************************************************
 * Function : navigate_thin_wall_0bb0ac (Original VA: 0xbb0ac, Ghidra: FUN_000bb0ac)
 * Prototype: void navigate_thin_wall_0bb0ac(void);
 * Address  : 0xbb0ac (Size: 1118 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 3119
 * Purpose  : Log prefix 'thin_wall : clipping overflow'
 * Callers  : 0 -> 
 * Callees  : 5 -> navigate_line_intersect_0b55b8, navigate_update_ariadne_navigation_0b70c4, navigate_update_ariadne_navigation_0b80c8, navigate_fn_0bafbc, LbErrorLog
 ******************************************************************************/
void navigate_thin_wall_0bb0ac(void)

{
  uint *word_ptr;
  ushort uval;
  uint uval_2;
  longlong val;
  int arg_eax;
  uint uval_3;
  uint uval_4;
  int arg_ecx;
  int arg_edx;
  int val_2;
  int val_3;
  int arg_ebx;
  uint *word_ptr_2;
  int val_4;
  int val_5;
  char ch;
  bool flag;
  bool flag_2;
  undefined1 local_50 [32];
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = arg_ecx;
  navigate_update_ariadne_navigation_0b80c8();
  local_30 = local_28 << 8;
  val_5 = arg_ecx - arg_edx;
  local_2c = arg_ebx << 8;
  val_4 = arg_ebx - arg_eax;
  word_ptr_2 = (uint *)local_50;
LAB_000bb0ff:
  do {
    do {
      do {
        val_2 = g_bss_003d26c4 + 1;
        (&g_bss_003d23a4)[g_bss_003d26c4] = word_ptr_2[2];
        word_ptr = &g_bss_003d2534 + g_bss_003d26c4;
        g_bss_003d26c4 = val_2;
        *word_ptr = word_ptr_2[3];
        if (99 < val_2) {
          word_ptr_2[-1] = 0xbb13d;
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 3119, "thin_wall : clipping overflow") */
        }
        if ((word_ptr_2[2] == word_ptr_2[0xb]) && (word_ptr_2[3] == word_ptr_2[10])) {
          return;
        }
        word_ptr_2[-1] = 0xbb168;
        uval_3 = navigate_update_ariadne_navigation_0b70c4();
        word_ptr_2[0xf] = uval_3;
        word_ptr_2[1] = uval_3;
        uval = *(ushort *)(&g_bss_0038c618 + *word_ptr_2 * 0x10 + word_ptr_2[0xf] * 2);
        word_ptr_2[2] = *(int *)(&g_bss_003af896 + (uint)uval * 2) >> 0x10;
        val_2 = *(int *)(&g_bss_003af898 + (uint)uval * 4);
        word_ptr_2[3] = val_2 >> 0x10;
        val = (longlong)val_4 * (longlong)(int)((val_2 >> 0x10) - word_ptr_2[0xd]);
        val_2 = (int)((ulonglong)val >> 0x20);
        uval_3 = (uint)val;
        val = (longlong)val_5 * (longlong)(int)(word_ptr_2[2] - word_ptr_2[0xe]);
        val_3 = (int)((ulonglong)val >> 0x20);
        uval_4 = (uint)val;
        ch = uval_3 != uval_4;
        uval_3 = (uint)(uval_3 < uval_4);
        uval_4 = val_2 - val_3;
        flag_2 = SBORROW4(val_2,val_3) != SBORROW4(uval_4,uval_3);
        flag = (int)(uval_4 - uval_3) < 0;
        if (uval_4 != uval_3) {
          ch = (flag_2 == flag) - (flag_2 != flag);
        }
      } while (ch == '\0');
      uval_3 = (&g_data_00192134)[word_ptr_2[0xf]];
      word_ptr_2[1] = uval_3;
      uval = *(ushort *)(&g_bss_0038c618 + uval_3 * 2 + *word_ptr_2 * 0x10);
      word_ptr_2[2] = *(int *)(&g_bss_003af896 + (uint)uval * 2) >> 0x10;
      val_2 = *(int *)(&g_bss_003af898 + (uint)uval * 4);
      word_ptr_2[3] = val_2 >> 0x10;
      val = (longlong)val_4 * (longlong)(int)((val_2 >> 0x10) - word_ptr_2[0xd]);
      val_2 = (int)((ulonglong)val >> 0x20);
      uval_3 = (uint)val;
      val = (longlong)val_5 * (longlong)(int)(word_ptr_2[2] - word_ptr_2[0xe]);
      val_3 = (int)((ulonglong)val >> 0x20);
      uval_4 = (uint)val;
      ch = uval_3 != uval_4;
      uval_3 = (uint)(uval_3 < uval_4);
      uval_4 = val_2 - val_3;
      flag_2 = SBORROW4(val_2,val_3) != SBORROW4(uval_4,uval_3);
      flag = (int)(uval_4 - uval_3) < 0;
      if (uval_4 != uval_3) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
    } while (ch == '\0');
    uval_3 = word_ptr_2[0xf];
    while( true ) {
      uval_4 = *word_ptr_2;
      word_ptr_2[0x10] = uval_3;
      val_2 = *(int *)((int)&g_ariadne_nav_state + word_ptr_2[0x10] * 2 + uval_4 * 0x10) >> 0x10;
      *word_ptr_2 = val_2;
      if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == uval_4) {
        uval_3 = (int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 ^ uval_4;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == uval_4) {
        uval_3 = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == uval_4) {
        uval_3 = 2;
      }
      else {
        uval_3 = 0xffffffff;
      }
      word_ptr_2[0xc] = uval_3;
      uval_2 = (&g_data_00192138)[uval_3];
      val_2 = *word_ptr_2 * 0x10;
      word_ptr_2[1] = uval_2;
      uval = *(ushort *)(&g_bss_0038c618 + uval_2 * 2 + val_2);
      word_ptr_2[2] = *(int *)(&g_bss_003af896 + (uint)uval * 2) >> 0x10;
      word_ptr_2[3] = *(int *)(&g_bss_003af898 + (uint)uval * 4) >> 0x10;
      if (((*(char *)((int)&g_bss_0038c621 + uval_4 * 0x10 + 3) ==
            *(char *)((int)&g_bss_0038c621 + val_2 + 3)) &&
          (word_ptr_2[6] = (uint)(byte)(&g_bss_0038c625)[uval_4 * 0x10],
          (word_ptr_2[6] & 1 << ((byte)word_ptr_2[0x10] & 0x1f)) != 0)) &&
         (((uint)(byte)(&g_bss_0038c625)[val_2] & 1 << ((byte)uval_3 & 0x1f)) != 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) break;
      val_2 = (int)((ulonglong)((longlong)val_4 * (longlong)(int)(word_ptr_2[3] - word_ptr_2[0xd])) >> 0x20
                   );
      uval_3 = (uint)((longlong)val_4 * (longlong)(int)(word_ptr_2[3] - word_ptr_2[0xd]));
      val_3 = (int)((ulonglong)((longlong)val_5 * (longlong)(int)(word_ptr_2[2] - word_ptr_2[0xe])) >> 0x20
                   );
      uval_4 = (uint)((longlong)val_5 * (longlong)(int)(word_ptr_2[2] - word_ptr_2[0xe]));
      ch = uval_3 != uval_4;
      uval_3 = (uint)(uval_3 < uval_4);
      uval_4 = val_2 - val_3;
      flag_2 = SBORROW4(val_2,val_3) != SBORROW4(uval_4,uval_3);
      flag = (int)(uval_4 - uval_3) < 0;
      if (uval_4 != uval_3) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch < '\x01') {
        if (-1 < ch) goto LAB_000bb0ff;
        uval_3 = (&g_data_00192134)[word_ptr_2[0xc]];
      }
      else {
        uval_3 = (&g_data_00192138)[word_ptr_2[0xc]];
      }
    }
    word_ptr_2[-1] = (uint)(word_ptr_2 + 5);
    word_ptr_2[-2] = (uint)(word_ptr_2 + 4);
    val_2 = *(int *)(&g_bss_003af896 +
                    (uint)*(ushort *)
                           (&g_bss_0038c618 + (&g_data_00192134)[word_ptr_2[0x10]] * 2 + uval_4 * 0x10) * 2);
    word_ptr_2[-3] = *(int *)(&g_bss_003af898 +
                         (uint)*(ushort *)
                                (&g_bss_0038c618 + (&g_data_00192134)[word_ptr_2[0x10]] * 2 + uval_4 * 0x10) *
                         4) >> 0x10;
    word_ptr_2[-4] = val_2 >> 0x10;
    uval_3 = uval_4 * 0x10 + word_ptr_2[0x10] * 2;
    uval = *(ushort *)(&g_bss_0038c618 + uval_3);
    word_ptr_2[7] = uval_3;
    val_2 = *(int *)(&g_bss_003af896 + (uint)uval * 2);
    word_ptr_2[-5] = *(int *)(&g_bss_003af898 + (uint)uval * 4) >> 0x10;
    word_ptr_2[-6] = val_2 >> 0x10;
    word_ptr_2[-7] = 0xbb423;
    navigate_line_intersect_0b55b8();
    word_ptr_2[-4] = (int)(word_ptr_2[-2] + 0x80) >> 8;
    word_ptr_2[-3] = (int)(word_ptr_2[-1] + 0x80) >> 8;
    if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + word_ptr_2[1]) * 2) >> 0x10 ==
         word_ptr_2[-4]) &&
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + word_ptr_2[1]) * 4) >> 0x10 ==
        word_ptr_2[-3])) {
      word_ptr_2[-6] = uval_4;
      word_ptr_2[-5] = word_ptr_2[10];
      word_ptr_2 = word_ptr_2 + -6;
    }
    else if ((*(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + word_ptr_2[6] * 2 + word_ptr_2[-6] * 0x10) * 2) >>
              0x10 == word_ptr_2[-4]) &&
            (*(int *)(&g_bss_003af898 +
                     (uint)*(ushort *)(&g_bss_0038c618 + word_ptr_2[6] * 2 + word_ptr_2[-6] * 0x10) * 4) >>
             0x10 == word_ptr_2[-3])) {
      word_ptr_2[-5] = word_ptr_2[6];
      word_ptr_2 = word_ptr_2 + -6;
    }
    else {
      word_ptr_2[-7] = (uint)(word_ptr_2 + -3);
      word_ptr_2[-8] = (uint)(word_ptr_2 + -4);
      word_ptr_2[-9] = 0xbb4eb;
      navigate_fn_0bafbc();
      word_ptr_2[-9] = 0xbb4fe;
      navigate_update_ariadne_navigation_0b80c8();
      word_ptr_2 = word_ptr_2 + -8;
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bb50c (Original VA: 0xbb50c, Ghidra: FUN_000bb50c)
 * Prototype: void navigate_update_ariadne_navigation_0bb50c(void);
 * Address  : 0xbb50c (Size: 282 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b81c4, navigate_make_edge_0bab7c
 ******************************************************************************/
void navigate_update_ariadne_navigation_0bb50c(void)

{
  int val;
  byte flag;
  int val_2;
  char *str_ptr;
  int loop_i;
  int aiStack_2c [2];
  byte local_24 [4];
  char local_20 [4];
  char local_1c [12];
  
  str_ptr = local_20;
  for (loop_i = 0; loop_i < g_bss_003d26c4 + -1; loop_i = loop_i + 1) {
    str_ptr[-0xffffffff00000004] = -0x3d;
    str_ptr[-0xffffffff00000003] = -0x4b;
    str_ptr[-0xffffffff00000002] = '\v';
    str_ptr[-0xffffffff00000001] = '\0';
    navigate_make_edge_0bab7c();
    *(char **)(str_ptr + -4) = str_ptr + 4;
    *(char **)(str_ptr + -8) = str_ptr;
    str_ptr[-0xffffffff0000000c] = -0x16;
    str_ptr[-0xffffffff0000000b] = -0x4b;
    str_ptr[-0xffffffff0000000a] = '\v';
    str_ptr[-0xffffffff00000009] = '\0';
    navigate_update_ariadne_navigation_0b81c4();
    val_2 = *(int *)((int)&g_ariadne_nav_state + *(int *)(str_ptr + -4) * 2 + *(int *)(str_ptr + -8) * 0x10)
            >> 0x10;
    val = *(int *)(str_ptr + -8);
    if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == val) {
      flag = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val) {
      flag = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == val) {
      flag = 2;
    }
    else {
      flag = 0xff;
    }
    (&g_bss_0038c625)[*(int *)(str_ptr + -8) * 0x10] =
         *str_ptr << (str_ptr[-4] & 0x1fU) |
         (&g_bss_0038c625)[*(int *)(str_ptr + -8) * 0x10] & ~('\x01' << (str_ptr[-4] & 0x1fU));
    (&g_bss_0038c625)[val_2 * 0x10] =
         str_ptr[4] << (flag & 0x1f) | ~('\x01' << (flag & 0x1f)) & (&g_bss_0038c625)[val_2 * 0x10];
    str_ptr = str_ptr + -8;
  }
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bb668 (Original VA: 0xbb668, Ghidra: FUN_000bb668)
 * Prototype: undefined8 navigate_update_ariadne_navigation_0bb668(void);
 * Address  : 0xbb668 (Size: 131 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 3 -> navigate_fn_0bb6ec, navigate_update_ariadne_navigation_0bc288, navigate_fn_0bc3c8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 navigate_update_ariadne_navigation_0bb668(void)

{
  int arg_eax;
  undefined4 arg_edx;
  uint uval;
  uint uval_2;
  
  uval = ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >> 0x10)
          - (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10)
          ) * ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10)
              - (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >>
                0x10)) -
          ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4) >> 0x10)
          - (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >> 0x10)
          ) * ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10)
              - (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >>
                0x10));
  uval_2 = (int)uval >> 0x1f;
  return CONCAT44(arg_edx,(uval ^ uval_2) - uval_2);
}

/******************************************************************************
 * Function : navigate_fn_0bb6ec (Original VA: 0xbb6ec, Ghidra: FUN_000bb6ec)
 * Prototype: undefined8 navigate_fn_0bb6ec(void);
 * Address  : 0xbb6ec (Size: 64 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bb6ec
 * Callers  : 0 -> 
 * Callees  : 1 -> navigate_update_ariadne_navigation_0bb668
 ******************************************************************************/
undefined8 navigate_fn_0bb6ec(void)

{
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  undefined8 uval;
  
  val = 0;
  val_2 = 0;
  if (0 < g_bss_0038c5d0) {
    val_3 = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + val_3) >> 0x18 != -1) {
        uval = navigate_update_ariadne_navigation_0bb668();
        val_2 = (int)((ulonglong)uval >> 0x20);
        val = extraout_ECX + (int)uval;
      }
      val_2 = val_2 + 1;
      val_3 = val_3 + 0x10;
    } while (val_2 < g_bss_0038c5d0);
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bb72c (Original VA: 0xbb72c, Ghidra: FUN_000bb72c)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0bb72c(void);
 * Address  : 0xbb72c (Size: 561 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 2 -> navigate_delaunay_seeded_stack_full_0bbc9c, navigate_fn_0bc1bc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0bb72c(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  int val_3;
  int val_4;
  uint uval;
  uint uval_2;
  int arg_edx;
  int val_5;
  int val_6;
  int val_7;
  int val_8;
  int val_9;
  int val_10;
  char ch;
  bool flag;
  bool flag_2;
  
  val_8 = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10) >> 0x10;
  if ((val_8 != -1) &&
     (val_5 = val_8 * 0x10,
     *(char *)((int)&g_bss_0038c621 + arg_eax * 0x10 + 3) == *(char *)((int)&g_bss_0038c621 + val_5 + 3))
     ) {
    if ((int)(&g_ariadne_nav_state)[val_8 * 4] >> 0x10 == arg_eax) {
      val_5 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_5 + 2) >> 0x10 == arg_eax) {
      val_5 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_5) >> 0x10 == arg_eax) {
      val_5 = 2;
    }
    else {
      val_5 = -1;
    }
    val_2 = arg_eax * 0x10;
    if ((((uint)(byte)(&g_bss_0038c625)[val_2] & 1 << ((byte)arg_edx & 0x1f)) != 0) &&
       (((uint)(byte)(&g_bss_0038c625)[val_8 * 0x10] & 1 << ((byte)val_5 & 0x1f)) != 0)) {
      val_9 = *(int *)(&g_bss_003af896 +
                       (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[arg_edx] * 2 + val_2) * 2)
               >> 0x10;
      val_10 = *(int *)(&g_bss_003af898 +
                       (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[arg_edx] * 2 + val_2) * 4)
               >> 0x10;
      val_3 = (*(int *)(&g_bss_003af898 +
                       (uint)*(ushort *)(&g_bss_0038c618 + val_8 * 0x10 + (&g_data_00192138)[val_5] * 2)
                       * 4) >> 0x10) - val_10;
      val_4 = (*(int *)(&g_bss_003af896 +
                       (uint)*(ushort *)(&g_bss_0038c618 + val_8 * 0x10 + (&g_data_00192138)[val_5] * 2)
                       * 2) >> 0x10) - val_9;
      val = (longlong)
              ((*(int *)(&g_bss_003af896 +
                        (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192130)[arg_edx] * 2 + val_2) * 2)
               >> 0x10) - val_9) * (longlong)val_3;
      val_6 = (int)((ulonglong)val >> 0x20);
      uval = (uint)val;
      val = (longlong)
              ((*(int *)(&g_bss_003af898 +
                        (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192130)[arg_edx] * 2 + val_2) * 4)
               >> 0x10) - val_10) * (longlong)val_4;
      val_7 = (int)((ulonglong)val >> 0x20);
      uval_2 = (uint)val;
      ch = uval != uval_2;
      uval = (uint)(uval < uval_2);
      uval_2 = val_6 - val_7;
      flag_2 = SBORROW4(val_6,val_7) != SBORROW4(uval_2,uval);
      flag = (int)(uval_2 - uval) < 0;
      if (uval_2 != uval) {
        ch = (flag_2 == flag) - (flag_2 != flag);
      }
      if (ch < '\0') {
        val = (longlong)
                ((*(int *)(&g_bss_003af896 +
                          (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_2) * 2
                          ) >> 0x10) - val_9) * (longlong)val_3;
        val_3 = (int)((ulonglong)val >> 0x20);
        uval = (uint)val;
        val = (longlong)
                ((*(int *)(&g_bss_003af898 +
                          (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_2) * 4
                          ) >> 0x10) - val_10) * (longlong)val_4;
        val_4 = (int)((ulonglong)val >> 0x20);
        uval_2 = (uint)val;
        ch = uval != uval_2;
        uval = (uint)(uval < uval_2);
        uval_2 = val_3 - val_4;
        flag_2 = SBORROW4(val_3,val_4) != SBORROW4(uval_2,uval);
        flag = (int)(uval_2 - uval) < 0;
        if (uval_2 != uval) {
          ch = (flag_2 == flag) - (flag_2 != flag);
        }
        if (('\0' < ch) &&
           (val_10 = val_10 - (*(int *)(&g_bss_003af898 +
                                       (uint)*(ushort *)
                                              (&g_bss_0038c618 +
                                              val_8 * 0x10 + (&g_data_00192138)[val_5] * 2) * 4) >>
                              0x10),
           val_9 = val_9 - (*(int *)(&g_bss_003af896 +
                                      (uint)*(ushort *)
                                             (&g_bss_0038c618 +
                                             val_8 * 0x10 + (&g_data_00192138)[val_5] * 2) * 2) >>
                             0x10),
           val_8 = (*(int *)(&g_bss_003af896 +
                             (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192130)[arg_edx] * 2 + val_2)
                             * 2) >> 0x10) -
                    (*(int *)(&g_bss_003af896 +
                             (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_2)
                             * 2) >> 0x10),
           val_5 = (*(int *)(&g_bss_003af898 +
                            (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192130)[arg_edx] * 2 + val_2) *
                            4) >> 0x10) -
                   (*(int *)(&g_bss_003af898 +
                            (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + val_2) *
                            4) >> 0x10),
           val_9 * val_9 + val_10 * val_10 < val_8 * val_8 + val_5 * val_5)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bba28 (Original VA: 0xbba28, Ghidra: FUN_000bba28)
 * Prototype: void navigate_update_ariadne_navigation_0bba28(void);
 * Address  : 0xbba28 (Size: 626 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_delaunay_seeded_stack_full_0bbc9c
 * Callees  : 2 -> navigate_triangle_find_cache_get_0b7e14, navigate_update_ariadne_navigation_0b80c8
 ******************************************************************************/
void navigate_update_ariadne_navigation_0bba28(void)

{
  int val;
  int val_2;
  int val_3;
  int local_18;
  int local_14;
  
  val = navigate_triangle_find_cache_get_0b7e14();
  if (val != -1) {
    if ((((int)(&g_bss_0038c621)[val * 4] >> 0x18 != -1) && ((&g_bss_003cf528)[val] != g_data_0019215c)
        ) && ((*(byte *)((int)&g_bss_0038c621 + val * 0x10 + 3) & 0xf) != 0xf)) {
      g_bss_003d3668 = g_bss_003d3668 + 1;
      (&g_bss_003cf528)[val] = g_data_0019215c;
      (&g_bss_003d26c4)[g_bss_003d3668] = val;
    }
    val_2 = (int)(&g_ariadne_nav_state)[val * 4] >> 0x10;
    if (((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
       ((g_data_0019215c != (&g_bss_003cf528)[val_2] &&
        ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)))) {
      g_bss_003d3668 = g_bss_003d3668 + 1;
      (&g_bss_003cf528)[val_2] = g_data_0019215c;
      (&g_bss_003d26c4)[g_bss_003d3668] = val_2;
    }
    val_2 = *(int *)((int)&g_ariadne_nav_state + val * 0x10 + 2) >> 0x10;
    if (((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
       ((g_data_0019215c != (&g_bss_003cf528)[val_2] &&
        ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)))) {
      g_bss_003d3668 = g_bss_003d3668 + 1;
      (&g_bss_003cf528)[val_2] = g_data_0019215c;
      (&g_bss_003d26c4)[g_bss_003d3668] = val_2;
    }
    val_2 = *(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10;
    if ((((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
        ((&g_bss_003cf528)[val_2] != g_data_0019215c)) &&
       ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)) {
      g_bss_003d3668 = g_bss_003d3668 + 1;
      (&g_bss_003cf528)[val_2] = g_data_0019215c;
      (&g_bss_003d26c4)[g_bss_003d3668] = val_2;
    }
    val_2 = navigate_update_ariadne_navigation_0b80c8();
    local_18 = val;
    if (val_2 != 0) {
      do {
        val_2 = *(int *)((int)&g_ariadne_nav_state + local_14 * 2 + local_18 * 0x10) >> 0x10;
        if (val_2 == -1) {
          return;
        }
        if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == local_18) {
          val_3 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == local_18) {
          val_3 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == local_18) {
          val_3 = 2;
        }
        else {
          val_3 = -1;
        }
        local_14 = (&g_data_00192134)[val_3];
        if (((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
           (((&g_bss_003cf528)[val_2] != g_data_0019215c &&
            ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)))) {
          g_bss_003d3668 = g_bss_003d3668 + 1;
          (&g_bss_003cf528)[val_2] = g_data_0019215c;
          (&g_bss_003d26c4)[g_bss_003d3668] = val_2;
        }
        local_18 = val_2;
      } while (val != val_2);
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_delaunay_seeded_stack_full_0bbc9c (Original VA: 0xbbc9c, Ghidra: FUN_000bbc9c)
 * Prototype: int navigate_delaunay_seeded_stack_full_0bbc9c(void);
 * Address  : 0xbbc9c (Size: 556 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 3506
 * Purpose  : String 'delaunay_seeded:stack full'
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 5 -> navigate_edge_rotateAC_0b8874, navigate_update_ariadne_navigation_0bb72c, navigate_update_ariadne_navigation_0bba28, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
int navigate_delaunay_seeded_stack_full_0bbc9c(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  
  g_data_0019215c = g_data_0019215c + '\x01';
  val_4 = 0;
  if (g_data_0019215c == '\0') {
    LbScreenWaitVbi();
    g_data_0019215c = '\x01';
  }
  g_bss_003d3668 = 0;
  navigate_update_ariadne_navigation_0bba28();
  navigate_update_ariadne_navigation_0bba28();
  navigate_update_ariadne_navigation_0bba28();
  navigate_update_ariadne_navigation_0bba28();
  do {
    if (g_bss_003d3668 < 1) {
      return val_4;
    }
    g_bss_003d3668 = g_bss_003d3668 + -1;
    val = (&g_bss_003d26c8)[g_bss_003d3668];
    val_3 = 0;
    val_5 = val * 0x10;
    do {
      val_2 = navigate_update_ariadne_navigation_0bb72c();
      if (val_2 != 0) {
        navigate_edge_rotateAC_0b8874();
        val_4 = val_4 + 1;
        if (999 < g_bss_003d3668 + 4) {
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 3506, "delaunay_seeded:stack full") */
          return val_4;
        }
        val_2 = (int)(&g_ariadne_nav_state)[val * 4] >> 0x10;
        if ((((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
            ((&g_bss_003cf528)[val_2] != g_data_0019215c)) &&
           ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)) {
          (&g_bss_003d26c8)[g_bss_003d3668] = val_2;
          g_bss_003d3668 = g_bss_003d3668 + 1;
          (&g_bss_003cf528)[val_2] = g_data_0019215c;
        }
        val_2 = *(int *)((int)&g_ariadne_nav_state + val_5 + 2) >> 0x10;
        if (((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
           (((&g_bss_003cf528)[val_2] != g_data_0019215c &&
            ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)))) {
          (&g_bss_003d26c8)[g_bss_003d3668] = val_2;
          g_bss_003d3668 = g_bss_003d3668 + 1;
          (&g_bss_003cf528)[val_2] = g_data_0019215c;
        }
        val_2 = *(int *)(&g_bss_0038c620 + val_5) >> 0x10;
        if (((val_2 != -1) && ((int)(&g_bss_0038c621)[val_2 * 4] >> 0x18 != -1)) &&
           (((&g_bss_003cf528)[val_2] != g_data_0019215c &&
            ((*(byte *)((int)&g_bss_0038c621 + val_2 * 0x10 + 3) & 0xf) != 0xf)))) {
          (&g_bss_003d26c8)[g_bss_003d3668] = val_2;
          g_bss_003d3668 = g_bss_003d3668 + 1;
          (&g_bss_003cf528)[val_2] = g_data_0019215c;
        }
      }
      val_3 = val_3 + 1;
    } while (val_3 < 3);
  } while( true );
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bbec8 (Original VA: 0xbbec8, Ghidra: FUN_000bbec8)
 * Prototype: undefined4 navigate_update_ariadne_navigation_0bbec8(void);
 * Address  : 0xbbec8 (Size: 401 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_update_ariadne_navigation_0bc05c
 * Callees  : 1 -> navigate_insert_point_0b95f0
 ******************************************************************************/
undefined4 navigate_update_ariadne_navigation_0bbec8(void)

{
  int val;
  longlong val_2;
  int arg_eax;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  uint uval;
  uint uval_2;
  int val_7;
  int arg_edx;
  int val_8;
  int val_9;
  int val_10;
  int val_11;
  char ch;
  bool flag;
  bool flag_2;
  
  val_3 = arg_eax * 0x10;
  val_11 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + val_3) * 2) >>
           0x10;
  val = val_3 + (&g_data_00192134)[arg_edx] * 2;
  val_4 = val_3 + (&g_data_00192138)[arg_edx] * 2;
  val_5 = ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 2) >> 0x10) + val_11
          ) / 2;
  val_7 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + val_3) * 4) >>
          0x10;
  val_3 = ((*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 4) >> 0x10) + val_7)
          / 2;
  val_6 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 2) >> 0x10) - val_11;
  val_10 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 4) >> 0x10) - val_7;
  val_8 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 2) >> 0x10) - val_5;
  val_8 = val_8 * val_8;
  val_9 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_4) * 4) >> 0x10) - val_3;
  val_9 = val_9 * val_9;
  if ((val_8 + val_9) * 0x10 < val_6 * val_6 + val_10 * val_10) {
    val_2 = (longlong)val_6 * (longlong)(val_3 - val_7);
    val_3 = (int)((ulonglong)val_2 >> 0x20);
    uval = (uint)val_2;
    val_2 = (longlong)val_10 * (longlong)(val_5 - val_11);
    val_5 = (int)((ulonglong)val_2 >> 0x20);
    uval_2 = (uint)val_2;
    ch = uval != uval_2;
    uval = (uint)(uval < uval_2);
    uval_2 = val_3 - val_5;
    flag_2 = SBORROW4(val_3,val_5) != SBORROW4(uval_2,uval);
    flag = (int)(uval_2 - uval) < 0;
    if (uval_2 != uval) {
      ch = (flag_2 == flag) - (flag_2 != flag);
    }
    if (ch == '\0') {
      navigate_insert_point_0b95f0(val_8,val_9,*(int *)((int)&g_ariadne_nav_state + val) >> 0x10,
                   *(int *)((int)&g_ariadne_nav_state + val_4) >> 0x10);
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bc05c (Original VA: 0xbc05c, Ghidra: FUN_000bc05c)
 * Prototype: undefined8 navigate_update_ariadne_navigation_0bc05c(void);
 * Address  : 0xbc05c (Size: 352 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_fn_0bc1bc
 * Callees  : 1 -> navigate_update_ariadne_navigation_0bbec8
 ******************************************************************************/
undefined8 navigate_update_ariadne_navigation_0bc05c(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  byte flag;
  undefined4 arg_edx;
  int val_3;
  int val_4;
  int local_2c;
  int local_28;
  int local_1c;
  
  val_4 = 0;
  local_2c = 0;
  if (0 < g_bss_0038c5d0) {
    local_28 = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + local_28) >> 0x18 != -1) {
        val = 0;
        local_1c = 0;
        val_2 = local_28;
        do {
          val_3 = *(int *)((int)&g_ariadne_nav_state + val_2) >> 0x10;
          if (val_3 == -1) {
            local_1c = 0;
            break;
          }
          if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == val_4) {
            flag = 0;
          }
          else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == val_4) {
            flag = 1;
          }
          else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == val_4) {
            flag = 2;
          }
          else {
            flag = 0xff;
          }
          if (((*(char *)((int)&g_bss_0038c621 + local_28 + 3) !=
                *(char *)((int)&g_bss_0038c621 + val_3 * 0x10 + 3)) ||
              (((uint)(byte)(&g_bss_0038c625)[local_28] & 1 << ((byte)val & 0x1f)) == 0)) ||
             (((uint)(byte)(&g_bss_0038c625)[val_3 * 0x10] & 1 << (flag & 0x1f)) == 0)) {
            local_1c = local_1c + 1;
          }
          val = val + 1;
          val_2 = val_2 + 2;
        } while (val < 3);
        if ((local_1c == 1) && (val_2 = navigate_update_ariadne_navigation_0bbec8(), val_2 != 0)) {
          local_2c = local_2c + extraout_ECX;
        }
      }
      local_28 = local_28 + 0x10;
      val_4 = val_4 + 1;
    } while (val_4 < g_bss_0038c5d0);
  }
  return CONCAT44(arg_edx,local_2c);
}

/******************************************************************************
 * Function : navigate_fn_0bc1bc (Original VA: 0xbc1bc, Ghidra: FUN_000bc1bc)
 * Prototype: void navigate_fn_0bc1bc(void);
 * Address  : 0xbc1bc (Size: 104 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bc1bc
 * Callers  : 0 -> 
 * Callees  : 3 -> navigate_edge_rotateAC_0b8874, navigate_update_ariadne_navigation_0bb72c, navigate_update_ariadne_navigation_0bc05c
 ******************************************************************************/
void navigate_fn_0bc1bc(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  int val_3;
  int val_4;
  
  do {
    val = navigate_update_ariadne_navigation_0bc05c();
    if (val == 0) {
      return;
    }
    do {
      val_4 = 0;
      val = 0;
      if (0 < g_bss_0038c5d0) {
        val_3 = 0;
        do {
          if (*(int *)((int)&g_bss_0038c621 + val_3) >> 0x18 != -1) {
            val_2 = 0;
            do {
              val = navigate_update_ariadne_navigation_0bb72c();
              if (val != 0) {
                navigate_edge_rotateAC_0b8874();
                val_4 = val_4 + 1;
                val = extraout_ECX_00;
                break;
              }
              val_2 = val_2 + 1;
              val = extraout_ECX;
            } while (val_2 < 3);
          }
          val = val + 1;
          val_3 = val_3 + 0x10;
        } while (val < g_bss_0038c5d0);
      }
    } while (val_4 != 0);
  } while( true );
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bc288 (Original VA: 0xbc288, Ghidra: FUN_000bc288)
 * Prototype: void navigate_update_ariadne_navigation_0bc288(undefined1 param_1);
 * Address  : 0xbc288 (Size: 318 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_fn_0bc3c8
 * Callees  : 1 -> navigate_update_ariadne_navigation_0bb668
 ******************************************************************************/
void navigate_update_ariadne_navigation_0bc288(undefined1 param_1)

{
  int arg_eax;
  int val;
  int arg_ecx;
  int val_2;
  int extraout_ECX;
  int arg_edx;
  int val_3;
  int arg_ebx;
  int val_4;
  int val_5;
  undefined8 uval;
  int local_14;
  
  local_14 = 0;
  val_5 = arg_eax;
  if (arg_ebx < arg_eax) {
    val_5 = arg_ebx;
    arg_ebx = arg_eax;
  }
  val_2 = arg_ecx;
  if (arg_ecx < arg_edx) {
    val_2 = arg_edx;
    arg_edx = arg_ecx;
  }
  val = val_2 - arg_edx;
  val_4 = g_bss_0038c5d0 + -1;
  if (-1 < val_4) {
    val_3 = val_4 * 0x10;
    do {
      if (*(int *)((int)&g_bss_0038c621 + val_3) >> 0x18 != -1) {
        if ((((val_5 <= *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 2) >>
                        0x10) &&
             (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 2) >> 0x10 <=
              arg_ebx)) &&
            (arg_edx <= *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 4) >>
                       0x10)) &&
           (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_3) * 4) >> 0x10 <= val_2)
           ) {
          if (((val_5 <= *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 2) >>
                         0x10) &&
              (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 2) >> 0x10 <=
               arg_ebx)) &&
             ((arg_edx <= *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 4) >>
                         0x10 &&
              (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val_3) * 4) >> 0x10 <=
               val_2)))) {
            if (((val_5 <= *(int *)(&g_bss_003af896 +
                                   (uint)*(ushort *)((int)&g_ariadne_nav_state + val_3) * 2) >> 0x10) &&
                (*(int *)(&g_bss_003af896 + (uint)*(ushort *)((int)&g_ariadne_nav_state + val_3) * 2) >> 0x10
                 <= arg_ebx)) &&
               ((arg_edx <= *(int *)(&g_bss_003af898 +
                                   (uint)*(ushort *)((int)&g_ariadne_nav_state + val_3) * 4) >> 0x10 &&
                (*(int *)(&g_bss_003af898 + (uint)*(ushort *)((int)&g_ariadne_nav_state + val_3) * 4) >> 0x10
                 <= val_2)))) {
              *(undefined1 *)((int)&g_bss_0038c621 + val_3 + 3) = param_1;
              uval = navigate_update_ariadne_navigation_0bb668();
              val_3 = (int)((ulonglong)uval >> 0x20);
              local_14 = local_14 + (int)uval;
              val_2 = extraout_ECX;
              if (local_14 == (arg_ebx - val_5) * 2 * val) {
                return;
              }
            }
          }
        }
      }
      val_4 = val_4 + -1;
      val_3 = val_3 + -0x10;
    } while (-1 < val_4);
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0bc3c8 (Original VA: 0xbc3c8, Ghidra: FUN_000bc3c8)
 * Prototype: void navigate_fn_0bc3c8(void);
 * Address  : 0xbc3c8 (Size: 379 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bc3c8
 * Callers  : 1 -> navigate_fn_0bca9c
 * Callees  : 3 -> navigate_update_ariadne_navigation_0b81c4, navigate_update_ariadne_navigation_0bb668, navigate_update_ariadne_navigation_0bc288
 ******************************************************************************/
void navigate_fn_0bc3c8(void)

{
  int arg_eax;
  int val;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int arg_ebx;
  undefined1 unaff_BP;
  undefined1 unaff_SI;
  undefined4 ***val_2;
  undefined4 ***val_3;
  undefined4 **local_48;
  undefined1 *local_44;
  undefined4 **local_40;
  undefined1 *puStack_3c;
  undefined4 **local_38;
  undefined1 local_34 [4];
  undefined4 **local_30;
  undefined1 local_2c [4];
  undefined4 **local_28;
  undefined4 **local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  
  local_40 = &local_38;
  local_18 = (arg_ebx - arg_eax) * 2 * (arg_ecx - arg_edx);
  puStack_3c = local_34;
  local_44 = (undefined1 *)0xbc404;
  local_14 = arg_edx;
  navigate_update_ariadne_navigation_0b81c4();
  *(undefined1 *)((int)&g_bss_0038c621 + (int)local_40 * 0x10 + 3) = unaff_SI;
  local_44 = (undefined1 *)0xbc420;
  local_18 = navigate_update_ariadne_navigation_0bb668();
  if (local_18 != extraout_ECX) {
    local_44 = local_2c;
    local_48 = &local_30;
    navigate_update_ariadne_navigation_0b81c4();
    if (local_38 != local_48) {
      *(undefined1 *)((int)&g_bss_0038c621 + (int)local_38 * 0x10 + 3) = unaff_BP;
      val = navigate_update_ariadne_navigation_0bb668();
      local_20 = (undefined4 **)((int)local_20 + val);
    }
    if (local_20 != local_28) {
      val_3 = &local_30;
      navigate_update_ariadne_navigation_0b81c4(val_3,local_2c);
      if (((undefined4 ***)local_38 != val_3) && (local_38 != local_40)) {
        *(undefined1 *)((int)&g_bss_0038c621 + (int)local_38 * 0x10 + 3) = (undefined1)local_14;
        val = navigate_update_ariadne_navigation_0bb668();
        local_28 = (undefined4 **)(extraout_ECX_00 + val);
      }
      if (local_28 != local_30) {
        val_2 = &local_48;
        navigate_update_ariadne_navigation_0b81c4(val_2,&local_44);
        if (((val_3 != val_2) && (val_3 != (undefined4 ***)local_48)) &&
           (val_3 != (undefined4 ***)local_40)) {
          *(undefined1 *)((int)&g_bss_0038c621 + (int)val_3 * 0x10 + 3) = local_1c;
          val = navigate_update_ariadne_navigation_0bb668();
          local_30 = (undefined4 **)((int)local_30 + val);
        }
        if (local_30 != local_38) {
          navigate_update_ariadne_navigation_0bc288(local_1c);
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bc544 (Original VA: 0xbc544, Ghidra: FUN_000bc544)
 * Prototype: uint navigate_update_ariadne_navigation_0bc544(void);
 * Address  : 0xbc544 (Size: 149 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 3792
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint navigate_update_ariadne_navigation_0bc544(void)

{
  uint arg_eax;
  uint uval;
  int val;
  int arg_edx;
  uint uval_2;
  
  uval = arg_eax;
  while( true ) {
    if ((*(byte *)((int)&g_bss_0038c621 + uval * 0x10 + 3) & 0xf) == 0xf) {
      return 1;
    }
    uval_2 = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + uval * 0x10) >> 0x10;
    if (uval_2 == 0xffffffff) break;
    if ((int)(&g_ariadne_nav_state)[uval_2 * 4] >> 0x10 == uval) {
      val = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + uval_2 * 0x10 + 2) >> 0x10 == uval) {
      val = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + uval_2 * 0x10) >> 0x10 == uval) {
      val = 2;
    }
    else {
      val = -1;
    }
    arg_edx = (&g_data_00192134)[val];
    uval = uval_2;
    if (uval_2 == arg_eax) {
      return uval_2 ^ arg_eax;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : navigate_fn_0bca9c (Original VA: 0xbca9c, Ghidra: FUN_000bca9c)
 * Prototype: void navigate_fn_0bca9c(undefined1 param_1);
 * Address  : 0xbca9c (Size: 160 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bca9c
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 3 -> navigate_insert_point_0b95f0, navigate_make_edge_0bab7c, navigate_fn_0bc3c8
 ******************************************************************************/
void navigate_fn_0bca9c(undefined1 param_1)

{
  navigate_insert_point_0b95f0();
  navigate_insert_point_0b95f0();
  navigate_insert_point_0b95f0();
  navigate_insert_point_0b95f0();
  navigate_make_edge_0bab7c();
  navigate_make_edge_0bab7c();
  navigate_make_edge_0bab7c();
  navigate_make_edge_0bab7c();
  navigate_fn_0bc3c8(param_1);
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bcb3c (Original VA: 0xbcb3c, Ghidra: FUN_000bcb3c)
 * Prototype: void navigate_update_ariadne_navigation_0bcb3c(void);
 * Address  : 0xbcb3c (Size: 139 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_update_ariadne_navigation_0bcb3c(void)

{
  int val;
  int val_2;
  int val_3;
  int arg_eax;
  int *arg_edx;
  int *arg_ebx;
  
  val = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4);
  val_2 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4);
  val_3 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4);
  *arg_edx = ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10
             ) + (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >>
                 0x10) +
            (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10)) /
            3;
  *arg_ebx = ((val >> 0x10) + (val_2 >> 0x10) + (val_3 >> 0x10)) / 3;
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bcbc8 (Original VA: 0xbcbc8, Ghidra: FUN_000bcbc8)
 * Prototype: void navigate_update_ariadne_navigation_0bcbc8(void);
 * Address  : 0xbcbc8 (Size: 487 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 5 -> navigate_fn_0bcdb0, navigate_triangle_reppoint_0bcddc, navigate_fn_0be524, navigate_tree_to_route_0be760, navigate_pq_remove_0be84c
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_update_ariadne_navigation_0bcbc8(void)

{
  int arg_eax;
  int val;
  int val_2;
  int *arg_edx;
  int val_3;
  int *arg_ebx;
  int val_4;
  
  val = 0;
  val_4 = 0;
  val_2 = 0;
  if (((int)(&g_ariadne_nav_state)[arg_eax * 4] >> 0x10 != -1) &&
     ((*(byte *)((int)&g_bss_0038c621 + ((int)(&g_ariadne_nav_state)[arg_eax * 4] >> 0x10) * 0x10 + 3) & 0xf)
      != 0xf)) {
    val = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10)
            + (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >>
              0x10);
    val_2 = 2;
    val_4 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >> 0x10)
            + (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4) >>
              0x10);
  }
  val_3 = *(int *)((int)&g_ariadne_nav_state + arg_eax * 0x10 + 2) >> 0x10;
  if ((val_3 != -1) && ((*(byte *)((int)&g_bss_0038c621 + val_3 * 0x10 + 3) & 0xf) != 0xf)) {
    val_2 = val_2 + 2;
    val = val + (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2)
                    >> 0x10) +
            (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10);
    val_4 = val_4 + (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4)
                    >> 0x10) +
            (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10);
  }
  if ((*(int *)(&g_bss_0038c620 + arg_eax * 0x10) >> 0x10 != -1) &&
     ((*(byte *)((int)&g_bss_0038c621 + (*(int *)(&g_bss_0038c620 + arg_eax * 0x10) >> 0x10) * 0x10 + 3)
      & 0xf) != 0xf)) {
    val_2 = val_2 + 2;
    val = val + (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >>
                    0x10) +
            (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2) >> 0x10)
    ;
    val_4 = val_4 + (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >>
                    0x10) +
            (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4) >> 0x10)
    ;
  }
  if (val_2 == 0) {
    val = val + (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 2)
                    >> 0x10) +
            (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 2) >> 0x10)
            + (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >> 0x10);
    val_2 = 3;
    val_4 = val_4 + (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10) * 4)
                    >> 0x10) +
            (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + arg_eax * 0x10) * 4) >> 0x10)
            + (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10);
  }
  *arg_edx = (val << 8) / val_2;
  *arg_ebx = (val_4 << 8) / val_2;
  return;
}

/******************************************************************************
 * Function : navigate_fn_0bcdb0 (Original VA: 0xbcdb0, Ghidra: FUN_000bcdb0)
 * Prototype: void navigate_fn_0bcdb0(void);
 * Address  : 0xbcdb0 (Size: 43 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bcdb0
 * Callers  : 0 -> 
 * Callees  : 1 -> navigate_update_ariadne_navigation_0bcbc8
 ******************************************************************************/
void navigate_fn_0bcdb0(void)

{
  int *extraout_ECX;
  int *arg_ebx;
  undefined4 local_10;
  undefined4 local_c;
  
  navigate_update_ariadne_navigation_0bcbc8();
  *extraout_ECX = local_10 >> 8;
  *arg_ebx = local_c >> 8;
  return;
}

/******************************************************************************
 * Function : navigate_triangle_reppoint_0bcddc (Original VA: 0xbcddc, Ghidra: FUN_000bcddc)
 * Prototype: void navigate_triangle_reppoint_0bcddc(void);
 * Address  : 0xbcddc (Size: 374 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 3945, 3969
 * Purpose  : Log prefix 'triangle_reppoint : centre outside'
 * Callers  : 0 -> 
 * Callees  : 3 -> navigate_update_ariadne_navigation_0b74fc, navigate_update_ariadne_navigation_0bcbc8, LbErrorLog
 ******************************************************************************/
void navigate_triangle_reppoint_0bcddc(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int *arg_edx;
  int val_2;
  int val_3;
  int val_4;
  int *arg_ebx;
  int local_20;
  int local_1c;
  
  navigate_update_ariadne_navigation_0bcbc8();
  val = navigate_update_ariadne_navigation_0b74fc();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 3945, "triangle_reppoint : centre outside") */
    val = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + extraout_ECX * 0x10) * 2) >>
            0x10) * 0x100 - local_20;
    val_2 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + extraout_ECX * 0x10) * 4) >>
            0x10) * 0x100 - local_1c;
    val = val * val + val_2 * val_2;
    val_2 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + extraout_ECX * 0x10) * 2) >>
            0x10) * 0x100 - local_20;
    val_3 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + extraout_ECX * 0x10) * 4) >>
            0x10) * 0x100 - local_1c;
    val_2 = val_2 * val_2 + val_3 * val_3;
    val_3 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + extraout_ECX * 4) * 2) >>
            0x10) * 0x100 - local_20;
    val_4 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + extraout_ECX * 4) * 4) >>
            0x10) * 0x100 - local_1c;
    val_3 = val_4 * val_4 + val_3 * val_3;
    if (val < val_2) {
      if (val < val_3) {
        val = 0;
      }
      else {
        val = 2;
      }
    }
    else {
      val = (val_3 <= val_2) + 1;
    }
    local_20 = (*(int *)(&g_bss_003af896 +
                        (uint)*(ushort *)(&g_bss_0038c618 + extraout_ECX_00 * 0x10 + val * 2) * 2)
               >> 0x10) << 8;
    local_1c = (*(int *)(&g_bss_003af898 +
                        (uint)*(ushort *)(&g_bss_0038c618 + extraout_ECX_00 * 0x10 + val * 2) * 4)
               >> 0x10) << 8;
  }
  val = navigate_update_ariadne_navigation_0b74fc();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 3969, "triangle_reppoint:outside triangle") */
  }
  *arg_edx = local_20;
  *arg_ebx = local_1c;
  return;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0bd1ac (Original VA: 0xbd1ac, Ghidra: FUN_000bd1ac)
 * Prototype: void navigate_update_ariadne_navigation_0bd1ac(int *param_1,int *param_2);
 * Address  : 0xbd1ac (Size: 389 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 2 -> navigate_rtp_exceeded_max_path_0c0740, navigate_grtc_exceeded_max_path_0c0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_update_ariadne_navigation_0bd1ac(int *param_1,int *param_2)

{
  int arg_eax;
  int val;
  int *arg_ecx;
  int arg_edx;
  int *arg_ebx;
  undefined1 auStack_5c [80];
  
  val = arg_eax * 0x10;
  if ((int)(&g_ariadne_nav_state)[arg_eax * 4] >> 0x10 == arg_edx) {
    *arg_ebx = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val) * 2) >> 0x10) <<
                 8;
    *arg_ecx = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val) * 4) >> 0x10) << 8;
    *param_1 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 2) >> 0x10) << 8
    ;
    *param_2 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 4) >> 0x10) << 8
    ;
  }
  else {
    if (*(int *)((int)&g_ariadne_nav_state + val + 2) >> 0x10 == arg_edx) {
      *arg_ebx = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >>
                   0x10) << 8;
      *arg_ecx = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >> 0x10
                ) << 8;
      *param_1 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c61a + val) * 2) >> 0x10) <<
                 8;
      *param_2 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c61a + val) * 4) >> 0x10) <<
                 8;
      return;
    }
    if (*(int *)(&g_bss_0038c620 + val) >> 0x10 == arg_edx) {
      *arg_ebx = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 2) >> 0x10)
                   << 8;
      *arg_ecx = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val) * 4) >> 0x10) <<
                8;
      *param_1 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 2) >>
                 0x10) << 8;
      *param_2 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_ariadne_nav_state + arg_eax * 4) * 4) >>
                 0x10) << 8;
      return;
    }
    dk_sprintf(auStack_5c,s_edge_points___edge_not_found__d__0016b5b2);
    LbErrorLog();
  }
  return;
}

/******************************************************************************
 * Function : navigate_edge_points_0bd331 (Original VA: 0xbd331, Ghidra: FUN_000bd331)
 * Prototype: void navigate_edge_points_0bd331(void);
 * Address  : 0xbd331 (Size: 48 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 4078
 * Purpose  : Log prefix 'edge_points : edge not found %d->%d'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
void navigate_edge_points_0bd331(void)

{
  dk_sprintf(&stack0x00000000,s_edge_points___edge_not_found__d__0016b5b2);
  LbErrorLog(); /* LbErrorLog("navigate.cpp", line 4078, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : navigate_fn_0bd370 (Original VA: 0xbd370, Ghidra: FUN_000bd370)
 * Prototype: void navigate_fn_0bd370(void);
 * Address  : 0xbd370 (Size: 102 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 4645
 * Purpose  : Module navigate.cpp procedure @ 0x0bd370
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_fn_0bd370(void)

{
  int val;
  int arg_eax;
  
  g_bss_003d3680 = 9000;
  val = (&g_bss_003d3680)[arg_eax];
  g_bss_003c5830 = 0xffffffff;
  while( true ) {
    if ((int)(&g_bss_003bcb90)[(&g_bss_003d3680)[arg_eax >> 1]] < (int)(&g_bss_003bcb90)[val]) break;
    (&g_bss_003d3680)[arg_eax] = (&g_bss_003d3680)[arg_eax >> 1];
    arg_eax = arg_eax >> 1;
  }
  (&g_bss_003d3680)[arg_eax] = val;
  return;
}

/******************************************************************************
 * Function : navigate_fn_0bd46c (Original VA: 0xbd46c, Ghidra: FUN_000bd46c)
 * Prototype: void navigate_fn_0bd46c(void);
 * Address  : 0xbd46c (Size: 176 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bd46c
 * Callers  : 5 -> navigate_fn_0bd51c, navigate_heap_add_heap_0bd5cc, navigate_heap_add_heap_0bd9b4, navigate_pq_remove_0be3d0, navigate_pq_remove_0be84c
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_fn_0bd46c(void)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  
  val_2 = g_bss_003d367c;
  (&g_bss_003d3684)[g_bss_003d367c] = 9000;
  g_bss_003c5830 = 0x7fffffff;
  val = (&g_bss_003d3680)[arg_eax];
  while (arg_eax <= val_2 >> 1) {
    val_3 = arg_eax * 2;
    if ((int)(&g_bss_003bcb90)[(&g_bss_003d3684)[arg_eax * 2]] <
        (int)(&g_bss_003bcb90)[(&g_bss_003d3680)[arg_eax * 2]]) {
      val_3 = val_3 + 1;
    }
    if ((int)(&g_bss_003bcb90)[val] < (int)(&g_bss_003bcb90)[(&g_bss_003d3680)[val_3]]) break;
    (&g_bss_003d3680)[arg_eax] = (&g_bss_003d3680)[val_3];
    arg_eax = val_3;
  }
  (&g_bss_003d3680)[arg_eax] = val;
  return;
}

/******************************************************************************
 * Function : navigate_fn_0bd51c (Original VA: 0xbd51c, Ghidra: FUN_000bd51c)
 * Prototype: undefined8 navigate_fn_0bd51c(void);
 * Address  : 0xbd51c (Size: 53 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bd51c
 * Callers  : 0 -> 
 * Callees  : 1 -> navigate_fn_0bd46c
 ******************************************************************************/
undefined8 navigate_fn_0bd51c(void)

{
  undefined4 arg_edx;
  undefined4 extraout_EDX;
  
  g_bss_003d3684 = (&g_bss_003d3680)[g_bss_003d367c];
  g_bss_003d367c = g_bss_003d367c + -1;
  navigate_fn_0bd46c();
  return CONCAT44(arg_edx,extraout_EDX);
}

/******************************************************************************
 * Function : navigate_fn_0bd554 (Original VA: 0xbd554, Ghidra: FUN_000bd554)
 * Prototype: undefined8 navigate_fn_0bd554(void);
 * Address  : 0xbd554 (Size: 120 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bd554
 * Callers  : 5 -> navigate_heap_add_heap_0bd5cc, navigate_heap_add_heap_0bd9b4, navigate_dfs_visit_0bdeec, navigate_tree_to_route_0be760, navigate_pq_remove_0be84c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 navigate_fn_0bd554(void)

{
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  undefined4 arg_edx;
  int val_4;
  int val_5;
  
  val_3 = 0xffffff;
  val_2 = arg_eax * 0x10;
  val = val_2 + 6;
  do {
    val_4 = (g_bss_003c5834 >> 8) -
            (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_2) * 2) >> 0x10);
    val_5 = (g_bss_003c5838 >> 8) -
            (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_2) * 4) >> 0x10);
    val_4 = val_5 * val_5 + val_4 * val_4;
    if (val_4 < val_3) {
      val_3 = val_4;
    }
    val_2 = val_2 + 2;
  } while (val_2 != val);
  return CONCAT44(arg_edx,val_3);
}

/******************************************************************************
 * Function : navigate_heap_add_heap_0bd5cc (Original VA: 0xbd5cc, Ghidra: FUN_000bd5cc)
 * Prototype: int navigate_heap_add_heap_0bd5cc(void);
 * Address  : 0xbd5cc (Size: 998 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 994, 995, 996, 4645
 * Purpose  : String 'navigate.heap_add : heap overflow'
 * Callers  : 1 -> navigate_fn_0bdd9c
 * Callees  : 5 -> navigate_fn_0b5550, navigate_fn_0bd46c, navigate_fn_0bd554, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
int navigate_heap_add_heap_0bd5cc(void)

{
  int *int_ptr;
  char ch;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int val_4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_edx;
  int *arg_ebx;
  uint uval;
  undefined8 uval_2;
  int local_24;
  int local_1c;
  int local_10;
  
  g_data_0019215c = g_data_0019215c + '\x01';
  g_bss_003d367c = 0;
  if (g_data_0019215c == '\0') {
    LbScreenWaitVbi();
    g_data_0019215c = '\x01';
  }
  ch = g_data_0019215c;
  if (0 < g_bss_003d23a0) {
    val_2 = g_bss_003d23a0 * 4;
    val = 0;
    do {
      int_ptr = (int *)((int)&g_bss_003d2210 + val);
      val = val + 4;
      (&g_bss_003cf528)[*int_ptr] = ch;
    } while (val < val_2);
  }
  val = g_bss_003d367c + 1;
  (&g_bss_003bcb90)[arg_edx] = 1;
  *(int *)(&g_bss_003b3ef0 + arg_edx * 4) = arg_edx;
  g_bss_003d367c = val;
  (&g_bss_003cf528)[arg_edx] = g_data_0019215c;
  val_2 = arg_edx;
  if (0xff < val) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
    val_2 = extraout_ECX;
  }
  val = g_bss_003d367c;
  (&g_bss_003d3680)[g_bss_003d367c] = val_2;
  g_bss_003c5830 = 0xffffffff;
  g_bss_003d3680 = 9000;
  val_2 = (&g_bss_003d3680)[val];
  while( true ) {
    if ((int)(&g_bss_003bcb90)[(&g_bss_003d3680)[val >> 1]] < (int)(&g_bss_003bcb90)[val_2]) break;
    (&g_bss_003d3680)[val] = (&g_bss_003d3680)[val >> 1];
    val = val >> 1;
  }
  (&g_bss_003d3680)[val] = val_2;
  val_2 = g_bss_003d3684;
  while ((local_1c = val_2, g_bss_003d3684 = local_1c, arg_eax != local_1c && (g_bss_003d367c != 0))) {
    g_bss_003d3684 = (&g_bss_003d3680)[g_bss_003d367c];
    g_bss_003d367c = g_bss_003d367c + -1;
    navigate_fn_0bd46c();
    if (g_bss_003d367c == 0) {
      local_24 = -1;
    }
    else {
      local_24 = g_bss_003d3684;
      if (g_bss_003d3684 == arg_eax) break;
      g_bss_003d3684 = (&g_bss_003d3680)[g_bss_003d367c];
      g_bss_003d367c = g_bss_003d367c + -1;
      navigate_fn_0bd46c();
    }
    while( true ) {
      val_2 = local_1c * 0x10;
      val = val_2 + 6;
      local_10 = 0;
      do {
        if (g_data_0019215c != (&g_bss_003cf528)[*(int *)((int)&g_ariadne_nav_state + val_2) >> 0x10]) {
          uval = (uint)((&g_bss_0038c626)[local_1c * 8] & 0x3f) |
                  *(uint *)((int)&g_data_00192060 + local_10);
          if (((g_bss_003d1b54 != &g_bss_003d1854) && (g_bss_003d1b54 != &g_bss_003d1954)) &&
             (g_bss_003d1b54 != &g_bss_003d1a54)) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 994, "fits_thro:table err") */
          }
          if (g_bss_003d1b58 != 1) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 995, "fits_thro:uninit") */
          }
          if (0x3f < uval) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 996, "edgebits:overflow") */
          }
          if ((g_bss_003d1b54[uval] != 0) &&
             (val_3 = (*(code *)PTR_FUN_000b5550_0019212c)(), val_3 != 0)) {
            uval_2 = navigate_fn_0bd554();
            ch = g_data_0019215c;
            val_3 = (int)uval_2;
            if ((int)((ulonglong)uval_2 >> 0x20) == 2) {
              val_3 = val_3 << 4;
            }
            (&g_bss_003bcb90)[extraout_ECX_00] = val_3;
            val_4 = g_bss_003d367c + 1;
            (&g_bss_003cf528)[extraout_ECX_00] = ch;
            g_bss_003d367c = val_4;
            *(int *)(&g_bss_003b3ef0 + extraout_ECX_00 * 4) = local_1c;
            val_3 = extraout_ECX_00;
            if (0xff < val_4) {
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
              val_3 = extraout_ECX_01;
            }
            val_4 = g_bss_003d367c;
            (&g_bss_003d3680)[g_bss_003d367c] = val_3;
            g_bss_003d3680 = 9000;
            val_3 = (&g_bss_003d3680)[val_4];
            g_bss_003c5830 = 0xffffffff;
            while( true ) {
              if ((int)(&g_bss_003bcb90)[(&g_bss_003d3680)[val_4 >> 1]] < (int)(&g_bss_003bcb90)[val_3])
              break;
              (&g_bss_003d3680)[val_4] = (&g_bss_003d3680)[val_4 >> 1];
              val_4 = val_4 >> 1;
            }
            (&g_bss_003d3680)[val_4] = val_3;
          }
        }
        local_10 = local_10 + 4;
        val_2 = val_2 + 2;
      } while (val_2 != val);
      local_1c = local_24;
      val_2 = g_bss_003d3684;
      if (local_24 == -1) break;
      local_24 = -1;
    }
  }
  if (g_bss_003d367c == 0) {
    val_2 = -1;
  }
  else {
    val_2 = 0;
    for (; *arg_ebx = arg_eax, arg_eax != arg_edx; arg_eax = *(int *)(&g_bss_003b3ef0 + arg_eax * 4)) {
      arg_ebx = arg_ebx + 1;
      val_2 = val_2 + 1;
    }
  }
  return val_2;
}

/******************************************************************************
 * Function : navigate_heap_add_heap_0bd9b4 (Original VA: 0xbd9b4, Ghidra: FUN_000bd9b4)
 * Prototype: int navigate_heap_add_heap_0bd9b4(void);
 * Address  : 0xbd9b4 (Size: 998 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 994, 995, 996, 4645
 * Purpose  : String 'navigate.heap_add : heap overflow'
 * Callers  : 1 -> navigate_fn_0bdd9c
 * Callees  : 5 -> navigate_fn_0b5550, navigate_fn_0bd46c, navigate_fn_0bd554, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
int navigate_heap_add_heap_0bd9b4(void)

{
  int *int_ptr;
  char ch;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int val_4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_edx;
  int *arg_ebx;
  uint uval;
  undefined8 uval_2;
  int local_24;
  int local_1c;
  int local_10;
  
  g_data_0019215c = g_data_0019215c + '\x01';
  g_bss_003d367c = 0;
  if (g_data_0019215c == '\0') {
    LbScreenWaitVbi();
    g_data_0019215c = '\x01';
  }
  ch = g_data_0019215c;
  if (0 < g_bss_003d23a0) {
    val_2 = g_bss_003d23a0 * 4;
    val = 0;
    do {
      int_ptr = (int *)((int)&g_bss_003d2210 + val);
      val = val + 4;
      (&g_bss_003cf528)[*int_ptr] = ch;
    } while (val < val_2);
  }
  val = g_bss_003d367c + 1;
  (&g_bss_003bcb90)[arg_edx] = 1;
  *(int *)(&g_bss_003b3ef0 + arg_edx * 4) = arg_edx;
  g_bss_003d367c = val;
  (&g_bss_003cf528)[arg_edx] = g_data_0019215c;
  val_2 = arg_edx;
  if (0xff < val) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
    val_2 = extraout_ECX;
  }
  val = g_bss_003d367c;
  (&g_bss_003d3680)[g_bss_003d367c] = val_2;
  g_bss_003c5830 = 0xffffffff;
  g_bss_003d3680 = 9000;
  val_2 = (&g_bss_003d3680)[val];
  while( true ) {
    if ((int)(&g_bss_003bcb90)[(&g_bss_003d3680)[val >> 1]] < (int)(&g_bss_003bcb90)[val_2]) break;
    (&g_bss_003d3680)[val] = (&g_bss_003d3680)[val >> 1];
    val = val >> 1;
  }
  (&g_bss_003d3680)[val] = val_2;
  val_2 = g_bss_003d3684;
  while ((local_1c = val_2, g_bss_003d3684 = local_1c, arg_eax != local_1c && (g_bss_003d367c != 0))) {
    g_bss_003d3684 = (&g_bss_003d3680)[g_bss_003d367c];
    g_bss_003d367c = g_bss_003d367c + -1;
    navigate_fn_0bd46c();
    if (g_bss_003d367c == 0) {
      local_24 = -1;
    }
    else {
      local_24 = g_bss_003d3684;
      if (g_bss_003d3684 == arg_eax) break;
      g_bss_003d3684 = (&g_bss_003d3680)[g_bss_003d367c];
      g_bss_003d367c = g_bss_003d367c + -1;
      navigate_fn_0bd46c();
    }
    while( true ) {
      val_2 = local_1c * 0x10;
      val = val_2 + 6;
      local_10 = 0;
      do {
        if (g_data_0019215c != (&g_bss_003cf528)[*(int *)((int)&g_ariadne_nav_state + val_2) >> 0x10]) {
          uval = (uint)((&g_bss_0038c626)[local_1c * 8] & 0x3f) |
                  *(uint *)((int)&g_data_00192060 + local_10);
          if (((g_bss_003d1b54 != &g_bss_003d1854) && (g_bss_003d1b54 != &g_bss_003d1954)) &&
             (g_bss_003d1b54 != &g_bss_003d1a54)) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 994, "fits_thro:table err") */
          }
          if (g_bss_003d1b58 != 1) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 995, "fits_thro:uninit") */
          }
          if (0x3f < uval) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 996, "edgebits:overflow") */
          }
          if ((g_bss_003d1b54[uval] != 0) &&
             (val_3 = (*(code *)PTR_FUN_000b5550_0019212c)(), val_3 != 0)) {
            uval_2 = navigate_fn_0bd554();
            ch = g_data_0019215c;
            val_3 = (int)uval_2;
            if ((int)((ulonglong)uval_2 >> 0x20) == 2) {
              val_3 = val_3 << 4;
            }
            (&g_bss_003bcb90)[extraout_ECX_00] = val_3;
            val_4 = g_bss_003d367c + 1;
            (&g_bss_003cf528)[extraout_ECX_00] = ch;
            g_bss_003d367c = val_4;
            *(int *)(&g_bss_003b3ef0 + extraout_ECX_00 * 4) = local_1c;
            val_3 = extraout_ECX_00;
            if (0xff < val_4) {
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
              val_3 = extraout_ECX_01;
            }
            val_4 = g_bss_003d367c;
            (&g_bss_003d3680)[g_bss_003d367c] = val_3;
            g_bss_003d3680 = 9000;
            val_3 = (&g_bss_003d3680)[val_4];
            g_bss_003c5830 = 0xffffffff;
            while( true ) {
              if ((int)(&g_bss_003bcb90)[(&g_bss_003d3680)[val_4 >> 1]] < (int)(&g_bss_003bcb90)[val_3])
              break;
              (&g_bss_003d3680)[val_4] = (&g_bss_003d3680)[val_4 >> 1];
              val_4 = val_4 >> 1;
            }
            (&g_bss_003d3680)[val_4] = val_3;
          }
        }
        local_10 = local_10 + 4;
        val_2 = val_2 + 2;
      } while (val_2 != val);
      local_1c = local_24;
      val_2 = g_bss_003d3684;
      if (local_24 == -1) break;
      local_24 = -1;
    }
  }
  if (g_bss_003d367c == 0) {
    val_2 = -1;
  }
  else {
    val_2 = 0;
    for (; *arg_ebx = arg_eax, arg_eax != arg_edx; arg_eax = *(int *)(&g_bss_003b3ef0 + arg_eax * 4)) {
      arg_ebx = arg_ebx + 1;
      val_2 = val_2 + 1;
    }
  }
  return val_2;
}

/******************************************************************************
 * Function : navigate_fn_0bdd9c (Original VA: 0xbdd9c, Ghidra: FUN_000bdd9c)
 * Prototype: undefined * navigate_fn_0bdd9c(void);
 * Address  : 0xbdd9c (Size: 336 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bdd9c
 * Callers  : 2 -> navigate_fn_0c1ecc, navigate_path_init8_0c241c
 * Callees  : 3 -> navigate_heap_add_heap_0bd5cc, navigate_heap_add_heap_0bd9b4, navigate_rtp_exceeded_max_path_0c0740
 ******************************************************************************/
undefined * navigate_fn_0bdd9c(void)

{
  undefined4 uval;
  undefined4 uval_2;
  undefined *word_ptr;
  int loop_i;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  undefined *word_ptr_4;
  undefined *word_ptr_5;
  undefined *local_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_1c [8];
  undefined *local_14;
  
  flag = 0;
  puStack_20 = (undefined1 *)0xbddb5;
  local_28 = (undefined *)navigate_heap_add_heap_0bd5cc();
  word_ptr_5 = local_28;
  if (local_28 != (undefined *)0xffffffff) {
    puStack_24 = &g_bss_003ce500;
    puStack_20 = auStack_1c;
    local_14 = local_28;
    navigate_rtp_exceeded_max_path_0c0740(&g_bss_003c8740);
    uval_2 = g_bss_003c5838;
    uval = g_bss_003c5834;
    g_bss_003c5834 = g_bss_003c583c;
    g_bss_003c583c = uval;
    g_bss_003c5838 = g_bss_003c5840;
    g_bss_003c5840 = uval_2;
    word_ptr = (undefined *)navigate_heap_add_heap_0bd9b4();
    word_ptr_5 = word_ptr;
    if (word_ptr != (undefined *)0xffffffff) {
      word_ptr_5 = &g_bss_003ced14;
      word_ptr_4 = &g_bss_003cb620;
      navigate_rtp_exceeded_max_path_0c0740(&g_bss_003cb620,word_ptr,&g_bss_003ced14,&local_28);
      uval_2 = g_bss_003c5838;
      uval = g_bss_003c5834;
      g_bss_003c5834 = g_bss_003c583c;
      g_bss_003c583c = uval;
      g_bss_003c5838 = g_bss_003c5840;
      g_bss_003c5840 = uval_2;
      if (SBORROW4((int)word_ptr_4,(int)word_ptr_4)) {
        word_ptr_2 = &g_bss_003c8740;
        word_ptr_3 = &g_bss_003c5860;
        for (loop_i = 3000; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
          word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
      }
      else {
        word_ptr_5 = word_ptr;
        if (-1 < (int)word_ptr) {
          loop_i = (int)word_ptr * 4;
          word_ptr_2 = &g_bss_003c5860;
          do {
            word_ptr_3 = (undefined4 *)(&g_bss_003cb620 + loop_i);
            loop_i = loop_i + -4;
            *word_ptr_2 = *word_ptr_3;
            word_ptr_2 = word_ptr_2 + 1;
          } while (-1 < loop_i);
        }
      }
    }
  }
  return word_ptr_5;
}

/******************************************************************************
 * Function : navigate_dfs_visit_0bdeec (Original VA: 0xbdeec, Ghidra: FUN_000bdeec)
 * Prototype: void navigate_dfs_visit_0bdeec(void);
 * Address  : 0xbdeec (Size: 1060 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5168, 5175
 * Purpose  : Log prefix 'dfs_visit : overflow'
 * Callers  : 1 -> navigate_tree_to_route_0bec84
 * Callees  : 4 -> navigate_fn_0b5550, navigate_fn_0bd554, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
void navigate_dfs_visit_0bdeec(void)

{
  undefined4 uval;
  undefined4 uval_2;
  undefined4 uval_3;
  undefined4 uval_4;
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int val_3;
  int val_4;
  int val_5;
  undefined8 uval_5;
  int aiStack_30 [4];
  int local_20;
  int local_1c;
  
  g_data_0019215c = g_data_0019215c + '\x01';
  if (g_data_0019215c == '\0') {
    aiStack_30[0] = 0xbdf19;
    LbScreenWaitVbi();
    g_data_0019215c = '\x01';
  }
  val_3 = g_bss_003c584c;
  (&g_bss_003cf528)[arg_eax] = g_data_0019215c;
  *(undefined4 *)(&g_bss_003b3ef0 + arg_eax * 4) = 0xffffffff;
  if (arg_eax != val_3) {
    val_3 = 0;
    val_5 = arg_eax << 4;
    g_bss_003d59c8 = 0;
    do {
      val_2 = *(int *)((int)&g_ariadne_nav_state + val_5) >> 0x10;
      if ((val_2 != -1) && (g_data_0019215c != (&g_bss_003cf528)[val_2])) {
        aiStack_30[0] = 0xbdf9a;
        val_2 = (*(code *)PTR_FUN_000b5550_0019212c)();
        if (val_2 != 0) {
          aiStack_30[0] = 0xbdfa5;
          val_2 = navigate_fn_0bd554();
          g_bss_003d59c8 = g_bss_003d59c8 + 1;
          *(int *)(g_bss_003d59c8 * 4 + 0x3d3a84) = arg_eax;
          *(int *)(g_bss_003d59c8 * 4 + 0x3d4a24) = val_3;
          aiStack_30[g_bss_003d59c8] = val_2;
        }
      }
      val_2 = aiStack_30[1];
      uval_2 = g_bss_003d4a28;
      uval = g_bss_003d3a88;
      val_3 = val_3 + 1;
      val_5 = val_5 + 2;
    } while (val_3 < 3);
    if ((1 < g_bss_003d59c8) && (aiStack_30[1] < aiStack_30[2])) {
      g_bss_003d3a88 = g_bss_003d3a8c;
      g_bss_003d3a8c = uval;
      g_bss_003d4a28 = g_bss_003d4a2c;
      g_bss_003d4a2c = uval_2;
      aiStack_30[1] = aiStack_30[2];
      aiStack_30[2] = val_2;
    }
    val_5 = aiStack_30[2];
    val_3 = aiStack_30[1];
    uval_4 = g_bss_003d4a2c;
    uval_3 = g_bss_003d4a28;
    uval_2 = g_bss_003d3a8c;
    uval = g_bss_003d3a88;
    if ((2 < g_bss_003d59c8) && (aiStack_30[1] < aiStack_30[3])) {
      g_bss_003d3a88 = g_bss_003d3a90;
      g_bss_003d3a90 = uval;
      g_bss_003d4a28 = g_bss_003d4a30;
      g_bss_003d4a30 = uval_3;
      aiStack_30[1] = aiStack_30[3];
      aiStack_30[3] = val_3;
    }
    if ((2 < g_bss_003d59c8) && (aiStack_30[2] < aiStack_30[3])) {
      g_bss_003d3a8c = g_bss_003d3a90;
      g_bss_003d3a90 = uval_2;
      g_bss_003d4a2c = g_bss_003d4a30;
      g_bss_003d4a30 = uval_4;
      aiStack_30[2] = aiStack_30[3];
      aiStack_30[3] = val_5;
    }
    if (g_bss_003d59c8 != 0) {
      g_bss_003d59c8 = g_bss_003d59c8 + -1;
      val_3 = (&g_bss_003d3a88)[g_bss_003d59c8];
      val_5 = (&g_bss_003d4a28)[g_bss_003d59c8];
      if (val_3 != g_bss_003c584c) {
        do {
          val_2 = *(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_3 * 0x10) >> 0x10;
          (&g_bss_003cf528)[val_2] = g_data_0019215c;
          val_5 = (&g_ariadne_nav_state)[val_2 * 4];
          *(int *)(&g_bss_003b3ef0 + val_2 * 4) = val_3;
          if (val_5 >> 0x10 == val_3) {
            val = 0;
          }
          else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val_3) {
            val = 1;
          }
          else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == val_3) {
            val = 2;
          }
          else {
            val = -1;
          }
          val_4 = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192138)[val] * 2 + val_2 * 0x10) >> 0x10;
          val_5 = 0;
          val_3 = val_2;
          if ((val_4 != -1) && (g_data_0019215c != (&g_bss_003cf528)[val_4])) {
            aiStack_30[0] = 0xbe18b;
            val_5 = (*(code *)PTR_FUN_000b5550_0019212c)();
            val_3 = extraout_ECX;
          }
          local_1c = 0;
          val_2 = *(int *)((int)&g_ariadne_nav_state + (&g_data_00192134)[val] * 2 + val_3 * 0x10) >> 0x10;
          if ((val_2 != -1) && ((&g_bss_003cf528)[val_2] != g_data_0019215c)) {
            local_20 = (int)(&g_bss_0038c621)[val_2 * 4] >> 0x18;
            aiStack_30[0] = 0xbe1e1;
            local_1c = (*(code *)PTR_FUN_000b5550_0019212c)();
            val_3 = extraout_ECX_00;
          }
          if ((val_5 == 0) || (local_1c == 0)) {
            if (val_5 == 0) {
              if (local_1c == 0) {
                if (g_bss_003d59c8 == 0) {
                  return;
                }
                g_bss_003d59c8 = g_bss_003d59c8 + -1;
                val_3 = (&g_bss_003d3a88)[g_bss_003d59c8];
                val_5 = (&g_bss_003d4a28)[g_bss_003d59c8];
              }
              else {
                val_5 = (&g_data_00192134)[val];
              }
            }
            else {
              val_5 = (&g_data_00192138)[val];
            }
          }
          else {
            aiStack_30[0] = 0xbe1ff;
            navigate_fn_0bd554();
            aiStack_30[0] = 0xbe208;
            uval_5 = navigate_fn_0bd554();
            val_3 = extraout_ECX_01;
            if ((int)((ulonglong)uval_5 >> 0x20) < (int)uval_5) {
              if (999 < g_bss_003d59c8) {
                aiStack_30[0] = 0xbe22c;
                LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5168, "dfs_visit : overflow") */
                val_3 = extraout_ECX_02;
              }
              uval = (&g_data_00192134)[val];
              val_5 = (&g_data_00192138)[val];
              (&g_bss_003d3a88)[g_bss_003d59c8] = val_3;
              (&g_bss_003d4a28)[g_bss_003d59c8] = uval;
              g_bss_003d59c8 = g_bss_003d59c8 + 1;
            }
            else {
              if (999 < g_bss_003d59c8) {
                aiStack_30[0] = 0xbe281;
                LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5175, "dfs_visit : overflow") */
                val_3 = extraout_ECX_03;
              }
              val_2 = g_bss_003d59c8;
              val_5 = (&g_data_00192134)[val];
              (&g_bss_003d4a28)[g_bss_003d59c8] = (&g_data_00192138)[val];
              (&g_bss_003d3a88)[val_2] = val_3;
              g_bss_003d59c8 = g_bss_003d59c8 + 1;
            }
          }
        } while (val_3 != g_bss_003c584c);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_tree_to_route_0be310 (Original VA: 0xbe310, Ghidra: FUN_000be310)
 * Prototype: int navigate_tree_to_route_0be310(void);
 * Address  : 0xbe310 (Size: 95 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5220
 * Purpose  : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
int navigate_tree_to_route_0be310(void)

{
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  int *arg_ebx;
  int val;
  
  if (g_data_0019215c == (&g_bss_003cf528)[arg_eax]) {
    val = 0;
    for (; arg_eax != arg_edx; arg_eax = *(int *)(&g_bss_003b3ef0 + arg_eax * 4)) {
      val = val + 1;
      *arg_ebx = arg_eax;
      if (2999 < val) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        arg_eax = extraout_ECX;
      }
      arg_ebx = arg_ebx + 1;
    }
    *arg_ebx = arg_edx;
    return val;
  }
  return -1;
}

/******************************************************************************
 * Function : navigate_pq_remove_0be3d0 (Original VA: 0xbe3d0, Ghidra: FUN_000be3d0)
 * Prototype: undefined8 navigate_pq_remove_0be3d0(void);
 * Address  : 0xbe3d0 (Size: 97 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 4645, 5306
 * Purpose  : Log prefix 'pq_remove : empty Q'
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_fn_0bd46c, LbErrorLog
 ******************************************************************************/
undefined8 navigate_pq_remove_0be3d0(void)

{
  undefined4 arg_edx;
  undefined4 extraout_EDX;
  
  if (g_bss_003d59cc == 0) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5306, "pq_remove : empty Q") */
  }
  g_bss_003d59cc = g_bss_003d59cc + -1;
  g_bss_003d3684 = (&g_bss_003d3680)[g_bss_003d367c];
  g_bss_003d367c = g_bss_003d367c + -1;
  navigate_fn_0bd46c();
  return CONCAT44(arg_edx,extraout_EDX);
}

/******************************************************************************
 * Function : navigate_fn_0be524 (Original VA: 0xbe524, Ghidra: FUN_000be524)
 * Prototype: void navigate_fn_0be524(void);
 * Address  : 0xbe524 (Size: 129 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5220
 * Purpose  : Module navigate.cpp procedure @ 0x0be524
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_update_ariadne_navigation_0bcbc8, bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void navigate_fn_0be524(void)

{
  int val;
  int val_2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  navigate_update_ariadne_navigation_0bcbc8();
  val = local_1c >> 8;
  val_2 = local_18 >> 8;
  navigate_update_ariadne_navigation_0bcbc8(val,val_2);
  bflib_system_io_fn_0e8cc8(val,val_2,local_14 >> 8,local_10 >> 8);
  return;
}

/******************************************************************************
 * Function : navigate_tree_to_route_0be760 (Original VA: 0xbe760, Ghidra: FUN_000be760)
 * Prototype: int navigate_tree_to_route_0be760(void);
 * Address  : 0xbe760 (Size: 236 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5220
 * Purpose  : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 4 -> navigate_update_ariadne_navigation_0bcbc8, navigate_fn_0bd554, navigate_rtp_exceeded_max_path_0c0740, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int navigate_tree_to_route_0be760(void)

{
  int *int_ptr;
  int val;
  int arg_eax;
  int val_2;
  int extraout_ECX;
  int arg_edx;
  undefined8 uval;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  
  local_20 = arg_edx;
  local_1c = arg_eax;
  if (arg_edx != g_bss_003c584c) {
    navigate_update_ariadne_navigation_0bcbc8();
  }
  val = g_bss_003c5850;
  if ((&g_bss_003cf528)[local_1c] == g_data_0019215c) {
    val_2 = 0;
    int_ptr = &g_bss_003896e0;
    for (; val != local_1c; local_1c = *(int *)(&g_bss_003b3ef0 + local_1c * 4)) {
      val_2 = val_2 + 1;
      *int_ptr = local_1c;
      if (2999 < val_2) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        local_1c = extraout_ECX;
      }
      int_ptr = int_ptr + 1;
    }
    *int_ptr = val;
  }
  else {
    val_2 = -1;
  }
  g_bss_003896dc = local_20;
  navigate_rtp_exceeded_max_path_0c0740(&g_bss_003896dc,val_2 + 1,&g_bss_00388ec8,local_24);
  uval = navigate_fn_0bd554();
  return (int)uval + (int)((ulonglong)uval >> 0x20);
}

/******************************************************************************
 * Function : navigate_pq_remove_0be84c (Original VA: 0xbe84c, Ghidra: FUN_000be84c)
 * Prototype: void navigate_pq_remove_0be84c(void);
 * Address  : 0xbe84c (Size: 1080 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 4645, 5220, 5306
 * Purpose  : Log prefix 'pq_remove : empty Q'
 * Callers  : 1 -> navigate_tree_to_route_0bed00
 * Callees  : 7 -> navigate_fn_0b5550, navigate_update_ariadne_navigation_0bcbc8, navigate_fn_0bd46c, navigate_fn_0bd554, navigate_rtp_exceeded_max_path_0c0740, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
/* WARNING: Heritage AFTER dead removal. Example location: r0x003d3680 : 0x000be904 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void navigate_pq_remove_0be84c(void)

{
  bool flag;
  char ch;
  int arg_eax;
  int val;
  int loop_i;
  int extraout_ECX;
  int val_2;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *word_ptr;
  int extraout_EDX;
  int val_3;
  int *int_ptr;
  undefined8 uval;
  int aiStack_5c [17];
  
  word_ptr = &g_bss_003bcb90;
  val = 8999;
  do {
    val = val + -1;
    *word_ptr = 0x80000001;
    word_ptr = word_ptr + 1;
  } while (-1 < val);
  g_data_0019215c = g_data_0019215c + '\x01';
  if (g_data_0019215c == '\0') {
    LbScreenWaitVbi();
    g_data_0019215c = '\x01';
  }
  g_bss_003d367c = 0;
  g_bss_003d59cc = 0;
  if ((&g_bss_003bcb90)[arg_eax] == -0x7fffffff) {
    g_bss_003d59cc = 1;
    g_bss_003d367c = 1;
    g_bss_003d3684 = arg_eax;
    (&g_bss_003bcb90)[arg_eax] = 0xffffffff;
    g_bss_003d3680 = 9000;
    g_bss_003c5830 = 0xffffffff;
    val = 1;
    while ((int)(&g_bss_003bcb90)[arg_eax] <= (int)(&g_bss_003bcb90)[g_bss_003d3680]) {
      (&g_bss_003d3680)[val] = g_bss_003d3680;
      val = 0;
    }
    (&g_bss_003d3680)[val] = arg_eax;
    flag = true;
  }
  else if ((int)(&g_bss_003bcb90)[arg_eax] < -1) {
    flag = true;
    (&g_bss_003bcb90)[arg_eax] = 0xffffffff;
  }
  else {
    flag = false;
  }
  ch = g_data_0019215c;
  int_ptr = aiStack_5c + 5;
  if (flag) {
    *(undefined4 *)(&g_bss_003b3ef0 + arg_eax * 4) = 0xffffffff;
    (&g_bss_003cf528)[arg_eax] = ch;
    int_ptr = aiStack_5c + 5;
  }
  do {
    if (g_bss_003d59cc == 0) {
      *(undefined4 *)((int)int_ptr + -4) = 0xbe984;
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5306, "pq_remove : empty Q") */
    }
    g_bss_003d59cc = g_bss_003d59cc + -1;
    val = (&g_bss_003d3680)[g_bss_003d367c];
    *(int *)((int)int_ptr + 0x20) = g_bss_003d3684;
    *(undefined4 *)((int)int_ptr + -4) = 0xbe9c3;
    g_bss_003d367c = g_bss_003d367c + -1;
    g_bss_003d3684 = val;
    navigate_fn_0bd46c();
    loop_i = g_bss_003c584c;
    val = (&g_bss_003bcb90)[extraout_EDX];
    (&g_bss_003bcb90)[extraout_EDX] = -val;
    if (extraout_EDX == loop_i) {
      return;
    }
    if (val == -0x7fffffff) {
      (&g_bss_003bcb90)[extraout_EDX] = 0;
    }
    val = *(int *)((int)int_ptr + 0x20) * 0x10;
    *(int *)((int)int_ptr + 0x14) = val;
    *(int *)((int)int_ptr + 0x28) = val;
    *(int *)((int)int_ptr + 0x10) = val + 6;
    word_ptr = int_ptr;
    do {
      if (*(int *)((int)&g_ariadne_nav_state + word_ptr[10]) >> 0x10 == -1) {
        val = -1;
      }
      else {
        word_ptr[-1] = 0xbea32;
        loop_i = (*(code *)PTR_FUN_000b5550_0019212c)();
        val = extraout_ECX;
        if (loop_i == 0) {
          val = -1;
        }
      }
      word_ptr[0xb] = val;
      int_ptr = word_ptr;
      if ((val != -1) && ((int)(&g_bss_003bcb90)[val] < 0)) {
        word_ptr[7] = val;
        word_ptr[6] = val;
        word_ptr[9] = word_ptr[8];
        if (val == g_bss_003c584c) {
          *word_ptr = g_bss_003c5834;
          word_ptr[1] = g_bss_003c5838;
        }
        else {
          word_ptr[-1] = 0xbea7f;
          navigate_update_ariadne_navigation_0bcbc8();
        }
        val = g_bss_003c5850;
        if ((&g_bss_003cf528)[word_ptr[9]] == g_data_0019215c) {
          val_2 = 0;
          int_ptr = &g_bss_003896e0;
          for (loop_i = word_ptr[9]; val != loop_i; loop_i = *(int *)(&g_bss_003b3ef0 + loop_i * 4)) {
            val_2 = val_2 + 1;
            *int_ptr = loop_i;
            if (2999 < val_2) {
              word_ptr[-1] = 0xbeae5;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
              loop_i = extraout_ECX_00;
            }
            int_ptr = int_ptr + 1;
          }
          *int_ptr = val;
        }
        else {
          val_2 = -1;
        }
        g_bss_003896dc = word_ptr[6];
        word_ptr[-1] = word_ptr + 2;
        word_ptr[-2] = &g_bss_00388ec8;
        word_ptr[-3] = val_2 + 1;
        word_ptr[-4] = &g_bss_003896dc;
        word_ptr[-5] = 0xbeb27;
        navigate_rtp_exceeded_max_path_0c0740();
        word_ptr[-5] = 0xbeb37;
        uval = navigate_fn_0bd554();
        val = (int)uval + (int)((ulonglong)uval >> 0x20) + 1;
        loop_i = word_ptr[7];
        val_2 = (&g_bss_003bcb90)[loop_i];
        if (val_2 == -0x7fffffff) {
          val_2 = word_ptr[7];
          g_bss_003d59cc = g_bss_003d59cc + 1;
          g_bss_003d367c = g_bss_003d367c + 1;
          (&g_bss_003bcb90)[loop_i] = -val;
          if (0xff < g_bss_003d367c) {
            word_ptr[-5] = 0xbeb97;
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
            val_2 = extraout_ECX_01;
          }
          loop_i = g_bss_003d367c;
          (&g_bss_003d3680)[g_bss_003d367c] = val_2;
          g_bss_003d3680 = 9000;
          g_bss_003c5830 = 0xffffffff;
          val = (&g_bss_003d3680)[loop_i];
          while( true ) {
            if ((int)(&g_bss_003bcb90)[(&g_bss_003d3680)[loop_i >> 1]] < (int)(&g_bss_003bcb90)[val])
            break;
            (&g_bss_003d3680)[loop_i] = (&g_bss_003d3680)[loop_i >> 1];
            loop_i = loop_i >> 1;
          }
          flag = true;
          (&g_bss_003d3680)[loop_i] = val;
        }
        else {
          val_3 = -val;
          if ((val_3 < 0) && (-val_2 != val && val_2 <= val_3)) {
            (&g_bss_003bcb90)[loop_i] = val_3;
            flag = true;
          }
          else {
            flag = false;
          }
        }
        int_ptr = word_ptr + -4;
        if (flag) {
          *(undefined4 *)(&g_bss_003b3ef0 + word_ptr[7] * 4) = word_ptr[4];
          (&g_bss_003cf528)[word_ptr[7]] = g_data_0019215c;
          int_ptr = word_ptr + -4;
        }
      }
      val = *(int *)((int)int_ptr + 0x28);
      *(int *)((int)int_ptr + 0x28) = val + 2;
      word_ptr = int_ptr;
    } while (val + 2 != *(int *)((int)int_ptr + 0x10));
  } while (g_bss_003d59cc != 0);
  return;
}

/******************************************************************************
 * Function : navigate_tree_to_route_0bec84 (Original VA: 0xbec84, Ghidra: FUN_000bec84)
 * Prototype: int navigate_tree_to_route_0bec84(void);
 * Address  : 0xbec84 (Size: 123 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5220
 * Purpose  : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_dfs_visit_0bdeec, LbErrorLog
 ******************************************************************************/
int navigate_tree_to_route_0bec84(void)

{
  int *int_ptr;
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *arg_ebx;
  
  *arg_ebx = 1;
  navigate_dfs_visit_0bdeec();
  if ((&g_bss_003cf528)[arg_eax] == g_data_0019215c) {
    val = 0;
    int_ptr = &g_bss_003c5860;
    for (; extraout_EDX != arg_eax; arg_eax = *(int *)(&g_bss_003b3ef0 + arg_eax * 4)) {
      val = val + 1;
      *int_ptr = arg_eax;
      if (2999 < val) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        arg_eax = extraout_ECX;
      }
      int_ptr = int_ptr + 1;
    }
    *int_ptr = extraout_EDX;
  }
  else {
    val = -1;
  }
  return val;
}

/******************************************************************************
 * Function : navigate_tree_to_route_0bed00 (Original VA: 0xbed00, Ghidra: FUN_000bed00)
 * Prototype: int navigate_tree_to_route_0bed00(void);
 * Address  : 0xbed00 (Size: 123 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5220
 * Purpose  : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 2 -> navigate_pq_remove_0be84c, LbErrorLog
 ******************************************************************************/
int navigate_tree_to_route_0bed00(void)

{
  int *int_ptr;
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *arg_ebx;
  
  *arg_ebx = 1;
  navigate_pq_remove_0be84c();
  if ((&g_bss_003cf528)[arg_eax] == g_data_0019215c) {
    val = 0;
    int_ptr = &g_bss_003c5860;
    for (; extraout_EDX != arg_eax; arg_eax = *(int *)(&g_bss_003b3ef0 + arg_eax * 4)) {
      val = val + 1;
      *int_ptr = arg_eax;
      if (2999 < val) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        arg_eax = extraout_ECX;
      }
      int_ptr = int_ptr + 1;
    }
    *int_ptr = extraout_EDX;
  }
  else {
    val = -1;
  }
  return val;
}

/******************************************************************************
 * Function : navigate_fn_0bed7c (Original VA: 0xbed7c, Ghidra: FUN_000bed7c)
 * Prototype: void navigate_fn_0bed7c(int param_1);
 * Address  : 0xbed7c (Size: 136 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bed7c
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 2 -> navigate_insert_point_0b95f0, navigate_make_edge_0bab7c
 ******************************************************************************/
void navigate_fn_0bed7c(int param_1)

{
  int arg_eax;
  int val;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  char *str_ptr;
  char *str_ptr_2;
  char local_14;
  char local_10;
  
  val = arg_eax + arg_ecx * 0x100;
  local_10 = *(char *)(arg_edx + val);
  local_14 = *(char *)(arg_edx + -1 + val);
  navigate_insert_point_0b95f0();
  val = extraout_ECX;
  str_ptr_2 = (char *)(arg_ecx * 0x100 + arg_edx + arg_eax);
  while( true ) {
    str_ptr = str_ptr_2;
    val = val + 1;
    str_ptr_2 = str_ptr + 0x100;
    if (param_1 <= val) break;
    if ((*str_ptr_2 != local_10) || (local_14 != str_ptr[0xff])) {
      navigate_insert_point_0b95f0();
      local_10 = *str_ptr_2;
      local_14 = str_ptr[0xff];
      val = extraout_ECX_00;
    }
  }
  navigate_insert_point_0b95f0();
  navigate_make_edge_0bab7c();
  return;
}

/******************************************************************************
 * Function : navigate_fn_0bee04 (Original VA: 0xbee04, Ghidra: FUN_000bee04)
 * Prototype: void navigate_fn_0bee04(void);
 * Address  : 0xbee04 (Size: 157 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5861
 * Purpose  : Module navigate.cpp procedure @ 0x0bee04
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 2 -> navigate_insert_point_0b95f0, navigate_make_edge_0bab7c
 ******************************************************************************/
void navigate_fn_0bee04(void)

{
  int arg_eax;
  int arg_ecx;
  char *str_ptr;
  char *extraout_ECX;
  int arg_edx;
  int arg_ebx;
  char local_14;
  char local_10;
  
  str_ptr = (char *)(arg_ecx * 0x100 + arg_eax + arg_edx);
  local_10 = str_ptr[-0x100];
  local_14 = *str_ptr;
  navigate_insert_point_0b95f0();
  while (arg_edx = arg_edx + 1, arg_edx < arg_ebx) {
    str_ptr = (char *)(arg_ecx * 0x100 + arg_eax + arg_edx);
    if ((str_ptr[-0x100] != local_10) || (*str_ptr != local_14)) {
      navigate_insert_point_0b95f0();
      local_10 = extraout_ECX[-0x100];
      local_14 = *extraout_ECX;
    }
  }
  navigate_insert_point_0b95f0();
  navigate_make_edge_0bab7c();
  return;
}

/******************************************************************************
 * Function : navigate_delete_point_0bef98 (Original VA: 0xbef98, Ghidra: FUN_000bef98)
 * Prototype: void navigate_delete_point_0bef98(void);
 * Address  : 0xbef98 (Size: 1110 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2854, 2871, 5861, 5888
 * Purpose  : Log prefix 'delete_point : make_3or4point failure'
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 5 -> navigate_update_ariadne_navigation_0b81c4, navigate_l0_ld_ld_l1_0b9940, navigate_update_ariadne_navigation_0b9c2c, navigate_update_ariadne_navigation_0ba5cc, LbErrorLog
 ******************************************************************************/
void navigate_delete_point_0bef98(void)

{
  short *val;
  ushort uval;
  char ch;
  int val_2;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val_3;
  int arg_ebx;
  int val_4;
  int val_5;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  
  local_18 = arg_ecx;
  val_2 = navigate_update_ariadne_navigation_0b81c4();
  if (val_2 == 0) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5888, "border_internal_points_delete:top not found") */
  }
  else {
    val_2 = *(int *)((int)&g_ariadne_nav_state + arg_ebx * 2 + (int)&local_24 * 0x10) >> 0x10;
    if ((int *)((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10) == &local_24) {
      val_5 = 0;
    }
    else if ((int *)(*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10) == &local_24) {
      val_5 = 1;
    }
    else {
      if ((int *)(*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10) != &local_24) goto LAB_000bf036;
      val_5 = 2;
    }
    do {
      while( true ) {
        while( true ) {
          if ((int)(uint)(ushort)(&g_bss_0038c626)[val_2 * 8] >> 6 != 0) {
            val_3 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_2 * 8] >> 6) * 3;
            val = (short *)((int)&g_bss_003d1b5c + val_3);
            *val = *val + -1;
            (&g_bss_003d1b5e)[val_3] = 0;
            uval = (&g_bss_0038c626)[val_2 * 8];
            (&g_bss_0038c626)[val_2 * 8] = uval & 0x3f;
            g_bss_003d1b5c = g_bss_003d1b5c + 1;
            (&g_bss_0038c626)[val_2 * 8] = uval & 0x3f;
          }
          if (((((int *)(*(int *)(&g_bss_003af896 +
                                 (uint)*(ushort *)
                                        (&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_2 * 0x10)
                                 * 2) >> 0x10) == local_1c) ||
               ((int *)(*(int *)(&g_bss_003af896 +
                                (uint)*(ushort *)
                                       (&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_2 * 0x10) *
                                2) >> 0x10) == &local_28)) ||
              (*(int *)(&g_bss_003af898 +
                       (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_2 * 0x10)
                       * 4) >> 0x10 == local_18)) ||
             (*(int *)(&g_bss_003af898 +
                      (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192138)[val_5] * 2 + val_2 * 0x10) *
                      4) >> 0x10 == local_20)) break;
          local_28 = val_2;
          local_24 = (&g_data_00192138)[val_5];
          val_2 = navigate_l0_ld_ld_l1_0b9940();
          if (val_2 == 0) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2854, "delete_point : make_3or4point failure") */
            val_2 = extraout_ECX;
          }
          if (val_2 == 4) {
            val_2 = navigate_update_ariadne_navigation_0b9c2c();
          }
          else {
            val_2 = navigate_update_ariadne_navigation_0ba5cc();
          }
          if (val_2 == 0) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2871, "delete_point : 3 fails") */
          }
          val_2 = *(int *)((int)&g_ariadne_nav_state + arg_ebx * 2 + (int)&local_24 * 0x10) >> 0x10;
          if ((int *)((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10) == &local_24) {
            val_5 = 0;
          }
          else if ((int *)(*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10) == &local_24) {
            val_5 = 1;
          }
          else if ((int *)(*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10) == &local_24) {
            val_5 = 2;
          }
          else {
LAB_000bf036:
            val_5 = -1;
          }
        }
        val_5 = (&g_data_00192134)[val_5];
        val_4 = *(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_2 * 0x10) >> 0x10;
        val_3 = val_2;
        if (val_4 == -1) {
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5861, "outer_locked:border edge") */
          val_3 = extraout_ECX_00;
        }
        if ((int)(&g_ariadne_nav_state)[val_4 * 4] >> 0x10 == val_3) {
          ch = '\0';
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_4 * 0x10 + 2) >> 0x10 == val_3) {
          ch = '\x01';
        }
        else if (*(int *)(&g_bss_0038c620 + val_4 * 0x10) >> 0x10 == val_3) {
          ch = '\x02';
        }
        else {
          ch = -1;
        }
        val_3 = val_2;
        if (((uint)(byte)(&g_bss_0038c625)[val_4 * 0x10] & 1 << (ch + 3U & 0x1f)) == 0) break;
        if ((int *)(*(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_2 * 0x10) >> 0x10) == &local_24) {
          return;
        }
      }
      do {
        val_2 = *(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_3 * 0x10) >> 0x10;
        if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == val_3) {
          val_5 = 0;
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val_3) {
          val_5 = 1;
        }
        else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == val_3) {
          val_5 = 2;
        }
        else {
          val_5 = -1;
        }
        val_5 = (&g_data_00192134)[val_5];
        if ((int)(uint)(ushort)(&g_bss_0038c626)[val_2 * 8] >> 6 != 0) {
          val_3 = ((int)(uint)(ushort)(&g_bss_0038c626)[val_2 * 8] >> 6) * 3;
          val = (short *)((int)&g_bss_003d1b5c + val_3);
          *val = *val + -1;
          (&g_bss_003d1b5e)[val_3] = 0;
          uval = (&g_bss_0038c626)[val_2 * 8];
          (&g_bss_0038c626)[val_2 * 8] = uval & 0x3f;
          g_bss_003d1b5c = g_bss_003d1b5c + 1;
          (&g_bss_0038c626)[val_2 * 8] = uval & 0x3f;
        }
        val_4 = *(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_2 * 0x10) >> 0x10;
        val_3 = val_2;
        if (val_4 == -1) {
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5861, "outer_locked:border edge") */
          val_3 = extraout_ECX_01;
        }
        if ((int)(&g_ariadne_nav_state)[val_4 * 4] >> 0x10 == val_3) {
          ch = '\0';
        }
        else if (*(int *)((int)&g_ariadne_nav_state + val_4 * 0x10 + 2) >> 0x10 == val_3) {
          ch = '\x01';
        }
        else if (*(int *)(&g_bss_0038c620 + val_4 * 0x10) >> 0x10 == val_3) {
          ch = '\x02';
        }
        else {
          ch = -1;
        }
        val_3 = val_2;
      } while (((uint)(byte)(&g_bss_0038c625)[val_4 * 0x10] & 1 << (ch + 3U & 0x1f)) == 0);
    } while ((int *)(*(int *)((int)&g_ariadne_nav_state + val_5 * 2 + val_2 * 0x10) >> 0x10) != &local_24);
  }
  return;
}

/******************************************************************************
 * Function : navigate_lock_edge_0bf3f0 (Original VA: 0xbf3f0, Ghidra: FUN_000bf3f0)
 * Prototype: void navigate_lock_edge_0bf3f0(void);
 * Address  : 0xbf3f0 (Size: 173 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 5964
 * Purpose  : Log prefix 'lock_edge : not found'
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b81c4, LbErrorLog
 ******************************************************************************/
void navigate_lock_edge_0bf3f0(void)

{
  int arg_eax;
  int val;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  char *str_ptr;
  int aiStack_20 [2];
  int local_18;
  char local_14 [8];
  undefined4 local_c;
  
  local_c = 1;
  str_ptr = local_14;
  while ((arg_ebx != arg_eax || (arg_ecx != arg_edx))) {
    *(char **)(str_ptr + -4) = str_ptr + 4;
    *(char **)(str_ptr + -8) = str_ptr;
    str_ptr[-0xffffffff0000000c] = '$';
    str_ptr[-0xffffffff0000000b] = -0xc;
    str_ptr[-0xffffffff0000000a] = '\v';
    str_ptr[-0xffffffff00000009] = '\0';
    val = navigate_update_ariadne_navigation_0b81c4();
    if (val == 0) {
      str_ptr[-0xffffffff0000000c] = '<';
      str_ptr[-0xffffffff0000000b] = -0xc;
      str_ptr[-0xffffffff0000000a] = '\v';
      str_ptr[-0xffffffff00000009] = '\0';
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 5964, "lock_edge : not found") */
    }
    val = *(int *)(str_ptr + -8) * 0x10;
    (&g_bss_0038c625)[val] =
         *str_ptr << (str_ptr[-4] + 3U & 0x1f) |
         ~('\x01' << (str_ptr[-4] + 3U & 0x1f)) & (&g_bss_0038c625)[val];
    arg_ebx = *(int *)(&g_bss_003af896 +
                        (uint)*(ushort *)
                               (&g_bss_0038c618 + (&g_data_00192134)[*(int *)(str_ptr + -4)] * 2 + val)
                        * 2) >> 0x10;
    arg_ecx = *(int *)(&g_bss_003af898 +
                     (uint)*(ushort *)
                            (&g_bss_0038c618 + (&g_data_00192134)[*(int *)(str_ptr + -4)] * 2 + val) * 4
                     ) >> 0x10;
    str_ptr = str_ptr + -8;
  }
  return;
}

/******************************************************************************
 * Function : navigate_lock_edge_0bf588 (Original VA: 0xbf588, Ghidra: FUN_000bf588)
 * Prototype: void navigate_lock_edge_0bf588(void);
 * Address  : 0xbf588 (Size: 271 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 6038, 6049
 * Purpose  : Log prefix 'lock_edge : not found'
 * Callers  : 1 -> navigate_delete_point_0bf698
 * Callees  : 2 -> navigate_update_ariadne_navigation_0b81c4, LbErrorLog
 ******************************************************************************/
void navigate_lock_edge_0bf588(void)

{
  int val;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  char *str_ptr;
  int aiStack_28 [2];
  int local_20;
  char local_1c [8];
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  str_ptr = local_1c;
  while ((arg_ebx != *(int *)(str_ptr + 0xc) || (arg_ecx != arg_edx))) {
    *(char **)(str_ptr + -4) = str_ptr + 4;
    *(char **)(str_ptr + -8) = str_ptr;
    str_ptr[-0xffffffff0000000c] = -0x3b;
    str_ptr[-0xffffffff0000000b] = -0xb;
    str_ptr[-0xffffffff0000000a] = '\v';
    str_ptr[-0xffffffff00000009] = '\0';
    val = navigate_update_ariadne_navigation_0b81c4();
    if (val == 0) {
      str_ptr[-0xffffffff0000000c] = -0x23;
      str_ptr[-0xffffffff0000000b] = -0xb;
      str_ptr[-0xffffffff0000000a] = '\v';
      str_ptr[-0xffffffff00000009] = '\0';
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6038, "lock_edge : not found") */
    }
    (&g_bss_003d1b5e)[((int)(uint)(ushort)(&g_bss_0038c626)[*(int *)(str_ptr + -8) * 8] >> 6) * 3] = 0;
    *(int *)(&g_bss_003d59d0 + g_bss_003d6010 * 8) = arg_ebx;
    val = g_bss_003d6010 + 1;
    *(int *)(&g_bss_003d59d4 + g_bss_003d6010 * 8) = arg_ecx;
    g_bss_003d6010 = val;
    if (199 < val) {
      str_ptr[-0xffffffff0000000c] = '5';
      str_ptr[-0xffffffff0000000b] = -10;
      str_ptr[-0xffffffff0000000a] = '\v';
      str_ptr[-0xffffffff00000009] = '\0';
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6049, "edge_setlock_record:overflow") */
    }
    val = *(int *)(str_ptr + -8) * 0x10;
    (&g_bss_0038c625)[val] =
         *str_ptr << (str_ptr[-4] + 3U & 0x1f) |
         ~('\x01' << (str_ptr[-4] + 3U & 0x1f)) & (&g_bss_0038c625)[val];
    arg_ebx = *(int *)(&g_bss_003af896 +
                        (uint)*(ushort *)
                               (&g_bss_0038c618 + (&g_data_00192134)[*(int *)(str_ptr + -4)] * 2 + val)
                        * 2) >> 0x10;
    arg_ecx = *(int *)(&g_bss_003af898 +
                     (uint)*(ushort *)
                            (&g_bss_0038c618 + (&g_data_00192134)[*(int *)(str_ptr + -4)] * 2 + val) * 4
                     ) >> 0x10;
    str_ptr = str_ptr + -8;
  }
  return;
}

/******************************************************************************
 * Function : navigate_delete_point_0bf698 (Original VA: 0xbf698, Ghidra: FUN_000bf698)
 * Prototype: void navigate_delete_point_0bf698(void);
 * Address  : 0xbf698 (Size: 477 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 2854, 2867, 2871, 6076
 * Purpose  : Log prefix 'delete_point : make_3or4point failure'
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 6 -> navigate_update_ariadne_navigation_0b80c8, navigate_l0_ld_ld_l1_0b9940, navigate_update_ariadne_navigation_0b9c2c, navigate_update_ariadne_navigation_0ba5cc, navigate_lock_edge_0bf588, LbErrorLog
 ******************************************************************************/
void navigate_delete_point_0bf698(void)

{
  bool flag;
  int val;
  int val_2;
  int extraout_ECX;
  int val_3;
  int val_4;
  int local_24;
  int local_20;
  
  g_bss_003d6010 = 0;
  navigate_lock_edge_0bf588();
  navigate_lock_edge_0bf588();
  navigate_lock_edge_0bf588();
  navigate_lock_edge_0bf588();
  val_4 = g_bss_003d6010 * 8;
  do {
    val_4 = val_4 + -8;
    if (val_4 < 0) {
      return;
    }
    val = navigate_update_ariadne_navigation_0b80c8();
    if (val == 0) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6076, "border_unlock:point not found") */
    }
    val_2 = local_24;
    val = local_20;
    do {
      val_3 = *(int *)((int)&g_ariadne_nav_state + val * 2 + val_2 * 0x10) >> 0x10;
      if (val_3 == -1) {
        flag = false;
        goto LAB_000bf7cf;
      }
      if ((int)(&g_bss_0038c621)[val_3 * 4] >> 0x18 != (int)(&g_bss_0038c621)[local_24 * 4] >> 0x18) {
        flag = false;
        goto LAB_000bf7cf;
      }
      if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == val_2) {
        val = 0;
      }
      else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == val_2) {
        val = 1;
      }
      else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == val_2) {
        val = 2;
      }
      else {
        val = -1;
      }
      val = (&g_data_00192134)[val];
      val_2 = val_3;
    } while (val_3 != local_24);
    flag = true;
LAB_000bf7cf:
    if (flag) {
      val = navigate_l0_ld_ld_l1_0b9940();
      if (val == 0) {
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2854, "delete_point : make_3or4point failure") */
        val = extraout_ECX;
      }
      if (val == 4) {
        val = navigate_update_ariadne_navigation_0b9c2c();
        if (val == 0) {
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2867, "delete_point : 4 fails") */
        }
      }
      else {
        val = navigate_update_ariadne_navigation_0ba5cc();
        if (val == 0) {
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 2871, "delete_point : 3 fails") */
        }
      }
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_fn_0bf8bc (Original VA: 0xbf8bc, Ghidra: FUN_000bf8bc)
 * Prototype: bool navigate_fn_0bf8bc(void);
 * Address  : 0xbf8bc (Size: 174 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bf8bc
 * Callers  : 1 -> navigate_fn_0bf96c
 * Callees  : 0 -> 
 ******************************************************************************/
bool navigate_fn_0bf8bc(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  int *arg_eax;
  int val_5;
  int *arg_ecx;
  int *arg_edx;
  int val_6;
  int *arg_ebx;
  bool flag;
  int local_10;
  
  val_4 = g_bss_003d6420;
  local_10 = 0;
  val_6 = 0;
  val_2 = g_bss_003d6420;
  val_5 = g_bss_003d6414;
  do {
    do {
      val_3 = val_5;
      if (g_bss_003d641c <= val_3) {
        flag = val_2 != g_bss_003d6420;
        if (flag) {
          *arg_eax = val_6;
          *arg_edx = val_2;
          *arg_ebx = local_10;
          *arg_ecx = val_4 - val_2;
        }
        return flag;
      }
      val = *(int *)(&g_bss_003d6014 + val_3 * 4);
      val_5 = val_3 + 1;
    } while (val_2 <= val);
    if (val_5 < g_bss_003d641c) {
      val_6 = val_5 * 4;
      do {
        if (val != *(int *)(&g_bss_003d6014 + val_6)) break;
        val_6 = val_6 + 4;
        val_5 = val_5 + 1;
      } while (val_6 < g_bss_003d641c * 4);
    }
    local_10 = val_5 - val_3;
    val_6 = val_3;
    val_2 = val;
  } while( true );
}

/******************************************************************************
 * Function : navigate_fn_0bf96c (Original VA: 0xbf96c, Ghidra: FUN_000bf96c)
 * Prototype: undefined4 navigate_fn_0bf96c(byte *param_1);
 * Address  : 0xbf96c (Size: 293 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0bf96c
 * Callers  : 1 -> navigate_nav_log_0bfaec
 * Callees  : 1 -> navigate_fn_0bf8bc
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000bf9d8) */
/* WARNING: Removing unreachable block (ram,0x000bf9e0) */
/* WARNING: Removing unreachable block (ram,0x000bf9e4) */

undefined4 navigate_fn_0bf96c(byte *param_1)

{
  byte flag;
  undefined4 *arg_eax;
  int val;
  byte *byte_ptr;
  int val_2;
  undefined4 uval;
  int *arg_ecx;
  int val_3;
  int *arg_edx;
  undefined4 *arg_ebx;
  byte *byte_ptr_2;
  byte *byte_ptr_3;
  byte *byte_ptr_4;
  bool flag_2;
  bool flag_3;
  byte flag_4;
  int local_34;
  int local_30;
  
  flag_4 = 0;
  val = navigate_fn_0bf8bc();
  uval = 0;
  if (val != 0) {
    byte_ptr = (byte *)(local_34 * 0x100 + g_bss_003d6424);
    flag = *byte_ptr;
    val = 1;
    byte_ptr_2 = byte_ptr;
    if (1 < local_30) {
      do {
        byte_ptr_2 = byte_ptr_2 + 0x100;
        flag_2 = false;
        val_2 = 0;
        flag_3 = true;
        val_3 = 1;
        byte_ptr_3 = byte_ptr_2;
        byte_ptr_4 = byte_ptr;
        do {
          if (val_3 == 0) break;
          val_3 = val_3 + -1;
          flag_2 = *byte_ptr_3 < *byte_ptr_4;
          flag_3 = *byte_ptr_3 == *byte_ptr_4;
          byte_ptr_3 = byte_ptr_3 + (uint)flag_4 * -2 + 1;
          byte_ptr_4 = byte_ptr_4 + (uint)flag_4 * -2 + 1;
        } while (flag_3);
        if (!flag_3) {
          val_2 = (1 - (uint)flag_2) - (uint)(flag_2 != 0);
        }
      } while ((val_2 == 0) && (val = val + 1, val < local_30));
    }
    val_3 = 0;
    do {
      val_2 = val_3 + 4;
      *(int *)(&g_bss_003d6014 + val_3) = local_34 + val;
      val_3 = val_2;
    } while (val_2 < 4);
    *param_1 = flag;
    *arg_eax = 0;
    *arg_edx = local_34;
    *arg_ebx = 1;
    *arg_ecx = local_34 + val;
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : navigate_nav_log_0bfaec (Original VA: 0xbfaec, Ghidra: FUN_000bfaec)
 * Prototype: void navigate_nav_log_0bfaec(int param_1);
 * Address  : 0xbfaec (Size: 1808 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : String 'nav.log'
 * Callers  : 2 -> navigate_fn_0c01fc, routes_fn_0d167c
 * Callees  : 14 -> navigate_triangle_find_first_used_0b58b4, navigate_triangulation_border_init_overflow_0b73dc, navigate_delaunay_seeded_stack_full_0bbc9c, navigate_fn_0bca9c, navigate_fn_0bed7c, navigate_fn_0bee04, navigate_delete_point_0bef98, navigate_lock_edge_0bf3f0 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_nav_log_0bfaec(int param_1)

{
  byte flag;
  undefined4 uval;
  undefined8 uval_2;
  bool flag_2;
  bool flag_3;
  undefined1 *word_ptr;
  undefined4 arg_eax;
  byte *byte_ptr;
  int val;
  int arg_ecx;
  int arg_edx;
  uint uval_3;
  int val_3;
  int arg_ebx;
  undefined4 *word_ptr_2;
  int val_4;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  undefined4 auStack_e8 [21];
  undefined1 local_94 [92];
  undefined4 local_38;
  undefined4 local_30;
  char local_28 [4];
  int local_24;
  int local_1c;
  int val_2;
  
  local_30 = 0;
  g_bss_003d6428 = arg_eax;
  local_24 = arg_ecx;
  if (g_bss_0038c5c4 != 0) {
    auStack_e8[0] = g_bss_0038c5d4;
    local_ec = param_1;
    dk_sprintf(local_94,s_F__d_Area__03d__03d__03d__03d_T__0016b797,g_game_turn);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      auStack_e8[0] = 0xbfb96;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      auStack_e8[0] = 0xbfbca;
      bflib_system_io_fn_0f694b();
      auStack_e8[0] = 0xbfbd4;
      bflib_system_io_fn_0f69c6();
    }
    auStack_e8[0] = 0xbfbe1;
    bflib_system_io_fn_0f694b();
    if (g_bss_0038c5c4 != 0) {
      uval_2 = rdtsc();
      g_bss_0038c5c8 = (int)uval_2;
    }
  }
  local_1c = arg_edx;
  if (local_24 < arg_edx) {
    local_1c = local_24;
    local_24 = arg_edx;
  }
  val_4 = param_1;
  if (param_1 < arg_ebx) {
    val_4 = arg_ebx;
    arg_ebx = param_1;
  }
  param_1 = val_4;
  if ((((local_1c != -1) && (arg_ebx != -1)) && (local_1c != local_24)) && (arg_ebx != param_1))
  {
    if (((local_1c == 0) && (arg_ebx == 0)) && ((local_24 == 0x100 && (param_1 == 0x100)))) {
      flag_3 = false;
    }
    else {
      flag_3 = true;
    }
    if (((local_1c < 1) || (arg_ebx < 1)) || ((0xfe < local_24 || (0xfe < param_1)))) {
      flag_2 = true;
    }
    else {
      flag_2 = false;
    }
    if (flag_2) {
      flag_3 = false;
      arg_ebx = 0;
      local_24 = 0x100;
    }
    if (g_bss_0038c5cc == 0) {
      g_bss_0038c5cc = 1;
      auStack_e8[0] = 0xbfd56;
      navigate_triangle_find_first_used_0b58b4();
    }
    if (flag_3) {
      auStack_e8[0] = 0;
      local_ec = 0xbfdcb;
      navigate_fn_0bee04();
      local_ec = 0xffffffff;
      uStack_f0 = 0xbfdf5;
      navigate_fn_0bee04();
      uStack_f4 = 0xbfe15;
      navigate_fn_0bed7c();
      navigate_fn_0bed7c();
      navigate_lock_edge_0bf3f0();
      navigate_lock_edge_0bf3f0();
      navigate_lock_edge_0bf3f0();
      navigate_lock_edge_0bf3f0();
      local_38 = 0;
      word_ptr_2 = &uStack_f4;
      if ((char)arg_ebx == '\0') {
        navigate_delete_point_0bef98();
        word_ptr_2 = &uStack_f4;
      }
    }
    else {
      local_28[0] = '\x01';
      local_28[1] = '\0';
      local_28[2] = '\0';
      local_28[3] = '\0';
      auStack_e8[0] = 0xbfd7f;
      navigate_triangle_find_first_used_0b58b4();
      auStack_e8[0] = 0;
      local_ec = 0xbfda2;
      navigate_fn_0bca9c();
      word_ptr_2 = auStack_e8;
    }
    uval_3 = 0xffffffff;
    val_4 = *(int *)((int)word_ptr_2 + 0xc4) * 0x100 + *(int *)((int)word_ptr_2 + 0xb0);
    if (*(char *)((int)word_ptr_2 + 0xd4) == '\0') {
      if (((*(char *)((int)word_ptr_2 + 0xcc) != '\0') &&
          (val_2 = *(int *)((int)word_ptr_2 + 200), *(int *)((int)word_ptr_2 + 0xc0) - val_2 < 4)) &&
         (*(int *)((int)word_ptr_2 + 0xe8) - *(int *)((int)word_ptr_2 + 0xc4) < 4)) {
        val = *(int *)((int)word_ptr_2 + 0xc4);
        flag = *(byte *)(*(int *)((int)word_ptr_2 + 200) + val_4);
        *(int *)((int)word_ptr_2 + 0xb8) = *(int *)((int)word_ptr_2 + 0xe8);
        if (val < *(int *)((int)word_ptr_2 + 0xe8)) {
          do {
            if (val_2 < *(int *)((int)word_ptr_2 + 0xc0)) {
              byte_ptr = (byte *)(val_2 + val_4);
              val_3 = val_2;
              do {
                if (flag != *byte_ptr) {
                  uval_3 = 0xffffffff;
                  goto LAB_000bff8a;
                }
                val_3 = val_3 + 1;
                byte_ptr = byte_ptr + 1;
              } while (val_3 < *(int *)((int)word_ptr_2 + 0xc0));
            }
            val = val + 1;
            val_4 = val_4 + 0x100;
          } while (val < *(int *)((int)word_ptr_2 + 0xb8));
        }
        uval_3 = (uint)flag;
      }
    }
    else {
      uval_3 = (uint)*(byte *)(*(int *)((int)word_ptr_2 + 200) + val_4);
    }
LAB_000bff8a:
    if (uval_3 == 0xffffffff) {
      g_bss_003d6424 = *(undefined4 *)((int)word_ptr_2 + 0xb0);
      g_bss_003d6414 = *(undefined4 *)((int)word_ptr_2 + 200);
      g_bss_003d641c = *(undefined4 *)((int)word_ptr_2 + 0xc0);
      uval = *(undefined4 *)((int)word_ptr_2 + 0xc4);
      g_bss_003d6420 = *(undefined4 *)((int)word_ptr_2 + 0xe8);
      val_4 = *(int *)((int)word_ptr_2 + 0xc0);
      word_ptr = (undefined1 *)word_ptr_2;
      g_bss_003d6418 = uval;
      if (*(int *)((int)word_ptr_2 + 200) < val_4) {
        val_2 = *(int *)((int)word_ptr_2 + 200) << 2;
        do {
          val = val_2 + 4;
          *(undefined4 *)(&g_bss_003d6014 + val_2) = uval;
          val_2 = val;
        } while (val < val_4 * 4);
      }
      while( true ) {
        word_ptr_2 = (undefined4 *)word_ptr;
        *(undefined1 **)((int)word_ptr_2 + -4) = (undefined1 *)((int)word_ptr_2 + 0xd0);
        *(undefined4 *)((int)word_ptr_2 + -8) = 0xc0047;
        val_4 = navigate_fn_0bf96c();
        if (val_4 == 0) break;
        if ((uint)*(byte *)((int)word_ptr_2 + 0xcc) == *(uint *)((int)word_ptr_2 + 0xb0)) {
          word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
          if (*(int *)((int)word_ptr_2 + 0xb8) == 0) {
            *(uint *)((int)word_ptr_2 + -8) = *(uint *)((int)word_ptr_2 + 0xb0);
            *(undefined4 *)((int)word_ptr_2 + -0xc) = 0xc008e;
            navigate_fn_0bca9c();
            *(undefined4 *)((int)word_ptr_2 + -0xc) = 0xc00af;
            navigate_delaunay_seeded_stack_full_0bbc9c();
            word_ptr = (undefined1 *)((int)word_ptr_2 + -8);
          }
        }
        else {
          *(uint *)((int)word_ptr_2 + -8) = (uint)*(byte *)((int)word_ptr_2 + 0xcc);
          *(undefined4 *)((int)word_ptr_2 + -0xc) = 0xc00d6;
          navigate_fn_0bca9c();
          *(undefined4 *)((int)word_ptr_2 + -0xc) = 0xc00f7;
          navigate_delaunay_seeded_stack_full_0bbc9c();
          word_ptr = (undefined1 *)((int)word_ptr_2 + -8);
        }
      }
    }
    else {
      *(uint *)((int)word_ptr_2 + -4) = uval_3 & 0xff;
      *(undefined4 *)((int)word_ptr_2 + -8) = 0xbffb5;
      navigate_fn_0bca9c();
    }
    *(undefined4 *)((int)word_ptr_2 + -8) = 0xc011d;
    navigate_delaunay_seeded_stack_full_0bbc9c();
    if (*(char *)((int)word_ptr_2 + 200) != '\0') {
      *(undefined4 *)((int)word_ptr_2 + -8) = 0xc0148;
      navigate_delete_point_0bf698();
    }
    *(undefined4 *)((int)word_ptr_2 + -8) = 0xc014d;
    navigate_triangulation_border_init_overflow_0b73dc();
    if (g_bss_0038c5c4 != 0) {
      uval_2 = rdtsc();
      *(undefined **)((int)word_ptr_2 + -8) = &g_data_0016b7bd;
      *(int *)((int)word_ptr_2 + -0xc) = (int)uval_2 - g_bss_0038c5c8;
      *(char **)((int)word_ptr_2 + -0x10) = s_c__d__s_0016b7be;
      *(undefined1 **)((int)word_ptr_2 + -0x14) = (undefined1 *)((int)word_ptr_2 + -4);
      *(undefined4 *)((int)word_ptr_2 + -0x18) = 0xc017d;
      dk_sprintf();
      if (g_bss_00388ebc != 1) {
        g_bss_00388ebc = 1;
        *(undefined4 *)((int)word_ptr_2 + -8) = 0xc01a5;
        g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
        g_bss_00388ec4 = g_game_turn;
      }
      if (g_bss_00388ec4 != g_game_turn) {
        g_bss_00388ec4 = g_game_turn;
        *(undefined4 *)((int)word_ptr_2 + -8) = 0xc01d9;
        bflib_system_io_fn_0f694b();
        *(undefined4 *)((int)word_ptr_2 + -8) = 0xc01e3;
        bflib_system_io_fn_0f69c6();
      }
      *(undefined4 *)((int)word_ptr_2 + -8) = 0xc01f0;
      bflib_system_io_fn_0f694b();
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c01fc (Original VA: 0xc01fc, Ghidra: FUN_000c01fc)
 * Prototype: void navigate_fn_0c01fc(void);
 * Address  : 0xc01fc (Size: 26 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c01fc
 * Callers  : 1 -> routes_fn_0d17a8
 * Callees  : 1 -> navigate_nav_log_0bfaec
 ******************************************************************************/
void navigate_fn_0c01fc(void)

{
  navigate_nav_log_0bfaec(0x100);
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c023c (Original VA: 0xc023c, Ghidra: FUN_000c023c)
 * Prototype: undefined4 navigate_fn_0c023c(void);
 * Address  : 0xc023c (Size: 151 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c023c
 * Callers  : 2 -> navigate_rtp_exceeded_max_path_0c0740, navigate_grtc_exceeded_max_path_0c0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_fn_0c023c(void)

{
  longlong val;
  int arg_eax;
  uint uval;
  uint uval_2;
  int arg_edx;
  int val_2;
  int val_3;
  int *arg_ebx;
  char ch;
  bool flag;
  bool flag_2;
  
  val = (longlong)(arg_ebx[2] - *arg_ebx) * (longlong)(arg_edx - arg_ebx[1]);
  val_2 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)(arg_ebx[3] - arg_ebx[1]) * (longlong)(arg_eax - *arg_ebx);
  val_3 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_2 - val_3;
  flag_2 = SBORROW4(val_2,val_3) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  if (ch < '\0') {
    return 0xffffffff;
  }
  val = (longlong)(arg_ebx[4] - *arg_ebx) * (longlong)(arg_edx - arg_ebx[1]);
  val_2 = (int)((ulonglong)val >> 0x20);
  uval = (uint)val;
  val = (longlong)(arg_ebx[5] - arg_ebx[1]) * (longlong)(arg_eax - *arg_ebx);
  val_3 = (int)((ulonglong)val >> 0x20);
  uval_2 = (uint)val;
  ch = uval != uval_2;
  uval = (uint)(uval < uval_2);
  uval_2 = val_2 - val_3;
  flag_2 = SBORROW4(val_2,val_3) != SBORROW4(uval_2,uval);
  flag = (int)(uval_2 - uval) < 0;
  if (uval_2 != uval) {
    ch = (flag_2 == flag) - (flag_2 != flag);
  }
  if ('\0' < ch) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_update_ariadne_navigation_0c02d4 (Original VA: 0xc02d4, Ghidra: FUN_000c02d4)
 * Prototype: void navigate_update_ariadne_navigation_0c02d4(void);
 * Address  : 0xc02d4 (Size: 673 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Updates Ariadne pathfinding/navigation state
 * Callers  : 1 -> navigate_path_out_a_bit_0c0578
 * Callees  : 1 -> navigate_fn_0b5550
 ******************************************************************************/
void navigate_update_ariadne_navigation_0c02d4(void)

{
  int arg_eax;
  int val;
  int val_2;
  uint uval;
  uint uval_2;
  uint *arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  uint *arg_ebx;
  int val_3;
  int val_4;
  int local_18;
  int local_14;
  
  local_18 = (&g_data_00192138)[arg_edx];
  val_3 = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10) >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == arg_eax) {
    val = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == arg_eax) {
    val = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == arg_eax) {
    val = 2;
  }
  else {
    val = -1;
  }
  local_14 = (&g_data_00192134)[val];
  do {
    val_4 = *(int *)((int)&g_ariadne_nav_state + local_14 * 2 + val_3 * 0x10) >> 0x10;
    val_2 = (*(code *)PTR_FUN_000b5550_0019212c)();
    val = extraout_ECX;
    if (val_2 == 0) goto LAB_000c0447;
    if ((int)(&g_ariadne_nav_state)[val_4 * 4] >> 0x10 == val_3) {
      val_3 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_4 * 0x10 + 2) >> 0x10 == val_3) {
      val_3 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_4 * 0x10) >> 0x10 == val_3) {
      val_3 = 2;
    }
    else {
      val_3 = -1;
    }
    local_14 = (&g_data_00192134)[val_3];
    val_3 = val_4;
  } while (val_4 != arg_eax);
  val_3 = *(int *)((int)&g_ariadne_nav_state + arg_edx * 2 + arg_eax * 0x10) >> 0x10;
  if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == arg_eax) {
    val_2 = 0;
  }
  else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == arg_eax) {
    val_2 = 1;
  }
  else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == arg_eax) {
    val_2 = 2;
  }
  else {
    val_2 = -1;
  }
  local_14 = (&g_data_00192134)[val_2];
LAB_000c0447:
  do {
    val = *(int *)((int)&g_ariadne_nav_state + local_18 * 2 + val * 0x10) >> 0x10;
    val_4 = (*(code *)PTR_FUN_000b5550_0019212c)();
    val_2 = extraout_ECX_00;
    if (val_4 == 0) goto LAB_000c04e1;
    if ((int)(&g_ariadne_nav_state)[val * 4] >> 0x10 == extraout_ECX_00) {
      val_2 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val * 0x10 + 2) >> 0x10 == extraout_ECX_00) {
      val_2 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10 == extraout_ECX_00) {
      val_2 = 2;
    }
    else {
      val_2 = -1;
    }
    local_18 = (&g_data_00192138)[val_2];
  } while (val != arg_eax);
  local_18 = (&g_data_00192138)[arg_edx];
  val_2 = val;
LAB_000c04e1:
  if ((*(int *)(&g_bss_003af898 +
               (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[local_14] * 2 + val_3 * 0x10) * 4)
      >> 0x10) -
      (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_2 * 0x10 + local_18 * 2) * 4)
      >> 0x10) < 0) {
    uval = 0xffffffff;
  }
  else {
    uval = (uint)(*(int *)(&g_bss_003af898 +
                           (uint)*(ushort *)
                                  (&g_bss_0038c618 + (&g_data_00192134)[local_14] * 2 + val_3 * 0x10) * 4
                           ) >> 0x10 !=
                  *(int *)(&g_bss_003af898 +
                          (uint)*(ushort *)(&g_bss_0038c618 + val_2 * 0x10 + local_18 * 2) * 4) >>
                  0x10);
  }
  if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_2 * 0x10 + local_18 * 2) * 2)
      >> 0x10) -
      (*(int *)(&g_bss_003af896 +
               (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[local_14] * 2 + val_3 * 0x10) * 2)
      >> 0x10) < 0) {
    uval_2 = 0xffffffff;
  }
  else {
    uval_2 = (uint)(*(int *)(&g_bss_003af896 +
                           (uint)*(ushort *)(&g_bss_0038c618 + val_2 * 0x10 + local_18 * 2) * 2) >>
                   0x10 != *(int *)(&g_bss_003af896 +
                                   (uint)*(ushort *)
                                          (&g_bss_0038c618 +
                                          (&g_data_00192134)[local_14] * 2 + val_3 * 0x10) * 2) >> 0x10
                  );
  }
  *arg_ebx = uval;
  *arg_ecx = uval_2;
  return;
}

/******************************************************************************
 * Function : navigate_path_out_a_bit_0c0578 (Original VA: 0xc0578, Ghidra: FUN_000c0578)
 * Prototype: void navigate_path_out_a_bit_0c0578(void);
 * Address  : 0xc0578 (Size: 456 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 6667
 * Purpose  : Log prefix 'path_out_a_bit: waypoint mismatch'
 * Callers  : 1 -> navigate_path_init8_0c241c
 * Callees  : 2 -> navigate_update_ariadne_navigation_0c02d4, LbErrorLog
 ******************************************************************************/
void navigate_path_out_a_bit_0c0578(void)

{
  int val;
  int val_2;
  int arg_eax;
  int *int_ptr;
  int arg_edx;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  int local_34;
  int local_30;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0;
  val_7 = arg_eax;
  while (local_1c < *(int *)(arg_eax + 0x10) + -1) {
    int_ptr = (int *)(*(int *)((int)&g_bss_003d6c50 + local_18) * 4 + arg_edx);
    val = *int_ptr;
    val_2 = int_ptr[1];
    if ((int)(&g_ariadne_nav_state)[val * 4] >> 0x10 == val_2) {
      val_4 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val * 0x10 + 2) >> 0x10 == val_2) {
      val_4 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val * 0x10) >> 0x10 == val_2) {
      val_4 = 2;
    }
    else {
      val_4 = -1;
    }
    if ((int)(&g_ariadne_nav_state)[val_2 * 4] >> 0x10 == val) {
      val_3 = 0;
    }
    else if (*(int *)((int)&g_ariadne_nav_state + val_2 * 0x10 + 2) >> 0x10 == val) {
      val_3 = 1;
    }
    else if (*(int *)(&g_bss_0038c620 + val_2 * 0x10) >> 0x10 == val) {
      val_3 = 2;
    }
    else {
      val_3 = -1;
    }
    val_5 = *(int *)(val_7 + 0x14) >> 8;
    val_6 = *(int *)(val_7 + 0x18) >> 8;
    if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val * 0x10 + val_4 * 2) * 2)
         >> 0x10 == val_5) &&
       (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val * 0x10 + val_4 * 2) * 4) >>
        0x10 == val_6)) {
      navigate_update_ariadne_navigation_0c02d4();
    }
    else if ((*(int *)(&g_bss_003af896 +
                      (uint)*(ushort *)(&g_bss_0038c618 + val_3 * 2 + val_2 * 0x10) * 2) >> 0x10 ==
              val_5) &&
            (*(int *)(&g_bss_003af898 +
                     (uint)*(ushort *)(&g_bss_0038c618 + val_3 * 2 + val_2 * 0x10) * 4) >> 0x10 ==
             val_6)) {
      navigate_update_ariadne_navigation_0c02d4();
    }
    else {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6667, "path_out_a_bit: waypoint mismatch") */
    }
    local_18 = local_18 + 4;
    *(int *)(val_7 + 0x14) = *(int *)(val_7 + 0x14) + local_34;
    local_1c = local_1c + 1;
    *(int *)(val_7 + 0x18) = *(int *)(val_7 + 0x18) + local_30;
    val_7 = val_7 + 8;
  }
  return;
}

/******************************************************************************
 * Function : navigate_rtp_exceeded_max_path_0c0740 (Original VA: 0xc0740, Ghidra: FUN_000c0740)
 * Prototype: int navigate_rtp_exceeded_max_path_0c0740(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
 * Address  : 0xc0740 (Size: 1116 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 6771, 6793, 6815
 * Purpose  : String 'rtp:Exceeded max path length (i:%d,L:%d) (%d,%d)->(%d,%d)'
 * Callers  : 5 -> navigate_fn_0bdd9c, navigate_tree_to_route_0be760, navigate_pq_remove_0be84c, navigate_grtc_exceeded_max_path_0c0b9c, navigate_path_init8_0c241c
 * Callees  : 5 -> navigate_update_ariadne_navigation_0bd1ac, navigate_fn_0c023c, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e8cc8
 ******************************************************************************/
int navigate_rtp_exceeded_max_path_0c0740(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 arg_eax;
  int val;
  int val_2;
  undefined4 arg_ecx;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int *int_ptr;
  undefined4 arg_ebx;
  undefined1 *thing_ptr;
  undefined1 **val_3;
  int val_4;
  int val_5;
  int val_6;
  undefined8 uval;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 local_38 [4];
  undefined1 local_34 [32];
  
  *param_3 = arg_eax;
  param_3[2] = arg_ebx;
  param_3[1] = arg_edx;
  val_6 = 0;
  param_3[3] = arg_ecx;
  *param_4 = 0;
  if (param_2 == 0) {
    puStack_9c = (undefined1 *)0xc07bb;
    uval = bflib_system_io_fn_0e8cc8();
    int_ptr = (int *)((ulonglong)uval >> 0x20);
    *int_ptr = *int_ptr + (int)uval;
    param_3[5] = arg_ebx;
    param_3[6] = extraout_ECX;
    g_bss_003d6c50 = param_2;
    param_3[4] = 1;
    return 1;
  }
  puStack_9c = local_34;
  puStack_a0 = local_38;
  val_5 = 1;
  val_3 = &puStack_a0;
  val_4 = 0;
  navigate_update_ariadne_navigation_0bd1ac();
  g_bss_003d6c48 = 0;
  g_bss_003d6c4c = 0;
  do {
    if (val_5 < *(int *)((int)val_3 + 0xa0)) {
      *(undefined1 **)((int)val_3 + -4) = (undefined1 *)((int)val_3 + 0x74);
      *(undefined1 **)((int)val_3 + -8) = (undefined1 *)((int)val_3 + 0x70);
      *(undefined4 *)((int)val_3 + -0xc) = 0xc0867;
      navigate_update_ariadne_navigation_0bd1ac();
      *(undefined4 *)((int)val_3 + -0xc) = 0xc0884;
      g_bss_003d6c40 = val_5;
      g_bss_003d6c44 = val_5;
      navigate_fn_0c023c();
      *(undefined4 *)((int)val_3 + -0xc) = 0xc0897;
      val = navigate_fn_0c023c();
      val_2 = extraout_ECX_00;
      thing_ptr = (undefined1 *)((int)val_3 + -8);
    }
    else {
      *(undefined4 *)((int)val_3 + -4) = 0xc08b2;
      val_2 = navigate_fn_0c023c();
      val = val_2;
      thing_ptr = (undefined1 *)val_3;
      if (val_2 == 0) {
        if (val_6 == 0x100) {
          *(undefined4 *)((int)val_3 + -4) = 0xc0b28;
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6771, g_log_buf) */
        }
        *(undefined4 *)((int)val_3 + -4) = 0xc0b52;
        uval = bflib_system_io_fn_0e8cc8();
        int_ptr = (int *)((ulonglong)uval >> 0x20);
        val_5 = *(int *)((int)val_3 + 0xa4);
        val_4 = val_6 * 8 + val_5;
        *int_ptr = *int_ptr + (int)uval;
        *(undefined4 *)(val_4 + 0x14) = *(undefined4 *)((int)val_3 + 0x84);
        val_6 = val_6 + 1;
        *(undefined4 *)(val_4 + 0x18) = *(undefined4 *)((int)val_3 + 0x80);
        (&g_bss_003d6c4c)[val_6] = *(undefined4 *)((int)val_3 + 0xa0);
        *(int *)(val_5 + 0x10) = val_6;
        return val_6;
      }
    }
    if (val_2 == 0) {
      *(undefined4 *)(thing_ptr + 0x58) = *(undefined4 *)(thing_ptr + 0x68);
      *(undefined4 *)(thing_ptr + 0x5c) = *(undefined4 *)(thing_ptr + 0x6c);
      g_bss_003d6c48 = g_bss_003d6c40;
      val_4 = val_5;
    }
    if (val == 0) {
      *(undefined4 *)(thing_ptr + 0x60) = *(undefined4 *)(thing_ptr + 0x70);
      *(undefined4 *)(thing_ptr + 100) = *(undefined4 *)(thing_ptr + 0x74); /* thing->ccontrol_idx */
      *(int *)(thing_ptr + 0x88) = val_5;
      g_bss_003d6c4c = g_bss_003d6c44;
    }
    if (val == -1) {
      if (val_6 == 0x100) {
        *(undefined4 *)(thing_ptr + -4) = *(undefined4 *)(thing_ptr + 0x80);
        *(undefined4 *)(thing_ptr + -8) = *(undefined4 *)(thing_ptr + 0x84);
        *(undefined4 *)(thing_ptr + -0xc) = *(undefined4 *)(thing_ptr + 0x7c);
        *(undefined4 *)(thing_ptr + -0x10) = *(undefined4 *)(thing_ptr + 0x78);
        *(undefined4 *)(thing_ptr + -0x14) = *(undefined4 *)(thing_ptr + 0xa0);
        *(int *)(thing_ptr + -0x18) = val_5;
        *(char **)(thing_ptr + -0x1c) = s_rtp_Exceeded_max_path_length__i__0016b7f6;
        *(undefined1 **)(thing_ptr + -0x20) = thing_ptr;
        *(undefined4 *)(thing_ptr + -0x24) = 0xc0951;
        dk_sprintf();
        *(undefined4 *)(thing_ptr + -4) = 0xc0960;
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6793, g_log_buf) */
      }
      *(undefined4 *)(thing_ptr + -4) = 0xc0984;
      uval = bflib_system_io_fn_0e8cc8();
      int_ptr = (int *)((ulonglong)uval >> 0x20);
      val_5 = *(int *)(thing_ptr + 0xa4);
      *int_ptr = *int_ptr + (int)uval;
      *(undefined4 *)(val_6 * 8 + val_5 + 0x14) = *(undefined4 *)(thing_ptr + 0x58);
      *(undefined4 *)(val_6 * 8 + val_5 + 0x18) = *(undefined4 *)(thing_ptr + 0x5c);
      (&g_bss_003d6c50)[val_6] = g_bss_003d6c48;
      *(undefined4 *)(thing_ptr + 0x50) = *(undefined4 *)(thing_ptr + 0x58);
      *(undefined4 *)(thing_ptr + 0x54) = *(undefined4 *)(thing_ptr + 0x5c);
      *(undefined1 **)(thing_ptr + -4) = thing_ptr + 100; /* thing->ccontrol_idx */
      val_3 = (undefined1 **)(thing_ptr + -8);
      *(undefined1 **)(thing_ptr + -8) = thing_ptr + 0x60;
      val_6 = val_6 + 1;
      *(undefined4 *)(thing_ptr + -0xc) = 0xc09f3;
      navigate_update_ariadne_navigation_0bd1ac();
      val_5 = val_4 + 1;
      g_bss_003d6c48 = val_4;
      g_bss_003d6c4c = val_4;
    }
    else {
      val_3 = (undefined1 **)thing_ptr;
      if (val_2 == 1) {
        if (val_6 == 0x100) {
          *(undefined4 *)(thing_ptr + -4) = *(undefined4 *)(thing_ptr + 0x80);
          *(undefined4 *)(thing_ptr + -8) = *(undefined4 *)(thing_ptr + 0x84);
          *(undefined4 *)(thing_ptr + -0xc) = *(undefined4 *)(thing_ptr + 0x7c);
          *(undefined4 *)(thing_ptr + -0x10) = *(undefined4 *)(thing_ptr + 0x78);
          *(undefined4 *)(thing_ptr + -0x14) = *(undefined4 *)(thing_ptr + 0xa0);
          *(int *)(thing_ptr + -0x18) = val_5;
          *(char **)(thing_ptr + -0x1c) = s_rtp_Exceeded_max_path_length__i__0016b83d;
          *(undefined1 **)(thing_ptr + -0x20) = thing_ptr;
          *(undefined4 *)(thing_ptr + -0x24) = 0xc0a53;
          dk_sprintf();
          *(undefined4 *)(thing_ptr + -4) = 0xc0a62;
          LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6815, "rtp:Exceeded max path length - gate_route_to_coords") */
        }
        *(undefined4 *)(thing_ptr + -4) = 0xc0a86;
        uval = bflib_system_io_fn_0e8cc8();
        int_ptr = (int *)((ulonglong)uval >> 0x20);
        val_5 = *(int *)(thing_ptr + 0xa4);
        *int_ptr = *int_ptr + (int)uval;
        *(undefined4 *)(val_6 * 8 + val_5 + 0x14) = *(undefined4 *)(thing_ptr + 0x60);
        *(undefined4 *)(val_6 * 8 + val_5 + 0x18) = *(undefined4 *)(thing_ptr + 100); /* thing->ccontrol_idx */
        (&g_bss_003d6c50)[val_6] = g_bss_003d6c4c;
        *(undefined4 *)(thing_ptr + 0x50) = *(undefined4 *)(thing_ptr + 0x60);
        *(undefined4 *)(thing_ptr + 0x54) = *(undefined4 *)(thing_ptr + 100); /* thing->ccontrol_idx */
        val_5 = *(int *)(thing_ptr + 0x88);
        *(undefined1 **)(thing_ptr + -4) = thing_ptr + 100; /* thing->ccontrol_idx */
        val_3 = (undefined1 **)(thing_ptr + -8);
        *(undefined1 **)(thing_ptr + -8) = thing_ptr + 0x60;
        val_6 = val_6 + 1;
        *(undefined4 *)(thing_ptr + -0xc) = 0xc0afa;
        navigate_update_ariadne_navigation_0bd1ac();
        g_bss_003d6c48 = val_5;
        g_bss_003d6c4c = val_5;
      }
      val_5 = val_5 + 1;
    }
  } while( true );
}

/******************************************************************************
 * Function : navigate_grtc_exceeded_max_path_0c0b9c (Original VA: 0xc0b9c, Ghidra: FUN_000c0b9c)
 * Prototype: int navigate_grtc_exceeded_max_path_0c0b9c(undefined4 param_1,undefined4 param_2);
 * Address  : 0xc0b9c (Size: 2469 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 6908, 6941
 * Purpose  : String 'grtc:Exceeded max path length (i:%d,rl:%d)'
 * Callers  : 1 -> navigate_fn_0c1ecc
 * Callees  : 9 -> navigate_fn_0b55a0, navigate_update_ariadne_navigation_0bd1ac, navigate_fn_0c023c, navigate_rtp_exceeded_max_path_0c0740, navigate_fn_0c1544, navigate_fn_0c1914, LbErrorLog, dk_sprintf ...
 ******************************************************************************/
int navigate_grtc_exceeded_max_path_0c0b9c(undefined4 param_1,undefined4 param_2)

{
  longlong val;
  undefined1 *word_ptr;
  undefined4 arg_eax;
  int val_2;
  int val_3;
  int val_4;
  int loop_i;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *int_ptr;
  undefined4 arg_edx;
  uint uval;
  uint uval_2;
  undefined1 **thing_ptr;
  undefined4 *unaff_EBP;
  int *int_ptr_2;
  undefined4 *unaff_ESI;
  undefined4 *word_ptr_2;
  int unaff_EDI;
  undefined4 *word_ptr_3;
  byte flag;
  undefined1 *local_128;
  undefined1 *puStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined4 *puStack_114;
  undefined4 local_d0 [4];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined4 local_b8 [9];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84 [10];
  undefined4 local_5c;
  undefined4 local_58;
  int local_14;
  int local_10;
  
  flag = 0;
  puStack_114 = local_84;
  puStack_118 = &g_bss_003d642c;
  uStack_11c = param_2;
  uStack_120 = param_1;
  puStack_124 = (undefined1 *)0xc0be4;
  g_bss_003d643c = navigate_rtp_exceeded_max_path_0c0740();
  *unaff_ESI = arg_eax;
  unaff_ESI[1] = arg_edx;
  unaff_ESI[2] = local_5c;
  unaff_ESI[3] = local_58;
  if (unaff_EDI == 0) {
    unaff_ESI[0x704] = 1;
    unaff_ESI[10] = 0;
    unaff_ESI[6] = local_5c;
    unaff_ESI[4] = local_5c;
    unaff_ESI[7] = local_58;
    loop_i = unaff_ESI[0x704];
    unaff_ESI[5] = local_58;
  }
  else {
    puStack_124 = local_bc;
    local_128 = local_c0;
    thing_ptr = &local_128;
    navigate_update_ariadne_navigation_0bd1ac();
    word_ptr_2 = local_d0;
    word_ptr_3 = local_b8;
    for (loop_i = 6; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_3 = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
    }
    local_8c = 0;
    local_88 = *unaff_EBP;
    int_ptr_2 = unaff_EBP + 4;
    local_84[0] = unaff_EBP[1];
    local_90 = 1;
    if (local_10 != 0) {
      local_94 = local_14 + 4;
      thing_ptr = &local_128;
      do {
        if (*(uint *)((int)thing_ptr + 0x98) < *(uint *)((int)thing_ptr + 0x118)) {
          *(undefined1 **)((int)thing_ptr + -4) = (undefined1 *)((int)thing_ptr + 0x88);
          *(undefined1 **)((int)thing_ptr + -8) = (undefined1 *)((int)thing_ptr + 0xa8);
          *(undefined4 *)((int)thing_ptr + -0xc) = 0xc0d79;
          navigate_update_ariadne_navigation_0bd1ac();
          thing_ptr = (undefined1 **)((int)thing_ptr + -8);
        }
        else {
          *(undefined4 *)((int)thing_ptr + 0xa8) = *(undefined4 *)((int)thing_ptr + 0xc4);
          *(undefined4 *)((int)thing_ptr + 0x80) = *(undefined4 *)((int)thing_ptr + 0xc4);
          *(undefined4 *)((int)thing_ptr + 0x88) = *(undefined4 *)((int)thing_ptr + 200);
          *(undefined4 *)((int)thing_ptr + 0x84) = *(undefined4 *)((int)thing_ptr + 200);
        }
        *(undefined4 *)((int)thing_ptr + -4) = 0xc0d90;
        navigate_fn_0c023c();
        *(undefined4 *)((int)thing_ptr + -4) = 0xc0da9;
        loop_i = navigate_fn_0c023c();
        *(undefined4 *)((int)thing_ptr + -4) = 0xc0dc2;
        val_2 = navigate_fn_0c023c();
        *(undefined4 *)((int)thing_ptr + -4) = 0xc0ddb;
        val_3 = navigate_fn_0c023c();
        if ((((extraout_ECX != 0) || (loop_i != 0)) || (val_2 != 0)) || (val_3 != 0)) {
          if (*(int *)((int)thing_ptr + 0xdc) == 0x100) {
            *(undefined4 *)((int)thing_ptr + -4) = *(undefined4 *)((int)thing_ptr + 0x118);
            *(undefined4 *)((int)thing_ptr + -8) = *(undefined4 *)((int)thing_ptr + 0x98);
            *(char **)((int)thing_ptr + -0xc) = s_grtc_Exceeded_max_path_length__i_0016b8c5;
            *(undefined1 ***)((int)thing_ptr + -0x10) = thing_ptr;
            *(undefined4 *)((int)thing_ptr + -0x14) = 0xc0e1f;
            dk_sprintf();
            *(undefined4 *)((int)thing_ptr + -4) = 0xc0e31;
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6908, g_log_buf) */
          }
          *int_ptr_2 = *(int *)((int)thing_ptr + 0x58);
          int_ptr_2[1] = *(int *)((int)thing_ptr + 0x5c);
          int_ptr_2[2] = *(int *)((int)thing_ptr + 0x60);
          loop_i = *(int *)((int)thing_ptr + 100); /* thing->ccontrol_idx */
          int_ptr_2[6] = -1;
          *(undefined **)((int)thing_ptr + 0xfc) = &g_bss_003d642c;
          int_ptr_2[3] = loop_i;
          *(undefined1 **)((int)thing_ptr + 0xec) = (undefined1 *)((int)thing_ptr + 0xa0);
          val_2 = int_ptr_2[1];
          *(undefined1 **)((int)thing_ptr + 0xe4) = (undefined1 *)((int)thing_ptr + 0xa4);
          val_3 = *(int *)(&g_bss_003d6444 + *(int *)((int)thing_ptr + 0x9c) * 8);
          *(undefined4 *)((int)thing_ptr + 0xf4) = *(undefined4 *)((int)thing_ptr + 0x120);
          int_ptr = (int *)((int)thing_ptr + 0x9c);
          uval = *int_ptr_2 - *(int *)(&g_bss_003d6440 + *(int *)((int)thing_ptr + 0x9c) * 8) >> 0x1f;
          loop_i = (*int_ptr_2 - *(int *)(&g_bss_003d6440 + *(int *)((int)thing_ptr + 0x9c) * 8) ^ uval)
                  - uval;
          uval = val_2 - val_3 >> 0x1f;
          val_2 = (val_2 - val_3 ^ uval) - uval;
          if (val_2 < loop_i) {
            val_2 = val_2 >> 1;
          }
          else {
            loop_i = loop_i >> 1;
          }
          loop_i = loop_i + val_2;
          *(int *)((int)thing_ptr + 0x100) = int_ptr_2[3];
          *(int *)((int)thing_ptr + 0x100) =
               *(int *)((int)thing_ptr + 0x100) -
               *(int *)(*int_ptr * 8 + *(int *)((int)thing_ptr + 0xfc) + 0x18);
          *(undefined4 *)((int)thing_ptr + 0x100) = *(undefined4 *)((int)thing_ptr + 0x100);
          uval = int_ptr_2[2] - *(int *)(*int_ptr * 8 + *(int *)((int)thing_ptr + 0xfc) + 0x14);
          uval_2 = (int)uval >> 0x1f;
          *(uint *)((int)thing_ptr + 0xe8) = (uval ^ uval_2) - uval_2;
          uval = (int)*(uint *)((int)thing_ptr + 0x100) >> 0x1f;
          val_3 = (*(uint *)((int)thing_ptr + 0x100) ^ uval) - uval;
          val_2 = *(int *)((int)thing_ptr + 0xe8);
          if (val_3 < val_2) {
            val_3 = val_3 >> 1;
          }
          else {
            val_2 = val_2 >> 1;
          }
          *(int *)((int)thing_ptr + 0xac) = val_3 + val_2;
          *(int *)((int)thing_ptr + 0xb0) = val_3 + val_2;
          *(int *)((int)thing_ptr + 0x100) = *(int *)(*(int *)((int)thing_ptr + 0xfc) + 0x10) + -1;
          val_2 = loop_i;
          if (*int_ptr < *(int *)((int)thing_ptr + 0x100)) {
            val_2 = *int_ptr * 8 + *(int *)((int)thing_ptr + 0xfc);
            *(int *)((int)thing_ptr + 0x100) = int_ptr_2[1] - *(int *)(val_2 + 0x20);
            uval = *int_ptr_2 - *(int *)(val_2 + 0x1c);
            uval_2 = (int)uval >> 0x1f;
            val_2 = (uval ^ uval_2) - uval_2;
            uval = (int)*(uint *)((int)thing_ptr + 0x100) >> 0x1f;
            val_3 = (*(uint *)((int)thing_ptr + 0x100) ^ uval) - uval;
            if (val_3 < val_2) {
              val_3 = val_3 >> 1;
            }
            else {
              val_2 = val_2 >> 1;
            }
            val_2 = val_2 + val_3;
            *(int *)((int)thing_ptr + 0x100) = int_ptr_2[3];
            *(int *)((int)thing_ptr + 0x100) =
                 *(int *)((int)thing_ptr + 0x100) -
                 *(int *)(*int_ptr * 8 + *(int *)((int)thing_ptr + 0xfc) + 0x20);
            *(undefined4 *)((int)thing_ptr + 0x100) = *(undefined4 *)((int)thing_ptr + 0x100);
            uval = int_ptr_2[2] - *(int *)(*int_ptr * 8 + *(int *)((int)thing_ptr + 0xfc) + 0x1c);
            uval_2 = (int)uval >> 0x1f;
            *(uint *)((int)thing_ptr + 0xf0) = (uval ^ uval_2) - uval_2;
            uval = (int)*(uint *)((int)thing_ptr + 0x100) >> 0x1f;
            val_4 = (*(uint *)((int)thing_ptr + 0x100) ^ uval) - uval;
            val_3 = *(int *)((int)thing_ptr + 0xf0);
            if (val_4 < val_3) {
              val_4 = val_4 >> 1;
            }
            else {
              val_3 = val_3 >> 1;
            }
            *(int *)((int)thing_ptr + 0xb0) = val_4 + val_3;
          }
          val_3 = *(int *)((int)thing_ptr + 0xac);
          if (loop_i < *(int *)((int)thing_ptr + 0xac)) {
            val_3 = loop_i;
          }
          val_4 = *(int *)((int)thing_ptr + 0xb0);
          if (val_2 < *(int *)((int)thing_ptr + 0xb0)) {
            val_4 = val_2;
          }
          if (val_3 < val_4) {
            int_ptr_2[6] = (uint)(*(int *)((int)thing_ptr + 0xac) <= loop_i);
            if (*(int *)((int)thing_ptr + 0xac) <= loop_i) {
              loop_i = *(int *)((int)thing_ptr + 0xac);
            }
          }
          else {
            int_ptr_2[6] = (uint)(*(int *)((int)thing_ptr + 0xb0) <= val_2);
            loop_i = *(int *)((int)thing_ptr + 0xb0);
            if (val_2 < loop_i) {
              loop_i = val_2;
            }
            if (*int_ptr < *(int *)(*(int *)((int)thing_ptr + 0xfc) + 0x10) + -1) {
              val_2 = *(int *)((int)thing_ptr + 0xfc);
              **(undefined4 **)((int)thing_ptr + 0xec) = *(undefined4 *)(*int_ptr * 8 + val_2 + 0x14);
              **(undefined4 **)((int)thing_ptr + 0xe4) = *(undefined4 *)(*int_ptr * 8 + val_2 + 0x18);
              *int_ptr = *int_ptr + 1;
            }
          }
          if (loop_i < 0x100) {
            *(undefined4 *)((int)thing_ptr + -4) = 0xc141b;
            navigate_fn_0c1544();
          }
          else {
            loop_i = int_ptr_2[6];
            int_ptr_2[6] = 2;
            *(int *)((int)thing_ptr + 0xd4) = loop_i;
            *(undefined4 *)((int)thing_ptr + -4) =
                 *(undefined4 *)(*int_ptr * 8 + *(int *)((int)thing_ptr + 0xfc) + 0x18);
            *(undefined4 *)((int)thing_ptr + -8) = 0xc1106;
            loop_i = navigate_fn_0c1914();
            word_ptr = (undefined1 *)((int)thing_ptr + -4);
            if (loop_i == 0) {
              *(undefined4 *)((int)thing_ptr + -8) =
                   *(undefined4 *)(*int_ptr * 8 + *(int *)((int)thing_ptr + 0xf8) + 0x20);
              *(undefined4 *)((int)thing_ptr + -0xc) = 0xc1130;
              loop_i = navigate_fn_0c1914();
              if (loop_i == 0) {
                int_ptr_2[6] = *(int *)((int)thing_ptr + 0xcc);
                word_ptr = (undefined1 *)((int)thing_ptr + -8);
              }
              else {
                word_ptr = (undefined1 *)((int)thing_ptr + -8);
                if (*int_ptr < *(int *)(*(int *)((int)thing_ptr + 0xf4) + 0x10) + -1) {
                  loop_i = *(int *)((int)thing_ptr + 0xf4);
                  **(undefined4 **)((int)thing_ptr + 0xe4) =
                       *(undefined4 *)(*int_ptr * 8 + loop_i + 0x14);
                  **(undefined4 **)((int)thing_ptr + 0xdc) =
                       *(undefined4 *)(*int_ptr * 8 + loop_i + 0x18);
                  *int_ptr = *int_ptr + 1;
                  word_ptr = (undefined1 *)((int)thing_ptr + -8);
                }
              }
            }
            thing_ptr = (undefined1 **)word_ptr;
            if (int_ptr_2[6] == 2) {
              loop_i = int_ptr_2[4];
              *(int *)((int)thing_ptr + 0x100) = int_ptr_2[1] - int_ptr_2[5];
              val_2 = *(int *)((int)thing_ptr + 0xf4);
              uval = *int_ptr_2 - loop_i >> 0x1f;
              loop_i = (*int_ptr_2 - loop_i ^ uval) - uval;
              uval = (int)*(uint *)((int)thing_ptr + 0x100) >> 0x1f;
              val_3 = (*(uint *)((int)thing_ptr + 0x100) ^ uval) - uval;
              if (val_3 < loop_i) {
                val_3 = val_3 >> 1;
              }
              else {
                loop_i = loop_i >> 1;
              }
              *(int *)((int)thing_ptr + 0xd0) = val_3 + loop_i;
              loop_i = int_ptr_2[4];
              *(int *)((int)thing_ptr + 0x100) = int_ptr_2[3] - int_ptr_2[5];
              uval = int_ptr_2[2] - loop_i >> 0x1f;
              loop_i = (int_ptr_2[2] - loop_i ^ uval) - uval;
              uval = (int)*(uint *)((int)thing_ptr + 0x100) >> 0x1f;
              val_3 = (*(uint *)((int)thing_ptr + 0x100) ^ uval) - uval;
              if (val_3 < loop_i) {
                val_3 = val_3 >> 1;
              }
              else {
                loop_i = loop_i >> 1;
              }
              if ((val_2 >> 1 <= *(int *)((int)thing_ptr + 0xd0)) || (val_2 >> 1 <= val_3 + loop_i)) {
                val_4 = val_2 + 2 >> 1;
                if (*(int *)((int)thing_ptr + 0xd0) < val_4) {
                  int_ptr_2[6] = 0;
                  goto LAB_000c13fc;
                }
                if (val_3 + loop_i < val_4) {
                  int_ptr_2[6] = 1;
                  *(undefined4 *)((int)thing_ptr + -4) = 0xc1250;
                  navigate_fn_0c1544();
                  int_ptr_2[6] = *(int *)((int)thing_ptr + 0xd4);
                  goto LAB_000c141b;
                }
                *(undefined1 **)((int)thing_ptr + 0xc0) = (undefined1 *)((int)thing_ptr + 0xb4);
                loop_i = *int_ptr_2;
                *(undefined1 **)((int)thing_ptr + 0xbc) = (undefined1 *)((int)thing_ptr + 0xb8);
                val_3 = int_ptr_2[1];
                *(int *)((int)thing_ptr + 0x90) = (int_ptr_2[2] - loop_i) * 0x40;
                *(int *)((int)thing_ptr + 0xf8) = (int_ptr_2[3] - val_3) * 0x40;
                val = (longlong)*(int *)((int)thing_ptr + 0x90) *
                        (longlong)*(int *)((int)thing_ptr + 0x90);
                *(uint *)((int)thing_ptr + 0x100) =
                     (uint)val >> 0xe | (int)((ulonglong)val >> 0x20) << 0x12;
                *(undefined4 *)((int)thing_ptr + -4) = 0xc12cf;
                loop_i = bflib_system_io_fn_0e8cc8();
                if (loop_i << 7 == 0) {
                  val_3 = 0;
                  int_ptr = extraout_ECX_00;
                }
                else {
                  *(undefined4 *)((int)thing_ptr + -4) = 0xc12e6;
                  val_3 = navigate_fn_0b55a0();
                  val_3 = val_3 >> 6;
                  int_ptr = extraout_ECX_01;
                }
                **(int **)((int)thing_ptr + 0xc0) = val_3;
                if (loop_i << 7 == 0) {
                  loop_i = 0;
                }
                else {
                  *(undefined4 *)((int)thing_ptr + -4) = 0xc1308;
                  loop_i = navigate_fn_0b55a0();
                  loop_i = loop_i >> 6;
                  int_ptr = extraout_ECX_02;
                }
                **(int **)((int)thing_ptr + 0xbc) = loop_i;
                val_4 = *(int *)((int)thing_ptr + 0xb4) * (val_2 >> 9);
                val_3 = (val_2 >> 9) * *(int *)((int)thing_ptr + 0xb8);
                loop_i = int_ptr[4];
                *(int *)((int)thing_ptr + 0xe0) = int_ptr[5] - val_3;
                loop_i = loop_i - val_4;
                val_4 = val_4 + int_ptr[4];
                val_3 = val_3 + int_ptr[5];
                val_2 = *int_ptr;
                if (int_ptr[2] <= val_2) {
                  val_2 = int_ptr[2];
                }
                if (val_2 <= loop_i) {
                  val_2 = *int_ptr;
                  if (val_2 <= int_ptr[2]) {
                    val_2 = int_ptr[2];
                  }
                  if (loop_i <= val_2) {
                    val_2 = int_ptr[1];
                    if (int_ptr[3] <= val_2) {
                      val_2 = int_ptr[3];
                    }
                    *(int *)((int)thing_ptr + 0xcc) = val_2;
                    if (*(int *)((int)thing_ptr + 0xcc) <= *(int *)((int)thing_ptr + 0xe0)) {
                      val_2 = int_ptr[1];
                      if (val_2 <= int_ptr[3]) {
                        val_2 = int_ptr[3];
                      }
                      *(int *)((int)thing_ptr + 0xd8) = val_2;
                      val_2 = *(int *)((int)thing_ptr + 0xe0);
                      if (val_2 <= *(int *)((int)thing_ptr + 0xd8)) {
                        *int_ptr = loop_i;
                        int_ptr[1] = val_2;
                      }
                    }
                  }
                }
                loop_i = *int_ptr;
                if (int_ptr[2] <= *int_ptr) {
                  loop_i = int_ptr[2];
                }
                if (loop_i <= val_4) {
                  loop_i = int_ptr[2];
                  if (int_ptr[2] < *int_ptr) {
                    loop_i = *int_ptr;
                  }
                  if (val_4 <= loop_i) {
                    loop_i = int_ptr[1];
                    if (int_ptr[3] <= int_ptr[1]) {
                      loop_i = int_ptr[3];
                    }
                    if (loop_i <= val_3) {
                      loop_i = int_ptr[1];
                      if (int_ptr[1] <= int_ptr[3]) {
                        loop_i = int_ptr[3];
                      }
                      if (val_3 <= loop_i) {
                        int_ptr[2] = val_4;
                        int_ptr[3] = val_3;
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_000c13fc:
              *(undefined4 *)((int)thing_ptr + -4) = 0xc1401;
              navigate_fn_0c1544();
            }
            int_ptr_2[6] = *(int *)((int)thing_ptr + 0xd4);
          }
LAB_000c141b:
          *(int *)((int)thing_ptr + 0x50) = *int_ptr_2;
          *(int *)((int)thing_ptr + 0x54) = int_ptr_2[1];
          *(int *)((int)thing_ptr + 0x68) = int_ptr_2[2];
          *(int *)((int)thing_ptr + 0x6c) = int_ptr_2[3];
          int_ptr_2 = int_ptr_2 + 7;
          *(int *)((int)thing_ptr + 0xdc) = *(int *)((int)thing_ptr + 0xdc) + 1;
        }
        loop_i = *(int *)((int)thing_ptr + 0x98);
        *(undefined4 *)((int)thing_ptr + 0x70) = *(undefined4 *)((int)thing_ptr + 0x80);
        *(undefined4 *)((int)thing_ptr + 0x58) = *(undefined4 *)((int)thing_ptr + 0x80);
        *(undefined4 *)((int)thing_ptr + 0x74) = *(undefined4 *)((int)thing_ptr + 0x84);
        *(undefined4 *)((int)thing_ptr + 0x5c) = *(undefined4 *)((int)thing_ptr + 0x84);
        *(int *)((int)thing_ptr + 0x94) = *(int *)((int)thing_ptr + 0x94) + 4;
        *(undefined4 *)((int)thing_ptr + 0x78) = *(undefined4 *)((int)thing_ptr + 0xa8);
        *(undefined4 *)((int)thing_ptr + 0x60) = *(undefined4 *)((int)thing_ptr + 0xa8);
        *(uint *)((int)thing_ptr + 0x98) = loop_i + 1U;
        *(undefined4 *)((int)thing_ptr + 0x7c) = *(undefined4 *)((int)thing_ptr + 0x88);
        *(undefined4 *)((int)thing_ptr + 100) = *(undefined4 *)((int)thing_ptr + 0x88); /* thing->ccontrol_idx */
      } while (loop_i + 1U <= *(uint *)((int)thing_ptr + 0x118));
    }
    if (*(int *)((int)thing_ptr + 0xdc) == 0x100) {
      *(undefined4 *)((int)thing_ptr + -4) = *(undefined4 *)((int)thing_ptr + 0x118);
      *(undefined4 *)((int)thing_ptr + -8) = *(undefined4 *)((int)thing_ptr + 0x98);
      *(char **)((int)thing_ptr + -0xc) = s_grtc_Exceeded_max_path_length__i_0016b8fd;
      *(undefined1 ***)((int)thing_ptr + -0x10) = thing_ptr;
      *(undefined4 *)((int)thing_ptr + -0x14) = 0xc14e4;
      dk_sprintf();
      *(undefined4 *)((int)thing_ptr + -4) = 0xc14f6;
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 6941, g_log_buf) */
    }
    val_2 = *(int *)((int)thing_ptr + 0xc4);
    int_ptr_2[6] = 0;
    int_ptr_2[2] = val_2;
    loop_i = *(int *)((int)thing_ptr + 0xdc);
    *int_ptr_2 = val_2;
    val_2 = *(int *)((int)thing_ptr + 200);
    val_3 = *(int *)((int)thing_ptr + 0x11c);
    int_ptr_2[3] = val_2;
    loop_i = loop_i + 1;
    int_ptr_2[1] = val_2;
    *(int *)((int)thing_ptr + 0xdc) = loop_i;
    *(int *)(val_3 + 0x1c10) = loop_i;
  }
  return loop_i;
}

/******************************************************************************
 * Function : navigate_fn_0c1544 (Original VA: 0xc1544, Ghidra: FUN_000c1544)
 * Prototype: void navigate_fn_0c1544(void);
 * Address  : 0xc1544 (Size: 305 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c1544
 * Callers  : 1 -> navigate_grtc_exceeded_max_path_0c0b9c
 * Callees  : 1 -> bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void navigate_fn_0c1544(void)

{
  int *arg_eax;
  int val;
  int val_2;
  uint uval;
  int *extraout_ECX;
  int arg_edx;
  uint uval_2;
  
  uval_2 = *arg_eax - arg_eax[2] >> 0x1f;
  val = (*arg_eax - arg_eax[2] ^ uval_2) - uval_2;
  uval_2 = arg_eax[1] - arg_eax[3] >> 0x1f;
  val_2 = (arg_eax[1] - arg_eax[3] ^ uval_2) - uval_2;
  if (val_2 < val) {
    val_2 = val_2 >> 1;
  }
  else {
    val = val >> 1;
  }
  if (arg_edx <= val_2 + val) {
    if (arg_eax[6] == 1) {
      uval_2 = *arg_eax * 0x40 + arg_eax[2] * -0x40;
      uval = arg_eax[1] * 0x40 + arg_eax[3] * -0x40;
    }
    else {
      uval_2 = arg_eax[2] * 0x40 + *arg_eax * -0x40;
      uval = arg_eax[3] * 0x40 + arg_eax[1] * -0x40;
    }
    val = bflib_system_io_fn_0e8cc8();
    val = val << 0xd;
    if (val == 0) {
      val = 1;
    }
    val_2 = val;
    if ((int)uval_2 < 0) {
      uval_2 = -uval_2;
      val_2 = -val;
    }
    val_2 = ((arg_edx >> 8) + -1) * (int)(CONCAT44(uval_2 >> 0x12,uval_2 << 0xe) / (longlong)val_2);
    if ((int)uval < 0) {
      uval = -uval;
      val = -val;
    }
    val = ((arg_edx >> 8) + -1) * (int)(CONCAT44(uval >> 0x12,uval << 0xe) / (longlong)val);
    if (extraout_ECX[6] == 1) {
      *extraout_ECX = extraout_ECX[2] + val_2;
      extraout_ECX[1] = extraout_ECX[3] + val;
    }
    else {
      extraout_ECX[2] = *extraout_ECX + val_2;
      extraout_ECX[3] = extraout_ECX[1] + val;
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c1914 (Original VA: 0xc1914, Ghidra: FUN_000c1914)
 * Prototype: undefined4 navigate_fn_0c1914(int param_1);
 * Address  : 0xc1914 (Size: 321 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c1914
 * Callers  : 1 -> navigate_grtc_exceeded_max_path_0c0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 navigate_fn_0c1914(int param_1)

{
  longlong val;
  longlong val_2;
  int *arg_eax;
  int arg_ecx;
  int val_3;
  int arg_edx;
  int arg_ebx;
  uint uval;
  int val_4;
  
  val_4 = (arg_edx - arg_ecx) * 0x40;
  val_3 = (arg_ebx - param_1) * 0x40;
  val = (longlong)val_3 * (longlong)((*arg_eax - arg_edx) * 0x40);
  val_2 = (longlong)val_4 * (longlong)((arg_eax[1] - arg_ebx) * 0x40);
  uval = ((uint)val >> 0xe | (int)((ulonglong)val >> 0x20) << 0x12) -
          ((uint)val_2 >> 0xe | (int)((ulonglong)val_2 >> 0x20) << 0x12);
  val = (longlong)((arg_eax[3] - arg_eax[1]) * 0x40) * (longlong)val_4;
  val_2 = (longlong)((arg_eax[2] - *arg_eax) * 0x40) * (longlong)val_3;
  val_3 = ((uint)val >> 0xe | (int)((ulonglong)val >> 0x20) << 0x12) -
          ((uint)val_2 >> 0xe | (int)((ulonglong)val_2 >> 0x20) << 0x12);
  if (val_3 != 0) {
    if ((int)uval < 0) {
      uval = -uval;
      val_3 = -val_3;
    }
    val_3 = (int)(CONCAT44(uval >> 0x12,uval << 0xe) / (longlong)val_3);
    if ((-0x4001 < val_3) && (val_3 < 0x4001)) {
      val = (longlong)val_3 * (longlong)((arg_eax[2] - *arg_eax) * 0x40);
      arg_eax[4] = *arg_eax + ((int)((uint)val >> 0xe | (int)((ulonglong)val >> 0x20) << 0x12) >>
                            6);
      val = (longlong)val_3 * (longlong)((arg_eax[3] - arg_eax[1]) * 0x40);
      arg_eax[5] = arg_eax[1] +
                  ((int)((uint)val >> 0xe | (int)((ulonglong)val >> 0x20) << 0x12) >> 6);
      val_3 = *arg_eax;
      if (arg_eax[2] <= *arg_eax) {
        val_3 = arg_eax[2];
      }
      if (val_3 <= arg_eax[4]) {
        val_3 = *arg_eax;
        if (*arg_eax <= arg_eax[2]) {
          val_3 = arg_eax[2];
        }
        if (arg_eax[4] <= val_3) {
          val_3 = arg_eax[1];
          if (arg_eax[3] <= arg_eax[1]) {
            val_3 = arg_eax[3];
          }
          if (val_3 <= arg_eax[5]) {
            val_3 = arg_eax[1];
            if (arg_eax[1] <= arg_eax[3]) {
              val_3 = arg_eax[3];
            }
            if (arg_eax[5] <= val_3) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : navigate_fn_0c1ecc (Original VA: 0xc1ecc, Ghidra: FUN_000c1ecc)
 * Prototype: void navigate_fn_0c1ecc(undefined4 param_1);
 * Address  : 0xc1ecc (Size: 232 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c1ecc
 * Callers  : 1 -> navigate_path_init8_0c241c
 * Callees  : 3 -> navigate_update_ariadne_navigation_0b8368, navigate_fn_0bdd9c, navigate_grtc_exceeded_max_path_0c0b9c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_fn_0c1ecc(undefined4 param_1)

{
  undefined4 *arg_eax;
  undefined4 uval;
  undefined4 arg_ecx;
  undefined4 extraout_ECX;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  arg_eax[0x704] = 0;
  *arg_eax = arg_edx;
  arg_eax[1] = arg_ebx;
  arg_eax[2] = arg_ecx;
  arg_eax[3] = param_1;
  g_bss_003c5858 = -1;
  g_bss_003c584c = navigate_update_ariadne_navigation_0b8368();
  g_bss_003c5850 = navigate_update_ariadne_navigation_0b8368();
  g_bss_003c5844 = (int)(&g_bss_0038c621)[g_bss_003c584c * 4] >> 0x18;
  g_bss_003c5848 = (int)(&g_bss_0038c621)[g_bss_003c5850 * 4] >> 0x18;
  g_bss_003c5834 = arg_edx;
  g_bss_003c5838 = arg_ebx;
  g_bss_003c583c = arg_ecx;
  g_bss_003c5840 = extraout_ECX;
  if ((g_bss_003c584c != -1) && (g_bss_003c5850 != -1)) {
    g_bss_003c5858 = navigate_fn_0bdd9c(g_bss_003c584c);
    if (g_bss_003c5858 != -1) {
      uval = navigate_grtc_exceeded_max_path_0c0b9c(&g_bss_003c5860,g_bss_003c5858);
      arg_eax[0x704] = uval;
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c1fb4 (Original VA: 0xc1fb4, Ghidra: FUN_000c1fb4)
 * Prototype: void navigate_fn_0c1fb4(void);
 * Address  : 0xc1fb4 (Size: 184 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c1fb4
 * Callers  : 1 -> navigate_path_init8_0c241c
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_fn_0c1fb4(void)

{
  undefined4 *arg_eax;
  int *int_ptr;
  undefined4 *arg_edx;
  int arg_ebx;
  int loop_i;
  
  if (arg_ebx < 0x4000) {
    if (arg_ebx < 0) {
      arg_ebx = 0;
    }
  }
  else {
    arg_ebx = 0x3fff;
  }
  *arg_edx = *arg_eax;
  arg_edx[1] = arg_eax[1];
  arg_edx[2] = arg_eax[2];
  arg_edx[3] = arg_eax[3];
  arg_edx[4] = arg_eax[0x704];
  int_ptr = arg_eax + 4;
  for (loop_i = 0; loop_i < arg_eax[0x704] + -1; loop_i = loop_i + 1) {
    if (int_ptr[6] == 0) {
      arg_edx[5] = ((int_ptr[2] - *int_ptr) * arg_ebx >> 0xe) + *int_ptr;
      arg_edx[6] = ((int_ptr[3] - int_ptr[1]) * arg_ebx >> 0xe) + int_ptr[1];
    }
    else {
      arg_edx[5] = int_ptr[2] - ((int_ptr[2] - *int_ptr) * arg_ebx >> 0xe);
      arg_edx[6] = int_ptr[3] - ((int_ptr[3] - int_ptr[1]) * arg_ebx >> 0xe);
    }
    arg_edx = arg_edx + 2;
    int_ptr = int_ptr + 7;
  }
  arg_edx[5] = arg_eax[2];
  arg_edx[6] = arg_eax[3];
  return;
}

/******************************************************************************
 * Function : navigate_nav_log_0c206c (Original VA: 0xc206c, Ghidra: FUN_000c206c)
 * Prototype: int navigate_nav_log_0c206c(void);
 * Address  : 0xc206c (Size: 941 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 7349
 * Purpose  : String 'nav.log'
 * Callers  : 1 -> routes_fn_0d1420
 * Callees  : 7 -> navigate_nav_log_0b6aac, navigate_update_ariadne_navigation_0b8368, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e9fd7, bflib_system_io_fn_0f694b, bflib_system_io_fn_0f69c6
 ******************************************************************************/
int navigate_nav_log_0c206c(void)

{
  undefined8 uval;
  int val;
  int extraout_ECX;
  undefined1 local_19c [80];
  undefined1 local_14c [80];
  undefined1 local_fc [80];
  undefined1 local_ac [80];
  undefined1 local_5c [80];
  
  if (g_bss_0038c5c4 != 0) {
    dk_sprintf(local_19c,s_F__d_Connect__03d__03d__03d__03d_0016b935,g_game_turn);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
    bflib_system_io_fn_0f694b();
    if (g_bss_0038c5c4 != 0) {
      uval = rdtsc();
      g_bss_0038c5c8 = (int)uval;
    }
  }
  if (g_bss_0038c5c4 != 0) {
    uval = rdtsc();
    dk_sprintf(local_14c,s_c__d__s_0016b95d,(int)uval - g_bss_0038c5c8,s_find_0016b957);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
    bflib_system_io_fn_0f694b();
  }
  navigate_update_ariadne_navigation_0b8368();
  navigate_update_ariadne_navigation_0b8368();
  if ((g_bss_003c584c == -1) || (g_bss_003c5850 == -1)) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7349, "nav_same_component:triangle not found") */
  }
  if (g_bss_0038c5c4 != 0) {
    uval = rdtsc();
    dk_sprintf(local_ac,s_c__d__s_0016b9a2,(int)uval - g_bss_0038c5c8,s_connect_0016b999);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
    bflib_system_io_fn_0f694b();
  }
  val = navigate_nav_log_0b6aac();
  if (val == 0) {
    if (g_bss_0038c5c4 == 0) {
      return 0;
    }
    uval = rdtsc();
    dk_sprintf(local_fc,s_c__d__s_0016b9ba,(int)uval - g_bss_0038c5c8,&g_data_0016b9b7);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
  }
  else {
    if (g_bss_0038c5c4 == 0) {
      return val;
    }
    uval = rdtsc();
    dk_sprintf(local_5c,s_c__d__s_0016b9ae,(int)uval - g_bss_0038c5c8,&g_data_0016b9ab);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
  }
  bflib_system_io_fn_0f694b();
  return extraout_ECX;
}

/******************************************************************************
 * Function : navigate_path_init8_0c241c (Original VA: 0xc241c, Ghidra: FUN_000c241c)
 * Prototype: void navigate_path_init8_0c241c(undefined4 param_1,int param_2);
 * Address  : 0xc241c (Size: 1469 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 976, 7390, 7409, 7503
 * Purpose  : Log prefix 'path_init8 : implement random externally'
 * Callers  : 3 -> ariadne_update_creature_control_011e00, creature_fn_082774, routes_fn_0d1548
 * Callees  : 13 -> navigate_fn_0b5bc4, navigate_nav_log_0b6aac, navigate_update_ariadne_navigation_0b8368, navigate_fn_0bdd9c, navigate_path_out_a_bit_0c0578, navigate_rtp_exceeded_max_path_0c0740, navigate_fn_0c1ecc, navigate_fn_0c1fb4 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_path_init8_0c241c(undefined4 param_1,int param_2)

{
  undefined8 uval;
  undefined4 *arg_eax;
  int val;
  undefined4 uval_2;
  undefined4 arg_ecx;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *arg_edx;
  int extraout_EDX;
  undefined4 arg_ebx;
  undefined4 **val_2;
  undefined4 *local_1b8;
  undefined1 auStack_1a8 [80];
  undefined4 local_158 [16];
  undefined1 local_118 [176];
  undefined1 local_68 [84];
  int local_14;
  undefined4 *local_10;
  
  local_10 = arg_edx;
  if (g_bss_0038c5c4 != 0) {
    local_1b8 = arg_edx;
    dk_sprintf(local_68,s_F__d_Path__03d__03d__03d__03d_0016b9c3,g_game_turn);
    if (g_bss_00388ebc != 1) {
      g_bss_00388ebc = 1;
      g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
      g_bss_00388ec4 = g_game_turn;
    }
    if (g_bss_00388ec4 != g_game_turn) {
      g_bss_00388ec4 = g_game_turn;
      bflib_system_io_fn_0f694b();
      bflib_system_io_fn_0f69c6();
    }
    bflib_system_io_fn_0f694b();
    param_1 = extraout_ECX;
    if (g_bss_0038c5c4 != 0) {
      uval = rdtsc();
      g_bss_0038c5c8 = (int)uval;
    }
  }
  if (param_2 == -1) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7390, "path_init8 : implement random externally") */
    param_1 = extraout_ECX_00;
  }
  arg_eax[4] = 0;
  g_bss_003c5838 = arg_ebx;
  arg_eax[1] = arg_ebx;
  g_bss_003c583c = arg_ecx;
  arg_eax[2] = arg_ecx;
  g_bss_003c5840 = param_1;
  arg_eax[3] = param_1;
  g_bss_003c5834 = local_10;
  g_bss_003c5858 = -1;
  *arg_eax = local_10;
  g_bss_003c584c = navigate_update_ariadne_navigation_0b8368();
  g_bss_003c5850 = navigate_update_ariadne_navigation_0b8368();
  if ((g_bss_003c584c == -1) || (g_bss_003c5850 == -1)) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7409, "path_init8:triangle not found") */
  }
  val = navigate_nav_log_0b6aac();
  if (val == 0) {
    if (g_bss_0038c5c4 != 0) {
      rdtsc();
      local_1b8 = local_158;
      dk_sprintf();
      if (g_bss_00388ebc != 1) {
        g_bss_00388ebc = 1;
        g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
        g_bss_00388ec4 = g_game_turn;
      }
      if (g_bss_00388ec4 != g_game_turn) {
        g_bss_00388ec4 = g_game_turn;
        bflib_system_io_fn_0f694b();
        bflib_system_io_fn_0f69c6();
      }
      bflib_system_io_fn_0f694b();
      return;
    }
  }
  else {
    navigate_fn_0b5bc4();
    local_14 = extraout_EDX;
    if ((extraout_EDX < 1) || (3 < extraout_EDX)) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 976, "nav.creature_radius_set : only radius 1..3 allowed") */
    }
    g_bss_003d1b54 = local_14 * 0x100 + 0x3d1754;
    g_bss_003c5844 = (int)(&g_bss_0038c621)[g_bss_003c584c * 4] >> 0x18;
    g_bss_003c5848 = (int)(&g_bss_0038c621)[g_bss_003c5850 * 4] >> 0x18;
    if (param_2 != -2) {
      if (g_bss_0038c5c4 != 0) {
        if (g_bss_00388ebc != 1) {
          g_bss_00388ebc = 1;
          g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
          g_bss_00388ec4 = g_game_turn;
        }
        if (g_bss_00388ec4 != g_game_turn) {
          g_bss_00388ec4 = g_game_turn;
          bflib_system_io_fn_0f694b();
          bflib_system_io_fn_0f69c6();
        }
        bflib_system_io_fn_0f694b();
      }
      local_1b8 = (undefined4 *)0xc277e;
      navigate_fn_0c1ecc();
      local_1b8 = (undefined4 *)0xc2791;
      navigate_fn_0c1fb4();
      return;
    }
    g_bss_003c5858 = navigate_fn_0bdd9c();
    if (g_bss_0038c5c4 != 0) {
      local_1b8 = (undefined4 *)0xc27df;
      dk_sprintf();
      if (g_bss_00388ebc != 1) {
        g_bss_00388ebc = 1;
        g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
        g_bss_00388ec4 = g_game_turn;
      }
      if (g_bss_00388ec4 != g_game_turn) {
        g_bss_00388ec4 = g_game_turn;
        bflib_system_io_fn_0f694b();
        bflib_system_io_fn_0f69c6();
      }
      bflib_system_io_fn_0f694b();
    }
    val_2 = (undefined4 **)auStack_1a8;
    if (g_bss_003c5858 != -1) {
      local_1b8 = &g_bss_003c5860;
      uval_2 = navigate_rtp_exceeded_max_path_0c0740();
      arg_eax[4] = uval_2;
      navigate_path_out_a_bit_0c0578();
      val_2 = &local_1b8;
      if (g_bss_0038c5c4 != 0) {
        dk_sprintf(local_118,s_way__d_0016ba65,arg_eax[4]);
        if (g_bss_00388ebc != 1) {
          g_bss_00388ebc = 1;
          g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
          g_bss_00388ec4 = g_game_turn;
        }
        if (g_bss_00388ec4 != g_game_turn) {
          g_bss_00388ec4 = g_game_turn;
          bflib_system_io_fn_0f694b();
          bflib_system_io_fn_0f69c6();
        }
        bflib_system_io_fn_0f694b();
        val_2 = &local_1b8;
      }
    }
    if (g_bss_0038c5c4 != 0) {
      uval = rdtsc();
      *(undefined **)((int)val_2 + -4) = &g_data_0016ba6d;
      *(int *)((int)val_2 + -8) = (int)uval - g_bss_0038c5c8;
      *(char **)((int)val_2 + -0xc) = s_c__d__s_0016ba6e;
      *(undefined4 ***)((int)val_2 + -0x10) = val_2;
      *(undefined4 *)((int)val_2 + -0x14) = 0xc295b;
      dk_sprintf();
      if (g_bss_00388ebc != 1) {
        g_bss_00388ebc = 1;
        *(undefined4 *)((int)val_2 + -4) = 0xc2982;
        g_bss_00388ec0 = bflib_system_io_fn_0e9fd7();
        g_bss_00388ec4 = g_game_turn;
      }
      if (g_bss_00388ec4 != g_game_turn) {
        g_bss_00388ec4 = g_game_turn;
        *(undefined4 *)((int)val_2 + -4) = 0xc29b6;
        bflib_system_io_fn_0f694b();
        *(undefined4 *)((int)val_2 + -4) = 0xc29c0;
        bflib_system_io_fn_0f69c6();
      }
      *(undefined4 *)((int)val_2 + -4) = 0xc29cd;
      bflib_system_io_fn_0f694b();
    }
  }
  return;
}

/******************************************************************************
 * Function : navigate_set_nearpoint_solid_0c2a5c (Original VA: 0xc2a5c, Ghidra: FUN_000c2a5c)
 * Prototype: void navigate_set_nearpoint_solid_0c2a5c(int *param_1,int *param_2);
 * Address  : 0xc2a5c (Size: 354 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 7542
 * Purpose  : String 'set_nearpoint:solid'
 * Callers  : 1 -> navigate_nav_creature_radius_set_0c2bc0
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void navigate_set_nearpoint_solid_0c2a5c(int *param_1,int *param_2)

{
  int val;
  int arg_eax;
  uint uval;
  uint extraout_ECX;
  int arg_edx;
  int val_2;
  int val_3;
  byte flag;
  
  val_3 = *(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + arg_eax * 0x10) * 4
                  ) >> 0x10;
  val_2 = *(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + arg_edx * 2 + arg_eax * 0x10) * 2
                  ) >> 0x10;
  flag = (*(byte *)(val_2 + -0x101 + val_3 * 0x100 + g_bss_003d6428) & 0xf) == 0xf;
  if ((*(byte *)(val_2 + -0x100 + val_3 * 0x100 + g_bss_003d6428) & 0xf) == 0xf) {
    flag = flag | 2;
  }
  if ((*(byte *)(val_2 + -1 + val_3 * 0x100 + g_bss_003d6428) & 0xf) == 0xf) {
    flag = flag | 4;
  }
  if ((*(byte *)(val_2 + g_bss_003d6428 + val_3 * 0x100) & 0xf) == 0xf) {
    flag = flag | 8;
  }
  uval = (uint)flag;
  if (uval == 6) {
    if ((*(int *)(&g_bss_003af896 +
                 (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10 + (&g_data_00192134)[arg_edx] * 2) * 2)
         >> 0x10 < val_2) ||
       (*(int *)(&g_bss_003af898 +
                (uint)*(ushort *)(&g_bss_0038c618 + arg_eax * 0x10 + (&g_data_00192134)[arg_edx] * 2) * 4)
        >> 0x10 < val_3)) {
      uval = 0xe;
    }
    else {
      uval = 7;
    }
  }
  else if (uval == 9) {
    if ((*(int *)(&g_bss_003af896 +
                 (uint)*(ushort *)(&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10) * 2)
         >> 0x10 < val_2) ||
       (val_3 < *(int *)(&g_bss_003af898 +
                        (uint)*(ushort *)
                               (&g_bss_0038c618 + (&g_data_00192134)[arg_edx] * 2 + arg_eax * 0x10) * 4) >>
                0x10)) {
      uval = 0xb;
    }
    else {
      uval = 0xd;
    }
  }
  else if (uval == 0xf) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7542, "set_nearpoint:solid") */
    uval = extraout_ECX;
  }
  val = *(int *)(&g_data_001920b0 + uval * 8);
  *param_1 = val_2 * 0x100 + *(int *)(&g_data_001920ac + uval * 8);
  *param_2 = val_3 * 0x100 + val;
  return;
}

/******************************************************************************
 * Function : navigate_nav_creature_radius_set_0c2bc0 (Original VA: 0xc2bc0, Ghidra: FUN_000c2bc0)
 * Prototype: void navigate_nav_creature_radius_set_0c2bc0(int param_1,int *param_2,int *param_3);
 * Address  : 0xc2bc0 (Size: 976 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 976, 994, 995, 996, 1270, 7679
 * Purpose  : String 'nav.creature_radius_set : only radius 1..3 allowed'
 * Callers  : 1 -> routes_fn_0d1444
 * Callees  : 5 -> navigate_fn_0b5bc4, navigate_update_ariadne_navigation_0b8368, navigate_set_nearpoint_solid_0c2a5c, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
void navigate_nav_creature_radius_set_0c2bc0(int param_1,int *param_2,int *param_3)

{
  int val;
  int val_2;
  int val_3;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_4;
  uint uval;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_ECX_04;
  int val_5;
  int extraout_EDX;
  int val_6;
  int val_7;
  int val_8;
  int val_9;
  int local_28;
  short local_1c;
  int local_18;
  int local_10;
  
  navigate_fn_0b5bc4();
  if ((extraout_EDX < 1) || (val_9 = extraout_EDX, 3 < extraout_EDX)) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 976, "nav.creature_radius_set : only radius 1..3 allowed") */
    val_9 = extraout_ECX;
  }
  g_bss_003d1b54 = (undefined4 *)(val_9 * 0x100 + 0x3d1754);
  g_data_0019215c = g_data_0019215c + '\x01';
  if (g_data_0019215c == '\0') {
    LbScreenWaitVbi();
    g_data_0019215c = '\x01';
  }
  val = navigate_update_ariadne_navigation_0b8368();
  val_2 = navigate_update_ariadne_navigation_0b8368();
  val_9 = g_bss_003d1ee0;
  g_bss_003d2204 = extraout_ECX_00;
  g_bss_003d220c = extraout_ECX_00;
  (&g_bss_003cf528)[val] = g_data_0019215c;
  g_bss_003d1ee4 = (int)(short)val;
  g_bss_003d2208 = 0;
  if (val_9 < extraout_ECX_00) {
    g_bss_003d1ee0 = extraout_ECX_00;
  }
  val_9 = 0x7fffffff;
  if (val == val_2) {
    *param_2 = arg_ecx;
    *param_3 = param_1;
  }
  else {
    val_3 = 0;
    val_6 = val << 4;
    do {
      val_4 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_6) * 2) >> 0x10) *
              0x100 - arg_ecx >> 5;
      val_7 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_6) * 4) >> 0x10) *
              0x100 - param_1 >> 5;
      val_4 = val_7 * val_7 + val_4 * val_4;
      if (val_4 < val_9) {
        val_9 = val_4;
        local_10 = val;
      }
      val_3 = val_3 + 1;
      val_6 = val_6 + 2;
    } while (val_3 < 3);
    while( true ) {
      val = g_bss_003d2208;
      g_bss_003d220c = g_bss_003d220c + -1;
      if (g_bss_003d2208 == g_bss_003d2204) {
        val = -1;
      }
      else {
        g_bss_003d2208 = g_bss_003d2208 + 1;
        if (199 < g_bss_003d2208) {
          g_bss_003d2208 = 0;
        }
        val = (&g_bss_003d1ee4)[val];
      }
      if (val == -1) break;
      val_3 = 0;
      local_18 = val * 0x10;
      local_28 = 0;
      do {
        val_6 = *(int *)((int)&g_ariadne_nav_state + local_18);
        val_4 = val_6 >> 0x10;
        if (((val_4 != -1) && (g_data_0019215c != (&g_bss_003cf528)[val_4])) &&
           ((*(byte *)((int)&g_bss_0038c621 + val_4 * 0x10 + 3) & 0xf) != 0xf)) {
          uval = (uint)((&g_bss_0038c626)[val * 8] & 0x3f) | *(uint *)((int)&g_data_00192060 + val_3);
          if (((g_bss_003d1b54 != &g_bss_003d1854) && (g_bss_003d1b54 != &g_bss_003d1954)) &&
             (g_bss_003d1b54 != &g_bss_003d1a54)) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 994, "fits_thro:table err") */
            uval = extraout_ECX_01;
          }
          if (g_bss_003d1b58 != 1) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 995, "fits_thro:uninit") */
            uval = extraout_ECX_02;
          }
          if (0x3f < uval) {
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line 996, "edgebits:overflow") */
            uval = extraout_ECX_03;
          }
          if (g_bss_003d1b54[uval] != 0) {
            (&g_bss_003cf528)[val_4] = g_data_0019215c;
            val_7 = g_bss_003d2204;
            g_bss_003d2204 = g_bss_003d2204 + 1;
            local_1c = (short)((uint)val_6 >> 0x10);
            if (199 < g_bss_003d2204) {
              g_bss_003d2204 = 0;
            }
            if (g_bss_003d2204 == g_bss_003d2208) {
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
              val_7 = extraout_ECX_04;
            }
            (&g_bss_003d1ee4)[val_7] = (int)local_1c;
            g_bss_003d220c = g_bss_003d220c + 1;
            if (g_bss_003d1ee0 < g_bss_003d220c) {
              g_bss_003d1ee0 = g_bss_003d220c;
            }
            if (val_4 == val_2) {
              *param_2 = arg_ecx;
              *param_3 = param_1;
              return;
            }
            val_6 = 0;
            val_7 = val_4 << 4;
            do {
              val_8 = (*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + val_7) * 2) >>
                      0x10) * 0x100 - arg_ecx >> 5;
              val_5 = (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + val_7) * 4) >>
                      0x10) * 0x100 - param_1 >> 5;
              val_5 = val_8 * val_8 + val_5 * val_5;
              if (val_5 < val_9) {
                val_9 = val_5;
                local_10 = val_4;
              }
              val_6 = val_6 + 1;
              val_7 = val_7 + 2;
            } while (val_6 < 3);
          }
        }
        val_3 = val_3 + 4;
        local_18 = local_18 + 2;
        local_28 = local_28 + 1;
      } while (local_28 < 3);
    }
    if ((*(byte *)((int)&g_bss_0038c621 + local_10 * 0x10 + 3) & 0xf) == 0xf) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7679, "nearest_search:non navigable found") */
    }
    navigate_set_nearpoint_solid_0c2a5c(param_2,param_3);
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c2f90 (Original VA: 0xc2f90, Ghidra: FUN_000c2f90)
 * Prototype: undefined4 navigate_fn_0c2f90(int param_1);
 * Address  : 0xc2f90 (Size: 171 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c2f90
 * Callers  : 1 -> navigate_triangulation_diagnostic_0c303c
 * Callees  : 1 -> navigate_update_ariadne_navigation_0b8368
 ******************************************************************************/
undefined4 navigate_fn_0c2f90(int param_1)

{
  char ch;
  char *arg_eax;
  int val;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  int val_2;
  int val_3;
  char *local_24;
  undefined4 local_14;
  
  val_3 = 0;
  local_14 = 0;
  val_2 = 0;
  local_24 = arg_eax;
  while( true ) {
    do {
      ch = *arg_eax;
      val = navigate_update_ariadne_navigation_0b8368();
      if ((*(char *)((int)&g_bss_0038c621 + val * 0x10 + 3) != ch) &&
         ((((val_2 < arg_edx || (arg_ecx <= val_2)) || (val_3 < arg_ebx)) || (param_1 <= val_3)))) {
        local_14 = 1;
      }
      val_2 = val_2 + 1;
      arg_eax = arg_eax + 1;
    } while (val_2 < 0xff);
    arg_eax = local_24 + 0x100;
    val_3 = val_3 + 1;
    if (0xfe < val_3) break;
    val_2 = 0;
    local_24 = arg_eax;
  }
  return local_14;
}

/******************************************************************************
 * Function : navigate_triangulation_diagnostic_0c303c (Original VA: 0xc303c, Ghidra: FUN_000c303c)
 * Prototype: void navigate_triangulation_diagnostic_0c303c(void);
 * Address  : 0xc303c (Size: 1468 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 7735, 7751, 7753, 7754, 7756, 7757, 7758, 7765, 7771, 7791, 7798, 7807, 7810, 7855
 * Purpose  : Log prefix 'triangulation_diagnostic : link to free'
 * Callers  : 0 -> 
 * Callees  : 5 -> navigate_edgelen_diagnostic_0b5f44, navigate_region_diagnostic_count_0b6c04, navigate_fn_0c2f90, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void navigate_triangulation_diagnostic_0c303c(void)

{
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  undefined4 *thing_ptr;
  int loop_i;
  undefined4 local_90;
  undefined1 auStack_8c [116];
  
  thing_ptr = (undefined4 *)auStack_8c;
  if (g_bss_003d6428 != 0) {
    local_90 = 0xff;
    val = navigate_fn_0c2f90();
    thing_ptr = &local_90;
    if (val != 0) {
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7735, "diagnostic:map_area_test failed") */
      thing_ptr = &local_90;
    }
  }
  val = 0;
  *(undefined4 *)((int)thing_ptr + 0x50) = 0;
  if (0 < g_bss_0038c5d0) {
    *(undefined4 *)((int)thing_ptr + 0x54) = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + *(int *)((int)thing_ptr + 0x54)) >> 0x18 != -1) {
        loop_i = *(int *)((int)thing_ptr + 0x54);
        *(int *)((int)thing_ptr + 0x5c) = loop_i;
        *(int *)((int)thing_ptr + 100) = loop_i; /* thing->ccontrol_idx */
        *(int *)((int)thing_ptr + 0x68) = loop_i;
        *(int *)((int)thing_ptr + 0x70) = loop_i;
        *(int *)((int)thing_ptr + 0x60) = loop_i;
        *(undefined4 *)((int)thing_ptr + 0x6c) = 0;
        *(int *)((int)thing_ptr + 0x50) = *(int *)((int)thing_ptr + 0x50) + 1;
        *(int *)((int)thing_ptr + 0x58) = loop_i + 6;
        do {
          val_3 = *(int *)((int)&g_ariadne_nav_state + *(int *)((int)thing_ptr + 100)) >> 0x10; /* thing->ccontrol_idx */
          if (val_3 != -1) {
            if ((int)(&g_bss_0038c621)[val_3 * 4] >> 0x18 == -1) {
              *(undefined4 *)((int)thing_ptr + -4) = 0xc3173;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7751, "triangulation_diagnostic : link to free") */
              val_3 = extraout_ECX;
            }
            if ((int)(&g_ariadne_nav_state)[val_3 * 4] >> 0x10 == val) {
              val_2 = 0;
            }
            else if (*(int *)((int)&g_ariadne_nav_state + val_3 * 0x10 + 2) >> 0x10 == val) {
              val_2 = 1;
            }
            else if (*(int *)(&g_bss_0038c620 + val_3 * 0x10) >> 0x10 == val) {
              val_2 = 2;
            }
            else {
              val_2 = -1;
            }
            if (val_2 == -1) {
              *(undefined4 *)((int)thing_ptr + -4) = 0xc31d1;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7753, "triangulation_diagnostic : bad link back 1") */
              val_3 = extraout_ECX_00;
            }
            if (*(int *)((int)&g_ariadne_nav_state + val_2 * 2 + val_3 * 0x10) >> 0x10 != val) {
              *(undefined4 *)((int)thing_ptr + -4) = 0xc31f8;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7754, "triangulation_diagnostic : bad link back 2") */
              val_3 = extraout_ECX_01;
            }
            if (*(short *)(&g_bss_0038c618 + (&g_data_00192134)[val_2] * 2 + val_3 * 0x10) !=
                *(short *)(&g_bss_0038c618 + *(int *)((int)thing_ptr + 0x68))) {
              *(undefined4 *)((int)thing_ptr + -4) = 0xc3230;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7756, "triangulation_diagnostic : point share error") */
              val_3 = extraout_ECX_02;
            }
            if (*(short *)(&g_bss_003af898 +
                          (uint)*(ushort *)(&g_bss_0038c618 + *(int *)((int)thing_ptr + 0x70)) * 4) !=
                *(short *)(&g_bss_003af898 +
                          (uint)*(ushort *)
                                 (&g_bss_0038c618 + (&g_data_00192134)[val_2] * 2 + val_3 * 0x10) * 4)) {
              *(undefined4 *)((int)thing_ptr + -4) = 0xc3282;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7757, "triangulation_diagnostic : x geometry") */
              val_3 = extraout_ECX_03;
            }
            if (*(short *)(&g_bss_003af89a +
                          (uint)*(ushort *)(&g_bss_0038c618 + *(int *)((int)thing_ptr + 0x60)) * 4) !=
                *(short *)(&g_bss_003af89a +
                          (uint)*(ushort *)
                                 (&g_bss_0038c618 + (&g_data_00192134)[val_2] * 2 + val_3 * 0x10) * 4)) {
              *(undefined4 *)((int)thing_ptr + -4) = 0xc32d4;
              LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7758, "triangulation_diagnostic : y geometry") */
              val_3 = extraout_ECX_04;
            }
            if (*(char *)((int)&g_bss_0038c621 + *(int *)((int)thing_ptr + 0x5c) + 3) !=
                *(char *)((int)&g_bss_0038c621 + val_3 * 0x10 + 3)) {
              if ((*(int *)(&g_bss_003af896 + (uint)*(ushort *)(&g_bss_0038c618 + loop_i) * 2) >> 0x10 !=
                   *(int *)(&g_bss_003af896 +
                           (uint)*(ushort *)
                                  (&g_bss_0038c618 +
                                  *(int *)((int)&g_data_00192134 + *(int *)((int)thing_ptr + 0x6c)) * 2 +
                                  *(int *)((int)thing_ptr + 0x5c)) * 2) >> 0x10) &&
                 (*(int *)(&g_bss_003af898 + (uint)*(ushort *)(&g_bss_0038c618 + loop_i) * 4) >> 0x10 !=
                  *(int *)(&g_bss_003af898 +
                          (uint)*(ushort *)
                                 (&g_bss_0038c618 +
                                 *(int *)((int)&g_data_00192134 + *(int *)((int)thing_ptr + 0x6c)) * 2 +
                                 *(int *)((int)thing_ptr + 0x5c)) * 4) >> 0x10)) {
                *(undefined4 *)((int)thing_ptr + -4) = 0xc3363;
                LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7765, "triangulation_diagnostic: diagonal colour change") */
              }
            }
          }
          loop_i = loop_i + 2;
          *(int *)((int)thing_ptr + 100) = *(int *)((int)thing_ptr + 100) + 2; /* thing->ccontrol_idx */
          *(int *)((int)thing_ptr + 0x68) = *(int *)((int)thing_ptr + 0x68) + 2;
          *(int *)((int)thing_ptr + 0x70) = *(int *)((int)thing_ptr + 0x70) + 2;
          *(int *)((int)thing_ptr + 0x60) = *(int *)((int)thing_ptr + 0x60) + 2;
          *(int *)((int)thing_ptr + 0x6c) = *(int *)((int)thing_ptr + 0x6c) + 4;
        } while (loop_i != *(int *)((int)thing_ptr + 0x58));
      }
      val = val + 1;
      *(int *)((int)thing_ptr + 0x54) = *(int *)((int)thing_ptr + 0x54) + 0x10;
    } while (val < g_bss_0038c5d0);
  }
  if (*(int *)((int)thing_ptr + 0x50) != g_bss_0038c5d4) {
    *(undefined4 *)((int)thing_ptr + -4) = 0xc3388;
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7771, "triangulation_diagnostic : triangle count wrong") */
  }
  loop_i = 0;
  val = g_data_00192148;
  if (0 < g_bss_0038c5d0) {
    val_3 = 0;
    do {
      val = g_data_00192148;
      if (*(int *)((int)&g_bss_0038c621 + val_3) >> 0x18 == -1) {
        for (; val != loop_i; val = (int)(&g_ariadne_nav_state)[val * 4] >> 0x10) {
          if (val == -1) {
            *(undefined4 *)((int)thing_ptr + -4) = 0xc33c9;
            LbErrorLog(); /* LbErrorLog("navigate.cpp", line ?, "triangulation_diagnostic : free list omission") */
            val = extraout_ECX_05;
          }
        }
      }
      loop_i = loop_i + 1;
      val_3 = val_3 + 0x10;
      val = g_data_00192148;
    } while (loop_i < g_bss_0038c5d0);
  }
  for (; val != -1; val = (int)(&g_ariadne_nav_state)[val * 4] >> 0x10) {
    if ((int)(&g_bss_0038c621)[val * 4] >> 0x18 != -1) {
      *(undefined4 *)((int)thing_ptr + -4) = 0xc3419;
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7791, "triangulation_diagnostic : free list in use") */
      val = extraout_ECX_06;
    }
  }
  if (g_bss_0038c5d0 < 9000) {
    val = g_bss_0038c5d0 << 4;
    do {
      if (*(int *)((int)&g_bss_0038c621 + val) >> 0x18 != -1) {
        *(undefined4 *)((int)thing_ptr + -4) = 0xc345f;
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7798, "triangulation_diagnostic : high alloc used") */
        val = extraout_ECX_07;
      }
      val = val + 0x10;
    } while (val < 0x23280);
  }
  val = 0;
  for (loop_i = g_data_0019214c; loop_i != -1; loop_i = *(int *)(&g_bss_003af896 + loop_i * 2) >> 0x10) {
    val = val + 1;
    if (*(int *)(&g_bss_003af898 + loop_i * 4) >> 0x10 != -0x8000) {
      *(undefined4 *)((int)thing_ptr + -4) = 0xc349e;
      LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7807, "triangulation_diagnostic : free point in use") */
      loop_i = extraout_ECX_08;
    }
  }
  if (val + g_bss_003b3eec != g_bss_003b3ee8) {
    *(undefined4 *)((int)thing_ptr + -4) = 0xc34d3;
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7810, "triangulation_diagnostic : free point count") */
  }
  val = 0;
  if (0 < g_bss_0038c5d0) {
    do {
      val = val + 1;
    } while (val < g_bss_0038c5d0);
  }
  val = 0;
  if (0 < g_bss_0038c5d0) {
    loop_i = 0;
    do {
      if (*(int *)((int)&g_bss_0038c621 + loop_i) >> 0x18 != -1) {
        *(undefined4 *)((int)thing_ptr + -4) = 0xc3524;
        navigate_edgelen_diagnostic_0b5f44();
        *(undefined4 *)((int)thing_ptr + -4) = 0xc3538;
        navigate_edgelen_diagnostic_0b5f44();
        *(undefined4 *)((int)thing_ptr + -4) = 0xc354c;
        navigate_edgelen_diagnostic_0b5f44();
        val = extraout_ECX_09;
      }
      val = val + 1;
      loop_i = loop_i + 0x10;
    } while (val < g_bss_0038c5d0);
  }
  val = 0;
  if (0 < g_bss_003b3ee8) {
    loop_i = 0;
    do {
      val_3 = *(int *)(&g_bss_003af898 + loop_i) >> 0x10;
      if ((val_3 != -0x8000) &&
         ((((val_2 = *(int *)((int)&g_bss_003af896 + loop_i) >> 0x10, val_2 < -0x8000 ||
            (0x7fff < val_2)) || (val_3 < -0x8000)) || (0x7fff < val_3)))) {
        *(int *)((int)thing_ptr + -4) = *(int *)(&g_bss_003af898 + loop_i) >> 0x10;
        *(int *)((int)thing_ptr + -8) = *(int *)((int)&g_bss_003af896 + loop_i) >> 0x10;
        *(char **)((int)thing_ptr + -0xc) = s_diagnostic_16bit_point_overflow___0016be02;
        *(undefined4 **)((int)thing_ptr + -0x10) = thing_ptr;
        *(undefined4 *)((int)thing_ptr + -0x14) = 0xc35c9;
        dk_sprintf();
        *(undefined4 *)((int)thing_ptr + -4) = 0xc35db;
        LbErrorLog(); /* LbErrorLog("navigate.cpp", line 7855, g_log_buf) */
        loop_i = extraout_ECX_10;
      }
      val = val + 1;
      loop_i = loop_i + 4;
    } while (val < g_bss_003b3ee8);
  }
  *(undefined4 *)((int)thing_ptr + -4) = 0xc35ee;
  navigate_region_diagnostic_count_0b6c04();
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c3620 (Original VA: 0xc3620, Ghidra: FUN_000c3620)
 * Prototype: undefined8 navigate_fn_0c3620(void);
 * Address  : 0xc3620 (Size: 69 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Purpose  : Module navigate.cpp procedure @ 0x0c3620
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 navigate_fn_0c3620(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  int val;
  
  g_bss_003d220c = g_bss_003d220c + -1;
  if (g_bss_003d2208 == g_bss_003d2204) {
    uval = 0xffffffff;
    val = g_bss_003d2208;
  }
  else {
    val = g_bss_003d2208 + 1;
    if (199 < val) {
      val = 0;
    }
    uval = (&g_bss_003d1ee4)[g_bss_003d2208];
  }
  g_bss_003d2208 = val;
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : navigate_region_put_overflow_0c3670 (Original VA: 0xc3670, Ghidra: FUN_000c3670)
 * Prototype: void navigate_region_put_overflow_0c3670(void);
 * Address  : 0xc3670 (Size: 113 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp lines 1270
 * Purpose  : String 'region_put:Q overflow'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void navigate_region_put_overflow_0c3670(void)

{
  int val;
  int val_2;
  short arg_ax;
  short extraout_CX;
  
  val_2 = g_bss_003d2204;
  g_bss_003d2204 = g_bss_003d2204 + 1;
  if (199 < g_bss_003d2204) {
    g_bss_003d2204 = 0;
  }
  if (g_bss_003d2204 == g_bss_003d2208) {
    LbErrorLog(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
    arg_ax = extraout_CX;
  }
  val = g_bss_003d1ee0;
  g_bss_003d220c = g_bss_003d220c + 1;
  (&g_bss_003d1ee4)[val_2] = (int)arg_ax;
  if (val < g_bss_003d220c) {
    g_bss_003d1ee0 = g_bss_003d220c;
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c3710 (Original VA: 0xc3710, Ghidra: FUN_000c3710)
 * Prototype: void navigate_fn_0c3710(void);
 * Address  : 0xc3710 (Size: 111 bytes)
 * Module   : navigate.cpp [address_order_boundary_interpolation]
 * Purpose  : Module navigate.cpp procedure @ 0x0c3710
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void navigate_fn_0c3710(void)

{
  short *val;
  ushort uval;
  int val_2;
  int arg_eax;
  int arg_edx;
  
  if ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6 != arg_edx) {
    val_2 = ((int)(uint)(ushort)(&g_bss_0038c626)[arg_eax * 8] >> 6) * 3;
    uval = (&g_bss_0038c626)[arg_eax * 8];
    *(short *)((int)&g_bss_003d1b5c + val_2) = *(short *)((int)&g_bss_003d1b5c + val_2) + -1;
    (&g_bss_003d1b5e)[val_2] = 0;
    (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f;
    (&g_bss_0038c626)[arg_eax * 8] = uval & 0x3f | (ushort)(arg_edx << 6);
    val = (short *)((int)&g_bss_003d1b5c + arg_edx * 3);
    *val = *val + 1;
  }
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c3780 (Original VA: 0xc3780, Ghidra: FUN_000c3780)
 * Prototype: void navigate_fn_0c3780(void);
 * Address  : 0xc3780 (Size: 166 bytes)
 * Module   : navigate.cpp [address_order_boundary_interpolation]
 * Purpose  : Module navigate.cpp procedure @ 0x0c3780
 * Callers  : 1 -> magic_update_creature_and_thing_04e85c
 * Callees  : 3 -> sound_fn_06e538, sound_fn_06e5ee, draw_roll_action_random_08ccec
 ******************************************************************************/
void navigate_fn_0c3780(void)

{
  byte flag;
  int arg_eax;
  char ch;
  
  flag = *(byte *)(arg_eax + 0x13);
  ch = '\0';
  if (flag < 2) {
    if (flag == 1) {
      ch = *(char *)(arg_eax + 0x48);
    }
  }
  else if ((2 < flag) && (flag < 5)) {
    ch = *(char *)(arg_eax + 0x49) - *(char *)(arg_eax + 0x48);
  }
  draw_roll_action_random_08ccec(0,(int)ch,2);
  *(undefined1 *)(arg_eax + 0x13) = 1;
  sound_fn_06e5ee();
  sound_fn_06e538(3,0,6,0x100);
  return;
}

/******************************************************************************
 * Function : navigate_fn_0c3828 (Original VA: 0xc3828, Ghidra: FUN_000c3828)
 * Prototype: void navigate_fn_0c3828(void);
 * Address  : 0xc3828 (Size: 124 bytes)
 * Module   : navigate.cpp [address_order_boundary_interpolation]
 * Purpose  : Module navigate.cpp procedure @ 0x0c3828
 * Callers  : 1 -> magic_update_creature_and_thing_04ed3d
 * Callees  : 1 -> draw_roll_action_random_08ccec
 ******************************************************************************/
void navigate_fn_0c3828(void)

{
  byte flag;
  int arg_eax;
  char ch;
  
  flag = *(byte *)(arg_eax + 0x13);
  ch = '\0';
  if (flag < 2) {
    if (flag == 1) {
      ch = *(char *)(arg_eax + 0x49) - *(char *)(arg_eax + 0x48);
    }
  }
  else if ((2 < flag) && (flag < 5)) {
    ch = *(char *)(arg_eax + 0x48);
  }
  draw_roll_action_random_08ccec(0,(int)ch,2);
  *(undefined1 *)(arg_eax + 0x13) = 3;
  return;
}

