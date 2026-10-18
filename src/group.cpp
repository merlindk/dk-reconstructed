/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: group.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 10
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_039c3e (Ghidra: FUN_00039c3e)
 * Prototype: undefined8 sub_039c3e(void);
 * Address  : 0x39c3e (Size: 279 bytes)
 * Module   : group.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x11214, 0x138c9, 0x39a74, 0x39ba4, 0x39d55, 0x3a237, 0x63a25, 0x63dd3, 0x72af4, 0x8608c
 * Callees  : 2 -> 0x39de2, 0x39e7e
 ******************************************************************************/
undefined8 FUN_00039c3e(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  byte *in_EAX;
  undefined4 in_EDX;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_00039e7e();
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x78)];
    if (*(short *)(iVar4 + 0x76) == 0) {
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x76) = 0;
    }
    else {
      iVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x76)];
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x78) =
           *(undefined2 *)(iVar2 + 0x1b);
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x76) =
           *(undefined2 *)(iVar3 + 0x1b);
    }
    *(undefined2 *)(iVar4 + 0x76) = 0;
    *(undefined2 *)(iVar4 + 0x78) = 0;
    *(ushort *)(iVar4 + 0x7a) = *(ushort *)(iVar4 + 0x7a) & 0xf000;
    iVar4 = (&DAT_001b0a00)[*(ushort *)(iVar2 + 100)];
    if ((*(short *)(iVar4 + 0x78) == 0) && (*(short *)(iVar4 + 0x76) == 0)) {
      *(ushort *)(iVar4 + 0x7a) = *(ushort *)(iVar4 + 0x7a) & 0xf000;
    }
  }
  else if (*(short *)(iVar4 + 0x76) != 0) {
    iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x76)];
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x78) = 0;
    *(undefined2 *)(iVar4 + 0x76) = 0;
    *(undefined2 *)(iVar4 + 0x78) = 0;
    *(ushort *)(iVar4 + 0x7a) = *(ushort *)(iVar4 + 0x7a) & 0xf000;
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x76) == 0) {
      puVar1 = (ushort *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x7a);
      *puVar1 = *puVar1 & 0xf000;
    }
    else {
      FUN_00039de2();
    }
  }
  *in_EAX = *in_EAX & 0xbf;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_039dab (Ghidra: FUN_00039dab)
 * Prototype: void sub_039dab(void);
 * Address  : 0x39dab (Size: 55 bytes)
 * Module   : group.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x39a74, 0x3a237, 0x3a32d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00039dab(void)

{
  int in_EAX;
  
  if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff) != 0) {
    while (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x76) != 0) {
      in_EAX = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x76)];
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_039de2 (Ghidra: FUN_00039de2)
 * Prototype: void sub_039de2(void);
 * Address  : 0x39de2 (Size: 84 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x39ba4, 0x39c3e
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00039de2(void)

{
  ushort *puVar1;
  int iVar2;
  uint in_EAX;
  ushort in_DX;
  uint uVar3;
  
  for (uVar3 = in_EAX; DAT_001ae9fc < uVar3;
      uVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0x76)]) {
    iVar2 = (&DAT_001b0a00)[*(ushort *)(uVar3 + 100)];
    puVar1 = (ushort *)(iVar2 + 0x7a);
    *puVar1 = *puVar1 & 0xf000;
    puVar1 = (ushort *)(iVar2 + 0x7a);
    *puVar1 = *puVar1 | in_DX & 0xfff;
  }
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7b) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7b) & 0xf;
  return;
}

/******************************************************************************
 * Function : sub_039e36 (Ghidra: FUN_00039e36)
 * Prototype: undefined8 sub_039e36(void);
 * Address  : 0x39e36 (Size: 72 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x688a4
 * Callees  : 1 -> 0x39d83
 ******************************************************************************/
undefined8 FUN_00039e36(void)

{
  uint uVar1;
  undefined4 in_EDX;
  byte bVar2;
  
  uVar1 = FUN_00039d83();
  bVar2 = 0;
  if (uVar1 != 0) {
    for (; DAT_001ae9fc < uVar1;
        uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar1 + 100)] + 0x76)]) {
      if (bVar2 < *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar1 + 100)] + 0x23)) {
        bVar2 = *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar1 + 100)] + 0x23);
      }
    }
  }
  return CONCAT44(in_EDX,(uint)bVar2);
}

/******************************************************************************
 * Function : sub_039e7e (Ghidra: FUN_00039e7e)
 * Prototype: undefined8 sub_039e7e(void);
 * Address  : 0x39e7e (Size: 18 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x39c3e, 0xe0b1c, 0xe1b88
 * Callees  : 1 -> 0x39d83
 ******************************************************************************/
undefined8 FUN_00039e7e(void)

{
  undefined4 in_EDX;
  undefined8 uVar1;
  
  uVar1 = FUN_00039d83();
  return CONCAT44(in_EDX,(uint)((int)uVar1 == (int)((ulonglong)uVar1 >> 0x20)));
}

