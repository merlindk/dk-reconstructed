/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: dungeon.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0235e8 (Ghidra: FUN_000235e8)
 * Prototype: void sub_0235e8(void);
 * Address  : 0x235e8 (Size: 197 bytes)
 * Module   : dungeon.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 4 -> 0x23868, 0x4e4ad, 0x4eb02, 0x4f121
 ******************************************************************************/
void FUN_000235e8(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *extraout_ECX_01;
  undefined2 *extraout_ECX_02;
  int iVar3;
  int iVar4;
  
  puVar2 = &DAT_002e0589;
  iVar3 = 0;
  iVar4 = 0;
  do {
    if (((&DAT_0019d0c8)[iVar4] & 1) != 0) {
      if (*(int *)(puVar2 + 0x442) != 0) {
        FUN_0004eb02();
        puVar2 = extraout_ECX;
      }
      if (*(int *)(puVar2 + 0x446) != 0) {
        FUN_0004f121();
        puVar2 = extraout_ECX_00;
      }
      if ((*(int *)(puVar2 + 0x444) != 0) &&
         ((int)(DAT_002e8bee - *(int *)(puVar2 + 0x444)) % DAT_002eaf19 == 0)) {
        iVar1 = FUN_00023868();
        puVar2 = extraout_ECX_01;
        if (iVar1 < 0) {
          FUN_0004e4ad();
          puVar2 = extraout_ECX_02;
        }
      }
      if ((DAT_002ed402 != 0) && (DAT_002ed406 < DAT_002e8bee)) {
        DAT_002ed402 = 0;
        DAT_002ed406 = 0;
      }
    }
    iVar4 = iVar4 + 0x4ef;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xa84;
  } while (iVar3 < 5);
  return;
}

/******************************************************************************
 * Function : sub_0236ad (Ghidra: FUN_000236ad)
 * Prototype: void sub_0236ad(void);
 * Address  : 0x236ad (Size: 110 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000236ad(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_002eb54c = 0;
  _DAT_002eb550 = 0;
  _DAT_002eb54a = 0;
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (((&DAT_0019d0c8)[iVar2] & 1) != 0) {
      _DAT_002eb54c = _DAT_002eb54c + *(int *)((int)&DAT_002e1082 + iVar1);
      _DAT_002eb550 = _DAT_002eb550 + (ushort)(byte)(&DAT_002e0ea1)[iVar1];
      _DAT_002eb54a = _DAT_002eb54a + (ushort)(byte)(&DAT_002e0ea2)[iVar1];
    }
    iVar1 = iVar1 + 0x1508;
    iVar2 = iVar2 + 0x4ef;
  } while (iVar1 != 0x6928);
  return;
}

/******************************************************************************
 * Function : sub_02371b (Ghidra: FUN_0002371b)
 * Prototype: void sub_02371b(void);
 * Address  : 0x2371b (Size: 25 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x237c6, 0x4a40c, 0xc9040
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002371b(void)

{
  byte in_AL;
  short in_DX;
  
  if (in_AL != DAT_002eb543) {
    (&DAT_002e0ec6)[(uint)in_AL * 0xa84] = (&DAT_002e0ec6)[(uint)in_AL * 0xa84] + in_DX;
  }
  return;
}

/******************************************************************************
 * Function : sub_023734 (Ghidra: FUN_00023734)
 * Prototype: void sub_023734(void);
 * Address  : 0x23734 (Size: 32 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x237c6, 0xcae40, 0xd08a8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00023734(void)

{
  byte in_AL;
  short in_DX;
  
  if (in_AL != DAT_002eb543) {
    (&DAT_002e0ed2)[(uint)in_AL * 0xa84] = (&DAT_002e0ed2)[(uint)in_AL * 0xa84] + in_DX;
    (&DAT_002e0ec6)[(uint)in_AL * 0xa84] = (&DAT_002e0ec6)[(uint)in_AL * 0xa84] + in_DX;
  }
  return;
}

/******************************************************************************
 * Function : sub_023754 (Ghidra: FUN_00023754)
 * Prototype: void sub_023754(void);
 * Address  : 0x23754 (Size: 51 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x23787, 0x4a6a2, 0xc4b0c, 0xcae40
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00023754(void)

{
  byte in_AL;
  uint uVar1;
  int in_EDX;
  
  if (in_AL != DAT_002eb543) {
    uVar1 = (uint)in_AL;
    if (-1 < (int)((uint)(ushort)(&DAT_002e0ec6)[uVar1 * 0xa84] - in_EDX)) {
      (&DAT_002e0ec6)[uVar1 * 0xa84] = (&DAT_002e0ec6)[uVar1 * 0xa84] - (short)in_EDX;
      return;
    }
    (&DAT_002e0ec6)[uVar1 * 0xa84] = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_023787 (Ghidra: FUN_00023787)
 * Prototype: void sub_023787(void);
 * Address  : 0x23787 (Size: 63 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xc8654, 0xc8d10, 0xd08a8
 * Callees  : 1 -> 0x23754
 ******************************************************************************/
