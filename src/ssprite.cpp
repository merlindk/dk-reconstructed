/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: ssprite.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 25
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0db120 (Ghidra: FUN_000db120)
 * Prototype: void sub_0db120(int param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xdb120 (Size: 110 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000db120(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  int in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  _DAT_003d97a4 = DAT_0018429c / 2;
  _DAT_003d9788 = in_EAX;
  _DAT_003d97a8 = DAT_001842a0 / 2;
  _DAT_003d978c = in_EDX;
  DAT_003d9784 = param_3;
  DAT_003d9790 = unaff_EBX;
  DAT_003d97a0 = param_2;
  DAT_003d9798 = in_ECX;
  DAT_003d9794 = param_1;
  DAT_003d979c = in_ECX - param_1;
  return;
}

/******************************************************************************
 * Function : sub_0db1a4 (Ghidra: FUN_000db1a4)
 * Prototype: void sub_0db1a4(void);
 * Address  : 0xdb1a4 (Size: 1053 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x98614, 0x98cb8, 0x9bdf0
 * Callees  : 3 -> 0xa49ec, 0xa5030, 0xb0d0c
 ******************************************************************************/
void FUN_000db1a4(void)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  ushort in_AX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  int local_3c;
  int local_38;
  int local_34;
  
  bVar9 = 0;
  do {
    iVar3 = (&DAT_001ae9fc)[in_AX];
    if ((*(byte *)(iVar3 + 0x4f) & 1) == 0) {
      switch(*(byte *)(iVar3 + 0x50) >> 2) {
      case 2:
        local_3c = (int)(short)(*(short *)(iVar3 + 0xd) - DAT_003d9788);
        local_34 = (int)(short)(DAT_003d978c - *(short *)(iVar3 + 0xf));
        local_38 = (uint)*(ushort *)(iVar3 + 0x60) - DAT_003d9790;
        local_44 = 0;
        if ((*(char *)(iVar3 + 0x1f) == '\x05') && ((*(byte *)(iVar3 + 0x25) & 4) == 0)) {
          iVar5 = FUN_000b0d0c();
          iVar6 = 0;
          if (0 < iVar5) {
            do {
              FUN_000a49ec();
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar5);
          }
        }
        local_38 = (*(int *)(iVar3 + 0xf) >> 0x10) - DAT_003d9790;
        if (*(char *)(iVar3 + 0x1f) == '\x05') {
          FUN_000a5030();
        }
        (*DAT_00388300)();
        if (DAT_00387d20 < DAT_0033317f) {
          iVar5 = local_34 + -0x40 >> 0x1f;
          iVar5 = (int)((local_34 + -0x40 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4;
          if (DAT_00191d3c == '\0') {
            iVar5 = iVar5 + -6;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          else if (0x2be < iVar5) {
            iVar5 = 0x2be;
          }
          uVar4 = (&DAT_00387220)[iVar5];
          *(undefined1 *)(DAT_00387d20 + 1) = 0xb;
          *DAT_00387d20 = uVar4;
          (&DAT_00387220)[iVar5] = DAT_00387d20;
          DAT_00387d20[2] = iVar3;
          DAT_00387d20[3] = local_4c;
          DAT_00387d20[4] = local_48;
          piVar1 = DAT_00387d20 + 5;
          DAT_00387d20 = DAT_00387d20 + 6;
          *piVar1 = local_34;
        }
        break;
      case 3:
        local_3c = (int)(short)(*(short *)(iVar3 + 0xd) - DAT_003d9788);
        local_34 = (int)(short)(DAT_003d978c - *(short *)(iVar3 + 0xf));
        local_44 = 0;
        local_38 = (*(int *)(iVar3 + 0xf) >> 0x10) - DAT_003d9790;
        puVar7 = &local_4c;
        puVar8 = &DAT_00387d3c;
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        DAT_00387d4c = 0;
        DAT_00387d50 = 0;
        DAT_00387d54 = 0;
        break;
      case 4:
        local_3c = (int)(short)(*(short *)(iVar3 + 0xd) - DAT_003d9788);
        local_34 = (int)(short)(DAT_003d978c - *(short *)(iVar3 + 0xf));
        local_38 = (*(int *)(iVar3 + 0xf) >> 0x10) - DAT_003d9790;
        (*DAT_00388300)();
        if (DAT_00387d20 < DAT_0033317f) {
          *(undefined1 *)(DAT_00387d20 + 1) = 0x10;
          *DAT_00387d20 = DAT_00387224;
          DAT_00387224 = DAT_00387d20;
          DAT_00387d20[2] = local_4c;
          DAT_00387d20[3] = local_48;
          puVar7 = DAT_00387d20 + 4;
          DAT_00387d20 = DAT_00387d20 + 5;
          *puVar7 = *(undefined4 *)(iVar3 + 0x13);
        }
        break;
      case 5:
        local_3c = (int)(short)(*(short *)(iVar3 + 0xd) - DAT_003d9788);
        local_34 = (int)(short)(DAT_003d978c - *(short *)(iVar3 + 0xf));
        local_38 = (*(int *)(iVar3 + 0xf) >> 0x10) - DAT_003d9790;
        (*DAT_00388300)();
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
          puVar7 = DAT_00387d20;
          if (*(char *)(iVar3 + 0x19) == '(') {
            iVar5 = local_34 + -0x40 >> 0x1f;
            iVar5 = ((int)((local_34 + -0x40 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4) + -6;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            else if (0x2be < iVar5) {
              iVar5 = 0x2be;
            }
            uVar4 = (&DAT_00387220)[iVar5];
            *(undefined1 *)(DAT_00387d20 + 1) = 0x11;
            *DAT_00387d20 = uVar4;
            (&DAT_00387220)[iVar5] = DAT_00387d20;
            DAT_00387d20[2] = local_4c;
            DAT_00387d20[3] = local_48;
            puVar8 = DAT_00387d20 + 4;
            puVar2 = (undefined2 *)((int)DAT_00387d20 + 6);
            DAT_00387d20 = puVar8;
            *puVar2 = *(undefined2 *)(iVar3 + 0x13);
            if (puVar8 < DAT_0033317f) {
              *(undefined1 *)(puVar7 + 5) = 0x13;
              *puVar8 = DAT_00387224;
              DAT_00387224 = puVar8;
              puVar7[6] = local_4c;
              puVar7[7] = local_48;
              DAT_00387d20 = puVar7 + 8;
              *(undefined2 *)((int)puVar7 + 0x16) = *(undefined2 *)(iVar3 + 0x13);
            }
          }
        }
        break;
      case 6:
        local_3c = (int)(short)(*(short *)(iVar3 + 0xd) - DAT_003d9788);
        local_34 = (int)(short)(DAT_003d978c - *(short *)(iVar3 + 0xf));
        local_38 = (*(int *)(iVar3 + 0xf) >> 0x10) - DAT_003d9790;
        (*DAT_00388300)();
        if (DAT_00387d20 < DAT_0033317f) {
          *(undefined1 *)(DAT_00387d20 + 1) = 0x12;
          *DAT_00387d20 = DAT_00387224;
          DAT_00387224 = DAT_00387d20;
          DAT_00387d20[2] = iVar3;
          DAT_00387d20[3] = local_4c;
          DAT_00387d20[4] = local_48;
          piVar1 = DAT_00387d20 + 5;
          DAT_00387d20 = DAT_00387d20 + 6;
          *piVar1 = local_34;
        }
      }
    }
    in_AX = *(ushort *)(iVar3 + 2);
  } while (in_AX != 0);
  return;
}

/******************************************************************************
 * Function : dk_graphic_id_model_class_0db5c4 (Ghidra: FUN_000db5c4)
 * Prototype: void dk_graphic_id_model_class_0db5c4(void);
 * Address  : 0xdb5c4 (Size: 1449 bytes)
 * Module   : ssprite.cpp [direct_file_string_xref]
 * OrigLine : ssprite.cpp:922
 * Naming   : String 'Invalid graphic Id %d from model %d, class %d'
 * Callers  : 1 -> 0x9ff84
 * Callees  : 5 -> 0x4c2eb, 0x4c7eb, 0xb0c44, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c90a: "ssprite.cpp"
 *   - 0x16c8dc: "Invalid graphic Id %d from model %d, class %d"
 ******************************************************************************/
void FUN_000db5c4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  char **ppcVar10;
  char *pcStack_50;
  uint uStack_4c;
  uint local_48 [6];
  ushort local_30;
  undefined2 uStack_2e;
  short local_2c;
  undefined2 uStack_2a;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  
  ppcVar10 = (char **)(local_48 + 2);
  local_48[4] = (uint)DAT_003d9874;
  iVar2 = *(int *)(in_EAX + 8);
  local_1c = DAT_003d9581;
  if (*(char *)(DAT_002f10da + 8 +
               (uint)*(ushort *)((int)&PTR_DAT_00179450 + (*(int *)(iVar2 + 0x42) >> 0x10) * 2) *
               0x10) == '\0') {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x52);
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x52) - DAT_003d9784;
  }
  local_2c = (short)uVar8;
  uStack_2a = (undefined2)(uVar8 >> 0x10);
  if (DAT_00191d3c == '\0') {
    iVar7 = 0x10000;
    if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
      local_48[1] = 0xdb6b9;
      uVar6 = FUN_000b0c44();
      iVar9 = CONCAT22(extraout_var_00,uVar6);
    }
    else {
      iVar9 = 0x2000;
    }
  }
  else {
    iVar7 = *(int *)(in_EAX + 0x14);
    if (DAT_003d9794 < iVar7) {
      if (iVar7 < DAT_003d9798) {
        if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
          local_48[1] = 0xdb66f;
          uVar5 = FUN_000b0c44();
          uVar8 = (uint)uVar5;
          iVar9 = extraout_ECX;
        }
        else {
          uVar8 = 0x2000;
          iVar9 = DAT_003d979c;
        }
        iVar9 = (int)(((longlong)(DAT_003d9798 - iVar7) * (longlong)(int)uVar8) / (longlong)iVar9);
      }
      else {
        iVar9 = 0;
      }
    }
    else if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
      local_48[1] = 0xdb697;
      uVar6 = FUN_000b0c44();
      iVar9 = CONCAT22(extraout_var,uVar6);
    }
    else {
      iVar9 = 0x2000;
    }
  }
  iVar7 = (int)((uint)*(ushort *)(iVar2 + 0x46) * DAT_003d97a0) / iVar7;
  if ((*(byte *)(iVar2 + 0x4f) & 0xc) == 0) {
    if (iVar9 >> 8 == 0x20) {
      DAT_003d9874 = DAT_003d9874 & 0xf7ff;
    }
    else {
      DAT_003de9a8 = &DAT_00361c10 + (iVar9 >> 8) * 0x100;
      DAT_003d9874 = DAT_003d9874 | 0x800;
    }
  }
  else {
    DAT_003de9a8 = &DAT_00365c10 + (uint)*(byte *)(iVar2 + 0x51) * 0x100;
    DAT_003d9874 = DAT_003d9874 | 0x800;
  }
  DAT_003d9581 = 0;
  bVar4 = (*(byte *)(iVar2 + 0x4f) & 0x3f) >> 4;
  if (bVar4 == 1) {
    DAT_003d9874 = DAT_003d9874 & 0xf7ff | 8;
  }
  else if (bVar4 == 2) {
    DAT_003d9874 = DAT_003d9874 & 0xf7ff | 4;
  }
  else if (bVar4 == 3) {
    DAT_003d9581 = 1;
  }
  cVar1 = *(char *)(iVar2 + 0x1f);
  if (((cVar1 == '\x05') || (cVar1 == '\x01')) || (cVar1 == '\x04')) {
    iVar9 = (DAT_002f10ce >> 0x18) * 0x4ef;
    if ((*(short *)(iVar2 + 0x1b) == *(short *)(&DAT_0019d0fd + iVar9)) && ((DAT_002e8bee & 2) != 0)
       ) {
      if (*(char *)(*(int *)((int)&DAT_0019d100 + iVar9) + 6) == '\x02') {
        DAT_003de9a8 = &DAT_003d9584;
        DAT_003d9874 = DAT_003d9874 | 0x800;
      }
    }
    else if ((*(byte *)(iVar2 + 0x4f) & 0x80) != 0) {
      DAT_003de9a8 = &DAT_003d9684;
      DAT_003d9874 = DAT_003d9874 | 0x800;
      *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) & 0x7f;
    }
    DAT_003d9580 = 1;
    DAT_003d957c = iVar2;
  }
  else {
    DAT_003d9580 = 0;
    DAT_003d957c = 0;
  }
  if (0x3d5 < *(byte *)(iVar2 + 0x48)) {
    local_48[1] = (uint)*(byte *)(iVar2 + 0x1f);
    local_48[0] = (uint)*(byte *)(iVar2 + 0x1a);
    uStack_4c = *(int *)(iVar2 + 0x42) >> 0x10;
    pcStack_50 = s_Invalid_graphic_Id__d_from_model_0016c8dc;
    FUN_000e7714(&DAT_0019cbac);
    local_48[1] = 0xdb86c;
    FUN_000ddaf0(); /* LbErrorLog("ssprite.cpp", line 922, g_log_buf) */
    ppcVar10 = (char **)(local_48 + 2);
    goto LAB_000dbb50;
  }
  iVar9 = DAT_002f10ce >> 0x18;
  if (*(char *)(iVar2 + 0x1f) == '\x01') {
    bVar4 = *(byte *)(iVar2 + 0x1a);
    if (bVar4 < 4) {
      if (bVar4 == 2) goto LAB_000db8dd;
      goto LAB_000dbb2b;
    }
    if ((4 < bVar4) && (bVar4 != 0x1c)) goto LAB_000dbb2b;
LAB_000db8dd:
    local_48[5] = iVar7 >> 2;
    local_24 = iVar7 >> 1;
    iVar3 = CONCAT22(uStack_2a,local_2c);
    if (*(char *)(iVar2 + 0x1a) == '\x1c') {
      local_30 = 0x70;
      if ((&DAT_0019d51a)[iVar9 * 0x4ef] == '\x01') {
        local_20 = iVar7 >> 3;
        local_24 = local_48[5] - iVar7;
      }
      else {
        local_48[3] = (&DAT_001927e0)[iVar3] * iVar7 >> 0x14;
        local_24 = (int)(&PTR_LAB_00192fe0)[iVar3] * (-local_24 - iVar7) >> 0x10;
        local_20 = local_48[3];
      }
      local_28 = iVar7 / 2;
    }
    else {
      local_30 = 0x71;
      if (*(char *)(iVar2 + 0x1a) == '\x02') {
        if ((&DAT_0019d51a)[iVar9 * 0x4ef] == '\x01') {
          local_20 = 0;
          local_24 = iVar7 * 3 >> 3;
        }
        else {
          local_20 = (&DAT_001927e0)[iVar3] * iVar7 >> 0x14;
          local_24 = (int)(&PTR_LAB_00192fe0)[iVar3] * iVar7 >> 0x14;
        }
        local_28 = (iVar7 / 3) * 2;
      }
      else {
        if ((&DAT_0019d51a)[iVar9 * 0x4ef] == '\x01') {
          local_20 = (int)local_48[5] / 3;
        }
        else {
          local_48[3] = (&DAT_001927e0)[iVar3] * iVar7 >> 0x14;
          local_24 = (-local_24 - iVar7) * (int)(&PTR_LAB_00192fe0)[iVar3] >> 0x10;
          local_20 = local_48[3];
        }
        local_24 = local_24 / 3;
        local_28 = iVar7 / 3;
      }
    }
    uStack_2e = 0;
    local_48[1] = 0xdba81;
    uVar8 = FUN_0004c2eb();
    local_48[2] = (*(ushort *)(iVar2 + 0x1b) + DAT_002e8bee) % (uVar8 & 0xff);
    DAT_003d9581 = 0;
    local_48[0] = (uint)*(byte *)(iVar2 + 0x48);
    local_48[3] = (uint)local_2c;
    uStack_4c = 0xdbad6;
    local_48[1] = iVar7;
    FUN_0004c7eb();
    DAT_003d9581 = 1;
    uStack_4c = (uint)local_30;
    pcStack_50 = (char *)(local_48[0] & 0xff);
    ppcVar10 = &pcStack_50;
  }
  else {
    if ((((*(char *)(iVar2 + 0x1f) == '\b') && (*(char *)(iVar2 + 0x1a) != '\x01')) &&
        (*(int *)(iVar2 + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef])) &&
       (*(char *)(iVar2 + 0x18) == '\0')) goto LAB_000dbb50;
LAB_000dbb2b:
    local_48[0] = (uint)*(byte *)(iVar2 + 0x48);
    ppcVar10 = (char **)local_48;
    local_48[1] = iVar7;
  }
  *(undefined4 *)((int)ppcVar10 + -4) = 0xdbb50;
  FUN_0004c7eb();
