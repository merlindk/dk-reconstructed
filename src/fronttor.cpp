/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: fronttor.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0362e4 (Ghidra: FUN_000362e4)
 * Prototype: longlong sub_0362e4(void);
 * Address  : 0x362e4 (Size: 98 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x35e3c, 0x36346
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000362e4(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint in_EDX;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    uVar1 = *(ushort *)(&DAT_002e0594 + DAT_002f10ce._3_1_ * 0x1508 + iVar5);
    while (iVar2 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar2) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + (uint)*(ushort *)(&DAT_002ddd5a + iVar2);
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
    }
    iVar5 = iVar5 + 2;
  } while (iVar5 != 0x22);
  if (iVar4 == 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  return CONCAT44(in_EDX,(iVar3 * 100) / (iVar4 << 8));
}

/******************************************************************************
 * Function : sub_036346 (Ghidra: FUN_00036346)
 * Prototype: undefined8 sub_036346(void);
 * Address  : 0x36346 (Size: 132 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35e3c
 * Callees  : 2 -> 0x362e4, 0x363ca
 ******************************************************************************/
undefined8 FUN_00036346(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  
  iVar1 = FUN_000363ca();
  iVar2 = FUN_000362e4();
  iVar3 = DAT_002f10ce._3_1_ * 0x1508;
  iVar1 = (iVar2 * iVar1) / 100 + (*(int *)(&DAT_002e18a4 + iVar3) * 100) / 800;
  if (*(int *)(&DAT_002e184c + iVar3) <= *(int *)(&DAT_002e1850 + iVar3)) goto LAB_000363c2;
  if (*(int *)(&DAT_002e1850 + iVar3) == 0) {
LAB_000363b0:
    iVar2 = 100;
  }
  else {
    iVar2 = *(int *)(&DAT_002e184c + iVar3) / *(int *)(&DAT_002e1850 + iVar3);
    if (iVar2 < 10) {
      iVar2 = 10;
    }
    else if (100 < iVar2) goto LAB_000363b0;
  }
  iVar1 = iVar1 + (iVar2 * iVar1) / 100;
LAB_000363c2:
  return CONCAT44(in_EDX,iVar1 * 0x4b);
}

/******************************************************************************
 * Function : sub_0363ca (Ghidra: FUN_000363ca)
 * Prototype: undefined8 sub_0363ca(void);
 * Address  : 0x363ca (Size: 120 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x35e3c, 0x36346
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000363ca(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    uVar1 = *(ushort *)(&DAT_002e0594 + DAT_002f10ce._3_1_ * 0x1508 + iVar3);
    while (iVar2 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar2) {
      iVar4 = iVar4 + (uint)*(ushort *)(&DAT_002ddd56 + iVar2);
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 != 0x22);
  if ((int)((ushort)(&DAT_002e0ec6)[DAT_002f10ce._3_1_ * 0xa84] / 2) <= iVar4) {
    return CONCAT44(in_EDX,100);
  }
  return CONCAT44(in_EDX,(iVar4 * 100) /
                         (int)((ushort)(&DAT_002e0ec6)[DAT_002f10ce._3_1_ * 0xa84] / 2));
}

/******************************************************************************
 * Function : sub_036442 (Ghidra: FUN_00036442)
 * Prototype: undefined8 sub_036442(void);
 * Address  : 0x36442 (Size: 43 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35e3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00036442(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  do {
    iVar1 = iVar2 + DAT_002f10ce._3_1_ * 0x1508;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + (uint)(byte)(&DAT_002e15a6)[iVar1];
  } while (iVar2 < 5);
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_03646d (Ghidra: FUN_0003646d)
 * Prototype: undefined8 sub_03646d(void);
 * Address  : 0x3646d (Size: 43 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35e3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0003646d(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0;
  do {
    iVar1 = iVar2 + DAT_002f10ce._3_1_ * 0x1508;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + (uint)(byte)(&DAT_002e1591)[iVar1];
  } while (iVar2 < 7);
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_036498 (Ghidra: FUN_00036498)
 * Prototype: undefined8 sub_036498(void);
 * Address  : 0x36498 (Size: 66 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35e3c
 * Callees  : 1 -> 0xd003c
 ******************************************************************************/
