/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: creature.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 93
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_07df64 (Ghidra: FUN_0007df64)
 * Prototype: int sub_07df64(void);
 * Address  : 0x7df64 (Size: 463 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x7e868, 0x7f290, 0x7f310
 * Callees  : 2 -> 0x22b3a, 0x22b94
 ******************************************************************************/
int FUN_0007df64(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte in_CL;
  ushort *in_EDX;
  int iVar4;
  int iVar5;
  byte unaff_BL;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  iVar4 = (int)(*in_EDX - uVar1) >> 0x1f;
  iVar4 = (int)(((*in_EDX - uVar1) + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  iVar5 = (int)(in_EDX[1] - uVar1) >> 0x1f;
  iVar5 = (int)(((in_EDX[1] - uVar1) + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  uVar2 = ((int)(*in_EDX + uVar1) >> 8) + 1;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  uVar1 = ((int)(in_EDX[1] + uVar1) >> 8) + 1;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  do {
    if ((int)uVar1 <= iVar5) {
      return -1;
    }
    if (iVar4 < (int)uVar2) {
      iVar8 = iVar4 * 4;
      iVar7 = iVar4 * 5 + iVar5 * 0x500;
      iVar6 = iVar4;
      do {
        if ((((*(byte *)((int)&DAT_00279203 + iVar7) & unaff_BL) != 0) ||
            ((&DAT_002d33c5)
             [((&DAT_0019033b)[iVar5] * 0x55 + *(int *)((int)&DAT_0019033b + iVar8)) * 6] == '\0'))
           && (((*(byte *)((int)&DAT_00279203 + iVar7) & unaff_BL & 0x20) == 0 ||
               (((uint)in_CL &
                1 << ((&DAT_002d33ca)
                      [((&DAT_0019033b)[iVar5] * 0x55 + *(int *)((int)&DAT_0019033b + iVar8)) * 6] &
                     7)) == 0)))) {
          if ((*(byte *)((int)&DAT_00279203 + iVar7) & 0x40) == 0) {
            return iVar5 * 0x100 + iVar6;
          }
          iVar3 = FUN_00022b3a();
          if ((iVar3 == 0) || (iVar3 = FUN_00022b94(), iVar3 == 0)) {
            return iVar5 * 0x100 + iVar6;
          }
        }
        iVar8 = iVar8 + 4;
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 5;
      } while (iVar6 < (int)uVar2);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_07e134 (Ghidra: FUN_0007e134)
 * Prototype: undefined4 sub_07e134(void);
 * Address  : 0x7e134 (Size: 1841 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x12a2e, 0xb3dac, 0xc6ec0
 * Callees  : 5 -> 0x7dbc0, 0xb28e8, 0xb3040, 0xc79e0, 0xc7a58
 ******************************************************************************/
undefined4 FUN_0007e134(void)

{
  uint uVar1;
  bool bVar2;
  undefined2 uVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  ushort *extraout_ECX;
  int extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  ushort *extraout_ECX_05;
  undefined4 *extraout_ECX_06;
  undefined4 *extraout_ECX_07;
  undefined4 *extraout_ECX_08;
  undefined4 *puVar7;
  undefined4 *extraout_ECX_09;
  ushort *extraout_ECX_10;
  ushort *in_EDX;
  int iVar8;
  byte bVar9;
  undefined2 auStack_70 [2];
  undefined4 local_6c;
  undefined2 auStack_68 [2];
  undefined4 local_64;
  undefined2 auStack_60 [2];
  undefined1 local_5c;
  byte bStack_5b;
  undefined1 uStack_5a;
  byte bStack_59;
  undefined2 local_58 [2];
  undefined4 local_54;
  undefined2 auStack_50 [2];
  undefined4 local_4c;
  ushort auStack_48 [2];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 local_3c;
  undefined2 auStack_38 [2];
  undefined4 local_34;
  undefined2 auStack_30 [2];
  undefined4 local_2c;
  ushort auStack_28 [2];
  undefined4 local_24;
  undefined2 auStack_20 [2];
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  uVar1 = *(uint *)(in_EAX + 0xd);
  local_5c = (undefined1)uVar1;
  bStack_5b = (byte)(uVar1 >> 8);
  uStack_5a = (undefined1)(uVar1 >> 0x10);
  bStack_59 = (byte)(uVar1 >> 0x18);
  local_58[0] = *(ushort *)(in_EAX + 0x11);
  local_1c = (uint)*in_EDX - (uVar1 & 0xffff);
  local_18 = (uint)in_EDX[1] - (uVar1 >> 0x10);
  local_24 = *(uint *)(in_EAX + 0xd);
  auStack_20[0] = *(undefined2 *)(in_EAX + 0x11);
  if ((bStack_5b == *(byte *)((int)in_EDX + 1)) || (bStack_59 == *(byte *)((int)in_EDX + 3))) {
    local_2c = *(undefined4 *)in_EDX;
    auStack_28[0] = in_EDX[2];
    iVar5 = FUN_0007dbc0();
    if (iVar5 != 0) {
      iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar5 = FUN_000b3040();
      if (iVar5 < iVar8) {
        uVar6 = 1;
        in_EDX = extraout_ECX_10;
        goto LAB_0007e844;
      }
      extraout_ECX_10[2] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 == -1) || (0x100 < iVar5 - iVar8)) {
        uVar6 = 1;
        goto LAB_0007e844;
      }
    }
    uVar6 = 0;
LAB_0007e844:
    *(undefined4 *)in_EDX = local_2c;
    in_EDX[(uint)bVar9 * -4 + 2] = auStack_28[(uint)bVar9 * -4];
    return uVar6;
  }
  iVar5 = FUN_000c79e0();
  if (iVar5 == 0) {
    iVar5 = FUN_000c7a58();
    if (iVar5 == 0) {
      local_54 = *extraout_ECX_04;
      auStack_50[(uint)bVar9 * -4] = *(undefined2 *)(extraout_ECX_04 + (uint)bVar9 * -2 + 1);
      iVar5 = FUN_0007dbc0();
      puVar7 = extraout_ECX_04;
      if (iVar5 == 0) {
LAB_0007e7af:
        bVar2 = false;
      }
      else {
        iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
        iVar5 = FUN_000b3040();
        if (iVar5 < iVar8) {
          bVar2 = true;
          puVar7 = extraout_ECX_09;
        }
        else {
          *(undefined2 *)(extraout_ECX_09 + 1) = 0xffff;
          iVar5 = FUN_000b28e8();
          if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e7af;
          bVar2 = true;
        }
      }
      *puVar7 = local_54;
      *(undefined2 *)(puVar7 + (uint)bVar9 * -2 + 1) = auStack_50[(uint)bVar9 * -4];
      if (bVar2) {
        *(uint *)(in_EAX + 0xd) = local_24;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_20[(uint)bVar9 * -4];
        return 1;
      }
    }
    else {
      local_44 = CONCAT13(bStack_59,CONCAT12(uStack_5a,CONCAT11(bStack_5b,local_5c)));
      local_40[(uint)bVar9 * -4] = local_58[(uint)bVar9 * -4];
      if (CONCAT11(bStack_59,uStack_5a) < *(ushort *)((int)extraout_ECX_04 + 2)) {
        uVar4 = (ushort)(byte)(bStack_59 + 1) << 8;
      }
      else {
        uVar4 = (ushort)bStack_59 * 0x100 - 1;
      }
      local_44 = CONCAT22(uVar4,(short)((int)(local_1c * ((uint)uVar4 - (local_24 >> 0x10))) /
                                       local_18) + (short)local_24);
      local_40[0] = local_58[0];
      local_4c = local_44;
      auStack_48[(uint)bVar9 * -4] = local_40[(uint)bVar9 * -4];
      iVar5 = FUN_0007dbc0();
      if (iVar5 == 0) {
LAB_0007e546:
        bVar2 = false;
      }
      else {
        iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
        iVar5 = FUN_000b3040();
        if (iVar5 < iVar8) {
          bVar2 = true;
        }
        else {
          local_40[0] = 0xffff;
          iVar5 = FUN_000b28e8();
          if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e546;
          bVar2 = true;
        }
      }
      local_44 = local_4c;
      local_40[(uint)bVar9 * -4] = auStack_48[(uint)bVar9 * -4];
      if (bVar2) {
        return 1;
      }
      *(undefined4 *)(in_EAX + 0xd) = local_4c;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_40[(uint)bVar9 * -4];
      uVar3 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar3;
      uVar6 = *(undefined4 *)(in_EAX + 0xd);
      local_5c = (undefined1)uVar6;
      bStack_5b = (byte)((uint)uVar6 >> 8);
      uStack_5a = (undefined1)((uint)uVar6 >> 0x10);
      bStack_59 = (byte)((uint)uVar6 >> 0x18);
      local_58[(uint)bVar9 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8);
      if ((ushort)uVar6 < *extraout_ECX_05) {
        uVar4 = (ushort)(byte)(bStack_5b + 1) << 8;
      }
      else {
        uVar4 = ((ushort)uVar6 & 0xff00) - 1;
      }
      local_44 = (uint)uVar4;
      local_44 = CONCAT22((short)((int)((local_44 - (local_24 & 0xffff)) * local_18) / local_1c) +
                          local_24._2_2_,uVar4);
      local_40[0] = local_58[0];
      local_34 = local_44;
      auStack_30[(uint)bVar9 * -4] = local_40[(uint)bVar9 * -4];
      iVar5 = FUN_0007dbc0();
      if (iVar5 == 0) {
LAB_0007e64c:
        bVar2 = false;
      }
      else {
        iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
        iVar5 = FUN_000b3040();
        if (iVar5 < iVar8) {
          bVar2 = true;
        }
        else {
          local_40[0] = 0xffff;
          iVar5 = FUN_000b28e8();
          if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e64c;
          bVar2 = true;
        }
      }
      uVar6 = local_34;
      local_44 = local_34;
      local_40[(uint)bVar9 * -4] = auStack_30[(uint)bVar9 * -4];
      if (bVar2) {
        *(uint *)(in_EAX + 0xd) = local_24;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_20[(uint)bVar9 * -4];
        return 1;
      }
      *(undefined4 *)(in_EAX + 0xd) = uVar6;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_40[(uint)bVar9 * -4];
      uVar3 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar3;
      uVar6 = *(undefined4 *)(in_EAX + 0xd);
      local_5c = (undefined1)uVar6;
      bStack_5b = (byte)((uint)uVar6 >> 8);
      uStack_5a = (undefined1)((uint)uVar6 >> 0x10);
      bStack_59 = (byte)((uint)uVar6 >> 0x18);
      local_58[(uint)bVar9 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8);
      local_44 = *extraout_ECX_06;
      local_40[0] = local_58[0];
      local_64 = *extraout_ECX_06;
      auStack_60[(uint)bVar9 * -4] = local_40[(uint)bVar9 * -4];
      iVar5 = FUN_0007dbc0();
      puVar7 = extraout_ECX_07;
      if (iVar5 == 0) {
LAB_0007e722:
        bVar2 = false;
      }
      else {
        iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
        iVar5 = FUN_000b3040();
        if (iVar5 < iVar8) {
          puVar7 = &local_44;
          bVar2 = true;
        }
        else {
          local_40[0] = 0xffff;
          iVar5 = FUN_000b28e8();
          puVar7 = extraout_ECX_08;
          if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e722;
          bVar2 = true;
        }
      }
      *puVar7 = local_64;
      *(undefined2 *)(puVar7 + (uint)bVar9 * -2 + 1) = auStack_60[(uint)bVar9 * -4];
      if (bVar2) {
        *(uint *)(in_EAX + 0xd) = local_24;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_20[(uint)bVar9 * -4];
        return 1;
      }
    }
  }
  else {
    if (CONCAT11(bStack_5b,local_5c) < *extraout_ECX) {
      uVar4 = (ushort)(byte)(bStack_5b + 1) << 8;
    }
    else {
      uVar4 = (ushort)bStack_5b * 0x100 - 1;
    }
    local_44 = (uint)uVar4;
    local_44 = CONCAT22((short)((int)((local_44 - (local_24 & 0xffff)) * local_18) / local_1c) +
                        local_24._2_2_,uVar4);
    local_40[0] = local_58[0];
    local_3c = local_44;
    auStack_38[(uint)bVar9 * -4] = local_40[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0();
    if (iVar5 == 0) {
LAB_0007e26c:
      bVar2 = false;
    }
    else {
      iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar5 = FUN_000b3040();
      if (iVar5 < iVar8) {
        bVar2 = true;
      }
      else {
        local_40[0] = 0xffff;
        iVar5 = FUN_000b28e8();
        if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e26c;
        bVar2 = true;
      }
    }
    uVar6 = local_3c;
    local_44 = local_3c;
    local_40[(uint)bVar9 * -4] = auStack_38[(uint)bVar9 * -4];
    if (bVar2) {
      return 1;
    }
    *(undefined4 *)(in_EAX + 0xd) = uVar6;
    *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_40[(uint)bVar9 * -4];
    uVar3 = FUN_000b28e8();
    *(undefined2 *)(in_EAX + 0x11) = uVar3;
    uVar6 = *(undefined4 *)(in_EAX + 0xd);
    local_5c = (undefined1)uVar6;
    bStack_5b = (byte)((uint)uVar6 >> 8);
    uStack_5a = (undefined1)((uint)uVar6 >> 0x10);
    bStack_59 = (byte)((uint)uVar6 >> 0x18);
    local_58[(uint)bVar9 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8);
    uVar4 = (ushort)((uint)uVar6 >> 0x10);
    if (uVar4 < *(ushort *)(extraout_ECX_00 + 2)) {
      uVar4 = (ushort)(byte)(bStack_59 + 1) << 8;
    }
    else {
      uVar4 = (uVar4 & 0xff00) - 1;
    }
    local_44 = CONCAT22(uVar4,(short)((int)(local_1c * ((uint)uVar4 - (local_24 >> 0x10))) /
                                     local_18) + (short)local_24);
    uVar6 = local_44;
    local_40[0] = local_58[0];
    auStack_70[(uint)bVar9 * -4] = local_40[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0();
    if (iVar5 == 0) {
LAB_0007e369:
      bVar2 = false;
    }
    else {
      iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar5 = FUN_000b3040();
      if (iVar5 < iVar8) {
        bVar2 = true;
      }
      else {
        local_40[0] = 0xffff;
        iVar5 = FUN_000b28e8();
        if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e369;
        bVar2 = true;
      }
    }
    local_44 = uVar6;
    local_40[(uint)bVar9 * -4] = auStack_70[(uint)bVar9 * -4];
    if (bVar2) {
      uVar6 = 1;
      goto LAB_0007e859;
    }
    *(undefined4 *)(in_EAX + 0xd) = uVar6;
    *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_40[(uint)bVar9 * -4];
    uVar3 = FUN_000b28e8();
    *(undefined2 *)(in_EAX + 0x11) = uVar3;
    uVar6 = *(undefined4 *)(in_EAX + 0xd);
    local_5c = (undefined1)uVar6;
    bStack_5b = (byte)((uint)uVar6 >> 8);
    uStack_5a = (undefined1)((uint)uVar6 >> 0x10);
    bStack_59 = (byte)((uint)uVar6 >> 0x18);
    local_58[(uint)bVar9 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8);
    local_44 = *extraout_ECX_01;
    local_40[0] = local_58[0];
    local_6c = *extraout_ECX_01;
    auStack_68[(uint)bVar9 * -4] = local_40[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0();
    puVar7 = extraout_ECX_02;
    if (iVar5 == 0) {
LAB_0007e436:
      bVar2 = false;
    }
    else {
      iVar8 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar5 = FUN_000b3040();
      if (iVar5 < iVar8) {
        puVar7 = &local_44;
        bVar2 = true;
      }
      else {
        local_40[0] = 0xffff;
        iVar5 = FUN_000b28e8();
        puVar7 = extraout_ECX_03;
        if ((iVar5 != -1) && (iVar5 - iVar8 < 0x101)) goto LAB_0007e436;
        bVar2 = true;
      }
    }
    *puVar7 = local_6c;
    *(undefined2 *)(puVar7 + (uint)bVar9 * -2 + 1) = auStack_68[(uint)bVar9 * -4];
    if (bVar2) {
      *(uint *)(in_EAX + 0xd) = local_24;
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_20[(uint)bVar9 * -4];
      return 1;
    }
  }
  uVar6 = 0;
LAB_0007e859:
  *(uint *)(in_EAX + 0xd) = local_24;
  *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_20[(uint)bVar9 * -4];
  return uVar6;
}

/******************************************************************************
 * Function : sub_07e868 (Ghidra: FUN_0007e868)
 * Prototype: uint sub_07e868(void);
 * Address  : 0x7e868 (Size: 2496 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0xd1ae0, 0xd2510, 0xd29ac, 0xd3ee8, 0xd3f64, 0xd402c, 0xd4188, 0xd5624
 * Callees  : 5 -> 0x7dbc0, 0x7df64, 0xb28e8, 0xc79e0, 0xc7a58
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

uint FUN_0007e868(void)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  int in_EAX;
  int iVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  ushort *in_EDX;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bStack_db;
  undefined1 uStack_da;
  char cStack_d9;
  ushort local_d8 [2];
  undefined4 local_d4;
  ushort auStack_d0 [2];
  undefined4 local_cc;
  ushort auStack_c8 [2];
  undefined4 local_c4;
  ushort auStack_c0 [2];
  undefined4 local_bc;
  undefined2 auStack_b8 [2];
  undefined4 local_b4;
  ushort auStack_b0 [2];
  undefined4 local_ac;
  ushort local_a8 [2];
  undefined4 local_a4;
  ushort auStack_a0 [2];
  undefined4 local_9c;
  ushort auStack_98 [2];
  undefined4 local_94;
  ushort auStack_90 [2];
  undefined4 local_8c;
  ushort auStack_88 [4];
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_78;
  ushort *local_70;
  int local_68;
  byte local_28;
  
  bVar9 = 0;
  uVar6 = *(uint *)(in_EAX + 0xd);
  uVar10 = (undefined1)uVar6;
  bStack_db = (byte)(uVar6 >> 8);
  uStack_da = (undefined1)(uVar6 >> 0x10);
  cStack_d9 = (char)(uVar6 >> 0x18);
  local_d8[0] = *(ushort *)(in_EAX + 0x11);
  local_68 = (uVar6 & 0xffff) - (uint)*in_EDX;
  local_78 = (uVar6 >> 0x10) - (uint)in_EDX[1];
  local_bc = *(uint *)(in_EAX + 0xd);
  auStack_b8[0] = *(undefined2 *)(in_EAX + 0x11);
  local_28 = 0;
  local_70 = in_EDX;
  if ((bStack_db == *(byte *)((int)in_EDX + 1)) || (cStack_d9 == *(char *)((int)in_EDX + 3))) {
    local_9c = *(undefined4 *)in_EDX;
    auStack_98[0] = in_EDX[2];
    iVar5 = FUN_0007dbc0();
    uVar6 = extraout_ECX_11;
    if (iVar5 != 0) {
      local_70[2] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 == -1) ||
         (uVar6 = extraout_ECX_12, 0x100 < iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10))) {
        iVar5 = FUN_0007df64();
        if (iVar5 < 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = 4;
        }
      }
    }
    *(undefined4 *)in_EDX = local_9c;
    in_EDX[(uint)bVar9 * -4 + 2] = auStack_98[(uint)bVar9 * -4];
    return uVar6;
  }
  iVar5 = FUN_000c79e0();
  if (iVar5 == 0) {
    iVar5 = FUN_000c7a58();
    puVar8 = local_70;
    if (iVar5 == 0) {
      local_a4 = *(undefined4 *)local_70;
      auStack_a0[(uint)bVar9 * -4] = local_70[(uint)bVar9 * -4 + 2];
      iVar5 = FUN_0007dbc0();
      uVar6 = extraout_ECX_09;
      if (iVar5 == 0) {
LAB_0007f140:
        *(undefined4 *)puVar8 = local_a4;
        puVar8[(uint)bVar9 * -4 + 2] = auStack_a0[(uint)bVar9 * -4];
      }
      else {
        local_70[2] = 0xffff;
        iVar5 = FUN_000b28e8();
        if ((iVar5 != -1) &&
           (uVar6 = extraout_ECX_10, iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10) < 0x101))
        goto LAB_0007f140;
        iVar5 = FUN_0007df64();
        if (iVar5 < 0) {
          uVar6 = 1;
          goto LAB_0007f140;
        }
        *(undefined4 *)puVar8 = local_a4;
        puVar8[(uint)bVar9 * -4 + 2] = auStack_a0[(uint)bVar9 * -4];
        uVar6 = 4;
      }
      goto joined_r0x0007f153;
    }
    local_ac = CONCAT13(cStack_d9,CONCAT12(uStack_da,CONCAT11(bStack_db,uVar10)));
    local_a8[(uint)bVar9 * -4] = local_d8[(uint)bVar9 * -4];
    uVar3 = (ushort)(uVar6 >> 0x10);
    if (uVar3 < puVar8[1]) {
      uVar3 = (ushort)(byte)(cStack_d9 + 1) << 8;
    }
    else {
      uVar3 = (uVar3 & 0xff00) - 1;
    }
    uVar6 = (uint)uVar3 - (local_bc >> 0x10);
    uVar7 = (int)uVar6 >> 0x1f;
    local_ac = CONCAT22(uVar3,(short)((int)(local_68 * ((uVar6 ^ uVar7) - uVar7)) / local_78) +
                              (short)local_bc);
    local_a8[0] = local_d8[0];
    local_80 = &local_ac;
    local_b4 = local_ac;
    auStack_b0[(uint)bVar9 * -4] = local_a8[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0();
    uVar6 = extraout_ECX_03;
    if (iVar5 == 0) {
LAB_0007edfd:
      puVar8 = (ushort *)(local_80 + (uint)bVar9 * -2 + 1);
      *local_80 = local_b4;
      *puVar8 = auStack_b0[(uint)bVar9 * -4];
    }
    else {
      local_a8[0] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 != -1) &&
         (uVar6 = extraout_ECX_04, iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10) < 0x101))
      goto LAB_0007edfd;
      iVar5 = FUN_0007df64();
      if (iVar5 < 0) {
        uVar6 = 1;
        goto LAB_0007edfd;
      }
      puVar8 = (ushort *)(local_80 + (uint)bVar9 * -2 + 1);
      *local_80 = local_b4;
      *puVar8 = auStack_b0[(uint)bVar9 * -4];
      uVar6 = 4;
    }
    if (uVar6 == 0) {
      *(uint *)(in_EAX + 0xd) = local_ac;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      uVar4 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar4;
    }
    else if (uVar6 < 2) {
      *(uint *)(in_EAX + 0xd) = local_ac;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      local_28 = 1;
      *(undefined2 *)(in_EAX + 0x11) = 0;
    }
    else if (uVar6 == 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(in_EAX + 0xd);
    local_d8[(uint)bVar9 * -4] = *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8);
    uVar3 = (ushort)uVar1;
    if (uVar3 < *local_70) {
      uVar3 = (ushort)(byte)((char)((uint)uVar1 >> 8) + 1) << 8;
    }
    else {
      uVar3 = (uVar3 & 0xff00) - 1;
    }
    local_ac = (uint)uVar3;
    local_ac = local_ac - (local_bc & 0xffff);
    uVar6 = (int)local_ac >> 0x1f;
    local_ac = CONCAT22((short)((int)(local_78 * ((local_ac ^ uVar6) - uVar6)) / local_68) +
                        local_bc._2_2_,uVar3);
    local_a8[0] = local_d8[0];
    local_cc = local_ac;
    auStack_c8[(uint)bVar9 * -4] = local_a8[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0();
    uVar6 = extraout_ECX_05;
    if (iVar5 == 0) {
LAB_0007ef5c:
      local_a8[(uint)bVar9 * -4] = auStack_c8[(uint)bVar9 * -4];
    }
    else {
      local_a8[0] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 != -1) &&
         (uVar6 = extraout_ECX_06, iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10) < 0x101))
      goto LAB_0007ef5c;
      iVar5 = FUN_0007df64();
      if (iVar5 < 0) {
        uVar6 = 1;
        goto LAB_0007ef5c;
      }
      local_a8[(uint)bVar9 * -4] = auStack_c8[(uint)bVar9 * -4];
      uVar6 = 4;
    }
    if (uVar6 == 0) {
      *(undefined4 *)(in_EAX + 0xd) = local_cc;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      local_ac = local_cc;
      uVar4 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar4;
LAB_0007efb8:
      puVar8 = local_70;
      uVar1 = *(undefined4 *)(in_EAX + 0xd);
      local_d8[(uint)bVar9 * -4] = *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8);
      puVar2 = local_70;
      local_ac = CONCAT22(local_70[1],*puVar8);
      local_a8[0] = local_d8[0];
      local_8c = *(undefined4 *)local_70;
      auStack_88[(uint)bVar9 * -4] = local_70[(uint)bVar9 * -4 + 2];
      iVar5 = FUN_0007dbc0((char)uVar1);
      uVar6 = extraout_ECX_07;
      if (iVar5 != 0) {
        local_70[2] = 0xffff;
        iVar5 = FUN_000b28e8();
        if ((iVar5 == -1) ||
           (uVar6 = extraout_ECX_08, 0x100 < iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10))) {
          iVar5 = FUN_0007df64();
          if (-1 < iVar5) {
            *(undefined4 *)puVar2 = local_8c;
            puVar2[(uint)bVar9 * -4 + 2] = auStack_88[(uint)bVar9 * -4];
            uVar6 = 4;
            goto joined_r0x0007f153;
          }
          uVar6 = 1;
        }
      }
      *(undefined4 *)puVar2 = local_8c;
      puVar2[(uint)bVar9 * -4 + 2] = auStack_88[(uint)bVar9 * -4];
      goto joined_r0x0007f153;
    }
    if (uVar6 < 2) {
      *(undefined4 *)(in_EAX + 0xd) = local_cc;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      local_28 = 1;
      *(undefined2 *)(in_EAX + 0x11) = 0;
      goto LAB_0007efb8;
    }
    if (uVar6 != 4) goto LAB_0007efb8;
LAB_0007eb87:
    uVar6 = 4;
  }
  else {
    if (CONCAT11(bStack_db,uVar10) < *local_70) {
      uVar3 = (ushort)(byte)(bStack_db + 1) << 8;
    }
    else {
      uVar3 = (ushort)bStack_db * 0x100 - 1;
    }
    local_ac = (uint)uVar3;
    local_ac = local_ac - (local_bc & 0xffff);
    uVar6 = (int)local_ac >> 0x1f;
    local_ac = CONCAT22((short)((int)(local_78 * ((local_ac ^ uVar6) - uVar6)) / local_68) +
                        local_bc._2_2_,uVar3);
    uVar6 = 0;
    local_a8[0] = local_d8[0];
    local_7c = &local_ac;
    local_d4 = local_ac;
    auStack_d0[(uint)bVar9 * -4] = local_a8[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0();
    if (iVar5 == 0) {
LAB_0007e9f9:
      puVar8 = (ushort *)(local_7c + (uint)bVar9 * -2 + 1);
      *local_7c = local_d4;
      *puVar8 = auStack_d0[(uint)bVar9 * -4];
    }
    else {
      local_a8[0] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 != -1) && (iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10) < 0x101)) goto LAB_0007e9f9;
      iVar5 = FUN_0007df64();
      if (iVar5 < 0) {
        uVar6 = 1;
        goto LAB_0007e9f9;
      }
      puVar8 = (ushort *)(local_7c + (uint)bVar9 * -2 + 1);
      *local_7c = local_d4;
      *puVar8 = auStack_d0[(uint)bVar9 * -4];
      uVar6 = 4;
    }
    if (uVar6 == 0) {
      *(uint *)(in_EAX + 0xd) = local_ac;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      uVar4 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar4;
    }
    else if (uVar6 < 2) {
      *(uint *)(in_EAX + 0xd) = local_ac;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      *(undefined2 *)(in_EAX + 0x11) = 0;
      local_28 = 1;
      *(uint *)(in_EAX + 0xd) = local_bc;
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_b8[(uint)bVar9 * -4];
    }
    else if (uVar6 == 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(in_EAX + 0xd);
    local_d8[(uint)bVar9 * -4] = *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8);
    uVar3 = (ushort)((uint)uVar1 >> 0x10);
    if (uVar3 < local_70[1]) {
      uVar3 = (ushort)(byte)((char)((uint)uVar1 >> 0x18) + 1) << 8;
    }
    else {
      uVar3 = (uVar3 & 0xff00) - 1;
    }
    uVar6 = (uint)uVar3 - (local_bc >> 0x10);
    uVar7 = (int)uVar6 >> 0x1f;
    local_ac = CONCAT22(uVar3,(short)((int)(local_68 * ((uVar6 ^ uVar7) - uVar7)) / local_78) +
                              (short)local_bc);
    local_a8[0] = local_d8[0];
    local_c4 = local_ac;
    auStack_c0[(uint)bVar9 * -4] = local_a8[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0((char)uVar1);
    uVar6 = extraout_ECX;
    if (iVar5 == 0) {
LAB_0007eb6b:
      local_a8[(uint)bVar9 * -4] = auStack_c0[(uint)bVar9 * -4];
    }
    else {
      local_a8[0] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 != -1) &&
         (uVar6 = extraout_ECX_00, iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10) < 0x101))
      goto LAB_0007eb6b;
      iVar5 = FUN_0007df64();
      if (iVar5 < 0) {
        uVar6 = 1;
        goto LAB_0007eb6b;
      }
      local_a8[(uint)bVar9 * -4] = auStack_c0[(uint)bVar9 * -4];
      uVar6 = 4;
    }
    if (uVar6 == 0) {
      *(undefined4 *)(in_EAX + 0xd) = local_c4;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      local_ac = local_c4;
      uVar4 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar4;
    }
    else if (uVar6 < 2) {
      *(undefined4 *)(in_EAX + 0xd) = local_c4;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8) = local_a8[(uint)bVar9 * -4];
      local_28 = 1;
      *(undefined2 *)(in_EAX + 0x11) = 0;
    }
    else if (uVar6 == 4) goto LAB_0007eb87;
    puVar8 = local_70;
    uVar1 = *(undefined4 *)(in_EAX + 0xd);
    local_d8[(uint)bVar9 * -4] = *(ushort *)(in_EAX + 0x11 + (uint)bVar9 * -8);
    local_ac = CONCAT22(local_70[1],*puVar8);
    local_a8[0] = local_d8[0];
    local_94 = local_ac;
    auStack_90[(uint)bVar9 * -4] = local_a8[(uint)bVar9 * -4];
    iVar5 = FUN_0007dbc0((char)uVar1);
    uVar6 = extraout_ECX_01;
    if (iVar5 != 0) {
      local_a8[0] = 0xffff;
      iVar5 = FUN_000b28e8();
      if ((iVar5 == -1) ||
         (uVar6 = extraout_ECX_02, 0x100 < iVar5 - (*(int *)(in_EAX + 0xf) >> 0x10))) {
        iVar5 = FUN_0007df64();
        if (-1 < iVar5) {
          local_a8[(uint)bVar9 * -4] = auStack_90[(uint)bVar9 * -4];
          uVar6 = 4;
          goto joined_r0x0007f153;
        }
        uVar6 = 1;
      }
    }
    local_a8[(uint)bVar9 * -4] = auStack_90[(uint)bVar9 * -4];
joined_r0x0007f153:
    if (uVar6 != 0) {
      if (uVar6 < 2) {
        local_28 = 1;
      }
      else if (uVar6 == 4) goto LAB_0007eb87;
    }
    uVar6 = (uint)local_28;
  }
  *(uint *)(in_EAX + 0xd) = local_bc;
  *(undefined2 *)(in_EAX + 0x11 + (uint)bVar9 * -8) = auStack_b8[(uint)bVar9 * -4];
  return uVar6;
}

/******************************************************************************
 * Function : sub_07f228 (Ghidra: FUN_0007f228)
 * Prototype: undefined4 sub_07f228(void);
 * Address  : 0x7f228 (Size: 103 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x7dbc0, 0xb28e8, 0xb3040
 ******************************************************************************/
undefined4 FUN_0007f228(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 *in_EDX;
  int iVar4;
  byte bVar5;
  undefined2 auStack_14 [2];
  
  bVar5 = 0;
  uVar1 = *in_EDX;
  auStack_14[0] = *(undefined2 *)(in_EDX + 1);
  iVar2 = FUN_0007dbc0();
  if (iVar2 == 0) {
LAB_0007f27e:
    uVar3 = 0;
  }
  else {
    iVar4 = *(int *)(extraout_ECX + 0xf) >> 0x10;
    iVar2 = FUN_000b3040();
    if (iVar4 <= iVar2) {
      *(undefined2 *)(in_EDX + 1) = 0xffff;
      iVar2 = FUN_000b28e8();
      if ((iVar2 != -1) && (iVar2 - iVar4 < 0x101)) goto LAB_0007f27e;
    }
    uVar3 = 1;
  }
  *in_EDX = uVar1;
  *(undefined2 *)(in_EDX + (uint)bVar5 * -2 + 1) = auStack_14[(uint)bVar5 * -4];
  return uVar3;
}

/******************************************************************************
 * Function : sub_07f290 (Ghidra: FUN_0007f290)
 * Prototype: undefined4 sub_07f290(void);
 * Address  : 0x7f290 (Size: 128 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x7dbc0, 0x7df64, 0xb28e8
 ******************************************************************************/
undefined4 FUN_0007f290(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_EDX;
  byte bVar4;
  undefined2 auStack_18 [2];
  int local_14;
  
  bVar4 = 0;
  uVar1 = *in_EDX;
  auStack_18[0] = *(undefined2 *)(in_EDX + 1);
  iVar2 = FUN_0007dbc0();
  uVar3 = extraout_ECX;
  if (iVar2 != 0) {
    *(undefined2 *)(in_EDX + 1) = 0xffff;
    iVar2 = FUN_000b28e8();
    if ((iVar2 == -1) ||
       (uVar3 = extraout_ECX_00, 0x100 < iVar2 - (*(int *)(local_14 + 0xf) >> 0x10))) {
      iVar2 = FUN_0007df64();
      if (iVar2 < 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = 4;
      }
    }
  }
  *in_EDX = uVar1;
  *(undefined2 *)(in_EDX + (uint)bVar4 * -2 + 1) = auStack_18[(uint)bVar4 * -4];
  return uVar3;
}

/******************************************************************************
 * Function : sub_07f310 (Ghidra: FUN_0007f310)
 * Prototype: int sub_07f310(void);
 * Address  : 0x7f310 (Size: 893 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xd4188
 * Callees  : 3 -> 0x7df64, 0xc79e0, 0xc7a58
 ******************************************************************************/
int FUN_0007f310(void)

{
  undefined4 uVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint *in_EDX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *unaff_EBX;
  byte bVar8;
  short local_3c [2];
  undefined4 local_38;
  undefined2 auStack_34 [2];
  undefined1 local_30;
  byte bStack_2f;
  undefined1 uStack_2e;
  byte bStack_2d;
  short local_2c [2];
  int local_1c;
  
  bVar8 = 0;
  uVar6 = *in_EDX;
  local_30 = (undefined1)uVar6;
  bStack_2f = (byte)(uVar6 >> 8);
  uStack_2e = (undefined1)(uVar6 >> 0x10);
  bStack_2d = (byte)(uVar6 >> 0x18);
  local_2c[0] = (short)in_EDX[1];
  iVar5 = (uVar6 & 0xffff) - (uint)*unaff_EBX;
  iVar3 = (uVar6 >> 0x10) - (uint)unaff_EBX[1];
  local_38 = *(uint *)(in_EAX + 0xd);
  auStack_34[0] = *(undefined2 *)(in_EAX + 0x11);
  local_1c = 0;
  if ((bStack_2f == *(byte *)((int)unaff_EBX + 1)) || (bStack_2d == *(byte *)((int)unaff_EBX + 3)))
  {
    iVar4 = FUN_0007df64();
joined_r0x0007f655:
    if (iVar4 < 0) goto LAB_0007f676;
  }
  else {
    iVar4 = FUN_000c79e0();
    if (iVar4 == 0) {
      iVar4 = FUN_000c7a58();
      if (iVar4 == 0) {
        iVar4 = FUN_0007df64();
        goto joined_r0x0007f655;
      }
      local_3c[(uint)bVar8 * -4] = local_2c[(uint)bVar8 * -4];
      if (CONCAT11(bStack_2d,uStack_2e) < unaff_EBX[1]) {
        uVar2 = (ushort)(byte)(bStack_2d + 1) << 8;
      }
      else {
        uVar2 = (ushort)bStack_2d * 0x100 - 1;
      }
      uVar6 = (uint)uVar2 - (local_38 >> 0x10);
      uVar7 = (int)uVar6 >> 0x1f;
      local_3c[0] = local_2c[0];
      iVar4 = FUN_0007df64(CONCAT22(uVar2,(short)((int)(iVar5 * ((uVar6 ^ uVar7) - uVar7)) / iVar3)
                                          + (short)local_38));
      if (iVar4 < 0) {
        uVar1 = *(undefined4 *)(in_EAX + 0xd);
        local_30 = (undefined1)uVar1;
        bStack_2f = (byte)((uint)uVar1 >> 8);
        uStack_2e = (undefined1)((uint)uVar1 >> 0x10);
        bStack_2d = (byte)((uint)uVar1 >> 0x18);
        local_2c[(uint)bVar8 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar8 * -8);
        if ((ushort)uVar1 < *unaff_EBX) {
          uVar2 = (ushort)(byte)(bStack_2f + 1) << 8;
        }
        else {
          uVar2 = ((ushort)uVar1 & 0xff00) - 1;
        }
        uVar6 = (uint)uVar2 - (local_38 & 0xffff);
        uVar7 = (int)uVar6 >> 0x1f;
        local_3c[0] = local_2c[0];
        iVar4 = FUN_0007df64(CONCAT22((short)((int)(iVar3 * ((uVar6 ^ uVar7) - uVar7)) / iVar5) +
                                      local_38._2_2_,uVar2));
        if (iVar4 < 0) {
          uVar1 = *(undefined4 *)(in_EAX + 0xd);
          local_30 = (undefined1)uVar1;
          bStack_2f = (byte)((uint)uVar1 >> 8);
          uStack_2e = (undefined1)((uint)uVar1 >> 0x10);
          bStack_2d = (byte)((uint)uVar1 >> 0x18);
          local_2c[(uint)bVar8 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar8 * -8);
          local_3c[0] = local_2c[0];
          iVar4 = FUN_0007df64(*(undefined4 *)unaff_EBX);
          goto joined_r0x0007f655;
        }
      }
    }
    else {
      if (CONCAT11(bStack_2f,local_30) < *unaff_EBX) {
        uVar2 = (ushort)(byte)(bStack_2f + 1) << 8;
      }
      else {
        uVar2 = (ushort)bStack_2f * 0x100 - 1;
      }
      uVar6 = (uint)uVar2 - (local_38 & 0xffff);
      uVar7 = (int)uVar6 >> 0x1f;
      local_3c[0] = local_2c[0];
      iVar4 = FUN_0007df64(CONCAT22((short)((int)(iVar3 * ((uVar6 ^ uVar7) - uVar7)) / iVar5) +
                                    local_38._2_2_,uVar2));
      if (iVar4 < 0) {
        uVar1 = *(undefined4 *)(in_EAX + 0xd);
        local_30 = (undefined1)uVar1;
        bStack_2f = (byte)((uint)uVar1 >> 8);
        uStack_2e = (undefined1)((uint)uVar1 >> 0x10);
        bStack_2d = (byte)((uint)uVar1 >> 0x18);
        local_2c[(uint)bVar8 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar8 * -8);
        uVar2 = (ushort)((uint)uVar1 >> 0x10);
        if (uVar2 < unaff_EBX[1]) {
          uVar2 = (ushort)(byte)(bStack_2d + 1) << 8;
        }
        else {
          uVar2 = (uVar2 & 0xff00) - 1;
        }
        uVar6 = (uint)uVar2 - (local_38 >> 0x10);
        uVar7 = (int)uVar6 >> 0x1f;
        local_3c[0] = local_2c[0];
        iVar4 = FUN_0007df64(CONCAT22(uVar2,(short)((int)(iVar5 * ((uVar6 ^ uVar7) - uVar7)) / iVar3
                                                   ) + (short)local_38));
        if (iVar4 < 0) {
          uVar1 = *(undefined4 *)(in_EAX + 0xd);
          local_30 = (undefined1)uVar1;
          bStack_2f = (byte)((uint)uVar1 >> 8);
          uStack_2e = (undefined1)((uint)uVar1 >> 0x10);
          bStack_2d = (byte)((uint)uVar1 >> 0x18);
          local_2c[(uint)bVar8 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar8 * -8);
          local_3c[0] = local_2c[0];
          iVar4 = FUN_0007df64(*(undefined4 *)unaff_EBX);
          goto joined_r0x0007f655;
        }
      }
    }
  }
  local_1c = iVar4;
LAB_0007f676:
  *(uint *)(in_EAX + 0xd) = local_38;
  *(undefined2 *)(in_EAX + 0x11 + (uint)bVar8 * -8) = auStack_34[(uint)bVar8 * -4];
  return local_1c;
}

/******************************************************************************
 * Function : sub_07f690 (Ghidra: FUN_0007f690)
 * Prototype: int sub_07f690(code *param_1);
 * Address  : 0x7f690 (Size: 159 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x7f730, 0x7f804, 0x7f8e0
 * Callees  : 1 -> 0x7dae0
 ******************************************************************************/
int FUN_0007f690(code *param_1)

{
  int in_EAX;
  int iVar1;
  byte in_CL;
  uint unaff_EBX;
  int iVar2;
  
  iVar2 = (&DAT_001ae9fc)
          [(*(uint *)((int)&DAT_00279203 + ((unaff_EBX & 0xff) + (uint)in_CL * 0x100) * 5 + 1) &
           0x3fffff) >> 0xb];
  if (iVar2 != DAT_001ae9fc) {
    do {
      if (((iVar2 != in_EAX) && (iVar1 = (*param_1)(), iVar1 != 0)) &&
         (iVar1 = FUN_0007dae0(), iVar1 != 0)) {
        return iVar2;
      }
      iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 2)];
    } while (iVar2 != DAT_001ae9fc);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_07f730 (Ghidra: FUN_0007f730)
 * Prototype: int sub_07f730(void);
 * Address  : 0x7f730 (Size: 209 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb41d8
 * Callees  : 1 -> 0x7f690
 ******************************************************************************/
int FUN_0007f730(void)

{
  int in_EAX;
  int iVar1;
  ushort *in_EDX;
  uint *puVar2;
  uint uVar3;
  uint local_24;
  int local_20;
  int local_18;
  
  puVar2 = &local_24;
  local_20 = (int)(*in_EDX - 0x180) >> 8;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_18 = (int)(in_EDX[1] - 0x180) >> 8;
  if (local_18 < 0) {
    local_18 = 0;
  }
  uVar3 = (int)(*in_EDX + 0x180) >> 8;
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  local_24 = (int)(in_EDX[1] + 0x180) >> 8;
  if (0xff < local_24) {
    local_24 = 0xff;
  }
  if (local_18 <= (int)local_24) {
    do {
      iVar1 = puVar2[1];
      puVar2[2] = iVar1;
      while (iVar1 <= (int)uVar3) {
        puVar2[-1] = (uint)*(byte *)(in_EAX + 0x1a);
        puVar2[-2] = (uint)*(byte *)(in_EAX + 0x1f);
        puVar2[-3] = (uint)FUN_0007fa3c;
        puVar2[-4] = 0x7f7f0;
        iVar1 = FUN_0007f690();
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = puVar2[-1] + 1;
        puVar2[-1] = iVar1;
        puVar2 = puVar2 + -3;
      }
      iVar1 = puVar2[3];
      puVar2[3] = iVar1 + 1;
    } while (iVar1 + 1 <= (int)*puVar2);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_07f804 (Ghidra: FUN_0007f804)
 * Prototype: int sub_07f804(void);
 * Address  : 0x7f804 (Size: 219 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xb3dac, 0xb41d8
 * Callees  : 1 -> 0x7f690
 ******************************************************************************/
int FUN_0007f804(void)

{
  ushort *in_EDX;
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_24;
  int local_20;
  
  puVar3 = &local_24;
  local_20 = (int)(*in_EDX - 0x180) >> 8;
  if (local_20 < 0) {
    local_20 = 0;
  }
  iVar1 = (int)(in_EDX[1] - 0x180) >> 8;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  uVar2 = (int)(*in_EDX + 0x180) >> 8;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  local_24 = (int)(in_EDX[1] + 0x180) >> 8;
  if (0xff < local_24) {
    local_24 = 0xff;
  }
  if (iVar1 <= (int)local_24) {
    do {
      iVar1 = puVar3[1];
      puVar3[5] = iVar1;
      while (iVar1 <= (int)uVar2) {
        puVar3[-1] = puVar3[10];
        puVar3[-2] = puVar3[3];
        puVar3[-3] = puVar3[2];
        puVar3[-4] = 0x7f8ce;
        iVar1 = FUN_0007f690();
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = puVar3[2] + 1;
        puVar3[2] = iVar1;
        puVar3 = puVar3 + -3;
      }
      iVar1 = puVar3[4];
      puVar3[4] = iVar1 + 1;
    } while (iVar1 + 1 <= (int)*puVar3);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_07f8e0 (Ghidra: FUN_0007f8e0)
 * Prototype: int sub_07f8e0(void);
 * Address  : 0x7f8e0 (Size: 257 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x171cc
 * Callees  : 1 -> 0x7f690
 ******************************************************************************/
int FUN_0007f8e0(void)

{
  int iVar1;
  int iVar2;
  ushort *in_EDX;
  int unaff_EBX;
  uint *puVar3;
  uint local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  puVar3 = &local_24;
  local_1c = (int)((uint)*in_EDX - unaff_EBX / 2) >> 8;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_14 = (int)((uint)in_EDX[1] - unaff_EBX / 2) >> 8;
  if (local_14 < 0) {
    local_14 = 0;
  }
  iVar1 = (int)(unaff_EBX / 2 + (uint)*in_EDX) >> 8;
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  local_24 = (uint)in_EDX[1];
  local_20 = (int)(unaff_EBX / 2 + (uint)in_EDX[1]) >> 8;
  if (0xff < local_20) {
    local_20 = 0xff;
  }
  if (local_14 <= local_20) {
    do {
      iVar2 = *(int *)((int)puVar3 + 8);
      *(int *)((int)puVar3 + 0x14) = iVar2;
      while (iVar2 <= iVar1) {
        *(undefined4 *)((int)puVar3 + -4) = *(undefined4 *)((int)puVar3 + 0x2c);
        *(undefined4 *)((int)puVar3 + -8) = *(undefined4 *)((int)puVar3 + 0x28);
        *(undefined4 *)((int)puVar3 + -0xc) = *(undefined4 *)((int)puVar3 + 0xc);
        *(undefined4 *)((int)puVar3 + -0x10) = 0x7f9d0;
        iVar2 = FUN_0007f690();
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = *(int *)((int)puVar3 + 8) + 1;
        *(int *)((int)puVar3 + 8) = iVar2;
        puVar3 = (uint *)((int)puVar3 + -0xc);
      }
      iVar2 = *(int *)((int)puVar3 + 0x10);
      *(int *)((int)puVar3 + 0x10) = iVar2 + 1;
    } while (iVar2 + 1 <= *(int *)((int)puVar3 + 4));
  }
  return 0;
}

/******************************************************************************
 * Function : sub_07f9e4 (Ghidra: FUN_0007f9e4)
 * Prototype: longlong sub_07f9e4(void);
 * Address  : 0x7f9e4 (Size: 5 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0007f9e4(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
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
 * Function : sub_07f9ec (Ghidra: FUN_0007f9ec)
 * Prototype: longlong sub_07f9ec(void);
 * Address  : 0x7f9ec (Size: 5 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0007f9ec(void)

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
 * Function : sub_07f9f4 (Ghidra: FUN_0007f9f4)
 * Prototype: void sub_07f9f4(void);
 * Address  : 0x7f9f4 (Size: 14 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x6d334
 ******************************************************************************/
void FUN_0007f9f4(void)

{
  FUN_0006d334();
  return;
}

/******************************************************************************
 * Function : sub_07fa04 (Ghidra: FUN_0007fa04)
 * Prototype: void sub_07fa04(void);
 * Address  : 0x7fa04 (Size: 14 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x6d39c
 ******************************************************************************/
void FUN_0007fa04(void)

{
  FUN_0006d39c();
  return;
}

/******************************************************************************
 * Function : sub_07fa14 (Ghidra: FUN_0007fa14)
 * Prototype: undefined4 sub_07fa14(void);
 * Address  : 0x7fa14 (Size: 37 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0007fa14(void)

{
  int in_EAX;
  int in_EDX;
  
  if (((*(char *)(in_EAX + 0x1f) == '\x01') && (*(char *)(in_EAX + 0x1a) == '\x05')) &&
     (*(char *)(in_EAX + 6) != *(char *)(in_EDX + 6))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_07fa3c (Ghidra: FUN_0007fa3c)
 * Prototype: undefined4 sub_07fa3c(void);
 * Address  : 0x7fa3c (Size: 89 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0007fa3c(void)

{
  int in_EAX;
  uint in_ECX;
  uint unaff_EBX;
  
  if (((int)in_ECX < 0) && ((int)unaff_EBX < 0)) {
    return 1;
  }
  if ((int)in_ECX < 0) {
    if (unaff_EBX == *(byte *)(in_EAX + 0x1f)) {
      return 1;
    }
  }
  else if ((int)unaff_EBX < 0) {
    if (in_ECX == *(byte *)(in_EAX + 0x1a)) {
      return 1;
    }
  }
  else if ((in_ECX == *(byte *)(in_EAX + 0x1a)) &&
          (unaff_EBX == CONCAT31((int3)(in_ECX >> 8),*(undefined1 *)(in_EAX + 0x1f)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_create_dead_thing_07fac8 (Ghidra: FUN_0007fac8)
 * Prototype: void dk_create_dead_thing_07fac8(void);
 * Address  : 0x7fac8 (Size: 1960 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:267 ("Cannot create dead thing"); creature.cpp:391 ("Cannot create dead thing"); creature.cpp:426 ("Cannot create dead thing")
 * Naming   : String 'Cannot create dead thing'
 * Callers  : 1 -> 0x8608c
 * Callees  : 12 -> 0x10ad6, 0x24998, 0x37eab, 0x43f07, 0x6e538, 0x72af4, 0x8057c, 0x8063c, 0x808b8, 0x82204 ...
 * Strings  :
 *   - 0x169e41: "creature.cpp"
 *   - 0x169e67: "creature.cpp"
 *   - 0x169e8d: "creature.cpp"
 *   - 0x169e28: "Cannot create dead thing"
 *   - 0x169e4e: "Cannot create dead thing"
 *   - 0x169e74: "Cannot create dead thing"
 ******************************************************************************/
void FUN_0007fac8(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int in_EAX;
  uint uVar8;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  char in_DL;
  int iVar10;
  byte bVar11;
  short asStack_88 [4];
  short local_80;
  undefined4 local_7c;
  undefined2 auStack_78 [2];
  undefined4 local_74;
  undefined2 auStack_70 [2];
  undefined4 local_6c;
  undefined2 auStack_68 [2];
  undefined4 local_64;
  undefined2 auStack_60 [4];
  short local_58;
  undefined4 local_54;
  undefined2 auStack_50 [4];
  short local_48;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  short local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  char local_18;
  
  bVar11 = 0;
  local_20 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_18 = in_DL;
  FUN_00010ad6();
  iVar10 = *(int *)(in_EAX + 0x13);
  while ((iVar10 != 0 && (local_24 = FUN_00043f07(), local_24 != 0))) {
    uVar8 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar5 = uVar8 >> 0xd;
    local_34 = uVar5 & 0x7ff;
    uVar8 = (uVar5 | uVar8 * 0x80000) * 0x24a1 + 0x24df;
    uVar5 = uVar8 >> 0xd;
    uVar8 = (uVar5 | uVar8 * 0x80000) * 0x24a1 + 0x24df;
    uVar6 = uVar8 >> 0xd;
    DAT_002e8bf6 = uVar6 | uVar8 * 0x80000;
    local_30 = (uVar6 & 0x3f) + 0x60;
    uVar5 = uVar5 & 0x7f;
    iVar9 = (&DAT_001927e0)[local_34] * uVar5;
    local_2c = iVar9 >> 0x10;
    asStack_88[2] = (short)((uint)iVar9 >> 0x10);
    asStack_88[3] = (short)((uint)-((int)(uVar5 * (int)(&PTR_LAB_00192fe0)[local_34]) >> 8) >> 8);
    local_80 = (short)local_30;
    *(short *)(local_24 + 0x32) = *(short *)(local_24 + 0x32) + asStack_88[2];
    *(short *)(local_24 + 0x34) = *(short *)(local_24 + 0x34) + asStack_88[3];
    *(short *)(local_24 + 0x36) = *(short *)(local_24 + 0x36) + local_80;
    *(byte *)(local_24 + 1) = *(byte *)(local_24 + 1) | 4;
    iVar9 = iVar10;
    if (399 < iVar10) {
      iVar9 = 400;
    }
    *(int *)(local_24 + 0x13) = iVar9;
    iVar10 = iVar10 - iVar9;
  }
  iVar10 = (&DAT_001ae9fc)[DAT_002e6ebe];
  if ((&DAT_001ae9fc)[DAT_002e6ebe] != DAT_001ae9fc) {
    do {
      iVar9 = (&DAT_001ae9fc)[*(ushort *)(iVar10 + 0x67)];
      if (*(short *)(iVar10 + 0x1d) == *(short *)(in_EAX + 0x1b)) {
        *(undefined2 *)(iVar10 + 0x1d) = *(undefined2 *)(iVar10 + 0x1b);
      }
      iVar10 = iVar9;
    } while (iVar9 != DAT_001ae9fc);
  }
  if (local_18 == '\0') {
    iVar10 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
    if ((((&DAT_002e91e4)[iVar10] != '\0') &&
        (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) != 0)) &&
       (uVar8 = (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23),
       (int)((byte)(&DAT_002e91e4)[iVar10] - 1) <= (int)uVar8)) {
      if (uVar8 != 0) {
        FUN_00082204();
      }
      *(undefined2 *)(in_EAX + 0x5e) = *(undefined2 *)(local_20 + 0xc6);
      FUN_00024998();
      FUN_000b3b10();
      FUN_00024998();
      return;
    }
    if (DAT_002ee9b9 == 3) {
      cVar7 = (&DAT_002e91e7)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
    }
    else {
      bVar2 = *(byte *)(in_EAX + 0x1a);
      if (((&DAT_002e91e7)[(uint)bVar2 * 0xe6] == '\0') || ((bVar2 != 0 && (bVar2 < 0xe)))) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x01';
      }
    }
    if (cVar7 == '\0') {
      if ((*(byte *)(local_20 + 0xab) & 2) != 0) {
        if ((DAT_0019d0bd & 8) != 0) {
          FUN_00037eab();
        }
switchD_000800a5_caseD_5:
        FUN_0008063c();
        return;
      }
      if ((DAT_0019d0bd & 8) != 0) {
        FUN_00037eab();
      }
      bVar2 = *(byte *)(local_20 + 0x1d3);
      if ((1 < bVar2) && ((bVar2 < 3 || (bVar2 == 0x18)))) {
switchD_0007fde2_caseD_2:
        FUN_0008057c();
        return;
      }
      switch((&DAT_0018b70a)[(uint)*(byte *)(in_EAX + 0x1a) * 0x10]) {
      case 1:
        uVar3 = *(undefined2 *)(in_EAX + 0x52);
        uVar1 = *(undefined4 *)(in_EAX + 0x2c);
        asStack_88[(uint)bVar11 * -4] = *(short *)(in_EAX + 0x30 + (uint)bVar11 * -8);
        iVar10 = FUN_000808b8();
        if (iVar10 != 0) {
          *(undefined2 *)(iVar10 + 0x52) = uVar3;
          *(undefined4 *)(iVar10 + 0x2c) = uVar1;
          *(short *)(iVar10 + 0x30 + (uint)bVar11 * -8) = asStack_88[(uint)bVar11 * -4];
          return;
        }
        goto LAB_0007fe21;
      case 2:
        goto switchD_0007fde2_caseD_2;
      case 3:
        uVar4 = *(ushort *)(in_EAX + 0x52);
        local_6c = *(undefined4 *)(in_EAX + 0x2c);
        auStack_68[(uint)bVar11 * -4] = *(undefined2 *)(in_EAX + 0x30 + (uint)bVar11 * -8);
        local_28 = (uint)uVar4;
        for (iVar10 = *(int *)(in_EAX + 0xf) >> 0x10;
            iVar10 <= (int)((uint)*(ushort *)(in_EAX + 0x58) + (*(int *)(in_EAX + 0xf) >> 0x10));
            iVar10 = iVar10 + 0x40) {
          local_3c = *(undefined2 *)(in_EAX + 0xd);
          local_3a = *(undefined2 *)(in_EAX + 0xf);
          local_38 = (short)iVar10;
          FUN_00024998();
          in_EAX = extraout_ECX_00;
        }
        local_3c = *(undefined2 *)(in_EAX + 0xd);
        local_3a = *(undefined2 *)(in_EAX + 0xf);
        local_38 = *(ushort *)(in_EAX + 0x58) / 2 +
                   (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10);
        FUN_00024998();
        iVar10 = FUN_000808b8();
        if (iVar10 != 0) {
          *(short *)(iVar10 + 0x52) = (short)local_28;
          *(undefined4 *)(iVar10 + 0x2c) = local_6c;
          *(undefined2 *)(iVar10 + 0x30 + (uint)bVar11 * -8) = auStack_68[(uint)bVar11 * -4];
          FUN_0006e538(3,0,4,0x100);
          return;
        }
        goto LAB_0007ff35;
      case 4:
        local_7c = *(undefined4 *)(in_EAX + 0x2c);
        auStack_78[(uint)bVar11 * -4] = *(undefined2 *)(in_EAX + 0x30 + (uint)bVar11 * -8);
        local_44 = *(undefined2 *)(in_EAX + 0xd);
        local_42 = *(undefined2 *)(in_EAX + 0xf);
        local_40 = *(ushort *)(in_EAX + 0x58) / 2 +
                   (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10);
        FUN_00024998();
        iVar10 = FUN_000808b8();
        if (iVar10 != 0) {
          *(undefined2 *)(iVar10 + 0x52) = extraout_CX_00;
          *(undefined4 *)(iVar10 + 0x2c) = local_7c;
          *(undefined2 *)(iVar10 + 0x30 + (uint)bVar11 * -8) = auStack_78[(uint)bVar11 * -4];
          FUN_0006e538(3,0,4,0x100);
          return;
        }
        goto LAB_0007ffe6;
      case 5:
        goto switchD_000800a5_caseD_5;
      default:
        goto switchD_0007fde2_default;
      }
    }
    if ((DAT_0019d0bd & 8) != 0) {
      FUN_00037eab();
    }
    switch((&DAT_0018b70a)[(uint)*(byte *)(in_EAX + 0x1a) * 0x10]) {
    case 1:
      uVar3 = *(undefined2 *)(in_EAX + 0x52);
      local_74 = *(undefined4 *)(in_EAX + 0x2c);
      auStack_70[(uint)bVar11 * -4] = *(undefined2 *)(in_EAX + 0x30 + (uint)bVar11 * -8);
      iVar10 = FUN_000808b8();
      if (iVar10 != 0) {
        *(undefined2 *)(iVar10 + 0x52) = uVar3;
        *(undefined4 *)(iVar10 + 0x2c) = local_74;
        *(undefined2 *)(iVar10 + 0x30 + (uint)bVar11 * -8) = auStack_70[(uint)bVar11 * -4];
        return;
      }
LAB_0007fe21:
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 267, "Cannot create dead thing") */
      return;
    case 2:
      goto switchD_0007fde2_caseD_2;
    case 3:
      uVar4 = *(ushort *)(in_EAX + 0x52);
      local_64 = *(undefined4 *)(in_EAX + 0x2c);
      auStack_60[(uint)bVar11 * -4] = *(undefined2 *)(in_EAX + 0x30 + (uint)bVar11 * -8);
      local_1c = (uint)uVar4;
      for (iVar10 = *(int *)(in_EAX + 0xf) >> 0x10;
          iVar10 <= (int)((uint)*(ushort *)(in_EAX + 0x58) + (*(int *)(in_EAX + 0xf) >> 0x10));
          iVar10 = iVar10 + 0x40) {
        auStack_60[2] = *(undefined2 *)(in_EAX + 0xd);
        auStack_60[3] = *(undefined2 *)(in_EAX + 0xf);
        local_58 = (short)iVar10;
        FUN_00024998();
        in_EAX = extraout_ECX;
      }
      auStack_60[2] = *(undefined2 *)(in_EAX + 0xd);
      auStack_60[3] = *(undefined2 *)(in_EAX + 0xf);
      local_58 = *(ushort *)(in_EAX + 0x58) / 2 +
                 (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10);
      FUN_00024998();
      iVar10 = FUN_000808b8();
      if (iVar10 != 0) {
        *(short *)(iVar10 + 0x52) = (short)local_1c;
        *(undefined4 *)(iVar10 + 0x2c) = local_64;
        *(undefined2 *)(iVar10 + 0x30 + (uint)bVar11 * -8) = auStack_60[(uint)bVar11 * -4];
        FUN_0006e538(3,0,4,0x100);
        return;
      }
LAB_0007ff35:
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 391, "Cannot create dead thing") */
      return;
    case 4:
      local_54 = *(undefined4 *)(in_EAX + 0x2c);
      auStack_50[(uint)bVar11 * -4] = *(undefined2 *)(in_EAX + 0x30 + (uint)bVar11 * -8);
      auStack_50[2] = *(undefined2 *)(in_EAX + 0xd);
      auStack_50[3] = *(undefined2 *)(in_EAX + 0xf);
      local_48 = *(ushort *)(in_EAX + 0x58) / 2 +
                 (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10);
      FUN_00024998();
      iVar10 = FUN_000808b8();
      if (iVar10 != 0) {
        *(undefined2 *)(iVar10 + 0x52) = extraout_CX;
        *(undefined4 *)(iVar10 + 0x2c) = local_54;
        *(undefined2 *)(iVar10 + 0x30 + (uint)bVar11 * -8) = auStack_50[(uint)bVar11 * -4];
        FUN_0006e538(3,0,4,0x100);
        return;
      }
LAB_0007ffe6:
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 426, "Cannot create dead thing") */
      return;
    case 5:
      FUN_0008063c();
      return;
    }
  }
  else {
    if ((DAT_0019d0bd & 8) != 0) {
      FUN_00037eab();
    }
    FUN_00072af4();
  }
switchD_0007fde2_default:
  return;
}

/******************************************************************************
 * Function : dk_create_dead_thing_080284 (Ghidra: FUN_00080284)
 * Prototype: void dk_create_dead_thing_080284(void);
 * Address  : 0x80284 (Size: 596 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:267 ("Cannot create dead thing"); creature.cpp:391 ("Cannot create dead thing"); creature.cpp:426 ("Cannot create dead thing")
 * Naming   : String 'Cannot create dead thing'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x24998, 0x6e538, 0x8057c, 0x8063c, 0x808b8, 0xddaf0
 * Strings  :
 *   - 0x169e41: "creature.cpp"
 *   - 0x169e67: "creature.cpp"
 *   - 0x169e8d: "creature.cpp"
 *   - 0x169e28: "Cannot create dead thing"
 *   - 0x169e4e: "Cannot create dead thing"
 *   - 0x169e74: "Cannot create dead thing"
 ******************************************************************************/
void FUN_00080284(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  undefined2 extraout_CX;
  int extraout_ECX;
  byte bVar4;
  undefined2 auStack_38 [2];
  undefined4 local_34;
  undefined2 auStack_30 [4];
  short local_28;
  undefined4 local_24;
  undefined2 auStack_20 [2];
  uint local_1c;
  
  bVar4 = 0;
  switch((&DAT_0018b70a)[(uint)*(byte *)(in_EAX + 0x1a) * 0x10]) {
  case 1:
    uVar2 = *(undefined2 *)(in_EAX + 0x52);
    uVar1 = *(undefined4 *)(in_EAX + 0x2c);
    auStack_38[0] = *(undefined2 *)(in_EAX + 0x30);
    iVar3 = FUN_000808b8();
    if (iVar3 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 267, "Cannot create dead thing") */
      return;
    }
    *(undefined2 *)(iVar3 + 0x52) = uVar2;
    *(undefined4 *)(iVar3 + 0x2c) = uVar1;
    *(undefined2 *)(iVar3 + 0x30 + (uint)bVar4 * -8) = auStack_38[(uint)bVar4 * -4];
    break;
  case 2:
    FUN_0008057c();
    return;
  case 3:
    local_1c = (uint)*(ushort *)(in_EAX + 0x52);
    local_34 = *(undefined4 *)(in_EAX + 0x2c);
    auStack_30[0] = *(undefined2 *)(in_EAX + 0x30);
    for (iVar3 = *(int *)(in_EAX + 0xf) >> 0x10;
        iVar3 <= (int)((uint)*(ushort *)(in_EAX + 0x58) + (*(int *)(in_EAX + 0xf) >> 0x10));
        iVar3 = iVar3 + 0x40) {
      FUN_00024998(*(undefined2 *)(in_EAX + 0xd),(short)iVar3);
      in_EAX = extraout_ECX;
    }
    FUN_00024998(*(undefined2 *)(in_EAX + 0xd),
                 *(ushort *)(in_EAX + 0x58) / 2 +
                 (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10));
    iVar3 = FUN_000808b8();
    if (iVar3 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 391, "Cannot create dead thing") */
      return;
    }
    *(short *)(iVar3 + 0x52) = (short)local_1c;
    *(undefined4 *)(iVar3 + 0x2c) = local_34;
    *(undefined2 *)(iVar3 + 0x30 + (uint)bVar4 * -8) = auStack_30[(uint)bVar4 * -4];
    FUN_0006e538(3,0,4,0x100);
    return;
  case 4:
    local_24 = *(undefined4 *)(in_EAX + 0x2c);
    auStack_20[0] = *(undefined2 *)(in_EAX + 0x30);
    auStack_30[2] = *(undefined2 *)(in_EAX + 0xd);
    auStack_30[3] = *(undefined2 *)(in_EAX + 0xf);
    local_28 = *(ushort *)(in_EAX + 0x58) / 2 + (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10)
    ;
    FUN_00024998();
    iVar3 = FUN_000808b8();
    if (iVar3 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 426, "Cannot create dead thing") */
      return;
    }
    *(undefined2 *)(iVar3 + 0x52) = extraout_CX;
    *(undefined4 *)(iVar3 + 0x2c) = local_24;
    *(undefined2 *)(iVar3 + 0x30 + (uint)bVar4 * -8) = auStack_20[(uint)bVar4 * -4];
    FUN_0006e538(3,0,4,0x100);
    return;
  case 5:
    FUN_0008063c();
  }
  return;
}

/******************************************************************************
 * Function : sub_0804d8 (Ghidra: FUN_000804d8)
 * Prototype: void sub_0804d8(void);
 * Address  : 0x804d8 (Size: 81 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:267 ("Cannot create dead thing")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x169e41: "creature.cpp"
 ******************************************************************************/
void FUN_000804d8(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = (&DAT_001ae9fc)[DAT_002e6ebe];
  if ((&DAT_001ae9fc)[DAT_002e6ebe] == DAT_001ae9fc) {
    return;
  }
  do {
    iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 0x67)];
    if (*(short *)(iVar2 + 0x1d) == *(short *)(in_EAX + 0x1b)) {
      *(undefined2 *)(iVar2 + 0x1d) = *(undefined2 *)(iVar2 + 0x1b);
    }
    iVar2 = iVar1;
  } while (iVar1 != DAT_001ae9fc);
  return;
}

/******************************************************************************
 * Function : dk_create_dead_thing_08057c (Ghidra: FUN_0008057c)
 * Prototype: void dk_create_dead_thing_08057c(void);
 * Address  : 0x8057c (Size: 191 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:307 ("Cannot create dead thing")
 * Naming   : String 'Cannot create dead thing'
 * Callers  : 2 -> 0x7fac8, 0x80284
 * Callees  : 4 -> 0x24998, 0x6e538, 0x808b8, 0xddaf0
 * Strings  :
 *   - 0x169eb3: "creature.cpp"
 *   - 0x169e9a: "Cannot create dead thing"
 ******************************************************************************/
void FUN_0008057c(void)

{
  undefined4 uVar1;
  int in_EAX;
  int extraout_ECX;
  int iVar2;
  byte bVar3;
  undefined2 auStack_1c [2];
  uint local_18;
  
  bVar3 = 0;
  local_18 = (uint)*(ushort *)(in_EAX + 0x52);
  uVar1 = *(undefined4 *)(in_EAX + 0x2c);
  auStack_1c[0] = *(undefined2 *)(in_EAX + 0x30);
  for (iVar2 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar2 <= (int)((*(int *)(in_EAX + 0xf) >> 0x10) + (uint)*(ushort *)(in_EAX + 0x58));
      iVar2 = iVar2 + 0x40) {
    FUN_00024998(*(undefined2 *)(in_EAX + 0xd),(short)iVar2);
    in_EAX = extraout_ECX;
  }
  iVar2 = FUN_000808b8();
  if (iVar2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 307, "Cannot create dead thing") */
  }
  else {
    *(short *)(iVar2 + 0x52) = (short)local_18;
    *(undefined4 *)(iVar2 + 0x2c) = uVar1;
    *(undefined2 *)(iVar2 + 0x30 + (uint)bVar3 * -8) = auStack_1c[(uint)bVar3 * -4];
    FUN_0006e538(3,0,4,0x100);
  }
  return;
}

/******************************************************************************
 * Function : dk_create_dead_thing_08063c (Ghidra: FUN_0008063c)
 * Prototype: void dk_create_dead_thing_08063c(void);
 * Address  : 0x8063c (Size: 191 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:346 ("Cannot create dead thing")
 * Naming   : String 'Cannot create dead thing'
 * Callers  : 2 -> 0x7fac8, 0x80284
 * Callees  : 4 -> 0x24998, 0x6e538, 0x808b8, 0xddaf0
 * Strings  :
 *   - 0x169ed9: "creature.cpp"
 *   - 0x169ec0: "Cannot create dead thing"
 ******************************************************************************/
void FUN_0008063c(void)

{
  undefined4 uVar1;
  int in_EAX;
  int extraout_ECX;
  int iVar2;
  byte bVar3;
  undefined2 auStack_1c [2];
  uint local_18;
  
  bVar3 = 0;
  local_18 = (uint)*(ushort *)(in_EAX + 0x52);
  uVar1 = *(undefined4 *)(in_EAX + 0x2c);
  auStack_1c[0] = *(undefined2 *)(in_EAX + 0x30);
  for (iVar2 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar2 <= (int)((*(int *)(in_EAX + 0xf) >> 0x10) + (uint)*(ushort *)(in_EAX + 0x58));
      iVar2 = iVar2 + 0x40) {
    FUN_00024998(*(undefined2 *)(in_EAX + 0xd),(short)iVar2);
    in_EAX = extraout_ECX;
  }
  iVar2 = FUN_000808b8();
  if (iVar2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 346, "Cannot create dead thing") */
  }
  else {
    *(short *)(iVar2 + 0x52) = (short)local_18;
    *(undefined4 *)(iVar2 + 0x2c) = uVar1;
    *(undefined2 *)(iVar2 + 0x30 + (uint)bVar3 * -8) = auStack_1c[(uint)bVar3 * -4];
    FUN_0006e538(3,0,4,0x100);
  }
  return;
}

/******************************************************************************
 * Function : dk_create_dead_thing_0806fc (Ghidra: FUN_000806fc)
 * Prototype: void dk_create_dead_thing_0806fc(void);
 * Address  : 0x806fc (Size: 253 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:391 ("Cannot create dead thing"); creature.cpp:426 ("Cannot create dead thing")
 * Naming   : String 'Cannot create dead thing'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x24998, 0x6e538, 0x808b8, 0xddaf0
 * Strings  :
 *   - 0x169e67: "creature.cpp"
 *   - 0x169e8d: "creature.cpp"
 *   - 0x169e4e: "Cannot create dead thing"
 ******************************************************************************/
void FUN_000806fc(void)

{
  undefined4 uVar1;
  int in_EAX;
  int extraout_ECX;
  int iVar2;
  byte bVar3;
  undefined2 auStack_1c [2];
  uint local_18;
  
  bVar3 = 0;
  local_18 = (uint)*(ushort *)(in_EAX + 0x52);
  uVar1 = *(undefined4 *)(in_EAX + 0x2c);
  auStack_1c[0] = *(undefined2 *)(in_EAX + 0x30);
  for (iVar2 = *(int *)(in_EAX + 0xf) >> 0x10;
      iVar2 <= (int)((*(int *)(in_EAX + 0xf) >> 0x10) + (uint)*(ushort *)(in_EAX + 0x58));
      iVar2 = iVar2 + 0x40) {
    FUN_00024998(*(undefined2 *)(in_EAX + 0xd),(short)iVar2);
    in_EAX = extraout_ECX;
  }
  FUN_00024998(*(undefined2 *)(in_EAX + 0xd),
               *(ushort *)(in_EAX + 0x58) / 2 + (short)((uint)*(undefined4 *)(in_EAX + 0xf) >> 0x10)
              );
  iVar2 = FUN_000808b8();
  if (iVar2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 391, "Cannot create dead thing") */
  }
  else {
    *(short *)(iVar2 + 0x52) = (short)local_18;
    *(undefined4 *)(iVar2 + 0x2c) = uVar1;
    *(undefined2 *)(iVar2 + 0x30 + (uint)bVar3 * -8) = auStack_1c[(uint)bVar3 * -4];
    FUN_0006e538(3,0,4,0x100);
  }
  return;
}

/******************************************************************************
 * Function : dk_could_create_dead_thing_0808b8 (Ghidra: FUN_000808b8)
 * Prototype: byte * dk_could_create_dead_thing_0808b8(void);
 * Address  : 0x808b8 (Size: 280 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:465 ("Could not create dead thing.")
 * Naming   : String 'Could not create dead thing.'
 * Callers  : 5 -> 0x7fac8, 0x80284, 0x8057c, 0x8063c, 0x806fc
 * Callees  : 3 -> 0x44b13, 0x72af4, 0xddaf0
 * Strings  :
 *   - 0x169f03: "creature.cpp"
 *   - 0x169ee6: "Could not create dead thing."
 ******************************************************************************/
byte * FUN_000808b8(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  int in_EAX;
  byte *pbVar6;
  undefined1 in_DL;
  ushort uVar7;
  byte bVar8;
  int iVar9;
  
  bVar3 = *(byte *)(in_EAX + 0x1a);
  uVar2 = *(undefined4 *)(in_EAX + 0xd);
  uVar1 = *(undefined2 *)(in_EAX + 0x11);
  bVar4 = *(byte *)(in_EAX + 6);
  sVar5 = *(short *)(in_EAX + 0x1b);
  bVar8 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23);
  if ((int)(char)bVar4 != (uint)DAT_002eb543) {
    *(uint *)(&DAT_002e1431 + (char)bVar4 * 0x1508) =
         *(int *)(&DAT_002e1431 + (char)bVar4 * 0x1508) -
         (uint)(byte)(&DAT_002ebaf8)[(uint)*(byte *)(in_EAX + 0x1a) * 10 + (uint)bVar8];
  }
  FUN_00072af4(uVar2,uVar1);
  pbVar6 = (byte *)FUN_00044b13((uint)bVar8);
  if (pbVar6 == (byte *)0x0) {
    FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 465, "Could not create dead thing.") */
    pbVar6 = (byte *)0x0;
  }
  else {
    uVar7 = CONCAT11(*pbVar6,in_DL) & 0xdf01;
    bVar8 = (byte)(uVar7 >> 8);
    *pbVar6 = bVar8;
    *pbVar6 = bVar8 | (char)uVar7 << 5;
    if ((bVar3 != DAT_002eb543) &&
       (iVar9 = (uint)bVar4 * 0x4ef, sVar5 == *(short *)((int)&DAT_0019d0f7 + iVar9))) {
      *(undefined2 *)((int)&DAT_0019d0f7 + iVar9) = *(undefined2 *)(pbVar6 + 0x1b);
      *(undefined4 *)(&DAT_0019d0f9 + iVar9) = *(undefined4 *)(pbVar6 + 9);
    }
  }
  return pbVar6;
}

/******************************************************************************
 * Function : dk_control_creature_as_passenger_0809d0 (Ghidra: FUN_000809d0)
 * Prototype: void dk_control_creature_as_passenger_0809d0(void);
 * Address  : 0x809d0 (Size: 158 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:503 ("Cannot control creature as passenger (owned by a different player)")
 * Naming   : String 'Cannot control creature as passenger (owned by a different p'
 * Callers  : 2 -> 0x4b59e, 0x80a94
 * Callees  : 4 -> 0x4823a, 0x5b645, 0x5c2e3, 0xddaf0
 * Strings  :
 *   - 0x169f53: "creature.cpp"
 *   - 0x169f10: "Cannot control creature as passenger (owned by a different player)"
 ******************************************************************************/
void FUN_000809d0(void)

{
  char cVar1;
  undefined1 *in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  
  if ((*(int *)(in_EDX + 3) >> 0x18 == (uint)(byte)in_EAX[0x2b]) &&
     (((cVar1 = *(char *)(in_EDX + 0x1f), cVar1 == '\x05' || (cVar1 == '\x04')) ||
      ((cVar1 == '\x01' && (*(char *)(in_EDX + 0x1a) == '\n')))))) {
    if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
      FUN_0005b645();
      FUN_0005c2e3();
      in_EDX = extraout_ECX;
    }
    *(undefined2 *)(in_EAX + 0x2f) = *(undefined2 *)(in_EDX + 0x1b);
    *(undefined4 *)(in_EAX + 0x31) = *(undefined4 *)(in_EDX + 9);
    in_EAX[0x4b5] = *(undefined1 *)(*(int *)(in_EAX + 0x38) + 6);
    FUN_0004823a();
    *(byte *)(extraout_ECX_00 + 0x4f) = *(byte *)(extraout_ECX_00 + 0x4f) | 1;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 503, "Cannot control creature as passenger (owned by a different player)") */
  return;
}

/******************************************************************************
 * Function : dk_allocate_light_new_hero_080a94 (Ghidra: FUN_00080a94)
 * Prototype: undefined4 dk_allocate_light_new_hero_080a94(void);
 * Address  : 0x80a94 (Size: 493 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:562 ("Cannot allocate light to new hero")
 * Naming   : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> 0x4b478, 0x81fec
 * Callees  : 13 -> 0x13b43, 0x27130, 0x39d55, 0x4823a, 0x5b645, 0x5c2e3, 0x63b6d, 0x809d0, 0x85890, 0xacaf8 ...
 * Strings  :
 *   - 0x169f82: "creature.cpp"
 *   - 0x169f60: "Cannot allocate light to new hero"
 ******************************************************************************/
undefined4 FUN_00080a94(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined1 *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar3;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar4;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int in_EDX;
  byte bVar5;
  undefined2 uStack_16;
  undefined1 local_13;
  
  bVar5 = 0;
  if ((*(int *)(in_EDX + 3) >> 0x18 == (uint)(byte)in_EAX[0x2b]) &&
     ((*(char *)(in_EDX + 0x1f) == '\x05' || (*(char *)(in_EDX + 0x1f) == '\x04')))) {
    FUN_000e6a10();
    pbVar3 = extraout_ECX;
    if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
      FUN_0005b645();
      FUN_0005c2e3();
      pbVar3 = extraout_ECX_00;
    }
    *(undefined2 *)(in_EAX + 0x2f) = *(undefined2 *)(pbVar3 + 0x1b);
    *(undefined4 *)(in_EAX + 0x31) = *(undefined4 *)(pbVar3 + 9);
    in_EAX[0x4b5] = *(undefined1 *)(*(int *)(in_EAX + 0x38) + 6);
    *pbVar3 = *pbVar3 | 0x20;
    pbVar3[0x4f] = pbVar3[0x4f] | 1;
    FUN_00063b6d();
    FUN_0004823a();
    iVar4 = extraout_ECX_01;
    if (*(char *)(extraout_ECX_01 + 0x1f) == '\x05') {
      uVar1 = FUN_00085890();
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_02 + 100)] + 0xc4) = uVar1;
      FUN_00013b43();
      iVar4 = extraout_ECX_03;
      if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_03 + 100)] + 0x7a) & 0xfff) != 0) {
        FUN_00039d55();
        iVar4 = extraout_ECX_04;
      }
    }
    (&uStack_16)[(uint)bVar5 * -4] = *(undefined2 *)(iVar4 + 0x11 + (uint)bVar5 * -8);
    local_13 = 1;
    sVar2 = FUN_000acaf8(0xa00);
    *(short *)(extraout_ECX_05 + 0x62) = sVar2;
    if (sVar2 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 562, "Cannot allocate light to new hero") */
    }
    FUN_000ad834();
    if ((*(int *)(extraout_ECX_06 + 3) >> 0x18 ==
         (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
       (*(char *)(extraout_ECX_06 + 0x1f) == '\x05')) {
      FUN_00027130();
    }
    return 1;
  }
  if ((*(char *)(in_EDX + 0x1f) == '\x01') &&
     ((*(char *)(in_EDX + 0x1a) == '\n' &&
      (*(int *)(in_EDX + 3) >> 0x18 == (uint)(byte)in_EAX[0x2b])))) {
    FUN_000809d0();
    *(short *)(*(int *)(in_EAX + 0x38) + 4) = *(short *)(*(int *)(in_EAX + 0x38) + 4) + DAT_002ea60c
    ;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_light_new_hero_080c84 (Ghidra: FUN_00080c84)
 * Prototype: int dk_allocate_light_new_hero_080c84(void);
 * Address  : 0x80c84 (Size: 384 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:642 ("Cannot allocate light to new hero")
 * Naming   : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> 0x4b9ee, 0x5ce63
 * Callees  : 10 -> 0x27130, 0x43bb3, 0x4823a, 0x5b645, 0x5c2e3, 0x63b6d, 0x85890, 0xacaf8, 0xad834, 0xddaf0
 * Strings  :
 *   - 0x169fb1: "creature.cpp"
 *   - 0x169f8f: "Cannot allocate light to new hero"
 ******************************************************************************/
int FUN_00080c84(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined1 *in_EAX;
  byte *pbVar3;
  byte *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar4;
  undefined2 extraout_var;
  byte bVar5;
  undefined2 uStack_12;
  undefined1 local_f;
  
  bVar5 = 0;
  pbVar3 = (byte *)FUN_00043bb3();
  if (pbVar3 != (byte *)0x0) {
    (&DAT_002e0ea2)[(*(int *)(pbVar3 + 3) >> 0x18) * 0x1508] =
         (&DAT_002e0ea2)[(*(int *)(pbVar3 + 3) >> 0x18) * 0x1508] + -1;
    (&DAT_002e0ea3)[(uint)pbVar3[0x1a] + (*(int *)(pbVar3 + 3) >> 0x18) * 0x1508] =
         (&DAT_002e0ea3)[(uint)pbVar3[0x1a] + (*(int *)(pbVar3 + 3) >> 0x18) * 0x1508] + -1;
    if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
      FUN_0005b645();
      FUN_0005c2e3();
      pbVar3 = extraout_ECX;
    }
    *(undefined2 *)(in_EAX + 0x2f) = *(undefined2 *)(pbVar3 + 0x1b);
    *(undefined4 *)(in_EAX + 0x31) = *(undefined4 *)(pbVar3 + 9);
    in_EAX[0x4b5] = *(undefined1 *)(*(int *)(in_EAX + 0x38) + 6);
    *pbVar3 = *pbVar3 | 0x20;
    pbVar3[0x4f] = pbVar3[0x4f] | 1;
    *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 2) =
         *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 2) | 2;
    uVar1 = FUN_00085890();
    *(undefined2 *)
     ((&DAT_001b0a00)[CONCAT22(extraout_var,*(undefined2 *)(extraout_ECX_00 + 100))] + 0xc4) = uVar1
    ;
    FUN_0004823a();
    FUN_00063b6d();
    (&uStack_12)[(uint)bVar5 * -4] = *(undefined2 *)(extraout_ECX_01 + 0x11 + (uint)bVar5 * -8);
    local_f = 1;
    sVar2 = FUN_000acaf8(0xa00);
    *(short *)(extraout_ECX_02 + 0x62) = sVar2;
    if (sVar2 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 642, "Cannot allocate light to new hero") */
    }
    FUN_000ad834();
    iVar4 = extraout_ECX_03;
    if ((*(int *)(extraout_ECX_03 + 3) >> 0x18 ==
         (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
       (*(char *)(extraout_ECX_03 + 0x1f) == '\x05')) {
      FUN_00027130();
      iVar4 = extraout_ECX_04;
    }
    return iVar4;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_080e04 (Ghidra: FUN_00080e04)
 * Prototype: void sub_080e04(void);
 * Address  : 0x80e04 (Size: 438 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4b5ca
 * Callees  : 3 -> 0x4823a, 0x49eff, 0x784ae
 ******************************************************************************/
void FUN_00080e04(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  int in_EAX;
  byte *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *extraout_ECX_02;
  int extraout_ECX_03;
  int in_EDX;
  
  if ((*(int *)(in_EDX + 3) >> 0x18 == (uint)*(byte *)(in_EAX + 0x2b)) &&
     (*(short *)(in_EDX + 0x1b) == *(short *)(in_EAX + 0x2f))) {
    FUN_0004823a();
    *(byte *)(in_EDX + 0x4f) = *(byte *)(in_EDX + 0x4f) & 0xfe;
    *extraout_ECX = *extraout_ECX & 0xf7;
    FUN_000784ae();
    *(short *)(extraout_ECX_00 + 0x3c) =
         (short)((&DAT_001927e0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] *
                 ((*(int *)(in_EDX + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&DAT_002e9162 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6)) >> 0x10)
         + *(short *)(in_EDX + 0xd);
    *(short *)(extraout_ECX_00 + 0x3e) =
         *(short *)(in_EDX + 0xf) -
         (short)((int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] *
                 ((uint)*(ushort *)(&DAT_002e9162 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6) +
                 (*(int *)(in_EDX + 0xf) >> 0x10)) >> 0x10);
    *(short *)(extraout_ECX_00 + 0xba) =
         (short)(((uint)*(ushort *)(&DAT_002e9162 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6) +
                 (*(int *)(in_EDX + 0xf) >> 0x10)) *
                 (&DAT_001927e0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10) +
         *(short *)(in_EDX + 0xd);
    uVar1 = *(ushort *)(&DAT_002e9162 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6);
    iVar3 = *(int *)(in_EDX + 0xf);
    puVar4 = (&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)];
    sVar2 = *(short *)(in_EDX + 0xf);
    *(undefined2 *)(extraout_ECX_00 + 0x2f) = 0;
    *(undefined4 *)(extraout_ECX_00 + 0x31) = 0;
    *(short *)(extraout_ECX_00 + 0xbc) =
         sVar2 - (short)(((iVar3 >> 0x10) + (uint)uVar1) * (int)puVar4 >> 0x10);
    return;
  }
  FUN_00049eff();
  *(undefined2 *)(extraout_ECX_01 + 0x2f) = 0;
  *(undefined4 *)(extraout_ECX_01 + 0x31) = 0;
  FUN_0004823a();
  *extraout_ECX_02 = *extraout_ECX_02 & 0xf7;
  FUN_000784ae();
  *(undefined2 *)(extraout_ECX_03 + 0x3c) = 0;
  *(undefined2 *)(extraout_ECX_03 + 0x3e) = 0;
  *(undefined2 *)(extraout_ECX_03 + 0xba) = 0;
  *(undefined2 *)(extraout_ECX_03 + 0xbc) = 0;
  return;
}

/******************************************************************************
 * Function : sub_080fbc (Ghidra: FUN_00080fbc)
 * Prototype: void sub_080fbc(void);
 * Address  : 0x80fbc (Size: 540 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4b6ae, 0x4bb19, 0x81fec, 0x85f80
 * Callees  : 8 -> 0x3a237, 0x4823a, 0x49eff, 0x63b6d, 0x72af4, 0x784ae, 0x85890, 0xacce4
 ******************************************************************************/
void FUN_00080fbc(void)

{
  undefined2 uVar1;
  int in_EAX;
  byte *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  byte *extraout_ECX_02;
  int extraout_ECX_03;
  byte *in_EDX;
  undefined2 extraout_var;
  
  if ((*(int *)(in_EDX + 3) >> 0x18 == (uint)*(byte *)(in_EAX + 0x2b)) &&
     (*(short *)(in_EDX + 0x1b) == *(short *)(in_EAX + 0x2f))) {
    *(undefined2 *)(in_EAX + 0x2f) = 0;
    *(undefined4 *)(in_EAX + 0x31) = 0;
    FUN_0004823a();
    *in_EDX = *in_EDX & 0xdf;
    in_EDX[0x4f] = in_EDX[0x4f] & 0xfe;
    *extraout_ECX = *extraout_ECX & 0xf7;
    FUN_000784ae();
    *(short *)(extraout_ECX_00 + 0x3c) =
         (short)(((*(int *)(in_EDX + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&DAT_002e9162 + (uint)in_EDX[0x1a] * 0xe6)) *
                 (&DAT_001927e0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10) +
         *(short *)(in_EDX + 0xd);
    *(short *)(extraout_ECX_00 + 0x3e) =
         *(short *)(in_EDX + 0xf) -
         (short)(((*(int *)(in_EDX + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&DAT_002e9162 + (uint)in_EDX[0x1a] * 0xe6)) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10);
    *(short *)(extraout_ECX_00 + 0xba) =
         *(short *)(in_EDX + 0xd) +
         (short)(((*(int *)(in_EDX + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&DAT_002e9162 + (uint)in_EDX[0x1a] * 0xe6)) *
                 (&DAT_001927e0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10);
    *(short *)(extraout_ECX_00 + 0xbc) =
         *(short *)(in_EDX + 0xf) -
         (short)(((*(int *)(in_EDX + 0xf) >> 0x10) +
                 (uint)*(ushort *)(&DAT_002e9162 + (uint)in_EDX[0x1a] * 0xe6)) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(extraout_ECX_00 + 0x38) + 7)] >> 0x10);
    if (in_EDX[0x1f] == 5) {
      FUN_00063b6d();
      uVar1 = FUN_00085890();
      *(undefined2 *)((&DAT_001b0a00)[CONCAT22(extraout_var,*(undefined2 *)(in_EDX + 100))] + 0xc4)
           = uVar1;
      if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 2) & 2) == 0) {
        FUN_0003a237();
      }
      else {
        FUN_00072af4();
      }
    }
    if (*(short *)(in_EDX + 0x62) != 0) {
      FUN_000acce4();
      in_EDX[0x62] = 0;
      in_EDX[99] = 0;
      return;
    }
  }
  else {
    FUN_00049eff();
    *(undefined2 *)(extraout_ECX_01 + 0x2f) = 0;
    *(undefined4 *)(extraout_ECX_01 + 0x31) = 0;
    FUN_0004823a();
    *extraout_ECX_02 = *extraout_ECX_02 & 0xf7;
    FUN_000784ae();
    *(undefined2 *)(extraout_ECX_03 + 0x3c) = 0;
    *(undefined2 *)(extraout_ECX_03 + 0x3e) = 0;
    *(undefined2 *)(extraout_ECX_03 + 0xba) = 0;
    *(undefined2 *)(extraout_ECX_03 + 0xbc) = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0811d8 (Ghidra: FUN_000811d8)
 * Prototype: undefined8 sub_0811d8(void);
 * Address  : 0x811d8 (Size: 2132 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 3 -> 0x73fa8, 0x8ccec, 0xdd2f0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000811d8(void)

{
  byte bVar1;
  short sVar2;
  byte *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_EDX;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  piVar7 = &local_1c;
  piVar8 = &local_1c;
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  in_EAX[0x4f] = in_EAX[0x4f] & 0x8e;
  if (((*in_EAX & 0x20) == 0) ||
     (*(int *)(in_EAX + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]))
  {
    if ((&DAT_0018b70d)[(uint)in_EAX[0x1a] * 0x10] == '\0') {
      if (((*(byte *)(iVar4 + 0xac) & 0x20) != 0) && (*(int *)(iVar4 + 0xad) >> 0x10 < 1)) {
        if (*(int *)(in_EAX + 3) >> 0x18 !=
            (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) goto LAB_00081285;
        bVar1 = in_EAX[0x4f];
        in_EAX[0x4f] = bVar1 & 0xcf;
        in_EAX[0x4f] = bVar1 & 0xcf | 0x20;
      }
    }
    else {
      in_EAX[0x4f] = in_EAX[0x4f] | 0x30;
    }
  }
  else {
LAB_00081285:
    in_EAX[0x4f] = in_EAX[0x4f] | 1;
  }
  if ((in_EAX[0x50] & 1) == 0) {
    if ((in_EAX[7] == 0x60) && (-1 < *(int *)(iVar4 + 0x280) >> 0x10)) {
      in_EAX[0x4f] = in_EAX[0x4f] | 1;
      piVar8 = &local_1c;
    }
    else {
      if ((*(byte *)(iVar4 + 0xad) & 2) == 0) {
        if (*(char *)(iVar4 + 0xd2) == '\0') {
          if (((*(char *)(iVar4 + 0xb1) == '\0') && (-1 < *(int *)(in_EAX + 0x5c) >> 0x10)) &&
             ((*(byte *)(iVar4 + 0xab) & 2) == 0)) {
            if ((*(byte *)(iVar4 + 0xab) & 1) == 0) {
              bVar1 = in_EAX[7];
              if (bVar1 == 0x42) {
                uStack_20 = 0x816a9;
                sVar2 = FUN_000dd2f0();
                piVar8 = &local_1c;
                if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
              }
              else if ((bVar1 == 0x7c) || (bVar1 == 0x7d)) {
                uStack_20 = 0x816e0;
                sVar2 = FUN_000dd2f0();
                piVar8 = &local_1c;
                if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
              }
              else {
                if (bVar1 == 0x43) {
                  uStack_20 = 0x81717;
                  sVar2 = FUN_000dd2f0();
                  if (sVar2 != *(short *)(in_EAX + 0x44)) {
                    uStack_20 = 2;
                    uStack_24 = 0;
                    piVar7 = &uStack_28;
                    uStack_28 = 0xffffffff;
                    FUN_000dd2f0();
                    FUN_0008ccec();
                  }
                  in_EAX[0x4f] = in_EAX[0x4f] | 0x40;
                  piVar8 = piVar7;
                  goto LAB_00081921;
                }
                if (bVar1 == 0x1a) {
                  in_EAX[0x4f] = in_EAX[0x4f] & 0xcf;
                  uStack_20 = 0x81766;
                  sVar2 = FUN_000dd2f0();
                  piVar8 = &local_1c;
                  if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
                }
                else if (*(short *)(iVar4 + 9) == 0) {
                  uStack_20 = 0x818f8;
                  sVar2 = FUN_000dd2f0();
                  if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
                }
                else if ((int)(uint)*(ushort *)(in_EAX + 0x60) < *(int *)(in_EAX + 0xf) >> 0x10) {
                  uStack_20 = 0x817b0;
                  sVar2 = FUN_000dd2f0();
                  piVar8 = &local_1c;
                  if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
                }
                else if ((*(ushort *)(iVar4 + 0x6e) == 0) ||
                        ((*(byte *)((&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x6e)] + 1) & 1) == 0)) {
                  uStack_20 = 0x8183c;
                  sVar2 = FUN_000dd2f0();
                  if (sVar2 == *(short *)(in_EAX + 0x44)) {
                    piVar8 = &local_1c;
                    if ((&DAT_0018b70c)[(uint)in_EAX[0x1a] * 0x10] != '\x04') {
                      *(short *)(in_EAX + 0x3e) =
                           (short)(((*(int *)(iVar4 + 7) >> 0x10) << 8) /
                                  ((*(int *)(&DAT_002e9184 + (uint)in_EAX[0x1a] * 0xe6) >> 0x10) + 1
                                  ));
                      piVar8 = &local_1c;
                    }
                    goto LAB_00081921;
                  }
                }
                else {
                  uStack_20 = 0x817e6;
                  sVar2 = FUN_000dd2f0();
                  piVar8 = &local_1c;
                  if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
                }
              }
            }
            else {
              uStack_20 = 0x81684;
              sVar2 = FUN_000dd2f0();
              piVar8 = &local_1c;
              if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
            }
          }
          else {
            uStack_20 = 0x81655;
            sVar2 = FUN_000dd2f0();
            piVar8 = &local_1c;
            if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
          }
        }
        else {
          if (*(char *)(iVar4 + 0xd2) == '-') {
            in_EAX[0x4f] = in_EAX[0x4f] & 0xcf;
          }
          uStack_20 = 0x815e7;
          sVar2 = FUN_000dd2f0();
          piVar8 = &local_1c;
          if (sVar2 == *(short *)(in_EAX + 0x44)) goto LAB_00081921;
        }
        uStack_20 = 2;
        uStack_24 = 0;
        uStack_28 = 0xffffffff;
        FUN_000dd2f0();
      }
      else {
        in_EAX[0x4f] = in_EAX[0x4f] & 0xcf;
        if (*(short *)(iVar4 + 9) == 0) {
          if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
            iVar3 = (int)sRam002f303b;
            if (iVar3 < 0) {
              iVar3 = 0x334;
            }
          }
          else if (_DAT_002f288f < 0) {
            iVar3 = 0x334;
          }
          else {
            iVar3 = (int)_DAT_002f288f;
          }
          piVar8 = &local_1c;
          if (*(int *)(in_EAX + 0x42) >> 0x10 == iVar3) goto LAB_00081921;
          uStack_20 = 2;
          uStack_24 = 0;
          uStack_28 = 0xffffffff;
        }
        else if ((int)(uint)*(ushort *)(in_EAX + 0x60) < *(int *)(in_EAX + 0xf) >> 0x10) {
          if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
            iVar3 = (int)sRam002f303b;
            if (iVar3 < 0) {
              iVar3 = 0x334;
            }
          }
          else if (_DAT_002f288f < 0) {
            iVar3 = 0x334;
          }
          else {
            iVar3 = (int)_DAT_002f288f;
          }
          piVar8 = &local_1c;
          if (*(int *)(in_EAX + 0x42) >> 0x10 == iVar3) goto LAB_00081921;
          uStack_20 = 2;
          uStack_24 = 0;
          uStack_28 = 0xffffffff;
        }
        else {
          if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
            iVar3 = (int)DAT_002f3037._2_2_;
            if (iVar3 < 0) {
              iVar3 = 0x333;
            }
          }
          else if (DAT_002f288b._2_2_ < 0) {
            iVar3 = 0x333;
          }
          else {
            iVar3 = (int)DAT_002f288b._2_2_;
          }
          if (*(int *)(in_EAX + 0x42) >> 0x10 == iVar3) {
            piVar8 = &local_1c;
            if ((&DAT_0018b70c)[(uint)in_EAX[0x1a] * 0x10] != '\x04') {
              *(short *)(in_EAX + 0x3e) =
                   (short)(((*(int *)(iVar4 + 7) >> 0x10) << 8) /
                          ((*(int *)(&DAT_002e9184 + (uint)in_EAX[0x1a] * 0xe6) >> 0x10) + 1));
              piVar8 = &local_1c;
            }
            goto LAB_00081921;
          }
          if ((&DAT_0018b70c)[(uint)in_EAX[0x1a] * 0x10] == '\x04') {
            uStack_20 = 2;
            uStack_24 = 0;
            uStack_28 = 0xffffffff;
          }
          else {
            local_1c = (*(int *)(&DAT_002e9184 + (uint)in_EAX[0x1a] * 0xe6) >> 0x10) + 1;
            uStack_20 = 2;
            uStack_24 = 0;
            uStack_28 = 0xffffffff;
          }
        }
      }
      FUN_0008ccec();
      piVar8 = &uStack_28;
    }
  }
  else {
    in_EAX[0x50] = in_EAX[0x50] & 0xfe;
    piVar8 = &local_1c;
  }
LAB_00081921:
  if ((*(byte *)(iVar4 + 0xab) & 2) == 0) {
    iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    if (((*(byte *)(iVar4 + 3) & 1) == 0) && ((*(byte *)(iVar4 + 3) & 2) == 0)) {
      in_EAX[0x51] = 0;
      in_EAX[0x4f] = in_EAX[0x4f] & 0xf3;
    }
    else {
      uVar5 = DAT_002e8bee / 3;
      if (DAT_002e8bee % 3 == 0) {
        in_EAX[0x51] = 0;
        in_EAX[0x4f] = in_EAX[0x4f] & 0xf3;
        return CONCAT44(in_EDX,uVar5);
      }
      iVar4 = *(int *)(in_EAX + 3) >> 0x18;
      if (iVar4 == 0) {
        *(undefined4 *)((int)piVar8 + -4) = 0x81995;
        uVar6 = FUN_00073fa8();
        return CONCAT44(in_EDX,uVar6);
      }
      if (iVar4 == 1) {
        *(undefined4 *)((int)piVar8 + -4) = 0x819b4;
        uVar6 = FUN_00073fa8();
        return CONCAT44(in_EDX,uVar6);
      }
      if (iVar4 == 2) {
        *(undefined4 *)((int)piVar8 + -4) = 0x819d6;
        uVar6 = FUN_00073fa8();
        return CONCAT44(in_EDX,uVar6);
      }
      if (iVar4 == 3) {
        *(undefined4 *)((int)piVar8 + -4) = 0x819f7;
        uVar6 = FUN_00073fa8();
        return CONCAT44(in_EDX,uVar6);
      }
    }
  }
  else {
    *(undefined4 *)((int)piVar8 + -4) = 0x8193e;
    iVar4 = FUN_00073fa8();
  }
  return CONCAT44(in_EDX,iVar4);
}

/******************************************************************************
 * Function : sub_081a2c (Ghidra: FUN_00081a2c)
 * Prototype: void sub_081a2c(void);
 * Address  : 0x81a2c (Size: 481 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x6c444, 0x6ca16, 0x6cee6, 0x81c10, 0x824dc
 * Callees  : 1 -> 0x62787
 ******************************************************************************/
void FUN_00081a2c(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  int extraout_ECX;
  int in_EDX;
  int iVar3;
  int iVar4;
  char unaff_BL;
  
  if ((0 < in_EDX) && (-1 < *(int *)(in_EAX + 0x5c) >> 0x10)) {
    cVar1 = *(char *)(in_EAX + 0x1f);
    if (cVar1 == '\x05') {
      if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 4) == 0) {
        uVar2 = (uint)(byte)(&DAT_002e9119)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
        if ((*(short *)(in_EAX + 100) != 0) &&
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xac) & 4) != 0)) {
          uVar2 = (int)(uVar2 * 0x140) >> 8;
        }
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        else if (200 < uVar2) {
          uVar2 = 200;
        }
        iVar3 = (0x100 - uVar2) * in_EDX;
        iVar4 = iVar3 >> 0x1f;
        iVar3 = (int)((iVar3 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) - (short)iVar3;
        *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | 0x80;
        iVar3 = DAT_002f10ce >> 0x18;
        *(undefined2 *)(in_EAX + 0x17) = 8;
        if (in_EAX == (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar3 * 0x4ef)]) {
          FUN_00062787();
          in_EAX = extraout_ECX;
        }
      }
    }
    else if (cVar1 == '\x01') {
      *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) - (short)in_EDX;
      *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | 0x80;
    }
    else if (cVar1 == '\t') {
      *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) - (short)in_EDX;
    }
    if ((((*(char *)(in_EAX + 0x1f) == '\x05') && (*(int *)(in_EAX + 0x5c) >> 0x10 < 0)) &&
        (*(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1cf) >> 0x18 == -1)) &&
       (unaff_BL != -1)) {
      *(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1d2) = unaff_BL;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_081c10 (Ghidra: FUN_00081c10)
 * Prototype: void sub_081c10(void);
 * Address  : 0x81c10 (Size: 23 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x2585f, 0x25af0, 0x266af, 0x26987, 0x4f195, 0x6bdda, 0x6c2cc, 0xdf760, 0xe0b1c, 0xe1a00 ...
 * Callees  : 1 -> 0x81a2c
 ******************************************************************************/
void FUN_00081c10(void)

{
  int extraout_ECX;
  int in_EDX;
  
  if (0 < in_EDX) {
    FUN_00081a2c();
    *(undefined2 *)(extraout_ECX + 0x17) = 8;
  }
  return;
}

/******************************************************************************
 * Function : sub_081c44 (Ghidra: FUN_00081c44)
 * Prototype: void sub_081c44(void);
 * Address  : 0x81c44 (Size: 41 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x522f0, 0x74853
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00081c44(void)

{
  bool bVar1;
  int in_EAX;
  int in_EDX;
  
  if ((*(int *)(in_EAX + 0x5c) >> 0x10 < 0) || (in_EDX < 1)) {
    bVar1 = false;
  }
  else {
    *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) - (short)in_EDX;
    bVar1 = true;
  }
  if (bVar1) {
    *(undefined2 *)(in_EAX + 0x17) = 8;
  }
  return;
}

/******************************************************************************
 * Function : sub_081c70 (Ghidra: FUN_00081c70)
 * Prototype: uint sub_081c70(void);
 * Address  : 0x81c70 (Size: 123 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x81cec, 0x85cc4
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00081c70(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int in_EDX;
  
  uVar1 = (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10) * 0x23) /
          100 + (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10);
  if ((*(int *)(in_EAX + 0x5c) >> 0x10 != uVar1) && (0 < in_EDX)) {
    uVar2 = in_EDX + (*(int *)(in_EAX + 0x5c) >> 0x10);
    if (uVar2 < uVar1) {
      uVar1 = uVar2;
    }
    *(short *)(in_EAX + 0x5e) = (short)uVar1;
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_081cec (Ghidra: FUN_00081cec)
 * Prototype: void sub_081cec(void);
 * Address  : 0x81cec (Size: 20 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3edee, 0x4a8e1, 0x6db51
 * Callees  : 1 -> 0x81c70
 ******************************************************************************/
void FUN_00081cec(void)

{
  char cVar1;
  int in_EAX;
  
  cVar1 = FUN_00081c70();
  if (cVar1 != '\0') {
    *(undefined2 *)(in_EAX + 0x17) = 8;
  }
  return;
}

/******************************************************************************
 * Function : sub_081d00 (Ghidra: FUN_00081d00)
 * Prototype: undefined8 sub_081d00(void);
 * Address  : 0x81d00 (Size: 132 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x81d84, 0xb3dac
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00081d00(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 in_EDX;
  
  if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
    uVar1 = *(int *)(&DAT_002f29d1 +
                    (uint)*(ushort *)(&DAT_00187b76 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c) * 2) >>
            0x10;
    if (*(int *)(&DAT_002f29d1 +
                (uint)*(ushort *)(&DAT_00187b76 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c) * 2) >>
        0x10 < 0) {
      uVar1 = (uint)*(ushort *)(&DAT_00187b76 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c);
    }
  }
  else {
    uVar1 = *(int *)((int)&DAT_002f2223 +
                    (uint)*(ushort *)(&DAT_00187b76 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c) * 2 + 2
                    ) >> 0x10;
    if ((int)uVar1 < 0) {
      uVar1 = (uint)*(ushort *)(&DAT_00187b76 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c);
    }
  }
  return CONCAT44(in_EDX,(uint)(*(int *)(in_EAX + 0x42) >> 0x10 == uVar1));
}

/******************************************************************************
 * Function : sub_081d84 (Ghidra: FUN_00081d84)
 * Prototype: undefined8 sub_081d84(void);
 * Address  : 0x81d84 (Size: 84 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6e61e, 0xe0b1c, 0xe45c0, 0xe4e0c
 * Callees  : 1 -> 0x81d00
 ******************************************************************************/
undefined8 FUN_00081d84(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xce) >> 0x1f;
  if ((int)((*(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xce) + iVar2 * -0x100) -
           (uint)(iVar2 << 7 < 0)) >> 8 != (uint)*(byte *)(in_EAX + 0x48)) {
    iVar2 = FUN_00081d00();
    if (iVar2 != 0) {
      uVar1 = 1;
      if (*(char *)(in_EAX + 0x48) == '\x01') goto LAB_00081dd5;
      if (*(char *)(in_EAX + 0x48) == '\x04') {
        return CONCAT44(in_EDX,2);
      }
    }
  }
  uVar1 = 0;
LAB_00081dd5:
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_081dd8 (Ghidra: FUN_00081dd8)
 * Prototype: undefined8 sub_081dd8(void);
 * Address  : 0x81dd8 (Size: 132 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xde6a8, 0xe2cd0, 0xe31b8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00081dd8(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x40);
  if ((iVar1 < 0) || (0xff < iVar1)) {
    if ((0xff < iVar1) && (iVar1 < 0x280)) {
      iVar1 = 1;
      goto LAB_00081e49;
    }
    if ((((iVar1 < 0x280) || (0x3ff < iVar1)) && (0x3ff < iVar1)) && (iVar1 < 0x580)) {
      iVar1 = 1;
      goto LAB_00081e49;
    }
  }
  iVar1 = -1;
LAB_00081e49:
  if (*(int *)(in_EAX + 0x3c) >> 0x10 < 0) {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_081e5c (Ghidra: FUN_00081e5c)
 * Prototype: longlong sub_081e5c(void);
 * Address  : 0x81e5c (Size: 31 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x3b17f, 0x3bcbe, 0x3c91b, 0xe2a14
 * Callees  : 1 -> 0x74020
 ******************************************************************************/
longlong FUN_00081e5c(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  if (*(char *)(in_EAX + 0x1f) == '\x04') {
    iVar1 = FUN_00074020();
    if (iVar1 == 0) {
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_select_thing_information_081e7c (Ghidra: FUN_00081e7c)
 * Prototype: undefined4 dk_select_thing_information_081e7c(void);
 * Address  : 0x81e7c (Size: 47 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:1410 ("Cannot select thing for information")
 * Naming   : String 'Cannot select thing for information'
 * Callers  : 1 -> 0x4b992
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x169fe2: "creature.cpp"
 *   - 0x169fbe: "Cannot select thing for information"
 ******************************************************************************/
undefined4 FUN_00081e7c(void)

{
  int in_EAX;
  int in_EDX;
  
  if (*(char *)(in_EDX + 0x1f) == '\x05') {
    *(undefined2 *)(in_EAX + 0x2f) = *(undefined2 *)(in_EDX + 0x1b);
    return 1;
  }
  FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 1410, "Cannot select thing for information") */
  return 0;
}

/******************************************************************************
 * Function : sub_081eac (Ghidra: FUN_00081eac)
 * Prototype: void sub_081eac(void);
 * Address  : 0x81eac (Size: 28 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x1e119, 0x4845c, 0x4ac70, 0x61bde
 * Callees  : 1 -> 0x50ca9
 ******************************************************************************/
void FUN_00081eac(void)

{
  byte *extraout_EDX;
  
  FUN_00050ca9();
  extraout_EDX[0x4f] = extraout_EDX[0x4f] | 1;
  *extraout_EDX = *extraout_EDX | 0x10;
  return;
}

/******************************************************************************
 * Function : sub_081ec8 (Ghidra: FUN_00081ec8)
 * Prototype: void sub_081ec8(void);
 * Address  : 0x81ec8 (Size: 12 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1e226, 0x248e5
 * Callees  : 1 -> 0x50c38
 ******************************************************************************/
void FUN_00081ec8(void)

{
  byte *in_EAX;
  
  *in_EAX = *in_EAX & 0xef;
  in_EAX[0x4f] = in_EAX[0x4f] & 0xfe;
  FUN_00050c38();
  return;
}

/******************************************************************************
 * Function : sub_081ed4 (Ghidra: FUN_00081ed4)
 * Prototype: void sub_081ed4(void);
 * Address  : 0x81ed4 (Size: 30 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x38668
 * Callees  : 1 -> 0x50ca9
 ******************************************************************************/
void FUN_00081ed4(void)

{
  int extraout_EDX;
  
  FUN_00050ca9();
  *(byte *)(extraout_EDX + 0x4f) = *(byte *)(extraout_EDX + 0x4f) | 1;
  *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) | 2;
  return;
}

/******************************************************************************
 * Function : sub_081ef4 (Ghidra: FUN_00081ef4)
 * Prototype: void sub_081ef4(void);
 * Address  : 0x81ef4 (Size: 13 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x386e1
 * Callees  : 1 -> 0x50c38
 ******************************************************************************/
void FUN_00081ef4(void)

{
  int in_EAX;
  
  *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) & 0xfd;
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xfe;
  FUN_00050c38();
  return;
}

/******************************************************************************
 * Function : sub_081f04 (Ghidra: FUN_00081f04)
 * Prototype: longlong sub_081f04(void);
 * Address  : 0x81f04 (Size: 86 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6d7d5, 0x6db51, 0x74f40
 * Callees  : 1 -> 0x81f5c
 ******************************************************************************/
longlong FUN_00081f04(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(int *)(&DAT_002e9133 +
              (uint)*(byte *)(in_EAX + 0x1a) * 0xe6 + (uint)*(byte *)(iVar1 + 0x23) * 4) * 0x100 <=
      *(int *)(iVar1 + 0x24)) {
    *(int *)(iVar1 + 0x24) =
         *(int *)(iVar1 + 0x24) +
         *(int *)(&DAT_002e9133 +
                 (uint)*(byte *)(in_EAX + 0x1a) * 0xe6 + (uint)*(byte *)(iVar1 + 0x23) * 4) * -0x100
    ;
    FUN_00081f5c();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_081f5c (Ghidra: FUN_00081f5c)
 * Prototype: void sub_081f5c(void);
 * Address  : 0x81f5c (Size: 107 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x70c96, 0x81f04
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00081f5c(void)

{
  int in_EAX;
  
  if (((int)(uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) <
       (int)(&DAT_002e0fd8)[(*(int *)(in_EAX + 3) >> 0x18) * 0x542 + (uint)*(byte *)(in_EAX + 0x1a)]
      ) && ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) < 9 ||
            (*(short *)(&DAT_002e915c + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0)))) {
    *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) =
         *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) | 0x40;
  }
  return;
}

/******************************************************************************
 * Function : dk_could_create_creature_081fec (Ghidra: FUN_00081fec)
 * Prototype: undefined8 dk_could_create_creature_081fec(void);
 * Address  : 0x81fec (Size: 535 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:1549 ("COULD NOT CREATE CREATURE")
 * Naming   : String 'COULD NOT CREATE CREATURE'
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 8 -> 0x43bb3, 0x64a5f, 0x80a94, 0x80fbc, 0x82204, 0x85954, 0x8608c, 0xddaf0
 * Strings  :
 *   - 0x16a009: "creature.cpp"
 *   - 0x169fef: "COULD NOT CREATE CREATURE"
 ******************************************************************************/
undefined8 FUN_00081fec(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  uint uVar4;
  undefined4 unaff_EDI;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(byte *)(iVar2 + 0xad) & 0x40) != 0) {
    *(byte *)(iVar2 + 0xad) = *(byte *)(iVar2 + 0xad) & 0xbf;
    uVar4 = *(int *)(in_EAX + 3) >> 0x18;
    if (uVar4 != DAT_002eb543) {
      *(uint *)(&DAT_002e1431 + uVar4 * 0x1508) =
           *(int *)(&DAT_002e1431 + uVar4 * 0x1508) -
           (uint)(byte)(&DAT_002ebaf8)
                       [(uint)*(byte *)(in_EAX + 0x1a) * 10 +
                        (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23)];
    }
    if (*(byte *)(iVar2 + 0x23) < 9) {
      FUN_00082204();
      uVar1 = 1;
      goto LAB_000821fc;
    }
    if (*(short *)(&DAT_002e915c + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) {
      iVar2 = FUN_00043bb3();
      if (iVar2 != 0) {
        FUN_00082204();
        *(short *)(iVar2 + 0x5e) =
             (short)((int)((*(int *)(&DAT_002e9112 + (uint)*(byte *)(iVar2 + 0x1a) * 0xe6) >> 0x10)
                           * (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x23) *
                          0x23) / 100) +
             (short)((uint)*(int *)(&DAT_002e9112 + (uint)*(byte *)(iVar2 + 0x1a) * 0xe6) >> 0x10);
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x282) = 0x32;
        FUN_00064a5f();
        iVar3 = FUN_00085954();
        iVar2 = extraout_ECX;
        if (iVar3 != 0) {
          FUN_00080fbc();
          FUN_00080a94();
          iVar2 = extraout_ECX_00;
        }
        iVar3 = (*(int *)(in_EAX + 3) >> 0x18) * 0x4ef;
        if (*(short *)(in_EAX + 0x1b) == *(short *)((int)&DAT_0019d0f7 + iVar3)) {
          *(undefined2 *)((int)&DAT_0019d0f7 + iVar3) = *(undefined2 *)(iVar2 + 0x1b);
          *(undefined4 *)(&DAT_0019d0f9 + (*(int *)(in_EAX + 3) >> 0x18) * 0x4ef) =
               *(undefined4 *)(iVar2 + 9);
        }
        FUN_0008608c(0,1);
        return CONCAT44(unaff_EDI,0xffffffff);
      }
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 1549, "COULD NOT CREATE CREATURE") */
    }
  }
  uVar1 = 0;
LAB_000821fc:
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_082204 (Ghidra: FUN_00082204)
 * Prototype: void sub_082204(void);
 * Address  : 0x82204 (Size: 518 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x43bb3, 0x5f6c5, 0x70d86, 0x7fac8, 0x81fec, 0x8240c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00082204(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  int in_EDX;
  int iVar5;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (in_EDX < 0) {
    in_EDX = 0;
  }
  else if (9 < in_EDX) {
    in_EDX = 9;
  }
  bVar1 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23);
  iVar5 = *(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
  iVar3 = *(int *)(in_EAX + 0x5c);
  *(char *)(iVar2 + 0x23) = (char)in_EDX;
  *(short *)(iVar2 + 0xc6) =
       (short)((int)((*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10) *
                     (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) /
              100) +
       (short)((uint)*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10);
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 2) == 0) {
    *(short *)(in_EAX + 0x46) =
         (short)(((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 300) / 0x14)
         + 300;
  }
  else {
    *(undefined2 *)(in_EAX + 0x46) = 300;
  }
  *(short *)(in_EAX + 0x5e) =
       (short)(((iVar3 >> 0x10) *
               ((int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                      (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10) *
                     0x23) / 100 +
               (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10))) /
              ((iVar5 >> 0x10) + (int)((iVar5 >> 0x10) * (uint)bVar1 * 0x23) / 100));
  uVar4 = 0;
  do {
    iVar5 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6 + uVar4;
    if (((&DAT_002e918d)[iVar5] != '\0') &&
       ((uint)(byte)(&DAT_002e9197)[iVar5] <= *(byte *)(iVar2 + 0x23) + 1)) {
      *(undefined1 *)((byte)(&DAT_002e918d)[iVar5] + 0x19e + iVar2) = 1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  uVar4 = *(int *)(in_EAX + 3) >> 0x18;
  if (uVar4 != DAT_002eb543) {
    *(uint *)(&DAT_002e1431 + uVar4 * 0x1508) =
         *(int *)(&DAT_002e1431 + uVar4 * 0x1508) +
         (uint)(byte)(&DAT_002ebaf8)
                     [(uint)*(byte *)(iVar2 + 0x23) + (uint)*(byte *)(in_EAX + 0x1a) * 10];
  }
  return;
}

/******************************************************************************
 * Function : sub_08240c (Ghidra: FUN_0008240c)
 * Prototype: void sub_08240c(void);
 * Address  : 0x8240c (Size: 92 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x2ab14, 0x40832, 0x66016, 0x68788, 0x689a7, 0x70a3c, 0x7317c, 0x74c0d
 * Callees  : 1 -> 0x82204
 ******************************************************************************/
void FUN_0008240c(void)

{
  int in_EAX;
  
  FUN_00082204();
  *(short *)(in_EAX + 0x5e) =
       (short)((longlong)
               (int)((*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10) *
                     (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) /
              100) +
       (short)((uint)*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10);
  return;
}

/******************************************************************************
 * Function : sub_082468 (Ghidra: FUN_00082468)
 * Prototype: void sub_082468(void);
 * Address  : 0x82468 (Size: 116 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00082468(void)

{
  undefined2 uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  byte in_DL;
  
  iVar3 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  if (in_DL != 0) {
    if (in_DL < 2) {
      uVar1 = *(undefined2 *)(&DAT_002e0591 + iVar3);
      (&DAT_002e0591)[iVar3] = (&DAT_002e0591)[iVar3] & 0xfe;
      *(ushort *)(&DAT_002e0591 + iVar3) =
           *(ushort *)(&DAT_002e0591 + iVar3) | (ushort)((byte)uVar1 & 1 ^ 1);
      return;
    }
    if (in_DL == 2) {
      sVar2 = *(short *)(&DAT_002e0591 + iVar3);
      (&DAT_002e0591)[iVar3] = (&DAT_002e0591)[iVar3] & 0xfd;
      *(ushort *)(&DAT_002e0591 + iVar3) =
           *(ushort *)(&DAT_002e0591 + iVar3) |
           (ushort)(byte)((byte)((ushort)(sVar2 << 0xe) >> 0xf) ^ 1) * 2;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0824dc (Ghidra: FUN_000824dc)
 * Prototype: void sub_0824dc(void);
 * Address  : 0x824dc (Size: 378 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4af38
 * Callees  : 6 -> 0x10434, 0x49dd9, 0x64a5f, 0x6edb9, 0x81a2c, 0x85890
 ******************************************************************************/
void FUN_000824dc(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int in_EDX;
  
  iVar3 = (uint)*(byte *)(in_EDX + 0x1a) * 0xe6;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  FUN_00010434();
  if (((&DAT_002e91df)[iVar3] != '\0') &&
     (0 < ((*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6) >> 0x10) +
          (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x23) *
                (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6) >> 0x10) * 0x23) /
          100) / (int)(uint)(byte)(&DAT_002e91df)[iVar3])) {
    FUN_00081a2c();
    *(undefined2 *)(in_EDX + 0x17) = 8;
  }
  if (*(short *)(iVar1 + 0x21) == 0) {
    *(undefined2 *)(iVar1 + 0x21) = DAT_002eaf65;
    uVar2 = FUN_00085890();
    *(undefined2 *)(iVar1 + 0xc4) = uVar2;
  }
  else {
    *(undefined2 *)(iVar1 + 0x21) = DAT_002eaf65;
  }
  if (*(char *)(in_EDX + 7) != 'B') {
    FUN_00049dd9();
    *(undefined1 *)(iVar1 + 0x27d) = *(undefined1 *)(in_EDX + 7);
    *(undefined1 *)(iVar1 + 0x27e) = *(undefined1 *)(in_EDX + 8);
    if (*(char *)(in_EDX + 7) == '\x1a') {
      FUN_00010434();
    }
    FUN_00064a5f();
  }
  *(undefined1 *)(iVar1 + 0xb1) = 6;
  *(char *)(iVar1 + 0x27f) = *(char *)(iVar1 + 0xb1) + '\f';
  FUN_0006edb9();
  return;
}

/******************************************************************************
 * Function : sub_0826a0 (Ghidra: FUN_000826a0)
 * Prototype: void sub_0826a0(void);
 * Address  : 0x826a0 (Size: 109 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x64174, 0x64279
 * Callees  : 2 -> 0x63b6d, 0x84e8c
 ******************************************************************************/
void FUN_000826a0(void)

{
  int in_EAX;
  
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 0xfb;
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 0xfd;
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x280) = 0;
  if ((*(byte *)(in_EAX + 1) & 1) != 0) {
    FUN_00084e8c();
  }
  FUN_00063b6d();
  return;
}

/******************************************************************************
 * Function : sub_082710 (Ghidra: FUN_00082710)
 * Prototype: void sub_082710(void);
 * Address  : 0x82710 (Size: 100 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x64e63
 * Callees  : 1 -> 0x84e8c
 ******************************************************************************/
void FUN_00082710(void)

{
  int in_EAX;
  
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 0xfb;
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 0xfd;
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x280) = 0;
  if ((*(byte *)(in_EAX + 1) & 1) != 0) {
    FUN_00084e8c();
  }
  return;
}

/******************************************************************************
 * Function : sub_082774 (Ghidra: FUN_00082774)
 * Prototype: undefined1 sub_082774(void);
 * Address  : 0x82774 (Size: 135 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 19 -> 0x11be9, 0x2002c, 0x38989, 0x38b05, 0x38b5e, 0x38cba, 0x38dcb, 0x64d00, 0x69268, 0xb4fa0 ...
 * Callees  : 2 -> 0xc241c, 0xd5ac0
 ******************************************************************************/
undefined1 FUN_00082774(void)

{
  ushort uVar1;
  int extraout_ECX;
  char unaff_BL;
  undefined8 uVar2;
  undefined1 local_814;
  
  uVar2 = FUN_000d5ac0();
  DAT_003d9528 = (undefined4)uVar2;
  if (unaff_BL == '\0') {
    DAT_003d9524 = *(int *)(extraout_ECX + 3) >> 0x18;
    uVar1 = *(ushort *)(extraout_ECX + 0x56);
  }
  else {
    uVar1 = *(ushort *)(extraout_ECX + 0x56);
    DAT_003d9524 = -1;
  }
  FUN_000c241c(*(undefined2 *)((int)((ulonglong)uVar2 >> 0x20) + 2),0xfffffffe,
               (&DAT_00190d3d)[uVar1] + -1);
  DAT_003d9528 = 0;
  return local_814;
}

/******************************************************************************
 * Function : sub_0827fc (Ghidra: FUN_000827fc)
 * Prototype: bool sub_0827fc(void);
 * Address  : 0x827fc (Size: 43 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 18 -> 0x11606, 0x119bc, 0x11a81, 0x28d85, 0x29254, 0x38f2b, 0x38faa, 0x3d3f3, 0x3fcd0, 0x3fed7 ...
 * Callees  : 1 -> 0x11e00
 ******************************************************************************/
bool FUN_000827fc(void)

{
  char cVar1;
  
  cVar1 = FUN_00011e00();
  return cVar1 == '\0';
}

/******************************************************************************
 * Function : sub_082828 (Ghidra: FUN_00082828)
 * Prototype: undefined4 sub_082828(void);
 * Address  : 0x82828 (Size: 476 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x23ad0, 0x40a20, 0x4f63e, 0x74038, 0x82c30, 0x82cac, 0xd08a8, 0xda7bc
 * Callees  : 1 -> 0x63122
 ******************************************************************************/
undefined4 FUN_00082828(void)

{
  int iVar1;
  byte in_AL;
  uint uVar2;
  int in_EDX;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  
  if (in_AL != DAT_002eb543) {
    iVar1 = (unaff_EBX * 0x300 + in_EDX * 3) * 5;
    uVar4 = *(uint *)((int)&DAT_00279203 + iVar1 + 1);
    uVar3 = (uint)(byte)('\x01' << (in_AL & 0x1f));
    uVar2 = uVar4 >> 0x1c;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar4 & 0xfffffff;
      *(uint *)((int)&DAT_00279203 + iVar1 + 1) = uVar4;
      *(uint *)((int)&DAT_00279203 + iVar1 + 1) = uVar4 | (uVar2 | uVar3) << 0x1c;
      uVar4 = *(uint *)((int)&DAT_00279209 + iVar1);
      *(uint *)((int)&DAT_00279209 + iVar1) = uVar4 & 0xfffffff;
      *(uint *)((int)&DAT_00279209 + iVar1) =
           *(uint *)((int)&DAT_00279209 + iVar1) | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_0027920e + iVar1);
      uVar2 = uVar4 & 0xfffffff;
      *(uint *)(&DAT_0027920e + iVar1) = uVar2;
      *(uint *)(&DAT_0027920e + iVar1) = uVar2 | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_00279704 + iVar1);
      uVar2 = uVar4 & 0xfffffff;
      *(uint *)(&DAT_00279704 + iVar1) = uVar2;
      *(uint *)(&DAT_00279704 + iVar1) = uVar2 | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_00279709 + iVar1);
      uVar2 = uVar4 & 0xfffffff;
      *(uint *)(&DAT_00279709 + iVar1) = uVar2;
      *(uint *)(&DAT_00279709 + iVar1) = uVar2 | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_0027970e + iVar1);
      uVar2 = uVar4 & 0xfffffff;
      *(uint *)(&DAT_0027970e + iVar1) = uVar2;
      *(uint *)(&DAT_0027970e + iVar1) = uVar2 | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_00279c04 + iVar1);
      *(uint *)(&DAT_00279c04 + iVar1) = uVar4 & 0xfffffff;
      *(uint *)(&DAT_00279c04 + iVar1) =
           *(uint *)(&DAT_00279c04 + iVar1) | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_00279c09 + iVar1);
      uVar2 = uVar4 & 0xfffffff;
      *(uint *)(&DAT_00279c09 + iVar1) = uVar2;
      *(uint *)(&DAT_00279c09 + iVar1) = uVar2 | (uVar4 >> 0x1c | uVar3) << 0x1c;
      uVar4 = *(uint *)(&DAT_00279c0e + iVar1);
      uVar2 = uVar4 & 0xfffffff;
      *(uint *)(&DAT_00279c0e + iVar1) = uVar2;
      *(uint *)(&DAT_00279c0e + iVar1) = uVar2 | (uVar3 | uVar4 >> 0x1c) << 0x1c;
      FUN_00063122();
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_082a04 (Ghidra: FUN_00082a04)
 * Prototype: void sub_082a04(void);
 * Address  : 0x82a04 (Size: 274 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14d45
 * Callees  : 1 -> 0x63122
 ******************************************************************************/
void FUN_00082a04(void)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  byte in_AL;
  int in_EDX;
  uint uVar4;
  int unaff_EBX;
  
  iVar3 = (unaff_EBX * 0x300 + in_EDX * 3) * 5;
  uVar4 = *(uint *)((int)&DAT_00279203 + iVar3 + 1);
  if (uVar4 >> 0x1c != (uint)in_AL) {
    *(uint *)((int)&DAT_00279203 + iVar3 + 1) = uVar4 & 0xfffffff;
    uVar4 = (uint)in_AL << 0x1c;
    puVar1 = (uint *)((int)&DAT_00279203 + iVar3 + 1);
    *puVar1 = *puVar1 | uVar4;
    pbVar2 = (byte *)((int)&DAT_00279209 + iVar3 + 3);
    *pbVar2 = *pbVar2 & 0xf;
    *(uint *)((int)&DAT_00279209 + iVar3) = *(uint *)((int)&DAT_00279209 + iVar3) | uVar4;
    (&DAT_00279211)[iVar3] = (&DAT_00279211)[iVar3] & 0xf;
    *(uint *)(&DAT_0027920e + iVar3) = *(uint *)(&DAT_0027920e + iVar3) | uVar4;
    (&DAT_00279707)[iVar3] = (&DAT_00279707)[iVar3] & 0xf;
    *(uint *)(&DAT_00279704 + iVar3) = *(uint *)(&DAT_00279704 + iVar3) | uVar4;
    (&DAT_0027970c)[iVar3] = (&DAT_0027970c)[iVar3] & 0xf;
    *(uint *)(&DAT_00279709 + iVar3) = *(uint *)(&DAT_00279709 + iVar3) | uVar4;
    (&DAT_00279711)[iVar3] = (&DAT_00279711)[iVar3] & 0xf;
    *(uint *)(&DAT_0027970e + iVar3) = *(uint *)(&DAT_0027970e + iVar3) | uVar4;
    (&DAT_00279c07)[iVar3] = (&DAT_00279c07)[iVar3] & 0xf;
    *(uint *)(&DAT_00279c04 + iVar3) = *(uint *)(&DAT_00279c04 + iVar3) | uVar4;
    (&DAT_00279c0c)[iVar3] = (&DAT_00279c0c)[iVar3] & 0xf;
    *(uint *)(&DAT_00279c09 + iVar3) = *(uint *)(&DAT_00279c09 + iVar3) | uVar4;
    (&DAT_00279c11)[iVar3] = (&DAT_00279c11)[iVar3] & 0xf;
    *(uint *)(&DAT_00279c0e + iVar3) = *(uint *)(&DAT_00279c0e + iVar3) | uVar4;
    FUN_00063122();
  }
  return;
}