LAB_000dbb50:
  DAT_003d9874 = (short)*(undefined4 *)((int)ppcVar10 + 8);
  DAT_003d9581 = *(undefined1 *)((int)ppcVar10 + 0x24);
  return;
}

/******************************************************************************
 * Function : sub_0dbb70 (Ghidra: FUN_000dbb70)
 * Prototype: void sub_0dbb70(void);
 * Address  : 0xdbb70 (Size: 18 bytes)
 * Module   : ssprite.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa6504
 * Callees  : 1 -> 0xdbb84
 ******************************************************************************/
void FUN_000dbb70(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 6) == '\x05') {
    FUN_000dbb84();
  }
  return;
}

/******************************************************************************
 * Function : dk_graphic_id_model_class_0dbb84 (Ghidra: FUN_000dbb84)
 * Prototype: void dk_graphic_id_model_class_0dbb84(void);
 * Address  : 0xdbb84 (Size: 1372 bytes)
 * Module   : ssprite.cpp [direct_file_string_xref]
 * OrigLine : ssprite.cpp:1161
 * Naming   : String 'Invalid graphic Id %d from model %d, class %d'
 * Callers  : 2 -> 0xa6504, 0xdbb70
 * Callees  : 5 -> 0x4c2eb, 0x4c7eb, 0xb0c44, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c944: "ssprite.cpp"
 *   - 0x16c916: "Invalid graphic Id %d from model %d, class %d"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

void FUN_000dbb84(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int iVar4;
  int iVar5;
  char **ppcVar6;
  uint uVar7;
  char *pcStack_48;
  uint auStack_44 [7];
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  
  ppcVar6 = (char **)(auStack_44 + 3);
  auStack_44[4] = (uint)DAT_003d9874;
  iVar2 = *(int *)(in_EDX + 8);
  local_18 = DAT_003d9581;
  if (*(char *)(DAT_002f10da + 8 +
               (uint)*(ushort *)((int)&PTR_DAT_00179450 + (*(int *)(iVar2 + 0x42) >> 0x10) * 2) *
               0x10) == '\0') {
    local_28 = (uint)*(ushort *)(iVar2 + 0x52);
  }
  else {
    local_28 = (uint)*(ushort *)(iVar2 + 0x52) - (uint)*(ushort *)(in_EAX + 7);
  }
  bVar3 = (*(byte *)(iVar2 + 0x4f) & 0x3f) >> 4;
  if (bVar3 == 1) {
    DAT_003d9874 = DAT_003d9874 | 8;
  }
  else if (bVar3 == 2) {
    DAT_003d9874 = DAT_003d9874 | 4;
  }
  if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
    auStack_44[2] = 0xdbc2a;
    uVar7 = FUN_000b0c44();
    uVar7 = uVar7 & 0xffff;
    in_EAX = extraout_ECX;
  }
  else {
    uVar7 = 0x2000;
  }
  iVar4 = *(int *)(in_EAX + 0x17) * 0x2000;
  iVar5 = iVar4 >> 0x1f;
  auStack_44[2] =
       (int)((uint)*(ushort *)(iVar2 + 0x46) *
            (((int)((iVar4 + iVar5 * -0x10000) - (uint)(iVar5 << 0xf < 0)) >> 0x10) /
            (int)(uint)DAT_0019cba6)) / 0x10000;
  if ((*(byte *)(iVar2 + 0x4f) & 0xc) == 0) {
    if ((int)uVar7 >> 8 == 0x20) {
      DAT_003d9874 = DAT_003d9874 & 0xf7ff;
    }
    else {
      DAT_003de9a8 = &DAT_00361c10 + ((int)uVar7 >> 8) * 0x100;
      DAT_003d9874 = DAT_003d9874 | 0x800;
    }
  }
  else {
    auStack_44[4] = (uint)DAT_003d9874;
    DAT_003de9a8 = &DAT_00365c10 + (uint)*(byte *)(iVar2 + 0x51) * 0x100;
    DAT_003d9874 = DAT_003d9874 | 0x800;
  }
  DAT_003d9581 = 0;
  bVar3 = (*(byte *)(iVar2 + 0x4f) & 0x3f) >> 4;
  if (bVar3 < 2) {
    if (bVar3 == 1) {
      DAT_003d9874 = DAT_003d9874 & 0xf7ff | 8;
    }
  }
  else if (bVar3 < 3) {
    DAT_003d9874 = DAT_003d9874 & 0xf7ff | 4;
  }
  else if (bVar3 == 3) {
    DAT_003d9581 = 1;
  }
  cVar1 = *(char *)(iVar2 + 0x1f);
  if (((cVar1 == '\x05') || (cVar1 == '\x01')) || (cVar1 == '\x04')) {
    if ((*(short *)(iVar2 + 0x1b) == *(short *)(&DAT_0019d0fd + (DAT_002f10ce >> 0x18) * 0x4ef)) &&
       ((DAT_002e8bee & 2) != 0)) {
      DAT_003de9a8 = &DAT_003d9584;
      DAT_003d9874 = DAT_003d9874 | 0x800;
    }
    else if ((*(byte *)(iVar2 + 0x4f) & 0x80) != 0) {
      DAT_003d9874 = DAT_003d9874 | 0x800;
      DAT_003de9a8 = &DAT_003d9684;
      *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) & 0x7f;
    }
    DAT_003d9580 = 1;
    DAT_003d957c = iVar2;
  }
  else {
    DAT_003d9580 = 0;
    DAT_003d957c = 0;
  }
  if (*(byte *)(iVar2 + 0x48) < 0x3d6) {
    iVar4 = DAT_002f10ce >> 0x18;
    if ((*(char *)(iVar2 + 0x1f) == '\x01') &&
       (((cVar1 = *(char *)(iVar2 + 0x1a), cVar1 == '\x02' || (cVar1 == '\x1c')) ||
        (cVar1 == '\x04')))) {
      auStack_44[6] = (int)auStack_44[2] >> 2;
      local_20 = (int)auStack_44[2] >> 1;
      if (*(char *)(iVar2 + 0x1a) == '\x1c') {
        auStack_44[5] = 0x70;
        if ((&DAT_0019d51a)[iVar4 * 0x4ef] == '\x01') {
          local_20 = auStack_44[6] - auStack_44[2];
        }
        else {
          local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * (-local_20 - auStack_44[2])) >> 0x10
          ;
        }
        local_1c = (int)auStack_44[2] / 2;
      }
      else {
        auStack_44[5] = 0x71;
        if (*(char *)(iVar2 + 0x1a) == '\x02') {
          if ((&DAT_0019d51a)[iVar4 * 0x4ef] == '\x01') {
            local_20 = (int)(auStack_44[2] * 3) >> 3;
          }
          else {
            local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * auStack_44[2]) >> 0x14;
          }
          local_1c = ((int)auStack_44[2] / 3) * 2;
        }
        else {
          if ((&DAT_0019d51a)[iVar4 * 0x4ef] == '\x01') {
            local_24 = 3;
          }
          else {
            local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * (-local_20 - auStack_44[2])) >>
                       0x10;
          }
          local_20 = local_20 / 3;
          local_1c = (int)auStack_44[2] / 3;
        }
      }
      auStack_44[2] = 0xdbfc2;
      uVar7 = FUN_0004c2eb();
      auStack_44[3] = (*(ushort *)(iVar2 + 0x1b) + DAT_002e8bee) % (uVar7 & 0xff);
      auStack_44[1] = (uint)*(byte *)(iVar2 + 0x48);
      DAT_003d9581 = 0;
      auStack_44[0] = 0xdc012;
      auStack_44[2] = extraout_ECX_00;
      FUN_0004c7eb();
      auStack_44[0] = local_24 & 0xffff;
      DAT_003d9581 = 1;
      ppcVar6 = &pcStack_48;
      pcStack_48 = (char *)0x0;
    }
    else {
      if ((((*(char *)(iVar2 + 0x1f) == '\b') && (*(char *)(iVar2 + 0x1a) != '\x01')) &&
          (*(int *)(iVar2 + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar4 * 0x4ef])) &&
         (*(char *)(iVar2 + 0x18) == '\0')) goto LAB_000dc0c4;
      auStack_44[1] = (uint)*(byte *)(iVar2 + 0x48);
      ppcVar6 = (char **)(auStack_44 + 1);
    }
    ppcVar6[0xffffffff] = (char *)0xdc0c4;
    FUN_0004c7eb();
  }
  else {
    auStack_44[2] = (uint)*(byte *)(iVar2 + 0x1f);
    auStack_44[1] = (uint)*(byte *)(iVar2 + 0x1a);
    auStack_44[0] = *(int *)(iVar2 + 0x42) >> 0x10;
    pcStack_48 = s_Invalid_graphic_Id__d_from_model_0016c916;
    FUN_000e7714(&DAT_0019cbac);
    auStack_44[2] = 0xdbe0a;
    FUN_000ddaf0(); /* LbErrorLog("ssprite.cpp", line 1161, g_log_buf) */
    ppcVar6 = (char **)(auStack_44 + 3);
  }
