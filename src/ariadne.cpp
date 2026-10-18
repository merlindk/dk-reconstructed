/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: ariadne.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 19
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_011e00 (Ghidra: FUN_00011e00)
 * Prototype: undefined4 sub_011e00(void);
 * Address  : 0x11e00 (Size: 514 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x12002, 0x12230, 0x123ba, 0x1264b, 0x13105, 0x827fc
 * Callees  : 7 -> 0x1211a, 0x1305f, 0x130a6, 0x130c5, 0xc241c, 0xd5ac0, 0xe6a10
 ******************************************************************************/
undefined4 FUN_00011e00(void)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  undefined1 in_CL;
  char extraout_CL;
  undefined4 *in_EDX;
  undefined2 unaff_BX;
  uint *puVar6;
  byte bVar7;
  uint auStack_840 [3];
  int local_818;
  
  bVar7 = 0;
  puVar6 = (uint *)&stack0xfffff7cc;
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  auStack_840[2] = 0x11e37;
  FUN_000e6a10();
  auStack_840[2] = 0x11e42;
  iVar5 = FUN_000130a6();
  if (iVar5 == 0) {
    *(undefined4 *)(iVar4 + 0x217) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar4 + 0x21b + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
    *(undefined4 *)(iVar4 + 0x21d) = *in_EDX;
    *(undefined2 *)(iVar4 + 0x221 + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EDX + (uint)bVar7 * -2 + 1);
    auStack_840[2] = 0x11ee5;
    DAT_003d9528 = FUN_000d5ac0();
    if (extraout_CL == '\0') {
      DAT_003d9524 = (int)*(char *)(in_EAX + 6);
      cVar1 = (&DAT_00190d3d)[*(ushort *)(in_EAX + 0x56)];
      uVar3 = *(ushort *)(iVar4 + 0x21f);
    }
    else {
      cVar1 = (&DAT_00190d3d)[*(ushort *)(in_EAX + 0x56)];
      uVar3 = *(ushort *)(iVar4 + 0x21f);
      DAT_003d9524 = -1;
    }
    auStack_840[2] = (uint)(byte)(cVar1 - 1);
    auStack_840[0] = (uint)uVar3;
    auStack_840[1] = 0xfffffffe;
    puVar6 = auStack_840;
    FUN_000c241c();
    DAT_003d9528 = 0;
    if (local_818 == 0) {
      DAT_003d9528 = 0;
      return 2;
    }
    FUN_0001305f();
    *(undefined1 *)(iVar4 + 0x23f) = 0;
    *(undefined1 *)(iVar4 + 0x235) = in_CL;
    *(undefined4 *)(iVar4 + 0x229) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar4 + 0x22d + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
    *(undefined2 *)(iVar4 + 0x23d) = unaff_BX;
    FUN_000130c5();
  }
  else {
    *(undefined2 *)(iVar4 + 0x240) = *(undefined2 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar4 + 0x242) = *(undefined2 *)(in_EAX + 0xf);
    *(undefined2 *)(iVar4 + 0x223) = *(undefined2 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar4 + 0x225) = *(undefined2 *)(in_EAX + 0xf);
    uVar2 = *(undefined2 *)(in_EAX + 0x11);
    *(undefined1 *)(iVar4 + 0x23f) = 0;
    *(undefined2 *)(iVar4 + 0x227) = uVar2;
    *(undefined4 *)(iVar4 + 0x229) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar4 + 0x22d + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
    *(undefined1 *)(iVar4 + 0x268) = 1;
    *(undefined1 *)(iVar4 + 0x269) = 1;
    *(undefined4 *)(iVar4 + 0x217) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar4 + 0x21b + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
    *(undefined4 *)(iVar4 + 0x21d) = *in_EDX;
    *(undefined2 *)(iVar4 + 0x221 + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EDX + (uint)bVar7 * -2 + 1);
    *(undefined1 *)(iVar4 + 0x235) = 0;
  }
  *(undefined4 *)((int)puVar6 + -4) = 0x11ff6;
  FUN_0001211a();
  return 0;
}

/******************************************************************************
 * Function : sub_012002 (Ghidra: FUN_00012002)
 * Prototype: undefined1 sub_012002(void);
 * Address  : 0x12002 (Size: 280 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xd18d0
 * Callees  : 7 -> 0x11e00, 0x1211a, 0x12230, 0x123ba, 0x1264b, 0x130a3, 0x13105
 ******************************************************************************/
undefined1 FUN_00012002(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char extraout_AL;
  undefined1 uVar4;
  int in_EAX;
  int iVar5;
  undefined4 *in_ECX;
  short *in_EDX;
  int unaff_EBX;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined1 *)(iVar2 + 0x239) = 0;
  if (((*in_EDX != *(short *)(iVar2 + 0x21d)) || (in_EDX[1] != *(short *)(iVar2 + 0x21f))) ||
     (*(short *)(iVar2 + 0x23d) != unaff_EBX)) {
    cVar3 = FUN_00011e00();
    if (cVar3 != '\0') {
      return 2;
    }
    *(short *)(iVar2 + 0x23d) = (short)unaff_EBX;
    if (*(char *)(iVar2 + 0x239) != '\0') {
      puVar6 = (undefined4 *)(iVar2 + 0x229);
      uVar4 = 0;
      goto LAB_000120e2;
    }
  }
  iVar5 = FUN_000130a3();
  if (iVar5 != 0) {
    cVar3 = FUN_00013105();
    if (cVar3 == '\x01') {
      *(undefined2 *)(iVar2 + 0x21d) = 0;
      *(undefined2 *)(iVar2 + 0x21f) = 0;
      *(undefined2 *)(iVar2 + 0x221) = 0;
      puVar6 = (undefined4 *)(in_EAX + 0xd);
      uVar4 = 1;
      goto LAB_000120e2;
    }
    if (cVar3 == '\0') {
      FUN_0001211a();
    }
    else {
      FUN_00011e00();
      if (extraout_AL != '\0') {
        return 3;
      }
    }
  }
  bVar1 = *(byte *)(iVar2 + 0x238);
  if (bVar1 < 2) {
    if (bVar1 != 1) {
      return 3;
    }
    uVar4 = FUN_00012230();
  }
  else if (bVar1 < 3) {
    uVar4 = FUN_000123ba();
  }
  else {
    if (bVar1 != 3) {
      return 3;
    }
    uVar4 = FUN_0001264b();
  }
  puVar6 = (undefined4 *)(iVar2 + 0x229);
