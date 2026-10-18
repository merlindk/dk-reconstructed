/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: moodneed.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_051374 (Ghidra: FUN_00051374)
 * Prototype: void sub_051374(void);
 * Address  : 0x51374 (Size: 139 bytes)
 * Module   : moodneed.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 77 -> 0x1073a, 0x11862, 0x11b51, 0x17e7e, 0x18ffe, 0x1b721, 0x23291, 0x23868, 0x26c6d, 0x2796f ...
 * Callees  : 6 -> 0x51484, 0x514c2, 0x514ca, 0x514f8, 0x6eb1a, 0x6ebff
 ******************************************************************************/
void FUN_00051374(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBX;
  undefined8 uVar2;
  
  if (DAT_002e8bee < (uint)(&DAT_0017cb84)[in_EAX * 3]) {
    return;
  }
  iVar1 = FUN_0006ebff();
  if (iVar1 == 0) {
    FUN_00051484();
    iVar1 = FUN_000514c2();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_0006eb1a();
    if ((int)uVar2 != 0) {
      DAT_0034b238 = extraout_ECX_00;
      (&DAT_0017cb84)[in_EAX * 3] = (int)((ulonglong)uVar2 >> 0x20) + DAT_002e8bee;
      return;
    }
    if (unaff_EBX == 0) {
      return;
    }
    if (extraout_ECX_00 == DAT_0034b238) {
      return;
    }
    iVar1 = FUN_000514ca();
  }
  else {
    if (unaff_EBX == 0) {
      return;
    }
    if (extraout_ECX == DAT_0034b238) {
      return;
    }
    iVar1 = FUN_000514ca();
  }
  if (iVar1 == 0) {
    FUN_000514f8();
  }
  return;
}

/******************************************************************************
 * Function : sub_0516a4 (Ghidra: FUN_000516a4)
 * Prototype: void sub_0516a4(void);
 * Address  : 0x516a4 (Size: 289 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51904
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000516a4(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = in_EDX * 0x200 + 0x100;
  uVar7 = 0;
  while ((int)uVar7 < 0x100) {
    uVar3 = (in_EDX >> 1) + uVar7;
    iVar4 = uVar7 * 0x100;
    uVar7 = uVar7 + in_EDX;
    iVar4 = in_EAX + iVar4;
    iVar1 = in_EAX + (uVar7 & 0xff) * 0x100;
    for (iVar5 = 0; iVar5 < 0x100; iVar5 = iVar5 + in_EDX) {
      uVar6 = iVar5 + in_EDX & 0xff;
      DAT_0017d164 = DAT_0017d164 * 0x24a1 + 0x24df;
      DAT_0017d164 = DAT_0017d164 >> 0xd | DAT_0017d164 * 0x80000;
      iVar8 = ((int)((uint)*(byte *)(uVar6 + iVar1) +
                    (uint)*(byte *)(iVar5 + iVar4) + (uint)*(byte *)(uVar6 + iVar4) +
                    (uint)*(byte *)(iVar5 + iVar1)) >> 2) +
              ((int)(DAT_0017d164 % uVar2 - ((int)uVar2 >> 1)) >> 8);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      *(char *)((uVar3 & 0xff) * 0x100 + in_EAX + ((in_EDX >> 1) + iVar5 & 0xffU)) = (char)iVar8;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0517c5 (Ghidra: FUN_000517c5)
 * Prototype: void sub_0517c5(void);
 * Address  : 0x517c5 (Size: 319 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51904
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000517c5(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = in_ECX >> 1;
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + in_ECX) {
    iVar3 = local_14 + unaff_EBX;
    iVar1 = in_EAX + iVar3 * 0x100;
    local_18 = 0;
    while (local_18 < 0x100) {
      iVar5 = local_18 + in_EDX;
      DAT_0017d168 = DAT_0017d168 * 0x24a1 + 0x24df;
      DAT_0017d168 = DAT_0017d168 >> 0xd | DAT_0017d168 * 0x80000;
      iVar4 = ((int)((uint)*(byte *)(iVar5 + in_EAX + (iVar3 + iVar2 & 0xffU) * 0x100) +
                    (uint)*(byte *)(iVar5 + in_EAX + (iVar3 - iVar2 & 0xffU) * 0x100) +
                    (uint)*(byte *)((iVar5 - iVar2 & 0xffU) + iVar1) +
                    (uint)*(byte *)(iVar1 + (iVar2 + iVar5 & 0xffU))) >> 2) +
              ((int)(DAT_0017d168 % (uint)(in_ECX << 9) - ((in_ECX << 9) >> 1)) >> 8);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      local_18 = local_18 + in_ECX;
      *(char *)(iVar5 + iVar3 * 0x100 + in_EAX) = (char)iVar4;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_051904 (Ghidra: FUN_00051904)
 * Prototype: void sub_051904(void);
 * Address  : 0x51904 (Size: 80 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x516a4, 0x517c5
 ******************************************************************************/
