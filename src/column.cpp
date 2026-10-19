/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: column.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : column_fn_015318 (Original VA: 0x15318, Ghidra: FUN_00015318)
 * Prototype: void column_fn_015318(void);
 * Address  : 0x15318 (Size: 50 bytes)
 * Module   : column.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module column.cpp procedure @ 0x015318
 * Callers  : 8 -> column_could_create_column_none_015386, column_process_map_subtile_015603, column_process_map_subtile_0156de, combat_fn_0158a6, file_e14r432q_system_should_able_02cdc8, inits_fn_040f98, light_fn_0b20e0, light_fn_0b21f0
 * Callees  : 0 -> 
 ******************************************************************************/
void column_fn_015318(void)

{
  int arg_eax;
  int val;
  short *val_2;
  ushort uval;
  
  uval = 1;
  val = 8;
  val_2 = (short *)(arg_eax + 8);
  *(undefined2 *)(arg_eax + 3) = 0;
  do {
    if (*val_2 != 0) {
      *(ushort *)(arg_eax + 3) = *(ushort *)(arg_eax + 3) | uval;
    }
    val_2 = val_2 + 1;
    uval = uval * 2;
    val = val + -1;
  } while (val != 0);
  return;
}

/******************************************************************************
 * Function : column_fn_01534a (Original VA: 0x1534a, Ghidra: FUN_0001534a)
 * Prototype: longlong column_fn_01534a(void);
 * Address  : 0x1534a (Size: 60 bytes)
 * Module   : column.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module column.cpp procedure @ 0x01534a
 * Callers  : 3 -> column_allocate_column_015479, file_e14r432q_system_should_able_02cdc8, inits_fn_040f98
 * Callees  : 1 -> column_fn_01581c
 ******************************************************************************/
longlong column_fn_01534a(void)

