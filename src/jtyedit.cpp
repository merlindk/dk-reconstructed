/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: jtyedit.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 8
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_04c16c (Ghidra: FUN_0004c16c)
 * Prototype: uint sub_04c16c(void);
 * Address  : 0x4c16c (Size: 119 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0004c16c(void)

{
  byte bVar1;
  short sVar2;
  uint in_EAX;
  undefined1 *in_EDX;
  
  sVar2 = *(short *)(&DAT_003485c8 + (short)in_EAX * 2);
  bVar1 = (&DAT_003489c8)[(short)in_EAX];
  if (-1 < sVar2) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    *in_EDX = 1;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 << 0x13;
    return (uint)*(ushort *)
                  (&DAT_00348bc8 +
                  (int)(((ulonglong)DAT_002e8bf6 % 0x1ff) % (ulonglong)bVar1) * 2 + sVar2 * 0x10);
  }
  return in_EAX;
}

/******************************************************************************
 * Function : dk_we_should_only_dealing_04c1e3 (Ghidra: FUN_0004c1e3)
 * Prototype: void dk_we_should_only_dealing_04c1e3(void);
 * Address  : 0x4c1e3 (Size: 247 bytes)
 * Module   : jtyedit.cpp [direct_file_string_xref]
 * OrigLine : jtyedit.cpp:130 ("We should only be dealing with columns now")
 * Naming   : String 'We should only be dealing with columns now'
 * Callers  : 2 -> 0xcfdec, 0xd8974
 * Callees  : 2 -> 0x15479, 0xddaf0
 * Strings  :
 *   - 0x165737: "jtyedit.cpp"
 *   - 0x16570c: "We should only be dealing with columns now"
 ******************************************************************************/
void FUN_0004c1e3(void)

