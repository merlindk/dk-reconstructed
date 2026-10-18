/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: torture.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_074038 (Ghidra: FUN_00074038)
 * Prototype: undefined4 sub_074038(void);
 * Address  : 0x74038 (Size: 818 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x74853
 * Callees  : 4 -> 0x17db0, 0x23de2, 0x51374, 0x82828
 ******************************************************************************/
undefined4 FUN_00074038(void)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int in_EAX;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char *extraout_ECX;
  char *pcVar10;
  uint in_EDX;
  int iVar11;
  uint uVar12;
  int local_40;
  uint local_34;
  uint local_28;
  byte local_24;
  uint local_18;
  
  local_40 = 0x20;
  bVar4 = false;
  if ((&DAT_002e0589)[*(char *)(in_EAX + 6) * 0xa84] == 0) {
    FUN_00017db0();
    bVar2 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x289);
    bVar3 = *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x28b);
  }
  else {
    bVar2 = *(byte *)((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[*(char *)(in_EAX + 6) * 0xa84]] + 0xe)
    ;
    bVar3 = *(byte *)((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[*(char *)(in_EAX + 6) * 0xa84]] + 0x10
                     );
  }
  iVar5 = DAT_00199228;
  iVar9 = 0;
  pcVar6 = (char *)(DAT_00199228 + 0x1c39);
  iVar11 = DAT_00199228;
  do {
    iVar7 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0019033b + iVar7);
      iVar7 = iVar7 + 0xc;
      *(bool *)iVar11 =
           (uint)((&DAT_002d33ca)[(*piVar1 + *(int *)((int)&DAT_0019033b + iVar9) * 0x55) * 6] & 7)
           != (int)*(char *)(in_EAX + 6);
      iVar11 = iVar11 + 1;
    } while (iVar7 != 0x3fc);
    iVar9 = iVar9 + 0xc;
  } while (iVar9 != 0x3fc);
  local_34 = bVar2 / 3;
  local_18 = bVar3 / 3;
  local_24 = (byte)in_EDX;
  local_28 = 0;
  pbVar8 = (byte *)(local_18 * 0x55 + local_34 + iVar5);
  uVar12 = 0;
  *pbVar8 = *pbVar8 | 2;
  pcVar10 = pcVar6;
  do {
    if ((1 << (local_24 & 0x1f) &
        *(uint *)((int)&DAT_00279203 + (local_34 * 3 + local_18 * 0x300) * 5 + 1) >> 0x1c) == 0) {
      FUN_00023de2();
      bVar4 = true;
      FUN_00082828();
      local_40 = local_40 + -1;
      pcVar10 = extraout_ECX;
      if (local_40 == 0) break;
    }
    iVar11 = local_18 * 0x55 + local_34 + iVar5;
    if ((((*(byte *)(iVar11 + -1) & 1) == 0) && ((*(byte *)(iVar11 + -1) & 2) == 0)) &&
       (*(byte *)(iVar11 + -1) = *(byte *)(iVar11 + -1) | 2,
       (uint)((&DAT_002d33ca)
              [((&DAT_0019033b)[(local_34 - 1) * 3] + (&DAT_0019033b)[local_18 * 3] * 0x55) * 6] & 7
             ) == (int)*(char *)(in_EAX + 6))) {
      iVar11 = uVar12 * 2;
      pcVar6[iVar11] = (char)local_34 + -1;
      uVar12 = uVar12 + 1;
      (pcVar6 + iVar11)[1] = (char)local_18;
    }
    iVar11 = local_18 * 0x55 + local_34 + iVar5;
    if ((((*(byte *)(iVar11 + 1) & 1) == 0) && ((*(byte *)(iVar11 + 1) & 2) == 0)) &&
       (*(byte *)(iVar11 + 1) = *(byte *)(iVar11 + 1) | 2,
       (uint)((&DAT_002d33ca)
              [((&DAT_0019033b)[local_18 * 3] * 0x55 + (&DAT_0019033b)[(local_34 + 1) * 3]) * 6] & 7
             ) == (int)*(char *)(in_EAX + 6))) {
      iVar11 = uVar12 * 2;
      pcVar6[iVar11] = (char)local_34 + '\x01';
      uVar12 = uVar12 + 1;
      (pcVar6 + iVar11)[1] = (char)local_18;
    }
    pbVar8 = (byte *)((local_18 - 1) * 0x55 + local_34 + iVar5);
    if ((((*pbVar8 & 1) == 0) && ((*pbVar8 & 2) == 0)) &&
       (*pbVar8 = *pbVar8 | 2,
       (uint)((&DAT_002d33ca)
              [((&DAT_0019033b)[local_34 * 3] + (&DAT_0019033b)[(local_18 - 1) * 3] * 0x55) * 6] & 7
             ) == (int)*(char *)(in_EAX + 6))) {
      iVar11 = uVar12 * 2;
      pcVar6[iVar11] = (char)local_34;
      uVar12 = uVar12 + 1;
      (pcVar6 + iVar11)[1] = (char)local_18 + -1;
    }
    pbVar8 = (byte *)((local_18 + 1) * 0x55 + local_34 + iVar5);
    if ((((*pbVar8 & 1) == 0) && ((*pbVar8 & 2) == 0)) &&
       (*pbVar8 = *pbVar8 | 2,
       (uint)((&DAT_002d33ca)
              [((&DAT_0019033b)[local_34 * 3] + (&DAT_0019033b)[(local_18 + 1) * 3] * 0x55) * 6] & 7
             ) == (int)*(char *)(in_EAX + 6))) {
      iVar11 = uVar12 * 2;
      pcVar6[iVar11] = (char)local_34;
      uVar12 = uVar12 + 1;
      (pcVar6 + iVar11)[1] = (char)local_18 + '\x01';
    }
    local_34 = (uint)*pcVar10;
    local_28 = local_28 + 1;
    local_18 = (uint)pcVar10[1];
    pcVar10 = pcVar10 + 2;
  } while (local_28 <= uVar12);
  if ((bVar4) &&
     (((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == in_EDX ||
      ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])))) {
    FUN_00051374();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_07436a (Ghidra: FUN_0007436a)
 * Prototype: undefined4 sub_07436a(void);
 * Address  : 0x7436a (Size: 213 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x74616, 0x74d42
 * Callees  : 3 -> 0x71edd, 0x85890, 0xacce4
 ******************************************************************************/
undefined4 FUN_0007436a(void)

{
  short *psVar1;
  ushort uVar2;
  undefined2 uVar3;
  int in_EAX;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int iVar5;
  uint extraout_EDX;
  
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(in_EAX + 0x62) != 0) {
    FUN_000acce4();
    iVar5 = extraout_ECX;
  }
  if ((*(byte *)(iVar5 + 0xac) & 2) != 0) {
    FUN_00071edd();
    iVar5 = extraout_ECX_00;
  }
  if ((*(byte *)(iVar5 + 0xac) & 0x20) != 0) {
    FUN_00071edd();
  }
  iVar5 = (int)*(char *)(in_EDX + 3);
  *(int *)(&DAT_002e17cc + iVar5 * 0x1508) = *(int *)(&DAT_002e17cc + iVar5 * 0x1508) + 1;
  uVar4 = (uint)*(byte *)(in_EAX + 0x1a);
  if ((&DAT_002e0589)[iVar5 * 0xa84 + uVar4 + 0xa10] == 0) {
    psVar1 = &DAT_002e0589 + iVar5 * 0xa84 + uVar4 + 0xa10;
    *psVar1 = *psVar1 + 1;
    uVar2 = (&DAT_002e05b6)[iVar5 * 0xa84];
    while (uVar4 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < uVar4) {
      if (*(char *)(uVar4 + 0x1a) == *(char *)(in_EAX + 0x1a)) {
        uVar3 = FUN_00085890();
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uVar3;
        uVar4 = extraout_EDX;
      }
      uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar4 + 100)] + 0x1f);
    }
  }
  else {
    psVar1 = &DAT_002e0589 + iVar5 * 0xa84 + uVar4 + 0xa10;
    *psVar1 = *psVar1 + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_07443f (Ghidra: FUN_0007443f)
 * Prototype: undefined4 sub_07443f(void);
 * Address  : 0x7443f (Size: 128 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x74b82
 * Callees  : 1 -> 0x85890
 ******************************************************************************/
undefined4 FUN_0007443f(void)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  int in_EDX;
  uint uVar5;
  uint extraout_EDX;
  
  cVar1 = *(char *)(in_EDX + 3);
  iVar4 = cVar1 * 0x1508;
  *(short *)(&DAT_002e19a9 + (uint)*(byte *)(in_EAX + 0x1a) * 2 + iVar4) =
       *(short *)(&DAT_002e19a9 + (uint)*(byte *)(in_EAX + 0x1a) * 2 + iVar4) + -1;
  if (*(short *)(&DAT_002e19a9 + (uint)*(byte *)(in_EAX + 0x1a) * 2 + iVar4) == 0) {
    uVar2 = (&DAT_002e05b6)[cVar1 * 0xa84];
    while (uVar5 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < uVar5) {
      if (*(char *)(uVar5 + 0x1a) == *(char *)(in_EAX + 0x1a)) {
        uVar3 = FUN_00085890();
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uVar3;
        uVar5 = extraout_EDX;
      }
      uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar5 + 100)] + 0x1f);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0744bf (Ghidra: FUN_000744bf)
 * Prototype: bool sub_0744bf(void);
 * Address  : 0x744bf (Size: 22 bytes)
 * Module   : torture.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x746e4
 * Callees  : 1 -> 0xce0e4
 ******************************************************************************/
bool FUN_000744bf(void)

{
  int iVar1;
  int extraout_ECX;
  undefined1 unaff_BL;
  
  iVar1 = FUN_000ce0e4();
  if (iVar1 != 0) {
    *(undefined1 *)(extraout_ECX + 8) = unaff_BL;
  }
  return iVar1 != 0;
}

/******************************************************************************
 * Function : dk_move_torture_0744d5 (Ghidra: FUN_000744d5)
 * Prototype: undefined4 dk_move_torture_0744d5(void);
 * Address  : 0x744d5 (Size: 321 bytes)
 * Module   : torture.cpp [direct_file_string_xref]
 * OrigLine : torture.cpp:329 ("MOVE FAILED IN TORTURE")
 * Naming   : String 'MOVE FAILED IN TORTURE'
 * Callers  : 1 -> 0x746e4
 * Callees  : 3 -> 0x50d3c, 0xb3be4, 0xddaf0
 * Strings  :
 *   - 0x167a9b: "torture.cpp"
 *   - 0x167a84: "MOVE FAILED IN TORTURE"
 ******************************************************************************/
undefined4 FUN_000744d5(void)

{
  int iVar1;
  short sVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int in_EDX;
  undefined1 unaff_BL;
  int local_1c;
  uint local_18;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_18 = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
  for (uVar3 = local_18; 0 < (int)uVar3; uVar3 = uVar3 - 1) {
  }
  local_1c = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(in_EDX + 0x3b) <= local_1c) {
      return 0;
    }
    if (*(ushort *)(in_EDX + 0x3b) == local_18) {
      local_18 = 0;
    }
    iVar4 = FUN_00050d3c();
    if ((iVar4 != 0) && (*(short *)(iVar4 + 0x13) == 0)) break;
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  }
  sVar2 = FUN_000b3be4();
  if (sVar2 < 1) {
    FUN_000ddaf0(); /* LbErrorLog("torture.cpp", line 329, "MOVE FAILED IN TORTURE") */
    return 0;
  }
  *(undefined1 *)(in_EAX + 8) = unaff_BL;
  *(undefined2 *)(extraout_ECX + 0x13) = *(undefined2 *)(in_EAX + 0x1b);
  *(undefined2 *)(extraout_ECX + 0x15) = *(undefined2 *)(extraout_ECX + 0x46);
  *(undefined2 *)(iVar1 + 0xa6) = *(undefined2 *)(extraout_ECX + 0x1b);
  return 1;
}

