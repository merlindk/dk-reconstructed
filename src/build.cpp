/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: build.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 10
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_01458c (Ghidra: FUN_0001458c)
 * Prototype: int sub_01458c(void);
 * Address  : 0x1458c (Size: 70 bytes)
 * Module   : build.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 2 -> 0x14614, 0x6e9ab
 ******************************************************************************/
int FUN_0001458c(void)

{
  int iVar1;
  char extraout_CL;
  int extraout_EDX;
  
  iVar1 = FUN_00014614();
  if ((iVar1 != 0) && ((int)extraout_CL == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]))
  {
    FUN_0006e9ab();
    iVar1 = extraout_EDX;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0145d2 (Ghidra: FUN_000145d2)
 * Prototype: void sub_0145d2(void);
 * Address  : 0x145d2 (Size: 66 bytes)
 * Module   : build.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 2 -> 0x1495c, 0x6e9ab
 ******************************************************************************/
void FUN_000145d2(void)

{
  int iVar1;
  char extraout_CL;
  
  iVar1 = FUN_0001495c();
  if ((iVar1 != 0) && ((int)extraout_CL == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]))
  {
    FUN_0006e9ab();
  }
  return;
}

/******************************************************************************
 * Function : dk_attempt_tag_area_outside_014614 (Ghidra: FUN_00014614)
 * Prototype: undefined1 dk_attempt_tag_area_outside_014614(void);
 * Address  : 0x14614 (Size: 840 bytes)
 * Module   : build.cpp [direct_file_string_xref]
 * OrigLine : build.cpp:142 ("Attempt to tag area outside of map")
 * Naming   : String 'Attempt to tag area outside of map'
 * Callers  : 1 -> 0x1458c
 * Callees  : 6 -> 0x14a9f, 0x14ad2, 0x14ae8, 0x401aa, 0x63122, 0xddaf0
 * Strings  :
 *   - 0x160367: "build.cpp"
 *   - 0x160344: "Attempt to tag area outside of map"
 ******************************************************************************/
undefined1 FUN_00014614(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  byte extraout_CH;
  byte bVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte bVar9;
  undefined4 uVar8;
  int in_EDX;
  int local_4c;
  int local_30;
  int local_2c;
  undefined1 local_18;
  
  iVar5 = in_EAX / 3;
  iVar3 = iVar5 * 3;
  local_4c = (in_EDX / 3) * 3;
  iVar1 = iVar3 + 1;
  iVar7 = local_4c + 1;
  local_18 = 0;
  if ((((iVar3 < 0) || (0xfe < iVar3)) || (local_4c < 0)) || (0xfe < local_4c)) {
    FUN_000ddaf0(); /* LbErrorLog("build.cpp", line 142, "Attempt to tag area outside of map") */
  }
  else {
    iVar4 = (iVar1 + iVar7 * 0x100) * 5;
    bVar9 = *(byte *)((int)&DAT_00279203 + iVar4);
    bVar10 = (&DAT_002d33ca)[((&DAT_0019033b)[iVar1] + (&DAT_0019033b)[iVar7] * 0x55) * 6];
    bVar2 = (&DAT_002d33c5)[(iVar1 / 3 + (iVar7 / 3) * 0x55) * 6];
    iVar6 = FUN_000401aa();
    if ((((iVar6 == -1) &&
         (((&DAT_001921d4)[(uint)bVar2 * 0x16] != '\0' ||
          ((*(uint *)((int)&DAT_00279203 + iVar4 + 1) >> 0x1c & 1 << (extraout_CH & 0x1f)) == 0))))
        && (((bVar9 & 2) == 0 || ((uint)(bVar10 & 7) != (int)(char)extraout_CH)))) &&
       ((((bVar9 & 0x20) == 0 || ((uint)(bVar10 & 7) == (int)(char)extraout_CH)) ||
        ((*(uint *)((int)&DAT_00279203 + (iVar7 * 0x100 + iVar1) * 5 + 1) >> 0x1c &
         1 << (extraout_CH & 0x1f)) == 0)))) {
      if ((bVar9 & 1) == 0) {
        if (((bVar9 & 8) == 0) &&
           (((bVar9 & 0x20) == 0 ||
            ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[iVar1] + (&DAT_0019033b)[iVar7] * 0x55) * 6] &
                   7) != (int)(char)extraout_CH)))) {
          FUN_00014ae8();
          uVar8 = extraout_ECX_01;
        }
        else {
          FUN_00014a9f();
          uVar8 = extraout_ECX_00;
        }
      }
      else {
        FUN_00014ad2();
        uVar8 = extraout_ECX;
      }
      local_18 = 1;
      if ((int)(char)((uint)uVar8 >> 8) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
      {
        iVar1 = local_4c + 3;
        local_30 = (in_EDX / 3) * 0xc;
        for (; local_4c < iVar1; local_4c = local_4c + 1) {
          iVar7 = local_4c * 0x500 + iVar5 * 0xf;
          for (local_2c = iVar5 * 0xc; local_2c < (iVar3 + 3) * 4; local_2c = local_2c + 4) {
            bVar9 = *(byte *)((int)&DAT_00279203 + iVar7);
            if ((bVar9 & 0x84) == 0) {
              bVar10 = (byte)((uint)uVar8 >> 8);
              if ((bVar9 & 2) != 0) {
                if ((uint)((&DAT_002d33ca)
                           [(*(int *)((int)&DAT_0019033b + local_2c) +
                            *(int *)((int)&DAT_0019033b + local_30) * 0x55) * 6] & 7) ==
                    (int)(char)bVar10) goto LAB_00014886;
              }
              if (((bVar9 & 0x20) != 0) &&
                 ((uint)((&DAT_002d33ca)
                         [(*(int *)((int)&DAT_0019033b + local_2c) +
                          *(int *)((int)&DAT_0019033b + local_30) * 0x55) * 6] & 7) !=
                  (int)(char)bVar10)) {
                uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),bVar10);
                if ((*(uint *)((int)&DAT_00279203 + iVar7 + 1) >> 0x1c & 1 << (bVar10 & 0x1f)) != 0)
                goto LAB_00014886;
              }
              if ((bVar9 & 1) == 0) {
                if ((bVar9 & 0x28) == 0) {
                  bVar9 = (byte)((uint)uVar8 >> 8);
                  uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),bVar9);
                  if ((*(uint *)((int)&DAT_00279203 + iVar7 + 1) >> 0x1c & 1 << (bVar9 & 0x1f)) != 0
                     ) goto LAB_00014886;
                }
                *(byte *)((int)&DAT_00279203 + iVar7) = *(byte *)((int)&DAT_00279203 + iVar7) | 4;
              }
              else {
                *(byte *)((int)&DAT_00279203 + iVar7) = *(byte *)((int)&DAT_00279203 + iVar7) | 0x80
                ;
              }
            }
