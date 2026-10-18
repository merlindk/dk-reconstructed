/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: anger.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 34
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_010010 (Ghidra: FUN_00010010)
 * Prototype: void sub_010010(void);
 * Address  : 0x10010 (Size: 141 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x110ed, 0x138c9, 0x168a2, 0x169a5, 0x16b29, 0x17381, 0x28bae, 0x3ef50, 0x3f12c, 0x752c3 ...
 * Callees  : 3 -> 0x10c5f, 0x10c85, 0xe66ec
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00010071) */

void FUN_00010010(void)

{
  short sVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_000e66ec();
  uVar2 = FUN_00010c5f();
  iVar3 = FUN_00010c85();
  uVar4 = (uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
  if ((int)uVar2 < (int)(uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)) {
    uVar4 = uVar2;
  }
  sVar1 = (short)uVar4;
  if (iVar3 < 0) {
    sVar1 = -sVar1;
  }
  *(ushort *)(in_EAX + 0x52) = sVar1 + *(short *)(in_EAX + 0x52) & 0x7ff;
  FUN_00010c5f();
  return;
}

/******************************************************************************
 * Function : sub_01009d (Ghidra: FUN_0001009d)
 * Prototype: void sub_01009d(void);
 * Address  : 0x1009d (Size: 149 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb4ae4
 * Callees  : 3 -> 0x10c5f, 0x10c85, 0xe66ec
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00010107) */

void FUN_0001009d(void)

{
  short sVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_000e66ec();
  uVar2 = FUN_00010c5f();
  iVar3 = FUN_00010c85();
  uVar4 = (uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
  if ((int)uVar2 < (int)(uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)) {
    uVar4 = uVar2;
  }
  sVar1 = (short)uVar4;
  if (iVar3 < 0) {
    sVar1 = -sVar1;
  }
  *(ushort *)(in_EAX + 0x52) = sVar1 + *(short *)(in_EAX + 0x52) & 0x7ff;
  FUN_00010c5f();
  return;
}

/******************************************************************************
 * Function : sub_010132 (Ghidra: FUN_00010132)
 * Prototype: void sub_010132(void);
 * Address  : 0x10132 (Size: 76 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3ed80, 0x668b0, 0x6da97, 0x7231c, 0x73765, 0x738f2, 0x746e4, 0xb4c30
 * Callees  : 2 -> 0x10c5f, 0x10c85
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00010166) */

void FUN_00010132(void)

{
  short sVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_00010c5f();
  iVar3 = FUN_00010c85();
  uVar4 = (uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
  if ((int)uVar2 < (int)(uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)) {
    uVar4 = uVar2;
  }
  sVar1 = (short)uVar4;
  if (iVar3 < 0) {
    sVar1 = -sVar1;
  }
  *(ushort *)(in_EAX + 0x52) = sVar1 + *(short *)(in_EAX + 0x52) & 0x7ff;
  FUN_00010c5f();
  return;
}

/******************************************************************************
 * Function : sub_01017e (Ghidra: FUN_0001017e)
 * Prototype: void sub_01017e(void);
 * Address  : 0x1017e (Size: 68 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x65199, 0x65283, 0x71601, 0x717de, 0xb4ae4, 0xb4c30
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001017e(void)

{
  int iVar1;
  int in_EAX;
  short in_DX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(short *)(iVar1 + 200) = in_DX;
  if (in_DX < -0x100) {
    *(undefined2 *)(iVar1 + 200) = 0x100;
    *(short *)(iVar1 + 200) = -*(short *)(iVar1 + 200);
  }
  else if (0x100 < in_DX) {
    *(undefined2 *)(iVar1 + 200) = 0x100;
  }
  *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x40;
  return;
}

/******************************************************************************
 * Function : sub_0101c2 (Ghidra: FUN_000101c2)
 * Prototype: undefined4 sub_0101c2(void);
 * Address  : 0x101c2 (Size: 103 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe3e78, 0xe40f8
 * Callees  : 1 -> 0xdc5c4
 ******************************************************************************/
undefined4 FUN_000101c2(void)

{
  char cVar1;
  int in_EAX;
  int in_EDX;
  undefined4 uVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  
  uVar2 = *(undefined4 *)(in_EAX + 0xd);
  uVar4 = *(undefined4 *)(in_EDX + 0xd);
  sVar5 = *(short *)(in_EDX + 0x11);
  sVar3 = *(short *)(in_EAX + 0x11) +
          *(short *)(&DAT_002e9162 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
  cVar1 = FUN_000dc5c4(uVar2,sVar3,uVar4,sVar5);
  if (cVar1 == '\0') {
    cVar1 = FUN_000dc5c4(uVar2,sVar3,uVar4,sVar5 + *(short *)(in_EDX + 0x58));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_010229 (Ghidra: FUN_00010229)
 * Prototype: undefined4 sub_010229(void);
 * Address  : 0x10229 (Size: 151 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xd5ac0, 0xdc5c4, 0xdcd44
 ******************************************************************************/
undefined4 FUN_00010229(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar2 = FUN_000d5ac0(*(undefined4 *)(in_EAX + 0xd),
                       *(short *)(in_EAX + 0x11) +
                       *(short *)(&DAT_002e9162 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6),
                       *(undefined4 *)(in_EDX + 0xd),*(undefined2 *)(in_EDX + 0x11));
  if (iVar2 == 0) {
    cVar1 = FUN_000dcd44();
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = FUN_000dcd44();
  }
  else {
    cVar1 = FUN_000dc5c4();
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = FUN_000dc5c4();
  }
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0102c0 (Ghidra: FUN_000102c0)
 * Prototype: int sub_0102c0(void);
 * Address  : 0x102c0 (Size: 328 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1614f
 * Callees  : 6 -> 0xb39e4, 0xd5ac0, 0xdc5c4, 0xdc984, 0xddbe0, 0xde074
 ******************************************************************************/
int FUN_000102c0(void)

{
  char cVar1;
  int iVar2;
  int in_EDX;
  bool bVar3;
  
  if (*(char *)(in_EDX + 0x1f) == '\t') {
    iVar2 = FUN_000d5ac0();
    if ((iVar2 == 0) && (iVar2 = FUN_000b39e4(), iVar2 == 0)) {
      iVar2 = FUN_000de074();
      if (iVar2 < 1) {
        iVar2 = FUN_000de074();
        return iVar2;
      }
      return iVar2;
    }
    iVar2 = FUN_000dc984();
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_000dc984();
    bVar3 = iVar2 == 0;
  }
  else {
    iVar2 = FUN_000d5ac0();
    if ((iVar2 == 0) && (iVar2 = FUN_000b39e4(), iVar2 == 0)) {
      iVar2 = FUN_000ddbe0();
      if (iVar2 < 1) {
        iVar2 = FUN_000ddbe0();
        return iVar2;
      }
      return iVar2;
    }
    cVar1 = FUN_000dc5c4();
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = FUN_000dc5c4();
    bVar3 = cVar1 == '\0';
  }
  if (!bVar3) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_010408 (Ghidra: FUN_00010408)
 * Prototype: bool sub_010408(void);
 * Address  : 0x10408 (Size: 44 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x16175, 0x28eb4
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00010408(void)

{
  int in_EAX;
  int in_EDX;
  
  return (int)((in_EDX + (in_EDX >> 0x1f) * -0x100) - (uint)((in_EDX >> 0x1f) << 7 < 0)) >> 8 <=
         (int)(uint)(byte)(&DAT_002e91a8)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
}

/******************************************************************************
 * Function : sub_010434 (Ghidra: FUN_00010434)
 * Prototype: void sub_010434(void);
 * Address  : 0x10434 (Size: 167 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 27 -> 0x23250, 0x2649f, 0x26ce2, 0x28851, 0x28bae, 0x4eb02, 0x51f4c, 0x52119, 0x52362, 0x525b2 ...
 * Callees  : 2 -> 0x10b30, 0x10b75
 ******************************************************************************/
void FUN_00010434(void)

{
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  if (*(short *)(&DAT_002e9122 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) {
    if (in_EDX < 0) {
      FUN_00010b75();
      if (unaff_EBX == 4) {
        FUN_00010b75();
        FUN_00010b75();
        FUN_00010b75();
        return;
      }
    }
    else if (in_EDX != 0) {
      FUN_00010b30();
      if (unaff_EBX != 4) {
        FUN_00010b30();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0104db (Ghidra: FUN_000104db)
 * Prototype: void sub_0104db(void);
 * Address  : 0x104db (Size: 154 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4d0d5, 0x4d197, 0x85ba4
 * Callees  : 2 -> 0x10b30, 0x10b75
 ******************************************************************************/
void FUN_000104db(void)

{
  int in_EAX;
  int in_EDX;
  
  if (*(short *)(&DAT_002e9122 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) {
    if (in_EDX < 0) {
      FUN_00010b75();
      FUN_00010b75();
      FUN_00010b75();
      FUN_00010b75();
      return;
    }
    if (in_EDX != 0) {
      FUN_00010b30();
      FUN_00010b30();
      FUN_00010b30();
      FUN_00010b30();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_010575 (Ghidra: FUN_00010575)
 * Prototype: byte sub_010575(void);
 * Address  : 0x10575 (Size: 20 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x1073a, 0x20826, 0x4d0d5, 0x4d197, 0x63a25, 0x844f4, 0xa5240, 0xe5e04
 * Callees  : 0 -> 
 ******************************************************************************/
byte FUN_00010575(void)

{
  int in_EAX;
  
  return *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x66) & 1;
}

/******************************************************************************
 * Function : sub_010589 (Ghidra: FUN_00010589)
 * Prototype: byte sub_010589(void);
 * Address  : 0x10589 (Size: 24 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1073a, 0x20826, 0xa5240
 * Callees  : 0 -> 
 ******************************************************************************/
byte FUN_00010589(void)

{
  int in_EAX;
  
  return (*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x66) & 3) >> 1;
}

/******************************************************************************
 * Function : sub_0105a1 (Ghidra: FUN_000105a1)
 * Prototype: undefined8 sub_0105a1(void);
 * Address  : 0x105a1 (Size: 101 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1073a, 0xa5240
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000105a1(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  int iVar5;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar4 = 0;
  iVar5 = 0;
  if ((*(short *)(&DAT_002e9122 + iVar2) != 0) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x66) & 1) != 0)) {
    iVar3 = 1;
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    do {
      if (iVar4 < *(int *)(iVar1 + 0x56)) {
        iVar4 = *(int *)(iVar1 + 0x56);
        iVar5 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar3 < 5);
    if (*(short *)(&DAT_002e9122 + iVar2) <= iVar4) goto LAB_00010600;
  }
  iVar5 = 0;
LAB_00010600:
  return CONCAT44(in_EDX,iVar5);
}

/******************************************************************************
 * Function : sub_010606 (Ghidra: FUN_00010606)
 * Prototype: undefined4 sub_010606(void);
 * Address  : 0x10606 (Size: 68 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11db9
 * Callees  : 1 -> 0x109ea
 ******************************************************************************/
undefined4 FUN_00010606(void)

{
  int in_EAX;
  
  if ((*(short *)(&DAT_002e9122 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x66) & 1) == 0)) {
    FUN_000109ea();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01064a (Ghidra: FUN_0001064a)
 * Prototype: undefined4 sub_01064a(void);
 * Address  : 0x1064a (Size: 63 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x109ea
 ******************************************************************************/
undefined4 FUN_0001064a(void)

{
  int in_EAX;
  
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x66) & 1) == 0) {
    FUN_000109ea();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_010689 (Ghidra: FUN_00010689)
 * Prototype: undefined4 sub_010689(void);
 * Address  : 0x10689 (Size: 161 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x570a7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00010689(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *in_EDX;
  int *unaff_EBX;
  int iVar3;
  int local_18;
  int local_14;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar3 = 0;
  local_18 = 0;
  if (*(short *)(&DAT_002e9122 + iVar2) != 0) {
    local_14 = 1;
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    do {
      if (iVar3 < *(int *)(iVar1 + 0x56)) {
        local_18 = local_14;
        iVar3 = *(int *)(iVar1 + 0x56);
      }
      local_14 = local_14 + 1;
      iVar1 = iVar1 + 4;
    } while (local_14 < 5);
    if (iVar3 != 0) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (*(short *)(&DAT_002e9122 + iVar2) * 2 < iVar3) {
        iVar3 = *(short *)(&DAT_002e9122 + iVar2) * 2;
      }
      *unaff_EBX = (iVar3 << 8) / (*(short *)(&DAT_002e9122 + iVar2) * 2);
      *in_EDX = local_18;
      return 1;
    }
  }
  *unaff_EBX = 0;
  *in_EDX = 0;
  return 0;
}

/******************************************************************************
 * Function : dk_hurrah_mental_instability_creature_01073a (Ghidra: FUN_0001073a)
 * Prototype: undefined4 dk_hurrah_mental_instability_creature_01073a(void);
 * Address  : 0x1073a (Size: 688 bytes)
 * Module   : anger.cpp [direct_file_string_xref]
 * OrigLine : anger.cpp:234 ("Hurrah, mental instability error - creature has a psychosis. It is angry but has no motive."); anger.cpp:270 ("Tried sending creature to Temple, could not get there. Cleaned up old state.")
 * Naming   : String 'Hurrah, mental instability error - creature has a psychosis.'
 * Callers  : 1 -> 0x52834
 * Callees  : 14 -> 0x10575, 0x10589, 0x105a1, 0x10dac, 0x10dfc, 0x51374, 0x63b6d, 0x64a2e, 0x64a5f, 0x64c4d ...
 * Strings  :
 *   - 0x160060: "anger.cpp"
 *   - 0x1600b7: "anger.cpp"
 *   - 0x160004: "Hurrah, mental instability error - creature has a psychosis. It is angry but has no motive."
 *   - 0x16006a: "Tried sending creature to Temple, could not get there. Cleaned up old state."
 ******************************************************************************/
undefined4 FUN_0001073a(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  int in_EDX;
  int *piVar7;
  undefined4 uStack_1c;
  int local_18;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(in_EDX + 0x15) == 0) {
    return 0;
  }
  uStack_1c = 0x10762;
  local_18 = in_EDX;
  cVar2 = FUN_00010dac();
  if (cVar2 == '\0') {
    return 0;
  }
  uStack_1c = 0x10771;
  iVar5 = FUN_00010575();
  if (iVar5 == 0) {
    return 0;
  }
  if ((uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] != (int)*(char *)(in_EAX + 6))
  goto LAB_00010812;
  uStack_1c = 0x10804;
  uVar6 = FUN_000105a1();
  switch(uVar6) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    if (*(short *)(iVar1 + 0x6a) != 0) goto switchD_0001080a_caseD_4;
    break;
  case 4:
switchD_0001080a_caseD_4:
    break;
  default:
    uStack_1c = 0x107fb;
    FUN_000ddaf0(); /* LbErrorLog("anger.cpp", line 234, "Hurrah, mental instability error - creature has a psychosis. It is angry but has no motive.") */
    goto LAB_00010812;
  }
  uStack_1c = 0x107ae;
  FUN_00051374();
LAB_00010812:
  if (*(char *)(in_EAX + 7) == '\x0e') {
    bVar3 = *(byte *)(in_EAX + 8);
  }
  else {
    bVar3 = *(byte *)(in_EAX + 7);
  }
  if ((&DAT_0018c4be)[(uint)bVar3 * 0x29] != '\n') {
    uStack_1c = 0x10840;
    iVar5 = FUN_00010589();
    if ((iVar5 != 0) && (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 0x3f) == 0)) {
      uStack_1c = 0x10859;
      iVar5 = FUN_00010dfc();
      if (iVar5 != 0) {
        return 1;
      }
    }
    piVar7 = &local_18;
    if (((*(short *)(local_18 + 0xb6) < 0) &&
        (piVar7 = &local_18, *(short *)(&DAT_002e05a8 + *(char *)(in_EAX + 6) * 0x1508) != 0)) &&
       (piVar7 = &local_18, 0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2df)))) {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 == 'R') {
        return 1;
      }
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 == 'S') {
        return 1;
      }
      uStack_1c = 1;
      *(int *)(iVar1 + 0x2df) = DAT_002e8bee;
      iVar5 = FUN_000ca568();
      if (iVar5 == 0) {
        piVar7 = &uStack_1c;
        if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          FUN_00051374();
          piVar7 = &uStack_1c;
        }
      }
      else {
        iVar5 = FUN_000cfc48();
        piVar7 = &uStack_1c;
        if ((iVar5 != 0) && (cVar2 = FUN_00064c4d(), piVar7 = &uStack_1c, cVar2 != '\0')) {
          FUN_00064a2e();
          sVar4 = FUN_000cb33c();
          if (sVar4 != 0) {
            return 1;
          }
          FUN_00063b6d();
          FUN_000ddaf0(); /* LbErrorLog("anger.cpp", line 270, "Tried sending creature to Temple, could not get there. Cleaned up old state.") */
          piVar7 = &uStack_1c;
        }
      }
    }
    if (((*(short *)(iVar1 + 0x68) != 0) && (*(char *)(local_18 + 0x17) != '\0')) &&
       (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2e3)))) {
      *(int *)(iVar1 + 0x2e3) = DAT_002e8bee;
      *(undefined4 *)((int)piVar7 + -4) = 0x109bf;
      FUN_000105a1();
      *(undefined4 *)((int)piVar7 + -4) = 0x109d0;
      cVar2 = FUN_00064a5f();
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_removing_annoyed_creature_non_0109ea (Ghidra: FUN_000109ea)
 * Prototype: void dk_removing_annoyed_creature_non_0109ea(void);
 * Address  : 0x109ea (Size: 236 bytes)
 * Module   : anger.cpp [direct_file_string_xref]
 * OrigLine : anger.cpp:361 ("REMOVING ANNOYED CREATURE - NON TO Remove")
 * Naming   : String 'REMOVING ANNOYED CREATURE - NON TO Remove'
 * Callers  : 7 -> 0x10606, 0x1064a, 0x10ad6, 0x10b30, 0x10b75, 0x4da55, 0x6db51
 * Callees  : 3 -> 0x10ba3, 0x274ad, 0xddaf0
 * Strings  :
 *   - 0x1600eb: "anger.cpp"
 *   - 0x1600c1: "REMOVING ANNOYED CREATURE - NON TO Remove"
 ******************************************************************************/
void FUN_000109ea(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int in_EDX;
  int extraout_EDX;
  byte bVar2;
  int unaff_EBX;
  
  bVar2 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x66) & 1;
  if ((DAT_0019d0c0 == '\0') &&
     (*(short *)(&DAT_002e9122 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0)) {
    if (in_EDX < 0) {
      in_EDX = 0;
    }
    else if (0xfffe < in_EDX) {
      in_EDX = 0xfffe;
    }
    *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x52 + unaff_EBX * 4) = in_EDX;
    FUN_00010ba3();
    iVar1 = (int)*(char *)(extraout_ECX + 6);
    if (iVar1 < 5) {
      if ((*(byte *)(extraout_EDX + 0x66) & 1) == 0) {
        if (bVar2 != 0) {
          if ((&DAT_002e1058)[iVar1 * 0xa84] != 0) {
            (&DAT_002e1058)[iVar1 * 0xa84] = (&DAT_002e1058)[iVar1 * 0xa84] + -1;
            return;
          }
          FUN_000ddaf0(); /* LbErrorLog("anger.cpp", line 361, "REMOVING ANNOYED CREATURE - NON TO Remove") */
        }
      }
      else if (bVar2 == 0) {
        (&DAT_002e1058)[iVar1 * 0xa84] = (&DAT_002e1058)[iVar1 * 0xa84] + 1;
        FUN_000274ad(*(undefined2 *)(extraout_ECX + 0x1b));
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_010ad6 (Ghidra: FUN_00010ad6)
 * Prototype: void sub_010ad6(void);
 * Address  : 0x10ad6 (Size: 55 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x11be9, 0x67e04, 0x74853, 0x7fac8, 0x85ba4
 * Callees  : 1 -> 0x109ea
 ******************************************************************************/
void FUN_00010ad6(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(short *)(&DAT_002e9122 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) {
    iVar1 = 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_000109ea();
    } while (iVar1 < 5);
  }
  return;
}

/******************************************************************************
 * Function : sub_010b0d (Ghidra: FUN_00010b0d)
 * Prototype: undefined4 sub_010b0d(void);
 * Address  : 0x10b0d (Size: 29 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10b30
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00010b0d(void)

{
  int in_EAX;
  
  if ((*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 3) == '\0') &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 8) == 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_010b2a (Ghidra: FUN_00010b2a)
 * Prototype: undefined4 sub_010b2a(void);
 * Address  : 0x10b2a (Size: 6 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10b75
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00010b2a(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_010b30 (Ghidra: FUN_00010b30)
 * Prototype: void sub_010b30(void);
 * Address  : 0x10b30 (Size: 69 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x10434, 0x104db
 * Callees  : 2 -> 0x109ea, 0x10b0d
 ******************************************************************************/
void FUN_00010b30(void)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_00010b0d();
  if (iVar1 != 0) {
    if (*(char *)(extraout_ECX + 6) < 5) {
      *(int *)(&DAT_002e1834 + *(char *)(extraout_ECX + 6) * 0x1508) =
           *(int *)(&DAT_002e1834 + *(char *)(extraout_ECX + 6) * 0x1508) + 1;
    }
    FUN_000109ea();
  }
  return;
}

/******************************************************************************
 * Function : sub_010b75 (Ghidra: FUN_00010b75)
 * Prototype: void sub_010b75(void);
 * Address  : 0x10b75 (Size: 46 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x10434, 0x104db
 * Callees  : 2 -> 0x109ea, 0x10b2a
 ******************************************************************************/
void FUN_00010b75(void)

{
  int iVar1;
  
  iVar1 = FUN_00010b2a();
  if (iVar1 != 0) {
    FUN_000109ea();
  }
  return;
}

/******************************************************************************
 * Function : sub_010ba3 (Ghidra: FUN_00010ba3)
 * Prototype: void sub_010ba3(void);
 * Address  : 0x10ba3 (Size: 90 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x109ea
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00010ba3(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  
  iVar3 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar4 = 1;
  *(byte *)(iVar1 + 0x66) = *(byte *)(iVar1 + 0x66) & 0xfc;
  iVar2 = iVar1;
  while( true ) {
    if (4 < iVar4) {
      return;
    }
    if (((int)*(short *)(&DAT_002e9122 + iVar3) <= *(int *)(iVar2 + 0x56)) &&
       (*(byte *)(iVar1 + 0x66) = *(byte *)(iVar1 + 0x66) | 1,
       *(short *)(&DAT_002e9122 + iVar3) * 2 <= *(int *)(iVar2 + 0x56))) break;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 4;
  }
  *(byte *)(iVar1 + 0x66) = *(byte *)(iVar1 + 0x66) | 2;
  return;
}

/******************************************************************************
 * Function : sub_010c1a (Ghidra: FUN_00010c1a)
 * Prototype: uint sub_010c1a(void);
 * Address  : 0x10c1a (Size: 42 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 19 -> 0x1211a, 0x12230, 0x12edf, 0x168a2, 0x169a5, 0x171e4, 0x2585f, 0x6b820, 0x6bdda, 0xa49ec ...
 * Callees  : 1 -> 0xe66ec
 ******************************************************************************/
uint FUN_00010c1a(void)

{
  uint uVar1;
  
  uVar1 = FUN_000e66ec();
  return (uVar1 & 0xffff) % 0x800;
}

/******************************************************************************
 * Function : sub_010c44 (Ghidra: FUN_00010c44)
 * Prototype: uint sub_010c44(void);
 * Address  : 0x10c44 (Size: 27 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x6b820, 0x6bdda, 0xc4574, 0xc4840, 0xe1ec4
 * Callees  : 1 -> 0xdc354
 ******************************************************************************/
uint FUN_00010c44(void)

{
  uint uVar1;
  
  FUN_000dc354();
  uVar1 = FUN_000e66ec();
  return (uVar1 & 0xffff) % 0x800;
}

/******************************************************************************
 * Function : sub_010c5f (Ghidra: FUN_00010c5f)
 * Prototype: uint sub_010c5f(void);
 * Address  : 0x10c5f (Size: 38 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x10010, 0x1009d, 0x10132, 0x168a2, 0x169a5, 0x171e4, 0x6fda2, 0xab870, 0xab8dc, 0xb3dac ...
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
uint FUN_00010c5f(void)

{
  uint uVar1;
  
  uVar1 = FUN_000e69fc();
  if (0x400 < (int)uVar1) {
    uVar1 = 0x800 - uVar1 & 0xffff;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_010c85 (Ghidra: FUN_00010c85)
 * Prototype: int sub_010c85(void);
 * Address  : 0x10c85 (Size: 82 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x10010, 0x1009d, 0x10132, 0x6fda2, 0xab870, 0xab8dc
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
int FUN_00010c85(void)

{
  uint in_EAX;
  uint in_EDX;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((in_EDX & 0x7ff) == (in_EAX & 0x7ff)) {
    return 0;
  }
  lVar2 = FUN_000e69fc();
  iVar1 = (int)((ulonglong)lVar2 >> 0x20);
  if (0x400 < (int)lVar2) {
    if (lVar2 < 0) {
      iVar1 = iVar1 + 0x800;
    }
    else {
      iVar1 = iVar1 + -0x800;
    }
  }
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_000e69fc();
  return (int)(char)((int)((ulonglong)uVar3 >> 0x20) / (int)uVar3);
}

/******************************************************************************
 * Function : sub_010cd7 (Ghidra: FUN_00010cd7)
 * Prototype: void sub_010cd7(void);
 * Address  : 0x10cd7 (Size: 30 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x25cf7, 0xab8dc
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00010cd7(void)

{
  short sVar1;
  int in_EAX;
  short *in_EDX;
  
  *(short *)(in_EAX + 0x26) = *(short *)(in_EAX + 0x26) + *in_EDX;
  *(short *)(in_EAX + 0x28) = *(short *)(in_EAX + 0x28) + in_EDX[1];
  sVar1 = in_EDX[2];
  *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 8;
  *(short *)(in_EAX + 0x2a) = *(short *)(in_EAX + 0x2a) + sVar1;
  return;
}

/******************************************************************************
 * Function : sub_010cf5 (Ghidra: FUN_00010cf5)
 * Prototype: void sub_010cf5(void);
 * Address  : 0x10cf5 (Size: 19 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6bdda
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00010cf5(void)

{
  int in_EAX;
  
  *(undefined2 *)(in_EAX + 0x32) = 0;
  *(undefined2 *)(in_EAX + 0x34) = 0;
  *(undefined2 *)(in_EAX + 0x36) = 0;
  return;
}

/******************************************************************************
 * Function : sub_010d08 (Ghidra: FUN_00010d08)
 * Prototype: void sub_010d08(void);
 * Address  : 0x10d08 (Size: 139 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x6b820, 0x6bdda, 0x717de, 0x763d4, 0x76569, 0xc4574, 0xc4840, 0xe1ec4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00010d08(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort in_AX;
  undefined2 *in_ECX;
  ushort in_DX;
  int unaff_EBX;
  int iVar4;
  
  iVar1 = (&DAT_001927e0)[(short)in_DX];
  iVar4 = unaff_EBX * 0x4000 - ((int)(&PTR_LAB_00192fe0)[(short)(in_DX & 0x7ff)] >> 2);
  lVar2 = (longlong)iVar4 * (longlong)((int)(&DAT_001927e0)[(short)(in_AX & 0x7ff)] >> 2);
  lVar3 = (longlong)iVar4 * (longlong)((int)(&PTR_LAB_00192fe0)[(short)(in_AX & 0x7ff)] >> 2);
  *in_ECX = (short)((int)((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) >> 0xe);
  in_ECX[1] = (short)((int)-((uint)lVar3 >> 0xe | (int)((ulonglong)lVar3 >> 0x20) << 0x12) >> 0xe);
  in_ECX[2] = (short)((uint)(iVar1 * unaff_EBX) >> 0x10);
  return;
}

/******************************************************************************
 * Function : sub_010d93 (Ghidra: FUN_00010d93)
 * Prototype: undefined8 sub_010d93(void);
 * Address  : 0x10d93 (Size: 22 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x128cd, 0x12c46, 0xd2510, 0xd5624
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00010d93(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,(int)(in_EAX + 0x100U & 0x7ff) >> 9);
}

/******************************************************************************
 * Function : sub_010dac (Ghidra: FUN_00010dac)
 * Prototype: ulonglong sub_010dac(void);
 * Address  : 0x10dac (Size: 80 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1073a
 * Callees  : 1 -> 0x85954
 ******************************************************************************/
ulonglong FUN_00010dac(void)

{
  byte *in_EAX;
  undefined4 in_EDX;
  
  if (((((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 8) == 0) &&
       (*(int *)(&DAT_002e0e11 + (char)in_EAX[6] * 0x1508) == 0)) &&
      ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 2) == 0)) &&
     (((*in_EAX & 0x10) == 0 && ((in_EAX[1] & 2) == 0)))) {
    in_EAX = (byte *)FUN_00085954();
    if (in_EAX == (byte *)0x0) {
      return CONCAT44(in_EDX,1);
    }
  }
  return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_010dfc (Ghidra: FUN_00010dfc)
 * Prototype: undefined8 sub_010dfc(void);
 * Address  : 0x10dfc (Size: 208 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1073a
 * Callees  : 1 -> 0x11862
 ******************************************************************************/
undefined8 FUN_00010dfc(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  uint uVar5;
  int iVar6;
  int local_1c;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  if (*(short *)(&DAT_002e91db + iVar2) != 0) {
    uVar5 = 0;
    for (sVar1 = *(short *)(&DAT_002e91db + iVar2); sVar1 != 0; sVar1 = sVar1 >> 1) {
      uVar5 = uVar5 + 1;
    }
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    local_1c = 0;
    iVar6 = DAT_002e8bf6 % uVar5 + 1;
    while( true ) {
      if (((int)*(short *)(&DAT_002e91db + iVar2) & 1 << ((byte)local_1c & 0x1f)) != 0) {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 == 0) break;
      local_1c = local_1c + 1;
    }
    for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
      if (((int)*(short *)(&DAT_002e91db + iVar2) & 1 << ((byte)local_1c & 0x1f)) != 0) {
        iVar3 = FUN_00011862();
        if (iVar3 != 0) {
          uVar4 = 1;
          goto LAB_00011201;
        }
      }
      local_1c = (local_1c + 1) % 8;
    }
  }
  uVar4 = 0;
LAB_00011201:
  return CONCAT44(in_EDX,uVar4);
}

