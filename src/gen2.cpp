/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: gen2.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 15
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_037874 (Ghidra: FUN_00037874)
 * Prototype: longlong sub_037874(void);
 * Address  : 0x37874 (Size: 70 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37964
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00037874(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((((DAT_002ed402 == 0) || (DAT_002e8bee < (uint)(DAT_002ed402 + DAT_002ee894))) &&
      (*(int *)(in_EAX + 0xae1) != -1)) &&
     (*(uint *)(in_EAX + 0xae1) <= DAT_002e8bee - *(int *)(in_EAX + 0xadd))) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0378ba (Ghidra: FUN_000378ba)
 * Prototype: undefined8 sub_0378ba(void);
 * Address  : 0x378ba (Size: 135 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x207b3, 0x3806d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000378ba(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 in_EDX;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  uVar1 = *(ushort *)(in_EAX + 0x27);
  while (iVar3 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar3) {
    iVar4 = iVar4 + (uint)*(ushort *)(&DAT_002ddd29 + iVar3);
    iVar5 = iVar5 + (uint)*(ushort *)(&DAT_002ddd2b + iVar3);
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar3);
  }
  uVar1 = *(ushort *)(in_EAX + 0x2d);
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x68) == 0) {
      iVar5 = iVar5 + (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(uVar2 + 0x1a) * 0xe6];
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,iVar4 - iVar5);
}

