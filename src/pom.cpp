/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: pom.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 11
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0654d8 (Ghidra: FUN_000654d8)
 * Prototype: undefined8 sub_0654d8(void);
 * Address  : 0x654d8 (Size: 109 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x6edb9
 ******************************************************************************/
undefined8 FUN_000654d8(void)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined1 *puVar4;
  uint *puVar5;
  uint uStack_18;
  
  puVar4 = &stack0xffffffec;
  puVar5 = (uint *)&stack0xffffffec;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar2 + 0x282) != 0) {
    psVar1 = (short *)(iVar2 + 0x282);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 != 0) {
      if (0x20 < (uint)(DAT_002e8bee - *(int *)(iVar2 + 0x9a))) {
        uStack_18 = 0x65520;
        FUN_0006edb9();
        *(int *)(iVar2 + 0x9a) = DAT_002e8bee;
      }
      uStack_18 = (uint)*(byte *)(iVar2 + 0xd2);
      if (uStack_18 == 0) {
        puVar5 = &uStack_18;
        FUN_00049bfc();
      }
      uVar3 = 1;
      puVar4 = (undefined1 *)puVar5;
      goto LAB_00064358;
    }
  }
  if (*(char *)(iVar2 + 0xd2) == '\0') {
    uStack_18 = 0x65441;
    FUN_00063b6d();
  }
  uVar3 = 0;
LAB_00064358:
  return CONCAT44(*(undefined4 *)(puVar4 + 8),uVar3);
}

/******************************************************************************
 * Function : sub_065545 (Ghidra: FUN_00065545)
 * Prototype: undefined8 sub_065545(void);
 * Address  : 0x65545 (Size: 181 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2855c, 0x63dd3
 * Callees  : 1 -> 0x22b3a
 ******************************************************************************/