void FUN_00051904(void)

{
  undefined1 *in_EAX;
  uint uVar1;
  
  *in_EAX = 0x80;
  for (uVar1 = 0x100; 1 < uVar1; uVar1 = (int)uVar1 >> 1) {
    FUN_000516a4();
    FUN_000517c5();
    FUN_000517c5();
  }
  return;
}

/******************************************************************************
 * Function : sub_051954 (Ghidra: FUN_00051954)
 * Prototype: void sub_051954(void);
 * Address  : 0x51954 (Size: 178 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00051954(void)

{
  undefined1 *puVar1;
  int extraout_ECX;
  int extraout_EDX;
  uint uVar2;
  uint uVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble extraout_ST1;
  int aiStack_42c [257];
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  lVar4 = (longdouble)_DAT_00165a0c;
  lVar5 = (longdouble)_DAT_00165a04;
  do {
    fsin((longdouble)local_18 * lVar5 * lVar4);
    aiStack_42c[0] = 0x5198c;
    lVar5 = (longdouble)FUN_000e8d50();
    local_28 = (int)ROUND(lVar5);
    local_18 = local_18 + 1;
    *(int *)((int)aiStack_42c + extraout_EDX) = (int)ROUND(lVar5);
    lVar5 = extraout_ST1;
  } while (local_18 < 0x100);
  local_1c = 0x10000;
  local_24 = extraout_ECX;
  uVar2 = 0;
  do {
    puVar1 = (undefined1 *)(uVar2 + extraout_ECX);
    local_20 = (undefined1 *)(extraout_ECX + local_1c);
    uVar3 = uVar2;
    do {
      local_28 = aiStack_42c[(uVar3 & 0x100) + 1] + 0x8000 >> 9;
      *puVar1 = (undefined1)local_28;
      puVar1 = puVar1 + 0x100;
      uVar3 = uVar3 + 1;
    } while (puVar1 != (undefined1 *)(extraout_ECX + local_1c));
    uVar2 = uVar2 + 1;
    local_1c = local_1c + 1;
  } while ((int)uVar2 < 0x100);
  return;
}

/******************************************************************************
 * Function : sub_051a06 (Ghidra: FUN_00051a06)
 * Prototype: void sub_051a06(void);
 * Address  : 0x51a06 (Size: 57 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x27130
 * Callees  : 1 -> 0x51a3f
 ******************************************************************************/
void FUN_00051a06(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  *(undefined1 *)(in_EAX + 3) = 0;
  *(undefined1 *)((int)in_EAX + 0xe) = 0x32;
  *(undefined1 *)((int)in_EAX + 0xd) = 0;
  *(undefined1 *)((int)in_EAX + 0xf) = 0x80;
  *in_EAX = in_EDX;
  in_EAX[1] = unaff_EBX;
  in_EAX[2] = in_ECX;
  FUN_00051a3f();
  *(undefined1 *)(in_EAX + 6) = 2;
  *(undefined1 *)((int)in_EAX + 0x19) = 1;
  *(undefined1 *)((int)in_EAX + 0x1a) = 0xfd;
  *(undefined1 *)((int)in_EAX + 0x1b) = 3;
  return;
}