LAB_000120e2:
  *in_ECX = *puVar6;
  *(undefined2 *)(in_ECX + (uint)bVar7 * -2 + 1) = *(undefined2 *)(puVar6 + (uint)bVar7 * -2 + 1);
  return uVar4;
}

/******************************************************************************
 * Function : sub_01211a (Ghidra: FUN_0001211a)
 * Prototype: undefined4 sub_01211a(void);
 * Address  : 0x1211a (Size: 278 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x11e00, 0x12002, 0x123ba
 * Callees  : 7 -> 0x10c1a, 0x1277d, 0x12a2e, 0x12a67, 0x12b04, 0x22d5c, 0xb28e8
 ******************************************************************************/
undefined4 FUN_0001211a(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  byte bVar3;
  undefined4 local_2c;
  short asStack_28 [2];
  undefined4 local_24;
  undefined2 local_20 [2];
  uint local_1c;
  uint local_18;
  
  bVar3 = 0;
  iVar1 = FUN_00010c1a();
  local_24 = CONCAT22(*(short *)(in_EAX + 0xf) +
                      (short)((uint)-((int)*(short *)(extraout_ECX + 0x26) *
                                      (int)(&PTR_LAB_00192fe0)[iVar1] >> 8) >> 8),
                      (short)((uint)((int)*(short *)(extraout_ECX + 0x26) * (&DAT_001927e0)[iVar1])
                             >> 0x10) + *(short *)(in_EAX + 0xd));
  local_20[0] = FUN_000b28e8();
  iVar2 = FUN_00012a2e();
  iVar1 = extraout_ECX_00;
  if (iVar2 != 0) {
    local_1c = FUN_00012a67();
    local_18 = local_1c;
    iVar2 = FUN_00022d5c();
    iVar1 = extraout_ECX_01;
    if (iVar2 == 0) {
      FUN_00012b04();
      if ((((local_1c & 1) == 0) || (*(short *)(in_EAX + 0xd) != (short)local_2c)) &&
         (((local_18 & 2) == 0 || (*(short *)(in_EAX + 0xf) != local_2c._2_2_)))) {
        *(undefined1 *)(extraout_ECX_02 + 0x21) = 3;
        *(undefined1 *)(extraout_ECX_02 + 0x5f) = 1;
        *(undefined4 *)(extraout_ECX_02 + 0x53) = local_2c;
        *(short *)(extraout_ECX_02 + 0x57 + (uint)bVar3 * -8) = asStack_28[(uint)bVar3 * -4];
        *(undefined4 *)(extraout_ECX_02 + 0x59) = local_24;
        *(undefined2 *)(extraout_ECX_02 + 0x5d + (uint)bVar3 * -8) = local_20[(uint)bVar3 * -4];
        *(undefined4 *)(extraout_ECX_02 + 0x12) = local_2c;
        *(short *)(extraout_ECX_02 + 0x16 + (uint)bVar3 * -8) = asStack_28[(uint)bVar3 * -4];
        return 1;
      }
      FUN_0001277d();
      *(undefined1 *)(extraout_ECX_03 + 0x22) = 1;
      return 1;
    }
  }
  *(undefined1 *)(iVar1 + 0x21) = 1;
  return 1;
}

/******************************************************************************
 * Function : sub_012230 (Ghidra: FUN_00012230)
 * Prototype: undefined4 sub_012230(void);
 * Address  : 0x12230 (Size: 394 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x12002
 * Callees  : 8 -> 0x10c1a, 0x11e00, 0x12a2e, 0x12a67, 0x12b04, 0x22d5c, 0xb28e8, 0xdc354
 ******************************************************************************/
undefined4 FUN_00012230(void)

{
  char cVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int in_EDX;
  byte bVar5;
  undefined4 local_28;
  undefined2 auStack_24 [2];
  undefined4 local_20;
  undefined2 auStack_1c [2];
  int local_18;
  
  bVar5 = 0;
  iVar3 = FUN_00010c1a();
  local_18 = FUN_000dc354();
  if (local_18 - *(int *)(in_EDX + 0x62) < 0x401) {
    if (*(short *)(in_EDX + 0x26) < local_18) {
      *(short *)(in_EDX + 0x12) =
           *(short *)(in_EAX + 0xd) +
           (short)((uint)((int)*(short *)(in_EDX + 0x26) * (&DAT_001927e0)[iVar3]) >> 0x10);
      *(short *)(in_EDX + 0x14) =
           *(short *)(in_EAX + 0xf) +
           (short)((uint)-((int)*(short *)(in_EDX + 0x26) * (int)(&PTR_LAB_00192fe0)[iVar3] >> 8) >>
                  8);
      uVar2 = FUN_000b28e8();
      *(undefined2 *)(in_EDX + 0x16) = uVar2;
    }
    else {
      *(undefined2 *)(in_EDX + 0x12) = *(undefined2 *)(in_EDX + 0xc);
      *(undefined2 *)(in_EDX + 0x14) = *(undefined2 *)(in_EDX + 0xe);
    }
LAB_00012302:
    if (local_18 < *(int *)(in_EDX + 0x62)) {
      *(int *)(in_EDX + 0x62) = local_18;
    }
    iVar3 = FUN_00012a2e();
    if (iVar3 != 0) {
      if (*(char *)(in_EDX + 0x23) == '\0') {
        FUN_00012a67();
        iVar3 = FUN_00022d5c();
        if (iVar3 == 0) {
          FUN_00012b04();
          *(undefined1 *)(in_EDX + 0x21) = 3;
          *(undefined1 *)(in_EDX + 0x5f) = 1;
          *(undefined4 *)(in_EDX + 0x53) = local_28;
          *(undefined2 *)(in_EDX + 0x57 + (uint)bVar5 * -8) = auStack_24[(uint)bVar5 * -4];
          *(undefined4 *)(in_EDX + 0x59) = *(undefined4 *)(in_EDX + 0x12);
          *(undefined2 *)(in_EDX + 0x5d + (uint)bVar5 * -8) =
               *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8);
          *(undefined4 *)(in_EDX + 0x12) = local_28;
          *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8) = auStack_24[(uint)bVar5 * -4];
        }
      }
      else {
        local_20 = *(undefined4 *)(in_EDX + 6);
        auStack_1c[(uint)bVar5 * -4] = *(undefined2 *)(in_EDX + 10 + (uint)bVar5 * -8);
        cVar1 = FUN_00011e00();
        if (cVar1 != '\0') goto LAB_00012297;
      }
    }
    uVar4 = 0;
  }
  else {
    *(undefined4 *)(in_EDX + 0x12) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar5 * -8);
    local_20 = *(undefined4 *)(in_EDX + 6);
    auStack_1c[(uint)bVar5 * -4] = *(undefined2 *)(in_EDX + 10 + (uint)bVar5 * -8);
    cVar1 = FUN_00011e00();
    if (cVar1 == '\0') goto LAB_00012302;
