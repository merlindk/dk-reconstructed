/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: scavenge.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 18
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_067018 (Ghidra: FUN_00067018)
 * Prototype: void sub_067018(void);
 * Address  : 0x67018 (Size: 132 bytes)
 * Module   : scavenge.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x66379, 0x67920, 0x72fbc, 0x74f40, 0x769ea
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00067018(void)

{
  return;
}

/******************************************************************************
 * Function : sub_06709c (Ghidra: FUN_0006709c)
 * Prototype: undefined4 sub_06709c(void);
 * Address  : 0x6709c (Size: 22 bytes)
 * Module   : scavenge.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x65ebd, 0x66379, 0x67920, 0x72fbc, 0x74853
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006709c(void)

{
  byte *in_EAX;
  uint in_EDX;
  
  if (((*in_EAX & 1) != 0) && (*(ushort *)(in_EAX + 10) == in_EDX)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0671e9 (Ghidra: FUN_000671e9)
 * Prototype: void sub_0671e9(void);
 * Address  : 0x671e9 (Size: 84 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16640
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_000671e9(void)

{
  FUN_000e69fc();
  FUN_000e69fc();
  FUN_000e69fc();
  return;
}

/******************************************************************************
 * Function : sub_06723d (Ghidra: FUN_0006723d)
 * Prototype: int sub_06723d(void);
 * Address  : 0x6723d (Size: 83 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x67290
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_0006723d(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar1 = *(ushort *)(&DAT_002e0594 + in_EAX * 2 + (in_EDX & 0xff) * 0x1508);
  while (iVar2 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar2) {
    iVar3 = iVar3 + (uint)*(ushort *)(&DAT_002ddd2b + iVar2);
    iVar4 = iVar4 + (uint)*(ushort *)(&DAT_002ddd29 + iVar2);
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
  }
  if (iVar4 == 0) {
    return 0;
  }
  return (iVar3 << 8) / iVar4;
}

/******************************************************************************
 * Function : sub_067290 (Ghidra: FUN_00067290)
 * Prototype: int sub_067290(void);
 * Address  : 0x67290 (Size: 228 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37f1b
 * Callees  : 2 -> 0x6723d, 0xd11f4
 ******************************************************************************/
int FUN_00067290(void)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  int iVar4;
  int unaff_EBX;
  
  if (in_EAX < 8) {
    if (in_EAX < 2) {
      if (in_EAX == 0) goto LAB_000672bd;
    }
    else {
      if (in_EAX < 3) {
        iVar2 = FUN_000d11f4();
        iVar3 = FUN_0006723d();
        iVar4 = iVar3 * iVar2 >> 0x1f;
        iVar2 = (iVar3 * iVar2 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0);
        return (int)(CONCAT44(iVar2 >> 0x1f,iVar2 >> 8) / 3);
      }
      if (6 < in_EAX) {
LAB_000672bd:
        return -(uint)(byte)(&DAT_002e0ea3)[(in_EDX & 0xff) * 0x1508 + unaff_EBX];
      }
    }
  }
  else {
    if (in_EAX < 9) {
LAB_0006732c:
      bVar1 = (&DAT_002e0ea3)[unaff_EBX + (in_EDX & 0xff) * 0x1508];
      iVar2 = FUN_000d11f4();
      return ((int)((iVar2 + (iVar2 >> 0x1f) * -4) - (uint)((iVar2 >> 0x1f) << 1 < 0)) >> 2) -
             (uint)bVar1;
    }
    if (in_EAX < 0xe) {
      if (0xc < in_EAX) goto LAB_0006732c;
    }
    else {
      if ((in_EAX < 0xf) || (in_EAX < 0x10)) goto LAB_000672bd;
      if (in_EAX != 0x10) {
        return 0;
      }
    }
  }
  bVar1 = (&DAT_002e0ea3)[unaff_EBX + (in_EDX & 0xff) * 0x1508];
  iVar2 = FUN_000d11f4();
  return iVar2 / 3 - (uint)bVar1;
}

