/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: compevnt.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 32
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_018d28 (Ghidra: FUN_00018d28)
 * Prototype: undefined4 sub_018d28(void);
 * Address  : 0x18d28 (Size: 165 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1ba46, 0x203f0
 ******************************************************************************/
undefined4 FUN_00018d28(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EDX;
  
  iVar5 = *(int *)(in_EAX + 0x24);
  iVar3 = (int)((uint)*(byte *)(iVar5 + 0x919) * *(int *)(in_EDX + 0x10)) / 100;
  if (iVar3 != 0) {
    iVar4 = FUN_000203f0();
    if (iVar4 == 0) {
      uVar1 = *(ushort *)(iVar5 + 0xb + *(int *)(in_EDX + 0x14) * 2);
      while (iVar5 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar5) {
        if (*(ushort *)(&DAT_002ddd2b + iVar5) < *(ushort *)(&DAT_002ddd29 + iVar5)) {
          iVar4 = FUN_0001ba46();
          if (iVar4 != 0) {
            *(undefined1 *)(iVar4 + 2) = 10;
            uVar2 = *(undefined2 *)(&DAT_002ddd1c + iVar5);
            *(undefined2 *)(iVar4 + 0x70) = uVar2;
            *(undefined2 *)(iVar4 + 0x80) = uVar2;
            *(int *)(iVar4 + 0x7c) = iVar3;
            *(undefined4 *)(iVar4 + 10) = DAT_002e8bee;
            return 1;
          }
        }
        uVar1 = *(ushort *)(&DAT_002ddd21 + iVar5);
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_018dcd (Ghidra: FUN_00018dcd)
 * Prototype: undefined4 sub_018dcd(void);
 * Address  : 0x18dcd (Size: 111 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1ba46, 0x203f0
 ******************************************************************************/
undefined4 FUN_00018dcd(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  int in_EDX;
  
  if ((int)((uint)*(byte *)(*(int *)(in_EAX + 0x24) + 0x919) * *(int *)(in_EDX + 0x10)) / 100 != 0)
  {
    iVar2 = FUN_000203f0();
    if (iVar2 == 0) {
      iVar2 = FUN_0001ba46();
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 2) = 10;
        *(undefined2 *)(iVar2 + 0x70) = 0;
        *(undefined2 *)(iVar2 + 0x80) = 0;
        uVar1 = DAT_002e8bee;
        *(undefined4 *)(iVar2 + 0x7c) = extraout_ECX;
        *(undefined4 *)(iVar2 + 10) = uVar1;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_018e3c (Ghidra: FUN_00018e3c)
 * Prototype: int sub_018e3c(void);
 * Address  : 0x18e3c (Size: 151 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1dd33, 0x1df28, 0x1e38d
 ******************************************************************************/
int FUN_00018e3c(void)

{
  ushort *puVar1;
  int in_EAX;
  int iVar2;
  uint extraout_ECX;
  int in_EDX;
  uint uVar3;
  int iVar4;
  
  puVar1 = *(ushort **)(in_EAX + 0x24);
  iVar4 = 4;
  if ((int)(uint)(byte)puVar1[0x48c] < *(int *)(in_EDX + 0x10)) {
    iVar4 = FUN_0001e38d();
    if (iVar4 == 1) {
      uVar3 = (uint)*(byte *)((&DAT_001ae9fc)[*puVar1] + 0x10);
      iVar2 = FUN_0001dd33(1,uVar3);
      if (iVar2 != 0) {
        iVar2 = FUN_0001df28(extraout_ECX & 0xffff,uVar3 & 0xffff,1,1);
        if (0 < iVar2) {
          iVar4 = 1;
        }
      }
    }
  }
  return iVar4;
}

/******************************************************************************
 * Function : sub_018ed3 (Ghidra: FUN_00018ed3)
 * Prototype: undefined4 sub_018ed3(void);
 * Address  : 0x18ed3 (Size: 299 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1ba46, 0x1f754
 ******************************************************************************/
undefined4 FUN_00018ed3(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  uint uVar3;
  int iVar4;
  undefined1 local_18;
  undefined1 local_14;
  
  iVar2 = *(int *)(in_EAX + 0x24);
  if ((*(int *)(iVar2 + 0x116f) != 0) &&
     ((int)((uint)*(ushort *)(iVar2 + 0x93d) * *(int *)(in_EDX + 0x10)) / 100 <
      *(int *)(iVar2 + 0x116f))) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    iVar4 = 0;
    for (uVar3 = DAT_002e8bf6 % *(uint *)(iVar2 + 0x116f);
        (iVar4 < *(int *)(iVar2 + 0x116f) && (*(short *)(iVar2 + 0x106d + uVar3 * 4) != 1));
        uVar3 = (int)(uVar3 + 1) % *(int *)(iVar2 + 0x116f)) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < *(int *)(iVar2 + 0x116f)) {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x106b + uVar3 * 4);
      iVar2 = FUN_0001f754();
      if (iVar2 != 0) {
        iVar4 = FUN_0001ba46();
        if (iVar4 != 0) {
          *(undefined1 *)(iVar4 + 2) = 0xb;
          *(undefined1 *)(iVar4 + 0x86) = 0;
          local_14 = (undefined1)(uVar3 % 0x100);
          *(undefined1 *)(iVar4 + 0x88) = 0;
          *(undefined1 *)(iVar4 + 0x87) = local_14;
          local_18 = (undefined1)(uVar3 / 0x100);
          *(undefined1 *)(iVar4 + 0x89) = local_18;
          uVar1 = *(undefined2 *)(iVar2 + 0x1b);
          *(undefined2 *)(iVar4 + 0x80) = 0;
          *(undefined2 *)(iVar4 + 0x76) = uVar1;
          *(undefined4 *)(iVar4 + 10) = DAT_002e8bee;
          return 1;
        }
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_018ffe (Ghidra: FUN_00018ffe)
 * Prototype: undefined4 sub_018ffe(void);
 * Address  : 0x18ffe (Size: 364 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x18d16, 0x1ba46, 0x1dbbc, 0x1e38d, 0x1e425, 0x2002c, 0x2035a, 0x20596, 0x51374
 ******************************************************************************/
undefined4 FUN_00018ffe(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int iVar4;
  byte bVar5;
  int local_74 [20];
  int local_24;
  undefined2 local_20 [2];
  int local_1c;
  int local_18;
  
  bVar5 = 0;
  local_18 = (int)((uint)*(byte *)(*(int *)(in_EAX + 0x24) + 0x919) * *(int *)(in_EDX + 0x10)) / 100
  ;
  if ((((*(int *)(in_EDX + 0x18) < local_18) &&
       (local_1c = in_EDX, iVar1 = FUN_0001e38d(), iVar1 == 1)) &&
      (iVar1 = FUN_0002035a(), iVar1 == 1)) && (iVar1 = FUN_00020596(), iVar1 == 0)) {
    FUN_0001dbbc();
    iVar1 = 0;
    for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
      if (((*(int *)((int)local_74 + iVar1 + 8) != 0) &&
          (*(int *)(local_1c + 0x18) < *(int *)((int)local_74 + iVar1))) &&
         (iVar2 = FUN_0001e425(), iVar1 = extraout_ECX, iVar2 != 0)) {
        local_24 = (uint)CONCAT21((ushort)*(byte *)(iVar2 + 9) << 8,*(undefined1 *)(iVar2 + 8)) << 8
        ;
        local_20[0] = 0x100;
        iVar1 = FUN_0002002c();
        if (iVar1 <= *(int *)(local_1c + 0x18)) {
          return 4;
        }
        iVar1 = FUN_0001ba46();
        if (iVar1 == 0) {
          return 4;
        }
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        FUN_00051374();
        *(undefined1 *)(extraout_ECX_00 + 2) = 8;
        *(undefined1 *)(extraout_ECX_00 + 1) = 0;
        *(int *)(extraout_ECX_00 + 0x76) = local_24;
        *(undefined2 *)(extraout_ECX_00 + 0x7a + (uint)bVar5 * -8) = local_20[(uint)bVar5 * -4];
        *(undefined4 *)(extraout_ECX_00 + 0x60) = 0x19;
        *(int *)(extraout_ECX_00 + 0x7c) = local_18;
        iVar1 = DAT_002e8bee;
        *(int *)(extraout_ECX_00 + 10) = DAT_002e8bee;
        *(int *)(extraout_ECX_00 + 0x5c) = iVar1 - *(int *)(extraout_ECX_00 + 0x60);
        *(undefined4 *)(extraout_ECX_00 + 0x8e) = *(undefined4 *)(local_1c + 0x14);
        uVar3 = FUN_00018d16();
        return uVar3;
      }
      iVar1 = iVar1 + 0x10;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01916a (Ghidra: FUN_0001916a)
 * Prototype: undefined4 sub_01916a(void);
 * Address  : 0x1916a (Size: 343 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x18d16, 0x1df28, 0x1e38d, 0x720ce
 ******************************************************************************/
undefined4 FUN_0001916a(void)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  int in_EDX;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint auStack_48 [7];
  undefined4 local_2c;
  undefined1 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  
  puVar8 = auStack_48 + 5;
  local_24 = 5;
  local_20 = *(int *)(in_EAX + 0x24);
  local_2c = DAT_00174db0;
  uStack_28 = DAT_00174db4;
  auStack_48[5] = in_EDX;
  iVar4 = FUN_0001e38d();
  if (iVar4 == 1) {
    uVar6 = *(uint *)(auStack_48[5] + 0x10);
    if (uVar6 == 0) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      uVar6 = DAT_002e8bf6 % 5;
    }
    for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
      uVar1 = *(ushort *)((uint)*(byte *)((int)&local_2c + uVar6) * 2 + local_20 + 0xb);
      while (local_18 = &DAT_002ddd1b + (uint)uVar1 * 0x45, &DAT_002ddd1b < local_18) {
        uVar1 = *(ushort *)((int)&DAT_002ddd58 + (uint)uVar1 * 0x45);
        while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
          *(undefined4 *)((int)puVar8 + -4) = 0x1926a;
          iVar4 = FUN_000720ce();
          puVar7 = (undefined1 *)puVar8;
          if (iVar4 == 0) {
            if (*(char *)(uVar2 + 7) == '\x0e') {
              bVar3 = *(byte *)(uVar2 + 8);
            }
            else {
              bVar3 = *(byte *)(uVar2 + 7);
            }
            if ((&DAT_0018c4be)[(uint)bVar3 * 0x29] == '\x01') {
              *(undefined4 *)((int)puVar8 + -4) = 0;
              *(uint *)((int)puVar8 + -8) = (uint)*(ushort *)(uVar2 + 0x1b);
              *(undefined4 *)((int)puVar8 + -0xc) = 0;
              puVar7 = (undefined1 *)((int)puVar8 + -0x10);
              *(undefined4 *)((int)puVar8 + -0x10) = 0;
              *(undefined4 *)((int)puVar8 + -0x14) = 0x192b8;
              iVar4 = FUN_0001df28();
              if (0 < iVar4) {
                uVar5 = FUN_00018d16();
                return uVar5;
              }
            }
          }
          puVar8 = (uint *)puVar7;
          uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2aa);
        }
        uVar1 = *(ushort *)(local_18 + 6);
      }
      uVar6 = (int)(uVar6 + 1) % local_24;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_0192c1 (Ghidra: FUN_000192c1)
 * Prototype: undefined4 sub_0192c1(void);
 * Address  : 0x192c1 (Size: 91 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1ba46, 0x203f0
 ******************************************************************************/
undefined4 FUN_000192c1(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  iVar2 = FUN_000203f0();
  if (iVar2 == 0) {
    iVar2 = FUN_0001ba46();
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 2) = 0xd;
      *(int *)(iVar2 + 0x7c) =
           (int)((uint)*(byte *)(iVar1 + 0x918) * *(int *)(extraout_ECX + 0x10)) / 100;
      *(undefined4 *)(iVar2 + 10) = DAT_002e8bee;
      return 1;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01931c (Ghidra: FUN_0001931c)
 * Prototype: undefined4 sub_01931c(void);
 * Address  : 0x1931c (Size: 460 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001931c(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_4c;
  int local_44;
  undefined4 local_2c;
  short *local_28;
  short *local_24;
  uint local_20;
  
  local_2c = 4;
  iVar4 = *(int *)(in_EAX + 0x24);
  local_20 = 0;
  local_24 = (short *)(in_EAX + 0xb9a);
  local_4c = 0;
  local_28 = (short *)(in_EAX + 0xa1a);
  iVar10 = 0;
  local_44 = in_EAX;
  do {
    if ((int)*(char *)(iVar4 + 0xe9f) != local_20) {
      uVar8 = (uint)*(char *)(*(int *)(in_EAX + 0x24) + 0xe9f);
      uVar9 = (uint)DAT_002eb543;
      if (((((uVar9 == uVar8) || (uVar9 == local_20)) ||
           (((uint)(byte)(&DAT_0019d0f2)[uVar8 * 0x4ef] & 1 << ((byte)local_20 & 0x1f)) == 0)) ||
          ((uVar9 == local_20 || (uVar9 == uVar8)))) ||
         (((uint)(byte)(&DAT_0019d0f2)[local_4c] &
          1 << (*(byte *)(*(int *)(in_EAX + 0x24) + 0xe9f) & 0x1f)) == 0)) {
        uVar2 = *(ushort *)((int)&DAT_002e0596 + iVar10);
        while (iVar5 = (uint)uVar2 * 0x45, psVar6 = local_28, &DAT_002ddd1b < &DAT_002ddd1b + iVar5)
        {
          for (; (psVar6 < local_24 &&
                 ((*psVar6 != (ushort)((ushort)(byte)(&DAT_002ddd23)[iVar5] << 8) ||
                  (psVar6[1] != (ushort)((ushort)(byte)(&DAT_002ddd24)[iVar5] << 8)))));
              psVar6 = psVar6 + 3) {
          }
          if (psVar6 == local_24) {
            sVar3 = *(short *)(local_44 + 0xa14);
            *(short *)(local_44 + 0xa14) = (short)((sVar3 + 1) % 0x40);
            *(undefined4 *)(local_44 + 0xa10) = DAT_002e8bee;
            iVar7 = sVar3 * 6;
            *(ushort *)(local_44 + 0xa1a + iVar7) = (ushort)(byte)(&DAT_002ddd23)[iVar5] << 8;
            bVar1 = (&DAT_002ddd24)[iVar5];
            local_2c = 2;
            *(undefined2 *)(local_44 + 0xa1e + iVar7) = 0x100;
            *(ushort *)(local_44 + 0xa1c + iVar7) = (ushort)bVar1 << 8;
          }
          uVar2 = *(ushort *)(&DAT_002ddd21 + iVar5);
        }
      }
    }
    local_4c = local_4c + 0x4ef;
    local_24 = local_24 + 0xc5;
    local_28 = local_28 + 0xc5;
    local_44 = local_44 + 0x18a;
    local_20 = local_20 + 1;
    iVar10 = iVar10 + 0x1508;
  } while ((int)local_20 < 5);
  return local_2c;
}

/******************************************************************************
 * Function : sub_0194e8 (Ghidra: FUN_000194e8)
 * Prototype: undefined4 sub_0194e8(void);
 * Address  : 0x194e8 (Size: 705 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x18d16, 0x1df28, 0x22b3a, 0x8f924
 ******************************************************************************/
undefined4 FUN_000194e8(void)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int in_EAX;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int in_EDX;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint auStack_5c [5];
  undefined1 local_48 [4];
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  puVar8 = local_48;
  local_44 = *(int *)(in_EAX + 0x24);
  local_30 = (uint)*(char *)(local_44 + 0xe9f);
  local_40 = 0;
  local_28 = local_44;
  do {
    if (4 < (int)local_40) {
      return 4;
    }
    if (*(char *)(local_44 + 0x101d) != '\0') {
      iVar6 = *(int *)(in_EDX + 0x10);
      if (iVar6 == 0) {
        iVar6 = (*(int *)(in_EDX + 0x14) + 1) % 0x11;
        *(int *)(in_EDX + 0x14) = iVar6;
      }
      uVar1 = *(ushort *)(iVar6 * 2 + local_28 + 0xb);
      while (local_1c = &DAT_002ddd1b + (uint)uVar1 * 0x45, &DAT_002ddd1b < local_1c) {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        local_20 = DAT_002e8bf6 % 0x6b & 3;
        for (local_2c = 4; local_2c != 0; local_2c = local_2c + -1) {
          uVar5 = (uint)(byte)local_1c[8];
          uVar9 = (uint)(byte)local_1c[9];
          while (&DAT_002ddd1b +
                 (uint)(byte)(&DAT_002d33c8)
                             [((&DAT_0019033b)[uVar9] * 0x55 + (&DAT_0019033b)[uVar5]) * 6] * 0x45
                 == local_1c) {
            uVar5 = uVar5 + *(char *)((int)&DAT_0018b67b + local_20 * 2 + 3) * 3;
            uVar9 = uVar9 + (char)(&DAT_0018b67f)[local_20 * 2] * 3;
          }
          local_34 = local_20 * 2;
          for (local_24 = 4; local_24 != 0; local_24 = local_24 + -1) {
            if ((((&DAT_002d33ca)[((&DAT_0019033b)[uVar5] + (&DAT_0019033b)[uVar9] * 0x55) * 6] & 7)
                 == local_30) &&
               (local_18 = 3,
               (&DAT_002d33c5)[((int)uVar5 / 3 + ((int)uVar9 / 3) * 0x55) * 6] == '\v')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              local_24 = 0;
              break;
            }
            *(undefined4 *)(puVar8 + -4) = 0x196c5;
            cVar3 = FUN_0008f924();
            uVar5 = extraout_ECX;
            if (cVar3 != '\0') {
              *(undefined4 *)(puVar8 + -4) = 0x196d6;
              iVar6 = FUN_00022b3a();
              uVar5 = extraout_ECX_00;
              if (iVar6 == 0) break;
            }
            uVar5 = uVar5 + *(char *)((int)&DAT_0018b67b + local_34 + 3) * 3;
            uVar9 = uVar9 + (char)(&DAT_0018b67f)[local_34] * 3;
          }
          puVar7 = puVar8;
          if (local_24 != 0) {
            iVar10 = uVar9 + (char)(&DAT_0018b67f)[local_20 * 2] * 3;
            iVar6 = uVar5 + *(char *)((int)&DAT_0018b67b + local_20 * 2 + 3) * 3;
            local_3c = uVar5;
            local_38 = uVar9;
            if ((((&DAT_002d33ca)[((&DAT_0019033b)[iVar6] + (&DAT_0019033b)[iVar10] * 0x55) * 6] & 7
                 ) == local_30) &&
               (local_18 = 3, (&DAT_002d33c5)[(iVar6 / 3 + (iVar10 / 3) * 0x55) * 6] == '\v')) {
              *(undefined4 *)(puVar8 + -4) = 0x1976b;
              iVar6 = FUN_00022b3a();
              if (iVar6 == 0) {
                *(undefined4 *)(puVar8 + -4) = 0;
                *(uint *)(puVar8 + -8) = local_40 & 0xffff;
                *(uint *)(puVar8 + -0xc) = local_38 & 0xffff;
                puVar7 = puVar8 + -0x10;
                *(uint *)(puVar8 + -0x10) = local_3c & 0xffff;
                *(undefined4 *)(puVar8 + -0x14) = 0x1979c;
                iVar6 = FUN_0001df28();
                if (0 < iVar6) {
                  uVar4 = FUN_00018d16();
                  return uVar4;
                }
              }
            }
          }
          local_20 = (int)(local_20 + 1) % 4;
          puVar8 = puVar7;
        }
        uVar1 = *(ushort *)(local_1c + 6);
      }
    }
    local_44 = local_44 + 1;
    local_40 = local_40 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0197a9 (Ghidra: FUN_000197a9)
 * Prototype: undefined4 sub_0197a9(void);
 * Address  : 0x197a9 (Size: 292 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x18d16, 0x1ba46, 0x1d2ff, 0x1de8c, 0xe69fc
 ******************************************************************************/
undefined4 FUN_000197a9(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  short *psVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  byte bVar7;
  undefined8 uVar8;
  int local_28;
  int local_1c;
  int local_18;
  
  bVar7 = 0;
  iVar2 = (uint)DAT_002eb543 * 0x18a + in_EAX + 0xa10;
  local_18 = 0;
  psVar3 = (short *)(iVar2 + 10);
  local_1c = 0x7fffffff;
  do {
    if (*psVar3 != 0) {
      iVar4 = FUN_0001de8c();
      if (iVar4 != 0) {
        FUN_000e69fc();
        uVar8 = FUN_000e69fc();
        iVar4 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
        if (iVar4 < local_1c) {
          local_18 = local_28;
          local_1c = iVar4;
        }
      }
    }
    psVar3 = psVar3 + 3;
  } while (psVar3 != (short *)(iVar2 + 0x18a));
  if (local_18 != 0) {
    pbVar5 = (byte *)FUN_0001ba46();
    if (pbVar5 != (byte *)0x0) {
      pbVar5[2] = 0xe;
      uVar6 = DAT_002e8bee;
      pbVar5[0x80] = 0;
      *(undefined4 *)(pbVar5 + 10) = uVar6;
      *(ushort *)(pbVar5 + 0x70) = (ushort)*(byte *)(local_28 + 8) << 8;
      bVar1 = *(byte *)(local_28 + 9);
      pbVar5[0x74] = 0;
      pbVar5[0x75] = 1;
      *(ushort *)(pbVar5 + 0x72) = (ushort)bVar1 << 8;
      *(undefined4 *)(pbVar5 + 0x76) = *extraout_ECX;
      *(undefined2 *)(pbVar5 + (uint)bVar7 * -8 + 0x7a) =
           *(undefined2 *)(extraout_ECX + (uint)bVar7 * -2 + 1);
      *pbVar5 = *pbVar5 | 4;
      FUN_0001d2ff(*(undefined4 *)(pbVar5 + 0x70),*(undefined4 *)(pbVar5 + 0x74),
                   *(undefined4 *)(pbVar5 + 0x76),*(undefined4 *)(pbVar5 + 0x7a));
      extraout_ECX_00[2] = 0;
      extraout_ECX_00[1] = extraout_ECX_00[2];
      *extraout_ECX_00 = extraout_ECX_00[2];
      uVar6 = FUN_00018d16();
      return uVar6;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_0198cd (Ghidra: FUN_000198cd)
 * Prototype: undefined4 sub_0198cd(void);
 * Address  : 0x198cd (Size: 555 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1df28, 0x401aa
 ******************************************************************************/
undefined4 FUN_000198cd(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int in_EDX;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  short *psVar7;
  uint auStack_4c [5];
  undefined1 local_38 [4];
  int local_34;
  uint local_30;
  int local_2c;
  short *local_28;
  uint local_24;
  byte *local_20;
  uint local_1c;
  undefined4 local_18;
  
  puVar5 = local_38;
  iVar1 = *(int *)(in_EAX + 0x24);
  local_30 = 0;
  iVar6 = iVar1 + 1;
  local_34 = 0;
  do {
    if ((*(char *)(iVar6 + 0x100f) != '\0') && (1 < *(byte *)(iVar6 + 0x1008))) {
      local_34 = local_34 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != iVar1 + 7);
  iVar6 = iVar1;
  for (iVar3 = 1; iVar3 < 7; iVar3 = iVar3 + 1) {
    if (*(char *)(iVar6 + 0x1010) != '\0') {
      if (*(char *)(iVar6 + 0x1009) == '\0') {
        if ((local_34 == 0) && (*(int *)(in_EDX + 0x10) == 0)) {
          return 4;
        }
        if (iVar3 == *(int *)(in_EDX + 0x14)) {
          return 4;
        }
      }
      else {
        local_30 = local_30 + 1;
      }
    }
    iVar6 = iVar6 + 1;
  }
  if (local_30 != 0) {
    local_1c = *(uint *)(in_EDX + 0x14);
    if (local_1c == 0) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      local_1c = 1;
      iVar6 = DAT_002e8bf6 % local_30 + 1;
      iVar3 = iVar1;
      while (((int)local_1c < 7 &&
             (((*(char *)(iVar3 + 0x1010) == '\0' || (*(char *)(iVar3 + 0x1009) == '\0')) ||
              (iVar6 = iVar6 + -1, iVar6 != 0))))) {
        local_1c = local_1c + 1;
        iVar3 = iVar3 + 1;
      }
    }
    local_28 = (short *)(in_EAX + 0x13c4);
    local_20 = (byte *)(in_EAX + 0x134d);
    for (psVar7 = (short *)(in_EAX + 0x134c); psVar7 < local_28; psVar7 = psVar7 + 3) {
      if (*psVar7 != 0) {
        uVar2 = (uint)*(byte *)((int)psVar7 + 3);
        uVar4 = (uint)*local_20;
        local_24 = (uint)*(char *)(iVar1 + 0xe9f);
        if (((&DAT_002d33ca)[((&DAT_0019033b)[uVar4] + (&DAT_0019033b)[uVar2] * 0x55) * 6] & 7) ==
            local_24) {
          local_2c = (uVar2 / 3) * 0x55;
          local_18 = 3;
          if ((&DAT_002d33c5)[(uVar4 / 3 + local_2c) * 6] != '\v') goto LAB_000199de;
          *(undefined4 *)(puVar5 + -4) = 0;
          *(uint *)(puVar5 + -8) = local_1c & 0xffff;
          *(uint *)(puVar5 + -0xc) = uVar2;
          *(uint *)(puVar5 + -0x10) = uVar4;
          *(undefined4 *)(puVar5 + -0x14) = 0x19ad8;
          iVar6 = FUN_0001df28();
          puVar5 = puVar5 + -0x10;
          if (0 < iVar6) {
            *psVar7 = 0;
            return 1;
          }
LAB_00019a27:
          *psVar7 = 0;
        }
        else {
LAB_000199de:
          local_2c = (uVar2 / 3) * 0x55;
          local_18 = 3;
          if ((&DAT_002d33c5)[(uVar4 / 3 + local_2c) * 6] != '\n') {
            *(undefined4 *)(puVar5 + -4) = 0x19a23;
            iVar6 = FUN_000401aa();
            if (iVar6 < 0) goto LAB_00019a27;
          }
        }
      }
      local_20 = local_20 + 6;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_019af8 (Ghidra: FUN_00019af8)
 * Prototype: undefined4 sub_019af8(void);
 * Address  : 0x19af8 (Size: 570 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1df28, 0x203f0
 ******************************************************************************/
undefined4 FUN_00019af8(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  uint auStack_58 [5];
  undefined1 local_44 [4];
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  
  puVar7 = local_44;
  local_30 = *(int *)(in_EAX + 0x24);
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_1c = DAT_002e8bf6 % 0x77 & 3;
  iVar3 = FUN_000203f0();
  if (iVar3 == 0) {
    for (pbVar8 = &DAT_00174db5; *pbVar8 != 0; pbVar8 = pbVar8 + 2) {
      uVar2 = *(ushort *)((uint)*pbVar8 * 2 + local_30 + 0xb);
      while (iVar3 = (uint)uVar2 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar3) {
        if ((*(ushort *)(&DAT_002ddd56 + iVar3) < (ushort)pbVar8[1]) &&
           (*(short *)(&DAT_002ddd56 + iVar3) != 0)) {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          local_18 = (uint)*(ushort *)(&DAT_002ddd52 + iVar3);
          for (local_3c = (uint)*(ushort *)(&DAT_002ddd56 + iVar3); local_3c != 0;
              local_3c = local_3c - 1) {
            local_2c = (local_18 % 0x55) * 3;
            local_20 = 0;
            local_28 = (local_18 / 0x55) * 3;
            for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
              iVar4 = local_1c * 2;
              local_34 = local_28 + (char)(&DAT_0018b67f)[iVar4] * 3;
              local_38 = (local_34 / 3) * 0x55;
              iVar5 = local_2c + *(char *)((int)&DAT_0018b67b + iVar4 + 3) * 3;
              local_24 = 3;
              puVar6 = puVar7;
              if ((((&DAT_002d33c5)[(iVar5 / 3 + local_38) * 6] == '\v') &&
                  ((uint)((&DAT_002d33ca)
                          [((&DAT_0019033b)[local_34] * 0x55 + (&DAT_0019033b)[iVar5]) * 6] & 7) ==
                   (int)*(char *)(local_30 + 0xe9f))) && (local_20 = local_20 + 1, 1 < local_20)) {
                *(uint *)(puVar7 + -4) = (uint)*(ushort *)(&DAT_002ddd25 + iVar3);
                cVar1 = (&DAT_0018b67f)[iVar4];
                *(undefined4 *)(puVar7 + -8) = 1;
                *(uint *)(puVar7 + -0xc) = (uint)(ushort)(short)cVar1 * 3 + local_28 & 0xffff;
                puVar6 = puVar7 + -0x10;
                *(uint *)(puVar7 + -0x10) =
                     (uint)(ushort)(short)*(char *)((int)&DAT_0018b67b + iVar4 + 3) * 3 + local_2c &
                     0xffff;
                *(undefined4 *)(puVar7 + -0x14) = 0x19cc6;
                iVar4 = FUN_0001df28();
                if (0 < iVar4) {
                  return 1;
                }
              }
              local_1c = (int)(local_1c + 1) % 4;
              puVar7 = puVar6;
            }
            local_18 = (uint)*(ushort *)(&DAT_002d33c6 + local_18 * 6);
            if (local_18 == 0) break;
          }
        }
        uVar2 = *(ushort *)(&DAT_002ddd21 + iVar3);
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_019d32 (Ghidra: FUN_00019d32)
 * Prototype: undefined4 sub_019d32(void);
 * Address  : 0x19d32 (Size: 641 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1ba46, 0x1d917, 0x203f0
 ******************************************************************************/
undefined4 FUN_00019d32(void)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined8 uVar8;
  uint local_1c;
  undefined4 local_18;
  
  uVar8 = FUN_0001d917();
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  local_18 = 4;
  if (((int)uVar8 < *(int *)(iVar4 + 0x14)) || ((int)uVar8 < *(int *)(iVar4 + 0x10))) {
    for (iVar4 = in_EAX + 0x38; (*(byte *)(iVar4 + 0x44) & 2) == 0; iVar4 = iVar4 + 0x48) {
      if ((*(code **)(iVar4 + 0x18) == FUN_0001b119) &&
         (*(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1,
         0x14 < (uint)(DAT_002e8bee - *(int *)(iVar4 + 0x3c)))) {
        *(undefined4 *)(iVar4 + 0x3c) = 0;
      }
    }
  }
  iVar4 = *(int *)(in_EAX + 0x24);
  if ((((*(int *)(iVar4 + 0xaf9) < *(int *)(iVar4 + 0x14b8)) && (*(short *)(iVar4 + 0x1b) != 0)) &&
      (iVar5 = FUN_000203f0(), iVar5 == 0)) && (iVar5 = FUN_0001ba46(), iVar5 != 0)) {
    *(undefined1 *)(iVar5 + 2) = 0x12;
    *(undefined4 *)(iVar5 + 0x70) = 0;
    iVar6 = DAT_002e8bee;
    *(undefined4 *)(iVar5 + 0x60) = 1;
    *(undefined4 *)(iVar5 + 0x70) = 5;
    *(undefined4 *)(iVar5 + 0x76) = 0;
    *(int *)(iVar5 + 10) = iVar6;
    *(int *)(iVar5 + 0x5c) = iVar6;
    *(int *)(iVar5 + 0x7c) = (*(int *)(iVar4 + 0x14b8) * 3) / 2;
    iVar6 = *(int *)(iVar4 + 0x14b8);
    *(undefined4 *)(iVar5 + 0x86) = 0;
    local_18 = 1;
    *(int *)(iVar5 + 0x80) = (iVar6 * 3) / 2;
  }
  if ((*(int *)(iVar4 + 0xaf9) < (*(int *)(iVar4 + 0x14b8) * 3) / 2) &&
     (*(short *)(iVar4 + 0x27) != 0)) {
    iVar5 = (uint)*(ushort *)(iVar4 + 0x27) * 0x45;
    local_1c = 0;
    for (uVar7 = (&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x2d)]; DAT_001ae9fc < uVar7;
        uVar7 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x1f)]) {
      if (*(char *)(uVar7 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar7 + 8);
      }
      else {
        cVar3 = *(char *)(uVar7 + 7);
      }
      if (cVar3 == '!') {
        iVar6 = FUN_0001ba46();
        if (iVar6 == 0) {
          return local_18;
        }
        *(undefined1 *)(iVar6 + 2) = 0xb;
        *(ushort *)(iVar6 + 0x86) = (ushort)(byte)(&DAT_002ddd23)[iVar5] << 8;
        *(ushort *)(iVar6 + 0x88) = (ushort)(byte)(&DAT_002ddd24)[iVar5] << 8;
        uVar1 = *(undefined2 *)(extraout_ECX + 0x1b);
        *(undefined2 *)(iVar6 + 0x80) = 0;
        *(undefined2 *)(iVar6 + 0x76) = uVar1;
        local_18 = 1;
        local_1c = local_1c + 1;
        *(int *)(iVar6 + 10) = DAT_002e8bee;
        uVar7 = extraout_ECX;
        if (2 < local_1c) break;
      }
    }
    if (local_1c < 3) {
      uVar2 = *(ushort *)(iVar4 + 0x2f);
      while (uVar7 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < uVar7) {
        if (*(char *)(uVar7 + 7) == '\x0e') {
          cVar3 = *(char *)(uVar7 + 8);
        }
        else {
          cVar3 = *(char *)(uVar7 + 7);
        }
        if (cVar3 == '!') {
          iVar4 = FUN_0001ba46();
          if (iVar4 == 0) {
            return local_18;
          }
          *(undefined1 *)(iVar4 + 2) = 0xb;
          *(ushort *)(iVar4 + 0x86) = (ushort)(byte)(&DAT_002ddd23)[iVar5] << 8;
          *(ushort *)(iVar4 + 0x88) = (ushort)(byte)(&DAT_002ddd24)[iVar5] << 8;
          uVar1 = *(undefined2 *)(uVar7 + 0x1b);
          *(undefined2 *)(iVar4 + 0x80) = 0;
          *(undefined2 *)(iVar4 + 0x76) = uVar1;
          local_18 = 1;
          local_1c = local_1c + 1;
          *(int *)(iVar4 + 10) = DAT_002e8bee;
          if (2 < local_1c) {
            return 1;
          }
        }
        uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x1f);
      }
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : dk_unhandled_event_type_019fb4 (Ghidra: FUN_00019fb4)
 * Prototype: void dk_unhandled_event_type_019fb4(void);
 * Address  : 0x19fb4 (Size: 216 bytes)
 * Module   : compevnt.cpp [direct_file_string_xref]
 * OrigLine : compevnt.cpp:57 ("Unhandled Event Type")
 * Naming   : String 'Unhandled Event Type'
 * Callers  : 1 -> 0x21416
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x160a61: "compevnt.cpp"
 *   - 0x160a4c: "Unhandled Event Type"
 ******************************************************************************/
void FUN_00019fb4(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  byte *pbVar4;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  for (piVar3 = (int *)(in_EAX + 0x800); (*piVar3 != 0 && (piVar3 < (int *)(in_EAX + 0xa10)));
      piVar3 = piVar3 + 0xb) {
    if (piVar3[1] == 0) {
      for (pbVar4 = &DAT_002e707c; pbVar4 < &DAT_002e78b0; pbVar4 = pbVar4 + 0x15) {
        if (((((*pbVar4 & 1) != 0) && ((uint)pbVar4[10] == (int)*(char *)(iVar1 + 0xe9f))) &&
            (piVar3[5] == *(int *)(pbVar4 + 0x10))) && ((uint)pbVar4[0xb] == piVar3[2])) {
          iVar2 = (*(code *)piVar3[3])();
          piVar3 = extraout_ECX;
          if (iVar2 == 1) {
            extraout_ECX[10] = DAT_002e8bee;
          }
        }
      }
    }
    else if ((uint)piVar3[1] < 5) {
      if ((uint)(piVar3[10] + piVar3[5]) <= DAT_002e8bee) {
        (*(code *)piVar3[4])();
        extraout_ECX_00[10] = DAT_002e8bee;
        piVar3 = extraout_ECX_00;
      }
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("compevnt.cpp", line 57, "Unhandled Event Type") */
      piVar3 = extraout_ECX_01;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_01a08c (Ghidra: FUN_0001a08c)
 * Prototype: undefined4 sub_01a08c(void);
 * Address  : 0x1a08c (Size: 204 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1ba46, 0x1e061, 0x1e4a8
 ******************************************************************************/
undefined4 FUN_0001a08c(void)

{
  undefined4 uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_EDX;
  int unaff_EBX;
  byte bVar5;
  undefined4 local_18;
  undefined2 auStack_14 [2];
  
  bVar5 = 0;
  local_18._0_3_ = (uint3)*(byte *)(unaff_EBX + 2) << 8;
  sVar2 = (short)local_18;
  local_18 = CONCAT13(*(undefined1 *)(unaff_EBX + 6),(int3)local_18);
  if ((sVar2 != 0) && (local_18._2_2_ != 0)) {
    iVar3 = FUN_0001e4a8();
    iVar4 = (*(int *)(in_EDX + 0x1c) * iVar3) / 100;
    if ((iVar4 == 0) && (iVar3 != 0)) {
      iVar4 = 1;
    }
    if (iVar4 != 0) {
      iVar3 = FUN_0001e061();
      if (iVar3 != 0) {
        iVar3 = FUN_0001ba46();
        if (iVar3 != 0) {
          *(undefined1 *)(iVar3 + 2) = 0xc;
          *(undefined4 *)(iVar3 + 0x76) = local_18;
          *(undefined2 *)(iVar3 + 0x7a + (uint)bVar5 * -8) = auStack_14[(uint)bVar5 * -4];
          *(int *)(iVar3 + 0x7c) = iVar4;
          *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(in_EDX + 0x20);
          uVar1 = DAT_002e8bee;
          *(undefined4 *)(iVar3 + 10) = DAT_002e8bee;
          *(undefined4 *)(iVar3 + 0x5c) = uVar1;
          *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(in_EAX + 0x34);
          return 1;
        }
      }
    }
    return 4;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01a158 (Ghidra: FUN_0001a158)
 * Prototype: undefined4 sub_01a158(void);
 * Address  : 0x1a158 (Size: 383 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x1ba46, 0x1e061, 0x1e38d, 0x1f352, 0x2035a, 0x203f0
 ******************************************************************************/
undefined4 FUN_0001a158(void)

{
  int iVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  int unaff_EBX;
  byte bVar4;
  undefined8 uVar5;
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  int local_14;
  
  bVar4 = 0;
  local_1c._0_3_ = (uint3)*(byte *)(unaff_EBX + 2) << 8;
  sVar2 = (short)local_1c;
  local_1c = CONCAT13(*(undefined1 *)(unaff_EBX + 6),(int3)local_1c);
  if ((sVar2 != 0) && (local_1c._2_2_ != 0)) {
    uVar5 = FUN_0001f352();
    local_14 = (*(int *)((int)((ulonglong)uVar5 >> 0x20) + 0x1c) * (int)uVar5) / 100;
    if ((local_14 == 0) && ((int)uVar5 != 0)) {
      local_14 = 1;
    }
    if ((local_14 != 0) && (iVar3 = FUN_0001e061(), iVar3 != 0)) {
      iVar3 = FUN_000203f0();
      if ((iVar3 == 0) || ((*(byte *)(in_EDX + 0x20) & 2) != 0)) {
        iVar3 = FUN_0001ba46();
        if (iVar3 != 0) {
          *(undefined1 *)(iVar3 + 2) = 0xc;
          *(undefined4 *)(iVar3 + 0x76) = local_1c;
          *(undefined2 *)(iVar3 + 0x7a + (uint)bVar4 * -8) = auStack_18[(uint)bVar4 * -4];
          *(int *)(iVar3 + 0x7c) = local_14;
          *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(in_EDX + 0x20);
          iVar1 = DAT_002e8bee;
          *(int *)(iVar3 + 10) = DAT_002e8bee;
          *(int *)(iVar3 + 0x5c) = iVar1;
          *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(in_EAX + 0x34);
          return 1;
        }
      }
      else {
        iVar3 = FUN_0001e38d();
        if (((iVar3 == 1) &&
            (((iVar3 = FUN_000203f0(), iVar3 == 0 || ((*(byte *)(in_EDX + 0x20) & 2) != 0)) &&
             (iVar3 = FUN_0002035a(), iVar3 != 0)))) && (iVar3 = FUN_0001ba46(), iVar3 != 0)) {
          *(undefined1 *)(iVar3 + 2) = 8;
          *(undefined1 *)(iVar3 + 1) = 0;
          *(undefined4 *)(iVar3 + 0x76) = local_1c;
          *(undefined2 *)(iVar3 + 0x7a + (uint)bVar4 * -8) = auStack_18[(uint)bVar4 * -4];
          *(undefined4 *)(iVar3 + 0x60) = 0x19;
          *(int *)(iVar3 + 0x7c) = local_14;
          iVar1 = DAT_002e8bee;
          *(undefined4 *)(iVar3 + 0x8e) = 0x9c4;
          *(int *)(iVar3 + 10) = iVar1;
          *(int *)(iVar3 + 0x5c) = iVar1 - *(int *)(iVar3 + 0x60);
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01a2d7 (Ghidra: FUN_0001a2d7)
 * Prototype: undefined8 sub_01a2d7(void);
 * Address  : 0x1a2d7 (Size: 173 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1a384
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0001a2d7(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((int)*(short *)(in_EAX + 0x5e) <
      ((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] *
             (uint)*(byte *)(iVar3 + 0x23) * 0x23) / 100 +
      (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73]) / 2) {
LAB_0001a31d:
    uVar1 = 1;
  }
  else {
    iVar2 = iVar3;
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      if ((*(short *)(iVar2 + 0x13) != 0) &&
         (*(char *)((&DAT_001ae9fc)[*(ushort *)(iVar2 + 0x13)] + 0x1a) != '\x17'))
      goto LAB_0001a31d;
      iVar2 = iVar2 + 2;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if ((*(short *)(iVar3 + 0xb) != 0) &&
         (*(char *)((&DAT_001ae9fc)[*(ushort *)(iVar3 + 0xb)] + 0x1a) != '\x17')) goto LAB_0001a31d;
      iVar3 = iVar3 + 2;
    }
    uVar1 = 0;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_01a384 (Ghidra: FUN_0001a384)
 * Prototype: undefined4 sub_01a384(void);
 * Address  : 0x1a384 (Size: 285 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1a2d7, 0x1ba46, 0x84ff8
 ******************************************************************************/
undefined4 FUN_0001a384(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  ushort *extraout_ECX;
  undefined4 local_18;
  
  local_18 = 4;
  if (*(int *)(*(int *)(in_EAX + 0x24) + 0x14a9) != 0) {
    uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2f);
    while (iVar3 = (&DAT_001ae9fc)[uVar1], iVar3 != DAT_001ae9fc) {
      if (((((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 3) & 1) != 0) ||
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 3) & 2) != 0)) &&
          (*(char *)(iVar3 + 7) != 'C')) &&
         ((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0xad) & 2) == 0)) {
        if (*(char *)(iVar3 + 7) == '\x0e') {
          cVar4 = *(char *)(iVar3 + 8);
        }
        else {
          cVar4 = *(char *)(iVar3 + 7);
        }
        if (cVar4 != '[') {
          iVar5 = FUN_00084ff8();
          if (iVar5 != 0) {
            iVar5 = FUN_0001a2d7();
            if (iVar5 != 0) {
              iVar5 = FUN_0001ba46();
              if (iVar5 != 0) {
                *(undefined1 *)(iVar5 + 2) = 0xb;
                *(undefined2 *)(iVar5 + 0x86) =
                     *(undefined2 *)((&DAT_001ae9fc)[*extraout_ECX] + 0xd);
                *(undefined2 *)(iVar5 + 0x88) =
                     *(undefined2 *)((&DAT_001ae9fc)[*extraout_ECX] + 0xf);
                uVar2 = *(undefined2 *)(iVar3 + 0x1b);
                *(undefined2 *)(iVar5 + 0x80) = 0;
                *(undefined2 *)(iVar5 + 0x76) = uVar2;
                local_18 = 1;
                *(undefined4 *)(iVar5 + 10) = DAT_002e8bee;
              }
            }
          }
        }
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x1f);
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : sub_01a4a1 (Ghidra: FUN_0001a4a1)
 * Prototype: undefined4 sub_01a4a1(void);
 * Address  : 0x1a4a1 (Size: 364 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x1ba46, 0x1e061, 0x1e38d, 0x1f352, 0x201ed, 0x2035a, 0x203f0
 ******************************************************************************/
undefined4 FUN_0001a4a1(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  byte bVar4;
  undefined8 uVar5;
  undefined2 auStack_1c [2];
  int local_18;
  
  bVar4 = 0;
  if ((*(int *)(*(int *)(in_EAX + 0x24) + 0x14a9) != 0) && (iVar3 = FUN_000201ed(), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0xd);
    auStack_1c[(uint)bVar4 * -4] = *(undefined2 *)(iVar3 + 0x11 + (uint)bVar4 * -8);
    uVar5 = FUN_0001f352();
    local_18 = (*(int *)((int)((ulonglong)uVar5 >> 0x20) + 0x1c) * (int)uVar5) / 100;
    if ((local_18 == 0) && ((int)uVar5 != 0)) {
      local_18 = 1;
    }
    if ((local_18 != 0) && (iVar3 = FUN_0001e061(), iVar3 != 0)) {
      iVar3 = FUN_000203f0();
      if (iVar3 == 0) {
        iVar3 = FUN_0001ba46();
        if (iVar3 != 0) {
          *(undefined1 *)(iVar3 + 2) = 0xc;
          *(undefined4 *)(iVar3 + 0x76) = uVar1;
          *(undefined2 *)(iVar3 + 0x7a + (uint)bVar4 * -8) = auStack_1c[(uint)bVar4 * -4];
          *(int *)(iVar3 + 0x7c) = local_18;
          *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(in_EDX + 0x20);
          iVar2 = DAT_002e8bee;
          *(int *)(iVar3 + 10) = DAT_002e8bee;
          *(int *)(iVar3 + 0x5c) = iVar2;
          *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(in_EAX + 0x34);
          return 1;
        }
      }
      else {
        iVar3 = FUN_0001e38d();
        if ((((iVar3 == 1) && (iVar3 = FUN_000203f0(), iVar3 == 0)) &&
            (iVar3 = FUN_0002035a(), iVar3 != 0)) && (iVar3 = FUN_0001ba46(), iVar3 != 0)) {
          *(undefined1 *)(iVar3 + 2) = 8;
          *(undefined1 *)(iVar3 + 1) = 0;
          *(undefined4 *)(iVar3 + 0x76) = uVar1;
          *(undefined2 *)(iVar3 + 0x7a + (uint)bVar4 * -8) = auStack_1c[(uint)bVar4 * -4];
          *(undefined4 *)(iVar3 + 0x60) = 0x19;
          *(int *)(iVar3 + 0x7c) = local_18;
          iVar2 = DAT_002e8bee;
          *(undefined4 *)(iVar3 + 0x8e) = 0x9c4;
          *(int *)(iVar3 + 10) = iVar2;
          *(int *)(iVar3 + 0x5c) = iVar2 - *(int *)(iVar3 + 0x60);
          return 1;
        }
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01a60d (Ghidra: FUN_0001a60d)
 * Prototype: undefined4 sub_01a60d(void);
 * Address  : 0x1a60d (Size: 126 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1ba46, 0x1e38d, 0x200e0
 ******************************************************************************/
undefined4 FUN_0001a60d(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  
  if (*(int *)(*(int *)(in_EAX + 0x24) + 0x14a9) != 0) {
    iVar1 = FUN_0001e38d();
    if (iVar1 == 1) {
      iVar1 = FUN_000200e0();
      if (iVar1 != 0) {
        iVar2 = FUN_0001ba46();
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + 2) = 0xf;
          *(undefined2 *)(iVar2 + 0x76) = *(undefined2 *)(iVar1 + 0x1b);
          *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(in_EDX + 0x1c);
          *(undefined4 *)(iVar2 + 10) = DAT_002e8bee;
          return 1;
        }
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01a68b (Ghidra: FUN_0001a68b)
 * Prototype: undefined4 sub_01a68b(void);
 * Address  : 0x1a68b (Size: 463 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x1ba46, 0x1e38d, 0x200e0, 0x720ce
 ******************************************************************************/
undefined4 FUN_0001a68b(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  int in_EDX;
  int iVar5;
  int local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = -1;
  local_20 = 0;
  iVar5 = *(int *)(in_EAX + 0x24);
  local_24 = 0;
  local_28 = 0;
  if ((((*(int *)(iVar5 + 0x14a9) != 0) && (iVar4 = FUN_000200e0(), iVar4 != 0)) &&
      (uVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar4 + 100)] + 0xa2)],
      DAT_001ae9fc < uVar3)) && (0 < *(short *)(uVar3 + 0x5e))) {
    bVar1 = (&DAT_002d33ca)
            [((&DAT_0019033b)[*(byte *)(uVar3 + 0xe)] +
             (&DAT_0019033b)[*(byte *)(uVar3 + 0x10)] * 0x55) * 6];
    cVar2 = *(char *)(iVar5 + 0xe9f);
    iVar5 = *(int *)(in_EDX + 0x24);
    for (local_30 = 0; iVar5 = (iVar5 + 1) % 4, local_30 < 4; local_30 = local_30 + 1) {
      local_1c = (int)(char)(&DAT_00174e1b)[iVar5 * 0xf];
      if (local_1c == -1) break;
      if (((&DAT_00174e1d)[iVar5 * 0xf] == '\0') || ((uint)(bVar1 & 7) == (int)cVar2)) {
        local_20 = *(int *)(&DAT_00174e1e + iVar5 * 0xf);
        if (local_20 < 0) {
          local_20 = *(int *)(in_EDX + 0x20);
        }
        local_24 = *(int *)(&DAT_00174e22 + iVar5 * 0xf);
        if (local_24 < 0) {
          local_20 = *(int *)(in_EDX + 0x1c);
        }
        local_28 = (uint)(byte)(&DAT_00174e1c)[iVar5 * 0xf];
        iVar4 = FUN_000720ce();
        if ((iVar4 == 0) && (iVar4 = FUN_0001e38d(), iVar4 == 1)) break;
      }
    }
    if (local_1c != -1) {
      *(int *)(in_EDX + 0x24) = iVar5;
      iVar5 = FUN_0001ba46();
      if (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 2) = 0x11;
        *(undefined2 *)(iVar5 + 0x76) = *(undefined2 *)(uVar3 + 0x1b);
        *(int *)(iVar5 + 0x70) = local_24;
        *(int *)(iVar5 + 0x7c) = local_20;
        *(uint *)(iVar5 + 0x80) = local_28;
        *(undefined4 *)(iVar5 + 10) = DAT_002e8bee;
        *(int *)(iVar5 + 0x86) = local_1c;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01a85a (Ghidra: FUN_0001a85a)
 * Prototype: undefined4 sub_01a85a(void);
 * Address  : 0x1a85a (Size: 113 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x207b3
 ******************************************************************************/
undefined4 FUN_0001a85a(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 4;
  for (iVar3 = 0; *(int *)((int)&DAT_001792db + iVar3) != -1; iVar3 = iVar3 + 8) {
    iVar1 = FUN_000207b3();
    iVar2 = in_EAX + 0x38;
    if (iVar1 < 1) {
      for (; (*(byte *)(iVar2 + 0x44) & 2) == 0; iVar2 = iVar2 + 0x48) {
        if (*(int *)(iVar2 + 0x2c) == *(int *)((int)&PTR_PTR_001792df + iVar3)) {
          *(undefined4 *)(iVar2 + 0x3c) = 0;
          *(undefined4 *)(iVar2 + 0x38) = 0;
          uVar4 = 1;
          *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xf6;
        }
      }
    }
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_01a8cb (Ghidra: FUN_0001a8cb)
 * Prototype: undefined4 sub_01a8cb(void);
 * Address  : 0x1a8cb (Size: 165 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1ba46, 0x203f0
 ******************************************************************************/
undefined4 FUN_0001a8cb(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int in_EDX;
  
  if (*(int *)(*(int *)(in_EAX + 0x24) + 0xaf9) <= *(int *)(*(int *)(in_EAX + 0x24) + 0x14b8)) {
    iVar3 = FUN_000203f0();
    if (iVar3 == 0) {
      iVar3 = FUN_0001ba46();
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 2) = 0x12;
        uVar1 = *(undefined4 *)(in_EDX + 0x20);
        *(undefined4 *)(iVar3 + 0x60) = 1;
        *(undefined4 *)(iVar3 + 0x76) = 0;
        *(undefined4 *)(iVar3 + 0x70) = uVar1;
        uVar1 = DAT_002e8bee;
        *(undefined4 *)(iVar3 + 0x70) = 5;
        *(undefined4 *)(iVar3 + 10) = uVar1;
        *(undefined4 *)(iVar3 + 0x5c) = uVar1;
        *(int *)(iVar3 + 0x7c) = (*(int *)(extraout_ECX + 0x14b8) * 3) / 2;
        iVar2 = *(int *)(extraout_ECX + 0x14b8);
        *(undefined4 *)(iVar3 + 0x86) = 0;
        *(int *)(iVar3 + 0x80) = (iVar2 * 3) / 2;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01a970 (Ghidra: FUN_0001a970)
 * Prototype: undefined8 sub_01a970(void);
 * Address  : 0x1a970 (Size: 145 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x21416
 * Callees  : 1 -> 0x1aa01
 ******************************************************************************/
undefined8 FUN_0001a970(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *puVar3;
  undefined4 in_EDX;
  int iVar4;
  
  iVar2 = FUN_0001aa01();
  iVar4 = 0;
  puVar3 = extraout_ECX;
  if (iVar2 != 0) {
    iVar4 = (**(code **)(iVar2 + 0x18))();
    puVar3 = extraout_ECX_00;
    if (iVar4 == 1) {
      *(short *)(extraout_ECX_00 + 0x531) = (short)((iVar2 - (int)(extraout_ECX_00 + 0xe)) / 0x48);
      iVar4 = (**(code **)(iVar2 + 0x1c))();
      puVar3 = extraout_ECX_01;
      if (iVar4 == 1) {
        *(undefined4 *)(iVar2 + 0x30) = DAT_002e8bee;
        *extraout_ECX_01 = 3;
      }
    }
    uVar1 = DAT_002e8bee;
    if (iVar4 == 4) {
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = uVar1;
    }
    uVar1 = DAT_002e8bee;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      *(undefined4 *)(iVar2 + 0x38) = uVar1;
    }
  }
  if (iVar4 != 1) {
    *(undefined2 *)(puVar3 + 0x531) = 0;
  }
  return CONCAT44(in_EDX,iVar4);
}

/******************************************************************************
 * Function : sub_01aa01 (Ghidra: FUN_0001aa01)
 * Prototype: undefined8 sub_01aa01(void);
 * Address  : 0x1aa01 (Size: 186 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1a970
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0001aa01(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar6 = -0x80000000;
  local_20 = 0x96;
  local_1c = 100;
  iVar4 = 0;
  iVar2 = 0;
  iVar3 = 0;
  for (iVar1 = in_EAX + 0x38; (*(byte *)(iVar1 + 0x44) & 2) == 0; iVar1 = iVar1 + 0x48) {
    if (((((*(byte *)(iVar1 + 0x44) & 4) == 0) && ((*(byte *)(iVar1 + 0x44) & 8) == 0)) &&
        ((*(byte *)(iVar1 + 0x44) & 0x10) == 0)) &&
       (((*(byte *)(iVar1 + 0x44) & 0x20) == 0 && ((*(byte *)(iVar1 + 0x44) & 1) == 0)))) {
      if (*(int *)(iVar1 + 0x3c) == 0) {
        if (*(int *)(iVar1 + 0x38) == 0) {
          if (iVar6 < *(int *)(iVar1 + 4)) {
            iVar6 = *(int *)(iVar1 + 4);
            iVar3 = iVar1;
          }
        }
        else {
          iVar5 = DAT_002e8bee - *(int *)(iVar1 + 0x38);
          if (local_20 < iVar5) {
            iVar4 = iVar1;
            local_20 = iVar5;
          }
        }
      }
      else {
        iVar5 = DAT_002e8bee - *(int *)(iVar1 + 0x3c);
        if (local_1c < iVar5) {
          iVar2 = iVar1;
          local_1c = iVar5;
        }
      }
    }
  }
  if ((iVar2 != 0) && ((iVar3 == 0 || (*(int *)(iVar3 + 4) < *(int *)(iVar2 + 4))))) {
    iVar3 = iVar2;
  }
  if ((iVar4 != 0) && ((iVar3 == 0 || (*(int *)(iVar3 + 4) < *(int *)(iVar4 + 4))))) {
    iVar3 = iVar4;
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_01aabb (Ghidra: FUN_0001aabb)
 * Prototype: void sub_01aabb(void);
 * Address  : 0x1aabb (Size: 31 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x1ac13, 0x1ac93, 0x1b3ad, 0x1b9ad
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001aabb(void)

{
  int in_EDX;
  
  if (in_EDX != 0) {
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 8;
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) & 0xdf;
    *(undefined4 *)(in_EDX + 0x34) = DAT_002e8bee;
    (**(code **)(in_EDX + 0x24))();
  }
  return;
}

/******************************************************************************
 * Function : sub_01aada (Ghidra: FUN_0001aada)
 * Prototype: void sub_01aada(void);
 * Address  : 0x1aada (Size: 27 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x1ae5c, 0x1b15c, 0x1b3d7, 0x1b561, 0x1ba1e
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001aada(void)

{
  undefined4 uVar1;
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined4 *)(in_EDX + 0x38) = 0;
    uVar1 = DAT_002e8bee;
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) & 0xdf;
    *(undefined4 *)(in_EDX + 0x3c) = uVar1;
    *(undefined4 *)(in_EDX + 0x34) = uVar1;
  }
  return;
}

/******************************************************************************
 * Function : sub_01aaf5 (Ghidra: FUN_0001aaf5)
 * Prototype: void sub_01aaf5(void);
 * Address  : 0x1aaf5 (Size: 31 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1ac13, 0x1ac93
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001aaf5(void)

{
  undefined4 uVar1;
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined4 *)(in_EDX + 0x3c) = 0;
    *(undefined4 *)(in_EDX + 0x38) = 0;
    uVar1 = DAT_002e8bee;
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) & 0xdf;
    *(undefined4 *)(in_EDX + 0x34) = uVar1;
  }
  return;
}

/******************************************************************************
 * Function : sub_01ab14 (Ghidra: FUN_0001ab14)
 * Prototype: undefined4 sub_01ab14(void);
 * Address  : 0x1ab14 (Size: 96 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x1db99, 0x2008f
 ******************************************************************************/
undefined4 FUN_0001ab14(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  iVar3 = FUN_0002008f();
  if (iVar3 < *(int *)(in_EAX + 0x30)) {
    for (iVar3 = 0; *(int *)((int)&DAT_001792db + iVar3) != -1; iVar3 = iVar3 + 8) {
      iVar2 = *(int *)((int)&DAT_001792db + iVar3);
      if ((*(short *)(iVar2 * 2 + iVar1 + 0xb) == 0) &&
         (iVar4 = FUN_0001db99(), iVar3 = extraout_ECX, iVar4 == 1)) {
        *(int *)(in_EDX + 0x10) = iVar2;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01ab74 (Ghidra: FUN_0001ab74)
 * Prototype: int sub_01ab74(void);
 * Address  : 0x1ab74 (Size: 159 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1db99, 0x2008f, 0x207b3
 ******************************************************************************/
int FUN_0001ab74(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int in_EDX;
  
  iVar3 = *(int *)(in_EAX + 0x24);
  iVar2 = FUN_0001db99();
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 4;
    }
    return iVar2;
  }
  iVar2 = FUN_0002008f();
  if (iVar2 < *(int *)(extraout_ECX + 0x30)) {
    iVar2 = 0;
    uVar1 = *(ushort *)(iVar3 + 0xb + *(int *)(in_EDX + 0x10) * 2);
    while (iVar3 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar3) {
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_002ddd29 + iVar3);
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar3);
    }
    if (iVar2 != 0) {
      iVar3 = FUN_000207b3();
      if (iVar3 == 9999) {
        if (*(int *)(in_EDX + 0x10) == 0xd) {
          return 4;
        }
      }
      else if ((iVar2 * 10) / 100 <= iVar3) {
        return 4;
      }
    }
    return 1;
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01ac13 (Ghidra: FUN_0001ac13)
 * Prototype: undefined4 sub_01ac13(void);
 * Address  : 0x1ac13 (Size: 128 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1aabb, 0x1aaf5, 0x1cf1c
 ******************************************************************************/
undefined4 FUN_0001ac13(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  iVar1 = FUN_0001cf1c(*(undefined4 *)(in_EDX + 0x14));
  if (iVar1 == 0) {
    if (*(int *)(in_EDX + 0xc) < *(int *)(in_EDX + 8)) {
      if (*(int *)(in_EDX + 8) < 3) {
        return 0;
      }
      *(int *)(in_EDX + 8) = *(int *)(in_EDX + 8) + -1;
    }
    else {
      if (*(int *)(in_EDX + 0xc) < 3) {
        return 0;
      }
      *(int *)(in_EDX + 0xc) = *(int *)(in_EDX + 0xc) + -1;
    }
    FUN_0001aaf5();
  }
  else {
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 0x20;
    *(short *)(iVar1 + 0x8c) = (short)((in_EDX - (in_EAX + 0x38)) / 0x48);
    FUN_0001aabb();
  }
  return 2;
}

/******************************************************************************
 * Function : sub_01ac93 (Ghidra: FUN_0001ac93)
 * Prototype: undefined4 sub_01ac93(void);
 * Address  : 0x1ac93 (Size: 140 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1aabb, 0x1aaf5, 0x1cf1c
 ******************************************************************************/
undefined4 FUN_0001ac93(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  iVar1 = FUN_0001cf1c(*(undefined4 *)(in_EDX + 0x14));
  if (iVar1 != 0) {
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) | 0x20;
    *(short *)(iVar1 + 0x8c) = (short)((in_EDX - (in_EAX + 0x38)) / 0x48);
    FUN_0001aabb();
    *(byte *)(in_EDX + 0x44) = *(byte *)(in_EDX + 0x44) & 0xf7;
    return 2;
  }
  if (*(int *)(in_EDX + 0xc) < *(int *)(in_EDX + 8)) {
    if (*(int *)(in_EDX + 8) < 3) {
      return 0;
    }
    *(int *)(in_EDX + 8) = *(int *)(in_EDX + 8) + -1;
  }
  else {
    if (*(int *)(in_EDX + 0xc) < 3) {
      return 0;
    }
    *(int *)(in_EDX + 0xc) = *(int *)(in_EDX + 0xc) + -1;
  }
  FUN_0001aaf5();
  return 2;
}