{
  uint *puVar1;
  bool bVar2;
  short in_AX;
  int iVar3;
  byte in_DL;
  ushort uVar4;
  byte unaff_BL;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  iVar3 = (int)in_AX;
  bVar2 = false;
  if (-1 < iVar3) {
    FUN_000ddaf0(); /* LbErrorLog("jtyedit.cpp", line 130, "We should only be dealing with columns now") */
    return;
  }
  uStack_24 = (&DAT_0019e97b)[iVar3 * -6];
  uStack_20 = (&DAT_0019e97f)[iVar3 * -6];
  uStack_1c = (&DAT_0019e983)[iVar3 * -6];
  uStack_18 = (&DAT_0019e987)[iVar3 * -6];
  iVar3 = 0;
  do {
    if (*(short *)((int)&uStack_24 + iVar3) != 0) {
      if ((&DAT_00190103)[*(short *)((int)&uStack_24 + iVar3)] != 0) {
        local_14 = (&DAT_0019033b)[unaff_BL] * 0x55;
        uVar4 = CONCAT11((&DAT_002d33ca)[((&DAT_0019033b)[in_DL] + local_14) * 6],in_DL) & 0x7ff;
        in_DL = (byte)uVar4;
        bVar2 = true;
        *(undefined2 *)((int)&uStack_24 + iVar3) =
             *(undefined2 *)
              (&DAT_001900a3 +
              (uint)(uVar4 >> 8) * 2 +
              (uint)(byte)(&DAT_00190103)[*(short *)((int)&uStack_24 + iVar3)] * 0xc);
      }
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 != 0x10);
  if (!bVar2) {
    iVar3 = ((uint)unaff_BL * 0x100 + (uint)in_DL) * 5;
    *(undefined1 *)((int)&DAT_00279203 + iVar3 + 1) = 0;
    *(byte *)((int)&DAT_00279205 + iVar3) = *(byte *)((int)&DAT_00279205 + iVar3) & 0xf8;
    puVar1 = (uint *)((int)&DAT_00279203 + iVar3 + 1);
    *puVar1 = *puVar1 | -(int)in_AX & 0x7ffU;
    return;
  }
  FUN_00015479();
  return;
}

/******************************************************************************
 * Function : sub_04c2dc (Ghidra: FUN_0004c2dc)
 * Prototype: void sub_04c2dc(void);
 * Address  : 0x4c2dc (Size: 15 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4c3a2, 0x4c4f2, 0x4c6ec
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0004c2dc(void)

{
  int in_EAX;
  
  if (DAT_003d9578 == 0) {
    DAT_003d9578 = in_EAX;
  }
  return;
}

/******************************************************************************
 * Function : sub_04c2eb (Ghidra: FUN_0004c2eb)
 * Prototype: undefined8 sub_04c2eb(void);
 * Address  : 0x4c2eb (Size: 27 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x44f33, 0x7231c, 0x8ae00, 0x8aee4, 0x8ccec, 0xdb5c4, 0xdbb84, 0xddad0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0004c2eb(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = (uint)*(ushort *)((int)&PTR_DAT_00179450 + (in_EAX & 0xffff) * 2) * 0x10;
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(DAT_002f10da + 9 + iVar1)
                                 ));
}

/******************************************************************************
 * Function : sub_04c353 (Ghidra: FUN_0004c353)
 * Prototype: void sub_04c353(int param_1);
 * Address  : 0x4c353 (Size: 79 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4c4f2
 * Callees  : 2 -> 0x128b60, 0x1384c0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c353(int param_1)

{
  int in_ECX;
  
  if (0 < in_ECX - _DAT_00348eec) {
    if (DAT_003d9581 != '\0') {
      FUN_00128b60();
      return;
    }
    FUN_001384c0(**(undefined4 **)(&DAT_003363a8 + param_1 * 4));
  }
  return;
}

/******************************************************************************
 * Function : sub_04c3a2 (Ghidra: FUN_0004c3a2)
 * Prototype: void sub_04c3a2(int param_1);
 * Address  : 0x4c3a2 (Size: 336 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4c7eb
 * Callees  : 3 -> 0x4c2dc, 0x1292c8, 0x13a3f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c3a2(int param_1)

{
  int in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  int unaff_EBX;
  ushort uVar1;
  undefined2 local_10;
  
  uVar1 = (ushort)*(byte *)(unaff_EBX + 4);
  local_10 = ((ushort)*(byte *)(unaff_EBX + 6) - (ushort)*(byte *)(unaff_EBX + 10)) - uVar1;
  if (DAT_003d9581 == '\0') {
    _DAT_00348f00 = (int)((uint)(ushort)*(byte *)(unaff_EBX + 5) * param_1) >> 5;
    _DAT_00348efc = (int)((uint)uVar1 * param_1) >> 5;
    DAT_00348ef8 = ((short)(ushort)*(byte *)(unaff_EBX + 0xb) * param_1 >> 5) + in_EDX;
    DAT_00348ef4 = (param_1 * local_10 >> 5) + in_EAX;
    FUN_0013a3f8(_DAT_00348efc,_DAT_00348f00,DAT_00348ef8);
  }
  else {
    _DAT_00348f00 = (int)((uint)(ushort)*(byte *)(unaff_EBX + 5) * param_1) >> 5;
    _DAT_00348efc = (int)((uint)uVar1 * param_1) >> 5;
    DAT_00348ef8 = ((short)(ushort)*(byte *)(unaff_EBX + 0xb) * param_1 >> 5) + in_EDX;
    DAT_00348ef4 = (param_1 * local_10 >> 5) + in_EAX;
    FUN_001292c8(_DAT_00348efc,_DAT_00348f00,DAT_00348ef8);
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
 * Function : sub_04c4f2 (Ghidra: FUN_0004c4f2)
 * Prototype: void sub_04c4f2(int param_1);
 * Address  : 0x4c4f2 (Size: 294 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4c7eb
 * Callees  : 4 -> 0x4c2dc, 0x4c353, 0x1292c8, 0x13a3f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c4f2(int param_1)

{
  int in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  DAT_00348ef4 = in_EAX;
  DAT_00348ef8 = in_EDX;
  if (DAT_003d9581 == '\0') {
    _DAT_00348f00 = (int)(param_1 * (uint)*(byte *)(unaff_EBX + 7)) >> 5;
    _DAT_00348efc = (int)(param_1 * (uint)(ushort)*(byte *)(unaff_EBX + 6)) >> 5;
    FUN_0013a3f8(_DAT_00348efc,_DAT_00348f00);
  }
  else {
    _DAT_00348f00 = (int)(param_1 * (uint)*(byte *)(unaff_EBX + 7)) >> 5;
    _DAT_00348efc = (int)(param_1 * (uint)(ushort)*(byte *)(unaff_EBX + 6)) >> 5;
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
 * Function : sub_04c618 (Ghidra: FUN_0004c618)
 * Prototype: void sub_04c618(int param_1);
 * Address  : 0x4c618 (Size: 212 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4c7eb
 * Callees  : 1 -> 0x1292c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c618(int param_1)

{
  int in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  if (DAT_003d9581 == '\0') {
    _DAT_00348f00 = (int)((uint)(ushort)*(byte *)(unaff_EBX + 5) * param_1) >> 5;
    _DAT_00348efc = (int)((uint)*(byte *)(unaff_EBX + 4) * param_1) >> 5;
    DAT_00348ef8 = ((short)(ushort)*(byte *)(unaff_EBX + 0xb) * param_1 >> 5) + in_EDX;
    DAT_00348ef4 = (param_1 * (short)(ushort)*(byte *)(unaff_EBX + 10) >> 5) + in_EAX;
    FUN_0013a3f8(_DAT_00348efc,_DAT_00348f00,DAT_00348ef8);
  }
  else {
    _DAT_00348f00 = (int)((uint)(ushort)*(byte *)(unaff_EBX + 5) * param_1) >> 5;
    _DAT_00348efc = (int)((uint)*(byte *)(unaff_EBX + 4) * param_1) >> 5;
    DAT_00348ef8 = ((short)(ushort)*(byte *)(unaff_EBX + 0xb) * param_1 >> 5) + in_EDX;
    DAT_00348ef4 = (param_1 * (short)(ushort)*(byte *)(unaff_EBX + 10) >> 5) + in_EAX;
    FUN_001292c8(_DAT_00348efc,_DAT_00348f00,DAT_00348ef8);
  }
  if ((((DAT_003d9580 != '\0') && (DAT_00348ef4 <= DAT_00387db0)) &&
      (DAT_00387db0 <= DAT_00348ef4 + _DAT_00348efc)) &&
     ((DAT_00348ef8 <= DAT_00387db4 && (DAT_00387db4 <= DAT_00348ef8 + _DAT_00348f00)))) {
    FUN_0004c2dc();
  }
  FUN_0004c353(in_ECX);
  return;
}

