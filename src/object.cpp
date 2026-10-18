/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: object.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0c38a4 (Ghidra: FUN_000c38a4)
 * Prototype: void sub_0c38a4(void);
 * Address  : 0xc38a4 (Size: 124 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4e85c
 * Callees  : 1 -> 0x8ccec
 ******************************************************************************/
void FUN_000c38a4(void)

{
  byte bVar1;
  int in_EAX;
  char cVar2;
  
  bVar1 = *(byte *)(in_EAX + 0x13);
  cVar2 = '\0';
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      cVar2 = *(char *)(in_EAX + 0x49) - *(char *)(in_EAX + 0x48);
    }
  }
  else if ((2 < bVar1) && (bVar1 < 5)) {
    cVar2 = *(char *)(in_EAX + 0x48);
  }
  *(undefined1 *)(in_EAX + 0x13) = 4;
  FUN_0008ccec(0,(int)cVar2,2);
  return;
}

/******************************************************************************
 * Function : sub_0c3960 (Ghidra: FUN_000c3960)
 * Prototype: void sub_0c3960(void);
 * Address  : 0xc3960 (Size: 70 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x64365, 0x645dd, 0x64703, 0x64900
 * Callees  : 1 -> 0xad66c
 ******************************************************************************/
void FUN_000c3960(void)

{
  int in_EAX;
  byte *in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) =
       *(undefined2 *)(in_EDX + 0x1b);
  *in_EDX = *in_EDX | 0x80;
  in_EDX[1] = in_EDX[1] | 1;
  in_EDX[6] = DAT_002eb543;
  if (*(short *)(in_EDX + 0x62) != 0) {
    FUN_000ad66c();
  }
  return;
}

/******************************************************************************
 * Function : dk_dragging_anything_0c39a8 (Ghidra: FUN_000c39a8)
 * Prototype: void dk_dragging_anything_0c39a8(void);
 * Address  : 0xc39a8 (Size: 142 bytes)
 * Module   : object.cpp [direct_file_string_xref]
 * OrigLine : object.cpp:152 ("NOT DRAGGING ANYTHING"); object.cpp:170 ("Attempt to drop thing that was not dragged")
 * Naming   : String 'NOT DRAGGING ANYTHING'
 * Callers  : 5 -> 0x644e9, 0x647b6, 0x6484c, 0x649ad, 0x64e6d
 * Callees  : 3 -> 0xad54c, 0xb3b10, 0xddaf0
 * Strings  :
 *   - 0x16be4e: "object.cpp"
 *   - 0x16be84: "object.cpp"
 *   - 0x16be38: "NOT DRAGGING ANYTHING"
 *   - 0x16be59: "Attempt to drop thing that was not dragged"
 ******************************************************************************/
void FUN_000c39a8(void)

{
  int iVar1;
  int in_EAX;
  byte *extraout_ECX;
  int extraout_ECX_00;
  byte *in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar1 + 0x6e) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("object.cpp", line 152, "NOT DRAGGING ANYTHING") */
    in_EDX = extraout_ECX;
  }
  if (*(short *)(iVar1 + 0x6e) == *(short *)(in_EDX + 0x1b)) {
    *(undefined2 *)(iVar1 + 0x6e) = 0;
    *in_EDX = *in_EDX & 0x7f;
    in_EDX[1] = in_EDX[1] & 0xfe;
    FUN_000b3b10();
    if (*(short *)(extraout_ECX_00 + 0x62) != 0) {
      FUN_000ad54c();
      return;
    }
  }
  else {
    FUN_000ddaf0(); /* LbErrorLog("object.cpp", line 170, "Attempt to drop thing that was not dragged") */
  }
  return;
}

/******************************************************************************
 * Function : sub_0c3a38 (Ghidra: FUN_000c3a38)
 * Prototype: undefined8 sub_0c3a38(void);
 * Address  : 0xc3a38 (Size: 499 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x6e538, 0x6e5ee, 0x72af4, 0x8ccec, 0xb28e8, 0xb3b10
 ******************************************************************************/
undefined8 FUN_000c3a38(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 in_EDX;
  int iVar5;
  undefined4 in_stack_ffffffe8;
  undefined4 uVar6;
  
  iVar4 = *(int *)(in_EAX + 3) >> 0x18;
  iVar5 = iVar4 * 0x4ef;
  if (*(short *)(in_EAX + 0x1b) != *(short *)(&DAT_0019d504 + iVar5)) {
    FUN_00072af4();
    return CONCAT44(in_EDX,0xffffffff);
  }
  bVar1 = *(byte *)(in_EAX + 0x13);
  if (bVar1 < 3) {
    if ((bVar1 == 1) && ((int)(*(byte *)(in_EAX + 0x49) - 1) <= (int)(uint)*(byte *)(in_EAX + 0x48))
       ) {
      *(undefined1 *)(in_EAX + 0x13) = 2;
      FUN_0008ccec(0,0,2);
      return CONCAT44(in_stack_ffffffe8,1);
    }
  }
  else if (bVar1 < 4) {
    uVar3 = *(byte *)(in_EAX + 0x49) - 1;
    if (*(byte *)(in_EAX + 0x48) == uVar3) {
      *(ushort *)(&DAT_0019d504 + iVar5) = (ushort)*(byte *)(in_EAX + 0x48) ^ (ushort)uVar3;
      FUN_00072af4();
      return CONCAT44(in_EDX,0xffffffff);
    }
  }
  else {
    if (bVar1 != 4) {
      return CONCAT44(in_EDX,1);
    }
    if ((uint)*(byte *)(in_EAX + 0x48) == *(byte *)(in_EAX + 0x49) - 1) {
      uVar6 = CONCAT22((ushort)(byte)(&DAT_002e0e0b)[(*(int *)(in_EAX + 3) >> 0x18) * 0x1508] *
                       0x100 + 0x80,(ushort)(byte)(&DAT_002e0e0a)[iVar4 * 0x1508] * 0x100 + 0x80);
      uVar2 = FUN_000b28e8(uVar6);
      FUN_000b3b10(uVar6,uVar2);
      FUN_0008ccec(0,0,2);
      *(undefined1 *)(in_EAX + 0x13) = 1;
      FUN_0006e5ee();
      FUN_0006e538(3,0,6);
      return 0x10000000001;
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0c3c3c (Ghidra: FUN_000c3c3c)
 * Prototype: longlong sub_0c3c3c(void);
 * Address  : 0xc3c3c (Size: 2359 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 15 -> 0x24998, 0x250ef, 0x25f6f, 0x64a2e, 0x6e538, 0x6f865, 0x72af4, 0x8608c, 0xad148, 0xad23c ...
 ******************************************************************************/
longlong FUN_000c3c3c(void)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  char cStack_37;
  undefined1 uStack_36;
  char cStack_35;
  undefined2 local_34;
  
  puVar12 = (undefined4 *)&local_38;
  iVar5 = (*(int *)(in_EAX + 3) >> 0x18) * 0x1508;
  if (*(int *)(in_EAX + 0x5c) >> 0x10 < 1) {
    if ((&DAT_002e15e9)[iVar5] == '\0') {
      (&DAT_002e15e9)[iVar5] = 1;
      *(undefined4 *)(&DAT_002e15ea + iVar5) = 0;
      *(undefined4 *)(&DAT_002e15ee + iVar5) = *(undefined4 *)(in_EAX + 0xd);
      *(undefined2 *)(&DAT_002e15f2 + iVar5) = *(undefined2 *)(in_EAX + 0x11);
    }
  }
  else {
    if ((DAT_002ed3f3 != 0) && (DAT_002e8bee % DAT_002ed3f3 == 0)) {
      *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + DAT_002ed3f7;
      if (*(int *)(in_EAX + 0x5c) >> 0x10 < 0) {
        *(undefined2 *)(in_EAX + 0x5e) = 0;
      }
      else if (DAT_001ace04 < (uint)(*(int *)(in_EAX + 0x5c) >> 0x10)) {
        *(undefined2 *)(in_EAX + 0x5e) = (undefined2)DAT_001ace04;
      }
    }
    iVar5 = ((int)((uint)((*(int *)(in_EAX + 0x5c) >> 0x10) << 8) / DAT_001ace04 << 7) >> 8) + 0x80;
    *(short *)(in_EAX + 0x46) = (short)((uint)DAT_0018b981 * iVar5 >> 8);
    *(short *)(in_EAX + 0x56) = (short)(iVar5 * (uint)DAT_0018b97d >> 8);
  }
  iVar5 = *(int *)(in_EAX + 3) >> 0x18;
  iVar6 = iVar5 * 0x1508;
  if ((&DAT_002e15e9)[iVar6] == '\0') goto switchD_000c3e58_default;
  uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar8 = uVar7 >> 0xd | uVar7 * 0x80000;
  uVar7 = uVar8 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = uVar7 >> 0xd | uVar7 * 0x80000;
  cStack_37 = *(char *)(in_EAX + 0xe) + (char)((ulonglong)uVar8 % 10) + -5;
  local_38 = 0x80;
  cStack_35 = *(char *)(in_EAX + 0x10) + (char)((ulonglong)DAT_002e8bf6 % 10) + -5;
  uStack_36 = 0x80;
  local_3c = 0xc3df0;
  local_34 = FUN_000b3788();
  local_3c = 0xc3e03;
  FUN_000250ef();
  local_3c = 0xc3e18;
  iVar9 = FUN_0006f865();
  puVar12 = (undefined4 *)&local_38;
  if (iVar9 == 0) {
    local_3c = 0x100;
    local_40 = 6;
    uStack_44 = 1;
    puVar12 = &uStack_48;
    uStack_48 = 3;
    FUN_0006e538();
  }
  switch((&DAT_002e15e9)[iVar6]) {
  case 1:
    iVar5 = (uint)*(byte *)(*(int *)((int)puVar12 + 0x18) + 6) * 0x1508;
    puVar10 = &DAT_002e0589 + (uint)*(byte *)(*(int *)((int)puVar12 + 0x18) + 6) * 0xa84;
    if ((*(int *)(&DAT_002e1a3d + iVar5) == 0) && (*puVar10 != 0)) {
      uVar1 = *puVar10;
      *(undefined4 *)(&DAT_002e1a3d + iVar5) = 1;
      (&DAT_002e1a3b)[iVar5] = *(undefined1 *)((int)(&DAT_001ae9fc)[uVar1] + 0xe);
      (&DAT_002e1a3c)[iVar5] = *(undefined1 *)((int)(&DAT_001ae9fc)[*puVar10] + 0x10);
    }
    iVar5 = *(int *)(&DAT_002e15ea + iVar6) + 1;
    *(int *)(&DAT_002e15ea + iVar6) = iVar5;
    if (iVar5 < 0x20) {
      iVar6 = iVar5 * 0x40 >> 0x1f;
      uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar7 >> 0xd | uVar7 * 0x80000;
      if (DAT_002e8bf6 % 0x60 <
          ((int)((iVar5 * 0x40 + iVar6 * -0x20) - (uint)(iVar6 << 4 < 0)) >> 5) + 0x20U)
      goto LAB_000c3f2f;
    }
    else {
      (&DAT_002e15e9)[iVar6] = 2;
      *(undefined4 *)(&DAT_002e15ea + iVar6) = 0;
    }
    break;
  case 2:
    iVar5 = *(int *)(&DAT_002e15ea + iVar6);
    *(int *)(&DAT_002e15ea + iVar6) = iVar5 + 1;
    if (iVar5 + 1 < 0x20) {
LAB_000c3f2f:
      *(undefined4 *)((int)puVar12 + -4) = 0xc3f45;
      FUN_00024998();
      pbVar11 = *(byte **)((int)puVar12 + 0x1c);
      if ((*pbVar11 & 1) == 0) {
        return (ulonglong)*(uint *)((int)puVar12 + 0x2c) << 0x20;
      }
    }
    else {
      (&DAT_002e15e9)[iVar6] = 3;
      *(undefined4 *)(&DAT_002e15ea + iVar6) = 0;
      pbVar11 = *(byte **)((int)puVar12 + 0x1c);
      if ((*pbVar11 & 1) == 0) {
        return (ulonglong)*(uint *)((int)puVar12 + 0x2c) << 0x20;
      }
    }
    goto LAB_000c43b4;
  case 3:
    (&DAT_002e15e9)[iVar6] = 4;
    *(undefined4 *)(&DAT_002e15ea + iVar6) = 0;
    pbVar11 = *(byte **)((int)puVar12 + 0x1c);
    if ((*pbVar11 & 1) == 0) {
      return (ulonglong)*(uint *)((int)puVar12 + 0x2c) << 0x20;
    }
    goto LAB_000c43b4;
  case 4:
    if (*(int *)(&DAT_002e1425 + iVar6) >> 0x18 != (uint)DAT_002eb542) {
      puVar13 = (undefined1 *)puVar12;
      pbVar11 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[iVar5 * 0xa84]];
      if (DAT_001ae9fc < (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[iVar5 * 0xa84]]) {
        do {
          pbVar2 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar11 + 100)] + 0x1f)];
          puVar12 = (undefined4 *)puVar13;
          if (*(short *)(pbVar11 + 0x1b) !=
              *(short *)((int)&DAT_0019d0f7 +
                        (*(int *)(*(int *)(puVar13 + 0x18) + 3) >> 0x18) * 0x4ef)) {
            bVar4 = pbVar11[7];
            if (bVar4 == 0xe) {
              bVar4 = pbVar11[8];
            }
            if (bVar4 == 0x29) {
LAB_000c409d:
              *(undefined4 *)(puVar13 + -4) = 0xc40a4;
              iVar9 = FUN_000d0f50();
              if ((iVar9 != 0) && (*(byte *)(iVar9 + 3) != pbVar11[6])) goto LAB_000c3ff8;
            }
            else {
              bVar4 = pbVar11[7];
              if (bVar4 == 0xe) {
                bVar4 = pbVar11[8];
              }
              if (bVar4 == 0x28) goto LAB_000c409d;
              bVar4 = pbVar11[7];
              if (bVar4 == 0xe) {
                bVar4 = pbVar11[8];
              }
              if (bVar4 == 0x2b) goto LAB_000c409d;
              bVar4 = pbVar11[7];
              if (bVar4 == 0xe) {
                bVar4 = pbVar11[8];
              }
              if (bVar4 == 0x2a) goto LAB_000c409d;
            }
            if (((*pbVar11 & 0x10) == 0) && ((pbVar11[1] & 2) == 0)) {
              *(undefined4 *)(puVar13 + -4) = 0xc40db;
              iVar9 = FUN_000c9988();
              if (iVar9 == 0) {
                *(undefined4 *)(puVar13 + -4) = 0;
                puVar12 = (undefined4 *)(puVar13 + -8);
                *(undefined4 *)(puVar13 + -8) = 0;
                *(undefined4 *)(puVar13 + -0xc) = 0xc4142;
                FUN_0008608c();
              }
              else {
                *(undefined4 *)(puVar13 + -4) = 0xc40e8;
                FUN_00064a2e();
                *(undefined4 *)(puVar13 + -4) = 0xc40f1;
                iVar9 = FUN_000cc4a0();
                if (iVar9 == 0) {
                  *(undefined4 *)(puVar13 + -4) = 0;
                  puVar12 = (undefined4 *)(puVar13 + -8);
                  *(undefined4 *)(puVar13 + -8) = 0;
                  *(undefined4 *)(puVar13 + -0xc) = 0xc4125;
                  FUN_0008608c();
                }
                else {
                  pbVar11[8] = 0x8b;
                  *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar11 + 100)] + 1) =
                       *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar11 + 100)] + 1) | 2;
                }
              }
            }
          }
