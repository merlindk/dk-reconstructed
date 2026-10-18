/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: inits.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 62
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0401ec (Ghidra: FUN_000401ec)
 * Prototype: void sub_0401ec(void);
 * Address  : 0x401ec (Size: 249 bytes)
 * Module   : inits.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 12 -> 0x29800, 0x29d32, 0x2b36c, 0x41043, 0x430ba, 0x4338b, 0x450a0, 0x45198, 0x45524, 0x4578b ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000401ec(void)

{
  FUN_000929c0();
  FUN_00041043();
  FUN_0004338b();
  FUN_000430ba();
  FUN_000450a0();
  FUN_0004578b();
  FUN_0002b36c();
  FUN_00045524();
  FUN_00045198();
  FUN_00029800();
  FUN_000b2280();
  FUN_00029d32();
  DAT_002eb543 = 5;
  _DAT_002ebad4 = 0x100;
  _DAT_002ebad6 = 0x100;
  _DAT_002ebad8 = 0x100;
  _DAT_002ebada = 0x100;
  _DAT_002ebae0 = 4;
  _DAT_002ebae4 = 200;
  if (DAT_002eb9d8 == 0) {
    DAT_002eb9d8 = DAT_002eb9d6;
  }
  DAT_0033317f = &DAT_003330ff;
  DAT_003d981c = &DAT_00365c10;
  DAT_002ee8a3 = 0;
  DAT_002ee8a4 = 1;
  DAT_002ee8a5 = 0;
  DAT_002ee8a6 = 0;
  DAT_002ee8a7 = 0;
  DAT_002ee8a8 = 0;
  DAT_0019d0b8 = DAT_0019d0b8 | 0x40;
  DAT_0019d0b9 = DAT_0019d0b9 | 0x60;
  DAT_003d9885 = DAT_0019a29f;
  if (DAT_002ee9b9 == 3) {
    _DAT_00187f00 = 0x30;
  }
  return;
}

/******************************************************************************
 * Function : dk_non_keeper_keeper_game_0402e5 (Ghidra: FUN_000402e5)
 * Prototype: void dk_non_keeper_keeper_game_0402e5(void);
 * Address  : 0x402e5 (Size: 530 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:290 ("Non Keeper in Keeper game")
 * Naming   : String 'Non Keeper in Keeper game'
 * Callers  : 2 -> 0x5d35c, 0x5da11
 * Callees  : 14 -> 0x40a20, 0x40e94, 0x40ee4, 0x42fc8, 0x4839c, 0x543dd, 0x5b9c0, 0x5cf2d, 0x63122, 0x780df ...
 * Strings  :
 *   - 0x164e16: "inits.cpp"
 *   - 0x164e3d: "inits.cpp"
 *   - 0x164dfc: "Non Keeper in Keeper game"
 *   - 0x164e20: "How do I set up this player?"
 *   - 0x164e47: "bullfrog"
 *   - 0x164e50: "atmos1"
 *   - 0x164e57: "atmos2"
 ******************************************************************************/
void FUN_000402e5(void)

{
  undefined1 *in_EAX;
  int iVar1;
  int in_EDX;
  uint extraout_EDX;
  
  *(undefined2 *)(in_EAX + 0x44c) = 10;
  *(undefined2 *)(in_EAX + 0x44e) = 0xc;
  *(undefined2 *)(in_EAX + 0x450) = 0x100;
  in_EAX[0x4d1] = in_EAX[0x2b];
  FUN_000780df();
  *(undefined4 *)(in_EAX + 0x4c9) = DAT_00199210;
  iVar1 = (int)DAT_002f10ce._3_1_;
  in_EAX[0x456] = 1;
  in_EAX[0x453] = 1;
  in_EAX[0x14] = 2;
  if (in_EAX == &DAT_0019d0c8 + iVar1 * 0x4ef) {
    DAT_0019d0b8 = DAT_0019d0b8 | 0x40;
    FUN_0005b9c0();
    FUN_000543dd();
    FUN_0005cf2d();
    FUN_0005cf2d();
  }
  if (DAT_002ebaf6 < 2) {
LAB_000403f9:
    FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 290, "Non Keeper in Keeper game") */
  }
  else {
    if (DAT_002ebaf6 < 3) {
      FUN_00040e94();
      FUN_00040ee4();
      FUN_0004839c();
      if (in_EDX != 0) goto LAB_00040411;
    }
    else {
      if ((DAT_002ebaf6 != 5) || (in_EAX[0x2c] != '\x01')) goto LAB_000403f9;
      FUN_00040e94();
      FUN_00040ee4();
      FUN_0004839c();
    }
    FUN_00040a20();
  }
LAB_00040411:
  FUN_00042fc8();
  FUN_00063122();
  iVar1 = (int)DAT_002f10ce._3_1_;
  in_EAX[0x463] = 0;
  if (in_EAX == &DAT_0019d0c8 + iVar1 * 0x4ef) {
    DAT_0019d0bf = (char)((int)(DAT_002e78e9 - 1) % 4) + '\x03';
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    FUN_000f0ab8();
    if ((((extraout_EDX == 0) || (extraout_EDX < 2)) || (extraout_EDX == 2)) &&
       (iVar1 = FUN_000f143c(), iVar1 != 0)) {
      FUN_000f1874();
    }
  }
  *(undefined4 *)(in_EAX + 0x10) = 0;
  in_EAX[0x2a] = '\x01' << (in_EAX[0x2b] & 0x1f);
  return;
}

/******************************************************************************
 * Function : dk_could_create_ambient_sound_0404f7 (Ghidra: FUN_000404f7)
 * Prototype: void dk_could_create_ambient_sound_0404f7(void);
 * Address  : 0x404f7 (Size: 746 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:481 ("Could not create ambient sound object")
 * Naming   : String 'Could not create ambient sound object'
 * Callers  : 2 -> 0x5d35c, 0x5da11
 * Callees  : 17 -> 0x13b98, 0x27348, 0x2a25c, 0x3a4e3, 0x3a57e, 0x40ce0, 0x40d25, 0x40f49, 0x44d42, 0x4c14e ...
 * Strings  :
 *   - 0x164e84: "inits.cpp"
 *   - 0x164e5e: "Could not create ambient sound object"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000404f7(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int local_28;
  uint local_24;
  
  uVar3 = DAT_002ee893;
  uVar2 = DAT_002ee892;
  DAT_002e8bf6 = 1;
  local_28 = 0;
  FUN_0004c14e(0,0);
  DAT_002ee7ab = 0xff;
  DAT_002e8bee = 0;
  FUN_00040d25();
  FUN_0003a57e();
  FUN_0003a4e3();
  iVar7 = 0;
  FUN_00040ce0();
  FUN_000aca0c();
  DAT_002f10d2 = &DAT_002ddd60;
  DAT_002f10d6 = &DAT_002e0589;
  iVar4 = extraout_ECX;
  do {
    uVar6 = DAT_002eb9f2;
    *(undefined2 *)(iVar4 + 0xb01 + (uint)DAT_002eb542 * 2) = DAT_002eb9f2;
    *(undefined2 *)(&DAT_002e108a + (uint)DAT_002eb542 * 0x1508 + iVar7) = uVar6;
    *(undefined1 *)(iVar4 + 0x918) = 0;
    *(undefined1 *)(iVar4 + 0x919) = 0;
    *(undefined2 *)(iVar4 + 0x2d) = 0;
    *(undefined2 *)(iVar4 + 0x2f) = 0;
    *(undefined1 *)(iVar4 + 0xe9f) = (undefined1)local_28;
    uVar1 = DAT_002ebc38;
    *(undefined4 *)(iVar4 + 0x139f) = 0;
    *(undefined4 *)(iVar4 + 0x13a3) = 0;
    iVar5 = 0;
    *(undefined4 *)(iVar4 + 0x105c) = uVar1;
    do {
      uVar6 = DAT_002eb9f2;
      if (iVar5 == local_28) {
        uVar6 = DAT_002eb9f6;
      }
      *(undefined2 *)(iVar4 + 0xb01) = uVar6;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 2;
    } while (iVar5 < 5);
    local_28 = local_28 + 1;
    FUN_000e6a10();
    iVar7 = iVar7 + 2;
    iVar4 = extraout_ECX_00 + 0x1508;
  } while (local_28 < 5);
  FUN_0002a25c();
  FUN_000d17a8();
  FUN_00051452();
  FUN_000f1abb();
  DAT_002e8bfa = local_24;
  if (DAT_00334019 == 0) {
    DAT_002e8bfa = local_24 * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    DAT_002e8c00 = (char)(((ulonglong)DAT_002e8bfa % 0x43) % 3) + '\x01';
    _DAT_002e8c01 = 0;
  }
  FUN_000aca0c();
  FUN_00040f49();
  DAT_0019d0b9 = DAT_0019d0b9 | 4;
  DAT_002ee892 = uVar2;
  DAT_002ee893 = uVar3;
  FUN_00027348();
  FUN_00013b98();
  iVar4 = FUN_00044d42();
  if (iVar4 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 481, "Could not create ambient sound object") */
  }
  else {
    DAT_002eb9b2 = *(undefined2 *)(iVar4 + 0x1b);
  }
  DAT_002ee887 = 0;
  FUN_000e6a10();
  DAT_002ed402 = 0;
  DAT_002ed406 = 0;
  FUN_00051468();
  DAT_002ee8a7 = 0;
  DAT_002ee8a8 = 0;
  DAT_002ed3e6 = 0;
  DAT_002ee8ad = 0;
  DAT_002ee8b1 = 0;
  DAT_002ee8b5 = 0;
  DAT_002ee8b9 = 0;
  DAT_002ee8bd = 0;
  DAT_002ee8c1 = 0;
  DAT_002ee8c5 = 0;
  DAT_002ee8c9 = 0;
  DAT_002ee8cd = 0;
  return;
}

/******************************************************************************
 * Function : sub_0407e1 (Ghidra: FUN_000407e1)
 * Prototype: void sub_0407e1(void);
 * Address  : 0x407e1 (Size: 81 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x40832
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000407e1(void)

{
  byte bVar1;
  uint uVar2;
  
  for (uVar2 = DAT_002e6eee; uVar2 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < uVar2;
      uVar2 = (uint)*(ushort *)(uVar2 + 0x67)) {
    if (*(char *)(uVar2 + 0x13) == '\0') {
      *(undefined *)(uVar2 + 0x13) = (&DAT_001ae89c)[(uint)*(byte *)(uVar2 + 0x1a) * 0x14];
      bVar1 = (&DAT_0018fd1b)[(uint)*(byte *)(uVar2 + 0x1a) * 0x36];
      *(byte *)(uVar2 + 0x4f) = *(byte *)(uVar2 + 0x4f) & 0xcf;
      *(byte *)(uVar2 + 0x4f) = *(byte *)(uVar2 + 0x4f) | (bVar1 & 3) << 4;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_040832 (Ghidra: FUN_00040832)
 * Prototype: void sub_040832(void);
 * Address  : 0x40832 (Size: 352 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5d35c, 0x5da11
 * Callees  : 16 -> 0x21008, 0x237c6, 0x2b36c, 0x2c502, 0x379fe, 0x37d01, 0x407e1, 0x40a20, 0x41019, 0x43bb3 ...
 ******************************************************************************/
void FUN_00040832(void)

{
  undefined2 *puVar1;
  int extraout_ECX;
  int iVar3;
  int extraout_EDX;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar2;
  
  if (DAT_002e6f2c != '\0') {
    FUN_000617c9();
  }
  FUN_000237c6();
  FUN_00041019();
  iVar3 = 0;
  puVar4 = (undefined2 *)0x2e0609;
  do {
    puVar1 = &DAT_002e0589 + iVar3 * 0xa84;
    do {
      puVar2 = puVar1 + 2;
      *(undefined4 *)((int)puVar1 + 0xa4f) = 10;
      puVar1 = puVar2;
    } while (puVar2 != puVar4);
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0xa84;
  } while (iVar3 < 5);
  FUN_000e6a10();
  FUN_00021008();
  FUN_0002b36c();
  FUN_00045524();
  FUN_0002c502();
  do {
    uVar5 = FUN_00066a1a();
    iVar3 = (int)((ulonglong)uVar5 >> 0x20);
    *(int *)(iVar3 + -0x590) = (int)uVar5;
  } while (iVar3 != extraout_ECX);
  if (DAT_002ee892 != '\0') {
    iVar3 = FUN_00043bb3();
    if (iVar3 != 0) {
      FUN_0008240c();
    }
    DAT_002ee892 = '\0';
    DAT_002ee893 = 0;
  }
  FUN_000379fe();
  FUN_00037d01();
  FUN_000407e1();
  FUN_000453dd();
  iVar3 = 0;
  do {
    if (((((&DAT_0019d0c8)[iVar3] & 1) != 0) && ((&DAT_0019d0f4)[iVar3] == '\x01')) &&
       (((&DAT_0019d0c8)[iVar3] & 0x40) != 0)) {
      FUN_00040a20();
      iVar3 = extraout_EDX;
    }
    iVar3 = iVar3 + 0x4ef;
  } while (iVar3 != 0x18ab);
  return;
}

/******************************************************************************
 * Function : sub_040992 (Ghidra: FUN_00040992)
 * Prototype: void sub_040992(void);
 * Address  : 0x40992 (Size: 40 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5d35c, 0x5da11
 * Callees  : 1 -> 0x409ba
 ******************************************************************************/
void FUN_00040992(void)

{
  byte *pbVar1;
  byte *extraout_EDX;
  int iVar2;
  
  pbVar1 = &DAT_0019d0c8;
  iVar2 = 0;
  do {
    if ((*pbVar1 & 1) != 0) {
      FUN_000409ba();
      pbVar1 = extraout_EDX;
    }
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x4ef;
  } while (iVar2 < 5);
  return;
}

/******************************************************************************
 * Function : sub_0409ba (Ghidra: FUN_000409ba)
 * Prototype: void sub_0409ba(void);
 * Address  : 0x409ba (Size: 102 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:665 ("Invalid GameMode")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x40992
 * Callees  : 2 -> 0xddaf0, 0xe5f70
 * Strings  :
 *   - 0x164e9f: "inits.cpp"
 *   - 0x164e8e: "Invalid GameMode"
 ******************************************************************************/
void FUN_000409ba(void)

{
  byte *in_EAX;
  bool bVar1;
  
  if (DAT_002ebaf6 < 3) {
    bVar1 = DAT_002ebaf6 == 2;
  }
  else {
    if (DAT_002ebaf6 < 4) {
      return;
    }
    bVar1 = DAT_002ebaf6 == 5;
  }
  if (!bVar1) {
    if ((*in_EAX & 0x40) != 0) {
      return;
    }
    FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 665, "Invalid GameMode") */
    return;
  }
  FUN_000e5f70();
  FUN_000e5f70();
  return;
}

/******************************************************************************
 * Function : sub_040a20 (Ghidra: FUN_00040a20)
 * Prototype: void sub_040a20(void);
 * Address  : 0x40a20 (Size: 306 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x402e5, 0x40832
 * Callees  : 3 -> 0x23ad0, 0x40b52, 0x82828
 ******************************************************************************/
void FUN_00040a20(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar3;
  int iVar4;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84] != 0) {
    FUN_00023ad0();
    in_EAX = extraout_ECX;
  }
  iVar3 = 0;
  local_24 = 1;
  local_34 = 0;
  do {
    local_2c = local_24 + 0x100;
    iVar4 = 0;
    local_28 = local_34;
    do {
      iVar2 = ((&DAT_0019033b)[local_2c % 0x100] +
              (&DAT_0019033b)
              [(int)((local_2c + (local_2c >> 0x1f) * -0x100) - (uint)((local_2c >> 0x1f) << 7 < 0))
               >> 8] * 0x55) * 6;
      if ((((((&DAT_002d33ca)[iVar2] & 7) == *(byte *)(in_EAX + 0x2b)) ||
           ((&DAT_002d33c5)[local_28] == '\0')) ||
          (((*(byte *)((int)&DAT_00279203 + local_2c * 5) & 2) != 0 &&
           ((*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar2] * 0x45) == 1 &&
            (((&DAT_002d33ca)[iVar2] & 7) == DAT_002eb543)))))) ||
         (((*(byte *)((int)&DAT_00279203 + local_2c * 5) & 1) != 0 ||
          (cVar1 = FUN_00040b52(), in_EAX = extraout_ECX_01, cVar1 != '\0')))) {
        FUN_00082828();
        in_EAX = extraout_ECX_00;
      }
      local_2c = local_2c + 0x300;
      iVar4 = iVar4 + 1;
      local_28 = local_28 + 0x1fe;
    } while (iVar4 < 0x55);
    local_34 = local_34 + 6;
    iVar3 = iVar3 + 1;
    local_24 = local_24 + 3;
  } while (iVar3 < 0x55);
  return;
}

/******************************************************************************
 * Function : sub_040b52 (Ghidra: FUN_00040b52)
 * Prototype: int sub_040b52(void);
 * Address  : 0x40b52 (Size: 85 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x40a20
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00040b52(void)

{
  int in_EAX;
  int iVar1;
  uint3 uVar2;
  int in_EDX;
  int iVar3;
  
  iVar1 = 0;
  while( true ) {
    uVar2 = (uint3)((uint)iVar1 >> 8);
    if (7 < iVar1) {
      return (uint)uVar2 << 8;
    }
    iVar3 = (*(char *)((int)&DAT_0018b67b + iVar1 + 3) + in_EAX +
            ((char)(&DAT_0018b67f)[iVar1] + in_EDX) * 0x55) * 6;
    if (((&DAT_002d33c5)[iVar3] == '\x0e') && (((&DAT_002d33ca)[iVar3] & 7) == DAT_002eb543)) break;
    iVar1 = iVar1 + 2;
  }
  return CONCAT31(uVar2,1);
}

/******************************************************************************
 * Function : sub_040ba7 (Ghidra: FUN_00040ba7)
 * Prototype: void sub_040ba7(void);
 * Address  : 0x40ba7 (Size: 313 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x23ad0
 ******************************************************************************/
void FUN_00040ba7(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  
  local_18 = 3;
  local_1c = 0xc;
  FUN_00023ad0();
  do {
    iVar6 = 0xc;
    iVar5 = local_18 + 0x300;
    do {
      iVar4 = ((&DAT_0019033b)[iVar5 % 0x100] +
              (&DAT_0019033b)
              [(int)((iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8] *
              0x55) * 6;
      if ((((((&DAT_002d33ca)[iVar4] & 7) == *(byte *)(in_EAX + 0x2b)) ||
           ((&DAT_002d33c5)
            [(*(int *)((int)&DAT_0019033b + iVar6) * 0x55 + *(int *)((int)&DAT_0019033b + local_1c))
             * 6] == '\0')) ||
          (((*(byte *)((int)&DAT_00279203 + iVar5 * 5) & 2) != 0 &&
           (*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar4] * 0x45) == 1)))) ||
         ((*(byte *)((int)&DAT_00279203 + iVar5 * 5) & 1) != 0)) {
        iVar4 = iVar5 * 5;
        uVar3 = *(uint *)((int)&DAT_00279203 + iVar4 + 1);
        bVar2 = *(byte *)(in_EAX + 0x2b);
        *(uint *)((int)&DAT_00279203 + iVar4 + 1) = uVar3 & 0xfffffff;
        puVar1 = (uint *)((int)&DAT_00279203 + iVar4 + 1);
        *puVar1 = *puVar1 | (uVar3 >> 0x1c | 1 << (bVar2 & 0x1f)) << 0x1c;
      }
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x100;
    } while (iVar6 != 0x3f0);
    local_18 = local_18 + 1;
    local_1c = local_1c + 4;
  } while (local_18 < 0xfc);
  return;
}

/******************************************************************************
 * Function : sub_040ce0 (Ghidra: FUN_00040ce0)
 * Prototype: void sub_040ce0(void);
 * Address  : 0x40ce0 (Size: 69 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00040ce0(void)

{
  byte in_AL;
  
  DAT_002eb542 = in_AL;
  (&DAT_0019d0c8)[(uint)in_AL * 0x4ef] = (&DAT_0019d0c8)[(uint)in_AL * 0x4ef] | 1;
  (&DAT_0019d0c8)[(uint)DAT_002eb542 * 0x4ef] = (&DAT_0019d0c8)[(uint)DAT_002eb542 * 0x4ef] | 0x40;
  (&DAT_0019d0f3)[(uint)DAT_002eb542 * 0x4ef] = DAT_002eb542;
  return;
}

/******************************************************************************
 * Function : sub_040d25 (Ghidra: FUN_00040d25)
 * Prototype: void sub_040d25(void);
 * Address  : 0x40d25 (Size: 148 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 4 -> 0x50d25, 0x72810, 0xac630, 0xe6a10
 ******************************************************************************/
void FUN_00040d25(void)

