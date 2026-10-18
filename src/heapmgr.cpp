/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: heapmgr.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_overlapping_heap_blocks_03a8f7 (Ghidra: FUN_0003a8f7)
 * Prototype: int * dk_overlapping_heap_blocks_03a8f7(void);
 * Address  : 0x3a8f7 (Size: 301 bytes)
 * Module   : heapmgr.cpp [direct_file_string_xref]
 * OrigLine : heapmgr.cpp:86 ("Overlapping heap blocks"); heapmgr.cpp:135 ("Disaster. Handle allocated past end of heap area")
 * Naming   : String 'Overlapping heap blocks'
 * Callers  : 2 -> 0x3a5cb, 0x6e2aa
 * Callees  : 2 -> 0x3ad7a, 0xddaf0
 * Strings  :
 *   - 0x164c90: "heapmgr.cpp"
 *   - 0x164ccd: "heapmgr.cpp"
 *   - 0x164c78: "Overlapping heap blocks"
 *   - 0x164c9c: "Disaster. Handle allocated past end of heap area"
 ******************************************************************************/
int * FUN_0003a8f7(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int *piVar3;
  int *extraout_ECX;
  int in_EDX;
  int iVar4;
  
  if (in_EAX[2] - in_EAX[5] < in_EDX) {
LAB_0003a90d:
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0003ad7a();
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if (in_EAX[6] == 0) {
      in_EAX[6] = (int)piVar2;
      *piVar2 = *in_EAX;
    }
    else {
      piVar3 = (int *)in_EAX[6];
      if (*piVar3 - *in_EAX < in_EDX) {
        while( true ) {
          if (piVar3[4] == 0) {
            iVar4 = in_EAX[1] - (*piVar3 + piVar3[1]);
          }
          else {
            iVar4 = *(int *)piVar3[4] - (piVar3[1] + *piVar3);
          }
          if (iVar4 < 0) break;
          if (in_EDX <= iVar4) {
            iVar4 = *piVar3;
            iVar1 = piVar3[1];
            piVar2[3] = (int)piVar3;
            *piVar2 = iVar4 + iVar1;
            iVar4 = piVar3[4];
            piVar2[4] = iVar4;
            if (iVar4 != 0) {
              *(int **)(iVar4 + 0xc) = piVar2;
            }
            piVar3[4] = (int)piVar2;
            goto LAB_0003a9d5;
          }
          if (piVar3[4] == 0) goto LAB_0003a90d;
          piVar3 = (int *)piVar3[4];
        }
        FUN_000ddaf0(); /* LbErrorLog("heapmgr.cpp", line 86, "Overlapping heap blocks") */
        goto LAB_0003a90d;
      }
      *piVar2 = *in_EAX;
      piVar2[4] = (int)piVar3;
      in_EAX[6] = (int)piVar2;
      piVar3[3] = (int)piVar2;
    }
LAB_0003a9d5:
    *(undefined2 *)(piVar2 + 2) = 1;
    piVar2[1] = in_EDX;
    in_EAX[4] = in_EAX[4] + 1;
    in_EAX[5] = in_EAX[5] + in_EDX;
    if (in_EAX[8] == 0) {
      in_EAX[7] = (int)piVar2;
    }
    else {
      *(int **)(in_EAX[8] + 0x18) = piVar2;
      piVar2[5] = in_EAX[8];
    }
    in_EAX[8] = (int)piVar2;
    if ((uint)in_EAX[1] <= (uint)(*piVar2 + piVar2[1])) {
      FUN_000ddaf0(); /* LbErrorLog("heapmgr.cpp", line 135, "Disaster. Handle allocated past end of heap area") */
      piVar2 = extraout_ECX;
    }
  }
  return piVar2;
}

/******************************************************************************
 * Function : sub_03aa24 (Ghidra: FUN_0003aa24)
 * Prototype: void sub_03aa24(void);
 * Address  : 0x3aa24 (Size: 62 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3a742, 0x6e159
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003aa24(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_EDX;
  
  if (*(int *)(in_EDX + 0x18) != 0) {
    iVar1 = *(int *)(in_EDX + 0x14);
    *(int *)(*(int *)(in_EDX + 0x18) + 0x14) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(in_EDX + 0x18);
    }
    else {
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_EDX + 0x18);
    }
    *(int *)(*(int *)(in_EAX + 0x20) + 0x18) = in_EDX;
    uVar2 = *(undefined4 *)(in_EAX + 0x20);
    *(undefined4 *)(in_EDX + 0x18) = 0;
    *(undefined4 *)(in_EDX + 0x14) = uVar2;
    *(int *)(in_EAX + 0x20) = in_EDX;
  }
  return;
}

/******************************************************************************
 * Function : sub_03aa62 (Ghidra: FUN_0003aa62)
 * Prototype: undefined8 sub_03aa62(void);
 * Address  : 0x3aa62 (Size: 48 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3a5cb, 0x6e2aa
 * Callees  : 1 -> 0x3aa92
 ******************************************************************************/