LAB_000c3ff8:
          puVar13 = (undefined1 *)puVar12;
          pbVar11 = pbVar2;
        } while (DAT_001ae9fc < pbVar2);
      }
      puVar13 = (undefined1 *)puVar12;
      pbVar11 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[iVar5 * 0xa84]];
      if (DAT_001ae9fc < (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[iVar5 * 0xa84]]) {
        do {
          pbVar2 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar11 + 100)] + 0x1f)];
          bVar4 = pbVar11[7];
          if (bVar4 == 0xe) {
            bVar4 = pbVar11[8];
          }
          puVar12 = (undefined4 *)puVar13;
          if (bVar4 == 0x29) {
LAB_000c41ec:
            *(undefined4 *)(puVar13 + -4) = 0xc41f3;
            iVar9 = FUN_000d0f50();
            if ((iVar9 == 0) || (*(byte *)(iVar9 + 3) == pbVar11[6])) goto LAB_000c4203;
          }
          else {
            bVar4 = pbVar11[7];
            if (bVar4 == 0xe) {
              bVar4 = pbVar11[8];
            }
            if (bVar4 == 0x28) goto LAB_000c41ec;
            bVar4 = pbVar11[7];
            if (bVar4 == 0xe) {
              bVar4 = pbVar11[8];
            }
            if (bVar4 == 0x2b) goto LAB_000c41ec;
            bVar4 = pbVar11[7];
            if (bVar4 == 0xe) {
              bVar4 = pbVar11[8];
            }
            if (bVar4 == 0x2a) goto LAB_000c41ec;
LAB_000c4203:
            if (((*pbVar11 & 0x10) == 0) && ((pbVar11[1] & 2) == 0)) {
              *(undefined4 *)(puVar13 + -4) = 0;
              puVar12 = (undefined4 *)(puVar13 + -8);
              *(undefined4 *)(puVar13 + -8) = 0;
              *(undefined4 *)(puVar13 + -0xc) = 0xc422e;
              FUN_0008608c();
            }
          }
          puVar13 = (undefined1 *)puVar12;
          pbVar11 = pbVar2;
        } while (DAT_001ae9fc < pbVar2);
      }
    }
    (&DAT_002e0589)[iVar5 * 0xa84] = 0;
    (&DAT_002e15e9)[iVar6] = 0;
    *(undefined4 *)(&DAT_002e15ea + iVar6) = 0;
    *(undefined4 *)((int)puVar12 + -4) = 0xc4260;
    iVar5 = FUN_00024998();
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0x16) = 8;
    }
    *(undefined4 *)((int)puVar12 + -4) = 0xc427e;
    iVar5 = FUN_00024998();
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0x16) = 8;
    }
    uVar1 = *(ushort *)
             (&DAT_002ddd52 +
             (uint)*(ushort *)
                    (&DAT_002e05a2 + (*(int *)(*(int *)((int)puVar12 + 0x18) + 3) >> 0x18) * 0x1508)
             * 0x45);
    *(undefined1 **)((int)puVar12 + 0x14) =
         &DAT_002ddd1b +
         (uint)*(ushort *)
                (&DAT_002e05a2 + (*(int *)(*(int *)((int)puVar12 + 0x18) + 3) >> 0x18) * 0x1508) *
         0x45;
    uVar7 = (uint)uVar1;
    while (uVar7 != 0) {
      *(uint *)((int)puVar12 + 0x10) = (uint)*(ushort *)(&DAT_002d33c6 + uVar7 * 6);
      *(int *)((int)puVar12 + 0xc) = ((int)uVar7 % 0x55) * 3;
      iVar5 = ((int)uVar7 / 0x55) * 3;
      if (**(int **)((int)puVar12 + 0x14) >> 0x18 != (uint)DAT_002eb543) {
        *(short *)(&DAT_002e105e + (**(int **)((int)puVar12 + 0x14) >> 0x18) * 0x1508) =
             *(short *)(&DAT_002e105e + (**(int **)((int)puVar12 + 0x14) >> 0x18) * 0x1508) + 1;
      }
      iVar9 = *(int *)((int)puVar12 + 0xc);
      *(undefined4 *)((int)puVar12 + -4) = 0xc4352;
      FUN_000c8654();
      iVar6 = iVar5 + 3;
      *(int *)((int)puVar12 + 8) = iVar6;
      iVar3 = iVar5 - iVar6;
      bVar15 = SBORROW4(iVar5,iVar6);
      while (bVar15 != iVar3 < 0) {
        for (iVar6 = *(int *)((int)puVar12 + 0xc); iVar6 < iVar9 + 3; iVar6 = iVar6 + 1) {
          *(undefined4 *)((int)puVar12 + -4) = 0xc438e;
          FUN_00025f6f();
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar5 - *(int *)((int)puVar12 + 8);
        bVar15 = SBORROW4(iVar5,*(int *)((int)puVar12 + 8));
      }
      uVar7 = *(uint *)((int)puVar12 + 0x10);
    }
    *(undefined4 *)((int)puVar12 + -4) = 0xc439f;
    FUN_00072af4();
  }
switchD_000c3e58_default:
  pbVar11 = *(byte **)((int)puVar12 + 0x1c);
  if ((*pbVar11 & 1) == 0) {
    return (ulonglong)*(uint *)((int)puVar12 + 0x2c) << 0x20;
  }