{
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  
  FUN_00072810();
  FUN_000ac630();
  FUN_00050d25();
  DAT_002e8bf6 = 0;
  DAT_002eb9e4 = 0;
  DAT_0019d0b8 = DAT_0019d0b8 & 0xfb;
  puVar1 = &DAT_0019e973;
  while (puVar1 < &DAT_001aa973) {
    FUN_000e6a10();
    puVar1 = (undefined4 *)(extraout_ECX + 0x18);
  }
  iVar2 = 0;
  do {
    FUN_000e6a10();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar2 = 0;
  do {
    FUN_000e6a10();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}

/******************************************************************************
 * Function : sub_040db9 (Ghidra: FUN_00040db9)
 * Prototype: void sub_040db9(void);
 * Address  : 0x40db9 (Size: 219 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x50d25, 0x72810, 0xac630, 0xe6a10
 ******************************************************************************/
void FUN_00040db9(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  byte *pbVar6;
  byte *extraout_ECX_00;
  int iVar7;
  
  FUN_00072810();
  FUN_000ac630();
  FUN_00050d25();
  DAT_002e8bf6 = 0;
  DAT_002eb9e4 = 0;
  DAT_0019d0b8 = DAT_0019d0b8 & 0xfb;
  puVar5 = &DAT_0019e973;
  while (puVar5 < &DAT_001aa973) {
    FUN_000e6a10();
    puVar5 = (undefined4 *)(extraout_ECX + 0x18);
  }
  pbVar6 = &DAT_0019d0c8;
  iVar7 = 0;
  do {
    bVar1 = pbVar6[0x2b];
    bVar2 = pbVar6[0x2c];
    bVar3 = *pbVar6;
    bVar4 = *pbVar6;
    FUN_000e6a10();
    extraout_ECX_00[0x2b] = bVar1;
    extraout_ECX_00[0x2c] = bVar2;
    *extraout_ECX_00 = *extraout_ECX_00 & 0xfe;
    *extraout_ECX_00 = *extraout_ECX_00 | bVar3 & 1;
    *extraout_ECX_00 = *extraout_ECX_00 & 0xbf;
    iVar7 = iVar7 + 1;
    *extraout_ECX_00 = *extraout_ECX_00 | bVar4 & 0x40;
    pbVar6 = extraout_ECX_00 + 0x4ef;
  } while (iVar7 < 5);
  iVar7 = 0;
  do {
    FUN_000e6a10();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  return;
}

/******************************************************************************
 * Function : sub_040e94 (Ghidra: FUN_00040e94)
 * Prototype: void sub_040e94(void);
 * Address  : 0x40e94 (Size: 80 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x402e5
 * Callees  : 3 -> 0xacaf8, 0xad834, 0xe6a10
 ******************************************************************************/
void FUN_00040e94(void)

{
  undefined2 uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  
  FUN_000e6a10();
  *(undefined4 *)(extraout_ECX + 0x4cd) = 0;
  uVar1 = FUN_000acaf8(0xa00);
  *(undefined2 *)(extraout_ECX_00 + 0x460) = uVar1;
  FUN_000ad834();
  return;
}

/******************************************************************************
 * Function : sub_040ee4 (Ghidra: FUN_00040ee4)
 * Prototype: void sub_040ee4(void);
 * Address  : 0x40ee4 (Size: 101 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x402e5, 0x69a12
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00040ee4(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_002e6ec6;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return;
    }
    if (((&DAT_001acd79)[(uint)*(byte *)(uVar1 + 0x1a) * 0x1d] != '\0') &&
       ((int)*(char *)(uVar1 + 6) == (uint)*(byte *)(in_EAX + 0x2b))) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 0x67);
  }
  (&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84] = *(undefined2 *)(uVar1 + 0x1b);
  iVar2 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  *(undefined4 *)(&DAT_002e058b + iVar2) = *(undefined4 *)(uVar1 + 0xd);
  *(undefined2 *)(&DAT_002e058f + iVar2) = *(undefined2 *)(uVar1 + 0x11);
  return;
}

/******************************************************************************
 * Function : sub_040f49 (Ghidra: FUN_00040f49)
 * Prototype: void sub_040f49(void);
 * Address  : 0x40f49 (Size: 79 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00040f49(void)

{
  uint uVar1;
  
  uVar1 = DAT_002e6ec6;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return;
    }
    if (((&DAT_001acd79)[(uint)*(byte *)(uVar1 + 0x1a) * 0x1d] != '\0') &&
       ((int)*(char *)(uVar1 + 6) == (uint)DAT_002eb542)) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 0x67);
  }
  (&DAT_002e0589)[(uint)DAT_002eb542 * 0xa84] = *(undefined2 *)(uVar1 + 0x1b);
  return;
}

/******************************************************************************
 * Function : sub_040f98 (Ghidra: FUN_00040f98)
 * Prototype: void sub_040f98(void);
 * Address  : 0x40f98 (Size: 129 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 4 -> 0x15318, 0x1534a, 0x15386, 0xe6a10
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00040f98(void)

{
  byte *pbVar1;
  int iVar2;
  
  _DAT_002e6f1a = 0xffffffff;
  FUN_000e6a10();
  FUN_00015318();
  iVar2 = FUN_0001534a();
  if (iVar2 == 0) {
    iVar2 = FUN_00015386();
  }
  pbVar1 = (byte *)((int)&DAT_0019e973 + iVar2 * 0x18 + 2);
  *pbVar1 = *pbVar1 | 1;
  _DAT_002e6f28 = 0x18;
  DAT_002e6f23 = iVar2;
  return;
}

/******************************************************************************
 * Function : sub_041019 (Ghidra: FUN_00041019)
 * Prototype: void sub_041019(void);
 * Address  : 0x41019 (Size: 42 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2ca74, 0x40832
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00041019(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  do {
    psVar1 = (short *)((int)&DAT_002e78eb + iVar4);
    iVar3 = iVar2 + 4;
    iVar4 = iVar4 + 0x10;
    *(undefined4 *)((int)&DAT_002f2163 + iVar2) = (&DAT_002f18e3)[*psVar1];
    iVar2 = iVar3;
  } while (iVar3 != 0xc0);
  return;
}

/******************************************************************************
 * Function : sub_041043 (Ghidra: FUN_00041043)
 * Prototype: void sub_041043(void);
 * Address  : 0x41043 (Size: 8069 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00041043(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 2;
    *(undefined2 *)((int)&DAT_002f2227 + iVar2) = 0xffff;
    iVar2 = iVar1;
  } while (iVar1 != 0x7ac);
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 2;
    *(undefined2 *)((int)&DAT_002f29d3 + iVar2) = 0xffff;
    iVar2 = iVar1;
  } while (iVar1 != 0x7ac);
  _DAT_002f2287 = 0x31;
  _DAT_002f2a35 = 0x30;
  _DAT_002f254f = 0x195;
  _DAT_002f2553 = 0x197;
  _DAT_002f254b = 0x193;
  _DAT_002f2557 = 0x199;
  _DAT_002f255f = 0x19d;
  _DAT_002f255b = 0x19b;
  _DAT_002f256f = 0x1a5;
  _DAT_002f256b = 0x1a3;
  _DAT_002f2567 = 0x1a1;
  _DAT_002f2563 = 0x19f;
  _DAT_002f2573 = 0x1a7;
  _DAT_002f22a3 = 0x3f;
  _DAT_002f2cfd = 0x194;
  _DAT_002f2d01 = 0x196;
  _DAT_002f2cf9 = 0x192;
  _DAT_002f2d05 = 0x198;
  _DAT_002f2d0d = 0x19c;
  _DAT_002f2d09 = 0x19a;
  _DAT_002f2d1d = 0x1a4;
  _DAT_002f2d19 = 0x1a2;
  _DAT_002f2d15 = 0x1a0;
  _DAT_002f2d11 = 0x19e;
  _DAT_002f2d21 = 0x1a6;
  _DAT_002f2a51 = 0x3e;
  _DAT_002f241b = 0xfb;
  _DAT_002f2417 = 0xf9;
  _DAT_002f241f = 0xfd;
  _DAT_002f2423 = 0xff;
  _DAT_002f242b = 0x103;
  _DAT_002f2427 = 0x101;
  _DAT_002f243b = 0x10b;
  _DAT_002f2437 = 0x109;
  _DAT_002f2433 = 0x107;
  _DAT_002f242f = 0x105;
  _DAT_002f243f = 0x10d;
  _DAT_002f22a7 = 0x41;
  _DAT_002f2bc9 = 0xfa;
  _DAT_002f2bc5 = 0xf8;
  _DAT_002f2bcd = 0xfc;
  _DAT_002f2bd1 = 0xfe;
  _DAT_002f2bd9 = 0x102;
  _DAT_002f2bd5 = 0x100;
  _DAT_002f2be9 = 0x10a;
  _DAT_002f2be5 = 0x108;
  _DAT_002f2be1 = 0x106;
  _DAT_002f2bdd = 0x104;
  _DAT_002f2bed = 0x10c;
  _DAT_002f2a55 = 0x40;
  _DAT_002f225b = 0x1b;
  _DAT_002f2257 = 0x19;
  _DAT_002f225f = 0x1d;
  _DAT_002f2263 = 0x1f;
  _DAT_002f226b = 0x23;
  _DAT_002f2267 = 0x21;
  _DAT_002f227b = 0x2b;
  _DAT_002f2277 = 0x29;
  _DAT_002f2273 = 0x27;
  _DAT_002f226f = 0x25;
  _DAT_002f227f = 0x2d;
  _DAT_002f2a09 = 0x1a;
  _DAT_002f2a05 = 0x18;
  _DAT_002f2a0d = 0x1c;
  _DAT_002f2a11 = 0x1e;
  _DAT_002f2a19 = 0x22;
  _DAT_002f2a15 = 0x20;
  _DAT_002f2a29 = 0x2a;
  _DAT_002f2a25 = 0x28;
  _DAT_002f2a21 = 0x26;
  _DAT_002f2a1d = 0x24;
  _DAT_002f2a2d = 0x2c;
  _DAT_002f27df = 0x2dd;
  _DAT_002f27db = 0x2db;
  _DAT_002f27e3 = 0x2df;
  _DAT_002f27e7 = 0x2e1;
  _DAT_002f27ef = 0x2e5;
  _DAT_002f27eb = 0x2e3;
  _DAT_002f27ff = 0x2ed;
  _DAT_002f27fb = 0x2eb;
  _DAT_002f27f7 = 0x2e9;
  _DAT_002f27f3 = 0x2e7;
  _DAT_002f2803 = 0x2ef;
  _DAT_002f22df = 0x5d;
  _DAT_002f2f8d = 0x2dc;
  _DAT_002f2f89 = 0x2da;
  _DAT_002f2f91 = 0x2de;
  _DAT_002f2f95 = 0x2e0;
  _DAT_002f2f9d = 0x2e4;
  _DAT_002f2f99 = 0x2e2;
  _DAT_002f2fad = 0x2ec;
  _DAT_002f2fa9 = 0x2ea;
  _DAT_002f2fa5 = 0x2e8;
  _DAT_002f2fa1 = 0x2e6;
  _DAT_002f2fb1 = 0x2ee;
  _DAT_002f2a8d = 0x5c;
  _DAT_002f27b3 = 0x2c7;
  _DAT_002f27af = 0x2c5;
  _DAT_002f27b7 = 0x2c9;
  _DAT_002f27bb = 0x2cb;
  _DAT_002f27c3 = 0x2cf;
  _DAT_002f27bf = 0x2cd;
  _DAT_002f27d3 = 0x2d7;
  _DAT_002f27cf = 0x2d5;
  _DAT_002f27cb = 0x2d3;
  _DAT_002f27c7 = 0x2d1;
  _DAT_002f27d7 = 0x2d9;
  _DAT_002f22db = 0x5b;
  _DAT_002f2f61 = 0x2c6;
  _DAT_002f2f5d = 0x2c4;
  _DAT_002f2f65 = 0x2c8;
  _DAT_002f2f69 = 0x2ca;
  _DAT_002f2f71 = 0x2ce;
  _DAT_002f2f6d = 0x2cc;
  _DAT_002f2f81 = 0x2d6;
  _DAT_002f2f7d = 0x2d4;
  _DAT_002f2f79 = 0x2d2;
  _DAT_002f2f75 = 0x2d0;
  _DAT_002f2f85 = 0x2d8;
  _DAT_002f2a89 = 0x5a;
  _DAT_002f23ff = 0xed;
  _DAT_002f23ef = 0xe5;
  _DAT_002f23f3 = 0xe7;
  _DAT_002f23f7 = 0xe9;
  _DAT_002f23fb = 0xeb;
  _DAT_002f240f = 0xf5;
  _DAT_002f240b = 0xf3;
  _DAT_002f2407 = 0xf1;
  _DAT_002f2403 = 0xef;
  _DAT_002f2413 = 0xf7;
  _DAT_002f229f = 0x3d;
  _DAT_002f2bad = 0xec;
  _DAT_002f2b9d = 0xe4;
  _DAT_002f2b99 = 0xe2;
  _DAT_002f2ba1 = 0xe6;
  _DAT_002f2ba5 = 0xe8;
  _DAT_002f2ba9 = 0xea;
  _DAT_002f2bbd = 0xf4;
  _DAT_002f2bb9 = 0xf2;
  _DAT_002f2bb5 = 0xf0;
  _DAT_002f2bb1 = 0xee;
  _DAT_002f2bc1 = 0xf6;
  _DAT_002f2a4d = 0x3c;
  _DAT_002f237b = 0xab;
  _DAT_002f236b = 0xa3;
  _DAT_002f2367 = 0xa1;
  _DAT_002f236f = 0xa5;
  _DAT_002f2373 = 0xa7;
  _DAT_002f2377 = 0xa9;
  _DAT_002f238b = 0xb3;
  _DAT_002f2387 = 0xb1;
  _DAT_002f2383 = 0xaf;
  _DAT_002f237f = 0xad;
  _DAT_002f238f = 0xb5;
  _DAT_002f2b29 = 0xaa;
  _DAT_002f2b19 = 0xa2;
  _DAT_002f2b15 = 0xa0;
  _DAT_002f2b1d = 0xa4;
  _DAT_002f2b21 = 0xa6;
  _DAT_002f2b25 = 0xa8;
  _DAT_002f2b39 = 0xb2;
  _DAT_002f2b35 = 0xb0;
  _DAT_002f2b31 = 0xae;
  _DAT_002f2b2d = 0xac;
  _DAT_002f2b3d = 0xb4;
  _DAT_002f2457 = 0x119;
  _DAT_002f2443 = 0x10f;
  _DAT_002f2447 = 0x111;
  _DAT_002f244b = 0x113;
  _DAT_002f244f = 0x115;
  _DAT_002f2467 = 0x121;
  _DAT_002f2463 = 0x11f;
  _DAT_002f245f = 0x11d;
  _DAT_002f245b = 0x11b;
  _DAT_002f2453 = 0x117;
  _DAT_002f246b = 0x123;
  _DAT_002f229b = 0x3b;
  _DAT_002f2c05 = 0x118;
  _DAT_002f2bf1 = 0x10e;
  _DAT_002f2bf5 = 0x110;
  _DAT_002f2bf9 = 0x112;
  _DAT_002f2bfd = 0x114;
  _DAT_002f2c15 = 0x120;
  _DAT_002f2c11 = 0x11e;
  _DAT_002f2c0d = 0x11c;
  _DAT_002f2c09 = 0x11a;
  _DAT_002f2c01 = 0x116;
  _DAT_002f2c19 = 0x122;
  _DAT_002f2a49 = 0x3a;
  _DAT_002f23d3 = 0xd7;
  _DAT_002f23c3 = 0xcf;
  _DAT_002f23bf = 0xcd;
  _DAT_002f23c7 = 0xd1;
  _DAT_002f23cb = 0xd3;
  _DAT_002f23cf = 0xd5;
  _DAT_002f23e3 = 0xdf;
  _DAT_002f23df = 0xdd;
  _DAT_002f23db = 0xdb;
  _DAT_002f23d7 = 0xd9;
  _DAT_002f23e7 = 0xe1;
  _DAT_002f2b81 = 0xd6;
  _DAT_002f2b71 = 0xce;
  _DAT_002f2b6d = 0xcc;
  _DAT_002f2b75 = 0xd0;
  _DAT_002f2b79 = 0xd2;
  _DAT_002f2b7d = 0xd4;
  _DAT_002f2b91 = 0xde;
  _DAT_002f2b8d = 0xdc;
  _DAT_002f2b89 = 0xda;
  _DAT_002f2b85 = 0xd8;
  _DAT_002f2b95 = 0xe0;
  _DAT_002f2507 = 0x171;
  _DAT_002f24f7 = 0x169;
  _DAT_002f24f3 = 0x167;
  _DAT_002f24fb = 0x16b;
  _DAT_002f24ff = 0x16d;
  _DAT_002f2503 = 0x16f;
  _DAT_002f2517 = 0x179;
  _DAT_002f2513 = 0x177;
  _DAT_002f250f = 0x175;
  _DAT_002f250b = 0x173;
  _DAT_002f251b = 0x17b;
  _DAT_002f2cb5 = 0x170;
  _DAT_002f2ca5 = 0x168;
  _DAT_002f2ca1 = 0x166;
  _DAT_002f2ca9 = 0x16a;
  _DAT_002f2cad = 0x16c;
  _DAT_002f2cb1 = 0x16e;
  _DAT_002f2cc5 = 0x178;
  _DAT_002f2cc1 = 0x176;
  _DAT_002f2cbd = 0x174;
  _DAT_002f2cb9 = 0x172;
  _DAT_002f2cc9 = 0x17a;
  _DAT_002f24db = 0x15b;
  _DAT_002f24cb = 0x153;
  _DAT_002f24c7 = 0x151;
  _DAT_002f24cf = 0x155;
  _DAT_002f24d3 = 0x157;
  _DAT_002f24d7 = 0x159;
  _DAT_002f24eb = 0x163;
  _DAT_002f24e7 = 0x161;
  _DAT_002f24e3 = 0x15f;
  _DAT_002f24df = 0x15d;
  _DAT_002f24ef = 0x165;
  _DAT_002f2c89 = 0x15a;
  _DAT_002f2c79 = 0x152;
  _DAT_002f2c75 = 0x150;
  _DAT_002f2c7d = 0x154;
  _DAT_002f2c81 = 0x156;
  _DAT_002f2c85 = 0x158;
  _DAT_002f2c99 = 0x162;
  _DAT_002f2c95 = 0x160;
  _DAT_002f2c91 = 0x15e;
  _DAT_002f2c8d = 0x15c;
  _DAT_002f2c9d = 0x164;
  _DAT_002f2483 = 0x12f;
  _DAT_002f2473 = 0x127;
  _DAT_002f246f = 0x125;
  _DAT_002f2477 = 0x129;
  _DAT_002f247b = 299;
  _DAT_002f247f = 0x12d;
  _DAT_002f2493 = 0x137;
  _DAT_002f248f = 0x135;
  _DAT_002f248b = 0x133;
  _DAT_002f2487 = 0x131;
  _DAT_002f2497 = 0x139;
  _DAT_002f2c31 = 0x12e;
  _DAT_002f2c21 = 0x126;
  _DAT_002f2c1d = 0x124;
  _DAT_002f2c25 = 0x128;
  _DAT_002f2c29 = 0x12a;
  _DAT_002f2c2d = 300;
  _DAT_002f2c41 = 0x136;
  _DAT_002f2c3d = 0x134;
  _DAT_002f2c39 = 0x132;
  _DAT_002f2c35 = 0x130;
  _DAT_002f2c45 = 0x138;
  _DAT_002f2533 = 0x187;
  _DAT_002f2523 = 0x17f;
  _DAT_002f251f = 0x17d;
  _DAT_002f2527 = 0x181;
  _DAT_002f252b = 0x183;
  _DAT_002f252f = 0x185;
  _DAT_002f2543 = 399;
  _DAT_002f253f = 0x18d;
  _DAT_002f253b = 0x18b;
  _DAT_002f2537 = 0x189;
  _DAT_002f2547 = 0x191;
  _DAT_002f2293 = 0x37;
  _DAT_002f2ce1 = 0x186;
  _DAT_002f2cd1 = 0x17e;
  _DAT_002f2ccd = 0x17c;
  _DAT_002f2cd5 = 0x180;
  _DAT_002f2cd9 = 0x182;
  _DAT_002f2cdd = 0x184;
  _DAT_002f2cf1 = 0x18e;
  _DAT_002f2ced = 0x18c;
  _DAT_002f2ce9 = 0x18a;
  _DAT_002f2ce5 = 0x188;
  _DAT_002f2cf5 = 400;
  _DAT_002f2a41 = 0x36;
  _DAT_002f25b7 = 0x1c9;
  _DAT_002f25a7 = 0x1c1;
  _DAT_002f25a3 = 0x1bf;
  _DAT_002f25ab = 0x1c3;
  _DAT_002f25af = 0x1c5;
  _DAT_002f25b3 = 0x1c7;
  _DAT_002f25c7 = 0x1d1;
  _DAT_002f25c3 = 0x1cf;
  _DAT_002f25bf = 0x1cd;
  _DAT_002f25bb = 0x1cb;
  _DAT_002f25cb = 0x1d3;
  _DAT_002f22af = 0x45;
  _DAT_002f2d65 = 0x1c8;
  _DAT_002f2d55 = 0x1c0;
  _DAT_002f2d51 = 0x1be;
  _DAT_002f2d59 = 0x1c2;
  _DAT_002f2d5d = 0x1c4;
  _DAT_002f2d61 = 0x1c6;
  _DAT_002f2d75 = 0x1d0;
  _DAT_002f2d71 = 0x1ce;
  _DAT_002f2d6d = 0x1cc;
  _DAT_002f2d69 = 0x1ca;
  _DAT_002f2d79 = 0x1d2;
  _DAT_002f2a5d = 0x44;
  _DAT_002f2787 = 0x2b1;
  _DAT_002f2783 = 0x2af;
  _DAT_002f278b = 0x2b3;
  _DAT_002f278f = 0x2b5;
  _DAT_002f2793 = 0x2b7;
  _DAT_002f2797 = 0x2b9;
  _DAT_002f27a7 = 0x2c1;
  _DAT_002f27a3 = 0x2bf;
  _DAT_002f279f = 0x2bd;
  _DAT_002f279b = 699;
  _DAT_002f27ab = 0x2c3;
  _DAT_002f22d7 = 0x59;
  _DAT_002f2f35 = 0x2b0;
  _DAT_002f2f31 = 0x2ae;
  _DAT_002f2f39 = 0x2b2;
  _DAT_002f2f3d = 0x2b4;
  _DAT_002f2f41 = 0x2b6;
  _DAT_002f2f45 = 0x2b8;
  _DAT_002f2f55 = 0x2c0;
  _DAT_002f2f51 = 0x2be;
  _DAT_002f2f4d = 700;
  _DAT_002f2f49 = 0x2ba;
  _DAT_002f2f59 = 0x2c2;
  _DAT_002f2a85 = 0x58;
  _DAT_002f25cf = 0x1d5;
  _DAT_002f25d3 = 0x1d7;
  _DAT_002f25d7 = 0x1d9;
  _DAT_002f25db = 0x1db;
  _DAT_002f25df = 0x1dd;
  _DAT_002f25e3 = 0x1df;
  _DAT_002f25e7 = 0x1e1;
  _DAT_002f25eb = 0x1e3;
  _DAT_002f25ef = 0x1e5;
  _DAT_002f25f3 = 0x1e7;
  _DAT_002f22b3 = 0x47;
  _DAT_002f2d7d = 0x1d4;
  _DAT_002f2d81 = 0x1d6;
  _DAT_002f2d85 = 0x1d8;
  _DAT_002f2d89 = 0x1da;
  _DAT_002f2d8d = 0x1dc;
  _DAT_002f2d91 = 0x1de;
  _DAT_002f2d95 = 0x1e0;
  _DAT_002f2d99 = 0x1e2;
  _DAT_002f2d9d = 0x1e4;
  _DAT_002f2da1 = 0x1e6;
  _DAT_002f2a61 = 0x46;
  _DAT_002f280b = 0x2f3;
  _DAT_002f2807 = 0x2f1;
  _DAT_002f280f = 0x2f5;
  _DAT_002f2813 = 0x2f7;
  _DAT_002f2817 = 0x2f9;
  _DAT_002f281b = 0x2fb;
  _DAT_002f282b = 0x303;
  _DAT_002f2827 = 0x301;
  _DAT_002f2823 = 0x2ff;
  _DAT_002f281f = 0x2fd;
  _DAT_002f282f = 0x305;
  _DAT_002f22e3 = 0x5f;
  _DAT_002f2fb9 = 0x2f2;
  _DAT_002f2fb5 = 0x2f0;
  _DAT_002f2fbd = 0x2f4;
  _DAT_002f2fc1 = 0x2f6;
  _DAT_002f2fc5 = 0x2f8;
  _DAT_002f2fc9 = 0x2fa;
  _DAT_002f2fd9 = 0x302;
  _DAT_002f2fd5 = 0x300;
  _DAT_002f2fd1 = 0x2fe;
  _DAT_002f2fcd = 0x2fc;
  _DAT_002f2fdd = 0x304;
  _DAT_002f2a91 = 0x5e;
  _DAT_002f26af = 0x245;
  _DAT_002f26ab = 0x243;
  _DAT_002f26b3 = 0x247;
  _DAT_002f26b7 = 0x249;
  _DAT_002f26bb = 0x24b;
  _DAT_002f26bf = 0x24d;
  _DAT_002f26cf = 0x255;
  _DAT_002f26cb = 0x253;
  _DAT_002f26c7 = 0x251;
  _DAT_002f26c3 = 0x24f;
  _DAT_002f26d3 = 599;
  _DAT_002f22c3 = 0x4f;
  _DAT_002f2e5d = 0x244;
  _DAT_002f2e59 = 0x242;
  _DAT_002f2e61 = 0x246;
  _DAT_002f2e65 = 0x248;
  _DAT_002f2e69 = 0x24a;
  _DAT_002f2e6d = 0x24c;
  _DAT_002f2e7d = 0x254;
  _DAT_002f2e79 = 0x252;
  _DAT_002f2e75 = 0x250;
  _DAT_002f2e71 = 0x24e;
  _DAT_002f2e81 = 0x256;
  _DAT_002f2a71 = 0x4e;
  _DAT_002f272f = 0x285;
  _DAT_002f2733 = 0x287;
  _DAT_002f2737 = 0x289;
  _DAT_002f273b = 0x28b;
  _DAT_002f273f = 0x28d;
  _DAT_002f274b = 0x293;
  _DAT_002f274f = 0x295;
  _DAT_002f2747 = 0x291;
  _DAT_002f2743 = 0x28f;
  _DAT_002f2753 = 0x297;
  _DAT_002f22cf = 0x55;
  _DAT_002f2edd = 0x284;
  _DAT_002f2ee1 = 0x286;
  _DAT_002f2ee5 = 0x288;
  _DAT_002f2ee9 = 0x28a;
  _DAT_002f2eed = 0x28c;
  _DAT_002f2ef9 = 0x292;
  _DAT_002f2efd = 0x294;
  _DAT_002f2ef5 = 0x290;
  _DAT_002f2ef1 = 0x28e;
  _DAT_002f2f01 = 0x296;
  _DAT_002f2a7d = 0x54;
  _DAT_002f264f = 0x215;
  _DAT_002f2653 = 0x217;
  _DAT_002f2657 = 0x219;
  _DAT_002f265b = 0x21b;
  _DAT_002f265f = 0x21d;
  _DAT_002f2663 = 0x21f;
  _DAT_002f2673 = 0x227;
  _DAT_002f266f = 0x225;
  _DAT_002f266b = 0x223;
  _DAT_002f2667 = 0x221;
  _DAT_002f2677 = 0x229;
  _DAT_002f22bf = 0x4d;
  _DAT_002f2dfd = 0x214;
  _DAT_002f2e01 = 0x216;
  _DAT_002f2e05 = 0x218;
  _DAT_002f2e09 = 0x21a;
  _DAT_002f2e0d = 0x21c;
  _DAT_002f2e11 = 0x21e;
  _DAT_002f2e21 = 0x226;
  _DAT_002f2e1d = 0x224;
  _DAT_002f2e19 = 0x222;
  _DAT_002f2e15 = 0x220;
  _DAT_002f2e25 = 0x228;
  _DAT_002f2a6d = 0x4c;
  _DAT_002f275b = 0x29b;
  _DAT_002f275f = 0x29d;
  _DAT_002f2757 = 0x299;
  _DAT_002f2763 = 0x29f;
  _DAT_002f276b = 0x2a3;
  _DAT_002f2767 = 0x2a1;
  _DAT_002f277b = 0x2ab;
  _DAT_002f2777 = 0x2a9;
  _DAT_002f2773 = 0x2a7;
  _DAT_002f276f = 0x2a5;
  _DAT_002f277f = 0x2ad;
  _DAT_002f22d3 = 0x57;
  _DAT_002f2f09 = 0x29a;
  _DAT_002f2f0d = 0x29c;
  _DAT_002f2f05 = 0x298;
  _DAT_002f2f11 = 0x29e;
  _DAT_002f2f19 = 0x2a2;
  _DAT_002f2f15 = 0x2a0;
  _DAT_002f2f29 = 0x2aa;
  _DAT_002f2f25 = 0x2a8;
  _DAT_002f2f21 = 0x2a6;
  _DAT_002f2f1d = 0x2a4;
  _DAT_002f2f2d = 0x2ac;
  _DAT_002f2a81 = 0x56;
  _DAT_002f2577 = 0x1a9;
  _DAT_002f257b = 0x1ab;
  _DAT_002f257f = 0x1ad;
  _DAT_002f2583 = 0x1af;
  _DAT_002f2587 = 0x1b1;
  _DAT_002f258b = 0x1b3;
  _DAT_002f258f = 0x1b5;
  _DAT_002f2593 = 0x1b7;
  _DAT_002f2597 = 0x1b9;
  _DAT_002f259b = 0x1bb;
  _DAT_002f259f = 0x1bd;
  _DAT_002f228f = 0x35;
  _DAT_002f2d25 = 0x1a8;
  _DAT_002f2d29 = 0x1aa;
  _DAT_002f2d2d = 0x1ac;
  _DAT_002f2d31 = 0x1ae;
  _DAT_002f2d35 = 0x1b0;
  _DAT_002f2d39 = 0x1b2;
  _DAT_002f2d3d = 0x1b4;
  _DAT_002f2d41 = 0x1b6;
  _DAT_002f2d45 = 0x1b8;
  _DAT_002f2d49 = 0x1ba;
  _DAT_002f2d4d = 0x1bc;
  _DAT_002f2a3d = 0x34;
  _DAT_002f2627 = 0x201;
  _DAT_002f2623 = 0x1ff;
  _DAT_002f262b = 0x203;
  _DAT_002f262f = 0x205;
  _DAT_002f2633 = 0x207;
  _DAT_002f2637 = 0x209;
  _DAT_002f263b = 0x20b;
  _DAT_002f263f = 0x20d;
  _DAT_002f2647 = 0x211;
  _DAT_002f2643 = 0x20f;
  _DAT_002f264b = 0x213;
  _DAT_002f228b = 0x33;
  _DAT_002f2dd5 = 0x200;
  _DAT_002f2dd1 = 0x1fe;
  _DAT_002f2dd9 = 0x202;
  _DAT_002f2ddd = 0x204;
  _DAT_002f2de1 = 0x206;
  _DAT_002f2de5 = 0x208;
  _DAT_002f2de9 = 0x20a;
  _DAT_002f2ded = 0x20c;
  _DAT_002f2df5 = 0x210;
  _DAT_002f2df1 = 0x20e;
  _DAT_002f2df9 = 0x212;
  _DAT_002f2a39 = 0x32;
  _DAT_002f222b = 3;
  DAT_002f2227 = 1;
  _DAT_002f222f = 5;
  _DAT_002f2233 = 7;
  _DAT_002f2237 = 9;
  _DAT_002f223b = 0xb;
  _DAT_002f223f = 0xd;
  _DAT_002f2243 = 0xf;
  _DAT_002f2247 = 0x11;
  _DAT_002f224b = 0x13;
  _DAT_002f2253 = 0x17;
  _DAT_002f224f = 0x15;
  _DAT_002f22b7 = 0x49;
  _DAT_002f29d9 = 2;
  DAT_002f29d5 = 0;
  _DAT_002f29dd = 4;
  _DAT_002f29e1 = 6;
  _DAT_002f29e5 = 8;
  _DAT_002f29e9 = 10;
  _DAT_002f29ed = 0xc;
  _DAT_002f29f1 = 0xe;
  _DAT_002f29f9 = 0x12;
  _DAT_002f29f5 = 0x10;
  _DAT_002f2a01 = 0x16;
  _DAT_002f29fd = 0x14;
  _DAT_002f2a65 = 0x48;
  _DAT_002f249b = 0x13b;
  _DAT_002f249f = 0x13d;
  _DAT_002f24a3 = 0x13f;
  _DAT_002f24a7 = 0x141;
  _DAT_002f24ab = 0x143;
  _DAT_002f24af = 0x145;
  _DAT_002f24b3 = 0x147;
  _DAT_002f24b7 = 0x149;
  _DAT_002f24bb = 0x14b;
  _DAT_002f24bf = 0x14d;
  _DAT_002f24c3 = 0x14f;
  _DAT_002f2c49 = 0x13a;
  _DAT_002f2c4d = 0x13c;
  _DAT_002f2c51 = 0x13e;
  _DAT_002f2c55 = 0x140;
  _DAT_002f2c59 = 0x142;
  _DAT_002f2c5d = 0x144;
  _DAT_002f2c61 = 0x146;
  _DAT_002f2c65 = 0x148;
  _DAT_002f2c69 = 0x14a;
  _DAT_002f2c6d = 0x14c;
  _DAT_002f2c71 = 0x14e;
  _DAT_002f26db = 0x25b;
  _DAT_002f26d7 = 0x259;
  _DAT_002f26df = 0x25d;
  _DAT_002f26e3 = 0x25f;
  _DAT_002f26e7 = 0x261;
  _DAT_002f26eb = 0x263;
  _DAT_002f26fb = 0x26b;
  _DAT_002f26f7 = 0x269;
  _DAT_002f26f3 = 0x267;
  _DAT_002f26ef = 0x265;
  _DAT_002f26ff = 0x26d;
  _DAT_002f22c7 = 0x51;
  _DAT_002f2e89 = 0x25a;
  _DAT_002f2e85 = 600;
  _DAT_002f2e8d = 0x25c;
  _DAT_002f2e91 = 0x25e;
  _DAT_002f2e95 = 0x260;
  _DAT_002f2e99 = 0x262;
  _DAT_002f2ea9 = 0x26a;
  _DAT_002f2ea5 = 0x268;
  _DAT_002f2ea1 = 0x266;
  _DAT_002f2e9d = 0x264;
  _DAT_002f2ead = 0x26c;
  _DAT_002f2a75 = 0x50;
  _DAT_002f2707 = 0x271;
  _DAT_002f2703 = 0x26f;
  _DAT_002f270b = 0x273;
  _DAT_002f270f = 0x275;
  _DAT_002f2713 = 0x277;
  _DAT_002f2717 = 0x279;
  _DAT_002f2727 = 0x281;
  _DAT_002f2723 = 0x27f;
  _DAT_002f271f = 0x27d;
  _DAT_002f271b = 0x27b;
  _DAT_002f272b = 0x283;
  _DAT_002f22cb = 0x53;
  _DAT_002f2eb5 = 0x270;
  _DAT_002f2eb1 = 0x26e;
  _DAT_002f2eb9 = 0x272;
  _DAT_002f2ebd = 0x274;
  _DAT_002f2ec1 = 0x276;
  _DAT_002f2ec5 = 0x278;
  _DAT_002f2ed5 = 0x280;
  _DAT_002f2ed1 = 0x27e;
  _DAT_002f2ecd = 0x27c;
  _DAT_002f2ec9 = 0x27a;
  _DAT_002f2ed9 = 0x282;
  _DAT_002f2a79 = 0x52;
  _DAT_002f25fb = 0x1eb;
  _DAT_002f25f7 = 0x1e9;
  _DAT_002f25ff = 0x1ed;
  _DAT_002f2603 = 0x1ef;
  _DAT_002f2607 = 0x1f1;
  _DAT_002f260b = 499;
  _DAT_002f261b = 0x1fb;
  _DAT_002f2617 = 0x1f9;
  _DAT_002f2613 = 0x1f7;
  _DAT_002f260f = 0x1f5;
  _DAT_002f261f = 0x1fd;
  _DAT_002f22bb = 0x4b;
  _DAT_002f2da9 = 0x1ea;
  _DAT_002f2da5 = 0x1e8;
  _DAT_002f2dad = 0x1ec;
  _DAT_002f2db1 = 0x1ee;
  _DAT_002f2db5 = 0x1f0;
  _DAT_002f2db9 = 0x1f2;
  _DAT_002f2dc9 = 0x1fa;
  _DAT_002f2dc5 = 0x1f8;
  _DAT_002f2dc1 = 0x1f6;
  _DAT_002f2dbd = 500;
  _DAT_002f2dcd = 0x1fc;
  _DAT_002f2a69 = 0x4a;
  _DAT_002f2397 = 0xb9;
  _DAT_002f2393 = 0xb7;
  _DAT_002f239b = 0xbb;
  _DAT_002f239f = 0xbd;
  _DAT_002f23a3 = 0xbf;
  _DAT_002f23a7 = 0xc1;
  _DAT_002f23b7 = 0xc9;
  _DAT_002f23b3 = 199;
  _DAT_002f23af = 0xc5;
  _DAT_002f23ab = 0xc3;
  _DAT_002f23bb = 0xcb;
  _DAT_002f22ab = 0x43;
  _DAT_002f2b45 = 0xb8;
  _DAT_002f2b41 = 0xb6;
  _DAT_002f2b49 = 0xba;
  _DAT_002f2b4d = 0xbc;
  _DAT_002f2b51 = 0xbe;
  _DAT_002f2b55 = 0xc0;
  _DAT_002f2b65 = 200;
  _DAT_002f2b61 = 0xc6;
  _DAT_002f2b5d = 0xc4;
  _DAT_002f2b59 = 0xc2;
  _DAT_002f2b69 = 0xca;
  _DAT_002f2a59 = 0x42;
  _DAT_002f267b = 0x22b;
  _DAT_002f267f = 0x22d;
  _DAT_002f2683 = 0x22f;
  _DAT_002f2687 = 0x231;
  _DAT_002f268b = 0x233;
  _DAT_002f268f = 0x235;
  _DAT_002f2693 = 0x237;
  _DAT_002f2697 = 0x239;
  _DAT_002f269b = 0x23b;
  _DAT_002f269f = 0x23d;
  _DAT_002f26a3 = 0x23f;
  _DAT_002f26a7 = 0x241;
  _DAT_002f2297 = 0x39;
  _DAT_002f2e29 = 0x22a;
  _DAT_002f2e2d = 0x22c;
  _DAT_002f2e31 = 0x22e;
  _DAT_002f2e35 = 0x230;
  _DAT_002f2e39 = 0x232;
  _DAT_002f2e3d = 0x234;
  _DAT_002f2e41 = 0x236;
  _DAT_002f2e45 = 0x238;
  _DAT_002f2e49 = 0x23a;
  _DAT_002f2e4d = 0x23c;
  _DAT_002f2e51 = 0x23e;
  _DAT_002f2e55 = 0x240;
  _DAT_002f2a45 = 0x38;
  _DAT_002f2921 = 0x381;
  _DAT_002f2923 = 0x382;
  _DAT_002f2925 = 899;
  _DAT_002f2927 = 900;
  _DAT_002f288f = 0x336;
  DAT_002f288b._2_2_ = 0x335;
  _DAT_002f296b = 0x3a3;
  _DAT_002f285d = 0x31a;
  _DAT_002f2851 = 0x314;
  _DAT_002f2855 = 0x316;
  _DAT_002f2859 = 0x318;
  _DAT_002f285b = 0x31a;
  _DAT_002f291f = 0x37b;
  _DAT_002f286f = 0x323;
  _DAT_002f2873 = 0x325;
  _DAT_002f2877 = 0x327;
  _DAT_002f287b = 0x329;
  _DAT_002f287f = 0x32b;
  _DAT_002f2883 = 0x32d;
  _DAT_002f2887 = 0x32f;
  DAT_002f288b._0_2_ = 0x331;
  _DAT_002f2327 = 0x81;
  _DAT_002f232f = 0x85;
  _DAT_002f2333 = 0x87;
  _DAT_002f2337 = 0x89;
  _DAT_002f233b = 0x8b;
  _DAT_002f233f = 0x8d;
  _DAT_002f2343 = 0x8f;
  _DAT_002f2347 = 0x91;
  _DAT_002f234b = 0x93;
  _DAT_002f234f = 0x95;
  _DAT_002f2353 = 0x97;
  _DAT_002f2357 = 0x99;
  _DAT_002f231f = 0x7d;
  _DAT_002f235b = 0x9b;
  _DAT_002f235f = 0x9d;
  _DAT_002f2363 = 0x9f;
  _DAT_002f2323 = 0x7f;
  _DAT_002f23eb = 0xe3;
  _DAT_002f2837 = 0x30b;
  _DAT_002f29ab = 0x3c3;
  _DAT_002f2993 = 0x3b7;
  _DAT_002f2939 = 0x38a;
  _DAT_002f296f = 0x3a5;
  _DAT_002f2973 = 0x3a7;
  _DAT_002f298f = 0x3b5;
  _DAT_002f2935 = 0x388;
  _DAT_002f28b7 = 0x34a;
  _DAT_002f28b9 = 0x34b;
  _DAT_002f28bf = 0x34f;
  _DAT_002f28c1 = 0x350;
  _DAT_002f28c3 = 0x351;
  _DAT_002f28af = 0x347;
  _DAT_002f28b1 = 0x346;
  _DAT_002f2899 = 0x33a;
  _DAT_002f28e1 = 0x35e;
  _DAT_002f2977 = 0x3ad;
  _DAT_002f2979 = 0x3ae;
  _DAT_002f297b = 0x3af;
  _DAT_002f297d = 0x3b0;
  DAT_002f297f = 0x3b1;
  _DAT_002f2833 = 0x307;
  _DAT_002f295b = 0x39b;
  _DAT_002f28ed = 0x366;
  _DAT_002f28ef = 0x367;
  _DAT_002f28f1 = 0x368;
  _DAT_002f28f9 = 0x36c;
  _DAT_002f28fb = 0x36d;
  _DAT_002f28fd = 0x36e;
  _DAT_002f2905 = 0x372;
  _DAT_002f2907 = 0x373;
  _DAT_002f2909 = 0x374;
  _DAT_002f2911 = 0x378;
  _DAT_002f2913 = 0x379;
  _DAT_002f2915 = 0x37a;
  _DAT_002f2839 = 0x30a;
  _DAT_002f2931 = 0x386;
  _DAT_002f232b = 0x83;
  _DAT_002f30d5 = 0x37d;
  _DAT_002f30d7 = 0x382;
  _DAT_002f30d9 = 0x37f;
  _DAT_002f30db = 0x380;
  _DAT_002f303f = 0x334;
  _DAT_002f303d = 0x333;
  _DAT_002f3119 = 0x3a2;
  _DAT_002f2ffb = 0x315;
  _DAT_002f2fff = 0x317;
  _DAT_002f3003 = 0x319;
  _DAT_002f3007 = 0x31b;
  _DAT_002f30c9 = 0x37c;
  _DAT_002f3019 = 0x324;
  _DAT_002f301d = 0x326;
  _DAT_002f3021 = 0x328;
  _DAT_002f3025 = 0x32a;
  _DAT_002f3029 = 0x32c;
  _DAT_002f302d = 0x32e;
  _DAT_002f3031 = 0x330;
  _DAT_002f3035 = 0x332;
  _DAT_002f2ad5 = 0x80;
  _DAT_002f2add = 0x84;
  _DAT_002f2ae1 = 0x86;
  _DAT_002f2ae5 = 0x88;
  _DAT_002f2ae9 = 0x8a;
  _DAT_002f2aed = 0x8c;
  _DAT_002f2af1 = 0x8e;
  _DAT_002f2af5 = 0x90;
  _DAT_002f2af9 = 0x92;
  _DAT_002f2afd = 0x94;
  _DAT_002f2b01 = 0x96;
  _DAT_002f2b05 = 0x98;
  _DAT_002f2acd = 0x7c;
  _DAT_002f2b09 = 0x9a;
  _DAT_002f2b0d = 0x9c;
  _DAT_002f2b11 = 0x9e;
  _DAT_002f2fe9 = 0x308;
  _DAT_002f3159 = 0x3c2;
  _DAT_002f3141 = 0x3b6;
  _DAT_002f30e7 = 0x389;
  _DAT_002f311d = 0x3a4;
  _DAT_002f3121 = 0x3a6;
  _DAT_002f313d = 0x3b4;
  _DAT_002f30e3 = 0x387;
  _DAT_002f3067 = 0x348;
  _DAT_002f3069 = 0x349;
  _DAT_002f3071 = 0x34c;
  _DAT_002f3073 = 0x34d;
  _DAT_002f3075 = 0x34e;
  _DAT_002f305f = 0x345;
  _DAT_002f3047 = 0x339;
  _DAT_002f308f = 0x35d;
  _DAT_002f312d = 0x3a8;
  _DAT_002f312f = 0x3a9;
  _DAT_002f3131 = 0x3aa;
  _DAT_002f3133 = 0x3ab;
  _DAT_002f3135 = 0x3ac;
  _DAT_002f2fe1 = 0x306;
  _DAT_002f3109 = 0x39a;
  _DAT_002f309f = 0x363;
  _DAT_002f30a1 = 0x364;
  _DAT_002f30a3 = 0x365;
  _DAT_002f30ab = 0x369;
  _DAT_002f30ad = 0x36a;
  _DAT_002f30af = 0x36b;
  _DAT_002f30b7 = 0x36f;
  _DAT_002f30b9 = 0x370;
  _DAT_002f30bb = 0x371;
  _DAT_002f30c3 = 0x375;
  _DAT_002f30c5 = 0x376;
  _DAT_002f30c7 = 0x377;
  _DAT_002f2fe7 = 0x309;
  _DAT_002f30df = 0x385;
  _DAT_002f2ad9 = 0x82;
  _DAT_002f2317 = 0x79;
  DAT_002f2ac5._0_2_ = 0x78;
  _DAT_002f230b = 0x73;
  _DAT_002f2ab9 = 0x72;
  _DAT_002f2303 = 0x6f;
  _DAT_002f2ab1 = 0x6e;
  _DAT_002f22f3 = 0x67;
  _DAT_002f2aa1 = 0x66;
  _DAT_002f22f7 = 0x69;
  _DAT_002f2aa5 = 0x68;
  _DAT_002f22fb = 0x6b;
  _DAT_002f2aa9 = 0x6a;
  _DAT_002f22ff = 0x6d;
  _DAT_002f2aad = 0x6c;
  _DAT_002f22ef = 0x65;
  _DAT_002f2a9d = 100;
  _DAT_002f22eb = 99;
  _DAT_002f2a99 = 0x62;
  _DAT_002f2283 = 0x2f;
  _DAT_002f2a31 = 0x2e;
  _DAT_002f2997 = 0x3b9;
  _DAT_002f3145 = 0x3b8;
  _DAT_002f299b = 0x3bb;
  _DAT_002f3149 = 0x3ba;
  _DAT_002f299f = 0x3bd;
  _DAT_002f314d = 0x3bc;
  _DAT_002f29a3 = 0x3bf;
  _DAT_002f3151 = 0x3be;
  _DAT_002f29a7 = 0x3c1;
  _DAT_002f3155 = 0x3c0;
  _DAT_002f298b = 0x3b3;
  _DAT_002f3139 = 0x3b2;
  return;
}

/******************************************************************************
 * Function : sub_042fc8 (Ghidra: FUN_00042fc8)
 * Prototype: void sub_042fc8(void);
 * Address  : 0x42fc8 (Size: 242 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x402e5
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00042fc8(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]];
  *(undefined2 *)(in_EAX + 0x66) = 0;
  *(undefined2 *)(in_EAX + 0x68) = 0;
  *(undefined2 *)(in_EAX + 0x6a) = 0x100;
  *(undefined4 *)(in_EAX + 0x71) = 0;
  *(undefined4 *)(in_EAX + 0x75) = 0;
  *(undefined4 *)(in_EAX + 0x6d) = 0x200;
  *(undefined4 *)(in_EAX + 0x79) = 0xbc;
  *(undefined1 *)(in_EAX + 0x6c) = 1;
  *(undefined2 *)(in_EAX + 0x3c) = *(undefined2 *)(iVar2 + 0xd);
  uVar1 = *(undefined2 *)(iVar2 + 0xf);
  *(undefined2 *)(in_EAX + 0x40) = 0;
  *(undefined4 *)(in_EAX + 0x47) = 0xfffffef6;
  *(undefined4 *)(in_EAX + 0x4b) = 0;
  *(undefined4 *)(in_EAX + 0x43) = 0x100;
  *(undefined4 *)(in_EAX + 0x4f) = 0xbc;
  *(undefined1 *)(in_EAX + 0x42) = 2;
  *(undefined4 *)(in_EAX + 0x53) = 10000;
  *(undefined2 *)(in_EAX + 0x90) = 0;
  *(undefined2 *)(in_EAX + 0x92) = 0;
  *(undefined2 *)(in_EAX + 0x94) = 0x20;
  *(undefined4 *)(in_EAX + 0xa3) = 0xbc;
  *(undefined1 *)(in_EAX + 0x96) = 3;
  *(undefined2 *)(in_EAX + 0x3e) = uVar1;
  *(undefined2 *)(in_EAX + 0xba) = *(undefined2 *)(iVar2 + 0xd);
  uVar1 = *(undefined2 *)(iVar2 + 0xf);
  *(undefined2 *)(in_EAX + 0xbe) = 0x20;
  *(undefined4 *)(in_EAX + 0xcd) = 0xbc;
  *(undefined1 *)(in_EAX + 0xc0) = 5;
  *(undefined4 *)(in_EAX + 0xd1) = 0x10000;
  *(undefined2 *)(in_EAX + 0xbc) = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_0430ba (Ghidra: FUN_000430ba)
 * Prototype: void sub_0430ba(void);
 * Address  : 0x430ba (Size: 721 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 7 -> 0x150f0, 0x2c3d0, 0xdd920, 0xe7714, 0xe8f34, 0xe984c, 0xe98c8
 * Strings  :
 *   - 0x164ea9: "DATA"
 *   - 0x164eb0: "%s\colours.col"
 *   - 0x164ebf: "DATA"
 *   - 0x164ec6: "%s\redpal.col"
 *   - 0x164ed4: "DATA"
 *   - 0x164edb: "%s\whitepal.col"
 ******************************************************************************/
void FUN_000430ba(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_38;
  int local_34;
  int local_30;
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_colours_col_00164eb0,uVar3);
  FUN_000150f0();
  cVar1 = FUN_0002c3d0();
  if (cVar1 == '\0') {
    local_34 = 0;
    iVar8 = 0;
    do {
      iVar7 = 0;
      local_38 = iVar8;
      do {
        local_30 = 0;
        iVar5 = local_38;
        do {
          local_30 = local_30 + 1;
          uVar2 = FUN_000e8f34();
          (&DAT_001992a0)[iVar5] = uVar2;
          iVar5 = iVar5 + 1;
        } while (local_30 < 0x10);
        local_38 = local_38 + 0x10;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x10);
      local_34 = local_34 + 1;
      iVar8 = iVar8 + 0x100;
    } while (local_34 < 0x10);
    FUN_000e98c8();
  }
  else {
    FUN_000e984c();
  }
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_redpal_col_00164ec6,uVar3);
  FUN_000150f0();
  cVar1 = FUN_0002c3d0();
  if (cVar1 == '\0') {
    iVar7 = 0;
    iVar8 = 0;
    do {
      iVar5 = iVar7 + 1;
      uVar4 = *(byte *)(iVar7 + DAT_00199210) + 0x14;
      if (0x3e < uVar4) {
        uVar4 = 0x3f;
      }
      iVar6 = iVar8 + 1;
      iVar7 = iVar7 + 3;
      uVar2 = FUN_000e8f34(*(undefined1 *)(iVar5 + DAT_00199210),uVar4 & 0xff);
      (&DAT_003d9684)[iVar8] = uVar2;
      iVar8 = iVar6;
    } while (iVar6 < 0x100);
    FUN_000e98c8();
  }
  else {
    FUN_000e984c();
  }
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_whitepal_col_00164edb,uVar3);
  FUN_000150f0();
  cVar1 = FUN_0002c3d0();
  if (cVar1 == '\0') {
    iVar8 = 0;
    do {
      iVar7 = iVar8 + 1;
      uVar2 = FUN_000e8f34();
      (&DAT_003d9584)[iVar8] = uVar2;
      iVar8 = iVar7;
    } while (iVar7 < 0x100);
    FUN_000e98c8();
  }
  else {
    FUN_000e984c();
  }
  return;
}

