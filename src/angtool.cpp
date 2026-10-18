/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: angtool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 22
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_010ecc (Ghidra: FUN_00010ecc)
 * Prototype: longlong sub_010ecc(void);
 * Address  : 0x10ecc (Size: 7 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x110ed
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00010ecc(void)

{
  int unaff_EBP;
  
  return (ulonglong)*(uint *)(unaff_EBP + 0xc) << 0x20;
}

/******************************************************************************
 * Function : sub_010ed3 (Ghidra: FUN_00010ed3)
 * Prototype: longlong sub_010ed3(void);
 * Address  : 0x10ed3 (Size: 153 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x49bfc, 0x63b6d
 ******************************************************************************/
longlong FUN_00010ed3(void)

{
  short sVar1;
  int in_EAX;
  uint in_EDX;
  uint *puVar2;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  if ((uint)(byte)(&DAT_002d33c8)
                  [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                   (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45 != 0) {
    sVar1 = *(short *)(&DAT_002ddd25 +
                      (uint)(byte)(&DAT_002d33c8)
                                  [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                                   (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45);
    puVar2 = auStack_c;
    if ((((sVar1 != 1) && (puVar2 = auStack_c, sVar1 != 7)) && (puVar2 = auStack_c, sVar1 != 0xf))
       && (puVar2 = auStack_c, *(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0')
       ) {
      puVar2 = &uStack_10;
      uStack_10 = 0;
      FUN_00049bfc();
    }
    return CONCAT44(*puVar2,1);
  }
  uStack_10 = 0x10f66;
  auStack_c[0] = in_EDX;
  FUN_00063b6d();
  return (ulonglong)auStack_c[0] << 0x20;
}

/******************************************************************************
 * Function : sub_010f6c (Ghidra: FUN_00010f6c)
 * Prototype: longlong sub_010f6c(void);
 * Address  : 0x10f6c (Size: 115 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x63b6d, 0x7d674, 0xb3b58
 ******************************************************************************/
longlong FUN_00010f6c(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  if (&DAT_002ddd1b <
      &DAT_002ddd1b +
      (uint)(byte)(&DAT_002d33c8)
                  [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                   (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45) {
    iVar1 = FUN_0007d674();
    if (iVar1 != 0) {
      FUN_000b3b58();
      *(undefined1 *)(in_EAX + 8) = 0x72;
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_010fdf (Ghidra: FUN_00010fdf)
 * Prototype: longlong sub_010fdf(void);
 * Address  : 0x10fdf (Size: 155 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x444a9, 0x5102d, 0x5131e, 0x63b6d
 ******************************************************************************/
longlong FUN_00010fdf(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  
  uVar1 = *(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
  if ((&DAT_002ddd1b <
       &DAT_002ddd1b +
       (uint)(byte)(&DAT_002d33c8)
                   [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
                    (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6] * 0x45) &&
     (*(short *)(&DAT_002ddd25 +
                (uint)(byte)(&DAT_002d33c8)
                            [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
                             (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6] * 0x45) == 2)) {
    iVar2 = FUN_0005131e();
    if ((iVar2 != 0) &&
       ((uint)uVar1 != *(uint *)(extraout_ECX + 0x13) &&
        -1 < (int)((uint)uVar1 - *(uint *)(extraout_ECX + 0x13)))) {
      iVar2 = FUN_0005102d();
      *(int *)(extraout_ECX_00 + 0x13) = *(int *)(extraout_ECX_00 + 0x13) + iVar2;
      iVar3 = FUN_000444a9();
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x13) = iVar2;
      }
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_01107a (Ghidra: FUN_0001107a)
 * Prototype: undefined8 sub_01107a(void);
 * Address  : 0x1107a (Size: 115 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x239ee, 0x63b6d, 0x64a5f, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0001107a(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  cVar1 = FUN_000239ee();
  if (cVar1 != '\0') {
    cVar1 = FUN_00064a5f();
    if (cVar1 != '\0') {
      FUN_000b3b58();
      uVar2 = 1;
      *(undefined1 *)(in_EAX + 8) = 0x76;
      goto LAB_000110db;
    }
  }
  FUN_00063b6d();
  uVar2 = 0;
LAB_000110db:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0110ed (Ghidra: FUN_000110ed)
 * Prototype: undefined8 sub_0110ed(void);
 * Address  : 0x110ed (Size: 295 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x10010, 0x10ecc, 0x49bfc, 0x63b6d
 ******************************************************************************/
undefined8 FUN_000110ed(void)

{
  ulonglong uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar3 + 0x284) != 0) {
    uVar1 = (ulonglong)(uint)*(ushort *)(iVar3 + 0x284) % 0x100;
    iVar4 = (int)uVar1;
    uVar2 = (int)(uint)*(ushort *)(iVar3 + 0x284) >> 8;
    if (((*(byte *)((int)&DAT_00279203 + (uVar2 * 0x100 + iVar4) * 5) & 0x10) != 0) &&
       ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[iVar4] + (&DAT_0019033b)[uVar2] * 0x55) * 6] & 7) ==
        (int)*(char *)(in_EAX + 6))) {
      if ((&DAT_001921cf)
          [(uint)(byte)(&DAT_002d33c5)[((int)(uVar1 / 3) + (uVar2 / 3) * 0x55) * 6] * 0x16] ==
          '\x03') {
        if (*(char *)(iVar3 + 0xd2) == '\0') {
          iVar3 = FUN_00010010((short)(iVar4 << 8) + 0x80);
          if (iVar3 == 0) {
            FUN_00049bfc(0);
          }
        }
        return CONCAT44(in_EDX,1);
      }
    }
  }
  FUN_00063b6d();
  uVar5 = FUN_00010ecc();
  return uVar5;
}

/******************************************************************************
 * Function : sub_011214 (Ghidra: FUN_00011214)
 * Prototype: longlong sub_011214(void);
 * Address  : 0x11214 (Size: 302 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x39a74, 0x39ba4, 0x39c3e, 0x39d83, 0x3a237
 ******************************************************************************/
longlong FUN_00011214(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint in_EDX;
  int iVar10;
  int local_24;
  int local_1c;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar3 + 0x9a) != '\0') {
    uVar5 = FUN_00039d83();
    if (uVar5 == in_EAX) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
      if (uVar5 != 0) {
        FUN_0003a237();
      }
    }
    bVar2 = *(byte *)(in_EAX + 0x10);
    local_1c = ((uint)*(byte *)(in_EAX + 0xe) - (uint)*(byte *)(in_EAX + 0xe) % 3) * 5;
    local_24 = local_1c + 0xf00;
    iVar9 = local_1c + 0xf;
    do {
      iVar6 = ((uint)bVar2 - (uint)bVar2 % 3) * 0x500;
      iVar10 = local_1c + iVar6;
      do {
        for (uVar5 = (*(uint *)((int)&DAT_00279203 + iVar10 + 1) & 0x3fffff) >> 0xb;
            uVar5 = (&DAT_001ae9fc)[uVar5], DAT_001ae9fc < uVar5;
            uVar5 = (uint)*(ushort *)(uVar5 + 2)) {
          if ((((*(char *)(uVar5 + 6) == *(char *)(in_EAX + 6)) &&
               (*(char *)(uVar5 + 0x1f) == '\x05')) && (uVar5 != in_EAX)) &&
             (*(char *)(uVar5 + 0x1a) != '\x17')) {
            uVar7 = FUN_00039d83();
            if (uVar7 != 0) {
              uVar5 = extraout_ECX;
              if (uVar7 == in_EAX) goto LAB_000112d5;
              FUN_00039c3e();
            }
            if (bVar4) {
              iVar8 = FUN_00039a74();
              uVar5 = extraout_ECX_00;
            }
            else {
              iVar8 = FUN_00039ba4();
              uVar5 = extraout_ECX_01;
            }
            if (iVar8 != 0) {
              pcVar1 = (char *)(iVar3 + 0x9a);
              *pcVar1 = *pcVar1 + -1;
            }
          }
LAB_000112d5:
        }
        iVar10 = iVar10 + 0x500;
      } while (iVar10 != local_24 + iVar6);
      local_1c = local_1c + 5;
      local_24 = local_24 + 5;
    } while (local_1c != iVar9);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_011342 (Ghidra: FUN_00011342)
 * Prototype: longlong sub_011342(void);
 * Address  : 0x11342 (Size: 198 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x3a32d, 0xb3be4
 ******************************************************************************/
longlong FUN_00011342(void)

{
  ushort uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  uint uVar4;
  
  iVar3 = *(char *)(in_EAX + 6) * 0x1508;
  if ((*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a) != '\0') &&
     (1 < (byte)(&DAT_002e0ea2)[iVar3])) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uVar4 = DAT_002e8bf6 % (uint)(byte)(&DAT_002e0ea2)[iVar3];
    for (uVar1 = (&DAT_002e05b6)[*(char *)(in_EAX + 6) * 0xa84];
        (uVar4 != 0 && (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]));
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar1] + 100)] + 0x1f)) {
      uVar4 = uVar4 - 1;
    }
    sVar2 = FUN_000b3be4();
    if (sVar2 != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x77;
    }
    return CONCAT44(in_EDX,1);
  }
  FUN_0003a32d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_011408 (Ghidra: FUN_00011408)
 * Prototype: undefined8 sub_011408(void);
 * Address  : 0x11408 (Size: 238 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x16175, 0x18087, 0x189d4
 ******************************************************************************/
undefined8 FUN_00011408(void)

{
  undefined4 uVar1;
  uint in_EAX;
  int iVar2;
  undefined4 in_EDX;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  int aiStack_3c [5];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  piVar4 = aiStack_3c + 2;
  aiStack_3c[2] = ((uint)*(byte *)(in_EAX + 0x10) - (uint)*(byte *)(in_EAX + 0x10) % 3) * 0x500;
  local_20 = ((uint)*(byte *)(in_EAX + 0xe) - (uint)*(byte *)(in_EAX + 0xe) % 3) * 5;
  local_28 = local_20 + 0xf00;
  local_24 = 0;
  aiStack_3c[4] = aiStack_3c[2];
  do {
    if (2 < local_24) {
      uVar1 = 0;
LAB_00011201:
      return CONCAT44(in_EDX,uVar1);
    }
    aiStack_3c[3] = aiStack_3c[2] + local_28;
    for (local_1c = local_20 + aiStack_3c[4]; local_1c < aiStack_3c[3]; local_1c = local_1c + 0x500)
    {
      for (uVar5 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + local_1c + 1) & 0x3fffff) >> 0xb]
          ; DAT_001ae9fc < uVar5; uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 2)]) {
        puVar3 = (undefined1 *)piVar4;
        if (((*(char *)(uVar5 + 0x1f) == '\x05') && (uVar5 != in_EAX)) &&
           (*(char *)(uVar5 + 0x1a) != '\x17')) {
          *(undefined4 *)((int)piVar4 + -4) = 0x114d3;
          FUN_000189d4();
          puVar3 = (undefined1 *)((int)piVar4 + -4);
          *(undefined4 *)((int)piVar4 + -4) = 0;
          *(undefined4 *)((int)piVar4 + -8) = 0x114e2;
          iVar2 = FUN_00016175();
          if (0 < iVar2) {
            *(undefined4 *)((int)piVar4 + -8) = 0x114f1;
            FUN_00018087();
            uVar1 = 1;
            goto LAB_00011201;
          }
        }
        piVar4 = (int *)puVar3;
      }
    }
    local_28 = local_28 + 5;
    local_20 = local_20 + 5;
    local_24 = local_24 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0114f6 (Ghidra: FUN_000114f6)
 * Prototype: longlong sub_0114f6(void);
 * Address  : 0x114f6 (Size: 174 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x63b6d, 0xb3be4
 ******************************************************************************/
longlong FUN_000114f6(void)

{
  ushort uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  uint uVar4;
  
  iVar3 = *(char *)(in_EAX + 6) * 0x1508;
  if (1 < (byte)(&DAT_002e0ea2)[iVar3]) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uVar4 = DAT_002e8bf6 % (uint)(byte)(&DAT_002e0ea2)[iVar3];
    for (uVar1 = (&DAT_002e05b6)[*(char *)(in_EAX + 6) * 0xa84];
        (uVar4 != 0 && (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]));
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar1] + 100)] + 0x1f)) {
      uVar4 = uVar4 - 1;
    }
    sVar2 = FUN_000b3be4();
    if (sVar2 != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x3b;
    }
    return CONCAT44(in_EDX,1);
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0115a4 (Ghidra: FUN_000115a4)
 * Prototype: undefined8 sub_0115a4(void);
 * Address  : 0x115a4 (Size: 98 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x16f8b, 0x22b3a
 ******************************************************************************/
undefined8 FUN_000115a4(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1d0) != 0) {
    iVar1 = FUN_00022b3a();
    if (iVar1 != 0) {
      FUN_00016f8b();
      uVar2 = 1;
      goto LAB_00011202;
    }
  }
  uVar2 = 0;
LAB_00011202:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_011606 (Ghidra: FUN_00011606)
 * Prototype: undefined4 sub_011606(void);
 * Address  : 0x11606 (Size: 313 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1173f
 * Callees  : 4 -> 0x3f7ad, 0x827fc, 0xb28e8, 0xe69fc
 ******************************************************************************/
undefined4 FUN_00011606(void)

{
  short sVar1;
  undefined2 uVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *extraout_ECX;
  int in_EDX;
  uint uVar8;
  int iVar9;
  int *unaff_EBX;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int local_10;
  
  uVar3 = (uint)*(byte *)(in_EAX + 0xe);
  uVar4 = (uint)*(byte *)(in_EAX + 0x10);
  uVar8 = in_EDX % 0x100;
  iVar5 = in_EDX / 0x100;
  uVar12 = uVar3;
  iVar6 = FUN_000e69fc();
  lVar11 = FUN_000e69fc();
  if ((int)lVar11 < iVar6) {
    if (uVar8 == uVar3 || (int)(uVar8 - uVar3) < 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = 3;
    }
  }
  else if (lVar11 < 0x100000000) {
    iVar6 = 2;
  }
  else {
    iVar6 = 0;
  }
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 0;
    }
    iVar10 = uVar8 + *(char *)((int)&DAT_0018b67b + iVar6 * 2 + 3) * 2;
    iVar9 = iVar5 + (char)(&DAT_0018b67f)[iVar6 * 2] * 2;
    iVar7 = FUN_0003f7ad();
    if (iVar7 != 0) {
      sVar1 = (short)iVar10 * 0x100 + 0x80;
      uVar2 = FUN_000b28e8(sVar1,0,iVar5,uVar12,uVar4);
      uVar3 = FUN_000827fc(sVar1,uVar2);
      if ((uVar3 & 0xff) != 0xffffffff) {
        *unaff_EBX = iVar10;
        *extraout_ECX = iVar9;
        return 1;
      }
    }
    iVar6 = (iVar6 + 1) % 4;
    local_10 = local_10 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_01173f (Ghidra: FUN_0001173f)
 * Prototype: undefined8 sub_01173f(void);
 * Address  : 0x1173f (Size: 291 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x11606, 0xb3b58
 ******************************************************************************/
undefined8 FUN_0001173f(void)

{
  short sVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 in_EDX;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  do {
    if (7 < iVar5) {
      uVar2 = 0;
LAB_00011201:
      return CONCAT44(in_EDX,uVar2);
    }
    iVar3 = ((int)(*(char *)((int)&DAT_0018b67b + iVar5 + 3) * 3 + (uint)*(byte *)(in_EAX + 0xe)) /
            3) * 3 + 1;
    iVar4 = ((int)((char)(&DAT_0018b67f)[iVar5] * 3 + (uint)*(byte *)(in_EAX + 0x10)) / 3) * 3 + 1;
    iVar6 = iVar4 * 0x100 + iVar3;
    if ((((*(byte *)((int)&DAT_00279203 + iVar6 * 5) & 0x10) != 0) &&
        ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[iVar3] + (&DAT_0019033b)[iVar4] * 0x55) * 6] & 7)
         == (int)*(char *)(in_EAX + 6))) &&
       ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar3 / 3 + (iVar4 / 3) * 0x55) * 6] * 0x16] ==
        '\x03')) {
      iVar5 = FUN_00011606();
      if (iVar5 != 0) {
        sVar1 = FUN_000b3b58();
        if (sVar1 != 0) {
          *(undefined1 *)(in_EAX + 8) = 0x75;
          *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x284) = (short)iVar6;
        }
      }
      uVar2 = 1;
      goto LAB_00011201;
    }
    iVar5 = iVar5 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_011862 (Ghidra: FUN_00011862)
 * Prototype: undefined4 sub_011862(void);
 * Address  : 0x11862 (Size: 346 bytes)
 * Module   : angtool.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10dfc
 * Callees  : 9 -> 0x119bc, 0x11a81, 0x11b51, 0x11be9, 0x11c78, 0x11d2f, 0x11d65, 0x51374, 0x64a5f
 ******************************************************************************/