/******************************************************************************
 * Function : sub_051a3f (Ghidra: FUN_00051a3f)
 * Prototype: void sub_051a3f(void);
 * Address  : 0x51a3f (Size: 7 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x27130, 0x51a06
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00051a3f(void)

{
  int in_EAX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  *(undefined4 *)(in_EAX + 0x10) = in_EDX;
  *(undefined4 *)(in_EAX + 0x14) = unaff_EBX;
  return;
}

/******************************************************************************
 * Function : sub_051a46 (Ghidra: FUN_00051a46)
 * Prototype: void sub_051a46(void);
 * Address  : 0x51a46 (Size: 33 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x87da4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00051a46(void)

{
  int in_EAX;
  
  *(char *)(in_EAX + 0xc) = *(char *)(in_EAX + 0xc) + *(char *)(in_EAX + 0x18);
  *(char *)(in_EAX + 0xd) = *(char *)(in_EAX + 0xd) + *(char *)(in_EAX + 0x19);
  *(char *)(in_EAX + 0xe) = *(char *)(in_EAX + 0xe) - *(char *)(in_EAX + 0x1a);
  *(char *)(in_EAX + 0xf) = *(char *)(in_EAX + 0xf) + *(char *)(in_EAX + 0x1b);
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + *(int *)(in_EAX + 0x14);
  return;
}

/******************************************************************************
 * Function : sub_051a67 (Ghidra: FUN_00051a67)
 * Prototype: void sub_051a67(int param_1,int param_2,int param_3);
 * Address  : 0x51a67 (Size: 202 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x87da4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00051a67(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *in_EAX;
  byte *in_ECX;
  uint uVar2;
  undefined1 *in_EDX;
  int unaff_EBX;
  int local_24;
  int local_20;
  byte local_1c;
  byte local_18;
  byte local_14;
  byte local_10;
  
  local_14 = *(byte *)(in_EAX + 3);
  local_1c = *(byte *)((int)in_EAX + 0xd);
  local_18 = *(byte *)((int)in_EAX + 0xe);
  local_10 = *(byte *)((int)in_EAX + 0xf);
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    local_20 = 0;
    while (local_20 < param_2) {
      uVar2 = (int)((uint)*(byte *)((uint)local_14 + *in_EAX + (uint)local_1c * 0x100) +
                   (uint)*(byte *)((uint)local_18 + (uint)local_10 * 0x100 + *in_EAX)) >> 3;
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0x20 < uVar2) {
        uVar2 = 0x20;
      }
      local_20 = local_20 + 1;
      local_14 = local_14 + 1;
      bVar1 = *in_ECX;
      local_10 = local_10 - 1;
      in_ECX = in_ECX + 1;
      *in_EDX = *(undefined1 *)(in_EAX[1] + uVar2 * 0x100 + (uint)bVar1);
      in_EDX = in_EDX + 1;
    }
    local_1c = local_1c + 1;
    local_18 = local_18 - 1;
    in_EDX = in_EDX + (unaff_EBX - param_2);
    in_ECX = in_ECX + (param_1 - param_2);
    local_14 = local_14 - (char)param_2;
    local_10 = local_10 + (char)param_2;
  }
  return;
}

/******************************************************************************
 * Function : sub_051d41 (Ghidra: FUN_00051d41)
 * Prototype: void sub_051d41(int param_1,int param_2,int param_3);
 * Address  : 0x51d41 (Size: 276 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf0f8c
 ******************************************************************************/