/******************************************************************************
 * Function : sub_082c30 (Ghidra: FUN_00082c30)
 * Prototype: undefined4 sub_082c30(void);
 * Address  : 0x82c30 (Size: 122 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x23de2, 0x82828
 ******************************************************************************/
undefined4 FUN_00082c30(void)

{
  char cVar1;
  char extraout_CL;
  int in_EDX;
  int unaff_EBX;
  
  FUN_00023de2();
  if (((extraout_CL != '\0') ||
      (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] * 0x16] & 0x10)
       != 0)) && (cVar1 = FUN_00082828(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_082cac (Ghidra: FUN_00082cac)
 * Prototype: void sub_082cac(void);
 * Address  : 0x82cac (Size: 3625 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x16fab, 0x22660, 0x4a0d6, 0x63dd3, 0x6c681, 0x71416, 0xb3dac
 * Callees  : 6 -> 0x23de2, 0x27390, 0x63a25, 0x82828, 0xb3788, 0xdc5c4
 ******************************************************************************/
void FUN_00082cac(void)

{
  ushort uVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  uint3 uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  uint extraout_ECX_13;
  uint extraout_ECX_14;
  int in_EDX;
  uint uVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  uint auStack_e8 [2];
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  int local_d4;
  int local_a8 [37];
  byte local_14 [4];
  
  puVar10 = &local_e0;
  if (*(int *)(in_EAX + 3) >> 0x18 < (int)(uint)DAT_002eb542) {
    local_d4._0_1_ = (undefined1)in_EDX;
    local_e0 = CONCAT11((undefined1)local_d4,0x80);
    local_de = CONCAT11((char)unaff_EBX,0x80);
    local_d4 = in_EDX;
    local_dc = FUN_000b3788();
    local_d4 = (&DAT_0019033b)[local_d4];
    iVar4 = (&DAT_0019033b)[unaff_EBX];
    iVar8 = local_d4 + iVar4 * 0x55;
    uVar1 = DAT_002ebaf2;
    if (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar8 * 6] * 0x16] & 0x69) == 0) {
      while (uVar1 != 0) {
        iVar4 = (&DAT_001ae9fc)[uVar1];
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar4 + 100)] + 0x1f);
        uVar6 = *(int *)((int)puVar10 + 0x38) - (&DAT_0019033b)[*(byte *)(iVar4 + 0xe)] >> 0x1f;
        if (((int)((*(int *)((int)puVar10 + 0x38) - (&DAT_0019033b)[*(byte *)(iVar4 + 0xe)] ^ uVar6)
                  - uVar6) <= *(int *)((int)puVar10 + 0x44)) &&
           (uVar6 = *(int *)((int)puVar10 + 0x3c) - (&DAT_0019033b)[*(byte *)(iVar4 + 0x10)] >> 0x1f
           , (int)((*(int *)((int)puVar10 + 0x3c) - (&DAT_0019033b)[*(byte *)(iVar4 + 0x10)] ^ uVar6
                   ) - uVar6) <= *(int *)((int)puVar10 + 0x44))) {
          *(undefined4 *)((int)puVar10 + -4) = 0x8305b;
          cVar2 = FUN_000dc5c4();
          if (cVar2 != '\0') {
            *(undefined4 *)((int)puVar10 + -4) = 0x83070;
            FUN_00063a25();
            if (*(byte *)((int)puVar10 + 0xcc) != DAT_002eb543) {
              *(uint *)((int)puVar10 + 0x48) = (uint)*(byte *)((int)puVar10 + 0xcc) * 0x1508;
              iVar8 = (uint)*(byte *)(iVar4 + 0x1a) + *(int *)((int)puVar10 + 0x48);
              if (((byte)(&DAT_002e0ea3)[iVar8] < 2) && ((&DAT_002e1a12)[iVar8] == '\0')) {
                *(uint *)((int)puVar10 + -4) = (uint)*(ushort *)(iVar4 + 0x1b);
                *(undefined4 *)((int)puVar10 + -8) = 0x830d7;
                FUN_00027390();
                (&DAT_002e1a12)[(uint)*(byte *)(iVar4 + 0x1a) + *(int *)((int)puVar10 + 0x44)] = 1;
                puVar10 = (undefined2 *)((int)puVar10 + -4);
              }
            }
          }
        }
      }
      *(undefined4 *)((int)puVar10 + -4) = 0x83100;
      FUN_00023de2();
      *(undefined4 *)((int)puVar10 + -4) = 0x83112;
      FUN_00082828();
      iVar4 = *(int *)((int)puVar10 + 200);
      *(int *)((int)puVar10 + 0x14) = iVar4;
      iVar8 = -iVar4;
      *(int *)((int)puVar10 + 0x14) = iVar8;
      if (-iVar4 == iVar4 || SBORROW4(iVar8,iVar4) != iVar4 * -2 < 0) {
        *(int *)((int)puVar10 + 0x4c) = iVar4 << 8;
        *(int *)((int)puVar10 + 0xa4) = iVar8 + *(int *)((int)puVar10 + 0xc);
        *(int *)((int)puVar10 + 0xa8) = iVar4 * -0x100;
        do {
          if ((-1 < *(int *)((int)puVar10 + 0xa4)) && (*(int *)((int)puVar10 + 0xa4) < 0x55)) {
            *(undefined4 *)((int)puVar10 + 0x24) = 0x80;
            *(undefined4 *)((int)puVar10 + 0x30) = 0;
            *(undefined4 *)((int)puVar10 + 0x34) = 0;
            *(undefined4 *)((int)puVar10 + 0x28) = 0;
            uVar6 = 0x101;
            *(int *)((int)puVar10 + 0x1c) =
                 *(int *)((int)puVar10 + 0xa8) / *(int *)((int)puVar10 + 200);
            if (0 < *(int *)((int)puVar10 + 0x4c)) {
              do {
                if (((char)uVar6 == '\0') && ((char)(uVar6 >> 8) == '\0')) break;
                iVar4 = *(int *)((int)puVar10 + 0x24);
                *(int *)((int)puVar10 + 0x24) = iVar4 + *(int *)((int)puVar10 + 0x1c);
                *(int *)((int)puVar10 + 0x2c) = iVar4 + *(int *)((int)puVar10 + 0x1c) >> 8;
                iVar8 = *(int *)((int)puVar10 + 0x28) + 0x100 >> 8;
                iVar4 = *(int *)((int)puVar10 + 0x10) - iVar8;
                *(int *)((int)puVar10 + 0x28) = *(int *)((int)puVar10 + 0x28) + 0x100;
                if ((-1 < iVar4) && (*(int *)((int)puVar10 + 0x10) + iVar8 < 0x55)) {
                  if ((char)uVar6 != '\0') {
                    iVar7 = iVar4 * 0x55 +
                            *(int *)((int)puVar10 + 0xc) + *(int *)((int)puVar10 + 0x2c);
                    iVar4 = (*(int *)((int)puVar10 + 0xc) + *(int *)((int)puVar10 + 0x2c) +
                            (iVar4 + 1) * 0x55) * 6;
                    uVar5 = (uint3)(uVar6 >> 8);
                    if (*(int *)((int)puVar10 + 0x14) < 0) {
                      if ((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar7 + 1) * 6] * 0x16] &
                           0x69) != 0) &&
                         (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar4] * 0x16] & 0x69) != 0))
                      {
                        uVar6 = (uint)uVar5 << 8;
                        *(undefined4 *)((int)puVar10 + 0x30) = 1;
                      }
                    }
                    else if (((0 < *(int *)((int)puVar10 + 0x14)) &&
                             (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar7 + -1) * 6] * 0x16]
                              & 0x69) != 0)) &&
                            (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar4] * 0x16] & 0x69) !=
                             0)) {
                      uVar6 = (uint)uVar5 << 8;
                      *(undefined4 *)((int)puVar10 + 0x30) = 1;
                    }
                    iVar4 = *(int *)((int)puVar10 + 0x10) - iVar8;
                    *(int *)((int)puVar10 + 0x98) =
                         (iVar4 * 0x55 +
                         *(int *)((int)puVar10 + 0xc) + *(int *)((int)puVar10 + 0x2c)) * 6;
                    if ((char)uVar6 == '\0') {
                      if ((*(int *)((int)puVar10 + 0x30) != 0) &&
                         (*(undefined4 *)((int)puVar10 + 0x30) = 0,
                         ((&DAT_001921c6)
                          [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0x98)] * 0x16] & 0x20
                         ) != 0)) {
                        *(int *)((int)puVar10 + 0x58) = in_EAX;
                        *(int *)((int)puVar10 + 0x5c) = iVar4;
                        *(undefined4 *)((int)puVar10 + -4) = 0x83393;
                        FUN_00023de2();
                        if (((char)extraout_ECX_01 != '\0') ||
                           (uVar6 = extraout_ECX_01,
                           ((&DAT_001921c6)
                            [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0x98)] * 0x16] &
                           0x10) != 0)) {
                          *(undefined4 *)((int)puVar10 + -4) = 0x833c8;
                          FUN_00082828();
                          uVar6 = extraout_ECX_02;
                        }
                      }
                    }
                    else {
                      *(int *)((int)puVar10 + 0x50) = in_EAX;
                      *(int *)((int)puVar10 + 0x54) = iVar4;
                      *(undefined4 *)((int)puVar10 + -4) = 0x832ea;
                      FUN_00023de2();
                      if (((char)extraout_ECX != '\0') ||
                         (uVar6 = extraout_ECX,
                         ((&DAT_001921c6)
                          [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0x98)] * 0x16] & 0x10
                         ) != 0)) {
                        *(undefined4 *)((int)puVar10 + -4) = 0x8331f;
                        FUN_00082828();
                        uVar6 = extraout_ECX_00;
                      }
                      if (((&DAT_001921c6)
                           [(uint)(byte)(&DAT_002d33c5)
                                        [(*(int *)((int)puVar10 + 0xc) +
                                          *(int *)((int)puVar10 + 0x2c) +
                                         (*(int *)((int)puVar10 + 0x10) - iVar8) * 0x55) * 6] * 0x16
                           ] & 0x69) != 0) {
                        uVar6 = uVar6 & 0xffffff00;
                      }
                    }
                  }
                  if ((char)(uVar6 >> 8) != '\0') {
                    iVar4 = (*(int *)((int)puVar10 + 0x10) + iVar8) * 0x55 +
                            *(int *)((int)puVar10 + 0xc) + *(int *)((int)puVar10 + 0x2c);
                    iVar7 = (*(int *)((int)puVar10 + 0xc) + *(int *)((int)puVar10 + 0x2c) +
                            (*(int *)((int)puVar10 + 0x10) + iVar8 + -1) * 0x55) * 6;
                    if (*(int *)((int)puVar10 + 0x14) < 0) {
                      if ((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x69) != 0)
                         && (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar4 + 1) * 6] * 0x16] &
                             0x69) != 0)) {
                        uVar6 = uVar6 & 0xff;
                        *(undefined4 *)((int)puVar10 + 0x34) = 1;
                      }
                    }
                    else if (((0 < *(int *)((int)puVar10 + 0x14)) &&
                             (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x69) !=
                              0)) && (((&DAT_001921c6)
                                       [(uint)(byte)(&DAT_002d33c5)[(iVar4 + -1) * 6] * 0x16] & 0x69
                                      ) != 0)) {
                      uVar6 = uVar6 & 0xff;
                      *(undefined4 *)((int)puVar10 + 0x34) = 1;
                    }
                    iVar4 = *(int *)((int)puVar10 + 0xc) + *(int *)((int)puVar10 + 0x2c);
                    iVar7 = ((*(int *)((int)puVar10 + 0x10) + iVar8) * 0x55 + iVar4) * 6;
                    if ((char)(uVar6 >> 8) == '\0') {
                      if ((*(int *)((int)puVar10 + 0x34) != 0) &&
                         (*(undefined4 *)((int)puVar10 + 0x34) = 0,
                         ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x20) != 0))
                      {
                        *(int *)((int)puVar10 + 0x6c) = in_EAX;
                        *(int *)((int)puVar10 + 0x70) = iVar4;
                        *(undefined4 *)((int)puVar10 + -4) = 0x8353c;
                        FUN_00023de2();
                        if (((char)(extraout_ECX_05 >> 8) != '\0') ||
                           (uVar6 = extraout_ECX_05,
                           ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x10) != 0)
                           ) {
                          *(undefined4 *)((int)puVar10 + -4) = 0x8356a;
                          FUN_00082828();
                          uVar6 = extraout_ECX_06;
                        }
                      }
                    }
                    else {
                      *(int *)((int)puVar10 + 0x60) = in_EAX;
                      *(int *)((int)puVar10 + 100) = iVar4;
                      *(int *)((int)puVar10 + 0x68) = *(int *)((int)puVar10 + 0x10) + iVar8;
                      *(undefined4 *)((int)puVar10 + -4) = 0x834aa;
                      FUN_00023de2();
                      if (((char)(extraout_ECX_03 >> 8) != '\0') ||
                         (uVar6 = extraout_ECX_03,
                         ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x10) != 0))
                      {
                        *(undefined4 *)((int)puVar10 + -4) = 0x834da;
                        FUN_00082828();
                        uVar6 = extraout_ECX_04;
                      }
                      if (((&DAT_001921c6)
                           [(uint)(byte)(&DAT_002d33c5)
                                        [(*(int *)((int)puVar10 + 0xc) +
                                          *(int *)((int)puVar10 + 0x2c) +
                                         (iVar8 + *(int *)((int)puVar10 + 0x10)) * 0x55) * 6] * 0x16
                           ] & 0x69) != 0) {
                        uVar6 = uVar6 & 0xff;
                      }
                    }
                  }
                }
              } while (*(int *)((int)puVar10 + 0x28) < *(int *)((int)puVar10 + 0x4c));
            }
          }
          iVar4 = *(int *)((int)puVar10 + 0x14);
          *(int *)((int)puVar10 + 0xa4) = *(int *)((int)puVar10 + 0xa4) + 1;
          *(int *)((int)puVar10 + 0xa8) = *(int *)((int)puVar10 + 0xa8) + 0x100;
          *(int *)((int)puVar10 + 0x14) = iVar4 + 1;
        } while (iVar4 + 1 <= *(int *)((int)puVar10 + 200));
      }
      iVar4 = *(int *)((int)puVar10 + 200);
      *(int *)((int)puVar10 + 0x18) = iVar4;
      iVar8 = -iVar4;
      *(int *)((int)puVar10 + 0x18) = iVar8;
      if (-iVar4 == iVar4 || SBORROW4(iVar8,iVar4) != iVar4 * -2 < 0) {
        *(int *)((int)puVar10 + 0x74) = iVar4 << 8;
        *(int *)((int)puVar10 + 0xac) = iVar8 + *(int *)((int)puVar10 + 0x10);
        *(int *)((int)puVar10 + 0xb0) = iVar4 * -0x100;
        do {
          if ((-1 < *(int *)((int)puVar10 + 0xac)) && (*(int *)((int)puVar10 + 0xac) < 0x55)) {
            *(undefined4 *)((int)puVar10 + 0xb8) = 0x80;
            uVar6 = 0x101;
            *(int *)((int)puVar10 + 0x20) =
                 *(int *)((int)puVar10 + 0xb0) / *(int *)((int)puVar10 + 200);
            *(undefined4 *)((int)puVar10 + 0xc0) = 0;
            *(undefined4 *)((int)puVar10 + 0xc4) = 0;
            *(undefined4 *)((int)puVar10 + 0xb4) = 0;
            if (0 < *(int *)((int)puVar10 + 0x74)) {
              do {
                cVar2 = (char)(uVar6 >> 8);
                if ((cVar2 == '\0') && ((char)uVar6 == '\0')) break;
                *(int *)((int)puVar10 + 0xb4) = *(int *)((int)puVar10 + 0xb4) + 0x100;
                iVar8 = *(int *)((int)puVar10 + 0xb4) >> 8;
                *(int *)((int)puVar10 + 0xbc) =
                     *(int *)((int)puVar10 + 0xb8) + *(int *)((int)puVar10 + 0x20) >> 8;
                iVar4 = *(int *)((int)puVar10 + 0xc) - iVar8;
                *(int *)((int)puVar10 + 0xb8) =
                     *(int *)((int)puVar10 + 0xb8) + *(int *)((int)puVar10 + 0x20);
                if ((-1 < iVar4) && (*(int *)((int)puVar10 + 0xc) + iVar8 < 0x55)) {
                  if (cVar2 != '\0') {
                    iVar7 = *(int *)((int)puVar10 + 0x10) + *(int *)((int)puVar10 + 0xbc);
                    iVar9 = (iVar7 * 0x55 + iVar4 + 1) * 6;
                    if (*(int *)((int)puVar10 + 0x18) < 0) {
                      if ((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar9] * 0x16] & 0x69) != 0)
                         && (((&DAT_001921c6)
                              [(uint)(byte)(&DAT_002d33c5)[(iVar4 + (iVar7 + 1) * 0x55) * 6] * 0x16]
                             & 0x69) != 0)) {
                        uVar6 = uVar6 & 0xff;
                        *(undefined4 *)((int)puVar10 + 0xc0) = 1;
                      }
                    }
                    else if (((0 < *(int *)((int)puVar10 + 0x18)) &&
                             (((&DAT_001921c6)
                               [(uint)(byte)(&DAT_002d33c5)[(iVar4 + (iVar7 + -1) * 0x55) * 6] *
                                0x16] & 0x69) != 0)) &&
                            (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar9] * 0x16] & 0x69) !=
                             0)) {
                      uVar6 = uVar6 & 0xff;
                      *(undefined4 *)((int)puVar10 + 0xc0) = 1;
                    }
                    *(int *)((int)puVar10 + 0x9c) =
                         ((*(int *)((int)puVar10 + 0x10) + *(int *)((int)puVar10 + 0xbc)) * 0x55 +
                         (*(int *)((int)puVar10 + 0xc) - iVar8)) * 6;
                    if ((char)(uVar6 >> 8) == '\0') {
                      if ((*(int *)((int)puVar10 + 0xc0) != 0) &&
                         (*(undefined4 *)((int)puVar10 + 0xc0) = 0,
                         ((&DAT_001921c6)
                          [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0x9c)] * 0x16] & 0x20
                         ) != 0)) {
                        *(int *)((int)puVar10 + 0x80) = in_EAX;
                        *(int *)((int)puVar10 + 0x84) =
                             *(int *)((int)puVar10 + 0x10) + *(int *)((int)puVar10 + 0xbc);
                        *(undefined4 *)((int)puVar10 + -4) = 0x8386b;
                        FUN_00023de2();
                        if (((char)(extraout_ECX_09 >> 8) != '\0') ||
                           (uVar6 = extraout_ECX_09,
                           ((&DAT_001921c6)
                            [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0x9c)] * 0x16] &
                           0x10) != 0)) {
                          *(undefined4 *)((int)puVar10 + -4) = 0x838a6;
                          FUN_00082828();
                          uVar6 = extraout_ECX_10;
                        }
                      }
                    }
                    else {
                      *(int *)((int)puVar10 + 0x78) = in_EAX;
                      *(int *)((int)puVar10 + 0x7c) = *(int *)((int)puVar10 + 0xc) - iVar8;
                      *(undefined4 *)((int)puVar10 + -4) = 0x837b1;
                      FUN_00023de2();
                      if (((char)(extraout_ECX_07 >> 8) != '\0') ||
                         (uVar6 = extraout_ECX_07,
                         ((&DAT_001921c6)
                          [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0x9c)] * 0x16] & 0x10
                         ) != 0)) {
                        *(undefined4 *)((int)puVar10 + -4) = 0x837e6;
                        FUN_00082828();
                        uVar6 = extraout_ECX_08;
                      }
                      if (((&DAT_001921c6)
                           [(uint)(byte)(&DAT_002d33c5)
                                        [((*(int *)((int)puVar10 + 0xc) - iVar8) +
                                         (*(int *)((int)puVar10 + 0x10) +
                                         *(int *)((int)puVar10 + 0xbc)) * 0x55) * 6] * 0x16] & 0x69)
                          != 0) {
                        uVar6 = uVar6 & 0xff;
                      }
                    }
                  }
                  if ((char)uVar6 != '\0') {
                    iVar7 = *(int *)((int)puVar10 + 0x10) + *(int *)((int)puVar10 + 0xbc);
                    iVar4 = *(int *)((int)puVar10 + 0xc) + iVar8;
                    *(int *)((int)puVar10 + 0xa0) = (iVar7 * 0x55 + iVar4 + -1) * 6;
                    if (*(int *)((int)puVar10 + 0x18) < 0) {
                      if ((((&DAT_001921c6)
                            [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0xa0)] * 0x16] &
                           0x69) != 0) &&
                         (((&DAT_001921c6)
                           [(uint)(byte)(&DAT_002d33c5)[(iVar4 + (iVar7 + 1) * 0x55) * 6] * 0x16] &
                          0x69) != 0)) {
                        uVar3 = 1;
LAB_0008395c:
                        uVar6 = uVar6 & 0xffffff00;
                        *(undefined4 *)((int)puVar10 + 0xc4) = uVar3;
                      }
                    }
                    else if (((0 < *(int *)((int)puVar10 + 0x18)) &&
                             (((&DAT_001921c6)
                               [(uint)(byte)(&DAT_002d33c5)[*(int *)((int)puVar10 + 0xa0)] * 0x16] &
                              0x69) != 0)) &&
                            (((&DAT_001921c6)
                              [(uint)(byte)(&DAT_002d33c5)[(iVar4 + (iVar7 + -1) * 0x55) * 6] * 0x16
                              ] & 0x69) != 0)) {
                      uVar3 = 0;
                      goto LAB_0008395c;
                    }
                    iVar4 = *(int *)((int)puVar10 + 0xc) + iVar8;
                    iVar7 = ((*(int *)((int)puVar10 + 0x10) + *(int *)((int)puVar10 + 0xbc)) * 0x55
                            + iVar4) * 6;
                    if ((char)uVar6 == '\0') {
                      if ((*(int *)((int)puVar10 + 0xc4) != 0) &&
                         (*(undefined4 *)((int)puVar10 + 0xc4) = 0,
                         ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x20) != 0))
                      {
                        *(int *)((int)puVar10 + 8) = in_EAX;
                        *(int *)((int)puVar10 + 0x94) = iVar4;
                        *(undefined4 *)((int)puVar10 + -4) = 0x83a53;
                        FUN_00023de2();
                        if (((char)extraout_ECX_13 != '\0') ||
                           (uVar6 = extraout_ECX_13,
                           ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x10) != 0)
                           ) {
                          *(undefined4 *)((int)puVar10 + -4) = 0x83a84;
                          FUN_00082828();
                          uVar6 = extraout_ECX_14;
                        }
                      }
                    }
                    else {
                      *(int *)((int)puVar10 + 0x88) = in_EAX;
                      *(int *)((int)puVar10 + 0x8c) = iVar4;
                      *(int *)((int)puVar10 + 0x90) =
                           *(int *)((int)puVar10 + 0x10) + *(int *)((int)puVar10 + 0xbc);
                      *(undefined4 *)((int)puVar10 + -4) = 0x839a5;
                      FUN_00023de2();
                      if (((char)extraout_ECX_11 != '\0') ||
                         (uVar6 = extraout_ECX_11,
                         ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16] & 0x10) != 0))
                      {
                        *(undefined4 *)((int)puVar10 + -4) = 0x839de;
                        FUN_00082828();
                        uVar6 = extraout_ECX_12;
                      }
                      if (((&DAT_001921c6)
                           [(uint)(byte)(&DAT_002d33c5)
                                        [((*(int *)((int)puVar10 + 0x10) +
                                          *(int *)((int)puVar10 + 0xbc)) * 0x55 +
                                         iVar8 + *(int *)((int)puVar10 + 0xc)) * 6] * 0x16] & 0x69)
                          != 0) {
                        uVar6 = uVar6 & 0xffffff00;
                      }
                    }
                  }
                }
              } while (*(int *)((int)puVar10 + 0xb4) < *(int *)((int)puVar10 + 0x74));
            }
          }
          iVar4 = *(int *)((int)puVar10 + 0x18);
          *(int *)((int)puVar10 + 0xac) = *(int *)((int)puVar10 + 0xac) + 1;
          *(int *)((int)puVar10 + 0xb0) = *(int *)((int)puVar10 + 0xb0) + 0x100;
          *(int *)((int)puVar10 + 0x18) = iVar4 + 1;
        } while (iVar4 + 1 <= *(int *)((int)puVar10 + 200));
      }
    }
    else if (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar8 * 6] * 0x16] & 0x40) != 0) {
      if ((((-1 < local_d4 + 1) && (local_d4 + 1 < 0x55)) && (-1 < iVar4)) &&
         ((iVar4 < 0x55 &&
          (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar8 + 1) * 6] * 0x16] & 0x40) != 0)))) {
        FUN_00023de2();
        FUN_00082828();
      }
      if (((-1 < local_d4 + -1) && (local_d4 + -1 < 0x55)) &&
         ((-1 < iVar4 &&
          ((iVar4 < 0x55 &&
           (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar4 * 0x55 + local_d4 + -1) * 6] * 0x16]
            & 0x40) != 0)))))) {
        FUN_00023de2();
        FUN_00082828();
      }
      if ((((-1 < local_d4) && (local_d4 < 0x55)) && (iVar8 = iVar4 + 1, -1 < iVar8)) &&
         ((iVar8 < 0x55 &&
          (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(local_d4 + iVar8 * 0x55) * 6] * 0x16] &
           0x40) != 0)))) {
        FUN_00023de2();
        FUN_00082828();
      }
      if (((-1 < local_d4) && (local_d4 < 0x55)) &&
         ((iVar4 = iVar4 + -1, -1 < iVar4 &&
          ((iVar4 < 0x55 &&
           (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar4 * 0x55 + local_d4) * 6] * 0x16] &
            0x40) != 0)))))) {
        FUN_00023de2();
        FUN_00082828();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_083b20 (Ghidra: FUN_00083b20)
 * Prototype: byte * sub_083b20(void);
 * Address  : 0x83b20 (Size: 525 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x83f40
 * Callees  : 2 -> 0x84ff8, 0x85220
 ******************************************************************************/
byte * FUN_00083b20(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint in_EDX;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  
  uVar2 = in_EDX & 0xff;
  pbVar5 = (byte *)0x0;
  bVar4 = 0;
  if (in_EAX == 0x17) {
    pbVar3 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[(DAT_002f10ce >> 0x18) * 0xa84]];
    if (DAT_001ae9fc < pbVar3) {
      do {
        if (((((*(int *)(pbVar3 + 3) >> 0x18 ==
                (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
              ((*pbVar3 & 0x10) == 0)) && ((pbVar3[1] & 2) == 0)) &&
            ((pbVar3[7] != 0x43 &&
             (bVar4 < *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x23))))) &&
           ((((char)uVar2 != '\0' && (iVar1 = FUN_00084ff8(), uVar2 = extraout_ECX, iVar1 != 0)) ||
            (((char)uVar2 == '\0' && (iVar1 = FUN_00085220(), uVar2 = extraout_ECX_00, iVar1 != 0)))
            ))) {
          bVar4 = *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x23);
          pbVar5 = pbVar3;
        }
        pbVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x1f)];
      } while (DAT_001ae9fc < pbVar3);
    }
  }
  else {
    pbVar3 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[(DAT_002f10ce >> 0x18) * 0xa84]];
    if (pbVar3 <= DAT_001ae9fc) {
      return (byte *)0x0;
    }
    do {
      if (((((*(int *)(pbVar3 + 3) >> 0x18 ==
              (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
            ((*pbVar3 & 0x10) == 0)) && ((pbVar3[1] & 2) == 0)) &&
          ((pbVar3[7] != 0x43 && (pbVar3[0x1a] == in_EAX)))) &&
         ((bVar4 < *(byte *)((&DAT_001b0a00)
                             [CONCAT22((short)(in_EAX >> 0x10),*(undefined2 *)(pbVar3 + 100))] +
                            0x23) &&
          ((((char)uVar2 != '\0' && (iVar1 = FUN_00084ff8(), uVar2 = extraout_ECX_01, iVar1 != 0))
           || (((char)uVar2 == '\0' && (iVar1 = FUN_00085220(), uVar2 = extraout_ECX_02, iVar1 != 0)
               ))))))) {
        bVar4 = *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x23);
        pbVar5 = pbVar3;
      }
      pbVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x1f)];
    } while (DAT_001ae9fc < pbVar3);
  }
  return pbVar5;
}

