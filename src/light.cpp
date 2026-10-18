/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: light.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 54
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0ac094 (Ghidra: FUN_000ac094)
 * Prototype: undefined8 sub_0ac094(void);
 * Address  : 0xac094 (Size: 264 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x239ee, 0x64ae7, 0xb3c90, 0xc9b2c, 0xcc968
 ******************************************************************************/
undefined8 FUN_000ac094(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 in_EDX;
  undefined1 *puVar3;
  
  if (((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xab) & 1) == 0) &&
     (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 0xf) == 0)) {
    iVar1 = (uint)(byte)(&DAT_002d33c8)
                        [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                         (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45;
    puVar3 = &DAT_002ddd1b + iVar1;
    if ((puVar3 != (undefined1 *)0x0) &&
       ((*(short *)(&DAT_002ddd25 + iVar1) != 0xd ||
        ((&DAT_002ddd1e)[iVar1] != *(char *)(in_EAX + 6))))) {
      puVar3 = (undefined1 *)0x0;
    }
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)FUN_000c9b2c();
    }
    if (puVar3 == (undefined1 *)0x0) {
      cVar2 = FUN_000239ee();
    }
    else {
      cVar2 = FUN_000cc968();
    }
    if (cVar2 != '\0') {
      FUN_000b3c90();
      FUN_00064ae7();
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0ac19c (Ghidra: FUN_000ac19c)
 * Prototype: undefined8 sub_0ac19c(void);
 * Address  : 0xac19c (Size: 125 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x64ae7, 0xb4ac4
 ******************************************************************************/
undefined8 FUN_000ac19c(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xab) & 1) == 0) {
    uStack_14 = 0;
    cVar1 = FUN_000b4ac4();
    if ((cVar1 == '\x01') || (puVar2 = &uStack_14, cVar1 == -1)) {
      FUN_00064ae7();
      puVar2 = &uStack_14;
    }
  }
  return CONCAT44(*(undefined4 *)((int)puVar2 + 4),1);
}

/******************************************************************************
 * Function : sub_0ac370 (Ghidra: FUN_000ac370)
 * Prototype: void sub_0ac370(void);
 * Address  : 0xac370 (Size: 697 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31599, 0x322e9
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ac370(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int unaff_EBX;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  iVar1 = 0x100 - unaff_EBX;
  iVar2 = in_EAX + DAT_00335168 + in_EDX * 0x500;
  iVar3 = (in_EAX - DAT_00335182) + 1;
  local_2c = 0;
  puVar7 = (undefined1 *)
           (DAT_003d9818 + (in_EAX - DAT_00335182) + DAT_003d9834 * (in_EDX - DAT_00335186));
  local_30 = (in_EDX - DAT_00335186) + 1;
  iVar4 = DAT_003d9834 - iVar3;
  puVar5 = puVar7;
  while (local_30 = local_30 + -1, -1 < local_30) {
    iVar8 = 0;
    iVar6 = iVar3;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      iVar9 = iVar8 >> 8;
      iVar8 = iVar8 + iVar1;
      *puVar5 = *(undefined1 *)((iVar2 + (local_2c >> 8) * -0x500) - iVar9);
      puVar5 = puVar5 + -1;
    }
    local_2c = local_2c + iVar1;
    puVar5 = puVar5 + -iVar4;
  }
  iVar3 = (DAT_003d982c - (in_EAX - DAT_00335182)) + -1;
  local_20 = 0;
  iVar4 = DAT_003d9834 + iVar3;
  local_24 = (in_EDX - DAT_00335186) + 1;
  puVar5 = puVar7;
  while (local_24 = local_24 - 1, local_24 < 0x80000000) {
    iVar8 = 0;
    iVar6 = iVar3;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      iVar9 = iVar8 >> 8;
      iVar8 = iVar8 + iVar1;
      *puVar5 = *(undefined1 *)(iVar9 + iVar2 + (local_20 >> 8) * -0x500);
      puVar5 = puVar5 + 1;
    }
    local_20 = local_20 + iVar1;
    puVar5 = puVar5 + -iVar4;
  }
  puVar7 = puVar7 + DAT_003d9834;
  iVar3 = (in_EAX - DAT_00335182) + 1;
  local_34 = 0;
  local_1c = (DAT_003d9830 - (in_EDX - DAT_00335186)) + -1;
  iVar4 = DAT_003d9834 + iVar3;
  puVar5 = puVar7;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    iVar8 = 0;
    iVar6 = iVar3;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      iVar9 = iVar8 >> 8;
      iVar8 = iVar8 + iVar1;
      *puVar5 = *(undefined1 *)(((local_34 >> 8) * 0x500 + iVar2) - iVar9);
      puVar5 = puVar5 + -1;
    }
    local_34 = local_34 + iVar1;
    puVar5 = puVar5 + iVar4;
  }
  iVar3 = (DAT_003d982c - (in_EAX - DAT_00335182)) + -1;
  local_28 = 0;
  local_18 = (DAT_003d9830 - (in_EDX - DAT_00335186)) - 1;
  iVar4 = DAT_003d9834 - iVar3;
  while (local_18 = local_18 - 1, local_18 < 0x80000000) {
    iVar8 = 0;
    iVar6 = iVar3;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      iVar9 = iVar8 >> 8;
      iVar8 = iVar8 + iVar1;
      *puVar7 = *(undefined1 *)(iVar9 + (local_28 >> 8) * 0x500 + iVar2);
      puVar7 = puVar7 + 1;
    }
    local_28 = local_28 + iVar1;
    puVar7 = puVar7 + iVar4;
  }
  return;
}

/******************************************************************************
 * Function : sub_0ac630 (Ghidra: FUN_000ac630)
 * Prototype: void sub_0ac630(void);
 * Address  : 0xac630 (Size: 97 bytes)
 * Module   : light.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x29b54, 0x40d25, 0x40db9, 0x6a553, 0x72810, 0xb20e0
 * Callees  : 2 -> 0xacce4, 0xb10c0
 ******************************************************************************/
void FUN_000ac630(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *extraout_EDX;
  
  for (pbVar5 = &DAT_001bd5ed; pbVar5 < &DAT_001c1dcd; pbVar5 = pbVar5 + 0x2e) {
    if ((*pbVar5 & 1) != 0) {
      FUN_000acce4();
      pbVar5 = extraout_EDX;
    }
  }
  if (DAT_001e31fa == '\0') {
    FUN_000b10c0();
    bVar4 = 0x1f;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 4;
      bVar1 = bVar4 & 0x1f;
      bVar4 = bVar4 - 1;
      *(int *)((int)&DAT_00388e3c + iVar2) = 1 << bVar1;
      iVar2 = iVar3;
    } while (iVar3 != 0x80);
    DAT_001e31fa = '\x01';
  }
  return;
}

/******************************************************************************
 * Function : sub_0ac694 (Ghidra: FUN_000ac694)
 * Prototype: void sub_0ac694(void);
 * Address  : 0xac694 (Size: 851 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 1 -> 0xadbc0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac694(void)

{
  int iVar1;
  int in_EAX;
  uint in_ECX;
  uint uVar2;
  ushort uVar3;
  uint in_EDX;
  undefined4 *puVar4;
  int unaff_EBX;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  
  bVar11 = 0;
  _DAT_00388e28 = 0;
  _DAT_00388e2c = 0;
  DAT_00388e30 = 0;
  DAT_00388e34 = 0;
  iVar6 = (unaff_EBX - in_EAX) / 2 + 1;
  iVar1 = (int)(in_ECX - in_EDX) / 2 + 1;
  if ((DAT_001e31f9 != '\0') &&
     (pbVar5 = &DAT_001bd5ed + DAT_002e6f0e * 0x2e, &DAT_001bd5ed < pbVar5)) {
    do {
      if (((*pbVar5 & 8) != 0) || ((*pbVar5 & 0x80) != 0)) {
        DAT_00388e34 = DAT_00388e34 + 1;
        uVar8 = (in_EAX + iVar6) - (uint)pbVar5[0x29];
        uVar2 = (int)uVar8 >> 0x1f;
        if (((int)((uVar8 ^ uVar2) - uVar2) < (int)((uint)pbVar5[5] + iVar6)) &&
           (uVar8 = (iVar1 + in_EDX) - (uint)pbVar5[0x2b], uVar2 = (int)uVar8 >> 0x1f,
           (int)((uVar8 ^ uVar2) - uVar2) < (int)((uint)pbVar5[5] + iVar1))) {
          DAT_00388e30 = DAT_00388e30 + 1;
          FUN_000adbc0();
          *pbVar5 = *pbVar5 & 0x77;
        }
      }
      pbVar5 = &DAT_001bd5ed + (uint)*(ushort *)(pbVar5 + 0x26) * 0x2e;
    } while (&DAT_001bd5ed < pbVar5);
  }
  iVar6 = in_EDX * 0x100 + in_EAX;
  puVar4 = (undefined4 *)(&DAT_001e3203 + iVar6);
  puVar7 = (undefined4 *)(&DAT_001c31f5 + iVar6 * 2);
  for (uVar8 = in_EDX; uVar8 <= in_ECX; uVar8 = uVar8 + 1) {
    puVar9 = puVar7;
    puVar10 = puVar4;
    for (uVar2 = (unaff_EBX - in_EAX & 0x7fffffffU) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    for (uVar2 = (unaff_EBX - in_EAX) * 2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar11 * -2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
    }
    puVar4 = puVar4 + 0x80;
    puVar7 = puVar7 + 0x80;
  }
  if (DAT_001e31f9 != '\0') {
    iVar6 = (unaff_EBX - in_EAX) / 2 + 1;
    iVar1 = (int)(in_ECX - in_EDX) / 2 + 1;
    pbVar5 = &DAT_001bd5ed + DAT_002e6f16 * 0x2e;
    if (&DAT_001bd5ed < pbVar5) {
      do {
        uVar8 = (in_EAX + iVar6) - (uint)pbVar5[0x29];
        uVar2 = (int)uVar8 >> 0x1f;
        if (((int)((uVar8 ^ uVar2) - uVar2) < (int)(iVar6 + (uint)pbVar5[5])) &&
           (uVar8 = (iVar1 + in_EDX) - (uint)pbVar5[0x2b], uVar2 = (int)uVar8 >> 0x1f,
           (int)((uVar8 ^ uVar2) - uVar2) < (int)((uint)pbVar5[5] + iVar1))) {
          _DAT_00388e28 = _DAT_00388e28 + 1;
          if ((*pbVar5 & 8) == 0) {
            _DAT_00388e2c = _DAT_00388e2c + 1;
          }
          if ((*pbVar5 & 0x10) != 0) {
            if (pbVar5[6] == 1) {
              uVar3 = *(ushort *)(pbVar5 + 0x20);
              if ((uint)*(ushort *)(pbVar5 + 0x16) + (uint)*(ushort *)(pbVar5 + 0x1e) < (uint)uVar3)
              {
                *(short *)(pbVar5 + 0x16) = *(short *)(pbVar5 + 0x16) + *(short *)(pbVar5 + 0x1e);
              }
              else {
                pbVar5[6] = 2;
LAB_000ac964:
                *(ushort *)(pbVar5 + 0x16) = uVar3;
              }
            }
            else {
              uVar3 = *(ushort *)(pbVar5 + 0x22);
              if ((int)((uint)*(ushort *)(pbVar5 + 0x16) - (uint)*(ushort *)(pbVar5 + 0x1e)) <=
                  (int)(uint)uVar3) {
                pbVar5[6] = 1;
                goto LAB_000ac964;
              }
              *(short *)(pbVar5 + 0x16) = *(short *)(pbVar5 + 0x16) - *(short *)(pbVar5 + 0x1e);
            }
            *pbVar5 = *pbVar5 | 8;
          }
          if ((*pbVar5 & 0x20) != 0) {
            if (pbVar5[3] == 1) {
              bVar11 = pbVar5[7];
              if ((uint)pbVar5[4] + (uint)pbVar5[2] < (uint)bVar11) {
                pbVar5[2] = pbVar5[2] + pbVar5[4];
              }
              else {
                pbVar5[3] = 2;
LAB_000ac9be:
                pbVar5[2] = bVar11;
              }
            }
            else {
              bVar11 = pbVar5[8];
              if ((int)((uint)pbVar5[2] - (uint)pbVar5[4]) <= (int)(uint)bVar11) {
                pbVar5[3] = 1;
                goto LAB_000ac9be;
              }
              pbVar5[2] = pbVar5[2] - pbVar5[4];
            }
            *pbVar5 = *pbVar5 | 8;
          }
          if (*(short *)(pbVar5 + 0x1c) != 0) {
            *(short *)(pbVar5 + 0x18) = *(short *)(pbVar5 + 0x18) + *(short *)(pbVar5 + 0x1c);
            *pbVar5 = *pbVar5 | 8;
          }
          FUN_000adbc0();
        }
        pbVar5 = &DAT_001bd5ed + (uint)*(ushort *)(pbVar5 + 0x26) * 0x2e;
      } while (&DAT_001bd5ed < pbVar5);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0ac9e8 (Ghidra: FUN_000ac9e8)
 * Prototype: void sub_0ac9e8(void);
 * Address  : 0xac9e8 (Size: 36 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xb087c
 ******************************************************************************/
void FUN_000ac9e8(void)

{
  int in_EAX;
  
  if (in_EAX != DAT_001e31f5) {
    DAT_001e31f5 = in_EAX;
    FUN_000b087c();
  }
  return;
}

/******************************************************************************
 * Function : sub_0aca0c (Ghidra: FUN_000aca0c)
 * Prototype: void sub_0aca0c(void);
 * Address  : 0xaca0c (Size: 89 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 2 -> 0xb087c, 0xb0980
 ******************************************************************************/
void FUN_000aca0c(void)

{
  char in_AL;
  
  if (in_AL == '\0') {
    DAT_001e31f5 = 0x20;
  }
  else {
    DAT_001e31f5 = 10;
  }
  DAT_001e31f9 = in_AL != '\0';
  FUN_000b0980();
  FUN_000b087c();
  return;
}

/******************************************************************************
 * Function : sub_0aca68 (Ghidra: FUN_000aca68)
 * Prototype: void sub_0aca68(void);
 * Address  : 0xaca68 (Size: 142 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14a68
 * Callees  : 1 -> 0xb087c
 ******************************************************************************/
void FUN_000aca68(void)

{
  int in_EAX;
  uint uVar1;
  int in_ECX;
  int in_EDX;
  byte *pbVar2;
  int unaff_EBX;
  
  for (pbVar2 = &DAT_001bd61b; pbVar2 < &DAT_001c1dcd; pbVar2 = pbVar2 + 0x2e) {
    if (((*pbVar2 & 1) != 0) && ((*pbVar2 & 4) != 0)) {
      uVar1 = (uint)pbVar2[5];
      if ((in_EAX <= (int)(pbVar2[0x29] + uVar1)) &&
         (((int)(pbVar2[0x29] - uVar1) <= unaff_EBX && (in_EDX <= (int)(pbVar2[0x2b] + uVar1))))) {
        if ((int)(pbVar2[0x2b] - uVar1) <= in_ECX) {
          *pbVar2 = *pbVar2 | 8;
        }
      }
    }
  }
  FUN_000b087c();
  return;
}

