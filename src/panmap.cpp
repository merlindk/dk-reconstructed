/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: panmap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 12
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_062570 (Ghidra: FUN_00062570)
 * Prototype: undefined4 sub_062570(void);
 * Address  : 0x62570 (Size: 6 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00062570(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_062578 (Ghidra: FUN_00062578)
 * Prototype: undefined8 sub_062578(void);
 * Address  : 0x62578 (Size: 527 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 3 -> 0x627b5, 0xe8214, 0xe846c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00062680) */
/* WARNING: Removing unreachable block (ram,0x0006270a) */
/* WARNING: Removing unreachable block (ram,0x000626bb) */

undefined8 FUN_00062578(void)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_EDX;
  byte local_318 [768];
  
  if ((*(int *)(in_EAX + 0x4c1) != 0) || (*(int *)(in_EAX + 0x4c5) != 0)) {
    if ((*(byte *)(in_EAX + 3) & 8) == 0) {
      if ((*(int *)(in_EAX + 0x4c1) == 0) || (*(int *)(in_EAX + 0x4c5) == 0)) {
        if ((*(int *)(in_EAX + 0x4c1) == 0) || (*(int *)(in_EAX + 0x4c5) != 0)) {
          iVar3 = (*(int *)(in_EAX + 0x4c5) + -1) * 10;
          if (0x78 < iVar3) {
            iVar3 = 0x78;
          }
        }
        else {
          iVar3 = (*(int *)(in_EAX + 0x4c1) + -1) * 0xc;
          if (0x78 < iVar3) {
            iVar3 = 0x78;
          }
        }
      }
      else {
        iVar3 = (*(int *)(in_EAX + 0x4c1) + -1) * 0xc + (*(int *)(in_EAX + 0x4c5) + -1) * 10;
        if (0x78 < iVar3) {
          iVar3 = 0x78;
        }
      }
      iVar3 = 0x78 - iVar3;
      iVar5 = 0;
      do {
        bVar2 = (char)((int)((*(byte *)(iVar5 + *(int *)(in_EAX + 0x4c9)) - 0x3f) * iVar3) / 0x78) +
                0x3f;
        local_318[iVar5] = bVar2;
        if (0x3f < bVar2) {
          local_318[iVar5] = 0x3f;
        }
        uVar4 = (int)((uint)*(byte *)(iVar5 + 1 + *(int *)(in_EAX + 0x4c9)) * iVar3) / 0x78;
        local_318[iVar5 + 1] = (byte)uVar4;
        if (0x3f < (uVar4 & 0xff)) {
          local_318[iVar5 + 1] = 0x3f;
        }
        uVar4 = (int)((uint)*(byte *)(iVar5 + 2 + *(int *)(in_EAX + 0x4c9)) * iVar3) / 0x78;
        local_318[iVar5 + 2] = (byte)uVar4;
        if (0x3f < (uVar4 & 0xff)) {
          local_318[iVar5 + 2] = 0x3f;
        }
        iVar5 = iVar5 + 3;
      } while (iVar5 != 0x300);
      if (*(int *)(in_EAX + 0x4c1) != 0) {
        *(int *)(in_EAX + 0x4c1) = *(int *)(in_EAX + 0x4c1) + -1;
      }
      if (((*(int *)(in_EAX + 0x4c5) != 0) && (cVar1 = *(char *)(in_EAX + 0x4b0), cVar1 != '\x12'))
         && (cVar1 != '\x11')) {
        if ((cVar1 == '\x05') || (cVar1 == '\x06')) {
          if (*(int *)(in_EAX + 0x4c5) < 0xd) {
            *(int *)(in_EAX + 0x4c5) = *(int *)(in_EAX + 0x4c5) + 1;
          }
        }
        else if (*(int *)(in_EAX + 0x4c5) != 0) {
          *(int *)(in_EAX + 0x4c5) = *(int *)(in_EAX + 0x4c5) + -1;
        }
      }
      FUN_000e8214();
      FUN_000e846c(local_318);
      goto LAB_00062780;
    }
    FUN_000627b5();
    *(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) & 0xf7;
    if (*(int *)(in_EAX + 0x4c1) != 0) {
      *(undefined4 *)(in_EAX + 0x4c1) = 0;
    }
  }
  iVar3 = 0;
LAB_00062780:
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_062787 (Ghidra: FUN_00062787)
 * Prototype: void sub_062787(void);
 * Address  : 0x62787 (Size: 46 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x81a2c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00062787(void)

{
  int in_EAX;
  int in_EDX;
  
  *(int *)(in_EAX + 0x4c1) = *(int *)(in_EAX + 0x4c1) + in_EDX;
  if (*(int *)(in_EAX + 0x4c1) < 1) {
    *(undefined4 *)(in_EAX + 0x4c1) = 1;
    return;
  }
  if (10 < *(int *)(in_EAX + 0x4c1)) {
    *(undefined4 *)(in_EAX + 0x4c1) = 10;
  }
  return;
}

/******************************************************************************
 * Function : sub_0627b5 (Ghidra: FUN_000627b5)
 * Prototype: void sub_0627b5(void);
 * Address  : 0x627b5 (Size: 532 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x24ab9, 0x2684f, 0x2c833, 0x36ff4, 0x4b2a7, 0x4b478, 0x4b5ca, 0x4b6ae, 0x4b7d4, 0x4bd35 ...
 * Callees  : 2 -> 0xe8214, 0xe846c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000628f0) */
/* WARNING: Removing unreachable block (ram,0x00062986) */
/* WARNING: Removing unreachable block (ram,0x0006292f) */

void FUN_000627b5(void)

{
  byte bVar1;
  undefined1 *in_EAX;
  int iVar2;
  byte *in_EDX;
  byte *pbVar3;
  byte local_320 [768];
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  if (in_EDX == DAT_00199218) {
    if ((in_EAX[3] & 4) != 0) {
      return;
    }
    in_EAX[3] = in_EAX[3] | 4;
  }
  else {
    in_EAX[3] = in_EAX[3] & 0xfb;
  }
  if (*(int *)(in_EAX + 7) != 0) {
    if (in_EDX == *(byte **)(in_EAX + 0x4c9)) {
      return;
    }
    if (in_EDX != *(byte **)(in_EAX + 7)) {
      return;
    }
  }
  if ((*(int *)(in_EAX + 0x4c1) == 0) && (*(int *)(in_EAX + 0x4c5) == 0)) {
    iVar2 = (int)DAT_002f10ce._3_1_;
    *(byte **)(in_EAX + 0x4c9) = in_EDX;
    if (in_EAX != &DAT_0019d0c8 + iVar2 * 0x4ef) {
      return;
    }
    FUN_000e8214();
    FUN_000e846c();
    return;
  }
  if ((*(int *)(in_EAX + 0x4c1) == 0) || (*(int *)(in_EAX + 0x4c5) == 0)) {
    if ((*(int *)(in_EAX + 0x4c1) == 0) || (*(int *)(in_EAX + 0x4c5) != 0)) {
      local_1c = (*(int *)(in_EAX + 0x4c5) + -1) * 10;
      if (0x78 < local_1c) {
        local_1c = 0x78;
      }
      goto LAB_000628a3;
    }
    local_1c = (*(int *)(in_EAX + 0x4c1) + -1) * 0xc;
  }
  else {
    local_1c = (*(int *)(in_EAX + 0x4c5) + -1) * 10 + (*(int *)(in_EAX + 0x4c1) + -1) * 0xc;
  }
  if (0x78 < local_1c) {
    local_1c = 0x78;
  }
LAB_000628a3:
  local_1c = 0x78 - local_1c;
  local_20 = 0;
  pbVar3 = in_EDX;
  do {
    bVar1 = (char)((int)((*pbVar3 - 0x3f) * local_1c) / 0xc) * '\n' + 0x3f;
    local_320[local_20 * 3] = bVar1;
    if (0x3f < bVar1) {
      local_320[local_20 * 3] = 0x3f;
    }
    bVar1 = (char)((int)((uint)pbVar3[1] * local_1c) / 0xc) * '\n';
    local_320[local_20 * 3 + 1] = bVar1;
    if (0x3f < bVar1) {
      local_320[local_20 * 3 + 1] = 0x3f;
    }
    local_18 = 0xc;
    bVar1 = (char)((int)((uint)pbVar3[2] * local_1c) / 0xc) * '\n';
    local_320[local_20 * 3 + 2] = bVar1;
    if (0x3f < bVar1) {
      local_320[local_20 * 3 + 2] = 0x3f;
    }
    local_20 = local_20 + 1;
    pbVar3 = pbVar3 + 3;
  } while (local_20 < 0x100);
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    FUN_000e8214();
    FUN_000e846c(local_320);
  }
  *(byte **)(in_EAX + 0x4c9) = in_EDX;
  return;
}

/******************************************************************************
 * Function : sub_0629cc (Ghidra: FUN_000629cc)
 * Prototype: void sub_0629cc(void);
 * Address  : 0x629cc (Size: 65 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x88e2c, 0x890bc, 0x89ae8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000629cc(void)

{
  int in_EAX;
  int in_EDX;
  undefined1 unaff_BL;
  
  if ((((-1 < in_EDX) && (in_EDX < 0x74)) && ((int)(&DAT_0035e254)[in_EDX] <= in_EAX)) &&
     (in_EAX < (int)(&DAT_0035e424)[in_EDX])) {
    *(undefined1 *)((in_EDX + DAT_0034d250) * DAT_003d9834 + DAT_003d9818 + in_EAX + DAT_0034d24c) =
         unaff_BL;
  }
  return;
}

/******************************************************************************
 * Function : sub_062a0d (Ghidra: FUN_00062a0d)
 * Prototype: void sub_062a0d(void);
 * Address  : 0x62a0d (Size: 341 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x62eb7
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00062a0d(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = 0x66;
  iVar4 = 0;
  uVar8 = DAT_002e8bee & 3;
  for (iVar7 = 0; iVar7 < DAT_00361b84; iVar7 = iVar7 + 1) {
    bVar1 = (&DAT_00361a84)[iVar7];
    if ((DAT_002e8bee & 3) == 0) {
      (&DAT_0035d257)[iVar4] = bVar1;
      (&DAT_0035d258)[iVar4] = bVar1;
    }
    else {
      (&DAT_0035d257)[iVar4] = (&DAT_00367610)[bVar1];
      (&DAT_0035d258)[iVar4] = (&DAT_0036e810)[bVar1];
    }
    (&DAT_0035d256)[iVar4] = 0;
    (&DAT_0035d25a)[iVar4] = 0x92;
    (&DAT_0035d25b)[iVar4] = 0x55;
    uVar2 = (&DAT_00366c10)[bVar1];
    (&DAT_0035d254)[iVar4] = bVar1;
    uVar3 = (&DAT_0036e810)[bVar1];
    (&DAT_0035d255)[iVar4] = uVar2;
    (&DAT_0035d259)[iVar4] = uVar3;
    for (iVar5 = iVar4; iVar5 != local_28; iVar5 = iVar5 + 6) {
      (&DAT_0035d25c)[iVar5] = 0x84;
      (&DAT_0035d25d)[iVar5] = 0x5c;
      (&DAT_0035d25e)[iVar5] = 0xa4;
      (&DAT_0035d25f)[iVar5] = 0xb7;
      (&DAT_0035d260)[iVar5] = 0x15;
      (&DAT_0035d261)[iVar5] = (&DAT_00184278)[uVar8];
    }
    (&DAT_0035d2fe)[iVar4] = 0x83;
    (&DAT_0035d2ff)[iVar4] = 0x5a;
    (&DAT_0035d300)[iVar4] = 0xa3;
    local_20 = 0;
    (&DAT_0035d301)[iVar4] = 0xb5;
    (&DAT_0035d302)[iVar4] = 0x14;
    local_24 = iVar4 + 6;
    (&DAT_0035d303)[iVar4] = 4;
    do {
      iVar6 = local_20 * 0xc + iVar4;
      iVar5 = local_24;
      do {
        (&DAT_0035d2c2)[iVar6] = 0x3c;
        iVar6 = iVar6 + 1;
        (&DAT_0035d2c2)[iVar5] = 0x4f;
        iVar5 = iVar5 + 1;
      } while (iVar6 != local_24);
      local_20 = local_20 + 1;
      local_24 = local_24 + 0xc;
    } while (local_20 < 5);
    local_28 = local_28 + 0x100;
    iVar4 = iVar4 + 0x100;
  }
  return;
}

/******************************************************************************
 * Function : sub_062b62 (Ghidra: FUN_00062b62)
 * Prototype: void sub_062b62(void);
 * Address  : 0x62b62 (Size: 526 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x62ee2
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00062b62(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_20;
  int local_1c;
  
  iVar10 = 0x66;
  uVar9 = DAT_002e8bee & 3;
  for (iVar6 = 0; iVar6 < DAT_00361b84; iVar6 = iVar6 + 1) {
    bVar7 = (&DAT_00361a84)[iVar6];
    iVar3 = iVar6 * 0x100;
    if ((DAT_002e8bee & 3) == 0) {
      (&DAT_0035d257)[iVar3] = bVar7;
    }
    else {
      uVar8 = (uint)bVar7;
      bVar7 = (&DAT_0036e810)[bVar7];
      (&DAT_0035d257)[iVar3] = (&DAT_00367610)[uVar8];
    }
    (&DAT_0035d258)[iVar3] = bVar7;
    uVar2 = (&DAT_00184278)[uVar9];
    iVar3 = iVar6 << 8;
    do {
      iVar4 = iVar3 + 6;
      (&DAT_0035d261)[iVar3] = uVar2;
      iVar3 = iVar4;
    } while (iVar4 != iVar10);
    iVar10 = iVar10 + 0x100;
  }
  iVar6 = (int)DAT_0017d17b._3_1_;
  if ((DAT_002e8bee & 1) != 0) {
    iVar6 = -1;
  }
  if (iVar6 != DAT_0018427e) {
    if (-1 < DAT_0018427e) {
      iVar10 = DAT_0018427e * 6;
      for (iVar3 = 0; iVar3 < DAT_00361b84; iVar3 = iVar3 + 1) {
        iVar5 = 0;
        iVar4 = iVar10;
        do {
          puVar1 = &DAT_00184278 + iVar5;
          iVar5 = iVar5 + 1;
          (&DAT_0035d25c)[iVar4] = *puVar1;
          iVar4 = iVar4 + 1;
        } while (iVar5 < 6);
        iVar10 = iVar10 + 0x100;
      }
    }
    DAT_0018427e = iVar6;
    if (-1 < iVar6) {
      iVar10 = iVar6 * 6 + 6;
      for (iVar3 = 0; iVar3 < DAT_00361b84; iVar3 = iVar3 + 1) {
        iVar4 = iVar3 * 0x100 + iVar6 * 6;
        do {
          iVar5 = iVar4 + 1;
          (&DAT_0035d25c)[iVar4] = 0x1f;
          iVar4 = iVar5;
        } while (iVar5 != iVar10);
        iVar10 = iVar10 + 0x100;
      }
    }
  }
  iVar6 = (int)DAT_0017d17f;
  if ((DAT_002e8bee & 1) != 0) {
    iVar6 = -1;
  }
  if (iVar6 != DAT_00184282) {
    if ((-1 < DAT_00184282) && (DAT_00184282 != 5)) {
      iVar3 = (DAT_00184282 * 2 + 1) * 6;
      local_20 = DAT_00184282 * 0xc + 6;
      for (iVar10 = 0; iVar10 < DAT_00361b84; iVar10 = iVar10 + 1) {
        iVar5 = iVar10 * 0x100 + DAT_00184282 * 0xc;
        iVar4 = iVar3;
        do {
          (&DAT_0035d2c2)[iVar5] = 0x3c;
          iVar5 = iVar5 + 1;
          (&DAT_0035d2c2)[iVar4] = 0x4f;
          iVar4 = iVar4 + 1;
        } while (iVar5 != local_20);
        local_20 = local_20 + 0x100;
        iVar3 = iVar3 + 0x100;
      }
    }
    DAT_00184282 = iVar6;
    if (-1 < iVar6) {
      iVar3 = (iVar6 * 2 + 1) * 6;
      local_1c = iVar6 * 0xc + 6;
      for (iVar10 = 0; iVar10 < DAT_00361b84; iVar10 = iVar10 + 1) {
        iVar5 = iVar10 * 0x100 + iVar6 * 0xc;
        iVar4 = iVar3;
        do {
          (&DAT_0035d2c2)[iVar5] = 0x1f;
          iVar5 = iVar5 + 1;
          (&DAT_0035d2c2)[iVar4] = 0x1f;
          iVar4 = iVar4 + 1;
        } while (iVar5 != local_1c);
        local_1c = local_1c + 0x100;
        iVar3 = iVar3 + 0x100;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_062d70 (Ghidra: FUN_00062d70)
 * Prototype: void sub_062d70(void);
 * Address  : 0x62d70 (Size: 327 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x62eb7
 * Callees  : 1 -> 0xe8cc8
 ******************************************************************************/
void FUN_00062d70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  iVar8 = 0;
  while( true ) {
    iVar2 = DAT_003d9834;
    iVar3 = DAT_0034d24c;
    iVar4 = (int)(0x74 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
    if (iVar4 <= local_20) break;
    local_20 = local_20 + 1;
    uVar10 = FUN_000e8cc8();
    *(int *)((int)&DAT_0035e254 + iVar8) = (int)((ulonglong)uVar10 >> 0x20) - (int)uVar10;
    iVar3 = FUN_000e8cc8();
    *(int *)((int)&DAT_0035e424 + iVar8) = iVar3 + extraout_ECX;
    iVar8 = iVar8 + 4;
  }
  DAT_00361b84 = 0;
  iVar8 = 0;
  local_2c = DAT_003d9818 + DAT_003d9834 * DAT_0034d250;
  local_28 = 0;
  for (local_24 = 0; local_24 < (int)(0x74 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
      local_24 = local_24 + 1) {
    local_1c = *(int *)((int)&DAT_0035e254 + iVar8);
    pcVar5 = (char *)(local_1c + local_2c + iVar3);
    iVar9 = local_1c + local_28;
    while (local_1c < *(int *)((int)&DAT_0035e424 + iVar8)) {
      cVar1 = *pcVar5;
      *pcVar5 = -1;
      for (iVar7 = 0; (iVar7 < DAT_00361b84 && (cVar1 != (&DAT_00361a84)[iVar7])); iVar7 = iVar7 + 1
          ) {
      }
      iVar6 = DAT_00361b84;
      if (iVar7 == DAT_00361b84) {
        iVar6 = DAT_00361b84 + 1;
        (&DAT_00361a84)[DAT_00361b84] = cVar1;
      }
      local_1c = local_1c + 1;
      pcVar5 = pcVar5 + 1;
      (&DAT_0035e5f4)[iVar9] = (char)iVar7;
      DAT_00361b84 = iVar6;
      iVar9 = iVar9 + 1;
    }
    local_2c = local_2c + iVar2;
    iVar8 = iVar8 + 4;
    local_28 = local_28 + iVar4;
  }
  return;
}

/******************************************************************************
 * Function : sub_062eb7 (Ghidra: FUN_00062eb7)
 * Prototype: void sub_062eb7(void);
 * Address  : 0x62eb7 (Size: 43 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x62ee2
 * Callees  : 2 -> 0x62a0d, 0x62d70
 ******************************************************************************/
void FUN_00062eb7(void)

{
  int iVar1;
  
  iVar1 = (int)(0x100 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
  if (iVar1 != DAT_00184274) {
    DAT_00184274 = iVar1;
    FUN_00062d70();
    FUN_00062a0d();
  }
  return;
}

/******************************************************************************
 * Function : sub_062ee2 (Ghidra: FUN_00062ee2)
 * Prototype: void sub_062ee2(void);
 * Address  : 0x62ee2 (Size: 576 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 2 -> 0x62b62, 0x62eb7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00062ee2(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int in_EDX;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  int unaff_EBX;
  undefined *puVar15;
  undefined *local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_14;
  
  DAT_0034d24c = in_EAX / (int)(uint)DAT_0019cba6;
  iVar5 = in_EDX / (int)(uint)DAT_0019cba6;
  DAT_0034d250 = iVar5;
  FUN_00062eb7();
  FUN_00062b62();
  iVar4 = DAT_003d9834;
  iVar14 = *(int *)((int)&DAT_0019d100 + DAT_002f10ce._3_1_ * 0x4ef);
  uVar6 = -*(int *)(iVar14 + 7) & 0x7ff;
  iVar2 = (&DAT_001927e0)[uVar6];
  iVar9 = iVar2 * unaff_EBX >> 0x1f;
  iVar7 = (int)(&PTR_LAB_00192fe0)[uVar6] * unaff_EBX;
  iVar10 = iVar7 >> 0x1f;
  iVar7 = (int)((iVar7 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
  iVar10 = -unaff_EBX * iVar2 >> 0x1f;
  iVar10 = (int)((-unaff_EBX * iVar2 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
  iVar8 = (int)(0x74 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
  iVar11 = iVar8 * unaff_EBX >> 0x1f;
  iVar11 = (int)((iVar8 * unaff_EBX + iVar11 * -0x200) - (uint)(iVar11 << 8 < 0)) >> 9;
  iVar12 = (int)(&PTR_LAB_00192fe0)[uVar6] * iVar11;
  local_20 = (uint)*(byte *)(iVar14 + 3) * 0x10000 - (iVar12 + -iVar11 * iVar2);
  local_34 = &DAT_0035e5f4;
  local_24 = (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + DAT_002f10ce._3_1_ * 0x4ef) + 1) *
             0x10000 - (iVar2 * iVar11 + iVar12);
  local_28 = extraout_ECX + DAT_003d9818 + iVar5 * DAT_003d9834;
  _DAT_00361b88 = iVar7;
  _DAT_00361b8c = iVar10;
  for (local_14 = 0; local_14 < iVar8 << 2; local_14 = local_14 + 4) {
    iVar14 = *(int *)((int)&DAT_0035e424 + local_14);
    iVar5 = *(int *)((int)&DAT_0035e254 + local_14);
    iVar12 = iVar7 * (iVar14 + -1) + local_24;
    for (iVar11 = local_20 + (iVar14 + -1) * iVar10;
        (iVar5 < iVar14 &&
        ((((iVar12 < 0 || (iVar11 < 0)) || (0xffffff < iVar12)) || (0xffffff < iVar11))));
        iVar11 = iVar11 - iVar10) {
      iVar12 = iVar12 - iVar7;
      iVar14 = iVar14 + -1;
    }
    iVar12 = iVar7 * iVar5 + local_24;
    for (iVar11 = iVar10 * iVar5 + local_20;
        (iVar5 < iVar14 &&
        (((iVar12 < 0 || (iVar11 < 0)) || ((0xffffff < iVar12 || (0xffffff < iVar11))))));
        iVar11 = iVar11 + iVar10) {
      iVar12 = iVar12 + iVar7;
      iVar5 = iVar5 + 1;
    }
    puVar13 = (undefined1 *)(local_28 + iVar5);
    iVar14 = iVar14 - iVar5;
    puVar15 = local_34 + iVar5;
    if (0 < iVar14) {
      do {
        uVar6 = (uint)iVar12 >> 0x10;
        uVar3 = (uint)iVar11 >> 0x10;
        uVar1 = *puVar15;
        iVar12 = iVar12 + _DAT_00361b88;
        iVar11 = iVar11 + _DAT_00361b8c;
        puVar15 = puVar15 + 1;
        *puVar13 = (&DAT_0035d254)
                   [CONCAT11(uVar1,(&DAT_0034d254)[CONCAT11((char)uVar3,(char)uVar6)])];
        puVar13 = puVar13 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    local_28 = local_28 + iVar4;
    local_34 = local_34 + iVar8;
    local_24 = local_24 +
               ((int)((iVar2 * unaff_EBX + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8);
    local_20 = local_20 + iVar7;
  }
  return;
}

/******************************************************************************
 * Function : dk_door_flagged_position_063122 (Ghidra: FUN_00063122)
 * Prototype: void dk_door_flagged_position_063122(void);
 * Address  : 0x63122 (Size: 671 bytes)
 * Module   : panmap.cpp [direct_file_string_xref]
 * OrigLine : panmap.cpp:591 ("No door for flagged position")
 * Naming   : String 'No door for flagged position'
 * Callers  : 15 -> 0x14614, 0x1495c, 0x23042, 0x230d3, 0x23ad0, 0x2c833, 0x402e5, 0x70c0c, 0x82828, 0x82a04 ...
 * Callees  : 2 -> 0x22b3a, 0xddaf0
 * Strings  :
 *   - 0x16663d: "panmap.cpp"
 *   - 0x166620: "No door for flagged position"
 ******************************************************************************/
void FUN_00063122(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int in_EAX;
  int iVar6;
  char cVar7;
  char extraout_CL;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar8;
  char *local_58;
  int local_28;
  char *local_24;
  int local_1c;
  int local_18;
  
  local_24 = &DAT_0034d254 + in_EDX * 0x100 + in_EAX;
  bVar2 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
  iVar1 = in_EDX + in_ECX;
  local_28 = in_EDX * 0x500;
  for (; (in_EDX < iVar1 && (in_EDX < 0x100)); in_EDX = in_EDX + 1) {
    local_58 = local_24;
    local_18 = in_EAX * 5 + local_28;
    local_1c = in_EAX << 2;
    for (iVar8 = in_EAX; (iVar8 < in_EAX + unaff_EBX && (iVar8 < 0x100)); iVar8 = iVar8 + 1) {
      iVar6 = in_EDX * 0x100 + iVar8;
      bVar3 = *(byte *)((int)&DAT_00279203 + local_18);
      cVar7 = '\0';
      if ((iVar8 / 3 < 0x55) && (in_EDX / 3 < 0x55)) {
        cVar4 = (&DAT_002d33c5)
                [((&DAT_0019033b)[in_EDX] * 0x55 + *(int *)((int)&DAT_0019033b + local_1c)) * 6];
        bVar5 = (&DAT_002d33ca)
                [((&DAT_0019033b)[iVar6 % 0x100] +
                 (&DAT_0019033b)
                 [(int)((iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0)) >> 8]
                 * 0x55) * 6] & 7;
        if (6 < bVar5) {
          bVar5 = bVar5 - 3;
        }
        if ((bVar3 & 4) == 0) {
          if ((bVar3 & 0x80) == 0) {
            if ((bVar3 & 1) == 0) {
              if ((1 << (bVar2 & 0x1f) & *(uint *)((int)&DAT_00279203 + local_18 + 1) >> 0x1c) != 0)
              {
                if ((bVar3 & 2) == 0) {
                  if (cVar4 == '\0') {
                    cVar7 = '\x02';
                  }
                  else if ((bVar3 & 0x20) == 0) {
                    if ((bVar3 & 0x40) == 0) {
                      if ((bVar3 & 0x10) == 0) {
                        if (cVar4 == '\f') {
                          cVar7 = '\x06';
                        }
                        else if (cVar4 == '\r') {
                          cVar7 = '\a';
                        }
                        else {
                          cVar7 = bVar5 + 0xaa;
                        }
                      }
                    }
                    else {
                      iVar6 = FUN_00022b3a();
                      if (iVar6 == 0) {
                        FUN_000ddaf0(); /* LbErrorLog("panmap.cpp", line 591, "No door for flagged position") */
                        cVar7 = extraout_CL;
                      }
                      else {
                        cVar7 = bVar5 + 0x6e +
                                (*(char *)(iVar6 + 0x1a) * '\x02' +
                                (*(char *)(iVar6 + 0x18) == '\x01')) * '\x06';
                      }
                    }
                  }
                  else {
                    cVar7 = '\x01';
                  }
                }
                else {
                  cVar7 = (char)*(undefined2 *)
                                 (&DAT_002ddd25 +
                                 (uint)(byte)(&DAT_002d33c8)
                                             [((&DAT_0019033b)[in_EDX] * 0x55 +
                                              *(int *)((int)&DAT_0019033b + local_1c)) * 6] * 0x45)
                          * '\x06' + '\b' + bVar5;
                }
              }
            }
            else {
              cVar7 = '\x05';
            }
          }
          else {
            cVar7 = '\x04';
          }
        }
        else {
          cVar7 = '\x03';
        }
        *local_58 = cVar7;
      }
      local_58 = local_58 + 1;
      local_18 = local_18 + 5;
      local_1c = local_1c + 4;
    }
    local_24 = local_24 + 0x100;
    local_28 = local_28 + 0x500;
  }
  return;
}

/******************************************************************************
 * Function : sub_0633c4 (Ghidra: FUN_000633c4)
 * Prototype: undefined4 sub_0633c4(void);
 * Address  : 0x633c4 (Size: 78 bytes)
 * Module   : panmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10eec1
 * Callees  : 7 -> 0x36ff4, 0x63412, 0x6a412, 0x6a652, 0xeb818, 0xf071e, 0xf4409
 ******************************************************************************/
undefined4 FUN_000633c4(void)

{
  short sVar1;
  int iVar2;
  int extraout_EDX;
  
  FUN_000eb818();
  FUN_000f071e();
  sVar1 = FUN_00063412();
  if (-1 < sVar1) {
    iVar2 = FUN_0006a412();
    if (iVar2 != 0) {
      FUN_00036ff4();
    }
    FUN_0006a652();
    if ((extraout_EDX == 0) || (DAT_00334021 != 0)) {
      FUN_000f4409(&DAT_00361b90);
    }
  }
  return 0;
}