/******************************************************************************
 * Function : sub_083d30 (Ghidra: FUN_00083d30)
 * Prototype: byte * sub_083d30(void);
 * Address  : 0x83d30 (Size: 528 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x83f40
 * Callees  : 2 -> 0x84ff8, 0x85220
 ******************************************************************************/
byte * FUN_00083d30(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint in_EDX;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar2 = in_EDX & 0xff;
  uVar4 = 0x7fffffff;
  pbVar5 = (byte *)0x0;
  if (in_EAX == 0x17) {
    pbVar3 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[(DAT_002f10ce >> 0x18) * 0xa84]];
    if (DAT_001ae9fc < pbVar3) {
      do {
        if (((((*(int *)(pbVar3 + 3) >> 0x18 ==
                (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
              ((*pbVar3 & 0x10) == 0)) && ((pbVar3[1] & 2) == 0)) &&
            ((pbVar3[7] != 0x43 &&
             (*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x23) < uVar4)))) &&
           ((((char)uVar2 != '\0' && (iVar1 = FUN_00084ff8(), uVar2 = extraout_ECX, iVar1 != 0)) ||
            (((char)uVar2 == '\0' && (iVar1 = FUN_00085220(), uVar2 = extraout_ECX_00, iVar1 != 0)))
            ))) {
          uVar4 = (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x23);
          pbVar5 = pbVar3;
        }
        pbVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x1f)];
      } while (DAT_001ae9fc < pbVar3);
    }
  }
  else {
    pbVar3 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[(DAT_002f10ce >> 0x18) * 0xa84]];
    if (pbVar3 <= DAT_001ae9fc) {
      return (byte *)0x0;
    }
    do {
      if (((((*(int *)(pbVar3 + 3) >> 0x18 ==
              (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
            ((*pbVar3 & 0x10) == 0)) && ((pbVar3[1] & 2) == 0)) &&
          ((pbVar3[7] != 0x43 && (pbVar3[0x1a] == in_EAX)))) &&
         ((*(byte *)((&DAT_001b0a00)
                     [CONCAT22((short)(in_EAX >> 0x10),*(undefined2 *)(pbVar3 + 100))] + 0x23) <
           uVar4 && ((((char)uVar2 != '\0' &&
                      (iVar1 = FUN_00084ff8(), uVar2 = extraout_ECX_01, iVar1 != 0)) ||
                     (((char)uVar2 == '\0' &&
                      (iVar1 = FUN_00085220(), uVar2 = extraout_ECX_02, iVar1 != 0)))))))) {
        uVar4 = (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x23);
        pbVar5 = pbVar3;
      }
      pbVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x1f)];
    } while (DAT_001ae9fc < pbVar3);
  }
  return pbVar5;
}

