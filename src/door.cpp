/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: door.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_022905 (Ghidra: FUN_00022905)
 * Prototype: longlong sub_022905(void);
 * Address  : 0x22905 (Size: 46 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x225fc
 * Callees  : 1 -> 0x22a72
 ******************************************************************************/
longlong FUN_00022905(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  uStack_14 = 0x22910;
  iVar1 = FUN_00022a72();
  if (iVar1 != 0) {
    uStack_14 = 0x100;
    uStack_18 = 2;
    uStack_1c = 0;
    puVar2 = &uStack_20;
    uStack_20 = 3;
    *(undefined1 *)(in_EAX + 7) = 3;
    FUN_0006e538();
  }
  return (ulonglong)*(uint *)((int)puVar2 + 4) << 0x20;
}

/******************************************************************************
 * Function : sub_022933 (Ghidra: FUN_00022933)
 * Prototype: undefined4 sub_022933(void);
 * Address  : 0x22933 (Size: 177 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x225fc
 * Callees  : 4 -> 0x228a5, 0x22a72, 0x6e538, 0xd8b7c
 ******************************************************************************/
undefined4 FUN_00022933(void)

{
  ushort uVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  uint local_1c;
  
  piVar4 = &local_20;
  iVar3 = (int)*(short *)(in_EAX + 0x16) >> 0x1f;
  local_20 = (int)(((int)*(short *)(in_EAX + 0x16) + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8;
  iVar3 = (uint)*(byte *)(in_EAX + 0x1a) * 0x10;
  uVar1 = *(ushort *)(&DAT_0018de0f + (uint)*(ushort *)(in_EAX + 0x13) * 8 + iVar3);
  local_1c = (uint)*(ushort *)(&DAT_0018de09 + (uint)*(ushort *)(in_EAX + 0x13) * 8 + iVar3);
  uStack_24 = 0x22973;
  iVar3 = FUN_00022a72();
  if (iVar3 != 0) {
    uStack_24 = 0x100;
    uStack_28 = 2;
    uStack_2c = 0;
    piVar4 = &uStack_30;
    uStack_30 = 3;
    *(undefined1 *)(in_EAX + 7) = 3;
    FUN_0006e538();
  }
  if ((int)(uint)uVar1 < (int)*(short *)(in_EAX + 0x16)) {
    *(short *)(in_EAX + 0x16) = *(short *)(in_EAX + 0x16) - uVar1;
  }
  else {
    *(undefined2 *)(in_EAX + 0x16) = 0;
    *(undefined1 *)(in_EAX + 7) = 2;
  }
  iVar3 = (int)*(short *)(in_EAX + 0x16) >> 0x1f;
  if ((int)(((int)*(short *)(in_EAX + 0x16) + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8 !=
      local_20) {
    *(uint *)((int)piVar4 + -4) = (uint)*(byte *)(in_EAX + 6);
    *(undefined4 *)((int)piVar4 + -8) = 0x229df;
    FUN_000d8b7c();
    uVar2 = FUN_000228a5();
    return uVar2;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0229e4 (Ghidra: FUN_000229e4)
 * Prototype: undefined8 sub_0229e4(void);
 * Address  : 0x229e4 (Size: 142 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x225fc
 * Callees  : 1 -> 0xd8b7c
 ******************************************************************************/
undefined8 FUN_000229e4(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  
  iVar3 = (int)*(short *)(in_EAX + 0x16);
  iVar2 = (uint)*(ushort *)(in_EAX + 0x13) * 8 + (uint)*(byte *)(in_EAX + 0x1a) * 0x10;
  uVar1 = *(undefined2 *)(&DAT_0018de09 + iVar2);
  if ((int)(iVar3 + (uint)*(ushort *)(&DAT_0018de0f + iVar2)) < 0x300) {
    *(short *)(in_EAX + 0x16) = *(short *)(in_EAX + 0x16) + *(ushort *)(&DAT_0018de0f + iVar2);
  }
  else {
    *(undefined2 *)(in_EAX + 0x16) = 0x300;
    *(undefined1 *)(in_EAX + 7) = 1;
    *(undefined1 *)(in_EAX + 0x15) = 10;
  }
  iVar2 = (int)*(short *)(in_EAX + 0x16) >> 0x1f;
  if ((int)(((int)*(short *)(in_EAX + 0x16) + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8 !=
      (int)((iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0)) >> 8) {
    FUN_000d8b7c(*(undefined1 *)(in_EAX + 6),uVar1);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_022a72 (Ghidra: FUN_00022a72)
 * Prototype: undefined8 sub_022a72(void);
 * Address  : 0x22a72 (Size: 200 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x228b1, 0x22905, 0x22933
 * Callees  : 1 -> 0x22b94
 ******************************************************************************/
undefined8 FUN_00022a72(void)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *extraout_ECX;
  undefined4 in_EDX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  bVar1 = *(byte *)(in_EAX + 0xe);
  bVar2 = *(byte *)(in_EAX + 0x10);
  pcVar5 = (char *)&DAT_002ee9c1;
  if (*(char *)(in_EAX + 0x18) == '\0') {
    for (iVar8 = 0; iVar8 < 0x20; iVar8 = iVar8 + 1) {
      iVar3 = (int)pcVar5[1] + (uint)bVar1;
      iVar6 = (int)*pcVar5 + (uint)bVar2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xfe < iVar3) {
        iVar3 = 0xfe;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xfe < iVar6) {
        iVar6 = 0xfe;
      }
      iVar3 = (iVar3 + iVar6 * 0x100) * 5;
      if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x10) == 0) {
        for (uVar7 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb];
            DAT_001ae9fc < uVar7; uVar7 = (&DAT_001ae9fc)[*(ushort *)(uVar7 + 2)]) {
          iVar3 = FUN_00022b94();
          if (iVar3 != 0) {
            uVar4 = 1;
            goto LAB_000228aa;
          }
          pcVar5 = extraout_ECX;
        }
      }
      pcVar5 = pcVar5 + 4;
    }
  }
  uVar4 = 0;
LAB_000228aa:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_022b3a (Ghidra: FUN_00022b3a)
 * Prototype: uint sub_022b3a(void);
 * Address  : 0x22b3a (Size: 90 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 24 -> 0x115a4, 0x194e8, 0x28afb, 0x5f6c5, 0x63122, 0x65545, 0x6ca16, 0x6cee6, 0x6d909, 0x7ba98 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00022b3a(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 +
                    (((in_EDX / 3) * 3 + 1) * 0x100 + (in_EAX / 3) * 3 + 1) * 5 + 1) & 0x3fffff) >>
          0xb;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x1f) == '\t') break;
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_022b94 (Ghidra: FUN_00022b94)
 * Prototype: undefined4 sub_022b94(void);
 * Address  : 0x22b94 (Size: 150 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x22a72, 0x7df64
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00022b94(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(in_EAX + 0x18) != '\0') || (*(char *)(in_EDX + 0x1f) != '\x05')) {
    return 0;
  }
  if (*(char *)(in_EAX + 6) != *(char *)(in_EDX + 6)) {
    uVar3 = (uint)*(char *)(in_EAX + 6);
    uVar2 = (uint)DAT_002eb543;
    if (uVar3 == uVar2) {
      return 0;
    }
    uVar1 = (uint)*(char *)(in_EDX + 6);
    if (uVar2 == uVar1) {
      return 0;
    }
    if (((uint)(byte)(&DAT_0019d0f2)[uVar3 * 0x4ef] & 1 << (*(byte *)(in_EDX + 6) & 0x1f)) == 0) {
      return 0;
    }
    if (uVar2 == uVar1) {
      return 0;
    }
    if (uVar3 == uVar2) {
      return 0;
    }
    if (((uint)(byte)(&DAT_0019d0f2)[uVar1 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f)) == 0) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_022c2a (Ghidra: FUN_00022c2a)
 * Prototype: void sub_022c2a(void);
 * Address  : 0x22c2a (Size: 306 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb3dac
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00022c2a(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint unaff_EBX;
  int iVar8;
  
  uVar1 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  iVar2 = *in_EDX - uVar1;
  iVar5 = iVar2 >> 0x1f;
  iVar2 = (int)((iVar2 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8;
  iVar5 = (int)(*in_EDX + uVar1) >> 8;
  iVar3 = in_EDX[1] - uVar1;
  iVar6 = iVar3 >> 0x1f;
  iVar3 = (int)((iVar3 + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8;
  iVar6 = (int)(in_EDX[1] + uVar1) >> 8;
  if ((unaff_EBX & 1) != 0) {
    iVar8 = iVar2;
    if (*(ushort *)(in_EAX + 0xd) < *in_EDX) {
      iVar8 = iVar5;
    }
    iVar4 = iVar3;
    for (iVar7 = iVar3 * 0x500 + iVar8 * 5; iVar7 <= iVar8 * 5 + iVar6 * 0x500;
        iVar7 = iVar7 + 0x500) {
      if ((*(byte *)((int)&DAT_00279203 + iVar7) & 0x40) != 0) goto LAB_00022d40;
      iVar4 = iVar4 + 1;
    }
  }
  if ((unaff_EBX & 2) != 0) {
    iVar4 = iVar3;
    if (*(ushort *)(in_EAX + 0xf) < in_EDX[1]) {
      iVar4 = iVar6;
    }
    for (iVar3 = iVar2 * 5 + iVar4 * 0x500; iVar3 <= iVar4 * 0x500 + iVar5 * 5; iVar3 = iVar3 + 5) {
      iVar8 = iVar2;
      if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x40) != 0) {
LAB_00022d40:
        *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1d0) =
             (short)iVar8 + (short)(iVar4 << 8);
        return;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_022d5c (Ghidra: FUN_00022d5c)
 * Prototype: undefined4 sub_022d5c(void);
 * Address  : 0x22d5c (Size: 262 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1211a, 0x12230
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00022d5c(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint unaff_EBX;
  
  uVar1 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  iVar2 = *in_EDX - uVar1;
  iVar5 = iVar2 >> 0x1f;
  iVar5 = (int)((iVar2 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8;
  iVar3 = (int)(*in_EDX + uVar1) >> 8;
  iVar2 = in_EDX[1] - uVar1;
  iVar6 = iVar2 >> 0x1f;
  iVar6 = (int)((iVar2 + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8;
  iVar2 = (int)(in_EDX[1] + uVar1) >> 8;
  if ((unaff_EBX & 1) != 0) {
    iVar7 = iVar5;
    if (*(ushort *)(in_EAX + 0xd) < *in_EDX) {
      iVar7 = iVar3;
    }
    for (iVar4 = iVar6 * 0x500 + iVar7 * 5; iVar4 <= iVar7 * 5 + iVar2 * 0x500;
        iVar4 = iVar4 + 0x500) {
      if ((*(byte *)((int)&DAT_00279203 + iVar4) & 0x40) != 0) {
        return 1;
      }
    }
  }
  if ((unaff_EBX & 2) != 0) {
    if (in_EDX[1] <= *(ushort *)(in_EAX + 0xf)) {
      iVar2 = iVar6;
    }
    for (iVar5 = iVar5 * 5 + iVar2 * 0x500; iVar5 <= iVar2 * 0x500 + iVar3 * 5; iVar5 = iVar5 + 5) {
      if ((*(byte *)((int)&DAT_00279203 + iVar5) & 0x40) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_022e62 (Ghidra: FUN_00022e62)
 * Prototype: uint sub_022e62(void);
 * Address  : 0x22e62 (Size: 241 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x61d43, 0x8f924
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00022e62(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte in_DL;
  ushort uVar7;
  undefined3 uVar8;
  char unaff_BL;
  
  bVar2 = (byte)((ulonglong)(in_EAX & 0xff) / 3);
  bVar3 = (byte)((ulonglong)(uint)in_DL / 3);
  uVar4 = (uint)(byte)(&DAT_002d33c5)[((uint)bVar2 + (uint)bVar3 * 0x55) * 6];
  if ((uVar4 == 0xb) &&
     (iVar5 = ((&DAT_0019033b)[in_EAX & 0xff] + (&DAT_0019033b)[in_DL] * 0x55) * 6,
     uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),(&DAT_002d33ca)[iVar5]) & 0xffffff07,
     (char)uVar4 == unaff_BL)) {
    uVar4 = 0;
    while( true ) {
      uVar6 = uVar4 >> 8;
      if (3 < uVar6) break;
      uVar6 = (uint)(byte)(&DAT_002d33c5)
                          [((int)*(char *)((int)&DAT_0018b67b + uVar6 * 2 + 3) + (uint)bVar2 +
                           ((int)(char)(&DAT_0018b67f)[uVar6 * 2] + (uint)bVar3) * 0x55) * 6];
      uVar8 = (undefined3)(uVar4 >> 8);
      cVar1 = (char)uVar4 * '\x02';
      uVar7 = (ushort)CONCAT31(uVar8,cVar1);
      if (((((&DAT_001921cf)[uVar6 * 0x16] == '\x03') || (uVar6 == 0)) || (uVar6 == 2)) ||
         (((uVar6 == 3 || (uVar6 == 1)) || (uVar6 == 0x34)))) {
        uVar7 = (ushort)CONCAT31(uVar8,cVar1) | 1;
      }
      uVar4 = (uint)CONCAT11((char)(uVar7 >> 8) + '\x01',(char)uVar7);
    }
    return (uint)*(byte *)((uVar4 & 0xff) + 0x179c0c);
  }
  return CONCAT31((int3)(uVar4 >> 8),0xff);
}

/******************************************************************************
 * Function : sub_022f53 (Ghidra: FUN_00022f53)
 * Prototype: undefined8 sub_022f53(void);
 * Address  : 0x22f53 (Size: 146 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x225fc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00022f53(void)

{
  char cVar1;
  int in_EAX;
  undefined4 in_EDX;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined3 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar2 = uVar4 >> 8;
    if (3 < uVar2) break;
    uVar2 = (uint)(byte)(&DAT_002d33c5)
                        [((int)*(char *)((int)&DAT_0018b67b + uVar2 * 2 + 3) +
                          (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                         ((int)(char)(&DAT_0018b67f)[uVar2 * 2] +
                         (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)]) * 0x55) * 6];
    uVar5 = (undefined3)(uVar4 >> 8);
    cVar1 = (char)uVar4 * '\x02';
    uVar3 = (ushort)CONCAT31(uVar5,cVar1);
    if (((((&DAT_001921cf)[uVar2 * 0x16] == '\x03') || (uVar2 == 0)) || (uVar2 == 2)) ||
       (((uVar2 == 3 || (uVar2 == 1)) || (uVar2 == 0x34)))) {
      uVar3 = (ushort)CONCAT31(uVar5,cVar1) | 1;
    }
    uVar4 = (uint)CONCAT11((char)(uVar3 >> 8) + '\x01',(char)uVar3);
  }
  cVar1 = *(char *)((uVar4 & 0xff) + 0x179c0c);
  return CONCAT44(in_EDX,CONCAT31(cVar1 >> 7,cVar1 != -1));
}

/******************************************************************************
 * Function : sub_022fe5 (Ghidra: FUN_00022fe5)
 * Prototype: undefined8 sub_022fe5(void);
 * Address  : 0x22fe5 (Size: 47 bytes)
 * Module   : door.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23042
 * Callees  : 1 -> 0x43f07
 ******************************************************************************/
undefined8 FUN_00022fe5(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_00043f07();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xd) = 0x80;
    *(undefined1 *)(iVar1 + 0xf) = 0x80;
    *(undefined1 *)(iVar1 + 0x12) = 4;
  }
  return CONCAT44(in_EDX,(uint)(iVar1 != 0));
}

/******************************************************************************
 * Function : sub_023014 (Ghidra: FUN_00023014)
 * Prototype: undefined8 sub_023014(void);
 * Address  : 0x23014 (Size: 46 bytes)
 * Module   : door.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x230d3
 * Callees  : 2 -> 0x50d3c, 0x72af4
 ******************************************************************************/
undefined8 FUN_00023014(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_00050d3c();
  if (iVar1 != 0) {
    FUN_00072af4();
  }
  return CONCAT44(in_EDX,(uint)(iVar1 != 0));
}

/******************************************************************************
 * Function : sub_023042 (Ghidra: FUN_00023042)
 * Prototype: void sub_023042(void);
 * Address  : 0x23042 (Size: 145 bytes)
 * Module   : door.cpp [direct_file_string_xref]
 * OrigLine : door.cpp:541
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 5 -> 0x22fe5, 0x63122, 0xd167c, 0xd8b7c, 0xddaf0
 * Strings  :
 *   - 0x1625e4: "door.cpp"
 ******************************************************************************/
void FUN_00023042(void)

{
  int in_EAX;
  int iVar1;
  
  *(undefined1 *)(in_EAX + 7) = 2;
  DAT_002ebaf7 = 1;
  *(undefined2 *)(in_EAX + 0x16) = 0;
  *(undefined1 *)(in_EAX + 0x18) = 1;
  FUN_000d8b7c(*(undefined1 *)(in_EAX + 6));
  FUN_000d167c();
  FUN_00063122();
  iVar1 = FUN_00022fe5();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("door.cpp", line 541, g_log_buf) */
  }
  return;
}

/******************************************************************************
 * Function : dk_remove_keyhole_0230d3 (Ghidra: FUN_000230d3)
 * Prototype: void dk_remove_keyhole_0230d3(void);
 * Address  : 0x230d3 (Size: 105 bytes)
 * Module   : door.cpp [direct_file_string_xref]
 * OrigLine : door.cpp:556 ("Cannot remove keyhole")
 * Naming   : String 'Cannot remove keyhole'
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 4 -> 0x23014, 0x63122, 0xd167c, 0xddaf0
 * Strings  :
 *   - 0x162603: "door.cpp"
 *   - 0x1625ed: "Cannot remove keyhole"
 ******************************************************************************/
void FUN_000230d3(void)

{
  int in_EAX;
  int iVar1;
  
  *(undefined1 *)(in_EAX + 0x18) = 0;
  DAT_002ebaf7 = 1;
  FUN_000d167c();
  FUN_00063122();
  iVar1 = FUN_00023014();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("door.cpp", line 556, "Cannot remove keyhole") */
  }
  return;
}

/******************************************************************************
 * Function : sub_02313c (Ghidra: FUN_0002313c)
 * Prototype: void sub_02313c(void);
 * Address  : 0x2313c (Size: 212 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5accc
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0002313c(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint in_EDX;
  
  if (*(short *)(&DAT_0033406c + in_EAX * 2) != 0) {
    iVar1 = (&DAT_001ae9fc)[*(ushort *)(&DAT_0033406c + in_EAX * 2)];
    do {
      iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x67)];
      if (iVar1 == DAT_001ae9fc) break;
    } while (((int)*(char *)(iVar1 + 6) != (in_EDX & 0xff)) || (*(byte *)(iVar1 + 0x1a) != in_EAX));
    *(undefined2 *)(&DAT_0033406c + in_EAX * 2) = *(undefined2 *)(iVar1 + 0x1b);
  }
  uVar2 = DAT_002e6ef6;
  if (*(short *)(&DAT_0033406c + in_EAX * 2) == 0) {
    while (iVar1 = (&DAT_001ae9fc)[uVar2], iVar1 != DAT_001ae9fc) {
      if (((int)*(char *)(iVar1 + 6) == (in_EDX & 0xff)) && (*(byte *)(iVar1 + 0x1a) == in_EAX)) {
        *(undefined2 *)(&DAT_0033406c + in_EAX * 2) = *(undefined2 *)(iVar1 + 0x1b);
        break;
      }
      uVar2 = (uint)*(ushort *)(iVar1 + 0x67);
    }
  }
  if (*(short *)(&DAT_0033406c + in_EAX * 2) != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_023210 (Ghidra: FUN_00023210)
 * Prototype: int sub_023210(void);
 * Address  : 0x23210 (Size: 62 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x55e33
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00023210(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  uint3 uVar3;
  byte in_DL;
  
  uVar2 = DAT_002e6ef6;
  while( true ) {
    iVar1 = (&DAT_001ae9fc)[uVar2];
    uVar3 = (uint3)((uint)iVar1 >> 8);
    if (iVar1 == DAT_001ae9fc) {
      return (uint)uVar3 << 8;
    }
    if (((int)*(char *)(iVar1 + 6) == (uint)in_DL) && (*(byte *)(iVar1 + 0x1a) == in_EAX)) break;
    uVar2 = (uint)*(ushort *)(iVar1 + 0x67);
  }
  return CONCAT31(uVar3,1);
}

/******************************************************************************
 * Function : sub_023250 (Ghidra: FUN_00023250)
 * Prototype: void sub_023250(void);
 * Address  : 0x23250 (Size: 413 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 11 -> 0x10434, 0x23291, 0x2347d, 0x23519, 0x235e8, 0x236ad, 0x248e5, 0x24998, 0x37964, 0xb3b10 ...
 ******************************************************************************/
void FUN_00023250(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *local_24;
  int local_20;
  int local_1c;
  
  FUN_00023519();
  FUN_0002347d();
  FUN_000235e8();
  FUN_000236ad();
  FUN_000c4d28();
  FUN_00037964();
  FUN_00023291();
  local_20 = 0;
  local_24 = &DAT_002e0589;
  iVar3 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar3] & 1) != 0) && ((&DAT_0019d0f4)[iVar3] == '\x01')) {
      for (local_1c = 0; local_1c < (int)(uint)*(byte *)((int)local_24 + 99);
          local_1c = local_1c + 1) {
        iVar1 = (&DAT_001ae9fc)[*(ushort *)((int)local_24 + local_1c * 2 + 0x33)];
        if (*(char *)(iVar1 + 0x1f) == '\x05') {
          if (((DAT_002ed402 != 0) &&
              (iVar2 = (&DAT_001b0a00)[*(ushort *)(iVar1 + 100)], *(int *)(iVar2 + 0x2ef) != 0)) &&
             (*(uint *)(iVar2 + 0x2ef) <= DAT_002e8bee)) {
            *(undefined4 *)(iVar2 + 0x2ef) = 0;
            iVar2 = FUN_000248e5();
            if (iVar2 != 0) {
              FUN_00024998();
              local_1c = local_1c + -1;
              FUN_000b3b10();
              goto LAB_000247c7;
            }
          }
          if (*(short *)(&DAT_002e91ef + (uint)*(byte *)(iVar1 + 0x1a) * 0xe6) != 0) {
            FUN_00010434();
          }
          iVar2 = (&DAT_001b0a00)[*(ushort *)(iVar1 + 100)];
          iVar1 = iVar2 + 0x14;
          do {
            if ((*(char *)(iVar2 + 0x1d4) != '\0') && (0 < *(short *)(iVar2 + 0x1d5))) {
              *(short *)(iVar2 + 0x1d5) = *(short *)(iVar2 + 0x1d5) + -1;
            }
            iVar2 = iVar2 + 4;
          } while (iVar2 != iVar1);
        }
LAB_000247c7:
      }
    }
    local_24 = local_24 + 0xa84;
    local_20 = local_20 + 1;
    iVar3 = iVar3 + 0x4ef;
    if (4 < local_20) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_023291 (Ghidra: FUN_00023291)
 * Prototype: void sub_023291(void);
 * Address  : 0x23291 (Size: 485 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 2 -> 0x274ad, 0x51374
 ******************************************************************************/
void FUN_00023291(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined4 auStack_30 [2];
  char acStack_28 [8];
  byte local_20;
  byte local_1c;
  
  DAT_002ed3e6 = DAT_002ed3e6 + 1;
  for (local_1c = 0; local_1c < DAT_002eb542; local_1c = local_1c + 1) {
    uVar4 = (uint)local_1c;
    if ((((&DAT_0019d0c8)[uVar4 * 0x4ef] & 1) != 0) && ((&DAT_0019d0f4)[uVar4 * 0x4ef] == '\x01')) {
      uVar1 = (&DAT_002e05b6)[uVar4 * 0xa84];
      *(undefined4 *)(&DAT_002e1a41 + uVar4 * 0x1508) = 0;
      while (uVar4 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar4) {
        iVar2 = (uint)*(byte *)(uVar4 + 0x1a) * 0xe6;
        if (*(short *)(&DAT_002e91a5 + iVar2) != 0) {
          if (*(short *)(&DAT_002e19a9 +
                        (uint)*(byte *)(uVar4 + 0x1a) * 2 + *(char *)(uVar4 + 6) * 0x1508) == 0) {
            uVar3 = ((uint)*(ushort *)(&DAT_002e91a5 + iVar2) *
                     (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar4 + 100)] + 0x23) * 0x23) / 100
                    + (uint)*(ushort *)(&DAT_002e91a5 + iVar2);
          }
          else {
            uVar3 = (((uint)*(ushort *)(&DAT_002e91a5 + iVar2) *
                      (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar4 + 100)] + 0x23) * 0x23) /
                     100 + (uint)*(ushort *)(&DAT_002e91a5 + iVar2)) / 2;
          }
          *(uint *)(&DAT_002e1a41 + (uint)local_1c * 0x1508) =
               *(int *)(&DAT_002e1a41 + (uint)local_1c * 0x1508) + uVar3;
        }
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar4 + 100)] + 0x1f);
      }
    }
  }
  if (DAT_002ed3e2 <= DAT_002ed3e6) {
    FUN_00051374();
    DAT_002ed3e6 = 0;
    for (uVar4 = DAT_002e6eb6; uVar4 = (&DAT_001ae9fc)[uVar4], DAT_001ae9fc < uVar4;
        uVar4 = (uint)*(ushort *)(uVar4 + 0x67)) {
      if ((((int)*(char *)(uVar4 + 6) != (uint)DAT_002eb543) &&
          ((int)*(char *)(uVar4 + 6) != (uint)DAT_002eb542)) &&
         (*(short *)(&DAT_002e91a5 + (uint)*(byte *)(uVar4 + 0x1a) * 0xe6) != 0)) {
        iVar2 = (&DAT_001b0a00)[*(ushort *)(uVar4 + 100)];
        if (*(char *)(iVar2 + 0x49) == '\0') {
          *(char *)(iVar2 + 0x48) = *(char *)(iVar2 + 0x48) + '\x01';
          acStack_28[*(char *)(uVar4 + 6)] = '\x01';
        }
        else {
          *(char *)(iVar2 + 0x49) = *(char *)(iVar2 + 0x49) + -1;
        }
      }
    }
    pcVar6 = acStack_28;
    for (local_20 = 0; uVar4 = (uint)local_20, uVar4 < 5; local_20 = local_20 + 1) {
      puVar5 = pcVar6;
      if (acStack_28[uVar4] != '\0') {
        puVar5 = pcVar6 + -4;
        *(undefined4 *)(pcVar6 + -4) = *(undefined4 *)(&DAT_002e1a41 + uVar4 * 0x1508);
        *(undefined4 *)(pcVar6 + -8) = 0x23474;
        FUN_000274ad();
      }
      pcVar6 = puVar5;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_023476 (Ghidra: FUN_00023476)
 * Prototype: void sub_023476(void);
 * Address  : 0x23476 (Size: 7 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23a48
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00023476(void)

{
  return;
}

/******************************************************************************
 * Function : sub_02347d (Ghidra: FUN_0002347d)
 * Prototype: void sub_02347d(void);
 * Address  : 0x2347d (Size: 156 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 3 -> 0x275c1, 0xdd6c8, 0xe846c
 ******************************************************************************/
void FUN_0002347d(void)

{
  uint uVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    if ((((((&DAT_0019d0c8)[iVar2] & 1) != 0) && ((&DAT_0019d0f4)[iVar2] == '\x01')) &&
        ((*(short *)((int)&DAT_002e0589 + iVar3) == 0 ||
         (*(char *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_002e0589 + iVar3)] + 7) == '\x03')))) &&
       ((&DAT_0019d0f1)[iVar2] == '\0')) {
      FUN_000275c1();
      FUN_000dd6c8();
      uVar1 = extraout_ECX;
      iVar2 = extraout_EDX;
      if (extraout_ECX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_000e846c(DAT_00199210);
        uVar1 = extraout_ECX_00;
        iVar2 = extraout_EDX_00;
      }
    }
    iVar3 = iVar3 + 0x1508;
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0x4ef;
  } while ((int)uVar1 < 5);
  return;
}

/******************************************************************************
 * Function : sub_023519 (Ghidra: FUN_00023519)
 * Prototype: void sub_023519(void);
 * Address  : 0x23519 (Size: 207 bytes)
 * Module   : door.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 1 -> 0xdd500
 ******************************************************************************/
void FUN_00023519(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  
  if ((DAT_0019d0b6 & 1) != 0) {
    iVar2 = 0;
    for (iVar5 = 0; iVar5 < 5; iVar5 = iVar5 + 1) {
      if (((((&DAT_0019d0c8)[iVar2] & 1) != 0) && ((&DAT_0019d0f4)[iVar2] == '\x01')) &&
         ((&DAT_0019d0f1)[iVar2] == '\0')) {
        bVar1 = true;
        iVar4 = 0;
        iVar3 = 0;
        for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
          if (((((&DAT_0019d0c8)[iVar4] & 1) != 0) && ((&DAT_0019d0f4)[iVar4] == '\x01')) &&
             ((iVar5 != local_18 &&
              ((*(short *)((int)&DAT_002e0589 + iVar3) != 0 &&
               (*(char *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_002e0589 + iVar3)] + 7) != '\x03')))
              ))) {
            bVar1 = false;
            break;
          }
          iVar4 = iVar4 + 0x4ef;
          iVar3 = iVar3 + 0x1508;
        }
        if (bVar1) {
          FUN_000dd500();
          return;
        }
      }
      iVar2 = iVar2 + 0x4ef;
    }
  }
  return;
}

