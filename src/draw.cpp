/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: draw.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 68
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0872a4 (Ghidra: FUN_000872a4)
 * Prototype: void sub_0872a4(void);
 * Address  : 0x872a4 (Size: 20 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x50708, 0x508a9
 * Callees  : 4 -> 0x5449e, 0x58ba8, 0x880d0, 0x882b4
 ******************************************************************************/
void FUN_000872a4(void)

{
  FUN_000880d0();
  FUN_000882b4();
  FUN_0005449e();
  FUN_00058ba8();
  return;
}

/******************************************************************************
 * Function : sub_0872b8 (Ghidra: FUN_000872b8)
 * Prototype: void sub_0872b8(void);
 * Address  : 0x872b8 (Size: 985 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x50708, 0x508a9, 0x8685c
 * Callees  : 14 -> 0x23ece, 0x2457b, 0x397c3, 0x5449e, 0x58ba8, 0x62ee2, 0x780df, 0x890bc, 0x8afd8, 0x8d220 ...
 ******************************************************************************/
void FUN_000872b8(void)

{
  uint uVar1;
  short *psVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  undefined2 auStack_820 [1018];
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  uint local_1c;
  
  bVar9 = 0;
  puVar8 = &uStack_24;
  iVar5 = (DAT_002f10ce >> 0x18) * 0x4ef;
  uStack_24 = **(undefined4 **)((int)&DAT_0019d100 + iVar5);
  uStack_20 = *(undefined2 *)(*(undefined4 **)((int)&DAT_0019d100 + iVar5) + 1);
  if ((&DAT_0019d527)[iVar5] != '\x01') {
    (&DAT_0019d527)[iVar5] = 1;
  }
  if (*(int *)(&DAT_002e1429 + (DAT_002f10ce >> 0x18) * 0x1508) != 0) {
    uVar1 = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = uVar1 >> 0xd | uVar1 * 0x80000;
    psVar2 = *(short **)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef);
    *psVar2 = (short)((ulonglong)DAT_002e8bfa % 0x50) + *psVar2 + -0x28;
    uVar1 = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = uVar1 >> 0xd | uVar1 * 0x80000;
    iVar5 = *(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef);
    *(short *)(iVar5 + 2) = (short)((ulonglong)DAT_002e8bfa % 0x50) + *(short *)(iVar5 + 2) + -0x28;
  }
  iVar5 = DAT_002f10ce >> 0x18;
  iVar6 = iVar5 * 0x1508;
  if (*(int *)(&DAT_002e142d + iVar6) != 0) {
    puVar3 = *(ushort **)((int)&DAT_0019d100 + iVar5 * 0x4ef);
    iVar7 = (uint)*puVar3 +
            (*(int *)(&DAT_002e142d + iVar6) * (&DAT_001927e0)[*(int *)((int)puVar3 + 7)] >> 0x10);
    iVar6 = (uint)puVar3[1] +
            (-(*(int *)(&DAT_002e142d + iVar6) * (int)(&PTR_LAB_00192fe0)[*(int *)((int)puVar3 + 7)]
              >> 8) >> 8);
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (0xffff < iVar7) {
      iVar7 = 0xffff;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (0xffff < iVar6) {
      iVar6 = 0xffff;
    }
    **(undefined2 **)((int)&DAT_0019d100 + iVar5 * 0x4ef) = (short)iVar7;
    *(short *)(*(int *)((int)&DAT_0019d100 + iVar5 * 0x4ef) + 2) = (short)iVar6;
  }
  uStack_28 = 0x87477;
  FUN_00023ece();
  if ((DAT_0019d0ba & 8) != 0) {
    local_1c = (uint)*(ushort *)(&DAT_0019d50e + (DAT_002f10ce >> 0x18) * 0x4ef);
    uStack_28 = 0x874d4;
    FUN_000780df();
  }
  uStack_28 = 0x874ef;
  FUN_000a43b4();
  if ((DAT_0019d0ba & 8) != 0) {
    uStack_28 = 0x87526;
    FUN_000780df();
  }
  if (DAT_00377764 != '\0') {
    uStack_28 = DAT_003d9834;
    uStack_2c = (uint)DAT_0019cba2;
    puVar8 = &uStack_2c;
    FUN_0008eadc();
  }
  puVar8[-1] = 0x87571;
  FUN_0002457b();
  if ((DAT_0019d0b8 & 0x20) != 0) {
    DAT_003d9874 = 0;
    DAT_003d9885 = DAT_0019a29f;
    puVar8[-1] = 0x875a5;
    FUN_000397c3();
    puVar8[-1] = 0x875d9;
    FUN_0008d220();
    puVar8[-1] = 0x87622;
    FUN_00062ee2();
    puVar8[-1] = 0x87629;
    FUN_000890bc();
  }
  puVar8[-1] = 0x8762e;
  FUN_0005449e();
  if ((DAT_0019d0b8 & 0x20) != 0) {
    puVar8[-1] = 0x8765f;
    FUN_0008d348();
  }
  puVar8[-1] = 0x87664;
  FUN_0008ebb0();
  puVar8[-1] = 0x87669;
  FUN_0008afd8();
  puVar8[-1] = 0x8766e;
  FUN_00058ba8();
  puVar4 = *(undefined4 **)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef);
  *puVar4 = *puVar8;
  *(undefined2 *)(puVar4 + (uint)bVar9 * -2 + 1) = *(undefined2 *)(puVar8 + (uint)bVar9 * -2 + 1);
  return;
}

/******************************************************************************
 * Function : sub_087694 (Ghidra: FUN_00087694)
 * Prototype: void sub_087694(void);
 * Address  : 0x87694 (Size: 476 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x50708, 0x508a9, 0x8685c
 * Callees  : 13 -> 0x23ece, 0x2457b, 0x397c3, 0x5449e, 0x58ba8, 0x62ee2, 0x780df, 0x890bc, 0x8afd8, 0x8d220 ...
 ******************************************************************************/
void FUN_00087694(void)

{
  FUN_00023ece();
  if ((DAT_0019d0ba & 8) != 0) {
    FUN_000780df();
  }
  FUN_000a6990();
  if ((DAT_0019d0ba & 8) != 0) {
    FUN_000780df();
  }
  FUN_0002457b();
  if ((DAT_0019d0b8 & 0x20) != 0) {
    DAT_003d9874 = 0;
    DAT_003d9885 = DAT_0019a29f;
    FUN_000397c3();
    FUN_0008d220();
    FUN_00062ee2();
    FUN_000890bc();
  }
  FUN_0005449e();
  if ((DAT_0019d0b8 & 0x20) != 0) {
    FUN_0008d348();
  }
  FUN_0008ebb0();
  FUN_0008afd8();
  FUN_00058ba8();
  return;
}

/******************************************************************************
 * Function : sub_087870 (Ghidra: FUN_00087870)
 * Prototype: void sub_087870(void);
 * Address  : 0x87870 (Size: 1283 bytes)
 * Module   : draw.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8685c
 * Callees  : 13 -> 0x23ece, 0x2457b, 0x397c3, 0x5449e, 0x58ba8, 0x62ee2, 0x87da4, 0x890bc, 0x8d220, 0x8d348 ...
 ******************************************************************************/
void FUN_00087870(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar7;
  int iVar6;
  int iVar8;
  uint *puVar9;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [32];
  
  puVar9 = (uint *)local_38;
  iVar4 = (DAT_002f10ce >> 0x18) * 0x4ef;
  if ((&DAT_0019d527)[iVar4] != '\x02') {
    (&DAT_0019d527)[iVar4] = 2;
  }
  local_3c = 0x878b3;
  FUN_00023ece();
  local_3c = 0x878d9;
  FUN_00087da4();
  if (DAT_00377764 != '\0') {
    local_3c = DAT_003d9834;
    local_40 = (uint)DAT_0019cba2;
    puVar9 = &local_40;
    FUN_0008eadc();
  }
  puVar9[-1] = 0x87924;
  FUN_0002457b();
  iVar8 = (DAT_002f10ce >> 0x18) * 0x4ef;
  iVar4 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar8)];
  uVar5 = DAT_002e8bfa * 0x24a1 + 0x24df;
  if (iVar4 == DAT_001ae9fc) {
    DAT_002e8bfa._0_1_ = (byte)(uVar5 >> 0xd);
    uVar3 = CONCAT11((&DAT_0019d0c9)[iVar8],(byte)DAT_002e8bfa) & 0xfb01;
    bVar7 = (byte)(uVar3 >> 8);
    DAT_002e8bfa = uVar5 >> 0xd | uVar5 * 0x80000;
    (&DAT_0019d0c9)[iVar8] = bVar7;
    (&DAT_0019d0c9)[iVar8] = bVar7 | (char)uVar3 << 2;
  }
  else if (*(char *)(iVar4 + 0x1f) == '\x05') {
    iVar4 = (&DAT_001b0a00)[*(ushort *)(iVar4 + 100)];
    cVar1 = *(char *)(iVar4 + 0xd2);
    if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\'')) {
      DAT_003d9874 = 4;
      iVar4 = (*(int *)(iVar4 + 0xd2) >> 0x10) *
              (int)(0x500 / (longlong)(*(int *)(iVar4 + 0xd6) >> 0x10));
      iVar8 = iVar4 >> 0x1f;
      iVar8 = (int)((iVar4 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
      puVar9[2] = 0;
      iVar6 = 0;
      iVar4 = *(int *)(&DAT_001991e8 + iVar8 * 4);
      do {
        iVar6 = iVar6 + 1;
        puVar9[2] = puVar9[2] + (uint)*(byte *)(iVar4 + 10) * (uint)DAT_0019cba6;
        iVar4 = iVar4 + 6;
      } while (iVar6 < 3);
      iVar8 = iVar8 * 4;
      if (((&DAT_0019d0c9)[(DAT_002f10ce >> 0x18) * 0x4ef] & 4) == 0) {
        DAT_003d9874 = 5;
        puVar9[3] = iVar8;
        *puVar9 = 0x12;
        do {
          puVar9[5] = (uint)*(byte *)(*(int *)(&DAT_001991e8 + puVar9[3]) + *puVar9 + 5) *
                      (uint)DAT_0019cba6;
          puVar9[1] = 0;
          do {
            puVar9[-1] = 0x87c3e;
            FUN_0013a710();
            iVar4 = puVar9[1];
            puVar9[1] = iVar4 + 1;
          } while (iVar4 + 1 < 3);
          iVar4 = *puVar9;
          *puVar9 = iVar4 + 0x12;
        } while (iVar4 + 0x12 != 0x36);
      }
      else {
        puVar9[4] = (uint)*(byte *)(*(int *)(&DAT_001991e8 + iVar8) + 0xb) * (uint)DAT_0019cba6;
        puVar9[6] = 0;
        do {
          puVar9[7] = 0;
          do {
            puVar9[-1] = 0x87b7e;
            FUN_0013a710();
            iVar4 = puVar9[7];
            puVar9[7] = iVar4 + 1;
          } while (iVar4 + 1 < 3);
          iVar4 = puVar9[6];
          puVar9[6] = iVar4 + 1;
        } while (iVar4 + 1 < 2);
      }
      DAT_003d9874 = 0;
    }
    else {
      DAT_002e8bfa._0_1_ = (byte)(uVar5 >> 0xd);
      bVar7 = (&DAT_0019d0c9)[iVar8];
      bVar2 = (byte)DAT_002e8bfa & 1;
      DAT_002e8bfa = uVar5 >> 0xd | uVar5 * 0x80000;
      (&DAT_0019d0c9)[iVar8] = bVar7 & 0xfb;
      (&DAT_0019d0c9)[iVar8] = bVar7 & 0xfb | bVar2 << 2;
    }
  }
  else {
    DAT_002e8bfa._0_1_ = (byte)(uVar5 >> 0xd);
    bVar7 = (&DAT_0019d0c9)[iVar8];
    bVar2 = (byte)DAT_002e8bfa & 1;
    DAT_002e8bfa = uVar5 >> 0xd | uVar5 * 0x80000;
    (&DAT_0019d0c9)[iVar8] = bVar7 & 0xfb;
    (&DAT_0019d0c9)[iVar8] = bVar7 & 0xfb | bVar2 << 2;
  }
  if ((DAT_0019d0b8 & 0x20) != 0) {
    DAT_003d9874 = 0;
    DAT_003d9885 = DAT_0019a29f;
    puVar9[-1] = 0x87ca5;
    FUN_000397c3();
    puVar9[-1] = 0x87cd9;
    FUN_0008d220();
    puVar9[-1] = 0x87d22;
    FUN_00062ee2();
    puVar9[-1] = 0x87d29;
    FUN_000890bc();
  }
  puVar9[-1] = 0x87d2e;
  FUN_0005449e();
  if ((DAT_0019d0b8 & 0x20) != 0) {
    puVar9[-1] = 0x87d5f;
    FUN_0008d348();
  }
  puVar9[-1] = 0x87d64;
  FUN_0008ebb0();
  puVar9[-1] = 0x87d69;
  FUN_00058ba8();
  return;
}

/******************************************************************************
 * Function : dk_unhandled_screen_mode_087da4 (Ghidra: FUN_00087da4)
 * Prototype: void dk_unhandled_screen_mode_087da4(void);
 * Address  : 0x87da4 (Size: 811 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp:700 ("Unhandled screen mode"); draw.cpp:768 ("Invalid lens mode")
 * Naming   : String 'Unhandled screen mode'
 * Callers  : 1 -> 0x87870
 * Callees  : 8 -> 0x2d8e2, 0x4e0dd, 0x51a46, 0x51a67, 0x780df, 0xa43b4, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16a1b3: "draw.cpp"
 *   - 0x16a1ce: "draw.cpp"
 *   - 0x16a19d: "Unhandled screen mode"
 *   - 0x16a1bc: "Invalid lens mode"
 ******************************************************************************/
void FUN_00087da4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar7 = DAT_003d9848;
  uVar6 = DAT_003d9844;
  uVar5 = DAT_003d9840;
  uVar4 = DAT_003d983c;
  uVar3 = DAT_003d9838;
  uVar2 = DAT_003d9834;
  uVar1 = DAT_003d9818;
  if (((((DAT_0019d0bd & 2) == 0) || (DAT_0019d0c7 == '\0')) || (DAT_00333193 == 0)) ||
     ((DAT_0019d0c7 == '\r' || (DAT_0019d0c7 == '\x0e')))) {
    FUN_000a43b4();
    return;
  }
  if (DAT_003d9878 < 10) {
    uVar9 = DAT_00333197;
    if (DAT_003d9878 == 1) goto LAB_00087f52;
  }
  else {
    uVar9 = DAT_0019922c;
    if ((DAT_003d9878 < 0xb) || (DAT_003d9878 == 0xd)) {
LAB_00087f52:
      FUN_000e6a10();
      DAT_003d9844 = DAT_003d982c * (uint)DAT_0019cba6;
      DAT_003d983c = 0;
      DAT_003d9838 = (uint)DAT_0019cba2;
      DAT_003d9840 = 0;
      DAT_003d9834 = DAT_003d982c;
      DAT_003d9818 = uVar9;
      DAT_003d9848 = DAT_003d9838;
      FUN_000780df();
      FUN_000a43b4();
      DAT_003d9818 = uVar1;
      DAT_003d9834 = uVar2;
      DAT_003d9838 = uVar3;
      DAT_003d983c = uVar4;
      DAT_003d9840 = uVar5;
      DAT_003d9844 = uVar6;
      DAT_003d9848 = uVar7;
      FUN_000780df();
      switch(DAT_0019d0c7) {
      case '\x01':
      case '\x02':
        FUN_0004e0dd((uint)DAT_0019cba2 / (uint)DAT_0019cba6,DAT_003d9834);
        return;
      case '\x03':
        FUN_0002d8e2(1,(uint)DAT_0019cba2 / (uint)DAT_0019cba6);
        return;
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
      case '\v':
      case '\f':
        uVar8 = (uint)DAT_0019cba4 / (uint)DAT_0019cba6;
        FUN_00051a67(uVar8,uVar8,(uint)DAT_0019cba2 / (uint)DAT_0019cba6);
        FUN_00051a46();
        return;
      default:
        FUN_000ddaf0(); /* LbErrorLog("draw.cpp", line 700, "Unhandled screen mode") */
        return;
      }
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("draw.cpp", line 768, "Invalid lens mode") */
  return;
}

/******************************************************************************
 * Function : sub_0880d0 (Ghidra: FUN_000880d0)
 * Prototype: void sub_0880d0(void);
 * Address  : 0x880d0 (Size: 481 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x8685c, 0x872a4
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_000880d0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_1c;
  
  if (DAT_003d9878 == 1) {
    puVar6 = &DAT_002f317f;
    puVar5 = DAT_003d9818;
    for (local_1c = 0; local_1c < (int)((uint)DAT_0019cba2 / (uint)DAT_0019cba6);
        local_1c = local_1c + 1) {
      uVar1 = (uint)DAT_0019cba4 / (uint)DAT_0019cba6;
      puVar7 = puVar6;
      puVar8 = puVar5;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar5 = (undefined4 *)((int)puVar5 + DAT_003d9834);
      puVar6 = (undefined4 *)((int)puVar6 + (uint)DAT_0019cba4 / (uint)DAT_0019cba6);
    }
  }
  else {
    iVar3 = 0;
    puVar5 = DAT_003d9818;
    puVar6 = DAT_0019922c;
    while( true ) {
      if ((int)(((uint)DAT_0019cba2 / (uint)DAT_0019cba6) / 2) <= iVar3) break;
      uVar1 = (uint)DAT_0019cba4 / (uint)DAT_0019cba6;
      puVar7 = puVar6;
      puVar8 = puVar5;
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      uVar4 = (uint)DAT_0019cba4;
      uVar1 = (uint)DAT_0019cba6;
      puVar5 = (undefined4 *)((int)puVar5 + DAT_003d9834);
      puVar7 = puVar6;
      puVar8 = puVar5;
      for (uVar2 = uVar4 / uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar1 = uVar4 / uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar5 = (undefined4 *)((int)puVar5 + DAT_003d9834);
      iVar3 = iVar3 + 1;
      puVar6 = (undefined4 *)((int)puVar6 + ((uint)DAT_0019cba4 / (uint)DAT_0019cba6) * 2);
    }
  }
  FUN_0013a710();
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_0882b4 (Ghidra: FUN_000882b4)
 * Prototype: void sub_0882b4(void);
 * Address  : 0x882b4 (Size: 994 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x8685c, 0x872a4
 * Callees  : 3 -> 0x22b3a, 0x88698, 0x88c6c
 ******************************************************************************/
void FUN_000882b4(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  byte *local_44;
  uint local_3c;
  int local_38;
  byte local_24;
  byte local_20;
  
  bVar1 = (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef];
  uVar6 = (uint)DAT_0019cba6;
  local_3c = 0x101;
  local_44 = (byte *)(DAT_003d9818 +
                     (int)(0x96 / (ulonglong)(longlong)(int)uVar6) +
                     DAT_003d9834 * (int)(0x38 / (ulonglong)(longlong)(int)uVar6));
  local_24 = 1;
  local_38 = 0;
  local_60 = 0;
  for (iVar7 = (int)(4 / (ulonglong)(longlong)(int)uVar6) * 0x55; iVar7 != 0; iVar7 = iVar7 + -1) {
    if ((local_60 != 0) && (local_60 % (int)(4 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6) == 0)
       ) {
      local_38 = local_38 + 0x55;
      local_3c = local_3c + 0x300;
      local_24 = local_24 + 3;
    }
    local_50 = local_44;
    local_54 = local_3c;
    local_48 = local_3c * 5;
    local_4c = local_38 * 6;
    local_5c = 0x55;
    local_20 = 1;
    do {
      cVar2 = (&DAT_002d33c5)[local_4c];
      bVar3 = (&DAT_002d33ca)
              [((&DAT_0019033b)[local_54 & 0xff] + (&DAT_0019033b)[local_54 >> 8] * 0x55) * 6];
      bVar4 = *(byte *)((int)&DAT_00279203 + local_48);
      local_58 = (int)(4 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
      if (local_58 != 0) {
        do {
          uVar6 = (uint)(bVar3 & 7);
          if ((((bVar4 & 4) == 0) && ((bVar4 & 0x80) == 0)) || ((DAT_002e8bee & 4) == 0)) {
            if ((bVar4 & 1) == 0) {
              if ((*(uint *)((int)&DAT_00279203 + local_48 + 1) >> 0x1c &
                  (uint)(byte)('\x01' << (bVar1 & 0x1f))) != 0) {
                if ((bVar4 & 2) == 0) {
                  if (cVar2 == '\0') {
                    *local_50 = 0;
                  }
                  else if ((bVar4 & 0x20) == 0) {
                    if ((bVar4 & 0x40) == 0) {
                      if ((bVar4 & 0x10) == 0) {
                        if (cVar2 == '\f') {
                          *local_50 = 0x92;
                        }
                        else if (cVar2 == '\r') {
                          *local_50 = 0x55;
                        }
                        else if (uVar6 == DAT_002eb543) {
                          *local_50 = 4;
                        }
                        else {
                          *local_50 = (&DAT_0019176e)[uVar6];
                        }
                      }
                    }
                    else {
                      iVar5 = FUN_00022b3a();
                      if (((DAT_002e8bee & 1) == 0) ||
                         ((uint)*(byte *)(iVar5 + 0x1a) != (int)DAT_0017d17f)) {
                        if (*(char *)(iVar5 + 0x18) == '\0') {
                          *local_50 = 0x3c;
                        }
                        else {
                          *local_50 = 0x4f;
                        }
                      }
                      else {
                        *local_50 = 0x1f;
                      }
                    }
                  }
                  else {
                    *local_50 = (&DAT_00366c10)[*local_50];
                  }
                }
                else if (((DAT_002e8bee & 1) == 0) ||
                        ((uint)*(ushort *)
                                (&DAT_002ddd25 +
                                (uint)(byte)(&DAT_002d33c8)
                                            [((&DAT_0019033b)[local_24] * 0x55 +
                                             (&DAT_0019033b)[local_20]) * 6] * 0x45) !=
                         DAT_0017d17b >> 0x18)) {
                  if (uVar6 == DAT_002eb543) {
                    *local_50 = (&DAT_00191774)[DAT_002e8bee & 3];
                  }
                  else {
                    *local_50 = (&DAT_00191774)[uVar6];
                  }
                }
                else {
                  *local_50 = 0x1f;
                }
              }
            }
            else {
              *local_50 = (&DAT_0036e810)[*local_50];
            }
          }
          else {
            *local_50 = (&DAT_00367610)[*local_50];
          }
          local_58 = local_58 + -1;
          local_50 = local_50 + 1;
        } while (local_58 != 0);
      }
      local_5c = local_5c + -1;
      local_4c = local_4c + 6;
      local_48 = local_48 + 0xf;
      local_54 = local_54 + 3;
      local_20 = local_20 + 3;
    } while (local_5c != 0);
    local_44 = local_44 + DAT_003d9834;
    local_60 = local_60 + 1;
  }
  DAT_003d9874 = 0;
  FUN_00088698();
  FUN_00088c6c();
  return;
}

/******************************************************************************
 * Function : sub_088698 (Ghidra: FUN_00088698)
 * Prototype: void sub_088698(void);
 * Address  : 0x88698 (Size: 1489 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x882b4
 * Callees  : 4 -> 0xc6574, 0xc688c, 0xf5390, 0xf5460
 ******************************************************************************/
void FUN_00088698(void)

{
  byte bVar1;
  byte bVar2;
  int extraout_ECX;
  byte *pbVar3;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *local_2c;
  
  bVar1 = '\x01' << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f);
  local_2c = (&DAT_001ae9fc)[DAT_002e6eb6];
  if (local_2c != DAT_001ae9fc) {
    do {
      if (((*local_2c & 0x10) == 0) && ((local_2c[1] & 2) == 0)) {
        if ((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(local_2c[0x10],local_2c[0xe]) * 5 + 1) >>
             0x1c & (uint)bVar1) != 0) {
          FUN_000f5390();
        }
        if (local_2c[0x1a] == 8) {
          bVar2 = local_2c[7];
          if (bVar2 == 0xe) {
            bVar2 = local_2c[8];
          }
          if ((bVar2 == 0x1c) || (bVar2 == 0x4d)) {
            iVar6 = 0;
            do {
              if (*(short *)((&DAT_001b0a00)[*(ushort *)(local_2c + 100)] + iVar6 + 0x90) == 0)
              break;
              FUN_000f5390();
              iVar6 = extraout_ECX;
            } while (extraout_ECX < 10);
          }
        }
      }
      local_2c = (&DAT_001ae9fc)[*(ushort *)(local_2c + 0x67)];
    } while (local_2c != DAT_001ae9fc);
  }
  iVar7 = 0;
  iVar6 = 0;
  do {
    if (*(int *)((int)&DAT_002e0e0d + iVar6) != 0) {
      iVar4 = (&DAT_0019033b)[*(int *)(&DAT_002eb001 + (uint)(byte)(&DAT_002e0e0c)[iVar6] * 4)] * 4
              * (DAT_002e8bee + iVar7 & 7);
      iVar5 = iVar4 >> 0x1f;
      DAT_003d9874 = 0x10;
      FUN_000f5460(((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3) /
                   (int)(uint)DAT_0019cba6);
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x1508;
  } while (iVar7 < 5);
  if (((DAT_002e8bee & 3) == 1) && (pbVar3 = (&DAT_001ae9fc)[DAT_002e6ec6], pbVar3 != DAT_001ae9fc))
  {
    do {
      if (((*pbVar3 & 0x10) == 0) &&
         (((pbVar3[1] & 2) == 0 &&
          ((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(pbVar3[0x10],pbVar3[0xe]) * 5 + 1) >> 0x1c
           & (uint)bVar1) != 0)))) {
        iVar6 = FUN_000c688c();
        if (iVar6 == 0) {
          iVar6 = FUN_000c6574();
          pbVar3 = extraout_ECX_01;
          if (iVar6 != 0) {
            FUN_000f5390();
            pbVar3 = extraout_ECX_02;
          }
        }
        else {
          FUN_000f5390();
          pbVar3 = extraout_ECX_00;
        }
      }
      pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar3 + 0x67)];
    } while (pbVar3 != DAT_001ae9fc);
  }
  pbVar3 = (&DAT_001ae9fc)[DAT_002e6eee];
  if (pbVar3 != DAT_001ae9fc) {
    do {
      if ((((*pbVar3 & 0x10) == 0) && ((pbVar3[1] & 2) == 0)) &&
         (*(int *)(pbVar3 + 3) >> 0x18 ==
          (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) {
        FUN_000f5390();
        FUN_000f5390();
        FUN_000f5390();
        FUN_000f5390();
        FUN_000f5390();
      }
      pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar3 + 0x67)];
    } while (pbVar3 != DAT_001ae9fc);
  }
  return;
}

