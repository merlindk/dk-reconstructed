/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: impset.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 70
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_03aef2 (Ghidra: FUN_0003aef2)
 * Prototype: undefined4 sub_03aef2(void);
 * Address  : 0x3aef2 (Size: 89 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x3cf87, 0x3d155, 0x3d2d5, 0x3d37a, 0x3d3f3, 0x3e493, 0x3f3f7, 0x3f42b, 0x3f4f4, 0x4ab11
 * Callees  : 2 -> 0x3ae40, 0x3f80c
 ******************************************************************************/
undefined4 FUN_0003aef2(void)

{
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if ((&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] == '\n') {
    iVar1 = FUN_0003f80c(in_EDX * 3 + 1);
    if (iVar1 != 0) {
      iVar1 = FUN_0003ae40();
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03af4b (Ghidra: FUN_0003af4b)
 * Prototype: undefined4 sub_03af4b(void);
 * Address  : 0x3af4b (Size: 341 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3cd63, 0x3cee2, 0x3d02c, 0x3d0cf, 0x3d3f3, 0x3e493, 0x3f4c0, 0x3f4f4
 * Callees  : 2 -> 0x3ae99, 0x3f80c
 ******************************************************************************/
undefined4 FUN_0003af4b(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  int iVar5;
  
  iVar1 = in_EDX * 3 + 1;
  uVar3 = (uint)*(char *)(in_EAX + 6);
  uVar2 = (uint)((&DAT_002d33ca)
                 [((&DAT_0019033b)[iVar1] + (&DAT_0019033f)[unaff_EBX * 3] * 0x55) * 6] & 7);
  iVar5 = unaff_EBX * 3 + 1;
  if (uVar2 != uVar3) {
    if (((((uVar2 < DAT_002eb542) && (uVar4 = (uint)DAT_002eb543, uVar2 != uVar4)) &&
         (uVar3 != uVar4)) &&
        ((((uint)(byte)(&DAT_0019d0f2)[uVar2 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f)) != 0 &&
         (uVar3 != uVar4)))) &&
       ((uVar2 != uVar4 &&
        (((uint)(byte)(&DAT_0019d0f2)[uVar3 * 0x4ef] &
         1 << ((&DAT_002d33ca)[((&DAT_0019033b)[iVar1] + (&DAT_0019033f)[unaff_EBX * 3] * 0x55) * 6]
              & 7)) != 0)))) {
      return 0;
    }
    if ((((&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] == '\v') ||
        (((uint)(byte)(&DAT_002d33c8)[((&DAT_0019033b)[iVar1] + (&DAT_0019033b)[iVar5] * 0x55) * 6]
          * 0x45 != 0 &&
         (*(short *)(&DAT_002ddd25 +
                    (uint)(byte)(&DAT_002d33c8)
                                [((&DAT_0019033b)[iVar1] + (&DAT_0019033b)[iVar5] * 0x55) * 6] *
                    0x45) != 7)))) &&
       (((*(uint *)((int)&DAT_00279203 + (iVar5 * 0x100 + iVar1) * 5 + 1) >> 0x1c &
         1 << (*(byte *)(in_EAX + 6) & 0x1f)) != 0 &&
        ((iVar1 = FUN_0003f80c(), iVar1 != 0 && (iVar1 = FUN_0003ae99(), iVar1 == 0)))))) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03b0a0 (Ghidra: FUN_0003b0a0)
 * Prototype: undefined4 sub_03b0a0(void);
 * Address  : 0x3b0a0 (Size: 140 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3d9f3, 0x3db27, 0x3dc2a, 0x3dd25, 0x3de04, 0x3e493, 0x3f12c, 0x4bf40
 * Callees  : 2 -> 0x3f80c, 0x40160
 ******************************************************************************/
undefined4 FUN_0003b0a0(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if ((((&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] == '\x02') ||
      ((&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] == '\x03')) &&
     ((*(uint *)((int)&DAT_00279203 + ((unaff_EBX * 3 + 1) * 0x100 + in_EDX * 3 + 1) * 5 + 1) >>
       0x1c & 1 << (*(byte *)(in_EAX + 6) & 0x1f)) != 0)) {
    iVar1 = FUN_0003f80c();
    if (iVar1 != 0) {
      iVar1 = FUN_00040160();
      if (iVar1 == -1) {
        return 1;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03b12c (Ghidra: FUN_0003b12c)
 * Prototype: uint sub_03b12c(void);
 * Address  : 0x3b12c (Size: 83 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e493
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0003b12c(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  int unaff_EBX;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((*(char *)(uVar1 + 0x1f) == '\x05') && (*(char *)(uVar1 + 6) != *(char *)(in_EAX + 6))) &&
        (*(char *)(uVar1 + 7) == 'C')) && ((*(byte *)(uVar1 + 1) & 1) == 0)) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_03b17f (Ghidra: FUN_0003b17f)
 * Prototype: uint sub_03b17f(void);
 * Address  : 0x3b17f (Size: 99 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e493
 * Callees  : 1 -> 0x81e5c
 ******************************************************************************/
uint FUN_0003b17f(void)

{
  int in_EDX;
  uint uVar1;
  int unaff_EBX;
  undefined8 uVar2;
  
  uVar1 = (&DAT_001ae9fc)
          [(*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb]
  ;
  do {
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((*(char *)(uVar1 + 0x1f) == '\x04') && ((*(byte *)(uVar1 + 1) & 1) == 0)) &&
        (*(char *)(uVar1 + 7) == '\x02')) && (*(char *)(uVar1 + 0x14) == '\0')) {
      uVar2 = FUN_00081e5c();
      uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 != 0) {
        return uVar1;
      }
    }
    uVar1 = (&DAT_001ae9fc)[*(ushort *)(uVar1 + 2)];
  } while( true );
}

/******************************************************************************
 * Function : sub_03b1e2 (Ghidra: FUN_0003b1e2)
 * Prototype: byte * sub_03b1e2(void);
 * Address  : 0x3b1e2 (Size: 129 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e493
 * Callees  : 2 -> 0xc6574, 0xc688c
 ******************************************************************************/
byte * FUN_0003b1e2(void)

{
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  int in_EDX;
  uint uVar2;
  byte *pbVar3;
  int unaff_EBX;
  undefined8 uVar4;
  
  if ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[unaff_EBX] * 0x55 + (&DAT_0019033b)[in_EDX]) * 6] & 7)
      == (int)*(char *)(in_EAX + 6)) {
    uVar2 = (*(uint *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5 + 1) & 0x3fffff) >> 0xb
    ;
    while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar2]) {
      uVar4 = FUN_000c6574();
      pbVar3 = (byte *)((ulonglong)uVar4 >> 0x20);
      iVar1 = extraout_ECX;
      if ((int)uVar4 == 0) {
        uVar4 = FUN_000c688c();
        pbVar3 = (byte *)((ulonglong)uVar4 >> 0x20);
        iVar1 = extraout_ECX_00;
        if ((int)uVar4 != 0) goto LAB_0003b24c;
      }
      else {
LAB_0003b24c:
        if ((pbVar3[6] != *(byte *)(iVar1 + 6)) && ((*pbVar3 & 0x80) == 0)) {
          return pbVar3;
        }
      }
      uVar2 = (uint)*(ushort *)(pbVar3 + 2);
    }
  }
  return (byte *)0x0;
}

/******************************************************************************
 * Function : sub_03b263 (Ghidra: FUN_0003b263)
 * Prototype: int sub_03b263(void);
 * Address  : 0x3b263 (Size: 93 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e493
 * Callees  : 1 -> 0xc65c8
 ******************************************************************************/
int FUN_0003b263(void)

{
  int extraout_ECX;
  int in_EDX;
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  undefined8 uVar3;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    if ((&DAT_001ae9fc)[uVar1] <= DAT_001ae9fc) {
      return 0;
    }
    uVar3 = FUN_000c65c8();
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 != 0) &&
       (((*(char *)(iVar2 + 6) == *(char *)(extraout_ECX + 6) ||
         ((int)*(char *)(iVar2 + 6) == (uint)DAT_002eb543)) && ((*(byte *)(iVar2 + 1) & 1) == 0))))
    break;
    uVar1 = (uint)*(ushort *)(iVar2 + 2);
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_03b30e (Ghidra: FUN_0003b30e)
 * Prototype: uint sub_03b30e(void);
 * Address  : 0x3b30e (Size: 78 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e493
 * Callees  : 1 -> 0x3f98b
 ******************************************************************************/
uint FUN_0003b30e(void)

{
  int in_EAX;
  uint extraout_ECX;
  uint in_EDX;
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_002e6eee;
  do {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (((*(byte *)(uVar1 + 0x1a) == in_EDX) && (*(char *)(uVar1 + 6) == *(char *)(in_EAX + 6))) &&
       (*(char *)(uVar1 + 0x13) == '\0')) {
      uVar2 = FUN_0003f98b();
      uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
      in_EDX = extraout_ECX;
      if ((int)uVar2 == 0) {
        return uVar1;
      }
    }
    uVar1 = (uint)*(ushort *)(uVar1 + 0x67);
  } while( true );
}

/******************************************************************************
 * Function : sub_03b35c (Ghidra: FUN_0003b35c)
 * Prototype: uint sub_03b35c(void);
 * Address  : 0x3b35c (Size: 69 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e493
 * Callees  : 1 -> 0xc57a4
 ******************************************************************************/
uint FUN_0003b35c(void)

{
  int in_EDX;
  uint uVar1;
  int unaff_EBX;
  undefined8 uVar2;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  do {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x1f) == '\x01') {
      uVar2 = FUN_000c57a4();
      uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 != 0) {
        return uVar1;
      }
    }
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  } while( true );
}

/******************************************************************************
 * Function : sub_03bcbe (Ghidra: FUN_0003bcbe)
 * Prototype: undefined4 sub_03bcbe(void);
 * Address  : 0x3bcbe (Size: 243 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 3 -> 0x3b429, 0x81e5c, 0xca7ac
 ******************************************************************************/
undefined4 FUN_0003bcbe(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_EDX;
  uint uVar3;
  int local_18;
  
  iVar1 = FUN_000ca7ac();
  uVar3 = DAT_002e6ed6;
  local_18 = in_EDX;
  if (*(short *)(in_EAX + 0x21) != 0) {
    for (; ((uVar3 = (&DAT_001ae9fc)[uVar3], *(int *)(in_EAX + 0x116f) < 0x40 && (local_18 != 0)) &&
           (DAT_001ae9fc < uVar3)); uVar3 = (uint)*(ushort *)(uVar3 + 0x67)) {
      if ((((*(byte *)(uVar3 + 1) & 1) == 0) && (*(char *)(uVar3 + 7) == '\x02')) &&
         ((*(char *)(uVar3 + 0x14) == '\0' && (iVar2 = FUN_00081e5c(), iVar2 != 0)))) {
        if (iVar1 == 0) {
          if ((int)*(char *)(in_EAX + 0xe9f) ==
              (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
            FUN_00051374();
          }
          return 0;
        }
        if ((*(uint *)((int)&DAT_00279203 +
                      (uint)CONCAT11(*(undefined1 *)(uVar3 + 0x10),*(undefined1 *)(uVar3 + 0xe)) * 5
                      + 1) >> 0x1c & 1 << (*(byte *)(in_EAX + 0xe9f) & 0x1f)) != 0) {
          local_18 = local_18 + -1;
          FUN_0003b429();
        }
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03bdb1 (Ghidra: FUN_0003bdb1)
 * Prototype: undefined4 sub_03bdb1(void);
 * Address  : 0x3bdb1 (Size: 276 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 5 -> 0x3b429, 0x51374, 0xc6574, 0xc688c, 0xca65c
 ******************************************************************************/
undefined4 FUN_0003bdb1(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  byte *extraout_ECX;
  byte *pbVar3;
  uint uVar4;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  int in_EDX;
  
  iVar1 = FUN_000ca65c();
  uVar4 = DAT_002e6ec6;
  if (*(short *)(in_EAX + 0x11) != 0) {
    while (((*(int *)(in_EAX + 0x116f) < 0x40 && (in_EDX != 0)) &&
           (DAT_001ae9fc < (&DAT_001ae9fc)[uVar4]))) {
      iVar2 = FUN_000c6574();
      pbVar3 = extraout_ECX_00;
      if (((iVar2 != 0) || (iVar2 = FUN_000c688c(), pbVar3 = extraout_ECX_01, iVar2 != 0)) &&
         ((pbVar3[6] != *(byte *)(in_EAX + 0xe9f) && ((*pbVar3 & 0x80) == 0)))) {
        if ((uint)((&DAT_002d33ca)
                   [((&DAT_0019033b)[pbVar3[0xe]] + (&DAT_0019033b)[pbVar3[0x10]] * 0x55) * 6] & 7)
            == (int)*(char *)(in_EAX + 0xe9f)) {
          if (iVar1 == 0) {
            if ((int)*(char *)(in_EAX + 0xe9f) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
              FUN_00051374();
            }
            return 0;
          }
          in_EDX = in_EDX + -1;
          FUN_0003b429((&DAT_0019033b)[pbVar3[0x10]] * 0x55,iVar1,(uint)pbVar3[0xe]);
          pbVar3 = extraout_ECX;
        }
      }
      uVar4 = (uint)*(ushort *)(pbVar3 + 0x67);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03bec5 (Ghidra: FUN_0003bec5)
 * Prototype: undefined4 sub_03bec5(void);
 * Address  : 0x3bec5 (Size: 132 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3bf49
 * Callees  : 1 -> 0x3b429
 ******************************************************************************/
undefined4 FUN_0003bec5(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  
  uVar1 = DAT_002e6ec6;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x1a) == (&DAT_00191160)[*(byte *)(in_EDX + 0x1a)]) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 0x67);
  }
  if ((uint)((&DAT_002d33ca)
             [((&DAT_0019033b)[*(byte *)(uVar1 + 0xe)] +
              (&DAT_0019033b)[*(byte *)(uVar1 + 0x10)] * 0x55) * 6] & 7) ==
      (int)*(char *)(in_EAX + 0xe9f)) {
    FUN_0003b429();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03bf49 (Ghidra: FUN_0003bf49)
 * Prototype: undefined4 sub_03bf49(void);
 * Address  : 0x3bf49 (Size: 91 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 1 -> 0x3bec5
 ******************************************************************************/
undefined4 FUN_0003bf49(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int in_EDX;
  uint uVar2;
  
  for (uVar2 = DAT_002e6eee;
      ((uVar2 = (&DAT_001ae9fc)[uVar2], *(int *)(in_EAX + 0x116f) < 0x40 && (in_EDX != 0)) &&
      (DAT_001ae9fc < uVar2)); uVar2 = (uint)*(ushort *)(uVar2 + 0x67)) {
    if ((*(char *)(uVar2 + 0x13) == '\0') && (*(char *)(uVar2 + 6) == *(char *)(in_EAX + 0xe9f))) {
      iVar1 = FUN_0003bec5();
      in_EAX = extraout_ECX;
      if (iVar1 != 0) {
        in_EDX = in_EDX + -1;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03bfa4 (Ghidra: FUN_0003bfa4)
 * Prototype: undefined8 sub_03bfa4(void);
 * Address  : 0x3bfa4 (Size: 242 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 4 -> 0x3b429, 0xc65c8, 0xca65c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_0003bfa4(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 in_EDX;
  
  iVar1 = FUN_000ca65c();
  if ((*(short *)(in_EAX + 0x1b) != 0) && (uVar3 = DAT_002e6ec6, iVar1 != 0)) {
    while ((*(int *)(in_EAX + 0x116f) < 0x40 && (DAT_001ae9fc < (&DAT_001ae9fc)[uVar3]))) {
      iVar2 = FUN_000c65c8();
      iVar1 = extraout_ECX;
      if ((((iVar2 != 0) && ((*(byte *)(extraout_ECX + 1) & 1) == 0)) &&
          ((*(char *)(extraout_ECX + 6) == *(char *)(in_EAX + 0xe9f) ||
           ((int)*(char *)(extraout_ECX + 6) == (uint)DAT_002eb543)))) &&
         (((uint)((&DAT_002d33ca)
                  [((&DAT_0019033b)[*(byte *)(extraout_ECX + 0xe)] +
                   (&DAT_0019033b)[*(byte *)(extraout_ECX + 0x10)] * 0x55) * 6] & 7) ==
           (int)*(char *)(in_EAX + 0xe9f) &&
          ((iVar2 = FUN_000d0f50(), iVar2 == 0 ||
           (iVar1 = extraout_ECX_00, *(short *)(iVar2 + 10) != 8)))))) {
        FUN_0003b429();
        iVar1 = extraout_ECX_01;
      }
      uVar3 = (uint)*(ushort *)(iVar1 + 0x67);
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03c096 (Ghidra: FUN_0003c096)
 * Prototype: undefined4 sub_03c096(void);
 * Address  : 0x3c096 (Size: 232 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 2 -> 0x3b429, 0x3fc88
 ******************************************************************************/
undefined4 FUN_0003c096(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int in_EDX;
  int iVar3;
  int local_1c;
  int local_18;
  
  iVar3 = in_EAX;
  local_1c = in_EDX;
  for (local_18 = 0;
      ((*(int *)(in_EAX + 0x116f) < 0x40 && (local_1c != 0)) &&
      (local_18 < (int)(uint)*(ushort *)(in_EAX + 0xaf7))); local_18 = local_18 + 1) {
    if ((*(char *)(iVar3 + 0xb0b) != '\0') && (*(char *)(iVar3 + 0xb0b) != '\x03')) {
      uVar1 = (uint)*(ushort *)(iVar3 + 0xb0c);
      if ((*(uint *)((int)&DAT_00279203 + (((int)uVar1 >> 8) * 0x100 + uVar1 % 0x100) * 5 + 1) >>
           0x1c & 1 << (*(byte *)(in_EAX + 0xe9f) & 0x1f)) != 0) {
        iVar2 = FUN_0003fc88(uVar1,(&DAT_0019033b)[(int)uVar1 >> 8],(&DAT_0019033b)[uVar1 % 0x100]);
        if (iVar2 != 0) {
          local_1c = local_1c + -1;
          FUN_0003b429();
        }
      }
    }
    iVar3 = iVar3 + 3;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03c17e (Ghidra: FUN_0003c17e)
 * Prototype: undefined8 sub_03c17e(void);
 * Address  : 0x3c17e (Size: 267 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 3 -> 0x3b429, 0xc57a4, 0xca8c0
 ******************************************************************************/
undefined8 FUN_0003c17e(void)

{
  byte *pbVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  uint uVar3;
  
  iVar2 = FUN_000ca8c0();
  uVar3 = DAT_002e6ec6;
  if (iVar2 != 0) {
    while ((pbVar1 = (&DAT_001ae9fc)[uVar3], *(int *)(in_EAX + 0x116f) < 0x40 &&
           (DAT_001ae9fc < pbVar1))) {
      if ((pbVar1[0x1f] == 1) &&
         ((((*pbVar1 & 0x10) == 0 && ((pbVar1[1] & 2) == 0)) && (iVar2 = FUN_000c57a4(), iVar2 != 0)
          ))) {
        if (((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(pbVar1[0x10],pbVar1[0xe]) * 5 + 1) >>
              0x1c & 1 << (*(byte *)(in_EAX + 0xe9f) & 0x1f)) != 0) &&
           (((uint)((&DAT_002d33ca)
                    [((&DAT_0019033b)[pbVar1[0xe]] + (&DAT_0019033b)[pbVar1[0x10]] * 0x55) * 6] & 7)
             == (int)*(char *)(in_EAX + 0xe9f) ||
            (((&DAT_002d33ca)
              [((&DAT_0019033b)[pbVar1[0xe]] + (&DAT_0019033b)[pbVar1[0x10]] * 0x55) * 6] & 7) ==
             DAT_002eb543)))) {
          FUN_0003b429();
        }
      }
      uVar3 = (uint)*(ushort *)(pbVar1 + 0x67);
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03c289 (Ghidra: FUN_0003c289)
 * Prototype: longlong sub_03c289(void);
 * Address  : 0x3c289 (Size: 145 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3df64, 0x3e286
 * Callees  : 10 -> 0x3b3e9, 0x3b643, 0x3bb5e, 0x3bb93, 0x3bcbe, 0x3bdb1, 0x3bf49, 0x3bfa4, 0x3c096, 0x3c17e
 ******************************************************************************/
longlong FUN_0003c289(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (0x7f < (uint)(DAT_002e8bee - *(int *)(&DAT_002e16f4 + *(char *)(in_EAX + 6) * 0x1508))) {
    FUN_0003b3e9();
    FUN_0003bb93();
    FUN_0003bcbe();
    FUN_0003bdb1();
    FUN_0003bf49();
    FUN_0003c096();
    FUN_0003b643();
    FUN_0003c17e();
    FUN_0003bfa4();
    FUN_0003bb5e();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_03c31c (Ghidra: FUN_0003c31c)
 * Prototype: undefined4 sub_03c31c(void);
 * Address  : 0x3c31c (Size: 203 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c3e7
 * Callees  : 2 -> 0x3f8e8, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003c31c(void)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int in_EDX;
  uint uVar5;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  cVar1 = (&DAT_00191160)[*(byte *)(in_EDX + 0x1a)];
  uVar5 = DAT_002e6ec6;
  while( true ) {
    uVar5 = (&DAT_001ae9fc)[uVar5];
    if (uVar5 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((*(char *)(uVar5 + 0x1a) == cVar1) &&
         ((uint)((&DAT_002d33ca)
                 [((&DAT_0019033b)[*(byte *)(uVar5 + 0xe)] +
                  (&DAT_0019033b)[*(byte *)(uVar5 + 0x10)] * 0x55) * 6] & 7) ==
          (int)*(char *)(in_EAX + 6))) && ((*(byte *)(uVar5 + 1) & 1) == 0)) &&
       ((iVar4 = FUN_0003f8e8(), iVar4 == 0 && (sVar3 = FUN_000b3b58(), sVar3 != 0)))) break;
    uVar5 = (uint)*(ushort *)(uVar5 + 0x67);
  }
  *(undefined1 *)(in_EAX + 8) = 0xb;
  *(undefined2 *)(iVar2 + 0x72) = *(undefined2 *)(uVar5 + 0x1b);
  *(undefined2 *)(iVar2 + 0x70) = *(undefined2 *)(in_EDX + 0x1b);
  return 1;
}

/******************************************************************************
 * Function : sub_03c3e7 (Ghidra: FUN_0003c3e7)
 * Prototype: undefined4 sub_03c3e7(void);
 * Address  : 0x3c3e7 (Size: 113 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 3 -> 0x3c31c, 0x3f98b, 0xdc440
 ******************************************************************************/
undefined4 FUN_0003c3e7(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  uint uVar2;
  
  uVar2 = DAT_002e6eee;
  do {
    uVar2 = (&DAT_001ae9fc)[uVar2];
    if (uVar2 <= DAT_001ae9fc) {
      return 0;
    }
    if ((*(char *)(uVar2 + 0x13) == '\0') && (*(char *)(uVar2 + 6) == *(char *)(in_EAX + 6))) {
      if (-1 < in_EDX) {
        iVar1 = FUN_000dc440();
        in_EAX = extraout_ECX;
        if (in_EDX <= iVar1) goto LAB_0003c3fa;
      }
      iVar1 = FUN_0003f98b();
      in_EAX = extraout_ECX_00;
      if (iVar1 == 0) {
        iVar1 = FUN_0003c31c();
        in_EAX = extraout_ECX_01;
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
LAB_0003c3fa:
    uVar2 = (uint)*(ushort *)(uVar2 + 0x67);
  } while( true );
}

/******************************************************************************
 * Function : sub_03c458 (Ghidra: FUN_0003c458)
 * Prototype: undefined8 sub_03c458(void);
 * Address  : 0x3c458 (Size: 226 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 5 -> 0x3b2c0, 0x3f8e8, 0xb3b58, 0xc659c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_0003c458(void)

{
  int iVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_EDX;
  uint uVar7;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = FUN_000d0f50();
  if (((iVar3 != 0) && (*(short *)(iVar3 + 10) == 8)) &&
     (uVar7 = DAT_002e6ec6, *(char *)(iVar3 + 3) == *(char *)(in_EAX + 6))) {
    for (; uVar7 = (&DAT_001ae9fc)[uVar7], DAT_001ae9fc < uVar7;
        uVar7 = (uint)*(ushort *)(uVar7 + 0x67)) {
      iVar4 = FUN_000c659c();
      if ((((iVar4 != 0) && ((*(byte *)(uVar7 + 1) & 1) == 0)) &&
          ((iVar4 = FUN_000d0f50(), iVar4 == iVar3 &&
           ((iVar4 = FUN_0003b2c0(), iVar4 != 0 && (iVar5 = FUN_0003f8e8(), iVar5 == 0)))))) &&
         (sVar2 = FUN_000b3b58(), sVar2 != 0)) {
        *(undefined1 *)(in_EAX + 8) = 0xb;
        *(undefined2 *)(iVar1 + 0x72) = *(undefined2 *)(uVar7 + 0x1b);
        *(undefined2 *)(iVar1 + 0x70) = *(undefined2 *)(iVar4 + 0x1b);
        uVar6 = 1;
        goto LAB_0003d776;
      }
    }
  }
  uVar6 = 0;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar6);
}

/******************************************************************************
 * Function : sub_03c53a (Ghidra: FUN_0003c53a)
 * Prototype: undefined4 sub_03c53a(void);
 * Address  : 0x3c53a (Size: 552 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 10 -> 0x274ad, 0x3b2c0, 0x3f8e8, 0x51374, 0xb3b58, 0xc65c8, 0xca65c, 0xca6bc, 0xd0f50, 0xdc440
 ******************************************************************************/
undefined4 FUN_0003c53a(void)

{
  int iVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  uint uVar4;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(&DAT_002e05a4 + *(char *)(in_EAX + 6) * 0x1508) != 0) {
    for (uVar4 = (&DAT_001ae9fc)[DAT_002e6ec6]; DAT_001ae9fc < uVar4;
        uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 0x67)]) {
      iVar3 = FUN_000c65c8();
      if ((((iVar3 != 0) && ((*(byte *)(uVar4 + 1) & 1) == 0)) &&
          ((uint)((&DAT_002d33ca)
                  [((&DAT_0019033b)[*(byte *)(uVar4 + 0xe)] +
                   (&DAT_0019033b)[*(byte *)(uVar4 + 0x10)] * 0x55) * 6] & 7) ==
           (int)*(char *)(in_EAX + 6))) &&
         (((iVar3 = FUN_000d0f50(), iVar3 == 0 || (*(short *)(iVar3 + 10) != 8)) &&
          ((in_EDX < 0 || (iVar3 = FUN_000dc440(), iVar3 < in_EDX)))))) {
        iVar3 = FUN_0003b2c0();
        if (iVar3 == 0) {
          iVar3 = FUN_000ca6bc();
          if (iVar3 == 0) {
            if ((((&DAT_002e150f)[*(char *)(in_EAX + 6) * 0x1508] != '\0') &&
                ((int)*(char *)(in_EAX + 6) ==
                 (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])) &&
               (iVar3 = FUN_000ca65c(), iVar3 == 0)) {
              FUN_00051374();
            }
          }
          else {
            iVar3 = FUN_000d0f50();
            if ((((iVar3 == 0) || (*(short *)(iVar3 + 10) != 8)) &&
                (iVar3 = FUN_0003f8e8(), iVar3 == 0)) && (sVar2 = FUN_000b3b58(), sVar2 != 0)) {
              if (((&DAT_001911f3)[*(byte *)(uVar4 + 0x1a)] == '\b') ||
                 ((&DAT_001911f3)[*(byte *)(uVar4 + 0x1a)] == '\t')) {
                FUN_000274ad(*(undefined2 *)(uVar4 + 0x1b));
              }
              *(undefined1 *)(in_EAX + 8) = 0xd;
              *(undefined2 *)(iVar1 + 0x72) = *(undefined2 *)(uVar4 + 0x1b);
              return 1;
            }
          }
        }
        else {
          sVar2 = FUN_000b3b58();
          if (sVar2 != 0) {
            *(undefined1 *)(in_EAX + 8) = 0xb;
            *(undefined2 *)(iVar1 + 0x72) = *(undefined2 *)(uVar4 + 0x1b);
            *(undefined2 *)(iVar1 + 0x70) = *(undefined2 *)(iVar3 + 0x1b);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03c762 (Ghidra: FUN_0003c762)
 * Prototype: undefined4 sub_03c762(void);
 * Address  : 0x3c762 (Size: 441 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 9 -> 0x274ad, 0x3fad0, 0x51374, 0xb3b58, 0xc6574, 0xc688c, 0xca65c, 0xca6bc, 0xdc440
 ******************************************************************************/
undefined4 FUN_0003c762(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  byte *pbVar5;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(&DAT_002e059a + *(char *)(in_EAX + 6) * 0x1508) != 0) {
    iVar2 = FUN_000ca6bc();
    if (iVar2 == 0) {
      if ((((&DAT_002e150a)[*(char *)(in_EAX + 6) * 0x1508] != '\0') &&
          ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]))
         && (iVar4 = FUN_000ca65c(), iVar4 == 0)) {
        FUN_00051374();
      }
    }
    else {
      iVar2 = in_EAX + 0xd;
      for (pbVar5 = (&DAT_001ae9fc)[DAT_002e6ec6]; DAT_001ae9fc < pbVar5;
          pbVar5 = (&DAT_001ae9fc)[*(ushort *)(pbVar5 + 0x67)]) {
        iVar3 = FUN_000c6574(iVar2);
        if (((((iVar3 != 0) || (iVar3 = FUN_000c688c(), iVar3 != 0)) &&
             ((pbVar5[6] != *(byte *)(in_EAX + 6) &&
              (((*pbVar5 & 0x80) == 0 &&
               ((uint)((&DAT_002d33ca)
                       [((&DAT_0019033b)[pbVar5[0xe]] + (&DAT_0019033b)[pbVar5[0x10]] * 0x55) * 6] &
                      7) == (int)*(char *)(in_EAX + 6))))))) &&
            ((in_EDX < 0 || (iVar3 = FUN_000dc440(), iVar3 < in_EDX)))) &&
           ((iVar3 = FUN_0003fad0(), iVar3 == 0 && (sVar1 = FUN_000b3b58(), sVar1 != 0)))) {
          iVar2 = FUN_000c6574();
          if ((iVar2 != 0) || (iVar2 = FUN_000c688c(), iVar2 != 0)) {
            FUN_000274ad(*(undefined2 *)(pbVar5 + 0x1b));
          }
          *(undefined1 *)(in_EAX + 8) = 100;
          *(undefined2 *)(iVar4 + 0x72) = *(undefined2 *)(pbVar5 + 0x1b);
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03c91b (Ghidra: FUN_0003c91b)
 * Prototype: undefined4 sub_03c91b(void);
 * Address  : 0x3c91b (Size: 333 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 7 -> 0x3fad0, 0x51374, 0x81e5c, 0xb3b58, 0xca568, 0xca8c0, 0xdc440
 ******************************************************************************/
undefined4 FUN_0003c91b(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(&DAT_002e05aa + *(char *)(in_EAX + 6) * 0x1508) != 0) {
    uVar6 = 1;
    iVar2 = FUN_000ca568(1);
    if (iVar2 == 0) {
      if ((((&DAT_002e1512)[*(char *)(in_EAX + 6) * 0x1508] != '\0') &&
          ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]))
         && (iVar4 = FUN_000ca8c0(), iVar4 == 0)) {
        FUN_00051374();
      }
    }
    else {
      iVar2 = in_EAX + 0xd;
      for (uVar5 = (&DAT_001ae9fc)[DAT_002e6ed6]; DAT_001ae9fc < uVar5;
          uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 0x67)]) {
        if ((((((*(byte *)(uVar5 + 1) & 1) == 0) && (*(char *)(uVar5 + 7) == '\x02')) &&
             ((*(char *)(uVar5 + 0x14) == '\0' && (iVar3 = FUN_00081e5c(uVar6,iVar2), iVar3 != 0))))
            && ((in_EDX < 0 || (iVar3 = FUN_000dc440(), iVar3 < in_EDX)))) &&
           ((iVar3 = FUN_0003fad0(), iVar3 == 0 && (sVar1 = FUN_000b3b58(), sVar1 != 0)))) {
          *(undefined1 *)(in_EAX + 8) = 0x66;
          *(undefined2 *)(iVar4 + 0x72) = *(undefined2 *)(uVar5 + 0x1b);
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03ca68 (Ghidra: FUN_0003ca68)
 * Prototype: undefined4 sub_03ca68(void);
 * Address  : 0x3ca68 (Size: 322 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 5 -> 0x3fad0, 0xb3b58, 0xca568, 0xca8c0, 0xdc440
 ******************************************************************************/
undefined4 FUN_0003ca68(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  undefined4 uVar6;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(&DAT_002e059c + *(char *)(in_EAX + 6) * 0x1508) != 0) {
    uVar6 = 1;
    iVar2 = FUN_000ca568(1);
    if (iVar2 == 0) {
      if ((((&DAT_002e150b)[*(char *)(in_EAX + 6) * 0x1508] != '\0') &&
          ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]))
         && (iVar4 = FUN_000ca8c0(), iVar4 == 0)) {
        FUN_00051374();
      }
    }
    else {
      iVar2 = in_EAX + 0xd;
      for (uVar5 = (&DAT_001ae9fc)[DAT_002e6eb6]; DAT_001ae9fc < uVar5;
          uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 0x67)]) {
        if (((((*(char *)(uVar5 + 6) != *(char *)(in_EAX + 6)) && (*(char *)(uVar5 + 7) == 'C')) &&
             (((*(byte *)(uVar5 + 1) & 1) == 0 &&
              ((in_EDX < 0 || (iVar3 = FUN_000dc440(uVar6,iVar2), iVar3 < in_EDX)))))) &&
            (iVar3 = FUN_0003fad0(), iVar3 == 0)) && (sVar1 = FUN_000b3b58(), sVar1 != 0)) {
          *(undefined1 *)(in_EAX + 8) = 0x44;
          *(undefined2 *)(iVar4 + 0x74) = *(undefined2 *)(uVar5 + 0x1b);
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03cbaa (Ghidra: FUN_0003cbaa)
 * Prototype: undefined4 sub_03cbaa(void);
 * Address  : 0x3cbaa (Size: 305 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 4 -> 0x3fad0, 0xb3b58, 0xc57a4, 0xdc440
 ******************************************************************************/
undefined4 FUN_0003cbaa(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  byte *pbVar4;
  
  if (*(int *)(in_EAX + 0x13) <
      (int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)) {
    iVar2 = in_EAX + 0xd;
    for (pbVar4 = (&DAT_001ae9fc)[DAT_002e6ec6]; DAT_001ae9fc < pbVar4;
        pbVar4 = (&DAT_001ae9fc)[*(ushort *)(pbVar4 + 0x67)]) {
      if ((((pbVar4[0x1f] == 1) && ((*pbVar4 & 0x10) == 0)) && ((pbVar4[1] & 2) == 0)) &&
         (iVar3 = FUN_000c57a4(iVar2), iVar3 != 0)) {
        if (((((*(uint *)((int)&DAT_00279203 +
                         ((uint)pbVar4[0x10] * 0x100 + (uint)pbVar4[0xe]) * 5 + 1) >> 0x1c &
               1 << (*(byte *)(in_EAX + 6) & 0x1f)) != 0) &&
             ((((byte)(&DAT_002d33ca)
                      [((&DAT_0019033b)[pbVar4[0xe]] + (&DAT_0019033b)[pbVar4[0x10]] * 0x55) * 6] &
               7) == (int)*(char *)(in_EAX + 6) ||
              (((&DAT_002d33ca)
                [((&DAT_0019033b)[pbVar4[0xe]] + (&DAT_0019033b)[pbVar4[0x10]] * 0x55) * 6] & 7) ==
               DAT_002eb543)))) && ((in_EDX < 0 || (iVar3 = FUN_000dc440(), iVar3 < in_EDX)))) &&
           ((iVar3 = FUN_0003fad0(), iVar3 == 0 && (sVar1 = FUN_000b3b58(), sVar1 != 0)))) {
          *(undefined1 *)(in_EAX + 8) = 0x46;
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03ccdb (Ghidra: FUN_0003ccdb)
 * Prototype: undefined4 sub_03ccdb(void);
 * Address  : 0x3ccdb (Size: 68 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3eea6
 * Callees  : 2 -> 0x3fcd0, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003ccdb(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = FUN_0003fcd0();
  if (iVar2 != 0) {
    sVar1 = FUN_000b3b58();
    if (sVar1 != 0) {
      *(undefined1 *)(in_EAX + 8) = 2;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03cd1f (Ghidra: FUN_0003cd1f)
 * Prototype: undefined4 sub_03cd1f(void);
 * Address  : 0x3cd1f (Size: 68 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x3d9f3, 0x3db27, 0x3dc2a, 0x3dd25, 0x3e493, 0x3ef05
 * Callees  : 2 -> 0x3fed7, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003cd1f(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = FUN_0003fed7();
  if (iVar2 != 0) {
    sVar1 = FUN_000b3b58();
    if (sVar1 != 0) {
      *(undefined1 *)(in_EAX + 8) = 0x61;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03cd63 (Ghidra: FUN_0003cd63)
 * Prototype: undefined4 sub_03cd63(void);
 * Address  : 0x3cd63 (Size: 105 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3cdcc
 * Callees  : 3 -> 0x3af4b, 0x3fa16, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003cd63(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  
  if ((((-1 < in_EDX) && (in_EDX < 0x55)) && (-1 < unaff_EBX)) && (unaff_EBX < 0x55)) {
    iVar2 = FUN_0003af4b(in_EDX * 3 + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_0003fa16();
      if (iVar2 == 0) {
        sVar1 = FUN_000b3b58();
        if (sVar1 != 0) {
          *(undefined1 *)(in_EAX + 8) = 0x49;
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03cdcc (Ghidra: FUN_0003cdcc)
 * Prototype: undefined4 sub_03cdcc(void);
 * Address  : 0x3cdcc (Size: 278 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3d02c, 0x3d0cf
 * Callees  : 1 -> 0x3cd63
 ******************************************************************************/
undefined4 FUN_0003cdcc(void)

{
  int iVar1;
  int in_EDX;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_28 = 0;
  local_24 = 2;
  while( true ) {
    if (in_EDX <= local_28) {
      return 0;
    }
    local_1c = 1;
    iVar1 = FUN_0003cd63();
    if (iVar1 != 0) break;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      for (; local_1c < local_24; local_1c = local_1c + 1) {
        iVar1 = FUN_0003cd63();
        if (iVar1 != 0) {
          return 1;
        }
      }
      local_1c = 0;
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03cee2 (Ghidra: FUN_0003cee2)
 * Prototype: undefined4 sub_03cee2(void);
 * Address  : 0x3cee2 (Size: 165 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3d02c
 * Callees  : 4 -> 0x3af4b, 0x3f6fc, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003cee2(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    iVar2 = FUN_0003f6fc();
    if (iVar2 != 0) {
      iVar2 = FUN_0003af4b();
      if (iVar2 != 0) {
        iVar2 = FUN_0003fad0();
        if (iVar2 == 0) {
          sVar1 = FUN_000b3b58();
          if (sVar1 != 0) {
            *(undefined1 *)(in_EAX + 8) = 0x49;
            return 1;
          }
        }
      }
    }
    iVar3 = iVar3 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_03cf87 (Ghidra: FUN_0003cf87)
 * Prototype: undefined4 sub_03cf87(void);
 * Address  : 0x3cf87 (Size: 165 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3d2d5
 * Callees  : 4 -> 0x3aef2, 0x3f6fc, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003cf87(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    iVar2 = FUN_0003f6fc();
    if (iVar2 != 0) {
      iVar2 = FUN_0003aef2();
      if (iVar2 != 0) {
        iVar2 = FUN_0003fad0();
        if (iVar2 == 0) {
          sVar1 = FUN_000b3b58();
          if (sVar1 != 0) {
            *(undefined1 *)(in_EAX + 8) = 9;
            return 1;
          }
        }
      }
    }
    iVar3 = iVar3 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_03d02c (Ghidra: FUN_0003d02c)
 * Prototype: undefined8 sub_03d02c(void);
 * Address  : 0x3d02c (Size: 163 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 5 -> 0x3af4b, 0x3cdcc, 0x3cee2, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0003d02c(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  iVar2 = FUN_0003af4b((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] * 3 + 1,
                       (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1);
  if (iVar2 != 0) {
    iVar2 = FUN_0003fad0();
    if (iVar2 == 0) {
      sVar1 = FUN_000b3b58();
      if (sVar1 != 0) {
        uVar3 = 1;
        *(undefined1 *)(in_EAX + 8) = 0x49;
        goto LAB_0003d776;
      }
    }
  }
  iVar2 = FUN_0003cdcc();
  if (iVar2 == 0) {
    iVar2 = FUN_0003cee2();
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_0003d776;
    }
  }
  uVar3 = 1;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_03d0cf (Ghidra: FUN_0003d0cf)
 * Prototype: undefined8 sub_03d0cf(void);
 * Address  : 0x3d0cf (Size: 134 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3df64
 * Callees  : 4 -> 0x3af4b, 0x3cdcc, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0003d0cf(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  iVar2 = FUN_0003af4b((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1);
  if (iVar2 != 0) {
    iVar2 = FUN_0003fad0();
    if (iVar2 == 0) {
      sVar1 = FUN_000b3b58();
      if (sVar1 != 0) {
        uVar3 = 1;
        *(undefined1 *)(in_EAX + 8) = 0x49;
        goto LAB_0003d776;
      }
    }
  }
  iVar2 = FUN_0003cdcc();
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = 1;
  }
LAB_0003d776:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_03d155 (Ghidra: FUN_0003d155)
 * Prototype: undefined4 sub_03d155(void);
 * Address  : 0x3d155 (Size: 105 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3d1be
 * Callees  : 3 -> 0x3aef2, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined4 FUN_0003d155(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  
  if ((((-1 < in_EDX) && (in_EDX < 0x55)) && (-1 < unaff_EBX)) && (unaff_EBX < 0x55)) {
    iVar2 = FUN_0003aef2(in_EDX * 3 + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_0003fad0();
      if (iVar2 == 0) {
        sVar1 = FUN_000b3b58();
        if (sVar1 != 0) {
          *(undefined1 *)(in_EAX + 8) = 9;
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03d1be (Ghidra: FUN_0003d1be)
 * Prototype: undefined4 sub_03d1be(void);
 * Address  : 0x3d1be (Size: 279 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3d2d5, 0x3d37a
 * Callees  : 1 -> 0x3d155
 ******************************************************************************/
undefined4 FUN_0003d1be(void)

{
  int iVar1;
  int in_EDX;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_28 = 0;
  local_24 = 2;
  while( true ) {
    if (in_EDX <= local_28) {
      return 0;
    }
    local_1c = 1;
    iVar1 = FUN_0003d155();
    if (iVar1 != 0) break;
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      for (; local_1c < local_24; local_1c = local_1c + 1) {
        iVar1 = FUN_0003d155();
        if (iVar1 != 0) {
          return 1;
        }
      }
      local_1c = 0;
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03d2d5 (Ghidra: FUN_0003d2d5)
 * Prototype: undefined8 sub_03d2d5(void);
 * Address  : 0x3d2d5 (Size: 165 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 5 -> 0x3aef2, 0x3cf87, 0x3d1be, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0003d2d5(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  iVar2 = FUN_0003aef2((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] * 3 + 1,
                       (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1);
  if (iVar2 != 0) {
    iVar2 = FUN_0003fad0();
    if (iVar2 == 0) {
      sVar1 = FUN_000b3b58();
      if (sVar1 != 0) {
        uVar3 = 1;
        *(undefined1 *)(in_EAX + 8) = 9;
        goto LAB_0003d776;
      }
    }
  }
  iVar2 = FUN_0003d1be();
  if (iVar2 == 0) {
    iVar2 = FUN_0003cf87();
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_0003d776;
    }
  }
  uVar3 = 1;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_03d37a (Ghidra: FUN_0003d37a)
 * Prototype: undefined8 sub_03d37a(void);
 * Address  : 0x3d37a (Size: 121 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3df64
 * Callees  : 4 -> 0x3aef2, 0x3d1be, 0x3fad0, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0003d37a(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  iVar2 = FUN_0003aef2((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1);
  if (iVar2 != 0) {
    iVar2 = FUN_0003fad0();
    if (iVar2 == 0) {
      sVar1 = FUN_000b3b58();
      if (sVar1 != 0) {
        uVar3 = 1;
        *(undefined1 *)(in_EAX + 8) = 9;
        goto LAB_0003d776;
      }
    }
  }
  iVar2 = FUN_0003d1be();
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = 1;
  }
LAB_0003d776:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_stack_type_03d3f3 (Ghidra: FUN_0003d3f3)
 * Prototype: undefined8 dk_stack_type_03d3f3(void);
 * Address  : 0x3d3f3 (Size: 576 bytes)
 * Module   : impset.cpp [direct_file_string_xref]
 * OrigLine : impset.cpp:954 ("INVALID STACK TYPE"); impset.cpp:978 ("IMP CAN NAVIGATE BUT NOT MOVE TO??")
 * Naming   : String 'INVALID STACK TYPE'
 * Callers  : 1 -> 0x3df64
 * Callees  : 8 -> 0x3aef2, 0x3af4b, 0x3fad0, 0x827fc, 0xb28e8, 0xb3be4, 0xdc4a0, 0xddaf0
 * Strings  :
 *   - 0x164d83: "impset.cpp"
 *   - 0x164db1: "impset.cpp"
 *   - 0x164d70: "INVALID STACK TYPE"
 *   - 0x164d8e: "IMP CAN NAVIGATE BUT NOT MOVE TO??"
 ******************************************************************************/
undefined8 FUN_0003d3f3(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  uint uVar6;
  byte bVar7;
  undefined4 local_58;
  undefined2 local_54 [2];
  undefined4 local_50;
  undefined2 auStack_4c [2];
  undefined2 *local_48;
  int local_44;
  ushort *local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar7 = 0;
  local_48 = &DAT_002e0589 + *(char *)(in_EAX + 6) * 0xa84;
  local_40 = (ushort *)(&DAT_002e15f4 + *(char *)(in_EAX + 6) * 0x1508);
  local_3c = (uint)*(byte *)(in_EAX + 0xe);
  local_44 = 0x1c;
  local_38 = (uint)*(byte *)(in_EAX + 0x10);
  for (local_28 = 0; local_28 < *(int *)((int)local_48 + 0x116f); local_28 = local_28 + 1) {
    if ((local_40[1] == 1) || (local_40[1] == 2)) {
      uVar6 = (uint)*local_40 % 0x100;
      uVar3 = *local_40 / 0x100;
      local_30 = (&DAT_0019033b)[uVar6];
      local_34 = (&DAT_0019033b)[uVar3];
      iVar4 = FUN_000dc4a0();
      if (iVar4 < local_44) {
        local_1c = uVar3 * 0x100;
        local_24 = local_1c + 0x80;
        local_20 = uVar6 * 0x100 + 0x80;
        if (local_40[1] == 1) {
          iVar4 = FUN_0003aef2();
          if (iVar4 != 0) {
            iVar4 = FUN_0003fad0();
            if (iVar4 == 0) {
              local_58 = CONCAT22((short)local_24,(short)local_20);
              local_54[0] = FUN_000b28e8();
              cVar1 = FUN_000827fc();
              if (cVar1 != '\0') {
                local_2c = 1;
                local_44 = extraout_ECX_00;
LAB_0003d5d7:
                local_50 = local_58;
                auStack_4c[(uint)bVar7 * -4] = local_54[(uint)bVar7 * -4];
              }
            }
            goto LAB_0003d4c8;
          }
        }
        else if (local_40[1] == 2) {
          iVar4 = FUN_0003af4b();
          if (iVar4 != 0) {
            iVar4 = FUN_0003fad0();
            if (iVar4 == 0) {
              local_58 = CONCAT22((short)local_24,(short)local_20);
              local_54[0] = FUN_000b28e8();
              cVar1 = FUN_000827fc();
              if (cVar1 != '\0') {
                local_2c = 2;
                local_44 = extraout_ECX;
                goto LAB_0003d5d7;
              }
            }
            goto LAB_0003d4c8;
          }
        }
        else {
          FUN_000ddaf0(); /* LbErrorLog("impset.cpp", line 954, "INVALID STACK TYPE") */
        }
        local_40[1] = 0;
      }
    }
LAB_0003d4c8:
    local_40 = local_40 + 2;
  }
  if (local_44 != 0x1c) {
    sVar2 = FUN_000b3be4();
    if (sVar2 != 0) {
      if (local_2c == 1) {
        *(undefined1 *)(in_EAX + 8) = 9;
      }
      else {
        *(undefined1 *)(in_EAX + 8) = 0x49;
      }
      uVar5 = 1;
      goto LAB_0003d776;
    }
    FUN_000ddaf0(); /* LbErrorLog("impset.cpp", line 978, "IMP CAN NAVIGATE BUT NOT MOVE TO??") */
  }
  uVar5 = 0;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_03d633 (Ghidra: FUN_0003d633)
 * Prototype: undefined8 sub_03d633(void);
 * Address  : 0x3d633 (Size: 330 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3df64
 * Callees  : 3 -> 0x3fcd0, 0x40160, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0003d633(void)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_EDX;
  uint local_28;
  int local_1c;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar3 = *(ushort *)(iVar4 + 0x8f);
  local_1c = 0;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  local_28 = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = local_28 | DAT_002e8bf6 * 0x80000;
  local_28 = local_28 & 3;
  do {
    if (3 < local_1c) {
      uVar9 = 0;
LAB_0003d776:
      return CONCAT44(in_EDX,uVar9);
    }
    cVar1 = *(char *)((int)&DAT_0018b67b + local_28 * 2 + 3);
    uVar9 = (&DAT_0019033b)[(uint)uVar3 % 0x100];
    cVar2 = (&DAT_0018b67f)[local_28 * 2];
    uVar5 = (&DAT_0019033b)[(int)(uint)uVar3 >> 8];
    iVar7 = FUN_00040160();
    if (iVar7 != -1) {
      iVar8 = FUN_0003fcd0();
      if (iVar8 != 0) {
        sVar6 = FUN_000b3b58();
        if (sVar6 != 0) {
          *(short *)(iVar4 + 0x91) = (short)iVar7;
          *(short *)(iVar4 + 0x8f) =
               ((short)cVar1 + (short)uVar9) * 3 + 1 +
               (((short)cVar2 + (short)uVar5) * 3 + 1) * 0x100;
          *(char *)(in_EAX + 8) =
               ((&DAT_002e1094)[iVar7 * 3 + *(char *)(in_EAX + 6) * 0x1508] == '\x02') + '\x02';
          uVar9 = 1;
          goto LAB_0003d776;
        }
      }
    }
    local_28 = (int)(local_28 + 1) % 4;
    local_1c = local_1c + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_03d77d (Ghidra: FUN_0003d77d)
 * Prototype: undefined8 sub_03d77d(void);
 * Address  : 0x3d77d (Size: 307 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 3 -> 0x3fcd0, 0x40160, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0003d77d(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  undefined4 uVar8;
  int in_EAX;
  int iVar9;
  int iVar10;
  undefined4 in_EDX;
  int local_28;
  uint local_1c;
  
  iVar3 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
  iVar4 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
  local_28 = 0;
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  local_1c = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = local_1c | DAT_002e8bf6 * 0x80000;
  local_1c = local_1c & 3;
  do {
    if (3 < local_28) {
      uVar8 = 0;
LAB_0003d776:
      return CONCAT44(in_EDX,uVar8);
    }
    uVar8 = (&DAT_0019033b)[iVar3 * 3 + 1];
    cVar1 = *(char *)((int)&DAT_0018b67b + local_1c * 2 + 3);
    cVar2 = (&DAT_0018b67f)[local_1c * 2];
    uVar6 = (&DAT_0019033b)[iVar4 * 3 + 1];
    iVar9 = FUN_00040160();
    if (iVar9 != -1) {
      iVar10 = FUN_0003fcd0();
      if (iVar10 != 0) {
        sVar7 = FUN_000b3b58();
        if (sVar7 != 0) {
          *(short *)(iVar5 + 0x91) = (short)iVar9;
          *(short *)(iVar5 + 0x8f) =
               ((short)uVar8 + (short)cVar1) * 3 + 1 +
               (((short)uVar6 + (short)cVar2) * 3 + 1) * 0x100;
          *(char *)(in_EAX + 8) =
               ((&DAT_002e1094)[iVar9 * 3 + *(char *)(in_EAX + 6) * 0x1508] == '\x02') + '\x02';
          uVar8 = 1;
          goto LAB_0003d776;
        }
      }
    }
    local_1c = (int)(local_1c + 1) % 4;
    local_28 = local_28 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_03d8b0 (Ghidra: FUN_0003d8b0)
 * Prototype: undefined8 sub_03d8b0(void);
 * Address  : 0x3d8b0 (Size: 323 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3df64
 * Callees  : 3 -> 0x3fcd0, 0xb3b58, 0xdc4a0
 ******************************************************************************/
undefined8 FUN_0003d8b0(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  undefined4 in_EDX;
  undefined2 *puVar8;
  int local_50;
  undefined2 local_44;
  int local_24;
  int local_1c;
  
  cVar1 = *(char *)(in_EAX + 6);
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_24 = 0x18;
  puVar8 = &DAT_002e0589 + cVar1 * 0xa84;
  for (local_1c = 0; local_1c < (int)(uint)*(ushort *)(&DAT_002e1080 + cVar1 * 0x1508);
      local_1c = local_1c + 1) {
    if ((*(char *)((int)puVar8 + 0xb0b) != '\0') && (*(char *)((int)puVar8 + 0xb0b) != '\x03')) {
      uVar2 = puVar8[0x586];
      iVar6 = FUN_000dc4a0();
      if (iVar6 < local_24) {
        iVar7 = FUN_0003fcd0();
        if (iVar7 != 0) {
          local_50 = local_1c;
          local_24 = iVar6;
          local_44 = uVar2;
        }
      }
    }
    puVar8 = (undefined2 *)((int)puVar8 + 3);
  }
  if (local_24 != 0x18) {
    sVar4 = FUN_000b3b58();
    if (sVar4 != 0) {
      *(short *)(iVar3 + 0x91) = (short)local_50;
      *(undefined2 *)(iVar3 + 0x8f) = local_44;
      *(char *)(in_EAX + 8) =
           (*(char *)((int)(&DAT_002e0589 + cVar1 * 0xa84) + local_50 * 3 + 0xb0b) == '\x02') +
           '\x02';
      uVar5 = 1;
      goto LAB_0003d776;
    }
  }
  uVar5 = 0;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_03d9f3 (Ghidra: FUN_0003d9f3)
 * Prototype: undefined4 sub_03d9f3(void);
 * Address  : 0x3d9f3 (Size: 308 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3dd25
 * Callees  : 2 -> 0x3b0a0, 0x3cd1f
 ******************************************************************************/
undefined4 FUN_0003d9f3(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_1c;
  
  iVar5 = (&DAT_0019033b)[in_EDX % 0x100] +
          (&DAT_0019033b)
          [(int)((in_EDX + (in_EDX >> 0x1f) * -0x100) - (uint)((in_EDX >> 0x1f) << 7 < 0)) >> 8] *
          0x55;
  local_1c = 0;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar7 = (uint)(byte)(&DAT_0017c04c)
                      [((uint)*(byte *)(in_EAX + 0x10) % 3) * 3 + (uint)*(byte *)(in_EAX + 0xe) % 3]
  ;
  do {
    if (3 < local_1c) {
      return 0;
    }
    cVar1 = *(char *)((int)&DAT_0018b67b + uVar7 * 2 + 3);
    cVar2 = (&DAT_0018b67f)[uVar7 * 2];
    iVar4 = FUN_0003b0a0();
    if (0 < iVar4) {
      iVar6 = (iVar5 / 0x55 + (int)cVar2) * 0x55 + iVar5 % 0x55 + (int)cVar1;
      iVar4 = FUN_0003cd1f();
      if (iVar4 != 0) {
        *(undefined1 *)(iVar3 + 0x93) = 0;
        *(short *)(iVar3 + 0x8d) = (short)(iVar6 % 0x55) * 3 + (short)(iVar6 / 0x55) * 0x300 + 0x101
        ;
        return 1;
      }
    }
    uVar7 = (int)(uVar7 + 2) % 4;
    local_1c = local_1c + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_03db27 (Ghidra: FUN_0003db27)
 * Prototype: undefined8 sub_03db27(void);
 * Address  : 0x3db27 (Size: 259 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3e199
 * Callees  : 2 -> 0x3b0a0, 0x3cd1f
 ******************************************************************************/
undefined8 FUN_0003db27(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_EDX;
  int iVar8;
  uint uVar9;
  int local_20;
  
  iVar3 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
  iVar4 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
  local_20 = 0;
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar9 = (uint)(byte)(&DAT_0017c055)
                      [((uint)*(byte *)(in_EAX + 0x10) % 3) * 3 + (uint)*(byte *)(in_EAX + 0xe) % 3]
  ;
  do {
    if (3 < local_20) {
      uVar7 = 0;
LAB_0003d776:
      return CONCAT44(in_EDX,uVar7);
    }
    cVar1 = *(char *)((int)&DAT_0018b67b + uVar9 * 2 + 3);
    cVar2 = (&DAT_0018b67f)[uVar9 * 2];
    iVar6 = FUN_0003b0a0();
    if (0 < iVar6) {
      iVar8 = (iVar4 + cVar2) * 0x55 + iVar3 + cVar1;
      iVar6 = FUN_0003cd1f();
      if (iVar6 != 0) {
        *(undefined1 *)(iVar5 + 0x93) = 0;
        uVar7 = 1;
        *(short *)(iVar5 + 0x8d) = (short)(iVar8 % 0x55) * 3 + (short)(iVar8 / 0x55) * 0x300 + 0x101
        ;
        goto LAB_0003d776;
      }
    }
    uVar9 = (int)(uVar9 + 1) % 4;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_03dc2a (Ghidra: FUN_0003dc2a)
 * Prototype: undefined4 sub_03dc2a(void);
 * Address  : 0x3dc2a (Size: 251 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3dd25
 * Callees  : 2 -> 0x3b0a0, 0x3cd1f
 ******************************************************************************/
undefined4 FUN_0003dc2a(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_20 = 2;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar5 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
  iVar4 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
  do {
    if (in_EDX <= local_1c) {
      return 0;
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -1;
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      iVar2 = (local_18 + 1U & 3) * 2;
      for (local_24 = 0; local_24 < local_20; local_24 = local_24 + 1) {
        iVar5 = iVar5 + *(char *)((int)&DAT_0018b67b + iVar2 + 3);
        iVar4 = iVar4 + (char)(&DAT_0018b67f)[iVar2];
        if ((((-1 < iVar5) && (iVar5 < 0x55)) && (-1 < iVar4)) && (iVar4 < 0x55)) {
          iVar3 = FUN_0003b0a0();
          if (0 < iVar3) {
            iVar3 = FUN_0003cd1f();
            if (iVar3 != 0) {
              *(undefined1 *)(iVar1 + 0x93) = 0;
              *(short *)(iVar1 + 0x8d) = ((short)iVar4 * 3 + 1) * 0x100 + (short)iVar5 * 3 + 1;
              return 1;
            }
          }
        }
      }
    }
    local_1c = local_1c + 1;
    local_20 = local_20 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_03dd25 (Ghidra: FUN_0003dd25)
 * Prototype: undefined8 sub_03dd25(void);
 * Address  : 0x3dd25 (Size: 223 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3df64
 * Callees  : 5 -> 0x3b0a0, 0x3cd1f, 0x3d9f3, 0x3dc2a, 0xe69fc
 ******************************************************************************/
undefined8 FUN_0003dd25(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_EDX;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar3 + 0x8d) == 0) {
LAB_0003ddef:
    iVar3 = FUN_0003dc2a();
    if (iVar3 == 0) {
      uVar2 = 0;
      goto LAB_0003d776;
    }
  }
  else {
    iVar1 = FUN_000e69fc((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)],
                         (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]);
    if (2 < iVar1) goto LAB_0003ddef;
    iVar1 = FUN_000e69fc();
    if (2 < iVar1) goto LAB_0003ddef;
    iVar1 = FUN_0003b0a0();
    if (iVar1 < 1) {
LAB_0003ddd4:
      iVar1 = FUN_0003d9f3();
      if (iVar1 == 0) {
        *(undefined2 *)(iVar3 + 0x8d) = 0;
        goto LAB_0003ddef;
      }
    }
    else {
      iVar1 = FUN_0003cd1f();
      if (iVar1 == 0) goto LAB_0003ddd4;
    }
  }
  uVar2 = 1;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_03de04 (Ghidra: FUN_0003de04)
 * Prototype: undefined8 sub_03de04(void);
 * Address  : 0x3de04 (Size: 352 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3df64
 * Callees  : 4 -> 0x3b0a0, 0x3fed7, 0xb3be4, 0xdc4a0
 ******************************************************************************/
undefined8 FUN_0003de04(void)

{
  short sVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 in_EDX;
  uint uVar5;
  byte bVar6;
  undefined2 auStack_54 [2];
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 uStack_4e;
  undefined1 uStack_4d;
  undefined2 auStack_4c [2];
  int local_48;
  ushort *local_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined2 *local_20;
  int local_1c;
  
  bVar6 = 0;
  local_24 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_20 = &DAT_002e0589 + *(char *)(in_EAX + 6) * 0xa84;
  local_44 = (ushort *)(&DAT_002e15f4 + *(char *)(in_EAX + 6) * 0x1508);
  local_34 = (uint)*(byte *)(in_EAX + 0xe);
  local_48 = 0x1c;
  local_2c = (uint)*(byte *)(in_EAX + 0x10);
  for (local_1c = 0; local_1c < *(int *)((int)local_20 + 0x116f); local_1c = local_1c + 1) {
    if (local_44[1] == 3) {
      uVar5 = (uint)*local_44;
      local_38 = (&DAT_0019033b)[uVar5 % 0x100];
      local_30 = (&DAT_0019033b)[(int)uVar5 >> 8];
      iVar3 = FUN_000dc4a0();
      if (iVar3 < local_48) {
        iVar4 = FUN_0003b0a0();
        if (iVar4 < 1) {
          local_44[1] = 0;
        }
        else {
          iVar4 = FUN_0003fed7();
          if (iVar4 != 0) {
            local_48 = iVar3;
            local_28 = uVar5;
            _local_50 = CONCAT11(local_40,local_50);
            _local_50 = CONCAT13(local_3c,_local_50);
            auStack_54[(uint)bVar6 * -4] = auStack_4c[(uint)bVar6 * -4];
          }
        }
      }
    }
    local_44 = local_44 + 2;
  }
  if (local_48 != 0x1c) {
    sVar1 = FUN_000b3be4();
    if (sVar1 != 0) {
      *(undefined1 *)(in_EAX + 8) = 0x61;
      *(undefined1 *)(local_24 + 0x93) = 0;
      *(short *)(local_24 + 0x8d) = (short)local_28;
      uVar2 = 1;
      goto LAB_0003d776;
    }
  }
  uVar2 = 0;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_03df64 (Ghidra: FUN_0003df64)
 * Prototype: undefined8 sub_03df64(void);
 * Address  : 0x3df64 (Size: 565 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3f664, 0x3f682
 * Callees  : 14 -> 0x3c289, 0x3d0cf, 0x3d37a, 0x3d3f3, 0x3d633, 0x3d8b0, 0x3dd25, 0x3de04, 0x51374, 0x75b1e ...
 ******************************************************************************/
undefined8 FUN_0003df64(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uStack_18;
  
  puVar7 = &stack0xffffffec;
  puVar5 = (undefined4 *)&stack0xffffffec;
  puVar6 = (undefined4 *)&stack0xffffffec;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  bVar1 = *(byte *)(iVar2 + 0x94);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      uStack_18 = 0x3e175;
      iVar4 = FUN_0003d633();
      if (iVar4 == 0) {
        uStack_18 = 0x3e180;
        iVar4 = FUN_0003d8b0();
        if (iVar4 == 0) {
          uStack_18 = 0x3dfb5;
          iVar4 = FUN_0003d0cf();
          if (iVar4 == 0) {
            uStack_18 = 0x3dfc0;
            iVar4 = FUN_0003d37a();
            if (iVar4 == 0) {
              uStack_18 = 0x3dfdc;
              FUN_0003c289();
              uStack_18 = 0x3dfe3;
              iVar4 = FUN_0003d3f3();
              if (iVar4 == 0) goto LAB_0003dfa0;
            }
          }
          goto LAB_0003dfc4;
        }
      }
LAB_0003e188:
      uVar3 = 1;
      *(undefined1 *)(iVar2 + 0x94) = 1;
      puVar5 = (undefined4 *)&stack0xffffffec;
      goto LAB_0003d777;
    }
  }
  else {
    if (bVar1 < 3) {
      uStack_18 = 0x3dff0;
      iVar4 = FUN_0003d0cf();
      if (iVar4 == 0) {
        uStack_18 = 0x3dffb;
        iVar4 = FUN_0003d37a();
        if (iVar4 == 0) {
          uStack_18 = 0x3e006;
          FUN_0003c289();
          uStack_18 = 0x3e00d;
          iVar4 = FUN_0003d3f3();
          if (iVar4 == 0) {
            uStack_18 = 0x3e018;
            iVar4 = FUN_0003d8b0();
            puVar6 = (undefined4 *)&stack0xffffffec;
            if (iVar4 != 0) goto LAB_0003e188;
            goto LAB_0003dfa0;
          }
        }
      }
LAB_0003dfc4:
      uVar3 = 1;
      *(undefined1 *)(iVar2 + 0x94) = 2;
      goto LAB_0003d777;
    }
    if (bVar1 < 4) {
      uStack_18 = 0x3e039;
      FUN_0003c289();
      if ((*(int *)(iVar2 + 0x89) == *(int *)(extraout_ECX + 0x116b)) ||
         (puVar6 = (undefined4 *)&stack0xffffffec, *(short *)(extraout_ECX + 0x106d) == 3)) {
        uStack_18 = 0x3e05e;
        iVar4 = FUN_0003dd25();
        if (iVar4 == 0) {
          uStack_18 = 0x3e07a;
          iVar4 = FUN_0003de04();
          puVar6 = (undefined4 *)&stack0xffffffec;
          if (iVar4 == 0) goto LAB_0003dfa0;
        }
        uVar3 = 1;
        *(undefined1 *)(iVar2 + 0x94) = 3;
        puVar5 = (undefined4 *)&stack0xffffffec;
        goto LAB_0003d777;
      }
    }
    else if (bVar1 < 5) {
      uStack_18 = 0x3e08b;
      iVar4 = FUN_00075b48();
      puVar6 = (undefined4 *)&stack0xffffffec;
      if (iVar4 != 0) {
        uStack_18 = 0x3e09a;
        iVar4 = FUN_00075b1e();
        puVar6 = (undefined4 *)&stack0xffffffec;
        if (iVar4 != 0) {
          uStack_18 = 1;
          iVar4 = FUN_000ca568();
          if (iVar4 == 0) {
            puVar6 = &uStack_18;
            if (((int)*(char *)(in_EAX + 6) ==
                 (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) &&
               (iVar4 = FUN_000ca8c0(), puVar6 = &uStack_18, iVar4 == 0)) {
              FUN_00051374();
              puVar6 = &uStack_18;
            }
          }
          else {
            iVar4 = FUN_000cc4a0();
            puVar6 = &uStack_18;
            if (iVar4 != 0) {
              *(undefined1 *)(in_EAX + 8) = 0x20;
              *(undefined2 *)(iVar2 + 0x80) = *(undefined2 *)(extraout_ECX_00 + 1);
              uVar3 = 1;
              puVar5 = &uStack_18;
              goto LAB_0003d777;
            }
          }
        }
      }
    }
    else {
      puVar6 = (undefined4 *)&stack0xffffffec;
      if (bVar1 == 9) {
        uStack_18 = 0x3e140;
        iVar4 = FUN_0003dd25();
        if (iVar4 == 0) {
          uStack_18 = 0x3e15c;
          iVar4 = FUN_0003de04();
          puVar6 = (undefined4 *)&stack0xffffffec;
          if (iVar4 == 0) goto LAB_0003dfa0;
        }
        uVar3 = 1;
        *(undefined1 *)(iVar2 + 0x94) = 9;
        puVar5 = (undefined4 *)&stack0xffffffec;
        goto LAB_0003d777;
      }
    }
LAB_0003dfa0:
    *(undefined1 *)(iVar2 + 0x94) = 0;
    puVar7 = (undefined1 *)puVar6;
  }
  uVar3 = 0;
  puVar5 = (undefined4 *)puVar7;
LAB_0003d777:
  return CONCAT44(*(undefined4 *)((int)puVar5 + 8),uVar3);
}

/******************************************************************************
 * Function : sub_03e199 (Ghidra: FUN_0003e199)
 * Prototype: longlong sub_03e199(void);
 * Address  : 0x3e199 (Size: 237 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3ed80, 0x63dd3
 * Callees  : 11 -> 0x3c3e7, 0x3c458, 0x3c53a, 0x3c762, 0x3c91b, 0x3ca68, 0x3cbaa, 0x3d02c, 0x3d2d5, 0x3d77d ...
 ******************************************************************************/
longlong FUN_0003e199(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint in_EDX;
  
  iVar1 = FUN_0003ca68();
  if (iVar1 == 0) {
    iVar1 = FUN_0003c91b();
    if (iVar1 == 0) {
      iVar1 = FUN_0003c762();
      if (iVar1 == 0) {
        iVar1 = FUN_0003c53a();
        if (iVar1 == 0) {
          iVar1 = FUN_0003c3e7();
          if (iVar1 == 0) {
            iVar1 = FUN_0003d77d();
            if (iVar1 != 0) {
              *(undefined1 *)(extraout_ECX + 0x94) = 1;
              return CONCAT44(in_EDX,1);
            }
            iVar2 = FUN_0003d02c();
            iVar1 = extraout_ECX_00;
            if (iVar2 == 0) {
              iVar2 = FUN_0003d2d5();
              iVar1 = extraout_ECX_01;
              if (iVar2 == 0) {
                iVar1 = FUN_0003cbaa();
                if (iVar1 == 0) {
                  iVar1 = FUN_0003db27();
                  if (iVar1 != 0) {
                    *(undefined1 *)(extraout_ECX_02 + 0x94) = 9;
                    return CONCAT44(in_EDX,1);
                  }
                  iVar1 = FUN_0003c458();
                  if (iVar1 == 0) {
                    *(undefined1 *)(extraout_ECX_03 + 0x94) = 0;
                    return (ulonglong)in_EDX << 0x20;
                  }
                }
                goto LAB_0003e1e7;
              }
            }
            *(undefined1 *)(iVar1 + 0x94) = 2;
            return CONCAT44(in_EDX,1);
          }
        }
      }
    }
  }
LAB_0003e1e7:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03e286 (Ghidra: FUN_0003e286)
 * Prototype: longlong sub_03e286(void);
 * Address  : 0x3e286 (Size: 82 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3f682
 * Callees  : 3 -> 0x3c289, 0x3e33a, 0x3e493
 ******************************************************************************/
longlong FUN_0003e286(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  FUN_0003c289();
  iVar2 = FUN_0003e493();
  if (iVar2 == 0) {
    if ((uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2c7)) < 0x81) {
      return (ulonglong)in_EDX << 0x20;
    }
    FUN_0003e33a();
    *(int *)(iVar1 + 0x2c7) = DAT_002e8bee;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03e2d8 (Ghidra: FUN_0003e2d8)
 * Prototype: longlong sub_03e2d8(void);
 * Address  : 0x3e2d8 (Size: 98 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3f682
 * Callees  : 1 -> 0x64ae7
 ******************************************************************************/
longlong FUN_0003e2d8(void)

{
  uint uVar1;
  int in_EAX;
  int extraout_ECX;
  uint in_EDX;
  
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar1 = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
  if ((uVar1 & 0x3f) == 0) {
    FUN_00064ae7();
    *(undefined1 *)(in_EAX + 8) = 1;
    *(undefined2 *)(extraout_ECX + 0x282) = 200;
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_03e33a (Ghidra: FUN_0003e33a)
 * Prototype: longlong sub_03e33a(void);
 * Address  : 0x3e33a (Size: 301 bytes)
 * Module   : impset.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3e286, 0x3e493, 0x3ef50
 * Callees  : 5 -> 0x274ad, 0x51374, 0xca568, 0xca8c0, 0xcc51c
 ******************************************************************************/
longlong FUN_0003e33a(void)

{
  int in_EAX;
  int iVar1;
  uint *puVar2;
  undefined4 unaff_ESI;
  undefined4 uStack_18;
  uint uStack_14;
  
  puVar2 = (uint *)&stack0xfffffff0;
  if (*(int *)(in_EAX + 0x13) != 0) {
    uStack_14 = 1;
    uStack_18 = 0x3e35c;
    iVar1 = FUN_000ca568();
    if (iVar1 == 0) {
      if ((&DAT_002e0598)[*(char *)(in_EAX + 6) * 0xa84] == 0) {
        if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          uStack_18 = 0x3e44c;
          FUN_00051374();
        }
      }
      else {
        uStack_18 = 0x3e3aa;
        iVar1 = FUN_000ca8c0();
        if (iVar1 != 0) {
          puVar2 = &uStack_14;
          if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
          {
            uStack_18 = 0x3e3e2;
            FUN_00051374();
            puVar2 = &uStack_14;
          }
          goto LAB_0003e460;
        }
        if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          uStack_18 = 0x3e417;
          FUN_00051374();
        }
      }
      uStack_18 = 0;
      puVar2 = &uStack_18;
      FUN_000274ad();
    }
    else {
      uStack_18 = 0x3e369;
      iVar1 = FUN_000cc51c();
      puVar2 = &uStack_14;
      if (iVar1 != 0) {
        *(undefined1 *)(in_EAX + 8) = 7;
        return CONCAT44(unaff_ESI,1);
      }
    }
  }
LAB_0003e460:
  return (ulonglong)*(uint *)((int)puVar2 + 4) << 0x20;
}

/******************************************************************************
 * Function : dk_stack_type_03e493 (Ghidra: FUN_0003e493)
 * Prototype: undefined8 dk_stack_type_03e493(void);
 * Address  : 0x3e493 (Size: 2284 bytes)
 * Module   : impset.cpp [direct_file_string_xref]
 * OrigLine : impset.cpp:2175 ("INVALID STACK TYPE")
 * Naming   : String 'INVALID STACK TYPE'
 * Callers  : 1 -> 0x3e286
 * Callees  : 25 -> 0x274ad, 0x3aef2, 0x3af4b, 0x3b0a0, 0x3b12c, 0x3b17f, 0x3b1e2, 0x3b263, 0x3b30e, 0x3b35c ...
 * Strings  :
 *   - 0x164dcf: "impset.cpp"
 *   - 0x164dbc: "INVALID STACK TYPE"
 ******************************************************************************/
undefined8 FUN_0003e493(void)

{
  ushort uVar1;
  uint *puVar2;
  short sVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  undefined4 in_EDX;
  int extraout_EDX;
  ushort *puVar6;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined2 *local_24;
  int local_20;
  uint local_1c;
  
  local_20 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar5 = *(char *)(in_EAX + 6) * 0x1508;
  local_24 = &DAT_002e0589 + *(char *)(in_EAX + 6) * 0xa84;
  if (*(int *)(local_20 + 0x89) != *(int *)(&DAT_002e16f4 + iVar5)) {
    uVar4 = *(undefined4 *)(&DAT_002e16f4 + iVar5);
    *(undefined1 *)(local_20 + 0x95) = 0;
    *(undefined4 *)(local_20 + 0x89) = uVar4;
  }
  if ((int)(uint)*(byte *)(local_20 + 0x95) < *(int *)(&DAT_002e16f8 + iVar5)) {
    puVar6 = (ushort *)(&DAT_002e15f4 + (uint)*(byte *)(local_20 + 0x95) * 4 + iVar5);
    while ((int)(uint)*(byte *)(local_20 + 0x95) < *(int *)((int)local_24 + 0x116f)) {
      *(char *)(local_20 + 0x95) = *(char *)(local_20 + 0x95) + '\x01';
      switch(puVar6[1]) {
      case 0:
        break;
      case 1:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3e545;
        iVar5 = FUN_0003aef2();
        if (iVar5 != 0) {
          uStack_54 = 0x3e556;
          iVar5 = FUN_0003fad0();
          if (iVar5 != 0) break;
          uStack_54 = 0x3e56d;
          sVar3 = FUN_000b3b58();
          if (sVar3 == 0) {
LAB_0003e585:
            puVar6[1] = 0;
            uVar4 = 0xffffffff;
          }
          else {
            *(undefined1 *)(in_EAX + 8) = 9;
LAB_0003e579:
            *(undefined1 *)(local_20 + 0x94) = 2;
LAB_0003e639:
            uVar4 = 1;
          }
          goto LAB_0003d776;
        }
LAB_0003e593:
        puVar6[1] = 0;
        break;
      case 2:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3e5d3;
        iVar5 = FUN_0003af4b();
        if (iVar5 == 0) goto LAB_0003e593;
        uStack_54 = 0x3e5e4;
        iVar5 = FUN_0003fad0();
        if (iVar5 == 0) {
          uStack_54 = 0x3e5fb;
          sVar3 = FUN_000b3b58();
          if (sVar3 == 0) goto LAB_0003e585;
          *(undefined1 *)(in_EAX + 8) = 0x49;
          goto LAB_0003e579;
        }
        break;
      case 3:
        if (0x80 < (uint)(DAT_002e8bee - *(int *)(local_20 + 0x2c7))) {
          *(char *)(local_20 + 0x95) = *(char *)(local_20 + 0x95) + -1;
LAB_0003e629:
          uStack_54 = 0x3e62e;
          FUN_0003e33a();
          *(int *)(extraout_EDX + 0x2c7) = DAT_002e8bee;
          goto LAB_0003e639;
        }
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3e678;
        iVar5 = FUN_0003b0a0();
        if (iVar5 < 1) goto LAB_0003e593;
        uStack_54 = 0x3e68a;
        iVar5 = FUN_0003cd1f();
        if (iVar5 != 0) {
          *(undefined1 *)(local_20 + 0x93) = 0;
          *(undefined1 *)(local_20 + 0x94) = 3;
          *(short *)(local_20 + 0x8d) = (short)local_1c;
          goto LAB_0003e639;
        }
        goto LAB_0003e7c6;
      case 4:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if ((*(short *)(&DAT_002e059c + *(char *)((int)local_24 + 0xe9f) * 0x1508) != 0) &&
           (((&DAT_002e0591)[*(char *)((int)local_24 + 0xe9f) * 0x1508] & 1) != 0)) {
          uStack_54 = 1;
          iVar5 = FUN_000ca568();
          if (iVar5 == 0) {
            if ((int)*(char *)(in_EAX + 6) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
              iVar5 = FUN_000ca8c0();
joined_r0x0003e8ae:
              puVar2 = &uStack_54;
joined_r0x0003ebf0:
              if (iVar5 == 0) {
                puVar2[-1] = 0x3e7c6;
                FUN_00051374();
              }
            }
          }
          else {
            local_3c = FUN_0003b12c();
            if (local_3c == 0) {
              puVar6[1] = 0;
            }
            else {
              iVar5 = FUN_0003fad0();
              if ((iVar5 == 0) && (sVar3 = FUN_000b3b58(), sVar3 != 0)) {
                *(undefined1 *)(in_EAX + 8) = 0x44;
                *(undefined2 *)(local_20 + 0x74) = *(undefined2 *)(local_3c + 0x1b);
                goto LAB_0003e639;
              }
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 5:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if (*(short *)((int)local_24 + 0x21) != 0) {
          uStack_54 = 1;
          iVar5 = FUN_000ca568();
          if (iVar5 == 0) {
            if ((int)*(char *)(in_EAX + 6) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
              iVar5 = FUN_000ca8c0();
              goto joined_r0x0003e8ae;
            }
          }
          else {
            local_38 = FUN_0003b17f();
            if (local_38 == 0) {
              puVar6[1] = 0;
            }
            else {
              iVar5 = FUN_0003fad0();
              if ((iVar5 == 0) && (sVar3 = FUN_000b3b58(), sVar3 != 0)) {
                *(undefined1 *)(in_EAX + 8) = 0x66;
                local_44 = local_38;
LAB_0003e85e:
                *(undefined2 *)(local_20 + 0x72) = *(undefined2 *)(local_44 + 0x1b);
                goto LAB_0003e639;
              }
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 6:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if (*(short *)((int)local_24 + 0x11) != 0) {
          uStack_54 = 0x3e902;
          iVar5 = FUN_000ca6bc();
          if (iVar5 == 0) {
            if ((int)*(char *)(in_EAX + 6) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
              uStack_54 = 0x3e9fe;
              iVar5 = FUN_000ca65c();
joined_r0x0003ebf0:
              puVar2 = &local_50;
              goto joined_r0x0003ebf0;
            }
          }
          else {
            uStack_54 = 0x3e917;
            local_28 = FUN_0003b1e2();
            if (local_28 == 0) {
              puVar6[1] = 0;
            }
            else {
              uStack_54 = 0x3e92f;
              iVar5 = FUN_0003fad0();
              if (iVar5 == 0) {
                uStack_54 = 0x3e946;
                sVar3 = FUN_000b3b58();
                if (sVar3 != 0) {
                  uStack_54 = 0x3e957;
                  iVar5 = FUN_000c6574();
                  if (iVar5 == 0) {
                    uStack_54 = 0x3e988;
                    iVar5 = FUN_000c688c();
                    if (iVar5 != 0) {
                      uVar1 = *(ushort *)(local_28 + 0x1b);
                      goto LAB_0003e9af;
                    }
                  }
                  else {
                    uVar1 = *(ushort *)(local_28 + 0x1b);
LAB_0003e9af:
                    uStack_54 = (uint)uVar1;
                    FUN_000274ad();
                  }
                  *(undefined1 *)(in_EAX + 8) = 100;
                  local_44 = local_28;
                  goto LAB_0003e85e;
                }
              }
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 7:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3ea40;
        local_30 = FUN_0003b263();
        if (local_30 == 0) goto LAB_0003e593;
        uStack_54 = 0x3ea50;
        iVar5 = FUN_000c659c();
        if (iVar5 != 0) {
          uStack_54 = 0x3ea6d;
          local_40 = FUN_0003b30e();
          if (local_40 != 0) {
            uStack_54 = 0x3ea85;
            iVar5 = FUN_0003fad0();
            if (iVar5 == 0) {
              uStack_54 = 0x3ea9c;
              sVar3 = FUN_000b3b58();
              if (sVar3 == 0) goto LAB_0003e585;
              *(undefined1 *)(in_EAX + 8) = 0xb;
              *(undefined2 *)(local_20 + 0x72) = *(undefined2 *)(local_30 + 0x1b);
              *(undefined2 *)(local_20 + 0x70) = *(undefined2 *)(local_40 + 0x1b);
              goto LAB_0003e639;
            }
          }
        }
        break;
      case 8:
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        if (*(short *)((int)local_24 + 0x1b) != 0) {
          uStack_54 = 0x3eb01;
          iVar5 = FUN_000ca6bc();
          if (iVar5 == 0) {
            if ((int)*(char *)(in_EAX + 6) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
              uStack_54 = 0x3ebee;
              iVar5 = FUN_000ca65c();
              goto joined_r0x0003ebf0;
            }
            goto LAB_0003e7c6;
          }
          uStack_54 = 0x3eb16;
          local_44 = FUN_0003b263();
          if (local_44 == 0) goto LAB_0003ebb5;
          uStack_54 = 0x3eb31;
          local_2c = local_44;
          iVar5 = FUN_0003fad0();
          if (iVar5 == 0) {
            uStack_54 = 0x3eb48;
            sVar3 = FUN_000b3b58();
            if (sVar3 != 0) {
              if ((&DAT_001911f3)[*(byte *)(local_2c + 0x1a)] == '\b') {
                uVar1 = *(ushort *)(local_2c + 0x1b);
LAB_0003eba4:
                uStack_54 = (uint)uVar1;
                FUN_000274ad();
              }
              else if ((&DAT_001911f3)[*(byte *)(local_2c + 0x1a)] == '\t') {
                uVar1 = *(ushort *)(local_2c + 0x1b);
                goto LAB_0003eba4;
              }
              *(undefined1 *)(in_EAX + 8) = 0xd;
              goto LAB_0003e85e;
            }
          }
          goto LAB_0003e7c6;
        }
        break;
      case 9:
        local_1c = (uint)*puVar6;
        uStack_54 = 0x3ec1c;
        local_48 = FUN_00040160();
        if (local_48 == -1) {
LAB_0003ebb5:
          puVar6[1] = 0;
        }
        else {
          uStack_54 = 0x3ec38;
          local_34 = local_48;
          iVar5 = FUN_0003fcd0();
          if (iVar5 != 0) {
            uStack_54 = 0x3ec4f;
            sVar3 = FUN_000b3b58();
            if (sVar3 != 0) {
              *(short *)(local_20 + 0x91) = (short)local_48;
              *(short *)(local_20 + 0x8f) = (short)local_1c;
              *(undefined1 *)(local_20 + 0x94) = 1;
              *(char *)(in_EAX + 8) =
                   (*(char *)((int)local_24 + local_34 * 3 + 0xb0b) == '\x02') + '\x02';
              goto LAB_0003e639;
            }
          }
        }
LAB_0003e7c6:
        uVar4 = 0xffffffff;
        puVar6[1] = 0;
        goto LAB_0003d776;
      case 10:
        if ((int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) <=
            *(int *)(in_EAX + 0x13)) {
          if ((uint)(DAT_002e8bee - *(int *)(local_20 + 0x2c7)) < 0x81) goto LAB_0003e639;
          goto LAB_0003e629;
        }
        local_1c = (uint)*puVar6;
        local_50 = local_1c % 0x100;
        local_4c = local_1c / 0x100;
        uStack_54 = 0x3ecd2;
        iVar5 = FUN_0003b35c();
        if (iVar5 == 0) goto LAB_0003e593;
        uStack_54 = 0x3ece7;
        iVar5 = FUN_0003fad0();
        if (iVar5 == 0) {
          uStack_54 = 0x3ecfa;
          sVar3 = FUN_000b3b58();
          if (sVar3 == 0) goto LAB_0003e585;
          uVar4 = 1;
          *(undefined1 *)(in_EAX + 8) = 0x46;
          goto LAB_0003d776;
        }
        break;
      default:
        uStack_54 = 0x3ed45;
        FUN_000ddaf0(); /* LbErrorLog("impset.cpp", line 2175, "INVALID STACK TYPE") */
      }
      puVar6 = puVar6 + 2;
    }
  }
  uVar4 = 0;
LAB_0003d776:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_03ed80 (Ghidra: FUN_0003ed80)
 * Prototype: longlong sub_03ed80(void);
 * Address  : 0x3ed80 (Size: 110 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x10132, 0x3e199, 0x444a9, 0x63b6d, 0x7df48
 ******************************************************************************/
longlong FUN_0003ed80(void)

{
  int iVar1;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = FUN_0007df48();
  if (iVar1 != 0) {
    iVar1 = FUN_0003e199();
    if (iVar1 == 0) {
      FUN_00063b6d();
    }
    return CONCAT44(in_EDX,1);
  }
  if ((DAT_002e8bee - *(int *)(extraout_ECX + 9)) % 2 == 0) {
    FUN_000444a9();
  }
  FUN_00010132();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_03edee (Ghidra: FUN_0003edee)
 * Prototype: undefined8 sub_03edee(void);
 * Address  : 0x3edee (Size: 184 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x49bfc, 0x64ae7, 0x81cec
 ******************************************************************************/
undefined8 FUN_0003edee(void)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(short *)(iVar1 + 0x282) == 0) && (*(char *)(iVar1 + 0xd2) == '\0')) {
    uStack_14 = 0x3ee9c;
    FUN_00064ae7();
  }
  else {
    if (*(short *)(iVar1 + 0x282) != 0) {
      *(short *)(iVar1 + 0x282) = *(short *)(iVar1 + 0x282) + -1;
    }
    puVar2 = (undefined4 *)&stack0xfffffff0;
    if ((*(short *)(iVar1 + 0x282) != 0) &&
       (puVar2 = (undefined4 *)&stack0xfffffff0, *(char *)(iVar1 + 0xd2) == '\0')) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      uStack_14 = 0;
      puVar2 = &uStack_14;
      FUN_00049bfc();
    }
    *(undefined4 *)((int)puVar2 + -4) = 0x3ee8f;
    FUN_00081cec();
  }
  return CONCAT44(*(undefined4 *)((int)puVar2 + 4),1);
}

/******************************************************************************
 * Function : sub_03eea6 (Ghidra: FUN_0003eea6)
 * Prototype: undefined8 sub_03eea6(void);
 * Address  : 0x3eea6 (Size: 95 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x3ccdb, 0x3f88a, 0x64ae7
 ******************************************************************************/
undefined8 FUN_0003eea6(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_0003f88a();
  if ((iVar1 == 0) || (iVar1 = FUN_0003ccdb(), iVar1 == 0)) {
    FUN_00064ae7();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03ef05 (Ghidra: FUN_0003ef05)
 * Prototype: undefined8 sub_03ef05(void);
 * Address  : 0x3ef05 (Size: 75 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x3ad98, 0x3cd1f
 ******************************************************************************/
undefined8 FUN_0003ef05(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_0003ad98();
  if ((iVar1 == 0) || (iVar1 = FUN_0003cd1f(), iVar1 == 0)) {
    FUN_00064ae7();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03ef50 (Ghidra: FUN_0003ef50)
 * Prototype: undefined8 sub_03ef50(void);
 * Address  : 0x3ef50 (Size: 476 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x10010, 0x3e33a, 0x49bfc, 0x49dd9, 0x50e72, 0x50ea6, 0x64ae7, 0xe69fc
 ******************************************************************************/
undefined8 FUN_0003ef50(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  uint uVar3;
  uint *puVar4;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int local_24;
  uint local_20;
  char *local_1c;
  
  puVar4 = (uint *)&local_2c;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar3 = (uint)*(ushort *)(iVar1 + 0x8f);
  local_1c = &DAT_002e1094 + (uint)*(ushort *)(iVar1 + 0x91) * 3 + *(char *)(in_EAX + 6) * 0x1508;
  local_24 = (&DAT_0019033b)[(int)uVar3 >> 8] * 0x55;
  local_20 = (uint)((&DAT_002d33c5)[((&DAT_0019033b)[uVar3 % 0x100] + local_24) * 6] == '4');
  if (uVar3 == *(ushort *)(local_1c + 1)) {
    uStack_30 = 0x3eff3;
    iVar2 = FUN_000e69fc();
    if (iVar2 < 1) {
      uStack_30 = 0x3f00d;
      iVar2 = FUN_000e69fc();
      if (iVar2 < 1) {
        if (local_20 != 0) {
          uStack_30 = 0x3f029;
          iVar2 = FUN_00050e72();
          if (iVar2 != 0) goto LAB_0003f10d;
        }
        local_2b = (undefined1)((ulonglong)uVar3 % 0x100);
        local_2c = 0x80;
        local_29 = (undefined1)((ulonglong)uVar3 / 0x100);
        local_2a = 0x80;
        uStack_30 = 0x3f058;
        iVar2 = FUN_00010010();
        if (iVar2 != 0) goto LAB_0003f120;
        if (*local_1c != '\0') {
          if (*(byte *)(iVar1 + 0xd2) == 0) {
            puVar4 = &uStack_30;
            uStack_30 = (uint)*(byte *)(iVar1 + 0xd2);
            FUN_00049bfc();
          }
          if ((*local_1c == '\x02') &&
             ((int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) <
              *(int *)(in_EAX + 0x13))) {
            if (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2c7))) {
              *(undefined4 *)((int)puVar4 + -4) = 0x3f0c8;
              iVar2 = FUN_0003e33a();
              if (iVar2 != 0) goto LAB_0003f120;
              *(int *)(iVar1 + 0x2c7) = DAT_002e8bee;
            }
            *(undefined4 *)((int)puVar4 + -4) = 0x3f0f7;
            FUN_00050ea6();
            *(uint *)(in_EAX + 0x13) =
                 (uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
          }
          goto LAB_0003f120;
        }
      }
    }
  }
LAB_0003f10d:
  uStack_30 = 0x3f119;
  FUN_00049dd9();
  uStack_30 = 0x3f120;
  FUN_00064ae7();
LAB_0003f120:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03f12c (Ghidra: FUN_0003f12c)
 * Prototype: undefined8 sub_03f12c(void);
 * Address  : 0x3f12c (Size: 268 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x10010, 0x3b0a0, 0x49bfc, 0x49dd9, 0x64ae7, 0xe69fc
 ******************************************************************************/
undefined8 FUN_0003f12c(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  undefined1 uVar3;
  
  uVar3 = 0x80;
  iVar1 = FUN_000e69fc(0x80);
  if (iVar1 < 1) {
    iVar1 = FUN_000e69fc(uVar3);
    if (iVar1 < 1) {
      iVar1 = FUN_0003b0a0();
      if (0 < iVar1) {
        iVar1 = FUN_00010010();
        if ((iVar1 == 0) && (*(char *)(extraout_ECX_00 + 0xd2) == '\0')) {
          FUN_00049bfc(0);
        }
        uVar2 = 1;
        goto LAB_0003f232;
      }
      if (iVar1 < 0) {
        *(undefined1 *)(extraout_ECX + 0x94) = 1;
        *(short *)(extraout_ECX + 0x8f) =
             (short)(&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] * 3 + 1 +
             ((short)(&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1) * 0x100;
      }
    }
  }
  FUN_00049dd9();
  FUN_00064ae7();
  uVar2 = 0;
LAB_0003f232:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_03f238 (Ghidra: FUN_0003f238)
 * Prototype: undefined8 sub_03f238(void);
 * Address  : 0x3f238 (Size: 384 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x50f1a, 0x5117d, 0x5131e, 0x63b6d, 0x64ae7, 0x6e538, 0xcc51c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_0003f238(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  short *psVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  int local_20;
  int local_1c;
  
  if (*(int *)(in_EAX + 0x13) == 0) {
    uStack_2c = 0x3f24e;
    FUN_00063b6d();
    goto LAB_0003f125;
  }
  uStack_2c = 0x3f258;
  puVar1 = (undefined1 *)FUN_000d0f50();
  psVar4 = &local_28;
  if (((&DAT_002ddd1b < puVar1) && (psVar4 = &local_28, puVar1[3] == *(char *)(in_EAX + 6))) &&
     (psVar4 = &local_28, *(short *)(puVar1 + 10) == 2)) {
    local_1c = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] * 3 + 1;
    iVar3 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
    local_20 = (&DAT_0019033f)[iVar3 * 3] * 0x55;
    psVar4 = &local_28;
    if ((&DAT_002ddd1b <
         &DAT_002ddd1b +
         (uint)(byte)(&DAT_002d33c8)[(local_20 + (&DAT_0019033b)[local_1c]) * 6] * 0x45) &&
       (psVar4 = &local_28,
       *(short *)(&DAT_002ddd1c +
                 (uint)(byte)(&DAT_002d33c8)[(local_20 + (&DAT_0019033b)[local_1c]) * 6] * 0x45) ==
       *(short *)(puVar1 + 1))) {
      uStack_2c = 0x3f2e9;
      iVar2 = FUN_0005131e();
      if (iVar2 == 0) {
        local_26 = ((short)iVar3 * 3 + 1) * 0x100 + 0x80;
        local_28 = (short)(local_1c << 8) + 0x80;
        local_24 = *(undefined2 *)(in_EAX + 0x11);
        uStack_2c = 0x3f32a;
        iVar3 = FUN_00050f1a();
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 0x13);
          goto LAB_0003f331;
        }
      }
      else {
        uStack_2c = 0x3f2f7;
        iVar3 = FUN_0005117d();
LAB_0003f331:
        *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) - iVar3;
      }
      DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
      DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
      uStack_2c = 0x100;
      uStack_30 = 2;
      uStack_34 = 0;
      uStack_38 = 3;
      FUN_0006e538();
      psVar4 = (short *)&uStack_38;
      if (((*(int *)(in_EAX + 0x13) != 0) &&
          (psVar4 = (short *)&uStack_38, *(ushort *)(puVar1 + 0x10) < *(ushort *)(puVar1 + 0xe))) &&
         (iVar3 = FUN_000cc51c(), psVar4 = (short *)&uStack_38, iVar3 != 0)) {
        *(undefined1 *)(in_EAX + 8) = 7;
        goto LAB_0003f125;
      }
    }
  }
  *(undefined4 *)((int)psVar4 + -4) = 0x3f280;
  FUN_00064ae7();
LAB_0003f125:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03f3b8 (Ghidra: FUN_0003f3b8)
 * Prototype: longlong sub_03f3b8(void);
 * Address  : 0x3f3b8 (Size: 63 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x64ae7, 0xc6494
 ******************************************************************************/
longlong FUN_0003f3b8(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  uint in_EDX;
  
  if ((uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) !=
      *(uint *)(in_EAX + 0x13) &&
      -1 < (int)((uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) -
                *(uint *)(in_EAX + 0x13))) {
    iVar1 = FUN_000c6494();
    *(int *)(extraout_ECX + 0x13) = *(int *)(extraout_ECX + 0x13) + iVar1;
  }
  FUN_00064ae7();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_03f3f7 (Ghidra: FUN_0003f3f7)
 * Prototype: undefined8 sub_03f3f7(void);
 * Address  : 0x3f3f7 (Size: 52 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x3aef2
 ******************************************************************************/
undefined8 FUN_0003f3f7(void)

{
  undefined4 in_EDX;
  
  FUN_0003aef2();
  FUN_00064ae7();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03f42b (Ghidra: FUN_0003f42b)
 * Prototype: undefined8 sub_03f42b(void);
 * Address  : 0x3f42b (Size: 149 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x3aef2, 0x49bfc, 0x49dd9, 0x64ae7
 ******************************************************************************/
undefined8 FUN_0003f42b(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  
  if (((int)((uint)*(byte *)(in_EAX + 0xe) -
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2e)) < 1) &&
     ((int)((uint)*(byte *)(in_EAX + 0x10) -
           (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x30)) < 1)) {
    iVar1 = FUN_0003aef2();
    if (iVar1 != 0) {
      if (*(char *)(extraout_ECX + 0xd2) == '\0') {
        FUN_00049bfc(0);
      }
      uVar2 = 1;
      goto LAB_0003f125;
    }
  }
  FUN_00049dd9();
  FUN_00064ae7();
  uVar2 = 0;
LAB_0003f125:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_03f4c0 (Ghidra: FUN_0003f4c0)
 * Prototype: undefined8 sub_03f4c0(void);
 * Address  : 0x3f4c0 (Size: 52 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x3af4b
 ******************************************************************************/
undefined8 FUN_0003f4c0(void)

{
  undefined4 in_EDX;
  
  FUN_0003af4b();
  FUN_00064ae7();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03f4f4 (Ghidra: FUN_0003f4f4)
 * Prototype: undefined8 sub_03f4f4(void);
 * Address  : 0x3f4f4 (Size: 368 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x274ad, 0x3aef2, 0x3af4b, 0x49bfc, 0x51374
 ******************************************************************************/
undefined8 FUN_0003f4f4(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  
  iVar5 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
  iVar2 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
  if (((int)((uint)*(byte *)(in_EAX + 0xe) -
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2e)) < 1) &&
     ((int)((uint)*(byte *)(in_EAX + 0x10) -
           (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x30)) < 1)) {
    iVar3 = FUN_0003af4b();
    if (iVar3 == 0) {
      iVar5 = FUN_0003aef2();
      if (iVar5 == 0) goto LAB_0003f4a6;
      if (*(char *)(extraout_ECX_00 + 0xd2) != '\x1f') {
        FUN_00049bfc(0);
      }
    }
    else if (*(char *)(extraout_ECX + 0xd2) == '\0') {
      FUN_00049bfc(0);
      if (((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar5 + iVar2 * 0x55) * 6] * 0x16] == '\x04'
          ) && (bVar1 = (&DAT_002d33c8)
                        [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
                         (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6], (uint)bVar1 * 0x45 != 0)) {
        FUN_000274ad(0);
        if ((int)(char)(&DAT_002ddd1e)[(uint)bVar1 * 0x45] ==
            (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          FUN_00051374();
        }
      }
    }
    uVar4 = 1;
  }
  else {
LAB_0003f4a6:
    FUN_00049dd9();
    FUN_00064ae7();
    uVar4 = 0;
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_03f664 (Ghidra: FUN_0003f664)
 * Prototype: longlong sub_03f664(void);
 * Address  : 0x3f664 (Size: 30 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x3df64, 0x63b6d
 ******************************************************************************/
longlong FUN_0003f664(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_0003df64();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,1);
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_03f682 (Ghidra: FUN_0003f682)
 * Prototype: undefined8 sub_03f682(void);
 * Address  : 0x3f682 (Size: 121 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x3df64, 0x3e286, 0x3e2d8, 0xb5264
 ******************************************************************************/
undefined8 FUN_0003f682(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  int extraout_EDX;
  
  if (1 < (uint)(DAT_002e8bee - *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a))) {
    iVar2 = FUN_0003df64();
    if (iVar2 == 0) {
      iVar2 = FUN_0003e286();
      if (iVar2 == 0) {
        iVar2 = FUN_0003e2d8();
        if (iVar2 == 0) {
          sVar1 = FUN_000b5264();
          if (sVar1 != 0) {
            *(undefined1 *)(extraout_EDX + 8) = 1;
            return CONCAT44(in_EDX,1);
          }
          *(int *)(&DAT_002e1824 + *(char *)(extraout_EDX + 6) * 0x1508) =
               *(int *)(&DAT_002e1824 + *(char *)(extraout_EDX + 6) * 0x1508) + 1;
          return CONCAT44(in_EDX,1);
        }
      }
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03f6fc (Ghidra: FUN_0003f6fc)
 * Prototype: undefined4 sub_03f6fc(void);
 * Address  : 0x3f6fc (Size: 83 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3cee2, 0x3cf87
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003f6fc(void)

{
  uint in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  if ((((&DAT_002d33ca)[((&DAT_0019033b)[in_EDX * 3] + (&DAT_0019033b)[unaff_EBX * 3] * 0x55) * 6] &
       7) == in_EAX) &&
     (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] * 0x16] & 0x40)
      != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03f74f (Ghidra: FUN_0003f74f)
 * Prototype: undefined4 sub_03f74f(void);
 * Address  : 0x3f74f (Size: 94 bytes)
 * Module   : impset.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3fc88
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003f74f(void)

{
  uint in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  if (((((&DAT_002d33ca)[((&DAT_0019033b)[in_EDX * 3] + (&DAT_0019033b)[unaff_EBX * 3] * 0x55) * 6]
        & 7) == in_EAX) ||
      ((uint)((&DAT_002d33ca)
              [((&DAT_0019033b)[in_EDX * 3] + (&DAT_0019033b)[unaff_EBX * 3] * 0x55) * 6] & 7) ==
       (uint)DAT_002eb543)) &&
     ((&DAT_001921d2)[(uint)(byte)(&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] * 0x16] != '\0'))
  {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03fad0 (Ghidra: FUN_0003fad0)
 * Prototype: undefined4 sub_03fad0(void);
 * Address  : 0x3fad0 (Size: 175 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 15 -> 0x3c762, 0x3c91b, 0x3ca68, 0x3cbaa, 0x3cee2, 0x3cf87, 0x3d02c, 0x3d0cf, 0x3d155, 0x3d2d5 ...
 * Callees  : 1 -> 0x3f859
 ******************************************************************************/
undefined4 FUN_0003fad0(void)

{
  undefined2 uVar1;
  byte *in_EAX;
  int iVar2;
  byte *pbVar3;
  byte *extraout_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  uVar1 = (undefined2)(in_EDX << 8);
  pbVar3 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[(char)in_EAX[6] * 0xa84]];
  do {
    if (pbVar3 <= DAT_001ae9fc) {
      return 0;
    }
    if (((((*pbVar3 & 0x10) == 0) && ((pbVar3[1] & 2) == 0)) && (pbVar3 != in_EAX)) &&
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x2e) == in_EDX &&
        (*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x30) == unaff_EBX)))) {
      iVar2 = FUN_0003f859(uVar1);
      pbVar3 = extraout_ECX;
      if (iVar2 != 0) {
        return 1;
      }
    }
    pbVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar3 + 100)] + 0x1f)];
  } while( true );
}

/******************************************************************************
 * Function : sub_03fcd0 (Ghidra: FUN_0003fcd0)
 * Prototype: undefined4 sub_03fcd0(void);
 * Address  : 0x3fcd0 (Size: 519 bytes)
 * Module   : impset.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x3ccdb, 0x3d633, 0x3d77d, 0x3d8b0, 0x3e493
 * Callees  : 8 -> 0x3f88a, 0x3fad0, 0x3fc39, 0x3fc88, 0x50e72, 0x827fc, 0xb28e8, 0xe69fc
 ******************************************************************************/
undefined4 FUN_0003fcd0(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_ECX;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_EDX;
  uint uVar8;
  int *unaff_EBX;
  int iVar9;
  undefined8 uVar10;
  int local_34;
  int local_20;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(in_EAX + 0xe);
  uVar8 = (in_EDX & 0xffff) % 0x100;
  cVar2 = (&DAT_002d33c5)
          [((&DAT_0019033b)[(in_EDX & 0xffff) / 0x100] * 0x55 + (&DAT_0019033b)[uVar8]) * 6];
  iVar5 = FUN_0003fc88();
  if (iVar5 != 0) {
    FUN_000e69fc();
    uVar10 = FUN_000e69fc();
    if ((int)uVar10 < (int)((ulonglong)uVar10 >> 0x20)) {
      if (uVar8 == bVar1 || (int)(uVar8 - bVar1) < 0) {
        local_10 = 1;
      }
      else {
        local_10 = 3;
      }
    }
    else if (extraout_ECX < 1) {
      local_10 = 2;
    }
    else {
      local_10 = 0;
    }
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      iVar9 = uVar8 + *(char *)((int)&DAT_0018b67b + local_10 * 2 + 3) * 2;
      iVar5 = FUN_0003fc39();
      if (iVar5 != 0) {
        local_34 = 0;
        for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
          iVar5 = iVar9;
          if (local_14 != 0) {
            iVar5 = *(char *)((int)&DAT_0018b67b +
                             (local_10 + *(int *)(&DAT_0017c060 + local_34) & 3U) * 2 + 3) + iVar9;
          }
          iVar6 = FUN_0003fc39();
          if (((iVar6 != 0) &&
              (((cVar2 != '4' || (iVar6 = FUN_00050e72(), iVar6 == 0)) &&
               (iVar6 = FUN_0003f88a(), iVar6 == 0)))) && (iVar6 = FUN_0003fad0(), iVar6 == 0)) {
            sVar3 = (short)(iVar5 << 8) + 0x80;
            uVar4 = FUN_000b28e8(sVar3,0);
            uVar7 = FUN_000827fc(sVar3,uVar4);
            if ((uVar7 & 0xff) != 0xffffffff) {
              *unaff_EBX = iVar5;
              *in_ECX = extraout_ECX_00;
              return 1;
            }
          }
          local_34 = local_34 + 4;
        }
      }
      local_10 = (local_10 + 1) % 4;
    }
  }
  return 0;
}

