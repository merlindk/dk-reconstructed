/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: good.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 24
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_038212 (Ghidra: FUN_00038212)
 * Prototype: longlong sub_038212(void);
 * Address  : 0x38212 (Size: 90 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x3826c, 0x63b6d, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_00038212(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  undefined8 uVar2;
  
  uVar2 = FUN_000d0f50();
  iVar1 = (int)uVar2;
  if ((((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0x10)) &&
      (*(short *)(iVar1 + 1) == *(short *)((int)((ulonglong)uVar2 >> 0x20) + 0x7e))) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    FUN_0003826c();
    return CONCAT44(in_EDX,1);
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_03826c (Ghidra: FUN_0003826c)
 * Prototype: undefined4 sub_03826c(void);
 * Address  : 0x3826c (Size: 91 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x38212
 * Callees  : 2 -> 0xb4ac4, 0xcdcd0
 ******************************************************************************/
undefined4 FUN_0003826c(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = FUN_000b4ac4(0);
  if (iVar2 != 0) {
    iVar2 = FUN_000cdcd0();
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x2d) = *(undefined4 *)(in_EAX + 0xd);
      *(undefined2 *)(iVar1 + 0x31 + (uint)bVar3 * -8) =
           *(undefined2 *)(in_EAX + 0x11 + (uint)bVar3 * -8);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : dk_level_design_player_should_0382d8 (Ghidra: FUN_000382d8)
 * Prototype: longlong dk_level_design_player_should_0382d8(void);
 * Address  : 0x382d8 (Size: 558 bytes)
 * Module   : good.cpp [direct_file_string_xref]
 * OrigLine : good.cpp:179
 * Naming   : String 'Level design error - Player %d should have lost by now'
 * Callers  : 0 -> 
 * Callees  : 11 -> 0x38a99, 0x38b05, 0x38b5e, 0x38cba, 0x38dcb, 0x38edc, 0x38f70, 0x38faa, 0xb5264, 0xddaf0 ...
 * Strings  :
 *   - 0x164947: "good.cpp"
 *   - 0x164910: "Level design error - Player %d should have lost by now"
 ******************************************************************************/
longlong FUN_000382d8(void)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (DAT_002e8bee - *(int *)(iVar1 + 0x9a) < 2) goto LAB_00038432;
  if (DAT_002e8bee < *(uint *)(iVar1 + 5)) {
    sVar4 = FUN_000b5264();
    if (sVar4 != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x22;
    }
    goto LAB_00038432;
  }
  if (*(char *)(iVar1 + 0x89) != -1) {
    if ((&DAT_0019d0f1)[*(char *)(iVar1 + 0x89) * 0x4ef] == '\x02') {
LAB_0003833e:
      *(undefined1 *)(iVar1 + 0x89) = 0xff;
    }
    else if (DAT_002e8bee - *(int *)(iVar1 + 0x91) < 0x191) {
      sVar4 = FUN_000b5264();
      in_EAX = extraout_ECX_01;
      if (sVar4 != 0) {
        *(undefined1 *)(extraout_ECX_01 + 8) = 0x22;
        goto LAB_00038457;
      }
    }
    else {
      iVar5 = FUN_00038b05();
      in_EAX = extraout_ECX_00;
      if (iVar5 == 0) goto LAB_0003833e;
    }
  }
  if (*(char *)(iVar1 + 0x89) == -1) {
    if (400 < DAT_002e8bee - *(int *)(iVar1 + 0x91)) {
      *(uint *)(iVar1 + 0x91) = DAT_002e8bee;
      *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8c) = 1;
    }
    if (0x40 < DAT_002e8bee - *(int *)(iVar1 + 0x8d)) {
      *(uint *)(iVar1 + 0x8d) = DAT_002e8bee;
      uVar3 = FUN_00038a99();
      *(undefined1 *)(iVar1 + 0x89) = uVar3;
    }
    if (*(char *)(iVar1 + 0x89) == -1) {
      sVar4 = FUN_000b5264();
      if (sVar4 == 0) {
        *(uint *)(iVar1 + 5) = DAT_002e8bee + 0x10;
      }
      else {
        *(undefined1 *)(extraout_ECX_02 + 8) = 0x22;
      }
    }
  }
  else {
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 1:
      iVar5 = FUN_00038faa();
      break;
    default:
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar2 = DAT_002e8bf6 >> 0xd;
      DAT_002e8bf6 = uVar2 | DAT_002e8bf6 * 0x80000;
      if (((uVar2 & 1) == 1) && (iVar5 = FUN_00038dcb(), iVar5 != 0)) goto LAB_00038432;
      iVar5 = FUN_00038cba();
      break;
    case 3:
      iVar5 = FUN_00038edc();
      if (iVar5 != 0) goto LAB_00038432;
      FUN_000e7714(&DAT_0019cbac,s_Level_design_error___Player__d_s_00164910,
                   (int)*(char *)(iVar1 + 0x89));
      FUN_000ddaf0(); /* LbErrorLog("good.cpp", line 179, g_log_buf) */
      goto LAB_00038457;
    case 4:
      if (*(int *)(in_EAX + 0x13) <
          (int)(uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)) {
        iVar5 = FUN_00038b5e();
      }
      else {
        iVar5 = FUN_00038f70();
      }
    }
    if (iVar5 == 0) {
      *(undefined1 *)(iVar1 + 4) = 3;
LAB_00038457:
      return (ulonglong)in_EDX << 0x20;
    }
  }
LAB_00038432:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_038506 (Ghidra: FUN_00038506)
 * Prototype: undefined8 sub_038506(void);
 * Address  : 0x38506 (Size: 66 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xb3b58
 ******************************************************************************/
undefined8 FUN_00038506(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 in_EDX;
  
  uVar1 = FUN_000b3b58();
  if ((short)uVar1 != 0) {
    uVar1 = 1;
    *(undefined1 *)(in_EAX + 8) = 0x24;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_038548 (Ghidra: FUN_00038548)
 * Prototype: undefined8 sub_038548(void);
 * Address  : 0x38548 (Size: 205 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x63b6d, 0xb3b58
 ******************************************************************************/
undefined8 FUN_00038548(void)

{
  ushort uVar1;
  short sVar2;
  int in_EAX;
  undefined4 in_EDX;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(in_EAX + 0x13) != 0) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uVar3 = DAT_002e8bf6 % 9;
    for (uVar1 = 0; uVar1 < 9; uVar1 = uVar1 + 1) {
      uVar4 = (uint)(ushort)(CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe))
                            + *(short *)((int)&DAT_0018b624 + (uVar3 & 0xffff) * 2 + 2));
      if ((*(byte *)((int)&DAT_00279203 + uVar4 * 5) & 0x10) == 0) {
        sVar2 = FUN_000b3b58((int)uVar4 >> 8);
        if (sVar2 != 0) {
          *(undefined1 *)(in_EAX + 8) = 0x25;
          goto LAB_00038982;
        }
      }
      uVar3 = uVar3 + 1;
    }
  }
  FUN_00063b6d();
LAB_00038982:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_038615 (Ghidra: FUN_00038615)
 * Prototype: undefined8 sub_038615(void);
 * Address  : 0x38615 (Size: 83 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x43f07, 0x64ae7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00038615(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = (int)_DAT_002eb9ea;
  if (*(int *)(in_EAX + 0x13) <= iVar2) {
    iVar2 = *(int *)(in_EAX + 0x13);
  }
  iVar1 = FUN_00043f07();
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x13) = iVar2;
    *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) - iVar2;
    FUN_00064ae7();
  }
  return CONCAT44(in_EDX,(uint)(iVar1 != 0));
}

/******************************************************************************
 * Function : sub_038668 (Ghidra: FUN_00038668)
 * Prototype: longlong sub_038668(void);
 * Address  : 0x38668 (Size: 121 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x50d3c, 0x64ae7, 0x81ed4
 ******************************************************************************/
longlong FUN_00038668(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_00050d3c();
  if (iVar1 != 0) {
    *(undefined4 *)(in_EAX + 0x13) = 0;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) = DAT_002ed3ef;
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8a) = *(undefined1 *)(iVar1 + 9);
    FUN_00081ed4();
    FUN_00064ae7();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0386e1 (Ghidra: FUN_000386e1)
 * Prototype: longlong sub_0386e1(void);
 * Address  : 0x386e1 (Size: 210 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x50d3c, 0x63b6d, 0x72af4, 0x81ef4, 0x8608c
 ******************************************************************************/
longlong FUN_000386e1(void)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  undefined4 *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar3 = (undefined4 *)&stack0xfffffff0;
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) != 0) &&
     (psVar1 = (short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282), *psVar1 = *psVar1 + -1
     , puVar3 = (undefined4 *)&stack0xfffffff0,
     *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) == 0)) {
    uStack_14 = 0x38737;
    iVar2 = FUN_00050d3c();
    if ((iVar2 != 0) &&
       ((int)*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8a) == *(int *)(iVar2 + 9))) {
      uStack_14 = 0x38759;
      FUN_00081ef4();
      uStack_14 = 0x38760;
      FUN_00063b6d();
      return CONCAT44(in_EDX,1);
    }
    *(undefined4 *)(in_EAX + 0x13) = 0;
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) != 0) {
      uStack_14 = 0x38795;
      FUN_00072af4();
    }
    uStack_14 = 0;
    puVar3 = &uStack_18;
    uStack_18 = 0;
    FUN_0008608c();
  }
  return (ulonglong)*(uint *)((int)puVar3 + 4) << 0x20;
}