/******************************************************************************
 * Function : sub_04338b (Ghidra: FUN_0004338b)
 * Prototype: void sub_04338b(void);
 * Address  : 0x4338b (Size: 1848 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004338b(void)

{
  int iVar1;
  int iVar2;
  
  _DAT_001acd90 = 100;
  DAT_001acd94 = 0x14;
  _DAT_001acd99 = 0;
  DAT_001acd9b = 0;
  DAT_001acd9c = 0;
  DAT_001acd95 = 0;
  _DAT_001acdad = 100;
  DAT_001acdb1 = 0;
  _DAT_001acdb6 = 0x600;
  DAT_001acdb8 = 0x32;
  DAT_001acdb9 = 5;
  DAT_001acdc7 = 0;
  DAT_001acdb2 = 1;
  DAT_001acdb5 = 1;
  _DAT_001ad300 = 100;
  DAT_001ad304 = 0;
  _DAT_001ad309 = 0xa00;
  DAT_001ad30b = 0x28;
  DAT_001ad30c = 5;
  DAT_001ad31a = 0;
  DAT_001ad305 = 1;
  DAT_001ad308 = 1;
  _DAT_001acdca = 100;
  DAT_001acdce = 0x14;
  _DAT_001acde7 = 100;
  DAT_001acdeb = 0x14;
  _DAT_001acdf0 = 0x700;
  DAT_001acdf2 = 0x2f;
  DAT_001acdf3 = 5;
  DAT_001ace01 = 0;
  DAT_001acdec = 1;
  DAT_001acdef = 1;
  DAT_001ace04 = 1;
  DAT_001ace08 = 0x14;
  _DAT_001ace0d = 0xe00;
  DAT_001ace0f = 0x24;
  DAT_001ace10 = 5;
  DAT_001ace1e = 1;
  DAT_001ace09 = 0;
  DAT_001ace0a = 1;
  DAT_001ace0c = 1;
  DAT_001ace25 = 8;
  _DAT_001ace21 = 0x32;
  _DAT_001ace3e = 100;
  DAT_001ace42 = 0;
  DAT_001ace43 = 1;
  DAT_001ace46 = 1;
  _DAT_001ace5b = 100;
  DAT_001ace5f = 0x14;
  DAT_001ace60 = 1;
  _DAT_001ace95 = 1000;
  DAT_001ace99 = 9;
  _DAT_001ad09f = 100;
  DAT_001ad0a3 = 0;
  _DAT_001ad0a8 = 0x600;
  DAT_001ad0aa = 0x2e;
  DAT_001ad0ab = 5;
  DAT_001ad0b9 = 0;
  DAT_001ad0a4 = 1;
  DAT_001ad0a7 = 1;
  DAT_001ad256 = 8;
  _DAT_001ad252 = 0x32;
  DAT_001aceb6 = 10;
  _DAT_001acebb = 0x400;
  DAT_001acebd = 0x3e;
  DAT_001acebe = 0;
  DAT_001acecc = 0;
  DAT_001aceb7 = 0;
  DAT_001aceba = 1;
  DAT_001aced3 = 10;
  _DAT_001aced8 = 0x400;
  DAT_001aceda = 0x3e;
  DAT_001acedb = 0;
  DAT_001acee9 = 0;
  DAT_001aced4 = 0;
  DAT_001aced7 = 1;
  DAT_001acef0 = 10;
  _DAT_001acef5 = 0x400;
  DAT_001acef7 = 0x3e;
  DAT_001acef8 = 0;
  DAT_001acf06 = 0;
  DAT_001acef1 = 0;
  DAT_001acef4 = 1;
  DAT_001acf0d = 10;
  _DAT_001acf12 = 0x400;
  DAT_001acf14 = 0x3e;
  DAT_001acf15 = 0;
  DAT_001acf23 = 0;
  DAT_001acf0e = 0;
  DAT_001acf11 = 1;
  DAT_001acf2a = 10;
  _DAT_001acf2f = 0x400;
  DAT_001acf31 = 0x3e;
  DAT_001acf32 = 0;
  DAT_001acf40 = 0;
  DAT_001acf2b = 0;
  DAT_001acf2e = 1;
  DAT_001acf47 = 10;
  _DAT_001acf4c = 0x400;
  DAT_001acf4e = 0x3e;
  DAT_001acf4f = 0;
  DAT_001acf5d = 0;
  DAT_001acf48 = 0;
  DAT_001acf4b = 1;
  DAT_001acf64 = 10;
  _DAT_001acf69 = 0x400;
  DAT_001acf6b = 0x3e;
  DAT_001acf6c = 0;
  DAT_001acf7a = 0;
  DAT_001acf65 = 0;
  DAT_001acf68 = 1;
  DAT_001acf81 = 10;
  _DAT_001acf86 = 0x400;
  DAT_001acf88 = 0x3e;
  DAT_001acf89 = 0;
  DAT_001acf97 = 0;
  DAT_001acf82 = 0;
  DAT_001acf85 = 1;
  DAT_001acf9e = 10;
  _DAT_001acfa3 = 0x400;
  DAT_001acfa5 = 0x3e;
  DAT_001acfa6 = 0;
  DAT_001acfb4 = 0;
  DAT_001acf9f = 0;
  DAT_001acfa2 = 1;
  DAT_001acfbb = 10;
  _DAT_001acfc0 = 0x400;
  DAT_001acfc2 = 0x3e;
  DAT_001acfc3 = 0;
  DAT_001acfd1 = 0;
  DAT_001acfbc = 0;
  DAT_001acfbf = 1;
  DAT_001acfd8 = 10;
  _DAT_001acfdd = 0x400;
  DAT_001acfdf = 0x3e;
  DAT_001acfe0 = 0;
  DAT_001acfee = 0;
  DAT_001acfd9 = 0;
  DAT_001acfdc = 1;
  DAT_001acff5 = 10;
  _DAT_001acffa = 0x400;
  DAT_001acffc = 0x3e;
  DAT_001acffd = 0;
  DAT_001ad00b = 0;
  DAT_001acff6 = 0;
  DAT_001acff9 = 1;
  DAT_001ad012 = 10;
  _DAT_001ad017 = 0x400;
  DAT_001ad019 = 0x3e;
  DAT_001ad01a = 0;
  DAT_001ad028 = 0;
  DAT_001ad013 = 0;
  DAT_001ad016 = 1;
  DAT_001ad290 = 10;
  _DAT_001ad295 = 0x400;
  DAT_001ad297 = 0x3e;
  DAT_001ad298 = 0;
  DAT_001ad2a6 = 0;
  DAT_001ad291 = 0;
  DAT_001ad294 = 1;
  DAT_001ad2ad = 10;
  _DAT_001ad2b2 = 0x400;
  DAT_001ad2b4 = 0x3e;
  DAT_001ad2b5 = 0;
  DAT_001ad2c3 = 0;
  DAT_001ad2ae = 0;
  DAT_001ad2b1 = 1;
  DAT_001ad2ca = 10;
  _DAT_001ad2cf = 0x400;
  DAT_001ad2d1 = 0x3e;
  DAT_001ad2d2 = 0;
  DAT_001ad2e0 = 0;
  DAT_001ad2cb = 0;
  DAT_001ad2ce = 1;
  DAT_001adca5 = 10;
  _DAT_001adcaa = 0x400;
  DAT_001adcac = 0x3e;
  DAT_001adcad = 0;
  DAT_001adcbb = 0;
  DAT_001adca6 = 0;
  DAT_001adca9 = 1;
  DAT_001ad752 = 10;
  _DAT_001ad757 = 0x400;
  DAT_001ad759 = 0x3e;
  DAT_001ad75a = 0;
  DAT_001ad768 = 0;
  DAT_001ad753 = 0;
  DAT_001ad76f = 10;
  _DAT_001ad774 = 0x400;
  DAT_001ad776 = 0x3e;
  DAT_001ad777 = 0;
  DAT_001ad785 = 0;
  DAT_001ad770 = 0;
  DAT_001ad78c = 10;
  _DAT_001ad791 = 0x400;
  DAT_001ad793 = 0x3e;
  DAT_001ad794 = 0;
  DAT_001ad7a2 = 0;
  DAT_001ad78d = 0;
  DAT_001ad7a9 = 10;
  _DAT_001ad7ae = 0x400;
  DAT_001ad7b0 = 0x3e;
  DAT_001ad7b1 = 0;
  DAT_001ad7bf = 0;
  DAT_001ad7aa = 0;
  DAT_001ad7c6 = 10;
  _DAT_001ad7cb = 0x400;
  DAT_001ad7cd = 0x3e;
  DAT_001ad7ce = 0;
  DAT_001ad7dc = 0;
  DAT_001ad7c7 = 0;
  DAT_001ad7e3 = 10;
  _DAT_001ad7e8 = 0x400;
  DAT_001ad7ea = 0x3e;
  DAT_001ad7eb = 0;
  DAT_001ad7f9 = 0;
  DAT_001ad7e4 = 0;
  DAT_001ad800 = 10;
  _DAT_001ad805 = 0x400;
  DAT_001ad807 = 0x3e;
  DAT_001ad808 = 0;
  DAT_001ad816 = 0;
  DAT_001ad801 = 0;
  DAT_001ad9d3 = 1;
  DAT_001ad821 = 1;
  DAT_001ad83e = 1;
  DAT_001ad85b = 1;
  DAT_001ad878 = 1;
  DAT_001ad895 = 1;
  DAT_001ad8b2 = 1;
  DAT_001ad97d = 1;
  DAT_001ad99a = 1;
  DAT_001ad9b7 = 1;
  DAT_001ad9d4 = 1;
  DAT_001adbf7 = 10;
  iVar2 = 0x675;
  do {
    iVar1 = iVar2 + 0x1d;
    (&DAT_001acd7b)[iVar2] = 1;
    iVar2 = iVar1;
  } while (iVar1 != 0x9be);
  DAT_001adbc1 = 1;
  DAT_001ad06d = 1;
  DAT_001ad08a = 1;
  DAT_001ad0fe = 1;
  DAT_001ad11b = 1;
  DAT_001ada65 = 1;
  DAT_001ada82 = 1;
  DAT_001adabc = 1;
  DAT_001ada9f = 1;
  DAT_001adad9 = 1;
  DAT_001adaf6 = 1;
  DAT_001adba4 = 1;
  return;
}

/******************************************************************************
 * Function : sub_043ac3 (Ghidra: FUN_00043ac3)
 * Prototype: undefined4 sub_043ac3(void);
 * Address  : 0x43ac3 (Size: 240 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x250ef, 0x25504, 0x2ab14, 0x69268, 0x694d4, 0x6b820, 0x7231c, 0xe0b1c, 0xe1ec4, 0xe45c0 ...
 * Callees  : 9 -> 0x24998, 0x43bb3, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x44b13, 0x44d42, 0x44dae
 ******************************************************************************/