/******************************************************************************
 * Function : sub_074616 (Ghidra: FUN_00074616)
 * Prototype: longlong sub_074616(void);
 * Address  : 0x74616 (Size: 206 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x51374, 0x63b6d, 0x64ae7, 0x7436a, 0xcd85c, 0xd0f50
 ******************************************************************************/
longlong FUN_00074616(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar1 + 0x80) = 0;
  iVar4 = FUN_000d0f50();
  if ((iVar4 != 0) && (*(short *)(iVar4 + 10) == 5)) {
    cVar3 = FUN_000cd85c();
    if (cVar3 != '\0') {
      FUN_0007436a();
      *(undefined2 *)(iVar1 + 0xa6) = 0;
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 2;
      uVar2 = DAT_002e8bee;
      *(undefined4 *)(iVar1 + 0x82) = DAT_002e8bee;
      *(undefined4 *)(iVar1 + 0x9a) = uVar2;
      *(undefined4 *)(iVar1 + 0x9e) = uVar2;
      *(undefined4 *)(iVar1 + 0xa2) = uVar2;
      *(undefined1 *)(iVar1 + 0xa8) = 1;
      FUN_00064ae7();
      return CONCAT44(in_EDX,1);
    }
    if ((int)*(char *)(iVar4 + 3) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_centre_table_torture_0746e4 (Ghidra: FUN_000746e4)
 * Prototype: undefined4 dk_centre_table_torture_0746e4(void);
 * Address  : 0x746e4 (Size: 367 bytes)
 * Module   : torture.cpp [direct_file_string_xref]
 * OrigLine : torture.cpp:441 ("NO CENTRE TABLE FOR TORTURE")
 * Naming   : String 'NO CENTRE TABLE FOR TORTURE'
 * Callers  : 2 -> 0x74b25, 0x74dde
 * Callees  : 7 -> 0x10132, 0x49bfc, 0x6edb9, 0x744bf, 0x744d5, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x167ac3: "torture.cpp"
 *   - 0x167aa7: "NO CENTRE TABLE FOR TORTURE"
 ******************************************************************************/
undefined4 FUN_000746e4(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uStack_10;
  
  puVar6 = (uint *)&stack0xfffffff4;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  bVar1 = *(byte *)(iVar3 + 0xa8);
  if (bVar1 == 0) {
    if (100 < (uint)(DAT_002e8bee - *(int *)(iVar3 + 0x9e))) {
      *(undefined1 *)(iVar3 + 0xa8) = 1;
    }
    uStack_10 = 0x74732;
    iVar3 = FUN_000744bf();
    if (iVar3 != 0) {
      return 1;
    }
  }
  else if (bVar1 < 2) {
    uStack_10 = 0x7474c;
    iVar4 = FUN_000744d5();
    if (iVar4 != 0) {
      *(undefined1 *)(iVar3 + 0xa8) = 2;
      *(int *)(iVar3 + 0x9e) = DAT_002e8bee;
      return 1;
    }
    *(undefined1 *)(iVar3 + 0xa8) = 0;
    *(int *)(iVar3 + 0x9e) = DAT_002e8bee;
  }
  else if (bVar1 == 2) {
    uStack_10 = 0x74794;
    iVar4 = FUN_00010132();
    if (iVar4 < 0x55) {
      *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
      *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) & 0xef;
      uStack_10 = 0x747b2;
      uVar2 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar2;
      if (*(byte *)(iVar3 + 0xd2) == 0) {
        puVar6 = &uStack_10;
        uStack_10 = (uint)*(byte *)(iVar3 + 0xd2);
        FUN_00049bfc();
      }
      if (*(short *)(iVar3 + 0xa6) == 0) {
        *(undefined4 *)((int)puVar6 + -4) = 0x74807;
        FUN_000ddaf0(); /* LbErrorLog("torture.cpp", line 441, "NO CENTRE TABLE FOR TORTURE") */
      }
      else {
        *(byte *)((&DAT_001ae9fc)[*(ushort *)(iVar3 + 0xa6)] + 0x4f) =
             *(byte *)((&DAT_001ae9fc)[*(ushort *)(iVar3 + 0xa6)] + 0x4f) | 1;
      }
      uVar5 = DAT_002e8bee - *(int *)(iVar3 + 0xa2);
      if ((0x20 < uVar5) || (((*(byte *)(iVar3 + 0xac) & 2) != 0 && (0x10 < uVar5)))) {
        *(undefined4 *)((int)puVar6 + -4) = 0x74838;
        FUN_0006edb9();
        *(int *)(iVar3 + 0xa2) = DAT_002e8bee;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_074853 (Ghidra: FUN_00074853)
 * Prototype: undefined8 sub_074853(void);
 * Address  : 0x74853 (Size: 722 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x74b25
 * Callees  : 9 -> 0x10434, 0x10ad6, 0x51374, 0x63a25, 0x63b6d, 0x6709c, 0x74038, 0x74c0d, 0x81c44
 ******************************************************************************/
undefined8 FUN_00074853(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_EDX;
  int iVar7;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = (uint)*(ushort *)(iVar1 + 0x7e) * 0x45;
  iVar4 = FUN_0006709c();
  if (iVar4 == 0) {
    FUN_00063b6d();
    uVar5 = 1;
    goto LAB_00074b1e;
  }
  FUN_00010434();
  if ((uint)DAT_002ebc4f <= (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x82))) {
    FUN_00081c44();
    *(int *)(iVar1 + 0x82) = DAT_002e8bee;
  }
  if (*(short *)(in_EAX + 0x5e) < 0) {
    if (DAT_002ebc51 != 0) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      if (DAT_002e8bf6 % (uint)DAT_002ebc51 != 0) goto LAB_00074977;
    }
    FUN_00074c0d();
    uVar5 = 0xffffffff;
  }
  else {
LAB_00074977:
    if ((&DAT_002ddd1e)[iVar3] != *(char *)(in_EAX + 6)) {
      uVar6 = (DAT_002e8bee - *(int *)(iVar1 + 0x9a)) * (uint)*(ushort *)(&DAT_002ddd5a + iVar3) >>
              8;
      if ((*(byte *)(iVar1 + 0xac) & 2) != 0) {
        uVar6 = (uVar6 << 2) / 3;
      }
      if (*(short *)(iVar1 + 0x21) != 0) {
        uVar6 = (int)(uVar6 * 5) >> 2;
      }
      if (((int)*(short *)(&DAT_002e91b1 + iVar2) <= (int)uVar6) && (*(short *)(iVar1 + 0xa6) != 0))
      {
        iVar4 = (DAT_002e8bee - *(int *)(iVar1 + 0x9a)) - (int)*(short *)(&DAT_002e91b1 + iVar2);
        iVar7 = iVar4 >> 0x1f;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        if (DAT_002e8bf6 % 100 < ((int)((iVar4 + iVar7 * -0x40) - (uint)(iVar7 << 5 < 0)) >> 6) + 1U
           ) {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          if (DAT_002e8bf6 % 3 == 0) {
            if (((int)(char)(&DAT_002ddd1e)[iVar3] ==
                 (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) ||
               ((int)*(char *)(in_EAX + 6) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])) {
              FUN_00051374();
            }
            FUN_00063a25();
            FUN_00010ad6();
            uVar5 = 1;
            *(int *)(&DAT_002e17d4 + (char)(&DAT_002ddd1e)[iVar3] * 0x1508) =
                 *(int *)(&DAT_002e17d4 + (char)(&DAT_002ddd1e)[iVar3] * 0x1508) + 1;
            goto LAB_00074b1e;
          }
          *(int *)(iVar1 + 0x9a) = DAT_002e8bee - (int)*(short *)(&DAT_002e91b1 + iVar2) / 2;
          FUN_00074038();
        }
      }
    }
    uVar5 = 0;
  }
LAB_00074b1e:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_074b25 (Ghidra: FUN_00074b25)
 * Prototype: longlong sub_074b25(void);
 * Address  : 0x74b25 (Size: 93 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x63b6d, 0x746e4, 0x74853, 0xd0f50
 ******************************************************************************/
longlong FUN_00074b25(void)

{
  int iVar1;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = FUN_000d0f50();
  if (((iVar1 != 0) && (*(short *)(iVar1 + 10) == 5)) &&
     (*(short *)(iVar1 + 1) == *(short *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x7e)))
  {
    iVar1 = FUN_00074853();
    if (iVar1 == 0) {
      FUN_000746e4();
    }
    return CONCAT44(in_EDX,iVar1);
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_074b82 (Ghidra: FUN_00074b82)
 * Prototype: undefined8 sub_074b82(void);
 * Address  : 0x74b82 (Size: 139 bytes)
 * Module   : torture.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x64e59, 0x7443f
 ******************************************************************************/
undefined8 FUN_00074b82(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar1 + 0xa6) != 0) {
    *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xa6)] + 0x13) = 0;
    *(byte *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xa6)] + 0x4f) =
         *(byte *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xa6)] + 0x4f) & 0xfe;
    *(undefined2 *)(iVar1 + 0xa6) = 0;
  }
  if ((&DAT_002e9188)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') {
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 0x20;
  }
  *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) & 0xfd;
  FUN_0007443f();
  FUN_00064e59();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_couldn_create_ghost_torture_074c0d (Ghidra: FUN_00074c0d)
 * Prototype: void dk_couldn_create_ghost_torture_074c0d(void);
 * Address  : 0x74c0d (Size: 262 bytes)
 * Module   : torture.cpp [direct_file_string_xref]
 * OrigLine : torture.cpp:633 ("COULDN'T CREATE GHOST IN TORTURE ROOM")
 * Naming   : String 'COULDN'T CREATE GHOST IN TORTURE ROOM'
 * Callers  : 1 -> 0x74853
 * Callees  : 7 -> 0x263c9, 0x43bb3, 0x51374, 0x63b6d, 0x8240c, 0x8608c, 0xddaf0
 * Strings  :
 *   - 0x167af5: "torture.cpp"
 *   - 0x167acf: "COULDN'T CREATE GHOST IN TORTURE ROOM"
 ******************************************************************************/