LAB_000dc0c4:
  DAT_003d9874 = (short)ppcVar6[1];
  DAT_003d9581 = (char)ppcVar6[8];
  return;
}

/******************************************************************************
 * Function : sub_0dc0e0 (Ghidra: FUN_000dc0e0)
 * Prototype: void sub_0dc0e0(void);
 * Address  : 0xdc0e0 (Size: 1 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x9ff84
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000dc0e0(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0dc0f0 (Ghidra: FUN_000dc0f0)
 * Prototype: int sub_0dc0f0(void);
 * Address  : 0xdc0f0 (Size: 93 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc0f0(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if ((DAT_0019d0b6 & 1) == 0) {
    iVar1 = in_EDX + (unaff_EBX * 10 * in_EDX) / 100;
  }
  else {
    iVar1 = in_EDX * 2;
  }
  if ((&DAT_0019d0f1)[in_EAX * 0x4ef] == '\x02') {
    iVar1 = iVar1 / 2;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0dc150 (Ghidra: FUN_000dc150)
 * Prototype: undefined8 sub_0dc150(void);
 * Address  : 0xdc150 (Size: 50 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 30 -> 0x2e8a7, 0x2faf6, 0x31599, 0x31c23, 0x31def, 0x32805, 0x36a59, 0x45ca0, 0x4660b, 0x46701 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000dc150(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = (uint)DAT_0019cba6 * DAT_003d9868;
  if (((DAT_003d9878 == 0xd) && (DAT_00376518 == 0)) && (iVar1 = iVar1 + -0x28, iVar1 < 0)) {
    iVar1 = 0;
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_0dc184 (Ghidra: FUN_000dc184)
 * Prototype: void sub_0dc184(void);
 * Address  : 0xdc184 (Size: 21 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5d35c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000dc184(void)

{
  int in_EAX;
  byte in_DL;
  
  (&DAT_0019d0f2)[in_EAX * 0x4ef] = (&DAT_0019d0f2)[in_EAX * 0x4ef] ^ '\x01' << (in_DL & 0x1f);
  return;
}

/******************************************************************************
 * Function : sub_0dc19c (Ghidra: FUN_000dc19c)
 * Prototype: undefined4 sub_0dc19c(void);
 * Address  : 0xdc19c (Size: 299 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x1e061, 0x5f6c5, 0x849c8, 0x84d98, 0x8fd14
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000dc19c(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  uint unaff_EBX;
  
  if (((((-1 < in_EAX) && (in_EAX < 0xff)) && (-1 < in_EDX)) &&
      ((in_EDX < 0xff &&
       (iVar1 = (in_EAX + in_EDX * 0x100) * 5,
       (*(uint *)((int)&DAT_00279203 + iVar1 + 1) >> 0x1c & 1 << ((byte)unaff_EBX & 0x1f)) != 0))))
     && (((*(byte *)((int)&DAT_00279203 + iVar1) & 0x10) == 0 &&
         ((*(byte *)((int)&DAT_00279203 + ((in_EAX / 3) * 3 + (in_EDX / 3) * 0x300 + 0x101) * 5) &
          0x40) == 0)))) {
    iVar1 = ((&DAT_0019033b)[in_EAX] + (&DAT_0019033b)[in_EDX] * 0x55) * 6;
    if (((&DAT_002d33ca)[iVar1] & 7) == unaff_EBX) {
      return 1;
    }
    if (((in_ECX != 0) && (((&DAT_002d33ca)[iVar1] & 7) == DAT_002eb543)) &&
       ((&DAT_002d33c5)[iVar1] == '\n')) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0dc2c8 (Ghidra: FUN_000dc2c8)
 * Prototype: int sub_0dc2c8(void);
 * Address  : 0xdc2c8 (Size: 89 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x274ad, 0x88e2c
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc2c8(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  uint uVar4;
  int unaff_EBX;
  
  uVar4 = in_EAX - unaff_EBX >> 0x1f;
  iVar1 = (in_EAX - unaff_EBX ^ uVar4) - uVar4;
  uVar4 = in_EDX - in_ECX >> 0x1f;
  iVar2 = (in_EDX - in_ECX ^ uVar4) - uVar4;
  if (iVar2 < iVar1) {
    return *(int *)(&DAT_0017a4d0 + ((iVar2 * 0x100) / iVar1) * 8) * iVar1 >> 0xd;
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(&DAT_0017a4d0 + ((iVar1 * 0x100) / iVar2) * 8) * iVar2 >> 0xd;
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_0dc324 (Ghidra: FUN_000dc324)
 * Prototype: int sub_0dc324(void);
 * Address  : 0xdc324 (Size: 45 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xa49ec, 0xd29ac
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc324(void)

{
  ushort *in_EAX;
  ushort *in_EDX;
  
  return ((uint)in_EAX[1] - (uint)in_EDX[1]) * ((uint)in_EAX[1] - (uint)in_EDX[1]) +
         ((uint)*in_EAX - (uint)*in_EDX) * ((uint)*in_EAX - (uint)*in_EDX);
}

/******************************************************************************
 * Function : sub_0dc354 (Ghidra: FUN_000dc354)
 * Prototype: int sub_0dc354(void);
 * Address  : 0xdc354 (Size: 106 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x10c44, 0x12230, 0x123ba, 0x1264b, 0x130c5, 0x1e5de, 0x2585f, 0x25af0, 0x26795, 0x6b820 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc354(void)

{
  ushort *in_EAX;
  int iVar1;
  int iVar2;
  ushort *in_EDX;
  uint uVar3;
  
  uVar3 = (int)((uint)*in_EAX - (uint)*in_EDX) >> 0x1f;
  iVar1 = ((uint)*in_EAX - (uint)*in_EDX ^ uVar3) - uVar3;
  uVar3 = (int)((uint)in_EAX[1] - (uint)in_EDX[1]) >> 0x1f;
  iVar2 = ((uint)in_EAX[1] - (uint)in_EDX[1] ^ uVar3) - uVar3;
  if (iVar2 < iVar1) {
    iVar1 = *(int *)(&DAT_0017a4d0 + ((iVar2 * 0x100) / iVar1) * 8) * iVar1;
  }
  else {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = *(int *)(&DAT_0017a4d0 + ((iVar1 * 0x100) / iVar2) * 8) * iVar2;
  }
  return iVar1 >> 0xd;
}

/******************************************************************************
 * Function : sub_0dc3c0 (Ghidra: FUN_000dc3c0)
 * Prototype: int sub_0dc3c0(void);
 * Address  : 0xdc3c0 (Size: 128 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6e538
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc3c0(void)

{
  ushort *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *in_EDX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = (int)((uint)*in_EDX - (uint)*in_EAX) >> 0x1f;
  iVar1 = ((uint)*in_EDX - (uint)*in_EAX ^ uVar4) - uVar4;
  uVar4 = (int)((uint)in_EDX[1] - (uint)in_EAX[1]) >> 0x1f;
  iVar2 = ((uint)in_EDX[1] - (uint)in_EAX[1] ^ uVar4) - uVar4;
  uVar4 = (*(int *)(in_EDX + 1) >> 0x10) - (*(int *)(in_EAX + 1) >> 0x10);
  uVar5 = (int)uVar4 >> 0x1f;
  iVar3 = (uVar4 ^ uVar5) - uVar5;
  iVar6 = iVar1;
  if (iVar1 <= iVar2) {
    iVar6 = iVar2;
  }
  if ((iVar3 < iVar6) && (iVar3 = iVar2, iVar2 < iVar1)) {
    iVar3 = iVar1;
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_0dc4a0 (Ghidra: FUN_000dc4a0)
 * Prototype: int sub_0dc4a0(void);
 * Address  : 0xdc4a0 (Size: 44 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x3d3f3, 0x3d8b0, 0x3de04, 0xc65f0, 0xc6758, 0xc68b4, 0xc69e8
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc4a0(void)

{
  int in_EAX;
  uint uVar1;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  uint uVar2;
  
  uVar1 = in_EAX - unaff_EBX;
  uVar2 = in_EDX - in_ECX;
  if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) <
      (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
    uVar2 = uVar1;
  }
  return (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
}

/******************************************************************************
 * Function : sub_0dc4cc (Ghidra: FUN_000dc4cc)
 * Prototype: uint sub_0dc4cc(void);
 * Address  : 0xdc4cc (Size: 219 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x26795
 * Callees  : 1 -> 0x7da18
 ******************************************************************************/