/******************************************************************************
 * Function : sub_067374 (Ghidra: FUN_00067374)
 * Prototype: bool sub_067374(void);
 * Address  : 0x67374 (Size: 23 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x67d91
 * Callees  : 1 -> 0xce0e4
 ******************************************************************************/
bool FUN_00067374(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_000ce0e4();
  if (iVar1 != 0) {
    *(undefined1 *)(in_EAX + 8) = 0x2f;
  }
  return iVar1 != 0;
}

/******************************************************************************
 * Function : dk_could_find_valid_position_06738b (Ghidra: FUN_0006738b)
 * Prototype: undefined4 dk_could_find_valid_position_06738b(void);
 * Address  : 0x6738b (Size: 248 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp:61 ("SCAVENEGER NOT ON SCAVENGER ROOM")
 * Naming   : String 'COULD NOT FIND VALID POSITION FOR THING'
 * Callers  : 1 -> 0x67920
 * Callees  : 4 -> 0x64a5f, 0xcc968, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x166b04: "scavenge.cpp"
 *   - 0x166b32: "scavenge.cpp"
 *   - 0x166adc: "COULD NOT FIND VALID POSITION FOR THING"
 *   - 0x166b11: "SCAVENEGER NOT ON SCAVENGER ROOM"
 ******************************************************************************/
