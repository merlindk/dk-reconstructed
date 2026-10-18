/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: frontnet.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 129
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_032f12 (Ghidra: FUN_00032f12)
 * Prototype: undefined4 sub_032f12(void);
 * Address  : 0x32f12 (Size: 71 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x32e00
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00032f12(void)

{
  int *in_EAX;
  int iVar1;
  int *in_EDX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *in_EAX;
  if (iVar2 <= *in_EDX) {
    iVar2 = *in_EDX;
  }
  iVar3 = in_EAX[1];
  if (iVar3 <= in_EDX[1]) {
    iVar3 = in_EDX[1];
  }
  iVar4 = in_EAX[2];
  if (in_EDX[2] <= iVar4) {
    iVar4 = in_EDX[2];
  }
  iVar1 = in_EAX[3];
  if (in_EDX[3] <= iVar1) {
    iVar1 = in_EDX[3];
  }
  if ((iVar2 < iVar4) && (iVar3 < iVar1)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_032f5c (Ghidra: FUN_00032f5c)
 * Prototype: bool sub_032f5c(void);
 * Address  : 0x32f5c (Size: 14 bytes)
 * Module   : frontnet.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x35758, 0x61f77
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00032f5c(void)

{
  return DAT_00335dd7 < 2;
}

/******************************************************************************
 * Function : sub_032f6a (Ghidra: FUN_00032f6a)
 * Prototype: longlong sub_032f6a(void);
 * Address  : 0x32f6a (Size: 49 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2f541
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00032f6a(void)

{
  uint in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while( true ) {
    if (DAT_003358eb * 0xe <= iVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((byte)(&DAT_00335373)[iVar1] == in_EAX) break;
    iVar1 = iVar1 + 0xe;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_levelnamefile_add_blank_line_032f9b (Ghidra: FUN_00032f9b)
 * Prototype: void dk_levelnamefile_add_blank_line_032f9b(void);
 * Address  : 0x32f9b (Size: 241 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:288 ("LevelNameFile, Add a blank line at the end")
 * Naming   : String 'LevelNameFile, Add a blank line at the end'
 * Callers  : 2 -> 0x31a51, 0x33ead
 * Callees  : 2 -> 0x330ae, 0xddaf0
 * Strings  :
 *   - 0x16432f: "frontnet.cpp"
 *   - 0x164304: "LevelNameFile, Add a blank line at the end"
 ******************************************************************************/
void FUN_00032f9b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_10;
  
  DAT_003358eb = 0;
  DAT_003d98b4 = DAT_003346e8;
  pcVar6 = DAT_0033400d;
  while( true ) {
    if (99 < DAT_003358eb) {
      return;
    }
    iVar1 = FUN_000330ae();
    if (local_10 == 0) break;
    (&DAT_00335373)[DAT_003358eb * 0xe] = (undefined1)local_10;
    iVar2 = FUN_000330ae();
    (&DAT_00335374)[DAT_003358eb * 0xe] = (undefined1)local_10;
    iVar3 = FUN_000330ae();
    *(int *)((int)&DAT_00335375 + DAT_003358eb * 0xe) = local_10;
    iVar4 = FUN_000330ae();
    iVar5 = DAT_003358eb * 0xe;
    pcVar6 = pcVar6 + iVar4 + iVar3 + iVar2 + iVar1;
    *(int *)((int)&DAT_00335379 + iVar5) = local_10;
    *(char **)((int)&DAT_0033537d + iVar5) = pcVar6;
    while (*pcVar6 != '\n') {
      if (*pcVar6 == '\r') {
        *pcVar6 = '\0';
      }
      pcVar6 = pcVar6 + 1;
      if (DAT_00334011 <= pcVar6) {
        DAT_003358eb = DAT_003358eb + 1;
        FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 288, "LevelNameFile, Add a blank line at the end") */
        return;
      }
    }
    DAT_003358eb = DAT_003358eb + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_03308c (Ghidra: FUN_0003308c)
 * Prototype: uint sub_03308c(void);
 * Address  : 0x3308c (Size: 34 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x33c3a, 0x35758, 0x35c86, 0x5d35c
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0003308c(void)

{
  int in_EAX;
  int in_EDX;
  
  if (in_EAX == in_EDX) {
    return 1;
  }
  return *(uint *)(&DAT_0017b8c8 + in_EAX * 0x10 + in_EDX * 4) & (int)DAT_00335322;
}

/******************************************************************************
 * Function : sub_0330ae (Ghidra: FUN_000330ae)
 * Prototype: int sub_0330ae(void);
 * Address  : 0x330ae (Size: 50 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x32f9b
 * Callees  : 1 -> 0xea21d
 ******************************************************************************/
int FUN_000330ae(void)

{
  char *in_EAX;
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_000ea21d();
  piVar2 = (int *)((ulonglong)uVar3 >> 0x20);
  iVar1 = 0;
  *piVar2 = (int)uVar3;
  while (((&DAT_0017469c)[(byte)(*in_EAX + 1)] & 0x20) != 0) {
    in_EAX = in_EAX + 1;
    iVar1 = iVar1 + 1;
  }
  if (*piVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0330e0 (Ghidra: FUN_000330e0)
 * Prototype: void sub_0330e0(void);
 * Address  : 0x330e0 (Size: 118 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_000330e0(void)

{
  byte *in_EAX;
  int iVar1;
  
  if ((*in_EAX & 8) == 0) {
    iVar1 = 0;
  }
  else if ((*(int *)(in_EAX + 0x33) == 0) || (DAT_00334738 != *(int *)(in_EAX + 0x33))) {
    if ((*(int *)(in_EAX + 0x33) == 0x11) ||
       ((*(int *)(in_EAX + 0x33) == 0x24 || (*(int *)(in_EAX + 0x33) == 0x26)))) {
      iVar1 = 0x1f;
    }
    else {
      iVar1 = 0x35;
    }
  }
  else if (((DAT_00334738 == 0x11) || (DAT_00334738 == 0x24)) || (DAT_00334738 == 0x26)) {
    iVar1 = 0x20;
  }
  else {
    iVar1 = 0x36;
  }
  if (iVar1 != 0) {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_033156 (Ghidra: FUN_00033156)
 * Prototype: undefined8 sub_033156(void);
 * Address  : 0x33156 (Size: 5 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2dfac, 0x33bfb, 0x35758, 0x35d29, 0x36223
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00033156(void)

{
  char cVar1;
  int extraout_ECX;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_00335dd7 == 0) {
    puVar2 = &DAT_00335ddb;
  }
  else {
    if (DAT_00335dd7 != 1) {
      uVar3 = 4;
      DAT_0019d0ba = DAT_0019d0ba & 0xef;
      puVar2 = (undefined *)0x0;
      goto LAB_0003319f;
    }
    puVar2 = &DAT_00335dfb;
  }
  uVar3 = 2;
  DAT_0019d0ba = DAT_0019d0ba | 0x10;
LAB_0003319f:
  FUN_000e6a10();
  uVar4 = DAT_0017b8c0;
  cVar1 = FUN_000ed4e0(DAT_0017b8b8,DAT_0017b8bc,DAT_0017b8c0,DAT_0017b8c4,uVar3,&DAT_003358ef,0xc,
                       &DAT_00335218,puVar2);
  if (cVar1 == '\0') {
    DAT_00335dd7 = extraout_ECX;
    if ((DAT_0019d0ba & 0x10) != 0) {
      FUN_000ed034();
    }
    FUN_0002e8a7();
    uVar3 = 1;
  }
  else {
    if (extraout_ECX != 0) {
      FUN_0003325d();
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar4,uVar3);
}

/******************************************************************************
 * Function : sub_03315b (Ghidra: FUN_0003315b)
 * Prototype: undefined8 sub_03315b(void);
 * Address  : 0x3315b (Size: 200 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x34070, 0x3442b
 * Callees  : 5 -> 0x2e8a7, 0x3325d, 0xe6a10, 0xed034, 0xed4e0
 ******************************************************************************/
undefined8 FUN_0003315b(void)

{
  char cVar1;
  int in_EAX;
  int extraout_ECX;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (in_EAX == 0) {
    puVar2 = &DAT_00335ddb;
  }
  else {
    if (in_EAX != 1) {
      uVar3 = 4;
      DAT_0019d0ba = DAT_0019d0ba & 0xef;
      puVar2 = (undefined *)0x0;
      goto LAB_0003319f;
    }
    puVar2 = &DAT_00335dfb;
  }
  uVar3 = 2;
  DAT_0019d0ba = DAT_0019d0ba | 0x10;
LAB_0003319f:
  FUN_000e6a10();
  uVar4 = DAT_0017b8c0;
  cVar1 = FUN_000ed4e0(DAT_0017b8b8,DAT_0017b8bc,DAT_0017b8c0,DAT_0017b8c4,uVar3,&DAT_003358ef,0xc,
                       &DAT_00335218,puVar2);
  if (cVar1 == '\0') {
    DAT_00335dd7 = extraout_ECX;
    if ((DAT_0019d0ba & 0x10) != 0) {
      FUN_000ed034();
    }
    FUN_0002e8a7();
    uVar3 = 1;
  }
  else {
    if (extraout_ECX != 0) {
      FUN_0003325d();
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar4,uVar3);
}

/******************************************************************************
 * Function : sub_033223 (Ghidra: FUN_00033223)
 * Prototype: void sub_033223(void);
 * Address  : 0x33223 (Size: 46 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Control flow encountered bad instruction data */

void FUN_00033223(void)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  char *pcVar3;
  int *piVar4;
  char *in_ECX;
  int *in_EDX;
  byte *unaff_EBX;
  int unaff_ESI;
  byte in_AF;
  
  *(int *)unaff_EBX = *(int *)unaff_EBX - in_EAX;
  bVar2 = *unaff_EBX;
  bVar1 = (byte)in_EAX;
  *unaff_EBX = *unaff_EBX - bVar1;
  pcVar3 = (char *)(CONCAT31((int3)((uint)in_EAX >> 8),
                             bVar1 + (9 < (bVar1 & 0xf) | in_AF) * '\x06' +
                             (0x99 < bVar1 || bVar2 < bVar1) * '`') + *in_EDX);
  bVar2 = (byte)pcVar3;
  *in_ECX = *in_ECX + bVar2;
  *pcVar3 = *pcVar3 + bVar2;
  bVar2 = bVar2 ^ *unaff_EBX;
  piVar4 = (int *)CONCAT31((int3)(CONCAT22((short)((uint)pcVar3 >> 0x10),
                                           CONCAT11((char)((uint)pcVar3 >> 8) + (char)in_ECX + bVar2
                                                    ,bVar2)) >> 8),bVar2 ^ *unaff_EBX);
  pcVar3 = (char *)((int)in_EDX + unaff_ESI + 0x32b40003);
  *pcVar3 = *pcVar3 + (char)((uint)unaff_EBX >> 8);
  pcVar3 = (char *)((int)in_EDX + unaff_ESI + 0x32840004);
  *pcVar3 = *pcVar3 + (char)((uint)((int)piVar4 + *piVar4) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/******************************************************************************
 * Function : sub_03325d (Ghidra: FUN_0003325d)
 * Prototype: void sub_03325d(void);
 * Address  : 0x3325d (Size: 64 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:467 ("Unknown modem error")
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3315b, 0x349d9, 0x34a8a
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x164350: "frontnet.cpp"
 *   - 0x16433c: "Unknown modem error"
 ******************************************************************************/
void FUN_0003325d(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  code *pcVar3;
  
  if (0x329 < in_EAX + 0x322U) {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 467, "Unknown modem error") */
    return;
  }
  iVar2 = 10;
  pcVar3 = FUN_00033223;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    sVar1 = *(short *)pcVar3;
    pcVar3 = pcVar3 + 2;
  } while ((short)(in_EAX + 0x322U) != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0003327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x33235))();
  return;
}

/******************************************************************************
 * Function : sub_033350 (Ghidra: FUN_00033350)
 * Prototype: undefined8 sub_033350(void);
 * Address  : 0x33350 (Size: 531 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
undefined8 FUN_00033350(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 in_EDX;
  int iVar4;
  int local_38;
  int local_34;
  int local_30;
  
  uVar3 = *(uint *)(in_EAX + 0x33);
  if (0x58 < uVar3) {
    if (uVar3 < 0x5a) {
      iVar4 = 3;
    }
    else {
      if (0x5a < uVar3) {
        if (uVar3 < 0x5c) {
          iVar4 = 4;
        }
        else {
          if (uVar3 != 0x5e) goto LAB_000333ba;
          iVar4 = 10;
        }
        goto LAB_00033380;
      }
      iVar4 = 4;
    }
    bVar1 = false;
    goto LAB_000333bf;
  }
  if (uVar3 < 0x19) {
    if (uVar3 != 0x18) {
LAB_000333ba:
      iVar4 = 0;
      bVar1 = false;
      goto LAB_000333bf;
    }
    iVar4 = 2;
  }
  else if (uVar3 < 0x1a) {
    iVar4 = 3;
  }
  else {
    if (uVar3 != 0x1a) goto LAB_000333ba;
    iVar4 = 7;
  }
LAB_00033380:
  bVar1 = true;
LAB_000333bf:
  local_38 = 0;
  do {
    FUN_0013a710();
    local_38 = local_38 + 1;
  } while (local_38 < 6);
  if (bVar1) {
    FUN_0013a710();
  }
  for (; 0 < iVar4; iVar4 = iVar4 - iVar2) {
    local_30 = 0;
    do {
      FUN_0013a710();
      local_30 = local_30 + 1;
    } while (local_30 < 6);
    if (bVar1) {
      FUN_0013a710();
    }
    if (iVar4 < 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
  }
  local_34 = 0;
  iVar4 = DAT_00334728 + 0x11a;
  do {
    local_34 = local_34 + 1;
    FUN_0013a710();
    uVar3 = (uint)*(byte *)(iVar4 + 4);
    iVar4 = iVar4 + 6;
  } while (local_34 < 6);
  if (bVar1) {
    uVar3 = FUN_0013a710();
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_button_type_033563 (Ghidra: FUN_00033563)
 * Prototype: void dk_button_type_033563(void);
 * Address  : 0x33563 (Size: 556 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:580 ("Unknown button type")
 * Naming   : String 'Unknown button type'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0x13a710
 * Strings  :
 *   - 0x164371: "frontnet.cpp"
 *   - 0x16435d: "Unknown button type"
 ******************************************************************************/
void FUN_00033563(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int local_1c;
  
  uVar1 = *(uint *)(in_EAX + 0x33);
  if (uVar1 < 0x19) {
    if (uVar1 != 0x18) {
LAB_0003359d:
      FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 580, "Unknown button type") */
      return;
    }
    local_1c = 2;
  }
  else if (uVar1 < 0x1a) {
    local_1c = 3;
  }
  else {
    if (uVar1 != 0x1a) goto LAB_0003359d;
    local_1c = 7;
  }
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  for (; 0 < local_1c; local_1c = local_1c - iVar2) {
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    if (local_1c < 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
  }
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_03378f (Ghidra: FUN_0003378f)
 * Prototype: uint sub_03378f(void);
 * Address  : 0x3378f (Size: 153 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x34ea2, 0x35137
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0x13a710
 ******************************************************************************/
uint FUN_0003378f(void)

{
  uint uVar1;
  int in_EDX;
  int unaff_EBX;
  int iVar2;
  int local_14;
  
  local_14 = 0;
  iVar2 = DAT_00334728 + 0x14a;
  do {
    local_14 = local_14 + 1;
    FUN_0013a710();
    uVar1 = (uint)*(byte *)(iVar2 + 4);
    iVar2 = iVar2 + 6;
  } while (local_14 < 6);
  if (unaff_EBX != 0) {
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + in_EDX * 4);
    DAT_003d9874 = 0;
    FUN_000e6b20();
    uVar1 = FUN_000e6d80();
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_033828 (Ghidra: FUN_00033828)
 * Prototype: void sub_033828(void);
 * Address  : 0x33828 (Size: 213 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x343a4, 0x343d7
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0x13a710
 ******************************************************************************/
void FUN_00033828(void)

{
  int in_EDX;
  int unaff_EBX;
  
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  if (unaff_EBX != 0) {
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + in_EDX * 4);
    DAT_003d9874 = 0;
    FUN_000e6b20();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_0338fd (Ghidra: FUN_000338fd)
 * Prototype: void sub_0338fd(void);
 * Address  : 0x338fd (Size: 26 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2f1dc
 ******************************************************************************/
void FUN_000338fd(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_033917 (Ghidra: FUN_00033917)
 * Prototype: void sub_033917(void);
 * Address  : 0x33917 (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00033917(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_033928 (Ghidra: FUN_00033928)
 * Prototype: void sub_033928(void);
 * Address  : 0x33928 (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00033928(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_033939 (Ghidra: FUN_00033939)
 * Prototype: void sub_033939(void);
 * Address  : 0x33939 (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00033939(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_03394a (Ghidra: FUN_0003394a)
 * Prototype: void sub_03394a(void);
 * Address  : 0x3394a (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003394a(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_03395b (Ghidra: FUN_0003395b)
 * Prototype: void sub_03395b(void);
 * Address  : 0x3395b (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003395b(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_03396c (Ghidra: FUN_0003396c)
 * Prototype: void sub_03396c(void);
 * Address  : 0x3396c (Size: 115 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_0003396c(void)

{
  int iVar1;
  
  FUN_0013a710();
  iVar1 = 0;
  do {
    FUN_0013a710();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_0339df (Ghidra: FUN_000339df)
 * Prototype: void sub_0339df(void);
 * Address  : 0x339df (Size: 101 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_000339df(void)

{
  int iVar1;
  
  FUN_0013a710();
  iVar1 = 0;
  do {
    FUN_0013a710();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_033a44 (Ghidra: FUN_00033a44)
 * Prototype: void sub_033a44(void);
 * Address  : 0x33a44 (Size: 131 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_00033a44(void)

{
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_033ac7 (Ghidra: FUN_00033ac7)
 * Prototype: void sub_033ac7(void);
 * Address  : 0x33ac7 (Size: 149 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_00033ac7(void)

{
  DAT_003d9874 = 2;
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  DAT_003d9874 = 0;
  return;
}

/******************************************************************************
 * Function : sub_033b5c (Ghidra: FUN_00033b5c)
 * Prototype: void sub_033b5c(void);
 * Address  : 0x33b5c (Size: 112 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_00033b5c(void)

{
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Stop_033bcc (Ghidra: FUN_00033bcc)
 * Prototype: void dk_LbNetwork_Stop_033bcc(void);
 * Address  : 0x33bcc (Size: 47 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:811 ("LbNetwork_Stop() failed")
 * Naming   : References 'LbNetwork_Stop() failed'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x2e8a7, 0xddaf0, 0xedc70
 * Strings  :
 *   - 0x164396: "frontnet.cpp"
 *   - 0x16437e: "LbNetwork_Stop() failed"
 ******************************************************************************/
void FUN_00033bcc(void)

{
  char cVar1;
  
  cVar1 = FUN_000edc70();
  if (cVar1 != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 811, "LbNetwork_Stop() failed") */
    return;
  }
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Stop_033bfb (Ghidra: FUN_00033bfb)
 * Prototype: void dk_LbNetwork_Stop_033bfb(void);
 * Address  : 0x33bfb (Size: 63 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:821 ("LbNetwork_Stop() failed")
 * Naming   : References 'LbNetwork_Stop() failed'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x2e8a7, 0x33156, 0xddaf0, 0xedc70
 * Strings  :
 *   - 0x1643bb: "frontnet.cpp"
 *   - 0x1643a3: "LbNetwork_Stop() failed"
 ******************************************************************************/
void FUN_00033bfb(void)

{
  char cVar1;
  
  cVar1 = FUN_000edc70();
  if (cVar1 != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 821, "LbNetwork_Stop() failed") */
    return;
  }
  FUN_00033156();
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_033c3a (Ghidra: FUN_00033c3a)
 * Prototype: void sub_033c3a(void);
 * Address  : 0x33c3a (Size: 67 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x3308c, 0x13a710
 ******************************************************************************/
void FUN_00033c3a(void)

{
  FUN_0003308c();
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_033c7d (Ghidra: FUN_00033c7d)
 * Prototype: undefined8 sub_033c7d(void);
 * Address  : 0x33c7d (Size: 266 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
undefined8 FUN_00033c7d(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 in_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  
  iVar7 = 0;
  sVar1 = *(short *)(in_EAX + 0x1f);
  iVar2 = (int)*(short *)(in_EAX + 0x1d);
  do {
    FUN_0013a710((int)sVar1 / (int)(uint)DAT_0019cba6);
    iVar7 = iVar7 + 1;
    iVar2 = iVar2 + (uint)*(byte *)(extraout_ECX + 4);
  } while (iVar7 < 4);
  iVar5 = 0;
  iVar4 = (int)sVar1 + (uint)*(byte *)(extraout_ECX + 5);
  do {
    iVar3 = (int)*(short *)(in_EAX + 0x1d);
    local_1c = 0;
    do {
      FUN_0013a710(iVar4 / (int)(uint)DAT_0019cba6);
      local_1c = local_1c + 1;
      iVar3 = iVar3 + (uint)*(byte *)(extraout_ECX_00 + 4);
    } while (local_1c < 4);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + (uint)*(byte *)(extraout_ECX_00 + 5);
  } while (iVar5 < 2);
  iVar6 = 0;
  do {
    FUN_0013a710(iVar4 / (int)(uint)DAT_0019cba6,iVar5,iVar6,iVar3,iVar7,iVar2);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return CONCAT44(in_EDX,(uint)*(byte *)(extraout_ECX_01 + 4));
}

/******************************************************************************
 * Function : sub_033d87 (Ghidra: FUN_00033d87)
 * Prototype: undefined8 sub_033d87(void);
 * Address  : 0x33d87 (Size: 294 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
undefined8 FUN_00033d87(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  uVar1 = DAT_00334728;
  if (0 < DAT_0033607f) {
    FUN_0013a710();
    uVar1 = (uint)*(byte *)(DAT_00334728 + 0x1f6);
  }
  if (1 < DAT_0033607f) {
    FUN_0013a710();
    uVar1 = (uint)*(byte *)(DAT_00334728 + 0x1f6);
  }
  if (2 < DAT_0033607f) {
    FUN_0013a710();
    uVar1 = (uint)*(byte *)(DAT_00334728 + 0x1f6);
  }
  if (3 < DAT_0033607f) {
    uVar1 = FUN_0013a710();
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_LbNetwork_EnumerateServices_033ead (Ghidra: FUN_00033ead)
 * Prototype: void dk_LbNetwork_EnumerateServices_033ead(void);
 * Address  : 0x33ead (Size: 121 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:941 ("LbNetwork_EnumerateServices() failed")
 * Naming   : References 'LbNetwork_EnumerateServices() failed'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 6 -> 0x32f9b, 0x35b51, 0xddaf0, 0xe6a10, 0xe8ca8, 0xed0e8
 * Strings  :
 *   - 0x1643ed: "frontnet.cpp"
 *   - 0x1643c8: "LbNetwork_EnumerateServices() failed"
 ******************************************************************************/
void FUN_00033ead(void)

{
  char cVar1;
  
  DAT_00335dcf = 0;
  FUN_000e6a10();
  cVar1 = FUN_000ed0e8();
  if (cVar1 != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 941, "LbNetwork_EnumerateServices() failed") */
  }
  if (DAT_0019d0bb != '\0') {
    DAT_00335dcf = DAT_00335dcf + 1;
    FUN_000e8ca8();
  }
  FUN_00032f9b();
  FUN_00035b51();
  return;
}

/******************************************************************************
 * Function : sub_033f26 (Ghidra: FUN_00033f26)
 * Prototype: void sub_033f26(void);
 * Address  : 0x33f26 (Size: 49 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00033f26(void)

{
  if ((DAT_00335dcf == 0) || (DAT_00335dd3 < 0)) {
    DAT_00335dd3 = 0;
  }
  else if (DAT_00335dcf + -1 < DAT_00335dd3) {
    DAT_00335dd3 = DAT_00335dcf + -1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_033f57 (Ghidra: FUN_00033f57)
 * Prototype: void sub_033f57(void);
 * Address  : 0x33f57 (Size: 136 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_00033f57(void)

{
  int in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x33) + DAT_00335dd3 + -0x2d < DAT_00335dcf) {
    uVar1 = (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3];
    if ((*(int *)(in_EAX + 0x33) != 0) && (DAT_00334738 == *(int *)(in_EAX + 0x33))) {
      uVar1 = 2;
    }
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + uVar1 * 4);
    DAT_003d9874 = 0x20;
    FUN_000e6b20();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_033fdf (Ghidra: FUN_00033fdf)
 * Prototype: void sub_033fdf(void);
 * Address  : 0x33fdf (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00033fdf(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = *(int *)(in_EAX + 0x33) + DAT_00335dd3 + -0x2d < DAT_00335dcf;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_033ff7 (Ghidra: FUN_00033ff7)
 * Prototype: void sub_033ff7(void);
 * Address  : 0x33ff7 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00033ff7(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00335dd3 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034004 (Ghidra: FUN_00034004)
 * Prototype: void sub_034004(void);
 * Address  : 0x34004 (Size: 30 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034004(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_00335dd3 < DAT_00335dcf + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034022 (Ghidra: FUN_00034022)
 * Prototype: void sub_034022(void);
 * Address  : 0x34022 (Size: 78 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2e8a7
 ******************************************************************************/
void FUN_00034022(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x33) + DAT_00335dd3;
  iVar2 = iVar1 + -0x2d;
  if ((DAT_0019d0bb == '\0') || (iVar2 != DAT_00335dcf + -1)) {
    if ((iVar1 != 0x2d) && (iVar2 != 1)) {
      FUN_0003315b();
      return;
    }
  }
  else {
    DAT_0033591f = 0;
  }
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_034070 (Ghidra: FUN_00034070)
 * Prototype: void sub_034070(void);
 * Address  : 0x34070 (Size: 7 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x345fd
 * Callees  : 1 -> 0x3315b
 ******************************************************************************/
void FUN_00034070(void)

{
  FUN_0003315b();
  return;
}

/******************************************************************************
 * Function : sub_034077 (Ghidra: FUN_00034077)
 * Prototype: void sub_034077(void);
 * Address  : 0x34077 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034077(void)

{
  if (DAT_00335dd3 != 0) {
    DAT_00335dd3 = DAT_00335dd3 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034087 (Ghidra: FUN_00034087)
 * Prototype: void sub_034087(void);
 * Address  : 0x34087 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034087(void)

{
  if (DAT_00335dd3 < DAT_00335dcf + -1) {
    DAT_00335dd3 = DAT_00335dd3 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_03409c (Ghidra: FUN_0003409c)
 * Prototype: void sub_03409c(void);
 * Address  : 0x3409c (Size: 105 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 3 -> 0x35b51, 0xe7714, 0xe8ca8
 ******************************************************************************/
void FUN_0003409c(void)

{
  FUN_00035b51();
  DAT_00335e1f = (int)DAT_0017b908;
  DAT_00335e27 = (int)DAT_0017b911;
  DAT_0033613f = 4;
  if (DAT_00335e1f == -1) {
    FUN_000e8ca8();
  }
  else {
    FUN_000e7714(&DAT_003352bc,&DAT_001643fa,(&DAT_0017b909)[DAT_00335e1f]);
  }
  DAT_00336087 = 7;
  return;
}

/******************************************************************************
 * Function : sub_034105 (Ghidra: FUN_00034105)
 * Prototype: void sub_034105(void);
 * Address  : 0x34105 (Size: 129 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034105(void)

{
  if (DAT_00335e1b < 0) {
    DAT_00335e1b = 0;
  }
  else if (DAT_0033613f + -1 < DAT_00335e1b) {
    DAT_00335e1b = DAT_0033613f + -1;
  }
  if (DAT_00335e23 < 0) {
    DAT_00335e23 = 0;
  }
  else if (DAT_00336087 + -1 < DAT_00335e23) {
    DAT_00335e23 = DAT_00336087 + -1;
  }
  if (DAT_00336087 + -1 < DAT_00335e27) {
    DAT_00335e27 = -1;
  }
  if (DAT_0033613f + -1 < DAT_00335e1f) {
    DAT_00335e1f = -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034186 (Ghidra: FUN_00034186)
 * Prototype: void sub_034186(void);
 * Address  : 0x34186 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034186(void)

{
  if (DAT_00335e1b != 0) {
    DAT_00335e1b = DAT_00335e1b + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034196 (Ghidra: FUN_00034196)
 * Prototype: void sub_034196(void);
 * Address  : 0x34196 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034196(void)

{
  if (DAT_00335e1b < DAT_0033613f + -1) {
    DAT_00335e1b = DAT_00335e1b + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0341ab (Ghidra: FUN_000341ab)
 * Prototype: void sub_0341ab(void);
 * Address  : 0x341ab (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000341ab(void)

{
  if (DAT_00335e23 != 0) {
    DAT_00335e23 = DAT_00335e23 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0341bb (Ghidra: FUN_000341bb)
 * Prototype: void sub_0341bb(void);
 * Address  : 0x341bb (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000341bb(void)

{
  if (DAT_00335e23 < DAT_00336087 + -1) {
    DAT_00335e23 = DAT_00335e23 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0341d0 (Ghidra: FUN_000341d0)
 * Prototype: void sub_0341d0(void);
 * Address  : 0x341d0 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000341d0(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00335e1b != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_0341dd (Ghidra: FUN_000341dd)
 * Prototype: void sub_0341dd(void);
 * Address  : 0x341dd (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000341dd(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_00335e1b < DAT_0033613f + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_0341f0 (Ghidra: FUN_000341f0)
 * Prototype: void sub_0341f0(void);
 * Address  : 0x341f0 (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000341f0(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = *(int *)(in_EAX + 0x33) + DAT_00335e1b + -0x2d < DAT_0033613f;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034208 (Ghidra: FUN_00034208)
 * Prototype: void sub_034208(void);
 * Address  : 0x34208 (Size: 57 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe7714
 ******************************************************************************/
void FUN_00034208(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x33) + DAT_00335e1b;
  iVar2 = iVar1 + -0x2d;
  if (iVar2 < DAT_0033613f) {
    DAT_0017b908 = (undefined1)iVar2;
    DAT_00335e1f = iVar2;
    FUN_000e7714(&DAT_003352bc,&DAT_001643ff,(&DAT_0017b8dc)[iVar1]);
  }
  return;
}

/******************************************************************************
 * Function : sub_034241 (Ghidra: FUN_00034241)
 * Prototype: void sub_034241(void);
 * Address  : 0x34241 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034241(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00335e23 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_03424e (Ghidra: FUN_0003424e)
 * Prototype: void sub_03424e(void);
 * Address  : 0x3424e (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003424e(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_00335e23 < DAT_00336087 + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034261 (Ghidra: FUN_00034261)
 * Prototype: void sub_034261(void);
 * Address  : 0x34261 (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034261(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = *(int *)(in_EAX + 0x33) + DAT_00335e23 + -0x2f < DAT_00336087;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034279 (Ghidra: FUN_00034279)
 * Prototype: void sub_034279(void);
 * Address  : 0x34279 (Size: 31 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034279(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x33) + DAT_00335e23 + -0x2f;
  if (iVar1 < DAT_00336087) {
    DAT_0017b911 = (undefined1)iVar1;
    DAT_00335e27 = iVar1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034298 (Ghidra: FUN_00034298)
 * Prototype: void sub_034298(void);
 * Address  : 0x34298 (Size: 134 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_00034298(void)

{
  int in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x33) + DAT_00335e1b + -0x2d < DAT_0033613f) {
    uVar1 = (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3];
    if ((*(int *)(in_EAX + 0x33) != 0) && (DAT_00334738 == *(int *)(in_EAX + 0x33))) {
      uVar1 = 2;
    }
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + uVar1 * 4);
    DAT_003d9874 = 0;
    FUN_000e6b20();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_03431e (Ghidra: FUN_0003431e)
 * Prototype: void sub_03431e(void);
 * Address  : 0x3431e (Size: 134 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0003431e(void)

{
  int in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x33) + DAT_00335e23 + -0x2f < DAT_00336087) {
    uVar1 = (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3];
    if ((*(int *)(in_EAX + 0x33) != 0) && (DAT_00334738 == *(int *)(in_EAX + 0x33))) {
      uVar1 = 2;
    }
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + uVar1 * 4);
    DAT_003d9874 = 0;
    FUN_000e6b20();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_0343a4 (Ghidra: FUN_000343a4)
 * Prototype: void sub_0343a4(void);
 * Address  : 0x343a4 (Size: 51 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x33828
 ******************************************************************************/
void FUN_000343a4(void)

{
  FUN_00033828();
  return;
}

/******************************************************************************
 * Function : sub_0343d7 (Ghidra: FUN_000343d7)
 * Prototype: void sub_0343d7(void);
 * Address  : 0x343d7 (Size: 51 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x33828
 ******************************************************************************/
void FUN_000343d7(void)

{
  FUN_00033828();
  return;
}

/******************************************************************************
 * Function : sub_03440a (Ghidra: FUN_0003440a)
 * Prototype: void sub_03440a(void);
 * Address  : 0x3440a (Size: 33 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003440a(void)

{
  byte *in_EAX;
  char cVar1;
  
  if ((DAT_00335e1f == -1) || (DAT_00335e27 == -1)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | cVar1 << 3;
  return;
}

/******************************************************************************
 * Function : dk_isdn_supported_serial_03442b (Ghidra: FUN_0003442b)
 * Prototype: void dk_isdn_supported_serial_03442b(void);
 * Address  : 0x3442b (Size: 157 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:1260 ("ISDN not supported by Serial")
 * Naming   : String 'ISDN not supported by Serial'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x3315b, 0xddaf0, 0xea290, 0xf0964
 * Strings  :
 *   - 0x164424: "frontnet.cpp"
 *   - 0x164402: "ISDN"
 *   - 0x164407: "ISDN not supported by Serial"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003442b(void)

{
  int iVar1;
  
  _DAT_00335ddb = (int)DAT_0017b908;
  iVar1 = FUN_000ea290();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 1260, "ISDN not supported by Serial") */
  }
  else {
    _DAT_00335ddf = FUN_000f0964();
  }
  _DAT_00335def = 0;
  _DAT_00335deb = 0;
  _DAT_00335de3 = (uint)(byte)(&DAT_0017b909)[DAT_0017b908];
  _DAT_00335df3 = 0;
  _DAT_00335df7 = 0;
  FUN_0003315b();
  return;
}

/******************************************************************************
 * Function : sub_0344c8 (Ghidra: FUN_000344c8)
 * Prototype: void sub_0344c8(void);
 * Address  : 0x344c8 (Size: 180 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 3 -> 0x35b51, 0xe7714, 0xe8ca8
 * Strings  :
 *   - 0x17b912: "ATZ"
 *   - 0x17b926: "ATDT"
 *   - 0x17b93a: "ATH"
 *   - 0x17b94e: "ATS0=1"
 ******************************************************************************/
void FUN_000344c8(void)

{
  FUN_00035b51();
  DAT_00335e1f = (int)DAT_0017b908;
  DAT_00335e27 = (int)DAT_0017b911;
  DAT_0033613f = 4;
  if (DAT_00335e1f == -1) {
    FUN_000e8ca8();
  }
  else {
    FUN_000e7714(&DAT_003352bc,&DAT_00164431,(&DAT_0017b909)[DAT_00335e1f]);
  }
  DAT_00336087 = 8;
  FUN_000e8ca8();
  FUN_000e8ca8();
  FUN_000e8ca8();
  FUN_000e8ca8();
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : sub_03457c (Ghidra: FUN_0003457c)
 * Prototype: void sub_03457c(void);
 * Address  : 0x3457c (Size: 129 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003457c(void)

{
  if (DAT_00335e1b < 0) {
    DAT_00335e1b = 0;
  }
  else if (DAT_0033613f + -1 < DAT_00335e1b) {
    DAT_00335e1b = DAT_0033613f + -1;
  }
  if (DAT_00335e23 < 0) {
    DAT_00335e23 = 0;
  }
  else if (DAT_00336087 + -1 < DAT_00335e23) {
    DAT_00335e23 = DAT_00336087 + -1;
  }
  if (DAT_00336087 + -1 < DAT_00335e27) {
    DAT_00335e27 = -1;
  }
  if (DAT_0033613f + -1 < DAT_00335e1f) {
    DAT_00335e1f = -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0345fd (Ghidra: FUN_000345fd)
 * Prototype: void sub_0345fd(void);
 * Address  : 0x345fd (Size: 146 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x34070, 0xea290, 0xf0964
 * Strings  :
 *   - 0x164436: "ISDN"
 *   - 0x17b912: "ATZ"
 *   - 0x17b926: "ATDT"
 *   - 0x17b93a: "ATH"
 *   - 0x17b94e: "ATS0=1"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000345fd(void)

{
  int iVar1;
  
  _DAT_00335dfb = (int)DAT_0017b908;
  iVar1 = FUN_000ea290();
  if (iVar1 == 0) {
    _DAT_00335dff = 0x1c200;
  }
  else {
    _DAT_00335dff = FUN_000f0964();
  }
  _DAT_00335e0b = &DAT_0017b912; /* 0x17b912="ATZ" */
  _DAT_00335e0f = &DAT_0017b926; /* 0x17b926="ATDT" */
  _DAT_00335e03 = (uint)(byte)(&DAT_0017b909)[DAT_0017b908];
  _DAT_00335e13 = &DAT_0017b93a; /* 0x17b93a="ATH" */
  _DAT_00335e17 = s_ATS0_1_0017b94e;
  FUN_00034070();
  return;
}

/******************************************************************************
 * Function : sub_03468f (Ghidra: FUN_0003468f)
 * Prototype: void sub_03468f(void);
 * Address  : 0x3468f (Size: 79 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 1 -> 0xe8ca8
 ******************************************************************************/
void FUN_0003468f(void)

{
  if (DAT_003359b3 == '\0') {
    FUN_000e8ca8();
    FUN_000e8ca8();
  }
  DAT_003359ab = 0xffffffff;
  DAT_003359af = 0xffffffff;
  DAT_00334a4c = 2;
  DAT_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_EnumerateSessions_0346de (Ghidra: FUN_000346de)
 * Prototype: void dk_LbNetwork_EnumerateSessions_0346de(void);
 * Address  : 0x346de (Size: 433 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:1401 ("LbNetwork_EnumerateSessions() failed")
 * Naming   : References 'LbNetwork_EnumerateSessions() failed'
 * Callers  : 1 -> 0x2fc49
 * Callees  : 4 -> 0xddaf0, 0xe6a10, 0xedd8c, 0xeddf0
 * Strings  :
 *   - 0x164460: "frontnet.cpp"
 *   - 0x16443b: "LbNetwork_EnumerateSessions() failed"
 ******************************************************************************/
void FUN_000346de(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  DAT_003359a3 = 0;
  FUN_000e6a10();
  cVar2 = FUN_000edd8c();
  if (cVar2 != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 1401, "LbNetwork_EnumerateSessions() failed") */
  }
  if (DAT_003359a3 == 0) {
    DAT_003359ab = -1;
  }
  else {
    if (DAT_003359ab == -1) goto LAB_000347b0;
    if ((DAT_003359a3 <= DAT_003359ab) ||
       (iVar1 = DAT_003359ab, *(int *)((&DAT_00335923)[DAT_003359ab] + 1) != DAT_003359af)) {
      DAT_003359ab = -1;
      iVar4 = 0;
      iVar3 = 0;
      while ((iVar1 = DAT_003359ab, iVar3 < DAT_003359a3 * 4 &&
             (iVar1 = iVar4, DAT_003359af != *(int *)(*(int *)((int)&DAT_00335923 + iVar3) + 1)))) {
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      }
    }
    DAT_003359ab = iVar1;
    if (DAT_003359ab != -1) goto LAB_000347b0;
  }
  DAT_003359af = -1;
LAB_000347b0:
  if ((DAT_003359a3 == 0) || (DAT_003359a7 < 0)) {
    DAT_003359a7 = 0;
  }
  else if (DAT_003359a3 + -1 < DAT_003359a7) {
    DAT_003359a7 = DAT_003359a3 + -1;
  }
  if (((DAT_003359ab == -1) || (DAT_00335dd7 == 0)) || (DAT_00335dd7 == 1)) {
    DAT_0033607f = 0;
  }
  else {
    DAT_0033607f = 0;
    FUN_000e6a10();
    cVar2 = FUN_000eddf0();
    if (cVar2 != '\0') {
      DAT_003359ab = 0xffffffff;
      DAT_003359af = 0xffffffff;
      return;
    }
  }
  if ((DAT_0033607f == 0) || (DAT_003359cb < 0)) {
    DAT_003359cb = 0;
  }
  else if (DAT_0033607f + -1 < DAT_003359cb) {
    DAT_003359cb = DAT_0033607f + -1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_03488f (Ghidra: FUN_0003488f)
 * Prototype: void sub_03488f(void);
 * Address  : 0x3488f (Size: 137 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0003488f(void)

{
  int in_EAX;
  uint uVar1;
  
  if (*(int *)(in_EAX + 0x33) + DAT_003359a7 + -0x2d < DAT_003359a3) {
    uVar1 = (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3];
    if ((*(int *)(in_EAX + 0x33) != 0) && (DAT_00334738 == *(int *)(in_EAX + 0x33))) {
      uVar1 = 2;
    }
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + uVar1 * 4);
    DAT_003d9874 = 0;
    FUN_000e6b20();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_034918 (Ghidra: FUN_00034918)
 * Prototype: void sub_034918(void);
 * Address  : 0x34918 (Size: 41 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034918(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x33) + DAT_003359a7 + -0x2d;
  if (iVar1 < DAT_003359a3) {
    DAT_003359af = *(undefined4 *)((&DAT_00335923)[iVar1] + 1);
    DAT_003359ab = iVar1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034941 (Ghidra: FUN_00034941)
 * Prototype: void sub_034941(void);
 * Address  : 0x34941 (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034941(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = *(int *)(in_EAX + 0x33) + DAT_003359a7 + -0x2d < DAT_003359a3;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034959 (Ghidra: FUN_00034959)
 * Prototype: void sub_034959(void);
 * Address  : 0x34959 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034959(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_003359a7 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034966 (Ghidra: FUN_00034966)
 * Prototype: void sub_034966(void);
 * Address  : 0x34966 (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034966(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_003359a7 < DAT_003359a3 + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_034979 (Ghidra: FUN_00034979)
 * Prototype: void sub_034979(void);
 * Address  : 0x34979 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034979(void)

{
  if (DAT_003359a7 != 0) {
    DAT_003359a7 = DAT_003359a7 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034989 (Ghidra: FUN_00034989)
 * Prototype: void sub_034989(void);
 * Address  : 0x34989 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034989(void)

{
  if (DAT_003359a7 < DAT_003359a3 + -1) {
    DAT_003359a7 = DAT_003359a7 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_03499e (Ghidra: FUN_0003499e)
 * Prototype: void sub_03499e(void);
 * Address  : 0x3499e (Size: 59 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003499e(void)

{
  byte *in_EAX;
  bool bVar1;
  
  if (DAT_00335dd7 == 1) {
    if ((DAT_003359ab == -1) || (DAT_0017b962 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = DAT_003359ab != -1;
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_0349d9 (Ghidra: FUN_000349d9)
 * Prototype: void sub_0349d9(void);
 * Address  : 0x349d9 (Size: 177 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x2e8a7, 0x2f18a, 0x3325d, 0x35e19, 0xe8ca8, 0xeda20
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000349d9(void)

{
  char cVar1;
  
  if ((DAT_00335dd7 == 0) || (DAT_00335dd7 != 1)) {
    FUN_00035e19();
  }
  else {
    _DAT_0033608b = 0;
    _DAT_0033608f = 0;
    FUN_000e8ca8();
    _DAT_00336137 = FUN_00035c1e;
    _DAT_0033613b = FUN_00035c5a;
  }
  cVar1 = FUN_000eda20();
  if (cVar1 == '\0') {
    FUN_0002f18a();
    FUN_0002e8a7();
  }
  else {
    FUN_0003325d();
  }
  return;
}

/******************************************************************************
 * Function : sub_034a8a (Ghidra: FUN_00034a8a)
 * Prototype: void sub_034a8a(void);
 * Address  : 0x34a8a (Size: 300 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x2f18a, 0x3325d, 0xe7714, 0xe8ca8, 0xea290, 0xed84c, 0xf09d1
 * Strings  :
 *   - 0x16446d: "%s (%d)"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034a8a(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  for (iVar6 = 0; iVar6 < DAT_003359a3; iVar6 = iVar6 + 1) {
    FUN_000e7714(&DAT_0019cbac,*(int *)((int)&DAT_00335923 + iVar5) + 9);
    puVar2 = (undefined1 *)FUN_000f09d1();
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = FUN_000ea290();
    iVar4 = extraout_ECX;
    if (iVar3 == 0) {
      iVar4 = extraout_ECX + 1;
    }
    iVar5 = iVar5 + 4;
  }
  if (iVar4 == 0) {
    FUN_000e8ca8();
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__s___d__0016446d,&DAT_003359b3,iVar4 + 1);
  }
  if ((DAT_00335dd7 != 0) && (DAT_00335dd7 == 1)) {
    _DAT_0033608b = 0;
    _DAT_0033608f = 0;
    FUN_000e8ca8();
    _DAT_00336137 = FUN_00035c1e;
    _DAT_0033613b = FUN_00035c5a;
  }
  cVar1 = FUN_000ed84c();
  if (cVar1 == '\0') {
    FUN_0002f18a();
    DAT_00334a4c = 0;
    FUN_0002e8a7();
  }
  else {
    FUN_0003325d();
  }
  return;
}

/******************************************************************************
 * Function : sub_034bb6 (Ghidra: FUN_00034bb6)
 * Prototype: void sub_034bb6(void);
 * Address  : 0x34bb6 (Size: 38 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x35bbf, 0xe8ca8
 ******************************************************************************/
void FUN_00034bb6(void)

{
  FUN_000e8ca8();
  FUN_000e8ca8();
  FUN_00035bbf();
  return;
}

/******************************************************************************
 * Function : sub_034bdc (Ghidra: FUN_00034bdc)
 * Prototype: void sub_034bdc(void);
 * Address  : 0x34bdc (Size: 35 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xea21d
 ******************************************************************************/
void FUN_00034bdc(void)

{
  undefined1 uVar1;
  
  if (DAT_00335e1f != -1) {
    uVar1 = FUN_000ea21d();
    (&DAT_0017b909)[DAT_00335e1f] = uVar1;
  }
  return;
}

/******************************************************************************
 * Function : sub_034bff (Ghidra: FUN_00034bff)
 * Prototype: void sub_034bff(void);
 * Address  : 0x34bff (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x17b912: "ATZ"
 ******************************************************************************/
void FUN_00034bff(void)

{
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : sub_034c0f (Ghidra: FUN_00034c0f)
 * Prototype: void sub_034c0f(void);
 * Address  : 0x34c0f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x17b93a: "ATH"
 ******************************************************************************/
void FUN_00034c0f(void)

{
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : sub_034c1f (Ghidra: FUN_00034c1f)
 * Prototype: void sub_034c1f(void);
 * Address  : 0x34c1f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x17b926: "ATDT"
 ******************************************************************************/
void FUN_00034c1f(void)

{
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : sub_034c2f (Ghidra: FUN_00034c2f)
 * Prototype: void sub_034c2f(void);
 * Address  : 0x34c2f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x17b94e: "ATS0=1"
 ******************************************************************************/
void FUN_00034c2f(void)

{
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : sub_034c3f (Ghidra: FUN_00034c3f)
 * Prototype: void sub_034c3f(void);
 * Address  : 0x34c3f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00034c3f(void)

{
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : sub_034c4f (Ghidra: FUN_00034c4f)
 * Prototype: void sub_034c4f(void);
 * Address  : 0x34c4f (Size: 311 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0x13a710
 ******************************************************************************/
void FUN_00034c4f(void)

{
  int in_EAX;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  
  DAT_003d98b4 = *(int *)(&DAT_003346e4 +
                         (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3] * 4);
  local_20 = DAT_003359cb;
  DAT_003d9874 = 0;
  puVar1 = &DAT_00335323 + DAT_003359cb * 0x14;
  local_1c = 0;
LAB_00034d61:
  if (((int)(uint)*(ushort *)(in_EAX + 0x27) <= local_1c) || (DAT_0033607f <= local_20)) {
    return;
  }
  iVar4 = 0;
  iVar3 = 0;
  do {
    if ((DAT_0033607f <= iVar4) || (0x8f < iVar3)) break;
    if (*(int *)((int)&DAT_00335238 + iVar3) != 0) {
      if (iVar4 == local_20) break;
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + 0x24;
  } while( true );
  FUN_0013a710(puVar1);
  FUN_000e6b20();
  FUN_000e6d80();
  if (DAT_003d98b4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
  }
  puVar1 = puVar1 + 0x14;
  local_20 = local_20 + 1;
  local_1c = local_1c + uVar2;
  goto LAB_00034d61;
}

/******************************************************************************
 * Function : sub_034d86 (Ghidra: FUN_00034d86)
 * Prototype: void sub_034d86(void);
 * Address  : 0x34d86 (Size: 284 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0x13a710
 ******************************************************************************/
void FUN_00034d86(void)

{
  int in_EAX;
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  
  DAT_003d98b4 = *(int *)(&DAT_003346e4 +
                         (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3] * 4);
  iVar1 = DAT_003359cb * 6 + 0x7e;
  DAT_003d9874 = 0;
  puVar2 = &DAT_00335323 + DAT_003359cb * 0x14;
  local_1c = 0;
  for (local_20 = DAT_003359cb;
      (local_1c < (int)(uint)*(ushort *)(in_EAX + 0x27) && (local_20 < DAT_0033607f));
      local_20 = local_20 + 1) {
    FUN_0013a710(puVar2,iVar1);
    FUN_000e6b20();
    FUN_000e6d80();
    if (DAT_003d98b4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    iVar1 = iVar1 + 6;
    puVar2 = puVar2 + 0x14;
    local_1c = local_1c + uVar3;
  }
  return;
}

/******************************************************************************
 * Function : sub_034ea2 (Ghidra: FUN_00034ea2)
 * Prototype: void sub_034ea2(void);
 * Address  : 0x34ea2 (Size: 54 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x3378f
 ******************************************************************************/
void FUN_00034ea2(void)

{
  FUN_0003378f();
  return;
}

/******************************************************************************
 * Function : sub_034ed8 (Ghidra: FUN_00034ed8)
 * Prototype: void sub_034ed8(void);
 * Address  : 0x34ed8 (Size: 96 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034ed8(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_0033607b = 0;
  DAT_0033603b = 0;
  DAT_00336033 = 0;
  DAT_003359cb = 0;
  DAT_00336037 = 0;
  DAT_00335322 = 0xff;
  _DAT_003359c7 = 0;
  DAT_00336083 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0x4ef;
    (&DAT_0019d52b)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x18ab);
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_EnumeratePlayers_034f38 (Ghidra: FUN_00034f38)
 * Prototype: void dk_LbNetwork_EnumeratePlayers_034f38(void);
 * Address  : 0x34f38 (Size: 255 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:1863 ("LbNetwork_EnumeratePlayers() failed")
 * Naming   : References 'LbNetwork_EnumeratePlayers() failed'
 * Callers  : 1 -> 0x2fc49
 * Callees  : 5 -> 0x35758, 0xddaf0, 0xe6a10, 0xe8c83, 0xeddf0
 * Strings  :
 *   - 0x164499: "frontnet.cpp"
 *   - 0x164475: "LbNetwork_EnumeratePlayers() failed"
 ******************************************************************************/
void FUN_00034f38(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 local_228 [520];
  int local_20;
  int local_1c;
  
  bVar7 = 0;
  DAT_0033607f = 0;
  FUN_000e6a10();
  cVar1 = FUN_000eddf0();
  if (cVar1 == '\0') {
    if ((DAT_00336033 == 0) || (DAT_00336037 < 0)) {
      DAT_00336037 = 0;
    }
    else if (DAT_00336033 + -1 < DAT_00336037) {
      DAT_00336037 = DAT_00336033 + -1;
    }
    FUN_00035758();
    local_20 = DAT_00336033 * 0x41;
    local_1c = 0;
    iVar4 = 0;
    for (iVar2 = 0; iVar2 < local_20; iVar2 = iVar2 + 0x41) {
      if ((&DAT_00335238)[(uint)(byte)(&DAT_00335e2b)[iVar2] * 9] != 0) {
        puVar6 = local_228 + iVar4;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + 0x41;
        puVar5 = &DAT_00335e2b + iVar2;
        for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
    DAT_00336033 = local_1c;
    FUN_000e8c83();
  }
  else {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 1863, "LbNetwork_EnumeratePlayers() failed") */
  }
  return;
}

/******************************************************************************
 * Function : sub_035037 (Ghidra: FUN_00035037)
 * Prototype: void sub_035037(void);
 * Address  : 0x35037 (Size: 105 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 1 -> 0x356d1
 ******************************************************************************/
void FUN_00035037(void)

{
  if ((DAT_003db5fc & 0x80) == 0) {
    if (DAT_003db5fc == 0) {
      return;
    }
    if (((DAT_003db5fc == 0xe) || (DAT_003db5fc == 0x1c)) ||
       (((&DAT_00195458)[DAT_003db5fc] != 0 &&
        (1 < *(byte *)(((byte)(&DAT_00195458)[DAT_003db5fc] - 0x1f) * 6 + 4 + DAT_003346e8))))) {
      FUN_000356d1();
    }
  }
  DAT_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : sub_0350a0 (Ghidra: FUN_000350a0)
 * Prototype: void sub_0350a0(void);
 * Address  : 0x350a0 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000350a0(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = 1 < DAT_0033607f;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_0350ad (Ghidra: FUN_000350ad)
 * Prototype: void sub_0350ad(void);
 * Address  : 0x350ad (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000350ad(void)

{
  if (DAT_003359cb != 0) {
    DAT_003359cb = DAT_003359cb + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0350bd (Ghidra: FUN_000350bd)
 * Prototype: void sub_0350bd(void);
 * Address  : 0x350bd (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000350bd(void)

{
  if (DAT_003359cb < DAT_0033607f + -1) {
    DAT_003359cb = DAT_003359cb + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0350d2 (Ghidra: FUN_000350d2)
 * Prototype: void sub_0350d2(void);
 * Address  : 0x350d2 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000350d2(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_003359cb != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_0350df (Ghidra: FUN_000350df)
 * Prototype: void sub_0350df(void);
 * Address  : 0x350df (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000350df(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_003359cb < DAT_0033607f + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_0350f2 (Ghidra: FUN_000350f2)
 * Prototype: void sub_0350f2(void);
 * Address  : 0x350f2 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000350f2(void)

{
  if (DAT_00336037 != 0) {
    DAT_00336037 = DAT_00336037 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_035102 (Ghidra: FUN_00035102)
 * Prototype: void sub_035102(void);
 * Address  : 0x35102 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00035102(void)

{
  if (DAT_00336037 < DAT_00336033 + -1) {
    DAT_00336037 = DAT_00336037 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_035117 (Ghidra: FUN_00035117)
 * Prototype: void sub_035117(void);
 * Address  : 0x35117 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00035117(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00336037 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_035124 (Ghidra: FUN_00035124)
 * Prototype: void sub_035124(void);
 * Address  : 0x35124 (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00035124(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_00336037 < DAT_00336033 + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_035137 (Ghidra: FUN_00035137)
 * Prototype: void sub_035137(void);
 * Address  : 0x35137 (Size: 160 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x3378f, 0xe7714, 0xeb818
 * Strings  :
 *   - 0x1644a6: "%s_"
 ******************************************************************************/
void FUN_00035137(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_000eb818();
  if (DAT_00335214 + 100 <= iVar1) {
    DAT_0017b8b4 = (uint)(DAT_0017b8b4 == 0);
    DAT_00335214 = FUN_000eb818();
  }
  if (DAT_0017b8b4 == 0) {
    puVar2 = &DAT_001644aa;
  }
  else {
    puVar2 = &DAT_001644a6; /* 0x1644a6="%s_" */
  }
  FUN_000e7714(&DAT_0019cbac,puVar2,&DAT_0019d52b + DAT_002f10ce._3_1_ * 0x4ef);
  FUN_0003378f();
  return;
}

/******************************************************************************
 * Function : sub_0351d7 (Ghidra: FUN_000351d7)
 * Prototype: void sub_0351d7(void);
 * Address  : 0x351d7 (Size: 301 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0x13a710
 ******************************************************************************/
void FUN_000351d7(void)

{
  int in_EAX;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  DAT_003d98b4 = *(int *)(&DAT_003346e4 +
                         (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3] * 4);
  DAT_003d9874 = 0;
  puVar1 = &DAT_00335e2c + DAT_00336037 * 0x41;
  local_1c = 0;
  for (local_20 = DAT_00336037;
      (local_1c < (int)(uint)*(ushort *)(in_EAX + 0x27) && (local_20 < DAT_00336033));
      local_20 = local_20 + 1) {
    for (iVar3 = 0; iVar3 < (int)(uint)(byte)(&DAT_00335e2b)[local_20 * 0x41]; iVar3 = iVar3 + 1) {
    }
    FUN_0013a710(puVar1);
    FUN_000e6b20();
    FUN_000e6d80();
    if (DAT_003d98b4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    puVar1 = puVar1 + 0x41;
    local_1c = local_1c + uVar2;
  }
  return;
}

/******************************************************************************
 * Function : sub_035304 (Ghidra: FUN_00035304)
 * Prototype: void sub_035304(void);
 * Address  : 0x35304 (Size: 52 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00035304(void)

{
  byte *in_EAX;
  char cVar1;
  
  if (((*(int *)(in_EAX + 0x33) + -0x4a < DAT_0033607f) &&
      (*(short *)(in_EAX + 0x1b) < DAT_0033607f)) &&
     (*(int *)(in_EAX + 0x33) + -0x4a != (int)*(short *)(in_EAX + 0x1b))) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | cVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_035338 (Ghidra: FUN_00035338)
 * Prototype: void sub_035338(void);
 * Address  : 0x35338 (Size: 50 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x35666
 ******************************************************************************/
void FUN_00035338(void)

{
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x33) - 0x4aU == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
     || ((int)*(short *)(in_EAX + 0x1b) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]))
  {
    FUN_00035666();
  }
  return;
}

/******************************************************************************
 * Function : sub_03536a (Ghidra: FUN_0003536a)
 * Prototype: void sub_03536a(void);
 * Address  : 0x3536a (Size: 164 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0003536a(void)

{
  int in_EAX;
  
  DAT_003d98b4 = DAT_003346ec;
  if (DAT_00334738 != *(int *)(in_EAX + 0x33)) {
    DAT_003d98b4 = *(undefined4 *)
                    (&DAT_003346e4 + (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3] * 4);
  }
  FUN_000e6b20();
  DAT_003d9874 = 0x20;
  FUN_000e6d80();
  DAT_003d9874 = 0x80;
  FUN_000e6d80();
  DAT_003d9874 = 0;
  return;
}

/******************************************************************************
 * Function : sub_03540e (Ghidra: FUN_0003540e)
 * Prototype: longlong sub_03540e(void);
 * Address  : 0x3540e (Size: 87 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0003540e(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = DAT_002f10ce._3_1_ * 0xc;
  if ((byte)(&DAT_003358f3)[iVar1] >> 3 != 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  (&DAT_003358f9)[iVar1] = DAT_00334a4c == 0;
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] & 7;
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] | 0x38;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_sessions_enumeration_035446 (Ghidra: FUN_00035446)
 * Prototype: void dk_sessions_enumeration_035446(undefined4 param_1);
 * Address  : 0x35446 (Size: 181 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:2346 ("Too many sessions in enumeration")
 * Naming   : String 'Too many sessions in enumeration'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe8ca8
 * Strings  :
 *   - 0x1644ce: "frontnet.cpp"
 *   - 0x1644ad: "Too many sessions in enumeration"
 ******************************************************************************/
void FUN_00035446(undefined4 param_1)

{
  if (DAT_003359a3 < 0x20) {
    if ((DAT_00335dd7 != 0) && (DAT_00335dd7 != 1)) {
      (&DAT_0033591f)[DAT_003359a3 + 1] = param_1;
      DAT_003359a3 = DAT_003359a3 + 1;
      return;
    }
    if (DAT_003359a3 == 0) {
      DAT_00335923 = param_1;
      FUN_000e8ca8();
      DAT_003359a3 = DAT_003359a3 + 1;
      return;
    }
  }
  else {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 2346, "Too many sessions in enumeration") */
  }
  return;
}

/******************************************************************************
 * Function : dk_players_enumeration_0354fb (Ghidra: FUN_000354fb)
 * Prototype: void dk_players_enumeration_0354fb(void);
 * Address  : 0x354fb (Size: 75 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:2358 ("Too many players in enumeration")
 * Naming   : String 'Too many players in enumeration'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe8ca8
 * Strings  :
 *   - 0x1644fb: "frontnet.cpp"
 *   - 0x1644db: "Too many players in enumeration"
 ******************************************************************************/
void FUN_000354fb(void)

{
  if (DAT_0033607f < 4) {
    DAT_0033607f = DAT_0033607f + 1;
    FUN_000e8ca8();
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 2358, "Too many players in enumeration") */
  return;
}

/******************************************************************************
 * Function : dk_unrecognised_network_service_035546 (Ghidra: FUN_00035546)
 * Prototype: void dk_unrecognised_network_service_035546(void);
 * Address  : 0x35546 (Size: 229 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:2391 ("Too many services in enumeration")
 * Naming   : String 'Unrecognised Network Service'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xddaf0, 0xe8ca8, 0xf09e5
 * Strings  :
 *   - 0x164536: "frontnet.cpp"
 *   - 0x164564: "frontnet.cpp"
 *   - 0x164508: "SERIAL"
 *   - 0x16450f: "MODEM"
 *   - 0x164515: "IPX"
 *   - 0x164519: "Unrecognised Network Service"
 *   - 0x164543: "Too many services in enumeration"
 ******************************************************************************/
void FUN_00035546(void)

{
  int iVar1;
  
  if (DAT_00335dcf < 3) {
    if (DAT_00335dcf < 0x10) {
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        DAT_00335dcf = DAT_00335dcf + 1;
LAB_00035595:
        FUN_000e8ca8();
        return;
      }
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        DAT_00335dcf = DAT_00335dcf + 1;
        goto LAB_00035595;
      }
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        DAT_00335dcf = DAT_00335dcf + 1;
        goto LAB_00035595;
      }
    }
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 2391, "Too many services in enumeration") */
  }
  return;
}

/******************************************************************************
 * Function : sub_03562b (Ghidra: FUN_0003562b)
 * Prototype: longlong sub_03562b(void);
 * Address  : 0x3562b (Size: 59 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0003562b(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = DAT_002f10ce._3_1_ * 0xc;
  if ((byte)(&DAT_003358f3)[iVar1] >> 3 != 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] & 7;
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] | 0x18;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_035666 (Ghidra: FUN_00035666)
 * Prototype: undefined4 sub_035666(void);
 * Address  : 0x35666 (Size: 76 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35338
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00035666(void)

{
  undefined1 in_AL;
  int iVar1;
  undefined1 in_DL;
  
  iVar1 = DAT_002f10ce._3_1_ * 0xc;
  if ((byte)(&DAT_003358f3)[iVar1] >> 3 != 0) {
    return 0;
  }
  (&DAT_003358f9)[iVar1] = in_AL;
  (&DAT_003358fa)[iVar1] = in_DL;
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] & 7;
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] | 0x20;
  return 1;
}

/******************************************************************************
 * Function : sub_0356d1 (Ghidra: FUN_000356d1)
 * Prototype: longlong sub_0356d1(void);
 * Address  : 0x356d1 (Size: 107 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35037
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000356d1(void)

{
  undefined1 in_AL;
  int iVar1;
  undefined1 uVar2;
  uint in_EDX;
  uint uVar3;
  
  iVar1 = DAT_002f10ce._3_1_ * 0xc;
  if ((byte)(&DAT_003358f3)[iVar1] >> 3 != 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  uVar3 = CONCAT11(in_AL,(&DAT_003358f3)[iVar1]) & 0xffffff07;
  (&DAT_003358f3)[iVar1] = (char)uVar3;
  (&DAT_003358f9)[iVar1] = (char)(uVar3 >> 8);
  (&DAT_003358f3)[iVar1] = (&DAT_003358f3)[iVar1] | 0x40;
  if ((DAT_003db526 == '\0') && (DAT_003db532 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (&DAT_003358fa)[DAT_002f10ce._3_1_ * 0xc] = uVar2;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_LbNetwork_Exchange_035758 (Ghidra: FUN_00035758)
 * Prototype: void dk_LbNetwork_Exchange_035758(void);
 * Address  : 0x35758 (Size: 877 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:2528 ("LbNetwork_Exchange failed"); frontnet.cpp:2553 ("LbNetwork_Stop() failed")
 * Naming   : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> 0x34f38
 * Callees  : 14 -> 0x2e8a7, 0x32f5c, 0x3308c, 0x33156, 0x35ac5, 0x35c86, 0x35cc1, 0x35ce2, 0x35d29, 0xddaf0 ...
 * Strings  :
 *   - 0x16458b: "frontnet.cpp"
 *   - 0x1645b0: "frontnet.cpp"
 *   - 0x1645d5: "frontnet.cpp"
 *   - 0x164571: "LbNetwork_Exchange failed"
 *   - 0x164598: "LbNetwork_Stop() failed"
 *   - 0x1645bd: "LbNetwork_Stop() failed"
 ******************************************************************************/
void FUN_00035758(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  undefined1 *puVar8;
  
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 0xc;
    (&DAT_003358f3)[iVar4] = (&DAT_003358f3)[iVar4] & 0xfe;
    iVar4 = iVar3;
  } while (iVar3 != 0x30);
  iVar4 = (int)DAT_002f10ce._3_1_;
  iVar3 = iVar4 * 0xc;
  (&DAT_003358f4)[iVar3] = DAT_00335322;
  bVar2 = (byte)DAT_00334a4c;
  (&DAT_003358f3)[iVar3] = (&DAT_003358f3)[iVar3] | 1;
  (&DAT_003358f3)[iVar3] = (&DAT_003358f3)[iVar3] & 0xf9;
  (&DAT_003358f3)[iVar3] = (&DAT_003358f3)[iVar3] | (bVar2 & 3) * '\x02';
  (&DAT_003358f5)[iVar4 * 6] = (undefined2)DAT_00179bfc;
  (&DAT_003358f7)[iVar4 * 6] = (undefined2)DAT_00179c00;
  cVar1 = FUN_000ee694();
  if (cVar1 != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 2528, "LbNetwork_Exchange failed") */
  }
  iVar3 = FUN_00032f5c();
  iVar4 = DAT_00336083;
  if (((iVar3 != 0) && (iVar3 = FUN_00035cc1(), iVar4 = iVar3, iVar3 <= DAT_00336083)) &&
     (iVar4 = DAT_00336083, iVar3 < DAT_00336083)) {
    if (DAT_00334a44 == 5) {
      cVar1 = FUN_000edc70();
      if (cVar1 != '\0') {
LAB_00035830:
        FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 2553, "LbNetwork_Stop() failed") */
        return;
      }
    }
    else {
      if (DAT_00334a44 != 6) goto LAB_0003587e;
      cVar1 = FUN_000edc70();
      if (cVar1 != '\0') goto LAB_00035830;
      FUN_00033156();
    }
    FUN_0002e8a7();
    iVar4 = DAT_00336083;
  }
LAB_0003587e:
  DAT_00336083 = iVar4;
  iVar4 = 0;
  iVar3 = 0;
  puVar8 = &DAT_0019d52b;
  iVar7 = 0;
  do {
    if (((&DAT_003358f3)[iVar7] & 1) != 0) {
      switch((byte)(&DAT_003358f3)[iVar7] >> 3) {
      case 2:
        FUN_00035ac5();
        iVar3 = extraout_ECX;
        break;
      case 3:
        iVar3 = FUN_00035ce2();
        if (iVar3 == 0) {
          FUN_00035d29();
          iVar3 = extraout_ECX_01;
        }
        else {
          DAT_0033591f = 1;
          FUN_0002e8a7();
          iVar3 = extraout_ECX_00;
        }
        break;
      case 4:
        FUN_00035c86();
        iVar3 = extraout_ECX_02;
        break;
      case 7:
        DAT_00334a4c = (uint)(char)(&DAT_003358f9)[iVar7];
        break;
      case 8:
        iVar5 = FUN_000efdb4(iVar4,puVar8);
        iVar3 = (int)(char)(&DAT_003358f9)[iVar7];
        if (iVar3 == 0xe) {
          if (iVar5 != 0) {
            (&DAT_0019d52a)[iVar5 + extraout_ECX_03] = 0;
            iVar5 = iVar5 + -1;
          }
        }
        else if (iVar3 == 0x1c) {
          if (iVar5 != 0) {
            FUN_00035ac5();
            (&DAT_0019d52b)[extraout_ECX_04] = 0;
          }
        }
        else {
          if ((&DAT_003358fa)[iVar7] == '\0') {
            bVar2 = (&DAT_00195458)[iVar3];
          }
          else {
            bVar2 = (&DAT_001954d8)[iVar3];
          }
          if (((bVar2 != 0) && (1 < *(byte *)((bVar2 - 0x1f) * 6 + DAT_003346e8 + 4))) &&
             (iVar5 < 0x3f)) {
            iVar5 = iVar5 + 1;
            (&DAT_0019d52a)[iVar5 + extraout_ECX_03] = bVar2;
            (&DAT_0019d52b)[iVar5 + extraout_ECX_03] = 0;
          }
        }
        DAT_003d98b4 = DAT_003346e8;
        iVar6 = FUN_000e6c1c();
        iVar3 = extraout_ECX_05;
        if (0x1a3 < iVar6) {
          (&DAT_0019d52a)[iVar5 + extraout_ECX_05] = 0;
        }
      }
      if ((DAT_00335322 == -1) && ((byte)(&DAT_003358f4)[iVar7] != 0xffffffff)) {
        DAT_00335322 = (&DAT_003358f4)[iVar7];
      }
      if ((DAT_00334a4c == 2) && (bVar2 = ((&DAT_003358f3)[iVar7] & 7) >> 1, bVar2 != 2)) {
        DAT_00334a4c = (uint)bVar2;
      }
      *(uint *)((int)&DAT_0019d5af + iVar3) =
           (uint)*(ushort *)((int)&DAT_003358f7 + iVar7) +
           (uint)*(ushort *)((int)&DAT_003358f5 + iVar7) * 0x100;
    }
    puVar8 = puVar8 + 0x4ef;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x4ef;
    (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] & 7;
    iVar7 = iVar7 + 0xc;
  } while (iVar4 < 4);
  if (DAT_00335322 == -1) {
    DAT_00335322 = '\0';
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((((&DAT_003358f3)[iVar4] & 1) == 0) && (iVar7 = FUN_0003308c(), iVar7 != 0)) {
      FUN_00035c86();
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar3 < 4);
  return;
}

/******************************************************************************
 * Function : sub_035ac5 (Ghidra: FUN_00035ac5)
 * Prototype: void sub_035ac5(void);
 * Address  : 0x35ac5 (Size: 140 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35758
 * Callees  : 2 -> 0xe8c83, 0xe8ca8
 ******************************************************************************/
void FUN_00035ac5(void)

{
  int iVar1;
  undefined1 in_AL;
  int extraout_ECX;
  
  if (DAT_00336033 == 8) {
    do {
      FUN_000e8c83();
    } while (extraout_ECX != 0x335fb1);
    DAT_00336033 = DAT_00336033 + -1;
  }
  (&DAT_00335e2b)[DAT_00336033 * 0x41] = in_AL;
  FUN_000e8ca8();
  iVar1 = DAT_00336033;
  DAT_00336033 = DAT_00336033 + 1;
  if (DAT_00336037 + 4 < DAT_00336033) {
    DAT_00336037 = iVar1 + -3;
  }
  return;
}

/******************************************************************************
 * Function : dk_save_config_net_035b51 (Ghidra: FUN_00035b51)
 * Prototype: void dk_save_config_net_035b51(void);
 * Address  : 0x35b51 (Size: 110 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : String 'SAVE\CONFIG.NET'
 * Callers  : 3 -> 0x33ead, 0x3409c, 0x344c8
 * Callees  : 6 -> 0x150f0, 0xe8980, 0xe8a1c, 0xe8a80, 0xe8c83, 0xe8ca8
 * Strings  :
 *   - 0x1645e2: "SAVE\CONFIG.NET"
 ******************************************************************************/
void FUN_00035b51(void)

{
  int iVar1;
  
  FUN_000150f0();
  iVar1 = FUN_000e8980();
  if (iVar1 != -1) {
    iVar1 = FUN_000e8a80();
    if (iVar1 == 0x82) {
      FUN_000e8a1c();
      return;
    }
    FUN_000e8a1c();
  }
  FUN_000e8c83();
  FUN_000e8ca8();
  return;
}

/******************************************************************************
 * Function : dk_save_config_net_035bbf (Ghidra: FUN_00035bbf)
 * Prototype: void dk_save_config_net_035bbf(void);
 * Address  : 0x35bbf (Size: 95 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : String 'SAVE\CONFIG.NET'
 * Callers  : 2 -> 0x2e8a7, 0x34bb6
 * Callees  : 5 -> 0x150f0, 0xe8980, 0xe8a1c, 0xe8a8c, 0xf0a2c
 * Strings  :
 *   - 0x1645f2: "SAVE\CONFIG.NET"
 *   - 0x17b912: "ATZ"
 *   - 0x17b93a: "ATH"
 *   - 0x17b926: "ATDT"
 *   - 0x17b94e: "ATS0=1"
 ******************************************************************************/
void FUN_00035bbf(void)

{
  int iVar1;
  
  FUN_000150f0();
  iVar1 = FUN_000e8980();
  if (iVar1 != -1) {
    FUN_000f0a2c();
    FUN_000f0a2c();
    FUN_000f0a2c();
    FUN_000f0a2c();
    FUN_000e8a8c();
    FUN_000e8a1c();
  }
  return;
}

/******************************************************************************
 * Function : sub_035c1e (Ghidra: FUN_00035c1e)
 * Prototype: undefined4 sub_035c1e(void);
 * Address  : 0x35c1e (Size: 60 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x30a2d, 0xe797c, 0xe79fc, 0xe8560
 ******************************************************************************/
undefined4 FUN_00035c1e(void)

{
  int iVar1;
  
  FUN_000e8560();
  if (DAT_003db4fd != '\0') {
    DAT_003db4fd = 0;
    return 0xfffffff9;
  }
  iVar1 = FUN_000e797c();
  if (iVar1 == 1) {
    FUN_00030a2d();
    FUN_000e797c();
  }
  FUN_000e79fc();
  return 0;
}

/******************************************************************************
 * Function : sub_035c5a (Ghidra: FUN_00035c5a)
 * Prototype: undefined4 sub_035c5a(void);
 * Address  : 0x35c5a (Size: 44 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe797c, 0xe8560
 ******************************************************************************/
undefined4 FUN_00035c5a(void)

{
  int iVar1;
  
  FUN_000e8560();
  if (DAT_003db4fd != '\0') {
    DAT_003db4fd = 0;
    return 0xfffffff9;
  }
  iVar1 = FUN_000e797c();
  if (iVar1 == 1) {
    FUN_00030a2d();
    FUN_000e797c();
  }
  FUN_000e79fc();
  return 0;
}

/******************************************************************************
 * Function : sub_035c86 (Ghidra: FUN_00035c86)
 * Prototype: void sub_035c86(void);
 * Address  : 0x35c86 (Size: 59 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35758
 * Callees  : 1 -> 0x3308c
 ******************************************************************************/
void FUN_00035c86(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  
  iVar1 = FUN_0003308c();
  iVar2 = extraout_ECX * 0x10 + in_EDX * 4;
  if (iVar1 != 0) {
    DAT_00335322 = DAT_00335322 & ~(&DAT_0017b8c8)[iVar2];
    return;
  }
  DAT_00335322 = DAT_00335322 | (&DAT_0017b8c8)[iVar2];
  return;
}

/******************************************************************************
 * Function : sub_035cc1 (Ghidra: FUN_00035cc1)
 * Prototype: undefined8 sub_035cc1(void);
 * Address  : 0x35cc1 (Size: 33 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35758
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00035cc1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00335238 + iVar1) != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + 0x24;
  } while (iVar1 != 0x90);
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_035ce2 (Ghidra: FUN_00035ce2)
 * Prototype: longlong sub_035ce2(void);
 * Address  : 0x35ce2 (Size: 71 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35758
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00035ce2(void)

{
  int iVar1;
  uint in_EDX;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (0x13bb < iVar1) {
      return CONCAT44(in_EDX,1);
    }
    if (((&DAT_003358f3)[iVar2] & 1) != 0) {
      if (iVar3 == -1) {
        iVar3 = *(int *)((int)&DAT_0019d5af + iVar1);
      }
      else if (iVar3 != *(int *)((int)&DAT_0019d5af + iVar1)) {
        return (ulonglong)in_EDX << 0x20;
      }
    }
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + 0x4ef;
  } while( true );
}

/******************************************************************************
 * Function : dk_LbNetwork_Stop_035d29 (Ghidra: FUN_00035d29)
 * Prototype: void dk_LbNetwork_Stop_035d29(void);
 * Address  : 0x35d29 (Size: 240 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp:2946 ("LbNetwork_Stop() failed")
 * Naming   : References 'LbNetwork_Stop() failed'
 * Callers  : 1 -> 0x35758
 * Callees  : 10 -> 0x2e8a7, 0x30a2d, 0x33156, 0xddaf0, 0xe7714, 0xe797c, 0xe79fc, 0xe8560, 0xe9dd6, 0xedc70
 * Strings  :
 *   - 0x16461a: "frontnet.cpp"
 *   - 0x164602: "LbNetwork_Stop() failed"
 *   - 0x164627: "%s(%d.%02d) "
 ******************************************************************************/
void FUN_00035d29(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *extraout_ECX;
  int iVar3;
  undefined1 local_110 [256];
  
  cVar1 = FUN_000edc70();
  if (cVar1 != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("frontnet.cpp", line 2946, "LbNetwork_Stop() failed") */
    return;
  }
  puVar2 = &DAT_00335323;
  iVar3 = 0;
  DAT_0019cbac = 0;
  DAT_003db4fd = '\0';
  DAT_003db518 = '\0';
  DAT_003db535 = '\0';
  do {
    if (((&DAT_003358f3)[iVar3] & 1) != 0) {
      FUN_000e7714(local_110,s__s__d__02d__00164627,puVar2,
                   *(undefined2 *)((int)&DAT_003358f5 + iVar3),
                   *(undefined2 *)((int)&DAT_003358f7 + iVar3));
      FUN_000e9dd6();
      puVar2 = extraout_ECX;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != 0x30);
  while (((DAT_003db4fd == '\0' && (DAT_003db535 == '\0')) && (DAT_003db518 == '\0'))) {
    FUN_000e8560();
    iVar3 = FUN_000e797c();
    if (iVar3 == 1) {
      FUN_00030a2d();
      FUN_000e797c();
    }
    FUN_000e79fc();
  }
  FUN_00033156();
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_035e19 (Ghidra: FUN_00035e19)
 * Prototype: undefined4 sub_035e19(void);
 * Address  : 0x35e19 (Size: 34 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x349d9
 * Callees  : 3 -> 0x30a2d, 0xe797c, 0xe79fc
 ******************************************************************************/
undefined4 FUN_00035e19(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  short sVar7;
  
  bVar6 = 0;
  iVar1 = FUN_000e797c();
  if (iVar1 == 1) {
    FUN_00030a2d();
    FUN_000e797c();
    uVar2 = FUN_000e79fc();
    return uVar2;
  }
  FUN_000eb840();
  if (DAT_003d987a == '\0') {
    puVar3 = DAT_003d9818;
    puVar4 = DAT_003d9814;
    for (iVar1 = DAT_003d9834 * DAT_003d9838 >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    puVar3 = DAT_003d9818;
    sVar7 = 0;
    if (DAT_003d9834 * DAT_003d9838 == 0) {
      FUN_000eb974();
      return 1;
    }
    do {
      FUN_000f0d1c(sVar7);
      puVar4 = puVar3;
      puVar5 = DAT_003d9814;
      for (iVar1 = extraout_ECX >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      puVar3 = puVar3 + 0x4000;
      sVar7 = sVar7 + 1;
    } while (extraout_EDX != 0);
  }
  FUN_000eb974();
  return 1;
}

/******************************************************************************
 * Function : sub_035e3c (Ghidra: FUN_00035e3c)
 * Prototype: void sub_035e3c(void);
 * Address  : 0x35e3c (Size: 460 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2c833, 0xdd500, 0xdd6c8
 * Callees  : 9 -> 0x362e4, 0x36346, 0x363ca, 0x36442, 0x3646d, 0x36498, 0x364da, 0xe8c83, 0xeb818
 ******************************************************************************/
void FUN_00035e3c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_000eb818();
  iVar2 = (int)DAT_002f10ce._3_1_;
  iVar3 = iVar2 * 0x1508;
  *(undefined4 *)(&DAT_002e17c4 + iVar3) = uVar1;
  *(uint *)(&DAT_002e1844 + iVar3) = (uint)(byte)(&DAT_002e0ea2)[iVar3];
  *(uint *)(&DAT_002e1848 + iVar3) = (uint)(byte)(&DAT_002e0ea1)[iVar3];
  *(uint *)(&DAT_002e184c + iVar3) = (uint)(ushort)(&DAT_002e105c)[iVar2 * 0xa84];
  *(uint *)(&DAT_002e1850 + iVar3) = (uint)(ushort)(&DAT_002e105a)[iVar2 * 0xa84];
  *(undefined4 *)(&DAT_002e1854 + iVar3) = (&DAT_002e1082)[iVar2 * 0x542];
  *(uint *)(&DAT_002e1858 + iVar3) = (uint)(ushort)(&DAT_002e1062)[iVar2 * 0xa84];
  *(undefined4 *)(&DAT_002e185c + iVar3) = *(undefined4 *)(&DAT_002e0ece + iVar3);
  *(uint *)(&DAT_002e1860 + iVar3) = (uint)*(ushort *)(&DAT_002e105e + iVar3);
  *(uint *)(&DAT_002e1864 + iVar3) = (uint)(ushort)(&DAT_002e0ec6)[iVar2 * 0xa84];
  *(int *)(&DAT_002e1868 + iVar3) = (int)(&DAT_002e1706)[iVar2 * 0x542] >> 8;
  *(uint *)(&DAT_002e186c + iVar3) = (uint)(ushort)(&DAT_002e0f14)[iVar2 * 0xa84];
  *(uint *)(&DAT_002e1870 + iVar3) = (uint)(ushort)(&DAT_002e0f16)[iVar2 * 0xa84];
  *(uint *)(&DAT_002e1874 + iVar3) = (uint)*(ushort *)(&DAT_002e1060 + iVar3);
  *(uint *)(&DAT_002e1878 + iVar3) = (uint)*(ushort *)(&DAT_002e1064 + iVar3);
  uVar1 = FUN_000362e4();
  *(undefined4 *)(&DAT_002e187c + DAT_002f10ce._3_1_ * 0x1508) = uVar1;
  uVar1 = FUN_00036346();
  *(undefined4 *)(&DAT_002e1880 + DAT_002f10ce._3_1_ * 0x1508) = uVar1;
  uVar1 = FUN_000363ca();
  *(undefined4 *)(&DAT_002e1884 + DAT_002f10ce._3_1_ * 0x1508) = uVar1;
  uVar1 = FUN_00036442();
  *(undefined4 *)(&DAT_002e1888 + DAT_002f10ce._3_1_ * 0x1508) = uVar1;
  uVar1 = FUN_0003646d();
  *(undefined4 *)(&DAT_002e188c + DAT_002f10ce._3_1_ * 0x1508) = uVar1;
  uVar1 = FUN_00036498();
  iVar2 = DAT_002f10ce._3_1_ * 0x1508;
  *(undefined4 *)(&DAT_002e1890 + iVar2) = uVar1;
  *(uint *)(&DAT_002e1894 + iVar2) =
       (uint)(*(int *)(&DAT_002e17c4 + iVar2) - *(int *)(&DAT_002e17c0 + iVar2)) / 1000;
  uVar1 = FUN_000364da();
  iVar2 = (int)DAT_002f10ce._3_1_;
  *(undefined4 *)(&DAT_002e1898 + iVar2 * 0x1508) = uVar1;
  *(undefined4 *)(&DAT_002e189c + iVar2 * 0x1508) = DAT_002e8bee;
  FUN_000e8c83();
  return;
}

/******************************************************************************
 * Function : sub_036008 (Ghidra: FUN_00036008)
 * Prototype: void sub_036008(void);
 * Address  : 0x36008 (Size: 16 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 1 -> 0xeb818
 ******************************************************************************/
void FUN_00036008(void)

{
  int iVar1;
  
  iVar1 = FUN_000eb818();
  DAT_0033614c = iVar1 + 3000;
  return;
}

/******************************************************************************
 * Function : sub_036018 (Ghidra: FUN_00036018)
 * Prototype: void sub_036018(void);
 * Address  : 0x36018 (Size: 208 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x36278, 0x36523, 0xe6b20
 ******************************************************************************/
void FUN_00036018(void)

{
  int in_EAX;
  uint uVar1;
  int *piVar2;
  int local_1c;
  
  FUN_00036523();
  DAT_003d98b4 = DAT_003346e8;
  uVar1 = 0;
  if (DAT_003346e8 != 0) {
    uVar1 = (uint)*(byte *)(DAT_003346e8 + 0xb);
  }
  local_1c = (int)*(short *)(in_EAX + 0x1f) + uVar1 / 2;
  for (piVar2 = &DAT_0017ba4c; *piVar2 != 0; piVar2 = piVar2 + 3) {
    FUN_000e6b20((uint)*(byte *)(DAT_00334728 + 0x9a),
                 (int)((uint)*(ushort *)(in_EAX + 0x25) + (uint)*(byte *)(DAT_00334728 + 0x9a) * -2)
                 / (int)(uint)DAT_0019cba6,local_1c / (int)(uint)DAT_0019cba6);
    FUN_00036278();
    if (DAT_003d98b4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    local_1c = local_1c + uVar1 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0360e8 (Ghidra: FUN_000360e8)
 * Prototype: void sub_0360e8(void);
 * Address  : 0x360e8 (Size: 160 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x36278, 0x36523, 0xe6b20
 ******************************************************************************/
void FUN_000360e8(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  
  FUN_00036523();
  FUN_000e6b20();
  piVar3 = (int *)(&DAT_0017ba94 + DAT_00336144 * 0xc);
  iVar2 = -DAT_00336148;
  while (iVar2 < (int)(uint)*(ushort *)(in_EAX + 0x27)) {
    piVar3 = piVar3 + 3;
    FUN_00036278();
    if (*piVar3 == 0) {
      piVar3 = (int *)&DAT_0017ba94;
    }
    if (DAT_003d98b4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    iVar2 = extraout_ECX + uVar1 + 4;
  }
  return;
}

/******************************************************************************
 * Function : sub_036188 (Ghidra: FUN_00036188)
 * Prototype: void sub_036188(void);
 * Address  : 0x36188 (Size: 155 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 2 -> 0x32738, 0xeb818
 ******************************************************************************/
void FUN_00036188(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_00336148 = DAT_00336148 + 1;
  DAT_003d98b4 = DAT_003346e8;
  uVar1 = 0;
  if (DAT_003346e8 != 0) {
    uVar1 = (uint)*(byte *)(DAT_003346e8 + 0xb);
  }
  if ((int)(uVar1 + 4) < DAT_00336148) {
    if (DAT_003346e8 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(byte *)(DAT_003346e8 + 0xb);
    }
    DAT_00336144 = DAT_00336144 + 1;
    DAT_00336148 = DAT_00336148 - (uVar1 + 4);
    if (*(int *)(&DAT_0017ba94 + DAT_00336144 * 0xc) == 0) {
      DAT_00336144 = 0;
    }
  }
  if (((DAT_002e78e9 != 0) && (DAT_002e78e9 < 0x15)) && (DAT_0033614c != 0)) {
    iVar2 = FUN_000eb818();
    if (DAT_0033614c < iVar2) {
      FUN_00032738();
      DAT_0033614c = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_036223 (Ghidra: FUN_00036223)
 * Prototype: void sub_036223(void);
 * Address  : 0x36223 (Size: 85 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x2e8a7, 0x33156
 ******************************************************************************/
void FUN_00036223(void)

{
  if ((DAT_0019d0b6 & 1) != 0) {
    FUN_00033156();
  }
  FUN_0002e8a7();
  DAT_00334a50 = 0;
  return;
}

/******************************************************************************
 * Function : sub_036278 (Ghidra: FUN_00036278)
 * Prototype: void sub_036278(void);
 * Address  : 0x36278 (Size: 105 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x36018, 0x360e8
 * Callees  : 2 -> 0xe6d80, 0xe7714
 ******************************************************************************/
void FUN_00036278(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined1 local_90 [128];
  
  DAT_003d98b4 = DAT_003346e8;
  DAT_003d9874 = 0x20;
  FUN_000e6d80();
  DAT_003d9874 = 0x80;
  uVar1 = (**(code **)(extraout_ECX + 4))();
  FUN_000e7714(local_90,&DAT_0016468c,uVar1);
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_0362e1 (Ghidra: FUN_000362e1)
 * Prototype: undefined4 sub_0362e1(void);
 * Address  : 0x362e1 (Size: 3 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000362e1(void)

{
  undefined4 *in_EAX;
  
  return *in_EAX;
}

