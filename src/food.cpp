/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: food.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 16
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0aa558 (Ghidra: FUN_000aa558)
 * Prototype: void sub_0aa558(void);
 * Address  : 0xaa558 (Size: 2168 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xaa3a8
 ******************************************************************************/
void FUN_000aa558(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [4];
  undefined1 local_bc;
  undefined1 local_6c;
  undefined1 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_54;
  undefined1 local_4c;
  int local_38;
  int local_34;
  int local_28;
  byte local_20;
  byte local_1c;
  
  if (DAT_00387e02._2_1_ == '\0') {
    return;
  }
  local_1c = (byte)((int)(*(int *)(in_EAX + 7) + 0x100U & 0x7ff) >> 9);
  FUN_000aa3a8(local_c0,DAT_00387e07,0x500);
  uVar8 = (uint)local_1c;
  iVar11 = (5 - DAT_00387e17) * ((int)(uVar8 * 0x80) >> 8);
  iVar2 = uVar8 * 3;
  if (local_20 < 2) {
    iVar5 = local_cc;
    if (local_20 != 1) goto LAB_000aa666;
  }
  else {
    iVar5 = local_cc + uVar8 * -3;
    if (2 < local_20) {
      if (local_20 != 3) {
        iVar5 = local_cc;
      }
      goto LAB_000aa666;
    }
  }
  local_cc = iVar5;
  iVar5 = local_cc;
  local_c8 = local_c8 + uVar8 * -3;
  local_c4 = local_c4 + iVar2;
LAB_000aa666:
  local_cc = iVar5;
  iVar5 = local_c4 - local_1c / 2;
  iVar6 = 0;
  puVar10 = DAT_00387d20;
  do {
    uVar3 = DAT_00387e02;
    if (iVar5 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar5;
      if (0x2be < iVar5) {
        iVar4 = 0x2be;
      }
    }
    *puVar10 = (&DAT_00387220)[iVar4];
    uVar7 = (uint)DAT_0019cba6;
    *(undefined1 *)(puVar10 + 1) = 0xd;
    (&DAT_00387220)[iVar4] = puVar10;
    puVar10[2] = (int)((uint)local_1c * iVar6 + local_cc) / (int)uVar7;
    puVar10[3] = local_c8 / (int)uVar7;
    puVar10[4] = (int)((iVar6 + 1) * (uint)local_1c + local_cc) / (int)uVar7;
    puVar10[5] = local_c8 / (int)uVar7;
    local_6c = (undefined1)((uint)uVar3 >> 0x18);
    *(undefined1 *)(puVar10 + 6) = local_6c;
    uVar3 = DAT_00387e02;
    iVar4 = iVar5 + uVar8 * -3;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x2be < iVar4) {
      iVar4 = 0x2be;
    }
    puVar10[7] = (&DAT_00387220)[iVar4];
    uVar7 = (uint)DAT_0019cba6;
    *(undefined1 *)(puVar10 + 8) = 0xd;
    (&DAT_00387220)[iVar4] = puVar10 + 7;
    puVar10[9] = (int)((uint)local_1c * iVar6 + local_cc) / (int)uVar7;
    puVar10[10] = (local_c8 + iVar2) / (int)uVar7;
    puVar10[0xb] = (int)(local_cc + (iVar6 + 1) * (uint)local_1c) / (int)uVar7;
    puVar10[0xc] = (local_c8 + iVar2) / (int)uVar7;
    *(char *)(puVar10 + 0xd) = (char)((uint)uVar3 >> 0x18);
    uVar3 = DAT_00387e02;
    if (iVar5 < 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar5;
      if (0x2be < iVar5) {
        iVar4 = 0x2be;
      }
    }
    puVar10[0xe] = (&DAT_00387220)[iVar4];
    uVar7 = (uint)DAT_0019cba6;
    *(undefined1 *)(puVar10 + 0xf) = 0xd;
    (&DAT_00387220)[iVar4] = puVar10 + 0xe;
    puVar10[0x10] = (int)(local_cc + (uint)local_1c * iVar6) / (int)uVar7;
    puVar10[0x11] = (local_c8 + iVar11) / (int)uVar7;
    puVar10[0x12] = (int)(local_cc + (iVar6 + 1) * (uint)local_1c) / (int)uVar7;
    puVar10[0x13] = (local_c8 + iVar11) / (int)uVar7;
    local_68 = (undefined1)((uint)uVar3 >> 0x18);
    *(undefined1 *)(puVar10 + 0x14) = local_68;
    uVar3 = DAT_00387e02;
    iVar4 = local_c8 + iVar2 + iVar11;
    local_28 = iVar5 + uVar8 * -3;
    if (local_28 < 0) {
      local_28 = 0;
    }
    else if (0x2be < local_28) {
      local_28 = 0x2be;
    }
    uVar1 = (&DAT_00387220)[local_28];
    *(undefined1 *)(puVar10 + 0x16) = 0xd;
    puVar10[0x15] = uVar1;
    (&DAT_00387220)[local_28] = puVar10 + 0x15;
    uVar7 = (uint)DAT_0019cba6;
    puVar10[0x17] = (int)((uint)local_1c * iVar6 + local_cc) / (int)uVar7;
    puVar10[0x18] = iVar4 / (int)uVar7;
    puVar10[0x19] = (int)(local_cc + (iVar6 + 1) * (uint)local_1c) / (int)uVar7;
    DAT_00387d20 = puVar10 + 0x1c;
    puVar10[0x1a] = iVar4 / (int)uVar7;
    local_4c = (undefined1)((uint)uVar3 >> 0x18);
    iVar6 = iVar6 + 1;
    *(undefined1 *)(puVar10 + 0x1b) = local_4c;
    puVar10 = DAT_00387d20;
  } while (iVar6 < 3);
  iVar6 = 0;
  do {
    uVar3 = DAT_00387e02;
    iVar4 = iVar6 * (uint)local_1c;
    iVar9 = iVar5 - iVar4;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (0x2be < iVar9) {
      iVar9 = 0x2be;
    }
    uVar1 = (&DAT_00387220)[iVar9];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar1;
    (&DAT_00387220)[iVar9] = DAT_00387d20;
    uVar8 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_cc / (int)uVar8;
    DAT_00387d20[3] = (local_c8 + iVar4) / (int)uVar8;
    DAT_00387d20[4] = local_cc / (int)uVar8;
    DAT_00387d20[5] = (int)(local_c8 + (uint)local_1c * (iVar6 + 1)) / (int)uVar8;
    local_60 = (undefined1)((uint)uVar3 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 6) = local_60;
    uVar3 = DAT_00387e02;
    iVar4 = iVar6 * (uint)local_1c;
    local_38 = iVar5 - iVar4;
    if (local_38 < 0) {
      local_38 = 0;
    }
    else if (0x2be < local_38) {
      local_38 = 0x2be;
    }
    DAT_00387d20[7] = (&DAT_00387220)[local_38];
    uVar8 = (uint)DAT_0019cba6;
    *(undefined1 *)(DAT_00387d20 + 8) = 0xd;
    (&DAT_00387220)[local_38] = DAT_00387d20 + 7;
    DAT_00387d20[9] = (local_cc + iVar2) / (int)uVar8;
    DAT_00387d20[10] = (local_c8 + iVar4) / (int)uVar8;
    DAT_00387d20[0xb] = (local_cc + iVar2) / (int)uVar8;
    DAT_00387d20[0xc] = (int)(local_c8 + (uint)local_1c * (iVar6 + 1)) / (int)uVar8;
    local_bc = (undefined1)((uint)uVar3 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 0xd) = local_bc;
    uVar3 = DAT_00387e02;
    iVar4 = iVar6 * (uint)local_1c;
    iVar9 = iVar5 - iVar4;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (0x2be < iVar9) {
      iVar9 = 0x2be;
    }
    uVar1 = (&DAT_00387220)[iVar9];
    *(undefined1 *)(DAT_00387d20 + 0xf) = 0xd;
    DAT_00387d20[0xe] = uVar1;
    (&DAT_00387220)[iVar9] = DAT_00387d20 + 0xe;
    uVar8 = (uint)DAT_0019cba6;
    DAT_00387d20[0x10] = local_cc / (int)uVar8;
    DAT_00387d20[0x11] = (iVar4 + local_c8 + iVar11) / (int)uVar8;
    DAT_00387d20[0x12] = local_cc / (int)uVar8;
    DAT_00387d20[0x13] = (int)((uint)local_1c * (iVar6 + 1) + local_c8 + iVar11) / (int)uVar8;
    local_64 = (undefined1)((uint)uVar3 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 0x14) = local_64;
    uVar3 = DAT_00387e02;
    iVar9 = iVar6 * (uint)local_1c;
    local_34 = iVar5 - iVar9;
    iVar4 = iVar6 + 1;
    if (local_34 < 0) {
      local_34 = 0;
    }
    else if (0x2be < local_34) {
      local_34 = 0x2be;
    }
    uVar1 = (&DAT_00387220)[local_34];
    *(undefined1 *)(DAT_00387d20 + 0x16) = 0xd;
    DAT_00387d20[0x15] = uVar1;
    (&DAT_00387220)[local_34] = DAT_00387d20 + 0x15;
    uVar8 = (uint)DAT_0019cba6;
    DAT_00387d20[0x17] = (local_cc + iVar2) / (int)uVar8;
    DAT_00387d20[0x18] = (local_c8 + iVar9 + iVar11) / (int)uVar8;
    DAT_00387d20[0x19] = (local_cc + iVar2) / (int)uVar8;
    iVar6 = iVar6 + 1;
    DAT_00387d20[0x1a] = (int)((uint)local_1c * iVar4 + local_c8 + iVar11) / (int)uVar8;
    local_54 = (undefined1)((uint)uVar3 >> 0x18);
    puVar10 = DAT_00387d20 + 0x1b;
    DAT_00387d20 = DAT_00387d20 + 0x1c;
    *(undefined1 *)puVar10 = local_54;
  } while (iVar6 < 3);
  return;
}