LAB_000c43b4:
  if (pbVar11[0x13] != 0) {
    pbVar11[0x13] = pbVar11[0x13] - 1;
  }
  iVar5 = *(int *)((int)puVar12 + 0x1c);
  iVar6 = (int)((DAT_001ace04 - (*(int *)(iVar5 + 0x5c) >> 0x10)) * 0x180) / (int)DAT_001ace04;
  puVar13 = (undefined1 *)puVar12;
  if (*(char *)(iVar5 + 7) == '\x03') goto LAB_000c4564;
  *(undefined2 *)(iVar5 + 0x3e) = 0;
  *(int *)(iVar5 + 0x40) =
       *(int *)(iVar5 + 0x40) +
       (int)(0x900 / (longlong)(int)(0x900 / (longlong)(iVar6 + 0x80))) *
       (*(int *)(iVar5 + 0x11) >> 0x18);
  *(undefined4 *)((int)puVar12 + -4) = 0xc444d;
  FUN_000ad23c();
  *(undefined4 *)((int)puVar12 + -4) = 0xc445b;
  FUN_000ad148();
  if (*(int *)(iVar5 + 0x40) < 0) {
    *(undefined4 *)(iVar5 + 0x40) = 0;
    *(undefined4 *)((int)puVar12 + -4) = 0xc447a;
    FUN_000ad148();
    *(undefined1 *)(iVar5 + 0x14) = 1;
  }
  puVar14 = (undefined1 *)puVar12;
  if (0x8ff < *(int *)(iVar5 + 0x40)) {
    *(undefined4 *)(iVar5 + 0x40) = 0x8ff;
    *(undefined4 *)((int)puVar12 + -4) = 0xc44a2;
    FUN_000ad148();
    *(undefined1 *)(iVar5 + 0x14) = 0xff;
    if (DAT_003d8c64 == 0) {
      *(undefined4 *)((int)puVar12 + -4) = 0x100;
      *(undefined4 *)((int)puVar12 + -8) = 6;
      *(undefined4 *)((int)puVar12 + -0xc) = 1;
      puVar14 = (undefined1 *)((int)puVar12 + -0x10);
      *(undefined4 *)((int)puVar12 + -0x10) = 3;
      *(undefined4 *)((int)puVar12 + -0x14) = 0xc44fe;
      FUN_0006e538();
      if (DAT_003d8c64 == 0) goto LAB_000c4511;
      DAT_003d8c64 = 0;
    }
    else {
      *(undefined4 *)((int)puVar12 + -4) = 0x100;
      *(undefined4 *)((int)puVar12 + -8) = 6;
      *(undefined4 *)((int)puVar12 + -0xc) = 1;
      puVar14 = (undefined1 *)((int)puVar12 + -0x10);
      *(undefined4 *)((int)puVar12 + -0x10) = 3;
      *(undefined4 *)((int)puVar12 + -0x14) = 0xc44cd;
      FUN_0006e538();
      if (DAT_003d8c64 == 0) {
LAB_000c4511:
        puVar14 = (undefined1 *)((int)puVar12 + -0x10);
        DAT_003d8c64 = 1;
      }
      else {
        DAT_003d8c64 = 0;
      }
    }
  }
  iVar6 = *(int *)(iVar5 + 0x40) >> 0x1f;
  *(char *)(iVar5 + 0x48) =
       (char)((*(int *)(iVar5 + 0x40) + iVar6 * -0x100) - (uint)(iVar6 << 7 < 0) >> 8);
  *(undefined4 *)(puVar14 + -4) = 0xc453f;
  iVar5 = FUN_0006f865();
  puVar13 = puVar14;
  if (iVar5 == 0) {
    *(undefined4 *)(puVar14 + -4) = 0x100;
    *(undefined4 *)(puVar14 + -8) = 6;
    *(undefined4 *)(puVar14 + -0xc) = 1;
    puVar13 = puVar14 + -0x10;
    *(undefined4 *)(puVar14 + -0x10) = 3;
    *(undefined4 *)(puVar14 + -0x14) = 0xc4564;
    FUN_0006e538();
  }
LAB_000c4564:
  return CONCAT44(*(undefined4 *)(puVar13 + 0x2c),1);
}

/******************************************************************************
 * Function : sub_0c4574 (Ghidra: FUN_000c4574)
 * Prototype: undefined8 sub_0c4574(void);
 * Address  : 0xc4574 (Size: 716 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x10c1a, 0x10c44, 0x10d08, 0xb3b10, 0xe8cc8
 ******************************************************************************/