uint FUN_000dc4cc(void)

{
  ushort *in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort *in_EDX;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar1 = (uint)*in_EDX - (uint)*in_EAX;
  iVar7 = (uint)in_EDX[1] - (uint)in_EAX[1];
  if (iVar1 < 0) {
    iVar5 = -0x50;
    iVar1 = -iVar1;
  }
  else {
    iVar5 = 0x50;
  }
  if (iVar7 < 0) {
    iVar4 = -0x50;
    iVar7 = -iVar7;
  }
  else {
    iVar4 = 0x50;
  }
  iVar1 = iVar1 + 1;
  uVar2 = iVar1 / 0x50;
  iVar7 = iVar7 + 1;
  uVar3 = uVar2;
  if (iVar1 != iVar7) {
    if (iVar7 < iVar1) {
      uVar3 = (iVar7 * iVar4) / iVar1;
    }
    else {
      iVar5 = (iVar1 * iVar5) / iVar7;
      uVar3 = iVar7 / 0x50;
      uVar2 = uVar3;
    }
  }
  sVar6 = (short)*(undefined4 *)in_EAX;
  if (uVar2 != 0) {
    do {
      uVar8 = FUN_0007da18(sVar6);
      uVar3 = (uint)uVar8;
      if ((char)uVar8 != '\0') {
        return uVar3 & 0xffffff00;
      }
      sVar6 = sVar6 + (short)iVar5;
    } while ((int)((ulonglong)uVar8 >> 0x20) != 1);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}

/******************************************************************************
 * Function : sub_0dc5c4 (Ghidra: FUN_000dc5c4)
 * Prototype: uint sub_0dc5c4(void);
 * Address  : 0xdc5c4 (Size: 572 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x101c2, 0x10229, 0x102c0, 0x2585f, 0x25af0, 0x82cac
 * Callees  : 2 -> 0x7da18, 0xdc95a
 ******************************************************************************/
uint FUN_000dc5c4(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined1 uVar9;
  ushort *in_EAX;
  int iVar10;
  ushort *in_EDX;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  undefined4 uStack_48;
  ushort auStack_44 [2];
  undefined1 local_40;
  byte bStack_3f;
  undefined2 uStack_3e;
  ushort local_3c [3];
  undefined2 uStack_36;
  ushort auStack_34 [2];
  undefined1 uStack_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  ushort auStack_2c [2];
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar14 = 0;
  iVar10 = (uint)*in_EDX - (uint)*in_EAX;
  iVar13 = (uint)in_EDX[1] - (uint)in_EAX[1];
  iVar12 = (*(int *)(in_EDX + 1) >> 0x10) - (*(int *)(in_EAX + 1) >> 0x10);
  cVar1 = *(char *)((int)in_EAX + 1);
  if ((cVar1 == *(char *)((int)in_EDX + 1)) &&
     (local_20 = CONCAT31((int3)(CONCAT22((short)((uint)((int)in_EAX + 1) >> 0x10),
                                          CONCAT11(*(char *)((int)in_EDX + 1),cVar1)) >> 8),
                          *(char *)((int)in_EAX + 3)),
     *(char *)((int)in_EAX + 3) == *(char *)((int)in_EDX + 3))) goto code_r0x000dc95a;
  if (iVar10 < 0) {
    iVar10 = -iVar10;
    local_18 = -0x100;
  }
  else {
    local_18 = 0x100;
  }
  if (iVar13 < 0) {
    iVar13 = -iVar13;
    local_1c = -0x100;
  }
  else {
    local_1c = 0x100;
  }
  if (iVar12 < 0) {
    iVar12 = -iVar12;
    local_20 = -0x100;
  }
  else {
    local_20 = 0x100;
  }
  local_28 = (byte *)((int)in_EAX + 1);
  local_24 = (byte *)((int)in_EDX + 1);
  if (iVar10 == iVar13) {
    bVar2 = *local_24;
    bVar3 = *local_28;
LAB_000dc6f2:
    uVar11 = (uint)bVar2 - (uint)bVar3;
    iVar10 = iVar13;
  }
  else {
    if (iVar10 <= iVar13) {
      local_18 = (local_18 * iVar10) / iVar13;
      bVar2 = *(byte *)((int)in_EDX + 3);
      bVar3 = *(byte *)((int)in_EAX + 3);
      goto LAB_000dc6f2;
    }
    local_1c = (local_1c * iVar13) / iVar10;
    uVar11 = (uint)*local_24 - (uint)*local_28;
  }
  local_20 = (iVar12 * local_20) / iVar10;
  iVar10 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
  uStack_48 = *(undefined4 *)in_EAX;
  auStack_44[0] = in_EAX[2];
  _local_40 = *in_EAX + (short)local_18;
  uStack_3e = in_EAX[1] + (short)local_1c;
  local_3c[0] = in_EAX[2] + (short)local_20;
  if (iVar10 == 0) {
    uVar11 = FUN_000dc95a();
    return uVar11;
  }
  do {
    uVar11 = FUN_0007da18();
    sVar6 = uStack_2e;
    uVar9 = uStack_30;
    uVar8 = local_3c[2];
    if ((char)uVar11 != '\0') {
      return uVar11 & 0xffffff00;
    }
    uVar11 = ((bStack_3f / 3) * 3 + (uStack_3e._1_1_ / 3) * 0x300 + 0x101) * 5;
    if ((*(byte *)((int)&DAT_00279203 + uVar11) & 0x40) != 0) {
      return uVar11 & 0xffffff00;
    }
    iVar13 = (uint)bStack_3f - (uint)uStack_48._1_1_;
    iVar12 = (uint)uStack_3e._1_1_ - (uint)uStack_48._3_1_;
    sVar5 = uStack_3e;
    if ((iVar13 != 0) && (iVar12 != 0)) {
      uStack_30 = (undefined1)uStack_48;
      uStack_2e._0_1_ = (undefined1)((uint)uStack_48 >> 0x10);
      uVar7 = (undefined1)uStack_2e;
      local_3c[2] = (ushort)uStack_48;
      sVar4 = (short)((uint)uStack_48 >> 0x10);
      uStack_36._0_1_ = uVar7;
      uStack_36._1_1_ = uStack_48._3_1_;
      uStack_2e._1_1_ = uStack_48._3_1_;
      switch(iVar13 + iVar12 * 2) {
      case 1:
        auStack_2c[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        local_3c[2] = local_3c[2] + -0x100;
        uStack_2e._1_1_ = uStack_2e._1_1_ + 1;
        uVar11 = FUN_0007da18();
        if ((char)uVar11 != '\0') {
LAB_000dc8ee:
          return uVar11 & 0xffffff00;
        }
        uVar11 = FUN_0007da18();
        uVar8 = local_3c[2];
        uVar9 = uStack_30;
        sVar5 = uStack_3e;
        sVar6 = CONCAT11(uStack_2e._1_1_,(undefined1)uStack_2e);
        if ((char)uVar11 != '\0') goto LAB_000dc8ee;
        break;
      case 3:
        auStack_2c[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        uStack_36._1_1_ = uStack_48._3_1_ + 1;
        bStack_2f = bStack_2f + 1;
        uVar11 = FUN_0007da18();
        if ((char)uVar11 != '\0') {
LAB_000dc937:
          return uVar11 & 0xffffff00;
        }
        uVar11 = FUN_0007da18();
        uVar8 = local_3c[2];
        uVar9 = uStack_30;
        sVar5 = uStack_3e;
        sVar6 = CONCAT11(uStack_2e._1_1_,(undefined1)uStack_2e);
        if ((char)uVar11 != '\0') goto LAB_000dc937;
        break;
      case -3:
        auStack_2c[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        local_3c[2] = local_3c[2] + -0x100;
        uStack_36._0_1_ = (undefined1)uStack_2e;
        uStack_2e = sVar4 + -0x100;
        uVar11 = FUN_0007da18();
        if ((char)uVar11 != '\0') {
LAB_000dc84e:
          return uVar11 & 0xffffff00;
        }
        uVar11 = FUN_0007da18();
        uVar8 = local_3c[2];
        uVar9 = uStack_30;
        sVar5 = uStack_3e;
        sVar6 = uStack_2e;
        if ((char)uVar11 != '\0') goto LAB_000dc84e;
        break;
      case -1:
        auStack_2c[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)bVar14 * -4] = auStack_44[(uint)bVar14 * -4];
        bStack_2f = bStack_2f + 1;
        uStack_36 = sVar4 + -0x100;
        uVar11 = FUN_0007da18();
        if ((char)uVar11 != '\0') {
LAB_000dc8a2:
          return uVar11 & 0xffffff00;
        }
        uVar11 = FUN_0007da18();
        uVar8 = local_3c[2];
        uVar9 = uStack_30;
        sVar5 = uStack_3e;
        sVar6 = CONCAT11(uStack_2e._1_1_,(undefined1)uStack_2e);
        if ((char)uVar11 != '\0') goto LAB_000dc8a2;
      }
    }
    uStack_30 = uVar9;
    local_3c[2] = uVar8;
    uStack_3e._1_1_ = (byte)((ushort)sVar5 >> 8);
    uStack_3e._0_1_ = (undefined1)sVar5;
    uStack_48 = CONCAT13(uStack_3e._1_1_,CONCAT12((undefined1)uStack_3e,_local_40));
    uStack_3e = sVar5;
    uStack_2e = sVar6;
    auStack_44[(uint)bVar14 * -4] = local_3c[(uint)bVar14 * -4];
    _local_40 = _local_40 + (short)local_18;
    uStack_3e = uStack_3e + (short)local_1c;
    local_3c[0] = local_3c[0] + (short)local_20;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
code_r0x000dc95a:
  return CONCAT31((int3)((uint)local_20 >> 8),1);
}

/******************************************************************************
 * Function : sub_0dc800 (Ghidra: switchD_000dc952::caseD_fffffffd)
 * Prototype: undefined4 sub_0dc800(void);
 * Address  : 0xdc800 (Size: 89 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x7da18
 ******************************************************************************/
uint switchD_000dc952::caseD_fffffffd
               (undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
               undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  byte bVar11;
  byte bVar12;
  undefined4 unaff_retaddr;
  
  sVar4 = (short)((uint)param_2 >> 0x10);
  bVar11 = 0;
code_r0x000dc800:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
  param_4._0_2_ = (short)param_4 + -0x100;
  param_4._2_1_ = param_6._2_1_;
  param_4._3_1_ = param_6._3_1_;
  param_6._2_2_ = (short)((uint)unaff_retaddr >> 0x10) + -0x100;
  param_2._2_2_ = sVar4;
  uVar8 = FUN_0007da18();
  if ((char)uVar8 == '\0') {
    uVar8 = FUN_0007da18();
    uVar7 = (undefined1)param_6;
    sVar3 = param_6._2_2_;
    if ((char)uVar8 == '\0') {
      do {
        do {
          sVar2 = param_2._2_2_;
          sVar1 = (short)param_2;
          param_6._0_1_ = uVar7;
          param_2._3_1_ = (byte)((ushort)sVar2 >> 8);
          bVar6 = param_2._3_1_;
          param_2._2_1_ = (undefined1)sVar2;
          uVar5 = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,sVar1));
          param_2._0_2_ = sVar1;
          param_2._2_2_ = sVar2;
          param_6._2_2_ = sVar3;
          *(short *)((int)&param_1 + (uint)bVar11 * -8) = (&param_3)[(uint)bVar11 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uVar8 = FUN_0007da18();
          sVar3 = param_6._2_2_;
          uVar7 = (undefined1)param_6;
          if ((char)uVar8 != '\0') {
            return uVar8 & 0xffffff00;
          }
          uVar8 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&DAT_00279203 + uVar8) & 0x40) != 0) {
            return uVar8 & 0xffffff00;
          }
          bVar12 = (byte)((ushort)sVar1 >> 8);
          iVar10 = (uint)param_2._1_1_ - (uint)bVar12;
          iVar9 = (uint)param_2._3_1_ - (uint)bVar6;
        } while ((iVar10 == 0) || (iVar9 == 0));
        param_6._0_1_ = (undefined1)sVar1;
        param_6._2_1_ = uVar5;
        sVar4 = param_2._2_2_;
        param_4._2_1_ = param_6._2_1_;
        switch(iVar10 + iVar9 * 2) {
        case 1:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._0_2_ = sVar1 + -0x100;
          param_6._3_1_ = param_6._3_1_ + 1;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            uVar7 = (undefined1)param_6;
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case 3:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6 + 1;
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._0_2_ = sVar1;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            uVar7 = (undefined1)param_6;
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case -3:
          goto code_r0x000dc800;
        case -1:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._2_2_ = sVar2 + -0x100;
          param_4._0_2_ = sVar1;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            uVar7 = (undefined1)param_6;
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        }
      } while( true );
    }
  }
  return uVar8 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0dc859 (Ghidra: FUN_000dc859)
 * Prototype: uint sub_0dc859(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
 * Address  : 0xdc859 (Size: 84 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x7da18
 ******************************************************************************/
uint FUN_000dc859(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  byte bVar11;
  byte bVar12;
  undefined4 unaff_retaddr;
  
  sVar4 = (short)((uint)param_2 >> 0x10);
  bVar11 = 0;
code_r0x000dc859:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
  param_6._1_1_ = param_6._1_1_ + 1;
  param_4._2_2_ = (short)((uint)unaff_retaddr >> 0x10) + -0x100;
  param_2._2_2_ = sVar4;
  uVar8 = FUN_0007da18();
  if ((char)uVar8 == '\0') {
    uVar8 = FUN_0007da18();
    uVar7 = (undefined1)param_6;
    sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
    if ((char)uVar8 == '\0') {
      do {
        do {
          sVar2 = param_2._2_2_;
          sVar1 = (short)param_2;
          param_6._0_1_ = uVar7;
          param_2._3_1_ = (byte)((ushort)sVar2 >> 8);
          bVar6 = param_2._3_1_;
          param_2._2_1_ = (undefined1)sVar2;
          uVar5 = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,sVar1));
          param_2._0_2_ = sVar1;
          param_2._2_2_ = sVar2;
          param_6._2_2_ = sVar3;
          *(short *)((int)&param_1 + (uint)bVar11 * -8) = (&param_3)[(uint)bVar11 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uVar8 = FUN_0007da18();
          sVar3 = param_6._2_2_;
          uVar7 = (undefined1)param_6;
          if ((char)uVar8 != '\0') {
            return uVar8 & 0xffffff00;
          }
          uVar8 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&DAT_00279203 + uVar8) & 0x40) != 0) {
            return uVar8 & 0xffffff00;
          }
          bVar12 = (byte)((ushort)sVar1 >> 8);
          iVar10 = (uint)param_2._1_1_ - (uint)bVar12;
          iVar9 = (uint)param_2._3_1_ - (uint)bVar6;
        } while ((iVar10 == 0) || (iVar9 == 0));
        param_6._0_1_ = (undefined1)sVar1;
        param_6._2_1_ = uVar5;
        sVar4 = param_2._2_2_;
        param_4._2_1_ = param_6._2_1_;
        switch(iVar10 + iVar9 * 2) {
        case 1:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._0_2_ = sVar1 + -0x100;
          param_6._3_1_ = param_6._3_1_ + 1;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            uVar7 = (undefined1)param_6;
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case 3:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6 + 1;
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._0_2_ = sVar1;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            uVar7 = (undefined1)param_6;
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case -3:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._0_2_ = sVar1 + -0x100;
          param_4._2_1_ = param_6._2_1_;
          param_6._2_2_ = sVar2 + -0x100;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            uVar7 = (undefined1)param_6;
            sVar3 = param_6._2_2_;
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case -1:
          goto code_r0x000dc859;
        }
      } while( true );
    }
  }
  return uVar8 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0dc8ad (Ghidra: FUN_000dc8ad)
 * Prototype: uint sub_0dc8ad(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
 * Address  : 0xdc8ad (Size: 76 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x7da18
 ******************************************************************************/
uint FUN_000dc8ad(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  byte bVar11;
  byte bVar12;
  undefined4 unaff_retaddr;
  
  sVar4 = (short)((uint)param_2 >> 0x10);
  bVar11 = 0;
code_r0x000dc8ad:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_4._2_1_ = param_6._2_1_;
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  param_4._3_1_ = param_6._3_1_;
  (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
  param_4._0_2_ = (short)param_4 + -0x100;
  param_6._3_1_ = param_6._3_1_ + '\x01';
  param_2._2_2_ = sVar4;
  uVar8 = FUN_0007da18();
  if ((char)uVar8 == '\0') {
    uVar8 = FUN_0007da18();
    uVar7 = (undefined1)param_6;
    sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
    if ((char)uVar8 == '\0') {
      do {
        do {
          sVar2 = param_2._2_2_;
          sVar1 = (short)param_2;
          param_6._0_1_ = uVar7;
          param_2._3_1_ = (byte)((ushort)sVar2 >> 8);
          bVar6 = param_2._3_1_;
          param_2._2_1_ = (undefined1)sVar2;
          uVar5 = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,sVar1));
          param_2._0_2_ = sVar1;
          param_2._2_2_ = sVar2;
          param_6._2_2_ = sVar3;
          *(short *)((int)&param_1 + (uint)bVar11 * -8) = (&param_3)[(uint)bVar11 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uVar8 = FUN_0007da18();
          sVar3 = param_6._2_2_;
          uVar7 = (undefined1)param_6;
          if ((char)uVar8 != '\0') {
            return uVar8 & 0xffffff00;
          }
          uVar8 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&DAT_00279203 + uVar8) & 0x40) != 0) {
            return uVar8 & 0xffffff00;
          }
          bVar12 = (byte)((ushort)sVar1 >> 8);
          iVar10 = (uint)param_2._1_1_ - (uint)bVar12;
          iVar9 = (uint)param_2._3_1_ - (uint)bVar6;
        } while ((iVar10 == 0) || (iVar9 == 0));
        param_6._0_1_ = (undefined1)sVar1;
        param_6._2_1_ = uVar5;
        uVar5 = param_6._2_1_;
        sVar4 = param_2._2_2_;
        switch(iVar10 + iVar9 * 2) {
        case 1:
          goto code_r0x000dc8ad;
        case 3:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6 + 1;
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._0_2_ = sVar1;
          param_4._2_1_ = uVar5;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            uVar7 = (undefined1)param_6;
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case -3:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._0_2_ = sVar1 + -0x100;
          param_4._2_1_ = param_6._2_1_;
          param_6._2_2_ = sVar2 + -0x100;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            uVar7 = (undefined1)param_6;
            sVar3 = param_6._2_2_;
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        case -1:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar12;
          (&param_5)[(uint)bVar11 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar11 * -8);
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._2_2_ = sVar2 + -0x100;
          param_4._0_2_ = sVar1;
          uVar8 = FUN_0007da18();
          if ((char)uVar8 == '\0') {
            uVar8 = FUN_0007da18();
            uVar7 = (undefined1)param_6;
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uVar8 == '\0') break;
          }
          return uVar8 & 0xffffff00;
        }
      } while( true );
    }
  }
  return uVar8 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0dc8f9 (Ghidra: FUN_000dc8f9)
 * Prototype: uint sub_0dc8f9(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
 * Address  : 0xdc8f9 (Size: 97 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x7da18
 ******************************************************************************/
uint FUN_000dc8f9(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int unaff_EBP;
  byte bVar12;
  byte bVar13;
  undefined4 unaff_retaddr;
  
  sVar4 = (short)((uint)param_2 >> 0x10);
  bVar12 = 0;
code_r0x000dc8f9:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_4._2_1_ = param_6._2_1_;
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  cVar7 = param_6._3_1_;
  (&param_7)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
  param_4._3_1_ = cVar7 + '\x01';
  param_6._1_1_ = param_6._1_1_ + 1;
  param_2._2_2_ = sVar4;
  uVar9 = FUN_0007da18();
  if ((char)uVar9 == '\0') {
    uVar9 = FUN_0007da18();
    uVar8 = (undefined1)param_6;
    sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
    if ((char)uVar9 == '\0') {
      do {
        do {
          sVar2 = param_2._2_2_;
          sVar1 = (short)param_2;
          param_6._0_1_ = uVar8;
          param_2._3_1_ = (byte)((ushort)sVar2 >> 8);
          bVar6 = param_2._3_1_;
          param_2._2_1_ = (undefined1)sVar2;
          uVar5 = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,sVar1));
          param_2._0_2_ = sVar1;
          param_2._2_2_ = sVar2;
          param_6._2_2_ = sVar3;
          *(short *)((int)&param_1 + (uint)bVar12 * -8) = (&param_3)[(uint)bVar12 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uVar9 = FUN_0007da18();
          sVar3 = param_6._2_2_;
          uVar8 = (undefined1)param_6;
          if ((char)uVar9 != '\0') {
            return uVar9 & 0xffffff00;
          }
          uVar9 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&DAT_00279203 + uVar9) & 0x40) != 0) {
            return uVar9 & 0xffffff00;
          }
          bVar13 = (byte)((ushort)sVar1 >> 8);
          iVar11 = (uint)param_2._1_1_ - (uint)bVar13;
          iVar10 = (uint)param_2._3_1_ - (uint)bVar6;
        } while ((iVar11 == 0) || (iVar10 == 0));
        param_6._0_1_ = (undefined1)sVar1;
        param_6._2_1_ = uVar5;
        uVar5 = param_6._2_1_;
        sVar4 = param_2._2_2_;
        switch(iVar11 + iVar10 * 2) {
        case 1:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar13;
          (&param_5)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
          param_4._0_2_ = sVar1 + -0x100;
          param_6._3_1_ = param_6._3_1_ + 1;
          param_4._2_1_ = uVar5;
          uVar9 = FUN_0007da18();
          if ((char)uVar9 == '\0') {
            uVar9 = FUN_0007da18();
            uVar8 = (undefined1)param_6;
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uVar9 == '\0') break;
          }
          return uVar9 & 0xffffff00;
        case 3:
          goto code_r0x000dc8f9;
        case -3:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar13;
          (&param_5)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
          param_4._0_2_ = sVar1 + -0x100;
          param_4._2_1_ = param_6._2_1_;
          param_6._2_2_ = sVar2 + -0x100;
          uVar9 = FUN_0007da18();
          if ((char)uVar9 == '\0') {
            uVar9 = FUN_0007da18();
            uVar8 = (undefined1)param_6;
            sVar3 = param_6._2_2_;
            if ((char)uVar9 == '\0') break;
          }
          return uVar9 & 0xffffff00;
        case -1:
          param_6._3_1_ = bVar6;
          (&param_7)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
          param_4._3_1_ = bVar6;
          param_6._1_1_ = bVar13;
          (&param_5)[(uint)bVar12 * -4] = *(undefined2 *)((int)&param_1 + (uint)bVar12 * -8);
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._2_2_ = sVar2 + -0x100;
          param_4._0_2_ = sVar1;
          uVar9 = FUN_0007da18();
          if ((char)uVar9 == '\0') {
            uVar9 = FUN_0007da18();
            uVar8 = (undefined1)param_6;
            sVar3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uVar9 == '\0') break;
          }
          return uVar9 & 0xffffff00;
        }
      } while( true );
    }
  }
  return uVar9 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0dc95a (Ghidra: FUN_000dc95a)
 * Prototype: undefined1 sub_0dc95a(void);
 * Address  : 0xdc95a (Size: 11 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdc5c4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_000dc95a(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_0dc984 (Ghidra: FUN_000dc984)
 * Prototype: undefined4 sub_0dc984(void);
 * Address  : 0xdc984 (Size: 887 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x102c0
 * Callees  : 1 -> 0x7daac
 ******************************************************************************/
undefined4 FUN_000dc984(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  ushort uVar6;
  char cVar7;
  short sVar8;
  ushort *in_EAX;
  int iVar9;
  int iVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  ushort *in_EDX;
  uint uVar11;
  int iVar12;
  byte bVar13;
  undefined4 uStack_48;
  ushort auStack_44 [2];
  undefined1 local_40;
  byte local_3f;
  undefined2 local_3e;
  ushort auStack_3c [3];
  undefined2 uStack_36;
  ushort auStack_34 [2];
  undefined1 local_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  ushort local_2c [2];
  byte *local_28;
  byte *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  iVar9 = (uint)*in_EDX - (uint)*in_EAX;
  iVar12 = (uint)in_EDX[1] - (uint)in_EAX[1];
  iVar10 = (*(int *)(in_EDX + 1) >> 0x10) - (*(int *)(in_EAX + 1) >> 0x10);
  if ((*(char *)((int)in_EAX + 1) == *(char *)((int)in_EDX + 1)) &&
     (*(char *)((int)in_EAX + 3) == *(char *)((int)in_EDX + 3))) {
    return 1;
  }
  if (iVar9 < 0) {
    iVar9 = -iVar9;
    local_1c = -0x100;
  }
  else {
    local_1c = 0x100;
  }
  if (iVar12 < 0) {
    iVar12 = -iVar12;
    local_18 = -0x100;
  }
  else {
    local_18 = 0x100;
  }
  if (iVar10 < 0) {
    iVar10 = -iVar10;
    local_14 = -0x100;
  }
  else {
    local_14 = 0x100;
  }
  local_28 = (byte *)((int)in_EAX + 1);
  local_24 = (byte *)((int)in_EDX + 1);
  if (iVar9 == iVar12) {
    bVar1 = *local_24;
    bVar2 = *local_28;
  }
  else {
    if (iVar12 < iVar9) {
      local_18 = (local_18 * iVar12) / iVar9;
      uVar11 = (uint)*local_24 - (uint)*local_28;
      goto LAB_000dcac5;
    }
    local_1c = (local_1c * iVar9) / iVar12;
    bVar1 = *(byte *)((int)in_EDX + 3);
    bVar2 = *(byte *)((int)in_EAX + 3);
  }
  uVar11 = (uint)bVar1 - (uint)bVar2;
  iVar9 = iVar12;
LAB_000dcac5:
  local_14 = (iVar10 * local_14) / iVar9;
  uStack_48 = *(undefined4 *)in_EAX;
  auStack_44[0] = in_EAX[2];
  sVar8 = *in_EAX + (short)local_1c;
  uStack_2e = in_EAX[1] + (short)local_18;
  local_2c[0] = in_EAX[2] + (short)local_14;
  if ((uVar11 ^ (int)uVar11 >> 0x1f) != (int)uVar11 >> 0x1f) {
    do {
      _local_30 = sVar8;
      cVar7 = FUN_0007daac();
      uVar6 = auStack_3c[2];
      sVar4 = local_3e;
      uVar5 = local_40;
      if (cVar7 != '\0') {
        return 0;
      }
      iVar9 = extraout_ECX;
      sVar3 = uStack_2e;
      if (((uint)bStack_2f - (uint)uStack_48._1_1_ != 0) &&
         ((uint)uStack_2e._1_1_ - (uint)uStack_48._3_1_ != 0)) {
        local_40 = (undefined1)uStack_48;
        local_3e._0_1_ = (undefined1)((uint)uStack_48 >> 0x10);
        auStack_3c[2] = (ushort)uStack_48;
        sVar8 = (short)((uint)uStack_48 >> 0x10);
        uStack_36._0_1_ = (undefined1)local_3e;
        local_3e._1_1_ = uStack_48._3_1_;
        uStack_36._1_1_ = uStack_48._3_1_;
        switch(((uint)uStack_2e._1_1_ - (uint)uStack_48._3_1_) * 2 +
               ((uint)bStack_2f - (uint)uStack_48._1_1_)) {
        case 1:
          auStack_3c[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          auStack_34[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          auStack_3c[2] = auStack_3c[2] + -0x100;
          local_3e._1_1_ = uStack_48._3_1_ + 1;
          local_3f = uStack_48._1_1_;
          cVar7 = FUN_0007daac();
          if (cVar7 != '\0') {
            return 0;
          }
          cVar7 = FUN_0007daac();
          iVar9 = extraout_ECX_02;
          uVar5 = local_40;
          uVar6 = auStack_3c[2];
          sVar3 = uStack_2e;
          sVar4 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
          if (cVar7 != '\0') {
            return 0;
          }
          break;
        case 3:
          auStack_3c[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          auStack_34[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          uStack_36._1_1_ = uStack_48._3_1_ + 1;
          local_3f = uStack_48._1_1_ + 1;
          cVar7 = FUN_0007daac();
          if (cVar7 != '\0') {
            return 0;
          }
          cVar7 = FUN_0007daac();
          iVar9 = extraout_ECX_03;
          uVar5 = local_40;
          uVar6 = auStack_3c[2];
          sVar3 = uStack_2e;
          sVar4 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
          if (cVar7 != '\0') {
            return 0;
          }
          break;
        case 0xfffffffd:
          auStack_3c[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          auStack_34[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          auStack_3c[2] = auStack_3c[2] + -0x100;
          local_3f = uStack_48._1_1_;
          local_3e = sVar8 + -0x100;
          cVar7 = FUN_0007daac();
          if (cVar7 != '\0') {
            return 0;
          }
          cVar7 = FUN_0007daac();
          iVar9 = extraout_ECX_00;
          uVar5 = local_40;
          uVar6 = auStack_3c[2];
          sVar3 = uStack_2e;
          sVar4 = local_3e;
          if (cVar7 != '\0') {
            return 0;
          }
          break;
        case 0xffffffff:
          auStack_3c[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          auStack_34[(uint)bVar13 * -4] = auStack_44[(uint)bVar13 * -4];
          local_3f = uStack_48._1_1_ + 1;
          uStack_36 = sVar8 + -0x100;
          cVar7 = FUN_0007daac();
          if (cVar7 != '\0') {
            return 0;
          }
          cVar7 = FUN_0007daac();
          iVar9 = extraout_ECX_01;
          uVar5 = local_40;
          uVar6 = auStack_3c[2];
          sVar3 = uStack_2e;
          sVar4 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
          if (cVar7 != '\0') {
            return 0;
          }
        }
      }
      auStack_3c[2] = uVar6;
      local_40 = uVar5;
      uStack_2e._1_1_ = (byte)((ushort)sVar3 >> 8);
      uStack_2e._0_1_ = (undefined1)sVar3;
      sVar8 = _local_30 + (short)local_1c;
      uStack_48 = CONCAT13(uStack_2e._1_1_,CONCAT12((undefined1)uStack_2e,_local_30));
      local_3e = sVar4;
      uStack_2e = sVar3;
      auStack_44[(uint)bVar13 * -4] = local_2c[(uint)bVar13 * -4];
      uStack_2e = uStack_2e + (short)local_18;
      local_2c[0] = local_2c[0] + (short)local_14;
    } while (iVar9 != 1);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0dccfc (Ghidra: FUN_000dccfc)
 * Prototype: undefined8 sub_0dccfc(void);
 * Address  : 0xdccfc (Size: 41 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x7da18, 0xb3afc
 ******************************************************************************/
undefined8 FUN_000dccfc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  iVar1 = FUN_000b3afc();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,CONCAT31((int3)((uint)iVar1 >> 8),1));
  }
  uVar2 = FUN_0007da18();
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0dcd44 (Ghidra: FUN_000dcd44)
 * Prototype: uint sub_0dcd44(void);
 * Address  : 0xdcd44 (Size: 1224 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10229
 * Callees  : 2 -> 0x7da18, 0xb3afc
 ******************************************************************************/
uint FUN_000dcd44(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  undefined1 uVar7;
  char extraout_AL;
  char cVar8;
  ushort *in_EAX;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint3 uVar14;
  uint3 extraout_var;
  ushort *in_EDX;
  short sVar15;
  byte bVar16;
  undefined1 local_58;
  byte bStack_57;
  undefined2 uStack_56;
  ushort auStack_54 [3];
  undefined2 uStack_4e;
  ushort auStack_4c [2];
  undefined4 local_48;
  ushort auStack_44 [2];
  undefined1 local_40;
  byte local_3f;
  undefined2 local_3e;
  ushort auStack_3c [2];
  byte *local_38;
  byte *local_34;
  byte *local_30;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  
  sVar4 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
  bVar16 = 0;
  iVar9 = (uint)*in_EDX - (uint)*in_EAX;
  iVar10 = (uint)in_EDX[1] - (uint)in_EAX[1];
  iVar11 = (*(int *)(in_EDX + 1) >> 0x10) - (*(int *)(in_EAX + 1) >> 0x10);
  cVar8 = *(char *)((int)in_EAX + 1);
  if ((cVar8 != *(char *)((int)in_EDX + 1)) ||
     (iVar13 = CONCAT31((int3)(CONCAT22((short)((uint)((int)in_EAX + 1) >> 0x10),
                                        CONCAT11(*(char *)((int)in_EDX + 1),cVar8)) >> 8),
                        *(char *)((int)in_EAX + 3)),
     *(char *)((int)in_EAX + 3) != *(char *)((int)in_EDX + 3))) {
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      local_1c = -0x100;
    }
    else {
      local_1c = 0x100;
    }
    if (iVar10 < 0) {
      iVar10 = -iVar10;
      local_24 = -0x100;
    }
    else {
      local_24 = 0x100;
    }
    if (iVar11 < 0) {
      iVar11 = -iVar11;
      local_20 = -0x100;
    }
    else {
      local_20 = 0x100;
    }
    local_34 = (byte *)((int)in_EAX + 1);
    local_38 = (byte *)((int)in_EDX + 1);
    if (iVar9 == iVar10) {
      uVar12 = (uint)*local_38 - (uint)*local_34;
    }
    else {
      if (iVar10 < iVar9) {
        local_24 = (local_24 * iVar10) / iVar9;
        bVar1 = *local_38;
        bVar2 = *local_34;
        iVar10 = iVar9;
      }
      else {
        local_1c = (local_1c * iVar9) / iVar10;
        bVar1 = *(byte *)((int)in_EDX + 3);
        bVar2 = *(byte *)((int)in_EAX + 3);
      }
      uVar12 = (uint)bVar1 - (uint)bVar2;
    }
    local_20 = (iVar11 * local_20) / iVar10;
    local_2c = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
    local_48 = *(undefined4 *)in_EAX;
    auStack_44[0] = in_EAX[2];
    iVar10 = CONCAT22((short)((uint)local_2c >> 0x10),*in_EAX) + local_1c;
    sVar15 = (short)iVar10;
    iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),in_EAX[1]) + local_24;
    uStack_56 = (short)iVar10;
    iVar13 = CONCAT22((short)((uint)iVar10 >> 0x10),in_EAX[2]) + local_20;
    auStack_54[0] = (ushort)iVar13;
    if (local_2c != 0) {
      local_30 = &local_3f;
      local_28 = &local_3f;
      local_18 = &bStack_57;
      do {
        bStack_57 = (byte)((ushort)sVar15 >> 8);
        local_58 = (undefined1)sVar15;
        uStack_4e = sVar4;
        iVar10 = FUN_000b3afc();
        if (iVar10 == 0) {
          FUN_0007da18();
          cVar8 = extraout_AL;
          uVar14 = extraout_var;
          sVar5 = uStack_56;
          sVar4 = uStack_4e;
          sVar15 = local_3e;
        }
        else {
          uVar14 = (uint3)((uint)iVar10 >> 8);
          cVar8 = '\x01';
          sVar5 = uStack_56;
          sVar4 = uStack_4e;
          sVar15 = local_3e;
        }
        uVar7 = local_40;
        uVar6 = auStack_54[2];
        uStack_56._1_1_ = (byte)((ushort)sVar5 >> 8);
        if (cVar8 != '\0') {
          return (uint)uVar14 << 8;
        }
        uVar12 = ((bStack_57 / 3) * 3 + (uStack_56._1_1_ / 3) * 0x300 + 0x101) * 5;
        if ((*(byte *)((int)&DAT_00279203 + uVar12) & 0x40) != 0) {
          return uVar12 & 0xffffff00;
        }
        iVar10 = (uint)bStack_57 - (uint)local_48._1_1_;
        uStack_4e._1_1_ = local_48._3_1_;
        iVar9 = (uint)uStack_56._1_1_ - (uint)local_48._3_1_;
        if ((iVar10 != 0) && (iVar9 != 0)) {
          local_40 = (undefined1)local_48;
          local_3e._0_1_ = (undefined1)((uint)local_48 >> 0x10);
          uStack_4e._0_1_ = (undefined1)local_3e;
          auStack_54[2] = (ushort)local_48;
          sVar3 = (short)((uint)local_48 >> 0x10);
          local_3e._1_1_ = local_48._3_1_;
          uStack_56 = sVar5;
          switch(iVar10 + iVar9 * 2) {
          case 1:
            auStack_3c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            auStack_54[2] = auStack_54[2] + -0x100;
            local_3e._1_1_ = local_3e._1_1_ + 1;
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
            }
            if ((char)uVar12 != '\0') {
LAB_000dd15a:
              return uVar12 & 0xffffff00;
            }
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
              sVar5 = uStack_56;
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
              sVar5 = uStack_56;
            }
            uVar6 = auStack_54[2];
            uVar7 = local_40;
            sVar15 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
            sVar4 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
            if ((char)uVar12 != '\0') goto LAB_000dd15a;
            break;
          case 3:
            auStack_3c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            uStack_4e._1_1_ = uStack_4e._1_1_ + 1;
            local_3f = local_3f + 1;
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
            }
            if ((char)uVar12 != '\0') {
LAB_000dd1de:
              return uVar12 & 0xffffff00;
            }
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
              sVar5 = uStack_56;
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
              sVar5 = uStack_56;
            }
            uVar6 = auStack_54[2];
            uVar7 = local_40;
            sVar15 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
            sVar4 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
            if ((char)uVar12 != '\0') goto LAB_000dd1de;
            break;
          case -3:
            auStack_3c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            auStack_54[2] = auStack_54[2] + -0x100;
            local_3e = sVar3 + -0x100;
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
            }
            if ((char)uVar12 != '\0') {
LAB_000dd04c:
              return uVar12 & 0xffffff00;
            }
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
              sVar5 = uStack_56;
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
              sVar5 = uStack_56;
            }
            sVar4 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
            uVar6 = auStack_54[2];
            uVar7 = local_40;
            sVar15 = local_3e;
            if ((char)uVar12 != '\0') goto LAB_000dd04c;
            break;
          case -1:
            auStack_3c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)bVar16 * -4] = auStack_44[(uint)bVar16 * -4];
            uStack_4e = sVar3 + -0x100;
            local_3f = local_3f + 1;
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
            }
            if ((char)uVar12 != '\0') {
LAB_000dd0d7:
              return uVar12 & 0xffffff00;
            }
            iVar10 = FUN_000b3afc();
            if (iVar10 == 0) {
              uVar12 = FUN_0007da18();
              sVar5 = uStack_56;
            }
            else {
              uVar12 = CONCAT31((int3)((uint)iVar10 >> 8),1);
              sVar5 = uStack_56;
            }
            uVar6 = auStack_54[2];
            uVar7 = local_40;
            sVar15 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
            sVar4 = uStack_4e;
            if ((char)uVar12 != '\0') goto LAB_000dd0d7;
          }
        }
        local_40 = uVar7;
        auStack_54[2] = uVar6;
        iVar10 = local_1c;
        uStack_56._1_1_ = (byte)((ushort)sVar5 >> 8);
        uStack_56._0_1_ = (undefined1)sVar5;
        local_48 = CONCAT13(uStack_56._1_1_,
                            CONCAT12((undefined1)uStack_56,CONCAT11(bStack_57,local_58)));
        local_3e = sVar15;
        auStack_44[(uint)bVar16 * -4] = auStack_54[(uint)bVar16 * -4];
        sVar15 = CONCAT11(bStack_57,local_58) + (short)iVar10;
        uStack_56 = sVar5 + (short)local_24;
        auStack_54[0] = auStack_54[0] + (short)local_20;
        local_2c = local_2c + -1;
        if (local_2c == 0) {
          return CONCAT31((int3)((uint)local_20 >> 8),1);
        }
      } while( true );
    }
  }
  return CONCAT31((int3)((uint)iVar13 >> 8),1);
}