void FUN_00051d41(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  byte extraout_CL;
  byte bVar4;
  byte extraout_CH;
  byte bVar5;
  byte *in_ECX;
  undefined1 *in_EDX;
  undefined1 *extraout_EDX;
  int unaff_EBX;
  int local_1c;
  int local_18;
  byte local_14;
  byte local_10;
  
  local_1c = 0;
  iVar2 = in_EAX[4];
  bVar4 = *(byte *)(in_EAX + 3);
  local_14 = *(byte *)((int)in_EAX + 0xd);
  local_10 = *(byte *)((int)in_EAX + 0xe);
  bVar5 = *(byte *)((int)in_EAX + 0xf);
  for (; local_1c < param_3; local_1c = local_1c + 1) {
    local_18 = 0;
    while (local_18 < param_2) {
      iVar3 = ((int)((uint)*(byte *)((uint)local_10 + *in_EAX + (uint)bVar5 * 0x100) +
                    (uint)*(byte *)((uint)bVar4 + *in_EAX + (uint)local_14 * 0x100)) >> 3) -
              ((iVar2 >> 10) + -0x20);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x1f < iVar3) {
        iVar3 = 0x1f;
      }
      if ((local_1c == 100) && (local_18 == 100)) {
        FUN_000f0f8c(s__alpha__d_00165a1b + 1,iVar3);
        in_EDX = extraout_EDX;
        bVar4 = extraout_CL;
        bVar5 = extraout_CH;
      }
      local_18 = local_18 + 1;
      bVar4 = bVar4 + 1;
      bVar1 = *in_ECX;
      in_ECX = in_ECX + 1;
      bVar5 = bVar5 - 1;
      *in_EDX = *(undefined1 *)((uint)bVar1 + in_EAX[1] + DAT_0017d16c * 0x100);
      in_EDX = in_EDX + 1;
    }
    local_14 = local_14 + 1;
    local_10 = local_10 - 1;
    bVar4 = bVar4 - (char)param_2;
    in_EDX = in_EDX + (unaff_EBX - param_2);
    in_ECX = in_ECX + (param_1 - param_2);
    bVar5 = bVar5 + (char)param_2;
  }
  if (DAT_0017d16c != 0) {
    DAT_0017d16c = DAT_0017d16c + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_051e55 (Ghidra: FUN_00051e55)
 * Prototype: void sub_051e55(int param_1,int param_2,int param_3);
 * Address  : 0x51e55 (Size: 244 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00051e55(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *in_EAX;
  byte *in_ECX;
  int iVar3;
  undefined1 *in_EDX;
  int unaff_EBX;
  int iVar4;
  int local_34;
  byte local_1c;
  byte local_18;
  byte local_14;
  byte local_10;
  
  local_10 = *(byte *)(in_EAX + 3);
  local_1c = *(byte *)((int)in_EAX + 0xd);
  local_14 = *(byte *)((int)in_EAX + 0xe);
  local_18 = *(byte *)((int)in_EAX + 0xf);
  iVar2 = in_EAX[4];
  for (iVar4 = 0; iVar4 < param_3; iVar4 = iVar4 + 1) {
    local_34 = 0;
    while (local_34 < param_2) {
      iVar3 = ((int)((uint)*(byte *)((uint)local_18 * 0x100 + *in_EAX + (uint)local_14) +
                    (uint)*(byte *)((uint)local_1c * 0x100 + *in_EAX + (uint)local_10)) >> 3) -
              ((iVar2 >> 10) + -0x20);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x20 < iVar3) {
        iVar3 = 0x20;
      }
      bVar1 = *in_ECX;
      local_34 = local_34 + 1;
      local_10 = local_10 + 1;
      local_18 = local_18 - 1;
      in_ECX = in_ECX + 1;
      *in_EDX = *(undefined1 *)
                 ((uint)*(byte *)((uint)bVar1 + (0x20 - iVar3) * 0x100 + in_EAX[1]) + in_EAX[2]);
      in_EDX = in_EDX + 1;
    }
    local_1c = local_1c + 1;
    local_14 = local_14 - 1;
    in_EDX = in_EDX + (unaff_EBX - param_2);
    in_ECX = in_ECX + (param_1 - param_2);
    local_10 = local_10 - (char)param_2;
    local_18 = local_18 + (char)param_2;
  }
  return;
}

/******************************************************************************
 * Function : sub_051f4c (Ghidra: FUN_00051f4c)
 * Prototype: undefined4 sub_051f4c(void);
 * Address  : 0x51f4c (Size: 461 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52834
 * Callees  : 4 -> 0x10434, 0x4d683, 0x64a5f, 0x6dda0
 ******************************************************************************/
undefined4 FUN_00051f4c(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(in_EDX + 9) == '\0') {
    return 0;
  }
  if (*(char *)(in_EDX + 0x17) == '\0') {
    return 0;
  }
  iVar3 = ((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] *
                 (uint)*(byte *)(iVar1 + 0x23) * 0x23) / 100 +
          (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73]) * 0x20;
  iVar4 = iVar3 >> 0x1f;
  if ((int)((iVar3 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8 <=
      (int)*(short *)(in_EAX + 0x5e)) {
    return 0;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 == '\x19') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == '\x1a') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 == 'Y') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 == '\x15') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 == '\x16') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 != '\x14') {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar2 = *(char *)(in_EAX + 8);
    }
    else {
      cVar2 = *(char *)(in_EAX + 7);
    }
    if (cVar2 != 'P') {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 != '~') {
        cVar2 = FUN_0006dda0();
        if (cVar2 == '\0') {
          return 0;
        }
        if (((uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2d7)) < 0x81) ||
           ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68) == 0 &&
            (iVar3 = FUN_0004d683(), iVar3 == 0)))) {
          FUN_00010434();
        }
        else {
          cVar2 = FUN_00064a5f();
          if (cVar2 != '\0') {
            return 1;
          }
          *(int *)(iVar1 + 0x2d7) = DAT_002e8bee;
        }
        *(int *)(iVar1 + 0x2d7) = DAT_002e8bee;
        return 0;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_052119 (Ghidra: FUN_00052119)
 * Prototype: undefined4 sub_052119(void);
 * Address  : 0x52119 (Size: 471 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52834
 * Callees  : 4 -> 0x10434, 0x4d683, 0x64a5f, 0x6dda0
 ******************************************************************************/
undefined4 FUN_00052119(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int in_EDX;
  int iVar5;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (((*(char *)(in_EDX + 9) == '\0') || (*(char *)(in_EDX + 0x17) == '\0')) ||
     (iVar3 = (uint)(byte)(&DAT_002e9116)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] *
              ((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] +
              (int)((uint)*(byte *)(iVar1 + 0x23) *
                    (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] * 0x23) / 100
              ), iVar5 = iVar3 >> 0x1f,
     (int)((iVar3 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8 <= (int)*(short *)(in_EAX + 0x5e)
     )) {
LAB_0005257c:
    uVar4 = 0;
  }
  else {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar2 = *(char *)(in_EAX + 8);
    }
    else {
      cVar2 = *(char *)(in_EAX + 7);
    }
    if ((cVar2 != '\x19') && (*(char *)(in_EAX + 7) != '\x1a')) {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 != 'Y') {
        if (*(char *)(in_EAX + 7) == '\x0e') {
          cVar2 = *(char *)(in_EAX + 8);
        }
        else {
          cVar2 = *(char *)(in_EAX + 7);
        }
        if (cVar2 != '\x15') {
          if (*(char *)(in_EAX + 7) == '\x0e') {
            cVar2 = *(char *)(in_EAX + 8);
          }
          else {
            cVar2 = *(char *)(in_EAX + 7);
          }
          if (cVar2 != '\x16') {
            if (*(char *)(in_EAX + 7) == '\x0e') {
              cVar2 = *(char *)(in_EAX + 8);
            }
            else {
              cVar2 = *(char *)(in_EAX + 7);
            }
            if (cVar2 != '\x14') {
              if (*(char *)(in_EAX + 7) == '\x0e') {
                cVar2 = *(char *)(in_EAX + 8);
              }
              else {
                cVar2 = *(char *)(in_EAX + 7);
              }
              if (cVar2 != 'P') {
                if (*(char *)(in_EAX + 7) == '\x0e') {
                  cVar2 = *(char *)(in_EAX + 8);
                }
                else {
                  cVar2 = *(char *)(in_EAX + 7);
                }
                if (cVar2 != '~') {
                  cVar2 = FUN_0006dda0();
                  if (cVar2 == '\0') goto LAB_0005257c;
                  if ((uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2d7)) < 0x81) {
LAB_000522be:
                    FUN_00010434();
                  }
                  else {
                    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68) == 0) {
                      iVar3 = FUN_0004d683();
                      if (iVar3 == 0) goto LAB_000522be;
                    }
                    cVar2 = FUN_00064a5f();
                    if (cVar2 != '\0') goto LAB_000522a7;
                    *(int *)(iVar1 + 0x2d7) = DAT_002e8bee;
                  }
                  *(int *)(iVar1 + 0x2d7) = DAT_002e8bee;
                  goto LAB_0005257c;
                }
              }
            }
          }
        }
      }
    }