undefined8 FUN_000c4574(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short asStack_44 [4];
  short sStack_3c;
  short local_38;
  short sStack_36;
  short local_34 [2];
  undefined4 local_30;
  short local_2c [4];
  short local_24 [2];
  undefined4 local_20;
  short asStack_1c [2];
  
  bVar6 = 0;
  pbVar1 = (byte *)(&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x13)];
  if (((*pbVar1 & 0x10) == 0) && ((pbVar1[1] & 2) == 0)) {
    uVar4 = *(uint *)(pbVar1 + 0xd);
    asStack_44[2] = (short)uVar4;
    asStack_44[3] = (short)(uVar4 >> 0x10);
    sStack_3c = *(short *)(pbVar1 + 0x11);
    uVar4 = (uint)*(ushort *)(in_EAX + 0xd) - (uVar4 & 0xffff);
    uVar5 = (int)uVar4 >> 0x1f;
    if ((((int)((uVar4 ^ uVar5) - uVar5) < 0x201) &&
        (uVar4 = (uint)*(ushort *)(in_EAX + 0xf) - (uint)(ushort)asStack_44[3],
        uVar5 = (int)uVar4 >> 0x1f, (int)((uVar4 ^ uVar5) - uVar5) < 0x201)) &&
       (uVar4 = (*(int *)(in_EAX + 0xf) >> 0x10) - (int)sStack_3c, uVar5 = (int)uVar4 >> 0x1f,
       (int)((uVar4 ^ uVar5) - uVar5) < 0x201)) {
      sStack_3c = sStack_3c + (short)((int)(uint)*(ushort *)(pbVar1 + 0x58) >> 1);
      uVar2 = FUN_00010c1a();
      *(undefined2 *)(in_EAX + 0x52) = uVar2;
      uVar2 = FUN_00010c44();
      *(undefined2 *)(in_EAX + 0x54) = uVar2;
      FUN_00010d08();
      iVar3 = FUN_000e8cc8();
      if (0x80 < iVar3) {
        local_2c[0] = local_34[0] << 7;
        local_30 = CONCAT22(sStack_36 << 7,local_38 << 7);
        local_20 = local_30;
        asStack_1c[(uint)bVar6 * -4] = local_2c[(uint)bVar6 * -4];
        local_34[(uint)bVar6 * -4] = local_2c[(uint)bVar6 * -4];
        local_2c[2] = (short)((int)(short)(local_38 << 7) / iVar3);
        local_2c[3] = (short)((int)(short)(sStack_36 << 7) / iVar3);
        local_24[0] = (short)((int)local_34[0] / iVar3);
        asStack_44[(uint)bVar6 * -4] = local_24[(uint)bVar6 * -4];
        local_38 = local_2c[2];
        sStack_36 = local_2c[3];
        local_34[(uint)bVar6 * -4] = local_24[(uint)bVar6 * -4];
      }
    }
    else {
      asStack_44[2] =
           asStack_44[2] +
           (short)((uint)((&DAT_001927e0)[(uint)*(byte *)(in_EAX + 0x15) * 0x2aa] << 5) >> 0x10);
      asStack_44[3] =
           asStack_44[3] +
           (short)((uint)-(((int)(&PTR_LAB_00192fe0)[(uint)*(byte *)(in_EAX + 0x15) * 0x2aa] << 5)
                          >> 8) >> 8);
      sStack_3c = sStack_3c + (ushort)*(byte *)(in_EAX + 0x15) * (*(ushort *)(pbVar1 + 0x58) / 2);
      FUN_000b3b10();
      *(undefined2 *)(in_EAX + 0x52) = *(undefined2 *)(extraout_ECX + 0x52);
      *(undefined2 *)(in_EAX + 0x54) = *(undefined2 *)(extraout_ECX + 0x54);
      FUN_00010d08();
    }
    *(short *)(in_EAX + 0x32) = *(short *)(in_EAX + 0x32) + local_38;
    *(short *)(in_EAX + 0x34) = *(short *)(in_EAX + 0x34) + sStack_36;
    *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 4;
    *(short *)(in_EAX + 0x36) = *(short *)(in_EAX + 0x36) + local_34[0];
    *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xfe;
    return CONCAT44(in_EDX,1);
  }
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | 1;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0c4840 (Ghidra: FUN_000c4840)
 * Prototype: undefined8 sub_0c4840(void);
 * Address  : 0xc4840 (Size: 716 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x10c1a, 0x10c44, 0x10d08, 0xb3b10, 0xe8cc8
 ******************************************************************************/
undefined8 FUN_000c4840(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  short asStack_44 [4];
  short sStack_3c;
  short local_38;
  short sStack_36;
  short local_34 [2];
  undefined4 local_30;
  short local_2c [4];
  short local_24 [2];
  undefined4 local_20;
  short asStack_1c [2];
  
  bVar6 = 0;
  pbVar1 = (byte *)(&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x13)];
  if (((*pbVar1 & 0x10) == 0) && ((pbVar1[1] & 2) == 0)) {
    uVar4 = *(uint *)(pbVar1 + 0xd);
    asStack_44[2] = (short)uVar4;
    asStack_44[3] = (short)(uVar4 >> 0x10);
    sStack_3c = *(short *)(pbVar1 + 0x11);
    uVar4 = (uint)*(ushort *)(in_EAX + 0xd) - (uVar4 & 0xffff);
    uVar5 = (int)uVar4 >> 0x1f;
    if ((((int)((uVar4 ^ uVar5) - uVar5) < 0x201) &&
        (uVar4 = (uint)*(ushort *)(in_EAX + 0xf) - (uint)(ushort)asStack_44[3],
        uVar5 = (int)uVar4 >> 0x1f, (int)((uVar4 ^ uVar5) - uVar5) < 0x201)) &&
       (uVar4 = (*(int *)(in_EAX + 0xf) >> 0x10) - (int)sStack_3c, uVar5 = (int)uVar4 >> 0x1f,
       (int)((uVar4 ^ uVar5) - uVar5) < 0x201)) {
      sStack_3c = sStack_3c + (short)((int)(uint)*(ushort *)(pbVar1 + 0x58) >> 1);
      uVar2 = FUN_00010c1a();
      *(undefined2 *)(in_EAX + 0x52) = uVar2;
      uVar2 = FUN_00010c44();
      *(undefined2 *)(in_EAX + 0x54) = uVar2;
      FUN_00010d08();
      iVar3 = FUN_000e8cc8();
      if (0x80 < iVar3) {
        local_2c[0] = local_34[0] << 7;
        local_30 = CONCAT22(sStack_36 << 7,local_38 << 7);
        local_20 = local_30;
        asStack_1c[(uint)bVar6 * -4] = local_2c[(uint)bVar6 * -4];
        local_34[(uint)bVar6 * -4] = local_2c[(uint)bVar6 * -4];
        local_2c[2] = (short)((int)(short)(local_38 << 7) / iVar3);
        local_2c[3] = (short)((int)(short)(sStack_36 << 7) / iVar3);
        local_24[0] = (short)((int)local_34[0] / iVar3);
        asStack_44[(uint)bVar6 * -4] = local_24[(uint)bVar6 * -4];
        local_38 = local_2c[2];
        sStack_36 = local_2c[3];
        local_34[(uint)bVar6 * -4] = local_24[(uint)bVar6 * -4];
      }
    }
    else {
      asStack_44[2] =
           asStack_44[2] +
           (short)((uint)((&DAT_001927e0)[(uint)*(byte *)(in_EAX + 0x15) * 0x2aa] << 5) >> 0x10);
      asStack_44[3] =
           asStack_44[3] +
           (short)((uint)-(((int)(&PTR_LAB_00192fe0)[(uint)*(byte *)(in_EAX + 0x15) * 0x2aa] << 5)
                          >> 8) >> 8);
      sStack_3c = sStack_3c + (ushort)*(byte *)(in_EAX + 0x15) * (*(ushort *)(pbVar1 + 0x58) / 2);
      FUN_000b3b10();
      *(undefined2 *)(in_EAX + 0x52) = *(undefined2 *)(extraout_ECX + 0x52);
      *(undefined2 *)(in_EAX + 0x54) = *(undefined2 *)(extraout_ECX + 0x54);
      FUN_00010d08();
    }
    *(short *)(in_EAX + 0x32) = *(short *)(in_EAX + 0x32) + local_38;
    *(short *)(in_EAX + 0x34) = *(short *)(in_EAX + 0x34) + sStack_36;
    *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 4;
    *(short *)(in_EAX + 0x36) = *(short *)(in_EAX + 0x36) + local_34[0];
    *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xfe;
    return CONCAT44(in_EDX,1);
  }
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | 1;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0c4b0c (Ghidra: FUN_000c4b0c)
 * Prototype: void sub_0c4b0c(void);
 * Address  : 0xc4b0c (Size: 449 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc4d28
 * Callees  : 10 -> 0x15030, 0x22660, 0x22b3a, 0x23754, 0x444a9, 0x76753, 0x767f1, 0xb3788, 0xd7688, 0xda6fc
 ******************************************************************************/
void FUN_000c4b0c(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  byte unaff_BL;
  int iVar4;
  undefined4 uVar5;
  char local_18;
  char local_14;
  
  if ((((in_EAX < 0x55) && (-1 < in_EAX)) && (in_EDX < 0x55)) && (-1 < in_EDX)) {
    iVar4 = (in_EAX + in_EDX * 0x55) * 6;
    bVar1 = (&DAT_002d33c5)[iVar4];
    if (((&DAT_002d33ca)[iVar4] & 7) == unaff_BL) {
      iVar3 = FUN_00022b3a();
      if (iVar3 != 0) {
        FUN_00022660();
        bVar1 = (&DAT_002d33c5)[iVar4];
      }
      if ((&DAT_001921cf)[(uint)bVar1 * 0x16] == '\x02') {
        FUN_000d7688(1);
        FUN_00023754();
        FUN_00015030();
        FUN_000da6fc();
        iVar4 = 0;
        do {
          iVar3 = FUN_00076753();
          if (iVar3 != 0) {
            FUN_000767f1();
          }
          iVar4 = iVar4 + 2;
        } while (iVar4 != 0x12);
        local_14 = (char)in_EAX;
        uVar5 = CONCAT13(local_14 * '\x03' + '\x01',
                         CONCAT12(0x80,(short)CONCAT31((uint3)(byte)(local_18 * '\x03' + 1),0x80)));
        uVar2 = FUN_000b3788();
        FUN_000444a9(uVar5,uVar2);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0c4d28 (Ghidra: FUN_000c4d28)
 * Prototype: void sub_0c4d28(void);
 * Address  : 0xc4d28 (Size: 293 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 1 -> 0xc4b0c
 ******************************************************************************/
void FUN_000c4d28(void)

{
  int iVar1;
  int iVar2;
  undefined2 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *puVar3;
  int local_24;
  byte local_1c;
  
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    iVar2 = (uint)local_1c * 0x1508;
    puVar3 = &DAT_002e0589 + (uint)local_1c * 0xa84;
    if (((*(int *)(&DAT_002e1a3d + iVar2) != 0) && (((byte)DAT_002e8bee & 1) == 0)) &&
       (iVar1 = *(int *)(&DAT_002e1a3d + iVar2), *(int *)(&DAT_002e1a3d + iVar2) = iVar1 + 1,
       iVar1 < 0x54)) {
      for (iVar2 = 0; iVar2 < *(int *)(puVar3 + 0xa5a) * 2 + 1; iVar2 = iVar2 + 1) {
        FUN_000c4b0c();
        FUN_000c4b0c();
        puVar3 = extraout_ECX;
      }
      for (local_24 = 1; local_24 < *(int *)(puVar3 + 0xa5a) * 2; local_24 = local_24 + 1) {
        FUN_000c4b0c();
        FUN_000c4b0c();
        puVar3 = extraout_ECX_00;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0c4f70 (Ghidra: FUN_000c4f70)
 * Prototype: undefined8 sub_0c4f70(void);
 * Address  : 0xc4f70 (Size: 1623 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 13 -> 0x24998, 0x250ef, 0x25f6f, 0x64a2e, 0x6e538, 0x6f865, 0x72af4, 0x8608c, 0xb3788, 0xc8654 ...
 ******************************************************************************/
undefined8 FUN_000c4f70(void)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  bool bVar16;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  char cStack_37;
  undefined1 uStack_36;
  char cStack_35;
  undefined2 local_34;
  
  puVar13 = (undefined4 *)&local_38;
  iVar6 = *(int *)(in_EAX + 3) >> 0x18;
  uVar7 = iVar6 * 0x1508;
  uVar11 = uVar7;
  puVar14 = &local_38;
  if ((&DAT_002e15e9)[uVar7] != '\0') {
    uVar11 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar8 = uVar11 >> 0xd | uVar11 * 0x80000;
    uVar11 = uVar8 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar11 >> 0xd | uVar11 * 0x80000;
    cStack_37 = *(char *)(in_EAX + 0xe) + (char)((ulonglong)uVar8 % 10) + -5;
    cStack_35 = *(char *)(in_EAX + 0x10) + (char)((ulonglong)DAT_002e8bf6 % 10) + -5;
    local_38 = 0x80;
    uStack_36 = 0x80;
    local_3c = 0xc502e;
    local_34 = FUN_000b3788();
    local_3c = 0xc5041;
    FUN_000250ef();
    local_3c = 0xc5056;
    iVar9 = FUN_0006f865();
    if (iVar9 == 0) {
      local_3c = 0x100;
      local_40 = 6;
      uStack_44 = 1;
      puVar13 = &uStack_48;
      uStack_48 = 3;
      iVar9 = FUN_0006e538();
    }
    bVar5 = (&DAT_002e15e9)[uVar7] - 1;
    uVar11 = CONCAT31((int3)((uint)iVar9 >> 8),bVar5);
    puVar14 = (undefined1 *)puVar13;
    if (bVar5 < 4) {
      switch((uint)bVar5) {
      case 0:
        iVar6 = (uint)*(byte *)(*(int *)((int)puVar13 + 0x14) + 6) * 0x1508;
        puVar10 = &DAT_002e0589 + (uint)*(byte *)(*(int *)((int)puVar13 + 0x14) + 6) * 0xa84;
        if ((*(int *)(&DAT_002e1a3d + iVar6) == 0) && (*puVar10 != 0)) {
          uVar1 = *puVar10;
          *(undefined4 *)(&DAT_002e1a3d + iVar6) = 1;
          (&DAT_002e1a3b)[iVar6] = *(undefined1 *)((int)(&DAT_001ae9fc)[uVar1] + 0xe);
          (&DAT_002e1a3c)[iVar6] = *(undefined1 *)((int)(&DAT_001ae9fc)[*puVar10] + 0x10);
        }
        iVar6 = *(int *)(&DAT_002e15ea + uVar7) + 1;
        *(int *)(&DAT_002e15ea + uVar7) = iVar6;
        if (0x1f < iVar6) {
          (&DAT_002e15e9)[uVar7] = 2;
          *(undefined4 *)(&DAT_002e15ea + uVar7) = 0;
          return CONCAT44(*(undefined4 *)((int)puVar13 + 0x2c),puVar10);
        }
        iVar9 = iVar6 * 0x40 >> 0x1f;
        uVar11 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = uVar11 >> 0xd | uVar11 * 0x80000;
        uVar11 = DAT_002e8bf6 / 0x60;
        if (((int)((iVar6 * 0x40 + iVar9 * -0x20) - (uint)(iVar9 << 4 < 0)) >> 5) + 0x20U <=
            DAT_002e8bf6 % 0x60) goto LAB_000c4569;
        break;
      case 1:
        iVar6 = *(int *)(&DAT_002e15ea + uVar7) + 1;
        *(int *)(&DAT_002e15ea + uVar7) = iVar6;
        if (0x1f < iVar6) {
          (&DAT_002e15e9)[uVar7] = 3;
          *(undefined4 *)(&DAT_002e15ea + uVar7) = 0;
          return CONCAT44(*(undefined4 *)((int)puVar13 + 0x2c),iVar6);
        }
        break;
      case 2:
        (&DAT_002e15e9)[uVar7] = 4;
        *(undefined4 *)(&DAT_002e15ea + uVar7) = 0;
        return CONCAT44(*(undefined4 *)((int)puVar13 + 0x2c),(uint)bVar5);
      case 3:
        if (*(int *)(&DAT_002e1425 + uVar7) >> 0x18 != (uint)DAT_002eb542) {
          pbVar15 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[iVar6 * 0xa84]];
          if (DAT_001ae9fc < (&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[iVar6 * 0xa84]]) {
            do {
              pbVar2 = (&DAT_001ae9fc)
                       [*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar15 + 100)] + 0x1f)];
              puVar13 = (undefined4 *)puVar14;
              if (*(short *)(pbVar15 + 0x1b) !=
                  *(short *)((int)&DAT_0019d0f7 +
                            (*(int *)(*(int *)(puVar14 + 0x14) + 3) >> 0x18) * 0x4ef)) {
                bVar5 = pbVar15[7];
                if (bVar5 == 0xe) {
                  bVar5 = pbVar15[8];
                }
                if (bVar5 == 0x29) {
LAB_000c52b5:
                  *(undefined4 *)(puVar14 + -4) = 0xc52bc;
                  iVar9 = FUN_000d0f50();
                  if ((iVar9 != 0) && (*(byte *)(iVar9 + 3) != pbVar15[6])) goto LAB_000c5210;
                }
                else {
                  bVar5 = pbVar15[7];
                  if (bVar5 == 0xe) {
                    bVar5 = pbVar15[8];
                  }
                  if (bVar5 == 0x28) goto LAB_000c52b5;
                  bVar5 = pbVar15[7];
                  if (bVar5 == 0xe) {
                    bVar5 = pbVar15[8];
                  }
                  if (bVar5 == 0x2b) goto LAB_000c52b5;
                  bVar5 = pbVar15[7];
                  if (bVar5 == 0xe) {
                    bVar5 = pbVar15[8];
                  }
                  if (bVar5 == 0x2a) goto LAB_000c52b5;
                }
                if (((*pbVar15 & 0x10) == 0) && ((pbVar15[1] & 2) == 0)) {
                  *(undefined4 *)(puVar14 + -4) = 0xc52f3;
                  iVar9 = FUN_000c9988();
                  if (iVar9 == 0) {
                    *(undefined4 *)(puVar14 + -4) = 0;
                    puVar13 = (undefined4 *)(puVar14 + -8);
                    *(undefined4 *)(puVar14 + -8) = 0;
                    *(undefined4 *)(puVar14 + -0xc) = 0xc535a;
                    FUN_0008608c();
                  }
                  else {
                    *(undefined4 *)(puVar14 + -4) = 0xc5300;
                    FUN_00064a2e();
                    *(undefined4 *)(puVar14 + -4) = 0xc5309;
                    iVar9 = FUN_000cc4a0();
                    if (iVar9 == 0) {
                      *(undefined4 *)(puVar14 + -4) = 0;
                      puVar13 = (undefined4 *)(puVar14 + -8);
                      *(undefined4 *)(puVar14 + -8) = 0;
                      *(undefined4 *)(puVar14 + -0xc) = 0xc533d;
                      FUN_0008608c();
                    }
                    else {
                      pbVar15[8] = 0x8b;
                      *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar15 + 100)] + 1) =
                           *(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar15 + 100)] + 1) | 2;
                    }
                  }
                }
              }
LAB_000c5210:
              puVar14 = (undefined1 *)puVar13;
              pbVar15 = pbVar2;
            } while (DAT_001ae9fc < pbVar2);
          }
          puVar14 = (undefined1 *)puVar13;
          pbVar15 = (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[iVar6 * 0xa84]];
          if (DAT_001ae9fc < (&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[iVar6 * 0xa84]]) {
            do {
              pbVar2 = (&DAT_001ae9fc)
                       [*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar15 + 100)] + 0x1f)];
              bVar5 = pbVar15[7];
              if (bVar5 == 0xe) {
                bVar5 = pbVar15[8];
              }
              puVar13 = (undefined4 *)puVar14;
              if (bVar5 == 0x29) {
LAB_000c5404:
                *(undefined4 *)(puVar14 + -4) = 0xc540b;
                iVar9 = FUN_000d0f50();
                if ((iVar9 == 0) || (*(byte *)(iVar9 + 3) == pbVar15[6])) goto LAB_000c541b;
              }
              else {
                bVar5 = pbVar15[7];
                if (bVar5 == 0xe) {
                  bVar5 = pbVar15[8];
                }
                if (bVar5 == 0x28) goto LAB_000c5404;
                bVar5 = pbVar15[7];
                if (bVar5 == 0xe) {
                  bVar5 = pbVar15[8];
                }
                if (bVar5 == 0x2b) goto LAB_000c5404;
                bVar5 = pbVar15[7];
                if (bVar5 == 0xe) {
                  bVar5 = pbVar15[8];
                }
                if (bVar5 == 0x2a) goto LAB_000c5404;
LAB_000c541b:
                if (((*pbVar15 & 0x10) == 0) && ((pbVar15[1] & 2) == 0)) {
                  *(undefined4 *)(puVar14 + -4) = 0;
                  puVar13 = (undefined4 *)(puVar14 + -8);
                  *(undefined4 *)(puVar14 + -8) = 0;
                  *(undefined4 *)(puVar14 + -0xc) = 0xc5446;
                  FUN_0008608c();
                }
              }
              puVar14 = (undefined1 *)puVar13;
              pbVar15 = pbVar2;
            } while (DAT_001ae9fc < pbVar2);
          }
        }
        (&DAT_002e0589)[iVar6 * 0xa84] = 0;
        (&DAT_002e15e9)[uVar7] = 0;
        *(undefined4 *)(&DAT_002e15ea + uVar7) = 0;
        *(undefined4 *)((int)puVar13 + -4) = 0xc5478;
        iVar6 = FUN_00024998();
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 0x16) = 8;
        }
        *(undefined4 *)((int)puVar13 + -4) = 0xc5496;
        iVar6 = FUN_00024998();
        if (iVar6 != 0) {
          *(undefined1 *)(iVar6 + 0x16) = 8;
        }
        uVar1 = *(ushort *)
                 (&DAT_002ddd52 +
                 (uint)*(ushort *)
                        (&DAT_002e05a2 +
                        (*(int *)(*(int *)((int)puVar13 + 0x14) + 3) >> 0x18) * 0x1508) * 0x45);
        *(undefined1 **)((int)puVar13 + 8) =
             &DAT_002ddd1b +
             (uint)*(ushort *)
                    (&DAT_002e05a2 + (*(int *)(*(int *)((int)puVar13 + 0x14) + 3) >> 0x18) * 0x1508)
             * 0x45;
        uVar11 = (uint)uVar1;
        while (uVar11 != 0) {
          *(uint *)((int)puVar13 + 0xc) = (uint)*(ushort *)(&DAT_002d33c6 + uVar11 * 6);
          *(int *)((int)puVar13 + 0x1c) = ((int)uVar11 % 0x55) * 3;
          *(int *)((int)puVar13 + 0x10) = ((int)uVar11 / 0x55) * 3;
          if (**(int **)((int)puVar13 + 8) >> 0x18 != (uint)DAT_002eb543) {
            *(short *)(&DAT_002e105e + (**(int **)((int)puVar13 + 8) >> 0x18) * 0x1508) =
                 *(short *)(&DAT_002e105e + (**(int **)((int)puVar13 + 8) >> 0x18) * 0x1508) + 1;
          }
          iVar9 = *(int *)((int)puVar13 + 0x10);
          iVar3 = *(int *)((int)puVar13 + 0x1c);
          *(undefined4 *)((int)puVar13 + -4) = 0xc5572;
          FUN_000c8654();
          iVar6 = iVar9 + 3;
          *(int *)((int)puVar13 + 0x18) = iVar6;
          iVar4 = iVar9 - iVar6;
          bVar16 = SBORROW4(iVar9,iVar6);
          while (bVar16 != iVar4 < 0) {
            for (iVar6 = *(int *)((int)puVar13 + 0x1c); iVar6 < iVar3 + 3; iVar6 = iVar6 + 1) {
              *(undefined4 *)((int)puVar13 + -4) = 0xc55ac;
              FUN_00025f6f();
            }
            iVar9 = iVar9 + 1;
            iVar4 = iVar9 - *(int *)((int)puVar13 + 0x18);
            bVar16 = SBORROW4(iVar9,*(int *)((int)puVar13 + 0x18));
          }
          uVar11 = *(uint *)((int)puVar13 + 0xc);
        }
        *(undefined4 *)((int)puVar13 + -4) = 0xc55bd;
        uVar12 = FUN_00072af4();
        return CONCAT44(*(undefined4 *)((int)puVar13 + 0x2c),uVar12);
      }
      *(undefined4 *)((int)puVar13 + -4) = 0xc518a;
      uVar12 = FUN_00024998();
      return CONCAT44(*(undefined4 *)((int)puVar13 + 0x2c),uVar12);
    }
  }