/******************************************************************************
 * Function : dk_light_already_list_0acaf8 (Ghidra: FUN_000acaf8)
 * Prototype: longlong dk_light_already_list_0acaf8(void);
 * Address  : 0xacaf8 (Size: 490 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:2725 ("Light is already in list"); light.cpp:237 ("Cannot allocate cache for dynamic light"); light.cpp:2725 ("Light is already in list")
 * Naming   : String 'Light is already in list'
 * Callers  : 13 -> 0x24998, 0x29b54, 0x40e94, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x69268, 0x694d4, 0x6972c ...
 * Callees  : 2 -> 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16a49d: "light.cpp"
 *   - 0x16a4cf: "light.cpp"
 *   - 0x16a484: "Light is already in list"
 *   - 0x16a4a7: "Cannot allocate cache for dynamic light"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000acb12) */
/* WARNING: Removing unreachable block (ram,0x000acb57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_000acaf8(void)

{
  char cVar1;
  undefined2 *in_EAX;
  uint uVar2;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  uint in_EDX;
  byte *pbVar3;
  byte *pbVar4;
  short sVar5;
  byte bVar6;
  
  bVar6 = 0;
  pbVar3 = &DAT_001bd61b;
  sVar5 = 1;
  do {
    if ((*pbVar3 & 1) == 0) {
      *(short *)(pbVar3 + 0xe) = sVar5;
      *pbVar3 = *pbVar3 | 1;
      goto LAB_000acb36;
    }
    pbVar3 = pbVar3 + 0x2e;
    sVar5 = sVar5 + 1;
  } while (pbVar3 < &DAT_001c1dcd);
  pbVar3 = (byte *)0x0;
LAB_000acb36:
  if (pbVar3 == (byte *)0x0) {
LAB_000acc0e:
    return (ulonglong)in_EDX << 0x20;
  }
  if (*(char *)((int)in_EAX + 0x11) == '\0') {
    DAT_00388e24 = DAT_00388e24 + 1;
    if ((pbVar3[1] & 1) == 0) {
      DAT_002e6f0a = DAT_002e6f0a + 1;
      pbVar3[1] = pbVar3[1] | 1;
      *(undefined2 *)(pbVar3 + 0x26) = (undefined2)DAT_002e6f0e;
      DAT_002e6f0e._0_2_ = *(undefined2 *)(pbVar3 + 0xe);
      DAT_002e6f0e._2_2_ = 0;
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
      pbVar3 = extraout_ECX_00;
    }
    _DAT_00388e38 = 1;
  }
  else {
    pbVar4 = &DAT_001c1e4e;
    do {
      if ((*pbVar4 & 1) == 0) {
        *pbVar4 = *pbVar4 | 1;
        goto LAB_000acb7a;
      }
      pbVar4 = pbVar4 + 0x81;
    } while (pbVar4 < &DAT_001c31f5);
    pbVar4 = (byte *)0x0;
LAB_000acb7a:
    if (pbVar4 == (byte *)0x0) {
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 237, "Cannot allocate cache for dynamic light") */
      FUN_000e6a10();
      goto LAB_000acc0e;
    }
    DAT_00388e20 = DAT_00388e20 + 1;
    *(short *)(pbVar3 + 0x10) = (short)((int)(pbVar4 + -0x1c1dcd) / 0x81);
    if ((pbVar3[1] & 1) == 0) {
      DAT_002e6f12 = DAT_002e6f12 + 1;
      pbVar3[1] = pbVar3[1] | 1;
      *(undefined2 *)(pbVar3 + 0x26) = (undefined2)DAT_002e6f16;
      DAT_002e6f16._0_2_ = *(undefined2 *)(pbVar3 + 0xe);
      DAT_002e6f16._2_2_ = 0;
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
      pbVar3 = extraout_ECX;
    }
  }
  *pbVar3 = *pbVar3 | 10;
  *(undefined4 *)(pbVar3 + 0x28) = *(undefined4 *)(in_EAX + 5);
  *(undefined2 *)(pbVar3 + (uint)bVar6 * -8 + 0x2c) = in_EAX[(uint)bVar6 * -4 + 7];
  *(undefined2 *)(pbVar3 + 0x16) = *in_EAX;
  pbVar3[2] = *(byte *)(in_EAX + 1);
  bVar6 = pbVar3[1];
  cVar1 = *(char *)((int)in_EAX + 3);
  pbVar3[1] = bVar6 & 1;
  pbVar3[1] = bVar6 & 1 | cVar1 * '\x02';
  uVar2 = (CONCAT11(*pbVar3,*(undefined1 *)((int)in_EAX + 0x11)) & 0xff01) & 0xfffffbff;
  bVar6 = (byte)(uVar2 >> 8);
  *pbVar3 = bVar6;
  *pbVar3 = bVar6 | (char)uVar2 << 2;
  *(undefined2 *)(pbVar3 + 0x1a) = in_EAX[4];
  *(undefined2 *)(pbVar3 + 0x18) = in_EAX[2];
  *(uint *)(pbVar3 + 0x12) = (uint)(ushort)in_EAX[9];
  return CONCAT44(in_EDX,(uint)*(ushort *)(pbVar3 + 0xe));
}

/******************************************************************************
 * Function : dk_attempt_delete_light_0acce4 (Ghidra: FUN_000acce4)
 * Prototype: void dk_attempt_delete_light_0acce4(void);
 * Address  : 0xacce4 (Size: 277 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:307 ("Attempt to delete light 0")
 * Naming   : String 'Attempt to delete light 0'
 * Callers  : 8 -> 0x63a25, 0x65b07, 0x72af4, 0x7436a, 0x80fbc, 0xac630, 0xd6664, 0xd7dac
 * Callees  : 4 -> 0xb087c, 0xb0f94, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x16a4f3: "light.cpp"
 *   - 0x16a4d9: "Attempt to delete light 0"
 ******************************************************************************/
void FUN_000acce4(void)