/******************************************************************************
 * Function : sub_083f40 (Ghidra: FUN_00083f40)
 * Prototype: byte * sub_083f40(void);
 * Address  : 0x83f40 (Size: 1457 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x84704, 0x84750
 * Callees  : 4 -> 0x83b20, 0x83d30, 0x84ff8, 0x85220
 ******************************************************************************/
byte * FUN_00083f40(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  int in_EDX;
  int iVar3;
  char unaff_BL;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  iVar3 = DAT_002f10ce >> 0x18;
  pbVar5 = (byte *)0x0;
  pbVar4 = (byte *)0x0;
  if (in_EAX == 0xffffffff) {
    if ((in_EDX == -1) ||
       (pbVar4 = (&DAT_001ae9fc)[*(ushort *)(&DAT_002e1a8b + in_EDX * 2 + iVar3 * 0x1508)],
       pbVar4 <= DAT_001ae9fc)) goto LAB_000840d6;
    if ((((*pbVar4 & 1) != 0) &&
        (((pbVar4[0x1f] == 5 && ((*pbVar4 & 0x10) == 0)) && ((pbVar4[1] & 2) == 0)))) &&
       ((pbVar4[7] != 0x43 &&
        ((uint)(byte)(&DAT_0019d0f3)[iVar3 * 0x4ef] == *(int *)(pbVar4 + 3) >> 0x18)))) {
      uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar4[7] * 0x29];
      if (uVar1 == 6) {
        uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar4[8] * 0x29];
      }
      if (in_EDX == *(int *)(&DAT_0019133e + uVar1 * 4)) goto LAB_000840b9;
    }
    pbVar4 = (byte *)0x0;
    *(undefined2 *)(&DAT_002e1a8b + in_EDX * 2 + iVar3 * 0x1508) = 0;
  }
  else {
    pbVar4 = (&DAT_001ae9fc)[*(ushort *)(&DAT_002e1a4b + in_EAX * 2 + iVar3 * 0x1508)];
    if (pbVar4 <= DAT_001ae9fc) goto LAB_000840d6;
    if ((((((*pbVar4 & 1) == 0) || (pbVar4[0x1f] != 5)) || ((*pbVar4 & 0x10) != 0)) ||
        (((pbVar4[1] & 2) != 0 || (pbVar4[7] == 0x43)))) ||
       (*(int *)(pbVar4 + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar3 * 0x4ef])) {
      *(undefined2 *)(&DAT_002e1a4b + in_EAX * 2 + iVar3 * 0x1508) = 0;
      pbVar4 = (byte *)0x0;
      goto LAB_000840d6;
    }
LAB_000840b9:
    pbVar4 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x1f)];
  }