/******************************************************************************
 * Function : sub_037941 (Ghidra: FUN_00037941)
 * Prototype: longlong sub_037941(void);
 * Address  : 0x37941 (Size: 35 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37964
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00037941(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(short *)(in_EAX + 0xd) != 0) &&
     ((int)(uint)*(byte *)(in_EAX + 0x919) < *(int *)(in_EAX + 0x105c))) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_037964 (Ghidra: FUN_00037964)
 * Prototype: longlong sub_037964(void);
 * Address  : 0x37964 (Size: 154 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 6 -> 0x3783c, 0x37874, 0x37941, 0x379fe, 0x37d01, 0x3806d
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00037964(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar2;
  uint in_EDX;
  int extraout_EDX;
  undefined8 uVar3;
  
  iVar1 = FUN_0003783c();
  if (iVar1 != 0) {
    FUN_000379fe();
    FUN_00037d01();
    _DAT_002eb9e0 = DAT_002e8bee;
  }
  iVar1 = 0;
  do {
    if (((((&DAT_0019d0c8)[iVar1] & 1) != 0) && ((&DAT_0019d0f4)[iVar1] == '\x01')) &&
       ((&DAT_0019d0f1)[iVar1] != '\x02')) {
      uVar3 = FUN_00037874();
      iVar1 = (int)((ulonglong)uVar3 >> 0x20);
      iVar2 = extraout_ECX;
      if ((int)uVar3 != 0) {
        uVar3 = FUN_00037941();
        iVar1 = (int)((ulonglong)uVar3 >> 0x20);
        iVar2 = extraout_ECX_00;
        if ((int)uVar3 != 0) {
          FUN_0003806d();
          iVar2 = extraout_ECX_01;
          iVar1 = extraout_EDX;
        }
        *(undefined4 *)(iVar2 + 0xadd) = DAT_002e8bee;
      }
      *(undefined4 *)(iVar2 + 0x1485) = 0;
    }
    iVar1 = iVar1 + 0x4ef;
  } while (iVar1 != 0x18ab);
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0379fe (Ghidra: FUN_000379fe)
 * Prototype: undefined8 sub_0379fe(void);
 * Address  : 0x379fe (Size: 771 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x37964, 0x40832
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000379fe(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 in_EDX;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined2 *local_20;
  
  iVar18 = 0;
  iVar11 = 0;
  local_20 = (undefined2 *)&DAT_002e059a;
  do {
    if ((((&DAT_0019d0c8)[iVar11] & 1) != 0) && ((&DAT_0019d0f4)[iVar11] == '\x01')) {
      iVar16 = iVar18 * 0x1508;
      iVar17 = 0;
      puVar1 = &DAT_002e0589 + iVar18 * 0xa84;
      do {
        if (*(char *)(puVar1 + 0x2e1) != '\0') {
          iVar17 = iVar17 + 1;
        }
        puVar1 = (undefined2 *)((int)puVar1 + 1);
      } while (puVar1 != local_20);
      if ((&DAT_002e0ea2)[iVar16] == '\0') {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)(((ulonglong)(ushort)(&DAT_002e1058)[iVar18 * 0xa84] << 8) /
                     (ulonglong)(longlong)(int)(uint)(byte)(&DAT_002e0ea2)[iVar16]);
      }
      iVar3 = (uint)(ushort)(&DAT_002e105c)[iVar18 * 0xa84] -
              (uint)(ushort)(&DAT_002e105a)[iVar18 * 0xa84];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar12 = (uint)(ushort)(&DAT_002e0f14)[iVar18 * 0xa84] -
               (uint)(ushort)(&DAT_002e0f16)[iVar18 * 0xa84];
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      uVar4 = (uint)(ushort)(&DAT_002e0ed2)[iVar18 * 0xa84];
      if (0x7f < uVar4) {
        uVar4 = 0x80;
      }
      if ((int)(&DAT_002e1082)[iVar18 * 0x542] < 30000) {
        iVar5 = (&DAT_002e1082)[iVar18 * 0x542];
      }
      else {
        iVar5 = 30000;
      }
      uVar6 = (uint)(ushort)(&DAT_002e0ec6)[iVar18 * 0xa84];
      if (0x1ff < uVar6) {
        uVar6 = 0x200;
      }
      uVar7 = (uint)(byte)(&DAT_002e0ea1)[iVar16];
      if (0x13 < uVar7) {
        uVar7 = 0x14;
      }
      iVar13 = (int)(&DAT_002e1706)[iVar18 * 0x542] >> 0x1f;
      iVar13 = (int)(((&DAT_002e1706)[iVar18 * 0x542] + iVar13 * -0x100) - (uint)(iVar13 << 7 < 0))
               >> 8;
      if (95999 < iVar13) {
        iVar13 = 96000;
      }
      iVar14 = (int)(&DAT_002e170a)[iVar18 * 0x542] >> 0x1f;
      iVar14 = (int)(((&DAT_002e170a)[iVar18 * 0x542] + iVar14 * -0x100) - (uint)(iVar14 << 7 < 0))
               >> 8;
      if (95999 < iVar14) {
        iVar14 = 96000;
      }
      iVar15 = (int)(&DAT_002e1702)[iVar18 * 0x542] >> 0x1f;
      iVar15 = (int)(((&DAT_002e1702)[iVar18 * 0x542] + iVar15 * -0x100) - (uint)(iVar15 << 7 < 0))
               >> 8;
      if (95999 < iVar15) {
        iVar15 = 96000;
      }
      if (0x27 < iVar3) {
        iVar3 = 0x28;
      }
      if (0x27 < iVar12) {
        iVar12 = 0x28;
      }
      if (0x10 < iVar17) {
        iVar17 = 0x11;
      }
      uVar8 = (uint)(byte)(&DAT_002e0b4c)[iVar16];
      if (3 < uVar8) {
        uVar8 = 4;
      }
      if ((int)(&DAT_002e1a0e)[iVar18 * 0x542] < 10) {
        iVar9 = (&DAT_002e1a0e)[iVar18 * 0x542];
      }
      else {
        iVar9 = 10;
      }
      iVar17 = iVar17 * 0x400 +
               iVar12 * 1000 +
               uVar4 * 4000 + iVar5 * 3 + uVar6 * 0x80 + uVar7 * 400 + iVar13 / 2 + iVar14 / 2 +
               iVar15 / 2 + iVar3 * 1000 + uVar8 * 20000 + iVar9 * 4000;
      uVar4 = (uint)(byte)(&DAT_002e0ea2)[iVar16];
      if (0x7f < uVar4) {
        uVar4 = 0x80;
      }
      iVar16 = iVar17 + uVar4 * -0x200;
      (&DAT_002e1076)[iVar18 * 0x542] = (int)((uVar4 * 0x200 + iVar17) * 1000) / 0x10d290;
      if (iVar16 < 0) {
        iVar16 = 0;
      }
      iVar16 = ((iVar16 * 1000) / 0xfd290) * (0x100 - iVar2);
      iVar17 = iVar16 >> 0x1f;
      (&DAT_002e1072)[iVar18 * 0x542] =
           (int)((iVar16 + iVar17 * -0x100) - (uint)(iVar17 << 7 < 0)) >> 8;
      if ((int)(&DAT_002e1076)[iVar18 * 0x542] < 1) {
        uVar10 = 1;
      }
      else {
        uVar10 = (&DAT_002e1076)[iVar18 * 0x542];
      }
      (&DAT_002e1076)[iVar18 * 0x542] = uVar10;
      if ((int)(&DAT_002e1072)[iVar18 * 0x542] < 1) {
        uVar10 = 1;
      }
      else {
        uVar10 = (&DAT_002e1072)[iVar18 * 0x542];
      }
      (&DAT_002e1072)[iVar18 * 0x542] = uVar10;
      if ((int)(&DAT_002e107a)[iVar18 * 0x542] < (int)(&DAT_002e1076)[iVar18 * 0x542]) {
        (&DAT_002e107a)[iVar18 * 0x542] = (&DAT_002e1076)[iVar18 * 0x542];
      }
    }
    local_20 = local_20 + 0xa84;
    iVar18 = iVar18 + 1;
    iVar11 = iVar11 + 0x4ef;
  } while (iVar18 < 5);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_037d01 (Ghidra: FUN_00037d01)
 * Prototype: undefined8 sub_037d01(void);
 * Address  : 0x37d01 (Size: 234 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x37964, 0x40832
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00037d01(void)

{
  int iVar1;
  undefined4 in_EDX;
  undefined2 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_002e0589;
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((((&DAT_0019d0c8)[iVar1] & 1) != 0) && ((&DAT_0019d0f4)[iVar1] == '\x01')) &&
       (iVar3 < *(int *)((int)puVar2 + 0xaed))) {
      iVar3 = *(int *)((int)puVar2 + 0xae9);
    }
    iVar1 = iVar1 + 0x4ef;
    puVar2 = puVar2 + 0xa84;
  } while (iVar1 != 0x18ab);
  if (DAT_002eb9d8 == -1) {
    puVar2 = &DAT_002e0589;
    iVar3 = 0;
    do {
      if ((((&DAT_0019d0c8)[iVar3] & 1) != 0) && ((&DAT_0019d0f4)[iVar3] == '\x01')) {
        *(undefined4 *)((int)puVar2 + 0xae1) = 0;
      }
      iVar3 = iVar3 + 0x4ef;
      puVar2 = puVar2 + 0xa84;
    } while (iVar3 != 0x18ab);
  }
  else {
    puVar2 = &DAT_002e0589;
    iVar1 = 0;
    do {
      if ((((&DAT_0019d0c8)[iVar1] & 1) != 0) && ((&DAT_0019d0f4)[iVar1] == '\x01')) {
        *(int *)((int)puVar2 + 0xae1) = (DAT_002eb9d8 * iVar3) / *(int *)((int)puVar2 + 0xae9);
      }
      iVar1 = iVar1 + 0x4ef;
      puVar2 = puVar2 + 0xa84;
    } while (iVar1 != 0x18ab);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_could_get_random_entrance_037deb (Ghidra: FUN_00037deb)
 * Prototype: undefined4 dk_could_get_random_entrance_037deb(void);
 * Address  : 0x37deb (Size: 59 bytes)
 * Module   : gen2.cpp [direct_file_string_xref]
 * OrigLine : gen2.cpp:248 ("COULD NOT GET A RANDOM ENTRANCE")
 * Naming   : String 'COULD NOT GET A RANDOM ENTRANCE'
 * Callers  : 1 -> 0x3806d
 * Callees  : 3 -> 0x26b04, 0xca9d0, 0xddaf0
 * Strings  :
 *   - 0x164860: "gen2.cpp"
 *   - 0x164840: "COULD NOT GET A RANDOM ENTRANCE"
 ******************************************************************************/
