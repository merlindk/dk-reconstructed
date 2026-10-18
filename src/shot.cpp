/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: shot.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_06c444 (Ghidra: FUN_0006c444)
 * Prototype: undefined4 sub_06c444(void);
 * Address  : 0x6c444 (Size: 573 bytes)
 * Module   : shot.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6bdda
 * Callees  : 7 -> 0x274ad, 0x51374, 0x6d114, 0x6d223, 0x6e538, 0x72af4, 0x81a2c
 ******************************************************************************/
undefined4 FUN_0006c444(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *local_18;
  int local_14;
  
  ppuVar4 = &local_18;
  ppuVar3 = &local_18;
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  local_18 = &DAT_00188c94 + iVar1;
  if ((((*(char *)(in_EDX + 0x1f) != '\x01') || ((&DAT_00188cbc)[iVar1] != '\0')) ||
      (*(short *)(in_EDX + 0x5e) < 0)) ||
     (((&DAT_001acd7a)[(uint)*(byte *)(in_EDX + 0x1a) * 0x1d] != '\0' &&
      ((&DAT_00188ce0)[iVar1] == '\0')))) {
    return 0;
  }
  if (*(ushort *)(in_EAX + 0x1d) == *(ushort *)(in_EAX + 0x1b)) {
    local_14 = 0;
  }
  else {
    local_14 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  if ((&DAT_001acd79)[(uint)*(byte *)(in_EDX + 0x1a) * 0x1d] == '\0') {
    if (*(short *)(&DAT_00188cb6 + iVar1) != 0) {
      uStack_1c = 0x100;
      uStack_20 = 3;
      uStack_24 = 0;
      ppuVar4 = (undefined **)&uStack_28;
      uStack_28 = 3;
      FUN_0006e538();
    }
    goto LAB_0006c5c0;
  }
  uVar2 = DAT_002e8bfa * 0x24a1 + 0x24df;
  if (*(char *)(in_EAX + 0x1a) == '\x15') {
    DAT_002e8bfa = uVar2 >> 0xd | uVar2 * 0x80000;
LAB_0006c547:
    uStack_1c = 0x100;
    uStack_20 = 3;
    uStack_24 = 0;
    uStack_28 = 3;
    ppuVar3 = (undefined **)&uStack_28;
    FUN_0006e538();
  }
  else if (*(char *)(in_EAX + 0x1a) == '\x16') {
    DAT_002e8bfa = uVar2 >> 0xd | uVar2 * 0x80000;
    goto LAB_0006c547;
  }
  *(undefined4 *)((int)ppuVar3 + -4) = 0;
  *(undefined4 *)((int)ppuVar3 + -8) = 0x6c567;
  FUN_000274ad();
  ppuVar4 = (undefined **)((int)ppuVar3 + -4);
  if ((int)*(char *)(in_EDX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
    *(undefined4 *)((int)ppuVar3 + -8) = 0x6c597;
    FUN_00051374();
    ppuVar4 = (undefined **)((int)ppuVar3 + -4);
  }
LAB_0006c5c0:
  if (*(short *)(in_EAX + 0x14) != 0) {
    if ((local_18[0x27] != '\0') && (local_14 != 0)) {
      *(short *)(local_14 + 0x5e) = *(short *)(local_14 + 0x5e) + (*(short *)(in_EAX + 0x14) >> 1);
      iVar1 = (int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(local_14 + 0x1a) * 0x73] *
                    (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(local_14 + 100)] + 0x23) * 0x23) /
              100 + (int)(short)(&DAT_002e9114)[(uint)*(byte *)(local_14 + 0x1a) * 0x73];
      if (iVar1 < *(short *)(local_14 + 0x5e)) {
        *(short *)(local_14 + 0x5e) = (short)iVar1;
      }
    }
    *(undefined4 *)((int)ppuVar4 + -4) = 0x6c647;
    FUN_00081a2c();
    *(undefined1 *)(in_EDX + 0x13) = 0x14;
  }
  *(undefined4 *)((int)ppuVar4 + -4) = 0x6c654;
  FUN_0006d223();
  if (*(short *)(in_EDX + 0x5e) < 0) {
    *(undefined4 *)((int)ppuVar4 + -4) = 0x6c665;
    FUN_0006d114();
  }
  if (local_18[0x18] != '\0') {
    *(undefined4 *)((int)ppuVar4 + -4) = 0x6c677;
    FUN_00072af4();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_06c681 (Ghidra: FUN_0006c681)
 * Prototype: void sub_06c681(void);
 * Address  : 0x6c681 (Size: 917 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6ca16
 * Callees  : 5 -> 0x14afe, 0x14d45, 0x50ea6, 0x6e538, 0x82cac
 ******************************************************************************/
void FUN_0006c681(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_EDX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 local_18;
  
  piVar8 = &local_30;
  iVar9 = 0;
  if (*(short *)(in_EAX + 0x1d) != *(short *)(in_EAX + 0x1b)) {
    iVar9 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  if (iVar9 == 0) {
    return;
  }
  if ((in_EDX & 1) == 0) {
    if ((in_EDX & 2) == 0) {
      iVar4 = (int)(uint)*(ushort *)(in_EAX + 0xd) >> 8;
      local_1c = (int)(uint)*(ushort *)(in_EAX + 0xf) >> 8;
    }
    else {
      iVar4 = (int)(uint)*(ushort *)(in_EAX + 0x52) >> 9;
      if ((iVar4 == 0) || (iVar4 == 3)) {
        iVar4 = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xd) >> 8) / 3) * 3 + 1;
        local_1c = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xf) >> 8) / 3) * 3 + -2;
      }
      else {
        iVar4 = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xd) >> 8) / 3) * 3 + 1;
        local_1c = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xf) >> 8) / 3) * 3 + 4;
      }
    }
  }
  else {
    if ((int)(uint)*(ushort *)(in_EAX + 0x52) >> 10 == 0) {
      iVar4 = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xd) >> 8) / 3) * 3 + 4;
    }
    else {
      iVar4 = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xd) >> 8) / 3) * 3 + -2;
    }
    local_1c = ((uint)((int)(uint)*(ushort *)(in_EAX + 0xf) >> 8) / 3) * 3 + 1;
  }
  iVar5 = local_1c * 0x100 + iVar4;
  iVar6 = iVar5 >> 0x1f;
  local_30 = (&DAT_0019033b)[(int)((iVar5 + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8] * 0x55;
  iVar3 = ((&DAT_0019033b)[iVar5 % 0x100] + local_30) * 6;
  local_20 = &DAT_002d33c5 + iVar3;
  iVar7 = (int)*(short *)(in_EAX + 0x14);
  if ((((&DAT_002d33ca)[iVar3] & 7) != DAT_002eb543) &&
     ((uint)((&DAT_002d33ca)[iVar3] & 7) != (int)*(char *)(iVar9 + 6))) {
    return;
  }
  iVar2 = iVar5 * 5;
  if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x40) != 0) {
    return;
  }
  local_2c = (&DAT_0019033b)[(int)((iVar5 + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8] * 0x55;
  local_18 = 0x100;
  if ((&DAT_002d33c5)[((&DAT_0019033b)[iVar5 % 0x100] + local_2c) * 6] == '\0') {
    return;
  }
  if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) == 0) {
    return;
  }
  local_28 = (uint)(byte)(&DAT_002d33c9)[iVar3];
  local_24 = iVar7;
  if (iVar7 < (int)local_28) {
    cVar1 = (&DAT_002d33c5)[((&DAT_0019033b)[local_1c] * 0x55 + (&DAT_0019033b)[iVar4]) * 6];
    if (cVar1 != '4') {
      local_24._0_1_ = (char)*(short *)(in_EAX + 0x14);
      (&DAT_002d33c9)[iVar3] = (&DAT_002d33c9)[iVar3] - (char)local_24;
    }
    if ((*(byte *)((int)&DAT_00279203 + iVar5 * 5) & 1) == 0) {
      return;
    }
    iVar4 = (DAT_002eb9e8 * iVar7) / (int)DAT_002eb9b6;
    if ((cVar1 == '4') && (iVar4 = iVar4 / 6, iVar4 < 1)) {
      iVar4 = 1;
    }
    *(int *)(iVar9 + 0x13) = *(int *)(iVar9 + 0x13) + iVar4;
    *(int *)(&DAT_002e17ac + *(char *)(iVar9 + 6) * 0x1508) =
         *(int *)(&DAT_002e17ac + *(char *)(iVar9 + 6) * 0x1508) + iVar4;
    if (*(int *)(iVar9 + 0x13) <
        (int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(iVar9 + 0x1a) * 0xe6)) {
      return;
    }
    uStack_34 = 0x6ca0a;
    FUN_00050ea6();
    *(undefined4 *)(iVar9 + 0x13) = 0;
    return;
  }
  if ((*(byte *)((int)&DAT_00279203 + iVar2) & 1) == 0) {
    if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x40) != 0) goto LAB_0006c95b;
    uStack_34 = 0x6c90d;
    FUN_00014afe();
  }
  else {
    iVar4 = (int)((int)DAT_002eb9e8 * local_28) / (int)DAT_002eb9b6;
    *(int *)(iVar9 + 0x13) = *(int *)(iVar9 + 0x13) + iVar4;
    *(int *)(&DAT_002e17ac + *(char *)(iVar9 + 6) * 0x1508) =
         *(int *)(&DAT_002e17ac + *(char *)(iVar9 + 6) * 0x1508) + iVar4;
    if ((int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(iVar9 + 0x1a) * 0xe6) <=
        *(int *)(iVar9 + 0x13)) {
      uStack_34 = 0x6c8df;
      FUN_00050ea6();
      *(undefined4 *)(iVar9 + 0x13) = 0;
    }
    uStack_34 = 0x6c8f4;
    FUN_00014d45();
  }
  uStack_34 = 0x100;
  uStack_38 = 2;
  uStack_3c = 0;
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  piVar8 = &uStack_40;
  uStack_40 = 3;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  FUN_0006e538();
