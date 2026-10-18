/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: script.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_06809c (Ghidra: FUN_0006809c)
 * Prototype: void sub_06809c(void);
 * Address  : 0x6809c (Size: 552 bytes)
 * Module   : script.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 8 -> 0x68340, 0x68873, 0x688a4, 0x689a7, 0x68ab1, 0x68ac4, 0x68ad7, 0x68b37
 ******************************************************************************/
void FUN_0006809c(void)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  uint auStack_2c [4];
  undefined *local_1c;
  
  puVar2 = auStack_2c + 3;
  if (((DAT_0019d0b6 & 1) != 0) || ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\0')) {
    FUN_00068b37();
    pbVar6 = &DAT_002ebd76;
    for (iVar7 = 0; iVar7 < DAT_002ebfe6; iVar7 = iVar7 + 1) {
      if (((*pbVar6 & 2) == 0) &&
         (((char)pbVar6[1] == -1 || (((&DAT_002ec3f0)[(char)pbVar6[1] * 0xc] & 1) != 0)))) {
        if ((char)pbVar6[2] < 1) {
          auStack_2c[3] = *(uint *)(pbVar6 + 4);
          local_1c = &DAT_002ec632 + (char)pbVar6[2] * -0xd0;
          *(undefined4 *)((int)puVar2 + -4) = 0x68105;
          FUN_000688a4();
        }
        else {
          *(uint *)((int)puVar2 + -4) = (uint)pbVar6[8];
          *(uint *)((int)puVar2 + -8) = (uint)*(ushort *)(pbVar6 + 9);
          *(undefined4 *)((int)puVar2 + -0xc) = 0x6815b;
          FUN_00068873();
          puVar2 = (uint *)((int)puVar2 + -8);
        }
        if ((*pbVar6 & 1) == 0) {
          *pbVar6 = *pbVar6 | 2;
        }
      }
      pbVar6 = pbVar6 + 0xd;
    }
    pbVar6 = &DAT_002ebc52;
    puVar4 = (undefined1 *)puVar2;
    for (iVar7 = 0; iVar7 < DAT_002ebd72; iVar7 = iVar7 + 1) {
      puVar3 = puVar4;
      if (((*pbVar6 & 2) == 0) &&
         (((char)pbVar6[1] == -1 || (((&DAT_002ec3f0)[(char)pbVar6[1] * 0xc] & 1) != 0)))) {
        if (pbVar6[0x11] == 0) {
          *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(pbVar6 + 0xc);
          puVar3 = puVar4 + -8;
          *(uint *)(puVar4 + -8) = (uint)pbVar6[0x10];
          *(undefined4 *)(puVar4 + -0xc) = 0x68181;
          FUN_000689a7();
        }
        else {
          *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(pbVar6 + 0xc);
          *(uint *)(puVar4 + -8) = (uint)pbVar6[0x10];
          puVar3 = puVar4 + -0xc;
          *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(pbVar6 + 8);
          *(undefined4 *)(puVar4 + -0x10) = 0x681db;
          FUN_00068ad7();
        }
        if ((*pbVar6 & 1) == 0) {
          *pbVar6 = *pbVar6 | 2;
        }
      }
      pbVar6 = pbVar6 + 0x12;
      puVar4 = puVar3;
    }
    pbVar6 = &DAT_002ebfea;
    for (iVar7 = 0; iVar7 < DAT_002ec3ea; iVar7 = iVar7 + 1) {
      if (((*pbVar6 & 2) == 0) &&
         (((char)pbVar6[1] == -1 || (((&DAT_002ec3f0)[(char)pbVar6[1] * 0xc] & 1) != 0)))) {
        puVar5 = puVar4 + -4;
        *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(pbVar6 + 0xc);
        *(undefined4 *)(puVar4 + -8) = 0x68228;
        FUN_00068340();
        puVar4 = puVar4 + -4;
        if ((*pbVar6 & 1) == 0) {
          *pbVar6 = *pbVar6 | 2;
          puVar4 = puVar5;
        }
      }
      pbVar6 = pbVar6 + 0x10;
    }
    if ((DAT_0019d0b6 & 1) == 0) {
      iVar7 = 0;
      for (iVar1 = 0; iVar1 < DAT_002ed33e; iVar1 = iVar1 + 1) {
        if (((&DAT_002ec3f0)[*(short *)((int)&DAT_002ed336 + iVar7) * 0xc] & 1) != 0) {
          *(undefined4 *)(puVar4 + -4) = 0x6827c;
          FUN_00068ab1();
          iVar7 = extraout_EDX;
        }
        iVar7 = iVar7 + 2;
      }
      iVar7 = 0;
      for (iVar1 = 0; iVar1 < DAT_002ed34a; iVar1 = iVar1 + 1) {
        if (((&DAT_002ec3f0)[*(short *)((int)&DAT_002ed342 + iVar7) * 0xc] & 1) != 0) {
          *(undefined4 *)(puVar4 + -4) = 0x682bb;
          FUN_00068ac4();
          iVar7 = extraout_EDX_00;
        }
        iVar7 = iVar7 + 2;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0682c4 (Ghidra: FUN_000682c4)
 * Prototype: void sub_0682c4(void);
 * Address  : 0x682c4 (Size: 123 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000682c4(void)

{
  char *pcVar1;
  code cVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  undefined3 uVar5;
  int in_ECX;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char cVar10;
  char cVar11;
  int in_EDX;
  char cVar13;
  int unaff_EBX;
  char *pcVar12;
  int unaff_EBP;
  int *unaff_ESI;
  byte *unaff_EDI;
  code *pcVar14;
  char cVar9;
  
  pcVar12 = (char *)(unaff_EBX + 1);
  iVar6 = in_ECX + 1;
  uVar4 = in_EAX + 1U ^ 0x21222e33;
  *unaff_EDI = *unaff_EDI | (char)uVar4 - 0x16U;
  LOCK();
  iVar8 = *unaff_ESI;
  *unaff_ESI = uVar4 + 0x77eeeeee;
  UNLOCK();
  pcVar1 = (char *)(unaff_EBX + -0x7c5afff9 + iVar8 * 4);
  *pcVar1 = *pcVar1 + (char)iVar6;
  cVar11 = (char)((uint)in_EDX >> 8);
  *(char *)(unaff_EBX + 0x11000684) = *(char *)(unaff_EBX + 0x11000684) + cVar11;
  cVar10 = (char)((uint)iVar6 >> 8);
  unaff_EDI[-0x7c] = unaff_EDI[-0x7c] + cVar10;
  cVar9 = cVar10 + (char)iVar8;
  pcVar7 = (char *)CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(cVar9,(char)iVar6 + cVar10));
  *(char *)unaff_ESI = (char)*unaff_ESI + (char)((uint)iVar8 >> 8);
  LOCK();
  cVar10 = (char)*unaff_ESI;
  *(char *)unaff_ESI = (char)iVar8;
  uVar5 = (undefined3)((uint)iVar8 >> 8);
  UNLOCK();
  *(char *)(unaff_EBX + -0x79) = *(char *)(unaff_EBX + -0x79) + cVar10;
  pcVar7[-0x7a] = pcVar7[-0x7a] + (char)in_EDX;
  *(char *)(in_EDX + -0x7b) = *(char *)(in_EDX + -0x7b) + cVar9;
  pcVar7[-0x57fff97a] = pcVar7[-0x57fff97a] + cVar10;
  LOCK();
  iVar8 = *unaff_ESI;
  *(char *)unaff_ESI = cVar10;
  UNLOCK();
  pcVar1 = (char *)(CONCAT31(uVar5,(char)iVar8) + -0x35fff97a);
  cVar13 = (char)((uint)pcVar12 >> 8);
  *pcVar1 = *pcVar1 + cVar13;
  LOCK();
  iVar6 = *unaff_ESI;
  *(char *)unaff_ESI = (char)iVar8;
  UNLOCK();
  unaff_EDI[-0x79] = unaff_EDI[-0x79] + cVar11;
  cVar10 = (char)in_EDX + (char)pcVar12;
  LOCK();
  iVar3 = *unaff_ESI;
  *(char *)unaff_ESI = (char)iVar6;
  UNLOCK();
  *pcVar7 = *pcVar7 + cVar10;
  LOCK();
  iVar8 = *unaff_ESI;
  *unaff_ESI = CONCAT31(uVar5,(char)iVar3);
  UNLOCK();
  DAT_28000687 = DAT_28000687 + (char)pcVar12;
  LOCK();
  iVar6 = *unaff_ESI;
  *unaff_ESI = iVar8;
  UNLOCK();
  *pcVar12 = *pcVar12 + cVar11;
  LOCK();
  iVar8 = *unaff_ESI;
  *unaff_ESI = iVar6;
  UNLOCK();
  *(char *)unaff_ESI = (char)*unaff_ESI + cVar13;
  LOCK();
  iVar6 = *unaff_ESI;
  *unaff_ESI = iVar8;
  UNLOCK();
  *(char *)((int)unaff_ESI + -0x79) = *(char *)((int)unaff_ESI + -0x79) + cVar10;
  *(char *)(unaff_EBP + -0x79) = *(char *)(unaff_EBP + -0x79) + cVar9;
  *(char *)((int)unaff_ESI + 0x57) = *(char *)((int)unaff_ESI + 0x57) + cVar10;
  if (0x43 < iVar6 - 8U) {
    return;
  }
  iVar8 = 0x19;
  pcVar14 = FUN_000682c4;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (SUB41(iVar6 - 8U,0) != cVar2);
                    /* WARNING: Could not recover jumptable at 0x00068384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar8 * 4 + 0x682dc))(pcVar7,pcVar12);
  return;
}

/******************************************************************************
 * Function : sub_068340 (Ghidra: FUN_00068340)
 * Prototype: void sub_068340(void);
 * Address  : 0x68340 (Size: 82 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6809c, 0x79eb1
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00068340(void)

{
  code cVar1;
  int in_EAX;
  int iVar2;
  code *pcVar3;
  
  if (0x43 < in_EAX - 8U) {
    return;
  }
  iVar2 = 0x19;
  pcVar3 = FUN_000682c4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (SUB41(in_EAX - 8U,0) != cVar1);
                    /* WARNING: Could not recover jumptable at 0x00068384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x682dc))();
  return;
}

/******************************************************************************
 * Function : sub_068788 (Ghidra: FUN_00068788)
 * Prototype: uint sub_068788(void);
 * Address  : 0x68788 (Size: 235 bytes)
 * Module   : script.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x68873, 0x688a4
 * Callees  : 7 -> 0x24998, 0x64b0c, 0x69268, 0x694d4, 0x6972c, 0x8240c, 0xb2440
 ******************************************************************************/
uint FUN_00068788(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 in_ECX;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int unaff_EBX;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_14;
  char local_10 [4];
  
  pcVar3 = local_10;
  if (unaff_EBX < -1000) {
    pcVar3 = (char *)&uStack_14;
    uStack_14 = 1;
    uVar2 = FUN_000694d4();
  }
  else {
    if (unaff_EBX < 0) {
      uStack_14 = 1;
      uVar2 = FUN_00069268();
      uVar2 = (&DAT_001ae9fc)[uVar2 & 0xffff];
      puVar4 = &uStack_14;
      if ((DAT_001ae9fc < uVar2) && (puVar4 = &uStack_14, local_10[0] == DAT_002eb542)) {
        uVar1 = FUN_000b2440();
        *(undefined2 *)(extraout_ECX + 0x11) = uVar1;
        FUN_00024998();
        FUN_00064b0c();
        *(byte *)(extraout_ECX_00 + 0x4f) = *(byte *)(extraout_ECX_00 + 0x4f) | 1;
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x282) = 0x18;
        uVar2 = extraout_ECX_00;
        puVar4 = &uStack_14;
      }
      goto LAB_00068857;
    }
    uStack_14 = 0x6884d;
    uVar2 = FUN_0006972c();
  }
  uVar2 = (&DAT_001ae9fc)[uVar2 & 0xffff];
  puVar4 = (undefined4 *)pcVar3;
LAB_00068857:
  if (DAT_001ae9fc < uVar2) {
    *(undefined4 *)(uVar2 + 0x13) = in_ECX;
    *(undefined4 *)((int)puVar4 + -4) = 0x6886c;
    FUN_0008240c();
    uVar2 = extraout_ECX_01;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_068873 (Ghidra: FUN_00068873)
 * Prototype: void sub_068873(undefined4 param_1,undefined4 param_2);
 * Address  : 0x68873 (Size: 49 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6809c, 0x79b68
 * Callees  : 1 -> 0x68788
 ******************************************************************************/
void FUN_00068873(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 *puVar1;
  undefined4 auStack_1c [2];
  undefined1 local_14 [8];
  
  puVar1 = local_14;
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    *(undefined4 *)(puVar1 + -4) = param_2;
    *(undefined4 *)(puVar1 + -8) = 0x68899;
    FUN_00068788();
    puVar1 = puVar1 + -4;
  }
  return;
}

/******************************************************************************
 * Function : dk_party_big_0688a4 (Ghidra: FUN_000688a4)
 * Prototype: int dk_party_big_0688a4(void);
 * Address  : 0x688a4 (Size: 243 bytes)
 * Module   : script.cpp [direct_file_string_xref]
 * OrigLine : script.cpp:551 ("Party too big")
 * Naming   : String 'Party too big'
 * Callers  : 3 -> 0x6809c, 0x68ad7, 0x798e3
 * Callees  : 5 -> 0x39a74, 0x39ba4, 0x39e36, 0x68788, 0xddaf0
 * Strings  :
 *   - 0x166cae: "script.cpp"
 *   - 0x166ca0: "Party too big"
 ******************************************************************************/
int FUN_000688a4(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  int iVar2;
  int extraout_ECX_00;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint auStack_30 [5];
  int local_18;
  int local_14;
  
  puVar3 = auStack_30 + 3;
  local_18 = 0;
  auStack_30[3] = in_EAX;
  for (local_14 = in_ECX; local_14 != 0; local_14 = local_14 + -1) {
    if (*(int *)(auStack_30[3] + 0xcc) < 9) {
      uVar4 = auStack_30[3];
      iVar5 = 0;
      for (auStack_30[4] = 0; (int)auStack_30[4] < *(int *)(auStack_30[3] + 0xcc);
          auStack_30[4] = auStack_30[4] + 1) {
        *(uint *)((int)puVar3 + -4) = (uint)*(byte *)(uVar4 + 0x6c);
        *(undefined4 *)((int)puVar3 + -8) = 0x6892d;
        iVar1 = FUN_00068788();
        iVar2 = iVar1;
        if (iVar1 != 0) {
          *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 4) =
               *(undefined1 *)(uVar4 + 0x67);
          *(int *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 5) =
               DAT_002e8bee + *(int *)(uVar4 + 0x68);
          if (iVar5 != 0) {
            *(undefined4 *)((int)puVar3 + -8) = 0x68977;
            uVar6 = FUN_00039e36();
            if ((int)uVar6 < (int)((ulonglong)uVar6 >> 0x20)) {
              *(undefined4 *)((int)puVar3 + -8) = 0x68988;
              FUN_00039ba4();
              iVar2 = extraout_ECX_00;
              local_18 = iVar1;
            }
            else {
              *(undefined4 *)((int)puVar3 + -8) = 0x688fe;
              FUN_00039a74();
              iVar2 = extraout_ECX;
            }
          }
        }
        uVar4 = uVar4 + 0xd;
        puVar3 = (uint *)((int)puVar3 + -4);
        iVar5 = iVar2;
      }
    }
    else {
      *(undefined4 *)((int)puVar3 + -4) = 0x688ec;
      FUN_000ddaf0(); /* LbErrorLog("script.cpp", line 551, "Party too big") */
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : sub_0689a7 (Ghidra: FUN_000689a7)
 * Prototype: undefined4 sub_0689a7(undefined4 param_1,undefined4 param_2);
 * Address  : 0x689a7 (Size: 266 bytes)
 * Module   : script.cpp [direct_file_string_xref]
 * OrigLine : script.cpp:624 ("Invalid HEAD_FOR")
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6809c, 0x68ad7, 0x7a754
 * Callees  : 9 -> 0x69268, 0x694d4, 0x6972c, 0x698da, 0x6992a, 0x69987, 0x699e0, 0x8240c, 0xddaf0
 * Strings  :
 *   - 0x166cca: "script.cpp"
 *   - 0x166cb9: "Invalid HEAD_FOR"
 ******************************************************************************/
undefined4 FUN_000689a7(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int in_EDX;
  undefined1 unaff_BL;
  undefined4 *puVar2;
  undefined4 uStack_14;
  undefined1 local_10 [8];
  undefined1 local_8;
  
  puVar2 = (undefined4 *)local_10;
  local_8 = unaff_BL;
  if (in_EDX < -1000) {
    puVar2 = &uStack_14;
    uStack_14 = 1;
    iVar1 = FUN_000694d4();
  }
  else if (in_EDX < 0) {
    puVar2 = &uStack_14;
    uStack_14 = 1;
    iVar1 = FUN_00069268();
  }
  else {
    uStack_14 = 0x68a0b;
    iVar1 = FUN_0006972c();
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)((&DAT_001ae9fc)[iVar1] + 0x13) = param_2;
    *(undefined4 *)((int)puVar2 + -4) = 0x68a92;
    FUN_0008240c();
    switch(local_8) {
    case 1:
      *(undefined4 *)((int)puVar2 + -4) = 0x68a49;
      FUN_000699e0();
      iVar1 = extraout_ECX_01;
      break;
    case 2:
      *(undefined4 *)((int)puVar2 + -4) = 0x68a25;
      FUN_0006992a();
      iVar1 = extraout_ECX;
      break;
    case 3:
      *(undefined4 *)((int)puVar2 + -4) = 0x68a39;
      FUN_000698da();
      iVar1 = extraout_ECX_00;
      break;
    case 4:
      *(undefined4 *)((int)puVar2 + -4) = 0x68a56;
      FUN_00069987();
      iVar1 = extraout_ECX_02;
      break;
    default:
      *(undefined4 *)((int)puVar2 + -4) = 0x68a6c;
      FUN_000ddaf0(); /* LbErrorLog("script.cpp", line 624, "Invalid HEAD_FOR") */
      return 0;
    }
  }
  return (&DAT_001ae9fc)[iVar1];
}

/******************************************************************************
 * Function : sub_068ab1 (Ghidra: FUN_00068ab1)
 * Prototype: void sub_068ab1(void);
 * Address  : 0x68ab1 (Size: 19 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6809c
 * Callees  : 1 -> 0xdd500
 ******************************************************************************/
void FUN_00068ab1(void)

{
  FUN_000dd500();
  return;
}

/******************************************************************************
 * Function : sub_068ac4 (Ghidra: FUN_00068ac4)
 * Prototype: void sub_068ac4(void);
 * Address  : 0x68ac4 (Size: 19 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6809c
 * Callees  : 1 -> 0xdd6c8
 ******************************************************************************/
void FUN_00068ac4(void)

{
  FUN_000dd6c8();
  return;
}

/******************************************************************************
 * Function : sub_068ad7 (Ghidra: FUN_00068ad7)
 * Prototype: void sub_068ad7(undefined4 param_1,undefined1 param_2,undefined4 param_3);
 * Address  : 0x68ad7 (Size: 96 bytes)
 * Module   : script.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6809c, 0x7ad6f
 * Callees  : 3 -> 0x39ba4, 0x688a4, 0x689a7
 ******************************************************************************/
void FUN_00068ad7(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_000689a7(param_2,param_3);
  if (DAT_001ae9fc < uVar1) {
    uVar1 = FUN_000688a4();
    if (DAT_001ae9fc < uVar1) {
      FUN_00039ba4();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_068b37 (Ghidra: FUN_00068b37)
 * Prototype: void sub_068b37(void);
 * Address  : 0x68b37 (Size: 344 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6809c
 * Callees  : 4 -> 0x68ca7, 0x68d79, 0x6916d, 0x69220
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068b37(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  short *psVar4;
  uint uVar5;
  int local_1c;
  
  psVar4 = &DAT_002ec3ee;
  uVar5 = 0;
  do {
    if (_DAT_002ec62e <= (int)(uVar5 & 0xffff)) {
      return;
    }
    if ((*psVar4 == -1) ||
       ((iVar2 = *psVar4 * 0xc, ((&DAT_002ec3f0)[iVar2] & 1) != 0 &&
        (((&DAT_002ec3f0)[iVar2] & 4) == 0)))) {
      if (*(char *)((int)psVar4 + 3) == '\b') {
        if ((char)psVar4[2] == '\x13') {
          local_1c = 0;
          uVar3 = 0;
          while ((local_1c == 0 && ((uVar3 & 0xffff) < (uint)DAT_002eb542))) {
            local_1c = FUN_0006916d();
            uVar3 = extraout_ECX + 1;
          }
        }
        else {
          local_1c = 0;
          uVar3 = 0;
          while ((local_1c == 0 && ((uVar3 & 0xffff) < (uint)DAT_002eb542))) {
            FUN_00068d79();
            cVar1 = FUN_00068ca7(*(undefined1 *)((int)psVar4 + 7));
            local_1c = (int)cVar1;
            uVar3 = extraout_ECX_00 + 1;
          }
        }
        *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) & 0xfe;
        local_1c._0_1_ = (byte)local_1c & 1;
      }
      else {
        if ((char)psVar4[2] == '\x13') {
          local_1c._0_1_ = FUN_0006916d();
        }
        else {
          if ((char)psVar4[2] != 'B') {
            FUN_00068d79();
            local_1c._0_1_ = FUN_00068ca7();
            local_1c._0_1_ = (byte)local_1c & 1;
            *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) & 0xfe;
            goto LAB_00068c31;
          }
          local_1c._0_1_ = FUN_00069220();
        }
        local_1c._0_1_ = (byte)local_1c & 1;
        *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) & 0xfe;
      }
LAB_00068c31:
      *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) | (byte)local_1c;
      if (((*(byte *)(psVar4 + 1) & 1) == 0) || ((*(byte *)(psVar4 + 1) & 2) != 0)) {
        *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) & 0xfb;
      }
      else {
        *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) | 6;
      }
    }
    else {
      *(byte *)(psVar4 + 1) = *(byte *)(psVar4 + 1) & 0xfe;
    }
    uVar5 = uVar5 + 1;
    psVar4 = psVar4 + 6;
  } while( true );
}

/******************************************************************************
 * Function : sub_068ca7 (Ghidra: FUN_00068ca7)
 * Prototype: bool sub_068ca7(void);
 * Address  : 0x68ca7 (Size: 64 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x68b37
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00068ca7(void)

{
  undefined1 in_AL;
  int in_EDX;
  int unaff_EBX;
  
  switch(in_AL) {
  case 1:
    return in_EDX == unaff_EBX;
  case 2:
    return in_EDX != unaff_EBX;
  case 3:
    return in_EDX < unaff_EBX;
  case 4:
    return unaff_EBX < in_EDX;
  case 5:
    return in_EDX <= unaff_EBX;
  case 6:
    return unaff_EBX <= in_EDX;
  default:
    return false;
  }
}

/******************************************************************************
 * Function : sub_068cc0 (Ghidra: FUN_00068cc0)
 * Prototype: bool sub_068cc0(void);
 * Address  : 0x68cc0 (Size: 7 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00068cc0(void)

{
  int in_EAX;
  int unaff_EBX;
  
  return in_EAX == unaff_EBX;
}