/******************************************************************************
 * Function : dk_trying_remove_some_food_0aadd0 (Ghidra: FUN_000aadd0)
 * Prototype: void dk_trying_remove_some_food_0aadd0(void);
 * Address  : 0xaadd0 (Size: 251 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp:32 ("TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!")
 * Naming   : String 'TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!'
 * Callers  : 2 -> 0xaafd4, 0xab4bc
 * Callees  : 6 -> 0x10434, 0x49bfc, 0x64ae7, 0x6e538, 0x72af4, 0xddaf0
 * Strings  :
 *   - 0x16a382: "food.cpp"
 *   - 0x16a358: "TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!"
 ******************************************************************************/
void FUN_000aadd0(void)

{
  uint uVar1;
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  uVar1 = DAT_002e8bfa * 0x24a1 + 0x24df;
  DAT_002e8bfa = uVar1 >> 0xd | uVar1 * 0x80000;
  FUN_0006e538(3,0,2,0x100);
  FUN_00064ae7();
  FUN_00049bfc(0);
  *(undefined1 *)(in_EAX + 8) = 0x12;
  FUN_00010434();
  if (*(char *)(in_EDX + 0x1f) == '\x05') {
    *(undefined2 *)(in_EDX + 0x5e) = 0xffff;
  }
  else {
    if (*(short *)(unaff_EBX + 0x10) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("food.cpp", line 32, "TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!") */
    }
    else {
      *(short *)(unaff_EBX + 0x10) = *(short *)(unaff_EBX + 0x10) + -1;
    }
    FUN_00072af4();
  }
  *(int *)(&DAT_002e181c + (*(int *)(in_EAX + 3) >> 0x18) * 0x1508) =
       *(int *)(&DAT_002e181c + (*(int *)(in_EAX + 3) >> 0x18) * 0x1508) + 1;
  return;
}