/******************************************************************************
 * Function : sub_088c6c (Ghidra: FUN_00088c6c)
 * Prototype: uint sub_088c6c(void);
 * Address  : 0x88c6c (Size: 425 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x882b4
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
uint FUN_00088c6c(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte *extraout_ECX;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  bVar1 = (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef];
  uVar4 = DAT_002e8bee >> 1;
  uVar5 = uVar4 / 0x11;
  bVar8 = DAT_002f10d2 < DAT_002f10d6;
  pbVar6 = DAT_002f10d2;
  while (bVar8) {
    if ((*pbVar6 & 1) != 0) {
      iVar7 = (int)(char)((ulonglong)uVar4 % 0x11) - (uint)*(ushort *)(pbVar6 + 10);
      bVar2 = (byte)(iVar7 >> 0x1f);
      cVar3 = ((byte)iVar7 ^ bVar2) - bVar2;
      if ((cVar3 < '\x02') || ('\x03' < cVar3)) {
        DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfb;
      }
      else {
        DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 4;
      }
      uVar5 = (uint)cVar3;
      if ((int)uVar5 < 4) {
        uVar5 = (uint)(byte)('\x01' << (bVar1 & 0x1f));
        if (((*(uint *)((int)&DAT_00279203 + ((uint)pbVar6[9] * 0x100 + (uint)pbVar6[8]) * 5 + 1) >>
              0x1c & uVar5) != 0) &&
           (uVar5 = (uint)*(ushort *)(&DAT_0018ebab + (uint)*(ushort *)(pbVar6 + 10) * 0x17),
           uVar5 != 0)) {
          uVar5 = FUN_0013a710();
          pbVar6 = extraout_ECX;
        }
      }
    }
    pbVar6 = pbVar6 + 0x45;
    bVar8 = pbVar6 < DAT_002f10d6;
  }
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfb;
  return uVar5;
}

/******************************************************************************
 * Function : sub_088e2c (Ghidra: FUN_00088e2c)
 * Prototype: void sub_088e2c(void);
 * Address  : 0x88e2c (Size: 595 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x890bc
 * Callees  : 3 -> 0x629cc, 0xdc2c8, 0xe66ec
 ******************************************************************************/
void FUN_00088e2c(void)

{
  ushort uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = (uint)(0x74 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6) / 2;
  iVar8 = (DAT_002f10ce >> 0x18) * 0x4ef;
  if ((&DAT_002e0589)[(uint)(byte)(&DAT_0019d0f3)[iVar8] * 0xa84] != 0) {
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 4;
    iVar6 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)(byte)(&DAT_0019d0f3)[iVar8] * 0xa84]];
    iVar3 = (int)(((uint)*(byte *)(iVar6 + 0xe) -
                  (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar8) + 1)) * 0x100) / in_EAX;
    iVar4 = (int)(((uint)*(byte *)(iVar6 + 0x10) -
                  (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar8) + 3)) * 0x100) / in_EAX;
    iVar8 = *(int *)(*(int *)((int)&DAT_0019d100 + iVar8) + 7);
    FUN_000dc2c8(iVar6,uVar2 + (iVar4 * (&DAT_001927e0)[iVar8] +
                                iVar3 * (int)(&PTR_LAB_00192fe0)[iVar8] >> 0x10),
                 (iVar4 * (int)(&PTR_LAB_00192fe0)[iVar8] + (&DAT_001927e0)[iVar8] * -iVar3 >> 0x10)
                 + uVar2);
    uVar1 = FUN_000e66ec();
    uVar5 = -((uint)uVar1 % 0x800) & 0x7ff;
    iVar6 = (&DAT_001927e0)[uVar5] * -0x400 >> 0x10;
    iVar7 = (DAT_002e8bee & 3) + 1;
    iVar8 = iVar6 * iVar7;
    iVar3 = (int)(&PTR_LAB_00192fe0)[uVar5] * -0x400 >> 0x10;
    iVar4 = iVar8 >> 0x1f;
    iVar7 = iVar3 * iVar7;
    iVar9 = uVar2 * 0x100 + ((int)((iVar8 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + iVar6 / 2;
    iVar4 = iVar7 >> 0x1f;
    iVar8 = extraout_ECX + -4;
    iVar4 = uVar2 * 0x100 + ((int)((iVar7 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) + iVar3 / 2;
    if (0 < iVar8) {
      while (0 < iVar8) {
        iVar8 = iVar9 * (uint)DAT_0019cba6;
        if ((((iVar8 < 0) || (0x73ff < iVar8)) || (iVar8 = (uint)DAT_0019cba6 * iVar4, iVar8 < 0))
           || (0x73ff < iVar8)) break;
        FUN_000629cc();
        iVar9 = iVar9 + iVar6;
        iVar4 = iVar4 + iVar3;
        iVar8 = extraout_ECX_00;
      }
    }
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfb;
  }
  return;
}

/******************************************************************************
 * Function : sub_089080 (Ghidra: FUN_00089080)
 * Prototype: void sub_089080(int *param_1);
 * Address  : 0x89080 (Size: 59 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00089080(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  int in_EAX;
  int *in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  puVar1 = (&PTR_LAB_00192fe0)[in_EAX];
  iVar2 = (&DAT_001927e0)[in_EAX];
  *in_ECX = unaff_EBX * iVar2 + in_EDX * (int)puVar1 >> 0x10;
  *param_1 = iVar2 * -in_EDX + unaff_EBX * (int)puVar1 >> 0x10;
  return;
}

/******************************************************************************
 * Function : sub_0890bc (Ghidra: FUN_000890bc)
 * Prototype: void sub_0890bc(void);
 * Address  : 0x890bc (Size: 2601 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 5 -> 0x629cc, 0x88e2c, 0x89ae8, 0xc6574, 0xc688c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000890bc(void)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  int iVar9;
  int extraout_ECX_01;
  int extraout_ECX_02;
  byte *pbVar10;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int aiStack_4c [4];
  int local_3c;
  undefined1 local_38 [4];
  byte local_34 [12];
  int local_28;
  undefined1 local_24;
  undefined1 local_20;
  char local_1c;
  
  piVar12 = aiStack_4c + 3;
  piVar13 = aiStack_4c + 3;
  local_20 = 0x1f;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ec6];
  local_1c = '\x01' << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f);
  local_24 = 1;
  if (pbVar10 != DAT_001ae9fc) {
    do {
      piVar13 = piVar12;
      if ((((*pbVar10 & 0x10) == 0) && ((pbVar10[1] & 2) == 0)) && (pbVar10[0x1a] == 0x18)) {
        iVar15 = (DAT_002f10ce >> 0x18) * 0x4ef;
        iVar6 = (int)(((uint)pbVar10[0xe] -
                      (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar15) + 1)) * 0x100) /
                piVar12[6];
        iVar15 = *(int *)((int)&DAT_0019d100 + iVar15);
        iVar7 = (int)(((uint)pbVar10[0x10] - (uint)*(byte *)(iVar15 + 3)) * 0x100) / piVar12[6];
        iVar15 = *(int *)(iVar15 + 7);
        puVar4 = (&PTR_LAB_00192fe0)[iVar15];
        iVar15 = (&DAT_001927e0)[iVar15];
        piVar12[3] = iVar7 * iVar15;
        piVar12[1] = iVar7 * (int)puVar4 + iVar15 * -iVar6 >> 0x10;
        *piVar12 = iVar6 * (int)puVar4 + piVar12[3] >> 0x10;
        piVar12[-1] = piVar12[6];
        piVar13 = piVar12 + -2;
        piVar12[-2] = piVar12[1];
        piVar12[-3] = 0x891d9;
        FUN_00089ae8();
      }
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      piVar12 = piVar13;
    } while (pbVar10 != DAT_001ae9fc);
  }
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6eee];
  if (pbVar10 != DAT_001ae9fc) {
    do {
      iVar15 = (DAT_002f10ce >> 0x18) * 0x4ef;
      bVar5 = (&DAT_0019d0f3)[iVar15];
      if (*(int *)(pbVar10 + 3) >> 0x18 == (uint)bVar5) {
        iVar6 = (int)(((uint)pbVar10[0xe] -
                      (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar15) + 1)) * 0x100) /
                piVar13[6];
        iVar7 = (int)(((uint)pbVar10[0x10] -
                      (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar15) + 3)) * 0x100) /
                piVar13[6];
        iVar15 = *(int *)(*(int *)((int)&DAT_0019d100 + iVar15) + 7);
        puVar4 = (&PTR_LAB_00192fe0)[iVar15];
        iVar15 = (&DAT_001927e0)[iVar15];
        piVar13[4] = iVar7 * iVar15;
        piVar13[1] = iVar7 * (int)puVar4 + iVar15 * -iVar6 >> 0x10;
        uVar11 = (uint)DAT_0019cba6;
        uVar8 = (uint)(0x74 / (ulonglong)(longlong)(int)uVar11) / 2;
        piVar13[3] = iVar6 * (int)puVar4;
        *piVar13 = piVar13[4] + piVar13[3] >> 0x10;
        iVar15 = uVar8 + (piVar13[4] + piVar13[3] >> 0x10);
        iVar7 = piVar13[1] + uVar8;
        iVar6 = iVar15 * uVar11;
        *piVar13 = iVar15;
        piVar13[1] = iVar7;
        if ((((-1 < iVar6) && (iVar6 < 0x74)) &&
            ((iVar7 = uVar11 * iVar7, -1 < iVar7 && (iVar7 < 0x74)))) &&
           ((pbVar10[0x18] != 0 || (*(int *)(pbVar10 + 3) >> 0x18 == (uint)bVar5)))) {
          if (((uint)pbVar10[0x1a] == ram0x0017d17d >> 0x18) && ((DAT_002e8bee & 1) != 0)) {
            piVar13[-1] = 0x8936c;
            FUN_000629cc();
            piVar13[-1] = 0x8937e;
            FUN_000629cc();
            piVar13[-1] = 0x89390;
            FUN_000629cc();
            piVar13[-1] = 0x893a2;
            FUN_000629cc();
            piVar13[-1] = 0x893b4;
            FUN_000629cc();
            pbVar10 = extraout_ECX;
          }
          else {
            piVar13[-1] = 0x893ca;
            FUN_000629cc();
            piVar13[-1] = 0x893dc;
            FUN_000629cc();
            piVar13[-1] = 0x893ee;
            FUN_000629cc();
            piVar13[-1] = 0x89400;
            FUN_000629cc();
            piVar13[-1] = 0x89412;
            FUN_000629cc();
            pbVar10 = extraout_ECX_00;
          }
        }
      }
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
    } while (pbVar10 != DAT_001ae9fc);
  }
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6eb6];
  if (pbVar10 != DAT_001ae9fc) {
    do {
      if (((*pbVar10 & 0x10) == 0) && ((pbVar10[1] & 2) == 0)) {
        bVar5 = pbVar10[0x10];
        bVar1 = pbVar10[0xe];
        if ((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(bVar5,bVar1) * 5 + 1) >> 0x1c &
            (uint)*(byte *)(piVar13 + 9)) != 0) {
          if ((DAT_002e8bee & 4) == 0) {
            uVar2 = (&DAT_00191774)[*(int *)(pbVar10 + 3) >> 0x18];
            *(undefined1 *)(piVar13 + 8) = uVar2;
            *(undefined1 *)(piVar13 + 7) = uVar2;
          }
          iVar9 = (DAT_002f10ce >> 0x18) * 0x4ef;
          iVar6 = (int)(((uint)bVar1 - (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar9) + 1)) *
                       0x100) / piVar13[6];
          iVar7 = (int)(((uint)bVar5 - (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar9) + 3)) *
                       0x100) / piVar13[6];
          iVar15 = *(int *)(*(int *)((int)&DAT_0019d100 + iVar9) + 7);
          puVar4 = (&PTR_LAB_00192fe0)[iVar15];
          iVar15 = (&DAT_001927e0)[iVar15];
          piVar13[4] = iVar7 * iVar15;
          piVar13[1] = iVar7 * (int)puVar4 + iVar15 * -iVar6 >> 0x10;
          uVar11 = (uint)DAT_0019cba6;
          uVar8 = (uint)(0x74 / (ulonglong)(longlong)(int)uVar11) / 2;
          piVar13[3] = iVar6 * (int)puVar4;
          *piVar13 = piVar13[4] + piVar13[3] >> 0x10;
          iVar7 = (piVar13[4] + piVar13[3] >> 0x10) + uVar8;
          iVar6 = piVar13[1] + uVar8;
          iVar15 = iVar7 * uVar11;
          *piVar13 = iVar7;
          piVar13[1] = iVar6;
          if ((((-1 < iVar15) && (iVar15 < 0x74)) && (iVar6 = uVar11 * iVar6, -1 < iVar6)) &&
             (iVar6 < 0x74)) {
            if (((*(int *)(pbVar10 + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9]) &&
                ((uint)pbVar10[0x1a] == (int)DAT_0017d181)) && ((DAT_002e8bee & 1) != 0)) {
              piVar13[-1] = 0x895c6;
              FUN_000629cc();
              piVar13[-1] = 0x895d9;
              FUN_000629cc();
              piVar13[-1] = 0x895e8;
              FUN_000629cc();
              piVar13[-1] = 0x895f7;
              FUN_000629cc();
            }
            piVar13[-1] = 0x8964d;
            FUN_000629cc();
          }
        }
        if (pbVar10[0x1a] == 8) {
          bVar5 = pbVar10[7];
          if (bVar5 == 0xe) {
            bVar5 = pbVar10[8];
          }
          if ((bVar5 == 0x1c) || (bVar5 == 0x4d)) {
            iVar15 = 0;
            do {
              uVar3 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar10 + 100)] + iVar15 + 0x90);
              if (uVar3 == 0) break;
              piVar13[5] = (uint)uVar3 % 0x100;
              if ((DAT_002e8bee & 4) == 0) {
                uVar2 = (&DAT_00191774)[*(int *)(pbVar10 + 3) >> 0x18];
                *(undefined1 *)(piVar13 + 8) = uVar2;
                *(undefined1 *)(piVar13 + 7) = uVar2;
              }
              iVar14 = (DAT_002f10ce >> 0x18) * 0x4ef;
              iVar7 = (int)((piVar13[5] - (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar14) + 1)
                            ) * 0x100) / piVar13[6];
              piVar13[3] = *(int *)((int)&DAT_0019d100 + iVar14);
              iVar9 = (int)((uVar3 / 0x100 - (uint)*(byte *)(piVar13[3] + 3)) * 0x100) / piVar13[6];
              iVar6 = *(int *)(piVar13[3] + 7);
              piVar13[2] = (int)(&PTR_LAB_00192fe0)[iVar6];
              iVar6 = (&DAT_001927e0)[iVar6];
              piVar13[3] = iVar9 * iVar6;
              piVar13[1] = iVar9 * piVar13[2] + iVar6 * -iVar7 >> 0x10;
              uVar11 = (uint)DAT_0019cba6;
              uVar8 = (uint)(0x74 / (ulonglong)(longlong)(int)uVar11) / 2;
              piVar13[4] = piVar13[2] * iVar7;
              *piVar13 = piVar13[3] + piVar13[4] >> 0x10;
              iVar9 = (piVar13[3] + piVar13[4] >> 0x10) + uVar8;
              iVar7 = piVar13[1] + uVar8;
              iVar6 = iVar9 * uVar11;
              *piVar13 = iVar9;
              piVar13[1] = iVar7;
              if ((((-1 < iVar6) && (iVar6 < 0x74)) && (iVar7 = uVar11 * iVar7, -1 < iVar7)) &&
                 (iVar7 < 0x74)) {
                if (*(int *)(pbVar10 + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar14]) {
                  piVar13[-1] = 0x897f1;
                  FUN_000629cc();
                  iVar15 = extraout_ECX_01;
                }
                else {
                  piVar13[-1] = 0x89804;
                  FUN_000629cc();
                  iVar15 = extraout_ECX_02;
                }
              }
              iVar15 = iVar15 + 2;
            } while (iVar15 < 10);
          }
        }
      }
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
    } while (pbVar10 != DAT_001ae9fc);
  }
  if (((DAT_002e8bee & 3) == 1) &&
     (pbVar10 = (&DAT_001ae9fc)[DAT_002e6ec6], pbVar10 != DAT_001ae9fc)) {
    do {
      if (((*pbVar10 & 0x10) == 0) && ((pbVar10[1] & 2) == 0)) {
        if ((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(pbVar10[0x10],pbVar10[0xe]) * 5 + 1) >>
             0x1c & (uint)*(byte *)(piVar13 + 9)) != 0) {
          iVar15 = (DAT_002f10ce >> 0x18) * 0x4ef;
          iVar6 = (int)(((uint)pbVar10[0xe] -
                        (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar15) + 1)) * 0x100) /
                  piVar13[6];
          iVar15 = *(int *)((int)&DAT_0019d100 + iVar15);
          iVar7 = (int)(((uint)pbVar10[0x10] - (uint)*(byte *)(iVar15 + 3)) * 0x100) / piVar13[6];
          iVar15 = *(int *)(iVar15 + 7);
          puVar4 = (&PTR_LAB_00192fe0)[iVar15];
          iVar15 = (&DAT_001927e0)[iVar15];
          piVar13[1] = iVar7 * (int)puVar4 + iVar15 * -iVar6 >> 0x10;
          uVar11 = (uint)DAT_0019cba6;
          uVar8 = (uint)(0x74 / (ulonglong)(longlong)(int)uVar11) / 2;
          iVar15 = iVar7 * iVar15 + iVar6 * (int)puVar4 >> 0x10;
          *piVar13 = iVar15;
          iVar15 = iVar15 + uVar8;
          iVar7 = piVar13[1] + uVar8;
          iVar6 = iVar15 * uVar11;
          *piVar13 = iVar15;
          piVar13[1] = iVar7;
          if (((-1 < iVar6) && (iVar6 < 0x74)) &&
             ((iVar7 = uVar11 * iVar7, -1 < iVar7 && (iVar7 < 0x74)))) {
            piVar13[-1] = 0x8996e;
            iVar15 = FUN_000c688c();
            if (iVar15 == 0) {
              piVar13[-1] = 0x89992;
              iVar15 = FUN_000c6574();
              pbVar10 = extraout_ECX_04;
              if (iVar15 != 0) {
                piVar13[-1] = 0x899ae;
                FUN_000629cc();
                pbVar10 = extraout_ECX_05;
              }
            }
            else {
              piVar13[-1] = 0x89986;
              FUN_000629cc();
              pbVar10 = extraout_ECX_03;
            }
          }
        }
      }
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
    } while (pbVar10 != DAT_001ae9fc);
  }
  piVar13[-1] = 0x899bc;
  FUN_00088e2c();
  if (((DAT_002e8bee & 1) != 0) &&
     (*(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6) == '\x01')) {
    piVar13[-1] = 0x89a1b;
    FUN_000629cc();
    piVar13[-1] = 0x89a4d;
    FUN_000629cc();
    piVar13[-1] = 0x89a7f;
    FUN_000629cc();
    piVar13[-1] = 0x89aad;
    FUN_000629cc();
    piVar13[-1] = 0x89adb;
    FUN_000629cc();
  }
  return;
}

/******************************************************************************
 * Function : sub_089ae8 (Ghidra: FUN_00089ae8)
 * Prototype: void sub_089ae8(int param_1,int param_2);
 * Address  : 0x89ae8 (Size: 1497 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x890bc
 * Callees  : 1 -> 0x629cc
 ******************************************************************************/
void FUN_00089ae8(int param_1,int param_2)

{
  byte in_AL;
  uint uVar1;
  int iVar2;
  int in_ECX;
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
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int iVar3;
  int iVar4;
  int local_2c;
  int local_20;
  
  uVar1 = (uint)(0x74 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6) / 2;
  iVar2 = in_ECX + uVar1;
  param_1 = param_1 + uVar1;
  iVar3 = (uint)((char)DAT_002e8bee + in_AL & 7) *
          *(int *)(&DAT_002eb001 + (uint)(byte)(&DAT_002e0e0c)[(uint)in_AL * 0x1508] * 4);
  iVar4 = iVar3 >> 0x1f;
  param_2 = (((int)((iVar3 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3) << 8) / param_2;
  if (1 < param_2) {
    local_20 = param_2 * -2 + 3;
    iVar3 = 0;
    local_2c = 0;
    while( true ) {
      if (param_2 <= iVar3) break;
      iVar4 = (iVar2 - iVar3) * (uint)DAT_0019cba6;
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (param_1 - param_2) * (uint)DAT_0019cba6, -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX;
      }
      iVar4 = (iVar3 + iVar2) * (uint)DAT_0019cba6;
      if ((((-1 < iVar4) && (iVar4 < 0x74)) &&
          (iVar4 = (uint)DAT_0019cba6 * (param_1 - param_2), -1 < iVar4)) && (iVar4 < 0x74)) {
        FUN_000629cc();
        iVar3 = extraout_ECX_00;
      }
      iVar4 = (iVar2 - iVar3) * (uint)DAT_0019cba6;
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (uint)DAT_0019cba6 * (param_1 + param_2), -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX_01;
      }
      iVar4 = (iVar3 + iVar2) * (uint)DAT_0019cba6;
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (uint)DAT_0019cba6 * (param_1 + param_2), -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX_02;
      }
      iVar4 = (iVar2 - param_2) * (uint)DAT_0019cba6;
      if ((((-1 < iVar4) && (iVar4 < 0x74)) &&
          (iVar4 = (uint)DAT_0019cba6 * (param_1 - iVar3), -1 < iVar4)) && (iVar4 < 0x74)) {
        FUN_000629cc();
        iVar3 = extraout_ECX_03;
      }
      iVar4 = (param_2 + iVar2) * (uint)DAT_0019cba6;
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (uint)DAT_0019cba6 * (param_1 - iVar3), -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX_04;
      }
      iVar4 = (iVar2 - param_2) * (uint)DAT_0019cba6;
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (uint)DAT_0019cba6 * (param_1 + iVar3), -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX_05;
      }
      iVar4 = (param_2 + iVar2) * (uint)DAT_0019cba6;
      if ((((-1 < iVar4) && (iVar4 < 0x74)) &&
          (iVar4 = (uint)DAT_0019cba6 * (param_1 + iVar3), -1 < iVar4)) && (iVar4 < 0x74)) {
        FUN_000629cc();
        iVar3 = extraout_ECX_06;
      }
      if (local_20 < 0) {
        local_20 = local_20 + local_2c + 6;
      }
      else {
        local_20 = (iVar3 - param_2) * 4 + local_20 + 10;
        param_2 = param_2 + -1;
      }
      iVar3 = iVar3 + 1;
      local_2c = local_2c + 4;
    }
    if (iVar3 == param_2) {
      iVar4 = (iVar2 - iVar3) * (uint)DAT_0019cba6;
      if ((((-1 < iVar4) && (iVar4 < 0x74)) &&
          (iVar4 = (param_1 - param_2) * (uint)DAT_0019cba6, -1 < iVar4)) && (iVar4 < 0x74)) {
        FUN_000629cc();
        iVar3 = extraout_ECX_07;
      }
      iVar4 = (uint)DAT_0019cba6 * (iVar3 + iVar2);
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (uint)DAT_0019cba6 * (param_1 - param_2), -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX_08;
      }
      iVar4 = (uint)DAT_0019cba6 * (iVar2 - iVar3);
      if (((-1 < iVar4) && (iVar4 < 0x74)) &&
         ((iVar4 = (uint)DAT_0019cba6 * (param_1 + param_2), -1 < iVar4 && (iVar4 < 0x74)))) {
        FUN_000629cc();
        iVar3 = extraout_ECX_09;
      }
      iVar4 = (uint)DAT_0019cba6 * (iVar3 + iVar2);
      if ((((-1 < iVar4) && (iVar4 < 0x74)) &&
          (iVar4 = (uint)DAT_0019cba6 * (param_1 + param_2), -1 < iVar4)) && (iVar4 < 0x74)) {
        FUN_000629cc();
        iVar3 = extraout_ECX_10;
      }
      iVar4 = (iVar2 - param_2) * (uint)DAT_0019cba6;
      if ((-1 < iVar4) && (iVar4 < 0x74)) {
        iVar4 = (uint)DAT_0019cba6 * (param_1 - iVar3);
        if ((-1 < iVar4) && (iVar4 < 0x74)) {
          FUN_000629cc();
          iVar3 = extraout_ECX_11;
        }
      }
      iVar4 = (param_2 + iVar2) * (uint)DAT_0019cba6;
      if ((-1 < iVar4) && (iVar4 < 0x74)) {
        iVar4 = (uint)DAT_0019cba6 * (param_1 - iVar3);
        if ((-1 < iVar4) && (iVar4 < 0x74)) {
          FUN_000629cc();
          iVar3 = extraout_ECX_12;
        }
      }
      iVar4 = (iVar2 - param_2) * (uint)DAT_0019cba6;
      if ((((-1 < iVar4) && (iVar4 < 0x74)) &&
          (iVar4 = (uint)DAT_0019cba6 * (param_1 + iVar3), -1 < iVar4)) && (iVar4 < 0x74)) {
        FUN_000629cc();
        iVar3 = extraout_ECX_13;
      }
      iVar2 = (param_2 + iVar2) * (uint)DAT_0019cba6;
      if (((-1 < iVar2) && (iVar2 < 0x74)) &&
         ((iVar2 = (param_1 + iVar3) * (uint)DAT_0019cba6, -1 < iVar2 && (iVar2 < 0x74)))) {
        FUN_000629cc();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_08a194 (Ghidra: FUN_0008a194)
 * Prototype: void sub_08a194(void);
 * Address  : 0x8a194 (Size: 2082 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8685c
 * Callees  : 6 -> 0x498d9, 0x57f6b, 0x865b8, 0x866f8, 0x8eeec, 0xebc10
 ******************************************************************************/
void FUN_0008a194(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (DAT_002f10ce >> 0x18) * 0x4ef;
  bVar1 = (&DAT_0019d51a)[iVar3];
  if (bVar1 < 2) {
    if (bVar1 != 1) {
      return;
    }
    if ((&DAT_0019d578)[iVar3] == '\x0f') {
      FUN_000ebc10();
      return;
    }
    if (((DAT_0019d0b8 & 0x20) == 0) || (cVar2 = FUN_000498d9(), cVar2 == '\0')) {
      if (DAT_0034d1a6 != 0) {
        if ((&DAT_00191780)[(byte)(&DAT_0019d51b)[(DAT_002f10ce >> 0x18) * 0x4ef]] == '\0') {
          return;
        }
        if ((&DAT_0018e98c)
            [(uint)(byte)(&DAT_00191780)[(byte)(&DAT_0019d51b)[(DAT_002f10ce >> 0x18) * 0x4ef]] *
             0x1b] == '\0') {
          return;
        }
        FUN_0008eeec();
        return;
      }
      cVar2 = FUN_00057f6b();
      if (cVar2 != '\0') goto switchD_0008a965_caseD_3;
      iVar3 = DAT_002f10ce >> 0x18;
      iVar4 = iVar3 * 0x4ef;
      switch((&DAT_0019d51b)[iVar4]) {
      case 1:
        if ((&DAT_0019d51d)[iVar3 * 0x4ef] == '\0') {
          bVar1 = (&DAT_0019d51c)[iVar3 * 0x4ef];
        }
        else {
          bVar1 = (&DAT_0019d51d)[iVar3 * 0x4ef];
        }
        if (bVar1 < 2) {
          if (bVar1 == 1) goto LAB_0008a549;
        }
        else {
          if (bVar1 < 3) {
            FUN_000ebc10();
            return;
          }
          if (bVar1 == 3) {
            iVar4 = iVar3 * 0x4ef;
            if ((((*(short *)(&DAT_0019d0fd + iVar4) != 0) && ((&DAT_0019d0cc)[iVar4] != '\0')) &&
                (*(short *)(&DAT_0019d0fd + iVar4) != *(short *)(&DAT_002e05bc + iVar3 * 0x1508)))
               && (iVar3 = FUN_000865b8(), iVar3 != 0)) {
              FUN_000ebc10();
              (&DAT_0019d0ce)[(DAT_002f10ce >> 0x18) * 0x4ef] =
                   (&DAT_0019d0ce)[(DAT_002f10ce >> 0x18) * 0x4ef] | 1;
              return;
            }
            iVar3 = (DAT_002f10ce >> 0x18) * 0x4ef;
            if (((*(short *)(&DAT_0019d0fd + iVar3) != 0) && ((&DAT_0019d0cd)[iVar3] != '\0')) &&
               ((*(short *)(&DAT_0019d0fd + iVar3) !=
                 *(short *)(&DAT_002e05bc + (DAT_002f10ce >> 0x18) * 0x1508) &&
                (iVar3 = FUN_000866f8(), iVar3 != 0)))) {
              FUN_000ebc10();
              (&DAT_0019d0ce)[(DAT_002f10ce >> 0x18) * 0x4ef] =
                   (&DAT_0019d0ce)[(DAT_002f10ce >> 0x18) * 0x4ef] | 1;
              return;
            }
            if (((&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] & 2) == 0) goto LAB_0008a229;
LAB_0008a549:
            FUN_000ebc10();
            return;
          }
        }
        if (DAT_002e8bee < *(uint *)(&DAT_0019d0d8 + iVar3 * 0x4ef)) goto switchD_0008a965_caseD_5;
      default:
switchD_0008a965_caseD_3:
        FUN_000ebc10();
        return;
      case 2:
        switch((&DAT_0019d56b)[iVar4]) {
        case 2:
          FUN_000ebc10();
          return;
        case 3:
          FUN_000ebc10();
          return;
        case 4:
          FUN_000ebc10();
          return;
        case 5:
          FUN_000ebc10();
          return;
        case 6:
          FUN_000ebc10();
          return;
        case 8:
          FUN_000ebc10();
          return;
        case 9:
          FUN_000ebc10();
          return;
        case 10:
          FUN_000ebc10();
          return;
        case 0xb:
          FUN_000ebc10();
          return;
        case 0xc:
          FUN_000ebc10();
          return;
        case 0xd:
          FUN_000ebc10();
          return;
        case 0xe:
          FUN_000ebc10();
          return;
        case 0xf:
          FUN_000ebc10();
          return;
        case 0x10:
          FUN_000ebc10();
          return;
        }
        break;
      case 5:
      case 9:
switchD_0008a965_caseD_5:
        FUN_000ebc10();
        return;
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0x11:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        FUN_0008eeec();
        return;
      case 0xc:
      case 0xf:
        FUN_000ebc10();
        return;
      case 0x10:
        switch((&DAT_0019d56d)[iVar4]) {
        case 1:
          FUN_000ebc10();
          return;
        case 2:
          FUN_000ebc10();
          return;
        case 3:
          FUN_000ebc10();
          return;
        case 4:
          FUN_000ebc10();
          return;
        case 5:
          FUN_000ebc10();
          return;
        case 6:
          FUN_000ebc10();
          return;
        }
        break;
      case 0x12:
        switch((&DAT_0019d56e)[iVar4]) {
        case 1:
          FUN_000ebc10();
          return;
        case 2:
          FUN_000ebc10();
          return;
        case 3:
          FUN_000ebc10();
          return;
        case 4:
          FUN_000ebc10();
          return;
        }
        break;
      case 0x17:
        FUN_000ebc10();
        return;
      }
      return;
    }
    if (DAT_002e90b1 == '\x02') {
LAB_0008a229:
      FUN_000ebc10();
      return;
    }
  }
  else if (bVar1 < 4) {
    if ((DAT_0019d0b9 & 8) == 0) {
      FUN_000ebc10();
      return;
    }
  }
  else if (6 < bVar1) {
    return;
  }
  FUN_000ebc10();
  return;
}

/******************************************************************************
 * Function : sub_08a9f4 (Ghidra: FUN_0008a9f4)
 * Prototype: void sub_08a9f4(void);
 * Address  : 0x8a9f4 (Size: 437 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xebc10
 ******************************************************************************/
void FUN_0008a9f4(void)

{
  switch((&DAT_0019d56b)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
  case 2:
    FUN_000ebc10();
    return;
  case 3:
    FUN_000ebc10();
    return;
  case 4:
    FUN_000ebc10();
    return;
  case 5:
    FUN_000ebc10();
    return;
  case 6:
    FUN_000ebc10();
    return;
  case 8:
    FUN_000ebc10();
    return;
  case 9:
    FUN_000ebc10();
    return;
  case 10:
    FUN_000ebc10();
    return;
  case 0xb:
    FUN_000ebc10();
    return;
  case 0xc:
    FUN_000ebc10();
    return;
  case 0xd:
    FUN_000ebc10();
    return;
  case 0xe:
    FUN_000ebc10();
    return;
  case 0xf:
    FUN_000ebc10();
    return;
  case 0x10:
    FUN_000ebc10();
  }
  return;
}

/******************************************************************************
 * Function : sub_08abc4 (Ghidra: FUN_0008abc4)
 * Prototype: void sub_08abc4(void);
 * Address  : 0x8abc4 (Size: 197 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xebc10
 ******************************************************************************/
void FUN_0008abc4(void)

{
  switch((&DAT_0019d56d)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
  case 1:
    FUN_000ebc10();
    return;
  case 2:
    FUN_000ebc10();
    return;
  case 3:
    FUN_000ebc10();
    return;
  case 4:
    FUN_000ebc10();
    return;
  case 5:
    FUN_000ebc10();
    return;
  case 6:
    FUN_000ebc10();
    return;
  default:
    return;
  }
}

/******************************************************************************
 * Function : sub_08ac9c (Ghidra: FUN_0008ac9c)
 * Prototype: void sub_08ac9c(void);
 * Address  : 0x8ac9c (Size: 149 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xebc10
 ******************************************************************************/
void FUN_0008ac9c(void)

{
  switch((&DAT_0019d56e)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
  case 1:
    FUN_000ebc10();
    return;
  case 2:
    FUN_000ebc10();
    return;
  case 3:
    FUN_000ebc10();
    return;
  case 4:
    FUN_000ebc10();
    return;
  default:
    return;
  }
}

/******************************************************************************
 * Function : dk_frames_different_between_views_08ae00 (Ghidra: FUN_0008ae00)
 * Prototype: void dk_frames_different_between_views_08ae00(void);
 * Address  : 0x8ae00 (Size: 225 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp:2991
 * Naming   : String 'No frames different between views C%d, M%d, A%d, B%d'
 * Callers  : 1 -> 0x784ae
 * Callees  : 3 -> 0x4c2eb, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16a20c: "draw.cpp"
 *   - 0x16a1d7: "No frames different between views C%d, M%d, A%d, B%d"
 ******************************************************************************/
void FUN_0008ae00(void)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  do {
    pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar6);
    if (((*pbVar1 & 1) != 0) &&
       (((pbVar1[0x1f] == 5 || ((pbVar1[0x4f] & 1) == 0)) &&
        (-1 < *(int *)((int)&DAT_002f2223 + (*(int *)(pbVar1 + 0x42) >> 0x10) * 2 + 2) >> 0x10)))) {
      *(undefined2 *)(pbVar1 + 0x44) = (&DAT_002f2227)[*(int *)(pbVar1 + 0x42) >> 0x10];
      cVar2 = FUN_0004c2eb();
      if (cVar2 != *(char *)(extraout_ECX + 0x49)) {
        uVar3 = FUN_0004c2eb();
        FUN_000e7714(&DAT_0019cbac,s_No_frames_different_between_view_0016a1d7,
                     *(undefined1 *)(extraout_ECX_00 + 0x1f),*(undefined1 *)(extraout_ECX_00 + 0x1a)
                     ,*(undefined1 *)(extraout_ECX_00 + 0x49),uVar3);
        FUN_000ddaf0(); /* LbErrorLog("draw.cpp", line 2991, g_log_buf) */
        uVar3 = FUN_0004c2eb();
        *(undefined1 *)(extraout_ECX_01 + 0x49) = uVar3;
        uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),uVar3) - 1;
        uVar4 = (uint)*(byte *)(extraout_ECX_01 + 0x48);
        if ((int)uVar5 < (int)(uint)*(byte *)(extraout_ECX_01 + 0x48)) {
          uVar4 = uVar5;
        }
        *(char *)(extraout_ECX_01 + 0x48) = (char)uVar4;
        *(uint *)(extraout_ECX_01 + 0x40) = (uint)*(byte *)(extraout_ECX_01 + 0x48) << 8;
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x2000);
  return;
}

/******************************************************************************
 * Function : dk_frames_different_between_views_08aee4 (Ghidra: FUN_0008aee4)
 * Prototype: void dk_frames_different_between_views_08aee4(void);
 * Address  : 0x8aee4 (Size: 225 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp:3022
 * Naming   : String 'No frames different between views C%d, M%d, A%d, B%d'
 * Callers  : 1 -> 0x784ae
 * Callees  : 3 -> 0x4c2eb, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16a24a: "draw.cpp"
 *   - 0x16a215: "No frames different between views C%d, M%d, A%d, B%d"
 ******************************************************************************/
void FUN_0008aee4(void)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  do {
    pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar6);
    if (((*pbVar1 & 1) != 0) &&
       (((pbVar1[0x1f] == 5 || ((pbVar1[0x4f] & 1) == 0)) &&
        (-1 < *(int *)(&DAT_002f29d1 + (*(int *)(pbVar1 + 0x42) >> 0x10) * 2) >> 0x10)))) {
      *(undefined2 *)(pbVar1 + 0x44) = (&DAT_002f29d3)[*(int *)(pbVar1 + 0x42) >> 0x10];
      cVar2 = FUN_0004c2eb();
      if (cVar2 != *(char *)(extraout_ECX + 0x49)) {
        uVar3 = FUN_0004c2eb();
        FUN_000e7714(&DAT_0019cbac,s_No_frames_different_between_view_0016a215,
                     *(undefined1 *)(extraout_ECX_00 + 0x1f),*(undefined1 *)(extraout_ECX_00 + 0x1a)
                     ,*(undefined1 *)(extraout_ECX_00 + 0x49),uVar3);
        FUN_000ddaf0(); /* LbErrorLog("draw.cpp", line 3022, g_log_buf) */
        uVar3 = FUN_0004c2eb();
        *(undefined1 *)(extraout_ECX_01 + 0x49) = uVar3;
        uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),uVar3) - 1;
        uVar4 = (uint)*(byte *)(extraout_ECX_01 + 0x48);
        if ((int)uVar5 < (int)(uint)*(byte *)(extraout_ECX_01 + 0x48)) {
          uVar4 = uVar5;
        }
        *(char *)(extraout_ECX_01 + 0x48) = (char)uVar4;
        *(uint *)(extraout_ECX_01 + 0x40) = (uint)*(byte *)(extraout_ECX_01 + 0x48) << 8;
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x2000);
  return;
}