void FUN_00023787(void)

{
  byte in_AL;
  uint uVar1;
  int in_EDX;
  
  if (in_AL != DAT_002eb543) {
    uVar1 = (uint)in_AL;
    if ((int)((uint)(ushort)(&DAT_002e0ed2)[uVar1 * 0xa84] - in_EDX) < 0) {
      (&DAT_002e0ed2)[uVar1 * 0xa84] = 0;
    }
    else {
      (&DAT_002e0ed2)[uVar1 * 0xa84] = (&DAT_002e0ed2)[uVar1 * 0xa84] - (short)in_EDX;
    }
    FUN_00023754();
  }
  return;
}

/******************************************************************************
 * Function : sub_0237c6 (Ghidra: FUN_000237c6)
 * Prototype: undefined8 sub_0237c6(void);
 * Address  : 0x237c6 (Size: 162 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x40832
 * Callees  : 2 -> 0x2371b, 0x23734
 ******************************************************************************/
undefined8 FUN_000237c6(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 0x1508;
    *(undefined2 *)((int)&DAT_002e0ec6 + iVar3) = 0;
    *(undefined2 *)((int)&DAT_002e0ed2 + iVar3) = 0;
    iVar3 = iVar1;
  } while (iVar1 != 0x6928);
  iVar1 = 0;
  iVar3 = 0;
  do {
    uVar2 = (uint)((&DAT_002d33ca)[((iVar1 / 0x55) * 0x55 + iVar1 % 0x55) * 6] & 7);
    if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[iVar3] * 0x16] == '\x04') {
      uVar2 = FUN_00023734();
      iVar3 = extraout_ECX_00;
    }
    else if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[iVar3] * 0x16] == '\x02') {
      uVar2 = FUN_0002371b();
      iVar3 = extraout_ECX;
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 6;
  } while (iVar1 < 0x1c39);
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_remove_reserve_023868 (Ghidra: FUN_00023868)
 * Prototype: int dk_remove_reserve_023868(void);
 * Address  : 0x23868 (Size: 390 bytes)
 * Module   : dungeon.cpp [direct_file_string_xref]
 * OrigLine : dungeon.cpp:625
 * Naming   : String 'Cannot remove %d: Reserve %d'
 * Callers  : 11 -> 0x235e8, 0x28904, 0x48c77, 0x4e1f2, 0x4e66f, 0x4eb02, 0x4ee2c, 0x4fd30, 0x5f6c5, 0x67920 ...
 * Callees  : 5 -> 0x5102d, 0x5131e, 0x51374, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x162629: "dungeon.cpp"
 *   - 0x16260c: "Cannot remove %d: Reserve %d"
 ******************************************************************************/