undefined8 FUN_00065545(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  
  iVar1 = (*(byte *)(in_EAX + 0xe) / 3) * 3 + 1;
  iVar2 = (*(byte *)(in_EAX + 0x10) / 3) * 3 + 1;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
    iVar3 = FUN_00022b3a(iVar1,iVar2);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 6) != *(char *)(in_EAX + 6))) goto LAB_00064357;
  }
  iVar3 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0655fa (Ghidra: FUN_000655fa)
 * Prototype: undefined8 sub_0655fa(void);
 * Address  : 0x655fa (Size: 288 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe0b1c, 0xe45c0
 * Callees  : 1 -> 0xb3b58
 ******************************************************************************/
undefined8 FUN_000655fa(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  undefined4 in_EDX;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int local_24;
  int local_20;
  
  iVar1 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
  local_20 = 0;
  iVar2 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
  pcVar8 = (char *)&DAT_002ee9c1;
  do {
    if (0x1f < local_20) {
      uVar4 = 0;
LAB_00064357:
      return CONCAT44(in_EDX,uVar4);
    }
    iVar6 = pcVar8[1] + iVar1;
    iVar5 = *pcVar8 + iVar2;
    if ((((-1 < iVar6) && (iVar6 < 0x55)) && (-1 < iVar5)) &&
       ((iVar5 < 0x55 &&
        ((&DAT_001921d2)[(uint)(byte)(&DAT_002d33c5)[(iVar5 * 0x55 + iVar6) * 6] * 0x16] != '\0'))))
    {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      uVar7 = DAT_002e8bf6 % 9;
      for (local_24 = 0; local_24 < 9; local_24 = local_24 + 1) {
        if ((*(byte *)((int)&DAT_00279203 +
                      (((int)(char)(&DAT_0018b64b)[uVar7 * 2] + iVar5 * 3 + 1) * 0x100 +
                      (int)*(char *)((int)&DAT_0018b647 + uVar7 * 2 + 3) + iVar6 * 3 + 1) * 5) &
            0x10) == 0) {
          sVar3 = FUN_000b3b58();
          if (sVar3 != 0) {
            uVar4 = 1;
            goto LAB_00064357;
          }
        }
        uVar7 = (int)(uVar7 + 1) % 9;
      }
    }
    local_20 = local_20 + 1;
    pcVar8 = pcVar8 + 4;
  } while( true );
}

/******************************************************************************
 * Function : sub_06571a (Ghidra: FUN_0006571a)
 * Prototype: undefined4 sub_06571a(void);
 * Address  : 0x6571a (Size: 8 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x63b6d
 ******************************************************************************/
undefined4 FUN_0006571a(void)

{
  FUN_00063b6d();
  return 0;
}

/******************************************************************************
 * Function : dk_pom_iterations_065724 (Ghidra: FUN_00065724)
 * Prototype: longdouble dk_pom_iterations_065724(void);
 * Address  : 0x65724 (Size: 320 bytes)
 * Module   : pom.cpp [direct_file_string_xref]
 * OrigLine : pom.cpp:54 ("POM - Too many iterations
")
 * Naming   : String 'POM - Too many iterations'
 * Callers  : 2 -> 0x2dfac, 0x6a412
 * Callees  : 3 -> 0x65864, 0x65a61, 0xddaf0
 * Strings  :
 *   - 0x16680f: "pom.cpp"
 *   - 0x1667f4: "POM - Too many iterations\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_00065724(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar6;
  undefined1 auStack_50 [12];
  int local_44;
  float local_40;
  float local_3c;
  int local_34;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  local_44 = 0;
  local_34 = 0;
  local_40 = 0.0;
  local_2c = 0.0;
  local_24 = 0;
  iVar6 = 1;
  local_20 = 0;
  local_1c = FUN_00065a61();
  puVar1 = auStack_50;
  while ((local_24 == 0 && (local_20 = local_20 + 1, local_20 != 0x2711))) {
    if (iVar6 == 1) {
      *(float **)(puVar1 + -4) = &local_40;
      *(undefined4 *)(puVar1 + -8) = 0x6579a;
      FUN_00065864();
      puVar1 = puVar1 + -4;
    }
    else {
      local_44 = local_34;
      local_40 = local_2c;
    }
    iVar6 = iVar6 + 1;
    puVar2 = puVar1 + -4;
    puVar3 = puVar1 + -4;
    puVar4 = puVar1 + -4;
    puVar5 = puVar1 + -4;
    *(float **)(puVar1 + -4) = &local_2c;
    *(undefined4 *)(puVar1 + -8) = 0x657bb;
    FUN_00065864();
    if (((local_44 < local_1c) ||
        ((puVar1 = puVar1 + -4, local_1c == local_44 && (puVar1 = puVar2, local_40 <= local_3c))))
       && ((local_1c < local_34 ||
           ((puVar1 = puVar3, local_1c == local_34 && (puVar1 = puVar4, local_3c < local_2c)))))) {
      local_24 = 1;
      puVar1 = puVar5;
    }
  }
  if (local_20 == 10000) {
    local_28 = 0.0;
    *(undefined4 *)(puVar1 + -4) = 0x65815;
    FUN_000ddaf0(); /* LbErrorLog("pom.cpp", line 54, "POM - Too many iterations
") */
  }
  else {
    local_28 = (((local_3c - local_40) + (float)(local_1c - local_44)) /
               ((local_2c - local_40) + (float)(local_34 - local_44))) * (float)_DAT_00166817 +
               _DAT_0016681f;
  }
  return (longdouble)local_28;
}