LAB_0006c95b:
  *(undefined4 *)((int)piVar8 + -4) = 0x6c967;
  FUN_00082cac();
  return;
}

/******************************************************************************
 * Function : sub_06ca16 (Ghidra: FUN_0006ca16)
 * Prototype: undefined4 sub_06ca16(void);
 * Address  : 0x6ca16 (Size: 1232 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb41d8
 * Callees  : 11 -> 0x22b3a, 0x24998, 0x2585f, 0x6c681, 0x6e538, 0x72af4, 0x81a2c, 0xb2398, 0xc7058, 0xc7218 ...
 ******************************************************************************/
undefined4 FUN_0006ca16(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  uint extraout_ECX;
  int in_EDX;
  uint *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint auStack_5c [13];
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  char local_18;
  
  puVar3 = auStack_5c + 10;
  iVar5 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  local_1c = 0;
  local_28 = 0;
  local_18 = '\0';
  if (*(short *)(in_EAX + 0x1d) != *(short *)(in_EAX + 0x1b)) {
    local_28 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  auStack_5c[9] = 0x6ca64;
  auStack_5c[0xb] = in_EDX;
  auStack_5c[0xc] = FUN_000c7058();
  if ((&DAT_00188cdd)[iVar5] != '\0') {
    auStack_5c[9] = 0x6ca76;
    FUN_0006c681();
  }
  if ((auStack_5c[0xc] & 4) != 0) {
    auStack_5c[9] = 0x6ca93;
    FUN_000b2398();
    auStack_5c[10] = (uint)*(byte *)(auStack_5c[0xb] + 3);
    auStack_5c[9] = 0x6caaa;
    local_24 = FUN_00022b3a();
    if (local_24 == 0) {
      if ((extraout_ECX & 0xff) == 0x27) {
        if (*(short *)(&DAT_00188ccb + iVar5) != 0) {
          auStack_5c[9] = 0x6cbc0;
          local_1c = FUN_00024998();
        }
        puVar3 = auStack_5c + 10;
        if ((*(short *)(&DAT_00188ccd + iVar5) != 0) && (puVar3 = auStack_5c + 10, local_1c != 0)) {
          auStack_5c[9] = 0x100;
          auStack_5c[8] = 2;
          auStack_5c[7] = 0;
          puVar3 = auStack_5c + 6;
          auStack_5c[6] = 3;
          FUN_0006e538();
        }
        cVar1 = (&DAT_00188ccf)[iVar5];
      }
      else if (((byte)extraout_ECX & 0xfe) == 0x28) {
        if (*(short *)(&DAT_00188cd0 + iVar5) != 0) {
          auStack_5c[9] = 0x6cc28;
          local_1c = FUN_00024998();
        }
        puVar3 = auStack_5c + 10;
        if ((*(short *)(&DAT_00188cd2 + iVar5) != 0) && (puVar3 = auStack_5c + 10, local_1c != 0)) {
          auStack_5c[9] = 0x100;
          auStack_5c[8] = 2;
          auStack_5c[7] = 0;
          puVar3 = auStack_5c + 6;
          auStack_5c[6] = 3;
          FUN_0006e538();
        }
        cVar1 = (&DAT_00188cd4)[iVar5];
      }
      else {
        if (*(short *)(&DAT_00188cbf + iVar5) != 0) {
          auStack_5c[9] = 0x6cc70;
          local_1c = FUN_00024998();
        }
        puVar3 = auStack_5c + 10;
        if ((*(short *)(&DAT_00188cc1 + iVar5) != 0) && (puVar3 = auStack_5c + 10, local_1c != 0)) {
          auStack_5c[9] = 0x100;
          auStack_5c[8] = 2;
          auStack_5c[7] = 0;
          DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
          puVar3 = auStack_5c + 6;
          auStack_5c[6] = 3;
          DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
          FUN_0006e538();
        }
        cVar1 = (&DAT_00188cc4)[iVar5];
      }
      if (cVar1 != '\0') {
        local_18 = '\x01';
      }
    }
    else {
      if (*(short *)(&DAT_00188cc5 + iVar5) != 0) {
        auStack_5c[9] = 0x6cacc;
        local_1c = FUN_00024998();
      }
      puVar3 = auStack_5c + 10;
      if ((*(short *)(&DAT_00188cc7 + iVar5) != 0) && (puVar3 = auStack_5c + 10, local_1c != 0)) {
        auStack_5c[9] = 0x100;
        auStack_5c[8] = 2;
        auStack_5c[7] = 0;
        DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
        puVar3 = auStack_5c + 6;
        auStack_5c[6] = 3;
        DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
        FUN_0006e538();
      }
      if ((&DAT_00188cca)[iVar5] != '\0') {
        local_18 = '\x01';
      }
      *(undefined4 *)((int)puVar3 + -4) = 0x6cb6c;
      FUN_00081a2c();
    }
  }
  if ((local_18 == '\0') && (((auStack_5c[0xc] & 1) != 0 || ((auStack_5c[0xc] & 2) != 0)))) {
    *(undefined4 *)((int)puVar3 + -4) = 0x6cd08;
    local_20 = FUN_00022b3a();
    if (local_20 == 0) {
      if (*(short *)(&DAT_00188cbf + iVar5) != 0) {
        *(undefined4 *)((int)puVar3 + -4) = 0x6ce0b;
        local_1c = FUN_00024998();
      }
      if ((*(short *)(&DAT_00188cc1 + iVar5) != 0) && (local_1c != 0)) {
        *(undefined4 *)((int)puVar3 + -4) = 0x100;
        *(undefined4 *)((int)puVar3 + -8) = 2;
        *(undefined4 *)((int)puVar3 + -0xc) = 0;
        DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
        *(undefined4 *)((int)puVar3 + -0x10) = 3;
        DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
        *(undefined4 *)((int)puVar3 + -0x14) = 0x6ce6c;
        FUN_0006e538();
        puVar3 = (uint *)((int)puVar3 + -0x10);
      }
      if ((&DAT_00188cc4)[iVar5] != '\0') {
        local_18 = '\x01';
      }
    }
    else {
      if (*(short *)(&DAT_00188cc5 + iVar5) != 0) {
        *(undefined4 *)((int)puVar3 + -4) = 0x6cd2c;
        local_1c = FUN_00024998();
      }
      if ((*(short *)(&DAT_00188cc7 + iVar5) != 0) && (local_1c != 0)) {
        *(undefined4 *)((int)puVar3 + -4) = 0x100;
        *(undefined4 *)((int)puVar3 + -8) = 2;
        *(undefined4 *)((int)puVar3 + -0xc) = 0;
        DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
        *(undefined4 *)((int)puVar3 + -0x10) = 3;
        DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
        *(undefined4 *)((int)puVar3 + -0x14) = 0x6cd8d;
        FUN_0006e538();
        puVar3 = (uint *)((int)puVar3 + -0x10);
      }
      if ((&DAT_00188cca)[iVar5] != '\0') {
        local_18 = '\x01';
      }
      *(undefined4 *)((int)puVar3 + -4) = 0x6cdcc;
      FUN_00081a2c();
    }
  }
  if (local_1c != 0) {
    *(undefined *)(local_1c + 0x16) = (&DAT_00188cde)[iVar5];
  }
  if (local_18 == '\0') {
    if (*(short *)(&DAT_00188ca1 + iVar5) < 1) {
      *(undefined4 *)((int)puVar3 + -4) = 0x6cede;
      FUN_000c7218();
    }
    else {
      *(undefined4 *)((int)puVar3 + -4) = 0x6cecf;
      FUN_000c75b4();
    }
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined1 *)puVar3;
    if (*(short *)(&DAT_00188cd5 + iVar5) != 0) {
      puVar4 = (undefined1 *)((int)puVar3 + -4);
      *(uint *)((int)puVar3 + -4) = (uint)(byte)(&DAT_00188cde)[iVar5];
      *(undefined4 *)((int)puVar3 + -8) = 0x6ceaa;
      FUN_0002585f();
    }
    *(undefined4 *)(puVar4 + -4) = 0x6ceb3;
    FUN_00072af4();
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_06cee6 (Ghidra: FUN_0006cee6)
 * Prototype: undefined4 sub_06cee6(void);
 * Address  : 0x6cee6 (Size: 450 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb41d8
 * Callees  : 8 -> 0x22b3a, 0x24998, 0x2585f, 0x6e538, 0x72af4, 0x81a2c, 0xc7058, 0xc75b4
 ******************************************************************************/
undefined4 FUN_0006cee6(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_18;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  local_20 = 0;
  local_2c = 0;
  local_18 = '\0';
  if (*(ushort *)(in_EAX + 0x1d) != *(ushort *)(in_EAX + 0x1b)) {
    local_2c = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  uStack_30 = 0x6cf34;
  local_28 = FUN_000c7058();
  puVar3 = &local_2c;
  if (local_28 != 0) {
    uStack_30 = 0x6cf52;
    local_24 = FUN_00022b3a();
    puVar3 = &local_2c;
    if (local_24 != 0) {
      if (*(short *)(&DAT_00188cc5 + iVar1) != 0) {
        uStack_30 = 0x6cf74;
        local_20 = FUN_00024998();
      }
      puVar3 = &local_2c;
      if ((*(short *)(&DAT_00188cc7 + iVar1) != 0) && (puVar3 = &local_2c, local_20 != 0)) {
        uStack_30 = 0x100;
        uStack_34 = 2;
        uStack_38 = 0;
        DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
        puVar3 = &uStack_3c;
        uStack_3c = 3;
        DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
        FUN_0006e538();
      }
      if ((&DAT_00188cca)[iVar1] != '\0') {
        local_18 = '\x01';
      }
      *(undefined4 *)((int)puVar3 + -4) = 0x6d03c;
      FUN_00081a2c();
    }
  }
  if (local_20 != 0) {
    *(undefined *)(local_20 + 0x16) = (&DAT_00188cde)[iVar1];
  }
  if (local_18 == '\0') {
    if (*(short *)(&DAT_00188ca1 + iVar1) < 1) {
      *(undefined4 *)((int)puVar3 + -4) = 0x6cede;
      FUN_000c7218();
    }
    else {
      *(undefined4 *)((int)puVar3 + -4) = 0x6d098;
      FUN_000c75b4();
    }
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined1 *)puVar3;
    if (*(short *)(&DAT_00188cd5 + iVar1) != 0) {
      puVar4 = (undefined1 *)((int)puVar3 + -4);
      *(uint *)((int)puVar3 + -4) = (uint)(byte)(&DAT_00188cde)[iVar1];
      *(undefined4 *)((int)puVar3 + -8) = 0x6d070;
      FUN_0002585f();
    }
    *(undefined4 *)(puVar4 + -4) = 0x6d079;
    FUN_00072af4();
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_06d0a8 (Ghidra: FUN_0006d0a8)
 * Prototype: undefined4 sub_06d0a8(void);
 * Address  : 0x6d0a8 (Size: 108 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6bdda, 0x6c2cc
 * Callees  : 1 -> 0x8608c
 ******************************************************************************/
undefined4 FUN_0006d0a8(void)

{
  byte bVar1;
  int in_EAX;
  int in_EDX;
  undefined1 uVar2;
  
  *(undefined2 *)(in_EDX + 0x5e) = 0xffff;
  bVar1 = *(byte *)(in_EAX + 0x1a);
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x1d3) = bVar1;
  if (*(short *)(in_EAX + 0x1d) == *(short *)(in_EAX + 0x1b)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&DAT_00188ce1)[(uint)bVar1 * 0x65];
  }
  FUN_0008608c(1,uVar2);
  return 1;
}

/******************************************************************************
 * Function : dk_attempt_kill_non_handled_06d114 (Ghidra: FUN_0006d114)
 * Prototype: undefined4 dk_attempt_kill_non_handled_06d114(void);
 * Address  : 0x6d114 (Size: 271 bytes)
 * Module   : shot.cpp [direct_file_string_xref]
 * OrigLine : shot.cpp:1130 ("Attempt to kill non handled object")
 * Naming   : String 'Attempt to kill non handled object'
 * Callers  : 1 -> 0x6c444
 * Callees  : 5 -> 0x51374, 0x6e538, 0x72af4, 0xaaecc, 0xddaf0
 * Strings  :
 *   - 0x167423: "shot.cpp"
 *   - 0x167400: "Attempt to kill non handled object"
 ******************************************************************************/
undefined4 FUN_0006d114(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int in_EDX;
  undefined4 *puVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar3 = (undefined4 *)&stack0xfffffff0;
  uVar1 = (uint)*(byte *)(in_EDX + 0x1a);
  if ((&DAT_001acd79)[uVar1 * 0x1d] != '\0') {
    iVar2 = (int)DAT_002f10ce._3_1_;
    *(undefined2 *)(in_EDX + 0x5e) = 0xffff;
    *(undefined1 *)(in_EDX + 7) = 3;
    if (((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[iVar2 * 0x4ef]) &&
       ((&DAT_0019d0f4)[*(char *)(in_EDX + 6) * 0x4ef] == '\x01')) {
      uStack_14 = 0x6d176;
      FUN_00051374();
    }
    if (*(char *)(in_EDX + 0x1a) == '\x05') {
      *(int *)(&DAT_002e180c + *(char *)(in_EAX + 6) * 0x1508) =
           *(int *)(&DAT_002e180c + *(char *)(in_EAX + 6) * 0x1508) + 1;
    }
    return 1;
  }
  if (uVar1 != 9) {
    if (uVar1 != 10) {
      uStack_14 = 0x6d21c;
      FUN_000ddaf0(); /* LbErrorLog("shot.cpp", line 1130, "Attempt to kill non handled object") */
      return 0;
    }
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    uStack_14 = 0x100;
    uStack_18 = 2;
    uStack_1c = 0;
    puVar3 = &uStack_20;
    uStack_20 = 3;
    FUN_0006e538();
    FUN_000aaecc();
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x6d1a7;
  FUN_00072af4();
  return 0;
}

/******************************************************************************
 * Function : sub_06d223 (Ghidra: FUN_0006d223)
 * Prototype: void sub_06d223(void);
 * Address  : 0x6d223 (Size: 273 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6bdda, 0x6c2cc, 0x6c444
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
void FUN_0006d223(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  char cVar3;
  int in_EDX;
  uint uVar4;
  
  if (*(char *)(in_EDX + 0x1f) != '\x05') {
    return;
  }
  bVar1 = *(byte *)(in_EAX + 0x1a);
  if (bVar1 < 6) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        return;
      }
      if (2 < bVar1) {
        return;
      }
    }
    else if (4 < bVar1) {
      iVar2 = FUN_00024998();
      if (iVar2 == 0) {
        return;
      }
      *(undefined1 *)(iVar2 + 0x16) = 2;
      return;
    }
  }
  else if (6 < bVar1) {
    if (bVar1 < 0xd) {
      if (bVar1 != 9) {
        return;
      }
    }
    else {
      if (bVar1 < 0xe) {
        return;
      }
      if (0xe < bVar1) {
        if (bVar1 < 0x15) {
          return;
        }
        if (0x16 < bVar1) {
          return;
        }
      }
      if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xab) & 2) == 0) {
        if (DAT_002ee9b9 == 3) {
          uVar4 = (uint)*(byte *)(in_EDX + 0x1a);
          if (((&DAT_002e91e7)[uVar4 * 0xe6] == '\0') || ((uVar4 != 0 && (uVar4 < 0xe)))) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\x01';
          }
        }
        else {
          cVar3 = (&DAT_002e91e7)[(uint)*(byte *)(in_EDX + 0x1a) * 0xe6];
        }
        if (cVar3 == '\0') {
          return;
        }
      }
    }
  }
  FUN_00024998();
  return;
}

/******************************************************************************
 * Function : sub_06d334 (Ghidra: FUN_0006d334)
 * Prototype: undefined4 sub_06d334(void);
 * Address  : 0x6d334 (Size: 104 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x265d3, 0x7f9f4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006d334(void)

{
  int in_EAX;
  int in_EDX;
  bool bVar1;
  
  if (in_EAX == 0) {
    return 1;
  }
  if ((*(short *)(in_EDX + 0x1b) != *(short *)(in_EAX + 0x1b)) &&
     (*(char *)(in_EAX + 0x1f) == '\x05')) {
    if ((*(char *)(in_EDX + 0x1f) == '\x05') &&
       ((*(char *)(in_EDX + 0x1a) != '\x1f' &&
        ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 1) & 4) == 0)))) {
      bVar1 = *(char *)(in_EAX + 6) == *(char *)(in_EDX + 6);
    }
    else {
      if (*(char *)(in_EDX + 0x1f) != '\x01') {
        return 0;
      }
      if (*(char *)(in_EDX + 0x1a) != '\x05') {
        return 0;
      }
      bVar1 = *(char *)(in_EDX + 6) == *(char *)(in_EAX + 6);
    }
    if (!bVar1) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06d39c (Ghidra: FUN_0006d39c)
 * Prototype: undefined4 sub_06d39c(void);
 * Address  : 0x6d39c (Size: 69 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x265d3, 0x7fa04
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006d39c(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((in_EAX != 0) &&
     ((((*(short *)(in_EDX + 0x1b) == *(short *)(in_EAX + 0x1b) ||
        (*(char *)(in_EDX + 0x1f) != '\x05')) || (*(char *)(in_EDX + 0x1a) == '\x1f')) ||
      (((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 1) & 4) != 0 ||
       (*(char *)(in_EAX + 6) == *(char *)(in_EDX + 6))))))) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_06d3e1 (Ghidra: FUN_0006d3e1)
 * Prototype: longlong sub_06d3e1(void);
 * Address  : 0x6d3e1 (Size: 67 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x265d3
 * Callees  : 1 -> 0x85954
 ******************************************************************************/
longlong FUN_0006d3e1(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  if ((*(char *)(in_EAX + 0x1f) == '\x05') && (*(char *)(in_EAX + 0x1a) != '\x1f')) {
LAB_0006d3f4:
    return CONCAT44(in_EDX,1);
  }
  if (*(char *)(in_EAX + 0x1f) == '\x01') {
    cVar1 = *(char *)(in_EAX + 0x1a);
    if ((cVar1 == '\x05') || (cVar1 == '\t')) goto LAB_0006d3f4;
    if (cVar1 == '\n') {
      iVar2 = FUN_00085954();
      if (iVar2 == 0) goto LAB_0006d3f4;
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06d424 (Ghidra: FUN_0006d424)
 * Prototype: longlong sub_06d424(void);
 * Address  : 0x6d424 (Size: 47 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x265d3
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0006d424(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (((*(char *)(in_EAX + 0x1f) == '\x05') && (*(char *)(in_EAX + 0x1a) != '\x1f')) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 4) == 0)) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06d453 (Ghidra: FUN_0006d453)
 * Prototype: undefined8 sub_06d453(void);
 * Address  : 0x6d453 (Size: 140 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6b820
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0006d453(void)

{
  uint uVar1;
  int in_EAX;
  undefined4 in_EDX;
  uint uVar2;
  int iVar3;
  
  iVar3 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  uVar2 = (uint)(byte)(&DAT_002e9118)[iVar3] +
          ((uint)(byte)(&DAT_002e9118)[iVar3] *
           (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) / 100;
  if ((byte)(&DAT_002e911d)[iVar3] != 0) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar1 = DAT_002e8bf6 >> 0xd;
    DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
    if ((uVar1 & 0xff) < (uint)(byte)(&DAT_002e911d)[iVar3]) {
      uVar2 = uVar2 * 2;
    }
  }
  if (uVar2 < 0x100) {
    return CONCAT44(in_EDX,uVar2);
  }
  return CONCAT44(in_EDX,0x100);
}

/******************************************************************************
 * Function : sub_06d4df (Ghidra: FUN_0006d4df)
 * Prototype: longlong sub_06d4df(void);
 * Address  : 0x6d4df (Size: 393 bytes)
 * Module   : shot.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 7 -> 0x6d668, 0x6d8b6, 0x7dbc0, 0x7df48, 0xb2398, 0xc7058, 0xc7218
 ******************************************************************************/
longlong FUN_0006d4df(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint in_EDX;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar4 = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = uVar4 | DAT_002e8bf6 * 0x80000;
  if (((uVar4 & 7) == 0) && (*(short *)(in_EAX + 0x3c) == 0)) {
    iVar3 = FUN_0007df48();
    if (iVar3 != 0) {
      uVar4 = FUN_000b2398();
      if (((uVar4 & 0xfffffffe) != 0x28) && (uVar4 != 0x27)) {
        *(undefined2 *)(extraout_ECX + 0x34) = *(undefined2 *)(extraout_ECX + 0x34);
        *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) | 4;
        *(short *)(extraout_ECX + 0x36) = *(short *)(extraout_ECX + 0x36) + 0x30;
      }
    }
  }
  iVar5 = FUN_0007dbc0();
  iVar3 = extraout_ECX_00;
  if (iVar5 != 0) {
    FUN_000c7058();
    iVar5 = FUN_0006d8b6();
    iVar3 = extraout_ECX_01;
    if (iVar5 != 1) {
      if ((*(char *)(extraout_ECX_01 + 0x1a) != '\x14') && (iVar5 == 0)) {
        *(short *)(extraout_ECX_01 + 0x5e) = *(short *)(extraout_ECX_01 + 0x5e) - DAT_002ee7ac;
      }
      FUN_000c7218();
      uVar1 = FUN_0006d668();
      *(undefined2 *)(extraout_ECX_02 + 0x52) = uVar1;
      iVar3 = extraout_ECX_02;
    }
  }
  *(short *)(iVar3 + 0x38) =
       (short)((uint)*(ushort *)(&DAT_00188cad + iVar2) * (&DAT_001927e0)[*(ushort *)(iVar3 + 0x52)]
              >> 0x10);
  *(short *)(iVar3 + 0x3a) =
       (short)((uint)-((int)((uint)*(ushort *)(&DAT_00188cad + iVar2) *
                            (int)(&PTR_LAB_00192fe0)[*(ushort *)(iVar3 + 0x52)]) >> 8) >> 8);
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_find_boulder_wall_hug_06d668 (Ghidra: FUN_0006d668)
 * Prototype: undefined4 dk_find_boulder_wall_hug_06d668(void);
 * Address  : 0x6d668 (Size: 365 bytes)
 * Module   : shot.cpp [direct_file_string_xref]
 * OrigLine : shot.cpp:1514 ("Cannot find boulder wall hug angle!")
 * Naming   : String 'Cannot find boulder wall hug angle!'
 * Callers  : 1 -> 0x6d4df
 * Callees  : 3 -> 0x7dbc0, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x167450: "shot.cpp"
 *   - 0x16742c: "Cannot find boulder wall hug angle!"
 ******************************************************************************/
undefined4 FUN_0006d668(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  short sVar4;
  uint unaff_EBX;
  
  iVar3 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  if ((unaff_EBX & 1) != 0) {
    if (((*(short *)(in_EAX + 0x52) == 0) || (0x200 < *(ushort *)(in_EAX + 0x52))) &&
       (*(ushort *)(in_EAX + 0x52) < 0x601)) {
      uVar2 = *(undefined2 *)(in_EAX + 0xd);
      uVar1 = FUN_000b28e8(uVar2,0);
      iVar3 = FUN_0007dbc0(uVar2,uVar1);
      if (iVar3 != 0) {
        return 0;
      }
    }
    else {
      uVar2 = *(undefined2 *)(in_EAX + 0xd);
      uVar1 = FUN_000b28e8(uVar2,0);
      iVar3 = FUN_0007dbc0(uVar2,uVar1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    return 0x400;
  }
  if ((unaff_EBX & 2) != 0) {
    if ((*(short *)(in_EAX + 0x52) == 0) || (0x400 < *(ushort *)(in_EAX + 0x52))) {
      sVar4 = *(short *)(in_EAX + 0xd) + *(short *)(&DAT_00188cad + iVar3) * -3;
      uVar2 = FUN_000b28e8(sVar4,0);
      iVar3 = FUN_0007dbc0(sVar4,uVar2);
      if (iVar3 == 0) {
        return 0x600;
      }
    }
    else {
      sVar4 = *(short *)(in_EAX + 0xd) + *(short *)(&DAT_00188cad + iVar3) * 3;
      uVar2 = FUN_000b28e8(sVar4,0);
      iVar3 = FUN_0007dbc0(sVar4,uVar2);
      if (iVar3 != 0) {
        return 0x600;
      }
    }
    return 0x200;
  }
  FUN_000ddaf0(); /* LbErrorLog("shot.cpp", line 1514, "Cannot find boulder wall hug angle!") */
  return 0;
}

/******************************************************************************
 * Function : sub_06d7d5 (Ghidra: FUN_0006d7d5)
 * Prototype: void sub_06d7d5(void);
 * Address  : 0x6d7d5 (Size: 225 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6bdda
 * Callees  : 2 -> 0x64a5f, 0x81f04
 ******************************************************************************/
void FUN_0006d7d5(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar2;
  int unaff_EBX;
  
  if (((int)(uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) <
       (int)(&DAT_002e0fd8)[*(char *)(in_EAX + 6) * 0x542 + (uint)*(byte *)(in_EAX + 0x1a)]) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) < 9 ||
      (*(short *)(&DAT_002e915c + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0)))) {
    iVar1 = (uint)*(ushort *)(&DAT_00188ce2 + unaff_EBX * 0x65) *
            (((uint)*(ushort *)(&DAT_002e9128 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6) *
              (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x23) * 0xc) / 100 +
            (uint)*(ushort *)(&DAT_002e9128 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6)) * 0x100;
    iVar2 = iVar1 >> 0x1f;
    *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x28) =
         *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x24);
    *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x24) =
         *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x24) +
         ((int)((iVar1 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8);
    iVar1 = FUN_00081f04();
    if (iVar1 != 0) {
      FUN_00064a5f();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_06d8b6 (Ghidra: FUN_0006d8b6)
 * Prototype: undefined4 sub_06d8b6(void);
 * Address  : 0x6d8b6 (Size: 83 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6d4df
 * Callees  : 1 -> 0x6d909
 ******************************************************************************/
undefined4 FUN_0006d8b6(void)

{
  undefined4 uVar1;
  uint unaff_EBX;
  
  if (((unaff_EBX & 1) == 0) && ((unaff_EBX & 2) == 0)) {
    return 0;
  }
  uVar1 = FUN_0006d909();
  return uVar1;
}

/******************************************************************************
 * Function : sub_06d909 (Ghidra: FUN_0006d909)
 * Prototype: undefined4 sub_06d909(void);
 * Address  : 0x6d909 (Size: 358 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6d8b6
 * Callees  : 3 -> 0x22b3a, 0x25f6f, 0xc8654
 ******************************************************************************/
undefined4 FUN_0006d909(void)

{
  short sVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int in_ECX;
  ushort *in_EDX;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int local_1c;
  int local_18;
  
  uVar2 = *(ushort *)(in_EAX + 0x56) / 2;
  iVar3 = (int)((uint)in_EDX[1] + in_ECX * uVar2) >> 8;
  iVar4 = (int)((uint)*in_EDX + unaff_EBX * uVar2) >> 8;
  iVar5 = (uint)(byte)(&DAT_002d33c8)[((&DAT_0019033b)[iVar3] * 0x55 + (&DAT_0019033b)[iVar4]) * 6]
          * 0x45;
  if (&DAT_002ddd1b + iVar5 < &DAT_002ddd1c) {
    if ((*(byte *)((int)&DAT_00279203 + (iVar3 * 0x100 + iVar4) * 5) & 0x40) != 0) {
      iVar3 = FUN_00022b3a();
      if (iVar3 != 0) {
        sVar1 = *(short *)(iVar3 + 0x5e);
        *(short *)(iVar3 + 0x5e) = *(short *)(iVar3 + 0x5e) - *(short *)(in_EAX + 0x5e);
        *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) - sVar1;
        if (*(short *)(iVar3 + 0x5e) < 1) {
          return 2;
        }
      }
    }
  }
  else if (*(short *)(&DAT_002ddd25 + iVar5) == 0x10) {
    for (local_18 = (&DAT_0019033b)[iVar3] * 3; local_18 < iVar3 + 3; local_18 = local_18 + 1) {
      local_1c = (&DAT_0019033b)[iVar4] * 3;
      while (local_1c < iVar4 + 3) {
        local_1c = local_1c + 1;
        FUN_00025f6f();
      }
    }
    if ((int)(char)(&DAT_002ddd1e)[iVar5] != (uint)DAT_002eb543) {
      *(short *)(&DAT_002e105e + (char)(&DAT_002ddd1e)[iVar5] * 0x1508) =
           *(short *)(&DAT_002e105e + (char)(&DAT_002ddd1e)[iVar5] * 0x1508) + 1;
    }
    FUN_000c8654();
    if (*(char *)(in_EAX + 0x1a) != '\x14') {
      *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) - DAT_002ee7b4;
    }
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06da70 (Ghidra: FUN_0006da70)
 * Prototype: undefined8 sub_06da70(void);
 * Address  : 0x6da70 (Size: 39 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x4d022, 0x64ae7
 ******************************************************************************/
undefined8 FUN_0006da70(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_0004d022();
  if (iVar1 == 0) {
    FUN_00064ae7();
  }
  else {
    *(undefined1 *)(in_EAX + 8) = 0x59;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06da97 (Ghidra: FUN_0006da97)
 * Prototype: undefined8 sub_06da97(void);
 * Address  : 0x6da97 (Size: 186 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x10132, 0x4d8d2, 0x4dbf1, 0x63b6d, 0x64ae7, 0x6ddd9, 0xd0f50
 ******************************************************************************/
undefined8 FUN_0006da97(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a)];
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  if (DAT_001ae9fc < uVar1) {
    iVar2 = FUN_0006ddd9();
    if (iVar2 != 0) {
      iVar2 = FUN_0004dbf1();
      if (iVar2 != 0) {
        iVar2 = FUN_000d0f50();
        if ((((iVar2 != 0) && (*(short *)(iVar2 + 10) == 0xe)) &&
            (*(char *)(iVar2 + 3) == *(char *)(in_EAX + 6))) &&
           (*(short *)(iVar2 + 1) == *(short *)(extraout_ECX + 0x68))) {
          iVar2 = FUN_00010132();
          if (iVar2 == 0) {
            FUN_00064ae7();
            *(undefined4 *)(extraout_ECX_00 + 0x82) = 200;
            *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
          }
          FUN_0004d8d2();
          uVar3 = 1;
          goto LAB_0006db4b;
        }
      }
    }
  }
  FUN_00063b6d();
  uVar3 = 0;
LAB_0006db4b:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_06db51 (Ghidra: FUN_0006db51)
 * Prototype: undefined8 sub_06db51(void);
 * Address  : 0x6db51 (Size: 591 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 10 -> 0x10434, 0x109ea, 0x4d8d2, 0x4dbf1, 0x63b6d, 0x6ddd9, 0x81cec, 0x81f04, 0xd0f50, 0xd12cc
 ******************************************************************************/
undefined8 FUN_0006db51(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  int iVar4;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = FUN_0006ddd9();
  if (iVar2 == 0) {
LAB_0006dd91:
    FUN_00063b6d();
  }
  else {
    iVar2 = FUN_0004dbf1();
    if (iVar2 == 0) goto LAB_0006dd91;
    iVar2 = FUN_000d0f50();
    if ((((iVar2 == 0) || (*(short *)(iVar2 + 10) != 0xe)) ||
        (*(short *)(iVar2 + 1) != *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68))) ||
       (*(char *)(iVar2 + 3) != *(char *)(in_EAX + 6))) goto LAB_0006dd91;
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
    if (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee) % (uint)DAT_002ebaef == 0) {
      FUN_00081cec(iVar2);
    }
    FUN_000109ea();
    FUN_00010434();
    if (0 < *(int *)(iVar1 + 0x82)) {
      *(int *)(iVar1 + 0x82) = *(int *)(iVar1 + 0x82) + -1;
    }
    if (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 0x3f) == 0) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      if (DAT_002e8bf6 % 100 < 5) {
        *(int *)(&DAT_002e1814 + *(char *)(in_EAX + 6) * 0x1508) =
             *(int *)(&DAT_002e1814 + *(char *)(in_EAX + 6) * 0x1508) + 1;
      }
    }
    iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
    if ((((&DAT_002e9126)[iVar2] != '\0') &&
        ((int)(uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) <
         (int)(&DAT_002e0fd8)[(uint)*(byte *)(in_EAX + 0x1a) + *(char *)(in_EAX + 6) * 0x542])) &&
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) < 9 ||
        (*(short *)(&DAT_002e915c + iVar2) != 0)))) {
      iVar2 = FUN_000d12cc();
      if (iVar2 != 0) {
        *(int *)(iVar1 + 0x24) =
             *(int *)(iVar1 + 0x24) +
             (uint)(byte)(&DAT_002e9127)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
        FUN_00081f04();
      }
    }
    iVar2 = ((int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                   (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] * 0x23) / 100
            + (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73]) *
            (uint)(byte)(&DAT_002e9117)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
    iVar4 = iVar2 >> 0x1f;
    if (((int)((iVar2 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8 <=
         (int)*(short *)(in_EAX + 0x5e)) && (*(int *)(iVar1 + 0x82) == 0)) {
      FUN_00063b6d();
      uVar3 = 1;
      goto LAB_0006db4b;
    }
    FUN_0004d8d2();
  }
  uVar3 = 0;
LAB_0006db4b:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_06dda0 (Ghidra: FUN_0006dda0)
 * Prototype: ulonglong sub_06dda0(void);
 * Address  : 0x6dda0 (Size: 57 bytes)
 * Module   : shot.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x2796f, 0x51f4c, 0x52119, 0xcb33c
 * Callees  : 1 -> 0x64c4d
 ******************************************************************************/
ulonglong FUN_0006dda0(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x21) == 0) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 8) == 0)) {
    in_EAX = FUN_00064c4d();
    if ((char)in_EAX != '\0') {
      return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),1));
    }
  }
  return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
}

