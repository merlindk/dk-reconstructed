/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: structs.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 20
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_072810 (Ghidra: FUN_00072810)
 * Prototype: void sub_072810(void);
 * Address  : 0x72810 (Size: 25 bytes)
 * Module   : structs.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x36ff4, 0x40d25, 0x40db9, 0xb20e0
 * Callees  : 5 -> 0x72cca, 0x72d1a, 0x72d44, 0x72d6a, 0xac630
 ******************************************************************************/
void FUN_00072810(void)

{
  FUN_00072cca();
  FUN_00072d1a();
  FUN_00072d44();
  FUN_00072d6a();
  FUN_000ac630();
  return;
}

/******************************************************************************
 * Function : dk_allocate_thing_structure_072829 (Ghidra: FUN_00072829)
 * Prototype: longlong dk_allocate_thing_structure_072829(void);
 * Address  : 0x72829 (Size: 153 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp:31 ("Cannot allocate thing structure."); structs.cpp:33
 * Naming   : String 'Cannot allocate thing structure.'
 * Callers  : 12 -> 0x24998, 0x43bb3, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x449a4, 0x44b13, 0x44ca6, 0x44d42 ...
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x167811: "structs.cpp"
 *   - 0x167860: "structs.cpp"
 *   - 0x1677f0: "Cannot allocate thing structure."
 *   - 0x16781d: "Creats %d, Objs%d, Bods%d, Trps%d, Drs%d, Shts%d, Effs%d, EffEls%d"
 ******************************************************************************/
longlong FUN_00072829(void)

