/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: navigate.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 111
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0b5550 (Ghidra: FUN_000b5550)
 * Prototype: undefined4 sub_0b5550(void);
 * Address  : 0xb5550 (Size: 39 bytes)
 * Module   : navigate.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xbd5cc, 0xbd9b4, 0xbdeec, 0xbe84c, 0xc02d4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000b5550(void)

{
  uint in_EAX;
  uint in_EDX;
  
  if (1 < (int)((in_EDX & 0xf) - (in_EAX & 0xf))) {
    return 0;
  }
  if ((in_EDX & 0x10) != 0) {
    return 2;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0b55a0 (Ghidra: FUN_000b55a0)
 * Prototype: undefined4 sub_0b55a0(void);
 * Address  : 0xb55a0 (Size: 24 bytes)
 * Module   : navigate.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000b55a0(void)

{
  uint in_EAX;
  int in_EDX;
  
  if ((int)in_EAX < 0) {
    in_EAX = -in_EAX;
    in_EDX = -in_EDX;
  }
  return (int)(CONCAT44(in_EAX >> 0x12,in_EAX << 0xe) / (longlong)in_EDX);
}

/******************************************************************************
 * Function : dk_line_intersect_0b55b8 (Ghidra: FUN_000b55b8)
 * Prototype: void dk_line_intersect_0b55b8(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6);
 * Address  : 0xb55b8 (Size: 219 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:401 ("line_intersect : division error")
 * Naming   : Log prefix 'line_intersect : division error'
 * Callers  : 1 -> 0xbb0ac
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16ae88: "navigate.cpp"
 *   - 0x16ae68: "line_intersect : division error"
 ******************************************************************************/
void FUN_000b55b8(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar1 = param_4;
  iVar4 = in_ECX;
  iVar5 = unaff_EBX;
  local_10 = in_EDX;
  if (unaff_EBX < in_EAX) {
    iVar4 = in_EDX;
    iVar5 = in_EAX;
    in_EAX = unaff_EBX;
    local_10 = in_ECX;
  }
  iVar2 = param_1;
  if (param_3 < param_1) {
    param_4 = param_2;
    iVar2 = param_3;
    param_2 = iVar1;
    param_3 = param_1;
  }
  iVar3 = (param_3 - in_EAX) - (iVar2 - in_EAX);
  iVar1 = (param_4 - local_10) - (param_2 - local_10);
  iVar2 = (param_2 - local_10) * iVar3 - (iVar2 - in_EAX) * iVar1;
  iVar1 = iVar3 * (iVar4 - local_10) - iVar1 * (iVar5 - in_EAX);
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 401, "line_intersect : division error") */
  }
  *param_5 = in_EAX * 0x100 +
             (int)(((longlong)((iVar5 - in_EAX) * 0x100) * (longlong)iVar2) / (longlong)iVar1);
  *param_6 = local_10 * 0x100 +
             (int)(((longlong)((iVar4 - local_10) * 0x100) * (longlong)iVar2) / (longlong)iVar1);
  return;
}

/******************************************************************************
 * Function : dk_nav_log_0b5694 (Ghidra: FUN_000b5694)
 * Prototype: void dk_nav_log_0b5694(void);
 * Address  : 0xb5694 (Size: 121 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : String 'nav.log'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe9fd7, 0xf694b, 0xf69c6
 * Strings  :
 *   - 0x16ae97: "nav.log"
 ******************************************************************************/
void FUN_000b5694(void)

{
  if (DAT_00388ebc != 1) {
    DAT_00388ebc = 1;
    DAT_00388ec0 = FUN_000e9fd7();
    DAT_00388ec4 = DAT_002e8bee;
  }
  if (DAT_00388ec4 != DAT_002e8bee) {
    DAT_00388ec4 = DAT_002e8bee;
    FUN_000f694b();
    FUN_000f69c6();
  }
  FUN_000f694b();
  return;
}

/******************************************************************************
 * Function : sub_0b577c (Ghidra: FUN_000b577c)
 * Prototype: void sub_0b577c(void);
 * Address  : 0xb577c (Size: 43 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b577c(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = in_EAX;
  *(undefined2 *)((int)&DAT_0038c61c + in_EAX * 0x10 + 2) = DAT_00192148;
  _DAT_00192148 = iVar1;
  *(undefined1 *)((int)&DAT_0038c621 + in_EAX * 0x10 + 3) = 0xff;
  DAT_0038c5d4 = DAT_0038c5d4 + -1;
  return;
}

/******************************************************************************
 * Function : dk_tri_new_0b57a8 (Ghidra: FUN_000b57a8)
 * Prototype: undefined8 dk_tri_new_0b57a8(void);
 * Address  : 0xb57a8 (Size: 111 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:727 ("tri_new : out of memory")
 * Naming   : Log prefix 'tri_new : out of memory'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16aeb9: "navigate.cpp"
 *   - 0x16aea1: "tri_new : out of memory"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000b57a8(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 in_EDX;
  
  if (_DAT_00192148 == -1) {
    iVar1 = DAT_0038c5d0 + 1;
    iVar2 = DAT_0038c5d0;
    DAT_0038c5d0 = iVar1;
    if (8999 < iVar1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      iVar2 = extraout_ECX;
    }
  }
  else {
    iVar2 = _DAT_00192148;
    _DAT_00192148 = (int)(&DAT_0038c61c)[_DAT_00192148 * 4] >> 0x10;
  }
  DAT_0038c5d4 = DAT_0038c5d4 + 1;
  *(undefined1 *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) = 0;
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0b5818 (Ghidra: FUN_000b5818)
 * Prototype: void sub_0b5818(void);
 * Address  : 0xb5818 (Size: 51 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b5818(void)

{
  int iVar1;
  int in_EAX;
  
  *(undefined2 *)(&DAT_003af89a + in_EAX * 4) = 0x8000;
  iVar1 = in_EAX;
  *(undefined2 *)(&DAT_003af898 + in_EAX * 4) = DAT_0019214c;
  _DAT_0019214c = iVar1;
  DAT_003b3eec = DAT_003b3eec + -1;
  return;
}

/******************************************************************************
 * Function : dk_point_new_overflow_0b584c (Ghidra: FUN_000b584c)
 * Prototype: undefined8 dk_point_new_overflow_0b584c(void);
 * Address  : 0xb584c (Size: 104 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:762 ("point_new:overflow")
 * Naming   : String 'point_new:overflow'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16aed9: "navigate.cpp"
 *   - 0x16aec6: "point_new:overflow"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000b584c(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 in_EDX;
  
  if (_DAT_0019214c == -1) {
    iVar1 = DAT_003b3ee8 + 1;
    iVar2 = DAT_003b3ee8;
    DAT_003b3ee8 = iVar1;
    if (0x1193 < iVar1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 762, "point_new:overflow") */
      iVar2 = extraout_ECX;
    }
  }
  else {
    iVar2 = _DAT_0019214c;
    _DAT_0019214c = *(int *)(&DAT_003af896 + _DAT_0019214c * 2) >> 0x10;
  }
  *(undefined2 *)(&DAT_003af89a + iVar2 * 4) = 0;
  DAT_003b3eec = DAT_003b3eec + 1;
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : dk_triangle_find_first_used_0b58b4 (Ghidra: FUN_000b58b4)
 * Prototype: void dk_triangle_find_first_used_0b58b4(void);
 * Address  : 0xb58b4 (Size: 476 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1873 ("triangle_find_first_used:not found!!")
 * Naming   : String 'triangle_find_first_used:not found!!'
 * Callers  : 2 -> 0xb5a90, 0xbfaec
 * Callees  : 3 -> 0xb5d38, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16af0b: "navigate.cpp"
 *   - 0x16aee6: "triangle_find_first_used:not found!!"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b58b4(void)

{
  undefined2 in_AX;
  int iVar1;
  int iVar2;
  undefined2 in_CX;
  undefined2 in_DX;
  int iVar4;
  undefined2 unaff_BX;
  int iVar5;
  int iVar3;
  
  iVar4 = 0;
  do {
    iVar1 = iVar4 + 0x10;
    *(undefined1 *)((int)&DAT_0038c621 + iVar4 + 3) = 0xff;
    iVar4 = iVar1;
  } while (iVar1 != 0x23280);
  DAT_0038c5cc = 1;
  DAT_0038c5d0 = 2;
  DAT_0038c5d4 = 2;
  _DAT_00192148 = 0xffffffff;
  iVar4 = 0;
  do {
    iVar1 = iVar4 + 4;
    *(undefined2 *)(&DAT_003af89a + iVar4) = 0x8000;
    iVar4 = iVar1;
  } while (iVar1 != 18000);
  DAT_003b3ee8 = 4;
  DAT_003b3eec = 4;
  _DAT_0019214c = 0xffffffff;
  _DAT_0038c618 = 3;
  _DAT_0038c61a = 1;
  DAT_0038c61c._0_2_ = 0;
  _DAT_0038c628 = 1;
  _DAT_0038c62a = 3;
  DAT_0038c61c._2_2_ = 1;
  _DAT_0038c62e = 0;
  DAT_0038c626 = 0;
  DAT_0038c636 = 0;
  _DAT_0038c62c = 2;
  _DAT_0038c620 = 0xffff;
  DAT_0038c621._1_2_ = 0xffff;
  _DAT_0038c630 = 0xffff;
  DAT_0038c631._1_2_ = 0xffff;
  DAT_0038c625 = 7;
  DAT_0038c635 = 7;
  DAT_0038c621._3_1_ = 0xf;
  DAT_0038c631._3_1_ = 0xf;
  _DAT_003af898 = in_AX;
  _DAT_003af89a = in_DX;
  DAT_003af89c._0_2_ = unaff_BX;
  DAT_003af89c._2_2_ = in_DX;
  DAT_003af8a0._0_2_ = unaff_BX;
  DAT_003af8a0._2_2_ = in_CX;
  _DAT_003af8a4 = in_AX;
  DAT_003af8a6 = in_CX;
  FUN_000b5d38();
  FUN_000b5d38();
  iVar4 = 0;
  if (0 < DAT_0038c5d0) {
    iVar1 = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar1) >> 0x18 != -1) goto LAB_000b5a53;
      iVar1 = iVar1 + 0x10;
      iVar4 = iVar4 + 1;
    } while (iVar1 < DAT_0038c5d0 << 4);
  }
  FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1873, "triangle_find_first_used:not found!!") */
  iVar4 = -1;
LAB_000b5a53:
  iVar5 = 0x10;
  iVar1 = 0;
  do {
    iVar3 = iVar1 << 4;
    do {
      iVar2 = iVar3 + 4;
      *(int *)((int)&DAT_0038c5d8 + iVar3) = iVar4;
      iVar3 = iVar2;
    } while (iVar2 != iVar5);
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar1 < 4);
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_0b5a90 (Ghidra: FUN_000b5a90)
 * Prototype: void sub_0b5a90(void);
 * Address  : 0xb5a90 (Size: 26 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xb58b4
 ******************************************************************************/
void FUN_000b5a90(void)

{
  FUN_000b58b4();
  return;
}

/******************************************************************************
 * Function : sub_0b5bc4 (Ghidra: FUN_000b5bc4)
 * Prototype: void sub_0b5bc4(void);
 * Address  : 0xb5bc4 (Size: 155 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xb5c60, 0xc241c, 0xc2bc0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b5bc4(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_003d1b58 == 0) {
    iVar1 = 0;
    DAT_003d1b58 = 1;
    do {
      *(undefined4 *)((int)&DAT_003d1854 + iVar1) = 1;
      iVar1 = iVar1 + 4;
    } while (iVar1 != 0x100);
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar3 = uVar2 & 0x2a;
      uVar2 = uVar2 + 1;
      *(uint *)((int)&DAT_003d1954 + iVar1) = (uint)(uVar3 == 0x2a);
      iVar1 = iVar1 + 4;
    } while (uVar2 < 0x40);
    uVar2 = 0;
    iVar1 = 0;
    do {
      uVar3 = uVar2 & 0x3f;
      uVar2 = uVar2 + 1;
      *(uint *)((int)&DAT_003d1a54 + iVar1) = (uint)(uVar3 == 0x3f);
      iVar1 = iVar1 + 4;
    } while (uVar2 < 0x40);
    DAT_003d1b54 = &DAT_003d1854;
  }
  return;
}

/******************************************************************************
 * Function : dk_nav_creature_radius_set_0b5c60 (Ghidra: FUN_000b5c60)
 * Prototype: void dk_nav_creature_radius_set_0b5c60(void);
 * Address  : 0xb5c60 (Size: 65 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:976 ("nav.creature_radius_set : only radius 1..3 allowed"); navigate.cpp:994 ("fits_thro:table err"); navigate.cpp:995 ("fits_thro:uninit"); navigate.cpp:996 ("edgebits:overflow")
 * Naming   : String 'nav.creature_radius_set : only radius 1..3 allowed'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xb5bc4, 0xddaf0
 * Strings  :
 *   - 0x16af4b: "navigate.cpp"
 *   - 0x16af6c: "navigate.cpp"
 *   - 0x16af8a: "navigate.cpp"
 *   - 0x16afa9: "navigate.cpp"
 *   - 0x16af18: "nav.creature_radius_set : only radius 1..3 allowed"
 ******************************************************************************/
void FUN_000b5c60(void)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  
  FUN_000b5bc4();
  if ((extraout_ECX < 1) || (iVar1 = extraout_ECX, 3 < extraout_ECX)) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 976, "nav.creature_radius_set : only radius 1..3 allowed") */
    iVar1 = extraout_ECX_00;
  }
  DAT_003d1b54 = iVar1 * 0x100 + 0x3d1754;
  return;
}

/******************************************************************************
 * Function : sub_0b5d38 (Ghidra: FUN_000b5d38)
 * Prototype: void sub_0b5d38(void);
 * Address  : 0xb5d38 (Size: 465 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0xb58b4, 0xb8874, 0xb8e64, 0xb9274, 0xb9c2c, 0xba5cc
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b5d38(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar5 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10) -
          (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10);
  uVar6 = (int)uVar5 >> 0x1f;
  iVar2 = (uVar5 ^ uVar6) - uVar6;
  uVar6 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10) -
          (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >> 0x10);
  uVar5 = (int)uVar6 >> 0x1f;
  iVar3 = (uVar6 ^ uVar5) - uVar5;
  if (3 < iVar2) {
    iVar2 = 3;
  }
  if (3 < iVar3) {
    iVar3 = 3;
  }
  iVar2 = *(int *)(iVar3 * 0x10 + 0x19206c + iVar2 * 4);
  uVar5 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >> 0x10) -
          (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10);
  uVar6 = (int)uVar5 >> 0x1f;
  iVar3 = (uVar5 ^ uVar6) - uVar6;
  uVar6 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4) >> 0x10) -
          (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10);
  uVar5 = (int)uVar6 >> 0x1f;
  iVar4 = (uVar6 ^ uVar5) - uVar5;
  if (3 < iVar3) {
    iVar3 = 3;
  }
  if (3 < iVar4) {
    iVar4 = 3;
  }
  iVar8 = in_EAX * 0x10;
  uVar5 = *(uint *)(iVar4 * 0x10 + 0x19206c + iVar3 * 4);
  uVar6 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar8) * 2) >> 0x10) -
          (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar8) * 2) >> 0x10);
  uVar7 = (int)uVar6 >> 0x1f;
  iVar3 = (uVar6 ^ uVar7) - uVar7;
  uVar6 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar8) * 4) >> 0x10) -
          (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar8) * 4) >> 0x10);
  uVar7 = (int)uVar6 >> 0x1f;
  iVar4 = (uVar6 ^ uVar7) - uVar7;
  if (3 < iVar3) {
    iVar3 = 3;
  }
  if (3 < iVar4) {
    iVar4 = 3;
  }
  uVar1 = *(undefined4 *)(iVar4 * 0x10 + 0x19206c + iVar3 * 4);
  *(byte *)(&DAT_0038c626 + in_EAX * 8) = *(byte *)(&DAT_0038c626 + in_EAX * 8) & 0xc0;
  (&DAT_0038c626)[in_EAX * 8] =
       (&DAT_0038c626)[in_EAX * 8] | (ushort)((iVar2 << 2 | uVar5) << 2) | (ushort)uVar1;
  return;
}

/******************************************************************************
 * Function : dk_edgelen_diagnostic_0b5f44 (Ghidra: FUN_000b5f44)
 * Prototype: int dk_edgelen_diagnostic_0b5f44(void);
 * Address  : 0xb5f44 (Size: 530 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1088 ("edgelen diagnostic:3")
 * Naming   : String 'edgelen diagnostic:1'
 * Callers  : 1 -> 0xc303c
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16afcb: "navigate.cpp"
 *   - 0x16afed: "navigate.cpp"
 *   - 0x16b00f: "navigate.cpp"
 *   - 0x16afb6: "edgelen diagnostic:1"
 *   - 0x16afd8: "edgelen diagnostic:2"
 *   - 0x16affa: "edgelen diagnostic:3"
 ******************************************************************************/
int FUN_000b5f44(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  int unaff_EBX;
  
  uVar2 = in_EAX;
  iVar3 = in_EDX;
  do {
    if ((*(byte *)((int)&DAT_0038c621 + uVar2 * 0x10 + 3) & 0xf) == 0xf) {
      uVar1 = 1;
      goto LAB_000b5fdf;
    }
    uVar1 = *(int *)((int)&DAT_0038c61c + iVar3 * 2 + uVar2 * 0x10) >> 0x10;
    if (uVar1 == 0xffffffff) {
      uVar1 = 1;
      goto LAB_000b5fdf;
    }
    if ((int)(&DAT_0038c61c)[uVar1 * 4] >> 0x10 == uVar2) {
      iVar3 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + uVar1 * 0x10 + 2) >> 0x10 == uVar2) {
      iVar3 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + uVar1 * 0x10) >> 0x10 == uVar2) {
      iVar3 = 2;
    }
    else {
      iVar3 = -1;
    }
    iVar3 = (&DAT_00192134)[iVar3];
    uVar2 = uVar1;
  } while (uVar1 != in_EAX);
  uVar1 = uVar1 ^ in_EAX;
LAB_000b5fdf:
  if (uVar1 != 0) {
    iVar3 = (&DAT_00192134)[in_EDX];
    uVar2 = in_EAX;
    do {
      if ((*(byte *)((int)&DAT_0038c621 + uVar2 * 0x10 + 3) & 0xf) == 0xf) {
        uVar1 = 1;
        goto LAB_000b607b;
      }
      uVar1 = *(int *)((int)&DAT_0038c61c + iVar3 * 2 + uVar2 * 0x10) >> 0x10;
      if (uVar1 == 0xffffffff) {
        uVar1 = 1;
        goto LAB_000b607b;
      }
      if ((int)(&DAT_0038c61c)[uVar1 * 4] >> 0x10 == uVar2) {
        iVar3 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + uVar1 * 0x10 + 2) >> 0x10 == uVar2) {
        iVar3 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + uVar1 * 0x10) >> 0x10 == uVar2) {
        iVar3 = 2;
      }
      else {
        iVar3 = -1;
      }
      iVar3 = (&DAT_00192134)[iVar3];
      uVar2 = uVar1;
    } while (uVar1 != in_EAX);
    uVar1 = uVar1 ^ in_EAX;
LAB_000b607b:
    if (uVar1 != 0) {
      iVar3 = (*(int *)(&DAT_003af896 +
                       (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10 + in_EDX * 2) * 2) >> 0x10) -
              (*(int *)(&DAT_003af896 +
                       (uint)*(ushort *)
                              (&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10) * 2) >>
              0x10);
      iVar4 = (*(int *)(&DAT_003af898 +
                       (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10 + in_EDX * 2) * 4) >> 0x10) -
              (*(int *)(&DAT_003af898 +
                       (uint)*(ushort *)
                              (&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10) * 4) >>
              0x10);
      iVar3 = iVar3 * iVar3 + iVar4 * iVar4;
      if (iVar3 < 4) {
        if (unaff_EBX == 1) goto LAB_000b6131;
      }
      else if (iVar3 < 9) {
        if (unaff_EBX == 2) goto LAB_000b6131;
      }
      else if (unaff_EBX == 3) goto LAB_000b6131;
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1088, "edgelen diagnostic:3") */
    }
  }
LAB_000b6131:
  return (int)(&DAT_0038c61c)
              [(*(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10) >> 0x10) * 4] >> 0x10;
}

/******************************************************************************
 * Function : dk_region_alloc_overflow_0b62e4 (Ghidra: FUN_000b62e4)
 * Prototype: undefined8 dk_region_alloc_overflow_0b62e4(void);
 * Address  : 0xb62e4 (Size: 432 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1197 ("region_alloc:overflow")
 * Naming   : String 'region_alloc:overflow'
 * Callers  : 1 -> 0xb64ac
 * Callees  : 4 -> 0xddaf0, 0xe9fd7, 0xf694b, 0xf69c6
 * Strings  :
 *   - 0x16b03b: "navigate.cpp"
 *   - 0x16b025: "region_alloc:overflow"
 *   - 0x16b01c: " garbage"
 *   - 0x16ae97: "nav.log"
 ******************************************************************************/
undefined8 FUN_000b62e4(void)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 in_EDX;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar5 = 3;
  uVar2 = 1;
  iVar3 = 0x7fffffff;
  uVar8 = 0xffffffff;
  do {
    while (uVar6 = uVar2, iVar7 = *(int *)((int)&DAT_003d1b58 + iVar5 + 2) >> 0x10, iVar3 <= iVar7)
    {
LAB_000b6319:
      uVar2 = uVar6 + 1;
      iVar5 = iVar5 + 3;
      uVar6 = uVar8;
      if (299 < uVar2) goto LAB_000b6340;
    }
    if (iVar7 == 0) goto LAB_000b6488;
    if ((&DAT_003d1b5e)[iVar5] != '\0') goto LAB_000b6319;
    iVar5 = iVar5 + 3;
    uVar2 = uVar6 + 1;
    iVar3 = iVar7;
    uVar8 = uVar6;
  } while (uVar6 + 1 < 300);
LAB_000b6340:
  if (uVar6 == 0xffffffff) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1197, "region_alloc:overflow") */
  }
  if (DAT_0038c5c4 != 0) {
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
    FUN_000f694b();
  }
  if (0 < DAT_0038c5d0) {
    iVar5 = DAT_0038c5d0 * 0x10;
    iVar3 = 0;
    do {
      if ((*(int *)((int)&DAT_0038c621 + iVar3) >> 0x18 != -1) &&
         ((int)(uint)*(ushort *)((int)&DAT_0038c626 + iVar3) >> 6 == uVar6)) {
        if (uVar6 != 0) {
          psVar1 = (short *)((int)&DAT_003d1b5c + uVar6 * 3);
          *psVar1 = *psVar1 + -1;
          (&DAT_003d1b5e)[uVar6 * 3] = 0;
          uVar4 = *(ushort *)((int)&DAT_0038c626 + iVar3) & 0x3f;
          *(ushort *)((int)&DAT_0038c626 + iVar3) = uVar4;
          DAT_003d1b5c = DAT_003d1b5c + 1;
          *(ushort *)((int)&DAT_0038c626 + iVar3) = uVar4;
        }
        if (*(int *)((int)&DAT_003d1b58 + uVar6 * 3 + 2) >> 0x10 == 0) break;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 < iVar5);
  }
LAB_000b6488:
  return CONCAT44(in_EDX,uVar6);
}

/******************************************************************************
 * Function : sub_0b6494 (Ghidra: FUN_000b6494)
 * Prototype: void sub_0b6494(void);
 * Address  : 0xb6494 (Size: 22 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_000b6494(void)

{
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : dk_region_put_overflow_0b64ac (Ghidra: FUN_000b64ac)
 * Prototype: void dk_region_put_overflow_0b64ac(void);
 * Address  : 0xb64ac (Size: 1529 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1270 ("region_put:Q overflow"); navigate.cpp:1270 ("region_put:Q overflow")
 * Naming   : String 'region_put:Q overflow'
 * Callers  : 1 -> 0xb6aac
 * Callees  : 2 -> 0xb62e4, 0xddaf0
 * Strings  :
 *   - 0x16b05e: "navigate.cpp"
 *   - 0x16b048: "region_put:Q overflow"
 ******************************************************************************/
void FUN_000b64ac(void)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  int local_3c;
  int local_38;
  int local_28;
  int local_1c;
  
  iVar4 = FUN_000b62e4();
  DAT_003d2204 = 0;
  iVar5 = iVar4 * 3;
  (&DAT_003d1b5e)[iVar5] = 1;
  DAT_003d2208 = 0;
  DAT_003d220c = 0;
  if ((int)(uint)(ushort)(&DAT_0038c626)[extraout_ECX * 8] >> 6 != iVar4) {
    iVar10 = ((int)(uint)(ushort)(&DAT_0038c626)[extraout_ECX * 8] >> 6) * 3;
    psVar1 = (short *)((int)&DAT_003d1b5c + iVar10);
    *psVar1 = *psVar1 + -1;
    (&DAT_003d1b5e)[iVar10] = 0;
    (&DAT_0038c626)[extraout_ECX * 8] = (&DAT_0038c626)[extraout_ECX * 8] & 0x3f;
    sVar2 = *(short *)((int)&DAT_003d1b5c + iVar5);
    (&DAT_0038c626)[extraout_ECX * 8] = (&DAT_0038c626)[extraout_ECX * 8] | (ushort)(iVar4 << 6);
    *(short *)((int)&DAT_003d1b5c + iVar5) = sVar2 + 1;
  }
  iVar5 = DAT_003d2204;
  DAT_003d2204 = DAT_003d2204 + 1;
  if (199 < DAT_003d2204) {
    DAT_003d2204 = 0;
  }
  uVar7 = extraout_ECX;
  if (DAT_003d2204 == DAT_003d2208) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
    uVar7 = extraout_ECX_00;
  }
  (&DAT_003d1ee4)[iVar5] = (int)(short)extraout_ECX;
  DAT_003d220c = DAT_003d220c + 1;
  if (DAT_003d1ee0 < DAT_003d220c) {
    DAT_003d1ee0 = DAT_003d220c;
  }
  local_28 = 0;
  uVar9 = uVar7;
  iVar5 = local_28;
LAB_000b6739:
  do {
    if ((*(byte *)((int)&DAT_0038c621 + uVar9 * 0x10 + 3) & 0xf) == 0xf) {
      uVar6 = 1;
    }
    else {
      uVar6 = *(int *)((int)&DAT_0038c61c + iVar5 * 2 + uVar9 * 0x10) >> 0x10;
      if (uVar6 == 0xffffffff) {
        uVar6 = 1;
      }
      else {
        if ((int)(&DAT_0038c61c)[uVar6 * 4] >> 0x10 == uVar9) {
          iVar5 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + uVar6 * 0x10 + 2) >> 0x10 == uVar9) {
          iVar5 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + uVar6 * 0x10) >> 0x10 == uVar9) {
          iVar5 = 2;
        }
        else {
          iVar5 = -1;
        }
        uVar9 = uVar6;
        iVar5 = (&DAT_00192134)[iVar5];
        if (uVar6 != uVar7) goto LAB_000b6739;
        uVar6 = uVar6 ^ uVar7;
      }
    }
    iVar5 = local_28;
    uVar9 = uVar7;
    if (uVar6 == 0) {
      do {
        uVar3 = (&DAT_0038c626)[uVar9 * 8];
        *(byte *)(&DAT_0038c626 + uVar9 * 8) = *(byte *)(&DAT_0038c626 + uVar9 * 8) & 0xc0;
        (&DAT_0038c626)[uVar9 * 8] =
             (&DAT_0038c626)[uVar9 * 8] |
             uVar3 & 0x3f | (ushort)(3 << ((char)iVar5 * '\x02' & 0x1fU));
        uVar6 = *(int *)((int)&DAT_0038c61c + iVar5 * 2 + uVar9 * 0x10) >> 0x10;
        if (uVar6 == 0xffffffff) break;
        if ((int)(&DAT_0038c61c)[uVar6 * 4] >> 0x10 == uVar9) {
          iVar5 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + uVar6 * 0x10 + 2) >> 0x10 == uVar9) {
          iVar5 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + uVar6 * 0x10) >> 0x10 == uVar9) {
          iVar5 = 2;
        }
        else {
          iVar5 = -1;
        }
        uVar3 = (&DAT_0038c626)[uVar6 * 8];
        *(byte *)(&DAT_0038c626 + uVar6 * 8) = *(byte *)(&DAT_0038c626 + uVar6 * 8) & 0xc0;
        (&DAT_0038c626)[uVar6 * 8] =
             (&DAT_0038c626)[uVar6 * 8] |
             uVar3 & 0x3f | (ushort)(3 << ((char)iVar5 * '\x02' & 0x1fU));
        iVar5 = (&DAT_00192134)[iVar5];
        uVar9 = uVar6;
      } while (uVar6 != uVar7);
    }
    iVar5 = local_28 + 1;
    uVar9 = uVar7;
    local_28 = iVar5;
    if (2 < iVar5) {
      do {
        iVar5 = DAT_003d2208;
        DAT_003d220c = DAT_003d220c + -1;
        if (DAT_003d2208 == DAT_003d2204) {
          uVar7 = 0xffffffff;
        }
        else {
          DAT_003d2208 = DAT_003d2208 + 1;
          if (199 < DAT_003d2208) {
            DAT_003d2208 = 0;
          }
          uVar7 = (&DAT_003d1ee4)[iVar5];
        }
        if (uVar7 == 0xffffffff) {
          return;
        }
        local_38 = uVar7 << 4;
        local_3c = 0;
        do {
          iVar5 = *(int *)((int)&DAT_0038c61c + local_38);
          iVar10 = iVar5 >> 0x10;
          if (((iVar10 != -1) && ((*(byte *)((int)&DAT_0038c621 + iVar10 * 0x10 + 3) & 0xf) != 0xf))
             && ((int)(uint)(ushort)(&DAT_0038c626)[iVar10 * 8] >> 6 != iVar4)) {
            local_1c = 0;
            uVar9 = uVar7;
            iVar8 = local_1c;
LAB_000b6943:
            do {
              if ((*(byte *)((int)&DAT_0038c621 + uVar9 * 0x10 + 3) & 0xf) == 0xf) {
                uVar6 = 1;
              }
              else {
                uVar6 = *(int *)((int)&DAT_0038c61c + iVar8 * 2 + uVar9 * 0x10) >> 0x10;
                if (uVar6 == 0xffffffff) {
                  uVar6 = 1;
                }
                else {
                  if ((int)(&DAT_0038c61c)[uVar6 * 4] >> 0x10 == uVar9) {
                    iVar8 = 0;
                  }
                  else if (*(int *)((int)&DAT_0038c61c + uVar6 * 0x10 + 2) >> 0x10 == uVar9) {
                    iVar8 = 1;
                  }
                  else if (*(int *)(&DAT_0038c620 + uVar6 * 0x10) >> 0x10 == uVar9) {
                    iVar8 = 2;
                  }
                  else {
                    iVar8 = -1;
                  }
                  uVar9 = uVar6;
                  iVar8 = (&DAT_00192134)[iVar8];
                  if (uVar6 != uVar7) goto LAB_000b6943;
                  uVar6 = uVar6 ^ uVar7;
                }
              }
              iVar8 = local_1c;
              uVar9 = uVar7;
              if (uVar6 == 0) {
                do {
                  uVar3 = (&DAT_0038c626)[uVar9 * 8];
                  *(byte *)(&DAT_0038c626 + uVar9 * 8) = *(byte *)(&DAT_0038c626 + uVar9 * 8) & 0xc0
                  ;
                  (&DAT_0038c626)[uVar9 * 8] =
                       (&DAT_0038c626)[uVar9 * 8] |
                       uVar3 & 0x3f | (ushort)(3 << ((char)iVar8 * '\x02' & 0x1fU));
                  uVar6 = *(int *)((int)&DAT_0038c61c + iVar8 * 2 + uVar9 * 0x10) >> 0x10;
                  if (uVar6 == 0xffffffff) break;
                  if ((int)(&DAT_0038c61c)[uVar6 * 4] >> 0x10 == uVar9) {
                    iVar8 = 0;
                  }
                  else if (*(int *)((int)&DAT_0038c61c + uVar6 * 0x10 + 2) >> 0x10 == uVar9) {
                    iVar8 = 1;
                  }
                  else if (*(int *)(&DAT_0038c620 + uVar6 * 0x10) >> 0x10 == uVar9) {
                    iVar8 = 2;
                  }
                  else {
                    iVar8 = -1;
                  }
                  uVar3 = (&DAT_0038c626)[uVar6 * 8];
                  *(byte *)(&DAT_0038c626 + uVar6 * 8) = *(byte *)(&DAT_0038c626 + uVar6 * 8) & 0xc0
                  ;
                  (&DAT_0038c626)[uVar6 * 8] =
                       (&DAT_0038c626)[uVar6 * 8] |
                       uVar3 & 0x3f | (ushort)(3 << ((char)iVar8 * '\x02' & 0x1fU));
                  iVar8 = (&DAT_00192134)[iVar8];
                  uVar9 = uVar6;
                } while (uVar6 != uVar7);
              }
              iVar8 = local_1c + 1;
              uVar9 = uVar7;
              local_1c = iVar8;
            } while (iVar8 < 3);
            if ((int)(uint)(ushort)(&DAT_0038c626)[iVar10 * 8] >> 6 != iVar4) {
              iVar8 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar10 * 8] >> 6) * 3;
              (&DAT_003d1b5e)[iVar8] = 0;
              uVar3 = (&DAT_0038c626)[iVar10 * 8];
              *(short *)((int)&DAT_003d1b5c + iVar8) = *(short *)((int)&DAT_003d1b5c + iVar8) + -1;
              (&DAT_0038c626)[iVar10 * 8] = uVar3 & 0x3f;
              (&DAT_0038c626)[iVar10 * 8] = uVar3 & 0x3f | (ushort)(iVar4 << 6);
              psVar1 = (short *)((int)&DAT_003d1b5c + iVar4 * 3);
              *psVar1 = *psVar1 + 1;
            }
            iVar10 = DAT_003d2204;
            DAT_003d2204 = DAT_003d2204 + 1;
            if (199 < DAT_003d2204) {
              DAT_003d2204 = 0;
            }
            if (DAT_003d2204 == DAT_003d2208) {
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
              iVar10 = extraout_ECX_01;
            }
            DAT_003d220c = DAT_003d220c + 1;
            (&DAT_003d1ee4)[iVar10] = (int)(short)((uint)iVar5 >> 0x10);
            if (DAT_003d1ee0 < DAT_003d220c) {
              DAT_003d1ee0 = DAT_003d220c;
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
 * Function : dk_nav_log_0b6aac (Ghidra: FUN_000b6aac)
 * Prototype: undefined4 dk_nav_log_0b6aac(void);
 * Address  : 0xb6aac (Size: 344 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : String 'nav.log'
 * Callers  : 2 -> 0xc206c, 0xc241c
 * Callees  : 4 -> 0xb64ac, 0xe9fd7, 0xf694b, 0xf69c6
 * Strings  :
 *   - 0x16b06b: " fill"
 *   - 0x16ae97: "nav.log"
 ******************************************************************************/
undefined4 FUN_000b6aac(void)

{
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  int iVar1;
  int iVar2;
  
  if (((*(byte *)((int)&DAT_0038c621 + in_EAX * 0x10 + 3) & 0xf) != 0xf) &&
     ((*(byte *)((int)&DAT_0038c621 + in_EDX * 0x10 + 3) & 0xf) != 0xf)) {
    iVar1 = (int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6;
    iVar2 = (int)(uint)(ushort)(&DAT_0038c626)[in_EDX * 8] >> 6;
    if ((&DAT_003d1b5e)[iVar1 * 3] == '\x01') {
      if (iVar1 == iVar2) {
        return 1;
      }
    }
    else if ((&DAT_003d1b5e)[iVar2 * 3] == '\x01') {
      if (iVar1 == iVar2) {
        return 1;
      }
    }
    else {
      if (DAT_0038c5c4 != 0) {
        if (DAT_00388ebc != 1) {
          DAT_00388ebc = 1;
          DAT_00388ec0 = FUN_000e9fd7();
          DAT_00388ec4 = DAT_002e8bee;
        }
        if (DAT_00388ec4 != DAT_002e8bee) {
          DAT_00388ec4 = DAT_002e8bee;
          FUN_000f694b();
          FUN_000f69c6();
        }
        FUN_000f694b();
      }
      FUN_000b64ac();
      if ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6 ==
          (int)(uint)(ushort)(&DAT_0038c626)[extraout_ECX * 8] >> 6) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_region_diagnostic_count_0b6c04 (Ghidra: FUN_000b6c04)
 * Prototype: void dk_region_diagnostic_count_0b6c04(void);
 * Address  : 0xb6c04 (Size: 445 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1425 ("region_diagnostic:count"); navigate.cpp:1429 ("region_diagnostic:total"); navigate.cpp:1445 ("region_diagnostic:adjacent components")
 * Naming   : String 'region_diagnostic:count'
 * Callers  : 1 -> 0xc303c
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16b089: "navigate.cpp"
 *   - 0x16b0ae: "navigate.cpp"
 *   - 0x16b0e1: "navigate.cpp"
 *   - 0x16b071: "region_diagnostic:count"
 *   - 0x16b096: "region_diagnostic:total"
 *   - 0x16b0bb: "region_diagnostic:adjacent components"
 ******************************************************************************/
void FUN_000b6c04(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_ECX_00;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  if (0 < DAT_0038c5d0) {
    iVar3 = 0;
    do {
      if ((*(int *)((int)&DAT_0038c621 + iVar3) >> 0x18 != -1) &&
         ((int)(uint)*(ushort *)((int)&DAT_0038c626 + iVar3) >> 6 == 0)) {
        local_24 = local_24 + 1;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 < DAT_0038c5d0 * 0x10);
  }
  iVar4 = 1;
  iVar3 = 3;
  do {
    if (*(int *)((int)&DAT_003d1b58 + iVar3 + 2) >> 0x10 != 0) {
      iVar2 = 0;
      if (0 < DAT_0038c5d0) {
        iVar1 = 0;
        do {
          if ((*(int *)((int)&DAT_0038c621 + iVar1) >> 0x18 != -1) &&
             ((int)(uint)*(ushort *)((int)&DAT_0038c626 + iVar1) >> 6 == iVar4)) {
            iVar2 = iVar2 + 1;
          }
          iVar1 = iVar1 + 0x10;
        } while (iVar1 < DAT_0038c5d0 * 0x10);
      }
      if (iVar2 != *(int *)((int)&DAT_003d1b58 + iVar3 + 2) >> 0x10) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1425, "region_diagnostic:count") */
        iVar2 = extraout_ECX;
      }
      local_24 = local_24 + iVar2;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 3;
  } while (iVar4 < 300);
  if (local_24 != DAT_0038c5d4) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1429, "region_diagnostic:total") */
  }
  local_20 = 0;
  if (0 < DAT_0038c5d0) {
    local_1c = 0;
    do {
      iVar3 = (int)(uint)*(ushort *)((int)&DAT_0038c626 + local_1c) >> 6;
      if (*(int *)((int)&DAT_0038c621 + local_1c) >> 0x18 != -1) {
        iVar4 = local_1c;
        do {
          iVar2 = (int)(uint)(ushort)(&DAT_0038c626)
                                     [(*(int *)((int)&DAT_0038c61c + iVar4) >> 0x10) * 8] >> 6;
          if ((iVar3 != iVar2) &&
             ((((&DAT_003d1b5e)[iVar3 * 3] == '\x01' && (iVar2 != 0)) ||
              (((&DAT_003d1b5e)[iVar2 * 3] == '\x01' && (iVar3 != 0)))))) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1445, "region_diagnostic:adjacent components") */
            iVar4 = extraout_ECX_00;
          }
          iVar4 = iVar4 + 2;
        } while (iVar4 != local_1c + 6);
      }
      local_1c = local_1c + 0x10;
      local_20 = local_20 + 1;
    } while (local_20 < DAT_0038c5d0);
  }
  return;
}

/******************************************************************************
 * Function : sub_0b6df0 (Ghidra: FUN_000b6df0)
 * Prototype: undefined8 sub_0b6df0(void);
 * Address  : 0xb6df0 (Size: 57 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b6df0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  
  iVar1 = 3;
  iVar2 = 0;
  do {
    if ((*(int *)((int)&DAT_003d1b58 + iVar1 + 2) >> 0x10 != 0) &&
       ((&DAT_003d1b5e)[iVar1] == '\x01')) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 3;
  } while (iVar1 != 900);
  return CONCAT44(in_EDX,iVar2 + 1);
}

/******************************************************************************
 * Function : dk_Regions_0b6e29 (Ghidra: FUN_000b6e29)
 * Prototype: void dk_Regions_0b6e29(void);
 * Address  : 0xb6e29 (Size: 236 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Log prefix 'Regions : %d/%d  max %s:%d'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe7714
 * Strings  :
 *   - 0x16b0ee: "queue"
 *   - 0x16b0f4: "Regions : %d/%d  max %s:%d\n"
 *   - 0x16b110: "R%03d Component:%d Tri:%04d\n"
 ******************************************************************************/
void FUN_000b6e29(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar8;
  char local_58 [84];
  char *pcVar7;
  
  bVar8 = 0;
  iVar2 = 3;
  do {
    iVar2 = iVar2 + 3;
  } while (iVar2 != 900);
  iVar2 = 3;
  do {
    iVar2 = iVar2 + 3;
  } while (iVar2 != 900);
  FUN_000e7714();
  iVar4 = 0;
  iVar2 = extraout_EDX;
  do {
    iVar3 = *(int *)((int)&DAT_003d1b58 + iVar4 + 2) >> 0x10;
    if (iVar3 != 0) {
      FUN_000e7714(local_58,s_R_03d_Component__d_Tri__04d_0016b110,iVar2,(&DAT_003d1b5e)[iVar4],
                   iVar3);
      pcVar5 = local_58;
      iVar2 = -1;
      pcVar7 = in_EAX;
      do {
        pcVar6 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        iVar2 = extraout_EDX_00;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 3;
    if (299 < iVar2) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0b70c4 (Ghidra: FUN_000b70c4)
 * Prototype: undefined4 sub_0b70c4(void);
 * Address  : 0xb70c4 (Size: 433 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0xb7e14, 0xb8368, 0xbab7c, 0xbb0ac
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000b70c4(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_EBX;
  int iVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar9 = *in_ECX;
  iVar2 = *unaff_EBX * 0x10;
  iVar5 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar9 * 2 + iVar2) * 4) >>
          0x10) * 0x100 - in_EDX;
  iVar8 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar9 * 2 + iVar2) * 2) >>
          0x10) * 0x100 - in_EAX;
  lVar1 = (longlong)iVar8 *
          (longlong)
          ((*(int *)(&DAT_003af898 +
                    (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar9] * 2 + iVar2) * 4) >>
           0x10) * 0x100 - in_EDX);
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  lVar1 = (longlong)iVar5 *
          (longlong)
          ((*(int *)(&DAT_003af896 +
                    (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar9] * 2 + iVar2) * 2) >>
           0x10) * 0x100 - in_EAX);
  iVar2 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uint)lVar1;
  cVar10 = uVar3 != uVar4;
  uVar3 = (uint)(uVar3 < uVar4);
  uVar4 = iVar6 - iVar2;
  bVar12 = SBORROW4(iVar6,iVar2) != SBORROW4(uVar4,uVar3);
  bVar11 = (int)(uVar4 - uVar3) < 0;
  if (uVar4 != uVar3) {
    cVar10 = (bVar12 == bVar11) - (bVar12 != bVar11);
  }
  iVar2 = *unaff_EBX;
  bVar11 = '\0' < cVar10;
  while( true ) {
    lVar1 = (longlong)iVar8 *
            (longlong)
            ((*(int *)(&DAT_003af898 +
                      (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar9] * 2 + iVar2 * 0x10) *
                      4) >> 0x10) * 0x100 - in_EDX);
    iVar6 = (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1;
    lVar1 = (longlong)iVar5 *
            (longlong)
            ((*(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar9] * 2 + iVar2 * 0x10) *
                      2) >> 0x10) * 0x100 - in_EAX);
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    cVar10 = uVar3 != uVar4;
    uVar3 = (uint)(uVar3 < uVar4);
    uVar4 = iVar6 - iVar7;
    bVar13 = SBORROW4(iVar6,iVar7) != SBORROW4(uVar4,uVar3);
    bVar12 = (int)(uVar4 - uVar3) < 0;
    if (uVar4 != uVar3) {
      cVar10 = (bVar13 == bVar12) - (bVar13 != bVar12);
    }
    if ((bVar11) && ('\0' >= cVar10)) break;
    iVar6 = *(int *)((int)&DAT_0038c61c + iVar9 * 2 + iVar2 * 0x10) >> 0x10;
    if (iVar6 < 0) {
      return 0xffffffff;
    }
    if ((int)(&DAT_0038c61c)[iVar6 * 4] >> 0x10 == iVar2) {
      iVar9 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10 == iVar2) {
      iVar9 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10 == iVar2) {
      iVar9 = 2;
    }
    else {
      iVar9 = -1;
    }
    iVar9 = (&DAT_00192134)[iVar9];
    iVar2 = iVar6;
    bVar11 = '\0' < cVar10;
  }
  *unaff_EBX = iVar2;
  *in_ECX = iVar9;
  return (&DAT_00192134)[iVar9];
}

/******************************************************************************
 * Function : dk_triangulation_border_start_0b72f8 (Ghidra: FUN_000b72f8)
 * Prototype: void dk_triangulation_border_start_0b72f8(void);
 * Address  : 0xb72f8 (Size: 228 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1695 ("triangulation_border_start : not found")
 * Naming   : Log prefix 'triangulation_border_start : not found'
 * Callers  : 1 -> 0xb73dc
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16b180: "navigate.cpp"
 *   - 0x16b159: "triangulation_border_start : not found"
 ******************************************************************************/
void FUN_000b72f8(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *in_EDX;
  int iVar3;
  int iVar4;
  
  if (0 < DAT_003d23a0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)((int)&DAT_003d2210 + iVar4);
      iVar3 = iVar2 * 0x10;
      if ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1) {
        iVar1 = 0;
        do {
          if (*(int *)((int)&DAT_0038c61c + iVar3) >> 0x10 == -1) {
            *in_EAX = iVar2;
            *in_EDX = iVar1;
            return;
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 2;
        } while (iVar1 < 3);
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < DAT_003d23a0 * 4);
  }
  iVar4 = 0;
  if (0 < DAT_0038c5d0) {
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar2) >> 0x18 != -1) {
        iVar1 = 0;
        iVar3 = iVar2;
        do {
          if (*(int *)((int)&DAT_0038c61c + iVar3) >> 0x10 == -1) {
            *in_EAX = iVar4;
            *in_EDX = iVar1;
            return;
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 2;
        } while (iVar1 < 3);
      }
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + 1;
    } while (iVar2 < DAT_0038c5d0 * 0x10);
  }
  FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1695, "triangulation_border_start : not found") */
  return;
}

/******************************************************************************
 * Function : dk_triangulation_border_init_overflow_0b73dc (Ghidra: FUN_000b73dc)
 * Prototype: void dk_triangulation_border_init_overflow_0b73dc(void);
 * Address  : 0xb73dc (Size: 226 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1715 ("triangulation_border_init:overflow")
 * Naming   : String 'triangulation_border_init:overflow'
 * Callers  : 1 -> 0xbfaec
 * Callees  : 2 -> 0xb72f8, 0xddaf0
 * Strings  :
 *   - 0x16b1b0: "navigate.cpp"
 *   - 0x16b18d: "triangulation_border_init:overflow"
 ******************************************************************************/
void FUN_000b73dc(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  FUN_000b72f8();
  DAT_003d23a0 = 0;
  iVar2 = local_20;
  iVar3 = local_1c;
  do {
    DAT_003d23a0 = DAT_003d23a0 + 1;
    (&DAT_003d220c)[DAT_003d23a0] = iVar2;
    if (99 < DAT_003d23a0) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1715, "triangulation_border_init:overflow") */
      iVar2 = extraout_ECX;
    }
    iVar3 = (&DAT_00192134)[iVar3];
    while (iVar1 = *(int *)((int)&DAT_0038c61c + iVar3 * 2 + iVar2 * 0x10) >> 0x10, iVar1 != -1) {
      if ((int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10 == iVar2) {
        iVar3 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar1 * 0x10 + 2) >> 0x10 == iVar2) {
        iVar3 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar1 * 0x10) >> 0x10 == iVar2) {
        iVar3 = 2;
      }
      else {
        iVar3 = -1;
      }
      iVar3 = (&DAT_00192134)[iVar3];
      iVar2 = iVar1;
    }
  } while ((iVar2 != local_20) || (iVar3 != local_1c));
  return;
}

/******************************************************************************
 * Function : sub_0b74fc (Ghidra: FUN_000b74fc)
 * Prototype: bool sub_0b74fc(void);
 * Address  : 0xb74fc (Size: 348 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbcddc
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000b74fc(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  
  iVar5 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >> 0x10;
  iVar9 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10;
  iVar10 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >> 0x10;
  iVar6 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4) >> 0x10;
  iVar2 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10;
  iVar11 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10;
  lVar1 = (longlong)(iVar10 * 0x100 + iVar9 * -0x100) * (longlong)(unaff_EBX + iVar5 * -0x100);
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  lVar1 = (longlong)(iVar6 * 0x100 + iVar5 * -0x100) * (longlong)(in_EDX + iVar9 * -0x100);
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uint)lVar1;
  cVar12 = uVar3 != uVar4;
  uVar3 = (uint)(uVar3 < uVar4);
  uVar4 = iVar7 - iVar8;
  bVar14 = SBORROW4(iVar7,iVar8) != SBORROW4(uVar4,uVar3);
  bVar13 = (int)(uVar4 - uVar3) < 0;
  if (uVar4 != uVar3) {
    cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
  }
  if (cVar12 < '\x01') {
    lVar1 = (longlong)(iVar11 * 0x100 + iVar10 * -0x100) * (longlong)(unaff_EBX + iVar6 * -0x100);
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1;
    lVar1 = (longlong)(iVar2 * 0x100 + iVar6 * -0x100) * (longlong)(in_EDX + iVar10 * -0x100);
    iVar6 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    cVar12 = uVar3 != uVar4;
    uVar3 = (uint)(uVar3 < uVar4);
    uVar4 = iVar7 - iVar6;
    bVar14 = SBORROW4(iVar7,iVar6) != SBORROW4(uVar4,uVar3);
    bVar13 = (int)(uVar4 - uVar3) < 0;
    if (uVar4 != uVar3) {
      cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
    }
    if (cVar12 < '\x01') {
      lVar1 = (longlong)(iVar9 * 0x100 + iVar11 * -0x100) * (longlong)(unaff_EBX + iVar2 * -0x100);
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
      uVar3 = (uint)lVar1;
      lVar1 = (longlong)(iVar5 * 0x100 + iVar2 * -0x100) * (longlong)(in_EDX + iVar11 * -0x100);
      iVar2 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
      cVar12 = uVar3 != uVar4;
      uVar3 = (uint)(uVar3 < uVar4);
      uVar4 = iVar6 - iVar2;
      bVar14 = SBORROW4(iVar6,iVar2) != SBORROW4(uVar4,uVar3);
      bVar13 = (int)(uVar4 - uVar3) < 0;
      if (uVar4 != uVar3) {
        cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
      }
      if (cVar12 < '\x01') {
        bVar13 = false;
        goto LAB_000b7646;
      }
    }
  }
  bVar13 = true;
LAB_000b7646:
  return !bVar13;
}

/******************************************************************************
 * Function : sub_0b7658 (Ghidra: FUN_000b7658)
 * Prototype: bool sub_0b7658(void);
 * Address  : 0xb7658 (Size: 348 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000b7658(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  
  iVar5 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >> 0x10;
  iVar9 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10;
  iVar10 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >> 0x10;
  iVar6 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4) >> 0x10;
  iVar2 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10;
  iVar11 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10;
  lVar1 = (longlong)(iVar10 * 0x100 + iVar9 * -0x100) * (longlong)(unaff_EBX + iVar5 * -0x100);
  iVar7 = (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  lVar1 = (longlong)(iVar6 * 0x100 + iVar5 * -0x100) * (longlong)(in_EDX + iVar9 * -0x100);
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar4 = (uint)lVar1;
  cVar12 = uVar3 != uVar4;
  uVar3 = (uint)(uVar3 < uVar4);
  uVar4 = iVar7 - iVar8;
  bVar14 = SBORROW4(iVar7,iVar8) != SBORROW4(uVar4,uVar3);
  bVar13 = (int)(uVar4 - uVar3) < 0;
  if (uVar4 != uVar3) {
    cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
  }
  if (cVar12 < '\0') {
    lVar1 = (longlong)(iVar11 * 0x100 + iVar10 * -0x100) * (longlong)(unaff_EBX + iVar6 * -0x100);
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = (uint)lVar1;
    lVar1 = (longlong)(iVar2 * 0x100 + iVar6 * -0x100) * (longlong)(in_EDX + iVar10 * -0x100);
    iVar6 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    cVar12 = uVar3 != uVar4;
    uVar3 = (uint)(uVar3 < uVar4);
    uVar4 = iVar7 - iVar6;
    bVar14 = SBORROW4(iVar7,iVar6) != SBORROW4(uVar4,uVar3);
    bVar13 = (int)(uVar4 - uVar3) < 0;
    if (uVar4 != uVar3) {
      cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
    }
    if (cVar12 < '\0') {
      lVar1 = (longlong)(iVar9 * 0x100 + iVar11 * -0x100) * (longlong)(unaff_EBX + iVar2 * -0x100);
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
      uVar3 = (uint)lVar1;
      lVar1 = (longlong)(iVar5 * 0x100 + iVar2 * -0x100) * (longlong)(in_EDX + iVar11 * -0x100);
      iVar2 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
      cVar12 = uVar3 != uVar4;
      uVar3 = (uint)(uVar3 < uVar4);
      uVar4 = iVar6 - iVar2;
      bVar14 = SBORROW4(iVar6,iVar2) != SBORROW4(uVar4,uVar3);
      bVar13 = (int)(uVar4 - uVar3) < 0;
      if (uVar4 != uVar3) {
        cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
      }
      if (cVar12 < '\0') {
        bVar13 = false;
        goto LAB_000b77a2;
      }
    }
  }
  bVar13 = true;
LAB_000b77a2:
  return !bVar13;
}

/******************************************************************************
 * Function : sub_0b77b4 (Ghidra: FUN_000b77b4)
 * Prototype: undefined4 sub_0b77b4(void);
 * Address  : 0xb77b4 (Size: 746 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1873 ("triangle_find_first_used:not found!!")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbafbc
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16af0b: "navigate.cpp"
 ******************************************************************************/
undefined4 FUN_000b77b4(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_EDX;
  int iVar9;
  int iVar10;
  int unaff_EBX;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  
  iVar11 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10) >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar11 * 4] >> 0x10 == in_EAX) {
    iVar14 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar11 * 0x10 + 2) >> 0x10 == in_EAX) {
    iVar14 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar11 * 0x10) >> 0x10 == in_EAX) {
    iVar14 = 2;
  }
  else {
    iVar14 = -1;
  }
  iVar2 = in_EAX * 0x10;
  iVar12 = *(int *)(&DAT_003af898 +
                   (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[in_EDX] * 2 + iVar2) * 4) >>
           0x10;
  iVar6 = *(int *)(&DAT_003af896 +
                  (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[in_EDX] * 2 + iVar2) * 2) >>
          0x10;
  iVar7 = *(int *)(&DAT_003af896 +
                  (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192130)[in_EDX] * 2 + iVar2) * 2) >>
          0x10;
  iVar13 = *(int *)(&DAT_003af898 +
                   (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192130)[in_EDX] * 2 + iVar2) * 4) >>
           0x10;
  iVar8 = *(int *)(&DAT_003af896 +
                  (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar14] * 2 + iVar11 * 0x10) * 2
                  ) >> 0x10;
  iVar14 = *(int *)(&DAT_003af898 +
                   (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar14] * 2 + iVar11 * 0x10) *
                   4) >> 0x10;
  iVar11 = *(int *)(&DAT_003af898 +
                   (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar2) * 4) >>
           0x10;
  iVar2 = *(int *)(&DAT_003af896 +
                  (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar2) * 2) >>
          0x10;
  if ((unaff_EBX == iVar6) && (in_ECX == iVar12)) {
    uVar3 = 0;
  }
  else {
    if ((unaff_EBX == iVar7) && (in_ECX == iVar13)) {
      return 1;
    }
    if ((unaff_EBX == iVar8) && (in_ECX == iVar14)) {
      return 3;
    }
    if ((unaff_EBX == iVar2) && (in_ECX == iVar11)) {
      return 2;
    }
    lVar1 = (longlong)(iVar7 - iVar6) * (longlong)(in_ECX - iVar12);
    iVar9 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    lVar1 = (longlong)(iVar13 - iVar12) * (longlong)(unaff_EBX - iVar6);
    iVar10 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = (uint)lVar1;
    cVar15 = uVar4 != uVar5;
    uVar4 = (uint)(uVar4 < uVar5);
    uVar5 = iVar9 - iVar10;
    bVar17 = SBORROW4(iVar9,iVar10) != SBORROW4(uVar5,uVar4);
    bVar16 = (int)(uVar5 - uVar4) < 0;
    if (uVar5 != uVar4) {
      cVar15 = (bVar17 == bVar16) - (bVar17 != bVar16);
    }
    if ('\0' < cVar15) {
      return 0xfffffffe;
    }
    if (cVar15 == '\0') {
      return 4;
    }
    lVar1 = (longlong)(iVar8 - iVar7) * (longlong)(in_ECX - iVar13);
    iVar9 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    lVar1 = (longlong)(iVar14 - iVar13) * (longlong)(unaff_EBX - iVar7);
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = (uint)lVar1;
    cVar15 = uVar4 != uVar5;
    uVar4 = (uint)(uVar4 < uVar5);
    uVar5 = iVar9 - iVar7;
    bVar17 = SBORROW4(iVar9,iVar7) != SBORROW4(uVar5,uVar4);
    bVar16 = (int)(uVar5 - uVar4) < 0;
    if (uVar5 != uVar4) {
      cVar15 = (bVar17 == bVar16) - (bVar17 != bVar16);
    }
    if ('\0' < cVar15) {
      return 0xfffffffe;
    }
    if (cVar15 == '\0') {
      return 6;
    }
    lVar1 = (longlong)(iVar2 - iVar8) * (longlong)(in_ECX - iVar14);
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    lVar1 = (longlong)(iVar11 - iVar14) * (longlong)(unaff_EBX - iVar8);
    iVar14 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = (uint)lVar1;
    cVar15 = uVar4 != uVar5;
    uVar4 = (uint)(uVar4 < uVar5);
    uVar5 = iVar7 - iVar14;
    bVar17 = SBORROW4(iVar7,iVar14) != SBORROW4(uVar5,uVar4);
    bVar16 = (int)(uVar5 - uVar4) < 0;
    if (uVar5 != uVar4) {
      cVar15 = (bVar17 == bVar16) - (bVar17 != bVar16);
    }
    if ('\0' < cVar15) {
      return 0xfffffffe;
    }
    if (cVar15 == '\0') {
      return 7;
    }
    lVar1 = (longlong)(iVar6 - iVar2) * (longlong)(in_ECX - iVar11);
    iVar14 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    lVar1 = (longlong)(iVar12 - iVar11) * (longlong)(unaff_EBX - iVar2);
    iVar11 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = (uint)lVar1;
    cVar15 = uVar4 != uVar5;
    uVar4 = (uint)(uVar4 < uVar5);
    uVar5 = iVar14 - iVar11;
    bVar17 = SBORROW4(iVar14,iVar11) != SBORROW4(uVar5,uVar4);
    bVar16 = (int)(uVar5 - uVar4) < 0;
    if (uVar5 != uVar4) {
      cVar15 = (bVar17 == bVar16) - (bVar17 != bVar16);
    }
    if ('\0' < cVar15) {
      return 0xfffffffe;
    }
    if (cVar15 == '\0') {
      return 5;
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/******************************************************************************
 * Function : dk_triangle_find_first_used_0b7b4c (Ghidra: FUN_000b7b4c)
 * Prototype: int dk_triangle_find_first_used_0b7b4c(void);
 * Address  : 0xb7b4c (Size: 353 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1873 ("triangle_find_first_used:not found!!"); navigate.cpp:1873 ("triangle_find_first_used:not found!!")
 * Naming   : String 'triangle_find_first_used:not found!!'
 * Callers  : 2 -> 0xb7d64, 0xb7e14
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16af0b: "navigate.cpp"
 *   - 0x16aee6: "triangle_find_first_used:not found!!"
 ******************************************************************************/
int FUN_000b7b4c(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar2;
  int iVar3;
  
  iVar1 = in_EAX >> 0xe;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (3 < iVar1) {
    iVar1 = 3;
  }
  iVar2 = in_EDX >> 0xe;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (3 < iVar2) {
    iVar2 = 3;
  }
  if ((-1 < iVar1 + -1) &&
     ((int)(&DAT_0038c621)[(&DAT_0038c5d4)[iVar2 * 4 + iVar1] * 4] >> 0x18 != -1)) {
    return (&DAT_0038c5d4)[iVar2 * 4 + iVar1];
  }
  if ((iVar1 + 1 < 4) &&
     ((int)(&DAT_0038c621)[(&DAT_0038c5dc)[iVar2 * 4 + iVar1] * 4] >> 0x18 != -1)) {
    return (&DAT_0038c5dc)[iVar2 * 4 + iVar1];
  }
  if ((-1 < iVar2 + -1) &&
     ((int)(&DAT_0038c621)[(&DAT_0038c5c8)[iVar2 * 4 + iVar1] * 4] >> 0x18 != -1)) {
    return (&DAT_0038c5c8)[iVar2 * 4 + iVar1];
  }
  if ((iVar2 + 1 < 4) &&
     ((int)(&DAT_0038c621)[(&DAT_0038c5e8)[iVar2 * 4 + iVar1] * 4] >> 0x18 != -1)) {
    return (&DAT_0038c5e8)[iVar2 * 4 + iVar1];
  }
  iVar1 = 0;
  do {
    iVar3 = 0;
    iVar2 = iVar1;
    do {
      if ((int)(&DAT_0038c621)[*(int *)((int)&DAT_0038c5d8 + iVar2) * 4] >> 0x18 != -1) {
        return *(int *)((int)&DAT_0038c5d8 + iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 4);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x40);
  iVar1 = 0;
  if (0 < DAT_0038c5d0) {
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar2) >> 0x18 != -1) {
        return iVar1;
      }
      iVar2 = iVar2 + 0x10;
      iVar1 = iVar1 + 1;
    } while (iVar2 < DAT_0038c5d0 << 4);
  }
  FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1873, "triangle_find_first_used:not found!!") */
  return -1;
}

/******************************************************************************
 * Function : dk_triangle_find_cache_get_0b7d64 (Ghidra: FUN_000b7d64)
 * Prototype: int dk_triangle_find_cache_get_0b7d64(void);
 * Address  : 0xb7d64 (Size: 141 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1970 ("triangle_find_cache_get:overflow")
 * Naming   : String 'triangle_find_cache_get:overflow'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xb7b4c, 0xddaf0
 * Strings  :
 *   - 0x16b1de: "navigate.cpp"
 *   - 0x16b1bd: "triangle_find_cache_get:overflow"
 ******************************************************************************/
int FUN_000b7d64(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int in_EDX;
  
  iVar1 = in_EAX >> 0xe;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (3 < iVar1) {
    iVar1 = 3;
  }
  iVar2 = in_EDX >> 0xe;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (3 < iVar2) {
    iVar2 = 3;
  }
  iVar3 = (&DAT_0038c5d8)[iVar2 * 4 + iVar1];
  if ((int)(&DAT_0038c621)[iVar3 * 4] >> 0x18 == -1) {
    iVar3 = FUN_000b7b4c();
    if ((iVar3 < 0) || (DAT_0038c5d0 < iVar3)) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1970, "triangle_find_cache_get:overflow") */
      iVar3 = extraout_ECX;
    }
    (&DAT_0038c5d8)[iVar2 * 4 + iVar1] = iVar3;
  }
  return iVar3;
}

/******************************************************************************
 * Function : dk_triangle_find_cache_get_0b7e14 (Ghidra: FUN_000b7e14)
 * Prototype: int dk_triangle_find_cache_get_0b7e14(void);
 * Address  : 0xb7e14 (Size: 691 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1970 ("triangle_find_cache_get:overflow")
 * Naming   : String 'triangle_find_cache_get:overflow'
 * Callers  : 4 -> 0xb80c8, 0xb8368, 0xb95f0, 0xbba28
 * Callees  : 3 -> 0xb70c4, 0xb7b4c, 0xddaf0
 * Strings  :
 *   - 0x16b1de: "navigate.cpp"
 *   - 0x16b1bd: "triangle_find_cache_get:overflow"
 ******************************************************************************/
int FUN_000b7e14(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int extraout_ECX;
  int in_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  
  iVar2 = in_EAX >> 0xe;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  if (3 < iVar3) {
    iVar3 = 3;
  }
  iVar4 = in_EDX >> 0xe;
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = 0;
  }
  if (3 < iVar5) {
    iVar5 = 3;
  }
  iVar6 = (&DAT_0038c5d8)[iVar5 * 4 + iVar3];
  if ((int)(&DAT_0038c621)[iVar6 * 4] >> 0x18 == -1) {
    iVar6 = FUN_000b7b4c();
    if ((iVar6 < 0) || (DAT_0038c5d0 < iVar6)) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1970, "triangle_find_cache_get:overflow") */
      iVar6 = extraout_ECX;
    }
    (&DAT_0038c5d8)[iVar5 * 4 + iVar3] = iVar6;
  }
switchD_000b80bf_default:
  iVar11 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar6 * 0x10) * 4) >> 0x10) *
           0x100 - in_EDX;
  iVar3 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar6 * 0x10) * 2) >> 0x10) *
          0x100 - in_EAX;
  iVar5 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar6 * 0x10) * 2) >> 0x10) *
          0x100 - in_EAX;
  iVar12 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar6 * 0x10) * 4) >> 0x10) *
           0x100 - in_EDX;
  iVar13 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + iVar6 * 4) * 2) >> 0x10) *
           0x100 - in_EAX;
  lVar1 = (longlong)iVar3 * (longlong)iVar12;
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uint)lVar1;
  lVar1 = (longlong)iVar11 * (longlong)iVar5;
  iVar10 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uint)lVar1;
  cVar14 = uVar7 != uVar8;
  uVar7 = (uint)(uVar7 < uVar8);
  uVar8 = iVar9 - iVar10;
  bVar18 = SBORROW4(iVar9,iVar10) != SBORROW4(uVar8,uVar7);
  bVar17 = (int)(uVar8 - uVar7) < 0;
  if (uVar8 != uVar7) {
    cVar14 = (bVar18 == bVar17) - (bVar18 != bVar17);
  }
  iVar10 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + iVar6 * 4) * 4) >> 0x10) *
           0x100 - in_EDX;
  lVar1 = (longlong)iVar5 * (longlong)iVar10;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uint)lVar1;
  lVar1 = (longlong)iVar12 * (longlong)iVar13;
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uint)lVar1;
  cVar15 = uVar7 != uVar8;
  uVar7 = (uint)(uVar7 < uVar8);
  uVar8 = iVar5 - iVar9;
  bVar18 = SBORROW4(iVar5,iVar9) != SBORROW4(uVar8,uVar7);
  bVar17 = (int)(uVar8 - uVar7) < 0;
  if (uVar8 != uVar7) {
    cVar15 = (bVar18 == bVar17) - (bVar18 != bVar17);
  }
  lVar1 = (longlong)iVar13 * (longlong)iVar11;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = (uint)lVar1;
  lVar1 = (longlong)iVar10 * (longlong)iVar3;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar8 = (uint)lVar1;
  cVar16 = uVar7 != uVar8;
  uVar7 = (uint)(uVar7 < uVar8);
  uVar8 = iVar5 - iVar3;
  bVar18 = SBORROW4(iVar5,iVar3) != SBORROW4(uVar8,uVar7);
  bVar17 = (int)(uVar8 - uVar7) < 0;
  if (uVar8 != uVar7) {
    cVar16 = (bVar18 == bVar17) - (bVar18 != bVar17);
  }
  switch(('\0' < cVar16) * '\x04' + ('\0' < cVar15) * '\x02' + ('\0' < cVar14)) {
  case '\0':
    goto switchD_000b80bf_caseD_0;
  case '\x01':
    iVar6 = (int)(&DAT_0038c61c)[iVar6 * 4] >> 0x10;
    goto switchD_000b80bf_default;
  case '\x02':
    iVar6 = *(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10;
    goto switchD_000b80bf_default;
  case '\x03':
    uVar19 = 1;
    break;
  case '\x04':
    iVar6 = *(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10;
    goto switchD_000b80bf_default;
  case '\x05':
    uVar19 = 0;
    break;
  case '\x06':
  case '\a':
    uVar19 = 2;
    break;
  default:
    goto switchD_000b80bf_default;
  }
  FUN_000b70c4(iVar6,uVar19);
  goto switchD_000b80bf_default;
switchD_000b80bf_caseD_0:
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (3 < iVar2) {
    iVar2 = 3;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (3 < iVar4) {
    iVar4 = 3;
  }
  (&DAT_0038c5d8)[iVar4 * 4 + iVar2] = iVar6;
  return iVar6;
}

/******************************************************************************
 * Function : sub_0b80c8 (Ghidra: FUN_000b80c8)
 * Prototype: undefined4 sub_0b80c8(void);
 * Address  : 0xb80c8 (Size: 249 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xb81c4, 0xbab7c, 0xbb0ac, 0xbba28, 0xbf698
 * Callees  : 1 -> 0xb7e14
 ******************************************************************************/
undefined4 FUN_000b80c8(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *extraout_ECX;
  int in_EDX;
  int *unaff_EBX;
  
  iVar1 = FUN_000b7e14();
  if (-1 < iVar1) {
    if ((in_EAX == *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1 * 0x10) * 2) >>
                   0x10) &&
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1 * 0x10) * 4) >> 0x10 ==
        in_EDX)) {
      *unaff_EBX = iVar1;
      *extraout_ECX = 0;
      return 1;
    }
    if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar1 * 0x10) * 2) >> 0x10 ==
         in_EAX) &&
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar1 * 0x10) * 4) >> 0x10 ==
        in_EDX)) {
      *unaff_EBX = iVar1;
      *extraout_ECX = 1;
      return 1;
    }
    if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + iVar1 * 4) * 2) >> 0x10 ==
         in_EAX) &&
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + iVar1 * 4) * 4) >> 0x10 == in_EDX
       )) {
      *unaff_EBX = iVar1;
      *extraout_ECX = 2;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0b81c4 (Ghidra: FUN_000b81c4)
 * Prototype: undefined4 sub_0b81c4(int *param_1,int *param_2);
 * Address  : 0xb81c4 (Size: 418 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xbb50c, 0xbc3c8, 0xbef98, 0xbf3f0, 0xbf588
 * Callees  : 1 -> 0xb80c8
 ******************************************************************************/
undefined4 FUN_000b81c4(int *param_1,int *param_2)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int in_EDX;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  int local_28;
  int local_24;
  int local_14;
  
  iVar2 = FUN_000b80c8();
  if (iVar2 != 0) {
    local_14 = local_24;
    iVar9 = unaff_EBX - in_EAX;
    iVar8 = in_ECX - in_EDX;
    iVar2 = local_28;
    do {
      iVar3 = *(int *)(&DAT_003af898 +
                      (uint)*(ushort *)
                             (&DAT_0038c618 + (&DAT_00192134)[local_14] * 2 + iVar2 * 0x10) * 4) >>
              0x10;
      iVar10 = (*(int *)(&DAT_003af896 +
                        (uint)*(ushort *)
                               (&DAT_0038c618 + (&DAT_00192134)[local_14] * 2 + iVar2 * 0x10) * 2)
               >> 0x10) - in_EAX;
      iVar6 = (int)((ulonglong)((longlong)iVar10 * (longlong)iVar8) >> 0x20);
      uVar4 = (uint)((longlong)iVar10 * (longlong)iVar8);
      lVar1 = (longlong)(iVar3 - in_EDX) * (longlong)iVar9;
      iVar7 = (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1;
      cVar11 = uVar4 != uVar5;
      uVar4 = (uint)(uVar4 < uVar5);
      uVar5 = iVar6 - iVar7;
      bVar13 = SBORROW4(iVar6,iVar7) != SBORROW4(uVar5,uVar4);
      bVar12 = (int)(uVar5 - uVar4) < 0;
      if (uVar5 != uVar4) {
        cVar11 = (bVar13 == bVar12) - (bVar13 != bVar12);
      }
      if (cVar11 == '\0') {
        if (iVar10 < 0) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(iVar10 != 0);
        }
        if (iVar9 < 0) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(iVar9 != 0);
        }
        if (uVar4 == uVar5) {
          if (iVar3 - in_EDX < 0) {
            uVar4 = 0xffffffff;
          }
          else {
            uVar4 = (uint)(iVar3 != in_EDX);
          }
          if (iVar8 < 0) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(iVar8 != 0);
          }
          if (uVar4 == uVar5) {
            *param_1 = iVar2;
            *param_2 = local_14;
            return 1;
          }
        }
      }
      iVar3 = *(int *)((int)&DAT_0038c61c + local_14 * 2 + iVar2 * 0x10) >> 0x10;
      if (iVar3 == -1) {
        return 0;
      }
      if ((int)(&DAT_0038c61c)[iVar3 * 4] >> 0x10 == iVar2) {
        iVar2 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) >> 0x10 == iVar2) {
        iVar2 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar3 * 0x10) >> 0x10 == iVar2) {
        iVar2 = 2;
      }
      else {
        iVar2 = -1;
      }
      local_14 = (&DAT_00192134)[iVar2];
      iVar2 = iVar3;
    } while (iVar3 != local_28);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0b8368 (Ghidra: FUN_000b8368)
 * Prototype: int sub_0b8368(void);
 * Address  : 0xb8368 (Size: 420 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xc1ecc, 0xc206c, 0xc241c, 0xc2bc0, 0xc2f90
 * Callees  : 2 -> 0xb70c4, 0xb7e14
 ******************************************************************************/
int FUN_000b8368(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  int local_24;
  
  iVar2 = FUN_000b7e14();
  if (-1 < iVar2) {
    local_24 = 0;
    iVar9 = iVar2 << 4;
    do {
      if (((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar9) * 2) >> 0x10) * 0x100
           == in_EAX) &&
         ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar9) * 4) >> 0x10) * 0x100
          == in_EDX)) {
        FUN_000b70c4();
        return iVar2;
      }
      local_24 = local_24 + 1;
      iVar9 = iVar9 + 2;
    } while (local_24 < 3);
    local_24 = 0;
    do {
      iVar9 = *(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + local_24 * 2 + iVar2 * 0x10) * 2) >> 0x10;
      iVar8 = *(int *)(&DAT_003af898 +
                      (uint)*(ushort *)(&DAT_0038c618 + local_24 * 2 + iVar2 * 0x10) * 4) >> 0x10;
      iVar10 = (*(int *)(&DAT_003af898 +
                        (uint)*(ushort *)
                               (&DAT_0038c618 + (&DAT_00192134)[local_24] * 2 + iVar2 * 0x10) * 4)
               >> 0x10) * 0x100 + iVar8 * -0x100;
      iVar3 = (*(int *)(&DAT_003af896 +
                       (uint)*(ushort *)
                              (&DAT_0038c618 + (&DAT_00192134)[local_24] * 2 + iVar2 * 0x10) * 2) >>
              0x10) * 0x100 + iVar9 * -0x100;
      lVar1 = (longlong)iVar3 * (longlong)(in_EDX + iVar8 * -0x100);
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
      lVar1 = (longlong)iVar10 * (longlong)(in_EAX + iVar9 * -0x100);
      iVar7 = (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1;
      cVar11 = uVar4 != uVar5;
      uVar4 = (uint)(uVar4 < uVar5);
      uVar5 = iVar6 - iVar7;
      bVar13 = SBORROW4(iVar6,iVar7) != SBORROW4(uVar5,uVar4);
      bVar12 = (int)(uVar5 - uVar4) < 0;
      if (uVar5 != uVar4) {
        cVar11 = (bVar13 == bVar12) - (bVar13 != bVar12);
      }
      if (cVar11 == '\0') {
        lVar1 = (longlong)iVar3 * (longlong)(iVar8 * -0x100 + 0x10100);
        iVar3 = (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = (uint)lVar1;
        lVar1 = (longlong)iVar10 * (longlong)(iVar9 * -0x100 + 0x10100);
        iVar9 = (int)((ulonglong)lVar1 >> 0x20);
        uVar5 = (uint)lVar1;
        cVar11 = uVar4 != uVar5;
        uVar4 = (uint)(uVar4 < uVar5);
        uVar5 = iVar3 - iVar9;
        bVar13 = SBORROW4(iVar3,iVar9) != SBORROW4(uVar5,uVar4);
        bVar12 = (int)(uVar5 - uVar4) < 0;
        if (uVar5 != uVar4) {
          cVar11 = (bVar13 == bVar12) - (bVar13 != bVar12);
        }
        if ('\0' < cVar11) {
          return *(int *)((int)&DAT_0038c61c + local_24 * 2 + iVar2 * 0x10) >> 0x10;
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < 3);
  }
  return iVar2;
}

/******************************************************************************
 * Function : dk_triangle_redirect_found_0b850c (Ghidra: FUN_000b850c)
 * Prototype: void dk_triangle_redirect_found_0b850c(void);
 * Address  : 0xb850c (Size: 287 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:2200 ("triangle_redirect:not found A"); navigate.cpp:2210 ("triangle_redirect:not found B"); navigate.cpp:2217 ("triangle_redirect:above ix_Triangles"); navigate.cpp:2246 ("triangle_swap_with:not fully implemented / untested"); navigate.cpp:1873 ("triangle_find_first_used:not found!!")
 * Naming   : String 'triangle_redirect:not found A'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16af0b: "navigate.cpp"
 *   - 0x16b209: "navigate.cpp"
 *   - 0x16b234: "navigate.cpp"
 *   - 0x16b266: "navigate.cpp"
 *   - 0x16b2a7: "navigate.cpp"
 *   - 0x16b2d8: "navigate.cpp"
 *   - 0x16b1eb: "triangle_redirect:not found A"
 *   - 0x16b216: "triangle_redirect:not found B"
 *   - 0x16b241: "triangle_redirect:above ix_Triangles"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b850c(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  
  iVar1 = _DAT_00192148;
  iVar4 = in_EAX * 0x10;
  if ((int)(&DAT_0038c621)[in_EAX * 4] >> 0x18 != -1) {
    iVar1 = iVar4 + 6;
    do {
      iVar3 = *(int *)((int)&DAT_0038c61c + iVar4) >> 0x10;
      if (iVar3 != -1) {
        if ((int)(&DAT_0038c61c)[iVar3 * 4] >> 0x10 == in_EAX) {
          iVar2 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) >> 0x10 == in_EAX) {
          iVar2 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + iVar3 * 0x10) >> 0x10 == in_EAX) {
          iVar2 = 2;
        }
        else {
          iVar2 = -1;
        }
        if (iVar2 != -1) {
          *(short *)(iVar3 * 0x10 + 0x38c61e + iVar2 * 2) = (short)in_EDX;
        }
      }
      iVar4 = iVar4 + 2;
    } while (iVar4 != iVar1);
    return;
  }
  if (DAT_0038c5d0 <= in_EAX) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2200, "triangle_redirect:not found A") */
    return;
  }
  if (_DAT_00192148 == -1) {
    FUN_000ddaf0(); /* LbErrorLog(NULL, line 2210, "triangle_redirect:not found B") */
    in_EAX = extraout_ECX;
  }
  if (iVar1 != in_EAX) {
    while( true ) {
      iVar4 = iVar1 * 0x10;
      iVar1 = (int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10;
      if (iVar1 == in_EAX) break;
      if (iVar1 == -1) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2217, "triangle_redirect:above ix_Triangles") */
        in_EAX = extraout_ECX_00;
      }
    }
    *(short *)((int)&DAT_0038c61c + iVar4 + 2) = (short)in_EDX;
    return;
  }
  _DAT_00192148 = in_EDX;
  return;
}

/******************************************************************************
 * Function : dk_edge_rotateAC_0b8874 (Ghidra: FUN_000b8874)
 * Prototype: undefined4 dk_edge_rotateAC_0b8874(void);
 * Address  : 0xb8874 (Size: 1519 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:2329 ("edge_rotateAC : lB not found"); navigate.cpp:2388 ("edge_rotateAC : A not found"); navigate.cpp:2394 ("edge_rotateAC : B not found")
 * Naming   : Log prefix 'edge_rotateAC : lB not found'
 * Callers  : 4 -> 0xb9940, 0xbaa20, 0xbbc9c, 0xbc1bc
 * Callees  : 2 -> 0xb5d38, 0xddaf0
 * Strings  :
 *   - 0x16b302: "navigate.cpp"
 *   - 0x16b32b: "navigate.cpp"
 *   - 0x16b354: "navigate.cpp"
 *   - 0x16b2e5: "edge_rotateAC : lB not found"
 *   - 0x16b30f: "edge_rotateAC : A not found"
 *   - 0x16b338: "edge_rotateAC : B not found"
 ******************************************************************************/
undefined4 FUN_000b8874(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int in_EAX;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 extraout_ECX;
  int in_EDX;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined2 uVar27;
  int iVar28;
  char cVar29;
  bool bVar30;
  bool bVar31;
  
  iVar21 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10);
  iVar28 = iVar21 >> 0x10;
  if (iVar28 == -1) {
    uVar17 = 0;
  }
  else {
    if ((int)(&DAT_0038c61c)[iVar28 * 4] >> 0x10 == in_EAX) {
      iVar18 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar28 * 0x10 + 2) >> 0x10 == in_EAX) {
      iVar18 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar28 * 0x10) >> 0x10 == in_EAX) {
      iVar18 = 2;
    }
    else {
      iVar18 = -1;
    }
    if (iVar18 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2329, "edge_rotateAC : lB not found") */
    }
    iVar5 = (&DAT_00192134)[in_EDX];
    iVar6 = (&DAT_00192134)[iVar18];
    iVar7 = (&DAT_00192138)[in_EDX];
    iVar23 = (&DAT_00192138)[iVar18];
    iVar8 = *(int *)((int)&DAT_0038c61c + iVar5 * 2 + in_EAX * 0x10);
    iVar22 = iVar8 >> 0x10;
    iVar9 = *(int *)((int)&DAT_0038c61c + iVar6 * 2 + iVar28 * 0x10);
    iVar19 = iVar9 >> 0x10;
    bVar2 = (&DAT_0038c625)[in_EAX * 0x10];
    bVar13 = (byte)in_EDX;
    if ((((uint)bVar2 & 1 << (bVar13 + 3 & 0x1f)) != 0) ||
       (bVar14 = (byte)iVar18,
       ((uint)(byte)(&DAT_0038c625)[iVar28 * 0x10] & 1 << (bVar14 + 3 & 0x1f)) != 0)) {
      return 0;
    }
    bVar11 = (byte)iVar5;
    bVar12 = (byte)iVar6;
    bVar3 = (&DAT_0038c625)[iVar28 * 0x10];
    iVar26 = in_EAX * 0x10;
    iVar20 = iVar28 * 0x10;
    (&DAT_0038c625)[iVar26] = (&DAT_0038c625)[iVar26] & ~('\x01' << (bVar11 + 3 & 0x1f));
    (&DAT_0038c625)[iVar20] = (&DAT_0038c625)[iVar20] & ~('\x01' << (bVar12 + 3 & 0x1f));
    (&DAT_0038c625)[iVar26] =
         ~('\x01' << (bVar13 + 3 & 0x1f)) & (&DAT_0038c625)[iVar26] |
         (((uint)bVar3 & 1 << (bVar12 + 3 & 0x1f)) != 0) << (bVar13 + 3 & 0x1f);
    (&DAT_0038c625)[iVar20] =
         (((uint)bVar2 & 1 << (bVar11 + 3 & 0x1f)) != 0) << (bVar14 + 3 & 0x1f) |
         ~('\x01' << (bVar14 + 3 & 0x1f)) & (&DAT_0038c625)[iVar20];
    iVar1 = in_EDX * 2 + iVar26;
    iVar7 = iVar7 * 2 + iVar26;
    iVar25 = iVar20 + iVar23 * 2;
    lVar10 = (longlong)
             ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar25) * 2) >> 0x10) -
             (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 2) >> 0x10)) *
             (longlong)
             ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 4) >> 0x10) -
             (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 4) >> 0x10));
    iVar23 = (int)((ulonglong)lVar10 >> 0x20);
    uVar15 = (uint)lVar10;
    lVar10 = (longlong)
             ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar25) * 4) >> 0x10) -
             (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 4) >> 0x10)) *
             (longlong)
             ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 2) >> 0x10) -
             (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 2) >> 0x10));
    iVar24 = (int)((ulonglong)lVar10 >> 0x20);
    uVar16 = (uint)lVar10;
    cVar29 = uVar15 != uVar16;
    uVar15 = (uint)(uVar15 < uVar16);
    uVar16 = iVar23 - iVar24;
    bVar31 = SBORROW4(iVar23,iVar24) != SBORROW4(uVar16,uVar15);
    bVar30 = (int)(uVar16 - uVar15) < 0;
    if (uVar16 != uVar15) {
      cVar29 = (bVar31 == bVar30) - (bVar31 != bVar30);
    }
    if (cVar29 < '\x01') {
      return 0;
    }
    iVar18 = iVar20 + iVar18 * 2;
    lVar10 = (longlong)
             ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar25) * 2) >> 0x10) -
             (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 2) >> 0x10)) *
             (longlong)
             ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar18) * 4) >> 0x10) -
             (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 4) >> 0x10));
    iVar23 = (int)((ulonglong)lVar10 >> 0x20);
    uVar15 = (uint)lVar10;
    lVar10 = (longlong)
             ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar25) * 4) >> 0x10) -
             (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 4) >> 0x10)) *
             (longlong)
             ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar18) * 2) >> 0x10) -
             (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 2) >> 0x10));
    iVar24 = (int)((ulonglong)lVar10 >> 0x20);
    uVar16 = (uint)lVar10;
    cVar29 = uVar15 != uVar16;
    uVar15 = (uint)(uVar15 < uVar16);
    uVar16 = iVar23 - iVar24;
    bVar31 = SBORROW4(iVar23,iVar24) != SBORROW4(uVar16,uVar15);
    bVar30 = (int)(uVar16 - uVar15) < 0;
    if (uVar16 != uVar15) {
      cVar29 = (bVar31 == bVar30) - (bVar31 != bVar30);
    }
    if (-1 < cVar29) {
      return 0;
    }
    iVar26 = iVar26 + iVar5 * 2;
    *(undefined2 *)(&DAT_0038c618 + iVar26) = *(undefined2 *)(&DAT_0038c618 + iVar25);
    iVar20 = iVar6 * 2 + iVar20;
    *(undefined2 *)(&DAT_0038c618 + iVar20) = *(undefined2 *)(&DAT_0038c618 + iVar7);
    *(short *)((int)&DAT_0038c61c + iVar1 + 2) = (short)((uint)iVar9 >> 0x10);
    uVar27 = (undefined2)((uint)iVar21 >> 0x10);
    *(undefined2 *)((int)&DAT_0038c61c + iVar26 + 2) = uVar27;
    *(short *)((int)&DAT_0038c61c + iVar18 + 2) = (short)((uint)iVar8 >> 0x10);
    *(short *)((int)&DAT_0038c61c + iVar20 + 2) = (short)in_EAX;
    if (iVar22 != -1) {
      if ((int)(&DAT_0038c61c)[iVar22 * 4] >> 0x10 == in_EAX) {
        iVar21 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar22 * 0x10 + 2) >> 0x10 == in_EAX) {
        iVar21 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar22 * 0x10) >> 0x10 == in_EAX) {
        iVar21 = 2;
      }
      else {
        iVar21 = -1;
      }
      if (iVar21 == -1) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2388, "edge_rotateAC : A not found") */
      }
      *(undefined2 *)(iVar22 * 0x10 + 0x38c61e + iVar21 * 2) = uVar27;
    }
    if (iVar19 != -1) {
      if ((int)(&DAT_0038c61c)[iVar19 * 4] >> 0x10 == iVar28) {
        iVar21 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar19 * 0x10 + 2) >> 0x10 == iVar28) {
        iVar21 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar19 * 0x10) >> 0x10 == iVar28) {
        iVar21 = 2;
      }
      else {
        iVar21 = -1;
      }
      if (iVar21 == -1) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2394, "edge_rotateAC : B not found") */
      }
      *(short *)(iVar19 * 0x10 + 0x38c61e + iVar21 * 2) = (short)in_EAX;
    }
    bVar2 = (&DAT_0038c625)[in_EAX * 0x10];
    bVar3 = (&DAT_0038c625)[in_EAX * 0x10];
    bVar4 = (&DAT_0038c625)[iVar28 * 0x10];
    iVar21 = in_EAX * 0x10;
    (&DAT_0038c625)[iVar21] =
         (((uint)(byte)(&DAT_0038c625)[iVar28 * 0x10] & 1 << (bVar12 & 0x1f)) != 0) <<
         (bVar13 & 0x1f) | (&DAT_0038c625)[iVar21] & ~('\x01' << (bVar13 & 0x1f));
    (&DAT_0038c625)[iVar21] =
         ~('\x01' << (bVar11 & 0x1f)) & (&DAT_0038c625)[iVar21] |
         (((uint)bVar2 & 1 << (bVar13 & 0x1f)) != 0) << (bVar11 & 0x1f);
    iVar28 = iVar28 * 0x10;
    (&DAT_0038c625)[iVar28] =
         (((uint)bVar3 & 1 << (bVar11 & 0x1f)) != 0) << (bVar14 & 0x1f) |
         ~('\x01' << (bVar14 & 0x1f)) & (&DAT_0038c625)[iVar28];
    (&DAT_0038c625)[iVar28] =
         (((uint)bVar4 & 1 << (bVar14 & 0x1f)) != 0) << (bVar12 & 0x1f) |
         (&DAT_0038c625)[iVar28] & ~('\x01' << (bVar12 & 0x1f));
    FUN_000b5d38();
    FUN_000b5d38();
    uVar17 = extraout_ECX;
  }
  return uVar17;
}

/******************************************************************************
 * Function : dk_tri_new_0b8e64 (Ghidra: FUN_000b8e64)
 * Prototype: void dk_tri_new_0b8e64(void);
 * Address  : 0xb8e64 (Size: 1037 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:727 ("tri_new : out of memory"); navigate.cpp:727 ("tri_new : out of memory"); navigate.cpp:762 ("point_new:overflow"); navigate.cpp:2467 ("tri_split3 : A not found"); navigate.cpp:2474 ("tri_split3 : B not found")
 * Naming   : Log prefix 'tri_new : out of memory'
 * Callers  : 1 -> 0xb95f0
 * Callees  : 2 -> 0xb5d38, 0xddaf0
 * Strings  :
 *   - 0x16aeb9: "navigate.cpp"
 *   - 0x16aed9: "navigate.cpp"
 *   - 0x16b37a: "navigate.cpp"
 *   - 0x16b3a0: "navigate.cpp"
 *   - 0x16aea1: "tri_new : out of memory"
 *   - 0x16aec6: "point_new:overflow"
 *   - 0x16b361: "tri_split3 : A not found"
 *   - 0x16b387: "tri_split3 : B not found"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b8e64(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int extraout_ECX;
  int iVar6;
  int extraout_ECX_00;
  int iVar7;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined2 in_DX;
  undefined2 unaff_BX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  if (_DAT_00192148 == -1) {
    iVar2 = DAT_0038c5d0 + 1;
    iVar6 = DAT_0038c5d0;
    DAT_0038c5d0 = iVar2;
    if (8999 < iVar2) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      iVar6 = extraout_ECX;
    }
  }
  else {
    iVar6 = _DAT_00192148;
    _DAT_00192148 = (int)(&DAT_0038c61c)[_DAT_00192148 * 4] >> 0x10;
  }
  iVar2 = _DAT_00192148;
  DAT_0038c5d4 = DAT_0038c5d4 + 1;
  *(undefined1 *)((int)&DAT_0038c621 + iVar6 * 0x10 + 3) = 0;
  if (iVar2 == -1) {
    iVar7 = DAT_0038c5d0 + 1;
    iVar2 = DAT_0038c5d0;
    DAT_0038c5d0 = iVar7;
    if (8999 < iVar7) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      iVar2 = extraout_ECX_00;
    }
  }
  else {
    _DAT_00192148 = (int)(&DAT_0038c61c)[iVar2 * 4] >> 0x10;
  }
  *(undefined1 *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) = 0;
  DAT_0038c5d4 = DAT_0038c5d4 + 1;
  puVar9 = (undefined4 *)(&DAT_0038c618 + in_EAX * 0x10);
  puVar10 = (undefined4 *)(&DAT_0038c618 + iVar6 * 0x10);
  for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar11 * -2 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
  }
  puVar9 = (undefined4 *)(&DAT_0038c618 + in_EAX * 0x10);
  puVar10 = (undefined4 *)(&DAT_0038c618 + iVar2 * 0x10);
  for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar11 * -2 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
  }
  if (_DAT_0019214c == -1) {
    iVar3 = DAT_003b3ee8 + 1;
    iVar7 = DAT_003b3ee8;
    DAT_003b3ee8 = iVar3;
    if (0x1193 < iVar3) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 762, "point_new:overflow") */
      iVar7 = extraout_ECX_01;
    }
  }
  else {
    iVar7 = _DAT_0019214c;
    _DAT_0019214c = *(int *)(&DAT_003af896 + _DAT_0019214c * 2) >> 0x10;
  }
  *(undefined2 *)(&DAT_003af89a + iVar7 * 4) = 0;
  iVar8 = in_EAX * 0x10;
  *(undefined2 *)(&DAT_003af898 + iVar7 * 4) = in_DX;
  iVar3 = iVar6 * 0x10;
  *(undefined2 *)(&DAT_003af89a + iVar7 * 4) = unaff_BX;
  uVar4 = (undefined2)iVar7;
  *(undefined2 *)(&DAT_0038c61c + in_EAX * 4) = uVar4;
  iVar7 = iVar2 * 0x10;
  *(undefined2 *)(&DAT_0038c618 + iVar3) = uVar4;
  *(undefined2 *)(&DAT_0038c61a + iVar7) = uVar4;
  uVar4 = (undefined2)iVar6;
  *(undefined2 *)(&DAT_0038c620 + iVar8) = uVar4;
  uVar5 = (undefined2)iVar2;
  *(undefined2 *)((int)&DAT_0038c621 + iVar8 + 1) = uVar5;
  bVar11 = (&DAT_0038c625)[iVar8];
  (&DAT_0038c625)[iVar8] = bVar11 | 6;
  (&DAT_0038c625)[iVar8] = bVar11 & 0xf | 6;
  *(short *)((int)&DAT_0038c61c + iVar3 + 2) = (short)in_EAX;
  *(undefined2 *)((int)&DAT_0038c621 + iVar3 + 1) = uVar5;
  bVar11 = (&DAT_0038c625)[iVar3];
  (&DAT_0038c625)[iVar3] = bVar11 | 5;
  (&DAT_0038c625)[iVar3] = bVar11 & 0x17 | 5;
  bVar11 = (&DAT_0038c625)[iVar7];
  *(short *)((int)&DAT_0038c61c + iVar7 + 2) = (short)in_EAX;
  (&DAT_0038c625)[iVar7] = bVar11 | 3;
  *(undefined2 *)(&DAT_0038c620 + iVar7) = uVar4;
  (&DAT_0038c625)[iVar7] = bVar11 & 0x27 | 3;
  DAT_003b3eec = DAT_003b3eec + 1;
  iVar7 = *(int *)((int)&DAT_0038c61c + iVar3 + 2) >> 0x10;
  if (iVar7 != -1) {
    if ((int)(&DAT_0038c61c)[iVar7 * 4] >> 0x10 == in_EAX) {
      iVar3 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar7 * 0x10 + 2) >> 0x10 == in_EAX) {
      iVar3 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar7 * 0x10) >> 0x10 == in_EAX) {
      iVar3 = 2;
    }
    else {
      iVar3 = -1;
    }
    if (iVar3 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2467, "tri_split3 : A not found") */
      iVar7 = extraout_ECX_02;
    }
    *(undefined2 *)(iVar7 * 0x10 + 0x38c61e + iVar3 * 2) = uVar4;
  }
  iVar7 = *(int *)(&DAT_0038c620 + iVar2 * 0x10) >> 0x10;
  if (iVar7 != -1) {
    if ((int)(&DAT_0038c61c)[iVar7 * 4] >> 0x10 == in_EAX) {
      iVar3 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar7 * 0x10 + 2) >> 0x10 == in_EAX) {
      iVar3 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar7 * 0x10) >> 0x10 == in_EAX) {
      iVar3 = 2;
    }
    else {
      iVar3 = -1;
    }
    if (iVar3 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2474, "tri_split3 : B not found") */
      iVar7 = extraout_ECX_03;
    }
    *(undefined2 *)(iVar7 * 0x10 + 0x38c61e + iVar3 * 2) = uVar5;
  }
  if ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6 != 0) {
    iVar7 = ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6) * 3;
    uVar1 = (&DAT_0038c626)[in_EAX * 8];
    *(short *)((int)&DAT_003d1b5c + iVar7) = *(short *)((int)&DAT_003d1b5c + iVar7) + -1;
    (&DAT_003d1b5e)[iVar7] = 0;
    (&DAT_0038c626)[in_EAX * 8] = uVar1 & 0x3f;
    DAT_003d1b5c = DAT_003d1b5c + 1;
    (&DAT_0038c626)[in_EAX * 8] = uVar1 & 0x3f;
  }
  (&DAT_0038c626)[iVar6 * 8] = 0;
  (&DAT_0038c626)[iVar2 * 8] = 0;
  FUN_000b5d38();
  FUN_000b5d38();
  FUN_000b5d38();
  return;
}

/******************************************************************************
 * Function : dk_tri_new_0b9274 (Ghidra: FUN_000b9274)
 * Prototype: int dk_tri_new_0b9274(undefined2 param_1);
 * Address  : 0xb9274 (Size: 579 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:727 ("tri_new : out of memory"); navigate.cpp:2526 ("tri_split2 : A not found")
 * Naming   : Log prefix 'tri_new : out of memory'
 * Callers  : 1 -> 0xb94b8
 * Callees  : 2 -> 0xb5d38, 0xddaf0
 * Strings  :
 *   - 0x16aeb9: "navigate.cpp"
 *   - 0x16b3c6: "navigate.cpp"
 *   - 0x16aea1: "tri_new : out of memory"
 *   - 0x16b3ad: "tri_split2 : A not found"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000b9274(undefined2 param_1)

{
  ushort uVar1;
  byte bVar2;
  int in_EAX;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  int extraout_ECX_00;
  int in_EDX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (_DAT_00192148 == -1) {
    iVar4 = DAT_0038c5d0 + 1;
    iVar3 = DAT_0038c5d0;
    DAT_0038c5d0 = iVar4;
    if (8999 < iVar4) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 727, "tri_new : out of memory") */
      iVar3 = extraout_ECX;
    }
  }
  else {
    iVar3 = _DAT_00192148;
    _DAT_00192148 = (int)(&DAT_0038c61c)[_DAT_00192148 * 4] >> 0x10;
  }
  iVar5 = iVar3 * 0x10;
  iVar6 = in_EAX * 0x10;
  DAT_0038c5d4 = DAT_0038c5d4 + 1;
  *(undefined1 *)((int)&DAT_0038c621 + iVar5 + 3) = 0;
  puVar7 = (undefined4 *)(&DAT_0038c618 + iVar6);
  puVar8 = (undefined4 *)(&DAT_0038c618 + iVar5);
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  iVar4 = (&DAT_00192134)[in_EDX];
  bVar9 = *(byte *)(&DAT_00192134 + in_EDX);
  *(undefined2 *)(&DAT_0038c618 + iVar4 * 2 + iVar6) = param_1;
  *(undefined2 *)(&DAT_0038c618 + in_EDX * 2 + iVar5) = param_1;
  *(short *)(iVar6 + 0x38c61e + iVar4 * 2) = (short)iVar3;
  (&DAT_0038c625)[iVar6] = (&DAT_0038c625)[iVar6] | '\x01' << (bVar9 & 0x1f);
  (&DAT_0038c625)[iVar6] =
       (&DAT_0038c625)[iVar6] & ~('\x01' << (*(char *)(&DAT_00192134 + in_EDX) + 3U & 0x1f));
  *(short *)(iVar5 + 0x38c61e + (&DAT_00192138)[in_EDX] * 2) = (short)in_EAX;
  bVar9 = *(byte *)(&DAT_00192138 + in_EDX);
  bVar2 = (&DAT_0038c625)[iVar5] | '\x01' << (bVar9 & 0x1f);
  (&DAT_0038c625)[iVar5] = bVar2;
  (&DAT_0038c625)[iVar5] = bVar2 & ~('\x01' << (bVar9 + 3 & 0x1f));
  iVar4 = *(int *)((int)&DAT_0038c61c + iVar4 * 2 + iVar5) >> 0x10;
  if (iVar4 != -1) {
    if ((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10 == in_EAX) {
      iVar5 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10 == in_EAX) {
      iVar5 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10 == in_EAX) {
      iVar5 = 2;
    }
    else {
      iVar5 = -1;
    }
    if (iVar5 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2526, "tri_split2 : A not found") */
      iVar4 = extraout_ECX_00;
    }
    *(short *)(iVar4 * 0x10 + 0x38c61e + iVar5 * 2) = (short)iVar3;
  }
  if ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6 != 0) {
    iVar4 = ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6) * 3;
    uVar1 = (&DAT_0038c626)[in_EAX * 8];
    *(short *)((int)&DAT_003d1b5c + iVar4) = *(short *)((int)&DAT_003d1b5c + iVar4) + -1;
    (&DAT_003d1b5e)[iVar4] = 0;
    (&DAT_0038c626)[in_EAX * 8] = uVar1 & 0x3f;
    (&DAT_0038c626)[in_EAX * 8] = uVar1 & 0x3f;
    DAT_003d1b5c = DAT_003d1b5c + 1;
  }
  (&DAT_0038c626)[iVar3 * 8] = 0;
  FUN_000b5d38();
  FUN_000b5d38();
  return iVar3;
}

/******************************************************************************
 * Function : dk_point_new_overflow_0b94b8 (Ghidra: FUN_000b94b8)
 * Prototype: void dk_point_new_overflow_0b94b8(void);
 * Address  : 0xb94b8 (Size: 312 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:762 ("point_new:overflow")
 * Naming   : String 'point_new:overflow'
 * Callers  : 2 -> 0xb95f0, 0xbafbc
 * Callees  : 2 -> 0xb9274, 0xddaf0
 * Strings  :
 *   - 0x16aed9: "navigate.cpp"
 *   - 0x16aec6: "point_new:overflow"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b94b8(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined2 in_CX;
  int in_EDX;
  undefined2 unaff_BX;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar4 = DAT_003b3ee8;
  if (_DAT_0019214c == -1) {
    DAT_003b3ee8 = DAT_003b3ee8 + 1;
    if (0x1193 < DAT_003b3ee8) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 762, "point_new:overflow") */
    }
  }
  else {
    iVar4 = _DAT_0019214c;
    _DAT_0019214c = *(int *)(&DAT_003af896 + _DAT_0019214c * 2) >> 0x10;
  }
  *(undefined2 *)(&DAT_003af89a + iVar4 * 4) = 0;
  *(undefined2 *)(&DAT_003af89a + iVar4 * 4) = in_CX;
  *(undefined2 *)(&DAT_003af898 + iVar4 * 4) = unaff_BX;
  iVar2 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10) >> 0x10;
  DAT_003b3eec = DAT_003b3eec + 1;
  if ((int)(&DAT_0038c61c)[iVar2 * 4] >> 0x10 == in_EAX) {
    iVar5 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar2 * 0x10 + 2) >> 0x10 == in_EAX) {
    iVar5 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar2 * 0x10) >> 0x10 == in_EAX) {
    iVar5 = 2;
  }
  else {
    iVar5 = -1;
  }
  uVar3 = FUN_000b9274(iVar4);
  iVar4 = local_20;
  uVar1 = FUN_000b9274(local_20,uVar3);
  *(undefined2 *)(in_EAX * 0x10 + 0x38c61e + iVar2 * 2) = uVar1;
  *(short *)(local_20 * 0x10 + 0x38c61e + iVar5 * 2) = (short)iVar4;
  return;
}

/******************************************************************************
 * Function : dk_insert_point_0b95f0 (Ghidra: FUN_000b95f0)
 * Prototype: void dk_insert_point_0b95f0(void);
 * Address  : 0xb95f0 (Size: 678 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:2584 ("insert_point : triangle not found")
 * Naming   : Log prefix 'insert_point : triangle not found'
 * Callers  : 4 -> 0xbbec8, 0xbca9c, 0xbed7c, 0xbee04
 * Callees  : 4 -> 0xb7e14, 0xb8e64, 0xb94b8, 0xddaf0
 * Strings  :
 *   - 0x16b3f5: "navigate.cpp"
 *   - 0x16b3d3: "insert_point : triangle not found"
 ******************************************************************************/
void FUN_000b95f0(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_EDX;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  
  iVar2 = FUN_000b7e14();
  if (iVar2 == -1) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2584, "insert_point : triangle not found") */
  }
  if ((((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar2 * 0x10) * 2) >> 0x10 !=
         in_EAX) ||
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar2 * 0x10) * 4) >> 0x10 !=
        in_EDX)) &&
      ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar2 * 0x10) * 2) >> 0x10 !=
        in_EAX ||
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar2 * 0x10) * 4) >> 0x10 !=
        in_EDX)))) &&
     ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 2) >> 0x10 != in_EAX
      || (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 4) >> 0x10 !=
          in_EDX)))) {
    iVar3 = iVar2 * 0x10;
    lVar1 = (longlong)
            ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 2) >> 0x10) -
            (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 2) >> 0x10)) *
            (longlong)
            (in_EDX - (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 4) >>
                      0x10));
    iVar6 = (int)((ulonglong)lVar1 >> 0x20);
    uVar4 = (uint)lVar1;
    lVar1 = (longlong)
            ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 4) >> 0x10) -
            (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 4) >> 0x10)) *
            (longlong)
            (in_EAX - (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 2) >>
                      0x10));
    iVar7 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = (uint)lVar1;
    cVar8 = uVar4 != uVar5;
    uVar4 = (uint)(uVar4 < uVar5);
    uVar5 = iVar6 - iVar7;
    bVar10 = SBORROW4(iVar6,iVar7) != SBORROW4(uVar5,uVar4);
    bVar9 = (int)(uVar5 - uVar4) < 0;
    if (uVar5 != uVar4) {
      cVar8 = (bVar10 == bVar9) - (bVar10 != bVar9);
    }
    if (cVar8 == '\0') {
      FUN_000b94b8();
    }
    else {
      lVar1 = (longlong)
              ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 2) >> 0x10)
              - (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 2) >> 0x10)) *
              (longlong)
              (in_EDX - (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 4) >>
                        0x10));
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
      lVar1 = (longlong)
              ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 4) >> 0x10)
              - (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 4) >> 0x10)) *
              (longlong)
              (in_EAX - (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 2) >>
                        0x10));
      iVar7 = (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1;
      cVar8 = uVar4 != uVar5;
      uVar4 = (uint)(uVar4 < uVar5);
      uVar5 = iVar6 - iVar7;
      bVar10 = SBORROW4(iVar6,iVar7) != SBORROW4(uVar5,uVar4);
      bVar9 = (int)(uVar5 - uVar4) < 0;
      if (uVar5 != uVar4) {
        cVar8 = (bVar10 == bVar9) - (bVar10 != bVar9);
      }
      if (cVar8 == '\0') {
        FUN_000b94b8();
        return;
      }
      lVar1 = (longlong)
              ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 2) >> 0x10) -
              (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 2) >> 0x10))
              * (longlong)
                (in_EDX - (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 4
                                   ) >> 0x10));
      iVar6 = (int)((ulonglong)lVar1 >> 0x20);
      uVar4 = (uint)lVar1;
      lVar1 = (longlong)
              ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 4) >> 0x10) -
              (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 4) >> 0x10))
              * (longlong)
                (in_EAX - (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + iVar2 * 4) * 2
                                   ) >> 0x10));
      iVar2 = (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1;
      cVar8 = uVar4 != uVar5;
      uVar4 = (uint)(uVar4 < uVar5);
      uVar5 = iVar6 - iVar2;
      bVar10 = SBORROW4(iVar6,iVar2) != SBORROW4(uVar5,uVar4);
      bVar9 = (int)(uVar5 - uVar4) < 0;
      if (uVar5 != uVar4) {
        cVar8 = (bVar10 == bVar9) - (bVar10 != bVar9);
      }
      if (cVar8 == '\0') {
        FUN_000b94b8();
        return;
      }
      FUN_000b8e64();
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_l0_ld_ld_l1_0b9940 (Ghidra: FUN_000b9940)
 * Prototype: int dk_l0_ld_ld_l1_0b9940(void);
 * Address  : 0xb9940 (Size: 576 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:2681; navigate.cpp:2682
 * Naming   : String 'l0:%02ld n:%02ld l1:%02ld'
 * Callers  : 2 -> 0xbef98, 0xbf698
 * Callees  : 3 -> 0xb8874, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16b41c: "navigate.cpp"
 *   - 0x16b429: "navigate.cpp"
 *   - 0x16b402: "l0:%02ld n:%02ld l1:%02ld"
 ******************************************************************************/
int FUN_000b9940(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_8c [100];
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  
  local_1c = in_EAX;
  local_18 = in_EDX;
  do {
    local_20 = 0;
    iVar4 = *local_18;
    iVar5 = *local_1c;
    do {
      iVar1 = *(int *)((int)&DAT_0038c61c + iVar4 * 2 + iVar5 * 0x10) >> 0x10;
      if (iVar1 == -1) {
        local_20 = -1;
        break;
      }
      if ((int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10 == iVar5) {
        iVar4 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar1 * 0x10 + 2) >> 0x10 == iVar5) {
        iVar4 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar1 * 0x10) >> 0x10 == iVar5) {
        iVar4 = 2;
      }
      else {
        iVar4 = -1;
      }
      local_20 = local_20 + 1;
      iVar4 = (&DAT_00192134)[iVar4];
      iVar5 = iVar1;
    } while (iVar1 != *local_1c);
    if (local_20 == 3) {
      return 3;
    }
    iVar1 = 0;
    local_28 = local_1c;
    iVar4 = *local_1c;
    local_24 = local_18;
    iVar5 = *local_18;
    iVar3 = iVar4;
    do {
      if (*(int *)((int)&DAT_0038c61c + iVar5 * 2 + iVar3 * 0x10) >> 0x10 == -1) {
        iVar1 = -1;
        goto LAB_000b9a7c;
      }
      iVar2 = FUN_000b8874();
      if (iVar2 == 0) {
        if ((int)(&DAT_0038c61c)[extraout_ECX * 4] >> 0x10 == iVar3) {
          iVar5 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + extraout_ECX * 0x10 + 2) >> 0x10 == iVar3) {
          iVar5 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + extraout_ECX * 0x10) >> 0x10 == iVar3) {
          iVar5 = 2;
        }
        else {
          iVar5 = -1;
        }
        iVar1 = iVar1 + 1;
        iVar5 = (&DAT_00192134)[iVar5];
        iVar3 = extraout_ECX;
      }
    } while (extraout_ECX != iVar4);
    *local_28 = iVar3;
    *local_24 = iVar5;
LAB_000b9a7c:
    if (iVar1 == 3) {
      return 3;
    }
    if (iVar1 == -1) {
      return -1;
    }
    iVar5 = 0;
    iVar4 = *local_18;
    iVar3 = *local_1c;
    do {
      iVar2 = *(int *)((int)&DAT_0038c61c + iVar4 * 2 + iVar3 * 0x10) >> 0x10;
      if (iVar2 == -1) {
        iVar5 = -1;
        break;
      }
      if ((int)(&DAT_0038c61c)[iVar2 * 4] >> 0x10 == iVar3) {
        iVar4 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar2 * 0x10 + 2) >> 0x10 == iVar3) {
        iVar4 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar2 * 0x10) >> 0x10 == iVar3) {
        iVar4 = 2;
      }
      else {
        iVar4 = -1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = (&DAT_00192134)[iVar4];
      iVar3 = iVar2;
    } while (iVar2 != *local_1c);
    if (iVar5 == iVar1) {
      if (iVar1 == 3) {
        return 3;
      }
      if (iVar1 == 4) {
        return 4;
      }
    }
    FUN_000e7714(local_8c,s_l0__02ld_n__02ld_l1__02ld_0016b402,local_20,iVar1,iVar5);
    iVar4 = extraout_ECX_00;
    if (extraout_ECX_00 != iVar1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2681, g_log_buf) */
      iVar4 = extraout_ECX_01;
    }
    if (local_20 <= iVar4) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2682, g_log_buf) */
    }
    if (iVar1 < 5) {
      return iVar1;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0b9b80 (Ghidra: FUN_000b9b80)
 * Prototype: void sub_0b9b80(void);
 * Address  : 0xb9b80 (Size: 172 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b9b80(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  int in_EDX;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  
  iVar2 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[in_ECX] * 2 + unaff_EBX * 0x10);
  iVar4 = iVar2 >> 0x10;
  if (unaff_EBX == (int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10) {
    iVar3 = 0;
  }
  else if (unaff_EBX == *(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10) {
    iVar3 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10 == unaff_EBX) {
    iVar3 = 2;
  }
  else {
    iVar3 = -1;
  }
  iVar5 = in_EDX * 2 + in_EAX * 0x10;
  uVar1 = *(undefined2 *)(&DAT_0038c618 + unaff_EBX * 0x10 + (&DAT_00192134)[in_ECX] * 2);
  *(short *)((int)&DAT_0038c61c + iVar5 + 2) = (short)((uint)iVar2 >> 0x10);
  *(undefined2 *)(&DAT_0038c618 + iVar5) = uVar1;
  *(short *)(iVar4 * 0x10 + 0x38c61e + iVar3 * 2) = (short)in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_0b9c2c (Ghidra: FUN_000b9c2c)
 * Prototype: undefined4 sub_0b9c2c(void);
 * Address  : 0xb9c2c (Size: 2463 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xbef98, 0xbf698
 * Callees  : 1 -> 0xb5d38
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b9c2c(void)

{
  ushort uVar1;
  longlong lVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int in_EDX;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  char cVar21;
  bool bVar22;
  bool bVar23;
  
  iVar19 = in_EAX * 0x10 + in_EDX * 2;
  uVar3 = (uint)*(ushort *)(&DAT_0038c618 + iVar19);
  iVar19 = *(int *)((int)&DAT_0038c61c + iVar19);
  iVar20 = iVar19 >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar20 * 4] >> 0x10 == in_EAX) {
    iVar4 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar20 * 0x10 + 2) >> 0x10 == in_EAX) {
    iVar4 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar20 * 0x10) >> 0x10 == in_EAX) {
    iVar4 = 2;
  }
  else {
    iVar4 = -1;
  }
  iVar4 = (&DAT_00192134)[iVar4];
  iVar17 = *(int *)((int)&DAT_0038c61c + iVar4 * 2 + iVar20 * 0x10);
  iVar5 = iVar17 >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar5 * 4] >> 0x10 == iVar20) {
    iVar6 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar5 * 0x10 + 2) >> 0x10 == iVar20) {
    iVar6 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar5 * 0x10) >> 0x10 == iVar20) {
    iVar6 = 2;
  }
  else {
    iVar6 = -1;
  }
  iVar6 = (&DAT_00192134)[iVar6];
  iVar16 = *(int *)((int)&DAT_0038c61c + iVar6 * 2 + iVar5 * 0x10);
  iVar7 = iVar16 >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar7 * 4] >> 0x10 == iVar5) {
    iVar8 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar7 * 0x10 + 2) >> 0x10 == iVar5) {
    iVar8 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar7 * 0x10) >> 0x10 == iVar5) {
    iVar8 = 2;
  }
  else {
    iVar8 = -1;
  }
  iVar8 = (&DAT_00192134)[iVar8];
  if (*(int *)((int)&DAT_0038c61c + iVar8 * 2 + iVar7 * 0x10) >> 0x10 != in_EAX) {
    return 0;
  }
  iVar13 = in_EAX * 0x10;
  iVar18 = iVar5 * 0x10;
  lVar2 = (longlong)
          ((*(int *)(&DAT_003af896 +
                    (uint)*(ushort *)(&DAT_0038c618 + iVar18 + (&DAT_00192138)[iVar6] * 2) * 2) >>
           0x10) - (*(int *)(&DAT_003af896 +
                            (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18) *
                            2) >> 0x10)) *
          (longlong)
          ((*(int *)(&DAT_003af898 +
                    (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar13) * 4) >>
           0x10) - (*(int *)(&DAT_003af898 +
                            (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18) *
                            4) >> 0x10));
  iVar14 = (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = (uint)lVar2;
  lVar2 = (longlong)
          ((*(int *)(&DAT_003af898 +
                    (uint)*(ushort *)(&DAT_0038c618 + iVar18 + (&DAT_00192138)[iVar6] * 2) * 4) >>
           0x10) - (*(int *)(&DAT_003af898 +
                            (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18) *
                            4) >> 0x10)) *
          (longlong)
          ((*(int *)(&DAT_003af896 +
                    (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar13) * 2) >>
           0x10) - (*(int *)(&DAT_003af896 +
                            (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18) *
                            2) >> 0x10));
  iVar15 = (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = (uint)lVar2;
  cVar21 = uVar9 != uVar10;
  uVar9 = (uint)(uVar9 < uVar10);
  uVar10 = iVar14 - iVar15;
  bVar23 = SBORROW4(iVar14,iVar15) != SBORROW4(uVar10,uVar9);
  bVar22 = (int)(uVar10 - uVar9) < 0;
  if (uVar10 != uVar9) {
    cVar21 = (bVar23 == bVar22) - (bVar23 != bVar22);
  }
  if (cVar21 < '\0') {
    lVar2 = (longlong)
            ((*(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + iVar13 + (&DAT_00192138)[in_EDX] * 2) * 2)
             >> 0x10) -
            (*(int *)(&DAT_003af896 +
                     (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18) * 2) >>
            0x10)) * (longlong)
                     ((*(int *)(&DAT_003af898 +
                               (uint)*(ushort *)
                                      (&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar13) * 4) >>
                      0x10) - (*(int *)(&DAT_003af898 +
                                       (uint)*(ushort *)
                                              (&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18)
                                       * 4) >> 0x10));
    iVar14 = (int)((ulonglong)lVar2 >> 0x20);
    uVar9 = (uint)lVar2;
    lVar2 = (longlong)
            ((*(int *)(&DAT_003af898 +
                      (uint)*(ushort *)(&DAT_0038c618 + iVar13 + (&DAT_00192138)[in_EDX] * 2) * 4)
             >> 0x10) -
            (*(int *)(&DAT_003af898 +
                     (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18) * 4) >>
            0x10)) * (longlong)
                     ((*(int *)(&DAT_003af896 +
                               (uint)*(ushort *)
                                      (&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar13) * 2) >>
                      0x10) - (*(int *)(&DAT_003af896 +
                                       (uint)*(ushort *)
                                              (&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar18)
                                       * 2) >> 0x10));
    iVar13 = (int)((ulonglong)lVar2 >> 0x20);
    uVar10 = (uint)lVar2;
    cVar21 = uVar9 != uVar10;
    uVar9 = (uint)(uVar9 < uVar10);
    uVar10 = iVar14 - iVar13;
    bVar23 = SBORROW4(iVar14,iVar13) != SBORROW4(uVar10,uVar9);
    bVar22 = (int)(uVar10 - uVar9) < 0;
    if (uVar10 != uVar9) {
      cVar21 = (bVar23 == bVar22) - (bVar23 != bVar22);
    }
    if ('\0' < cVar21) {
      iVar17 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[iVar6] * 2 + iVar18);
      iVar13 = iVar17 >> 0x10;
      if ((int)(&DAT_0038c61c)[iVar13 * 4] >> 0x10 == iVar5) {
        iVar14 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar13 * 0x10 + 2) >> 0x10 == iVar5) {
        iVar14 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar13 * 0x10) >> 0x10 == iVar5) {
        iVar14 = 2;
      }
      else {
        iVar14 = -1;
      }
      iVar15 = iVar4 * 2 + iVar20 * 0x10;
      uVar11 = *(undefined2 *)(&DAT_0038c618 + (&DAT_00192134)[iVar6] * 2 + iVar5 * 0x10);
      *(short *)((int)&DAT_0038c61c + iVar15 + 2) = (short)((uint)iVar17 >> 0x10);
      *(undefined2 *)(&DAT_0038c618 + iVar15) = uVar11;
      uVar11 = (undefined2)((uint)iVar19 >> 0x10);
      *(undefined2 *)((int)&DAT_0038c61c + iVar14 * 2 + iVar13 * 0x10 + 2) = uVar11;
      iVar19 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10);
      iVar17 = iVar19 >> 0x10;
      if ((int)(&DAT_0038c61c)[iVar17 * 4] >> 0x10 == in_EAX) {
        iVar6 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar17 * 0x10 + 2) >> 0x10 == in_EAX) {
        iVar6 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar17 * 0x10) >> 0x10 == in_EAX) {
        iVar6 = 2;
      }
      else {
        iVar6 = -1;
      }
      iVar13 = iVar8 * 2 + iVar7 * 0x10;
      uVar12 = *(undefined2 *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10);
      *(short *)((int)&DAT_0038c61c + iVar13 + 2) = (short)((uint)iVar19 >> 0x10);
      *(undefined2 *)(&DAT_0038c618 + iVar13) = uVar12;
      uVar12 = (undefined2)((uint)iVar16 >> 0x10);
      *(undefined2 *)((int)&DAT_0038c61c + iVar6 * 2 + iVar17 * 0x10 + 2) = uVar12;
      *(undefined2 *)((int)&DAT_0038c61c + (&DAT_00192138)[iVar4] * 2 + iVar20 * 0x10 + 2) = uVar12;
      *(undefined2 *)(iVar7 * 0x10 + 0x38c61e + (&DAT_00192138)[iVar8] * 2) = uVar11;
      if ((int)(uint)(ushort)(&DAT_0038c626)[iVar5 * 8] >> 6 != 0) {
        iVar19 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar5 * 8] >> 6) * 3;
        (&DAT_003d1b5e)[iVar19] = 0;
        uVar1 = (&DAT_0038c626)[iVar5 * 8];
        *(short *)((int)&DAT_003d1b5c + iVar19) = *(short *)((int)&DAT_003d1b5c + iVar19) + -1;
        (&DAT_0038c626)[iVar5 * 8] = uVar1 & 0x3f;
        DAT_003d1b5c = DAT_003d1b5c + 1;
        (&DAT_0038c626)[iVar5 * 8] = uVar1 & 0x3f;
      }
      if ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6 != 0) {
        iVar19 = ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6) * 3;
        (&DAT_003d1b5e)[iVar19] = 0;
        uVar1 = (&DAT_0038c626)[in_EAX * 8];
        *(short *)((int)&DAT_003d1b5c + iVar19) = *(short *)((int)&DAT_003d1b5c + iVar19) + -1;
        (&DAT_0038c626)[in_EAX * 8] = uVar1 & 0x3f;
        DAT_003d1b5c = DAT_003d1b5c + 1;
        (&DAT_0038c626)[in_EAX * 8] = uVar1 & 0x3f;
      }
      *(undefined2 *)((int)&DAT_0038c61c + iVar5 * 0x10 + 2) = DAT_00192148;
      _DAT_00192148 = iVar5;
      *(undefined1 *)((int)&DAT_0038c621 + iVar5 * 0x10 + 3) = 0xff;
      iVar19 = in_EAX;
      *(undefined2 *)((int)&DAT_0038c61c + in_EAX * 0x10 + 2) = DAT_00192148;
      _DAT_00192148 = iVar19;
      DAT_0038c5d4 = DAT_0038c5d4 + -2;
      *(undefined1 *)((int)&DAT_0038c621 + in_EAX * 0x10 + 3) = 0xff;
      FUN_000b5d38();
      goto LAB_000ba585;
    }
  }
  iVar19 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[iVar4] * 2 + iVar20 * 0x10);
  iVar16 = iVar19 >> 0x10;
  if (iVar20 == (int)(&DAT_0038c61c)[iVar16 * 4] >> 0x10) {
    iVar13 = 0;
  }
  else if (iVar20 == *(int *)((int)&DAT_0038c61c + iVar16 * 0x10 + 2) >> 0x10) {
    iVar13 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar16 * 0x10) >> 0x10 == iVar20) {
    iVar13 = 2;
  }
  else {
    iVar13 = -1;
  }
  iVar14 = in_EAX * 0x10 + in_EDX * 2;
  uVar11 = *(undefined2 *)(&DAT_0038c618 + (&DAT_00192134)[iVar4] * 2 + iVar20 * 0x10);
  *(short *)((int)&DAT_0038c61c + iVar14 + 2) = (short)((uint)iVar19 >> 0x10);
  *(undefined2 *)(&DAT_0038c618 + iVar14) = uVar11;
  *(short *)((int)&DAT_0038c61c + iVar13 * 2 + iVar16 * 0x10 + 2) = (short)in_EAX;
  iVar19 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[iVar8] * 2 + iVar7 * 0x10);
  iVar4 = iVar19 >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10 == iVar7) {
    iVar16 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10 == iVar7) {
    iVar16 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10 == iVar7) {
    iVar16 = 2;
  }
  else {
    iVar16 = -1;
  }
  iVar13 = iVar5 * 0x10 + iVar6 * 2;
  uVar11 = *(undefined2 *)(&DAT_0038c618 + (&DAT_00192134)[iVar8] * 2 + iVar7 * 0x10);
  *(short *)((int)&DAT_0038c61c + iVar13 + 2) = (short)((uint)iVar19 >> 0x10);
  *(undefined2 *)(&DAT_0038c618 + iVar13) = uVar11;
  uVar11 = (undefined2)((uint)iVar17 >> 0x10);
  *(undefined2 *)((int)&DAT_0038c61c + iVar16 * 2 + iVar4 * 0x10 + 2) = uVar11;
  *(undefined2 *)((int)&DAT_0038c61c + (&DAT_00192138)[in_EDX] * 2 + in_EAX * 0x10 + 2) = uVar11;
  *(short *)(iVar5 * 0x10 + 0x38c61e + (&DAT_00192138)[iVar6] * 2) = (short)in_EAX;
  if ((int)(uint)(ushort)(&DAT_0038c626)[iVar20 * 8] >> 6 != 0) {
    iVar19 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar20 * 8] >> 6) * 3;
    uVar1 = (&DAT_0038c626)[iVar20 * 8];
    *(short *)((int)&DAT_003d1b5c + iVar19) = *(short *)((int)&DAT_003d1b5c + iVar19) + -1;
    (&DAT_0038c626)[iVar20 * 8] = uVar1 & 0x3f;
    (&DAT_003d1b5e)[iVar19] = 0;
    DAT_003d1b5c = DAT_003d1b5c + 1;
    (&DAT_0038c626)[iVar20 * 8] = uVar1 & 0x3f;
  }
  if ((int)(uint)(ushort)(&DAT_0038c626)[iVar7 * 8] >> 6 != 0) {
    iVar19 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar7 * 8] >> 6) * 3;
    (&DAT_003d1b5e)[iVar19] = 0;
    uVar1 = (&DAT_0038c626)[iVar7 * 8];
    *(short *)((int)&DAT_003d1b5c + iVar19) = *(short *)((int)&DAT_003d1b5c + iVar19) + -1;
    (&DAT_0038c626)[iVar7 * 8] = uVar1 & 0x3f;
    DAT_003d1b5c = DAT_003d1b5c + 1;
    (&DAT_0038c626)[iVar7 * 8] = (&DAT_0038c626)[iVar7 * 8];
  }
  iVar19 = iVar20;
  *(undefined2 *)((int)&DAT_0038c61c + iVar20 * 0x10 + 2) = DAT_00192148;
  _DAT_00192148 = iVar19;
  *(undefined1 *)((int)&DAT_0038c621 + iVar20 * 0x10 + 3) = 0xff;
  DAT_0038c5d4 = DAT_0038c5d4 + -2;
  *(undefined2 *)((int)&DAT_0038c61c + iVar7 * 0x10 + 2) = DAT_00192148;
  *(undefined1 *)((int)&DAT_0038c621 + iVar7 * 0x10 + 3) = 0xff;
  _DAT_00192148 = iVar7;
  FUN_000b5d38();
LAB_000ba585:
  FUN_000b5d38();
  *(undefined2 *)(&DAT_003af898 + uVar3 * 4) = DAT_0019214c;
  _DAT_0019214c = uVar3;
  *(undefined2 *)(&DAT_003af89a + uVar3 * 4) = 0x8000;
  DAT_003b3eec = DAT_003b3eec + -1;
  return 1;
}

/******************************************************************************
 * Function : sub_0ba5cc (Ghidra: FUN_000ba5cc)
 * Prototype: undefined4 sub_0ba5cc(void);
 * Address  : 0xba5cc (Size: 973 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:2854 ("delete_point : make_3or4point failure"); navigate.cpp:2871 ("delete_point : 3 fails")
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xbef98, 0xbf698
 * Callees  : 1 -> 0xb5d38
 * Strings  :
 *   - 0x16b45c: "navigate.cpp"
 *   - 0x16b480: "navigate.cpp"
 *   - 0x16b4a4: "navigate.cpp"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ba5cc(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_EDX;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_18;
  
  iVar3 = in_EDX * 2 + in_EAX * 0x10;
  uVar9 = (uint)*(ushort *)(&DAT_0038c618 + iVar3);
  iVar3 = *(int *)((int)&DAT_0038c61c + iVar3) >> 0x10;
  if (iVar3 == -1) {
    uVar4 = 0;
  }
  else {
    if ((int)(&DAT_0038c61c)[iVar3 * 4] >> 0x10 == in_EAX) {
      iVar10 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) >> 0x10 == in_EAX) {
      iVar10 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar3 * 0x10) >> 0x10 == in_EAX) {
      iVar10 = 2;
    }
    else {
      iVar10 = -1;
    }
    iVar10 = (&DAT_00192134)[iVar10];
    iVar11 = *(int *)((int)&DAT_0038c61c + iVar10 * 2 + iVar3 * 0x10) >> 0x10;
    if (iVar11 == -1) {
      return 0;
    }
    if (iVar3 == (int)(&DAT_0038c61c)[iVar11 * 4] >> 0x10) {
      iVar5 = 0;
    }
    else if (iVar3 == *(int *)((int)&DAT_0038c61c + iVar11 * 0x10 + 2) >> 0x10) {
      iVar5 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar11 * 0x10) >> 0x10 == iVar3) {
      iVar5 = 2;
    }
    else {
      iVar5 = -1;
    }
    if (*(int *)((int)&DAT_0038c61c + (&DAT_00192134)[iVar5] * 2 + iVar11 * 0x10) >> 0x10 != in_EAX)
    {
      return 0;
    }
    iVar1 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[iVar10] * 2 + iVar3 * 0x10);
    iVar6 = iVar1 >> 0x10;
    iVar5 = *(int *)((int)&DAT_0038c61c +
                    (&DAT_00192134)[(&DAT_00192134)[iVar5]] * 2 + iVar11 * 0x10);
    iVar7 = iVar5 >> 0x10;
    if (iVar3 == (int)(&DAT_0038c61c)[iVar6 * 4] >> 0x10) {
      iVar8 = 0;
    }
    else if (iVar3 == *(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10) {
      iVar8 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10 == iVar3) {
      iVar8 = 2;
    }
    else {
      iVar8 = -1;
    }
    if (iVar11 == (int)(&DAT_0038c61c)[iVar7 * 4] >> 0x10) {
      local_18 = 0;
    }
    else if (iVar11 == *(int *)((int)&DAT_0038c61c + iVar7 * 0x10 + 2) >> 0x10) {
      local_18 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar7 * 0x10) >> 0x10 == iVar11) {
      local_18 = 2;
    }
    else {
      local_18 = -1;
    }
    iVar12 = in_EAX * 0x10 + in_EDX * 2;
    iVar2 = (&DAT_00192138)[in_EDX];
    *(undefined2 *)(&DAT_0038c618 + iVar12) =
         *(undefined2 *)(&DAT_0038c618 + iVar3 * 0x10 + (&DAT_00192134)[iVar10] * 2);
    *(short *)((int)&DAT_0038c61c + iVar12 + 2) = (short)((uint)iVar1 >> 0x10);
    *(short *)((int)&DAT_0038c61c + iVar2 * 2 + in_EAX * 0x10 + 2) = (short)((uint)iVar5 >> 0x10);
    *(short *)(iVar6 * 0x10 + 0x38c61e + iVar8 * 2) = (short)in_EAX;
    *(short *)(iVar7 * 0x10 + 0x38c61e + local_18 * 2) = (short)in_EAX;
    if ((int)(uint)(ushort)(&DAT_0038c626)[iVar3 * 8] >> 6 != 0) {
      iVar10 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar3 * 8] >> 6) * 3;
      (&DAT_003d1b5e)[iVar10] = 0;
      *(short *)((int)&DAT_003d1b5c + iVar10) = *(short *)((int)&DAT_003d1b5c + iVar10) + -1;
      (&DAT_0038c626)[iVar3 * 8] = (&DAT_0038c626)[iVar3 * 8] & 0x3f;
      (&DAT_0038c626)[iVar3 * 8] = (&DAT_0038c626)[iVar3 * 8];
      DAT_003d1b5c = DAT_003d1b5c + 1;
    }
    if ((int)(uint)(ushort)(&DAT_0038c626)[iVar11 * 8] >> 6 != 0) {
      iVar10 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar11 * 8] >> 6) * 3;
      (&DAT_003d1b5e)[iVar10] = 0;
      *(short *)((int)&DAT_003d1b5c + iVar10) = *(short *)((int)&DAT_003d1b5c + iVar10) + -1;
      (&DAT_0038c626)[iVar11 * 8] = (&DAT_0038c626)[iVar11 * 8] & 0x3f;
      (&DAT_0038c626)[iVar11 * 8] = (&DAT_0038c626)[iVar11 * 8];
      DAT_003d1b5c = DAT_003d1b5c + 1;
    }
    iVar10 = iVar3;
    *(undefined2 *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) = DAT_00192148;
    _DAT_00192148 = iVar10;
    *(undefined1 *)((int)&DAT_0038c621 + iVar3 * 0x10 + 3) = 0xff;
    DAT_0038c5d4 = DAT_0038c5d4 + -2;
    iVar3 = iVar11;
    *(undefined2 *)((int)&DAT_0038c61c + iVar11 * 0x10 + 2) = DAT_00192148;
    _DAT_00192148 = iVar3;
    *(undefined1 *)((int)&DAT_0038c621 + iVar11 * 0x10 + 3) = 0xff;
    FUN_000b5d38();
    *(undefined2 *)(&DAT_003af898 + uVar9 * 4) = DAT_0019214c;
    _DAT_0019214c = uVar9;
    *(undefined2 *)(&DAT_003af89a + uVar9 * 4) = 0x8000;
    uVar4 = 1;
    DAT_003b3eec = DAT_003b3eec + -1;
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_0baa20 (Ghidra: FUN_000baa20)
 * Prototype: undefined4 sub_0baa20(void);
 * Address  : 0xbaa20 (Size: 345 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbab7c
 * Callees  : 1 -> 0xb8874
 ******************************************************************************/
undefined4 FUN_000baa20(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  do {
    iVar3 = *(int *)((int)&DAT_0038c61c + in_EAX * 0x10 + in_EDX * 2) >> 0x10;
    if (iVar3 == -1) {
      return 0;
    }
    if ((int)(&DAT_0038c61c)[iVar3 * 4] >> 0x10 == in_EAX) {
      iVar1 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) >> 0x10 == in_EAX) {
      iVar1 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar3 * 0x10) >> 0x10 == in_EAX) {
      iVar1 = 2;
    }
    else {
      iVar1 = -1;
    }
    iVar4 = 0;
    iVar5 = 0;
    iVar1 = (&DAT_00192134)[iVar1];
    while (iVar1 = iVar1 * 2 + iVar3 * 0x10,
          *(int *)((int)&DAT_0038c61c + iVar1) >> 0x10 != unaff_EBX) {
      iVar2 = FUN_000b8874();
      if (iVar2 == 0) {
        iVar2 = *(int *)((int)&DAT_0038c61c + iVar1) >> 0x10;
        if ((iVar2 == -1) || (iVar2 == in_EAX)) {
          return 0;
        }
        if ((int)(&DAT_0038c61c)[iVar2 * 4] >> 0x10 == iVar3) {
          iVar3 = 0;
LAB_000bab51:
          iVar5 = iVar5 + 1;
          iVar1 = (&DAT_00192134)[iVar3];
          iVar3 = iVar2;
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar2 * 0x10 + 2) >> 0x10 == iVar3) {
          iVar5 = iVar5 + 1;
          iVar1 = DAT_00192138;
          iVar3 = iVar2;
        }
        else {
          if (*(int *)(&DAT_0038c620 + iVar2 * 0x10) >> 0x10 != iVar3) {
            iVar3 = -1;
            goto LAB_000bab51;
          }
          iVar5 = iVar5 + 1;
          iVar1 = DAT_0019213c;
          iVar3 = iVar2;
        }
      }
      else {
        iVar4 = iVar4 + 1;
        iVar1 = extraout_ECX;
      }
    }
    if ((iVar5 == 0) || (iVar4 == 0)) {
      return 1;
    }
  } while( true );
}

/******************************************************************************
 * Function : dk_make_edge_0bab7c (Ghidra: FUN_000bab7c)
 * Prototype: void dk_make_edge_0bab7c(void);
 * Address  : 0xbab7c (Size: 1085 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:2954 ("make_edge : border point")
 * Naming   : Log prefix 'make_edge : border point'
 * Callers  : 5 -> 0xbab7c, 0xbb50c, 0xbca9c, 0xbed7c, 0xbee04
 * Callees  : 5 -> 0xb70c4, 0xb80c8, 0xbaa20, 0xbab7c, 0xddaf0
 * Strings  :
 *   - 0x16b4ca: "navigate.cpp"
 *   - 0x16b4b1: "make_edge : border point"
 ******************************************************************************/
void FUN_000bab7c(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int in_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_EBX;
  char cVar12;
  bool bVar13;
  bool bVar14;
  int local_64;
  int local_60;
  int iVar15;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_10;
  
  local_30 = in_ECX;
  iVar15 = in_EAX;
  local_28 = in_EDX;
  if ((in_EAX == unaff_EBX) && (iVar15 = in_EAX, in_EDX == in_ECX)) {
    return;
  }
  do {
    local_2c = iVar15;
    iVar15 = unaff_EBX;
    iVar3 = local_28;
    iVar2 = local_30;
    local_28 = local_30;
    local_30 = iVar3;
    iVar4 = FUN_000b80c8();
    if (iVar4 == 0) {
      return;
    }
    iVar4 = FUN_000b80c8();
    if (iVar4 == 0) {
      return;
    }
    iVar4 = FUN_000b70c4();
    if (iVar4 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2954, "make_edge : border point") */
    }
    if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar4 * 2 + local_64 * 0x10) * 2
                 ) >> 0x10 == local_2c) &&
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar4 * 2 + local_64 * 0x10) * 4)
        >> 0x10 == iVar3)) {
      return;
    }
    local_20 = *(int *)((int)&DAT_0038c61c + local_60 * 2 + local_64 * 0x10) >> 0x10;
    if ((int)(&DAT_0038c61c)[local_20 * 4] >> 0x10 == local_64) {
      local_10 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + local_20 * 0x10 + 2) >> 0x10 == local_64) {
      local_10 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + local_20 * 0x10) >> 0x10 == local_64) {
      local_10 = 2;
    }
    else {
      local_10 = -1;
    }
    lVar1 = (longlong)(local_2c - iVar15) *
            (longlong)
            ((*(int *)(&DAT_003af898 +
                      (uint)*(ushort *)(&DAT_0038c618 + local_10 * 2 + local_20 * 0x10) * 4) >> 0x10
             ) - iVar2);
    iVar8 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = (uint)lVar1;
    lVar1 = (longlong)(iVar3 - iVar2) *
            (longlong)
            ((*(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + local_10 * 2 + local_20 * 0x10) * 2) >> 0x10
             ) - iVar15);
    iVar9 = (int)((ulonglong)lVar1 >> 0x20);
    uVar6 = (uint)lVar1;
    cVar12 = uVar5 != uVar6;
    uVar5 = (uint)(uVar5 < uVar6);
    uVar6 = iVar8 - iVar9;
    bVar14 = SBORROW4(iVar8,iVar9) != SBORROW4(uVar6,uVar5);
    bVar13 = (int)(uVar6 - uVar5) < 0;
    if (uVar6 != uVar5) {
      cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
    }
    iVar8 = local_64;
    if (cVar12 == '\0') {
      FUN_000bab7c();
      FUN_000bab7c();
      return;
    }
    do {
      iVar9 = *(int *)((int)&DAT_0038c61c + iVar4 * 2 + iVar8 * 0x10) >> 0x10;
      if ((int)(&DAT_0038c61c)[iVar9 * 4] >> 0x10 == iVar8) {
        iVar7 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar9 * 0x10 + 2) >> 0x10 == iVar8) {
        iVar7 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar9 * 0x10) >> 0x10 == iVar8) {
        iVar7 = 2;
      }
      else {
        iVar7 = -1;
      }
      iVar4 = (&DAT_00192134)[iVar7];
      lVar1 = (longlong)(local_2c - iVar15) *
              (longlong)
              ((*(int *)(&DAT_003af898 +
                        (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar9 * 0x10)
                        * 4) >> 0x10) - iVar2);
      iVar8 = (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1;
      lVar1 = (longlong)(iVar3 - iVar2) *
              (longlong)
              ((*(int *)(&DAT_003af896 +
                        (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar9 * 0x10)
                        * 2) >> 0x10) - iVar15);
      iVar10 = (int)((ulonglong)lVar1 >> 0x20);
      uVar6 = (uint)lVar1;
      cVar12 = uVar5 != uVar6;
      uVar5 = (uint)(uVar5 < uVar6);
      uVar6 = iVar8 - iVar10;
      bVar14 = SBORROW4(iVar8,iVar10) != SBORROW4(uVar6,uVar5);
      bVar13 = (int)(uVar6 - uVar5) < 0;
      if (uVar6 != uVar5) {
        cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
      }
      if (-1 < cVar12) {
        iVar8 = *(int *)((int)&DAT_0038c61c + iVar4 * 2 + iVar9 * 0x10) >> 0x10;
        if ((int)(&DAT_0038c61c)[iVar8 * 4] >> 0x10 == iVar9) {
          iVar10 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar8 * 0x10 + 2) >> 0x10 == iVar9) {
          iVar10 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + iVar8 * 0x10) >> 0x10 == iVar9) {
          iVar10 = 2;
        }
        else {
          iVar10 = -1;
        }
        lVar1 = (longlong)
                ((*(int *)(&DAT_003af896 +
                          (uint)*(ushort *)(&DAT_0038c618 + local_20 * 0x10 + local_10 * 2) * 2) >>
                 0x10) - (*(int *)(&DAT_003af896 +
                                  (uint)*(ushort *)
                                         (&DAT_0038c618 +
                                         (&DAT_00192134)[local_10] * 2 + local_20 * 0x10) * 2) >>
                         0x10)) *
                (longlong)
                ((*(int *)(&DAT_003af898 +
                          (uint)*(ushort *)(&DAT_0038c618 + iVar8 * 0x10 + iVar10 * 2) * 4) >> 0x10)
                - (*(int *)(&DAT_003af898 +
                           (uint)*(ushort *)
                                  (&DAT_0038c618 + (&DAT_00192134)[local_10] * 2 + local_20 * 0x10)
                           * 4) >> 0x10));
        iVar4 = (int)((ulonglong)lVar1 >> 0x20);
        uVar5 = (uint)lVar1;
        lVar1 = (longlong)
                ((*(int *)(&DAT_003af898 +
                          (uint)*(ushort *)(&DAT_0038c618 + local_20 * 0x10 + local_10 * 2) * 4) >>
                 0x10) - (*(int *)(&DAT_003af898 +
                                  (uint)*(ushort *)
                                         (&DAT_0038c618 +
                                         (&DAT_00192134)[local_10] * 2 + local_20 * 0x10) * 4) >>
                         0x10)) *
                (longlong)
                ((*(int *)(&DAT_003af896 +
                          (uint)*(ushort *)(&DAT_0038c618 + iVar8 * 0x10 + iVar10 * 2) * 2) >> 0x10)
                - (*(int *)(&DAT_003af896 +
                           (uint)*(ushort *)
                                  (&DAT_0038c618 + (&DAT_00192134)[local_10] * 2 + local_20 * 0x10)
                           * 2) >> 0x10));
        iVar11 = (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uint)lVar1;
        cVar12 = uVar5 != uVar6;
        uVar5 = (uint)(uVar5 < uVar6);
        uVar6 = iVar4 - iVar11;
        bVar14 = SBORROW4(iVar4,iVar11) != SBORROW4(uVar6,uVar5);
        bVar13 = (int)(uVar6 - uVar5) < 0;
        if (uVar6 != uVar5) {
          cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
        }
        if (cVar12 < '\0') {
          FUN_000baa20();
          unaff_EBX = local_2c;
          break;
        }
        iVar4 = (&DAT_00192138)[iVar7];
        local_20 = iVar8;
        local_10 = iVar10;
      }
      iVar8 = iVar9;
    } while ((*(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar9 * 0x10) *
                      2) >> 0x10 != local_2c) ||
            (unaff_EBX = local_2c,
            *(int *)(&DAT_003af898 +
                    (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar9 * 0x10) * 4
                    ) >> 0x10 != iVar3));
  } while( true );
}

/******************************************************************************
 * Function : sub_0bafbc (Ghidra: FUN_000bafbc)
 * Prototype: void sub_0bafbc(int *param_1,int *param_2);
 * Address  : 0xbafbc (Size: 238 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbb0ac
 * Callees  : 2 -> 0xb77b4, 0xb94b8
 ******************************************************************************/
void FUN_000bafbc(int *param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = unaff_EBX >> 8;
  *param_2 = in_ECX >> 8;
  iVar1 = FUN_000b77b4();
  if (iVar1 == -1) {
    FUN_000b94b8();
  }
  else {
    iVar2 = *(int *)(&DAT_003af898 +
                    (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + in_EAX * 0x10) * 4) >> 0x10;
    iVar1 = *(int *)(&DAT_003af898 +
                    (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10) *
                    4);
    iVar3 = (*(int *)(&DAT_003af896 +
                     (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10)
                     * 2) >> 0x10) - *param_1;
    iVar6 = (iVar1 >> 0x10) - *param_2;
    iVar4 = (*(int *)(&DAT_003af896 +
                     (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + in_EAX * 0x10) * 2) >> 0x10) -
            *param_1;
    iVar5 = iVar2 - *param_2;
    if (iVar6 * iVar6 + iVar3 * iVar3 < iVar5 * iVar5 + iVar4 * iVar4) {
      *param_1 = *(int *)(&DAT_003af896 +
                         (uint)*(ushort *)
                                (&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10) * 2)
                 >> 0x10;
      iVar2 = iVar1 >> 0x10;
    }
    else {
      *param_1 = *(int *)(&DAT_003af896 +
                         (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + in_EAX * 0x10) * 2) >> 0x10;
    }
    *param_2 = iVar2;
  }
  return;
}

/******************************************************************************
 * Function : dk_thin_wall_0bb0ac (Ghidra: FUN_000bb0ac)
 * Prototype: void dk_thin_wall_0bb0ac(void);
 * Address  : 0xbb0ac (Size: 1118 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:3119 ("thin_wall : clipping overflow")
 * Naming   : Log prefix 'thin_wall : clipping overflow'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xb55b8, 0xb70c4, 0xb80c8, 0xbafbc, 0xddaf0
 * Strings  :
 *   - 0x16b4f5: "navigate.cpp"
 *   - 0x16b4d7: "thin_wall : clipping overflow"
 ******************************************************************************/
void FUN_000bb0ac(void)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  int in_EDX;
  int iVar7;
  int iVar8;
  int unaff_EBX;
  uint *puVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_50 [32];
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = in_ECX;
  FUN_000b80c8();
  local_30 = local_28 << 8;
  iVar11 = in_ECX - in_EDX;
  local_2c = unaff_EBX << 8;
  iVar10 = unaff_EBX - in_EAX;
  puVar9 = (uint *)local_50;
LAB_000bb0ff:
  do {
    do {
      do {
        iVar7 = DAT_003d26c4 + 1;
        (&DAT_003d23a4)[DAT_003d26c4] = puVar9[2];
        puVar1 = &DAT_003d2534 + DAT_003d26c4;
        DAT_003d26c4 = iVar7;
        *puVar1 = puVar9[3];
        if (99 < iVar7) {
          puVar9[-1] = 0xbb13d;
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 3119, "thin_wall : clipping overflow") */
        }
        if ((puVar9[2] == puVar9[0xb]) && (puVar9[3] == puVar9[10])) {
          return;
        }
        puVar9[-1] = 0xbb168;
        uVar5 = FUN_000b70c4();
        puVar9[0xf] = uVar5;
        puVar9[1] = uVar5;
        uVar2 = *(ushort *)(&DAT_0038c618 + *puVar9 * 0x10 + puVar9[0xf] * 2);
        puVar9[2] = *(int *)(&DAT_003af896 + (uint)uVar2 * 2) >> 0x10;
        iVar7 = *(int *)(&DAT_003af898 + (uint)uVar2 * 4);
        puVar9[3] = iVar7 >> 0x10;
        lVar4 = (longlong)iVar10 * (longlong)(int)((iVar7 >> 0x10) - puVar9[0xd]);
        iVar7 = (int)((ulonglong)lVar4 >> 0x20);
        uVar5 = (uint)lVar4;
        lVar4 = (longlong)iVar11 * (longlong)(int)(puVar9[2] - puVar9[0xe]);
        iVar8 = (int)((ulonglong)lVar4 >> 0x20);
        uVar6 = (uint)lVar4;
        cVar12 = uVar5 != uVar6;
        uVar5 = (uint)(uVar5 < uVar6);
        uVar6 = iVar7 - iVar8;
        bVar14 = SBORROW4(iVar7,iVar8) != SBORROW4(uVar6,uVar5);
        bVar13 = (int)(uVar6 - uVar5) < 0;
        if (uVar6 != uVar5) {
          cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
        }
      } while (cVar12 == '\0');
      uVar5 = (&DAT_00192134)[puVar9[0xf]];
      puVar9[1] = uVar5;
      uVar2 = *(ushort *)(&DAT_0038c618 + uVar5 * 2 + *puVar9 * 0x10);
      puVar9[2] = *(int *)(&DAT_003af896 + (uint)uVar2 * 2) >> 0x10;
      iVar7 = *(int *)(&DAT_003af898 + (uint)uVar2 * 4);
      puVar9[3] = iVar7 >> 0x10;
      lVar4 = (longlong)iVar10 * (longlong)(int)((iVar7 >> 0x10) - puVar9[0xd]);
      iVar7 = (int)((ulonglong)lVar4 >> 0x20);
      uVar5 = (uint)lVar4;
      lVar4 = (longlong)iVar11 * (longlong)(int)(puVar9[2] - puVar9[0xe]);
      iVar8 = (int)((ulonglong)lVar4 >> 0x20);
      uVar6 = (uint)lVar4;
      cVar12 = uVar5 != uVar6;
      uVar5 = (uint)(uVar5 < uVar6);
      uVar6 = iVar7 - iVar8;
      bVar14 = SBORROW4(iVar7,iVar8) != SBORROW4(uVar6,uVar5);
      bVar13 = (int)(uVar6 - uVar5) < 0;
      if (uVar6 != uVar5) {
        cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
      }
    } while (cVar12 == '\0');
    uVar5 = puVar9[0xf];
    while( true ) {
      uVar6 = *puVar9;
      puVar9[0x10] = uVar5;
      iVar7 = *(int *)((int)&DAT_0038c61c + puVar9[0x10] * 2 + uVar6 * 0x10) >> 0x10;
      *puVar9 = iVar7;
      if ((int)(&DAT_0038c61c)[iVar7 * 4] >> 0x10 == uVar6) {
        uVar5 = (int)(&DAT_0038c61c)[iVar7 * 4] >> 0x10 ^ uVar6;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar7 * 0x10 + 2) >> 0x10 == uVar6) {
        uVar5 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar7 * 0x10) >> 0x10 == uVar6) {
        uVar5 = 2;
      }
      else {
        uVar5 = 0xffffffff;
      }
      puVar9[0xc] = uVar5;
      uVar3 = (&DAT_00192138)[uVar5];
      iVar7 = *puVar9 * 0x10;
      puVar9[1] = uVar3;
      uVar2 = *(ushort *)(&DAT_0038c618 + uVar3 * 2 + iVar7);
      puVar9[2] = *(int *)(&DAT_003af896 + (uint)uVar2 * 2) >> 0x10;
      puVar9[3] = *(int *)(&DAT_003af898 + (uint)uVar2 * 4) >> 0x10;
      if (((*(char *)((int)&DAT_0038c621 + uVar6 * 0x10 + 3) ==
            *(char *)((int)&DAT_0038c621 + iVar7 + 3)) &&
          (puVar9[6] = (uint)(byte)(&DAT_0038c625)[uVar6 * 0x10],
          (puVar9[6] & 1 << ((byte)puVar9[0x10] & 0x1f)) != 0)) &&
         (((uint)(byte)(&DAT_0038c625)[iVar7] & 1 << ((byte)uVar5 & 0x1f)) != 0)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (bVar13) break;
      iVar7 = (int)((ulonglong)((longlong)iVar10 * (longlong)(int)(puVar9[3] - puVar9[0xd])) >> 0x20
                   );
      uVar5 = (uint)((longlong)iVar10 * (longlong)(int)(puVar9[3] - puVar9[0xd]));
      iVar8 = (int)((ulonglong)((longlong)iVar11 * (longlong)(int)(puVar9[2] - puVar9[0xe])) >> 0x20
                   );
      uVar6 = (uint)((longlong)iVar11 * (longlong)(int)(puVar9[2] - puVar9[0xe]));
      cVar12 = uVar5 != uVar6;
      uVar5 = (uint)(uVar5 < uVar6);
      uVar6 = iVar7 - iVar8;
      bVar14 = SBORROW4(iVar7,iVar8) != SBORROW4(uVar6,uVar5);
      bVar13 = (int)(uVar6 - uVar5) < 0;
      if (uVar6 != uVar5) {
        cVar12 = (bVar14 == bVar13) - (bVar14 != bVar13);
      }
      if (cVar12 < '\x01') {
        if (-1 < cVar12) goto LAB_000bb0ff;
        uVar5 = (&DAT_00192134)[puVar9[0xc]];
      }
      else {
        uVar5 = (&DAT_00192138)[puVar9[0xc]];
      }
    }
    puVar9[-1] = (uint)(puVar9 + 5);
    puVar9[-2] = (uint)(puVar9 + 4);
    iVar7 = *(int *)(&DAT_003af896 +
                    (uint)*(ushort *)
                           (&DAT_0038c618 + (&DAT_00192134)[puVar9[0x10]] * 2 + uVar6 * 0x10) * 2);
    puVar9[-3] = *(int *)(&DAT_003af898 +
                         (uint)*(ushort *)
                                (&DAT_0038c618 + (&DAT_00192134)[puVar9[0x10]] * 2 + uVar6 * 0x10) *
                         4) >> 0x10;
    puVar9[-4] = iVar7 >> 0x10;
    uVar5 = uVar6 * 0x10 + puVar9[0x10] * 2;
    uVar2 = *(ushort *)(&DAT_0038c618 + uVar5);
    puVar9[7] = uVar5;
    iVar7 = *(int *)(&DAT_003af896 + (uint)uVar2 * 2);
    puVar9[-5] = *(int *)(&DAT_003af898 + (uint)uVar2 * 4) >> 0x10;
    puVar9[-6] = iVar7 >> 0x10;
    puVar9[-7] = 0xbb423;
    FUN_000b55b8();
    puVar9[-4] = (int)(puVar9[-2] + 0x80) >> 8;
    puVar9[-3] = (int)(puVar9[-1] + 0x80) >> 8;
    if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + puVar9[1]) * 2) >> 0x10 ==
         puVar9[-4]) &&
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + puVar9[1]) * 4) >> 0x10 ==
        puVar9[-3])) {
      puVar9[-6] = uVar6;
      puVar9[-5] = puVar9[10];
      puVar9 = puVar9 + -6;
    }
    else if ((*(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + puVar9[6] * 2 + puVar9[-6] * 0x10) * 2) >>
              0x10 == puVar9[-4]) &&
            (*(int *)(&DAT_003af898 +
                     (uint)*(ushort *)(&DAT_0038c618 + puVar9[6] * 2 + puVar9[-6] * 0x10) * 4) >>
             0x10 == puVar9[-3])) {
      puVar9[-5] = puVar9[6];
      puVar9 = puVar9 + -6;
    }
    else {
      puVar9[-7] = (uint)(puVar9 + -3);
      puVar9[-8] = (uint)(puVar9 + -4);
      puVar9[-9] = 0xbb4eb;
      FUN_000bafbc();
      puVar9[-9] = 0xbb4fe;
      FUN_000b80c8();
      puVar9 = puVar9 + -8;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0bb50c (Ghidra: FUN_000bb50c)
 * Prototype: void sub_0bb50c(void);
 * Address  : 0xbb50c (Size: 282 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xb81c4, 0xbab7c
 ******************************************************************************/
void FUN_000bb50c(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int aiStack_2c [2];
  byte local_24 [4];
  char local_20 [4];
  char local_1c [12];
  
  pcVar4 = local_20;
  for (iVar5 = 0; iVar5 < DAT_003d26c4 + -1; iVar5 = iVar5 + 1) {
    pcVar4[-0xffffffff00000004] = -0x3d;
    pcVar4[-0xffffffff00000003] = -0x4b;
    pcVar4[-0xffffffff00000002] = '\v';
    pcVar4[-0xffffffff00000001] = '\0';
    FUN_000bab7c();
    *(char **)(pcVar4 + -4) = pcVar4 + 4;
    *(char **)(pcVar4 + -8) = pcVar4;
    pcVar4[-0xffffffff0000000c] = -0x16;
    pcVar4[-0xffffffff0000000b] = -0x4b;
    pcVar4[-0xffffffff0000000a] = '\v';
    pcVar4[-0xffffffff00000009] = '\0';
    FUN_000b81c4();
    iVar3 = *(int *)((int)&DAT_0038c61c + *(int *)(pcVar4 + -4) * 2 + *(int *)(pcVar4 + -8) * 0x10)
            >> 0x10;
    iVar1 = *(int *)(pcVar4 + -8);
    if ((int)(&DAT_0038c61c)[iVar3 * 4] >> 0x10 == iVar1) {
      bVar2 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) >> 0x10 == iVar1) {
      bVar2 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar3 * 0x10) >> 0x10 == iVar1) {
      bVar2 = 2;
    }
    else {
      bVar2 = 0xff;
    }
    (&DAT_0038c625)[*(int *)(pcVar4 + -8) * 0x10] =
         *pcVar4 << (pcVar4[-4] & 0x1fU) |
         (&DAT_0038c625)[*(int *)(pcVar4 + -8) * 0x10] & ~('\x01' << (pcVar4[-4] & 0x1fU));
    (&DAT_0038c625)[iVar3 * 0x10] =
         pcVar4[4] << (bVar2 & 0x1f) | ~('\x01' << (bVar2 & 0x1f)) & (&DAT_0038c625)[iVar3 * 0x10];
    pcVar4 = pcVar4 + -8;
  }
  return;
}

/******************************************************************************
 * Function : sub_0bb668 (Ghidra: FUN_000bb668)
 * Prototype: undefined8 sub_0bb668(void);
 * Address  : 0xbb668 (Size: 131 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xbb6ec, 0xbc288, 0xbc3c8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000bb668(void)

{
  int in_EAX;
  undefined4 in_EDX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >> 0x10)
          - (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10)
          ) * ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10)
              - (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >>
                0x10)) -
          ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4) >> 0x10)
          - (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >> 0x10)
          ) * ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10)
              - (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >>
                0x10));
  uVar2 = (int)uVar1 >> 0x1f;
  return CONCAT44(in_EDX,(uVar1 ^ uVar2) - uVar2);
}

/******************************************************************************
 * Function : sub_0bb6ec (Ghidra: FUN_000bb6ec)
 * Prototype: undefined8 sub_0bb6ec(void);
 * Address  : 0xbb6ec (Size: 64 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xbb668
 ******************************************************************************/
undefined8 FUN_000bb6ec(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < DAT_0038c5d0) {
    iVar3 = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar3) >> 0x18 != -1) {
        uVar4 = FUN_000bb668();
        iVar2 = (int)((ulonglong)uVar4 >> 0x20);
        iVar1 = extraout_ECX + (int)uVar4;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < DAT_0038c5d0);
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_0bb72c (Ghidra: FUN_000bb72c)
 * Prototype: undefined4 sub_0bb72c(void);
 * Address  : 0xbb72c (Size: 561 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xbbc9c, 0xbc1bc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000bb72c(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  bool bVar14;
  bool bVar15;
  
  iVar10 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10) >> 0x10;
  if ((iVar10 != -1) &&
     (iVar7 = iVar10 * 0x10,
     *(char *)((int)&DAT_0038c621 + in_EAX * 0x10 + 3) == *(char *)((int)&DAT_0038c621 + iVar7 + 3))
     ) {
    if ((int)(&DAT_0038c61c)[iVar10 * 4] >> 0x10 == in_EAX) {
      iVar7 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar7 + 2) >> 0x10 == in_EAX) {
      iVar7 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar7) >> 0x10 == in_EAX) {
      iVar7 = 2;
    }
    else {
      iVar7 = -1;
    }
    iVar2 = in_EAX * 0x10;
    if ((((uint)(byte)(&DAT_0038c625)[iVar2] & 1 << ((byte)in_EDX & 0x1f)) != 0) &&
       (((uint)(byte)(&DAT_0038c625)[iVar10 * 0x10] & 1 << ((byte)iVar7 & 0x1f)) != 0)) {
      iVar11 = *(int *)(&DAT_003af896 +
                       (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[in_EDX] * 2 + iVar2) * 2)
               >> 0x10;
      iVar12 = *(int *)(&DAT_003af898 +
                       (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[in_EDX] * 2 + iVar2) * 4)
               >> 0x10;
      iVar3 = (*(int *)(&DAT_003af898 +
                       (uint)*(ushort *)(&DAT_0038c618 + iVar10 * 0x10 + (&DAT_00192138)[iVar7] * 2)
                       * 4) >> 0x10) - iVar12;
      iVar4 = (*(int *)(&DAT_003af896 +
                       (uint)*(ushort *)(&DAT_0038c618 + iVar10 * 0x10 + (&DAT_00192138)[iVar7] * 2)
                       * 2) >> 0x10) - iVar11;
      lVar1 = (longlong)
              ((*(int *)(&DAT_003af896 +
                        (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192130)[in_EDX] * 2 + iVar2) * 2)
               >> 0x10) - iVar11) * (longlong)iVar3;
      iVar8 = (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1;
      lVar1 = (longlong)
              ((*(int *)(&DAT_003af898 +
                        (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192130)[in_EDX] * 2 + iVar2) * 4)
               >> 0x10) - iVar12) * (longlong)iVar4;
      iVar9 = (int)((ulonglong)lVar1 >> 0x20);
      uVar6 = (uint)lVar1;
      cVar13 = uVar5 != uVar6;
      uVar5 = (uint)(uVar5 < uVar6);
      uVar6 = iVar8 - iVar9;
      bVar15 = SBORROW4(iVar8,iVar9) != SBORROW4(uVar6,uVar5);
      bVar14 = (int)(uVar6 - uVar5) < 0;
      if (uVar6 != uVar5) {
        cVar13 = (bVar15 == bVar14) - (bVar15 != bVar14);
      }
      if (cVar13 < '\0') {
        lVar1 = (longlong)
                ((*(int *)(&DAT_003af896 +
                          (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar2) * 2
                          ) >> 0x10) - iVar11) * (longlong)iVar3;
        iVar3 = (int)((ulonglong)lVar1 >> 0x20);
        uVar5 = (uint)lVar1;
        lVar1 = (longlong)
                ((*(int *)(&DAT_003af898 +
                          (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar2) * 4
                          ) >> 0x10) - iVar12) * (longlong)iVar4;
        iVar4 = (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uint)lVar1;
        cVar13 = uVar5 != uVar6;
        uVar5 = (uint)(uVar5 < uVar6);
        uVar6 = iVar3 - iVar4;
        bVar15 = SBORROW4(iVar3,iVar4) != SBORROW4(uVar6,uVar5);
        bVar14 = (int)(uVar6 - uVar5) < 0;
        if (uVar6 != uVar5) {
          cVar13 = (bVar15 == bVar14) - (bVar15 != bVar14);
        }
        if (('\0' < cVar13) &&
           (iVar12 = iVar12 - (*(int *)(&DAT_003af898 +
                                       (uint)*(ushort *)
                                              (&DAT_0038c618 +
                                              iVar10 * 0x10 + (&DAT_00192138)[iVar7] * 2) * 4) >>
                              0x10),
           iVar11 = iVar11 - (*(int *)(&DAT_003af896 +
                                      (uint)*(ushort *)
                                             (&DAT_0038c618 +
                                             iVar10 * 0x10 + (&DAT_00192138)[iVar7] * 2) * 2) >>
                             0x10),
           iVar10 = (*(int *)(&DAT_003af896 +
                             (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192130)[in_EDX] * 2 + iVar2)
                             * 2) >> 0x10) -
                    (*(int *)(&DAT_003af896 +
                             (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar2)
                             * 2) >> 0x10),
           iVar7 = (*(int *)(&DAT_003af898 +
                            (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192130)[in_EDX] * 2 + iVar2) *
                            4) >> 0x10) -
                   (*(int *)(&DAT_003af898 +
                            (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + iVar2) *
                            4) >> 0x10),
           iVar11 * iVar11 + iVar12 * iVar12 < iVar10 * iVar10 + iVar7 * iVar7)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0bba28 (Ghidra: FUN_000bba28)
 * Prototype: void sub_0bba28(void);
 * Address  : 0xbba28 (Size: 626 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbbc9c
 * Callees  : 2 -> 0xb7e14, 0xb80c8
 ******************************************************************************/
void FUN_000bba28(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  iVar1 = FUN_000b7e14();
  if (iVar1 != -1) {
    if ((((int)(&DAT_0038c621)[iVar1 * 4] >> 0x18 != -1) && ((&DAT_003cf528)[iVar1] != DAT_0019215c)
        ) && ((*(byte *)((int)&DAT_0038c621 + iVar1 * 0x10 + 3) & 0xf) != 0xf)) {
      DAT_003d3668 = DAT_003d3668 + 1;
      (&DAT_003cf528)[iVar1] = DAT_0019215c;
      (&DAT_003d26c4)[DAT_003d3668] = iVar1;
    }
    iVar2 = (int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10;
    if (((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
       ((DAT_0019215c != (&DAT_003cf528)[iVar2] &&
        ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)))) {
      DAT_003d3668 = DAT_003d3668 + 1;
      (&DAT_003cf528)[iVar2] = DAT_0019215c;
      (&DAT_003d26c4)[DAT_003d3668] = iVar2;
    }
    iVar2 = *(int *)((int)&DAT_0038c61c + iVar1 * 0x10 + 2) >> 0x10;
    if (((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
       ((DAT_0019215c != (&DAT_003cf528)[iVar2] &&
        ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)))) {
      DAT_003d3668 = DAT_003d3668 + 1;
      (&DAT_003cf528)[iVar2] = DAT_0019215c;
      (&DAT_003d26c4)[DAT_003d3668] = iVar2;
    }
    iVar2 = *(int *)(&DAT_0038c620 + iVar1 * 0x10) >> 0x10;
    if ((((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
        ((&DAT_003cf528)[iVar2] != DAT_0019215c)) &&
       ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)) {
      DAT_003d3668 = DAT_003d3668 + 1;
      (&DAT_003cf528)[iVar2] = DAT_0019215c;
      (&DAT_003d26c4)[DAT_003d3668] = iVar2;
    }
    iVar2 = FUN_000b80c8();
    local_18 = iVar1;
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)((int)&DAT_0038c61c + local_14 * 2 + local_18 * 0x10) >> 0x10;
        if (iVar2 == -1) {
          return;
        }
        if ((int)(&DAT_0038c61c)[iVar2 * 4] >> 0x10 == local_18) {
          iVar3 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar2 * 0x10 + 2) >> 0x10 == local_18) {
          iVar3 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + iVar2 * 0x10) >> 0x10 == local_18) {
          iVar3 = 2;
        }
        else {
          iVar3 = -1;
        }
        local_14 = (&DAT_00192134)[iVar3];
        if (((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
           (((&DAT_003cf528)[iVar2] != DAT_0019215c &&
            ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)))) {
          DAT_003d3668 = DAT_003d3668 + 1;
          (&DAT_003cf528)[iVar2] = DAT_0019215c;
          (&DAT_003d26c4)[DAT_003d3668] = iVar2;
        }
        local_18 = iVar2;
      } while (iVar1 != iVar2);
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_delaunay_seeded_stack_full_0bbc9c (Ghidra: FUN_000bbc9c)
 * Prototype: int dk_delaunay_seeded_stack_full_0bbc9c(void);
 * Address  : 0xbbc9c (Size: 556 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:3506 ("delaunay_seeded:stack full")
 * Naming   : String 'delaunay_seeded:stack full'
 * Callers  : 1 -> 0xbfaec
 * Callees  : 5 -> 0xb8874, 0xbb72c, 0xbba28, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16b51d: "navigate.cpp"
 *   - 0x16b502: "delaunay_seeded:stack full"
 ******************************************************************************/
int FUN_000bbc9c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  DAT_0019215c = DAT_0019215c + '\x01';
  iVar4 = 0;
  if (DAT_0019215c == '\0') {
    FUN_000e6a10();
    DAT_0019215c = '\x01';
  }
  DAT_003d3668 = 0;
  FUN_000bba28();
  FUN_000bba28();
  FUN_000bba28();
  FUN_000bba28();
  do {
    if (DAT_003d3668 < 1) {
      return iVar4;
    }
    DAT_003d3668 = DAT_003d3668 + -1;
    iVar1 = (&DAT_003d26c8)[DAT_003d3668];
    iVar3 = 0;
    iVar5 = iVar1 * 0x10;
    do {
      iVar2 = FUN_000bb72c();
      if (iVar2 != 0) {
        FUN_000b8874();
        iVar4 = iVar4 + 1;
        if (999 < DAT_003d3668 + 4) {
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 3506, "delaunay_seeded:stack full") */
          return iVar4;
        }
        iVar2 = (int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10;
        if ((((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
            ((&DAT_003cf528)[iVar2] != DAT_0019215c)) &&
           ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)) {
          (&DAT_003d26c8)[DAT_003d3668] = iVar2;
          DAT_003d3668 = DAT_003d3668 + 1;
          (&DAT_003cf528)[iVar2] = DAT_0019215c;
        }
        iVar2 = *(int *)((int)&DAT_0038c61c + iVar5 + 2) >> 0x10;
        if (((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
           (((&DAT_003cf528)[iVar2] != DAT_0019215c &&
            ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)))) {
          (&DAT_003d26c8)[DAT_003d3668] = iVar2;
          DAT_003d3668 = DAT_003d3668 + 1;
          (&DAT_003cf528)[iVar2] = DAT_0019215c;
        }
        iVar2 = *(int *)(&DAT_0038c620 + iVar5) >> 0x10;
        if (((iVar2 != -1) && ((int)(&DAT_0038c621)[iVar2 * 4] >> 0x18 != -1)) &&
           (((&DAT_003cf528)[iVar2] != DAT_0019215c &&
            ((*(byte *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) & 0xf) != 0xf)))) {
          (&DAT_003d26c8)[DAT_003d3668] = iVar2;
          DAT_003d3668 = DAT_003d3668 + 1;
          (&DAT_003cf528)[iVar2] = DAT_0019215c;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  } while( true );
}

/******************************************************************************
 * Function : sub_0bbec8 (Ghidra: FUN_000bbec8)
 * Prototype: undefined4 sub_0bbec8(void);
 * Address  : 0xbbec8 (Size: 401 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbc05c
 * Callees  : 1 -> 0xb95f0
 ******************************************************************************/
undefined4 FUN_000bbec8(void)

{
  int iVar1;
  longlong lVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  
  iVar3 = in_EAX * 0x10;
  iVar13 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + iVar3) * 2) >>
           0x10;
  iVar1 = iVar3 + (&DAT_00192134)[in_EDX] * 2;
  iVar4 = iVar3 + (&DAT_00192138)[in_EDX] * 2;
  iVar5 = ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 2) >> 0x10) + iVar13
          ) / 2;
  iVar9 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + iVar3) * 4) >>
          0x10;
  iVar3 = ((*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 4) >> 0x10) + iVar9)
          / 2;
  iVar6 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 2) >> 0x10) - iVar13;
  iVar12 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 4) >> 0x10) - iVar9;
  iVar10 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar4) * 2) >> 0x10) - iVar5;
  iVar10 = iVar10 * iVar10;
  iVar11 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar4) * 4) >> 0x10) - iVar3;
  iVar11 = iVar11 * iVar11;
  if ((iVar10 + iVar11) * 0x10 < iVar6 * iVar6 + iVar12 * iVar12) {
    lVar2 = (longlong)iVar6 * (longlong)(iVar3 - iVar9);
    iVar3 = (int)((ulonglong)lVar2 >> 0x20);
    uVar7 = (uint)lVar2;
    lVar2 = (longlong)iVar12 * (longlong)(iVar5 - iVar13);
    iVar5 = (int)((ulonglong)lVar2 >> 0x20);
    uVar8 = (uint)lVar2;
    cVar14 = uVar7 != uVar8;
    uVar7 = (uint)(uVar7 < uVar8);
    uVar8 = iVar3 - iVar5;
    bVar16 = SBORROW4(iVar3,iVar5) != SBORROW4(uVar8,uVar7);
    bVar15 = (int)(uVar8 - uVar7) < 0;
    if (uVar8 != uVar7) {
      cVar14 = (bVar16 == bVar15) - (bVar16 != bVar15);
    }
    if (cVar14 == '\0') {
      FUN_000b95f0(iVar10,iVar11,*(int *)((int)&DAT_0038c61c + iVar1) >> 0x10,
                   *(int *)((int)&DAT_0038c61c + iVar4) >> 0x10);
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0bc05c (Ghidra: FUN_000bc05c)
 * Prototype: undefined8 sub_0bc05c(void);
 * Address  : 0xbc05c (Size: 352 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbc1bc
 * Callees  : 1 -> 0xbbec8
 ******************************************************************************/
undefined8 FUN_000bc05c(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  byte bVar3;
  undefined4 in_EDX;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_1c;
  
  iVar5 = 0;
  local_2c = 0;
  if (0 < DAT_0038c5d0) {
    local_28 = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + local_28) >> 0x18 != -1) {
        iVar1 = 0;
        local_1c = 0;
        iVar2 = local_28;
        do {
          iVar4 = *(int *)((int)&DAT_0038c61c + iVar2) >> 0x10;
          if (iVar4 == -1) {
            local_1c = 0;
            break;
          }
          if ((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10 == iVar5) {
            bVar3 = 0;
          }
          else if (*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10 == iVar5) {
            bVar3 = 1;
          }
          else if (*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10 == iVar5) {
            bVar3 = 2;
          }
          else {
            bVar3 = 0xff;
          }
          if (((*(char *)((int)&DAT_0038c621 + local_28 + 3) !=
                *(char *)((int)&DAT_0038c621 + iVar4 * 0x10 + 3)) ||
              (((uint)(byte)(&DAT_0038c625)[local_28] & 1 << ((byte)iVar1 & 0x1f)) == 0)) ||
             (((uint)(byte)(&DAT_0038c625)[iVar4 * 0x10] & 1 << (bVar3 & 0x1f)) == 0)) {
            local_1c = local_1c + 1;
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 2;
        } while (iVar1 < 3);
        if ((local_1c == 1) && (iVar2 = FUN_000bbec8(), iVar2 != 0)) {
          local_2c = local_2c + extraout_ECX;
        }
      }
      local_28 = local_28 + 0x10;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0038c5d0);
  }
  return CONCAT44(in_EDX,local_2c);
}

/******************************************************************************
 * Function : sub_0bc1bc (Ghidra: FUN_000bc1bc)
 * Prototype: void sub_0bc1bc(void);
 * Address  : 0xbc1bc (Size: 104 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xb8874, 0xbb72c, 0xbc05c
 ******************************************************************************/
void FUN_000bc1bc(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar1 = FUN_000bc05c();
    if (iVar1 == 0) {
      return;
    }
    do {
      iVar4 = 0;
      iVar1 = 0;
      if (0 < DAT_0038c5d0) {
        iVar3 = 0;
        do {
          if (*(int *)((int)&DAT_0038c621 + iVar3) >> 0x18 != -1) {
            iVar2 = 0;
            do {
              iVar1 = FUN_000bb72c();
              if (iVar1 != 0) {
                FUN_000b8874();
                iVar4 = iVar4 + 1;
                iVar1 = extraout_ECX_00;
                break;
              }
              iVar2 = iVar2 + 1;
              iVar1 = extraout_ECX;
            } while (iVar2 < 3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar1 < DAT_0038c5d0);
      }
    } while (iVar4 != 0);
  } while( true );
}

/******************************************************************************
 * Function : sub_0bc288 (Ghidra: FUN_000bc288)
 * Prototype: void sub_0bc288(undefined1 param_1);
 * Address  : 0xbc288 (Size: 318 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbc3c8
 * Callees  : 1 -> 0xbb668
 ******************************************************************************/
void FUN_000bc288(undefined1 param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_14;
  
  local_14 = 0;
  iVar5 = in_EAX;
  if (unaff_EBX < in_EAX) {
    iVar5 = unaff_EBX;
    unaff_EBX = in_EAX;
  }
  iVar2 = in_ECX;
  if (in_ECX < in_EDX) {
    iVar2 = in_EDX;
    in_EDX = in_ECX;
  }
  iVar1 = iVar2 - in_EDX;
  iVar4 = DAT_0038c5d0 + -1;
  if (-1 < iVar4) {
    iVar3 = iVar4 * 0x10;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar3) >> 0x18 != -1) {
        if ((((iVar5 <= *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 2) >>
                        0x10) &&
             (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 2) >> 0x10 <=
              unaff_EBX)) &&
            (in_EDX <= *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 4) >>
                       0x10)) &&
           (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar3) * 4) >> 0x10 <= iVar2)
           ) {
          if (((iVar5 <= *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 2) >>
                         0x10) &&
              (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 2) >> 0x10 <=
               unaff_EBX)) &&
             ((in_EDX <= *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 4) >>
                         0x10 &&
              (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar3) * 4) >> 0x10 <=
               iVar2)))) {
            if (((iVar5 <= *(int *)(&DAT_003af896 +
                                   (uint)*(ushort *)((int)&DAT_0038c61c + iVar3) * 2) >> 0x10) &&
                (*(int *)(&DAT_003af896 + (uint)*(ushort *)((int)&DAT_0038c61c + iVar3) * 2) >> 0x10
                 <= unaff_EBX)) &&
               ((in_EDX <= *(int *)(&DAT_003af898 +
                                   (uint)*(ushort *)((int)&DAT_0038c61c + iVar3) * 4) >> 0x10 &&
                (*(int *)(&DAT_003af898 + (uint)*(ushort *)((int)&DAT_0038c61c + iVar3) * 4) >> 0x10
                 <= iVar2)))) {
              *(undefined1 *)((int)&DAT_0038c621 + iVar3 + 3) = param_1;
              uVar6 = FUN_000bb668();
              iVar3 = (int)((ulonglong)uVar6 >> 0x20);
              local_14 = local_14 + (int)uVar6;
              iVar2 = extraout_ECX;
              if (local_14 == (unaff_EBX - iVar5) * 2 * iVar1) {
                return;
              }
            }
          }
        }
      }
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -0x10;
    } while (-1 < iVar4);
  }
  return;
}

/******************************************************************************
 * Function : sub_0bc3c8 (Ghidra: FUN_000bc3c8)
 * Prototype: void sub_0bc3c8(void);
 * Address  : 0xbc3c8 (Size: 379 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbca9c
 * Callees  : 3 -> 0xb81c4, 0xbb668, 0xbc288
 ******************************************************************************/
void FUN_000bc3c8(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int unaff_EBX;
  undefined1 unaff_BP;
  undefined1 unaff_SI;
  undefined4 ***pppuVar2;
  undefined4 ***pppuVar3;
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
  local_18 = (unaff_EBX - in_EAX) * 2 * (in_ECX - in_EDX);
  puStack_3c = local_34;
  local_44 = (undefined1 *)0xbc404;
  local_14 = in_EDX;
  FUN_000b81c4();
  *(undefined1 *)((int)&DAT_0038c621 + (int)local_40 * 0x10 + 3) = unaff_SI;
  local_44 = (undefined1 *)0xbc420;
  local_18 = FUN_000bb668();
  if (local_18 != extraout_ECX) {
    local_44 = local_2c;
    local_48 = &local_30;
    FUN_000b81c4();
    if (local_38 != local_48) {
      *(undefined1 *)((int)&DAT_0038c621 + (int)local_38 * 0x10 + 3) = unaff_BP;
      iVar1 = FUN_000bb668();
      local_20 = (undefined4 **)((int)local_20 + iVar1);
    }
    if (local_20 != local_28) {
      pppuVar3 = &local_30;
      FUN_000b81c4(pppuVar3,local_2c);
      if (((undefined4 ***)local_38 != pppuVar3) && (local_38 != local_40)) {
        *(undefined1 *)((int)&DAT_0038c621 + (int)local_38 * 0x10 + 3) = (undefined1)local_14;
        iVar1 = FUN_000bb668();
        local_28 = (undefined4 **)(extraout_ECX_00 + iVar1);
      }
      if (local_28 != local_30) {
        pppuVar2 = &local_48;
        FUN_000b81c4(pppuVar2,&local_44);
        if (((pppuVar3 != pppuVar2) && (pppuVar3 != (undefined4 ***)local_48)) &&
           (pppuVar3 != (undefined4 ***)local_40)) {
          *(undefined1 *)((int)&DAT_0038c621 + (int)pppuVar3 * 0x10 + 3) = local_1c;
          iVar1 = FUN_000bb668();
          local_30 = (undefined4 **)((int)local_30 + iVar1);
        }
        if (local_30 != local_38) {
          FUN_000bc288(local_1c);
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0bc544 (Ghidra: FUN_000bc544)
 * Prototype: uint sub_0bc544(void);
 * Address  : 0xbc544 (Size: 149 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:3792 ("edgelen_set_edge:not found")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16b545: "navigate.cpp"
 ******************************************************************************/
uint FUN_000bc544(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int in_EDX;
  uint uVar3;
  
  uVar1 = in_EAX;
  while( true ) {
    if ((*(byte *)((int)&DAT_0038c621 + uVar1 * 0x10 + 3) & 0xf) == 0xf) {
      return 1;
    }
    uVar3 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + uVar1 * 0x10) >> 0x10;
    if (uVar3 == 0xffffffff) break;
    if ((int)(&DAT_0038c61c)[uVar3 * 4] >> 0x10 == uVar1) {
      iVar2 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + uVar3 * 0x10 + 2) >> 0x10 == uVar1) {
      iVar2 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + uVar3 * 0x10) >> 0x10 == uVar1) {
      iVar2 = 2;
    }
    else {
      iVar2 = -1;
    }
    in_EDX = (&DAT_00192134)[iVar2];
    uVar1 = uVar3;
    if (uVar3 == in_EAX) {
      return uVar3 ^ in_EAX;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0bca9c (Ghidra: FUN_000bca9c)
 * Prototype: void sub_0bca9c(undefined1 param_1);
 * Address  : 0xbca9c (Size: 160 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbfaec
 * Callees  : 3 -> 0xb95f0, 0xbab7c, 0xbc3c8
 ******************************************************************************/
void FUN_000bca9c(undefined1 param_1)

{
  FUN_000b95f0();
  FUN_000b95f0();
  FUN_000b95f0();
  FUN_000b95f0();
  FUN_000bab7c();
  FUN_000bab7c();
  FUN_000bab7c();
  FUN_000bab7c();
  FUN_000bc3c8(param_1);
  return;
}

/******************************************************************************
 * Function : sub_0bcb3c (Ghidra: FUN_000bcb3c)
 * Prototype: void sub_0bcb3c(void);
 * Address  : 0xbcb3c (Size: 139 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000bcb3c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *in_EDX;
  int *unaff_EBX;
  
  iVar1 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4);
  iVar2 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4);
  iVar3 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4);
  *in_EDX = ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10
             ) + (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >>
                 0x10) +
            (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10)) /
            3;
  *unaff_EBX = ((iVar1 >> 0x10) + (iVar2 >> 0x10) + (iVar3 >> 0x10)) / 3;
  return;
}

/******************************************************************************
 * Function : sub_0bcbc8 (Ghidra: FUN_000bcbc8)
 * Prototype: void sub_0bcbc8(void);
 * Address  : 0xbcbc8 (Size: 487 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xbcdb0, 0xbcddc, 0xbe524, 0xbe760, 0xbe84c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000bcbc8(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *in_EDX;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = 0;
  iVar2 = 0;
  if (((int)(&DAT_0038c61c)[in_EAX * 4] >> 0x10 != -1) &&
     ((*(byte *)((int)&DAT_0038c621 + ((int)(&DAT_0038c61c)[in_EAX * 4] >> 0x10) * 0x10 + 3) & 0xf)
      != 0xf)) {
    iVar1 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10)
            + (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >>
              0x10);
    iVar2 = 2;
    iVar4 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >> 0x10)
            + (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4) >>
              0x10);
  }
  iVar3 = *(int *)((int)&DAT_0038c61c + in_EAX * 0x10 + 2) >> 0x10;
  if ((iVar3 != -1) && ((*(byte *)((int)&DAT_0038c621 + iVar3 * 0x10 + 3) & 0xf) != 0xf)) {
    iVar2 = iVar2 + 2;
    iVar1 = iVar1 + (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2)
                    >> 0x10) +
            (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10);
    iVar4 = iVar4 + (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4)
                    >> 0x10) +
            (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10);
  }
  if ((*(int *)(&DAT_0038c620 + in_EAX * 0x10) >> 0x10 != -1) &&
     ((*(byte *)((int)&DAT_0038c621 + (*(int *)(&DAT_0038c620 + in_EAX * 0x10) >> 0x10) * 0x10 + 3)
      & 0xf) != 0xf)) {
    iVar2 = iVar2 + 2;
    iVar1 = iVar1 + (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >>
                    0x10) +
            (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2) >> 0x10)
    ;
    iVar4 = iVar4 + (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >>
                    0x10) +
            (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4) >> 0x10)
    ;
  }
  if (iVar2 == 0) {
    iVar1 = iVar1 + (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 2)
                    >> 0x10) +
            (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 2) >> 0x10)
            + (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >> 0x10);
    iVar2 = 3;
    iVar4 = iVar4 + (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10) * 4)
                    >> 0x10) +
            (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + in_EAX * 0x10) * 4) >> 0x10)
            + (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10);
  }
  *in_EDX = (iVar1 << 8) / iVar2;
  *unaff_EBX = (iVar4 << 8) / iVar2;
  return;
}

/******************************************************************************
 * Function : sub_0bcdb0 (Ghidra: FUN_000bcdb0)
 * Prototype: void sub_0bcdb0(void);
 * Address  : 0xbcdb0 (Size: 43 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xbcbc8
 ******************************************************************************/
void FUN_000bcdb0(void)

{
  int *extraout_ECX;
  int *unaff_EBX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_000bcbc8();
  *extraout_ECX = local_10 >> 8;
  *unaff_EBX = local_c >> 8;
  return;
}

/******************************************************************************
 * Function : dk_triangle_reppoint_0bcddc (Ghidra: FUN_000bcddc)
 * Prototype: void dk_triangle_reppoint_0bcddc(void);
 * Address  : 0xbcddc (Size: 374 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:3945 ("triangle_reppoint : centre outside"); navigate.cpp:3969 ("triangle_reppoint:outside triangle")
 * Naming   : Log prefix 'triangle_reppoint : centre outside'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xb74fc, 0xbcbc8, 0xddaf0
 * Strings  :
 *   - 0x16b575: "navigate.cpp"
 *   - 0x16b5a5: "navigate.cpp"
 *   - 0x16b552: "triangle_reppoint : centre outside"
 *   - 0x16b582: "triangle_reppoint:outside triangle"
 ******************************************************************************/
void FUN_000bcddc(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int *in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  int local_20;
  int local_1c;
  
  FUN_000bcbc8();
  iVar1 = FUN_000b74fc();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 3945, "triangle_reppoint : centre outside") */
    iVar1 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + extraout_ECX * 0x10) * 2) >>
            0x10) * 0x100 - local_20;
    iVar2 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + extraout_ECX * 0x10) * 4) >>
            0x10) * 0x100 - local_1c;
    iVar1 = iVar1 * iVar1 + iVar2 * iVar2;
    iVar2 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + extraout_ECX * 0x10) * 2) >>
            0x10) * 0x100 - local_20;
    iVar3 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + extraout_ECX * 0x10) * 4) >>
            0x10) * 0x100 - local_1c;
    iVar2 = iVar2 * iVar2 + iVar3 * iVar3;
    iVar3 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + extraout_ECX * 4) * 2) >>
            0x10) * 0x100 - local_20;
    iVar4 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + extraout_ECX * 4) * 4) >>
            0x10) * 0x100 - local_1c;
    iVar3 = iVar4 * iVar4 + iVar3 * iVar3;
    if (iVar1 < iVar2) {
      if (iVar1 < iVar3) {
        iVar1 = 0;
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = (iVar3 <= iVar2) + 1;
    }
    local_20 = (*(int *)(&DAT_003af896 +
                        (uint)*(ushort *)(&DAT_0038c618 + extraout_ECX_00 * 0x10 + iVar1 * 2) * 2)
               >> 0x10) << 8;
    local_1c = (*(int *)(&DAT_003af898 +
                        (uint)*(ushort *)(&DAT_0038c618 + extraout_ECX_00 * 0x10 + iVar1 * 2) * 4)
               >> 0x10) << 8;
  }
  iVar1 = FUN_000b74fc();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 3969, "triangle_reppoint:outside triangle") */
  }
  *in_EDX = local_20;
  *unaff_EBX = local_1c;
  return;
}

/******************************************************************************
 * Function : sub_0bd1ac (Ghidra: FUN_000bd1ac)
 * Prototype: void sub_0bd1ac(int *param_1,int *param_2);
 * Address  : 0xbd1ac (Size: 389 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xc0740, 0xc0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000bd1ac(int *param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  int in_EDX;
  int *unaff_EBX;
  undefined1 auStack_5c [80];
  
  iVar1 = in_EAX * 0x10;
  if ((int)(&DAT_0038c61c)[in_EAX * 4] >> 0x10 == in_EDX) {
    *unaff_EBX = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar1) * 2) >> 0x10) <<
                 8;
    *in_ECX = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar1) * 4) >> 0x10) << 8;
    *param_1 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 2) >> 0x10) << 8
    ;
    *param_2 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 4) >> 0x10) << 8
    ;
  }
  else {
    if (*(int *)((int)&DAT_0038c61c + iVar1 + 2) >> 0x10 == in_EDX) {
      *unaff_EBX = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >>
                   0x10) << 8;
      *in_ECX = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >> 0x10
                ) << 8;
      *param_1 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61a + iVar1) * 2) >> 0x10) <<
                 8;
      *param_2 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61a + iVar1) * 4) >> 0x10) <<
                 8;
      return;
    }
    if (*(int *)(&DAT_0038c620 + iVar1) >> 0x10 == in_EDX) {
      *unaff_EBX = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 2) >> 0x10)
                   << 8;
      *in_ECX = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1) * 4) >> 0x10) <<
                8;
      *param_1 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 2) >>
                 0x10) << 8;
      *param_2 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c61c + in_EAX * 4) * 4) >>
                 0x10) << 8;
      return;
    }
    FUN_000e7714(auStack_5c,s_edge_points___edge_not_found__d__0016b5b2);
    FUN_000ddaf0();
  }
  return;
}

/******************************************************************************
 * Function : dk_edge_points_0bd331 (Ghidra: FUN_000bd331)
 * Prototype: void dk_edge_points_0bd331(void);
 * Address  : 0xbd331 (Size: 48 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:4078
 * Naming   : Log prefix 'edge_points : edge not found %d->%d'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16b5d6: "navigate.cpp"
 *   - 0x16b5b2: "edge_points : edge not found %d->%d"
 ******************************************************************************/
void FUN_000bd331(void)

{
  FUN_000e7714(&stack0x00000000,s_edge_points___edge_not_found__d__0016b5b2);
  FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 4078, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : sub_0bd370 (Ghidra: FUN_000bd370)
 * Prototype: void sub_0bd370(void);
 * Address  : 0xbd370 (Size: 102 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:4645 ("navigate.heap_add : heap overflow")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16b605: "navigate.cpp"
 ******************************************************************************/
void FUN_000bd370(void)

{
  int iVar1;
  int in_EAX;
  
  DAT_003d3680 = 9000;
  iVar1 = (&DAT_003d3680)[in_EAX];
  DAT_003c5830 = 0xffffffff;
  while( true ) {
    if ((int)(&DAT_003bcb90)[(&DAT_003d3680)[in_EAX >> 1]] < (int)(&DAT_003bcb90)[iVar1]) break;
    (&DAT_003d3680)[in_EAX] = (&DAT_003d3680)[in_EAX >> 1];
    in_EAX = in_EAX >> 1;
  }
  (&DAT_003d3680)[in_EAX] = iVar1;
  return;
}

/******************************************************************************
 * Function : sub_0bd46c (Ghidra: FUN_000bd46c)
 * Prototype: void sub_0bd46c(void);
 * Address  : 0xbd46c (Size: 176 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xbd51c, 0xbd5cc, 0xbd9b4, 0xbe3d0, 0xbe84c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000bd46c(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  iVar2 = DAT_003d367c;
  (&DAT_003d3684)[DAT_003d367c] = 9000;
  DAT_003c5830 = 0x7fffffff;
  iVar1 = (&DAT_003d3680)[in_EAX];
  while (in_EAX <= iVar2 >> 1) {
    iVar3 = in_EAX * 2;
    if ((int)(&DAT_003bcb90)[(&DAT_003d3684)[in_EAX * 2]] <
        (int)(&DAT_003bcb90)[(&DAT_003d3680)[in_EAX * 2]]) {
      iVar3 = iVar3 + 1;
    }
    if ((int)(&DAT_003bcb90)[iVar1] < (int)(&DAT_003bcb90)[(&DAT_003d3680)[iVar3]]) break;
    (&DAT_003d3680)[in_EAX] = (&DAT_003d3680)[iVar3];
    in_EAX = iVar3;
  }
  (&DAT_003d3680)[in_EAX] = iVar1;
  return;
}

/******************************************************************************
 * Function : sub_0bd51c (Ghidra: FUN_000bd51c)
 * Prototype: undefined8 sub_0bd51c(void);
 * Address  : 0xbd51c (Size: 53 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xbd46c
 ******************************************************************************/
undefined8 FUN_000bd51c(void)

{
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  
  DAT_003d3684 = (&DAT_003d3680)[DAT_003d367c];
  DAT_003d367c = DAT_003d367c + -1;
  FUN_000bd46c();
  return CONCAT44(in_EDX,extraout_EDX);
}

/******************************************************************************
 * Function : sub_0bd554 (Ghidra: FUN_000bd554)
 * Prototype: undefined8 sub_0bd554(void);
 * Address  : 0xbd554 (Size: 120 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xbd5cc, 0xbd9b4, 0xbdeec, 0xbe760, 0xbe84c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000bd554(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  int iVar5;
  
  iVar3 = 0xffffff;
  iVar2 = in_EAX * 0x10;
  iVar1 = iVar2 + 6;
  do {
    iVar4 = (DAT_003c5834 >> 8) -
            (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar2) * 2) >> 0x10);
    iVar5 = (DAT_003c5838 >> 8) -
            (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar2) * 4) >> 0x10);
    iVar4 = iVar5 * iVar5 + iVar4 * iVar4;
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 != iVar1);
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : dk_navigate_heap_add_heap_0bd5cc (Ghidra: FUN_000bd5cc)
 * Prototype: int dk_navigate_heap_add_heap_0bd5cc(void);
 * Address  : 0xbd5cc (Size: 998 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:4645 ("navigate.heap_add : heap overflow"); navigate.cpp:994 ("fits_thro:table err"); navigate.cpp:995 ("fits_thro:uninit"); navigate.cpp:996 ("edgebits:overflow"); navigate.cpp:4645 ("navigate.heap_add : heap overflow")
 * Naming   : String 'navigate.heap_add : heap overflow'
 * Callers  : 1 -> 0xbdd9c
 * Callees  : 5 -> 0xb5550, 0xbd46c, 0xbd554, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16af6c: "navigate.cpp"
 *   - 0x16af8a: "navigate.cpp"
 *   - 0x16afa9: "navigate.cpp"
 *   - 0x16b605: "navigate.cpp"
 *   - 0x16b5e3: "navigate.heap_add : heap overflow"
 *   - 0x16af58: "fits_thro:table err"
 *   - 0x16af79: "fits_thro:uninit"
 *   - 0x16af97: "edgebits:overflow"
 ******************************************************************************/
int FUN_000bd5cc(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  int *unaff_EBX;
  uint uVar7;
  undefined8 uVar8;
  int local_24;
  int local_1c;
  int local_10;
  
  DAT_0019215c = DAT_0019215c + '\x01';
  DAT_003d367c = 0;
  if (DAT_0019215c == '\0') {
    FUN_000e6a10();
    DAT_0019215c = '\x01';
  }
  cVar2 = DAT_0019215c;
  if (0 < DAT_003d23a0) {
    iVar4 = DAT_003d23a0 * 4;
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)&DAT_003d2210 + iVar3);
      iVar3 = iVar3 + 4;
      (&DAT_003cf528)[*piVar1] = cVar2;
    } while (iVar3 < iVar4);
  }
  iVar3 = DAT_003d367c + 1;
  (&DAT_003bcb90)[in_EDX] = 1;
  *(int *)(&DAT_003b3ef0 + in_EDX * 4) = in_EDX;
  DAT_003d367c = iVar3;
  (&DAT_003cf528)[in_EDX] = DAT_0019215c;
  iVar4 = in_EDX;
  if (0xff < iVar3) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
    iVar4 = extraout_ECX;
  }
  iVar3 = DAT_003d367c;
  (&DAT_003d3680)[DAT_003d367c] = iVar4;
  DAT_003c5830 = 0xffffffff;
  DAT_003d3680 = 9000;
  iVar4 = (&DAT_003d3680)[iVar3];
  while( true ) {
    if ((int)(&DAT_003bcb90)[(&DAT_003d3680)[iVar3 >> 1]] < (int)(&DAT_003bcb90)[iVar4]) break;
    (&DAT_003d3680)[iVar3] = (&DAT_003d3680)[iVar3 >> 1];
    iVar3 = iVar3 >> 1;
  }
  (&DAT_003d3680)[iVar3] = iVar4;
  iVar4 = DAT_003d3684;
  while ((local_1c = iVar4, DAT_003d3684 = local_1c, in_EAX != local_1c && (DAT_003d367c != 0))) {
    DAT_003d3684 = (&DAT_003d3680)[DAT_003d367c];
    DAT_003d367c = DAT_003d367c + -1;
    FUN_000bd46c();
    if (DAT_003d367c == 0) {
      local_24 = -1;
    }
    else {
      local_24 = DAT_003d3684;
      if (DAT_003d3684 == in_EAX) break;
      DAT_003d3684 = (&DAT_003d3680)[DAT_003d367c];
      DAT_003d367c = DAT_003d367c + -1;
      FUN_000bd46c();
    }
    while( true ) {
      iVar4 = local_1c * 0x10;
      iVar3 = iVar4 + 6;
      local_10 = 0;
      do {
        if (DAT_0019215c != (&DAT_003cf528)[*(int *)((int)&DAT_0038c61c + iVar4) >> 0x10]) {
          uVar7 = (uint)((&DAT_0038c626)[local_1c * 8] & 0x3f) |
                  *(uint *)((int)&DAT_00192060 + local_10);
          if (((DAT_003d1b54 != &DAT_003d1854) && (DAT_003d1b54 != &DAT_003d1954)) &&
             (DAT_003d1b54 != &DAT_003d1a54)) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 994, "fits_thro:table err") */
          }
          if (DAT_003d1b58 != 1) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 995, "fits_thro:uninit") */
          }
          if (0x3f < uVar7) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 996, "edgebits:overflow") */
          }
          if ((DAT_003d1b54[uVar7] != 0) &&
             (iVar5 = (*(code *)PTR_FUN_000b5550_0019212c)(), iVar5 != 0)) {
            uVar8 = FUN_000bd554();
            cVar2 = DAT_0019215c;
            iVar5 = (int)uVar8;
            if ((int)((ulonglong)uVar8 >> 0x20) == 2) {
              iVar5 = iVar5 << 4;
            }
            (&DAT_003bcb90)[extraout_ECX_00] = iVar5;
            iVar6 = DAT_003d367c + 1;
            (&DAT_003cf528)[extraout_ECX_00] = cVar2;
            DAT_003d367c = iVar6;
            *(int *)(&DAT_003b3ef0 + extraout_ECX_00 * 4) = local_1c;
            iVar5 = extraout_ECX_00;
            if (0xff < iVar6) {
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
              iVar5 = extraout_ECX_01;
            }
            iVar6 = DAT_003d367c;
            (&DAT_003d3680)[DAT_003d367c] = iVar5;
            DAT_003d3680 = 9000;
            iVar5 = (&DAT_003d3680)[iVar6];
            DAT_003c5830 = 0xffffffff;
            while( true ) {
              if ((int)(&DAT_003bcb90)[(&DAT_003d3680)[iVar6 >> 1]] < (int)(&DAT_003bcb90)[iVar5])
              break;
              (&DAT_003d3680)[iVar6] = (&DAT_003d3680)[iVar6 >> 1];
              iVar6 = iVar6 >> 1;
            }
            (&DAT_003d3680)[iVar6] = iVar5;
          }
        }
        local_10 = local_10 + 4;
        iVar4 = iVar4 + 2;
      } while (iVar4 != iVar3);
      local_1c = local_24;
      iVar4 = DAT_003d3684;
      if (local_24 == -1) break;
      local_24 = -1;
    }
  }
  if (DAT_003d367c == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
    for (; *unaff_EBX = in_EAX, in_EAX != in_EDX; in_EAX = *(int *)(&DAT_003b3ef0 + in_EAX * 4)) {
      unaff_EBX = unaff_EBX + 1;
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}

/******************************************************************************
 * Function : dk_navigate_heap_add_heap_0bd9b4 (Ghidra: FUN_000bd9b4)
 * Prototype: int dk_navigate_heap_add_heap_0bd9b4(void);
 * Address  : 0xbd9b4 (Size: 998 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:4645 ("navigate.heap_add : heap overflow"); navigate.cpp:994 ("fits_thro:table err"); navigate.cpp:995 ("fits_thro:uninit"); navigate.cpp:996 ("edgebits:overflow"); navigate.cpp:4645 ("navigate.heap_add : heap overflow")
 * Naming   : String 'navigate.heap_add : heap overflow'
 * Callers  : 1 -> 0xbdd9c
 * Callees  : 5 -> 0xb5550, 0xbd46c, 0xbd554, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16af6c: "navigate.cpp"
 *   - 0x16af8a: "navigate.cpp"
 *   - 0x16afa9: "navigate.cpp"
 *   - 0x16b605: "navigate.cpp"
 *   - 0x16b5e3: "navigate.heap_add : heap overflow"
 *   - 0x16af58: "fits_thro:table err"
 *   - 0x16af79: "fits_thro:uninit"
 *   - 0x16af97: "edgebits:overflow"
 ******************************************************************************/
int FUN_000bd9b4(void)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  int *unaff_EBX;
  uint uVar7;
  undefined8 uVar8;
  int local_24;
  int local_1c;
  int local_10;
  
  DAT_0019215c = DAT_0019215c + '\x01';
  DAT_003d367c = 0;
  if (DAT_0019215c == '\0') {
    FUN_000e6a10();
    DAT_0019215c = '\x01';
  }
  cVar2 = DAT_0019215c;
  if (0 < DAT_003d23a0) {
    iVar4 = DAT_003d23a0 * 4;
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)&DAT_003d2210 + iVar3);
      iVar3 = iVar3 + 4;
      (&DAT_003cf528)[*piVar1] = cVar2;
    } while (iVar3 < iVar4);
  }
  iVar3 = DAT_003d367c + 1;
  (&DAT_003bcb90)[in_EDX] = 1;
  *(int *)(&DAT_003b3ef0 + in_EDX * 4) = in_EDX;
  DAT_003d367c = iVar3;
  (&DAT_003cf528)[in_EDX] = DAT_0019215c;
  iVar4 = in_EDX;
  if (0xff < iVar3) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
    iVar4 = extraout_ECX;
  }
  iVar3 = DAT_003d367c;
  (&DAT_003d3680)[DAT_003d367c] = iVar4;
  DAT_003c5830 = 0xffffffff;
  DAT_003d3680 = 9000;
  iVar4 = (&DAT_003d3680)[iVar3];
  while( true ) {
    if ((int)(&DAT_003bcb90)[(&DAT_003d3680)[iVar3 >> 1]] < (int)(&DAT_003bcb90)[iVar4]) break;
    (&DAT_003d3680)[iVar3] = (&DAT_003d3680)[iVar3 >> 1];
    iVar3 = iVar3 >> 1;
  }
  (&DAT_003d3680)[iVar3] = iVar4;
  iVar4 = DAT_003d3684;
  while ((local_1c = iVar4, DAT_003d3684 = local_1c, in_EAX != local_1c && (DAT_003d367c != 0))) {
    DAT_003d3684 = (&DAT_003d3680)[DAT_003d367c];
    DAT_003d367c = DAT_003d367c + -1;
    FUN_000bd46c();
    if (DAT_003d367c == 0) {
      local_24 = -1;
    }
    else {
      local_24 = DAT_003d3684;
      if (DAT_003d3684 == in_EAX) break;
      DAT_003d3684 = (&DAT_003d3680)[DAT_003d367c];
      DAT_003d367c = DAT_003d367c + -1;
      FUN_000bd46c();
    }
    while( true ) {
      iVar4 = local_1c * 0x10;
      iVar3 = iVar4 + 6;
      local_10 = 0;
      do {
        if (DAT_0019215c != (&DAT_003cf528)[*(int *)((int)&DAT_0038c61c + iVar4) >> 0x10]) {
          uVar7 = (uint)((&DAT_0038c626)[local_1c * 8] & 0x3f) |
                  *(uint *)((int)&DAT_00192060 + local_10);
          if (((DAT_003d1b54 != &DAT_003d1854) && (DAT_003d1b54 != &DAT_003d1954)) &&
             (DAT_003d1b54 != &DAT_003d1a54)) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 994, "fits_thro:table err") */
          }
          if (DAT_003d1b58 != 1) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 995, "fits_thro:uninit") */
          }
          if (0x3f < uVar7) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 996, "edgebits:overflow") */
          }
          if ((DAT_003d1b54[uVar7] != 0) &&
             (iVar5 = (*(code *)PTR_FUN_000b5550_0019212c)(), iVar5 != 0)) {
            uVar8 = FUN_000bd554();
            cVar2 = DAT_0019215c;
            iVar5 = (int)uVar8;
            if ((int)((ulonglong)uVar8 >> 0x20) == 2) {
              iVar5 = iVar5 << 4;
            }
            (&DAT_003bcb90)[extraout_ECX_00] = iVar5;
            iVar6 = DAT_003d367c + 1;
            (&DAT_003cf528)[extraout_ECX_00] = cVar2;
            DAT_003d367c = iVar6;
            *(int *)(&DAT_003b3ef0 + extraout_ECX_00 * 4) = local_1c;
            iVar5 = extraout_ECX_00;
            if (0xff < iVar6) {
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
              iVar5 = extraout_ECX_01;
            }
            iVar6 = DAT_003d367c;
            (&DAT_003d3680)[DAT_003d367c] = iVar5;
            DAT_003d3680 = 9000;
            iVar5 = (&DAT_003d3680)[iVar6];
            DAT_003c5830 = 0xffffffff;
            while( true ) {
              if ((int)(&DAT_003bcb90)[(&DAT_003d3680)[iVar6 >> 1]] < (int)(&DAT_003bcb90)[iVar5])
              break;
              (&DAT_003d3680)[iVar6] = (&DAT_003d3680)[iVar6 >> 1];
              iVar6 = iVar6 >> 1;
            }
            (&DAT_003d3680)[iVar6] = iVar5;
          }
        }
        local_10 = local_10 + 4;
        iVar4 = iVar4 + 2;
      } while (iVar4 != iVar3);
      local_1c = local_24;
      iVar4 = DAT_003d3684;
      if (local_24 == -1) break;
      local_24 = -1;
    }
  }
  if (DAT_003d367c == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
    for (; *unaff_EBX = in_EAX, in_EAX != in_EDX; in_EAX = *(int *)(&DAT_003b3ef0 + in_EAX * 4)) {
      unaff_EBX = unaff_EBX + 1;
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}

/******************************************************************************
 * Function : sub_0bdd9c (Ghidra: FUN_000bdd9c)
 * Prototype: undefined * sub_0bdd9c(void);
 * Address  : 0xbdd9c (Size: 336 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xc1ecc, 0xc241c
 * Callees  : 3 -> 0xbd5cc, 0xbd9b4, 0xc0740
 ******************************************************************************/
undefined * FUN_000bdd9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined1 auStack_1c [8];
  undefined *local_14;
  
  bVar7 = 0;
  puStack_20 = (undefined1 *)0xbddb5;
  local_28 = (undefined *)FUN_000bd5cc();
  puVar9 = local_28;
  if (local_28 != (undefined *)0xffffffff) {
    puStack_24 = &DAT_003ce500;
    puStack_20 = auStack_1c;
    local_14 = local_28;
    FUN_000c0740(&DAT_003c8740);
    uVar2 = DAT_003c5838;
    uVar1 = DAT_003c5834;
    DAT_003c5834 = DAT_003c583c;
    DAT_003c583c = uVar1;
    DAT_003c5838 = DAT_003c5840;
    DAT_003c5840 = uVar2;
    puVar3 = (undefined *)FUN_000bd9b4();
    puVar9 = puVar3;
    if (puVar3 != (undefined *)0xffffffff) {
      puVar9 = &DAT_003ced14;
      puVar8 = &DAT_003cb620;
      FUN_000c0740(&DAT_003cb620,puVar3,&DAT_003ced14,&local_28);
      uVar2 = DAT_003c5838;
      uVar1 = DAT_003c5834;
      DAT_003c5834 = DAT_003c583c;
      DAT_003c583c = uVar1;
      DAT_003c5838 = DAT_003c5840;
      DAT_003c5840 = uVar2;
      if (SBORROW4((int)puVar8,(int)puVar8)) {
        puVar5 = &DAT_003c8740;
        puVar6 = &DAT_003c5860;
        for (iVar4 = 3000; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        }
      }
      else {
        puVar9 = puVar3;
        if (-1 < (int)puVar3) {
          iVar4 = (int)puVar3 * 4;
          puVar5 = &DAT_003c5860;
          do {
            puVar6 = (undefined4 *)(&DAT_003cb620 + iVar4);
            iVar4 = iVar4 + -4;
            *puVar5 = *puVar6;
            puVar5 = puVar5 + 1;
          } while (-1 < iVar4);
        }
      }
    }
  }
  return puVar9;
}

/******************************************************************************
 * Function : dk_dfs_visit_0bdeec (Ghidra: FUN_000bdeec)
 * Prototype: void dk_dfs_visit_0bdeec(void);
 * Address  : 0xbdeec (Size: 1060 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5168 ("dfs_visit : overflow"); navigate.cpp:5175 ("dfs_visit : overflow")
 * Naming   : Log prefix 'dfs_visit : overflow'
 * Callers  : 1 -> 0xbec84
 * Callees  : 4 -> 0xb5550, 0xbd554, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16b627: "navigate.cpp"
 *   - 0x16b649: "navigate.cpp"
 *   - 0x16b612: "dfs_visit : overflow"
 *   - 0x16b634: "dfs_visit : overflow"
 ******************************************************************************/
void FUN_000bdeec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int aiStack_30 [4];
  int local_20;
  int local_1c;
  
  DAT_0019215c = DAT_0019215c + '\x01';
  if (DAT_0019215c == '\0') {
    aiStack_30[0] = 0xbdf19;
    FUN_000e6a10();
    DAT_0019215c = '\x01';
  }
  iVar7 = DAT_003c584c;
  (&DAT_003cf528)[in_EAX] = DAT_0019215c;
  *(undefined4 *)(&DAT_003b3ef0 + in_EAX * 4) = 0xffffffff;
  if (in_EAX != iVar7) {
    iVar7 = 0;
    iVar9 = in_EAX << 4;
    DAT_003d59c8 = 0;
    do {
      iVar6 = *(int *)((int)&DAT_0038c61c + iVar9) >> 0x10;
      if ((iVar6 != -1) && (DAT_0019215c != (&DAT_003cf528)[iVar6])) {
        aiStack_30[0] = 0xbdf9a;
        iVar6 = (*(code *)PTR_FUN_000b5550_0019212c)();
        if (iVar6 != 0) {
          aiStack_30[0] = 0xbdfa5;
          iVar6 = FUN_000bd554();
          DAT_003d59c8 = DAT_003d59c8 + 1;
          *(int *)(DAT_003d59c8 * 4 + 0x3d3a84) = in_EAX;
          *(int *)(DAT_003d59c8 * 4 + 0x3d4a24) = iVar7;
          aiStack_30[DAT_003d59c8] = iVar6;
        }
      }
      iVar6 = aiStack_30[1];
      uVar2 = DAT_003d4a28;
      uVar1 = DAT_003d3a88;
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 2;
    } while (iVar7 < 3);
    if ((1 < DAT_003d59c8) && (aiStack_30[1] < aiStack_30[2])) {
      DAT_003d3a88 = DAT_003d3a8c;
      DAT_003d3a8c = uVar1;
      DAT_003d4a28 = DAT_003d4a2c;
      DAT_003d4a2c = uVar2;
      aiStack_30[1] = aiStack_30[2];
      aiStack_30[2] = iVar6;
    }
    iVar9 = aiStack_30[2];
    iVar7 = aiStack_30[1];
    uVar4 = DAT_003d4a2c;
    uVar3 = DAT_003d4a28;
    uVar2 = DAT_003d3a8c;
    uVar1 = DAT_003d3a88;
    if ((2 < DAT_003d59c8) && (aiStack_30[1] < aiStack_30[3])) {
      DAT_003d3a88 = DAT_003d3a90;
      DAT_003d3a90 = uVar1;
      DAT_003d4a28 = DAT_003d4a30;
      DAT_003d4a30 = uVar3;
      aiStack_30[1] = aiStack_30[3];
      aiStack_30[3] = iVar7;
    }
    if ((2 < DAT_003d59c8) && (aiStack_30[2] < aiStack_30[3])) {
      DAT_003d3a8c = DAT_003d3a90;
      DAT_003d3a90 = uVar2;
      DAT_003d4a2c = DAT_003d4a30;
      DAT_003d4a30 = uVar4;
      aiStack_30[2] = aiStack_30[3];
      aiStack_30[3] = iVar9;
    }
    if (DAT_003d59c8 != 0) {
      DAT_003d59c8 = DAT_003d59c8 + -1;
      iVar7 = (&DAT_003d3a88)[DAT_003d59c8];
      iVar9 = (&DAT_003d4a28)[DAT_003d59c8];
      if (iVar7 != DAT_003c584c) {
        do {
          iVar6 = *(int *)((int)&DAT_0038c61c + iVar9 * 2 + iVar7 * 0x10) >> 0x10;
          (&DAT_003cf528)[iVar6] = DAT_0019215c;
          iVar9 = (&DAT_0038c61c)[iVar6 * 4];
          *(int *)(&DAT_003b3ef0 + iVar6 * 4) = iVar7;
          if (iVar9 >> 0x10 == iVar7) {
            iVar5 = 0;
          }
          else if (*(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10 == iVar7) {
            iVar5 = 1;
          }
          else if (*(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10 == iVar7) {
            iVar5 = 2;
          }
          else {
            iVar5 = -1;
          }
          iVar8 = *(int *)((int)&DAT_0038c61c + (&DAT_00192138)[iVar5] * 2 + iVar6 * 0x10) >> 0x10;
          iVar9 = 0;
          iVar7 = iVar6;
          if ((iVar8 != -1) && (DAT_0019215c != (&DAT_003cf528)[iVar8])) {
            aiStack_30[0] = 0xbe18b;
            iVar9 = (*(code *)PTR_FUN_000b5550_0019212c)();
            iVar7 = extraout_ECX;
          }
          local_1c = 0;
          iVar6 = *(int *)((int)&DAT_0038c61c + (&DAT_00192134)[iVar5] * 2 + iVar7 * 0x10) >> 0x10;
          if ((iVar6 != -1) && ((&DAT_003cf528)[iVar6] != DAT_0019215c)) {
            local_20 = (int)(&DAT_0038c621)[iVar6 * 4] >> 0x18;
            aiStack_30[0] = 0xbe1e1;
            local_1c = (*(code *)PTR_FUN_000b5550_0019212c)();
            iVar7 = extraout_ECX_00;
          }
          if ((iVar9 == 0) || (local_1c == 0)) {
            if (iVar9 == 0) {
              if (local_1c == 0) {
                if (DAT_003d59c8 == 0) {
                  return;
                }
                DAT_003d59c8 = DAT_003d59c8 + -1;
                iVar7 = (&DAT_003d3a88)[DAT_003d59c8];
                iVar9 = (&DAT_003d4a28)[DAT_003d59c8];
              }
              else {
                iVar9 = (&DAT_00192134)[iVar5];
              }
            }
            else {
              iVar9 = (&DAT_00192138)[iVar5];
            }
          }
          else {
            aiStack_30[0] = 0xbe1ff;
            FUN_000bd554();
            aiStack_30[0] = 0xbe208;
            uVar10 = FUN_000bd554();
            iVar7 = extraout_ECX_01;
            if ((int)((ulonglong)uVar10 >> 0x20) < (int)uVar10) {
              if (999 < DAT_003d59c8) {
                aiStack_30[0] = 0xbe22c;
                FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5168, "dfs_visit : overflow") */
                iVar7 = extraout_ECX_02;
              }
              uVar1 = (&DAT_00192134)[iVar5];
              iVar9 = (&DAT_00192138)[iVar5];
              (&DAT_003d3a88)[DAT_003d59c8] = iVar7;
              (&DAT_003d4a28)[DAT_003d59c8] = uVar1;
              DAT_003d59c8 = DAT_003d59c8 + 1;
            }
            else {
              if (999 < DAT_003d59c8) {
                aiStack_30[0] = 0xbe281;
                FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5175, "dfs_visit : overflow") */
                iVar7 = extraout_ECX_03;
              }
              iVar6 = DAT_003d59c8;
              iVar9 = (&DAT_00192134)[iVar5];
              (&DAT_003d4a28)[DAT_003d59c8] = (&DAT_00192138)[iVar5];
              (&DAT_003d3a88)[iVar6] = iVar7;
              DAT_003d59c8 = DAT_003d59c8 + 1;
            }
          }
        } while (iVar7 != DAT_003c584c);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_tree_to_route_0be310 (Ghidra: FUN_000be310)
 * Prototype: int dk_tree_to_route_0be310(void);
 * Address  : 0xbe310 (Size: 95 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5220 ("tree_to_route : overflow")
 * Naming   : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16b66f: "navigate.cpp"
 *   - 0x16b656: "tree_to_route : overflow"
 ******************************************************************************/
int FUN_000be310(void)

{
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  int *unaff_EBX;
  int iVar1;
  
  if (DAT_0019215c == (&DAT_003cf528)[in_EAX]) {
    iVar1 = 0;
    for (; in_EAX != in_EDX; in_EAX = *(int *)(&DAT_003b3ef0 + in_EAX * 4)) {
      iVar1 = iVar1 + 1;
      *unaff_EBX = in_EAX;
      if (2999 < iVar1) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        in_EAX = extraout_ECX;
      }
      unaff_EBX = unaff_EBX + 1;
    }
    *unaff_EBX = in_EDX;
    return iVar1;
  }
  return -1;
}

/******************************************************************************
 * Function : dk_pq_remove_0be3d0 (Ghidra: FUN_000be3d0)
 * Prototype: undefined8 dk_pq_remove_0be3d0(void);
 * Address  : 0xbe3d0 (Size: 97 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5306 ("pq_remove : empty Q"); navigate.cpp:4645 ("navigate.heap_add : heap overflow")
 * Naming   : Log prefix 'pq_remove : empty Q'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xbd46c, 0xddaf0
 * Strings  :
 *   - 0x16b605: "navigate.cpp"
 *   - 0x16b690: "navigate.cpp"
 *   - 0x16b67c: "pq_remove : empty Q"
 ******************************************************************************/
undefined8 FUN_000be3d0(void)

{
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  
  if (DAT_003d59cc == 0) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5306, "pq_remove : empty Q") */
  }
  DAT_003d59cc = DAT_003d59cc + -1;
  DAT_003d3684 = (&DAT_003d3680)[DAT_003d367c];
  DAT_003d367c = DAT_003d367c + -1;
  FUN_000bd46c();
  return CONCAT44(in_EDX,extraout_EDX);
}

/******************************************************************************
 * Function : sub_0be524 (Ghidra: FUN_000be524)
 * Prototype: void sub_0be524(void);
 * Address  : 0xbe524 (Size: 129 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5220 ("tree_to_route : overflow")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xbcbc8, 0xe8cc8
 * Strings  :
 *   - 0x16b66f: "navigate.cpp"
 ******************************************************************************/
void FUN_000be524(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_000bcbc8();
  iVar1 = local_1c >> 8;
  iVar2 = local_18 >> 8;
  FUN_000bcbc8(iVar1,iVar2);
  FUN_000e8cc8(iVar1,iVar2,local_14 >> 8,local_10 >> 8);
  return;
}

/******************************************************************************
 * Function : dk_tree_to_route_0be760 (Ghidra: FUN_000be760)
 * Prototype: int dk_tree_to_route_0be760(void);
 * Address  : 0xbe760 (Size: 236 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5220 ("tree_to_route : overflow")
 * Naming   : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xbcbc8, 0xbd554, 0xc0740, 0xddaf0
 * Strings  :
 *   - 0x16b66f: "navigate.cpp"
 *   - 0x16b656: "tree_to_route : overflow"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000be760(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int in_EDX;
  undefined8 uVar4;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  
  local_20 = in_EDX;
  local_1c = in_EAX;
  if (in_EDX != DAT_003c584c) {
    FUN_000bcbc8();
  }
  iVar2 = DAT_003c5850;
  if ((&DAT_003cf528)[local_1c] == DAT_0019215c) {
    iVar3 = 0;
    piVar1 = &DAT_003896e0;
    for (; iVar2 != local_1c; local_1c = *(int *)(&DAT_003b3ef0 + local_1c * 4)) {
      iVar3 = iVar3 + 1;
      *piVar1 = local_1c;
      if (2999 < iVar3) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        local_1c = extraout_ECX;
      }
      piVar1 = piVar1 + 1;
    }
    *piVar1 = iVar2;
  }
  else {
    iVar3 = -1;
  }
  _DAT_003896dc = local_20;
  FUN_000c0740(&DAT_003896dc,iVar3 + 1,&DAT_00388ec8,local_24);
  uVar4 = FUN_000bd554();
  return (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
}

/******************************************************************************
 * Function : dk_pq_remove_0be84c (Ghidra: FUN_000be84c)
 * Prototype: void dk_pq_remove_0be84c(void);
 * Address  : 0xbe84c (Size: 1080 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5306 ("pq_remove : empty Q"); navigate.cpp:5220 ("tree_to_route : overflow"); navigate.cpp:4645 ("navigate.heap_add : heap overflow")
 * Naming   : Log prefix 'pq_remove : empty Q'
 * Callers  : 1 -> 0xbed00
 * Callees  : 7 -> 0xb5550, 0xbcbc8, 0xbd46c, 0xbd554, 0xc0740, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16b605: "navigate.cpp"
 *   - 0x16b66f: "navigate.cpp"
 *   - 0x16b690: "navigate.cpp"
 *   - 0x16b67c: "pq_remove : empty Q"
 *   - 0x16b656: "tree_to_route : overflow"
 *   - 0x16b5e3: "navigate.heap_add : heap overflow"
 ******************************************************************************/
/* WARNING: Heritage AFTER dead removal. Example location: r0x003d3680 : 0x000be904 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_000be84c(void)

{
  bool bVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *puVar6;
  int extraout_EDX;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  int aiStack_5c [17];
  
  puVar6 = &DAT_003bcb90;
  iVar3 = 8999;
  do {
    iVar3 = iVar3 + -1;
    *puVar6 = 0x80000001;
    puVar6 = puVar6 + 1;
  } while (-1 < iVar3);
  DAT_0019215c = DAT_0019215c + '\x01';
  if (DAT_0019215c == '\0') {
    FUN_000e6a10();
    DAT_0019215c = '\x01';
  }
  DAT_003d367c = 0;
  DAT_003d59cc = 0;
  if ((&DAT_003bcb90)[in_EAX] == -0x7fffffff) {
    DAT_003d59cc = 1;
    DAT_003d367c = 1;
    DAT_003d3684 = in_EAX;
    (&DAT_003bcb90)[in_EAX] = 0xffffffff;
    DAT_003d3680 = 9000;
    DAT_003c5830 = 0xffffffff;
    iVar3 = 1;
    while ((int)(&DAT_003bcb90)[in_EAX] <= (int)(&DAT_003bcb90)[DAT_003d3680]) {
      (&DAT_003d3680)[iVar3] = DAT_003d3680;
      iVar3 = 0;
    }
    (&DAT_003d3680)[iVar3] = in_EAX;
    bVar1 = true;
  }
  else if ((int)(&DAT_003bcb90)[in_EAX] < -1) {
    bVar1 = true;
    (&DAT_003bcb90)[in_EAX] = 0xffffffff;
  }
  else {
    bVar1 = false;
  }
  cVar2 = DAT_0019215c;
  piVar8 = aiStack_5c + 5;
  if (bVar1) {
    *(undefined4 *)(&DAT_003b3ef0 + in_EAX * 4) = 0xffffffff;
    (&DAT_003cf528)[in_EAX] = cVar2;
    piVar8 = aiStack_5c + 5;
  }
  do {
    if (DAT_003d59cc == 0) {
      *(undefined4 *)((int)piVar8 + -4) = 0xbe984;
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5306, "pq_remove : empty Q") */
    }
    DAT_003d59cc = DAT_003d59cc + -1;
    iVar3 = (&DAT_003d3680)[DAT_003d367c];
    *(int *)((int)piVar8 + 0x20) = DAT_003d3684;
    *(undefined4 *)((int)piVar8 + -4) = 0xbe9c3;
    DAT_003d367c = DAT_003d367c + -1;
    DAT_003d3684 = iVar3;
    FUN_000bd46c();
    iVar4 = DAT_003c584c;
    iVar3 = (&DAT_003bcb90)[extraout_EDX];
    (&DAT_003bcb90)[extraout_EDX] = -iVar3;
    if (extraout_EDX == iVar4) {
      return;
    }
    if (iVar3 == -0x7fffffff) {
      (&DAT_003bcb90)[extraout_EDX] = 0;
    }
    iVar3 = *(int *)((int)piVar8 + 0x20) * 0x10;
    *(int *)((int)piVar8 + 0x14) = iVar3;
    *(int *)((int)piVar8 + 0x28) = iVar3;
    *(int *)((int)piVar8 + 0x10) = iVar3 + 6;
    puVar6 = piVar8;
    do {
      if (*(int *)((int)&DAT_0038c61c + puVar6[10]) >> 0x10 == -1) {
        iVar3 = -1;
      }
      else {
        puVar6[-1] = 0xbea32;
        iVar4 = (*(code *)PTR_FUN_000b5550_0019212c)();
        iVar3 = extraout_ECX;
        if (iVar4 == 0) {
          iVar3 = -1;
        }
      }
      puVar6[0xb] = iVar3;
      piVar8 = puVar6;
      if ((iVar3 != -1) && ((int)(&DAT_003bcb90)[iVar3] < 0)) {
        puVar6[7] = iVar3;
        puVar6[6] = iVar3;
        puVar6[9] = puVar6[8];
        if (iVar3 == DAT_003c584c) {
          *puVar6 = DAT_003c5834;
          puVar6[1] = DAT_003c5838;
        }
        else {
          puVar6[-1] = 0xbea7f;
          FUN_000bcbc8();
        }
        iVar3 = DAT_003c5850;
        if ((&DAT_003cf528)[puVar6[9]] == DAT_0019215c) {
          iVar5 = 0;
          piVar8 = &DAT_003896e0;
          for (iVar4 = puVar6[9]; iVar3 != iVar4; iVar4 = *(int *)(&DAT_003b3ef0 + iVar4 * 4)) {
            iVar5 = iVar5 + 1;
            *piVar8 = iVar4;
            if (2999 < iVar5) {
              puVar6[-1] = 0xbeae5;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
              iVar4 = extraout_ECX_00;
            }
            piVar8 = piVar8 + 1;
          }
          *piVar8 = iVar3;
        }
        else {
          iVar5 = -1;
        }
        _DAT_003896dc = puVar6[6];
        puVar6[-1] = puVar6 + 2;
        puVar6[-2] = &DAT_00388ec8;
        puVar6[-3] = iVar5 + 1;
        puVar6[-4] = &DAT_003896dc;
        puVar6[-5] = 0xbeb27;
        FUN_000c0740();
        puVar6[-5] = 0xbeb37;
        uVar9 = FUN_000bd554();
        iVar3 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20) + 1;
        iVar4 = puVar6[7];
        iVar5 = (&DAT_003bcb90)[iVar4];
        if (iVar5 == -0x7fffffff) {
          iVar5 = puVar6[7];
          DAT_003d59cc = DAT_003d59cc + 1;
          DAT_003d367c = DAT_003d367c + 1;
          (&DAT_003bcb90)[iVar4] = -iVar3;
          if (0xff < DAT_003d367c) {
            puVar6[-5] = 0xbeb97;
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 4645, "navigate.heap_add : heap overflow") */
            iVar5 = extraout_ECX_01;
          }
          iVar4 = DAT_003d367c;
          (&DAT_003d3680)[DAT_003d367c] = iVar5;
          DAT_003d3680 = 9000;
          DAT_003c5830 = 0xffffffff;
          iVar3 = (&DAT_003d3680)[iVar4];
          while( true ) {
            if ((int)(&DAT_003bcb90)[(&DAT_003d3680)[iVar4 >> 1]] < (int)(&DAT_003bcb90)[iVar3])
            break;
            (&DAT_003d3680)[iVar4] = (&DAT_003d3680)[iVar4 >> 1];
            iVar4 = iVar4 >> 1;
          }
          bVar1 = true;
          (&DAT_003d3680)[iVar4] = iVar3;
        }
        else {
          iVar7 = -iVar3;
          if ((iVar7 < 0) && (-iVar5 != iVar3 && iVar5 <= iVar7)) {
            (&DAT_003bcb90)[iVar4] = iVar7;
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        piVar8 = puVar6 + -4;
        if (bVar1) {
          *(undefined4 *)(&DAT_003b3ef0 + puVar6[7] * 4) = puVar6[4];
          (&DAT_003cf528)[puVar6[7]] = DAT_0019215c;
          piVar8 = puVar6 + -4;
        }
      }
      iVar3 = *(int *)((int)piVar8 + 0x28);
      *(int *)((int)piVar8 + 0x28) = iVar3 + 2;
      puVar6 = piVar8;
    } while (iVar3 + 2 != *(int *)((int)piVar8 + 0x10));
  } while (DAT_003d59cc != 0);
  return;
}

/******************************************************************************
 * Function : dk_tree_to_route_0bec84 (Ghidra: FUN_000bec84)
 * Prototype: int dk_tree_to_route_0bec84(void);
 * Address  : 0xbec84 (Size: 123 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5220 ("tree_to_route : overflow")
 * Naming   : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xbdeec, 0xddaf0
 * Strings  :
 *   - 0x16b66f: "navigate.cpp"
 *   - 0x16b656: "tree_to_route : overflow"
 ******************************************************************************/
int FUN_000bec84(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *unaff_EBX;
  
  *unaff_EBX = 1;
  FUN_000bdeec();
  if ((&DAT_003cf528)[in_EAX] == DAT_0019215c) {
    iVar2 = 0;
    piVar1 = &DAT_003c5860;
    for (; extraout_EDX != in_EAX; in_EAX = *(int *)(&DAT_003b3ef0 + in_EAX * 4)) {
      iVar2 = iVar2 + 1;
      *piVar1 = in_EAX;
      if (2999 < iVar2) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        in_EAX = extraout_ECX;
      }
      piVar1 = piVar1 + 1;
    }
    *piVar1 = extraout_EDX;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

/******************************************************************************
 * Function : dk_tree_to_route_0bed00 (Ghidra: FUN_000bed00)
 * Prototype: int dk_tree_to_route_0bed00(void);
 * Address  : 0xbed00 (Size: 123 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5220 ("tree_to_route : overflow")
 * Naming   : Log prefix 'tree_to_route : overflow'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xbe84c, 0xddaf0
 * Strings  :
 *   - 0x16b66f: "navigate.cpp"
 *   - 0x16b656: "tree_to_route : overflow"
 ******************************************************************************/
int FUN_000bed00(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *unaff_EBX;
  
  *unaff_EBX = 1;
  FUN_000be84c();
  if ((&DAT_003cf528)[in_EAX] == DAT_0019215c) {
    iVar2 = 0;
    piVar1 = &DAT_003c5860;
    for (; extraout_EDX != in_EAX; in_EAX = *(int *)(&DAT_003b3ef0 + in_EAX * 4)) {
      iVar2 = iVar2 + 1;
      *piVar1 = in_EAX;
      if (2999 < iVar2) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5220, "tree_to_route : overflow") */
        in_EAX = extraout_ECX;
      }
      piVar1 = piVar1 + 1;
    }
    *piVar1 = extraout_EDX;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0bed7c (Ghidra: FUN_000bed7c)
 * Prototype: void sub_0bed7c(int param_1);
 * Address  : 0xbed7c (Size: 136 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbfaec
 * Callees  : 2 -> 0xb95f0, 0xbab7c
 ******************************************************************************/
void FUN_000bed7c(int param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  char *pcVar2;
  char *pcVar3;
  char local_14;
  char local_10;
  
  iVar1 = in_EAX + in_ECX * 0x100;
  local_10 = *(char *)(in_EDX + iVar1);
  local_14 = *(char *)(in_EDX + -1 + iVar1);
  FUN_000b95f0();
  iVar1 = extraout_ECX;
  pcVar3 = (char *)(in_ECX * 0x100 + in_EDX + in_EAX);
  while( true ) {
    pcVar2 = pcVar3;
    iVar1 = iVar1 + 1;
    pcVar3 = pcVar2 + 0x100;
    if (param_1 <= iVar1) break;
    if ((*pcVar3 != local_10) || (local_14 != pcVar2[0xff])) {
      FUN_000b95f0();
      local_10 = *pcVar3;
      local_14 = pcVar2[0xff];
      iVar1 = extraout_ECX_00;
    }
  }
  FUN_000b95f0();
  FUN_000bab7c();
  return;
}

/******************************************************************************
 * Function : sub_0bee04 (Ghidra: FUN_000bee04)
 * Prototype: void sub_0bee04(void);
 * Address  : 0xbee04 (Size: 157 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5861 ("outer_locked:border edge")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbfaec
 * Callees  : 2 -> 0xb95f0, 0xbab7c
 * Strings  :
 *   - 0x16b6b6: "navigate.cpp"
 ******************************************************************************/
void FUN_000bee04(void)

{
  int in_EAX;
  int in_ECX;
  char *pcVar1;
  char *extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  char local_14;
  char local_10;
  
  pcVar1 = (char *)(in_ECX * 0x100 + in_EAX + in_EDX);
  local_10 = pcVar1[-0x100];
  local_14 = *pcVar1;
  FUN_000b95f0();
  while (in_EDX = in_EDX + 1, in_EDX < unaff_EBX) {
    pcVar1 = (char *)(in_ECX * 0x100 + in_EAX + in_EDX);
    if ((pcVar1[-0x100] != local_10) || (*pcVar1 != local_14)) {
      FUN_000b95f0();
      local_10 = extraout_ECX[-0x100];
      local_14 = *extraout_ECX;
    }
  }
  FUN_000b95f0();
  FUN_000bab7c();
  return;
}

/******************************************************************************
 * Function : dk_delete_point_0bef98 (Ghidra: FUN_000bef98)
 * Prototype: void dk_delete_point_0bef98(void);
 * Address  : 0xbef98 (Size: 1110 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5888 ("border_internal_points_delete:top not found"); navigate.cpp:2854 ("delete_point : make_3or4point failure"); navigate.cpp:2871 ("delete_point : 3 fails"); navigate.cpp:5861 ("outer_locked:border edge"); navigate.cpp:5861 ("outer_locked:border edge")
 * Naming   : Log prefix 'delete_point : make_3or4point failure'
 * Callers  : 1 -> 0xbfaec
 * Callees  : 5 -> 0xb81c4, 0xb9940, 0xb9c2c, 0xba5cc, 0xddaf0
 * Strings  :
 *   - 0x16b45c: "navigate.cpp"
 *   - 0x16b480: "navigate.cpp"
 *   - 0x16b4a4: "navigate.cpp"
 *   - 0x16b6b6: "navigate.cpp"
 *   - 0x16b6ef: "navigate.cpp"
 *   - 0x16b6c3: "border_internal_points_delete:top not found"
 *   - 0x16b436: "delete_point : make_3or4point failure"
 *   - 0x16b469: "delete_point : 4 fails"
 *   - 0x16b48d: "delete_point : 3 fails"
 *   - 0x16b69d: "outer_locked:border edge"
 ******************************************************************************/
void FUN_000bef98(void)

{
  short *psVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  
  local_18 = in_ECX;
  iVar4 = FUN_000b81c4();
  if (iVar4 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5888, "border_internal_points_delete:top not found") */
  }
  else {
    iVar4 = *(int *)((int)&DAT_0038c61c + unaff_EBX * 2 + (int)&local_24 * 0x10) >> 0x10;
    if ((int *)((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10) == &local_24) {
      iVar7 = 0;
    }
    else if ((int *)(*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10) == &local_24) {
      iVar7 = 1;
    }
    else {
      if ((int *)(*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10) != &local_24) goto LAB_000bf036;
      iVar7 = 2;
    }
    do {
      while( true ) {
        while( true ) {
          if ((int)(uint)(ushort)(&DAT_0038c626)[iVar4 * 8] >> 6 != 0) {
            iVar5 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar4 * 8] >> 6) * 3;
            psVar1 = (short *)((int)&DAT_003d1b5c + iVar5);
            *psVar1 = *psVar1 + -1;
            (&DAT_003d1b5e)[iVar5] = 0;
            uVar2 = (&DAT_0038c626)[iVar4 * 8];
            (&DAT_0038c626)[iVar4 * 8] = uVar2 & 0x3f;
            DAT_003d1b5c = DAT_003d1b5c + 1;
            (&DAT_0038c626)[iVar4 * 8] = uVar2 & 0x3f;
          }
          if (((((int *)(*(int *)(&DAT_003af896 +
                                 (uint)*(ushort *)
                                        (&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar4 * 0x10)
                                 * 2) >> 0x10) == local_1c) ||
               ((int *)(*(int *)(&DAT_003af896 +
                                (uint)*(ushort *)
                                       (&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar4 * 0x10) *
                                2) >> 0x10) == &local_28)) ||
              (*(int *)(&DAT_003af898 +
                       (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar4 * 0x10)
                       * 4) >> 0x10 == local_18)) ||
             (*(int *)(&DAT_003af898 +
                      (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192138)[iVar7] * 2 + iVar4 * 0x10) *
                      4) >> 0x10 == local_20)) break;
          local_28 = iVar4;
          local_24 = (&DAT_00192138)[iVar7];
          iVar4 = FUN_000b9940();
          if (iVar4 == 0) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2854, "delete_point : make_3or4point failure") */
            iVar4 = extraout_ECX;
          }
          if (iVar4 == 4) {
            iVar4 = FUN_000b9c2c();
          }
          else {
            iVar4 = FUN_000ba5cc();
          }
          if (iVar4 == 0) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2871, "delete_point : 3 fails") */
          }
          iVar4 = *(int *)((int)&DAT_0038c61c + unaff_EBX * 2 + (int)&local_24 * 0x10) >> 0x10;
          if ((int *)((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10) == &local_24) {
            iVar7 = 0;
          }
          else if ((int *)(*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10) == &local_24) {
            iVar7 = 1;
          }
          else if ((int *)(*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10) == &local_24) {
            iVar7 = 2;
          }
          else {
LAB_000bf036:
            iVar7 = -1;
          }
        }
        iVar7 = (&DAT_00192134)[iVar7];
        iVar6 = *(int *)((int)&DAT_0038c61c + iVar7 * 2 + iVar4 * 0x10) >> 0x10;
        iVar5 = iVar4;
        if (iVar6 == -1) {
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5861, "outer_locked:border edge") */
          iVar5 = extraout_ECX_00;
        }
        if ((int)(&DAT_0038c61c)[iVar6 * 4] >> 0x10 == iVar5) {
          cVar3 = '\0';
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10 == iVar5) {
          cVar3 = '\x01';
        }
        else if (*(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10 == iVar5) {
          cVar3 = '\x02';
        }
        else {
          cVar3 = -1;
        }
        iVar5 = iVar4;
        if (((uint)(byte)(&DAT_0038c625)[iVar6 * 0x10] & 1 << (cVar3 + 3U & 0x1f)) == 0) break;
        if ((int *)(*(int *)((int)&DAT_0038c61c + iVar7 * 2 + iVar4 * 0x10) >> 0x10) == &local_24) {
          return;
        }
      }
      do {
        iVar4 = *(int *)((int)&DAT_0038c61c + iVar7 * 2 + iVar5 * 0x10) >> 0x10;
        if ((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10 == iVar5) {
          iVar7 = 0;
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10 == iVar5) {
          iVar7 = 1;
        }
        else if (*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10 == iVar5) {
          iVar7 = 2;
        }
        else {
          iVar7 = -1;
        }
        iVar7 = (&DAT_00192134)[iVar7];
        if ((int)(uint)(ushort)(&DAT_0038c626)[iVar4 * 8] >> 6 != 0) {
          iVar5 = ((int)(uint)(ushort)(&DAT_0038c626)[iVar4 * 8] >> 6) * 3;
          psVar1 = (short *)((int)&DAT_003d1b5c + iVar5);
          *psVar1 = *psVar1 + -1;
          (&DAT_003d1b5e)[iVar5] = 0;
          uVar2 = (&DAT_0038c626)[iVar4 * 8];
          (&DAT_0038c626)[iVar4 * 8] = uVar2 & 0x3f;
          DAT_003d1b5c = DAT_003d1b5c + 1;
          (&DAT_0038c626)[iVar4 * 8] = uVar2 & 0x3f;
        }
        iVar6 = *(int *)((int)&DAT_0038c61c + iVar7 * 2 + iVar4 * 0x10) >> 0x10;
        iVar5 = iVar4;
        if (iVar6 == -1) {
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5861, "outer_locked:border edge") */
          iVar5 = extraout_ECX_01;
        }
        if ((int)(&DAT_0038c61c)[iVar6 * 4] >> 0x10 == iVar5) {
          cVar3 = '\0';
        }
        else if (*(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10 == iVar5) {
          cVar3 = '\x01';
        }
        else if (*(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10 == iVar5) {
          cVar3 = '\x02';
        }
        else {
          cVar3 = -1;
        }
        iVar5 = iVar4;
      } while (((uint)(byte)(&DAT_0038c625)[iVar6 * 0x10] & 1 << (cVar3 + 3U & 0x1f)) == 0);
    } while ((int *)(*(int *)((int)&DAT_0038c61c + iVar7 * 2 + iVar4 * 0x10) >> 0x10) != &local_24);
  }
  return;
}

/******************************************************************************
 * Function : dk_lock_edge_0bf3f0 (Ghidra: FUN_000bf3f0)
 * Prototype: void dk_lock_edge_0bf3f0(void);
 * Address  : 0xbf3f0 (Size: 173 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:5964 ("lock_edge : not found")
 * Naming   : Log prefix 'lock_edge : not found'
 * Callers  : 1 -> 0xbfaec
 * Callees  : 2 -> 0xb81c4, 0xddaf0
 * Strings  :
 *   - 0x16b712: "navigate.cpp"
 *   - 0x16b6fc: "lock_edge : not found"
 ******************************************************************************/
void FUN_000bf3f0(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  char *pcVar2;
  int aiStack_20 [2];
  int local_18;
  char local_14 [8];
  undefined4 local_c;
  
  local_c = 1;
  pcVar2 = local_14;
  while ((unaff_EBX != in_EAX || (in_ECX != in_EDX))) {
    *(char **)(pcVar2 + -4) = pcVar2 + 4;
    *(char **)(pcVar2 + -8) = pcVar2;
    pcVar2[-0xffffffff0000000c] = '$';
    pcVar2[-0xffffffff0000000b] = -0xc;
    pcVar2[-0xffffffff0000000a] = '\v';
    pcVar2[-0xffffffff00000009] = '\0';
    iVar1 = FUN_000b81c4();
    if (iVar1 == 0) {
      pcVar2[-0xffffffff0000000c] = '<';
      pcVar2[-0xffffffff0000000b] = -0xc;
      pcVar2[-0xffffffff0000000a] = '\v';
      pcVar2[-0xffffffff00000009] = '\0';
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 5964, "lock_edge : not found") */
    }
    iVar1 = *(int *)(pcVar2 + -8) * 0x10;
    (&DAT_0038c625)[iVar1] =
         *pcVar2 << (pcVar2[-4] + 3U & 0x1f) |
         ~('\x01' << (pcVar2[-4] + 3U & 0x1f)) & (&DAT_0038c625)[iVar1];
    unaff_EBX = *(int *)(&DAT_003af896 +
                        (uint)*(ushort *)
                               (&DAT_0038c618 + (&DAT_00192134)[*(int *)(pcVar2 + -4)] * 2 + iVar1)
                        * 2) >> 0x10;
    in_ECX = *(int *)(&DAT_003af898 +
                     (uint)*(ushort *)
                            (&DAT_0038c618 + (&DAT_00192134)[*(int *)(pcVar2 + -4)] * 2 + iVar1) * 4
                     ) >> 0x10;
    pcVar2 = pcVar2 + -8;
  }
  return;
}

/******************************************************************************
 * Function : dk_lock_edge_0bf588 (Ghidra: FUN_000bf588)
 * Prototype: void dk_lock_edge_0bf588(void);
 * Address  : 0xbf588 (Size: 271 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:6038 ("lock_edge : not found"); navigate.cpp:6049 ("edge_setlock_record:overflow")
 * Naming   : Log prefix 'lock_edge : not found'
 * Callers  : 1 -> 0xbf698
 * Callees  : 2 -> 0xb81c4, 0xddaf0
 * Strings  :
 *   - 0x16b735: "navigate.cpp"
 *   - 0x16b75f: "navigate.cpp"
 *   - 0x16b71f: "lock_edge : not found"
 *   - 0x16b742: "edge_setlock_record:overflow"
 ******************************************************************************/
void FUN_000bf588(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  char *pcVar2;
  int aiStack_28 [2];
  int local_20;
  char local_1c [8];
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  pcVar2 = local_1c;
  while ((unaff_EBX != *(int *)(pcVar2 + 0xc) || (in_ECX != in_EDX))) {
    *(char **)(pcVar2 + -4) = pcVar2 + 4;
    *(char **)(pcVar2 + -8) = pcVar2;
    pcVar2[-0xffffffff0000000c] = -0x3b;
    pcVar2[-0xffffffff0000000b] = -0xb;
    pcVar2[-0xffffffff0000000a] = '\v';
    pcVar2[-0xffffffff00000009] = '\0';
    iVar1 = FUN_000b81c4();
    if (iVar1 == 0) {
      pcVar2[-0xffffffff0000000c] = -0x23;
      pcVar2[-0xffffffff0000000b] = -0xb;
      pcVar2[-0xffffffff0000000a] = '\v';
      pcVar2[-0xffffffff00000009] = '\0';
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6038, "lock_edge : not found") */
    }
    (&DAT_003d1b5e)[((int)(uint)(ushort)(&DAT_0038c626)[*(int *)(pcVar2 + -8) * 8] >> 6) * 3] = 0;
    *(int *)(&DAT_003d59d0 + DAT_003d6010 * 8) = unaff_EBX;
    iVar1 = DAT_003d6010 + 1;
    *(int *)(&DAT_003d59d4 + DAT_003d6010 * 8) = in_ECX;
    DAT_003d6010 = iVar1;
    if (199 < iVar1) {
      pcVar2[-0xffffffff0000000c] = '5';
      pcVar2[-0xffffffff0000000b] = -10;
      pcVar2[-0xffffffff0000000a] = '\v';
      pcVar2[-0xffffffff00000009] = '\0';
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6049, "edge_setlock_record:overflow") */
    }
    iVar1 = *(int *)(pcVar2 + -8) * 0x10;
    (&DAT_0038c625)[iVar1] =
         *pcVar2 << (pcVar2[-4] + 3U & 0x1f) |
         ~('\x01' << (pcVar2[-4] + 3U & 0x1f)) & (&DAT_0038c625)[iVar1];
    unaff_EBX = *(int *)(&DAT_003af896 +
                        (uint)*(ushort *)
                               (&DAT_0038c618 + (&DAT_00192134)[*(int *)(pcVar2 + -4)] * 2 + iVar1)
                        * 2) >> 0x10;
    in_ECX = *(int *)(&DAT_003af898 +
                     (uint)*(ushort *)
                            (&DAT_0038c618 + (&DAT_00192134)[*(int *)(pcVar2 + -4)] * 2 + iVar1) * 4
                     ) >> 0x10;
    pcVar2 = pcVar2 + -8;
  }
  return;
}

/******************************************************************************
 * Function : dk_delete_point_0bf698 (Ghidra: FUN_000bf698)
 * Prototype: void dk_delete_point_0bf698(void);
 * Address  : 0xbf698 (Size: 477 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:6076 ("border_unlock:point not found"); navigate.cpp:2854 ("delete_point : make_3or4point failure"); navigate.cpp:2867 ("delete_point : 4 fails"); navigate.cpp:2871 ("delete_point : 3 fails")
 * Naming   : Log prefix 'delete_point : make_3or4point failure'
 * Callers  : 1 -> 0xbfaec
 * Callees  : 6 -> 0xb80c8, 0xb9940, 0xb9c2c, 0xba5cc, 0xbf588, 0xddaf0
 * Strings  :
 *   - 0x16b45c: "navigate.cpp"
 *   - 0x16b480: "navigate.cpp"
 *   - 0x16b4a4: "navigate.cpp"
 *   - 0x16b78a: "navigate.cpp"
 *   - 0x16b76c: "border_unlock:point not found"
 *   - 0x16b436: "delete_point : make_3or4point failure"
 *   - 0x16b469: "delete_point : 4 fails"
 *   - 0x16b48d: "delete_point : 3 fails"
 ******************************************************************************/
void FUN_000bf698(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  
  DAT_003d6010 = 0;
  FUN_000bf588();
  FUN_000bf588();
  FUN_000bf588();
  FUN_000bf588();
  iVar5 = DAT_003d6010 * 8;
  do {
    iVar5 = iVar5 + -8;
    if (iVar5 < 0) {
      return;
    }
    iVar2 = FUN_000b80c8();
    if (iVar2 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6076, "border_unlock:point not found") */
    }
    iVar3 = local_24;
    iVar2 = local_20;
    do {
      iVar4 = *(int *)((int)&DAT_0038c61c + iVar2 * 2 + iVar3 * 0x10) >> 0x10;
      if (iVar4 == -1) {
        bVar1 = false;
        goto LAB_000bf7cf;
      }
      if ((int)(&DAT_0038c621)[iVar4 * 4] >> 0x18 != (int)(&DAT_0038c621)[local_24 * 4] >> 0x18) {
        bVar1 = false;
        goto LAB_000bf7cf;
      }
      if ((int)(&DAT_0038c61c)[iVar4 * 4] >> 0x10 == iVar3) {
        iVar2 = 0;
      }
      else if (*(int *)((int)&DAT_0038c61c + iVar4 * 0x10 + 2) >> 0x10 == iVar3) {
        iVar2 = 1;
      }
      else if (*(int *)(&DAT_0038c620 + iVar4 * 0x10) >> 0x10 == iVar3) {
        iVar2 = 2;
      }
      else {
        iVar2 = -1;
      }
      iVar2 = (&DAT_00192134)[iVar2];
      iVar3 = iVar4;
    } while (iVar4 != local_24);
    bVar1 = true;
LAB_000bf7cf:
    if (bVar1) {
      iVar2 = FUN_000b9940();
      if (iVar2 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2854, "delete_point : make_3or4point failure") */
        iVar2 = extraout_ECX;
      }
      if (iVar2 == 4) {
        iVar2 = FUN_000b9c2c();
        if (iVar2 == 0) {
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2867, "delete_point : 4 fails") */
        }
      }
      else {
        iVar2 = FUN_000ba5cc();
        if (iVar2 == 0) {
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 2871, "delete_point : 3 fails") */
        }
      }
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0bf8bc (Ghidra: FUN_000bf8bc)
 * Prototype: bool sub_0bf8bc(void);
 * Address  : 0xbf8bc (Size: 174 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbf96c
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000bf8bc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int iVar5;
  int *in_ECX;
  int *in_EDX;
  int iVar6;
  int *unaff_EBX;
  bool bVar7;
  int local_10;
  
  iVar4 = DAT_003d6420;
  local_10 = 0;
  iVar6 = 0;
  iVar2 = DAT_003d6420;
  iVar5 = DAT_003d6414;
  do {
    do {
      iVar3 = iVar5;
      if (DAT_003d641c <= iVar3) {
        bVar7 = iVar2 != DAT_003d6420;
        if (bVar7) {
          *in_EAX = iVar6;
          *in_EDX = iVar2;
          *unaff_EBX = local_10;
          *in_ECX = iVar4 - iVar2;
        }
        return bVar7;
      }
      iVar1 = *(int *)(&DAT_003d6014 + iVar3 * 4);
      iVar5 = iVar3 + 1;
    } while (iVar2 <= iVar1);
    if (iVar5 < DAT_003d641c) {
      iVar6 = iVar5 * 4;
      do {
        if (iVar1 != *(int *)(&DAT_003d6014 + iVar6)) break;
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar6 < DAT_003d641c * 4);
    }
    local_10 = iVar5 - iVar3;
    iVar6 = iVar3;
    iVar2 = iVar1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0bf96c (Ghidra: FUN_000bf96c)
 * Prototype: undefined4 sub_0bf96c(byte *param_1);
 * Address  : 0xbf96c (Size: 293 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xbfaec
 * Callees  : 1 -> 0xbf8bc
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000bf9d8) */
/* WARNING: Removing unreachable block (ram,0x000bf9e0) */
/* WARNING: Removing unreachable block (ram,0x000bf9e4) */

undefined4 FUN_000bf96c(byte *param_1)

{
  byte bVar1;
  undefined4 *in_EAX;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  int *in_EDX;
  undefined4 *unaff_EBX;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  int local_34;
  int local_30;
  
  bVar12 = 0;
  iVar2 = FUN_000bf8bc();
  uVar5 = 0;
  if (iVar2 != 0) {
    pbVar3 = (byte *)(local_34 * 0x100 + DAT_003d6424);
    bVar1 = *pbVar3;
    iVar2 = 1;
    pbVar7 = pbVar3;
    if (1 < local_30) {
      do {
        pbVar7 = pbVar7 + 0x100;
        bVar10 = false;
        iVar4 = 0;
        bVar11 = true;
        iVar6 = 1;
        pbVar8 = pbVar7;
        pbVar9 = pbVar3;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar10 = *pbVar8 < *pbVar9;
          bVar11 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + (uint)bVar12 * -2 + 1;
          pbVar9 = pbVar9 + (uint)bVar12 * -2 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
      } while ((iVar4 == 0) && (iVar2 = iVar2 + 1, iVar2 < local_30));
    }
    iVar6 = 0;
    do {
      iVar4 = iVar6 + 4;
      *(int *)(&DAT_003d6014 + iVar6) = local_34 + iVar2;
      iVar6 = iVar4;
    } while (iVar4 < 4);
    *param_1 = bVar1;
    *in_EAX = 0;
    *in_EDX = local_34;
    *unaff_EBX = 1;
    *in_ECX = local_34 + iVar2;
    uVar5 = 1;
  }
  return uVar5;
}

/******************************************************************************
 * Function : dk_nav_log_0bfaec (Ghidra: FUN_000bfaec)
 * Prototype: void dk_nav_log_0bfaec(int param_1);
 * Address  : 0xbfaec (Size: 1808 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : String 'nav.log'
 * Callers  : 2 -> 0xc01fc, 0xd167c
 * Callees  : 14 -> 0xb58b4, 0xb73dc, 0xbbc9c, 0xbca9c, 0xbed7c, 0xbee04, 0xbef98, 0xbf3f0, 0xbf698, 0xbf96c ...
 * Strings  :
 *   - 0x16b797: "\nF=%d Area %03d,%03d %03d,%03d T=%04d"
 *   - 0x16ae97: "nav.log"
 *   - 0x16b7be: " c=%d %s"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bfaec(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 in_EAX;
  byte *pbVar7;
  int iVar8;
  int in_ECX;
  int in_EDX;
  uint uVar10;
  int iVar11;
  int unaff_EBX;
  undefined4 *puVar12;
  int iVar13;
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
  int iVar9;
  
  local_30 = 0;
  DAT_003d6428 = in_EAX;
  local_24 = in_ECX;
  if (DAT_0038c5c4 != 0) {
    auStack_e8[0] = DAT_0038c5d4;
    local_ec = param_1;
    FUN_000e7714(local_94,s_F__d_Area__03d__03d__03d__03d_T__0016b797,DAT_002e8bee);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      auStack_e8[0] = 0xbfb96;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      auStack_e8[0] = 0xbfbca;
      FUN_000f694b();
      auStack_e8[0] = 0xbfbd4;
      FUN_000f69c6();
    }
    auStack_e8[0] = 0xbfbe1;
    FUN_000f694b();
    if (DAT_0038c5c4 != 0) {
      uVar3 = rdtsc();
      DAT_0038c5c8 = (int)uVar3;
    }
  }
  local_1c = in_EDX;
  if (local_24 < in_EDX) {
    local_1c = local_24;
    local_24 = in_EDX;
  }
  iVar13 = param_1;
  if (param_1 < unaff_EBX) {
    iVar13 = unaff_EBX;
    unaff_EBX = param_1;
  }
  param_1 = iVar13;
  if ((((local_1c != -1) && (unaff_EBX != -1)) && (local_1c != local_24)) && (unaff_EBX != param_1))
  {
    if (((local_1c == 0) && (unaff_EBX == 0)) && ((local_24 == 0x100 && (param_1 == 0x100)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((local_1c < 1) || (unaff_EBX < 1)) || ((0xfe < local_24 || (0xfe < param_1)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      bVar5 = false;
      unaff_EBX = 0;
      local_24 = 0x100;
    }
    if (DAT_0038c5cc == 0) {
      DAT_0038c5cc = 1;
      auStack_e8[0] = 0xbfd56;
      FUN_000b58b4();
    }
    if (bVar5) {
      auStack_e8[0] = 0;
      local_ec = 0xbfdcb;
      FUN_000bee04();
      local_ec = 0xffffffff;
      uStack_f0 = 0xbfdf5;
      FUN_000bee04();
      uStack_f4 = 0xbfe15;
      FUN_000bed7c();
      FUN_000bed7c();
      FUN_000bf3f0();
      FUN_000bf3f0();
      FUN_000bf3f0();
      FUN_000bf3f0();
      local_38 = 0;
      puVar12 = &uStack_f4;
      if ((char)unaff_EBX == '\0') {
        FUN_000bef98();
        puVar12 = &uStack_f4;
      }
    }
    else {
      local_28[0] = '\x01';
      local_28[1] = '\0';
      local_28[2] = '\0';
      local_28[3] = '\0';
      auStack_e8[0] = 0xbfd7f;
      FUN_000b58b4();
      auStack_e8[0] = 0;
      local_ec = 0xbfda2;
      FUN_000bca9c();
      puVar12 = auStack_e8;
    }
    uVar10 = 0xffffffff;
    iVar13 = *(int *)((int)puVar12 + 0xc4) * 0x100 + *(int *)((int)puVar12 + 0xb0);
    if (*(char *)((int)puVar12 + 0xd4) == '\0') {
      if (((*(char *)((int)puVar12 + 0xcc) != '\0') &&
          (iVar9 = *(int *)((int)puVar12 + 200), *(int *)((int)puVar12 + 0xc0) - iVar9 < 4)) &&
         (*(int *)((int)puVar12 + 0xe8) - *(int *)((int)puVar12 + 0xc4) < 4)) {
        iVar8 = *(int *)((int)puVar12 + 0xc4);
        bVar1 = *(byte *)(*(int *)((int)puVar12 + 200) + iVar13);
        *(int *)((int)puVar12 + 0xb8) = *(int *)((int)puVar12 + 0xe8);
        if (iVar8 < *(int *)((int)puVar12 + 0xe8)) {
          do {
            if (iVar9 < *(int *)((int)puVar12 + 0xc0)) {
              pbVar7 = (byte *)(iVar9 + iVar13);
              iVar11 = iVar9;
              do {
                if (bVar1 != *pbVar7) {
                  uVar10 = 0xffffffff;
                  goto LAB_000bff8a;
                }
                iVar11 = iVar11 + 1;
                pbVar7 = pbVar7 + 1;
              } while (iVar11 < *(int *)((int)puVar12 + 0xc0));
            }
            iVar8 = iVar8 + 1;
            iVar13 = iVar13 + 0x100;
          } while (iVar8 < *(int *)((int)puVar12 + 0xb8));
        }
        uVar10 = (uint)bVar1;
      }
    }
    else {
      uVar10 = (uint)*(byte *)(*(int *)((int)puVar12 + 200) + iVar13);
    }
LAB_000bff8a:
    if (uVar10 == 0xffffffff) {
      DAT_003d6424 = *(undefined4 *)((int)puVar12 + 0xb0);
      DAT_003d6414 = *(undefined4 *)((int)puVar12 + 200);
      DAT_003d641c = *(undefined4 *)((int)puVar12 + 0xc0);
      uVar2 = *(undefined4 *)((int)puVar12 + 0xc4);
      DAT_003d6420 = *(undefined4 *)((int)puVar12 + 0xe8);
      iVar13 = *(int *)((int)puVar12 + 0xc0);
      puVar6 = (undefined1 *)puVar12;
      _DAT_003d6418 = uVar2;
      if (*(int *)((int)puVar12 + 200) < iVar13) {
        iVar9 = *(int *)((int)puVar12 + 200) << 2;
        do {
          iVar8 = iVar9 + 4;
          *(undefined4 *)(&DAT_003d6014 + iVar9) = uVar2;
          iVar9 = iVar8;
        } while (iVar8 < iVar13 * 4);
      }
      while( true ) {
        puVar12 = (undefined4 *)puVar6;
        *(undefined1 **)((int)puVar12 + -4) = (undefined1 *)((int)puVar12 + 0xd0);
        *(undefined4 *)((int)puVar12 + -8) = 0xc0047;
        iVar13 = FUN_000bf96c();
        if (iVar13 == 0) break;
        if ((uint)*(byte *)((int)puVar12 + 0xcc) == *(uint *)((int)puVar12 + 0xb0)) {
          puVar6 = (undefined1 *)((int)puVar12 + -4);
          if (*(int *)((int)puVar12 + 0xb8) == 0) {
            *(uint *)((int)puVar12 + -8) = *(uint *)((int)puVar12 + 0xb0);
            *(undefined4 *)((int)puVar12 + -0xc) = 0xc008e;
            FUN_000bca9c();
            *(undefined4 *)((int)puVar12 + -0xc) = 0xc00af;
            FUN_000bbc9c();
            puVar6 = (undefined1 *)((int)puVar12 + -8);
          }
        }
        else {
          *(uint *)((int)puVar12 + -8) = (uint)*(byte *)((int)puVar12 + 0xcc);
          *(undefined4 *)((int)puVar12 + -0xc) = 0xc00d6;
          FUN_000bca9c();
          *(undefined4 *)((int)puVar12 + -0xc) = 0xc00f7;
          FUN_000bbc9c();
          puVar6 = (undefined1 *)((int)puVar12 + -8);
        }
      }
    }
    else {
      *(uint *)((int)puVar12 + -4) = uVar10 & 0xff;
      *(undefined4 *)((int)puVar12 + -8) = 0xbffb5;
      FUN_000bca9c();
    }
    *(undefined4 *)((int)puVar12 + -8) = 0xc011d;
    FUN_000bbc9c();
    if (*(char *)((int)puVar12 + 200) != '\0') {
      *(undefined4 *)((int)puVar12 + -8) = 0xc0148;
      FUN_000bf698();
    }
    *(undefined4 *)((int)puVar12 + -8) = 0xc014d;
    FUN_000b73dc();
    if (DAT_0038c5c4 != 0) {
      uVar3 = rdtsc();
      *(undefined **)((int)puVar12 + -8) = &DAT_0016b7bd;
      *(int *)((int)puVar12 + -0xc) = (int)uVar3 - DAT_0038c5c8;
      *(char **)((int)puVar12 + -0x10) = s_c__d__s_0016b7be;
      *(undefined1 **)((int)puVar12 + -0x14) = (undefined1 *)((int)puVar12 + -4);
      *(undefined4 *)((int)puVar12 + -0x18) = 0xc017d;
      FUN_000e7714();
      if (DAT_00388ebc != 1) {
        DAT_00388ebc = 1;
        *(undefined4 *)((int)puVar12 + -8) = 0xc01a5;
        DAT_00388ec0 = FUN_000e9fd7();
        DAT_00388ec4 = DAT_002e8bee;
      }
      if (DAT_00388ec4 != DAT_002e8bee) {
        DAT_00388ec4 = DAT_002e8bee;
        *(undefined4 *)((int)puVar12 + -8) = 0xc01d9;
        FUN_000f694b();
        *(undefined4 *)((int)puVar12 + -8) = 0xc01e3;
        FUN_000f69c6();
      }
      *(undefined4 *)((int)puVar12 + -8) = 0xc01f0;
      FUN_000f694b();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0c01fc (Ghidra: FUN_000c01fc)
 * Prototype: void sub_0c01fc(void);
 * Address  : 0xc01fc (Size: 26 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xd17a8
 * Callees  : 1 -> 0xbfaec
 ******************************************************************************/
void FUN_000c01fc(void)

{
  FUN_000bfaec(0x100);
  return;
}

/******************************************************************************
 * Function : sub_0c023c (Ghidra: FUN_000c023c)
 * Prototype: undefined4 sub_0c023c(void);
 * Address  : 0xc023c (Size: 151 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xc0740, 0xc0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000c023c(void)

{
  longlong lVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  char cVar6;
  bool bVar7;
  bool bVar8;
  
  lVar1 = (longlong)(unaff_EBX[2] - *unaff_EBX) * (longlong)(in_EDX - unaff_EBX[1]);
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  lVar1 = (longlong)(unaff_EBX[3] - unaff_EBX[1]) * (longlong)(in_EAX - *unaff_EBX);
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  cVar6 = uVar2 != uVar3;
  uVar2 = (uint)(uVar2 < uVar3);
  uVar3 = iVar4 - iVar5;
  bVar8 = SBORROW4(iVar4,iVar5) != SBORROW4(uVar3,uVar2);
  bVar7 = (int)(uVar3 - uVar2) < 0;
  if (uVar3 != uVar2) {
    cVar6 = (bVar8 == bVar7) - (bVar8 != bVar7);
  }
  if (cVar6 < '\0') {
    return 0xffffffff;
  }
  lVar1 = (longlong)(unaff_EBX[4] - *unaff_EBX) * (longlong)(in_EDX - unaff_EBX[1]);
  iVar4 = (int)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)lVar1;
  lVar1 = (longlong)(unaff_EBX[5] - unaff_EBX[1]) * (longlong)(in_EAX - *unaff_EBX);
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  cVar6 = uVar2 != uVar3;
  uVar2 = (uint)(uVar2 < uVar3);
  uVar3 = iVar4 - iVar5;
  bVar8 = SBORROW4(iVar4,iVar5) != SBORROW4(uVar3,uVar2);
  bVar7 = (int)(uVar3 - uVar2) < 0;
  if (uVar3 != uVar2) {
    cVar6 = (bVar8 == bVar7) - (bVar8 != bVar7);
  }
  if ('\0' < cVar6) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0c02d4 (Ghidra: FUN_000c02d4)
 * Prototype: void sub_0c02d4(void);
 * Address  : 0xc02d4 (Size: 673 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc0578
 * Callees  : 1 -> 0xb5550
 ******************************************************************************/
void FUN_000c02d4(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  uint *unaff_EBX;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  local_18 = (&DAT_00192138)[in_EDX];
  iVar5 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10) >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar5 * 4] >> 0x10 == in_EAX) {
    iVar1 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar5 * 0x10 + 2) >> 0x10 == in_EAX) {
    iVar1 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar5 * 0x10) >> 0x10 == in_EAX) {
    iVar1 = 2;
  }
  else {
    iVar1 = -1;
  }
  local_14 = (&DAT_00192134)[iVar1];
  do {
    iVar6 = *(int *)((int)&DAT_0038c61c + local_14 * 2 + iVar5 * 0x10) >> 0x10;
    iVar2 = (*(code *)PTR_FUN_000b5550_0019212c)();
    iVar1 = extraout_ECX;
    if (iVar2 == 0) goto LAB_000c0447;
    if ((int)(&DAT_0038c61c)[iVar6 * 4] >> 0x10 == iVar5) {
      iVar5 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar6 * 0x10 + 2) >> 0x10 == iVar5) {
      iVar5 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar6 * 0x10) >> 0x10 == iVar5) {
      iVar5 = 2;
    }
    else {
      iVar5 = -1;
    }
    local_14 = (&DAT_00192134)[iVar5];
    iVar5 = iVar6;
  } while (iVar6 != in_EAX);
  iVar5 = *(int *)((int)&DAT_0038c61c + in_EDX * 2 + in_EAX * 0x10) >> 0x10;
  if ((int)(&DAT_0038c61c)[iVar5 * 4] >> 0x10 == in_EAX) {
    iVar2 = 0;
  }
  else if (*(int *)((int)&DAT_0038c61c + iVar5 * 0x10 + 2) >> 0x10 == in_EAX) {
    iVar2 = 1;
  }
  else if (*(int *)(&DAT_0038c620 + iVar5 * 0x10) >> 0x10 == in_EAX) {
    iVar2 = 2;
  }
  else {
    iVar2 = -1;
  }
  local_14 = (&DAT_00192134)[iVar2];
LAB_000c0447:
  do {
    iVar1 = *(int *)((int)&DAT_0038c61c + local_18 * 2 + iVar1 * 0x10) >> 0x10;
    iVar6 = (*(code *)PTR_FUN_000b5550_0019212c)();
    iVar2 = extraout_ECX_00;
    if (iVar6 == 0) goto LAB_000c04e1;
    if ((int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10 == extraout_ECX_00) {
      iVar2 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar1 * 0x10 + 2) >> 0x10 == extraout_ECX_00) {
      iVar2 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar1 * 0x10) >> 0x10 == extraout_ECX_00) {
      iVar2 = 2;
    }
    else {
      iVar2 = -1;
    }
    local_18 = (&DAT_00192138)[iVar2];
  } while (iVar1 != in_EAX);
  local_18 = (&DAT_00192138)[in_EDX];
  iVar2 = iVar1;
LAB_000c04e1:
  if ((*(int *)(&DAT_003af898 +
               (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[local_14] * 2 + iVar5 * 0x10) * 4)
      >> 0x10) -
      (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar2 * 0x10 + local_18 * 2) * 4)
      >> 0x10) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)(*(int *)(&DAT_003af898 +
                           (uint)*(ushort *)
                                  (&DAT_0038c618 + (&DAT_00192134)[local_14] * 2 + iVar5 * 0x10) * 4
                           ) >> 0x10 !=
                  *(int *)(&DAT_003af898 +
                          (uint)*(ushort *)(&DAT_0038c618 + iVar2 * 0x10 + local_18 * 2) * 4) >>
                  0x10);
  }
  if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar2 * 0x10 + local_18 * 2) * 2)
      >> 0x10) -
      (*(int *)(&DAT_003af896 +
               (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[local_14] * 2 + iVar5 * 0x10) * 2)
      >> 0x10) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)(*(int *)(&DAT_003af896 +
                           (uint)*(ushort *)(&DAT_0038c618 + iVar2 * 0x10 + local_18 * 2) * 2) >>
                   0x10 != *(int *)(&DAT_003af896 +
                                   (uint)*(ushort *)
                                          (&DAT_0038c618 +
                                          (&DAT_00192134)[local_14] * 2 + iVar5 * 0x10) * 2) >> 0x10
                  );
  }
  *unaff_EBX = uVar3;
  *in_ECX = uVar4;
  return;
}

/******************************************************************************
 * Function : dk_path_out_a_bit_0c0578 (Ghidra: FUN_000c0578)
 * Prototype: void dk_path_out_a_bit_0c0578(void);
 * Address  : 0xc0578 (Size: 456 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:6667 ("path_out_a_bit: waypoint mismatch")
 * Naming   : Log prefix 'path_out_a_bit: waypoint mismatch'
 * Callers  : 1 -> 0xc241c
 * Callees  : 2 -> 0xc02d4, 0xddaf0
 * Strings  :
 *   - 0x16b7e9: "navigate.cpp"
 *   - 0x16b7c7: "path_out_a_bit: waypoint mismatch"
 ******************************************************************************/
void FUN_000c0578(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_34;
  int local_30;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0;
  iVar8 = in_EAX;
  while (local_1c < *(int *)(in_EAX + 0x10) + -1) {
    piVar3 = (int *)(*(int *)((int)&DAT_003d6c50 + local_18) * 4 + in_EDX);
    iVar1 = *piVar3;
    iVar2 = piVar3[1];
    if ((int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10 == iVar2) {
      iVar5 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar1 * 0x10 + 2) >> 0x10 == iVar2) {
      iVar5 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar1 * 0x10) >> 0x10 == iVar2) {
      iVar5 = 2;
    }
    else {
      iVar5 = -1;
    }
    if ((int)(&DAT_0038c61c)[iVar2 * 4] >> 0x10 == iVar1) {
      iVar4 = 0;
    }
    else if (*(int *)((int)&DAT_0038c61c + iVar2 * 0x10 + 2) >> 0x10 == iVar1) {
      iVar4 = 1;
    }
    else if (*(int *)(&DAT_0038c620 + iVar2 * 0x10) >> 0x10 == iVar1) {
      iVar4 = 2;
    }
    else {
      iVar4 = -1;
    }
    iVar6 = *(int *)(iVar8 + 0x14) >> 8;
    iVar7 = *(int *)(iVar8 + 0x18) >> 8;
    if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar1 * 0x10 + iVar5 * 2) * 2)
         >> 0x10 == iVar6) &&
       (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar1 * 0x10 + iVar5 * 2) * 4) >>
        0x10 == iVar7)) {
      FUN_000c02d4();
    }
    else if ((*(int *)(&DAT_003af896 +
                      (uint)*(ushort *)(&DAT_0038c618 + iVar4 * 2 + iVar2 * 0x10) * 2) >> 0x10 ==
              iVar6) &&
            (*(int *)(&DAT_003af898 +
                     (uint)*(ushort *)(&DAT_0038c618 + iVar4 * 2 + iVar2 * 0x10) * 4) >> 0x10 ==
             iVar7)) {
      FUN_000c02d4();
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6667, "path_out_a_bit: waypoint mismatch") */
    }
    local_18 = local_18 + 4;
    *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + local_34;
    local_1c = local_1c + 1;
    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + local_30;
    iVar8 = iVar8 + 8;
  }
  return;
}

/******************************************************************************
 * Function : dk_rtp_exceeded_max_path_0c0740 (Ghidra: FUN_000c0740)
 * Prototype: int dk_rtp_exceeded_max_path_0c0740(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
 * Address  : 0xc0740 (Size: 1116 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:6771; navigate.cpp:6793; navigate.cpp:6815 ("rtp:Exceeded max path length - gate_route_to_coords")
 * Naming   : String 'rtp:Exceeded max path length (i:%d,L:%d) (%d,%d)->(%d,%d)'
 * Callers  : 5 -> 0xbdd9c, 0xbe760, 0xbe84c, 0xc0b9c, 0xc241c
 * Callees  : 5 -> 0xbd1ac, 0xc023c, 0xddaf0, 0xe7714, 0xe8cc8
 * Strings  :
 *   - 0x16b830: "navigate.cpp"
 *   - 0x16b877: "navigate.cpp"
 *   - 0x16b8b8: "navigate.cpp"
 *   - 0x16b7f6: "rtp:Exceeded max path length (i:%d,L:%d) (%d,%d)->(%d,%d)"
 *   - 0x16b83d: "rtp:Exceeded max path length (i:%d,R:%d) (%d,%d)->(%d,%d)"
 *   - 0x16b884: "rtp:Exceeded max path length - gate_route_to_coords"
 ******************************************************************************/
int FUN_000c0740(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int *piVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 local_38 [4];
  undefined1 local_34 [32];
  
  *param_3 = in_EAX;
  param_3[2] = unaff_EBX;
  param_3[1] = in_EDX;
  iVar8 = 0;
  param_3[3] = in_ECX;
  *param_4 = 0;
  if (param_2 == 0) {
    puStack_9c = (undefined1 *)0xc07bb;
    uVar9 = FUN_000e8cc8();
    piVar3 = (int *)((ulonglong)uVar9 >> 0x20);
    *piVar3 = *piVar3 + (int)uVar9;
    param_3[5] = unaff_EBX;
    param_3[6] = extraout_ECX;
    DAT_003d6c50 = param_2;
    param_3[4] = 1;
    return 1;
  }
  puStack_9c = local_34;
  puStack_a0 = local_38;
  iVar7 = 1;
  ppuVar5 = &puStack_a0;
  iVar6 = 0;
  FUN_000bd1ac();
  DAT_003d6c48 = 0;
  DAT_003d6c4c = 0;
  do {
    if (iVar7 < *(int *)((int)ppuVar5 + 0xa0)) {
      *(undefined1 **)((int)ppuVar5 + -4) = (undefined1 *)((int)ppuVar5 + 0x74);
      *(undefined1 **)((int)ppuVar5 + -8) = (undefined1 *)((int)ppuVar5 + 0x70);
      *(undefined4 *)((int)ppuVar5 + -0xc) = 0xc0867;
      FUN_000bd1ac();
      *(undefined4 *)((int)ppuVar5 + -0xc) = 0xc0884;
      DAT_003d6c40 = iVar7;
      DAT_003d6c44 = iVar7;
      FUN_000c023c();
      *(undefined4 *)((int)ppuVar5 + -0xc) = 0xc0897;
      iVar1 = FUN_000c023c();
      iVar2 = extraout_ECX_00;
      puVar4 = (undefined1 *)((int)ppuVar5 + -8);
    }
    else {
      *(undefined4 *)((int)ppuVar5 + -4) = 0xc08b2;
      iVar2 = FUN_000c023c();
      iVar1 = iVar2;
      puVar4 = (undefined1 *)ppuVar5;
      if (iVar2 == 0) {
        if (iVar8 == 0x100) {
          *(undefined4 *)((int)ppuVar5 + -4) = 0xc0b28;
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6771, g_log_buf) */
        }
        *(undefined4 *)((int)ppuVar5 + -4) = 0xc0b52;
        uVar9 = FUN_000e8cc8();
        piVar3 = (int *)((ulonglong)uVar9 >> 0x20);
        iVar7 = *(int *)((int)ppuVar5 + 0xa4);
        iVar6 = iVar8 * 8 + iVar7;
        *piVar3 = *piVar3 + (int)uVar9;
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)((int)ppuVar5 + 0x84);
        iVar8 = iVar8 + 1;
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)((int)ppuVar5 + 0x80);
        (&DAT_003d6c4c)[iVar8] = *(undefined4 *)((int)ppuVar5 + 0xa0);
        *(int *)(iVar7 + 0x10) = iVar8;
        return iVar8;
      }
    }
    if (iVar2 == 0) {
      *(undefined4 *)(puVar4 + 0x58) = *(undefined4 *)(puVar4 + 0x68);
      *(undefined4 *)(puVar4 + 0x5c) = *(undefined4 *)(puVar4 + 0x6c);
      DAT_003d6c48 = DAT_003d6c40;
      iVar6 = iVar7;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(puVar4 + 0x60) = *(undefined4 *)(puVar4 + 0x70);
      *(undefined4 *)(puVar4 + 100) = *(undefined4 *)(puVar4 + 0x74);
      *(int *)(puVar4 + 0x88) = iVar7;
      DAT_003d6c4c = DAT_003d6c44;
    }
    if (iVar1 == -1) {
      if (iVar8 == 0x100) {
        *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + 0x80);
        *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(puVar4 + 0x84);
        *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(puVar4 + 0x7c);
        *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(puVar4 + 0x78);
        *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(puVar4 + 0xa0);
        *(int *)(puVar4 + -0x18) = iVar7;
        *(char **)(puVar4 + -0x1c) = s_rtp_Exceeded_max_path_length__i__0016b7f6;
        *(undefined1 **)(puVar4 + -0x20) = puVar4;
        *(undefined4 *)(puVar4 + -0x24) = 0xc0951;
        FUN_000e7714();
        *(undefined4 *)(puVar4 + -4) = 0xc0960;
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6793, g_log_buf) */
      }
      *(undefined4 *)(puVar4 + -4) = 0xc0984;
      uVar9 = FUN_000e8cc8();
      piVar3 = (int *)((ulonglong)uVar9 >> 0x20);
      iVar7 = *(int *)(puVar4 + 0xa4);
      *piVar3 = *piVar3 + (int)uVar9;
      *(undefined4 *)(iVar8 * 8 + iVar7 + 0x14) = *(undefined4 *)(puVar4 + 0x58);
      *(undefined4 *)(iVar8 * 8 + iVar7 + 0x18) = *(undefined4 *)(puVar4 + 0x5c);
      (&DAT_003d6c50)[iVar8] = DAT_003d6c48;
      *(undefined4 *)(puVar4 + 0x50) = *(undefined4 *)(puVar4 + 0x58);
      *(undefined4 *)(puVar4 + 0x54) = *(undefined4 *)(puVar4 + 0x5c);
      *(undefined1 **)(puVar4 + -4) = puVar4 + 100;
      ppuVar5 = (undefined1 **)(puVar4 + -8);
      *(undefined1 **)(puVar4 + -8) = puVar4 + 0x60;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(puVar4 + -0xc) = 0xc09f3;
      FUN_000bd1ac();
      iVar7 = iVar6 + 1;
      DAT_003d6c48 = iVar6;
      DAT_003d6c4c = iVar6;
    }
    else {
      ppuVar5 = (undefined1 **)puVar4;
      if (iVar2 == 1) {
        if (iVar8 == 0x100) {
          *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + 0x80);
          *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(puVar4 + 0x84);
          *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(puVar4 + 0x7c);
          *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(puVar4 + 0x78);
          *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(puVar4 + 0xa0);
          *(int *)(puVar4 + -0x18) = iVar7;
          *(char **)(puVar4 + -0x1c) = s_rtp_Exceeded_max_path_length__i__0016b83d;
          *(undefined1 **)(puVar4 + -0x20) = puVar4;
          *(undefined4 *)(puVar4 + -0x24) = 0xc0a53;
          FUN_000e7714();
          *(undefined4 *)(puVar4 + -4) = 0xc0a62;
          FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6815, "rtp:Exceeded max path length - gate_route_to_coords") */
        }
        *(undefined4 *)(puVar4 + -4) = 0xc0a86;
        uVar9 = FUN_000e8cc8();
        piVar3 = (int *)((ulonglong)uVar9 >> 0x20);
        iVar7 = *(int *)(puVar4 + 0xa4);
        *piVar3 = *piVar3 + (int)uVar9;
        *(undefined4 *)(iVar8 * 8 + iVar7 + 0x14) = *(undefined4 *)(puVar4 + 0x60);
        *(undefined4 *)(iVar8 * 8 + iVar7 + 0x18) = *(undefined4 *)(puVar4 + 100);
        (&DAT_003d6c50)[iVar8] = DAT_003d6c4c;
        *(undefined4 *)(puVar4 + 0x50) = *(undefined4 *)(puVar4 + 0x60);
        *(undefined4 *)(puVar4 + 0x54) = *(undefined4 *)(puVar4 + 100);
        iVar7 = *(int *)(puVar4 + 0x88);
        *(undefined1 **)(puVar4 + -4) = puVar4 + 100;
        ppuVar5 = (undefined1 **)(puVar4 + -8);
        *(undefined1 **)(puVar4 + -8) = puVar4 + 0x60;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(puVar4 + -0xc) = 0xc0afa;
        FUN_000bd1ac();
        DAT_003d6c48 = iVar7;
        DAT_003d6c4c = iVar7;
      }
      iVar7 = iVar7 + 1;
    }
  } while( true );
}

/******************************************************************************
 * Function : dk_grtc_exceeded_max_path_0c0b9c (Ghidra: FUN_000c0b9c)
 * Prototype: int dk_grtc_exceeded_max_path_0c0b9c(undefined4 param_1,undefined4 param_2);
 * Address  : 0xc0b9c (Size: 2469 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:6908; navigate.cpp:6941
 * Naming   : String 'grtc:Exceeded max path length (i:%d,rl:%d)'
 * Callers  : 1 -> 0xc1ecc
 * Callees  : 9 -> 0xb55a0, 0xbd1ac, 0xc023c, 0xc0740, 0xc1544, 0xc1914, 0xddaf0, 0xe7714, 0xe8cc8
 * Strings  :
 *   - 0x16b8f0: "navigate.cpp"
 *   - 0x16b928: "navigate.cpp"
 *   - 0x16b8c5: "grtc:Exceeded max path length (i:%d,rl:%d)"
 *   - 0x16b8fd: "grtc:Exceeded max path length (i:%d,rl:%d)"
 ******************************************************************************/
int FUN_000c0b9c(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *piVar7;
  undefined4 in_EDX;
  uint uVar8;
  uint uVar9;
  undefined1 **ppuVar10;
  undefined4 *unaff_EBP;
  int *piVar11;
  undefined4 *unaff_ESI;
  undefined4 *puVar12;
  int unaff_EDI;
  undefined4 *puVar13;
  byte bVar14;
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
  
  bVar14 = 0;
  puStack_114 = local_84;
  puStack_118 = &DAT_003d642c;
  uStack_11c = param_2;
  uStack_120 = param_1;
  puStack_124 = (undefined1 *)0xc0be4;
  DAT_003d643c = FUN_000c0740();
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_EDX;
  unaff_ESI[2] = local_5c;
  unaff_ESI[3] = local_58;
  if (unaff_EDI == 0) {
    unaff_ESI[0x704] = 1;
    unaff_ESI[10] = 0;
    unaff_ESI[6] = local_5c;
    unaff_ESI[4] = local_5c;
    unaff_ESI[7] = local_58;
    iVar6 = unaff_ESI[0x704];
    unaff_ESI[5] = local_58;
  }
  else {
    puStack_124 = local_bc;
    local_128 = local_c0;
    ppuVar10 = &local_128;
    FUN_000bd1ac();
    puVar12 = local_d0;
    puVar13 = local_b8;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
      puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar14 * -2 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + (uint)bVar14 * -2 + 1);
    }
    local_8c = 0;
    local_88 = *unaff_EBP;
    piVar11 = unaff_EBP + 4;
    local_84[0] = unaff_EBP[1];
    local_90 = 1;
    if (local_10 != 0) {
      local_94 = local_14 + 4;
      ppuVar10 = &local_128;
      do {
        if (*(uint *)((int)ppuVar10 + 0x98) < *(uint *)((int)ppuVar10 + 0x118)) {
          *(undefined1 **)((int)ppuVar10 + -4) = (undefined1 *)((int)ppuVar10 + 0x88);
          *(undefined1 **)((int)ppuVar10 + -8) = (undefined1 *)((int)ppuVar10 + 0xa8);
          *(undefined4 *)((int)ppuVar10 + -0xc) = 0xc0d79;
          FUN_000bd1ac();
          ppuVar10 = (undefined1 **)((int)ppuVar10 + -8);
        }
        else {
          *(undefined4 *)((int)ppuVar10 + 0xa8) = *(undefined4 *)((int)ppuVar10 + 0xc4);
          *(undefined4 *)((int)ppuVar10 + 0x80) = *(undefined4 *)((int)ppuVar10 + 0xc4);
          *(undefined4 *)((int)ppuVar10 + 0x88) = *(undefined4 *)((int)ppuVar10 + 200);
          *(undefined4 *)((int)ppuVar10 + 0x84) = *(undefined4 *)((int)ppuVar10 + 200);
        }
        *(undefined4 *)((int)ppuVar10 + -4) = 0xc0d90;
        FUN_000c023c();
        *(undefined4 *)((int)ppuVar10 + -4) = 0xc0da9;
        iVar6 = FUN_000c023c();
        *(undefined4 *)((int)ppuVar10 + -4) = 0xc0dc2;
        iVar3 = FUN_000c023c();
        *(undefined4 *)((int)ppuVar10 + -4) = 0xc0ddb;
        iVar4 = FUN_000c023c();
        if ((((extraout_ECX != 0) || (iVar6 != 0)) || (iVar3 != 0)) || (iVar4 != 0)) {
          if (*(int *)((int)ppuVar10 + 0xdc) == 0x100) {
            *(undefined4 *)((int)ppuVar10 + -4) = *(undefined4 *)((int)ppuVar10 + 0x118);
            *(undefined4 *)((int)ppuVar10 + -8) = *(undefined4 *)((int)ppuVar10 + 0x98);
            *(char **)((int)ppuVar10 + -0xc) = s_grtc_Exceeded_max_path_length__i_0016b8c5;
            *(undefined1 ***)((int)ppuVar10 + -0x10) = ppuVar10;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0xc0e1f;
            FUN_000e7714();
            *(undefined4 *)((int)ppuVar10 + -4) = 0xc0e31;
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6908, g_log_buf) */
          }
          *piVar11 = *(int *)((int)ppuVar10 + 0x58);
          piVar11[1] = *(int *)((int)ppuVar10 + 0x5c);
          piVar11[2] = *(int *)((int)ppuVar10 + 0x60);
          iVar6 = *(int *)((int)ppuVar10 + 100);
          piVar11[6] = -1;
          *(undefined **)((int)ppuVar10 + 0xfc) = &DAT_003d642c;
          piVar11[3] = iVar6;
          *(undefined1 **)((int)ppuVar10 + 0xec) = (undefined1 *)((int)ppuVar10 + 0xa0);
          iVar3 = piVar11[1];
          *(undefined1 **)((int)ppuVar10 + 0xe4) = (undefined1 *)((int)ppuVar10 + 0xa4);
          iVar4 = *(int *)(&DAT_003d6444 + *(int *)((int)ppuVar10 + 0x9c) * 8);
          *(undefined4 *)((int)ppuVar10 + 0xf4) = *(undefined4 *)((int)ppuVar10 + 0x120);
          piVar7 = (int *)((int)ppuVar10 + 0x9c);
          uVar8 = *piVar11 - *(int *)(&DAT_003d6440 + *(int *)((int)ppuVar10 + 0x9c) * 8) >> 0x1f;
          iVar6 = (*piVar11 - *(int *)(&DAT_003d6440 + *(int *)((int)ppuVar10 + 0x9c) * 8) ^ uVar8)
                  - uVar8;
          uVar8 = iVar3 - iVar4 >> 0x1f;
          iVar3 = (iVar3 - iVar4 ^ uVar8) - uVar8;
          if (iVar3 < iVar6) {
            iVar3 = iVar3 >> 1;
          }
          else {
            iVar6 = iVar6 >> 1;
          }
          iVar6 = iVar6 + iVar3;
          *(int *)((int)ppuVar10 + 0x100) = piVar11[3];
          *(int *)((int)ppuVar10 + 0x100) =
               *(int *)((int)ppuVar10 + 0x100) -
               *(int *)(*piVar7 * 8 + *(int *)((int)ppuVar10 + 0xfc) + 0x18);
          *(undefined4 *)((int)ppuVar10 + 0x100) = *(undefined4 *)((int)ppuVar10 + 0x100);
          uVar8 = piVar11[2] - *(int *)(*piVar7 * 8 + *(int *)((int)ppuVar10 + 0xfc) + 0x14);
          uVar9 = (int)uVar8 >> 0x1f;
          *(uint *)((int)ppuVar10 + 0xe8) = (uVar8 ^ uVar9) - uVar9;
          uVar8 = (int)*(uint *)((int)ppuVar10 + 0x100) >> 0x1f;
          iVar4 = (*(uint *)((int)ppuVar10 + 0x100) ^ uVar8) - uVar8;
          iVar3 = *(int *)((int)ppuVar10 + 0xe8);
          if (iVar4 < iVar3) {
            iVar4 = iVar4 >> 1;
          }
          else {
            iVar3 = iVar3 >> 1;
          }
          *(int *)((int)ppuVar10 + 0xac) = iVar4 + iVar3;
          *(int *)((int)ppuVar10 + 0xb0) = iVar4 + iVar3;
          *(int *)((int)ppuVar10 + 0x100) = *(int *)(*(int *)((int)ppuVar10 + 0xfc) + 0x10) + -1;
          iVar3 = iVar6;
          if (*piVar7 < *(int *)((int)ppuVar10 + 0x100)) {
            iVar3 = *piVar7 * 8 + *(int *)((int)ppuVar10 + 0xfc);
            *(int *)((int)ppuVar10 + 0x100) = piVar11[1] - *(int *)(iVar3 + 0x20);
            uVar8 = *piVar11 - *(int *)(iVar3 + 0x1c);
            uVar9 = (int)uVar8 >> 0x1f;
            iVar3 = (uVar8 ^ uVar9) - uVar9;
            uVar8 = (int)*(uint *)((int)ppuVar10 + 0x100) >> 0x1f;
            iVar4 = (*(uint *)((int)ppuVar10 + 0x100) ^ uVar8) - uVar8;
            if (iVar4 < iVar3) {
              iVar4 = iVar4 >> 1;
            }
            else {
              iVar3 = iVar3 >> 1;
            }
            iVar3 = iVar3 + iVar4;
            *(int *)((int)ppuVar10 + 0x100) = piVar11[3];
            *(int *)((int)ppuVar10 + 0x100) =
                 *(int *)((int)ppuVar10 + 0x100) -
                 *(int *)(*piVar7 * 8 + *(int *)((int)ppuVar10 + 0xfc) + 0x20);
            *(undefined4 *)((int)ppuVar10 + 0x100) = *(undefined4 *)((int)ppuVar10 + 0x100);
            uVar8 = piVar11[2] - *(int *)(*piVar7 * 8 + *(int *)((int)ppuVar10 + 0xfc) + 0x1c);
            uVar9 = (int)uVar8 >> 0x1f;
            *(uint *)((int)ppuVar10 + 0xf0) = (uVar8 ^ uVar9) - uVar9;
            uVar8 = (int)*(uint *)((int)ppuVar10 + 0x100) >> 0x1f;
            iVar5 = (*(uint *)((int)ppuVar10 + 0x100) ^ uVar8) - uVar8;
            iVar4 = *(int *)((int)ppuVar10 + 0xf0);
            if (iVar5 < iVar4) {
              iVar5 = iVar5 >> 1;
            }
            else {
              iVar4 = iVar4 >> 1;
            }
            *(int *)((int)ppuVar10 + 0xb0) = iVar5 + iVar4;
          }
          iVar4 = *(int *)((int)ppuVar10 + 0xac);
          if (iVar6 < *(int *)((int)ppuVar10 + 0xac)) {
            iVar4 = iVar6;
          }
          iVar5 = *(int *)((int)ppuVar10 + 0xb0);
          if (iVar3 < *(int *)((int)ppuVar10 + 0xb0)) {
            iVar5 = iVar3;
          }
          if (iVar4 < iVar5) {
            piVar11[6] = (uint)(*(int *)((int)ppuVar10 + 0xac) <= iVar6);
            if (*(int *)((int)ppuVar10 + 0xac) <= iVar6) {
              iVar6 = *(int *)((int)ppuVar10 + 0xac);
            }
          }
          else {
            piVar11[6] = (uint)(*(int *)((int)ppuVar10 + 0xb0) <= iVar3);
            iVar6 = *(int *)((int)ppuVar10 + 0xb0);
            if (iVar3 < iVar6) {
              iVar6 = iVar3;
            }
            if (*piVar7 < *(int *)(*(int *)((int)ppuVar10 + 0xfc) + 0x10) + -1) {
              iVar3 = *(int *)((int)ppuVar10 + 0xfc);
              **(undefined4 **)((int)ppuVar10 + 0xec) = *(undefined4 *)(*piVar7 * 8 + iVar3 + 0x14);
              **(undefined4 **)((int)ppuVar10 + 0xe4) = *(undefined4 *)(*piVar7 * 8 + iVar3 + 0x18);
              *piVar7 = *piVar7 + 1;
            }
          }
          if (iVar6 < 0x100) {
            *(undefined4 *)((int)ppuVar10 + -4) = 0xc141b;
            FUN_000c1544();
          }
          else {
            iVar6 = piVar11[6];
            piVar11[6] = 2;
            *(int *)((int)ppuVar10 + 0xd4) = iVar6;
            *(undefined4 *)((int)ppuVar10 + -4) =
                 *(undefined4 *)(*piVar7 * 8 + *(int *)((int)ppuVar10 + 0xfc) + 0x18);
            *(undefined4 *)((int)ppuVar10 + -8) = 0xc1106;
            iVar6 = FUN_000c1914();
            puVar2 = (undefined1 *)((int)ppuVar10 + -4);
            if (iVar6 == 0) {
              *(undefined4 *)((int)ppuVar10 + -8) =
                   *(undefined4 *)(*piVar7 * 8 + *(int *)((int)ppuVar10 + 0xf8) + 0x20);
              *(undefined4 *)((int)ppuVar10 + -0xc) = 0xc1130;
              iVar6 = FUN_000c1914();
              if (iVar6 == 0) {
                piVar11[6] = *(int *)((int)ppuVar10 + 0xcc);
                puVar2 = (undefined1 *)((int)ppuVar10 + -8);
              }
              else {
                puVar2 = (undefined1 *)((int)ppuVar10 + -8);
                if (*piVar7 < *(int *)(*(int *)((int)ppuVar10 + 0xf4) + 0x10) + -1) {
                  iVar6 = *(int *)((int)ppuVar10 + 0xf4);
                  **(undefined4 **)((int)ppuVar10 + 0xe4) =
                       *(undefined4 *)(*piVar7 * 8 + iVar6 + 0x14);
                  **(undefined4 **)((int)ppuVar10 + 0xdc) =
                       *(undefined4 *)(*piVar7 * 8 + iVar6 + 0x18);
                  *piVar7 = *piVar7 + 1;
                  puVar2 = (undefined1 *)((int)ppuVar10 + -8);
                }
              }
            }
            ppuVar10 = (undefined1 **)puVar2;
            if (piVar11[6] == 2) {
              iVar6 = piVar11[4];
              *(int *)((int)ppuVar10 + 0x100) = piVar11[1] - piVar11[5];
              iVar3 = *(int *)((int)ppuVar10 + 0xf4);
              uVar8 = *piVar11 - iVar6 >> 0x1f;
              iVar6 = (*piVar11 - iVar6 ^ uVar8) - uVar8;
              uVar8 = (int)*(uint *)((int)ppuVar10 + 0x100) >> 0x1f;
              iVar4 = (*(uint *)((int)ppuVar10 + 0x100) ^ uVar8) - uVar8;
              if (iVar4 < iVar6) {
                iVar4 = iVar4 >> 1;
              }
              else {
                iVar6 = iVar6 >> 1;
              }
              *(int *)((int)ppuVar10 + 0xd0) = iVar4 + iVar6;
              iVar6 = piVar11[4];
              *(int *)((int)ppuVar10 + 0x100) = piVar11[3] - piVar11[5];
              uVar8 = piVar11[2] - iVar6 >> 0x1f;
              iVar6 = (piVar11[2] - iVar6 ^ uVar8) - uVar8;
              uVar8 = (int)*(uint *)((int)ppuVar10 + 0x100) >> 0x1f;
              iVar4 = (*(uint *)((int)ppuVar10 + 0x100) ^ uVar8) - uVar8;
              if (iVar4 < iVar6) {
                iVar4 = iVar4 >> 1;
              }
              else {
                iVar6 = iVar6 >> 1;
              }
              if ((iVar3 >> 1 <= *(int *)((int)ppuVar10 + 0xd0)) || (iVar3 >> 1 <= iVar4 + iVar6)) {
                iVar5 = iVar3 + 2 >> 1;
                if (*(int *)((int)ppuVar10 + 0xd0) < iVar5) {
                  piVar11[6] = 0;
                  goto LAB_000c13fc;
                }
                if (iVar4 + iVar6 < iVar5) {
                  piVar11[6] = 1;
                  *(undefined4 *)((int)ppuVar10 + -4) = 0xc1250;
                  FUN_000c1544();
                  piVar11[6] = *(int *)((int)ppuVar10 + 0xd4);
                  goto LAB_000c141b;
                }
                *(undefined1 **)((int)ppuVar10 + 0xc0) = (undefined1 *)((int)ppuVar10 + 0xb4);
                iVar6 = *piVar11;
                *(undefined1 **)((int)ppuVar10 + 0xbc) = (undefined1 *)((int)ppuVar10 + 0xb8);
                iVar4 = piVar11[1];
                *(int *)((int)ppuVar10 + 0x90) = (piVar11[2] - iVar6) * 0x40;
                *(int *)((int)ppuVar10 + 0xf8) = (piVar11[3] - iVar4) * 0x40;
                lVar1 = (longlong)*(int *)((int)ppuVar10 + 0x90) *
                        (longlong)*(int *)((int)ppuVar10 + 0x90);
                *(uint *)((int)ppuVar10 + 0x100) =
                     (uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12;
                *(undefined4 *)((int)ppuVar10 + -4) = 0xc12cf;
                iVar6 = FUN_000e8cc8();
                if (iVar6 << 7 == 0) {
                  iVar4 = 0;
                  piVar7 = extraout_ECX_00;
                }
                else {
                  *(undefined4 *)((int)ppuVar10 + -4) = 0xc12e6;
                  iVar4 = FUN_000b55a0();
                  iVar4 = iVar4 >> 6;
                  piVar7 = extraout_ECX_01;
                }
                **(int **)((int)ppuVar10 + 0xc0) = iVar4;
                if (iVar6 << 7 == 0) {
                  iVar6 = 0;
                }
                else {
                  *(undefined4 *)((int)ppuVar10 + -4) = 0xc1308;
                  iVar6 = FUN_000b55a0();
                  iVar6 = iVar6 >> 6;
                  piVar7 = extraout_ECX_02;
                }
                **(int **)((int)ppuVar10 + 0xbc) = iVar6;
                iVar5 = *(int *)((int)ppuVar10 + 0xb4) * (iVar3 >> 9);
                iVar4 = (iVar3 >> 9) * *(int *)((int)ppuVar10 + 0xb8);
                iVar6 = piVar7[4];
                *(int *)((int)ppuVar10 + 0xe0) = piVar7[5] - iVar4;
                iVar6 = iVar6 - iVar5;
                iVar5 = iVar5 + piVar7[4];
                iVar4 = iVar4 + piVar7[5];
                iVar3 = *piVar7;
                if (piVar7[2] <= iVar3) {
                  iVar3 = piVar7[2];
                }
                if (iVar3 <= iVar6) {
                  iVar3 = *piVar7;
                  if (iVar3 <= piVar7[2]) {
                    iVar3 = piVar7[2];
                  }
                  if (iVar6 <= iVar3) {
                    iVar3 = piVar7[1];
                    if (piVar7[3] <= iVar3) {
                      iVar3 = piVar7[3];
                    }
                    *(int *)((int)ppuVar10 + 0xcc) = iVar3;
                    if (*(int *)((int)ppuVar10 + 0xcc) <= *(int *)((int)ppuVar10 + 0xe0)) {
                      iVar3 = piVar7[1];
                      if (iVar3 <= piVar7[3]) {
                        iVar3 = piVar7[3];
                      }
                      *(int *)((int)ppuVar10 + 0xd8) = iVar3;
                      iVar3 = *(int *)((int)ppuVar10 + 0xe0);
                      if (iVar3 <= *(int *)((int)ppuVar10 + 0xd8)) {
                        *piVar7 = iVar6;
                        piVar7[1] = iVar3;
                      }
                    }
                  }
                }
                iVar6 = *piVar7;
                if (piVar7[2] <= *piVar7) {
                  iVar6 = piVar7[2];
                }
                if (iVar6 <= iVar5) {
                  iVar6 = piVar7[2];
                  if (piVar7[2] < *piVar7) {
                    iVar6 = *piVar7;
                  }
                  if (iVar5 <= iVar6) {
                    iVar6 = piVar7[1];
                    if (piVar7[3] <= piVar7[1]) {
                      iVar6 = piVar7[3];
                    }
                    if (iVar6 <= iVar4) {
                      iVar6 = piVar7[1];
                      if (piVar7[1] <= piVar7[3]) {
                        iVar6 = piVar7[3];
                      }
                      if (iVar4 <= iVar6) {
                        piVar7[2] = iVar5;
                        piVar7[3] = iVar4;
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_000c13fc:
              *(undefined4 *)((int)ppuVar10 + -4) = 0xc1401;
              FUN_000c1544();
            }
            piVar11[6] = *(int *)((int)ppuVar10 + 0xd4);
          }
LAB_000c141b:
          *(int *)((int)ppuVar10 + 0x50) = *piVar11;
          *(int *)((int)ppuVar10 + 0x54) = piVar11[1];
          *(int *)((int)ppuVar10 + 0x68) = piVar11[2];
          *(int *)((int)ppuVar10 + 0x6c) = piVar11[3];
          piVar11 = piVar11 + 7;
          *(int *)((int)ppuVar10 + 0xdc) = *(int *)((int)ppuVar10 + 0xdc) + 1;
        }
        iVar6 = *(int *)((int)ppuVar10 + 0x98);
        *(undefined4 *)((int)ppuVar10 + 0x70) = *(undefined4 *)((int)ppuVar10 + 0x80);
        *(undefined4 *)((int)ppuVar10 + 0x58) = *(undefined4 *)((int)ppuVar10 + 0x80);
        *(undefined4 *)((int)ppuVar10 + 0x74) = *(undefined4 *)((int)ppuVar10 + 0x84);
        *(undefined4 *)((int)ppuVar10 + 0x5c) = *(undefined4 *)((int)ppuVar10 + 0x84);
        *(int *)((int)ppuVar10 + 0x94) = *(int *)((int)ppuVar10 + 0x94) + 4;
        *(undefined4 *)((int)ppuVar10 + 0x78) = *(undefined4 *)((int)ppuVar10 + 0xa8);
        *(undefined4 *)((int)ppuVar10 + 0x60) = *(undefined4 *)((int)ppuVar10 + 0xa8);
        *(uint *)((int)ppuVar10 + 0x98) = iVar6 + 1U;
        *(undefined4 *)((int)ppuVar10 + 0x7c) = *(undefined4 *)((int)ppuVar10 + 0x88);
        *(undefined4 *)((int)ppuVar10 + 100) = *(undefined4 *)((int)ppuVar10 + 0x88);
      } while (iVar6 + 1U <= *(uint *)((int)ppuVar10 + 0x118));
    }
    if (*(int *)((int)ppuVar10 + 0xdc) == 0x100) {
      *(undefined4 *)((int)ppuVar10 + -4) = *(undefined4 *)((int)ppuVar10 + 0x118);
      *(undefined4 *)((int)ppuVar10 + -8) = *(undefined4 *)((int)ppuVar10 + 0x98);
      *(char **)((int)ppuVar10 + -0xc) = s_grtc_Exceeded_max_path_length__i_0016b8fd;
      *(undefined1 ***)((int)ppuVar10 + -0x10) = ppuVar10;
      *(undefined4 *)((int)ppuVar10 + -0x14) = 0xc14e4;
      FUN_000e7714();
      *(undefined4 *)((int)ppuVar10 + -4) = 0xc14f6;
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 6941, g_log_buf) */
    }
    iVar3 = *(int *)((int)ppuVar10 + 0xc4);
    piVar11[6] = 0;
    piVar11[2] = iVar3;
    iVar6 = *(int *)((int)ppuVar10 + 0xdc);
    *piVar11 = iVar3;
    iVar3 = *(int *)((int)ppuVar10 + 200);
    iVar4 = *(int *)((int)ppuVar10 + 0x11c);
    piVar11[3] = iVar3;
    iVar6 = iVar6 + 1;
    piVar11[1] = iVar3;
    *(int *)((int)ppuVar10 + 0xdc) = iVar6;
    *(int *)(iVar4 + 0x1c10) = iVar6;
  }
  return iVar6;
}

/******************************************************************************
 * Function : sub_0c1544 (Ghidra: FUN_000c1544)
 * Prototype: void sub_0c1544(void);
 * Address  : 0xc1544 (Size: 305 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc0b9c
 * Callees  : 1 -> 0xe8cc8
 ******************************************************************************/
void FUN_000c1544(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *extraout_ECX;
  int in_EDX;
  uint uVar4;
  
  uVar4 = *in_EAX - in_EAX[2] >> 0x1f;
  iVar1 = (*in_EAX - in_EAX[2] ^ uVar4) - uVar4;
  uVar4 = in_EAX[1] - in_EAX[3] >> 0x1f;
  iVar2 = (in_EAX[1] - in_EAX[3] ^ uVar4) - uVar4;
  if (iVar2 < iVar1) {
    iVar2 = iVar2 >> 1;
  }
  else {
    iVar1 = iVar1 >> 1;
  }
  if (in_EDX <= iVar2 + iVar1) {
    if (in_EAX[6] == 1) {
      uVar4 = *in_EAX * 0x40 + in_EAX[2] * -0x40;
      uVar3 = in_EAX[1] * 0x40 + in_EAX[3] * -0x40;
    }
    else {
      uVar4 = in_EAX[2] * 0x40 + *in_EAX * -0x40;
      uVar3 = in_EAX[3] * 0x40 + in_EAX[1] * -0x40;
    }
    iVar1 = FUN_000e8cc8();
    iVar1 = iVar1 << 0xd;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    iVar2 = iVar1;
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
      iVar2 = -iVar1;
    }
    iVar2 = ((in_EDX >> 8) + -1) * (int)(CONCAT44(uVar4 >> 0x12,uVar4 << 0xe) / (longlong)iVar2);
    if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
      iVar1 = -iVar1;
    }
    iVar1 = ((in_EDX >> 8) + -1) * (int)(CONCAT44(uVar3 >> 0x12,uVar3 << 0xe) / (longlong)iVar1);
    if (extraout_ECX[6] == 1) {
      *extraout_ECX = extraout_ECX[2] + iVar2;
      extraout_ECX[1] = extraout_ECX[3] + iVar1;
    }
    else {
      extraout_ECX[2] = *extraout_ECX + iVar2;
      extraout_ECX[3] = extraout_ECX[1] + iVar1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0c1914 (Ghidra: FUN_000c1914)
 * Prototype: undefined4 sub_0c1914(int param_1);
 * Address  : 0xc1914 (Size: 321 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc0b9c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000c1914(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *in_EAX;
  int in_ECX;
  int iVar3;
  int in_EDX;
  int unaff_EBX;
  uint uVar4;
  int iVar5;
  
  iVar5 = (in_EDX - in_ECX) * 0x40;
  iVar3 = (unaff_EBX - param_1) * 0x40;
  lVar1 = (longlong)iVar3 * (longlong)((*in_EAX - in_EDX) * 0x40);
  lVar2 = (longlong)iVar5 * (longlong)((in_EAX[1] - unaff_EBX) * 0x40);
  uVar4 = ((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12) -
          ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12);
  lVar1 = (longlong)((in_EAX[3] - in_EAX[1]) * 0x40) * (longlong)iVar5;
  lVar2 = (longlong)((in_EAX[2] - *in_EAX) * 0x40) * (longlong)iVar3;
  iVar3 = ((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12) -
          ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12);
  if (iVar3 != 0) {
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
      iVar3 = -iVar3;
    }
    iVar3 = (int)(CONCAT44(uVar4 >> 0x12,uVar4 << 0xe) / (longlong)iVar3);
    if ((-0x4001 < iVar3) && (iVar3 < 0x4001)) {
      lVar1 = (longlong)iVar3 * (longlong)((in_EAX[2] - *in_EAX) * 0x40);
      in_EAX[4] = *in_EAX + ((int)((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12) >>
                            6);
      lVar1 = (longlong)iVar3 * (longlong)((in_EAX[3] - in_EAX[1]) * 0x40);
      in_EAX[5] = in_EAX[1] +
                  ((int)((uint)lVar1 >> 0xe | (int)((ulonglong)lVar1 >> 0x20) << 0x12) >> 6);
      iVar3 = *in_EAX;
      if (in_EAX[2] <= *in_EAX) {
        iVar3 = in_EAX[2];
      }
      if (iVar3 <= in_EAX[4]) {
        iVar3 = *in_EAX;
        if (*in_EAX <= in_EAX[2]) {
          iVar3 = in_EAX[2];
        }
        if (in_EAX[4] <= iVar3) {
          iVar3 = in_EAX[1];
          if (in_EAX[3] <= in_EAX[1]) {
            iVar3 = in_EAX[3];
          }
          if (iVar3 <= in_EAX[5]) {
            iVar3 = in_EAX[1];
            if (in_EAX[1] <= in_EAX[3]) {
              iVar3 = in_EAX[3];
            }
            if (in_EAX[5] <= iVar3) {
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
 * Function : sub_0c1ecc (Ghidra: FUN_000c1ecc)
 * Prototype: void sub_0c1ecc(undefined4 param_1);
 * Address  : 0xc1ecc (Size: 232 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc241c
 * Callees  : 3 -> 0xb8368, 0xbdd9c, 0xc0b9c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c1ecc(undefined4 param_1)

{
  undefined4 *in_EAX;
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  in_EAX[0x704] = 0;
  *in_EAX = in_EDX;
  in_EAX[1] = unaff_EBX;
  in_EAX[2] = in_ECX;
  in_EAX[3] = param_1;
  DAT_003c5858 = -1;
  DAT_003c584c = FUN_000b8368();
  DAT_003c5850 = FUN_000b8368();
  _DAT_003c5844 = (int)(&DAT_0038c621)[DAT_003c584c * 4] >> 0x18;
  _DAT_003c5848 = (int)(&DAT_0038c621)[DAT_003c5850 * 4] >> 0x18;
  DAT_003c5834 = in_EDX;
  DAT_003c5838 = unaff_EBX;
  DAT_003c583c = in_ECX;
  DAT_003c5840 = extraout_ECX;
  if ((DAT_003c584c != -1) && (DAT_003c5850 != -1)) {
    DAT_003c5858 = FUN_000bdd9c(DAT_003c584c);
    if (DAT_003c5858 != -1) {
      uVar1 = FUN_000c0b9c(&DAT_003c5860,DAT_003c5858);
      in_EAX[0x704] = uVar1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0c1fb4 (Ghidra: FUN_000c1fb4)
 * Prototype: void sub_0c1fb4(void);
 * Address  : 0xc1fb4 (Size: 184 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc241c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000c1fb4(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  undefined4 *in_EDX;
  int unaff_EBX;
  int iVar2;
  
  if (unaff_EBX < 0x4000) {
    if (unaff_EBX < 0) {
      unaff_EBX = 0;
    }
  }
  else {
    unaff_EBX = 0x3fff;
  }
  *in_EDX = *in_EAX;
  in_EDX[1] = in_EAX[1];
  in_EDX[2] = in_EAX[2];
  in_EDX[3] = in_EAX[3];
  in_EDX[4] = in_EAX[0x704];
  piVar1 = in_EAX + 4;
  for (iVar2 = 0; iVar2 < in_EAX[0x704] + -1; iVar2 = iVar2 + 1) {
    if (piVar1[6] == 0) {
      in_EDX[5] = ((piVar1[2] - *piVar1) * unaff_EBX >> 0xe) + *piVar1;
      in_EDX[6] = ((piVar1[3] - piVar1[1]) * unaff_EBX >> 0xe) + piVar1[1];
    }
    else {
      in_EDX[5] = piVar1[2] - ((piVar1[2] - *piVar1) * unaff_EBX >> 0xe);
      in_EDX[6] = piVar1[3] - ((piVar1[3] - piVar1[1]) * unaff_EBX >> 0xe);
    }
    in_EDX = in_EDX + 2;
    piVar1 = piVar1 + 7;
  }
  in_EDX[5] = in_EAX[2];
  in_EDX[6] = in_EAX[3];
  return;
}

/******************************************************************************
 * Function : dk_nav_log_0c206c (Ghidra: FUN_000c206c)
 * Prototype: int dk_nav_log_0c206c(void);
 * Address  : 0xc206c (Size: 941 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:7349 ("nav_same_component:triangle not found")
 * Naming   : String 'nav.log'
 * Callers  : 1 -> 0xd1420
 * Callees  : 7 -> 0xb6aac, 0xb8368, 0xddaf0, 0xe7714, 0xe9fd7, 0xf694b, 0xf69c6
 * Strings  :
 *   - 0x16b98c: "navigate.cpp"
 *   - 0x16b935: "\nF=%d Connect %03d,%03d %03d,%03d"
 *   - 0x16ae97: "nav.log"
 *   - 0x16b957: " find"
 *   - 0x16b95d: " c=%d %s"
 *   - 0x16b966: "nav_same_component:triangle not found"
 *   - 0x16b999: " connect"
 *   - 0x16b9a2: " c=%d %s"
 *   - 0x16b9ae: " c=%d %s"
 *   - 0x16b9ba: " c=%d %s"
 ******************************************************************************/
int FUN_000c206c(void)

{
  undefined8 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined1 local_19c [80];
  undefined1 local_14c [80];
  undefined1 local_fc [80];
  undefined1 local_ac [80];
  undefined1 local_5c [80];
  
  if (DAT_0038c5c4 != 0) {
    FUN_000e7714(local_19c,s_F__d_Connect__03d__03d__03d__03d_0016b935,DAT_002e8bee);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
    FUN_000f694b();
    if (DAT_0038c5c4 != 0) {
      uVar1 = rdtsc();
      DAT_0038c5c8 = (int)uVar1;
    }
  }
  if (DAT_0038c5c4 != 0) {
    uVar1 = rdtsc();
    FUN_000e7714(local_14c,s_c__d__s_0016b95d,(int)uVar1 - DAT_0038c5c8,s_find_0016b957);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
    FUN_000f694b();
  }
  FUN_000b8368();
  FUN_000b8368();
  if ((DAT_003c584c == -1) || (DAT_003c5850 == -1)) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7349, "nav_same_component:triangle not found") */
  }
  if (DAT_0038c5c4 != 0) {
    uVar1 = rdtsc();
    FUN_000e7714(local_ac,s_c__d__s_0016b9a2,(int)uVar1 - DAT_0038c5c8,s_connect_0016b999);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
    FUN_000f694b();
  }
  iVar2 = FUN_000b6aac();
  if (iVar2 == 0) {
    if (DAT_0038c5c4 == 0) {
      return 0;
    }
    uVar1 = rdtsc();
    FUN_000e7714(local_fc,s_c__d__s_0016b9ba,(int)uVar1 - DAT_0038c5c8,&DAT_0016b9b7);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
  }
  else {
    if (DAT_0038c5c4 == 0) {
      return iVar2;
    }
    uVar1 = rdtsc();
    FUN_000e7714(local_5c,s_c__d__s_0016b9ae,(int)uVar1 - DAT_0038c5c8,&DAT_0016b9ab);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
  }
  FUN_000f694b();
  return extraout_ECX;
}

/******************************************************************************
 * Function : dk_path_init8_0c241c (Ghidra: FUN_000c241c)
 * Prototype: void dk_path_init8_0c241c(undefined4 param_1,int param_2);
 * Address  : 0xc241c (Size: 1469 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:7390 ("path_init8 : implement random externally"); navigate.cpp:7409 ("path_init8:triangle not found"); navigate.cpp:976 ("nav.creature_radius_set : only radius 1..3 allowed"); navigate.cpp:7503 ("project_point_to_line:degenerate")
 * Naming   : Log prefix 'path_init8 : implement random externally'
 * Callers  : 3 -> 0x11e00, 0x82774, 0xd1548
 * Callees  : 13 -> 0xb5bc4, 0xb6aac, 0xb8368, 0xbdd9c, 0xc0578, 0xc0740, 0xc1ecc, 0xc1fb4, 0xddaf0, 0xe7714 ...
 * Strings  :
 *   - 0x16af4b: "navigate.cpp"
 *   - 0x16ba0e: "navigate.cpp"
 *   - 0x16ba39: "navigate.cpp"
 *   - 0x16ba98: "navigate.cpp"
 *   - 0x16b9c3: "\nF=%d Path    %03d,%03d %03d,%03d"
 *   - 0x16ae97: "nav.log"
 *   - 0x16b9e5: "path_init8 : implement random externally"
 *   - 0x16ba1b: "path_init8:triangle not found"
 *   - 0x16ba46: " retC"
 *   - 0x16ba4c: " c=%d %s"
 *   - 0x16af18: "nav.creature_radius_set : only radius 1..3 allowed"
 *   - 0x16ba55: " gate"
 *   - 0x16ba5b: " route=%d"
 *   - 0x16ba65: " way=%d"
 *   - 0x16ba6e: " c=%d %s"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c241c(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_EDX;
  int extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 **ppuVar4;
  undefined4 *local_1b8;
  undefined1 auStack_1a8 [80];
  undefined4 local_158 [16];
  undefined1 local_118 [176];
  undefined1 local_68 [84];
  int local_14;
  undefined4 *local_10;
  
  local_10 = in_EDX;
  if (DAT_0038c5c4 != 0) {
    local_1b8 = in_EDX;
    FUN_000e7714(local_68,s_F__d_Path__03d__03d__03d__03d_0016b9c3,DAT_002e8bee);
    if (DAT_00388ebc != 1) {
      DAT_00388ebc = 1;
      DAT_00388ec0 = FUN_000e9fd7();
      DAT_00388ec4 = DAT_002e8bee;
    }
    if (DAT_00388ec4 != DAT_002e8bee) {
      DAT_00388ec4 = DAT_002e8bee;
      FUN_000f694b();
      FUN_000f69c6();
    }
    FUN_000f694b();
    param_1 = extraout_ECX;
    if (DAT_0038c5c4 != 0) {
      uVar1 = rdtsc();
      DAT_0038c5c8 = (int)uVar1;
    }
  }
  if (param_2 == -1) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7390, "path_init8 : implement random externally") */
    param_1 = extraout_ECX_00;
  }
  in_EAX[4] = 0;
  DAT_003c5838 = unaff_EBX;
  in_EAX[1] = unaff_EBX;
  DAT_003c583c = in_ECX;
  in_EAX[2] = in_ECX;
  DAT_003c5840 = param_1;
  in_EAX[3] = param_1;
  DAT_003c5834 = local_10;
  DAT_003c5858 = -1;
  *in_EAX = local_10;
  DAT_003c584c = FUN_000b8368();
  DAT_003c5850 = FUN_000b8368();
  if ((DAT_003c584c == -1) || (DAT_003c5850 == -1)) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7409, "path_init8:triangle not found") */
  }
  iVar2 = FUN_000b6aac();
  if (iVar2 == 0) {
    if (DAT_0038c5c4 != 0) {
      rdtsc();
      local_1b8 = local_158;
      FUN_000e7714();
      if (DAT_00388ebc != 1) {
        DAT_00388ebc = 1;
        DAT_00388ec0 = FUN_000e9fd7();
        DAT_00388ec4 = DAT_002e8bee;
      }
      if (DAT_00388ec4 != DAT_002e8bee) {
        DAT_00388ec4 = DAT_002e8bee;
        FUN_000f694b();
        FUN_000f69c6();
      }
      FUN_000f694b();
      return;
    }
  }
  else {
    FUN_000b5bc4();
    local_14 = extraout_EDX;
    if ((extraout_EDX < 1) || (3 < extraout_EDX)) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 976, "nav.creature_radius_set : only radius 1..3 allowed") */
    }
    DAT_003d1b54 = local_14 * 0x100 + 0x3d1754;
    _DAT_003c5844 = (int)(&DAT_0038c621)[DAT_003c584c * 4] >> 0x18;
    _DAT_003c5848 = (int)(&DAT_0038c621)[DAT_003c5850 * 4] >> 0x18;
    if (param_2 != -2) {
      if (DAT_0038c5c4 != 0) {
        if (DAT_00388ebc != 1) {
          DAT_00388ebc = 1;
          DAT_00388ec0 = FUN_000e9fd7();
          DAT_00388ec4 = DAT_002e8bee;
        }
        if (DAT_00388ec4 != DAT_002e8bee) {
          DAT_00388ec4 = DAT_002e8bee;
          FUN_000f694b();
          FUN_000f69c6();
        }
        FUN_000f694b();
      }
      local_1b8 = (undefined4 *)0xc277e;
      FUN_000c1ecc();
      local_1b8 = (undefined4 *)0xc2791;
      FUN_000c1fb4();
      return;
    }
    DAT_003c5858 = FUN_000bdd9c();
    if (DAT_0038c5c4 != 0) {
      local_1b8 = (undefined4 *)0xc27df;
      FUN_000e7714();
      if (DAT_00388ebc != 1) {
        DAT_00388ebc = 1;
        DAT_00388ec0 = FUN_000e9fd7();
        DAT_00388ec4 = DAT_002e8bee;
      }
      if (DAT_00388ec4 != DAT_002e8bee) {
        DAT_00388ec4 = DAT_002e8bee;
        FUN_000f694b();
        FUN_000f69c6();
      }
      FUN_000f694b();
    }
    ppuVar4 = (undefined4 **)auStack_1a8;
    if (DAT_003c5858 != -1) {
      local_1b8 = &DAT_003c5860;
      uVar3 = FUN_000c0740();
      in_EAX[4] = uVar3;
      FUN_000c0578();
      ppuVar4 = &local_1b8;
      if (DAT_0038c5c4 != 0) {
        FUN_000e7714(local_118,s_way__d_0016ba65,in_EAX[4]);
        if (DAT_00388ebc != 1) {
          DAT_00388ebc = 1;
          DAT_00388ec0 = FUN_000e9fd7();
          DAT_00388ec4 = DAT_002e8bee;
        }
        if (DAT_00388ec4 != DAT_002e8bee) {
          DAT_00388ec4 = DAT_002e8bee;
          FUN_000f694b();
          FUN_000f69c6();
        }
        FUN_000f694b();
        ppuVar4 = &local_1b8;
      }
    }
    if (DAT_0038c5c4 != 0) {
      uVar1 = rdtsc();
      *(undefined **)((int)ppuVar4 + -4) = &DAT_0016ba6d;
      *(int *)((int)ppuVar4 + -8) = (int)uVar1 - DAT_0038c5c8;
      *(char **)((int)ppuVar4 + -0xc) = s_c__d__s_0016ba6e;
      *(undefined4 ***)((int)ppuVar4 + -0x10) = ppuVar4;
      *(undefined4 *)((int)ppuVar4 + -0x14) = 0xc295b;
      FUN_000e7714();
      if (DAT_00388ebc != 1) {
        DAT_00388ebc = 1;
        *(undefined4 *)((int)ppuVar4 + -4) = 0xc2982;
        DAT_00388ec0 = FUN_000e9fd7();
        DAT_00388ec4 = DAT_002e8bee;
      }
      if (DAT_00388ec4 != DAT_002e8bee) {
        DAT_00388ec4 = DAT_002e8bee;
        *(undefined4 *)((int)ppuVar4 + -4) = 0xc29b6;
        FUN_000f694b();
        *(undefined4 *)((int)ppuVar4 + -4) = 0xc29c0;
        FUN_000f69c6();
      }
      *(undefined4 *)((int)ppuVar4 + -4) = 0xc29cd;
      FUN_000f694b();
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_set_nearpoint_solid_0c2a5c (Ghidra: FUN_000c2a5c)
 * Prototype: void dk_set_nearpoint_solid_0c2a5c(int *param_1,int *param_2);
 * Address  : 0xc2a5c (Size: 354 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:7542 ("set_nearpoint:solid")
 * Naming   : String 'set_nearpoint:solid'
 * Callers  : 1 -> 0xc2bc0
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16bab9: "navigate.cpp"
 *   - 0x16baa5: "set_nearpoint:solid"
 ******************************************************************************/
void FUN_000c2a5c(int *param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint extraout_ECX;
  int in_EDX;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = *(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + in_EAX * 0x10) * 4
                  ) >> 0x10;
  iVar3 = *(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + in_EDX * 2 + in_EAX * 0x10) * 2
                  ) >> 0x10;
  bVar5 = (*(byte *)(iVar3 + -0x101 + iVar4 * 0x100 + DAT_003d6428) & 0xf) == 0xf;
  if ((*(byte *)(iVar3 + -0x100 + iVar4 * 0x100 + DAT_003d6428) & 0xf) == 0xf) {
    bVar5 = bVar5 | 2;
  }
  if ((*(byte *)(iVar3 + -1 + iVar4 * 0x100 + DAT_003d6428) & 0xf) == 0xf) {
    bVar5 = bVar5 | 4;
  }
  if ((*(byte *)(iVar3 + DAT_003d6428 + iVar4 * 0x100) & 0xf) == 0xf) {
    bVar5 = bVar5 | 8;
  }
  uVar2 = (uint)bVar5;
  if (uVar2 == 6) {
    if ((*(int *)(&DAT_003af896 +
                 (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10 + (&DAT_00192134)[in_EDX] * 2) * 2)
         >> 0x10 < iVar3) ||
       (*(int *)(&DAT_003af898 +
                (uint)*(ushort *)(&DAT_0038c618 + in_EAX * 0x10 + (&DAT_00192134)[in_EDX] * 2) * 4)
        >> 0x10 < iVar4)) {
      uVar2 = 0xe;
    }
    else {
      uVar2 = 7;
    }
  }
  else if (uVar2 == 9) {
    if ((*(int *)(&DAT_003af896 +
                 (uint)*(ushort *)(&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10) * 2)
         >> 0x10 < iVar3) ||
       (iVar4 < *(int *)(&DAT_003af898 +
                        (uint)*(ushort *)
                               (&DAT_0038c618 + (&DAT_00192134)[in_EDX] * 2 + in_EAX * 0x10) * 4) >>
                0x10)) {
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0xd;
    }
  }
  else if (uVar2 == 0xf) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7542, "set_nearpoint:solid") */
    uVar2 = extraout_ECX;
  }
  iVar1 = *(int *)(&DAT_001920b0 + uVar2 * 8);
  *param_1 = iVar3 * 0x100 + *(int *)(&DAT_001920ac + uVar2 * 8);
  *param_2 = iVar4 * 0x100 + iVar1;
  return;
}

/******************************************************************************
 * Function : dk_nav_creature_radius_set_0c2bc0 (Ghidra: FUN_000c2bc0)
 * Prototype: void dk_nav_creature_radius_set_0c2bc0(int param_1,int *param_2,int *param_3);
 * Address  : 0xc2bc0 (Size: 976 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:976 ("nav.creature_radius_set : only radius 1..3 allowed"); navigate.cpp:994 ("fits_thro:table err"); navigate.cpp:995 ("fits_thro:uninit"); navigate.cpp:996 ("edgebits:overflow"); navigate.cpp:1270 ("region_put:Q overflow")
 * Naming   : String 'nav.creature_radius_set : only radius 1..3 allowed'
 * Callers  : 1 -> 0xd1444
 * Callees  : 5 -> 0xb5bc4, 0xb8368, 0xc2a5c, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16af4b: "navigate.cpp"
 *   - 0x16af6c: "navigate.cpp"
 *   - 0x16af8a: "navigate.cpp"
 *   - 0x16afa9: "navigate.cpp"
 *   - 0x16b05e: "navigate.cpp"
 *   - 0x16bae9: "navigate.cpp"
 *   - 0x16af18: "nav.creature_radius_set : only radius 1..3 allowed"
 *   - 0x16af58: "fits_thro:table err"
 *   - 0x16af79: "fits_thro:uninit"
 *   - 0x16af97: "edgebits:overflow"
 *   - 0x16b048: "region_put:Q overflow"
 *   - 0x16bac6: "nearest_search:non navigable found"
 ******************************************************************************/
void FUN_000c2bc0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uint uVar5;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  int extraout_ECX_04;
  int iVar6;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_28;
  short local_1c;
  int local_18;
  int local_10;
  
  FUN_000b5bc4();
  if ((extraout_EDX < 1) || (iVar10 = extraout_EDX, 3 < extraout_EDX)) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 976, "nav.creature_radius_set : only radius 1..3 allowed") */
    iVar10 = extraout_ECX;
  }
  DAT_003d1b54 = (undefined4 *)(iVar10 * 0x100 + 0x3d1754);
  DAT_0019215c = DAT_0019215c + '\x01';
  if (DAT_0019215c == '\0') {
    FUN_000e6a10();
    DAT_0019215c = '\x01';
  }
  iVar1 = FUN_000b8368();
  iVar2 = FUN_000b8368();
  iVar10 = DAT_003d1ee0;
  DAT_003d2204 = extraout_ECX_00;
  DAT_003d220c = extraout_ECX_00;
  (&DAT_003cf528)[iVar1] = DAT_0019215c;
  DAT_003d1ee4 = (int)(short)iVar1;
  DAT_003d2208 = 0;
  if (iVar10 < extraout_ECX_00) {
    DAT_003d1ee0 = extraout_ECX_00;
  }
  iVar10 = 0x7fffffff;
  if (iVar1 == iVar2) {
    *param_2 = in_ECX;
    *param_3 = param_1;
  }
  else {
    iVar3 = 0;
    iVar7 = iVar1 << 4;
    do {
      iVar4 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 2) >> 0x10) *
              0x100 - in_ECX >> 5;
      iVar8 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar7) * 4) >> 0x10) *
              0x100 - param_1 >> 5;
      iVar4 = iVar8 * iVar8 + iVar4 * iVar4;
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
        local_10 = iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 2;
    } while (iVar3 < 3);
    while( true ) {
      iVar1 = DAT_003d2208;
      DAT_003d220c = DAT_003d220c + -1;
      if (DAT_003d2208 == DAT_003d2204) {
        iVar1 = -1;
      }
      else {
        DAT_003d2208 = DAT_003d2208 + 1;
        if (199 < DAT_003d2208) {
          DAT_003d2208 = 0;
        }
        iVar1 = (&DAT_003d1ee4)[iVar1];
      }
      if (iVar1 == -1) break;
      iVar3 = 0;
      local_18 = iVar1 * 0x10;
      local_28 = 0;
      do {
        iVar7 = *(int *)((int)&DAT_0038c61c + local_18);
        iVar4 = iVar7 >> 0x10;
        if (((iVar4 != -1) && (DAT_0019215c != (&DAT_003cf528)[iVar4])) &&
           ((*(byte *)((int)&DAT_0038c621 + iVar4 * 0x10 + 3) & 0xf) != 0xf)) {
          uVar5 = (uint)((&DAT_0038c626)[iVar1 * 8] & 0x3f) | *(uint *)((int)&DAT_00192060 + iVar3);
          if (((DAT_003d1b54 != &DAT_003d1854) && (DAT_003d1b54 != &DAT_003d1954)) &&
             (DAT_003d1b54 != &DAT_003d1a54)) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 994, "fits_thro:table err") */
            uVar5 = extraout_ECX_01;
          }
          if (DAT_003d1b58 != 1) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 995, "fits_thro:uninit") */
            uVar5 = extraout_ECX_02;
          }
          if (0x3f < uVar5) {
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 996, "edgebits:overflow") */
            uVar5 = extraout_ECX_03;
          }
          if (DAT_003d1b54[uVar5] != 0) {
            (&DAT_003cf528)[iVar4] = DAT_0019215c;
            iVar8 = DAT_003d2204;
            DAT_003d2204 = DAT_003d2204 + 1;
            local_1c = (short)((uint)iVar7 >> 0x10);
            if (199 < DAT_003d2204) {
              DAT_003d2204 = 0;
            }
            if (DAT_003d2204 == DAT_003d2208) {
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
              iVar8 = extraout_ECX_04;
            }
            (&DAT_003d1ee4)[iVar8] = (int)local_1c;
            DAT_003d220c = DAT_003d220c + 1;
            if (DAT_003d1ee0 < DAT_003d220c) {
              DAT_003d1ee0 = DAT_003d220c;
            }
            if (iVar4 == iVar2) {
              *param_2 = in_ECX;
              *param_3 = param_1;
              return;
            }
            iVar7 = 0;
            iVar8 = iVar4 << 4;
            do {
              iVar9 = (*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar8) * 2) >>
                      0x10) * 0x100 - in_ECX >> 5;
              iVar6 = (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar8) * 4) >>
                      0x10) * 0x100 - param_1 >> 5;
              iVar6 = iVar9 * iVar9 + iVar6 * iVar6;
              if (iVar6 < iVar10) {
                iVar10 = iVar6;
                local_10 = iVar4;
              }
              iVar7 = iVar7 + 1;
              iVar8 = iVar8 + 2;
            } while (iVar7 < 3);
          }
        }
        iVar3 = iVar3 + 4;
        local_18 = local_18 + 2;
        local_28 = local_28 + 1;
      } while (local_28 < 3);
    }
    if ((*(byte *)((int)&DAT_0038c621 + local_10 * 0x10 + 3) & 0xf) == 0xf) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7679, "nearest_search:non navigable found") */
    }
    FUN_000c2a5c(param_2,param_3);
  }
  return;
}

/******************************************************************************
 * Function : sub_0c2f90 (Ghidra: FUN_000c2f90)
 * Prototype: undefined4 sub_0c2f90(int param_1);
 * Address  : 0xc2f90 (Size: 171 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc303c
 * Callees  : 1 -> 0xb8368
 ******************************************************************************/
undefined4 FUN_000c2f90(int param_1)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  char *local_24;
  undefined4 local_14;
  
  iVar4 = 0;
  local_14 = 0;
  iVar3 = 0;
  local_24 = in_EAX;
  while( true ) {
    do {
      cVar1 = *in_EAX;
      iVar2 = FUN_000b8368();
      if ((*(char *)((int)&DAT_0038c621 + iVar2 * 0x10 + 3) != cVar1) &&
         ((((iVar3 < in_EDX || (in_ECX <= iVar3)) || (iVar4 < unaff_EBX)) || (param_1 <= iVar4)))) {
        local_14 = 1;
      }
      iVar3 = iVar3 + 1;
      in_EAX = in_EAX + 1;
    } while (iVar3 < 0xff);
    in_EAX = local_24 + 0x100;
    iVar4 = iVar4 + 1;
    if (0xfe < iVar4) break;
    iVar3 = 0;
    local_24 = in_EAX;
  }
  return local_14;
}

/******************************************************************************
 * Function : dk_triangulation_diagnostic_0c303c (Ghidra: FUN_000c303c)
 * Prototype: void dk_triangulation_diagnostic_0c303c(void);
 * Address  : 0xc303c (Size: 1468 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:7735 ("diagnostic:map_area_test failed"); navigate.cpp:7751 ("triangulation_diagnostic : link to free"); navigate.cpp:7753 ("triangulation_diagnostic : bad link back 1"); navigate.cpp:7754 ("triangulation_diagnostic : bad link back 2"); navigate.cpp:7756 ("triangulation_diagnostic : point share error")
 * Naming   : Log prefix 'triangulation_diagnostic : link to free'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xb5f44, 0xb6c04, 0xc2f90, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16bb16: "navigate.cpp"
 *   - 0x16bb4b: "navigate.cpp"
 *   - 0x16bb83: "navigate.cpp"
 *   - 0x16bbbb: "navigate.cpp"
 *   - 0x16bbf5: "navigate.cpp"
 *   - 0x16bc28: "navigate.cpp"
 *   - 0x16bc5b: "navigate.cpp"
 *   - 0x16bc99: "navigate.cpp"
 *   - 0x16bcd6: "navigate.cpp"
 *   - 0x16bd11: "navigate.cpp"
 *   - 0x16bd4a: "navigate.cpp"
 *   - 0x16bd82: "navigate.cpp"
 *   - 0x16bdbc: "navigate.cpp"
 *   - 0x16bdf5: "navigate.cpp"
 *   - 0x16be2a: "navigate.cpp"
 *   - 0x16baf6: "diagnostic:map_area_test failed"
 *   - 0x16bb23: "triangulation_diagnostic : link to free"
 *   - 0x16bb58: "triangulation_diagnostic : bad link back 1"
 *   - 0x16bb90: "triangulation_diagnostic : bad link back 2"
 *   - 0x16bbc8: "triangulation_diagnostic : point share error"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c303c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_90;
  undefined1 auStack_8c [116];
  
  puVar4 = (undefined4 *)auStack_8c;
  if (DAT_003d6428 != 0) {
    local_90 = 0xff;
    iVar1 = FUN_000c2f90();
    puVar4 = &local_90;
    if (iVar1 != 0) {
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7735, "diagnostic:map_area_test failed") */
      puVar4 = &local_90;
    }
  }
  iVar1 = 0;
  *(undefined4 *)((int)puVar4 + 0x50) = 0;
  if (0 < DAT_0038c5d0) {
    *(undefined4 *)((int)puVar4 + 0x54) = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + *(int *)((int)puVar4 + 0x54)) >> 0x18 != -1) {
        iVar5 = *(int *)((int)puVar4 + 0x54);
        *(int *)((int)puVar4 + 0x5c) = iVar5;
        *(int *)((int)puVar4 + 100) = iVar5;
        *(int *)((int)puVar4 + 0x68) = iVar5;
        *(int *)((int)puVar4 + 0x70) = iVar5;
        *(int *)((int)puVar4 + 0x60) = iVar5;
        *(undefined4 *)((int)puVar4 + 0x6c) = 0;
        *(int *)((int)puVar4 + 0x50) = *(int *)((int)puVar4 + 0x50) + 1;
        *(int *)((int)puVar4 + 0x58) = iVar5 + 6;
        do {
          iVar3 = *(int *)((int)&DAT_0038c61c + *(int *)((int)puVar4 + 100)) >> 0x10;
          if (iVar3 != -1) {
            if ((int)(&DAT_0038c621)[iVar3 * 4] >> 0x18 == -1) {
              *(undefined4 *)((int)puVar4 + -4) = 0xc3173;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7751, "triangulation_diagnostic : link to free") */
              iVar3 = extraout_ECX;
            }
            if ((int)(&DAT_0038c61c)[iVar3 * 4] >> 0x10 == iVar1) {
              iVar2 = 0;
            }
            else if (*(int *)((int)&DAT_0038c61c + iVar3 * 0x10 + 2) >> 0x10 == iVar1) {
              iVar2 = 1;
            }
            else if (*(int *)(&DAT_0038c620 + iVar3 * 0x10) >> 0x10 == iVar1) {
              iVar2 = 2;
            }
            else {
              iVar2 = -1;
            }
            if (iVar2 == -1) {
              *(undefined4 *)((int)puVar4 + -4) = 0xc31d1;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7753, "triangulation_diagnostic : bad link back 1") */
              iVar3 = extraout_ECX_00;
            }
            if (*(int *)((int)&DAT_0038c61c + iVar2 * 2 + iVar3 * 0x10) >> 0x10 != iVar1) {
              *(undefined4 *)((int)puVar4 + -4) = 0xc31f8;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7754, "triangulation_diagnostic : bad link back 2") */
              iVar3 = extraout_ECX_01;
            }
            if (*(short *)(&DAT_0038c618 + (&DAT_00192134)[iVar2] * 2 + iVar3 * 0x10) !=
                *(short *)(&DAT_0038c618 + *(int *)((int)puVar4 + 0x68))) {
              *(undefined4 *)((int)puVar4 + -4) = 0xc3230;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7756, "triangulation_diagnostic : point share error") */
              iVar3 = extraout_ECX_02;
            }
            if (*(short *)(&DAT_003af898 +
                          (uint)*(ushort *)(&DAT_0038c618 + *(int *)((int)puVar4 + 0x70)) * 4) !=
                *(short *)(&DAT_003af898 +
                          (uint)*(ushort *)
                                 (&DAT_0038c618 + (&DAT_00192134)[iVar2] * 2 + iVar3 * 0x10) * 4)) {
              *(undefined4 *)((int)puVar4 + -4) = 0xc3282;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7757, "triangulation_diagnostic : x geometry") */
              iVar3 = extraout_ECX_03;
            }
            if (*(short *)(&DAT_003af89a +
                          (uint)*(ushort *)(&DAT_0038c618 + *(int *)((int)puVar4 + 0x60)) * 4) !=
                *(short *)(&DAT_003af89a +
                          (uint)*(ushort *)
                                 (&DAT_0038c618 + (&DAT_00192134)[iVar2] * 2 + iVar3 * 0x10) * 4)) {
              *(undefined4 *)((int)puVar4 + -4) = 0xc32d4;
              FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7758, "triangulation_diagnostic : y geometry") */
              iVar3 = extraout_ECX_04;
            }
            if (*(char *)((int)&DAT_0038c621 + *(int *)((int)puVar4 + 0x5c) + 3) !=
                *(char *)((int)&DAT_0038c621 + iVar3 * 0x10 + 3)) {
              if ((*(int *)(&DAT_003af896 + (uint)*(ushort *)(&DAT_0038c618 + iVar5) * 2) >> 0x10 !=
                   *(int *)(&DAT_003af896 +
                           (uint)*(ushort *)
                                  (&DAT_0038c618 +
                                  *(int *)((int)&DAT_00192134 + *(int *)((int)puVar4 + 0x6c)) * 2 +
                                  *(int *)((int)puVar4 + 0x5c)) * 2) >> 0x10) &&
                 (*(int *)(&DAT_003af898 + (uint)*(ushort *)(&DAT_0038c618 + iVar5) * 4) >> 0x10 !=
                  *(int *)(&DAT_003af898 +
                          (uint)*(ushort *)
                                 (&DAT_0038c618 +
                                 *(int *)((int)&DAT_00192134 + *(int *)((int)puVar4 + 0x6c)) * 2 +
                                 *(int *)((int)puVar4 + 0x5c)) * 4) >> 0x10)) {
                *(undefined4 *)((int)puVar4 + -4) = 0xc3363;
                FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7765, "triangulation_diagnostic: diagonal colour change") */
              }
            }
          }
          iVar5 = iVar5 + 2;
          *(int *)((int)puVar4 + 100) = *(int *)((int)puVar4 + 100) + 2;
          *(int *)((int)puVar4 + 0x68) = *(int *)((int)puVar4 + 0x68) + 2;
          *(int *)((int)puVar4 + 0x70) = *(int *)((int)puVar4 + 0x70) + 2;
          *(int *)((int)puVar4 + 0x60) = *(int *)((int)puVar4 + 0x60) + 2;
          *(int *)((int)puVar4 + 0x6c) = *(int *)((int)puVar4 + 0x6c) + 4;
        } while (iVar5 != *(int *)((int)puVar4 + 0x58));
      }
      iVar1 = iVar1 + 1;
      *(int *)((int)puVar4 + 0x54) = *(int *)((int)puVar4 + 0x54) + 0x10;
    } while (iVar1 < DAT_0038c5d0);
  }
  if (*(int *)((int)puVar4 + 0x50) != DAT_0038c5d4) {
    *(undefined4 *)((int)puVar4 + -4) = 0xc3388;
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7771, "triangulation_diagnostic : triangle count wrong") */
  }
  iVar5 = 0;
  iVar1 = _DAT_00192148;
  if (0 < DAT_0038c5d0) {
    iVar3 = 0;
    do {
      iVar1 = _DAT_00192148;
      if (*(int *)((int)&DAT_0038c621 + iVar3) >> 0x18 == -1) {
        for (; iVar1 != iVar5; iVar1 = (int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10) {
          if (iVar1 == -1) {
            *(undefined4 *)((int)puVar4 + -4) = 0xc33c9;
            FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line ?, "triangulation_diagnostic : free list omission") */
            iVar1 = extraout_ECX_05;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x10;
      iVar1 = _DAT_00192148;
    } while (iVar5 < DAT_0038c5d0);
  }
  for (; iVar1 != -1; iVar1 = (int)(&DAT_0038c61c)[iVar1 * 4] >> 0x10) {
    if ((int)(&DAT_0038c621)[iVar1 * 4] >> 0x18 != -1) {
      *(undefined4 *)((int)puVar4 + -4) = 0xc3419;
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7791, "triangulation_diagnostic : free list in use") */
      iVar1 = extraout_ECX_06;
    }
  }
  if (DAT_0038c5d0 < 9000) {
    iVar1 = DAT_0038c5d0 << 4;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar1) >> 0x18 != -1) {
        *(undefined4 *)((int)puVar4 + -4) = 0xc345f;
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7798, "triangulation_diagnostic : high alloc used") */
        iVar1 = extraout_ECX_07;
      }
      iVar1 = iVar1 + 0x10;
    } while (iVar1 < 0x23280);
  }
  iVar1 = 0;
  for (iVar5 = _DAT_0019214c; iVar5 != -1; iVar5 = *(int *)(&DAT_003af896 + iVar5 * 2) >> 0x10) {
    iVar1 = iVar1 + 1;
    if (*(int *)(&DAT_003af898 + iVar5 * 4) >> 0x10 != -0x8000) {
      *(undefined4 *)((int)puVar4 + -4) = 0xc349e;
      FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7807, "triangulation_diagnostic : free point in use") */
      iVar5 = extraout_ECX_08;
    }
  }
  if (iVar1 + DAT_003b3eec != DAT_003b3ee8) {
    *(undefined4 *)((int)puVar4 + -4) = 0xc34d3;
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7810, "triangulation_diagnostic : free point count") */
  }
  iVar1 = 0;
  if (0 < DAT_0038c5d0) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0038c5d0);
  }
  iVar1 = 0;
  if (0 < DAT_0038c5d0) {
    iVar5 = 0;
    do {
      if (*(int *)((int)&DAT_0038c621 + iVar5) >> 0x18 != -1) {
        *(undefined4 *)((int)puVar4 + -4) = 0xc3524;
        FUN_000b5f44();
        *(undefined4 *)((int)puVar4 + -4) = 0xc3538;
        FUN_000b5f44();
        *(undefined4 *)((int)puVar4 + -4) = 0xc354c;
        FUN_000b5f44();
        iVar1 = extraout_ECX_09;
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar1 < DAT_0038c5d0);
  }
  iVar1 = 0;
  if (0 < DAT_003b3ee8) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(&DAT_003af898 + iVar5) >> 0x10;
      if ((iVar3 != -0x8000) &&
         ((((iVar2 = *(int *)((int)&DAT_003af896 + iVar5) >> 0x10, iVar2 < -0x8000 ||
            (0x7fff < iVar2)) || (iVar3 < -0x8000)) || (0x7fff < iVar3)))) {
        *(int *)((int)puVar4 + -4) = *(int *)(&DAT_003af898 + iVar5) >> 0x10;
        *(int *)((int)puVar4 + -8) = *(int *)((int)&DAT_003af896 + iVar5) >> 0x10;
        *(char **)((int)puVar4 + -0xc) = s_diagnostic_16bit_point_overflow___0016be02;
        *(undefined4 **)((int)puVar4 + -0x10) = puVar4;
        *(undefined4 *)((int)puVar4 + -0x14) = 0xc35c9;
        FUN_000e7714();
        *(undefined4 *)((int)puVar4 + -4) = 0xc35db;
        FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 7855, g_log_buf) */
        iVar5 = extraout_ECX_10;
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar1 < DAT_003b3ee8);
  }
  *(undefined4 *)((int)puVar4 + -4) = 0xc35ee;
  FUN_000b6c04();
  return;
}

/******************************************************************************
 * Function : sub_0c3620 (Ghidra: FUN_000c3620)
 * Prototype: undefined8 sub_0c3620(void);
 * Address  : 0xc3620 (Size: 69 bytes)
 * Module   : navigate.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000c3620(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  int iVar2;
  
  DAT_003d220c = DAT_003d220c + -1;
  if (DAT_003d2208 == DAT_003d2204) {
    uVar1 = 0xffffffff;
    iVar2 = DAT_003d2208;
  }
  else {
    iVar2 = DAT_003d2208 + 1;
    if (199 < iVar2) {
      iVar2 = 0;
    }
    uVar1 = (&DAT_003d1ee4)[DAT_003d2208];
  }
  DAT_003d2208 = iVar2;
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_region_put_overflow_0c3670 (Ghidra: FUN_000c3670)
 * Prototype: void dk_region_put_overflow_0c3670(void);
 * Address  : 0xc3670 (Size: 113 bytes)
 * Module   : navigate.cpp [direct_file_string_xref]
 * OrigLine : navigate.cpp:1270 ("region_put:Q overflow")
 * Naming   : String 'region_put:Q overflow'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16b05e: "navigate.cpp"
 *   - 0x16b048: "region_put:Q overflow"
 ******************************************************************************/
void FUN_000c3670(void)

{
  int iVar1;
  int iVar2;
  short in_AX;
  short extraout_CX;
  
  iVar2 = DAT_003d2204;
  DAT_003d2204 = DAT_003d2204 + 1;
  if (199 < DAT_003d2204) {
    DAT_003d2204 = 0;
  }
  if (DAT_003d2204 == DAT_003d2208) {
    FUN_000ddaf0(); /* LbErrorLog("navigate.cpp", line 1270, "region_put:Q overflow") */
    in_AX = extraout_CX;
  }
  iVar1 = DAT_003d1ee0;
  DAT_003d220c = DAT_003d220c + 1;
  (&DAT_003d1ee4)[iVar2] = (int)in_AX;
  if (iVar1 < DAT_003d220c) {
    DAT_003d1ee0 = DAT_003d220c;
  }
  return;
}

/******************************************************************************
 * Function : sub_0c3710 (Ghidra: FUN_000c3710)
 * Prototype: void sub_0c3710(void);
 * Address  : 0xc3710 (Size: 111 bytes)
 * Module   : navigate.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000c3710(void)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  int in_EDX;
  
  if ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6 != in_EDX) {
    iVar3 = ((int)(uint)(ushort)(&DAT_0038c626)[in_EAX * 8] >> 6) * 3;
    uVar2 = (&DAT_0038c626)[in_EAX * 8];
    *(short *)((int)&DAT_003d1b5c + iVar3) = *(short *)((int)&DAT_003d1b5c + iVar3) + -1;
    (&DAT_003d1b5e)[iVar3] = 0;
    (&DAT_0038c626)[in_EAX * 8] = uVar2 & 0x3f;
    (&DAT_0038c626)[in_EAX * 8] = uVar2 & 0x3f | (ushort)(in_EDX << 6);
    psVar1 = (short *)((int)&DAT_003d1b5c + in_EDX * 3);
    *psVar1 = *psVar1 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0c3780 (Ghidra: FUN_000c3780)
 * Prototype: void sub_0c3780(void);
 * Address  : 0xc3780 (Size: 166 bytes)
 * Module   : navigate.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4e85c
 * Callees  : 3 -> 0x6e538, 0x6e5ee, 0x8ccec
 ******************************************************************************/
void FUN_000c3780(void)

{
  byte bVar1;
  int in_EAX;
  char cVar2;
  
  bVar1 = *(byte *)(in_EAX + 0x13);
  cVar2 = '\0';
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      cVar2 = *(char *)(in_EAX + 0x48);
    }
  }
  else if ((2 < bVar1) && (bVar1 < 5)) {
    cVar2 = *(char *)(in_EAX + 0x49) - *(char *)(in_EAX + 0x48);
  }
  FUN_0008ccec(0,(int)cVar2,2);
  *(undefined1 *)(in_EAX + 0x13) = 1;
  FUN_0006e5ee();
  FUN_0006e538(3,0,6,0x100);
  return;
}

/******************************************************************************
 * Function : sub_0c3828 (Ghidra: FUN_000c3828)
 * Prototype: void sub_0c3828(void);
 * Address  : 0xc3828 (Size: 124 bytes)
 * Module   : navigate.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4ed3d
 * Callees  : 1 -> 0x8ccec
 ******************************************************************************/
void FUN_000c3828(void)

{
  byte bVar1;
  int in_EAX;
  char cVar2;
  
  bVar1 = *(byte *)(in_EAX + 0x13);
  cVar2 = '\0';
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      cVar2 = *(char *)(in_EAX + 0x49) - *(char *)(in_EAX + 0x48);
    }
  }
  else if ((2 < bVar1) && (bVar1 < 5)) {
    cVar2 = *(char *)(in_EAX + 0x48);
  }
  FUN_0008ccec(0,(int)cVar2,2);
  *(undefined1 *)(in_EAX + 0x13) = 3;
  return;
}

