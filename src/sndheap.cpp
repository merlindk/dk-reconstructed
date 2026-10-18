/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: sndheap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_06ddd9 (Ghidra: FUN_0006ddd9)
 * Prototype: longlong sub_06ddd9(void);
 * Address  : 0x6ddd9 (Size: 42 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6da97, 0x6db51
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0006ddd9(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x21) == 0) &&
     (*(int *)(&DAT_002e0e11 + *(char *)(in_EAX + 6) * 0x1508) == 0)) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06de03 (Ghidra: FUN_0006de03)
 * Prototype: undefined8 sub_06de03(void);
 * Address  : 0x6de03 (Size: 7 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6de0a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0006de03(void)

{
  undefined4 unaff_retaddr;
  
  return CONCAT44(unaff_retaddr,1);
}

/******************************************************************************
 * Function : sub_06de0a (Ghidra: FUN_0006de0a)
 * Prototype: undefined4 sub_06de0a(void);
 * Address  : 0x6de0a (Size: 26 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x6de03
 ******************************************************************************/
undefined4 FUN_0006de0a(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if ((&DAT_002e9188)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') {
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 0x20;
    uVar1 = FUN_0006de03();
    return uVar1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_06deac (Ghidra: FUN_0006deac)
 * Prototype: undefined4 sub_06deac(undefined4 param_1);
 * Address  : 0x6deac (Size: 229 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6b16f
 * Callees  : 5 -> 0x3a8a8, 0x6df91, 0x6e3d5, 0xe6a10, 0xe8980
 ******************************************************************************/
undefined4 FUN_0006deac(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x6dec5;
  FUN_000e6a10();
  if (DAT_0018729c != -1) {
    uStack_18 = 0x6ded3;
    FUN_0006df91();
  }
  uStack_18 = 0x6dee0;
  DAT_0018729c = FUN_000e8980();
  if (DAT_0018729c != -1) {
    uStack_18 = param_1;
    uStack_1c = 0x6defb;
    iVar1 = FUN_0006e3d5();
    puVar3 = &uStack_18;
    if (iVar1 != 0) {
      iVar4 = in_EDX - iVar1;
      puVar3 = &uStack_18;
      DAT_00376529 = in_EAX;
      if (0 < iVar4) {
        if (DAT_001872a0 != -1) {
          uStack_1c = 0x6df27;
          FUN_0006df91();
        }
        uStack_1c = 0x6df34;
        DAT_001872a0 = FUN_000e8980();
        if (DAT_001872a0 == -1) {
          return 0;
        }
        uStack_1c = param_1;
        iVar2 = FUN_0006e3d5();
        puVar3 = &uStack_1c;
        if (((iVar2 != 0) &&
            (puVar3 = &uStack_1c, DAT_0037652d = in_EAX + iVar1,
            iVar4 != iVar2 && -1 < iVar4 - iVar2)) &&
           (DAT_0037651d = FUN_0003a8a8(), puVar3 = &uStack_1c, DAT_0037651d != 0)) {
          DAT_0037651c = 1;
          return 1;
        }
      }
    }
    *(undefined4 *)((int)puVar3 + -4) = 0x6df04;
    FUN_0006df91();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06df91 (Ghidra: FUN_0006df91)
 * Prototype: void sub_06df91(void);
 * Address  : 0x6df91 (Size: 66 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6b16f, 0x6deac
 * Callees  : 1 -> 0xe8a1c
 ******************************************************************************/
void FUN_0006df91(void)

{
  if (DAT_0018729c != -1) {
    FUN_000e8a1c();
    DAT_0018729c = -1;
  }
  if (DAT_001872a0 != -1) {
    FUN_000e8a1c();
    DAT_001872a0 = -1;
  }
  DAT_0037651c = 0;
  return;
}

/******************************************************************************
 * Function : sub_06dfd3 (Ghidra: FUN_0006dfd3)
 * Prototype: void sub_06dfd3(void);
 * Address  : 0x6dfd3 (Size: 200 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2dfac, 0x36ff4
 * Callees  : 3 -> 0xf27e8, 0xf27ee, 0xf4e20
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006dfd3(void)

{
  byte *pbVar1;
  short sVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *extraout_ECX;
  int iVar7;
  
  iVar6 = DAT_00376529;
  for (iVar7 = 0; iVar7 < _DAT_00376521; iVar7 = iVar7 + 1) {
    if (*(int *)(iVar6 + 0xc) != 0) {
      pbVar1 = (byte *)(*(int *)(iVar6 + 0xc) + 8);
      *pbVar1 = *pbVar1 & 0xf9;
    }
    iVar6 = iVar6 + 0x10;
  }
  if (DAT_0037651c != '\0') {
    iVar6 = DAT_0037652d;
    for (iVar7 = 0; iVar7 < DAT_00376525; iVar7 = iVar7 + 1) {
      if (*(int *)(iVar6 + 0xc) != 0) {
        pbVar1 = (byte *)(*(int *)(iVar6 + 0xc) + 8);
        *pbVar1 = *pbVar1 & 0xf9;
      }
      iVar6 = iVar6 + 0x10;
    }
  }
  piVar4 = (int *)FUN_000f27ee();
  for (piVar5 = (int *)FUN_000f27e8(); piVar5 <= piVar4; piVar5 = (int *)((int)piVar5 + 0x1d)) {
    if ((*piVar5 != 0) && ((*(byte *)((int)piVar5 + 0x17) & 1) != 0)) {
      cVar3 = FUN_000f4e20();
      piVar5 = extraout_ECX;
      if (cVar3 == '\0') {
        *(byte *)((int)extraout_ECX + 0x17) = *(byte *)((int)extraout_ECX + 0x17) & 0xfa;
      }
      else {
        if ((DAT_0037651c == '\0') || ((*(byte *)((int)extraout_ECX + 0x17) & 4) == 0)) {
          sVar2 = *(short *)((int)extraout_ECX + 0x12);
          iVar6 = DAT_00376529;
        }
        else {
          sVar2 = *(short *)((int)extraout_ECX + 0x12);
          iVar6 = DAT_0037652d;
        }
        iVar6 = iVar6 + sVar2 * 0x10;
        if (*(int *)(iVar6 + 0xc) != 0) {
          pbVar1 = (byte *)(*(int *)(iVar6 + 0xc) + 8);
          *pbVar1 = *pbVar1 | 6;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_trying_use_two_sound_06e09b (Ghidra: FUN_0006e09b)
 * Prototype: void dk_trying_use_two_sound_06e09b(void);
 * Address  : 0x6e09b (Size: 190 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp:254 ("Trying to use two sound banks when only one has been set up")
 * Naming   : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 5 -> 0x6f72b, 0x6f7b2, 0x6ff7f, 0x6ffd9, 0x7019c
 * Callees  : 5 -> 0xddaf0, 0xf0a54, 0xf27e8, 0xf27ee, 0xf4e20
 * Strings  :
 *   - 0x167498: "sndheap.cpp"
 *   - 0x16745c: "Trying to use two sound banks when only one has been set up"
 ******************************************************************************/
void FUN_0006e09b(void)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *extraout_ECX;
  int iVar6;
  short in_DX;
  char unaff_BL;
  
  if ((DAT_0037651c == '\0') && (unaff_BL != '\0')) {
    FUN_000ddaf0(); /* LbErrorLog("sndheap.cpp", line 254, "Trying to use two sound banks when only one has been set up") */
  }
  FUN_000f0a54();
  piVar4 = (int *)FUN_000f27ee();
  piVar5 = (int *)FUN_000f27e8();
  while ((piVar5 <= piVar4 &&
         ((((in_DX != *(short *)((int)piVar5 + 0x12) || (*piVar5 == 0)) ||
           ((*(byte *)((int)piVar5 + 0x17) & 1) == 0)) ||
          (((unaff_BL != '\0' && ((*(byte *)((int)piVar5 + 0x17) & 4) == 0)) ||
           (cVar3 = FUN_000f4e20(), piVar5 = extraout_ECX, cVar3 == '\0'))))))) {
    piVar5 = (int *)((int)piVar5 + 0x1d);
  }
  if (piVar4 <= piVar5) {
    if (unaff_BL == '\0') {
      iVar6 = DAT_00376529 + in_DX * 0x10;
      iVar2 = *(int *)(iVar6 + 0xc);
    }
    else {
      iVar6 = DAT_0037652d + in_DX * 0x10;
      iVar2 = *(int *)(iVar6 + 0xc);
    }
    if (iVar2 != 0) {
      pbVar1 = (byte *)(*(int *)(iVar6 + 0xc) + 8);
      *pbVar1 = *pbVar1 & 0xf9;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_trying_use_two_sound_06e159 (Ghidra: FUN_0006e159)
 * Prototype: int dk_trying_use_two_sound_06e159(undefined2 param_1,char param_2,undefined1 param_3,char param_4);
 * Address  : 0x6e159 (Size: 250 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp:302 ("Trying to use two sound banks when only one has been set up")
 * Naming   : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 3 -> 0x30ef8, 0x36e7e, 0x6faa0
 * Callees  : 4 -> 0x3aa24, 0x6e2aa, 0xddaf0, 0xf4ed4
 * Strings  :
 *   - 0x1674e0: "sndheap.cpp"
 *   - 0x1674a4: "Trying to use two sound banks when only one has been set up"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0006e159(undefined2 param_1,char param_2,undefined1 param_3,char param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  short in_DX;
  int iVar4;
  
  if ((DAT_0037651c == '\0') && (param_4 != '\0')) {
    FUN_000ddaf0(); /* LbErrorLog("sndheap.cpp", line 302, "Trying to use two sound banks when only one has been set up") */
  }
  if (param_4 == '\0') {
    if (DAT_0018729c == -1) {
      return 0;
    }
    if (in_DX < 1) {
      return 0;
    }
    iVar4 = DAT_00376529;
    if (_DAT_00376521 <= in_DX) {
      return 0;
    }
  }
  else {
    if (DAT_001872a0 == -1) {
      return 0;
    }
    if (in_DX < 1) {
      return 0;
    }
    iVar4 = DAT_0037652d;
    if (DAT_00376525 <= in_DX) {
      return 0;
    }
  }
  iVar4 = iVar4 + in_DX * 0x10;
  if (*(int *)(iVar4 + 0xc) == 0) {
    uVar2 = FUN_0006e2aa();
    *(undefined4 *)(iVar4 + 0xc) = uVar2;
  }
  if (*(int *)(iVar4 + 0xc) == 0) {
    return 0;
  }
  FUN_0003aa24();
  iVar3 = FUN_000f4ed4(param_1,(int)param_2,param_3,**(undefined4 **)(iVar4 + 0xc),
                       *(undefined4 *)(iVar4 + 8));
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x17) = *(byte *)(iVar3 + 0x17) | 1;
    if (param_4 != '\0') {
      *(byte *)(iVar3 + 0x17) = *(byte *)(iVar3 + 0x17) | 4;
    }
    pbVar1 = (byte *)(*(int *)(iVar4 + 0xc) + 8);
    *pbVar1 = *pbVar1 | 6;
    return iVar3;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_trying_use_two_sound_06e253 (Ghidra: FUN_0006e253)
 * Prototype: undefined4 dk_trying_use_two_sound_06e253(void);
 * Address  : 0x6e253 (Size: 65 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp:371 ("Trying to use two sound banks when only one has been set up")
 * Naming   : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 1 -> 0x6faa0
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167528: "sndheap.cpp"
 *   - 0x1674ec: "Trying to use two sound banks when only one has been set up"
 ******************************************************************************/
undefined4 FUN_0006e253(void)

{
  int in_EAX;
  char in_DL;
  int iVar1;
  
  if ((DAT_0037651c == '\0') && (in_DL != '\0')) {
    FUN_000ddaf0(); /* LbErrorLog("sndheap.cpp", line 371, "Trying to use two sound banks when only one has been set up") */
    return 0;
  }
  iVar1 = DAT_00376529;
  if (in_DL != '\0') {
    iVar1 = DAT_0037652d;
  }
  return *(undefined4 *)(iVar1 + 8 + in_EAX * 0x10);
}

/******************************************************************************
 * Function : sub_06e294 (Ghidra: FUN_0006e294)
 * Prototype: void sub_06e294(void);
 * Address  : 0x6e294 (Size: 22 bytes)
 * Module   : sndheap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x3ab51
 ******************************************************************************/
void FUN_0006e294(void)

{
  FUN_0003ab51();
  return;
}

/******************************************************************************
 * Function : dk_trying_use_two_sound_06e2aa (Ghidra: FUN_0006e2aa)
 * Prototype: undefined4 dk_trying_use_two_sound_06e2aa(void);
 * Address  : 0x6e2aa (Size: 241 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp:400 ("Trying to use two sound banks when only one has been set up")
 * Naming   : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 1 -> 0x6e159
 * Callees  : 5 -> 0x3a8f7, 0x3aa62, 0xddaf0, 0xe8a34, 0xe8a80
 * Strings  :
 *   - 0x167570: "sndheap.cpp"
 *   - 0x167534: "Trying to use two sound banks when only one has been set up"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0006e2aa(void)

{
  int iVar1;
  int iVar2;
  char in_CL;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  short in_DX;
  undefined4 local_14;
  
  if ((DAT_0037651c == '\0') && (in_CL != '\0')) {
    FUN_000ddaf0(); /* LbErrorLog("sndheap.cpp", line 400, "Trying to use two sound banks when only one has been set up") */
  }
  else {
    iVar1 = FUN_0003a8f7();
    if (iVar1 == 0) {
      while (*(int *)(DAT_0037651d + 0x10) != 0) {
        iVar1 = FUN_0003a8f7();
        if (iVar1 != 0) break;
        local_14 = FUN_0003aa62();
        iVar1 = extraout_ECX;
        if (local_14 < 0) break;
        if (local_14 < _DAT_00376521) {
          local_14 = local_14 << 4;
          iVar2 = DAT_00376529;
        }
        else {
          local_14 = (local_14 - _DAT_00376521) * 0x10;
          iVar2 = DAT_0037652d;
        }
        *(int *)(iVar2 + local_14 + 0xc) = extraout_ECX;
      }
    }
    if (iVar1 != 0) {
      if (in_CL == '\0') {
        *(short *)(iVar1 + 10) = in_DX;
        FUN_000e8a34();
      }
      else {
        *(short *)(iVar1 + 10) = in_DX + DAT_00376521;
        FUN_000e8a34();
      }
      FUN_000e8a80();
      return extraout_ECX_00;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06e39b (Ghidra: FUN_0006e39b)
 * Prototype: undefined4 sub_06e39b(void);
 * Address  : 0x6e39b (Size: 57 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006e39b(void)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  int in_EAX;
  int iVar4;
  undefined3 uVar7;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  char *pcVar8;
  char *in_EDX;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar9;
  char *unaff_EDI;
  code *pcVar10;
  undefined3 unaff_retaddr;
  undefined1 uStack_1;
  
  pcVar8 = (char *)(in_ECX + *(int *)(in_EAX + 3));
  pcVar9 = (char *)(unaff_ESI + *(int *)((int)unaff_EBX + in_EAX));
  iVar4 = in_EAX - *unaff_EBX;
  uVar7 = (undefined3)((uint)iVar4 >> 8);
  cVar2 = (char)iVar4 - (char)*unaff_EBX;
  *(char *)unaff_EBX = (char)*unaff_EBX + (char)pcVar8;
  *(char *)CONCAT31(uVar7,cVar2) = *(char *)CONCAT31(uVar7,cVar2) + cVar2;
  *(char *)(unaff_EBP + -0x1c) = *(char *)(unaff_EBP + -0x1c) + cVar2;
  *pcVar9 = *pcVar9 + (char)((uint)unaff_EBX >> 8);
  in(6);
  cVar2 = (char)((uint)in_EDX >> 8);
  *unaff_EDI = *unaff_EDI + cVar2;
  uVar3 = in(6);
  *(char *)CONCAT31(uVar7,uVar3) = *(char *)CONCAT31(uVar7,uVar3) + cVar2;
  in(6);
  *pcVar8 = *pcVar8 + (char)((uint)pcVar8 >> 8);
  in(6);
  *in_EDX = *in_EDX + (char)((uint)iVar4 >> 8);
  in(6);
  *(char *)unaff_EBX = (char)*unaff_EBX + (char)unaff_EBX;
  uVar3 = in(6);
  *(char *)CONCAT31(uVar7,uVar3) = *(char *)CONCAT31(uVar7,uVar3) + (char)in_EDX;
  in(6);
  pcVar9[0x57] = pcVar9[0x57] + (char)in_EDX;
  uVar5 = CONCAT31(CONCAT12((char)((uint3)unaff_retaddr >> 0x10),
                            CONCAT11((char)((uint3)unaff_retaddr >> 8) + (char)pcVar8,
                                     (char)unaff_retaddr)),uStack_1) - 800;
  if (0x34c < uVar5) {
    return 0;
  }
  iVar4 = 10;
  pcVar10 = FUN_0006e39b;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    sVar1 = *(short *)pcVar10;
    pcVar10 = pcVar10 + 2;
  } while ((short)uVar5 != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0006e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(iVar4 * 4 + 0x6e3ad))();
  return uVar6;
}

/******************************************************************************
 * Function : sub_06e3d5 (Ghidra: FUN_0006e3d5)
 * Prototype: undefined4 sub_06e3d5(int param_1);
 * Address  : 0x6e3d5 (Size: 75 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6deac
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006e3d5(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  if (0x34c < param_1 - 800U) {
    return 0;
  }
  iVar3 = 10;
  pcVar4 = FUN_0006e39b;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    sVar1 = *(short *)pcVar4;
    pcVar4 = pcVar4 + 2;
  } while ((short)(param_1 - 800U) != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0006e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(iVar3 * 4 + 0x6e3ad))();
  return uVar2;
}