LAB_000522a7:
    uVar4 = 1;
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_0522f0 (Ghidra: FUN_000522f0)
 * Prototype: longlong sub_0522f0(void);
 * Address  : 0x522f0 (Size: 114 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x52834, 0x65ebd
 * Callees  : 1 -> 0x81c44
 ******************************************************************************/
longlong FUN_000522f0(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (((*(short *)(&DAT_002e911f + iVar2) != 0) && ((*(byte *)(iVar1 + 0xab) & 2) == 0)) &&
     (*(int *)(iVar1 + 0x39) = *(int *)(iVar1 + 0x39) + 1,
     (int)*(short *)(&DAT_002e911f + iVar2) < *(int *)(iVar1 + 0x39))) {
    if (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee) % (uint)DAT_002ebc48 == 0) {
      FUN_00081c44();
    }
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_this_shouldn_happen_052362 (Ghidra: FUN_00052362)
 * Prototype: undefined4 dk_this_shouldn_happen_052362(void);
 * Address  : 0x52362 (Size: 592 bytes)
 * Module   : moodneed.cpp [direct_file_string_xref]
 * OrigLine : moodneed.cpp:175 ("This shouldn't happen")
 * Naming   : String 'This shouldn't happen'
 * Callers  : 1 -> 0x52834
 * Callees  : 8 -> 0x10434, 0x274ad, 0x51374, 0x64a5f, 0xab284, 0xc9b2c, 0xca474, 0xddaf0
 * Strings  :
 *   - 0x165a3e: "moodneed.cpp"
 *   - 0x165a28: "This shouldn't happen"
 ******************************************************************************/
undefined4 FUN_00052362(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *extraout_ECX;
  int in_EDX;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  iVar3 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(&DAT_002e911f + iVar3) == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x39) <= (int)*(short *)(&DAT_002e911f + iVar3)) {
    return 0;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 == '\x12') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == 'j') {
    return 1;
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 == '\x13') {
    return 1;
  }
  uStack_1c = 0x523ec;
  local_18 = in_EDX;
  cVar2 = FUN_000ab284();
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(byte *)(local_18 + 0x14) <= *(byte *)(iVar1 + 0x42)) {
    *(int *)(iVar1 + 0x2db) = DAT_002e8bee;
    *(char *)(iVar1 + 0x42) = *(char *)(iVar1 + 0x42) - *(char *)(local_18 + 0x14);
    return 0;
  }
  if (*(short *)(&DAT_002e05ae + *(char *)(in_EAX + 6) * 0x1508) == 0) {
    piVar5 = &local_18;
    if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      uStack_1c = 0x525b0;
      FUN_00051374();
      piVar5 = &local_18;
    }
    goto LAB_0005255a;
  }
  piVar5 = &local_18;
  if ((uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2db)) < 0x81) goto LAB_0005255a;
  uStack_1c = 1;
  uStack_20 = 0x52457;
  puVar4 = (undefined1 *)FUN_000ca474();
  if (puVar4 < &DAT_002ddd1c) {
    *(int *)(iVar1 + 0x2db) = DAT_002e8bee;
    uStack_20 = 0x52481;
    puVar4 = (undefined1 *)FUN_000c9b2c();
    if (&DAT_002ddd1b < puVar4) {
      if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
      goto LAB_000524e2;
    }
    else if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
    {
LAB_000524e2:
      uStack_20 = 0x524e7;
      FUN_00051374();
      puVar4 = extraout_ECX;
    }
  }
  if (&DAT_002ddd1b < puVar4) {
    uStack_20 = 0x524fb;
    cVar2 = FUN_00064a5f();
    if (cVar2 != '\0') {
      if (*(char *)(iVar1 + 0x42) == '\0') {
        *(undefined1 *)(iVar1 + 0x41) = *(undefined1 *)(local_18 + 0x14);
      }
      else {
        cVar2 = *(char *)(local_18 + 0x14) - *(char *)(iVar1 + 0x42);
        *(char *)(iVar1 + 0x41) = cVar2;
        if (cVar2 < '\x01') {
          uStack_20 = 0x5252c;
          FUN_000ddaf0(); /* LbErrorLog("moodneed.cpp", line 175, "This shouldn't happen") */
          *(undefined1 *)(iVar1 + 0x41) = 1;
        }
        *(undefined1 *)(iVar1 + 0x42) = 0;
      }
      return 1;
    }
  }
  uStack_20 = 0;
  FUN_000274ad();
  piVar5 = &uStack_20;