undefined8 FUN_00036498(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = 0;
  do {
    if ((iVar2 != 1) && (iVar2 != 7)) {
      iVar1 = FUN_000d003c();
      iVar1 = extraout_ECX + iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_0364da (Ghidra: FUN_000364da)
 * Prototype: undefined8 sub_0364da(void);
 * Address  : 0x364da (Size: 73 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x35e3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000364da(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = DAT_002eb9e4;
  while (iVar2 = (uint)uVar1 * 0x45, iVar2 != 0) {
    if ((int)(char)(&DAT_002ddd1e)[iVar2] == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]
       ) {
      iVar3 = iVar3 + 1;
    }
    uVar1 = *(ushort *)(&DAT_002ddd34 + iVar2);
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_036523 (Ghidra: FUN_00036523)
 * Prototype: undefined1 sub_036523(void);
 * Address  : 0x36523 (Size: 305 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x36018, 0x360e8
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
undefined1 FUN_00036523(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = (int)*(short *)(in_EAX + 0x1d);
  DAT_003d9874 = 0;
  local_18 = DAT_00334728 + 0x96;
  local_24 = 0;
  do {
    FUN_0013a710(iVar3);
    local_24 = local_24 + 1;
    pbVar1 = (byte *)(local_18 + 4);
    local_18 = local_18 + 6;
    iVar3 = iVar3 + (uint)*pbVar1;
    iVar5 = extraout_ECX;
  } while (local_24 < 6);
  while (0 < in_EDX) {
    if (in_EDX < 3) {
      iVar4 = 0x21;
    }
    else {
      iVar4 = 0x28;
    }
    local_20 = 0;
    local_1c = DAT_00334728 + iVar4 * 6;
    iVar5 = (int)*(short *)(iVar5 + 0x1d);
    do {
      FUN_0013a710(iVar3,iVar5);
      local_20 = local_20 + 1;
      pbVar1 = (byte *)(local_1c + 4);
      local_1c = local_1c + 6;
      iVar5 = iVar5 + (uint)*pbVar1;
    } while (local_20 < 6);
    if (in_EDX < 3) {
      iVar5 = 1;
    }
    else {
      iVar5 = 3;
    }
    in_EDX = in_EDX - iVar5;
    iVar5 = extraout_ECX_00;
  }
  local_28 = 0;
  iVar5 = DAT_00334728 + 0x11a;
  do {
    local_28 = local_28 + 1;
    FUN_0013a710(iVar3);
    puVar2 = (undefined1 *)(iVar5 + 4);
    iVar5 = iVar5 + 6;
  } while (local_28 < 6);
  return *puVar2;
}

/******************************************************************************
 * Function : dk_ldata_fronttor_tab_036654 (Ghidra: FUN_00036654)
 * Prototype: void dk_ldata_fronttor_tab_036654(void);
 * Address  : 0x36654 (Size: 839 bytes)
 * Module   : fronttor.cpp [direct_file_string_xref]
 * OrigLine : fronttor.cpp:252 ("Unable to load torture load files")
 * Naming   : String 'LDATA\FRONTTOR.TAB'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 12 -> 0x150f0, 0x2f1c8, 0x2f1d2, 0xdd920, 0xddaf0, 0xe6a10, 0xe7714, 0xe830c, 0xe8c83, 0xe984c ...
 * Strings  :
 *   - 0x164770: "fronttor.cpp"
 *   - 0x164690: "LDATA"
 *   - 0x164698: "%s\TORTURE.RAW"
 *   - 0x1646a7: "LDATA"
 *   - 0x1646af: "%s\TORTURE.PAL"
 *   - 0x1646be: "LDATA"
 *   - 0x1646c6: "%s\DOOR%02d.DAT"
 *   - 0x1646d6: "LDATA"
 *   - 0x1646de: "%s\DOOR%02d.TAB"
 *   - 0x1646ee: "LDATA"
 *   - 0x1646f6: "%s\DOOR%02d.DAT"
 *   - 0x164706: "LDATA"
 *   - 0x16470e: "%s\DOOR%02d.TAB"
 *   - 0x17bd24: "pb3"
 *   - 0x16471e: "LDATA"
 *   - 0x164726: "%s\DOOR%02d.DAT"
 *   - 0x164736: "LDATA"
 *   - 0x16473e: "%s\DOOR%02d.TAB"
 *   - 0x17bec0: "LDATA\FRONTTOR.TAB"
 *   - 0x16474e: "Unable to load torture load files"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036654(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  
  FUN_000150f0();
  FUN_0002f1c8();
  FUN_000e8c83();
  iVar4 = DAT_002f2223;
  DAT_003362d8 = DAT_002f2223;
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_TORTURE_RAW_00164698,uVar1);
  iVar2 = FUN_000e984c();
  DAT_003362dc = iVar4 + iVar2;
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_TORTURE_PAL_001646af,uVar1);
  iVar3 = FUN_000e984c();
  iVar3 = iVar4 + iVar2 + iVar3;
  FUN_000dd920(1);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_DOOR_02d_DAT_001646c6,uVar1); /* 0x1646c6="%s\DOOR%02d.DAT" */
  iVar2 = FUN_000e984c();
  iVar2 = iVar3 + iVar2;
  _DAT_0017bd54 = iVar3;
  _DAT_0017bd58 = iVar2;
  FUN_000dd920(1);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_DOOR_02d_TAB_001646de,uVar1);
  _DAT_0017bd50 = FUN_000e984c();
  _DAT_0017bd50 = iVar2 + _DAT_0017bd50;
  iVar4 = 1;
  iVar3 = 0x1badec;
  DAT_0017bd4c = iVar2;
  do {
    iVar4 = iVar4 + 1;
    FUN_000dd920(iVar4);
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_DOOR_02d_DAT_001646f6,uVar1); /* 0x1646f6="%s\DOOR%02d.DAT" */
    iVar2 = FUN_000e984c();
    *(int *)(&DAT_0017bd54 + extraout_ECX) = iVar3;
    iVar3 = iVar3 + iVar2;
    *(int *)(&DAT_0017bd58 + extraout_ECX) = iVar3;
    FUN_000dd920(iVar4);
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_DOOR_02d_TAB_0016470e,uVar1);
    iVar2 = FUN_000e984c();
    *(int *)((int)&PTR_FUN_000362e1_0017bd20 + extraout_ECX_00) = iVar3;
    iVar3 = iVar3 + iVar2;
    *(int *)((int)&PTR_DAT_0017bd24 + extraout_ECX_00) = iVar3; /* 0x17bd24="pb3" */
  } while (iVar4 < 8);
  FUN_000dd920(9);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_DOOR_02d_DAT_00164726,uVar1); /* 0x164726="%s\DOOR%02d.DAT" */
  iVar4 = FUN_000e984c();
  _DAT_0017beb4 = &DAT_002f317f;
  iVar4 = (int)&DAT_002f317f + iVar4;
  _DAT_0017beb8 = iVar4;
  FUN_000dd920(9);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_DOOR_02d_TAB_0016473e,uVar1);
  _DAT_0017beb0 = FUN_000e984c();
  _DAT_0017beb0 = iVar4 + _DAT_0017beb0;
  _DAT_0017beac = iVar4;
  iVar4 = FUN_000e830c();
  if (iVar4 != 0) {
    FUN_000ddaf0(); /* LbErrorLog("fronttor.cpp", line 252, "Unable to load torture load files") */
  }
  FUN_000f05f0();
  FUN_0002f1d2();
  FUN_000e8c83();
  DAT_003362f0 = 0;
  DAT_003362f1 = 0xffffffff;
  DAT_003362f5 = 0xffffffff;
  DAT_003362f9 = 0;
  FUN_000e6a10();
  FUN_000ebc10();
  DAT_00336349 = 0;
  return;
}

