/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: imptool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 16
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_03f7ad (Ghidra: FUN_0003f7ad)
 * Prototype: undefined4 sub_03f7ad(void);
 * Address  : 0x3f7ad (Size: 95 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x11606, 0x3f80c, 0x3fed7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003f7ad(void)

{
  uint in_EAX;
  int in_EDX;
  uint uVar1;
  int unaff_EBX;
  
  uVar1 = (uint)(byte)(&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6];
  if ((((((&DAT_002d33ca)[((&DAT_0019033b)[in_EDX * 3] + (&DAT_0019033b)[unaff_EBX * 3] * 0x55) * 6]
         & 7) == in_EAX) && ((&DAT_001921d2)[uVar1 * 0x16] != '\0')) && (uVar1 != 0xd)) &&
     (uVar1 != 0xc)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03f80c (Ghidra: FUN_0003f80c)
 * Prototype: undefined4 sub_03f80c(void);
 * Address  : 0x3f80c (Size: 77 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x14faa, 0x3aef2, 0x3af4b, 0x3b0a0, 0x3b49d, 0x3b643, 0x3fbe3, 0x66111, 0x70e59, 0x8f518
 * Callees  : 1 -> 0x3f7ad
 ******************************************************************************/
undefined4 FUN_0003f80c(void)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = 0;
  while( true ) {
    if (7 < iVar1) {
      return 0;
    }
    iVar1 = FUN_0003f7ad();
    if (iVar1 != 0) break;
    iVar1 = extraout_ECX + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03f859 (Ghidra: FUN_0003f859)
 * Prototype: undefined4 sub_03f859(void);
 * Address  : 0x3f859 (Size: 49 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3fa16, 0x3fad0
 * Callees  : 1 -> 0xdc440
 ******************************************************************************/
undefined4 FUN_0003f859(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000dc440();
  iVar2 = FUN_000dc440();
  if ((iVar2 < iVar1) && (0x600 < iVar1 - iVar2)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03f88a (Ghidra: FUN_0003f88a)
 * Prototype: undefined4 sub_03f88a(void);
 * Address  : 0x3f88a (Size: 94 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3eea6, 0x3fcd0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003f88a(void)

{
  byte *pbVar1;
  byte *in_EAX;
  uint uVar2;
  int in_EDX;
  int unaff_EBX;
  
  uVar2 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    pbVar1 = (&DAT_001ae9fc)[uVar2];
    if (pbVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((pbVar1[0x1f] == 5) && (pbVar1 != in_EAX)) && ((*pbVar1 & 0x10) == 0)) &&
       (((pbVar1[1] & 2) == 0 && ((pbVar1[7] == 4 || (pbVar1[7] == 5)))))) break;
    uVar2 = (uint)*(ushort *)(pbVar1 + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03f8e8 (Ghidra: FUN_0003f8e8)
 * Prototype: undefined4 sub_03f8e8(void);
 * Address  : 0x3f8e8 (Size: 163 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3c31c, 0x3c458, 0x3c53a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003f8e8(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  int in_EDX;
  char cVar3;
  
  uVar1 = (&DAT_002e05b8)[in_EAX * 0xa84];
  do {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    if (uVar2 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x72) == *(short *)(in_EDX + 0x1b)) {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 == '\v') {
        return 1;
      }
      if (*(char *)(uVar2 + 7) == 'G') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 == '\f') {
        return 1;
      }
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 == '\r') {
        return 1;
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_03f98b (Ghidra: FUN_0003f98b)
 * Prototype: longlong sub_03f98b(void);
 * Address  : 0x3f98b (Size: 139 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3b2c0, 0x3b30e, 0x3c3e7
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0003f98b(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  uint in_EDX;
  char cVar3;
  
  uVar1 = (&DAT_002e05b8)[*(char *)(in_EAX + 6) * 0xa84];
  do {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    if (uVar2 <= DAT_001ae9fc) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x70) == *(short *)(in_EAX + 0x1b)) {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 == '\v') {
LAB_0003fa09:
        return CONCAT44(in_EDX,1);
      }
      if (*(char *)(uVar2 + 7) == 'G') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 == '\f') goto LAB_0003fa09;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_03fa16 (Ghidra: FUN_0003fa16)
 * Prototype: undefined4 sub_03fa16(void);
 * Address  : 0x3fa16 (Size: 186 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3cd63
 * Callees  : 1 -> 0x3f859
 ******************************************************************************/
undefined4 FUN_0003fa16(void)

{
  ushort uVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  byte *pbVar4;
  byte *extraout_ECX;
  uint in_EDX;
  undefined2 uVar5;
  uint unaff_EBX;
  
  uVar5 = (undefined2)(in_EDX << 8);
  uVar1 = (&DAT_002e05b8)[*(char *)(in_EAX + 6) * 0xa84];
  do {
    pbVar4 = (&DAT_001ae9fc)[uVar1];
    if (pbVar4 <= DAT_001ae9fc) {
      return 0;
    }
    if (((*pbVar4 & 0x10) == 0) && ((pbVar4[1] & 2) == 0)) {
      if (pbVar4[7] == 0xe) {
        bVar2 = pbVar4[8];
      }
      else {
        bVar2 = pbVar4[7];
      }
      if (((bVar2 == 0x49) &&
          (*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x2e) == in_EDX)) &&
         (*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x30) == unaff_EBX)) {
        iVar3 = FUN_0003f859(uVar5);
        pbVar4 = extraout_ECX;
        if (iVar3 != 0) {
          return 1;
        }
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_03fb7f (Ghidra: FUN_0003fb7f)
 * Prototype: undefined4 sub_03fb7f(void);
 * Address  : 0x3fb7f (Size: 100 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003fb7f(void)

{
  ushort uVar1;
  byte *pbVar2;
  int in_EAX;
  uint in_EDX;
  uint unaff_EBX;
  
  uVar1 = (&DAT_002e05b8)[in_EAX * 0xa84];
  while( true ) {
    pbVar2 = (&DAT_001ae9fc)[uVar1];
    if (pbVar2 <= DAT_001ae9fc) {
      return 0;
    }
    if (((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) &&
        (*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x2e) == in_EDX)) &&
       (*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x30) == unaff_EBX)) break;
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03fbe3 (Ghidra: FUN_0003fbe3)
 * Prototype: undefined4 sub_03fbe3(void);
 * Address  : 0x3fbe3 (Size: 86 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x3adf1, 0x3f80c
 ******************************************************************************/
undefined4 FUN_0003fbe3(void)

{
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if ((&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] == '\n') {
    iVar1 = FUN_0003f80c(unaff_EBX * 3 + 1);
    if (iVar1 != 0) {
      iVar1 = FUN_0003adf1();
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03fc39 (Ghidra: FUN_0003fc39)
 * Prototype: undefined4 sub_03fc39(void);
 * Address  : 0x3fc39 (Size: 79 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3fcd0
 * Callees  : 1 -> 0xb3afc
 ******************************************************************************/
undefined4 FUN_0003fc39(void)

{
  byte in_AL;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  iVar1 = (unaff_EBX * 0x100 + in_EDX) * 5;
  if (((*(byte *)((int)&DAT_00279203 + iVar1) & 0x10) == 0) &&
     ((*(uint *)((int)&DAT_00279203 + iVar1 + 1) >> 0x1c & (uint)(1 << (in_AL & 0x1f) == 0)) == 0))
  {
    iVar1 = FUN_000b3afc();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03fc88 (Ghidra: FUN_0003fc88)
 * Prototype: undefined4 sub_03fc88(void);
 * Address  : 0x3fc88 (Size: 72 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3c096, 0x3fcd0
 * Callees  : 1 -> 0x3f74f
 ******************************************************************************/
undefined4 FUN_0003fc88(void)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = 0;
  while( true ) {
    if (7 < iVar1) {
      return 0;
    }
    iVar1 = FUN_0003f74f();
    if (iVar1 != 0) break;
    iVar1 = extraout_ECX + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03fed7 (Ghidra: FUN_0003fed7)
 * Prototype: undefined4 sub_03fed7(void);
 * Address  : 0x3fed7 (Size: 343 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3cd1f, 0x3de04
 * Callees  : 6 -> 0x3ad98, 0x3f7ad, 0x3fad0, 0x827fc, 0xb28e8, 0xe69fc
 ******************************************************************************/
undefined4 FUN_0003fed7(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  undefined4 *in_ECX;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_EDX;
  uint uVar6;
  int *unaff_EBX;
  int iVar7;
  undefined8 uVar8;
  int local_20;
  int local_14;
  
  bVar1 = *(byte *)(in_EAX + 0xe);
  uVar6 = (in_EDX & 0xffff) % 0x100;
  FUN_000e69fc();
  uVar8 = FUN_000e69fc();
  if ((int)uVar8 < (int)((ulonglong)uVar8 >> 0x20)) {
    if (uVar6 == bVar1 || (int)(uVar6 - bVar1) < 0) {
      local_14 = 1;
    }
    else {
      local_14 = 3;
    }
  }
  else if (extraout_ECX < 1) {
    local_14 = 2;
  }
  else {
    local_14 = 0;
  }
  local_20 = 0;
  do {
    if (3 < local_20) {
      return 0;
    }
    iVar7 = uVar6 + *(char *)((int)&DAT_0018b67b + local_14 * 2 + 3) * 2;
    iVar4 = FUN_0003f7ad();
    if (iVar4 != 0) {
      iVar4 = FUN_0003ad98();
      if (iVar4 == 0) {
        iVar4 = FUN_0003fad0();
        if (iVar4 == 0) {
          sVar2 = (short)iVar7 * 0x100 + 0x80;
          uVar3 = FUN_000b28e8(sVar2,0);
          uVar5 = FUN_000827fc(sVar2,uVar3);
          if ((uVar5 & 0xff) != 0xffffffff) {
            *unaff_EBX = iVar7;
            *in_ECX = extraout_ECX_00;
            return 1;
          }
        }
      }
    }
    local_14 = (local_14 + 1) % 4;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_04002e (Ghidra: FUN_0004002e)
 * Prototype: uint sub_04002e(void);
 * Address  : 0x4002e (Size: 172 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14a9f
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0004002e(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 in_DL;
  int unaff_EBX;
  undefined2 *puVar5;
  
  iVar1 = in_EAX * 0x1508;
  uVar2 = 0;
  puVar5 = &DAT_002e0589 + in_EAX * 0xa84;
  for (puVar3 = puVar5;
      ((int)uVar2 < (int)(uint)*(ushort *)(&DAT_002e1080 + iVar1) &&
      (*(char *)((int)puVar3 + 0xb0b) != '\0')); puVar3 = (undefined2 *)((int)puVar3 + 3)) {
    uVar2 = uVar2 + 1;
  }
  uVar4 = (uint)*(ushort *)(&DAT_002e1080 + iVar1);
  if (uVar2 == uVar4) {
    if (299 < uVar4) {
      return uVar2 ^ uVar4;
    }
    *(short *)(&DAT_002e1080 + iVar1) = *(short *)(&DAT_002e1080 + iVar1) + 1;
  }
  *(undefined1 *)((int)puVar5 + uVar2 * 3 + 0xb0b) = in_DL;
  *(short *)((int)puVar5 + uVar2 * 3 + 0xb0c) =
       *(short *)(&DAT_0019033b + unaff_EBX % 0x100) * 3 + 1 +
       (*(short *)(&DAT_0019033b +
                  ((int)((unaff_EBX + (unaff_EBX >> 0x1f) * -0x100) -
                        (uint)((unaff_EBX >> 0x1f) << 7 < 0)) >> 8)) * 3 + 1) * 0x100;
  *(int *)(&DAT_002e1418 + iVar1) = *(int *)(&DAT_002e1418 + iVar1) + 1;
  return 1;
}

/******************************************************************************
 * Function : dk_stack_pos_0400da (Ghidra: FUN_000400da)
 * Prototype: undefined4 dk_stack_pos_0400da(void);
 * Address  : 0x400da (Size: 134 bytes)
 * Module   : imptool.cpp [direct_file_string_xref]
 * OrigLine : imptool.cpp:496 ("INVALID STACK POS")
 * Naming   : String 'INVALID STACK POS'
 * Callers  : 4 -> 0x1495c, 0x14e9f, 0x4a0d6, 0xda7bc
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x164dee: "imptool.cpp"
 *   - 0x164ddc: "INVALID STACK POS"
 ******************************************************************************/
undefined4 FUN_000400da(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar2;
  int iVar3;
  
  iVar1 = in_EAX * 0x1508;
  if ((-1 < in_EDX) && (in_EDX < (int)(uint)*(ushort *)(&DAT_002e1080 + iVar1))) {
    *(undefined1 *)((int)&DAT_002e0589 + in_EDX * 3 + 0xb0b + iVar1) = 0;
    *(undefined2 *)((int)&DAT_002e0589 + in_EDX * 3 + 0xb0c + iVar1) = 0;
    iVar3 = *(ushort *)(&DAT_002e1080 + iVar1) - 1;
    *(int *)(&DAT_002e1418 + iVar1) = *(int *)(&DAT_002e1418 + iVar1) + -1;
    if (in_EDX == iVar3) {
      for (iVar2 = (int)&DAT_002e0589 + iVar3 * 3 + iVar1;
          (-1 < iVar3 && (*(char *)(iVar2 + 0xb0b) == '\0')); iVar2 = iVar2 + -3) {
        iVar3 = iVar3 + -1;
      }
      *(short *)(&DAT_002e1080 + iVar1) = (short)iVar3 + 1;
    }
    return 1;
  }
  FUN_000ddaf0(); /* LbErrorLog("imptool.cpp", line 496, "INVALID STACK POS") */
  return 0;
}

/******************************************************************************
 * Function : sub_040160 (Ghidra: FUN_00040160)
 * Prototype: int sub_040160(void);
 * Address  : 0x40160 (Size: 74 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x3b0a0, 0x3d633, 0x3d77d, 0x3e493
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00040160(void)

{
  int in_EAX;
  char *pcVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &DAT_002e1094 + in_EAX * 0x1508;
  while( true ) {
    if ((int)(uint)*(ushort *)(&DAT_002e1080 + in_EAX * 0x1508) <= iVar2) {
      return -1;
    }
    if ((*(ushort *)(pcVar1 + 1) == in_EDX) && (*pcVar1 != '\x03')) break;
    pcVar1 = pcVar1 + 3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0401aa (Ghidra: FUN_000401aa)
 * Prototype: int sub_0401aa(void);
 * Address  : 0x401aa (Size: 66 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x14614, 0x1495c, 0x14e9f, 0x198cd, 0x1bc3e, 0x1d8a1, 0x1dbbc, 0x1e5de, 0x1f8d4, 0x1fa89 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000401aa(void)

{
  int in_EAX;
  undefined *puVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_002e1094 + in_EAX * 0x1508;
  while( true ) {
    if ((int)(uint)*(ushort *)(&DAT_002e1080 + in_EAX * 0x1508) <= iVar2) {
      return -1;
    }
    if (*(ushort *)(puVar1 + 1) == in_EDX) break;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