LAB_0005255a:
  *(undefined4 *)((int)piVar5 + -4) = 0x5257c;
  FUN_00010434();
  return 0;
}

/******************************************************************************
 * Function : dk_shit_could_get_treasure_0525b2 (Ghidra: FUN_000525b2)
 * Prototype: undefined4 dk_shit_could_get_treasure_0525b2(void);
 * Address  : 0x525b2 (Size: 386 bytes)
 * Module   : moodneed.cpp [direct_file_string_xref]
 * OrigLine : moodneed.cpp:244 ("Shit, could not get to treasure room door and I've cleaned up my old state")
 * Naming   : String 'Shit, could not get to treasure room door and I've cleaned u'
 * Callers  : 1 -> 0x52834
 * Callees  : 10 -> 0x10434, 0x28aa0, 0x63b6d, 0x64a2e, 0x64a5f, 0x64c4d, 0xc9988, 0xca474, 0xcc4a0, 0xddaf0
 * Strings  :
 *   - 0x165a96: "moodneed.cpp"
 *   - 0x165ae9: "moodneed.cpp"
 *   - 0x165a4b: "Shit, could not get to treasure room door and I've cleaned up my old state"
 *   - 0x165aa3: "Shit, could not get to treasure room and I've cleaned up my old state"
 ******************************************************************************/