undefined4 FUN_00043ac3(void)

{
  ushort in_DX;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (in_DX < 5) {
    if (in_DX < 2) {
      if (in_DX == 1) {
        uVar1 = FUN_00043f07();
      }
    }
    else if (in_DX < 3) {
      uVar1 = FUN_000442ca();
    }
    else if (in_DX < 4) {
      uVar1 = FUN_000444a9();
    }
    else {
      uVar1 = FUN_00044b13(0);
    }
  }
  else if (in_DX < 6) {
    uVar1 = FUN_00043bb3();
  }
  else if (in_DX < 8) {
    if (in_DX == 6) {
      uVar1 = FUN_00024998();
    }
  }
  else if (in_DX < 9) {
    uVar1 = FUN_000447fb();
  }
  else if (0xb < in_DX) {
    if (in_DX < 0xd) {
      uVar1 = FUN_00044d42();
    }
    else if (in_DX == 0xd) {
      uVar1 = FUN_00044dae();
    }
  }
  return uVar1;
}

/******************************************************************************
 * Function : dk_told_you_so_create_043bb3 (Ghidra: FUN_00043bb3)
 * Prototype: int dk_told_you_so_create_043bb3(void);
 * Address  : 0x43bb3 (Size: 852 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3019 ("'Told You So' error! Cannot create creature because there are too many fucking things allocated.")
 * Naming   : String ''Told You So' error! Cannot create creature because there ar'
 * Callers  : 17 -> 0x26b04, 0x2ab14, 0x39901, 0x40832, 0x43ac3, 0x4e1f2, 0x5f6c5, 0x66016, 0x67483, 0x6972c ...
 * Callees  : 14 -> 0x50c38, 0x63670, 0x63b6d, 0x72829, 0x728c2, 0x7290f, 0x7299d, 0x72d90, 0x82204, 0x85890 ...
 * Strings  :
 *   - 0x164f4c: "inits.cpp"
 *   - 0x164eeb: "'Told You So' error! Cannot create creature because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_00043bb3(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 *in_EAX;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ushort in_DX;
  ushort unaff_BX;
  int iVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined1 local_30;
  
  bVar8 = 0;
  iVar4 = (uint)in_DX * 0xe6;
  sVar2 = FUN_000728c2();
  if (sVar2 != 0) {
    sVar2 = FUN_00072829();
    if (sVar2 != 0) {
      iVar5 = FUN_0007290f();
      uVar9 = FUN_0007299d();
      pbVar6 = (byte *)uVar9;
      bVar1 = *pbVar6;
      *(undefined1 *)(iVar5 + 0x1f) = 5;
      *(ushort *)(iVar5 + 100) = (ushort)bVar1;
      local_30 = (undefined1)in_DX;
      *(undefined1 *)(iVar5 + 0x1a) = local_30;
      *(undefined2 *)(iVar5 + 0x1d) = *(undefined2 *)(iVar5 + 0x1b);
      *(undefined4 *)(iVar5 + 0xd) = *in_EAX;
      *(undefined2 *)(iVar5 + 0x11 + (uint)bVar8 * -8) =
           *(undefined2 *)(in_EAX + (uint)bVar8 * -2 + 1);
      *(undefined2 *)(iVar5 + 0x56) = *(undefined2 *)(&DAT_002e9182 + iVar4);
      *(undefined2 *)(iVar5 + 0x58) = *(undefined2 *)(&DAT_002e9184 + iVar4);
      *(undefined2 *)(iVar5 + 0x5a) = *(undefined2 *)(&DAT_002e91e9 + iVar4);
      uVar3 = *(undefined2 *)(&DAT_002e91eb + iVar4);
      *(undefined1 *)(iVar5 + 0x20) = 0x20;
      *(undefined1 *)(iVar5 + 0x22) = 0;
      *(undefined1 *)(iVar5 + 0x23) = 0x20;
      *(undefined1 *)(iVar5 + 0x24) = 8;
      *(undefined2 *)(iVar5 + 0x52) = 0;
      *(undefined2 *)(iVar5 + 0x54) = 0;
      *(undefined2 *)(iVar5 + 0x5c) = uVar3;
      *(byte *)(iVar5 + 0x25) = *(byte *)(iVar5 + 0x25) | 8;
      *(char *)(iVar5 + 6) = (char)unaff_BX;
      uVar3 = FUN_00085890();
      *(undefined2 *)(pbVar6 + 0xc4) = uVar3;
      iVar7 = (int)((ulonglong)uVar9 >> 0x20) * 0x10;
      *(undefined4 *)(pbVar6 + 0x2c1) = *(undefined4 *)(&DAT_0018b70f + iVar7);
      *(undefined2 *)(pbVar6 + (uint)bVar8 * -8 + 0x2c5) =
           *(undefined2 *)(&DAT_0018b713 + (uint)bVar8 * -8 + iVar7);
      FUN_000dd2f0(0,0,2);
      FUN_0008ccec();
      pbVar6[0x23] = 1;
      *(undefined2 *)(iVar5 + 0x5e) = (&DAT_002e9114)[(uint)in_DX * 0x73];
      *(short *)(pbVar6 + 0xc6) =
           (short)((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar5 + 0x1a) * 0x73] *
                         (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x23) * 0x23) /
                  100) + (&DAT_002e9114)[(uint)*(byte *)(iVar5 + 0x1a) * 0x73];
      *(char *)(iVar5 + 6) = (char)unaff_BX;
      *(undefined4 *)(iVar5 + 0xd) = *in_EAX;
      *(undefined2 *)(iVar5 + 0x11 + (uint)bVar8 * -8) =
           *(undefined2 *)(in_EAX + (uint)bVar8 * -2 + 1);
      *(undefined4 *)(iVar5 + 9) = DAT_002e8bee;
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      pbVar6[0x286] = (char)((ulonglong)DAT_002e8bf6 % 0xd) + 0x11;
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      pbVar6[0x287] = (byte)((ulonglong)DAT_002e8bf6 % 7);
      if (unaff_BX == DAT_002eb542) {
        pbVar6[0x89] = 0xff;
        pbVar6[0x8c] = 1;
      }
      *(undefined4 *)(pbVar6 + 0x288) = *(undefined4 *)(iVar5 + 0xd);
      *(undefined2 *)(pbVar6 + (uint)bVar8 * -8 + 0x28c) =
           *(undefined2 *)(iVar5 + 0x11 + (uint)bVar8 * -8);
      uVar3 = FUN_000b28e8();
      *(undefined2 *)(pbVar6 + 0x28c) = uVar3;
      pbVar6[0x1d2] = 0xff;
      if ((&DAT_002e9188)[iVar4] != '\0') {
        *(byte *)(iVar5 + 0x25) = *(byte *)(iVar5 + 0x25) | 0x20;
      }
      FUN_00082204();
      *(short *)(iVar5 + 0x5e) =
           (short)((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar5 + 0x1a) * 0x73] *
                         (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x23) * 0x23) /
                  100) + (&DAT_002e9114)[(uint)*(byte *)(iVar5 + 0x1a) * 0x73];
      FUN_00072d90();
      FUN_00050c38();
      if (unaff_BX < 6) {
        FUN_00063670();
      }
      FUN_00063b6d();
      if ((int)*(char *)(iVar5 + 6) != (uint)DAT_002eb543) {
        *(uint *)(&DAT_002e1431 + *(char *)(iVar5 + 6) * 0x1508) =
             *(int *)(&DAT_002e1431 + *(char *)(iVar5 + 6) * 0x1508) +
             (uint)(byte)(&DAT_002ebaf8)[(uint)pbVar6[0x23] + (uint)*(byte *)(iVar5 + 0x1a) * 10];
      }
      pbVar6[0x1e8] = (&DAT_00188bf4)[(uint)in_DX * 5];
      return iVar5;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3019, "'Told You So' error! Cannot create creature because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_light_object_043f07 (Ghidra: FUN_00043f07)
 * Prototype: int dk_allocate_light_object_043f07(void);
 * Address  : 0x43f07 (Size: 963 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3196 ("Cannot allocate light to object"); inits.cpp:3241 ("Could not allocate number for hero door"); inits.cpp:3252 ("'Told You So' error! Cannot create object because there are too many fucking things allocated.")
 * Naming   : String 'Cannot allocate light to object'
 * Callers  : 25 -> 0x22fe5, 0x38615, 0x43ac3, 0x4845c, 0x4da55, 0x4e85c, 0x4f195, 0x4faf1, 0x4fc98, 0x50ea6 ...
 * Callees  : 9 -> 0x50c38, 0x72829, 0x7290f, 0x72d90, 0x8ccec, 0xacaf8, 0xad888, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x164f76: "inits.cpp"
 *   - 0x164fa8: "inits.cpp"
 *   - 0x165011: "inits.cpp"
 *   - 0x164f56: "Cannot allocate light to object"
 *   - 0x164f80: "Could not allocate number for hero door"
 *   - 0x164fb2: "'Told You So' error! Cannot create object because there are too many fucking things allocated."
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00043f07(void)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  short sVar4;
  undefined4 *in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  undefined1 extraout_DL;
  ushort in_DX;
  undefined1 unaff_BL;
  uint uVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined2 uStack_22;
  undefined1 local_1f;
  int local_1c;
  undefined2 *local_18;
  undefined1 local_14;
  ushort local_10;
  
  bVar9 = 0;
  local_18 = (undefined2 *)(&DAT_001acd73 + (uint)in_DX * 0x1d);
  local_10 = in_DX;
  local_14 = unaff_BL;
  FUN_000e6a10();
  sVar4 = FUN_00072829();
  if (sVar4 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3196, "Cannot allocate light to object") */
    return 0;
  }
  local_1c = FUN_0007290f();
  *(undefined1 *)(local_1c + 0x1f) = 1;
  *(undefined1 *)(local_1c + 0x1a) = extraout_DL;
  if (extraout_ECX == -1) {
    *(undefined2 *)(local_1c + 0x1d) = 0xffff;
  }
  else {
    *(short *)(local_1c + 0x1d) = (short)extraout_ECX;
  }
  iVar5 = (uint)local_10 * 0x16;
  *(undefined4 *)(local_1c + 0xd) = *in_EAX;
  *(undefined2 *)(local_1c + 0x11 + (uint)bVar9 * -8) =
       *(undefined2 *)(in_EAX + (uint)bVar9 * -2 + 1);
  *(undefined2 *)(local_1c + 0x56) = *(undefined2 *)(&DAT_0018b90f + iVar5);
  *(undefined2 *)(local_1c + 0x58) = *(undefined2 *)(&DAT_0018b911 + iVar5);
  *(undefined2 *)(local_1c + 0x5a) = *(undefined2 *)(&DAT_0018b90f + iVar5);
  *(undefined2 *)(local_1c + 0x5c) = *(undefined2 *)(&DAT_0018b911 + iVar5);
  *(undefined2 *)(local_1c + 0x5e) = *local_18;
  uVar1 = *(undefined1 *)(local_18 + 2);
  *(undefined1 *)(local_1c + 0x23) = 0xcc;
  *(undefined1 *)(local_1c + 0x24) = 0x33;
  *(undefined1 *)(local_1c + 0x22) = 0;
  *(undefined1 *)(local_1c + 0x20) = uVar1;
  *(byte *)(local_1c + 0x25) = *(byte *)(local_1c + 0x25) | 8;
  bVar2 = *(byte *)(local_18 + 4);
  *(byte *)(local_1c + 0x25) = *(byte *)(local_1c + 0x25) & 0xbf;
  *(byte *)(local_1c + 0x25) = *(byte *)(local_1c + 0x25) | (bVar2 & 1) << 6;
  *(undefined1 *)(local_1c + 6) = local_14;
  *(undefined4 *)(local_1c + 9) = DAT_002e8bee;
  if ((&DAT_0018b908)[(uint)*(byte *)(local_1c + 0x1a) * 0x16] == '\0') {
    uVar1 = (&DAT_0018b917)[iVar5];
    uVar10 = 0;
  }
  else {
    uVar1 = (&DAT_0018b917)[iVar5];
    uVar10 = 0xffffffff;
  }
  FUN_0008ccec(0,uVar10,uVar1);
  iVar5 = local_1c;
  bVar2 = *(byte *)((int)local_18 + 5);
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xfd;
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (bVar2 & 1) * '\x02';
  iVar6 = (uint)local_10 * 0x16;
  bVar2 = (&DAT_0018b909)[iVar6];
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xfe;
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | bVar2 & 1;
  bVar2 = (&DAT_0018b915)[iVar6];
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xcf;
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (bVar2 & 3) << 4;
  *(undefined *)(local_1c + 7) = (&DAT_0018b906)[iVar6];
  if (*(short *)((int)local_18 + 9) != 0) {
    (&uStack_22)[(uint)bVar9 * -4] = *(undefined2 *)(local_1c + 0x11 + (uint)bVar9 * -8);
    local_1f = *(undefined1 *)(local_18 + 0xd);
    sVar4 = FUN_000acaf8();
    *(short *)(iVar5 + 0x62) = sVar4;
    if (sVar4 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3241, "Could not allocate number for hero door") */
    }
  }
  if (local_10 < 6) {
    if (local_10 < 3) goto LAB_00044294;
    if (3 < local_10) {
      if (local_10 == 5) {
        *(undefined1 *)(local_1c + 0x14) = 1;
        FUN_000ad888();
      }
      goto LAB_00044294;
    }
    iVar5 = (int)DAT_002eb9ec;
  }
  else if (local_10 < 7) {
    iVar5 = (int)_DAT_002eb9ea;
  }
  else {
    if (local_10 < 0x2b) {
      if (local_10 == 0x21) {
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xcf;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | 0x20;
      }
      goto LAB_00044294;
    }
    if (0x2b < local_10) {
      if (local_10 == 0x31) {
        for (uVar8 = 1; (int)uVar8 < 0x100; uVar8 = uVar8 + 1) {
          bVar3 = false;
          for (uVar7 = (&DAT_001ae9fc)[DAT_002e6ec6]; DAT_001ae9fc < uVar7;
              uVar7 = (&DAT_001ae9fc)[*(ushort *)(uVar7 + 0x67)]) {
            if ((*(char *)(uVar7 + 0x1a) == '1') && (uVar8 == *(byte *)(uVar7 + 0x13))) {
              bVar3 = true;
              break;
            }
          }
          if (!bVar3) {
            *(char *)(local_1c + 0x13) = (char)uVar8;
            break;
          }
        }
        if (uVar8 == 0x100) {
          FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3252, "'Told You So' error! Cannot create object because there are too many fucking things allocated.") */
        }
      }
      goto LAB_00044294;
    }
    iVar5 = (int)DAT_002eb9ee;
  }
  *(int *)(local_1c + 0x13) = iVar5;