{
  char in_AL;
  uint in_EDX;
  
  if ((0x7fe < DAT_002e8bec) && ((in_AL == '\0' || (DAT_002e6ece == 0)))) {
    if (in_AL != '\0') {
      FUN_000ddaf0(); /* LbErrorLog("structs.cpp", line 31, "Cannot allocate thing structure.") */
      FUN_000e7714(&DAT_0019cbac,s_Creats__d__Objs_d__Bods_d__Trps__0016781d,DAT_002e6eb2,
                   DAT_002e6ec2,DAT_002e6ed2,DAT_002e6eea,DAT_002e6ef2,DAT_002e6eba,DAT_002e6eda,
                   DAT_002e6eca);
      FUN_000ddaf0(); /* LbErrorLog("structs.cpp", line 33, g_log_buf) */
    }
    return (ulonglong)in_EDX << 0x20;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0728c2 (Ghidra: FUN_000728c2)
 * Prototype: longlong sub_0728c2(void);
 * Address  : 0x728c2 (Size: 39 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x43bb3, 0x4e1f2
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000728c2(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 1;
  while( true ) {
    if (0xff < (uVar1 & 0xffff)) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*(byte *)((&DAT_001b0a00)[uVar1 & 0xffff] + 1) & 1) == 0) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0728e9 (Ghidra: FUN_000728e9)
 * Prototype: longlong sub_0728e9(void);
 * Address  : 0x728e9 (Size: 38 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x5f6c5, 0xcaa90
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000728e9(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 1;
  while( true ) {
    if (0x95 < (uVar1 & 0xffff)) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (((&DAT_002ddd1b)[(uVar1 & 0xffff) * 0x45] & 1) == 0) break;
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_even_free_up_effect_07290f (Ghidra: FUN_0007290f)
 * Prototype: longlong dk_even_free_up_effect_07290f(void);
 * Address  : 0x7290f (Size: 142 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp:121 ("Cannot allocate a structure! ")
 * Naming   : String 'Cannot even free up effect thing!'
 * Callers  : 11 -> 0x24998, 0x43bb3, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x449a4, 0x44b13, 0x44ca6, 0x44d42 ...
 * Callees  : 2 -> 0x72af4, 0xddaf0
 * Strings  :
 *   - 0x16788e: "structs.cpp"
 *   - 0x1678b8: "structs.cpp"
 *   - 0x16786c: "Cannot even free up effect thing!"
 *   - 0x16789a: "Cannot allocate a structure! "
 ******************************************************************************/
longlong FUN_0007290f(void)

{
  byte *pbVar1;
  char in_AL;
  uint in_EDX;
  
  while( true ) {
    if (DAT_002e8bec < 0x7ff) {
      pbVar1 = (byte *)(&DAT_001ae9fc)[(ushort)(&DAT_002e7bee)[DAT_002e8bec]];
      *pbVar1 = *pbVar1 | 1;
      *(undefined2 *)(pbVar1 + 0x1b) = (&DAT_002e7bee)[DAT_002e8bec];
      DAT_002e8bec = DAT_002e8bec + 1;
      return CONCAT44(in_EDX,pbVar1);
    }
    if ((in_AL == '\0') || (DAT_002e6ece == 0)) break;
    FUN_00072af4();
    in_AL = '\x01';
  }
  FUN_000ddaf0(); /* LbErrorLog("structs.cpp", line 121, "Cannot allocate a structure! ") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_07299d (Ghidra: FUN_0007299d)
 * Prototype: longlong sub_07299d(void);
 * Address  : 0x7299d (Size: 98 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x43bb3
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
longlong FUN_0007299d(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  
  cVar2 = '\x01';
  iVar3 = 4;
  while( true ) {
    if (0x3ff < iVar3) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*(byte *)(*(int *)((int)&DAT_001b0a00 + iVar3) + 1) & 1) == 0) break;
    cVar2 = cVar2 + '\x01';
    iVar3 = iVar3 + 4;
  }
  FUN_000e6a10();
  pbVar1 = (byte *)(*(int *)((int)&DAT_001b0a00 + extraout_ECX) + 1);
  *pbVar1 = *pbVar1 | 1;
  **(char **)((int)&DAT_001b0a00 + extraout_ECX) = cVar2;
  return CONCAT44(in_EDX,*(undefined4 *)((int)&DAT_001b0a00 + extraout_ECX));
}

/******************************************************************************
 * Function : sub_0729ff (Ghidra: FUN_000729ff)
 * Prototype: longlong sub_0729ff(void);
 * Address  : 0x729ff (Size: 58 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xcaa90
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000729ff(void)

{
  int iVar1;
  short sVar2;
  uint in_EDX;
  
  sVar2 = 1;
  iVar1 = 0x45;
  while( true ) {
    if (0x286d < iVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (((&DAT_002ddd1b)[iVar1] & 1) == 0) break;
    iVar1 = iVar1 + 0x45;
    sVar2 = sVar2 + 1;
  }
  *(short *)(&DAT_002ddd1c + iVar1) = sVar2;
  (&DAT_002ddd1b)[iVar1] = (&DAT_002ddd1b)[iVar1] | 1;
  return CONCAT44(in_EDX,&DAT_002ddd1b + iVar1);
}

/******************************************************************************
 * Function : sub_072a39 (Ghidra: FUN_00072a39)
 * Prototype: longlong sub_072a39(void);
 * Address  : 0x72a39 (Size: 65 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00072a39(void)

{
  int iVar1;
  short sVar2;
  uint in_EDX;
  
  sVar2 = 1;
  iVar1 = 10;
  while( true ) {
    if (0x13f < iVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (((&DAT_002eb401)[iVar1] & 1) == 0) break;
    iVar1 = iVar1 + 10;
    sVar2 = sVar2 + 1;
  }
  (&DAT_002eb40a)[iVar1] = 0;
  *(short *)(&DAT_002eb408 + iVar1) = sVar2;
  (&DAT_002eb401)[iVar1] = (&DAT_002eb401)[iVar1] | 1;
  return CONCAT44(in_EDX,&DAT_002eb401 + iVar1);
}

/******************************************************************************
 * Function : dk_attempt_allocate_action_point_072a7a (Ghidra: FUN_00072a7a)
 * Prototype: longlong dk_attempt_allocate_action_point_072a7a(void);
 * Address  : 0x72a7a (Size: 70 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp:197 ("Attempt to allocate action point over old one")
 * Naming   : String 'Attempt to allocate action point over old one'
 * Callers  : 1 -> 0x29df9
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1678f2: "structs.cpp"
 *   - 0x1678c4: "Attempt to allocate action point over old one"
 ******************************************************************************/
longlong FUN_00072a7a(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = in_EAX * 10;
  if (((&DAT_002eb401)[iVar1] & 1) == 0) {
    (&DAT_002eb40a)[iVar1] = 0;
    *(short *)(&DAT_002eb408 + iVar1) = (short)in_EAX;
    (&DAT_002eb401)[iVar1] = (&DAT_002eb401)[iVar1] | 1;
    return CONCAT44(in_EDX,&DAT_002eb401 + iVar1);
  }
  FUN_000ddaf0(); /* LbErrorLog("structs.cpp", line 197, "Attempt to allocate action point over old one") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_072af4 (Ghidra: FUN_00072af4)
 * Prototype: void sub_072af4(void);
 * Address  : 0x72af4 (Size: 288 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 74 -> 0x22660, 0x23014, 0x24ab9, 0x2606f, 0x26b04, 0x2ab14, 0x386e1, 0x39901, 0x4d375, 0x5102d ...
 * Callees  : 9 -> 0x39c3e, 0x4d3d4, 0x50ca9, 0x6385d, 0x6f653, 0x72c14, 0x72de3, 0xacce4, 0xe6a10
 ******************************************************************************/
void FUN_00072af4(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  int extraout_ECX_03;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar1;
  
  if (*(ushort *)(in_EAX + 100) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  }
  if ((*in_EAX & 8) != 0) {
    FUN_0006385d();
    in_EAX = extraout_ECX;
    in_EDX = extraout_EDX;
  }
  if ((in_EDX == 0) && (*(short *)(in_EAX + 0x62) != 0)) {
    FUN_000acce4();
    in_EAX = extraout_ECX_00;
    in_EDX = extraout_EDX_00;
  }
  if (iVar1 != 0) {
    if (in_EDX == 0) {
      if (*(short *)(iVar1 + 0x68) != 0) {
        FUN_0004d3d4();
      }
      if ((*(ushort *)(iVar1 + 0x7a) & 0xfff) != 0) {
        FUN_00039c3e();
      }
    }
    FUN_00072c14();
    in_EAX = extraout_ECX_01;
  }
  if (in_EAX[0x66] != 0) {
    FUN_0006f653();
    in_EAX = extraout_ECX_02;
  }
  switch(in_EAX[0x1f]) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  default:
    goto switchD_00072b88_caseD_a;
  case 0xc:
    break;
  case 0xd:
  }
  FUN_00072de3();
switchD_00072b88_caseD_a:
  FUN_00050ca9();
  DAT_002e8bec = DAT_002e8bec - 1;
  (&DAT_002e7bee)[DAT_002e8bec] = *(undefined2 *)(extraout_ECX_03 + 0x1b);
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_072c14 (Ghidra: FUN_00072c14)
 * Prototype: void sub_072c14(void);
 * Address  : 0x72c14 (Size: 17 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x72af4, 0x72d1a
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00072c14(void)

{
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_072c25 (Ghidra: FUN_00072c25)
 * Prototype: void sub_072c25(void);
 * Address  : 0x72c25 (Size: 139 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x72d44, 0xc98d0
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00072c25(void)

{
  ushort uVar1;
  byte *in_EAX;
  int iVar2;
  
  if ((in_EAX != (byte *)0x0) && ((*in_EAX & 1) != 0)) {
    if ((int)(char)in_EAX[3] != (uint)DAT_002eb543) {
      iVar2 = (uint)*(ushort *)(in_EAX + 10) * 2 + (char)in_EAX[3] * 0x1508;
      if (*(short *)(&DAT_002e0594 + iVar2) == *(short *)(in_EAX + 1)) {
        uVar1 = *(ushort *)(in_EAX + 6);
        *(ushort *)(&DAT_002e0594 + iVar2) = uVar1;
        *(undefined2 *)(&DAT_002ddd1f + (uint)uVar1 * 0x45) = 0;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 4);
        *(ushort *)(&DAT_002ddd1f + (uint)*(ushort *)(in_EAX + 6) * 0x45) = uVar1;
        *(undefined2 *)(&DAT_002ddd21 + (uint)uVar1 * 0x45) = *(undefined2 *)(in_EAX + 6);
      }
    }
    FUN_000e6a10();
  }
  return;
}

/******************************************************************************
 * Function : sub_072cb0 (Ghidra: FUN_00072cb0)
 * Prototype: void sub_072cb0(void);
 * Address  : 0x72cb0 (Size: 26 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x72d6a
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00072cb0(void)

{
  byte *in_EAX;
  
  if ((in_EAX != (byte *)0x0) && ((*in_EAX & 1) != 0)) {
    FUN_000e6a10();
  }
  return;
}

/******************************************************************************
 * Function : sub_072cca (Ghidra: FUN_00072cca)
 * Prototype: void sub_072cca(void);
 * Address  : 0x72cca (Size: 80 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x72810
 * Callees  : 1 -> 0x72af4
 ******************************************************************************/
void FUN_00072cca(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  do {
    if ((**(byte **)((int)&DAT_001ae9fc + iVar3) & 1) != 0) {
      FUN_00072af4();
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x2000);
  iVar2 = 0;
  iVar3 = 0;
  do {
    sVar1 = (short)iVar2;
    iVar2 = iVar2 + 1;
    *(short *)((int)&DAT_002e7bee + iVar3) = sVar1 + 1;
    iVar3 = iVar3 + 2;
  } while (iVar2 < 0x7ff);
  DAT_002e8bec = 0;
  return;
}

/******************************************************************************
 * Function : sub_072d1a (Ghidra: FUN_00072d1a)
 * Prototype: void sub_072d1a(void);
 * Address  : 0x72d1a (Size: 42 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x72810
 * Callees  : 1 -> 0x72c14
 ******************************************************************************/
void FUN_00072d1a(void)

{
  int iVar1;
  int extraout_EDX;
  
  iVar1 = 4;
  do {
    if ((*(byte *)(*(int *)((int)&DAT_001b0a00 + iVar1) + 1) & 1) != 0) {
      FUN_00072c14();
      iVar1 = extraout_EDX;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x400);
  return;
}

/******************************************************************************
 * Function : sub_072d44 (Ghidra: FUN_00072d44)
 * Prototype: void sub_072d44(void);
 * Address  : 0x72d44 (Size: 38 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x72810
 * Callees  : 1 -> 0x72c25
 ******************************************************************************/
void FUN_00072d44(void)

{
  undefined2 *extraout_EDX;
  
  do {
    FUN_00072c25();
  } while (extraout_EDX != &DAT_002e0589);
  return;
}

/******************************************************************************
 * Function : sub_072d6a (Ghidra: FUN_00072d6a)
 * Prototype: void sub_072d6a(void);
 * Address  : 0x72d6a (Size: 38 bytes)
 * Module   : structs.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x72810
 * Callees  : 1 -> 0x72cb0
 ******************************************************************************/
void FUN_00072d6a(void)

{
  undefined1 *extraout_EDX;
  
  do {
    FUN_00072cb0();
  } while (extraout_EDX != &DAT_002eb541);
  return;
}

/******************************************************************************
 * Function : dk_thing_already_list_072d90 (Ghidra: FUN_00072d90)
 * Prototype: void dk_thing_already_list_072d90(void);
 * Address  : 0x72d90 (Size: 83 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp:460 ("Thing is already in list")
 * Naming   : String 'Thing is already in list'
 * Callers  : 11 -> 0x24998, 0x43bb3, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x449a4, 0x44b13, 0x44ca6, 0x44d42 ...
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167917: "structs.cpp"
 *   - 0x1678fe: "Thing is already in list"
 ******************************************************************************/
void FUN_00072d90(void)

{
  int iVar1;
  byte *in_EAX;
  int *in_EDX;
  
  if ((*in_EAX & 4) == 0) {
    *in_EDX = *in_EDX + 1;
    *in_EAX = *in_EAX | 4;
    iVar1 = in_EDX[1];
    in_EAX[0x69] = 0;
    in_EAX[0x6a] = 0;
    *(short *)(in_EAX + 0x67) = (short)iVar1;
    if (in_EDX[1] != 0) {
      *(undefined2 *)((&DAT_001ae9fc)[in_EDX[1]] + 0x69) = *(undefined2 *)(in_EAX + 0x1b);
    }
    in_EDX[1] = (uint)*(ushort *)(in_EAX + 0x1b);
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("structs.cpp", line 460, "Thing is already in list") */
  return;
}

/******************************************************************************
 * Function : dk_list_has_structures_072de3 (Ghidra: FUN_00072de3)
 * Prototype: void dk_list_has_structures_072de3(void);
 * Address  : 0x72de3 (Size: 162 bytes)
 * Module   : structs.cpp [direct_file_string_xref]
 * OrigLine : structs.cpp:501 ("List has < 0 structures")
 * Naming   : String 'List has < 0 structures'
 * Callers  : 1 -> 0x72af4
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16793b: "structs.cpp"
 *   - 0x167923: "List has < 0 structures"
 ******************************************************************************/
void FUN_00072de3(void)

{
  byte *in_EAX;
  int *in_EDX;
  
  if ((*in_EAX & 4) != 0) {
    if ((uint)*(ushort *)(in_EAX + 0x1b) == in_EDX[1]) {
      in_EDX[1] = (uint)*(ushort *)(in_EAX + 0x67);
      if (*(short *)(in_EAX + 0x67) != 0) {
        *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x67)] + 0x69) = 0;
      }
      in_EAX[0x67] = 0;
      in_EAX[0x68] = 0;
      in_EAX[0x69] = 0;
      in_EAX[0x6a] = 0;
    }
    else {
      if (*(short *)(in_EAX + 0x69) != 0) {
        *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x69)] + 0x67) =
             *(undefined2 *)(in_EAX + 0x67);
      }
      if (*(short *)(in_EAX + 0x67) != 0) {
        *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x67)] + 0x69) =
             *(undefined2 *)(in_EAX + 0x69);
      }
      in_EAX[0x69] = 0;
      in_EAX[0x6a] = 0;
      in_EAX[0x67] = 0;
      in_EAX[0x68] = 0;
    }
    *in_EAX = *in_EAX & 0xfb;
    *in_EDX = *in_EDX + -1;
    if (*in_EDX < 0) {
      FUN_000ddaf0(); /* LbErrorLog("structs.cpp", line 501, "List has < 0 structures") */
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_072e88 (Ghidra: FUN_00072e88)
 * Prototype: undefined8 sub_072e88(void);
 * Address  : 0x72e88 (Size: 35 bytes)
 * Module   : structs.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x73038
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00072e88(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  (&DAT_002e0e3d)[(uint)*(byte *)(in_EAX + 0x1a) + *(char *)(in_EAX + 6) * 0x1508] =
       (&DAT_002e0e3d)[(uint)*(byte *)(in_EAX + 0x1a) + *(char *)(in_EAX + 6) * 0x1508] + '\x01';
  return CONCAT44(in_EDX,1);
}