undefined4 FUN_00011862(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  bool bVar3;
  undefined8 uVar4;
  
  if (in_EDX < 8) {
    if (in_EDX < 2) {
      if (in_EDX != 1) {
        return 0;
      }
      uVar4 = FUN_00011d2f();
      if ((int)uVar4 == 0) {
        return 0;
      }
      return (int)((ulonglong)uVar4 >> 0x20);
    }
    if (in_EDX < 3) {
      iVar2 = FUN_000119bc();
      if (iVar2 == 0) {
        return 0;
      }
      bVar3 = (int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
LAB_000118e0:
      if (!bVar3) {
        return 1;
      }
      FUN_00051374();
      return 1;
    }
    if (in_EDX != 4) {
      return 0;
    }
  }
  else {
    if (in_EDX < 9) {
      iVar2 = FUN_00011a81();
      goto LAB_000118ff;
    }
    if (in_EDX < 0x20) {
      if (in_EDX != 0x10) {
        return 0;
      }
      iVar2 = FUN_00011d65();
      if (iVar2 == 0) {
        return 0;
      }
      bVar3 = (int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
      goto LAB_000118e0;
    }
    if (in_EDX < 0x21) {
      cVar1 = FUN_00064a5f();
      if (cVar1 != '\0') {
        *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) =
             *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) | 0x10;
        *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a) = 0;
        return 1;
      }
      return 0;
    }
    if (in_EDX < 0x40) {
      return 0;
    }
    if (0x40 < in_EDX) {
      if (in_EDX != 0x80) {
        return 0;
      }
      iVar2 = FUN_00011be9();
      goto LAB_000118ff;
    }
    iVar2 = FUN_00011c78();
    if (iVar2 != 0) {
      return 1;
    }
  }
  iVar2 = FUN_00011b51();
