/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: move.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 33
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0b28e8 (Ghidra: FUN_000b28e8)
 * Prototype: int sub_0b28e8(void);
 * Address  : 0xb28e8 (Size: 969 bytes)
 * Module   : move.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 67 -> 0x11606, 0x1211a, 0x12230, 0x123ba, 0x1277d, 0x12b04, 0x12c46, 0x12edf, 0x130c5, 0x1342a ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000b28e8(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *in_EDX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint local_5c;
  uint local_58;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2);
  }
  else {
    uVar2 = *(ushort *)(in_EAX + 0x56);
  }
  uVar5 = uVar2 / 2;
  uVar8 = *in_EDX - uVar5;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  uVar9 = in_EDX[1] - uVar5;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  uVar10 = *in_EDX + uVar5;
  if (0xffff < uVar10) {
    uVar10 = 0xffff;
  }
  uVar5 = uVar5 + in_EDX[1];
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  local_5c = 0;
  local_58 = 0xf;
  uVar3 = local_58;
  for (uVar11 = uVar9; uVar4 = uVar8, uVar11 < uVar5; uVar11 = uVar11 + 0x100) {
    for (; uVar4 < uVar10; uVar4 = uVar4 + 0x100) {
      iVar7 = ((uVar11 >> 8 & 0xff) * 0x100 + (uVar4 >> 8 & 0xff)) * 5;
      iVar12 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
      uVar6 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar12 + 2) >> 4);
      if (uVar6 <= local_5c) {
        uVar6 = local_5c;
      }
      bVar1 = *(byte *)((int)&DAT_0019e973 + iVar12 + 2);
      if ((bVar1 & 0xe) == 0) {
        local_58 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
        if (uVar3 <= local_58) {
          local_58 = uVar3;
        }
      }
      else {
        local_58 = 8 - ((bVar1 & 0xf) >> 1);
        if (uVar3 < local_58) {
          local_58 = uVar3;
        }
      }
      local_5c = uVar6;
      uVar3 = local_58;
    }
  }
  for (; uVar9 < uVar5; uVar9 = uVar9 + 0x100) {
    iVar7 = ((uVar9 >> 8 & 0xff) * 0x100 + (uVar10 >> 8 & 0xff)) * 5;
    iVar12 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
    uVar11 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar12 + 2) >> 4);
    if (uVar11 <= local_5c) {
      uVar11 = local_5c;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar12 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_58 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
      if (uVar3 <= local_58) {
        local_58 = uVar3;
      }
    }
    else {
      local_58 = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar3 < local_58) {
        local_58 = uVar3;
      }
    }
    local_5c = uVar11;
    uVar3 = local_58;
  }
  for (; uVar8 < uVar10; uVar8 = uVar8 + 0x100) {
    iVar7 = ((uVar8 >> 8 & 0xff) + (uVar5 >> 8 & 0xff) * 0x100) * 5;
    iVar12 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
    uVar9 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar12 + 2) >> 4);
    if (uVar9 <= local_5c) {
      uVar9 = local_5c;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar12 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_58 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
      if (uVar3 <= local_58) {
        local_58 = uVar3;
      }
    }
    else {
      local_58 = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar3 < local_58) {
        local_58 = uVar3;
      }
    }
    local_5c = uVar9;
    uVar3 = local_58;
  }
  iVar7 = ((uVar10 >> 8 & 0xff) + (uVar5 >> 8 & 0xff) * 0x100) * 5;
  iVar12 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
  uVar8 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar12 + 2) >> 4);
  if (uVar8 <= local_5c) {
    uVar8 = local_5c;
  }
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar12 + 2);
  if ((bVar1 & 0xe) == 0) {
    uVar5 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
    if (uVar3 <= uVar5) {
      uVar5 = uVar3;
    }
  }
  else {
    uVar5 = 8 - ((bVar1 & 0xf) >> 1);
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
  }
  iVar7 = uVar8 * 0x100;
  if (uVar5 << 8 <= (uint)*(ushort *)(in_EAX + 0x58) + iVar7) {
    iVar7 = *(int *)(in_EDX + 1) >> 0x10;
  }
  return iVar7;
}