LAB_000840d6:
  if ((in_EDX == -1) && (in_EAX != 0xffffffff)) {
    if ((DAT_003db526 == '\0') && (DAT_003db532 == '\0')) {
      pbVar4 = (byte *)FUN_00083b20();
      in_EAX = extraout_ECX_00;
    }
    else {
      pbVar4 = (byte *)FUN_00083d30();
      in_EAX = extraout_ECX;
    }
    pbVar6 = pbVar5;
    if (pbVar4 != (byte *)0x0) {
      pbVar6 = pbVar4;
    }
  }
  else {
    for (; (pbVar6 = pbVar5, DAT_001ae9fc < pbVar4 && (pbVar4 != (byte *)0x0));
        pbVar4 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x1f)]) {
      uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar4[7] * 0x29];
      if (uVar1 == 6) {
        uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar4[8] * 0x29];
      }
      if ((((((*(int *)(pbVar4 + 3) >> 0x18 ==
               (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) &&
             ((*pbVar4 & 0x10) == 0)) && ((pbVar4[1] & 2) == 0)) &&
           ((pbVar4[7] != 0x43 && ((in_EAX == 0xffffffff || (pbVar4[0x1a] == in_EAX)))))) &&
          ((in_EDX == -1 || (in_EDX == *(int *)(&DAT_0019133e + uVar1 * 4))))) &&
         (((pbVar6 = pbVar4, unaff_BL != '\0' &&
           (iVar2 = FUN_00084ff8(), in_EAX = extraout_ECX_01, iVar2 != 0)) ||
          ((unaff_BL == '\0' && (iVar2 = FUN_00085220(), in_EAX = extraout_ECX_02, iVar2 != 0))))))
      break;
    }
  }
  if (pbVar6 <= DAT_001ae9fc) {
    pbVar4 = pbVar6;
    if (((in_EAX == 0x17) || (in_EAX == 0xffffffff)) &&
       (pbVar5 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[iVar3 * 0xa84]], DAT_001ae9fc < pbVar5)) {
      do {
        uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar5[7] * 0x29];
        if (uVar1 == 6) {
          uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar5[8] * 0x29];
        }
      } while (((((((*(int *)(pbVar5 + 3) >> 0x18 !=
                     (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) ||
                   ((*pbVar5 & 0x10) != 0)) || (((pbVar5[1] & 2) != 0 || (pbVar5[7] == 0x43)))) ||
                 ((in_EAX != 0xffffffff && (pbVar5[0x1a] != in_EAX)))) ||
                ((in_EDX != -1 && (in_EDX != *(int *)(&DAT_0019133e + uVar1 * 4))))) ||
               (((pbVar4 = pbVar5, unaff_BL == '\0' ||
                 (iVar2 = FUN_00084ff8(), in_EAX = extraout_ECX_03, iVar2 == 0)) &&
                ((unaff_BL != '\0' || (iVar2 = FUN_00085220(), in_EAX = extraout_ECX_04, iVar2 == 0)
                 ))))) &&
              (pbVar5 = (&DAT_001ae9fc)
                        [*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0x1f)],
              pbVar4 = pbVar6, DAT_001ae9fc < pbVar5));
    }
    pbVar6 = pbVar4;
    if ((pbVar4 == (byte *)0x0) &&
       (pbVar5 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[iVar3 * 0xa84]], DAT_001ae9fc < pbVar5)) {
      do {
        uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar5[7] * 0x29];
        if (uVar1 == 6) {
          uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar5[8] * 0x29];
        }
      } while (((((((*(int *)(pbVar5 + 3) >> 0x18 !=
                     (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) ||
                   ((*pbVar5 & 0x10) != 0)) || ((pbVar5[1] & 2) != 0)) || (pbVar5[7] == 0x43)) ||
                (((in_EAX != 0xffffffff && (pbVar5[0x1a] != in_EAX)) ||
                 ((in_EDX != -1 && (in_EDX != *(int *)(&DAT_0019133e + uVar1 * 4))))))) ||
               (((pbVar6 = pbVar5, unaff_BL == '\0' ||
                 (iVar3 = FUN_00084ff8(), in_EAX = extraout_ECX_05, iVar3 == 0)) &&
                ((unaff_BL != '\0' || (iVar3 = FUN_00085220(), in_EAX = extraout_ECX_06, iVar3 == 0)
                 ))))) &&
              (pbVar5 = (&DAT_001ae9fc)
                        [*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0x1f)],
              pbVar6 = pbVar4, DAT_001ae9fc < pbVar5));
    }
  }
  if (pbVar6 != (byte *)0x0) {
    iVar3 = (DAT_002f10ce >> 0x18) * 0x1508;
    *(undefined2 *)(&DAT_002e1a4b + (uint)pbVar6[0x1a] * 2 + iVar3) = *(undefined2 *)(pbVar6 + 0x1b)
    ;
    uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar6[7] * 0x29];
    if (uVar1 == 6) {
      uVar1 = (uint)(byte)(&DAT_0018c4be)[(uint)pbVar6[8] * 0x29];
    }
    *(undefined2 *)(&DAT_002e1a8b + *(int *)(&DAT_0019133e + uVar1 * 4) * 2 + iVar3) =
         *(undefined2 *)(pbVar6 + 0x1b);
  }
  return pbVar6;
}