/******************************************************************************
 * Function : sub_0aaecc (Ghidra: FUN_000aaecc)
 * Prototype: longlong sub_0aaecc(void);
 * Address  : 0xaaecc (Size: 100 bytes)
 * Module   : food.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6d114, 0xabe58, 0xc599c
 * Callees  : 1 -> 0xd0f50
 ******************************************************************************/
longlong FUN_000aaecc(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(in_EAX + 3) >> 0x18 != (uint)DAT_002eb543) &&
     (*(int *)(in_EAX + 0x11) >> 0x10 == -1)) {
    uVar3 = FUN_000d0f50();
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    iVar1 = (int)uVar3;
    if ((iVar1 != 0) &&
       ((*(short *)(iVar1 + 10) == 0xd && (*(char *)(iVar1 + 3) == *(char *)(iVar2 + 6))))) {
      if (*(short *)(iVar1 + 0x10) != 0) {
        *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + -1;
      }
      *(undefined2 *)(iVar2 + 0x13) = DAT_002eb9f8;
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_null_room_structure_passed_0aaf30 (Ghidra: FUN_000aaf30)
 * Prototype: undefined4 dk_null_room_structure_passed_0aaf30(void);
 * Address  : 0xaaf30 (Size: 113 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp:100 ("NULL ROOM STRUCTURE PASSED")
 * Naming   : String 'NULL ROOM STRUCTURE PASSED'
 * Callers  : 1 -> 0xab8dc
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16a3a6: "food.cpp"
 *   - 0x16a38b: "NULL ROOM STRUCTURE PASSED"
 ******************************************************************************/
undefined4 FUN_000aaf30(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(int *)(in_EAX + 3) >> 0x18 != (uint)DAT_002eb543) &&
     (*(int *)(in_EAX + 0x11) >> 0x10 != -1)) {
    if (in_EDX == 0) {
      FUN_000ddaf0(); /* LbErrorLog("food.cpp", line 100, "NULL ROOM STRUCTURE PASSED") */
    }
    else if (((*(short *)(in_EDX + 10) == 0xd) && (*(char *)(in_EDX + 3) == *(char *)(in_EAX + 6)))
            && (*(ushort *)(in_EDX + 0x10) < *(ushort *)(in_EDX + 0xe))) {
      *(ushort *)(in_EDX + 0x10) = *(ushort *)(in_EDX + 0x10) + 1;
      *(undefined2 *)(in_EAX + 0x13) = 0xffff;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0aafa4 (Ghidra: FUN_000aafa4)
 * Prototype: void sub_0aafa4(void);
 * Address  : 0xaafa4 (Size: 46 bytes)
 * Module   : food.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65d3e
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000aafa4(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xab) =
         *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xab) | 1;
    return;
  }
  *(undefined1 *)(in_EAX + 0x15) = 0xff;
  *(undefined1 *)(in_EAX + 0x16) = 0x7f;
  return;
}

/******************************************************************************
 * Function : dk_get_near_food_0aafd4 (Ghidra: FUN_000aafd4)
 * Prototype: void dk_get_near_food_0aafd4(void);
 * Address  : 0xaafd4 (Size: 686 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp:150 ("CANNOT GET NEAR TO FOOD"); food.cpp:168 ("Attempting to move to garden we cannot navigate to - this should not be possible")
 * Naming   : String 'CANNOT GET NEAR TO FOOD'
 * Callers  : 1 -> 0xab594
 * Callees  : 10 -> 0x10434, 0x63b6d, 0x85954, 0xaadd0, 0xb3c00, 0xca474, 0xcc4a0, 0xce0e4, 0xdc440, 0xddaf0
 * Strings  :
 *   - 0x16a3c7: "food.cpp"
 *   - 0x16a421: "food.cpp"
 *   - 0x16a3af: "CANNOT GET NEAR TO FOOD"
 *   - 0x16a3d0: "Attempting to move to garden we cannot navigate to - this should not be possible"
 ******************************************************************************/
void FUN_000aafd4(void)

{
  ushort uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int in_EDX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_28;
  uint local_24;
  
  uVar6 = 0;
  local_28 = 0;
  uVar1 = *(ushort *)(in_EDX + 0x37);
  for (; local_24 = (uint)uVar1, local_28 < (int)(uint)*(ushort *)(in_EDX + 0x3b);
      local_28 = local_28 + 1) {
    iVar5 = 0;
    do {
      uVar4 = (&DAT_001ae9fc)
              [(*(uint *)((int)&DAT_00279203 +
                         ((iVar5 / 3 + (local_24 / 0x55) * 3) * 0x100 +
                         (local_24 % 0x55) * 3 + iVar5 % 3) * 5 + 1) & 0x3fffff) >> 0xb];
      if (DAT_001ae9fc < uVar4) {
        do {
          if ((((*(char *)(uVar4 + 0x1f) == '\x01') && (*(char *)(uVar4 + 0x1a) == '\n')) ||
              ((*(char *)(uVar4 + 0x1f) == '\x05' &&
               (((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar4 + 100)] + 0xad) & 2) != 0 &&
                (0 < *(int *)(uVar4 + 0x5c) >> 0x10)))))) &&
             (iVar3 = FUN_000dc440(), iVar3 < extraout_ECX)) {
            uVar6 = uVar4;
          }
          uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)];
        } while (DAT_001ae9fc < uVar4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 9);
    uVar1 = *(ushort *)(&DAT_002d33c6 + local_24 * 6);
  }
  if ((uVar6 == 0) || (iVar5 = FUN_00085954(), iVar5 != 0)) {
    iVar5 = FUN_000ca474();
    if (iVar5 == 0) {
      FUN_00010434();
      iVar5 = FUN_000ce0e4();
      if (iVar5 != 0) {
        DAT_00000009 = 0x13;
        return;
      }
    }
    else {
      iVar5 = FUN_000cc4a0();
      if (iVar5 != 0) {
        DAT_00000009 = 0x13;
        return;
      }
      FUN_000ddaf0(); /* LbErrorLog("food.cpp", line 150, "CANNOT GET NEAR TO FOOD") */
    }
    FUN_00063b6d();
  }
  else {
    sVar2 = FUN_000b3c00();
    if (sVar2 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("food.cpp", line 168, "Attempting to move to garden we cannot navigate to - this should not be possible") */
      FUN_000aadd0();
      return;
    }
    if (*(char *)(uVar6 + 0x1f) == '\x05') {
      *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0xab) =
           *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0xab) | 1;
    }
    else {
      *(undefined1 *)(uVar6 + 0x15) = 0xff;
      *(undefined1 *)(uVar6 + 0x16) = 0x7f;
    }
    *(undefined1 *)(in_EAX + 8) = 0x8a;
    *(uint *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a) = (uint)*(ushort *)(uVar6 + 0x1b);
  }
  return;
}