int FUN_00023868(void)

{
  ushort uVar1;
  int iVar2;
  ushort in_AX;
  int iVar3;
  int iVar4;
  undefined2 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *puVar5;
  int in_EDX;
  char unaff_BL;
  int iVar6;
  
  iVar3 = (int)(short)in_AX;
  puVar5 = &DAT_002e0589 + iVar3 * 0xa84;
  iVar2 = (&DAT_002e1082)[iVar3 * 0x542];
  if (in_EDX == 0) {
    return 0;
  }
  if ((in_EDX <= iVar2) || (in_EDX = iVar2, unaff_BL == '\0')) {
    iVar6 = in_EDX;
    if ((&DAT_002e1086)[iVar3 * 0x542] != 0) {
      if (in_EDX <= (int)(&DAT_002e1086)[iVar3 * 0x542]) {
        (&DAT_002e1086)[iVar3 * 0x542] = (&DAT_002e1086)[iVar3 * 0x542] - in_EDX;
        (&DAT_002e1082)[iVar3 * 0x542] = (&DAT_002e1082)[iVar3 * 0x542] - in_EDX;
        return in_EDX;
      }
      iVar4 = (&DAT_002e1086)[iVar3 * 0x542];
      iVar6 = in_EDX - (&DAT_002e1086)[iVar3 * 0x542];
      (&DAT_002e1086)[iVar3 * 0x542] = 0;
      (&DAT_002e1082)[iVar3 * 0x542] = (&DAT_002e1082)[iVar3 * 0x542] - iVar4;
    }
    uVar1 = (&DAT_002e0598)[iVar3 * 0xa84];
    while (iVar3 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar3) {
      if (*(int *)(&DAT_002ddd32 + iVar3) != 0) {
        for (uVar1 = *(ushort *)(&DAT_002ddd52 + iVar3); uVar1 != 0;
            uVar1 = *(ushort *)(&DAT_002d33c6 + (uint)uVar1 * 6)) {
          iVar4 = FUN_0005131e();
          puVar5 = extraout_ECX;
          if (iVar4 != 0) {
            iVar4 = FUN_0005102d();
            iVar6 = iVar6 - iVar4;
            puVar5 = extraout_ECX_00;
          }
          if (iVar6 < 1) {
            if (((in_AX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) && (999 < iVar2)) &&
               (iVar2 - in_EDX < 1000)) {
              FUN_00051374();
            }
            return in_EDX;
          }
        }
      }
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar3);
    }
    FUN_000e7714(&DAT_0019cbac,s_Cannot_remove__d__Reserve__d_0016260c,in_EDX,
                 *(undefined4 *)((int)puVar5 + 0xafd));
    FUN_000ddaf0(); /* LbErrorLog("dungeon.cpp", line 625, g_log_buf) */
  }
  return -1;
}

/******************************************************************************
 * Function : dk_attempt_get_random_position_0239ee (Ghidra: FUN_000239ee)
 * Prototype: undefined4 dk_attempt_get_random_position_0239ee(void);
 * Address  : 0x239ee (Size: 90 bytes)
 * Module   : dungeon.cpp [direct_file_string_xref]
 * OrigLine : dungeon.cpp:634 ("Attempt to get random position in neutral dungeon")
 * Naming   : String 'Attempt to get random position in neutral dungeon'
 * Callers  : 10 -> 0x1107a, 0x11d65, 0x2796f, 0x28d85, 0x28eb4, 0x29423, 0x38989, 0x6992a, 0x69987, 0xac094
 * Callees  : 2 -> 0xddaf0, 0xe6348
 * Strings  :
 *   - 0x162667: "dungeon.cpp"
 *   - 0x162635: "Attempt to get random position in neutral dungeon"
 ******************************************************************************/
undefined4 FUN_000239ee(void)