LAB_000c4569:
  return CONCAT44(*(undefined4 *)(puVar14 + 0x2c),uVar11);
}

/******************************************************************************
 * Function : sub_0c55c8 (Ghidra: FUN_000c55c8)
 * Prototype: void sub_0c55c8(void);
 * Address  : 0xc55c8 (Size: 428 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x6e538, 0x6f865, 0xad148, 0xad23c
 ******************************************************************************/
void FUN_000c55c8(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar2 = (undefined4 *)&stack0xffffffe8;
  iVar1 = ((DAT_001ace04 - (*(int *)(in_EAX + 0x5c) >> 0x10)) * 0x180) / DAT_001ace04;
  if (*(char *)(in_EAX + 7) == '\x03') {
    return;
  }
  *(undefined2 *)(in_EAX + 0x3e) = 0;
  *(int *)(in_EAX + 0x40) =
       *(int *)(in_EAX + 0x40) +
       (int)(0x900 / (longlong)(int)(0x900 / (longlong)(iVar1 + 0x80))) *
       (*(int *)(in_EAX + 0x11) >> 0x18);
  uStack_1c = 0xc5659;
  FUN_000ad23c();
  uStack_1c = 0xc5667;
  FUN_000ad148();
  if (*(int *)(in_EAX + 0x40) < 0) {
    *(undefined4 *)(in_EAX + 0x40) = 0;
    uStack_1c = 0xc5684;
    FUN_000ad148();
    *(undefined1 *)(in_EAX + 0x14) = 1;
  }
  if (0x8ff < *(int *)(in_EAX + 0x40)) {
    *(undefined4 *)(in_EAX + 0x40) = 0x8ff;
    uStack_1c = 0xc56ac;
    FUN_000ad148();
    *(undefined1 *)(in_EAX + 0x14) = 0xff;
    iVar1 = DAT_003d8c64;
    if (DAT_003d8c64 == 0) {
      uStack_1c = 0x100;
      uStack_20 = 6;
      uStack_24 = 1;
      puVar2 = &uStack_28;
      uStack_28 = 3;
      FUN_0006e538();
      bVar3 = DAT_003d8c64 != 0;
      DAT_003d8c64 = iVar1;
      if (bVar3) goto LAB_000c5724;
    }
    else {
      uStack_1c = 0x100;
      uStack_20 = 6;
      uStack_24 = 1;
      puVar2 = &uStack_28;
      uStack_28 = 3;
      FUN_0006e538();
      if (DAT_003d8c64 != 0) {
        DAT_003d8c64 = 0;
        goto LAB_000c5724;
      }
    }
    puVar2 = &uStack_28;
    DAT_003d8c64 = 1;
  }
LAB_000c5724:
  iVar1 = *(int *)(in_EAX + 0x40) >> 0x1f;
  *(char *)(in_EAX + 0x48) =
       (char)((*(int *)(in_EAX + 0x40) + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0) >> 8);
  *(undefined4 *)((int)puVar2 + -4) = 0xc5748;
  iVar1 = FUN_0006f865();
  if (iVar1 == 0) {
    *(undefined4 *)((int)puVar2 + -4) = 0x100;
    *(undefined4 *)((int)puVar2 + -8) = 6;
    *(undefined4 *)((int)puVar2 + -0xc) = 1;
    *(undefined4 *)((int)puVar2 + -0x10) = 3;
    *(undefined4 *)((int)puVar2 + -0x14) = 0xc576d;
    FUN_0006e538();
  }
  return;
}