LAB_00012297:
    uVar4 = 3;
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_0123ba (Ghidra: FUN_000123ba)
 * Prototype: undefined1 sub_0123ba(void);
 * Address  : 0x123ba (Size: 657 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x12002
 * Callees  : 10 -> 0x11e00, 0x1211a, 0x128cd, 0x12a2e, 0x12b04, 0x12c46, 0x12edf, 0x12fef, 0xb28e8, 0xdc354
 ******************************************************************************/
undefined1 FUN_000123ba(void)

{
  char cVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  int in_EDX;
  byte bVar5;
  undefined4 local_24;
  undefined2 auStack_20 [2];
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  
  bVar5 = 0;
  iVar3 = FUN_000dc354();
  if (iVar3 - *(int *)(in_EDX + 0x62) < 0x401) {
    if (*(short *)(in_EDX + 0x26) < iVar3) {
      if (*(short *)(in_EAX + 0x52) != *(short *)(in_EDX + 0x60)) {
        return 0;
      }
      if ((*(short *)(in_EAX + 0xd) != *(short *)(in_EDX + 0x12)) ||
         (*(short *)(in_EAX + 0xf) != *(short *)(in_EDX + 0x14))) {
LAB_00012440:
        FUN_0001211a();
        return 0;
      }
      if (iVar3 < *(int *)(in_EDX + 0x62)) {
        iVar4 = FUN_00012edf();
        if (iVar4 != 0) {
          iVar3 = FUN_0001211a();
          if (iVar3 == 0) {
            return 3;
          }
          return 0;
        }
        *(int *)(in_EDX + 0x62) = iVar3;
      }
      iVar3 = FUN_000128cd();
      if (iVar3 == -1) goto LAB_00012440;
      *(short *)(in_EDX + 0x12) =
           (short)((uint)((int)*(short *)(in_EDX + 0x26) * (&DAT_001927e0)[iVar3]) >> 0x10) +
           *(short *)(in_EAX + 0xd);
      *(short *)(in_EDX + 0x14) =
           (short)((uint)-((int)(&PTR_LAB_00192fe0)[iVar3] * (int)*(short *)(in_EDX + 0x26) >> 8) >>
                  8) + *(short *)(in_EAX + 0xf);
      uVar2 = FUN_000b28e8();
      *(undefined2 *)(in_EDX + 0x16) = uVar2;
      if ((extraout_ECX == *(ushort *)(in_EAX + 0x52)) && (iVar4 = FUN_00012c46(), iVar4 != 0)) {
        *(undefined1 *)(in_EDX + 0x21) = 3;
        *(undefined1 *)(in_EDX + 0x5f) = 2;
        *(undefined4 *)(in_EDX + 0x53) = *(undefined4 *)(in_EDX + 0x12);
        *(undefined2 *)(in_EDX + 0x57 + (uint)bVar5 * -8) =
             *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8);
        return 0;
      }
      *(short *)(in_EDX + 0x60) = (short)iVar3;
      iVar3 = FUN_00012fef();
      if (iVar3 != 0) {
        *(undefined4 *)(in_EDX + 0x12) = *(undefined4 *)(in_EAX + 0xd);
        *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8) =
             *(undefined2 *)(in_EAX + 0x11 + (uint)bVar5 * -8);
        local_1c = *(undefined4 *)(in_EDX + 6);
        auStack_18[(uint)bVar5 * -4] = *(undefined2 *)(in_EDX + 10 + (uint)bVar5 * -8);
        cVar1 = FUN_00011e00();
        if (cVar1 != '\0') {
          return 3;
        }
        return 0;
      }
      iVar3 = FUN_00012a2e();
      if (iVar3 == 0) {
        return 0;
      }
      if (*(char *)(in_EDX + 0x23) == '\0') {
        FUN_00012b04();
        *(undefined1 *)(in_EDX + 0x21) = 3;
        *(undefined1 *)(in_EDX + 0x5f) = 2;
        goto LAB_0001262b;
      }
    }
    else {
      *(undefined2 *)(in_EDX + 0x12) = *(undefined2 *)(in_EDX + 0xc);
      *(undefined2 *)(in_EDX + 0x14) = *(undefined2 *)(in_EDX + 0xe);
      iVar3 = FUN_00012a2e();
      if (iVar3 == 0) {
        return 0;
      }
      if (*(char *)(in_EDX + 0x23) == '\0') {
        FUN_00012b04();
        *(undefined1 *)(in_EDX + 0x21) = 3;
        *(undefined1 *)(in_EDX + 0x5f) = 1;
LAB_0001262b:
        *(undefined4 *)(in_EDX + 0x53) = local_24;
        *(undefined2 *)(in_EDX + 0x57 + (uint)bVar5 * -8) = auStack_20[(uint)bVar5 * -4];
        *(undefined4 *)(in_EDX + 0x59) = *(undefined4 *)(in_EDX + 0x12);
        *(undefined2 *)(in_EDX + 0x5d + (uint)bVar5 * -8) =
             *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8);
        *(undefined4 *)(in_EDX + 0x12) = local_24;
        *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8) = auStack_20[(uint)bVar5 * -4];
        return 0;
      }
    }
    local_1c = *(undefined4 *)(in_EDX + 6);
    auStack_18[(uint)bVar5 * -4] = *(undefined2 *)(in_EDX + 10 + (uint)bVar5 * -8);
  }
  else {
    *(undefined4 *)(in_EDX + 0x12) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(in_EDX + 0x16 + (uint)bVar5 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar5 * -8);
    local_1c = *(undefined4 *)(in_EDX + 6);
    auStack_18[(uint)bVar5 * -4] = *(undefined2 *)(in_EDX + 10 + (uint)bVar5 * -8);
  }
  cVar1 = FUN_00011e00();
  if (cVar1 == '\0') {
    return 0;
  }
  return 3;
}

