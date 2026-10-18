/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: engine3.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 36
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0948a0 (Ghidra: FUN_000948a0)
 * Prototype: void sub_0948a0(undefined4 param_1);
 * Address  : 0x948a0 (Size: 3606 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x94824
 ******************************************************************************/
void FUN_000948a0(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int extraout_ECX;
  int extraout_ECX_00;
  int *in_EDX;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 unaff_retaddr;
  int local_20;
  
  puVar3 = DAT_00387d20;
  bVar10 = 0;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EAX + 2) & *(ushort *)(in_EDX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (*unaff_EBX - *in_EDX) * (in_EDX[1] - in_EAX[1]);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      if (((*(ushort *)(unaff_EBX + 2) | *(ushort *)(in_EAX + 2) | *(ushort *)(in_EDX + 2)) & 3) !=
          0) {
        puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
        DAT_00387d20 = DAT_00387d20 + 0x1a;
        *puVar1 = (&DAT_00191d6c)
                  [((*(ushort *)(unaff_EBX + 2) & 0xff) & 0xffffff03) * 0x10 +
                   ((*(ushort *)(in_EDX + 2) & 0xff) & 0xffffff03) +
                   ((*(ushort *)(in_EAX + 2) & 0xff) & 0xffffff03) * 4];
        uVar2 = (&DAT_00387220)[iVar4];
        *(undefined1 *)(puVar3 + 1) = 9;
        *puVar3 = uVar2;
        (&DAT_00387220)[iVar4] = puVar3;
        *(undefined2 *)((int)puVar3 + 6) = in_CX;
        FUN_00094824(param_1);
        FUN_00094824(unaff_retaddr);
        FUN_00094824(unaff_ESI);
        puVar5 = DAT_00387d20;
        if (0x1f < (int)puVar3[8]) {
          if (0x1f < (int)puVar3[0xd]) {
            if (*(int *)(local_20 + 0x18) < 0x20) {
              *(undefined *)((int)DAT_00387d20 + 5) =
                   (&DAT_00191d6c)
                   [((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03) +
                    (uint)(*(ushort *)(puVar3 + 4) & 3) * 4 + (*(ushort *)(local_20 + 8) & 3) * 0x10
                   ];
              uVar2 = (&DAT_00387220)[iVar4];
              *(undefined1 *)(DAT_00387d20 + 1) = 9;
              *DAT_00387d20 = uVar2;
              (&DAT_00387220)[iVar4] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
              puVar3[0x11] = puVar3[6];
              puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
              (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
              puVar3[0x14] = puVar3[0xb];
              puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
              (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
              puVar8 = DAT_00387d20 + (uint)bVar10 * -2 + 0xd;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
              DAT_00387d20[0xc] = puVar3[0xc];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              puVar8 = DAT_00387d20 + (uint)bVar10 * -2 + 8;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
              DAT_00387d20[7] = puVar3[7];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (puVar3[8] - *(int *)(local_20 + 0x18));
              DAT_00387d20 = DAT_00387d20 + 0x1a;
              puVar3[0x17] = *(int *)(local_20 + 0x10) +
                             ((puVar3[6] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
              puVar3[0x18] = *(int *)(local_20 + 0x14) +
                             ((puVar3[7] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
              puVar3[0x19] = 0x20;
              (*DAT_00388304)(unaff_ESI,puVar3 + 0x14,puVar3 + 0x17);
              puVar3[0xe] = puVar3[0xe] + ((puVar3[4] - puVar3[0xe]) * iVar4 >> 8);
              puVar3[0xf] = puVar3[0xf] + ((puVar3[5] - puVar3[0xf]) * iVar4 >> 8);
              puVar3[0x10] = puVar3[0x10] + ((puVar3[6] - puVar3[0x10]) * iVar4 >> 8);
              puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
              puVar5[2] = puVar3[0xc];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              puVar5[0x11] = puVar3[0x17];
              puVar5[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 0x18];
              (puVar5 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1];
              puVar5[0x14] = puVar3[0xb];
              puVar5[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
              (puVar5 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
              iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (puVar3[0xd] - *(int *)(local_20 + 0x18));
              puVar5[0x17] = *(int *)(local_20 + 0x10) +
                             ((puVar3[0xb] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
              puVar5[0x18] = *(int *)(local_20 + 0x14) +
                             ((puVar3[0xc] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
              puVar5[0x19] = 0x20;
              (*DAT_00388304)();
              puVar5[0xe] = ((puVar5[9] - puVar5[0xe]) * iVar4 >> 8) + puVar5[0xe];
              puVar5[0xf] = puVar5[0xf] + ((puVar5[10] - puVar5[0xf]) * iVar4 >> 8);
              puVar5[0x10] = ((puVar5[0xb] - puVar5[0x10]) * iVar4 >> 8) + puVar5[0x10];
              return;
            }
            puVar3[0x11] = puVar3[6];
            puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
            (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
            puVar3[0x14] = puVar3[0xb];
            puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
            (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
            puVar5 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
            puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
            puVar3[(uint)bVar10 * -2 + 0x18] = *puVar5;
            (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] =
                 puVar5[(uint)bVar10 * -2 + 1];
            return;
          }
          if (*(int *)(local_20 + 0x18) < 0x20) {
            iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (int)(puVar3[8] - puVar3[0xd]);
            puVar3[0x14] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * iVar4 >> 8);
            puVar3[0x15] = puVar3[0xc] + ((puVar3[7] - puVar3[0xc]) * iVar4 >> 8);
            puVar3[0x16] = 0x20;
            (*DAT_00388304)();
            puVar3[9] = puVar3[9] + ((puVar3[4] - puVar3[9]) * iVar4 >> 8);
            puVar3[10] = puVar3[10] + ((puVar3[5] - puVar3[10]) * iVar4 >> 8);
            puVar3[0xb] = puVar3[0xb] + (iVar4 * (puVar3[6] - puVar3[0xb]) >> 8);
            iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                    (puVar3[8] - *(int *)(local_20 + 0x18));
            puVar3[0x17] = *(int *)(local_20 + 0x10) +
                           ((puVar3[6] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
            puVar3[0x18] = *(int *)(local_20 + 0x14) +
                           ((puVar3[7] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
            puVar3[0x19] = 0x20;
            (*DAT_00388304)();
            puVar3[0xe] = puVar3[0xe] + ((puVar3[4] - puVar3[0xe]) * iVar4 >> 8);
            puVar3[0xf] = puVar3[0xf] + ((puVar3[5] - puVar3[0xf]) * iVar4 >> 8);
            puVar3[0x10] = puVar3[0x10] + (iVar4 * (puVar3[6] - puVar3[0x10]) >> 8);
            puVar3[0x11] = puVar3[6];
            puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
            (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
            return;
          }
          puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
          DAT_00387d20 = DAT_00387d20 + 0x1a;
          *puVar1 = (&DAT_00191d6c)
                    [((*(ushort *)(local_20 + 8) & 0xff) & 0xffffff03) * 0x10 +
                     ((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03) +
                     ((*(ushort *)(puVar3 + 4) & 0xff) & 0xffffff03) * 4];
          uVar2 = (&DAT_00387220)[iVar4];
          *(undefined1 *)(puVar5 + 1) = 9;
          *puVar5 = uVar2;
          (&DAT_00387220)[iVar4] = puVar5;
          *(undefined2 *)((int)puVar5 + 6) = in_CX;
          puVar3[0x11] = puVar3[6];
          puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
          (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
          puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar3[(uint)bVar10 * -2 + 0x18] = *puVar6;
          (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1]
          ;
          puVar8 = puVar5 + (uint)bVar10 * -2 + 8;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
          puVar5[7] = puVar3[7];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          puVar8 = puVar5 + (uint)bVar10 * -2 + 0xd;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
          puVar5[0xc] = puVar3[0xc];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (int)(puVar3[8] - puVar3[0xd]);
          puVar3[0x14] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * iVar4 >> 8);
          puVar3[0x15] = puVar3[0xc] + ((puVar3[7] - puVar3[0xc]) * iVar4 >> 8);
          puVar3[0x16] = 0x20;
          (*DAT_00388304)();
          puVar3[9] = puVar3[9] + ((puVar3[4] - puVar3[9]) * extraout_ECX >> 8);
          puVar3[10] = puVar3[10] + ((puVar3[5] - puVar3[10]) * extraout_ECX >> 8);
          puVar3[0xb] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * extraout_ECX >> 8);
          puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
          puVar5[2] = puVar3[7];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          puVar5[0x11] = puVar3[0x14];
          puVar5[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 0x15];
          (puVar5 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1];
          puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar5[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar5[(uint)bVar10 * -2 + 0x18] = *puVar6;
          (puVar5 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1]
          ;
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[0xd]);
          puVar5[0x14] = puVar3[0xb] + ((*(int *)(local_20 + 0x10) - puVar3[0xb]) * iVar4 >> 8);
          puVar5[0x15] = puVar3[0xc] + ((*(int *)(local_20 + 0x14) - puVar3[0xc]) * iVar4 >> 8);
          puVar5[0x16] = 0x20;
          (*DAT_00388304)();
          puVar5[9] = puVar5[9] + ((puVar5[0xe] - puVar5[9]) * extraout_ECX_00 >> 8);
          puVar5[10] = puVar5[10] + ((puVar5[0xf] - puVar5[10]) * extraout_ECX_00 >> 8);
          puVar5[0xb] = ((puVar5[0x10] - puVar5[0xb]) * extraout_ECX_00 >> 8) + puVar5[0xb];
          return;
        }
        if ((int)puVar3[0xd] < 0x20) {
          puVar5 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar3[(uint)bVar10 * -2 + 0x18] = *puVar5;
          (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1]
          ;
          iVar4 = ((0x20 - puVar3[8]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[8]);
          puVar3[0x11] = puVar3[6] + ((*(int *)(local_20 + 0x10) - puVar3[6]) * iVar4 >> 8);
          puVar3[0x12] = puVar3[7] + ((*(int *)(local_20 + 0x14) - puVar3[7]) * iVar4 >> 8);
          puVar3[0x13] = 0x20;
          (*DAT_00388304)();
          puVar3[4] = puVar3[4] + ((puVar3[0xe] - puVar3[4]) * iVar4 >> 8);
          puVar3[5] = puVar3[5] + ((puVar3[0xf] - puVar3[5]) * iVar4 >> 8);
          puVar3[6] = puVar3[6] + ((puVar3[0x10] - puVar3[6]) * iVar4 >> 8);
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[0xd]);
          puVar3[0x14] = puVar3[0xb] + ((*(int *)(local_20 + 0x10) - puVar3[0xb]) * iVar4 >> 8);
          puVar3[0x15] = puVar3[0xc] + ((*(int *)(local_20 + 0x14) - puVar3[0xc]) * iVar4 >> 8);
          puVar3[0x16] = 0x20;
          (*DAT_00388304)();
          puVar3[9] = puVar3[9] + ((puVar3[0xe] - puVar3[9]) * iVar4 >> 8);
          puVar3[10] = puVar3[10] + ((puVar3[0xf] - puVar3[10]) * iVar4 >> 8);
          puVar3[0xb] = puVar3[0xb] + ((puVar3[0x10] - puVar3[0xb]) * iVar4 >> 8);
          return;
        }
        if (*(int *)(local_20 + 0x18) < 0x20) {
          puVar3[0x14] = puVar3[0xb];
          puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
          (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
          iVar4 = ((0x20 - puVar3[8]) * 0x100) / (int)(puVar3[0xd] - puVar3[8]);
          puVar3[0x11] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
          puVar3[0x12] = puVar3[7] + ((puVar3[0xc] - puVar3[7]) * iVar4 >> 8);
          puVar3[0x13] = 0x20;
          (*DAT_00388304)();
          puVar3[4] = puVar3[4] + ((puVar3[9] - puVar3[4]) * iVar4 >> 8);
          puVar3[5] = puVar3[5] + ((puVar3[10] - puVar3[5]) * iVar4 >> 8);
          puVar3[6] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
          iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                  (puVar3[0xd] - *(int *)(local_20 + 0x18));
          puVar3[0x17] = *(int *)(local_20 + 0x10) +
                         ((puVar3[0xb] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
          puVar3[0x18] = *(int *)(local_20 + 0x14) +
                         ((puVar3[0xc] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
          puVar3[0x19] = 0x20;
          (*DAT_00388304)();
          puVar3[0xe] = puVar3[0xe] + ((puVar3[9] - puVar3[0xe]) * iVar4 >> 8);
          puVar3[0xf] = puVar3[0xf] + ((puVar3[10] - puVar3[0xf]) * iVar4 >> 8);
          puVar3[0x10] = puVar3[0x10] + (iVar4 * (puVar3[0xb] - puVar3[0x10]) >> 8);
          return;
        }
        puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
        DAT_00387d20 = DAT_00387d20 + 0x1a;
        *puVar1 = (&DAT_00191d6c)
                  [(*(ushort *)(local_20 + 8) & 3) * 0x10 +
                   ((*(ushort *)(puVar3 + 4) & 0xff) & 0xffffff03) * 4 +
                   ((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03)];
        uVar2 = (&DAT_00387220)[iVar4];
        *(undefined1 *)(puVar5 + 1) = 9;
        *puVar5 = uVar2;
        (&DAT_00387220)[iVar4] = puVar5;
        *(undefined2 *)((int)puVar5 + 6) = in_CX;
        puVar3[0x14] = puVar3[0xb];
        puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
        (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
             (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
        puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
        puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
        puVar3[(uint)bVar10 * -2 + 0x18] = *puVar6;
        (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
        puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 3;
        puVar5[2] = puVar3[2];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        puVar8 = puVar5 + (uint)bVar10 * -2 + 0xd;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
        puVar5[0xc] = puVar3[0xc];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        iVar4 = ((0x20 - puVar3[8]) * 0x100) / (int)(puVar3[0xd] - puVar3[8]);
        puVar3[0x11] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
        puVar3[0x12] = puVar3[7] + ((puVar3[0xc] - puVar3[7]) * iVar4 >> 8);
        puVar3[0x13] = 0x20;
        (*DAT_00388304)();
        puVar3[4] = puVar3[4] + ((puVar3[9] - puVar3[4]) * iVar4 >> 8);
        puVar3[5] = puVar3[5] + ((puVar3[10] - puVar3[5]) * iVar4 >> 8);
        puVar3[6] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
        puVar8 = puVar5 + (uint)bVar10 * -2 + 8;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 3;
        puVar5[7] = puVar3[2];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        puVar5[0x14] = puVar3[0x11];
        puVar5[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0x12];
        (puVar5 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
             (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1];
        puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
        puVar5[0x17] = *(undefined4 *)(local_20 + 0x10);
        puVar5[(uint)bVar10 * -2 + 0x18] = *puVar6;
        (puVar5 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
        iVar4 = ((0x20 - puVar3[8]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[8]);
        puVar5[0x11] = puVar3[6] + ((*(int *)(local_20 + 0x10) - puVar3[6]) * iVar4 >> 8);
        puVar5[0x12] = puVar3[7] + ((*(int *)(local_20 + 0x14) - puVar3[7]) * iVar4 >> 8);
        puVar5[0x13] = 0x20;
        (*DAT_00388304)();
        puVar5[4] = ((puVar5[0xe] - puVar5[4]) * iVar4 >> 8) + puVar5[4];
        puVar5[5] = puVar5[5] + ((puVar5[0xf] - puVar5[5]) * iVar4 >> 8);
        puVar5[6] = ((puVar5[0x10] - puVar5[6]) * iVar4 >> 8) + puVar5[6];
        return;
      }
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      FUN_00094824(param_1);
      FUN_00094824(param_1);
      FUN_00094824(param_1);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0956b8 (Ghidra: FUN_000956b8)
 * Prototype: void sub_0956b8(undefined4 param_1);
 * Address  : 0x956b8 (Size: 3606 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x98614
 * Callees  : 1 -> 0x94824
 ******************************************************************************/
void FUN_000956b8(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int extraout_ECX;
  int extraout_ECX_00;
  int *in_EDX;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 unaff_retaddr;
  int local_20;
  
  puVar3 = DAT_00387d20;
  bVar10 = 0;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EAX + 2) & *(ushort *)(in_EDX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (*unaff_EBX - *in_EDX) * (in_EDX[1] - in_EAX[1]);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      if (((*(ushort *)(unaff_EBX + 2) | *(ushort *)(in_EAX + 2) | *(ushort *)(in_EDX + 2)) & 3) !=
          0) {
        puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
        DAT_00387d20 = DAT_00387d20 + 0x1a;
        *puVar1 = (&DAT_00191d6c)
                  [((*(ushort *)(unaff_EBX + 2) & 0xff) & 0xffffff03) * 0x10 +
                   ((*(ushort *)(in_EDX + 2) & 0xff) & 0xffffff03) +
                   ((*(ushort *)(in_EAX + 2) & 0xff) & 0xffffff03) * 4];
        uVar2 = (&DAT_00387220)[iVar4];
        *(undefined1 *)(puVar3 + 1) = 9;
        *puVar3 = uVar2;
        (&DAT_00387220)[iVar4] = puVar3;
        *(undefined2 *)((int)puVar3 + 6) = in_CX;
        FUN_00094824(param_1);
        FUN_00094824(unaff_retaddr);
        FUN_00094824(unaff_ESI);
        puVar5 = DAT_00387d20;
        if (0x1f < (int)puVar3[8]) {
          if (0x1f < (int)puVar3[0xd]) {
            if (*(int *)(local_20 + 0x18) < 0x20) {
              *(undefined *)((int)DAT_00387d20 + 5) =
                   (&DAT_00191d6c)
                   [((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03) +
                    (uint)(*(ushort *)(puVar3 + 4) & 3) * 4 + (*(ushort *)(local_20 + 8) & 3) * 0x10
                   ];
              uVar2 = (&DAT_00387220)[iVar4];
              *(undefined1 *)(DAT_00387d20 + 1) = 9;
              *DAT_00387d20 = uVar2;
              (&DAT_00387220)[iVar4] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
              puVar3[0x11] = puVar3[6];
              puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
              (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
              puVar3[0x14] = puVar3[0xb];
              puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
              (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
              puVar8 = DAT_00387d20 + (uint)bVar10 * -2 + 0xd;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
              DAT_00387d20[0xc] = puVar3[0xc];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              puVar8 = DAT_00387d20 + (uint)bVar10 * -2 + 8;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
              DAT_00387d20[7] = puVar3[7];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (puVar3[8] - *(int *)(local_20 + 0x18));
              DAT_00387d20 = DAT_00387d20 + 0x1a;
              puVar3[0x17] = *(int *)(local_20 + 0x10) +
                             ((puVar3[6] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
              puVar3[0x18] = *(int *)(local_20 + 0x14) +
                             ((puVar3[7] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
              puVar3[0x19] = 0x20;
              (*DAT_00388304)(unaff_ESI,puVar3 + 0x14,puVar3 + 0x17);
              puVar3[0xe] = puVar3[0xe] + ((puVar3[4] - puVar3[0xe]) * iVar4 >> 8);
              puVar3[0xf] = puVar3[0xf] + ((puVar3[5] - puVar3[0xf]) * iVar4 >> 8);
              puVar3[0x10] = puVar3[0x10] + ((puVar3[6] - puVar3[0x10]) * iVar4 >> 8);
              puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
              puVar5[2] = puVar3[0xc];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              puVar5[0x11] = puVar3[0x17];
              puVar5[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 0x18];
              (puVar5 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1];
              puVar5[0x14] = puVar3[0xb];
              puVar5[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
              (puVar5 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
              iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (puVar3[0xd] - *(int *)(local_20 + 0x18));
              puVar5[0x17] = *(int *)(local_20 + 0x10) +
                             ((puVar3[0xb] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
              puVar5[0x18] = *(int *)(local_20 + 0x14) +
                             ((puVar3[0xc] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
              puVar5[0x19] = 0x20;
              (*DAT_00388304)();
              puVar5[0xe] = ((puVar5[9] - puVar5[0xe]) * iVar4 >> 8) + puVar5[0xe];
              puVar5[0xf] = puVar5[0xf] + ((puVar5[10] - puVar5[0xf]) * iVar4 >> 8);
              puVar5[0x10] = ((puVar5[0xb] - puVar5[0x10]) * iVar4 >> 8) + puVar5[0x10];
              return;
            }
            puVar3[0x11] = puVar3[6];
            puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
            (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
            puVar3[0x14] = puVar3[0xb];
            puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
            (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
            puVar5 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
            puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
            puVar3[(uint)bVar10 * -2 + 0x18] = *puVar5;
            (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] =
                 puVar5[(uint)bVar10 * -2 + 1];
            return;
          }
          if (*(int *)(local_20 + 0x18) < 0x20) {
            iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (int)(puVar3[8] - puVar3[0xd]);
            puVar3[0x14] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * iVar4 >> 8);
            puVar3[0x15] = puVar3[0xc] + ((puVar3[7] - puVar3[0xc]) * iVar4 >> 8);
            puVar3[0x16] = 0x20;
            (*DAT_00388304)();
            puVar3[9] = puVar3[9] + ((puVar3[4] - puVar3[9]) * iVar4 >> 8);
            puVar3[10] = puVar3[10] + ((puVar3[5] - puVar3[10]) * iVar4 >> 8);
            puVar3[0xb] = puVar3[0xb] + (iVar4 * (puVar3[6] - puVar3[0xb]) >> 8);
            iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                    (puVar3[8] - *(int *)(local_20 + 0x18));
            puVar3[0x17] = *(int *)(local_20 + 0x10) +
                           ((puVar3[6] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
            puVar3[0x18] = *(int *)(local_20 + 0x14) +
                           ((puVar3[7] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
            puVar3[0x19] = 0x20;
            (*DAT_00388304)();
            puVar3[0xe] = puVar3[0xe] + ((puVar3[4] - puVar3[0xe]) * iVar4 >> 8);
            puVar3[0xf] = puVar3[0xf] + ((puVar3[5] - puVar3[0xf]) * iVar4 >> 8);
            puVar3[0x10] = puVar3[0x10] + (iVar4 * (puVar3[6] - puVar3[0x10]) >> 8);
            puVar3[0x11] = puVar3[6];
            puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
            (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
            return;
          }
          puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
          DAT_00387d20 = DAT_00387d20 + 0x1a;
          *puVar1 = (&DAT_00191d6c)
                    [((*(ushort *)(local_20 + 8) & 0xff) & 0xffffff03) * 0x10 +
                     ((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03) +
                     ((*(ushort *)(puVar3 + 4) & 0xff) & 0xffffff03) * 4];
          uVar2 = (&DAT_00387220)[iVar4];
          *(undefined1 *)(puVar5 + 1) = 9;
          *puVar5 = uVar2;
          (&DAT_00387220)[iVar4] = puVar5;
          *(undefined2 *)((int)puVar5 + 6) = in_CX;
          puVar3[0x11] = puVar3[6];
          puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
          (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
          puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar3[(uint)bVar10 * -2 + 0x18] = *puVar6;
          (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1]
          ;
          puVar8 = puVar5 + (uint)bVar10 * -2 + 8;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
          puVar5[7] = puVar3[7];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          puVar8 = puVar5 + (uint)bVar10 * -2 + 0xd;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
          puVar5[0xc] = puVar3[0xc];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (int)(puVar3[8] - puVar3[0xd]);
          puVar3[0x14] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * iVar4 >> 8);
          puVar3[0x15] = puVar3[0xc] + ((puVar3[7] - puVar3[0xc]) * iVar4 >> 8);
          puVar3[0x16] = 0x20;
          (*DAT_00388304)();
          puVar3[9] = puVar3[9] + ((puVar3[4] - puVar3[9]) * extraout_ECX >> 8);
          puVar3[10] = puVar3[10] + ((puVar3[5] - puVar3[10]) * extraout_ECX >> 8);
          puVar3[0xb] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * extraout_ECX >> 8);
          puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
          puVar5[2] = puVar3[7];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          puVar5[0x11] = puVar3[0x14];
          puVar5[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 0x15];
          (puVar5 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1];
          puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar5[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar5[(uint)bVar10 * -2 + 0x18] = *puVar6;
          (puVar5 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1]
          ;
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[0xd]);
          puVar5[0x14] = puVar3[0xb] + ((*(int *)(local_20 + 0x10) - puVar3[0xb]) * iVar4 >> 8);
          puVar5[0x15] = puVar3[0xc] + ((*(int *)(local_20 + 0x14) - puVar3[0xc]) * iVar4 >> 8);
          puVar5[0x16] = 0x20;
          (*DAT_00388304)();
          puVar5[9] = puVar5[9] + ((puVar5[0xe] - puVar5[9]) * extraout_ECX_00 >> 8);
          puVar5[10] = puVar5[10] + ((puVar5[0xf] - puVar5[10]) * extraout_ECX_00 >> 8);
          puVar5[0xb] = ((puVar5[0x10] - puVar5[0xb]) * extraout_ECX_00 >> 8) + puVar5[0xb];
          return;
        }
        if ((int)puVar3[0xd] < 0x20) {
          puVar5 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar3[(uint)bVar10 * -2 + 0x18] = *puVar5;
          (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1]
          ;
          iVar4 = ((0x20 - puVar3[8]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[8]);
          puVar3[0x11] = puVar3[6] + ((*(int *)(local_20 + 0x10) - puVar3[6]) * iVar4 >> 8);
          puVar3[0x12] = puVar3[7] + ((*(int *)(local_20 + 0x14) - puVar3[7]) * iVar4 >> 8);
          puVar3[0x13] = 0x20;
          (*DAT_00388304)();
          puVar3[4] = puVar3[4] + ((puVar3[0xe] - puVar3[4]) * iVar4 >> 8);
          puVar3[5] = puVar3[5] + ((puVar3[0xf] - puVar3[5]) * iVar4 >> 8);
          puVar3[6] = puVar3[6] + ((puVar3[0x10] - puVar3[6]) * iVar4 >> 8);
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[0xd]);
          puVar3[0x14] = puVar3[0xb] + ((*(int *)(local_20 + 0x10) - puVar3[0xb]) * iVar4 >> 8);
          puVar3[0x15] = puVar3[0xc] + ((*(int *)(local_20 + 0x14) - puVar3[0xc]) * iVar4 >> 8);
          puVar3[0x16] = 0x20;
          (*DAT_00388304)();
          puVar3[9] = puVar3[9] + ((puVar3[0xe] - puVar3[9]) * iVar4 >> 8);
          puVar3[10] = puVar3[10] + ((puVar3[0xf] - puVar3[10]) * iVar4 >> 8);
          puVar3[0xb] = puVar3[0xb] + ((puVar3[0x10] - puVar3[0xb]) * iVar4 >> 8);
          return;
        }
        if (*(int *)(local_20 + 0x18) < 0x20) {
          puVar3[0x14] = puVar3[0xb];
          puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
          (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
          iVar4 = ((0x20 - puVar3[8]) * 0x100) / (int)(puVar3[0xd] - puVar3[8]);
          puVar3[0x11] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
          puVar3[0x12] = puVar3[7] + ((puVar3[0xc] - puVar3[7]) * iVar4 >> 8);
          puVar3[0x13] = 0x20;
          (*DAT_00388304)();
          puVar3[4] = puVar3[4] + ((puVar3[9] - puVar3[4]) * iVar4 >> 8);
          puVar3[5] = puVar3[5] + ((puVar3[10] - puVar3[5]) * iVar4 >> 8);
          puVar3[6] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
          iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                  (puVar3[0xd] - *(int *)(local_20 + 0x18));
          puVar3[0x17] = *(int *)(local_20 + 0x10) +
                         ((puVar3[0xb] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
          puVar3[0x18] = *(int *)(local_20 + 0x14) +
                         ((puVar3[0xc] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
          puVar3[0x19] = 0x20;
          (*DAT_00388304)();
          puVar3[0xe] = puVar3[0xe] + ((puVar3[9] - puVar3[0xe]) * iVar4 >> 8);
          puVar3[0xf] = puVar3[0xf] + ((puVar3[10] - puVar3[0xf]) * iVar4 >> 8);
          puVar3[0x10] = puVar3[0x10] + (iVar4 * (puVar3[0xb] - puVar3[0x10]) >> 8);
          return;
        }
        puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
        DAT_00387d20 = DAT_00387d20 + 0x1a;
        *puVar1 = (&DAT_00191d6c)
                  [(*(ushort *)(local_20 + 8) & 3) * 0x10 +
                   ((*(ushort *)(puVar3 + 4) & 0xff) & 0xffffff03) * 4 +
                   ((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03)];
        uVar2 = (&DAT_00387220)[iVar4];
        *(undefined1 *)(puVar5 + 1) = 9;
        *puVar5 = uVar2;
        (&DAT_00387220)[iVar4] = puVar5;
        *(undefined2 *)((int)puVar5 + 6) = in_CX;
        puVar3[0x14] = puVar3[0xb];
        puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
        (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
             (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
        puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
        puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
        puVar3[(uint)bVar10 * -2 + 0x18] = *puVar6;
        (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
        puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 3;
        puVar5[2] = puVar3[2];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        puVar8 = puVar5 + (uint)bVar10 * -2 + 0xd;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
        puVar5[0xc] = puVar3[0xc];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        iVar4 = ((0x20 - puVar3[8]) * 0x100) / (int)(puVar3[0xd] - puVar3[8]);
        puVar3[0x11] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
        puVar3[0x12] = puVar3[7] + ((puVar3[0xc] - puVar3[7]) * iVar4 >> 8);
        puVar3[0x13] = 0x20;
        (*DAT_00388304)();
        puVar3[4] = puVar3[4] + ((puVar3[9] - puVar3[4]) * iVar4 >> 8);
        puVar3[5] = puVar3[5] + ((puVar3[10] - puVar3[5]) * iVar4 >> 8);
        puVar3[6] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
        puVar8 = puVar5 + (uint)bVar10 * -2 + 8;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 3;
        puVar5[7] = puVar3[2];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        puVar5[0x14] = puVar3[0x11];
        puVar5[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0x12];
        (puVar5 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
             (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1];
        puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
        puVar5[0x17] = *(undefined4 *)(local_20 + 0x10);
        puVar5[(uint)bVar10 * -2 + 0x18] = *puVar6;
        (puVar5 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
        iVar4 = ((0x20 - puVar3[8]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[8]);
        puVar5[0x11] = puVar3[6] + ((*(int *)(local_20 + 0x10) - puVar3[6]) * iVar4 >> 8);
        puVar5[0x12] = puVar3[7] + ((*(int *)(local_20 + 0x14) - puVar3[7]) * iVar4 >> 8);
        puVar5[0x13] = 0x20;
        (*DAT_00388304)();
        puVar5[4] = ((puVar5[0xe] - puVar5[4]) * iVar4 >> 8) + puVar5[4];
        puVar5[5] = puVar5[5] + ((puVar5[0xf] - puVar5[5]) * iVar4 >> 8);
        puVar5[6] = ((puVar5[0x10] - puVar5[6]) * iVar4 >> 8) + puVar5[6];
        return;
      }
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      FUN_00094824(param_1);
      FUN_00094824(param_1);
      FUN_00094824(param_1);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0964d0 (Ghidra: FUN_000964d0)
 * Prototype: void sub_0964d0(undefined4 param_1);
 * Address  : 0x964d0 (Size: 3606 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x98614
 * Callees  : 1 -> 0x94824
 ******************************************************************************/
void FUN_000964d0(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int extraout_ECX;
  int extraout_ECX_00;
  int *in_EDX;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 unaff_retaddr;
  int local_20;
  
  puVar3 = DAT_00387d20;
  bVar10 = 0;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EAX + 2) & *(ushort *)(in_EDX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (*unaff_EBX - *in_EDX) * (in_EDX[1] - in_EAX[1]);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      if (((*(ushort *)(unaff_EBX + 2) | *(ushort *)(in_EAX + 2) | *(ushort *)(in_EDX + 2)) & 3) !=
          0) {
        puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
        DAT_00387d20 = DAT_00387d20 + 0x1a;
        *puVar1 = (&DAT_00191d6c)
                  [((*(ushort *)(unaff_EBX + 2) & 0xff) & 0xffffff03) * 0x10 +
                   ((*(ushort *)(in_EDX + 2) & 0xff) & 0xffffff03) +
                   ((*(ushort *)(in_EAX + 2) & 0xff) & 0xffffff03) * 4];
        uVar2 = (&DAT_00387220)[iVar4];
        *(undefined1 *)(puVar3 + 1) = 9;
        *puVar3 = uVar2;
        (&DAT_00387220)[iVar4] = puVar3;
        *(undefined2 *)((int)puVar3 + 6) = in_CX;
        FUN_00094824(param_1);
        FUN_00094824(unaff_retaddr);
        FUN_00094824(unaff_ESI);
        puVar5 = DAT_00387d20;
        if (0x1f < (int)puVar3[8]) {
          if (0x1f < (int)puVar3[0xd]) {
            if (*(int *)(local_20 + 0x18) < 0x20) {
              *(undefined *)((int)DAT_00387d20 + 5) =
                   (&DAT_00191d6c)
                   [((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03) +
                    (uint)(*(ushort *)(puVar3 + 4) & 3) * 4 + (*(ushort *)(local_20 + 8) & 3) * 0x10
                   ];
              uVar2 = (&DAT_00387220)[iVar4];
              *(undefined1 *)(DAT_00387d20 + 1) = 9;
              *DAT_00387d20 = uVar2;
              (&DAT_00387220)[iVar4] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
              puVar3[0x11] = puVar3[6];
              puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
              (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
              puVar3[0x14] = puVar3[0xb];
              puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
              (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
              puVar8 = DAT_00387d20 + (uint)bVar10 * -2 + 0xd;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
              DAT_00387d20[0xc] = puVar3[0xc];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              puVar8 = DAT_00387d20 + (uint)bVar10 * -2 + 8;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
              DAT_00387d20[7] = puVar3[7];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (puVar3[8] - *(int *)(local_20 + 0x18));
              DAT_00387d20 = DAT_00387d20 + 0x1a;
              puVar3[0x17] = *(int *)(local_20 + 0x10) +
                             ((puVar3[6] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
              puVar3[0x18] = *(int *)(local_20 + 0x14) +
                             ((puVar3[7] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
              puVar3[0x19] = 0x20;
              (*DAT_00388304)(unaff_ESI,puVar3 + 0x14,puVar3 + 0x17);
              puVar3[0xe] = puVar3[0xe] + ((puVar3[4] - puVar3[0xe]) * iVar4 >> 8);
              puVar3[0xf] = puVar3[0xf] + ((puVar3[5] - puVar3[0xf]) * iVar4 >> 8);
              puVar3[0x10] = puVar3[0x10] + ((puVar3[6] - puVar3[0x10]) * iVar4 >> 8);
              puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
              puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
              puVar5[2] = puVar3[0xc];
              puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
              puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
              *puVar8 = *puVar6;
              *puVar9 = *puVar7;
              puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
              (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              puVar5[0x11] = puVar3[0x17];
              puVar5[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 0x18];
              (puVar5 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1];
              puVar5[0x14] = puVar3[0xb];
              puVar5[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
              (puVar5 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                   (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
              iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (puVar3[0xd] - *(int *)(local_20 + 0x18));
              puVar5[0x17] = *(int *)(local_20 + 0x10) +
                             ((puVar3[0xb] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
              puVar5[0x18] = *(int *)(local_20 + 0x14) +
                             ((puVar3[0xc] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
              puVar5[0x19] = 0x20;
              (*DAT_00388304)();
              puVar5[0xe] = ((puVar5[9] - puVar5[0xe]) * iVar4 >> 8) + puVar5[0xe];
              puVar5[0xf] = puVar5[0xf] + ((puVar5[10] - puVar5[0xf]) * iVar4 >> 8);
              puVar5[0x10] = ((puVar5[0xb] - puVar5[0x10]) * iVar4 >> 8) + puVar5[0x10];
              return;
            }
            puVar3[0x11] = puVar3[6];
            puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
            (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
            puVar3[0x14] = puVar3[0xb];
            puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
            (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
            puVar5 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
            puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
            puVar3[(uint)bVar10 * -2 + 0x18] = *puVar5;
            (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] =
                 puVar5[(uint)bVar10 * -2 + 1];
            return;
          }
          if (*(int *)(local_20 + 0x18) < 0x20) {
            iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (int)(puVar3[8] - puVar3[0xd]);
            puVar3[0x14] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * iVar4 >> 8);
            puVar3[0x15] = puVar3[0xc] + ((puVar3[7] - puVar3[0xc]) * iVar4 >> 8);
            puVar3[0x16] = 0x20;
            (*DAT_00388304)();
            puVar3[9] = puVar3[9] + ((puVar3[4] - puVar3[9]) * iVar4 >> 8);
            puVar3[10] = puVar3[10] + ((puVar3[5] - puVar3[10]) * iVar4 >> 8);
            puVar3[0xb] = puVar3[0xb] + (iVar4 * (puVar3[6] - puVar3[0xb]) >> 8);
            iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                    (puVar3[8] - *(int *)(local_20 + 0x18));
            puVar3[0x17] = *(int *)(local_20 + 0x10) +
                           ((puVar3[6] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
            puVar3[0x18] = *(int *)(local_20 + 0x14) +
                           ((puVar3[7] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
            puVar3[0x19] = 0x20;
            (*DAT_00388304)();
            puVar3[0xe] = puVar3[0xe] + ((puVar3[4] - puVar3[0xe]) * iVar4 >> 8);
            puVar3[0xf] = puVar3[0xf] + ((puVar3[5] - puVar3[0xf]) * iVar4 >> 8);
            puVar3[0x10] = puVar3[0x10] + (iVar4 * (puVar3[6] - puVar3[0x10]) >> 8);
            puVar3[0x11] = puVar3[6];
            puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
            (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
                 (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
            return;
          }
          puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
          DAT_00387d20 = DAT_00387d20 + 0x1a;
          *puVar1 = (&DAT_00191d6c)
                    [((*(ushort *)(local_20 + 8) & 0xff) & 0xffffff03) * 0x10 +
                     ((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03) +
                     ((*(ushort *)(puVar3 + 4) & 0xff) & 0xffffff03) * 4];
          uVar2 = (&DAT_00387220)[iVar4];
          *(undefined1 *)(puVar5 + 1) = 9;
          *puVar5 = uVar2;
          (&DAT_00387220)[iVar4] = puVar5;
          *(undefined2 *)((int)puVar5 + 6) = in_CX;
          puVar3[0x11] = puVar3[6];
          puVar3[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 7];
          (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 7)[(uint)bVar10 * -2 + 1];
          puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar3[(uint)bVar10 * -2 + 0x18] = *puVar6;
          (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1]
          ;
          puVar8 = puVar5 + (uint)bVar10 * -2 + 8;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
          puVar5[7] = puVar3[7];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          puVar8 = puVar5 + (uint)bVar10 * -2 + 0xd;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
          puVar5[0xc] = puVar3[0xc];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (int)(puVar3[8] - puVar3[0xd]);
          puVar3[0x14] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * iVar4 >> 8);
          puVar3[0x15] = puVar3[0xc] + ((puVar3[7] - puVar3[0xc]) * iVar4 >> 8);
          puVar3[0x16] = 0x20;
          (*DAT_00388304)();
          puVar3[9] = puVar3[9] + ((puVar3[4] - puVar3[9]) * extraout_ECX >> 8);
          puVar3[10] = puVar3[10] + ((puVar3[5] - puVar3[10]) * extraout_ECX >> 8);
          puVar3[0xb] = puVar3[0xb] + ((puVar3[6] - puVar3[0xb]) * extraout_ECX >> 8);
          puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
          puVar6 = puVar3 + (uint)bVar10 * -2 + 8;
          puVar5[2] = puVar3[7];
          puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
          *puVar8 = *puVar6;
          *puVar9 = *puVar7;
          puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
          (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
               (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
          puVar5[0x11] = puVar3[0x14];
          puVar5[(uint)bVar10 * -2 + 0x12] = puVar3[(uint)bVar10 * -2 + 0x15];
          (puVar5 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1];
          puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar5[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar5[(uint)bVar10 * -2 + 0x18] = *puVar6;
          (puVar5 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1]
          ;
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[0xd]);
          puVar5[0x14] = puVar3[0xb] + ((*(int *)(local_20 + 0x10) - puVar3[0xb]) * iVar4 >> 8);
          puVar5[0x15] = puVar3[0xc] + ((*(int *)(local_20 + 0x14) - puVar3[0xc]) * iVar4 >> 8);
          puVar5[0x16] = 0x20;
          (*DAT_00388304)();
          puVar5[9] = puVar5[9] + ((puVar5[0xe] - puVar5[9]) * extraout_ECX_00 >> 8);
          puVar5[10] = puVar5[10] + ((puVar5[0xf] - puVar5[10]) * extraout_ECX_00 >> 8);
          puVar5[0xb] = ((puVar5[0x10] - puVar5[0xb]) * extraout_ECX_00 >> 8) + puVar5[0xb];
          return;
        }
        if ((int)puVar3[0xd] < 0x20) {
          puVar5 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
          puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
          puVar3[(uint)bVar10 * -2 + 0x18] = *puVar5;
          (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar5[(uint)bVar10 * -2 + 1]
          ;
          iVar4 = ((0x20 - puVar3[8]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[8]);
          puVar3[0x11] = puVar3[6] + ((*(int *)(local_20 + 0x10) - puVar3[6]) * iVar4 >> 8);
          puVar3[0x12] = puVar3[7] + ((*(int *)(local_20 + 0x14) - puVar3[7]) * iVar4 >> 8);
          puVar3[0x13] = 0x20;
          (*DAT_00388304)();
          puVar3[4] = puVar3[4] + ((puVar3[0xe] - puVar3[4]) * iVar4 >> 8);
          puVar3[5] = puVar3[5] + ((puVar3[0xf] - puVar3[5]) * iVar4 >> 8);
          puVar3[6] = puVar3[6] + ((puVar3[0x10] - puVar3[6]) * iVar4 >> 8);
          iVar4 = ((0x20 - puVar3[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[0xd]);
          puVar3[0x14] = puVar3[0xb] + ((*(int *)(local_20 + 0x10) - puVar3[0xb]) * iVar4 >> 8);
          puVar3[0x15] = puVar3[0xc] + ((*(int *)(local_20 + 0x14) - puVar3[0xc]) * iVar4 >> 8);
          puVar3[0x16] = 0x20;
          (*DAT_00388304)();
          puVar3[9] = puVar3[9] + ((puVar3[0xe] - puVar3[9]) * iVar4 >> 8);
          puVar3[10] = puVar3[10] + ((puVar3[0xf] - puVar3[10]) * iVar4 >> 8);
          puVar3[0xb] = puVar3[0xb] + ((puVar3[0x10] - puVar3[0xb]) * iVar4 >> 8);
          return;
        }
        if (*(int *)(local_20 + 0x18) < 0x20) {
          puVar3[0x14] = puVar3[0xb];
          puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
          (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
               (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
          iVar4 = ((0x20 - puVar3[8]) * 0x100) / (int)(puVar3[0xd] - puVar3[8]);
          puVar3[0x11] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
          puVar3[0x12] = puVar3[7] + ((puVar3[0xc] - puVar3[7]) * iVar4 >> 8);
          puVar3[0x13] = 0x20;
          (*DAT_00388304)();
          puVar3[4] = puVar3[4] + ((puVar3[9] - puVar3[4]) * iVar4 >> 8);
          puVar3[5] = puVar3[5] + ((puVar3[10] - puVar3[5]) * iVar4 >> 8);
          puVar3[6] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
          iVar4 = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                  (puVar3[0xd] - *(int *)(local_20 + 0x18));
          puVar3[0x17] = *(int *)(local_20 + 0x10) +
                         ((puVar3[0xb] - *(int *)(local_20 + 0x10)) * iVar4 >> 8);
          puVar3[0x18] = *(int *)(local_20 + 0x14) +
                         ((puVar3[0xc] - *(int *)(local_20 + 0x14)) * iVar4 >> 8);
          puVar3[0x19] = 0x20;
          (*DAT_00388304)();
          puVar3[0xe] = puVar3[0xe] + ((puVar3[9] - puVar3[0xe]) * iVar4 >> 8);
          puVar3[0xf] = puVar3[0xf] + ((puVar3[10] - puVar3[0xf]) * iVar4 >> 8);
          puVar3[0x10] = puVar3[0x10] + (iVar4 * (puVar3[0xb] - puVar3[0x10]) >> 8);
          return;
        }
        puVar1 = (undefined1 *)((int)DAT_00387d20 + 5);
        DAT_00387d20 = DAT_00387d20 + 0x1a;
        *puVar1 = (&DAT_00191d6c)
                  [(*(ushort *)(local_20 + 8) & 3) * 0x10 +
                   ((*(ushort *)(puVar3 + 4) & 0xff) & 0xffffff03) * 4 +
                   ((*(ushort *)(puVar3 + 9) & 0xff) & 0xffffff03)];
        uVar2 = (&DAT_00387220)[iVar4];
        *(undefined1 *)(puVar5 + 1) = 9;
        *puVar5 = uVar2;
        (&DAT_00387220)[iVar4] = puVar5;
        *(undefined2 *)((int)puVar5 + 6) = in_CX;
        puVar3[0x14] = puVar3[0xb];
        puVar3[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0xc];
        (puVar3 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
             (puVar3 + (uint)bVar10 * -2 + 0xc)[(uint)bVar10 * -2 + 1];
        puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
        puVar3[0x17] = *(undefined4 *)(local_20 + 0x10);
        puVar3[(uint)bVar10 * -2 + 0x18] = *puVar6;
        (puVar3 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
        puVar8 = puVar5 + (uint)bVar10 * -2 + 3;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 3;
        puVar5[2] = puVar3[2];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        puVar8 = puVar5 + (uint)bVar10 * -2 + 0xd;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 0xd;
        puVar5[0xc] = puVar3[0xc];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        iVar4 = ((0x20 - puVar3[8]) * 0x100) / (int)(puVar3[0xd] - puVar3[8]);
        puVar3[0x11] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
        puVar3[0x12] = puVar3[7] + ((puVar3[0xc] - puVar3[7]) * iVar4 >> 8);
        puVar3[0x13] = 0x20;
        (*DAT_00388304)();
        puVar3[4] = puVar3[4] + ((puVar3[9] - puVar3[4]) * iVar4 >> 8);
        puVar3[5] = puVar3[5] + ((puVar3[10] - puVar3[5]) * iVar4 >> 8);
        puVar3[6] = puVar3[6] + ((puVar3[0xb] - puVar3[6]) * iVar4 >> 8);
        puVar8 = puVar5 + (uint)bVar10 * -2 + 8;
        puVar6 = puVar3 + (uint)bVar10 * -2 + 3;
        puVar5[7] = puVar3[2];
        puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
        puVar7 = puVar6 + (uint)bVar10 * -2 + 1;
        *puVar8 = *puVar6;
        *puVar9 = *puVar7;
        puVar9[(uint)bVar10 * -2 + 1] = puVar7[(uint)bVar10 * -2 + 1];
        (puVar9 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
             (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        puVar5[0x14] = puVar3[0x11];
        puVar5[(uint)bVar10 * -2 + 0x15] = puVar3[(uint)bVar10 * -2 + 0x12];
        (puVar5 + (uint)bVar10 * -2 + 0x15)[(uint)bVar10 * -2 + 1] =
             (puVar3 + (uint)bVar10 * -2 + 0x12)[(uint)bVar10 * -2 + 1];
        puVar6 = (undefined4 *)(local_20 + 0x14 + (uint)bVar10 * -8);
        puVar5[0x17] = *(undefined4 *)(local_20 + 0x10);
        puVar5[(uint)bVar10 * -2 + 0x18] = *puVar6;
        (puVar5 + (uint)bVar10 * -2 + 0x18)[(uint)bVar10 * -2 + 1] = puVar6[(uint)bVar10 * -2 + 1];
        iVar4 = ((0x20 - puVar3[8]) * 0x100) / (*(int *)(local_20 + 0x18) - puVar3[8]);
        puVar5[0x11] = puVar3[6] + ((*(int *)(local_20 + 0x10) - puVar3[6]) * iVar4 >> 8);
        puVar5[0x12] = puVar3[7] + ((*(int *)(local_20 + 0x14) - puVar3[7]) * iVar4 >> 8);
        puVar5[0x13] = 0x20;
        (*DAT_00388304)();
        puVar5[4] = ((puVar5[0xe] - puVar5[4]) * iVar4 >> 8) + puVar5[4];
        puVar5[5] = puVar5[5] + ((puVar5[0xf] - puVar5[5]) * iVar4 >> 8);
        puVar5[6] = ((puVar5[0x10] - puVar5[6]) * iVar4 >> 8) + puVar5[6];
        return;
      }
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      FUN_00094824(param_1);
      FUN_00094824(param_1);
      FUN_00094824(param_1);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_098104 (Ghidra: FUN_00098104)
 * Prototype: void sub_098104(void);
 * Address  : 0x98104 (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00098104(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int *in_EDX;
  int *unaff_EBX;
  
  puVar3 = DAT_00387d20;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EDX + 2) & *(ushort *)(in_EAX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (in_EDX[1] - in_EAX[1]) * (*unaff_EBX - *in_EDX);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      piVar1 = DAT_00387d20 + 2;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      *piVar1 = *in_EAX;
      iVar4 = in_EAX[1];
      puVar3[4] = 0;
      puVar3[5] = 0x1fffff;
      puVar3[3] = iVar4;
      puVar3[6] = (in_EAX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[7] = *in_EDX;
      iVar4 = in_EDX[1];
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[8] = iVar4;
      puVar3[0xb] = (in_EDX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[0xc] = *unaff_EBX;
      iVar4 = unaff_EBX[1];
      puVar3[0xe] = 0x1fffff;
      puVar3[0xf] = 0;
      puVar3[0xd] = iVar4;
      puVar3[0x10] = (unaff_EBX[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_098248 (Ghidra: FUN_00098248)
 * Prototype: void sub_098248(void);
 * Address  : 0x98248 (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00098248(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int *in_EDX;
  int *unaff_EBX;
  
  puVar3 = DAT_00387d20;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EDX + 2) & *(ushort *)(in_EAX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (in_EDX[1] - in_EAX[1]) * (*unaff_EBX - *in_EDX);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      piVar1 = DAT_00387d20 + 2;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      *piVar1 = *in_EAX;
      iVar4 = in_EAX[1];
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[3] = iVar4;
      puVar3[6] = (in_EAX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[7] = *in_EDX;
      iVar4 = in_EDX[1];
      puVar3[9] = 0x1fffff;
      puVar3[10] = 0;
      puVar3[8] = iVar4;
      puVar3[0xb] = (in_EDX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[0xc] = *unaff_EBX;
      iVar4 = unaff_EBX[1];
      puVar3[0xe] = 0x1fffff;
      puVar3[0xf] = 0x1fffff;
      puVar3[0xd] = iVar4;
      puVar3[0x10] = (unaff_EBX[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_09838c (Ghidra: FUN_0009838c)
 * Prototype: void sub_09838c(void);
 * Address  : 0x9838c (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0009838c(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int *in_EDX;
  int *unaff_EBX;
  
  puVar3 = DAT_00387d20;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EDX + 2) & *(ushort *)(in_EAX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (in_EDX[1] - in_EAX[1]) * (*unaff_EBX - *in_EDX);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      piVar1 = DAT_00387d20 + 2;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      *piVar1 = *in_EAX;
      iVar4 = in_EAX[1];
      puVar3[4] = 0x1fffff;
      puVar3[5] = 0x1fffff;
      puVar3[3] = iVar4;
      puVar3[6] = (in_EAX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[7] = *in_EDX;
      iVar4 = in_EDX[1];
      puVar3[9] = 0;
      puVar3[10] = 0x1fffff;
      puVar3[8] = iVar4;
      puVar3[0xb] = (in_EDX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[0xc] = *unaff_EBX;
      iVar4 = unaff_EBX[1];
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0xd] = iVar4;
      puVar3[0x10] = (unaff_EBX[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0984d0 (Ghidra: FUN_000984d0)
 * Prototype: void sub_0984d0(void);
 * Address  : 0x984d0 (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000984d0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_EAX;
  int iVar4;
  undefined2 in_CX;
  int *in_EDX;
  int *unaff_EBX;
  
  puVar3 = DAT_00387d20;
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EDX + 2) & *(ushort *)(in_EAX + 2) & 0x1f8) == 0)
  {
    iVar4 = (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
            (in_EDX[1] - in_EAX[1]) * (*unaff_EBX - *in_EDX);
  }
  else {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    iVar4 = in_EAX[6];
    if (in_EAX[6] < in_EDX[6]) {
      iVar4 = in_EDX[6];
    }
    if (iVar4 < unaff_EBX[6]) {
      iVar4 = unaff_EBX[6];
    }
    iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x10) - (uint)((iVar4 >> 0x1f) << 3 < 0)) >> 4;
    if (DAT_00387d20 < DAT_0033317f) {
      uVar2 = (&DAT_00387220)[iVar4];
      *(undefined1 *)(DAT_00387d20 + 1) = 0;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar4] = DAT_00387d20;
      *(undefined2 *)((int)DAT_00387d20 + 6) = in_CX;
      piVar1 = DAT_00387d20 + 2;
      DAT_00387d20 = DAT_00387d20 + 0x11;
      *piVar1 = *in_EAX;
      iVar4 = in_EAX[1];
      puVar3[4] = 0x1fffff;
      puVar3[5] = 0;
      puVar3[3] = iVar4;
      puVar3[6] = (in_EAX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[7] = *in_EDX;
      iVar4 = in_EDX[1];
      puVar3[9] = 0x1fffff;
      puVar3[10] = 0x1fffff;
      puVar3[8] = iVar4;
      puVar3[0xb] = (in_EDX[2] >> 0x10) * 0x100 + 0xc0000;
      puVar3[0xc] = *unaff_EBX;
      iVar4 = unaff_EBX[1];
      puVar3[0xe] = 0;
      puVar3[0xf] = 0x1fffff;
      puVar3[0xd] = iVar4;
      puVar3[0x10] = (unaff_EBX[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_098614 (Ghidra: FUN_00098614)
 * Prototype: void sub_098614(void);
 * Address  : 0x98614 (Size: 1699 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 3 -> 0x956b8, 0x964d0, 0xdb1a4
 ******************************************************************************/
void FUN_00098614(void)

{
  byte bVar1;
  undefined4 uVar2;
  int in_EAX;
  uint uVar3;
  int in_ECX;
  int in_EDX;
  int extraout_EDX;
  int unaff_EBX;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_8c [2];
  int local_84;
  undefined4 *local_80;
  int local_78;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_4c;
  int local_48;
  
  piVar4 = local_8c;
  if ((0 < in_EDX) && (in_EDX < 0xff)) {
    if (in_EAX + unaff_EBX < 1) {
      unaff_EBX = 1 - in_EAX;
    }
    if (0xff < in_EAX + in_ECX) {
      in_ECX = 0xff - in_EAX;
    }
    local_4c = (unaff_EBX + 0x1f) * 0x1c0;
    local_48 = DAT_00387218 + local_4c;
    local_4c = DAT_0038721c + local_4c;
    local_78 = in_EAX + unaff_EBX;
    local_80 = &DAT_0019e973 + DAT_002e6f23 * 6;
    local_58 = (uint)*(ushort *)((int)&DAT_0019e973 + DAT_002e6f23 * 0x18 + 3);
    local_68 = 0;
    local_5c = (int)&DAT_00279203 + in_EDX * 0x500 + (in_EAX + unaff_EBX) * 5;
    local_8c[0] = local_48 + 0x2a0;
    local_60 = local_4c + 0x2a0;
    local_54 = local_4c + 0xe0;
    local_84 = in_ECX - unaff_EBX;
    local_64 = local_48 + 0xe0;
    if (0 < in_ECX - unaff_EBX) {
      do {
        iVar8 = *(int *)((int)piVar4 + 0x30);
        *(undefined4 *)((int)piVar4 + 0x3c) = *(undefined4 *)((int)piVar4 + 0xc);
        if ((*(uint *)(iVar8 + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
          if ((*(uint *)(iVar8 + 1) & 0x3ff800) != 0) {
            *(undefined4 *)((int)piVar4 + -4) = 0x98b64;
            FUN_000db1a4();
            iVar8 = extraout_EDX;
          }
          *(undefined4 **)((int)piVar4 + 0x3c) = &DAT_0019e973 + (*(uint *)(iVar8 + 1) & 0x7ff) * 6;
        }
        *(uint *)((int)piVar4 + 0x58) = (uint)*(ushort *)(*(int *)((int)piVar4 + 0x3c) + 3);
        uVar2 = *(undefined4 *)((int)piVar4 + 0x34);
        *(undefined4 *)((int)piVar4 + 0x50) = uVar2;
        *(undefined4 *)((int)piVar4 + 0x54) = uVar2;
        *(undefined4 *)((int)piVar4 + 0x4c) = uVar2;
        *(undefined4 *)((int)piVar4 + 0x48) = uVar2;
        if ((*(uint *)(iVar8 + -0x4ff) >> 0x1c & (uint)DAT_00379395) != 0) {
          *(uint *)((int)piVar4 + 0x50) =
               (uint)*(ushort *)
                      ((int)&DAT_0019e973 + (*(uint *)(iVar8 + -0x4ff) & 0x7ff) * 0x18 + 3);
        }
        if ((*(uint *)(iVar8 + 0x501) >> 0x1c & (uint)DAT_00379395) != 0) {
          *(uint *)((int)piVar4 + 0x4c) =
               (uint)*(ushort *)((int)&DAT_0019e973 + (*(uint *)(iVar8 + 0x501) & 0x7ff) * 0x18 + 3)
          ;
        }
        if ((*(uint *)(iVar8 + -4) >> 0x1c & (uint)DAT_00379395) != 0) {
          *(uint *)((int)piVar4 + 0x48) =
               (uint)*(ushort *)((int)&DAT_0019e973 + (*(uint *)(iVar8 + -4) & 0x7ff) * 0x18 + 3);
        }
        if ((*(uint *)(iVar8 + 6) >> 0x1c & (uint)DAT_00379395) != 0) {
          *(uint *)((int)piVar4 + 0x54) =
               (uint)*(ushort *)((int)&DAT_0019e973 + (*(uint *)(iVar8 + 6) & 0x7ff) * 0x18 + 3);
        }
        iVar8 = *(int *)((int)piVar4 + 0x44);
        *(undefined1 **)((int)piVar4 + 0x68) = &DAT_00191d44;
        *(int *)((int)piVar4 + 100) = *(int *)((int)piVar4 + 0x3c) + 8;
        iVar9 = *(int *)((int)piVar4 + 0x40);
        *(int *)((int)piVar4 + 0x78) = iVar8 + 0x1c0;
        *(int *)((int)piVar4 + 0x74) = iVar8 + 0x1dc;
        *(undefined4 *)((int)piVar4 + 0x7c) = 1;
        *(int *)((int)piVar4 + 0x70) = iVar9 + 0x1dc;
        while( true ) {
          uVar3 = (uint)*(ushort *)((int)piVar4 + 0x7c);
          if (*(int *)((int)piVar4 + 0x58) < (int)uVar3) break;
          *(int *)((int)piVar4 + 0x6c) = (int)&DAT_001aa973 + **(short **)((int)piVar4 + 100) * 0x12
          ;
          if ((uVar3 & *(uint *)((int)piVar4 + 0x58)) != 0) {
            puVar6 = (undefined1 *)piVar4;
            if ((*(uint *)((int)piVar4 + 0x50) & uVar3) == 0) {
              bVar1 = **(byte **)((int)piVar4 + 0x68);
              *(undefined4 *)((int)piVar4 + -4) = DAT_0037937c;
              *(int *)((int)piVar4 + 4) =
                   (int)*(short *)((uint)bVar1 * 2 + *(int *)((int)piVar4 + 0x6c));
              *(undefined4 *)((int)piVar4 + -8) = 0x987c6;
              FUN_000956b8();
              puVar6 = (undefined1 *)((int)piVar4 + -8);
              *(undefined4 *)((int)piVar4 + -8) = DAT_0037937c;
              *(undefined4 *)((int)piVar4 + -0xc) = 0x987e0;
              FUN_000964d0();
            }
            puVar5 = puVar6;
            if (((uint)*(ushort *)(puVar6 + 0x7c) & *(uint *)(puVar6 + 0x4c)) == 0) {
              bVar1 = *(byte *)(*(int *)(puVar6 + 0x68) + 2);
              *(undefined4 *)(puVar6 + -4) = DAT_00379380;
              *(int *)(puVar6 + 0x60) = iVar9 + 0x1c;
              *(int *)(puVar6 + 4) = (int)*(short *)((uint)bVar1 * 2 + *(int *)(puVar6 + 0x6c));
              *(undefined4 *)(puVar6 + -8) = 0x98827;
              FUN_000956b8();
              puVar5 = puVar6 + -8;
              *(undefined4 *)(puVar6 + -8) = DAT_00379380;
              *(undefined4 *)(puVar6 + -0xc) = 0x9883e;
              FUN_000964d0();
            }
            puVar6 = puVar5;
            if (((uint)*(ushort *)(puVar5 + 0x7c) & *(uint *)(puVar5 + 0x48)) == 0) {
              bVar1 = *(byte *)(*(int *)(puVar5 + 0x68) + 3);
              *(undefined4 *)(puVar5 + -4) = DAT_00379374;
              *(int *)(puVar5 + 0x5c) = iVar8 + 0x1c;
              *(int *)(puVar5 + 4) = (int)*(short *)((uint)bVar1 * 2 + *(int *)(puVar5 + 0x6c));
              *(undefined4 *)(puVar5 + -8) = 0x98884;
              FUN_000956b8();
              puVar6 = puVar5 + -8;
              *(undefined4 *)(puVar5 + -8) = DAT_00379374;
              *(undefined4 *)(puVar5 + -0xc) = 0x9889b;
              FUN_000964d0();
            }
            piVar4 = (int *)puVar6;
            if (((uint)*(ushort *)(puVar6 + 0x7c) & *(uint *)(puVar6 + 0x54)) == 0) {
              bVar1 = *(byte *)(*(int *)(puVar6 + 0x68) + 1);
              *(undefined4 *)(puVar6 + -4) = DAT_00379378;
              *(int *)(puVar6 + 4) = (int)*(short *)((uint)bVar1 * 2 + *(int *)(puVar6 + 0x6c));
              *(undefined4 *)(puVar6 + -8) = 0x988e1;
              FUN_000956b8();
              piVar4 = (int *)(puVar6 + -8);
              *(undefined4 *)(puVar6 + -8) = DAT_00379378;
              *(undefined4 *)(puVar6 + -0xc) = 0x988fa;
              FUN_000964d0();
            }
          }
          iVar8 = iVar8 + 0x1c;
          iVar9 = iVar9 + 0x1c;
          *(int *)((int)piVar4 + 0x7c) = *(int *)((int)piVar4 + 0x7c) * 2;
          *(int *)((int)piVar4 + 0x78) = *(int *)((int)piVar4 + 0x78) + 0x1c;
          *(int *)((int)piVar4 + 0x70) = *(int *)((int)piVar4 + 0x70) + 0x1c;
          *(int *)((int)piVar4 + 100) = *(int *)((int)piVar4 + 100) + 2;
          *(int *)((int)piVar4 + 0x74) = *(int *)((int)piVar4 + 0x74) + 0x1c;
        }
        iVar8 = (&DAT_00377f70)[*(int *)((int)piVar4 + 0x58)];
        if (iVar8 == 0) {
          *(undefined4 *)((int)piVar4 + -4) = 0xffffffff;
          *(undefined4 *)((int)piVar4 + -8) = 0x98990;
          FUN_000956b8();
          *(undefined4 *)((int)piVar4 + -8) = 0xffffffff;
        }
        else {
          *(undefined4 *)((int)piVar4 + -4) = 0xffffffff;
          *(int *)((int)piVar4 + 4) = *(int *)((int)piVar4 + 0x40) + iVar8 * 0x1c;
          *(undefined4 *)((int)piVar4 + -8) = 0x98954;
          FUN_000956b8();
          *(undefined4 *)((int)piVar4 + -8) = 0xffffffff;
        }
        piVar7 = (int *)((int)piVar4 + -8);
        *(undefined4 *)((int)piVar4 + -0xc) = 0x989a3;
        FUN_000964d0();
        iVar8 = (&DAT_00377b70)[*(int *)((int)piVar4 + 0x50)];
        if (iVar8 != 0) {
          *(undefined4 *)((int)piVar4 + 8) = (&DAT_00377770)[*(int *)((int)piVar4 + 0x50)];
          iVar9 = *(int *)(iVar8 * 2 + *(int *)((int)piVar4 + 0x34) + 4);
          *(undefined4 *)((int)piVar4 + -0xc) = 0xffffffff;
          *(int *)((int)piVar4 + 0x18) = (int)&DAT_001aa973 + (iVar9 >> 0x10) * 0x12;
          *(int *)((int)piVar4 + 0x14) = *(int *)((int)piVar4 + 0x38) + iVar8 * 0x1c;
          *(undefined4 *)((int)piVar4 + -0x10) = 0x98a18;
          FUN_000956b8();
          *(undefined4 *)((int)piVar4 + -0x10) = 0xffffffff;
          iVar8 = *(int *)((int)piVar4 + 4);
          *(undefined4 *)((int)piVar4 + -0x14) = 0x98a2d;
          FUN_000964d0();
          *(undefined4 *)((int)piVar4 + -0x14) = 0xffffffff;
          *(int *)((int)piVar4 + 8) = *(int *)((int)piVar4 + 0x34) + iVar8 * 0x1c;
          *(undefined4 *)((int)piVar4 + -0x18) = 0x98a68;
          FUN_000956b8();
          piVar7 = (int *)((int)piVar4 + -0x18);
          *(undefined4 *)((int)piVar4 + -0x18) = 0xffffffff;
          *(undefined4 *)((int)piVar4 + -0x1c) = 0x98a79;
          FUN_000964d0();
        }
        piVar7[-1] = 0xffffffff;
        iVar8 = piVar7[0xb];
        iVar9 = piVar7[0xe];
        piVar7[-2] = 0x98ab7;
        FUN_000956b8();
        piVar4 = piVar7 + -2;
        piVar7[-2] = 0xffffffff;
        piVar7[10] = iVar8 + 0x1c0;
        piVar7[-3] = 0x98ad0;
        FUN_000964d0();
        piVar7[0xc] = iVar9 + 0x1c0;
        piVar7[-2] = piVar7[-2] + 0x1c0;
        piVar7[8] = piVar7[8] + 0x1c0;
        piVar7[0xf] = piVar7[0xf] + 0x1c0;
        piVar7[0xe] = piVar7[0xe] + 0x1c0;
        piVar7[10] = piVar7[10] + 5;
        iVar8 = piVar7[7];
        piVar7[3] = piVar7[3] + 1;
        piVar7[7] = iVar8 + 1;
      } while (iVar8 + 1 < *piVar7);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_098cb8 (Ghidra: FUN_00098cb8)
 * Prototype: void sub_098cb8(void);
 * Address  : 0x98cb8 (Size: 12598 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 1 -> 0xdb1a4
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0009b616) */
/* WARNING: Removing unreachable block (ram,0x0009ae83) */
/* WARNING: Removing unreachable block (ram,0x0009b826) */
/* WARNING: Removing unreachable block (ram,0x0009b099) */
/* WARNING: Removing unreachable block (ram,0x0009ba99) */
/* WARNING: Removing unreachable block (ram,0x0009bcc7) */

void FUN_00098cb8(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined4 *puVar12;
  int in_EAX;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int in_ECX;
  int iVar20;
  int *piVar21;
  int in_EDX;
  int iVar22;
  int unaff_EBX;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *local_338;
  int *local_334;
  uint local_328;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  short *local_304;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_264;
  int local_260;
  int local_25c;
  int local_23c;
  int local_238;
  int local_234;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_180;
  int local_17c;
  int local_178;
  int *local_80;
  int *local_7c;
  int local_78;
  int local_74;
  uint local_40;
  
  if ((0 < in_EDX) && (in_EDX < 0xff)) {
    bVar10 = in_EAX + unaff_EBX < 1;
    if (bVar10) {
      unaff_EBX = 1 - in_EAX;
    }
    bVar11 = 0xff < in_EAX + in_ECX;
    if (bVar11) {
      in_ECX = 0xff - in_EAX;
    }
    iVar13 = in_EAX + unaff_EBX;
    iVar14 = (unaff_EBX + 0x1f) * 0x1c0;
    local_338 = (int *)(DAT_00387218 + iVar14);
    local_334 = (int *)(DAT_0038721c + iVar14);
    iVar20 = in_ECX - unaff_EBX;
    iVar14 = DAT_002e6f23 * 0x18;
    uVar15 = (uint)*(ushort *)((int)&DAT_0019e973 + iVar14 + 3);
    local_328 = 0;
    local_78 = (int)&DAT_00279203 + in_EDX * 0x500 + iVar13 * 5;
    if (0 < iVar20) {
      local_74 = in_EDX * 0x500 + iVar13 * 5;
      do {
        bVar4 = *(byte *)((int)&DAT_00279203 + local_74);
        iVar16 = iVar14;
        if ((*(uint *)(local_78 + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
          if ((*(uint *)(local_78 + 1) & 0x3ff800) != 0) {
            FUN_000db1a4(iVar13);
          }
          iVar16 = (*(uint *)(local_78 + 1) & 0x7ff) * 0x18;
        }
        uVar17 = (uint)*(ushort *)((int)&DAT_0019e973 + iVar16 + 3);
        local_318 = uVar15;
        if ((*(uint *)(local_78 + -0x4ff) >> 0x1c & (uint)DAT_00379395) != 0) {
          local_318 = (uint)*(ushort *)
                             ((int)&DAT_0019e973 + (*(uint *)(local_78 + -0x4ff) & 0x7ff) * 0x18 + 3
                             );
        }
        local_310 = uVar15;
        if ((*(uint *)(local_78 + 0x501) >> 0x1c & (uint)DAT_00379395) != 0) {
          local_310 = (uint)*(ushort *)
                             ((int)&DAT_0019e973 + (*(uint *)(local_78 + 0x501) & 0x7ff) * 0x18 + 3)
          ;
        }
        local_30c = uVar15;
        if ((*(uint *)(local_78 + -4) >> 0x1c & (uint)DAT_00379395) != 0) {
          local_30c = (uint)*(ushort *)
                             ((int)&DAT_0019e973 + (*(uint *)(local_78 + -4) & 0x7ff) * 0x18 + 3);
        }
        local_314 = uVar15;
        if ((*(uint *)(local_78 + 6) >> 0x1c & (uint)DAT_00379395) != 0) {
          local_314 = (uint)*(ushort *)
                             ((int)&DAT_0019e973 + (*(uint *)(local_78 + 6) & 0x7ff) * 0x18 + 3);
        }
        if ((in_EDX == 1 || (bVar10 || bVar11)) || in_EDX == 0xfe) {
          if ((bVar10) && (local_328 == 0)) {
            local_30c = local_328;
          }
          if ((bVar11) && (local_328 == iVar20 - 1U)) {
            local_314 = 0;
          }
          if (in_EDX == 1) {
            local_318 = 0;
          }
          if (in_EDX == 0xfe) {
            local_310 = 0;
          }
        }
        local_304 = (short *)((int)&DAT_0019e97b + iVar16);
        local_80 = local_338 + 0x70;
        piVar21 = local_334 + 0x77;
        local_7c = local_334 + 0x70;
        piVar23 = local_338 + 0x77;
        piVar24 = local_338;
        piVar25 = local_334;
        for (local_40 = 1; puVar12 = DAT_00387d20, iVar22 = DAT_0037937c, uVar18 = local_40 & 0xffff
            , uVar18 <= uVar17; local_40 = local_40 * 2) {
          sVar5 = *local_304;
          if ((uVar18 & uVar17) != 0) {
            if ((local_318 & uVar18) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d44 * 2 + sVar5 * 0x12);
              piVar2 = piVar24 + 7;
              if ((*(ushort *)(piVar24 + 2) & *(ushort *)(piVar23 + 2) & *(ushort *)(piVar24 + 9) &
                  0x1f8) == 0) {
                iVar19 = (piVar24[1] - piVar24[8]) * (*piVar2 - *piVar23) -
                         (piVar24[8] - piVar23[1]) * (*piVar24 - *piVar2);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = piVar23[6];
                if (piVar23[6] < piVar24[0xd]) {
                  iVar19 = piVar24[0xd];
                }
                if (iVar19 < piVar24[6]) {
                  iVar19 = piVar24[6];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_2c8 = piVar23[2] >> 0x10;
                  local_2c4 = piVar24[9] >> 0x10;
                  local_2c0 = piVar24[2] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_2c8 = local_2c8 * iVar22 >> 0x11;
                    local_2c4 = local_2c4 * iVar22 >> 0x11;
                    local_2c0 = iVar22 * local_2c0 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *piVar23;
                  puVar12[3] = piVar23[1];
                  puVar12[4] = 0;
                  puVar12[6] = local_2c8 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar2;
                  puVar12[8] = piVar24[8];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_2c4 << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *piVar24;
                  iVar22 = piVar24[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_2c0 << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar22 = DAT_0037937c;
              if ((*(ushort *)(piVar23 + 2) & *(ushort *)(piVar24 + 2) & *(ushort *)(local_80 + 2) &
                  0x1f8) == 0) {
                iVar19 = (*local_80 - *piVar24) * (piVar23[1] - local_80[1]) -
                         (local_80[1] - piVar24[1]) * (*piVar23 - *local_80);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = piVar24[6];
                if (piVar24[6] < local_80[6]) {
                  iVar19 = local_80[6];
                }
                if (iVar19 < piVar23[6]) {
                  iVar19 = piVar23[6];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_2a0 = piVar24[2] >> 0x10;
                  local_29c = local_80[2] >> 0x10;
                  local_298 = piVar23[2] >> 0x10;
                  piVar2 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_2a0 = local_2a0 * iVar22 >> 0x11;
                    local_29c = local_29c * iVar22 >> 0x11;
                    local_298 = iVar22 * local_298 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar24;
                  puVar12[3] = piVar24[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_2a0 << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *local_80;
                  puVar12[8] = local_80[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_29c << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar23;
                  iVar22 = piVar23[1];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_298 << 8;
                }
              }
            }
            puVar12 = DAT_00387d20;
            iVar22 = DAT_00379380;
            if ((local_40 & 0xffff & local_310) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d46 * 2 + sVar5 * 0x12);
              piVar2 = piVar25 + 7;
              if ((*(ushort *)(local_7c + 2) & *(ushort *)(piVar25 + 9) & *(ushort *)(piVar21 + 2) &
                  0x1f8) == 0) {
                iVar19 = (*piVar21 - *piVar2) * (local_7c[1] - piVar21[1]) -
                         (piVar21[1] - piVar25[8]) * (*local_7c - *piVar21);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = piVar25[0xd];
                if (piVar25[0xd] < piVar21[6]) {
                  iVar19 = piVar21[6];
                }
                if (iVar19 < local_7c[6]) {
                  iVar19 = local_7c[6];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_264 = piVar25[9] >> 0x10;
                  local_260 = piVar21[2] >> 0x10;
                  local_25c = local_7c[2] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_264 = local_264 * iVar22 >> 0x11;
                    local_260 = local_260 * iVar22 >> 0x11;
                    local_25c = iVar22 * local_25c >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *piVar2;
                  puVar12[3] = piVar25[8];
                  puVar12[4] = 0;
                  puVar12[6] = local_264 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar21;
                  puVar12[8] = piVar21[1];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_260 << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *local_7c;
                  iVar22 = local_7c[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_25c << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar22 = DAT_00379380;
              if ((*(ushort *)(piVar25 + 9) & *(ushort *)(local_7c + 2) & *(ushort *)(piVar25 + 2) &
                  0x1f8) == 0) {
                iVar19 = (*piVar25 - *local_7c) * (piVar25[8] - piVar25[1]) -
                         (piVar25[1] - local_7c[1]) * (*piVar2 - *piVar25);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = local_7c[6];
                if (local_7c[6] < piVar25[6]) {
                  iVar19 = piVar25[6];
                }
                if (iVar19 < piVar25[0xd]) {
                  iVar19 = piVar25[0xd];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_23c = local_7c[2] >> 0x10;
                  local_238 = piVar25[2] >> 0x10;
                  local_234 = piVar25[9] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_23c = local_23c * iVar22 >> 0x11;
                    local_238 = local_238 * iVar22 >> 0x11;
                    local_234 = iVar22 * local_234 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *local_7c;
                  puVar12[3] = local_7c[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_23c << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *piVar25;
                  puVar12[8] = piVar25[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_238 << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar2;
                  iVar22 = piVar25[8];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_234 << 8;
                }
              }
            }
            puVar12 = DAT_00387d20;
            iVar22 = DAT_00379374;
            if ((local_40 & 0xffff & local_30c) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d47 * 2 + sVar5 * 0x12);
              piVar2 = piVar24 + 7;
              piVar1 = piVar25 + 7;
              if ((*(ushort *)(piVar25 + 2) & *(ushort *)(piVar24 + 9) & *(ushort *)(piVar25 + 9) &
                  0x1f8) == 0) {
                iVar19 = (piVar25[1] - piVar25[8]) * (*piVar1 - *piVar2) -
                         (*piVar25 - *piVar1) * (piVar25[8] - piVar24[8]);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = piVar24[0xd];
                if (piVar24[0xd] < piVar25[0xd]) {
                  iVar19 = piVar25[0xd];
                }
                if (iVar19 < piVar25[6]) {
                  iVar19 = piVar25[6];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_204 = piVar24[9] >> 0x10;
                  local_200 = piVar25[9] >> 0x10;
                  local_1fc = piVar25[2] >> 0x10;
                  piVar3 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_204 = local_204 * iVar22 >> 0x11;
                    local_200 = local_200 * iVar22 >> 0x11;
                    local_1fc = iVar22 * local_1fc >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar3 = *piVar2;
                  puVar12[3] = piVar24[8];
                  puVar12[4] = 0;
                  puVar12[6] = local_204 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar1;
                  puVar12[8] = piVar25[8];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_200 << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *piVar25;
                  iVar22 = piVar25[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_1fc << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar22 = DAT_00379374;
              if ((*(ushort *)(piVar24 + 9) & *(ushort *)(piVar25 + 2) & *(ushort *)(piVar24 + 2) &
                  0x1f8) == 0) {
                iVar19 = (*piVar24 - *piVar25) * (piVar24[8] - piVar24[1]) -
                         (piVar24[1] - piVar25[1]) * (*piVar2 - *piVar24);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = piVar25[6];
                if (piVar25[6] < piVar24[6]) {
                  iVar19 = piVar24[6];
                }
                if (iVar19 < piVar24[0xd]) {
                  iVar19 = piVar24[0xd];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_1dc = piVar25[2] >> 0x10;
                  local_1d8 = piVar24[2] >> 0x10;
                  local_1d4 = piVar24[9] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_1dc = local_1dc * iVar22 >> 0x11;
                    local_1d8 = local_1d8 * iVar22 >> 0x11;
                    local_1d4 = iVar22 * local_1d4 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *piVar25;
                  puVar12[3] = piVar25[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_1dc << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *piVar24;
                  puVar12[8] = piVar24[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_1d8 << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar2;
                  iVar22 = piVar24[8];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_1d4 << 8;
                }
              }
            }
            puVar12 = DAT_00387d20;
            iVar22 = DAT_00379378;
            if ((local_40 & 0xffff & local_314) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d45 * 2 + sVar5 * 0x12);
              if ((*(ushort *)(local_80 + 2) & *(ushort *)(piVar21 + 2) & *(ushort *)(piVar23 + 2) &
                  0x1f8) == 0) {
                iVar19 = (*piVar23 - *piVar21) * (local_80[1] - piVar23[1]) -
                         (piVar23[1] - piVar21[1]) * (*local_80 - *piVar23);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = piVar21[6];
                if (piVar21[6] < piVar23[6]) {
                  iVar19 = piVar23[6];
                }
                if (iVar19 < local_80[6]) {
                  iVar19 = local_80[6];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_1a8 = piVar21[2] >> 0x10;
                  local_1a4 = piVar23[2] >> 0x10;
                  local_1a0 = local_80[2] >> 0x10;
                  piVar2 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_1a8 = local_1a8 * iVar22 >> 0x11;
                    local_1a4 = local_1a4 * iVar22 >> 0x11;
                    local_1a0 = iVar22 * local_1a0 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar21;
                  puVar12[3] = piVar21[1];
                  puVar12[4] = 0;
                  puVar12[6] = local_1a8 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar23;
                  puVar12[8] = piVar23[1];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_1a4 << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *local_80;
                  iVar22 = local_80[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_1a0 << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar22 = DAT_00379378;
              if ((*(ushort *)(piVar21 + 2) & *(ushort *)(local_80 + 2) & *(ushort *)(local_7c + 2)
                  & 0x1f8) == 0) {
                iVar19 = (*local_7c - *local_80) * (piVar21[1] - local_7c[1]) -
                         (local_7c[1] - local_80[1]) * (*piVar21 - *local_7c);
              }
              else {
                iVar19 = 0;
              }
              if (0 < iVar19) {
                iVar19 = local_80[6];
                if (local_80[6] < local_7c[6]) {
                  iVar19 = local_7c[6];
                }
                if (iVar19 < piVar21[6]) {
                  iVar19 = piVar21[6];
                }
                iVar19 = (int)((iVar19 + (iVar19 >> 0x1f) * -0x10) -
                              (uint)((iVar19 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_180 = local_80[2] >> 0x10;
                  local_17c = local_7c[2] >> 0x10;
                  local_178 = piVar21[2] >> 0x10;
                  piVar2 = DAT_00387d20 + 2;
                  if (-1 < iVar22) {
                    iVar22 = iVar22 * 4 + 0x10000;
                    local_180 = local_180 * iVar22 >> 0x11;
                    local_17c = local_17c * iVar22 >> 0x11;
                    local_178 = iVar22 * local_178 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *local_80;
                  puVar12[3] = local_80[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_180 << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *local_7c;
                  puVar12[8] = local_7c[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_17c << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar21;
                  iVar22 = piVar21[1];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_178 << 8;
                }
              }
            }
          }
          piVar23 = piVar23 + 7;
          piVar24 = piVar24 + 7;
          piVar21 = piVar21 + 7;
          piVar25 = piVar25 + 7;
          local_7c = local_7c + 7;
          local_304 = local_304 + 1;
          local_80 = local_80 + 7;
        }
        iVar22 = (&DAT_00377f70)[uVar17];
        piVar21 = local_334 + 0x70;
        piVar23 = local_338 + 0x70;
        if (iVar22 == 0) {
          if ((bVar4 & 4) == 0) {
            uVar6 = *(undefined2 *)((int)&DAT_0019e977 + iVar16 + 1);
            if ((*(ushort *)(local_334 + 0x72) &
                 *(ushort *)(local_338 + 0x72) & *(ushort *)(local_338 + 2) & 0x1f8) == 0) {
              iVar22 = (local_334[0x71] - local_338[0x71]) * (*piVar23 - *local_338) -
                       (*piVar21 - *piVar23) * (local_338[0x71] - local_338[1]);
            }
            else {
              iVar22 = 0;
            }
            if (0 < iVar22) {
              iVar22 = local_338[6];
              if (local_338[6] < local_338[0x76]) {
                iVar22 = local_338[0x76];
              }
              if (iVar22 < local_334[0x76]) {
                iVar22 = local_334[0x76];
              }
              iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar7 = (&DAT_00387220)[iVar22];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar7;
                (&DAT_00387220)[iVar22] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar22 = local_338[0x72];
                iVar19 = local_338[2];
                iVar9 = local_334[0x72];
                piVar24 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar24 = *local_338;
                iVar8 = local_338[1];
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[3] = iVar8;
                puVar12[6] = (iVar19 >> 0x10) << 8;
                puVar12[7] = *piVar23;
                puVar12[8] = local_338[0x71];
                puVar12[9] = 0x1fffff;
                puVar12[0xb] = (iVar22 >> 0x10) << 8;
                puVar12[10] = 0;
                puVar12[0xc] = *piVar21;
                iVar22 = local_334[0x71];
                puVar12[0xe] = 0x1fffff;
                puVar12[0xd] = iVar22;
                puVar12[0xf] = 0x1fffff;
                puVar12[0x10] = (iVar9 >> 0x10) << 8;
              }
            }
            puVar12 = DAT_00387d20;
            uVar6 = *(undefined2 *)((int)&DAT_0019e977 + iVar16 + 1);
            if ((*(ushort *)(local_338 + 2) &
                 *(ushort *)(local_334 + 0x72) & *(ushort *)(local_334 + 2) & 0x1f8) == 0) {
              iVar22 = (local_338[1] - local_334[1]) * (*local_334 - *piVar21) -
                       (*local_338 - *local_334) * (local_334[1] - local_334[0x71]);
            }
            else {
              iVar22 = 0;
            }
            if (0 < iVar22) {
              iVar22 = local_334[0x76];
              if (local_334[0x76] < local_334[6]) {
                iVar22 = local_334[6];
              }
              if (iVar22 < local_338[6]) {
                iVar22 = local_338[6];
              }
              iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar7 = (&DAT_00387220)[iVar22];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar7;
                (&DAT_00387220)[iVar22] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar22 = local_334[0x72];
                iVar19 = local_334[2];
                iVar8 = local_338[2];
                piVar23 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar23 = *piVar21;
                iVar9 = local_334[0x71];
                puVar12[4] = 0x1fffff;
                puVar12[3] = iVar9;
                puVar12[5] = 0x1fffff;
                puVar12[6] = (iVar22 >> 0x10) << 8;
                puVar12[7] = *local_334;
                iVar22 = local_334[1];
                puVar12[9] = 0;
                puVar12[8] = iVar22;
                puVar12[10] = 0x1fffff;
                puVar12[0xb] = (iVar19 >> 0x10) << 8;
                piVar21 = puVar12 + 0xc;
                *piVar21 = *local_338;
                iVar22 = local_338[1];
                puVar12[0xe] = 0;
                puVar12[0xd] = iVar22;
                goto LAB_0009b8e3;
              }
            }
          }
          else {
            if ((*(ushort *)(local_334 + 0x72) &
                 *(ushort *)(local_338 + 2) & *(ushort *)(local_338 + 0x72) & 0x1f8) == 0) {
              iVar22 = (local_334[0x71] - local_338[0x71]) * (*piVar23 - *local_338) -
                       (*piVar21 - *piVar23) * (local_338[0x71] - local_338[1]);
            }
            else {
              iVar22 = 0;
            }
            if (0 < iVar22) {
              iVar22 = local_338[6];
              if (local_338[6] < local_338[0x76]) {
                iVar22 = local_338[0x76];
              }
              if (iVar22 < local_334[0x76]) {
                iVar22 = local_334[0x76];
              }
              iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar7 = (&DAT_00387220)[iVar22];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar7;
                (&DAT_00387220)[iVar22] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                piVar24 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar24 = *local_338;
                iVar22 = local_338[1];
                puVar12[4] = 0;
                puVar12[3] = iVar22;
                puVar12[5] = 0;
                puVar12[6] = (local_338[2] >> 0x10) * 0x100 + 0xc0000;
                puVar12[7] = *piVar23;
                iVar22 = local_338[0x71];
                puVar12[9] = 0x1fffff;
                puVar12[8] = iVar22;
                puVar12[10] = 0;
                puVar12[0xb] = (local_338[0x72] >> 0x10) * 0x100 + 0xc0000;
                puVar12[0xc] = *piVar21;
                iVar22 = local_334[0x71];
                puVar12[0xe] = 0x1fffff;
                puVar12[0xd] = iVar22;
                puVar12[0xf] = 0x1fffff;
                puVar12[0x10] = (local_334[0x72] >> 0x10) * 0x100 + 0xc0000;
              }
            }
            puVar12 = DAT_00387d20;
            if ((*(ushort *)(local_338 + 2) &
                 *(ushort *)(local_334 + 0x72) & *(ushort *)(local_334 + 2) & 0x1f8) == 0) {
              iVar22 = (*local_334 - *piVar21) * (local_338[1] - local_334[1]) -
                       (*local_338 - *local_334) * (local_334[1] - local_334[0x71]);
            }
            else {
              iVar22 = 0;
            }
            if (0 < iVar22) {
              iVar22 = local_334[0x76];
              if (local_334[0x76] < local_334[6]) {
                iVar22 = local_334[6];
              }
              if (iVar22 < local_338[6]) {
                iVar22 = local_338[6];
              }
              iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar7 = (&DAT_00387220)[iVar22];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar7;
                (&DAT_00387220)[iVar22] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                piVar23 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar23 = *piVar21;
                iVar22 = local_334[0x71];
                puVar12[4] = 0x1fffff;
                puVar12[3] = iVar22;
                puVar12[5] = 0x1fffff;
                puVar12[6] = (local_334[0x72] >> 0x10) * 0x100 + 0xc0000;
                puVar12[7] = *local_334;
                iVar22 = local_334[1];
                puVar12[9] = 0;
                puVar12[10] = 0x1fffff;
                puVar12[8] = iVar22;
                puVar12[0xb] = (local_334[2] >> 0x10) * 0x100 + 0xc0000;
                puVar12[0xc] = *local_338;
                iVar22 = local_338[1];
                puVar12[0xe] = 0;
                puVar12[0xf] = 0;
                puVar12[0xd] = iVar22;
                puVar12[0x10] = (local_338[2] >> 0x10) * 0x100 + 0xc0000;
              }
            }
          }
        }
        else {
          piVar25 = local_338 + iVar22 * 7;
          piVar24 = local_334 + iVar22 * 7;
          if ((bVar4 & 0x84) == 0) {
            uVar6 = *(undefined2 *)
                     ((int)&DAT_001aa97b +
                     (*(int *)((int)&DAT_0019e973 + iVar22 * 2 + iVar16 + 4) >> 0x10) * 0x12);
            piVar23 = piVar23 + iVar22 * 7;
            piVar21 = piVar21 + iVar22 * 7;
            if ((*(ushort *)(piVar21 + 2) & *(ushort *)(piVar25 + 2) & *(ushort *)(piVar23 + 2) &
                0x1f8) == 0) {
              iVar22 = (piVar21[1] - piVar23[1]) * (*piVar23 - *piVar25) -
                       (*piVar21 - *piVar23) * (piVar23[1] - piVar25[1]);
            }
            else {
              iVar22 = 0;
            }
            if (0 < iVar22) {
              iVar22 = piVar25[6];
              if (piVar25[6] < piVar23[6]) {
                iVar22 = piVar23[6];
              }
              if (iVar22 < piVar21[6]) {
                iVar22 = piVar21[6];
              }
              iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar7 = (&DAT_00387220)[iVar22];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar7;
                (&DAT_00387220)[iVar22] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar22 = piVar25[2];
                iVar19 = piVar23[2];
                iVar9 = piVar21[2];
                piVar2 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar2 = *piVar25;
                puVar12[3] = piVar25[1];
                puVar12[4] = 0;
                puVar12[6] = (iVar22 >> 0x10) << 8;
                puVar12[5] = 0;
                puVar12[7] = *piVar23;
                puVar12[8] = piVar23[1];
                puVar12[9] = 0x1fffff;
                puVar12[0xb] = (iVar19 >> 0x10) << 8;
                puVar12[10] = 0;
                puVar12[0xc] = *piVar21;
                iVar22 = piVar21[1];
                puVar12[0xe] = 0x1fffff;
                puVar12[0xd] = iVar22;
                puVar12[0xf] = 0x1fffff;
                puVar12[0x10] = (iVar9 >> 0x10) << 8;
              }
            }
            puVar12 = DAT_00387d20;
            if ((*(ushort *)(piVar24 + 2) & *(ushort *)(piVar21 + 2) & *(ushort *)(piVar25 + 2) &
                0x1f8) == 0) {
              iVar22 = (piVar25[1] - piVar24[1]) * (*piVar24 - *piVar21) -
                       (*piVar25 - *piVar24) * (piVar24[1] - piVar21[1]);
            }
            else {
              iVar22 = 0;
            }
            if (0 < iVar22) {
              iVar22 = piVar21[6];
              if (piVar21[6] < piVar24[6]) {
                iVar22 = piVar24[6];
              }
              if (iVar22 < piVar25[6]) {
                iVar22 = piVar25[6];
              }
              iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar7 = (&DAT_00387220)[iVar22];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar7;
                (&DAT_00387220)[iVar22] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar22 = piVar21[2];
                iVar19 = piVar24[2];
                iVar8 = piVar25[2];
                piVar23 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar23 = *piVar21;
                puVar12[3] = piVar21[1];
                puVar12[4] = 0x1fffff;
                puVar12[6] = (iVar22 >> 0x10) << 8;
                puVar12[5] = 0x1fffff;
                puVar12[7] = *piVar24;
                iVar22 = piVar24[1];
                puVar12[9] = 0;
                puVar12[10] = 0x1fffff;
                puVar12[8] = iVar22;
                puVar12[0xb] = (iVar19 >> 0x10) << 8;
                piVar21 = puVar12 + 0xc;
                *piVar21 = *piVar25;
                iVar22 = piVar25[1];
                puVar12[0xe] = 0;
                puVar12[0xd] = iVar22;
LAB_0009b8e3:
                piVar21[3] = 0;
                piVar21[4] = (iVar8 >> 0x10) << 8;
              }
            }
          }
          else {
            piVar21 = piVar24 + 0x70;
            piVar23 = piVar25 + 0x70;
            if ((bVar4 & 1) == 0) {
              if ((*(ushort *)(piVar24 + 0x72) &
                   *(ushort *)(piVar25 + 2) & *(ushort *)(piVar25 + 0x72) & 0x1f8) == 0) {
                iVar22 = (piVar24[0x71] - piVar25[0x71]) * (*piVar23 - *piVar25) -
                         (*piVar21 - *piVar23) * (piVar25[0x71] - piVar25[1]);
              }
              else {
                iVar22 = 0;
              }
              if (0 < iVar22) {
                iVar22 = piVar25[6];
                if (piVar25[6] < piVar25[0x76]) {
                  iVar22 = piVar25[0x76];
                }
                if (iVar22 < piVar24[0x76]) {
                  iVar22 = piVar24[0x76];
                }
                iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) -
                              (uint)((iVar22 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar22];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar22] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                  piVar2 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar25;
                  iVar22 = piVar25[1];
                  puVar12[4] = 0;
                  puVar12[3] = iVar22;
                  puVar12[5] = 0;
                  puVar12[6] = (piVar25[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar23;
                  iVar22 = piVar25[0x71];
                  puVar12[9] = 0x1fffff;
                  puVar12[8] = iVar22;
                  puVar12[10] = 0;
                  puVar12[0xb] = (piVar25[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar21;
                  iVar22 = piVar24[0x71];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = (piVar24[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              puVar12 = DAT_00387d20;
              if ((*(ushort *)(piVar25 + 2) & *(ushort *)(piVar24 + 0x72) & *(ushort *)(piVar24 + 2)
                  & 0x1f8) == 0) {
                iVar22 = (piVar25[1] - piVar24[1]) * (*piVar24 - *piVar21) -
                         (*piVar25 - *piVar24) * (piVar24[1] - piVar24[0x71]);
              }
              else {
                iVar22 = 0;
              }
              if (0 < iVar22) {
                iVar22 = piVar24[0x76];
                if (piVar24[0x76] < piVar24[6]) {
                  iVar22 = piVar24[6];
                }
                if (iVar22 < piVar25[6]) {
                  iVar22 = piVar25[6];
                }
                iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) -
                              (uint)((iVar22 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar22];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar22] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                  piVar23 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar23 = *piVar21;
                  iVar22 = piVar24[0x71];
                  puVar12[4] = 0x1fffff;
                  puVar12[3] = iVar22;
                  puVar12[5] = 0x1fffff;
                  puVar12[6] = (piVar24[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar24;
                  iVar22 = piVar24[1];
                  puVar12[9] = 0;
                  puVar12[10] = 0x1fffff;
                  puVar12[8] = iVar22;
                  puVar12[0xb] = (piVar24[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar25;
                  iVar22 = piVar25[1];
                  puVar12[0xe] = 0;
                  puVar12[0xf] = 0;
                  puVar12[0xd] = iVar22;
                  puVar12[0x10] = (piVar25[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
            else {
              if ((*(ushort *)(piVar24 + 0x72) &
                   *(ushort *)(piVar25 + 0x72) & *(ushort *)(piVar25 + 2) & 0x1f8) == 0) {
                iVar22 = (piVar24[0x71] - piVar25[0x71]) * (*piVar23 - *piVar25) -
                         (*piVar21 - *piVar23) * (piVar25[0x71] - piVar25[1]);
              }
              else {
                iVar22 = 0;
              }
              if (0 < iVar22) {
                iVar22 = piVar25[6];
                if (piVar25[6] < piVar25[0x76]) {
                  iVar22 = piVar25[0x76];
                }
                if (iVar22 < piVar24[0x76]) {
                  iVar22 = piVar24[0x76];
                }
                iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) -
                              (uint)((iVar22 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar22];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar22] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x243;
                  piVar2 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar25;
                  iVar22 = piVar25[1];
                  puVar12[4] = 0;
                  puVar12[3] = iVar22;
                  puVar12[5] = 0;
                  puVar12[6] = (piVar25[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar23;
                  iVar22 = piVar25[0x71];
                  puVar12[9] = 0x1fffff;
                  puVar12[8] = iVar22;
                  puVar12[10] = 0;
                  puVar12[0xb] = (piVar25[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar21;
                  iVar22 = piVar24[0x71];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar22;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = (piVar24[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              puVar12 = DAT_00387d20;
              if ((*(ushort *)(piVar25 + 2) & *(ushort *)(piVar24 + 0x72) & *(ushort *)(piVar24 + 2)
                  & 0x1f8) == 0) {
                iVar22 = (piVar25[1] - piVar24[1]) * (*piVar24 - *piVar21) -
                         (*piVar25 - *piVar24) * (piVar24[1] - piVar24[0x71]);
              }
              else {
                iVar22 = 0;
              }
              if (0 < iVar22) {
                iVar22 = piVar24[0x76];
                if (piVar24[0x76] < piVar24[6]) {
                  iVar22 = piVar24[6];
                }
                if (iVar22 < piVar25[6]) {
                  iVar22 = piVar25[6];
                }
                iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) -
                              (uint)((iVar22 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar7 = (&DAT_00387220)[iVar22];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar7;
                  (&DAT_00387220)[iVar22] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x243;
                  piVar23 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar23 = *piVar21;
                  iVar22 = piVar24[0x71];
                  puVar12[4] = 0x1fffff;
                  puVar12[3] = iVar22;
                  puVar12[5] = 0x1fffff;
                  puVar12[6] = (piVar24[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar24;
                  iVar22 = piVar24[1];
                  puVar12[9] = 0;
                  puVar12[10] = 0x1fffff;
                  puVar12[8] = iVar22;
                  puVar12[0xb] = (piVar24[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar25;
                  iVar22 = piVar25[1];
                  puVar12[0xe] = 0;
                  puVar12[0xf] = 0;
                  puVar12[0xd] = iVar22;
                  puVar12[0x10] = (piVar25[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
          }
        }
        puVar12 = DAT_00387d20;
        iVar22 = (&DAT_00377b70)[uVar17];
        if (iVar22 != 0) {
          iVar16 = (*(int *)((int)&DAT_0019e973 + iVar22 * 2 + iVar16 + 4) >> 0x10) * 0x12;
          piVar21 = local_338 + iVar22 * 7 + 0x70;
          piVar23 = local_334 + iVar22 * 7 + 0x70;
          piVar25 = local_338 + iVar22 * 7;
          piVar24 = local_334 + iVar22 * 7;
          uVar6 = *(undefined2 *)((int)&DAT_001aa97b + iVar16);
          if ((*(ushort *)(piVar25 + 2) & *(ushort *)(piVar21 + 2) & *(ushort *)(piVar23 + 2) &
              0x1f8) == 0) {
            iVar22 = (piVar23[1] - piVar21[1]) * (*piVar21 - *piVar25) -
                     (*piVar23 - *piVar21) * (piVar21[1] - piVar25[1]);
          }
          else {
            iVar22 = 0;
          }
          if (0 < iVar22) {
            iVar22 = piVar25[6];
            if (piVar25[6] < piVar21[6]) {
              iVar22 = piVar21[6];
            }
            if (iVar22 < piVar23[6]) {
              iVar22 = piVar23[6];
            }
            iVar22 = (int)((iVar22 + (iVar22 >> 0x1f) * -0x10) - (uint)((iVar22 >> 0x1f) << 3 < 0))
                     >> 4;
            if (DAT_00387d20 < DAT_0033317f) {
              uVar7 = (&DAT_00387220)[iVar22];
              *(undefined1 *)(DAT_00387d20 + 1) = 0;
              *DAT_00387d20 = uVar7;
              (&DAT_00387220)[iVar22] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
              iVar22 = piVar25[2];
              iVar19 = piVar21[2];
              iVar9 = piVar23[2];
              piVar2 = DAT_00387d20 + 2;
              DAT_00387d20 = DAT_00387d20 + 0x11;
              *piVar2 = *piVar25;
              puVar12[3] = piVar25[1];
              puVar12[4] = 0;
              puVar12[6] = (iVar22 >> 0x10) << 8;
              puVar12[5] = 0;
              puVar12[7] = *piVar21;
              puVar12[8] = piVar21[1];
              puVar12[9] = 0x1fffff;
              puVar12[0xb] = (iVar19 >> 0x10) << 8;
              puVar12[10] = 0;
              puVar12[0xc] = *piVar23;
              iVar22 = piVar23[1];
              puVar12[0xe] = 0x1fffff;
              puVar12[0xd] = iVar22;
              puVar12[0xf] = 0x1fffff;
              puVar12[0x10] = (iVar9 >> 0x10) << 8;
            }
          }
          puVar12 = DAT_00387d20;
          uVar6 = *(undefined2 *)((int)&DAT_001aa97b + iVar16);
          if ((*(ushort *)(piVar25 + 2) & *(ushort *)(piVar23 + 2) & *(ushort *)(piVar24 + 2) &
              0x1f8) == 0) {
            iVar16 = (piVar25[1] - piVar24[1]) * (*piVar24 - *piVar23) -
                     (*piVar25 - *piVar24) * (piVar24[1] - piVar23[1]);
          }
          else {
            iVar16 = 0;
          }
          if (0 < iVar16) {
            iVar16 = piVar23[6];
            if (piVar23[6] < piVar24[6]) {
              iVar16 = piVar24[6];
            }
            if (iVar16 < piVar25[6]) {
              iVar16 = piVar25[6];
            }
            iVar16 = (int)((iVar16 + (iVar16 >> 0x1f) * -0x10) - (uint)((iVar16 >> 0x1f) << 3 < 0))
                     >> 4;
            if (DAT_00387d20 < DAT_0033317f) {
              uVar7 = (&DAT_00387220)[iVar16];
              *(undefined1 *)(DAT_00387d20 + 1) = 0;
              *DAT_00387d20 = uVar7;
              (&DAT_00387220)[iVar16] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
              iVar16 = piVar24[2];
              iVar22 = piVar23[2];
              iVar19 = piVar25[2];
              piVar21 = DAT_00387d20 + 2;
              DAT_00387d20 = DAT_00387d20 + 0x11;
              *piVar21 = *piVar23;
              iVar9 = piVar23[1];
              puVar12[4] = 0x1fffff;
              puVar12[5] = 0x1fffff;
              puVar12[3] = iVar9;
              puVar12[6] = (iVar22 >> 0x10) << 8;
              puVar12[7] = *piVar24;
              iVar22 = piVar24[1];
              puVar12[9] = 0;
              puVar12[8] = iVar22;
              puVar12[10] = 0x1fffff;
              puVar12[0xb] = (iVar16 >> 0x10) << 8;
              puVar12[0xc] = *piVar25;
              iVar16 = piVar25[1];
              puVar12[0xe] = 0;
              puVar12[0xd] = iVar16;
              puVar12[0xf] = 0;
              puVar12[0x10] = (iVar19 >> 0x10) << 8;
            }
          }
        }
        local_338 = local_338 + 0x70;
        local_334 = local_334 + 0x70;
        local_78 = local_78 + 5;
        local_74 = local_74 + 5;
        iVar13 = iVar13 + 1;
        local_328 = local_328 + 1;
      } while ((int)local_328 < iVar20);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_09bdf0 (Ghidra: FUN_0009bdf0)
 * Prototype: void sub_09bdf0(void);
 * Address  : 0x9bdf0 (Size: 12618 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 1 -> 0xdb1a4
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0009e4ee) */
/* WARNING: Removing unreachable block (ram,0x0009dd65) */
/* WARNING: Removing unreachable block (ram,0x0009e6f7) */
/* WARNING: Removing unreachable block (ram,0x0009df79) */
/* WARNING: Removing unreachable block (ram,0x0009e951) */
/* WARNING: Removing unreachable block (ram,0x0009eb78) */

void FUN_0009bdf0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  short sVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int in_EAX;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int in_ECX;
  int *piVar17;
  int in_EDX;
  int unaff_EBX;
  int *piVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int *local_340;
  int *local_33c;
  int local_330;
  undefined4 *local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  short *local_304;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_270;
  int local_26c;
  int local_268;
  int local_248;
  int local_244;
  int local_240;
  int local_210;
  int local_20c;
  int local_208;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_18c;
  int local_188;
  int local_184;
  int *local_90;
  int *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_3c;
  
  if ((0 < in_EDX) && (in_EDX < 0xff)) {
    if (in_EAX + unaff_EBX < 1) {
      unaff_EBX = 1 - in_EAX;
    }
    if (0xff < in_EAX + in_ECX) {
      in_ECX = 0xff - in_EAX;
    }
    iVar19 = in_EAX + unaff_EBX;
    iVar13 = (unaff_EBX + 0x1f) * 0x1c0;
    local_340 = (int *)(DAT_00387218 + iVar13);
    local_33c = (int *)(DAT_0038721c + iVar13);
    iVar11 = DAT_002e6f23 * 6;
    uVar14 = (*(ushort *)((int)&DAT_0019e973 + DAT_002e6f23 * 0x18 + 3) & 0xff) & 0xffffff03;
    local_330 = 0;
    iVar13 = iVar19 * 5;
    local_74 = in_EDX * 0x500;
    local_88 = (int)&DAT_00279203 + local_74 + iVar13;
    local_84 = iVar13 + local_74;
    local_80 = iVar13 + -0x500 + local_74;
    local_7c = iVar13 + 0x500 + local_74;
    local_78 = iVar13 + -5 + local_74;
    local_74 = iVar13 + 5 + local_74;
    if (0 < in_ECX - unaff_EBX) {
      do {
        bVar4 = *(byte *)((int)&DAT_00279203 + local_84);
        local_324 = &DAT_0019e973 + iVar11;
        local_320 = uVar14;
        local_30c = uVar14;
        if ((*(uint *)(local_88 + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
          if ((*(uint *)(local_88 + 1) & 0x3ff800) != 0) {
            FUN_000db1a4(iVar19);
          }
          uVar16 = *(uint *)(local_88 + 1) & 0x7ff;
          iVar13 = uVar16 * 0x18;
          local_324 = &DAT_0019e973 + uVar16 * 6;
          uVar7 = *(ushort *)((int)&DAT_0019e973 + iVar13 + 3);
          local_30c = (uint)uVar7;
          local_320 = local_30c;
          if (((7 < uVar7) && ((*(byte *)((int)&DAT_00279203 + local_84) & 0x42) == 0)) &&
             ((*(byte *)((int)&DAT_0019e973 + iVar13 + 2) & 0xe) == 0)) {
            local_320 = local_30c & 3;
          }
        }
        local_31c = uVar14;
        if ((*(uint *)(local_88 + -0x4ff) >> 0x1c & (uint)DAT_00379395) != 0) {
          iVar13 = (*(uint *)(local_88 + -0x4ff) & 0x7ff) * 0x18;
          uVar7 = *(ushort *)((int)&DAT_0019e973 + iVar13 + 3);
          local_31c = (uint)uVar7;
          if (((7 < uVar7) && ((*(byte *)((int)&DAT_00279203 + local_80) & 0x42) == 0)) &&
             ((*(byte *)((int)&DAT_0019e973 + iVar13 + 2) & 0xe) == 0)) {
            local_31c = local_31c & 3;
          }
        }
        local_314 = uVar14;
        if ((*(uint *)(local_88 + 0x501) >> 0x1c & (uint)DAT_00379395) != 0) {
          iVar13 = (*(uint *)(local_88 + 0x501) & 0x7ff) * 0x18;
          local_314 = (uint)*(ushort *)((int)&DAT_0019e973 + iVar13 + 3);
          if (((7 < local_314) && ((*(byte *)((int)&DAT_00279203 + local_7c) & 0x42) == 0)) &&
             ((*(byte *)((int)&DAT_0019e973 + iVar13 + 2) & 0xe) == 0)) {
            local_314 = local_314 & 3;
          }
        }
        local_310 = uVar14;
        if ((*(uint *)(local_88 + -4) >> 0x1c & (uint)DAT_00379395) != 0) {
          iVar13 = (*(uint *)(local_88 + -4) & 0x7ff) * 0x18;
          uVar7 = *(ushort *)((int)&DAT_0019e973 + iVar13 + 3);
          local_310 = (uint)uVar7;
          if (((7 < uVar7) && ((*(byte *)((int)&DAT_00279203 + local_78) & 0x42) == 0)) &&
             ((*(byte *)((int)&DAT_0019e973 + iVar13 + 2) & 0xe) == 0)) {
            local_310 = local_310 & 3;
          }
        }
        local_318 = uVar14;
        if ((*(uint *)(local_88 + 6) >> 0x1c & (uint)DAT_00379395) != 0) {
          iVar13 = (*(uint *)(local_88 + 6) & 0x7ff) * 0x18;
          uVar7 = *(ushort *)((int)&DAT_0019e973 + iVar13 + 3);
          local_318 = (uint)uVar7;
          if (((7 < uVar7) && ((*(byte *)((int)&DAT_00279203 + local_74) & 0x42) == 0)) &&
             ((*(byte *)((int)&DAT_0019e973 + iVar13 + 2) & 0xe) == 0)) {
            local_318 = local_318 & 3;
          }
        }
        local_304 = (short *)(local_324 + 2);
        local_90 = local_340 + 0x70;
        piVar17 = local_33c + 0x77;
        local_8c = local_33c + 0x70;
        piVar18 = local_340 + 0x77;
        piVar20 = local_33c;
        piVar21 = local_340;
        for (local_3c = 1; puVar12 = DAT_00387d20, iVar13 = DAT_0037937c, uVar16 = local_3c & 0xffff
            , uVar16 <= local_320; local_3c = local_3c * 2) {
          sVar5 = *local_304;
          if ((uVar16 & local_320) != 0) {
            if ((local_31c & uVar16) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d44 * 2 + sVar5 * 0x12);
              piVar2 = piVar21 + 7;
              if ((*(ushort *)(piVar21 + 2) & *(ushort *)(piVar18 + 2) & *(ushort *)(piVar21 + 9) &
                  0x1f8) == 0) {
                iVar15 = (piVar21[1] - piVar21[8]) * (*piVar2 - *piVar18) -
                         (piVar21[8] - piVar18[1]) * (*piVar21 - *piVar2);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = piVar18[6];
                if (piVar18[6] < piVar21[0xd]) {
                  iVar15 = piVar21[0xd];
                }
                if (iVar15 < piVar21[6]) {
                  iVar15 = piVar21[6];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_2d0 = piVar18[2] >> 0x10;
                  local_2cc = piVar21[9] >> 0x10;
                  local_2c8 = piVar21[2] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_2d0 = local_2d0 * iVar13 >> 0x11;
                    local_2cc = local_2cc * iVar13 >> 0x11;
                    local_2c8 = iVar13 * local_2c8 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *piVar18;
                  puVar12[3] = piVar18[1];
                  puVar12[4] = 0;
                  puVar12[6] = local_2d0 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar2;
                  puVar12[8] = piVar21[8];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_2cc << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *piVar21;
                  iVar13 = piVar21[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_2c8 << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar13 = DAT_0037937c;
              if ((*(ushort *)(piVar18 + 2) & *(ushort *)(piVar21 + 2) & *(ushort *)(local_90 + 2) &
                  0x1f8) == 0) {
                iVar15 = (*local_90 - *piVar21) * (piVar18[1] - local_90[1]) -
                         (local_90[1] - piVar21[1]) * (*piVar18 - *local_90);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = piVar21[6];
                if (piVar21[6] < local_90[6]) {
                  iVar15 = local_90[6];
                }
                if (iVar15 < piVar18[6]) {
                  iVar15 = piVar18[6];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_2a8 = piVar21[2] >> 0x10;
                  local_2a4 = local_90[2] >> 0x10;
                  local_2a0 = piVar18[2] >> 0x10;
                  piVar2 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_2a8 = local_2a8 * iVar13 >> 0x11;
                    local_2a4 = local_2a4 * iVar13 >> 0x11;
                    local_2a0 = iVar13 * local_2a0 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar21;
                  puVar12[3] = piVar21[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_2a8 << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *local_90;
                  puVar12[8] = local_90[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_2a4 << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar18;
                  iVar13 = piVar18[1];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_2a0 << 8;
                }
              }
            }
            puVar12 = DAT_00387d20;
            iVar13 = DAT_00379380;
            if ((local_3c & 0xffff & local_314) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d46 * 2 + sVar5 * 0x12);
              piVar2 = piVar20 + 7;
              if ((*(ushort *)(local_8c + 2) & *(ushort *)(piVar20 + 9) & *(ushort *)(piVar17 + 2) &
                  0x1f8) == 0) {
                iVar15 = (*piVar17 - *piVar2) * (local_8c[1] - piVar17[1]) -
                         (piVar17[1] - piVar20[8]) * (*local_8c - *piVar17);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = piVar20[0xd];
                if (piVar20[0xd] < piVar17[6]) {
                  iVar15 = piVar17[6];
                }
                if (iVar15 < local_8c[6]) {
                  iVar15 = local_8c[6];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_270 = piVar20[9] >> 0x10;
                  local_26c = piVar17[2] >> 0x10;
                  local_268 = local_8c[2] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_270 = local_270 * iVar13 >> 0x11;
                    local_26c = local_26c * iVar13 >> 0x11;
                    local_268 = iVar13 * local_268 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *piVar2;
                  puVar12[3] = piVar20[8];
                  puVar12[4] = 0;
                  puVar12[6] = local_270 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar17;
                  puVar12[8] = piVar17[1];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_26c << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *local_8c;
                  iVar13 = local_8c[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_268 << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar13 = DAT_00379380;
              if ((*(ushort *)(piVar20 + 9) & *(ushort *)(local_8c + 2) & *(ushort *)(piVar20 + 2) &
                  0x1f8) == 0) {
                iVar15 = (*piVar20 - *local_8c) * (piVar20[8] - piVar20[1]) -
                         (piVar20[1] - local_8c[1]) * (*piVar2 - *piVar20);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = local_8c[6];
                if (local_8c[6] < piVar20[6]) {
                  iVar15 = piVar20[6];
                }
                if (iVar15 < piVar20[0xd]) {
                  iVar15 = piVar20[0xd];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_248 = local_8c[2] >> 0x10;
                  local_244 = piVar20[2] >> 0x10;
                  local_240 = piVar20[9] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_248 = local_248 * iVar13 >> 0x11;
                    local_244 = local_244 * iVar13 >> 0x11;
                    local_240 = iVar13 * local_240 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *local_8c;
                  puVar12[3] = local_8c[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_248 << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *piVar20;
                  puVar12[8] = piVar20[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_244 << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar2;
                  iVar13 = piVar20[8];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_240 << 8;
                }
              }
            }
            puVar12 = DAT_00387d20;
            iVar13 = DAT_00379374;
            if ((local_3c & 0xffff & local_310) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d47 * 2 + sVar5 * 0x12);
              piVar2 = piVar21 + 7;
              piVar1 = piVar20 + 7;
              if ((*(ushort *)(piVar20 + 9) & *(ushort *)(piVar21 + 9) & *(ushort *)(piVar20 + 2) &
                  0x1f8) == 0) {
                iVar15 = (piVar20[1] - piVar20[8]) * (*piVar1 - *piVar2) -
                         (*piVar20 - *piVar1) * (piVar20[8] - piVar21[8]);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = piVar21[0xd];
                if (piVar21[0xd] < piVar20[0xd]) {
                  iVar15 = piVar20[0xd];
                }
                if (iVar15 < piVar20[6]) {
                  iVar15 = piVar20[6];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_210 = piVar21[9] >> 0x10;
                  local_20c = piVar20[9] >> 0x10;
                  local_208 = piVar20[2] >> 0x10;
                  piVar3 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_210 = local_210 * iVar13 >> 0x11;
                    local_20c = local_20c * iVar13 >> 0x11;
                    local_208 = iVar13 * local_208 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar3 = *piVar2;
                  puVar12[3] = piVar21[8];
                  puVar12[4] = 0;
                  puVar12[6] = local_210 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar1;
                  puVar12[8] = piVar20[8];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_20c << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *piVar20;
                  iVar13 = piVar20[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_208 << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar13 = DAT_00379374;
              if ((*(ushort *)(piVar21 + 9) & *(ushort *)(piVar20 + 2) & *(ushort *)(piVar21 + 2) &
                  0x1f8) == 0) {
                iVar15 = (*piVar21 - *piVar20) * (piVar21[8] - piVar21[1]) -
                         (piVar21[1] - piVar20[1]) * (*piVar2 - *piVar21);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = piVar20[6];
                if (piVar20[6] < piVar21[6]) {
                  iVar15 = piVar21[6];
                }
                if (iVar15 < piVar21[0xd]) {
                  iVar15 = piVar21[0xd];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_1e8 = piVar20[2] >> 0x10;
                  local_1e4 = piVar21[2] >> 0x10;
                  local_1e0 = piVar21[9] >> 0x10;
                  piVar1 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_1e8 = local_1e8 * iVar13 >> 0x11;
                    local_1e4 = local_1e4 * iVar13 >> 0x11;
                    local_1e0 = iVar13 * local_1e0 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar1 = *piVar20;
                  puVar12[3] = piVar20[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_1e8 << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *piVar21;
                  puVar12[8] = piVar21[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_1e4 << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar2;
                  iVar13 = piVar21[8];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_1e0 << 8;
                }
              }
            }
            puVar12 = DAT_00387d20;
            iVar13 = DAT_00379378;
            if ((local_3c & 0xffff & local_318) == 0) {
              uVar6 = *(undefined2 *)((int)&DAT_001aa973 + (uint)DAT_00191d45 * 2 + sVar5 * 0x12);
              if ((*(ushort *)(local_90 + 2) & *(ushort *)(piVar17 + 2) & *(ushort *)(piVar18 + 2) &
                  0x1f8) == 0) {
                iVar15 = (*piVar18 - *piVar17) * (local_90[1] - piVar18[1]) -
                         (piVar18[1] - piVar17[1]) * (*local_90 - *piVar18);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = piVar17[6];
                if (piVar17[6] < piVar18[6]) {
                  iVar15 = piVar18[6];
                }
                if (iVar15 < local_90[6]) {
                  iVar15 = local_90[6];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_1b4 = piVar17[2] >> 0x10;
                  local_1b0 = piVar18[2] >> 0x10;
                  local_1ac = local_90[2] >> 0x10;
                  piVar2 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_1b4 = local_1b4 * iVar13 >> 0x11;
                    local_1b0 = local_1b0 * iVar13 >> 0x11;
                    local_1ac = iVar13 * local_1ac >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar17;
                  puVar12[3] = piVar17[1];
                  puVar12[4] = 0;
                  puVar12[6] = local_1b4 << 8;
                  puVar12[5] = 0;
                  puVar12[7] = *piVar18;
                  puVar12[8] = piVar18[1];
                  puVar12[9] = 0x1fffff;
                  puVar12[0xb] = local_1b0 << 8;
                  puVar12[10] = 0;
                  puVar12[0xc] = *local_90;
                  iVar13 = local_90[1];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = local_1ac << 8;
                }
              }
              puVar12 = DAT_00387d20;
              iVar13 = DAT_00379378;
              if ((*(ushort *)(piVar17 + 2) & *(ushort *)(local_90 + 2) & *(ushort *)(local_8c + 2)
                  & 0x1f8) == 0) {
                iVar15 = (*local_8c - *local_90) * (piVar17[1] - local_8c[1]) -
                         (local_8c[1] - local_90[1]) * (*piVar17 - *local_8c);
              }
              else {
                iVar15 = 0;
              }
              if (0 < iVar15) {
                iVar15 = local_90[6];
                if (local_90[6] < local_8c[6]) {
                  iVar15 = local_8c[6];
                }
                if (iVar15 < piVar17[6]) {
                  iVar15 = piVar17[6];
                }
                iVar15 = (int)((iVar15 + (iVar15 >> 0x1f) * -0x10) -
                              (uint)((iVar15 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar15];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar15] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                  local_18c = local_90[2] >> 0x10;
                  local_188 = local_8c[2] >> 0x10;
                  local_184 = piVar17[2] >> 0x10;
                  piVar2 = DAT_00387d20 + 2;
                  if (-1 < iVar13) {
                    iVar13 = iVar13 * 4 + 0x10000;
                    local_18c = local_18c * iVar13 >> 0x11;
                    local_188 = local_188 * iVar13 >> 0x11;
                    local_184 = iVar13 * local_184 >> 0x11;
                  }
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *local_90;
                  puVar12[3] = local_90[1];
                  puVar12[4] = 0x1fffff;
                  puVar12[6] = local_18c << 8;
                  puVar12[5] = 0x1fffff;
                  puVar12[7] = *local_8c;
                  puVar12[8] = local_8c[1];
                  puVar12[9] = 0;
                  puVar12[0xb] = local_188 << 8;
                  puVar12[10] = 0x1fffff;
                  puVar12[0xc] = *piVar17;
                  iVar13 = piVar17[1];
                  puVar12[0xe] = 0;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0;
                  puVar12[0x10] = local_184 << 8;
                }
              }
            }
          }
          piVar18 = piVar18 + 7;
          piVar21 = piVar21 + 7;
          piVar17 = piVar17 + 7;
          piVar20 = piVar20 + 7;
          local_8c = local_8c + 7;
          local_304 = local_304 + 1;
          local_90 = local_90 + 7;
        }
        iVar13 = (&DAT_00377f70)[local_320];
        piVar18 = local_340 + 0x70;
        piVar17 = local_33c + 0x70;
        if (iVar13 == 0) {
          if ((bVar4 & 4) == 0) {
            uVar6 = *(undefined2 *)((int)local_324 + 5);
            if ((*(ushort *)(local_33c + 0x72) &
                 *(ushort *)(local_340 + 2) & *(ushort *)(local_340 + 0x72) & 0x1f8) == 0) {
              iVar13 = (local_33c[0x71] - local_340[0x71]) * (*piVar18 - *local_340) -
                       (*piVar17 - *piVar18) * (local_340[0x71] - local_340[1]);
            }
            else {
              iVar13 = 0;
            }
            if (0 < iVar13) {
              iVar13 = local_340[6];
              if (local_340[6] < local_340[0x76]) {
                iVar13 = local_340[0x76];
              }
              if (iVar13 < local_33c[0x76]) {
                iVar13 = local_33c[0x76];
              }
              iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar8 = (&DAT_00387220)[iVar13];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar13] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar13 = local_340[2];
                iVar15 = local_340[0x72];
                iVar9 = local_33c[0x72];
                piVar20 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar20 = *local_340;
                puVar12[3] = local_340[1];
                puVar12[4] = 0;
                puVar12[6] = (iVar13 >> 0x10) << 8;
                puVar12[5] = 0;
                puVar12[7] = *piVar18;
                iVar13 = local_340[0x71];
                puVar12[9] = 0x1fffff;
                puVar12[10] = 0;
                puVar12[8] = iVar13;
                puVar12[0xb] = (iVar15 >> 0x10) << 8;
                puVar12[0xc] = *piVar17;
                iVar13 = local_33c[0x71];
                puVar12[0xe] = 0x1fffff;
                puVar12[0xd] = iVar13;
                puVar12[0xf] = 0x1fffff;
                puVar12[0x10] = (iVar9 >> 0x10) << 8;
              }
            }
            puVar12 = DAT_00387d20;
            uVar6 = *(undefined2 *)((int)local_324 + 5);
            if ((*(ushort *)(local_340 + 2) &
                 *(ushort *)(local_33c + 2) & *(ushort *)(local_33c + 0x72) & 0x1f8) == 0) {
              iVar13 = (local_340[1] - local_33c[1]) * (*local_33c - *piVar17) -
                       (*local_340 - *local_33c) * (local_33c[1] - local_33c[0x71]);
            }
            else {
              iVar13 = 0;
            }
            if (0 < iVar13) {
              iVar13 = local_33c[0x76];
              if (local_33c[0x76] < local_33c[6]) {
                iVar13 = local_33c[6];
              }
              if (iVar13 < local_340[6]) {
                iVar13 = local_340[6];
              }
              iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar8 = (&DAT_00387220)[iVar13];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar13] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar13 = local_33c[0x72];
                iVar10 = local_340[2];
                iVar15 = local_33c[2];
                piVar18 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar18 = *piVar17;
                iVar9 = local_33c[0x71];
                puVar12[4] = 0x1fffff;
                puVar12[3] = iVar9;
                puVar12[5] = 0x1fffff;
                puVar12[6] = (iVar13 >> 0x10) << 8;
                puVar12[7] = *local_33c;
                iVar13 = local_33c[1];
                puVar12[9] = 0;
                puVar12[10] = 0x1fffff;
                puVar12[8] = iVar13;
                puVar12[0xb] = (iVar15 >> 0x10) << 8;
                piVar17 = puVar12 + 0xc;
                *piVar17 = *local_340;
                iVar13 = local_340[1];
                puVar12[0xe] = 0;
                puVar12[0xd] = iVar13;
                goto LAB_0009e79b;
              }
            }
          }
          else {
            if ((*(ushort *)(local_33c + 0x72) &
                 *(ushort *)(local_340 + 2) & *(ushort *)(local_340 + 0x72) & 0x1f8) == 0) {
              iVar13 = (*piVar18 - *local_340) * (local_33c[0x71] - local_340[0x71]) -
                       (*piVar17 - *piVar18) * (local_340[0x71] - local_340[1]);
            }
            else {
              iVar13 = 0;
            }
            if (0 < iVar13) {
              iVar13 = local_340[6];
              if (local_340[6] < local_340[0x76]) {
                iVar13 = local_340[0x76];
              }
              if (iVar13 < local_33c[0x76]) {
                iVar13 = local_33c[0x76];
              }
              iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar8 = (&DAT_00387220)[iVar13];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar13] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                piVar20 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar20 = *local_340;
                iVar13 = local_340[1];
                puVar12[4] = 0;
                puVar12[3] = iVar13;
                puVar12[5] = 0;
                puVar12[6] = (local_340[2] >> 0x10) * 0x100 + 0xc0000;
                puVar12[7] = *piVar18;
                iVar13 = local_340[0x71];
                puVar12[9] = 0x1fffff;
                puVar12[8] = iVar13;
                puVar12[10] = 0;
                puVar12[0xb] = (local_340[0x72] >> 0x10) * 0x100 + 0xc0000;
                puVar12[0xc] = *piVar17;
                iVar13 = local_33c[0x71];
                puVar12[0xe] = 0x1fffff;
                puVar12[0xd] = iVar13;
                puVar12[0xf] = 0x1fffff;
                puVar12[0x10] = (local_33c[0x72] >> 0x10) * 0x100 + 0xc0000;
              }
            }
            puVar12 = DAT_00387d20;
            if ((*(ushort *)(local_340 + 2) &
                 *(ushort *)(local_33c + 0x72) & *(ushort *)(local_33c + 2) & 0x1f8) == 0) {
              iVar13 = (local_340[1] - local_33c[1]) * (*local_33c - *piVar17) -
                       (*local_340 - *local_33c) * (local_33c[1] - local_33c[0x71]);
            }
            else {
              iVar13 = 0;
            }
            if (0 < iVar13) {
              iVar13 = local_33c[0x76];
              if (local_33c[0x76] < local_33c[6]) {
                iVar13 = local_33c[6];
              }
              if (iVar13 < local_340[6]) {
                iVar13 = local_340[6];
              }
              iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar8 = (&DAT_00387220)[iVar13];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar13] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                piVar18 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar18 = *piVar17;
                iVar13 = local_33c[0x71];
                puVar12[4] = 0x1fffff;
                puVar12[3] = iVar13;
                puVar12[5] = 0x1fffff;
                puVar12[6] = (local_33c[0x72] >> 0x10) * 0x100 + 0xc0000;
                puVar12[7] = *local_33c;
                iVar13 = local_33c[1];
                puVar12[9] = 0;
                puVar12[10] = 0x1fffff;
                puVar12[8] = iVar13;
                puVar12[0xb] = (local_33c[2] >> 0x10) * 0x100 + 0xc0000;
                puVar12[0xc] = *local_340;
                iVar13 = local_340[1];
                puVar12[0xe] = 0;
                puVar12[0xf] = 0;
                puVar12[0xd] = iVar13;
                puVar12[0x10] = (local_340[2] >> 0x10) * 0x100 + 0xc0000;
              }
            }
          }
        }
        else {
          piVar21 = local_340 + iVar13 * 7;
          piVar20 = local_33c + iVar13 * 7;
          if ((bVar4 & 0x84) == 0) {
            uVar6 = *(undefined2 *)
                     ((int)&DAT_001aa97b +
                     (*(int *)((int)local_324 + (&DAT_00377f70)[local_30c] * 2 + 4) >> 0x10) * 0x12)
            ;
            piVar18 = piVar18 + iVar13 * 7;
            piVar17 = piVar17 + iVar13 * 7;
            if ((*(ushort *)(piVar17 + 2) & *(ushort *)(piVar21 + 2) & *(ushort *)(piVar18 + 2) &
                0x1f8) == 0) {
              iVar13 = (piVar17[1] - piVar18[1]) * (*piVar18 - *piVar21) -
                       (*piVar17 - *piVar18) * (piVar18[1] - piVar21[1]);
            }
            else {
              iVar13 = 0;
            }
            if (0 < iVar13) {
              iVar13 = piVar21[6];
              if (piVar21[6] < piVar18[6]) {
                iVar13 = piVar18[6];
              }
              if (iVar13 < piVar17[6]) {
                iVar13 = piVar17[6];
              }
              iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar8 = (&DAT_00387220)[iVar13];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar13] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar13 = piVar18[2];
                iVar15 = piVar21[2];
                iVar9 = piVar17[2];
                piVar2 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar2 = *piVar21;
                iVar10 = piVar21[1];
                puVar12[4] = 0;
                puVar12[5] = 0;
                puVar12[3] = iVar10;
                puVar12[6] = (iVar15 >> 0x10) << 8;
                puVar12[7] = *piVar18;
                puVar12[8] = piVar18[1];
                puVar12[9] = 0x1fffff;
                puVar12[0xb] = (iVar13 >> 0x10) << 8;
                puVar12[10] = 0;
                puVar12[0xc] = *piVar17;
                iVar13 = piVar17[1];
                puVar12[0xe] = 0x1fffff;
                puVar12[0xd] = iVar13;
                puVar12[0xf] = 0x1fffff;
                puVar12[0x10] = (iVar9 >> 0x10) << 8;
              }
            }
            puVar12 = DAT_00387d20;
            if ((*(ushort *)(piVar21 + 2) & *(ushort *)(piVar20 + 2) & *(ushort *)(piVar17 + 2) &
                0x1f8) == 0) {
              iVar13 = (piVar21[1] - piVar20[1]) * (*piVar20 - *piVar17) -
                       (*piVar21 - *piVar20) * (piVar20[1] - piVar17[1]);
            }
            else {
              iVar13 = 0;
            }
            if (0 < iVar13) {
              iVar13 = piVar17[6];
              if (piVar17[6] < piVar20[6]) {
                iVar13 = piVar20[6];
              }
              if (iVar13 < piVar21[6]) {
                iVar13 = piVar21[6];
              }
              iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (DAT_00387d20 < DAT_0033317f) {
                uVar8 = (&DAT_00387220)[iVar13];
                *(undefined1 *)(DAT_00387d20 + 1) = 0;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar13] = DAT_00387d20;
                *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
                iVar13 = piVar20[2];
                iVar15 = piVar17[2];
                iVar10 = piVar21[2];
                piVar18 = DAT_00387d20 + 2;
                DAT_00387d20 = DAT_00387d20 + 0x11;
                *piVar18 = *piVar17;
                iVar9 = piVar17[1];
                puVar12[4] = 0x1fffff;
                puVar12[5] = 0x1fffff;
                puVar12[3] = iVar9;
                puVar12[6] = (iVar15 >> 0x10) << 8;
                puVar12[7] = *piVar20;
                puVar12[8] = piVar20[1];
                puVar12[9] = 0;
                puVar12[0xb] = (iVar13 >> 0x10) << 8;
                puVar12[10] = 0x1fffff;
                piVar17 = puVar12 + 0xc;
                *piVar17 = *piVar21;
                iVar13 = piVar21[1];
                puVar12[0xe] = 0;
                puVar12[0xd] = iVar13;
LAB_0009e79b:
                piVar17[3] = 0;
                piVar17[4] = (iVar10 >> 0x10) << 8;
              }
            }
          }
          else {
            piVar17 = piVar20 + 0x70;
            piVar18 = piVar21 + 0x70;
            if ((bVar4 & 1) == 0) {
              if ((*(ushort *)(piVar20 + 0x72) &
                   *(ushort *)(piVar21 + 2) & *(ushort *)(piVar21 + 0x72) & 0x1f8) == 0) {
                iVar13 = (piVar20[0x71] - piVar21[0x71]) * (*piVar18 - *piVar21) -
                         (*piVar17 - *piVar18) * (piVar21[0x71] - piVar21[1]);
              }
              else {
                iVar13 = 0;
              }
              if (0 < iVar13) {
                iVar13 = piVar21[6];
                if (piVar21[6] < piVar21[0x76]) {
                  iVar13 = piVar21[0x76];
                }
                if (iVar13 < piVar20[0x76]) {
                  iVar13 = piVar20[0x76];
                }
                iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) -
                              (uint)((iVar13 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar13];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar13] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                  piVar2 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar21;
                  iVar13 = piVar21[1];
                  puVar12[4] = 0;
                  puVar12[3] = iVar13;
                  puVar12[5] = 0;
                  puVar12[6] = (piVar21[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar18;
                  iVar13 = piVar21[0x71];
                  puVar12[9] = 0x1fffff;
                  puVar12[8] = iVar13;
                  puVar12[10] = 0;
                  puVar12[0xb] = (piVar21[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar17;
                  iVar13 = piVar20[0x71];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = (piVar20[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              puVar12 = DAT_00387d20;
              if ((*(ushort *)(piVar21 + 2) & *(ushort *)(piVar20 + 0x72) & *(ushort *)(piVar20 + 2)
                  & 0x1f8) == 0) {
                iVar13 = (piVar21[1] - piVar20[1]) * (*piVar20 - *piVar17) -
                         (*piVar21 - *piVar20) * (piVar20[1] - piVar20[0x71]);
              }
              else {
                iVar13 = 0;
              }
              if (0 < iVar13) {
                iVar13 = piVar20[0x76];
                if (piVar20[0x76] < piVar20[6]) {
                  iVar13 = piVar20[6];
                }
                if (iVar13 < piVar21[6]) {
                  iVar13 = piVar21[6];
                }
                iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) -
                              (uint)((iVar13 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar13];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar13] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x242;
                  piVar18 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar18 = *piVar17;
                  iVar13 = piVar20[0x71];
                  puVar12[4] = 0x1fffff;
                  puVar12[3] = iVar13;
                  puVar12[5] = 0x1fffff;
                  puVar12[6] = (piVar20[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar20;
                  iVar13 = piVar20[1];
                  puVar12[9] = 0;
                  puVar12[10] = 0x1fffff;
                  puVar12[8] = iVar13;
                  puVar12[0xb] = (piVar20[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar21;
                  iVar13 = piVar21[1];
                  puVar12[0xe] = 0;
                  puVar12[0xf] = 0;
                  puVar12[0xd] = iVar13;
                  puVar12[0x10] = (piVar21[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
            else {
              if ((*(ushort *)(piVar20 + 0x72) &
                   *(ushort *)(piVar21 + 0x72) & *(ushort *)(piVar21 + 2) & 0x1f8) == 0) {
                iVar13 = (piVar20[0x71] - piVar21[0x71]) * (*piVar18 - *piVar21) -
                         (*piVar17 - *piVar18) * (piVar21[0x71] - piVar21[1]);
              }
              else {
                iVar13 = 0;
              }
              if (0 < iVar13) {
                iVar13 = piVar21[6];
                if (piVar21[6] < piVar21[0x76]) {
                  iVar13 = piVar21[0x76];
                }
                if (iVar13 < piVar20[0x76]) {
                  iVar13 = piVar20[0x76];
                }
                iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) -
                              (uint)((iVar13 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar13];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar13] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x243;
                  piVar2 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar2 = *piVar21;
                  iVar13 = piVar21[1];
                  puVar12[4] = 0;
                  puVar12[3] = iVar13;
                  puVar12[5] = 0;
                  puVar12[6] = (piVar21[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar18;
                  iVar13 = piVar21[0x71];
                  puVar12[9] = 0x1fffff;
                  puVar12[8] = iVar13;
                  puVar12[10] = 0;
                  puVar12[0xb] = (piVar21[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar17;
                  iVar13 = piVar20[0x71];
                  puVar12[0xe] = 0x1fffff;
                  puVar12[0xd] = iVar13;
                  puVar12[0xf] = 0x1fffff;
                  puVar12[0x10] = (piVar20[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              puVar12 = DAT_00387d20;
              if ((*(ushort *)(piVar21 + 2) & *(ushort *)(piVar20 + 2) & *(ushort *)(piVar20 + 0x72)
                  & 0x1f8) == 0) {
                iVar13 = (piVar21[1] - piVar20[1]) * (*piVar20 - *piVar17) -
                         (*piVar21 - *piVar20) * (piVar20[1] - piVar20[0x71]);
              }
              else {
                iVar13 = 0;
              }
              if (0 < iVar13) {
                iVar13 = piVar20[0x76];
                if (piVar20[0x76] < piVar20[6]) {
                  iVar13 = piVar20[6];
                }
                if (iVar13 < piVar21[6]) {
                  iVar13 = piVar21[6];
                }
                iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) -
                              (uint)((iVar13 >> 0x1f) << 3 < 0)) >> 4;
                if (DAT_00387d20 < DAT_0033317f) {
                  uVar8 = (&DAT_00387220)[iVar13];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0;
                  *DAT_00387d20 = uVar8;
                  (&DAT_00387220)[iVar13] = DAT_00387d20;
                  *(undefined2 *)((int)DAT_00387d20 + 6) = 0x243;
                  piVar18 = DAT_00387d20 + 2;
                  DAT_00387d20 = DAT_00387d20 + 0x11;
                  *piVar18 = *piVar17;
                  iVar13 = piVar20[0x71];
                  puVar12[4] = 0x1fffff;
                  puVar12[3] = iVar13;
                  puVar12[5] = 0x1fffff;
                  puVar12[6] = (piVar20[0x72] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[7] = *piVar20;
                  iVar13 = piVar20[1];
                  puVar12[9] = 0;
                  puVar12[10] = 0x1fffff;
                  puVar12[8] = iVar13;
                  puVar12[0xb] = (piVar20[2] >> 0x10) * 0x100 + 0xc0000;
                  puVar12[0xc] = *piVar21;
                  iVar13 = piVar21[1];
                  puVar12[0xe] = 0;
                  puVar12[0xf] = 0;
                  puVar12[0xd] = iVar13;
                  puVar12[0x10] = (piVar21[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
          }
        }
        puVar12 = DAT_00387d20;
        iVar13 = (&DAT_00377b70)[local_320];
        if (iVar13 != 0) {
          iVar15 = (*(int *)((int)local_324 + iVar13 * 2 + 4) >> 0x10) * 0x12;
          piVar17 = local_340 + iVar13 * 7 + 0x70;
          piVar18 = local_33c + iVar13 * 7 + 0x70;
          piVar21 = local_340 + iVar13 * 7;
          piVar20 = local_33c + iVar13 * 7;
          uVar6 = *(undefined2 *)((int)&DAT_001aa97b + iVar15);
          if ((*(ushort *)(piVar18 + 2) & *(ushort *)(piVar21 + 2) & *(ushort *)(piVar17 + 2) &
              0x1f8) == 0) {
            iVar13 = (piVar18[1] - piVar17[1]) * (*piVar17 - *piVar21) -
                     (*piVar18 - *piVar17) * (piVar17[1] - piVar21[1]);
          }
          else {
            iVar13 = 0;
          }
          if (0 < iVar13) {
            iVar13 = piVar21[6];
            if (piVar21[6] < piVar17[6]) {
              iVar13 = piVar17[6];
            }
            if (iVar13 < piVar18[6]) {
              iVar13 = piVar18[6];
            }
            iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0))
                     >> 4;
            if (DAT_00387d20 < DAT_0033317f) {
              uVar8 = (&DAT_00387220)[iVar13];
              *(undefined1 *)(DAT_00387d20 + 1) = 0;
              *DAT_00387d20 = uVar8;
              (&DAT_00387220)[iVar13] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
              iVar13 = piVar21[2];
              iVar9 = piVar17[2];
              iVar10 = piVar18[2];
              piVar2 = DAT_00387d20 + 2;
              DAT_00387d20 = DAT_00387d20 + 0x11;
              *piVar2 = *piVar21;
              puVar12[3] = piVar21[1];
              puVar12[4] = 0;
              puVar12[6] = (iVar13 >> 0x10) << 8;
              puVar12[5] = 0;
              puVar12[7] = *piVar17;
              puVar12[8] = piVar17[1];
              puVar12[9] = 0x1fffff;
              puVar12[0xb] = (iVar9 >> 0x10) << 8;
              puVar12[10] = 0;
              puVar12[0xc] = *piVar18;
              iVar13 = piVar18[1];
              puVar12[0xe] = 0x1fffff;
              puVar12[0xd] = iVar13;
              puVar12[0xf] = 0x1fffff;
              puVar12[0x10] = (iVar10 >> 0x10) << 8;
            }
          }
          puVar12 = DAT_00387d20;
          uVar6 = *(undefined2 *)((int)&DAT_001aa97b + iVar15);
          if ((*(ushort *)(piVar21 + 2) & *(ushort *)(piVar18 + 2) & *(ushort *)(piVar20 + 2) &
              0x1f8) == 0) {
            iVar13 = (piVar21[1] - piVar20[1]) * (*piVar20 - *piVar18) -
                     (piVar20[1] - piVar18[1]) * (*piVar21 - *piVar20);
          }
          else {
            iVar13 = 0;
          }
          if (0 < iVar13) {
            iVar13 = piVar18[6];
            if (piVar18[6] < piVar20[6]) {
              iVar13 = piVar20[6];
            }
            if (iVar13 < piVar21[6]) {
              iVar13 = piVar21[6];
            }
            iVar13 = (int)((iVar13 + (iVar13 >> 0x1f) * -0x10) - (uint)((iVar13 >> 0x1f) << 3 < 0))
                     >> 4;
            if (DAT_00387d20 < DAT_0033317f) {
              uVar8 = (&DAT_00387220)[iVar13];
              *(undefined1 *)(DAT_00387d20 + 1) = 0;
              *DAT_00387d20 = uVar8;
              (&DAT_00387220)[iVar13] = DAT_00387d20;
              *(undefined2 *)((int)DAT_00387d20 + 6) = uVar6;
              iVar13 = piVar20[2];
              iVar15 = piVar18[2];
              iVar9 = piVar21[2];
              piVar17 = DAT_00387d20 + 2;
              DAT_00387d20 = DAT_00387d20 + 0x11;
              *piVar17 = *piVar18;
              iVar10 = piVar18[1];
              puVar12[4] = 0x1fffff;
              puVar12[5] = 0x1fffff;
              puVar12[3] = iVar10;
              puVar12[6] = (iVar15 >> 0x10) << 8;
              puVar12[7] = *piVar20;
              iVar15 = piVar20[1];
              puVar12[9] = 0;
              puVar12[8] = iVar15;
              puVar12[10] = 0x1fffff;
              puVar12[0xb] = (iVar13 >> 0x10) << 8;
              puVar12[0xc] = *piVar21;
              iVar13 = piVar21[1];
              puVar12[0xe] = 0;
              puVar12[0xd] = iVar13;
              puVar12[0xf] = 0;
              puVar12[0x10] = (iVar9 >> 0x10) << 8;
            }
          }
        }
        local_340 = local_340 + 0x70;
        local_33c = local_33c + 0x70;
        local_88 = local_88 + 5;
        local_84 = local_84 + 5;
        local_80 = local_80 + 5;
        local_7c = local_7c + 5;
        local_78 = local_78 + 5;
        local_74 = local_74 + 5;
        iVar19 = iVar19 + 1;
        local_330 = local_330 + 1;
      } while (local_330 < in_ECX - unaff_EBX);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_09ef3c (Ghidra: FUN_0009ef3c)
 * Prototype: void sub_09ef3c(void);
 * Address  : 0x9ef3c (Size: 870 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 1 -> 0xe8cc8
 ******************************************************************************/
void FUN_0009ef3c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  
  iVar10 = DAT_00191d34 + 1;
  piVar7 = &DAT_00379490;
  if (0 < iVar10) {
    do {
      uVar12 = FUN_000e8cc8();
      iVar6 = (int)((ulonglong)uVar12 >> 0x20);
      iVar4 = (int)uVar12;
      *(int *)(iVar6 + -4) = iVar4;
      piVar7[1] = iVar4;
      *(int *)(iVar6 + -8) = iVar4;
      *(int *)(iVar6 + -8) = -iVar4;
      *piVar7 = -iVar4;
      piVar7 = piVar7 + -2;
    } while (extraout_ECX + 1 < iVar10);
  }
  if (DAT_00191d3c != '\0') {
    puVar1 = (&PTR_LAB_00192fe0)[DAT_00379388];
    iVar6 = (&DAT_001927e0)[DAT_00379388];
    iVar2 = (int)puVar1 * 6 >> 0x10;
    iVar3 = (DAT_003d982c << 7) / DAT_00191d30;
    iVar5 = iVar6 * -6 >> 0x10;
    iVar10 = iVar5 + (iVar3 * (int)puVar1 + iVar6 * -0x100 >> 0x10);
    iVar9 = iVar2 + ((int)puVar1 * 0x100 + iVar3 * iVar6 >> 0x10);
    iVar4 = iVar5 + ((int)puVar1 * -iVar3 + iVar6 * -0x100 >> 0x10);
    iVar3 = iVar2 + (-iVar3 * iVar6 + (int)puVar1 * 0x100 >> 0x10);
    piVar7 = &DAT_00379398 + (0x1f - DAT_00191d34) * 2;
    iVar6 = (iVar10 - iVar5) * 0x100;
    if (iVar9 < iVar2) {
      iVar6 = iVar6 / (iVar9 - iVar2);
      iVar10 = -DAT_00191d34;
      if (-DAT_00191d34 == DAT_00191d34 || iVar10 < DAT_00191d34) {
        iVar9 = iVar10 * iVar6 + -iVar2 * iVar6;
        do {
          iVar11 = (iVar9 >> 8) + iVar5;
          if (iVar11 < piVar7[1]) {
            piVar7[1] = iVar11;
          }
          piVar7 = piVar7 + 2;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + iVar6;
        } while (iVar10 <= DAT_00191d34);
      }
    }
    else if (iVar2 < iVar9) {
      iVar6 = iVar6 / (iVar9 - iVar2);
      iVar10 = -DAT_00191d34;
      if (-DAT_00191d34 == DAT_00191d34 || iVar10 < DAT_00191d34) {
        iVar9 = iVar10 * iVar6 + -iVar2 * iVar6;
        do {
          iVar11 = (iVar9 >> 8) + iVar5;
          if (*piVar7 < iVar11) {
            *piVar7 = iVar11;
          }
          piVar7 = piVar7 + 2;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + iVar6;
        } while (iVar10 <= DAT_00191d34);
      }
    }
    else {
      puVar8 = &DAT_00379490 + iVar2 * 2;
      iVar6 = iVar2;
      if (iVar5 < iVar10) {
        for (; iVar6 <= DAT_00191d34; iVar6 = iVar6 + 1) {
          puVar8[1] = 0;
          *puVar8 = puVar8[1];
          puVar8 = puVar8 + 2;
        }
      }
      else {
        for (; -DAT_00191d34 <= iVar6; iVar6 = iVar6 + -1) {
          puVar8[1] = 0;
          *puVar8 = puVar8[1];
          puVar8 = puVar8 + -2;
        }
      }
    }
    piVar7 = &DAT_00379398 + (0x1f - DAT_00191d34) * 2;
    iVar10 = (iVar4 - iVar5) * 0x100;
    if (iVar3 < iVar2) {
      iVar10 = iVar10 / (iVar3 - iVar2);
      iVar4 = -DAT_00191d34;
      if (-DAT_00191d34 == DAT_00191d34 || iVar4 < DAT_00191d34) {
        iVar6 = iVar4 * iVar10 + -iVar2 * iVar10;
        do {
          iVar2 = (iVar6 >> 8) + iVar5;
          if (*piVar7 < iVar2) {
            *piVar7 = iVar2;
          }
          piVar7 = piVar7 + 2;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + iVar10;
        } while (iVar4 <= DAT_00191d34);
      }
    }
    else if (iVar2 < iVar3) {
      iVar10 = iVar10 / (iVar3 - iVar2);
      iVar4 = -DAT_00191d34;
      if (-DAT_00191d34 == DAT_00191d34 || iVar4 < DAT_00191d34) {
        iVar6 = iVar4 * iVar10 + -iVar2 * iVar10;
        do {
          iVar2 = (iVar6 >> 8) + iVar5;
          if (iVar2 < piVar7[1]) {
            piVar7[1] = iVar2;
          }
          piVar7 = piVar7 + 2;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + iVar10;
        } while (iVar4 <= DAT_00191d34);
      }
    }
    else {
      puVar8 = &DAT_00379490 + iVar2 * 2;
      if (iVar4 < iVar5) {
        for (; iVar2 <= DAT_00191d34; iVar2 = iVar2 + 1) {
          puVar8[1] = 0;
          *puVar8 = puVar8[1];
          puVar8 = puVar8 + 2;
        }
      }
      else {
        for (; -DAT_00191d34 <= iVar2; iVar2 = iVar2 + -1) {
          puVar8[1] = 0;
          *puVar8 = puVar8[1];
          puVar8 = puVar8 + -2;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_09f2a4 (Ghidra: FUN_0009f2a4)
 * Prototype: uint sub_09f2a4(void);
 * Address  : 0x9f2a4 (Size: 111 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x9f314
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0009f2a4(void)

{
  uint in_EAX;
  int in_ECX;
  int in_EDX;
  uint unaff_EBX;
  int iVar1;
  
  iVar1 = (unaff_EBX & 0xff) * 0x100;
  if (in_ECX < 1) {
    if ((int)in_EAX < in_EDX) {
      return 0xfffff060;
    }
    do {
      if ((*(byte *)((int)&DAT_00279203 + ((in_EAX & 0xff) + iVar1) * 5) & 0x10) != 0) {
        return in_EAX;
      }
      in_EAX = in_EAX - 1;
    } while (in_EDX <= (int)in_EAX);
    return 0xfffff060;
  }
  while( true ) {
    if (in_EDX < (int)in_EAX) {
      return 0xfffff060;
    }
    if ((*(byte *)((int)&DAT_00279203 + ((in_EAX & 0xff) + iVar1) * 5) & 0x10) != 0) break;
    in_EAX = in_EAX + 1;
  }
  return in_EAX;
}

/******************************************************************************
 * Function : sub_09f314 (Ghidra: FUN_0009f314)
 * Prototype: void sub_09f314(void);
 * Address  : 0x9f314 (Size: 1446 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x9f8bc
 * Callees  : 1 -> 0x9f2a4
 ******************************************************************************/
void FUN_0009f314(void)

{
  bool bVar1;
  bool bVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int in_ECX;
  uint in_EDX;
  int unaff_EBX;
  uint uVar7;
  int *piVar8;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar2 = false;
  bVar1 = false;
  uVar3 = FUN_0009f2a4();
  uVar4 = FUN_0009f2a4();
  uVar5 = FUN_0009f2a4();
  if (((uVar3 != 0xfffff060) && (uVar4 != 0xfffff060)) && (uVar5 != 0xfffff060)) {
    if ((int)uVar5 < (int)uVar3) {
      uVar3 = uVar5;
    }
    local_10 = uVar3;
    if ((int)uVar4 < (int)uVar3) {
      local_10 = uVar4;
    }
    DAT_00379498 = local_10 - in_EAX;
    bVar2 = true;
  }
  uVar3 = FUN_0009f2a4();
  uVar4 = FUN_0009f2a4();
  uVar5 = FUN_0009f2a4();
  if (((uVar3 != 0xfffff060) && (uVar4 != 0xfffff060)) && (uVar5 != 0xfffff060)) {
    if ((int)uVar3 < (int)uVar5) {
      uVar3 = uVar5;
    }
    local_14 = uVar3;
    if ((int)uVar3 < (int)uVar4) {
      local_14 = uVar4;
    }
    DAT_0037949c = (local_14 - in_EAX) + 1;
    bVar1 = true;
  }
  local_1c = 1;
  piVar8 = &DAT_00379498 + unaff_EBX * 2;
  local_18 = in_EDX;
  if (1 < in_ECX) {
    while (local_18 = local_18 + unaff_EBX, *piVar8 < piVar8[1]) {
      if (bVar2) {
        uVar3 = *piVar8 + in_EAX;
        if ((int)local_10 < (int)uVar3) goto LAB_0009f4a7;
      }
      else {
        uVar3 = *piVar8 + in_EAX;
LAB_0009f4a7:
        local_10 = uVar3;
      }
      if (bVar1) {
        uVar3 = piVar8[1] + in_EAX;
        if ((int)uVar3 < (int)local_14) goto LAB_0009f4c6;
      }
      else {
        uVar3 = piVar8[1] + in_EAX;
LAB_0009f4c6:
        local_14 = uVar3;
      }
      uVar4 = local_18 - in_EDX;
      uVar3 = (int)uVar4 >> 0x1f;
      if (((uVar4 ^ uVar3) - uVar3 == 1) ||
         (iVar6 = (int)(local_10 - in_EAX) / (int)(((uVar4 ^ uVar3) - uVar3) + -1),
         iVar6 == 1 || iVar6 + -1 < 0)) {
        bVar2 = false;
      }
      else {
        local_10 = local_10 + (int)(local_10 - in_EAX) / (int)(((uVar4 ^ uVar3) - uVar3) + -1) + -1;
        bVar2 = true;
      }
      uVar3 = local_10;
      uVar4 = local_10 - 1;
      do {
        uVar5 = uVar4;
        if (piVar8[1] + in_EAX <= (int)uVar5) break;
        uVar4 = uVar5 + 1;
      } while ((*(byte *)((int)&DAT_00279203 + ((uVar5 + 1 & 0xff) + (local_18 & 0xff) * 0x100) * 5)
               & 0x10) != 0);
      iVar6 = *piVar8;
      if (((bVar2) || ((int)local_10 < (int)uVar5)) ||
         ((*(byte *)((int)&DAT_00279203 + ((local_18 & 0xff) * 0x100 + (uVar5 & 0xff)) * 5) & 0x10)
          != 0)) {
        *piVar8 = (local_10 - in_EAX) + -1;
        bVar2 = true;
        local_10 = uVar5;
      }
      else {
        uVar7 = local_18 - in_EDX;
        uVar4 = (int)uVar7 >> 0x1f;
        if (((uVar7 ^ uVar4) - uVar4 == 1) ||
           ((int)((int)(uVar5 - in_EAX) / (int)(((uVar7 ^ uVar4) - uVar4) + -1) + local_10 + -1) <
            *piVar8 + in_EAX)) {
          uVar4 = *piVar8 + in_EAX;
          bVar2 = false;
        }
        else {
          uVar4 = ((int)(uVar5 - in_EAX) / (int)(((uVar7 ^ uVar4) - uVar4) + -1) + local_10) - 1;
          bVar2 = true;
          *piVar8 = (uVar4 - in_EAX) + -1;
          local_10 = uVar4;
        }
        if ((int)uVar4 <= (int)uVar3) {
          do {
            if ((*(byte *)((int)&DAT_00279203 + ((uVar3 & 0xff) + (local_18 & 0xff) * 0x100) * 5) &
                0x10) != 0) {
              bVar2 = true;
              *piVar8 = (uVar3 - in_EAX) + -1;
              local_10 = uVar3;
              break;
            }
            uVar3 = uVar3 - 1;
          } while ((int)uVar4 <= (int)uVar3);
        }
      }
      uVar4 = local_18 - in_EDX;
      uVar3 = (int)uVar4 >> 0x1f;
      if (((uVar4 ^ uVar3) - uVar3 == 1) ||
         (-1 < (int)(local_14 - in_EAX) / (int)(((uVar4 ^ uVar3) - uVar3) + -1) + 1)) {
        bVar1 = false;
      }
      else {
        local_14 = local_14 + (int)(local_14 - in_EAX) / (int)(((uVar4 ^ uVar3) - uVar3) + -1) + 1;
        bVar1 = true;
      }
      uVar4 = local_14;
      uVar3 = local_14 + 1;
      while ((iVar6 + in_EAX < (int)uVar3 &&
             ((*(byte *)((int)&DAT_00279203 + ((uVar3 - 1 & 0xff) + (local_18 & 0xff) * 0x100) * 5)
              & 0x10) != 0))) {
        uVar3 = uVar3 - 1;
      }
      if (((bVar1) || ((int)uVar3 < (int)local_14)) ||
         ((*(byte *)((int)&DAT_00279203 + ((local_18 & 0xff) * 0x100 + (uVar3 & 0xff)) * 5) & 0x10)
          != 0)) {
        bVar1 = true;
        piVar8[1] = (local_14 - in_EAX) + 2;
        local_14 = uVar3;
      }
      else {
        bVar1 = false;
        uVar7 = local_18 - in_EDX;
        uVar5 = (int)uVar7 >> 0x1f;
        if (((uVar7 ^ uVar5) - uVar5 == 1) ||
           (piVar8[1] + in_EAX <
            (int)(local_14 + (int)(uVar3 - in_EAX) / (int)(((uVar7 ^ uVar5) - uVar5) + -1) + 1))) {
          uVar3 = piVar8[1] + in_EAX;
        }
        else {
          uVar3 = (int)(uVar3 - in_EAX) / (int)(((uVar7 ^ uVar5) - uVar5) + -1) + local_14 + 1;
          bVar1 = true;
          piVar8[1] = (uVar3 - in_EAX) + 2;
          local_14 = uVar3;
        }
        if ((int)uVar4 <= (int)uVar3) {
          do {
            if ((*(byte *)((int)&DAT_00279203 + ((uVar4 & 0xff) + (local_18 & 0xff) * 0x100) * 5) &
                0x10) != 0) {
              bVar1 = true;
              piVar8[1] = (uVar4 - in_EAX) + 2;
              local_14 = uVar4;
              break;
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 <= (int)uVar3);
        }
      }
      if (-*piVar8 != DAT_00191d34 && *piVar8 <= -DAT_00191d34) {
        *piVar8 = -DAT_00191d34;
      }
      if (DAT_00191d34 < piVar8[1]) {
        piVar8[1] = DAT_00191d34;
      }
      if (piVar8[1] <= *piVar8) break;
      piVar8 = piVar8 + unaff_EBX * 2;
      local_1c = local_1c + 1;
      if (in_ECX <= local_1c) {
        return;
      }
    }
    while (local_1c < in_ECX) {
      *piVar8 = 0;
      local_1c = local_1c + 1;
      piVar8[1] = *piVar8;
      piVar8 = piVar8 + unaff_EBX * 2;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_09f8bc (Ghidra: FUN_0009f8bc)
 * Prototype: void sub_09f8bc(void);
 * Address  : 0x9f8bc (Size: 1404 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 2 -> 0x90610, 0x9f314
 ******************************************************************************/
void FUN_0009f8bc(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  int unaff_ESI;
  int local_48 [4];
  int local_38 [4];
  int local_28;
  int local_24;
  int local_18;
  
  iVar7 = (DAT_002f10ce >> 0x18) * 0x4ef;
  if ((&DAT_0019d0ff)[iVar7] == '\x01') {
    FUN_0009f314();
    FUN_0009f314();
  }
  else if ((&DAT_0019d0ff)[iVar7] == '\x02') {
    local_28 = (*(int *)(*(int *)((int)&DAT_0019d100 + iVar7) + 0x17) / (int)(uint)DAT_0019cba6) *
               0x300 >> 0x11;
    local_18 = in_EDX;
    FUN_00090610();
    local_24 = (local_28 +
               (uint)*(ushort *)(&DAT_0019d50e + (DAT_002f10ce >> 0x18) * 0x4ef) /
               (uint)DAT_0019cba6) - ((DAT_003882e4 << 3) >> 8);
    FUN_00090610();
    FUN_00090610();
    FUN_00090610();
    iVar7 = 4;
    do {
      if (*(int *)((int)local_38 + iVar7) < local_38[0]) {
        iVar5 = *(int *)((int)local_48 + iVar7);
        *(int *)((int)local_48 + iVar7) = local_48[0];
        local_48[0] = iVar5;
        iVar5 = *(int *)((int)local_38 + iVar7);
        *(int *)((int)local_38 + iVar7) = local_38[0];
        local_38[0] = iVar5;
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0x10);
    iVar7 = 0;
    do {
      if (local_38[3] < *(int *)((int)local_38 + iVar7)) {
        iVar5 = *(int *)((int)local_48 + iVar7);
        *(int *)((int)local_48 + iVar7) = local_48[3];
        local_48[3] = iVar5;
        iVar5 = *(int *)((int)local_38 + iVar7);
        *(int *)((int)local_38 + iVar7) = local_38[3];
        local_38[3] = iVar5;
      }
      iVar1 = local_38[1];
      iVar5 = local_48[2];
      iVar7 = iVar7 + 4;
    } while (iVar7 != 0xc);
    if (local_48[2] < local_48[1]) {
      local_48[2] = local_48[1];
      local_48[1] = iVar5;
      local_38[1] = local_38[2];
      local_38[2] = iVar1;
    }
    iVar5 = local_48[2];
    iVar7 = local_48[1];
    uVar6 = local_38[1] - local_38[0] >> 0x1f;
    iVar1 = (local_38[1] - local_38[0] ^ uVar6) - uVar6;
    uVar6 = local_38[3] - local_38[1] >> 0x1f;
    iVar2 = (local_38[3] - local_38[1] ^ uVar6) - uVar6;
    uVar6 = local_38[2] - local_38[0] >> 0x1f;
    iVar3 = (local_38[2] - local_38[0] ^ uVar6) - uVar6;
    uVar6 = local_38[3] - local_38[2] >> 0x1f;
    iVar4 = (local_38[3] - local_38[2] ^ uVar6) - uVar6;
    if ((local_48[0] < local_48[1]) && (iVar1 < iVar2)) {
      local_48[1] = local_48[0];
      local_48[0] = iVar7;
      local_38[1] = local_38[0];
    }
    iVar7 = local_48[1];
    if ((local_48[3] < local_48[1]) && (iVar2 < iVar1)) {
      local_48[1] = local_48[3];
      local_48[3] = iVar7;
      local_38[1] = local_38[3];
    }
    iVar7 = local_48[3];
    if ((local_48[2] < local_48[0]) && (iVar3 < iVar4)) {
      local_48[2] = local_48[0];
      local_48[0] = iVar5;
      local_38[2] = local_38[0];
    }
    if ((local_48[2] < local_48[3]) && (iVar4 < iVar3)) {
      local_48[3] = local_48[2];
      local_48[2] = iVar7;
      local_38[2] = local_38[3];
    }
    local_48[0] = local_48[0] - in_EAX;
    local_18 = 0x20 - local_18;
    local_48[1] = local_48[1] - in_EAX;
    local_38[0] = local_38[0] + local_18;
    local_48[2] = local_48[2] - in_EAX;
    local_38[1] = local_38[1] + local_18;
    local_38[2] = local_38[2] + local_18;
    local_38[3] = local_38[3] + local_18;
    if (0 < local_38[0]) {
      iVar7 = 0;
      do {
        iVar5 = iVar7 + 8;
        *(undefined4 *)((int)&DAT_0037939c + iVar7) = 0;
        *(undefined4 *)((int)&DAT_00379398 + iVar7) = 0;
        iVar7 = iVar5;
      } while (iVar5 < local_38[0] * 8);
    }
    iVar7 = local_48[0] * 0x10000;
    if (local_38[0] < local_38[1]) {
      unaff_ESI = ((local_48[1] - local_48[0]) * 0x10000) / (local_38[1] - local_38[0]);
    }
    iVar5 = local_38[0];
    if (local_38[0] < 0) {
      iVar7 = iVar7 - local_38[0] * unaff_ESI;
      iVar5 = 0;
    }
    iVar1 = local_38[1];
    if (0x3f < local_38[1]) {
      iVar1 = 0x3f;
    }
    for (iVar2 = iVar5 * 8; iVar2 < iVar1 * 8; iVar2 = iVar2 + 8) {
      if (iVar7 >> 0x10 < -0x1e) {
        *(undefined4 *)((int)&DAT_00379398 + iVar2) = 0xffffffe2;
      }
      else {
        *(int *)((int)&DAT_00379398 + iVar2) = iVar7 >> 0x10;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + unaff_ESI;
    }
    iVar7 = local_48[1] * 0x10000;
    if (local_38[1] < local_38[3]) {
      unaff_ESI = (((local_48[3] - in_EAX) - local_48[1]) * 0x10000) / (local_38[3] - local_38[1]);
    }
    iVar1 = local_38[3];
    if (0x3f < local_38[3]) {
      iVar1 = 0x3f;
    }
    if (iVar5 < 0) {
      iVar7 = iVar7 - iVar5 * unaff_ESI;
      iVar5 = 0;
    }
    for (iVar5 = iVar5 * 8; iVar5 < iVar1 * 8; iVar5 = iVar5 + 8) {
      if (iVar7 >> 0x10 < -0x1e) {
        *(undefined4 *)((int)&DAT_00379398 + iVar5) = 0xffffffe2;
      }
      else {
        *(int *)((int)&DAT_00379398 + iVar5) = iVar7 >> 0x10;
      }
      iVar7 = iVar7 + unaff_ESI;
    }
    iVar7 = local_48[0] * 0x10000;
    if (local_38[0] < local_38[2]) {
      unaff_ESI = ((local_48[2] - local_48[0]) * 0x10000) / (local_38[2] - local_38[0]);
    }
    iVar5 = local_38[2];
    if (0x3f < local_38[2]) {
      iVar5 = 0x3f;
    }
    if (local_38[0] < 0) {
      iVar7 = iVar7 - local_38[0] * unaff_ESI;
      local_38[0] = 0;
    }
    for (iVar1 = local_38[0] * 8; iVar1 < iVar5 * 8; iVar1 = iVar1 + 8) {
      if (iVar7 >> 0x10 < 0x1f) {
        *(int *)((int)&DAT_0037939c + iVar1) = (iVar7 >> 0x10) + 1;
      }
      else {
        *(undefined4 *)((int)&DAT_0037939c + iVar1) = 0x1f;
      }
      local_38[0] = local_38[0] + 1;
      iVar7 = iVar7 + unaff_ESI;
    }
    iVar7 = local_48[2] * 0x10000;
    if (local_38[2] < local_38[3]) {
      unaff_ESI = (((local_48[3] - in_EAX) - local_48[2]) * 0x10000) / (local_38[3] - local_38[2]);
    }
    if (0x3f < local_38[3]) {
      local_38[3] = 0x3f;
    }
    if (local_38[0] < 0) {
      iVar7 = iVar7 - local_38[0] * unaff_ESI;
      local_38[0] = 0;
    }
    for (iVar5 = local_38[0] * 8; iVar5 < local_38[3] * 8; iVar5 = iVar5 + 8) {
      if (iVar7 >> 0x10 < 0x1f) {
        *(int *)((int)&DAT_0037939c + iVar5) = (iVar7 >> 0x10) + 1;
      }
      else {
        *(undefined4 *)((int)&DAT_0037939c + iVar5) = 0x1f;
      }
      local_38[0] = local_38[0] + 1;
      iVar7 = iVar7 + unaff_ESI;
    }
    for (local_38[0] = local_38[0] * 8; local_38[0] < 0x1f9; local_38[0] = local_38[0] + 8) {
      *(undefined4 *)((int)&DAT_0037939c + local_38[0]) = 0;
      *(undefined4 *)((int)&DAT_00379398 + local_38[0]) = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_09fe38 (Ghidra: FUN_0009fe38)
 * Prototype: void sub_09fe38(void);
 * Address  : 0x9fe38 (Size: 156 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe6a10
 * Strings  :
 *   - 0x191ecc: "`^\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009fe38(void)

{
  int iVar1;
  
  DAT_00387d20 = &DAT_002f317f;
  FUN_000e6a10();
  DAT_00388304 = (&PTR_FUN_000947b8_00191edc)[DAT_00191d3c];
  DAT_00387d38 = DAT_00191d34 * 0x100;
  DAT_00387d88 = DAT_00191d34 * 0x100;
  DAT_00388300 = *(undefined4 *)((uint)DAT_00191d3c * 4 + 0x191ecc); /* 0x191ecc="`^\n" */
  _DAT_00387d90 = (DAT_00191d34 + 1) * 0x100;
  iVar1 = DAT_00191d34 * 0x300 >> 0x1f;
  DAT_00387d8c = (int)((DAT_00191d34 * 0x300 + iVar1 * -4) - (uint)(iVar1 << 1 < 0)) >> 2;
  DAT_00387d30 = DAT_00191d28 << 8;
  DAT_00387d34 = DAT_00191d2c << 8;
  return;
}

/******************************************************************************
 * Function : sub_09ff84 (Ghidra: FUN_0009ff84)
 * Prototype: void sub_09ff84(void);
 * Address  : 0x9ff84 (Size: 15047 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 10 -> 0x4ca51, 0x915dc, 0xa5240, 0xa596c, 0xa5a74, 0xa5c28, 0xdb5c4, 0xdc0e0, 0x1295e0, 0x130ea0
 ******************************************************************************/
void FUN_0009ff84(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint auStack_ae0 [2];
  undefined1 auStack_ad8 [8];
  int local_ad0 [5];
  int local_abc [5];
  int local_aa8 [10];
  int local_a80 [5];
  int local_a6c [5];
  int local_a58 [5];
  int local_a44 [15];
  int local_a08 [10];
  int local_9e0 [5];
  int local_9cc [5];
  int local_9b8 [5];
  int local_9a4 [10];
  int local_97c [5];
  int local_968 [15];
  int local_92c [10];
  int local_904 [5];
  int local_8f0 [5];
  int local_8dc [10];
  int local_8b4 [10];
  int local_88c [10];
  int local_864 [5];
  int local_850 [20];
  int local_800 [10];
  int local_7d8 [5];
  int local_7c4 [30];
  int local_74c [25];
  int local_6e8 [30];
  int local_670 [15];
  int local_634 [15];
  int local_5f8 [20];
  int local_5a8 [10];
  int local_580 [5];
  int local_56c [5];
  int local_558 [5];
  int local_544 [5];
  int local_530 [5];
  int local_51c [10];
  int local_4f4 [15];
  int local_4b8 [10];
  int local_490 [5];
  int local_47c [5];
  int local_468 [10];
  int local_440 [266];
  
  puVar4 = auStack_ad8;
  puVar5 = &DAT_00387d1c;
  DAT_003d9578 = 0;
  local_440[0x109] = 0x2bf;
  puVar2 = DAT_00387d1c;
  do {
    while (puVar2 == (undefined4 *)0x0) {
      iVar3 = *(int *)(puVar4 + 0xabc);
      puVar5 = puVar5 + -1;
      *(int *)(puVar4 + 0xabc) = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        return;
      }
      puVar2 = (undefined4 *)*puVar5;
    }
    if (*(byte *)(puVar2 + 1) < 0x14) {
      switch(*(byte *)(puVar2 + 1)) {
      case 0:
        DAT_00186fad = 5;
        DAT_00184290 = (&DAT_002f18e3)[*(ushort *)((int)puVar2 + 6)];
        *(undefined4 *)(puVar4 + -4) = 0x9ffe0;
        FUN_001295e0();
        break;
      case 1:
        DAT_00186fad = 7;
        DAT_00186fac = (undefined1)
                       ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
        DAT_00184290 = (&DAT_002f18e3)[*(ushort *)((int)puVar2 + 6)];
        *(undefined4 *)(puVar4 + -4) = 0xa0058;
        FUN_00130ea0();
        break;
      case 2:
        DAT_00186fac = *(undefined1 *)((int)puVar2 + 5);
        *(int *)(puVar4 + 0x2a8) = (int)puVar2[1] >> 0x10;
        *(int *)(puVar4 + 0x2ac) = *(int *)((int)puVar2 + 6) >> 0x10;
        *(int *)(puVar4 + 0x334) = (int)puVar2[2] >> 0x10;
        *(int *)(puVar4 + 0x338) = *(int *)((int)puVar2 + 10) >> 0x10;
        *(int *)(puVar4 + 0x3c0) = (int)puVar2[3] >> 0x10;
        *(int *)(puVar4 + 0x3c4) = *(int *)((int)puVar2 + 0xe) >> 0x10;
        DAT_00186fad = 0;
        *(undefined4 *)(puVar4 + -4) = 0xa021a;
        FUN_001295e0();
        break;
      case 3:
        DAT_00186fac = *(undefined1 *)((int)puVar2 + 5);
        *(int *)(puVar4 + 0x2a8) = (int)puVar2[1] >> 0x10;
        *(int *)(puVar4 + 0x2ac) = *(int *)((int)puVar2 + 6) >> 0x10;
        *(int *)(puVar4 + 0x334) = (int)puVar2[2] >> 0x10;
        *(int *)(puVar4 + 0x338) = *(int *)((int)puVar2 + 10) >> 0x10;
        *(int *)(puVar4 + 0x3c0) = (int)puVar2[3] >> 0x10;
        *(int *)(puVar4 + 0x3c4) = *(int *)((int)puVar2 + 0xe) >> 0x10;
        *(uint *)(puVar4 + 0x2b8) = (uint)*(byte *)((int)puVar2 + 0x12) << 0x10;
        *(uint *)(puVar4 + 0x344) = (uint)*(byte *)((int)puVar2 + 0x13) << 0x10;
        DAT_00186fad = 4;
        *(uint *)(puVar4 + 0x3d0) = (uint)*(byte *)(puVar2 + 5) << 0x10;
        *(undefined4 *)(puVar4 + -4) = 0xa02c4;
        FUN_001295e0();
        break;
      case 4:
        *(int *)(puVar4 + 0x2a8) = (int)puVar2[1] >> 0x10;
        *(int *)(puVar4 + 0x2ac) = *(int *)((int)puVar2 + 6) >> 0x10;
        *(int *)(puVar4 + 0x334) = (int)puVar2[2] >> 0x10;
        *(int *)(puVar4 + 0x338) = *(int *)((int)puVar2 + 10) >> 0x10;
        *(int *)(puVar4 + 0x3c0) = (int)puVar2[3] >> 0x10;
        *(int *)(puVar4 + 0x3c4) = *(int *)((int)puVar2 + 0xe) >> 0x10;
        *(uint *)(puVar4 + 0x2b0) = (uint)*(byte *)(puVar2 + 5) << 0x10;
        *(uint *)(puVar4 + 0x2b4) = (uint)*(byte *)((int)puVar2 + 0x15) << 0x10;
        *(uint *)(puVar4 + 0x33c) = (uint)*(byte *)((int)puVar2 + 0x16) << 0x10;
        *(uint *)(puVar4 + 0x340) = (uint)*(byte *)((int)puVar2 + 0x17) << 0x10;
        *(uint *)(puVar4 + 0x3c8) = (uint)*(byte *)(puVar2 + 6) << 0x10;
        DAT_00186fad = 2;
        *(uint *)(puVar4 + 0x3cc) = (uint)*(byte *)((int)puVar2 + 0x19) << 0x10;
        *(undefined4 *)(puVar4 + -4) = 0xa0393;
        FUN_00130ea0();
        break;
      case 5:
        *(int *)(puVar4 + 0x2a8) = (int)puVar2[1] >> 0x10;
        *(int *)(puVar4 + 0x2ac) = *(int *)((int)puVar2 + 6) >> 0x10;
        *(int *)(puVar4 + 0x334) = (int)puVar2[2] >> 0x10;
        *(int *)(puVar4 + 0x338) = *(int *)((int)puVar2 + 10) >> 0x10;
        *(int *)(puVar4 + 0x3c0) = (int)puVar2[3] >> 0x10;
        *(int *)(puVar4 + 0x3c4) = *(int *)((int)puVar2 + 0xe) >> 0x10;
        *(uint *)(puVar4 + 0x2b0) = (uint)*(byte *)(puVar2 + 5) << 0x10;
        *(uint *)(puVar4 + 0x2b4) = (uint)*(byte *)((int)puVar2 + 0x15) << 0x10;
        *(uint *)(puVar4 + 0x33c) = (uint)*(byte *)((int)puVar2 + 0x16) << 0x10;
        *(uint *)(puVar4 + 0x340) = (uint)*(byte *)((int)puVar2 + 0x17) << 0x10;
        *(uint *)(puVar4 + 0x3c8) = (uint)*(byte *)(puVar2 + 6) << 0x10;
        *(uint *)(puVar4 + 0x3cc) = (uint)*(byte *)((int)puVar2 + 0x19) << 0x10;
        *(uint *)(puVar4 + 0x2b8) = (uint)*(byte *)((int)puVar2 + 0x1a) << 0x10;
        *(uint *)(puVar4 + 0x344) = (uint)*(byte *)((int)puVar2 + 0x1b) << 0x10;
        DAT_00186fad = 5;
        *(uint *)(puVar4 + 0x3d0) = (uint)*(byte *)(puVar2 + 7) << 0x10;
        *(undefined4 *)(puVar4 + -4) = 0xa055e;
        FUN_001295e0();
        break;
      case 6:
        *(int *)(puVar4 + 0x2a8) = (int)puVar2[1] >> 0x10;
        *(int *)(puVar4 + 0x2ac) = *(int *)((int)puVar2 + 6) >> 0x10;
        *(int *)(puVar4 + 0x334) = (int)puVar2[2] >> 0x10;
        *(int *)(puVar4 + 0x338) = *(int *)((int)puVar2 + 10) >> 0x10;
        *(int *)(puVar4 + 0x3c0) = (int)puVar2[3] >> 0x10;
        *(int *)(puVar4 + 0x3c4) = *(int *)((int)puVar2 + 0xe) >> 0x10;
        *(uint *)(puVar4 + 0x2b0) = (uint)*(byte *)(puVar2 + 5) << 0x10;
        *(uint *)(puVar4 + 0x2b4) = (uint)*(byte *)((int)puVar2 + 0x15) << 0x10;
        *(uint *)(puVar4 + 0x33c) = (uint)*(byte *)((int)puVar2 + 0x16) << 0x10;
        *(uint *)(puVar4 + 0x340) = (uint)*(byte *)((int)puVar2 + 0x17) << 0x10;
        *(uint *)(puVar4 + 0x3c8) = (uint)*(byte *)(puVar2 + 6) << 0x10;
        DAT_00186fad = 3;
        *(uint *)(puVar4 + 0x3cc) = (uint)*(byte *)((int)puVar2 + 0x19) << 0x10;
        *(undefined4 *)(puVar4 + -4) = 0xa0462;
        FUN_00130ea0();
        break;
      case 7:
        DAT_00186fad = 6;
        *(int *)(puVar4 + 0x2a8) = (int)puVar2[1] >> 0x10;
        *(int *)(puVar4 + 0x2ac) = *(int *)((int)puVar2 + 6) >> 0x10;
        *(int *)(puVar4 + 0x334) = (int)puVar2[2] >> 0x10;
        *(int *)(puVar4 + 0x338) = *(int *)((int)puVar2 + 10) >> 0x10;
        *(int *)(puVar4 + 0x3c0) = (int)puVar2[3] >> 0x10;
        *(int *)(puVar4 + 0x3c4) = *(int *)((int)puVar2 + 0xe) >> 0x10;
        *(uint *)(puVar4 + 0x2b0) = (uint)*(byte *)(puVar2 + 5) << 0x10;
        *(uint *)(puVar4 + 0x2b4) = (uint)*(byte *)((int)puVar2 + 0x15) << 0x10;
        *(uint *)(puVar4 + 0x33c) = (uint)*(byte *)((int)puVar2 + 0x16) << 0x10;
        *(uint *)(puVar4 + 0x340) = (uint)*(byte *)((int)puVar2 + 0x17) << 0x10;
        *(uint *)(puVar4 + 0x3c8) = (uint)*(byte *)(puVar2 + 6) << 0x10;
        *(uint *)(puVar4 + 0x3cc) = (uint)*(byte *)((int)puVar2 + 0x19) << 0x10;
        *(uint *)(puVar4 + 0x2b8) = (uint)*(byte *)((int)puVar2 + 0x1a) << 0x10;
        *(uint *)(puVar4 + 0x344) = (uint)*(byte *)((int)puVar2 + 0x1b) << 0x10;
        *(uint *)(puVar4 + 0x3d0) = (uint)*(byte *)(puVar2 + 7) << 0x10;
        *(undefined4 *)(puVar4 + -4) = 0xa0659;
        FUN_00130ea0();
        break;
      case 8:
        *(undefined4 *)(puVar4 + -4) = 0xa0084;
        FUN_000dc0e0();
        break;
      case 9:
        DAT_00184290 = (&DAT_002f18e3)[*(ushort *)((int)puVar2 + 6)];
        switch(*(undefined1 *)((int)puVar2 + 5)) {
        case 0:
          DAT_00186fad = 5;
          *(undefined4 *)(puVar4 + -4) = 0xa068f;
          FUN_001295e0();
          break;
        case 1:
          *(int *)(puVar4 + 0x900) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x904) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x908) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x4a4) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x4a8) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x4ac) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa070d;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa071c;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa072e;
          FUN_001295e0();
          break;
        case 2:
          *(int *)(puVar4 + 0x75c) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x760) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x764) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x4e0) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x4e4) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x4e8) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa07a9;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa07bb;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa07cd;
          FUN_001295e0();
          break;
        case 3:
          *(int *)(puVar4 + 0x9e4) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x9e8) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x9ec) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x530) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x534) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x538) = (int)(puVar2[6] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0848;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa085a;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa086c;
          FUN_001295e0();
          break;
        case 4:
          *(int *)(puVar4 + 0x8dc) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x8e0) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x8e4) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x5f8) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x5fc) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x600) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa08e7;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x750) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x754) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x758) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x224) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x228) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x22c) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0955;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x8b8) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x8bc) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x8c0) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x29c) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x2a0) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x2a4) = (int)(puVar2[6] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa09ca;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa09d9;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa09ef;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0a09;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0a1f;
          FUN_001295e0();
          break;
        case 5:
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x96c) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x970) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x974) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x5e4) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x5e8) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x5ec) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0a9c;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x858) = puVar2[0x11] + *(int *)(puVar4 + 0x96c) >> 1;
          *(int *)(puVar4 + 0x85c) = puVar2[0x12] + *(int *)(puVar4 + 0x970) >> 1;
          *(int *)(puVar4 + 0x860) = puVar2[0x13] + *(int *)(puVar4 + 0x974) >> 1;
          *(int *)(puVar4 + 0x3f0) = puVar2[4] + *(int *)(puVar4 + 0x5e4) >> 1;
          *(int *)(puVar4 + 0x3f4) = puVar2[5] + *(int *)(puVar4 + 0x5e8) >> 1;
          *(int *)(puVar4 + 0x3f8) = puVar2[6] + *(int *)(puVar4 + 0x5ec) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0b2e;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xab0) = *(int *)(puVar4 + 0x96c) + puVar2[0x14] >> 1;
          *(int *)(puVar4 + 0xab4) = *(int *)(puVar4 + 0x970) + puVar2[0x15] >> 1;
          *(int *)(puVar4 + 0xab8) = *(int *)(puVar4 + 0x974) + puVar2[0x16] >> 1;
          *(int *)(puVar4 + 0x440) = *(int *)(puVar4 + 0x5e4) + puVar2[9] >> 1;
          *(int *)(puVar4 + 0x444) = *(int *)(puVar4 + 0x5e8) + puVar2[10] >> 1;
          *(int *)(puVar4 + 0x448) = *(int *)(puVar4 + 0x5ec) + puVar2[0xb] >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0bb7;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa0bc6;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0bdc;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0bf2;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0c04;
          FUN_001295e0();
          break;
        case 6:
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x81c) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x820) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x824) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x5bc) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x5c0) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x5c4) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0c80;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x7b0) = puVar2[0x14] + *(int *)(puVar4 + 0x81c) >> 1;
          *(int *)(puVar4 + 0x7b4) = puVar2[0x15] + *(int *)(puVar4 + 0x820) >> 1;
          *(int *)(puVar4 + 0x7b8) = puVar2[0x16] + *(int *)(puVar4 + 0x824) >> 1;
          *(int *)(puVar4 + 0x4f4) = puVar2[9] + *(int *)(puVar4 + 0x5bc) >> 1;
          *(int *)(puVar4 + 0x4f8) = puVar2[10] + *(int *)(puVar4 + 0x5c0) >> 1;
          *(int *)(puVar4 + 0x4fc) = puVar2[0xb] + *(int *)(puVar4 + 0x5c4) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0d12;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x918) = *(int *)(puVar4 + 0x81c) + puVar2[0x17] >> 1;
          *(int *)(puVar4 + 0x91c) = *(int *)(puVar4 + 0x820) + puVar2[0x18] >> 1;
          *(int *)(puVar4 + 0x920) = *(int *)(puVar4 + 0x824) + puVar2[0x19] >> 1;
          *(int *)(puVar4 + 0x670) = *(int *)(puVar4 + 0x5bc) + puVar2[0xe] >> 1;
          *(int *)(puVar4 + 0x674) = *(int *)(puVar4 + 0x5c0) + puVar2[0xf] >> 1;
          *(int *)(puVar4 + 0x678) = *(int *)(puVar4 + 0x5c4) + puVar2[0x10] >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0d98;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa0daa;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0dc0;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0dd6;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0de8;
          FUN_001295e0();
          break;
        case 7:
          *(int *)(puVar4 + 0x930) = (int)(puVar2[0x17] + puVar2[0x11]) >> 1;
          *(int *)(puVar4 + 0x934) = (int)(puVar2[0x18] + puVar2[0x12]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x938) = (int)(puVar2[0x19] + puVar2[0x13]) >> 1;
          *(int *)(puVar4 + 0x3a0) = (int)(puVar2[0xe] + puVar2[4]) >> 1;
          *(int *)(puVar4 + 0x3a4) = (int)(puVar2[0xf] + puVar2[5]) >> 1;
          *(int *)(puVar4 + 0x3a8) = (int)(puVar2[0x10] + puVar2[6]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0e63;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x78c) = puVar2[0x17] + *(int *)(puVar4 + 0x930) >> 1;
          *(int *)(puVar4 + 0x790) = puVar2[0x18] + *(int *)(puVar4 + 0x934) >> 1;
          *(int *)(puVar4 + 0x794) = puVar2[0x19] + *(int *)(puVar4 + 0x938) >> 1;
          *(int *)(puVar4 + 0x3b4) = puVar2[0xe] + *(int *)(puVar4 + 0x3a0) >> 1;
          *(int *)(puVar4 + 0x3b8) = puVar2[0xf] + *(int *)(puVar4 + 0x3a4) >> 1;
          *(int *)(puVar4 + 0x3bc) = puVar2[0x10] + *(int *)(puVar4 + 0x3a8) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0ef5;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x714) = *(int *)(puVar4 + 0x930) + puVar2[0x11] >> 1;
          *(int *)(puVar4 + 0x718) = *(int *)(puVar4 + 0x934) + puVar2[0x12] >> 1;
          *(int *)(puVar4 + 0x71c) = *(int *)(puVar4 + 0x938) + puVar2[0x13] >> 1;
          *(int *)(puVar4 + 0x404) = *(int *)(puVar4 + 0x3a0) + puVar2[4] >> 1;
          *(int *)(puVar4 + 0x408) = *(int *)(puVar4 + 0x3a4) + puVar2[5] >> 1;
          *(int *)(puVar4 + 0x40c) = *(int *)(puVar4 + 0x3a8) + puVar2[6] >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa0f7b;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa0f8d;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0fa3;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0fb9;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa0fcb;
          FUN_001295e0();
          break;
        case 8:
          *(int *)(puVar4 + 0x7ec) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x7f0) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x7f4) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x1fc) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x200) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x204) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1046;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x768) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x76c) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x770) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x6c0) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x6c4) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x6c8) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa10b4;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x840) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x844) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x848) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x288) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x28c) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x290) = (int)(puVar2[6] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1122;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x6e4) = puVar2[0x11] + *(int *)(puVar4 + 0x7ec) >> 1;
          *(int *)(puVar4 + 0x6e8) = puVar2[0x12] + *(int *)(puVar4 + 0x7f0) >> 1;
          *(int *)(puVar4 + 0x6ec) = puVar2[0x13] + *(int *)(puVar4 + 0x7f4) >> 1;
          *(int *)(puVar4 + 0x2d8) = puVar2[4] + *(int *)(puVar4 + 0x1fc) >> 1;
          *(int *)(puVar4 + 0x2dc) = puVar2[5] + *(int *)(puVar4 + 0x200) >> 1;
          *(int *)(puVar4 + 0x2e0) = puVar2[6] + *(int *)(puVar4 + 0x204) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa11b4;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x9f0) = puVar2[0x14] + *(int *)(puVar4 + 0x7ec) >> 1;
          *(int *)(puVar4 + 0x9f4) = puVar2[0x15] + *(int *)(puVar4 + 0x7f0) >> 1;
          *(int *)(puVar4 + 0x9f8) = puVar2[0x16] + *(int *)(puVar4 + 0x7f4) >> 1;
          *(int *)(puVar4 + 0x314) = puVar2[9] + *(int *)(puVar4 + 0x1fc) >> 1;
          *(int *)(puVar4 + 0x318) = puVar2[10] + *(int *)(puVar4 + 0x200) >> 1;
          *(int *)(puVar4 + 0x31c) = puVar2[0xb] + *(int *)(puVar4 + 0x204) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa124d;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa125c;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1276;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1290;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa12a6;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa12c0;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa12d6;
          FUN_001295e0();
          break;
        case 9:
          *(int *)(puVar4 + 0x8c4) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x8c8) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x8cc) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x350) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x354) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x358) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1351;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa8c) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0xa90) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0xa94) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x38c) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x390) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x394) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa13bf;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x7d4) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x7d8) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x7dc) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x418) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x41c) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x420) = (int)(puVar2[6] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa142d;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xaa4) = puVar2[0x14] + *(int *)(puVar4 + 0xa8c) >> 1;
          *(int *)(puVar4 + 0xaa8) = puVar2[0x15] + *(int *)(puVar4 + 0xa90) >> 1;
          *(int *)(puVar4 + 0xaac) = puVar2[0x16] + *(int *)(puVar4 + 0xa94) >> 1;
          *(int *)(puVar4 + 0x42c) = puVar2[9] + *(int *)(puVar4 + 0x38c) >> 1;
          *(int *)(puVar4 + 0x430) = puVar2[10] + *(int *)(puVar4 + 0x390) >> 1;
          *(int *)(puVar4 + 0x434) = puVar2[0xb] + *(int *)(puVar4 + 0x394) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa14bf;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa08) = puVar2[0x17] + *(int *)(puVar4 + 0xa8c) >> 1;
          *(int *)(puVar4 + 0xa0c) = puVar2[0x18] + *(int *)(puVar4 + 0xa90) >> 1;
          *(int *)(puVar4 + 0xa10) = puVar2[0x19] + *(int *)(puVar4 + 0xa94) >> 1;
          *(int *)(puVar4 + 0x47c) = puVar2[0xe] + *(int *)(puVar4 + 0x38c) >> 1;
          *(int *)(puVar4 + 0x480) = puVar2[0xf] + *(int *)(puVar4 + 0x390) >> 1;
          *(int *)(puVar4 + 0x484) = puVar2[0x10] + *(int *)(puVar4 + 0x394) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1558;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa1567;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1581;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1597;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa15b1;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa15cb;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa15e1;
          FUN_001295e0();
          break;
        case 10:
          *(int *)(puVar4 + 0x990) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x994) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x998) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x94) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x98) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x9c) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa165c;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x93c) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x940) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x944) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x508) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x50c) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x510) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa16ca;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa5c) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0xa60) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0xa64) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x468) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x46c) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0x470) = (int)(puVar2[6] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1738;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa50) = puVar2[0x17] + *(int *)(puVar4 + 0xa5c) >> 1;
          *(int *)(puVar4 + 0xa54) = puVar2[0x18] + *(int *)(puVar4 + 0xa60) >> 1;
          *(int *)(puVar4 + 0xa58) = puVar2[0x19] + *(int *)(puVar4 + 0xa64) >> 1;
          *(int *)(puVar4 + 0x170) = puVar2[0xe] + *(int *)(puVar4 + 0x468) >> 1;
          *(int *)(puVar4 + 0x174) = puVar2[0xf] + *(int *)(puVar4 + 0x46c) >> 1;
          *(int *)(puVar4 + 0x178) = puVar2[0x10] + *(int *)(puVar4 + 0x470) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa17ca;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x7e0) = puVar2[0x11] + *(int *)(puVar4 + 0xa5c) >> 1;
          *(int *)(puVar4 + 0x7e4) = puVar2[0x12] + *(int *)(puVar4 + 0xa60) >> 1;
          *(int *)(puVar4 + 0x7e8) = puVar2[0x13] + *(int *)(puVar4 + 0xa64) >> 1;
          *(int *)(puVar4 + 0x620) = puVar2[4] + *(int *)(puVar4 + 0x468) >> 1;
          *(int *)(puVar4 + 0x624) = puVar2[5] + *(int *)(puVar4 + 0x46c) >> 1;
          *(int *)(puVar4 + 0x628) = puVar2[6] + *(int *)(puVar4 + 0x470) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1863;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa1872;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa188c;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa18a2;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa18bc;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa18d6;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa18ec;
          FUN_001295e0();
          break;
        case 0xb:
          DAT_00186fad = 5;
          *(int *)(puVar4 + 0x828) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x82c) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x830) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x30) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x34) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(int *)(puVar4 + 0x38) = (int)(puVar2[6] + puVar2[0xb]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa195d;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x84c) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x850) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x854) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0xa8) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0xac) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0xb0) = (int)(puVar2[0xb] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa19cb;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x9a8) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x9ac) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x9b0) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0xd0) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0xd4) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(int *)(puVar4 + 0xd8) = (int)(puVar2[6] + puVar2[0x10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1a39;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x894) = puVar2[0x11] + *(int *)(puVar4 + 0x828) >> 1;
          *(int *)(puVar4 + 0x898) = puVar2[0x12] + *(int *)(puVar4 + 0x82c) >> 1;
          *(int *)(puVar4 + 0x89c) = puVar2[0x13] + *(int *)(puVar4 + 0x830) >> 1;
          *(int *)(puVar4 + 0x134) = puVar2[4] + *(int *)(puVar4 + 0x30) >> 1;
          *(int *)(puVar4 + 0x138) = puVar2[5] + *(int *)(puVar4 + 0x34) >> 1;
          *(int *)(puVar4 + 0x13c) = puVar2[6] + *(int *)(puVar4 + 0x38) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1ac2;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa68) = puVar2[0x14] + *(int *)(puVar4 + 0x828) >> 1;
          *(int *)(puVar4 + 0xa6c) = puVar2[0x15] + *(int *)(puVar4 + 0x82c) >> 1;
          *(int *)(puVar4 + 0xa70) = puVar2[0x16] + *(int *)(puVar4 + 0x830) >> 1;
          *(int *)(puVar4 + 0x184) = puVar2[9] + *(int *)(puVar4 + 0x30) >> 1;
          *(int *)(puVar4 + 0x188) = puVar2[10] + *(int *)(puVar4 + 0x34) >> 1;
          *(int *)(puVar4 + 0x18c) = puVar2[0xb] + *(int *)(puVar4 + 0x38) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1b4b;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x708) = puVar2[0x14] + *(int *)(puVar4 + 0x84c) >> 1;
          *(int *)(puVar4 + 0x70c) = puVar2[0x15] + *(int *)(puVar4 + 0x850) >> 1;
          *(int *)(puVar4 + 0x710) = puVar2[0x16] + *(int *)(puVar4 + 0x854) >> 1;
          *(int *)(puVar4 + 0x1ac) = puVar2[9] + *(int *)(puVar4 + 0xa8) >> 1;
          *(int *)(puVar4 + 0x1b0) = puVar2[10] + *(int *)(puVar4 + 0xac) >> 1;
          *(int *)(puVar4 + 0x1b4) = puVar2[0xb] + *(int *)(puVar4 + 0xb0) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1bdd;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x948) = puVar2[0x17] + *(int *)(puVar4 + 0x84c) >> 1;
          *(int *)(puVar4 + 0x94c) = puVar2[0x18] + *(int *)(puVar4 + 0x850) >> 1;
          *(int *)(puVar4 + 0x950) = puVar2[0x19] + *(int *)(puVar4 + 0x854) >> 1;
          *(int *)(puVar4 + 0x698) = puVar2[0xe] + *(int *)(puVar4 + 0xa8) >> 1;
          *(int *)(puVar4 + 0x69c) = puVar2[0xf] + *(int *)(puVar4 + 0xac) >> 1;
          *(int *)(puVar4 + 0x6a0) = puVar2[0x10] + *(int *)(puVar4 + 0xb0) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1c6f;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa38) = puVar2[0x17] + *(int *)(puVar4 + 0x9a8) >> 1;
          *(int *)(puVar4 + 0xa3c) = puVar2[0x18] + *(int *)(puVar4 + 0x9ac) >> 1;
          *(int *)(puVar4 + 0xa40) = puVar2[0x19] + *(int *)(puVar4 + 0x9b0) >> 1;
          *(int *)(puVar4 + 0x24c) = puVar2[0xe] + *(int *)(puVar4 + 0xd0) >> 1;
          *(int *)(puVar4 + 0x250) = puVar2[0xf] + *(int *)(puVar4 + 0xd4) >> 1;
          *(int *)(puVar4 + 0x254) = puVar2[0x10] + *(int *)(puVar4 + 0xd8) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1d01;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x72c) = puVar2[0x11] + *(int *)(puVar4 + 0x9a8) >> 1;
          *(int *)(puVar4 + 0x730) = puVar2[0x12] + *(int *)(puVar4 + 0x9ac) >> 1;
          *(int *)(puVar4 + 0x734) = puVar2[0x13] + *(int *)(puVar4 + 0x9b0) >> 1;
          *(int *)(puVar4 + 0x4b8) = puVar2[4] + *(int *)(puVar4 + 0xd0) >> 1;
          *(int *)(puVar4 + 0x4bc) = puVar2[5] + *(int *)(puVar4 + 0xd4) >> 1;
          *(int *)(puVar4 + 0x4c0) = puVar2[6] + *(int *)(puVar4 + 0xd8) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1d93;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x804) = *(int *)(puVar4 + 0x828) + *(int *)(puVar4 + 0x9a8) >> 1;
          *(int *)(puVar4 + 0x808) = *(int *)(puVar4 + 0x82c) + *(int *)(puVar4 + 0x9ac) >> 1;
          *(int *)(puVar4 + 0x80c) = *(int *)(puVar4 + 0x830) + *(int *)(puVar4 + 0x9b0) >> 1;
          *(int *)(puVar4 + 0x328) = *(int *)(puVar4 + 0x30) + *(int *)(puVar4 + 0xd0) >> 1;
          *(int *)(puVar4 + 0x32c) = *(int *)(puVar4 + 0x34) + *(int *)(puVar4 + 0xd4) >> 1;
          *(int *)(puVar4 + 0x330) = *(int *)(puVar4 + 0x38) + *(int *)(puVar4 + 0xd8) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1e32;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x9fc) = *(int *)(puVar4 + 0x828) + *(int *)(puVar4 + 0x84c) >> 1;
          *(int *)(puVar4 + 0xa00) = *(int *)(puVar4 + 0x82c) + *(int *)(puVar4 + 0x850) >> 1;
          *(int *)(puVar4 + 0xa04) = *(int *)(puVar4 + 0x830) + *(int *)(puVar4 + 0x854) >> 1;
          *(int *)(puVar4 + 0x364) = *(int *)(puVar4 + 0x30) + *(int *)(puVar4 + 0xa8) >> 1;
          *(int *)(puVar4 + 0x368) = *(int *)(puVar4 + 0x34) + *(int *)(puVar4 + 0xac) >> 1;
          *(int *)(puVar4 + 0x36c) = *(int *)(puVar4 + 0x38) + *(int *)(puVar4 + 0xb0) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1ed1;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa20) = *(int *)(puVar4 + 0x84c) + *(int *)(puVar4 + 0x9a8) >> 1;
          *(int *)(puVar4 + 0xa24) = *(int *)(puVar4 + 0x850) + *(int *)(puVar4 + 0x9ac) >> 1;
          *(int *)(puVar4 + 0xa28) = *(int *)(puVar4 + 0x854) + *(int *)(puVar4 + 0x9b0) >> 1;
          *(int *)(puVar4 + 0x6ac) = *(int *)(puVar4 + 0xa8) + *(int *)(puVar4 + 0xd0) >> 1;
          *(int *)(puVar4 + 0x6b0) = *(int *)(puVar4 + 0xac) + *(int *)(puVar4 + 0xd4) >> 1;
          *(int *)(puVar4 + 0x6b4) = *(int *)(puVar4 + 0xb0) + *(int *)(puVar4 + 0xd8) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa1f79;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa1f8f;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1fa6;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1fbd;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1fd3;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa1fed;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa2004;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa201e;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa2038;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa2052;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa206c;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa2086;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa20a0;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa20ba;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa20d4;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa20ee;
          FUN_001295e0();
          *(undefined4 *)(puVar4 + -4) = 0xa2104;
          FUN_001295e0();
          break;
        case 0xc:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(undefined4 *)(puVar4 + -4) = 0xa213f;
          FUN_00130ea0();
          break;
        case 0xd:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0xa44) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0xa48) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0xa4c) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0xf8) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0xfc) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa21d1;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa21e0;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa21f2;
          FUN_00130ea0();
          break;
        case 0xe:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x99c) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x9a0) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x9a4) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x558) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x55c) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2281;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2293;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa22a5;
          FUN_00130ea0();
          break;
        case 0xf:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x774) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x778) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x77c) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x1e8) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x1ec) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2334;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2346;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2358;
          FUN_00130ea0();
          break;
        case 0x10:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x7c8) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x7cc) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 2000) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0xbc) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0xc0) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa23e5;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x6d8) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x6dc) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x6e0) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x120) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x124) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2444;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x6cc) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x6d0) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x6d4) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x56c) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x570) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa24aa;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa24b9;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa24cf;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa24e9;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa24ff;
          FUN_00130ea0();
          break;
        case 0x11:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x7a4) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x7a8) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x7ac) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x274) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x278) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa258e;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x9c0) = puVar2[0x11] + *(int *)(puVar4 + 0x7a4) >> 1;
          *(int *)(puVar4 + 0x9c4) = puVar2[0x12] + *(int *)(puVar4 + 0x7a8) >> 1;
          *(int *)(puVar4 + 0x9c8) = puVar2[0x13] + *(int *)(puVar4 + 0x7ac) >> 1;
          *(int *)(puVar4 + 0x2c4) = puVar2[4] + *(int *)(puVar4 + 0x274) >> 1;
          *(int *)(puVar4 + 0x2c8) = puVar2[5] + *(int *)(puVar4 + 0x278) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa260b;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x6fc) = *(int *)(puVar4 + 0x7a4) + puVar2[0x14] >> 1;
          *(int *)(puVar4 + 0x700) = *(int *)(puVar4 + 0x7a8) + puVar2[0x15] >> 1;
          *(int *)(puVar4 + 0x704) = *(int *)(puVar4 + 0x7ac) + puVar2[0x16] >> 1;
          *(int *)(puVar4 + 0x51c) = *(int *)(puVar4 + 0x274) + puVar2[9] >> 1;
          *(int *)(puVar4 + 0x520) = *(int *)(puVar4 + 0x278) + puVar2[10] >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2683;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2692;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa26a7;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa26bd;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa26cf;
          FUN_00130ea0();
          break;
        case 0x12:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0xa98) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0xa9c) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0xaa0) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x4cc) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x4d0) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa275d;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x8f4) = puVar2[0x14] + *(int *)(puVar4 + 0xa98) >> 1;
          *(int *)(puVar4 + 0x8f8) = puVar2[0x15] + *(int *)(puVar4 + 0xa9c) >> 1;
          *(int *)(puVar4 + 0x8fc) = puVar2[0x16] + *(int *)(puVar4 + 0xaa0) >> 1;
          *(int *)(puVar4 + 0x3dc) = puVar2[9] + *(int *)(puVar4 + 0x4cc) >> 1;
          *(int *)(puVar4 + 0x3e0) = puVar2[10] + *(int *)(puVar4 + 0x4d0) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa27da;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x744) = *(int *)(puVar4 + 0xa98) + puVar2[0x17] >> 1;
          *(int *)(puVar4 + 0x748) = *(int *)(puVar4 + 0xa9c) + puVar2[0x18] >> 1;
          *(int *)(puVar4 + 0x74c) = *(int *)(puVar4 + 0xaa0) + puVar2[0x19] >> 1;
          *(int *)(puVar4 + 0x544) = *(int *)(puVar4 + 0x4cc) + puVar2[0xe] >> 1;
          *(int *)(puVar4 + 0x548) = *(int *)(puVar4 + 0x4d0) + puVar2[0xf] >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa284d;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2861;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2876;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa288b;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa289c;
          FUN_00130ea0();
          break;
        case 0x13:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x8e8) = (int)(puVar2[0x17] + puVar2[0x11]) >> 1;
          *(int *)(puVar4 + 0x8ec) = (int)(puVar2[0x18] + puVar2[0x12]) >> 1;
          *(int *)(puVar4 + 0x8f0) = (int)(puVar2[0x19] + puVar2[0x13]) >> 1;
          *(int *)(puVar4 + 0x1d4) = (int)(puVar2[0xe] + puVar2[4]) >> 1;
          *(int *)(puVar4 + 0x1d8) = (int)(puVar2[0xf] + puVar2[5]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa292b;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x870) = puVar2[0x17] + *(int *)(puVar4 + 0x8e8) >> 1;
          *(int *)(puVar4 + 0x874) = puVar2[0x18] + *(int *)(puVar4 + 0x8ec) >> 1;
          *(int *)(puVar4 + 0x878) = puVar2[0x19] + *(int *)(puVar4 + 0x8f0) >> 1;
          *(int *)(puVar4 + 0x210) = puVar2[0xe] + *(int *)(puVar4 + 0x1d4) >> 1;
          *(int *)(puVar4 + 0x214) = puVar2[0xf] + *(int *)(puVar4 + 0x1d8) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa29a8;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x87c) = *(int *)(puVar4 + 0x8e8) + puVar2[0x11] >> 1;
          *(int *)(puVar4 + 0x880) = *(int *)(puVar4 + 0x8ec) + puVar2[0x12] >> 1;
          *(int *)(puVar4 + 0x884) = *(int *)(puVar4 + 0x8f0) + puVar2[0x13] >> 1;
          *(int *)(puVar4 + 0x238) = *(int *)(puVar4 + 0x1d4) + puVar2[4] >> 1;
          *(int *)(puVar4 + 0x23c) = *(int *)(puVar4 + 0x1d8) + puVar2[5] >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2a1b;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2a2f;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2a44;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2a59;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2a6a;
          FUN_00130ea0();
          break;
        case 0x14:
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x834) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          DAT_00186fad = 7;
          *(int *)(puVar4 + 0x838) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x83c) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x15c) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x160) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2af7;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x7bc) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x7c0) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x7c4) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x198) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x19c) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2b56;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa74) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0xa78) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0xa7c) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x634) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x638) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2bb5;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x960) = puVar2[0x11] + *(int *)(puVar4 + 0x834) >> 1;
          *(int *)(puVar4 + 0x964) = puVar2[0x12] + *(int *)(puVar4 + 0x838) >> 1;
          *(int *)(puVar4 + 0x968) = puVar2[0x13] + *(int *)(puVar4 + 0x83c) >> 1;
          *(int *)(puVar4 + 0x454) = puVar2[4] + *(int *)(puVar4 + 0x15c) >> 1;
          *(int *)(puVar4 + 0x458) = puVar2[5] + *(int *)(puVar4 + 0x160) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2c32;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x9b4) = puVar2[0x14] + *(int *)(puVar4 + 0x834) >> 1;
          *(int *)(puVar4 + 0x9b8) = puVar2[0x15] + *(int *)(puVar4 + 0x838) >> 1;
          *(int *)(puVar4 + 0x9bc) = puVar2[0x16] + *(int *)(puVar4 + 0x83c) >> 1;
          *(int *)(puVar4 + 0x260) = puVar2[9] + *(int *)(puVar4 + 0x15c) >> 1;
          *(int *)(puVar4 + 0x264) = puVar2[10] + *(int *)(puVar4 + 0x160) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2cb6;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2cc5;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2cdf;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2cf9;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2d0f;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2d29;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2d3f;
          FUN_00130ea0();
          break;
        case 0x15:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0xa14) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0xa18) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0xa1c) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x490) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x494) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2dce;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x6f0) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x6f4) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x6f8) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x65c) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x660) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2e2d;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x8a0) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x8a4) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x8a8) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x2ec) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x2f0) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2e8c;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x798) = puVar2[0x14] + *(int *)(puVar4 + 0x6f0) >> 1;
          *(int *)(puVar4 + 0x79c) = puVar2[0x15] + *(int *)(puVar4 + 0x6f4) >> 1;
          *(int *)(puVar4 + 0x7a0) = puVar2[0x16] + *(int *)(puVar4 + 0x6f8) >> 1;
          *(int *)(puVar4 + 0x648) = puVar2[9] + *(int *)(puVar4 + 0x65c) >> 1;
          *(int *)(puVar4 + 0x64c) = puVar2[10] + *(int *)(puVar4 + 0x660) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2f09;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x924) = puVar2[0x17] + *(int *)(puVar4 + 0x6f0) >> 1;
          *(int *)(puVar4 + 0x928) = puVar2[0x18] + *(int *)(puVar4 + 0x6f4) >> 1;
          *(int *)(puVar4 + 0x92c) = puVar2[0x19] + *(int *)(puVar4 + 0x6f8) >> 1;
          *(int *)(puVar4 + 0x594) = puVar2[0xe] + *(int *)(puVar4 + 0x65c) >> 1;
          *(int *)(puVar4 + 0x598) = puVar2[0xf] + *(int *)(puVar4 + 0x660) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa2f8d;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa2f9c;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2fb6;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2fcc;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa2fe6;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3000;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3016;
          FUN_00130ea0();
          break;
        case 0x16:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x8d0) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x8d4) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x8d8) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x378) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x37c) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa30a5;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x7f8) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x7fc) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x800) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x5d0) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x5d4) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3104;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa80) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0xa84) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0xa88) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x1c) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x20) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa315a;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x978) = puVar2[0x17] + *(int *)(puVar4 + 0xa80) >> 1;
          *(int *)(puVar4 + 0x97c) = puVar2[0x18] + *(int *)(puVar4 + 0xa84) >> 1;
          *(int *)(puVar4 + 0x980) = puVar2[0x19] + *(int *)(puVar4 + 0xa88) >> 1;
          *(int *)(puVar4 + 0x58) = puVar2[0xe] + *(int *)(puVar4 + 0x1c) >> 1;
          *(int *)(puVar4 + 0x5c) = puVar2[0xf] + *(int *)(puVar4 + 0x20) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa31c8;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0xa2c) = puVar2[0x11] + *(int *)(puVar4 + 0xa80) >> 1;
          *(int *)(puVar4 + 0xa30) = puVar2[0x12] + *(int *)(puVar4 + 0xa84) >> 1;
          *(int *)(puVar4 + 0xa34) = puVar2[0x13] + *(int *)(puVar4 + 0xa88) >> 1;
          *(int *)(puVar4 + 0x80) = puVar2[4] + *(int *)(puVar4 + 0x1c) >> 1;
          *(int *)(puVar4 + 0x84) = puVar2[5] + *(int *)(puVar4 + 0x20) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3243;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa3252;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3269;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa327c;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3290;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa32a4;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa32b7;
          FUN_00130ea0();
          break;
        case 0x17:
          DAT_00186fad = 7;
          DAT_00186fac = (undefined1)
                         ((uint)((int)(puVar2[0x10] + puVar2[6] + puVar2[0xb]) / 3) >> 0x10);
          *(int *)(puVar4 + 0x9d8) = (int)(puVar2[0x11] + puVar2[0x14]) >> 1;
          *(int *)(puVar4 + 0x9dc) = (int)(puVar2[0x12] + puVar2[0x15]) >> 1;
          *(int *)(puVar4 + 0x9e0) = (int)(puVar2[0x13] + puVar2[0x16]) >> 1;
          *(int *)(puVar4 + 0x580) = (int)(puVar2[4] + puVar2[9]) >> 1;
          *(int *)(puVar4 + 0x584) = (int)(puVar2[5] + puVar2[10]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3346;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x9cc) = (int)(puVar2[0x14] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x9d0) = (int)(puVar2[0x15] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x9d4) = (int)(puVar2[0x16] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x300) = (int)(puVar2[9] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x304) = (int)(puVar2[10] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa33a5;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x984) = (int)(puVar2[0x11] + puVar2[0x17]) >> 1;
          *(int *)(puVar4 + 0x988) = (int)(puVar2[0x12] + puVar2[0x18]) >> 1;
          *(int *)(puVar4 + 0x98c) = (int)(puVar2[0x13] + puVar2[0x19]) >> 1;
          *(int *)(puVar4 + 0x684) = (int)(puVar2[4] + puVar2[0xe]) >> 1;
          *(int *)(puVar4 + 0x688) = (int)(puVar2[5] + puVar2[0xf]) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3404;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x738) = puVar2[0x11] + *(int *)(puVar4 + 0x9d8) >> 1;
          *(int *)(puVar4 + 0x73c) = puVar2[0x12] + *(int *)(puVar4 + 0x9dc) >> 1;
          *(int *)(puVar4 + 0x740) = puVar2[0x13] + *(int *)(puVar4 + 0x9e0) >> 1;
          *(int *)(puVar4 + 0x5a8) = puVar2[4] + *(int *)(puVar4 + 0x580) >> 1;
          *(int *)(puVar4 + 0x5ac) = puVar2[5] + *(int *)(puVar4 + 0x584) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3481;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x8ac) = puVar2[0x14] + *(int *)(puVar4 + 0x9d8) >> 1;
          *(int *)(puVar4 + 0x8b0) = puVar2[0x15] + *(int *)(puVar4 + 0x9dc) >> 1;
          *(int *)(puVar4 + 0x8b4) = puVar2[0x16] + *(int *)(puVar4 + 0x9e0) >> 1;
          *(int *)(puVar4 + 0x1c0) = puVar2[9] + *(int *)(puVar4 + 0x580) >> 1;
          *(int *)(puVar4 + 0x1c4) = puVar2[10] + *(int *)(puVar4 + 0x584) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa34fe;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x810) = puVar2[0x14] + *(int *)(puVar4 + 0x9cc) >> 1;
          *(int *)(puVar4 + 0x814) = puVar2[0x15] + *(int *)(puVar4 + 0x9d0) >> 1;
          *(int *)(puVar4 + 0x818) = puVar2[0x16] + *(int *)(puVar4 + 0x9d4) >> 1;
          *(int *)(puVar4 + 0x60c) = puVar2[9] + *(int *)(puVar4 + 0x300) >> 1;
          *(int *)(puVar4 + 0x610) = puVar2[10] + *(int *)(puVar4 + 0x304) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa357b;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x864) = puVar2[0x17] + *(int *)(puVar4 + 0x9cc) >> 1;
          *(int *)(puVar4 + 0x868) = puVar2[0x18] + *(int *)(puVar4 + 0x9d0) >> 1;
          *(int *)(puVar4 + 0x86c) = puVar2[0x19] + *(int *)(puVar4 + 0x9d4) >> 1;
          *(int *)(puVar4 + 8) = puVar2[0xe] + *(int *)(puVar4 + 0x300) >> 1;
          *(int *)(puVar4 + 0xc) = puVar2[0xf] + *(int *)(puVar4 + 0x304) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa35ed;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x888) = puVar2[0x17] + *(int *)(puVar4 + 0x984) >> 1;
          *(int *)(puVar4 + 0x88c) = puVar2[0x18] + *(int *)(puVar4 + 0x988) >> 1;
          *(int *)(puVar4 + 0x890) = puVar2[0x19] + *(int *)(puVar4 + 0x98c) >> 1;
          *(int *)(puVar4 + 0x44) = puVar2[0xe] + *(int *)(puVar4 + 0x684) >> 1;
          *(int *)(puVar4 + 0x48) = puVar2[0xf] + *(int *)(puVar4 + 0x688) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3661;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x780) = puVar2[0x11] + *(int *)(puVar4 + 0x984) >> 1;
          *(int *)(puVar4 + 0x784) = puVar2[0x12] + *(int *)(puVar4 + 0x988) >> 1;
          *(int *)(puVar4 + 0x788) = puVar2[0x13] + *(int *)(puVar4 + 0x98c) >> 1;
          *(int *)(puVar4 + 0x6c) = puVar2[4] + *(int *)(puVar4 + 0x684) >> 1;
          *(int *)(puVar4 + 0x70) = puVar2[5] + *(int *)(puVar4 + 0x688) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa36d5;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x720) = *(int *)(puVar4 + 0x9d8) + *(int *)(puVar4 + 0x984) >> 1;
          *(int *)(puVar4 + 0x724) = *(int *)(puVar4 + 0x9dc) + *(int *)(puVar4 + 0x988) >> 1;
          *(int *)(puVar4 + 0x728) = *(int *)(puVar4 + 0x9e0) + *(int *)(puVar4 + 0x98c) >> 1;
          *(int *)(puVar4 + 0xe4) = *(int *)(puVar4 + 0x580) + *(int *)(puVar4 + 0x684) >> 1;
          *(int *)(puVar4 + 0xe8) = *(int *)(puVar4 + 0x584) + *(int *)(puVar4 + 0x688) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3764;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x90c) = *(int *)(puVar4 + 0x9d8) + *(int *)(puVar4 + 0x9cc) >> 1;
          *(int *)(puVar4 + 0x910) = *(int *)(puVar4 + 0x9dc) + *(int *)(puVar4 + 0x9d0) >> 1;
          *(int *)(puVar4 + 0x914) = *(int *)(puVar4 + 0x9e0) + *(int *)(puVar4 + 0x9d4) >> 1;
          *(int *)(puVar4 + 0x10c) = *(int *)(puVar4 + 0x580) + *(int *)(puVar4 + 0x300) >> 1;
          *(int *)(puVar4 + 0x110) = *(int *)(puVar4 + 0x584) + *(int *)(puVar4 + 0x304) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa37f3;
          (*DAT_00388304)();
          *(int *)(puVar4 + 0x954) = *(int *)(puVar4 + 0x9cc) + *(int *)(puVar4 + 0x984) >> 1;
          *(int *)(puVar4 + 0x958) = *(int *)(puVar4 + 0x9d0) + *(int *)(puVar4 + 0x988) >> 1;
          *(int *)(puVar4 + 0x95c) = *(int *)(puVar4 + 0x9d4) + *(int *)(puVar4 + 0x98c) >> 1;
          *(int *)(puVar4 + 0x148) = *(int *)(puVar4 + 0x300) + *(int *)(puVar4 + 0x684) >> 1;
          *(int *)(puVar4 + 0x14c) = *(int *)(puVar4 + 0x304) + *(int *)(puVar4 + 0x688) >> 1;
          *(undefined4 *)(puVar4 + -4) = 0xa3886;
          (*DAT_00388304)();
          *(undefined4 *)(puVar4 + -4) = 0xa3895;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa38af;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa38c9;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa38df;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa38f6;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3910;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa392a;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3941;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa395b;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa3975;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa398f;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa39a9;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa39c0;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa39d5;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa39e7;
          FUN_00130ea0();
          *(undefined4 *)(puVar4 + -4) = 0xa39f5;
          FUN_00130ea0();
        }
        break;
      case 10:
        DAT_00186fac = *(undefined1 *)((int)puVar2 + 6);
        DAT_00186fad = 0;
        *(undefined4 *)(puVar4 + -4) = 0xa0078;
        FUN_001295e0();
        break;
      case 0xb:
switchD_000a3a36_caseD_b:
        *(undefined4 *)(puVar4 + -4) = 0xa00d9;
        FUN_000db5c4();
        break;
      case 0xc:
        *(undefined4 *)(puVar4 + -4) = 0xa00fa;
        FUN_0004ca51();
        DAT_00186fad = 10;
        DAT_00184290 = DAT_00199228;
        DAT_00186fac = *(undefined1 *)(puVar2 + 6);
        *(undefined4 *)(puVar4 + -4) = 0xa0126;
        FUN_00130ea0();
        *(undefined4 *)(puVar4 + -4) = 0xa0132;
        FUN_00130ea0();
        break;
      case 0xd:
        *(uint *)(puVar4 + -4) = (uint)*(byte *)(puVar2 + 6);
        *(undefined4 *)(puVar4 + -8) = 0xa0675;
        FUN_000915dc();
        puVar4 = puVar4 + -4;
        break;
      case 0xe:
        cVar1 = *(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6);
        if ((cVar1 == '\x02') || (cVar1 == '\x05')) {
          *(undefined4 *)(puVar4 + -4) = 0xa019d;
          FUN_000a5240();
        }
        break;
      case 0x10:
        *(undefined4 *)(puVar4 + -4) = 0xa0090;
        FUN_000a596c();
        break;
      case 0x11:
        *(undefined4 *)(puVar4 + -4) = 0xa009c;
        FUN_000a5a74();
        break;
      case 0x12:
        if (*(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6) == '\x02')
        goto switchD_000a3a36_caseD_b;
        break;
      case 0x13:
        *(undefined4 *)(puVar4 + -4) = 0xa00a8;
        FUN_000a5c28();
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

/******************************************************************************
 * Function : sub_0a3a4c (Ghidra: FUN_000a3a4c)
 * Prototype: void sub_0a3a4c(void);
 * Address  : 0xa3a4c (Size: 81 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000a3a4c(void)

{
  DAT_0037937c = -DAT_00387d80;
  DAT_00379378 = -DAT_00387d78;
  DAT_00379380 = DAT_00387d80;
  if (DAT_00387d80 < 0) {
    DAT_00379380 = 0;
  }
  if (DAT_0037937c < 0) {
    DAT_0037937c = 0;
  }
  DAT_00379374 = DAT_00387d78;
  if (DAT_00387d78 < 0) {
    DAT_00379374 = 0;
  }
  if (DAT_00379378 < 0) {
    DAT_00379378 = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0a3aa0 (Ghidra: FUN_000a3aa0)
 * Prototype: void sub_0a3aa0(void);
 * Address  : 0xa3aa0 (Size: 2220 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa43b4
 * Callees  : 16 -> 0x2dcec, 0x90610, 0x9164c, 0x92be0, 0x92d10, 0x93120, 0x938d8, 0x940dc, 0x98614, 0x98cb8 ...
 * Strings  :
 *   - 0x191ecc: "`^\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a3aa0(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined *puVar3;
  int extraout_ECX_03;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_a4;
  int local_a0;
  int local_88;
  int local_84;
  undefined4 local_6c;
  undefined4 local_68;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  int local_2c;
  
  iVar2 = (int)(CONCAT44(*(int *)(in_EAX + 0x17) >> 0x1f,*(undefined4 *)(in_EAX + 0x17)) /
               (longlong)(int)(uint)DAT_0019cba6);
  DAT_00387d20 = &DAT_002f317f;
  FUN_000e6a10();
  DAT_00388300 = *(undefined4 *)((uint)DAT_00191d3c * 4 + 0x191ecc); /* 0x191ecc="`^\n" */
  DAT_00388304 = (&PTR_FUN_000947b8_00191edc)[DAT_00191d3c];
  DAT_00387d38 = DAT_00191d34 * 0x100;
  _DAT_00387d90 = (DAT_00191d34 + 1) * 0x100;
  iVar4 = DAT_00191d34 * 0x300 >> 0x1f;
  DAT_00387d8c = (int)((DAT_00191d34 * 0x300 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2;
  DAT_00387d4c = 0;
  DAT_00387d50 = 0;
  DAT_00387d54 = 0;
  DAT_00387d68 = 0;
  DAT_00387d78 = 0;
  DAT_00387d5c = 0;
  DAT_00387d7c = 0;
  DAT_00387d60 = 0;
  DAT_00387d30 = DAT_00191d28 << 8;
  DAT_00387d70 = 0;
  DAT_00387d34 = DAT_00191d2c << 8;
  DAT_00387d58 = 0x4000;
  DAT_00387d6c = 0x4000;
  DAT_00387d80 = 0x4000;
  DAT_00387d88 = DAT_00387d38;
  FUN_0002dcec();
  DAT_00379374 = DAT_00387d78;
  DAT_0037937c = -DAT_00387d80;
  DAT_00379378 = -DAT_00387d78;
  DAT_00379380 = DAT_00387d80;
  if (DAT_00387d80 < 0) {
    DAT_00379380 = 0;
  }
  if (DAT_0037937c < 0) {
    DAT_0037937c = 0;
  }
  if (DAT_00387d78 < 0) {
    DAT_00379374 = 0;
  }
  if (DAT_00379378 < 0) {
    DAT_00379378 = 0;
  }
  FUN_0002dcec();
  FUN_0002dcec();
  DAT_00379388 = (uint)*(ushort *)(extraout_ECX + 7);
  DAT_0037938c = (uint)*(ushort *)(extraout_ECX + 0xf);
  _DAT_00379390 = -(uint)*(ushort *)(extraout_ECX + 0xb);
  uVar1 = *(ushort *)(extraout_ECX + 4);
  FUN_00092be0();
  DAT_00387da0 = (uint)uVar1;
  if (DAT_00191d3c == 0) {
    DAT_00387d8c = 1000000;
    iVar7 = 1000000;
    FUN_000db120(1000000,iVar2,DAT_00379388,DAT_0037938c);
    FUN_000940dc();
    DAT_003882bc = local_6c;
    DAT_003882c0 = local_68;
    _DAT_003882c4 = local_38;
    FUN_000940dc();
    iVar4 = (DAT_002f10ce >> 0x18) * 0x4ef;
    DAT_003882c8 = local_88 -
                   ((int)(uint)*(ushort *)(&DAT_0019d50c + iVar4) /
                   CONCAT22(extraout_var,DAT_0019cba6)) / 2;
    DAT_003882cc = local_84 -
                   ((int)(uint)*(ushort *)(&DAT_0019d50e + iVar4) /
                   CONCAT22(extraout_var,DAT_0019cba6)) / 2;
    _DAT_003882d0 = extraout_ECX_00;
    FUN_000940dc();
    iVar4 = (DAT_002f10ce >> 0x18) * 0x4ef;
    DAT_003882d4 = iVar7 - ((uint)*(ushort *)(&DAT_0019d50c + iVar4) / (uint)DAT_0019cba6) / 2;
    DAT_003882d8 = iVar2 - ((uint)*(ushort *)(&DAT_0019d50e + iVar4) / (uint)DAT_0019cba6) / 2;
    _DAT_003882dc = 0xffff0000;
    FUN_000940dc();
    iVar2 = (DAT_002f10ce >> 0x18) * 0x4ef;
    _DAT_003882e0 = local_a4 - ((uint)*(ushort *)(&DAT_0019d50c + iVar2) / (uint)DAT_0019cba6) / 2;
    DAT_003882e4 = local_a0 - ((uint)*(ushort *)(&DAT_0019d50e + iVar2) / (uint)DAT_0019cba6) / 2;
    _DAT_003882e8 = 0;
    FUN_00090610();
    FUN_00090610();
    uVar5 = local_50 - local_48 >> 0x1f;
    iVar2 = (local_50 - local_48 ^ uVar5) - uVar5;
    uVar5 = local_4c - local_44 >> 0x1f;
    iVar4 = (local_4c - local_44 ^ uVar5) - uVar5;
    if (iVar4 < iVar2) {
      DAT_00191d34 = iVar2 + (iVar4 >> 1);
    }
    else {
      DAT_00191d34 = iVar4 + (iVar2 >> 1);
    }
    DAT_00191d34 = DAT_00191d34 + 2;
    if (DAT_00191d38 < DAT_00191d34) {
      DAT_00191d34 = DAT_00191d38;
    }
  }
  else {
    DAT_00191d34 = DAT_00191d38;
    DAT_00387d38 = DAT_00191d38 * 0x100;
    _DAT_00387d90 = (DAT_00191d38 + 1) * 0x100;
    iVar2 = DAT_00191d38 * 0x300 >> 0x1f;
    DAT_00387d8c = (int)((DAT_00191d38 * 0x300 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    DAT_00387d30 = DAT_00191d28 << 8;
    DAT_00387d34 = DAT_00191d2c << 8;
    DAT_00387d94 = DAT_00387d38 - DAT_00387d8c >> 8;
    DAT_00387d88 = DAT_00387d38;
    FUN_000db120(DAT_00387d8c,DAT_00191d30,DAT_00379388,DAT_0037938c);
  }
  iVar2 = -(local_3c & 0xff);
  local_2c = (local_38 & 0xff) + DAT_00191d34 * 0x100;
  FUN_0009ef3c();
  FUN_0009f8bc();
  DAT_00387218 = &DAT_00379598;
  DAT_0038721c = &DAT_003803d8;
  piVar6 = &DAT_00379398 + (0x1f - DAT_00191d34) * 2;
  DAT_00387d98 = iVar2;
  DAT_00387d9c = local_2c;
  if (DAT_00191d3c == 0) {
    if (DAT_002ee8d6 == '\0') {
      FUN_00093120();
    }
    else {
      FUN_000938d8();
    }
  }
  else {
    FUN_00092d10();
  }
  iVar4 = DAT_00191d34 * 2;
  while (puVar3 = DAT_0038721c, iVar4 = iVar4 + -1, iVar4 != 0) {
    DAT_0038721c = DAT_00387218;
    piVar6 = piVar6 + 2;
    iVar7 = *piVar6;
    DAT_00387218 = puVar3;
    local_2c = local_2c + -0x100;
    DAT_00387d9c = local_2c;
    if (DAT_00191d3c == 0) {
      if (DAT_002ee8d6 == '\0') {
        DAT_00387d98 = iVar2;
        FUN_00093120();
        if (iVar7 < extraout_ECX_01) {
          DAT_00387d98 = iVar2;
          DAT_00387d9c = local_2c;
          FUN_00098cb8();
        }
      }
      else {
        DAT_00387d98 = iVar2;
        FUN_000938d8();
        if (iVar7 < extraout_ECX_03) {
          DAT_00387d98 = iVar2;
          DAT_00387d9c = local_2c;
          FUN_0009bdf0();
        }
      }
    }
    else {
      DAT_00387d98 = iVar2;
      FUN_00092d10();
      if (iVar7 < extraout_ECX_02) {
        DAT_00387d98 = iVar2;
        DAT_00387d9c = local_2c;
        FUN_00098614();
      }
    }
  }
  if (DAT_00387e02._2_1_ != '\0') {
    FUN_0009164c();
  }
  FUN_0009ff84();
  DAT_00387e02._2_1_ = 0;
  return;
}

/******************************************************************************
 * Function : sub_0a434c (Ghidra: FUN_000a434c)
 * Prototype: void sub_0a434c(void);
 * Address  : 0xa434c (Size: 103 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_000a434c(void)

{
  int *piVar1;
  int *extraout_ECX;
  int iVar2;
  
  piVar1 = &DAT_00379398 + (0x1f - DAT_00191d34) * 2;
  for (iVar2 = DAT_00191d34 * 2 + 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*piVar1 < piVar1[1]) {
      FUN_000e6a10();
      piVar1 = extraout_ECX;
    }
    piVar1 = piVar1 + 2;
  }
  return;
}

/******************************************************************************
 * Function : sub_0a49ec (Ghidra: FUN_000a49ec)
 * Prototype: void sub_0a49ec(void);
 * Address  : 0xa49ec (Size: 1494 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdb1a4
 * Callees  : 3 -> 0x10c1a, 0x4ccc2, 0xdc324
 ******************************************************************************/
void FUN_000a49ec(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  int in_EDX;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  short sStack_34;
  int local_32;
  ushort local_2c;
  ushort local_28 [2];
  byte local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_14 [4];
  
  local_20._0_2_ = *(short *)(in_EAX + 0x52);
  local_1c = FUN_00010c1a();
  local_20 = CONCAT22(local_20._2_2_,(short)local_20 - (short)local_1c) & 0xffff07ff;
  iVar5 = FUN_000dc324();
  iVar5 = (iVar5 >> 0x11) + 0x10;
  if (iVar5 < 0x10) {
    iVar5 = 0x10;
  }
  else if (0x1f < iVar5) {
    iVar5 = 0x1f;
  }
  FUN_0004ccc2();
  iVar9 = (((local_20 & 0xff) + (int)sStack_34) * -2 + 0xc) * 4;
  iVar8 = local_32 >> 0x10;
  iVar10 = ((sStack_34 * 2 + 0xc) - (iVar5 * 8 + -0x80)) * 4;
  puVar2 = (&PTR_LAB_00192fe0)[local_28[0]];
  iVar11 = (&DAT_001927e0)[local_28[0]];
  iVar6 = (iVar8 * -8 * iVar11 - iVar9 * (int)puVar2 >> 0x10) + *(int *)(in_EDX + 0x18);
  iVar7 = (iVar8 * -8 * iVar11 - iVar10 * (int)puVar2 >> 0x10) + *(int *)(in_EDX + 0x18);
  iVar10 = ((int)((iVar8 + (uint)local_24[0]) * -8 * iVar11 - iVar10 * (int)puVar2) >> 0x10) +
           *(int *)(in_EDX + 0x18);
  iVar11 = ((int)(iVar11 * (iVar8 + (uint)local_24[0]) * -8 - iVar9 * (int)puVar2) >> 0x10) +
           *(int *)(in_EDX + 0x18);
  (*DAT_00388300)();
  (*DAT_00388300)();
  (*DAT_00388300)();
  (*DAT_00388300)();
  puVar4 = DAT_00387d20;
  if (iVar10 <= iVar7) {
    iVar7 = iVar10;
  }
  if (iVar6 < iVar11) {
    iVar11 = iVar6;
  }
  if (iVar7 < iVar11) {
    iVar11 = iVar7;
  }
  if (DAT_0033317f <= DAT_00387d20) {
    return;
  }
  iVar11 = (int)((iVar11 + (iVar11 >> 0x1f) * -0x10) - (uint)((iVar11 >> 0x1f) << 3 < 0)) >> 4;
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  else if (0x2be < iVar11) {
    iVar11 = 0x2be;
  }
  uVar3 = (&DAT_00387220)[iVar11];
  *(undefined1 *)(DAT_00387d20 + 1) = 0xc;
  *DAT_00387d20 = uVar3;
  (&DAT_00387220)[iVar11] = DAT_00387d20;
  puVar1 = DAT_00387d20 + 2;
  DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x5f);
  *puVar1 = local_84;
  puVar4[4] = 0;
  puVar4[5] = ((local_20 & 0xff) - 1) * 0x10000;
  iVar11 = DAT_00387d8c;
  puVar4[3] = local_80;
  if (iVar11 < local_78) {
    if (local_78 < DAT_00387d38) {
      iVar11 = ((DAT_00387d88 - local_78) * (local_7c >> 0x10)) / DAT_00387d94 + 0x8000;
      goto LAB_000a4e1d;
    }
    puVar4[6] = 0x8000;
  }
  else {
    iVar11 = (local_7c >> 0x10) << 8;
LAB_000a4e1d:
    puVar4[6] = iVar11;
  }
  puVar4[7] = local_68;
  puVar4[9] = 0;
  puVar4[8] = local_64;
  iVar11 = DAT_00387d8c;
  puVar4[10] = 0;
  if (iVar11 < local_5c) {
    if (local_5c < DAT_00387d38) {
      iVar11 = ((DAT_00387d88 - local_5c) * (local_60 >> 0x10)) / DAT_00387d94 + 0x8000;
      goto LAB_000a4e8e;
    }
    puVar4[0xb] = 0x8000;
  }
  else {
    iVar11 = (local_60 >> 0x10) << 8;
LAB_000a4e8e:
    puVar4[0xb] = iVar11;
  }
  puVar4[0xc] = local_a0;
  puVar4[0xf] = 0;
  puVar4[0xd] = local_9c;
  iVar11 = DAT_00387d8c;
  puVar4[0xe] = (local_24[0] - 1) * 0x10000;
  if (iVar11 < local_94) {
    if (local_94 < DAT_00387d38) {
      iVar11 = ((DAT_00387d88 - local_94) * (local_98 >> 0x10)) / DAT_00387d94 + 0x8000;
      goto LAB_000a4f0a;
    }
    puVar4[0x10] = 0x8000;
  }
  else {
    iVar11 = (local_98 >> 0x10) << 8;
LAB_000a4f0a:
    puVar4[0x10] = iVar11;
  }
  puVar4[0x11] = local_14;
  puVar4[0x12] = local_24;
  puVar4[0x13] = (local_24[0] - 1) * 0x10000;
  iVar11 = DAT_00387d8c;
  puVar4[0x14] = ((local_20 & 0xff) - 1) * 0x10000;
  if (iVar11 < local_b0) {
    if (DAT_00387d38 <= local_b0) {
      puVar4[0x15] = 0x8000;
      goto LAB_000a4f99;
    }
    iVar11 = ((DAT_00387d88 - local_b0) * ((int)local_28 >> 0x10)) / DAT_00387d94 + 0x8000;
  }
  else {
    iVar11 = ((int)local_28 >> 0x10) << 8;
  }
  puVar4[0x15] = iVar11;
LAB_000a4f99:
  puVar4[6] = iVar5;
  puVar4[0x16] = (uint)local_2c;
  *(undefined2 *)(puVar4 + 0x17) = *(undefined2 *)(in_EAX + 0x44);
  *(undefined1 *)((int)puVar4 + 0x5e) = *(undefined1 *)(in_EAX + 0x48);
  return;
}

/******************************************************************************
 * Function : sub_0a5030 (Ghidra: FUN_000a5030)
 * Prototype: void sub_0a5030(void);
 * Address  : 0xa5030 (Size: 214 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdb1a4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000a5030(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *in_EDX;
  undefined4 *puVar4;
  undefined4 local_2c [5];
  int local_18;
  int local_14;
  
  puVar4 = local_2c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar4 = puVar4 + 1;
  }
  local_18 = local_18 +
             (uint)*(ushort *)(&DAT_0018e933 + (uint)*(byte *)(in_EAX + 0x1a) * 2) +
             (uint)*(ushort *)(in_EAX + 0x58);
  (*DAT_00388300)();
  if (DAT_00387d20 < DAT_0033317f) {
    iVar3 = (int)((local_14 + (local_14 >> 0x1f) * -0x10) - (uint)((local_14 >> 0x1f) << 3 < 0)) >>
            4;
    if (DAT_00191d3c == '\0') {
      iVar3 = 1;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x2be < iVar3) {
      iVar3 = 0x2be;
    }
    if (DAT_00387d20 < DAT_0033317f) {
      uVar2 = (&DAT_00387220)[iVar3];
      *(undefined1 *)(DAT_00387d20 + 1) = 0xe;
      *DAT_00387d20 = uVar2;
      (&DAT_00387220)[iVar3] = DAT_00387d20;
      DAT_00387d20[2] = in_EAX;
      DAT_00387d20[3] = local_2c[0];
      DAT_00387d20[4] = local_2c[1];
      piVar1 = DAT_00387d20 + 5;
      DAT_00387d20 = DAT_00387d20 + 6;
      *piVar1 = local_14;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0a5178 (Ghidra: FUN_000a5178)
 * Prototype: undefined8 sub_0a5178(void);
 * Address  : 0xa5178 (Size: 183 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x8bb2c, 0xa5240
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000a5178(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  byte bVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_EAX + 0x5c) >> 0x10;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (*(int *)(in_EAX + 3) >> 0x18 == (uint)DAT_002eb543) {
    bVar3 = (byte)DAT_002e8bee & 3;
  }
  else {
    bVar3 = *(byte *)(in_EAX + 6);
  }
  lVar1 = (longlong)
          (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10) * 0x23) /
          100;
  iVar2 = (*(int *)(&DAT_002e9112 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) >> 0x10) + (int)lVar1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else if (iVar4 == iVar2) {
    iVar4 = CONCAT31((int3)(((uint)(ushort)((ulonglong)lVar1 >> 0x10) << 0x10) >> 8),bVar3) * 8 +
            0x51;
  }
  else {
    iVar4 = ((uint)bVar3 * 8 + 0x58) - (iVar4 * 8) / iVar2;
  }
  return CONCAT44(in_EDX,iVar4);
}

/******************************************************************************
 * Function : sub_0a5240 (Ghidra: FUN_000a5240)
 * Prototype: void sub_0a5240(void);
 * Address  : 0xa5240 (Size: 1834 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x8bde8, 0x9ff84, 0xa6504
 * Callees  : 8 -> 0x10575, 0x10589, 0x105a1, 0x64bce, 0xa5178, 0xf0624, 0xf3300, 0x13a710
 ******************************************************************************/
void FUN_000a5240(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 uVar5;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  int iVar6;
  int unaff_EBX;
  int *piVar7;
  uint uVar8;
  int aiStack_48 [9];
  int local_24;
  undefined1 auStack_22 [6];
  short local_1c;
  undefined2 uStack_18;
  short local_14;
  undefined1 local_10;
  
  piVar7 = aiStack_48 + 3;
  local_1c = 0;
  local_14 = 0;
  uStack_18 = 0;
  aiStack_48[5] = (uint)DAT_003d9874;
  DAT_003d9874 = 0;
  aiStack_48[8] = 0;
  if ((DAT_0019d0bd & 0x80) != 0) {
    if (*(short *)(unaff_EBX + 0x1b) != *(short *)(&DAT_0019d0fd + (DAT_002f10ce >> 0x18) * 0x4ef))
    {
      *(uint *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 0x43) = DAT_002e8bee;
      return;
    }
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 0x47) = 0x28;
  }
  aiStack_48[7] = (&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)];
  local_10 = *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 0x23);
  cVar2 = *(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6);
  aiStack_48[4] = in_EDX;
  if ((cVar2 == '\x02') || (cVar2 == '\x05')) {
    aiStack_48[2] = 0xa5313;
    uStack_18 = FUN_000a5178();
    in_ECX = extraout_ECX;
    if (DAT_002f10ce._3_1_ == *(char *)(unaff_EBX + 6)) {
      iVar3 = (&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)];
      DAT_003d9874 = DAT_003d9874 | 4;
      if (DAT_002e8bee - 1 == *(int *)(iVar3 + 0x43)) {
        if (CONCAT31((uint3)(DAT_002e8bee - 1 >> 8) ^ (uint3)((uint)*(int *)(iVar3 + 0x43) >> 8),
                     *(char *)(iVar3 + 0x47)) < 0x28) {
          *(char *)(iVar3 + 0x47) = *(char *)(iVar3 + 0x47) + '\x01';
        }
      }
      else {
        *(undefined1 *)(iVar3 + 0x47) = 0;
      }
      *(uint *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 0x43) = DAT_002e8bee;
      if (*(char *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 0x47) == '(') {
        aiStack_48[2] = 0xa53a2;
        iVar3 = FUN_00064bce();
        in_ECX = extraout_ECX_00;
        if (*(char *)(iVar3 + 0x23) == '\0') {
          aiStack_48[2] = 0xa53b3;
          iVar3 = FUN_00010589();
          if (iVar3 == 0) {
            cVar2 = *(char *)(unaff_EBX + 7);
            if (cVar2 == '\x0e') {
              cVar2 = *(char *)(unaff_EBX + 8);
            }
            if (cVar2 != '\'') {
              cVar2 = *(char *)(unaff_EBX + 7);
              if (cVar2 == '\x0e') {
                cVar2 = *(char *)(unaff_EBX + 8);
              }
              if (cVar2 != 't') {
                cVar2 = *(char *)(unaff_EBX + 7);
                if (cVar2 == '\x0e') {
                  cVar2 = *(char *)(unaff_EBX + 8);
                }
                if (cVar2 == 'c') {
                  ppuVar4 = &PTR_FUN_0002864e_0018d47b;
                }
                else {
                  aiStack_48[2] = 0xa541f;
                  iVar3 = FUN_00010575();
                  if (iVar3 == 0) {
                    iVar3 = (uint)*(byte *)(unaff_EBX + 0x1a) * 0xe6;
                    if ((*(short *)(&DAT_002e911f + iVar3) == 0) ||
                       (*(int *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 0x39) <=
                        *(int *)(&DAT_002e911d + iVar3) >> 0x10)) {
                      aiStack_48[6] = (&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)];
                      aiStack_48[3] = (uint)*(byte *)(unaff_EBX + 0x1a) * 0xe6;
                      auStack_22._2_4_ = 100;
                      iVar3 = (uint)(byte)(&DAT_002e9116)[aiStack_48[3]] *
                              ((int)((uint)*(byte *)(aiStack_48[6] + 0x23) *
                                     (*(int *)(&DAT_002e9112 + aiStack_48[3]) >> 0x10) * 0x23) / 100
                              + (*(int *)(&DAT_002e9112 + aiStack_48[3]) >> 0x10));
                      iVar6 = iVar3 >> 0x1f;
                      if (*(int *)(unaff_EBX + 0x5c) >> 0x10 <
                          (int)((iVar3 + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0)) >> 8) {
                        ppuVar4 = &PTR_FUN_0006db51_0018c8ca;
                      }
                      else if (*(char *)(aiStack_48[6] + 0x48) == '\0') {
                        ppuVar4 = (undefined **)
                                  (&DAT_0018c4a0 + (uint)*(byte *)(unaff_EBX + 7) * 0x29);
                      }
                      else {
                        ppuVar4 = &PTR_FUN_00028851_0018d0a3;
                      }
                    }
                    else {
                      ppuVar4 = &PTR_FUN_000ab594_0018c7ab;
                    }
                  }
                  else {
                    ppuVar4 = &PTR_FUN_0004d0d5_0018c878;
                  }
                }
                goto LAB_000a550f;
              }
            }
            ppuVar4 = &PTR_FUN_0002855c_0018cadf;
          }
          else {
            ppuVar4 = &PTR_FUN_00026c6d_0018cca2;
          }
LAB_000a550f:
          if (*(char *)((int)ppuVar4 + 0x1e) == '\x06') {
            ppuVar4 = (undefined **)(&DAT_0018c4a0 + (uint)*(byte *)(unaff_EBX + 8) * 0x29);
          }
          if ((*(short *)((int)ppuVar4 + 0x26) == 1) || (unaff_EBX == DAT_003d9578)) {
            local_1c = *(short *)(ppuVar4 + 9);
          }
          aiStack_48[2] = 0xa5554;
          uVar5 = FUN_000105a1();
          in_ECX = extraout_ECX_01;
          switch(uVar5) {
          case 1:
            local_14 = 0x34;
            break;
          case 2:
            local_14 = 0x3b;
            break;
          case 3:
            local_14 = 0x36;
            break;
          case 4:
            local_14 = 0x37;
          }
        }
      }
    }
  }
  if ((local_1c != 0) || (local_14 != 0)) {
    aiStack_48[2] =
         (int)(in_ECX * (uint)DAT_0019cba6 * (uint)*(byte *)(DAT_001991c0 + 0x1a9)) >> 0xd;
    aiStack_48[3] = aiStack_48[4] - aiStack_48[2];
    piVar7 = aiStack_48 + 2;
    local_24 = aiStack_48[2];
    FUN_000f0624();
  }
  DAT_003d9874 = DAT_003d9874 & 0xfff3;
  if (((DAT_002e8bee & 4) == 0) && (*(int *)((int)piVar7 + 0x26) >> 0x10 != 0)) {
    if ((short)piVar7[10] == 0) goto LAB_000a56f1;
    piVar7[-1] = piVar7[6];
    piVar7[7] = piVar7[1] - piVar7[6];
    piVar7[-2] = 0xa56ce;
    FUN_000f0624();
    bVar1 = *(byte *)(DAT_001991c0 + 5 + (*(int *)((int)piVar7 + 0x1a) >> 0x10) * 6);
  }
  else {
    if ((short)piVar7[8] == 0) goto LAB_000a56f1;
    piVar7[-1] = piVar7[6];
    *piVar7 = (*(int *)((int)piVar7 + 0x1e) >> 0x10) * 6;
    piVar7[7] = piVar7[1] - piVar7[6];
    iVar3 = *piVar7;
    piVar7[-2] = 0xa5678;
    FUN_000f0624();
    bVar1 = *(byte *)(DAT_001991c0 + iVar3 + 5);
  }
  piVar7[4] = (uint)bVar1;
  piVar7 = piVar7 + -1;
LAB_000a56f1:
  if (((*(int *)(unaff_EBX + 0x15) >> 0x10 < 1) || (*(short *)((int)piVar7 + 0x24) == 0)) ||
     ((DAT_002e8bee & 1) == 0)) {
    iVar3 = (DAT_002f10ce >> 0x18) * 0x4ef;
    if (((*(short *)(unaff_EBX + 0x1b) == *(short *)(&DAT_0019d0fd + iVar3)) ||
        (((*(int *)(unaff_EBX + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar3] &&
          (((*(byte *)(*(int *)((int)piVar7 + 0x10) + 0xac) & 0x20) == 0 ||
           (0 < *(int *)(*(int *)((int)piVar7 + 0x10) + 0xad) >> 0x10)))) ||
         (*(char *)((&DAT_001b0a00)[*(ushort *)(unaff_EBX + 100)] + 3) != '\0')))) ||
       ((0 < *(int *)(unaff_EBX + 0x15) >> 0x10 ||
        (*(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6) == '\x03'))))
    {
      *(uint *)((int)piVar7 + 0x1c) =
           (*(int *)((int)piVar7 + 4) -
           ((uint)*(byte *)(DAT_001991c0 + (*(int *)((int)piVar7 + 0x22) >> 0x10) * 6 + 5) *
           (uint)DAT_0019cba6) / (uint)DAT_0019cba6) - *(int *)((int)piVar7 + 0x14);
      *(undefined4 *)((int)piVar7 + -4) = 0xa58fe;
      FUN_0013a710();
      *(undefined4 *)((int)piVar7 + -4) = 0xa5959;
      FUN_0013a710();
    }
  }
  else {
    uVar8 = *(int *)(unaff_EBX + 3) >> 0x18;
    if (uVar8 == DAT_002eb543) {
      *(uint *)((int)piVar7 + 0x1c) = (uint)(byte)(&DAT_0019177a)[DAT_002e8bee & 3];
      *(undefined4 *)((int)piVar7 + -4) = 0xa57f0;
      FUN_000f3300();
      DAT_003d9874 = (short)*(undefined4 *)((int)piVar7 + 8);
      return;
    }
    *(uint *)((int)piVar7 + 0x1c) = (uint)(byte)(&DAT_0019177a)[uVar8];
    *(undefined4 *)((int)piVar7 + -4) = 0xa579e;
    FUN_000f3300();
  }
  DAT_003d9874 = (short)*(undefined4 *)((int)piVar7 + 8);
  return;
}

/******************************************************************************
 * Function : sub_0a596c (Ghidra: FUN_000a596c)
 * Prototype: void sub_0a596c(void);
 * Address  : 0xa596c (Size: 264 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x9ff84, 0xa6504
 * Callees  : 1 -> 0xf0624
 ******************************************************************************/
void FUN_000a596c(void)

{
  char cVar1;
  uint *puVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint auStack_2c [5];
  
  auStack_2c[2] = (uint)DAT_003d9874;
  DAT_003d9874 = DAT_003d9874 & 0xfffe;
  iVar3 = *(int *)(in_EAX + 0x10);
  cVar1 = *(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6);
  if ((cVar1 == '\x02') || (puVar5 = auStack_2c + 2, cVar1 == '\x05')) {
    auStack_2c[4] = (uint)*(byte *)(DAT_001991c0 + 0x1af);
    iVar4 = 0;
    for (; 0 < iVar3; iVar3 = iVar3 / 10) {
      iVar4 = iVar4 + 1;
    }
    puVar5 = auStack_2c + 2;
    if (0 < iVar4) {
      puVar2 = auStack_2c + 2;
      puVar5 = auStack_2c + 2;
      for (iVar3 = *(int *)(in_EAX + 0x10); 0 < iVar3; iVar3 = iVar3 / 10) {
        puVar5 = (uint *)((int)puVar2 + -4);
        *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)((int)puVar2 + 8);
        *(undefined4 *)((int)puVar2 + -8) = 0xa5a4b;
        FUN_000f0624();
        puVar2 = (uint *)((int)puVar2 + -4);
      }
    }
  }
  DAT_003d9874 = (short)*puVar5;
  return;
}

/******************************************************************************
 * Function : sub_0a5a74 (Ghidra: FUN_000a5a74)
 * Prototype: void sub_0a5a74(void);
 * Address  : 0xa5a74 (Size: 435 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x9ff84, 0xa6504
 * Callees  : 1 -> 0xf0870
 ******************************************************************************/
void FUN_000a5a74(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfe;
  uVar2 = *(ushort *)(&DAT_002ddd25 + (uint)*(ushort *)(in_EAX + 6) * 0x45);
  if (((uVar2 != 0) && (1 < uVar2)) &&
     ((uVar2 < 7 || ((7 < uVar2 && ((uVar2 < 0xf || (0x10 < uVar2)))))))) {
    cVar1 = *(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6);
    if (((cVar1 == '\x02') || (cVar1 == '\x05')) && (DAT_002ee8d9 != '\0')) {
      iVar4 = *(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef);
      iVar3 = *(int *)(iVar4 + 0x17) / (int)(uint)DAT_0019cba6;
      if (*(char *)(iVar4 + 6) == '\x05') {
        iVar3 = 0xffe;
      }
      uVar5 = (uint)DAT_0019cba6;
      iVar4 = ((iVar3 << 7) >> 0xd) * uVar5;
      FUN_000f0870(DAT_001995b0,iVar4,(int)(*(int *)(in_EAX + 0xc) * uVar5 - iVar4) / (int)uVar5);
      FUN_000f0870(DAT_001993a0);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0a5c28 (Ghidra: FUN_000a5c28)
 * Prototype: void sub_0a5c28(void);
 * Address  : 0xa5c28 (Size: 247 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x9ff84, 0xa6504
 * Callees  : 1 -> 0x8d740
 ******************************************************************************/
void FUN_000a5c28(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfe;
  uVar2 = *(ushort *)(&DAT_002ddd25 + (uint)*(ushort *)(in_EAX + 6) * 0x45);
  if (((((uVar2 != 0) && (1 < uVar2)) &&
       ((uVar2 < 7 || ((7 < uVar2 && ((uVar2 < 0xf || (0x10 < uVar2)))))))) &&
      ((cVar1 = *(char *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 6),
       cVar1 == '\x02' || (cVar1 == '\x05')))) && (DAT_002ee8d9 != '\0')) {
    FUN_0008d740();
  }
  return;
}

/******************************************************************************
 * Function : sub_0a5d4c (Ghidra: FUN_000a5d4c)
 * Prototype: void sub_0a5d4c(void);
 * Address  : 0xa5d4c (Size: 126 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x14e9f, 0xda7bc
 * Callees  : 1 -> 0x63122
 ******************************************************************************/
void FUN_000a5d4c(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  
  iVar1 = in_EDX + 3;
  iVar3 = in_EDX * 0x500;
  if (in_EDX < iVar1) {
    do {
      iVar5 = in_EAX * 5 + iVar3;
      iVar4 = (in_EAX + 3) * 5 + iVar3;
      iVar2 = iVar5 - iVar4;
      while (SBORROW4(iVar5,iVar4) != iVar2 < 0) {
        *(byte *)((int)&DAT_00279203 + iVar5) = *(byte *)((int)&DAT_00279203 + iVar5) & 0x7b;
        iVar2 = (iVar5 + 5) - iVar4;
        iVar5 = iVar5 + 5;
      }
      in_EDX = in_EDX + 1;
      iVar3 = iVar3 + 0x500;
    } while (in_EDX < iVar1);
  }
  FUN_00063122();
  return;
}

/******************************************************************************
 * Function : sub_0a5dd0 (Ghidra: FUN_000a5dd0)
 * Prototype: void sub_0a5dd0(void);
 * Address  : 0xa5dd0 (Size: 37 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000a5dd0(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 *in_EDX;
  undefined4 unaff_EBX;
  
  *in_EAX = *in_EDX;
  in_EAX[1] = in_EDX[1];
  in_EAX[2] = unaff_EBX;
  in_EAX[3] = in_ECX;
  in_EAX[4] = ((int)in_EDX[2] >> 0x10) * 0x100 + 0xc0000;
  return;
}

/******************************************************************************
 * Function : sub_0a5e00 (Ghidra: FUN_000a5e00)
 * Prototype: int sub_0a5e00(void);
 * Address  : 0xa5e00 (Size: 87 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000a5e00(void)

{
  int *in_EAX;
  int *in_EDX;
  int *unaff_EBX;
  
  if ((*(ushort *)(unaff_EBX + 2) & *(ushort *)(in_EAX + 2) & *(ushort *)(in_EDX + 2) & 0x1f8) != 0)
  {
    return 0;
  }
  return (*in_EDX - *in_EAX) * (unaff_EBX[1] - in_EDX[1]) -
         (in_EDX[1] - in_EAX[1]) * (*unaff_EBX - *in_EDX);
}

/******************************************************************************
 * Function : sub_0a5e60 (Ghidra: FUN_000a5e60)
 * Prototype: void sub_0a5e60(void);
 * Address  : 0xa5e60 (Size: 398 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000a5e60(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int *in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(*(int *)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef) + 0x17) /
          (int)(uint)DAT_0019cba6;
  iVar3 = in_EAX[4];
  iVar1 = in_EAX[5];
  iVar4 = iVar3 * iVar1;
  iVar5 = in_EAX[6];
  in_EAX[4] = (((*in_EDX + iVar1) * (in_EDX[1] + iVar3) - in_EDX[3]) - iVar4) + in_EDX[2] * iVar5 >>
              0xe;
  in_EAX[5] = (((in_EDX[4] + iVar1) * (in_EDX[5] + iVar3) - in_EDX[7]) - iVar4) + in_EDX[6] * iVar5
              >> 0xe;
  in_EAX[6] = (((iVar3 + in_EDX[9]) * (iVar1 + in_EDX[8]) - in_EDX[0xb]) - iVar4) +
              iVar5 * in_EDX[10] >> 0xe;
  iVar1 = DAT_00387d54;
  iVar5 = in_EAX[5] + DAT_00387d50;
  in_EAX[4] = in_EAX[4] + DAT_00387d4c;
  iVar3 = DAT_00387d28;
  in_EAX[5] = iVar5;
  in_EAX[6] = in_EAX[6] + iVar1;
  *in_EAX = iVar3 + (in_EAX[4] * iVar2 >> 0x10);
  iVar3 = DAT_00191d34 * 0x100;
  in_EAX[1] = DAT_00387d2c - (iVar2 * in_EAX[5] >> 0x10);
  iVar3 = (iVar3 + in_EAX[6]) / 2;
  in_EAX[6] = iVar3;
  if (iVar3 < 0x20) {
    in_EAX[6] = 0;
  }
  else if (0x2bdf < iVar3) {
    in_EAX[6] = 0x2be0;
  }
  if (*in_EAX < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 8;
  }
  else if (DAT_0018429c <= *in_EAX) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x10;
  }
  if (in_EAX[1] < 0) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x20;
  }
  else if (DAT_001842a0 <= in_EAX[1]) {
    *(byte *)(in_EAX + 2) = *(byte *)(in_EAX + 2) | 0x40;
  }
  return;
}

/******************************************************************************
 * Function : sub_0a5ff0 (Ghidra: FUN_000a5ff0)
 * Prototype: void sub_0a5ff0(void);
 * Address  : 0xa5ff0 (Size: 141 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000a5ff0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined4 *in_EDX;
  int iVar4;
  undefined1 unaff_BL;
  
  iVar3 = (int)(in_EAX[6] + in_EDX[6]) / 2;
  if (DAT_00387d20 < DAT_0033317f) {
    iVar4 = iVar3 >> 0x1f;
    iVar3 = ((int)((iVar3 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4) + -2;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x2be < iVar3) {
      iVar3 = 0x2be;
    }
    uVar2 = (&DAT_00387220)[iVar3];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar2;
    (&DAT_00387220)[iVar3] = DAT_00387d20;
    DAT_00387d20[2] = *in_EAX;
    DAT_00387d20[3] = in_EAX[1];
    DAT_00387d20[4] = *in_EDX;
    DAT_00387d20[5] = in_EDX[1];
    puVar1 = DAT_00387d20 + 6;
    DAT_00387d20 = DAT_00387d20 + 7;
    *(undefined1 *)puVar1 = unaff_BL;
  }
  return;
}

/******************************************************************************
 * Function : sub_0a60a0 (Ghidra: FUN_000a60a0)
 * Prototype: void sub_0a60a0(void);
 * Address  : 0xa60a0 (Size: 128 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000a60a0(void)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  uint uVar5;
  
  puVar4 = DAT_00387d20;
  if (DAT_00387d20 < DAT_0033317f) {
    uVar5 = (uint)DAT_0019cba6;
    *DAT_00387d20 = DAT_00387224;
    *(undefined1 *)(DAT_00387d20 + 1) = 0xe;
    DAT_00387d20[2] = in_EAX;
    DAT_00387d20[3] = in_EDX / (int)uVar5;
    uVar2 = *(ushort *)(&DAT_0018e933 + (uint)*(byte *)(in_EAX + 0x1a) * 2);
    uVar3 = *(ushort *)(in_EAX + 0x58);
    piVar1 = DAT_00387d20 + 5;
    DAT_00387d20 = DAT_00387d20 + 6;
    *piVar1 = unaff_EBX;
    DAT_00387224 = puVar4;
    puVar4[4] = (int)(unaff_EBX - ((uint)uVar2 + (uint)uVar3) / 0xc) / (int)uVar5;
  }
  return;
}

/******************************************************************************
 * Function : sub_0a6134 (Ghidra: FUN_000a6134)
 * Prototype: void sub_0a6134(void);
 * Address  : 0xa6134 (Size: 902 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xaa3a8
 ******************************************************************************/
void FUN_000a6134(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  ushort in_DX;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int local_30 [7];
  
  piVar8 = local_30 + 2;
  puVar10 = DAT_00387d20;
  do {
    iVar3 = (&DAT_001ae9fc)[in_DX];
    piVar9 = piVar8;
    if ((*(byte *)(iVar3 + 0x4f) & 1) == 0) {
      DAT_00387d20 = puVar10;
      switch(*(byte *)(iVar3 + 0x50) >> 2) {
      case 2:
        piVar8[-1] = (int)(piVar8 + 2);
        piVar8[-2] = 0xa6192;
        FUN_000aa3a8();
        piVar9 = piVar8 + -1;
        puVar10 = DAT_00387d20;
        if (DAT_00387d20 < DAT_0033317f) {
          iVar6 = piVar8[1] + -3;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0x2be < iVar6) {
            iVar6 = 0x2be;
          }
          uVar4 = (&DAT_00387220)[iVar6];
          *(undefined1 *)(DAT_00387d20 + 1) = 0xb;
          *DAT_00387d20 = uVar4;
          (&DAT_00387220)[iVar6] = DAT_00387d20;
          DAT_00387d20[2] = iVar3;
          uVar7 = (uint)DAT_0019cba6;
          DAT_00387d20[3] = piVar8[-1] / (int)uVar7;
          DAT_00387d20[4] = *piVar8 / (int)uVar7;
          DAT_00387d20[5] = *piVar8;
          puVar10 = DAT_00387d20 + 6;
          piVar9 = piVar8 + -1;
          if (*(char *)(iVar3 + 0x1f) == '\x05') {
            iVar6 = piVar8[-1];
            piVar8[3] = *piVar8;
            piVar9 = piVar8 + -1;
            if (puVar10 < DAT_0033317f) {
              *puVar10 = DAT_00387224;
              *(undefined1 *)(DAT_00387d20 + 7) = 0xe;
              DAT_00387224 = puVar10;
              DAT_00387d20[8] = iVar3;
              DAT_00387d20[9] = iVar6 / (int)uVar7;
              uVar1 = *(ushort *)(&DAT_0018e933 + (uint)*(byte *)(iVar3 + 0x1a) * 2);
              uVar2 = *(ushort *)(iVar3 + 0x58);
              piVar8[2] = 0xc;
              DAT_00387d20[10] =
                   (piVar8[3] - (int)((uint)uVar1 + (uint)uVar2) / piVar8[2]) / (int)uVar7;
              puVar10 = DAT_00387d20 + 0xc;
              DAT_00387d20[0xb] = piVar8[3];
              piVar9 = piVar8 + -1;
            }
          }
        }
        break;
      case 4:
        piVar8[-1] = (int)(piVar8 + 2);
        piVar8[-2] = 0xa633f;
        FUN_000aa3a8();
        piVar9 = piVar8 + -1;
        puVar10 = DAT_00387d20;
        if (DAT_00387d20 < DAT_0033317f) {
          *(undefined1 *)(DAT_00387d20 + 1) = 0x10;
          *DAT_00387d20 = DAT_00387224;
          uVar7 = (uint)DAT_0019cba6;
          DAT_00387224 = DAT_00387d20;
          DAT_00387d20[2] = piVar8[-1] / (int)uVar7;
          DAT_00387d20[3] = *piVar8 / (int)uVar7;
          DAT_00387d20[4] = *(undefined4 *)(iVar3 + 0x13);
          piVar9 = piVar8 + -1;
          puVar10 = DAT_00387d20 + 5;
        }
        break;
      case 5:
        piVar8[-1] = (int)(piVar8 + 2);
        piVar8[-2] = 0xa63af;
        FUN_000aa3a8();
        piVar9 = piVar8 + -1;
        puVar10 = DAT_00387d20;
        if (DAT_00387d20 < DAT_0033317f) {
          if (DAT_002e8bee + -1 == *(int *)(iVar3 + 0x15)) {
            if (CONCAT31((uint3)((uint)(DAT_002e8bee + -1) >> 8) ^
                         (uint3)((uint)*(int *)(iVar3 + 0x15) >> 8),*(char *)(iVar3 + 0x19)) < 0x28)
            {
              *(char *)(iVar3 + 0x19) = *(char *)(iVar3 + 0x19) + '\x01';
            }
          }
          else {
            *(undefined1 *)(iVar3 + 0x19) = 0;
          }
          *(int *)(iVar3 + 0x15) = DAT_002e8bee;
          piVar9 = piVar8 + -1;
          if (*(char *)(iVar3 + 0x19) == '(') {
            iVar6 = piVar8[1] + -3;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0x2be < iVar6) {
              iVar6 = 0x2be;
            }
            uVar4 = (&DAT_00387220)[iVar6];
            *(undefined1 *)(DAT_00387d20 + 1) = 0x11;
            *DAT_00387d20 = uVar4;
            (&DAT_00387220)[iVar6] = DAT_00387d20;
            uVar7 = (uint)DAT_0019cba6;
            DAT_00387d20[2] = piVar8[-1] / (int)uVar7;
            DAT_00387d20[3] = *piVar8 / (int)uVar7;
            puVar5 = DAT_0033317f;
            puVar10 = DAT_00387d20 + 4;
            *(undefined2 *)((int)DAT_00387d20 + 6) = *(undefined2 *)(iVar3 + 0x13);
            piVar9 = piVar8 + -1;
            if (puVar10 < puVar5) {
              *(undefined1 *)(DAT_00387d20 + 5) = 0x13;
              *puVar10 = DAT_00387224;
              DAT_00387224 = puVar10;
              DAT_00387d20[6] = piVar8[-1] / (int)uVar7;
              DAT_00387d20[7] = *piVar8 / (int)uVar7;
              *(undefined2 *)((int)DAT_00387d20 + 0x16) = *(undefined2 *)(iVar3 + 0x13);
              piVar9 = piVar8 + -1;
              puVar10 = DAT_00387d20 + 8;
            }
          }
        }
        break;
      case 6:
        piVar8[-1] = (int)(piVar8 + 2);
        piVar8[-2] = 0xa62ad;
        FUN_000aa3a8();
        piVar9 = piVar8 + -1;
        puVar10 = DAT_00387d20;
        if (DAT_00387d20 < DAT_0033317f) {
          iVar6 = piVar8[1] + -3;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0x2be < iVar6) {
            iVar6 = 0x2be;
          }
          uVar4 = (&DAT_00387220)[iVar6];
          *(undefined1 *)(DAT_00387d20 + 1) = 0x12;
          *DAT_00387d20 = uVar4;
          (&DAT_00387220)[iVar6] = DAT_00387d20;
          DAT_00387d20[2] = iVar3;
          uVar7 = (uint)DAT_0019cba6;
          DAT_00387d20[3] = piVar8[-1] / (int)uVar7;
          DAT_00387d20[4] = *piVar8 / (int)uVar7;
          DAT_00387d20[5] = *piVar8;
          piVar9 = piVar8 + -1;
          puVar10 = DAT_00387d20 + 6;
        }
      }
    }
    in_DX = *(ushort *)(iVar3 + 2);
    piVar8 = piVar9;
  } while (in_DX != 0);
  DAT_00387d20 = puVar10;
  return;
}

/******************************************************************************
 * Function : sub_0a6504 (Ghidra: FUN_000a6504)
 * Prototype: void sub_0a6504(void);
 * Address  : 0xa6504 (Size: 1127 bytes)
 * Module   : engine3.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa6990
 * Callees  : 9 -> 0x915dc, 0xa5240, 0xa596c, 0xa5a74, 0xa5c28, 0xdbb70, 0xdbb84, 0x1295e0, 0x12f958
 ******************************************************************************/
void FUN_000a6504(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint auStack_a4 [34];
  undefined4 *local_1c;
  
  puVar3 = auStack_a4 + 2;
  iVar4 = 0x2bf;
  DAT_003d9578 = 0;
  local_1c = &DAT_00387d1c;
  do {
    piVar5 = *(int **)((int)puVar3 + 0x80);
switchD_000a6956_caseD_c:
    piVar5 = (int *)*piVar5;
    if (piVar5 != (int *)0x0) {
      do {
        switch((char)piVar5[1]) {
        case '\v':
          puVar3[-1] = 0xa6878;
          FUN_000dbb84();
          piVar5 = (int *)*piVar5;
          break;
        default:
          goto switchD_000a6956_caseD_c;
        case '\r':
          puVar3[-1] = (uint)*(byte *)(piVar5 + 6);
          puVar3[-2] = 0xa6915;
          FUN_000915dc();
          piVar5 = (int *)*piVar5;
          puVar3 = puVar3 + -1;
          break;
        case '\x0e':
          if (DAT_0019cba6 == 1) {
            puVar3[-1] = 0xa68d5;
            FUN_000a5240();
            piVar5 = (int *)*piVar5;
          }
          else {
            puVar3[-1] = 0xa68f3;
            FUN_000a5240();
            piVar5 = (int *)*piVar5;
          }
          break;
        case '\x0f':
          if (DAT_00388318 == 0) {
            DAT_00184290 = (&DAT_002f18e3)[*(int *)((int)piVar5 + 6)];
            DAT_00186fad = 5;
            iVar1 = *(int *)((int)piVar5 + 0x2a);
            if (iVar1 == 3) {
              DAT_00184290 = (&DAT_002f18e3)[*(int *)((int)piVar5 + 6)];
            }
            else if (iVar1 == 0) {
              DAT_00184290 = DAT_002f21eb;
            }
            else if (iVar1 == 1) {
              DAT_00184290 = DAT_002f21ef;
            }
            uVar2 = (uint)DAT_0019cba6;
            puVar3[0x1b] = (*(int *)((int)piVar5 + 10) >> 8) / (int)uVar2;
            puVar3[0x1c] = (*(int *)((int)piVar5 + 0xe) >> 8) / (int)uVar2;
            puVar3[0x1d] = *(undefined4 *)(&DAT_00191fe0 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[0x1e] = *(undefined4 *)(&DAT_00192020 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[0x1f] = *(undefined4 *)((int)piVar5 + 0x1a);
            puVar3[0x16] = (*(int *)((int)piVar5 + 10) + *(int *)((int)piVar5 + 0x12) >> 8) /
                           (int)uVar2;
            puVar3[0x17] = (*(int *)((int)piVar5 + 0xe) >> 8) / (int)uVar2;
            puVar3[0x18] = (uint)(&PTR_DAT_00191ff0)[*(byte *)((int)piVar5 + 5)];
            puVar3[0x19] = *(undefined4 *)(&DAT_00192030 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[0x1a] = *(undefined4 *)((int)piVar5 + 0x1e);
            puVar3[0xc] = (*(int *)((int)piVar5 + 10) + *(int *)((int)piVar5 + 0x12) >> 8) /
                          (int)uVar2;
            puVar3[0xd] = (*(int *)((int)piVar5 + 0xe) + *(int *)((int)piVar5 + 0x16) >> 8) /
                          (int)uVar2;
            puVar3[0xe] = (uint)(&PTR_DAT_00192000)[*(byte *)((int)piVar5 + 5)];
            puVar3[0xf] = (uint)(&PTR_DAT_00192040)[*(byte *)((int)piVar5 + 5)];
            puVar3[0x10] = *(undefined4 *)((int)piVar5 + 0x22);
            puVar3[0x11] = (*(int *)((int)piVar5 + 10) >> 8) / (int)uVar2;
            puVar3[0x12] = (*(int *)((int)piVar5 + 0xe) + *(int *)((int)piVar5 + 0x16) >> 8) /
                           (int)uVar2;
            puVar3[0x13] = *(undefined4 *)(&DAT_00192010 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[0x14] = (uint)(&PTR_DAT_00192050)[*(byte *)((int)piVar5 + 5)];
            puVar3[0x15] = *(undefined4 *)((int)piVar5 + 0x26);
            puVar3[-1] = 0xa684f;
            FUN_001295e0();
            puVar3[-1] = 0xa6860;
            FUN_001295e0();
            piVar5 = (int *)*piVar5;
          }
          else {
            iVar1 = *(int *)((int)piVar5 + 0x2a);
            if (iVar1 == 3) {
              *puVar3 = (&DAT_002f18e3)[*(int *)((int)piVar5 + 6)];
              puVar3[3] = *(int *)((int)piVar5 + 0x1a) >> 0x10;
              puVar3[4] = *(int *)((int)piVar5 + 0x1e) >> 0x10;
              puVar3[6] = *(int *)((int)piVar5 + 0x22) >> 0x10;
              puVar3[5] = *(int *)((int)piVar5 + 0x26) >> 0x10;
            }
            else if (iVar1 == 0) {
              *puVar3 = DAT_002f21eb;
              puVar3[3] = *(int *)((int)piVar5 + 0x1a) >> 0x10;
              puVar3[4] = *(int *)((int)piVar5 + 0x1e) >> 0x10;
              puVar3[6] = *(int *)((int)piVar5 + 0x22) >> 0x10;
              puVar3[5] = *(int *)((int)piVar5 + 0x26) >> 0x10;
            }
            else if (iVar1 == 1) {
              *puVar3 = DAT_002f21ef;
              puVar3[3] = *(int *)((int)piVar5 + 0x1a) >> 0x10;
              puVar3[4] = *(int *)((int)piVar5 + 0x1e) >> 0x10;
              puVar3[6] = *(int *)((int)piVar5 + 0x22) >> 0x10;
              puVar3[5] = *(int *)((int)piVar5 + 0x26) >> 0x10;
            }
            uVar2 = (uint)DAT_0019cba6;
            puVar3[1] = (*(int *)((int)piVar5 + 10) >> 8) / (int)uVar2;
            puVar3[2] = (*(int *)((int)piVar5 + 0xe) >> 8) / (int)uVar2;
            puVar3[7] = *(undefined4 *)(&DAT_00191fb0 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[8] = *(undefined4 *)(&DAT_00191fc0 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[9] = *(undefined4 *)(&DAT_00191fd0 + (uint)*(byte *)((int)piVar5 + 5) * 4);
            puVar3[10] = (*(int *)((int)piVar5 + 0x12) >> 8) / (int)uVar2 >> 5;
            puVar3[0xb] = (*(int *)((int)piVar5 + 0x16) >> 8) / (int)uVar2 >> 4;
            puVar3[-1] = 0xa66a5;
            FUN_0012f958();
            piVar5 = (int *)*piVar5;
          }
          break;
        case '\x10':
          puVar3[-1] = 0xa68a6;
          FUN_000a596c();
          piVar5 = (int *)*piVar5;
          break;
        case '\x11':
          puVar3[-1] = 0xa6927;
          FUN_000a5a74();
          piVar5 = (int *)*piVar5;
          break;
        case '\x12':
          puVar3[-1] = 0xa6890;
          FUN_000dbb70();
          piVar5 = (int *)*piVar5;
          break;
        case '\x13':
          puVar3[-1] = 0xa6939;
          FUN_000a5c28();
          piVar5 = (int *)*piVar5;
        }
        if (piVar5 == (int *)0x0) break;
      } while( true );
    }
    iVar4 = iVar4 + -1;
    *(int *)((int)puVar3 + 0x80) = *(int *)((int)puVar3 + 0x80) + -4;
    if (iVar4 < 0) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : dk_illegal_quadrant_0a6990 (Ghidra: FUN_000a6990)
 * Prototype: void dk_illegal_quadrant_0a6990(void);
 * Address  : 0xa6990 (Size: 10513 bytes)
 * Module   : engine3.cpp [direct_file_string_xref]
 * OrigLine : engine3.cpp:602 ("Illegal quadrant")
 * Naming   : String 'Illegal quadrant'
 * Callers  : 1 -> 0x87694
 * Callees  : 9 -> 0x780df, 0xa6504, 0xaa3a8, 0xdc150, 0xddaf0, 0xe6a10, 0xe6a6c, 0x12f940, 0x137e43
 * Strings  :
 *   - 0x16a349: "engine3.cpp"
 *   - 0x16a338: "Illegal quadrant"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a6990(void)

{
  int *piVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int in_EAX;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  int **ppiVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  int *local_3ac;
  uint local_3a8 [36];
  undefined2 local_318;
  undefined2 local_316;
  undefined2 local_314;
  int local_308;
  int local_2fc;
  ushort *local_2dc;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  int local_2b4;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_50;
  int local_44;
  int local_40;
  byte local_3c;
  byte local_38;
  undefined1 local_34;
  byte local_24;
  byte local_20;
  
  DAT_00388318 = (uint)(*(int *)(in_EAX + 0x17) == 0x10000);
  if (0x10000 < *(int *)(in_EAX + 0x17)) {
    *(undefined4 *)(in_EAX + 0x17) = 0x10000;
  }
  local_2d4 = DAT_003d983c;
  local_2d0 = DAT_003d9840;
  local_2cc = DAT_003d9844;
  iVar21 = (DAT_002f10ce >> 0x18) * 0x4ef;
  local_2c8 = DAT_003d9848;
  uVar20 = (uint)DAT_0019cba6;
  local_2c4 = *(ushort *)(&DAT_0019d510 + iVar21) / uVar20;
  local_2c0 = *(ushort *)(&DAT_0019d512 + iVar21) / uVar20;
  uVar4 = *(ushort *)(&DAT_0019d50e + iVar21);
  local_3a8[0] = 0xa6a9d;
  FUN_000e6a6c();
  local_3a8[0] = 0xa6aae;
  FUN_0012f940();
  local_3ac = (int *)0xa6ac0;
  local_3a8[0] = uVar4 / uVar20;
  FUN_00137e43();
  iVar21 = (int)(*(int *)((int)local_2dc + 7) + 0x100U & 0x7ff) >> 9;
  iVar18 = *(int *)((int)local_2dc + 0x17) * 0x20;
  local_24 = (byte)iVar21;
  iVar19 = iVar18 >> 0x1f;
  local_2b4 = (int)((iVar18 + iVar19 * -0x100) - (uint)(iVar19 << 7 < 0)) >> 8;
  local_2a0 = *(undefined4 *)(&DAT_00191f50 + iVar21 * 4);
  local_29c = *(undefined4 *)(&DAT_00191f60 + iVar21 * 4);
  local_298 = *(undefined4 *)(&DAT_00191f30 + iVar21 * 4);
  local_294 = *(undefined4 *)(&DAT_00191f40 + iVar21 * 4);
  iVar19 = (DAT_002f10ce >> 0x18) * 0x4ef;
  iVar21 = (int)((uint)*(ushort *)(&DAT_0019d50c + iVar19) << 0x10) / local_2b4;
  iVar18 = (int)((uint)*(ushort *)(&DAT_0019d50e + iVar19) << 0x10) / local_2b4;
  DAT_00379394 = (&DAT_0019d0f3)[iVar19];
  DAT_00379395 = '\x01' << (DAT_00379394 & 0x1f);
  DAT_00387d20 = &DAT_002f317f;
  local_3ac = (int *)0xa6bbe;
  FUN_000e6a10();
  iVar21 = iVar21 >> 1;
  iVar18 = iVar18 >> 1;
  local_3ac = (int *)0xa6bfc;
  FUN_000780df();
  if (3 < local_24) {
    local_3ac = (int *)0xa6fb3;
    FUN_000ddaf0(); /* LbErrorLog("engine3.cpp", line 602, "Illegal quadrant") */
    return;
  }
  iVar19 = DAT_002f10ce >> 0x18;
  switch(local_24) {
  case 0:
    local_2a8 = (int)((uint)*local_2dc - iVar21) >> 8;
    local_2a4 = (int)((uint)local_2dc[1] - iVar18) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)*local_2dc + local_2a8 * -0x100) * local_2b4) >> 8);
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)local_2dc[1] + local_2a4 * -0x100) * local_2b4) >> 8);
    break;
  case 1:
    iVar18 = (int)(iVar18 + (uint)*local_2dc) >> 8;
    local_2a4 = (int)((uint)local_2dc[1] - iVar21) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)local_2dc[1] + local_2a4 * -0x100) * local_2b4) >> 8);
    local_2a8 = iVar18 + -1;
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)((iVar18 * 0x100 - (uint)*local_2dc) * local_2b4) >> 8);
    break;
  case 2:
    local_2a8 = (int)(iVar21 + (uint)*local_2dc) >> 8;
    local_2a4 = (int)(iVar18 + (uint)local_2dc[1]) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(local_2b4 * ((local_2a8 + 1) * 0x100 - (uint)*local_2dc)) >> 8);
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)((local_2a4 * 0x100 - (uint)local_2dc[1]) * local_2b4) >> 8);
    local_2a4 = local_2a4 + -1;
    break;
  case 3:
    local_2a8 = (int)((uint)*local_2dc - iVar18) >> 8;
    local_2a4 = (int)(iVar21 + (uint)local_2dc[1]) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(((local_2a4 + 1) * 0x100 - (uint)local_2dc[1]) * local_2b4) >> 8);
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)*local_2dc + local_2a8 * -0x100) * local_2b4) >> 8);
  }
  uVar4 = *(ushort *)(&DAT_0019d510 + iVar19 * 0x4ef);
  iVar21 = (uint)DAT_0019cba6 * DAT_003d9864;
  local_3ac = (int *)0xa6cef;
  uVar33 = FUN_000dc150();
  local_2c0 = ((int)uVar33 - (int)((ulonglong)uVar33 >> 0x20)) * 0x100 - local_40;
  iVar18 = local_2b4 * 0x80 >> 0x1f;
  local_280 = (int)((local_2b4 * 0x80 + iVar18 * -0x100) - (uint)(iVar18 << 7 < 0)) >> 8;
  local_27c = (int)(((iVar21 - (uint)uVar4) * 0x100 - local_44) * 0x100) / local_2b4;
  iVar21 = 0;
  local_278 = local_2a8 * 0x100;
  local_50 = -1;
  local_274 = local_2a4 * 0x100;
  do {
    uVar22 = (uint)local_24;
    iVar18 = (int)(local_2c0 << 8) / local_2b4;
    uVar20 = local_27c * *(int *)(&DAT_00191f50 + uVar22 * 4) + local_2a8 * 0x100 +
             *(int *)(&DAT_00191f30 + uVar22 * 4) * iVar18;
    uVar14 = local_27c * *(int *)(&DAT_00191f60 + uVar22 * 4) + local_2a4 * 0x100 +
             iVar18 * *(int *)(&DAT_00191f40 + uVar22 * 4);
    local_2bc = uVar20 & 0xff;
    local_2b8 = uVar14 & 0xff;
    iVar31 = *(int *)(&DAT_00191f10 + uVar22 * 4) + ((int)uVar20 >> 8);
    iVar32 = *(int *)(&DAT_00191f20 + uVar22 * 4) + ((int)uVar14 >> 8);
    iVar18 = _DAT_00387da4;
    iVar19 = DAT_00387dd8;
    iVar26 = DAT_00387ddc;
    iVar17 = DAT_00387de0;
    iVar11 = DAT_00387de4;
    uVar20 = DAT_00387de8;
    uVar14 = DAT_00387dec;
    if ((((-1 < iVar31) && (iVar31 < 0xff)) && (-1 < iVar32)) && (iVar32 < 0xff)) {
      iVar13 = (iVar32 * 0x100 + iVar31) * 5;
      iVar18 = (int)&DAT_00279203 + iVar13;
      iVar19 = iVar31;
      iVar26 = iVar32;
      iVar17 = iVar31;
      iVar11 = iVar32;
      uVar20 = local_2bc;
      uVar14 = local_2b8;
      if (iVar21 != 0) {
        if (((uint)*(ushort *)
                    ((int)&DAT_0019e973 +
                    (*(uint *)((int)&DAT_00279203 + iVar13 + 1) & 0x7ff) * 0x18 + 3) &
            1 << ((byte)local_50 & 0x1f)) != 0) {
          _DAT_00387da4 = iVar18;
          DAT_00387de0 = iVar31;
          DAT_00387de4 = iVar32;
          DAT_00387de8 = local_2bc;
          DAT_00387dec = local_2b8;
        }
        iVar18 = _DAT_00387da4;
        iVar17 = DAT_00387de0;
        iVar11 = DAT_00387de4;
        uVar20 = DAT_00387de8;
        uVar14 = DAT_00387dec;
        if (((DAT_00388314 != '\0') && (iVar21 == 2)) ||
           ((iVar19 = DAT_00387dd8, iVar26 = DAT_00387ddc, DAT_00388314 == '\0' && (iVar21 == 5))))
        {
          iVar19 = DAT_00387dd8;
          iVar26 = DAT_00387ddc;
          DAT_00387df0 = iVar31;
          DAT_00387df4 = iVar32;
          DAT_00387df8 = local_2bc;
          DAT_00387dfc = local_2b8;
        }
      }
    }
    DAT_00387dec = uVar14;
    DAT_00387de8 = uVar20;
    DAT_00387de4 = iVar11;
    DAT_00387de0 = iVar17;
    DAT_00387ddc = iVar26;
    DAT_00387dd8 = iVar19;
    _DAT_00387da4 = iVar18;
    local_50 = local_50 + 1;
    iVar21 = iVar21 + 1;
    local_2c0 = local_2c0 + local_280;
  } while (iVar21 < 8);
  ppiVar30 = (int **)local_3a8;
  if (DAT_00387e02._2_1_ == '\0') goto LAB_000a7ab4;
  local_38 = (byte)((uint)local_2b4 >> 8);
  local_20 = local_38;
  ppiVar30 = (int **)local_3a8;
  if (DAT_00387e02._2_1_ == '\0') goto LAB_000a7ab4;
  local_34 = (undefined1)((int)(*(int *)((int)local_2dc + 7) + 0x100U & 0x7ff) >> 9);
  local_318 = DAT_00387e07;
  local_316 = DAT_00387e0b;
  local_3ac = &local_264;
  local_314 = 0x500;
  ppiVar30 = &local_3ac;
  FUN_000aa3a8();
  uVar20 = (uint)local_3c;
  iVar21 = ((int)(uVar20 * 0x80) >> 8) * (5 - DAT_00387e17);
  local_264 = uVar20 * 3;
  if (local_38 < 2) {
    if (local_38 == 1) goto LAB_000a72ca;
  }
  else {
    iVar18 = local_270 + uVar20 * -3;
    if (local_38 < 3) {
      local_270 = iVar18;
LAB_000a72ca:
      local_26c = local_26c + uVar20 * -3;
      local_268 = local_268 + local_264;
    }
    else if (local_38 == 3) {
      local_270 = iVar18;
    }
  }
  local_268 = local_268 - local_24 / 2;
  iVar18 = 0;
  do {
    iVar19 = DAT_00387e02;
    puVar29 = DAT_00387d20;
    local_25c = (iVar18 + 1) * (uint)local_24 + local_270;
    local_254 = DAT_00387e02 >> 0x18;
    iVar26 = local_254;
    local_260 = local_26c;
    local_258 = local_26c;
    if (local_268 < 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = local_268;
      if (0x2be < local_268) {
        iVar17 = 0x2be;
      }
    }
    uVar16 = (&DAT_00387220)[iVar17];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    uVar14 = (uint)DAT_0019cba6;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar17] = DAT_00387d20;
    DAT_00387d20[2] = (int)((uint)local_24 * iVar18 + local_270) / (int)uVar14;
    DAT_00387d20[3] = local_26c / (int)uVar14;
    DAT_00387d20[4] = local_25c / (int)uVar14;
    DAT_00387d20[5] = local_26c / (int)uVar14;
    local_254._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 6) = (undefined1)local_254;
    iVar19 = DAT_00387e02;
    iVar11 = local_268 + uVar20 * -3;
    local_250 = iVar11;
    local_240 = DAT_00387e02 >> 0x18;
    iVar17 = local_240;
    local_308 = local_26c + local_264;
    local_248 = (iVar18 + 1) * (uint)local_24 + local_270;
    local_24c = (uint)local_24 * iVar18 + local_270;
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    else if (0x2be < iVar11) {
      iVar11 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar11];
    *(undefined1 *)(DAT_00387d20 + 8) = 0xd;
    DAT_00387d20[7] = uVar16;
    (&DAT_00387220)[iVar11] = DAT_00387d20 + 7;
    uVar14 = (uint)DAT_0019cba6;
    DAT_00387d20[9] = local_24c / (int)uVar14;
    DAT_00387d20[10] = local_308 / (int)uVar14;
    DAT_00387d20[0xb] = local_248 / (int)uVar14;
    piVar1 = DAT_00387d20 + 0xc;
    DAT_00387d20 = DAT_00387d20 + 0xe;
    *piVar1 = local_308 / (int)uVar14;
    local_240._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(puVar29 + 0xd) = (undefined1)local_240;
    iVar19 = DAT_00387e02;
    puVar29 = DAT_00387d20;
    local_2fc = DAT_00387e02 >> 0x18;
    iVar11 = local_2fc;
    local_234 = local_26c + iVar21;
    local_238 = (iVar18 + 1) * (uint)local_24 + local_270;
    local_23c = (uint)local_24 * iVar18 + local_270;
    if (local_268 < 0) {
      iVar31 = 0;
    }
    else {
      iVar31 = local_268;
      if (0x2be < local_268) {
        iVar31 = 0x2be;
      }
    }
    uVar16 = (&DAT_00387220)[iVar31];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar31] = DAT_00387d20;
    uVar14 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_23c / (int)uVar14;
    DAT_00387d20[3] = local_234 / (int)uVar14;
    DAT_00387d20[4] = local_238 / (int)uVar14;
    piVar1 = DAT_00387d20 + 5;
    DAT_00387d20 = DAT_00387d20 + 7;
    *piVar1 = local_234 / (int)uVar14;
    local_2fc._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(puVar29 + 6) = (undefined1)local_2fc;
    iVar19 = DAT_00387e02;
    iVar32 = local_268 + uVar20 * -3;
    local_230 = iVar32;
    local_220 = DAT_00387e02 >> 0x18;
    iVar31 = local_220;
    local_224 = local_26c + local_264 + iVar21;
    local_228 = (iVar18 + 1) * (uint)local_24 + local_270;
    local_22c = (uint)local_24 * iVar18 + local_270;
    if (iVar32 < 0) {
      iVar32 = 0;
    }
    else if (0x2be < iVar32) {
      iVar32 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar32];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar32] = DAT_00387d20;
    uVar14 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_22c / (int)uVar14;
    DAT_00387d20[3] = local_224 / (int)uVar14;
    DAT_00387d20[4] = local_228 / (int)uVar14;
    iVar18 = iVar18 + 1;
    DAT_00387d20[5] = local_224 / (int)uVar14;
    local_220._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    puVar29 = DAT_00387d20 + 6;
    DAT_00387d20 = DAT_00387d20 + 7;
    *(undefined1 *)puVar29 = (undefined1)local_220;
  } while (iVar18 < 3);
  iVar18 = 0;
  do {
    iVar19 = DAT_00387e02;
    iVar13 = iVar18 * (uint)local_24;
    local_21c = local_268 - iVar13;
    local_20c = DAT_00387e02 >> 0x18;
    iVar32 = local_20c;
    local_210 = (uint)local_24 * (iVar18 + 1) + local_26c;
    local_218 = local_270;
    local_214 = local_270;
    if (local_21c < 0) {
      iVar23 = 0;
    }
    else {
      iVar23 = local_21c;
      if (0x2be < local_21c) {
        iVar23 = 0x2be;
      }
    }
    uVar16 = (&DAT_00387220)[iVar23];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar23] = DAT_00387d20;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_270 / (int)uVar20;
    DAT_00387d20[3] = (local_26c + iVar13) / (int)uVar20;
    DAT_00387d20[4] = local_270 / (int)uVar20;
    DAT_00387d20[5] = local_210 / (int)uVar20;
    local_20c._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 6) = (undefined1)local_20c;
    iVar19 = DAT_00387e02;
    local_204 = iVar18 * (uint)local_24;
    iVar23 = local_268 - local_204;
    local_208 = iVar23;
    local_1f8 = DAT_00387e02 >> 0x18;
    iVar13 = local_1f8;
    local_1fc = local_26c + (uint)local_24 * (iVar18 + 1);
    local_200 = local_270 + local_264;
    local_204 = local_204 + local_26c;
    if (iVar23 < 0) {
      iVar23 = 0;
    }
    else if (0x2be < iVar23) {
      iVar23 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar23];
    *(undefined1 *)(DAT_00387d20 + 8) = 0xd;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[7] = uVar16;
    (&DAT_00387220)[iVar23] = DAT_00387d20 + 7;
    DAT_00387d20[9] = local_200 / (int)uVar20;
    DAT_00387d20[10] = local_204 / (int)uVar20;
    DAT_00387d20[0xb] = local_200 / (int)uVar20;
    DAT_00387d20[0xc] = local_1fc / (int)uVar20;
    local_1f8._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 0xd) = (undefined1)local_1f8;
    iVar19 = DAT_00387e02;
    iVar12 = iVar18 * (uint)local_24;
    iVar24 = local_268 - iVar12;
    local_1f4 = iVar24;
    local_1e4 = DAT_00387e02 >> 0x18;
    iVar23 = local_1e4;
    local_1ec = iVar12 + local_26c + iVar21;
    local_1f0 = local_270;
    local_1e8 = local_270;
    if (iVar24 < 0) {
      iVar24 = 0;
    }
    else if (0x2be < iVar24) {
      iVar24 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar24];
    *(undefined1 *)(DAT_00387d20 + 0xf) = 0xd;
    DAT_00387d20[0xe] = uVar16;
    (&DAT_00387220)[iVar24] = DAT_00387d20 + 0xe;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[0x10] = local_270 / (int)uVar20;
    DAT_00387d20[0x11] = local_1ec / (int)uVar20;
    DAT_00387d20[0x12] = local_270 / (int)uVar20;
    DAT_00387d20[0x13] = (int)(local_26c + (uint)local_24 * (iVar18 + 1) + iVar21) / (int)uVar20;
    local_1e4._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 0x14) = (undefined1)local_1e4;
    iVar19 = DAT_00387e02;
    iVar24 = iVar18 * (uint)local_24;
    iVar25 = local_268 - iVar24;
    local_1e0 = iVar25;
    local_1d4 = iVar21 + (uint)local_24 * (iVar18 + 1) + local_26c;
    local_1dc = local_270 + local_264;
    local_1d0 = DAT_00387e02 >> 0x18;
    iVar12 = local_1d0;
    local_1d8 = iVar24 + local_26c + iVar21;
    if (iVar25 < 0) {
      iVar25 = 0;
    }
    else if (0x2be < iVar25) {
      iVar25 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar25];
    *(undefined1 *)(DAT_00387d20 + 0x16) = 0xd;
    DAT_00387d20[0x15] = uVar16;
    (&DAT_00387220)[iVar25] = DAT_00387d20 + 0x15;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[0x17] = local_1dc / (int)uVar20;
    DAT_00387d20[0x18] = local_1d8 / (int)uVar20;
    DAT_00387d20[0x19] = local_1dc / (int)uVar20;
    iVar18 = iVar18 + 1;
    DAT_00387d20[0x1a] = local_1d4 / (int)uVar20;
    local_1d0._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    puVar29 = DAT_00387d20 + 0x1b;
    DAT_00387d20 = DAT_00387d20 + 0x1c;
    *(undefined1 *)puVar29 = (undefined1)local_1d0;
    local_2fc = iVar11;
    local_254 = iVar26;
    local_240 = iVar17;
    local_220 = iVar31;
    local_20c = iVar32;
    local_1f8 = iVar13;
    local_1e4 = iVar23;
    local_1d0 = iVar12;
  } while (iVar18 < 3);
LAB_000a7ab4:
  DAT_00387e02._0_3_ = (uint3)(ushort)DAT_00387e02;
  iVar26 = (DAT_002f10ce >> 0x18) * 0x4ef;
  iVar19 = (int)(((uint)*(ushort *)(&DAT_0019d50e + iVar26) * 0x100 +
                 *(int *)((int)ppiVar30 + 0xf4) * 8) - *(int *)((int)ppiVar30 + 0x368)) /
           *(int *)((int)ppiVar30 + 0xf4);
  iVar21 = *(int *)((int)ppiVar30 + 0x100);
  iVar18 = *(int *)((int)ppiVar30 + 0x104);
  *(int *)((int)ppiVar30 + 0x368) =
       *(int *)((int)ppiVar30 + 0x368) + *(int *)((int)ppiVar30 + 0xf4) * iVar19;
  *(int *)((int)ppiVar30 + 0x100) = iVar21 + *(int *)((int)ppiVar30 + 0x110) * iVar19;
  *(int *)((int)ppiVar30 + 0xf8) = iVar21 + *(int *)((int)ppiVar30 + 0x110) * iVar19;
  uVar4 = *(ushort *)(&DAT_0019d50c + iVar26);
  *(int *)((int)ppiVar30 + 0x104) = iVar18 + iVar19 * *(int *)((int)ppiVar30 + 0x114);
  *(int *)((int)ppiVar30 + 0xfc) = iVar18 + iVar19 * *(int *)((int)ppiVar30 + 0x114);
  *(uint *)((int)ppiVar30 + 0x124) = (uint)uVar4 << 8;
  *(int *)((int)ppiVar30 + 0x118) = *(int *)((int)ppiVar30 + 0x364);
  if (*(int *)((int)ppiVar30 + 0x364) < *(int *)((int)ppiVar30 + 0x124)) {
    *(byte *)((int)ppiVar30 + 0x380) = *(char *)((int)ppiVar30 + 900) + 2U & 3;
    iVar21 = *(int *)((int)ppiVar30 + 0xf4) * 0x80 >> 0x1f;
    *(int *)((int)ppiVar30 + 200) =
         (int)((*(int *)((int)ppiVar30 + 0xf4) * 0x80 + iVar21 * -0x100) - (uint)(iVar21 << 7 < 0))
         >> 8;
    do {
      *(uint *)((int)ppiVar30 + 0x1e0) =
           (uint)*(ushort *)(&DAT_0019d50e + (DAT_002f10ce >> 0x18) * 0x4ef) << 8;
      if (*(int *)((int)ppiVar30 + 0x110) == 0) {
        *(undefined4 *)((int)ppiVar30 + 0xfc) = *(undefined4 *)((int)ppiVar30 + 0x104);
      }
      else {
        *(undefined4 *)((int)ppiVar30 + 0xf8) = *(undefined4 *)((int)ppiVar30 + 0x100);
      }
      *(undefined4 *)((int)ppiVar30 + 0x11c) = *(undefined4 *)((int)ppiVar30 + 0x368);
      while (iVar21 = (int)ppiVar30[0x47], -(int)ppiVar30[0x3d] < iVar21) {
        iVar18 = (int)ppiVar30[0x3e];
        if (((0 < iVar18) && (iVar18 < 0xff)) &&
           ((iVar19 = (int)ppiVar30[0x3f], 0 < iVar19 && (iVar19 < 0xff)))) {
          iVar18 = iVar19 * 0x100 + iVar18;
          iVar19 = iVar18 * 5;
          uVar4 = *(ushort *)((int)&DAT_00279203 + iVar19 + 1);
          ppiVar30[0x48] = (int *)((int)&DAT_00279203 + iVar19);
          if ((uVar4 & 0x7ff) != 0) {
            iVar26 = (DAT_002f10ce >> 0x18) * 0x4ef;
            ppiVar30[0x79] = (int *)((int)&DAT_00279203 + iVar19);
            ppiVar30[0x7a] = ppiVar30[0x3e];
            ppiVar30[0x7b] = ppiVar30[0x3f];
            ppiVar30[0x7c] = ppiVar30[0x46];
            *(undefined1 *)(ppiVar30 + 0xde) = *(undefined1 *)(ppiVar30 + 0xe1);
            ppiVar30[0x7d] = (int *)(ppiVar30 + 0x78);
            *(undefined1 *)(ppiVar30 + 0xdf) = *(undefined1 *)(ppiVar30 + 0xe0);
            ppiVar30[0x80] = ppiVar30[0x32];
            ppiVar30[0x81] = ppiVar30[0x3d];
            ppiVar30[0x82] = ppiVar30[0x3d];
            uVar4 = *(ushort *)(&DAT_0019d50e + iVar26);
            ppiVar30[0xbd] = (int *)(iVar21 >> 8);
            uVar5 = (&DAT_001e3203)[iVar18];
            bVar3 = (&DAT_0019d0f3)[iVar26];
            iVar26 = (uVar4 + 0x40) - (int)ppiVar30[0xbd];
            ppiVar30[0x84] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + -0x101) * 5 + 1) >> 0x1c);
            ppiVar30[0x85] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + -0x100) * 5 + 1) >> 0x1c);
            uVar20 = *(uint *)((int)&DAT_00279203 + iVar19 + 1);
            ppiVar30[0x86] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + -0xff) * 5 + 1) >> 0x1c);
            ppiVar30[0x88] = (int *)(uVar20 >> 0x1c);
            ppiVar30[0x89] = (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + 1) * 5 + 1) >> 0x1c);
            ppiVar30[0x83] = (int *)(1 << (bVar3 & 0x1f));
            uVar20 = *(uint *)((int)&DAT_00279203 + (iVar18 + -1) * 5 + 1);
            ppiVar30[0x8a] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + 0xff) * 5 + 1) >> 0x1c);
            ppiVar30[0x87] = (int *)(uVar20 >> 0x1c);
            uVar20 = *(uint *)((int)&DAT_00279203 + (iVar18 + 0x100) * 5 + 1);
            ppiVar30[0x8c] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + 0x101) * 5 + 1) >> 0x1c);
            ppiVar30[0x8b] = (int *)(uVar20 >> 0x1c);
            uVar20 = 0;
            if (((uint)ppiVar30[0x84] & (uint)ppiVar30[0x85] & (uint)ppiVar30[0x87] &
                 (uint)ppiVar30[0x88] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)uVar5;
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7a] * 4 + (int)ppiVar30[0x7b] + (int)ppiVar30[0x7b] * 0x10 &
                      0xff);
            ppiVar30[0x8d] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x8d];
              }
              ppiVar30[0xbd] = (int *)(uVar14 << 8);
              iVar19 = (-(uint)*(byte *)(ppiVar30 + 0xde) & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(int **)((int)ppiVar30 + iVar19) = ppiVar30[0xbd];
            } while (iVar18 != 0x24);
            uVar20 = 0;
            if (((uint)ppiVar30[0x85] & (uint)ppiVar30[0x86] & (uint)ppiVar30[0x88] &
                 (uint)ppiVar30[0x89] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)(ushort)(&DAT_001e3205)
                                     [(int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]];
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7b] * 0x10 + (int)ppiVar30[0x7b] +
                       (int)ppiVar30[0x7a] * 4 + 4 & 0xff);
            ppiVar30[0x8e] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x8e];
              }
              ppiVar30[0xbd] = (int *)(uVar14 << 8);
              iVar19 = (1 - *(byte *)(ppiVar30 + 0xde) & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(int **)((int)ppiVar30 + iVar19) = ppiVar30[0xbd];
            } while (iVar18 != 0x24);
            uVar20 = 0;
            if (((uint)ppiVar30[0x87] & (uint)ppiVar30[0x88] & (uint)ppiVar30[0x8a] &
                 (uint)ppiVar30[0x8b] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)*(ushort *)
                              (&DAT_001e3403 +
                              ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 2);
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7b] * 0x10 + (int)ppiVar30[0x7b] + 0x11 +
                       (int)ppiVar30[0x7a] * 4 & 0xff);
            ppiVar30[0x8f] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x8f];
              }
              ppiVar30[0xbd] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
              iVar19 = (3U - (int)ppiVar30[0xbd] & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(uint *)((int)ppiVar30 + iVar19) = uVar14 << 8;
            } while (iVar18 != 0x24);
            uVar20 = 0;
            if (((uint)ppiVar30[0x88] & (uint)ppiVar30[0x89] & (uint)ppiVar30[0x8b] &
                 (uint)ppiVar30[0x8c] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)*(ushort *)
                              (&DAT_001e3405 +
                              ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 2);
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7a] * 4 +
                       (int)ppiVar30[0x7b] + (int)ppiVar30[0x7b] * 0x10 + 0x15 & 0xff);
            ppiVar30[0x90] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x90];
              }
              ppiVar30[0xbd] = (int *)(uVar14 << 8);
              iVar19 = (2 - *(byte *)(ppiVar30 + 0xde) & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(int **)((int)ppiVar30 + iVar19) = ppiVar30[0xbd];
            } while (iVar18 != 0x24);
            uVar20 = DAT_002e6f23;
            if ((*(uint *)((int)ppiVar30[0x79] + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
              uVar20 = *(uint *)((int)ppiVar30[0x79] + 1) & 0x7ff;
            }
            iVar19 = uVar20 * 0x18;
            iVar18 = *ppiVar30[0x7d];
            ppiVar30[0x7e] = &DAT_0019e973 + uVar20 * 6;
            if (((iVar21 < iVar18) && (*(short *)((int)&DAT_0019e977 + iVar19 + 1) != 0)) &&
               (*(short *)(&DAT_0019e97b + uVar20 * 6) == 0)) {
              *ppiVar30[0x7d] = iVar21;
              if ((*(byte *)((int)&DAT_00279203 +
                            ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 5) & 4) == 0) {
                uVar16 = ppiVar30[0x12];
                ppiVar30[0x9b] = (int *)iVar21;
                iVar18 = *(int *)((int)&DAT_0019e973 + iVar19 + 3);
                ppiVar30[0x9a] = ppiVar30[0x7c];
                ppiVar30[0x9f] = (int *)0x0;
                ppiVar30[0x9e] = (int *)(iVar18 >> 0x10);
                ppiVar30[0x9c] = ppiVar30[0x82];
                ppiVar30[0x4e] = *ppiVar30;
                ppiVar30[0x9d] = ppiVar30[0x81];
                ppiVar30[0x26] = ppiVar30[9];
                ppiVar30[0x27] = ppiVar30[0x1b];
                if (iVar26 < 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = iVar26;
                  if (0x2be < iVar26) {
                    iVar18 = 0x2be;
                  }
                }
                uVar6 = (&DAT_00387220)[iVar18];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *DAT_00387d20 = uVar6;
                (&DAT_00387220)[iVar18] = DAT_00387d20;
                *(undefined4 *)((int)DAT_00387d20 + 0x22) = uVar16;
                uVar16 = ppiVar30[0x9e];
                *(undefined4 *)((int)DAT_00387d20 + 0x2a) = 3;
                *(undefined4 *)((int)DAT_00387d20 + 6) = uVar16;
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0x9a];
                *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0x9b];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0x9c];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x9d];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0x9f);
                *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x4e];
                *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0x26];
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x26);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0x27];
              }
              else {
                iVar18 = *(int *)((int)&DAT_0019e973 + iVar19 + 3);
                ppiVar30[0x91] = ppiVar30[0x7c];
                ppiVar30[0x94] = (int *)(iVar18 >> 0x10);
                ppiVar30[0x92] = ppiVar30[0x82];
                ppiVar30[0x95] = (int *)0x0;
                ppiVar30[0x93] = ppiVar30[0x81];
                ppiVar30[0x99] = (int *)0x0;
                ppiVar30[0x96] = (int *)0x200000;
                ppiVar30[0x97] = (int *)0x200000;
                ppiVar30[0x98] = (int *)0x200000;
                if (iVar26 < 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = iVar26;
                  if (0x2be < iVar26) {
                    iVar18 = 0x2be;
                  }
                }
                uVar16 = (&DAT_00387220)[iVar18];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *DAT_00387d20 = uVar16;
                (&DAT_00387220)[iVar18] = DAT_00387d20;
                *(int *)((int)DAT_00387d20 + 0xe) = iVar21;
                uVar16 = ppiVar30[0x94];
                *(undefined4 *)((int)DAT_00387d20 + 0x26) = 0x200000;
                *(undefined4 *)((int)DAT_00387d20 + 6) = uVar16;
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0x91];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0x92];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x93];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0x95);
                *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x96];
                *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0x97];
                *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0x98];
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0x99];
              }
            }
            iVar19 = 0;
            ppiVar30[0x7f] = (int *)0x0;
            ppiVar30[0xd7] = ppiVar30[0x7e];
            iVar21 = iVar21 + (int)ppiVar30[0x81];
            iVar18 = 0;
            do {
              if (*(short *)((int)ppiVar30[0xd7] + 8) == 0) break;
              iVar21 = iVar21 - (int)ppiVar30[0x80];
              ppiVar30[0x7f] =
                   (int *)((int)&DAT_001aa973 + (*(int *)((int)ppiVar30[0xd7] + 6) >> 0x10) * 0x12);
              if (iVar21 < *ppiVar30[0x7d]) {
                *ppiVar30[0x7d] = iVar21;
                uVar4 = *(ushort *)((uint)*(byte *)(ppiVar30 + 0xdf) * 2 + (int)ppiVar30[0x7f]);
                ppiVar30[0xa1] = (int *)iVar21;
                ppiVar30[0xa0] = ppiVar30[0x7c];
                ppiVar30[0xa4] = (int *)(uint)uVar4;
                ppiVar30[0xa2] = ppiVar30[0x82];
                ppiVar30[0xa5] = (int *)0x0;
                uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x70);
                ppiVar30[0xa3] = ppiVar30[0x80];
                ppiVar30[0xa6] = (int *)uVar16;
                ppiVar30[0xa7] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x4c);
                uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x48);
                ppiVar30[0xaa] = (int *)0x3;
                ppiVar30[0xa8] = (int *)uVar16;
                ppiVar30[0xa9] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x6c);
                if (iVar26 < 0) {
                  iVar17 = 0;
                }
                else {
                  iVar17 = iVar26;
                  if (0x2be < iVar26) {
                    iVar17 = 0x2be;
                  }
                }
                ppiVar30[0xbd] = (int *)(iVar17 * 4);
                *DAT_00387d20 = (&DAT_00387220)[iVar17];
                iVar17 = (int)ppiVar30[0xbd];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *(undefined4 **)((int)&DAT_00387220 + iVar17) = DAT_00387d20;
                *(int **)((int)DAT_00387d20 + 6) = ppiVar30[0xa4];
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xa0];
                *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xa1];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xa2];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0xa3];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xa5);
                *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0xa6];
                *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xa7];
                *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xa8];
                *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xa9];
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0xaa];
              }
              iVar19 = iVar19 + 4;
              iVar18 = iVar18 + 1;
              ppiVar30[0xd7] = (int *)((int)ppiVar30[0xd7] + 2);
            } while (iVar18 < 8);
            if (ppiVar30[0x7f] != (int *)0x0) {
              if (iVar21 - (int)ppiVar30[0x81] < *ppiVar30[0x7d]) {
                *ppiVar30[0x7d] = iVar21 - (int)ppiVar30[0x81];
                bVar3 = *(byte *)((int)&DAT_00279203 +
                                 ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 5);
                uVar16 = *ppiVar30[0x7d];
                if ((bVar3 & 0x84) == 0) {
                  ppiVar30[0xdb] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                  ppiVar30[0xbd] = (int *)(uint)*(ushort *)((int)ppiVar30[0x7f] + 8);
                  ppiVar30[0x2a] = ppiVar30[0x7c];
                  ppiVar30[0xbf] = ppiVar30[0x82];
                  ppiVar30[0xc0] = ppiVar30[0x81];
                  ppiVar30[0x2b] = ppiVar30[0xbd];
                  ppiVar30[0xbe] = (int *)uVar16;
                  ppiVar30[0xc1] = ppiVar30[0xdb];
                  ppiVar30[0x2d] = ppiVar30[iVar18];
                  uVar16 = ppiVar30[iVar18 + 9];
                  ppiVar30[0x2e] = (int *)0x3;
                  ppiVar30[0xc2] = (int *)uVar16;
                  uVar16 = ppiVar30[iVar18 + 0x1b];
                  ppiVar30[0xc3] = ppiVar30[iVar18 + 0x12];
                  if (iVar26 < 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = iVar26;
                    if (0x2be < iVar26) {
                      iVar19 = 0x2be;
                    }
                  }
                  uVar6 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *DAT_00387d20 = uVar6;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(int **)((int)DAT_00387d20 + 6) = ppiVar30[0x2b];
                  *(undefined4 *)((int)DAT_00387d20 + 0x26) = uVar16;
                  *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0x2a];
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xbe];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xbf];
                  *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0xc0];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xc1);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x2d];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xc2];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xc3];
                  uVar16 = ppiVar30[0x2e];
                }
                else if ((bVar3 & 0x80) == 0) {
                  ppiVar30[0xb6] = (int *)uVar16;
                  uVar4 = *(ushort *)((int)ppiVar30[0x7f] + 8);
                  ppiVar30[0xb7] = ppiVar30[0x82];
                  ppiVar30[0xb8] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                  ppiVar30[0xb5] = ppiVar30[0x7c];
                  ppiVar30[0x28] = ppiVar30[0x81];
                  ppiVar30[0x5a] = (int *)0x200000;
                  ppiVar30[0xb9] = (int *)0x200000;
                  ppiVar30[0xba] = (int *)0x200000;
                  ppiVar30[0xbb] = (int *)0x200000;
                  ppiVar30[0xbc] = (int *)0x0;
                  if (iVar26 < 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = iVar26;
                    if (0x2be < iVar26) {
                      iVar19 = 0x2be;
                    }
                  }
                  uVar16 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *DAT_00387d20 = uVar16;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  uVar16 = ppiVar30[0xb5];
                  *(uint *)((int)DAT_00387d20 + 6) = (uint)uVar4;
                  *(undefined4 *)((int)DAT_00387d20 + 10) = uVar16;
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xb6];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xb7];
                  *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x28];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xb8);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x5a];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xb9];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xba];
                  *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xbb];
                  uVar16 = ppiVar30[0xbc];
                }
                else {
                  ppiVar30[0xac] = (int *)uVar16;
                  uVar4 = *(ushort *)((int)ppiVar30[0x7f] + 8);
                  ppiVar30[0xad] = ppiVar30[0x82];
                  ppiVar30[0xae] = (int *)(uint)uVar4;
                  ppiVar30[0xaf] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                  ppiVar30[0xab] = ppiVar30[0x7c];
                  uVar16 = ppiVar30[0x81];
                  ppiVar30[0xb0] = (int *)0x200000;
                  ppiVar30[0xb1] = (int *)0x200000;
                  ppiVar30[0xb2] = (int *)0x200000;
                  ppiVar30[0xb3] = (int *)0x200000;
                  ppiVar30[0xb4] = (int *)0x1;
                  if (iVar26 < 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = iVar26;
                    if (0x2be < iVar26) {
                      iVar19 = 0x2be;
                    }
                  }
                  uVar6 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *DAT_00387d20 = uVar6;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(int **)((int)DAT_00387d20 + 6) = ppiVar30[0xae];
                  *(undefined4 *)((int)DAT_00387d20 + 0x16) = uVar16;
                  *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xab];
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xac];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xad];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xaf);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0xb0];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xb1];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xb2];
                  *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xb3];
                  uVar16 = ppiVar30[0xb4];
                }
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = uVar16;
              }
            }
            if (((*(byte *)((int)ppiVar30[0x7e] + 2) & 0xe) != 0) &&
               (1 << ((byte)iVar18 & 0x1f) < (int)(uint)*(ushort *)((int)ppiVar30[0x7e] + 3))) {
              for (iVar19 = iVar18 * 2 + (int)ppiVar30[0x7e];
                  (iVar18 < 8 && (*(short *)(iVar19 + 8) == 0)); iVar19 = iVar19 + 2) {
                iVar18 = iVar18 + 1;
                iVar21 = iVar21 - (int)ppiVar30[0x80];
              }
              iVar19 = iVar18 * 4;
              ppiVar30[0xd8] = (int *)(iVar18 * 2 + (int)ppiVar30[0x7e]);
              while ((iVar18 < 8 && (*(short *)((int)ppiVar30[0xd8] + 8) != 0))) {
                iVar21 = iVar21 - (int)ppiVar30[0x80];
                ppiVar30[0x7f] =
                     (int *)((int)&DAT_001aa973 + (*(int *)((int)ppiVar30[0xd8] + 6) >> 0x10) * 0x12
                            );
                if (iVar21 < *ppiVar30[0x7d]) {
                  uVar4 = *(ushort *)((uint)*(byte *)(ppiVar30 + 0xdf) * 2 + (int)ppiVar30[0x7f]);
                  ppiVar30[0x2f] = (int *)iVar21;
                  ppiVar30[0xc4] = ppiVar30[0x7c];
                  ppiVar30[199] = (int *)(uint)uVar4;
                  ppiVar30[0xc5] = ppiVar30[0x82];
                  ppiVar30[200] = (int *)0x0;
                  uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x70);
                  ppiVar30[0xc6] = ppiVar30[0x80];
                  ppiVar30[0xc9] = (int *)uVar16;
                  ppiVar30[0xca] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x4c);
                  uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x48);
                  ppiVar30[0xcd] = (int *)0x3;
                  ppiVar30[0xcb] = (int *)uVar16;
                  ppiVar30[0xcc] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x6c);
                  if (iVar26 < 0) {
                    iVar17 = 0;
                  }
                  else {
                    iVar17 = iVar26;
                    if (0x2be < iVar26) {
                      iVar17 = 0x2be;
                    }
                  }
                  ppiVar30[0xbd] = (int *)(iVar17 * 4);
                  *DAT_00387d20 = (&DAT_00387220)[iVar17];
                  iVar17 = (int)ppiVar30[0xbd];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *(undefined4 **)((int)&DAT_00387220 + iVar17) = DAT_00387d20;
                  *(int **)((int)DAT_00387d20 + 6) = ppiVar30[199];
                  *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xc4];
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0x2f];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xc5];
                  *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0xc6];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 200);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0xc9];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xca];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xcb];
                  *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xcc];
                  puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                  DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                  *puVar29 = ppiVar30[0xcd];
                }
                iVar19 = iVar19 + 4;
                iVar18 = iVar18 + 1;
                ppiVar30[0xd8] = (int *)((int)ppiVar30[0xd8] + 2);
              }
              if ((ppiVar30[0x7f] != (int *)0x0) && (iVar21 - (int)ppiVar30[0x81] < *ppiVar30[0x7d])
                 ) {
                ppiVar30[0x30] = (int *)(iVar21 - (int)ppiVar30[0x81]);
                uVar16 = ppiVar30[iVar18 + 9];
                uVar4 = *(ushort *)((int)ppiVar30[0x7f] + 8);
                ppiVar30[0xcf] = ppiVar30[0x82];
                ppiVar30[0xd0] = (int *)(uint)uVar4;
                ppiVar30[0xd1] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                ppiVar30[0xce] = ppiVar30[0x7c];
                uVar6 = ppiVar30[iVar18];
                ppiVar30[0x31] = ppiVar30[0x81];
                ppiVar30[0xd2] = (int *)uVar6;
                uVar6 = ppiVar30[iVar18 + 0x1b];
                uVar7 = ppiVar30[iVar18 + 0x12];
                if (iVar26 < 0) {
                  iVar26 = 0;
                }
                else if (0x2be < iVar26) {
                  iVar26 = 0x2be;
                }
                uVar8 = (&DAT_00387220)[iVar26];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar26] = DAT_00387d20;
                *(undefined4 *)((int)DAT_00387d20 + 0x1e) = uVar16;
                *(undefined4 *)((int)DAT_00387d20 + 0x22) = uVar7;
                *(undefined4 *)((int)DAT_00387d20 + 0x26) = uVar6;
                uVar16 = ppiVar30[0xd0];
                *(undefined4 *)((int)DAT_00387d20 + 0x2a) = 3;
                *(undefined4 *)((int)DAT_00387d20 + 6) = uVar16;
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xce];
                *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0x30];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xcf];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x31];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xd1);
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x1a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0xd2];
              }
            }
            if (((*(uint *)((int)ppiVar30[0x48] + 1) & 0x3ff800) != 0) &&
               ((*(uint *)((int)ppiVar30[0x48] + 1) >> 0x1c &
                1 << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f)) != 0)) {
              uVar20 = (*(uint *)((int)ppiVar30[0x48] + 1) & 0x3fffff) >> 0xb;
              puVar29 = ppiVar30;
              do {
                iVar21 = (&DAT_001ae9fc)[uVar20];
                ppiVar30 = (int **)puVar29;
                puVar27 = DAT_00387d20;
                if ((*(byte *)(iVar21 + 0x4f) & 1) == 0) {
                  switch(*(byte *)(iVar21 + 0x50) >> 2) {
                  case 2:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8c00;
                    FUN_000aa3a8();
                    puVar10 = DAT_00387d20;
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      iVar18 = *(int *)((int)puVar29 + 0x350) + -3;
                      if (iVar18 < 0) {
                        iVar18 = 0;
                      }
                      else if (0x2be < iVar18) {
                        iVar18 = 0x2be;
                      }
                      uVar16 = (&DAT_00387220)[iVar18];
                      *(undefined1 *)(DAT_00387d20 + 1) = 0xb;
                      *DAT_00387d20 = uVar16;
                      (&DAT_00387220)[iVar18] = DAT_00387d20;
                      DAT_00387d20[2] = iVar21;
                      uVar20 = (uint)DAT_0019cba6;
                      DAT_00387d20[3] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                      DAT_00387d20[4] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                      DAT_00387d20[5] = *(undefined4 *)((int)puVar29 + 0x34c);
                      puVar27 = DAT_00387d20 + 6;
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      if (*(char *)(iVar21 + 0x1f) == '\x05') {
                        iVar18 = *(int *)((int)puVar29 + 0x348);
                        iVar19 = *(int *)((int)puVar29 + 0x34c);
                        ppiVar30 = (int **)((int)puVar29 + -4);
                        if (puVar27 < DAT_0033317f) {
                          *puVar27 = DAT_00387224;
                          *(undefined1 *)(DAT_00387d20 + 7) = 0xe;
                          DAT_00387224 = puVar27;
                          DAT_00387d20[8] = iVar21;
                          DAT_00387d20[9] = iVar18 / (int)uVar20;
                          *(uint *)((int)puVar29 + 0x368) =
                               (uint)*(ushort *)(&DAT_0018e933 + (uint)*(byte *)(iVar21 + 0x1a) * 2)
                          ;
                          uVar4 = *(ushort *)(iVar21 + 0x58);
                          iVar18 = *(int *)((int)puVar29 + 0x368);
                          *(undefined4 *)((int)puVar29 + 0x368) = 0xc;
                          iVar26 = *(int *)((int)puVar29 + 0x368);
                          piVar1 = DAT_00387d20 + 0xb;
                          DAT_00387d20 = DAT_00387d20 + 0xc;
                          *piVar1 = iVar19;
                          puVar10[10] = (iVar19 - (int)((uint)uVar4 + iVar18) / iVar26) /
                                        (int)uVar20;
                          ppiVar30 = (int **)((int)puVar29 + -4);
                          puVar27 = DAT_00387d20;
                        }
                      }
                    }
                    break;
                  case 4:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8e02;
                    FUN_000aa3a8();
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      *(undefined1 *)(DAT_00387d20 + 1) = 0x10;
                      *DAT_00387d20 = DAT_00387224;
                      uVar20 = (uint)DAT_0019cba6;
                      DAT_00387224 = DAT_00387d20;
                      DAT_00387d20[2] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                      DAT_00387d20[3] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                      puVar27 = DAT_00387d20 + 4;
                      DAT_00387d20 = DAT_00387d20 + 5;
                      *puVar27 = *(undefined4 *)(iVar21 + 0x13);
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      puVar27 = DAT_00387d20;
                    }
                    break;
                  case 5:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8e85;
                    FUN_000aa3a8();
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      if (DAT_002e8bee + -1 == *(int *)(iVar21 + 0x15)) {
                        if (CONCAT31((uint3)((uint)(DAT_002e8bee + -1) >> 8) ^
                                     (uint3)((uint)*(int *)(iVar21 + 0x15) >> 8),
                                     *(char *)(iVar21 + 0x19)) < 0x28) {
                          *(char *)(iVar21 + 0x19) = *(char *)(iVar21 + 0x19) + '\x01';
                        }
                      }
                      else {
                        *(undefined1 *)(iVar21 + 0x19) = 0;
                      }
                      *(int *)(iVar21 + 0x15) = DAT_002e8bee;
                      puVar10 = DAT_00387d20;
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      puVar27 = DAT_00387d20;
                      if (*(char *)(iVar21 + 0x19) == '(') {
                        iVar18 = *(int *)((int)puVar29 + 0x350) + -3;
                        if (iVar18 < 0) {
                          iVar18 = 0;
                        }
                        else if (0x2be < iVar18) {
                          iVar18 = 0x2be;
                        }
                        uVar16 = (&DAT_00387220)[iVar18];
                        *(undefined1 *)(DAT_00387d20 + 1) = 0x11;
                        *DAT_00387d20 = uVar16;
                        (&DAT_00387220)[iVar18] = DAT_00387d20;
                        uVar20 = (uint)DAT_0019cba6;
                        DAT_00387d20[2] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                        puVar9 = DAT_0033317f;
                        DAT_00387d20[3] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                        puVar28 = DAT_00387d20 + 4;
                        puVar2 = (undefined2 *)((int)DAT_00387d20 + 6);
                        DAT_00387d20 = puVar28;
                        *puVar2 = *(undefined2 *)(iVar21 + 0x13);
                        ppiVar30 = (int **)((int)puVar29 + -4);
                        puVar27 = DAT_00387d20;
                        if (puVar28 < puVar9) {
                          *(undefined1 *)(puVar10 + 5) = 0x13;
                          *puVar28 = DAT_00387224;
                          DAT_00387224 = puVar28;
                          puVar10[6] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                          puVar10[7] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                          DAT_00387d20 = puVar10 + 8;
                          *(undefined2 *)((int)puVar10 + 0x16) = *(undefined2 *)(iVar21 + 0x13);
                          ppiVar30 = (int **)((int)puVar29 + -4);
                          puVar27 = DAT_00387d20;
                        }
                      }
                    }
                    break;
                  case 6:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8d53;
                    FUN_000aa3a8();
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      iVar18 = *(int *)((int)puVar29 + 0x350) + -3;
                      if (iVar18 < 0) {
                        iVar18 = 0;
                      }
                      else if (0x2be < iVar18) {
                        iVar18 = 0x2be;
                      }
                      uVar16 = (&DAT_00387220)[iVar18];
                      *(undefined1 *)(DAT_00387d20 + 1) = 0x12;
                      *DAT_00387d20 = uVar16;
                      (&DAT_00387220)[iVar18] = DAT_00387d20;
                      DAT_00387d20[2] = iVar21;
                      uVar20 = (uint)DAT_0019cba6;
                      DAT_00387d20[3] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                      DAT_00387d20[4] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                      puVar27 = DAT_00387d20 + 5;
                      DAT_00387d20 = DAT_00387d20 + 6;
                      *puVar27 = *(undefined4 *)((int)puVar29 + 0x34c);
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      puVar27 = DAT_00387d20;
                    }
                  }
                }
                DAT_00387d20 = puVar27;
                uVar20 = (uint)*(ushort *)(iVar21 + 2);
                puVar29 = ppiVar30;
              } while (*(ushort *)(iVar21 + 2) != 0);
            }
          }
        }
        *(int *)((int)ppiVar30 + 0xf8) =
             *(int *)((int)ppiVar30 + 0xf8) - *(int *)((int)ppiVar30 + 0x110);
        *(int *)((int)ppiVar30 + 0xfc) =
             *(int *)((int)ppiVar30 + 0xfc) - *(int *)((int)ppiVar30 + 0x114);
        *(int *)((int)ppiVar30 + 0x11c) =
             *(int *)((int)ppiVar30 + 0x11c) - *(int *)((int)ppiVar30 + 0xf4);
      }
      iVar21 = (int)ppiVar30[0x46];
      ppiVar30[0x3e] = (int *)((int)ppiVar30[0x3e] + (int)ppiVar30[0x42]);
      ppiVar30[0x3f] = (int *)((int)ppiVar30[0x3f] + (int)ppiVar30[0x43]);
      ppiVar30[0x46] = (int *)(iVar21 + (int)ppiVar30[0x3d]);
    } while (iVar21 + (int)ppiVar30[0x3d] < (int)ppiVar30[0x49]);
  }
  *(undefined4 *)((int)ppiVar30 + -4) = 0xa9288;
  FUN_000a6504();
  *(undefined4 *)((int)ppiVar30 + -4) = 0xa9294;
  FUN_000e6a6c();
  return;
}

/******************************************************************************
 * Function : sub_0aa3a8 (Ghidra: FUN_000aa3a8)
 * Prototype: undefined4 sub_0aa3a8(int *param_1);
 * Address  : 0xaa3a8 (Size: 432 bytes)
 * Module   : engine3.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xa6134, 0xa6990, 0xaa558
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000aa3a8(int *param_1)

{
  ushort *in_EAX;
  int *in_ECX;
  ushort *in_EDX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EBX;
  int iVar5;
  int local_10;
  
  iVar1 = *(int *)((int)in_EDX + 0x17) * 0x20;
  iVar2 = iVar1 >> 0x1f;
  iVar1 = (int)((iVar1 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8;
  switch((int)(*(int *)((int)in_EDX + 7) + 0x100U & 0x7ff) >> 9) {
  case 0:
    iVar2 = (uint)*in_EAX - (uint)*in_EDX;
    local_10 = (uint)in_EAX[1] - (uint)in_EDX[1];
    break;
  case 1:
    iVar2 = (uint)in_EAX[1] - (uint)in_EDX[1];
    local_10 = (uint)*in_EDX - (uint)*in_EAX;
    break;
  case 2:
    iVar2 = (uint)*in_EDX - (uint)*in_EAX;
    local_10 = (uint)in_EDX[1] - (uint)in_EAX[1];
    break;
  case 3:
    iVar2 = (uint)in_EDX[1] - (uint)in_EAX[1];
    local_10 = (uint)*in_EAX - (uint)*in_EDX;
    break;
  default:
    goto switchD_000aa3f9_default;
  }
  iVar5 = (DAT_002f10ce >> 0x18) * 0x4ef;
  *unaff_EBX = *(ushort *)(&DAT_0019d50c + iVar5) / 2 + (iVar1 * iVar2 >> 0x10);
  iVar2 = (*(ushort *)(&DAT_0019d50e + iVar5) / 2) * 0x100 + (local_10 * iVar1 >> 8);
  *param_1 = (*(ushort *)(&DAT_0019d50e + iVar5) + 0x40) - (iVar2 >> 8);
  iVar1 = (*(int *)(in_EAX + 1) >> 0x10) * iVar1 * 0x80;
  iVar3 = iVar1 >> 0x1f;
  *in_ECX = iVar2 - ((int)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 0x10) >> 8;
  if ((((*unaff_EBX < 0) || ((int)(uint)*(ushort *)(&DAT_0019d50c + iVar5) <= *unaff_EBX)) ||
      (*in_ECX < 0)) || ((int)(uint)*(ushort *)(&DAT_0019d50e + iVar5) <= *in_ECX)) {
switchD_000aa3f9_default:
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