/******************************************************************************
 * Function : sub_065864 (Ghidra: FUN_00065864)
 * Prototype: void sub_065864(float *param_1);
 * Address  : 0x65864 (Size: 327 bytes)
 * Module   : pom.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65724
 * Callees  : 3 -> 0xe8d50, 0xf4720, 0xf475c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065864(float *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *in_ECX;
  int *extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  longdouble lVar10;
  longdouble lVar11;
  
  fVar8 = (float)in_EDX + (float)unaff_EBX * (float)_DAT_00166823;
  fVar1 = fVar8 * (float)_DAT_0016682b;
  fVar9 = fVar8 * (float)_DAT_00166833 + (float)_DAT_0016683b;
  fVar7 = fVar1 * fVar1 * (float)_DAT_00166853 + fVar8 * (float)_DAT_00166843 + (float)_DAT_0016684b
  ;
  fVar5 = (float)_DAT_0016685b;
  fVar6 = (float)_DAT_00166863;
  fVar4 = (float)_DAT_0016686b;
  fVar3 = (float)_DAT_00166873;
  *in_ECX = &DAT_0024d9ac + unaff_EBX * 7 + in_EDX * 0x1c;
  if ((unaff_EBX == 0) || (unaff_EBX == 2)) {
    lVar10 = (longdouble)fsin((longdouble)fVar9 * (longdouble)_DAT_0016688b);
    lVar10 = lVar10 * ((longdouble)_DAT_001668a3 - (longdouble)fVar1 * (longdouble)_DAT_0016689b);
    lVar11 = (longdouble)fsin((longdouble)_DAT_0016688b * (longdouble)fVar7);
    lVar11 = lVar11 * (longdouble)_DAT_001668ab;
  }
  else {
    if ((unaff_EBX != 1) && (unaff_EBX != 3)) {
      return;
    }
    lVar10 = (longdouble)fsin((longdouble)fVar9 * (longdouble)_DAT_0016688b);
    lVar10 = lVar10 * ((longdouble)_DAT_00166883 - (longdouble)fVar1 * (longdouble)_DAT_0016687b);
    lVar11 = (longdouble)fsin((longdouble)_DAT_0016688b * (longdouble)fVar7);
    lVar11 = lVar11 * (longdouble)_DAT_00166893;
  }
  fVar1 = (float)((lVar10 - lVar11) +
                 (longdouble)(fVar8 * fVar4 + fVar3 + (fVar6 - fVar1 * fVar5) * fVar1 * fVar1));
  dVar2 = (double)fVar1;
  if (dVar2 < 0.0) {
    FUN_000f475c(dVar2 + _DAT_001668b3);
  }
  else {
    FUN_000f4720(dVar2);
  }
  lVar10 = (longdouble)FUN_000e8d50();
  *extraout_ECX = *extraout_ECX + (int)ROUND(lVar10);
  *param_1 = fVar1 - (float)(int)ROUND(lVar10);
  return;
}

/******************************************************************************
 * Function : sub_0659ab (Ghidra: FUN_000659ab)
 * Prototype: int sub_0659ab(void);
 * Address  : 0x659ab (Size: 182 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65a61
 * Callees  : 2 -> 0xe8d50, 0xf4720
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000659ab(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  undefined4 local_c;
  undefined4 local_8;
  
  if (in_ECX == 0) {
    return 0;
  }
  local_8 = in_ECX;
  if (in_ECX < 0) {
    local_8 = in_ECX + 1;
  }
  if (unaff_EBX < 3) {
    iVar1 = unaff_EBX + 0xd;
    local_8 = local_8 + -1;
  }
  else {
    iVar1 = unaff_EBX + 1;
  }
  FUN_000f4720((double)local_8 * _DAT_001668bb);
  FUN_000f4720((double)iVar1 * _DAT_001668c3);
  iVar1 = FUN_000e8d50();
  local_c = (int)ROUND(extraout_ST0);
  if (0x8fc1c < iVar1 + in_EDX) {
    FUN_000e8d50();
    iVar1 = FUN_000e8d50();
    local_c = local_c + iVar1 + (int)ROUND(extraout_ST0_00);
  }
  return local_c;
}

/******************************************************************************
 * Function : sub_065a61 (Ghidra: FUN_00065a61)
 * Prototype: int sub_065a61(void);
 * Address  : 0x65a61 (Size: 142 bytes)
 * Module   : pom.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65724
 * Callees  : 3 -> 0x659ab, 0xf1abb, 0xf48aa
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00065a61(void)

{
  int *piVar1;
  int iVar2;
  float *in_EDX;
  int iVar3;
  
  FUN_000f1abb();
  piVar1 = (int *)FUN_000f48aa();
  iVar2 = FUN_000659ab();
  if (piVar1[2] < 0xc) {
    iVar2 = iVar2 + -1;
    iVar3 = *piVar1 + piVar1[2] * 0xe10 + piVar1[1] * 0x3c + 0xa8c0;
  }
  else {
    iVar3 = *piVar1 + piVar1[1] * 0x3c + (piVar1[2] + -0xc) * 0xe10;
  }
  *in_EDX = (float)iVar3 * _DAT_001668e3;
  return iVar2;
}

/******************************************************************************
 * Function : sub_065af0 (Ghidra: FUN_00065af0)
 * Prototype: bool sub_065af0(void);
 * Address  : 0x65af0 (Size: 23 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65be8
 * Callees  : 1 -> 0xce0e4
 ******************************************************************************/