/******************************************************************************
 * Function : dk_manoeuvre_state_01264b (Ghidra: FUN_0001264b)
 * Prototype: undefined4 dk_manoeuvre_state_01264b(void);
 * Address  : 0x1264b (Size: 306 bytes)
 * Module   : ariadne.cpp [direct_file_string_xref]
 * OrigLine : ariadne.cpp:798 ("Unknown Manoeuvre state")
 * Naming   : String 'Unknown Manoeuvre state'
 * Callers  : 1 -> 0x12002
 * Callees  : 6 -> 0x11e00, 0x1277d, 0x128cd, 0x12a2e, 0xdc354, 0xddaf0
 * Strings  :
 *   - 0x160130: "ariadne.cpp"
 *   - 0x160118: "Unknown Manoeuvre state"
 ******************************************************************************/
undefined4 FUN_0001264b(void)

{
  short sVar1;
  undefined *puVar2;
  char cVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  int in_EDX;
  byte bVar7;
  undefined2 auStack_18 [2];
  
  bVar7 = 0;
  iVar5 = FUN_00012a2e();
  if (iVar5 != 0) {
    auStack_18[(uint)bVar7 * -4] = *(undefined2 *)(in_EDX + 10 + (uint)bVar7 * -8);
    cVar3 = FUN_00011e00();
    if (cVar3 != '\0') {
      return 3;
    }
  }
  iVar5 = FUN_000dc354();
  if (iVar5 < *(int *)(in_EDX + 0x62)) {
    *(int *)(in_EDX + 0x62) = iVar5;
  }
  if ((*(short *)(in_EAX + 0xd) == *(short *)(in_EDX + 0x53)) &&
     (*(short *)(in_EAX + 0xf) == *(short *)(in_EDX + 0x55))) {
    bVar7 = *(byte *)(in_EDX + 0x5f);
    if (bVar7 != 0) {
      if (bVar7 < 2) {
        uVar6 = FUN_0001277d();
        return uVar6;
      }
      if (bVar7 == 2) {
        uVar4 = FUN_000128cd();
        *(ushort *)(in_EDX + 0x60) = uVar4;
        *(short *)(in_EDX + 0x12) =
             (short)((uint)((&DAT_001927e0)[uVar4] * (int)*(short *)(in_EDX + 0x26)) >> 0x10) +
             *(short *)(in_EAX + 0xd);
        puVar2 = (&PTR_LAB_00192fe0)[*(ushort *)(in_EDX + 0x60)];
        sVar1 = *(short *)(in_EAX + 0xf);
        *(undefined1 *)(in_EDX + 0x21) = 2;
        *(short *)(in_EDX + 0x14) =
             sVar1 + (short)((uint)-((int)*(short *)(in_EDX + 0x26) * (int)puVar2 >> 8) >> 8);
        return 0;
      }
    }
    FUN_000ddaf0(); /* LbErrorLog("ariadne.cpp", line 798, "Unknown Manoeuvre state") */
  }
  else {
    *(undefined4 *)(in_EDX + 0x12) = *(undefined4 *)(in_EDX + 0x53);
    *(undefined2 *)(in_EDX + 0x16 + (uint)bVar7 * -8) =
         *(undefined2 *)(in_EDX + 0x57 + (uint)bVar7 * -8);
  }
  return 0;
}

/******************************************************************************
 * Function : dk_ariadne_speed_01277d (Ghidra: FUN_0001277d)
 * Prototype: uint dk_ariadne_speed_01277d(void);
 * Address  : 0x1277d (Size: 336 bytes)
 * Module   : ariadne.cpp [direct_file_string_xref]
 * OrigLine : ariadne.cpp:825 ("Ariadne Speed == 0")
 * Naming   : String 'Ariadne Speed == 0'
 * Callers  : 2 -> 0x1211a, 0x1264b
 * Callees  : 6 -> 0x12a2e, 0x12b04, 0x12c46, 0x13169, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x16014f: "ariadne.cpp"
 *   - 0x16013c: "Ariadne Speed == 0"
 ******************************************************************************/
uint FUN_0001277d(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  int local_14;
  
  bVar6 = 0;
  if (*(short *)(in_EDX + 0x26) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("ariadne.cpp", line 825, "Ariadne Speed == 0") */
  }
  iVar2 = FUN_00013169(in_EDX + 0x20);
  if (iVar2 == 0) {
    *(undefined1 *)(in_EDX + 0x21) = 1;
    puVar5 = (undefined4 *)(in_EDX + 0x12);
    puVar4 = (undefined4 *)(in_EAX + 0xd);
  }
  else {
    *(undefined1 *)(in_EDX + 0x21) = 2;
    *(short *)(in_EDX + 0x12) =
         (short)((uint)((&DAT_001927e0)[*(ushort *)(in_EDX + 0x60)] * (int)*(short *)(in_EDX + 0x26)
                       ) >> 0x10) + *(short *)(in_EAX + 0xd);
    *(short *)(in_EDX + 0x14) =
         (short)((uint)-((int)*(short *)(in_EDX + 0x26) *
                         (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EDX + 0x60)] >> 8) >> 8) +
         *(short *)(in_EAX + 0xf);
    local_14 = in_EDX + 0x12;
    uVar1 = FUN_000b28e8();
    *(undefined2 *)(in_EDX + 0x16) = uVar1;
    *(undefined4 *)(in_EDX + 0x18) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(in_EDX + 0x1c + (uint)bVar6 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar6 * -8);
    *(undefined2 *)(in_EDX + 0x24) = *(undefined2 *)(in_EDX + 0x60);
    iVar2 = FUN_00012c46();
    if (iVar2 == 0) {
      iVar2 = FUN_00012a2e();
      uVar3 = 0;
      if (iVar2 == 0) goto LAB_000128c6;
      FUN_00012b04();
      *(undefined1 *)(in_EDX + 0x21) = 3;
      *(undefined1 *)(in_EDX + 0x5f) = 1;
      *(undefined4 *)(in_EDX + 0x53) = local_1c;
      *(undefined2 *)(in_EDX + 0x57 + (uint)bVar6 * -8) = auStack_18[(uint)bVar6 * -4];
      puVar5 = (undefined4 *)(in_EDX + 0x59);
    }
    else {
      *(undefined1 *)(in_EDX + 0x21) = 3;
      *(undefined1 *)(in_EDX + 0x5f) = 2;
      puVar5 = (undefined4 *)(in_EDX + 0x53);
    }
    puVar4 = (undefined4 *)(in_EDX + 0x12);
  }
  *puVar5 = *puVar4;
  *(undefined2 *)(puVar5 + (uint)bVar6 * -2 + 1) = *(undefined2 *)(puVar4 + (uint)bVar6 * -2 + 1);
  uVar3 = in_EDX;