/******************************************************************************
 * Function : sub_0ab284 (Ghidra: FUN_000ab284)
 * Prototype: ulonglong sub_0ab284(void);
 * Address  : 0xab284 (Size: 67 bytes)
 * Module   : food.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52362
 * Callees  : 1 -> 0x64c4d
 ******************************************************************************/
ulonglong FUN_000ab284(void)

{
  byte bVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  if (((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x21) == 0) &&
      (bVar1 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad), (bVar1 & 8) == 0)) &&
     ((bVar1 & 2) == 0)) {
    in_EAX = FUN_00064c4d();
    if ((char)in_EAX != '\0') {
      return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),1));
    }
  }
  return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : dk_attempting_move_garden_we_0ab2c8 (Ghidra: FUN_000ab2c8)
 * Prototype: longlong dk_attempting_move_garden_we_0ab2c8(void);
 * Address  : 0xab2c8 (Size: 498 bytes)
 * Module   : food.cpp [direct_file_string_xref]
 * OrigLine : food.cpp:249 ("Attempting to move to garden we cannot navigate to - this should not be possible")
 * Naming   : String 'Attempting to move to garden we cannot navigate to - this sh'
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x10434, 0x274ad, 0x51374, 0x63b6d, 0xc9988, 0xca474, 0xcc4a0, 0xddaf0
 * Strings  :
 *   - 0x16a47b: "food.cpp"
 *   - 0x16a42a: "Attempting to move to garden we cannot navigate to - this should not be possible"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

longlong FUN_000ab2c8(void)

