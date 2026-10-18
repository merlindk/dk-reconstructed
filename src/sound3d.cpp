/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: sound3d.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 28
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_06f6ca (Ghidra: FUN_0006f6ca)
 * Prototype: bool sub_06f6ca(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4);
 * Address  : 0x6f6ca (Size: 48 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x6faa0
 ******************************************************************************/
bool FUN_0006f6ca(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0006faa0(param_1,param_2,(int)param_3,param_4,0);
  return iVar1 != 0;
}

/******************************************************************************
 * Function : sub_06f72b (Ghidra: FUN_0006f72b)
 * Prototype: undefined4 sub_06f72b(void);
 * Address  : 0x6f72b (Size: 135 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x6e5ee, 0x6e61e, 0x6ee65, 0xde6a8, 0xe3a8c
 * Callees  : 2 -> 0x6e09b, 0x701e3
 ******************************************************************************/
undefined4 FUN_0006f72b(void)

{
  int in_EAX;
  int iVar1;
  byte bVar2;
  int in_EDX;
  uint unaff_EBX;
  
  bVar2 = 0;
  while( true ) {
    if (DAT_00376554 <= (int)(uint)bVar2) {
      return 1;
    }
    iVar1 = (uint)bVar2 * 0x25;
    if (((((&DAT_0037709e)[iVar1] != '\0') &&
         (*(undefined **)((int)&DAT_00377094 + iVar1) == &DAT_0037656e + in_EAX * 0x16)) &&
        (in_EDX == *(short *)((int)&DAT_00377087 + iVar1))) &&
       (unaff_EBX == (byte)(&DAT_00377089)[iVar1])) break;
    bVar2 = bVar2 + 1;
  }
  (&DAT_0037709e)[iVar1] = 0;
  FUN_000701e3();
  FUN_0006e09b();
  return 1;
}

/******************************************************************************
 * Function : sub_06f816 (Ghidra: FUN_0006f816)
 * Prototype: undefined4 sub_06f816(void);
 * Address  : 0x6f816 (Size: 25 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f4c8, 0xde6a8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006f816(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 unaff_BX;
  
  DAT_0037706e = in_AX;
  DAT_00377070 = in_DX;
  DAT_00377072 = unaff_BX;
  return 1;
}

/******************************************************************************
 * Function : sub_06f82f (Ghidra: FUN_0006f82f)
 * Prototype: undefined4 sub_06f82f(void);
 * Address  : 0x6f82f (Size: 42 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f4c8, 0xde6a8
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006f82f(void)

{
  ushort in_AX;
  ushort in_DX;
  ushort unaff_BX;
  
  _DAT_00377074 = in_AX & 0x7ff;
  _DAT_00377076 = in_DX & 0x7ff;
  _DAT_00377078 = unaff_BX & 0x7ff;
  return 1;
}

/******************************************************************************
 * Function : sub_06f859 (Ghidra: FUN_0006f859)
 * Prototype: void sub_06f859(void);
 * Address  : 0x6f859 (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f4c8, 0x784ae
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0006f859(void)

{
  undefined4 in_EAX;
  
  DAT_003772cf = in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_06f85f (Ghidra: FUN_0006f85f)
 * Prototype: void sub_06f85f(void);
 * Address  : 0x6f85f (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f4c8
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006f85f(void)

{
  undefined4 in_EAX;
  
  _DAT_0037707a = in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_06f8f7 (Ghidra: FUN_0006f8f7)
 * Prototype: void sub_06f8f7(void);
 * Address  : 0x6f8f7 (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f4c8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0006f8f7(void)

{
  undefined1 in_AL;
  
  DAT_0037707e = in_AL;
  return;
}

/******************************************************************************
 * Function : sub_06f8fd (Ghidra: FUN_0006f8fd)
 * Prototype: undefined8 sub_06f8fd(void);
 * Address  : 0x6f8fd (Size: 62 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf4e20
 ******************************************************************************/
undefined8 FUN_0006f8fd(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  
  puVar2 = &DAT_0037707f;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < DAT_00376554; iVar4 = iVar4 + 1) {
    if (*(char *)((int)puVar2 + 0x1f) != '\0') {
      cVar1 = FUN_000f4e20();
      puVar2 = extraout_ECX;
      if (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
      }
    }
    puVar2 = (undefined4 *)((int)puVar2 + 0x25);
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_06f968 (Ghidra: FUN_0006f968)
 * Prototype: void sub_06f968(void);
 * Address  : 0x6f968 (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f4c8, 0x784ae
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0006f968(void)

{
  undefined4 in_EAX;
  
  DAT_00376550 = in_EAX;
  return;
}

/******************************************************************************
 * Function : dk_attempt_query_sample_06f98e (Ghidra: FUN_0006f98e)
 * Prototype: undefined8 dk_attempt_query_sample_06f98e(void);
 * Address  : 0x6f98e (Size: 274 bytes)
 * Module   : sound3d.cpp [direct_file_string_xref]
 * OrigLine : sound3d.cpp:565 ("Attempt to query invalid sample")
 * Naming   : String 'Attempt to query invalid sample'
 * Callers  : 2 -> 0x2dfac, 0xde6a8
 * Callees  : 8 -> 0x6fba3, 0x6fbd4, 0x6fca5, 0x6ff36, 0x7019c, 0x701c2, 0xddaf0, 0xf4e20
 * Strings  :
 *   - 0x167708: "sound3d.cpp"
 *   - 0x1676e8: "Attempt to query invalid sample"
 ******************************************************************************/
undefined8 FUN_0006f98e(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 in_EDX;
  int *piVar4;
  byte *pbVar5;
  int aiStack_2c [5];
  undefined1 local_18 [4];
  
  piVar4 = aiStack_2c + 2;
  FUN_000701c2();
  puVar3 = &DAT_0037707f;
  aiStack_2c[2] = 0;
  do {
    if (DAT_00376554 <= aiStack_2c[2]) {
      pbVar5 = &DAT_0037656e;
      for (aiStack_2c[2] = 1; pbVar5 = pbVar5 + 0x16, aiStack_2c[2] < DAT_001872b8;
          aiStack_2c[2] = aiStack_2c[2] + 1) {
        if (((*pbVar5 & 1) != 0) && ((*pbVar5 & 2) != 0)) {
          *(undefined4 *)((int)piVar4 + -4) = 0x6fa69;
          iVar2 = FUN_0006fba3();
          if (iVar2 == 0) {
            *pbVar5 = *pbVar5 ^ 2;
          }
          else {
            *(undefined1 **)((int)piVar4 + -4) = local_18;
            *(undefined4 *)((int)piVar4 + -8) = 0x6fa83;
            FUN_0006fbd4();
            *(undefined4 *)((int)piVar4 + -8) = 0x6fa93;
            FUN_0006fca5();
            piVar4 = (int *)((int)piVar4 + -4);
          }
        }
      }
      return CONCAT44(in_EDX,1);
    }
    if (*(char *)((int)puVar3 + 0x1f) != '\0') {
      if (*(int *)((int)puVar3 + 0x11) == 0) {
        FUN_000ddaf0(); /* LbErrorLog("sound3d.cpp", line 565, "Attempt to query invalid sample") */
        puVar3 = extraout_ECX_02;
      }
      else {
        cVar1 = FUN_000f4e20();
        if (cVar1 == '\0') {
          pbVar5 = (byte *)(*(int *)((int)extraout_ECX + 0x11) + 0x17);
          *pbVar5 = *pbVar5 & 0xfd;
          *(undefined1 *)((int)extraout_ECX + 0x1f) = 0;
        }
        else {
          pbVar5 = (byte *)(*(int *)((int)extraout_ECX + 0x11) + 0x17);
          *pbVar5 = *pbVar5 | 2;
        }
        puVar3 = extraout_ECX;
        if (*(int *)((int)extraout_ECX + 0x15) != 0) {
          if (*(short *)((int)extraout_ECX + 0xf) == 0) {
LAB_0006f9fa:
            FUN_0007019c();
            puVar3 = extraout_ECX_01;
          }
          else if ((*(byte *)(*(int *)((int)extraout_ECX + 0x15) + 1) & 8) == 0) {
            iVar2 = FUN_0006ff36();
            puVar3 = extraout_ECX_00;
            if (DAT_001872b4 < iVar2) goto LAB_0006f9fa;
          }
        }
      }
    }
    aiStack_2c[2] = aiStack_2c[2] + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 0x25);
  } while( true );
}

/******************************************************************************
 * Function : sub_06faa0 (Ghidra: FUN_0006faa0)
 * Prototype: undefined4 sub_06faa0(int param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5);
 * Address  : 0x6faa0 (Size: 267 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6f5e5, 0x6f6ca, 0x6f6fa
 * Callees  : 5 -> 0x6e159, 0x6e253, 0x6fbd4, 0x700ec, 0x701e3
 ******************************************************************************/
undefined4
FUN_0006faa0(int param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  byte *in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  undefined2 in_DX;
  int iVar6;
  undefined1 unaff_BL;
  int local_28;
  undefined2 local_24;
  undefined1 local_20 [4];
  
  FUN_0006fbd4(local_20);
  iVar6 = local_28 * param_1 >> 0x1f;
  cVar1 = FUN_000700ec(param_5);
  if (cVar1 < 0) {
    uVar5 = 0;
  }
  else {
    iVar3 = cVar1 * 0x25;
    FUN_000701e3(in_ECX,(int)param_2,param_3,unaff_BL);
    iVar4 = FUN_0006e159();
    uVar5 = 0;
    if (iVar4 != 0) {
      *(byte **)((int)&DAT_00377094 + iVar3) = in_EAX;
      *(undefined4 *)((int)&DAT_0037707f + iVar3) = param_5;
      *(undefined2 *)((int)&DAT_00377087 + iVar3) = in_DX;
      (&DAT_00377089)[iVar3] = unaff_BL;
      (&DAT_0037709c)[iVar3] = param_2;
      *(short *)(&DAT_0037708e + iVar3) =
           (short)((local_28 * param_1 + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0) >> 8);
      (&DAT_0037709e)[iVar3] = 1;
      *(undefined4 *)((int)&DAT_00377083 + iVar3) = 0;
      *(undefined2 *)(&DAT_0037708c + iVar3) = local_24;
      *(int *)((int)&DAT_00377090 + iVar3) = iVar4;
      *(short *)((int)&DAT_0037708a + iVar3) = (short)in_ECX;
      (&DAT_0037709d)[iVar3] = param_4;
      *(uint *)(&DAT_00377098 + iVar3) = (uint)*(ushort *)(in_EAX + 2);
      uVar2 = FUN_0006e253();
      (&DAT_0037709f)[iVar3] = uVar2;
      *(int *)((int)&DAT_003770a0 + iVar3) = param_1;
      uVar5 = 1;
      *in_EAX = *in_EAX | 2;
    }
  }
  return uVar5;
}

/******************************************************************************
 * Function : sub_06fba3 (Ghidra: FUN_0006fba3)
 * Prototype: longlong sub_06fba3(void);
 * Address  : 0x6fba3 (Size: 49 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f98e
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0006fba3(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint in_EDX;
  uint uVar2;
  
  puVar1 = &DAT_0037707f;
  uVar2 = 0;
  while( true ) {
    if (DAT_00376554 <= uVar2) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*(char *)((int)puVar1 + 0x1f) != '\0') && (in_EAX == *(int *)((int)puVar1 + 0x15))) break;
    uVar2 = uVar2 + 1;
    puVar1 = (undefined4 *)((int)puVar1 + 0x25);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06fbd4 (Ghidra: FUN_0006fbd4)
 * Prototype: undefined4 sub_06fbd4(undefined4 *param_1);
 * Address  : 0x6fbd4 (Size: 209 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f98e, 0x6faa0
 * Callees  : 4 -> 0x6fd5c, 0x6fd80, 0x6fda2, 0x6fe93
 ******************************************************************************/
undefined4 FUN_0006fbd4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar4;
  byte *in_EDX;
  undefined4 *unaff_EBX;
  
  if ((in_EDX[1] & 8) == 0) {
    iVar1 = FUN_0006fd80();
    if ((in_EDX[1] & 4) == 0) {
      iVar2 = FUN_0006fd5c();
      piVar4 = extraout_ECX_00;
    }
    else {
      iVar2 = 1;
      piVar4 = extraout_ECX;
    }
    iVar1 = iVar1 - DAT_00376550;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *piVar4 = (int)((0x7f - (iVar1 * 0x7f) / (DAT_001872b4 - DAT_00376550)) * (uint)DAT_0037707e) >>
              6;
    if (iVar2 == 0) {
      *piVar4 = *piVar4 >> 1;
    }
    if (iVar1 < 0x80) {
      *unaff_EBX = 0x40;
    }
    else {
      uVar3 = FUN_0006fda2();
      *unaff_EBX = uVar3;
    }
    if ((*in_EDX & 4) != 0) {
      uVar3 = FUN_0006fe93();
      *param_1 = uVar3;
      return 1;
    }
  }
  else {
    *in_ECX = 0x7f;
    *unaff_EBX = 0x40;
  }
  *param_1 = 100;
  return 1;
}

/******************************************************************************
 * Function : sub_06fca5 (Ghidra: FUN_0006fca5)
 * Prototype: undefined4 sub_06fca5(void);
 * Address  : 0x6fca5 (Size: 183 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f98e
 * Callees  : 4 -> 0x701e3, 0xf0790, 0xf5168, 0xf5228
 ******************************************************************************/
undefined4 FUN_0006fca5(void)

{
  int in_EAX;
  undefined4 *puVar1;
  byte local_10;
  
  puVar1 = &DAT_0037707f;
  for (local_10 = 0; (int)(uint)local_10 < DAT_00376554; local_10 = local_10 + 1) {
    if ((*(char *)((int)puVar1 + 0x1f) != '\0') && (in_EAX == *(int *)((int)puVar1 + 0x15))) {
      if ((*(byte *)((int)puVar1 + 0x1e) & 2) == 0) {
        FUN_000701e3();
        FUN_000f0790();
        FUN_000701e3();
        FUN_000f5168();
      }
      if ((*(byte *)((int)puVar1 + 0x1e) & 1) == 0) {
        FUN_000701e3();
        FUN_000f5228();
      }
    }
    puVar1 = (undefined4 *)((int)puVar1 + 0x25);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_06fd5c (Ghidra: FUN_0006fd5c)
 * Prototype: void sub_06fd5c(void);
 * Address  : 0x6fd5c (Size: 36 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6fbd4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0006fd5c(void)

{
  int in_EDX;
  
  (*DAT_003772cf)(*(undefined2 *)(in_EDX + 6),*(undefined2 *)(in_EDX + 8));
  return;
}

/******************************************************************************
 * Function : sub_06fd80 (Ghidra: FUN_0006fd80)
 * Prototype: longlong sub_06fd80(void);
 * Address  : 0x6fd80 (Size: 34 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6fbd4
 * Callees  : 1 -> 0x6ff36
 ******************************************************************************/
longlong FUN_0006fd80(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0006ff36();
  if ((int)uVar1 < 0) {
    return (ulonglong)uVar1 << 0x20;
  }
  uVar2 = uVar1;
  if ((int)(DAT_001872b4 - 1U) < (int)uVar1) {
    uVar2 = DAT_001872b4 - 1U;
  }
  return CONCAT44(uVar1,uVar2);
}

/******************************************************************************
 * Function : sub_06fda2 (Ghidra: FUN_0006fda2)
 * Prototype: int sub_06fda2(void);
 * Address  : 0x6fda2 (Size: 241 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6fbd4
 * Callees  : 4 -> 0x10c5f, 0x10c85, 0xe66ec, 0xe69fc
 ******************************************************************************/
int FUN_0006fda2(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_ECX_00;
  
  if ((*(byte *)(in_EAX + 0xc) & 1) != 0) {
    return 0x40;
  }
  iVar1 = FUN_000e69fc();
  iVar2 = FUN_000e69fc(extraout_ECX);
  if (iVar2 < iVar1) {
    iVar1 = *(int *)(&DAT_0017a4d0 + ((iVar2 << 8) / iVar1) * 8) * iVar1;
  }
  else {
    iVar3 = 0;
    if (iVar2 == 0) goto LAB_0006fe13;
    iVar1 = iVar2 * *(int *)(&DAT_0017a4d0 + ((iVar1 << 8) / iVar2) * 8);
  }
  iVar3 = iVar1 >> 0xd;
LAB_0006fe13:
  if (iVar3 < DAT_00376550) {
    return 0x40;
  }
  FUN_000e66ec();
  iVar1 = FUN_00010c5f();
  iVar2 = FUN_00010c85();
  iVar1 = (((&DAT_001927e0)[iVar2 * iVar1 & 0x7ff] * (extraout_ECX_00 - DAT_00376550) >> 0x10) << 6)
          / (DAT_001872b4 - DAT_00376550) + 0x40;
  if (-1 < iVar1) {
    if (0x7f < iVar1) {
      return 0x7f;
    }
    return iVar1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06fe93 (Ghidra: FUN_0006fe93)
 * Prototype: undefined1 sub_06fe93(void);
 * Address  : 0x6fe93 (Size: 163 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6fbd4
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0006fe93(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  undefined8 uVar4;
  
  FUN_000e69fc();
  FUN_000e69fc();
  uVar4 = FUN_000e69fc();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4;
  iVar2 = iVar1 - *(int *)(in_EDX + 0x10);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x100 < iVar2) {
    iVar2 = 0x100;
  }
  if (iVar2 < 1) {
    *(undefined1 *)(in_EDX + 0x15) = 100;
  }
  else {
    iVar3 = iVar2 * 0x14 >> 0x1f;
    *(char *)(in_EDX + 0x15) =
         'd' - (char)((iVar2 * 0x14 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
  }
  if (*(char *)(in_EDX + 0x14) != *(char *)(in_EDX + 0x15)) {
    *(byte *)(in_EDX + 0x14) =
         (char)((int)((uint)*(byte *)(in_EDX + 0x15) - (uint)*(byte *)(in_EDX + 0x14)) / 2) +
         *(byte *)(in_EDX + 0x14);
  }
  _DAT_003772d3 = _DAT_003772d3 + 0x10;
  *(int *)(in_EDX + 0x10) = iVar1;
  return *(undefined1 *)(in_EDX + 0x14);
}

/******************************************************************************
 * Function : sub_06ff36 (Ghidra: FUN_0006ff36)
 * Prototype: void sub_06ff36(void);
 * Address  : 0x6ff36 (Size: 73 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f98e, 0x6fd80
 * Callees  : 1 -> 0xe8cc8
 ******************************************************************************/
void FUN_0006ff36(void)

{
  undefined2 *in_EDX;
  
  FUN_000e8cc8(*in_EDX,in_EDX[2]);
  return;
}

/******************************************************************************
 * Function : sub_06ff7f (Ghidra: FUN_0006ff7f)
 * Prototype: undefined8 sub_06ff7f(void);
 * Address  : 0x6ff7f (Size: 90 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f653
 * Callees  : 2 -> 0x6e09b, 0x701e3
 ******************************************************************************/
undefined8 FUN_0006ff7f(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  byte local_18;
  
  for (local_18 = 0; (int)(uint)local_18 < DAT_00376554; local_18 = local_18 + 1) {
    iVar1 = (uint)local_18 * 0x25;
    if (((&DAT_0037709e)[iVar1] != '\0') && (in_EAX == *(int *)((int)&DAT_00377094 + iVar1))) {
      FUN_000701e3();
      FUN_0006e09b();
      (&DAT_0037709e)[extraout_ECX] = 0;
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06ffd9 (Ghidra: FUN_0006ffd9)
 * Prototype: undefined8 sub_06ffd9(void);
 * Address  : 0x6ffd9 (Size: 119 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f671
 * Callees  : 2 -> 0x6e09b, 0x701e3
 ******************************************************************************/
undefined8 FUN_0006ffd9(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  byte local_18;
  
  for (local_18 = 0; (int)(uint)local_18 < DAT_00376554; local_18 = local_18 + 1) {
    iVar1 = (uint)local_18 * 0x25;
    if (((&DAT_0037709e)[iVar1] != '\0') && (in_EAX == *(int *)((int)&DAT_00377094 + iVar1))) {
      if ((&DAT_0037709c)[iVar1] == -1) {
        FUN_000701e3();
        FUN_0006e09b();
        (&DAT_0037709e)[extraout_ECX] = 0;
      }
      *(undefined4 *)((int)&DAT_00377094 + (uint)local_18 * 0x25) = 0;
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_070050 (Ghidra: FUN_00070050)
 * Prototype: longlong sub_070050(void);
 * Address  : 0x70050 (Size: 48 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f5e5
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00070050(void)

{
  byte *pbVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 1;
  pbVar1 = &DAT_00376584;
  while( true ) {
    if (DAT_001872b8 <= iVar2) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*pbVar1 & 1) == 0) break;
    pbVar1 = pbVar1 + 0x16;
    iVar2 = iVar2 + 1;
  }
  *pbVar1 = 1;
  *(short *)(pbVar1 + 2) = (short)iVar2;
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_070080 (Ghidra: FUN_00070080)
 * Prototype: void sub_070080(void);
 * Address  : 0x70080 (Size: 32 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6f5e5, 0x6f653, 0x700a0
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00070080(void)

{
  int in_EAX;
  
  if ((&DAT_0037656e + in_EAX * 0x16 != (byte *)0x0) && (((&DAT_0037656e)[in_EAX * 0x16] & 1) != 0))
  {
    FUN_000e6a10();
  }
  return;
}

/******************************************************************************
 * Function : sub_0700a0 (Ghidra: FUN_000700a0)
 * Prototype: void sub_0700a0(void);
 * Address  : 0x700a0 (Size: 24 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f4c8
 * Callees  : 1 -> 0x70080
 ******************************************************************************/
void FUN_000700a0(void)

{
  int extraout_EDX;
  
  do {
    FUN_00070080();
  } while (extraout_EDX < 0x80);
  return;
}

/******************************************************************************
 * Function : sub_0700b8 (Ghidra: FUN_000700b8)
 * Prototype: void sub_0700b8(void);
 * Address  : 0x700b8 (Size: 52 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f4c8
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_000700b8(void)

{
  undefined1 local_14;
  
  local_14 = 0;
  while (local_14 < 0x10) {
    local_14 = local_14 + 1;
    FUN_000e6a10();
  }
  return;
}

/******************************************************************************
 * Function : sub_0700ec (Ghidra: FUN_000700ec)
 * Prototype: char sub_0700ec(int param_1);
 * Address  : 0x700ec (Size: 176 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6faa0
 * Callees  : 1 -> 0x7019c
 ******************************************************************************/
char FUN_000700ec(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  char cVar4;
  uint in_EDX;
  int unaff_EBX;
  char local_c;
  
  iVar3 = 0x7fffffff;
  local_c = '\x10';
  if ((in_ECX == 2) || (in_ECX == 3)) {
    puVar1 = &DAT_0037707f;
    for (cVar4 = '\0'; cVar4 < DAT_00376554; cVar4 = cVar4 + '\x01') {
      if ((((*(char *)((int)puVar1 + 0x1f) != '\0') && (*(int *)((int)puVar1 + 0x15) != 0)) &&
          (*(short *)(*(int *)((int)puVar1 + 0x15) + 2) == *(short *)(unaff_EBX + 2))) &&
         ((*(short *)(puVar1 + 2) == in_EAX && (*(byte *)((int)puVar1 + 10) == in_EDX)))) {
        return cVar4;
      }
      puVar1 = (undefined4 *)((int)puVar1 + 0x25);
    }
  }
  piVar2 = &DAT_0037707f;
  for (cVar4 = '\0'; cVar4 < DAT_00376554; cVar4 = cVar4 + '\x01') {
    if (*(char *)((int)piVar2 + 0x1f) == '\0') {
      return cVar4;
    }
    if (*piVar2 < iVar3) {
      iVar3 = *piVar2;
      local_c = cVar4;
    }
    piVar2 = (int *)((int)piVar2 + 0x25);
  }
  if ((iVar3 <= param_1) && (iVar3 < param_1)) {
    FUN_0007019c();
    return local_c;
  }
  return -1;
}

/******************************************************************************
 * Function : sub_07019c (Ghidra: FUN_0007019c)
 * Prototype: void sub_07019c(void);
 * Address  : 0x7019c (Size: 38 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6f98e, 0x700ec
 * Callees  : 2 -> 0x6e09b, 0x701ed
 ******************************************************************************/
void FUN_0007019c(void)

{
  char in_AL;
  
  (&DAT_0037709e)[in_AL * 0x25] = 0;
  FUN_000701ed();
  FUN_0006e09b();
  return;
}

/******************************************************************************
 * Function : sub_0701c2 (Ghidra: FUN_000701c2)
 * Prototype: void sub_0701c2(void);
 * Address  : 0x701c2 (Size: 33 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6f98e
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000701c2(void)

{
  undefined4 *puVar1;
  byte bVar2;
  
  puVar1 = &DAT_0037707f;
  for (bVar2 = 0; (int)(uint)bVar2 < DAT_00376554; bVar2 = bVar2 + 1) {
    puVar1[1] = puVar1[1] + 1;
    puVar1 = (undefined4 *)((int)puVar1 + 0x25);
  }
  return;
}