LAB_000118ff:
  if (iVar2 != 0) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0119bc (Ghidra: FUN_000119bc)
 * Prototype: undefined8 sub_0119bc(void);
 * Address  : 0x119bc (Size: 197 bytes)
 * Module   : angtool.cpp [direct_file_string_xref]
 * OrigLine : angtool.cpp:621 ("Eh?")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 7 -> 0x64a5f, 0x64c4d, 0x827fc, 0xca34c, 0xcc4a0, 0xcc968, 0xddaf0
 * Strings  :
 *   - 0x1600fc: "angtool.cpp"
 *   - 0x1600f8: "Eh?"
 ******************************************************************************/
undefined8 FUN_000119bc(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  
  cVar1 = FUN_00064c4d();
  if (cVar1 != '\0') {
    iVar2 = FUN_000ca34c(1);
    if (iVar2 != 0) {
      cVar1 = FUN_000cc968();
      if (cVar1 != '\0') {
        cVar1 = FUN_000827fc();
        if (cVar1 != '\0') {
          cVar1 = FUN_00064a5f();
          if (cVar1 != '\0') {
            iVar2 = FUN_000cc4a0();
            if (iVar2 != 0) {
              *(undefined1 *)(in_EAX + 8) = 0x71;
              *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
                   *(undefined2 *)(extraout_ECX + 1);
              uVar3 = 1;
              goto LAB_000110db;
            }
            FUN_000ddaf0(); /* LbErrorLog("angtool.cpp", line 621, "Eh?") */
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_000110db:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_011a81 (Ghidra: FUN_00011a81)
 * Prototype: undefined8 sub_011a81(void);
 * Address  : 0x11a81 (Size: 208 bytes)
 * Module   : angtool.cpp [direct_file_string_xref]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 6 -> 0x64a5f, 0x64c4d, 0x827fc, 0xca474, 0xcc4a0, 0xcc968
 * Strings  :
 *   - 0x16010c: "angtool.cpp"
 *   - 0x160108: "Eh?"
 ******************************************************************************/
undefined8 FUN_00011a81(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  
  cVar1 = FUN_00064c4d();
  if ((cVar1 != '\0') &&
     (*(int *)(in_EAX + 0x13) <
      (int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6))) {
    iVar2 = FUN_000ca474(1);
    if (iVar2 != 0) {
      cVar1 = FUN_000cc968();
      if (cVar1 != '\0') {
        cVar1 = FUN_000827fc();
        if (cVar1 != '\0') {
          cVar1 = FUN_00064a5f();
          if (cVar1 != '\0') {
            iVar2 = FUN_000cc4a0();
            if (iVar2 != 0) {
              *(undefined1 *)(in_EAX + 8) = 0x70;
              *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
                   *(undefined2 *)(extraout_ECX + 1);
              uVar3 = 1;
              goto LAB_000110db;
            }
            FUN_000ddaf0();
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_000110db:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_011b51 (Ghidra: FUN_00011b51)
 * Prototype: longlong sub_011b51(void);
 * Address  : 0x11b51 (Size: 152 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 5 -> 0x51374, 0x64a5f, 0x64c4d, 0xc9988, 0xcc4a0
 ******************************************************************************/
longlong FUN_00011b51(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  cVar1 = FUN_00064c4d();
  if (cVar1 != '\0') {
    iVar2 = FUN_000c9988();
    if (iVar2 != 0) {
      cVar1 = FUN_00064a5f();
      if (cVar1 != '\0') {
        iVar2 = FUN_000cc4a0();
        if (iVar2 != 0) {
          if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
          {
            FUN_00051374();
          }
          *(undefined1 *)(in_EAX + 8) = 0x33;
          return CONCAT44(in_EDX,1);
        }
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_011be9 (Ghidra: FUN_00011be9)
 * Prototype: undefined8 sub_011be9(void);
 * Address  : 0x11be9 (Size: 143 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 3 -> 0x10ad6, 0x63a25, 0x82774
 ******************************************************************************/
undefined8 FUN_00011be9(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_EAX;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  int local_1c;
  
  local_1c = 0;
  iVar3 = 0;
  iVar4 = 0;
  do {
    if (4 < local_1c) {
      uVar2 = 0;
LAB_00011201:
      return CONCAT44(in_EDX,uVar2);
    }
    if ((((*(char *)(in_EAX + 6) != local_1c) && (((&DAT_0019d0c8)[iVar3] & 1) != 0)) &&
        ((&DAT_0019d0f4)[iVar3] == '\x01')) &&
       (*(char *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_002e0589 + iVar4)] + 7) != '\x03')) {
      cVar1 = FUN_00082774();
      in_EAX = extraout_ECX;
      if (cVar1 != '\0') {
        FUN_00063a25();
        FUN_00010ad6();
        uVar2 = 1;
        goto LAB_00011201;
      }
    }
    local_1c = local_1c + 1;
    iVar3 = iVar3 + 0x4ef;
    iVar4 = iVar4 + 0x1508;
  } while( true );
}

/******************************************************************************
 * Function : sub_011c78 (Ghidra: FUN_00011c78)
 * Prototype: longlong sub_011c78(void);
 * Address  : 0x11c78 (Size: 183 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 2 -> 0x64a5f, 0x64c4d
 ******************************************************************************/
longlong FUN_00011c78(void)

{
  char cVar1;
  char cVar2;
  int in_EAX;
  int extraout_ECX;
  uint in_EDX;
  uint uVar3;
  
  cVar2 = *(char *)(in_EAX + 6);
  if (5 < *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23)) {
    cVar1 = FUN_00064c4d();
    if (cVar1 != '\0') {
      uVar3 = (uint)(byte)(&DAT_002e0ea2)[cVar2 * 0x1508];
      if (5 < uVar3) {
        uVar3 = 5;
      }
      if (uVar3 != 0) {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        uVar3 = DAT_002e8bf6 % uVar3;
        cVar2 = FUN_00064a5f();
        if (cVar2 != '\0') {
          *(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x9a) = (char)uVar3 + '\x01';
          return CONCAT44(in_EDX,1);
        }
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_011d2f (Ghidra: FUN_00011d2f)
 * Prototype: longlong sub_011d2f(void);
 * Address  : 0x11d2f (Size: 54 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 2 -> 0x64a5f, 0x64c4d
 ******************************************************************************/
longlong FUN_00011d2f(void)

{
  char cVar1;
  uint in_EDX;
  
  cVar1 = FUN_00064c4d();
  if (cVar1 != '\0') {
    cVar1 = FUN_00064a5f();
    if (cVar1 != '\0') {
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_011d65 (Ghidra: FUN_00011d65)
 * Prototype: undefined8 sub_011d65(void);
 * Address  : 0x11d65 (Size: 84 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11862
 * Callees  : 3 -> 0x239ee, 0x64a5f, 0x64c4d
 ******************************************************************************/
undefined8 FUN_00011d65(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 in_EDX;
  
  cVar1 = FUN_00064c4d();
  if (cVar1 != '\0') {
    cVar1 = FUN_000239ee();
    if (cVar1 != '\0') {
      cVar1 = FUN_00064a5f();
      if (cVar1 != '\0') {
        FUN_000b3b58();
        uVar2 = 1;
        *(undefined1 *)(in_EAX + 8) = 0x76;
        goto LAB_000110db;
      }
    }
  }
  uVar2 = 0;
LAB_000110db:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_011db9 (Ghidra: FUN_00011db9)
 * Prototype: undefined8 sub_011db9(void);
 * Address  : 0x11db9 (Size: 70 bytes)
 * Module   : angtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x731f3
 * Callees  : 1 -> 0x10606
 ******************************************************************************/
undefined8 FUN_00011db9(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  undefined4 in_EDX;
  
  uVar1 = (&DAT_002e05b6)[in_EAX * 0xa84];
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    FUN_00010606();
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,1);
}

