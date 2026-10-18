/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: lair.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_04c6ec (Ghidra: FUN_0004c6ec)
 * Prototype: void sub_04c6ec(int param_1);
 * Address  : 0x4c6ec (Size: 255 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4c7eb
 * Callees  : 3 -> 0x4c2dc, 0x1292c8, 0x13a3f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c6ec(int param_1)

{
  int in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  DAT_00348ef4 = in_EAX;
  DAT_00348ef8 = in_EDX;
  if (DAT_003d9581 == '\0') {
    _DAT_00348f00 = (int)(param_1 * (uint)*(byte *)(unaff_EBX + 7)) >> 5;
    _DAT_00348efc = (int)(param_1 * (uint)*(byte *)(unaff_EBX + 6)) >> 5;
    FUN_0013a3f8(_DAT_00348efc,_DAT_00348f00);
  }
  else {
    _DAT_00348f00 = (int)(param_1 * (uint)*(byte *)(unaff_EBX + 7)) >> 5;
    _DAT_00348efc = (int)(param_1 * (uint)*(byte *)(unaff_EBX + 6)) >> 5;
    FUN_001292c8(_DAT_00348efc,_DAT_00348f00);
  }
  if ((((DAT_003d9580 != '\0') && (DAT_00348ef4 <= DAT_00387db0)) &&
      (DAT_00387db0 <= DAT_00348ef4 + _DAT_00348efc)) &&
     ((DAT_00348ef8 <= DAT_00387db4 && (DAT_00387db4 <= DAT_00348ef8 + _DAT_00348f00)))) {
    FUN_0004c2dc();
  }
  FUN_0004c353(in_ECX);
  return;
}

/******************************************************************************
 * Function : sub_04c7eb (Ghidra: FUN_0004c7eb)
 * Prototype: void sub_04c7eb(undefined4 param_1,int param_2);
 * Address  : 0x4c7eb (Size: 614 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x8afd8, 0xdb5c4, 0xdbb84
 * Callees  : 7 -> 0x3a5aa, 0x4c3a2, 0x4c4f2, 0x4c618, 0x4c6ec, 0x4ccc2, 0xe69fc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c7eb(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 in_ECX;
  short in_DX;
  int iVar4;
  uint unaff_EBX;
  byte **ppbVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  byte local_18 [8];
  char local_10;
  
  puVar6 = &local_2c;
  ppbVar5 = (byte **)&local_2c;
  uVar1 = (ushort)in_ECX & 0x7ff;
  if ((uVar1 < 0x480) || (0x77e < uVar1)) {
    local_10 = '\0';
  }
  else {
    local_10 = '\x01';
  }
  if (local_10 == '\0') {
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfe;
  }
  else {
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 1;
  }
  local_2c._2_2_ = (undefined2)((uint)in_ECX >> 0x10);
  local_2c = CONCAT22(local_2c._2_2_,(ushort)in_ECX + 0x80) & 0xffff07ff;
  puStack_30 = (undefined1 *)0x4c844;
  local_28._0_2_ = in_DX;
  uVar2 = FUN_000e69fc();
  local_2c = CONCAT22(local_2c._2_2_,uVar2);
  iVar7 = DAT_002f10da + (uint)*(ushort *)((int)&PTR_DAT_00179450 + (unaff_EBX & 0xffff) * 2) * 0x10
  ;
  _DAT_00348f04 = param_2;
  local_24 = (int)(short)local_24 + (*(short *)(iVar7 + 0xc) * param_2 >> 5);
  local_28 = (int)(short)local_28 + (*(short *)(iVar7 + 0xe) * param_2 >> 5);
  iVar3 = local_28;
  if ((DAT_003d957c == 0) ||
     ((((*(byte *)(DAT_003d957c + 0x25) & 1) == 0 && ((*(byte *)(DAT_003d957c + 0x25) & 2) == 0)) &&
      (iVar3 = DAT_003d957c, (*(byte *)(DAT_003d957c + 0x25) & 4) == 0)))) {
    _DAT_00348eec = 0;
    _DAT_00348ee8 = 0;
  }
  else {
    if ((*(byte *)(DAT_003d957c + 0x25) & 4) == 0) {
      iVar3 = 6;
    }
    else {
      puStack_30 = local_1c;
      puStack_34 = local_20;
      pbStack_38 = local_18;
      ppbVar5 = &pbStack_38;
      FUN_0004ccc2();
      iVar3 = (0x30 - *(short *)((&DAT_001b0a00)[*(ushort *)(DAT_003d957c + 100)] + 0x9a)) *
              (uint)local_18[0];
      iVar4 = iVar3 >> 0x1f;
      iVar3 = (iVar3 + iVar4 * -0x20) - (uint)(iVar4 << 4 < 0);
      iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f) >> 1;
    }
    _DAT_00348eec = iVar3 * 2;
    puVar6 = ppbVar5;
    if ((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x01') {
      _DAT_00348ee8 = _DAT_00348eec * param_2 >> 5;
      _DAT_00348eec = iVar3;
    }
    else {
      iVar3 = iVar3 * param_2 >> 5;
      _DAT_00348ee8 = iVar3;
    }
  }
  local_28 = local_28 + CONCAT22((short)((uint)iVar3 >> 0x10),DAT_00348ee8);
  if (*(char *)(iVar7 + 8) == '\0') {
    *(undefined4 *)((int)puVar6 + -4) = 0x4c999;
    iVar3 = FUN_0003a5aa();
    if (iVar3 != 0) {
      if (local_10 == '\0') {
        *(int *)((int)puVar6 + -4) = param_2;
        *(undefined4 *)((int)puVar6 + -8) = 0x4c9df;
        FUN_0004c6ec();
      }
      else {
        *(int *)((int)puVar6 + -4) = param_2;
        *(undefined4 *)((int)puVar6 + -8) = 0x4c9c8;
        FUN_0004c4f2();
      }
    }
  }
  else if (*(char *)(iVar7 + 8) == '\x02') {
    *(undefined4 *)((int)puVar6 + -4) = 0x4c9e9;
    iVar3 = FUN_0003a5aa();
    if (iVar3 != 0) {
      if (local_10 == '\0') {
        *(int *)((int)puVar6 + -4) = param_2;
        *(undefined4 *)((int)puVar6 + -8) = 0x4ca4c;
        FUN_0004c618();
      }
      else {
        *(int *)((int)puVar6 + -4) = param_2;
        *(undefined4 *)((int)puVar6 + -8) = 0x4ca32;
        FUN_0004c3a2();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04ca51 (Ghidra: FUN_0004ca51)
 * Prototype: void sub_04ca51(void);
 * Address  : 0x4ca51 (Size: 625 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x9ff84
 * Callees  : 5 -> 0x3a5aa, 0xe69fc, 0xe6a10, 0x1382d0, 0x1383c5
 ******************************************************************************/
void FUN_0004ca51(void)

{
  char cVar1;
  bool bVar2;
  uint in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  ushort in_DX;
  uint unaff_EBX;
  undefined6 uVar4;
  char local_30;
  char local_28;
  char local_1c;
  char local_10;
  
  if (((in_DX & 0x7ff) < 0x480) || (0x77e < (in_DX & 0x7ff))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_000e69fc();
  cVar1 = *(char *)(DAT_002f10da +
                    (uint)*(ushort *)((int)&PTR_DAT_00179450 + (in_EAX & 0xffff) * 2) * 0x10 + 8);
  if (cVar1 == '\0') {
    iVar3 = FUN_0003a5aa();
    if (iVar3 != 0) {
      iVar3 = extraout_ECX + (unaff_EBX & 0xff) * 0x10;
      if (!bVar2) {
        local_1c = *(char *)(iVar3 + 7);
        while (local_1c != '\0') {
          local_1c = local_1c + -1;
          FUN_000e6a10();
        }
LAB_0004cbd4:
        FUN_001382d0();
        return;
      }
      local_28 = *(char *)(iVar3 + 7);
      while (local_28 != '\0') {
        local_28 = local_28 + -1;
        FUN_000e6a10();
      }
LAB_0004cb66:
      FUN_001383c5();
      return;
    }
  }
  else if (cVar1 == '\x02') {
    uVar4 = FUN_0003a5aa();
    if ((int)uVar4 != 0) {
      iVar3 = extraout_ECX_00 +
              ((int)(short)((uint6)uVar4 >> 0x20) * (uint)*(byte *)(extraout_ECX_00 + 9) +
              (unaff_EBX & 0xff)) * 0x10;
      if (!bVar2) {
        local_10 = *(char *)(iVar3 + 5);
        while (local_10 != '\0') {
          local_10 = local_10 + -1;
          FUN_000e6a10();
        }
        goto LAB_0004cbd4;
      }
      local_30 = *(char *)(iVar3 + 5);
      while (local_30 != '\0') {
        local_30 = local_30 + -1;
        FUN_000e6a10();
      }
      goto LAB_0004cb66;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04ccc2 (Ghidra: FUN_0004ccc2)
 * Prototype: void sub_04ccc2(undefined1 *param_1,ushort *param_2,ushort *param_3);
 * Address  : 0x4ccc2 (Size: 330 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4c7eb, 0x738f2, 0xa49ec
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_0004ccc2(undefined1 *param_1,ushort *param_2,ushort *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  short sVar4;
  byte *extraout_ECX;
  ushort in_DX;
  int extraout_EDX;
  int iVar5;
  byte unaff_BL;
  undefined2 local_1c;
  
  if (((in_DX & 0x7ff) < 0x480) || (0x77e < (in_DX & 0x7ff))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 1;
  }
  else {
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfe;
  }
  local_1c = in_DX + 0x80 & 0x7ff;
  sVar4 = FUN_000e69fc((short)local_1c >> 8);
  if (*(char *)(extraout_EDX + 8) == '\0') {
    iVar5 = extraout_EDX + (uint)unaff_BL * 0x10;
    if (bVar2) {
      *extraout_ECX = *(byte *)(iVar5 + 6);
      *param_1 = *(undefined1 *)(iVar5 + 7);
      sVar4 = (ushort)*extraout_ECX - (ushort)*(byte *)(iVar5 + 10);
      bVar1 = *(byte *)(iVar5 + 4);
      goto LAB_0004cd91;
    }
    *extraout_ECX = *(byte *)(iVar5 + 6);
    uVar3 = *(undefined1 *)(iVar5 + 7);
LAB_0004cda0:
    *param_1 = uVar3;
    *param_2 = (ushort)*(byte *)(iVar5 + 10);
  }
  else {
    iVar5 = extraout_EDX;
    if (*(char *)(extraout_EDX + 8) != '\x02') goto LAB_0004cd54;
    iVar5 = extraout_EDX + ((int)sVar4 * (uint)*(byte *)(extraout_EDX + 9) + (uint)unaff_BL) * 0x10;
    if (!bVar2) {
      *extraout_ECX = *(byte *)(iVar5 + 4);
      uVar3 = *(undefined1 *)(iVar5 + 5);
      goto LAB_0004cda0;
    }
    *extraout_ECX = *(byte *)(iVar5 + 4);
    *param_1 = *(undefined1 *)(iVar5 + 5);
    sVar4 = (ushort)*(byte *)(iVar5 + 6) - (ushort)*(byte *)(iVar5 + 10);
    bVar1 = *extraout_ECX;
LAB_0004cd91:
    *param_2 = sVar4 - (ushort)bVar1;
  }
  *param_3 = (ushort)*(byte *)(iVar5 + 0xb);
LAB_0004cd54:
  *param_2 = *param_2 + *(short *)(iVar5 + 0xc);
  *param_3 = *param_3 + *(short *)(iVar5 + 0xe);
  return;
}

/******************************************************************************
 * Function : sub_04ce0c (Ghidra: FUN_0004ce0c)
 * Prototype: longlong sub_04ce0c(void);
 * Address  : 0x4ce0c (Size: 75 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x4d022, 0x63b6d, 0x64ae7
 ******************************************************************************/
longlong FUN_0004ce0c(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  if ((&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0') {
    FUN_00063b6d();
    return (ulonglong)in_EDX << 0x20;
  }
  iVar1 = FUN_0004d022();
  if (iVar1 != 0) {
    *(undefined1 *)(in_EAX + 8) = 0x11;
    return CONCAT44(in_EDX,1);
  }
  FUN_00064ae7();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_chosen_lair_valid_ooops_04ce57 (Ghidra: FUN_0004ce57)
 * Prototype: longlong dk_chosen_lair_valid_ooops_04ce57(void);
 * Address  : 0x4ce57 (Size: 254 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp:55 ("CHOSEN LAIR IS NOT VALID - OOOPS")
 * Naming   : String 'CHOSEN LAIR IS NOT VALID - OOOPS'
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x274ad, 0x4d683, 0x4dcd5, 0x51374, 0x63b6d, 0xca8c0, 0xddaf0
 * Strings  :
 *   - 0x165765: "lair.cpp"
 *   - 0x165744: "CHOSEN LAIR IS NOT VALID - OOOPS"
 ******************************************************************************/
longlong FUN_0004ce57(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  undefined4 *puVar2;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  uStack_14 = 0x4ce62;
  iVar1 = FUN_0004d683();
  if (iVar1 == 0) {
    if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      if (*(short *)(&DAT_002e05b0 +
                    (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508) != 0) {
        uStack_14 = 0x4cee5;
        FUN_000ca8c0();
      }
      uStack_14 = 0x4cf1f;
      FUN_00051374();
    }
    if (*(short *)(&DAT_002e05b0 + *(char *)(in_EAX + 6) * 0x1508) != 0) {
      puVar2 = &uStack_14;
      uStack_14 = 0;
      FUN_000274ad();
    }
  }
  else {
    uStack_14 = 0x4ce6f;
    iVar1 = FUN_0004dcd5();
    if (iVar1 != 0) {
      *(undefined1 *)(in_EAX + 8) = 0x16;
      return CONCAT44(in_EDX,1);
    }
    uStack_14 = 0x4ce95;
    FUN_000ddaf0(); /* LbErrorLog("lair.cpp", line 55, "CHOSEN LAIR IS NOT VALID - OOOPS") */
    puVar2 = (undefined4 *)&stack0xfffffff0;
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x4cf4e;
  FUN_00063b6d();
  return (ulonglong)*(uint *)((int)puVar2 + 4) << 0x20;
}

/******************************************************************************
 * Function : sub_04cf55 (Ghidra: FUN_0004cf55)
 * Prototype: longlong sub_04cf55(void);
 * Address  : 0x4cf55 (Size: 75 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x4d2c3, 0x63b6d, 0x64ae7, 0xd0f50
 ******************************************************************************/
longlong FUN_0004cf55(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_000d0f50();
  if (((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xe)) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    iVar1 = FUN_0004d2c3();
    if (iVar1 == 0) {
      FUN_00064ae7();
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04cfa0 (Ghidra: FUN_0004cfa0)
 * Prototype: longlong sub_04cfa0(void);
 * Address  : 0x4cfa0 (Size: 130 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x4dcd5, 0x63b6d, 0xcfd8c, 0xd0f50
 ******************************************************************************/
longlong FUN_0004cfa0(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  iVar1 = FUN_000d0f50();
  if (((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xe)) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    iVar1 = FUN_000cfd8c();
    if (iVar1 != 0) {
      iVar1 = FUN_0004dcd5();
      if (iVar1 != 0) {
        if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68) == 0) {
          *(undefined1 *)(in_EAX + 8) = 0x16;
        }
        else {
          *(undefined1 *)(in_EAX + 8) = 0x7e;
        }
        return CONCAT44(in_EDX,1);
      }
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04d022 (Ghidra: FUN_0004d022)
 * Prototype: longlong sub_04d022(void);
 * Address  : 0x4d022 (Size: 46 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4ce0c, 0x4d081, 0x6da70, 0xcb33c
 * Callees  : 1 -> 0x4dc4e
 ******************************************************************************/
longlong FUN_0004d022(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68) != 0) &&
     (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) != 0)) {
    iVar1 = FUN_0004dc4e();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04d050 (Ghidra: FUN_0004d050)
 * Prototype: longlong sub_04d050(void);
 * Address  : 0x4d050 (Size: 49 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4d081, 0x4d0d5, 0x4d197
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0004d050(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x21) == 0) &&
     (*(int *)(&DAT_002e0e11 + *(char *)(in_EAX + 6) * 0x1508) == 0)) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04d081 (Ghidra: FUN_0004d081)
 * Prototype: longlong sub_04d081(void);
 * Address  : 0x4d081 (Size: 84 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x4d022, 0x4d050, 0x63b6d, 0x64ae7
 ******************************************************************************/
longlong FUN_0004d081(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_0004d022();
  if (iVar1 != 0) {
    *(undefined1 *)(in_EAX + 8) = 0x18;
    return CONCAT44(in_EDX,1);
  }
  if ((&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') {
    iVar1 = FUN_0004d050();
    if (iVar1 != 0) {
      FUN_00064ae7();
      return (ulonglong)in_EDX << 0x20;
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04d0d5 (Ghidra: FUN_0004d0d5)
 * Prototype: longlong sub_04d0d5(void);
 * Address  : 0x4d0d5 (Size: 194 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x104db, 0x10575, 0x4d050, 0x4d8d2, 0x4dbf1, 0x63b6d, 0x64ae7, 0xd0f50
 ******************************************************************************/
longlong FUN_0004d0d5(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  
  iVar1 = FUN_0004d050();
  if (iVar1 != 0) {
    iVar1 = FUN_0004dbf1();
    if (iVar1 != 0) {
      iVar1 = FUN_000d0f50();
      if ((((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xe)) &&
          (*(char *)(iVar1 + 3) == *(char *)(extraout_ECX + 6))) &&
         (*(short *)(iVar1 + 1) ==
          *(short *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x68))) {
        iVar1 = FUN_00010575();
        if (iVar1 != 0) {
          FUN_0004d8d2();
          FUN_00064ae7();
          *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x82) = 0;
          FUN_000104db();
          return CONCAT44(in_EDX,1);
        }
      }
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04d197 (Ghidra: FUN_0004d197)
 * Prototype: undefined8 sub_04d197(void);
 * Address  : 0x4d197 (Size: 300 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x104db, 0x10575, 0x49bfc, 0x4d050, 0x4d8d2, 0x4dbf1, 0x63b6d, 0x6edb9, 0xd0f50
 ******************************************************************************/
undefined8 FUN_0004d197(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uStack_18;
  
  puVar5 = (uint *)&stack0xffffffec;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uStack_18 = 0x4d1ae;
  iVar3 = FUN_0004d050();
  if (iVar3 != 0) {
    uStack_18 = 0x4d1bd;
    iVar3 = FUN_0004dbf1();
    if (iVar3 != 0) {
      uStack_18 = 0x4d1cc;
      iVar3 = FUN_000d0f50();
      if ((((iVar3 != 0) && (*(short *)(iVar3 + 10) == 0xe)) &&
          (*(char *)(iVar3 + 3) == *(char *)(in_EAX + 6))) &&
         (*(short *)(iVar3 + 1) == *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68))) {
        uStack_18 = 0x4d20f;
        iVar3 = FUN_00010575();
        if (iVar3 != 0) {
          uStack_18 = 0x4d21e;
          FUN_0004d8d2();
          iVar2 = *(int *)(iVar1 + 0x82);
          iVar3 = iVar2 + 1;
          *(int *)(iVar1 + 0x82) = iVar3;
          puVar5 = (uint *)&stack0xffffffec;
          if (200 < iVar2) {
            if (iVar3 % 0x20 == 0) {
              uStack_18 = 0x4d255;
              FUN_0006edb9();
            }
            if (*(int *)(iVar1 + 0x82) + -200 < 0x32) {
              puVar5 = (uint *)&stack0xffffffec;
              if (*(byte *)(iVar1 + 0xd2) == 0) {
                uStack_18 = (uint)*(byte *)(iVar1 + 0xd2);
                FUN_00049bfc();
                puVar5 = &uStack_18;
              }
            }
            else {
              *(undefined4 *)(iVar1 + 0x82) = 0;
              puVar5 = (uint *)&stack0xffffffec;
            }
          }
          *(undefined4 *)((int)puVar5 + -4) = 0x4d2ad;
          FUN_000104db();
          uVar4 = 1;
          goto LAB_0004d2bd;
        }
      }
    }
  }
  uStack_18 = 0x4d2bb;
  FUN_00063b6d();
  uVar4 = 0;
LAB_0004d2bd:
  return CONCAT44(*(undefined4 *)((int)puVar5 + 8),uVar4);
}

/******************************************************************************
 * Function : sub_04d2c3 (Ghidra: FUN_0004d2c3)
 * Prototype: undefined4 sub_04d2c3(void);
 * Address  : 0x4d2c3 (Size: 178 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4cf55, 0x4ddd0
 * Callees  : 6 -> 0x4d3d4, 0x4da55, 0x4dc89, 0x50c38, 0x50ca9, 0xcfd8c
 ******************************************************************************/
undefined4 FUN_0004d2c3(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  
  bVar2 = *(byte *)(in_EAX + 0x1a);
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar4 = FUN_000cfd8c();
  if (iVar4 != 0) {
    iVar4 = FUN_0004dc89();
    if (iVar4 == 0) {
      pcVar1 = (char *)(extraout_ECX + 0x17 + (uint)*(byte *)(in_EAX + 0x1a));
      *pcVar1 = *pcVar1 + '\x01';
      *(short *)(extraout_ECX + 0x10) =
           *(short *)(extraout_ECX + 0x10) + (ushort)(byte)(&DAT_002e9124)[(uint)bVar2 * 0xe6];
      iVar4 = extraout_ECX;
      if ((*(short *)(iVar3 + 0x68) != 0) && (*(short *)(iVar3 + 0x6a) != 0)) {
        FUN_0004d3d4();
        iVar4 = extraout_ECX_00;
      }
      *(undefined2 *)(iVar3 + 0x68) = *(undefined2 *)(iVar4 + 1);
      FUN_0004da55();
      FUN_00050ca9();
      FUN_00050c38();
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_totem_owner_04d375 (Ghidra: FUN_0004d375)
 * Prototype: longlong dk_totem_owner_04d375(void);
 * Address  : 0x4d375 (Size: 95 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp:356 ("NO TOTEM OWNER")
 * Naming   : String 'NO TOTEM OWNER'
 * Callers  : 2 -> 0x4d3d4, 0xcf594
 * Callees  : 2 -> 0x72af4, 0xddaf0
 * Strings  :
 *   - 0x16577d: "lair.cpp"
 *   - 0x16576e: "NO TOTEM OWNER"
 ******************************************************************************/
longlong FUN_0004d375(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  
  iVar1 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x13)];
  if (iVar1 != 0) {
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x68) = 0;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x6a) = 0;
    FUN_00072af4();
    return CONCAT44(in_EDX,1);
  }
  FUN_000ddaf0(); /* LbErrorLog("lair.cpp", line 356, "NO TOTEM OWNER") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_attempt_remove_creature_lair_04d3d4 (Ghidra: FUN_0004d3d4)
 * Prototype: undefined4 dk_attempt_remove_creature_lair_04d3d4(void);
 * Address  : 0x4d3d4 (Size: 361 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp:394 ("Attempt to remove creature lair from room not containing this breed"); lair.cpp:408 ("Attempt to remove a creatures lair from room he didn't think he was in")
 * Naming   : String 'Attempt to remove creature lair from room with too little us'
 * Callers  : 5 -> 0x4d2c3, 0x63a25, 0x72af4, 0xc9280, 0xd08a8
 * Callees  : 3 -> 0x24998, 0x4d375, 0xddaf0
 * Strings  :
 *   - 0x1657cb: "lair.cpp"
 *   - 0x165818: "lair.cpp"
 *   - 0x165868: "lair.cpp"
 *   - 0x165786: "Attempt to remove creature lair from room with too little used space"
 *   - 0x1657d4: "Attempt to remove creature lair from room not containing this breed"
 *   - 0x165821: "Attempt to remove a creatures lair from room he didn't think he was in"
 ******************************************************************************/
undefined4 FUN_0004d3d4(void)

{
  char *pcVar1;
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  int iVar2;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  if (*(short *)(in_EDX + 1) == *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68)) {
    if (*(char *)(*(byte *)(in_EAX + 0x1a) + 0x17 + in_EDX) == '\0') {
      FUN_000ddaf0(); /* LbErrorLog("lair.cpp", line 394, "Attempt to remove creature lair from room not containing this breed") */
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x68) = 0;
      if (*(short *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x6a) == 0) {
        return 0;
      }
      FUN_00024998();
      FUN_0004d375();
      return 0;
    }
    if (-1 < (int)((uint)*(ushort *)(in_EDX + 0x10) - (uint)(byte)(&DAT_002e9124)[iVar2])) {
      *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) - (ushort)(byte)(&DAT_002e9124)[iVar2];
      pcVar1 = (char *)(*(byte *)(in_EAX + 0x1a) + 0x17 + in_EDX);
      *pcVar1 = *pcVar1 + -1;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68) = 0;
      if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) != 0) {
        FUN_00024998();
        FUN_0004d375();
      }
      return 1;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("lair.cpp", line 408, "Attempt to remove a creatures lair from room he didn't think he was in") */
  return 0;
}

/******************************************************************************
 * Function : sub_04d53d (Ghidra: FUN_0004d53d)
 * Prototype: undefined4 sub_04d53d(void);
 * Address  : 0x4d53d (Size: 201 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp:499 ("CREATURE HAS NO CURRENT LAIR")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16588e: "lair.cpp"
 ******************************************************************************/
undefined4 FUN_0004d53d(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int in_EAX;
  undefined4 uVar4;
  int in_EDX;
  uint uVar5;
  
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  uVar5 = 0;
  while (((int)uVar5 < 0x20 && (((!bVar1 || (!bVar2)) || (!bVar3))))) {
    if (*(char *)(in_EDX + 0x17) != '\0') {
      if (uVar5 == *(byte *)(in_EAX + 0x1a)) {
        bVar1 = true;
      }
      else {
        bVar2 = true;
        if (uVar5 == (int)*(short *)(&DAT_002e91e0 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)) {
          bVar3 = true;
        }
      }
    }
    in_EDX = in_EDX + 1;
    uVar5 = uVar5 + 1;
  }
  if (bVar1) {
    if (bVar2) {
      if (bVar3) {
        uVar4 = 1;
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 6;
    }
  }
  else if (bVar2) {
    if (bVar3) {
      uVar4 = 2;
    }
    else {
      uVar4 = 4;
    }
  }
  else {
    uVar4 = 3;
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_04d683 (Ghidra: FUN_0004d683)
 * Prototype: undefined8 sub_04d683(void);
 * Address  : 0x4d683 (Size: 591 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x2796f, 0x4ce57, 0x51f4c, 0x52119
 * Callees  : 4 -> 0xcc420, 0xcfd8c, 0xdc440, 0xe6a10
 ******************************************************************************/
undefined8 FUN_0004d683(void)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 uVar9;
  undefined4 extraout_ECX_01;
  undefined4 in_EDX;
  int local_48;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  iVar6 = DAT_00199228;
  bVar1 = *(byte *)(in_EAX + 0x1a);
  FUN_000e6a10();
  uVar2 = *(ushort *)(&DAT_002e05b0 + *(char *)(in_EAX + 6) * 0x1508);
  local_3c = (undefined1 *)0x0;
  local_34 = 0x7fffffff;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_44 = 0;
  local_2c = 0;
  while (&DAT_002ddd1b < &DAT_002ddd1b + (uint)uVar2 * 0x45) {
    iVar7 = FUN_000cfd8c();
    iVar8 = extraout_ECX;
    if ((iVar7 != 0) && (iVar7 = FUN_000cc420(), iVar8 = extraout_ECX_00, iVar7 != 0)) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      local_30 = 0;
      iVar7 = extraout_ECX_00;
      while (((int)local_30 < 0x20 && (((!bVar3 || (!bVar4)) || (!bVar5))))) {
        if (*(char *)(iVar7 + 0x17) != '\0') {
          if (*(byte *)(in_EAX + 0x1a) == local_30) {
            bVar3 = true;
          }
          else {
            bVar4 = true;
            if (local_30 == (int)*(short *)(&DAT_002e91e0 + (uint)bVar1 * 0xe6)) {
              bVar5 = true;
            }
          }
        }
        local_30 = local_30 + 1;
        iVar7 = iVar7 + 1;
      }
      if ((bVar3) && (bVar4)) {
        if (bVar5) {
          local_2c = local_2c + 1;
          *(undefined1 *)(iVar6 + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 1;
        }
        else {
          local_38 = local_38 + 1;
          *(undefined1 *)(iVar6 + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 5;
        }
      }
      else if (bVar3) {
        local_48 = local_48 + 1;
        *(undefined1 *)(iVar6 + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 6;
      }
      else if (bVar4) {
        if (bVar5) {
          local_44 = local_44 + 1;
          *(undefined1 *)(iVar6 + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 2;
        }
        else {
          local_40 = local_40 + 1;
          *(undefined1 *)(iVar6 + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 4;
        }
      }
      else {
        local_28 = local_28 + 1;
        *(undefined1 *)(iVar6 + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 3;
      }
    }
    uVar2 = *(ushort *)(iVar8 + 6);
  }
  if (local_48 == 0) {
    if (local_38 == 0) {
      if (local_28 == 0) {
        if (local_40 == 0) {
          if (local_2c == 0) {
            if (local_44 == 0) {
              local_3c = (undefined1 *)0x0;
              goto LAB_0004d2bd;
            }
            uVar9 = 2;
          }
          else {
            uVar9 = 1;
          }
        }
        else {
          uVar9 = 4;
        }
      }
      else {
        uVar9 = 3;
      }
    }
    else {
      uVar9 = 5;
    }
  }
  else {
    uVar9 = 6;
  }
  uVar2 = *(ushort *)(&DAT_002e05b0 + *(char *)(in_EAX + 6) * 0x1508);
  while( true ) {
    iVar8 = (uint)uVar2 * 0x45;
    if (&DAT_002ddd1b + iVar8 < &DAT_002ddd1c) break;
    if (((char)uVar9 == *(char *)(iVar6 + (uint)*(ushort *)(&DAT_002ddd1c + iVar8))) &&
       (iVar7 = FUN_000dc440((ushort)(byte)(&DAT_002ddd23)[iVar8] << 8,0x100),
       uVar9 = extraout_ECX_01, iVar7 < local_34)) {
      local_3c = &DAT_002ddd1b + iVar8;
      local_34 = iVar7;
    }
    uVar2 = *(ushort *)(&DAT_002ddd21 + iVar8);
  }
LAB_0004d2bd:
  return CONCAT44(in_EDX,local_3c);
}

/******************************************************************************
 * Function : sub_04d8d2 (Ghidra: FUN_0004d8d2)
 * Prototype: undefined4 sub_04d8d2(void);
 * Address  : 0x4d8d2 (Size: 387 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4d0d5, 0x4d197, 0x6da97, 0x6db51
 * Callees  : 4 -> 0x16175, 0x18087, 0x189d4, 0xd0f50
 ******************************************************************************/
undefined4 FUN_0004d8d2(void)

{
  ushort uVar1;
  byte *pbVar2;
  byte *in_EAX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *in_EDX;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  int aiStack_2c [3];
  undefined *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = in_EDX;
  if (in_EDX == (undefined1 *)0x0) {
    uVar7 = (uint)CONCAT11(in_EAX[0x10],in_EAX[0xe]);
    if ((*(byte *)((int)&DAT_00279203 + uVar7 * 5) & 2) == 0) {
      return 0;
    }
    aiStack_2c[2] = (&DAT_0019033b)[(int)uVar7 >> 8] * 0x55;
    local_18 = 0x100;
    iVar3 = (uint)(byte)(&DAT_002d33c8)[((&DAT_0019033b)[uVar7 % 0x100] + aiStack_2c[2]) * 6] * 0x45
    ;
    local_1c = &DAT_002ddd1b + iVar3;
    if (*(short *)(&DAT_002ddd25 + iVar3) != 0xe) {
      return 0;
    }
    if (*(short *)(&DAT_002ddd1c + iVar3) !=
        *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68)) {
      return 0;
    }
    if ((&DAT_002ddd1e)[iVar3] != in_EAX[6]) {
      return 0;
    }
  }
  local_20 = &DAT_002e910d + (uint)in_EAX[0x1a] * 0xe6;
  if ((*(short *)(&DAT_002e91e0 + (uint)in_EAX[0x1a] * 0xe6) != 0) &&
     (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 0x3f) == 0)) {
    uVar1 = (&DAT_002e05b6)[(char)in_EAX[6] * 0xa84];
    piVar6 = aiStack_2c + 2;
    while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
      puVar5 = (undefined1 *)piVar6;
      if (((((ushort)pbVar2[0x1a] == *(ushort *)(local_20 + 0xd3)) &&
           (*(char *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 3) == '\0')) &&
          ((*pbVar2 & 0x10) == 0)) && (((pbVar2[1] & 2) == 0 && (pbVar2 != in_EAX)))) {
        *(undefined4 *)((int)piVar6 + -4) = 0x4da1f;
        puVar4 = (undefined1 *)FUN_000d0f50();
        if (puVar4 == local_1c) {
          *(undefined4 *)((int)piVar6 + -4) = 0x4da2d;
          FUN_000189d4();
          puVar5 = (undefined1 *)((int)piVar6 + -4);
          *(undefined4 *)((int)piVar6 + -4) = 0;
          *(undefined4 *)((int)piVar6 + -8) = 0x4da3c;
          iVar3 = FUN_00016175();
          if (0 < iVar3) {
            *(undefined4 *)((int)piVar6 + -8) = 0x4da4b;
            FUN_00018087();
            return 1;
          }
        }
      }
      piVar6 = (int *)puVar5;
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_could_create_totem_04da55 (Ghidra: FUN_0004da55)
 * Prototype: void dk_could_create_totem_04da55(void);
 * Address  : 0x4da55 (Size: 412 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp:760 ("Could not create totem")
 * Naming   : String 'Could not create totem'
 * Callers  : 1 -> 0x4d2c3
 * Callees  : 7 -> 0x109ea, 0x24998, 0x43f07, 0x6e538, 0x8ccec, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x1658ae: "lair.cpp"
 *   - 0x165897: "Could not create totem"
 ******************************************************************************/
void FUN_0004da55(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int in_EAX;
  int iVar6;
  undefined2 uVar7;
  
  uVar4 = *(undefined2 *)(in_EAX + 0xd);
  uVar7 = *(undefined2 *)(in_EAX + 0x11);
  uVar1 = *(ushort *)(&DAT_00188bf5 + (uint)*(byte *)(in_EAX + 0x1a) * 5);
  iVar6 = FUN_00043f07(uVar4,uVar7);
  if (iVar6 == 0) {
    FUN_000ddaf0(uVar4,uVar7,0); /* LbErrorLog("lair.cpp", line 760, "Could not create totem") */
  }
  else {
    uVar4 = FUN_000b28e8();
    *(undefined2 *)(iVar6 + 0x11) = uVar4;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) =
         *(undefined2 *)(iVar6 + 0x1b);
    uVar4 = *(undefined2 *)(in_EAX + 0x1b);
    *(undefined2 *)(iVar6 + 0x15) = 1;
    *(undefined2 *)(iVar6 + 0x13) = uVar4;
    *(short *)(iVar6 + 0x17) =
         (short)((ulonglong)
                 ((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 300) / 0x14)
         + 300;
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar2 = DAT_002e8bf6 >> 0xd;
    uVar3 = DAT_002e8bf6 * 0x80000;
    DAT_002e8bf6._0_2_ = (ushort)uVar2;
    uVar5 = (ushort)DAT_002e8bf6 & 0x7ff;
    DAT_002e8bf6 = uVar2 | uVar3;
    *(ushort *)(iVar6 + 0x52) = uVar5;
    FUN_0008ccec(0,0xffffffff,(&DAT_0018b917)[(uint)uVar1 * 0x16]);
    FUN_0006e538(3,1,2,0x100);
    FUN_00024998();
    FUN_000109ea();
  }
  return;
}

/******************************************************************************
 * Function : sub_04dbf1 (Ghidra: FUN_0004dbf1)
 * Prototype: longlong sub_04dbf1(void);
 * Address  : 0x4dbf1 (Size: 93 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4d0d5, 0x4d197, 0x6da97, 0x6db51
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
longlong FUN_0004dbf1(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) != 0) {
    iVar1 = FUN_000e69fc();
    if (iVar1 < 1) {
      iVar1 = FUN_000e69fc();
      if (iVar1 < 1) {
        return CONCAT44(in_EDX,1);
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04dc4e (Ghidra: FUN_0004dc4e)
 * Prototype: undefined8 sub_04dc4e(void);
 * Address  : 0x4dc4e (Size: 59 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4d022
 * Callees  : 1 -> 0xb3b58
 ******************************************************************************/
undefined8 FUN_0004dc4e(void)

{
  short sVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) != 0) {
    sVar1 = FUN_000b3b58();
    uVar2 = 1;
    if (sVar1 == 1) goto LAB_0004dc85;
  }
  uVar2 = 0;
LAB_0004dc85:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_04dc89 (Ghidra: FUN_0004dc89)
 * Prototype: uint sub_04dc89(void);
 * Address  : 0x4dc89 (Size: 76 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4d2c3, 0x4dcd5, 0xc9280, 0xcf594
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0004dc89(void)

{
  uint in_EAX;
  uint uVar1;
  uint in_EDX;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 + ((in_EAX & 0xffff) + (in_EDX & 0xffff) * 0x100) * 5 + 1) &
          0x3fffff) >> 0xb;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if ((*(char *)(uVar1 + 0x1f) == '\x01') &&
       ((&DAT_0018b919)[(uint)*(byte *)(uVar1 + 0x1a) * 0x16] != '\0')) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  }
  return uVar1;
}

/******************************************************************************
 * Function : dk_get_somewhere_room_04dcd5 (Ghidra: FUN_0004dcd5)
 * Prototype: undefined4 dk_get_somewhere_room_04dcd5(void);
 * Address  : 0x4dcd5 (Size: 251 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp:864 ("CANNOT GET SOMEWHERE IN ROOM"); lair.cpp:869 ("No more slab-room for lair")
 * Naming   : String 'CANNOT GET SOMEWHERE IN ROOM'
 * Callers  : 2 -> 0x4ce57, 0x4cfa0
 * Callees  : 3 -> 0x4dc89, 0xb3b58, 0xddaf0
 * Strings  :
 *   - 0x1658d4: "lair.cpp"
 *   - 0x1658f8: "lair.cpp"
 *   - 0x1658b7: "CANNOT GET SOMEWHERE IN ROOM"
 *   - 0x1658dd: "No more slab-room for lair"
 ******************************************************************************/
undefined4 FUN_0004dcd5(void)

{
  short sVar1;
  int iVar2;
  int in_EDX;
  int local_1c;
  uint local_18;
  
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_18 = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
  for (iVar2 = 0; iVar2 < (int)local_18; iVar2 = iVar2 + 1) {
  }
  local_1c = 0;
  do {
    if ((int)(uint)*(ushort *)(in_EDX + 0x3b) <= local_1c) {
      FUN_000ddaf0(); /* LbErrorLog("lair.cpp", line 864, "CANNOT GET SOMEWHERE IN ROOM") */
      return 0;
    }
    if (*(ushort *)(in_EDX + 0x3b) == local_18) {
      local_18 = 0;
    }
    iVar2 = FUN_0004dc89();
    if (iVar2 == 0) {
      sVar1 = FUN_000b3b58();
      if (sVar1 != 0) {
        return 1;
      }
      FUN_000ddaf0(); /* LbErrorLog("lair.cpp", line 869, "No more slab-room for lair") */
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_04ddd0 (Ghidra: FUN_0004ddd0)
 * Prototype: longlong sub_04ddd0(void);
 * Address  : 0x4ddd0 (Size: 157 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x4d2c3, 0x64ae7
 ******************************************************************************/
longlong FUN_0004ddd0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint in_EDX;
  
  uVar2 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe));
  if ((((*(byte *)((int)&DAT_00279203 + uVar2 * 5) & 2) != 0) &&
      (iVar1 = ((&DAT_0019033b)[uVar2 % 0x100] + (&DAT_0019033b)[(int)uVar2 >> 8] * 0x55) * 6,
      (uint)((&DAT_002d33ca)[iVar1] & 7) == (int)*(char *)(in_EAX + 6))) &&
     (*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar1] * 0x45) == 0xe)) {
    iVar1 = FUN_0004d2c3();
    if (iVar1 == 0) {
      FUN_00064ae7();
      goto LAB_0004d2bb;
    }
  }
  FUN_00063b6d();
LAB_0004d2bb:
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_04de8c (Ghidra: FUN_0004de8c)
 * Prototype: void sub_04de8c(uint param_1);
 * Address  : 0x4de8c (Size: 593 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x27130
 * Callees  : 1 -> 0xe8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004de8c(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *in_EAX;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int unaff_EBX;
  int iVar5;
  longdouble lVar6;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_1c;
  
  if (param_1 == 0) {
    for (iVar5 = 0; iVar5 < unaff_EBX; iVar5 = iVar5 + 1) {
      for (iVar4 = 0; iVar4 < in_EDX; iVar4 = iVar4 + 1) {
        *in_EAX = in_EDX * (iVar5 / 2) + iVar4 / 2;
        in_EAX = in_EAX + 1;
      }
    }
  }
  else if (param_1 < 2) {
    fVar1 = (float)in_EDX * _DAT_00165904;
    fVar2 = (float)unaff_EBX * _DAT_00165904;
    for (fVar3 = -fVar2; fVar3 < fVar2; fVar3 = fVar3 + 1.0) {
      local_28 = -fVar1;
      while (local_28 < fVar1) {
        fsin(((longdouble)fVar3 / (longdouble)in_EDX) * (longdouble)_DAT_0016590c);
        fsin(((longdouble)local_28 / (longdouble)unaff_EBX) * (longdouble)_DAT_0016590c);
        lVar6 = (longdouble)FUN_000e8d50();
        local_24 = (int)ROUND(lVar6);
        lVar6 = (longdouble)FUN_000e8d50();
        local_34 = (int)ROUND(lVar6);
        if (local_24 < 0) {
          local_24 = 0;
        }
        else if (in_EDX <= local_24) {
          local_24 = extraout_ECX;
        }
        if (local_34 < 0) {
          local_34 = 0;
        }
        else if (unaff_EBX <= local_34) {
          local_34 = unaff_EBX + -1;
        }
        local_28 = local_28 + 1.0;
        *in_EAX = local_24 + in_EDX * local_34;
        in_EAX = in_EAX + 1;
      }
    }
  }
  else if (param_1 == 2) {
    fVar2 = (float)in_EDX * _DAT_00165904;
    fVar3 = (float)unaff_EBX * _DAT_00165904;
    for (fVar1 = -fVar3; fVar1 < fVar3; fVar1 = fVar1 + 1.0) {
      local_1c = -fVar2;
      while (local_1c < fVar2) {
        lVar6 = (longdouble)FUN_000e8d50();
        local_2c = (int)ROUND(lVar6);
        lVar6 = (longdouble)FUN_000e8d50();
        local_30 = (int)ROUND(lVar6);
        if (local_2c < 0) {
          local_2c = 0;
        }
        else if (in_EDX <= local_2c) {
          local_2c = extraout_ECX_00;
        }
        if (local_30 < 0) {
          local_30 = 0;
        }
        else if (unaff_EBX <= local_30) {
          local_30 = unaff_EBX + -1;
        }
        local_1c = local_1c + 1.0;
        *in_EAX = local_2c + in_EDX * local_30;
        in_EAX = in_EAX + 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04e0dd (Ghidra: FUN_0004e0dd)
 * Prototype: void sub_04e0dd(int param_1,int param_2);
 * Address  : 0x4e0dd (Size: 65 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x87da4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0004e0dd(int param_1,int param_2)

{
  int iVar1;
  undefined1 *in_EAX;
  int in_ECX;
  int in_EDX;
  int *unaff_EBX;
  int local_10;
  
  for (; local_10 = in_ECX, param_1 != 0; param_1 = param_1 + -1) {
    while (local_10 != 0) {
      iVar1 = *unaff_EBX;
      local_10 = local_10 + -1;
      unaff_EBX = unaff_EBX + 1;
      *in_EAX = *(undefined1 *)(in_EDX + iVar1);
      in_EAX = in_EAX + 1;
    }
    in_EAX = in_EAX + (param_2 - in_ECX);
  }
  return;
}

/******************************************************************************
 * Function : sub_04e120 (Ghidra: FUN_0004e120)
 * Prototype: undefined4 sub_04e120(void);
 * Address  : 0x4e120 (Size: 210 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 5 -> 0x7027c, 0x708fa, 0x847d4, 0x84ff8, 0xc57c4
 ******************************************************************************/
undefined4 FUN_0004e120(void)

{
  ushort in_AX;
  int iVar1;
  short in_CX;
  int extraout_ECX;
  int iVar2;
  
  iVar2 = 0;
  if ((byte)(&DAT_002e05ec)[(uint)in_AX * 0x1508] < 8) {
    if ((in_CX != 0) && (iVar1 = FUN_00084ff8(), iVar1 != 0)) {
      iVar2 = *(int *)((int)&DAT_001ae9fc + extraout_ECX);
    }
    if ((iVar2 == 0) && (*(short *)(&DAT_0019d0fd + (uint)in_AX * 0x4ef) != 0)) {
      iVar2 = (&DAT_001ae9fc)[*(ushort *)(&DAT_0019d0fd + (uint)in_AX * 0x4ef)];
    }
    if ((iVar2 != 0) && (iVar1 = FUN_00084ff8(), iVar1 != 0)) {
      if (*(char *)(iVar2 + 0x1f) == '\x01') {
        iVar2 = FUN_0007027c();
        if (iVar2 != 0) {
          FUN_000708fa();
          return 0;
        }
        iVar2 = FUN_000c57c4();
        if (iVar2 == 0) {
          return 0;
        }
      }
      FUN_000847d4();
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04e1f2 (Ghidra: FUN_0004e1f2)
 * Prototype: undefined4 sub_04e1f2(void);
 * Address  : 0x4e1f2 (Size: 520 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 10 -> 0x23868, 0x43bb3, 0x5003d, 0x51374, 0x64b0c, 0x6e9ab, 0x6edb9, 0x72829, 0x728c2, 0xb3788
 ******************************************************************************/
undefined4 FUN_0004e1f2(void)

{
  ulonglong uVar1;
  char cVar2;
  ushort in_AX;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  cVar2 = FUN_0005003d(0);
  if (((cVar2 == '\0') || (sVar3 = FUN_000728c2(), sVar3 == 0)) ||
     (sVar3 = FUN_00072829(), sVar3 == 0)) {
    if (in_AX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_0006e9ab();
    }
  }
  else {
    iVar4 = FUN_00023868();
    if (iVar4 < 0) {
      if (in_AX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
      return 0xffffffff;
    }
    FUN_000b3788();
    uVar5 = FUN_00043bb3();
    if (DAT_001ae9fc < uVar5) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      DAT_002e8bf6 = uVar6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      uVar1 = (ulonglong)DAT_002e8bf6;
      *(short *)(uVar5 + 0x32) = *(short *)(uVar5 + 0x32) + (short)((ulonglong)uVar6 % 0xa0) + -0x50
      ;
      *(short *)(uVar5 + 0x34) = *(short *)(uVar5 + 0x34) + (short)(uVar1 % 0xa0) + -0x50;
      *(undefined2 *)(uVar5 + 0x52) = 0;
      *(short *)(uVar5 + 0x36) = *(short *)(uVar5 + 0x36) + 0xa0;
      *(byte *)(uVar5 + 1) = *(byte *)(uVar5 + 1) | 4;
      FUN_00064b0c();
      FUN_0006edb9();
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_04e3fa (Ghidra: FUN_0004e3fa)
 * Prototype: void sub_04e3fa(void);
 * Address  : 0x4e3fa (Size: 179 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 1 -> 0x84ff8
 ******************************************************************************/
void FUN_0004e3fa(void)

{
  int iVar1;
  char extraout_CL;
  int in_EDX;
  short unaff_BX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  for (uVar4 = 0; uVar2 = uVar4 & 0xffff, uVar2 < 9; uVar4 = uVar4 + 1) {
    uVar3 = in_EDX + (uint)(ushort)(short)(char)(&DAT_0018b6c2)[uVar2 * 2] & 0xffff;
    if ((uVar3 < 0x100) && ((ushort)((char)(&DAT_0018b6c3)[uVar2 * 2] + unaff_BX) < 0x100)) {
      for (uVar2 = (*(uint *)((int)&DAT_00279203 +
                             ((uint)(ushort)((char)(&DAT_0018b6c3)[uVar2 * 2] + unaff_BX) * 0x100 +
                             uVar3) * 5 + 1) & 0x3fffff) >> 0xb; uVar2 = (&DAT_001ae9fc)[uVar2],
          DAT_001ae9fc < uVar2; uVar2 = (uint)*(ushort *)(uVar2 + 2)) {
        if (((*(char *)(uVar2 + 0x1f) == '\x05') && (iVar1 = FUN_00084ff8(), iVar1 != 0)) &&
           (extraout_CL == *(char *)(uVar2 + 6))) {
          *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x302) = 0x14;
        }
      }
    }
  }
  return;
}