{
  int in_EAX;
  
  if (in_EAX == 0) {
    FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 307, "Attempt to delete light 0") */
  }
  else if (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0) {
    if (*(short *)(&DAT_001bd5fd + in_EAX * 0x2e) != 0) {
      FUN_000e6a10();
    }
    if (((&DAT_001bd5ed)[in_EAX * 0x2e] & 4) == 0) {
      DAT_00388e24 = DAT_00388e24 + -1;
      FUN_000b087c();
    }
    else {
      DAT_00388e20 = DAT_00388e20 + -1;
    }
    FUN_000b0f94();
    FUN_000e6a10();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_0acdfc (Ghidra: FUN_000acdfc)
 * Prototype: void sub_0acdfc(void);
 * Address  : 0xacdfc (Size: 210 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5f438, 0xe0880
 * Callees  : 1 -> 0xb087c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000acdfc(void)

{
  int iVar1;
  int in_EAX;
  short *in_EDX;
  byte *pbVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = in_EAX * 0x2e;
  pbVar2 = &DAT_001bd5ed + iVar1;
  if (((*in_EDX != *(short *)(&DAT_001bd615 + iVar1)) ||
      (*(short *)(&DAT_001bd617 + iVar1) != in_EDX[1])) ||
     (*(short *)(&DAT_001bd619 + iVar1) != in_EDX[2])) {
    if ((*pbVar2 & 4) == 0) {
      _DAT_00388e38 = 1;
      FUN_000b087c();
    }
    *(undefined4 *)(&DAT_001bd615 + iVar1) = *(undefined4 *)in_EDX;
    *(short *)(&DAT_001bd619 + (uint)bVar3 * -8 + iVar1) = in_EDX[(uint)bVar3 * -4 + 2];
    *pbVar2 = *pbVar2 | 8;
  }
  return;
}

/******************************************************************************
 * Function : sub_0aced0 (Ghidra: FUN_000aced0)
 * Prototype: undefined8 sub_0aced0(void);
 * Address  : 0xaced0 (Size: 29 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0880
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000aced0(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,(uint)((&DAT_001bd5ed)[in_EAX * 0x2e] & 1));
}

/******************************************************************************
 * Function : sub_0acef0 (Ghidra: FUN_000acef0)
 * Prototype: undefined8 sub_0acef0(void);
 * Address  : 0xacef0 (Size: 25 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:421 ("Attempt to set anglexy of light 0")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a6c5
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16a533: "light.cpp"
 *   - 0x16a55f: "light.cpp"
 ******************************************************************************/
undefined8 FUN_000acef0(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,&DAT_001bd615 + in_EAX * 0x2e);
}

/******************************************************************************
 * Function : dk_attempt_get_anglexy_unallocated_0acf7c (Ghidra: FUN_000acf7c)
 * Prototype: longlong dk_attempt_get_anglexy_unallocated_0acf7c(void);
 * Address  : 0xacf7c (Size: 84 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:445 ("Attempt to get anglexy of light 0"); light.cpp:476 ("Attempt to set anglexy anim step of light 0"); light.cpp:500 ("Attempt to get anglexy anim step of light 0"); light.cpp:588 ("Attempt to set width of light 0")
 * Naming   : String 'Attempt to get anglexy of unallocated light structure'
 * Callers  : 1 -> 0x2a6c5
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a59f: "light.cpp"
 *   - 0x16a5cb: "light.cpp"
 *   - 0x16a615: "light.cpp"
 *   - 0x16a64b: "light.cpp"
 *   - 0x16a695: "light.cpp"
 *   - 0x16a6cb: "light.cpp"
 *   - 0x16a711: "light.cpp"
 *   - 0x16a73b: "light.cpp"
 *   - 0x16a569: "Attempt to get anglexy of unallocated light structure"
 *   - 0x16a5a9: "Attempt to get anglexy of light 0"
 ******************************************************************************/
longlong FUN_000acf7c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)*(ushort *)(&DAT_001bd605 + in_EAX * 0x2e));
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 445, "Attempt to get anglexy of light 0") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_attempt_get_width_unallocated_0ad0f4 (Ghidra: FUN_000ad0f4)
 * Prototype: longlong dk_attempt_get_width_unallocated_0ad0f4(void);
 * Address  : 0xad0f4 (Size: 84 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:612 ("Attempt to get width of light 0")
 * Naming   : String 'Attempt to get width of unallocated light structure'
 * Callers  : 1 -> 0x2a6c5
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a779: "light.cpp"
 *   - 0x16a7a3: "light.cpp"
 *   - 0x16a745: "Attempt to get width of unallocated light structure"
 *   - 0x16a783: "Attempt to get width of light 0"
 ******************************************************************************/
longlong FUN_000ad0f4(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)*(ushort *)(&DAT_001bd607 + in_EAX * 0x2e));
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 612, "Attempt to get width of light 0") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_attempt_set_intensity_unallocated_0ad148 (Ghidra: FUN_000ad148)
 * Prototype: void dk_attempt_set_intensity_unallocated_0ad148(void);
 * Address  : 0xad148 (Size: 242 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:655 ("Attempt to set intensity of light 0")
 * Naming   : String 'Attempt to set intensity of unallocated light structure'
 * Callers  : 3 -> 0x24ab9, 0xc3c3c, 0xc55c8
 * Callees  : 2 -> 0xb087c, 0xddaf0
 * Strings  :
 *   - 0x16a7e5: "light.cpp"
 *   - 0x16a813: "light.cpp"
 *   - 0x16a7ad: "Attempt to set intensity of unallocated light structure"
 *   - 0x16a7ef: "Attempt to set intensity of light 0"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad148(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  byte *pbVar2;
  undefined1 local_14;
  
  local_14 = (undefined1)in_EDX;
  if (in_EAX != 0) {
    iVar1 = in_EAX * 0x2e;
    pbVar2 = &DAT_001bd5ed + iVar1;
    if ((*pbVar2 & 1) != 0) {
      if ((byte)(&DAT_001bd5ef)[iVar1] == in_EDX) {
        return;
      }
      if ((*pbVar2 & 4) == 0) {
        FUN_000b087c();
        _DAT_00388e38 = 1;
      }
      (&DAT_001bd5ef)[iVar1] = local_14;
      if ((ushort)(byte)(&DAT_001bd5ef)[iVar1] <= *(ushort *)(&DAT_001bd611 + iVar1)) {
        return;
      }
      *pbVar2 = *pbVar2 | 8;
      return;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 655, "Attempt to set intensity of light 0") */
  return;
}

/******************************************************************************
 * Function : dk_attempt_get_intensity_unallocated_0ad23c (Ghidra: FUN_000ad23c)
 * Prototype: longlong dk_attempt_get_intensity_unallocated_0ad23c(void);
 * Address  : 0xad23c (Size: 83 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:679 ("Attempt to get intensity of light 0")
 * Naming   : String 'Attempt to get intensity of unallocated light structure'
 * Callers  : 4 -> 0x24ab9, 0x2a6c5, 0xc3c3c, 0xc55c8
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a855: "light.cpp"
 *   - 0x16a883: "light.cpp"
 *   - 0x16a81d: "Attempt to get intensity of unallocated light structure"
 *   - 0x16a85f: "Attempt to get intensity of light 0"
 ******************************************************************************/
longlong FUN_000ad23c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)(byte)(&DAT_001bd5ef)[in_EAX * 0x2e]);
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 679, "Attempt to get intensity of light 0") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_attempt_set_size_unallocated_0ad290 (Ghidra: FUN_000ad290)
 * Prototype: void dk_attempt_set_size_unallocated_0ad290(void);
 * Address  : 0xad290 (Size: 235 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:723 ("Attempt to set size of light 0")
 * Naming   : String 'Attempt to set size of unallocated light structure'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xb087c, 0xddaf0
 * Strings  :
 *   - 0x16a8c0: "light.cpp"
 *   - 0x16a8e9: "light.cpp"
 *   - 0x16a88d: "Attempt to set size of unallocated light structure"
 *   - 0x16a8ca: "Attempt to set size of light 0"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad290(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  byte *pbVar2;
  
  if (in_EAX != 0) {
    iVar1 = in_EAX * 0x2e;
    pbVar2 = &DAT_001bd5ed + iVar1;
    if ((*pbVar2 & 1) != 0) {
      if (*(ushort *)(&DAT_001bd603 + iVar1) == in_EDX) {
        return;
      }
      if ((*pbVar2 & 4) == 0) {
        FUN_000b087c();
        _DAT_00388e38 = 1;
      }
      *(short *)(&DAT_001bd603 + iVar1) = (short)in_EDX;
      if ((in_EDX & 0xffff) <= (uint)(byte)(&DAT_001bd5f6)[iVar1]) {
        return;
      }
      *pbVar2 = *pbVar2 | 8;
      return;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 723, "Attempt to set size of light 0") */
  return;
}

/******************************************************************************
 * Function : dk_attempt_get_size_unallocated_0ad37c (Ghidra: FUN_000ad37c)
 * Prototype: longlong dk_attempt_get_size_unallocated_0ad37c(void);
 * Address  : 0xad37c (Size: 84 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:747 ("Attempt to get size of light 0"); light.cpp:778 ("Attempt to animate size of light 0")
 * Naming   : String 'Attempt to get size of unallocated light structure'
 * Callers  : 1 -> 0x2a6c5
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a926: "light.cpp"
 *   - 0x16a94f: "light.cpp"
 *   - 0x16a990: "light.cpp"
 *   - 0x16a9bd: "light.cpp"
 *   - 0x16a8f3: "Attempt to get size of unallocated light structure"
 *   - 0x16a930: "Attempt to get size of light 0"
 ******************************************************************************/
longlong FUN_000ad37c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)*(ushort *)(&DAT_001bd603 + in_EAX * 0x2e));
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 747, "Attempt to get size of light 0") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_attempt_stop_animating_size_0ad438 (Ghidra: FUN_000ad438)
 * Prototype: void dk_attempt_stop_animating_size_0ad438(void);
 * Address  : 0xad438 (Size: 82 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:802 ("Attempt to stop animating size of light 0"); light.cpp:830 ("Attempt to animate intensity of light 0")
 * Naming   : String 'Attempt to stop animating size of unallocated light structur'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16aa05: "light.cpp"
 *   - 0x16aa39: "light.cpp"
 *   - 0x16aa7f: "light.cpp"
 *   - 0x16aab1: "light.cpp"
 *   - 0x16a9c7: "Attempt to stop animating size of unallocated light structure"
 *   - 0x16aa0f: "Attempt to stop animating size of light 0"
 ******************************************************************************/
void FUN_000ad438(void)

{
  byte bVar1;
  int in_EAX;
  
  if (in_EAX != 0) {
    bVar1 = (&DAT_001bd5ed)[in_EAX * 0x2e];
    if ((bVar1 & 1) != 0) {
      (&DAT_001bd5ed)[in_EAX * 0x2e] = bVar1 & 0xef;
      return;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 802, "Attempt to stop animating size of light 0") */
  return;
}

/******************************************************************************
 * Function : dk_attempt_stop_animating_intensity_0ad4f8 (Ghidra: FUN_000ad4f8)
 * Prototype: void dk_attempt_stop_animating_intensity_0ad4f8(void);
 * Address  : 0xad4f8 (Size: 82 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:854 ("Attempt to stop animating intensity of light 0")
 * Naming   : String 'Attempt to stop animating intensity of unallocated light str'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16aafe: "light.cpp"
 *   - 0x16ab37: "light.cpp"
 *   - 0x16aabb: "Attempt to stop animating intensity of unallocated light structure"
 *   - 0x16ab08: "Attempt to stop animating intensity of light 0"
 ******************************************************************************/
void FUN_000ad4f8(void)

{
  byte bVar1;
  int in_EAX;
  
  if (in_EAX != 0) {
    bVar1 = (&DAT_001bd5ed)[in_EAX * 0x2e];
    if ((bVar1 & 1) != 0) {
      (&DAT_001bd5ed)[in_EAX * 0x2e] = bVar1 & 0xdf;
      return;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 854, "Attempt to stop animating intensity of light 0") */
  return;
}

/******************************************************************************
 * Function : dk_light_already_list_0ad54c (Ghidra: FUN_000ad54c)
 * Prototype: void dk_light_already_list_0ad54c(void);
 * Address  : 0xad54c (Size: 285 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:2725 ("Light is already in list"); light.cpp:2725 ("Light is already in list"); light.cpp:887 ("Attempt to turn on unallocated light structure"); light.cpp:892 ("Attempt to turn on light 0")
 * Naming   : String 'Light is already in list'
 * Callers  : 6 -> 0x4b5ca, 0x4b6ae, 0x4bd35, 0x5f438, 0x85f80, 0xc39a8
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a49d: "light.cpp"
 *   - 0x16ab70: "light.cpp"
 *   - 0x16ab95: "light.cpp"
 *   - 0x16a484: "Light is already in list"
 *   - 0x16ab41: "Attempt to turn on unallocated light structure"
 *   - 0x16ab7a: "Attempt to turn on light 0"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad54c(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  byte *pbVar3;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (in_EAX == 0) {
    FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
  }
  else {
    iVar2 = in_EAX * 0x2e;
    pbVar3 = &DAT_001bd5ed + iVar2;
    bVar1 = *pbVar3;
    if ((bVar1 & 1) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
      return;
    }
    if ((bVar1 & 2) == 0) {
      *pbVar3 = bVar1 | 2;
      if ((bVar1 & 4) == 0) {
        if (((&DAT_001bd5ee)[iVar2] & 1) == 0) {
          DAT_002e6f0a = DAT_002e6f0a + 1;
          (&DAT_001bd5ee)[iVar2] = (&DAT_001bd5ee)[iVar2] | 1;
          *(undefined2 *)(&DAT_001bd613 + iVar2) = (undefined2)DAT_002e6f0e;
          DAT_002e6f0e = (uint)(ushort)(&DAT_001bd5fb)[in_EAX * 0x17];
        }
        else {
          FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 887, "Attempt to turn on unallocated light structure") */
          pbVar3 = extraout_ECX;
        }
        _DAT_00388e38 = 1;
      }
      else {
        if (((&DAT_001bd5ee)[iVar2] & 1) == 0) {
          DAT_002e6f12 = DAT_002e6f12 + 1;
          (&DAT_001bd5ee)[iVar2] = (&DAT_001bd5ee)[iVar2] | 1;
          *(undefined2 *)(&DAT_001bd613 + iVar2) = (undefined2)DAT_002e6f16;
          DAT_002e6f16 = (uint)(ushort)(&DAT_001bd5fb)[in_EAX * 0x17];
          *pbVar3 = *pbVar3 | 8;
          return;
        }
        FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 892, "Attempt to turn on light 0") */
        pbVar3 = extraout_ECX_00;
      }
      *pbVar3 = *pbVar3 | 8;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_attempt_turn_off_unallocated_0ad66c (Ghidra: FUN_000ad66c)
 * Prototype: void dk_attempt_turn_off_unallocated_0ad66c(void);
 * Address  : 0xad66c (Size: 265 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:929 ("Attempt to turn off unallocated light structure"); light.cpp:934 ("Attempt to turn off light 0")
 * Naming   : String 'Attempt to turn off unallocated light structure'
 * Callers  : 4 -> 0x4b9ee, 0x4bd9b, 0x5f438, 0xc3960
 * Callees  : 3 -> 0xb087c, 0xb0f94, 0xddaf0
 * Strings  :
 *   - 0x16abcf: "light.cpp"
 *   - 0x16abf5: "light.cpp"
 *   - 0x16ab9f: "Attempt to turn off unallocated light structure"
 *   - 0x16abd9: "Attempt to turn off light 0"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad66c(void)

{
  byte bVar1;
  int in_EAX;
  
  if (in_EAX == 0) {
    FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 929, "Attempt to turn off unallocated light structure") */
  }
  else {
    bVar1 = (&DAT_001bd5ed)[in_EAX * 0x2e];
    if ((bVar1 & 1) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 934, "Attempt to turn off light 0") */
      return;
    }
    if ((bVar1 & 2) != 0) {
      (&DAT_001bd5ed)[in_EAX * 0x2e] = bVar1 & 0xfd;
      if ((bVar1 & 4) == 0) {
        FUN_000b087c();
        FUN_000b0f94();
        _DAT_00388e38 = 1;
        return;
      }
      FUN_000b0f94();
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_attempt_set_size_unallocated_0ad834 (Ghidra: FUN_000ad834)
 * Prototype: void dk_attempt_set_size_unallocated_0ad834(void);
 * Address  : 0xad834 (Size: 82 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:1019 ("Attempt to set size of light 0")
 * Naming   : String 'Attempt to set size of unallocated light structure'
 * Callers  : 6 -> 0x40e94, 0x69268, 0x694d4, 0x6972c, 0x80a94, 0x80c84
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16ac32: "light.cpp"
 *   - 0x16ac5b: "light.cpp"
 *   - 0x16abff: "Attempt to set size of unallocated light structure"
 *   - 0x16ac3c: "Attempt to set size of light 0"
 ******************************************************************************/
void FUN_000ad834(void)

{
  byte bVar1;
  int in_EAX;
  
  if (in_EAX != 0) {
    bVar1 = (&DAT_001bd5ed)[in_EAX * 0x2e];
    if ((bVar1 & 1) != 0) {
      (&DAT_001bd5ed)[in_EAX * 0x2e] = bVar1 | 0x40;
      return;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 1019, "Attempt to set size of light 0") */
  return;
}

/******************************************************************************
 * Function : dk_attempt_set_minimum_light_0ad888 (Ghidra: FUN_000ad888)
 * Prototype: void dk_attempt_set_minimum_light_0ad888(void);
 * Address  : 0xad888 (Size: 113 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:1055 ("Attempt to set minimum light size for light 0")
 * Naming   : String 'Attempt to set_minimum light size to cache on non dynamic li'
 * Callers  : 1 -> 0x43f07
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16aca5: "light.cpp"
 *   - 0x16acf1: "light.cpp"
 *   - 0x16ad29: "light.cpp"
 *   - 0x16ac65: "Attempt to set_minimum light size to cache on non dynamic light"
 *   - 0x16acaf: "Attempt to set minimum light size for unallocated light structure"
 *   - 0x16acfb: "Attempt to set minimum light size for light 0"
 ******************************************************************************/
void FUN_000ad888(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  undefined1 in_DL;
  undefined2 unaff_BX;
  
  if (in_EAX != 0) {
    iVar2 = in_EAX * 0x2e;
    bVar1 = (&DAT_001bd5ed)[iVar2];
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 2) == 0) {
        return;
      }
      (&DAT_001bd5ed)[iVar2] = bVar1 & 0xfd;
      if ((bVar1 & 4) != 0) {
        (&DAT_001bd5f6)[iVar2] = in_DL;
        *(undefined2 *)(&DAT_001bd611 + iVar2) = unaff_BX;
        return;
      }
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 1055, "Attempt to set minimum light size for light 0") */
  return;
}

/******************************************************************************
 * Function : sub_0adbc0 (Ghidra: FUN_000adbc0)
 * Prototype: void sub_0adbc0(void);
 * Address  : 0xadbc0 (Size: 10532 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xac694, 0xb06fc
 * Callees  : 2 -> 0xe66ec, 0xe6a10
 ******************************************************************************/
void FUN_000adbc0(void)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  undefined *puVar5;
  ushort uVar6;
  ushort uVar7;
  byte *in_EAX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  uint extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  uint extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  int extraout_ECX_20;
  int extraout_ECX_21;
  int extraout_ECX_22;
  int extraout_ECX_23;
  int extraout_ECX_24;
  int extraout_ECX_25;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint unaff_EBP;
  int *piVar21;
  uint *puVar22;
  uint uVar23;
  ushort *puVar24;
  int iVar25;
  int *local_1bc;
  byte local_1ac;
  byte local_1a8;
  byte local_1a0;
  byte local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  int local_18c;
  uint local_188;
  uint *local_184;
  uint *local_180;
  uint local_17c;
  uint *local_178;
  uint *local_174;
  uint *local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  ushort *local_13c;
  int local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  int local_fc;
  uint local_f8;
  undefined *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint *local_dc;
  uint local_d8;
  uint local_d4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint *local_70;
  uint *local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint *local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  ushort *local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  
  if ((in_EAX[1] & 0xfe) == 0) {
    uVar7 = *(ushort *)(in_EAX + 0x16);
    uVar17 = (uint)in_EAX[2] << 8;
    uVar23 = uVar17;
  }
  else {
    uVar7 = *(ushort *)(in_EAX + 0x16);
    uVar17 = DAT_001e31fb * 0x24a1 + 0x24df;
    DAT_001e31fb = uVar17 >> 0xd | uVar17 * 0x80000;
    uVar17 = (uint)in_EAX[2] * 0x100 + 0x101;
    uVar23 = (uint)in_EAX[2] * 0x100 + -0x100 + DAT_001e31fb % 0x201;
  }
  uVar20 = (uint)uVar7;
  uVar13 = uVar20;
  if ((*in_EAX & 4) != 0) {
    if (uVar20 < (uint)in_EAX[9] * 0x100) {
      uVar13 = (uint)in_EAX[9] * 0x100;
    }
    if (uVar17 < (uint)*(ushort *)(in_EAX + 0x24) * 0x100) {
      uVar17 = (uint)*(ushort *)(in_EAX + 0x24) * 0x100;
    }
  }
  if ((int)uVar17 < DAT_001e31f5 * 0x100) {
    uVar17 = 0;
  }
  else {
    uVar17 = (int)(uVar17 + DAT_001e31f5 * -0x100) / (int)(uVar17 / (uint)((int)uVar13 >> 8)) + 1;
    if (0x1f < (int)uVar17) {
      uVar17 = 0x1f;
    }
  }
  in_EAX[5] = (byte)uVar17;
  if (uVar20 == 0) {
    return;
  }
  if ((int)uVar23 < 1) {
    return;
  }
  bVar1 = *in_EAX;
  if ((bVar1 & 4) != 0) {
    if ((bVar1 & 0x40) == 0) {
      if ((bVar1 & 8) == 0) {
        iVar18 = (uint)*(ushort *)(in_EAX + 0x28) + uVar17 * -0x100;
        if (iVar18 < 1) {
          iVar18 = 0;
        }
        iVar11 = (uint)*(ushort *)(in_EAX + 0x2a) + uVar17 * -0x100;
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        iVar10 = (uint)*(ushort *)(in_EAX + 0x28) + uVar17 * 0x100;
        if (0xfffe < iVar10) {
          iVar10 = 0xffff;
        }
        iVar12 = (uint)*(ushort *)(in_EAX + 0x2a) + uVar17 * 0x100;
        if (0xfffe < iVar12) {
          iVar12 = 0xffff;
        }
        iVar14 = (int)((iVar18 + (iVar18 >> 0x1f) * -0x100) - (uint)((iVar18 >> 0x1f) << 7 < 0)) >>
                 8;
        puVar24 = &DAT_001e3203 +
                  ((int)((iVar11 + (iVar11 >> 0x1f) * -0x100) - (uint)((iVar11 >> 0x1f) << 7 < 0))
                  >> 8) * 0x100 + iVar14;
        uVar17 = *(uint *)(&DAT_001c1dce + (uint)*(ushort *)(in_EAX + 0x10) * 0x81);
        puVar5 = &DAT_001c1dcd + (uint)*(ushort *)(in_EAX + 0x10) * 0x81;
        for (; iVar11 <= iVar12; iVar11 = iVar11 + 0x100) {
          puVar22 = &DAT_00388e3c;
          iVar15 = iVar18 - iVar10;
          iVar25 = iVar18;
          while (iVar25 == iVar10 || SBORROW4(iVar25,iVar10) != iVar15 < 0) {
            if ((*puVar22 & uVar17) != 0) {
              uVar13 = (int)((uint)*(ushort *)(in_EAX + 0x28) - iVar25) >> 0x1f;
              iVar15 = ((uint)*(ushort *)(in_EAX + 0x28) - iVar25 ^ uVar13) - uVar13;
              uVar13 = (int)((uint)*(ushort *)(in_EAX + 0x2a) - iVar11) >> 0x1f;
              iVar16 = ((uint)*(ushort *)(in_EAX + 0x2a) - iVar11 ^ uVar13) - uVar13;
              if (iVar16 < iVar15) {
                iVar15 = *(int *)(&DAT_0017a4d0 + ((iVar16 * 0x100) / iVar15) * 8) * iVar15 >> 0xd;
              }
              else if (iVar16 == 0) {
                iVar15 = 0;
              }
              else {
                iVar15 = *(int *)(&DAT_0017a4d0 + ((iVar15 * 0x100) / iVar16) * 8) * iVar16 >> 0xd;
              }
              lVar3 = (longlong)(int)((uVar20 - iVar15) * uVar23) / (longlong)(int)uVar20;
              if ((int)(uint)*puVar24 < (int)lVar3) {
                *puVar24 = (ushort)lVar3;
              }
            }
            iVar25 = iVar25 + 0x100;
            puVar24 = puVar24 + 1;
            puVar22 = puVar22 + 1;
            iVar15 = iVar25 - iVar10;
          }
          uVar17 = *(uint *)(puVar5 + 5);
          puVar24 = puVar24 + (0xff - (((int)((iVar10 + (iVar10 >> 0x1f) * -0x100) -
                                             (uint)((iVar10 >> 0x1f) << 7 < 0)) >> 8) - iVar14));
          puVar5 = puVar5 + 4;
        }
        return;
      }
      local_124 = (uint)*(ushort *)(in_EAX + 0x28);
      local_120 = (uint)*(ushort *)(in_EAX + 0x2a);
      local_11c = (uint)(*(ushort *)(in_EAX + 0x28) >> 8);
      uVar17 = (uint)(*(ushort *)(in_EAX + 0x2a) >> 8);
      iVar18 = *(int *)(in_EAX + 0x2a) >> 0x1f;
      local_110 = (int)(((*(int *)(in_EAX + 0x2a) >> 0x10) + iVar18 * -0x100) -
                       (uint)(iVar18 << 7 < 0)) >> 8;
      local_f4 = &DAT_001c1dcd + (uint)*(ushort *)(in_EAX + 0x10) * 0x81;
      local_134 = uVar20;
      local_114 = uVar17;
      FUN_000e6a10();
      FUN_000e6a10();
      iVar18 = local_11c + uVar17 * 0x100;
      if (local_110 <
          (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                               (*(uint *)((int)&DAT_00279203 + iVar18 * 5 + 1) & 0x7ff) * 0x18 + 2)
                     >> 4)) {
LAB_000af5d6:
        *in_EAX = *in_EAX & 0xf7;
        return;
      }
      *(uint *)(local_f4 + extraout_ECX_08 * 4 + 1) =
           *(uint *)(local_f4 + extraout_ECX_08 * 4 + 1) |
           1 << (0x1fU - (char)extraout_ECX_08 & 0x1f);
      uVar13 = local_124 + local_11c * -0x100;
      uVar20 = local_120 + uVar17 * -0x100;
      uVar17 = (int)uVar13 >> 0x1f;
      iVar10 = (uVar13 ^ uVar17) - uVar17;
      uVar17 = (int)uVar20 >> 0x1f;
      iVar11 = (uVar20 ^ uVar17) - uVar17;
      if (iVar11 < iVar10) {
        iVar10 = *(int *)(&DAT_0017a4d0 + ((iVar11 * 0x100) / iVar10) * 8) * iVar10;
      }
      else {
        iVar12 = 0;
        if (iVar11 == 0) goto LAB_000ae9bc;
        iVar10 = *(int *)(&DAT_0017a4d0 + ((iVar10 * 0x100) / iVar11) * 8) * iVar11;
      }
      iVar12 = iVar10 >> 0xd;
LAB_000ae9bc:
      iVar11 = (int)((local_134 - iVar12) * uVar23) / (int)local_134;
      if ((int)(uint)(ushort)(&DAT_001e3203)[iVar18] < iVar11) {
        (&DAT_001e3203)[iVar18] = (ushort)iVar11;
      }
      local_160 = local_124 >> 8;
      local_64 = local_120 >> 8;
      piVar21 = &DAT_001baded;
      local_130 = uVar23;
      local_12c = extraout_ECX_08;
      do {
        if ((&DAT_001baded + DAT_001e31ff * 2 <= piVar21) ||
           (local_12c < *(byte *)((int)piVar21 + 1))) goto LAB_000af5d6;
        local_10c = local_11c + (int)*(char *)((int)piVar21 + 2);
        local_108 = local_114 + (*piVar21 >> 0x18);
        if ((0xff < local_10c) || (0xff < local_108)) goto LAB_000af4ea;
        local_1c = local_10c * 0x100;
        local_138 = local_108 * 0x100;
        uVar7 = FUN_000e66ec();
        if ((byte)local_10c < (byte)local_11c) {
          if ((byte)local_108 < (byte)local_114) {
            local_fc = 4;
          }
          else {
            local_fc = 3;
          }
        }
        else if ((byte)local_108 < (byte)local_114) {
          local_fc = 1;
        }
        else {
          local_fc = 2;
        }
        local_48 = local_108 * 0x100;
        local_60 = local_fc + -1;
        local_30 = local_10c * 0x100 + -1;
        local_14c = local_60 * 4;
        local_28 = local_30 - local_124;
        if ((&DAT_001bcded)[(uint)uVar7 % 0x800] != '\0') {
          local_f0 = &local_104;
          local_ec = &local_100;
          if (local_10c == local_160) {
            if (local_108 < local_64) {
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (uint)uVar7 % 0x800;
            }
            else {
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (int)(uint)uVar7 % extraout_ECX_09 & 0xffff;
            }
          }
          else if (local_64 == local_108) {
            if (local_10c < local_160) {
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (int)(uint)uVar7 % extraout_ECX_10 & 0xffff;
            }
            else {
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (uint)uVar7 % 0x800;
            }
          }
          else {
            switch(local_60) {
            case 0:
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (uint)uVar7 % 0x800;
              break;
            case 1:
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (uint)uVar7 % 0x800;
              break;
            case 2:
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (int)(uint)uVar7 % extraout_ECX_11 & 0xffff;
              break;
            case 3:
              uVar7 = FUN_000e66ec();
              local_e8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_e4 = (int)(uint)uVar7 % extraout_ECX_12 & 0xffff;
            }
          }
          if (((int)((local_e8 + ((int)local_e8 >> 0x1f) * -0x200) -
                    (uint)(((int)local_e8 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_e8) {
            local_e8 = local_e8 + 1 & 0x7ff;
          }
          if (((int)((local_e4 + ((int)local_e4 >> 0x1f) * -0x200) -
                    (uint)(((int)local_e4 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_e4) {
            local_e4 = local_e4 - 1 & 0x7ff;
          }
          *local_f0 = local_e8;
          *local_ec = local_e4;
          if ((((&DAT_001bcded)[local_104] == '\0') || ((&DAT_001bcded)[local_100] == '\0')) &&
             (local_110 <
              (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                   (*(uint *)((int)&DAT_00279203 +
                                             (local_108 * 0x100 + local_10c) * 5 + 1) & 0x7ff) *
                                   0x18 + 2) >> 4))) {
            if ((int)local_100 < (int)local_104) {
              FUN_000e6a10();
              FUN_000e6a10();
            }
            else {
              FUN_000e6a10();
            }
          }
          goto LAB_000af4ea;
        }
        local_e0 = (local_10c + local_48) * 5;
        local_128 = (int)&DAT_00279203 + local_e0;
        local_40 = &DAT_001e3203 + local_10c + local_48;
        local_f8 = (uint)(local_110 <
                         (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                              (*(uint *)((int)&DAT_00279203 + local_e0 + 1) & 0x7ff)
                                              * 0x18 + 2) >> 4));
        if (local_f8 != 0) {
          local_178 = &local_104;
          local_dc = &local_100;
          if (local_10c == local_160) {
            if (local_108 < local_64) {
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (uint)uVar7 % 0x800;
            }
            else {
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (int)(uint)uVar7 % extraout_ECX_13 & 0xffff;
            }
          }
          else if (local_64 == local_108) {
            if (local_10c < local_160) {
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (int)(uint)uVar7 % extraout_ECX_14 & 0xffff;
            }
            else {
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (uint)uVar7 % 0x800;
            }
          }
          else {
            switch(local_60) {
            case 0:
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (uint)uVar7 % 0x800;
              break;
            case 1:
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (uint)uVar7 % 0x800;
              break;
            case 2:
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (int)(uint)uVar7 % extraout_ECX_15 & 0xffff;
              break;
            case 3:
              uVar7 = FUN_000e66ec();
              local_d8 = (uint)uVar7 % 0x800;
              uVar7 = FUN_000e66ec();
              local_d4 = (int)(uint)uVar7 % extraout_ECX_16 & 0xffff;
            }
          }
          if (((int)((local_d8 + ((int)local_d8 >> 0x1f) * -0x200) -
                    (uint)(((int)local_d8 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_d8) {
            local_d8 = local_d8 + 1 & 0x7ff;
          }
          if (((int)((local_d4 + ((int)local_d4 >> 0x1f) * -0x200) -
                    (uint)(((int)local_d4 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_d4) {
            local_d4 = local_d4 - 1 & 0x7ff;
          }
          *local_178 = local_d8;
          *local_dc = local_d4;
          if ((int)local_100 < (int)local_104) {
            FUN_000e6a10();
          }
          FUN_000e6a10();
        }
        if (local_f8 == 0) goto LAB_000af3f4;
        switch(local_fc) {
        case 1:
          if ((int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                   (*(uint *)((int)&DAT_00279203 +
                                             (local_108 * 0x100 + (local_10c - 1)) * 5 + 1) & 0x7ff)
                                   * 0x18 + 2) >> 4) <= local_110) goto switchD_000af3df_caseD_2;
          bVar4 = false;
          break;
        case 3:
          if (local_110 <
              (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                   (*(uint *)((int)&DAT_00279203 +
                                             ((local_108 - 1) * 0x100 + local_10c) * 5 + 1) & 0x7ff)
                                   * 0x18 + 2) >> 4)) goto switchD_000af3df_caseD_4;
        default:
switchD_000af3df_caseD_2:
          bVar4 = true;
          break;
        case 4:
switchD_000af3df_caseD_4:
          bVar4 = false;
        }
        if (bVar4) {
LAB_000af3f4:
          uVar17 = (int)(local_124 - local_1c) >> 0x1f;
          iVar18 = (local_124 - local_1c ^ uVar17) - uVar17;
          uVar17 = (int)(local_120 - local_138) >> 0x1f;
          iVar11 = (local_120 - local_138 ^ uVar17) - uVar17;
          if (iVar11 < iVar18) {
            iVar18 = *(int *)(&DAT_0017a4d0 + ((iVar11 * 0x100) / iVar18) * 8) * iVar18 >> 0xd;
          }
          else if (iVar11 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *(int *)(&DAT_0017a4d0 + ((iVar18 * 0x100) / iVar11) * 8) * iVar11 >> 0xd;
          }
          lVar3 = (longlong)(int)((local_134 - iVar18) * local_130) / (longlong)(int)local_134;
          iVar18 = (int)lVar3;
          if (iVar18 <= DAT_001e31f5) goto LAB_000af5d6;
          iVar11 = local_12c + (*piVar21 >> 0x18);
          *(uint *)(local_f4 + iVar11 * 4 + 1) =
               *(uint *)(local_f4 + iVar11 * 4 + 1) |
               1 << (0x1fU - ((char)local_12c + *(char *)((int)piVar21 + 2)) & 0x1f);
          if ((int)(uint)*local_40 < iVar18) {
            *local_40 = (ushort)lVar3;
          }
        }
LAB_000af4ea:
        piVar21 = piVar21 + 2;
      } while( true );
    }
    uVar7 = *(ushort *)(in_EAX + 0x28);
    uVar13 = (uint)uVar7;
    uVar2 = *(ushort *)(in_EAX + 0x2a);
    uVar8 = (uint)(uVar7 >> 8);
    iVar18 = *(int *)(in_EAX + 0x2a) >> 0x1f;
    iVar18 = (int)(((*(int *)(in_EAX + 0x2a) >> 0x10) + iVar18 * -0x100) - (uint)(iVar18 << 7 < 0))
             >> 8;
    FUN_000e6a10();
    if (iVar18 < (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                      (*(uint *)((int)&DAT_00279203 + (uVar8 + extraout_ECX) * 5 + 1
                                                ) & 0x7ff) * 0x18 + 2) >> 4)) {
      return;
    }
    uVar9 = uVar13 + uVar8 * -0x100;
    uVar19 = (int)uVar9 >> 0x1f;
    iVar10 = (uVar9 ^ uVar19) - uVar19;
    uVar19 = (uint)uVar2 - extraout_ECX;
    uVar9 = (int)uVar19 >> 0x1f;
    iVar11 = (uVar19 ^ uVar9) - uVar9;
    if (iVar11 < iVar10) {
      iVar10 = *(int *)(&DAT_0017a4d0 + ((iVar11 * 0x100) / iVar10) * 8) * iVar10;
    }
    else {
      iVar12 = 0;
      if (iVar11 == 0) goto LAB_000addf2;
      iVar10 = *(int *)(&DAT_0017a4d0 + ((iVar10 * 0x100) / iVar11) * 8) * iVar11;
    }
    iVar12 = iVar10 >> 0xd;
LAB_000addf2:
    iVar11 = (int)((uVar20 - iVar12) * uVar23) / (int)uVar20;
    if ((int)(uint)(ushort)(&DAT_001e3203)[uVar8 + extraout_ECX] < iVar11) {
      (&DAT_001e3203)[uVar8 + extraout_ECX] = (ushort)iVar11;
    }
    local_38 = (uint)(uVar7 >> 8);
    local_15c = (uint)(uVar2 >> 8);
    local_1bc = &DAT_001baded;
    do {
      if (&DAT_001baded + DAT_001e31ff * 2 <= local_1bc) {
        return;
      }
      if (uVar17 < *(byte *)((int)local_1bc + 1)) {
        return;
      }
      uVar9 = uVar8 + (int)*(char *)((int)local_1bc + 2);
      uVar19 = (uint)(uVar2 >> 8) + (*local_1bc >> 0x18);
      if ((uVar9 < 0x100) && (uVar19 < 0x100)) {
        local_20 = uVar9 * 0x100;
        local_140 = uVar19 * 0x100;
        uVar6 = FUN_000e66ec();
        local_190 = (uint)uVar6 % 0x800;
        local_1ac = (byte)(uVar7 >> 8);
        local_1a0 = (byte)uVar9;
        local_19c = (byte)uVar19;
        local_1a8 = (byte)(uVar2 >> 8);
        if (local_1a0 < local_1ac) {
          if (local_19c < local_1a8) {
            local_18c = 4;
          }
          else {
            local_18c = 3;
          }
        }
        else if (local_19c < local_1a8) {
          local_18c = 1;
        }
        else {
          local_18c = 2;
        }
        local_44 = uVar19 * 0x100;
        local_154 = local_18c + -1;
        local_2c = local_154 * 4;
        local_144 = (uVar9 * 0x100 + -1) - uVar13;
        if ((&DAT_001bcded)[local_190] != '\0') {
          local_184 = &local_198;
          local_180 = &local_194;
          if (uVar9 == local_38) {
            if (uVar19 < local_15c) {
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (uint)uVar6 % 0x800;
            }
            else {
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (int)(uint)uVar6 % extraout_ECX_00 & 0xffff;
            }
          }
          else if (local_15c == uVar19) {
            if (uVar9 < local_38) {
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (int)(uint)uVar6 % extraout_ECX_01 & 0xffff;
            }
            else {
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (uint)uVar6 % 0x800;
            }
          }
          else {
            switch(local_154) {
            case 0:
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (uint)uVar6 % 0x800;
              break;
            case 1:
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (uint)uVar6 % 0x800;
              break;
            case 2:
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (int)(uint)uVar6 % extraout_ECX_02 & 0xffff;
              break;
            case 3:
              uVar6 = FUN_000e66ec();
              local_17c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              unaff_EBP = (int)(uint)uVar6 % extraout_ECX_03 & 0xffff;
            }
          }
          if (((int)((local_17c + ((int)local_17c >> 0x1f) * -0x200) -
                    (uint)(((int)local_17c >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_17c) {
            local_17c = local_17c + 1 & 0x7ff;
          }
          if (((int)((unaff_EBP + ((int)unaff_EBP >> 0x1f) * -0x200) -
                    (uint)(((int)unaff_EBP >> 0x1f) << 8 < 0)) >> 9) * 0x200 != unaff_EBP) {
            unaff_EBP = unaff_EBP - 1 & 0x7ff;
          }
          *local_184 = local_17c;
          *local_180 = unaff_EBP;
          if ((((&DAT_001bcded)[local_198] == '\0') || ((&DAT_001bcded)[local_194] == '\0')) &&
             (iVar18 < (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                            (*(uint *)((int)&DAT_00279203 +
                                                      (uVar19 * 0x100 + uVar9) * 5 + 1) & 0x7ff) *
                                            0x18 + 2) >> 4))) {
            if ((int)local_194 < (int)local_198) {
              FUN_000e6a10();
              FUN_000e6a10();
            }
            else {
              FUN_000e6a10();
            }
          }
          goto LAB_000ae746;
        }
        local_e0 = (uVar9 + local_44) * 5;
        local_13c = &DAT_001e3203 + uVar9 + local_44;
        local_188 = (uint)(iVar18 < (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                                         (*(uint *)((int)&DAT_00279203 +
                                                                   local_e0 + 1) & 0x7ff) * 0x18 + 2
                                                         ) >> 4));
        if (local_188 != 0) {
          local_174 = &local_198;
          local_170 = &local_194;
          if (uVar9 == local_38) {
            if (uVar19 < local_15c) {
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (uint)uVar6 % 0x800;
            }
            else {
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (int)(uint)uVar6 % extraout_ECX_04 & 0xffff;
            }
          }
          else if (local_15c == uVar19) {
            if (uVar9 < local_38) {
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (int)(uint)uVar6 % extraout_ECX_05 & 0xffff;
            }
            else {
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (uint)uVar6 % 0x800;
            }
          }
          else {
            switch(local_154) {
            case 0:
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (uint)uVar6 % 0x800;
              break;
            case 1:
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (uint)uVar6 % 0x800;
              break;
            case 2:
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (int)(uint)uVar6 % extraout_ECX_06 & 0xffff;
              break;
            case 3:
              uVar6 = FUN_000e66ec();
              local_16c = (uint)uVar6 % 0x800;
              uVar6 = FUN_000e66ec();
              local_168 = (int)(uint)uVar6 % extraout_ECX_07 & 0xffff;
            }
          }
          if (((int)((local_16c + ((int)local_16c >> 0x1f) * -0x200) -
                    (uint)(((int)local_16c >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_16c) {
            local_16c = local_16c + 1 & 0x7ff;
          }
          if (((int)((local_168 + ((int)local_168 >> 0x1f) * -0x200) -
                    (uint)(((int)local_168 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_168) {
            local_168 = local_168 - 1 & 0x7ff;
          }
          *local_174 = local_16c;
          *local_170 = local_168;
          if ((int)local_194 < (int)local_198) {
            FUN_000e6a10();
          }
          FUN_000e6a10();
        }
        if (local_188 == 0) goto LAB_000ae6a3;
        switch(local_18c) {
        case 1:
          if ((int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                   (*(uint *)((int)&DAT_00279203 +
                                             (uVar19 * 0x100 + (uVar9 - 1)) * 5 + 1) & 0x7ff) * 0x18
                                   + 2) >> 4) <= iVar18) goto switchD_000ae68e_caseD_2;
          bVar4 = false;
          break;
        case 3:
          if (iVar18 < (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                            (*(uint *)((int)&DAT_00279203 +
                                                      ((uVar19 - 1) * 0x100 + uVar9) * 5 + 1) &
                                            0x7ff) * 0x18 + 2) >> 4)) goto switchD_000ae68e_caseD_4;
        default:
switchD_000ae68e_caseD_2:
          bVar4 = true;
          break;
        case 4:
switchD_000ae68e_caseD_4:
          bVar4 = false;
        }
        if (bVar4) {
LAB_000ae6a3:
          uVar9 = (int)(uVar13 - local_20) >> 0x1f;
          iVar11 = (uVar13 - local_20 ^ uVar9) - uVar9;
          uVar19 = (uint)uVar2 - local_140;
          uVar9 = (int)uVar19 >> 0x1f;
          iVar10 = (uVar19 ^ uVar9) - uVar9;
          if (iVar10 < iVar11) {
            iVar11 = *(int *)(&DAT_0017a4d0 + ((iVar10 * 0x100) / iVar11) * 8) * iVar11 >> 0xd;
          }
          else if (iVar10 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(&DAT_0017a4d0 + ((iVar11 * 0x100) / iVar10) * 8) * iVar10 >> 0xd;
          }
          lVar3 = (longlong)(int)((uVar20 - iVar11) * uVar23) / (longlong)(int)uVar20;
          iVar11 = (int)lVar3;
          if (iVar11 <= DAT_001e31f5) {
            return;
          }
          if ((int)(uint)*local_13c < iVar11) {
            *local_13c = (ushort)lVar3;
          }
        }
      }
LAB_000ae746:
      local_1bc = local_1bc + 2;
    } while( true );
  }
  local_9c = (uint)*(ushort *)(in_EAX + 0x28);
  local_98 = (uint)*(ushort *)(in_EAX + 0x2a);
  local_94 = (uint)(*(ushort *)(in_EAX + 0x28) >> 8);
  local_90 = (uint)(*(ushort *)(in_EAX + 0x2a) >> 8);
  iVar18 = *(int *)(in_EAX + 0x2a) >> 0x1f;
  local_8c = (int)(((*(int *)(in_EAX + 0x2a) >> 0x10) + iVar18 * -0x100) - (uint)(iVar18 << 7 < 0))
             >> 8;
  FUN_000e6a10();
  if (local_8c <
      (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                           (*(uint *)((int)&DAT_00279203 + (local_94 + local_90 * 0x100) * 5 + 1) &
                           0x7ff) * 0x18 + 2) >> 4)) {
    return;
  }
  uVar17 = local_98 + local_90 * -0x100;
  uVar13 = local_9c + local_94 * -0x100;
  uVar8 = (int)uVar13 >> 0x1f;
  iVar11 = (uVar13 ^ uVar8) - uVar8;
  uVar13 = (int)uVar17 >> 0x1f;
  iVar18 = (uVar17 ^ uVar13) - uVar13;
  if (iVar18 < iVar11) {
    iVar11 = *(int *)(&DAT_0017a4d0 + ((iVar18 * 0x100) / iVar11) * 8) * iVar11;
  }
  else {
    iVar10 = 0;
    if (iVar18 == 0) goto LAB_000af99a;
    iVar11 = *(int *)(&DAT_0017a4d0 + ((iVar11 * 0x100) / iVar18) * 8) * iVar18;
  }
  iVar10 = iVar11 >> 0xd;
LAB_000af99a:
  iVar18 = (int)((uVar20 - iVar10) * uVar23) / (int)uVar20;
  if ((int)(uint)*(ushort *)(&DAT_001c31f5 + (local_90 * 0x100 + local_94) * 2) < iVar18) {
    *(ushort *)(&DAT_001c31f5 + (local_90 * 0x100 + local_94) * 2) = (ushort)iVar18;
  }
  local_164 = local_9c >> 8;
  local_3c = local_98 >> 8;
  piVar21 = &DAT_001baded;
  local_a8 = uVar20;
  local_a4 = uVar23;
  local_a0 = extraout_ECX_17;
  do {
    if (&DAT_001baded + DAT_001e31ff * 2 <= piVar21) {
      return;
    }
    if (local_a0 < *(byte *)((int)piVar21 + 1)) {
      return;
    }
    local_88 = local_94 + (int)*(char *)((int)piVar21 + 2);
    local_84 = local_90 + (*piVar21 >> 0x18);
    if ((local_88 < 0x100) && (local_84 < 0x100)) {
      uVar7 = FUN_000e66ec();
      if ((byte)local_88 < (byte)local_94) {
        if ((byte)local_84 < (byte)local_90) {
          local_78 = 4;
        }
        else {
          local_78 = 3;
        }
      }
      else if ((byte)local_84 < (byte)local_90) {
        local_78 = 1;
      }
      else {
        local_78 = 2;
      }
      local_4c = local_84 * 0x100;
      local_158 = local_78 + -1;
      local_34 = local_4c + 0x100;
      local_150 = local_158 * 4;
      local_148 = (local_88 * 0x100 + -1) - local_9c;
      if ((&DAT_001bcded)[(uint)uVar7 % 0x800] != '\0') {
        local_70 = &local_80;
        local_6c = &local_7c;
        if (local_88 == local_164) {
          if (local_84 < local_3c) {
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (uint)uVar7 % 0x800;
          }
          else {
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (int)(uint)uVar7 % extraout_ECX_18 & 0xffff;
          }
        }
        else if (local_3c == local_84) {
          if (local_88 < local_164) {
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (int)(uint)uVar7 % extraout_ECX_19 & 0xffff;
          }
          else {
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (uint)uVar7 % 0x800;
          }
        }
        else {
          switch(local_158) {
          case 0:
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (uint)uVar7 % 0x800;
            break;
          case 1:
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (uint)uVar7 % 0x800;
            break;
          case 2:
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (int)(uint)uVar7 % extraout_ECX_20 & 0xffff;
            break;
          case 3:
            uVar7 = FUN_000e66ec();
            local_68 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_118 = (int)(uint)uVar7 % extraout_ECX_21 & 0xffff;
          }
        }
        if (((int)((local_68 + ((int)local_68 >> 0x1f) * -0x200) -
                  (uint)(((int)local_68 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_68) {
          local_68 = local_68 + 1 & 0x7ff;
        }
        if (((int)((local_118 + ((int)local_118 >> 0x1f) * -0x200) -
                  (uint)(((int)local_118 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_118) {
          local_118 = local_118 - 1 & 0x7ff;
        }
        *local_70 = local_68;
        *local_6c = local_118;
        if ((((&DAT_001bcded)[local_80] == '\0') || ((&DAT_001bcded)[local_7c] == '\0')) &&
           (local_8c <
            (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                 (*(uint *)((int)&DAT_00279203 +
                                           (local_84 * 0x100 + local_88) * 5 + 1) & 0x7ff) * 0x18 +
                                 2) >> 4))) {
          if ((int)local_7c < (int)local_80) {
            FUN_000e6a10();
            FUN_000e6a10();
          }
          else {
            FUN_000e6a10();
          }
        }
        goto LAB_000b0414;
      }
      local_74 = (uint)(local_8c <
                       (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                            (*(uint *)((int)&DAT_00279203 +
                                                      (local_88 + local_4c) * 5 + 1) & 0x7ff) * 0x18
                                            + 2) >> 4));
      if (local_74 != 0) {
        local_5c = &local_80;
        local_58 = &local_7c;
        if (local_88 == local_164) {
          if (local_84 < local_3c) {
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (uint)uVar7 % 0x800;
          }
          else {
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (int)(uint)uVar7 % extraout_ECX_22 & 0xffff;
          }
        }
        else if (local_3c == local_84) {
          if (local_88 < local_164) {
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (int)(uint)uVar7 % extraout_ECX_23 & 0xffff;
          }
          else {
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (uint)uVar7 % 0x800;
          }
        }
        else {
          switch(local_158) {
          case 0:
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (uint)uVar7 % 0x800;
            break;
          case 1:
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (uint)uVar7 % 0x800;
            break;
          case 2:
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (int)(uint)uVar7 % extraout_ECX_24 & 0xffff;
            break;
          case 3:
            uVar7 = FUN_000e66ec();
            local_54 = (uint)uVar7 % 0x800;
            uVar7 = FUN_000e66ec();
            local_50 = (int)(uint)uVar7 % extraout_ECX_25 & 0xffff;
          }
        }
        if (((int)((local_54 + ((int)local_54 >> 0x1f) * -0x200) -
                  (uint)(((int)local_54 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_54) {
          local_54 = local_54 + 1 & 0x7ff;
        }
        if (((int)((local_50 + ((int)local_50 >> 0x1f) * -0x200) -
                  (uint)(((int)local_50 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_50) {
          local_50 = local_50 - 1 & 0x7ff;
        }
        *local_5c = local_54;
        *local_58 = local_50;
        if ((int)local_7c < (int)local_80) {
          FUN_000e6a10();
        }
        FUN_000e6a10();
      }
      if (local_74 == 0) goto LAB_000b03b9;
      switch(local_78) {
      case 1:
        if ((int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                 (*(uint *)((int)&DAT_00279203 +
                                           (local_84 * 0x100 + (local_88 - 1)) * 5 + 1) & 0x7ff) *
                                 0x18 + 2) >> 4) <= local_8c) goto switchD_000b03a8_caseD_2;
        bVar4 = false;
        break;
      case 3:
        if (local_8c <
            (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                 (*(uint *)((int)&DAT_00279203 +
                                           ((local_84 - 1) * 0x100 + local_88) * 5 + 1) & 0x7ff) *
                                 0x18 + 2) >> 4)) goto switchD_000b03a8_caseD_4;
      default:
switchD_000b03a8_caseD_2:
        bVar4 = true;
        break;
      case 4:
switchD_000b03a8_caseD_4:
        bVar4 = false;
      }
      if (bVar4) {
LAB_000b03b9:
        iVar18 = (int)((local_a8 - piVar21[1]) * local_a4) / (int)local_a8;
        if (iVar18 <= DAT_001e31f5) {
          return;
        }
        if ((int)(uint)*(ushort *)(&DAT_001c31f5 + (local_84 * 0x100 + local_88) * 2) < iVar18) {
          *(ushort *)(&DAT_001c31f5 + (local_84 * 0x100 + local_88) * 2) = (ushort)iVar18;
        }
      }
    }
LAB_000b0414:
    piVar21 = piVar21 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_0b04e4 (Ghidra: FUN_000b04e4)
 * Prototype: void sub_0b04e4(void);
 * Address  : 0xb04e4 (Size: 536 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b04e4(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  int in_EDX;
  int iVar8;
  uint uVar9;
  int unaff_EBX;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined *local_28;
  uint local_20;
  int local_18;
  
  iVar5 = (uint)*(ushort *)(in_EAX + 0x10) * 0x81;
  iVar8 = (uint)*(ushort *)(in_EAX + 0x28) + in_ECX * -0x100;
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  local_18 = (uint)*(ushort *)(in_EAX + 0x2a) + in_ECX * -0x100;
  if (local_18 < 1) {
    local_18 = 0;
  }
  iVar2 = (uint)*(ushort *)(in_EAX + 0x28) + in_ECX * 0x100;
  if (0xfffe < iVar2) {
    iVar2 = 0xffff;
  }
  iVar7 = in_ECX * 0x100 + (uint)*(ushort *)(in_EAX + 0x2a);
  if (0xfffe < iVar7) {
    iVar7 = 0xffff;
  }
  iVar3 = (int)((iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0)) >> 8;
  puVar12 = &DAT_001e3203 +
            ((int)((local_18 + (local_18 >> 0x1f) * -0x100) - (uint)((local_18 >> 0x1f) << 7 < 0))
            >> 8) * 0x100 + iVar3;
  local_20 = *(uint *)(&DAT_001c1dce + iVar5);
  if (local_18 <= iVar7) {
    puVar11 = &DAT_00388e3c;
    bVar16 = SBORROW4(iVar8,iVar2);
    bVar15 = iVar8 - iVar2 < 0;
    bVar14 = iVar8 == iVar2;
    iVar13 = iVar8;
    local_28 = &DAT_001c1dcd + iVar5;
    while( true ) {
      while (bVar14 || bVar16 != bVar15) {
        if ((*puVar11 & local_20) != 0) {
          uVar10 = (uint)*(ushort *)(in_EAX + 0x2a) - local_18;
          uVar4 = (uint)*(ushort *)(in_EAX + 0x28) - iVar13;
          uVar9 = (int)uVar4 >> 0x1f;
          iVar5 = (uVar4 ^ uVar9) - uVar9;
          uVar4 = (int)uVar10 >> 0x1f;
          iVar6 = (uVar10 ^ uVar4) - uVar4;
          if (iVar6 < iVar5) {
            iVar5 = *(int *)(&DAT_0017a4d0 + ((iVar6 * 0x100) / iVar5) * 8) * iVar5 >> 0xd;
          }
          else if (iVar6 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(&DAT_0017a4d0 + ((iVar5 * 0x100) / iVar6) * 8) * iVar6 >> 0xd;
          }
          lVar1 = (longlong)((in_EDX - iVar5) * unaff_EBX) / (longlong)in_EDX;
          if ((int)(uint)*puVar12 < (int)lVar1) {
            *puVar12 = (ushort)lVar1;
          }
        }
        iVar13 = iVar13 + 0x100;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
        bVar16 = SBORROW4(iVar13,iVar2);
        bVar15 = iVar13 - iVar2 < 0;
        bVar14 = iVar13 == iVar2;
      }
      local_18 = local_18 + 0x100;
      local_20 = *(uint *)(local_28 + 5);
      puVar12 = puVar12 + (0xff - (((int)((iVar2 + (iVar2 >> 0x1f) * -0x100) -
                                         (uint)((iVar2 >> 0x1f) << 7 < 0)) >> 8) - iVar3));
      if (iVar7 < local_18) break;
      puVar11 = &DAT_00388e3c;
      bVar16 = SBORROW4(iVar8,iVar2);
      bVar15 = iVar8 - iVar2 < 0;
      bVar14 = iVar8 == iVar2;
      iVar13 = iVar8;
      local_28 = local_28 + 4;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0b06fc (Ghidra: FUN_000b06fc)
 * Prototype: void sub_0b06fc(void);
 * Address  : 0xb06fc (Size: 381 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xadbc0
 ******************************************************************************/
void FUN_000b06fc(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint in_ECX;
  uint uVar3;
  uint in_EDX;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  
  bVar10 = 0;
  iVar2 = (unaff_EBX - in_EAX) / 2 + 1;
  iVar1 = (int)(in_ECX - in_EDX) / 2 + 1;
  if ((DAT_001e31f9 != '\0') &&
     (pbVar6 = &DAT_001bd5ed + DAT_002e6f0e * 0x2e, &DAT_001bd5ed < pbVar6)) {
    do {
      if (((*pbVar6 & 8) != 0) || ((*pbVar6 & 0x80) != 0)) {
        DAT_00388e34 = DAT_00388e34 + 1;
        uVar3 = (in_EAX + iVar2) - (uint)pbVar6[0x29];
        uVar4 = (int)uVar3 >> 0x1f;
        if (((int)((uVar3 ^ uVar4) - uVar4) < (int)((uint)pbVar6[5] + iVar2)) &&
           (uVar3 = (in_EDX + iVar1) - (uint)pbVar6[0x2b], uVar4 = (int)uVar3 >> 0x1f,
           (int)((uVar3 ^ uVar4) - uVar4) < (int)(iVar1 + (uint)pbVar6[5]))) {
          DAT_00388e30 = DAT_00388e30 + 1;
          FUN_000adbc0();
          *pbVar6 = *pbVar6 & 0x77;
        }
      }
      pbVar6 = &DAT_001bd5ed + (uint)*(ushort *)(pbVar6 + 0x26) * 0x2e;
    } while (&DAT_001bd5ed < pbVar6);
  }
  iVar2 = in_EDX * 0x100 + in_EAX;
  puVar7 = (undefined4 *)(&DAT_001e3203 + iVar2);
  puVar5 = (undefined4 *)(&DAT_001c31f5 + iVar2 * 2);
  for (; in_EDX <= in_ECX; in_EDX = in_EDX + 1) {
    puVar8 = puVar5;
    puVar9 = puVar7;
    for (uVar3 = (unaff_EBX - in_EAX & 0x7fffffffU) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    for (uVar3 = (unaff_EBX - in_EAX) * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar10 * -2 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar10 * -2 + 1);
    }
    puVar7 = puVar7 + 0x80;
    puVar5 = puVar5 + 0x80;
  }
  return;
}

/******************************************************************************
 * Function : sub_0b087c (Ghidra: FUN_000b087c)
 * Prototype: void sub_0b087c(void);
 * Address  : 0xb087c (Size: 158 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0xac9e8, 0xaca0c, 0xaca68, 0xacce4, 0xacdfc, 0xad148, 0xad290, 0xad66c
 * Callees  : 1 -> 0xb0980
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b087c(void)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int in_ECX;
  int in_EDX;
  byte *pbVar3;
  int unaff_EBX;
  int iVar4;
  
  iVar4 = 0;
  for (pbVar3 = &DAT_001bd61b; pbVar3 < &DAT_001c1dcd; pbVar3 = pbVar3 + 0x2e) {
    if (((*pbVar3 & 1) != 0) && ((*pbVar3 & 4) == 0)) {
      uVar2 = (uint)pbVar3[5];
      if ((in_EAX <= (int)(pbVar3[0x29] + uVar2)) &&
         ((((int)(pbVar3[0x29] - uVar2) <= unaff_EBX && (in_EDX <= (int)(pbVar3[0x2b] + uVar2))) &&
          ((int)(pbVar3[0x2b] - uVar2) <= in_ECX)))) {
        bVar1 = *pbVar3;
        _DAT_00388e38 = 1;
        *pbVar3 = bVar1 | 8;
        iVar4 = iVar4 + 1;
        *pbVar3 = bVar1 & 0x7f | 8;
      }
    }
  }
  if (iVar4 != 0) {
    FUN_000b0980();
  }
  return;
}

/******************************************************************************
 * Function : sub_0b0980 (Ghidra: FUN_000b0980)
 * Prototype: void sub_0b0980(void);
 * Address  : 0xb0980 (Size: 308 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xaca0c, 0xb087c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b0980(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = in_EDX - in_ECX;
  while (in_EDX == in_ECX || SBORROW4(in_EDX,in_ECX) != iVar1 < 0) {
    if (in_EAX <= unaff_EBX) {
      iVar5 = in_EAX * 5 + in_EDX * 0x500;
      iVar1 = in_EAX + -1;
      iVar3 = in_EDX + -1;
      iVar4 = in_EAX * 2 + in_EDX * 0x200;
      iVar2 = in_EAX;
      do {
        iVar6 = iVar3;
        if (iVar3 < 1) {
          iVar6 = 0;
        }
        iVar7 = iVar1;
        if (iVar1 < 1) {
          iVar7 = 0;
        }
        iVar8 = iVar3;
        if (iVar3 < 1) {
          iVar8 = 0;
        }
        iVar9 = iVar1;
        if (iVar1 < 1) {
          iVar9 = 0;
        }
        if (((((*(uint *)((int)&DAT_00279203 + iVar5 + 1) & 0x7ff) == 0) ||
             ((*(uint *)((int)&DAT_00279203 + (iVar6 * 0x100 + iVar2) * 5 + 1) & 0x7ff) == 0)) ||
            ((*(uint *)((int)&DAT_00279203 + (iVar7 + in_EDX * 0x100) * 5 + 1) & 0x7ff) == 0)) ||
           ((*(uint *)((int)&DAT_00279203 + (iVar9 + iVar8 * 0x100) * 5 + 1) & 0x7ff) == 0)) {
          *(undefined2 *)(&DAT_001c31f5 + iVar4) = 0;
        }
        else {
          *(short *)(&DAT_001c31f5 + iVar4) = (short)DAT_001e31f5 << 8;
        }
        iVar5 = iVar5 + 5;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 2;
      } while (iVar2 <= unaff_EBX);
    }
    in_EDX = in_EDX + 1;
    iVar1 = in_EDX - in_ECX;
  }
  return;
}

/******************************************************************************
 * Function : sub_0b0ab4 (Ghidra: FUN_000b0ab4)
 * Prototype: void sub_0b0ab4(void);
 * Address  : 0xb0ab4 (Size: 108 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b0ab4(void)

{
  byte *in_EAX;
  
  if (in_EAX[6] == 1) {
    if ((uint)*(ushort *)(in_EAX + 0x1e) + (uint)*(ushort *)(in_EAX + 0x16) <
        (uint)*(ushort *)(in_EAX + 0x20)) {
      *(short *)(in_EAX + 0x16) = *(short *)(in_EAX + 0x16) + *(short *)(in_EAX + 0x1e);
    }
    else {
      in_EAX[6] = 2;
      *(ushort *)(in_EAX + 0x16) = *(ushort *)(in_EAX + 0x20);
    }
  }
  else {
    if ((int)(uint)*(ushort *)(in_EAX + 0x22) <
        (int)((uint)*(ushort *)(in_EAX + 0x16) - (uint)*(ushort *)(in_EAX + 0x1e))) {
      *(short *)(in_EAX + 0x16) = *(short *)(in_EAX + 0x16) - *(short *)(in_EAX + 0x1e);
      *in_EAX = *in_EAX | 8;
      return;
    }
    in_EAX[6] = 1;
    *(ushort *)(in_EAX + 0x16) = *(ushort *)(in_EAX + 0x22);
  }
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : sub_0b0b20 (Ghidra: FUN_000b0b20)
 * Prototype: void sub_0b0b20(void);
 * Address  : 0xb0b20 (Size: 26 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b0b20(void)

{
  byte *in_EAX;
  
  *(short *)(in_EAX + 0x18) = *(short *)(in_EAX + 0x18) + *(short *)(in_EAX + 0x1c);
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : sub_0b0b9c (Ghidra: FUN_000b0b9c)
 * Prototype: longlong sub_0b0b9c(void);
 * Address  : 0xb0b9c (Size: 58 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000b0bab) */

longlong FUN_000b0b9c(void)

{
  uint in_EDX;
  byte *pbVar1;
  
  pbVar1 = &DAT_001c1e4e;
  do {
    if ((*pbVar1 & 1) == 0) {
      *pbVar1 = *pbVar1 | 1;
      return CONCAT44(in_EDX,pbVar1);
    }
    pbVar1 = pbVar1 + 0x81;
  } while (pbVar1 < &DAT_001c31f5);
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0b0c44 (Ghidra: FUN_000b0c44)
 * Prototype: undefined8 sub_0b0c44(void);
 * Address  : 0xb0c44 (Size: 198 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xdb5c4, 0xdbb84
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b0c44(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 in_EDX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = (uint)*(byte *)(in_EAX + 0xe);
  uVar4 = uVar2 + 1;
  if (0xfe < uVar4) {
    uVar4 = 0xff;
  }
  uVar1 = *(byte *)(in_EAX + 0x10) + 1;
  if (0xfe < uVar1) {
    uVar1 = 0xff;
  }
  iVar5 = (uint)*(byte *)(in_EAX + 0x10) * 0x100;
  iVar3 = (uint)(ushort)(&DAT_001e3203)[uVar2 + iVar5] +
          ((int)(((uint)(ushort)(&DAT_001e3203)[uVar2 + uVar1 * 0x100] -
                 (uint)(ushort)(&DAT_001e3203)[uVar2 + iVar5]) * (uint)*(byte *)(in_EAX + 0xf)) >> 8
          );
  iVar3 = ((int)((uint)*(byte *)(in_EAX + 0xd) *
                ((((int)((uint)*(byte *)(in_EAX + 0xf) *
                        ((uint)(ushort)(&DAT_001e3203)[uVar1 * 0x100 + uVar4] -
                        (uint)(ushort)(&DAT_001e3203)[iVar5 + uVar4])) >> 8) +
                 (uint)(ushort)(&DAT_001e3203)[iVar5 + uVar4]) - iVar3)) >> 8) + iVar3;
  if ((iVar3 < 0x2000) && (iVar3 = iVar3 + 0x800, 0x2000 < iVar3)) {
    iVar3 = 0x2000;
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0b0d0c (Ghidra: FUN_000b0d0c)
 * Prototype: int sub_0b0d0c(void);
 * Address  : 0xb0d0c (Size: 586 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:2725 ("Light is already in list")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdb1a4
 * Callees  : 1 -> 0xdc440
 * Strings  :
 *   - 0x16a49d: "light.cpp"
 ******************************************************************************/
int FUN_000b0d0c(void)

{
  ushort *puVar1;
  short *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_EDX;
  byte bVar5;
  int aiStack_40 [6];
  int local_28;
  int local_24;
  undefined4 *local_20;
  byte *local_1c;
  byte *local_18;
  
  bVar5 = 0;
  local_24 = 0;
  if (DAT_002ee8d2 != 0) {
    iVar4 = 0;
    local_20 = in_EDX;
    for (iVar2 = 0; iVar2 < (int)(uint)DAT_002ee8d2; iVar2 = iVar2 + 1) {
      *(undefined4 *)((int)aiStack_40 + iVar4 + 4) = 0x7fffffff;
      iVar4 = iVar4 + 4;
    }
    local_18 = &DAT_001bd5ed + DAT_002e6f0e * 0x2e;
    if (&DAT_001bd5ed < &DAT_001bd5ed + DAT_002e6f0e * 0x2e) {
      do {
        if ((*local_18 & 1) != 0) {
          aiStack_40[0] = 0xb0db0;
          local_28 = FUN_000dc440();
          if ((((local_28 < 0xa00) && (local_28 < aiStack_40[DAT_002ee8d2])) &&
              (*in_EAX != *(short *)(local_18 + 0x28))) &&
             (in_EAX[1] != *(short *)(local_18 + 0x2a))) {
            if ((1 < DAT_002ee8d2) && (iVar4 = DAT_002ee8d2 - 1, 0 < iVar4)) {
              iVar2 = iVar4 * 4;
              puVar3 = (undefined4 *)(iVar4 * 6 + -6 + (int)local_20);
              do {
                *(undefined4 *)((int)aiStack_40 + iVar2 + 4) =
                     *(undefined4 *)((int)aiStack_40 + iVar2);
                iVar2 = iVar2 + -4;
                *(undefined4 *)((int)puVar3 + 6) = *puVar3;
                *(undefined2 *)((int)puVar3 + (uint)bVar5 * -8 + 10) =
                     *(undefined2 *)(puVar3 + (uint)bVar5 * -2 + 1);
                puVar3 = (undefined4 *)((int)puVar3 + -6);
              } while (0 < iVar2);
            }
            aiStack_40[1] = local_28;
            *local_20 = *(undefined4 *)(local_18 + 0x28);
            *(undefined2 *)(local_20 + (uint)bVar5 * -2 + 1) =
                 *(undefined2 *)(local_18 + (uint)bVar5 * -8 + 0x2c);
          }
        }
        puVar1 = (ushort *)(local_18 + 0x26);
        local_18 = &DAT_001bd5ed + (uint)*puVar1 * 0x2e;
      } while (&DAT_001bd5ed < &DAT_001bd5ed + (uint)*puVar1 * 0x2e);
    }
    local_1c = &DAT_001bd5ed + DAT_002e6f16 * 0x2e;
    if (&DAT_001bd5ed < &DAT_001bd5ed + DAT_002e6f16 * 0x2e) {
      do {
        if ((*local_1c & 1) != 0) {
          aiStack_40[0] = 0xb0e9b;
          aiStack_40[5] = FUN_000dc440();
          if (((aiStack_40[5] < 0xa00) && (aiStack_40[5] < aiStack_40[DAT_002ee8d2])) &&
             ((*in_EAX != *(short *)(local_1c + 0x28) && (in_EAX[1] != *(short *)(local_1c + 0x2a)))
             )) {
            if ((1 < DAT_002ee8d2) && (iVar4 = DAT_002ee8d2 - 1, 0 < iVar4)) {
              iVar2 = iVar4 * 4;
              puVar3 = (undefined4 *)(iVar4 * 6 + -6 + (int)local_20);
              do {
                *(undefined4 *)((int)aiStack_40 + iVar2 + 4) =
                     *(undefined4 *)((int)aiStack_40 + iVar2);
                iVar2 = iVar2 + -4;
                *(undefined4 *)((int)puVar3 + 6) = *puVar3;
                *(undefined2 *)((int)puVar3 + (uint)bVar5 * -8 + 10) =
                     *(undefined2 *)(puVar3 + (uint)bVar5 * -2 + 1);
                puVar3 = (undefined4 *)((int)puVar3 + -6);
              } while (0 < iVar2);
            }
            aiStack_40[1] = aiStack_40[5];
            *local_20 = *(undefined4 *)(local_1c + 0x28);
            *(undefined2 *)(local_20 + (uint)bVar5 * -2 + 1) =
                 *(undefined2 *)(local_1c + (uint)bVar5 * -8 + 0x2c);
          }
        }
        puVar1 = (ushort *)(local_1c + 0x26);
        local_1c = &DAT_001bd5ed + (uint)*puVar1 * 0x2e;
      } while (&DAT_001bd5ed < &DAT_001bd5ed + (uint)*puVar1 * 0x2e);
    }
    iVar4 = 0;
    for (iVar2 = 0;
        (iVar4 < (int)(uint)DAT_002ee8d2 && (*(int *)((int)aiStack_40 + iVar2 + 4) != 0x7fffffff));
        iVar2 = iVar2 + 4) {
      iVar4 = iVar4 + 1;
      local_24 = local_24 + 1;
    }
  }
  return local_24;
}

/******************************************************************************
 * Function : dk_prev_when_removing_light_0b0f94 (Ghidra: FUN_000b0f94)
 * Prototype: void dk_prev_when_removing_light_0b0f94(void);
 * Address  : 0xb0f94 (Size: 298 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp:2764; light.cpp:2773; light.cpp:2778 ("List has < 0 structures")
 * Naming   : String 'No prev when removing light from list'
 * Callers  : 2 -> 0xacce4, 0xad66c
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16ad59: "light.cpp"
 *   - 0x16ad83: "light.cpp"
 *   - 0x16ada5: "light.cpp"
 *   - 0x16ad33: "No prev when removing light from list"
 *   - 0x16ad63: "Could not find light %d in list"
 *   - 0x16ad8d: "List has < 0 structures"
 ******************************************************************************/
void FUN_000b0f94(void)

{
  ushort *puVar1;
  bool bVar2;
  undefined1 *in_EAX;
  undefined1 *puVar3;
  undefined1 *extraout_ECX;
  int *in_EDX;
  undefined1 *puVar4;
  
  bVar2 = false;
  if ((in_EAX[1] & 1) != 0) {
    if ((uint)*(ushort *)(in_EAX + 0xe) == in_EDX[1]) {
      bVar2 = true;
      in_EDX[1] = CONCAT22((short)((uint)in_EDX[1] >> 0x10),*(undefined2 *)(in_EAX + 0x26));
      *in_EDX = *in_EDX + -1;
      *(undefined2 *)(in_EAX + 0x26) = 0;
      in_EAX[1] = in_EAX[1] & 0xfe;
    }
    else {
      puVar3 = (undefined1 *)0x0;
      puVar4 = &DAT_001bd5ed + in_EDX[1] * 0x2e;
      if (&DAT_001bd5ed + in_EDX[1] * 0x2e != &DAT_001bd5ed) {
        do {
          if (puVar4 == in_EAX) {
            bVar2 = true;
            if (puVar3 == (undefined1 *)0x0) {
              FUN_000e7714(&DAT_0019cbac,s_No_prev_when_removing_light_from_0016ad33);
              FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2764, g_log_buf) */
              in_EAX = extraout_ECX;
            }
            else {
              *(undefined2 *)(puVar3 + 0x26) = *(undefined2 *)(in_EAX + 0x26);
              in_EAX[1] = in_EAX[1] & 0xfe;
              *in_EDX = *in_EDX + -1;
              *(undefined2 *)(in_EAX + 0x26) = 0;
            }
          }
          puVar1 = (ushort *)(puVar4 + 0x26);
          puVar3 = puVar4;
          puVar4 = &DAT_001bd5ed + (uint)*puVar1 * 0x2e;
        } while (&DAT_001bd5ed + (uint)*puVar1 * 0x2e != &DAT_001bd5ed);
      }
    }
    if (!bVar2) {
      FUN_000e7714(&DAT_0019cbac,s_Could_not_find_light__d_in_list_0016ad63,
                   *(undefined2 *)(in_EAX + 0xe));
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2773, g_log_buf) */
    }
    if (*in_EDX < 0) {
      FUN_000ddaf0(); /* LbErrorLog("light.cpp", line 2778, "List has < 0 structures") */
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0b10c0 (Ghidra: FUN_000b10c0)
 * Prototype: void sub_0b10c0(void);
 * Address  : 0xb10c0 (Size: 689 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xac630
 * Callees  : 1 -> 0xb182c
 ******************************************************************************/
void FUN_000b10c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;
  int aiStack_60 [5];
  undefined1 auStack_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34 [5];
  uint local_20;
  char local_1c [4];
  
  bVar8 = 0;
  puVar6 = (undefined4 *)auStack_4c;
  iVar7 = 0;
  local_20 = 1;
  local_44 = 0x100;
  local_34[4] = 0x100;
  local_40 = 0;
  do {
    do {
      iVar2 = *(int *)((int)&PTR_LAB_00192fe0 + *(int *)((int)puVar6 + 0xc));
      *(int *)((int)puVar6 + 0x14) =
           *(int *)((int)puVar6 + 0x28) * *(int *)((int)&DAT_001927e0 + *(int *)((int)puVar6 + 0xc))
           >> 0x10;
      *(int *)((int)puVar6 + 0x18) = -(*(int *)((int)puVar6 + 0x28) * iVar2 >> 8) >> 8;
      iVar2 = *(int *)((int)puVar6 + 0x14) >> 0x1f;
      *(int *)((int)puVar6 + 0x14) =
           (int)((*(int *)((int)puVar6 + 0x14) + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8;
      iVar2 = *(int *)((int)puVar6 + 0x18) >> 0x1f;
      iVar2 = (int)((*(int *)((int)puVar6 + 0x18) + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8;
      *(int *)((int)puVar6 + 0x18) = iVar2;
      uVar4 = iVar2 << 8;
      uVar3 = (*(int *)((int)puVar6 + 0x14) << 8) >> 0x1f;
      iVar2 = (*(int *)((int)puVar6 + 0x14) << 8 ^ uVar3) - uVar3;
      uVar3 = (int)uVar4 >> 0x1f;
      iVar1 = (uVar4 ^ uVar3) - uVar3;
      if (iVar1 < iVar2) {
        iVar2 = *(int *)(&DAT_0017a4d0 + ((iVar1 * 0x100) / iVar2) * 8) * iVar2 >> 0xd;
      }
      else if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(&DAT_0017a4d0 + ((iVar2 * 0x100) / iVar1) * 8) * iVar1 >> 0xd;
      }
      *(int *)((int)puVar6 + 0x10) = iVar2;
      puVar5 = (undefined1 *)puVar6;
      if ((*(int *)((int)puVar6 + 0x14) != 0) || (*(int *)((int)puVar6 + 0x18) != 0)) {
        do {
          iVar1 = 0;
          puVar5[0x30] = 0;
          iVar2 = 0;
          do {
            if (*(char *)((int)&DAT_001baded + iVar2) == '\0') break;
            if ((*(int *)((int)&DAT_001bade9 + iVar2 + 3) >> 0x18 == *(int *)(puVar5 + 0x14)) &&
               (*(int *)((int)&DAT_001baded + iVar2) >> 0x18 == *(int *)(puVar5 + 0x18))) {
              *(int *)(puVar5 + 0x24) = iVar1;
              puVar5[0x30] = 1;
              break;
            }
            iVar2 = iVar2 + 8;
            iVar1 = iVar1 + 1;
          } while (iVar2 < 0x2000);
          if (puVar5[0x30] == '\0') {
            *(undefined1 *)((int)&DAT_001baded + iVar7 * 8 + 2) = puVar5[0x14];
            *(undefined1 *)((int)&DAT_001baded + iVar7 * 8 + 3) = puVar5[0x18];
            *(undefined1 *)((int)&DAT_001baded + iVar7 * 8 + 1) = puVar5[0x2c];
            (&DAT_001badf1)[iVar7 * 2] = *(undefined4 *)(puVar5 + 0x10);
            *(undefined1 **)(puVar5 + -4) = puVar5 + 0x20;
            *(undefined1 **)(puVar5 + -8) = puVar5 + 0x1c;
            *(int *)(puVar5 + -0xc) = *(int *)(puVar5 + 0x18) + 1;
            iVar2 = *(int *)(puVar5 + 0x14);
            *(undefined1 *)(&DAT_001baded + iVar7 * 2) = 1;
            puVar6 = (undefined4 *)(puVar5 + -0x10);
            *(int *)(puVar5 + -0x10) = iVar2 + 1;
            iVar7 = iVar7 + 1;
            *(undefined4 *)(puVar5 + -0x14) = 0xb12f9;
            FUN_000b182c();
          }
          else {
            puVar6 = (undefined4 *)puVar5;
            if ((uint)*(byte *)((int)&DAT_001baded + *(int *)(puVar5 + 0x24) * 8 + 1) ==
                *(uint *)(puVar5 + 0x2c)) break;
            iVar2 = *(int *)(puVar5 + 0x24) * 8;
            if (*(int *)(puVar5 + 0x24) < 0x3ff) {
              do {
                if (*(char *)((int)&DAT_001baded + iVar2) == '\0') break;
                iVar1 = iVar2 + 8;
                *(undefined4 *)((int)&DAT_001baded + iVar2) =
                     *(undefined4 *)((int)&DAT_001badf5 + iVar2);
                *(undefined4 *)((int)&DAT_001badf1 + (uint)bVar8 * -8 + iVar2) =
                     *(undefined4 *)((int)&DAT_001badf9 + (uint)bVar8 * -8 + iVar2);
                iVar2 = iVar1;
              } while (iVar1 < 0x1ff8);
            }
            iVar7 = iVar7 + -1;
          }
          puVar5 = (undefined1 *)puVar6;
        } while (*(char *)((int)puVar6 + 0x30) != '\0');
      }
      iVar2 = puVar6[3];
      puVar6[3] = iVar2 + 4;
    } while (iVar2 + 4 != 0x2000);
    iVar2 = puVar6[0xb];
    puVar6[2] = puVar6[2] + 0x100;
    puVar6[0xb] = iVar2 + 1;
    if (0xf < iVar2 + 1) {
      uVar3 = 0x100;
      DAT_001e31ff = iVar7;
      do {
        uVar3 = uVar3 & 0xffffff00;
        iVar7 = 0;
        do {
          if ((*(char *)((int)&DAT_001baded + iVar7) == '\0') ||
             (*(char *)((int)&DAT_001badf5 + iVar7) == '\0')) break;
          if (*(int *)((int)&DAT_001badf9 + iVar7) < *(int *)((int)&DAT_001badf1 + iVar7)) {
            *puVar6 = *(undefined4 *)((int)&DAT_001baded + iVar7);
            puVar6[(uint)bVar8 * -2 + 1] =
                 *(undefined4 *)((int)&DAT_001badf1 + (uint)bVar8 * -8 + iVar7);
            *(undefined4 *)((int)&DAT_001baded + iVar7) =
                 *(undefined4 *)((int)&DAT_001badf5 + iVar7);
            *(undefined4 *)((int)&DAT_001badf1 + (uint)bVar8 * -8 + iVar7) =
                 *(undefined4 *)((int)&DAT_001badf9 + (uint)bVar8 * -8 + iVar7);
            uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)(uVar3 >> 8));
            *(undefined4 *)((int)&DAT_001badf5 + iVar7) = *puVar6;
            *(undefined4 *)((int)&DAT_001badf9 + (uint)bVar8 * -8 + iVar7) =
                 puVar6[(uint)bVar8 * -2 + 1];
          }
          iVar7 = iVar7 + 8;
        } while (iVar7 < 0x1ff8);
        if ((char)uVar3 == '\0') {
          return;
        }
      } while( true );
    }
    puVar6[10] = puVar6[2];
    puVar6[3] = 0;
  } while( true );
}

/******************************************************************************
 * Function : sub_0b1398 (Ghidra: FUN_000b1398)
 * Prototype: void sub_0b1398(void);
 * Address  : 0xb1398 (Size: 40 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b1398(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 0x1f;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 4;
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 - 1;
    *(int *)((int)&DAT_00388e3c + iVar2) = 1 << bVar1;
    iVar2 = iVar3;
  } while (iVar3 != 0x80);
  return;
}

/******************************************************************************
 * Function : sub_0b13c0 (Ghidra: FUN_000b13c0)
 * Prototype: undefined4 sub_0b13c0(int param_1,int param_2);
 * Address  : 0xb13c0 (Size: 183 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xb14a0, 0xb182c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000b13c0(int param_1,int param_2)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  if ((in_EAX < unaff_EBX) || (param_1 < in_EAX)) {
    if (in_EAX < unaff_EBX) {
      if ((in_ECX <= in_EDX) && (in_EDX <= param_2)) {
        return 3;
      }
      if (param_2 < in_EDX) {
        return 2;
      }
      if (in_EDX < in_ECX) {
        return 4;
      }
    }
    else if (param_1 < in_EAX) {
      if ((in_ECX <= in_EDX) && (in_EDX <= param_2)) {
        return 7;
      }
      if (param_2 < in_EDX) {
        return 8;
      }
      if (in_EDX < in_ECX) {
        return 6;
      }
    }
  }
  else {
    if ((in_ECX <= in_EDX) && (in_EDX <= param_2)) {
      return 0xffffffff;
    }
    if (param_2 < in_EDX) {
      return 1;
    }
    if (in_EDX < in_ECX) {
      return 5;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0b14a0 (Ghidra: FUN_000b14a0)
 * Prototype: void sub_0b14a0(uint *param_1,uint *param_2);
 * Address  : 0xb14a0 (Size: 866 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xb13c0, 0xe66ec
 ******************************************************************************/
void FUN_000b14a0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint in_ECX;
  uint unaff_EBP;
  uint local_18;
  
  uVar2 = FUN_000b13c0(param_1,param_2);
  local_18 = in_ECX;
  switch(uVar2) {
  case 1:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 2:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 3:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 4:
    FUN_000e66ec();
    FUN_000e66ec();
  case 5:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 6:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 7:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 8:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 0xffffffff:
    unaff_EBP = 0;
    local_18 = 0;
  }
  if (((int)((local_18 + ((int)local_18 >> 0x1f) * -0x200) -
            (uint)(((int)local_18 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_18) {
    local_18 = local_18 + 1 & 0x7ff;
  }
  if (((int)((unaff_EBP + ((int)unaff_EBP >> 0x1f) * -0x200) -
            (uint)(((int)unaff_EBP >> 0x1f) << 8 < 0)) >> 9) * 0x200 != unaff_EBP) {
    unaff_EBP = unaff_EBP - 1 & 0x7ff;
  }
  *param_1 = local_18;
  *param_2 = unaff_EBP;
  return;
}

/******************************************************************************
 * Function : sub_0b182c (Ghidra: FUN_000b182c)
 * Prototype: void sub_0b182c(uint *param_1,uint *param_2);
 * Address  : 0xb182c (Size: 866 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb10c0
 * Callees  : 2 -> 0xb13c0, 0xe66ec
 ******************************************************************************/
void FUN_000b182c(uint *param_1,uint *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint in_ECX;
  uint unaff_EBP;
  uint local_18;
  
  uVar2 = FUN_000b13c0(param_1,param_2);
  local_18 = in_ECX;
  switch(uVar2) {
  case 1:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 2:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 3:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 4:
    FUN_000e66ec();
    FUN_000e66ec();
  case 5:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 6:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 7:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 8:
    uVar1 = FUN_000e66ec();
    local_18 = (uint)uVar1 % 0x800;
    uVar1 = FUN_000e66ec();
    unaff_EBP = (uint)uVar1 % 0x800;
    break;
  case 0xffffffff:
    unaff_EBP = 0;
    local_18 = 0;
  }
  if (((int)((local_18 + ((int)local_18 >> 0x1f) * -0x200) -
            (uint)(((int)local_18 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_18) {
    local_18 = local_18 + 1 & 0x7ff;
  }
  if (((int)((unaff_EBP + ((int)unaff_EBP >> 0x1f) * -0x200) -
            (uint)(((int)unaff_EBP >> 0x1f) << 8 < 0)) >> 9) * 0x200 != unaff_EBP) {
    unaff_EBP = unaff_EBP - 1 & 0x7ff;
  }
  *param_1 = local_18;
  *param_2 = unaff_EBP;
  return;
}

/******************************************************************************
 * Function : sub_0b1b90 (Ghidra: FUN_000b1b90)
 * Prototype: bool sub_0b1b90(void);
 * Address  : 0xb1b90 (Size: 52 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000b1b90(void)

{
  int in_EAX;
  int in_EDX;
  
  return in_EDX < (int)(uint)(*(byte *)((int)&DAT_0019e973 +
                                       (*(uint *)(in_EAX + 1) & 0x7ff) * 0x18 + 2) >> 4);
}

/******************************************************************************
 * Function : sub_0b1c20 (Ghidra: FUN_000b1c20)
 * Prototype: int sub_0b1c20(void);
 * Address  : 0xb1c20 (Size: 17 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000b1c20(void)

{
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  return ((in_EDX - unaff_EBX) * in_EAX) / in_EDX;
}

/******************************************************************************
 * Function : sub_0b1c40 (Ghidra: FUN_000b1c40)
 * Prototype: void sub_0b1c40(void);
 * Address  : 0xb1c40 (Size: 42 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b1c40(void)

{
  uint *puVar1;
  int in_EAX;
  int iVar2;
  char in_CL;
  char in_DL;
  uint uVar3;
  int unaff_EBX;
  
  iVar2 = in_EAX + unaff_EBX * 4;
  uVar3 = 1 << (0x1fU - in_DL & 0x1f);
  if (in_CL != '\0') {
    puVar1 = (uint *)(iVar2 + 1);
    *puVar1 = *puVar1 | uVar3;
    return;
  }
  puVar1 = (uint *)(iVar2 + 1);
  *puVar1 = *puVar1 & ~uVar3;
  return;
}

/******************************************************************************
 * Function : sub_0b1f60 (Ghidra: FUN_000b1f60)
 * Prototype: void sub_0b1f60(void);
 * Address  : 0xb1f60 (Size: 69 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_000b1f60(void)

{
  int in_EAX;
  int in_EDX;
  
  if (in_EDX < in_EAX) {
    FUN_000e6a10();
  }
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_0b20e0 (Ghidra: FUN_000b20e0)
 * Prototype: void sub_0b20e0(void);
 * Address  : 0xb20e0 (Size: 119 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x298b5
 * Callees  : 4 -> 0x15318, 0x72810, 0xac630, 0xb2158
 ******************************************************************************/
void FUN_000b20e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_EDX;
  int iVar4;
  int iVar5;
  
  do {
    FUN_000b2158();
  } while (extraout_EDX < 0x10000);
  iVar3 = 0x10;
  iVar5 = 0;
  do {
    iVar4 = iVar5 * 0x18;
    iVar1 = iVar4 - iVar3;
    iVar2 = iVar4;
    while (iVar1 != 0) {
      *(undefined2 *)((int)&DAT_0019e97b + iVar2) = 0;
      iVar1 = (iVar2 + 2) - iVar3;
      iVar2 = iVar2 + 2;
    }
    *(undefined1 *)((int)&DAT_0019e977 + iVar4 + 3) = 0;
    iVar5 = iVar5 + 1;
    *(undefined2 *)((int)&DAT_0019e977 + iVar4 + 1) = 1;
    FUN_00015318();
    iVar3 = extraout_ECX;
  } while (iVar5 < 0x7ff);
  FUN_000ac630();
  FUN_00072810();
  return;
}

/******************************************************************************
 * Function : sub_0b2158 (Ghidra: FUN_000b2158)
 * Prototype: undefined8 sub_0b2158(void);
 * Address  : 0xb2158 (Size: 151 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb20e0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b2158(void)

{
  uint *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  
  (&DAT_001e3203)[in_EAX] = 0x2000;
  puVar1 = (uint *)((int)&DAT_00279203 + in_EAX * 5 + 1);
  *puVar1 = *puVar1 & 0xf000000;
  *(undefined1 *)((int)&DAT_00279203 + in_EAX * 5) = 0;
  iVar2 = in_EAX / 0x100;
  if ((in_EAX % 0x100 < 0xff) &&
     (iVar2 = (int)((in_EAX + (in_EAX >> 0x1f) * -0x100) - (uint)((in_EAX >> 0x1f) << 7 < 0)) >> 8,
     iVar2 < 0xff)) {
    iVar2 = (&DAT_0019033b)[in_EAX % 0x100] + (&DAT_0019033b)[iVar2] * 0x55;
    (&DAT_002d33c8)[iVar2 * 6] = 0;
    (&DAT_002d33c9)[iVar2 * 6] = 0;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0b21f0 (Ghidra: FUN_000b21f0)
 * Prototype: void sub_0b21f0(void);
 * Address  : 0xb21f0 (Size: 89 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x29bfe, 0x2cb2b
 * Callees  : 1 -> 0x15318
 ******************************************************************************/
void FUN_000b21f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int iVar5;
  
  iVar3 = 0x10;
  iVar5 = 0;
  do {
    iVar4 = iVar5 * 0x18;
    iVar1 = iVar4 - iVar3;
    iVar2 = iVar4;
    while (iVar1 != 0) {
      *(undefined2 *)((int)&DAT_0019e97b + iVar2) = 0;
      iVar1 = (iVar2 + 2) - iVar3;
      iVar2 = iVar2 + 2;
    }
    *(undefined1 *)((int)&DAT_0019e977 + iVar4 + 3) = 0;
    iVar5 = iVar5 + 1;
    *(undefined2 *)((int)&DAT_0019e977 + iVar4 + 1) = 1;
    FUN_00015318();
    iVar3 = extraout_ECX;
  } while (iVar5 < 0x7ff);
  return;
}

/******************************************************************************
 * Function : sub_0b224c (Ghidra: FUN_000b224c)
 * Prototype: void sub_0b224c(void);
 * Address  : 0xb224c (Size: 52 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x29800
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b224c(void)

{
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar2;
  
  iVar3 = 0xc;
  iVar4 = 0;
  do {
    iVar2 = iVar4 * 0x12;
    do {
      iVar1 = iVar2 + 2;
      *(undefined2 *)((int)&DAT_001aa973 + iVar2) = 0;
      iVar2 = iVar1;
    } while (iVar1 != iVar3);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x12;
  } while (iVar4 < 0x200);
  return;
}

/******************************************************************************
 * Function : sub_0b2280 (Ghidra: FUN_000b2280)
 * Prototype: void sub_0b2280(void);
 * Address  : 0xb2280 (Size: 95 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2a25c, 0x401ec
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_000b2280(void)

{
  int iVar1;
  uint extraout_ECX;
  uint uVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = 2;
  FUN_000e6a10();
  uVar2 = extraout_ECX;
  do {
    sVar3 = 1;
    iVar1 = 0x12;
    do {
      if (*(ushort *)((int)&DAT_001aa97b + iVar1) == uVar2) {
        *(short *)(&DAT_002e8c11 + iVar4) = sVar3;
        break;
      }
      iVar1 = iVar1 + 0x12;
      sVar3 = sVar3 + 1;
    } while (iVar1 < 0x2400);
    uVar2 = uVar2 + 1;
    iVar4 = iVar4 + 2;
    if (0x24f < (int)uVar2) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0b2398 (Ghidra: FUN_000b2398)
 * Prototype: uint sub_0b2398(void);
 * Address  : 0xb2398 (Size: 82 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 15 -> 0x28bae, 0x63dd3, 0x6ca16, 0x6d4df, 0x73607, 0x739b9, 0xb45b4, 0xb5264, 0xc6be0, 0xcdcd0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000b2398(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar2 = (*(uint *)((int)&DAT_00279203 + (in_EDX * 0x100 + in_EAX) * 5 + 1) & 0x7ff) * 0x18;
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar2 + 2);
  if ((bVar1 & 0xf0) != 0) {
    return *(int *)((int)&DAT_0019e977 + (uint)(bVar1 >> 4) * 2 + iVar2) >> 0x10;
  }
  return (uint)*(ushort *)(&DAT_002e8c11 + (*(int *)((int)&DAT_0019e973 + iVar2 + 3) >> 0x10) * 2);
}

/******************************************************************************
 * Function : sub_0b23ec (Ghidra: FUN_000b23ec)
 * Prototype: undefined8 sub_0b23ec(void);
 * Address  : 0xb23ec (Size: 80 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe0b1c, 0xe45c0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b23ec(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  
  iVar2 = (*(uint *)((int)&DAT_00279203 + in_EAX * 5 + 1) & 0x7ff) * 0x18;
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar2 + 2);
  if ((bVar1 & 0xf0) != 0) {
    return CONCAT44(in_EDX,*(int *)((int)&DAT_0019e977 + (uint)(bVar1 >> 4) * 2 + iVar2) >> 0x10);
  }
  return CONCAT44(in_EDX,(uint)*(ushort *)
                                (&DAT_002e8c11 +
                                (*(int *)((int)&DAT_0019e973 + iVar2 + 3) >> 0x10) * 2));
}

/******************************************************************************
 * Function : sub_0b2440 (Ghidra: FUN_000b2440)
 * Prototype: undefined8 sub_0b2440(void);
 * Address  : 0xb2440 (Size: 39 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x640f7, 0x68788, 0xdf760
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b2440(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,((*(uint *)((int)&DAT_00279203 +
                                    ((uint)*(byte *)(in_EAX + 3) * 0x100 +
                                    (uint)*(byte *)(in_EAX + 1)) * 5 + 1) & 0xfffffff) >> 0x18) << 8
                 );
}

/******************************************************************************
 * Function : sub_0b250c (Ghidra: FUN_000b250c)
 * Prototype: int sub_0b250c(void);
 * Address  : 0xb250c (Size: 986 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2606f
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000b250c(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort *in_EDX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_5c;
  uint local_58;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2);
  }
  else {
    uVar2 = *(ushort *)(in_EAX + 0x56);
  }
  uVar5 = uVar2 / 2;
  uVar8 = *in_EDX - uVar5;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  uVar9 = in_EDX[1] - uVar5;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  uVar12 = *in_EDX + uVar5;
  if (0xffff < uVar12) {
    uVar12 = 0xffff;
  }
  uVar5 = uVar5 + in_EDX[1];
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  local_5c = 0;
  local_58 = 0xf;
  uVar3 = local_58;
  for (uVar10 = uVar9; uVar4 = uVar8, uVar10 < uVar5; uVar10 = uVar10 + 0x100) {
    for (; uVar4 < uVar12; uVar4 = uVar4 + 0x100) {
      iVar6 = ((uVar10 >> 8 & 0xff) * 0x100 + (uVar4 >> 8 & 0xff)) * 5;
      iVar11 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x7ff) * 0x18;
      uVar7 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
      if (uVar7 <= local_5c) {
        uVar7 = local_5c;
      }
      bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
      if ((bVar1 & 0xe) == 0) {
        local_58 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0xfffffff) >> 0x18;
        if (uVar3 <= local_58) {
          local_58 = uVar3;
        }
      }
      else {
        local_58 = 8 - ((bVar1 & 0xf) >> 1);
        if (uVar3 < local_58) {
          local_58 = uVar3;
        }
      }
      local_5c = uVar7;
      uVar3 = local_58;
    }
  }
  for (; uVar9 < uVar5; uVar9 = uVar9 + 0x100) {
    iVar6 = ((uVar9 >> 8 & 0xff) * 0x100 + (uVar12 >> 8 & 0xff)) * 5;
    iVar11 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x7ff) * 0x18;
    uVar10 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
    if (uVar10 <= local_5c) {
      uVar10 = local_5c;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_58 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0xfffffff) >> 0x18;
      if (uVar3 <= local_58) {
        local_58 = uVar3;
      }
    }
    else {
      local_58 = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar3 < local_58) {
        local_58 = uVar3;
      }
    }
    local_5c = uVar10;
    uVar3 = local_58;
  }
  for (; uVar8 < uVar12; uVar8 = uVar8 + 0x100) {
    iVar6 = ((uVar8 >> 8 & 0xff) + (uVar5 >> 8 & 0xff) * 0x100) * 5;
    iVar11 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x7ff) * 0x18;
    uVar9 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
    if (uVar9 <= local_5c) {
      uVar9 = local_5c;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_58 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0xfffffff) >> 0x18;
      if (uVar3 <= local_58) {
        local_58 = uVar3;
      }
    }
    else {
      local_58 = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar3 < local_58) {
        local_58 = uVar3;
      }
    }
    local_5c = uVar9;
    uVar3 = local_58;
  }
  iVar6 = ((uVar12 >> 8 & 0xff) + (uVar5 >> 8 & 0xff) * 0x100) * 5;
  iVar11 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x7ff) * 0x18;
  uVar8 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
  if (uVar8 <= local_5c) {
    uVar8 = local_5c;
  }
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
  if ((bVar1 & 0xe) == 0) {
    uVar5 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0xfffffff) >> 0x18;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = 8 - ((bVar1 & 0xf) >> 1);
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
  }
  if (((uint)(*(int *)(in_EDX + 1) >> 0x10) < uVar8 << 8) ||
     (uVar5 * 0x100 - (uint)*(ushort *)(in_EAX + 0x58) <= uVar8 << 8)) {
    iVar6 = *(int *)(in_EDX + 1) >> 0x10;
  }
  else {
    iVar6 = (uVar5 * 0x100 + -1) - (uint)*(ushort *)(in_EAX + 0x58);
  }
  return iVar6;
}