{
  uint in_EAX;
  int iVar1;
  
  if (in_EAX == DAT_002eb543) {
    FUN_000ddaf0(); /* LbErrorLog("dungeon.cpp", line 634, "Attempt to get random position in neutral dungeon") */
    return 0;
  }
  iVar1 = FUN_000e6348();
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_023a48 (Ghidra: FUN_00023a48)
 * Prototype: void sub_023a48(void);
 * Address  : 0x23a48 (Size: 136 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x38989, 0x69987
 * Callees  : 1 -> 0x23476
 ******************************************************************************/
void FUN_00023a48(void)

{
  int in_EAX;
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  byte local_20;
  byte bVar5;
  
  iVar4 = -0x80000000;
  bVar5 = 0xff;
  puVar2 = &DAT_002e0589;
  for (local_20 = 0; uVar1 = (uint)local_20, uVar1 < 5; local_20 = local_20 + 1) {
    if ((((&DAT_0019d0c8)[uVar1 * 0x4ef] & 1) != 0) && (uVar1 != (int)*(char *)(in_EAX + 6))) {
      iVar3 = *(int *)((int)puVar2 + 0xaed) -
              (int)((uint)*(byte *)((int)puVar2 + 0xf7d) * *(int *)((int)puVar2 + 0xaed) * 0x14) /
              100;
      if (0 < iVar3) {
        iVar3 = 0;
      }
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
        bVar5 = local_20;
      }
    }
    puVar2 = puVar2 + 0xa84;
  }
  FUN_00023476(bVar5);
  return;
}

/******************************************************************************
 * Function : sub_023ad0 (Ghidra: FUN_00023ad0)
 * Prototype: void sub_023ad0(void);
 * Address  : 0x23ad0 (Size: 786 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x40a20, 0x40ba7
 * Callees  : 4 -> 0x23de2, 0x63122, 0x82828, 0xe6a10
 ******************************************************************************/
void FUN_00023ad0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte in_AL;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  byte *pbVar8;
  int extraout_ECX;
  char cVar9;
  short in_DX;
  int iVar10;
  char cVar11;
  short unaff_BX;
  int iVar12;
  uint uVar13;
  int local_54;
  char *local_50;
  uint local_4c;
  int local_40;
  uint local_3c;
  byte *local_38;
  int local_34;
  int local_28;
  
  iVar4 = DAT_00199228;
  local_28 = 0;
  local_54 = 0;
  pcVar1 = (char *)(DAT_00199228 + 0x1c39);
  local_34 = 0;
  FUN_000e6a10();
  do {
    iVar10 = 0;
    puVar5 = (undefined1 *)(local_28 * 0x55 + iVar4);
    iVar12 = local_54;
    do {
      if (((*(uint *)(&DAT_001921c6 + (uint)(byte)(&DAT_002d33c5)[iVar12] * 0x16) & 0x29) != 0) ||
         (((*(uint *)(&DAT_001921c6 + (uint)(byte)(&DAT_002d33c5)[iVar12] * 0x16) & 0x40) != 0 &&
          (((&DAT_002d33ca)
            [(*(int *)((int)&DAT_0019033f + iVar10) + *(int *)((int)&DAT_0019033f + local_34) * 0x55
             ) * 6] & 7) != in_AL)))) {
        *puVar5 = 1;
      }
      puVar5 = puVar5 + 1;
      iVar10 = iVar10 + 0xc;
      iVar12 = iVar12 + 6;
    } while (iVar10 != 0x3fc);
    local_54 = local_54 + 0x1fe;
    local_28 = local_28 + 1;
    local_34 = local_34 + 0xc;
  } while (local_28 < 0x55);
  iVar12 = 0;
  puVar6 = &DAT_00279203;
  do {
    uVar13 = *(uint *)((int)puVar6 + 1);
    iVar12 = iVar12 + 1;
    *(uint *)((int)puVar6 + 1) = uVar13 & 0xfffffff;
    *(uint *)((int)puVar6 + 1) =
         *(uint *)((int)puVar6 + 1) | (uVar13 >> 0x1c & ~(1 << (in_AL & 0x1f))) << 0x1c;
    puVar6 = (undefined2 *)((int)puVar6 + 5);
  } while (iVar12 < 0x10000);
  iVar12 = (int)in_DX / 3;
  iVar10 = (int)unaff_BX / 3;
  local_3c = 0;
  pbVar8 = (byte *)(iVar4 + iVar10 * 0x55 + iVar12);
  *pbVar8 = *pbVar8 | 2;
  uVar13 = 0;
  local_50 = pcVar1;
  do {
    iVar7 = iVar10 * 0x55 + iVar12 + iVar4;
    local_4c = 0;
    cVar11 = (char)iVar12;
    cVar9 = (char)iVar10;
    if ((*(byte *)(iVar7 + -1) & 1) == 0) {
      if ((*(byte *)(iVar7 + -1) & 2) == 0) {
        *(byte *)(iVar7 + -1) = *(byte *)(iVar7 + -1) | 2;
        iVar7 = uVar13 * 2;
        pcVar1[iVar7] = cVar11 + -1;
        uVar13 = uVar13 + 1;
        (pcVar1 + iVar7)[1] = cVar9;
      }
    }
    else {
      local_4c = 8;
      *(byte *)(iVar7 + -1) = *(byte *)(iVar7 + -1) | 2;
    }
    iVar7 = iVar10 * 0x55 + iVar12 + iVar4;
    if ((*(byte *)(iVar7 + 1) & 1) == 0) {
      if ((*(byte *)(iVar7 + 1) & 2) == 0) {
        *(byte *)(iVar7 + 1) = *(byte *)(iVar7 + 1) | 2;
        iVar7 = uVar13 * 2;
        pcVar1[iVar7] = cVar11 + '\x01';
        uVar13 = uVar13 + 1;
        (pcVar1 + iVar7)[1] = cVar9;
      }
    }
    else {
      local_4c = local_4c | 2;
      *(byte *)(iVar7 + 1) = *(byte *)(iVar7 + 1) | 2;
    }
    pbVar8 = (byte *)((iVar10 + -1) * 0x55 + iVar12 + iVar4);
    if ((*pbVar8 & 1) == 0) {
      if ((*pbVar8 & 2) == 0) {
        *pbVar8 = *pbVar8 | 2;
        iVar7 = uVar13 * 2;
        pcVar1[iVar7] = cVar11;
        uVar13 = uVar13 + 1;
        (pcVar1 + iVar7)[1] = cVar9 + -1;
      }
    }
    else {
      local_4c = local_4c | 1;
      *pbVar8 = *pbVar8 | 2;
    }
    pbVar8 = (byte *)((iVar10 + 1) * 0x55 + iVar12 + iVar4);
    if ((*pbVar8 & 1) == 0) {
      if ((*pbVar8 & 2) == 0) {
        *pbVar8 = *pbVar8 | 2;
        iVar7 = uVar13 * 2;
        pcVar1[iVar7] = cVar11;
        uVar13 = uVar13 + 1;
        (pcVar1 + iVar7)[1] = cVar9 + '\x01';
      }
    }
    else {
      local_4c = local_4c | 4;
      *pbVar8 = *pbVar8 | 2;
    }
    iVar7 = iVar4 + (iVar10 + -1) * 0x55 + iVar12;
    iVar2 = iVar4 + (iVar10 + 1) * 0x55 + iVar12;
    while( true ) {
      if (*(int *)(&DAT_00179c1c + local_4c * 5) == 0) break;
      if (local_4c == 0xf) {
        pbVar8 = (byte *)(iVar7 + 1);
        *pbVar8 = *pbVar8 | 2;
        pbVar8 = (byte *)(iVar2 + 1);
        *pbVar8 = *pbVar8 | 2;
        pbVar8 = (byte *)(iVar2 + -1);
        *pbVar8 = *pbVar8 | 2;
        local_4c = 0;
        pbVar8 = (byte *)(iVar7 + -1);
        *pbVar8 = *pbVar8 | 2;
      }
      else {
        iVar3 = *(int *)(&DAT_00179c1c + local_4c * 5) * 2;
        pbVar8 = (byte *)(iVar4 + (char)(&DAT_00179c6c)[iVar3] + iVar12 +
                                  ((char)(&DAT_00179c6d)[iVar3] + iVar10) * 0x55);
        *pbVar8 = *pbVar8 | 2;
        local_4c = local_4c & (int)(char)(&DAT_00179c20)[local_4c * 5];
      }
    }
    local_3c = local_3c + 1;
    iVar12 = (int)*local_50;
    iVar10 = (int)local_50[1];
    local_50 = local_50 + 2;
  } while (local_3c <= uVar13);
  iVar12 = 0;
  local_40 = 0;
  do {
    local_38 = (byte *)(local_40 + iVar4);
    iVar10 = 0;
    do {
      if ((*local_38 & 2) != 0) {
        FUN_00023de2();
        FUN_00082828();
        iVar10 = extraout_ECX;
      }
      iVar10 = iVar10 + 1;
      local_38 = local_38 + 1;
    } while (iVar10 < 0x55);
    iVar12 = iVar12 + 1;
    local_40 = local_40 + 0x55;
  } while (iVar12 < 0x55);
  FUN_00063122();
  return;
}