/******************************************************************************
 * Function : sub_0387b3 (Ghidra: FUN_000387b3)
 * Prototype: undefined8 sub_0387b3(void);
 * Address  : 0x387b3 (Size: 470 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x274ad, 0x49bfc, 0x51374, 0x63b6d, 0xb3b58
 ******************************************************************************/
undefined8 FUN_000387b3(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int in_EAX;
  undefined4 uVar4;
  undefined4 in_EDX;
  int iVar5;
  uint local_20;
  int local_1c;
  
  if ((&DAT_002ddd1b +
       (uint)(byte)(&DAT_002d33c8)
                   [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                    (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45 < &DAT_002ddd1c)
     || ((&DAT_002ddd1e)
         [(uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                       (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45] ==
         *(char *)(in_EAX + 6))) {
    bVar1 = *(byte *)(in_EAX + 0xe);
    bVar2 = *(byte *)(in_EAX + 0x10);
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    local_20 = DAT_002e8bf6 >> 0xd;
    DAT_002e8bf6 = local_20 | DAT_002e8bf6 * 0x80000;
    local_20 = local_20 & 3;
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      iVar5 = (uint)(byte)(&DAT_002d33c8)
                          [((&DAT_0019033b)
                            [((int)(*(char *)((int)&DAT_0018b67b + local_20 * 2 + 3) * 3 +
                                   (uint)bVar1) / 3) * 3 + 1] +
                           (&DAT_0019033b)
                           [((int)((char)(&DAT_0018b67f)[local_20 * 2] * 3 + (uint)bVar2) / 3) * 3 +
                            1] * 0x55) * 6] * 0x45;
      if ((&DAT_002ddd1b < &DAT_002ddd1b + iVar5) &&
         ((&DAT_002ddd1e)[iVar5] != *(char *)(in_EAX + 6))) {
        sVar3 = FUN_000b3b58();
        if (sVar3 != 0) {
          FUN_000274ad(0);
          if ((int)(char)(&DAT_002ddd1e)[iVar5] ==
              (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
            FUN_00051374();
          }
          uVar4 = 1;
          *(undefined1 *)(in_EAX + 8) = 0x82;
          goto LAB_00038982;
        }
      }
      local_20 = (int)(local_20 + 1) % 4;
    }
    FUN_00063b6d();
    uVar4 = 0;
  }
  else {
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0') {
      FUN_00049bfc(0);
    }
    uVar4 = 1;
  }
LAB_00038982:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_038989 (Ghidra: FUN_00038989)
 * Prototype: undefined8 sub_038989(void);
 * Address  : 0x38989 (Size: 272 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x239ee, 0x23a48, 0x38a99, 0x38edc, 0x390af, 0x64ae7, 0x69987, 0x82774
 ******************************************************************************/
undefined8 FUN_00038989(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_EDX;
  
  if (1 < (uint)(DAT_002e8bee - *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a))) {
    iVar4 = (int)*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89);
    if (iVar4 < 0) {
      FUN_00069987();
      uVar3 = 0;
      goto LAB_00038982;
    }
    if (*(char *)((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[iVar4 * 0xa84]] + 7) == '\x03') {
LAB_00038a02:
      uVar2 = FUN_00038a99();
      *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89) = uVar2;
      if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89) == -1) {
        iVar4 = FUN_00023a48();
        if (iVar4 != -1) {
          if (((&DAT_002e0ea2)[iVar4 * 0x1508] == '\0') && ((&DAT_002e0ea1)[iVar4 * 0x1508] == '\0')
             ) {
            FUN_00038edc();
          }
          else {
            FUN_000239ee();
            FUN_000390af();
          }
        }
        goto LAB_000389b0;
      }
    }
    else {
      cVar1 = FUN_00082774();
      if (cVar1 == '\0') goto LAB_00038a02;
    }
    FUN_00064ae7();
  }
LAB_000389b0:
  uVar3 = 1;
LAB_00038982:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_038a99 (Ghidra: FUN_00038a99)
 * Prototype: undefined8 sub_038a99(void);
 * Address  : 0x38a99 (Size: 108 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x382d8, 0x38989
 * Callees  : 1 -> 0x38b05
 ******************************************************************************/
undefined8 FUN_00038a99(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  
  if ((*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8c) != '\0') ||
     (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8b) != '\0')) {
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8c) = 0;
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8b) = 0;
    iVar1 = 0;
    while (iVar1 < 5) {
      iVar1 = FUN_00038b05();
      if (iVar1 != 0) {
        return CONCAT44(in_EDX,extraout_ECX);
      }
      iVar1 = extraout_ECX + 1;
    }
  }
  return CONCAT44(in_EDX,0xffffffff);
}