/******************************************************************************
 * Function : sub_08afd8 (Ghidra: FUN_0008afd8)
 * Prototype: void sub_08afd8(void);
 * Address  : 0x8afd8 (Size: 2241 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x872b8, 0x87694
 * Callees  : 7 -> 0x498d9, 0x4c7eb, 0x57f6b, 0x8bb2c, 0xc57a4, 0xdc150, 0x13a710
 ******************************************************************************/
void FUN_0008afd8(void)

{
  uint uVar1;
  char cVar2;
  uint extraout_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = (DAT_002f10ce >> 0x18) * 0x4ef;
  uVar1 = (&DAT_001ae9fc)[*(ushort *)(&DAT_0019d502 + iVar4)];
  if (((((&DAT_0019d0ce)[iVar4] & 1) == 0) && (DAT_002e90b1 != '\x02')) &&
     (DAT_003d9874 = 0, (&DAT_0019d51a)[iVar4] == '\x01')) {
    if (((DAT_0019d0b8 & 0x20) != 0) && (DAT_002e90b1 != '\x02')) {
      uStack_1c = 0x8b063;
      cVar2 = FUN_000498d9();
      if (cVar2 != '\0') {
        if (((DAT_002ee8a9 < 0xff) && (DAT_002ee8ab < 0xff)) &&
           (((uint)(byte)(&DAT_002d33c8)
                         [((&DAT_0019033b)[DAT_002ee8a9] + (&DAT_0019033b)[DAT_002ee8ab] * 0x55) * 6
                         ] * 0x45 != 0 &&
            (((*(uint *)((int)&DAT_00279203 +
                        ((uint)DAT_002ee8a9 + (uint)DAT_002ee8ab * 0x100) * 5 + 1) >> 0x1c &
              1 << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f)) != 0 &&
             (*(short *)(&DAT_0018ebab +
                        (uint)*(ushort *)
                               (&DAT_002ddd25 +
                               (uint)(byte)(&DAT_002d33c8)
                                           [((&DAT_0019033b)[DAT_002ee8a9] +
                                            (&DAT_0019033b)[DAT_002ee8ab] * 0x55) * 6] * 0x45) *
                        0x17) != 0)))))) {
          uStack_1c = 0x8b17d;
          FUN_000dc150();
          uStack_1c = 0x8b1c6;
          FUN_0013a710();
        }
        if ((&DAT_001ae9fc)
            [*(ushort *)
              (&DAT_002e05bc + (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] * 0x1508)
            ] <= DAT_001ae9fc) {
          return;
        }
        switch(DAT_002e90b1) {
        default:
          return;
        case '\x01':
          uStack_1c = 0x8b20a;
          FUN_000dc150();
          uStack_1c = 0x8b224;
          FUN_0008bb2c();
          return;
        }
      }
    }
    uStack_1c = 0x8b248;
    cVar2 = FUN_00057f6b();
    if (cVar2 == '\0') {
      if (uVar1 != DAT_001ae9fc) {
        iVar4 = DAT_002f10ce >> 0x18;
        iVar5 = iVar4 * 0x4ef;
        if (DAT_002e8bee < *(uint *)(&DAT_0019d0d8 + iVar5)) {
          uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
          uStack_20 = (uint)*(byte *)(uVar1 + 0x48);
          FUN_000dc150();
          FUN_0004c7eb();
          FUN_000dc150();
          FUN_0008bb2c();
          return;
        }
        if (((&DAT_0019d0cb)[iVar5] & 2) != 0) {
          uStack_1c = 0x8b329;
          FUN_000dc150();
          uStack_1c = 0x8b342;
          FUN_0008bb2c();
          return;
        }
        if ((((&DAT_0019d51b)[iVar5] != '\x05') &&
            (((&DAT_0019d51b)[iVar5] != '\x01' || ((&DAT_0019d51d)[iVar5] != '\x03')))) &&
           ((iVar5 = iVar4 * 0x4ef, (&DAT_0019d51b)[iVar5] != '\x01' ||
            (((&DAT_0019d51d)[iVar5] != '\0' || ((&DAT_0019d51c)[iVar5] != '\x03')))))) {
          iVar5 = iVar4 * 0x4ef;
          if (((&DAT_0019d578)[iVar5] != '\x01') && ((&DAT_0019d578)[iVar5] != '\x02')) {
            if ((&DAT_0019d51b)[iVar5] == '\t') {
              uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
              uStack_20 = (uint)*(byte *)(uVar1 + 0x48);
              FUN_000dc150();
              FUN_0004c7eb();
              return;
            }
            if ((&DAT_0019d51b)[iVar5] != '\x01') {
              return;
            }
            if (((&DAT_0019d51d)[iVar5] != '\x02') && ((&DAT_0019d51c)[iVar5] != '\x02')) {
              return;
            }
            uStack_1c = 0x8b853;
            FUN_000dc150();
            uStack_1c = 0x8b86c;
            FUN_0008bb2c();
            return;
          }
        }
        puVar6 = (uint *)&stack0xffffffe8;
        if (((*(ushort *)(&DAT_002e05bc + (uint)(byte)(&DAT_0019d0f3)[iVar4 * 0x4ef] * 0x1508) != 0)
            && (uVar3 = (&DAT_001ae9fc)
                        [*(ushort *)
                          (&DAT_002e05bc + (uint)(byte)(&DAT_0019d0f3)[iVar4 * 0x4ef] * 0x1508)],
               puVar6 = (uint *)&stack0xffffffe8, (*(byte *)(uVar3 + 0x4f) & 1) == 0)) &&
           (puVar6 = (uint *)&stack0xffffffe8, DAT_001ae9fc < uVar3)) {
          if (*(char *)(uVar3 + 0x1f) == '\x05') {
            if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0xad) & 2) == 0) {
              if ((&DAT_0018b70d)[(uint)*(byte *)(uVar3 + 0x1a) * 0x10] != '\0') {
                DAT_003d9581 = 1;
              }
              uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
              uStack_20 = (uint)*(byte *)(uVar3 + 0x48);
              FUN_000dc150();
              FUN_0004c7eb();
              DAT_003d9581 = 0;
              puVar6 = &uStack_20;
              goto LAB_0008b651;
            }
            uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
            uStack_20 = (uint)*(byte *)(uVar3 + 0x48);
            FUN_000dc150();
          }
          else if ((*(char *)(uVar3 + 0x1f) == '\x01') && (*(char *)(uVar3 + 0x1a) == '\n')) {
            uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
            uStack_20 = (uint)*(byte *)(uVar3 + 0x48);
            FUN_000dc150();
          }
          else {
            if (*(char *)(uVar3 + 0x1f) == '\x01') {
              uStack_1c = 0x8b5f7;
              iVar4 = FUN_000c57a4();
              uVar3 = extraout_ECX;
              puVar6 = (uint *)&stack0xffffffe8;
              if (iVar4 != 0) goto LAB_0008b651;
            }
            uStack_1c = (undefined4)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
            uStack_20 = (uint)*(byte *)(uVar3 + 0x48);
            FUN_000dc150();
          }
          FUN_0004c7eb();
          puVar6 = &uStack_20;
        }