/******************************************************************************
 * Function : dk_ldata_fronttor_tab_03699b (Ghidra: FUN_0003699b)
 * Prototype: void dk_ldata_fronttor_tab_03699b(void);
 * Address  : 0x3699b (Size: 41 bytes)
 * Module   : fronttor.cpp [contiguous_same_unit_span]
 * Naming   : String 'LDATA\FRONTTOR.TAB'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 3 -> 0xe83f0, 0xe8c83, 0xf0730
 * Strings  :
 *   - 0x17bec0: "LDATA\FRONTTOR.TAB"
 ******************************************************************************/
void FUN_0003699b(void)

{
  FUN_000e83f0();
  FUN_000e8c83();
  FUN_000f0730();
  return;
}

/******************************************************************************
 * Function : sub_0369c4 (Ghidra: FUN_000369c4)
 * Prototype: void sub_0369c4(void);
 * Address  : 0x369c4 (Size: 149 bytes)
 * Module   : fronttor.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 2 -> 0xe8c83, 0x13a710
 ******************************************************************************/
void FUN_000369c4(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < DAT_003d9830; iVar1 = iVar1 + 1) {
    FUN_000e8c83();
  }
  for (iVar1 = 0; iVar1 < DAT_0017bfc8; iVar1 = iVar1 + 1) {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Exchange_036a59 (Ghidra: FUN_00036a59)
 * Prototype: void dk_LbNetwork_Exchange_036a59(void);
 * Address  : 0x36a59 (Size: 1017 bytes)
 * Module   : fronttor.cpp [direct_file_string_xref]
 * OrigLine : fronttor.cpp:376 ("LbNetwork_Exchange failed")
 * Naming   : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> 0x2faf6
 * Callees  : 7 -> 0x2e8a7, 0x36e7e, 0xdc150, 0xddaf0, 0xe6a10, 0xedc70, 0xee694
 * Strings  :
 *   - 0x164797: "fronttor.cpp"
 *   - 0x16477d: "LbNetwork_Exchange failed"
 ******************************************************************************/
void FUN_00036a59(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar6;
  int iVar7;
  int local_20;
  
  FUN_000e6a10();
  iVar7 = 0;
  uVar5 = 0;
  local_20 = 0;
  if ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\x01') {
    if (DAT_0034b25c != '\0') {
      DAT_0034b25c = '\0';
      DAT_00336349 = 1;
    }
    if (((DAT_003db535 != '\0') || (DAT_003db518 != '\0')) || (DAT_003db4fd != '\0')) {
      DAT_003db535 = '\0';
      DAT_003db518 = '\0';
      DAT_003db4fd = '\0';
      (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
           (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (DAT_00336349 != 0) {
      (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
           (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 2;
    }
    if (DAT_0034b258 != '\0') {
      (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
           (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 4;
    }
    *(short *)(&DAT_002e90be + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11) =
         (short)DAT_003d9864 * DAT_0019cba6;
    uVar2 = FUN_000dc150();
    *(undefined2 *)
     ((int)&DAT_002e90c0 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11) = uVar2;
    uVar5 = extraout_ECX;
  }
  if (((DAT_0019d0b6 & 1) != 0) && (cVar1 = FUN_000ee694(), uVar5 = extraout_ECX_00, cVar1 != '\0'))
  {
    FUN_000ddaf0(); /* LbErrorLog("fronttor.cpp", line 376, "LbNetwork_Exchange failed") */
    uVar5 = extraout_ECX_01;
  }
  for (iVar6 = 0; iVar6 < 0x18ab; iVar6 = iVar6 + 0x4ef) {
    iVar3 = (uint)(byte)(&DAT_0019d0d3)[iVar6] * 0x11;
    if (((&DAT_002e90bd)[iVar3] != '\0') && ((&DAT_0019d0f1)[iVar6] == '\x01')) {
      uVar5 = (uint)(byte)(&DAT_002e90bd)[iVar3];
      iVar7 = (int)*(short *)(&DAT_002e90be + iVar3);
      local_20 = (int)*(short *)((int)&DAT_002e90c0 + iVar3);
      break;
    }
  }
  if ((uVar5 & 1) == 0) {
    puVar4 = &DAT_0017bd34;
    for (iVar6 = 0; iVar3 = -1, iVar6 < DAT_0017bfc8; iVar6 = iVar6 + 1) {
      if (((((int)puVar4[2] <= iVar7) && ((int)puVar4[3] <= local_20)) &&
          (iVar7 < (int)(puVar4[2] + puVar4[4]))) && (local_20 < (int)(puVar4[3] + puVar4[5]))) {
        if ((DAT_003362f1 == -1) || (iVar6 == DAT_003362f1)) {
          iVar3 = iVar6;
        }
        break;
      }
      puVar4 = puVar4 + 0xb;
    }
    if (iVar3 == -1) {
      DAT_00336349 = 0;
    }
    if (DAT_003362f0 == '\0') {
      if (iVar3 != -1) {
        DAT_003362f0 = '\x01';
        DAT_003362fd = 3;
        DAT_003362f5 = 7;
        DAT_003362f9 = 1;
        DAT_003362f1 = iVar3;
      }
    }
    else {
      if (DAT_003362f0 == '\x01') {
        if (DAT_003362fd != DAT_003362f5) {
          return;
        }
        if (iVar3 == -1) {
          DAT_003362f0 = 2;
          DAT_003362f5 = 4;
          DAT_003362f9 = 0xffffffff;
          DAT_003362fd = 8;
          return;
        }
        if ((uVar5 & 6) == 0) {
          return;
        }
        DAT_00336349 = 0;
        DAT_003362f0 = '\x03';
        DAT_003362fd = 7;
        DAT_003362f5 = 0xb;
        DAT_003362f9 = 1;
      }
      else {
        if (DAT_003362f0 == '\x02') {
          if (DAT_003362fd != DAT_003362f5) {
            return;
          }
          DAT_003362f0 = 0;
          DAT_003362f1 = 0xffffffff;
          return;
        }
        if (DAT_003362f0 != '\x03') {
          if (DAT_003362f0 != '\x04') {
            return;
          }
          if (DAT_003362fd != DAT_003362f5) {
            return;
          }
          DAT_003362f0 = 1;
          DAT_003362f5 = 7;
          DAT_003362fd = 7;
          return;
        }
        if (DAT_003362fd != DAT_003362f5) {
          return;
        }
        if (((uVar5 & 4) != 0) && (iVar3 != -1)) {
          return;
        }
        DAT_003362f0 = '\x04';
        DAT_003362fd = 0xc;
        DAT_003362f5 = 8;
        DAT_003362f9 = 0xffffffff;
      }
      FUN_00036e7e();
    }
  }
  else {
    FUN_0002e8a7();
    if ((DAT_0019d0b6 & 1) != 0) {
      FUN_000edc70();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_036e52 (Ghidra: FUN_00036e52)
 * Prototype: void sub_036e52(void);
 * Address  : 0x36e52 (Size: 163 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 2 -> 0xf0790, 0xf0a54
 ******************************************************************************/
void FUN_00036e52(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_003362f0 != '\0') && (DAT_003362fd != DAT_003362f5)) {
    DAT_003362fd = DAT_003362fd + DAT_003362f9;
  }
  iVar2 = 0;
  do {
    if (*(int *)((int)&DAT_00336305 + iVar2) != 0) {
      iVar1 = *(int *)((int)&DAT_00336301 + iVar2) + *(int *)((int)&DAT_00336305 + iVar2);
      if (iVar1 < 1) {
        iVar1 = 0;
        *(undefined4 *)((int)&DAT_00336305 + iVar2) = 0;
        FUN_000f0a54();
      }
      else if (0x7e < iVar1) {
        iVar1 = 0x7f;
        *(undefined4 *)((int)&DAT_00336305 + iVar2) = 0;
      }
      *(int *)((int)&DAT_00336301 + iVar2) = iVar1;
      if (iVar1 != 0) {
        FUN_000f0790();
      }
    }
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0x48);
  return;
}

/******************************************************************************
 * Function : sub_036e7e (Ghidra: FUN_00036e7e)
 * Prototype: void sub_036e7e(void);
 * Address  : 0x36e7e (Size: 82 bytes)
 * Module   : fronttor.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36a59
 * Callees  : 1 -> 0x6e159
 ******************************************************************************/
void FUN_00036e7e(void)

{
  int in_EAX;
  int in_EDX;
  
  if (in_EDX != 0) {
    FUN_0006e159(100,0xffffffff,2,0);
    *(undefined4 *)(&DAT_00336301 + in_EAX * 4) = 0;
    (&DAT_00336305)[in_EAX * 2] = 0x10;
    return;
  }
  (&DAT_00336305)[in_EAX * 2] = 0xfffffff0;
  return;
}