LAB_00044294:
  FUN_00072d90();
  FUN_00050c38();
  return local_1c;
}

/******************************************************************************
 * Function : dk_allocate_dynamic_light_shot_0442ca (Ghidra: FUN_000442ca)
 * Prototype: int dk_allocate_dynamic_light_shot_0442ca(void);
 * Address  : 0x442ca (Size: 479 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3310 ("Cannot allocate dynamic light to shot"); inits.cpp:3320 ("'Told You So' error! Cannot create shot because there are too many fucking things allocated.")
 * Naming   : String 'Cannot allocate dynamic light to shot'
 * Callers  : 5 -> 0x43ac3, 0x4f195, 0x763d4, 0x76569, 0x7668c
 * Callees  : 8 -> 0x50c38, 0x72829, 0x7290f, 0x72d90, 0x8ccec, 0xacaf8, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x165041: "inits.cpp"
 *   - 0x1650a8: "inits.cpp"
 *   - 0x16501b: "Cannot allocate dynamic light to shot"
 *   - 0x16504b: "'Told You So' error! Cannot create shot because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_000442ca(void)

{
  byte bVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 *in_EAX;
  undefined1 extraout_CL;
  uint in_EDX;
  int extraout_EDX;
  undefined1 unaff_BL;
  byte bVar4;
  undefined2 uStack_26;
  undefined1 local_23;
  int local_20;
  undefined *local_1c;
  int local_18;
  undefined1 local_14;
  
  bVar4 = 0;
  local_1c = &DAT_00188c94 + (in_EDX & 0xffff) * 0x65;
  local_14 = unaff_BL;
  sVar3 = FUN_00072829();
  if (sVar3 != 0) {
    FUN_000e6a10();
    local_20 = FUN_0007290f();
    uVar2 = DAT_002e8bee;
    *(undefined1 *)(local_20 + 0x1f) = 2;
    *(undefined4 *)(local_20 + 9) = uVar2;
    *(undefined1 *)(local_20 + 0x1a) = extraout_CL;
    *(undefined4 *)(local_20 + 0xd) = *in_EAX;
    *(undefined2 *)(local_20 + 0x11 + (uint)bVar4 * -8) =
         *(undefined2 *)(in_EAX + (uint)bVar4 * -2 + 1);
    *(undefined2 *)(local_20 + 0x1d) = *(undefined2 *)(local_20 + 0x1b);
    *(undefined1 *)(local_20 + 6) = local_14;
    *(undefined *)(local_20 + 0x22) = local_1c[0xd];
    *(undefined *)(local_20 + 0x20) = local_1c[0xf];
    *(undefined *)(local_20 + 0x21) = local_1c[0x10];
    *(undefined *)(local_20 + 0x23) = local_1c[0x11];
    *(undefined *)(local_20 + 0x24) = local_1c[0x12];
    bVar1 = local_1c[0x13];
    *(byte *)(local_20 + 0x25) = *(byte *)(local_20 + 0x25) & 0xf7;
    *(byte *)(local_20 + 0x25) = *(byte *)(local_20 + 0x25) | (bVar1 & 1) << 3;
    local_18 = local_20;
    FUN_0008ccec(0,0,2);
    bVar1 = local_1c[6];
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xfd;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (bVar1 & 1) * '\x02';
    bVar1 = local_1c[8];
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xcf;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (bVar1 & 3) << 4;
    bVar1 = local_1c[7];
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xfe;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | bVar1 & 1;
    *(undefined2 *)(local_18 + 0x56) = *(undefined2 *)(local_1c + 9);
    *(undefined2 *)(local_18 + 0x58) = *(undefined2 *)(local_1c + 0xb);
    *(undefined2 *)(local_18 + 0x5a) = *(undefined2 *)(local_1c + 9);
    *(undefined2 *)(local_18 + 0x5c) = *(undefined2 *)(local_1c + 0xb);
    *(undefined2 *)(local_18 + 0x14) = *(undefined2 *)(local_1c + 0x16);
    *(undefined2 *)(local_18 + 0x5e) = *(undefined2 *)(local_1c + 0x14);
    if (*(short *)(local_1c + 0x50) != 0) {
      (&uStack_26)[(uint)bVar4 * -4] = *(undefined2 *)(local_18 + 0x11 + (uint)bVar4 * -8);
      local_23 = 1;
      sVar3 = FUN_000acaf8();
      *(short *)(extraout_EDX + 0x62) = sVar3;
      if (sVar3 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3310, "Cannot allocate dynamic light to shot") */
      }
    }
    FUN_00050c38();
    FUN_00072d90();
    return local_20;
  }
  FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3320, "'Told You So' error! Cannot create shot because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_dynamic_light_shot_0444a9 (Ghidra: FUN_000444a9)
 * Prototype: int dk_allocate_dynamic_light_shot_0444a9(void);
 * Address  : 0x444a9 (Size: 850 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3430 ("Cannot allocate dynamic light to shot")
 * Naming   : String 'Cannot allocate dynamic light to shot'
 * Callers  : 24 -> 0x10fdf, 0x24ab9, 0x2606f, 0x28904, 0x3ed80, 0x43ac3, 0x4faf1, 0x5f6c5, 0x65199, 0x65283 ...
 * Callees  : 10 -> 0x2666b, 0x50c38, 0x72829, 0x7290f, 0x72d90, 0x8ccec, 0xacaf8, 0xddad0, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x1650d8: "inits.cpp"
 *   - 0x1650b2: "Cannot allocate dynamic light to shot"
 ******************************************************************************/
int FUN_000444a9(void)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  short sVar4;
  undefined4 *in_EAX;
  undefined1 extraout_CL;
  ushort in_DX;
  int extraout_EDX;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined2 local_38;
  byte local_36;
  byte local_35;
  undefined4 local_2e;
  undefined2 uStack_2a;
  undefined1 local_27;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  ushort local_14;
  
  bVar7 = 0;
  puVar6 = (undefined4 *)&local_38;
  local_24 = (uint)in_DX * 0x4e;
  local_20 = &DAT_00189934 + local_24;
  uStack_3c = 0x444d3;
  local_14 = in_DX;
  sVar4 = FUN_00072829();
  if (sVar4 != 0) {
    uStack_3c = 0x444e3;
    cVar3 = FUN_0002666b();
    if (cVar3 != '\0') {
      uStack_3c = 0x444fa;
      FUN_000e6a10();
      uStack_3c = 0x44501;
      local_1c = FUN_0007290f();
      *(undefined1 *)(local_1c + 0x1f) = 3;
      *(undefined1 *)(local_1c + 0x1a) = (undefined1)local_14;
      *(undefined4 *)(local_1c + 0xd) = *in_EAX;
      *(undefined2 *)(local_1c + 0x11 + (uint)bVar7 * -8) =
           *(undefined2 *)(in_EAX + (uint)bVar7 * -2 + 1);
      *(undefined2 *)(local_1c + 2) = 0;
      *(undefined2 *)(local_1c + 0x56) = 1;
      *(undefined2 *)(local_1c + 0x58) = 1;
      *(undefined2 *)(local_1c + 0x5a) = 1;
      *(undefined2 *)(local_1c + 0x5c) = 1;
      *(undefined2 *)(local_1c + 0x1d) = *(undefined2 *)(local_1c + 0x1b);
      *(undefined1 *)(local_1c + 6) = extraout_CL;
      local_18 = local_1c;
      if (*(short *)(local_20 + 7) == -1) {
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | 1;
      }
      else {
        uStack_3c = (uint)*local_20;
        uStack_40 = 0;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        puVar6 = &uStack_44;
        uStack_44 = 0;
        DAT_002e8bf6 = (DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000) * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        FUN_0008ccec();
        bVar1 = (&DAT_00189947)[local_24];
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xfd;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (bVar1 & 1) * '\x02';
        bVar1 = (&DAT_00189948)[local_24];
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xcf;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (bVar1 & 3) << 4;
        bVar1 = (&DAT_00189941)[local_24];
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xbf;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (bVar1 & 1) << 6;
      }
      iVar5 = (uint)local_14 * 0x4e;
      *(undefined *)(local_18 + 0x20) = (&DAT_0018994c)[iVar5];
      *(undefined *)(local_18 + 0x23) = (&DAT_0018994e)[iVar5];
      *(undefined *)(local_18 + 0x24) = (&DAT_00189950)[iVar5];
      *(byte *)(local_18 + 0x25) = *(byte *)(local_18 + 0x25) | 8;
      bVar1 = (&DAT_0018994a)[iVar5];
      *(byte *)(local_18 + 0x25) = *(byte *)(local_18 + 0x25) & 0xef;
      *(byte *)(local_18 + 0x25) = *(byte *)(local_18 + 0x25) | (bVar1 & 1) << 4;
      *(undefined4 *)(local_18 + 9) = DAT_002e8bee;
      if (*(short *)(&DAT_00189937 + iVar5) < 1) {
        *(undefined4 *)((int)puVar6 + -4) = 0x446de;
        sVar4 = FUN_000ddad0();
      }
      else {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        sVar4 = *(short *)(&DAT_00189937 + iVar5) +
                (short)(DAT_002e8bf6 %
                       (((int)*(short *)(&DAT_00189939 + iVar5) -
                        (int)*(short *)(&DAT_00189937 + iVar5)) + 1U));
      }
      pbVar2 = local_20;
      *(short *)(local_18 + 0x5e) = sVar4;
      if (local_20[0x17] == 0) {
        *(undefined1 *)(local_18 + 0x4a) = 0;
      }
      else {
        *(undefined2 *)(local_18 + 0x4b) = *(undefined2 *)(local_20 + 9);
        *(undefined2 *)(local_18 + 0x4d) = *(undefined2 *)(local_20 + 0xb);
        if (local_20[0x17] == 2) {
          *(char *)(local_18 + 0x4a) =
               (char)((int)((uint)*(ushort *)(local_20 + 0xb) - (uint)*(ushort *)(local_20 + 9)) /
                     (int)*(short *)(local_18 + 0x5e)) * '\x02';
          *(byte *)(local_18 + 0x50) = *(byte *)(local_18 + 0x50) | 2;
        }
        else {
          *(char *)(local_18 + 0x4a) =
               (char)((int)((uint)*(ushort *)(local_20 + 0xb) - (uint)*(ushort *)(local_20 + 9)) /
                     (int)*(short *)(local_18 + 0x5e));
          *(byte *)(local_18 + 0x50) = *(byte *)(local_18 + 0x50) & 0xfd;
        }
        *(undefined2 *)(local_18 + 0x46) = *(undefined2 *)(local_20 + 9);
      }
      if (*(short *)(local_20 + 0x39) != 0) {
        local_2e = *(undefined4 *)(local_18 + 0xd);
        (&uStack_2a)[(uint)bVar7 * -4] = *(undefined2 *)(local_18 + 0x11 + (uint)bVar7 * -8);
        local_38 = *(undefined2 *)(pbVar2 + 0x39);
        local_36 = local_20[0x3b];
        local_35 = local_20[0x3c];
        local_27 = 1;
        *(undefined4 *)((int)puVar6 + -4) = 0x447ba;
        sVar4 = FUN_000acaf8();
        *(short *)(extraout_EDX + 0x62) = sVar4;
        if (sVar4 == 0) {
          *(undefined4 *)((int)puVar6 + -4) = 0x447d7;
          FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3430, "Cannot allocate dynamic light to shot") */
        }
      }
      *(undefined4 *)((int)puVar6 + -4) = 0x447e4;
      FUN_00072d90();
      *(undefined4 *)((int)puVar6 + -4) = 0x447ec;
      FUN_00050c38();
      return local_18;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_dynamic_light_trap_0447fb (Ghidra: FUN_000447fb)
 * Prototype: int dk_allocate_dynamic_light_trap_0447fb(void);
 * Address  : 0x447fb (Size: 425 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3508 ("Cannot allocate dynamic light to trap"); inits.cpp:3517 ("'Told You So' error! Cannot create trap because there are too many fucking things allocated.")
 * Naming   : String 'Cannot allocate dynamic light to trap'
 * Callers  : 3 -> 0x43ac3, 0x48c77, 0x5f6c5
 * Callees  : 8 -> 0x50c38, 0x72829, 0x7290f, 0x72d90, 0x8ccec, 0xacaf8, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x165108: "inits.cpp"
 *   - 0x16516f: "inits.cpp"
 *   - 0x1650e2: "Cannot allocate dynamic light to trap"
 *   - 0x165112: "'Told You So' error! Cannot create trap because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_000447fb(void)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 *in_EAX;
  undefined1 extraout_CL;
  uint in_EDX;
  int extraout_EDX;
  undefined1 unaff_BL;
  byte bVar4;
  undefined4 uVar5;
  undefined2 uStack_22;
  undefined1 local_1f;
  undefined2 *local_1c;
  int local_18;
  undefined1 local_14;
  
  bVar4 = 0;
  local_1c = (undefined2 *)(&DAT_0018fd09 + (in_EDX & 0xffff) * 0x36);
  local_14 = unaff_BL;
  sVar3 = FUN_00072829();
  if (sVar3 != 0) {
    FUN_000e6a10();
    local_18 = FUN_0007290f();
    *(undefined1 *)(local_18 + 0x1f) = 8;
    *(undefined1 *)(local_18 + 0x1a) = extraout_CL;
    *(undefined4 *)(local_18 + 0xd) = *in_EAX;
    *(undefined2 *)(local_18 + 0x11 + (uint)bVar4 * -8) =
         *(undefined2 *)(in_EAX + (uint)bVar4 * -2 + 1);
    *(undefined2 *)(local_18 + 0x1d) = *(undefined2 *)(local_18 + 0x1b);
    *(undefined1 *)(local_18 + 6) = local_14;
    *(undefined2 *)(local_18 + 2) = 0;
    if (*(char *)((int)local_1c + 0x13) == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffff;
    }
    FUN_0008ccec((int)*(char *)(local_1c + 6),uVar5,2);
    bVar1 = *(byte *)((int)local_1c + 0x11);
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xfd;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (bVar1 & 1) * '\x02';
    bVar1 = *(byte *)(local_1c + 6);
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xbf;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (bVar1 & 1) << 6;
    *(undefined2 *)(local_18 + 0x56) = local_1c[10];
    *(undefined2 *)(local_18 + 0x58) = local_1c[0xb];
    *(undefined2 *)(local_18 + 0x5a) = local_1c[10];
    *(undefined2 *)(local_18 + 0x5c) = local_1c[0xb];
    *(undefined4 *)(local_18 + 9) = DAT_002e8bee;
    uVar2 = *local_1c;
    *(undefined1 *)(local_18 + 0x13) = 0;
    *(undefined2 *)(local_18 + 0x5e) = uVar2;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xcf;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | 0x20;
    *(undefined4 *)(local_18 + 0x14) = DAT_002e8bee;
    if (local_1c[0xe] != 0) {
      (&uStack_22)[(uint)bVar4 * -4] = *(undefined2 *)(local_18 + 0x11 + (uint)bVar4 * -8);
      local_1f = 1;
      sVar3 = FUN_000acaf8();
      *(short *)(extraout_EDX + 0x62) = sVar3;
      if (sVar3 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3508, "Cannot allocate dynamic light to trap") */
      }
    }
    FUN_00072d90();
    FUN_00050c38();
    return local_18;
  }
  FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3517, "'Told You So' error! Cannot create trap because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : dk_told_you_so_create_0449a4 (Ghidra: FUN_000449a4)
 * Prototype: int dk_told_you_so_create_0449a4(undefined1 param_1);
 * Address  : 0x449a4 (Size: 367 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3568 ("'Told You So' error! Cannot create door because there are too many fucking things allocated.")
 * Naming   : String ''Told You So' error! Cannot create door because there are to'
 * Callers  : 2 -> 0x2ab14, 0x61d43
 * Callees  : 7 -> 0x50c38, 0x72829, 0x7290f, 0x72d90, 0x7c590, 0xd8b7c, 0xddaf0
 * Strings  :
 *   - 0x1651d6: "inits.cpp"
 *   - 0x165179: "'Told You So' error! Cannot create door because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_000449a4(undefined1 param_1)

{
  short sVar1;
  ushort *in_EAX;
  ushort in_CX;
  int extraout_ECX;
  undefined1 extraout_DL;
  byte unaff_BL;
  byte bVar2;
  undefined4 local_20;
  undefined2 local_1c [2];
  int local_18;
  ushort local_14;
  byte local_10;
  
  bVar2 = 0;
  local_14 = in_CX;
  local_10 = unaff_BL;
  sVar1 = FUN_00072829();
  if (sVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3568, "'Told You So' error! Cannot create door because there are too many fucking things allocated.") */
    local_18 = 0;
  }
  else {
    local_18 = FUN_0007290f();
    *(undefined1 *)(local_18 + 0x1f) = 9;
    *(undefined1 *)(local_18 + 0x1a) = extraout_DL;
    local_1c[0] = 0x180;
    local_20 = CONCAT22((short)((ulonglong)(uint)((int)(uint)in_EAX[1] >> 8) / 3) * 0x300 + 0x180,
                        (short)((ulonglong)(uint)((int)(uint)*in_EAX >> 8) / 3) * 0x300 + 0x180);
    *(undefined4 *)(local_18 + 0xd) = local_20;
    *(undefined2 *)(local_18 + 0x11 + (uint)bVar2 * -8) = local_1c[(uint)bVar2 * -4];
    *(undefined2 *)(local_18 + 2) = 0;
    *(undefined1 *)(local_18 + 7) = 2;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | 1;
    *(undefined2 *)(local_18 + 0x1d) = *(undefined2 *)(local_18 + 0x1b);
    *(undefined1 *)(local_18 + 6) = (undefined1)local_14;
    *(ushort *)(local_18 + 0x13) = (ushort)local_10;
    *(undefined4 *)(local_18 + 9) = DAT_002e8bee;
    *(undefined2 *)(local_18 + 0x5e) = *(undefined2 *)(extraout_ECX + 2);
    *(undefined1 *)(local_18 + 0x18) = param_1;
    FUN_00072d90();
    FUN_00050c38();
    FUN_000d8b7c((undefined1)local_14);
    FUN_0007c590();
    if ((uint)local_14 != (uint)DAT_002eb543) {
      *(short *)(&DAT_002e0ec4 + (uint)local_14 * 0x1508) =
           *(short *)(&DAT_002e0ec4 + (uint)local_14 * 0x1508) + 1;
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : dk_told_you_so_create_044b13 (Ghidra: FUN_00044b13)
 * Prototype: int dk_told_you_so_create_044b13(undefined1 param_1);
 * Address  : 0x44b13 (Size: 403 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * Naming   : String ''Told You So' error! Cannot create dead creature because the'
 * Callers  : 4 -> 0x43ac3, 0x808b8, 0xcee7c, 0xe2a14
 * Callees  : 9 -> 0x50c38, 0x6edb9, 0x72829, 0x7290f, 0x72d90, 0x8ccec, 0xb28e8, 0xdd2f0, 0xddad0
 * Strings  :
 *   - 0x165246: "inits.cpp"
 *   - 0x1651e0: "'Told You So' error! Cannot create dead creature because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_00044b13(undefined1 param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 *in_EAX;
  int iVar3;
  undefined1 extraout_CL;
  ushort in_DX;
  short unaff_BX;
  byte bVar4;
  undefined1 local_18;
  
  bVar4 = 0;
  sVar1 = FUN_00072829();
  if (sVar1 == 0) {
    FUN_000ddaf0();
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0007290f();
    *(undefined1 *)(iVar3 + 0x1f) = 4;
    local_18 = (undefined1)in_DX;
    *(undefined1 *)(iVar3 + 0x1a) = local_18;
    *(undefined2 *)(iVar3 + 0x1d) = *(undefined2 *)(iVar3 + 0x1b);
    *(undefined1 *)(iVar3 + 0x13) = param_1;
    *(undefined1 *)(iVar3 + 6) = extraout_CL;
    *(undefined2 *)(in_EAX + 1) = 0;
    *(undefined4 *)(iVar3 + 0xd) = *in_EAX;
    *(undefined2 *)(iVar3 + 0x11 + (uint)bVar4 * -8) =
         *(undefined2 *)(in_EAX + (uint)bVar4 * -2 + 1);
    uVar2 = FUN_000b28e8();
    *(undefined2 *)(iVar3 + 0x56) = 0;
    *(undefined2 *)(iVar3 + 0x58) = 0;
    *(undefined2 *)(iVar3 + 0x5a) = 0;
    *(undefined2 *)(iVar3 + 0x5c) = 0;
    *(undefined1 *)(iVar3 + 0x20) = 0x10;
    *(undefined1 *)(iVar3 + 0x23) = 0xcc;
    *(undefined1 *)(iVar3 + 0x24) = 0x33;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined2 *)(iVar3 + 0x11) = uVar2;
    *(byte *)(iVar3 + 0x25) = *(byte *)(iVar3 + 0x25) | 8;
    *(undefined4 *)(iVar3 + 9) = DAT_002e8bee;
    if ((&DAT_0018b70d)[(uint)in_DX * 0x10] != '\0') {
      *(byte *)(iVar3 + 0x4f) = *(byte *)(iVar3 + 0x4f) | 0x30;
    }
    FUN_00072d90();
    FUN_00050c38();
    if (unaff_BX == 2) {
      FUN_000dd2f0(0,0,2);
      FUN_0008ccec();
      *(undefined1 *)(iVar3 + 7) = 2;
    }
    else {
      *(undefined1 *)(iVar3 + 7) = 1;
      FUN_000dd2f0(0,0,2);
      FUN_0008ccec();
      sVar1 = FUN_000ddad0();
      *(short *)(iVar3 + 0x5e) = sVar1 * 3;
      FUN_0006edb9();
    }
    *(short *)(iVar3 + 0x46) =
         (short)((ulonglong)((uint)*(byte *)(iVar3 + 0x13) * 300) / 0x14) + 300;
  }
  return iVar3;
}

/******************************************************************************
 * Function : dk_told_you_so_create_044ca6 (Ghidra: FUN_00044ca6)
 * Prototype: int dk_told_you_so_create_044ca6(int param_1);
 * Address  : 0x44ca6 (Size: 156 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * Naming   : String ''Told You So' error! Cannot create effect generator because '
 * Callers  : 2 -> 0x2ab14, 0xd8cdc
 * Callees  : 4 -> 0x50c38, 0x72829, 0x7290f, 0x72d90
 * Strings  :
 *   - 0x1652b9: "inits.cpp"
 *   - 0x165250: "'Told You So' error! Cannot create effect generator because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_00044ca6(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_EAX;
  undefined1 in_CL;
  undefined1 extraout_CL;
  byte bVar4;
  undefined6 uVar5;
  
  bVar4 = 0;
  sVar2 = FUN_00072829();
  if (sVar2 == 0) {
    FUN_000ddaf0();
    iVar3 = 0;
  }
  else {
    uVar5 = FUN_0007290f();
    iVar3 = (int)uVar5;
    *(undefined1 *)(iVar3 + 0x1f) = 7;
    *(undefined1 *)(iVar3 + 0x1a) = extraout_CL;
    if (param_1 == -1) {
      *(undefined2 *)(iVar3 + 0x1d) = 0xffff;
    }
    else {
      *(short *)(iVar3 + 0x1d) = (short)param_1;
    }
    *(short *)(iVar3 + 0x13) = (short)((uint6)uVar5 >> 0x20);
    *(undefined1 *)(iVar3 + 6) = in_CL;
    *(undefined4 *)(iVar3 + 0xd) = *in_EAX;
    *(undefined2 *)(iVar3 + 0x11 + (uint)bVar4 * -8) =
         *(undefined2 *)(in_EAX + (uint)bVar4 * -2 + 1);
    uVar1 = DAT_002e8bee;
    *(undefined2 *)(iVar3 + 0x5e) = 0xffff;
    *(undefined4 *)(iVar3 + 9) = uVar1;
    *(byte *)(iVar3 + 0x4f) = *(byte *)(iVar3 + 0x4f) | 1;
    FUN_00072d90();
    FUN_00050c38();
  }
  return iVar3;
}

/******************************************************************************
 * Function : dk_told_you_so_create_044d42 (Ghidra: FUN_00044d42)
 * Prototype: int dk_told_you_so_create_044d42(void);
 * Address  : 0x44d42 (Size: 108 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:3706 ("'Told You So' error! Cannot create ambient sound because there are too many fucking things allocated.")
 * Naming   : String ''Told You So' error! Cannot create ambient sound because the'
 * Callers  : 2 -> 0x404f7, 0x43ac3
 * Callees  : 4 -> 0x72829, 0x7290f, 0x72d90, 0xddaf0
 * Strings  :
 *   - 0x165329: "inits.cpp"
 *   - 0x1652c3: "'Told You So' error! Cannot create ambient sound because there are too many fucking things allocated."
 ******************************************************************************/
int FUN_00044d42(void)

{
  short sVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined1 extraout_CL;
  undefined1 extraout_DL;
  byte bVar3;
  
  bVar3 = 0;
  sVar1 = FUN_00072829();
  if (sVar1 != 0) {
    iVar2 = FUN_0007290f();
    *(undefined1 *)(iVar2 + 0x1f) = 0xc;
    *(undefined1 *)(iVar2 + 0x1a) = extraout_CL;
    *(undefined2 *)(iVar2 + 0x1d) = *(undefined2 *)(iVar2 + 0x1b);
    *(undefined4 *)(iVar2 + 0xd) = *in_EAX;
    *(undefined2 *)(iVar2 + 0x11 + (uint)bVar3 * -8) =
         *(undefined2 *)(in_EAX + (uint)bVar3 * -2 + 1);
    *(undefined1 *)(iVar2 + 6) = extraout_DL;
    *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) | 1;
    FUN_00072d90();
    return iVar2;
  }
  FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 3706, "'Told You So' error! Cannot create ambient sound because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : sub_044dae (Ghidra: FUN_00044dae)
 * Prototype: int sub_044dae(void);
 * Address  : 0x44dae (Size: 193 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x43ac3, 0x4ee2c, 0xdf760
 * Callees  : 4 -> 0x50c38, 0x72829, 0x7290f, 0x72d90
 ******************************************************************************/
int FUN_00044dae(void)

{
  short sVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined1 in_DL;
  ushort unaff_BX;
  byte bVar3;
  undefined1 local_18;
  
  bVar3 = 0;
  sVar1 = FUN_00072829();
  if (sVar1 != 0) {
    iVar2 = FUN_0007290f();
    *(undefined1 *)(iVar2 + 0x1f) = 0xd;
    *(undefined2 *)(iVar2 + 0x1d) = *(undefined2 *)(iVar2 + 0x1b);
    *(undefined1 *)(iVar2 + 0x1a) = 0;
    local_18 = (undefined1)unaff_BX;
    *(undefined4 *)(iVar2 + 0xd) = *extraout_ECX;
    *(undefined2 *)(iVar2 + 0x11 + (uint)bVar3 * -8) =
         *(undefined2 *)(extraout_ECX + (uint)bVar3 * -2 + 1);
    *(undefined1 *)(iVar2 + 6) = local_18;
    *(undefined4 *)(iVar2 + 9) = DAT_002e8bee;
    *(undefined2 *)(iVar2 + 0x15) = DAT_002eb049;
    *(undefined1 *)(iVar2 + 0x13) = *(undefined1 *)((int)extraout_ECX + 1);
    *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)((int)extraout_ECX + 3);
    *(undefined1 *)(iVar2 + 0x17) = in_DL;
    *(undefined2 *)(iVar2 + 0x5e) = DAT_002eb049;
    if ((uint)unaff_BX != (uint)DAT_002eb543) {
      *(uint *)(&DAT_002e1429 + (uint)unaff_BX * 0x1508) = (uint)*(ushort *)(iVar2 + 0x15);
    }
    FUN_00072d90();
    FUN_00050c38();
    return iVar2;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_044ead (Ghidra: FUN_00044ead)
 * Prototype: undefined4 sub_044ead(void);
 * Address  : 0x44ead (Size: 9 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00044ead(void)

{
  return 0;
}

/******************************************************************************
 * Function : sub_044eb6 (Ghidra: FUN_00044eb6)
 * Prototype: void sub_044eb6(void);
 * Address  : 0x44eb6 (Size: 125 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2c833, 0x2ca74, 0x6a412
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00044eb6(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = &DAT_00233a03;
  puVar1 = &DAT_001ae9fc;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    *puVar1 = puVar2;
    puVar2 = puVar2 + 0x6b;
    puVar1 = puVar1 + 1;
  } while (iVar4 < 0x800);
  _DAT_001b09fc = &DAT_00269203;
  puVar2 = &DAT_00203203;
  puVar1 = &DAT_001b0a00;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    *puVar1 = puVar2;
    puVar2 = puVar2 + 0x308;
    puVar1 = puVar1 + 1;
  } while (iVar4 < 0x100);
  _DAT_001b0e00 = &DAT_00233a03;
  puVar3 = &DAT_0019e973;
  puVar1 = &DAT_001b0e04;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    *puVar1 = puVar3;
    puVar3 = puVar3 + 6;
    puVar1 = puVar1 + 1;
  } while (iVar4 < 0x800);
  _DAT_001b2e04 = &DAT_001aa973;
  return;
}

/******************************************************************************
 * Function : sub_044f33 (Ghidra: FUN_00044f33)
 * Prototype: void sub_044f33(void);
 * Address  : 0x44f33 (Size: 365 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe26dc
 * Callees  : 3 -> 0x4c2eb, 0x8ccec, 0xddad0
 ******************************************************************************/
void FUN_00044f33(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  short sVar7;
  int in_EAX;
  int iVar8;
  uint uVar9;
  int in_EDX;
  int iVar10;
  
  iVar8 = in_EDX * 0x4e;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar9 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar2 = *(ushort *)(&DAT_00189942 + iVar8);
  uVar3 = *(ushort *)(&DAT_00189944 + iVar8);
  uVar4 = *(ushort *)(&DAT_00189942 + iVar8);
  DAT_002e8bf6 = uVar9 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar5 = *(undefined2 *)(&DAT_0018993f + iVar8);
  *(char *)(in_EAX + 0x1a) = (char)in_EDX;
  iVar10 = iVar8;
  FUN_0008ccec((int)(char)(&DAT_00189941)[iVar8],0,2,
               (uint)uVar4 + uVar9 % (((uint)uVar3 - (uint)uVar2) + 1),iVar8,uVar5);
  bVar1 = (&DAT_00189947)[iVar10];
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xfd;
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | (bVar1 & 1) * '\x02';
  bVar1 = (&DAT_00189948)[iVar10];
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xcf;
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | (bVar1 & 3) << 4;
  *(undefined *)(in_EAX + 0x20) = (&DAT_0018994c)[iVar10];
  *(undefined *)(in_EAX + 0x23) = (&DAT_0018994e)[iVar10];
  *(undefined *)(in_EAX + 0x24) = (&DAT_00189950)[iVar10];
  if (*(short *)(&DAT_00189937 + iVar8) < 1) {
    sVar7 = FUN_000ddad0();
  }
  else {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    sVar7 = *(short *)(&DAT_00189937 + iVar8) +
            (short)(DAT_002e8bf6 %
                   (((int)*(short *)(&DAT_00189939 + iVar8) - (int)*(short *)(&DAT_00189937 + iVar8)
                    ) + 1U));
  }
  *(short *)(in_EAX + 0x5e) = sVar7;
  uVar6 = FUN_0004c2eb();
  *(undefined1 *)(in_EAX + 0x49) = uVar6;
  return;
}

/******************************************************************************
 * Function : sub_0450a0 (Ghidra: FUN_000450a0)
 * Prototype: void sub_0450a0(void);
 * Address  : 0x450a0 (Size: 131 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 1 -> 0x45123
 ******************************************************************************/
void FUN_000450a0(void)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  short local_28;
  short local_24;
  undefined1 local_20;
  undefined1 local_1c;
  
  DAT_002ee9c1._1_1_ = 0;
  DAT_002ee9c1._0_1_ = 0;
  DAT_002ee9c1._2_2_ = 0;
  iVar4 = 1;
  puVar3 = &DAT_002ee9c5;
  sVar1 = -1;
  sVar2 = -1;
  do {
    local_20 = (undefined1)sVar1;
    *(undefined1 *)((int)puVar3 + 1) = local_20;
    local_1c = (undefined1)sVar2;
    *(undefined1 *)puVar3 = local_1c;
    *(short *)((int)puVar3 + 2) = sVar1 + sVar2 * 0x100;
    FUN_00045123();
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    sVar1 = local_28;
    sVar2 = local_24;
  } while (iVar4 < 0x9c4);
  return;
}

/******************************************************************************
 * Function : sub_045123 (Ghidra: FUN_00045123)
 * Prototype: void sub_045123(void);
 * Address  : 0x45123 (Size: 117 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x450a0
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_00045123(void)

{
  int in_EAX;
  int *in_ECX;
  int *extraout_ECX;
  int in_EDX;
  int iVar1;
  int *unaff_EBX;
  longlong lVar2;
  
  if ((in_EAX < 0) && (in_EDX + -1 == in_EAX)) {
    iVar1 = in_EDX + -2;
    *unaff_EBX = in_EAX + -1;
    goto LAB_00045162;
  }
  if (in_EAX == in_EDX) {
    *in_ECX = in_EDX;
    if (-1 < in_EDX) {
      *unaff_EBX = in_EDX + -1;
      return;
    }
    *unaff_EBX = in_EDX + 1;
    return;
  }
  if (in_EAX == -in_EDX) {
    *unaff_EBX = -in_EDX;
    if (-1 < in_EDX) {
LAB_00045167:
      iVar1 = in_EDX + -1;
      goto LAB_00045162;
    }
  }
  else {
    iVar1 = FUN_000e69fc();
    lVar2 = FUN_000e69fc();
    in_EDX = (int)((ulonglong)lVar2 >> 0x20);
    if (iVar1 <= (int)lVar2) {
      *extraout_ECX = in_EDX;
      if (-1 < lVar2) {
        *unaff_EBX = in_EAX + -1;
        return;
      }
      *unaff_EBX = in_EAX + 1;
      return;
    }
    *unaff_EBX = in_EAX;
    in_ECX = extraout_ECX;
    if (in_EAX < 0) goto LAB_00045167;
  }
  iVar1 = in_EDX + 1;
LAB_00045162:
  *in_ECX = iVar1;
  return;
}

/******************************************************************************
 * Function : dk_couldn_get_creature_score_045198 (Ghidra: FUN_00045198)
 * Prototype: void dk_couldn_get_creature_score_045198(void);
 * Address  : 0x45198 (Size: 508 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:4116; inits.cpp:4144; inits.cpp:4160 ("CREATURES HAVE NO SCORE")
 * Naming   : String 'COULDN'T GET A CREATURE SCORE (%d)'
 * Callers  : 1 -> 0x401ec
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x165356: "inits.cpp"
 *   - 0x16538c: "inits.cpp"
 *   - 0x1653ae: "inits.cpp"
 *   - 0x165333: "COULDN'T GET A CREATURE SCORE (%d)"
 *   - 0x165360: "COULDN'T GET A CREATURE SCORE (%d) LEV (%d)"
 *   - 0x165396: "CREATURES HAVE NO SCORE"
 ******************************************************************************/
void FUN_00045198(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  uint uVar3;
  uint uVar4;
  undefined *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  local_20 = 0;
  puVar2 = &DAT_002e910d;
  uVar4 = 0;
  do {
    uVar3 = (uint)(byte)puVar2[0xb] + ((uint)(byte)puVar2[0xb] * 0x13b) / 100 +
            (uint)(byte)puVar2[0xd] + ((uint)(byte)puVar2[0xd] * 0x13b) / 100 +
            (uint)(byte)puVar2[0xf] + ((uint)(byte)puVar2[0xf] * 0x13b) / 100 +
            (uint)(byte)puVar2[0xc] + ((uint)(byte)puVar2[0xc] * 0x13b) / 100 +
            (int)*(short *)(puVar2 + 7) + (*(short *)(puVar2 + 7) * 0x13b) / 100;
    if (((uVar3 == 0) && (uVar4 != 0)) && (uVar4 != 0x1f)) {
      FUN_000e7714(&DAT_0019cbac,s_COULDN_T_GET_A_CREATURE_SCORE____00165333,uVar4);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4116, g_log_buf) */
      puVar2 = extraout_ECX;
    }
    else if (local_20 < uVar3) {
      local_20 = uVar3;
    }
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 0xe6;
  } while (uVar4 < 0x20);
  if (local_20 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4144, g_log_buf) */
  }
  else {
    uVar4 = 0;
    local_2c = &DAT_002e910d;
    local_28 = 0;
    do {
      uVar3 = 0;
      local_24 = local_28;
      puVar2 = local_2c;
      do {
        uVar1 = (ulonglong)
                (((uint)(byte)puVar2[0xb] + ((byte)puVar2[0xb] * uVar3 * 0x23) / 100 +
                  (uint)(byte)puVar2[0xd] + ((byte)puVar2[0xd] * uVar3 * 0x23) / 100 +
                  (uint)(byte)puVar2[0xf] + ((byte)puVar2[0xf] * uVar3 * 0x23) / 100 +
                  (uint)(byte)puVar2[0xc] + ((byte)puVar2[0xc] * uVar3 * 0x23) / 100 +
                  (int)*(short *)(puVar2 + 7) + ((int)*(short *)(puVar2 + 7) * uVar3 * 0x23) / 100)
                * 200) / (ulonglong)local_20;
        (&DAT_002ebaf8)[local_24] = (char)uVar1;
        if ((((int)uVar1 == 0) && (uVar4 != 0)) && (uVar4 != 0x1f)) {
          FUN_000e7714(&DAT_0019cbac,s_COULDN_T_GET_A_CREATURE_SCORE____00165360,uVar4,uVar3);
          FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4160, "CREATURES HAVE NO SCORE") */
          puVar2 = extraout_ECX_00;
        }
        uVar3 = uVar3 + 1;
        local_24 = local_24 + 1;
      } while (uVar3 < 10);
      local_28 = local_28 + 10;
      uVar4 = uVar4 + 1;
      local_2c = local_2c + 0xe6;
    } while (uVar4 < 0x20);
  }
  return;
}

/******************************************************************************
 * Function : sub_045394 (Ghidra: FUN_00045394)
 * Prototype: void sub_045394(void);
 * Address  : 0x45394 (Size: 73 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x453dd, 0x64b77
 * Callees  : 3 -> 0x63b6d, 0xcb33c, 0xd0f50
 ******************************************************************************/
void FUN_00045394(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  if (((((int)*(char *)(in_EAX + 6) != (uint)DAT_002eb543) && (iVar2 = FUN_000d0f50(), iVar2 != 0))
      && ((sVar1 = *(short *)(iVar2 + 10), sVar1 == 4 || ((sVar1 == 0x10 || (sVar1 == 5)))))) &&
     (sVar1 = FUN_000cb33c(), sVar1 != 0)) {
    return;
  }
  FUN_00063b6d();
  return;
}

/******************************************************************************
 * Function : sub_0453dd (Ghidra: FUN_000453dd)
 * Prototype: void sub_0453dd(void);
 * Address  : 0x453dd (Size: 37 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x40832
 * Callees  : 1 -> 0x45394
 ******************************************************************************/
void FUN_000453dd(void)

{
  int extraout_EDX;
  uint uVar1;
  
  uVar1 = DAT_002e6eb6;
  while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]) {
    FUN_00045394();
    uVar1 = (uint)*(ushort *)(extraout_EDX + 0x67);
  }
  return;
}

/******************************************************************************
 * Function : sub_045402 (Ghidra: FUN_00045402)
 * Prototype: void sub_045402(void);
 * Address  : 0x45402 (Size: 290 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2ca74
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00045402(void)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 5;
    *(byte *)((int)&DAT_00279203 + iVar3) = *(byte *)((int)&DAT_00279203 + iVar3) & 0x7b;
    iVar3 = iVar2;
  } while (iVar2 != 0x50000);
  iVar3 = (in_EAX & 0xff) * 0x1508;
  uVar8 = (uint)*(ushort *)(&DAT_002e1080 + iVar3);
  pbVar6 = &DAT_002e1094 + iVar3;
  do {
    uVar8 = uVar8 - 1;
    if ((int)uVar8 < 0) {
      return;
    }
    uVar5 = (uint)*(ushort *)(pbVar6 + 1) % 0x100;
    iVar3 = (int)(uint)*(ushort *)(pbVar6 + 1) >> 8;
    bVar1 = *pbVar6;
    if (bVar1 < 2) {
      bVar9 = bVar1 == 1;
LAB_0004550b:
      if (bVar9) {
        iVar2 = iVar3 + -1;
        iVar7 = iVar2 * 0x500;
        for (; iVar2 <= iVar3 + 1; iVar2 = iVar2 + 1) {
          for (iVar4 = (uVar5 - 1) * 5 + iVar7; iVar4 <= (int)((uVar5 + 1) * 5 + iVar7);
              iVar4 = iVar4 + 5) {
            *(byte *)((int)&DAT_00279203 + iVar4) = *(byte *)((int)&DAT_00279203 + iVar4) | 4;
          }
          iVar7 = iVar7 + 0x500;
        }
      }
    }
    else {
      if (2 < bVar1) {
        bVar9 = bVar1 == 3;
        goto LAB_0004550b;
      }
      iVar2 = iVar3 + -1;
      iVar7 = iVar2 * 0x500;
      for (; iVar2 <= iVar3 + 1; iVar2 = iVar2 + 1) {
        for (iVar4 = (uVar5 - 1) * 5 + iVar7; iVar4 <= (int)((uVar5 + 1) * 5 + iVar7);
            iVar4 = iVar4 + 5) {
          *(byte *)((int)&DAT_00279203 + iVar4) = *(byte *)((int)&DAT_00279203 + iVar4) | 0x80;
        }
        iVar7 = iVar7 + 0x500;
      }
    }
    pbVar6 = pbVar6 + 3;
  } while( true );
}

/******************************************************************************
 * Function : dk_xls_creature_lairsize_but_045524 (Ghidra: FUN_00045524)
 * Prototype: void dk_xls_creature_lairsize_but_045524(void);
 * Address  : 0x45524 (Size: 615 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:4338; inits.cpp:4345; inits.cpp:4351; inits.cpp:4357; inits.cpp:4363
 * Naming   : String 'XLS - Creature:%d No LairSize But Heal Requirment - Fixing'
 * Callers  : 2 -> 0x401ec, 0x40832
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1653f3: "inits.cpp"
 *   - 0x165439: "inits.cpp"
 *   - 0x16547f: "inits.cpp"
 *   - 0x1654c4: "inits.cpp"
 *   - 0x1654f8: "inits.cpp"
 *   - 0x16553a: "inits.cpp"
 *   - 0x16556f: "inits.cpp"
 *   - 0x1655b7: "inits.cpp"
 *   - 0x165601: "inits.cpp"
 *   - 0x1653b8: "XLS - Creature:%d No LairSize But Heal Requirment - Fixing"
 *   - 0x1653fd: "XLS - Creature:%d Heal Requirment > Heal Threshold - Fixing"
 *   - 0x165443: "XLS - Creature:%d HungerRate > 0 & Hunger Fill = 0 - Fixing"
 *   - 0x165489: "XLS - Creature:%d SleepSlab & SleepExperience = 0 - Fixing"
 *   - 0x1654ce: "XLS - Creature:%d Invalid GrowUp - Fixing"
 *   - 0x165502: "XLS - Creature:%d GrowUp & GrowUpLevel invalid - Fixing"
 *   - 0x165544: "XLS - Creature:%d Rebirth Invalid - Fixing"
 *   - 0x1655c1: "XLS - Creature:%d Instance Level For Not Used Spell %d - Fixing"
 *   - 0x165579: "XLS - Creature:%d Instance Level For Slot %d Invalid - Fixing"
 ******************************************************************************/
void FUN_00045524(void)

{
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *puVar1;
  undefined *extraout_ECX_07;
  undefined *puVar2;
  int iVar3;
  int local_1c;
  
  puVar2 = &DAT_002e910d;
  iVar3 = 0;
  do {
    puVar1 = puVar2;
    if ((puVar2[0x17] == '\0') && (puVar2[9] != '\0')) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_No_LairSize_Bu_001653b8,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4338, g_log_buf) */
      puVar2[10] = 0;
      puVar2[9] = puVar2[10];
      puVar1 = extraout_ECX;
    }
    if ((byte)puVar1[10] < (byte)puVar1[9]) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_Heal_Requirmen_001653fd,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4345, g_log_buf) */
      extraout_ECX_00[10] = extraout_ECX_00[9];
      puVar1 = extraout_ECX_00;
    }
    if ((*(short *)(puVar1 + 0x12) != 0) && (puVar1[0x14] == '\0')) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_HungerRate_>_0_00165443,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4351, g_log_buf) */
      extraout_ECX_01[0x14] = 1;
      puVar1 = extraout_ECX_01;
    }
    if ((puVar1[0x19] != '\0') && (puVar1[0x1a] == '\0')) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_SleepSlab___Sl_00165489,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4357, g_log_buf) */
      extraout_ECX_02[0x19] = 0;
      puVar1 = extraout_ECX_02;
    }
    if (0x1e < *(ushort *)(puVar1 + 0x4f)) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_Invalid_GrowUp_001654ce,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4363, g_log_buf) */
      *(undefined2 *)(extraout_ECX_03 + 0x4f) = 0;
      puVar1 = extraout_ECX_03;
    }
    if ((*(short *)(puVar1 + 0x4f) != 0) && ((puVar1[0x51] == 0 || (10 < (byte)puVar1[0x51])))) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_GrowUp___GrowU_00165502,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4370, g_log_buf) */
      extraout_ECX_04[0x51] = 1;
      puVar1 = extraout_ECX_04;
    }
    if (10 < (byte)puVar1[0xd7]) {
      FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_Rebirth_Invali_00165544,iVar3);
      FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4376, g_log_buf) */
      extraout_ECX_05[0xd7] = 0;
      puVar1 = extraout_ECX_05;
    }
    local_1c = 0;
    do {
      if (puVar1[0x80] == '\0') {
        if ((puVar1[0x8a] != 0) && ((byte)puVar1[0x8a] < 0xb)) {
          FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_Instance_Level_001655c1,iVar3,local_1c + 1)
          ;
          FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4394, g_log_buf) */
          extraout_ECX_06[0x8a] = 0;
          puVar1 = extraout_ECX_06;
        }
      }
      else if ((puVar1[0x8a] == 0) || (10 < (byte)puVar1[0x8a])) {
        FUN_000e7714(&DAT_0019cbac,s_XLS___Creature__d_Instance_Level_00165579,iVar3,local_1c + 1);
        FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4387, g_log_buf) */
        extraout_ECX_07[0x8a] = 1;
        puVar1 = extraout_ECX_07;
      }
      local_1c = local_1c + 1;
      puVar1 = puVar1 + 1;
    } while (local_1c < 10);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xe6;
  } while (iVar3 < 0x20);
  return;
}