LAB_00014886:
            iVar7 = iVar7 + 5;
          }
          local_30 = local_30 + 4;
        }
      }
      FUN_00063122();
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : dk_attempt_tag_area_outside_01495c (Ghidra: FUN_0001495c)
 * Prototype: int dk_attempt_tag_area_outside_01495c(void);
 * Address  : 0x1495c (Size: 268 bytes)
 * Module   : build.cpp [direct_file_string_xref]
 * OrigLine : build.cpp:194 ("Attempt to tag area outside of map")
 * Naming   : String 'Attempt to tag area outside of map'
 * Callers  : 4 -> 0x145d2, 0x14afe, 0x14d45, 0x23de2
 * Callees  : 4 -> 0x400da, 0x401aa, 0x63122, 0xddaf0
 * Strings  :
 *   - 0x160394: "build.cpp"
 *   - 0x160371: "Attempt to tag area outside of map"
 ******************************************************************************/
int FUN_0001495c(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  char extraout_CL;
  char extraout_CL_00;
  char cVar4;
  int in_EDX;
  int iVar5;
  int local_14;
  
  iVar1 = (in_EAX / 3) * 3;
  local_14 = 0;
  iVar5 = (in_EDX / 3) * 3;
  if ((((iVar1 < 0) || (0xfe < iVar1)) || (iVar5 < 0)) || (0xfe < iVar5)) {
    FUN_000ddaf0(); /* LbErrorLog("build.cpp", line 194, "Attempt to tag area outside of map") */
  }
  else {
    iVar2 = FUN_000401aa();
    cVar4 = extraout_CL;
    if (iVar2 != -1) {
      FUN_000400da();
      cVar4 = extraout_CL_00;
    }
    if ((int)cVar4 == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      iVar2 = iVar5 + 3;
      for (; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        for (iVar3 = (in_EAX / 3) * 0xf + iVar5 * 0x500; iVar3 < iVar5 * 0x500 + (iVar1 + 3) * 5;
            iVar3 = iVar3 + 5) {
          if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x84) != 0) {
            local_14 = local_14 + 1;
          }
          *(byte *)((int)&DAT_00279203 + iVar3) = *(byte *)((int)&DAT_00279203 + iVar3) & 0x7b;
        }
      }
    }
    FUN_00063122();
  }
  return local_14;
}

/******************************************************************************
 * Function : sub_014a68 (Ghidra: FUN_00014a68)
 * Prototype: void sub_014a68(void);
 * Address  : 0x14a68 (Size: 55 bytes)
 * Module   : build.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd72f8, 0xd7688
 * Callees  : 3 -> 0x7c590, 0xaca68, 0xd167c
 ******************************************************************************/
void FUN_00014a68(void)

