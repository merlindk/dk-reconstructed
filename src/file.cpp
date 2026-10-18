/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: file.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 50
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_029979 (Ghidra: FUN_00029979)
 * Prototype: longlong sub_029979(void);
 * Address  : 0x29979 (Size: 127 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a3d: "LEVELS"
 *   - 0x162a46: "%s\MAP%05d.flg"
 ******************************************************************************/
longlong FUN_00029979(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint in_EDX;
  undefined2 *puVar5;
  int iVar6;
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_MAP_05d_flg_00162a46,uVar3);
  FUN_000150f0();
  cVar2 = FUN_000e8960();
  if (cVar2 != '\0') {
    FUN_000e984c();
    iVar6 = 0;
    puVar5 = &DAT_00279203;
    puVar4 = &DAT_002f317f;
    do {
      iVar6 = iVar6 + 1;
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      *(undefined1 *)puVar5 = uVar1;
      puVar5 = (undefined2 *)((int)puVar5 + 5);
    } while (iVar6 < 0x10000);
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0299f8 (Ghidra: FUN_000299f8)
 * Prototype: undefined8 sub_0299f8(void);
 * Address  : 0x299f8 (Size: 202 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a55: "LEVELS"
 *   - 0x162a5e: "%s\MAP%05d.own"
 ******************************************************************************/
undefined8 FUN_000299f8(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte *extraout_ECX;
  byte *pbVar5;
  undefined4 in_EDX;
  int iVar6;
  undefined1 local_ac [152];
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_MAP_05d_own_00162a5e,uVar3);
  FUN_000150f0();
  cVar2 = FUN_000e8960();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_000e984c();
    iVar6 = 0;
    pbVar5 = extraout_ECX;
    do {
      if ((iVar6 % 0x100 < 0xff) &&
         (iVar4 = (int)((iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0)) >> 8,
         iVar4 < 0xff)) {
        iVar4 = ((&DAT_0019033b)[iVar4] * 0x55 + (&DAT_0019033b)[iVar6 % 0x100]) * 6;
        bVar1 = *pbVar5;
        (&DAT_002d33ca)[iVar4] = (&DAT_002d33ca)[iVar4] & 0xf8;
        (&DAT_002d33ca)[iVar4] = (&DAT_002d33ca)[iVar4] | bVar1 & 7;
      }
      iVar6 = iVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (iVar6 < 0x10000);
    uVar3 = 1;
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_029ac2 (Ghidra: FUN_00029ac2)
 * Prototype: longlong sub_029ac2(void);
 * Address  : 0x29ac2 (Size: 146 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a6d: "LEVELS"
 *   - 0x162a76: "%s\MAP%05d.wib"
 ******************************************************************************/
longlong FUN_00029ac2(void)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_EDX;
  byte *pbVar8;
  undefined1 local_a4 [152];
  
  pbVar8 = DAT_00199228;
  FUN_000dd920();
  uVar5 = FUN_000dd920();
  FUN_000e7714(local_a4,s__s_MAP_05d_wib_00162a76,uVar5);
  FUN_000150f0();
  cVar4 = FUN_000e8960();
  if (cVar4 != '\0') {
    FUN_000e984c();
    iVar6 = 0;
    do {
      bVar3 = *pbVar8;
      iVar7 = iVar6 + 5;
      pbVar1 = (byte *)((int)&DAT_00279205 + iVar6 + 1);
      *pbVar1 = *pbVar1 & 0x3f;
      pbVar8 = pbVar8 + 1;
      puVar2 = (uint *)((int)&DAT_00279203 + iVar6 + 1);
      *puVar2 = *puVar2 | (bVar3 & 3) << 0x16;
      iVar6 = iVar7;
    } while (iVar7 != 0x50000);
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_029b54 (Ghidra: FUN_00029b54)
 * Prototype: longlong sub_029b54(void);
 * Address  : 0x29b54 (Size: 170 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 7 -> 0x150f0, 0xac630, 0xacaf8, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a85: "LEVELS"
 *   - 0x162a8e: "%s\MAP%05d.lgt"
 ******************************************************************************/
longlong FUN_00029b54(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  int iVar4;
  int extraout_EDX;
  undefined1 local_a8 [152];
  
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_a8,s__s_MAP_05d_lgt_00162a8e,uVar2);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  if (cVar1 != '\0') {
    FUN_000ac630();
    FUN_000e984c();
    iVar4 = *DAT_00199228;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (399 < iVar4) {
      iVar4 = 399;
    }
    iVar3 = 0;
    while (iVar3 < iVar4) {
      FUN_000acaf8();
      iVar4 = extraout_EDX;
      iVar3 = extraout_ECX + 1;
    }
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_029bfe (Ghidra: FUN_00029bfe)
 * Prototype: undefined8 sub_029bfe(void);
 * Address  : 0x29bfe (Size: 308 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 8 -> 0x150f0, 0x157ac, 0x2cb2b, 0xb21f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a9d: "LEVELS"
 *   - 0x162aa6: "%s\MAP%05d.clm"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00029cad) */

undefined8 FUN_00029bfe(void)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  undefined4 in_EDX;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined1 local_bc [152];
  int local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  
  bVar10 = 0;
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_bc,s__s_MAP_05d_clm_00162aa6,uVar3);
  if ((DAT_0019d0b8 & 8) != 0) {
    FUN_0002cb2b();
    DAT_0019d0b8 = DAT_0019d0b8 & 0xf7;
  }
  FUN_000150f0();
  cVar2 = FUN_000e8960();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_000b21f0();
    FUN_000e984c();
    iVar6 = *DAT_00199228;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0x7ff < iVar6) {
      iVar6 = 0x7ff;
    }
    DAT_002e7beb = *(ushort *)(DAT_00199228 + 4);
    if (0x7ff < DAT_002e7beb) {
      DAT_002e7beb = 0x7ff;
    }
    local_24 = 0;
    local_1c = &DAT_0019e973;
    piVar4 = DAT_00199228 + 2;
    while (local_24 <= iVar6) {
      piVar8 = &DAT_0019e977 + local_24 * 6 + (uint)bVar10 * -2;
      piVar7 = piVar4 + (uint)bVar10 * -2 + 1;
      (&DAT_0019e973)[local_24 * 6] = *piVar4;
      piVar9 = piVar8 + (uint)bVar10 * -2 + 1;
      piVar4 = piVar7 + (uint)bVar10 * -2 + 1;
      *piVar8 = *piVar7;
      piVar8 = piVar9 + (uint)bVar10 * -2 + 1;
      piVar7 = piVar4 + (uint)bVar10 * -2 + 1;
      *piVar9 = *piVar4;
      *piVar8 = *piVar7;
      piVar8[(uint)bVar10 * -2 + 1] = piVar7[(uint)bVar10 * -2 + 1];
      (piVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
           (piVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      uVar11 = FUN_000157ac();
      iVar5 = (int)((ulonglong)uVar11 >> 0x20);
      local_1c = local_1c + 6;
      local_20._0_1_ = (char)uVar11;
      piVar4 = (int *)(extraout_ECX + 0x18);
      pbVar1 = (byte *)((int)&DAT_0019e973 + iVar5 + 2);
      *pbVar1 = *pbVar1 & 0xf;
      local_24 = local_24 + 1;
      pbVar1 = (byte *)((int)&DAT_0019e973 + iVar5 + 2);
      *pbVar1 = *pbVar1 | (char)local_20 << 4;
      local_20 = (int)uVar11;
    }
    uVar3 = 1;
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_029d32 (Ghidra: FUN_00029d32)
 * Prototype: longlong sub_029d32(void);
 * Address  : 0x29d32 (Size: 100 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162ab5: "DATA"
 *   - 0x162abc: "%s\tmapanim.dat"
 ******************************************************************************/
longlong FUN_00029d32(void)

{
  char cVar1;
  undefined4 uVar2;
  uint in_EDX;
  undefined1 local_a0 [152];
  
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_a0,s__s_tmapanim_dat_00162abc,uVar2);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  if (cVar1 != '\0') {
    FUN_000e984c();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_029d96 (Ghidra: FUN_00029d96)
 * Prototype: undefined4 sub_029d96(void);
 * Address  : 0x29d96 (Size: 99 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2a25c, 0x2ca74
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162acc: "DATA"
 *   - 0x162ad3: "%s\TMAPA%03d.dat"
 ******************************************************************************/
undefined4 FUN_00029d96(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_9c [152];
  
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_9c,s__s_TMAPA_03d_dat_00162ad3,uVar2);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  if (cVar1 != '\0') {
    FUN_000e984c();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_action_point_during_029df9 (Ghidra: FUN_00029df9)
 * Prototype: undefined8 dk_allocate_action_point_during_029df9(void);
 * Address  : 0x29df9 (Size: 214 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:457 ("Cannot allocate action point during load")
 * Naming   : String 'Cannot allocate action point during load'
 * Callers  : 1 -> 0x2a25c
 * Callees  : 7 -> 0x150f0, 0x72a7a, 0xdd920, 0xddaf0, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162b25: "file.cpp"
 *   - 0x162ae4: "LEVELS"
 *   - 0x162aed: "%s\MAP%05d.apt"
 *   - 0x162afc: "Cannot allocate action point during load"
 ******************************************************************************/
undefined8 FUN_00029df9(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined2 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_ac [152];
  
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_MAP_05d_apt_00162aed,uVar2);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  if (cVar1 == '\0') {
LAB_00029ec7:
    uVar2 = 0;
  }
  else {
    FUN_000e984c();
    iVar6 = *DAT_00199228;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0x1f < iVar6) {
      iVar6 = 0x1f;
    }
    iVar4 = 0;
    while (iVar4 < iVar6) {
      uVar7 = FUN_00072a7a();
      puVar5 = (undefined2 *)((ulonglong)uVar7 >> 0x20);
      puVar3 = (undefined *)uVar7;
      if (puVar3 < &DAT_002eb402) {
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 457, "Cannot allocate action point during load") */
        goto LAB_00029ec7;
      }
      *(undefined2 *)(puVar3 + 1) = *puVar5;
      *(undefined2 *)(puVar3 + 3) = puVar5[1];
      *(undefined2 *)(puVar3 + 5) = puVar5[2];
      iVar4 = extraout_ECX + 1;
    }
    uVar2 = 1;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_install_path_029eef (Ghidra: FUN_00029eef)
 * Prototype: undefined8 dk_install_path_029eef(void);
 * Address  : 0x29eef (Size: 439 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : String 'INSTALL_PATH='
 * Callers  : 1 -> 0x6a412
 * Callees  : 5 -> 0xe7714, 0xe8960, 0xe984c, 0xe9d7a, 0xe9dd0
 * Strings  :
 *   - 0x162b4e: "%s\keeper.cfg"
 *   - 0x162b5c: "INSTALL_PATH="
 *   - 0x162b6a: "INSTALL_TYPE="
 *   - 0x162b78: "LANGUAGE="
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00029eef(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  undefined4 in_EDX;
  undefined1 local_a8 [144];
  
  FUN_000e7714(local_a8,s__s_keeper_cfg_00162b4e,&DAT_00333f77);
  DAT_002ee923 = '\0';
  _DAT_002ee9bd = 0;
  cVar1 = FUN_000e8960();
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_0002a4dc;
  }
  iVar2 = FUN_000e984c();
  if (iVar2 != -1) {
    for (pcVar6 = &DAT_0019cbac; pcVar6 < &DAT_0019cbac + iVar2; pcVar6 = pcVar6 + 1) {
      iVar3 = FUN_000e9d7a();
      pcVar6 = (char *)(extraout_ECX + 0xd);
      if (iVar3 == 0) {
        iVar3 = 0;
        for (; (*pcVar6 != '\r' && (*pcVar6 != '\0')); pcVar6 = pcVar6 + 1) {
          (&DAT_002ee923)[iVar3] = *pcVar6;
          iVar3 = iVar3 + 1;
        }
        if (((1 < iVar3) && ((&DAT_002ee922)[iVar3] == '\\')) && ((&DAT_002ee921)[iVar3] == '\\')) {
          (&DAT_002ee922)[iVar3] = 0;
        }
      }
      else {
        iVar3 = FUN_000e9d7a();
        if ((iVar3 != 0) && (iVar3 = FUN_000e9d7a(), pcVar6 = extraout_ECX_00, iVar3 == 0)) {
          pcVar6 = extraout_ECX_00 + 9;
          for (iVar3 = 0; *(int *)((int)&PTR_DAT_00179c78 + iVar3) != 0; iVar3 = iVar3 + 8) {
            iVar4 = FUN_000e9d7a();
            pcVar6 = extraout_ECX_01;
            if (iVar4 == 0) {
              DAT_002ee9b9 = *(int *)((int)&DAT_00179c7c + iVar3);
              break;
            }
          }
        }
      }
      for (; (*pcVar6 != '\n' && (pcVar6 < &DAT_0019cbac + iVar2)); pcVar6 = pcVar6 + 1) {
      }
    }
  }
  switch(DAT_002ee9b9) {
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
  default:
    goto switchD_0002a097_default;
  }
  FUN_000e9dd0();
switchD_0002a097_default:
  if ((DAT_002ee9b9 == 0) || (DAT_002ee923 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
LAB_0002a4dc:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : dk_keeper_cfg_02a0be (Ghidra: FUN_0002a0be)
 * Prototype: bool dk_keeper_cfg_02a0be(void);
 * Address  : 0x2a0be (Size: 242 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : String 'KEEPER.CFG'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xe8ca8, 0xe9dd6, 0xe9fd7, 0xea08b, 0xea0ac
 * Strings  :
 *   - 0x162b84: "KEEPER.CFG"
 *   - 0x162b8f: "FRA"
 *   - 0x162b93: "ENG"
 *   - 0x162b97: "GER"
 *   - 0x162b9b: "SPA"
 *   - 0x162b9f: "SWE"
 *   - 0x162ba3: "ITA"
 *   - 0x162ba7: "MAX"
 *   - 0x162bab: "MED"
 *   - 0x162baf: "MIN"
 *   - 0x162bb6: "INSTALL_PATH=%s\n"
 *   - 0x162bc7: "INSTALL_TYPE=%s\n"
 *   - 0x162bd8: "LANGUAGE=%s\n"
 ******************************************************************************/
bool FUN_0002a0be(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 extraout_ECX;
  uint in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined *unaff_ESI;
  undefined *local_10;
  
  FUN_000e8ca8();
  FUN_000e9dd6();
  FUN_000e9dd6();
  switch(in_EAX) {
  case 1:
    unaff_ESI = &DAT_00162b93; /* 0x162b93="ENG" */
    break;
  case 2:
    unaff_ESI = &DAT_00162b8f; /* 0x162b8f="FRA" */
    break;
  case 3:
    unaff_ESI = &DAT_00162b97; /* 0x162b97="GER" */
    break;
  case 4:
    unaff_ESI = &DAT_00162ba3; /* 0x162ba3="ITA" */
    break;
  case 5:
    unaff_ESI = &DAT_00162b9b; /* 0x162b9b="SPA" */
    break;
  case 6:
    unaff_ESI = &DAT_00162b9f; /* 0x162b9f="SWE" */
  }
  if (in_EDX < 2) {
    if (in_EDX == 1) {
      local_10 = &DAT_00162ba7; /* 0x162ba7="MAX" */
    }
  }
  else if (in_EDX < 3) {
    local_10 = &DAT_00162bab; /* 0x162bab="MED" */
  }
  else if (in_EDX == 3) {
    local_10 = &DAT_00162baf; /* 0x162baf="MIN" */
  }
  iVar1 = FUN_000e9fd7();
  if (iVar1 != 0) {
    FUN_000ea08b(iVar1,s_INSTALL_PATH__s_00162bb6,extraout_ECX);
    FUN_000ea08b(extraout_EDX,s_INSTALL_TYPE__s_00162bc7,local_10);
    FUN_000ea08b(extraout_EDX_00,s_LANGUAGE__s_00162bd8,unaff_ESI);
    FUN_000ea0ac();
  }
  return iVar1 != 0;
}

/******************************************************************************
 * Function : sub_02a1b0 (Ghidra: FUN_0002a1b0)
 * Prototype: undefined8 sub_02a1b0(void);
 * Address  : 0x2a1b0 (Size: 105 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162be5: "LEVELS"
 *   - 0x162bee: "%s\MAP%05d.inf"
 ******************************************************************************/
undefined8 FUN_0002a1b0(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  undefined1 local_a4 [152];
  undefined1 local_c;
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_a4,s__s_MAP_05d_inf_00162bee,uVar3);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_000e984c();
    uVar2 = local_c;
  }
  DAT_002e7bed = uVar2;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a219 (Ghidra: FUN_0002a219)
 * Prototype: void sub_02a219(void);
 * Address  : 0x2a219 (Size: 67 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 1 -> 0xcb144
 ******************************************************************************/
void FUN_0002a219(void)

{
  ushort uVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = 0;
  do {
    for (uVar1 = *(ushort *)((int)&DAT_002e0598 + iVar2);
        &DAT_002ddd1b < &DAT_002ddd1b + (uint)uVar1 * 0x45;
        uVar1 = *(ushort *)(&DAT_002ddd21 + (uint)uVar1 * 0x45)) {
      FUN_000cb144();
      iVar2 = extraout_ECX;
    }
    iVar2 = iVar2 + 0x1508;
  } while (iVar2 != 0x6928);
  return;
}

/******************************************************************************
 * Function : sub_02a25c (Ghidra: FUN_0002a25c)
 * Prototype: ulonglong sub_02a25c(void);
 * Address  : 0x2a25c (Size: 249 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 21 -> 0x150f0, 0x158a6, 0x298b5, 0x29979, 0x299f8, 0x29ac2, 0x29b54, 0x29bfe, 0x29d96, 0x29df9 ...
 * Strings  :
 *   - 0x162bfd: "LEVELS"
 *   - 0x162c06: "%s\MAP%05d.dat"
 ******************************************************************************/
ulonglong FUN_0002a25c(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  undefined1 local_a4 [152];
  
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_a4,s__s_MAP_05d_dat_00162c06,uVar2);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  if (cVar1 != '\0') {
    FUN_000298b5();
    FUN_00029979();
    FUN_00029bfe();
    FUN_00040f98();
    FUN_0002cdc8();
    FUN_000158a6();
    FUN_00029b54();
    FUN_000299f8();
    FUN_00029ac2();
    FUN_0002a1b0();
    FUN_00029d96();
    FUN_00029df9();
    FUN_0002d168();
    FUN_0002ab14();
    FUN_0002a219();
    uVar2 = FUN_0007c3c8();
    return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),1));
  }
  FUN_00040f98();
  FUN_0002cdc8();
  FUN_000158a6();
  DAT_002e7bed = 0;
  FUN_00029d96();
  uVar2 = FUN_000b2280();
  return CONCAT44(in_EDX,uVar2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : dk_settings_dat_02a355 (Ghidra: FUN_0002a355)
 * Prototype: undefined8 dk_settings_dat_02a355(void);
 * Address  : 0x2a355 (Size: 87 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : String 'SETTINGS.DAT'
 * Callers  : 10 -> 0x29738, 0x2e8a7, 0x2f755, 0x2f7e0, 0x30e88, 0x5a2c7, 0x5a3ce, 0x5a417, 0x5b5e1, 0x5c848
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162c15: "SETTINGS.DAT"
 *   - 0x162c22: "SAVE"
 *   - 0x162c29: "%s\%s"
 ******************************************************************************/
undefined8 FUN_0002a355(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 local_a4 [152];
  
  FUN_000dd920(s_SETTINGS_DAT_00162c15); /* 0x162c15="SETTINGS.DAT" */
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_a4,s__s__s_00162c29,uVar1);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a3ac (Ghidra: FUN_0002a3ac)
 * Prototype: undefined8 sub_02a3ac(void);
 * Address  : 0x2a3ac (Size: 123 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162c2f: "LEVELS"
 *   - 0x162c38: "%s\MAP%05d.dat"
 ******************************************************************************/
undefined8 FUN_0002a3ac(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  short *psVar4;
  undefined1 local_a8 [152];
  
  psVar4 = &DAT_00279203;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    iVar2 = iVar2 + 5;
    *psVar4 = -((ushort)*(undefined4 *)((int)&DAT_00279203 + iVar1) & 0x7ff);
    psVar4 = psVar4 + 1;
  } while (iVar2 != 0x50000);
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_a8,s__s_MAP_05d_dat_00162c38,uVar3);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a427 (Ghidra: FUN_0002a427)
 * Prototype: undefined8 sub_02a427(void);
 * Address  : 0x2a427 (Size: 188 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162c47: "LEVELS"
 *   - 0x162c50: "%s\MAP%05d.own"
 ******************************************************************************/
undefined8 FUN_0002a427(void)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 in_EDX;
  int iVar4;
  undefined1 local_b4 [152];
  int local_1c;
  
  iVar4 = 0;
  pbVar3 = DAT_00199228;
  do {
    if ((iVar4 % 0x100 < 0xff) &&
       (iVar1 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x100) - (uint)((iVar4 >> 0x1f) << 7 < 0)) >> 8,
       iVar1 < 0xff)) {
      local_1c = (&DAT_0019033b)[iVar1] * 0x55;
      *pbVar3 = (&DAT_002d33ca)[((&DAT_0019033b)[iVar4 % 0x100] + local_1c) * 6] & 7;
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar4 < 0x10000);
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_b4,s__s_MAP_05d_own_00162c50,uVar2);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a4e3 (Ghidra: FUN_0002a4e3)
 * Prototype: undefined8 sub_02a4e3(void);
 * Address  : 0x2a4e3 (Size: 117 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xdd920, 0xe7714
 * Strings  :
 *   - 0x162c5f: "LEVELS"
 *   - 0x162c68: "%s\MAP%05d.wib"
 ******************************************************************************/
undefined8 FUN_0002a4e3(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  undefined1 *puVar3;
  undefined1 local_ac [152];
  uint local_14;
  
  iVar1 = 0;
  puVar3 = DAT_00199228;
  do {
    local_14 = (*(uint *)((int)&DAT_00279203 + iVar1 + 1) & 0xffffff) >> 0x16;
    iVar1 = iVar1 + 5;
    *puVar3 = (undefined1)local_14;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0x50000);
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_MAP_05d_wib_00162c68,uVar2);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a558 (Ghidra: FUN_0002a558)
 * Prototype: undefined8 sub_02a558(void);
 * Address  : 0x2a558 (Size: 131 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162c77: "DATA"
 *   - 0x162c7e: "%s\Cube.dat"
 ******************************************************************************/
undefined8 FUN_0002a558(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  undefined4 *puVar4;
  undefined1 local_ac [152];
  
  puVar4 = DAT_00199228;
  *DAT_00199228 = 0x200;
  iVar1 = 0;
  puVar4 = puVar4 + 1;
  do {
    iVar2 = iVar1 + 0x12;
    *puVar4 = *(undefined4 *)((int)&DAT_001aa973 + iVar1);
    puVar4[1] = *(undefined4 *)((int)&DAT_001aa977 + iVar1);
    puVar4[2] = *(undefined4 *)((int)&DAT_001aa97b + iVar1);
    puVar4[3] = *(undefined4 *)((int)&DAT_001aa97f + iVar1);
    *(undefined2 *)(puVar4 + 4) = *(undefined2 *)((int)&DAT_001aa983 + iVar1);
    iVar1 = iVar2;
    puVar4 = (undefined4 *)((int)puVar4 + 0x12);
  } while (iVar2 != 0x2400);
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_Cube_dat_00162c7e,uVar3);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a5db (Ghidra: FUN_0002a5db)
 * Prototype: undefined8 sub_02a5db(void);
 * Address  : 0x2a5db (Size: 120 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2cb2b
 * Callees  : 2 -> 0xdd920, 0xe7714
 * Strings  :
 *   - 0x162c8a: "LEVELS"
 *   - 0x162c93: "%s\MAP%05d.clm"
 ******************************************************************************/
undefined8 FUN_0002a5db(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  undefined4 *puVar4;
  undefined1 local_ac [152];
  
  puVar4 = DAT_00199228;
  *DAT_00199228 = 0x800;
  puVar4[1] = (uint)DAT_002e7beb;
  iVar1 = 0;
  puVar4 = puVar4 + 2;
  do {
    iVar2 = iVar1 + 0x18;
    *puVar4 = *(undefined4 *)((int)&DAT_0019e973 + iVar1);
    puVar4[1] = *(undefined4 *)((int)&DAT_0019e977 + iVar1);
    puVar4[2] = *(undefined4 *)((int)&DAT_0019e97b + iVar1);
    puVar4[3] = *(undefined4 *)((int)&DAT_0019e97f + iVar1);
    puVar4[4] = *(undefined4 *)((int)&DAT_0019e983 + iVar1);
    puVar4[5] = *(undefined4 *)((int)&DAT_0019e987 + iVar1);
    iVar1 = iVar2;
    puVar4 = puVar4 + 6;
  } while (iVar2 != 0xc000);
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_MAP_05d_clm_00162c93,uVar3);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a653 (Ghidra: FUN_0002a653)
 * Prototype: undefined8 sub_02a653(void);
 * Address  : 0x2a653 (Size: 114 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xdd920, 0xe6a10, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162ca2: "LEVELS"
 *   - 0x162cab: "%s\MAP%05d.inf"
 ******************************************************************************/
undefined8 FUN_0002a653(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  undefined1 local_ac [152];
  undefined1 local_14;
  
  FUN_000e6a10();
  FUN_000dd920(extraout_ECX);
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_MAP_05d_inf_00162cab,uVar1);
  local_14 = DAT_002e7bed;
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a6c5 (Ghidra: FUN_0002a6c5)
 * Prototype: undefined8 sub_02a6c5(void);
 * Address  : 0x2a6c5 (Size: 468 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 10 -> 0xacef0, 0xacf7c, 0xad0f4, 0xad23c, 0xad37c, 0xd9640, 0xdd920, 0xe6a10, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162cba: "LEVELS"
 *   - 0x162cc3: "%s\MAP%05d.lgt"
 ******************************************************************************/
undefined8 FUN_0002a6c5(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 in_EAX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined2 *extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 in_EDX;
  byte bVar6;
  undefined1 local_c0 [152];
  int local_28;
  int local_24;
  byte *local_20;
  byte *local_1c;
  
  bVar6 = 0;
  local_24 = 0;
  local_28 = 0;
  do {
    local_20 = *(byte **)((int)&DAT_001ae9fc + local_28);
    if (((*local_20 & 1) != 0) && (local_20[0x1f] == 0xe)) {
      FUN_000e6a10();
      uVar2 = FUN_000ad37c();
      *extraout_ECX = uVar2;
      uVar1 = FUN_000ad23c();
      *(undefined1 *)(extraout_ECX_00 + 2) = uVar1;
      puVar3 = (undefined4 *)FUN_000acef0();
      *(undefined4 *)(extraout_ECX_01 + 10) = *puVar3;
      *(undefined2 *)(extraout_ECX_01 + 0xe + (uint)bVar6 * -8) =
           *(undefined2 *)(puVar3 + (uint)bVar6 * -2 + 1);
      uVar2 = FUN_000acf7c();
      *(undefined2 *)(extraout_ECX_02 + 4) = uVar2;
      uVar2 = FUN_000ad0f4();
      *(undefined2 *)(extraout_ECX_03 + 8) = uVar2;
      *(undefined1 *)(extraout_ECX_03 + 0x11) = 0;
      local_24 = local_24 + 1;
      *(undefined2 *)(extraout_ECX_03 + 0x12) =
           *(undefined2 *)(&DAT_001bd5ff + (uint)*(ushort *)(local_20 + 0x62) * 0x2e);
    }
    local_28 = local_28 + 4;
  } while (local_28 != 0x2000);
  local_28 = 0x2000;
  for (local_1c = &DAT_001bd61b; local_1c < &DAT_001c1dcd; local_1c = local_1c + 0x2e) {
    if ((*local_1c & 1) != 0) {
      iVar4 = FUN_000d9640();
      if (iVar4 == 0) {
        FUN_000e6a10();
        uVar2 = FUN_000ad37c();
        *extraout_ECX_04 = uVar2;
        uVar1 = FUN_000ad23c();
        *(undefined1 *)(extraout_ECX_05 + 2) = uVar1;
        puVar3 = (undefined4 *)FUN_000acef0();
        *(undefined4 *)(extraout_ECX_06 + 10) = *puVar3;
        *(undefined2 *)(extraout_ECX_06 + 0xe + (uint)bVar6 * -8) =
             *(undefined2 *)(puVar3 + (uint)bVar6 * -2 + 1);
        uVar2 = FUN_000acf7c();
        *(undefined2 *)(extraout_ECX_07 + 4) = uVar2;
        uVar2 = FUN_000ad0f4();
        *(undefined2 *)(extraout_ECX_08 + 8) = uVar2;
        *(undefined1 *)(extraout_ECX_08 + 0x11) = 0;
        local_24 = local_24 + 1;
        *(undefined2 *)(extraout_ECX_08 + 0x12) = *(undefined2 *)(local_1c + 0x12);
      }
    }
  }
  *DAT_00199228 = local_24;
  FUN_000dd920(in_EAX);
  uVar5 = FUN_000dd920();
  FUN_000e7714(local_c0,s__s_MAP_05d_lgt_00162cc3,uVar5);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a899 (Ghidra: FUN_0002a899)
 * Prototype: undefined8 sub_02a899(void);
 * Address  : 0x2a899 (Size: 189 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe6a10, 0xe7714
 * Strings  :
 *   - 0x162cd2: "LEVELS"
 *   - 0x162cdb: "%s\MAP%05d.apt"
 ******************************************************************************/
undefined8 FUN_0002a899(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_b0 [152];
  
  iVar2 = 10;
  iVar5 = 0;
  piVar4 = DAT_00199228 + 1;
  do {
    piVar3 = piVar4;
    if (((&DAT_002eb401)[iVar2] & 1) != 0) {
      FUN_000e6a10();
      *(undefined2 *)piVar4 = *(undefined2 *)(&DAT_002eb402 + extraout_ECX);
      *(undefined2 *)((int)piVar4 + 2) = *(undefined2 *)(&DAT_002eb404 + extraout_ECX);
      *(undefined2 *)(piVar4 + 1) = *(undefined2 *)(&DAT_002eb406 + extraout_ECX);
      piVar3 = piVar4 + 2;
      iVar5 = iVar5 + 1;
      *(undefined2 *)((int)piVar4 + 6) = *(undefined2 *)(&DAT_002eb408 + extraout_ECX);
      iVar2 = extraout_ECX;
    }
    iVar2 = iVar2 + 10;
    piVar4 = piVar3;
  } while (iVar2 != 0x140);
  *DAT_00199228 = iVar5;
  FUN_000dd920(in_EAX);
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_b0,s__s_MAP_05d_apt_00162cdb,uVar1);
  FUN_000e98c8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02a9f0 (Ghidra: FUN_0002a9f0)
 * Prototype: void sub_02a9f0(void);
 * Address  : 0x2a9f0 (Size: 292 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x162d01: "LEVELS"
 *   - 0x162d0a: "%s\MAP%05d.tng"
 ******************************************************************************/
void FUN_0002a9f0(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  undefined1 local_b4 [152];
  uint local_1c;
  
  sVar5 = 0;
  psVar3 = DAT_00199228 + 1;
  for (local_1c = 1; (local_1c & 0xffff) < 0x800; local_1c = local_1c + 1) {
    pbVar1 = (byte *)(&DAT_001ae9fc)[local_1c & 0xffff];
    psVar4 = psVar3;
    if ((((*pbVar1 & 1) != 0) && (pbVar1[0x1f] != 0xe)) && (pbVar1[0x1f] != 0xf)) {
      *(undefined4 *)psVar3 = *(undefined4 *)(pbVar1 + 0xd);
      psVar3[2] = *(short *)(pbVar1 + 0x11);
      *(byte *)(psVar3 + 3) = pbVar1[0x1f];
      *(byte *)((int)psVar3 + 7) = pbVar1[0x1a];
      *(byte *)(psVar3 + 4) = pbVar1[6];
      if (pbVar1[0x1f] == 7) {
        *(undefined2 *)((int)psVar3 + 9) = *(undefined2 *)(pbVar1 + 0x13);
      }
      if (pbVar1[0x1f] == 9) {
        *(byte *)((int)psVar3 + 0xd) = pbVar1[0x13];
        *(byte *)(psVar3 + 7) = pbVar1[0x18];
      }
      if (pbVar1[0x1f] == 5) {
        *(undefined1 *)(psVar3 + 7) =
             *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x23);
      }
      if ((pbVar1[0x1f] == 1) && (pbVar1[0x1a] == 0x31)) {
        *(byte *)(psVar3 + 7) = pbVar1[0x13];
      }
      psVar4 = (short *)((int)psVar3 + 0x15);
      sVar5 = sVar5 + 1;
      *(undefined2 *)((int)psVar3 + 0xb) = *(undefined2 *)(pbVar1 + 0x1d);
    }
    psVar3 = psVar4;
  }
  *DAT_00199228 = sVar5;
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_b4,s__s_MAP_05d_tng_00162d0a,uVar2);
  FUN_000e98c8();
  return;
}

/******************************************************************************
 * Function : dk_buff_struct_num_02ab14 (Ghidra: FUN_0002ab14)
 * Prototype: void dk_buff_struct_num_02ab14(void);
 * Address  : 0x2ab14 (Size: 782 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:1196; file.cpp:1210; file.cpp:1216; file.cpp:1204; file.cpp:1292 ("CANNOT LOAD THING FILE")
 * Naming   : String 'BUFF=%d, STRUCT=%d, NUM=%d'
 * Callers  : 1 -> 0x2a25c
 * Callees  : 14 -> 0x150f0, 0x43ac3, 0x43bb3, 0x449a4, 0x44ca6, 0x5117d, 0x72af4, 0x8240c, 0xd0f50, 0xdd920 ...
 * Strings  :
 *   - 0x162d4c: "file.cpp"
 *   - 0x162d7c: "file.cpp"
 *   - 0x162dac: "file.cpp"
 *   - 0x162dd5: "file.cpp"
 *   - 0x162df2: "file.cpp"
 *   - 0x162e12: "file.cpp"
 *   - 0x162d19: "LEVELS"
 *   - 0x162d22: "%s\MAP%05d.tng"
 *   - 0x162d31: "BUFF=%d, STRUCT=%d, NUM=%d"
 *   - 0x162d85: "Invalid player %d, Fixing to player %d"
 *   - 0x162db5: "Invalid player %d Unable to fix"
 *   - 0x162d55: "Invalid player %d, Fixing to player %d"
 *   - 0x162dde: "INVALID THING CLASS"
 *   - 0x162dfb: "CANNOT LOAD THING FILE"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0002ab84) */

void FUN_0002ab14(void)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ushort uVar8;
  undefined1 local_b4 [152];
  int local_1c;
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_b4,s__s_MAP_05d_tng_00162d22,uVar3);
  FUN_000150f0();
  iVar7 = 0x2f3181;
  cVar1 = FUN_000e8960();
  if (cVar1 == '\0') {
    FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 1196, g_log_buf) */
  }
  else {
    FUN_000e984c();
    uVar8 = (ushort)DAT_002f317f;
    if (0x7fe < (ushort)DAT_002f317f) {
      uVar8 = 0x7fe;
    }
    if (0x30c3 < uVar8) {
      FUN_000e7714(&DAT_0019cbac,s_BUFF__d__STRUCT__d__NUM__d_00162d31,0x40000,0x15,uVar8);
      FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 1210, g_log_buf) */
    }
    puVar6 = local_b4;
    for (local_1c = 1; local_1c <= (int)(uint)uVar8; local_1c = local_1c + 1) {
      bVar2 = *(byte *)(iVar7 + 8);
      puVar5 = puVar6;
      if (bVar2 == 7) {
        *(uint *)(puVar6 + -4) = (uint)DAT_002eb542;
        *(undefined4 *)(puVar6 + -8) = 7;
        *(char **)(puVar6 + -0xc) = s_Invalid_player__d__Fixing_to_pla_00162d55;
        *(undefined1 **)(puVar6 + -0x10) = &DAT_0019cbac;
        *(undefined4 *)(puVar6 + -0x14) = 0x2ac8d;
        FUN_000e7714();
        *(undefined4 *)(puVar6 + -4) = 0x2ac9f;
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 1216, g_log_buf) */
        bVar2 = DAT_002eb542;
LAB_0002aca4:
        *(byte *)(iVar7 + 8) = bVar2;
LAB_0002aca7:
        bVar2 = *(byte *)(iVar7 + 6);
        if (bVar2 < 7) {
          if (bVar2 == 0) goto LAB_0002ac4c;
          if (bVar2 < 2) {
            *(uint *)(puVar6 + -4) = (uint)*(ushort *)(iVar7 + 0xb);
            *(undefined4 *)(puVar6 + -8) = 0x2ad20;
            iVar4 = FUN_00043ac3();
            if (*(char *)(iVar7 + 7) == '1') {
              *(undefined1 *)(iVar4 + 0x13) = *(undefined1 *)(iVar7 + 0xe);
            }
            puVar5 = puVar6 + -4;
            if ((0x33 < *(byte *)(iVar7 + 7)) && (puVar5 = puVar6 + -4, *(byte *)(iVar7 + 7) < 0x39)
               ) {
              *(undefined4 *)(puVar6 + -8) = 0x2ad57;
              iVar4 = FUN_000d0f50();
              if (iVar4 == 0) {
                *(undefined4 *)(puVar6 + -8) = 0x2ad78;
                FUN_00072af4();
                puVar5 = puVar6 + -4;
              }
              else {
                *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(iVar4 + 3);
                *(undefined4 *)(puVar6 + -8) = 0x2ad6a;
                FUN_0005117d();
                puVar5 = puVar6 + -4;
              }
            }
          }
          else {
            if (bVar2 != 5) goto LAB_0002ac4c;
            *(undefined4 *)(puVar6 + -4) = 0x2acf1;
            iVar4 = FUN_00043bb3();
            if (iVar4 != 0) {
              *(undefined4 *)(puVar6 + -4) = 0x2ad02;
              FUN_0008240c();
            }
          }
        }
        else if (bVar2 < 8) {
          *(uint *)(puVar6 + -4) = (uint)*(ushort *)(iVar7 + 0xb);
          *(undefined4 *)(puVar6 + -8) = 0x2adb3;
          FUN_00044ca6();
          puVar5 = puVar6 + -4;
        }
        else {
          if (bVar2 < 9) {
            *(uint *)(puVar6 + -4) = (uint)*(ushort *)(iVar7 + 0xb);
          }
          else {
            if (bVar2 < 10) {
              *(uint *)(puVar6 + -4) = (uint)*(byte *)(iVar7 + 0xe);
              *(undefined4 *)(puVar6 + -8) = 0x2ade2;
              FUN_000449a4();
              puVar5 = puVar6 + -4;
              goto LAB_0002ac51;
            }
            if (0xb < bVar2) goto LAB_0002ac4c;
            *(uint *)(puVar6 + -4) = (uint)*(ushort *)(iVar7 + 0xb);
          }
          *(undefined4 *)(puVar6 + -8) = 0x2ad96;
          FUN_00043ac3();
          puVar5 = puVar6 + -4;
        }
      }
      else {
        if (bVar2 == 8) {
          *(uint *)(puVar6 + -4) = (uint)DAT_002eb542;
          *(undefined4 *)(puVar6 + -8) = 8;
          *(char **)(puVar6 + -0xc) = s_Invalid_player__d__Fixing_to_pla_00162d85;
          *(undefined1 **)(puVar6 + -0x10) = &DAT_0019cbac;
          *(undefined4 *)(puVar6 + -0x14) = 0x2abfd;
          FUN_000e7714();
          *(undefined4 *)(puVar6 + -4) = 0x2ac0f;
          FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 1204, g_log_buf) */
          bVar2 = DAT_002eb543;
          goto LAB_0002aca4;
        }
        if (bVar2 < 6) goto LAB_0002aca7;
        *(uint *)(puVar6 + -4) = (uint)*(byte *)(iVar7 + 8);
        *(char **)(puVar6 + -8) = s_Invalid_player__d_Unable_to_fix_00162db5;
        *(undefined1 **)(puVar6 + -0xc) = &DAT_0019cbac;
        *(undefined4 *)(puVar6 + -0x10) = 0x2ac3f;
        FUN_000e7714();
LAB_0002ac4c:
        *(undefined4 *)(puVar6 + -4) = 0x2ac51;
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 1292, "CANNOT LOAD THING FILE") */
      }
LAB_0002ac51:
      iVar7 = iVar7 + 0x15;
      puVar6 = puVar5;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_02ae22 (Ghidra: FUN_0002ae22)
 * Prototype: undefined8 sub_02ae22(void);
 * Address  : 0x2ae22 (Size: 71 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xea1ef
 * Strings  :
 *   - 0x162e1b: "LEVELS"
 *   - 0x162e24: "%s\MAP%05d.dat"
 ******************************************************************************/
undefined8 FUN_0002ae22(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 local_a0 [152];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_a0,s__s_MAP_05d_dat_00162e24,uVar1);
  FUN_000ea1ef();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02ae69 (Ghidra: FUN_0002ae69)
 * Prototype: undefined8 sub_02ae69(void);
 * Address  : 0x2ae69 (Size: 39 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xdd920
 * Strings  :
 *   - 0x162e33: "LEVELS"
 *   - 0x162e3c: "%s\MAP%05d.own"
 ******************************************************************************/
undefined8 FUN_0002ae69(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 auStack_a0 [152];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(auStack_a0,s__s_MAP_05d_own_00162e3c,uVar1);
  FUN_000ea1ef();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02ae90 (Ghidra: FUN_0002ae90)
 * Prototype: undefined8 sub_02ae90(void);
 * Address  : 0x2ae90 (Size: 39 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xdd920
 * Strings  :
 *   - 0x162e4b: "LEVELS"
 *   - 0x162e54: "%s\MAP%05d.wib"
 ******************************************************************************/
undefined8 FUN_0002ae90(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 auStack_a0 [152];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(auStack_a0,s__s_MAP_05d_wib_00162e54,uVar1);
  FUN_000ea1ef();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02aeb7 (Ghidra: FUN_0002aeb7)
 * Prototype: undefined8 sub_02aeb7(void);
 * Address  : 0x2aeb7 (Size: 42 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xdd920
 * Strings  :
 *   - 0x162e63: "LEVELS"
 *   - 0x162e6c: "%s\MAP%05d.clm"
 ******************************************************************************/
undefined8 FUN_0002aeb7(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 auStack_a0 [152];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(auStack_a0,s__s_MAP_05d_clm_00162e6c,uVar1);
  FUN_000ea1ef();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02aee1 (Ghidra: FUN_0002aee1)
 * Prototype: undefined8 sub_02aee1(void);
 * Address  : 0x2aee1 (Size: 42 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xdd920
 * Strings  :
 *   - 0x162e7b: "LEVELS"
 *   - 0x162e84: "%s\MAP%05d.lgt"
 ******************************************************************************/
undefined8 FUN_0002aee1(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 auStack_a0 [152];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(auStack_a0,s__s_MAP_05d_lgt_00162e84,uVar1);
  FUN_000ea1ef();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02af6d (Ghidra: FUN_0002af6d)
 * Prototype: void sub_02af6d(void);
 * Address  : 0x2af6d (Size: 66 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xea1ef
 * Strings  :
 *   - 0x162ec4: "LEVELS"
 *   - 0x162ecd: "%s\MAP%05d.tng"
 ******************************************************************************/
void FUN_0002af6d(void)

{
  undefined4 uVar1;
  undefined1 local_a0 [152];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_a0,s__s_MAP_05d_tng_00162ecd,uVar1);
  FUN_000ea1ef();
  return;
}

/******************************************************************************
 * Function : dk_data_creature_txt_02b36c (Ghidra: FUN_0002b36c)
 * Prototype: undefined8 dk_data_creature_txt_02b36c(void);
 * Address  : 0x2b36c (Size: 3036 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:1487 ("Cannot load XLS file")
 * Naming   : String 'data\creature.txt'
 * Callers  : 2 -> 0x401ec, 0x40832
 * Callees  : 8 -> 0x150f0, 0x66fcb, 0xddaf0, 0xe6a10, 0xe8a98, 0xe984c, 0xea1f4, 0xea21d
 * Strings  :
 *   - 0x162f03: "file.cpp"
 *   - 0x162f34: "file.cpp"
 *   - 0x162f64: "file.cpp"
 *   - 0x162edc: "data\creature.txt"
 *   - 0x162eee: "Cannot load XLS file"
 *   - 0x162f0c: "Cannot load XLS file, scratch too small"
 *   - 0x162f3d: "data\creature.txt"
 *   - 0x162f4f: "Cannot load XLS file"
 *   - 0x162f6d: "CREATURE"
 *   - 0x162f76: "ROOM"
 *   - 0x162f7b: "MAGIC"
 *   - 0x162f81: "INSTANCE"
 *   - 0x162f8a: "SHOT"
 *   - 0x162f8f: "TRAP"
 *   - 0x162f94: "DOOR"
 *   - 0x162f99: "HEALTH"
 *   - 0x162fa0: "GAME"
 *   - 0x162fa5: "BLOCK"
 *   - 0x162fab: "SPELL"
 *   - 0x162fb1: "RESEARCH_ROOM"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002b36c(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined2 uVar9;
  undefined4 in_EDX;
  undefined4 uVar10;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint uVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined2 *local_11c;
  undefined *local_118;
  char *local_f4;
  int local_c0;
  int local_bc;
  char *local_b4;
  int local_ac;
  int local_a4;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_000150f0();
  uVar4 = FUN_000e8a98();
  if ((0 < (int)uVar4) && (uVar4 < 0x40000)) {
    FUN_000150f0();
    uVar5 = FUN_000e984c();
    if (uVar5 == uVar4) {
      local_f4 = (char *)&DAT_002f317f;
LAB_0002c312:
      pcVar1 = local_f4;
      if (local_f4 < (char *)((int)&DAT_002f317f + uVar4)) {
        for (; (local_f4 < (char *)((int)&DAT_002f317f + uVar4) && (*local_f4 != '\n'));
            local_f4 = local_f4 + 1) {
        }
        pcVar7 = local_f4 + 1;
        *local_f4 = '\0';
        uVar5 = (int)pcVar7 - (int)pcVar1;
        iVar6 = FUN_000ea1f4();
        pcVar12 = pcVar1 + uVar5;
        local_f4 = pcVar7;
        if (iVar6 == 0) {
          uVar11 = 0;
          local_a4 = 0;
          for (local_3c = 0; (int)local_3c < 0x96; local_3c = local_3c + 1) {
            for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                pcVar7 = pcVar7 + 1) {
              uVar11 = uVar11 + 1;
            }
            for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                pcVar7 = pcVar7 + 1) {
              uVar11 = uVar11 + 1;
            }
            FUN_000ea21d();
            if (uVar5 <= uVar11) break;
            if (local_3c < 0x7b) {
                    /* WARNING: Could not recover jumptable at 0x0002b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar13 = (**(code **)((int)&PTR_LAB_0002afdc + local_a4))();
              return uVar13;
            }
            local_a4 = local_a4 + 4;
          }
        }
        else {
          iVar6 = FUN_000ea1f4();
          if (iVar6 == 0) {
            uVar11 = 0;
            for (local_38 = 0; (int)local_38 < 3; local_38 = local_38 + 1) {
              for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                  pcVar7 = pcVar7 + 1) {
                uVar11 = uVar11 + 1;
              }
              for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                  pcVar7 = pcVar7 + 1) {
                uVar11 = uVar11 + 1;
              }
              iVar6 = FUN_000ea21d();
              if (uVar5 <= uVar11) break;
              if (local_38 == 0) {
                local_11c = (undefined2 *)(&DAT_002eadcd + iVar6 * 4);
              }
              else if (local_38 < 2) {
                *local_11c = (short)iVar6;
              }
              else if (local_38 == 2) {
                local_11c[1] = (short)iVar6;
              }
            }
          }
          else {
            iVar6 = FUN_000ea1f4();
            if (iVar6 == 0) {
              uVar11 = 0;
              local_ac = 0;
              for (iVar6 = 0; iVar6 < 0x32; iVar6 = iVar6 + 1) {
                for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                    pcVar7 = pcVar7 + 1) {
                  uVar11 = uVar11 + 1;
                }
                for (local_b4 = pcVar1 + uVar11; (local_b4 < pcVar12 && (*local_b4 == '\t'));
                    local_b4 = local_b4 + 1) {
                  uVar11 = uVar11 + 1;
                }
                uVar14 = FUN_000ea21d();
                iVar6 = (int)(uVar14 >> 0x20);
                iVar8 = (int)uVar14;
                if (uVar5 <= uVar11) break;
                if (iVar6 == 0) {
                  local_118 = &DAT_002eae11 + iVar8 * 0x4c;
                }
                else if (uVar14 < 0xa00000000) {
LAB_0002b9b7:
                  *(int *)(local_118 + local_ac + -4) = iVar8;
                }
                else if (uVar14 < 0xb00000000) {
                  *(int *)(local_118 + 0x24) = iVar8;
                }
                else if (uVar14 < 0x1400000000) goto LAB_0002b9b7;
                local_ac = local_ac + 4;
              }
            }
            else {
              iVar6 = FUN_000ea1f4();
              if (iVar6 == 0) {
                uVar11 = 0;
                local_bc = 0;
                for (local_134 = 0; (int)local_134 < 0x32; local_134 = local_134 + 1) {
                  for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                      pcVar7 = pcVar7 + 1) {
                    uVar11 = uVar11 + 1;
                  }
                  for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                      pcVar7 = pcVar7 + 1) {
                    uVar11 = uVar11 + 1;
                  }
                  FUN_000ea21d();
                  if (uVar5 <= uVar11) break;
                  if (local_134 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0002bad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar13 = (**(code **)((int)&PTR_LAB_0002b1c8 + local_bc))();
                    return uVar13;
                  }
                  local_bc = local_bc + 4;
                }
              }
              else {
                iVar6 = FUN_000ea1f4();
                if (iVar6 == 0) {
                  uVar11 = 0;
                  local_c0 = 0;
                  for (local_34 = 0; (int)local_34 < 4; local_34 = local_34 + 1) {
                    for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                        pcVar7 = pcVar7 + 1) {
                      uVar11 = uVar11 + 1;
                    }
                    for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                        pcVar7 = pcVar7 + 1) {
                      uVar11 = uVar11 + 1;
                    }
                    FUN_000ea21d();
                    if (uVar5 <= uVar11) break;
                    if (local_34 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0002bb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar13 = (**(code **)((int)&PTR_LAB_0002b1e8 + local_c0))();
                      return uVar13;
                    }
                    local_c0 = local_c0 + 4;
                  }
                }
                else {
                  iVar6 = FUN_000ea1f4();
                  if (iVar6 == 0) {
                    uVar11 = 0;
                    for (local_30 = 0; (int)local_30 < 100; local_30 = local_30 + 1) {
                      for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                          pcVar7 = pcVar7 + 1) {
                        uVar11 = uVar11 + 1;
                      }
                      for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                          pcVar7 = pcVar7 + 1) {
                        uVar11 = uVar11 + 1;
                      }
                      FUN_000ea21d();
                      if (uVar5 <= uVar11) break;
                      if (local_30 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0002bc57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar13 = (**(code **)((int)&PTR_LAB_0002b1f8 + extraout_EDX))();
                        return uVar13;
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_000ea1f4();
                    if (iVar6 == 0) {
                      uVar11 = 0;
                      iVar6 = 0;
                      for (local_2c = 0; (int)local_2c < 100; local_2c = local_2c + 1) {
                        for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                            pcVar7 = pcVar7 + 1) {
                          uVar11 = uVar11 + 1;
                        }
                        for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                            pcVar7 = pcVar7 + 1) {
                        }
                        FUN_000ea21d();
                        if (uVar5 <= extraout_EDX_00) break;
                        if (local_2c < 5) {
                    /* WARNING: Could not recover jumptable at 0x0002bd2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar13 = (**(code **)((int)&PTR_LAB_0002b210 + iVar6))();
                          return uVar13;
                        }
                        iVar6 = iVar6 + 4;
                        uVar11 = extraout_EDX_00;
                      }
                    }
                    else {
                      iVar6 = FUN_000ea1f4();
                      if (iVar6 == 0) {
                        uVar11 = 0;
                        for (local_28 = 0; local_28 < 100; local_28 = local_28 + 1) {
                          for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                              pcVar7 = pcVar7 + 1) {
                            uVar11 = uVar11 + 1;
                          }
                          for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                              pcVar7 = pcVar7 + 1) {
                            uVar11 = uVar11 + 1;
                          }
                          uVar10 = FUN_000ea21d();
                          if (uVar5 <= uVar11) break;
                          uVar2 = uVar10;
                          if ((local_28 != 0) && (uVar2 = local_128, local_28 == 1)) {
                            uVar9 = (undefined2)uVar10;
                            switch(local_128) {
                            case 0:
                              DAT_002ebc46 = uVar9;
                              break;
                            case 1:
                              DAT_002ebc48 = uVar9;
                              break;
                            case 2:
                              DAT_002ebc4a = uVar9;
                              break;
                            case 5:
                              DAT_002ebc4d = uVar9;
                              break;
                            case 6:
                              DAT_002ebc4f = uVar9;
                            }
                          }
                          local_128 = uVar2;
                        }
                      }
                      else {
                        iVar6 = FUN_000ea1f4();
                        if (iVar6 == 0) {
                          uVar11 = 0;
                          for (local_24 = 0; local_24 < 100; local_24 = local_24 + 1) {
                            for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'));
                                pcVar7 = pcVar7 + 1) {
                              uVar11 = uVar11 + 1;
                            }
                            for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'));
                                pcVar7 = pcVar7 + 1) {
                              uVar11 = uVar11 + 1;
                            }
                            iVar6 = FUN_000ea21d();
                            if (uVar5 <= uVar11) break;
                            iVar8 = iVar6;
                            if ((local_24 != 0) && (iVar8 = local_12c, local_24 == 1)) {
                              uVar3 = (undefined1)iVar6;
                              uVar9 = (undefined2)iVar6;
                              switch(local_12c) {
                              case 0:
                                DAT_002eb9e8 = uVar9;
                                break;
                              case 1:
                                _DAT_002eb9ea = uVar9;
                                break;
                              case 2:
                                DAT_002eb9ee = uVar9;
                                break;
                              case 3:
                                DAT_002eb9f0 = uVar9;
                                break;
                              case 4:
                                DAT_002ebaef = uVar3;
                                break;
                              case 5:
                                DAT_002eb9f2 = uVar9;
                                break;
                              case 6:
                                _DAT_002eb9f4 = uVar9;
                                break;
                              case 7:
                                DAT_002eb9f6 = uVar9;
                                break;
                              case 8:
                                DAT_002eb9f8 = uVar9;
                                break;
                              case 9:
                                DAT_002eb9fa = uVar9;
                                break;
                              case 0xc:
                                DAT_002ed417 = uVar3;
                                break;
                              case 0xd:
                                DAT_002ed418 = iVar6;
                                break;
                              case 0xe:
                                DAT_002ed41c = iVar6;
                                break;
                              case 0x15:
                                DAT_002ebc51 = uVar3;
                                break;
                              case 0x1c:
                                _DAT_002ee7b0 = iVar6;
                                break;
                              case 0x1d:
                                _DAT_002ee7ac = iVar6;
                                break;
                              case 0x1e:
                                _DAT_002ee7b4 = iVar6;
                                break;
                              case 0x1f:
                                _DAT_002eba00 = uVar9;
                                break;
                              case 0x20:
                                _DAT_002eba02 = uVar9;
                                break;
                              case 0x21:
                                DAT_002ee894 = iVar6;
                                break;
                              case 0x22:
                                DAT_002ee898 = iVar6;
                                break;
                              case 0x23:
                                _DAT_002eb9c6 = uVar9;
                                break;
                              case 0x24:
                                _DAT_002eb9c8 = uVar9;
                                break;
                              case 0x25:
                                _DAT_002eb9ca = uVar9;
                                break;
                              case 0x26:
                                _DAT_002eb9cc = uVar9;
                                break;
                              case 0x27:
                                _DAT_002eb9ce = uVar9;
                                break;
                              case 0x28:
                                _DAT_002eb9d0 = uVar9;
                                break;
                              case 0x29:
                                _DAT_002eb9d2 = uVar9;
                                break;
                              case 0x2a:
                                _DAT_002eb9d4 = uVar9;
                                break;
                              case 0x2b:
                                DAT_002eb9d6 = uVar9;
                                break;
                              case 0x2d:
                                DAT_002ebaf4 = uVar9;
                                break;
                              case 0x2f:
                                DAT_002ebc38 = iVar6;
                                break;
                              case 0x30:
                                DAT_002ebc3c = iVar6;
                                break;
                              case 0x31:
                                DAT_002ebc40 = iVar6;
                                break;
                              case 0x32:
                                DAT_002ebc4c = uVar3;
                                break;
                              case 0x34:
                                DAT_002ebc44 = uVar9;
                                break;
                              case 0x35:
                                DAT_002ed442 = iVar6;
                                break;
                              case 0x37:
                                DAT_002ed3e2 = iVar6;
                                break;
                              case 0x38:
                                DAT_002eb9ec = uVar9;
                                break;
                              case 0x3a:
                                DAT_001ace04 = iVar6;
                                _DAT_002ed3fb = iVar6;
                                break;
                              case 0x3b:
                                _DAT_002ed3ea = iVar6;
                                break;
                              case 0x3c:
                                DAT_002ed3f3 = iVar6;
                                break;
                              case 0x3d:
                                _DAT_002ed3f7 = iVar6;
                                break;
                              case 0x3e:
                                _DAT_002ed3ef = iVar6;
                                break;
                              case 0x3f:
                                DAT_002ed3ff = uVar3;
                                break;
                              case 0x40:
                                DAT_002ed400 = uVar3;
                                break;
                              case 0x41:
                                DAT_002ed401 = uVar3;
                                break;
                              case 0x42:
                                DAT_002ed40b = iVar6;
                                break;
                              case 0x43:
                                DAT_002ed40f = iVar6;
                                break;
                              case 0x44:
                                DAT_002ed413 = iVar6;
                                break;
                              case 0x45:
                                DAT_002ed446 = iVar6;
                                break;
                              case 0x46:
                                DAT_002ed44a = iVar6;
                                break;
                              case 0x47:
                                DAT_002ed44f = uVar3;
                                break;
                              case 0x48:
                                _DAT_002eb9fc = uVar9;
                                break;
                              case 0x49:
                                DAT_002eb9fe = uVar9;
                                break;
                              case 0x4a:
                                DAT_002ebaee = uVar3;
                              }
                            }
                            local_12c = iVar8;
                          }
                        }
                        else {
                          iVar6 = FUN_000ea1f4();
                          if (iVar6 == 0) {
                            uVar11 = 0;
                            for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
                              for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 != '\t'))
                                  ; pcVar7 = pcVar7 + 1) {
                                uVar11 = uVar11 + 1;
                              }
                              for (pcVar7 = pcVar1 + uVar11; (pcVar7 < pcVar12 && (*pcVar7 == '\t'))
                                  ; pcVar7 = pcVar7 + 1) {
                                uVar11 = uVar11 + 1;
                              }
                              iVar6 = FUN_000ea21d();
                              if (uVar5 <= uVar11) break;
                              iVar8 = iVar6;
                              if ((local_20 != 0) && (iVar8 = local_12c, local_20 == 1)) {
                                *(short *)(&DAT_002eb9b4 + local_12c * 2) = (short)iVar6;
                              }
                              local_12c = iVar8;
                            }
                          }
                          else {
                            iVar6 = FUN_000ea1f4();
                            if (iVar6 == 0) {
                              uVar11 = 0;
                              for (iVar6 = 0; iVar6 < 100; iVar6 = iVar6 + 1) {
                                for (pcVar7 = pcVar1 + uVar11;
                                    (pcVar7 < pcVar12 && (*pcVar7 != '\t')); pcVar7 = pcVar7 + 1) {
                                  uVar11 = uVar11 + 1;
                                }
                                for (pcVar7 = pcVar1 + uVar11;
                                    (pcVar7 < pcVar12 && (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1) {
                                  uVar11 = uVar11 + 1;
                                }
                                uVar13 = FUN_000ea21d();
                                iVar6 = (int)((ulonglong)uVar13 >> 0x20);
                                if (uVar5 <= uVar11) break;
                                iVar8 = (int)uVar13;
                                if ((iVar6 != 0) && (iVar8 = local_124, iVar6 == 1)) {
                                  *(int *)(&DAT_001ae984 + local_124 * 4) = (int)uVar13;
                                }
                                local_124 = iVar8;
                              }
                            }
                            else {
                              iVar6 = FUN_000ea1f4();
                              if (iVar6 == 0) {
                                local_40 = 0;
                                for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
                                  for (pcVar7 = pcVar1 + local_40;
                                      (pcVar7 < pcVar12 && (*pcVar7 != '\t')); pcVar7 = pcVar7 + 1)
                                  {
                                    local_40 = local_40 + 1;
                                  }
                                  for (pcVar7 = pcVar1 + local_40;
                                      (pcVar7 < pcVar12 && (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1)
                                  {
                                    local_40 = local_40 + 1;
                                  }
                                  FUN_000ea21d();
                                  if (uVar5 <= extraout_EDX_01) break;
                                  if ((local_1c != 0) && (local_1c == 1)) {
                                    FUN_00066fcb();
                                  }
                                }
                              }
                              else {
                                iVar6 = FUN_000ea1f4();
                                if (iVar6 == 0) {
                                  local_130 = 0;
                                  for (local_120 = 0; local_120 < 3; local_120 = local_120 + 1) {
                                    for (pcVar7 = pcVar1 + local_130;
                                        (pcVar7 < pcVar12 && (*pcVar7 != '\t')); pcVar7 = pcVar7 + 1
                                        ) {
                                      local_130 = local_130 + 1;
                                    }
                                    for (pcVar7 = pcVar1 + local_130;
                                        (pcVar7 < pcVar12 && (*pcVar7 == '\t')); pcVar7 = pcVar7 + 1
                                        ) {
                                      local_130 = local_130 + 1;
                                    }
                                    FUN_000ea21d();
                                    if (uVar5 <= extraout_EDX_02) break;
                                    if ((local_120 != 0) && (local_120 == 1)) {
                                      FUN_00066fcb();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0002c312;
      }
      DAT_002e6f27 = DAT_002eba00;
      FUN_000e6a10();
      uVar10 = 1;
      goto LAB_0002a4dd;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 1487, "Cannot load XLS file") */
  uVar10 = 0;
LAB_0002a4dd:
  return CONCAT44(in_EDX,uVar10);
}

/******************************************************************************
 * Function : sub_02c3d0 (Ghidra: FUN_0002c3d0)
 * Prototype: undefined8 sub_02c3d0(void);
 * Address  : 0x2c3d0 (Size: 5 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:2568 ("Cannot open source file"); file.cpp:2575 ("Cannot find source or destination path")
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x2f8a2, 0x430ba, 0x457bd, 0x69c7f, 0x69edc, 0x8cc24
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x163009: "file.cpp"
 *   - 0x16302a: "file.cpp"
 *   - 0x16305a: "file.cpp"
 ******************************************************************************/
undefined8 FUN_0002c3d0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000f78b2();
  return CONCAT44(in_EDX,(uint)(iVar1 == 0));
}

/******************************************************************************
 * Function : dk_load_script_file_02c502 (Ghidra: FUN_0002c502)
 * Prototype: undefined8 dk_load_script_file_02c502(void);
 * Address  : 0x2c502 (Size: 480 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:2740 ("Cannot load SCRIPT file"); file.cpp:2786 ("No WIN GAME conditions in script file."); file.cpp:2790 ("Missing ENDIF's in script file.")
 * Naming   : String 'Cannot load SCRIPT file'
 * Callers  : 1 -> 0x40832
 * Callees  : 9 -> 0x150f0, 0x5cc4a, 0x78ada, 0xdd920, 0xddaf0, 0xe6a10, 0xe7714, 0xe8a98, 0xe984c
 * Strings  :
 *   - 0x163093: "file.cpp"
 *   - 0x1630b4: "file.cpp"
 *   - 0x1630e4: "file.cpp"
 *   - 0x16310d: "file.cpp"
 *   - 0x163063: "LEVELS"
 *   - 0x16306c: "%s\map%05d.txt"
 *   - 0x16307b: "Cannot load SCRIPT file"
 *   - 0x16309c: "Cannot load SCRIPT file"
 *   - 0x1630bd: "No WIN GAME conditions in script file."
 *   - 0x1630ed: "Missing ENDIF's in script file."
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002c502(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_ECX_00;
  int extraout_ECX_01;
  char *pcVar4;
  char *extraout_ECX_02;
  undefined4 in_EDX;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  char *pcVar7;
  
  FUN_0005cc4a();
  FUN_000e6a10();
  DAT_00179c04 = 1;
  _DAT_00179c08 = -1;
  DAT_002ee88e = 0;
  iVar5 = 0x80;
  DAT_0019d0bd = DAT_0019d0bd | 8;
  iVar3 = extraout_ECX;
  do {
    iVar6 = iVar3 * 0x1508 + 4;
    do {
      iVar1 = iVar6 + 4;
      *(undefined4 *)((int)&DAT_002e0fd8 + iVar6) = 0xb;
      iVar6 = iVar1;
    } while (iVar1 != iVar5);
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 0x1508;
  } while (iVar3 < 5);
  iVar5 = 0x28;
  iVar3 = 0;
  do {
    iVar3 = iVar3 * 0x1508;
    for (iVar6 = iVar3; iVar6 != iVar5; iVar6 = iVar6 + 5) {
      (&DAT_002e15b9)[iVar6] = 0;
    }
    (&DAT_002e158f)[iVar3] = 1;
    (&DAT_002e157b)[iVar3] = 1;
    iVar5 = iVar5 + 0x1508;
    FUN_000e6a10();
    FUN_000e6a10();
    iVar3 = extraout_ECX_00;
  } while (extraout_ECX_00 < 5);
  FUN_000150f0();
  FUN_000dd920(in_EAX);
  uVar2 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_map_05d_txt_0016306c,uVar2);
  iVar3 = FUN_000e8a98();
  if (0 < iVar3) {
    FUN_000150f0();
    iVar3 = FUN_000e984c();
    if (iVar3 == extraout_ECX_01) {
      pcVar4 = DAT_00199228 + extraout_ECX_01;
      pcVar7 = DAT_00199228;
      while (pcVar7 < pcVar4) {
        for (; (pcVar7 < pcVar4 && (*pcVar7 != '\n')); pcVar7 = pcVar7 + 1) {
        }
        *pcVar7 = '\0';
        FUN_00078ada();
        DAT_00179c04 = DAT_00179c04 + 1;
        pcVar4 = extraout_ECX_02;
        pcVar7 = (char *)(extraout_EDX + 1);
      }
      if (DAT_002ed33e == 0) {
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 2740, "Cannot load SCRIPT file") */
      }
      if (_DAT_00179c08 != -1) {
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 2786, "No WIN GAME conditions in script file.") */
      }
      uVar2 = 1;
      goto LAB_0002a4dc;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 2790, "Missing ENDIF's in script file.") */
  uVar2 = 0;
LAB_0002a4dc:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_02c6e2 (Ghidra: FUN_0002c6e2)
 * Prototype: void sub_02c6e2(void);
 * Address  : 0x2c6e2 (Size: 84 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2feca, 0x52c6d, 0x52ced
 * Callees  : 4 -> 0xdd920, 0xe6a10, 0xe7714, 0xe984c
 * Strings  :
 *   - 0x163116: "SAVE"
 *   - 0x16311d: "%s\SAVE.CAT"
 ******************************************************************************/
void FUN_0002c6e2(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_SAVE_CAT_0016311d,uVar1);
  iVar2 = FUN_000e984c();
  if (iVar2 == -1) {
    FUN_000e6a10();
  }
  return;
}

/******************************************************************************
 * Function : sub_02c736 (Ghidra: FUN_0002c736)
 * Prototype: undefined8 sub_02c736(void);
 * Address  : 0x2c736 (Size: 79 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2c785, 0x2c833, 0x2e6c4
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x163129: "SAVE"
 *   - 0x163130: "%s\SAVE.CAT"
 ******************************************************************************/
undefined8 FUN_0002c736(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_EDX;
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_SAVE_CAT_00163130,uVar1);
  iVar2 = FUN_000e98c8();
  return CONCAT44(in_EDX,(uint)(iVar2 != -1));
}

/******************************************************************************
 * Function : sub_02c785 (Ghidra: FUN_0002c785)
 * Prototype: longlong sub_02c785(void);
 * Address  : 0x2c785 (Size: 174 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5a47f
 * Callees  : 6 -> 0x2c736, 0x51374, 0x5b4e7, 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x16313c: "SAVE"
 *   - 0x163143: "%s\GAME%04d.SAV"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0002c785(void)

{
  undefined4 uVar1;
  int iVar2;
  uint in_EDX;
  undefined8 uVar3;
  undefined1 local_a4 [152];
  
  uVar3 = FUN_0002c736();
  if ((int)uVar3 != 0) {
    DAT_0019d0ac._0_1_ = DAT_002e78e9;
    ram0x0019d0ad = DAT_00179bfc;
    ram0x0019d0b1 = DAT_00179c00;
    DAT_0019d0b4._1_1_ = 0;
    FUN_000dd920((int)((ulonglong)uVar3 >> 0x20));
    uVar1 = FUN_000dd920();
    FUN_000e7714(local_a4,s__s_GAME_04d_SAV_00163143,uVar1);
    iVar2 = FUN_000e98c8();
    if (iVar2 != -1) {
      FUN_00051374();
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_0005b4e7();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_02c833 (Ghidra: FUN_0002c833)
 * Prototype: undefined8 sub_02c833(void);
 * Address  : 0x2c833 (Size: 571 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2dfac, 0x5a432
 * Callees  : 17 -> 0x270e0, 0x27320, 0x2c736, 0x2ca74, 0x35e3c, 0x44eb6, 0x51374, 0x5d35c, 0x627b5, 0x63122 ...
 * Strings  :
 *   - 0x163153: "SAVE"
 *   - 0x16315a: "%s\GAME%04d.SAV"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002c833(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined4 in_EDX;
  undefined1 local_c0 [152];
  undefined1 local_28;
  int local_27;
  int local_23;
  double local_1c;
  
  FUN_000270e0();
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_c0,s__s_GAME_04d_SAV_0016315a,uVar1);
  iVar2 = FUN_000e8980();
  if (iVar2 == -1) {
LAB_0002c88b:
    (&DAT_002e6ff4)[in_EAX * 0x11] = 0;
    FUN_0002c736();
  }
  else {
    iVar2 = FUN_000e8a80();
    if (iVar2 != 10) {
      FUN_000e8a1c();
      goto LAB_0002c88b;
    }
    FUN_000e8a1c();
    iVar2 = FUN_000e8a98();
    if (((iVar2 != 0x151825) || (local_27 != DAT_00179bfc)) || (local_23 != DAT_00179c00)) {
      iVar2 = FUN_000e8a98();
      if (((iVar2 == 0x151825) && (local_27 == DAT_00179bfc)) &&
         ((local_23 < 9 && (DAT_00179c00 == 10)))) goto LAB_0002c961;
      *(undefined4 *)(&DAT_0019d0cf + DAT_002f10ce._3_1_ * 0x4ef) = 0;
      DAT_002f10ce._3_1_ = '\0';
      DAT_002ebaf6 = 2;
      DAT_0019d0f4 = 1;
      DAT_0019d0b6 = DAT_0019d0b6 & 0xfe;
      DAT_002e78e9 = local_28;
      DAT_002e78ea = local_28;
      FUN_0005d35c();
LAB_0002ca5d:
      uVar1 = 1;
      goto LAB_0002ca62;
    }
LAB_0002c961:
    iVar2 = FUN_000e984c();
    if (iVar2 == 0x151825) {
      FUN_00044eb6();
      FUN_0002ca74();
      FUN_00051374();
      FUN_00063122();
      local_1c = (double)_DAT_0033401d;
      if ((_DAT_0033401d <= (float)_DAT_0016316a) || (_DAT_00163172 <= local_1c)) {
        DAT_002ee88d = 0;
      }
      else {
        DAT_002ee88d = 1;
      }
      iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
      *(undefined4 *)(&DAT_0019d589 + iVar2) = 0;
      *(undefined4 *)(&DAT_0019d58d + iVar2) = 0;
      *(undefined4 *)(&DAT_0019d0cf + iVar2) = 0;
      (&DAT_0019d0cb)[iVar2] = (&DAT_0019d0cb)[iVar2] & 0xf3;
      FUN_000627b5();
      FUN_00027320();
      if ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] != '\0') {
        FUN_00035e3c();
        iVar2 = (int)DAT_002f10ce._3_1_;
        *(undefined4 *)(&DAT_002e18a4 + iVar2 * 0x1508) = 0;
        *(undefined4 *)(&DAT_002e18a0 + iVar2 * 0x1508) = 1;
      }
      goto LAB_0002ca5d;
    }
  }
  uVar1 = 0;
LAB_0002ca62:
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_02ca74 (Ghidra: FUN_0002ca74)
 * Prototype: void sub_02ca74(void);
 * Address  : 0x2ca74 (Size: 183 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2c833, 0x5d7b5
 * Callees  : 10 -> 0x21216, 0x29d96, 0x41019, 0x44eb6, 0x45402, 0x543dd, 0x5d280, 0x6f3d6, 0x784ae, 0xd17a8
 ******************************************************************************/
void FUN_0002ca74(void)

{
  int iVar1;
  
  *(undefined4 *)(&DAT_0019d0cf + DAT_002f10ce._3_1_ * 0x4ef) = 0;
  FUN_00044eb6();
  FUN_000d17a8();
  DAT_00377768 = 0;
  iVar1 = 0;
  do {
    if (((&DAT_0019d0c8)[iVar1] & 1) != 0) {
      FUN_000784ae();
    }
    iVar1 = iVar1 + 0x4ef;
  } while (iVar1 != 0x18ab);
  DAT_002f10d2 = &DAT_002ddd60;
  DAT_002f10d6 = &DAT_002e0589;
  FUN_00029d96();
  FUN_00041019();
  FUN_000543dd();
  FUN_0005d280();
  FUN_00045402();
  FUN_00021216();
  FUN_0006f3d6();
  return;
}

/******************************************************************************
 * Function : sub_02cb2b (Ghidra: FUN_0002cb2b)
 * Prototype: undefined8 sub_02cb2b(void);
 * Address  : 0x2cb2b (Size: 405 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x29bfe
 * Callees  : 9 -> 0x150f0, 0x157ac, 0x2a5db, 0xb21f0, 0xdd920, 0xe6a10, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x16317a: "LEVELS"
 *   - 0x163183: "%s\MAP%05d.clm"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0002cbc7) */

undefined8 FUN_0002cb2b(void)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int extraout_EDX;
  int *piVar7;
  undefined1 local_c0 [152];
  int local_28;
  int *local_24;
  undefined4 *local_20;
  int *local_1c;
  
  FUN_000dd920();
  uVar4 = FUN_000dd920();
  FUN_000e7714(local_c0,s__s_MAP_05d_clm_00163183,uVar4);
  FUN_000150f0();
  cVar3 = FUN_000e8960();
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_000b21f0();
    FUN_000150f0();
    FUN_000e984c();
    local_28 = *DAT_00199228;
    if (local_28 < 0) {
      local_28 = 0;
    }
    else if (0x7ff < local_28) {
      local_28 = 0x7ff;
    }
    DAT_002e7beb = *(ushort *)(DAT_00199228 + 4);
    if (0x7ff < DAT_002e7beb) {
      DAT_002e7beb = 0x7ff;
    }
    local_28 = local_28 * 0x18;
    piVar7 = DAT_00199228 + 2;
    local_20 = &DAT_0019e973;
    local_1c = DAT_00199228 + 6;
    iVar6 = 0;
    while (iVar6 <= local_28) {
      FUN_000e6a10();
      *(short *)((int)&DAT_0019e973 + extraout_ECX_00 + 3) = (short)*piVar7;
      local_24 = local_1c;
      *(undefined2 *)((int)&DAT_0019e977 + extraout_ECX_00 + 1) = *(undefined2 *)((int)piVar7 + 2);
      *(char *)((int)&DAT_0019e977 + extraout_ECX_00 + 3) = (char)piVar7[1];
      iVar6 = extraout_ECX_00;
      for (piVar5 = piVar7; piVar5 != local_1c; piVar5 = (int *)((int)piVar5 + 2)) {
        *(undefined2 *)((int)&DAT_0019e97b + iVar6) = *(undefined2 *)((int)piVar5 + 6);
        iVar6 = iVar6 + 2;
      }
      local_1c = (int *)((int)local_1c + 0x16);
      local_20 = local_20 + 6;
      piVar7 = (int *)((int)piVar7 + 0x16);
      cVar3 = FUN_000157ac();
      pbVar1 = (byte *)((int)&DAT_0019e973 + extraout_EDX + 2);
      *pbVar1 = *pbVar1 & 0xf;
      pbVar1 = (byte *)((int)&DAT_0019e973 + extraout_EDX + 2);
      *pbVar1 = *pbVar1 | cVar3 << 4;
      iVar6 = extraout_ECX + 0x18;
    }
    iVar6 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar6 = iVar6 + 5;
      *(short *)(&DAT_0019e973 + (*(uint *)((int)&DAT_00279203 + iVar2) & 0x7ff) * 6) =
           *(short *)(&DAT_0019e973 + (*(uint *)((int)&DAT_00279203 + iVar2) & 0x7ff) * 6) + 1;
    } while (iVar6 != 0x50000);
    FUN_0002a5db();
    uVar4 = 1;
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_e14r432q_system_should_able_02cdc8 (Ghidra: FUN_0002cdc8)
 * Prototype: void dk_e14r432q_system_should_able_02cdc8(void);
 * Address  : 0x2cdc8 (Size: 928 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:3175; file.cpp:3200; file.cpp:3247 ("E14R432Q#222564-3; SYSTEM ERROR I should be able to find a column here"); file.cpp:3273 ("Could not load column set")
 * Naming   : String 'E14R432Q#222564-3; SYSTEM ERROR I should be able to find a c'
 * Callers  : 1 -> 0x2a25c
 * Callees  : 10 -> 0x150f0, 0x15318, 0x1534a, 0x15386, 0xdd920, 0xddaf0, 0xe6a10, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x163206: "file.cpp"
 *   - 0x163245: "file.cpp"
 *   - 0x163295: "file.cpp"
 *   - 0x1632b6: "file.cpp"
 *   - 0x1632d9: "file.cpp"
 *   - 0x163315: "file.cpp"
 *   - 0x1631ce: "DATA"
 *   - 0x1631d5: "%s\SLABS.CLM"
 *   - 0x1631e2: "%d columns in slab set, limit is %d"
 *   - 0x16320f: "DATA"
 *   - 0x163216: "%s\SLABS.DAT"
 *   - 0x163223: "%d slabs in slab set, limit is %d"
 *   - 0x16324e: "E14R432Q#222564-3; SYSTEM ERROR I should be able to find a column here"
 *   - 0x16329e: "Could not load slab set"
 *   - 0x1632bf: "Could not load column set"
 *   - 0x1632e2: "DATA"
 *   - 0x1632e9: "%s\SLABS.TNG"
 *   - 0x1632f6: "Could not load slab object set"
 ******************************************************************************/
void FUN_0002cdc8(void)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *extraout_ECX;
  int *extraout_ECX_00;
  short *extraout_ECX_01;
  short *psVar7;
  short *extraout_ECX_02;
  short *extraout_ECX_03;
  short *extraout_ECX_04;
  int iVar8;
  int iVar9;
  undefined1 local_ec [157];
  short local_4f;
  undefined2 local_4c;
  undefined4 local_3c;
  undefined2 uStack_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  short *local_24;
  undefined2 *local_20;
  int local_1c;
  
  local_3c = DAT_00334624;
  uStack_38 = DAT_00334628;
  FUN_000e6a10();
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_ec,s__s_SLABS_CLM_001631d5,uVar3);
  FUN_000150f0();
  cVar2 = FUN_000e8960();
  if (cVar2 != '\0') {
    FUN_000e984c();
    iVar8 = *DAT_00199228;
    if (0x800 < iVar8) {
      FUN_000e7714(&DAT_0019cbac,s__d_columns_in_slab_set__limit_is_001631e2,iVar8,0x800);
      FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 3175, g_log_buf) */
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (0x800 < iVar8) {
      iVar8 = 0x800;
    }
    piVar4 = DAT_00199228 + 7;
    for (iVar9 = 1; iVar9 < iVar8; iVar9 = iVar9 + 1) {
      *(undefined2 *)piVar4 = 0;
      piVar4 = piVar4 + 6;
    }
    FUN_000dd920();
    uVar3 = FUN_000dd920();
    FUN_000e7714(local_ec,s__s_SLABS_DAT_00163216,uVar3); /* 0x163216="%s\SLABS.DAT" */
    FUN_000150f0();
    cVar2 = FUN_000e8960();
    if (cVar2 != '\0') {
      FUN_000e984c();
      iVar9 = (int)DAT_001b2e08;
      if (0x518 < iVar9) {
        FUN_000e7714(&DAT_0019cbac,s__d_slabs_in_slab_set__limit_is___00163223,iVar9,0x518);
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 3200, g_log_buf) */
      }
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x518 < iVar9) {
        iVar9 = 0x518;
      }
      piVar4 = DAT_00199228 + 1;
      local_28 = iVar9 * 0x12;
      local_20 = &DAT_001b2e0a;
      for (iVar6 = 0; iVar6 < local_28; iVar6 = iVar6 + 0x12) {
        local_34 = (int)&DAT_001b2e0a + iVar6;
        iVar5 = 0;
        do {
          if (*(short *)(local_34 + iVar5) < 0) {
            *(short *)(piVar4 + *(short *)(local_34 + iVar5) * -6) =
                 (short)piVar4[*(short *)(local_34 + iVar5) * -6] + 1;
          }
          iVar5 = iVar5 + 2;
        } while (iVar5 != 0x12);
      }
      local_30 = piVar4;
      for (iVar6 = 1; piVar4 = piVar4 + 6, iVar6 < iVar8; iVar6 = iVar6 + 1) {
        if ((short)*piVar4 != 0) {
          iVar5 = FUN_0001534a();
          piVar4 = extraout_ECX;
          if (iVar5 == 0) {
            iVar5 = FUN_00015386();
            piVar4 = extraout_ECX_00;
          }
          pbVar1 = (byte *)((int)&DAT_0019e973 + iVar5 * 0x18 + 2);
          *pbVar1 = *pbVar1 | 1;
        }
      }
      for (local_2c = 0; local_2c < iVar9; local_2c = local_2c + 1) {
        psVar7 = local_20 + local_2c * 9;
        local_24 = psVar7 + 9;
        do {
          if (*psVar7 < 0) {
            iVar8 = FUN_0001534a();
            psVar7 = extraout_ECX_02;
            if (iVar8 != 0) goto LAB_0002d031;
            FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 3247, "E14R432Q#222564-3; SYSTEM ERROR I should be able to find a column here") */
            psVar7 = extraout_ECX_01;
          }
          else {
            local_4f = *psVar7;
            iVar8 = FUN_0001534a();
            psVar7 = extraout_ECX_03;
            if (iVar8 == 0) {
              iVar8 = FUN_00015386();
              pbVar1 = (byte *)((int)&DAT_0019e973 + iVar8 * 0x18 + 2);
              *pbVar1 = *pbVar1 | 1;
              psVar7 = extraout_ECX_04;
            }
LAB_0002d031:
            *psVar7 = -(short)iVar8;
          }
          psVar7 = psVar7 + 1;
        } while (psVar7 != local_24);
      }
      goto LAB_0002d088;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 3273, "Could not load column set") */
LAB_0002d088:
  local_1c = 0;
  iVar8 = 0;
  do {
    iVar9 = local_1c;
    FUN_000e6a10();
    local_4f = *(short *)((int)&local_3c + iVar8);
    iVar6 = 0;
    do {
      local_4c = (&DAT_00179cc0)[iVar6];
      FUN_00015318();
      iVar5 = FUN_0001534a();
      if (iVar5 == 0) {
        iVar5 = FUN_00015386();
      }
      pbVar1 = (byte *)((int)&DAT_0019e973 + iVar5 * 0x18 + 2);
      *pbVar1 = *pbVar1 | 1;
      iVar6 = iVar6 + 1;
      *(short *)(&DAT_002e78c4 + iVar9) = -(short)iVar5;
      iVar9 = iVar9 + 2;
    } while (iVar6 < 6);
    iVar8 = iVar8 + 2;
    local_1c = local_1c + 0xc;
  } while (iVar8 != 6);
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_ec,s__s_SLABS_TNG_001632e9,uVar3);
  FUN_000150f0();
  cVar2 = FUN_000e8960();
  if (cVar2 == '\0') {
    FUN_000ddaf0();
  }
  else {
    FUN_000e984c();
  }
  return;
}

/******************************************************************************
 * Function : dk_slab_type_increase_size_02d168 (Ghidra: FUN_0002d168)
 * Prototype: undefined8 dk_slab_type_increase_size_02d168(void);
 * Address  : 0x2d168 (Size: 209 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp:3332 ("Slab Type > 255, increase size of SlabMap.Slab"); file.cpp:3361 ("Could not find slab map file")
 * Naming   : String 'Slab Type > 255, increase size of SlabMap.Slab'
 * Callers  : 1 -> 0x2a25c
 * Callees  : 9 -> 0x150f0, 0x457bd, 0xd96c0, 0xd988c, 0xdd920, 0xddaf0, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x163365: "file.cpp"
 *   - 0x16338b: "file.cpp"
 *   - 0x16331e: "LEVELS"
 *   - 0x163327: "%s\map%05d.slb"
 *   - 0x163336: "Slab Type > 255, increase size of SlabMap.Slab"
 *   - 0x16336e: "Could not find slab map file"
 ******************************************************************************/
undefined8 FUN_0002d168(void)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *extraout_ECX;
  ushort *puVar5;
  ushort *extraout_ECX_00;
  undefined4 in_EDX;
  int iVar6;
  int iVar7;
  undefined1 local_b0 [152];
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_b0,s__s_map_05d_slb_00163327,uVar3);
  FUN_000150f0();
  cVar2 = FUN_000e8960();
  if (cVar2 == '\0') {
    uVar4 = FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 3332, "Slab Type > 255, increase size of SlabMap.Slab") */
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    FUN_000e984c();
    puVar5 = extraout_ECX;
    iVar7 = 0;
    do {
      if (0xff < *puVar5) {
        FUN_000ddaf0(); /* LbErrorLog("file.cpp", line 3361, "Could not find slab map file") */
        puVar5 = extraout_ECX_00;
      }
      iVar6 = iVar7 + 6;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      (&DAT_002d33c5)[iVar7] = (char)uVar1;
      iVar7 = iVar6;
    } while (iVar6 != 0xa956);
    FUN_000d96c0();
    FUN_000d988c();
    uVar3 = FUN_000457bd();
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_02d239 (Ghidra: FUN_0002d239)
 * Prototype: undefined8 sub_02d239(void);
 * Address  : 0x2d239 (Size: 218 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xdd920, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x163394: "LEVELS"
 *   - 0x16339d: "%s\map%05d.slb"
 *   - 0x1633ac: "LEVELS"
 *   - 0x1633b5: "%s\map%05d.wlb"
 ******************************************************************************/
undefined8 FUN_0002d239(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  ushort *puVar4;
  undefined1 local_a8 [152];
  
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_a8,s__s_map_05d_slb_0016339d,uVar2);
  iVar3 = 0;
  puVar4 = DAT_00199228;
  do {
    pbVar1 = &DAT_002d33c5 + iVar3;
    iVar3 = iVar3 + 6;
    *puVar4 = (ushort)*pbVar1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0xa956);
  FUN_000e98c8();
  FUN_000dd920(extraout_ECX);
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_a8,s__s_map_05d_wlb_001633b5,uVar2);
  iVar3 = 0;
  puVar4 = DAT_00199228;
  do {
    pbVar1 = &DAT_002d33ca + iVar3;
    iVar3 = iVar3 + 6;
    *(byte *)puVar4 = (*pbVar1 & 0x1f) >> 3;
    puVar4 = (ushort *)((int)puVar4 + 1);
  } while (iVar3 != 0xa956);
  uVar2 = FUN_000e98c8();
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),1));
}

/******************************************************************************
 * Function : sub_02d313 (Ghidra: FUN_0002d313)
 * Prototype: undefined1 sub_02d313(void);
 * Address  : 0x2d313 (Size: 26 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d32d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_0002d313(void)

{
  char in_AL;
  
  if ((((in_AL != '\n') && (in_AL != ',')) && (in_AL != ' ')) &&
     ((in_AL != '\t' && (in_AL != '\r')))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_data_ceiling_txt_02d32d (Ghidra: FUN_0002d32d)
 * Prototype: void dk_data_ceiling_txt_02d32d(void);
 * Address  : 0x2d32d (Size: 197 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : String 'data\ceiling.txt'
 * Callers  : 1 -> 0x929c0
 * Callees  : 7 -> 0x150f0, 0x2d313, 0xe6a10, 0xe8980, 0xe8a1c, 0xe8a80, 0xea21d
 * Strings  :
 *   - 0x1633c4: "data\ceiling.txt"
 ******************************************************************************/
void FUN_0002d32d(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  undefined1 local_20 [4];
  undefined1 local_1c;
  
  FUN_000150f0();
  iVar3 = FUN_000e8980();
  if (iVar3 != -1) {
    iVar3 = 1;
    iVar5 = 0;
    do {
      if (iVar3 != 1) break;
      do {
        iVar3 = FUN_000e8a80();
        if (iVar3 != 1) break;
        cVar1 = FUN_0002d313();
        iVar3 = extraout_EDX;
      } while (cVar1 == '\0');
      if (iVar3 != 1) break;
      FUN_000e6a10();
      iVar3 = 0;
      do {
        local_20[iVar3] = local_1c;
        iVar3 = iVar3 + 1;
        iVar4 = FUN_000e8a80();
        if (iVar4 != 1) break;
        cVar1 = FUN_0002d313();
      } while (cVar1 != '\0');
      iVar4 = iVar5 + 2;
      uVar2 = FUN_000ea21d();
      *(undefined2 *)((int)&DAT_00387e1c + iVar5) = uVar2;
      iVar3 = extraout_EDX_00;
      iVar5 = iVar4;
    } while (iVar4 < 0x4a0);
    FUN_000e8a1c();
  }
  return;
}

/******************************************************************************
 * Function : sub_02d3f4 (Ghidra: FUN_0002d3f4)
 * Prototype: void sub_02d3f4(undefined1 param_1);
 * Address  : 0x2d3f4 (Size: 179 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d6f0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002d3f4(undefined1 param_1)

{
  int *in_EAX;
  undefined1 in_CL;
  uint in_EDX;
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int local_14;
  
  if ((int)in_EDX < 0) {
    in_EDX = 0;
  }
  if ((DAT_0033463c <= (int)in_EDX) || (unaff_EBX <= (int)in_EDX)) {
    return;
  }
  iVar4 = 0;
  piVar1 = in_EAX;
  do {
    if (*in_EAX <= iVar4) {
      *(short *)((int)in_EAX + *in_EAX * 2 + 4) = (short)in_EDX;
      *(undefined1 *)(*in_EAX + 0x38 + (int)in_EAX) = in_CL;
      *(undefined1 *)(*in_EAX + 0x52 + (int)in_EAX) = param_1;
LAB_0002d49f:
      *in_EAX = *in_EAX + 1;
      return;
    }
    if (in_EDX == *(ushort *)(piVar1 + 1)) {
      *(undefined1 *)(iVar4 + 0x38 + (int)in_EAX) = in_CL;
      *(undefined1 *)(iVar4 + 0x52 + (int)in_EAX) = param_1;
      return;
    }
    if ((int)in_EDX < (int)(uint)*(ushort *)(piVar1 + 1)) {
      local_14 = *in_EAX;
      iVar3 = local_14 * 2 + (int)in_EAX;
      iVar2 = local_14 + (int)in_EAX;
      while (iVar4 < local_14) {
        *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(iVar3 + 2);
        *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(iVar2 + 0x37);
        local_14 = local_14 + -1;
        iVar3 = iVar3 + -2;
        *(undefined1 *)(iVar2 + 0x52) = *(undefined1 *)(iVar2 + 0x51);
        iVar2 = iVar2 + -1;
      }
      *(short *)((int)in_EAX + iVar4 * 2 + 4) = (short)in_EDX;
      *(undefined1 *)(iVar4 + 0x38 + (int)in_EAX) = in_CL;
      *(undefined1 *)(iVar4 + 0x52 + (int)in_EAX) = param_1;
      goto LAB_0002d49f;
    }
    piVar1 = (int *)((int)piVar1 + 2);
    iVar4 = iVar4 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_02d4a7 (Ghidra: FUN_0002d4a7)
 * Prototype: void sub_02d4a7(void);
 * Address  : 0x2d4a7 (Size: 158 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d8e2
 * Callees  : 1 -> 0xe8c83
 ******************************************************************************/
void FUN_0002d4a7(void)

{
  char *pcVar1;
  int *piVar2;
  ushort *puVar3;
  int *in_EAX;
  int *extraout_ECX;
  int in_EDX;
  int *piVar4;
  int *piVar5;
  int local_18;
  
  local_18 = 0;
  piVar4 = in_EAX;
  piVar5 = in_EAX;
  while (local_18 < *in_EAX) {
    puVar3 = (ushort *)(piVar4 + 1);
    pcVar1 = (char *)((int)piVar5 + 0x52);
    piVar2 = piVar5 + 0xe;
    local_18 = local_18 + 1;
    piVar4 = (int *)((int)piVar4 + 2);
    piVar5 = (int *)((int)piVar5 + 1);
    FUN_000e8c83(in_EDX * DAT_00334634,
                 DAT_00334630 + (in_EDX + *pcVar1) * DAT_00334638 + (uint)*puVar3 +
                 (int)(char)*piVar2);
    in_EAX = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : sub_02d545 (Ghidra: FUN_0002d545)
 * Prototype: void sub_02d545(void);
 * Address  : 0x2d545 (Size: 356 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d861
 * Callees  : 1 -> 0xe8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d545(void)

{
  int *in_EAX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int unaff_EBX;
  int iVar2;
  longdouble lVar3;
  
  iVar2 = in_EDX * 0x32;
  iVar1 = unaff_EBX * 0x3c;
  if ((in_EDX & 1) != 0) {
    iVar1 = iVar1 + 0x1e;
  }
  *in_EAX = iVar2 + -0x23;
  in_EAX[6] = iVar1 + 0x1e;
  in_EAX[1] = iVar2 + -0xf;
  in_EAX[2] = iVar2 + 0xf;
  in_EAX[7] = iVar1;
  in_EAX[8] = iVar1;
  in_EAX[3] = iVar2 + 0x23;
  in_EAX[9] = iVar1 + 0x1e;
  in_EAX[4] = iVar2 + 0xf;
  in_EAX[10] = iVar1 + 0x3c;
  in_EAX[0xb] = iVar1 + 0x3c;
  in_EAX[5] = iVar2 + -0xf;
  do {
    lVar3 = (longdouble)FUN_000e8d50();
    *extraout_EDX = (int)ROUND(lVar3);
    lVar3 = (longdouble)FUN_000e8d50();
    extraout_EDX_00[5] = (int)ROUND(lVar3);
  } while (extraout_EDX_00 != in_EAX + 6);
  lVar3 = (longdouble)FUN_000e8d50();
  *(int *)(extraout_ECX + 0x30) = (int)ROUND(lVar3);
  lVar3 = (longdouble)FUN_000e8d50();
  *(int *)(extraout_ECX_00 + 0x34) = (int)ROUND(lVar3);
  return;
}

/******************************************************************************
 * Function : sub_02d6a9 (Ghidra: FUN_0002d6a9)
 * Prototype: void sub_02d6a9(void);
 * Address  : 0x2d6a9 (Size: 71 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xea430
 ******************************************************************************/
void FUN_0002d6a9(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 auStack_24 [2];
  undefined1 local_1c [4];
  
  iVar1 = 0;
  puVar2 = local_1c;
  do {
    iVar1 = iVar1 + 1;
    *(undefined4 *)(puVar2 + -4) = 0xff;
    *(undefined4 *)(puVar2 + -8) = 0x2d6df;
    FUN_000ea430();
    puVar2 = puVar2 + -4;
  } while (iVar1 < 6);
  return;
}

/******************************************************************************
 * Function : sub_02d6f0 (Ghidra: FUN_0002d6f0)
 * Prototype: undefined8 sub_02d6f0(void);
 * Address  : 0x2d6f0 (Size: 369 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d861
 * Callees  : 1 -> 0x2d3f4
 ******************************************************************************/
undefined8 FUN_0002d6f0(void)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 in_EDX;
  int iVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  undefined1 *puVar7;
  int iVar8;
  int *apiStack_48 [5];
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  iVar5 = 0;
  iVar3 = in_EAX;
  for (iVar8 = 0; iVar1 = iVar5 * 4 + in_EAX, iVar8 < 6; iVar8 = iVar8 + 1) {
    if (*(int *)(iVar3 + 0x18) < *(int *)(iVar1 + 0x18)) {
      iVar5 = iVar8;
    }
    iVar3 = iVar3 + 4;
  }
  local_2c = *(int *)(iVar1 + 0x18);
  local_28 = (iVar5 + 1) % 6;
  apiStack_48[4] = (int *)(local_2c * 0x6c);
  local_20 = 0;
  local_24 = 0;
  piVar2 = apiStack_48[4];
  iVar3 = local_28;
  iVar5 = (iVar5 + 5) % 6;
  ppiVar6 = apiStack_48 + 2;
  while( true ) {
    while (iVar8 = iVar5, local_20 == 0) {
      piVar2 = (int *)((local_28 + 5) / 6);
      local_28 = (local_28 + 5) % 6;
      if (iVar3 == local_28) goto LAB_0002d6e9;
      iVar8 = *(int *)(in_EAX + local_28 * 4);
      local_34 = iVar8 * 0x10000;
      local_1c = 6;
      piVar2 = (int *)(in_EAX + ((local_28 + 5) % 6) * 4);
      local_20 = piVar2[6] - *(int *)(in_EAX + 0x18 + local_28 * 4);
      if (0 < local_20) {
        apiStack_48[3] = (int *)((*piVar2 * 0x10000 + iVar8 * -0x10000) / local_20);
        piVar2 = apiStack_48[3];
      }
    }
    while (local_24 == 0) {
      piVar2 = (int *)((iVar8 + 1) / 6);
      iVar8 = (iVar8 + 1) % 6;
      if (iVar8 == iVar5) goto LAB_0002d6e9;
      piVar4 = (int *)(((iVar8 + 1) % 6) * 4 + in_EAX);
      local_24 = piVar4[6] - *(int *)(in_EAX + 0x18 + iVar8 * 4);
      iVar3 = *(int *)(in_EAX + iVar8 * 4);
      local_30 = (int *)(iVar3 * 0x10000);
      piVar2 = local_30;
      if (0 < local_24) {
        piVar2 = (int *)((*piVar4 * 0x10000 + iVar3 * -0x10000) / local_24);
        apiStack_48[2] = piVar2;
      }
    }
    if ((local_20 < 1) || (local_24 < 1)) break;
    puVar7 = (undefined1 *)ppiVar6;
    if ((local_2c < DAT_00334640) && (-1 < local_2c)) {
      puVar7 = (undefined1 *)((int)ppiVar6 + -4);
      *(undefined4 *)((int)ppiVar6 + -4) = *(undefined4 *)(in_EAX + 0x34);
      *(undefined4 *)((int)ppiVar6 + -8) = 0x2d843;
      FUN_0002d3f4();
    }
    local_20 = local_20 + -1;
    local_24 = local_24 + -1;
    apiStack_48[4] = apiStack_48[4] + 0x1b;
    local_34 = local_34 + (int)apiStack_48[3];
    local_2c = local_2c + 1;
    local_30 = (int *)((int)local_30 + (int)apiStack_48[2]);
    piVar2 = apiStack_48[2];
    iVar3 = local_28;
    iVar5 = iVar8;
    ppiVar6 = (int **)puVar7;
  }
LAB_0002d6e9:
  return CONCAT44(in_EDX,piVar2);
}

/******************************************************************************
 * Function : sub_02d861 (Ghidra: FUN_0002d861)
 * Prototype: void sub_02d861(void);
 * Address  : 0x2d861 (Size: 129 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x27130
 * Callees  : 2 -> 0x2d545, 0x2d6f0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d861(void)

{
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  int iVar1;
  int iVar2;
  
  _DAT_00334644 = in_EAX >> 1;
  DAT_0033464c = DAT_00333193;
  _DAT_00334648 = in_EDX >> 1;
  iVar1 = 0;
  DAT_0033463c = in_EAX;
  DAT_00334640 = in_EDX;
  for (iVar2 = 0; iVar2 < DAT_00334640; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar1 + DAT_0033464c) = 0;
    iVar1 = iVar1 + 0x6c;
  }
  iVar1 = -0xc;
  do {
    do {
      FUN_0002d545();
      FUN_0002d6f0();
    } while (extraout_ECX < 0xd);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xd);
  return;
}