/******************************************************************************
 * Function : sub_04578b (Ghidra: FUN_0004578b)
 * Prototype: void sub_04578b(void);
 * Address  : 0x4578b (Size: 50 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_0004578b(void)

{
  byte *pbVar1;
  
  FUN_000e6a10();
  for (pbVar1 = &DAT_001915aa; *pbVar1 != 0; pbVar1 = pbVar1 + 5) {
    *(undefined4 *)(&DAT_003772e4 + (uint)*pbVar1 * 4) = *(undefined4 *)(pbVar1 + 1);
  }
  return;
}

/******************************************************************************
 * Function : dk_wlb_file_muddled_fixing_0457bd (Ghidra: FUN_000457bd)
 * Prototype: void dk_wlb_file_muddled_fixing_0457bd(void);
 * Address  : 0x457bd (Size: 1019 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp:4677 ("WLB file is muddled - Fixing")
 * Naming   : String 'WLB file is muddled - Fixing'
 * Callers  : 1 -> 0x2d168
 * Callees  : 9 -> 0x150f0, 0x2c3d0, 0xc856c, 0xcaa90, 0xcb144, 0xdd920, 0xddaf0, 0xe7714, 0xe984c
 * Strings  :
 *   - 0x165640: "inits.cpp"
 *   - 0x16560b: "LEVELS"
 *   - 0x165614: "%s\map%05d.wlb"
 *   - 0x165623: "WLB file is muddled - Fixing"
 ******************************************************************************/