LAB_0008b651:
        if (*(int *)(&DAT_0019d0d4 + (DAT_002f10ce >> 0x18) * 0x4ef) != 0x310) {
          *(int *)((int)puVar6 + -4) = (int)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
          *(uint *)((int)puVar6 + -8) = (uint)*(byte *)(uVar1 + 0x48);
          *(undefined4 *)((int)puVar6 + -0xc) = 0x8b733;
          FUN_000dc150();
          *(undefined4 *)((int)puVar6 + -0xc) = 0x8b780;
          FUN_0004c7eb();
          *(undefined4 *)((int)puVar6 + -0xc) = 0x8b785;
          FUN_000dc150();
          *(undefined4 *)((int)puVar6 + -0xc) = 0x8b79e;
          FUN_0008bb2c();
          return;
        }
        *(int *)((int)puVar6 + -4) = (int)(0x40 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
        *(uint *)((int)puVar6 + -8) = (uint)*(byte *)(uVar1 + 0x48);
        *(undefined4 *)((int)puVar6 + -0xc) = 0x8b698;
        FUN_000dc150();
        *(undefined4 *)((int)puVar6 + -0xc) = 0x8b6e5;
        FUN_0004c7eb();
        *(undefined4 *)((int)puVar6 + -0xc) = 0x8b6ea;
        FUN_000dc150();
        *(undefined4 *)((int)puVar6 + -0xc) = 0x8b703;
        FUN_0008bb2c();
        return;
      }
    }
    else {
      uStack_1c = 0x8b878;
      FUN_000dc150();
      uStack_1c = 0x8b892;
      FUN_0008bb2c();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_08bb2c (Ghidra: FUN_0008bb2c)
 * Prototype: int sub_08bb2c(void);
 * Address  : 0x8bb2c (Size: 700 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8afd8
 * Callees  : 3 -> 0xa5178, 0xc57a4, 0x13a710
 ******************************************************************************/
int FUN_0008bb2c(void)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  char local_18;
  
  iVar3 = (DAT_002f10ce >> 0x18) * 0x1508;
  local_18 = (&DAT_002e05ec)[iVar3];
  if (local_18 != '\0') {
    iVar4 = in_EAX + (uint)DAT_0019cba6 *
                     ((int)((uint)*(byte *)(DAT_00199230 + 4 + (uint)DAT_00187f90 * 6) -
                           (uint)*(byte *)(DAT_001991c0 + 0x454)) / 2);
    iVar3 = in_EAX + -2;
    while( true ) {
      local_18 = local_18 + -1;
      if (local_18 < 0) break;
      iVar3 = (DAT_002f10ce >> 0x18) * 0x1508;
      uVar2 = (&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_18 * 2 + iVar3)];
      if (DAT_001ae9fc < uVar2) {
        if (*(char *)(uVar2 + 0x1f) == '\x05') {
          iVar3 = (uint)*(byte *)(uVar2 + 0x1a) * 0x2c;
          if (*(short *)(&DAT_00187b9c + iVar3) != 0) {
            bVar1 = *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23);
            FUN_000a5178();
            FUN_0013a710(DAT_001991c0 + (bVar1 + 0xb8) * 6,iVar4);
            iVar3 = FUN_0013a710();
          }
        }
        else if ((*(char *)(uVar2 + 0x1f) == '\x01') && (iVar3 = FUN_000c57a4(), iVar3 != 0)) {
          iVar3 = FUN_0013a710();
        }
        else {
          iVar3 = FUN_0013a710();
        }
      }
    }
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_08bde8 (Ghidra: FUN_0008bde8)
 * Prototype: void sub_08bde8(void);
 * Address  : 0x8bde8 (Size: 2434 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8685c
 * Callees  : 12 -> 0x3915c, 0xa5240, 0xb3a64, 0xc577c, 0xc6574, 0xc688c, 0xdc150, 0xe6a6c, 0xf0870, 0xf3300 ...
 ******************************************************************************/
void FUN_0008bde8(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint local_7c [3];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  
  DAT_003d9874 = 0;
  local_58 = (uint)DAT_0019cba6 * DAT_003d9864 + 0x18;
  local_7c[0] = 0x8be15;
  local_68 = FUN_000dc150();
  local_68 = local_68 + 0x18;
  iVar5 = ((uint)DAT_0019cba6 * DAT_003d9864 + -0x96) * 3;
  iVar7 = iVar5 >> 0x1f;
  local_5c = ((int)((iVar5 + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2) + -6;
  local_7c[0] = 0x8be53;
  iVar5 = FUN_000dc150();
  iVar5 = (iVar5 + -0x38) * 3;
  iVar7 = iVar5 >> 0x1f;
  local_6c = ((int)((iVar5 + iVar7 * -4) - (uint)(iVar7 << 1 < 0)) >> 2) + -6;
  if ((((-10 < local_5c) && (local_5c < 0xf9)) && (-10 < local_6c)) && (local_6c < 0xf9)) {
    local_7c[0] = (uint)DAT_0019cba2 / (uint)DAT_0019cba6;
    puVar8 = local_7c;
    local_58 = local_58 + 4;
    local_68 = local_68 + -4;
    FUN_00137e43();
    if (local_6c < 0) {
      local_6c = 0;
    }
    else if ((int)(DAT_0019cba2 - 0x68) < local_6c) {
      local_6c = DAT_0019cba2 - 0x68;
    }
    local_54 = local_6c;
    local_58 = local_70;
    local_64 = local_6c + 0x68;
    do {
      iVar5 = *(int *)((int)puVar8 + 0x28);
      iVar7 = *(int *)((int)puVar8 + 0x20);
      *(undefined4 *)((int)puVar8 + 0x40) = *(undefined4 *)((int)puVar8 + 0x24);
      iVar10 = *(int *)((int)puVar8 + 0x1c);
      *(int *)((int)puVar8 + 0x30) = iVar7 + 0x68;
      piVar9 = (int *)puVar8;
      do {
        puVar8 = (uint *)piVar9;
        if (((-1 < iVar10) && (iVar10 < 0xff)) &&
           ((iVar3 = piVar9[0x10], -1 < iVar3 && (iVar3 < 0xff)))) {
          if ((*(uint *)((int)&DAT_00279203 + (iVar3 * 0x100 + iVar10) * 5 + 1) >> 0x1c &
              1 << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f)) == 0) {
            *piVar9 = iVar5 / (int)(uint)DAT_0019cba6;
            puVar8 = (uint *)(piVar9 + -1);
            piVar9[-1] = 1;
            piVar9[-2] = 0x8bfb1;
            FUN_000f0870();
          }
          else {
            piVar9[-1] = 0x8c01e;
            uVar6 = FUN_000b3a64();
            piVar9[-1] = 0xffffffff;
            piVar9[-2] = 0;
            puVar8 = (uint *)(piVar9 + -3);
            piVar9[-3] = uVar6;
            piVar9[-4] = 0x8c033;
            FUN_0003915c();
          }
        }
        iVar7 = iVar7 + 8;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)puVar8;
      } while (iVar7 != puVar8[0xc]);
      iVar5 = puVar8[10];
      puVar8[9] = puVar8[9] + 1;
      puVar8[10] = iVar5 + 8;
    } while (iVar5 + 8 != puVar8[6]);
    DAT_003d9874 = DAT_003d9874 | 0x10;
    puVar8[-1] = 0;
    puVar8[-2] = 0x8c083;
    FUN_000f0870();
    DAT_003d9874 = DAT_003d9874 & 0xffef;
    iVar5 = puVar8[2];
    puVar8[-2] = 0x8c0d8;
    FUN_000e6a6c();
    puVar8[10] = iVar5;
    *puVar8 = 0;
    puVar8[4] = puVar8[6];
    do {
      puVar8[0xc] = *puVar8;
      puVar8[0xe] = puVar8[10];
      puVar8[0x11] = puVar8[4];
      puVar8[0x10] = 0;
      puVar8[0xd] = puVar8[10] << 8;
      do {
        iVar5 = puVar8[0x11];
        if (((-1 < iVar5) && (iVar5 < 0xff)) &&
           ((-1 < (int)puVar8[0xe] && ((int)puVar8[0xe] < 0xff)))) {
          puVar8[0x16] = puVar8[0x10];
          puVar8[0x15] = puVar8[0xc];
          uVar4 = *(uint *)((int)&DAT_00279203 + (iVar5 + puVar8[0xd]) * 5 + 1);
          if (((uVar4 >> 0x1c & 1 << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f)) != 0)
             && (pbVar11 = (&DAT_001ae9fc)[(uVar4 & 0x3fffff) >> 0xb], pbVar11 != DAT_001ae9fc)) {
            do {
              if (((*pbVar11 & 0x10) == 0) && ((pbVar11[1] & 2) == 0)) {
                bVar1 = pbVar11[0xf];
                iVar5 = (int)((uint)pbVar11[0xd] * 8) >> 8;
                bVar2 = pbVar11[0x1f];
                if (bVar2 < 5) {
LAB_0008c40e:
                  if ((pbVar11[0x1f] == 1) && (pbVar11[0x1a] == 5)) {
                    puVar8[-2] = 0x8c488;
                    FUN_0013a710();
                  }
                  else {
                    if (pbVar11[0x1f] == 1) {
                      puVar8[-2] = 0x8c49e;
                      iVar7 = FUN_000c577c();
                      if (iVar7 != 0) {
                        puVar8[-2] = 0x8c508;
                        FUN_0013a710();
                        goto LAB_0008c1d2;
                      }
                    }
                    puVar8[-2] = 0x8c518;
                    uVar12 = FUN_000c688c();
                    puVar8[0x13] = (int)((ulonglong)uVar12 >> 0x20) + iVar5;
                    if ((int)uVar12 == 0) {
                      puVar8[-2] = 0x8c592;
                      iVar5 = FUN_000c6574();
                      if (iVar5 != 0) {
                        puVar8[-2] = 0x8c60e;
                        FUN_0013a710();
                      }
                    }
                    else {
                      puVar8[-2] = 0x8c586;
                      FUN_0013a710();
                    }
                  }
                }
                else if (bVar2 < 6) {
                  if (*(ushort *)(&DAT_00187b9c + (uint)pbVar11[0x1a] * 0x2c) != 0) {
                    iVar7 = (uint)*(ushort *)(&DAT_00187b9c + (uint)pbVar11[0x1a] * 0x2c) * 6 +
                            DAT_00199230;
                    puVar8[0x12] = puVar8[0x16] + iVar5;
                    puVar8[0x14] = puVar8[0x15] + ((int)((uint)bVar1 * 8) >> 8);
                    if (((byte)DAT_002e8bee & 4) == 0) {
                      puVar8[1] = (int)(puVar8[0x14] -
                                       ((uint)*(byte *)(iVar7 + 5) * (uint)DAT_0019cba6) / 2) /
                                  (int)(uint)DAT_0019cba6;
                      puVar8[-2] = 0x8c32b;
                      FUN_0013a710();
                    }
                    else {
                      bVar1 = *(byte *)(iVar7 + 5);
                      puVar8[-1] = (uint)(byte)(&DAT_0019176e)[*(int *)(pbVar11 + 3) >> 0x18];
                      puVar8[1] = (int)(puVar8[0x14] - ((uint)bVar1 * (uint)DAT_0019cba6) / 2) /
                                  (int)(uint)DAT_0019cba6;
                      puVar8[-2] = 0x8c2d7;
                      FUN_000f3300();
                    }
                    puVar8[-2] = 0x8c364;
                    FUN_000a5240();
                  }
                }
                else {
                  if (bVar2 != 8) goto LAB_0008c40e;
                  if ((pbVar11[0x18] != 0) ||
                     (*(int *)(pbVar11 + 3) >> 0x18 ==
                      (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) {
                    puVar8[-2] = 0x8c409;
                    FUN_0013a710();
                  }
                }
              }
LAB_0008c1d2:
              pbVar11 = (&DAT_001ae9fc)[*(ushort *)(pbVar11 + 2)];
            } while (pbVar11 != DAT_001ae9fc);
          }
        }
        iVar5 = puVar8[0x10];
        puVar8[0x11] = puVar8[0x11] + 1;
        puVar8[0x10] = iVar5 + 8;
      } while (iVar5 + 8 != 0x68);
      iVar5 = *puVar8;
      puVar8[10] = puVar8[10] + 1;
      *puVar8 = iVar5 + 8;
    } while (iVar5 + 8 != 0x68);
    puVar8[-2] = 0x8c649;
    FUN_000e6a6c();
    puVar8[-2] = 0x8c685;
    FUN_0013a710();
    puVar8[-2] = 0x8c6ba;
    FUN_0013a710();
    puVar8[1] = (uint)DAT_0019cba6;
    puVar8[-2] = 0x8c6fc;
    FUN_0013a710();
    puVar8[-2] = 0x8c72a;
    FUN_0013a710();
    puVar8[-2] = 0x8c760;
    FUN_000e6a6c();
  }
  return;
}

/******************************************************************************
 * Function : dk_load_palette_file_08cc24 (Ghidra: FUN_0008cc24)
 * Prototype: void dk_load_palette_file_08cc24(void);
 * Address  : 0x8cc24 (Size: 191 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp:3720
 * Naming   : String 'Cannot load palette file %s'
 * Callers  : 1 -> 0x6a412
 * Callees  : 6 -> 0x2c3d0, 0x627b5, 0xdd920, 0xddaf0, 0xe7714, 0xe984c
 * Strings  :
 *   - 0x16a285: "draw.cpp"
 *   - 0x16a253: "DATA"
 *   - 0x16a25a: "%s\pal%05d.dat"
 *   - 0x16a269: "Cannot load palette file %s"
 ******************************************************************************/
void FUN_0008cc24(void)

{
  char in_AL;
  char cVar1;
  undefined4 uVar2;
  int in_EDX;
  undefined1 local_9c [152];
  
  if (in_AL < '\0') {
    in_AL = '\0';
  }
  else if ('\x04' < in_AL) {
    in_AL = '\x04';
  }
  DAT_002ee8da = in_AL;
  FUN_000dd920(in_AL);
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_9c,s__s_pal_05d_dat_0016a25a,uVar2);
  cVar1 = FUN_0002c3d0();
  if (cVar1 == '\0') {
    FUN_000e7714(&DAT_0019cbac,s_Cannot_load_palette_file__s_0016a269,local_9c);
    FUN_000ddaf0(); /* LbErrorLog("draw.cpp", line 3720, g_log_buf) */
  }
  else {
    FUN_000e984c();
    if (in_EDX != 0) {
      FUN_000627b5();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_08ccec (Ghidra: FUN_0008ccec)
 * Prototype: void sub_08ccec(undefined1 param_1);
 * Address  : 0x8ccec (Size: 263 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 25 -> 0x43bb3, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x44b13, 0x44f33, 0x4ac70, 0x4da55, 0x5117d ...
 * Callees  : 1 -> 0x4c2eb
 ******************************************************************************/
void FUN_0008ccec(undefined1 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int in_EAX;
  int iVar4;
  int extraout_ECX;
  byte bVar5;
  int in_EDX;
  int unaff_EBX;
  byte bStack00000004;
  int iStack00000005;
  undefined1 in_stack_00000001 [11];
  
  if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
    iVar4 = *(int *)(&DAT_002f29d1 + in_EDX * 2) >> 0x10;
    if (*(int *)(&DAT_002f29d1 + in_EDX * 2) >> 0x10 < 0) {
      iVar4 = in_EDX;
    }
  }
  else {
    iVar4 = *(int *)((int)&DAT_002f2223 + in_EDX * 2 + 2) >> 0x10;
    if (iVar4 < 0) {
      iVar4 = in_EDX;
    }
  }
  *(short *)(in_EAX + 0x44) = (short)iVar4;
  uVar3 = CONCAT11(*(undefined1 *)(in_EAX + 0x50),param_1) & 0x33f;
  bVar5 = (byte)(uVar3 >> 8);
  *(byte *)(in_EAX + 0x50) = bVar5;
  *(byte *)(in_EAX + 0x50) = bVar5 | (char)uVar3 << 2;
  uVar2 = FUN_0004c2eb();
  *(undefined1 *)(in_EAX + 0x49) = uVar2;
  if (unaff_EBX != -1) {
    *(short *)(in_EAX + 0x3e) = (short)unaff_EBX;
  }
  if (extraout_ECX != -1) {
    *(short *)(in_EAX + 0x46) = (short)extraout_ECX;
  }
  if (in_stack_00000001._0_4_ >> 0x18 != -1) {
    bVar5 = *(byte *)(in_EAX + 0x4f) & 0xbf;
    *(byte *)(in_EAX + 0x4f) = bVar5;
    *(byte *)(in_EAX + 0x4f) = bVar5 | (bStack00000004 & 1) << 6;
  }
  if (iStack00000005 >> 0x18 == -2) {
    iStack00000005._3_1_ = FUN_0004c2eb();
    iStack00000005._3_1_ = iStack00000005._3_1_ + -1;
  }
  else {
    if (iStack00000005 >> 0x18 == -1) {
      uVar1 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar1 >> 0xd | uVar1 * 0x80000;
      bVar5 = (byte)(DAT_002e8bf6 % (uint)*(byte *)(in_EAX + 0x49));
      *(byte *)(in_EAX + 0x48) = bVar5;
      goto LAB_0008cde9;
    }
  }
  *(char *)(in_EAX + 0x48) = iStack00000005._3_1_;
  bVar5 = *(byte *)(in_EAX + 0x48);
LAB_0008cde9:
  *(uint *)(in_EAX + 0x40) = (uint)bVar5 << 8;
  return;
}

/******************************************************************************
 * Function : sub_08cdf4 (Ghidra: FUN_0008cdf4)
 * Prototype: void sub_08cdf4(void);
 * Address  : 0x8cdf4 (Size: 185 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6d80, 0xe7714
 * Strings  :
 *   - 0x16a28e: "Event %d"
 ******************************************************************************/
void FUN_0008cdf4(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  byte *pbVar2;
  
  pbVar2 = &DAT_002e7091;
  iVar1 = 0x15;
  do {
    if ((((*pbVar2 & 1) != 0) && (pbVar2[10] == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) &&
       (FUN_000e7714(&DAT_0019cbac,s_Event__d_0016a28e,iVar1 / 0x15), iVar1 = extraout_ECX,
       DAT_003d9818 != 0)) {
      FUN_000e6d80();
      iVar1 = extraout_ECX_00;
    }
    pbVar2 = pbVar2 + 0x15;
    iVar1 = iVar1 + 0x15;
  } while (pbVar2 < &DAT_002e78b0);
  return;
}

/******************************************************************************
 * Function : sub_08d220 (Ghidra: FUN_0008d220)
 * Prototype: void sub_08d220(void);
 * Address  : 0x8d220 (Size: 293 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_0008d220(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_003d9874;
  iVar3 = (uint)*(byte *)(DAT_001991c0 + 0x1ae) * (uint)DAT_0019cba6;
  iVar4 = 0;
  for (iVar2 = in_ECX; 0 < iVar2; iVar2 = iVar2 / 10) {
    iVar4 = iVar4 + 1;
  }
  if (iVar4 < 1) {
    FUN_0013a710();
    DAT_003d9874 = (ushort)uVar1;
  }
  else if (0 < in_ECX) {
    do {
      FUN_0013a710(DAT_0019cba6,uVar1,iVar3);
    } while (0 < extraout_ECX / 10);
    DAT_003d9874 = (short)uVar1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_08d348 (Ghidra: FUN_0008d348)
 * Prototype: void sub_08d348(void);
 * Address  : 0x8d348 (Size: 1014 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0xe7714
 ******************************************************************************/
void FUN_0008d348(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar2 = DAT_003d9874;
  DAT_003d9874 = DAT_003d9874 | 4;
  DAT_003d98b4 = DAT_001991b8;
  FUN_000e6b20();
  FUN_000e7714(&DAT_0019cbac,&DAT_0016a297,DAT_00333f4f);
  iVar1 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 7);
  iVar3 = (&DAT_001927e0)[iVar1];
  if (DAT_003d9818 != 0) {
    FUN_000e6d80(iVar3 * -0x32 >> 0x10,(int)(&PTR_LAB_00192fe0)[iVar1] * -0x32 >> 0x10,iVar3);
  }
  FUN_000e7714(&DAT_0019cbac,&DAT_0016a29a,DAT_00333f57);
  iVar1 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 7);
  iVar4 = (&DAT_001927e0)[iVar1];
  if (DAT_003d9818 != 0) {
    FUN_000e6d80(iVar4 * 0x32 >> 0x10,(int)(&PTR_LAB_00192fe0)[iVar1] * 0x32 >> 0x10,iVar3,iVar4);
  }
  FUN_000e7714(&DAT_0019cbac,&DAT_0016a29d,DAT_00333f53);
  iVar1 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 7);
  puVar5 = (&PTR_LAB_00192fe0)[iVar1];
  if (DAT_003d9818 != 0) {
    FUN_000e6d80((int)puVar5 * 0x32 >> 0x10,(&DAT_001927e0)[iVar1] * -0x32 >> 0x10,iVar3,iVar4,
                 puVar5);
  }
  FUN_000e7714(&DAT_0019cbac,&DAT_0016a2a0,DAT_00333f5b);
  iVar1 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 7);
  if (DAT_003d9818 != 0) {
    FUN_000e6d80((int)(&PTR_LAB_00192fe0)[iVar1] * -0x32 >> 0x10,
                 (&DAT_001927e0)[iVar1] * 0x32 >> 0x10,iVar3,iVar4,puVar5);
  }
  DAT_003d9874 = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_08d740 (Ghidra: FUN_0008d740)
 * Prototype: void sub_08d740(void);
 * Address  : 0x8d740 (Size: 597 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa5c28
 * Callees  : 2 -> 0xf0870, 0x13a710
 ******************************************************************************/
void FUN_0008d740(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_EDX;
  int unaff_EBX;
  int iVar4;
  undefined2 uVar5;
  
  uVar2 = (uint)DAT_003d9874;
  FUN_0013a710(DAT_00199230 + 0x71a);
  FUN_0013a710(DAT_0019cba6);
  iVar4 = 0;
  if (*(ushort *)(unaff_EBX + 0x3b) != 0) {
    iVar4 = 10 - ((uint)*(ushort *)(unaff_EBX + 0xc) * 10) / (uint)*(ushort *)(unaff_EBX + 0x3b);
  }
  uVar1 = (uint)DAT_001992a0;
  uVar3 = (uint)DAT_0019cba6;
  FUN_000f0870(uVar1,(int)(4 / (ulonglong)(longlong)(int)uVar3),(in_EDX + 8) / (int)uVar3,
               (iVar4 * 2) / (int)uVar3);
  uVar3 = (uint)*(ushort *)(uVar2 + 0xe);
  if (uVar3 != 0) {
    iVar4 = 10 - ((uint)*(ushort *)(uVar2 + 0x10) * 10) / uVar3;
  }
  uVar2 = (uint)DAT_001992a0;
  iVar4 = (iVar4 * 2) / (int)(uint)DAT_0019cba6;
  FUN_000f0870(uVar2,uVar1,iVar4,(in_EDX + 0x10) / (int)(uint)DAT_0019cba6);
  uVar5 = (undefined2)iVar4;
  FUN_000f0870(DAT_001992a0,uVar2,in_EAX + 0x34);
  DAT_003d9874 = uVar5;
  return;
}

/******************************************************************************
 * Function : sub_08d998 (Ghidra: FUN_0008d998)
 * Prototype: void sub_08d998(void);
 * Address  : 0x8d998 (Size: 385 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8685c
 * Callees  : 4 -> 0x58e1c, 0xe6b20, 0xe6d80, 0xe7714
 * Strings  :
 *   - 0x16a2a3: "%05d"
 ******************************************************************************/
void FUN_0008d998(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = DAT_002ee88e - DAT_002e8bee;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (99999 < iVar3) {
    iVar3 = 99999;
  }
  DAT_003d98b4 = DAT_001991b8;
  FUN_000e7714(&DAT_0019cbac,&DAT_0016a2a3,iVar3 / 2); /* 0x16a2a3="%05d" */
  if (DAT_003d98b4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(DAT_003d98b4 + 0x6a);
  }
  if (DAT_003d98b4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
  }
  if (DAT_003d98b4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
  }
  uVar5 = (uint)DAT_0019cba6;
  DAT_003d9874 = 0x100;
  FUN_000e6b20(uVar2 * uVar5 + (uVar4 * DAT_0019cba6) / 2,(uVar1 * DAT_0019cba6 * 10) / uVar5,
               (int)(0x10 / (ulonglong)(longlong)(int)uVar5));
  FUN_00058e1c();
  FUN_000e6d80();
  FUN_000e6b20();
  return;
}

/******************************************************************************
 * Function : sub_08dcd0 (Ghidra: FUN_0008dcd0)
 * Prototype: void sub_08dcd0(void);
 * Address  : 0x8dcd0 (Size: 448 bytes)
 * Module   : draw.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x58e1c, 0xe6b20, 0xe6c1c, 0xe6d80
 ******************************************************************************/
void FUN_0008dcd0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 extraout_var;
  
  if ((DAT_0019d0b8 & 0x80) == 0) {
    DAT_003d98b4 = DAT_001991b8;
    uVar1 = 0;
    if (DAT_001991b8 != 0) {
      uVar1 = (uint)*(byte *)(DAT_001991b8 + 10);
    }
    uVar3 = (uint)DAT_0019cba6;
    iVar2 = FUN_000e6c1c();
    DAT_003d9874 = 0x100;
    FUN_000e6b20((int)(uVar1 * uVar3 * 2 + iVar2 * CONCAT22(extraout_var,DAT_0019cba6)) /
                 (int)(uint)DAT_0019cba6,0x10 / DAT_0019cba6);
    FUN_00058e1c();
    FUN_000e6d80();
    FUN_000e6b20();
  }
  return;
}

/******************************************************************************
 * Function : sub_08de90 (Ghidra: FUN_0008de90)
 * Prototype: void sub_08de90(void);
 * Address  : 0x8de90 (Size: 157 bytes)
 * Module   : draw.cpp [direct_file_string_xref]
 * OrigLine : draw.cpp:4249 ("Wank")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xf5390
 * Strings  :
 *   - 0x16a2ad: "draw.cpp"
 *   - 0x16a2a8: "Wank"
 ******************************************************************************/
void FUN_0008de90(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  
  piVar2 = &DAT_001baded;
  while (piVar2 < &DAT_001baded + DAT_001e31ff * 2) {
    iVar1 = (int)*(char *)((int)piVar2 + 2);
    if ((((0x20 < iVar1) || (iVar1 != -0x20 && 0x1f < -iVar1)) ||
        (iVar1 = *piVar2 >> 0x18, 0x20 < iVar1)) || (iVar1 != -0x20 && 0x1f < -iVar1)) {
      FUN_000ddaf0(); /* LbErrorLog("draw.cpp", line 4249, "Wank") */
    }
    FUN_000f5390();
    piVar2 = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : sub_08eadc (Ghidra: FUN_0008eadc)
 * Prototype: void sub_08eadc(int param_1,int param_2);
 * Address  : 0x8eadc (Size: 209 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x872b8, 0x87870
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0008eadc(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int unaff_EBX;
  byte *pbVar6;
  uint uVar7;
  int local_10;
  
  uVar7 = (uint)DAT_0019cba6;
  iVar4 = unaff_EBX / (int)uVar7;
  iVar1 = param_1 / (int)uVar7 + -1;
  local_10 = param_2 * iVar4 + in_EDX / (int)uVar7;
  iVar5 = iVar4 - iVar1;
  while (SBORROW4(iVar4,iVar1) != iVar5 < 0) {
    pbVar6 = (byte *)(in_EAX + local_10) + param_2;
    pbVar3 = (byte *)(in_EAX + local_10);
    for (iVar5 = in_EDX / (int)uVar7; iVar5 < in_ECX / (int)uVar7 + -1; iVar5 = iVar5 + 1) {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      *pbVar3 = (&DAT_00365c10)
                [(uint)bVar2 * 0x100 +
                 (uint)(byte)(&DAT_00365c10)[(uint)pbVar3[1] + (uint)*pbVar3 * 0x100]];
      pbVar3 = pbVar3 + 1;
    }
    iVar4 = iVar4 + 1;
    local_10 = local_10 + param_2;
    iVar5 = iVar4 - iVar1;
  }
  return;
}

/******************************************************************************
 * Function : sub_08ebb0 (Ghidra: FUN_0008ebb0)
 * Prototype: void sub_08ebb0(void);
 * Address  : 0x8ebb0 (Size: 254 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0x13a710
 ******************************************************************************/
void FUN_0008ebb0(void)

{
  int iVar1;
  int iVar2;
  
  DAT_003d98b4 = DAT_001991b8;
  for (iVar2 = 0; iVar2 < (int)(uint)DAT_002ee887; iVar2 = iVar2 + 1) {
    FUN_000e6b20();
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xbf;
    iVar1 = iVar2 * 0x45;
    FUN_000e6d80();
    FUN_0013a710(DAT_00199230 + ((byte)(&DAT_002ee7f8)[iVar1] + 0x1e8) * 6);
  }
  return;
}

/******************************************************************************
 * Function : sub_08ecb0 (Ghidra: FUN_0008ecb0)
 * Prototype: void sub_08ecb0(void);
 * Address  : 0x8ecb0 (Size: 121 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf0b60
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008ecb0(void)

{
  char cVar1;
  byte in_AL;
  undefined1 extraout_CL;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_002ee7b8;
  pcVar2 = &DAT_0019d52b + (uint)in_AL * 0x4ef;
  FUN_000f0b60();
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_002ee7f9 = DAT_002e8bee;
  DAT_002ee7f8 = extraout_CL;
  if (DAT_002ee887 != '\x03') {
    DAT_002ee887 = DAT_002ee887 + '\x01';
  }
  return;
}

/******************************************************************************
 * Function : sub_08ed2c (Ghidra: FUN_0008ed2c)
 * Prototype: void sub_08ed2c(void);
 * Address  : 0x8ed2c (Size: 85 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0008ed2c(void)

{
  int iVar1;
  
  if (-1 < (int)(DAT_002ee887 - 1)) {
    iVar1 = (DAT_002ee887 - 1) * 0x45;
    do {
      if (*(int *)(&DAT_002ee7f9 + iVar1) + 400U < DAT_002e8bee) {
        DAT_002ee887 = DAT_002ee887 - 1;
        (&DAT_002ee7b8)[(uint)DAT_002ee887 * 0x45] = 0;
      }
      iVar1 = iVar1 + -0x45;
    } while (-1 < iVar1);
  }
  return;
}

/******************************************************************************
 * Function : sub_08ed84 (Ghidra: FUN_0008ed84)
 * Prototype: undefined4 sub_08ed84(void);
 * Address  : 0x8ed84 (Size: 21 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0008ed84(void)

{
  int iVar1;
  
  iVar1 = (DAT_002f10ce >> 0x18) * 0x4ef;
  return CONCAT31((int3)((uint)iVar1 >> 8),(&DAT_0019d59a)[iVar1]);
}

/******************************************************************************
 * Function : sub_08ee8c (Ghidra: FUN_0008ee8c)
 * Prototype: ulonglong sub_08ee8c(void);
 * Address  : 0x8ee8c (Size: 47 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong FUN_0008ee8c(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_EDX;
  
  iVar1 = DAT_002f10ce >> 0x18;
  iVar2 = iVar1;
  if ((*(int *)(&DAT_0019d59a + iVar1 * 0x4ef) != 0) &&
     (iVar2 = iVar1 * 0x1508, (&DAT_002e0e0d)[iVar1 * 0x542] == 0)) {
    return CONCAT44(in_EDX,CONCAT31((int3)((uint)iVar2 >> 8),1));
  }
  return CONCAT44(in_EDX,iVar2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_08eebc (Ghidra: FUN_0008eebc)
 * Prototype: ulonglong sub_08eebc(void);
 * Address  : 0x8eebc (Size: 48 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong FUN_0008eebc(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = DAT_002f10ce >> 0x18;
  if ((*(int *)(&DAT_0019d59a + iVar1 * 0x4ef) != 0) &&
     (iVar1 = iVar1 * 0x1508, *(short *)(&DAT_002e0b61 + iVar1) == 0)) {
    return CONCAT44(in_EDX,CONCAT31((int3)((uint)iVar1 >> 8),1));
  }
  return CONCAT44(in_EDX,iVar1) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_08eeec (Ghidra: FUN_0008eeec)
 * Prototype: void sub_08eeec(void);
 * Address  : 0x8eeec (Size: 675 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8a194
 * Callees  : 3 -> 0x5003d, 0x502a9, 0xebc10
 ******************************************************************************/
void FUN_0008eeec(void)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  ushort in_DX;
  uint *puVar3;
  int local_14;
  uint local_10;
  
  local_10 = (uint)(byte)(&DAT_00191780)[in_EAX & 0xff];
  puVar3 = &local_10;
  if ((local_10 != 0) &&
     (((in_DX == 0 ||
       (*(int *)((&DAT_001ae9fc)[in_DX] + 3) >> 0x18 ==
        (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) ||
      (puVar3 = &local_10, (&DAT_0018e98d)[local_10 * 0x1b] != '\0')))) {
    local_14 = 0;
    cVar1 = FUN_0005003d();
    puVar3 = (uint *)&local_14;
    if ((cVar1 != '\0') &&
       ((in_DX == 0 || (iVar2 = FUN_000502a9(), puVar3 = (uint *)&local_14, iVar2 != 0)))) {
      if ((*(int *)(&DAT_0018e988 + local_14 * 0x1b) != 0) &&
         (cVar1 = (**(code **)(&DAT_0018e988 + local_14 * 0x1b))(), cVar1 != '\0')) {
        FUN_000ebc10();
        iVar2 = *(int *)(&DAT_0019d59a + (DAT_002f10ce >> 0x18) * 0x4ef) >> 0x1f;
        iVar2 = (int)((*(int *)(&DAT_0019d59a + (DAT_002f10ce >> 0x18) * 0x4ef) + iVar2 * -4) -
                     (uint)(iVar2 << 1 < 0)) >> 2;
        if (7 < iVar2) {
          iVar2 = 8;
        }
        DAT_0037776c = *(undefined4 *)(&DAT_002eae11 + local_14 * 0x4c + iVar2 * 4);
        return;
      }
      FUN_000ebc10();
      return;
    }
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x8f188;
  FUN_000ebc10();
  return;
}

/******************************************************************************
 * Function : dk_dene_says_big_hello_08f190 (Ghidra: FUN_0008f190)
 * Prototype: void dk_dene_says_big_hello_08f190(void);
 * Address  : 0x8f190 (Size: 391 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0xe7714
 * Strings  :
 *   - 0x16a154: "Dene says a big 'Hello' to Goth Buns, Tarts and Barbies"
 ******************************************************************************/
void FUN_0008f190(void)

{
  int extraout_ECX;
  int iVar1;
  int extraout_ECX_00;
  ushort extraout_DX;
  
  FUN_000e6b20();
  if (6 < DAT_003482c1) {
    DAT_003482c1 = DAT_003482c1 + 1;
    DAT_003d98b4 = DAT_001991b8;
    FUN_000e7714(&DAT_0019cbac,s_Dene_says_a_big__Hello__to_Goth_B_0016a154);
    iVar1 = extraout_ECX;
    DAT_003d9874 = extraout_DX;
    do {
      DAT_003d9885 = (char)DAT_002e8bee - (char)iVar1;
      FUN_000e6d80();
      iVar1 = extraout_ECX_00;
    } while (extraout_ECX_00 < 0x1e);
    DAT_003d9874 = DAT_003d9874 & 0xffbf;
    FUN_000e6d80();
    if (1000 < DAT_003482c1) {
      DAT_003482c1 = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_08f320 (Ghidra: FUN_0008f320)
 * Prototype: void sub_08f320(void);
 * Address  : 0x8f320 (Size: 501 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 1 -> 0x57f6b
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008f320(void)

{
  int iVar1;
  byte in_AL;
  char cVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  undefined1 local_18;
  
  local_18 = 1;
  iVar3 = (&DAT_0019033b)[in_EDX];
  iVar1 = (&DAT_0019033b)[unaff_EBX];
  if ((*(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) >> 0x1c &
      1 << (in_AL & 0x1f)) != 0) {
    if ((*(uint *)(&DAT_001921c6 +
                  (uint)(byte)(&DAT_002d33c5)[(in_EDX / 3 + (unaff_EBX / 3) * 0x55) * 6] * 0x16) &
        0x29) == 0) {
      local_18 = 0;
    }
    else if (((&DAT_001921d4)
              [(uint)(byte)(&DAT_002d33c5)[(in_EDX / 3 + (unaff_EBX / 3) * 0x55) * 6] * 0x16] ==
              '\0') ||
            ((((&DAT_002d33ca)[((&DAT_0019033b)[in_EDX] + (&DAT_0019033b)[unaff_EBX] * 0x55) * 6] &
              7) != in_AL &&
             ((*(uint *)(&DAT_001921c6 +
                        (uint)(byte)(&DAT_002d33c5)[(in_EDX / 3 + (unaff_EBX / 3) * 0x55) * 6] *
                        0x16) & 0x20) != 0)))) {
      local_18 = 0;
    }
  }
  if (((in_AL == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
      (cVar2 = FUN_00057f6b(), cVar2 == '\0')) && (DAT_002e90b1 != '\x02')) {
    _DAT_00387e07 = iVar3 * 0x300;
    iVar3 = in_ECX * 2 + iVar3 * 3 + 1;
    DAT_00387e13 = (iVar1 * 3 + 1 + in_ECX * 2) * 0x100;
    DAT_00387e0f = CONCAT22((short)((uint)iVar3 >> 8),(short)iVar3 * 0x100);
    DAT_00387e02._2_1_ = 1;
    _DAT_00387e0b = iVar1 * 0x300;
    DAT_00387e02._3_1_ = local_18;
    DAT_00387e17 = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : sub_08f518 (Ghidra: FUN_0008f518)
 * Prototype: undefined1 sub_08f518(void);
 * Address  : 0x8f518 (Size: 580 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 4 -> 0x22b3a, 0x3f80c, 0x57f6b, 0x76789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0008f518(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte in_AL;
  char cVar4;
  int iVar5;
  byte extraout_CH;
  int in_ECX;
  int in_EDX;
  uint uVar6;
  int unaff_EBX;
  undefined4 uVar7;
  undefined1 local_14;
  
  uVar3 = 0;
  local_14 = 0;
  iVar1 = (&DAT_0019033b)[in_EDX];
  iVar2 = (&DAT_0019033b)[unaff_EBX];
  iVar5 = ((&DAT_0019033b)[in_EDX] + iVar2 * 0x55) * 6;
  uVar6 = (uint)(byte)(&DAT_002d33c5)[iVar5];
  if ((*(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) >> 0x1c &
      1 << (in_AL & 0x1f)) == 0) {
    if (DAT_00387e00 == '\0') {
      uVar7 = 5;
    }
    else {
      uVar7 = 2;
    }
  }
  else if ((*(uint *)(&DAT_001921c6 + uVar6 * 0x16) & 0x29) == 0) {
    if ((uVar6 == 0xd) || (uVar6 == 0xc)) {
      uVar7 = 0;
      if (((&DAT_0019d51b)[(uint)in_AL * 0x4ef] == '\x02') &&
         ((&DAT_0019d56b)[(uint)in_AL * 0x4ef] == '\x0f')) {
        iVar5 = FUN_0003f80c();
        if (iVar5 != 0) {
          local_14 = 1;
        }
      }
    }
    else {
      local_14 = uVar3;
      if ((((&DAT_002d33ca)[iVar5] & 7) == in_AL) && (uVar6 == 0xb)) {
        iVar5 = FUN_00076789();
        if (iVar5 == 0) {
          iVar5 = FUN_00022b3a();
          if ((iVar5 == 0) && ((&DAT_0019d56b)[(uint)extraout_CH * 0x4ef] != '\x0f')) {
            local_14 = 1;
          }
        }
      }
      uVar7 = 1;
    }
  }
  else if (DAT_00387e00 == '\0') {
    uVar7 = 5;
  }
  else {
    uVar7 = 2;
  }
  if (in_AL == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    cVar4 = FUN_00057f6b();
    if ((cVar4 == '\0') && (DAT_002e90b1 != '\x02')) {
      _DAT_00387e07 = iVar1 * 0x300;
      DAT_00387e0f = (iVar1 * 3 + 1 + in_ECX * 2) * 0x100;
      DAT_00387e02._2_1_ = 1;
      _DAT_00387e0b = iVar2 * 0x300;
      DAT_00387e13 = (uint)(uint3)((int3)iVar2 * 3 + 1 + (int3)(in_ECX * 2)) << 8;
      DAT_00387e02._3_1_ = local_14;
      DAT_00387e17 = uVar7;
    }
  }
  return local_14;
}

/******************************************************************************
 * Function : sub_08f75c (Ghidra: FUN_0008f75c)
 * Prototype: undefined4 sub_08f75c(void);
 * Address  : 0x8f75c (Size: 456 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 3 -> 0x22b3a, 0x57f6b, 0x76789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008f75c(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte in_AL;
  int iVar4;
  uint uVar5;
  byte extraout_CH;
  byte extraout_CH_00;
  int in_EDX;
  int unaff_EBX;
  undefined8 uVar6;
  undefined1 local_14;
  
  uVar3 = 0;
  local_14 = 0;
  iVar1 = (&DAT_0019033b)[in_EDX];
  iVar2 = (&DAT_0019033b)[unaff_EBX];
  iVar4 = ((&DAT_0019033b)[in_EDX] + iVar2 * 0x55) * 6;
  uVar5 = (uint)(byte)(&DAT_002d33c5)[iVar4];
  if ((((((1 << (in_AL & 0x1f) &
          *(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) >> 0x1c) != 0) &&
        ((*(uint *)(&DAT_001921c6 + uVar5 * 0x16) & 0x29) == 0)) && (uVar5 != 0xd)) &&
      ((uVar5 != 0xc && (local_14 = uVar3, ((&DAT_002d33ca)[iVar4] & 7) == in_AL)))) &&
     ((uVar5 == 0xb &&
      ((iVar4 = FUN_00076789(), in_AL = extraout_CH, iVar4 == 0 &&
       (iVar4 = FUN_00022b3a(), in_AL = extraout_CH_00, iVar4 == 0)))))) {
    local_14 = 1;
  }
  uVar5 = (DAT_002f10ce >> 0x18) * 0x4ef;
  if (in_AL == (&DAT_0019d0f3)[uVar5]) {
    uVar6 = FUN_00057f6b();
    uVar5 = (uint)uVar6;
    if (((char)uVar6 == '\0') && (uVar5 = (uint)DAT_002e90b1, uVar5 != 2)) {
      DAT_00387e02._2_1_ = 1;
      DAT_00387e0f = iVar1 * 0x300 + 0x300;
      DAT_00387e13 = iVar2 * 0x300 + 0x300;
      _DAT_00387e07 = iVar1 * 0x300;
      _DAT_00387e0b = iVar2 * 0x300;
      uVar5 = CONCAT31((int3)iVar2 * 3,local_14);
      DAT_00387e02._3_1_ = local_14;
      DAT_00387e17 = (int)((ulonglong)uVar6 >> 0x20);
    }
  }
  return CONCAT31((int3)(uVar5 >> 8),local_14);
}

/******************************************************************************
 * Function : sub_08f924 (Ghidra: FUN_0008f924)
 * Prototype: undefined4 sub_08f924(void);
 * Address  : 0x8f924 (Size: 492 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x194e8, 0x48c77, 0x5f6c5
 * Callees  : 4 -> 0x22b3a, 0x22e62, 0x57f6b, 0x76789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0008f924(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte in_AL;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte extraout_CH;
  byte extraout_CH_00;
  byte extraout_CH_01;
  int in_EDX;
  int unaff_EBX;
  undefined8 uVar7;
  undefined1 local_1c;
  
  uVar3 = 0;
  local_1c = 0;
  iVar1 = (&DAT_0019033b)[in_EDX];
  iVar2 = (&DAT_0019033b)[unaff_EBX];
  iVar5 = ((&DAT_0019033b)[in_EDX] + iVar2 * 0x55) * 6;
  uVar6 = (uint)(byte)(&DAT_002d33c5)[iVar5];
  if (((((((1 << (in_AL & 0x1f) &
           *(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) >> 0x1c) != 0) &&
         ((*(uint *)(&DAT_001921c6 + uVar6 * 0x16) & 0x29) == 0)) && (uVar6 != 0xd)) &&
       ((uVar6 != 0xc && (local_1c = uVar3, ((&DAT_002d33ca)[iVar5] & 7) == in_AL)))) &&
      ((uVar6 == 0xb &&
       ((cVar4 = FUN_00022e62(), in_AL = extraout_CH, cVar4 != -1 &&
        (iVar5 = FUN_00076789(), in_AL = extraout_CH_00, iVar5 == 0)))))) &&
     (iVar5 = FUN_00022b3a(), in_AL = extraout_CH_01, iVar5 == 0)) {
    local_1c = 1;
  }
  uVar6 = (DAT_002f10ce >> 0x18) * 0x4ef;
  if (in_AL == (&DAT_0019d0f3)[uVar6]) {
    uVar7 = FUN_00057f6b();
    uVar6 = (uint)uVar7;
    if (((char)uVar7 == '\0') && (uVar6 = (uint)DAT_002e90b1, uVar6 != 2)) {
      DAT_00387e02._2_1_ = 1;
      DAT_00387e0f = iVar1 * 0x300 + 0x300;
      DAT_00387e13 = iVar2 * 0x300 + 0x300;
      _DAT_00387e07 = iVar1 * 0x300;
      _DAT_00387e0b = iVar2 * 0x300;
      uVar6 = CONCAT31((int3)iVar1 * 3,local_1c);
      DAT_00387e02._3_1_ = local_1c;
      DAT_00387e17 = (int)((ulonglong)uVar7 >> 0x20);
    }
  }
  return CONCAT31((int3)(uVar6 >> 8),local_1c);
}

/******************************************************************************
 * Function : sub_08fb10 (Ghidra: FUN_0008fb10)
 * Prototype: void sub_08fb10(void);
 * Address  : 0x8fb10 (Size: 515 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 3 -> 0x22b3a, 0x57f6b, 0x76789
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008fb10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  byte in_AL;
  char cVar5;
  int iVar6;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_18;
  
  iVar1 = (&DAT_0019033b)[unaff_EBX];
  uVar4 = 0;
  local_18 = 0;
  iVar2 = (&DAT_0019033b)[in_EDX];
  iVar3 = iVar2 * 3;
  iVar6 = ((&DAT_0019033b)[in_EDX] + iVar1 * 0x55) * 6;
  uVar7 = (uint)(byte)(&DAT_002d33c5)[iVar6];
  if ((*(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) >> 0x1c &
      1 << (in_AL & 0x1f)) == 0) {
    if (DAT_00387e00 == '\0') {
      uVar8 = 5;
    }
    else {
      uVar8 = 2;
    }
    goto LAB_0008fc84;
  }
  if ((*(uint *)(&DAT_001921c6 + uVar7 * 0x16) & 0x29) != 0) {
    if (DAT_00387e00 == '\0') {
      uVar8 = 5;
    }
    else {
      uVar8 = 2;
    }
    goto LAB_0008fc84;
  }
  if ((uVar7 == 0xd) || (uVar7 == 0xc)) {
    uVar8 = 0;
    goto LAB_0008fc84;
  }
  local_18 = uVar4;
  if (((&DAT_002d33ca)[iVar6] & 7) == in_AL) {
    if ((uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45 == 0) {
      iVar6 = FUN_00022b3a();
      if (iVar6 == 0) {
        iVar6 = FUN_00076789();
        if (iVar6 == 0) goto LAB_0008fc68;
      }
    }
    if ((uVar7 != 0xe) && (uVar7 != 0x1a)) {
      local_18 = 1;
    }
  }
LAB_0008fc68:
  uVar8 = 1;
LAB_0008fc84:
  if (in_AL == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    cVar5 = FUN_00057f6b();
    if ((cVar5 == '\0') && (DAT_002e90b1 != '\x02')) {
      _DAT_00387e07 = CONCAT22((short)((uint)iVar3 >> 8),(short)iVar2 * 0x300);
      _DAT_00387e0b = iVar1 * 0x300;
      DAT_00387e0f = (in_ECX * 2 + iVar3 + 1) * 0x100;
      DAT_00387e02._2_1_ = 1;
      DAT_00387e13 = (uint)(uint3)((int3)iVar1 * 3 + 1 + (int3)(in_ECX * 2)) << 8;
      DAT_00387e02._3_1_ = local_18;
      DAT_00387e17 = uVar8;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_08fd14 (Ghidra: FUN_0008fd14)
 * Prototype: void sub_08fd14(int param_1);
 * Address  : 0x8fd14 (Size: 416 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 2 -> 0x57f6b, 0xdc19c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008fd14(int param_1)

{
  int iVar1;
  int iVar2;
  byte in_AL;
  char cVar3;
  int iVar4;
  int in_EDX;
  undefined4 extraout_EDX;
  int unaff_EBX;
  bool bVar5;
  
  bVar5 = false;
  iVar1 = (&DAT_0019033b)[in_EDX];
  iVar2 = (&DAT_0019033b)[unaff_EBX];
  if (((*(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) >> 0x1c &
       1 << (in_AL & 0x1f)) != 0) &&
     ((*(uint *)(&DAT_001921c6 +
                (uint)(byte)(&DAT_002d33c5)[(in_EDX / 3 + (unaff_EBX / 3) * 0x55) * 6] * 0x16) &
      0x29) == 0)) {
    iVar4 = FUN_000dc19c();
    bVar5 = iVar4 != 0;
  }
  if (((in_AL == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
      (cVar3 = FUN_00057f6b(), cVar3 == '\0')) && (DAT_002e90b1 != '\x02')) {
    _DAT_00387e07 = iVar1 * 0x300;
    DAT_00387e0f = (iVar1 * 3 + 1 + param_1 * 2) * 0x100;
    DAT_00387e02._2_1_ = 1;
    _DAT_00387e0b = iVar2 * 0x300;
    DAT_00387e13 = (uint)(uint3)((int3)iVar2 * 3 + 1 + (int3)(param_1 * 2)) << 8;
    DAT_00387e02._3_1_ = bVar5;
    DAT_00387e17 = extraout_EDX;
  }
  return;
}

/******************************************************************************
 * Function : sub_08feb4 (Ghidra: FUN_0008feb4)
 * Prototype: void sub_08feb4(void);
 * Address  : 0x8feb4 (Size: 426 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008feb4(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 in_CL;
  int iVar4;
  int iVar5;
  int in_EDX;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  uint local_2c;
  int local_20;
  int local_1c;
  
  iVar4 = in_EAX;
  if (in_EAX < 0) {
    iVar4 = 0;
  }
  iVar5 = in_EDX;
  if (in_EDX < 0) {
    iVar5 = 0;
  }
  iVar1 = in_EAX + unaff_EBX;
  if (0xfe < iVar1) {
    iVar1 = 0xfe;
  }
  iVar2 = in_EDX + unaff_EBX;
  if (0xfe < iVar2) {
    iVar2 = 0xfe;
  }
  local_2c = 0;
  if (iVar5 <= iVar2) {
    local_20 = iVar5 * 0x500;
    local_1c = iVar5;
    do {
      if (iVar4 <= iVar1) {
        iVar6 = (int)&DAT_00279203 + local_20 + iVar4 * 5;
        iVar7 = iVar4;
        do {
          if (((*(uint *)(iVar6 + 1) >> 0x1c & (uint)DAT_00379395) == 0) ||
             (uVar3 = local_2c, (*(uint *)(iVar6 + 1) & 0x7ff) != 0)) {
            uVar3 = DAT_002e6f23;
            if ((*(uint *)(iVar6 + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
              uVar3 = *(uint *)(iVar6 + 1) & 0x7ff;
            }
            uVar3 = (uint)(*(byte *)((int)&DAT_0019e973 + uVar3 * 0x18 + 2) >> 4);
            if ((DAT_00387e00 != '\0') && (uVar3 < 3)) {
              uVar3 = 2;
            }
            if (uVar3 <= local_2c) {
              uVar3 = local_2c;
            }
          }
          local_2c = uVar3;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 5;
        } while (iVar7 <= iVar1);
      }
      local_20 = local_20 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c <= iVar2);
  }
  DAT_00387e02._2_1_ = 1;
  _DAT_00387e07 = iVar4 << 8;
  _DAT_00387e0b = iVar5 << 8;
  DAT_00387e0f = iVar1 * 0x100 + 0x100;
  DAT_00387e17 = local_2c;
  DAT_00387e13 = iVar2 * 0x100 + 0x100;
  DAT_00387e02._3_1_ = in_CL;
  return;
}

/******************************************************************************
 * Function : sub_0902e4 (Ghidra: FUN_000902e4)
 * Prototype: void sub_0902e4(int *param_1,int *param_2,int *param_3,int *param_4);
 * Address  : 0x902e4 (Size: 811 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000902e4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  ushort uVar7;
  int in_EDX;
  int iVar8;
  int *unaff_EBX;
  int iVar9;
  short sVar10;
  int iVar11;
  int local_30;
  
  local_30 = DAT_003882c0;
  if ((DAT_003882d8 == 0) && (DAT_003882cc == 0)) {
    *unaff_EBX = 0;
    _DAT_00387da4 = &DAT_00279203;
    *in_ECX = 0;
  }
  else {
    iVar3 = in_EAX - DAT_003882bc;
    for (sVar10 = 0; sVar10 < 8; sVar10 = sVar10 + 1) {
      uVar4 = ((iVar3 * DAT_003882d8 >> 1) - (DAT_003882d4 * (in_EDX - local_30) >> 1)) /
              (DAT_003882d8 * DAT_003882c8 - DAT_003882d4 * DAT_003882cc >> 0xb);
      uVar5 = ((iVar3 * DAT_003882cc >> 1) - (DAT_003882c8 * (in_EDX - local_30) >> 1)) /
              (DAT_003882d8 * -DAT_003882c8 + DAT_003882d4 * DAT_003882cc >> 0xb);
      iVar9 = (int)uVar4 >> 2;
      iVar6 = (int)uVar5 >> 2;
      iVar8 = (uVar4 & 3) << 6;
      iVar11 = (uVar5 & 3) << 6;
      if ((((-1 < iVar9) && (iVar9 < 0xff)) && (-1 < iVar6)) && (iVar6 < 0xff)) {
        iVar1 = (iVar6 * 0x100 + iVar9) * 5;
        if (sVar10 == 0) {
          DAT_00387de8 = iVar8;
          *param_1 = iVar9;
          *param_2 = iVar6;
          *unaff_EBX = iVar9;
          _DAT_00387da4 = (undefined2 *)((int)&DAT_00279203 + iVar1);
          DAT_00387dec = iVar11;
          *in_ECX = iVar6;
        }
        else {
          uVar4 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
          if ((((uint)DAT_00379395 & uVar4 >> 0x1c) == 0) || ((uVar4 & 0x7ff) != 0)) {
            uVar4 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
            uVar5 = DAT_002e6f23;
            if (((uint)DAT_00379395 & uVar4 >> 0x1c) != 0) {
              uVar5 = uVar4 & 0x7ff;
            }
            uVar7 = *(ushort *)((int)&DAT_0019e973 + uVar5 * 0x18 + 3);
            if ((DAT_00387e00 != '\0') && (uVar7 != 0)) {
              uVar4 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
              uVar5 = DAT_002e6f23;
              if ((uVar4 >> 0x1c & (uint)DAT_00379395) != 0) {
                uVar5 = uVar4 & 0x7ff;
              }
              if (7 < *(ushort *)((int)&DAT_0019e973 + uVar5 * 0x18 + 3)) {
                iVar1 = iVar9 + iVar6 * 0x100;
                iVar2 = iVar1 * 5;
                if (((*(uint *)((int)&DAT_00279203 + iVar2 + 1) >> 0x1c & (uint)DAT_00379395) == 0)
                   || ((((&DAT_00269203)[iVar1] & 0x80) == 0 &&
                       ((*(byte *)((int)&DAT_00279203 + iVar2) & 2) == 0)))) {
                  uVar7 = uVar7 & 3;
                }
              }
            }
            if (((int)(short)uVar7 & 1 << ((char)sVar10 - 1U & 0x1f)) != 0) {
              DAT_00387de8 = iVar8;
              *unaff_EBX = iVar9;
              *in_ECX = iVar6;
              _DAT_00387da4 = (undefined2 *)((int)&DAT_00279203 + (iVar6 * 0x100 + *unaff_EBX) * 5);
              DAT_00387dec = iVar11;
            }
            if (((DAT_00387e00 != '\0') && (sVar10 == 2)) ||
               ((DAT_00387e00 == '\0' && (sVar10 == 5)))) {
              DAT_00387df8 = iVar8;
              *param_3 = iVar9;
              DAT_00387dfc = iVar11;
              *param_4 = iVar6;
            }
          }
        }
      }
      local_30 = local_30 + (DAT_003882e4 >> 8);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_090610 (Ghidra: FUN_00090610)
 * Prototype: void sub_090610(void);
 * Address  : 0x90610 (Size: 203 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x9f8bc, 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00090610(void)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  int in_EDX;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  int iVar4;
  
  if ((DAT_003882d8 == 0) && (DAT_003882cc == 0)) {
    *unaff_EBX = 0;
    *in_ECX = 0;
  }
  else {
    iVar3 = DAT_003882d4 * DAT_003882cc;
    iVar2 = (in_EAX - DAT_003882bc) * DAT_003882cc;
    iVar4 = (in_EDX - DAT_003882c0) * DAT_003882c8;
    iVar1 = -DAT_003882c8 * DAT_003882d8;
    *unaff_EBX = ((DAT_003882d8 * (in_EAX - DAT_003882bc) >> 1) -
                 (DAT_003882d4 * (in_EDX - DAT_003882c0) >> 1)) /
                 (DAT_003882c8 * DAT_003882d8 - iVar3 >> 0xb) >> 2;
    *in_ECX = ((iVar2 >> 1) - (iVar4 >> 1)) / (iVar3 + iVar1 >> 0xb) >> 2;
  }
  return;
}

/******************************************************************************
 * Function : sub_090720 (Ghidra: FUN_00090720)
 * Prototype: undefined4 sub_090720(void);
 * Address  : 0x90720 (Size: 183 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00090720(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int *in_EDX;
  int *unaff_EBX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *unaff_EBX;
  iVar5 = *in_EAX;
  iVar4 = *in_ECX;
  iVar3 = *in_EDX;
  iVar1 = iVar4 - iVar3;
  iVar6 = iVar7 - iVar5;
  if ((iVar3 < 0) && (iVar4 < 0)) {
    uVar2 = 0;
  }
  else {
    if (iVar3 < 0) {
      if (iVar6 != 0) {
        iVar5 = iVar5 + ((-iVar3 * iVar6 * 0x100) / iVar1 >> 8);
      }
      iVar3 = 0;
    }
    if (iVar4 < 0) {
      if (iVar6 != 0) {
        iVar7 = iVar7 + ((-iVar4 * iVar6 * 0x100) / iVar1 >> 8);
      }
      iVar4 = 0;
    }
    if ((iVar3 < 0) || (iVar4 < 0)) {
      return 0;
    }
    *in_EAX = iVar5;
    *in_EDX = iVar3;
    *unaff_EBX = iVar7;
    *in_ECX = iVar4;
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0907d8 (Ghidra: FUN_000907d8)
 * Prototype: undefined4 sub_0907d8(void);
 * Address  : 0x907d8 (Size: 445 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000907d8(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int *in_EDX;
  int *unaff_EBX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *unaff_EBX;
  iVar8 = *in_EAX;
  iVar5 = *in_ECX;
  iVar4 = *in_EDX;
  iVar1 = iVar5 - iVar4;
  iVar2 = DAT_002f10ce >> 0x18;
  iVar6 = iVar7 - iVar8;
  if ((iVar4 < (int)((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6)) ||
     (iVar5 < (int)((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6))) {
    if ((int)((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar4) {
      if (iVar6 != 0) {
        iVar8 = iVar8 + ((int)(((iVar6 * 0x100) / iVar1) *
                              (((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) /
                                (uint)DAT_0019cba6 - 1) - iVar4)) >> 8);
      }
      iVar4 = (uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6 - 1;
    }
    if ((int)((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar5) {
      if (iVar6 != 0) {
        iVar7 = iVar7 + ((int)(((iVar6 * 0x100) / iVar1) *
                              (((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) /
                                (uint)DAT_0019cba6 - 1) - iVar5)) >> 8);
      }
      iVar5 = (uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6 - 1;
    }
    if (((int)((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar4) ||
       ((int)((uint)*(ushort *)(&DAT_0019d50e + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar5)) {
      return 0;
    }
    *in_EAX = iVar8;
    *in_EDX = iVar4;
    *unaff_EBX = iVar7;
    *in_ECX = iVar5;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_090a50 (Ghidra: FUN_00090a50)
 * Prototype: undefined4 sub_090a50(void);
 * Address  : 0x90a50 (Size: 452 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00090a50(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  int *in_EDX;
  int *unaff_EBX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *unaff_EBX;
  iVar5 = *in_EAX;
  iVar1 = iVar4 - iVar5;
  iVar2 = DAT_002f10ce >> 0x18;
  iVar8 = *in_EDX;
  iVar6 = *in_ECX;
  iVar7 = iVar6 - iVar8;
  if ((iVar5 < (int)((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6)) ||
     (iVar4 < (int)((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6))) {
    if ((int)((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar5) {
      if (iVar7 != 0) {
        iVar8 = iVar8 + ((int)(((iVar7 * 0x100) / iVar1) *
                              (((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) /
                                (uint)DAT_0019cba6 - 1) - iVar5)) >> 8);
      }
      iVar5 = (uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6 - 1;
    }
    if ((int)((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar4) {
      if (iVar7 != 0) {
        iVar6 = iVar6 + ((int)(((iVar7 * 0x100) / iVar1) *
                              (((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) /
                                (uint)DAT_0019cba6 - 1) - iVar4)) >> 8);
      }
      iVar4 = (uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6 - 1;
    }
    if (((int)((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar5) ||
       ((int)((uint)*(ushort *)(&DAT_0019d50c + iVar2 * 0x4ef) / (uint)DAT_0019cba6) <= iVar4)) {
      return 0;
    }
    *in_EAX = iVar5;
    *in_EDX = iVar8;
    *unaff_EBX = iVar4;
    *in_ECX = iVar6;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_090c14 (Ghidra: FUN_00090c14)
 * Prototype: void sub_090c14(void);
 * Address  : 0x90c14 (Size: 2503 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x915dc
 * Callees  : 1 -> 0xf5390
 ******************************************************************************/
void FUN_00090c14(void)

{
  bool bVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 auStack_110 [8];
  int local_ec;
  int local_e4;
  int local_e0;
  int *local_dc;
  uint local_d8;
  uint local_d4;
  undefined1 *local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 *local_c0;
  int *local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  int *local_a0;
  undefined1 *local_9c;
  int *local_98;
  uint local_94;
  int *local_90;
  uint local_8c;
  int *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  uint local_7c;
  int *local_78;
  undefined1 *local_74;
  int *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  uVar2 = unaff_EBX - in_EAX;
  puVar11 = &DAT_00191eac;
  puVar13 = auStack_110;
  local_20 = in_EDX;
  local_1c = in_ECX;
  local_10 = in_EAX;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar8 = in_ECX - local_20;
  iVar12 = 0;
  uVar6 = (int)uVar2 >> 0x1f;
  local_e0 = (uVar2 ^ uVar6) - uVar6;
  iVar5 = 0;
  uVar7 = (int)uVar8 >> 0x1f;
  if (((((int)((uVar8 ^ uVar7) - uVar7) < local_e0) && (local_10 < unaff_EBX)) ||
      ((local_e0 = (uVar2 ^ uVar6) - uVar6, local_e0 < (int)((uVar8 ^ uVar7) - uVar7) &&
       (local_20 < local_1c)))) ||
     ((local_e0 = (uVar2 ^ uVar6) - uVar6, (uVar8 ^ uVar7) - uVar7 == local_e0 &&
      (local_10 < unaff_EBX)))) {
    local_ec = local_20;
    local_e4 = local_1c;
    iVar4 = local_10;
  }
  else {
    local_ec = local_1c;
    local_e4 = local_20;
    iVar4 = unaff_EBX;
    unaff_EBX = local_10;
  }
  local_a8 = &stack0xffffff10;
  local_bc = &local_ec;
  local_d0 = &stack0xffffff18;
  local_dc = &local_e4;
  local_18 = unaff_EBX - iVar4;
  local_50 = local_e4 - local_ec;
  local_44 = unaff_EBX;
  local_34 = iVar4;
  if ((local_ec < 0) && (local_e4 < 0)) {
    bVar1 = false;
  }
  else {
    iVar3 = local_ec;
    if (local_ec < 0) {
      if (local_18 != 0) {
        local_34 = iVar4 + ((local_18 * 0x100 * -local_ec) / local_50 >> 8);
      }
      iVar3 = 0;
    }
    iVar9 = local_e4;
    if (local_e4 < 0) {
      if (local_18 != 0) {
        local_44 = unaff_EBX + ((local_18 * 0x100 * -local_e4) / local_50 >> 8);
      }
      iVar9 = 0;
    }
    if ((iVar3 < 0) || (iVar9 < 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      local_ec = iVar3;
      local_e4 = iVar9;
    }
  }
  if (bVar1) {
    local_a4 = &stack0xffffff10;
    local_a0 = &local_ec;
    local_9c = &stack0xffffff18;
    local_98 = &local_e4;
    local_28 = unaff_EBX - iVar4;
    local_5c = local_e4 - local_ec;
    iVar3 = DAT_002f10ce >> 0x18;
    local_c4 = (uint)*(ushort *)(&DAT_0019d50e + iVar3 * 0x4ef);
    local_c8 = (uint)DAT_0019cba6;
    local_48 = iVar4;
    local_38 = unaff_EBX;
    if ((local_ec < (int)(local_c4 / local_c8)) || (local_e4 < (int)(local_c4 / local_c8))) {
      local_60 = (uint)*(ushort *)(&DAT_0019d50e + iVar3 * 0x4ef);
      local_6c = (uint)DAT_0019cba6;
      iVar9 = local_ec;
      if ((int)(local_60 / local_6c) <= local_ec) {
        if (local_28 != 0) {
          local_48 = iVar4 + ((int)(((local_28 * 0x100) / local_5c) *
                                   ((local_60 / local_6c - 1) - local_ec)) >> 8);
        }
        iVar9 = (uint)*(ushort *)(&DAT_0019d50e + iVar3 * 0x4ef) / (uint)DAT_0019cba6 - 1;
      }
      local_b4 = (uint)*(ushort *)(&DAT_0019d50e + iVar3 * 0x4ef);
      local_94 = (uint)DAT_0019cba6;
      iVar10 = local_e4;
      if ((int)(local_b4 / local_94) <= local_e4) {
        if (local_28 != 0) {
          local_38 = unaff_EBX +
                     ((int)(((local_28 * 0x100) / local_5c) * ((local_b4 / local_94 - 1) - local_e4)
                           ) >> 8);
        }
        iVar10 = (uint)*(ushort *)(&DAT_0019d50e + iVar3 * 0x4ef) / (uint)DAT_0019cba6 - 1;
      }
      local_ac = (uint)*(ushort *)(&DAT_0019d50e + iVar3 * 0x4ef);
      local_64 = (uint)DAT_0019cba6;
      if ((iVar9 < (int)(local_ac / local_64)) && (iVar10 < (int)(local_ac / local_64))) {
        bVar1 = true;
        local_ec = iVar9;
        local_e4 = iVar10;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_74 = &stack0xffffff10;
      local_90 = &local_ec;
      local_80 = &stack0xffffff18;
      local_78 = &local_e4;
      local_3c = local_ec;
      local_40 = local_e4;
      local_58 = unaff_EBX - iVar4;
      local_24 = local_e4 - local_ec;
      if ((iVar4 < 0) && (unaff_EBX < 0)) {
        bVar1 = false;
      }
      else {
        iVar9 = iVar4;
        if (iVar4 < 0) {
          if (local_24 != 0) {
            local_3c = local_ec + ((local_24 * 0x100 * -iVar4) / local_58 >> 8);
          }
          iVar9 = 0;
        }
        iVar10 = unaff_EBX;
        if (unaff_EBX < 0) {
          if (local_24 != 0) {
            local_40 = local_e4 + ((-unaff_EBX * local_24 * 0x100) / local_58 >> 8);
          }
          iVar10 = 0;
        }
        if ((iVar9 < 0) || (iVar10 < 0)) {
          bVar1 = false;
        }
        else {
          local_ec = local_3c;
          local_e4 = local_40;
          bVar1 = true;
        }
      }
      if (bVar1) {
        local_c0 = &stack0xffffff10;
        local_88 = &local_ec;
        local_84 = &stack0xffffff18;
        local_70 = &local_e4;
        local_30 = local_ec;
        local_4c = local_e4;
        local_54 = unaff_EBX - iVar4;
        local_14 = local_e4 - local_ec;
        local_cc = (uint)*(ushort *)(&DAT_0019d50c + iVar3 * 0x4ef);
        local_b8 = (uint)DAT_0019cba6;
        if ((iVar4 < (int)(local_cc / local_b8)) || (unaff_EBX < (int)(local_cc / local_b8))) {
          local_7c = (uint)*(ushort *)(&DAT_0019d50c + iVar3 * 0x4ef);
          local_68 = (uint)DAT_0019cba6;
          iVar9 = iVar4;
          if ((int)(local_7c / local_68) <= iVar4) {
            if (local_14 != 0) {
              local_30 = local_ec +
                         ((int)(((local_14 * 0x100) / local_54) *
                               ((local_7c / local_68 - 1) - iVar4)) >> 8);
            }
            iVar9 = (uint)*(ushort *)(&DAT_0019d50c + iVar3 * 0x4ef) / (uint)DAT_0019cba6 - 1;
          }
          local_d4 = (uint)*(ushort *)(&DAT_0019d50c + iVar3 * 0x4ef);
          local_d8 = (uint)DAT_0019cba6;
          iVar10 = unaff_EBX;
          if ((int)(local_d4 / local_d8) <= unaff_EBX) {
            if (local_14 != 0) {
              local_4c = local_e4 +
                         ((int)(((local_14 * 0x100) / local_54) *
                               ((local_d4 / local_d8 - 1) - unaff_EBX)) >> 8);
            }
            iVar10 = (uint)*(ushort *)(&DAT_0019d50c + iVar3 * 0x4ef) / (uint)DAT_0019cba6 - 1;
          }
          local_8c = (uint)*(ushort *)(&DAT_0019d50c + iVar3 * 0x4ef);
          local_b0 = (uint)DAT_0019cba6;
          if ((iVar9 < (int)(local_8c / local_b0)) && (iVar10 < (int)(local_8c / local_b0))) {
            local_ec = local_30;
            local_e4 = local_4c;
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
        if ((bVar1) && ((iVar4 != unaff_EBX || (local_ec != local_e4)))) {
          iVar3 = iVar4 * 0x100 + 0x80;
          local_ec = local_ec * 0x100 + 0x80;
          iVar4 = unaff_EBX * 0x100 + 0x80;
          local_e4 = local_e4 * 0x100 + 0x80;
          uVar6 = local_e4 - local_ec;
          uVar7 = iVar4 - iVar3;
          local_2c = uVar2;
          if (iVar3 == iVar4) {
            iVar5 = 0x100;
            iVar12 = 0;
          }
          else if (local_ec == local_e4) {
            iVar12 = 0x100;
            iVar5 = 0;
          }
          else if (uVar7 == uVar6) {
            iVar12 = 0x100;
            iVar5 = 0x100;
          }
          else if (uVar7 == -uVar6) {
            iVar12 = 0x100;
            iVar5 = -0x100;
          }
          else {
            uVar2 = (int)uVar7 >> 0x1f;
            local_e0 = (uVar7 ^ uVar2) - uVar2;
            uVar8 = (int)uVar6 >> 0x1f;
            if ((int)((uVar6 ^ uVar8) - uVar8) < local_e0) {
              iVar5 = (int)(uVar6 * 0x100) / (int)uVar7;
              iVar12 = 0x100;
            }
            else {
              local_e0 = (uVar7 ^ uVar2) - uVar2;
              if (local_e0 < (int)((uVar6 ^ uVar8) - uVar8)) {
                iVar12 = (int)(uVar7 * 0x100) / (int)uVar6;
                iVar5 = 0x100;
              }
            }
          }
          for (; ((iVar12 == 0x100 && (iVar3 <= iVar4)) ||
                 ((iVar5 == 0x100 && (local_ec <= local_e4)))); local_ec = local_ec + iVar5) {
            FUN_000f5390();
            iVar3 = iVar3 + iVar12;
          }
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0915dc (Ghidra: FUN_000915dc)
 * Prototype: void sub_0915dc(undefined1 param_1);
 * Address  : 0x915dc (Size: 109 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x9ff84, 0xa6504
 * Callees  : 1 -> 0x90c14
 ******************************************************************************/
void FUN_000915dc(undefined1 param_1)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  if (((((-1 < in_EAX) || (-1 < unaff_EBX)) && ((-1 < in_EDX || (-1 < in_ECX)))) &&
      ((in_EAX < (int)(uint)*(ushort *)(&DAT_0019d50c + (DAT_002f10ce >> 0x18) * 0x4ef) ||
       (unaff_EBX < (int)(uint)*(ushort *)(&DAT_0019d50c + (DAT_002f10ce >> 0x18) * 0x4ef))))) &&
     ((in_EDX < (int)(uint)*(ushort *)(&DAT_0019d50c + (DAT_002f10ce >> 0x18) * 0x4ef) ||
      (in_ECX < (int)(uint)*(ushort *)(&DAT_0019d50c + (DAT_002f10ce >> 0x18) * 0x4ef))))) {
    FUN_00090c14(param_1);
  }
  return;
}

/******************************************************************************
 * Function : sub_09164c (Ghidra: FUN_0009164c)
 * Prototype: void sub_09164c(void);
 * Address  : 0x9164c (Size: 4978 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009164c(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int in_EDX;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  undefined4 local_358;
  undefined4 local_354;
  undefined2 local_350;
  int local_348;
  int local_344;
  int local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined2 local_334;
  int local_32c;
  int local_328;
  int local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined2 local_318;
  int local_310;
  int local_30c;
  int local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined2 local_2fc;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined2 local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined2 local_2c4;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined2 local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined2 local_28c;
  int local_284;
  int local_280;
  int local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined2 local_270;
  int local_268;
  int local_264;
  int local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined2 local_254;
  int local_24c;
  int local_248;
  int local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  int local_230;
  int local_22c;
  int local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined2 local_21c;
  int local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined2 local_1e4;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined2 local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined2 local_1ac;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  int local_188;
  int local_184;
  int local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined2 local_174;
  int local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  int local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  int local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  
  iVar7 = _DAT_00387e0b;
  iVar4 = _DAT_00387e07;
  bVar11 = 0;
  iVar5 = _DAT_00387e07 - in_EAX;
  local_50 = in_EDX - _DAT_00387e0b;
  iVar6 = in_EDX - DAT_00387e13;
  local_b4 = DAT_00387e0f - in_EAX;
  iVar3 = DAT_00387e17 * 0x100 - unaff_EBX;
  if (DAT_00387e00 == '\0') {
    local_ac = 0x500;
  }
  else {
    local_ac = 0x200;
  }
  local_ac = local_ac - unaff_EBX;
  if (local_ac <= iVar3) {
    iVar3 = local_ac;
  }
  local_b8 = iVar5;
  if (local_b4 < iVar5) {
    _DAT_00387e07 = DAT_00387e0f;
    DAT_00387e0f = iVar4;
    local_b8 = local_b4;
    local_b4 = iVar5;
  }
  local_b0 = iVar6;
  if (iVar6 < local_50) {
    _DAT_00387e0b = DAT_00387e13;
    DAT_00387e13 = iVar7;
    local_b0 = local_50;
    local_50 = iVar6;
  }
  local_a8 = local_b4;
  local_a4 = local_50;
  local_174 = 0;
  local_16c = local_b8;
  local_164 = local_50;
  iVar7 = local_b8 + 0x100;
  local_168 = iVar3;
  local_3c = iVar3;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,extraout_ECX);
  iVar4 = iVar7 - extraout_ECX;
  bVar10 = iVar7 == extraout_ECX;
  while (iVar6 = local_b0, iVar5 = local_b4, bVar10 || bVar12 != iVar4 < 0) {
    local_148 = local_a4;
    local_158 = 0;
    local_150 = iVar7;
    local_14c = iVar3;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_1c = DAT_00387e02._3_1_;
    iVar4 = (local_164 + local_148) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar5 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_17c;
      DAT_00387d20[3] = local_178;
      DAT_00387d20[4] = local_160;
      DAT_00387d20[5] = local_15c;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_160;
    puVar9 = &local_17c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    iVar7 = iVar7 + 0x100;
    bVar12 = SBORROW4(iVar7,local_a8);
    iVar4 = iVar7 - local_a8;
    bVar10 = iVar7 == local_a8;
  }
  local_a0 = local_b4;
  local_110 = local_b0;
  local_9c = local_3c;
  local_120 = 0;
  local_118 = local_b8;
  local_114 = local_3c;
  iVar7 = local_b8 + 0x100;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,iVar5);
  iVar4 = iVar7 - iVar5;
  bVar10 = iVar7 == iVar5;
  while (iVar3 = local_ac, bVar10 || bVar12 != iVar4 < 0) {
    local_12c = iVar6;
    local_130 = local_9c;
    local_13c = 0;
    local_134 = iVar7;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_34 = DAT_00387e02._3_1_;
    iVar4 = (local_110 + local_12c) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar3 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar3 * -0x10) - (uint)(iVar3 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_128;
      DAT_00387d20[3] = local_124;
      DAT_00387d20[4] = local_144;
      DAT_00387d20[5] = local_140;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_144;
    puVar9 = &local_128;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    iVar7 = iVar7 + 0x100;
    bVar12 = SBORROW4(iVar7,local_a0);
    iVar4 = iVar7 - local_a0;
    bVar10 = iVar7 == local_a0;
  }
  local_98 = local_b4;
  local_94 = local_50;
  local_29c = local_ac;
  local_2a0 = local_b8;
  local_2a8 = 0;
  local_298 = local_50;
  iVar7 = local_b8 + 0x100;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,local_b4);
  iVar4 = iVar7 - local_b4;
  bVar10 = iVar7 == local_b4;
  while (iVar5 = local_ac, bVar10 || bVar12 != iVar4 < 0) {
    local_1d4 = local_94;
    local_1e4 = 0;
    local_1d8 = iVar3;
    local_1dc = iVar7;
    (*DAT_00388300)();
    iVar5 = local_98;
    uVar2 = DAT_00387e02._3_1_;
    local_38 = DAT_00387e02._3_1_;
    iVar4 = (local_298 + local_1d4) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar6 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar6 * -0x10) - (uint)(iVar6 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_2b0;
      DAT_00387d20[3] = local_2ac;
      DAT_00387d20[4] = local_1ec;
      DAT_00387d20[5] = local_1e8;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    iVar7 = iVar7 + 0x100;
    puVar8 = &local_1ec;
    puVar9 = &local_2b0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    bVar12 = SBORROW4(iVar7,iVar5);
    iVar4 = iVar7 - iVar5;
    bVar10 = iVar7 == iVar5;
  }
  local_90 = local_b4;
  local_8c = local_b0;
  local_2d8 = local_b8;
  local_2d0 = local_b0;
  local_2d4 = local_ac;
  local_2e0 = 0;
  iVar7 = local_b8 + 0x100;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,local_b4);
  iVar4 = iVar7 - local_b4;
  bVar10 = iVar7 == local_b4;
  while (iVar3 = local_b8, bVar10 || bVar12 != iVar4 < 0) {
    local_248 = iVar5;
    local_244 = local_8c;
    local_254 = 0;
    local_24c = iVar7;
    (*DAT_00388300)();
    iVar3 = local_90;
    uVar2 = DAT_00387e02._3_1_;
    local_28 = DAT_00387e02._3_1_;
    iVar4 = (local_2d0 + local_244) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar6 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar6 * -0x10) - (uint)(iVar6 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_2e8;
      DAT_00387d20[3] = local_2e4;
      DAT_00387d20[4] = local_25c;
      DAT_00387d20[5] = local_258;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    iVar7 = iVar7 + 0x100;
    puVar8 = &local_25c;
    puVar9 = &local_2e8;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    bVar12 = SBORROW4(iVar7,iVar3);
    iVar4 = iVar7 - iVar3;
    bVar10 = iVar7 == iVar3;
  }
  local_88 = local_b0;
  local_fc = local_b8;
  local_84 = local_3c;
  local_104 = 0;
  local_f4 = local_50;
  local_f8 = local_3c;
  iVar7 = local_50 + 0x100;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,local_b0);
  iVar4 = iVar7 - local_b0;
  bVar10 = iVar7 == local_b0;
  while (bVar10 || bVar12 != iVar4 < 0) {
    local_2f4 = iVar3;
    local_2f0 = local_84;
    local_2fc = 0;
    local_2ec = iVar7;
    (*DAT_00388300)();
    iVar5 = local_88;
    uVar2 = DAT_00387e02._3_1_;
    local_30 = DAT_00387e02._3_1_;
    iVar4 = (local_f4 + local_2ec) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar6 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar6 * -0x10) - (uint)(iVar6 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_10c;
      DAT_00387d20[3] = local_108;
      DAT_00387d20[4] = local_304;
      DAT_00387d20[5] = local_300;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    iVar7 = iVar7 + 0x100;
    puVar8 = &local_304;
    puVar9 = &local_10c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    bVar12 = SBORROW4(iVar7,iVar5);
    iVar4 = iVar7 - iVar5;
    bVar10 = iVar7 == iVar5;
  }
  local_80 = local_b4;
  local_7c = local_b0;
  local_78 = local_3c;
  local_e0 = local_b4;
  local_d8 = local_50;
  local_e8 = 0;
  local_dc = local_3c;
  iVar7 = local_50 + 0x100;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,local_b0);
  iVar4 = iVar7 - local_b0;
  bVar10 = iVar7 == local_b0;
  while (iVar3 = local_50, iVar5 = local_b0, bVar10 || bVar12 != iVar4 < 0) {
    local_310 = local_80;
    local_318 = 0;
    local_30c = local_78;
    local_308 = iVar7;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    iVar4 = (local_d8 + local_308) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar3 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar3 * -0x10) - (uint)(iVar3 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_f0;
      DAT_00387d20[3] = local_ec;
      DAT_00387d20[4] = local_320;
      DAT_00387d20[5] = local_31c;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_320;
    puVar9 = &local_f0;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    iVar7 = iVar7 + 0x100;
    bVar12 = SBORROW4(iVar7,local_7c);
    iVar4 = iVar7 - local_7c;
    bVar10 = iVar7 == local_7c;
  }
  local_74 = local_b8;
  local_70 = local_ac;
  local_214 = local_b8;
  local_20c = local_50;
  local_210 = local_ac;
  local_21c = 0;
  (*DAT_00388300)();
  while (iVar3 = iVar3 + 0x100, iVar3 <= iVar5) {
    local_1a4 = local_74;
    local_1a0 = local_70;
    local_1ac = 0;
    local_19c = iVar3;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_2c = DAT_00387e02._3_1_;
    iVar4 = (local_20c + local_19c) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar7 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_224;
      DAT_00387d20[3] = local_220;
      DAT_00387d20[4] = local_1b4;
      DAT_00387d20[5] = local_1b0;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_1b4;
    puVar9 = &local_224;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  local_6c = local_b4;
  local_68 = local_b0;
  local_64 = local_ac;
  local_284 = local_b4;
  local_28c = 0;
  local_27c = local_50;
  local_280 = local_ac;
  iVar7 = local_50 + 0x100;
  (*DAT_00388300)();
  bVar12 = SBORROW4(iVar7,local_b0);
  iVar4 = iVar7 - local_b0;
  bVar10 = iVar7 == local_b0;
  while (iVar3 = local_3c, iVar5 = local_ac, bVar10 || bVar12 != iVar4 < 0) {
    local_1c0 = local_6c;
    local_1bc = local_64;
    local_1c8 = 0;
    local_1b8 = iVar7;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    iVar4 = (local_27c + local_1b8) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar3 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar3 * -0x10) - (uint)(iVar3 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_294;
      DAT_00387d20[3] = local_290;
      DAT_00387d20[4] = local_1d0;
      DAT_00387d20[5] = local_1cc;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_1d0;
    puVar9 = &local_294;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    iVar7 = iVar7 + 0x100;
    bVar12 = SBORROW4(iVar7,local_68);
    iVar4 = iVar7 - local_68;
    bVar10 = iVar7 == local_68;
  }
  local_60 = local_b8;
  local_5c = local_50;
  local_32c = local_b8;
  local_324 = local_50;
  local_334 = 0;
  local_328 = local_3c;
  (*DAT_00388300)();
  while (iVar4 = local_3c, iVar7 = local_ac, iVar3 = iVar3 + 0x100, iVar3 <= iVar5) {
    local_230 = local_60;
    local_238 = 0;
    local_228 = local_5c;
    local_22c = iVar3;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_18 = DAT_00387e02._3_1_;
    iVar4 = (local_324 + local_228) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar7 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_33c;
      DAT_00387d20[3] = local_338;
      DAT_00387d20[4] = local_240;
      DAT_00387d20[5] = local_23c;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_240;
    puVar9 = &local_33c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  local_58 = local_b4;
  local_54 = local_50;
  local_348 = local_b4;
  local_340 = local_50;
  local_344 = local_3c;
  local_350 = 0;
  (*DAT_00388300)();
  while (iVar3 = local_3c, iVar5 = local_ac, iVar4 = iVar4 + 0x100, iVar4 <= iVar7) {
    local_2bc = local_58;
    local_2b4 = local_54;
    local_2c4 = 0;
    local_2b8 = iVar4;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_24 = DAT_00387e02._3_1_;
    iVar3 = (local_340 + local_2b4) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar5 = iVar3 >> 0x1f;
      iVar3 = ((int)((iVar3 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4) + -2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x2be < iVar3) {
        iVar3 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar3];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar3] = DAT_00387d20;
      DAT_00387d20[2] = local_358;
      DAT_00387d20[3] = local_354;
      DAT_00387d20[4] = local_2cc;
      DAT_00387d20[5] = local_2c8;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_2cc;
    puVar9 = &local_358;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  local_4c = local_b4;
  local_48 = local_b0;
  local_188 = local_b4;
  local_190 = 0;
  local_180 = local_b0;
  local_184 = local_3c;
  (*DAT_00388300)();
  while (iVar4 = local_3c, iVar7 = local_ac, iVar3 = iVar3 + 0x100, iVar3 <= iVar5) {
    local_268 = local_4c;
    local_260 = local_48;
    local_270 = 0;
    local_264 = iVar3;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_20 = DAT_00387e02._3_1_;
    iVar4 = (local_180 + local_260) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar7 = iVar4 >> 0x1f;
      iVar4 = ((int)((iVar4 + iVar7 * -0x10) - (uint)(iVar7 << 3 < 0)) >> 4) + -2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x2be < iVar4) {
        iVar4 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      DAT_00387d20[2] = local_198;
      DAT_00387d20[3] = local_194;
      DAT_00387d20[4] = local_278;
      DAT_00387d20[5] = local_274;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_278;
    puVar9 = &local_198;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  local_44 = local_b8;
  local_40 = local_b0;
  local_1f8 = local_b8;
  local_1f0 = local_b0;
  local_200 = 0;
  local_1f4 = local_3c;
  (*DAT_00388300)();
  while (iVar4 = iVar4 + 0x100, iVar4 <= iVar7) {
    local_c4 = local_44;
    local_bc = local_40;
    local_cc = 0;
    local_c0 = iVar4;
    (*DAT_00388300)();
    uVar2 = DAT_00387e02._3_1_;
    local_14 = DAT_00387e02._3_1_;
    iVar3 = (local_1f0 + local_bc) / 2;
    if (DAT_00387d20 < DAT_0033317f) {
      iVar5 = iVar3 >> 0x1f;
      iVar3 = ((int)((iVar3 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4) + -2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x2be < iVar3) {
        iVar3 = 0x2be;
      }
      uVar1 = (&DAT_00387220)[iVar3];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
      *DAT_00387d20 = uVar1;
      (&DAT_00387220)[iVar3] = DAT_00387d20;
      DAT_00387d20[2] = local_208;
      DAT_00387d20[3] = local_204;
      DAT_00387d20[4] = local_d4;
      DAT_00387d20[5] = local_d0;
      puVar8 = DAT_00387d20 + 6;
      DAT_00387d20 = DAT_00387d20 + 7;
      *(undefined1 *)puVar8 = uVar2;
    }
    puVar8 = &local_d4;
    puVar9 = &local_208;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0929c0 (Ghidra: FUN_000929c0)
 * Prototype: void sub_0929c0(void);
 * Address  : 0x929c0 (Size: 541 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 1 -> 0x2d32d
 ******************************************************************************/
void FUN_000929c0(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort local_1c;
  undefined4 *puVar6;
  
  uVar9 = 0;
  iVar10 = 0;
  do {
    uVar8 = 1;
    iVar3 = 0;
    do {
      iVar4 = iVar3;
      if ((uVar9 & uVar8) == 0) break;
      iVar3 = iVar3 + 1;
      uVar8 = uVar8 * 2;
      iVar4 = iVar3;
    } while (iVar3 < 8);
    for (; (iVar3 < 8 && ((uVar9 & uVar8) == 0)); uVar8 = uVar8 * 2) {
      iVar3 = iVar3 + 1;
    }
    iVar11 = 0;
    iVar12 = 0;
    iVar1 = iVar3;
    if (iVar3 < 8) {
      for (; (iVar11 = iVar1, iVar12 = iVar3, iVar11 < 8 && ((uVar9 & uVar8) != 0));
          uVar8 = uVar8 * 2) {
        iVar1 = iVar11 + 1;
      }
    }
    uVar9 = uVar9 + 1;
    *(int *)((int)&DAT_00377770 + iVar10) = iVar12;
    *(int *)((int)&DAT_00377b70 + iVar10) = iVar11;
    *(int *)((int)&DAT_00377f70 + iVar10) = iVar4;
    iVar10 = iVar10 + 4;
    if (0xff < (int)uVar9) {
      iVar10 = 0;
      puVar7 = &DAT_00378774;
      do {
        puVar5 = &DAT_00378374 + iVar10 * 0x100;
        do {
          puVar6 = puVar5 + 8;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5 = puVar6;
        } while (puVar6 != puVar7);
        iVar10 = iVar10 + 1;
        puVar7 = puVar7 + 0x100;
      } while (iVar10 < 4);
      local_1c = 0;
      iVar10 = 0;
      do {
        uVar2 = local_1c * 0x24a1 + 0x24df;
        (&DAT_00378774)[iVar10 * 8] = (uint)(uVar2 % 0xffa7) % 0x7f - 0x3f;
        uVar2 = uVar2 * 0x24a1 + 0x24df;
        (&DAT_00378778)[iVar10 * 8] = (int)((uint)(uVar2 % 0xffa7) % 0x7f - 0x3f) / 3;
        uVar2 = uVar2 * 0x24a1 + 0x24df;
        (&DAT_0037877c)[iVar10 * 8] = (uint)(uVar2 % 0xffa7) % 0x7f - 0x3f;
        uVar2 = uVar2 * 0x24a1 + 0x24df;
        (&DAT_00378780)[iVar10 * 8] = (uint)(uVar2 % 0xffa7) % 0x800 - 0x400;
        uVar2 = uVar2 * 0x24a1 + 0x24df;
        (&DAT_00378b74)[iVar10 * 8] = (uint)(uVar2 % 0xffa7) % 0x7f - 0x3f;
        local_1c = uVar2 * 0x24a1 + 0x24df;
        iVar3 = iVar10 + 1;
        (&DAT_00378b7c)[iVar10 * 8] = (uint)(local_1c % 0xffa7) % 0x7f - 0x3f;
        iVar10 = iVar3;
      } while (iVar3 < 0x20);
      FUN_0002d32d();
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_092be0 (Ghidra: FUN_00092be0)
 * Prototype: void sub_092be0(void);
 * Address  : 0x92be0 (Size: 301 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00092be0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = 0;
  puVar4 = &DAT_00378b74;
  do {
    iVar2 = (&DAT_001927e0)
            [(((int)uVar1 >> 2) + (uVar1 & 3) * ((int)uVar1 >> 2)) * 0x200 + DAT_00378370 & 0x7ff];
    puVar4[1] = iVar2 >> 0xb;
    uVar1 = uVar1 + 1;
    puVar4[3] = iVar2 >> 6;
    puVar4 = puVar4 + 8;
  } while ((int)uVar1 < 0x10);
  DAT_00378370 = DAT_00378370 + 0x2e & 0x7ff;
  iVar2 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
          (int)(uint)DAT_0019cba6;
  iVar8 = DAT_00387d58 * iVar2;
  iVar9 = DAT_00387d60 * iVar2;
  iVar5 = DAT_00387d68 * iVar2;
  iVar6 = DAT_00387d70 * iVar2;
  iVar2 = iVar2 * DAT_00387d6c;
  iVar7 = 0;
  piVar3 = &DAT_00378774;
  do {
    piVar3[4] = (*piVar3 * (iVar8 >> 0xe) >> 8) + (piVar3[2] * (iVar9 >> 0xe) >> 8);
    iVar7 = iVar7 + 1;
    piVar3[5] = (-((iVar6 >> 0xe) * piVar3[2] >> 8) - ((iVar5 >> 0xe) * *piVar3 >> 8)) -
                ((iVar2 >> 0xe) * piVar3[1] >> 8);
    piVar3 = piVar3 + 8;
  } while (iVar7 < 0x40);
  return;
}

/******************************************************************************
 * Function : sub_092d10 (Ghidra: FUN_00092d10)
 * Prototype: void sub_092d10(void);
 * Address  : 0x92d10 (Size: 1037 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00092d10(void)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint uVar8;
  int in_EDX;
  int iVar9;
  int *unaff_EBX;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint local_3c;
  uint local_38;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_18;
  
  if ((-1 < in_EDX) && (in_EDX < 0xff)) {
    iVar7 = unaff_EBX[2];
    if (*unaff_EBX < unaff_EBX[2]) {
      iVar7 = *unaff_EBX;
    }
    iVar10 = unaff_EBX[3];
    if (iVar10 < unaff_EBX[1]) {
      iVar10 = unaff_EBX[1];
    }
    if (in_EAX + iVar7 < 1) {
      iVar7 = 1 - in_EAX;
    }
    if (0xff < in_EAX + iVar10) {
      iVar10 = 0xff - in_EAX;
    }
    DAT_00387d98 = DAT_00387d98 + iVar7 * 0x100;
    local_20 = in_EAX + iVar7;
    local_24 = DAT_0038721c + (iVar7 + 0x1f) * 0x1c0;
    iVar9 = in_EDX + 1;
    uVar3 = *(ushort *)((int)&DAT_0019e973 + DAT_002e6f23 * 0x18 + 3) + 0x10000;
    iVar11 = (local_20 + iVar9 * 0x100) * 5;
    local_18 = (int)&DAT_00279203 + iVar11;
    local_3c = uVar3;
    if (((uint)DAT_00379395 & *(uint *)(&DAT_002791ff + iVar11) >> 0x1c) != 0) {
      local_3c = (uint)*(ushort *)
                        ((int)&DAT_0019e973 + (*(uint *)(&DAT_002791ff + iVar11) & 0x7ff) * 0x18 + 3
                        );
    }
    uVar4 = uVar3;
    if (((uint)DAT_00379395 & *(uint *)(&DAT_00278cff + iVar11) >> 0x1c) != 0) {
      uVar4 = (uint)*(ushort *)
                     ((int)&DAT_0019e973 + (*(uint *)(&DAT_00278cff + iVar11) & 0x7ff) * 0x18 + 3);
    }
    local_38 = local_3c | uVar4;
    local_2c = 0;
    local_3c = local_3c & uVar4;
    uVar4 = iVar9 * 4 & 0xf;
    iVar7 = (iVar10 + 1) - iVar7;
    local_28 = local_20 * 2 + iVar9 * 0x200;
    if (0 < iVar7) {
      do {
        uVar12 = uVar3;
        if ((*(uint *)(local_18 + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
          uVar12 = (uint)*(ushort *)
                          ((int)&DAT_0019e973 + (*(uint *)(local_18 + 1) & 0x7ff) * 0x18 + 3);
        }
        uVar6 = uVar3;
        if ((*(uint *)(local_18 + -0x4ff) >> 0x1c & (uint)DAT_00379395) != 0) {
          uVar6 = (uint)*(ushort *)
                         ((int)&DAT_0019e973 + (*(uint *)(local_18 + -0x4ff) & 0x7ff) * 0x18 + 3);
        }
        local_38 = local_38 | uVar12 | uVar6;
        if ((local_38 & 0x10000) == 0) {
          uVar8 = (uint)*(ushort *)((int)&DAT_001e3203 + local_28);
        }
        else {
          uVar8 = 0;
        }
        uVar5 = (uint)(byte)(&DAT_00191dac)[local_38 & 0xff];
        uVar1 = (&DAT_00377f70)[local_3c & uVar6 & uVar12 & 0xff];
        iVar11 = uVar1 * 0x1c + local_24;
        iVar9 = uVar1 * 0x100 - DAT_00387da0;
        piVar14 = &DAT_00378374 +
                  ((*(uint *)(local_18 + 1) & 0xffffff) >> 0x16) * 0x100 +
                  ((local_20 & 3) + uVar4) * 8;
        iVar10 = uVar1 - uVar5;
        uVar13 = uVar1;
        while (uVar13 == uVar5 || SBORROW4(uVar13,uVar5) != iVar10 < 0) {
          *(int *)(iVar11 + 0x10) = DAT_00387d98 + *piVar14;
          *(int *)(iVar11 + 0x14) = iVar9 + piVar14[1];
          iVar2 = DAT_00387d9c;
          iVar10 = piVar14[2];
          *(undefined2 *)(iVar11 + 8) = 0;
          *(int *)(iVar11 + 0x18) = iVar2 + iVar10;
          iVar10 = uVar8 + piVar14[3];
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          if (0x3f00 < iVar10) {
            iVar10 = 0x3f00;
          }
          piVar14 = piVar14 + 0x10;
          iVar9 = iVar9 + 0x100;
          uVar13 = uVar13 + 1;
          *(short *)(iVar11 + 10) = (short)iVar10;
          (*DAT_00388300)();
          iVar11 = iVar11 + 0x1c;
          uVar8 = extraout_ECX;
          iVar10 = uVar13 - uVar5;
        }
        iVar10 = ((*(uint *)(local_18 + 1) & 0xfffffff) >> 0x18) * 0x100 - DAT_00387da0;
        piVar14 = piVar14 + -0x10;
        if ((*(uint *)(local_18 + 1) & 0xc00000) == 0x800000) {
          piVar14 = &DAT_00378774 + ((local_20 & 3) + uVar4) * 8 + (uVar5 - uVar1) * 0x10;
        }
        *(int *)(local_24 + 0xf0) = DAT_00387d98 + *piVar14;
        local_28 = local_28 + 2;
        *(int *)(local_24 + 0xf4) = iVar10 + piVar14[1];
        iVar11 = DAT_00387d9c;
        iVar10 = piVar14[2];
        *(undefined2 *)(local_24 + 0xe8) = 0;
        *(short *)(local_24 + 0xea) = (short)uVar8;
        local_2c = local_2c + 1;
        *(int *)(local_24 + 0xf8) = iVar11 + iVar10;
        (*DAT_00388300)();
        local_18 = extraout_ECX_00 + 5;
        local_20 = local_20 + 1;
        local_24 = local_24 + 0x1c0;
        DAT_00387d98 = DAT_00387d98 + 0x100;
        local_3c = uVar6 & uVar12;
        local_38 = uVar12 | uVar6;
      } while (local_2c < iVar7);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_093120 (Ghidra: FUN_00093120)
 * Prototype: void sub_093120(void);
 * Address  : 0x93120 (Size: 1975 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093120(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  int in_EDX;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *unaff_EBX;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  int local_8c;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_68;
  uint local_44;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_18;
  int local_14;
  
  if ((-1 < in_EDX) && (in_EDX < 0xff)) {
    local_2c = unaff_EBX[2];
    if (*unaff_EBX < local_2c) {
      local_2c = *unaff_EBX;
    }
    iVar19 = unaff_EBX[3];
    if (iVar19 < unaff_EBX[1]) {
      iVar19 = unaff_EBX[1];
    }
    bVar3 = in_EAX + local_2c < 1;
    if (bVar3) {
      local_2c = 1 - in_EAX;
    }
    bVar4 = 0xff < in_EAX + iVar19;
    if (bVar4) {
      iVar19 = 0xff - in_EAX;
    }
    if (local_2c <= iVar19) {
      bVar21 = in_EDX == 0;
      bVar22 = in_EDX == 0xfe;
      DAT_00387d98 = DAT_00387d98 + local_2c * 0x100;
      local_30 = in_EAX + local_2c;
      local_38 = DAT_0038721c + (local_2c + 0x1f) * 0x1c0;
      iVar10 = in_EDX + 1;
      uVar5 = *(ushort *)((int)&DAT_0019e973 + DAT_002e6f23 * 0x18 + 3) + 0x10000;
      iVar6 = (local_30 + iVar10 * 0x100) * 5;
      local_28 = (int)&DAT_00279203 + iVar6;
      uVar16 = uVar5;
      if (((uint)DAT_00379395 & *(uint *)(&DAT_002791ff + iVar6) >> 0x1c) != 0) {
        uVar16 = (uint)*(ushort *)
                        ((int)&DAT_0019e973 + (*(uint *)(&DAT_002791ff + iVar6) & 0x7ff) * 0x18 + 3)
        ;
      }
      local_68 = uVar5;
      if (((uint)DAT_00379395 & *(uint *)(&DAT_00278cff + iVar6) >> 0x1c) != 0) {
        local_68 = (uint)*(ushort *)
                          ((int)&DAT_0019e973 +
                          (*(uint *)(&DAT_00278cff + iVar6) & 0x7ff) * 0x18 + 3);
      }
      if ((bVar21 || (bVar4 || bVar3)) || bVar22) {
        if ((bVar3) || (bVar21)) {
          uVar16 = 0;
        }
        if ((bVar3) || (bVar22)) {
          local_68 = 0;
        }
      }
      iVar17 = -DAT_00387da0;
      iVar6 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)DAT_0019cba6;
      iVar7 = DAT_00387d98 * iVar17;
      local_8c = (DAT_00191d34 * 0x100 +
                 (DAT_00387d9c * DAT_00387d80 +
                  (((DAT_00387d78 + iVar17) * (DAT_00387d7c + DAT_00387d98) - _DAT_00387d84) - iVar7
                  ) >> 0xe) + DAT_00387d54) / 2;
      if (local_8c < 0x20) {
        local_8c = 0;
      }
      else if (0x2bdf < local_8c) {
        local_8c = 0x2be0;
      }
      local_18 = (DAT_00387d28 +
                 ((((((DAT_00387d58 + iVar17) * (DAT_00387d5c + DAT_00387d98) - _DAT_00387d64) -
                    iVar7) + DAT_00387d9c * DAT_00387d60 >> 0xe) + DAT_00387d4c) * iVar6 >> 0x10)) *
                 0x100;
      local_80 = (DAT_00387d2c -
                 (iVar6 * (((((DAT_00387d68 + iVar17) * (DAT_00387d6c + DAT_00387d98) -
                             _DAT_00387d74) - iVar7) + DAT_00387d9c * DAT_00387d70 >> 0xe) +
                          DAT_00387d50) >> 0x10)) * 0x100;
      local_34 = local_8c;
      iVar6 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)DAT_0019cba6;
      iVar12 = DAT_00387d58 * iVar6;
      iVar13 = -DAT_00387d68;
      iVar7 = -(iVar6 * DAT_00387d6c) >> 0xe;
      iVar14 = DAT_00387d78 >> 7;
      iVar17 = DAT_00387d7c >> 7;
      local_2c = (iVar19 + 1) - local_2c;
      if (local_2c != 0) {
        local_7c = local_30 * 2 + iVar10 * 0x200;
        local_3c = local_30 + iVar10 * 0x11;
        local_84 = local_68 & uVar16;
        local_44 = local_68 | uVar16;
        do {
          uVar16 = uVar5;
          if ((*(uint *)(local_28 + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
            uVar16 = (uint)*(ushort *)
                            ((int)&DAT_0019e973 + (*(uint *)(local_28 + 1) & 0x7ff) * 0x18 + 3);
          }
          uVar8 = uVar5;
          if ((*(uint *)(local_28 + -0x4ff) >> 0x1c & (uint)DAT_00379395) != 0) {
            uVar8 = (uint)*(ushort *)
                           ((int)&DAT_0019e973 + (*(uint *)(local_28 + -0x4ff) & 0x7ff) * 0x18 + 3);
          }
          if ((bVar21 || (bVar4 || bVar3)) || bVar22) {
            if ((bVar4) && (local_2c == 1)) {
              uVar16 = 0;
              uVar8 = 0;
            }
            if (bVar21) {
              uVar16 = 0;
            }
            if (bVar22) {
              uVar8 = 0;
            }
          }
          local_44 = local_44 | uVar16 | uVar8;
          bVar1 = (&DAT_00191dac)[local_44 & 0xff];
          local_14 = (&DAT_00377f70)[local_84 & uVar16 & uVar8 & 0xff];
          if ((local_44 & 0x10000) == 0) {
            uVar15 = (uint)*(ushort *)((int)&DAT_001e3203 + local_7c);
          }
          else {
            uVar15 = 0;
          }
          piVar9 = (int *)(local_14 * 0x1c + local_38);
          puVar18 = &DAT_00378374 +
                    ((*(uint *)(local_28 + 1) & 0xffffff) >> 0x16) * 0x100 +
                    ((iVar10 * 4 & 0xfU) + (local_30 & 3)) * 8;
          iVar19 = iVar7 * local_14 + local_80;
          iVar20 = iVar17 * local_14 + local_34;
          if (local_14 <= (int)(uint)bVar1) {
            puVar11 = &DAT_002f10e3 + (local_3c & 0xff) + local_14;
            do {
              *piVar9 = local_18 + puVar18[4] >> 8;
              iVar2 = puVar18[5];
              *(undefined2 *)(piVar9 + 2) = 0;
              piVar9[6] = iVar20;
              piVar9[1] = iVar2 + iVar19 >> 8;
              uVar15 = uVar15 + (*puVar11 & 0xff) * 4 + -0x200;
              if ((int)uVar15 < 0) {
                uVar15 = 0;
              }
              if (0x3e00 < (int)uVar15) {
                uVar15 = 0x3e00;
              }
              *(short *)((int)piVar9 + 10) = (short)uVar15;
              if (piVar9[6] < 0x20) {
                piVar9[6] = 0;
              }
              else if (0x2bdf < piVar9[6]) {
                piVar9[6] = 0x2be0;
              }
              if (*piVar9 < 0) {
                *(byte *)(piVar9 + 2) = *(byte *)(piVar9 + 2) | 8;
              }
              else if (DAT_0018429c <= *piVar9) {
                *(byte *)(piVar9 + 2) = *(byte *)(piVar9 + 2) | 0x10;
              }
              if (piVar9[1] < 0) {
                *(byte *)(piVar9 + 2) = *(byte *)(piVar9 + 2) | 0x20;
              }
              else if (DAT_001842a0 <= piVar9[1]) {
                *(byte *)(piVar9 + 2) = *(byte *)(piVar9 + 2) | 0x40;
              }
              iVar19 = iVar19 + iVar7;
              puVar18 = puVar18 + 0x10;
              iVar20 = iVar20 + iVar17;
              piVar9 = piVar9 + 7;
              local_14 = local_14 + 1;
              puVar11 = puVar11 + 1;
            } while (local_14 <= (int)(uint)bVar1);
          }
          local_7c = local_7c + 2;
          local_3c = local_3c + 1;
          local_30 = local_30 + 1;
          local_38 = local_38 + 0x1c0;
          DAT_00387d98 = DAT_00387d98 + 0x100;
          local_28 = local_28 + 5;
          local_18 = local_18 + (iVar12 >> 0xe);
          local_80 = local_80 + (iVar13 * iVar6 >> 0xe);
          local_34 = local_34 + iVar14;
          local_2c = local_2c + -1;
          local_84 = uVar16 & uVar8;
          local_44 = uVar16 | uVar8;
        } while (local_2c != 0);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0938d8 (Ghidra: FUN_000938d8)
 * Prototype: void sub_0938d8(void);
 * Address  : 0x938d8 (Size: 2051 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000938d8(void)

{
  ushort uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int in_EDX;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *unaff_EBX;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int local_84;
  int local_78;
  int local_74;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_18;
  int *local_14;
  
  if ((-1 < in_EDX) && (in_EDX < 0xff)) {
    local_34 = unaff_EBX[2];
    if (*unaff_EBX < local_34) {
      local_34 = *unaff_EBX;
    }
    iVar17 = unaff_EBX[3];
    if (iVar17 < unaff_EBX[1]) {
      iVar17 = unaff_EBX[1];
    }
    if (in_EAX + local_34 < 1) {
      local_34 = 1 - in_EAX;
    }
    if (0xff < in_EAX + iVar17) {
      iVar17 = 0xff - in_EAX;
    }
    if (local_34 <= iVar17) {
      local_30 = in_EAX + local_34;
      DAT_00387d98 = DAT_00387d98 + local_34 * 0x100;
      local_3c = DAT_0038721c + (local_34 + 0x1f) * 0x1c0;
      iVar7 = in_EDX + 1;
      uVar2 = ((*(ushort *)((int)&DAT_0019e973 + DAT_002e6f23 * 0x18 + 3) & 0xff) & 0xffffff03) +
              0x10000;
      iVar4 = local_30 + iVar7 * 0x100;
      iVar5 = iVar4 * 5;
      local_2c = (int)&DAT_00279203 + iVar5;
      uVar15 = uVar2;
      if (((uint)DAT_00379395 & *(uint *)(&DAT_002791ff + iVar5) >> 0x1c) != 0) {
        iVar3 = (*(uint *)(&DAT_002791ff + iVar5) & 0x7ff) * 0x18;
        uVar1 = *(ushort *)((int)&DAT_0019e973 + iVar3 + 3);
        uVar15 = (uint)uVar1;
        if (((7 < uVar15) && ((*(byte *)((int)&DAT_00279203 + (iVar4 + -1) * 5) & 0x42) == 0)) &&
           ((*(byte *)((int)&DAT_0019e973 + iVar3 + 2) & 0xe) == 0)) {
          uVar15 = uVar1 & 3;
        }
      }
      uVar9 = uVar2;
      if (((uint)DAT_00379395 & *(uint *)(&DAT_00278cff + iVar5) >> 0x1c) != 0) {
        iVar4 = (*(uint *)(&DAT_00278cff + iVar5) & 0x7ff) * 0x18;
        uVar1 = *(ushort *)((int)&DAT_0019e973 + iVar4 + 3);
        uVar9 = (uint)uVar1;
        if (((7 < uVar9) &&
            ((*(byte *)((int)&DAT_00279203 + (iVar7 * 0x100 + local_30 + -0x101) * 5) & 0x42) == 0))
           && ((*(byte *)((int)&DAT_0019e973 + iVar4 + 2) & 0xe) == 0)) {
          uVar9 = uVar1 & 3;
        }
      }
      iVar4 = -DAT_00387da0;
      iVar5 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)DAT_0019cba6;
      iVar3 = DAT_00387d98 * iVar4;
      local_84 = (DAT_00191d34 * 0x100 +
                 (DAT_00387d9c * DAT_00387d80 +
                  (((DAT_00387d78 + iVar4) * (DAT_00387d7c + DAT_00387d98) - _DAT_00387d84) - iVar3)
                 >> 0xe) + DAT_00387d54) / 2;
      if (local_84 < 0x20) {
        local_84 = 0;
      }
      else if (0x2bdf < local_84) {
        local_84 = 0x2be0;
      }
      local_18 = (DAT_00387d28 +
                 ((((((DAT_00387d58 + iVar4) * (DAT_00387d5c + DAT_00387d98) - _DAT_00387d64) -
                    iVar3) + DAT_00387d9c * DAT_00387d60 >> 0xe) + DAT_00387d4c) * iVar5 >> 0x10)) *
                 0x100;
      local_78 = (DAT_00387d2c -
                 (iVar5 * (((((DAT_00387d68 + iVar4) * (DAT_00387d6c + DAT_00387d98) - _DAT_00387d74
                             ) - iVar3) + DAT_00387d9c * DAT_00387d70 >> 0xe) + DAT_00387d50) >>
                 0x10)) * 0x100;
      local_44 = local_84;
      iVar4 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
              (int)(uint)DAT_0019cba6;
      iVar10 = DAT_00387d58 * iVar4;
      iVar11 = -DAT_00387d68;
      iVar5 = -(iVar4 * DAT_00387d6c) >> 0xe;
      iVar12 = DAT_00387d78 >> 7;
      iVar3 = DAT_00387d7c >> 7;
      local_34 = (iVar17 + 1) - local_34;
      if (local_34 != 0) {
        local_38 = local_30 * 5 + iVar7 * 0x500;
        local_48 = local_30 * 5 + -0x500 + iVar7 * 0x500;
        local_40 = iVar7 * 0x11 + local_30;
        local_74 = local_30 * 2 + iVar7 * 0x200;
        local_50 = uVar15 | uVar9;
        local_4c = uVar15 & uVar9;
        do {
          uVar15 = uVar2;
          if ((*(uint *)(local_2c + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
            iVar17 = (*(uint *)(local_2c + 1) & 0x7ff) * 0x18;
            uVar1 = *(ushort *)((int)&DAT_0019e973 + iVar17 + 3);
            uVar15 = (uint)uVar1;
            if (((7 < uVar15) && ((*(byte *)((int)&DAT_00279203 + local_38) & 0x42) == 0)) &&
               ((*(byte *)((int)&DAT_0019e973 + iVar17 + 2) & 0xe) == 0)) {
              uVar15 = uVar1 & 3;
            }
          }
          uVar9 = uVar2;
          if ((*(uint *)(local_2c + -0x4ff) >> 0x1c & (uint)DAT_00379395) != 0) {
            iVar17 = (*(uint *)(local_2c + -0x4ff) & 0x7ff) * 0x18;
            uVar1 = *(ushort *)((int)&DAT_0019e973 + iVar17 + 3);
            uVar9 = (uint)uVar1;
            if (((7 < uVar9) && ((*(byte *)((int)&DAT_00279203 + local_48) & 0x42) == 0)) &&
               ((*(byte *)((int)&DAT_0019e973 + iVar17 + 2) & 0xe) == 0)) {
              uVar9 = uVar1 & 3;
            }
          }
          local_50 = local_50 | uVar15 | uVar9;
          uVar13 = (uint)(byte)(&DAT_00191dac)[local_50 & 0xff];
          uVar19 = (&DAT_00377f70)[local_4c & uVar15 & uVar9 & 0xff];
          if ((local_50 & 0x10000) == 0) {
            uVar14 = (uint)*(ushort *)((int)&DAT_001e3203 + local_74);
          }
          else {
            uVar14 = 0;
          }
          piVar6 = (int *)(uVar19 * 0x1c + local_3c);
          puVar16 = &DAT_00378374 +
                    ((*(uint *)(local_2c + 1) & 0xffffff) >> 0x16) * 0x100 +
                    ((iVar7 * 4 & 0xfU) + (local_30 & 3)) * 8;
          iVar8 = uVar19 * iVar5 + local_78;
          iVar18 = uVar19 * iVar3 + local_44;
          iVar17 = uVar19 - uVar13;
          local_14 = &DAT_002f10e3 + (local_40 & 0xff);
          while (uVar19 == uVar13 || SBORROW4(uVar19,uVar13) != iVar17 < 0) {
            *piVar6 = local_18 + puVar16[4] >> 8;
            piVar6[1] = puVar16[5] + iVar8 >> 8;
            *(undefined2 *)(piVar6 + 2) = 0;
            piVar6[6] = iVar18;
            uVar14 = uVar14 + *local_14;
            if ((int)uVar14 < 0) {
              uVar14 = 0;
            }
            if (0x3f00 < (int)uVar14) {
              uVar14 = 0x3f00;
            }
            *(short *)((int)piVar6 + 10) = (short)uVar14;
            if (piVar6[6] < 0x20) {
              piVar6[6] = 0;
              iVar17 = *piVar6;
              if (-1 < iVar17) {
LAB_00093fff:
                if (DAT_0018429c <= iVar17) {
                  *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 0x10;
                }
                goto LAB_0009400b;
              }
              *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 8;
              iVar17 = piVar6[1];
              if (-1 < iVar17) goto LAB_00094018;
              *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 0x20;
            }
            else {
              if (0x2bdf < piVar6[6]) {
                piVar6[6] = 0x2be0;
              }
              iVar17 = *piVar6;
              if (-1 < iVar17) goto LAB_00093fff;
              *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 8;
LAB_0009400b:
              iVar17 = piVar6[1];
              if (iVar17 < 0) {
                *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 0x20;
              }
              else {
LAB_00094018:
                if (DAT_001842a0 <= iVar17) {
                  *(byte *)(piVar6 + 2) = *(byte *)(piVar6 + 2) | 0x40;
                }
              }
            }
            puVar16 = puVar16 + 0x10;
            iVar8 = iVar8 + iVar5;
            uVar19 = uVar19 + 1;
            iVar18 = iVar18 + iVar3;
            piVar6 = piVar6 + 7;
            local_14 = local_14 + 1;
            iVar17 = uVar19 - uVar13;
          }
          local_38 = local_38 + 5;
          local_48 = local_48 + 5;
          local_74 = local_74 + 2;
          local_40 = local_40 + 1;
          local_30 = local_30 + 1;
          local_3c = local_3c + 0x1c0;
          DAT_00387d98 = DAT_00387d98 + 0x100;
          local_2c = local_2c + 5;
          local_18 = local_18 + (iVar10 >> 0xe);
          local_78 = local_78 + (iVar11 * iVar4 >> 0xe);
          local_44 = local_44 + iVar12;
          local_34 = local_34 + -1;
          local_50 = uVar15 | uVar9;
          local_4c = uVar15 & uVar9;
        } while (local_34 != 0);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0940dc (Ghidra: FUN_000940dc)
 * Prototype: void sub_0940dc(void);
 * Address  : 0x940dc (Size: 316 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000940dc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int *in_EDX;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
          (int)(uint)DAT_0019cba6;
  iVar1 = in_EAX[4];
  iVar2 = in_EAX[5];
  iVar5 = iVar1 * iVar2;
  iVar3 = in_EAX[6];
  in_EAX[4] = (((*in_EDX + iVar2) * (in_EDX[1] + iVar1) - in_EDX[3]) - iVar5) + in_EDX[2] * iVar3 >>
              0xe;
  in_EAX[5] = (((in_EDX[4] + iVar2) * (in_EDX[5] + iVar1) - in_EDX[7]) - iVar5) + in_EDX[6] * iVar3
              >> 0xe;
  in_EAX[6] = in_EDX[10] * iVar3 +
              (((iVar1 + in_EDX[9]) * (iVar2 + in_EDX[8]) - in_EDX[0xb]) - iVar5) >> 0xe;
  *in_EAX = DAT_00387d28 + (in_EAX[4] * iVar4 >> 0x10);
  in_EAX[1] = DAT_00387d2c - (in_EAX[5] * iVar4 >> 0x10);
  if (*in_EAX < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 8;
  }
  else if (DAT_0018429c <= *in_EAX) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x10;
  }
  if (in_EAX[1] < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x20;
  }
  else if (DAT_001842a0 <= in_EAX[1]) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x40;
  }
  *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 4;
  return;
}

/******************************************************************************
 * Function : sub_094218 (Ghidra: FUN_00094218)
 * Prototype: void sub_094218(void);
 * Address  : 0x94218 (Size: 421 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00094218(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *in_EDX;
  int iVar4;
  int iVar5;
  
  iVar2 = in_EAX[4];
  iVar4 = in_EAX[5];
  iVar5 = iVar2 * iVar4;
  iVar3 = in_EAX[6];
  in_EAX[4] = (((*in_EDX + iVar4) * (in_EDX[1] + iVar2) - in_EDX[3]) - iVar5) + in_EDX[2] * iVar3 >>
              0xe;
  in_EAX[5] = (((in_EDX[4] + iVar4) * (in_EDX[5] + iVar2) - in_EDX[7]) - iVar5) + in_EDX[6] * iVar3
              >> 0xe;
  in_EAX[6] = (((iVar4 + in_EDX[8]) * (iVar2 + in_EDX[9]) - in_EDX[0xb]) - iVar5) +
              iVar3 * in_EDX[10] >> 0xe;
  iVar2 = DAT_00387d50;
  in_EAX[4] = in_EAX[4] + DAT_00387d4c;
  iVar4 = DAT_00387d54;
  in_EAX[5] = in_EAX[5] + iVar2;
  iVar2 = DAT_00387d38;
  iVar4 = in_EAX[6] + iVar4;
  in_EAX[6] = iVar4;
  in_EAX[3] = iVar4;
  if (iVar2 < iVar4) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x80;
  }
  if ((in_EAX[6] < 0x20) || (iVar4 < 0x20)) {
    *in_EAX = DAT_00387d28 + in_EAX[4];
    iVar2 = DAT_00387d2c;
    *(ushort *)(in_EAX + 2) = *(ushort *)(in_EAX + 2) | 0x103;
    in_EAX[1] = iVar2 - in_EAX[5];
  }
  else {
    iVar4 = (DAT_00191d30 << 0x10) / iVar4;
    *in_EAX = DAT_00387d28 + (in_EAX[4] * iVar4 >> 0x10);
    in_EAX[1] = DAT_00387d2c - (iVar4 * in_EAX[5] >> 0x10);
    iVar2 = DAT_00387d34;
    if (in_EAX[6] < DAT_00387d30) {
      bVar1 = *(byte *)(in_EAX + 2);
      *(byte *)(in_EAX + 2) = bVar1 | 1;
      if (in_EAX[6] < iVar2) {
        *(byte *)(in_EAX + 2) = bVar1 | 3;
      }
    }
  }
  if (*in_EAX < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 8;
  }
  else if (DAT_0018429c <= *in_EAX) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x10;
  }
  if (in_EAX[1] < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x20;
  }
  else if (DAT_001842a0 <= in_EAX[1]) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x40;
  }
  *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 4;
  return;
}

/******************************************************************************
 * Function : sub_0943c0 (Ghidra: FUN_000943c0)
 * Prototype: void sub_0943c0(void);
 * Address  : 0x943c0 (Size: 468 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000943c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *in_EAX;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *in_EDX;
  uint uVar13;
  
  iVar11 = in_EAX[5] * in_EAX[4];
  iVar10 = in_EDX[4];
  iVar12 = in_EDX[5];
  iVar1 = in_EAX[4];
  iVar2 = in_EDX[7];
  iVar3 = in_EDX[6];
  iVar4 = in_EDX[8];
  iVar5 = in_EAX[4];
  iVar6 = in_EDX[9];
  iVar7 = in_EDX[0xb];
  iVar8 = in_EDX[10];
  uVar9 = (in_EAX[6] * in_EDX[2] +
           (((in_EAX[4] + in_EDX[1]) * (*in_EDX + in_EAX[5]) - in_EDX[3]) - iVar11) >> 0xe) +
          DAT_00387d4c;
  in_EAX[4] = uVar9;
  uVar13 = (in_EAX[6] * iVar3 + (((iVar12 + iVar1) * (iVar10 + in_EAX[5]) - iVar2) - iVar11) >> 0xe)
           + DAT_00387d50;
  iVar12 = (in_EAX[6] * iVar8 + (((iVar6 + iVar5) * (iVar4 + in_EAX[5]) - iVar7) - iVar11) >> 0xe) +
           DAT_00387d54;
  in_EAX[5] = uVar13;
  in_EAX[6] = iVar12;
  iVar10 = DAT_00387d38;
  in_EAX[3] = iVar12 + ((int)(((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f)) +
                             ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f))) >> 2);
  if (iVar10 < iVar12) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x80;
  }
  if (iVar12 < 0x20) {
    *(ushort *)(in_EAX + 2) = *(ushort *)(in_EAX + 2) | 0x103;
    iVar10 = DAT_00387d28 + in_EAX[4] * 8;
    *in_EAX = iVar10;
    if (iVar10 < 0) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 8;
    }
    else if (DAT_0018429c <= iVar10) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x10;
    }
    iVar10 = DAT_00387d2c + in_EAX[5] * -8;
    in_EAX[1] = iVar10;
    if (iVar10 < 0) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x20;
      *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 4;
      return;
    }
    if (DAT_001842a0 <= iVar10) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x40;
    }
  }
  else {
    iVar10 = (DAT_00191d30 << 0x10) / in_EAX[6];
    if ((in_EAX[6] < DAT_00387d30) &&
       (*(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 1, in_EAX[6] < DAT_00387d34)) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 2;
    }
    iVar12 = DAT_00387d28 + (in_EAX[4] * iVar10 >> 0x10);
    *in_EAX = iVar12;
    if (iVar12 < 0) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 8;
    }
    else if (DAT_0018429c <= iVar12) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x10;
    }
    iVar10 = DAT_00387d2c - (iVar10 * in_EAX[5] >> 0x10);
    in_EAX[1] = iVar10;
    if (iVar10 < 0) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x20;
    }
    else if (DAT_001842a0 <= iVar10) {
      *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x40;
      *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 4;
      return;
    }
  }
  *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 4;
  return;
}

/******************************************************************************
 * Function : sub_094594 (Ghidra: FUN_00094594)
 * Prototype: void sub_094594(void);
 * Address  : 0x94594 (Size: 548 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00094594(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EDX;
  int iVar5;
  uint uVar6;
  
  iVar4 = in_EAX[4];
  iVar3 = in_EAX[5];
  iVar2 = in_EAX[6];
  iVar1 = iVar4 * iVar3;
  in_EAX[4] = (((*in_EDX + iVar3) * (in_EDX[1] + iVar4) - in_EDX[3]) - iVar1) + in_EDX[2] * iVar2 >>
              0xe;
  in_EAX[5] = (((in_EDX[4] + iVar3) * (in_EDX[5] + iVar4) - in_EDX[7]) - iVar1) + in_EDX[6] * iVar2
              >> 0xe;
  iVar5 = in_EAX[4] + DAT_00387d4c;
  in_EAX[6] = (((iVar3 + in_EDX[8]) * (iVar4 + in_EDX[9]) - in_EDX[0xb]) - iVar1) +
              iVar2 * in_EDX[10] >> 0xe;
  in_EAX[4] = iVar5;
  iVar4 = DAT_00387d54;
  in_EAX[5] = in_EAX[5] + DAT_00387d50;
  uVar6 = in_EAX[6] + iVar4;
  in_EAX[6] = uVar6;
  iVar4 = DAT_00387d38;
  iVar2 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  uVar6 = in_EAX[4] >> 0x1f;
  iVar3 = (in_EAX[4] ^ uVar6) - uVar6;
  if (iVar3 < iVar2) {
    iVar2 = *(int *)(&DAT_0017a4d0 + ((iVar3 * 0x100) / iVar2) * 8) * iVar2;
  }
  else {
    uVar6 = 0;
    if (iVar3 == 0) goto LAB_000946a0;
    iVar2 = *(int *)(&DAT_0017a4d0 + ((iVar2 * 0x100) / iVar3) * 8) * iVar3;
  }
  uVar6 = iVar2 >> 0xd;
LAB_000946a0:
  iVar3 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  uVar6 = in_EAX[5] >> 0x1f;
  iVar2 = (in_EAX[5] ^ uVar6) - uVar6;
  if (iVar2 < iVar3) {
    iVar3 = *(int *)(&DAT_0017a4d0 + ((iVar2 * 0x100) / iVar3) * 8) * iVar3 >> 0xd;
  }
  else if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(&DAT_0017a4d0 + ((iVar3 * 0x100) / iVar2) * 8) * iVar2 >> 0xd;
  }
  in_EAX[3] = iVar3;
  if (iVar4 < iVar3) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x80;
  }
  if ((in_EAX[6] < 0x20) || (iVar3 < 0x20)) {
    *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 1;
    iVar4 = in_EAX[5];
    *in_EAX = DAT_00387d28 + in_EAX[4];
  }
  else {
    iVar3 = (DAT_00191d30 << 0x10) / iVar3;
    *in_EAX = DAT_00387d28 + (in_EAX[4] * iVar3 >> 0x10);
    iVar4 = iVar3 * in_EAX[5] >> 0x10;
  }
  in_EAX[1] = DAT_00387d2c - iVar4;
  if (*in_EAX < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 8;
  }
  else if (DAT_0018429c <= *in_EAX) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x10;
  }
  if (in_EAX[1] < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x20;
  }
  else if (DAT_001842a0 <= in_EAX[1]) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x40;
  }
  if ((in_EAX[6] < DAT_00387d30) &&
     (*(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 1, in_EAX[6] < DAT_00387d34)) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 2;
  }
  *(byte *)((int)in_EAX + 9) = *(byte *)((int)in_EAX + 9) | 4;
  return;
}

/******************************************************************************
 * Function : sub_0947b8 (Ghidra: FUN_000947b8)
 * Prototype: void sub_0947b8(void);
 * Address  : 0x947b8 (Size: 104 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000947b8(void)

{
  int *in_EAX;
  int *in_EDX;
  int iVar1;
  
  if (in_EAX[2] < 0x20) {
    *in_EDX = DAT_00387d28 + *in_EAX;
    iVar1 = DAT_00387d2c - in_EAX[1];
  }
  else {
    iVar1 = (DAT_00191d30 << 0x10) / in_EAX[2];
    *in_EDX = DAT_00387d28 + (*in_EAX * iVar1 >> 0x10);
    iVar1 = DAT_00387d2c - (in_EAX[1] * iVar1 >> 0x10);
  }
  in_EDX[1] = iVar1;
  return;
}

/******************************************************************************
 * Function : sub_094820 (Ghidra: FUN_00094820)
 * Prototype: void sub_094820(void);
 * Address  : 0x94820 (Size: 1 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00094820(void)

{
  return;
}

/******************************************************************************
 * Function : sub_094824 (Ghidra: FUN_00094824)
 * Prototype: void sub_094824(int param_1);
 * Address  : 0x94824 (Size: 124 bytes)
 * Module   : draw.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x948a0, 0x956b8, 0x964d0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00094824(int param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 in_ECX;
  undefined4 *in_EDX;
  undefined4 unaff_EBX;
  
  iVar1 = in_EDX[3];
  *in_EAX = *in_EDX;
  in_EAX[1] = in_EDX[1];
  in_EAX[2] = unaff_EBX;
  in_EAX[3] = in_ECX;
  iVar2 = (int)in_EDX[2] >> 0x10;
  if (-1 < param_1) {
    iVar2 = iVar2 * (int)(&DAT_00014000 + param_1 * 3) >> 0x11;
  }
  if (DAT_00387d8c < iVar1) {
    if (iVar1 < DAT_00387d38) {
      iVar2 = ((DAT_00387d88 - iVar1) * iVar2) / DAT_00387d94 + 0x8000;
    }
    else {
      iVar2 = 0x8000;
    }
  }
  else {
    iVar2 = iVar2 << 8;
  }
  in_EAX[4] = iVar2;
  return;
}

/******************************************************************************
 * Function : sub_0a43b4 (Ghidra: FUN_000a43b4)
 * Prototype: void sub_0a43b4(void);
 * Address  : 0xa43b4 (Size: 1589 bytes)
 * Module   : draw.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x872b8, 0x87da4
 * Callees  : 4 -> 0xa3aa0, 0xdc150, 0xe6a6c, 0x137e43
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_000a43b4(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *in_EAX;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  undefined8 uVar17;
  uint local_48;
  int local_24;
  
  DAT_00379394 = (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef];
  DAT_00379395 = '\x01' << (DAT_00379394 & 0x1f);
  if (DAT_002ee8d1 == '\0') {
    DAT_00191d28 = 4;
    DAT_00191d2c = 3;
  }
  else if (DAT_002ee8d1 == '\x01') {
    DAT_00191d28 = 3;
    DAT_00191d2c = 2;
  }
  else if (DAT_002ee8d1 == '\x02') {
    DAT_00191d2c = 1;
    DAT_00191d28 = 2;
  }
  if (DAT_002ee8d1 == '\x03') {
    DAT_00191d28 = 0;
    DAT_00191d2c = 0;
  }
  DAT_00191d38 = (uint)(byte)(&DAT_00191d40)[DAT_002ee8d3];
  _DAT_00387da4 = (undefined2 *)0x0;
  _DAT_00387da8 = 100000000;
  if (DAT_00191d3c == '\0') {
    DAT_00387e00 = DAT_002ee8d6;
  }
  else {
    DAT_00387e00 = '\0';
  }
  _DAT_0038830c = *in_EAX;
  _DAT_0038830e = in_EAX[1];
  _DAT_00388310 = in_EAX[2];
  DAT_003d9578 = 0;
  DAT_00387db0 = (int)(DAT_003d9864 * (uint)DAT_0019cba6 -
                      (uint)*(ushort *)(&DAT_0019d510 + (DAT_002f10ce >> 0x18) * 0x4ef)) /
                 (int)(uint)DAT_0019cba6;
  uVar17 = FUN_000dc150();
  DAT_00387db4 = ((int)uVar17 - (int)((ulonglong)uVar17 >> 0x20)) / (int)(uint)DAT_0019cba6;
  DAT_00191d30 = (int)(*(int *)((int)in_EAX + 0x13) * ((uint)DAT_0019cba4 / (uint)DAT_0019cba6)) /
                 0x140;
  if (DAT_00191d3c == '\0') {
    local_24 = DAT_003882c0;
    if ((DAT_003882d8 == 0) && (DAT_003882cc == 0)) {
      DAT_00387de0 = DAT_003882d8;
      DAT_00387de4 = DAT_003882d8;
      _DAT_00387da4 = &DAT_00279203;
    }
    else {
      for (sVar15 = 0; sVar15 < 8; sVar15 = sVar15 + 1) {
        uVar10 = (((DAT_00387db0 - DAT_003882bc) * DAT_003882d8 >> 1) -
                 (DAT_003882d4 * (DAT_00387db4 - local_24) >> 1)) /
                 (DAT_003882d8 * DAT_003882c8 - DAT_003882d4 * DAT_003882cc >> 0xb);
        uVar8 = (((DAT_00387db0 - DAT_003882bc) * DAT_003882cc >> 1) -
                (DAT_003882c8 * (DAT_00387db4 - local_24) >> 1)) /
                (DAT_003882d4 * DAT_003882cc + -DAT_003882c8 * DAT_003882d8 >> 0xb);
        iVar13 = (int)uVar10 >> 2;
        iVar9 = (int)uVar8 >> 2;
        iVar12 = (uVar10 & 3) << 6;
        iVar16 = (uVar8 & 3) << 6;
        puVar3 = _DAT_00387da4;
        iVar14 = DAT_00387de0;
        iVar2 = DAT_00387de4;
        iVar4 = DAT_00387de8;
        iVar5 = DAT_00387dec;
        iVar6 = DAT_00387dd8;
        iVar7 = DAT_00387ddc;
        if ((((-1 < iVar13) && (iVar13 < 0xff)) && (-1 < iVar9)) && (iVar9 < 0xff)) {
          iVar1 = (iVar9 * 0x100 + iVar13) * 5;
          puVar3 = (undefined2 *)((int)&DAT_00279203 + iVar1);
          iVar14 = iVar13;
          iVar2 = iVar9;
          iVar4 = iVar12;
          iVar5 = iVar16;
          iVar6 = iVar13;
          iVar7 = iVar9;
          if (sVar15 != 0) {
            uVar10 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
            local_48 = uVar10 >> 0x1c;
            if (((DAT_00379395 & local_48) == 0) ||
               (puVar3 = _DAT_00387da4, iVar14 = DAT_00387de0, iVar2 = DAT_00387de4,
               iVar4 = DAT_00387de8, iVar5 = DAT_00387dec, iVar6 = DAT_00387dd8,
               iVar7 = DAT_00387ddc, (uVar10 & 0x7ff) != 0)) {
              uVar10 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
              local_48 = uVar10 >> 0x1c;
              uVar8 = DAT_002e6f23;
              if ((DAT_00379395 & local_48) != 0) {
                uVar8 = uVar10 & 0x7ff;
              }
              uVar11 = *(ushort *)((int)&DAT_0019e973 + uVar8 * 0x18 + 3);
              if ((DAT_00387e00 != '\0') && (uVar11 != 0)) {
                uVar10 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
                local_48 = (uint)DAT_00379395;
                uVar8 = DAT_002e6f23;
                if ((local_48 & uVar10 >> 0x1c) != 0) {
                  uVar8 = uVar10 & 0x7ff;
                }
                if (7 < *(ushort *)((int)&DAT_0019e973 + uVar8 * 0x18 + 3)) {
                  iVar14 = iVar13 + iVar9 * 0x100;
                  iVar2 = iVar14 * 5;
                  if (((*(uint *)((int)&DAT_00279203 + iVar2 + 1) >> 0x1c & (uint)DAT_00379395) == 0
                      ) || ((((&DAT_00269203)[iVar14] & 0x80) == 0 &&
                            ((*(byte *)((int)&DAT_00279203 + iVar2) & 2) == 0)))) {
                    uVar11 = uVar11 & 3;
                  }
                }
              }
              if (((int)(short)uVar11 & 1 << ((char)sVar15 - 1U & 0x1f)) != 0) {
                _DAT_00387da4 = (undefined2 *)((int)&DAT_00279203 + (iVar9 * 0x100 + iVar13) * 5);
                DAT_00387de0 = iVar13;
                DAT_00387de4 = iVar9;
                DAT_00387de8 = iVar12;
                DAT_00387dec = iVar16;
              }
              puVar3 = _DAT_00387da4;
              iVar14 = DAT_00387de0;
              iVar2 = DAT_00387de4;
              iVar4 = DAT_00387de8;
              iVar5 = DAT_00387dec;
              if (((DAT_00387e00 != '\0') && (sVar15 == 2)) ||
                 ((iVar6 = DAT_00387dd8, iVar7 = DAT_00387ddc, DAT_00387e00 == '\0' && (sVar15 == 5)
                  ))) {
                DAT_00387df8 = iVar12;
                DAT_00387dfc = iVar16;
                iVar6 = DAT_00387dd8;
                iVar7 = DAT_00387ddc;
                DAT_00387df0 = iVar13;
                DAT_00387df4 = iVar9;
              }
            }
          }
        }
        DAT_00387ddc = iVar7;
        DAT_00387dd8 = iVar6;
        DAT_00387dec = iVar5;
        DAT_00387de8 = iVar4;
        DAT_00387de4 = iVar2;
        DAT_00387de0 = iVar14;
        _DAT_00387da4 = puVar3;
        local_24 = local_24 + (DAT_003882e4 >> 8);
      }
    }
  }
  iVar14 = (DAT_002f10ce >> 0x18) * 0x4ef;
  uVar10 = (uint)*(ushort *)(&DAT_0019d50e + iVar14) / (uint)DAT_0019cba6;
  DAT_00387d2c = uVar10 / 2;
  DAT_00387d28 = ((uint)*(ushort *)(&DAT_0019d50c + iVar14) / (uint)DAT_0019cba6) / 2;
  FUN_00137e43(uVar10);
  FUN_000e6a6c();
  FUN_000a3aa0();
  DAT_003d957c = 0;
  DAT_003d9874 = (undefined2)local_48;
  FUN_000e6a6c();
  return;
}