undefined4 FUN_00037deb(void)

{
  int iVar1;
  
  iVar1 = FUN_000ca9d0();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("gen2.cpp", line 248, "COULD NOT GET A RANDOM ENTRANCE") */
  }
  else {
    iVar1 = FUN_00026b04();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_037e26 (Ghidra: FUN_00037e26)
 * Prototype: undefined4 sub_037e26(void);
 * Address  : 0x37e26 (Size: 133 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37f3b
 * Callees  : 1 -> 0xd124c
 ******************************************************************************/
undefined4 FUN_00037e26(void)

{
  byte bVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  
  iVar3 = in_EDX * 0xe6;
  if (((&DAT_002e91a9)[iVar3] != '\0') &&
     (bVar1 = (&DAT_002e91ac)[iVar3], iVar2 = FUN_000d124c(), iVar2 < (int)(uint)bVar1)) {
    return 0;
  }
  if (((&DAT_002e91aa)[iVar3] != '\0') &&
     (bVar1 = (&DAT_002e91ad)[iVar3], iVar2 = FUN_000d124c(), iVar2 < (int)(uint)bVar1)) {
    return 0;
  }
  if (((&DAT_002e91ab)[iVar3] != '\0') &&
     (bVar1 = (&DAT_002e91ae)[iVar3], iVar3 = FUN_000d124c(), iVar3 < (int)(uint)bVar1)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_037eab (Ghidra: FUN_00037eab)
 * Prototype: void sub_037eab(void);
 * Address  : 0x37eab (Size: 57 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7fac8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00037eab(void)

{
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  if ((unaff_EBX == 0) || (*(int *)(&DAT_002ed35d + in_EAX * 4) != -1)) {
    if ((in_EDX == -1) || ((in_EDX == 0 || (*(int *)(&DAT_002ed35d + in_EAX * 4) == -1)))) {
      *(int *)(&DAT_002ed35d + in_EAX * 4) = in_EDX;
      return;
    }
    *(int *)(&DAT_002ed35d + in_EAX * 4) = *(int *)(&DAT_002ed35d + in_EAX * 4) + in_EDX;
  }
  return;
}

/******************************************************************************
 * Function : dk_trying_remove_an_unavailable_037ee4 (Ghidra: FUN_00037ee4)
 * Prototype: longlong dk_trying_remove_an_unavailable_037ee4(void);
 * Address  : 0x37ee4 (Size: 55 bytes)
 * Module   : gen2.cpp [direct_file_string_xref]
 * OrigLine : gen2.cpp:307 ("Trying to remove an unavailable creature from the creature pool")
 * Naming   : String 'Trying to remove an unavailable creature from the creature p'
 * Callers  : 2 -> 0x3806d, 0x67483
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1648a9: "gen2.cpp"
 *   - 0x164869: "Trying to remove an unavailable creature from the creature pool"
 ******************************************************************************/
longlong FUN_00037ee4(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (*(int *)(&DAT_002ed35d + in_EAX * 4) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("gen2.cpp", line 307, "Trying to remove an unavailable creature from the creature pool") */
    return (ulonglong)in_EDX << 0x20;
  }
  if (0 < *(int *)(&DAT_002ed35d + in_EAX * 4)) {
    *(int *)(&DAT_002ed35d + in_EAX * 4) = *(int *)(&DAT_002ed35d + in_EAX * 4) + -1;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_037f1b (Ghidra: FUN_00037f1b)
 * Prototype: void sub_037f1b(void);
 * Address  : 0x37f1b (Size: 32 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37f61
 * Callees  : 1 -> 0x67290
 ******************************************************************************/
void FUN_00037f1b(void)

{
  FUN_00067290();
  return;
}

/******************************************************************************
 * Function : sub_037f3b (Ghidra: FUN_00037f3b)
 * Prototype: undefined4 sub_037f3b(void);
 * Address  : 0x37f3b (Size: 38 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37f61
 * Callees  : 1 -> 0x37e26
 ******************************************************************************/
undefined4 FUN_00037f3b(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  if ((*(int *)(&DAT_002ed35d + in_EDX * 4) != 0) && (*(char *)(in_EDX + 4000 + in_EAX) != '\0')) {
    iVar1 = FUN_00037e26();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_creature_available_but_creature_037f61 (Ghidra: FUN_00037f61)
 * Prototype: undefined8 dk_creature_available_but_creature_037f61(void);
 * Address  : 0x37f61 (Size: 268 bytes)
 * Module   : gen2.cpp [direct_file_string_xref]
 * OrigLine : gen2.cpp:415 ("CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?"); gen2.cpp:435 ("HOW DID I GET THIS FAR!")
 * Naming   : String 'CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?'
 * Callers  : 1 -> 0x3806d
 * Callees  : 3 -> 0x37f1b, 0x37f3b, 0xddaf0
 * Strings  :
 *   - 0x1648e3: "gen2.cpp"
 *   - 0x164904: "gen2.cpp"
 *   - 0x1648b2: "CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?"
 *   - 0x1648ec: "HOW DID I GET THIS FAR!"
 ******************************************************************************/
undefined8 FUN_00037f61(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int iVar2;
  uint uVar3;
  uint auStack_a0 [32];
  uint local_20;
  int local_1c;
  
  iVar2 = 1;
  uVar3 = 0;
  local_1c = 0;
  do {
    iVar1 = FUN_00037f3b();
    if (iVar1 == 0) {
      *(undefined4 *)((int)auStack_a0 + extraout_ECX) = 0;
    }
    else {
      local_20 = (uint)*(byte *)(iVar2 + 0x17bfcc);
      iVar1 = FUN_00037f1b();
      iVar1 = iVar1 + local_20;
      local_1c = local_1c + 1;
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      uVar3 = uVar3 + iVar1;
      *(uint *)((int)auStack_a0 + extraout_ECX_00) = uVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if (local_1c != 0) {
    if (uVar3 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("gen2.cpp", line 415, "CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?") */
    }
    else {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      iVar2 = 1;
      for (iVar1 = 4; iVar1 < 0x80; iVar1 = iVar1 + 4) {
        if ((*(int *)((int)auStack_a0 + iVar1) != 0) &&
           ((int)(DAT_002e8bf6 % uVar3) < *(int *)((int)auStack_a0 + iVar1))) goto LAB_00037cfa;
        iVar2 = iVar2 + 1;
      }
      FUN_000ddaf0(); /* LbErrorLog("gen2.cpp", line 435, "HOW DID I GET THIS FAR!") */
    }
  }
  iVar2 = 0;
LAB_00037cfa:
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_03806d (Ghidra: FUN_0003806d)
 * Prototype: longlong sub_03806d(void);
 * Address  : 0x3806d (Size: 285 bytes)
 * Module   : gen2.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37964
 * Callees  : 6 -> 0x274ad, 0x378ba, 0x37deb, 0x37ee4, 0x37f61, 0x51374
 ******************************************************************************/
longlong FUN_0003806d(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 in_EDX;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  uStack_10 = 0x38077;
  auStack_c[0] = in_EDX;
  iVar1 = FUN_00037f61();
  puVar3 = auStack_c;
  if (iVar1 != 0) {
    uStack_10 = 0x3808e;
    uVar4 = FUN_000378ba();
    if (*(int *)(extraout_ECX + 0xaf9) <
        (int)(uint)*(ushort *)(&DAT_002e91a5 + (int)((ulonglong)uVar4 >> 0x20))) {
      puVar3 = auStack_c;
      if ((int)*(char *)(extraout_ECX + 0xe9f) ==
          (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        uStack_10 = 0x38184;
        FUN_00051374();
        puVar3 = auStack_c;
      }
    }
    else if ((int)uVar4 < 1) {
      iVar1 = extraout_ECX;
      if ((int)uVar4 == 0) {
        uStack_10 = 0x380db;
        iVar2 = FUN_00037deb();
        iVar1 = extraout_ECX_00;
        if (iVar2 != 0) {
          uStack_10 = 0x380e6;
          FUN_00037ee4();
          iVar1 = extraout_ECX_01;
        }
      }
      if ((int)*(char *)(iVar1 + 0xe9f) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
      {
        uStack_10 = 0x38131;
        FUN_00051374();
        iVar1 = extraout_ECX_02;
      }
      puVar3 = auStack_c;
      if (*(short *)(iVar1 + 0x27) != 0) {
        uStack_10 = 0;
        FUN_000274ad();
        puVar3 = &uStack_10;
      }
    }
    else {
      uStack_10 = 0x380b3;
      iVar1 = FUN_00037deb();
      puVar3 = auStack_c;
      if (iVar1 != 0) {
        uStack_10 = 0x380c2;
        FUN_00037ee4();
        return CONCAT44(auStack_c[0],1);
      }
    }
  }
  return (ulonglong)*puVar3 << 0x20;
}

/******************************************************************************
 * Function : sub_03818c (Ghidra: FUN_0003818c)
 * Prototype: undefined8 sub_03818c(void);
 * Address  : 0x3818c (Size: 134 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x63b6d, 0x64ae7, 0xcd85c, 0xcd9b0, 0xcdcd0, 0xd0f50
 ******************************************************************************/
undefined8 FUN_0003818c(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar1 + 0x80) = 0;
  iVar3 = FUN_000d0f50();
  if (((iVar3 != 0) && (*(short *)(iVar3 + 10) == 0x10)) &&
     (*(char *)(iVar3 + 3) == *(char *)(in_EAX + 6))) {
    cVar2 = FUN_000cd85c();
    if (cVar2 != '\0') {
      FUN_00064ae7();
      iVar3 = FUN_000cdcd0();
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x2d) = *(undefined4 *)(in_EAX + 0xd);
        *(undefined2 *)(iVar1 + 0x31 + (uint)bVar5 * -8) =
             *(undefined2 *)(in_EAX + 0x11 + (uint)bVar5 * -8);
      }
      uVar4 = 1;
      goto LAB_0003820c;
    }
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  uVar4 = 0;
LAB_0003820c:
  return CONCAT44(in_EDX,uVar4);
}