/******************************************************************************
 * Function : sub_023de2 (Ghidra: FUN_00023de2)
 * Prototype: void sub_023de2(void);
 * Address  : 0x23de2 (Size: 131 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x23ad0, 0x4f63e, 0x70c0c, 0x74038, 0x82c30, 0x82cac
 * Callees  : 1 -> 0x1495c
 ******************************************************************************/
void FUN_00023de2(void)

{
  int in_EAX;
  int in_EDX;
  byte unaff_BL;
  
  if (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(in_EDX * 0x55 + in_EAX) * 6] * 0x16] & 0x29) ==
      0) {
    if ((*(uint *)((int)&DAT_00279203 + (in_EDX * 0x300 + in_EAX * 3) * 5 + 1) >> 0x1c &
        1 << (unaff_BL & 0x1f)) != 0) {
      return;
    }
  }
  else {
    if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(in_EDX * 0x55 + in_EAX) * 6] * 0x16] != '\x03')
    {
      return;
    }
    if (((&DAT_002d33ca)[((&DAT_0019033b)[in_EAX * 3] + (&DAT_0019033b)[in_EDX * 3] * 0x55) * 6] & 7
        ) == unaff_BL) {
      return;
    }
  }
  FUN_0001495c();
  return;
}

/******************************************************************************
 * Function : sub_023e65 (Ghidra: FUN_00023e65)
 * Prototype: undefined1 sub_023e65(void);
 * Address  : 0x23e65 (Size: 105 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4f195, 0x5003d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_00023e65(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  uint unaff_EBX;
  int iVar3;
  
  iVar1 = (unaff_EBX & 0xff) * 0x1508;
  if (*(short *)(&DAT_002e0b61 + iVar1) != 0) {
    iVar3 = in_EAX - (*(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + iVar1)] + 0xe) - 0xd);
    iVar2 = in_EDX - (*(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + iVar1)] + 0x10) - 0xd);
    if ((((-1 < iVar3) && (iVar3 < 0x1a)) && (-1 < iVar2)) && (iVar2 < 0x1a)) {
      return *(undefined1 *)(iVar3 + iVar1 + 0x2e0b66 + iVar2 * 0x1a);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_023ece (Ghidra: FUN_00023ece)
 * Prototype: void sub_023ece(void);
 * Address  : 0x23ece (Size: 1142 bytes)
 * Module   : dungeon.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00023ece(void)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_8c;
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  int local_70;
  int local_54;
  int local_48;
  int local_44;
  undefined2 *local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar2 = *(byte *)(in_EAX + 0x2b);
  iVar5 = (uint)bVar2 * 0x1508;
  if (*(short *)(&DAT_002e0b61 + iVar5) != 0) {
    iVar3 = (&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + iVar5)];
    FUN_000e6a10();
    local_1c = *(byte *)(iVar3 + 0x10) - 0xd;
    local_2c = 0;
    do {
      iVar8 = local_2c * 0x1a;
      local_24 = *(byte *)(iVar3 + 0xe) - 0xd;
      local_40 = &DAT_002e0589 + (uint)bVar2 * 0xa84 + local_2c * 0xd;
      iVar6 = local_24 * 5 + local_1c * 0x500;
      iVar9 = iVar8 + 0x1a;
      do {
        if ((((*(char *)((int)local_40 + 0x5dd) != '\0') && (-1 < local_24)) && (local_24 < 0xff))
           && ((-1 < local_1c && (local_1c < 0xff)))) {
          uVar10 = 1 << (*(byte *)(in_EAX + 0x2b) & 0x1f);
          (&DAT_00334078)[iVar8] =
               uVar10 == (*(uint *)((int)&DAT_00279203 + iVar6 + 1) >> 0x1c & uVar10);
          if ((*(byte *)((int)&DAT_00279203 + iVar6) & 4) == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 2;
          }
          (&DAT_00334078)[iVar8] = (&DAT_00334078)[iVar8] | bVar4;
          if ((*(byte *)((int)&DAT_00279203 + iVar6) & 0x80) == 0) {
            bVar4 = 0;
          }
          else {
            bVar4 = 4;
          }
          (&DAT_00334078)[iVar8] = (&DAT_00334078)[iVar8] | bVar4;
        }
        local_40 = (undefined2 *)((int)local_40 + 1);
        local_24 = local_24 + 1;
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 5;
      } while (iVar8 != iVar9);
      local_2c = local_2c + 1;
      local_1c = local_1c + 1;
    } while (local_2c < 0x1a);
    local_54 = *(byte *)(iVar3 + 0x10) - 0xd;
    local_48 = local_54 * 0x500;
    local_3c = local_54 * 4;
    local_8c = 0;
    do {
      if ((-1 < local_54) && (local_54 < 0x101)) {
        local_28 = 0;
        iVar8 = *(byte *)(iVar3 + 0xe) - 0xd;
        iVar6 = local_8c * 0x1a + iVar5;
        for (; local_28 < 0xe; local_28 = local_28 + 1) {
          if (*(char *)((int)&DAT_002e0589 + local_28 + iVar6 + 0x5dd) != '\0') {
            local_28 = local_28 + 1;
            local_84 = 1;
            iVar9 = 0;
            iVar7 = (int)&DAT_002e0589 + local_28 + iVar6;
            for (; local_28 < 0x1a; local_28 = local_28 + 1) {
              if (*(char *)(iVar7 + 0x5dd) != '\0') {
                iVar9 = local_84;
              }
              local_84 = local_84 + 1;
              iVar7 = iVar7 + 1;
            }
            iVar9 = iVar9 + iVar8;
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (0xfe < iVar8) {
              iVar8 = 0xfe;
            }
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xfe < iVar9) {
              iVar9 = 0xfe;
            }
            iVar7 = iVar8 * 5 + local_48;
            for (local_34 = iVar8 << 2; local_34 <= iVar9 << 2; local_34 = local_34 + 4) {
              uVar10 = *(uint *)((int)&DAT_00279203 + iVar7 + 1);
              bVar2 = *(byte *)(in_EAX + 0x2b);
              *(uint *)((int)&DAT_00279203 + iVar7 + 1) = uVar10 & 0xfffffff;
              puVar1 = (uint *)((int)&DAT_00279203 + iVar7 + 1);
              *puVar1 = *puVar1 | (uVar10 >> 0x1c | 1 << (bVar2 & 0x1f)) << 0x1c;
              if ((&DAT_001921d4)
                  [(uint)(byte)(&DAT_002d33c5)
                               [(*(int *)((int)&DAT_0019033b + local_3c) * 0x55 +
                                *(int *)((int)&DAT_0019033b + local_34)) * 6] * 0x16] == '\0') {
                *(byte *)((int)&DAT_00279203 + iVar7) = *(byte *)((int)&DAT_00279203 + iVar7) & 0x7b
                ;
              }
              iVar7 = iVar7 + 5;
              iVar8 = iVar8 + 1;
            }
          }
          iVar8 = iVar8 + 1;
        }
      }
      local_48 = local_48 + 0x500;
      local_3c = local_3c + 4;
      local_8c = local_8c + 1;
      local_54 = local_54 + 1;
    } while (local_8c < 0x1a);
    local_88 = *(byte *)(iVar3 + 0xe) - 0xd;
    local_44 = local_88 * 5;
    local_74 = local_88 * 4;
    local_20 = 0;
    do {
      if ((-1 < local_88) && (local_88 < 0x100)) {
        local_78 = 0;
        iVar6 = *(byte *)(iVar3 + 0x10) - 0xd;
        for (; local_78 < 0xe; local_78 = local_78 + 1) {
          if (*(char *)((int)&DAT_002e0589 + local_20 + local_78 * 0x1a + iVar5 + 0x5dd) != '\0') {
            local_78 = local_78 + 1;
            local_70 = 1;
            iVar8 = 0;
            iVar9 = (int)&DAT_002e0589 + local_78 * 0x1a + local_20 + iVar5;
            for (; local_78 < 0x1a; local_78 = local_78 + 1) {
              if (*(char *)(iVar9 + 0x5dd) != '\0') {
                iVar8 = local_70;
              }
              local_70 = local_70 + 1;
              iVar9 = iVar9 + 0x1a;
            }
            iVar8 = iVar8 + iVar6;
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (0xfe < iVar8) {
              iVar8 = 0xfe;
            }
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0xfe < iVar6) {
              iVar6 = 0xfe;
            }
            iVar9 = iVar6 * 0x500 + local_44;
            for (local_30 = iVar6 << 2; local_30 <= iVar8 << 2; local_30 = local_30 + 4) {
              uVar10 = *(uint *)((int)&DAT_00279203 + iVar9 + 1);
              bVar2 = *(byte *)(in_EAX + 0x2b);
              *(uint *)((int)&DAT_00279203 + iVar9 + 1) = uVar10 & 0xfffffff;
              iVar7 = *(int *)((int)&DAT_0019033b + local_30);
              puVar1 = (uint *)((int)&DAT_00279203 + iVar9 + 1);
              *puVar1 = *puVar1 | (1 << (bVar2 & 0x1f) | uVar10 >> 0x1c) << 0x1c;
              if ((&DAT_001921d4)
                  [(uint)(byte)(&DAT_002d33c5)
                               [(iVar7 * 0x55 + *(int *)((int)&DAT_0019033b + local_74)) * 6] * 0x16
                  ] == '\0') {
                *(byte *)((int)&DAT_00279203 + iVar9) = *(byte *)((int)&DAT_00279203 + iVar9) & 0x7b
                ;
              }
              iVar9 = iVar9 + 0x500;
              iVar6 = iVar6 + 1;
            }
          }
          iVar6 = iVar6 + 1;
        }
      }
      local_44 = local_44 + 5;
      local_74 = local_74 + 4;
      local_20 = local_20 + 1;
      local_88 = local_88 + 1;
    } while (local_20 < 0x1a);
  }
  return;
}