{
  int in_EAX;
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 auStack_20 [3];
  
  puVar5 = (undefined4 *)&stack0xffffffec;
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x41) != '\0') {
    uVar1 = *(int *)(in_EAX + 3) >> 0x18;
    if (*(short *)(&DAT_002e05ae + uVar1 * 0x1508) == 0) {
      if (uVar1 == (byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
        auStack_20[2] = 0xab471;
        FUN_00051374();
      }
      puVar5 = auStack_20 + 2;
      auStack_20[2] = 0;
      auStack_20[1] = 0xab486;
      FUN_000274ad();
      auStack_20[1] = 0xab4ab;
      FUN_00010434();
    }
    else {
      auStack_20[2] = 1;
      auStack_20[1] = 0xab312;
      puVar2 = (undefined1 *)FUN_000ca474();
      puVar5 = auStack_20 + 2;
      if (puVar2 == (undefined1 *)0x0) {
        auStack_20[1] = 0xab330;
        puVar2 = (undefined1 *)FUN_000c9988();
        if (&DAT_002ddd1b < puVar2) {
          if (*(int *)(in_EAX + 3) >> 0x18 ==
              (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
            auStack_20[1] = 0xab3a3;
            FUN_00051374();
          }
          puVar5 = auStack_20 + 1;
          auStack_20[1] = 0;
          FUN_000274ad();
        }
        else {
          puVar5 = auStack_20 + 2;
          if (*(int *)(in_EAX + 3) >> 0x18 ==
              (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
            auStack_20[1] = 0xab36d;
            FUN_00051374();
            puVar5 = auStack_20 + 2;
          }
        }
      }
      if (puVar2 == (undefined1 *)0x0) {
        puVar5[0xffffffff] = 0xab42f;
        FUN_00010434();
        puVar5[0xffffffff] = 0xab436;
        FUN_00063b6d();
        return (ulonglong)(uint)puVar5[2] << 0x20;
      }
      puVar5[0xffffffff] = 0xab3c7;
      iVar3 = FUN_000cc4a0();
      if (iVar3 != 0) {
        *(undefined1 *)(in_EAX + 8) = 0x13;
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
             *(undefined2 *)(puVar2 + 1);
        uVar4 = 1;
        goto LAB_000ab4b4;
      }
      puVar5[0xffffffff] = 0xab405;
      FUN_000ddaf0(); /* LbErrorLog("food.cpp", line 249, "Attempting to move to garden we cannot navigate to - this should not be possible") */
    }
  }
  puVar5[0xffffffff] = 0xab4b2;
  FUN_00063b6d();
  uVar4 = 0;
LAB_000ab4b4:
  return CONCAT44(*(undefined4 *)((int)puVar5 + 8),uVar4);
}

/******************************************************************************
 * Function : sub_0ab4bc (Ghidra: FUN_000ab4bc)
 * Prototype: longlong sub_0ab4bc(void);
 * Address  : 0xab4bc (Size: 215 bytes)
 * Module   : food.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x63b6d, 0x85954, 0xaadd0, 0xd0f50
 ******************************************************************************/
longlong FUN_000ab4bc(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  uint in_EDX;
  byte *pbVar2;
  undefined8 uVar3;
  
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a)]) {
    iVar1 = FUN_000d0f50();
    if ((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xd)) {
      uVar3 = FUN_00085954();
      pbVar2 = (byte *)((ulonglong)uVar3 >> 0x20);
      if (((int)uVar3 == 0) &&
         ((((pbVar2[0x1f] == 1 && (pbVar2[0x1a] == 10)) ||
           ((pbVar2[0x1f] == 5 &&
            ((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0xad) & 2) != 0)))) &&
          ((((*pbVar2 & 0x10) == 0 && ((pbVar2[1] & 2) == 0)) && ((*pbVar2 & 1) != 0)))))) {
        FUN_000aadd0();
        *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x9a) = 0;
        return CONCAT44(in_EDX,1);
      }
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0ab594 (Ghidra: FUN_000ab594)
 * Prototype: longlong sub_0ab594(void);
 * Address  : 0xab594 (Size: 85 bytes)
 * Module   : food.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x63b6d, 0xaafd4, 0xd0f50
 ******************************************************************************/