{
  int val;
  uint arg_edx;
  int val_2;
  
  val_2 = 1;
  while( true ) {
    if (0x7ff < val_2) {
      return (ulonglong)arg_edx << 0x20;
    }
    val = column_fn_01581c();
    if (val != 0) break;
    val_2 = val_2 + 1;
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : column_could_create_column_none_015386 (Original VA: 0x15386, Ghidra: FUN_00015386)
 * Prototype: undefined8 column_could_create_column_none_015386(void);
 * Address  : 0x15386 (Size: 208 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp lines 95
 * Purpose  : String 'Could not create column: None free'
 * Callers  : 3 -> column_allocate_column_015479, file_e14r432q_system_should_able_02cdc8, inits_fn_040f98
 * Callees  : 3 -> column_fn_015318, column_fn_0157ac, LbErrorLog
 ******************************************************************************/
undefined8 column_could_create_column_none_015386(void)

{
  byte flag;
  char ch;
  undefined4 *arg_eax;
  uint uval;
  undefined4 uval_2;
  int loop_i;
  undefined4 extraout_ECX;
  undefined4 arg_edx;
  short *val;
  int extraout_EDX;
  
  loop_i = 1;
  val = (short *)&g_bss_0019e98b;
  do {
    if (0x7ff < loop_i) {
      LbErrorLog(); /* LbErrorLog("column.cpp", line 95, "Could not create column: None free") */
      uval_2 = 0;
LAB_0001544f:
      return CONCAT44(arg_edx,uval_2);
    }
    if ((*val == 0) && ((*(byte *)(val + 1) & 1) == 0)) {
      *(undefined4 *)val = *arg_eax;
      *(undefined4 *)(val + 2) = arg_eax[1];
      *(undefined4 *)(val + 4) = arg_eax[2];
      *(undefined4 *)(val + 6) = arg_eax[3];
      *(undefined4 *)(val + 8) = arg_eax[4];
      *(undefined4 *)(val + 10) = arg_eax[5];
      column_fn_015318();
      ch = column_fn_0157ac();
      *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf;
      *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) | ch << 4;
      uval = (uint)(*(byte *)(extraout_EDX + 2) >> 4);
      for (loop_i = uval * 2 + extraout_EDX; ((int)uval < 8 && (*(short *)(loop_i + 8) == 0));
          loop_i = loop_i + 2) {
        uval = uval + 1;
      }
      uval_2 = extraout_ECX;
      if ((int)uval < 8) {
        loop_i = extraout_EDX + 0xe;
        flag = 0;
        do {
          if (*(short *)(loop_i + 8) != 0) {
            *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf1;
            *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) | (flag & 7) * '\x02';
          }
          loop_i = loop_i + -2;
          flag = flag + 1;
        } while (loop_i != extraout_EDX);
      }
      else {
        *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf1;
      }
      goto LAB_0001544f;
    }
    loop_i = loop_i + 1;
    val = val + 0xc;
  } while( true );
}

/******************************************************************************
 * Function : column_fn_015456 (Original VA: 0x15456, Ghidra: FUN_00015456)
 * Prototype: void column_fn_015456(void);
 * Address  : 0x15456 (Size: 35 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Purpose  : Module column.cpp procedure @ 0x015456
 * Callers  : 1 -> column_process_map_subtile_015502
 * Callees  : 0 -> 
 ******************************************************************************/
void column_fn_015456(void)

{
  short arg_ax;
  int val;
  
  val = (int)arg_ax;
  g_bss_002e7beb = g_bss_002e7beb + -1;
  (&g_bss_0019e973)[val * 6] = g_bss_0019e973;
  (&g_bss_0019e977)[val * 6] = g_bss_0019e977;
  (&g_bss_0019e97b)[val * 6] = g_bss_0019e97b;
  (&g_bss_0019e97f)[val * 6] = g_bss_0019e97f;
  (&g_bss_0019e983)[val * 6] = g_bss_0019e983;
  (&g_bss_0019e987)[val * 6] = g_bss_0019e987;
  return;
}

/******************************************************************************
 * Function : column_allocate_column_015479 (Original VA: 0x15479, Ghidra: FUN_00015479)
 * Prototype: void column_allocate_column_015479(void);
 * Address  : 0x15479 (Size: 137 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp lines 117
 * Purpose  : String 'Cannot allocate column'
 * Callers  : 3 -> column_process_map_subtile_015603, column_process_map_subtile_0156de, jtyedit_we_should_only_dealing_04c1e3
 * Callees  : 4 -> column_fn_01534a, column_could_create_column_none_015386, column_process_map_subtile_015502, LbErrorLog
 ******************************************************************************/
void column_allocate_column_015479(void)

{
  uint *word_ptr;
  int val;
  uint arg_edx;
  uint arg_ebx;
  short local_14;
  
  column_process_map_subtile_015502();
  local_14 = column_fn_01534a();
  if (local_14 == 0) {
    local_14 = column_could_create_column_none_015386();
    if (local_14 == 0) {
      LbErrorLog(); /* LbErrorLog("column.cpp", line 117, "Cannot allocate column") */
    }
  }
  val = ((arg_ebx & 0xffff) * 0x100 + (arg_edx & 0xffff)) * 5;
  *(undefined1 *)((int)&g_map_subtiles + val + 1) = 0;
  *(byte *)((int)&g_bss_00279205 + val) = *(byte *)((int)&g_bss_00279205 + val) & 0xf8;
  word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
  *word_ptr = *word_ptr | (int)local_14 & 0x7ffU;
  *(short *)(&g_bss_0019e973 + local_14 * 6) = *(short *)(&g_bss_0019e973 + local_14 * 6) + 1;
  return;
}

/******************************************************************************
 * Function : column_process_map_subtile_015502 (Original VA: 0x15502, Ghidra: FUN_00015502)
 * Prototype: void column_process_map_subtile_015502(void);
 * Address  : 0x15502 (Size: 95 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> column_allocate_column_015479, combat_process_map_subtile_015861
 * Callees  : 1 -> column_fn_015456
 ******************************************************************************/
void column_process_map_subtile_015502(void)

{
  byte *byte_ptr;
  uint arg_eax;
  short *val;
  uint extraout_ECX;
  uint arg_edx;
  int val_2;
  
  val_2 = (int)(short)((ushort)*(undefined4 *)
                                ((int)&g_map_subtiles +
                                ((arg_edx & 0xffff) * 0x100 + (arg_eax & 0xffff)) * 5 + 1) & 0x7ff);
  val = (short *)(&g_bss_0019e973 + val_2 * 6);
  *val = *val + -1;
  if (((*(byte *)((int)&g_bss_0019e973 + val_2 * 0x18 + 2) & 1) == 0) && (*val == 0)) {
    column_fn_015456();
    arg_edx = extraout_ECX;
  }
  val_2 = ((arg_eax & 0xffff) + (arg_edx & 0xffff) * 0x100) * 5;
  *(undefined1 *)((int)&g_map_subtiles + val_2 + 1) = 0;
  byte_ptr = (byte *)((int)&g_bss_00279205 + val_2);
  *byte_ptr = *byte_ptr & 0xf8;
  return;
}

/******************************************************************************
 * Function : column_fn_015561 (Original VA: 0x15561, Ghidra: FUN_00015561)
 * Prototype: void column_fn_015561(void);
 * Address  : 0x15561 (Size: 162 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Purpose  : Module column.cpp procedure @ 0x015561
 * Callers  : 0 -> 
 * Callees  : 1 -> column_process_map_subtile_015603
 ******************************************************************************/
void column_fn_015561(void)

{
  undefined2 arg_dx;
  
  column_process_map_subtile_015603(arg_dx);
  return;
}

/******************************************************************************
 * Function : column_process_map_subtile_015603 (Original VA: 0x15603, Ghidra: FUN_00015603)
 * Prototype: void column_process_map_subtile_015603(void);
 * Address  : 0x15603 (Size: 164 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp lines 184
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> column_fn_015561
 * Callees  : 3 -> column_fn_015318, column_allocate_column_015479, LbErrorLog
 ******************************************************************************/
void column_process_map_subtile_015603(void)

{
  int arg_eax;
  byte arg_cl;
  byte extraout_CL;
  uint arg_edx;
  uint arg_ebx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  byte flag;
  undefined4 auStack_27e8 [2546];
  undefined2 local_1f;
  undefined4 auStack_1c [4];
  
  flag = 0;
  if ((*(ushort *)((int)&g_map_subtiles + ((arg_ebx & 0xffff) * 0x100 + (arg_edx & 0xffff)) * 5 + 1)
      & 0x7ff) == 0) {
    LbErrorLog(); /* LbErrorLog("column.cpp", line 184, "BBlocks") */
    arg_cl = extraout_CL;
  }
  word_ptr = &g_bss_0019e977 +
           (*(uint *)((int)&g_map_subtiles +
                     ((arg_ebx & 0xffff) * 0x100 + (arg_edx & 0xffff)) * 5 + 1) & 0x7ff) * 6 +
           (uint)flag * -2;
  word_ptr_3 = auStack_1c + (uint)flag * -2 + (uint)flag * -2;
  word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
  *(undefined4 *)(&stack0xffffffe0 + (uint)flag * -8) = *word_ptr;
  word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
  word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
  *word_ptr_3 = *word_ptr_2;
  *word_ptr_4 = *word_ptr;
  word_ptr_4[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
  (word_ptr_4 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
       (word_ptr + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
  if (arg_cl == 0) {
    local_1f = *(undefined2 *)((int)&g_bss_001aa97b + arg_eax * 0x12);
  }
  else {
    if (8 < arg_cl) {
      return;
    }
    *(short *)((int)auStack_1c + (uint)(byte)(arg_cl - 1) * 2) = (short)arg_eax;
    column_fn_015318();
  }
  column_allocate_column_015479();
  return;
}

/******************************************************************************
 * Function : column_fn_0156a7 (Original VA: 0x156a7, Ghidra: FUN_000156a7)
 * Prototype: void column_fn_0156a7(void);
 * Address  : 0x156a7 (Size: 55 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Purpose  : Module column.cpp procedure @ 0x0156a7
 * Callers  : 0 -> 
 * Callees  : 1 -> column_process_map_subtile_0156de
 ******************************************************************************/
void column_fn_0156a7(void)

{
  column_process_map_subtile_0156de();
  return;
}

/******************************************************************************
 * Function : column_process_map_subtile_0156de (Original VA: 0x156de, Ghidra: FUN_000156de)
 * Prototype: void column_process_map_subtile_0156de(void);
 * Address  : 0x156de (Size: 206 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp lines 245
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> column_fn_0156a7
 * Callees  : 3 -> column_fn_015318, column_allocate_column_015479, LbErrorLog
 ******************************************************************************/
void column_process_map_subtile_0156de(void)

{
  undefined4 uval;
  uint arg_eax;
  uint extraout_ECX;
  uint arg_edx;
  byte arg_bl;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  uint uval_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  byte flag;
  undefined4 auStackY_27ec [2545];
  undefined1 uStack_24;
  undefined2 local_23;
  undefined1 uStack_21;
  undefined4 auStack_20 [4];
  
  flag = 0;
  if (arg_bl == 0) {
    if ((*(ushort *)((int)&g_map_subtiles + ((arg_edx & 0xffff) * 0x100 + (arg_eax & 0xffff)) * 5 + 1) &
        0x7ff) == 0) {
      LbErrorLog(); /* LbErrorLog("column.cpp", line 245, "BBlocks") */
      arg_edx = extraout_ECX;
    }
    word_ptr = &g_bss_0019e977 +
             (*(uint *)((int)&g_map_subtiles + ((arg_edx & 0xffff) * 0x100 + (arg_eax & 0xffff)) * 5 + 1
                       ) & 0x7ff) * 6 + (uint)flag * -2;
    word_ptr_3 = auStack_20 + (uint)flag * -2 + (uint)flag * -2;
    word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
    *(undefined4 *)(&stack0xffffffdc + (uint)flag * -8) = *word_ptr;
    word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
    word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
    *word_ptr_3 = *word_ptr_2;
    *word_ptr_4 = *word_ptr;
    word_ptr_4[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
    (word_ptr_4 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
         (word_ptr + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
    _uStack_24 = CONCAT21(1,uStack_24);
  }
  else {
    if (8 < arg_bl) {
      return;
    }
    uval_2 = *(uint *)((int)&g_map_subtiles + ((arg_edx & 0xffff) * 0x100 + (arg_eax & 0xffff)) * 5 + 1)
            & 0x7ff;
    uval = (&g_bss_0019e973)[uval_2 * 6];
    _uStack_24 = (&g_bss_0019e977)[uval_2 * 6];
    auStack_20[0] = (&g_bss_0019e97b)[uval_2 * 6];
    auStack_20[1] = (&g_bss_0019e97f)[uval_2 * 6];
    auStack_20[2] = (&g_bss_0019e983)[uval_2 * 6];
    auStack_20[3] = (&g_bss_0019e987)[uval_2 * 6];
    *(undefined2 *)((int)auStack_20 + (uint)(byte)(arg_bl - 1) * 2) = 0;
    column_fn_015318(uval);
  }
  column_allocate_column_015479();
  return;
}

/******************************************************************************
 * Function : column_fn_0157ac (Original VA: 0x157ac, Ghidra: FUN_000157ac)
 * Prototype: longlong column_fn_0157ac(void);
 * Address  : 0x157ac (Size: 56 bytes)
 * Module   : column.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module column.cpp procedure @ 0x0157ac
 * Callers  : 4 -> column_could_create_column_none_015386, combat_fn_0158a6, file_fn_029bfe, file_process_map_subtile_02cb2b
 * Callees  : 0 -> 
 ******************************************************************************/
longlong column_fn_0157ac(void)

{
  int arg_eax;
  byte flag;
  uint arg_edx;
  uint uval;
  
  if (*(short *)(arg_eax + 3) == 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  flag = 0;
  while( true ) {
    uval = (uint)flag;
    if (7 < uval) {
      return CONCAT44(arg_edx,8);
    }
    if (*(short *)(arg_eax + 8 + uval * 2) == 0) break;
    flag = flag + 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : column_fn_0157e4 (Original VA: 0x157e4, Ghidra: FUN_000157e4)
 * Prototype: longlong column_fn_0157e4(void);
 * Address  : 0x157e4 (Size: 56 bytes)
 * Module   : column.cpp [address_order_boundary_interpolation]
 * Purpose  : Module column.cpp procedure @ 0x0157e4
 * Callers  : 1 -> ceiling_process_map_subtile_07cd3c
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0001580d) */

longlong column_fn_0157e4(void)

{
  int arg_eax;
  byte flag;
  uint arg_edx;
  
  if (*(short *)(arg_eax + 3) != 0) {
    flag = 7;
    while (*(short *)(arg_eax + 8 + (uint)flag * 2) == 0) {
      flag = flag - 1;
    }
    return CONCAT44(arg_edx,flag + 1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : column_fn_01581c (Original VA: 0x1581c, Ghidra: FUN_0001581c)
 * Prototype: undefined4 column_fn_01581c(void);
 * Address  : 0x1581c (Size: 69 bytes)
 * Module   : column.cpp [address_order_boundary_interpolation]
 * Purpose  : Module column.cpp procedure @ 0x01581c
 * Callers  : 1 -> column_fn_01534a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 column_fn_01581c(void)

{
  int arg_eax;
  int arg_edx;
  int val;
  
  if (((*(short *)(arg_eax + 5) == *(short *)(arg_edx + 5)) &&
      (*(short *)(arg_eax + 3) == *(short *)(arg_edx + 3))) &&
     (*(char *)(arg_eax + 7) == *(char *)(arg_edx + 7))) {
    val = 0;
    while( true ) {
      if (7 < val) {
        return 1;
      }
      if (*(short *)(arg_eax + 8) != *(short *)(arg_edx + 8)) break;
      arg_edx = arg_edx + 2;
      arg_eax = arg_eax + 2;
      val = val + 1;
    }
  }
  return 0;
}

