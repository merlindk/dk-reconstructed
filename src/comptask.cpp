/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: comptask.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 53
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_01ad1f (Ghidra: FUN_0001ad1f)
 * Prototype: undefined4 sub_01ad1f(void);
 * Address  : 0x1ad1f (Size: 317 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1d5a1, 0x203f0
 ******************************************************************************/
undefined4 FUN_0001ad1f(void)

{
  ushort uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  undefined4 uVar7;
  int local_28;
  uint local_1c;
  
  uVar2 = (uint)*(byte *)(*(int *)(in_EAX + 0x24) + 0x5c3);
  iVar3 = FUN_0001d5a1();
  local_28 = -1;
  iVar4 = FUN_000203f0();
  if (iVar4 == 0) {
    for (iVar4 = 0; uVar1 = DAT_002eb9e4, iVar4 < 6; iVar4 = iVar4 + 1) {
      while( true ) {
        iVar5 = (uint)uVar1 * 0x45;
        if (&DAT_002ddd1b + iVar5 == &DAT_002ddd1b) break;
        if (((((&DAT_002ddd1b + iVar5)[*(char *)(extraout_ECX + 0xe9f) + 0x12] & 1) != 0) &&
            ((&DAT_002ddd1e)[iVar5] != *(char *)(extraout_ECX + 0xe9f))) &&
           ((uint)(DAT_002e8bee - *(int *)(in_EDX + 0x34)) < 2000)) goto LAB_0001ad63;
        uVar1 = *(ushort *)(&DAT_002ddd34 + iVar5);
      }
    }
    iVar5 = 0;
    iVar4 = extraout_ECX;
    local_1c = uVar2;
    do {
      if (((iVar5 != *(char *)(iVar4 + 0xe9f)) &&
          (uVar6 = FUN_0001d5a1(), iVar4 = extraout_ECX_00, (int)local_1c <= (int)uVar6)) &&
         (uVar6 != 0)) {
        local_28 = iVar5;
        local_1c = uVar6;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    if ((local_28 < 0) || ((int)local_1c <= (int)uVar2)) {
      if ((iVar3 / 2 <= (int)uVar2) && (uVar2 != 0)) goto LAB_0001ad63;
      uVar6 = DAT_002e8bee - *(int *)(in_EDX + 0x34);
      if (*(uint *)(in_EDX + 8) < uVar6) {
        uVar6 = *(uint *)(in_EDX + 8);
      }
      iVar3 = iVar3 - uVar2;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      if ((int)uVar6 < *(int *)(in_EDX + 8) / iVar3) {
        return 0;
      }
    }
    uVar7 = 1;
  }
  else {
LAB_0001ad63:
    uVar7 = 4;
  }
  return uVar7;
}

/******************************************************************************
 * Function : sub_01ae5c (Ghidra: FUN_0001ae5c)
 * Prototype: undefined4 sub_01ae5c(void);
 * Address  : 0x1ae5c (Size: 701 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x1aada, 0x1ba46, 0x1d2ff, 0x1d391, 0x1d5a1, 0x1e5de, 0x20436
 ******************************************************************************/
undefined4 FUN_0001ae5c(void)

{
  byte *pbVar1;
  code *pcVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  int iVar8;
  int *piVar9;
  int iVar10;
  byte bVar11;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int local_9c;
  int local_98;
  undefined4 local_44;
  int local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 auStack_30 [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  local_24 = 0x7fffffff;
  local_18 = *(int *)(in_EAX + 0x24);
  local_28 = 0;
  local_2c = 0;
  iVar10 = -1;
  uStack_a0 = 0x1ae9b;
  local_9c = in_EDX;
  local_98 = in_EAX;
  local_1c = FUN_0001d5a1();
  iVar8 = 0;
  uStack_a0 = 0x1aeb1;
  local_20 = FUN_0001d5a1();
  iVar6 = extraout_ECX;
  do {
    if (iVar8 != *(char *)(local_18 + 0xe9f)) {
      uStack_a0 = 0x1aed5;
      iVar4 = FUN_0001d5a1();
      iVar6 = extraout_ECX_00;
      if (extraout_ECX_00 <= iVar4) {
        iVar6 = iVar4;
        iVar10 = iVar8;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  uVar5 = DAT_002e8bee - *(int *)(local_9c + 0x34);
  if (*(uint *)(local_9c + 8) < uVar5) {
    uVar5 = *(uint *)(local_9c + 8);
  }
  iVar8 = (local_20 + iVar6) - local_1c;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (*(int *)(local_9c + 8) / iVar8 <= (int)uVar5) {
    if ((-1 < iVar10) && (local_1c < iVar6)) {
      uStack_a0 = 0x1af32;
      local_24 = FUN_0001d391();
      if (local_24 == 0) {
        local_24 = 0x7fffffff;
      }
    }
    if (local_20 != 0) {
      uStack_a0 = 0x1af5b;
      iVar6 = FUN_0001d391();
      if ((iVar6 != 0) &&
         ((iVar6 < local_24 ||
          (*(byte *)(local_18 + 0x919) < (byte)(&DAT_002e0ea2)[iVar10 * 0x1508])))) {
        local_28 = local_2c;
        local_44 = local_34;
        *(undefined2 *)(local_40 + (uint)bVar11 * -2) = auStack_30[(uint)bVar11 * -4];
      }
    }
  }
  if (local_28 != 0) {
    piVar9 = &local_9c;
    if (*(int *)(local_98 + 0x20) != 0) {
      local_38 = CONCAT22(local_38._2_2_,0x100);
      uStack_a0 = local_38;
      local_40[1] = (uint)CONCAT21((ushort)*(byte *)(local_28 + 9) << 8,
                                   *(undefined1 *)(local_28 + 8)) << 8;
      iStack_a4 = local_40[1];
      iStack_a8 = local_40[0];
      uStack_ac = local_44;
      FUN_0001d2ff();
      do {
        sVar3 = FUN_0001e5de();
      } while (sVar3 == 0);
      piVar9 = &uStack_ac;
      if ((sVar3 != -1) && (piVar9 = &uStack_ac, sVar3 != -5)) {
        pbVar7 = (byte *)(*(char *)(local_18 + 0xe9f) + local_28 + 0x12);
        *pbVar7 = *pbVar7 | 2;
        return 0;
      }
    }
    *(undefined4 *)((int)piVar9 + -4) = 0x1b019;
    pbVar7 = (byte *)FUN_0001ba46();
    if (pbVar7 != (byte *)0x0) {
      pbVar7[2] = 5;
      *pbVar7 = *pbVar7 | 4;
      *(undefined4 *)(pbVar7 + 0x70) = local_44;
      *(short *)(pbVar7 + (uint)bVar11 * -8 + 0x74) = (short)local_40[(uint)bVar11 * -2];
      *(ushort *)(pbVar7 + 0x76) = (ushort)*(byte *)(local_28 + 8) << 8;
      *(ushort *)(pbVar7 + 0x78) = (ushort)*(byte *)(local_28 + 9) << 8;
      pbVar7[0x71] = (pbVar7[0x71] / 3) * '\x03';
      pbVar7[0x73] = (pbVar7[0x73] / 3) * '\x03';
      pbVar7[0x77] = (pbVar7[0x77] / 3) * '\x03';
      pbVar7[0x79] = (pbVar7[0x79] / 3) * '\x03';
      pbVar7[0x7a] = 0;
      pbVar7[0x7b] = 1;
      *(short *)(pbVar7 + 0x8c) = (short)((local_9c - (local_98 + 0x38)) / 0x48);
      *(undefined2 *)(pbVar7 + 0x80) = *(undefined2 *)(local_28 + 1);
      pbVar1 = (byte *)(*(char *)(local_18 + 0xe9f) + local_28 + 0x12);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)((int)piVar9 + -4) = *(undefined4 *)(pbVar7 + 0x7a);
      *(undefined4 *)((int)piVar9 + -8) = *(undefined4 *)(pbVar7 + 0x76);
      *(int *)((int)piVar9 + -0xc) = local_40[0];
      *(undefined4 *)((int)piVar9 + -0x10) = local_44;
      *(undefined4 *)((int)piVar9 + -0x14) = 0x1b0e4;
      FUN_0001d2ff();
      pcVar2 = *(code **)(extraout_ECX_01 + 0x24);
      *(undefined4 *)((int)piVar9 + -0x14) = 0x1b0ea;
      (*pcVar2)();
      *(undefined4 *)((int)piVar9 + -0x14) = 0x1b0f4;
      FUN_0001aada();
      *(undefined4 *)((int)piVar9 + -0x14) = 0x1b104;
      FUN_00020436();
      return 2;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01b119 (Ghidra: FUN_0001b119)
 * Prototype: undefined4 sub_01b119(void);
 * Address  : 0x1b119 (Size: 67 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1d917, 0x203f0
 ******************************************************************************/
undefined4 FUN_0001b119(void)

{
  int in_EAX;
  int iVar1;
  undefined8 uVar2;
  
  if (&DAT_002ddd1b < &DAT_002ddd1b + (uint)*(ushort *)(*(int *)(in_EAX + 0x24) + 0xf) * 0x45) {
    uVar2 = FUN_0001d917();
    if ((int)uVar2 < *(int *)((int)((ulonglong)uVar2 >> 0x20) + 8)) {
      iVar1 = FUN_000203f0();
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01b15c (Ghidra: FUN_0001b15c)
 * Prototype: undefined4 sub_01b15c(void);
 * Address  : 0x1b15c (Size: 510 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x1aada, 0x1ba46, 0x1d2ff, 0x1d601, 0x1e5de, 0xe6a10
 ******************************************************************************/
undefined4 FUN_0001b15c(void)

{
  byte *pbVar1;
  code *pcVar2;
  short sVar3;
  undefined4 *in_EAX;
  uint uVar4;
  byte *pbVar5;
  int in_EDX;
  int *piVar6;
  byte bVar7;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int local_84;
  undefined4 *local_80;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [3];
  
  bVar7 = 0;
  piVar6 = &local_84;
  local_20[2] = in_EAX[9];
  local_20[1] = 0;
  uStack_88 = 0x1b181;
  local_84 = in_EDX;
  local_80 = in_EAX;
  uVar4 = FUN_0001d601();
  if (-2 < (int)uVar4) {
    if ((int)uVar4 < 0) {
      *(byte *)(local_84 + 0x44) = *(byte *)(local_84 + 0x44) | 4;
      return 0;
    }
    if (uVar4 == 4) {
      return 0;
    }
  }
  if (uVar4 <= DAT_002e8bee / *(uint *)(local_84 + 0xc) + *(int *)(local_84 + 0x14)) {
    uStack_88 = 0x1b1c6;
    FUN_000e6a10();
    local_2c._0_2_ =
         CONCAT11((char)(*(ushort *)(local_20[1] + 6) / 3) * '\x03',(undefined1)local_2c);
    local_2c = CONCAT13((char)(*(ushort *)(local_20[1] + 8) / 3) * '\x03',(undefined3)local_2c);
    local_24 = CONCAT22((local_24._2_2_ / 3) * 3,((ushort)local_24 / 3) * 3);
    if (local_80[8] != 0) {
      uStack_88 = local_28;
      uStack_8c = local_2c;
      iStack_90 = local_20[0];
      piVar6 = &uStack_94;
      uStack_94 = local_24;
      uVar4 = 0;
      FUN_0001d2ff();
      while (sVar3 = FUN_0001e5de(), sVar3 == 0) {
        uVar4 = uVar4 + 1;
      }
      if ((sVar3 != -1) && (sVar3 != -5)) {
        pbVar5 = (byte *)(*(char *)(local_20[2] + 0xe9f) + local_20[1] + 1);
        *pbVar5 = *pbVar5 | 2;
        return 0;
      }
      if (DAT_002e8bee / *(uint *)(local_84 + 0xc) + *(int *)(local_84 + 0x14) < uVar4) {
        return 0;
      }
    }
    *(undefined4 *)((int)piVar6 + -4) = 0x1b282;
    pbVar5 = (byte *)FUN_0001ba46();
    if (pbVar5 != (byte *)0x0) {
      pbVar5[2] = 6;
      *(undefined4 *)(pbVar5 + 0x70) = local_24;
      *(short *)(pbVar5 + (uint)bVar7 * -8 + 0x74) = (short)local_20[(uint)bVar7 * -2];
      *(undefined4 *)(pbVar5 + 0x76) = local_2c;
      *(undefined2 *)(pbVar5 + (uint)bVar7 * -8 + 0x7a) =
           *(undefined2 *)(&local_28 + (uint)bVar7 * -2);
      *(undefined4 *)(pbVar5 + 0x86) = *(undefined4 *)(local_84 + 0x10);
      pbVar5[0x71] = (pbVar5[0x71] / 3) * '\x03';
      pbVar5[0x73] = (pbVar5[0x73] / 3) * '\x03';
      *pbVar5 = *pbVar5 | 4;
      *(short *)(pbVar5 + 0x8c) = (short)((local_84 - (int)(local_80 + 0xe)) / 0x48);
      *(short *)(pbVar5 + 0x80) = (short)((local_20[1] + -0x2eb552) / 0x1c);
      pbVar1 = (byte *)(*(char *)(local_20[2] + 0xe9f) + local_20[1] + 1);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)((int)piVar6 + -4) = *(undefined4 *)(pbVar5 + 0x7a);
      *(undefined4 *)((int)piVar6 + -8) = *(undefined4 *)(pbVar5 + 0x76);
      *(undefined4 *)((int)piVar6 + -0xc) = *(undefined4 *)(pbVar5 + 0x74);
      *(undefined4 *)((int)piVar6 + -0x10) = *(undefined4 *)(pbVar5 + 0x70);
      *(undefined4 *)((int)piVar6 + -0x14) = 0x1b32d;
      FUN_0001d2ff();
      pcVar2 = *(code **)(local_84 + 0x24);
      *(undefined4 *)((int)piVar6 + -0x14) = 0x1b333;
      (*pcVar2)();
      *(undefined4 *)((int)piVar6 + -0x14) = 0x1b33d;
      FUN_0001aada();
      *local_80 = 2;
      return 2;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01b35a (Ghidra: FUN_0001b35a)
 * Prototype: undefined4 sub_01b35a(void);
 * Address  : 0x1b35a (Size: 83 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1e38d
 ******************************************************************************/
undefined4 FUN_0001b35a(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  if (*(uint *)(in_EDX + 0x10) < DAT_002e8bee) {
    iVar2 = FUN_0001e38d();
    if (iVar2 == 1) {
      if (*(short *)(iVar1 + 0x5d8) == 0) {
        return 1;
      }
      return 4;
    }
    if (iVar2 == 0) {
      *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 4;
      return 0;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01b3ad (Ghidra: FUN_0001b3ad)
 * Prototype: undefined4 sub_01b3ad(void);
 * Address  : 0x1b3ad (Size: 35 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1aabb
 ******************************************************************************/
undefined4 FUN_0001b3ad(void)

{
  undefined4 *in_EAX;
  int in_EDX;
  
  *(int *)(in_EDX + 0x40) = *(int *)(in_EDX + 0x40) + 1;
  if (*(int *)(in_EDX + 0xc) < *(int *)(in_EDX + 0x40)) {
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 1;
    FUN_0001aabb();
    *in_EAX = 2;
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_01b3d0 (Ghidra: FUN_0001b3d0)
 * Prototype: undefined4 sub_01b3d0(void);
 * Address  : 0x1b3d0 (Size: 7 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1b721
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001b3d0(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_01b3d7 (Ghidra: FUN_0001b3d7)
 * Prototype: undefined4 sub_01b3d7(void);
 * Address  : 0x1b3d7 (Size: 394 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1aada, 0x1d966, 0x1df28
 ******************************************************************************/
undefined4 FUN_0001b3d7(void)

{
  uint *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_18;
  
  iVar3 = *(int *)(in_EAX + 0x24);
  if (*(int *)(in_EAX + 0x10) < 1) {
    uVar6 = 4;
  }
  else {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar4 = DAT_002e8bf6 >> 0xd;
    DAT_002e8bf6 = uVar4 | DAT_002e8bf6 * 0x80000;
    uVar4 = uVar4 & 0x3f;
    do {
      local_18 = 0;
      while ((iVar2 = (int)uVar4 >> 0x1f, local_18 < 0x40 &&
             ((*(uint *)(in_EAX + ((int)((uVar4 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3) * 4 +
                        0x13c4) & 1 << ((byte)((int)uVar4 % 8) & 0x1f)) != 0))) {
        uVar4 = (int)(uVar4 + 1) % 0x40;
        local_18 = local_18 + 1;
      }
      if (local_18 == 0x40) {
        *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 4;
        return 3;
      }
      iVar2 = (int)((uVar4 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
      puVar1 = (uint *)(in_EAX + iVar2 * 4 + 0x13c4);
      *puVar1 = *puVar1 | 1 << ((byte)((int)uVar4 % 8) & 0x1f);
      iVar5 = ((int)uVar4 % 8) * 8 + 4;
      iVar2 = iVar2 * 8 + 4;
    } while ((uint)((&DAT_002d33ca)
                    [((&DAT_0019033b)[iVar5 * 3] + (&DAT_0019033b)[iVar2 * 3] * 0x55) * 6] & 7) ==
             (int)*(char *)(iVar3 + 0xe9f));
    iVar3 = FUN_0001df28(iVar5 * 3 & 0xffff,iVar2 * 3 & 0xffff,0,0);
    if (0 < iVar3) {
      FUN_0001d966();
    }
    (**(code **)(in_EDX + 0x24))();
    FUN_0001aada();
    uVar6 = 1;
  }
  return uVar6;
}

/******************************************************************************
 * Function : sub_01b561 (Ghidra: FUN_0001b561)
 * Prototype: undefined4 sub_01b561(void);
 * Address  : 0x1b561 (Size: 200 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1aada, 0x1dbbc, 0x1ff84, 0x2002c, 0x20596
 ******************************************************************************/
undefined4 FUN_0001b561(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  int aiStack_60 [19];
  
  if ((((*(int *)(&DAT_002e15e5 + *(char *)(*(int *)(in_EAX + 0x24) + 0xe9f) * 0x1508) != 0) &&
       (*(int *)(in_EDX + 0x10) <=
        (int)((longlong)(ulonglong)((uint)*(byte *)(*(int *)(in_EAX + 0x24) + 0x919) * 100) /
             (longlong)*(int *)(&DAT_002e15e5 + *(char *)(*(int *)(in_EAX + 0x24) + 0xe9f) * 0x1508)
             ))) && (aiStack_60[0x12] = in_EDX, iVar1 = FUN_00020596(), iVar1 == 0)) &&
     (iVar1 = FUN_0002002c(),
     *(int *)(aiStack_60[0x12] + 0xc) <= (iVar1 * *(int *)(aiStack_60[0x12] + 8)) / 100)) {
    FUN_0001dbbc();
    for (iVar1 = 0; iVar1 < 0x50; iVar1 = iVar1 + 0x10) {
      if ((*(int *)((int)aiStack_60 + iVar1) != 0) && (iVar2 = FUN_0001ff84(), iVar2 == 1)) {
        **(undefined2 **)((int)aiStack_60 + iVar1) = 0;
        return 1;
      }
    }
  }
  FUN_0001aada();
  return 4;
}

/******************************************************************************
 * Function : sub_01b629 (Ghidra: FUN_0001b629)
 * Prototype: undefined4 sub_01b629(void);
 * Address  : 0x1b629 (Size: 248 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1dbbc, 0x1ff84, 0x2002c, 0x20596
 ******************************************************************************/
undefined4 FUN_0001b629(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  int aiStack_64 [20];
  
  aiStack_64[0x13] = *(int *)(in_EAX + 0x24);
  if ((((*(int *)(&DAT_002e15e5 + *(char *)(aiStack_64[0x13] + 0xe9f) * 0x1508) != 0) &&
       (*(int *)(in_EDX + 0x10) <=
        (int)((longlong)(ulonglong)((uint)*(byte *)(aiStack_64[0x13] + 0x919) * 100) /
             (longlong)*(int *)(&DAT_002e15e5 + *(char *)(aiStack_64[0x13] + 0xe9f) * 0x1508)))) &&
      (iVar1 = FUN_0002002c(), *(int *)(in_EDX + 0xc) <= (iVar1 * *(int *)(in_EDX + 8)) / 100)) &&
     (iVar1 = FUN_00020596(), iVar1 == 0)) {
    FUN_0001dbbc();
    for (iVar1 = 0; iVar1 < 0x50; iVar1 = iVar1 + 0x10) {
      if (((*(int *)((int)aiStack_64 + iVar1 + 4) != 0) &&
          ((int)((int)(*(int *)(in_EDX + 8) *
                      (uint)(byte)(&DAT_002e0ea2)[*(int *)((int)aiStack_64 + iVar1) * 0x1508]) / 100
                + (uint)(byte)(&DAT_002e0ea2)[*(int *)((int)aiStack_64 + iVar1) * 0x1508]) <
           (int)(uint)*(byte *)(aiStack_64[0x13] + 0x919))) && (iVar2 = FUN_0001ff84(), iVar2 == 1))
      {
        **(undefined2 **)((int)aiStack_64 + iVar1 + 4) = 0;
        return 1;
      }
    }
  }
  FUN_0001aada();
  return 4;
}

/******************************************************************************
 * Function : sub_01b721 (Ghidra: FUN_0001b721)
 * Prototype: void sub_01b721(void);
 * Address  : 0x1b721 (Size: 65 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1b3d0, 0x51374
 ******************************************************************************/
void FUN_0001b721(void)

{
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  FUN_00051374();
  FUN_0001b3d0();
  return;
}

/******************************************************************************
 * Function : sub_01b762 (Ghidra: FUN_0001b762)
 * Prototype: undefined4 sub_01b762(void);
 * Address  : 0x1b762 (Size: 323 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1ba46, 0x1dd33, 0x1e38d, 0x2035a
 ******************************************************************************/
undefined4 FUN_0001b762(void)

{
  undefined4 *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int in_EDX;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = (int)((uint)*(byte *)(in_EAX[9] + 0x919) * *(int *)(in_EDX + 8)) / 100;
  *in_EAX = 2;
  iVar2 = (uint)*(ushort *)(in_EDX + 0x40) * 0x94;
  iVar3 = FUN_0001dd33();
  if (iVar3 == 0) {
    if ((((*(int *)(in_EDX + 0xc) <= iVar1) && (iVar3 = FUN_0001e38d(), iVar3 == 1)) &&
        (iVar3 = FUN_0002035a(), iVar3 != 0)) && (iVar3 = FUN_0001ba46(), iVar3 != 0)) {
      *(undefined1 *)(iVar3 + 2) = 8;
      *(undefined1 *)(iVar3 + 1) = 0;
      *(undefined4 *)(iVar3 + 0x76) = *(undefined4 *)(&DAT_002c921d + iVar2);
      *(undefined2 *)(iVar3 + 0x7a + (uint)bVar5 * -8) =
           *(undefined2 *)(&DAT_002c9221 + (uint)bVar5 * -8 + iVar2);
      *(undefined4 *)(iVar3 + 10) = DAT_002e8bee;
      *(int *)(iVar3 + 0x7c) = iVar1;
      uVar4 = *(undefined2 *)(&DAT_002c9289 + (uint)*(ushort *)(in_EDX + 0x40) * 0x94);
      *(undefined4 *)(iVar3 + 0x8e) = 0x9c4;
LAB_0001b84e:
      *(undefined2 *)(iVar3 + 0x86) = uVar4;
      return 1;
    }
  }
  else {
    iVar3 = FUN_0001ba46();
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 2) = 9;
      *(undefined4 *)(iVar3 + 0x76) = *(undefined4 *)(&DAT_002c921d + iVar2);
      *(undefined2 *)(iVar3 + 0x7a + (uint)bVar5 * -8) =
           *(undefined2 *)(&DAT_002c9221 + (uint)bVar5 * -8 + iVar2);
      *(undefined4 *)(iVar3 + 10) = DAT_002e8bee;
      *(int *)(iVar3 + 0x7c) = iVar1;
      uVar4 = *(undefined2 *)(&DAT_002c9289 + (uint)*(ushort *)(in_EDX + 0x40) * 0x94);
      goto LAB_0001b84e;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01b8a5 (Ghidra: FUN_0001b8a5)
 * Prototype: undefined4 sub_01b8a5(void);
 * Address  : 0x1b8a5 (Size: 14 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001b8a5(void)

{
  undefined4 *in_EAX;
  int in_EDX;
  
  *in_EAX = 2;
  *(undefined4 *)(in_EDX + 0x34) = DAT_002e8bee;
  return 0;
}

/******************************************************************************
 * Function : sub_01b8b3 (Ghidra: FUN_0001b8b3)
 * Prototype: undefined4 sub_01b8b3(void);
 * Address  : 0x1b8b3 (Size: 3 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001b8b3(void)

{
  return 0;
}

/******************************************************************************
 * Function : sub_01b8b6 (Ghidra: FUN_0001b8b6)
 * Prototype: undefined4 sub_01b8b6(void);
 * Address  : 0x1b8b6 (Size: 4 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001b8b6(void)

{
  undefined4 *in_EAX;
  int in_EDX;
  
  *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) & 0xf7;
  *in_EAX = 2;
  return 0;
}

/******************************************************************************
 * Function : sub_01b8ba (Ghidra: FUN_0001b8ba)
 * Prototype: undefined4 sub_01b8ba(void);
 * Address  : 0x1b8ba (Size: 9 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001b8ba(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 2;
  return 0;
}

/******************************************************************************
 * Function : sub_01b8c4 (Ghidra: FUN_0001b8c4)
 * Prototype: undefined4 sub_01b8c4(void);
 * Address  : 0x1b8c4 (Size: 59 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe8ca8
 ******************************************************************************/
undefined4 FUN_0001b8c4(void)

{
  int extraout_ECX;
  int in_EDX;
  undefined1 *unaff_EBX;
  
  *unaff_EBX = 0;
  if ((*(byte *)(in_EDX + 2) != 0) && (*(byte *)(in_EDX + 2) < 5)) {
    FUN_000e8ca8();
    in_EDX = extraout_ECX;
  }
  return *(undefined4 *)(&DAT_00179344 + (uint)*(byte *)(in_EDX + 2) * 8);
}

/******************************************************************************
 * Function : dk_computer_task_state_01b8ff (Ghidra: FUN_0001b8ff)
 * Prototype: undefined8 dk_computer_task_state_01b8ff(void);
 * Address  : 0x1b8ff (Size: 121 bytes)
 * Module   : comptask.cpp [direct_file_string_xref]
 * OrigLine : comptask.cpp:82 ("Bad Computer Task State")
 * Naming   : String 'Bad Computer Task State'
 * Callers  : 1 -> 0x21416
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1622a8: "comptask.cpp"
 *   - 0x162290: "Bad Computer Task State"
 ******************************************************************************/
undefined8 FUN_0001b8ff(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int iVar3;
  
  uVar1 = *(ushort *)(in_EAX + 0x14c6);
  iVar3 = 0;
  while( true ) {
    iVar2 = (uint)uVar1 * 0x94;
    if ((*(int *)(in_EAX + 0x10) < 1) || (&DAT_002c9203 + iVar2 < &DAT_002c9204)) break;
    uVar1 = *(ushort *)(&DAT_002c9295 + iVar2);
    if (((&DAT_002c9203)[iVar2] & 1) != 0) {
      if ((&DAT_002c9205)[iVar2] == '\0') {
        FUN_000ddaf0(); /* LbErrorLog("comptask.cpp", line 82, "Bad Computer Task State") */
        in_EAX = extraout_ECX;
      }
      else {
        iVar3 = iVar3 + 1;
        (**(code **)(&DAT_00179348 + (uint)(byte)(&DAT_002c9205)[iVar2] * 8))();
        in_EAX = extraout_ECX_00;
      }
    }
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_01b978 (Ghidra: FUN_0001b978)
 * Prototype: void sub_01b978(void);
 * Address  : 0x1b978 (Size: 53 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1be21, 0x1caf6
 * Callees  : 1 -> 0x1bb1b
 ******************************************************************************/
void FUN_0001b978(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  iVar1 = (uint)*(ushort *)(in_EDX + 0x8c) * 0x48 + in_EAX + 0x38;
  if ((iVar1 != 0) && (in_EAX + 0x38 + (uint)*(ushort *)(in_EAX + 0x14c4) * 0x48 != iVar1)) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xd7;
  }
  FUN_0001bb1b();
  return;
}

/******************************************************************************
 * Function : sub_01b9ad (Ghidra: FUN_0001b9ad)
 * Prototype: void sub_01b9ad(void);
 * Address  : 0x1b9ad (Size: 46 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1bb96, 0x1bc3e, 0x1bf7d
 * Callees  : 2 -> 0x1aabb, 0x1bb1b
 ******************************************************************************/
void FUN_0001b9ad(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(byte *)((uint)*(ushort *)(in_EDX + 0x8c) * 0x48 + in_EAX + 0x7c) & 0x20) != 0) {
    FUN_0001aabb();
  }
  FUN_0001bb1b();
  return;
}

/******************************************************************************
 * Function : sub_01b9db (Ghidra: FUN_0001b9db)
 * Prototype: void sub_01b9db(void);
 * Address  : 0x1b9db (Size: 67 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1bb1b
 ******************************************************************************/
void FUN_0001b9db(void)

{
  undefined4 uVar1;
  int in_EAX;
  int in_EDX;
  int iVar2;
  
  iVar2 = in_EAX + 0x38 + (uint)*(ushort *)(in_EDX + 0x8c) * 0x48;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0x28))();
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    uVar1 = DAT_002e8bee;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) | 1;
    *(undefined4 *)(iVar2 + 0x38) = uVar1;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xdf;
  }
  FUN_0001bb1b();
  return;
}

/******************************************************************************
 * Function : sub_01ba1e (Ghidra: FUN_0001ba1e)
 * Prototype: void sub_01ba1e(void);
 * Address  : 0x1ba1e (Size: 40 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1c3d3, 0x1ca08
 * Callees  : 2 -> 0x1aada, 0x1bb1b
 ******************************************************************************/
void FUN_0001ba1e(void)

{
  FUN_0001aada();
  FUN_0001bb1b();
  return;
}

/******************************************************************************
 * Function : sub_01ba46 (Ghidra: FUN_0001ba46)
 * Prototype: byte * sub_01ba46(void);
 * Address  : 0x1ba46 (Size: 213 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 20 -> 0x18d28, 0x18dcd, 0x18ed3, 0x18ffe, 0x192c1, 0x197a9, 0x19d32, 0x1a08c, 0x1a158, 0x1a384 ...
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
byte * FUN_0001ba46(void)

{
  int in_EAX;
  byte *pbVar1;
  byte *extraout_ECX;
  int in_EDX;
  undefined *puVar2;
  
  pbVar1 = &DAT_002c9297;
  while( true ) {
    if (&DAT_002ccbd3 <= pbVar1) {
      return (byte *)0x0;
    }
    if ((*pbVar1 & 1) == 0) break;
    pbVar1 = pbVar1 + 0x94;
  }
  FUN_000e6a10();
  puVar2 = &DAT_002c9203 + (uint)*(ushort *)(in_EAX + 0x14c6) * 0x94;
  if (&DAT_002c9203 < puVar2) {
    if (in_EDX == 0) {
      for (; *(short *)(puVar2 + 0x92) != 0;
          puVar2 = &DAT_002c9203 + (uint)*(ushort *)(puVar2 + 0x92) * 0x94) {
      }
      *(short *)(puVar2 + 0x92) = (short)((int)(extraout_ECX + -0x2c9203) / 0x94);
      goto LAB_0001bb02;
    }
    *(undefined2 *)(extraout_ECX + 0x92) = *(undefined2 *)(in_EAX + 0x14c6);
  }
  *(short *)(in_EAX + 0x14c6) = (short)((int)(extraout_ECX + -0x2c9203) / 0x94);
LAB_0001bb02:
  *extraout_ECX = *extraout_ECX | 1;
  *(undefined4 *)(extraout_ECX + 10) = DAT_002e8bee;
  return extraout_ECX;
}

/******************************************************************************
 * Function : sub_01bb1b (Ghidra: FUN_0001bb1b)
 * Prototype: undefined4 sub_01bb1b(void);
 * Address  : 0x1bb1b (Size: 123 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 15 -> 0x1b978, 0x1b9ad, 0x1b9db, 0x1ba1e, 0x1c0ec, 0x1c1f1, 0x1c3d3, 0x1c563, 0x1c73c, 0x1c7fa ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001bb1b(void)

{
  byte *pbVar1;
  int in_EAX;
  byte *in_EDX;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = (uint)*(ushort *)(in_EAX + 0x14c6) * 0x94;
  pbVar1 = &DAT_002c9203 + iVar2;
  if (in_EDX == &DAT_002c9203 + iVar2) {
    *(undefined2 *)(in_EAX + 0x14c6) = *(undefined2 *)(&DAT_002c9295 + iVar2);
    in_EDX[0x92] = 0;
    in_EDX[0x93] = 0;
    *in_EDX = *in_EDX & 0xfe;
    return 0;
  }
  do {
    pbVar3 = pbVar1;
    if (pbVar3 < &DAT_002c9204) {
      return 0;
    }
    pbVar1 = &DAT_002c9203 + (uint)*(ushort *)(pbVar3 + 0x92) * 0x94;
  } while (&DAT_002c9203 + (uint)*(ushort *)(pbVar3 + 0x92) * 0x94 != in_EDX);
  *(undefined2 *)(pbVar3 + 0x92) = *(undefined2 *)(in_EDX + 0x92);
  in_EDX[0x92] = 0;
  in_EDX[0x93] = 0;
  *in_EDX = *in_EDX & 0xfe;
  return 1;
}

/******************************************************************************
 * Function : sub_01bb96 (Ghidra: FUN_0001bb96)
 * Prototype: undefined4 sub_01bb96(void);
 * Address  : 0x1bb96 (Size: 168 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1b9ad, 0x1d34b, 0x1e5de, 0x20436, 0x20563
 ******************************************************************************/
undefined4 FUN_0001bb96(void)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  byte *in_EDX;
  
  uVar2 = FUN_0001e5de(in_EDX + 0xe);
  if (uVar2 < 0xfffd) {
    if (uVar2 == 0xfffb) {
      bVar1 = in_EDX[2];
      in_EDX[2] = 0x10;
      in_EDX[3] = bVar1;
      uVar3 = 4;
    }
    else {
      if ((*in_EDX & 4) != 0) {
        *in_EDX = *in_EDX & 0xfb;
        FUN_00020563();
      }
      uVar3 = 2;
    }
  }
  else if (uVar2 == 0xffff) {
    FUN_00020436();
    FUN_0001d34b(*(undefined4 *)(in_EDX + 100),*(undefined4 *)(in_EDX + 0x68),
                 *(undefined4 *)(in_EDX + 0x86));
    uVar3 = 1;
    in_EDX[2] = 2;
  }
  else {
    FUN_0001b9ad();
    uVar3 = 0;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_01bc3e (Ghidra: FUN_0001bc3e)
 * Prototype: undefined4 sub_01bc3e(void);
 * Address  : 0x1bc3e (Size: 483 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1b9ad, 0x1df28, 0x401aa
 ******************************************************************************/
undefined4 FUN_0001bc3e(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  undefined1 *puVar3;
  uint *puVar4;
  uint auStack_3c [8];
  uint local_1c;
  uint local_18;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  if ((*(int *)(iVar1 + 0x116f) == 0) ||
     (*(int *)(iVar1 + 0x116f) <
      (int)((uint)*(ushort *)(iVar1 + 0x93d) * *(int *)(in_EAX + 0x1c)) / 100)) {
    local_1c = (uint)*(byte *)(in_EDX + 0x1b);
    local_18 = (uint)*(byte *)(in_EDX + 0x1d);
    puVar4 = auStack_3c + 5;
    auStack_3c[5] = in_EDX;
    for (auStack_3c[7] = *(int *)(in_EDX + 0x2c); auStack_3c[7] != 0;
        auStack_3c[7] = auStack_3c[7] + -1) {
      puVar3 = (undefined1 *)puVar4;
      if (0 < *(int *)(in_EDX + 0x38)) {
        if ((local_1c < 0xff) && (local_18 < 0xff)) {
          if ((((&DAT_001921d4)
                [(uint)(byte)(&DAT_002d33c5)[((local_1c + 1) / 3 + ((local_18 + 1) / 3) * 0x55) * 6]
                 * 0x16] != '\0') &&
              ((byte)(&DAT_002d33c5)[((local_1c + 1) / 3 + ((local_18 + 1) / 3) * 0x55) * 6] != 0x34
              )) && ((iVar2 = (local_18 * 0x100 + local_1c + 0x101) * 5,
                     (*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) == 0 ||
                     (((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) != 0 &&
                      ((uint)((&DAT_002d33ca)
                              [((&DAT_0019033f)[local_1c] + (&DAT_0019033f)[local_18] * 0x55) * 6] &
                             7) == (int)*(char *)(iVar1 + 0xe9f))))))) {
            *(undefined4 *)((int)puVar4 + -4) = 0x1bdc2;
            iVar2 = FUN_000401aa();
            if (iVar2 < 0) {
              *(undefined4 *)((int)puVar4 + -4) = 1;
              *(undefined4 *)((int)puVar4 + -8) = 1;
              *(uint *)((int)puVar4 + -0xc) = local_18 & 0xffff;
              puVar3 = (undefined1 *)((int)puVar4 + -0x10);
              *(uint *)((int)puVar4 + -0x10) = local_1c & 0xffff;
              *(undefined4 *)((int)puVar4 + -0x14) = 0x1bdf6;
              iVar2 = FUN_0001df28();
              if (iVar2 < 1) {
                *(undefined4 *)((int)puVar4 + -0x14) = 0x1be09;
                FUN_0001b9ad();
                return 0;
              }
            }
          }
          *(int *)(in_EDX + 0x44) = *(int *)(in_EDX + 0x44) + 1;
          if (*(int *)(in_EDX + 0x40) <= *(int *)(in_EDX + 0x44)) {
            *(undefined1 *)(auStack_3c[5] + 2) = 3;
            return 1;
          }
        }
        local_1c = local_1c + *(int *)(&DAT_00174dd0 + *(int *)(in_EDX + 0x3c) * 8);
        local_18 = local_18 + *(int *)(&DAT_00174dd4 + *(int *)(in_EDX + 0x3c) * 8);
      }
      *(int *)(in_EDX + 0x38) = *(int *)(in_EDX + 0x38) + -1;
      if (*(int *)(in_EDX + 0x38) < 1) {
        *(int *)(in_EDX + 0x30) = *(int *)(in_EDX + 0x30) + 1;
        if ((*(byte *)(in_EDX + 0x30) & 1) != 0) {
          *(int *)(in_EDX + 0x34) = *(int *)(in_EDX + 0x34) + 1;
        }
        *(undefined4 *)(in_EDX + 0x38) = *(undefined4 *)(in_EDX + 0x34);
        *(uint *)(in_EDX + 0x3c) = *(int *)(in_EDX + 0x3c) + 1U & 3;
      }
      puVar4 = (uint *)puVar3;
    }
    *(undefined1 *)(in_EDX + 0x1b) = (undefined1)local_1c;
    *(undefined1 *)(in_EDX + 0x1d) = (undefined1)local_18;
  }
  return 2;
}

/******************************************************************************
 * Function : sub_01be21 (Ghidra: FUN_0001be21)
 * Prototype: undefined4 sub_01be21(void);
 * Address  : 0x1be21 (Size: 348 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1b978, 0x1d34b
 ******************************************************************************/
undefined4 FUN_0001be21(void)

{
  bool bVar1;
  int in_EAX;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int in_EDX;
  uint uVar4;
  int local_38;
  int local_28;
  uint local_20;
  int local_1c;
  
  local_1c = 0;
  local_38 = 0;
  local_20 = 0;
  uVar4 = (uint)*(byte *)(in_EDX + 0x67);
  uVar2 = (uint)*(byte *)(in_EDX + 0x65);
  if ((uint)(DAT_002e8bee - *(int *)(in_EDX + 10)) < 0x1d4d) {
    bVar1 = false;
    while (local_1c < *(int *)(in_EDX + 0x86)) {
      if (bVar1) {
        local_38 = local_38 + 1;
      }
      for (local_28 = local_38; local_28 != 0; local_28 = local_28 + -1) {
        if ((uVar2 < 0xff) && (uVar4 < 0xff)) {
          if (((&DAT_002d33c5)[(uVar2 / 3 + (uVar4 / 3) * 0x55) * 6] != '\v') ||
             ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[uVar2] + (&DAT_0019033b)[uVar4] * 0x55) * 6] &
                    7) != (int)*(char *)(*(int *)(in_EAX + 0x24) + 0xe9f))) {
            return 4;
          }
          local_1c = local_1c + 1;
          if (*(int *)(in_EDX + 0x86) <= local_1c) goto LAB_0001bf5b;
        }
        uVar2 = uVar2 + *(int *)(&DAT_00174dd0 + local_20 * 8);
        uVar4 = uVar4 + *(int *)(&DAT_00174dd4 + local_20 * 8);
      }
      local_20 = local_20 + 1 & 3;
      bVar1 = (bool)(bVar1 ^ 1);
    }
LAB_0001bf5b:
    *(undefined1 *)(in_EDX + 2) = 4;
    FUN_0001d34b(*(undefined4 *)(in_EDX + 100),*(undefined4 *)(in_EDX + 0x68),
                 *(undefined4 *)(in_EDX + 0x86));
    uVar3 = extraout_ECX;
  }
  else {
    FUN_0001b978();
    uVar3 = 0;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_01bf7d (Ghidra: FUN_0001bf7d)
 * Prototype: undefined4 sub_01bf7d(void);
 * Address  : 0x1bf7d (Size: 367 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1b9ad, 0x1df28
 ******************************************************************************/
undefined4 FUN_0001bf7d(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  undefined1 *puVar2;
  uint *puVar3;
  uint auStack_40 [8];
  int local_20;
  uint local_1c;
  uint local_18;
  
  auStack_40[6] = *(int *)(in_EAX + 0x24);
  auStack_40[5] = *(uint *)(in_EDX + 0x80);
  if ((int)*(short *)(&DAT_002eadcd + auStack_40[5] * 4) < *(int *)(auStack_40[6] + 0xaf9)) {
    local_1c = (uint)*(byte *)(in_EDX + 0x1b);
    local_18 = (uint)*(byte *)(in_EDX + 0x1d);
    puVar3 = auStack_40 + 5;
    for (local_20 = *(int *)(in_EDX + 0x2c); local_20 != 0; local_20 = local_20 + -1) {
      puVar2 = (undefined1 *)puVar3;
      if (0 < *(int *)(in_EDX + 0x38)) {
        if ((((local_1c < 0xff) && (local_18 < 0xff)) &&
            ((&DAT_002d33c5)[(local_1c / 3 + (local_18 / 3) * 0x55) * 6] == '\v')) &&
           ((uint)((&DAT_002d33ca)
                   [((&DAT_0019033b)[local_1c] + (&DAT_0019033b)[local_18] * 0x55) * 6] & 7) ==
            (int)*(char *)(auStack_40[6] + 0xe9f))) {
          *(uint *)((int)puVar3 + -4) = auStack_40[5] & 0xffff;
          *(undefined4 *)((int)puVar3 + -8) = 1;
          *(uint *)((int)puVar3 + -0xc) = local_18 & 0xffff;
          *(uint *)((int)puVar3 + -0x10) = local_1c & 0xffff;
          *(undefined4 *)((int)puVar3 + -0x14) = 0x1c0b0;
          iVar1 = FUN_0001df28();
          puVar2 = (undefined1 *)((int)puVar3 + -0x10);
          if ((0 < iVar1) &&
             (*(int *)(in_EDX + 0x44) = *(int *)(in_EDX + 0x44) + 1,
             puVar2 = (undefined1 *)((int)puVar3 + -0x10),
             *(int *)(in_EDX + 0x40) <= *(int *)(in_EDX + 0x44))) {
            *(undefined4 *)((int)puVar3 + -0x14) = 0x1c0d1;
            FUN_0001b9ad();
            return 1;
          }
        }
        local_1c = local_1c + *(int *)(&DAT_00174dd0 + *(int *)(in_EDX + 0x3c) * 8);
        local_18 = local_18 + *(int *)(&DAT_00174dd4 + *(int *)(in_EDX + 0x3c) * 8);
      }
      *(int *)(in_EDX + 0x38) = *(int *)(in_EDX + 0x38) + -1;
      if (*(int *)(in_EDX + 0x38) < 1) {
        *(int *)(in_EDX + 0x30) = *(int *)(in_EDX + 0x30) + 1;
        if ((*(byte *)(in_EDX + 0x30) & 1) != 0) {
          *(int *)(in_EDX + 0x34) = *(int *)(in_EDX + 0x34) + 1;
        }
        *(undefined4 *)(in_EDX + 0x38) = *(undefined4 *)(in_EDX + 0x34);
        *(uint *)(in_EDX + 0x3c) = *(int *)(in_EDX + 0x3c) + 1U & 3;
      }
      puVar3 = (uint *)puVar2;
    }
    *(undefined1 *)(in_EDX + 0x1b) = (undefined1)local_1c;
    *(undefined1 *)(in_EDX + 0x1d) = (undefined1)local_18;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01c0ec (Ghidra: FUN_0001c0ec)
 * Prototype: uint sub_01c0ec(void);
 * Address  : 0x1c0ec (Size: 261 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1bb1b, 0x1e5de, 0x20563
 ******************************************************************************/
uint FUN_0001c0ec(void)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  byte *in_EDX;
  uint uVar5;
  
  iVar2 = *(int *)(in_EAX + 0x24);
  uVar5 = 0;
  iVar4 = 0;
  do {
    if (7 < iVar4) {
LAB_0001c174:
      if (uVar5 == 0) {
        sVar3 = FUN_0001e5de();
        uVar5 = (uint)sVar3;
        if ((*in_EDX & 4) != 0) {
          *in_EDX = *in_EDX & 0xfb;
          FUN_00020563();
        }
      }
      if (uVar5 < 0xfffffffd) {
        if (uVar5 == 0xfffffffb) {
          bVar1 = in_EDX[2];
          in_EDX[2] = 0x10;
          uVar5 = 4;
          in_EDX[3] = bVar1;
        }
      }
      else {
        if (uVar5 != 0xffffffff) {
          (&DAT_002ddd2d)[(uint)*(ushort *)(in_EDX + 0x80) * 0x45 + (int)*(char *)(iVar2 + 0xe9f)] =
               (&DAT_002ddd2d)
               [(uint)*(ushort *)(in_EDX + 0x80) * 0x45 + (int)*(char *)(iVar2 + 0xe9f)] | 2;
        }
        FUN_0001bb1b();
      }
      return uVar5;
    }
    if ((&DAT_002ddd1b <
         &DAT_002ddd1b +
         (uint)(byte)(&DAT_002d33c8)
                     [((&DAT_0019033b)[(int)(char)(&DAT_0018b67f)[iVar4] + (uint)in_EDX[0x1b]] *
                       0x55 + (&DAT_0019033b)
                              [(int)*(char *)((int)&DAT_0018b67b + iVar4 + 3) + (uint)in_EDX[0x1b]])
                      * 6] * 0x45) &&
       (&DAT_002ddd1b +
        (uint)(byte)(&DAT_002d33c8)
                    [((&DAT_0019033b)[(int)(char)(&DAT_0018b67f)[iVar4] + (uint)in_EDX[0x1b]] * 0x55
                     + (&DAT_0019033b)
                       [(int)*(char *)((int)&DAT_0018b67b + iVar4 + 3) + (uint)in_EDX[0x1b]]) * 6] *
        0x45 == &DAT_002ddd1b + (uint)*(ushort *)(in_EDX + 0x80) * 0x45)) {
      uVar5 = 0xffffffff;
      goto LAB_0001c174;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_01c1f1 (Ghidra: FUN_0001c1f1)
 * Prototype: uint sub_01c1f1(void);
 * Address  : 0x1c1f1 (Size: 482 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1bb1b, 0x1d807, 0x1e5de, 0x20563
 ******************************************************************************/
uint FUN_0001c1f1(void)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar6;
  byte *in_EDX;
  
  iVar2 = *(int *)(in_EAX + 0x24);
  if ((*(int *)(iVar2 + 0x116f) != 0) &&
     ((int)((uint)*(ushort *)(iVar2 + 0x93d) * *(int *)(in_EAX + 0x1c)) / 100 <=
      *(int *)(iVar2 + 0x116f))) {
    return 0;
  }
  if (*(int *)(in_EDX + 0x86) <= *(int *)(in_EDX + 0x58)) {
    if (((&DAT_001921c6)
         [(uint)(byte)(&DAT_002d33c5)[(in_EDX[0x21] / 3 + (in_EDX[0x23] / 3) * 0x55) * 6] * 0x16] &
        1) == 0) {
      in_EDX[0x58] = 0;
      in_EDX[0x59] = 0;
      in_EDX[0x5a] = 0;
      in_EDX[0x5b] = 0;
    }
    else {
      *(int *)(in_EDX + 0x60) = *(int *)(in_EDX + 0x60) + -1;
      if (0 < *(int *)(in_EDX + 0x60)) {
        return 0;
      }
    }
    in_EDX[0x58] = 0;
    in_EDX[0x59] = 0;
    in_EDX[0x5a] = 0;
    in_EDX[0x5b] = 0;
  }
  sVar3 = FUN_0001e5de();
  uVar5 = (uint)sVar3;
  if ((*in_EDX & 4) != 0) {
    *in_EDX = *in_EDX & 0xfb;
    FUN_00020563();
    uVar5 = extraout_ECX;
  }
  if (*(int *)(in_EDX + 0x86) <= *(int *)(in_EDX + 0x58)) {
    *(int *)(in_EDX + 0x60) = (int)(700 / (longlong)*(int *)(in_EAX + 0x18));
  }
  if (uVar5 < 0xfffffffd) {
    if (uVar5 != 0xfffffffb) {
      return uVar5;
    }
    bVar1 = in_EDX[2];
    in_EDX[2] = 0x10;
    in_EDX[3] = bVar1;
    return 4;
  }
  iVar4 = FUN_0001d807();
  if (iVar4 != 0) {
    return 0;
  }
  uVar5 = (uint)*(ushort *)(in_EDX + 0x80);
  if (((ushort)in_EDX[0x1b] == (&DAT_002eb558)[uVar5 * 0xe]) &&
     ((ushort)in_EDX[0x1d] == (&DAT_002eb55a)[uVar5 * 0xe])) {
    if (extraout_ECX_00 < 0xfffffffd) {
      return extraout_ECX_00;
    }
    uVar6 = extraout_ECX_00;
    if (extraout_ECX_00 == 0xffffffff) {
LAB_0001c394:
      if (uVar6 != 0xffffffff) {
        return uVar6;
      }
      goto LAB_0001c378;
    }
  }
  else {
    in_EDX[0x21] = *(byte *)(&DAT_002eb558 + uVar5 * 0xe);
    in_EDX[0x23] = *(byte *)(&DAT_002eb55a + uVar5 * 0xe);
    in_EDX[0x1b] = *(byte *)(&DAT_002eb558 + uVar5 * 0xe);
    in_EDX[0x1d] = *(byte *)(&DAT_002eb55a + uVar5 * 0xe);
    iVar4 = FUN_0001d807();
    if (iVar4 != 0) {
      return extraout_ECX_01;
    }
    if (extraout_ECX_01 < 0xfffffffd) {
      return extraout_ECX_01;
    }
    uVar6 = extraout_ECX_01;
    if (extraout_ECX_01 == 0xffffffff) goto LAB_0001c394;
    uVar5 = (uint)*(ushort *)(in_EDX + 0x80);
  }
  (&DAT_002eb553)[(int)*(char *)(iVar2 + 0xe9f) + uVar5 * 0x1c] =
       (&DAT_002eb553)[(int)*(char *)(iVar2 + 0xe9f) + uVar5 * 0x1c] | 2;
LAB_0001c378:
  FUN_0001bb1b();
  return extraout_ECX_02;
}

/******************************************************************************
 * Function : sub_01c3d3 (Ghidra: FUN_0001c3d3)
 * Prototype: int sub_01c3d3(void);
 * Address  : 0x1c3d3 (Size: 400 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1ba1e, 0x1bb1b, 0x1dd33, 0x1e5de, 0x20563
 ******************************************************************************/
int FUN_0001c3d3(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 *in_EAX;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  byte *in_EDX;
  byte *pbVar6;
  byte *pbVar7;
  int local_1c;
  
  if (0x1d4c < (uint)(DAT_002e8bee - *(int *)(in_EDX + 10))) {
    *in_EAX = 2;
    FUN_0001bb1b();
    return 0;
  }
  if (*(short *)(in_EDX + 0x20) != 0) {
    if ((uint)((&DAT_002d33ca)
               [((&DAT_0019033b)[in_EDX[0x21]] + (&DAT_0019033b)[in_EDX[0x23]] * 0x55) * 6] & 7) !=
        (int)*(char *)(in_EAX[9] + 0xe9f)) {
      return 4;
    }
    if ((*in_EDX & 4) != 0) {
      iVar4 = *(int *)(in_EDX + 0x5c);
      *(int *)(in_EDX + 0x5c) = iVar4 + 1;
      if (4 < iVar4) {
        *in_EDX = *in_EDX & 0xfb;
      }
      FUN_00020563();
    }
  }
  sVar3 = FUN_0001e5de();
  iVar4 = (int)sVar3;
  if (iVar4 < -3) {
    if (iVar4 == -5) {
      bVar1 = in_EDX[2];
      in_EDX[2] = 0x10;
      in_EDX[3] = bVar1;
      return 4;
    }
    return iVar4;
  }
  if (iVar4 < -1) {
    *in_EAX = 2;
  }
  else {
    if (-1 < iVar4) {
      if (iVar4 != 0) {
        return iVar4;
      }
      pbVar6 = in_EDX + 0x20;
      local_1c = 0;
      pbVar7 = in_EDX + 0x21;
      iVar5 = 0;
      while ((iVar5 < 10 &&
             (iVar5 = FUN_0001dd33((char)(&DAT_0018b686)[iVar5] * 3,(int)*(short *)(in_EDX + 0x86),
                                   pbVar6,pbVar7), iVar5 == 0))) {
        local_1c = local_1c + 1;
        iVar5 = extraout_ECX + 2;
      }
      if (local_1c == 5) {
        return 0;
      }
    }
    uVar2 = *(ushort *)(in_EDX + 0x8c);
    *(short *)(in_EAX + (uint)uVar2 * 0x12 + 0x1e) = (short)((int)(in_EDX + -0x2c9203) / 0x94);
    (*(code *)in_EAX[(uint)uVar2 * 0x12 + 0x17])();
  }
  FUN_0001ba1e();
  return iVar4;
}

/******************************************************************************
 * Function : sub_01c563 (Ghidra: FUN_0001c563)
 * Prototype: undefined4 sub_01c563(void);
 * Address  : 0x1c563 (Size: 473 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1bb1b, 0x1df28, 0x20607, 0x20669, 0x206b2
 ******************************************************************************/
undefined4 FUN_0001c563(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar4 = (uint *)&stack0xfffffff0;
  puVar5 = (uint *)&stack0xfffffff0;
  iVar3 = *(int *)(in_EAX + 0x24);
  bVar1 = *(byte *)(in_EDX + 1);
  if (bVar1 == 0) {
    if ((uint)(DAT_002e8bee - *(int *)(in_EDX + 0x5c)) < *(uint *)(in_EDX + 0x60)) {
      return 4;
    }
    *(int *)(in_EDX + 0x5c) = DAT_002e8bee;
    *(undefined4 *)(in_EDX + 0x60) = 0x12;
    uStack_14 = 0x1c5b3;
    uVar6 = FUN_00020607();
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    if (*(int *)(iVar2 + 0x7c) <= (int)uVar6) {
      *(undefined1 *)(iVar2 + 1) = 1;
      return 2;
    }
    uStack_14 = 0x1c5c8;
    iVar2 = FUN_000206b2();
    if (iVar2 != 0) {
      uStack_14 = 1;
      uStack_18 = 1;
      uStack_1c = (uint)*(byte *)(iVar2 + 0x10);
      uStack_20 = (uint)*(byte *)(iVar2 + 0xe);
      iVar3 = FUN_0001df28();
      if (0 < iVar3) {
        return 2;
      }
      *(undefined1 *)(in_EDX + 1) = 2;
      return 4;
    }
    uStack_14 = 0x1c5e0;
    uVar6 = FUN_00020607();
    if ((int)((ulonglong)uVar6 >> 0x20) < (int)uVar6) {
      *(undefined1 *)(in_EDX + 1) = 1;
      return 4;
    }
    if (*(int *)(iVar3 + 0x884) != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      puVar4 = &uStack_20;
      uStack_20 = 0;
      FUN_0001df28();
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 4;
      }
      if ((uint)(DAT_002e8bee - *(int *)(in_EDX + 0x5c)) < *(uint *)(in_EDX + 0x60)) {
        uStack_14 = 0x1c6ea;
        uVar6 = FUN_00020669();
        if ((int)uVar6 < (int)((ulonglong)uVar6 >> 0x20)) {
          return 1;
        }
      }
      if (*(int *)(iVar3 + 0x884) != 0) {
        uStack_14 = 0;
        uStack_18 = 0;
        uStack_1c = 0;
        puVar5 = &uStack_20;
        uStack_20 = 0;
        FUN_0001df28();
      }
      *(undefined4 *)((int)puVar5 + -4) = 0x1c720;
      FUN_0001bb1b();
      return 1;
    }
    if ((uint)(DAT_002e8bee - *(int *)(in_EDX + 0x5c)) < *(uint *)(in_EDX + 0x60)) {
      return 2;
    }
    uStack_14 = 1;
    uStack_18 = 1;
    uStack_1c = (uint)*(byte *)(in_EDX + 0x79);
    uStack_20 = (uint)*(byte *)(in_EDX + 0x77);
    puVar4 = &uStack_20;
    iVar3 = FUN_0001df28();
    if (-1 < iVar3) {
      *(undefined1 *)(in_EDX + 1) = 2;
      *(undefined4 *)(in_EDX + 0x60) = *(undefined4 *)(in_EDX + 0x8e);
      return 2;
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x1c616;
  FUN_0001bb1b();
  return 0;
}

/******************************************************************************
 * Function : sub_01c73c (Ghidra: FUN_0001c73c)
 * Prototype: undefined4 sub_01c73c(void);
 * Address  : 0x1c73c (Size: 190 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1bb1b, 0x1dd33, 0x1e119, 0x1e226, 0x1f153
 ******************************************************************************/
undefined4 FUN_0001c73c(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  bool bVar3;
  
  if (0x1d4c < (uint)(DAT_002e8bee - *(int *)(in_EDX + 10))) {
    FUN_0001bb1b();
    return 0;
  }
  iVar2 = FUN_0001dd33();
  if (iVar2 != 0) {
    if (*(short *)(in_EAX + 0x14c8) == 0) {
      iVar2 = *(int *)(extraout_ECX + 0x7c);
      *(int *)(extraout_ECX + 0x7c) = iVar2 + -1;
      if (iVar2 == 0) {
        FUN_0001bb1b();
        return 1;
      }
      iVar2 = FUN_0001f153();
      if (iVar2 == 0) {
        return 4;
      }
      iVar2 = FUN_0001e119();
      bVar3 = iVar2 == 0;
    }
    else {
      sVar1 = FUN_0001e226();
      bVar3 = sVar1 == 0;
    }
    if (!bVar3) {
      return 2;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01c7fa (Ghidra: FUN_0001c7fa)
 * Prototype: undefined4 sub_01c7fa(void);
 * Address  : 0x1c7fa (Size: 157 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1bb1b, 0x1e119, 0x1e226, 0x84ff8
 ******************************************************************************/
undefined4 FUN_0001c7fa(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (*(short *)(in_EAX + 0x14c8) == 0) {
    iVar2 = FUN_00084ff8(*(undefined1 *)(*(int *)(in_EAX + 0x24) + 0xe9f));
    if ((iVar2 == 0) || (iVar2 = FUN_0001e119(), iVar2 == 0)) {
      FUN_0001bb1b();
      uVar3 = 0;
    }
  }
  else if (*(short *)(in_EAX + 0x14c8) == *(short *)(in_EDX + 0x76)) {
    sVar1 = FUN_0001e226();
    if (sVar1 == 0) {
      uVar3 = 0;
    }
    FUN_0001bb1b();
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_01c897 (Ghidra: FUN_0001c897)
 * Prototype: undefined4 sub_01c897(void);
 * Address  : 0x1c897 (Size: 147 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1bb1b, 0x1e119, 0x1e226, 0x1f538
 ******************************************************************************/
undefined4 FUN_0001c897(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  if (*(short *)(in_EAX + 0x14c8) == 0) {
    if ((uint)(DAT_002e8bee - *(int *)(in_EDX + 0x5c)) < *(uint *)(in_EDX + 0x60)) {
      return 4;
    }
    *(int *)(in_EDX + 0x5c) = DAT_002e8bee;
    iVar2 = *(int *)(in_EDX + 0x7c);
    *(int *)(in_EDX + 0x7c) = iVar2 + -1;
    if (iVar2 < 1) {
      FUN_0001bb1b();
      return 1;
    }
    iVar2 = FUN_0001f538();
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = FUN_0001e119();
  }
  else {
    sVar1 = FUN_0001e226();
    iVar2 = (int)sVar1;
  }
  if (iVar2 != 0) {
    return 2;
  }
  FUN_0001bb1b();
  return 0;
}

/******************************************************************************
 * Function : sub_01c92a (Ghidra: FUN_0001c92a)
 * Prototype: undefined4 sub_01c92a(void);
 * Address  : 0x1c92a (Size: 222 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1df28, 0x720ce
 ******************************************************************************/
undefined4 FUN_0001c92a(void)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  int in_EDX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint auStack_30 [5];
  undefined1 local_1c [4];
  int local_18;
  
  puVar6 = local_1c;
  local_18 = *(int *)(in_EAX + 0x24);
  iVar4 = *(int *)(in_EDX + 0x7c);
  *(int *)(in_EDX + 0x7c) = iVar4 + -1;
  if (0 < iVar4) {
    uVar1 = *(ushort *)(local_18 + 0x2f);
    puVar6 = local_1c;
    while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
      puVar5 = puVar6;
      if (((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) {
        *(undefined4 *)(puVar6 + -4) = 0x1c98e;
        iVar4 = FUN_000720ce();
        if ((iVar4 == 0) && (*(short *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x21) == 0)) {
          if (pbVar2[7] == 0xe) {
            bVar3 = pbVar2[8];
          }
          else {
            bVar3 = pbVar2[7];
          }
          if ((&DAT_0018c4be)[(uint)bVar3 * 0x29] == '\x01') {
            *(undefined4 *)(puVar6 + -4) = 0;
            *(uint *)(puVar6 + -8) = (uint)*(ushort *)(pbVar2 + 0x1b);
            *(undefined4 *)(puVar6 + -0xc) = 0;
            puVar5 = puVar6 + -0x10;
            *(undefined4 *)(puVar6 + -0x10) = 0;
            *(undefined4 *)(puVar6 + -0x14) = 0x1c9ec;
            iVar4 = FUN_0001df28();
            if (0 < iVar4) {
              return 2;
            }
          }
        }
      }
      puVar6 = puVar5;
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
    }
  }
  *(undefined4 *)(puVar6 + -4) = 0x1c3fe;
  FUN_0001bb1b();
  return 0;
}

/******************************************************************************
 * Function : sub_01ca08 (Ghidra: FUN_0001ca08)
 * Prototype: uint sub_01ca08(void);
 * Address  : 0x1ca08 (Size: 96 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1ba1e, 0x1e5de, 0x20563
 ******************************************************************************/
uint FUN_0001ca08(void)

{
  byte bVar1;
  short sVar2;
  byte *in_EDX;
  uint uVar3;
  
  sVar2 = FUN_0001e5de();
  uVar3 = (uint)sVar2;
  if (uVar3 < 0xfffffffd) {
    if (uVar3 == 0xfffffffb) {
      bVar1 = in_EDX[2];
      in_EDX[2] = 0x10;
      uVar3 = 4;
      in_EDX[3] = bVar1;
    }
    else if ((*in_EDX & 4) != 0) {
      *in_EDX = *in_EDX & 0xfb;
      FUN_00020563();
    }
  }
  else {
    FUN_0001ba1e();
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_01ca68 (Ghidra: FUN_0001ca68)
 * Prototype: undefined4 sub_01ca68(void);
 * Address  : 0x1ca68 (Size: 142 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1bb1b, 0x1df28, 0x1e38d, 0x720ce
 ******************************************************************************/
undefined4 FUN_0001ca68(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  undefined4 *puVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(undefined4 *)(in_EAX + 0x24);
  local_18 = 4;
  iStack_20 = 0x1ca95;
  iVar1 = FUN_0001e38d();
  puVar3 = &local_1c;
  if ((iVar1 == 1) &&
     (iVar1 = (&DAT_001ae9fc)[*(ushort *)(in_EDX + 0x76)], puVar3 = &local_1c, iVar1 != 0)) {
    iStack_20 = 0x1cab5;
    iVar2 = FUN_000720ce();
    puVar3 = &local_1c;
    if (iVar2 == 0) {
      uStack_24 = (uint)*(ushort *)(iVar1 + 0x1b);
      uStack_28 = 0;
      uStack_2c = 0;
      iStack_20 = iVar2;
      iVar1 = FUN_0001df28();
      puVar3 = &uStack_2c;
      if (0 < iVar1) {
        local_18 = 1;
        puVar3 = &uStack_2c;
      }
    }
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x1caf1;
  FUN_0001bb1b();
  return local_18;
}

/******************************************************************************
 * Function : dk_set_task_state_01caf6 (Ghidra: FUN_0001caf6)
 * Prototype: undefined4 dk_set_task_state_01caf6(void);
 * Address  : 0x1caf6 (Size: 227 bytes)
 * Module   : comptask.cpp [direct_file_string_xref]
 * OrigLine : comptask.cpp:976 ("Bad set Task State")
 * Naming   : String 'Bad set Task State'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1b978, 0x1df28, 0xddaf0
 * Strings  :
 *   - 0x1622c8: "comptask.cpp"
 *   - 0x1622b5: "Bad set Task State"
 ******************************************************************************/
undefined4 FUN_0001caf6(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int in_EDX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint auStack_38 [5];
  undefined1 local_24 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_20 = (uint)*(byte *)(in_EDX + 0x21);
  local_18 = (uint)*(byte *)(in_EDX + 0x23);
  local_1c = (uint)*(char *)(*(int *)(in_EAX + 0x24) + 0xe9f);
  if ((uint)(DAT_002e8bee - *(int *)(in_EDX + 10)) < 0x1d4d) {
    puVar4 = local_24;
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 2) {
      puVar3 = puVar4;
      if (((&DAT_002d33ca)
           [((&DAT_0019033b)[*(char *)((int)&DAT_0018b67b + iVar5 + 3) * 3 + local_20] +
            (&DAT_0019033b)[(char)(&DAT_0018b67f)[iVar5] * 3 + local_18] * 0x55) * 6] & 7) ==
          local_1c) {
        *(undefined4 *)(puVar4 + -4) = 0xf;
        *(undefined4 *)(puVar4 + -8) = 1;
        *(uint *)(puVar4 + -0xc) = local_18 & 0xffff;
        puVar3 = puVar4 + -0x10;
        *(uint *)(puVar4 + -0x10) = local_20 & 0xffff;
        *(undefined4 *)(puVar4 + -0x14) = 0x1cbab;
        iVar2 = FUN_0001df28();
        if (0 < iVar2) {
          *(char *)(in_EDX + 2) = *(char *)(in_EDX + 3);
          if (*(char *)(in_EDX + 3) == '\0') {
            *(undefined4 *)(puVar4 + -0x14) = 0x1cbd4;
            FUN_000ddaf0(); /* LbErrorLog("comptask.cpp", line 976, "Bad set Task State") */
          }
          return 1;
        }
      }
      puVar4 = puVar3;
    }
    uVar1 = 4;
  }
  else {
    FUN_0001b978();
    uVar1 = 0;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_01cbd9 (Ghidra: FUN_0001cbd9)
 * Prototype: undefined4 sub_01cbd9(void);
 * Address  : 0x1cbd9 (Size: 170 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1bb1b, 0x1df28, 0x1e38d
 ******************************************************************************/
undefined4 FUN_0001cbd9(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x24);
  iVar3 = (&DAT_001ae9fc)[*(ushort *)(in_EDX + 0x76)];
  iVar2 = *(int *)(in_EDX + 0x7c);
  *(int *)(in_EDX + 0x7c) = iVar2 + -1;
  if ((iVar2 == 0) || (*(short *)(iVar3 + 0x5e) < 1)) {
    FUN_0001bb1b();
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_0001e38d(uVar1);
    if ((iVar2 == 1) &&
       (iVar3 = FUN_0001df28(*(undefined1 *)(iVar3 + 0xe),*(undefined1 *)(iVar3 + 0x10),
                             *(undefined2 *)(in_EDX + 0x76),0), 0 < iVar3)) {
      return 2;
    }
    uVar1 = 4;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_01cc83 (Ghidra: FUN_0001cc83)
 * Prototype: undefined4 sub_01cc83(void);
 * Address  : 0x1cc83 (Size: 253 bytes)
 * Module   : comptask.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1bb1b, 0x1e119, 0x1e226, 0x20826
 ******************************************************************************/
undefined4 FUN_0001cc83(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  int local_14;
  
  if (*(short *)(in_EAX + 0x14c8) == 0) {
    iVar2 = *(int *)(in_EDX + 0x7c);
    *(int *)(in_EDX + 0x7c) = iVar2 + -1;
    if (iVar2 < 1) {
      FUN_0001bb1b();
      return 1;
    }
    iVar2 = FUN_00020826();
    if (iVar2 != 0) {
      *(undefined2 *)(extraout_ECX + 0x80) = *(undefined2 *)(local_14 + 1);
      iVar2 = FUN_0001e119((ushort)*(byte *)(local_14 + 8) << 8,0x100);
      if (iVar2 != 0) {
        return 2;
      }
    }
  }
  else {
    sVar1 = FUN_0001e226((ushort)(byte)(&DAT_002ddd23)[(uint)*(ushort *)(in_EDX + 0x80) * 0x45] << 8
                         ,0x100);
    if (0 < sVar1) {
      return 2;
    }
  }
  FUN_0001bb1b();
  return 0;
}

/******************************************************************************
 * Function : dk_sell_item_type_01cd80 (Ghidra: FUN_0001cd80)
 * Prototype: undefined4 dk_sell_item_type_01cd80(void);
 * Address  : 0x1cd80 (Size: 412 bytes)
 * Module   : comptask.cpp [direct_file_string_xref]
 * OrigLine : comptask.cpp:1126 ("Unknown SELL_ITEM type")
 * Naming   : String 'Unknown SELL_ITEM type'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1bb1b, 0x7795d, 0x77a5b, 0xddaf0
 * Strings  :
 *   - 0x1622ec: "comptask.cpp"
 *   - 0x1622d5: "Unknown SELL_ITEM type"
 ******************************************************************************/
undefined4 FUN_0001cd80(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int in_EDX;
  int iVar4;
  int local_20;
  int local_18;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  if ((*(int *)(in_EDX + 0x76) <= *(int *)(in_EDX + 0x7c)) &&
     (*(int *)(iVar1 + 0xaf9) <= *(int *)(in_EDX + 0x80))) {
    iVar4 = *(int *)(in_EDX + 0x86);
    bVar3 = false;
    local_20 = 0;
    while( true ) {
      iVar4 = iVar4 * 8;
      if ((10 < local_20) || (bVar3)) break;
      uVar2 = *(uint *)(&DAT_001793dc + iVar4);
      if (uVar2 == 0) {
LAB_0001ceec:
        FUN_000ddaf0(); /* LbErrorLog("comptask.cpp", line 1126, "Unknown SELL_ITEM type") */
        in_EDX = extraout_ECX_02;
      }
      else if (uVar2 < 2) {
        if (*(char *)(iVar1 + 0x101d + *(int *)(&DAT_001793e0 + iVar4)) != '\0') {
          local_18 = *(int *)(&DAT_001ae930 + *(int *)(&DAT_001793e0 + iVar4) * 0x14);
          iVar4 = FUN_00077a5b();
          in_EDX = extraout_ECX;
joined_r0x0001ce0b:
          bVar3 = true;
          if (iVar4 != 0) {
            bVar3 = true;
            FUN_0007795d();
            in_EDX = extraout_ECX_00;
          }
        }
      }
      else {
        if (uVar2 != 2) goto LAB_0001ceec;
        if (*(char *)(iVar1 + 0x1008 + *(int *)(&DAT_001793e0 + iVar4)) != '\0') {
          local_18 = *(int *)(&DAT_001ae8a4 + *(int *)(&DAT_001793e0 + iVar4) * 0x14);
          iVar4 = FUN_00077a5b();
          in_EDX = extraout_ECX_01;
          goto joined_r0x0001ce0b;
        }
      }
      *(int *)(in_EDX + 0x86) = *(int *)(in_EDX + 0x86) + 1;
      if (*(int *)(&DAT_001793dc + *(int *)(in_EDX + 0x86) * 8) == 0) {
        *(undefined4 *)(in_EDX + 0x86) = 0;
      }
      iVar4 = *(int *)(in_EDX + 0x86);
      local_20 = local_20 + 1;
    }
    if (bVar3) {
      *(int *)(in_EDX + 0x70) = *(int *)(in_EDX + 0x70) + -1;
      if (*(int *)(in_EDX + 0x70) < 1) {
        FUN_0001bb1b();
      }
      else {
        *(int *)(in_EDX + 0x76) = *(int *)(in_EDX + 0x76) + local_18;
        *(int *)(iVar1 + 0xafd) = *(int *)(iVar1 + 0xafd) + local_18;
        *(int *)(iVar1 + 0xaf9) = *(int *)(iVar1 + 0xaf9) + local_18;
      }
      return 1;
    }
  }
  FUN_0001bb1b();
  return 0;
}

/******************************************************************************
 * Function : sub_01cf1c (Ghidra: FUN_0001cf1c)
 * Prototype: int sub_01cf1c(uint param_1);
 * Address  : 0x1cf1c (Size: 498 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1ac13, 0x1ac93
 * Callees  : 2 -> 0x1d10e, 0xe8cc8
 ******************************************************************************/
int FUN_0001cf1c(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_ECX;
  short in_DX;
  int unaff_EBX;
  undefined1 *puVar10;
  short *psVar11;
  byte *pbVar12;
  short local_38;
  short local_36;
  undefined2 local_34;
  int local_30;
  int local_28;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar5 = *(int *)(in_EAX + 0x24);
  iVar6 = in_ECX;
  if (in_ECX < unaff_EBX) {
    iVar6 = unaff_EBX;
  }
  local_1c = (iVar6 + 1) / 2 + 1;
  iVar6 = local_1c * 2;
  iVar7 = local_1c / 3;
  psVar11 = &local_38;
  local_28 = in_ECX;
  if ((in_DX == 0xe) &&
     (psVar11 = &local_38,
     unaff_EBX * in_ECX <
     *(int *)(&DAT_002e15e5 + *(char *)(iVar5 + 0xe9f) * 0x1508) +
     *(int *)(&DAT_002e15e5 + *(char *)(iVar5 + 0xe9f) * 0x1508) / 2)) {
    local_28 = FUN_000e8cc8();
    local_28 = local_28 + 1;
    psVar11 = &local_38;
  }
  do {
    if (iVar6 + iVar7 <= local_1c) {
      return 0;
    }
    for (local_30 = 1; -1 < local_30; local_30 = local_30 + -1) {
      local_14 = param_1;
      if ((int)param_1 < 0) {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        local_14 = DAT_002e8bf6 % 0x12;
      }
      for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
        if ((byte)(&DAT_00174e09)[local_14 & 0xffff] == 0x11) {
          uVar2 = *(ushort *)(in_EAX + 0x14c6);
          while( true ) {
            iVar9 = (uint)uVar2 * 0x94;
            pbVar12 = &DAT_002c9203 + iVar9;
            if (pbVar12 < &DAT_002c9204) break;
            puVar10 = (undefined1 *)psVar11;
            if (((*pbVar12 & 1) != 0) && ((*pbVar12 & 2) != 0)) {
              sVar3 = *(short *)(&DAT_002c927f + iVar9);
              sVar4 = *(short *)(&DAT_002c9281 + iVar9);
              *(int *)((int)psVar11 + -4) = local_30;
              iVar8 = (int)sVar4 / 2;
              if ((int)sVar4 / 2 < (int)sVar3 / 2) {
                iVar8 = (int)sVar3 / 2;
              }
              *(int *)((int)psVar11 + -8) = iVar8 + local_1c + 1;
              puVar10 = (undefined1 *)((int)psVar11 + -0xc);
              *(int *)((int)psVar11 + -0xc) = local_28;
              *(undefined4 *)((int)psVar11 + -0x10) = 0x1d100;
              iVar8 = FUN_0001d10e();
              if (iVar8 != 0) {
                return iVar8;
              }
            }
            uVar2 = *(ushort *)(&DAT_002c9295 + iVar9);
            psVar11 = (short *)puVar10;
          }
        }
        else {
          uVar2 = *(ushort *)((uint)(byte)(&DAT_00174e09)[local_14 & 0xffff] * 2 + iVar5 + 0xb);
          while (iVar9 = (uint)uVar2 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar9) {
            *(int *)((int)psVar11 + -4) = local_30;
            local_38 = (ushort)(byte)(&DAT_002ddd23)[iVar9] << 8;
            bVar1 = (&DAT_002ddd24)[iVar9];
            *(int *)((int)psVar11 + -8) = local_1c;
            local_36 = (ushort)bVar1 << 8;
            *(int *)((int)psVar11 + -0xc) = local_28;
            local_34 = 0x100;
            *(undefined4 *)((int)psVar11 + -0x10) = 0x1d08e;
            iVar8 = FUN_0001d10e();
            if (iVar8 != 0) {
              return iVar8;
            }
            psVar11 = (short *)((int)psVar11 + -0xc);
            uVar2 = *(ushort *)(&DAT_002ddd21 + iVar9);
          }
        }
        local_14 = ((local_14 & 0xffff) + 1) % 0x12;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_01d10e (Ghidra: FUN_0001d10e)
 * Prototype: byte * sub_01d10e(undefined4 param_1,ushort param_2,int param_3);
 * Address  : 0x1d10e (Size: 497 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1cf1c
 * Callees  : 6 -> 0x1ba46, 0x1d2ff, 0x1ddd4, 0x1df65, 0x1fc2d, 0xe6a10
 ******************************************************************************/
byte * FUN_0001d10e(undefined4 param_1,ushort param_2,int param_3)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_ECX;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_EDX;
  ushort unaff_BX;
  undefined1 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_54;
  undefined2 auStack_40 [2];
  undefined1 local_3b;
  undefined1 local_39;
  byte local_33;
  byte local_31;
  uint local_2c;
  undefined4 local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  bVar5 = 0;
  local_28 = *(undefined4 *)(in_EAX + 0x24);
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_14 = 3;
  local_54 = in_ECX;
  FUN_000e6a10();
  local_20 = extraout_ECX -
             ((int)((extraout_ECX + (extraout_ECX >> 0x1f) * -4) -
                   (uint)((extraout_ECX >> 0x1f) << 1 < 0)) >> 2);
  local_10 = 0;
  puVar4 = &local_54;
  local_1c = extraout_ECX;
  do {
    if (3 < (ushort)local_10) {
      return (byte *)0x0;
    }
    *(uint *)((int)puVar4 + -4) = (uint)param_2;
    uVar1 = *in_EDX;
    auStack_40[(uint)bVar5 * -4] = *(undefined2 *)(in_EDX + (uint)bVar5 * -2 + 1);
    *(undefined4 *)((int)puVar4 + -8) = 0x1d1df;
    iVar2 = FUN_0001fc2d();
    puVar3 = (undefined1 *)((int)puVar4 + -4);
    if (iVar2 != 0) {
      local_2c = (uint)local_33;
      *(undefined4 *)((int)puVar4 + -8) = param_1;
      local_18 = (uint)local_31;
      *(undefined4 *)((int)puVar4 + -0xc) = 0x1d204;
      iVar2 = FUN_0001df65();
      puVar3 = (undefined1 *)((int)puVar4 + -8);
      if (iVar2 != 0) {
        local_3b = (undefined1)local_2c;
        local_39 = (undefined1)local_18;
        if (param_3 == 0) {
          *(undefined4 *)((int)puVar4 + -0xc) = 0x1d266;
          iVar2 = FUN_0001ddd4();
          puVar3 = (undefined1 *)((int)puVar4 + -8);
          if (local_20 <= iVar2) goto LAB_0001d271;
        }
        else {
          *(undefined4 *)((int)puVar4 + -0xc) = 0x1d237;
          iVar2 = FUN_0001ddd4();
          puVar3 = (undefined1 *)((int)puVar4 + -8);
          if (iVar2 == local_1c) {
LAB_0001d271:
            *(undefined4 *)((int)puVar4 + -0xc) = 0x1d27b;
            local_24 = (byte *)FUN_0001ba46();
            if (local_24 == (byte *)0x0) {
              return (byte *)0x0;
            }
            local_24[2] = 1;
            local_24[4] = (byte)unaff_BX;
            local_24[0x65] = (char)((int)local_2c / 3) * '\x03';
            local_24[0x67] = (char)((int)local_18 / 3) * '\x03';
            *(undefined4 *)(local_24 + 0x6a) = *in_EDX;
            *(undefined2 *)(local_24 + (uint)bVar5 * -8 + 0x6e) =
                 *(undefined2 *)(in_EDX + (uint)bVar5 * -2 + 1);
            *(undefined4 *)(local_24 + 0x70) = uVar1;
            *(undefined2 *)(local_24 + (uint)bVar5 * -8 + 0x74) = auStack_40[(uint)bVar5 * -4];
            *(undefined2 *)(local_24 + 0x7c) = (undefined2)local_54;
            *(undefined4 *)((int)puVar4 + -0xc) = *(undefined4 *)(local_24 + 0x68);
            *(undefined4 *)(local_24 + 0x86) = extraout_ECX_00;
            *(undefined4 *)((int)puVar4 + -0x10) = *(undefined4 *)(local_24 + 100);
            *(undefined4 *)((int)puVar4 + -0x14) = *(undefined4 *)(local_24 + 0x74);
            *(short *)(local_24 + 0x7e) = (short)param_1;
            *(undefined4 *)((int)puVar4 + -0x18) = *(undefined4 *)(local_24 + 0x70);
            *(uint *)(local_24 + 0x80) = (uint)unaff_BX;
            *local_24 = *local_24 | 6;
            *(undefined4 *)((int)puVar4 + -0x1c) = 0x1d2f2;
            FUN_0001d2ff();
            return local_24;
          }
        }
      }
    }
    local_14 = (local_14 + 1) % 4;
    local_10 = local_10 + 1;
    puVar4 = (undefined4 *)puVar3;
  } while( true );
}

/******************************************************************************
 * Function : sub_01d2ff (Ghidra: FUN_0001d2ff)
 * Prototype: void sub_01d2ff(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4);
 * Address  : 0x1d2ff (Size: 76 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x197a9, 0x1ae5c, 0x1b15c, 0x1d10e, 0x1ff84
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001d2ff(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 *in_EAX;
  
  in_EAX[3] = param_1;
  *(undefined2 *)(in_EAX + 4) = param_2;
  *in_EAX = param_1;
  *(undefined2 *)(in_EAX + 1) = param_2;
  *(undefined4 *)((int)in_EAX + 6) = param_3;
  *(undefined2 *)((int)in_EAX + 10) = param_4;
  *(undefined2 *)((int)in_EAX + 0x12) = 0;
  *(undefined2 *)(in_EAX + 5) = 0;
  *(undefined2 *)((int)in_EAX + 0x16) = 0;
  in_EAX[6] = 0x7fffffff;
  *(undefined4 *)((int)in_EAX + 0x1e) = 1;
  *(undefined4 *)((int)in_EAX + 0x46) = 0;
  return;
}

/******************************************************************************
 * Function : sub_01d34b (Ghidra: FUN_0001d34b)
 * Prototype: void sub_01d34b(undefined4 param_1,undefined2 param_2,undefined4 param_3);
 * Address  : 0x1d34b (Size: 70 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1bb96, 0x1be21
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001d34b(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0xc) = param_1;
  *(undefined2 *)(in_EAX + 0x10) = param_2;
  *(undefined4 *)(in_EAX + 0x1e) = 1;
  *(undefined4 *)(in_EAX + 0x22) = 0;
  *(undefined4 *)(in_EAX + 0x26) = 0;
  *(undefined4 *)(in_EAX + 0x2a) = 0;
  *(undefined4 *)(in_EAX + 0x2e) = 0;
  *(undefined4 *)(in_EAX + 0x36) = 0;
  *(undefined4 *)(in_EAX + 0x32) = param_3;
  return;
}

/******************************************************************************
 * Function : sub_01d391 (Ghidra: FUN_0001d391)
 * Prototype: uint sub_01d391(void);
 * Address  : 0x1d391 (Size: 528 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1ae5c
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
uint FUN_0001d391(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  short in_CX;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *in_EDX;
  byte *pbVar5;
  undefined4 *unaff_EBX;
  undefined1 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  int local_38;
  uint local_34;
  byte *local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined1 *local_18;
  int local_14;
  uint local_10;
  
  bVar7 = 0;
  local_14 = *(int *)(in_EAX + 0x24);
  local_10 = (uint)in_CX;
  local_18 = (undefined1 *)0x0;
  if ((int)local_10 < 0) {
    local_10 = (uint)DAT_002eb543;
  }
  *unaff_EBX = 0;
  local_20 = 0xffffffff;
  uVar1 = DAT_002eb9e4;
  if ((int)(short)(ushort)local_10 != (uint)DAT_002eb543) {
    uVar1 = (&DAT_002e0596)[(short)(ushort)local_10 * 0xa84];
  }
  local_38 = local_14 + 0x22;
  local_2c = in_EDX;
  while( true ) {
    iVar2 = (uint)uVar1 * 0x45;
    puVar6 = &DAT_002ddd1b + iVar2;
    if (puVar6 < &DAT_002ddd1c) break;
    if ((((int)(char)(&DAT_002ddd1e)[iVar2] == (int)(short)(ushort)local_10) &&
        ((puVar6[*(char *)(local_14 + 0xe9f) + 0x12] & 1) == 0)) &&
       (-1 < (char)(puVar6[*(char *)(local_14 + 0xe9f) + 0x12] << 6))) {
      local_1c = (uint)(byte)(&DAT_002ddd23)[iVar2];
      local_34 = (uint)(byte)(&DAT_002ddd24)[iVar2];
      iVar4 = local_14;
      do {
        uVar1 = *(ushort *)(iVar4 + 0xb);
        while (&DAT_002ddd1b < &DAT_002ddd1b + (uint)uVar1 * 0x45) {
          local_28 = FUN_000e69fc();
          uVar8 = FUN_000e69fc();
          iVar4 = (int)((ulonglong)uVar8 >> 0x20);
          local_24 = (int)uVar8;
          uVar3 = local_28 + local_24;
          if ((uVar3 < local_20) && (uVar3 != 0)) {
            local_40 = (ushort)*(byte *)(iVar4 + 8) << 8;
            local_3e = (ushort)*(byte *)(iVar4 + 9) << 8;
            local_30 = (byte *)&local_40;
            local_3c = 0x100;
            local_20 = uVar3;
            local_18 = puVar6;
          }
          uVar1 = *(ushort *)(iVar4 + 6);
          iVar4 = extraout_ECX;
        }
        iVar4 = iVar4 + 2;
      } while (iVar4 != local_38);
    }
    uVar1 = *(ushort *)(in_EAX + 0x14c6);
    while (pbVar5 = &DAT_002c9203 + (uint)uVar1 * 0x94, &DAT_002c9203 < pbVar5) {
      if (((*pbVar5 & 1) != 0) && ((*pbVar5 & 2) != 0)) {
        local_24 = FUN_000e69fc();
        uVar8 = FUN_000e69fc();
        pbVar5 = (byte *)((ulonglong)uVar8 >> 0x20);
        uVar3 = extraout_ECX_00 + (int)uVar8;
        if ((uVar3 < local_20) && (uVar3 != 0)) {
          local_30 = pbVar5 + 100;
          local_20 = uVar3;
          local_18 = puVar6;
        }
      }
      uVar1 = *(ushort *)(pbVar5 + 0x92);
    }
    if ((ushort)local_10 == DAT_002eb543) {
      uVar1 = *(ushort *)(&DAT_002ddd34 + iVar2);
    }
    else {
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
    }
  }
  if (local_18 == (undefined1 *)0x0) {
    local_20 = 0;
  }
  else {
    *unaff_EBX = local_18;
    *local_2c = *(undefined4 *)local_30;
    *(undefined2 *)(local_2c + (uint)bVar7 * -2 + 1) =
         *(undefined2 *)(local_30 + (uint)bVar7 * -8 + 4);
  }
  return local_20;
}

/******************************************************************************
 * Function : sub_01d5a1 (Ghidra: FUN_0001d5a1)
 * Prototype: int sub_01d5a1(void);
 * Address  : 0x1d5a1 (Size: 86 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x18a55, 0x1ad1f, 0x1ae5c
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_0001d5a1(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = DAT_002eb9e4;
  while( true ) {
    iVar2 = (uint)uVar1 * 0x45;
    if (&DAT_002ddd1b + iVar2 == &DAT_002ddd1b) break;
    if ((((&DAT_002ddd1b + iVar2)[*(char *)(*(int *)(in_EAX + 0x24) + 0xe9f) + 0x12] & 1) == 0) &&
       ((int)(char)(&DAT_002ddd1e)[iVar2] == (in_EDX & 0xffff))) {
      iVar3 = iVar3 + 1;
    }
    uVar1 = *(ushort *)(&DAT_002ddd34 + iVar2);
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_01d5f7 (Ghidra: FUN_0001d5f7)
 * Prototype: undefined4 sub_01d5f7(void);
 * Address  : 0x1d5f7 (Size: 10 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1d917
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001d5f7(void)

{
  int in_EAX;
  
  return *(undefined4 *)(*(int *)(in_EAX + 0x24) + 0xaf9);
}

/******************************************************************************
 * Function : sub_01d601 (Ghidra: FUN_0001d601)
 * Prototype: int sub_01d601(void);
 * Address  : 0x1d601 (Size: 518 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1b15c
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
int FUN_0001d601(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *in_EDX;
  undefined4 *unaff_EBX;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  undefined8 uVar12;
  short local_50;
  short local_4e;
  undefined2 local_4c;
  uint local_48;
  short *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  undefined4 *local_34;
  int local_2c;
  byte *local_24;
  int local_20;
  
  bVar11 = 0;
  local_24 = (byte *)0x0;
  local_2c = -1;
  iVar8 = 0x7fffffff;
  iVar4 = *(int *)(in_EAX + 0x24);
  local_38 = iVar4 + 0x22;
  *unaff_EBX = 0;
  local_34 = in_EDX;
  for (pbVar10 = &DAT_002eb552; pbVar10 < &DAT_002eb9b2; pbVar10 = pbVar10 + 0x1c) {
    if ((*pbVar10 & 1) != 0) {
      if (((pbVar10[*(char *)(iVar4 + 0xe9f) + 1] & 1) == 0) &&
         (-1 < (char)(pbVar10[*(char *)(iVar4 + 0xe9f) + 1] << 6))) {
        bVar1 = pbVar10[6];
        bVar2 = pbVar10[8];
        local_20 = iVar4;
        do {
          uVar3 = *(ushort *)(local_20 + 0xb);
          while (iVar7 = (uint)uVar3 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar7) {
            local_3c = (uint)bVar1;
            FUN_000e69fc();
            local_3c = (uint)bVar2;
            uVar12 = FUN_000e69fc();
            iVar5 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
            iVar8 = extraout_ECX;
            if (iVar5 != 0) {
              if (*(short *)(&DAT_002ddd25 + iVar7) == 2) {
                iVar6 = 0x16;
              }
              else {
                iVar6 = 0;
              }
              iVar6 = (iVar5 - ((int)(uint)*(ushort *)(pbVar10 + 0xe) >> 3)) - iVar6;
              iVar8 = extraout_ECX;
              if (iVar6 < extraout_ECX) {
                local_50 = (ushort)(byte)(&DAT_002ddd23)[iVar7] << 8;
                local_4e = (ushort)(byte)(&DAT_002ddd24)[iVar7] << 8;
                local_44 = &local_50;
                local_4c = 0x100;
                iVar8 = iVar6;
                local_24 = pbVar10;
              }
            }
            uVar3 = *(ushort *)(&DAT_002ddd21 + iVar7);
          }
          local_20 = local_20 + 2;
        } while (local_20 != local_38);
        uVar3 = *(ushort *)(in_EAX + 0x14c6);
        while( true ) {
          iVar7 = (uint)uVar3 * 0x94;
          pbVar9 = &DAT_002c9203 + iVar7;
          local_2c = 0;
          if (pbVar9 < &DAT_002c9204) break;
          if (((*pbVar9 & 1) != 0) && ((*pbVar9 & 2) != 0)) {
            local_3c = FUN_000e69fc();
            local_48 = (uint)(byte)(&DAT_002c926a)[iVar7];
            uVar12 = FUN_000e69fc();
            local_40 = (int)((ulonglong)uVar12 >> 0x20) + (int)uVar12;
            iVar8 = extraout_ECX_00;
            if ((local_40 != 0) &&
               (local_40 = local_40 - ((int)(uint)*(ushort *)(pbVar10 + 0xe) >> 3),
               iVar8 = extraout_ECX_00, local_40 < extraout_ECX_00)) {
              local_44 = (short *)(&DAT_002c9267 + iVar7);
              iVar8 = local_40;
              local_24 = pbVar10;
            }
          }
          uVar3 = *(ushort *)(&DAT_002c9295 + iVar7);
        }
      }
    }
  }
  if (local_24 != (byte *)0x0) {
    *unaff_EBX = local_24;
    *local_34 = *(undefined4 *)local_44;
    *(short *)(local_34 + (uint)bVar11 * -2 + 1) = local_44[((uint)bVar11 * -2 + 1) * 2];
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    return iVar8;
  }
  return local_2c;
}

/******************************************************************************
 * Function : sub_01d807 (Ghidra: FUN_0001d807)
 * Prototype: undefined4 sub_01d807(void);
 * Address  : 0x1d807 (Size: 154 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1c1f1
 * Callees  : 2 -> 0x1ddd4, 0x1e5de
 ******************************************************************************/
undefined4 FUN_0001d807(void)

{
  short sVar1;
  int iVar2;
  int in_EDX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 local_64 [80];
  
  bVar5 = 0;
  *(undefined4 *)(in_EDX + 0x14) = *(undefined4 *)(in_EDX + 0x20);
  *(undefined2 *)(in_EDX + 0x18) = *(undefined2 *)(in_EDX + 0x24);
  iVar2 = FUN_0001ddd4();
  if (iVar2 != 0x19) {
    *(undefined4 *)(in_EDX + 0x26) = 0x7fffffff;
    *(undefined4 *)(in_EDX + 0x54) = 0;
    *(undefined4 *)(in_EDX + 0x1a) = *(undefined4 *)(in_EDX + 0x20);
    *(undefined2 *)(in_EDX + 0x1e + (uint)bVar5 * -8) =
         *(undefined2 *)(in_EDX + 0x24 + (uint)bVar5 * -8);
    puVar3 = (undefined1 *)(in_EDX + 0xe);
    puVar4 = local_64;
    for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    do {
      sVar1 = FUN_0001e5de();
    } while (sVar1 == 0);
    if ((sVar1 == -1) || (sVar1 == -5)) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01d8a1 (Ghidra: FUN_0001d8a1)
 * Prototype: undefined4 sub_01d8a1(void);
 * Address  : 0x1d8a1 (Size: 118 bytes)
 * Module   : comptask.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x401aa
 ******************************************************************************/
undefined4 FUN_0001d8a1(void)

{
  int iVar1;
  int extraout_ECX;
  int in_EDX;
  
  FUN_000401aa();
  if (((&DAT_001921c6)
       [(uint)(byte)(&DAT_002d33c5)[(extraout_ECX / 3 + (in_EDX / 3) * 0x55) * 6] * 0x16] & 1) != 0)
  {
    iVar1 = FUN_000401aa();
    if (iVar1 < 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01df28 (Ghidra: FUN_0001df28)
 * Prototype: void sub_01df28(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);
 * Address  : 0x1df28 (Size: 61 bytes)
 * Module   : comptask.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x18e3c, 0x1916a, 0x194e8, 0x198cd, 0x19af8, 0x1b3d7, 0x1bc3e, 0x1bf7d, 0x1c563, 0x1c92a ...
 * Callees  : 1 -> 0x48c77
 ******************************************************************************/
void FUN_0001df28(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  short sVar1;
  int in_EAX;
  
  sVar1 = FUN_00048c77(param_2,param_3,param_4);
  if (0 < sVar1) {
    *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + -1;
  }
  return;
}