bool FUN_00065af0(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_000ce0e4();
  if (iVar1 != 0) {
    *(undefined1 *)(in_EAX + 8) = 0x29;
  }
  return iVar1 != 0;
}

/******************************************************************************
 * Function : sub_065b07 (Ghidra: FUN_00065b07)
 * Prototype: longlong sub_065b07(void);
 * Address  : 0x65b07 (Size: 225 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x51374, 0x63b6d, 0x64ae7, 0x71edd, 0xacce4, 0xcd85c, 0xd0f50
 ******************************************************************************/
longlong FUN_00065b07(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar3;
  uint in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  iVar2 = FUN_000d0f50();
  if ((iVar2 != 0) && (*(short *)(iVar2 + 10) == 4)) {
    cVar1 = FUN_000cd85c();
    if (cVar1 != '\0') {
      *(undefined4 *)(extraout_ECX + 0x82) = DAT_002e8bee;
      *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) | 2;
      FUN_00064ae7();
      iVar2 = extraout_ECX_00;
      if ((*(byte *)(extraout_ECX_00 + 0xac) & 2) != 0) {
        FUN_00071edd();
        iVar2 = extraout_ECX_01;
      }
      if ((*(byte *)(iVar2 + 0xac) & 0x20) != 0) {
        FUN_00071edd();
      }
      if (*(short *)(in_EAX + 0x62) != 0) {
        FUN_000acce4();
      }
      return CONCAT44(in_EDX,1);
    }
    iVar3 = extraout_ECX;
    if ((int)*(char *)(iVar2 + 3) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
      iVar3 = extraout_ECX_02;
    }
    *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) & 0xfd;
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_065be8 (Ghidra: FUN_00065be8)
 * Prototype: undefined4 sub_065be8(void);
 * Address  : 0x65be8 (Size: 166 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65f8a
 * Callees  : 3 -> 0x49bfc, 0x65af0, 0x6edb9
 ******************************************************************************/
undefined4 FUN_00065be8(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar2 + 0xd2) == '\0') {
    uVar1 = DAT_002e8bee - *(int *)(iVar2 + 0x82);
    if (200 < uVar1) {
      if (uVar1 - 200 < 0x32) {
        FUN_00049bfc(0);
        if ((uint)(DAT_002e8bee - *(int *)(iVar2 + 0x9a)) < 0x21) {
          return 1;
        }
        FUN_0006edb9();
        *(int *)(iVar2 + 0x9a) = DAT_002e8bee;
        return 1;
      }
      *(int *)(iVar2 + 0x82) = DAT_002e8bee;
    }
    iVar2 = FUN_00065af0();
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

