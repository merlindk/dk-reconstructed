/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: column.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_015318 (Ghidra: FUN_00015318)
 * Prototype: void sub_015318(void);
 * Address  : 0x15318 (Size: 50 bytes)
 * Module   : column.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x15386, 0x15603, 0x156de, 0x158a6, 0x2cdc8, 0x40f98, 0xb20e0, 0xb21f0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00015318(void)

{
  int in_EAX;
  int iVar1;
  short *psVar2;
  ushort uVar3;
  
  uVar3 = 1;
  iVar1 = 8;
  psVar2 = (short *)(in_EAX + 8);
  *(undefined2 *)(in_EAX + 3) = 0;
  do {
    if (*psVar2 != 0) {
      *(ushort *)(in_EAX + 3) = *(ushort *)(in_EAX + 3) | uVar3;
    }
    psVar2 = psVar2 + 1;
    uVar3 = uVar3 * 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

/******************************************************************************
 * Function : sub_01534a (Ghidra: FUN_0001534a)
 * Prototype: longlong sub_01534a(void);
 * Address  : 0x1534a (Size: 60 bytes)
 * Module   : column.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x15479, 0x2cdc8, 0x40f98
 * Callees  : 1 -> 0x1581c
 ******************************************************************************/
longlong FUN_0001534a(void)

{
  int iVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 1;
  while( true ) {
    if (0x7ff < iVar2) {
      return (ulonglong)in_EDX << 0x20;
    }
    iVar1 = FUN_0001581c();
    if (iVar1 != 0) break;
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : dk_could_create_column_none_015386 (Ghidra: FUN_00015386)
 * Prototype: undefined8 dk_could_create_column_none_015386(void);
 * Address  : 0x15386 (Size: 208 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp:95 ("Could not create column: None free")
 * Naming   : String 'Could not create column: None free'
 * Callers  : 3 -> 0x15479, 0x2cdc8, 0x40f98
 * Callees  : 3 -> 0x15318, 0x157ac, 0xddaf0
 * Strings  :
 *   - 0x160407: "column.cpp"
 *   - 0x1603e4: "Could not create column: None free"
 ******************************************************************************/
undefined8 FUN_00015386(void)

{
  byte bVar1;
  char cVar2;
  undefined4 *in_EAX;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  short *psVar6;
  int extraout_EDX;
  
  iVar5 = 1;
  psVar6 = (short *)&DAT_0019e98b;
  do {
    if (0x7ff < iVar5) {
      FUN_000ddaf0(); /* LbErrorLog("column.cpp", line 95, "Could not create column: None free") */
      uVar4 = 0;
LAB_0001544f:
      return CONCAT44(in_EDX,uVar4);
    }
    if ((*psVar6 == 0) && ((*(byte *)(psVar6 + 1) & 1) == 0)) {
      *(undefined4 *)psVar6 = *in_EAX;
      *(undefined4 *)(psVar6 + 2) = in_EAX[1];
      *(undefined4 *)(psVar6 + 4) = in_EAX[2];
      *(undefined4 *)(psVar6 + 6) = in_EAX[3];
      *(undefined4 *)(psVar6 + 8) = in_EAX[4];
      *(undefined4 *)(psVar6 + 10) = in_EAX[5];
      FUN_00015318();
      cVar2 = FUN_000157ac();
      *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf;
      *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) | cVar2 << 4;
      uVar3 = (uint)(*(byte *)(extraout_EDX + 2) >> 4);
      for (iVar5 = uVar3 * 2 + extraout_EDX; ((int)uVar3 < 8 && (*(short *)(iVar5 + 8) == 0));
          iVar5 = iVar5 + 2) {
        uVar3 = uVar3 + 1;
      }
      uVar4 = extraout_ECX;
      if ((int)uVar3 < 8) {
        iVar5 = extraout_EDX + 0xe;
        bVar1 = 0;
        do {
          if (*(short *)(iVar5 + 8) != 0) {
            *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf1;
            *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) | (bVar1 & 7) * '\x02';
          }
          iVar5 = iVar5 + -2;
          bVar1 = bVar1 + 1;
        } while (iVar5 != extraout_EDX);
      }
      else {
        *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf1;
      }
      goto LAB_0001544f;
    }
    iVar5 = iVar5 + 1;
    psVar6 = psVar6 + 0xc;
  } while( true );
}

/******************************************************************************
 * Function : sub_015456 (Ghidra: FUN_00015456)
 * Prototype: void sub_015456(void);
 * Address  : 0x15456 (Size: 35 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15502
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00015456(void)

{
  short in_AX;
  int iVar1;
  
  iVar1 = (int)in_AX;
  DAT_002e7beb = DAT_002e7beb + -1;
  (&DAT_0019e973)[iVar1 * 6] = DAT_0019e973;
  (&DAT_0019e977)[iVar1 * 6] = DAT_0019e977;
  (&DAT_0019e97b)[iVar1 * 6] = DAT_0019e97b;
  (&DAT_0019e97f)[iVar1 * 6] = DAT_0019e97f;
  (&DAT_0019e983)[iVar1 * 6] = DAT_0019e983;
  (&DAT_0019e987)[iVar1 * 6] = DAT_0019e987;
  return;
}

/******************************************************************************
 * Function : dk_allocate_column_015479 (Ghidra: FUN_00015479)
 * Prototype: void dk_allocate_column_015479(void);
 * Address  : 0x15479 (Size: 137 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp:117 ("Cannot allocate column")
 * Naming   : String 'Cannot allocate column'
 * Callers  : 3 -> 0x15603, 0x156de, 0x4c1e3
 * Callees  : 4 -> 0x1534a, 0x15386, 0x15502, 0xddaf0
 * Strings  :
 *   - 0x160429: "column.cpp"
 *   - 0x160412: "Cannot allocate column"
 ******************************************************************************/
void FUN_00015479(void)

{
  uint *puVar1;
  int iVar2;
  uint in_EDX;
  uint unaff_EBX;
  short local_14;
  
  FUN_00015502();
  local_14 = FUN_0001534a();
  if (local_14 == 0) {
    local_14 = FUN_00015386();
    if (local_14 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("column.cpp", line 117, "Cannot allocate column") */
    }
  }
  iVar2 = ((unaff_EBX & 0xffff) * 0x100 + (in_EDX & 0xffff)) * 5;
  *(undefined1 *)((int)&DAT_00279203 + iVar2 + 1) = 0;
  *(byte *)((int)&DAT_00279205 + iVar2) = *(byte *)((int)&DAT_00279205 + iVar2) & 0xf8;
  puVar1 = (uint *)((int)&DAT_00279203 + iVar2 + 1);
  *puVar1 = *puVar1 | (int)local_14 & 0x7ffU;
  *(short *)(&DAT_0019e973 + local_14 * 6) = *(short *)(&DAT_0019e973 + local_14 * 6) + 1;
  return;
}

/******************************************************************************
 * Function : sub_015502 (Ghidra: FUN_00015502)
 * Prototype: void sub_015502(void);
 * Address  : 0x15502 (Size: 95 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x15479, 0x15861
 * Callees  : 1 -> 0x15456
 ******************************************************************************/
void FUN_00015502(void)

{
  byte *pbVar1;
  uint in_EAX;
  short *psVar2;
  uint extraout_ECX;
  uint in_EDX;
  int iVar3;
  
  iVar3 = (int)(short)((ushort)*(undefined4 *)
                                ((int)&DAT_00279203 +
                                ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1) & 0x7ff);
  psVar2 = (short *)(&DAT_0019e973 + iVar3 * 6);
  *psVar2 = *psVar2 + -1;
  if (((*(byte *)((int)&DAT_0019e973 + iVar3 * 0x18 + 2) & 1) == 0) && (*psVar2 == 0)) {
    FUN_00015456();
    in_EDX = extraout_ECX;
  }
  iVar3 = ((in_EAX & 0xffff) + (in_EDX & 0xffff) * 0x100) * 5;
  *(undefined1 *)((int)&DAT_00279203 + iVar3 + 1) = 0;
  pbVar1 = (byte *)((int)&DAT_00279205 + iVar3);
  *pbVar1 = *pbVar1 & 0xf8;
  return;
}

/******************************************************************************
 * Function : sub_015561 (Ghidra: FUN_00015561)
 * Prototype: void sub_015561(void);
 * Address  : 0x15561 (Size: 162 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x15603
 ******************************************************************************/
void FUN_00015561(void)

{
  undefined2 in_DX;
  
  FUN_00015603(in_DX);
  return;
}

/******************************************************************************
 * Function : sub_015603 (Ghidra: FUN_00015603)
 * Prototype: void sub_015603(void);
 * Address  : 0x15603 (Size: 164 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp:184 ("BBlocks")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15561
 * Callees  : 3 -> 0x15318, 0x15479, 0xddaf0
 * Strings  :
 *   - 0x16043c: "column.cpp"
 *   - 0x160434: "BBlocks"
 ******************************************************************************/
void FUN_00015603(void)

{
  int in_EAX;
  byte in_CL;
  byte extraout_CL;
  uint in_EDX;
  uint unaff_EBX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 auStack_27e8 [2546];
  undefined2 local_1f;
  undefined4 auStack_1c [4];
  
  bVar5 = 0;
  if ((*(ushort *)((int)&DAT_00279203 + ((unaff_EBX & 0xffff) * 0x100 + (in_EDX & 0xffff)) * 5 + 1)
      & 0x7ff) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("column.cpp", line 184, "BBlocks") */
    in_CL = extraout_CL;
  }
  puVar1 = &DAT_0019e977 +
           (*(uint *)((int)&DAT_00279203 +
                     ((unaff_EBX & 0xffff) * 0x100 + (in_EDX & 0xffff)) * 5 + 1) & 0x7ff) * 6 +
           (uint)bVar5 * -2;
  puVar3 = auStack_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *(undefined4 *)(&stack0xffffffe0 + (uint)bVar5 * -8) = *puVar1;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar1 = puVar2 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar2;
  *puVar4 = *puVar1;
  puVar4[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar1 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  if (in_CL == 0) {
    local_1f = *(undefined2 *)((int)&DAT_001aa97b + in_EAX * 0x12);
  }
  else {
    if (8 < in_CL) {
      return;
    }
    *(short *)((int)auStack_1c + (uint)(byte)(in_CL - 1) * 2) = (short)in_EAX;
    FUN_00015318();
  }
  FUN_00015479();
  return;
}

/******************************************************************************
 * Function : sub_0156a7 (Ghidra: FUN_000156a7)
 * Prototype: void sub_0156a7(void);
 * Address  : 0x156a7 (Size: 55 bytes)
 * Module   : column.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x156de
 ******************************************************************************/
void FUN_000156a7(void)

{
  FUN_000156de();
  return;
}

/******************************************************************************
 * Function : sub_0156de (Ghidra: FUN_000156de)
 * Prototype: void sub_0156de(void);
 * Address  : 0x156de (Size: 206 bytes)
 * Module   : column.cpp [direct_file_string_xref]
 * OrigLine : column.cpp:245 ("BBlocks")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x156a7
 * Callees  : 3 -> 0x15318, 0x15479, 0xddaf0
 * Strings  :
 *   - 0x16044f: "column.cpp"
 *   - 0x160447: "BBlocks"
 ******************************************************************************/
void FUN_000156de(void)

{
  undefined4 uVar1;
  uint in_EAX;
  uint extraout_ECX;
  uint in_EDX;
  byte unaff_BL;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 auStackY_27ec [2545];
  undefined1 uStack_24;
  undefined2 local_23;
  undefined1 uStack_21;
  undefined4 auStack_20 [4];
  
  bVar7 = 0;
  if (unaff_BL == 0) {
    if ((*(ushort *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1) &
        0x7ff) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("column.cpp", line 245, "BBlocks") */
      in_EDX = extraout_ECX;
    }
    puVar2 = &DAT_0019e977 +
             (*(uint *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1
                       ) & 0x7ff) * 6 + (uint)bVar7 * -2;
    puVar5 = auStack_20 + (uint)bVar7 * -2 + (uint)bVar7 * -2;
    puVar3 = puVar2 + (uint)bVar7 * -2 + 1;
    *(undefined4 *)(&stack0xffffffdc + (uint)bVar7 * -8) = *puVar2;
    puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar2 = puVar3 + (uint)bVar7 * -2 + 1;
    *puVar5 = *puVar3;
    *puVar6 = *puVar2;
    puVar6[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    _uStack_24 = CONCAT21(1,uStack_24);
  }
  else {
    if (8 < unaff_BL) {
      return;
    }
    uVar4 = *(uint *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1)
            & 0x7ff;
    uVar1 = (&DAT_0019e973)[uVar4 * 6];
    _uStack_24 = (&DAT_0019e977)[uVar4 * 6];
    auStack_20[0] = (&DAT_0019e97b)[uVar4 * 6];
    auStack_20[1] = (&DAT_0019e97f)[uVar4 * 6];
    auStack_20[2] = (&DAT_0019e983)[uVar4 * 6];
    auStack_20[3] = (&DAT_0019e987)[uVar4 * 6];
    *(undefined2 *)((int)auStack_20 + (uint)(byte)(unaff_BL - 1) * 2) = 0;
    FUN_00015318(uVar1);
  }
  FUN_00015479();
  return;
}

/******************************************************************************
 * Function : sub_0157ac (Ghidra: FUN_000157ac)
 * Prototype: longlong sub_0157ac(void);
 * Address  : 0x157ac (Size: 56 bytes)
 * Module   : column.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x15386, 0x158a6, 0x29bfe, 0x2cb2b
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000157ac(void)

{
  int in_EAX;
  byte bVar1;
  uint in_EDX;
  uint uVar2;
  
  if (*(short *)(in_EAX + 3) == 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  bVar1 = 0;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (7 < uVar2) {
      return CONCAT44(in_EDX,8);
    }
    if (*(short *)(in_EAX + 8 + uVar2 * 2) == 0) break;
    bVar1 = bVar1 + 1;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0157e4 (Ghidra: FUN_000157e4)
 * Prototype: longlong sub_0157e4(void);
 * Address  : 0x157e4 (Size: 56 bytes)
 * Module   : column.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7cd3c
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0001580d) */

longlong FUN_000157e4(void)

{
  int in_EAX;
  byte bVar1;
  uint in_EDX;
  
  if (*(short *)(in_EAX + 3) != 0) {
    bVar1 = 7;
    while (*(short *)(in_EAX + 8 + (uint)bVar1 * 2) == 0) {
      bVar1 = bVar1 - 1;
    }
    return CONCAT44(in_EDX,bVar1 + 1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_01581c (Ghidra: FUN_0001581c)
 * Prototype: undefined4 sub_01581c(void);
 * Address  : 0x1581c (Size: 69 bytes)
 * Module   : column.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1534a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001581c(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  
  if (((*(short *)(in_EAX + 5) == *(short *)(in_EDX + 5)) &&
      (*(short *)(in_EAX + 3) == *(short *)(in_EDX + 3))) &&
     (*(char *)(in_EAX + 7) == *(char *)(in_EDX + 7))) {
    iVar1 = 0;
    while( true ) {
      if (7 < iVar1) {
        return 1;
      }
      if (*(short *)(in_EAX + 8) != *(short *)(in_EDX + 8)) break;
      in_EDX = in_EDX + 2;
      in_EAX = in_EAX + 2;
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}