/******************************************************************************
 * Function : sub_038b05 (Ghidra: FUN_00038b05)
 * Prototype: undefined4 sub_038b05(void);
 * Address  : 0x38b05 (Size: 89 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x382d8, 0x38a99
 * Callees  : 1 -> 0x82774
 ******************************************************************************/
undefined4 FUN_00038b05(void)

{
  char cVar1;
  int in_EDX;
  
  if (((((&DAT_0019d0c8)[in_EDX * 0x4ef] & 1) != 0) && ((&DAT_0019d0f4)[in_EDX * 0x4ef] == '\x01'))
     && (*(char *)((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[in_EDX * 0xa84]] + 7) != '\x03')) {
    cVar1 = FUN_00082774();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_038b5e (Ghidra: FUN_00038b5e)
 * Prototype: undefined4 sub_038b5e(void);
 * Address  : 0x38b5e (Size: 348 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x382d8
 * Callees  : 2 -> 0x82774, 0xb3b58
 ******************************************************************************/
undefined4 FUN_00038b5e(void)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int extraout_ECX;
  int in_EDX;
  uint local_18;
  
  uVar1 = (&DAT_002e0598)[in_EDX * 0xa84];
  local_18 = 0;
  while (iVar4 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar4) {
    if ((*(short *)(&DAT_002ddd2b + iVar4) != 0) &&
       (cVar2 = FUN_00082774((ushort)(byte)(&DAT_002ddd23)[iVar4] << 8,0x100), in_EDX = extraout_ECX
       , cVar2 != '\0')) {
      local_18 = local_18 + 1;
    }
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar4);
  }
  if (local_18 != 0) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    local_18 = DAT_002e8bf6 % local_18;
    uVar1 = (&DAT_002e0598)[in_EDX * 0xa84];
    while (iVar4 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar4) {
      if ((*(short *)(&DAT_002ddd2b + iVar4) != 0) &&
         (cVar2 = FUN_00082774((ushort)(byte)(&DAT_002ddd23)[iVar4] << 8,0x100), cVar2 != '\0')) {
        if (local_18 == 0) {
          sVar3 = FUN_000b3b58();
          if (sVar3 != 0) {
            *(undefined1 *)(in_EAX + 8) = 0x83;
            *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
                 *(undefined2 *)(&DAT_002ddd1c + iVar4);
            return 1;
          }
        }
        else {
          local_18 = local_18 - 1;
        }
      }
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar4);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_038cba (Ghidra: FUN_00038cba)
 * Prototype: undefined4 sub_038cba(void);
 * Address  : 0x38cba (Size: 273 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x382d8
 * Callees  : 2 -> 0x82774, 0xb3b58
 ******************************************************************************/
undefined4 FUN_00038cba(void)

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  short sVar4;
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  uint local_18;
  
  uVar1 = (&DAT_002e05b8)[in_EDX * 0xa84];
  local_18 = 0;
  while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
    if ((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) &&
       (cVar3 = FUN_00082774(), in_EDX = extraout_ECX, cVar3 != '\0')) {
      local_18 = local_18 + 1;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
  }
  if (local_18 != 0) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    local_18 = DAT_002e8bf6 % local_18;
    uVar1 = (&DAT_002e05b8)[in_EDX * 0xa84];
    while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
      if ((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) &&
         (cVar3 = FUN_00082774(), cVar3 != '\0')) {
        if (local_18 == 0) {
          sVar4 = FUN_000b3b58();
          if (sVar4 != 0) {
            *(undefined1 *)(in_EAX + 8) = 0x22;
            return 1;
          }
        }
        else {
          local_18 = local_18 - 1;
        }
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_038dcb (Ghidra: FUN_00038dcb)
 * Prototype: undefined4 sub_038dcb(void);
 * Address  : 0x38dcb (Size: 273 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x382d8
 * Callees  : 2 -> 0x82774, 0xb3b58
 ******************************************************************************/
undefined4 FUN_00038dcb(void)

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  short sVar4;
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  uint local_18;
  
  uVar1 = (&DAT_002e05b6)[in_EDX * 0xa84];
  local_18 = 0;
  while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
    if ((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) &&
       (cVar3 = FUN_00082774(), in_EDX = extraout_ECX, cVar3 != '\0')) {
      local_18 = local_18 + 1;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
  }
  if (local_18 != 0) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    local_18 = DAT_002e8bf6 % local_18;
    uVar1 = (&DAT_002e05b6)[in_EDX * 0xa84];
    while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
      if ((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) &&
         (cVar3 = FUN_00082774(), cVar3 != '\0')) {
        if (local_18 == 0) {
          sVar4 = FUN_000b3b58();
          if (sVar4 != 0) {
            *(undefined1 *)(in_EAX + 8) = 0x22;
            return 1;
          }
        }
        else {
          local_18 = local_18 - 1;
        }
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_038edc (Ghidra: FUN_00038edc)
 * Prototype: undefined4 sub_038edc(void);
 * Address  : 0x38edc (Size: 79 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x382d8, 0x38989
 * Callees  : 1 -> 0x16d38
 ******************************************************************************/
undefined4 FUN_00038edc(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((((-1 < in_EDX) && (in_EDX < 5)) && (in_EDX != *(char *)(in_EAX + 6))) &&
     ((((&DAT_0019d0c8)[in_EDX * 0x4ef] & 1) != 0 && ((&DAT_002e0589)[in_EDX * 0xa84] != 0)))) {
    FUN_00016d38();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_038f2b (Ghidra: FUN_00038f2b)
 * Prototype: undefined8 sub_038f2b(void);
 * Address  : 0x38f2b (Size: 69 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x17cd2, 0x38f70
 * Callees  : 1 -> 0x827fc
 ******************************************************************************/
undefined8 FUN_00038f2b(void)

{
  char cVar1;
  uint uVar2;
  uint extraout_ECX;
  undefined4 in_EDX;
  
  for (uVar2 = DAT_002e6ec6; uVar2 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < uVar2;
      uVar2 = (uint)*(ushort *)(uVar2 + 0x67)) {
    if ((*(char *)(uVar2 + 0x1a) == '1') &&
       (cVar1 = FUN_000827fc(), uVar2 = extraout_ECX, cVar1 != '\0')) goto LAB_00038f69;
  }
  uVar2 = 0;
LAB_00038f69:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_038f70 (Ghidra: FUN_00038f70)
 * Prototype: longlong sub_038f70(void);
 * Address  : 0x38f70 (Size: 58 bytes)
 * Module   : good.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x382d8
 * Callees  : 2 -> 0x38f2b, 0xb3b58
 ******************************************************************************/
longlong FUN_00038f70(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  iVar2 = FUN_00038f2b();
  if (iVar2 != 0) {
    sVar1 = FUN_000b3b58();
    if (sVar1 != 0) {
      *(undefined1 *)(in_EAX + 8) = 0x80;
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_038faa (Ghidra: FUN_00038faa)
 * Prototype: undefined4 sub_038faa(void);
 * Address  : 0x38faa (Size: 261 bytes)
 * Module   : good.cpp [direct_file_string_xref]
 * OrigLine : good.cpp:971 ("Eh?")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x382d8
 * Callees  : 7 -> 0x274ad, 0x51374, 0x827fc, 0xca34c, 0xcc4a0, 0xcc968, 0xddaf0
 * Strings  :
 *   - 0x164954: "good.cpp"
 *   - 0x164950: "Eh?"
 ******************************************************************************/
undefined4 FUN_00038faa(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_000ca34c(1);
  if (((iVar2 != 0) && (cVar1 = FUN_000cc968(), cVar1 != '\0')) &&
     (cVar1 = FUN_000827fc(), cVar1 != '\0')) {
    iVar3 = FUN_000cc4a0();
    if (iVar3 != 0) {
      FUN_000274ad(0);
      if ((int)*(char *)(iVar2 + 3) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
      *(undefined1 *)(in_EAX + 8) = 0x82;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
           *(undefined2 *)(iVar2 + 1);
      return 1;
    }
    FUN_000ddaf0(); /* LbErrorLog("good.cpp", line 971, "Eh?") */
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0390af (Ghidra: FUN_000390af)
 * Prototype: undefined4 sub_0390af(void);
 * Address  : 0x390af (Size: 52 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x38989, 0x698da, 0x6992a, 0x69987
 * Callees  : 1 -> 0xb3cac
 ******************************************************************************/
undefined4 FUN_000390af(void)

{
  int in_EAX;
  undefined1 in_DL;
  
  *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89) = in_DL;
  FUN_000b3cac();
  *(undefined1 *)(in_EAX + 8) = 0x4d;
  return 1;
}

/******************************************************************************
 * Function : sub_0390e3 (Ghidra: FUN_000390e3)
 * Prototype: undefined4 sub_0390e3(void);
 * Address  : 0x390e3 (Size: 53 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x699e0
 * Callees  : 1 -> 0xb3cac
 ******************************************************************************/
undefined4 FUN_000390e3(void)

{
  int in_EAX;
  
  *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89) = 0xff;
  FUN_000b3cac();
  *(undefined1 *)(in_EAX + 8) = 0x4d;
  return 1;
}

/******************************************************************************
 * Function : sub_039118 (Ghidra: FUN_00039118)
 * Prototype: void sub_039118(void);
 * Address  : 0x39118 (Size: 67 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb3dac
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00039118(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = iVar1 + 8;
  do {
    iVar3 = iVar2 + -2;
    *(undefined2 *)(iVar2 + 0x90) = *(undefined2 *)(iVar2 + 0x8e);
    iVar2 = iVar3;
  } while (iVar3 != iVar1);
  *(ushort *)(iVar1 + 0x90) =
       (ushort)*(byte *)(in_EAX + 0xe) + (ushort)*(byte *)(in_EAX + 0x10) * 0x100;
  return;
}

/******************************************************************************
 * Function : sub_03915c (Ghidra: FUN_0003915c)
 * Prototype: void sub_03915c(void);
 * Address  : 0x3915c (Size: 63 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x8bde8
 * Callees  : 1 -> 0x392c5
 ******************************************************************************/
void FUN_0003915c(void)

{
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  uint uVar1;
  
  uVar1 = (uint)DAT_0019cba6;
  FUN_000392c5(in_EDX / (int)uVar1,unaff_EBX / (int)uVar1,in_ECX / (int)uVar1);
  return;
}

/******************************************************************************
 * Function : sub_03919b (Ghidra: FUN_0003919b)
 * Prototype: void sub_03919b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0x3919b (Size: 73 bytes)
 * Module   : good.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x39202
 ******************************************************************************/
void FUN_0003919b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int in_ECX;
  
  FUN_00039202(in_ECX / (int)(uint)DAT_0019cba6,param_2,param_3,param_4,param_5);
  return;
}