/******************************************************************************
 * Function : sub_0844f4 (Ghidra: FUN_000844f4)
 * Prototype: undefined2 sub_0844f4(void);
 * Address  : 0x844f4 (Size: 527 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x47bcd
 * Callees  : 1 -> 0x10575
 ******************************************************************************/
undefined2 FUN_000844f4(void)

{
  undefined2 uVar1;
  ushort uVar2;
  byte in_AL;
  undefined2 *extraout_ECX;
  undefined2 *puVar3;
  undefined2 *extraout_ECX_00;
  undefined2 *extraout_ECX_01;
  uint in_EDX;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar4 = (uint)in_AL;
  pbVar6 = (&DAT_001ae9fc)[in_EDX & 0xffff];
  puVar3 = &DAT_002e0589 + uVar4 * 0xa84;
  if (((((*pbVar6 & 1) != 0) && (pbVar6[0x1f] == 5)) && ((*pbVar6 & 0x10) == 0)) &&
     (((pbVar6[1] & 2) == 0 && (pbVar6[7] != 0x43)))) {
    pbVar6 = (&DAT_001ae9fc)
             [*(ushort *)
               ((&DAT_001b0a00)
                [*(ushort *)
                  ((int)(&DAT_001ae9fc)[*(ushort *)(&DAT_002e1700 + uVar4 * 0x1508)] + 100)] + 0x1f)
             ];
    if ((((*pbVar6 & 1) != 0) && ((pbVar6[0x1f] == 5 && ((*pbVar6 & 0x10) == 0)))) &&
       (((pbVar6[1] & 2) == 0 && (pbVar6[7] != 0x43)))) {
      for (; DAT_001ae9fc < pbVar6;
          pbVar6 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar6 + 100)] + 0x1f)])
      {
        uVar7 = FUN_00010575();
        pbVar6 = (byte *)((ulonglong)uVar7 >> 0x20);
        if ((((((int)uVar7 != 0) && ((*pbVar6 & 1) != 0)) && (pbVar6[0x1f] == 5)) &&
            (((*pbVar6 & 0x10) == 0 && ((pbVar6[1] & 2) == 0)))) && (pbVar6[7] != 0x43)) {
          uVar1 = *(undefined2 *)(pbVar6 + 0x1b);
          *(undefined2 *)((int)extraout_ECX_00 + 0x1177) = uVar1;
          return uVar1;
        }
        puVar3 = extraout_ECX_00;
      }
    }
    uVar2 = *(ushort *)((int)puVar3 + 0x2d);
    while( true ) {
      if (((&DAT_001ae9fc)[uVar2] == (&DAT_001ae9fc)[in_EDX & 0xffff]) ||
         ((&DAT_001ae9fc)[uVar2] <= DAT_001ae9fc)) {
        return *(undefined2 *)((int)puVar3 + 0x1177);
      }
      uVar7 = FUN_00010575();
      pbVar6 = (byte *)((ulonglong)uVar7 >> 0x20);
      if (((((int)uVar7 != 0) && ((*pbVar6 & 1) != 0)) && (pbVar6[0x1f] == 5)) &&
         ((((*pbVar6 & 0x10) == 0 && ((pbVar6[1] & 2) == 0)) && (pbVar6[7] != 0x43)))) break;
      uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar6 + 100)] + 0x1f);
      puVar3 = extraout_ECX_01;
    }
    uVar1 = *(undefined2 *)(pbVar6 + 0x1b);
    *(undefined2 *)((int)extraout_ECX_01 + 0x1177) = uVar1;
    return uVar1;
  }
  if (DAT_001ae9fc < (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[uVar4 * 0xa84]]) {
    do {
      uVar7 = FUN_00010575();
      iVar5 = (int)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 0) {
        uVar1 = *(undefined2 *)(iVar5 + 0x1b);
        *(undefined2 *)((int)extraout_ECX + 0x1177) = uVar1;
        return uVar1;
      }
      puVar3 = extraout_ECX;
    } while (DAT_001ae9fc <
             (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x1f)]);
  }
  *(undefined2 *)((int)puVar3 + 0x1177) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_084704 (Ghidra: FUN_00084704)
 * Prototype: void sub_084704(void);
 * Address  : 0x84704 (Size: 76 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5a18a, 0x5a22b
 * Callees  : 2 -> 0x5ddee, 0x83f40
 ******************************************************************************/
void FUN_00084704(void)

{
  int iVar1;
  
  iVar1 = FUN_00083f40();
  if (iVar1 != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_084750 (Ghidra: FUN_00084750)
 * Prototype: int sub_084750(void);
 * Address  : 0x84750 (Size: 131 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5a1b6
 * Callees  : 2 -> 0x5ddee, 0x83f40
 ******************************************************************************/
int FUN_00084750(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int unaff_EBX;
  
  iVar1 = FUN_00083f40();
  if ((iVar1 != 0) &&
     ((extraout_ECX == -1 ||
      (*(short *)(&DAT_002e09ad + extraout_ECX * 2 + in_EAX * 6 + unaff_EBX * 0x1508) != 0)))) {
    FUN_0005ddee(0,0);
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0847d4 (Ghidra: FUN_000847d4)
 * Prototype: undefined4 sub_0847d4(void);
 * Address  : 0x847d4 (Size: 136 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4e120
 * Callees  : 3 -> 0x49dd9, 0x49eff, 0x61bde
 ******************************************************************************/
undefined4 FUN_000847d4(void)

{
  uint in_EAX;
  int extraout_ECX;
  int iVar1;
  int extraout_ECX_00;
  int in_EDX;
  int extraout_EDX;
  
  iVar1 = (&DAT_001ae9fc)[in_EAX & 0xffff];
  if (*(short *)(&DAT_0019d502 + in_EDX * 0x4ef) == 0) {
    FUN_00061bde();
    iVar1 = extraout_ECX;
    in_EDX = extraout_EDX;
  }
  if ((byte)(&DAT_002e05ec)[in_EDX * 0x1508] < 8) {
    *(undefined2 *)(&DAT_0019d506 + in_EDX * 0x4ef) = *(undefined2 *)(iVar1 + 0x1b);
    *(undefined4 *)(&DAT_0019d508 + in_EDX * 0x4ef) = *(undefined4 *)(iVar1 + 9);
    FUN_00049eff();
    if (*(char *)(extraout_ECX_00 + 0x1f) == '\x05') {
      FUN_00049dd9();
    }
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_08485c (Ghidra: FUN_0008485c)
 * Prototype: undefined4 sub_08485c(void);
 * Address  : 0x8485c (Size: 167 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4ac70, 0x84904
 * Callees  : 2 -> 0x1836b, 0x6edb9
 ******************************************************************************/
undefined4 FUN_0008485c(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar3;
  int iVar2;
  
  iVar3 = in_EDX * 0x1508;
  if ((byte)(&DAT_002e05ec)[iVar3] < 8) {
    if (*(short *)(&DAT_002e05bc + iVar3) != 0) {
      iVar2 = iVar3 + 0x2e0595;
      do {
        iVar1 = iVar2 + -2;
        *(undefined2 *)(iVar2 + 0x35) = *(undefined2 *)(iVar2 + 0x33);
        iVar2 = iVar1;
      } while (iVar1 != iVar3 + 0x2e0587);
    }
    (&DAT_002e05ec)[iVar3] = (&DAT_002e05ec)[iVar3] + '\x01';
    *(undefined2 *)(&DAT_002e05bc + iVar3) = *(undefined2 *)(in_EAX + 0x1b);
    if (*(char *)(in_EAX + 0x1f) == '\x05') {
      FUN_0001836b();
    }
    if (((uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] == *(int *)(in_EAX + 3) >> 0x18
        ) && (*(char *)(in_EAX + 0x1f) == '\x05')) {
      FUN_0006edb9();
    }
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_thing_hand_084904 (Ghidra: FUN_00084904)
 * Prototype: undefined4 dk_thing_hand_084904(void);
 * Address  : 0x84904 (Size: 194 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:2814 ("INVALID THING FOR HAND")
 * Naming   : String 'INVALID THING FOR HAND'
 * Callers  : 1 -> 0x48c77
 * Callees  : 8 -> 0x49dd9, 0x50ca9, 0x64a5f, 0x8485c, 0x8ccec, 0xc57c4, 0xdd2f0, 0xddaf0
 * Strings  :
 *   - 0x16a02d: "creature.cpp"
 *   - 0x16a016: "INVALID THING FOR HAND"
 ******************************************************************************/
undefined4 FUN_00084904(void)

{
  char cVar1;
  byte *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar3 = (undefined4 *)&stack0xfffffff0;
  if (((*in_EAX & 0x10) == 0) && ((in_EAX[1] & 2) == 0)) {
    if (in_EAX[0x1f] == 5) {
LAB_0008494e:
      if (in_EAX[0x1f] == 5) {
        uStack_14 = 0x84964;
        FUN_00049dd9();
        uStack_14 = 0x8496b;
        cVar1 = FUN_00064a5f();
        if (cVar1 == '\0') {
          return 0;
        }
        uStack_14 = 2;
        uStack_18 = 0;
        puVar3 = &uStack_1c;
        uStack_1c = 0xffffffff;
        FUN_000dd2f0();
        FUN_0008ccec();
      }
      *(undefined4 *)((int)puVar3 + -4) = 0x849a5;
      FUN_0008485c();
      *(undefined4 *)((int)puVar3 + -4) = 0x849ac;
      FUN_00050ca9();
      in_EAX[0x4f] = in_EAX[0x4f] | 1;
      *in_EAX = *in_EAX | 0x10;
      return 1;
    }
    if (in_EAX[0x1f] == 1) {
      uStack_14 = 0x8492f;
      iVar2 = FUN_000c57c4();
      if (iVar2 != 0) goto LAB_0008494e;
    }
  }
  uStack_14 = 0x84947;
  FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 2814, "INVALID THING FOR HAND") */
  return 0;
}

/******************************************************************************
 * Function : sub_0849c8 (Ghidra: FUN_000849c8)
 * Prototype: undefined4 sub_0849c8(void);
 * Address  : 0x849c8 (Size: 975 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 18 -> 0x49eff, 0x4fbd8, 0x50c38, 0x64b0c, 0x6e9ab, 0x6edb9, 0x6ee65, 0x72af4, 0x7dbc0, 0x85ba4 ...
 ******************************************************************************/
undefined4 FUN_000849c8(void)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  byte in_AL;
  short sVar4;
  int iVar5;
  short in_CX;
  short extraout_DX;
  int in_EDX;
  uint uVar6;
  int unaff_EBX;
  int iVar7;
  short *psVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  short local_30;
  short local_2e;
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  int local_20;
  int local_1c;
  
  psVar8 = &local_30;
  if ((&DAT_002e05ec)[(uint)in_AL * 0x1508] == '\0') {
    return 0;
  }
  uStack_34 = 0x84a27;
  local_20 = in_EDX;
  local_1c = in_EDX;
  iVar5 = FUN_000dc19c();
  if (iVar5 == 0) {
LAB_00084a69:
    bVar3 = false;
  }
  else {
    local_28 = (short)(local_20 << 8) + 0x80;
    local_26 = (short)(unaff_EBX << 8) + 0x80;
    uStack_34 = 0x84a53;
    local_24 = FUN_000b28e8();
    uStack_34 = 0x84a61;
    iVar5 = FUN_0007dbc0();
    if (iVar5 != 0) goto LAB_00084a69;
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  pbVar2 = (byte *)(&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + (uint)in_AL * 0x1508)];
  uVar6 = (&DAT_001ae9fc)[*(ushort *)(&DAT_0019d0fd + (uint)in_AL * 0x4ef)];
  if (pbVar2[0x1f] == 1) {
    uStack_34 = 0x84abd;
    uVar10 = FUN_000c57a4();
    uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 != 0) {
      if (((DAT_001ae9fc < uVar6) && (*(char *)(uVar6 + 0x1f) == '\x05')) &&
         (*(char *)(uVar6 + 0x1a) != '\x17')) {
        uStack_34 = 0x84b02;
        FUN_00085ba4();
      }
      else {
        local_2e = (short)(unaff_EBX << 8) + 0x80;
        local_2c = 0;
        local_30 = (short)(local_1c << 8) + 0x80;
        uStack_34 = 0x84b36;
        FUN_00085df8();
        if (in_AL == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
          uStack_34 = 0x84b59;
          FUN_0006e9ab();
        }
      }
      uStack_34 = 0x84b62;
      FUN_00072af4();
      psVar9 = &local_30;
      goto LAB_00084cec;
    }
  }
  if (((pbVar2[0x1f] == 1) && (pbVar2[0x1a] == 10)) &&
     ((DAT_001ae9fc < uVar6 &&
      ((*(char *)(uVar6 + 0x1f) == '\x05' && (*(char *)(uVar6 + 0x1a) != '\x17')))))) {
    uStack_34 = 0x84bbc;
    FUN_00085cc4();
    psVar9 = &local_30;
  }
  else {
    pbVar2[0x11] = 0;
    pbVar2[0x12] = 8;
    *(short *)(pbVar2 + 0xd) = (short)(local_1c << 8) + 0x80;
    *(short *)(pbVar2 + 0xf) = (short)(unaff_EBX << 8) + 0x80;
    uStack_34 = 0x84bed;
    FUN_000b3850();
    uStack_34 = 0x84bf8;
    FUN_000b3788();
    uStack_34 = 0x84c17;
    sVar4 = FUN_000b3788();
    *(short *)(pbVar2 + 0x11) = sVar4 + extraout_DX;
    pbVar2[0x4f] = pbVar2[0x4f] & 0xfe;
    *pbVar2 = *pbVar2 & 0xef;
    uStack_34 = 0x84c34;
    FUN_00050c38();
    if (pbVar2[0x1f] == 5) {
      uStack_34 = 0x84c4f;
      FUN_00064b0c();
      uStack_34 = 0x84c5d;
      FUN_0006ee65();
      uStack_34 = 0x84c69;
      FUN_0006edb9();
      *(undefined4 *)(&DAT_002e1a37 + (uint)in_AL * 0x1508) = DAT_002e8bee;
      psVar9 = &local_30;
    }
    else {
      psVar9 = &local_30;
      if (pbVar2[0x1f] == 1) {
        if (pbVar2[0x1a] == 10) {
          uStack_34 = 2;
          uStack_38 = 0;
          psVar8 = (short *)&uStack_3c;
          uStack_3c = 0xffffffff;
          FUN_0008ccec();
        }
        bVar1 = pbVar2[7];
        pbVar2[7] = 4;
        pbVar2[8] = bVar1;
        psVar9 = psVar8;
      }
    }
  }
LAB_00084cec:
  if ((&DAT_002e05ec)[(uint)in_AL * 0x1508] == '\x01') {
    *(undefined4 *)((int)psVar9 + -4) = 0x84d1f;
    FUN_00049eff();
  }
  iVar5 = 0;
  do {
    iVar7 = (uint)in_AL * 0x1508;
    iVar5 = iVar5 + 2;
    *(undefined2 *)(&DAT_002e05ba + iVar5 + iVar7) = *(undefined2 *)(&DAT_002e05bc + iVar5 + iVar7);
  } while (iVar5 != 0xe);
  (&DAT_002e05ec)[iVar7] = (&DAT_002e05ec)[iVar7] + -1;
  *(undefined2 *)(&DAT_002e05bc + (uint)(byte)(&DAT_002e05ec)[iVar7] * 2 + iVar7) = 0;
  if (in_CX != 0) {
    *(undefined4 *)((int)psVar9 + -4) = 0x84d84;
    FUN_0004fbd8();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_084d98 (Ghidra: FUN_00084d98)
 * Prototype: uint sub_084d98(void);
 * Address  : 0x84d98 (Size: 114 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1e119, 0x1e226, 0x48897
 * Callees  : 3 -> 0x7dbc0, 0xb28e8, 0xdc19c
 ******************************************************************************/
uint FUN_00084d98(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  short in_DX;
  short sVar4;
  
  iVar2 = FUN_000dc19c();
  uVar3 = 0;
  if (iVar2 != 0) {
    sVar4 = in_DX * 0x100 + 0x80;
    uVar1 = FUN_000b28e8(sVar4);
    uVar3 = FUN_0007dbc0(sVar4,uVar1);
    if (uVar3 == 0) {
      return 1;
    }
  }
  return uVar3 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_thing_already_dragged_something_084e0c (Ghidra: FUN_00084e0c)
 * Prototype: void dk_thing_already_dragged_something_084e0c(void);
 * Address  : 0x84e0c (Size: 127 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:3003 ("Thing is already dragging something")
 * Naming   : String 'Thing is already dragged by something'
 * Callers  : 1 -> 0x641a6
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a060: "creature.cpp"
 *   - 0x16a091: "creature.cpp"
 *   - 0x16a03a: "Thing is already dragged by something"
 *   - 0x16a06d: "Thing is already dragging something"
 ******************************************************************************/
void FUN_00084e0c(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x6e) == 0) &&
     (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) == 0)) {
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x6e) =
         *(undefined2 *)(in_EAX + 0x1b);
    *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 1;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) =
         *(undefined2 *)(in_EDX + 0x1b);
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 3003, "Thing is already dragging something") */
  return;
}

/******************************************************************************
 * Function : dk_thing_dragged_something_084e8c (Ghidra: FUN_00084e8c)
 * Prototype: void dk_thing_dragged_something_084e8c(void);
 * Address  : 0x84e8c (Size: 118 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:3025 ("Thing is not dragging something")
 * Naming   : String 'Thing is not dragged by something'
 * Callers  : 3 -> 0x64e28, 0x826a0, 0x82710
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a0c0: "creature.cpp"
 *   - 0x16a0ed: "creature.cpp"
 *   - 0x16a09e: "Thing is not dragged by something"
 *   - 0x16a0cd: "Thing is not dragging something"
 ******************************************************************************/
void FUN_00084e8c(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x6e) != 0) &&
     (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) != 0)) {
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x6e) = 0;
    *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) & 0xfe;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) = 0;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 3025, "Thing is not dragging something") */
  return;
}

/******************************************************************************
 * Function : sub_084f04 (Ghidra: FUN_00084f04)
 * Prototype: undefined8 sub_084f04(void);
 * Address  : 0x84f04 (Size: 241 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x15b37, 0x63dd3, 0xe1b88
 * Callees  : 2 -> 0x1614f, 0x189d4
 ******************************************************************************/
undefined8 FUN_00084f04(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_1c;
  
  iVar6 = 0;
  iVar5 = 0;
  local_1c = 0;
  do {
    if ((((((&DAT_0019d0c8)[iVar6] & 1) != 0) &&
         (uVar4 = *(int *)(in_EAX + 3) >> 0x18, uVar4 != local_1c)) &&
        (*(short *)((int)&DAT_002e0589 + iVar5) != 0)) &&
       ((((uVar1 = (uint)DAT_002eb543, uVar1 == local_1c || (uVar4 == uVar1)) ||
         ((((uint)(byte)(&DAT_0019d0f2)[iVar6] &
           1 << ((byte)((uint)*(undefined4 *)(in_EAX + 3) >> 0x18) & 0x1f)) == 0 ||
          ((uVar4 == uVar1 || (uVar1 == local_1c)))))) ||
        (((uint)(byte)(&DAT_0019d0f2)[uVar4 * 0x4ef] & 1 << ((byte)local_1c & 0x1f)) == 0)))) {
      FUN_000189d4();
      iVar2 = FUN_0001614f();
      uVar3 = extraout_ECX;
      if (iVar2 != 0) goto LAB_00084feb;
    }
    iVar6 = iVar6 + 0x4ef;
    local_1c = local_1c + 1;
    iVar5 = iVar5 + 0x1508;
  } while ((int)local_1c < 5);
  uVar3 = 0;
LAB_00084feb:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_084ff8 (Ghidra: FUN_00084ff8)
 * Prototype: undefined4 sub_084ff8(void);
 * Address  : 0x84ff8 (Size: 552 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x1a384, 0x1c7fa, 0x1e119, 0x1f153, 0x1f352, 0x1f538, 0x1f754, 0x20436, 0x20826, 0x4e120 ...
 * Callees  : 1 -> 0xc57c4
 ******************************************************************************/
undefined4 FUN_00084ff8(void)

{
  byte *in_EAX;
  int iVar1;
  byte in_DL;
  uint uVar2;
  byte bVar3;
  
  if (in_EAX[0x1f] != 5) {
    if ((in_EAX[0x1f] == 1) && (iVar1 = FUN_000c57c4(), iVar1 != 0)) {
      return 1;
    }
    return 0;
  }
  if (((((DAT_002ed402 != 0) && ((uint)(DAT_002ed402 + DAT_002ee894) <= DAT_002e8bee)) ||
       (bVar3 = in_EAX[7], bVar3 == 0x43)) || (((*in_EAX & 0x10) != 0 || ((in_EAX[1] & 2) != 0))))
     || ((*(int *)(in_EAX + 0x5c) >> 0x10 < 1 ||
         (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) != 0)))) {
    return 0;
  }
  if (bVar3 == 0xe) {
    bVar3 = in_EAX[8];
  }
  if (bVar3 == 0x58) {
    return 0;
  }
  bVar3 = in_EAX[7];
  if (bVar3 == 0xe) {
    bVar3 = in_EAX[8];
  }
  if (bVar3 != 0x5c) {
    bVar3 = in_EAX[7];
    if (bVar3 == 0xe) {
      bVar3 = in_EAX[8];
    }
    uVar2 = (uint)CONCAT11(bVar3,in_DL);
    if (bVar3 != 0x5f) {
      if (*(int *)(in_EAX + 3) >> 0x18 == (uint)in_DL) {
        bVar3 = in_EAX[7];
        if (bVar3 == 0xe) {
          bVar3 = in_EAX[8];
        }
        if (bVar3 != 0x29) {
          bVar3 = in_EAX[7];
          if (bVar3 == 0xe) {
            bVar3 = in_EAX[8];
          }
          uVar2 = (uint)CONCAT11(bVar3,in_DL);
          if (bVar3 != 0x28) {
            bVar3 = in_EAX[7];
            if (bVar3 == 0xe) {
              bVar3 = in_EAX[8];
            }
            uVar2 = (uint)CONCAT11(bVar3,in_DL);
            if (bVar3 != 0x2b) {
              bVar3 = in_EAX[7];
              if (bVar3 == 0xe) {
                bVar3 = in_EAX[8];
              }
              uVar2 = (uint)CONCAT11(bVar3,in_DL);
              if (bVar3 != 0x2a) {
                return 1;
              }
            }
          }
        }
        if (*(int *)(&DAT_002ddd1b +
                    (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) * 0x45) >>
            0x18 != (uVar2 & 0xff)) {
          return 0;
        }
      }
      else {
        bVar3 = in_EAX[7];
        if (bVar3 == 0xe) {
          bVar3 = in_EAX[8];
        }
        uVar2 = (uint)CONCAT11(bVar3,in_DL);
        if (bVar3 != 0x29) {
          bVar3 = in_EAX[7];
          if (bVar3 == 0xe) {
            bVar3 = in_EAX[8];
          }
          uVar2 = (uint)CONCAT11(bVar3,in_DL);
          if (bVar3 != 0x28) {
            bVar3 = in_EAX[7];
            if (bVar3 == 0xe) {
              bVar3 = in_EAX[8];
            }
            uVar2 = (uint)CONCAT11(bVar3,in_DL);
            if (bVar3 != 0x2b) {
              bVar3 = in_EAX[7];
              if (bVar3 == 0xe) {
                bVar3 = in_EAX[8];
              }
              uVar2 = (uint)CONCAT11(bVar3,in_DL);
              if (bVar3 != 0x2a) {
                return 0;
              }
            }
          }
        }
        if (*(int *)(&DAT_002ddd1b +
                    (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) * 0x45) >>
            0x18 != (uVar2 & 0xff)) {
          return 0;
        }
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_085220 (Ghidra: FUN_00085220)
 * Prototype: undefined4 sub_085220(void);
 * Address  : 0x85220 (Size: 213 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x83b20, 0x83d30, 0x83f40
 * Callees  : 1 -> 0xc57c4
 ******************************************************************************/
undefined4 FUN_00085220(void)

{
  byte *in_EAX;
  int iVar1;
  byte in_DL;
  byte bVar2;
  
  if (in_EAX[0x1f] != 5) {
    if ((in_EAX[0x1f] == 1) && (iVar1 = FUN_000c57c4(), iVar1 != 0)) {
      return 1;
    }
    return 0;
  }
  if ((((DAT_002ed402 == 0) || (DAT_002e8bee < (uint)(DAT_002ed402 + DAT_002ee894))) &&
      (bVar2 = in_EAX[7], bVar2 != 0x43)) &&
     ((((*in_EAX & 0x10) == 0 && ((in_EAX[1] & 2) == 0)) && (0 < *(int *)(in_EAX + 0x5c) >> 0x10))))
  {
    if (bVar2 == 0xe) {
      bVar2 = in_EAX[8];
    }
    if (bVar2 != 0x58) {
      bVar2 = in_EAX[7];
      if (bVar2 == 0xe) {
        bVar2 = in_EAX[8];
      }
      if (bVar2 != 0x5c) {
        bVar2 = in_EAX[7];
        if (bVar2 == 0xe) {
          bVar2 = in_EAX[8];
        }
        if (bVar2 != 0x5f) {
          if (*(int *)(in_EAX + 3) >> 0x18 != (uint)in_DL) {
            return 0;
          }
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_085450 (Ghidra: FUN_00085450)
 * Prototype: byte * sub_085450(void);
 * Address  : 0x85450 (Size: 338 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4e585
 * Callees  : 1 -> 0x4fe44
 ******************************************************************************/
byte * FUN_00085450(void)

{
  byte in_AL;
  int iVar1;
  int in_EDX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  byte *pbVar5;
  int iVar6;
  int local_24;
  byte *local_20;
  
  local_20 = (byte *)0x0;
  iVar6 = 0x7fffffff;
  local_24 = 0;
  do {
    iVar2 = (*(int *)(&DAT_0018b6bf + local_24) >> 0x18) +
            ((in_EDX + (in_EDX >> 0x1f) * -0x100) - (uint)((in_EDX >> 0x1f) << 7 < 0) >> 8 & 0xff);
    iVar1 = (*(int *)(&DAT_0018b6c0 + local_24) >> 0x18) +
            ((unaff_EBX + (unaff_EBX >> 0x1f) * -0x100) - (uint)((unaff_EBX >> 0x1f) << 7 < 0) >> 8
            & 0xff);
    if (((((-1 < iVar2) && (iVar2 < 0xff)) && (-1 < iVar1)) &&
        ((iVar1 < 0xff &&
         (uVar3 = *(uint *)((int)&DAT_00279203 + (iVar2 + iVar1 * 0x100) * 5 + 1),
         (uVar3 >> 0x1c & 1 << (in_AL & 0x1f)) != 0)))) &&
       (pbVar5 = (&DAT_001ae9fc)[(uVar3 & 0x3fffff) >> 0xb], DAT_001ae9fc < pbVar5)) {
      do {
        if ((((*pbVar5 & 0x10) == 0) && ((pbVar5[1] & 2) == 0)) &&
           ((pbVar5[7] != 0x43 &&
            ((iVar1 = FUN_0004fe44(), iVar1 != 0 &&
             (uVar3 = (int)(in_EDX - (uint)*(ushort *)(pbVar5 + 0xd)) >> 0x1f,
             uVar4 = (int)(unaff_EBX - (uint)*(ushort *)(pbVar5 + 0xf)) >> 0x1f,
             iVar1 = ((in_EDX - (uint)*(ushort *)(pbVar5 + 0xd) ^ uVar3) - uVar3) +
                     ((unaff_EBX - (uint)*(ushort *)(pbVar5 + 0xf) ^ uVar4) - uVar4), iVar1 < iVar6)
             ))))) {
          iVar6 = iVar1;
          local_20 = pbVar5;
        }
        pbVar5 = (&DAT_001ae9fc)[*(ushort *)(pbVar5 + 2)];
      } while (DAT_001ae9fc < pbVar5);
    }
    local_24 = local_24 + 2;
  } while (local_24 != 0x12);
  return local_20;
}

/******************************************************************************
 * Function : sub_085598 (Ghidra: FUN_00085598)
 * Prototype: byte * sub_085598(void);
 * Address  : 0x85598 (Size: 351 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x45fd1, 0x5f6c5
 * Callees  : 2 -> 0x4fe44, 0x84ff8
 ******************************************************************************/
byte * FUN_00085598(void)

{
  byte in_AL;
  int iVar1;
  int in_EDX;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int local_24;
  byte *local_20;
  
  local_20 = (byte *)0x0;
  iVar6 = 0x7fffffff;
  local_24 = 0;
  do {
    iVar1 = (*(int *)(&DAT_0018b6bf + local_24) >> 0x18) +
            ((in_EDX + (in_EDX >> 0x1f) * -0x100) - (uint)((in_EDX >> 0x1f) << 7 < 0) >> 8 & 0xff);
    iVar4 = (*(int *)(&DAT_0018b6c0 + local_24) >> 0x18) +
            ((unaff_EBX + (unaff_EBX >> 0x1f) * -0x100) - (uint)((unaff_EBX >> 0x1f) << 7 < 0) >> 8
            & 0xff);
    if ((((-1 < iVar1) && (iVar1 < 0xff)) && (-1 < iVar4)) &&
       (((iVar4 < 0xff &&
         (uVar2 = *(uint *)((int)&DAT_00279203 + (iVar1 + iVar4 * 0x100) * 5 + 1),
         (uVar2 >> 0x1c & 1 << (in_AL & 0x1f)) != 0)) &&
        (pbVar5 = (&DAT_001ae9fc)[(uVar2 & 0x3fffff) >> 0xb], DAT_001ae9fc < pbVar5)))) {
      do {
        if ((((*pbVar5 & 0x10) == 0) && ((pbVar5[1] & 2) == 0)) &&
           ((pbVar5[7] != 0x43 &&
            (((iVar1 = FUN_00084ff8(), iVar1 != 0 || (iVar1 = FUN_0004fe44(), iVar1 != 0)) &&
             (uVar2 = (int)(in_EDX - (uint)*(ushort *)(pbVar5 + 0xd)) >> 0x1f,
             uVar3 = (int)(unaff_EBX - (uint)*(ushort *)(pbVar5 + 0xf)) >> 0x1f,
             iVar1 = ((unaff_EBX - (uint)*(ushort *)(pbVar5 + 0xf) ^ uVar3) - uVar3) +
                     ((in_EDX - (uint)*(ushort *)(pbVar5 + 0xd) ^ uVar2) - uVar2), iVar1 < iVar6))))
           )) {
          iVar6 = iVar1;
          local_20 = pbVar5;
        }
        pbVar5 = (&DAT_001ae9fc)[*(ushort *)(pbVar5 + 2)];
      } while (DAT_001ae9fc < pbVar5);
    }
    local_24 = local_24 + 2;
  } while (local_24 != 0x12);
  return local_20;
}

/******************************************************************************
 * Function : sub_0856f8 (Ghidra: FUN_000856f8)
 * Prototype: void sub_0856f8(void);
 * Address  : 0x856f8 (Size: 86 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x65199, 0x65283
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000856f8(void)

{
  int in_EAX;
  
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 2) != 0) {
    *(undefined2 *)(in_EAX + 0x46) = 300;
    return;
  }
  *(short *)(in_EAX + 0x46) =
       (short)((ulonglong)
               (longlong)
               (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 300) /
              0x14) + 300;
  return;
}

/******************************************************************************
 * Function : sub_085890 (Ghidra: FUN_00085890)
 * Prototype: undefined8 sub_085890(void);
 * Address  : 0x85890 (Size: 193 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x28833, 0x43bb3, 0x4e4ad, 0x71416, 0x717de, 0x71edd, 0x7436a, 0x7443f, 0x80a94, 0x80c84 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00085890(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_EDX;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar1 = (uint)(byte)(&DAT_002e915b)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
  if (*(short *)(iVar3 + 0x21) != 0) {
    uVar1 = uVar1 * 2;
  }
  if ((*(byte *)(iVar3 + 0xac) & 2) != 0) {
    uVar1 = uVar1 * 2;
  }
  if ((*(byte *)(iVar3 + 0xac) & 1) != 0) {
    uVar1 = uVar1 / 2;
  }
  uVar2 = *(int *)(in_EAX + 3) >> 0x18;
  if (uVar2 != DAT_002eb543) {
    iVar3 = uVar2 * 0x1508;
    if (*(short *)(&DAT_002e19a9 + (uint)*(byte *)(in_EAX + 0x1a) * 2 + iVar3) != 0) {
      uVar1 = (int)(uVar1 * 5) >> 2;
    }
    if (*(int *)(&DAT_002e0e11 + iVar3) != 0) {
      uVar1 = (int)(uVar1 * 5) >> 2;
    }
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_085954 (Ghidra: FUN_00085954)
 * Prototype: longlong sub_085954(void);
 * Address  : 0x85954 (Size: 165 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x10dac, 0x65d3e, 0x6757d, 0x6d3e1, 0x81fec, 0xaafd4, 0xab4bc, 0xab8dc, 0xe1b88
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00085954(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint in_EDX;
  
  uVar2 = *(int *)(in_EAX + 3) >> 0x18;
  if (uVar2 == DAT_002eb543) {
    return CONCAT44(in_EDX,uVar2 ^ DAT_002eb543);
  }
  iVar3 = uVar2 * 0x4ef;
  if ((&DAT_0019d51b)[iVar3] == '\v') {
    cVar1 = (&DAT_0019d578)[iVar3];
    if (cVar1 == '\0') {
      return CONCAT44(in_EDX,(uint)(*(short *)((int)&DAT_0019d0f7 + iVar3) ==
                                   *(short *)(in_EAX + 0x1b)));
    }
    if (cVar1 == '\x05') {
      return CONCAT44(in_EDX,(uint)(*(short *)(&DAT_0019d506 + iVar3) == *(short *)(in_EAX + 0x1b)))
      ;
    }
    if (cVar1 == '\r') {
      return CONCAT44(in_EDX,(uint)(*(short *)((int)&DAT_0019d0f7 + iVar3) ==
                                   *(short *)(in_EAX + 0x1b)));
    }
    if (cVar1 == '\b') {
      return CONCAT44(in_EDX,(uint)(*(short *)(&DAT_0019d506 + iVar3) == *(short *)(in_EAX + 0x1b)))
      ;
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0859fc (Ghidra: FUN_000859fc)
 * Prototype: undefined8 sub_0859fc(void);
 * Address  : 0x859fc (Size: 81 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x22660
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000859fc(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 in_EDX;
  
  if ((in_EAX != (&DAT_001ae9fc)
                 [*(ushort *)((int)&DAT_0019d0f7 + (*(int *)(in_EAX + 3) >> 0x18) * 0x4ef)]) ||
     (uVar1 = (byte)(&DAT_00191d40)[DAT_002ee8d3] / 3, uVar1 < 7)) {
    uVar1 = 7;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_085aa4 (Ghidra: FUN_00085aa4)
 * Prototype: void sub_085aa4(void);
 * Address  : 0x85aa4 (Size: 47 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4b5ca, 0x4b6ae
 * Callees  : 1 -> 0x27130
 ******************************************************************************/
void FUN_00085aa4(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    FUN_00027130();
  }
  return;
}

/******************************************************************************
 * Function : sub_085ad4 (Ghidra: FUN_00085ad4)
 * Prototype: void sub_085ad4(void);
 * Address  : 0x85ad4 (Size: 69 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5ba80
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00085ad4(void)

{
  int iVar1;
  
  iVar1 = (&DAT_001ae9fc)[DAT_002e6eb6];
  if (iVar1 == DAT_001ae9fc) {
    return;
  }
  do {
    if (*(char *)(iVar1 + 0x1a) == '\x06') {
      return;
    }
    iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x67)];
  } while (iVar1 != DAT_001ae9fc);
  return;
}

/******************************************************************************
 * Function : sub_085b1c (Ghidra: FUN_00085b1c)
 * Prototype: longlong sub_085b1c(void);
 * Address  : 0x85b1c (Size: 133 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdd500
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00085b1c(void)

{
  int iVar1;
  char cVar2;
  uint in_EDX;
  
  for (iVar1 = (&DAT_001ae9fc)[DAT_002e6eb6];
      (iVar1 != DAT_001ae9fc && (*(char *)(iVar1 + 0x1a) != '\x06'));
      iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x67)]) {
  }
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + 7);
    if (cVar2 == '\x0e') {
      cVar2 = *(char *)(iVar1 + 8);
    }
    if (cVar2 != ')') {
      cVar2 = *(char *)(iVar1 + 7);
      if (cVar2 == '\x0e') {
        cVar2 = *(char *)(iVar1 + 8);
      }
      if (cVar2 != '(') goto LAB_00085b9c;
    }
    return CONCAT44(in_EDX,1);
  }
LAB_00085b9c:
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_085ba4 (Ghidra: FUN_00085ba4)
 * Prototype: undefined4 sub_085ba4(void);
 * Address  : 0x85ba4 (Size: 285 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x849c8
 * Callees  : 7 -> 0x104db, 0x10ad6, 0x63b6d, 0x64a5f, 0x64c4d, 0x85df8, 0xb3850
 ******************************************************************************/
undefined4 FUN_00085ba4(void)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBX;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(unaff_EBX + 0xd);
  uVar3 = FUN_000b3850(uVar4,*(undefined2 *)(unaff_EBX + 0x11));
  cVar2 = *(char *)(unaff_EBX + 7);
  bVar1 = false;
  if (cVar2 != 'K') {
    if (cVar2 == '\x0e') {
      cVar2 = *(char *)(unaff_EBX + 8);
    }
    if (cVar2 != 'L') goto LAB_00085c10;
  }
  cVar2 = *(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x48);
  if (cVar2 != '\0') {
    *(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x48) = cVar2 + -1;
  }
  FUN_00063b6d(uVar4,uVar3);
  bVar1 = true;
LAB_00085c10:
  FUN_00085df8();
  if (!bVar1) {
    cVar2 = *(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x49);
    if (cVar2 != -1) {
      *(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x49) = cVar2 + '\x01';
    }
  }
  FUN_000104db();
  FUN_00010ad6();
  cVar2 = FUN_00064c4d();
  if ((cVar2 != '\0') && (cVar2 = FUN_00064a5f(), cVar2 != '\0')) {
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_01 + 100)] + 0x282) = 0x32;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_085cc4 (Ghidra: FUN_00085cc4)
 * Prototype: void sub_085cc4(void);
 * Address  : 0x85cc4 (Size: 305 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x849c8, 0xe1b88
 * Callees  : 5 -> 0x10434, 0x49bfc, 0x6e538, 0x72af4, 0x81c70
 ******************************************************************************/
void FUN_00085cc4(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_EDX;
  uint *puVar4;
  uint uStack_18;
  int local_14;
  
  puVar4 = (uint *)&local_14;
  uVar1 = DAT_002e8bfa * 0x24a1 + 0x24df;
  DAT_002e8bfa = uVar1 >> 0xd | uVar1 * 0x80000;
  local_14 = DAT_002e8bfa % 3 + 0x70;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  uStack_18 = (uint)*(byte *)(iVar3 + 0xd2);
  if (uStack_18 == 0) {
    puVar4 = &uStack_18;
    FUN_00049bfc();
  }
  else {
    if (*(char *)(iVar3 + 0x41) == '\0') {
      if (*(char *)(iVar3 + 0x42) != -1) {
        *(char *)(iVar3 + 0x42) = *(char *)(iVar3 + 0x42) + '\x01';
      }
    }
    else {
      *(char *)(iVar3 + 0x41) = *(char *)(iVar3 + 0x41) + -1;
    }
    uStack_18 = 0x85d68;
    cVar2 = FUN_00081c70();
    if (cVar2 != '\0') {
      *(undefined2 *)(in_EDX + 0x17) = 8;
    }
    *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x39) = 0;
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x100;
  *(undefined4 *)((int)puVar4 + -8) = 2;
  *(undefined4 *)((int)puVar4 + -0xc) = 0;
  *(undefined4 *)((int)puVar4 + -0x10) = 3;
  *(undefined4 *)((int)puVar4 + -0x14) = 0x85da6;
  FUN_0006e538();
  *(undefined4 *)((int)puVar4 + -0x14) = 0x85dcb;
  FUN_00010434();
  iVar3 = (*(int *)(in_EDX + 3) >> 0x18) * 0x1508;
  *(int *)(&DAT_002e181c + iVar3) = *(int *)(&DAT_002e181c + iVar3) + 1;
  *(undefined4 *)((int)puVar4 + -0x14) = 0x85ded;
  FUN_00072af4();
  return;
}

/******************************************************************************
 * Function : sub_085df8 (Ghidra: FUN_00085df8)
 * Prototype: void sub_085df8(void);
 * Address  : 0x85df8 (Size: 389 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x849c8, 0x85ba4
 * Callees  : 3 -> 0x43f07, 0x61ca3, 0xb3850
 ******************************************************************************/
void FUN_00085df8(void)

{
  uint uVar1;
  short sVar2;
  short *in_EAX;
  uint uVar3;
  short extraout_DX;
  short sVar4;
  undefined4 in_EDX;
  int unaff_EBX;
  int iVar5;
  
  uVar3 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = uVar3 >> 0xd | uVar3 * 0x80000;
  sVar2 = FUN_000b3850();
  sVar2 = sVar2 - extraout_DX;
  iVar5 = 0;
  do {
    if (iVar5 == 0) {
      sVar4 = *in_EAX;
    }
    else {
      uVar3 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar1 = uVar3 >> 0xd;
      DAT_002e8bf6 = uVar1 | uVar3 * 0x80000;
      sVar4 = (short)((uint)((&DAT_001927e0)[uVar1 & 0x7ff] * 0x7f) >> 0x10) + *in_EAX;
    }
    uVar3 = FUN_00043f07(sVar4,sVar2);
    if (uVar3 <= DAT_001ae9fc) break;
    if (iVar5 == 0) {
      *(undefined4 *)(uVar3 + 0x13) = in_EDX;
    }
    else {
      uVar1 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar1 >> 0xd | uVar1 * 0x80000;
      uVar1 = DAT_002e8bf6 % (uint)(*(int *)(uVar3 + 0x1d) >> 0x18);
      *(undefined4 *)(uVar3 + 0x13) = 0;
      *(char *)(uVar3 + 0x20) =
           ((char)uVar1 - (char)((*(int *)(uVar3 + 0x1d) >> 0x18) / 2)) +
           (char)((uint)*(int *)(uVar3 + 0x1d) >> 0x18);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  FUN_00061ca3();
  *(int *)(&DAT_0019d0d8 + unaff_EBX * 0x4ef) = DAT_002e8bee + 0x10;
  return;
}

/******************************************************************************
 * Function : sub_085f80 (Ghidra: FUN_00085f80)
 * Prototype: void sub_085f80(void);
 * Address  : 0x85f80 (Size: 268 bytes)
 * Module   : creature.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8608c
 * Callees  : 7 -> 0x27130, 0x5afda, 0x5c848, 0x5cf03, 0x780c2, 0x80fbc, 0xad54c
 ******************************************************************************/
void FUN_00085f80(void)

{
  ushort uVar1;
  int in_EAX;
  
  FUN_00080fbc();
  *(undefined2 *)(&DAT_0019d506 + (*(int *)(in_EAX + 3) >> 0x18) * 0x4ef) = 0;
  if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    FUN_00027130();
  }
  FUN_000780c2();
  if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    FUN_0005afda();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005cf03();
    uVar1 = CONCAT11(DAT_0019d0b8,(DAT_0019d0b8 & 0x3f) >> 5) & 0xbf01;
    DAT_0019d0b8 = (byte)(uVar1 >> 8) | (char)uVar1 << 6;
  }
  FUN_000ad54c();
  return;
}

/******************************************************************************
 * Function : dk_how_hero_have_tend_08608c (Ghidra: FUN_0008608c)
 * Prototype: undefined4 dk_how_hero_have_tend_08608c(char param_1,char param_2);
 * Address  : 0x8608c (Size: 1324 bytes)
 * Module   : creature.cpp [direct_file_string_xref]
 * OrigLine : creature.cpp:3859 ("HOW CAN HERO HAVE TEND TO IMPRISON")
 * Naming   : String 'HOW CAN HERO HAVE TEND TO IMPRISON'
 * Callers  : 20 -> 0x2585f, 0x266af, 0x26ce2, 0x26dbc, 0x26faa, 0x386e1, 0x4af38, 0x4f92f, 0x66016, 0x67e04 ...
 * Callees  : 11 -> 0x10434, 0x1836b, 0x2778e, 0x39c3e, 0x49dd9, 0x51374, 0x64a2e, 0x72af4, 0x7fac8, 0x85f80 ...
 * Strings  :
 *   - 0x16a11d: "creature.cpp"
 *   - 0x16a0fa: "HOW CAN HERO HAVE TEND TO IMPRISON"
 ******************************************************************************/
undefined4 FUN_0008608c(char param_1,char param_2)

{
  short *psVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  undefined2 *puVar5;
  byte *in_EAX;
  int iVar6;
  uint uVar7;
  int iVar8;
  char in_CL;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint in_EDX;
  undefined2 *extraout_EDX;
  byte unaff_BL;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *local_1c;
  
  iVar8 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  FUN_00064a2e();
  FUN_0001836b();
  if ((*(ushort *)(iVar8 + 0x7a) & 0xfff) != 0) {
    FUN_00039c3e();
  }
  local_1c = extraout_EDX;
  if (*(int *)(in_EAX + 3) >> 0x18 != (uint)DAT_002eb543) {
    local_1c = &DAT_002e0589 + (*(int *)(in_EAX + 3) >> 0x18) * 0xa84;
  }
  if (((DAT_001ae9fc < in_EDX) && (*(int *)(in_EDX + 3) >> 0x18 == (uint)DAT_002eb543)) ||
     ((int)(char)unaff_BL == (uint)DAT_002eb543)) {
    param_1 = '\0';
  }
  FUN_0002778e();
  if (extraout_ECX != 0) {
    cVar3 = *(char *)(iVar8 + 0x23);
    iVar6 = *(int *)((int)local_1c + 0x139f);
    bVar4 = in_EAX[0x1a];
    puVar5 = local_1c + iVar6;
    do {
      puVar9 = puVar5;
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        if (*(int *)((int)local_1c + 0x139f) == 0x40) {
          *(byte *)((int)local_1c + *(int *)((int)local_1c + 0x13a3) * 2 + 0x131f) = bVar4;
          *(char *)(local_1c + *(int *)((int)local_1c + 0x13a3) + 0x990) = cVar3;
          iVar6 = *(int *)((int)local_1c + 0x13a3) + 1;
          *(int *)((int)local_1c + 0x13a3) = iVar6;
          if (iVar6 == 0x40) {
            *(undefined4 *)((int)local_1c + 0x13a3) = 0;
          }
        }
        else {
          *(byte *)((int)local_1c + *(int *)((int)local_1c + 0x139f) * 2 + 0x131f) = bVar4;
          *(char *)(local_1c + *(int *)((int)local_1c + 0x139f) + 0x990) = cVar3;
          *(int *)((int)local_1c + 0x139f) = *(int *)((int)local_1c + 0x139f) + 1;
        }
        break;
      }
      puVar5 = puVar9 + -1;
    } while ((*(byte *)((int)puVar9 + 0x131d) != bVar4) || (*(char *)(puVar9 + 0x98f) != cVar3));
  }
  if ((local_1c != (undefined2 *)0x0) && (param_1 != '\0')) {
    *(short *)((int)local_1c + 0xad1) = *(short *)((int)local_1c + 0xad1) + 1;
  }
  if ((*(byte *)(iVar8 + 0xac) & 4) != 0) {
    *(byte *)(iVar8 + 0xac) = *(byte *)(iVar8 + 0xac) & 0xfb;
    iVar6 = iVar8 + 6;
    iVar10 = iVar8;
    do {
      if (*(short *)(iVar10 + 0x2b3) != 0) {
        FUN_00072af4();
        *(undefined2 *)(iVar10 + 0x2b3) = 0;
        iVar6 = extraout_ECX_00;
      }
      iVar10 = iVar10 + 2;
    } while (iVar10 != iVar6);
  }
  if ((*(byte *)(iVar8 + 0xad) & 1) != 0) {
    *(byte *)(iVar8 + 0xad) = *(byte *)(iVar8 + 0xad) & 0xfe;
    iVar6 = iVar8 + 6;
    iVar10 = iVar8;
    do {
      if (*(short *)(iVar10 + 0x2b9) != 0) {
        FUN_00072af4();
        *(undefined2 *)(iVar10 + 0x2b9) = 0;
        iVar6 = extraout_ECX_01;
      }
      iVar10 = iVar10 + 2;
    } while (iVar10 != iVar6);
  }
  if (param_1 == '\0') {
    uVar7 = *(int *)(iVar8 + 0x1cf) >> 0x18;
    if ((uVar7 == 0xffffffff) || (uVar7 == DAT_002eb543)) goto LAB_000863ab;
    iVar6 = uVar7 * 0x1508;
    if (*(byte *)(iVar8 + 0x1d2) != in_EAX[6]) {
      (&DAT_002e105c)[uVar7 * 0xa84] = (&DAT_002e105c)[uVar7 * 0xa84] + 1;
      goto LAB_000863ab;
    }
  }
  else if (DAT_001ae9fc < in_EDX) {
    if (*(byte *)(in_EDX + 6) != in_EAX[6]) {
      (&DAT_002e105c)[(*(int *)(in_EDX + 3) >> 0x18) * 0xa84] =
           (&DAT_002e105c)[(*(int *)(in_EDX + 3) >> 0x18) * 0xa84] + 1;
      goto LAB_000863ab;
    }
    iVar6 = (*(int *)(in_EDX + 3) >> 0x18) * 0x1508;
  }
  else {
    uVar7 = (uint)(char)unaff_BL;
    if ((uVar7 == 0xffffffff) || (uVar7 == DAT_002eb543)) {
      uVar7 = *(int *)(iVar8 + 0x1cf) >> 0x18;
      if ((uVar7 == 0xffffffff) || (uVar7 == DAT_002eb543)) goto LAB_000863ab;
      iVar6 = uVar7 * 0x1508;
      if (*(byte *)(iVar8 + 0x1d2) != in_EAX[6]) {
        (&DAT_002e105c)[uVar7 * 0xa84] = (&DAT_002e105c)[uVar7 * 0xa84] + 1;
        goto LAB_000863ab;
      }
    }
    else {
      iVar6 = uVar7 * 0x1508;
      if (unaff_BL != in_EAX[6]) {
        (&DAT_002e105c)[uVar7 * 0xa84] = (&DAT_002e105c)[uVar7 * 0xa84] + 1;
        goto LAB_000863ab;
      }
    }
  }
  *(int *)(&DAT_002e1830 + iVar6) = *(int *)(&DAT_002e1830 + iVar6) + 1;
LAB_000863ab:
  if ((((DAT_001ae9fc < in_EDX) && (*(int *)(in_EDX + 3) >> 0x18 != (uint)DAT_002eb543)) &&
      ((int)(char)unaff_BL != (uint)DAT_002eb543)) && (local_1c != (undefined2 *)0x0)) {
    if (((*(byte *)(in_EDX + 6) == in_EAX[6]) && (*(char *)(in_EDX + 0x1a) == '\x1a')) &&
       (in_EAX[0x1a] == 0x13)) {
      *(int *)((int)local_1c + 0x1267) = *(int *)((int)local_1c + 0x1267) + 1;
    }
    iVar8 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
    iVar6 = DAT_002f10ce >> 0x18;
    psVar1 = (short *)(iVar8 + 0xc2);
    *psVar1 = *psVar1 + 1;
    if ((*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar6 * 0x4ef]) ||
       (*(int *)(in_EDX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar6 * 0x4ef])) {
      FUN_00051374();
    }
    if ((*(int *)(in_EDX + 3) >> 0x18 == (uint)DAT_002eb542) &&
       (((&DAT_002e0591)[(uint)DAT_002eb542 * 0x1508] & 1) != 0)) {
      FUN_000ddaf0(); /* LbErrorLog("creature.cpp", line 3859, "HOW CAN HERO HAVE TEND TO IMPRISON") */
    }
    FUN_00010434();
    if (param_1 != '\0') {
      pcVar2 = (char *)(iVar8 + 0x9a);
      *pcVar2 = *pcVar2 + '\x01';
    }
    if (local_1c != (undefined2 *)0x0) {
      psVar1 = (short *)((int)local_1c + (*(int *)(in_EDX + 3) >> 0x18) * 2 + 0xb01);
      *psVar1 = *psVar1 + DAT_002eb9fa;
    }
    if ((((param_2 == '\0') &&
         (iVar8 = (*(int *)(in_EDX + 3) >> 0x18) * 0x1508, *(short *)(&DAT_002e059c + iVar8) != 0))
        && (((&DAT_002e0591)[iVar8] & 1) != 0)) && (in_CL == '\0')) {
      FUN_00049dd9();
      in_EAX[7] = 0x43;
      *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
           *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) | 4;
      *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
           *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) | 2;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x280) = 2000;
      in_EAX[0x5e] = 1;
      in_EAX[0x5f] = 0;
      return 1;
    }
    if ((in_CL != '\0') && ((*in_EAX & 0x20) != 0)) {
      FUN_00085f80();
    }
  }
  else if ((in_CL != '\0') && ((*in_EAX & 0x20) != 0)) {
    FUN_00085f80();
  }
  FUN_0007fac8();
  return 1;
}

/******************************************************************************
 * Function : sub_0865b8 (Ghidra: FUN_000865b8)
 * Prototype: undefined4 sub_0865b8(void);
 * Address  : 0x865b8 (Size: 318 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x5f6c5, 0x7884b, 0x8a194
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000865b8(void)

{
  byte *in_EAX;
  int in_EDX;
  byte bVar1;
  
  if (*(int *)(in_EAX + 3) >> 0x18 == in_EDX) {
    if ((((CONCAT31((uint3)(*(int *)(in_EAX + 3) >> 0x1f) ^ (uint3)((uint)in_EDX >> 8),in_EAX[0x1f])
           == 5) && ((*in_EAX & 0x10) == 0)) && ((in_EAX[1] & 2) == 0)) &&
       (bVar1 = in_EAX[7], bVar1 != 0x43)) {
      if (bVar1 == 0xe) {
        bVar1 = in_EAX[8];
      }
      if (bVar1 != 0x58) {
        bVar1 = in_EAX[7];
        if (bVar1 == 0xe) {
          bVar1 = in_EAX[8];
        }
        if (bVar1 != 0x5c) {
          bVar1 = in_EAX[7];
          if (bVar1 == 0xe) {
            bVar1 = in_EAX[8];
          }
          if (bVar1 != 0x5f) {
            bVar1 = in_EAX[7];
            if (bVar1 == 0xe) {
              bVar1 = in_EAX[8];
            }
            if (bVar1 != 0x29) {
              bVar1 = in_EAX[7];
              if (bVar1 == 0xe) {
                bVar1 = in_EAX[8];
              }
              if (bVar1 != 0x28) {
                bVar1 = in_EAX[7];
                if (bVar1 == 0xe) {
                  bVar1 = in_EAX[8];
                }
                if (bVar1 != 0x2b) {
                  bVar1 = in_EAX[7];
                  if (bVar1 == 0xe) {
                    bVar1 = in_EAX[8];
                  }
                  if (bVar1 != 0x2a) {
                    return 1;
                  }
                }
              }
            }
            if (*(int *)(&DAT_002ddd1b +
                        (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) * 0x45)
                >> 0x18 != in_EDX) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    if ((in_EAX[0x1f] == 1) && (in_EAX[0x1a] == 10)) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0866f8 (Ghidra: FUN_000866f8)
 * Prototype: undefined4 sub_0866f8(void);
 * Address  : 0x866f8 (Size: 135 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5f6c5, 0x8a194
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000866f8(void)

{
  byte *in_EAX;
  byte bVar1;
  int in_EDX;
  
  if ((((*(int *)(in_EAX + 3) >> 0x18 == in_EDX) && (in_EAX[0x1f] == 5)) && ((*in_EAX & 0x10) == 0))
     && (((in_EAX[1] & 2) == 0 && (bVar1 = in_EAX[7], bVar1 != 0x43)))) {
    if (bVar1 == 0xe) {
      bVar1 = in_EAX[8];
    }
    if (bVar1 != 0x58) {
      bVar1 = in_EAX[7];
      if (bVar1 == 0xe) {
        bVar1 = in_EAX[8];
      }
      if (bVar1 != 0x5c) {
        bVar1 = in_EAX[7];
        if (bVar1 == 0xe) {
          bVar1 = in_EAX[8];
        }
        if (bVar1 != 0x5f) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_086780 (Ghidra: FUN_00086780)
 * Prototype: void sub_086780(void);
 * Address  : 0x86780 (Size: 173 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00086780(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  int iVar3;
  int unaff_EBX;
  
  iVar3 = *(int *)(in_EAX + 0x139f);
  iVar1 = iVar3 * 2 + in_EAX;
  while( true ) {
    iVar2 = iVar1;
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    iVar1 = iVar2 + -2;
    if ((*(byte *)(iVar2 + 0x131d) == in_EDX) &&
       (CONCAT31((int3)(in_EDX >> 8),*(undefined1 *)(iVar2 + 0x131e)) == unaff_EBX)) {
      return;
    }
  }
  if (*(int *)(in_EAX + 0x139f) != 0x40) {
    *(char *)(in_EAX + 0x131f + *(int *)(in_EAX + 0x139f) * 2) = (char)in_EDX;
    *(char *)(in_EAX + 0x1320 + *(int *)(in_EAX + 0x139f) * 2) = (char)unaff_EBX;
    *(int *)(in_EAX + 0x139f) = *(int *)(in_EAX + 0x139f) + 1;
    return;
  }
  *(char *)(in_EAX + 0x131f + *(int *)(in_EAX + 0x13a3) * 2) = (char)in_EDX;
  *(char *)(in_EAX + 0x1320 + *(int *)(in_EAX + 0x13a3) * 2) = (char)unaff_EBX;
  iVar3 = *(int *)(in_EAX + 0x13a3) + 1;
  *(int *)(in_EAX + 0x13a3) = iVar3;
  if (iVar3 != 0x40) {
    return;
  }
  *(undefined4 *)(in_EAX + 0x13a3) = 0;
  return;
}

/******************************************************************************
 * Function : sub_086830 (Ghidra: FUN_00086830)
 * Prototype: undefined4 sub_086830(void);
 * Address  : 0x86830 (Size: 6 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00086830(void)

{
  return 0xffffffff;
}

/******************************************************************************
 * Function : dk_dene_says_big_hello_08685c (Ghidra: FUN_0008685c)
 * Prototype: void dk_dene_says_big_hello_08685c(void);
 * Address  : 0x8685c (Size: 2361 bytes)
 * Module   : creature.cpp [address_order_boundary_interpolation]
 * Naming   : String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies'
 * Callers  : 1 -> 0x36ff4
 * Callees  : 24 -> 0x50708, 0x508a9, 0x5449e, 0x58ba8, 0x58e1c, 0x6f0cd, 0x70bf9, 0x872b8, 0x87694, 0x87870 ...
 * Strings  :
 *   - 0x16a12c: "DATA"
 *   - 0x16a133: "%s\gmap.raw"
 *   - 0x16a13f: "DATA"
 *   - 0x16a146: "%s\gmaphi.raw"
 *   - 0x16a154: "Dene says a big 'Hello' to Goth Buns, Tarts and Barbies"
 *   - 0x16a18c: ">%s_"
 *   - 0x16a194: " %s %03d"
 ******************************************************************************/
void FUN_0008685c(void)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_ECX_00;
  uint uVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined *puVar6;
  
  (&DAT_0019d0ce)[(DAT_002f10ce >> 0x18) * 0x4ef] =
       (&DAT_0019d0ce)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0xfe;
  if (DAT_002ebaf6 != '\x01') {
    if (DAT_002e90b1 == '\x02') {
      FUN_000ebc10();
    }
    else {
      FUN_0008a194();
    }
    switch((&DAT_0019d0ff)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    case 1:
      FUN_00087870();
      DAT_00377768 = 0;
      break;
    case 2:
      FUN_000872b8();
      DAT_00377768 = 0;
      break;
    case 3:
      if (DAT_00377768 == 0) {
        if (DAT_003d9878 == 1) {
          FUN_000dd920();
          uVar2 = FUN_000dd920();
          FUN_000e7714(&DAT_0019cbac,s__s_gmap_raw_0016a133,uVar2);
        }
        else {
          FUN_000dd920();
          uVar2 = FUN_000dd920();
          FUN_000e7714(&DAT_0019cbac,s__s_gmaphi_raw_0016a146,uVar2);
        }
        FUN_000e984c();
        DAT_00377768 = 1;
      }
      FUN_000880d0();
      FUN_000882b4();
      FUN_0005449e();
      FUN_0008bde8();
      if ((DAT_002e78e9 == 0) || (DAT_002e78e9 != 0x14 && 0x13 < DAT_002e78e9)) {
        iVar4 = FUN_00070bf9();
        puVar6 = DAT_00333853;
        if ((iVar4 == 0) &&
           ((puVar6 = (undefined *)0x0, 0x31 < DAT_002e78e9 && (DAT_002e78e9 < 0x50)))) {
          puVar6 = &DAT_00334025;
        }
      }
      else {
        puVar6 = *(undefined **)(&DAT_003334bf + (uint)DAT_002e78e9 * 4);
      }
      if (puVar6 != (undefined *)0x0) {
        DAT_003d9874 = 0;
        DAT_003d98b4 = DAT_001991b8;
        FUN_000e6b20();
        FUN_000e6c1c();
        FUN_000e6d80();
      }
      FUN_00058ba8();
      break;
    case 5:
      FUN_00087694();
      DAT_00377768 = extraout_ECX;
      break;
    case 6:
      DAT_00377768 = 0;
      uVar2 = FUN_00050708();
      *(undefined4 *)(&DAT_0019d585 + (DAT_002f10ce >> 0x18) * 0x4ef) = uVar2;
      break;
    case 7:
      DAT_00377768 = 0;
      uVar2 = FUN_000508a9();
      *(undefined4 *)(&DAT_0019d585 + (DAT_002f10ce >> 0x18) * 0x4ef) = uVar2;
    }
    FUN_000e6b20();
    if (6 < DAT_003482c1) {
      DAT_003482c1 = DAT_003482c1 + 1;
      DAT_003d98b4 = DAT_001991b8;
      FUN_000e7714(&DAT_0019cbac,s_Dene_says_a_big__Hello__to_Goth_B_0016a154);
      DAT_003d9874 = 0x40;
      iVar4 = 0;
      do {
        DAT_003d9885 = (char)DAT_002e8bee - (char)iVar4;
        FUN_000e6d80();
        iVar4 = extraout_ECX_00;
      } while (extraout_ECX_00 < 0x1e);
      DAT_003d9874 = DAT_003d9874 & 0xffbf;
      FUN_000e6d80();
      if (1000 < DAT_003482c1) {
        DAT_003482c1 = 0;
      }
    }
    FUN_000e6b20();
    DAT_003d98b4 = DAT_001991b8;
    DAT_003d9874 = DAT_003d9874 & 0xffbf;
    FUN_000e6b20();
    iVar4 = (DAT_002f10ce >> 0x18) * 0x4ef;
    if (((&DAT_0019d0c8)[iVar4] & 4) != 0) {
      FUN_000e7714(&DAT_0019cbac,&DAT_0016a18c,&DAT_0019d52b + iVar4); /* 0x16a18c=">%s_" */
      FUN_000e6d80();
    }
    uVar1 = DAT_003d9874;
    if (DAT_0037776c != 0) {
      FUN_000e6b20();
      DAT_003d98b4 = DAT_001991b8;
      DAT_003d9874 = 0;
      FUN_000e7714(&DAT_0019cbac,&DAT_0016a191,DAT_0037776c);
      FUN_000e6d20();
      FUN_000dc150();
      FUN_000e6c1c();
      FUN_000e6d80();
      DAT_0037776c = 0;
    }
    DAT_003d9874 = uVar1;
    iVar4 = FUN_00070bf9();
    if (iVar4 != 0) {
      FUN_0008d998();
    }
    if (((DAT_0019d0b8 & 1) != 0) && ((DAT_0019d0b8 & 0x80) == 0)) {
      DAT_003d98b4 = DAT_001991b8;
      uVar3 = 0;
      if (DAT_001991b8 != 0) {
        uVar3 = (uint)*(byte *)(DAT_001991b8 + 10);
      }
      uVar5 = (uint)DAT_0019cba6;
      iVar4 = FUN_000e6c1c();
      DAT_003d9874 = 0x100;
      FUN_000e6b20(0x10 / DAT_0019cba6,
                   (int)(uVar3 * uVar5 * 2 + iVar4 * CONCAT22(extraout_var,DAT_0019cba6)) /
                   (int)(uint)DAT_0019cba6);
      FUN_00058e1c();
      FUN_000e6d80();
      FUN_000e6b20();
    }
    if (DAT_002ed402 != 0) {
      if (DAT_002e8bee < (uint)(DAT_002ee894 + DAT_002ed402)) {
        iVar4 = DAT_002e8bee - (DAT_002ee894 + DAT_002ed402);
      }
      else if (DAT_002e8bee < (uint)(DAT_002ed406 - DAT_002ee898)) {
        iVar4 = 0;
      }
      else {
        iVar4 = DAT_002ed406 - DAT_002e8bee;
      }
      DAT_003d98b4 = DAT_001991b8;
      FUN_000e7714(&DAT_0019cbac,s__s__03d_0016a194,DAT_00333bb3,iVar4 / 2);
      if (DAT_003d98b4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)*(byte *)(DAT_003d98b4 + 10);
      }
      iVar4 = FUN_000e6c1c();
      DAT_003d9874 = 0x100;
      FUN_000e6b20((int)(uVar3 * 6 + iVar4 * CONCAT22(extraout_var_00,DAT_0019cba6)) /
                   (int)(uint)DAT_0019cba6,0x10 / DAT_0019cba6);
      FUN_00058e1c();
      FUN_000e6d80();
      FUN_000e6b20();
    }
    FUN_0006f0cd();
  }
  return;
}