/******************************************************************************
 * Function : sub_0b2cb4 (Ghidra: FUN_000b2cb4)
 * Prototype: int sub_0b2cb4(void);
 * Address  : 0xb2cb4 (Size: 907 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x739b9, 0xcc968, 0xccc08, 0xccf10, 0xcd1d4, 0xcdcd0, 0xdacf0
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000b2cb4(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *in_EDX;
  int unaff_EBX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_54;
  uint local_50;
  
  uVar5 = (uint)*in_EDX - unaff_EBX;
  uVar8 = (uint)in_EDX[1] - unaff_EBX;
  uVar11 = (uint)*in_EDX + unaff_EBX;
  if (0xffff < uVar11) {
    uVar11 = 0xffff;
  }
  uVar4 = (uint)in_EDX[1] + unaff_EBX;
  if (0xffff < uVar4) {
    uVar4 = 0xffff;
  }
  local_54 = 0;
  local_50 = 0xf;
  uVar2 = local_50;
  for (uVar9 = uVar8; uVar3 = uVar5, uVar9 < uVar4; uVar9 = uVar9 + 0x100) {
    for (; uVar3 < uVar11; uVar3 = uVar3 + 0x100) {
      iVar7 = ((uVar9 >> 8 & 0xff) * 0x100 + (uVar3 >> 8 & 0xff)) * 5;
      iVar10 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
      uVar6 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar10 + 2) >> 4);
      if (uVar6 <= local_54) {
        uVar6 = local_54;
      }
      bVar1 = *(byte *)((int)&DAT_0019e973 + iVar10 + 2);
      if ((bVar1 & 0xe) == 0) {
        local_50 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
        if (uVar2 <= local_50) {
          local_50 = uVar2;
        }
      }
      else {
        local_50 = 8 - ((bVar1 & 0xf) >> 1);
        if (uVar2 < local_50) {
          local_50 = uVar2;
        }
      }
      local_54 = uVar6;
      uVar2 = local_50;
    }
  }
  for (; uVar8 < uVar4; uVar8 = uVar8 + 0x100) {
    iVar7 = ((uVar8 >> 8 & 0xff) * 0x100 + (uVar11 >> 8 & 0xff)) * 5;
    iVar10 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
    uVar9 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar10 + 2) >> 4);
    if (uVar9 <= local_54) {
      uVar9 = local_54;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar10 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_50 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
      if (uVar2 <= local_50) {
        local_50 = uVar2;
      }
    }
    else {
      local_50 = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar2 < local_50) {
        local_50 = uVar2;
      }
    }
    local_54 = uVar9;
    uVar2 = local_50;
  }
  for (; uVar5 < uVar11; uVar5 = uVar5 + 0x100) {
    iVar7 = ((uVar4 >> 8 & 0xff) * 0x100 + (uVar5 >> 8 & 0xff)) * 5;
    iVar10 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
    uVar8 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar10 + 2) >> 4);
    if (uVar8 <= local_54) {
      uVar8 = local_54;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar10 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_50 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
      if (uVar2 <= local_50) {
        local_50 = uVar2;
      }
    }
    else {
      local_50 = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar2 < local_50) {
        local_50 = uVar2;
      }
    }
    local_54 = uVar8;
    uVar2 = local_50;
  }
  iVar7 = ((uVar4 >> 8 & 0xff) * 0x100 + (uVar11 >> 8 & 0xff)) * 5;
  iVar10 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18;
  uVar5 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar10 + 2) >> 4);
  if (uVar5 <= local_54) {
    uVar5 = local_54;
  }
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar10 + 2);
  if ((bVar1 & 0xe) == 0) {
    uVar8 = (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0xfffffff) >> 0x18;
    if (uVar2 <= uVar8) {
      uVar8 = uVar2;
    }
  }
  else {
    uVar8 = 8 - ((bVar1 & 0xf) >> 1);
    if (uVar2 < uVar8) {
      uVar8 = uVar2;
    }
  }
  iVar7 = uVar5 * 0x100;
  if (uVar8 << 8 <= (uint)*(ushort *)(in_EAX + 0x58) + iVar7) {
    iVar7 = *(int *)(in_EDX + 1) >> 0x10;
  }
  return iVar7;
}

/******************************************************************************
 * Function : sub_0b3040 (Ghidra: FUN_000b3040)
 * Prototype: int sub_0b3040(void);
 * Address  : 0xb3040 (Size: 930 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x12a2e, 0x7e134, 0x7f228, 0xe0b1c, 0xe4220
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000b3040(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_EAX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *in_EDX;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_50;
  uint local_4c;
  undefined1 uStack_43;
  undefined1 uStack_3f;
  undefined1 uStack_33;
  byte bStack_2f;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2);
  }
  else {
    uVar2 = *(ushort *)(in_EAX + 0x56);
  }
  uVar6 = uVar2 / 2;
  uVar9 = *in_EDX - uVar6;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  uVar10 = in_EDX[1] - uVar6;
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  uVar12 = *in_EDX + uVar6;
  if (0xffff < uVar12) {
    uVar12 = 0xffff;
  }
  uVar6 = uVar6 + in_EDX[1];
  if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  local_50 = 0;
  local_4c = 0xf;
  uVar4 = local_4c;
  for (uVar7 = uVar10; uVar5 = uVar9, uVar7 < uVar6; uVar7 = uVar7 + 0x100) {
    for (; uVar5 < uVar12; uVar5 = uVar5 + 0x100) {
      uStack_3f = (undefined1)(uVar7 >> 8);
      uStack_43 = (undefined1)(uVar5 >> 8);
      iVar3 = (uint)CONCAT11(uStack_3f,uStack_43) * 5;
      iVar11 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18;
      uVar8 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
      if (uVar8 <= local_50) {
        uVar8 = local_50;
      }
      bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
      if ((bVar1 & 0xe) == 0) {
        local_4c = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
        if (uVar4 <= local_4c) {
          local_4c = uVar4;
        }
      }
      else {
        local_4c = 8 - ((bVar1 & 0xf) >> 1);
        if (uVar4 < local_4c) {
          local_4c = uVar4;
        }
      }
      local_50 = uVar8;
      uVar4 = local_4c;
    }
  }
  for (; uVar10 < uVar6; uVar10 = uVar10 + 0x100) {
    iVar3 = ((uVar10 >> 8 & 0xff) * 0x100 + (uVar12 >> 8 & 0xff)) * 5;
    iVar11 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18;
    uVar7 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
    if (uVar7 <= local_50) {
      uVar7 = local_50;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_4c = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
      if (uVar4 <= local_4c) {
        local_4c = uVar4;
      }
    }
    else {
      local_4c = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar4 < local_4c) {
        local_4c = uVar4;
      }
    }
    local_50 = uVar7;
    uVar4 = local_4c;
  }
  bStack_2f = (byte)(uVar6 >> 8);
  for (; uVar9 < uVar12; uVar9 = uVar9 + 0x100) {
    uStack_33 = (undefined1)(uVar9 >> 8);
    iVar3 = (uint)CONCAT11(bStack_2f,uStack_33) * 5;
    iVar11 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18;
    uVar6 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4);
    if (uVar6 <= local_50) {
      uVar6 = local_50;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_4c = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
      if (uVar4 <= local_4c) {
        local_4c = uVar4;
      }
    }
    else {
      local_4c = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar4 < local_4c) {
        local_4c = uVar4;
      }
    }
    local_50 = uVar6;
    uVar4 = local_4c;
  }
  uVar9 = (uint)(*(byte *)((int)&DAT_0019e973 +
                          (*(uint *)((int)&DAT_00279203 +
                                    ((uVar12 >> 8 & 0xff) + (uint)bStack_2f * 0x100) * 5 + 1) &
                          0x7ff) * 0x18 + 2) >> 4);
  if (uVar9 <= local_50) {
    uVar9 = local_50;
  }
  return uVar9 << 8;
}

/******************************************************************************
 * Function : sub_0b33e4 (Ghidra: FUN_000b33e4)
 * Prototype: int sub_0b33e4(void);
 * Address  : 0xb33e4 (Size: 931 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1e226, 0xc7970
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000b33e4(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int in_EAX;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  ushort *in_EDX;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_4c;
  undefined1 uStack_43;
  undefined1 uStack_3f;
  undefined1 uStack_33;
  byte bStack_2f;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2);
  }
  else {
    uVar2 = *(ushort *)(in_EAX + 0x56);
  }
  uVar6 = uVar2 / 2;
  uVar9 = *in_EDX - uVar6;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  uVar10 = in_EDX[1] - uVar6;
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  uVar12 = *in_EDX + uVar6;
  if (0xffff < uVar12) {
    uVar12 = 0xffff;
  }
  uVar6 = uVar6 + in_EDX[1];
  if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  bVar1 = 0;
  local_4c = 0xf;
  uVar4 = local_4c;
  for (uVar7 = uVar10; uVar5 = uVar9, uVar7 < uVar6; uVar7 = uVar7 + 0x100) {
    for (; uVar5 < uVar12; uVar5 = uVar5 + 0x100) {
      uStack_3f = (undefined1)(uVar7 >> 8);
      uStack_43 = (undefined1)(uVar5 >> 8);
      iVar3 = (uint)CONCAT11(uStack_3f,uStack_43) * 5;
      iVar11 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18;
      bVar8 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4;
      if (bVar8 <= bVar1) {
        bVar8 = bVar1;
      }
      bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
      if ((bVar1 & 0xe) == 0) {
        local_4c = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
        if (uVar4 <= local_4c) {
          local_4c = uVar4;
        }
      }
      else {
        local_4c = 8 - ((bVar1 & 0xf) >> 1);
        if (uVar4 < local_4c) {
          local_4c = uVar4;
        }
      }
      uVar4 = local_4c;
      bVar1 = bVar8;
    }
  }
  for (; uVar10 < uVar6; uVar10 = uVar10 + 0x100) {
    iVar3 = ((uVar10 >> 8 & 0xff) * 0x100 + (uVar12 >> 8 & 0xff)) * 5;
    iVar11 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18;
    bVar8 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4;
    if (bVar8 <= bVar1) {
      bVar8 = bVar1;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_4c = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
      if (uVar4 <= local_4c) {
        local_4c = uVar4;
      }
    }
    else {
      local_4c = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar4 < local_4c) {
        local_4c = uVar4;
      }
    }
    uVar4 = local_4c;
    bVar1 = bVar8;
  }
  bStack_2f = (byte)(uVar6 >> 8);
  for (; uVar9 < uVar12; uVar9 = uVar9 + 0x100) {
    uStack_33 = (undefined1)(uVar9 >> 8);
    iVar3 = (uint)CONCAT11(bStack_2f,uStack_33) * 5;
    iVar11 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18;
    bVar8 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2) >> 4;
    if (bVar8 <= bVar1) {
      bVar8 = bVar1;
    }
    bVar1 = *(byte *)((int)&DAT_0019e973 + iVar11 + 2);
    if ((bVar1 & 0xe) == 0) {
      local_4c = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
      if (uVar4 <= local_4c) {
        local_4c = uVar4;
      }
    }
    else {
      local_4c = 8 - ((bVar1 & 0xf) >> 1);
      if (uVar4 < local_4c) {
        local_4c = uVar4;
      }
    }
    uVar4 = local_4c;
    bVar1 = bVar8;
  }
  iVar3 = ((uVar12 >> 8 & 0xff) + (uint)bStack_2f * 0x100) * 5;
  bVar1 = *(byte *)((int)&DAT_0019e973 +
                   (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2);
  if ((bVar1 & 0xe) == 0) {
    uVar9 = (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0xfffffff) >> 0x18;
    if (uVar4 <= uVar9) {
      uVar9 = uVar4;
    }
  }
  else {
    uVar9 = 8 - ((bVar1 & 0xf) >> 1);
    if (uVar4 < uVar9) {
      uVar9 = uVar4;
    }
  }
  return uVar9 << 8;
}

/******************************************************************************
 * Function : sub_0b3788 (Ghidra: FUN_000b3788)
 * Prototype: undefined8 sub_0b3788(void);
 * Address  : 0xb3788 (Size: 200 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x39eca, 0x48c77, 0x4bf40, 0x4e1f2, 0x5f438, 0x66b28, 0x7225e, 0x82cac, 0x849c8, 0xc3c3c ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b3788(void)

{
  undefined2 *in_EAX;
  undefined4 in_EDX;
  uint uVar1;
  byte bStack_17;
  byte bStack_13;
  
  bStack_13 = (byte)((ushort)in_EAX[1] >> 8);
  bStack_17 = (byte)((ushort)*in_EAX >> 8);
  uVar1 = (uint)(*(byte *)((int)&DAT_0019e973 +
                          (*(uint *)((int)&DAT_00279203 +
                                    ((uint)bStack_17 + (uint)bStack_13 * 0x100) * 5 + 1) & 0x7ff) *
                          0x18 + 2) >> 4);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  return CONCAT44(in_EDX,uVar1 << 8);
}

/******************************************************************************
 * Function : sub_0b3850 (Ghidra: FUN_000b3850)
 * Prototype: undefined8 sub_0b3850(void);
 * Address  : 0xb3850 (Size: 201 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x849c8, 0x85ba4, 0x85df8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b3850(void)

{
  byte bVar1;
  int iVar2;
  undefined2 *in_EAX;
  undefined4 in_EDX;
  uint uVar3;
  byte bStack_17;
  byte bStack_13;
  
  bStack_13 = (byte)((ushort)in_EAX[1] >> 8);
  bStack_17 = (byte)((ushort)*in_EAX >> 8);
  iVar2 = ((uint)bStack_17 + (uint)bStack_13 * 0x100) * 5;
  bVar1 = *(byte *)((int)&DAT_0019e973 +
                   (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18 + 2);
  if ((bVar1 & 0xe) == 0) {
    uVar3 = (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0xfffffff) >> 0x18;
    if (0xe < uVar3) {
      uVar3 = 0xf;
    }
  }
  else {
    uVar3 = 8 - ((bVar1 & 0xf) >> 1);
    if (0xf < uVar3) {
      uVar3 = 0xf;
    }
  }
  return CONCAT44(in_EDX,uVar3 << 8);
}

/******************************************************************************
 * Function : sub_0b391c (Ghidra: FUN_000b391c)
 * Prototype: void sub_0b391c(void);
 * Address  : 0xb391c (Size: 198 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7da18
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000b391c(void)

{
  byte bVar1;
  int iVar2;
  undefined2 *in_EAX;
  int iVar3;
  uint *in_EDX;
  uint uVar4;
  byte bStack_1b;
  byte bStack_17;
  
  *in_EDX = 0;
  in_EDX[1] = 0xf;
  bStack_17 = (byte)((ushort)in_EAX[1] >> 8);
  bStack_1b = (byte)((ushort)*in_EAX >> 8);
  iVar2 = ((uint)bStack_1b + (uint)bStack_17 * 0x100) * 5;
  iVar3 = (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18;
  uVar4 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar3 + 2) >> 4);
  if (uVar4 <= *in_EDX) {
    uVar4 = *in_EDX;
  }
  *in_EDX = uVar4;
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar3 + 2);
  if ((bVar1 & 0xe) == 0) {
    uVar4 = (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0xfffffff) >> 0x18;
    if (in_EDX[1] <= uVar4) {
      uVar4 = in_EDX[1];
    }
  }
  else {
    uVar4 = 8 - ((bVar1 & 0xf) >> 1);
    if (in_EDX[1] < uVar4) {
      uVar4 = in_EDX[1];
    }
  }
  in_EDX[1] = uVar4;
  return;
}

/******************************************************************************
 * Function : sub_0b39e4 (Ghidra: FUN_000b39e4)
 * Prototype: undefined8 sub_0b39e4(void);
 * Address  : 0xb39e4 (Size: 125 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x102c0, 0x171e4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000b39e4(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  iVar2 = (*(uint *)((int)&DAT_00279203 +
                    (uint)CONCAT11(*(undefined1 *)(in_EAX + 3),*(undefined1 *)(in_EAX + 1)) * 5 + 1)
          & 0x7ff) * 0x18;
  bVar1 = *(byte *)((int)&DAT_0019e973 + iVar2 + 2);
  if ((bVar1 & 0xf0) == 0) {
    uVar3 = (uint)*(ushort *)
                   (&DAT_002e8c11 + (*(int *)((int)&DAT_0019e973 + iVar2 + 3) >> 0x10) * 2);
  }
  else {
    uVar3 = *(int *)((int)&DAT_0019e977 + (uint)(bVar1 >> 4) * 2 + iVar2) >> 0x10;
  }
  return CONCAT44(in_EDX,(uint)((uVar3 & 0xfffffffe) == 0x28));
}

/******************************************************************************
 * Function : sub_0b3a64 (Ghidra: FUN_000b3a64)
 * Prototype: ulonglong sub_0b3a64(void);
 * Address  : 0xb3a64 (Size: 151 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8bde8
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong FUN_000b3a64(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 in_EDX;
  
  uVar1 = *(uint *)(in_EAX + 1);
  if (((uVar1 >> 0x1c & (uint)DAT_00379395) != 0) && ((uVar1 & 0x7ff) == 0)) {
    return CONCAT44(in_EDX,uVar1) & 0xffffffff000007ff;
  }
  if ((*(uint *)(in_EAX + 1) >> 0x1c & (uint)DAT_00379395) == 0) {
    iVar2 = DAT_002e6f23 * 4;
    uVar1 = DAT_002e6f23;
  }
  else {
    uVar1 = *(uint *)(in_EAX + 1) & 0x7ff;
    iVar2 = uVar1 << 2;
  }
  iVar2 = (iVar2 - uVar1) * 8;
  uVar1 = (uint)(*(byte *)((int)&DAT_0019e973 + iVar2 + 2) >> 4);
  if (uVar1 == 0) {
    return CONCAT44(in_EDX,*(int *)((int)&DAT_0019e973 + iVar2 + 3) >> 0x10);
  }
  return CONCAT44(in_EDX,(uint)*(ushort *)
                                ((int)&DAT_001aa97b +
                                (*(int *)((int)&DAT_0019e977 + uVar1 * 2 + iVar2) >> 0x10) * 0x12));
}

/******************************************************************************
 * Function : sub_0b3afc (Ghidra: FUN_000b3afc)
 * Prototype: byte sub_0b3afc(void);
 * Address  : 0xb3afc (Size: 18 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x3fc39, 0xdccfc, 0xdcd44, 0xddb5c, 0xde008, 0xde074, 0xe25c4, 0xe2a14, 0xe2c58
 * Callees  : 0 -> 
 ******************************************************************************/
