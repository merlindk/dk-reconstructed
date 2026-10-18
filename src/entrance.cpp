/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: entrance.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 6
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_02684f (Ghidra: FUN_0002684f)
 * Prototype: void sub_02684f(void);
 * Address  : 0x2684f (Size: 312 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x266af, 0xe1ec4
 * Callees  : 2 -> 0x2683b, 0x627b5
 ******************************************************************************/
void FUN_0002684f(void)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  
  iVar3 = (int)*(short *)(in_EAX + 0x5e);
  if (iVar3 == 0) {
LAB_00026951:
    FUN_000627b5();
    (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] = (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 0xf7
    ;
  }
  else {
    if ((iVar3 % 8 != 7) && (iVar3 != 1)) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar2 = DAT_002e8bf6 >> 0xd;
      DAT_002e8bf6 = uVar2 | DAT_002e8bf6 * 0x80000;
      if ((uVar2 & 3) != 0) {
        if (((&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 8) == 0) {
          return;
        }
        iVar3 = FUN_0002683b();
        if (iVar3 == 0) {
          return;
        }
        goto LAB_00026951;
      }
    }
    cVar1 = (&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef];
    if ((((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x03')) &&
       ((((&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 8) == 0 &&
        (iVar3 = FUN_0002683b(), iVar3 != 0)))) {
      FUN_000627b5();
      (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] = (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] | 8;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_026ac9 (Ghidra: FUN_00026ac9)
 * Prototype: int sub_026ac9(void);
 * Address  : 0x26ac9 (Size: 56 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x26987
 * Callees  : 1 -> 0xdc440
 ******************************************************************************/
int FUN_00026ac9(void)

{
  int iVar1;
  
  iVar1 = FUN_000dc440();
  if (iVar1 < 0x280) {
    return 0x96;
  }
  return ((0x280 - (iVar1 + -0x280)) * 0x96) / 0x280;
}

/******************************************************************************
 * Function : dk_find_valid_place_entrance_026b04 (Ghidra: FUN_00026b04)
 * Prototype: int dk_find_valid_place_entrance_026b04(void);
 * Address  : 0x26b04 (Size: 361 bytes)
 * Module   : entrance.cpp [direct_file_string_xref]
 * OrigLine : entrance.cpp:54 ("Cannot find a valid place in entrance to create a creature"); entrance.cpp:60 ("Cannot create a creature for entrance")
 * Naming   : String 'Cannot find a valid place in entrance to create a creature'
 * Callers  : 1 -> 0x37deb
 * Callees  : 8 -> 0x27390, 0x43bb3, 0x63b6d, 0x72af4, 0xb3b10, 0xb3b58, 0xcc968, 0xddaf0
 * Strings  :
 *   - 0x16275b: "entrance.cpp"
 *   - 0x16278e: "entrance.cpp"
 *   - 0x162720: "Cannot find a valid place in entrance to create a creature"
 *   - 0x162768: "Cannot create a creature for entrance"
 ******************************************************************************/
int FUN_00026b04(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint *puVar5;
  uint uStack_28;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  
  uStack_28 = 0x26b21;
  local_1c = in_EDX;
  iVar3 = FUN_00043bb3();
  local_18 = iVar3;
  if (iVar3 == 0) {
    uStack_28 = 0x26c64;
    FUN_000ddaf0(); /* LbErrorLog("entrance.cpp", line 54, "Cannot find a valid place in entrance to create a creature") */
  }
  else {
    puVar5 = (uint *)local_24;
    if ((((int)*(char *)(in_EAX + 3) != (uint)DAT_002eb543) &&
        (iVar4 = *(char *)(in_EAX + 3) * 0x1508 + local_1c, puVar5 = (uint *)local_24,
        (byte)(&DAT_002e0ea3)[iVar4] < 2)) &&
       (puVar5 = (uint *)local_24, (&DAT_002e1a12)[iVar4] == '\0')) {
      uStack_28 = (uint)*(ushort *)(iVar3 + 0x1b);
      puVar5 = &uStack_28;
      FUN_00027390();
      (&DAT_002e1a12)[(uint)*(byte *)(iVar3 + 0x1a) + *(char *)(in_EAX + 3) * 0x1508] = 1;
    }
    *(undefined4 *)((int)puVar5 + -4) = 0x26b99;
    cVar1 = FUN_000cc968();
    if (cVar1 == '\0') {
      *(undefined4 *)((int)puVar5 + -4) = 0x26c44;
      FUN_000ddaf0(); /* LbErrorLog("entrance.cpp", line 60, "Cannot create a creature for entrance") */
      *(undefined4 *)((int)puVar5 + -4) = 0x26c4e;
      FUN_00072af4();
    }
    else {
      *(undefined4 *)((int)puVar5 + -4) = 0x26bac;
      FUN_000b3b10();
      *(int *)(&DAT_002e1724 + *(char *)(in_EAX + 3) * 0x1508) =
           *(int *)(&DAT_002e1724 + *(char *)(in_EAX + 3) * 0x1508) + 1;
      *(int *)(&DAT_002e1728 + local_1c * 4 + *(char *)(in_EAX + 3) * 0x1508) =
           *(int *)(&DAT_002e1728 + local_1c * 4 + *(char *)(in_EAX + 3) * 0x1508) + 1;
      *(int *)(&DAT_002e17a8 + *(char *)(in_EAX + 3) * 0x1508) = local_1c;
      *(short *)(in_EAX + 0x1b) = *(short *)(in_EAX + 0x1b) + 1;
      if ((&DAT_002e0589)[*(char *)(in_EAX + 3) * 0xa84] != 0) {
        *(undefined4 *)((int)puVar5 + -4) = 0x26c18;
        sVar2 = FUN_000b3b58();
        if (sVar2 != 0) {
          *(undefined1 *)(local_18 + 8) = 0x90;
          return local_18;
        }
      }
      *(undefined4 *)((int)puVar5 + -4) = 0x26c2e;
      FUN_00063b6d();
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : sub_026c6d (Ghidra: FUN_00026c6d)
 * Prototype: longlong sub_026c6d(void);
 * Address  : 0x26c6d (Size: 117 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x51374, 0x63b6d, 0xc9988, 0xcc4a0
 ******************************************************************************/
longlong FUN_00026c6d(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_000c9988();
  if (iVar1 != 0) {
    iVar1 = FUN_000cc4a0();
    if (iVar1 != 0) {
      if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
      *(undefined1 *)(in_EAX + 8) = 0x33;
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_026ce2 (Ghidra: FUN_00026ce2)
 * Prototype: undefined8 sub_026ce2(void);
 * Address  : 0x26ce2 (Size: 218 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x10434, 0x64ae7, 0x8608c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00026ce2(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar5 = (undefined4 *)&stack0xffffffec;
  uStack_18 = 0x26cee;
  iVar3 = FUN_000d0f50();
  if (((iVar3 == 0) || (*(short *)(iVar3 + 10) != 1)) ||
     (cVar1 = *(char *)(in_EAX + 6), cVar1 != *(char *)(iVar3 + 3))) {
    uStack_18 = 0x26db1;
    FUN_00064ae7();
    uVar4 = 1;
  }
  else {
    if ((int)cVar1 != (uint)DAT_002eb543) {
      *(short *)(&DAT_002e0ec8 + cVar1 * 0x1508) = *(short *)(&DAT_002e0ec8 + cVar1 * 0x1508) + 1;
      uVar2 = (&DAT_002e05b6)[*(char *)(in_EAX + 6) * 0xa84];
      while (iVar3 = (&DAT_001ae9fc)[uVar2], iVar3 != DAT_001ae9fc) {
        if (iVar3 != in_EAX) {
          uStack_18 = 0x26d81;
          FUN_00010434();
        }
        uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x1f);
      }
    }
    uStack_18 = 0;
    puVar5 = &uStack_1c;
    uStack_1c = 0;
    FUN_0008608c();
    uVar4 = 0xffffffff;
  }
  return CONCAT44(*(undefined4 *)((int)puVar5 + 8),uVar4);
}

/******************************************************************************
 * Function : sub_026dbc (Ghidra: FUN_00026dbc)
 * Prototype: undefined8 sub_026dbc(void);
 * Address  : 0x26dbc (Size: 162 bytes)
 * Module   : entrance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x8608c, 0xc9988, 0xcc4a0, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00026dbc(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000d0f50();
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 10) != 1)) && (iVar1 = FUN_000c9988(), iVar1 != 0)) &&
     (iVar1 = FUN_000cc4a0(), iVar1 != 0)) {
    *(undefined1 *)(in_EAX + 8) = 0x8b;
    *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
         *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) | 2;
    return CONCAT44(in_EDX,1);
  }
  FUN_0008608c(0);
  return 0xffffffff;
}