LAB_000128c6:
  return uVar3 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0128cd (Ghidra: FUN_000128cd)
 * Prototype: int sub_0128cd(void);
 * Address  : 0x128cd (Size: 270 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x123ba, 0x1264b, 0x1342a
 * Callees  : 2 -> 0x10d93, 0x129db
 ******************************************************************************/
int FUN_000128cd(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_EDX;
  
  if (*(char *)(in_EDX + 0x20) == '\x01') {
    iVar1 = FUN_00010d93();
    iVar2 = FUN_000129db();
    if (iVar2 != 0) {
      return (iVar1 - 1U & 3) << 9;
    }
    uVar3 = FUN_00010d93();
    iVar1 = FUN_000129db();
    if (iVar1 != 0) {
      return (uVar3 & 3) << 9;
    }
    iVar1 = FUN_00010d93();
    uVar3 = iVar1 + 1;
  }
  else {
    if (*(char *)(in_EDX + 0x20) != '\x02') {
      return -1;
    }
    iVar1 = FUN_00010d93();
    iVar2 = FUN_000129db();
    if (iVar2 != 0) {
      return (iVar1 + 1U & 3) << 9;
    }
    uVar3 = FUN_00010d93();
    iVar1 = FUN_000129db();
    if (iVar1 != 0) {
      return (uVar3 & 3) << 9;
    }
    iVar1 = FUN_00010d93();
    uVar3 = iVar1 - 1;
  }
  iVar1 = FUN_000129db();
  if (iVar1 == 0) {
    iVar1 = FUN_00010d93();
    uVar3 = iVar1 + 2;
    iVar1 = FUN_000129db();
    if (iVar1 == 0) {
      return -1;
    }
  }
  return (uVar3 & 3) << 9;
}

/******************************************************************************
 * Function : sub_0129db (Ghidra: FUN_000129db)
 * Prototype: bool sub_0129db(void);
 * Address  : 0x129db (Size: 83 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x128cd, 0x12c46
 * Callees  : 1 -> 0x12a2e
 ******************************************************************************/
bool FUN_000129db(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  iVar1 = FUN_00012a2e((short)((uint)((int)*(short *)(in_EDX + 0x26) * (&DAT_001927e0)[unaff_EBX])
                              >> 0x10) + *(short *)(in_EAX + 0xd));
  return iVar1 == 0;
}

/******************************************************************************
 * Function : sub_012a2e (Ghidra: FUN_00012a2e)
 * Prototype: void sub_012a2e(void);
 * Address  : 0x12a2e (Size: 57 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x1211a, 0x12230, 0x123ba, 0x1264b, 0x1277d, 0x129db, 0x12a67, 0x12edf
 * Callees  : 2 -> 0x7e134, 0xb3040
 ******************************************************************************/
void FUN_00012a2e(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined2 extraout_CX;
  undefined4 *in_EDX;
  undefined4 uVar2;
  
  uVar2 = *in_EDX;
  uVar1 = FUN_000b3040(uVar2,*(undefined2 *)(in_EDX + 1));
  *(undefined2 *)(in_EAX + 0x11) = uVar1;
  FUN_0007e134(uVar2,uVar1);
  *(undefined2 *)(in_EAX + 0x11) = extraout_CX;
  return;
}

/******************************************************************************
 * Function : sub_012a67 (Ghidra: FUN_00012a67)
 * Prototype: byte sub_012a67(void);
 * Address  : 0x12a67 (Size: 157 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x1211a, 0x12230, 0x12b04, 0x13169
 * Callees  : 1 -> 0x12a2e
 ******************************************************************************/
byte FUN_00012a67(void)

{
  int in_EAX;
  int iVar1;
  undefined2 *extraout_ECX;
  undefined2 *in_EDX;
  byte bVar2;
  
  iVar1 = FUN_00012a2e(*in_EDX,*(undefined2 *)(in_EAX + 0x11));
  bVar2 = iVar1 != 0;
  iVar1 = FUN_00012a2e(*(undefined2 *)(in_EAX + 0xd),*(undefined2 *)(in_EAX + 0x11));
  if (iVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  if ((bVar2 == 0) &&
     (iVar1 = FUN_00012a2e(*extraout_ECX,*(undefined2 *)(in_EAX + 0x11)), iVar1 != 0)) {
    bVar2 = 4;
  }
  return bVar2;
}

/******************************************************************************
 * Function : sub_012b04 (Ghidra: FUN_00012b04)
 * Prototype: uint sub_012b04(void);
 * Address  : 0x12b04 (Size: 322 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x1211a, 0x12230, 0x123ba, 0x1277d
 * Callees  : 2 -> 0x12a67, 0xb28e8
 ******************************************************************************/
uint FUN_00012b04(void)

{
  short sVar1;
  undefined2 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  ushort *in_EDX;
  ushort uVar4;
  undefined4 *unaff_EBX;
  byte bVar5;
  undefined4 local_20;
  undefined2 local_1c [2];
  uint local_18;
  uint local_14;
  
  bVar5 = 0;
  local_18 = FUN_00012a67();
  local_14 = local_18;
  uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(extraout_ECX + 0x56) * 2) / 2;
  local_20 = *(int *)in_EDX;
  iVar3 = extraout_ECX;
  if ((local_18 & 1) != 0) {
    local_20._2_2_ = (short)((uint)local_20 >> 0x10);
    uVar2 = local_20._2_2_;
    if (*in_EDX < *(ushort *)(extraout_ECX + 0xd)) {
      local_20._0_2_ = *(short *)(extraout_ECX + 0xd) - uVar4 & 0xff00;
      sVar1 = (ushort)local_20 + uVar4;
    }
    else {
      local_20 = CONCAT22(local_20._2_2_,*(short *)(extraout_ECX + 0xd) + uVar4);
      local_20 = CONCAT31(local_20._1_3_,0xff);
      sVar1 = (ushort)local_20 - uVar4;
    }
    local_20 = CONCAT22(uVar2,sVar1);
    local_1c[0] = FUN_000b28e8();
    iVar3 = extraout_ECX_00;
  }
  if ((local_14 & 2) != 0) {
    uVar2 = (ushort)local_20;
    if (in_EDX[1] < *(ushort *)(iVar3 + 0xf)) {
      local_20._3_1_ = (byte)((ushort)(*(short *)(iVar3 + 0xf) - uVar4) >> 8);
      local_20 = (uint)local_20._3_1_ << 0x18;
      local_20._2_2_ = local_20._2_2_ + uVar4;
    }
    else {
      local_20._3_1_ = (byte)((ushort)(*(short *)(iVar3 + 0xf) + uVar4) >> 8);
      local_20._0_3_ = CONCAT12(0xff,(ushort)local_20);
      local_20._2_2_ = local_20._2_2_ - uVar4;
    }
    local_20 = CONCAT22(local_20._2_2_,uVar2);
    local_1c[0] = FUN_000b28e8();
    iVar3 = extraout_ECX_01;
  }
  if ((local_14 & 4) != 0) {
    if (*in_EDX < *(ushort *)(iVar3 + 0xd)) {
      local_20._0_2_ = *(short *)(iVar3 + 0xd) - uVar4 & 0xff00;
      sVar1 = (ushort)local_20 + uVar4;
    }
    else {
      local_20._1_3_ = (uint3)(byte)((ushort)(*(short *)(iVar3 + 0xd) + uVar4) >> 8);
      local_20 = CONCAT31(local_20._1_3_,0xff);
      sVar1 = (ushort)local_20 - uVar4;
    }
    if (in_EDX[1] < *(ushort *)(iVar3 + 0xf)) {
      local_20._3_1_ = (byte)((ushort)(*(short *)(iVar3 + 0xf) - uVar4) >> 8);
      local_20 = (uint)local_20._3_1_ << 0x18;
      local_20._2_2_ = local_20._2_2_ + uVar4;
    }
    else {
      local_20._3_1_ = (byte)((ushort)(*(short *)(iVar3 + 0xf) + uVar4) >> 8);
      local_20._0_3_ = CONCAT12(0xff,sVar1);
      local_20._2_2_ = local_20._2_2_ - uVar4;
    }
    local_20 = CONCAT22(local_20._2_2_,sVar1);
    local_1c[0] = FUN_000b28e8();
  }
  *unaff_EBX = local_20;
  *(undefined2 *)(unaff_EBX + (uint)bVar5 * -2 + 1) = local_1c[(uint)bVar5 * -4];
  return local_14;
}

/******************************************************************************
 * Function : sub_012c46 (Ghidra: FUN_00012c46)
 * Prototype: undefined4 sub_012c46(void);
 * Address  : 0x12c46 (Size: 665 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x123ba, 0x1277d, 0x1342a
 * Callees  : 3 -> 0x10d93, 0x129db, 0xb28e8
 ******************************************************************************/
undefined4 FUN_00012c46(void)

{
  bool bVar1;
  undefined2 uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int in_ECX;
  short sVar5;
  int in_EDX;
  ushort *unaff_EBX;
  undefined4 *puVar6;
  byte bVar7;
  undefined2 auStack_818 [1012];
  undefined4 local_24;
  undefined2 auStack_20 [2];
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  undefined4 local_14;
  ushort auStack_10 [2];
  
  bVar7 = 0;
  uVar3 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  bVar1 = false;
  sVar5 = (short)uVar3;
  if (in_ECX == 0) {
    if ((int)(unaff_EBX[1] - uVar3) >> 8 < (int)(*(ushort *)(in_EAX + 0xf) - uVar3) >> 8) {
      local_14._3_1_ = (byte)((ushort)(*(short *)(in_EAX + 0xf) - sVar5) >> 8);
      local_14 = (uint)local_14._3_1_ << 0x18;
      bVar1 = true;
      local_14 = CONCAT22(local_14._2_2_ + sVar5,*unaff_EBX);
    }
  }
  else if (in_ECX == 0x400) {
    if ((uint)((int)(*(ushort *)(in_EAX + 0xf) + uVar3) >> 8) <
        (uint)((int)(unaff_EBX[1] + uVar3) >> 8)) {
      local_14._3_1_ = (byte)((ushort)(*(short *)(in_EAX + 0xf) + sVar5) >> 8);
      local_14._0_3_ = CONCAT12(0xff,*unaff_EBX);
      bVar1 = true;
      local_14 = CONCAT22(local_14._2_2_ - sVar5,*unaff_EBX);
    }
  }
  else if (in_ECX == 0x600) {
    if ((int)(*unaff_EBX - uVar3) >> 8 < (int)(*(ushort *)(in_EAX + 0xd) - uVar3) >> 8) {
      local_14._0_2_ = *(short *)(in_EAX + 0xd) - sVar5 & 0xff00;
      bVar1 = true;
      local_14 = CONCAT22(unaff_EBX[1],(ushort)local_14 + sVar5);
    }
  }
  else if ((in_ECX == 0x200) &&
          ((uint)((int)(*(ushort *)(in_EAX + 0xd) + uVar3) >> 8) <
           (uint)((int)(*unaff_EBX + uVar3) >> 8))) {
    local_14 = CONCAT22(unaff_EBX[1],*(short *)(in_EAX + 0xd) + sVar5);
    local_14 = CONCAT31(local_14._1_3_,0xff);
    bVar1 = true;
    local_14 = CONCAT22(unaff_EBX[1],(ushort)local_14 - sVar5);
  }
  if (!bVar1) {
    return 0;
  }
  if (*(char *)(in_EDX + 0x20) == '\x01') {
    FUN_00010d93();
    iVar4 = FUN_000129db();
    if (iVar4 == 0) {
      local_24 = *(undefined4 *)(in_EAX + 0xd);
      auStack_20[(uint)bVar7 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
      *(int *)(in_EAX + 0xd) = local_14;
      *(ushort *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_10[(uint)bVar7 * -4];
      uVar2 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar2;
      FUN_00010d93();
      iVar4 = FUN_000129db();
      if (iVar4 != 0) {
        *(int *)unaff_EBX = local_14;
        unaff_EBX[(uint)bVar7 * -4 + 2] = auStack_10[(uint)bVar7 * -4];
        puVar6 = &local_24;
        goto LAB_00012e1e;
      }
      puVar6 = &local_24;
      goto LAB_00012ed3;
    }
  }
  if (*(char *)(in_EDX + 0x20) != '\x02') {
    return 0;
  }
  FUN_00010d93();
  iVar4 = FUN_000129db();
  if (iVar4 != 0) {
    return 0;
  }
  local_1c = *(undefined4 *)(in_EAX + 0xd);
  auStack_18[(uint)bVar7 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
  *(int *)(in_EAX + 0xd) = local_14;
  *(ushort *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_10[(uint)bVar7 * -4];
  uVar2 = FUN_000b28e8();
  *(undefined2 *)(in_EAX + 0x11) = uVar2;
  FUN_00010d93();
  iVar4 = FUN_000129db();
  if (iVar4 != 0) {
    *(int *)unaff_EBX = local_14;
    unaff_EBX[(uint)bVar7 * -4 + 2] = auStack_10[(uint)bVar7 * -4];
    puVar6 = &local_1c;
LAB_00012e1e:
    *(undefined4 *)(in_EAX + 0xd) = *puVar6;
    *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) =
         *(undefined2 *)(puVar6 + (uint)bVar7 * -2 + 1);
    return 1;
  }
  puVar6 = &local_1c;
LAB_00012ed3:
  *(undefined4 *)(in_EAX + 0xd) = *puVar6;
  *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) = *(undefined2 *)(puVar6 + (uint)bVar7 * -2 + 1)
  ;
  return 0;
}

/******************************************************************************
 * Function : sub_012edf (Ghidra: FUN_00012edf)
 * Prototype: undefined4 sub_012edf(void);
 * Address  : 0x12edf (Size: 272 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x123ba
 * Callees  : 3 -> 0x10c1a, 0x12a2e, 0xb28e8
 ******************************************************************************/
undefined4 FUN_00012edf(void)

{
  ushort *puVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  ushort uVar4;
  int unaff_EBX;
  byte bVar5;
  short local_2c;
  short sStack_2a;
  ushort local_28 [4];
  undefined2 local_20;
  ushort local_1c;
  short local_1a;
  undefined2 local_18;
  
  bVar5 = 0;
  puVar1 = (ushort *)(in_EAX + 0xd);
  iVar3 = FUN_00010c1a();
  local_2c = (short)*(undefined4 *)puVar1;
  sStack_2a = (short)((uint)*(undefined4 *)puVar1 >> 0x10);
  local_28[(uint)bVar5 * -4] = *(ushort *)(in_EAX + 0x11 + (uint)bVar5 * -8);
  uVar4 = local_2c + (short)((uint)(unaff_EBX * (&DAT_001927e0)[iVar3]) >> 0x10);
  uVar2 = sStack_2a + (short)((uint)-(unaff_EBX * (int)(&PTR_LAB_00192fe0)[iVar3] >> 8) >> 8);
  local_28[0] = FUN_000b28e8();
  local_1a = (short)unaff_EBX;
  if (*puVar1 < uVar4) {
    local_28[2] = *puVar1 + local_1a;
  }
  else if (uVar4 < *puVar1) {
    local_28[2] = *puVar1 - local_1a;
  }
  else {
    local_28[2] = *puVar1;
  }
  local_28[3] = *(undefined2 *)(in_EAX + 0xf);
  local_20 = FUN_000b28e8();
  if (*(ushort *)(in_EAX + 0xf) < uVar2) {
    local_1a = *(short *)(in_EAX + 0xf) + local_1a;
  }
  else if (uVar2 < *(ushort *)(in_EAX + 0xf)) {
    local_1a = *(short *)(in_EAX + 0xf) - local_1a;
  }
  else {
    local_1a = *(short *)(in_EAX + 0xf);
  }
  local_1c = *puVar1;
  local_18 = FUN_000b28e8();
  iVar3 = FUN_00012a2e();
  if (iVar3 == 0) {
    iVar3 = FUN_00012a2e();
    if (iVar3 == 0) {
      iVar3 = FUN_00012a2e();
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_012fef (Ghidra: FUN_00012fef)
 * Prototype: undefined4 sub_012fef(void);
 * Address  : 0x12fef (Size: 112 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x123ba
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00012fef(void)

{
  int in_EAX;
  int in_EDX;
  bool bVar1;
  bool bVar2;
  
  if (*(short *)(in_EAX + 0xd) == *(short *)(in_EDX + 0x18)) {
    if ((*(ushort *)(in_EAX + 0xf) <= *(ushort *)(in_EDX + 0x1a)) &&
       (*(ushort *)(in_EDX + 0x1a) <= *(ushort *)(in_EDX + 0x14))) {
      return 1;
    }
    if (*(ushort *)(in_EAX + 0xf) < *(ushort *)(in_EDX + 0x1a)) {
      return 0;
    }
    bVar1 = *(ushort *)(in_EDX + 0x14) < *(ushort *)(in_EDX + 0x1a);
    bVar2 = *(ushort *)(in_EDX + 0x14) == *(ushort *)(in_EDX + 0x1a);
  }
  else {
    if (*(short *)(in_EAX + 0xf) != *(short *)(in_EDX + 0x1a)) {
      return 0;
    }
    if ((*(ushort *)(in_EAX + 0xd) <= *(ushort *)(in_EDX + 0x18)) &&
       (*(ushort *)(in_EDX + 0x18) <= *(ushort *)(in_EDX + 0x12))) {
      return 1;
    }
    if (*(ushort *)(in_EAX + 0xd) < *(ushort *)(in_EDX + 0x18)) {
      return 0;
    }
    bVar1 = *(ushort *)(in_EDX + 0x12) < *(ushort *)(in_EDX + 0x18);
    bVar2 = *(ushort *)(in_EDX + 0x12) == *(ushort *)(in_EDX + 0x18);
  }
  if (bVar1 || bVar2) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01305f (Ghidra: FUN_0001305f)
 * Prototype: void sub_01305f(void);
 * Address  : 0x1305f (Size: 68 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11e00
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0001305f(void)

{
  int in_EAX;
  int iVar1;
  undefined2 *in_EDX;
  undefined1 uVar2;
  undefined2 *puVar3;
  
  if (*(int *)(in_EAX + 0x10) < 10) {
    uVar2 = (undefined1)*(undefined4 *)(in_EAX + 0x10);
  }
  else {
    uVar2 = 10;
  }
  *(undefined1 *)(in_EDX + 0x14) = uVar2;
  *(undefined1 *)((int)in_EDX + 0x29) = *(undefined1 *)(in_EAX + 0x10);
  puVar3 = in_EDX;
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(in_EDX + 0x14); iVar1 = iVar1 + 1) {
    *puVar3 = *(undefined2 *)(in_EAX + 0x14);
    puVar3[1] = *(undefined2 *)(in_EAX + 0x18);
    in_EAX = in_EAX + 8;
    puVar3 = puVar3 + 2;
  }
  return;
}

/******************************************************************************
 * Function : sub_0130a3 (Ghidra: FUN_000130a3)
 * Prototype: undefined4 sub_0130a3(void);
 * Address  : 0x130a3 (Size: 3 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x12002
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000130a3(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(short *)(in_EAX + 0xd) == *(short *)(in_EDX + 0xc)) &&
     (*(short *)(in_EAX + 0xf) == *(short *)(in_EDX + 0xe))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0130a6 (Ghidra: FUN_000130a6)
 * Prototype: undefined4 sub_0130a6(void);
 * Address  : 0x130a6 (Size: 31 bytes)
 * Module   : ariadne.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11e00
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000130a6(void)

{
  int in_EAX;
  short *in_EDX;
  
  if ((*(short *)(in_EAX + 0xd) == *in_EDX) && (*(short *)(in_EAX + 0xf) == in_EDX[1])) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_013169 (Ghidra: FUN_00013169)
 * Prototype: undefined4 sub_013169(undefined1 *param_1);
 * Address  : 0x13169 (Size: 496 bytes)
 * Module   : ariadne.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1277d
 * Callees  : 3 -> 0x12a67, 0x1342a, 0xe69fc
 ******************************************************************************/
undefined4 FUN_00013169(undefined1 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int in_EAX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 *extraout_ECX;
  int in_EDX;
  uint uVar14;
  ushort *unaff_EBX;
  undefined8 uVar15;
  
  bVar7 = (uint)*(ushort *)(in_EAX + 0xf) == (uint)unaff_EBX[1] ||
          (int)((uint)*(ushort *)(in_EAX + 0xf) - (uint)unaff_EBX[1]) < 0;
  bVar8 = (uint)*(ushort *)(in_EAX + 0xd) == (uint)*unaff_EBX ||
          (int)((uint)*(ushort *)(in_EAX + 0xd) - (uint)*unaff_EBX) < 0;
  uVar1 = *(ushort *)(in_EDX + 0xe);
  uVar2 = *(ushort *)(in_EAX + 0xf);
  uVar3 = *(ushort *)(in_EAX + 0xd);
  uVar4 = *(ushort *)(in_EDX + 0xc);
  FUN_000e69fc(*(undefined2 *)(in_EAX + 0xd));
  uVar15 = FUN_000e69fc(*(undefined2 *)(in_EDX + 0xe),*(undefined2 *)(in_EAX + 0xf));
  uVar10 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  uVar5 = *(ushort *)(in_EAX + 0xd);
  uVar6 = *(ushort *)(in_EAX + 0xf);
  uVar14 = (uint)*(ushort *)(in_EDX + 0x29 + (uint)*(byte *)(in_EDX + 0x28) * 4);
  uVar11 = (uint)*(ushort *)(in_EDX + 0x2b + (uint)*(byte *)(in_EDX + 0x28) * 4);
  uVar12 = FUN_00012a67();
  if ((uVar12 & 1) == 0) {
    if ((uVar12 & 2) == 0) {
      if ((uVar12 & 4) == 0) {
        return 0;
      }
      iVar13 = (uint)bVar8 * 6 + (uint)bVar7 * 0xc +
               (uint)((int)((ulonglong)uVar15 >> 0x20) < (int)uVar15) * 3;
      *extraout_ECX = *(undefined2 *)(&DAT_0018e91b + iVar13);
      uVar9 = (&DAT_0018e91d)[iVar13];
    }
    else {
      if (((int)(uVar5 - uVar10) <= (int)uVar14) && (uVar14 <= uVar5 + uVar10)) goto LAB_0001328d;
      iVar13 = (uint)((uint)uVar3 == (uint)uVar4 || (int)((uint)uVar3 - (uint)uVar4) < 0) * 3 +
               (uint)bVar7 * 6;
      *extraout_ECX = *(undefined2 *)(&DAT_0018e90f + iVar13);
      uVar9 = (&DAT_0018e911)[iVar13];
    }
  }
  else {
    if (((int)(uVar6 - uVar10) <= (int)uVar11) && (uVar11 <= uVar6 + uVar10)) {
LAB_0001328d:
      FUN_0001342a(param_1);
      return 1;
    }
    iVar13 = (uint)((uint)uVar2 == (uint)uVar1 || (int)((uint)uVar2 - (uint)uVar1) < 0) * 3 +
             (uint)bVar8 * 6;
    *extraout_ECX = *(undefined2 *)(&DAT_0018e903 + iVar13);
    uVar9 = (&DAT_0018e905)[iVar13];
  }
  *param_1 = uVar9;
  return 1;
}