void FUN_000457bd(void)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  byte bVar6;
  int extraout_ECX;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 local_d8 [152];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar7 = 0;
  local_2c = 0;
  local_38 = 0;
  local_3c = 0;
  do {
    local_40 = local_2c * 3;
    local_34 = 0;
    local_20 = 0;
    local_28 = local_38;
    iVar9 = local_3c;
    do {
      local_24 = local_34 * 3;
      local_1c = local_40;
      bVar4 = (&DAT_002d33c5)[iVar9];
      uVar1 = CONCAT11((&DAT_002d33ca)
                       [(*(int *)((int)&DAT_0019033b + local_28) * 0x55 +
                        *(int *)((int)&DAT_0019033b + local_20)) * 6],bVar4) & 0x7ff;
      bVar6 = (byte)uVar1;
      if (bVar4 < 0x1c) {
        if (bVar4 < 0x14) {
          if (bVar6 < 0x10) {
            if (bVar6 != 0xe) goto LAB_00045a10;
          }
          else if (0x10 < bVar6) {
            if (bVar6 != 0x12) goto LAB_00045a10;
            local_30 = (uint)(uVar1 >> 8);
          }
        }
        else if (0x14 < bVar4) {
          if (bVar6 < 0x18) {
            if (bVar6 == 0x16) goto LAB_00045918;
          }
          else if ((bVar6 < 0x19) || (bVar6 == 0x1a)) goto LAB_00045918;
          goto LAB_00045a10;
        }
LAB_00045918:
        iVar7 = FUN_000caa90();
      }
      else {
        if (bVar4 < 0x1d) goto LAB_00045918;
        if (0x23 < bVar6) {
          if (0x24 < bVar6) {
            if (bVar6 < 0x28) {
              if (bVar6 == 0x26) goto LAB_00045918;
            }
            else if ((bVar6 < 0x29) || ((0x32 < bVar6 && ((bVar6 < 0x34 || (bVar6 == 0x35))))))
            goto LAB_00045918;
            goto LAB_00045a10;
          }
          goto LAB_00045918;
        }
        if (bVar6 < 0x20) {
          if (bVar6 == 0x1e) goto LAB_00045918;
        }
        else if ((bVar6 < 0x21) || (bVar6 == 0x22)) goto LAB_00045918;
      }
LAB_00045a10:
      if (iVar7 != 0) {
        FUN_000c856c();
        FUN_000cb144();
      }
      local_20 = local_20 + 0xc;
      local_34 = local_34 + 1;
      iVar9 = iVar9 + 6;
    } while (local_34 < 0x55);
    local_38 = local_38 + 0xc;
    local_2c = local_2c + 1;
    local_3c = local_3c + 0x1fe;
    if (0x54 < local_2c) {
      FUN_000dd920(in_EAX);
      uVar5 = FUN_000dd920();
      FUN_000e7714(local_d8,s__s_map_05d_wlb_00165614,uVar5);
      FUN_000150f0();
      bVar2 = false;
      cVar3 = FUN_0002c3d0();
      if ((cVar3 != '\0') && (iVar7 = FUN_000e984c(), iVar7 == 0x1c39)) {
        bVar2 = true;
        iVar7 = 0;
        pbVar8 = DAT_00199228;
        do {
          bVar4 = *pbVar8;
          (&DAT_002d33ca)[iVar7] = (&DAT_002d33ca)[iVar7] & 0xe7;
          (&DAT_002d33ca)[iVar7] = (&DAT_002d33ca)[iVar7] | (bVar4 & 3) << 3;
          pbVar8 = pbVar8 + 1;
          if ((((((&DAT_002d33ca)[iVar7] & 0x1f) >> 3 != 2) || ((&DAT_002d33c5)[iVar7] != '\r')) &&
              ((((&DAT_002d33ca)[iVar7] & 0x1f) >> 3 != 1 || ((&DAT_002d33c5)[iVar7] != '\f')))) &&
             (((bVar4 = ((&DAT_002d33ca)[iVar7] & 0x1f) >> 3, bVar4 == 2 || (bVar4 == 1)) &&
              ((&DAT_002d33c5)[iVar7] != '3')))) {
            FUN_000ddaf0(); /* LbErrorLog("inits.cpp", line 4677, "WLB file is muddled - Fixing") */
            (&DAT_002d33ca)[extraout_ECX] = (&DAT_002d33ca)[extraout_ECX] & 0xe7;
            iVar7 = extraout_ECX;
          }
          iVar7 = iVar7 + 6;
        } while (iVar7 != 0xa956);
      }
      if (!bVar2) {
        bVar4 = DAT_001922f3 & 3;
        iVar7 = 0;
        do {
          if ((byte)(&DAT_002d33c5)[iVar7] == 0x33) {
            (&DAT_002d33ca)[iVar7] = (&DAT_002d33ca)[iVar7] & 0xe7;
            (&DAT_002d33ca)[iVar7] = (&DAT_002d33ca)[iVar7] | bVar4 << 3;
          }
          else {
            bVar6 = (&DAT_001921d5)[(uint)(byte)(&DAT_002d33c5)[iVar7] * 0x16];
            (&DAT_002d33ca)[iVar7] = (&DAT_002d33ca)[iVar7] & 0xe7;
            (&DAT_002d33ca)[iVar7] = (&DAT_002d33ca)[iVar7] | (bVar6 & 3) << 3;
          }
          iVar7 = iVar7 + 6;
        } while (iVar7 != 0xa956);
      }
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_045bb8 (Ghidra: FUN_00045bb8)
 * Prototype: void sub_045bb8(void);
 * Address  : 0x45bb8 (Size: 229 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6b4c7
 * Callees  : 8 -> 0x69c2c, 0x6f4c8, 0x6f51e, 0x6f541, 0xf1aec, 0xf1b38, 0xf2188, 0xf27b7
 * Strings  :
 *   - 0x16564a: "SOUND"
 *   - 0x165650: "SOUND"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00045bb8(void)

{
  char cVar1;
  int iVar2;
  
  if (DAT_00334019 == 0) {
    FUN_000f1aec();
    _DAT_002ed420 = s_SOUND_0016564a;
    _DAT_002ed428 = s_SOUND_00165650;
    _DAT_002ed42e = 3;
    DAT_002ed432 = 1;
    DAT_002ed431 = 1;
    _DAT_002ed42c = 0x656;
    iVar2 = FUN_00069c2c();
    if (iVar2 < 0x100000) {
      DAT_002ed430 = 10;
    }
    else {
      DAT_002ed430 = 0x10;
    }
    DAT_002ed433 = 0;
    DAT_002ed435 = 0;
    DAT_002ed434 = 1;
    DAT_002ed438 = 1;
    DAT_002ed436 = (DAT_0019d0ba & 0x40) != 0;
    DAT_002ed439 = 1;
    DAT_002ed437 = 0;
    FUN_000f1b38();
    FUN_000f2188();
    cVar1 = FUN_000f27b7();
    if (cVar1 != '\0') {
      FUN_0006f4c8();
      FUN_0006f541();
      FUN_0006f51e();
      return;
    }
    DAT_00334019 = 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_045ca0 (Ghidra: FUN_00045ca0)
 * Prototype: void sub_045ca0(void);
 * Address  : 0x45ca0 (Size: 33 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xdc150
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00045ca0(void)

{
  _DAT_003482b1 = DAT_003d9864 * (uint)DAT_0019cba6;
  _DAT_003482b5 = FUN_000dc150();
  return;
}

/******************************************************************************
 * Function : sub_045cc1 (Ghidra: FUN_00045cc1)
 * Prototype: void sub_045cc1(void);
 * Address  : 0x45cc1 (Size: 250 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36ff4
 * Callees  : 3 -> 0x45f23, 0x462a3, 0x49af1
 ******************************************************************************/
void FUN_00045cc1(void)

{
  int iVar1;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  DAT_00334015 = 0;
  FUN_00049af1();
  if ((DAT_003db526 != '\0') || (DAT_003db532 != '\0')) {
    DAT_00334015 = DAT_00334015 | 1;
  }
  if ((DAT_003db519 != '\0') || (DAT_003db599 != '\0')) {
    DAT_00334015 = DAT_00334015 | 2;
  }
  if ((DAT_003db534 != '\0') || (DAT_003db5b4 != '\0')) {
    DAT_00334015 = DAT_00334015 | 4;
  }
  if ((DAT_0034cf1f != 0) && (DAT_003db5fc != 0)) {
    (&DAT_003db4fc)[DAT_003db5fc] = 0;
  }
  iVar1 = FUN_00045f23();
  *extraout_ECX = *extraout_ECX & 0xdf;
  *extraout_ECX = *extraout_ECX | (iVar1 != 0) << 5;
  iVar1 = FUN_00045f23();
  *extraout_ECX_00 = *extraout_ECX_00 & 0xbf;
  *extraout_ECX_00 = *extraout_ECX_00 | (iVar1 != 0) << 6;
  FUN_000462a3();
  return;
}

/******************************************************************************
 * Function : sub_045dbb (Ghidra: FUN_00045dbb)
 * Prototype: undefined4 sub_045dbb(void);
 * Address  : 0x45dbb (Size: 298 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x30996
 * Callees  : 1 -> 0x45ee5
 ******************************************************************************/
undefined4 FUN_00045dbb(void)

{
  int in_EAX;
  int iVar1;
  undefined1 extraout_CL;
  int in_ECX;
  int in_EDX;
  char cVar2;
  int unaff_EBX;
  undefined1 local_c;
  
  if (*(int *)(&DAT_003772e4 + in_EDX * 4) == 0) {
    return 0;
  }
  if ((in_EAX == 4) || (in_EAX == 5)) {
    if ((unaff_EBX == 0) && (in_ECX == 0)) {
      return 0;
    }
    iVar1 = (in_EAX == 4) + 4;
LAB_00045dfe:
    if (unaff_EBX == 0) {
      cVar2 = '\x1d';
    }
    else {
      cVar2 = '*';
    }
    if ((&DAT_002ee8e0)[iVar1 * 2] != cVar2) {
      if (unaff_EBX == 0) {
        if (in_ECX != 0) {
          (&DAT_002ee8e0)[in_EAX * 2] = 0x1d;
        }
      }
      else {
        (&DAT_002ee8e0)[in_EAX * 2] = 0x2a;
      }
      (&DAT_002ee8e1)[in_EAX * 2] = 0;
    }
  }
  else {
    local_c = (undefined1)in_EDX;
    if ((in_EAX == 0x1b) || (in_EAX == 0x1c)) {
      if ((unaff_EBX != 0) || (in_ECX != 0)) {
        iVar1 = (in_EAX == 0x1b) + 0x1b;
        goto LAB_00045dfe;
      }
      iVar1 = FUN_00045ee5();
      if (iVar1 != 0) {
        return 0;
      }
      (&DAT_002ee8e1)[in_EAX * 2] = 0;
    }
    else {
      if (in_EDX == 0x2a) {
        return 0;
      }
      if (in_EDX == 0x36) {
        return 0;
      }
      if (in_EDX == 0x1d) {
        return 0;
      }
      if (in_EDX == 0x9d) {
        return 0;
      }
      if (1 < (uint)(unaff_EBX + in_ECX)) {
        return 0;
      }
      iVar1 = FUN_00045ee5();
      if (iVar1 != 0) {
        return 0;
      }
      (&DAT_002ee8e1)[in_EAX * 2] = extraout_CL;
    }
    (&DAT_002ee8e0)[in_EAX * 2] = local_c;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_045ee5 (Ghidra: FUN_00045ee5)
 * Prototype: undefined4 sub_045ee5(void);
 * Address  : 0x45ee5 (Size: 62 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45dbb
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00045ee5(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  int iVar2;
  uint unaff_EBX;
  
  iVar2 = 0;
  iVar1 = 0;
  while( true ) {
    if (0x1f < iVar2) {
      return 0;
    }
    if (((in_EAX != iVar2) && (in_EDX == (byte)(&DAT_002ee8e0)[iVar1])) &&
       (unaff_EBX == (byte)(&DAT_002ee8e1)[iVar1])) break;
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_045f23 (Ghidra: FUN_00045f23)
 * Prototype: uint sub_045f23(void);
 * Address  : 0x45f23 (Size: 150 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x45cc1, 0x462a3, 0x46892, 0x46d5a, 0x47237, 0x473e1, 0x47755, 0x47bcd, 0x47ea3, 0x49426 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00045f23(void)

{
  int in_EAX;
  uint uVar1;
  uint *in_EDX;
  int unaff_EBX;
  
  if (in_EDX != (uint *)0x0) {
    *in_EDX = (uint)(byte)(&DAT_002ee8e0)[in_EAX * 2];
  }
  if ((((in_EAX == 4) || (in_EAX == 5)) || (in_EAX == 0x1b)) || (in_EAX == 0x1c)) {
    uVar1 = (uint)(byte)(&DAT_002ee8e0)[in_EAX * 2];
    if ((uVar1 == 0x2a) || (uVar1 == 0x36)) {
      return DAT_00334015 & 1;
    }
    if ((uVar1 == 0x1d) || (uVar1 == 0x9d)) {
      return DAT_00334015 & 2;
    }
    if ((uVar1 == 0x38) || (uVar1 == 0xb8)) {
      return DAT_00334015 & 4;
    }
  }
  else {
    if ((unaff_EBX == 0) && ((byte)(&DAT_002ee8e1)[in_EAX * 2] != DAT_00334015)) {
      return 0;
    }
    uVar1 = (uint)(byte)(&DAT_002ee8e0)[in_EAX * 2];
  }
  return (uint)(byte)(&DAT_003db4fc)[uVar1];
}

/******************************************************************************
 * Function : sub_045fb9 (Ghidra: FUN_00045fb9)
 * Prototype: undefined1 sub_045fb9(void);
 * Address  : 0x45fb9 (Size: 24 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x47755, 0x47bcd, 0x47fe2, 0x480aa, 0x49343, 0x49426
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_00045fb9(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((in_EDX != -1) && (in_EDX != DAT_00334015)) {
    return 0;
  }
  return (&DAT_003db4fc)[in_EAX];
}

/******************************************************************************
 * Function : sub_045fd1 (Ghidra: FUN_00045fd1)
 * Prototype: uint sub_045fd1(void);
 * Address  : 0x45fd1 (Size: 698 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x46701
 * Callees  : 1 -> 0x85598
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0004624f) */
/* WARNING: Removing unreachable block (ram,0x0004626a) */

uint FUN_00045fd1(void)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  ushort *in_EAX;
  ushort *puVar4;
  short sVar5;
  undefined1 *in_EDX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  sVar3 = (short)DAT_00387dfc;
  puVar4 = in_EAX;
  if ((DAT_00387db0 < 0) || (DAT_00387db4 < 0)) {
LAB_00046283:
    return (uint)puVar4 & 0xffffff00;
  }
  iVar8 = DAT_002f10ce._3_1_ * 0x4ef;
  puVar4 = (ushort *)
           ((ulonglong)*(ushort *)(&DAT_0019d50c + iVar8) /
           (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
  if (((int)puVar4 <= DAT_00387db0) ||
     (puVar4 = (ushort *)
               ((ulonglong)*(ushort *)(&DAT_0019d50e + iVar8) /
               (ulonglong)(longlong)(int)(uint)DAT_0019cba6), (int)puVar4 <= DAT_00387db4))
  goto LAB_00046283;
  iVar6 = (uint)*(byte *)(&DAT_0019033b + DAT_00387df4) * 0x55;
  uVar7 = (uint)(byte)(&DAT_002d33c5)[((uint)*(byte *)(&DAT_0019033b + DAT_00387df0) + iVar6) * 6];
  sVar5 = (short)DAT_00387df4;
  if (((0x29 < uVar7) && (uVar7 < 0x32)) &&
     (((&DAT_002d33ca)[((&DAT_0019033b)[DAT_00387df0] + (&DAT_0019033b)[DAT_00387df4] * 0x55) * 6] &
      7) == (&DAT_0019d0f3)[iVar8])) {
    *in_EAX = (short)DAT_00387df0 * 0x100 + (short)DAT_00387df8;
    in_EAX[1] = sVar5 * 0x100 + (short)DAT_00387dfc;
    *in_EDX = 2;
    goto LAB_00046248;
  }
  sVar2 = (short)((DAT_00387df0 & 0xffff) << 8);
  sVar5 = (short)((DAT_00387df4 & 0xffff) << 8);
  if (*(short *)(&DAT_002e05bc + (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508)
      != 0) {
    *in_EAX = sVar2 + (short)DAT_00387df8;
LAB_00046136:
    in_EAX[1] = sVar5 + sVar3;
    *in_EDX = 3;
    goto LAB_00046248;
  }
  if ((*(uint *)((int)&DAT_00279203 + (DAT_00387df4 * 0x100 + DAT_00387df0) * 5 + 1) >> 0x1c &
      1 << ((&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] & 0x1f)) == 0) {
LAB_0004622b:
    *in_EAX = sVar2 + (short)DAT_00387df8;
    in_EAX[1] = sVar5 + sVar3;
    *in_EDX = 1;
  }
  else {
    if ((*(byte *)(&DAT_0019033b + DAT_00387df0) < 0x55) &&
       (*(byte *)(&DAT_0019033b + DAT_00387df4) < 0x55)) {
      if ((*(uint *)(&DAT_001921c6 + uVar7 * 0x16) & 0x29) != 0) goto LAB_0004622b;
      uVar7 = FUN_00085598(iVar6,*(uint *)(&DAT_001921c6 + uVar7 * 0x16),
                           (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]);
      sVar5 = (short)DAT_00387de4 << 8;
      sVar3 = (short)DAT_00387dec;
      if (DAT_001ae9fc < uVar7) {
        *in_EAX = (short)DAT_00387de0 * 0x100 + (short)DAT_00387de8;
        goto LAB_00046136;
      }
      *in_EAX = (short)DAT_00387de0 * 0x100 + (short)DAT_00387de8;
    }
    else {
      sVar5 = (short)DAT_00387de4;
      *in_EAX = (short)DAT_00387de0 * 0x100 + (short)DAT_00387de8;
      sVar5 = sVar5 << 8;
      sVar3 = (short)DAT_00387dec;
    }
    in_EAX[1] = sVar5 + sVar3;
    *in_EDX = 0;
  }
LAB_00046248:
  if (0xfeff < *in_EAX) {
    *in_EAX = 0xfeff;
  }
  uVar1 = in_EAX[1];
  if (0xfeff < uVar1) {
    in_EAX[1] = 0xfeff;
  }
  return CONCAT31((uint3)(byte)(uVar1 >> 8),1);
}

/******************************************************************************
 * Function : sub_0462a3 (Ghidra: FUN_000462a3)
 * Prototype: longlong sub_0462a3(void);
 * Address  : 0x462a3 (Size: 872 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45cc1
 * Callees  : 17 -> 0x45f23, 0x4660b, 0x46701, 0x473e1, 0x47755, 0x47bcd, 0x47ea3, 0x47fe2, 0x480aa, 0x48add ...
 ******************************************************************************/
longlong FUN_000462a3(void)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char extraout_DL;
  uint in_EDX;
  int extraout_EDX;
  int local_14;
  
  cVar2 = '\0';
  if ((DAT_0019d0bd & 1) != 0) {
    FUN_000619be();
    DAT_002e8bf2 = DAT_002e8bf2 + 1;
    if (((((DAT_003db4fd != '\0') || (DAT_003db535 != '\0')) || (DAT_003db518 != '\0')) ||
        ((DAT_003db534 != '\0' && (DAT_003db529 != '\0')))) || (DAT_0034b25c != '\0')) {
      DAT_003db4fd = '\0';
      DAT_003db535 = '\0';
      DAT_003db518 = '\0';
      DAT_003db529 = '\0';
      DAT_0034b25c = '\0';
      DAT_0019a2a0 = 1;
    }
    goto switchD_00046603_default;
  }
  if (DAT_002e6f2d != '\0') {
    FUN_000619be();
    DAT_002e8bf2 = DAT_002e8bf2 + 1;
    if ((DAT_003db534 != '\0') && (DAT_003db529 != '\0')) {
      DAT_003db529 = extraout_DL;
      if ((DAT_0019d0b6 & 1) != 0) {
        FUN_000edc70();
      }
      DAT_0019a2a0 = 1;
      DAT_0019a2a1 = 1;
    }
    goto switchD_00046603_default;
  }
  iVar4 = DAT_002f10ce._3_1_ * 0x4ef;
  if (((&DAT_0019d0c8)[iVar4] & 0x80) != 0) {
    *(undefined2 *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11) = 0x7f;
    *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11) = 0x7f;
    if (((DAT_0034cf1f != 0) || ((DAT_0019d0b8 & 1) == 0)) || (iVar4 = FUN_00045f23(), iVar4 == 0))
    goto switchD_00046603_default;
    (&DAT_003db4fc)[local_14] = 0;
    goto LAB_000465a7;
  }
  if (((&DAT_0019d0f1)[iVar4] == '\x02') &&
     ((((&DAT_0019d0f4)[iVar4] != '\x01' ||
       (uVar1 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar4)], uVar1 <= DAT_001ae9fc)) ||
      ((*(char *)(uVar1 + 0x1f) != '\x05' ||
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar1 + 100)] + 2) & 2) == 0)))))) {
    FUN_00049426();
    goto LAB_000464da;
  }
  if (((DAT_0019d0b8 & 1) == 0) || (((DAT_0019d0b8 & 1) != 0 && ((DAT_0019d0b8 & 0x80) != 0)))) {
    cVar2 = FUN_00057fe4();
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_00047755();
  }
  if (DAT_0034cf1f != 0) goto switchD_00046603_default;
  iVar4 = DAT_002f10ce._3_1_ * 0x4ef;
  switch((&DAT_0019d51a)[iVar4]) {
  case 1:
    if ((cVar2 == '\0') && (iVar4 = FUN_00047bcd(), iVar4 == 0)) {
      FUN_00046701();
LAB_000464e9:
      FUN_00049160();
      FUN_00048add();
      goto switchD_00046603_default;
    }
    FUN_00046701();
    break;
  case 2:
    if ((cVar2 == '\0') && (iVar4 = FUN_000480aa(), iVar4 == 0)) {
      FUN_000473e1();
      goto LAB_000464e9;
    }
    FUN_000473e1();
    break;
  case 3:
    if (cVar2 != '\0') break;
    iVar4 = FUN_00047fe2();
    if (iVar4 == 0) goto LAB_000464e9;
    goto LAB_000464d5;
  case 4:
    if ((cVar2 == '\0') && (iVar4 = FUN_00047ea3(), iVar4 == 0)) {
      FUN_0004660b();
      goto LAB_000464e9;
    }
    FUN_0004660b();
    break;
  case 5:
    if ((&DAT_0019d0ff)[iVar4] == '\x06') goto switchD_00046603_default;
    if ((DAT_0019d0b6 & 1) == 0) {
      DAT_0019d0b8 = DAT_0019d0b8 & 0xfe;
    }
    bVar3 = FUN_0005b645();
    (&DAT_0019d0c9)[extraout_EDX] = (&DAT_0019d0c9)[extraout_EDX] & 0xfe;
    (&DAT_0019d0c9)[extraout_EDX] = (&DAT_0019d0c9)[extraout_EDX] | bVar3 & 1;
    goto LAB_000465a7;
  case 6:
    if ((&DAT_0019d0ff)[iVar4] == '\a') goto switchD_00046603_default;
LAB_000465a7:
    FUN_0005ddee(0,0);
switchD_00046603_default:
    return (ulonglong)in_EDX << 0x20;
  default:
    goto switchD_00046603_default;
  }
  FUN_00049160();
LAB_000464d5:
  FUN_00048add();
LAB_000464da:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_04660b (Ghidra: FUN_0004660b)
 * Prototype: void sub_04660b(void);
 * Address  : 0x4660b (Size: 246 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 3 -> 0x47237, 0x7825a, 0xdc150
 ******************************************************************************/
void FUN_0004660b(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  
  FUN_000dc150();
  *(short *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11) =
       (short)DAT_003d9864 * DAT_0019cba6;
  uVar2 = FUN_000dc150();
  iVar3 = (int)DAT_002f10ce._3_1_;
  *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[iVar3 * 0x4ef] * 0x11) = uVar2;
  pbVar1 = (byte *)((int)&DAT_002e90c6 + (uint)(byte)(&DAT_0019d0d3)[iVar3 * 0x4ef] * 0x11 + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  iVar3 = FUN_0007825a();
  if (iVar3 != 0) {
    pbVar1 = (byte *)((int)&DAT_002e90c6 +
                     (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11 + 1);
    *pbVar1 = *pbVar1 | 0x80;
  }
  if (((DAT_0019d0b8 & 1) == 0) && ((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x03')) {
    FUN_00047237();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_046701 (Ghidra: FUN_00046701)
 * Prototype: void sub_046701(void);
 * Address  : 0x46701 (Size: 401 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x462a3, 0x49426
 * Callees  : 6 -> 0x45fd1, 0x46892, 0x46d5a, 0x47237, 0x7825a, 0xdc150
 ******************************************************************************/
void FUN_00046701(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined2 local_20;
  undefined2 uStack_1e;
  byte local_18;
  
  FUN_000dc150();
  DAT_003482b9 = DAT_003d9864 * (uint)DAT_0019cba6;
  DAT_003482bd = FUN_000dc150();
  iVar4 = (int)DAT_002f10ce._3_1_;
  pbVar1 = (byte *)((int)&DAT_002e90c6 + (uint)(byte)(&DAT_0019d0d3)[iVar4 * 0x4ef] * 0x11 + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  if ((&DAT_0019d51b)[iVar4 * 0x4ef] == '\x01') {
    cVar3 = FUN_00045fd1();
    if (cVar3 != '\0') {
      iVar4 = DAT_002f10ce._3_1_ * 0x4ef;
      *(undefined2 *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11) = local_20;
      *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11) = uStack_1e;
      pbVar1 = (byte *)((int)&DAT_002e90c6 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11 + 1);
      *pbVar1 = *pbVar1 | 0x80;
      bVar2 = (&DAT_0019d0d3)[iVar4];
      (&DAT_002e90c8)[(uint)bVar2 * 0x11] = (&DAT_002e90c8)[(uint)bVar2 * 0x11] & 0xe1;
      (&DAT_002e90c8)[(uint)bVar2 * 0x11] =
           (&DAT_002e90c8)[(uint)bVar2 * 0x11] | (local_18 & 0xf) * '\x02';
    }
  }
  else {
    iVar4 = FUN_0007825a();
    if (iVar4 != 0) {
      iVar4 = DAT_002f10ce._3_1_ * 0x4ef;
      *(undefined2 *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11) = local_20;
      *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11) = uStack_1e;
      pbVar1 = (byte *)((int)&DAT_002e90c6 + (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11 + 1);
      *pbVar1 = *pbVar1 | 0x80;
      (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11] =
           (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11] & 0xe1;
    }
  }
  bVar2 = (&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef];
  if (bVar2 < 3) {
    if (bVar2 == 2) {
      FUN_00046892();
    }
  }
  else if (bVar2 < 4) {
    FUN_00047237();
  }
  else if (bVar2 == 5) {
    FUN_00046d5a();
  }
  return;
}

/******************************************************************************
 * Function : sub_046892 (Ghidra: FUN_00046892)
 * Prototype: void sub_046892(void);
 * Address  : 0x46892 (Size: 1200 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x46701
 * Callees  : 2 -> 0x45f23, 0x5dde9
 ******************************************************************************/
void FUN_00046892(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_003482bd;
  iVar4 = DAT_003482b9;
  iVar2 = FUN_00045f23();
  iVar3 = FUN_00045f23();
  if (((&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 0x10) == 0) {
    if (iVar3 != 0) {
      (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
           (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (iVar4 < 5) {
      iVar3 = FUN_00045f23();
      if ((iVar3 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if ((int)(DAT_0019cba4 - 4) <= iVar4) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if (iVar1 < 5) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if ((int)(DAT_0019cba2 - 4) <= iVar1) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if (iVar2 == 0) {
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
    }
    else {
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
    }
    if (iVar4 != 0) {
      FUN_0005dde9();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_046d42 (Ghidra: FUN_00046d42)
 * Prototype: undefined8 sub_046d42(void);
 * Address  : 0x46d42 (Size: 24 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x46d5a
 * Callees  : 1 -> 0xeb818
 ******************************************************************************/
undefined8 FUN_00046d42(void)

{
  undefined4 in_EDX;
  undefined8 uVar1;
  
  uVar1 = FUN_000eb818();
  return CONCAT44(in_EDX,(uint)((uint)uVar1 <= (uint)((ulonglong)uVar1 >> 0x20)));
}

/******************************************************************************
 * Function : sub_046d5a (Ghidra: FUN_00046d5a)
 * Prototype: void sub_046d5a(void);
 * Address  : 0x46d5a (Size: 1245 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x46701
 * Callees  : 4 -> 0x45f23, 0x46d42, 0x5dde9, 0xeb818
 ******************************************************************************/
void FUN_00046d5a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_003482bd;
  iVar4 = DAT_003482b9;
  iVar2 = FUN_00045f23();
  iVar3 = FUN_00045f23();
  if (((&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 0x10) == 0) {
    if (iVar3 != 0) {
      (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
           (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (iVar4 < 5) {
      iVar3 = FUN_00045f23();
      if ((iVar3 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if ((int)(DAT_0019cba4 - 4) <= iVar4) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if (iVar1 < 5) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if ((int)(DAT_0019cba2 - 4) <= iVar1) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar2 == 0)) {
        (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
             (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
      }
      FUN_0005dde9();
    }
    if (iVar2 == 0) {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar4 = FUN_00046d42(), iVar4 == 0)) {
        FUN_0005dde9();
        DAT_00348298 = FUN_000eb818();
      }
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar4 = FUN_00046d42(), iVar4 == 0)) {
        FUN_0005dde9();
        DAT_0034829c = FUN_000eb818();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
    }
    else {
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar4 = FUN_00046d42(), iVar4 == 0)) {
        FUN_0005dde9();
        DAT_00348298 = FUN_000eb818();
      }
      iVar4 = FUN_00045f23();
      if ((iVar4 != 0) && (iVar4 = FUN_00046d42(), iVar4 == 0)) {
        FUN_0005dde9();
        DAT_0034829c = FUN_000eb818();
      }
      iVar4 = FUN_00045f23();
      if (iVar4 != 0) {
        FUN_0005dde9();
      }
      iVar4 = FUN_00045f23();
    }
    if (iVar4 != 0) {
      FUN_0005dde9();
    }
    iVar4 = FUN_00045f23();
    if (iVar4 != 0) {
      FUN_0005dde9();
    }
    iVar4 = FUN_00045f23();
    if (iVar4 != 0) {
      FUN_0005dde9();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_047237 (Ghidra: FUN_00047237)
 * Prototype: void sub_047237(void);
 * Address  : 0x47237 (Size: 426 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4660b, 0x46701
 * Callees  : 2 -> 0x45f23, 0x5dde9
 ******************************************************************************/
void FUN_00047237(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_003482bd;
  iVar1 = DAT_003482b9;
  iVar3 = FUN_00045f23();
  iVar4 = FUN_00045f23();
  if (((&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 0x10) == 0) {
    if (iVar4 != 0) {
      (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] =
           (&DAT_002e90c8)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (iVar3 != 0) {
      iVar3 = FUN_00045f23();
      if (iVar3 != 0) {
        FUN_0005dde9();
      }
      iVar3 = FUN_00045f23();
      if (iVar3 != 0) {
        FUN_0005dde9();
      }
    }
    if (iVar2 < 5) {
      FUN_0005dde9();
    }
    if ((int)(DAT_0019cba2 - 4) <= iVar2) {
      FUN_0005dde9();
    }
    if (iVar1 < 5) {
      FUN_0005dde9();
    }
    if ((int)(DAT_0019cba4 - 4) <= iVar1) {
      FUN_0005dde9();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04839c (Ghidra: FUN_0004839c)
 * Prototype: undefined1 * sub_04839c(void);
 * Address  : 0x4839c (Size: 192 bytes)
 * Module   : inits.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x402e5
 * Callees  : 1 -> 0x784ae
 ******************************************************************************/
undefined1 * FUN_0004839c(void)

{
  undefined1 *in_EAX;
  undefined1 *puVar1;
  byte in_DL;
  
  in_EAX[0x452] = in_DL;
  if (in_DL < 2) {
    if (in_DL != 1) {
      return (undefined1 *)(uint)in_DL;
    }
    in_EAX[0x453] = in_EAX[0x456];
  }
  else {
    if (in_DL < 4) {
      in_EAX[0x453] = in_EAX[0x456];
      FUN_000784ae();
      puVar1 = &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef;
      if (in_EAX != puVar1) {
        return puVar1;
      }
      DAT_0019d0b9 = DAT_0019d0b9 | 1;
      return puVar1;
    }
    if (in_DL != 4) {
      return (undefined1 *)(uint)in_DL;
    }
    in_EAX[0x453] = in_EAX[0x456];
  }
  FUN_000784ae();
  puVar1 = &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef;
  if (in_EAX != puVar1) {
    return puVar1;
  }
  DAT_0019d0b9 = DAT_0019d0b9 & 0xfe;
  return puVar1;
}

/******************************************************************************
 * Function : sub_04845c (Ghidra: FUN_0004845c)
 * Prototype: byte sub_04845c(void);
 * Address  : 0x4845c (Size: 348 bytes)
 * Module   : inits.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x4b992, 0x4b9cc, 0x5f6c5, 0xdd624, 0xdd6c8
 * Callees  : 5 -> 0x43f07, 0x61bde, 0x61ca3, 0x81eac, 0xe6a10
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0004845c(void)

{
  char cVar1;
  byte bVar2;
  undefined1 *in_EAX;
  int iVar3;
  byte in_DL;
  undefined1 unaff_BL;
  
  if (in_DL == in_EAX[0x453]) {
    if (0xf < in_DL) goto joined_r0x0004859d;
  }
  else {
    in_EAX[0x456] = in_EAX[0x453];
    iVar3 = (int)DAT_002f10ce._3_1_;
    in_EAX[0x453] = in_DL;
    if (in_EAX == &DAT_0019d0c8 + iVar3 * 0x4ef) {
      _DAT_002eb9da = 0;
    }
    cVar1 = in_EAX[0x453];
    if ((((cVar1 != '\f') && (cVar1 != '\x0f')) && (cVar1 != '\v')) && (cVar1 != '\n')) {
      *(undefined2 *)(in_EAX + 0x2f) = 0;
    }
    in_DL = in_EAX[0x453];
    if (4 < in_DL) {
      if (in_DL < 6) {
        bVar2 = FUN_00061bde();
        return bVar2;
      }
      if (in_DL < 0x10) {
        if (in_DL != 9) {
          return in_DL;
        }
        FUN_000e6a10();
        iVar3 = FUN_00043f07();
        *(undefined2 *)(in_EAX + 0x43a) = *(undefined2 *)(iVar3 + 0x1b);
        FUN_00061ca3();
        bVar2 = FUN_00081eac();
        return bVar2;
      }
joined_r0x0004859d:
      if (in_DL < 0x11) {
        in_EAX[0x4a5] = unaff_BL;
        return in_DL;
      }
      if (in_DL != 0x12) {
        return in_DL;
      }
      in_EAX[0x4a6] = unaff_BL;
      return 0x12;
    }
    if (in_DL == 0) {
      return 0;
    }
    if (in_DL < 2) {
      in_EAX[0x4a4] = 1;
      return in_DL;
    }
  }
  if (in_DL != 2) {
    return in_DL;
  }
  in_EAX[0x4a3] = unaff_BL;
  return 2;
}