undefined8 FUN_0003aa62(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  if (*(int *)(in_EAX + 0x1c) != 0) {
    iVar1 = *(int *)(in_EAX + 0x1c);
    do {
      if ((*(byte *)(iVar1 + 8) & 2) == 0) {
        uVar2 = FUN_0003aa92();
        return CONCAT44(in_EDX,uVar2);
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    } while (iVar1 != 0);
  }
  return CONCAT44(in_EDX,0xffffffff);
}

/******************************************************************************
 * Function : sub_03aa92 (Ghidra: FUN_0003aa92)
 * Prototype: undefined2 sub_03aa92(void);
 * Address  : 0x3aa92 (Size: 191 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3aa62
 * Callees  : 2 -> 0xe6a10, 0xf0b60
 ******************************************************************************/
undefined2 FUN_0003aa92(void)

{
  undefined2 uVar1;
  int *in_EAX;
  int *piVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int iVar3;
  
  if (*(int *)(in_EDX + 0xc) == 0) {
    in_EAX[6] = *(int *)(in_EDX + 0x10);
  }
  else {
    *(undefined4 *)(*(int *)(in_EDX + 0xc) + 0x10) = *(undefined4 *)(in_EDX + 0x10);
  }
  if (*(int *)(in_EDX + 0x10) != 0) {
    iVar3 = *(int *)(in_EDX + 0xc);
    *(int *)(*(int *)(in_EDX + 0x10) + 0xc) = iVar3;
    if ((*(byte *)(*(int *)(in_EDX + 0x10) + 8) & 4) == 0) {
      if (iVar3 == 0) {
        FUN_000f0b60();
        piVar2 = *(int **)(extraout_ECX_00 + 0x10);
        iVar3 = *in_EAX;
        in_EDX = extraout_ECX_00;
      }
      else {
        FUN_000f0b60();
        iVar3 = **(int **)(extraout_ECX + 0xc) + (*(int **)(extraout_ECX + 0xc))[1];
        piVar2 = *(int **)(extraout_ECX + 0x10);
        in_EDX = extraout_ECX;
      }
      *piVar2 = iVar3;
    }
  }
  if (*(int *)(in_EDX + 0x14) == 0) {
    in_EAX[7] = *(int *)(in_EDX + 0x18);
  }
  else {
    *(undefined4 *)(*(int *)(in_EDX + 0x14) + 0x18) = *(undefined4 *)(in_EDX + 0x18);
  }
  if (*(int *)(in_EDX + 0x18) == 0) {
    in_EAX[8] = *(int *)(in_EDX + 0x14);
  }
  else {
    *(undefined4 *)(*(int *)(in_EDX + 0x18) + 0x14) = *(undefined4 *)(in_EDX + 0x14);
  }
  in_EAX[4] = in_EAX[4] + -1;
  in_EAX[5] = in_EAX[5] - *(int *)(in_EDX + 4);
  uVar1 = *(undefined2 *)(in_EDX + 10);
  FUN_000e6a10();
  return uVar1;
}

/******************************************************************************
 * Function : dk_heap_start_end_size_03ab51 (Ghidra: FUN_0003ab51)
 * Prototype: void dk_heap_start_end_size_03ab51(void);
 * Address  : 0x3ab51 (Size: 397 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : String 'Heap Start %p, End %p, Size %d'
 * Callers  : 1 -> 0x6e294
 * Callees  : 2 -> 0xe6d80, 0xe7714
 * Strings  :
 *   - 0x164cd9: "Heap Start %p, End %p, Size %d"
 *   - 0x164cf8: "Gap to first block %d"
 *   - 0x164d0e: "Block Start %p, End %p, Size %d"
 *   - 0x164d2e: "Gap   Start %p, End %p, Size %d"
 *   - 0x164d4e: "Gap   Start %p, End %p, Size %d"
 ******************************************************************************/
void FUN_0003ab51(void)

{
  uint *puVar1;
  undefined4 *in_EAX;
  uint uVar2;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar3;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  
  if ((in_EAX[4] != 0) && (in_EAX[6] != 0)) {
    FUN_000e7714(&DAT_0019cbac,s_Heap_Start__p__End__p__Size__d_00164cd9,*in_EAX,in_EAX[1],in_EAX[2]
                );
    piVar3 = extraout_ECX;
    if (DAT_003d9818 != 0) {
      FUN_000e6d80();
      piVar3 = extraout_ECX_00;
    }
    FUN_000e7714(&DAT_0019cbac,s_Gap_to_first_block__d_00164cf8,*(int *)piVar3[6] - *piVar3);
    iVar4 = extraout_ECX_01;
    if (DAT_003d9818 != 0) {
      FUN_000e6d80();
      iVar4 = extraout_ECX_02;
    }
    piVar3 = *(int **)(iVar4 + 0x18);
    iVar4 = unaff_EBX + 0x20;
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[4]) {
      FUN_000e7714(&DAT_0019cbac,s_Block_Start__p__End__p__Size__d_00164d0e,*piVar3,
                   piVar3[1] + *piVar3,piVar3[1]);
      iVar5 = extraout_ECX_03;
      if (DAT_003d9818 != 0) {
        FUN_000e6d80(iVar4 / (int)(uint)DAT_0019cba6);
        iVar5 = extraout_ECX_04;
      }
      iVar7 = iVar4 + 0x10;
      if (piVar3[4] == 0) {
        uVar2 = *piVar3 + piVar3[1];
        if (uVar2 < *(uint *)(iVar5 + 4)) {
          iVar6 = *(int *)(iVar5 + 4) - uVar2;
          uVar9 = *(uint *)(iVar5 + 4);
          pcVar8 = s_Gap_Start__p__End__p__Size__d_00164d2e;
LAB_0003ac7a:
          FUN_000e7714(&DAT_0019cbac,pcVar8,uVar2,uVar9,iVar6);
          if (DAT_003d9818 != 0) {
            FUN_000e6d80(iVar7 / (int)(uint)DAT_0019cba6);
          }
          iVar7 = iVar4 + 0x20;
        }
      }
      else {
        puVar1 = (uint *)piVar3[4];
        uVar2 = *piVar3 + piVar3[1];
        if (uVar2 < *puVar1) {
          iVar6 = *puVar1 - uVar2;
          uVar9 = *puVar1;
          pcVar8 = s_Gap_Start__p__End__p__Size__d_00164d4e;
          goto LAB_0003ac7a;
        }
      }
      iVar4 = iVar7;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_03acde (Ghidra: FUN_0003acde)
 * Prototype: void sub_03acde(void);
 * Address  : 0x3acde (Size: 91 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf0b60
 ******************************************************************************/
void FUN_0003acde(void)

{
  int in_EAX;
  int *piVar1;
  int *extraout_ECX;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if ((*(int *)(in_EAX + 0x10) != 0) && (piVar1 = *(int **)(in_EAX + 0x18), piVar1 != (int *)0x0)) {
    for (; piVar1[4] != 0; piVar1 = (int *)piVar1[4]) {
      if ((uint)(piVar1[1] + *piVar1) < *(uint *)piVar1[4]) {
        if (piVar2 == (int *)0x0) {
          piVar2 = piVar1;
        }
        if ((*(byte *)(piVar1[4] + 8) & 4) == 0) {
          FUN_000f0b60();
          *(int *)extraout_ECX[4] = *extraout_ECX + extraout_ECX[1];
          return;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_03ad39 (Ghidra: FUN_0003ad39)
 * Prototype: void sub_03ad39(void);
 * Address  : 0x3ad39 (Size: 65 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a5cb
 * Callees  : 1 -> 0xf0b60
 ******************************************************************************/
void FUN_0003ad39(void)

{
  int in_EAX;
  int *extraout_ECX;
  int *piVar1;
  
  if (*(int *)(in_EAX + 0x10) != 0) {
    for (piVar1 = *(int **)(in_EAX + 0x18); piVar1[4] != 0; piVar1 = (int *)piVar1[4]) {
      if ((uint)(*piVar1 + piVar1[1]) < *(uint *)piVar1[4]) {
        FUN_000f0b60();
        *(int *)extraout_ECX[4] = extraout_ECX[1] + *extraout_ECX;
        piVar1 = extraout_ECX;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_03ad7a (Ghidra: FUN_0003ad7a)
 * Prototype: undefined8 sub_03ad7a(void);
 * Address  : 0x3ad7a (Size: 28 bytes)
 * Module   : heapmgr.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a8f7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0003ad7a(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  if (*(int *)(in_EAX + 0x10) < *(int *)(in_EAX + 0xc)) {
    for (iVar1 = in_EAX + 0x24; *(short *)(iVar1 + 8) != 0; iVar1 = iVar1 + 0x1c) {
    }
  }
  else {
    iVar1 = 0;
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_03ad98 (Ghidra: FUN_0003ad98)
 * Prototype: undefined4 sub_03ad98(void);
 * Address  : 0x3ad98 (Size: 89 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3ef05, 0x3fed7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003ad98(void)

{
  byte *pbVar1;
  byte *in_EAX;
  uint uVar2;
  int in_EDX;
  int unaff_EBX;
  
  uVar2 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    pbVar1 = (&DAT_001ae9fc)[uVar2];
    if (pbVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((pbVar1[0x1f] == 5) && (in_EAX != pbVar1)) && ((*pbVar1 & 0x10) == 0)) &&
       (((pbVar1[1] & 2) == 0 && (pbVar1[7] == 0x62)))) break;
    uVar2 = (uint)*(ushort *)(pbVar1 + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03adf1 (Ghidra: FUN_0003adf1)
 * Prototype: undefined4 sub_03adf1(void);
 * Address  : 0x3adf1 (Size: 79 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3fbe3
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003adf1(void)

{
  byte *pbVar1;
  int in_EAX;
  uint uVar2;
  int in_EDX;
  
  uVar2 = (*(uint *)((int)&DAT_00279203 + (in_EAX + in_EDX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    pbVar1 = (&DAT_001ae9fc)[uVar2];
    if (pbVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((pbVar1[0x1f] == 5) && ((*pbVar1 & 0x10) == 0)) && ((pbVar1[1] & 2) == 0)) &&
       (pbVar1[7] == 10)) break;
    uVar2 = (uint)*(ushort *)(pbVar1 + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03ae40 (Ghidra: FUN_0003ae40)
 * Prototype: undefined4 sub_03ae40(void);
 * Address  : 0x3ae40 (Size: 89 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3aef2
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003ae40(void)

{
  byte *pbVar1;
  byte *in_EAX;
  uint uVar2;
  int in_EDX;
  int unaff_EBX;
  
  uVar2 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    pbVar1 = (&DAT_001ae9fc)[uVar2];
    if (pbVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((pbVar1[0x1f] == 5) && (pbVar1 != in_EAX)) && ((*pbVar1 & 0x10) == 0)) &&
       (((pbVar1[1] & 2) == 0 && (pbVar1[7] == 10)))) break;
    uVar2 = (uint)*(ushort *)(pbVar1 + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03ae99 (Ghidra: FUN_0003ae99)
 * Prototype: undefined4 sub_03ae99(void);
 * Address  : 0x3ae99 (Size: 89 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3af4b
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003ae99(void)

{
  byte *pbVar1;
  byte *in_EAX;
  uint uVar2;
  int in_EDX;
  int unaff_EBX;
  
  uVar2 = (*(uint *)((int)&DAT_00279203 + (in_EDX + unaff_EBX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    pbVar1 = (&DAT_001ae9fc)[uVar2];
    if (pbVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((((pbVar1[0x1f] == 5) && (pbVar1 != in_EAX)) && ((*pbVar1 & 0x10) == 0)) &&
       (((pbVar1[1] & 2) == 0 && (pbVar1[7] == 0x4a)))) break;
    uVar2 = (uint)*(ushort *)(pbVar1 + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_03b2c0 (Ghidra: FUN_0003b2c0)
 * Prototype: uint sub_03b2c0(void);
 * Address  : 0x3b2c0 (Size: 78 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3c458, 0x3c53a
 * Callees  : 1 -> 0x3f98b
 ******************************************************************************/
uint FUN_0003b2c0(void)

{
  int in_EAX;
  uint extraout_ECX;
  uint in_EDX;
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_002e6eee;
  do {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (((*(byte *)(uVar1 + 0x1a) == in_EDX) && (*(char *)(uVar1 + 6) == *(char *)(in_EAX + 6))) &&
       (*(char *)(uVar1 + 0x13) == '\0')) {
      uVar2 = FUN_0003f98b();
      uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
      in_EDX = extraout_ECX;
      if ((int)uVar2 == 0) {
        return uVar1;
      }
    }
    uVar1 = (uint)*(ushort *)(uVar1 + 0x67);
  } while( true );
}

/******************************************************************************
 * Function : sub_03b3a4 (Ghidra: FUN_0003b3a4)
 * Prototype: undefined4 sub_03b3a4(void);
 * Address  : 0x3b3a4 (Size: 69 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3b643
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0003b3a4(void)

{
  int iVar1;
  int iVar2;
  short in_AX;
  short in_DX;
  undefined2 unaff_BX;
  
  if (DAT_00348294 < 0x40) {
    iVar1 = DAT_00348294 * 2;
    iVar2 = DAT_00348294 * 2;
    DAT_00348294 = DAT_00348294 + 1;
    (&DAT_00348196)[iVar2] = unaff_BX;
    (&DAT_00348194)[iVar1] = in_AX * 3 + 1 + (in_DX * 3 + 1) * 0x100;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03b3e9 (Ghidra: FUN_0003b3e9)
 * Prototype: void sub_03b3e9(void);
 * Address  : 0x3b3e9 (Size: 64 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003b3e9(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = in_EAX;
  for (iVar3 = 0; uVar1 = DAT_002e8bee, iVar3 < *(int *)(in_EAX + 0x116f); iVar3 = iVar3 + 1) {
    *(undefined2 *)(iVar2 + 0x106d) = 0;
    iVar2 = iVar2 + 4;
  }
  *(undefined4 *)(in_EAX + 0x116f) = 0;
  DAT_00348294 = 0;
  *(undefined4 *)(in_EAX + 0x116b) = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_03b429 (Ghidra: FUN_0003b429)
 * Prototype: bool sub_03b429(void);
 * Address  : 0x3b429 (Size: 50 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3bb5e, 0x3bb93, 0x3bcbe, 0x3bdb1, 0x3bec5, 0x3bfa4, 0x3c096, 0x3c17e
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_0003b429(void)

{
  int iVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  int unaff_EBX;
  
  iVar1 = *(int *)(unaff_EBX + 0x116f);
  *(int *)(unaff_EBX + 0x116f) = iVar1 + 1;
  *(undefined2 *)(unaff_EBX + 0x106b + iVar1 * 4) = in_AX;
  *(undefined2 *)(unaff_EBX + 0x106d + iVar1 * 4) = in_DX;
  return *(int *)(unaff_EBX + 0x116f) != 0x40;
}

/******************************************************************************
 * Function : sub_03b45b (Ghidra: FUN_0003b45b)
 * Prototype: bool sub_03b45b(void);
 * Address  : 0x3b45b (Size: 66 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3b49d
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_0003b45b(void)

{
  int iVar1;
  short in_AX;
  short *psVar2;
  int in_ECX;
  short in_DX;
  short unaff_BX;
  
  iVar1 = *(int *)(in_ECX + 0x116f);
  *(int *)(in_ECX + 0x116f) = iVar1 + 1;
  psVar2 = (short *)(in_ECX + 0x106b + iVar1 * 4);
  psVar2[1] = unaff_BX;
  *psVar2 = in_AX * 3 + 1 + (in_DX * 3 + 1) * 0x100;
  return *(int *)(in_ECX + 0x116f) != 0x40;
}

/******************************************************************************
 * Function : sub_03b49d (Ghidra: FUN_0003b49d)
 * Prototype: uint sub_03b49d(void);
 * Address  : 0x3b49d (Size: 422 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3b643
 * Callees  : 2 -> 0x3b45b, 0x3f80c
 ******************************************************************************/
uint FUN_0003b49d(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_EDX;
  uint uVar5;
  int unaff_EBX;
  uint uVar6;
  
  iVar1 = in_EAX * 3 + 1;
  iVar2 = in_EDX * 3 + 1;
  iVar3 = ((&DAT_0019033b)[iVar1] + (&DAT_0019033f)[in_EDX * 3] * 0x55) * 6;
  uVar4 = (uint)((&DAT_002d33ca)[iVar3] & 7);
  if ((&DAT_002d33c5)[(in_EDX * 0x55 + in_EAX) * 6] == '\n') {
    if ((*(uint *)((int)&DAT_00279203 + (iVar2 * 0x100 + iVar1) * 5 + 1) >> 0x1c &
        1 << (*(byte *)(unaff_EBX + 0xe9f) & 0x1f)) == 0) goto LAB_0003b631;
    iVar1 = FUN_0003f80c();
  }
  else {
    if (((((&DAT_002d33c5)[(in_EDX * 0x55 + in_EAX) * 6] != '\v') &&
         (((uint)(byte)(&DAT_002d33c8)[iVar3] * 0x45 == 0 ||
          (*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar3] * 0x45) == 7)))) ||
        (uVar6 = (uint)*(char *)(unaff_EBX + 0xe9f), uVar4 == uVar6)) ||
       (((((uVar4 < DAT_002eb542 && (uVar5 = (uint)DAT_002eb543, uVar4 != uVar5)) &&
          (uVar6 != uVar5)) &&
         (((((uint)(byte)(&DAT_0019d0f2)[uVar4 * 0x4ef] & 1 << (*(byte *)(unaff_EBX + 0xe9f) & 0x1f)
            ) != 0 && (uVar6 != uVar5)) &&
          ((uVar4 != uVar5 &&
           (((uint)(byte)(&DAT_0019d0f2)[uVar6 * 0x4ef] & 1 << ((&DAT_002d33ca)[iVar3] & 7)) != 0)))
          ))) || ((*(uint *)((int)&DAT_00279203 + (iVar2 * 0x100 + iVar1) * 5 + 1) >> 0x1c &
                  1 << (*(byte *)(unaff_EBX + 0xe9f) & 0x1f)) == 0)))) goto LAB_0003b631;
    iVar1 = FUN_0003f80c();
  }
  if (iVar1 != 0) {
    uVar4 = FUN_0003b45b();
    return uVar4;
  }
LAB_0003b631:
  return (uint)(*(int *)(unaff_EBX + 0x116f) != 0x40);
}

/******************************************************************************
 * Function : sub_03b643 (Ghidra: FUN_0003b643)
 * Prototype: void sub_03b643(void);
 * Address  : 0x3b643 (Size: 1307 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 3 -> 0x3b3a4, 0x3b49d, 0x3f80c
 ******************************************************************************/
void FUN_0003b643(void)

{
  int iVar1;
  ushort *in_EAX;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_7c;
  uint local_78;
  char *local_48;
  uint local_3c;
  int local_2c;
  uint local_28;
  uint local_1c;
  
  iVar1 = DAT_00199228;
  if ((*in_EAX != 0) && (*(int *)((int)in_EAX + 0x116f) < 0x40)) {
    local_7c = 0x1fe;
    iVar6 = 0;
    pcVar2 = (char *)(DAT_00199228 + 0x1c39);
    local_2c = 0;
    do {
      iVar5 = iVar6 * 0x55 + iVar1;
      iVar3 = local_2c;
      do {
        pbVar4 = &DAT_002d33c5 + iVar3;
        iVar3 = iVar3 + 6;
        *(bool *)iVar5 = ((&DAT_001921c6)[(uint)*pbVar4 * 0x16] & 0x29) != 0;
        iVar5 = iVar5 + 1;
      } while (iVar3 != local_7c);
      local_7c = local_7c + 0x1fe;
      iVar6 = iVar6 + 1;
      local_2c = local_2c + 0x1fe;
    } while (iVar6 < 0x55);
    local_78 = *(byte *)((&DAT_001ae9fc)[*in_EAX] + 0xe) / 3;
    local_1c = *(byte *)((&DAT_001ae9fc)[*in_EAX] + 0x10) / 3;
    pbVar4 = (byte *)(local_1c * 0x55 + local_78 + iVar1);
    local_28 = 0;
    *pbVar4 = *pbVar4 | 2;
    uVar7 = 0;
    local_48 = pcVar2;
    do {
      iVar6 = local_78 + local_1c * 0x55 + iVar1;
      local_3c = 0;
      if ((*(byte *)(iVar6 + -1) & 1) == 0) {
        if ((*(byte *)(iVar6 + -1) & 2) == 0) {
          *(byte *)(iVar6 + -1) = *(byte *)(iVar6 + -1) | 2;
          pcVar2[uVar7 * 2] = (char)local_78 + -1;
          (pcVar2 + uVar7 * 2)[1] = (char)local_1c;
          uVar7 = uVar7 + 1;
          iVar6 = FUN_0003b49d();
          if (iVar6 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = 8;
        *(byte *)(iVar6 + -1) = *(byte *)(iVar6 + -1) | 2;
        if (((DAT_00348294 < 0x40 - *(int *)((int)in_EAX + 0x116f)) &&
            ((((&DAT_002d33c5)[(local_1c * 0x55 + (local_78 - 1)) * 6] == '\x02' ||
              ((&DAT_002d33c5)[(local_1c * 0x55 + (local_78 - 1)) * 6] == '\x03')) &&
             ((*(uint *)((int)&DAT_00279203 +
                        ((local_1c * 3 + 1) * 0x100 + (local_78 - 1) * 3 + 1) * 5 + 1) >> 0x1c &
              1 << (*(byte *)((int)in_EAX + 0xe9f) & 0x1f)) != 0)))) &&
           (iVar6 = FUN_0003f80c(), iVar6 != 0)) {
          FUN_0003b3a4();
        }
      }
      iVar6 = local_78 + local_1c * 0x55 + iVar1;
      if ((*(byte *)(iVar6 + 1) & 1) == 0) {
        if ((*(byte *)(iVar6 + 1) & 2) == 0) {
          *(byte *)(iVar6 + 1) = *(byte *)(iVar6 + 1) | 2;
          pcVar2[uVar7 * 2] = (char)local_78 + '\x01';
          (pcVar2 + uVar7 * 2)[1] = (char)local_1c;
          uVar7 = uVar7 + 1;
          iVar6 = FUN_0003b49d();
          if (iVar6 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = local_3c | 2;
        *(byte *)(iVar6 + 1) = *(byte *)(iVar6 + 1) | 2;
        if (((DAT_00348294 < 0x40 - *(int *)((int)in_EAX + 0x116f)) &&
            (((&DAT_002d33c5)[(local_1c * 0x55 + local_78 + 1) * 6] == '\x02' ||
             ((&DAT_002d33c5)[(local_1c * 0x55 + local_78 + 1) * 6] == '\x03')))) &&
           (((*(uint *)((int)&DAT_00279203 +
                       ((local_1c * 3 + 1) * 0x100 + (local_78 + 1) * 3 + 1) * 5 + 1) >> 0x1c &
             1 << (*(byte *)((int)in_EAX + 0xe9f) & 0x1f)) != 0 &&
            (iVar6 = FUN_0003f80c(local_1c), iVar6 != 0)))) {
          FUN_0003b3a4();
        }
      }
      iVar6 = (local_1c - 1) * 0x55 + local_78;
      pbVar4 = (byte *)(iVar1 + iVar6);
      if ((*pbVar4 & 1) == 0) {
        if ((*pbVar4 & 2) == 0) {
          *pbVar4 = *pbVar4 | 2;
          pcVar2[uVar7 * 2] = (char)local_78;
          (pcVar2 + uVar7 * 2)[1] = (char)local_1c + -1;
          uVar7 = uVar7 + 1;
          iVar6 = FUN_0003b49d();
          if (iVar6 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = local_3c | 1;
        *pbVar4 = *pbVar4 | 2;
        if (((DAT_00348294 < 0x40 - *(int *)((int)in_EAX + 0x116f)) &&
            (((&DAT_002d33c5)[iVar6 * 6] == '\x02' || ((&DAT_002d33c5)[iVar6 * 6] == '\x03')))) &&
           (((*(uint *)((int)&DAT_00279203 +
                       (((local_1c - 1) * 3 + 1) * 0x100 + local_78 * 3 + 1) * 5 + 1) >> 0x1c &
             1 << (*(byte *)((int)in_EAX + 0xe9f) & 0x1f)) != 0 &&
            (iVar6 = FUN_0003f80c(), iVar6 != 0)))) {
          FUN_0003b3a4();
        }
      }
      iVar6 = (local_1c + 1) * 0x55 + local_78;
      pbVar4 = (byte *)(iVar1 + iVar6);
      if ((*pbVar4 & 1) == 0) {
        if ((*pbVar4 & 2) == 0) {
          *pbVar4 = *pbVar4 | 2;
          pcVar2[uVar7 * 2] = (char)local_78;
          (pcVar2 + uVar7 * 2)[1] = (char)local_1c + '\x01';
          uVar7 = uVar7 + 1;
          iVar6 = FUN_0003b49d();
          if (iVar6 == 0) {
            return;
          }
        }
      }
      else {
        local_3c = local_3c | 4;
        *pbVar4 = *pbVar4 | 2;
        if (((DAT_00348294 < 0x40 - *(int *)((int)in_EAX + 0x116f)) &&
            ((((&DAT_002d33c5)[iVar6 * 6] == '\x02' || ((&DAT_002d33c5)[iVar6 * 6] == '\x03')) &&
             ((*(uint *)((int)&DAT_00279203 +
                        (((local_1c + 1) * 3 + 1) * 0x100 + local_78 * 3 + 1) * 5 + 1) >> 0x1c &
              1 << (*(byte *)((int)in_EAX + 0xe9f) & 0x1f)) != 0)))) &&
           (iVar6 = FUN_0003f80c(), iVar6 != 0)) {
          FUN_0003b3a4();
        }
      }
      iVar6 = (local_1c - 1) * 0x55 + local_78 + iVar1;
      iVar3 = (local_1c + 1) * 0x55 + local_78 + iVar1;
      while( true ) {
        if (*(int *)(&DAT_0017bff0 + local_3c * 5) == 0) break;
        if (local_3c == 0xf) {
          pbVar4 = (byte *)(iVar6 + 1);
          *pbVar4 = *pbVar4 | 2;
          pbVar4 = (byte *)(iVar3 + 1);
          *pbVar4 = *pbVar4 | 2;
          pbVar4 = (byte *)(iVar3 + -1);
          *pbVar4 = *pbVar4 | 2;
          local_3c = 0;
          pbVar4 = (byte *)(iVar6 + -1);
          *pbVar4 = *pbVar4 | 2;
        }
        else {
          iVar5 = *(int *)(&DAT_0017bff0 + local_3c * 5) * 2;
          pbVar4 = (byte *)(local_78 + (int)(char)(&DAT_0017c040)[iVar5] +
                            (local_1c + (int)(char)(&DAT_0017c041)[iVar5]) * 0x55 + iVar1);
          *pbVar4 = *pbVar4 | 2;
          local_3c = local_3c & (int)(char)(&DAT_0017bff4)[local_3c * 5];
        }
      }
      local_78 = (uint)*local_48;
      local_28 = local_28 + 1;
      local_1c = (uint)local_48[1];
      local_48 = local_48 + 2;
    } while (local_28 <= uVar7);
  }
  return;
}

/******************************************************************************
 * Function : sub_03bb5e (Ghidra: FUN_0003bb5e)
 * Prototype: void sub_03bb5e(void);
 * Address  : 0x3bb5e (Size: 53 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 1 -> 0x3b429
 ******************************************************************************/
void FUN_0003bb5e(void)

{
  int in_EAX;
  int iVar1;
  
  for (iVar1 = 0; (*(int *)(in_EAX + 0x116f) < 0x40 && (iVar1 < DAT_00348294)); iVar1 = iVar1 + 1) {
    FUN_0003b429();
  }
  return;
}

/******************************************************************************
 * Function : sub_03bb93 (Ghidra: FUN_0003bb93)
 * Prototype: undefined4 sub_03bb93(void);
 * Address  : 0x3bb93 (Size: 299 bytes)
 * Module   : heapmgr.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3c289
 * Callees  : 3 -> 0x3b429, 0x51374, 0xca7ac
 ******************************************************************************/
undefined4 FUN_0003bb93(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  int iVar3;
  uint uVar4;
  int local_18;
  
  iVar1 = FUN_000ca7ac();
  iVar3 = *(char *)(in_EAX + 0xe9f) * 0x1508;
  if ((*(short *)(&DAT_002e059c + iVar3) != 0) &&
     (uVar4 = DAT_002e6eb6, local_18 = in_EDX, ((&DAT_002e0591)[iVar3] & 1) != 0)) {
    for (; (uVar4 = (&DAT_001ae9fc)[uVar4], *(int *)(in_EAX + 0x116f) < 0x40 &&
           ((local_18 != 0 && (DAT_001ae9fc < uVar4)))); uVar4 = (uint)*(ushort *)(uVar4 + 0x67)) {
      if ((*(char *)(uVar4 + 6) != *(char *)(in_EAX + 0xe9f)) &&
         ((*(char *)(uVar4 + 7) == 'C' && ((*(byte *)(uVar4 + 1) & 1) == 0)))) {
        if (iVar1 == 0) {
          if ((int)*(char *)(in_EAX + 0xe9f) ==
              (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
            FUN_00051374();
          }
          return 0;
        }
        uVar2 = (uint)CONCAT11(*(undefined1 *)(uVar4 + 0x10),*(undefined1 *)(uVar4 + 0xe));
        if ((*(uint *)((int)&DAT_00279203 + uVar2 * 5 + 1) >> 0x1c &
            1 << (*(byte *)(in_EAX + 0xe9f) & 0x1f)) != 0) {
          local_18 = local_18 + -1;
          FUN_0003b429(iVar1,uVar2);
        }
      }
    }
  }
  return 1;
}