/******************************************************************************
 * Function : sub_039e90 (Ghidra: FUN_00039e90)
 * Prototype: undefined8 sub_039e90(void);
 * Address  : 0x39e90 (Size: 58 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x138c9, 0x39eca, 0x6bdda
 * Callees  : 1 -> 0x39d83
 ******************************************************************************/
undefined8 FUN_00039e90(void)

{
  uint uVar1;
  undefined4 in_EDX;
  int iVar2;
  
  uVar1 = FUN_00039d83();
  iVar2 = 0;
  if (uVar1 == 0) {
    return CONCAT44(in_EDX,1);
  }
  for (; DAT_001ae9fc < uVar1;
      uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar1 + 100)] + 0x76)]) {
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_039eca (Ghidra: FUN_00039eca)
 * Prototype: void sub_039eca(void);
 * Address  : 0x39eca (Size: 877 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 4 -> 0x39e90, 0x7dbc0, 0xb3788, 0xe6a10
 ******************************************************************************/
void FUN_00039eca(void)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_ac;
  int local_a4;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int iVar6;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar4 = FUN_00039e90();
  if ((uVar4 == *(ushort *)(iVar1 + 0x7a) >> 0xc) && (((byte)DAT_002e8bee & 0x1f) != 0)) {
    iVar6 = iVar1;
    do {
      iVar5 = iVar6 + 3;
      *(byte *)(iVar6 + 0x294) = *(byte *)(iVar6 + 0x294) & 0xfe;
      iVar6 = iVar5;
    } while (iVar5 != iVar1 + 0x18);
  }
  else {
    *(byte *)(iVar1 + 0x7b) = *(byte *)(iVar1 + 0x7b) & 0xf;
    *(ushort *)(iVar1 + 0x7a) = *(ushort *)(iVar1 + 0x7a) | (ushort)((uVar4 & 0xf) << 0xc);
    FUN_000e6a10();
    uVar7 = *(ushort *)(extraout_ECX + 0x52) + 0x400 & 0x7ff;
    local_50 = -(((int)(&PTR_LAB_00192fe0)[uVar7] << 8) >> 8) >> 8;
    uVar8 = *(ushort *)(extraout_ECX + 0x52) - 0x200 & 0x7ff;
    iVar5 = -(((int)(&PTR_LAB_00192fe0)[uVar8] << 8) >> 8) >> 8;
    local_4c = local_50 * 2;
    local_44 = (int)((&DAT_001927e0)[uVar7] << 8) >> 0x10;
    local_54 = local_44 * 2;
    iVar13 = (int)((&DAT_001927e0)[uVar8] << 8) >> 0x10;
    local_a4 = 0;
    iVar6 = extraout_ECX;
    for (local_3c = 2; local_3c <= (int)(uVar4 * 2); local_3c = local_3c + 2) {
      local_40 = iVar5 * -2 + local_4c;
      local_58 = iVar13 * -2 + local_54;
      iVar14 = local_a4 * 3 + iVar1;
      for (local_34 = -2; local_34 < 3; local_34 = local_34 + 2) {
        iVar11 = (uint)*(ushort *)(iVar6 + 0xd) + local_58;
        iVar9 = iVar11 / 0x300;
        iVar16 = (uint)*(ushort *)(iVar6 + 0xf) + local_40;
        iVar15 = iVar14;
        if ((((0 < iVar9) && (iVar10 = iVar16 / 0x300, 0 < iVar10)) && (iVar9 < 0x55)) &&
           (iVar10 < 0x55)) {
          uVar2 = (ushort)iVar11;
          uVar3 = FUN_000b3788();
          iVar11 = FUN_0007dbc0(uVar2,uVar3);
          iVar6 = extraout_ECX_00;
          if (iVar11 == 0) {
            iVar15 = iVar14 + 3;
            local_a4 = local_a4 + 1;
            *(ushort *)(iVar14 + 0x292) = ((ushort)iVar16 & 0xff00) + (uVar2 >> 8);
            *(byte *)(iVar14 + 0x294) = *(byte *)(iVar14 + 0x294) | 2;
            if ((int)uVar4 <= local_a4) {
              return;
            }
          }
        }
        local_40 = local_40 + iVar5 * 2;
        local_58 = local_58 + iVar13 * 2;
        iVar14 = iVar15;
      }
      local_4c = local_4c + local_50 * 2;
      local_54 = local_54 + local_44 * 2;
    }
    iVar14 = local_50 * 2;
    iVar11 = local_44 * 2;
    for (local_ac = 1; local_ac <= (int)(uVar4 * 2); local_ac = local_ac + 2) {
      iVar15 = local_a4 * 3 + iVar1;
      local_5c = -iVar5;
      local_48 = -iVar13;
      for (local_38 = -1; local_38 < 3; local_38 = local_38 + 2) {
        iVar10 = local_44 + (uint)*(ushort *)(iVar6 + 0xd) + local_48;
        iVar16 = iVar10 / 0x300;
        iVar17 = (uint)*(ushort *)(iVar6 + 0xf) + local_5c + local_50;
        iVar9 = iVar15;
        if (((0 < iVar16) && (iVar12 = iVar17 / 0x300, 0 < iVar12)) &&
           ((iVar16 < 0x55 && (iVar12 < 0x55)))) {
          uVar2 = (ushort)iVar10;
          uVar3 = FUN_000b3788();
          iVar16 = FUN_0007dbc0(uVar2,uVar3);
          iVar6 = extraout_ECX_01;
          if (iVar16 == 0) {
            iVar9 = iVar15 + 3;
            local_a4 = local_a4 + 1;
            *(ushort *)(iVar15 + 0x292) = (uVar2 >> 8) + ((ushort)iVar17 & 0xff00);
            *(byte *)(iVar15 + 0x294) = *(byte *)(iVar15 + 0x294) | 2;
            if ((int)uVar4 <= local_a4) {
              return;
            }
          }
        }
        local_5c = local_5c + iVar5 * 2;
        local_48 = local_48 + iVar13 * 2;
        iVar15 = iVar9;
      }
      local_50 = local_50 + iVar14;
      local_44 = local_44 + iVar11;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_infinate_loop_dispand_group_03a237 (Ghidra: FUN_0003a237)
 * Prototype: longlong dk_infinate_loop_dispand_group_03a237(void);
 * Address  : 0x3a237 (Size: 118 bytes)
 * Module   : group.cpp [direct_file_string_xref]
 * OrigLine : group.cpp:459 ("INFINATE LOOP IN DISPAND GROUP")
 * Naming   : String 'INFINATE LOOP IN DISPAND GROUP'
 * Callers  : 2 -> 0x11214, 0x80fbc
 * Callees  : 3 -> 0x39c3e, 0x39dab, 0xddaf0
 * Strings  :
 *   - 0x164abb: "group.cpp"
 *   - 0x164a9c: "INFINATE LOOP IN DISPAND GROUP"
 ******************************************************************************/
longlong FUN_0003a237(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  int extraout_EDX;
  int iVar2;
  
  if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff) != 0) {
    iVar1 = FUN_00039dab();
    iVar2 = 0;
    while (iVar1 != 0) {
      if (*(short *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x78) == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00039c3e();
        iVar1 = extraout_EDX;
      }
      if (199 < iVar2) {
        FUN_000ddaf0(); /* LbErrorLog("group.cpp", line 459, "INFINATE LOOP IN DISPAND GROUP") */
        return (ulonglong)in_EDX << 0x20;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03a2ad (Ghidra: FUN_0003a2ad)
 * Prototype: longlong sub_03a2ad(void);
 * Address  : 0x3a2ad (Size: 128 bytes)
 * Module   : group.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a32d
 * Callees  : 4 -> 0x51374, 0x64ae7, 0xc9988, 0xcc4a0
 ******************************************************************************/
longlong FUN_0003a2ad(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  iVar2 = FUN_000c9988();
  if (iVar2 != 0) {
    cVar1 = FUN_00064ae7();
    if (cVar1 != '\0') {
      iVar2 = FUN_000cc4a0();
      if (iVar2 != 0) {
        if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          FUN_00051374();
        }
        *(undefined1 *)(in_EAX + 8) = 0x33;
        return CONCAT44(in_EDX,1);
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_infinate_loop_dispand_group_03a32d (Ghidra: FUN_0003a32d)
 * Prototype: longlong dk_infinate_loop_dispand_group_03a32d(void);
 * Address  : 0x3a32d (Size: 167 bytes)
 * Module   : group.cpp [direct_file_string_xref]
 * OrigLine : group.cpp:524 ("INFINATE LOOP IN DISPAND GROUP")
 * Naming   : String 'INFINATE LOOP IN DISPAND GROUP'
 * Callers  : 1 -> 0x11342
 * Callees  : 4 -> 0x39dab, 0x3a2ad, 0x63b6d, 0xddaf0
 * Strings  :
 *   - 0x164ae4: "group.cpp"
 *   - 0x164ac5: "INFINATE LOOP IN DISPAND GROUP"
 ******************************************************************************/
longlong FUN_0003a32d(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  int iVar3;
  
  if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff) != 0) {
    iVar1 = FUN_00039dab();
    iVar3 = 0;
    while (iVar1 != 0) {
      if (*(short *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x78) == 0) {
        iVar1 = 0;
      }
      else {
        iVar2 = FUN_0003a2ad();
        iVar1 = extraout_ECX;
        if (iVar2 == 0) {
          FUN_00063b6d();
          iVar1 = extraout_ECX_00;
        }
      }
      if (199 < iVar3) {
        FUN_000ddaf0(); /* LbErrorLog("group.cpp", line 524, "INFINATE LOOP IN DISPAND GROUP") */
        goto LAB_0003a3b8;
      }
      iVar3 = iVar3 + 1;
    }
    iVar1 = FUN_0003a2ad();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
LAB_0003a3b8:
  return (ulonglong)in_EDX << 0x20;
}