undefined4 FUN_000525b2(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int in_EDX;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(short *)(in_EDX + 0x98) == 0) || (*(char *)(iVar4 + 0x48) == '\0')) {
    return 0;
  }
  if (*(char *)(in_EAX + 7) != 'K') {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar2 = *(char *)(in_EAX + 8);
    }
    else {
      cVar2 = *(char *)(in_EAX + 7);
    }
    if (cVar2 != 'L') {
      cVar2 = FUN_00064c4d();
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = FUN_000ca474(1);
      if (iVar3 != 0) {
        cVar2 = FUN_00064a5f();
        if (cVar2 == '\0') {
          return 0;
        }
        FUN_00010434();
        return 1;
      }
      iVar3 = FUN_000ca474(1);
      if (iVar3 == 0) {
        if (((int)(&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542] < 1) ||
           (iVar3 = FUN_000c9988(), iVar3 == 0)) {
          pcVar1 = (char *)(iVar4 + 0x48);
          *pcVar1 = *pcVar1 + -1;
          FUN_00010434();
          return 0;
        }
        FUN_00064a2e();
        iVar4 = FUN_000cc4a0();
        if (iVar4 != 0) {
          *(undefined1 *)(in_EAX + 8) = 0x4c;
          *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
               *(undefined2 *)(extraout_ECX + 1);
          return 1;
        }
      }
      else {
        FUN_00064a2e();
        iVar4 = FUN_00028aa0();
        if (iVar4 != 0) {
          return 1;
        }
      }
      FUN_000ddaf0(); /* LbErrorLog("moodneed.cpp", line 244, "Shit, could not get to treasure room door and I've cleaned up my old state") */
      FUN_00063b6d();
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_052734 (Ghidra: FUN_00052734)
 * Prototype: undefined4 sub_052734(void);
 * Address  : 0x52734 (Size: 128 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52834
 * Callees  : 2 -> 0x10434, 0x75b48
 ******************************************************************************/
undefined4 FUN_00052734(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int in_EDX;
  undefined8 uVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(in_EDX + 0xc2) != 0) {
    uVar3 = FUN_00075b48();
    if ((int)uVar3 != 0) {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if ((cVar2 != '!') &&
         (*(int *)(iVar1 + 0x4a) = *(int *)(iVar1 + 0x4a) + 1,
         (int)*(short *)((int)((ulonglong)uVar3 >> 0x20) + 0xc0) <= *(int *)(iVar1 + 0x4a))) {
        FUN_00010434();
        *(undefined4 *)(iVar1 + 0x4a) = 0;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0527b4 (Ghidra: FUN_000527b4)
 * Prototype: undefined4 sub_0527b4(void);
 * Address  : 0x527b4 (Size: 128 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52834
 * Callees  : 1 -> 0x64a5f
 ******************************************************************************/
undefined4 FUN_000527b4(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((((*(short *)(iVar1 + 0xb9) != 0) &&
       (*(char *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xb9)] + 6) != *(char *)(in_EAX + 6))) &&
      ((&DAT_002e91a3)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0')) &&
     (200 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0xb2)))) {
    cVar2 = FUN_00064a5f();
    if (cVar2 != '\0') {
      *(undefined2 *)(iVar1 + 0x282) = 0x32;
      *(int *)(iVar1 + 0xb2) = DAT_002e8bee;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_052834 (Ghidra: FUN_00052834)
 * Prototype: void sub_052834(void);
 * Address  : 0x52834 (Size: 253 bytes)
 * Module   : moodneed.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1b88
 * Callees  : 8 -> 0x1073a, 0x51f4c, 0x52119, 0x522f0, 0x52362, 0x525b2, 0x52734, 0x527b4
 ******************************************************************************/
void FUN_00052834(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  
  if (((int)*(char *)(in_EAX + 6) < (int)(uint)DAT_002eb542) && (*(char *)(in_EAX + 0x1a) != '\x17')
     ) {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar1 = *(char *)(in_EAX + 8);
    }
    else {
      cVar1 = *(char *)(in_EAX + 7);
    }
    if (cVar1 != ')') {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar1 = *(char *)(in_EAX + 8);
      }
      else {
        cVar1 = *(char *)(in_EAX + 7);
      }
      if (cVar1 != '(') {
        if (*(char *)(in_EAX + 7) == '\x0e') {
          cVar1 = *(char *)(in_EAX + 8);
        }
        else {
          cVar1 = *(char *)(in_EAX + 7);
        }
        if (cVar1 != '+') {
          if (*(char *)(in_EAX + 7) == '\x0e') {
            cVar1 = *(char *)(in_EAX + 8);
          }
          else {
            cVar1 = *(char *)(in_EAX + 7);
          }
          if (cVar1 != '*') {
            FUN_000522f0();
            iVar2 = FUN_00051f4c();
            if (iVar2 == 0) {
              iVar2 = FUN_000525b2();
              if (iVar2 == 0) {
                iVar2 = FUN_00052362();
                if (iVar2 == 0) {
                  iVar2 = FUN_0001073a();
                  if (iVar2 == 0) {
                    FUN_00052119();
                  }
                }
              }
            }
            FUN_00052734();
            FUN_000527b4();
          }
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_052934 (Ghidra: FUN_00052934)
 * Prototype: void sub_052934(void);
 * Address  : 0x52934 (Size: 35 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2dfac, 0x2e8a7, 0x36ff4
 * Callees  : 4 -> 0x52957, 0x52988, 0x529b9, 0x52a88
 ******************************************************************************/
void FUN_00052934(void)

{
  FUN_000529b9();
  FUN_00052a88();
  FUN_00052957();
  FUN_00052988();
  DAT_003d987b = 0;
  DAT_003d987c = 0;
  return;
}

/******************************************************************************
 * Function : sub_052957 (Ghidra: FUN_00052957)
 * Prototype: void sub_052957(void);
 * Address  : 0x52957 (Size: 49 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52934
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052957(void)

{
  DAT_0034b25c = DAT_003d987b;
  DAT_0034b260 = DAT_003d985c * (uint)DAT_0019cba6;
  DAT_0034b264 = (uint)DAT_0019cba6 * DAT_003d9860;
  return;
}