{
  FUN_000d167c();
  FUN_0007c590();
  FUN_000aca68();
  return;
}

/******************************************************************************
 * Function : sub_014a9f (Ghidra: FUN_00014a9f)
 * Prototype: void sub_014a9f(void);
 * Address  : 0x14a9f (Size: 27 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14614
 * Callees  : 1 -> 0x4002e
 ******************************************************************************/
void FUN_00014a9f(void)

{
  FUN_0004002e();
  return;
}

/******************************************************************************
 * Function : sub_014ad2 (Ghidra: FUN_00014ad2)
 * Prototype: void sub_014ad2(void);
 * Address  : 0x14ad2 (Size: 22 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14614
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00014ad2(void)

{
  FUN_0004002e();
  return;
}

/******************************************************************************
 * Function : sub_014ae8 (Ghidra: FUN_00014ae8)
 * Prototype: void sub_014ae8(void);
 * Address  : 0x14ae8 (Size: 22 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14614
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00014ae8(void)

{
  FUN_0004002e();
  return;
}

/******************************************************************************
 * Function : sub_014afe (Ghidra: FUN_00014afe)
 * Prototype: void sub_014afe(void);
 * Address  : 0x14afe (Size: 412 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4a0d6, 0x4a5d9, 0x4f63e, 0x6c681
 * Callees  : 4 -> 0x1495c, 0x25f6f, 0xd7688, 0xda6fc
 ******************************************************************************/
void FUN_00014afe(void)

{
  undefined4 uVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar6;
  int local_1c;
  byte local_18;
  
  iVar3 = (in_EDX * 0x100 + in_EAX) * 5;
  if ((*(ushort *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)((int)&DAT_0019e973 +
                     (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2) >> 4;
  }
  iVar3 = (in_EAX / 3) * 3;
  iVar4 = (in_EDX / 3) * 3;
  if (bVar2 != 0) {
    iVar5 = iVar4 + 3;
    for (; iVar6 = iVar3, iVar4 < iVar5; iVar4 = iVar4 + 1) {
      for (; iVar6 < iVar3 + 3; iVar6 = iVar6 + 1) {
        FUN_00025f6f();
      }
    }
  }
  local_18 = 1;
  uVar1 = *(undefined4 *)((int)&DAT_00279203 + ((in_EDX / 3) * 0x300 + iVar3) * 5 + 1);
  local_1c = 0;
  iVar3 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar3] & 1) != 0) && (((byte)((uint)uVar1 >> 0x1c) & local_18) != 0)) {
      FUN_0001495c();
      iVar3 = extraout_ECX;
    }
    local_18 = local_18 << 1;
    local_1c = local_1c + 1;
    iVar3 = iVar3 + 0x4ef;
  } while (local_1c < 4);
  FUN_000d7688(0);
  FUN_000da6fc();
  *(int *)(&DAT_002e17e8 + unaff_EBX * 0x1508) = *(int *)(&DAT_002e17e8 + unaff_EBX * 0x1508) + 1;
  return;
}

/******************************************************************************
 * Function : sub_014d45 (Ghidra: FUN_00014d45)
 * Prototype: void sub_014d45(void);
 * Address  : 0x14d45 (Size: 346 bytes)
 * Module   : build.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4a0d6, 0x6c681
 * Callees  : 5 -> 0x1495c, 0x26007, 0x82a04, 0xd7688, 0xda6fc
 ******************************************************************************/
void FUN_00014d45(void)

{
  undefined4 uVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int in_EDX;
  int iVar6;
  int local_1c;
  byte local_18;
  
  iVar3 = (in_EDX * 0x100 + in_EAX) * 5;
  if ((*(ushort *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)((int)&DAT_0019e973 +
                     (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2) >> 4;
  }
  iVar3 = (in_EAX / 3) * 3;
  iVar4 = (in_EDX / 3) * 3;
  iVar5 = iVar4 + 3;
  for (; iVar6 = iVar3, iVar4 < iVar5; iVar4 = iVar4 + 1) {
    for (; iVar6 < iVar3 + 3; iVar6 = iVar6 + 1) {
      if (bVar2 != 0) {
        FUN_00026007();
      }
    }
  }
  local_18 = 1;
  uVar1 = *(undefined4 *)((int)&DAT_00279203 + ((in_EDX / 3) * 0x300 + iVar3) * 5 + 1);
  local_1c = 0;
  iVar3 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar3] & 1) != 0) && (((byte)((uint)uVar1 >> 0x1c) & local_18) != 0)) {
      FUN_0001495c();
      iVar3 = extraout_ECX;
    }
    local_18 = local_18 << 1;
    local_1c = local_1c + 1;
    iVar3 = iVar3 + 0x4ef;
  } while (local_1c < 4);
  FUN_000d7688(0);
  FUN_000da6fc();
  FUN_00082a04();
  return;
}