longlong FUN_000ab594(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  iVar1 = FUN_000d0f50();
  if (((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xd)) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    FUN_000aafd4();
    return CONCAT44(in_EDX,1);
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0ab60c (Ghidra: FUN_000ab60c)
 * Prototype: undefined8 sub_0ab60c(void);
 * Address  : 0xab60c (Size: 612 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x43f07, 0x6e538, 0x72af4
 * Strings  :
 *   - 0x1646c6: "%s\DOOR%02d.DAT"
 ******************************************************************************/
undefined8 FUN_000ab60c(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  undefined4 in_EDX;
  undefined4 uVar5;
  undefined4 uStack_1c;
  
  uVar5 = 0;
  if (*(int *)(in_EAX + 0x11) >> 0x10 < 1) {
    uVar1 = *(undefined4 *)(in_EAX + 0xd);
    uStack_1c = CONCAT22(uStack_1c._2_2_,*(undefined2 *)(in_EAX + 0x11));
    switch(*(undefined2 *)(in_EAX + 0x44)) {
    case 0x37d:
    case 0x381:
      uVar5 = 0xffffffff;
      FUN_00072af4(uVar1);
      iVar3 = FUN_00043f07();
      if (iVar3 != 0) {
        *(short *)(iVar3 + 0x13) =
             (short)((int)((uint)*(byte *)(iVar3 + 0x49) << 8) / (*(int *)(iVar3 + 0x3c) >> 0x10)) +
             -1;
        return CONCAT44(in_EDX,0xffffffff);
      }
      break;
    case 0x37e:
    case 0x382:
      uVar5 = 0xffffffff;
      FUN_00072af4(uVar1);
      iVar3 = FUN_00043f07();
      if (iVar3 != 0) {
        *(short *)(iVar3 + 0x13) =
             ((short)((int)((uint)*(byte *)(iVar3 + 0x49) << 8) / (*(int *)(iVar3 + 0x3c) >> 0x10))
             + -1) * 3;
        return CONCAT44(in_EDX,0xffffffff);
      }
      break;
    case 0x37f:
    case 899:
      uVar5 = 0xffffffff;
      FUN_00072af4(uVar1);
      iVar3 = FUN_00043f07();
      if (iVar3 != 0) {
        *(short *)(iVar3 + 0x13) =
             (short)((int)((uint)*(byte *)(iVar3 + 0x49) << 8) / (*(int *)(iVar3 + 0x3c) >> 0x10)) +
             -1;
        return CONCAT44(in_EDX,0xffffffff);
      }
      break;
    case 0x380:
    case 900:
      uVar5 = 0xffffffff;
      FUN_00072af4(uVar1);
      iVar3 = FUN_00043f07();
      if (iVar3 != 0) {
        uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
        *(short *)(iVar3 + 0x52) = (short)((ulonglong)DAT_002e8bf6 % 0x7ff);
        uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
        uVar2 = (ulonglong)DAT_002e8bf6;
        *(undefined1 *)(iVar3 + 0x16) = 0;
        *(char *)(iVar3 + 0x15) = (char)(uVar2 % 0x6ff);
        uVar4 = DAT_002e8bfa * 0x24a1 + 0x24df;
        DAT_002e8bfa = uVar4 >> 0xd | uVar4 * 0x80000;
        FUN_0006e538(3,0,1,0x100);
        uVar4 = *(int *)(iVar3 + 3) >> 0x18;
        if (uVar4 != DAT_002eb543) {
          *(int *)(&DAT_002e1818 + uVar4 * 0x1508) = *(int *)(&DAT_002e1818 + uVar4 * 0x1508) + 1;
        }
        *(undefined2 *)(iVar3 + 0x13) = 0xffff;
        return CONCAT44(uStack_1c,0xffffffff);
      }
    }
  }
  else {
    uVar5 = 1;
    *(short *)(in_EAX + 0x13) = *(short *)(in_EAX + 0x13) + -1;
  }
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_0ab870 (Ghidra: FUN_000ab870)
 * Prototype: void sub_0ab870(void);
 * Address  : 0xab870 (Size: 106 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x10c5f, 0x10c85
 ******************************************************************************/
void FUN_000ab870(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ushort *extraout_ECX;
  short unaff_BX;
  
  iVar2 = FUN_00010c5f();
  sVar1 = FUN_00010c85();
  iVar3 = (int)unaff_BX;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  *extraout_ECX = (short)iVar3 * sVar1 + *extraout_ECX & 0x7ff;
  FUN_00010c5f();
  return;
}

/******************************************************************************
 * Function : sub_0ab8dc (Ghidra: FUN_000ab8dc)
 * Prototype: undefined8 sub_0ab8dc(void);
 * Address  : 0xab8dc (Size: 1353 bytes)
 * Module   : food.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 15 -> 0x10c1a, 0x10c5f, 0x10c85, 0x10cd7, 0x24998, 0x6e538, 0x72af4, 0x7d100, 0x7dbc0, 0x85954 ...
 ******************************************************************************/
undefined8 FUN_000ab8dc(void)

{
  ulonglong uVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  int in_EAX;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined4 *puVar11;
  ushort *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  short local_3c;
  short sStack_3a;
  undefined2 uStack_38;
  ushort *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  char local_1c;
  
  local_1c = '\0';
  local_3c = (short)*(undefined4 *)(in_EAX + 0xd);
  sStack_3a = (short)((uint)*(undefined4 *)(in_EAX + 0xd) >> 0x10);
  uStack_38 = *(undefined2 *)(in_EAX + 0x11);
  iVar13 = 0;
  if (*(char *)(in_EAX + 0x17) != '\0') {
    uStack_48 = 0xab90b;
    FUN_000abe58();
    uVar5 = 0xffffffff;
    goto LAB_000abe1c;
  }
  uStack_48 = 0xab91a;
  local_24 = in_EAX;
  local_30 = FUN_00085954();
  if ((local_30 != 0) && (*(char *)(local_24 + 0x16) != '\0')) {
    *(char *)(local_24 + 0x16) = *(char *)(local_24 + 0x16) + -1;
    return CONCAT44(in_EDX,1);
  }
  uStack_48 = 0xab94e;
  uVar14 = FUN_000d0f50();
  puVar6 = (undefined1 *)uVar14;
  if (((int)((ulonglong)uVar14 >> 0x20) == 0) && (-1 < *(int *)(local_24 + 0x11) >> 0x10)) {
    if (&DAT_002ddd1b < puVar6) {
      uStack_48 = 0xab97a;
      iVar7 = FUN_000aaf30();
      if (iVar7 != 0) goto LAB_000ab9ee;
    }
    *(short *)(local_24 + 0x13) = *(short *)(local_24 + 0x13) + -1;
    if (*(int *)(local_24 + 0x11) >> 0x10 < 1) {
      iVar13 = (*(int *)(local_24 + 3) >> 0x18) * 0x1508;
      *(int *)(&DAT_002e1820 + iVar13) = *(int *)(&DAT_002e1820 + iVar13) + 1;
      uStack_48 = 0xab9c2;
      FUN_00024998();
      uStack_48 = 0xab9d6;
      FUN_00024998();
      uStack_48 = 0xab9e0;
      FUN_00072af4();
      return CONCAT44(in_EDX,0xffffffff);
    }
  }
LAB_000ab9ee:
  if (((&DAT_002ddd1b < puVar6) && (*(short *)(puVar6 + 10) == 0xd)) &&
     (*(int *)(local_24 + 0x11) >> 0x10 < 0)) {
    if (*(int *)(puVar6 + 0x17) == DAT_002e8bee) {
      uVar8 = (&DAT_001ae9fc)
              [CONCAT22((ushort)((uint)*(int *)(puVar6 + 0x17) >> 0x10) ^
                        (ushort)((uint)DAT_002e8bee >> 0x10),*(undefined2 *)(puVar6 + 0x1b))];
    }
    else {
      *(int *)(puVar6 + 0x17) = DAT_002e8bee;
      uStack_48 = 0xaba47;
      uVar8 = FUN_0007d100();
      if (DAT_001ae9fc < uVar8) {
        *(undefined2 *)(puVar6 + 0x1b) = *(undefined2 *)(uVar8 + 0x1b);
      }
      else {
        uVar8 = 0;
      }
    }
    if (DAT_001ae9fc < uVar8) {
      uStack_48 = 0xaba84;
      iVar7 = FUN_000dc440();
      if (0x2ff < iVar7) goto LAB_000aba8f;
      local_1c = '\x01';
    }
    else {
LAB_000aba8f:
      local_1c = '\0';
    }
    if (local_1c != '\0') {
      uStack_48 = 0xabaa3;
      uVar3 = FUN_00010c1a();
      *(undefined2 *)(local_24 + 0x18) = uVar3;
      if (*(char *)(local_24 + 0x66) == '\0') {
        uVar9 = DAT_002e8bfa * 0x24a1 + 0x24df;
        uVar8 = uVar9 >> 0xd;
        DAT_002e8bfa = uVar8 | uVar9 * 0x80000;
        if ((uVar8 & 0xf) == 0) {
          uVar8 = DAT_002e8bfa * 0x24a1 + 0x24df;
          DAT_002e8bfa = uVar8 >> 0xd | uVar8 * 0x80000;
          iVar13 = DAT_002e8bfa % 3 + 0x6d;
        }
      }
    }
  }
  iVar7 = *(int *)(local_24 + 0x12) >> 0x18;
  if (iVar7 < 1) {
    puVar11 = (undefined4 *)&local_44;
    if (iVar7 == 0) {
      uStack_48 = 2;
      uStack_4c = 0;
      puVar11 = &uStack_50;
      uStack_50 = 0xffffffff;
      *(undefined1 *)(local_24 + 0x15) = 0xff;
      FUN_0008ccec();
      if (local_30 == 0) {
        uVar8 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        uVar9 = uVar8 >> 0xd;
        DAT_002e8bf6._0_1_ = (byte)uVar9;
        bVar2 = (byte)DAT_002e8bf6 & 3;
        DAT_002e8bf6 = uVar9 | uVar8 * 0x80000;
        *(byte *)(local_24 + 0x16) = bVar2 + 1;
      }
      else {
        *(undefined1 *)(local_24 + 0x16) = 6;
        puVar11 = &uStack_50;
      }
    }
    if (((local_1c == '\0') || (4 < *(int *)(local_24 + 0x13) >> 0x18)) &&
       (iVar7 = *(int *)(local_24 + 0x13) >> 0x18, iVar7 != 0)) {
      if (((*(char *)(local_24 + 0x16) != '\0') &&
          (iVar10 = *(int *)(local_24 + 0x3c) >> 0x10,
          (int)((uint)*(byte *)(local_24 + 0x49) * iVar10) <= iVar10 + *(int *)(local_24 + 0x40)))
         && (iVar7 < 5)) {
        *(char *)(local_24 + 0x16) = *(char *)(local_24 + 0x16) + -1;
      }
    }
    else {
      *(undefined4 *)((int)puVar11 + -4) = 2;
      *(undefined4 *)((int)puVar11 + -8) = 0;
      *(undefined4 *)((int)puVar11 + -0xc) = 0xffffffff;
      *(undefined4 *)((int)puVar11 + -0x10) = 0xabd55;
      FUN_0008ccec();
      uVar8 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar8 >> 0xd | uVar8 * 0x80000;
      *(char *)(local_24 + 0x15) = (char)((ulonglong)DAT_002e8bf6 % 0x39);
      uVar8 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar8 >> 0xd | uVar8 * 0x80000;
      uVar1 = (ulonglong)DAT_002e8bf6;
      *(undefined1 *)(local_24 + 0x16) = 0;
      *(short *)(local_24 + 0x18) = (short)(uVar1 % 0x7ff);
      puVar11 = (undefined4 *)((int)puVar11 + -0xc);
    }
  }
  else {
    iVar7 = -(((int)(&PTR_LAB_00192fe0)[*(ushort *)(local_24 + 0x18)] << 5) >> 8);
    local_2c = (int)((&DAT_001927e0)[*(ushort *)(local_24 + 0x18)] << 5) >> 0x10;
    local_28 = iVar7 >> 8;
    local_3c = local_3c +
               (short)((uint)((&DAT_001927e0)[*(ushort *)(local_24 + 0x18)] << 5) >> 0x10);
    sStack_3a = sStack_3a + (short)((uint)iVar7 >> 8);
    uStack_48 = 0xabb67;
    iVar10 = FUN_0007dbc0();
    iVar7 = local_24;
    if (iVar10 != 0) {
      uVar8 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar8 >> 0xd | uVar8 * 0x80000;
      *(short *)(local_24 + 0x18) = (short)((ulonglong)DAT_002e8bf6 % 0x7ff);
    }
    local_20 = CONCAT22((short)((uint)local_24 >> 0x10),*(undefined2 *)(local_24 + 0x18));
    uStack_48 = 0xabbc1;
    FUN_00010c5f();
    puVar12 = (ushort *)(iVar7 + 0x52);
    uStack_48 = 0xabbd3;
    sVar4 = FUN_00010c85();
    iVar7 = 0x3e;
    if (extraout_ECX < 0x3e) {
      iVar7 = extraout_ECX;
    }
    *puVar12 = (short)iVar7 * sVar4 + *puVar12 & 0x7ff;
    uStack_48 = 0xabc08;
    local_34 = puVar12;
    iVar7 = FUN_00010c5f();
    if (iVar7 < 0x11c) {
      *(char *)(local_24 + 0x15) = *(char *)(local_24 + 0x15) + -1;
      local_44 = (undefined2)local_2c;
      local_42 = (undefined2)local_28;
      local_40 = 0;
      uStack_48 = 0xabc34;
      FUN_00010cd7();
    }
    puVar11 = (undefined4 *)&local_44;
    if ((*(char *)(local_24 + 0x66) == '\0') && (puVar11 = (undefined4 *)&local_44, iVar13 == 0)) {
      uVar8 = DAT_002e8bfa * 0x24a1 + 0x24df;
      DAT_002e8bfa = uVar8 >> 0xd | uVar8 * 0x80000;
      uVar1 = (ulonglong)DAT_002e8bfa;
      puVar11 = (undefined4 *)&local_44;
      if ((int)(uVar1 % 0x50) == 0) {
        uVar8 = DAT_002e8bfa * 0x24a1 + 0x24df;
        DAT_002e8bfa = uVar8 >> 0xd | uVar8 * 0x80000;
        iVar13 = (int)((uVar1 % 0x50 << 0x20 | (ulonglong)DAT_002e8bfa) % 9) + 100;
        puVar11 = (undefined4 *)&local_44;
      }
    }
  }
  if (iVar13 != 0) {
    *(undefined4 *)((int)puVar11 + -4) = 0x100;
    *(undefined4 *)((int)puVar11 + -8) = 1;
    *(undefined4 *)((int)puVar11 + -0xc) = 0;
    *(undefined4 *)((int)puVar11 + -0x10) = 3;
    *(undefined4 *)((int)puVar11 + -0x14) = 0xabe17;
    FUN_0006e538();
  }
  uVar5 = 1;
LAB_000abe1c:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_0abe28 (Ghidra: FUN_000abe28)
 * Prototype: undefined8 sub_0abe28(void);
 * Address  : 0xabe28 (Size: 48 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x64ae7
 ******************************************************************************/
undefined8 FUN_000abe28(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) != '$') {
    FUN_00064ae7();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0abe58 (Ghidra: FUN_000abe58)
 * Prototype: void sub_0abe58(void);
 * Address  : 0xabe58 (Size: 223 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0xab8dc, 0xc5980, 0xd08a8, 0xe25c4
 * Callees  : 4 -> 0x24998, 0x6e538, 0x72af4, 0xaaecc
 ******************************************************************************/
void FUN_000abe58(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined2 auStack_828 [1018];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  bVar4 = 0;
  puVar3 = (undefined4 *)auStack_24;
  local_1c = *(int *)(in_EAX + 3) >> 0x18;
  if (DAT_002eb543 != local_1c) {
    *(int *)(&DAT_002e1820 + local_1c * 0x1508) = *(int *)(&DAT_002e1820 + local_1c * 0x1508) + 1;
  }
  uStack_28 = 0xabe9b;
  iVar1 = FUN_00024998();
  if (iVar1 != 0) {
    uVar2 = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = uVar2 >> 0xd | uVar2 * 0x80000;
    uStack_28 = 0x100;
    local_2c = 2;
    uStack_30 = 0;
    puVar3 = &uStack_34;
    uStack_34 = 3;
    FUN_0006e538();
  }
  *puVar3 = *(undefined4 *)(in_EAX + 0xd);
  *(undefined2 *)(puVar3 + (uint)bVar4 * -2 + 1) = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar4 * -8)
  ;
  *(char *)((int)puVar3 + 5) = *(char *)((int)puVar3 + 5) + '\x01';
  puVar3[-1] = 0xabf0f;
  FUN_00024998();
  puVar3[-1] = 0xabf1d;
  FUN_00024998();
  puVar3[-1] = 0xabf24;
  FUN_000aaecc();
  puVar3[-1] = 0xabf2d;
  FUN_00072af4();
  return;
}

/******************************************************************************
 * Function : sub_0abf38 (Ghidra: FUN_000abf38)
 * Prototype: void sub_0abf38(void);
 * Address  : 0xabf38 (Size: 346 bytes)
 * Module   : food.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x731f3, 0x73d8d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000abf38(void)

{
  int in_EAX;
  byte *pbVar1;
  
  pbVar1 = (&DAT_001ae9fc)[DAT_002e6ec6];
  if (pbVar1 != DAT_001ae9fc) {
    do {
      if (((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == 10)) &&
          (*(int *)(pbVar1 + 3) >> 0x18 == in_EAX)) &&
         (((*pbVar1 & 0x10) == 0 && ((pbVar1[1] & 2) == 0)))) {
        pbVar1[0x17] = 1;
      }
      pbVar1 = (&DAT_001ae9fc)[*(ushort *)(pbVar1 + 0x67)];
    } while (pbVar1 != DAT_001ae9fc);
  }
  pbVar1 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[in_EAX * 0xa84]];
  if (pbVar1 != DAT_001ae9fc) {
    do {
      if ((((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0xad) & 2) != 0) &&
          ((*pbVar1 & 0x10) == 0)) && ((pbVar1[1] & 2) == 0)) {
        pbVar1[0x5e] = 0;
        pbVar1[0x5f] = 0;
      }
      pbVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x1f)];
    } while (pbVar1 != DAT_001ae9fc);
  }
  pbVar1 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[in_EAX * 0xa84]];
  if (pbVar1 != DAT_001ae9fc) {
    do {
      if ((((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0xad) & 2) != 0) &&
          ((*pbVar1 & 0x10) == 0)) && ((pbVar1[1] & 2) == 0)) {
        pbVar1[0x5e] = 0;
        pbVar1[0x5f] = 0;
      }
      pbVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x1f)];
    } while (pbVar1 != DAT_001ae9fc);
    return;
  }
  return;
}