void FUN_00074c0d(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int in_EDX;
  
  iVar2 = FUN_00043bb3();
  if (iVar2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("torture.cpp", line 633, "COULDN'T CREATE GHOST IN TORTURE ROOM") */
  }
  else {
    FUN_0008240c();
    if (DAT_002ee9b9 == 3) {
      uVar3 = (uint)*(byte *)(in_EDX + 0x1a);
      if (((&DAT_002e91e7)[uVar3 * 0xe6] == '\0') || ((uVar3 != 0 && (uVar3 < 0xe)))) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
    }
    else {
      cVar1 = (&DAT_002e91e7)[(uint)*(byte *)(in_EDX + 0x1a) * 0xe6];
    }
    if (cVar1 != '\0') {
      FUN_000263c9();
    }
    FUN_00063b6d();
    FUN_0008608c(1,0);
    iVar2 = (int)DAT_002f10ce._3_1_;
    *(int *)(&DAT_002e1828 + *(char *)(in_EAX + 3) * 0x1508) =
         *(int *)(&DAT_002e1828 + *(char *)(in_EAX + 3) * 0x1508) + 1;
    if ((int)*(char *)(in_EAX + 3) == (uint)(byte)(&DAT_0019d0f3)[iVar2 * 0x4ef]) {
      FUN_00051374();
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_074d13 (Ghidra: FUN_00074d13)
 * Prototype: longlong sub_074d13(void);
 * Address  : 0x74d13 (Size: 47 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x74dde
 * Callees  : 1 -> 0x10434
 ******************************************************************************/
longlong FUN_00074d13(void)

{
  uint in_EDX;
  
  FUN_00010434();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_074d42 (Ghidra: FUN_00074d42)
 * Prototype: longlong sub_074d42(void);
 * Address  : 0x74d42 (Size: 156 bytes)
 * Module   : torture.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x64ae7, 0x7436a, 0xcd85c, 0xd0f50
 ******************************************************************************/
longlong FUN_00074d42(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar1 + 0x80) = 0;
  iVar4 = FUN_000d0f50();
  if ((iVar4 != 0) && (*(short *)(iVar4 + 10) == 5)) {
    cVar3 = FUN_000cd85c();
    if (cVar3 != '\0') {
      FUN_0007436a();
      uVar2 = DAT_002e8bee;
      *(undefined2 *)(iVar1 + 0xa6) = 0;
      *(undefined1 *)(iVar1 + 0xa8) = 1;
      *(undefined4 *)(iVar1 + 0x82) = uVar2;
      *(undefined4 *)(iVar1 + 0x9a) = uVar2;
      *(undefined4 *)(iVar1 + 0x9e) = uVar2;
      *(undefined4 *)(iVar1 + 0xa2) = uVar2;
      *(undefined4 *)(iVar1 + 0x82) = uVar2;
      FUN_00064ae7();
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_074dde (Ghidra: FUN_00074dde)
 * Prototype: undefined8 sub_074dde(void);
 * Address  : 0x74dde (Size: 144 bytes)
 * Module   : torture.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x63b6d, 0x746e4, 0x74d13, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00074dde(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 in_EDX;
  
  bVar1 = *(byte *)(in_EAX + 0x1a);
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = FUN_000d0f50();
  if ((((iVar3 == 0) || (*(short *)(iVar3 + 10) != 5)) ||
      (*(short *)(iVar3 + 1) != *(short *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x7e))
      ) || ((uint)(int)*(short *)(&DAT_002e91b1 + (uint)bVar1 * 0xe6) <
            (uint)(DAT_002e8bee - *(int *)(iVar2 + 0x82)))) {
    FUN_00063b6d();
    uVar4 = 0;
  }
  else {
    FUN_00074d13();
    FUN_000746e4();
    uVar4 = 1;
  }
  return CONCAT44(in_EDX,uVar4);
}