/******************************************************************************
 * Function : sub_0c577c (Ghidra: FUN_000c577c)
 * Prototype: undefined4 sub_0c577c(void);
 * Address  : 0xc577c (Size: 39 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8bde8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000c577c(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x1a);
  if (bVar1 < 6) {
    if (bVar1 != 3) {
      return 0;
    }
  }
  else if (6 < bVar1) {
    if (bVar1 < 0x2b) {
      return 0;
    }
    if (0x2b < bVar1) {
      if (bVar1 < 0x34) {
        return 0;
      }
      if (0x38 < bVar1) {
        return 0;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0c57a4 (Ghidra: FUN_000c57a4)
 * Prototype: undefined4 sub_0c57a4(void);
 * Address  : 0xc57a4 (Size: 35 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x3b35c, 0x3c17e, 0x3cbaa, 0x5f6c5, 0x61bde, 0x73d8d, 0x849c8, 0x8afd8, 0x8bb2c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000c57a4(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = *(byte *)(in_EAX + 0x1a);
  if (bVar1 < 6) {
    if (bVar1 != 3) {
      return 0;
    }
  }
  else if (6 < bVar1) {
    if (bVar1 < 0x2b) {
      return 0;
    }
    if ((0x2b < bVar1) && (bVar1 != 0x80)) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0c57c4 (Ghidra: FUN_000c57c4)
 * Prototype: undefined4 sub_0c57c4(void);
 * Address  : 0xc57c4 (Size: 406 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x1e119, 0x4ac70, 0x4e120, 0x84904, 0x84ff8, 0x85220
 * Callees  : 1 -> 0xd0f50
 ******************************************************************************/
