/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: combchk.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 17
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_015ef2 (Ghidra: FUN_00015ef2)
 * Prototype: undefined4 sub_015ef2(void);
 * Address  : 0x15ef2 (Size: 47 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x15f21, 0x162f2, 0x175fa, 0x1781a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00015ef2(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(char *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 3) != '\0') &&
     (in_EAX == (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xa2)])) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_015f21 (Ghidra: FUN_00015f21)
 * Prototype: undefined4 sub_015f21(void);
 * Address  : 0x15f21 (Size: 302 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x175fa, 0x1781a, 0x28eb4
 * Callees  : 1 -> 0x15ef2
 ******************************************************************************/
undefined4 FUN_00015f21(void)

{
  int iVar1;
  byte *in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *in_EDX;
  uint uVar5;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (in_EAX[6] != in_EDX[6]) {
    uVar2 = (uint)(char)in_EDX[6];
    uVar3 = (uint)DAT_002eb543;
    if ((uVar3 != uVar2) &&
       ((((uVar5 = (uint)(char)in_EAX[6], uVar3 == uVar5 || (uVar3 == uVar2)) ||
         (((uint)(byte)(&DAT_0019d0f2)[uVar5 * 0x4ef] & 1 << (in_EDX[6] & 0x1f)) == 0)) ||
        (((uVar3 == uVar2 || (uVar3 == uVar5)) ||
         (((uint)(byte)(&DAT_0019d0f2)[uVar2 * 0x4ef] & 1 << (in_EAX[6] & 0x1f)) == 0))))))
    goto LAB_00015fee;
  }
  if ((((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 0x10) == 0) &&
      ((*(byte *)(iVar1 + 0xad) & 0x10) == 0)) && (iVar4 = FUN_00015ef2(), iVar4 == 0)) {
    return 0;
  }
  if (in_EAX == in_EDX) {
    return 0;
  }
LAB_00015fee:
  if ((((((*(byte *)(iVar1 + 1) & 1) != 0) && ((*(byte *)(iVar1 + 1) & 2) == 0)) &&
       ((*in_EDX & 0x10) == 0)) && ((in_EDX[1] & 2) == 0)) &&
     ((((*(byte *)(iVar1 + 0xac) & 0x20) == 0 || (0 < *(short *)(iVar1 + 0xaf))) ||
      (((&DAT_002e91e5)[(uint)in_EAX[0x1a] * 0xe6] != '\0' ||
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xac) & 0x40) != 0)))))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01604f (Ghidra: FUN_0001604f)
 * Prototype: undefined4 sub_01604f(void);
 * Address  : 0x1604f (Size: 219 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16242
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001604f(void)

{
  int iVar1;
  int iVar2;
  byte *in_EAX;
  byte *in_EDX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (in_EAX[6] != in_EDX[6]) {
    uVar3 = (uint)(char)in_EDX[6];
    uVar4 = (uint)DAT_002eb543;
    if ((uVar3 != uVar4) &&
       ((((uVar5 = (uint)(char)in_EAX[6], uVar5 == uVar4 || (uVar3 == uVar4)) ||
         (((uint)(byte)(&DAT_0019d0f2)[uVar5 * 0x4ef] & 1 << (in_EDX[6] & 0x1f)) == 0)) ||
        (((uVar3 == uVar4 || (uVar5 == uVar4)) ||
         (((uint)(byte)(&DAT_0019d0f2)[uVar3 * 0x4ef] & 1 << (in_EAX[6] & 0x1f)) == 0))))))
    goto LAB_00015fee;
  }
  if (((*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xa9) == '\0') &&
      ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 0x10) == 0)) &&
     (((*(byte *)(iVar1 + 0xad) & 0x10) == 0 && (iVar2 = FUN_00015ef2(), iVar2 == 0)))) {
    return 0;
  }
  if (in_EAX == in_EDX) {
    return 0;
  }