undefined4 FUN_0006738b(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  undefined8 uVar4;
  undefined1 local_1b;
  undefined1 local_19;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar4 = FUN_000d0f50();
  iVar3 = (int)uVar4;
  if (iVar3 != 0) {
    if (*(short *)(iVar3 + 10) != 9) {
      return 0;
    }
    if (*(char *)(iVar3 + 3) != *(char *)((int)((ulonglong)uVar4 >> 0x20) + 6)) {
      return 0;
    }
    cVar2 = FUN_000cc968();
    if (cVar2 != '\0') {
      (&DAT_002e0f14)[*(char *)(extraout_ECX + 6) * 0xa84] =
           (&DAT_002e0f14)[*(char *)(extraout_ECX + 6) * 0xa84] + 1;
      *(short *)(&DAT_002e0ed4 +
                (uint)*(byte *)(in_EAX + 0x1a) * 2 + *(char *)(extraout_ECX + 6) * 0x1508) =
           *(short *)(&DAT_002e0ed4 +
                     (uint)*(byte *)(in_EAX + 0x1a) * 2 + *(char *)(extraout_ECX + 6) * 0x1508) + 1;
      if ((int)*(char *)(in_EAX + 6) != (uint)DAT_002eb543) {
        (&DAT_002e0f16)[*(char *)(in_EAX + 6) * 0xa84] =
             (&DAT_002e0f16)[*(char *)(in_EAX + 6) * 0xa84] + 1;
      }
      *(undefined1 *)(iVar1 + 0x9a) = 8;
      *(undefined1 *)(iVar1 + 0x9b) = *(undefined1 *)(extraout_ECX + 6);
      *(undefined1 *)(iVar1 + 0x9d) = local_1b;
      *(undefined1 *)(iVar1 + 0x9e) = local_19;
      FUN_00064a5f();
      return 1;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("scavenge.cpp", line 61, "SCAVENEGER NOT ON SCAVENGER ROOM") */
  return 0;
}

/******************************************************************************
 * Function : dk_could_remove_creature_pool_067483 (Ghidra: FUN_00067483)
 * Prototype: longlong dk_could_remove_creature_pool_067483(void);
 * Address  : 0x67483 (Size: 250 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp:121 ("SCAVENEGER NOT ON SCAVENGER ROOM")
 * Naming   : String 'COULD REMOVE CREATURE FROM POOL'
 * Callers  : 1 -> 0x67920
 * Callees  : 6 -> 0x37ee4, 0x43bb3, 0x64ae7, 0xcc968, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x166b5f: "scavenge.cpp"
 *   - 0x166b86: "scavenge.cpp"
 *   - 0x166bb1: "scavenge.cpp"
 *   - 0x166bd3: "scavenge.cpp"
 *   - 0x166c01: "scavenge.cpp"
 *   - 0x166b3f: "COULD REMOVE CREATURE FROM POOL"
 *   - 0x166b6c: "COULD NOT CREATE CREATURE"
 *   - 0x166b93: "COULD NOT FIND VALID POSITION"
 *   - 0x166bbe: "CREATURE NOT IN POOL"
 *   - 0x166be0: "SCAVENEGER NOT ON SCAVENGER ROOM"
 ******************************************************************************/
longlong FUN_00067483(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  
  iVar2 = FUN_000d0f50();
  if ((((iVar2 != 0) && (*(short *)(iVar2 + 10) == 9)) &&
      (*(char *)(iVar2 + 3) == *(char *)(extraout_ECX + 6))) &&
     (((*(int *)(&DAT_002ed35d + (uint)*(byte *)(extraout_ECX + 0x1a) * 4) != 0 &&
       (cVar1 = FUN_000cc968(), cVar1 != '\0')) &&
      ((iVar2 = FUN_00043bb3(), iVar2 != 0 && (iVar2 = FUN_00037ee4(), iVar2 != 0)))))) {
    (&DAT_002e0f14)[*(char *)(extraout_ECX_00 + 6) * 0xa84] =
         (&DAT_002e0f14)[*(char *)(extraout_ECX_00 + 6) * 0xa84] + 1;
    FUN_00064ae7();
    return CONCAT44(in_EDX,1);
  }
  FUN_000ddaf0(); /* LbErrorLog("scavenge.cpp", line 121, "SCAVENEGER NOT ON SCAVENGER ROOM") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06757d (Ghidra: FUN_0006757d)
 * Prototype: undefined8 sub_06757d(void);
 * Address  : 0x6757d (Size: 740 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x67920
 * Callees  : 1 -> 0x85954
 ******************************************************************************/
undefined8 FUN_0006757d(void)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_EDX;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *local_20;
  uint local_1c;
  
  uVar8 = (uint)*(char *)(in_EAX + 6);
  local_20 = (byte *)0x0;
  uVar7 = (uint)*(ushort *)(uVar8 * 0x1508 + 0x2e0f98 + (uint)*(byte *)(in_EAX + 0x1a) * 2);
  local_1c = 0x7fffffff;
  uVar3 = DAT_002e6eb6;
  if (((((uVar7 != 0) && (pbVar5 = (&DAT_001ae9fc)[uVar7], (*pbVar5 & 1) != 0)) &&
       (pbVar5[0x1f] == 5)) &&
      ((pbVar5[0x1a] == *(byte *)(in_EAX + 0x1a) && (pbVar5[6] != *(byte *)(in_EAX + 6))))) &&
     (((((uVar7 = (uint)DAT_002eb543, uVar8 == uVar7 ||
         ((uVar6 = (uint)(char)pbVar5[6], uVar7 == uVar6 ||
          (((uint)(byte)(&DAT_0019d0f2)[uVar8 * 0x4ef] & 1 << (pbVar5[6] & 0x1f)) == 0)))) ||
        (uVar7 == uVar6)) ||
       ((uVar8 == uVar7 ||
        (((uint)(byte)(&DAT_0019d0f2)[uVar6 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f)) == 0))))
      && (((*pbVar5 & 0x10) == 0 && ((pbVar5[1] & 2) == 0)))))) {
    uVar9 = FUN_00085954();
    pbVar5 = (byte *)((ulonglong)uVar9 >> 0x20);
    uVar3 = DAT_002e6eb6;
    if (((int)uVar9 == 0) &&
       (((int)(char)pbVar5[6] < (int)(uint)DAT_002eb542 ||
        (*(short *)((int)&DAT_0019d0f7 + (char)pbVar5[6] * 0x4ef) != *(short *)(pbVar5 + 0x1b))))) {
      if (pbVar5[7] == 0xe) {
        bVar2 = pbVar5[8];
      }
      else {
        bVar2 = pbVar5[7];
      }
      if (bVar2 != 0x29) {
        if (pbVar5[7] == 0xe) {
          bVar2 = pbVar5[8];
        }
        else {
          bVar2 = pbVar5[7];
        }
        if (bVar2 != 0x28) {
          if (pbVar5[7] == 0xe) {
            bVar2 = pbVar5[8];
          }
          else {
            bVar2 = pbVar5[7];
          }
          if (bVar2 != 0x2b) {
            if (pbVar5[7] == 0xe) {
              bVar2 = pbVar5[8];
            }
            else {
              bVar2 = pbVar5[7];
            }
            if ((bVar2 != 0x2a) &&
               (DAT_002ed44a <
                (uint)(DAT_002e8bee - *(int *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0x3d))))
            goto LAB_0006785a;
          }
        }
      }
    }
  }
  while (pbVar1 = (&DAT_001ae9fc)[uVar3], pbVar5 = local_20, pbVar1 != DAT_001ae9fc) {
    if ((((pbVar1[0x1a] == *(byte *)(in_EAX + 0x1a)) && (pbVar1[6] != *(byte *)(in_EAX + 6))) &&
        ((*pbVar1 & 0x10) == 0)) &&
       ((((pbVar1[1] & 2) == 0 && (iVar4 = FUN_00085954(), iVar4 == 0)) &&
        (((int)(char)pbVar1[6] < (int)(uint)DAT_002eb542 ||
         (*(short *)((int)&DAT_0019d0f7 + (char)pbVar1[6] * 0x4ef) != *(short *)(pbVar1 + 0x1b))))))
       ) {
      if (pbVar1[7] == 0xe) {
        bVar2 = pbVar1[8];
      }
      else {
        bVar2 = pbVar1[7];
      }
      if (bVar2 != 0x29) {
        if (pbVar1[7] == 0xe) {
          bVar2 = pbVar1[8];
        }
        else {
          bVar2 = pbVar1[7];
        }
        if (bVar2 != 0x28) {
          if (pbVar1[7] == 0xe) {
            bVar2 = pbVar1[8];
          }
          else {
            bVar2 = pbVar1[7];
          }
          if (bVar2 != 0x2b) {
            if (pbVar1[7] == 0xe) {
              bVar2 = pbVar1[8];
            }
            else {
              bVar2 = pbVar1[7];
            }
            if (((bVar2 != 0x2a) &&
                (DAT_002ed44a <
                 (uint)(DAT_002e8bee - *(int *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x3d)))
                ) && (uVar3 = ((uint)*(ushort *)(&DAT_002e9130 + (uint)pbVar1[0x1a] * 0xe6) *
                               (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x23) *
                              0x23) / 100 +
                              (uint)*(ushort *)(&DAT_002e9130 + (uint)pbVar1[0x1a] * 0xe6),
                     uVar3 < local_1c)) {
              local_20 = pbVar1;
              local_1c = uVar3;
            }
          }
        }
      }
    }
    uVar3 = (uint)*(ushort *)(pbVar1 + 0x67);
  }
LAB_0006785a:
  return CONCAT44(in_EDX,pbVar5);
}

/******************************************************************************
 * Function : sub_067861 (Ghidra: FUN_00067861)
 * Prototype: longlong sub_067861(void);
 * Address  : 0x67861 (Size: 166 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x51374, 0x63b6d, 0x64ae7, 0x67fa9, 0xcd85c, 0xd0f50
 ******************************************************************************/
longlong FUN_00067861(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = FUN_000d0f50();
  if (((iVar3 != 0) && (*(short *)(iVar3 + 10) == 9)) &&
     (*(char *)(iVar3 + 3) == *(char *)(extraout_ECX + 6))) {
    iVar3 = FUN_00067fa9();
    if (iVar3 == 0) {
      if ((int)*(char *)(extraout_ECX_00 + 6) ==
          (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
    }
    else {
      cVar2 = FUN_000cd85c();
      if (cVar2 != '\0') {
        FUN_00064ae7();
        *(undefined4 *)(iVar1 + 0x82) = 0;
        return CONCAT44(in_EDX,1);
      }
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_067907 (Ghidra: FUN_00067907)
 * Prototype: undefined8 sub_067907(void);
 * Address  : 0x67907 (Size: 25 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x67920
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00067907(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = in_EAX;
  do {
    iVar1 = iVar2 + 1;
    *(undefined1 *)(iVar2 + 0x894) = 0;
    iVar2 = iVar1;
  } while (iVar1 != in_EAX + 0x20);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_take_money_am_supposed_067920 (Ghidra: FUN_00067920)
 * Prototype: undefined8 dk_take_money_am_supposed_067920(void);
 * Address  : 0x67920 (Size: 1137 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp:347 ("CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON")
 * Naming   : String 'CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DU'
 * Callers  : 1 -> 0x67d9f
 * Callees  : 14 -> 0x23868, 0x27390, 0x444a9, 0x51374, 0x63b6d, 0x64a5f, 0x67018, 0x6709c, 0x6738b, 0x67483 ...
 * Strings  :
 *   - 0x166c50: "scavenge.cpp"
 *   - 0x166c0e: "CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON"
 ******************************************************************************/
undefined8 FUN_00067920(void)

{
  int *piVar1;
  ushort uVar2;
  byte *pbVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  byte bVar7;
  undefined4 in_EDX;
  int extraout_EDX;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uStack_28;
  uint local_24;
  int local_20;
  undefined2 *local_1c;
  
  puVar11 = &local_24;
  puVar12 = &local_24;
  local_1c = &DAT_002e0589 + *(char *)(in_EAX + 6) * 0xa84;
  local_20 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uStack_28 = 0x67969;
  iVar5 = FUN_0006709c();
  if (iVar5 != 0) {
    uStack_28 = 0x67978;
    iVar5 = FUN_00067fa9();
    if (iVar5 != 0) {
      if (*(int *)(local_1c + 0x448) != DAT_002e8bee) {
        uStack_28 = 0x6799c;
        FUN_00067907();
        *(int *)(extraout_EDX + 0x890) = DAT_002e8bee;
      }
      uStack_28 = 0x679d5;
      FUN_00067018();
      uStack_28 = 0x679ee;
      uVar14 = FUN_0006757d();
      iVar8 = (int)((ulonglong)uVar14 >> 0x20);
      iVar5 = (int)uVar14;
      if (iVar5 == 0) {
        iVar5 = (uint)*(byte *)(in_EAX + 0x1a) * 4;
        if ((*(int *)(&DAT_002ed35d + iVar5) != 0) &&
           ((int)(uint)*(byte *)((int)local_1c + 0x919) < *(int *)(local_1c + 0x82e))) {
          piVar1 = (int *)((int)local_1c + iVar5 + 0x98f);
          *piVar1 = *piVar1 + iVar8;
          if (*(int *)((int)local_1c + (uint)*(byte *)(in_EAX + 0x1a) * 4 + 0x98f) <=
              (int)((((uint)*(ushort *)(&DAT_002e9130 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) *
                      (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) /
                     100 + (uint)*(ushort *)(&DAT_002e9130 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6))
                   * 0x100)) goto LAB_00067be4;
          uStack_28 = 0x67cf2;
          FUN_00067483();
          uVar10 = (uint)*(byte *)(in_EAX + 0x1a);
          uVar13 = (uint)*(ushort *)(&DAT_002e9130 + uVar10 * 0xe6);
          uVar9 = (uVar13 * *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) /
                  100;
LAB_00067bd3:
          piVar1 = (int *)((int)local_1c + uVar10 * 4 + 0x98f);
          *piVar1 = *piVar1 + (uVar9 + uVar13) * -0x100;
          puVar12 = puVar11;
          goto LAB_00067be4;
        }
        if ((&DAT_002e915f)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') {
          uVar6 = 0;
          *(int *)((int)local_1c + 0x1485) = *(int *)((int)local_1c + 0x1485) + 1;
          goto LAB_0006785a;
        }
      }
      else {
        if ((int)*(char *)(iVar5 + 6) == (uint)DAT_002eb543) {
LAB_00067a3d:
          uVar9 = (uint)*(byte *)(in_EAX + 0x1a);
          if (*(short *)(iVar5 + 0x1b) == *(short *)((int)local_1c + uVar9 * 2 + 0xa0f)) {
            piVar1 = (int *)((int)local_1c + uVar9 * 4 + 0x98f);
            *piVar1 = *piVar1 + iVar8;
            puVar11 = &local_24;
          }
          else {
            *(int *)((int)local_1c + uVar9 * 4 + 0x98f) = iVar8;
            if (((*(short *)((int)local_1c + (uint)*(byte *)(in_EAX + 0x1a) * 2 + 0xa0f) != 0) &&
                (pbVar3 = (byte *)(&DAT_001ae9fc)
                                  [*(ushort *)
                                    ((int)local_1c + (uint)*(byte *)(in_EAX + 0x1a) * 2 + 0xa0f)],
                (*pbVar3 & 1) != 0)) && (pbVar3[0x1a] == *(byte *)(in_EAX + 0x1a))) {
              if (pbVar3[7] == 0xe) {
                bVar7 = pbVar3[8];
              }
              else {
                bVar7 = pbVar3[7];
              }
              if (bVar7 == 0x8e) {
                uStack_28 = 0x67aba;
                FUN_00063b6d();
              }
            }
            *(undefined2 *)((int)local_1c + (uint)*(byte *)(in_EAX + 0x1a) * 2 + 0xa0f) =
                 *(undefined2 *)(iVar5 + 0x1b);
            if ((int)*(char *)(iVar5 + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]
               ) {
              uStack_28 = 0x67afe;
              FUN_00051374();
            }
            uStack_28 = (uint)*(ushort *)(iVar5 + 0x1b);
            puVar11 = &uStack_28;
            FUN_00027390();
          }
          if (*(char *)(iVar5 + 7) == '\x0e') {
            cVar4 = *(char *)(iVar5 + 8);
          }
          else {
            cVar4 = *(char *)(iVar5 + 7);
          }
          if ((cVar4 != -0x72) && ((int)*(char *)(iVar5 + 6) != (uint)DAT_002eb543)) {
            *(undefined4 *)((int)puVar11 + -4) = 0x67b4f;
            FUN_00064a5f();
          }
          puVar12 = puVar11;
          if ((int)((((uint)*(ushort *)(&DAT_002e9130 + (uint)*(byte *)(iVar5 + 0x1a) * 0xe6) *
                      (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x23) * 0x23) /
                     100 + (uint)*(ushort *)(&DAT_002e9130 + (uint)*(byte *)(iVar5 + 0x1a) * 0xe6))
                   * 0x100) < *(int *)((int)local_1c + (uint)*(byte *)(in_EAX + 0x1a) * 4 + 0x98f))
          {
            *(undefined4 *)((int)puVar11 + -4) = 0x67ba4;
            FUN_0006738b();
            uVar13 = (uint)*(ushort *)(&DAT_002e9130 + (uint)*(byte *)(iVar5 + 0x1a) * 0xe6);
            uVar9 = (uint)((longlong)
                           (ulonglong)
                           (uVar13 * *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x23) *
                           0x23) / (longlong)extraout_ECX);
            uVar10 = (uint)*(byte *)(in_EAX + 0x1a);
            goto LAB_00067bd3;
          }
        }
        else {
          uVar9 = (uint)*(byte *)(in_EAX + 0x1a);
          local_24 = (uint)(byte)(&DAT_002e0e3d)[*(char *)(iVar5 + 6) * 0x1508 + uVar9] * 2;
          bVar7 = *(byte *)((int)local_1c + uVar9 + 0x894);
          *(byte *)((int)local_1c + uVar9 + 0x894) = bVar7 + 1;
          puVar12 = &local_24;
          if (local_24 <= bVar7) goto LAB_00067a3d;
        }
LAB_00067be4:
        iVar5 = *(int *)(local_20 + 0x82);
        *(int *)(local_20 + 0x82) = iVar5 + 1;
        if (DAT_002ed446 < iVar5) {
          *(int *)(local_20 + 0x82) = *(int *)(local_20 + 0x82) - DAT_002ed446;
          uVar2 = *(ushort *)(&DAT_002e912e + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
          *(undefined4 *)((int)puVar12 + -4) = 0x67c31;
          iVar5 = FUN_00023868();
          if (iVar5 < 0) {
            *(undefined4 *)((int)puVar12 + -4) = 0x67c49;
            FUN_000ddaf0(); /* LbErrorLog("scavenge.cpp", line 347, "CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON") */
          }
          *(undefined4 *)((int)puVar12 + -4) = 0x67c5a;
          iVar5 = FUN_000444a9();
          if (iVar5 != 0) {
            *(uint *)(iVar5 + 0x13) = (uint)uVar2;
          }
        }
      }
      uVar6 = 0;
      goto LAB_0006785a;
    }
    if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      uStack_28 = 0x67d80;
      FUN_00051374();
    }
  }
  uStack_28 = 0x67d87;
  FUN_00063b6d();
  uVar6 = 1;
LAB_0006785a:
  return CONCAT44(in_EDX,uVar6);
}

/******************************************************************************
 * Function : sub_067d91 (Ghidra: FUN_00067d91)
 * Prototype: bool sub_067d91(void);
 * Address  : 0x67d91 (Size: 14 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x67d9f
 * Callees  : 1 -> 0x67374
 ******************************************************************************/
bool FUN_00067d91(void)

{
  int iVar1;
  
  iVar1 = FUN_00067374();
  return iVar1 != 0;
}

/******************************************************************************
 * Function : sub_067d9f (Ghidra: FUN_00067d9f)
 * Prototype: longlong sub_067d9f(void);
 * Address  : 0x67d9f (Size: 101 bytes)
 * Module   : scavenge.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x67920, 0x67d91, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_00067d9f(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = FUN_000d0f50();
  if ((((iVar1 != 0) && (*(short *)(iVar1 + 10) == 9)) &&
      (*(short *)(iVar1 + 1) == *(short *)(extraout_ECX + 0x7e))) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    iVar1 = FUN_00067920();
    if (iVar1 == 0) {
      FUN_00067d91();
    }
    return CONCAT44(in_EDX,1);
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_scavenged_room_disappeared_valid_067e04 (Ghidra: FUN_00067e04)
 * Prototype: undefined8 dk_scavenged_room_disappeared_valid_067e04(void);
 * Address  : 0x67e04 (Size: 373 bytes)
 * Module   : scavenge.cpp [direct_file_string_xref]
 * OrigLine : scavenge.cpp:464 ("Scavenged room disappeared or no valid position???")
 * Naming   : String 'Scavenged room disappeared or no valid position???'
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x10ad6, 0x24998, 0x51374, 0x63a25, 0x64ae7, 0x8608c, 0xb3b10, 0xcc968, 0xddaf0
 * Strings  :
 *   - 0x166c90: "scavenge.cpp"
 *   - 0x166c5d: "Scavenged room disappeared or no valid position???"
 ******************************************************************************/
undefined8 FUN_00067e04(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(char *)(iVar3 + 0x9a) = *(char *)(iVar3 + 0x9a) + -1;
  if (*(char *)(iVar3 + 0x9a) < '\x01') {
    if (*(short *)(&DAT_002ddd25 +
                  (uint)(byte)(&DAT_002d33c8)
                              [((&DAT_0019033b)[(uint)*(ushort *)(iVar3 + 0x9d) % 0x100] +
                               (&DAT_0019033b)[(int)(uint)*(ushort *)(iVar3 + 0x9d) >> 8] * 0x55) *
                               6] * 0x45) == 9) {
      cVar1 = FUN_000cc968();
      if (cVar1 != '\0') {
        FUN_000b3b10();
        FUN_00010ad6();
        iVar4 = (int)DAT_002f10ce._3_1_;
        (&DAT_002e0f14)[(uint)*(byte *)(extraout_ECX + 0x9b) * 0xa84] =
             (&DAT_002e0f14)[(uint)*(byte *)(extraout_ECX + 0x9b) * 0xa84] + 1;
        iVar3 = extraout_ECX;
        if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[iVar4 * 0x4ef]) {
          FUN_00051374();
          iVar3 = extraout_ECX_00;
        }
        *(undefined1 *)(iVar3 + 0x9c) = *(undefined1 *)(in_EAX + 6);
        FUN_00063a25();
        FUN_00064ae7();
        goto LAB_00067c65;
      }
    }
    FUN_000ddaf0(); /* LbErrorLog("scavenge.cpp", line 464, "Scavenged room disappeared or no valid position???") */
    FUN_0008608c(0,0);
    uVar2 = 0xffffffff;
  }
  else {
    if (*(char *)(iVar3 + 0x9a) == '\a') {
      FUN_00024998();
    }
LAB_00067c65:
    uVar2 = 0;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_067f79 (Ghidra: FUN_00067f79)
 * Prototype: longlong sub_067f79(void);
 * Address  : 0x67f79 (Size: 48 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
longlong FUN_00067f79(void)

{
  uint in_EDX;
  
  FUN_00024998();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_067fa9 (Ghidra: FUN_00067fa9)
 * Prototype: undefined8 sub_067fa9(void);
 * Address  : 0x67fa9 (Size: 42 bytes)
 * Module   : scavenge.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2796f, 0x67861, 0x67920
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00067fa9(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,(uint)((int)(uint)*(ushort *)
                                            (&DAT_002e912e + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)
                               < (int)(&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542]));
}

/******************************************************************************
 * Function : sub_067fd3 (Ghidra: FUN_00067fd3)
 * Prototype: longlong sub_067fd3(void);
 * Address  : 0x67fd3 (Size: 201 bytes)
 * Module   : scavenge.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x6e538, 0x6f865, 0xb3be4
 ******************************************************************************/
longlong FUN_00067fd3(void)

{
  ushort uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  uint in_EDX;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar5 = (undefined4 *)&stack0xfffffff0;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar1 = (&DAT_002e05b6)[*(char *)(in_EAX + 6) * 0xa84];
  for (uVar4 = DAT_002e8bf6 % (uint)(byte)(&DAT_002e0ea2)[*(char *)(in_EAX + 6) * 0x1508];
      (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1] && (-1 < (int)uVar4)); uVar4 = uVar4 - 1) {
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar1] + 100)] + 0x1f);
  }
  uStack_14 = 0x68050;
  sVar2 = FUN_000b3be4();
  if (0 < sVar2) {
    *(undefined1 *)(in_EAX + 8) = 0x8e;
    uStack_14 = 0x68069;
    iVar3 = FUN_0006f865();
    if (iVar3 == 0) {
      uStack_14 = 0x100;
      uStack_18 = 2;
      uStack_1c = 1;
      puVar5 = &uStack_20;
      uStack_20 = 3;
      FUN_0006e538();
    }
    return CONCAT44(*(undefined4 *)((int)puVar5 + 4),1);
  }
  return (ulonglong)in_EDX << 0x20;
}