undefined4 FUN_000c57c4(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  bVar1 = *(byte *)(in_EAX + 0x1a);
  if (bVar1 < 10) {
    if (bVar1 < 3) {
      return 0;
    }
    if ((3 < bVar1) && (bVar1 != 6)) {
      return 0;
    }
  }
  else {
    if (bVar1 < 0xb) {
      if (*(int *)(in_EAX + 3) >> 0x18 != in_EDX) {
        return 0;
      }
      return 1;
    }
    if (0x33 < bVar1) {
      if (0x38 < bVar1) {
        if (bVar1 < 0x56) {
          return 0;
        }
        if (0x5d < bVar1) {
          return 0;
        }
        if (((&DAT_002d33ca)
             [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
              (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6] & 7) != in_EDX) {
          return 0;
        }
        return 1;
      }
      goto LAB_000c5854;
    }
    if (bVar1 != 0x2b) {
      return 0;
    }
  }
  if ((((byte)(&DAT_002d33ca)
              [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
               (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6] & 7) == in_EDX) ||
     (((&DAT_002d33ca)
       [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 + (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]
        ) * 6] & 7) == DAT_002eb543)) {
    return 1;
  }
LAB_000c5854:
  if ((((((&DAT_002d33ca)
          [((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
           (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6] & 7) == in_EDX) &&
       (*(int *)(in_EAX + 3) >> 0x18 == in_EDX)) && (iVar2 = FUN_000d0f50(), iVar2 != 0)) &&
     (*(short *)(iVar2 + 10) == 2)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0c595c (Ghidra: FUN_000c595c)
 * Prototype: undefined4 sub_0c595c(void);
 * Address  : 0xc595c (Size: 33 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4af38, 0x4fe44
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000c595c(void)

{
  int in_EAX;
  int in_EDX;
  
  if (*(int *)(in_EAX + 3) >> 0x18 != in_EDX) {
    return 0;
  }
  if (*(char *)(in_EAX + 0x1a) != '\n') {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0c5980 (Ghidra: FUN_000c5980)
 * Prototype: longlong sub_0c5980(void);
 * Address  : 0xc5980 (Size: 25 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4af38
 * Callees  : 1 -> 0xabe58
 ******************************************************************************/
longlong FUN_000c5980(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (*(char *)(in_EAX + 0x1a) == '\n') {
    FUN_000abe58();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_picking_up_object_0c599c (Ghidra: FUN_000c599c)
 * Prototype: int dk_picking_up_object_0c599c(void);
 * Address  : 0xc599c (Size: 409 bytes)
 * Module   : object.cpp [direct_file_string_xref]
 * OrigLine : object.cpp:1015 ("PICKING UP INVALID OBJECT")
 * Naming   : String 'PICKING UP INVALID OBJECT'
 * Callers  : 1 -> 0x4ac70
 * Callees  : 7 -> 0x444a9, 0x4faf1, 0x6e538, 0x708fa, 0x8ccec, 0xaaecc, 0xddaf0
 * Strings  :
 *   - 0x16bea9: "object.cpp"
 *   - 0x16be8f: "PICKING UP INVALID OBJECT"
 ******************************************************************************/
int FUN_000c599c(void)

{
  uint uVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  undefined4 extraout_ECX;
  
  bVar2 = *(byte *)(in_EAX + 0x1a);
  if (bVar2 < 10) {
    if ((2 < bVar2) && ((bVar2 < 4 || (bVar2 == 6)))) {
LAB_000c59d9:
      if ((*(int *)(in_EAX + 0x13) != 0) &&
         (iVar3 = FUN_000444a9(*(undefined2 *)(in_EAX + 0xd),*(short *)(in_EAX + 0x11) + 0x80),
         iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x13) = extraout_ECX;
      }
      return in_EAX;
    }
  }
  else {
    if (bVar2 < 0xb) {
      uVar1 = DAT_002e8bfa * 0x24a1 + 0x24df;
      DAT_002e8bfa = uVar1 >> 0xd | uVar1 * 0x80000;
      FUN_0006e538(3,0,2,0x100);
      FUN_0008ccec(0xffffffff,0,2);
      FUN_000aaecc();
      return in_EAX;
    }
    if (bVar2 < 0x34) {
      if (bVar2 == 0x2b) goto LAB_000c59d9;
    }
    else {
      if (bVar2 < 0x39) {
        iVar3 = FUN_0004faf1();
        return iVar3;
      }
      if ((0x55 < bVar2) && (bVar2 < 0x5e)) {
        FUN_000708fa();
        return 0;
      }
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("object.cpp", line 1015, "PICKING UP INVALID OBJECT") */
  return 0;
}

/******************************************************************************
 * Function : sub_0c5b38 (Ghidra: FUN_000c5b38)
 * Prototype: undefined8 sub_0c5b38(void);
 * Address  : 0xc5b38 (Size: 738 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x8ccec
 ******************************************************************************/
undefined8 FUN_000c5b38(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uStack_18;
  
  cVar1 = *(char *)(in_EAX + 0x48);
  if (*(short *)(in_EAX + 0x13) == 0) {
    sVar3 = *(short *)(&DAT_0018b913 + (uint)*(byte *)(in_EAX + 0x1a) * 0x16);
  }
  else {
    sVar3 = (short)(((uint)*(byte *)((&DAT_001b0a00)
                                     [*(ushort *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x13)] + 100)
                                     ] + 0x23) * 300) / 0x14) + 300;
  }
  *(short *)(in_EAX + 0x17) = sVar3;
  iVar4 = *(int *)(in_EAX + 0x13) >> 0x10;
  iVar2 = *(int *)(in_EAX + 0x15) >> 0x10;
  if (iVar4 + 0x20 < iVar2) {
    iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0x16;
    *(short *)(in_EAX + 0x15) = *(short *)(in_EAX + 0x15) + 0x20;
    uStack_18 = (uint)(byte)(&DAT_0018b917)[iVar2];
    if (((DAT_00191d3c != '\x02') && (DAT_00191d3c != '\x03')) &&
       (-1 < *(int *)((int)&DAT_002f2223 + (uint)*(ushort *)(&DAT_0018b90b + iVar2) * 2 + 2) >> 0x10
       )) {
      FUN_0008ccec(0,(int)cVar1);
      return CONCAT44(uStack_18,1);
    }
  }
  else if (iVar2 < iVar4 + -0x20) {
    iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0x16;
    *(short *)(in_EAX + 0x15) = *(short *)(in_EAX + 0x15) + -0x20;
    uStack_18 = (uint)(byte)(&DAT_0018b917)[iVar2];
    if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
      if (*(int *)(&DAT_002f29d1 +
                  (uint)*(ushort *)(&DAT_0018b90b + (uint)*(byte *)(in_EAX + 0x1a) * 0x16) * 2) >>
          0x10 < 0) {
        FUN_0008ccec(0,(int)cVar1);
        return CONCAT44(uStack_18,1);
      }
    }
    else if (-1 < *(int *)((int)&DAT_002f2223 + (uint)*(ushort *)(&DAT_0018b90b + iVar2) * 2 + 2) >>
                  0x10) {
      FUN_0008ccec(0,(int)cVar1);
      return CONCAT44(uStack_18,1);
    }
  }
  else {
    *(undefined2 *)(in_EAX + 0x15) = *(undefined2 *)(in_EAX + 0x17);
    uStack_18 = (uint)(byte)(&DAT_0018b917)[(uint)*(byte *)(in_EAX + 0x1a) * 0x16];
    if (((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) &&
       (-1 < *(int *)(&DAT_002f29d1 +
                     (uint)*(ushort *)(&DAT_0018b90b + (uint)*(byte *)(in_EAX + 0x1a) * 0x16) * 2)
             >> 0x10)) {
      FUN_0008ccec(0,(int)cVar1);
      return CONCAT44(uStack_18,1);
    }
  }
  FUN_0008ccec(0,(int)cVar1);
  return CONCAT44(uStack_18,1);
}

/******************************************************************************
 * Function : sub_0c5e1c (Ghidra: FUN_000c5e1c)
 * Prototype: undefined8 sub_0c5e1c(void);
 * Address  : 0xc5e1c (Size: 1033 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x444a9, 0x6e538, 0x6f865, 0x72af4, 0xb3b10, 0xe6a10
 ******************************************************************************/
undefined8 FUN_000c5e1c(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [28];
  
  puVar7 = (ushort *)local_34;
  iVar2 = (*(int *)(in_EAX + 3) >> 0x18) * 0x1508;
  *(undefined2 *)(in_EAX + 0x5e) = 2;
  local_38 = 0xc5e51;
  iVar3 = FUN_0006f865();
  if (iVar3 == 0) {
    local_38 = 0x100;
    local_3c = 3;
    local_40 = 1;
    puVar7 = (ushort *)&local_44;
    local_44 = 3;
    FUN_0006e538();
  }
  uVar4 = *(uint *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
  if ((uVar4 <= (uint)(DAT_002e8bee - *(int *)(in_EAX + 9))) &&
     (uVar8 = DAT_002e8bee - *(int *)(&DAT_002e0b5d + iVar2), uVar8 < uVar4)) {
    iVar3 = (uVar4 + ((int)uVar4 >> 0x1f) * -4) - (uint)(((int)uVar4 >> 0x1f) << 1 < 0);
    iVar5 = iVar3 >> 0x1f;
    uVar4 = (int)(((iVar3 >> 2) + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2;
    iVar3 = *(int *)(&DAT_0018f82f + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
    *(int *)(puVar7 + 4) = (int)uVar4 / iVar3;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    else if ((int)uVar4 < (int)uVar8) {
      uVar8 = uVar4;
    }
    iVar5 = *(int *)(puVar7 + 4);
    *(int *)(&DAT_002e0b5d + iVar2) =
         DAT_002e8bee - *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
    *(int *)(&DAT_002e0b5d + iVar2) = *(int *)(&DAT_002e0b5d + iVar2) - (iVar3 - (int)uVar8 / iVar5)
    ;
  }
  iVar3 = DAT_002e8bee - *(int *)(&DAT_002e0b5d + iVar2);
  if (iVar3 < *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4)) {
    iVar5 = 0;
    iVar9 = iVar3 * 4;
    *(int *)(puVar7 + 8) = iVar3 * 0x100;
    if (-1 < iVar9) goto LAB_000c5f64;
    iVar3 = 0;
    while( true ) {
      *(int *)(puVar7 + 6) = iVar3 * 8;
      iVar3 = (iVar3 * 8 * (&DAT_001927e0)[*(uint *)(puVar7 + 8) & 0x7ff] >> 0x10) +
              (uint)*(ushort *)(in_EAX + 0xd);
      iVar6 = (-(*(int *)(puVar7 + 6) * (int)(&PTR_LAB_00192fe0)[*(uint *)(puVar7 + 8) & 0x7ff] >> 8
                ) >> 8) + (uint)*(ushort *)(in_EAX + 0xf);
      if ((((-1 < iVar3) && (iVar3 < 0xff00)) && (-1 < iVar6)) && (iVar6 < 0xff00)) {
        *puVar7 = (short)iVar3;
        puVar7[1] = (ushort)iVar6;
        puVar7[2] = 0x580;
        puVar7[-0xffffffff00000002] = 0x6020;
        puVar7[-0xffffffff00000001] = 0xc;
        FUN_000444a9();
        bVar1 = *(byte *)(in_EAX + 0xe);
        *(uint *)(puVar7 + 6) = (uint)*(byte *)(in_EAX + 0x10);
        *(uint *)(puVar7 + 0xc) = ((uint)*(byte *)((int)puVar7 + 3) - *(int *)(puVar7 + 6)) + 0xd;
        iVar3 = ((uint)*(byte *)((int)puVar7 + 1) - (uint)bVar1) + 0xd;
        iVar5 = extraout_ECX;
        if ((*puVar7 < 0xff00) && (puVar7[1] < 0xff00)) {
          *(undefined1 *)
           ((int)&DAT_002e0589 + iVar3 + *(int *)(puVar7 + 0xc) * 0x1a + iVar2 + 0x5dd) = 1;
        }
        else {
          *(undefined1 *)
           ((int)&DAT_002e0589 + iVar3 + *(int *)(puVar7 + 0xc) * 0x1a + iVar2 + 0x5dd) = 0;
        }
      }
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 1;
      *(int *)(puVar7 + 8) = *(int *)(puVar7 + 8) + 0x40;
      if (3 < iVar5) break;
      if (iVar9 < 0) {
        iVar3 = 0;
      }
      else {
LAB_000c5f64:
        iVar3 = *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4) >> 0x1f;
        iVar6 = (int)((*(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4) + iVar3 * -4
                      ) - (uint)(iVar3 << 1 < 0)) >> 2;
        iVar3 = iVar9;
        if (iVar6 < iVar9) {
          iVar3 = iVar6;
        }
      }
    }
  }
  else {
    iVar3 = iVar3 - *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
    if (iVar3 < *(int *)(&DAT_0018f82f + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4)) {
      puVar7[2] = 0x580;
      iVar9 = *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4) >> 0x1f;
      iVar5 = *(int *)(&DAT_0018f82f + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
      iVar2 = (((int)((*(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4) + iVar9 * -4
                      ) - (uint)(iVar9 << 1 < 0)) >> 2) * 8) / (iVar5 * 4);
      *(int *)(puVar7 + 10) = iVar2;
      iVar9 = 0;
      iVar2 = (iVar5 * 4 + iVar3 * -4) * iVar2;
      do {
        iVar3 = 0;
        do {
          *puVar7 = *(short *)(in_EAX + 0xd) +
                    (short)((uint)(*(int *)((int)&DAT_001927e0 + iVar3) * iVar2) >> 0x10);
          puVar7[1] = (short)((uint)-(*(int *)((int)&PTR_LAB_00192fe0 + iVar3) * iVar2 >> 8) >> 8) +
                      *(short *)(in_EAX + 0xf);
          puVar7[-0xffffffff00000002] = 0x6180;
          puVar7[-0xffffffff00000001] = 0xc;
          FUN_000444a9();
          iVar3 = extraout_ECX_00;
        } while (extraout_ECX_00 != 0x2000);
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 - *(int *)(puVar7 + 10);
      } while (iVar9 < 4);
    }
    else {
      if (((&DAT_002e0593)[iVar2] & 4) == 0) {
        *(undefined2 *)(&DAT_002e0b61 + iVar2) = 0;
        puVar7[-0xffffffff00000002] = 0x61ad;
        puVar7[-0xffffffff00000001] = 0xc;
        FUN_000e6a10();
        uVar10 = 0;
        puVar7[-0xffffffff00000002] = 0x61b8;
        puVar7[-0xffffffff00000001] = 0xc;
        FUN_00072af4();
        goto LAB_000c6219;
      }
      *(int *)(&DAT_002e0b5d + iVar2) = DAT_002e8bee;
      *puVar7 = (ushort)(byte)(&DAT_002e0b64)[iVar2] * 0x100 + 0x80;
      puVar7[1] = (ushort)(byte)(&DAT_002e0b65)[iVar2] * 0x100 + 0x80;
      puVar7[2] = 0x580;
      puVar7[-0xffffffff00000002] = 0x6207;
      puVar7[-0xffffffff00000001] = 0xc;
      FUN_000e6a10();
      puVar7[-0xffffffff00000002] = 0x6210;
      puVar7[-0xffffffff00000001] = 0xc;
      FUN_000b3b10();
      (&DAT_002e0593)[iVar2] = (&DAT_002e0593)[iVar2] & 0xfb;
    }
  }
  uVar10 = 1;
LAB_000c6219:
  return CONCAT44(*(undefined4 *)(puVar7 + 0x14),uVar10);
}

/******************************************************************************
 * Function : sub_0c6228 (Ghidra: FUN_000c6228)
 * Prototype: undefined8 sub_0c6228(void);
 * Address  : 0xc6228 (Size: 331 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x444a9, 0x72af4, 0xb3788
 ******************************************************************************/
undefined8 FUN_000c6228(void)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  
  *(undefined2 *)(in_EAX + 0x5e) = 2;
  iVar8 = DAT_002e8bee - *(int *)(in_EAX + 9);
  local_1c = 0;
  iVar5 = iVar8 * 0x80;
  uVar7 = 0;
  iVar8 = iVar8 * 0x10;
  do {
    iVar9 = iVar8;
    uVar6 = (uint)*(ushort *)(in_EAX + 0xd) + ((&DAT_001927e0)[uVar7 & 0x7ff] * iVar5 >> 0x10);
    uVar4 = (uint)*(ushort *)(in_EAX + 0xf) +
            (-((int)(&PTR_LAB_00192fe0)[uVar7 & 0x7ff] * iVar5 >> 8) >> 8);
    if ((((-1 < (int)uVar6) && ((int)uVar6 < 0x10000)) && (-1 < (int)uVar4)) &&
       (((int)uVar4 < 0x10000 &&
        ((*(byte *)((int)&DAT_00279203 + ((uVar4 >> 8 & 0xff) * 0x100 + (uVar6 >> 8 & 0xff)) * 5) &
         0x10) == 0)))) {
      uVar2 = (undefined2)uVar6;
      sVar3 = FUN_000b3788(uVar2);
      FUN_000444a9(uVar2,sVar3 + 0x80);
      iVar5 = extraout_ECX;
    }
    iVar5 = iVar5 + 8;
    uVar7 = uVar7 + 0x80;
    local_1c = local_1c + 1;
    iVar8 = iVar9 + 1;
  } while (local_1c < 0x10);
  bVar1 = iVar9 * 8 <= (*(int *)(&DAT_002eb131 + (*(int *)(in_EAX + 0x10) >> 0x18) * 4) / 2) * 0x100
  ;
  if (!bVar1) {
    FUN_00072af4();
  }
  return CONCAT44(in_EDX,(uint)bVar1);
}

/******************************************************************************
 * Function : sub_0c6494 (Ghidra: FUN_000c6494)
 * Prototype: uint sub_0c6494(void);
 * Address  : 0xc6494 (Size: 223 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3f3b8
 * Callees  : 2 -> 0x50e37, 0x72af4
 ******************************************************************************/
uint FUN_000c6494(void)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint in_EAX;
  uint uVar4;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  ushort uVar5;
  int unaff_EBX;
  
  uVar5 = 0;
  uVar4 = (&DAT_001ae9fc)
          [(*(uint *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1)
           & 0x3fffff) >> 0xb];
  if (DAT_001ae9fc < uVar4) {
    do {
      uVar2 = *(ushort *)(uVar4 + 2);
      if (*(char *)(uVar4 + 0x1f) == '\x01') {
        bVar1 = *(byte *)(uVar4 + 0x1a);
        if (bVar1 < 6) {
          if (bVar1 == 3) goto LAB_000c6503;
LAB_000c6527:
          bVar3 = false;
        }
        else {
          if ((6 < bVar1) && ((bVar1 < 0x2b || ((0x2b < bVar1 && (bVar1 != 0x80))))))
          goto LAB_000c6527;
LAB_000c6503:
          bVar3 = true;
        }
        if (bVar3) {
          if (((int)(unaff_EBX - (uint)uVar5) < *(int *)(uVar4 + 0x13)) && (unaff_EBX != -1)) {
            *(uint *)(uVar4 + 0x13) = *(int *)(uVar4 + 0x13) - (unaff_EBX - (uint)uVar5);
            FUN_00050e37();
            return extraout_ECX;
          }
          uVar5 = uVar5 + *(short *)(uVar4 + 0x13);
          FUN_00072af4();
          unaff_EBX = extraout_ECX_00;
        }
      }
      uVar4 = (&DAT_001ae9fc)[uVar2];
    } while (DAT_001ae9fc < uVar4);
  }
  return (uint)uVar5;
}

/******************************************************************************
 * Function : sub_0c6574 (Ghidra: FUN_000c6574)
 * Prototype: longlong sub_0c6574(void);
 * Address  : 0xc6574 (Size: 39 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3b1e2, 0x3bdb1, 0x3c762, 0x3e493, 0x644e9, 0x88698, 0x890bc, 0x8bde8
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000c6574(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(char *)(in_EAX + 0x1f) == '\x01') && ((&DAT_0019103e)[*(byte *)(in_EAX + 0x1a)] != '\0')) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0c659c (Ghidra: FUN_000c659c)
 * Prototype: longlong sub_0c659c(void);
 * Address  : 0xc659c (Size: 43 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3c458, 0x3e493
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000c659c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(char *)(in_EAX + 0x1f) == '\x01') && ((&DAT_001911f3)[*(byte *)(in_EAX + 0x1a)] == '\b')) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0c65c8 (Ghidra: FUN_000c65c8)
 * Prototype: longlong sub_0c65c8(void);
 * Address  : 0xc65c8 (Size: 39 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3b263, 0x3bfa4, 0x3c53a
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000c65c8(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(char *)(in_EAX + 0x1f) == '\x01') && ((&DAT_0019116c)[*(byte *)(in_EAX + 0x1a)] != '\0')) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0c65f0 (Ghidra: FUN_000c65f0)
 * Prototype: uint sub_0c65f0(void);
 * Address  : 0xc65f0 (Size: 319 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5c053
 * Callees  : 1 -> 0xdc4a0
 ******************************************************************************/
uint FUN_000c65f0(void)

{
  int iVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  int local_34;
  int local_28;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  iVar1 = (in_EAX / 3) * 3;
  local_28 = (in_EDX / 3) * 3;
  iVar3 = local_28 + 3;
  do {
    if ((-1 < local_28) && (local_28 < 0x100)) {
      local_34 = iVar1;
      do {
        if (((-1 < local_34) && (local_34 < 0x100)) &&
           (uVar5 = (&DAT_001ae9fc)
                    [(*(uint *)((int)&DAT_00279203 + (local_34 + local_28 * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], DAT_001ae9fc < uVar5)) {
          do {
            if ((*(char *)(uVar5 + 0x1f) == '\x01') &&
               ((&DAT_0019103e)[*(byte *)(uVar5 + 0x1a)] != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((bVar2) && (iVar4 = FUN_000dc4a0(), iVar4 < local_18)) {
              local_1c = uVar5;
              local_18 = iVar4;
            }
            uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 2)];
          } while (DAT_001ae9fc < uVar5);
        }
        local_34 = local_34 + 1;
      } while (local_34 != iVar1 + 3);
    }
    local_28 = local_28 + 1;
  } while (local_28 != iVar3);
  return local_1c;
}

/******************************************************************************
 * Function : sub_0c6758 (Ghidra: FUN_000c6758)
 * Prototype: uint sub_0c6758(void);
 * Address  : 0xc6758 (Size: 306 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5c053
 * Callees  : 1 -> 0xdc4a0
 ******************************************************************************/
uint FUN_000c6758(void)

{
  int iVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  int local_34;
  int local_28;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  iVar1 = (in_EAX / 3) * 3;
  local_28 = (in_EDX / 3) * 3;
  iVar3 = local_28 + 3;
  do {
    if ((-1 < local_28) && (local_28 < 0x100)) {
      local_34 = iVar1;
      do {
        if (((-1 < local_34) && (local_34 < 0x100)) &&
           (uVar5 = (&DAT_001ae9fc)
                    [(*(uint *)((int)&DAT_00279203 + (local_34 + local_28 * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], DAT_001ae9fc < uVar5)) {
          do {
            if ((*(char *)(uVar5 + 0x1f) == '\x01') &&
               ((&DAT_0019116c)[*(byte *)(uVar5 + 0x1a)] != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((bVar2) && (iVar4 = FUN_000dc4a0(), iVar4 < local_18)) {
              local_1c = uVar5;
              local_18 = iVar4;
            }
            uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 2)];
          } while (DAT_001ae9fc < uVar5);
        }
        local_34 = local_34 + 1;
      } while (local_34 != iVar1 + 3);
    }
    local_28 = local_28 + 1;
  } while (local_28 != iVar3);
  return local_1c;
}

/******************************************************************************
 * Function : sub_0c688c (Ghidra: FUN_000c688c)
 * Prototype: longlong sub_0c688c(void);
 * Address  : 0xc688c (Size: 39 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3b1e2, 0x3bdb1, 0x3c762, 0x3e493, 0x5c053, 0x88698, 0x890bc, 0x8bde8
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000c688c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(char *)(in_EAX + 0x1f) == '\x01') && ((&DAT_001910c5)[*(byte *)(in_EAX + 0x1a)] != '\0')) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0c68b4 (Ghidra: FUN_000c68b4)
 * Prototype: uint sub_0c68b4(void);
 * Address  : 0xc68b4 (Size: 306 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5c053
 * Callees  : 1 -> 0xdc4a0
 ******************************************************************************/
uint FUN_000c68b4(void)

{
  int iVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  int local_34;
  int local_28;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  iVar1 = (in_EAX / 3) * 3;
  local_28 = (in_EDX / 3) * 3;
  iVar3 = local_28 + 3;
  do {
    if ((-1 < local_28) && (local_28 < 0x100)) {
      local_34 = iVar1;
      do {
        if (((-1 < local_34) && (local_34 < 0x100)) &&
           (uVar5 = (&DAT_001ae9fc)
                    [(*(uint *)((int)&DAT_00279203 + (local_34 + local_28 * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], DAT_001ae9fc < uVar5)) {
          do {
            if ((*(char *)(uVar5 + 0x1f) == '\x01') &&
               ((&DAT_001910c5)[*(byte *)(uVar5 + 0x1a)] != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if ((bVar2) && (iVar4 = FUN_000dc4a0(), iVar4 < local_18)) {
              local_1c = uVar5;
              local_18 = iVar4;
            }
            uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 2)];
          } while (DAT_001ae9fc < uVar5);
        }
        local_34 = local_34 + 1;
      } while (local_34 != iVar1 + 3);
    }
    local_28 = local_28 + 1;
  } while (local_28 != iVar3);
  return local_1c;
}

/******************************************************************************
 * Function : sub_0c69e8 (Ghidra: FUN_000c69e8)
 * Prototype: uint sub_0c69e8(void);
 * Address  : 0xc69e8 (Size: 283 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5c053
 * Callees  : 1 -> 0xdc4a0
 ******************************************************************************/
uint FUN_000c69e8(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  uint uVar4;
  int local_2c;
  int local_20;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  iVar1 = (in_EAX / 3) * 3;
  local_2c = (in_EDX / 3) * 3;
  iVar2 = local_2c + 3;
  do {
    if ((-1 < local_2c) && (local_2c < 0x100)) {
      local_20 = iVar1;
      do {
        if (((-1 < local_20) && (local_20 < 0x100)) &&
           (uVar4 = (&DAT_001ae9fc)
                    [(*(uint *)((int)&DAT_00279203 + (local_20 + local_2c * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], DAT_001ae9fc < uVar4)) {
          do {
            if ((*(char *)(uVar4 + 0x1f) == '\x01') && (iVar3 = FUN_000dc4a0(), iVar3 < local_18)) {
              local_1c = uVar4;
              local_18 = iVar3;
            }
            uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)];
          } while (DAT_001ae9fc < uVar4);
        }
        local_20 = local_20 + 1;
      } while (local_20 != iVar1 + 3);
    }
    local_2c = local_2c + 1;
  } while (local_2c != iVar2);
  return local_1c;
}

/******************************************************************************
 * Function : sub_0c6b04 (Ghidra: FUN_000c6b04)
 * Prototype: int sub_0c6b04(void);
 * Address  : 0xc6b04 (Size: 160 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xc6ba4, 0xc6be0
 * Callees  : 4 -> 0x50f1a, 0x5117d, 0x5131e, 0xb3788
 ******************************************************************************/
int FUN_000c6b04(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  short sVar4;
  
  iVar2 = FUN_0005131e();
  if (iVar2 == 0) {
    sVar4 = ((short)(in_EDX % 0x55) * 3 + 1) * 0x100 + 0x80;
    uVar1 = FUN_000b3788(sVar4);
    iVar3 = FUN_00050f1a(sVar4,uVar1);
    iVar2 = extraout_ECX_00;
    if (iVar3 != 0) {
      iVar2 = extraout_ECX_00 - *(int *)(iVar3 + 0x13);
    }
  }
  else {
    iVar2 = FUN_0005117d();
    iVar2 = extraout_ECX - iVar2;
  }
  return iVar2;
}