LAB_00015fee:
  if ((((((*(byte *)(iVar1 + 1) & 1) != 0) && ((*(byte *)(iVar1 + 1) & 2) == 0)) &&
       ((*in_EDX & 0x10) == 0)) && ((in_EDX[1] & 2) == 0)) &&
     ((((*(byte *)(iVar1 + 0xac) & 0x20) == 0 || (0 < *(short *)(iVar1 + 0xaf))) ||
      (((&DAT_002e91e5)[(uint)in_EAX[0x1a] * 0xe6] != '\0' ||
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xac) & 0x40) != 0)))))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01612a (Ghidra: FUN_0001612a)
 * Prototype: int sub_01612a(void);
 * Address  : 0x1612a (Size: 37 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16175
 * Callees  : 1 -> 0xd1548
 ******************************************************************************/
int FUN_0001612a(void)

{
  int iVar1;
  
  iVar1 = FUN_000d1548();
  if (((iVar1 == -1) || (iVar1 == 0x7fffffff)) || (0x14ff < iVar1)) {
    iVar1 = -1;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_01614f (Ghidra: FUN_0001614f)
 * Prototype: undefined4 sub_01614f(void);
 * Address  : 0x1614f (Size: 38 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x16175, 0x163c9, 0x66247, 0x666a8, 0x84f04
 * Callees  : 1 -> 0x102c0
 ******************************************************************************/
undefined4 FUN_0001614f(void)

{
  int in_EAX;
  undefined4 uVar1;
  int unaff_EBX;
  
  if ((int)((uint)(byte)(&DAT_002e91af)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] * 0x100) < unaff_EBX)
  {
    return 0;
  }
  uVar1 = FUN_000102c0();
  return uVar1;
}

/******************************************************************************
 * Function : sub_016175 (Ghidra: FUN_00016175)
 * Prototype: undefined4 sub_016175(int param_1);
 * Address  : 0x16175 (Size: 205 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x11408, 0x16242, 0x174b0, 0x175fa, 0x176c6, 0x1781a, 0x4d8d2
 * Callees  : 5 -> 0x10408, 0x15db4, 0x1612a, 0x1614f, 0x7bb10
 ******************************************************************************/
undefined4 FUN_00016175(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int local_14;
  
  iVar1 = FUN_00010408();
  if (iVar1 == 0) {
    iVar1 = FUN_0001614f();
    if (0 < iVar1) {
      if (iVar1 != 2) goto LAB_000161b0;
      iVar3 = FUN_00015db4();
      local_14 = 2;
      iVar1 = extraout_ECX_00;
      if (iVar3 != 0) goto LAB_000161eb;
    }
LAB_0001623a:
    uVar2 = 0;
  }
  else {
    if (in_ECX == 0) {
      iVar1 = FUN_0007bb10();
      if (iVar1 < 1) goto LAB_000161cd;
    }
    else {
      iVar1 = FUN_0001612a();
      if (iVar1 < 0) {
LAB_000161cd:
        iVar1 = FUN_00015db4();
        if ((iVar1 != 0) && (local_14 = FUN_0001614f(), iVar1 = extraout_ECX, 0 < local_14)) {
LAB_000161eb:
          if (param_1 != 0) {
            *(undefined1 *)(iVar1 + 0xa8) = (undefined1)local_14;
            *(undefined2 *)(iVar1 + 0xa4) = *(undefined2 *)(in_EDX + 0x1b);
            *(undefined4 *)(iVar1 + 0x9a) = DAT_002e8bee;
          }
          return 2;
        }
        goto LAB_0001623a;
      }
    }
LAB_000161b0:
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_016242 (Ghidra: FUN_00016242)
 * Prototype: uint sub_016242(void);
 * Address  : 0x16242 (Size: 88 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x15a23, 0x15ac2, 0x15b37
 * Callees  : 3 -> 0x1604f, 0x16175, 0x189d4
 ******************************************************************************/
uint FUN_00016242(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xa7);
  iVar2 = FUN_0001604f();
  uVar3 = 0;
  if ((iVar2 != 0) &&
     (FUN_000189d4(), uVar3 = (uint)bVar1,
     ((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 7) == 0)) {
    uVar3 = FUN_00016175(1);
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_01629a (Ghidra: FUN_0001629a)
 * Prototype: undefined4 sub_01629a(void);
 * Address  : 0x1629a (Size: 88 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x15a23, 0x15ac2, 0x15b37, 0x18938
 * Callees  : 1 -> 0x15db4
 ******************************************************************************/
undefined4 FUN_0001629a(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  if (in_EDX == 0) {
    return 0;
  }
  if (in_EDX == 2) {
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xa7) != '\x02') {
      return 0;
    }
  }
  else if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xa7) == '\x02') {
    if ((&DAT_002e918a)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\x02') {
      return 0;
    }
    iVar1 = FUN_00015db4();
    if (iVar1 == 0) {
      return 0;
    }
    return 1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0162f2 (Ghidra: FUN_000162f2)
 * Prototype: undefined4 sub_0162f2(void);
 * Address  : 0x162f2 (Size: 132 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x15a23, 0x15ac2, 0x15b37
 * Callees  : 4 -> 0x15ef2, 0x173e8, 0x174b0, 0x189d4
 ******************************************************************************/
undefined4 FUN_000162f2(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = FUN_00015ef2();
  if ((iVar1 == 0) ||
     (((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 3) & 1) == 0 &&
      (*(char *)(iVar2 + 0x1b) != '\0')))) {
    FUN_000189d4();
    iVar2 = FUN_000173e8();
    FUN_000174b0();
    if (extraout_ECX < iVar2 + 0x102) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_016376 (Ghidra: FUN_00016376)
 * Prototype: undefined4 sub_016376(void);
 * Address  : 0x16376 (Size: 83 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x18938
 * Callees  : 1 -> 0x15db4
 ******************************************************************************/
undefined4 FUN_00016376(void)

{
  byte bVar1;
  int in_EAX;
  int in_EDX;
  int iVar2;
  int unaff_EBX;
  undefined8 uVar3;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (unaff_EBX == 2) {
    bVar1 = *(byte *)(iVar2 + 0x1c);
  }
  else {
    if ((&DAT_002e918a)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\x02') {
      uVar3 = FUN_00015db4();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      if (((int)uVar3 != 0) && (*(byte *)(iVar2 + 0x1c) < 4)) {
        return 1;
      }
    }
    bVar1 = *(byte *)(iVar2 + 0x1b);
  }
  if (bVar1 < 4) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0163c9 (Ghidra: FUN_000163c9)
 * Prototype: undefined1 sub_0163c9(void);
 * Address  : 0x163c9 (Size: 90 bytes)
 * Module   : combchk.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x168a2, 0x169a5, 0x16b29
 * Callees  : 1 -> 0x1614f
 ******************************************************************************/
undefined1 FUN_000163c9(void)

{
  int iVar1;
  undefined1 uVar2;
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(int *)(iVar1 + 0x9a) == DAT_002e8bee) &&
     (*(short *)(iVar1 + 0xa4) == *(short *)(in_EDX + 0x1b))) {
    return *(undefined1 *)(iVar1 + 0xa8);
  }
  *(int *)(iVar1 + 0x9a) = DAT_002e8bee;
  *(undefined2 *)(iVar1 + 0xa4) = *(undefined2 *)(in_EDX + 0x1b);
  uVar2 = FUN_0001614f();
  *(undefined1 *)(extraout_ECX + 0xa8) = uVar2;
  return uVar2;
}

/******************************************************************************
 * Function : dk_control_structure_gt_ca_016423 (Ghidra: FUN_00016423)
 * Prototype: undefined4 dk_control_structure_gt_ca_016423(void);
 * Address  : 0x16423 (Size: 117 bytes)
 * Module   : combchk.cpp [direct_file_string_xref]
 * OrigLine : combchk.cpp:447
 * Naming   : String 'NO CONTROL STRUCTURE - C%d M%d GT%d CA%d'
 * Callers  : 3 -> 0x15950, 0x16d62, 0x16fab
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1604c5: "combchk.cpp"
 *   - 0x16049c: "NO CONTROL STRUCTURE - C%d M%d GT%d CA%d"
 ******************************************************************************/
undefined4 FUN_00016423(void)

{
  byte bVar1;
  int in_EAX;
  byte *in_EDX;
  
  if (((*in_EDX & 1) == 0) ||
     (*(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9e) != *(int *)(in_EDX + 9))) {
    return 0;
  }
  if (((*(short *)(in_EDX + 100) == 0) && (bVar1 = in_EDX[0x1f], bVar1 != 1)) && (bVar1 != 9)) {
    FUN_000e7714(&DAT_0019cbac,s_NO_CONTROL_STRUCTURE___C_d_M_d_G_0016049c,bVar1,in_EDX[0x1a],
                 DAT_002e8bee,*(undefined4 *)(in_EAX + 9));
    FUN_000ddaf0(); /* LbErrorLog("combchk.cpp", line 447, g_log_buf) */
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_016498 (Ghidra: FUN_00016498)
 * Prototype: undefined8 sub_016498(void);
 * Address  : 0x16498 (Size: 39 bytes)
 * Module   : combchk.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1660d
 * Callees  : 1 -> 0xdc440
 ******************************************************************************/
undefined8 FUN_00016498(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000dc440();
  return CONCAT44(in_EDX,(uint)(iVar1 < 0x600));
}

/******************************************************************************
 * Function : sub_0164bf (Ghidra: FUN_000164bf)
 * Prototype: uint sub_0164bf(void);
 * Address  : 0x164bf (Size: 108 bytes)
 * Module   : combchk.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1652b
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000164bf(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  int iVar2;
  int iVar3;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar2 + 0x1b) != '\0') {
    iVar3 = iVar2;
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if ((*(short *)(iVar3 + 0xb) != 0) && (in_EDX != *(byte *)(in_EAX + 0x1a))) {
        return (uint)*(byte *)(in_EAX + 0x1a);
      }
      iVar3 = iVar3 + 2;
    }
  }
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if ((*(short *)(iVar2 + 0x13) != 0) && (*(byte *)(in_EAX + 0x1a) != in_EDX)) {
        return (uint)*(byte *)(in_EAX + 0x1a);
      }
      iVar2 = iVar2 + 2;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01652b (Ghidra: FUN_0001652b)
 * Prototype: undefined4 sub_01652b(void);
 * Address  : 0x1652b (Size: 162 bytes)
 * Module   : combchk.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x165cd, 0x18119
 * Callees  : 1 -> 0x164bf
 ******************************************************************************/
undefined4 FUN_0001652b(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar2;
  bool bVar3;
  
  if ((byte)(&DAT_002e911b)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == 0xff) {
    if (*(char *)(in_EDX + 0x1a) != *(char *)(in_EAX + 0x1a)) {
      return 1;
    }
    iVar1 = FUN_000164bf();
    bVar3 = iVar1 == 0;
  }
  else {
    iVar1 = ((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] *
                   (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) / 100
            + (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73]) *
            (uint)(byte)(&DAT_002e911b)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
    iVar2 = iVar1 >> 0x1f;
    if ((int)((iVar1 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8 <
        (int)*(short *)(in_EAX + 0x5e)) {
      return 0;
    }
    if ((int)*(char *)(in_EAX + 6) == (uint)DAT_002eb543) {
      return 0;
    }
    bVar3 = ((&DAT_002e0591)[*(char *)(in_EAX + 6) * 0x1508] & 2) == 0;
  }
  if (!bVar3) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_null_enemy_0165cd (Ghidra: FUN_000165cd)
 * Prototype: undefined4 dk_null_enemy_0165cd(void);
 * Address  : 0x165cd (Size: 64 bytes)
 * Module   : combchk.cpp [direct_file_string_xref]
 * OrigLine : combchk.cpp:551 ("NULL - ENEMY")
 * Naming   : String 'NULL - ENEMY'
 * Callers  : 1 -> 0x1660d
 * Callees  : 2 -> 0x1652b, 0xddaf0
 * Strings  :
 *   - 0x1604de: "combchk.cpp"
 *   - 0x1604d1: "NULL - ENEMY"
 ******************************************************************************/
undefined4 FUN_000165cd(void)

{
  int in_EAX;
  undefined4 uVar1;
  int in_EDX;
  
  if ((in_EDX == 0) || (in_EDX == DAT_001ae9fc)) {
    FUN_000ddaf0(); /* LbErrorLog("combchk.cpp", line 551, "NULL - ENEMY") */
  }
  else if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xa9) == '\0') {
    uVar1 = FUN_0001652b();
    return uVar1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01660d (Ghidra: FUN_0001660d)
 * Prototype: undefined4 sub_01660d(void);
 * Address  : 0x1660d (Size: 48 bytes)
 * Module   : combchk.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x15950, 0x1829f
 * Callees  : 3 -> 0x16498, 0x165cd, 0x189d4
 ******************************************************************************/
undefined4 FUN_0001660d(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_000189d4();
  iVar1 = FUN_000165cd();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_00016498();
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