byte FUN_000b3afc(void)

{
  int in_EAX;
  int in_EDX;
  
  return (&DAT_00269203)[in_EAX + in_EDX * 0x100] & 0x10;
}

/******************************************************************************
 * Function : sub_0b3b10 (Ghidra: FUN_000b3b10)
 * Prototype: void sub_0b3b10(void);
 * Address  : 0xb3b10 (Size: 71 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 20 -> 0x23250, 0x26b04, 0x39901, 0x4baad, 0x4efd4, 0x66dc2, 0x67e04, 0x6e8fc, 0x711f3, 0x71416 ...
 * Callees  : 3 -> 0x50c38, 0x50ca9, 0xb28e8
 ******************************************************************************/
void FUN_000b3b10(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined4 *in_EDX;
  byte bVar2;
  
  bVar2 = 0;
  if ((*(char *)(in_EAX + 0xe) == *(char *)((int)in_EDX + 1)) &&
     (*(char *)(in_EAX + 0x10) == *(char *)((int)in_EDX + 3))) {
    *(undefined4 *)(in_EAX + 0xd) = *in_EDX;
    *(undefined2 *)(in_EAX + 0x11) = *(undefined2 *)(in_EDX + 1);
  }
  else {
    FUN_00050ca9();
    *(undefined4 *)(in_EAX + 0xd) = *in_EDX;
    *(undefined2 *)(in_EAX + 0x11 + (uint)bVar2 * -8) =
         *(undefined2 *)(in_EDX + (uint)bVar2 * -2 + 1);
    FUN_00050c38();
  }
  uVar1 = FUN_000b28e8();
  *(undefined2 *)(in_EAX + 0x60) = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_0b3b58 (Ghidra: FUN_000b3b58)
 * Prototype: undefined4 sub_0b3b58(void);
 * Address  : 0xb3b58 (Size: 138 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 59 -> 0x10f6c, 0x1107a, 0x1173f, 0x2649f, 0x26b04, 0x2796f, 0x286d5, 0x28aa0, 0x28bae, 0x28d85 ...
 * Callees  : 4 -> 0x64ae7, 0x7dbc0, 0x827fc, 0xb28e8
 ******************************************************************************/
undefined4 FUN_000b3b58(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined1 extraout_CL;
  byte in_DL;
  undefined1 unaff_BL;
  byte bVar4;
  undefined4 local_10;
  undefined2 local_c [2];
  
  bVar4 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_10 = CONCAT31((uint3)in_DL,0x80);
  local_10 = CONCAT13(unaff_BL,CONCAT12(0x80,(undefined2)local_10));
  local_c[0] = FUN_000b28e8();
  iVar3 = FUN_0007dbc0();
  if ((iVar3 == 0) && (cVar2 = FUN_000827fc(), cVar2 != '\0')) {
    *(undefined1 *)(iVar1 + 0x88) = extraout_CL;
    FUN_00064ae7();
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    *(undefined4 *)(iVar1 + 0x2d) = local_10;
    *(undefined2 *)(iVar1 + 0x31 + (uint)bVar4 * -8) = local_c[(uint)bVar4 * -4];
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0b3be4 (Ghidra: FUN_000b3be4)
 * Prototype: void sub_0b3be4(void);
 * Address  : 0xb3be4 (Size: 26 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x11342, 0x114f6, 0x171e4, 0x3d3f3, 0x3de04, 0x50349, 0x67fd3, 0x73d41, 0x744d5
 * Callees  : 1 -> 0xb3b58
 ******************************************************************************/
void FUN_000b3be4(void)

{
  FUN_000b3b58();
  return;
}

/******************************************************************************
 * Function : sub_0b3c00 (Ghidra: FUN_000b3c00)
 * Prototype: uint sub_0b3c00(void);
 * Address  : 0xb3c00 (Size: 141 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2855c, 0x2864e, 0x28eb4, 0xaafd4, 0xb3c90
 * Callees  : 3 -> 0x64ae7, 0x827fc, 0xd1444
 ******************************************************************************/
uint FUN_000b3c00(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  undefined1 in_CL;
  byte bVar3;
  undefined4 local_18;
  undefined2 auStack_14 [2];
  undefined1 local_10;
  
  bVar3 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_10 = in_CL;
  FUN_000d1444(0x80);
  uVar2 = FUN_000827fc();
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffff0000;
  }
  else {
    *(undefined1 *)(iVar1 + 0x88) = local_10;
    FUN_00064ae7();
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    uVar2 = 1;
    *(undefined4 *)(iVar1 + 0x2d) = local_18;
    *(undefined2 *)(iVar1 + 0x31 + (uint)bVar3 * -8) = auStack_14[(uint)bVar3 * -4];
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0b3c90 (Ghidra: FUN_000b3c90)
 * Prototype: void sub_0b3c90(void);
 * Address  : 0xb3c90 (Size: 26 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xac094
 * Callees  : 1 -> 0xb3c00
 ******************************************************************************/
void FUN_000b3c90(void)

{
  FUN_000b3c00();
  return;
}

/******************************************************************************
 * Function : sub_0b3cac (Ghidra: FUN_000b3cac)
 * Prototype: undefined4 sub_0b3cac(void);
 * Address  : 0xb3cac (Size: 87 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x390af, 0x390e3
 * Callees  : 2 -> 0x64ae7, 0xb28e8
 ******************************************************************************/
undefined4 FUN_000b3cac(void)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int in_EAX;
  undefined1 extraout_CL;
  undefined1 in_DL;
  undefined1 unaff_BL;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  cVar2 = FUN_00064ae7();
  if (cVar2 != '\0') {
    *(undefined1 *)(iVar1 + 0x2d) = extraout_CL;
    *(undefined1 *)(iVar1 + 0x2e) = in_DL;
    *(undefined1 *)(iVar1 + 0x30) = unaff_BL;
    *(undefined1 *)(iVar1 + 0x2f) = extraout_CL;
    uVar3 = FUN_000b28e8();
    *(undefined2 *)(iVar1 + 0x31) = uVar3;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0b3d04 (Ghidra: FUN_000b3d04)
 * Prototype: undefined4 sub_0b3d04(void);
 * Address  : 0xb3d04 (Size: 138 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x641a6, 0x645dd, 0x64703, 0x64900, 0xb3d90
 * Callees  : 4 -> 0x64ae7, 0x7dbc0, 0x827fc, 0xb28e8
 ******************************************************************************/
undefined4 FUN_000b3d04(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined1 extraout_CL;
  byte in_DL;
  undefined1 unaff_BL;
  byte bVar4;
  undefined4 local_10;
  undefined2 local_c [2];
  
  bVar4 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_10 = CONCAT31((uint3)in_DL,0x80);
  local_10 = CONCAT13(unaff_BL,CONCAT12(0x80,(undefined2)local_10));
  local_c[0] = FUN_000b28e8();
  iVar3 = FUN_0007dbc0();
  if ((iVar3 == 0) && (cVar2 = FUN_000827fc(), cVar2 != '\0')) {
    *(undefined1 *)(iVar1 + 0x88) = extraout_CL;
    FUN_00064ae7();
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    *(undefined4 *)(iVar1 + 0x2d) = local_10;
    *(undefined2 *)(iVar1 + 0x31 + (uint)bVar4 * -8) = local_c[(uint)bVar4 * -4];
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0b3d90 (Ghidra: FUN_000b3d90)
 * Prototype: void sub_0b3d90(void);
 * Address  : 0xb3d90 (Size: 26 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1671a
 * Callees  : 1 -> 0xb3d04
 ******************************************************************************/
void FUN_000b3d90(void)

{
  FUN_000b3d04();
  return;
}

/******************************************************************************
 * Function : sub_0b3dac (Ghidra: FUN_000b3dac)
 * Prototype: undefined8 sub_0b3dac(void);
 * Address  : 0xb3dac (Size: 1021 bytes)
 * Module   : move.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 17 -> 0x10c5f, 0x22c2a, 0x39118, 0x50c38, 0x50ca9, 0x7dbc0, 0x7e134, 0x7f804, 0x81d00, 0x82cac ...
 ******************************************************************************/
undefined8 FUN_000b3dac(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined2 auStack_82c [1014];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  short local_34 [4];
  undefined4 local_2c;
  undefined2 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar7 = 0;
  puVar6 = &uStack_3c;
  local_1c = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_2c = *(undefined4 *)(in_EAX + 0xd);
  uStack_28 = *(undefined2 *)(in_EAX + 0x11);
  local_24 = *(int *)(in_EAX + 0x36) >> 0x10;
  local_20 = *(int *)(in_EAX + 0x3a) >> 0x10;
  *(byte *)(local_1c + 1) = *(byte *)(local_1c + 1) & 0xf7;
  uStack_40 = 0xb3e03;
  iVar4 = FUN_0007dbc0();
  iVar5 = extraout_ECX;
  if (iVar4 != 0) {
    uStack_3c = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(&local_38 + (uint)bVar7 * -2) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
    uStack_40 = 0xb3e18;
    cVar2 = FUN_000b516c();
    iVar5 = extraout_ECX_00;
    if (cVar2 != '\0') {
      if ((*(char *)(in_EAX + 0xe) == uStack_3c._1_1_) &&
         (uStack_3c._3_1_ == *(char *)(in_EAX + 0x10))) {
        *(undefined4 *)(in_EAX + 0xd) = uStack_3c;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) =
             *(undefined2 *)(&local_38 + (uint)bVar7 * -2);
      }
      else {
        uStack_40 = 0xb3e3c;
        FUN_00050ca9();
        *(undefined4 *)(in_EAX + 0xd) = uStack_3c;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) =
             *(undefined2 *)(&local_38 + (uint)bVar7 * -2);
        uStack_40 = 0xb3e49;
        FUN_00050c38();
      }
      uStack_40 = 0xb3e5b;
      uVar3 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x60) = uVar3;
      iVar5 = extraout_ECX_01;
    }
    *(byte *)(local_1c + 1) = *(byte *)(local_1c + 1) | 8;
  }
  if (*(char *)(in_EAX + 0x1a) == '\x16') {
    uStack_40 = 0xb3e78;
    iVar4 = FUN_00081d00();
    iVar5 = extraout_ECX_02;
    if ((iVar4 != 0) && (3 < *(byte *)(in_EAX + 0x48))) {
      iVar5 = 0;
      local_24 = 0;
    }
  }
  if (((local_24 != 0) || (iVar5 != 0)) || (local_20 != 0)) {
    if (local_24 < -0x100) {
      local_24 = -0x100;
    }
    else if (0x100 < local_24) {
      local_24 = 0x100;
    }
    if (iVar5 < -0x100) {
      iVar5 = -0x100;
    }
    else if (0x100 < iVar5) {
      iVar5 = 0x100;
    }
    if (local_20 < -0x100) {
      local_20 = -0x100;
    }
    else if (0x100 < local_20) {
      local_20 = 0x100;
    }
    local_34[0] = *(short *)(in_EAX + 0xd) + (short)local_24;
    local_34[2] = *(short *)(in_EAX + 0x11) + (short)local_20;
    local_34[1] = *(short *)(in_EAX + 0xf) + (short)iVar5;
    if ((*(byte *)(in_EAX + 0x25) & 0x20) == 0) {
      uStack_40 = 0xb3f91;
      iVar5 = FUN_0007dbc0();
      if (iVar5 != 0) {
        uStack_40 = 0xb3fa0;
        iVar5 = FUN_0007e134();
        if (iVar5 == 0) {
          uStack_40 = 0xb3fea;
          uVar3 = FUN_000b28e8();
          local_34[2] = uVar3;
        }
        else {
          uStack_40 = 0xb3faf;
          FUN_000c6ec0();
          if (*(short *)(local_1c + 0x1d0) == 0) {
            uStack_40 = 0xb3fcc;
            FUN_00022c2a();
          }
          uStack_40 = 0xb3fd9;
          FUN_000c7218();
        }
      }
    }
    else {
      uStack_40 = 0xb3f44;
      iVar5 = FUN_0007dbc0();
      if (iVar5 != 0) {
        uStack_40 = 0xb3f57;
        FUN_000c7058();
        if (*(short *)(local_1c + 0x1d0) == 0) {
          uStack_40 = 0xb3f74;
          FUN_00022c2a();
        }
        uStack_40 = 0xb3f81;
        FUN_000c7218();
      }
    }
    puVar6 = &uStack_3c;
    if ((*(byte *)(local_1c + 1) & 0x10) != 0) {
      uStack_40 = 0xffffffff;
      iVar5 = FUN_0007f804();
      puVar6 = &uStack_40;
      if (iVar5 != 0) {
        local_38 = *(undefined4 *)(in_EAX + 0xd);
        local_34[(uint)bVar7 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar7 * -8);
        puVar6 = &uStack_40;
      }
    }
    if ((*(char *)((int)puVar6 + 9) != *(char *)(in_EAX + 0xe)) ||
       (*(char *)(in_EAX + 0x10) != *(char *)((int)puVar6 + 0xb))) {
      if (*(char *)(in_EAX + 0x1a) == '\b') {
        *(undefined4 *)((int)puVar6 + -4) = 0xb4058;
        FUN_00039118();
      }
      if ((*(byte *)(in_EAX + 0xe) / 3 != *(byte *)((int)puVar6 + 9) / 3) ||
         (*(byte *)(in_EAX + 0x10) / 3 != *(byte *)((int)puVar6 + 0xb) / 3)) {
        *(undefined4 *)((int)puVar6 + -4) = 0xb40b3;
        FUN_00082cac();
        iVar5 = (uint)*(byte *)(in_EAX + 7) * 0x29;
        if (*(int *)(&DAT_0018c4a8 + iVar5) != 0) {
          pcVar1 = *(code **)(&DAT_0018c4a8 + iVar5);
          *(undefined4 *)((int)puVar6 + -4) = 0xb40d7;
          (*pcVar1)();
        }
      }
    }
    if ((*(char *)(in_EAX + 0xe) == *(char *)((int)puVar6 + 9)) &&
       (*(char *)((int)puVar6 + 0xb) == *(char *)(in_EAX + 0x10))) {
      *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)((int)puVar6 + 8);
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) =
           *(undefined2 *)((int)puVar6 + (uint)bVar7 * -8 + 0xc);
    }
    else {
      *(undefined4 *)((int)puVar6 + -4) = 0xb40f9;
      FUN_00050ca9();
      *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)((int)puVar6 + 8);
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) =
           *(undefined2 *)((int)puVar6 + (uint)bVar7 * -8 + 0xc);
      *(undefined4 *)((int)puVar6 + -4) = 0xb4106;
      FUN_00050c38();
    }
    *(undefined4 *)((int)puVar6 + -4) = 0xb411c;
    uVar3 = FUN_000b28e8();
    *(undefined2 *)(in_EAX + 0x60) = uVar3;
  }
  *(undefined4 *)((int)puVar6 + -4) = 0xb413f;
  FUN_000e66ec();
  *(undefined4 *)((int)puVar6 + -4) = 0xb4160;
  iVar5 = FUN_00010c5f();
  if (iVar5 < 0x201) {
    *(undefined4 *)((int)puVar6 + -4) = 0xb4192;
    uVar3 = FUN_000dc354();
    *(undefined2 *)(*(int *)((int)puVar6 + 0x20) + 9) = uVar3;
  }
  else {
    *(undefined4 *)((int)puVar6 + -4) = 0xb4173;
    uVar3 = FUN_000dc354();
    iVar5 = *(int *)((int)puVar6 + 0x20);
    *(undefined2 *)(iVar5 + 9) = uVar3;
    *(short *)(iVar5 + 9) = -*(short *)(iVar5 + 9);
  }
  return CONCAT44(*(undefined4 *)((int)puVar6 + 0x30),1);
}

/******************************************************************************
 * Function : dk_shot_has_hit_thing_0b41d8 (Ghidra: FUN_000b41d8)
 * Prototype: longlong dk_shot_has_hit_thing_0b41d8(void);
 * Address  : 0xb41d8 (Size: 626 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp:538 ("Shot has no hit thing type")
 * Naming   : String 'Shot has no hit thing type'
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 10 -> 0x50c38, 0x50ca9, 0x6bdda, 0x6ca16, 0x6cee6, 0x7dbc0, 0x7f730, 0x7f804, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x16adcb: "move.cpp"
 *   - 0x16adb0: "Shot has no hit thing type"
 ******************************************************************************/
longlong FUN_000b41d8(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  int iVar5;
  short *psVar6;
  uint unaff_ESI;
  int iVar7;
  byte bVar8;
  undefined2 auStack_818 [1018];
  undefined4 uStack_24;
  short local_20;
  short sStack_1e;
  short local_1c;
  
  bVar8 = 0;
  psVar6 = &local_20;
  sStack_1e = (short)((uint)*(undefined4 *)(in_EAX + 0xd) >> 0x10);
  iVar7 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  uVar3 = 0;
  iVar4 = *(int *)(in_EAX + 0x36) >> 0x10;
  iVar5 = *(int *)(in_EAX + 0x38) >> 0x10;
  iVar2 = *(int *)(in_EAX + 0x3a) >> 0x10;
  if (iVar4 < -0x100) {
    iVar4 = -0x100;
  }
  else if (0x100 < iVar4) {
    iVar4 = 0x100;
  }
  if (iVar5 < -0x100) {
    iVar5 = -0x100;
  }
  else if (0x100 < iVar5) {
    iVar5 = 0x100;
  }
  if (iVar2 < -0x100) {
    iVar2 = -0x100;
  }
  else if (0x100 < iVar2) {
    iVar2 = 0x100;
  }
  local_20 = (short)*(undefined4 *)(in_EAX + 0xd) + (short)iVar4;
  sStack_1e = sStack_1e + (short)iVar5;
  local_1c = *(short *)(in_EAX + 0x11) + (short)iVar2;
  if ((&DAT_00188cbc)[iVar7] == '\0') {
    psVar6 = &local_20;
    switch(*(undefined1 *)(in_EAX + 0x16)) {
    case 1:
      psVar6 = (short *)&uStack_24;
      uStack_24 = 0;
      uVar3 = FUN_0007f804();
      break;
    case 2:
      psVar6 = (short *)&uStack_24;
      uStack_24 = 0;
      uVar3 = FUN_0007f804();
      break;
    case 3:
      psVar6 = (short *)&uStack_24;
      uStack_24 = 0;
      uVar3 = FUN_0007f804();
      break;
    case 4:
      psVar6 = (short *)&uStack_24;
      uStack_24 = 0;
      uVar3 = FUN_0007f804();
      break;
    default:
      uStack_24 = 0xb437f;
      FUN_000ddaf0(); /* LbErrorLog("move.cpp", line 538, "Shot has no hit thing type") */
      uVar3 = extraout_ECX;
      psVar6 = &local_20;
      break;
    case 7:
      psVar6 = (short *)&uStack_24;
      uStack_24 = 0;
      uVar3 = FUN_0007f804();
      break;
    case 8:
      break;
    case 9:
      uStack_24 = 0;
      uVar3 = FUN_0007f804();
      psVar6 = (short *)&uStack_24;
      if ((uVar3 == 0) &&
         (uVar3 = FUN_0007f730(), psVar6 = (short *)&uStack_24, DAT_001ae9fc < uVar3)) {
        *(undefined2 *)(uVar3 + 0x5e) = 0xffff;
        *(undefined2 *)(in_EAX + 0x5e) = 0xffff;
        return (ulonglong)unaff_ESI << 0x20;
      }
    }
    if (uVar3 != 0) {
      *(undefined4 *)((int)psVar6 + -4) = 0xb438e;
      iVar2 = FUN_0006bdda();
      if (iVar2 != 0) {
        return (ulonglong)*(uint *)((int)psVar6 + 0x14) << 0x20;
      }
    }
  }
  if ((*(byte *)(in_EAX + 0x25) & 0x10) == 0) {
    *(undefined4 *)((int)psVar6 + -4) = 0xb43ad;
    iVar2 = FUN_0007dbc0();
    if (iVar2 != 0) {
      *(undefined4 *)((int)psVar6 + -4) = 0xb43ba;
      iVar2 = FUN_0006ca16();
      if (iVar2 != 0) {
        return (ulonglong)*(uint *)((int)psVar6 + 0x14) << 0x20;
      }
    }
  }
  else if ((&DAT_00188cdc)[iVar7] != '\0') {
    *(undefined4 *)((int)psVar6 + -4) = 0xb43d9;
    iVar2 = FUN_0007dbc0();
    if (iVar2 != 0) {
      *(undefined4 *)((int)psVar6 + -4) = 0xb43e6;
      iVar2 = FUN_0006cee6();
      if (iVar2 != 0) {
        return (ulonglong)*(uint *)((int)psVar6 + 0x14) << 0x20;
      }
    }
  }
  if ((*(char *)(in_EAX + 0xe) == *(char *)((int)psVar6 + 1)) &&
     (*(char *)((int)psVar6 + 3) == *(char *)(in_EAX + 0x10))) {
    *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)psVar6;
    *(undefined2 *)(in_EAX + 0x11 + (uint)bVar8 * -8) =
         *(undefined2 *)((int)psVar6 + ((uint)bVar8 * -2 + 1) * 4);
  }
  else {
    *(undefined4 *)((int)psVar6 + -4) = 0xb4416;
    FUN_00050ca9();
    *(undefined4 *)(extraout_ECX_00 + 0xd) = *(undefined4 *)psVar6;
    *(undefined2 *)(extraout_ECX_00 + 0x11 + (uint)bVar8 * -8) =
         *(undefined2 *)((int)psVar6 + ((uint)bVar8 * -2 + 1) * 4);
    *(undefined4 *)((int)psVar6 + -4) = 0xb4423;
    FUN_00050c38();
  }
  *(undefined4 *)((int)psVar6 + -4) = 0xb4437;
  uVar1 = FUN_000b28e8();
  *(undefined2 *)(extraout_ECX_01 + 0x60) = uVar1;
  return CONCAT44(*(undefined4 *)((int)psVar6 + 0x14),1);
}

/******************************************************************************
 * Function : sub_0b444c (Ghidra: FUN_000b444c)
 * Prototype: undefined8 sub_0b444c(void);
 * Address  : 0xb444c (Size: 357 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe25c4
 * Callees  : 8 -> 0x50c38, 0x50ca9, 0x6e538, 0x7dbc0, 0xb28e8, 0xc7058, 0xc7218, 0xc7550
 ******************************************************************************/
undefined8 FUN_000b444c(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  undefined4 *extraout_EDX;
  int iVar4;
  short *psVar5;
  byte bVar6;
  undefined2 auStack_820 [1018];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  short local_1c;
  short local_1a;
  short local_18;
  
  bVar6 = 0;
  iVar2 = *(int *)(in_EAX + 0x36) >> 0x10;
  iVar3 = *(int *)(in_EAX + 0x38) >> 0x10;
  iVar4 = *(int *)(in_EAX + 0x3a) >> 0x10;
  if (((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) {
    uStack_20 = 0xb459f;
    uVar1 = FUN_000b28e8();
    *(undefined2 *)(in_EAX + 0x60) = uVar1;
    return CONCAT44(in_EDX,1);
  }
  if (iVar2 < -0x100) {
    iVar2 = -0x100;
  }
  else if (0x100 < iVar2) {
    iVar2 = 0x100;
  }
  if (iVar3 < -0x100) {
    iVar3 = -0x100;
  }
  else if (0x100 < iVar3) {
    iVar3 = 0x100;
  }
  if (iVar4 < -0x100) {
    iVar4 = -0x100;
  }
  else if (0x100 < iVar4) {
    iVar4 = 0x100;
  }
  local_1c = *(short *)(in_EAX + 0xd) + (short)iVar2;
  local_1a = *(short *)(in_EAX + 0xf) + (short)iVar3;
  local_18 = *(short *)(in_EAX + 0x11) + (short)iVar4;
  uStack_20 = 0xb44f3;
  iVar2 = FUN_0007dbc0();
  psVar5 = &local_1c;
  if (iVar2 != 0) {
    uStack_20 = 0xb4500;
    FUN_000c7058();
    uStack_20 = 0xb450d;
    FUN_000c7218();
    uStack_20 = 0xb4518;
    FUN_000c7550();
    psVar5 = &local_1c;
    if (*(char *)(in_EAX + 0x1a) == '\x06') {
      uStack_20 = 0x100;
      uStack_24 = 1;
      uStack_28 = 0;
      psVar5 = (short *)&uStack_2c;
      uStack_2c = 3;
      FUN_0006e538();
    }
  }
  if ((*(char *)(in_EAX + 0xe) == *(char *)((int)psVar5 + 1)) &&
     (*(char *)((int)psVar5 + 3) == *(char *)(in_EAX + 0x10))) {
    *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)psVar5;
    *(undefined2 *)(in_EAX + 0x11 + (uint)bVar6 * -8) =
         *(undefined2 *)((int)psVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  else {
    *(undefined4 *)((int)psVar5 + -4) = 0xb4560;
    FUN_00050ca9();
    *(undefined4 *)(in_EAX + 0xd) = *extraout_EDX;
    *(undefined2 *)(in_EAX + 0x11 + (uint)bVar6 * -8) =
         *(undefined2 *)(extraout_EDX + (uint)bVar6 * -2 + 1);
    *(undefined4 *)((int)psVar5 + -4) = 0xb456f;
    FUN_00050c38();
  }
  *(undefined4 *)((int)psVar5 + -4) = 0xb4583;
  uVar1 = FUN_000b28e8();
  *(undefined2 *)(in_EAX + 0x60) = uVar1;
  return CONCAT44(*(undefined4 *)((int)psVar5 + 0x10),1);
}

/******************************************************************************
 * Function : sub_0b45b4 (Ghidra: FUN_000b45b4)
 * Prototype: undefined8 sub_0b45b4(void);
 * Address  : 0xb45b4 (Size: 733 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe26dc
 * Callees  : 12 -> 0x24998, 0x50c38, 0x50ca9, 0x6e538, 0x7dbc0, 0xb2398, 0xb28e8, 0xc7058, 0xc7218, 0xc7550 ...
 ******************************************************************************/
undefined8 FUN_000b45b4(void)

{
  char cVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  byte bVar11;
  undefined2 auStack_828 [1018];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  short local_24;
  short sStack_22;
  short local_20;
  undefined *local_1c;
  
  bVar11 = 0;
  psVar7 = &local_24;
  psVar8 = &local_24;
  psVar9 = &local_24;
  psVar10 = &local_24;
  sStack_22 = (short)((uint)*(undefined4 *)(in_EAX + 0xd) >> 0x10);
  local_1c = &DAT_00189934 + (uint)*(byte *)(in_EAX + 0x1a) * 0x4e;
  iVar6 = *(int *)(in_EAX + 0x36) >> 0x10;
  iVar3 = *(int *)(in_EAX + 0x3a) >> 0x10;
  iVar5 = *(int *)(in_EAX + 0x38) >> 0x10;
  if (iVar6 < -0x100) {
    iVar6 = -0x100;
  }
  else if (0x100 < iVar6) {
    iVar6 = 0x100;
  }
  if (iVar5 < -0x100) {
    iVar5 = -0x100;
  }
  else if (0x100 < iVar5) {
    iVar5 = 0x100;
  }
  if (iVar3 < -0x100) {
    iVar3 = -0x100;
  }
  else if (0x100 < iVar3) {
    iVar3 = 0x100;
  }
  local_24 = (short)*(undefined4 *)(in_EAX + 0xd) + (short)iVar6;
  sStack_22 = sStack_22 + (short)iVar5;
  local_20 = *(short *)(in_EAX + 0x11) + (short)iVar3;
  uStack_28 = 0xb4678;
  iVar3 = FUN_000dd93c();
  if (iVar3 == 0) {
    psVar10 = &local_24;
    if ((*(byte *)(in_EAX + 0x25) & 0x10) == 0) {
      uStack_28 = 0xb4695;
      iVar3 = FUN_000dd964();
      psVar10 = &local_24;
      if (iVar3 == 0) {
        uStack_28 = 0xb46a6;
        iVar3 = FUN_0007dbc0();
        psVar10 = &local_24;
        if (iVar3 != 0) {
          uStack_28 = 0xb46b7;
          FUN_000c7058();
          uStack_28 = 0xb46c6;
          FUN_000c7218();
          psVar10 = &local_24;
          if (((extraout_ECX & 4) != 0) && (psVar10 = &local_24, local_1c[0x15] != '\0')) {
            uStack_28 = 0xb46ee;
            uVar4 = FUN_000b2398();
            if (uVar4 == 0x27) {
              if (*(short *)(local_1c + 0x29) != 0) {
                uStack_28 = 0xb471b;
                FUN_00024998();
              }
              if (*(short *)(local_1c + 0x2b) != 0) {
                uStack_28 = (uint)*(ushort *)(local_1c + 0x2d);
                local_2c = 2;
                uStack_30 = 0;
                psVar7 = (short *)&uStack_34;
                uStack_34 = 3;
                FUN_0006e538();
              }
              cVar1 = *(char *)(*(int *)((int)psVar7 + 8) + 0x2f);
              psVar10 = psVar7;
            }
            else if ((uVar4 & 0xfffffffe) == 0x28) {
              if (*(short *)(local_1c + 0x30) != 0) {
                uStack_28 = 0xb4793;
                FUN_00024998();
              }
              if (*(short *)(local_1c + 0x32) != 0) {
                uStack_28 = (uint)*(ushort *)(local_1c + 0x34);
                local_2c = 2;
                uStack_30 = 0;
                psVar8 = (short *)&uStack_34;
                uStack_34 = 3;
                FUN_0006e538();
              }
              cVar1 = *(char *)(*(int *)((int)psVar8 + 8) + 0x36);
              psVar10 = psVar8;
            }
            else {
              if (*(short *)(local_1c + 0x22) != 0) {
                uStack_28 = 0xb47f0;
                FUN_00024998();
              }
              if (*(short *)(local_1c + 0x24) != 0) {
                uStack_28 = (uint)*(ushort *)(local_1c + 0x26);
                local_2c = 2;
                uStack_30 = 0;
                psVar9 = (short *)&uStack_34;
                uStack_34 = 3;
                FUN_0006e538();
              }
              cVar1 = *(char *)(*(int *)((int)psVar9 + 8) + 0x28);
              psVar10 = psVar9;
            }
            if (cVar1 != '\0') {
              *(undefined2 *)(in_EAX + 0x5e) = 0;
            }
          }
          *(undefined4 *)((int)psVar10 + -4) = 0xb483d;
          FUN_000c7550();
        }
      }
    }
    if ((*(char *)(in_EAX + 0xe) == *(char *)((int)psVar10 + 1)) &&
       (*(char *)((int)psVar10 + 3) == *(char *)(in_EAX + 0x10))) {
      *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)psVar10;
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar11 * -8) =
           *(undefined2 *)((int)psVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    else {
      *(undefined4 *)((int)psVar10 + -4) = 0xb485d;
      FUN_00050ca9();
      *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)psVar10;
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar11 * -8) =
           *(undefined2 *)((int)psVar10 + ((uint)bVar11 * -2 + 1) * 4);
      *(undefined4 *)((int)psVar10 + -4) = 0xb486a;
      FUN_00050c38();
    }
    *(undefined4 *)((int)psVar10 + -4) = 0xb487e;
    uVar2 = FUN_000b28e8();
    *(undefined2 *)(in_EAX + 0x60) = uVar2;
  }
  return CONCAT44(*(undefined4 *)((int)psVar10 + 0x18),1);
}

/******************************************************************************
 * Function : sub_0b4894 (Ghidra: FUN_000b4894)
 * Prototype: undefined8 sub_0b4894(void);
 * Address  : 0xb4894 (Size: 255 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe2a14
 * Callees  : 8 -> 0x50c38, 0x50ca9, 0x7dbc0, 0xb28e8, 0xc6ec0, 0xc7218, 0xc7550, 0xdd93c
 ******************************************************************************/
undefined8 FUN_000b4894(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int extraout_ECX_02;
  short sVar4;
  undefined4 in_EDX;
  short sVar5;
  byte bVar6;
  char cStack_1b;
  undefined1 uStack_1a;
  char cStack_19;
  short local_18 [2];
  
  bVar6 = 0;
  if (((*(short *)(in_EAX + 0x38) == 0) && (*(short *)(in_EAX + 0x3a) == 0)) &&
     (*(short *)(in_EAX + 0x3c) == 0)) {
    uVar1 = FUN_000b28e8();
    *(undefined2 *)(extraout_ECX_02 + 0x60) = uVar1;
    return CONCAT44(in_EDX,1);
  }
  sVar5 = (short)*(undefined4 *)(in_EAX + 0xd) + *(short *)(in_EAX + 0x38);
  cStack_1b = (char)((ushort)sVar5 >> 8);
  sVar4 = (short)((uint)*(undefined4 *)(in_EAX + 0xd) >> 0x10) + *(short *)(in_EAX + 0x3a);
  uStack_1a = (undefined1)sVar4;
  cStack_19 = (char)((ushort)sVar4 >> 8);
  local_18[0] = *(short *)(in_EAX + 0x11) + *(short *)(in_EAX + 0x3c);
  iVar2 = FUN_000dd93c();
  iVar3 = extraout_ECX;
  if (iVar2 == 0) {
    iVar2 = FUN_0007dbc0();
    iVar3 = extraout_ECX_00;
    if (iVar2 != 0) {
      FUN_000c6ec0();
      FUN_000c7218();
      FUN_000c7550();
      iVar3 = extraout_ECX_01;
    }
  }
  if ((*(char *)(iVar3 + 0xe) == cStack_1b) && (cStack_19 == *(char *)(iVar3 + 0x10))) {
    *(uint *)(iVar3 + 0xd) = CONCAT13(cStack_19,CONCAT12(uStack_1a,sVar5));
    *(short *)(iVar3 + 0x11 + (uint)bVar6 * -8) = local_18[(uint)bVar6 * -4];
  }
  else {
    FUN_00050ca9();
    *(uint *)(iVar3 + 0xd) = CONCAT13(cStack_19,CONCAT12(uStack_1a,sVar5));
    *(short *)(iVar3 + 0x11 + (uint)bVar6 * -8) = local_18[(uint)bVar6 * -4];
    FUN_00050c38();
  }
  uVar1 = FUN_000b28e8();
  *(undefined2 *)(iVar3 + 0x60) = uVar1;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0b4994 (Ghidra: FUN_000b4994)
 * Prototype: undefined8 sub_0b4994(void);
 * Address  : 0xb4994 (Size: 303 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x24ab9
 * Callees  : 8 -> 0x50c38, 0x50ca9, 0x7dbc0, 0xb28e8, 0xc6ec0, 0xc7218, 0xc7550, 0xdd93c
 ******************************************************************************/
undefined8 FUN_000b4994(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  short sVar4;
  short sVar5;
  undefined4 in_EDX;
  int iVar6;
  undefined4 *extraout_EDX;
  int iVar7;
  byte bVar8;
  undefined4 local_1c;
  short local_18 [2];
  
  bVar8 = 0;
  iVar6 = *(int *)(in_EAX + 0x36) >> 0x10;
  iVar7 = *(int *)(in_EAX + 0x3a) >> 0x10;
  iVar3 = *(int *)(in_EAX + 0x38) >> 0x10;
  if (((iVar6 != 0) || (iVar3 != 0)) || (iVar7 != 0)) {
    if (iVar6 < -0x100) {
      iVar6 = -0x100;
    }
    else if (0x100 < iVar6) {
      iVar6 = 0x100;
    }
    if (iVar3 < -0x100) {
      iVar3 = -0x100;
    }
    else if (0x100 < iVar3) {
      iVar3 = 0x100;
    }
    if (iVar7 < -0x100) {
      iVar7 = -0x100;
    }
    else if (0x100 < iVar7) {
      iVar7 = 0x100;
    }
    sVar4 = *(short *)(in_EAX + 0xd) + (short)iVar6;
    sVar5 = *(short *)(in_EAX + 0xf) + (short)iVar3;
    local_1c = CONCAT22(sVar5,sVar4);
    uVar1 = local_1c;
    local_18[0] = *(short *)(in_EAX + 0x11) + (short)iVar7;
    iVar3 = FUN_000dd93c();
    if (iVar3 == 0) {
      iVar3 = FUN_0007dbc0();
      if (iVar3 != 0) {
        FUN_000c6ec0();
        FUN_000c7218();
        FUN_000c7550();
      }
    }
    local_1c._1_1_ = (char)((ushort)sVar4 >> 8);
    if ((*(char *)(in_EAX + 0xe) == local_1c._1_1_) &&
       (local_1c._3_1_ = (char)((ushort)sVar5 >> 8), *(char *)(in_EAX + 0x10) == local_1c._3_1_)) {
      *(undefined4 *)(in_EAX + 0xd) = uVar1;
      *(short *)(in_EAX + 0x11 + (uint)bVar8 * -8) = local_18[(uint)bVar8 * -4];
    }
    else {
      FUN_00050ca9();
      *(undefined4 *)(in_EAX + 0xd) = *extraout_EDX;
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar8 * -8) =
           *(undefined2 *)(extraout_EDX + (uint)bVar8 * -2 + 1);
      FUN_00050c38();
    }
    uVar2 = FUN_000b28e8();
    *(undefined2 *)(in_EAX + 0x60) = uVar2;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0b4ac4 (Ghidra: FUN_000b4ac4)
 * Prototype: void sub_0b4ac4(undefined1 param_1);
 * Address  : 0xb4ac4 (Size: 31 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x138c9, 0x15be4, 0x1671a, 0x168a2, 0x169a5, 0x16b29, 0x286d5, 0x3826c, 0x66247, 0x73607 ...
 * Callees  : 1 -> 0xb4ae4
 ******************************************************************************/
void FUN_000b4ac4(undefined1 param_1)

{
  undefined1 in_CL;
  
  FUN_000b4ae4(in_CL,param_1);
  return;
}

/******************************************************************************
 * Function : sub_0b4ae4 (Ghidra: FUN_000b4ae4)
 * Prototype: undefined4 sub_0b4ae4(byte param_1,char param_2);
 * Address  : 0xb4ae4 (Size: 331 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xb4ac4, 0xb4d88, 0xb4f00
 * Callees  : 4 -> 0x10010, 0x1009d, 0x1017e, 0xd18d0
 ******************************************************************************/
undefined4 FUN_000b4ae4(byte param_1,char param_2)

{
  short sVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  int in_EAX;
  int iVar5;
  char cVar6;
  byte bVar7;
  ushort local_18;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (param_2 != '\0') {
    bVar7 = *(char *)(in_EAX + 0x53) + 4;
    *(byte *)(in_EAX + 0x53) = bVar7;
    *(byte *)(in_EAX + 0x53) = bVar7 & 7;
  }
  local_18 = (ushort)param_1;
  cVar3 = FUN_000d18d0();
  if (param_1 != 0) {
    cVar6 = *(char *)(in_EAX + 0x53) + '\x04';
    *(char *)(in_EAX + 0x53) = cVar6;
    uVar4 = CONCAT11(cVar6,cVar3) & 0x7ff;
    cVar3 = (char)uVar4;
    *(char *)(in_EAX + 0x53) = (char)(uVar4 >> 8);
  }
  if ((cVar3 != '\x03') && (cVar3 != '\x02')) {
    if (cVar3 == '\x01') {
      return 1;
    }
    if (param_1 == 0) {
      iVar5 = FUN_00010010();
      if (iVar5 == 0) {
        FUN_0001017e();
        *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 1;
        *(short *)(iVar2 + 0xbb) = -*(short *)(in_EAX + 0xd);
        sVar1 = *(short *)(in_EAX + 0xf);
        *(undefined2 *)(iVar2 + 0xbf) = 0;
        *(short *)(iVar2 + 0xbd) = -sVar1;
        return 0;
      }
    }
    else {
      iVar5 = FUN_0001009d();
      if (iVar5 == 0) {
        FUN_0001017e();
        *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | 1;
        *(ushort *)(iVar2 + 0xbb) = local_18 - *(short *)(in_EAX + 0xd);
        sVar1 = *(short *)(in_EAX + 0xf);
        *(undefined2 *)(iVar2 + 0xbf) = 0;
        *(short *)(iVar2 + 0xbd) = -sVar1;
        return 0;
      }
    }
    FUN_0001017e();
    return 0;
  }
  FUN_0001017e();
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0b4c30 (Ghidra: FUN_000b4c30)
 * Prototype: undefined4 sub_0b4c30(void);
 * Address  : 0xb4c30 (Size: 342 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb4fa0
 * Callees  : 9 -> 0x10010, 0x10132, 0x1017e, 0x49bfc, 0xb28e8, 0xd1ac4, 0xd4188, 0xdc354, 0xdc440
 ******************************************************************************/
undefined4 FUN_000b4c30(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  short *extraout_ECX;
  int extraout_ECX_00;
  uint *puVar5;
  uint uStack_18;
  undefined1 local_14 [4];
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined1 *)(iVar1 + 0x203) = 0;
  uStack_18 = 0xb4c5c;
  iVar3 = FUN_000dc440();
  if (iVar3 < 0x21) {
    uStack_18 = 0xb4c6a;
    FUN_0001017e();
    uVar4 = 1;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x8b);
    if ((0 < iVar3) && (iVar3 < -1)) {
      *(int *)(iVar1 + 0x8b) = iVar3 + 1;
    }
    if (((*(short *)(iVar1 + 0x20b) != *extraout_ECX) ||
        (*(short *)(iVar1 + 0x20d) != extraout_ECX[1])) ||
       (*(short *)(iVar1 + 0x20f) != extraout_ECX[2])) {
      uStack_18 = 0xb4cb2;
      uVar2 = FUN_000b28e8();
      *(undefined2 *)(extraout_ECX_00 + 4) = uVar2;
      uStack_18 = 0xb4cc2;
      FUN_000d1ac4();
    }
    uStack_18 = 0xb4cd3;
    iVar3 = FUN_000d4188();
    puVar5 = (uint *)local_14;
    if (iVar3 == 2) {
      if (*(short *)(iVar1 + 0x1ff) == *(short *)(iVar1 + 0x201)) {
        puVar5 = (uint *)local_14;
        if (*(byte *)(iVar1 + 0xd2) == 0) {
          uStack_18 = (uint)*(byte *)(iVar1 + 0xd2);
          FUN_00049bfc();
          puVar5 = &uStack_18;
        }
      }
      else {
        *(short *)(iVar1 + 0x201) = *(short *)(iVar1 + 0x1ff);
        puVar5 = (uint *)local_14;
      }
    }
    *(undefined4 *)((int)puVar5 + -4) = 0xb4d12;
    iVar3 = FUN_000dc354();
    if (iVar3 < 0x11) {
      *(undefined4 *)((int)puVar5 + -4) = 0xb4d73;
      FUN_00010132();
    }
    else {
      *(undefined4 *)((int)puVar5 + -4) = 0xb4d22;
      iVar3 = FUN_00010010();
      if (iVar3 == 0) {
        *(short *)(iVar1 + 0xbb) = *(short *)(iVar1 + 0x205) - *(short *)(in_EAX + 0xd);
        *(short *)(iVar1 + 0xbd) = *(short *)(iVar1 + 0x207) - *(short *)(in_EAX + 0xf);
        *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 1;
        *(undefined2 *)(iVar1 + 0xbf) = 0;
      }
    }
    *(undefined4 *)((int)puVar5 + -4) = 0xb4d7c;
    FUN_0001017e();
    uVar4 = 0;
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_0b4d88 (Ghidra: FUN_000b4d88)
 * Prototype: undefined8 sub_0b4d88(void);
 * Address  : 0xb4d88 (Size: 374 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x49bfc, 0x49e95, 0x49ea9, 0x63b6d, 0x64ae7, 0xb4ae4, 0xdc440
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000b4d88(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 unaff_EDI;
  longlong lVar5;
  uint auStack_24 [3];
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  auStack_24[2] = (uint)*(ushort *)(iVar2 + 0xc4);
  if (0x100 < *(ushort *)(iVar2 + 0xc4)) {
    auStack_24[2] = 0x100;
  }
  auStack_24[1] = 0xb4dc6;
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    auStack_24[1] = 0xb4dda;
    iVar1 = FUN_00049ea9();
    if ((iVar1 != 0) && (*(char *)(iVar2 + 0xd2) == '\0')) {
      iVar1 = *(int *)(in_EAX + 3) >> 0x18;
      if (((int)(uint)DAT_002eb542 <= iVar1) ||
         ((iVar1 < (int)(uint)DAT_002eb542 &&
          ((*(uint *)((int)&DAT_00279203 +
                     ((uint)*(byte *)(iVar2 + 0x2e) + (uint)*(byte *)(iVar2 + 0x30) * 0x100) * 5 + 1
                     ) >> 0x1c & 1 << ((byte)((uint)*(undefined4 *)(in_EAX + 3) >> 0x18) & 0x1f)) !=
           0)))) {
        uVar3 = (uint)DAT_002ebaee;
        auStack_24[1] = 0xb4e48;
        iVar1 = FUN_000dc440();
        if ((int)(uVar3 * 0x100) < iVar1) {
          auStack_24[0] = 0xb4e60;
          FUN_00049bfc();
          iVar2 = 1;
          puVar4 = auStack_24 + 1;
          goto LAB_000b4ef4;
        }
      }
    }
  }
  auStack_24[1] = 0;
  auStack_24[0] = (uint)*(byte *)(iVar2 + 0x88);
  uVar3 = FUN_000b4ae4();
  lVar5 = (ulonglong)uVar3 << 0x20;
  if ((*(byte *)(in_EAX + 8) != 0) &&
     (iVar2 = (uint)*(byte *)(in_EAX + 8) * 0x29, lVar5 = (ulonglong)uVar3 << 0x20,
     *(int *)(&DAT_0018c4ac + iVar2) != 0)) {
    lVar5 = (**(code **)(&DAT_0018c4ac + iVar2))();
  }
  iVar1 = (int)((ulonglong)lVar5 >> 0x20);
  iVar2 = (int)lVar5;
  puVar4 = auStack_24;
  if (iVar2 == 0) {
    if (iVar1 == 1) {
      FUN_00064ae7();
      *(undefined1 *)(in_EAX + 8) = 0;
      return CONCAT44(unaff_EDI,1);
    }
    puVar4 = auStack_24;
    if (iVar1 == -1) {
      FUN_00063b6d();
      puVar4 = auStack_24;
    }
  }
LAB_000b4ef4:
  return CONCAT44(puVar4[4],iVar2);
}

/******************************************************************************
 * Function : dk_shiiiiiit_place_move_backwards_0b4f00 (Ghidra: FUN_000b4f00)
 * Prototype: undefined8 dk_shiiiiiit_place_move_backwards_0b4f00(void);
 * Address  : 0xb4f00 (Size: 157 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp:1501 ("Shiiiiiit. Bad place to move backwards to!"); move.cpp:1501 ("Shiiiiiit. Bad place to move backwards to!")
 * Naming   : String 'Shiiiiiit. Bad place to move backwards to!'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x64ae7, 0xb4ae4, 0xddaf0, 0xddaf8
 * Strings  :
 *   - 0x16adff: "move.cpp"
 *   - 0x16add4: "Shiiiiiit. Bad place to move backwards to!"
 ******************************************************************************/
undefined8 FUN_000b4f00(void)

{
  char cVar1;
  int in_EAX;
  
  cVar1 = FUN_000b4ae4(*(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x88));
  if (cVar1 == '\x01') {
    FUN_00064ae7();
    *(undefined1 *)(in_EAX + 8) = 0;
    return 0x100000001;
  }
  if (cVar1 == -1) {
    FUN_000ddaf0(); /* LbErrorLog("move.cpp", line 1501, "Shiiiiiit. Bad place to move backwards to!") */
    FUN_000ddaf8(); /* LbWarnLog("move.cpp", line 1501, "Shiiiiiit. Bad place to move backwards to!") */
    FUN_00063b6d();
    *(undefined1 *)(in_EAX + 8) = 0;
  }
  return 0x100000000;
}

/******************************************************************************
 * Function : dk_shiiiiiit_place_tunnel_0b4fa0 (Ghidra: FUN_000b4fa0)
 * Prototype: undefined8 dk_shiiiiiit_place_tunnel_0b4fa0(void);
 * Address  : 0xb4fa0 (Size: 350 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp:1552 ("Shiiiiiit. Bad place to tunnel to!"); move.cpp:1552 ("Shiiiiiit. Bad place to tunnel to!")
 * Naming   : String 'Shiiiiiit. Bad place to tunnel to!'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x63b6d, 0x64ae7, 0x82774, 0xb4c30, 0xddaf0, 0xddaf8
 * Strings  :
 *   - 0x16ae2b: "move.cpp"
 *   - 0x16ae08: "Shiiiiiit. Bad place to tunnel to!"
 ******************************************************************************/
undefined8 FUN_000b4fa0(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(in_EAX + 0xe) + (uint)*(byte *)(in_EAX + 0x10) * 0x100;
  if ((uint)((&DAT_002d33ca)
             [((&DAT_0019033b)[uVar3 % 0x100] + (&DAT_0019033b)[(int)uVar3 >> 8] * 0x55) * 6] & 7)
      == *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x86) >> 0x18) {
    FUN_00064ae7();
    uVar2 = 1;
  }
  else {
    cVar1 = FUN_000b4c30();
    if (cVar1 == '\x01') {
      FUN_00064ae7();
      return CONCAT44(in_EDX,1);
    }
    if (cVar1 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("move.cpp", line 1552, "Shiiiiiit. Bad place to tunnel to!") */
      FUN_000ddaf8(); /* LbWarnLog("move.cpp", line 1552, "Shiiiiiit. Bad place to tunnel to!") */
      FUN_00063b6d();
      *(undefined1 *)(extraout_ECX_00 + 8) = 0;
    }
    else if ((((uint)*(ushort *)(extraout_ECX + 0x1b) + DAT_002e8bee & 0x7f) == 0) &&
            (cVar1 = FUN_00082774(), cVar1 != '\0')) {
      return CONCAT44(in_EDX,1);
    }
    uVar2 = 0;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0b5100 (Ghidra: FUN_000b5100)
 * Prototype: undefined8 sub_0b5100(void);
 * Address  : 0xb5100 (Size: 107 bytes)
 * Module   : move.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x69268, 0x694d4
 * Callees  : 4 -> 0x50c38, 0x50ca9, 0xb28e8, 0xb516c
 ******************************************************************************/
undefined8 FUN_000b5100(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  byte bVar3;
  char local_1b;
  char local_19;
  undefined2 auStack_18 [2];
  
  bVar3 = 0;
  uVar2 = *(undefined4 *)(in_EAX + 0xd);
  auStack_18[0] = *(undefined2 *)(in_EAX + 0x11);
  uVar1 = FUN_000b516c();
  if ((char)uVar1 != '\0') {
    local_1b = (char)((uint)uVar2 >> 8);
    if ((*(char *)(extraout_ECX + 0xe) == local_1b) &&
       (local_19 = (char)((uint)uVar2 >> 0x18), local_19 == *(char *)(extraout_ECX + 0x10))) {
      *(undefined4 *)(extraout_ECX + 0xd) = uVar2;
      *(undefined2 *)(extraout_ECX + 0x11 + (uint)bVar3 * -8) = auStack_18[(uint)bVar3 * -4];
    }
    else {
      FUN_00050ca9();
      *(undefined4 *)(extraout_ECX + 0xd) = uVar2;
      *(undefined2 *)(extraout_ECX + 0x11 + (uint)bVar3 * -8) = auStack_18[(uint)bVar3 * -4];
      FUN_00050c38();
    }
    uVar2 = FUN_000b28e8();
    *(short *)(extraout_ECX + 0x60) = (short)uVar2;
    uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_find_valid_position_place_0b516c (Ghidra: FUN_000b516c)
 * Prototype: uint dk_find_valid_position_place_0b516c(void);
 * Address  : 0xb516c (Size: 245 bytes)
 * Module   : move.cpp [direct_file_string_xref]
 * OrigLine : move.cpp:1619 ("Cannot find valid position to place thing")
 * Naming   : String 'Cannot find valid position to place thing'
 * Callers  : 3 -> 0xb3dac, 0xb5100, 0xd1444
 * Callees  : 3 -> 0x7dbc0, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x16ae5e: "move.cpp"
 *   - 0x16ae34: "Cannot find valid position to place thing"
 ******************************************************************************/
uint FUN_000b516c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_EDX;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  undefined4 local_28;
  undefined2 local_24 [2];
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  
  bVar6 = 0;
  pcVar5 = (char *)&DAT_002ee9c1;
  local_20 = (uint)*(byte *)((int)in_EDX + 1);
  local_1c = (uint)*(byte *)((int)in_EDX + 3);
  iVar4 = 0;
  local_18 = in_EDX;
  do {
    iVar3 = (int)pcVar5[1] + local_20;
    iVar1 = (int)*pcVar5 + local_1c;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    if ((*(byte *)((int)&DAT_00279203 + (iVar1 * 0x100 + iVar3) * 5) & 0x10) == 0) {
      local_28 = CONCAT22((short)(iVar1 << 8) + 0x80,(short)(iVar3 << 8) + 0x80);
      local_24[0] = FUN_000b28e8();
      iVar1 = FUN_0007dbc0();
      if (iVar1 == 0) {
        *local_18 = local_28;
        *(undefined2 *)(local_18 + (uint)bVar6 * -2 + 1) = local_24[(uint)bVar6 * -4];
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 4;
  } while (iVar4 < 0x9c4);
  uVar2 = FUN_000ddaf0(); /* LbErrorLog("move.cpp", line 1619, "Cannot find valid position to place thing") */
  return uVar2 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0b5264 (Ghidra: FUN_000b5264)
 * Prototype: longlong sub_0b5264(void);
 * Address  : 0xb5264 (Size: 734 bytes)
 * Module   : move.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x15be4, 0x280a7, 0x2855c, 0x2864e, 0x28eb4, 0x382d8, 0x3f682, 0x63b55, 0x66247
 * Callees  : 3 -> 0x22b3a, 0xb2398, 0xb3b58
 ******************************************************************************/
longlong FUN_000b5264(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  short sVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint in_EDX;
  uint uVar11;
  int iVar12;
  uint local_4c;
  int local_30;
  int local_2c;
  int local_1c;
  
  uVar5 = (uint)*(byte *)(in_EAX + 0xe);
  uVar6 = (uint)*(byte *)(in_EAX + 0x10);
  iVar1 = (&DAT_0019033b)[uVar6];
  iVar2 = (&DAT_0019033b)[uVar5];
  uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar7 = uVar7 >> 0xd | uVar7 * 0x80000;
  uVar11 = uVar7 % 9;
  uVar7 = uVar7 * 0x24a1 + 0x24df;
  local_2c = 0;
  local_4c = uVar7 >> 0xd;
  DAT_002e8bf6 = local_4c | uVar7 * 0x80000;
  local_4c = local_4c & 3;
  do {
    iVar12 = iVar2 + iVar1 * 0x55 + (*(int *)(&DAT_0018b6b0 + local_4c * 2) >> 0x10);
    if ((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar12 * 6] * 0x16] & 2) == 0) &&
       (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar12 * 6] * 0x16] & 0x10) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
LAB_000b53ba:
      local_1c = 0;
      uVar7 = uVar11;
      do {
        if (((iVar12 % 0x55) * 3 + (int)uVar7 % 3 != uVar5) ||
           ((iVar12 / 0x55) * 3 + (int)uVar7 / 3 != uVar6)) {
          if ((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') {
            uVar9 = FUN_000b2398();
            if ((uVar9 & 0xfffffffe) == 0x28) goto LAB_000b543b;
          }
          sVar4 = FUN_000b3b58();
          if (sVar4 != 0) {
            uVar10 = 1;
            goto LAB_000b5478;
          }
        }
LAB_000b543b:
        uVar7 = (int)(uVar7 + 1) % 9;
        local_1c = local_1c + 1;
      } while (local_1c < 9);
      if ((&DAT_002d33c5)[iVar12 * 6] != '\f') {
        uVar10 = 0;
LAB_000b5478:
        return CONCAT44(in_EDX,uVar10);
      }
    }
    else {
      iVar8 = FUN_00022b3a();
      if (((iVar8 != 0) && (*(char *)(iVar8 + 6) == *(char *)(in_EAX + 6))) &&
         (*(char *)(iVar8 + 0x18) == '\0')) goto LAB_000b53ba;
    }
    local_2c = local_2c + 1;
    local_4c = (int)(local_4c + 1) % 4;
    if (3 < local_2c) {
      iVar1 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
      iVar2 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
      local_30 = 0;
      do {
        if ((iVar1 * 3 + (int)uVar11 % 3 != uVar5) || (iVar2 * 3 + (int)uVar11 / 3 != uVar6)) {
          sVar4 = FUN_000b3b58();
          if (sVar4 != 0) {
            return CONCAT44(in_EDX,1);
          }
        }
        local_30 = local_30 + 1;
        uVar11 = (int)(uVar11 + 1) % 9;
      } while (local_30 < 9);
      return (ulonglong)in_EDX << 0x20;
    }
  } while( true );
}

