/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: newgui.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 240
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_052988 (Ghidra: FUN_00052988)
 * Prototype: void sub_052988(void);
 * Address  : 0x52988 (Size: 49 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52934
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052988(void)

{
  DAT_0034b25d = DAT_003d987c;
  _DAT_0034b268 = DAT_003d985c * (uint)DAT_0019cba6;
  _DAT_0034b26c = (uint)DAT_0019cba6 * DAT_003d9860;
  return;
}

/******************************************************************************
 * Function : sub_0529b9 (Ghidra: FUN_000529b9)
 * Prototype: void sub_0529b9(void);
 * Address  : 0x529b9 (Size: 207 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52934
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000529b9(void)

{
  DAT_0034b25a = 0;
  DAT_0034b25e = 0;
  if (DAT_003d987b != '\0') {
    DAT_0034b258 = '\x01';
    _DAT_0034b280 = DAT_003d9864 * (uint)DAT_0019cba6;
    _DAT_0034b284 = (uint)DAT_0019cba6 * DAT_003d9868;
  }
  if (DAT_0034b258 == '\0') {
    if (DAT_0034b2a0 < 0x7fffffff) {
      DAT_0034b2a0 = DAT_0034b2a0 + 1;
    }
  }
  else if (DAT_003d987e == '\0') {
    DAT_0034b258 = 0;
    DAT_0034b25a = 1;
    DAT_0034b270 = DAT_003d9864 * (uint)DAT_0019cba6;
    DAT_0034b274 = (uint)DAT_0019cba6 * DAT_003d9868;
    if (DAT_0034b2a0 < 5) {
      _DAT_0034b290 = DAT_0034b270;
      _DAT_0034b294 = DAT_0034b274;
    }
    DAT_0034b25e = DAT_0034b2a0 < 5;
    DAT_0034b2a0 = 0;
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_052a88 (Ghidra: FUN_00052a88)
 * Prototype: void sub_052a88(void);
 * Address  : 0x52a88 (Size: 207 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x52934
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052a88(void)

{
  DAT_0034b25b = 0;
  DAT_0034b25f = 0;
  if (DAT_003d987c != '\0') {
    DAT_0034b259 = '\x01';
    _DAT_0034b288 = DAT_003d9864 * (uint)DAT_0019cba6;
    _DAT_0034b28c = (uint)DAT_0019cba6 * DAT_003d9868;
  }
  if (DAT_0034b259 == '\0') {
    if (DAT_0034b2a4 < 0x7fffffff) {
      DAT_0034b2a4 = DAT_0034b2a4 + 1;
    }
  }
  else if (DAT_003d987f == '\0') {
    DAT_0034b259 = 0;
    DAT_0034b25b = 1;
    DAT_0034b278 = DAT_003d9864 * (uint)DAT_0019cba6;
    DAT_0034b27c = (uint)DAT_0019cba6 * DAT_003d9868;
    if (DAT_0034b2a4 < 5) {
      _DAT_0034b298 = DAT_0034b278;
      _DAT_0034b29c = DAT_0034b27c;
    }
    DAT_0034b25f = DAT_0034b2a4 < 5;
    DAT_0034b2a4 = 0;
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_052b58 (Ghidra: FUN_00052b58)
 * Prototype: bool sub_052b58(void);
 * Address  : 0x52b58 (Size: 15 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x49426, 0x5449e, 0x5ae90, 0x5aee2, 0x5afda, 0x5c2e3, 0x5c985
 * Callees  : 1 -> 0x53c6b
 ******************************************************************************/
bool FUN_00052b58(void)

{
  int iVar1;
  
  iVar1 = FUN_00053c6b();
  return iVar1 != -1;
}

/******************************************************************************
 * Function : dk_more_room_menu_stack_052b67 (Ghidra: FUN_00052b67)
 * Prototype: void dk_more_room_menu_stack_052b67(void);
 * Address  : 0x52b67 (Size: 128 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:1907 ("NO MORE ROOM FOR MENU STACK")
 * Naming   : String 'NO MORE ROOM FOR MENU STACK'
 * Callers  : 1 -> 0x53ccc
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x165b14: "newgui.cpp"
 *   - 0x165af8: "NO MORE ROOM FOR MENU STACK"
 ******************************************************************************/
void FUN_00052b67(void)

{
  byte in_AL;
  uint uVar1;
  char cVar3;
  uint uVar2;
  int iVar4;
  
  if ('\a' < DAT_0034cf04) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 1907, "NO MORE ROOM FOR MENU STACK") */
    return;
  }
  iVar4 = (int)DAT_0034cf04;
  uVar2 = (uint)in_AL << 8;
  while( true ) {
    cVar3 = (char)(uVar2 >> 8);
    if (iVar4 <= (int)(uVar2 & 0xff)) {
      DAT_0034cf04 = DAT_0034cf04 + '\x01';
      (&DAT_0034cefc)[iVar4] = cVar3;
      return;
    }
    if (cVar3 == (&DAT_0034cefc)[uVar2 & 0xff]) break;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
  }
  while( true ) {
    uVar1 = uVar2 & 0xff;
    if (DAT_0034cf04 + -1 <= (int)uVar1) break;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
    (&DAT_0034cefc)[uVar1] = (&DAT_0034cefd)[uVar1];
  }
  (&DAT_0034cefb)[DAT_0034cf04] = (char)(uVar2 >> 8);
  return;
}

/******************************************************************************
 * Function : sub_052be7 (Ghidra: FUN_00052be7)
 * Prototype: void sub_052be7(void);
 * Address  : 0x52be7 (Size: 86 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x5449e, 0x5b25b, 0x5c848
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052be7(void)

{
  byte in_AL;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)in_AL << 8;
  while( true ) {
    if ((int)DAT_0034cf04 <= (int)(uVar2 & 0xff)) break;
    if ((char)(uVar2 >> 8) == (&DAT_0034cefc)[uVar2 & 0xff]) goto LAB_00052c17;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
  }
LAB_00052c26:
  if ((uVar2 & 0xff) != (int)DAT_0034cf04) {
    DAT_0034cf04 = DAT_0034cf04 + -1;
  }
  return;
LAB_00052c17:
  while( true ) {
    uVar1 = uVar2 & 0xff;
    if (DAT_0034cf04 + -1 <= (int)uVar1) break;
    (&DAT_0034cefc)[uVar1] = (&DAT_0034cefd)[uVar1];
    uVar2 = (uint)(byte)((char)uVar2 + 1);
  }
  goto LAB_00052c26;
}

/******************************************************************************
 * Function : sub_052c47 (Ghidra: FUN_00052c47)
 * Prototype: void sub_052c47(void);
 * Address  : 0x52c47 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5c4f3
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052c47(void)

{
  _DAT_002ee385 = 0;
  DAT_002ee389 = 0;
  _DAT_002ee38a = 0;
  _DAT_002ee38e = 0;
  return;
}

/******************************************************************************
 * Function : sub_052c6d (Ghidra: FUN_00052c6d)
 * Prototype: void sub_052c6d(void);
 * Address  : 0x52c6d (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x2c6e2, 0x5ddee, 0xe7714
 ******************************************************************************/
void FUN_00052c6d(void)

{
  byte bVar1;
  char extraout_DL;
  uint uVar2;
  int iVar3;
  
  FUN_0005ddee(0,0);
  FUN_0002c6e2();
  bVar1 = 0;
  while (uVar2 = (uint)bVar1, uVar2 < 8) {
    iVar3 = DAT_003336f3;
    if ((&DAT_002e6ff4)[uVar2 * 0x11] != '\0') {
      iVar3 = uVar2 * 0x11 + 0x2e6ff6;
    }
    FUN_000e7714(&DAT_0034cf63 + uVar2 * 0x10,iVar3);
    bVar1 = extraout_DL + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_052ced (Ghidra: FUN_00052ced)
 * Prototype: void sub_052ced(void);
 * Address  : 0x52ced (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x2c6e2, 0x5ddee, 0xe7714
 ******************************************************************************/
void FUN_00052ced(void)

{
  byte bVar1;
  char extraout_DL;
  uint uVar2;
  int iVar3;
  
  FUN_0005ddee(0,0);
  FUN_0002c6e2();
  bVar1 = 0;
  while (uVar2 = (uint)bVar1, uVar2 < 8) {
    iVar3 = DAT_003336f3;
    if ((&DAT_002e6ff4)[uVar2 * 0x11] != '\0') {
      iVar3 = uVar2 * 0x11 + 0x2e6ff6;
    }
    FUN_000e7714(&DAT_0034cf63 + uVar2 * 0x10,iVar3);
    bVar1 = extraout_DL + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_052d6d (Ghidra: FUN_00052d6d)
 * Prototype: void sub_052d6d(void);
 * Address  : 0x52d6d (Size: 51 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052d6d(void)

{
  DAT_0034cf1a = DAT_002ee8d2;
  DAT_0034cf1b = DAT_002ee8d3;
  DAT_0034cf1c = DAT_002ee8d5;
  DAT_0034cf1d = DAT_002ee8d6;
  DAT_0034cf1e = DAT_002ee8da;
  return;
}

/******************************************************************************
 * Function : sub_052da0 (Ghidra: FUN_00052da0)
 * Prototype: void sub_052da0(void);
 * Address  : 0x52da0 (Size: 25 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00052da0(void)

{
  _DAT_0034cf11 = (uint)DAT_002ee8d8;
  _DAT_0034cf0d = (uint)DAT_002ee8d7;
  return;
}

/******************************************************************************
 * Function : sub_052def (Ghidra: FUN_00052def)
 * Prototype: void sub_052def(void);
 * Address  : 0x52def (Size: 78 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x53c6b
 ******************************************************************************/
void FUN_00052def(void)

{
  char cVar1;
  byte *in_EAX;
  uint uVar2;
  
  if (*(short *)(&DAT_002e059c + DAT_002f10ce._3_1_ * 0x1508) != 0) {
    in_EAX[0x29] = 0x5e;
    in_EAX[0x2a] = 1;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x29] = 0x62;
  in_EAX[0x2a] = 1;
  *in_EAX = *in_EAX & 0xf7;
  if (in_EAX[1] != 0) {
    cVar1 = FUN_00053c6b();
    if (cVar1 != -1) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x56);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_052e3d (Ghidra: FUN_00052e3d)
 * Prototype: void sub_052e3d(void);
 * Address  : 0x52e3d (Size: 66 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052e3d(void)

{
  byte *in_EAX;
  
  if ((in_EAX[0x33] != (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) &&
     (((&DAT_0019d0c8)[(uint)in_EAX[0x33] * 0x4ef] & 1) != 0)) {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  *in_EAX = *in_EAX & 0xf7;
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  return;
}

/******************************************************************************
 * Function : sub_052e7f (Ghidra: FUN_00052e7f)
 * Prototype: void sub_052e7f(void);
 * Address  : 0x52e7f (Size: 46 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052e7f(void)

{
  byte *in_EAX;
  
  if ((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x05') {
    *in_EAX = *in_EAX & 0xf7;
    in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
    return;
  }
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : sub_052ead (Ghidra: FUN_00052ead)
 * Prototype: void sub_052ead(void);
 * Address  : 0x52ead (Size: 17 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052ead(void)

{
  byte *in_EAX;
  
  if ((DAT_0019d0b6 & 1) != 0) {
    *in_EAX = *in_EAX & 0xf7;
    return;
  }
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : sub_052ebe (Ghidra: FUN_00052ebe)
 * Prototype: void sub_052ebe(void);
 * Address  : 0x52ebe (Size: 42 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052ebe(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x33);
  iVar2 = *(int *)(iVar1 + 0x409);
  iVar3 = *(int *)(iVar1 + 0x405);
  iVar1 = *(int *)(iVar1 + 0x400);
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | ((iVar2 - iVar3) + 2 < iVar1) << 3;
  return;
}

/******************************************************************************
 * Function : sub_052ee8 (Ghidra: FUN_00052ee8)
 * Prototype: void sub_052ee8(void);
 * Address  : 0x52ee8 (Size: 27 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052ee8(void)

{
  int iVar1;
  byte *in_EAX;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x33) + 0x400);
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (iVar1 < 0) << 3;
  return;
}

/******************************************************************************
 * Function : sub_052f03 (Ghidra: FUN_00052f03)
 * Prototype: void sub_052f03(void);
 * Address  : 0x52f03 (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052f03(void)

{
  int iVar1;
  int iVar2;
  byte *in_EAX;
  
  iVar2 = *(int *)(*(int *)(in_EAX + 0x33) + 0x409);
  iVar1 = *(int *)(*(int *)(in_EAX + 0x33) + 0x405);
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (iVar2 < iVar1) << 3;
  return;
}

/******************************************************************************
 * Function : sub_052f16 (Ghidra: FUN_00052f16)
 * Prototype: void sub_052f16(void);
 * Address  : 0x52f16 (Size: 46 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052f16(void)

{
  char cVar1;
  byte *in_EAX;
  
  cVar1 = DAT_0034d0e5;
  if ('\x06' < DAT_0034d0e4) {
    *in_EAX = *in_EAX | 4;
    *in_EAX = *in_EAX & 0xf7;
    *in_EAX = *in_EAX | ('\0' < cVar1) << 3;
    return;
  }
  *in_EAX = *in_EAX & 0xf3;
  return;
}

/******************************************************************************
 * Function : sub_052f44 (Ghidra: FUN_00052f44)
 * Prototype: void sub_052f44(void);
 * Address  : 0x52f44 (Size: 52 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00052f44(void)

{
  byte *in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)DAT_0034d0e4;
  if (6 < iVar1) {
    iVar2 = (int)DAT_0034d0e5;
    *in_EAX = *in_EAX | 4;
    *in_EAX = *in_EAX & 0xf7;
    *in_EAX = *in_EAX | (iVar2 < iVar1 + -6) << 3;
    return;
  }
  *in_EAX = *in_EAX & 0xf3;
  return;
}

/******************************************************************************
 * Function : sub_052f78 (Ghidra: FUN_00052f78)
 * Prototype: void sub_052f78(void);
 * Address  : 0x52f78 (Size: 169 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x27824, 0x27892
 * Callees  : 1 -> 0x6e9ab
 ******************************************************************************/
void FUN_00052f78(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_EDX;
  
  iVar2 = 0;
  iVar1 = in_EAX;
  do {
    iVar3 = iVar1 + 1;
    if ((*(char *)(iVar1 + 0x13a8) != '\0') && (*(char *)(iVar1 + 0x13a7) == '\0')) {
      *(undefined1 *)(iVar1 + 0x13a7) = *(undefined1 *)(iVar1 + 0x13a8);
      *(undefined1 *)(iVar1 + 0x13a8) = 0;
      if (((&DAT_002e7090)[(uint)*(byte *)(iVar1 + 0x13a7) * 0x15] != '\0') &&
         ((iVar2 == 0 || ((0 < iVar2 && (*(char *)(iVar1 + 0x13a6) != '\0')))))) {
        if ((int)*(char *)(in_EAX + 0xe9f) ==
            (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          FUN_0006e9ab();
          iVar2 = extraout_ECX;
          iVar3 = extraout_EDX;
        }
        (&DAT_002e7090)[(uint)*(byte *)(iVar3 + 0x13a6) * 0x15] = 0;
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar3;
  } while (iVar2 != 0xc);
  return;
}

/******************************************************************************
 * Function : sub_053021 (Ghidra: FUN_00053021)
 * Prototype: void sub_053021(void);
 * Address  : 0x53021 (Size: 316 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5c377, 0x5c985
 ******************************************************************************/
void FUN_00053021(void)

{
  byte bVar1;
  undefined2 uVar2;
  byte *in_EAX;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  uint uVar5;
  
  bVar1 = in_EAX[0x33];
  iVar3 = DAT_002f10ce._3_1_ * 0x1508;
  uVar4 = (uint)bVar1;
  if (((&DAT_002e16fc)[iVar3] != '\0') &&
     (uVar4 = (uint)CONCAT11((&DAT_002e16fc)[iVar3],bVar1),
     (&DAT_002e16fc)[iVar3] == (&DAT_002e1930)[iVar3 + (uint)bVar1])) {
    FUN_0005c985();
    uVar4 = extraout_ECX;
    in_EAX = extraout_EDX;
  }
  iVar3 = (uVar4 & 0xff) + DAT_002f10ce._3_1_ * 0x1508;
  if ((&DAT_002e1930)[iVar3] != '\0') {
    uVar5 = (uint)(byte)(&DAT_002e7087)[(uint)(byte)(&DAT_002e1930)[iVar3] * 0x15];
    if ((uVar5 == 3) && (DAT_0034cf15 != '\0')) {
      FUN_0005c377();
      uVar4 = extraout_ECX_00;
      in_EAX = extraout_EDX_00;
    }
    *(undefined2 *)(in_EAX + 0x29) = *(undefined2 *)(&DAT_0019137a + uVar5 * 0x10);
    if (((uVar5 == 2) &&
        (((*(int *)(&DAT_002e707e +
                   (uint)(byte)(&DAT_002e1930)[DAT_002f10ce._3_1_ * 0x1508 + (uVar4 & 0xff)] * 0x15)
           != 0 || (*(int *)(&DAT_002e7082 +
                            (uint)(byte)(&DAT_002e1930)
                                        [DAT_002f10ce._3_1_ * 0x1508 + (uVar4 & 0xff)] * 0x15) != 0)
          ) && (((byte)DAT_002e8bee & 1) != 0)))) ||
       (((uVar5 == 0x15 && (((byte)DAT_002e8bee & 1) != 0)) &&
        (*(int *)(&DAT_002e7088 +
                 (uint)(byte)(&DAT_002e1930)[DAT_002f10ce._3_1_ * 0x1508 + (uVar4 & 0xff)] * 0x15) <
         0)))) {
      *(short *)(in_EAX + 0x29) = *(short *)(in_EAX + 0x29) + 2;
    }
    uVar2 = *(undefined2 *)(&DAT_0019137e + uVar5 * 0x10);
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *(undefined2 *)(in_EAX + 0x2b) = uVar2;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x29] = 0;
  in_EAX[0x2a] = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[0x2b] = 0xc9;
  in_EAX[0x2c] = 0;
  in_EAX[0x1c] = in_EAX[0x1c] | 0x40;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_05315d (Ghidra: FUN_0005315d)
 * Prototype: void sub_05315d(void);
 * Address  : 0x5315d (Size: 43 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005315d(void)

{
  byte *in_EAX;
  
  if (((&DAT_0019d0c8)[*(int *)(in_EAX + 0x33) * 0x4ef] & 1) != 0) {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x2b] = 0xc9;
  in_EAX[0x2c] = 0;
  in_EAX[0x1c] = in_EAX[0x1c] | 0x40;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_053188 (Ghidra: FUN_00053188)
 * Prototype: void sub_053188(void);
 * Address  : 0x53188 (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053188(void)

{
  char cVar1;
  byte *in_EAX;
  uint uVar2;
  int iVar3;
  
  if (*(short *)(in_EAX + 0x1b) == 0) {
    uVar2 = 0x17;
  }
  else {
    uVar2 = (uint)(ushort)(&DAT_0034d1a8)[(int)*(short *)(in_EAX + 0x1b) + (int)DAT_0034d0e5];
  }
  if (uVar2 == 0x17) {
    cVar1 = (&DAT_002e0ea1)[DAT_002f10ce._3_1_ * 0x1508];
  }
  else {
    cVar1 = (&DAT_002e0ea3)[DAT_002f10ce._3_1_ * 0x1508 + uVar2];
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (cVar1 != '\0') << 3;
  iVar3 = (int)DAT_0034d0e4;
  *in_EAX = *in_EAX & 0xfb;
  *in_EAX = *in_EAX | (*(short *)(in_EAX + 0x1b) < iVar3) << 2;
  return;
}

/******************************************************************************
 * Function : sub_053208 (Ghidra: FUN_00053208)
 * Prototype: void sub_053208(void);
 * Address  : 0x53208 (Size: 56 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053208(void)

{
  byte *in_EAX;
  
  if ((&DAT_002e1507)[(uint)in_EAX[0x33] + DAT_002f10ce._3_1_ * 0x1508] != '\0') {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_053240 (Ghidra: FUN_00053240)
 * Prototype: void sub_053240(void);
 * Address  : 0x53240 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053240(void)

{
  byte *in_EAX;
  
  *(int *)(in_EAX + 0x33) = DAT_002ee8ad;
  *(undefined2 *)(in_EAX + 0x29) = (undefined2)DAT_002ee8b1;
  *(undefined2 *)(in_EAX + 0x2b) = (undefined2)DAT_002ee8b5;
  if ((&DAT_002e1507)[DAT_002f10ce._3_1_ * 0x1508 + DAT_002ee8ad] != '\0') {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_053290 (Ghidra: FUN_00053290)
 * Prototype: void sub_053290(void);
 * Address  : 0x53290 (Size: 118 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053290(void)

{
  byte bVar1;
  byte *in_EAX;
  
  bVar1 = in_EAX[0x33];
  if ((&DAT_002e1569)[DAT_002f10ce._3_1_ * 0x1508 + (uint)bVar1] != '\0') {
    if (bVar1 == 0x13) {
      if (DAT_002ed402 == 0) {
        in_EAX[0x1b] = 0;
        in_EAX[0x1c] = 0;
        *in_EAX = *in_EAX | 8;
      }
      else {
        in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
        *in_EAX = *in_EAX & 0xf7;
      }
    }
    if ((bVar1 != 9) || (*(int *)(&DAT_002e0e15 + DAT_002f10ce._3_1_ * 0x1508) == 0)) {
      in_EAX[0x1b] = 0;
      in_EAX[0x1c] = 0;
      *in_EAX = *in_EAX | 8;
      return;
    }
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_053306 (Ghidra: FUN_00053306)
 * Prototype: void sub_053306(void);
 * Address  : 0x53306 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053306(void)

{
  byte *in_EAX;
  
  *(int *)(in_EAX + 0x33) = DAT_002ee8b9;
  *(undefined2 *)(in_EAX + 0x29) = (undefined2)DAT_002ee8bd;
  *(undefined2 *)(in_EAX + 0x2b) = (undefined2)DAT_002ee8c1;
  if ((&DAT_002e1569)[DAT_002f10ce._3_1_ * 0x1508 + DAT_002ee8b9] != '\0') {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_053356 (Ghidra: FUN_00053356)
 * Prototype: void sub_053356(void);
 * Address  : 0x53356 (Size: 144 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053356(void)

{
  byte *in_EAX;
  
  *(int *)(in_EAX + 0x33) = DAT_002ee8c5;
  *(undefined2 *)(in_EAX + 0x29) = (undefined2)DAT_002ee8c9;
  *(undefined2 *)(in_EAX + 0x2b) = (undefined2)DAT_002ee8cd;
  if (((*(int *)(&DAT_0018ed31 + DAT_002ee8c5 * 0x10) != 0x10) ||
      ((&DAT_002e1591)[DAT_002f10ce._3_1_ * 0x1508 + DAT_002ee8c5] == '\0')) &&
     ((*(int *)(&DAT_0018ed31 + DAT_002ee8c5 * 0x10) != 0x12 ||
      ((&DAT_002e15a6)[DAT_002f10ce._3_1_ * 0x1508 + DAT_002ee8c5] == '\0')))) {
    in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
    *in_EAX = *in_EAX & 0xf7;
    return;
  }
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : sub_0533e6 (Ghidra: FUN_000533e6)
 * Prototype: void sub_0533e6(void);
 * Address  : 0x533e6 (Size: 56 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000533e6(void)

{
  byte *in_EAX;
  
  if ((&DAT_002e159f)[(uint)in_EAX[0x33] + DAT_002f10ce._3_1_ * 0x1508] != '\0') {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_05341e (Ghidra: FUN_0005341e)
 * Prototype: void sub_05341e(void);
 * Address  : 0x5341e (Size: 63 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005341e(void)

{
  byte *in_EAX;
  
  if ((&DAT_002e15b0)
      [DAT_002f10ce._3_1_ * 0x1508 + (uint)(byte)(&DAT_0018ed35)[(uint)in_EAX[0x33] * 0x10]] != '\0'
     ) {
    in_EAX[0x1b] = 0;
    in_EAX[0x1c] = 0;
    *in_EAX = *in_EAX | 8;
    return;
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_05345d (Ghidra: FUN_0005345d)
 * Prototype: void sub_05345d(void);
 * Address  : 0x5345d (Size: 136 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f049
 * Callees  : 1 -> 0x49e95
 ******************************************************************************/
void FUN_0005345d(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar2 = 0; iVar1 = 0, iVar2 < 10; iVar2 = iVar2 + 1) {
    iVar1 = FUN_00049e95();
    if (iVar1 != 0) {
      iVar1 = iVar3;
      if (extraout_ECX == in_EAX) break;
      iVar3 = iVar3 + 1;
    }
  }
  if ((iVar1 < 6) && ((DAT_0034d1f0 != 0 || (iVar1 < 4)))) {
    DAT_0034d1f0 = 1;
  }
  else {
    DAT_0034d1f0 = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0534e5 (Ghidra: FUN_000534e5)
 * Prototype: void sub_0534e5(void);
 * Address  : 0x534e5 (Size: 415 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x49e95
 ******************************************************************************/
void FUN_000534e5(void)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte *in_EAX;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  uint extraout_ECX_00;
  int iVar7;
  int local_1c;
  int local_18;
  
  uVar3 = *(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef);
  if (((&DAT_001ae9fc)[uVar3] != 0) && (*(char *)((&DAT_001ae9fc)[uVar3] + 0x1f) == '\x05')) {
    local_18 = 0;
    cVar1 = *(char *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar3] + 100)] + 0x1e8);
    iVar7 = 0;
    iVar5 = 0;
    while (iVar4 = local_18, iVar5 < 10) {
      cVar2 = (&DAT_002e918d)
              [(uint)*(byte *)((&DAT_001ae9fc)
                               [*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)] + 0x1a
                              ) * 0xe6 + iVar5];
      iVar5 = FUN_00049e95();
      if (iVar5 != 0) {
        iVar4 = iVar7;
        if (cVar2 == cVar1) break;
        iVar7 = iVar7 + 1;
      }
      iVar5 = extraout_ECX + 1;
    }
    local_18 = iVar4;
    if ((local_18 < 6) && ((DAT_0034d1f0 != 0 || (local_18 < 4)))) {
      iVar5 = *(int *)(in_EAX + 0x33);
      DAT_0034d1f0 = 1;
    }
    else {
      iVar5 = *(int *)(in_EAX + 0x33) + 4;
      DAT_0034d1f0 = 0;
    }
    uVar6 = 0;
    local_1c = 0;
    for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
      uVar6 = (uint)(byte)(&DAT_002e918d)
                          [iVar7 + (uint)*(byte *)((&DAT_001ae9fc)
                                                   [*(ushort *)
                                                     ((int)&DAT_0019d0f7 +
                                                     DAT_002f10ce._3_1_ * 0x4ef)] + 0x1a) * 0xe6];
      iVar4 = FUN_00049e95();
      if (iVar4 != 0) {
        if (local_1c == iVar5) break;
        local_1c = local_1c + 1;
      }
      uVar6 = extraout_ECX_00;
    }
    iVar5 = uVar6 * 6;
    if (*(int *)(&DAT_0018ff83 + iVar5) != 0) {
      *(undefined2 *)(in_EAX + 0x29) = *(undefined2 *)(&DAT_0018ff83 + iVar5);
      *(undefined2 *)(in_EAX + 0x2b) = *(undefined2 *)(&DAT_0018ff87 + iVar5);
    }
    if ((uVar6 != 0) && (iVar5 = FUN_00049e95(), iVar5 != 0)) {
      in_EAX[0x1b] = 0;
      in_EAX[0x1c] = 0;
      *in_EAX = *in_EAX | 8;
      return;
    }
  }
  in_EAX[0x1c] = in_EAX[0x1c] | 0x80;
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : sub_053684 (Ghidra: FUN_00053684)
 * Prototype: void sub_053684(void);
 * Address  : 0x53684 (Size: 146 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053684(void)

{
  char cVar1;
  byte *in_EAX;
  int iVar2;
  byte bVar3;
  
  if (*(short *)(in_EAX + 0x1b) == 0) {
    bVar3 = 0x17;
  }
  else {
    bVar3 = *(byte *)(&DAT_0034d1a8 + (int)*(short *)(in_EAX + 0x1b) + (int)DAT_0034d0e5);
  }
  if (bVar3 == 0x17) {
    cVar1 = (&DAT_002e0ea1)[DAT_002f10ce._3_1_ * 0x1508];
  }
  else {
    cVar1 = (&DAT_002e0ea3)[(uint)bVar3 + DAT_002f10ce._3_1_ * 0x1508];
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (cVar1 != '\0') << 3;
  iVar2 = (int)DAT_0034d0e4;
  *in_EAX = *in_EAX & 0xfb;
  *in_EAX = *in_EAX | (*(short *)(in_EAX + 0x1b) < iVar2) << 2;
  *(undefined2 *)(in_EAX + 0x29) = *(undefined2 *)(&DAT_00187b9c + (uint)bVar3 * 0x2c);
  return;
}

/******************************************************************************
 * Function : sub_053716 (Ghidra: FUN_00053716)
 * Prototype: void sub_053716(void);
 * Address  : 0x53716 (Size: 61 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00053716(void)

{
  byte *in_EAX;
  
  if (((&DAT_002e16fc)[DAT_002f10ce._3_1_ * 0x1508] != '\0') &&
     ((*(int *)(&DAT_002e707e + (uint)(byte)(&DAT_002e16fc)[DAT_002f10ce._3_1_ * 0x1508] * 0x15) !=
       0 || (*(int *)(&DAT_002e7082 +
                     (uint)(byte)(&DAT_002e16fc)[DAT_002f10ce._3_1_ * 0x1508] * 0x15) != 0)))) {
    *in_EAX = *in_EAX | 8;
    return;
  }
  *in_EAX = *in_EAX & 0xf7;
  return;
}

/******************************************************************************
 * Function : dk_illegal_computer_player_053753 (Ghidra: FUN_00053753)
 * Prototype: void dk_illegal_computer_player_053753(void);
 * Address  : 0x53753 (Size: 92 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:2772 ("Illegal computer player")
 * Naming   : String 'Illegal computer player'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x165b37: "newgui.cpp"
 *   - 0x165b1f: "Illegal computer player"
 ******************************************************************************/
void FUN_00053753(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x14ca;
  if ((-1 < *(int *)((int)&DAT_002ccbfb + iVar1)) && (*(int *)((int)&DAT_002ccbfb + iVar1) < 10)) {
    *(undefined2 *)(in_EAX + 0x2b) =
         *(undefined2 *)(&DAT_00184179 + *(int *)((int)&DAT_002ccbfb + iVar1) * 2);
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 2772, "Illegal computer player") */
  return;
}

/******************************************************************************
 * Function : sub_0537af (Ghidra: FUN_000537af)
 * Prototype: void sub_0537af(void);
 * Address  : 0x537af (Size: 236 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5389b, 0x53971
 * Callees  : 4 -> 0x57a52, 0x5b3fc, 0x5c8fa, 0x13a710
 ******************************************************************************/
void FUN_000537af(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  FUN_0013a710();
  if ((unaff_EBX != 0) && (*(short *)(unaff_EBX + 100) != 0)) {
    iVar1 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)];
    iVar2 = (int)*(short *)(iVar1 + 0x5e);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    FUN_0005c8fa(iVar2,(int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x23) *
                             (int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar1 + 0x1a) * 0x73] *
                            0x23) / 100 +
                       (int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar1 + 0x1a) * 0x73]);
    FUN_0005b3fc();
    FUN_00057a52();
  }
  return;
}

/******************************************************************************
 * Function : sub_05389b (Ghidra: FUN_0005389b)
 * Prototype: void sub_05389b(void);
 * Address  : 0x5389b (Size: 214 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x537af, 0x13a710
 ******************************************************************************/
void FUN_0005389b(void)

{
  ushort uVar1;
  
  FUN_000537af();
  uVar1 = *(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef);
  if (((&DAT_001ae9fc)[uVar1] != 0) && (*(short *)((&DAT_001ae9fc)[uVar1] + 100) != 0)) {
    FUN_0013a710();
  }
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_053971 (Ghidra: FUN_00053971)
 * Prototype: void sub_053971(void);
 * Address  : 0x53971 (Size: 167 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x537af
 ******************************************************************************/
void FUN_00053971(void)

{
  ushort uVar1;
  
  FUN_000537af();
  uVar1 = *(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef);
  if (((&DAT_001ae9fc)[uVar1] != 0) && (*(short *)((&DAT_001ae9fc)[uVar1] + 100) != 0)) {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : dk_state_type_gui_state_053a18 (Ghidra: FUN_00053a18)
 * Prototype: void dk_state_type_gui_state_053a18(void);
 * Address  : 0x53a18 (Size: 493 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:2885 ("Unknown state_type_to_gui_state[]")
 * Naming   : String 'Unknown state_type_to_gui_state[]'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xf0870
 * Strings  :
 *   - 0x165b64: "newgui.cpp"
 *   - 0x165b42: "Unknown state_type_to_gui_state[]"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00053bb1) */

void FUN_00053a18(void)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint extraout_ECX;
  int iVar6;
  int local_24;
  uint local_1c;
  
  uVar2 = DAT_003d9874;
  DAT_003d9874 = DAT_003d9874 & 0xffbf;
  if (DAT_0034d0e4 < '\a') {
    DAT_0034d0e5 = '\0';
  }
  cVar3 = DAT_0034d0e4;
  if (DAT_0034d0e4 < '\x01') {
    cVar3 = '\x01';
  }
  if (cVar3 < '\a') {
    uVar4 = (uint)DAT_0034d0e4;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 6;
  }
  for (uVar5 = 0; uVar5 < (uVar4 & 0xffff); uVar5 = (uint)(byte)((char)uVar5 + 1)) {
    if (uVar5 == 0) {
      local_1c = 0x17;
    }
    else {
      local_1c = (uint)(ushort)(&DAT_0034d1a8)[uVar5 + (int)DAT_0034d0e5];
    }
    (&DAT_0034d0e6)[uVar5 * 4] = 0;
    iVar6 = 0;
    (&DAT_0034d0ea)[uVar5 * 4] = 0;
    local_24 = 0;
    (&DAT_0034d0ee)[uVar5 * 4] = 0;
    do {
      uVar1 = *(uint *)(&DAT_0019133e + local_24);
      if (uVar1 == 0) {
        (&DAT_0034d0e6)[(uVar5 & 0xff) * 4] =
             (&DAT_0034d0e6)[(uVar5 & 0xff) * 4] +
             (uint)*(ushort *)
                    (&DAT_002e05ed + iVar6 + DAT_002f10ce._3_1_ * 0x1508 + local_1c * 0x1e);
      }
      else if (uVar1 < 2) {
        (&DAT_0034d0ea)[(uVar5 & 0xff) * 4] =
             (&DAT_0034d0ea)[(uVar5 & 0xff) * 4] +
             (uint)*(ushort *)
                    (&DAT_002e05ed + iVar6 + local_1c * 0x1e + DAT_002f10ce._3_1_ * 0x1508);
      }
      else if (uVar1 == 2) {
        (&DAT_0034d0ee)[(uVar5 & 0xff) * 4] =
             (&DAT_0034d0ee)[(uVar5 & 0xff) * 4] +
             (uint)*(ushort *)
                    (&DAT_002e05ed + iVar6 + local_1c * 0x1e + DAT_002f10ce._3_1_ * 0x1508);
      }
      else {
        FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 2885, "Unknown state_type_to_gui_state[]") */
        uVar5 = extraout_ECX;
      }
      iVar6 = iVar6 + 2;
      local_24 = local_24 + 4;
    } while (iVar6 != 0x1e);
  }
  DAT_003d9874 = DAT_003d9874 | 4;
  FUN_000f0870(DAT_001992a0,(*(short *)(in_EAX + 10) + 0xda) / (int)(uint)DAT_0019cba6);
  DAT_003d9874 = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_053c05 (Ghidra: FUN_00053c05)
 * Prototype: undefined8 sub_053c05(void);
 * Address  : 0x53c05 (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x53ccc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00053c05(void)

{
  undefined4 in_EDX;
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  while( true ) {
    iVar1 = (int)cVar2;
    if (7 < iVar1) {
      return CONCAT44(in_EDX,0xffffffff);
    }
    if ((&DAT_0034bad7)[iVar1 * 0x20] == '\0') break;
    cVar2 = cVar2 + '\x01';
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_053c32 (Ghidra: FUN_00053c32)
 * Prototype: undefined8 sub_053c32(void);
 * Address  : 0x53c32 (Size: 57 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00053c32(void)

{
  char cVar1;
  undefined4 in_EDX;
  int iVar2;
  
  cVar1 = '\0';
  while( true ) {
    iVar2 = (int)cVar1;
    if (7 < iVar2) {
      return CONCAT44(in_EDX,0xffffffff);
    }
    if (((&DAT_0034bad7)[iVar2 * 0x20] != '\0') && ((&DAT_0034baf4)[iVar2 * 0x20] != '\0')) break;
    cVar1 = cVar1 + '\x01';
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_053c6b (Ghidra: FUN_00053c6b)
 * Prototype: undefined8 sub_053c6b(void);
 * Address  : 0x53c6b (Size: 56 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x52b58, 0x52def, 0x53ccc, 0x5449e, 0x59ccb, 0x59d02, 0x5abd1, 0x5aee2, 0x5b645, 0x5b940 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00053c6b(void)

{
  byte in_AL;
  undefined4 in_EDX;
  int iVar1;
  int iVar2;
  
  iVar1 = (uint)in_AL << 8;
  while( true ) {
    iVar2 = (int)(char)iVar1;
    if (7 < iVar2) {
      return CONCAT44(in_EDX,0xffffffff);
    }
    if (((&DAT_0034bad7)[iVar2 * 0x20] != '\0') &&
       ((char)((uint)iVar1 >> 8) == (&DAT_0034bad6)[iVar2 * 0x20])) break;
    iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + '\x01');
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_053ca3 (Ghidra: FUN_00053ca3)
 * Prototype: undefined8 sub_053ca3(void);
 * Address  : 0x53ca3 (Size: 41 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x540cb
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00053ca3(void)

{
  undefined4 in_EDX;
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  while( true ) {
    iVar1 = (int)cVar2;
    if (0x55 < iVar1) {
      return CONCAT44(in_EDX,0xffffffff);
    }
    if (((&DAT_0034bbd6)[iVar1 * 0x39] & 1) == 0) break;
    cVar2 = cVar2 + '\x01';
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : dk_oi_there_fade_time_053ccc (Ghidra: FUN_00053ccc)
 * Prototype: undefined8 dk_oi_there_fade_time_053ccc(void);
 * Address  : 0x53ccc (Size: 914 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:3104 ("Oi! There is a fade time less than 1. Idiot."); newgui.cpp:3151 ("Too many menus open")
 * Naming   : String 'Oi! There is a fade time less than 1. Idiot.'
 * Callers  : 2 -> 0x587ff, 0x5cf2d
 * Callees  : 10 -> 0x52b67, 0x53c05, 0x53c6b, 0x540cb, 0x5426d, 0x542d6, 0x5435a, 0x5b5f5, 0xdc150, 0xddaf0
 * Strings  :
 *   - 0x165b9c: "newgui.cpp"
 *   - 0x165bbe: "newgui.cpp"
 *   - 0x165bdd: "newgui.cpp"
 *   - 0x165b6f: "Oi! There is a fade time less than 1. Idiot."
 *   - 0x165ba7: "Cannot Allocate button"
 *   - 0x165bc9: "Too many menus open"
 ******************************************************************************/
undefined8 FUN_00053ccc(void)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  char *in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *extraout_ECX;
  char *pcVar9;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  undefined4 in_EDX;
  int local_1c;
  
  local_1c = FUN_00053c6b();
  if (local_1c == -1) {
    FUN_00052b67();
    local_1c = FUN_00053c05();
    if (local_1c == -1) {
LAB_00054052:
      uVar7 = FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3104, "Oi! There is a fade time less than 1. Idiot.") */
      uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),0xff);
      goto LAB_0005499e;
    }
    iVar5 = local_1c * 0x20;
    pcVar9 = &DAT_0034bad6 + iVar5;
    (&DAT_0034bad7)[iVar5] = 1;
    *(char **)(&DAT_0034baeb + iVar5) = in_EAX;
    (&DAT_0034baea)[iVar5] = (undefined1)local_1c;
    cVar2 = *in_EAX;
    *pcVar9 = cVar2;
    if (cVar2 == '\x01') {
      DAT_0017d175 = (short)DAT_003d9864 * DAT_0019cba6;
      DAT_0017d177 = FUN_000dc150();
      pcVar9 = extraout_ECX_00;
    }
    sVar3 = *(short *)(in_EAX + 8);
    if (sVar3 == -999) {
      *(ushort *)(pcVar9 + 8) = DAT_0019cba6 * (short)DAT_003d9864 - *(ushort *)(in_EAX + 0xc) / 2;
      goto LAB_00053e2b;
    }
    if (sVar3 == 999) {
      sVar3 = *(short *)(&DAT_0019d510 + DAT_002f10ce._3_1_ * 0x4ef) +
              (*(ushort *)(&DAT_0019d50c + DAT_002f10ce._3_1_ * 0x4ef) / 2 -
              *(ushort *)(in_EAX + 0xc) / 2);
LAB_00053e27:
      *(short *)(pcVar9 + 8) = sVar3;
    }
    else {
      if (sVar3 != -0x3e6) {
        sVar3 = *(short *)(in_EAX + 8);
        goto LAB_00053e27;
      }
      sVar3 = DAT_0017d175 - *(ushort *)(in_EAX + 0xc) / 2;
      *(short *)(pcVar9 + 8) = sVar3;
      if (sVar3 < 0x8c) {
        pcVar9[8] = -0x74;
        pcVar9[9] = '\0';
      }
      else if (DAT_003d982c < sVar3) {
        sVar3 = (short)DAT_003d982c;
        goto LAB_00053e27;
      }
    }
LAB_00053e2b:
    if (*(short *)(in_EAX + 10) == -999) {
      uVar1 = *(ushort *)(in_EAX + 0xe);
      iVar5 = FUN_000dc150();
      uVar6 = iVar5 - uVar1 / 2;
      pcVar9 = extraout_ECX_01;
LAB_00053ece:
      *(short *)(pcVar9 + 10) = (short)uVar6;
    }
    else if (*(short *)(in_EAX + 10) == 999) {
      *(ushort *)(pcVar9 + 10) =
           (*(ushort *)(&DAT_0019d50e + DAT_002f10ce._3_1_ * 0x4ef) / 2 -
           *(ushort *)(in_EAX + 0xe) / 2) + -10;
    }
    else {
      if (*(short *)(in_EAX + 8) != -0x3e6) {
        uVar6 = (uint)*(ushort *)(in_EAX + 10);
        goto LAB_00053ece;
      }
      sVar3 = DAT_0017d177 - *(ushort *)(in_EAX + 0xe) / 2;
      *(short *)(pcVar9 + 10) = sVar3;
      if (sVar3 < 0) {
        pcVar9[10] = '\0';
        pcVar9[0xb] = '\0';
      }
      else {
        uVar6 = (uint)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
        if ((int)uVar6 < (int)sVar3) goto LAB_00053ece;
      }
    }
    if (*(short *)(in_EAX + 8) == 999) {
      if ((int)*(short *)(pcVar9 + 8) <
          (int)(uint)*(ushort *)(&DAT_0019d510 + DAT_002f10ce._3_1_ * 0x4ef)) {
        sVar3 = *(short *)(&DAT_0019d510 + DAT_002f10ce._3_1_ * 0x4ef);
      }
      else {
        if ((int)*(short *)(pcVar9 + 8) <=
            (int)((uint)DAT_0019cba4 - (uint)*(ushort *)(in_EAX + 0xc))) goto LAB_00053f4e;
        sVar3 = DAT_0019cba4 - *(short *)(in_EAX + 0xc);
      }
LAB_00053f4a:
      *(short *)(pcVar9 + 8) = sVar3;
    }
    else if (*(short *)(pcVar9 + 8) < 0) {
      pcVar9[8] = '\0';
      pcVar9[9] = '\0';
    }
    else if ((int)((uint)DAT_0019cba4 - (uint)*(ushort *)(in_EAX + 0xc)) <
             (int)*(short *)(pcVar9 + 8)) {
      sVar3 = DAT_0019cba4 - *(short *)(in_EAX + 0xc);
      goto LAB_00053f4a;
    }
LAB_00053f4e:
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      if (((int)*in_EAX == (uint)(byte)(&DAT_00184176)[iVar5]) && (DAT_0019cba2 == 0x1e0)) {
        *(short *)(pcVar9 + 10) = *(short *)(pcVar9 + 10) + 0x50;
        break;
      }
    }
    sVar3 = *(short *)(in_EAX + 2);
    *(short *)(pcVar9 + 2) = sVar3;
    if (sVar3 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3151, "Too many menus open") */
      pcVar9 = extraout_ECX_02;
    }
    *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(in_EAX + 4);
    *(undefined2 *)(pcVar9 + 0xc) = *(undefined2 *)(in_EAX + 0xc);
    *(undefined2 *)(pcVar9 + 0xe) = *(undefined2 *)(in_EAX + 0xe);
    *(undefined4 *)(pcVar9 + 0x10) = *(undefined4 *)(in_EAX + 0x10);
    *(undefined4 *)(pcVar9 + 0x19) = *(undefined4 *)(in_EAX + 0x19);
    pcVar9[0x1e] = in_EAX[0x1e];
    pcVar9[0x1f] = in_EAX[0x1f];
    if (((DAT_0019d0b8 & 0x20) == 0) &&
       (iVar5 = FUN_0005b5f5(), pcVar9 = extraout_ECX_03, iVar5 != 0)) {
      extraout_ECX_03[0x1d] = '\0';
    }
    else {
      pcVar9[0x1d] = '\x01';
    }
    if (*(int *)(pcVar9 + 0x19) != 0) {
      (**(code **)(pcVar9 + 0x19))();
    }
    for (iVar5 = 0; *(char *)(*(int *)(in_EAX + 4) + iVar5) != -1; iVar5 = iVar5 + 0x37) {
      cVar2 = FUN_000540cb();
      if (cVar2 == -1) goto LAB_00054052;
    }
    FUN_0005435a();
    FUN_0005426d();
    iVar5 = FUN_000542d6();
  }
  else {
    iVar4 = local_1c * 0x20;
    puVar8 = &DAT_0034bad6 + iVar4;
    (&DAT_0034bad7)[iVar4] = 1;
    iVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(in_EAX + 2));
    *(undefined2 *)(&DAT_0034bad8 + iVar4) = *(undefined2 *)(in_EAX + 2);
    if (((DAT_0019d0b8 & 0x20) == 0) && (iVar5 = FUN_0005b5f5(), puVar8 = extraout_ECX, iVar5 != 0))
    {
      extraout_ECX[0x1d] = 0;
    }
    else {
      puVar8[0x1d] = 1;
    }
  }
  uVar7 = CONCAT31((int3)((uint)iVar5 >> 8),(undefined1)local_1c);
LAB_0005499e:
  return CONCAT44(in_EDX,uVar7);
}

/******************************************************************************
 * Function : sub_054089 (Ghidra: FUN_00054089)
 * Prototype: void sub_054089(void);
 * Address  : 0x54089 (Size: 66 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5449e, 0x5c848
 * Callees  : 1 -> 0x54269
 ******************************************************************************/
void FUN_00054089(void)

{
  int in_EAX;
  int iVar1;
  int extraout_EDX;
  char cVar2;
  
  if (*(char *)(in_EAX + 1) != '\0') {
    *(undefined1 *)(in_EAX + 1) = 0;
    cVar2 = '\0';
    while( true ) {
      if (0x55 < cVar2) break;
      iVar1 = cVar2 * 0x39;
      if ((((&DAT_0034bbd6)[iVar1] & 1) != 0) &&
         ((&DAT_0034bbd9)[iVar1] == *(char *)(in_EAX + 0x14))) {
        FUN_00054269();
        in_EAX = extraout_EDX;
      }
      cVar2 = cVar2 + '\x01';
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0540cb (Ghidra: FUN_000540cb)
 * Prototype: undefined4 sub_0540cb(void);
 * Address  : 0x540cb (Size: 414 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x53ccc
 * Callees  : 1 -> 0x53ca3
 ******************************************************************************/
undefined4 FUN_000540cb(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  short sVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined1 local_18;
  
  uVar9 = FUN_00053ca3();
  puVar7 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 == -1) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar3 = (int)uVar9 * 0x39;
    pbVar8 = &DAT_0034bbd6 + iVar3;
    *pbVar8 = *pbVar8 | 1;
    iVar2 = *(int *)(in_EAX + 0x15);
    (&DAT_0034bbd9)[iVar3] = *(undefined1 *)(in_EAX + 0x14);
    (&DAT_0034bbdc)[iVar3] = *puVar7;
    *(undefined2 *)((int)&DAT_0034bbda + iVar3) = *(undefined2 *)(puVar7 + 1);
    bVar1 = puVar7[5];
    *pbVar8 = *pbVar8 & 0xfd;
    *pbVar8 = *pbVar8 | (bVar1 & 1) * '\x02';
    *(undefined4 *)((int)&DAT_0034bbdd + iVar3) = *(undefined4 *)(puVar7 + 7);
    *(undefined4 *)(&DAT_0034bbe1 + iVar3) = *(undefined4 *)(puVar7 + 0xb);
    *(undefined4 *)((int)&DAT_0034bbe5 + iVar3) = *(undefined4 *)(puVar7 + 0xf);
    *(undefined2 *)(&DAT_0034bbf1 + iVar3) = *(undefined2 *)(puVar7 + 0x13);
    *(undefined2 *)((int)&DAT_0034bbfb + iVar3) = *(undefined2 *)(puVar7 + 0x1d);
    *(undefined2 *)((int)&DAT_0034bbfd + iVar3) = *(undefined2 *)(puVar7 + 0x1f);
    *(undefined4 *)((int)&DAT_0034bbe9 + iVar3) = *(undefined4 *)(puVar7 + 0x21);
    *(undefined2 *)(&DAT_0034bbff + iVar3) = *(undefined2 *)(puVar7 + 0x25);
    *(undefined2 *)(&DAT_0034bc01 + iVar3) = *(undefined2 *)(puVar7 + 0x27);
    *(undefined4 *)((int)&DAT_0034bc05 + iVar3) = *(undefined4 *)(puVar7 + 0x29);
    *(undefined4 *)((int)&DAT_0034bc09 + iVar3) = *(undefined4 *)(puVar7 + 0x2d);
    *(undefined2 *)(&DAT_0034bc03 + iVar3) = *(undefined2 *)(puVar7 + 0x31);
    uVar5 = *(undefined4 *)(puVar7 + 0x33);
    (&DAT_0034bbd7)[iVar3] = 0;
    *(undefined4 *)((int)&DAT_0034bbed + iVar3) = uVar5;
    *pbVar8 = *pbVar8 & 0xe3;
    *pbVar8 = *pbVar8 | 0xc;
    bVar1 = puVar7[6];
    *pbVar8 = *pbVar8 & 0xdf;
    *pbVar8 = *pbVar8 | (bVar1 & 1) << 5;
    if ((*(short *)(puVar7 + 0x15) == 999) || (*(short *)(puVar7 + 0x19) == 999)) {
      sVar6 = (*(short *)(in_EAX + 8) + *(ushort *)(iVar2 + 0xc) / 2) -
              *(ushort *)(extraout_ECX + 0x1d) / 2;
      *(short *)((int)&DAT_0034bbf3 + iVar3) = sVar6;
      *(short *)(&DAT_0034bbf7 + iVar3) = sVar6;
    }
    else {
      *(short *)(&DAT_0034bbf7 + iVar3) = *(short *)(puVar7 + 0x19) + *(short *)(in_EAX + 8);
      *(short *)((int)&DAT_0034bbf3 + iVar3) = *(short *)(puVar7 + 0x15) + *(short *)(in_EAX + 8);
    }
    if ((*(short *)(extraout_ECX + 0x17) == 999) || (*(short *)(extraout_ECX + 0x1b) == 999)) {
      sVar6 = (*(short *)(in_EAX + 10) + *(ushort *)(iVar2 + 0xe) / 2) -
              *(ushort *)(extraout_ECX + 0x1f) / 2;
      *(short *)(&DAT_0034bbf5 + iVar3) = sVar6;
      *(short *)((int)&DAT_0034bbf9 + iVar3) = sVar6;
    }
    else {
      *(short *)((int)&DAT_0034bbf9 + iVar3) =
           *(short *)(extraout_ECX + 0x1b) + *(short *)(in_EAX + 10);
      *(short *)(&DAT_0034bbf5 + iVar3) = *(short *)(extraout_ECX + 0x17) + *(short *)(in_EAX + 10);
    }
    uVar4 = (uint)(char)(&DAT_0034bbdc)[iVar3];
    if (((uVar4 == 3) && (*(int *)((int)&DAT_0034bc09 + iVar3) != 0)) &&
       (uVar4 = (uint)**(byte **)((int)&DAT_0034bc09 + iVar3), uVar4 == 1)) {
      (&DAT_0034bbd7)[iVar3] = 1;
    }
    else {
      (&DAT_0034bbd7)[iVar3] = 0;
    }
    local_18 = (undefined1)uVar9;
    uVar5 = CONCAT31((int3)(uVar4 >> 8),local_18);
    (&DAT_0034bbd8)[iVar3] = 0;
  }
  return uVar5;
}

/******************************************************************************
 * Function : sub_054269 (Ghidra: FUN_00054269)
 * Prototype: void sub_054269(void);
 * Address  : 0x54269 (Size: 4 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x54089
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00054269(void)

{
  byte *in_EAX;
  
  *in_EAX = *in_EAX & 0xfe;
  return;
}

/******************************************************************************
 * Function : sub_05426d (Ghidra: FUN_0005426d)
 * Prototype: void sub_05426d(void);
 * Address  : 0x5426d (Size: 105 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x53ccc
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005426d(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  byte local_18;
  
  for (local_18 = 0; local_18 < 0x56; local_18 = local_18 + 1) {
    iVar2 = (uint)local_18 * 0x39;
    if (((*(int *)((int)&DAT_0034bc09 + iVar2) != 0) &&
        ((&DAT_0034bbd9)[iVar2] == *(char *)(in_EAX + 0x14))) && ((&DAT_0034bbdc)[iVar2] == '\x04'))
    {
      iVar1 = **(int **)((int)&DAT_0034bc09 + iVar2);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (*(short *)(&DAT_0034bc03 + iVar2) < iVar1) {
        iVar1 = (int)*(short *)(&DAT_0034bc03 + iVar2);
      }
      *(short *)((int)&DAT_0034bc0d + iVar2) =
           (short)((iVar1 << 8) / (*(short *)(&DAT_0034bc03 + iVar2) + 1));
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0542d6 (Ghidra: FUN_000542d6)
 * Prototype: void sub_0542d6(void);
 * Address  : 0x542d6 (Size: 53 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x53ccc
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000542d6(void)

{
  int in_EAX;
  char cVar1;
  char extraout_CL;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  while (cVar1 = (char)uVar2, uVar2 < 0x56) {
    iVar3 = uVar2 * 0x39;
    if ((*(int *)((int)&DAT_0034bbed + iVar3) != 0) &&
       ((&DAT_0034bbd9)[iVar3] == *(char *)(in_EAX + 0x14))) {
      (**(code **)((int)&DAT_0034bbed + iVar3))();
      cVar1 = extraout_CL;
    }
    uVar2 = (uint)(byte)(cVar1 + 1);
  }
  return;
}

/******************************************************************************
 * Function : sub_05430b (Ghidra: FUN_0005430b)
 * Prototype: void sub_05430b(void);
 * Address  : 0x5430b (Size: 25 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005430b(void)

{
  int in_EAX;
  
  **(int **)(in_EAX + 0x33) =
       (int)((uint)*(ushort *)(in_EAX + 0x37) * (*(short *)(in_EAX + 0x2d) + 1)) >> 8;
  return;
}

/******************************************************************************
 * Function : sub_054324 (Ghidra: FUN_00054324)
 * Prototype: void sub_054324(void);
 * Address  : 0x54324 (Size: 54 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x58718
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00054324(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < 0x56; uVar2 = (uint)(byte)((char)uVar2 + 1)) {
    iVar1 = uVar2 * 0x39;
    if (((&DAT_0034bbdc)[iVar1] == '\x03') &&
       (uVar2 = (uint)CONCAT11((&DAT_0034bbd9)[iVar1],(char)uVar2),
       (&DAT_0034bbd9)[iVar1] == *(char *)(in_EAX + 0x14))) {
      (&DAT_0034bbd7)[iVar1] = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05435a (Ghidra: FUN_0005435a)
 * Prototype: void sub_05435a(void);
 * Address  : 0x5435a (Size: 70 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x53ccc, 0x58718
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005435a(void)

{
  undefined1 *puVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar3 < 0x56; uVar3 = (uint)(byte)((char)uVar3 + 1)) {
    iVar2 = uVar3 * 0x39;
    puVar1 = *(undefined1 **)((int)&DAT_0034bc09 + iVar2);
    if (((puVar1 != (undefined1 *)0x0) &&
        (uVar3 = (uint)CONCAT11((&DAT_0034bbd9)[iVar2],(char)uVar3),
        (&DAT_0034bbd9)[iVar2] == *(char *)(in_EAX + 0x14))) && ((&DAT_0034bbdc)[iVar2] == '\x03'))
    {
      if ((&DAT_0034bbd7)[iVar2] == '\0') {
        *puVar1 = 0;
      }
      else {
        *puVar1 = 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0543dd (Ghidra: FUN_000543dd)
 * Prototype: void sub_0543dd(void);
 * Address  : 0x543dd (Size: 173 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2ca74, 0x2e8a7, 0x402e5
 * Callees  : 2 -> 0x5cd55, 0xe6a10
 ******************************************************************************/
void FUN_000543dd(void)

{
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  DAT_0034d1a8 = 0x17;
  DAT_0034d0e4 = 1;
  DAT_0034d0e5 = 0;
  DAT_0017d175 = 0xfc19;
  DAT_0017d177 = 0xfc19;
  DAT_0017d179 = 0xfc19;
  DAT_0017d17b._0_2_ = 0xfc19;
  FUN_0005cd55();
  DAT_0034cf15 = 0;
  DAT_0034cf1f = 0;
  DAT_0034cfe3 = 0;
  DAT_0034cf04 = 0;
  return;
}

/******************************************************************************
 * Function : sub_05449e (Ghidra: FUN_0005449e)
 * Prototype: void sub_05449e(void);
 * Address  : 0x5449e (Size: 676 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x2fda1, 0x8685c, 0x872a4, 0x872b8, 0x87694, 0x87870
 * Callees  : 9 -> 0x52b58, 0x52be7, 0x53c6b, 0x54089, 0x54742, 0x588b6, 0x5cc56, 0xe6b20, 0x13a710
 ******************************************************************************/
void FUN_0005449e(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  byte *pbVar5;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  byte *extraout_ECX_06;
  byte *pbVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar7;
  int extraout_EDX_01;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  byte *pbVar12;
  
  uVar3 = (uint)DAT_003d9874;
  DAT_003d98b4 = DAT_001991b8;
  FUN_000e6b20();
  do {
    cVar2 = FUN_000588b6();
    iVar4 = extraout_ECX;
    iVar7 = extraout_EDX;
    if (cVar2 == -1) {
      FUN_00054089();
      FUN_00052be7();
      iVar4 = extraout_ECX_00;
      iVar7 = extraout_EDX_00;
    }
  } while (iVar7 + 0x20 != iVar4);
  for (iVar4 = 0; iVar4 < DAT_0034cf04; iVar4 = iVar4 + 1) {
    uVar11 = FUN_00053c6b();
    iVar7 = (int)((ulonglong)uVar11 >> 0x20) + (int)uVar11 * 0x20;
    iVar4 = extraout_ECX_01;
    if ((*(char *)(iVar7 + 1) != '\0') && (*(char *)(iVar7 + 0x1d) != '\0')) {
      if ((*(char *)(iVar7 + 1) != '\x02') &&
         ((*(short *)(iVar7 + 2) != 0 && (*(short *)(*(int *)(iVar7 + 0x15) + 2) != 0)))) {
        DAT_003d9874 = DAT_003d9874 | 4;
      }
      if (*(int *)(iVar7 + 0x10) != 0) {
        (**(code **)(iVar7 + 0x10))();
        iVar4 = extraout_ECX_02;
        iVar7 = extraout_EDX_01;
      }
      if (*(char *)(iVar7 + 1) == '\x02') {
        FUN_00054742();
        iVar4 = extraout_ECX_03;
      }
      DAT_003d9874 = DAT_003d9874 & 0xfffb;
    }
  }
  if ((DAT_002ee79f != 0) && (iVar4 = FUN_00053c6b(), (&DAT_0034baf3)[iVar4 * 0x20] != '\0')) {
    pbVar5 = &DAT_0034bbd6;
    pbVar12 = &DAT_0034cefc;
    do {
      pbVar6 = pbVar5;
      if ((((*(int *)(pbVar5 + 0x13) != 0) && ((*pbVar5 & 4) != 0)) && ((*pbVar5 & 1) != 0)) &&
         (DAT_002ee79f != 0)) {
        bVar1 = false;
        switch(*(undefined2 *)(pbVar5 + 4)) {
        case 1:
          if (0x43 < DAT_002ee79f) {
            bVar10 = SBORROW4(DAT_002ee79f,0x47);
            bVar9 = DAT_002ee79f + -0x47 < 0;
            bVar8 = DAT_002ee79f == 0x47;
LAB_000545de:
            if (bVar8 || bVar10 != bVar9) {
              bVar1 = true;
            }
          }
          break;
        case 2:
          if (5 < DAT_002ee79f) {
            bVar10 = SBORROW4(DAT_002ee79f,0x14);
            bVar9 = DAT_002ee79f + -0x14 < 0;
            bVar8 = DAT_002ee79f == 0x14;
            goto LAB_000545de;
          }
          break;
        case 3:
          if (0x14 < DAT_002ee79f) {
            bVar10 = SBORROW4(DAT_002ee79f,0x24);
            bVar9 = DAT_002ee79f + -0x24 < 0;
            bVar8 = DAT_002ee79f == 0x24;
            goto LAB_000545de;
          }
          break;
        case 4:
          if (0x34 < DAT_002ee79f) {
            bVar10 = SBORROW4(DAT_002ee79f,0x3d);
            bVar9 = DAT_002ee79f + -0x3d < 0;
            bVar8 = DAT_002ee79f == 0x3d;
            goto LAB_000545de;
          }
        }
        if (bVar1) {
          cVar2 = FUN_00052b58();
          pbVar6 = extraout_ECX_04;
          if (cVar2 == '\0') {
            FUN_0013a710((int)(((int)*(short *)(pbVar5 + 0x23) + *(ushort *)(pbVar5 + 0x27) / 2) -
                              ((uint)*(byte *)(DAT_001991c0 + 0x425) * (uint)DAT_0019cba6) / 2) /
                         (int)(uint)DAT_0019cba6,uVar3,pbVar12,
                         DAT_001991c0 + ((DAT_002e8bee >> 1 & 7) + 0xb0) * 6);
            pbVar6 = extraout_ECX_05;
          }
        }
        else {
          FUN_0005cc56();
          pbVar6 = extraout_ECX_06;
        }
      }
      pbVar5 = pbVar6 + 0x39;
    } while (pbVar5 != pbVar12);
  }
  if (((DAT_002ee79f != 0) && (DAT_002ee7a3 != -1)) &&
     (DAT_002ee7a3 = DAT_002ee7a3 + -1, DAT_002ee7a3 == 0)) {
    DAT_002ee79f = 0;
  }
  DAT_003d9874 = (short)uVar3;
  return;
}

/******************************************************************************
 * Function : sub_054742 (Ghidra: FUN_00054742)
 * Prototype: void sub_054742(void);
 * Address  : 0x54742 (Size: 177 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5449e
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00054742(void)

{
  int in_EAX;
  char cVar1;
  char extraout_CL;
  char extraout_CL_00;
  int iVar2;
  
  for (cVar1 = '\0'; cVar1 < 0x56; cVar1 = cVar1 + '\x01') {
    iVar2 = cVar1 * 0x39;
    if (((((*(int *)((int)&DAT_0034bbe9 + iVar2) != 0) && (((&DAT_0034bbd6)[iVar2] & 4) != 0)) &&
         (((&DAT_0034bbd6)[iVar2] & 1) != 0)) &&
        ((&DAT_0034bbd9)[iVar2] == *(char *)(in_EAX + 0x14))) &&
       ((((&DAT_0034bbd7)[iVar2] == '\0' && ((&DAT_0034bbd8)[iVar2] == '\0')) ||
        (((&DAT_0034bbdc)[iVar2] == '\x04' ||
         (*(code **)((int)&DAT_0034bbe9 + iVar2) == FUN_000547f3)))))) {
      (**(code **)((int)&DAT_0034bbe9 + iVar2))();
      cVar1 = extraout_CL;
    }
  }
  for (cVar1 = '\0'; cVar1 < 0x56; cVar1 = cVar1 + '\x01') {
    iVar2 = cVar1 * 0x39;
    if ((((*(int *)((int)&DAT_0034bbe9 + iVar2) != 0) && (((&DAT_0034bbd6)[iVar2] & 4) != 0)) &&
        (((&DAT_0034bbd6)[iVar2] & 1) != 0)) &&
       ((((&DAT_0034bbd9)[iVar2] == *(char *)(in_EAX + 0x14) && ((&DAT_0034bbdc)[iVar2] != '\x04'))
        && ((*(code **)((int)&DAT_0034bbe9 + iVar2) != FUN_000547f3 &&
            (((&DAT_0034bbd7)[iVar2] != '\0' || ((&DAT_0034bbd8)[iVar2] != '\0')))))))) {
      (**(code **)((int)&DAT_0034bbe9 + iVar2))();
      cVar1 = extraout_CL_00;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0547f3 (Ghidra: FUN_000547f3)
 * Prototype: void sub_0547f3(void);
 * Address  : 0x547f3 (Size: 57 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000547f3(void)

{
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : dk_cycle_button_have_gui_05482c (Ghidra: FUN_0005482c)
 * Prototype: void dk_cycle_button_have_gui_05482c(void);
 * Address  : 0x5482c (Size: 159 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:3645 ("Cycle button cannot have a 'gui_area_normal_button' draw function!")
 * Naming   : String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xf2800
 * Strings  :
 *   - 0x165c2b: "newgui.cpp"
 *   - 0x165be8: "Cycle button cannot have a 'gui_area_normal_button' draw function!"
 ******************************************************************************/
void FUN_0005482c(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  
  if (in_EAX[6] == 2) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3645, "Cycle button cannot have a 'gui_area_normal_button' draw function!") */
    in_EAX = extraout_ECX;
  }
  if ((*in_EAX & 8) == 0) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : dk_cycle_button_have_gui_0548cb (Ghidra: FUN_000548cb)
 * Prototype: void dk_cycle_button_have_gui_0548cb(void);
 * Address  : 0x548cb (Size: 217 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:3665 ("Cycle button cannot have a 'gui_area_normal_button' draw function!")
 * Naming   : String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xddaf0, 0xf2800, 0x13a710
 * Strings  :
 *   - 0x165c79: "newgui.cpp"
 *   - 0x165c36: "Cycle button cannot have a 'gui_area_normal_button' draw function!"
 ******************************************************************************/
void FUN_000548cb(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  
  if (in_EAX[6] == 2) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3665, "Cycle button cannot have a 'gui_area_normal_button' draw function!") */
    in_EAX = extraout_ECX;
  }
  if ((*in_EAX & 8) == 0) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_0549a4 (Ghidra: FUN_000549a4)
 * Prototype: void sub_0549a4(void);
 * Address  : 0x549a4 (Size: 126 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf2800
 ******************************************************************************/
void FUN_000549a4(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 8) == 0) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_054a22 (Ghidra: FUN_00054a22)
 * Prototype: void sub_054a22(void);
 * Address  : 0x54a22 (Size: 135 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf2800
 ******************************************************************************/
void FUN_00054a22(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 8) == 0) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_054aa9 (Ghidra: FUN_00054aa9)
 * Prototype: void sub_054aa9(void);
 * Address  : 0x54aa9 (Size: 52 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00054aa9(void)

{
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : dk_cycle_button_must_have_054add (Ghidra: FUN_00054add)
 * Prototype: void dk_cycle_button_must_have_054add(void);
 * Address  : 0x54add (Size: 206 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:3747 ("Cycle button must have a non-null UBYTE Data pointer!"); newgui.cpp:3752 ("Cycle button must have a non-zero MaxVal!")
 * Naming   : String 'Cycle button must have a non-null UBYTE Data pointer!'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xf2800
 * Strings  :
 *   - 0x165cba: "newgui.cpp"
 *   - 0x165cef: "newgui.cpp"
 *   - 0x165c84: "Cycle button must have a non-null UBYTE Data pointer!"
 *   - 0x165cc5: "Cycle button must have a non-zero MaxVal!"
 ******************************************************************************/
void FUN_00054add(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (in_EAX[6] == 2) {
    if (*(int *)(in_EAX + 0x33) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3747, "Cycle button must have a non-null UBYTE Data pointer!") */
      in_EAX = extraout_ECX;
    }
    if (*(short *)(in_EAX + 0x2d) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3752, "Cycle button must have a non-zero MaxVal!") */
      in_EAX = extraout_ECX_00;
    }
  }
  if ((((*in_EAX & 8) == 0) || (in_EAX[1] != 0)) || (in_EAX[2] != 0)) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : dk_cycle_button_must_have_054bab (Ghidra: FUN_00054bab)
 * Prototype: void dk_cycle_button_must_have_054bab(void);
 * Address  : 0x54bab (Size: 206 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:3786 ("Cycle button must have a non-null UBYTE Data pointer!"); newgui.cpp:3791 ("Cycle button must have a non-zero MaxVal!")
 * Naming   : String 'Cycle button must have a non-null UBYTE Data pointer!'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xf2800
 * Strings  :
 *   - 0x165d30: "newgui.cpp"
 *   - 0x165d65: "newgui.cpp"
 *   - 0x165cfa: "Cycle button must have a non-null UBYTE Data pointer!"
 *   - 0x165d3b: "Cycle button must have a non-zero MaxVal!"
 ******************************************************************************/
void FUN_00054bab(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (in_EAX[6] == 2) {
    if (*(int *)(in_EAX + 0x33) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3786, "Cycle button must have a non-null UBYTE Data pointer!") */
      in_EAX = extraout_ECX;
    }
    if (*(short *)(in_EAX + 0x2d) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3791, "Cycle button must have a non-zero MaxVal!") */
      in_EAX = extraout_ECX_00;
    }
  }
  if ((((*in_EAX & 8) == 0) || (in_EAX[1] != 0)) || (in_EAX[2] != 0)) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_054c79 (Ghidra: FUN_00054c79)
 * Prototype: void sub_054c79(void);
 * Address  : 0x54c79 (Size: 200 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x57739, 0x57bba, 0x57cac, 0xe7714
 ******************************************************************************/
void FUN_00054c79(void)

{
  ushort uVar1;
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(in_EAX + 0x29);
  if ((*in_EAX & 8) == 0) {
    return;
  }
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      in_EAX[0x27] = 0x20;
      in_EAX[0x28] = 0;
      if ((in_EAX[1] != 0) || (in_EAX[2] != 0)) {
        FUN_00057bba();
        FUN_00057cac();
        in_EAX = extraout_ECX_00;
        goto LAB_00054cfd;
      }
    }
    else {
      if (uVar1 != 2) goto LAB_00054cfd;
      in_EAX[0x27] = 0x20;
      in_EAX[0x28] = 0;
    }
    FUN_00057bba();
    in_EAX = extraout_ECX;
  }
LAB_00054cfd:
  if (*(ushort *)(in_EAX + 0x2b) == 0xc9) {
    if (*(int *)(in_EAX + 0x33) == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(in_EAX + 0x33);
    puVar2 = &DAT_00165d73;
  }
  else {
    uVar3 = (&DAT_0033319b)[*(ushort *)(in_EAX + 0x2b)];
    puVar2 = &DAT_00165d70;
  }
  FUN_000e7714(&DAT_0019cbac,puVar2,uVar3);
  FUN_00057739();
  return;
}

/******************************************************************************
 * Function : dk_button_must_point_scroll_054d41 (Ghidra: FUN_00054d41)
 * Prototype: void dk_button_must_point_scroll_054d41(void);
 * Address  : 0x54d41 (Size: 73 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:3880 ("Button must point to a SCROLL_TEXT_WINDOW data item")
 * Naming   : String 'Button must point to a SCROLL_TEXT_WINDOW data item'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x5789a, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x165dad: "newgui.cpp"
 *   - 0x165d79: "Button must point to a SCROLL_TEXT_WINDOW data item"
 ******************************************************************************/
void FUN_00054d41(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 8) != 0) {
    if (*(int *)(in_EAX + 0x33) != 0) {
      FUN_000e7714(&DAT_0019cbac,&DAT_00165d76,*(int *)(in_EAX + 0x33));
      FUN_0005789a();
      return;
    }
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 3880, "Button must point to a SCROLL_TEXT_WINDOW data item") */
  }
  return;
}

/******************************************************************************
 * Function : sub_054d8a (Ghidra: FUN_00054d8a)
 * Prototype: void sub_054d8a(void);
 * Address  : 0x54d8a (Size: 353 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xf2800, 0x13a710
 ******************************************************************************/
void FUN_00054d8a(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar3;
  
  uVar2 = DAT_003d9874;
  bVar1 = *(byte *)(in_EAX + 0x33);
  FUN_0013a710();
  if ((&DAT_002e1518)[(uint)bVar1 + DAT_002f10ce._3_1_ * 0x1508] != '\0') {
    if ((*extraout_ECX & 8) != 0) {
      pbVar3 = extraout_ECX;
      if (*(short *)(&DAT_002e0594 + (uint)bVar1 * 2 + DAT_002f10ce._3_1_ * 0x1508) != 0) {
        FUN_0013a710();
        pbVar3 = extraout_ECX_00;
      }
      if ((pbVar3[1] != 0) || (pbVar3[2] != 0)) {
        FUN_000f2800();
        DAT_003d9874 = uVar2;
        return;
      }
    }
    FUN_0013a710();
  }
  DAT_003d9874 = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_054eeb (Ghidra: FUN_00054eeb)
 * Prototype: void sub_054eeb(void);
 * Address  : 0x54eeb (Size: 761 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x57b6f, 0xd003c, 0xd0098, 0xe7714, 0xf0870, 0xf2800, 0x13a710
 * Strings  :
 *   - 0x165db8: "%ld"
 *   - 0x165dbc: "@%ld"
 ******************************************************************************/
void FUN_00054eeb(void)

{
  int in_EAX;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uStack_2c;
  uint local_28;
  int local_24;
  uint local_20;
  byte local_1c;
  
  puVar5 = &local_28;
  local_1c = *(byte *)(in_EAX + 0x33);
  local_20 = (uint)DAT_003d9874;
  if (*(int *)(in_EAX + 0x33) == 0) {
    uStack_2c = 0x553bf;
    FUN_0013a710();
    goto LAB_0005499e;
  }
  if ((local_1c == 1) || (local_1c == 7)) {
LAB_00054fe0:
    uStack_2c = 0x5500c;
    FUN_0013a710();
  }
  else {
    DAT_003d9874 = DAT_003d9874 & 0xffeb;
    uStack_2c = 0x54f46;
    iVar1 = FUN_000d0098();
    if (iVar1 < 0) goto LAB_00054fe0;
    local_28 = (uint)DAT_0019cba6;
    uStack_2c = 0x54f7f;
    FUN_0013a710();
    iVar4 = iVar1 * 0x15 >> 0x1f;
    uStack_2c = (uint)DAT_001992a0;
    puVar5 = &uStack_2c;
    local_28 = (uint)(6 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
    local_24 = (((int)((iVar1 * 0x15 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8) * -2 + 0x2a)
               / (int)(uint)DAT_0019cba6;
    FUN_000f0870();
  }
  *(int *)((int)puVar5 + -4) = (int)*(short *)(&DAT_002eadcd + (uint)local_1c * 4);
  *(undefined **)((int)puVar5 + -8) = &DAT_00165db8; /* 0x165db8="%ld" */
  *(undefined1 **)((int)puVar5 + -0xc) = &DAT_0019cbac;
  DAT_003d9874 = DAT_003d9874 & 0xffbf;
  *(undefined4 *)((int)puVar5 + -0x10) = 0x5502f;
  FUN_000e7714();
  if ((int)(&DAT_002e1082)[DAT_002f10ce._3_1_ * 0x542] <
      (int)*(short *)(&DAT_002eadcd + DAT_002ee8ad * 4)) {
    *(undefined4 *)((int)puVar5 + -4) = 0x55141;
    FUN_0013a710();
  }
  else {
    iVar1 = DAT_002f10ce._3_1_ * 0x4ef;
    if ((((&DAT_0019d51b)[iVar1] == '\x02') && ((byte)(&DAT_0019d56b)[iVar1] == DAT_002ee8ad)) &&
       (((byte)DAT_002e8bee & 1) != 0)) {
      *(undefined4 *)((int)puVar5 + -4) = 0x550f1;
      FUN_000f2800();
    }
    else {
      *(undefined4 *)((int)puVar5 + -4) = 0x550b8;
      FUN_0013a710();
    }
    for (pcVar2 = &DAT_0019cbac; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
      if (0xff < *pcVar2) {
        *pcVar2 = *pcVar2 + -0x78;
      }
    }
  }
  *(undefined4 *)((int)puVar5 + -4) = 0x55163;
  FUN_00057b6f();
  *(undefined4 *)((int)puVar5 + -4) = 0x55180;
  uVar3 = FUN_000d003c();
  *(undefined4 *)((int)puVar5 + -4) = uVar3;
  *(undefined **)((int)puVar5 + -8) = &DAT_00165dbc; /* 0x165dbc="@%ld" */
  *(undefined1 **)((int)puVar5 + -0xc) = &DAT_0019cbac;
  *(undefined4 *)((int)puVar5 + -0x10) = 0x55190;
  FUN_000e7714();
  *(undefined4 *)((int)puVar5 + -4) = 0x551b3;
  FUN_00057b6f();
LAB_0005499e:
  DAT_003d9874 = (short)local_20;
  return;
}

/******************************************************************************
 * Function : sub_0551e4 (Ghidra: FUN_000551e4)
 * Prototype: void sub_0551e4(void);
 * Address  : 0x551e4 (Size: 583 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xf2800, 0x13a710
 ******************************************************************************/
void FUN_000551e4(void)

{
  byte bVar1;
  undefined2 uVar2;
  int in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar3;
  
  uVar2 = DAT_003d9874;
  bVar1 = *(byte *)(in_EAX + 0x33);
  FUN_0013a710();
  if ((&DAT_002e157d)[DAT_002f10ce._3_1_ * 0x1508 + (uint)bVar1] != '\0') {
    if ((*extraout_ECX & 8) != 0) {
      if ((((*(int *)(&DAT_0018e977 + (uint)bVar1 * 0x1b) == 6) &&
           ((&DAT_002e0e0d)[DAT_002f10ce._3_1_ * 0x542] != 0)) ||
          ((*(int *)(&DAT_0018e977 + (uint)bVar1 * 0x1b) == 8 &&
           (*(short *)(&DAT_002e0b61 + DAT_002f10ce._3_1_ * 0x1508) != 0)))) ||
         ((pbVar3 = extraout_ECX, *(int *)(extraout_ECX + 0x33) == 3 &&
          (*(int *)(&DAT_002e0e11 + DAT_002f10ce._3_1_ * 0x1508) != 0)))) {
        FUN_0013a710();
        pbVar3 = extraout_ECX_00;
      }
      if (((pbVar3[1] != 0) || (pbVar3[2] != 0)) ||
         ((((*(int *)(&DAT_0018e977 + (uint)bVar1 * 0x1b) == 6 &&
            ((&DAT_002e0e0d)[DAT_002f10ce._3_1_ * 0x542] != 0)) ||
           ((*(int *)(&DAT_0018e977 + (uint)bVar1 * 0x1b) == 8 &&
            (*(short *)(&DAT_002e0b61 + DAT_002f10ce._3_1_ * 0x1508) != 0)))) &&
          (((byte)DAT_002e8bee & 1) != 0)))) {
        FUN_000f2800();
        DAT_003d9874 = uVar2;
        return;
      }
    }
    FUN_0013a710();
  }
  DAT_003d9874 = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_05542b (Ghidra: FUN_0005542b)
 * Prototype: void sub_05542b(void);
 * Address  : 0x5542b (Size: 726 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x4fa5b, 0xe7714, 0xf0870, 0xf2800, 0x13a710
 * Strings  :
 *   - 0x165dc1: "%ld"
 ******************************************************************************/
void FUN_0005542b(void)

{
  int in_EAX;
  int iVar1;
  char *pcVar2;
  int extraout_ECX;
  uint *puVar3;
  uint uStack_2c;
  int local_28;
  int local_24;
  uint local_20;
  byte local_1c;
  
  puVar3 = (uint *)&local_28;
  local_1c = *(byte *)(in_EAX + 0x33);
  local_20 = (uint)DAT_003d9874;
  if (local_1c == 0) {
    uStack_2c = 0x553bf;
    FUN_0013a710();
    goto LAB_0005499e;
  }
  if ((&DAT_0018e97b)[(uint)local_1c * 0x1b] == '\0') {
LAB_00055576:
    uStack_2c = 0x5557d;
    FUN_0013a710();
  }
  else {
    DAT_003d9874 = DAT_003d9874 & 0xffeb;
    uStack_2c = 0x55493;
    iVar1 = FUN_0004fa5b();
    if (iVar1 < 0) goto LAB_00055576;
    local_28 = DAT_00199230 + 0x8a;
    uStack_2c = 0x554cb;
    FUN_0013a710();
    iVar1 = extraout_ECX * 0x15 >> 0x1f;
    uStack_2c = (uint)DAT_001992a0;
    puVar3 = &uStack_2c;
    local_28 = (int)(6 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
    local_24 = (((int)((extraout_ECX * 0x15 + iVar1 * -0x100) - (uint)(iVar1 << 7 < 0)) >> 8) * -2 +
               0x2a) / (int)(uint)DAT_0019cba6;
    FUN_000f0870();
  }
  DAT_003d9874 = DAT_003d9874 & 0xffbf;
  if (local_1c == 2) {
    iVar1 = ((byte)(&DAT_002e0ea1)[(uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508]
            + 1) - (uint)(byte)(&DAT_002e0e76)
                               [(uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508];
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    iVar1 = (iVar1 * DAT_002eaea9) / 2;
  }
  else {
    iVar1 = *(int *)(&DAT_002eae11 + (uint)local_1c * 0x4c);
  }
  *(int *)((int)puVar3 + -4) = iVar1;
  *(undefined **)((int)puVar3 + -8) = &DAT_00165dc1; /* 0x165dc1="%ld" */
  *(undefined1 **)((int)puVar3 + -0xc) = &DAT_0019cbac;
  *(undefined4 *)((int)puVar3 + -0x10) = 0x555ed;
  FUN_000e7714();
  if ((int)(&DAT_002e1082)[DAT_002f10ce._3_1_ * 0x542] < iVar1) {
    *(undefined4 *)((int)puVar3 + -4) = 0x556e7;
    FUN_0013a710();
  }
  else {
    if (((uint)(byte)(&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] ==
         *(uint *)(&DAT_0018e977 + (uint)local_1c * 0x1b)) && (((byte)DAT_002e8bee & 1) != 0)) {
      local_28 = DAT_00199230 + *(short *)(in_EAX + 0x29) * 6;
      *(undefined4 *)((int)puVar3 + -4) = 0x556a3;
      FUN_000f2800();
    }
    else {
      *(undefined4 *)((int)puVar3 + -4) = 0x55663;
      FUN_0013a710();
    }
    for (pcVar2 = &DAT_0019cbac; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
      *pcVar2 = *pcVar2 + -0x78;
    }
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x551b3;
  FUN_00057b6f();
LAB_0005499e:
  DAT_003d9874 = (short)local_20;
  return;
}

/******************************************************************************
 * Function : sub_055701 (Ghidra: FUN_00055701)
 * Prototype: void sub_055701(void);
 * Address  : 0x55701 (Size: 1087 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x49e95, 0x49ea9, 0x56ee6, 0x5c8fa, 0x720ce, 0xe6d80, 0xe7714, 0x13a710
 ******************************************************************************/
void FUN_00055701(void)

{
  ushort uVar1;
  byte *pbVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_20;
  
  iVar3 = (int)*(short *)(in_EAX + 0x29);
  uVar1 = *(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef);
  if (((&DAT_001ae9fc)[uVar1] == 0) || (*(char *)((&DAT_001ae9fc)[uVar1] + 0x1f) != '\x05')) {
    FUN_0013a710();
    FUN_000f0870(DAT_001992a0,(int)(0x20 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6));
  }
  else {
    if (DAT_0034d1f0 == 0) {
      iVar5 = *(int *)(in_EAX + 0x33) + 4;
    }
    else {
      iVar5 = *(int *)(in_EAX + 0x33);
    }
    local_20 = 0;
    for (iVar7 = 0; uVar6 = 0, iVar7 < 10; iVar7 = iVar7 + 1) {
      uVar6 = (uint)(byte)(&DAT_002e918d)
                          [iVar7 + (uint)*(byte *)((&DAT_001ae9fc)
                                                   [*(ushort *)
                                                     ((int)&DAT_0019d0f7 +
                                                     DAT_002f10ce._3_1_ * 0x4ef)] + 0x1a) * 0xe6];
      iVar4 = FUN_00049e95();
      if (iVar4 != 0) {
        if (local_20 == iVar5) break;
        local_20 = local_20 + 1;
      }
    }
    iVar7 = FUN_00049e95();
    if ((iVar7 == 0) || (uVar6 == 0)) {
      FUN_0013a710();
      FUN_00056ee6((*(short *)(in_EAX + 0x1f) + 8) / (int)(uint)DAT_0019cba6,iVar3);
      return;
    }
    if (uVar6 == *(byte *)((&DAT_001b0a00)
                           [*(ushort *)
                             ((&DAT_001ae9fc)
                              [*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)] + 100)]
                          + 0x1e8)) {
      iVar3 = DAT_00199230 + 0xad4;
    }
    else {
      iVar3 = DAT_00199230 + 0xada;
    }
    FUN_0013a710(iVar3);
    iVar3 = FUN_00049ea9();
    iVar7 = uVar6 * 0x2a;
    if (iVar3 == 0) {
      pbVar2 = (byte *)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)]
      ;
      if ((*pbVar2 & 0x20) == 0) {
        iVar3 = DAT_002e8bee -
                *(int *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0xde + uVar6 * 4);
        iVar7 = *(int *)(&DAT_0018edfc + iVar7);
      }
      else {
        iVar3 = DAT_002e8bee -
                *(int *)(uVar6 * 4 + 0xde + (&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)]);
        iVar7 = *(int *)(&DAT_0018ee00 + iVar7);
      }
    }
    else if ((*(byte *)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)]
             & 0x20) == 0) {
      iVar3 = *(int *)(&DAT_0018edfc + iVar7);
      iVar7 = iVar3;
    }
    else {
      iVar3 = *(int *)(&DAT_0018ee00 + iVar7);
      iVar7 = iVar3;
    }
    FUN_0005c8fa(iVar3,iVar7);
    FUN_000e7714(&DAT_0019cbac,&DAT_00165dc5,(iVar5 + 1) % 10);
    FUN_000e6d80();
    iVar3 = *(int *)(&DAT_0018ee0d + uVar6 * 0x2a);
    iVar5 = FUN_00049ea9();
    if ((iVar5 != 0) && (iVar3 != 0)) {
      FUN_000720ce();
    }
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_055b68 (Ghidra: FUN_00055b68)
 * Prototype: void sub_055b68(void);
 * Address  : 0x55b68 (Size: 715 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe7714, 0x13a710
 * Strings  :
 *   - 0x165dc8: "%ld"
 *   - 0x165dcc: "%ld"
 *   - 0x165dd0: "%ld"
 *   - 0x165dd4: "%ld"
 *   - 0x165dd8: "%ld"
 *   - 0x165ddc: "%ld"
 *   - 0x165de0: "%ld"
 *   - 0x165de4: "%ld"
 *   - 0x165de8: "%ld"
 ******************************************************************************/
void FUN_00055b68(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int iVar5;
  undefined *puVar6;
  
  iVar3 = (int)*(short *)(in_EAX + 0x29);
  FUN_0013a710(iVar3);
  uVar1 = *(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef);
  if ((&DAT_001ae9fc)[uVar1] == 0) {
    return;
  }
  iVar2 = (&DAT_001ae9fc)[uVar1];
  if (*(char *)(iVar2 + 0x1f) != '\x05') {
    return;
  }
  switch(*(undefined4 *)(extraout_ECX + 0x33)) {
  case 0:
    uVar4 = (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0xc2);
    puVar6 = &DAT_00165dc8; /* 0x165dc8="%ld" */
    break;
  case 1:
    uVar4 = ((uint)(byte)(&DAT_002e9118)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6] *
             (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x23) * 0x23) / 100 +
            (uint)(byte)(&DAT_002e9118)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6];
    puVar6 = &DAT_00165dcc; /* 0x165dcc="%ld" */
    break;
  case 2:
    uVar4 = *(uint *)(iVar2 + 0x13);
    puVar6 = &DAT_00165dd0; /* 0x165dd0="%ld" */
    break;
  case 3:
    iVar5 = (uint)*(byte *)(iVar2 + 0x1a) * 0xe6;
    if (*(short *)(&DAT_002e19a9 + (uint)*(byte *)(iVar2 + 0x1a) * 2 + *(char *)(iVar2 + 6) * 0x1508
                  ) == 0) {
      uVar4 = ((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x23) *
               (uint)*(ushort *)(&DAT_002e91a5 + iVar5) * 0x23) / 100 +
              (uint)*(ushort *)(&DAT_002e91a5 + iVar5);
    }
    else {
      uVar4 = (((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x23) *
                (uint)*(ushort *)(&DAT_002e91a5 + iVar5) * 0x23) / 100 +
              (uint)*(ushort *)(&DAT_002e91a5 + iVar5)) / 2;
    }
    puVar6 = &DAT_00165dd4; /* 0x165dd4="%ld" */
    break;
  case 4:
    uVar4 = (uint)(byte)(&DAT_002e9119)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6];
    puVar6 = &DAT_00165dd8; /* 0x165dd8="%ld" */
    break;
  case 5:
    uVar4 = ((uint)(byte)(&DAT_002e911c)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6] *
             (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x23) * 0x23) / 100 +
            (uint)(byte)(&DAT_002e911c)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6];
    puVar6 = &DAT_00165ddc; /* 0x165ddc="%ld" */
    break;
  case 6:
    uVar4 = (uint)(DAT_002e8bee - *(int *)(iVar2 + 9)) / 2000 +
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x286);
    if (99 < uVar4) {
      uVar4 = 99;
    }
    puVar6 = &DAT_00165de0; /* 0x165de0="%ld" */
    break;
  case 7:
    uVar4 = ((uint)(byte)(&DAT_002e911a)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6] *
             (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x23) * 0x23) / 100 +
            (uint)(byte)(&DAT_002e911a)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6];
    puVar6 = &DAT_00165de4; /* 0x165de4="%ld" */
    break;
  case 8:
    uVar4 = (uint)(byte)(&DAT_002e911d)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6];
    puVar6 = &DAT_00165de8; /* 0x165de8="%ld" */
    break;
  case 9:
    uVar4 = *(uint *)(&DAT_0018fced +
                     (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x287) * 4);
    puVar6 = &DAT_00165dec;
    break;
  default:
    goto switchD_00055e2b_default;
  }
  FUN_000e7714(&DAT_0019cbac,puVar6,uVar4);
switchD_00055e2b_default:
  FUN_0013a710(iVar3);
  FUN_00057739();
  return;
}

/******************************************************************************
 * Function : sub_055e33 (Ghidra: FUN_00055e33)
 * Prototype: void sub_055e33(void);
 * Address  : 0x55e33 (Size: 477 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x23210, 0x768c6, 0x13a710
 ******************************************************************************/
void FUN_00055e33(void)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *pbVar5;
  
  uVar2 = DAT_003d9874;
  bVar1 = *(byte *)(in_EAX + 0x33);
  iVar4 = DAT_00199230 + 0x90;
  FUN_0013a710(iVar4);
  if (((*(int *)(&DAT_0018ed31 + (uint)bVar1 * 0x10) == 0x10) &&
      ((&DAT_002e1598)[*(int *)(&DAT_0018ed35 + (uint)bVar1 * 0x10) + DAT_002f10ce._3_1_ * 0x1508]
       != '\0')) ||
     ((*(int *)(&DAT_0018ed31 + (uint)bVar1 * 0x10) == 0x12 &&
      ((&DAT_002e15ab)[*(int *)(&DAT_0018ed35 + (uint)bVar1 * 0x10) + DAT_002f10ce._3_1_ * 0x1508]
       != '\0')))) {
    if ((*extraout_ECX & 8) != 0) {
      if (*(int *)(&DAT_0018ed31 + (uint)bVar1 * 0x10) == 0x10) {
        cVar3 = FUN_000768c6();
        pbVar5 = extraout_ECX_00;
        if (cVar3 != '\0') {
          FUN_0013a710(iVar4);
          pbVar5 = extraout_ECX_01;
        }
      }
      else {
        pbVar5 = extraout_ECX;
        if ((*(int *)(&DAT_0018ed31 + (uint)bVar1 * 0x10) == 0x12) &&
           (cVar3 = FUN_00023210(), pbVar5 = extraout_ECX_02, cVar3 != '\0')) {
          FUN_0013a710(iVar4);
          pbVar5 = extraout_ECX_03;
        }
      }
      if ((pbVar5[1] != 0) || (pbVar5[2] != 0)) {
        FUN_000f2800();
        DAT_003d9874 = uVar2;
        return;
      }
    }
    FUN_0013a710(iVar4);
  }
  DAT_003d9874 = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_056010 (Ghidra: FUN_00056010)
 * Prototype: void sub_056010(void);
 * Address  : 0x56010 (Size: 502 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x57b6f, 0xe7714, 0xf2800, 0x13a710
 * Strings  :
 *   - 0x165def: "@%ld"
 ******************************************************************************/
void FUN_00056010(void)

{
  byte bVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  uint extraout_ECX;
  uint uVar4;
  int extraout_ECX_00;
  uint uVar5;
  
  uVar2 = DAT_003d9874;
  bVar1 = *(byte *)(in_EAX + 0x33);
  if (*(int *)(in_EAX + 0x33) == 0) {
    FUN_0013a710();
  }
  else {
    uVar5 = (uint)DAT_0019cba6;
    FUN_0013a710(uVar5);
    iVar3 = (uint)bVar1 * 0x10;
    DAT_003d9874 = DAT_003d9874 & 0xffbf;
    if (*(int *)(&DAT_0018ed31 + iVar3) == 0x10) {
      uVar4 = (uint)(byte)(&DAT_002e1591)
                          [DAT_002f10ce._3_1_ * 0x1508 + *(int *)(&DAT_0018ed35 + iVar3)];
    }
    else {
      uVar4 = extraout_ECX;
      if (*(int *)(&DAT_0018ed31 + iVar3) == 0x12) {
        uVar4 = (uint)(byte)(&DAT_002e15a6)
                            [DAT_002f10ce._3_1_ * 0x1508 + *(int *)(&DAT_0018ed35 + iVar3)];
      }
    }
    FUN_000e7714(&DAT_0019cbac,&DAT_00165def,uVar4); /* 0x165def="@%ld" */
    if (((extraout_ECX_00 == 0) ||
        ((((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] != '\x10' ||
          ((uint)(byte)(&DAT_0019d56d)[DAT_002f10ce._3_1_ * 0x4ef] !=
           *(uint *)(&DAT_0018ed35 + (uint)bVar1 * 0x10))) &&
         (((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] != '\x12' ||
          ((uint)(byte)(&DAT_0019d56e)[DAT_002f10ce._3_1_ * 0x4ef] !=
           *(uint *)(&DAT_0018ed35 + (uint)bVar1 * 0x10))))))) || (((byte)DAT_002e8bee & 1) == 0)) {
      FUN_0013a710(uVar5);
    }
    else {
      FUN_000f2800();
    }
    FUN_00057b6f();
  }
  DAT_003d9874 = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_0563b1 (Ghidra: FUN_000563b1)
 * Prototype: void sub_0563b1(void);
 * Address  : 0x563b1 (Size: 348 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe7714, 0xf2800, 0x13a710
 * Strings  :
 *   - 0x165df4: "%ld"
 ******************************************************************************/
void FUN_000563b1(void)

{
  int iVar1;
  byte *in_EAX;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint local_1c;
  
  iVar1 = **(int **)(in_EAX + 0x33);
  uVar2 = (int)*(int **)(in_EAX + 0x33) - 0x34d0e6;
  uVar4 = (uVar2 & 0xf) >> 2;
  iVar5 = (int)*(short *)(in_EAX + 0x29);
  if (*(short *)(in_EAX + 0x1b) == 0) {
    local_1c = 0x17;
  }
  else {
    local_1c = (uint)(ushort)(&DAT_0034d1a8)[(uVar2 >> 4) + (int)DAT_0034d0e5];
  }
  if ((local_1c != 0) && ((*in_EAX & 8) != 0)) {
    if (iVar1 != 0) {
      iVar5 = iVar5 + (int)((longlong)
                            (ulonglong)
                            ((uint)*(ushort *)
                                    (&DAT_002e0a6d +
                                    uVar4 * 2 + local_1c * 6 + DAT_002f10ce._3_1_ * 0x1508) * 0xe) /
                           (longlong)iVar1);
    }
    if ((in_EAX[1] == 0) && (in_EAX[2] == 0)) {
      FUN_0013a710();
    }
    else {
      FUN_000f2800(DAT_00199230 + iVar5 * 6,
                   (*(short *)(in_EAX + 0x1f) + -2) / (int)(uint)DAT_0019cba6);
    }
    if (*(int *)(in_EAX + 0x33) != 0) {
      FUN_000e7714(&DAT_0019cbac,&DAT_00165df4,iVar1); /* 0x165df4="%ld" */
      if ((iVar1 != 0) &&
         (*(short *)(&DAT_002e09ad + uVar4 * 2 + DAT_002f10ce._3_1_ * 0x1508 + local_1c * 6) != 0))
      {
        for (pcVar3 = &DAT_0019cbac; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
          *pcVar3 = *pcVar3 + -0x78;
        }
      }
      FUN_00057739();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_056642 (Ghidra: FUN_00056642)
 * Prototype: void sub_056642(void);
 * Address  : 0x56642 (Size: 87 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00056642(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 8) != 0) {
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_056699 (Ghidra: FUN_00056699)
 * Prototype: void sub_056699(void);
 * Address  : 0x56699 (Size: 179 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x57a52, 0x5c8fa, 0xe7714, 0x13a710
 ******************************************************************************/
void FUN_00056699(void)

{
  FUN_0013a710();
  FUN_0005c8fa(DAT_002ed3e6,DAT_002ed3e2);
  FUN_000e7714(&DAT_0019cbac,&DAT_00165e00,
               *(undefined4 *)(&DAT_002e1a41 + DAT_002f10ce._3_1_ * 0x1508));
  FUN_00057a52();
  return;
}

/******************************************************************************
 * Function : sub_05674c (Ghidra: FUN_0005674c)
 * Prototype: void sub_05674c(void);
 * Address  : 0x5674c (Size: 291 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x5c8fa, 0x66ecc, 0x13a710
 ******************************************************************************/
void FUN_0005674c(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(short *)(in_EAX + 0x29);
  FUN_0013a710(iVar1);
  FUN_0013a710();
  if (*(int *)(&DAT_002e1501 + DAT_002f10ce._3_1_ * 0x1508) < 0) {
    FUN_000f0870(DAT_001992a0,iVar1,(int)(8 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6));
  }
  else {
    iVar1 = FUN_00066ecc();
    iVar2 = *(int *)(&DAT_002e171c + DAT_002f10ce._3_1_ * 0x1508) >> 0x1f;
    FUN_0005c8fa((int)((*(int *)(&DAT_002e171c + DAT_002f10ce._3_1_ * 0x1508) + iVar2 * -0x100) -
                      (uint)(iVar2 << 7 < 0)) >> 8,
                 (int)((iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0)) >> 8);
  }
  return;
}

/******************************************************************************
 * Function : sub_05686f (Ghidra: FUN_0005686f)
 * Prototype: void sub_05686f(void);
 * Address  : 0x5686f (Size: 306 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x5c8fa, 0x76ee6, 0x13a710
 ******************************************************************************/
void FUN_0005686f(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)*(short *)(in_EAX + 0x29);
  FUN_0013a710(iVar1);
  FUN_0013a710();
  if ((&DAT_002e1712)[DAT_002f10ce._3_1_ * 0x1508] == '\0') {
    FUN_000f0870(DAT_001992a0,iVar1,(int)(0x20 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6));
  }
  else {
    uVar2 = FUN_00076ee6();
    iVar1 = *(int *)(&DAT_002e170e + DAT_002f10ce._3_1_ * 0x1508) >> 0x1f;
    FUN_0005c8fa((int)((*(int *)(&DAT_002e170e + DAT_002f10ce._3_1_ * 0x1508) + iVar1 * -0x100) -
                      (uint)(iVar1 << 7 < 0)) >> 8,uVar2);
  }
  return;
}

/******************************************************************************
 * Function : sub_0569a1 (Ghidra: FUN_000569a1)
 * Prototype: void sub_0569a1(void);
 * Address  : 0x569a1 (Size: 175 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe7714, 0x13a710
 ******************************************************************************/
void FUN_000569a1(void)

{
  byte bVar1;
  short sVar2;
  int in_EAX;
  
  sVar2 = *(short *)(in_EAX + 0x29);
  bVar1 = *(byte *)(in_EAX + 0x33);
  FUN_0013a710();
  if (((&DAT_0019d0c8)[(uint)bVar1 * 0x4ef] & 1) != 0) {
    FUN_0013a710(DAT_00199230 + sVar2 * 6);
    FUN_000e7714(&DAT_0019cbac,&DAT_00165e03,(&DAT_002e0ec3)[(uint)bVar1 * 0x1508]);
    FUN_00057739();
  }
  return;
}

/******************************************************************************
 * Function : sub_056a50 (Ghidra: FUN_00056a50)
 * Prototype: void sub_056a50(void);
 * Address  : 0x56a50 (Size: 275 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x57739, 0xe7714, 0xf2800, 0x13a710
 ******************************************************************************/
void FUN_00056a50(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)*(short *)(in_EAX + 0x29);
  bVar1 = *(byte *)(in_EAX + 0x33);
  FUN_0013a710(iVar2);
  if (((&DAT_0019d0c8)[(uint)bVar1 * 0x4ef] & 1) != 0) {
    iVar3 = (uint)bVar1 * 0x1508;
    if ((((int)(uint)(byte)(&DAT_002e0ea2)[iVar3] < *(int *)(&DAT_002e15e5 + iVar3)) &&
        (DAT_002ed3dd == '\0')) || (((byte)DAT_002e8bee & 1) != 0)) {
      FUN_0013a710(iVar2);
    }
    else {
      FUN_000f2800();
    }
    FUN_000e7714(&DAT_0019cbac,&DAT_00165e06,(&DAT_002e0ea2)[(uint)bVar1 * 0x1508]);
    FUN_00057739();
  }
  return;
}

/******************************************************************************
 * Function : sub_056b63 (Ghidra: FUN_00056b63)
 * Prototype: void sub_056b63(void);
 * Address  : 0x56b63 (Size: 166 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x57d9e
 ******************************************************************************/
void FUN_00056b63(void)

{
  byte *in_EAX;
  int extraout_ECX;
  
  if ((*in_EAX & 8) != 0) {
    in_EAX[0x27] = 0x20;
    in_EAX[0x28] = 0;
    FUN_00057d9e();
    FUN_0013a710((int)((*(ushort *)(extraout_ECX + 0x25) - 0x40) *
                      (uint)*(ushort *)(extraout_ECX + 0x37)) >> 8);
  }
  return;
}

/******************************************************************************
 * Function : sub_056ee6 (Ghidra: FUN_00056ee6)
 * Prototype: void sub_056ee6(void);
 * Address  : 0x56ee6 (Size: 12 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x55701
 * Callees  : 1 -> 0xf0870
 ******************************************************************************/
void FUN_00056ee6(void)

{
  FUN_000f0870();
  return;
}

/******************************************************************************
 * Function : sub_0570a7 (Ghidra: FUN_000570a7)
 * Prototype: void sub_0570a7(void);
 * Address  : 0x570a7 (Size: 306 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x10689, 0x13a710
 ******************************************************************************/
void FUN_000570a7(void)

{
  int iVar1;
  
  FUN_0013a710();
  iVar1 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)];
  if ((*(char *)(iVar1 + 0x1f) == '\x05') &&
     ((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar1 + 0x1a) * 0x73] *
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x23) * 0x23) / 100 +
      (int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar1 + 0x1a) * 0x73] != 0)) {
    FUN_00010689();
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_0571cf (Ghidra: FUN_000571cf)
 * Prototype: void sub_0571cf(void);
 * Address  : 0x571cf (Size: 377 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5cabb, 0xf0870
 ******************************************************************************/
void FUN_000571cf(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint auStack_44 [5];
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  byte local_1c;
  
  local_1c = (&DAT_002e16fd)[(int)*(short *)(in_EAX + 0x1b) + DAT_002f10ce._3_1_ * 0x1508];
  uVar2 = (uint)*(ushort *)(in_EAX + 0x25);
  uVar1 = uVar2 / 7;
  auStack_44[3] = (uint)*(short *)(in_EAX + 0x1d);
  local_20 = (auStack_44[3] + uVar2) - uVar1;
  auStack_44[2] = (uint)DAT_001992a0;
  uVar3 = (uint)DAT_0019cba6;
  auStack_44[4] = (uint)((ulonglong)*(ushort *)(in_EAX + 0x27) / (ulonglong)(longlong)(int)uVar3);
  local_2c = (int)((ulonglong)uVar2 / (ulonglong)(longlong)(int)uVar3);
  local_30 = (int)*(short *)(in_EAX + 0x1f) / (int)uVar3;
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 4;
  FUN_000f0870();
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfb;
  if ((local_1c != 0) && (*(int *)(&DAT_002ed450 + (uint)local_1c * 0x11) != 0)) {
    local_28 = uVar1 / 2;
    local_24 = 0;
    puVar4 = auStack_44 + 2;
    do {
      puVar5 = (undefined1 *)puVar4;
      if (((&DAT_001ae9fc)[*(ushort *)(&DAT_0034d146 + *(short *)(in_EAX + 0x1b) * 0x10 + local_24)]
           != DAT_001ae9fc) &&
         (*(char *)((&DAT_001ae9fc)
                    [*(ushort *)(&DAT_0034d146 + *(short *)(in_EAX + 0x1b) * 0x10 + local_24)] +
                   0x1f) == '\x05')) {
        *(undefined4 *)((int)puVar4 + -4) = 0x572d9;
        FUN_0005cabb();
        if ((*(short *)(extraout_ECX + 0x1b) == DAT_0034d1a6) && ((DAT_002e8bee & 2) != 0)) {
          puVar5 = (undefined1 *)((int)puVar4 + -4);
          *(uint *)((int)puVar4 + -4) = (uint)(byte)(&DAT_0019177a)[DAT_002e8bee & 3];
          local_30 = (int)((ulonglong)*(ushort *)(in_EAX + 0x27) /
                          (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
          local_2c = (int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6;
          DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 0x14;
          *(undefined4 *)((int)puVar4 + -8) = 0x57339;
          FUN_000f0870();
          DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xeb;
        }
        local_20 = local_20 - uVar1;
      }
      local_24 = local_24 + 2;
      puVar4 = (uint *)puVar5;
    } while (local_24 != 0xe);
  }
  return;
}

/******************************************************************************
 * Function : sub_057348 (Ghidra: FUN_00057348)
 * Prototype: void sub_057348(void);
 * Address  : 0x57348 (Size: 365 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5cabb, 0xf0870
 ******************************************************************************/
void FUN_00057348(void)

{
  int in_EAX;
  int extraout_ECX;
  undefined1 *puVar1;
  uint *puVar2;
  uint auStack_3c [5];
  int local_28;
  uint local_24;
  int local_20;
  byte local_1c;
  
  local_1c = (&DAT_002e16fd)[(int)*(short *)(in_EAX + 0x1b) + DAT_002f10ce._3_1_ * 0x1508];
  local_24 = *(ushort *)(in_EAX + 0x25) / 7;
  auStack_3c[2] = (uint)DAT_001992a0;
  auStack_3c[4] =
       (uint)((ulonglong)*(ushort *)(in_EAX + 0x27) / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
  auStack_3c[3] = (int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6;
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 4;
  FUN_000f0870();
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfb;
  if ((local_1c != 0) && (*(int *)(&DAT_002ed450 + (uint)local_1c * 0x11) != 0)) {
    local_28 = (int)local_24 / 2;
    local_20 = 0;
    puVar2 = auStack_3c + 2;
    do {
      puVar1 = (undefined1 *)puVar2;
      if (((&DAT_001ae9fc)[*(ushort *)(&DAT_0034d176 + *(short *)(in_EAX + 0x1b) * 0x10 + local_20)]
           != DAT_001ae9fc) &&
         (*(char *)((&DAT_001ae9fc)
                    [*(ushort *)(&DAT_0034d176 + *(short *)(in_EAX + 0x1b) * 0x10 + local_20)] +
                   0x1f) == '\x05')) {
        *(undefined4 *)((int)puVar2 + -4) = 0x57444;
        FUN_0005cabb();
        if ((*(short *)(extraout_ECX + 0x1b) == DAT_0034d1a6) && ((DAT_002e8bee & 2) != 0)) {
          puVar1 = (undefined1 *)((int)puVar2 + -4);
          *(uint *)((int)puVar2 + -4) = (uint)(byte)(&DAT_0019177a)[DAT_002e8bee & 3];
          auStack_3c[3] = (int)local_24 / (int)(uint)DAT_0019cba6;
          auStack_3c[4] = (int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6;
          DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 0x14;
          *(undefined4 *)((int)puVar2 + -8) = 0x574a6;
          FUN_000f0870();
          DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xeb;
        }
      }
      local_20 = local_20 + 2;
      puVar2 = (uint *)puVar1;
    } while (local_20 != 0xe);
  }
  return;
}

/******************************************************************************
 * Function : sub_0574b5 (Ghidra: FUN_000574b5)
 * Prototype: void sub_0574b5(void);
 * Address  : 0x574b5 (Size: 375 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x5c8fa, 0xf0870, 0x13a710
 * Strings  :
 *   - 0x165e09: "%ld"
 ******************************************************************************/
void FUN_000574b5(void)

{
  int iVar1;
  int in_EAX;
  uint *puVar2;
  undefined4 uStack_24;
  uint uStack_20;
  int local_1c;
  
  iVar1 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)];
  if ((*(char *)(iVar1 + 0x1f) == '\x05') &&
     ((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar1 + 0x1a) * 0x73] *
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x23) * 0x23) / 100 +
      (int)(short)(&DAT_002e9114)[(uint)*(byte *)(iVar1 + 0x1a) * 0x73] != 0)) {
    uStack_20 = 0x5754c;
    FUN_0013a710();
    uStack_24 = *(undefined4 *)
                 ((&DAT_001b0a00)
                  [*(ushort *)
                    ((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)] +
                    100)] + 0x24);
    uStack_20 = *(int *)(&DAT_002e9133 +
                        (uint)*(byte *)((&DAT_001b0a00)
                                        [*(ushort *)
                                          ((&DAT_001ae9fc)
                                           [*(ushort *)
                                             ((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)] +
                                          100)] + 0x23) * 4 +
                        (uint)*(byte *)((&DAT_001ae9fc)
                                        [*(ushort *)
                                          ((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)] + 0x1a)
                        * 0xe6) << 8;
    if (uStack_20 == 0) {
      uStack_20 = (uint)DAT_001992a0;
      puVar2 = &uStack_20;
      local_1c = (*(short *)(in_EAX + 0x1f) + 4) / (int)(uint)DAT_0019cba6;
      uStack_24 = 0x575f6;
      FUN_000f0870();
    }
    else {
      puVar2 = &uStack_24;
      FUN_0005c8fa();
    }
    *(uint *)((int)puVar2 + -4) =
         *(byte *)((&DAT_001b0a00)
                   [*(ushort *)
                     ((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)]
                     + 100)] + 0x23) + 1;
    *(undefined **)((int)puVar2 + -8) = &DAT_00165e09; /* 0x165e09="%ld" */
    *(undefined1 **)((int)puVar2 + -0xc) = &DAT_0019cbac;
    *(undefined4 *)((int)puVar2 + -0x10) = 0x56b4f;
    FUN_000e7714();
    *(undefined4 *)((int)puVar2 + -4) = 0x56b5e;
    FUN_00057739();
  }
  return;
}

/******************************************************************************
 * Function : sub_05762c (Ghidra: FUN_0005762c)
 * Prototype: void sub_05762c(void);
 * Address  : 0x5762c (Size: 269 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf2800
 ******************************************************************************/
void FUN_0005762c(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 8) != 0) {
    if ((in_EAX[1] == 0) && (in_EAX[2] == 0)) {
      FUN_0013a710();
    }
    else {
      FUN_000f2800();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_057739 (Ghidra: FUN_00057739)
 * Prototype: void sub_057739(void);
 * Address  : 0x57739 (Size: 353 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x54c79, 0x56a50, 0x5cf9f
 * Callees  : 6 -> 0x5bb9c, 0xe6b20, 0xe6b44, 0xe6b74, 0xe6d80, 0xe9dd6
 ******************************************************************************/
void FUN_00057739(void)

{
  undefined2 uVar1;
  int in_EAX;
  
  uVar1 = DAT_003d9874;
  if ((*(char *)(in_EAX + 6) == '\x05') && (in_EAX == DAT_0034cf1f)) {
    DAT_0034b2a8 = DAT_0034b2a8 + '\x01';
    FUN_000e9dd6();
  }
  FUN_000e6b44(DAT_0019cba6);
  FUN_000e6b74((int)((ulonglong)*(ushort *)(in_EAX + 0x25) /
                    (ulonglong)(longlong)(int)(uint)DAT_0019cba6),
               (int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6);
  DAT_003d9874 = 0x100;
  FUN_0005bb9c();
  FUN_000e6d80();
  FUN_000e6b44();
  FUN_000e6b74();
  FUN_000e6b20();
  DAT_003d9874 = uVar1;
  return;
}

/******************************************************************************
 * Function : dk_have_text_scrolling_box_05789a (Ghidra: FUN_0005789a)
 * Prototype: void dk_have_text_scrolling_box_05789a(void);
 * Address  : 0x5789a (Size: 440 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:5257 ("Cannot have a TEXT_SCROLLING box type without a pointer to a TextScrollWindow")
 * Naming   : String 'Cannot have a TEXT_SCROLLING box type without a pointer to a'
 * Callers  : 1 -> 0x54d41
 * Callees  : 4 -> 0x5bb9c, 0xddaf0, 0xe6b20, 0xe6d80
 * Strings  :
 *   - 0x165e5f: "newgui.cpp"
 *   - 0x165e11: "Cannot have a TEXT_SCROLLING box type without a pointer to a TextScrollWindow"
 ******************************************************************************/
void FUN_0005789a(void)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int in_EAX;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = DAT_003d9874;
  uVar4 = (undefined4)
          ((ulonglong)*(ushort *)(in_EAX + 0x25) / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
  iVar5 = (int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6;
  DAT_003d9874 = DAT_003d9874 & 0xfebf;
  DAT_003d9874 = DAT_003d9874 | 0x100;
  FUN_000e6b20(uVar4,iVar5);
  if (*(int *)(in_EAX + 0x33) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 5257, "Cannot have a TEXT_SCROLLING box type without a pointer to a TextScrollWindow") */
    FUN_000e6b20(uVar4,iVar5);
    return;
  }
  iVar2 = *(int *)(in_EAX + 0x33);
  *(uint *)(iVar2 + 0x409) = (uint)*(ushort *)(in_EAX + 0x27);
  if (*(int *)(iVar2 + 0x405) == 0) {
    iVar6 = FUN_0005bb9c();
    *(int *)(iVar2 + 0x405) = iVar6;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x405);
  }
  uVar7 = (uint)*(ushort *)(in_EAX + 0x27);
  if (iVar6 <= (int)uVar7) {
    *(int *)(iVar2 + 0x400) = (int)(uVar7 - iVar6) / 2;
    goto LAB_0005787d;
  }
  bVar1 = *(byte *)(iVar2 + 0x404);
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      *(int *)(iVar2 + 0x400) = *(int *)(iVar2 + 0x400) + 8;
    }
  }
  else if (bVar1 < 3) {
    *(int *)(iVar2 + 0x400) = *(int *)(iVar2 + 0x400) + -8;
  }
  else if (bVar1 < 4) {
    *(int *)(iVar2 + 0x400) = *(int *)(iVar2 + 0x400) + uVar7;
  }
  else if (bVar1 < 6) {
    *(int *)(iVar2 + 0x400) = *(int *)(iVar2 + 0x400) - uVar7;
  }
  if (*(char *)(iVar2 + 0x404) == '\x05') {
    if (-*(int *)(iVar2 + 0x400) != iVar6 && *(int *)(iVar2 + 0x400) <= -iVar6) {
LAB_000579b5:
      *(undefined4 *)(iVar2 + 0x400) = 0;
    }
  }
  else if (*(char *)(iVar2 + 0x404) != '\0') {
    iVar6 = (uint)*(ushort *)(in_EAX + 0x27) - iVar6;
    if (*(int *)(iVar2 + 0x400) < iVar6) {
      *(int *)(iVar2 + 0x400) = iVar6;
    }
    else if (0 < *(int *)(iVar2 + 0x400)) goto LAB_000579b5;
  }
  *(undefined1 *)(iVar2 + 0x404) = 0;
LAB_0005787d:
  FUN_000e6d80();
  FUN_000e6b20(uVar4,iVar5);
  DAT_003d9874 = uVar3;
  return;
}

/******************************************************************************
 * Function : sub_057a52 (Ghidra: FUN_00057a52)
 * Prototype: void sub_057a52(void);
 * Address  : 0x57a52 (Size: 285 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x537af, 0x56699
 * Callees  : 4 -> 0xe6b20, 0xe6b44, 0xe6b74, 0xe6d80
 ******************************************************************************/
void FUN_00057a52(void)

{
  ushort uVar1;
  
  uVar1 = DAT_003d9874;
  DAT_003d9874 = DAT_003d9874 & 0xffbf;
  FUN_000e6b44();
  FUN_000e6b74();
  DAT_003d9874 = DAT_003d9874 | 0x100;
  FUN_000e6d80();
  FUN_000e6b44();
  FUN_000e6b74();
  FUN_000e6b20();
  DAT_003d9874 = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_057b6f (Ghidra: FUN_00057b6f)
 * Prototype: void sub_057b6f(void);
 * Address  : 0x57b6f (Size: 75 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x54eeb, 0x56010
 * Callees  : 1 -> 0xe6d80
 ******************************************************************************/
void FUN_00057b6f(void)

{
  ushort uVar1;
  
  uVar1 = DAT_003d9874;
  DAT_003d9874 = DAT_003d9874 & 0xffbf;
  FUN_000e6d80();
  DAT_003d9874 = uVar1;
  return;
}

/******************************************************************************
 * Function : dk_bar_small_057bba (Ghidra: FUN_00057bba)
 * Prototype: void dk_bar_small_057bba(void);
 * Address  : 0x57bba (Size: 242 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:5315 ("Bar is too small")
 * Naming   : String 'Bar is too small'
 * Callers  : 3 -> 0x54c79, 0x57d9e, 0x5cf9f
 * Callees  : 2 -> 0xddaf0, 0x13a710
 * Strings  :
 *   - 0x165e7b: "newgui.cpp"
 *   - 0x165e6a: "Bar is too small"
 ******************************************************************************/
void FUN_00057bba(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int unaff_EBX;
  
  if (unaff_EBX < 0x48) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 5315, "Bar is too small") */
    return;
  }
  uVar1 = (uint)DAT_0019cba6;
  FUN_0013a710(uVar1);
  iVar2 = unaff_EBX + in_EAX;
  iVar3 = extraout_ECX;
  while (in_EAX = in_EAX + 0x20, in_EAX < iVar2 + -0x40) {
    uVar1 = DAT_001991c0 + 0xc;
    FUN_0013a710(uVar1,iVar3 / (int)(uint)DAT_0019cba6);
    iVar3 = extraout_ECX_00;
  }
  FUN_0013a710(uVar1,DAT_0019cba6);
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : dk_bar_small_057cac (Ghidra: FUN_00057cac)
 * Prototype: void dk_bar_small_057cac(void);
 * Address  : 0x57cac (Size: 242 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:5338 ("Bar is too small")
 * Naming   : String 'Bar is too small'
 * Callers  : 2 -> 0x54c79, 0x5cf9f
 * Callees  : 2 -> 0xddaf0, 0x13a710
 * Strings  :
 *   - 0x165e97: "newgui.cpp"
 *   - 0x165e86: "Bar is too small"
 ******************************************************************************/
void FUN_00057cac(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int unaff_EBX;
  
  if (unaff_EBX < 0x20) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 5338, "Bar is too small") */
    return;
  }
  uVar1 = (uint)DAT_0019cba6;
  FUN_0013a710(uVar1);
  iVar2 = unaff_EBX + in_EAX;
  iVar3 = extraout_ECX;
  while (in_EAX = in_EAX + 0x20, in_EAX < iVar2 + -0x40) {
    uVar1 = DAT_001991c0 + 0x30;
    FUN_0013a710(uVar1,iVar3 / (int)(uint)DAT_0019cba6);
    iVar3 = extraout_ECX_00;
  }
  FUN_0013a710(uVar1,DAT_0019cba6);
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : dk_bar_small_057d9e (Ghidra: FUN_00057d9e)
 * Prototype: void dk_bar_small_057d9e(void);
 * Address  : 0x57d9e (Size: 260 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:5368 ("Bar is too small")
 * Naming   : String 'Bar is too small'
 * Callers  : 1 -> 0x56b63
 * Callees  : 3 -> 0x57bba, 0xddaf0, 0x13a710
 * Strings  :
 *   - 0x165eb3: "newgui.cpp"
 *   - 0x165ea2: "Bar is too small"
 ******************************************************************************/
void FUN_00057d9e(void)

{
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar1;
  int unaff_EBX;
  undefined4 local_14;
  
  FUN_00057bba();
  if (unaff_EBX + -0x40 < 0x48) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 5368, "Bar is too small") */
    return;
  }
  FUN_0013a710((extraout_ECX + 10) / (int)(uint)DAT_0019cba6);
  local_14 = in_EAX + 0x40;
  iVar1 = extraout_ECX_00;
  while (local_14 < in_EAX + unaff_EBX + -0x40 + -0x20) {
    local_14 = local_14 + 0x20;
    FUN_0013a710(iVar1 / (int)(uint)DAT_0019cba6,DAT_001991c0 + 0x1e);
    iVar1 = extraout_ECX_01;
  }
  FUN_0013a710((uint)DAT_0019cba6,iVar1 / (int)(uint)DAT_0019cba6);
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_057ea2 (Ghidra: FUN_00057ea2)
 * Prototype: ulonglong sub_057ea2(void);
 * Address  : 0x57ea2 (Size: 95 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 1 -> 0xdc150
 ******************************************************************************/
ulonglong FUN_00057ea2(void)

{
  short sVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = (int)*(short *)(in_EAX + 0x21);
  if ((iVar3 <= (int)(DAT_003d9864 * (uint)DAT_0019cba6)) &&
     (iVar3 = iVar3 + (uint)*(ushort *)(in_EAX + 0x25),
     (int)((uint)DAT_0019cba6 * DAT_003d9864) < iVar3)) {
    sVar1 = *(short *)(in_EAX + 0x23);
    uVar5 = FUN_000dc150();
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    iVar3 = (int)uVar5;
    if (sVar1 <= iVar3) {
      sVar1 = *(short *)(iVar4 + 0x23);
      uVar2 = *(ushort *)(iVar4 + 0x27);
      uVar5 = FUN_000dc150();
      iVar3 = (int)uVar5;
      if ((iVar3 < (int)((uint)uVar2 + (int)sVar1)) &&
         ((*(byte *)((ulonglong)uVar5 >> 0x20) & 4) != 0)) {
        return CONCAT44(in_EDX,CONCAT31((int3)((ulonglong)uVar5 >> 8),1));
      }
    }
  }
  return CONCAT44(in_EDX,iVar3) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_057f01 (Ghidra: FUN_00057f01)
 * Prototype: undefined4 sub_057f01(void);
 * Address  : 0x57f01 (Size: 106 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00057f01(void)

{
  int in_EAX;
  int iVar1;
  char cVar2;
  int in_EDX;
  char local_18;
  
  local_18 = -1;
  for (cVar2 = '\0'; iVar1 = (int)cVar2, iVar1 < 8; cVar2 = cVar2 + '\x01') {
    if (((((&DAT_0034bad7)[iVar1 * 0x20] != '\0') && ((&DAT_0034bad7)[iVar1 * 0x20] == '\x02')) &&
        ((&DAT_0034baf3)[iVar1 * 0x20] != '\0')) &&
       ((((short)(&DAT_0034bade)[iVar1 * 0x10] <= in_EAX &&
         (in_EAX < (int)((int)(short)(&DAT_0034bade)[iVar1 * 0x10] +
                        (uint)(ushort)(&DAT_0034bae2)[iVar1 * 0x10]))) &&
        (((short)(&DAT_0034bae0)[iVar1 * 0x10] <= in_EDX &&
         (in_EDX < (int)((uint)(ushort)(&DAT_0034bae4)[iVar1 * 0x10] +
                        (int)(short)(&DAT_0034bae0)[iVar1 * 0x10]))))))) {
      local_18 = cVar2;
    }
  }
  return CONCAT31(cVar2 >> 7,local_18);
}

/******************************************************************************
 * Function : sub_057f6b (Ghidra: FUN_00057f6b)
 * Prototype: ulonglong sub_057f6b(void);
 * Address  : 0x57f6b (Size: 110 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x49160, 0x5f6c5, 0x8a194, 0x8afd8, 0x8f320, 0x8f518, 0x8f75c, 0x8f924, 0x8fb10, 0x8fd14
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong FUN_00057f6b(void)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar2 = DAT_002f10ce._3_1_ * 0x4ef;
  pbVar1 = &DAT_0019d51b + uVar2;
  if ((DAT_0034cfe3 != '\0') &&
     (((DAT_0034d1a6 == 0 || ((&DAT_0018e98c)[(uint)(byte)(&DAT_00191780)[*pbVar1] * 0x1b] == '\0'))
      || ((uVar2 = (uint)(byte)(&DAT_0019d0f3)[uVar2],
          (int)*(char *)((&DAT_001ae9fc)[DAT_0034d1a6] + 6) != uVar2 &&
          ((&DAT_0018e98d)[(uint)(byte)(&DAT_00191780)[*pbVar1] * 0x1b] == '\0')))))) {
    return CONCAT44(in_EDX,CONCAT31((int3)(uVar2 >> 8),1));
  }
  return CONCAT44(in_EDX,uVar2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_057fd9 (Ghidra: FUN_00057fd9)
 * Prototype: bool sub_057fd9(void);
 * Address  : 0x57fd9 (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x47755
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00057fd9(void)

{
  return DAT_0034cf1f != 0;
}

/******************************************************************************
 * Function : sub_057fe4 (Ghidra: FUN_00057fe4)
 * Prototype: undefined8 sub_057fe4(void);
 * Address  : 0x57fe4 (Size: 1816 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2faf6, 0x462a3, 0x47fe2, 0x480aa, 0x49426
 * Callees  : 20 -> 0x498d9, 0x53c32, 0x5430b, 0x57ea2, 0x57f01, 0x58718, 0x587a6, 0x587ff, 0x58921, 0x5ad26 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00057fe4(void)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  char extraout_CL_02;
  char extraout_CL_03;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *extraout_ECX_01;
  undefined4 in_EDX;
  int iVar8;
  char cVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined1 local_33;
  undefined1 local_31;
  char local_20;
  undefined1 local_1c;
  
  local_1c = 0;
  _DAT_0034b2a9 = 0;
  FUN_0005ad26();
  DAT_0017d17b._3_1_ = 0xff;
  DAT_0017d17f = 0xff;
  DAT_0017d180 = 0xff;
  DAT_0017d181 = 0xff;
  DAT_0034d1a6 = 0;
  if (in_EAX != 0) {
    FUN_0005d032();
  }
  if (DAT_003d987e == '\0') {
    DAT_0017d179 = 0xfc19;
    DAT_0017d17b._0_2_ = 0xfc19;
    for (cVar9 = '\0'; cVar9 < 0x56; cVar9 = cVar9 + '\x01') {
      iVar4 = cVar9 * 0x39;
      if ((((&DAT_0034bbd6)[iVar4] & 1) != 0) && ((&DAT_0034bbdc)[iVar4] == '\x06')) {
        (&DAT_0034bbd7)[iVar4] = 0;
      }
    }
  }
  FUN_000dc150();
  local_20 = -1;
  cVar9 = FUN_00057f01();
  DAT_0034cfe3 = cVar9 != -1;
  FUN_00053c32();
  for (cVar9 = '\0'; cVar9 < 0x56; cVar9 = cVar9 + '\x01') {
    iVar4 = cVar9 * 0x39;
    pbVar10 = &DAT_0034bbd6 + iVar4;
    if (((*pbVar10 & 1) != 0) && ((&DAT_0034baf3)[(char)(&DAT_0034bbd9)[iVar4] * 0x20] != '\0')) {
      if (*(int *)((int)&DAT_0034bbed + iVar4) != 0) {
        (**(code **)((int)&DAT_0034bbed + iVar4))();
        cVar9 = extraout_CL_02;
      }
      if ((((&DAT_0034bbf2)[iVar4] & 0x40) == 0) &&
         (cVar2 = FUN_000498d9(), cVar9 = extraout_CL_03, cVar2 == '\0')) {
        cVar9 = FUN_00057ea2();
        uVar7 = extraout_ECX;
        if (((cVar9 == '\0') || (DAT_0034cf1f != (byte *)0x0)) &&
           (((&DAT_0034bbdc)[iVar4] != '\x06' || ((&DAT_0034bbd7)[iVar4] == '\0')))) {
LAB_000580b1:
          *pbVar10 = *pbVar10 & 0xef;
        }
        else {
          cVar2 = (char)((uint)extraout_ECX >> 8);
          cVar9 = (char)extraout_ECX;
          if ((cVar2 != -1) && (cVar2 != (&DAT_0034bbd9)[cVar9 * 0x39])) goto LAB_000580b1;
          DAT_0034cfe3 = '\x01';
          *pbVar10 = *pbVar10 | 0x10;
          if (*(int *)((int)&DAT_0034bbe5 + iVar4) != 0) {
            (**(code **)((int)&DAT_0034bbe5 + iVar4))();
            uVar7 = extraout_ECX_00;
          }
          local_20 = cVar9;
          if ((&DAT_0034bbdc)[iVar4] == '\x06') break;
          if ((&DAT_0034bbdc)[iVar4] != '\x04') {
            DAT_0017d174 = -1;
          }
        }
        cVar9 = (char)uVar7;
        if ((&DAT_0034bbdc)[iVar4] == '\x04') {
          iVar4 = ((int)((uint)*(ushort *)((int)&DAT_0034bc0d + iVar4) *
                        (*(ushort *)((int)&DAT_0034bbfb + iVar4) - 0x40)) >> 8) +
                  *(short *)((int)&DAT_0034bbf3 + iVar4) + 0x20;
          if ((((iVar4 + -10 < (int)(DAT_003d9864 * (uint)DAT_0019cba6)) &&
               (iVar5 = (uint)DAT_0019cba6 * DAT_003d9864, iVar4 = iVar4 + 0xc,
               iVar5 - iVar4 == 0 || iVar5 < iVar4)) &&
              (uVar11 = FUN_000dc150(), cVar9 = extraout_CL,
              (int)((ulonglong)uVar11 >> 0x20) < (int)uVar11)) &&
             ((uVar11 = FUN_000dc150(), cVar9 = extraout_CL_00,
              (int)uVar11 <= (int)((ulonglong)uVar11 >> 0x20) && (DAT_0034b25c != '\0')))) {
            DAT_0034b25c = '\0';
            DAT_0017d174 = extraout_CL_00;
            FUN_0006ea5a();
            cVar9 = extraout_CL_01;
          }
        }
      }
    }
  }
  if (DAT_0034cf1f != (byte *)0x0) {
    DAT_0034cfe3 = '\x01';
    cVar9 = FUN_0005b25b();
    if (cVar9 != '\0') {
      local_1c = 1;
    }
  }
  if ((DAT_0017d174 != -1) && (DAT_0034b25a != '\0')) {
    DAT_0034b25a = '\0';
    (&DAT_0034bbd7)[local_20 * 0x39] = 0;
    DAT_0017d174 = -1;
    FUN_0006ea5a();
  }
  if (((local_20 == -1) ||
      (iVar4 = local_20 * 0x39, (&DAT_0034bad7)[(char)(&DAT_0034bbd9)[iVar4] * 0x20] != '\x02')) ||
     (((int)*(short *)(&DAT_0034bbf1 + iVar4) & 0x8000U) != 0)) {
    DAT_0034bad2 = 0;
    DAT_0034bac5 = (undefined1 *)0x0;
  }
  else if (&DAT_0034bbd6 + local_20 * 0x39 == DAT_0034bac5) {
    if ((DAT_0034bad2 < 0xb) && ((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] != '\f')) {
      _DAT_0034b2a9 = 1;
      DAT_0034cfe3 = '\x01';
      DAT_0034bad2 = DAT_0034bad2 + 1;
    }
    else {
      DAT_0034cfe3 = '\x01';
      if (*(code **)((int)&DAT_0034bbe9 + local_20 * 0x39) != FUN_00054c79) {
        FUN_00058921();
      }
    }
  }
  else {
    DAT_0034bad2 = 0;
    DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
    DAT_0034bac5 = &DAT_0034bbd6 + local_20 * 0x39;
    sVar3 = FUN_000dc150();
    DAT_0034bad0 = sVar3 + 0x56;
    DAT_0034bacd = 0;
  }
  if (DAT_0017d174 != -1) {
    iVar5 = DAT_0017d174 * 0x39;
    (&DAT_0034bbd7)[iVar5] = 1;
    uVar6 = (uint)DAT_0019cba6;
    iVar4 = *(short *)(&DAT_0034bbf7 + iVar5) + 0x20;
    if (DAT_003d9864 * uVar6 - iVar4 == 0 || (int)(DAT_003d9864 * uVar6) < iVar4) {
      *(undefined2 *)((int)&DAT_0034bc0d + iVar5) = 0;
    }
    else {
      iVar8 = (uint)*(ushort *)((int)&DAT_0034bbfb + iVar5) + (int)*(short *)(&DAT_0034bbf7 + iVar5)
              + -0x20;
      if ((int)(DAT_003d9864 * uVar6) < iVar8) {
        if ((DAT_003d9864 * uVar6 - iVar4 != 0 && iVar4 <= (int)(DAT_003d9864 * uVar6)) &&
           ((int)(DAT_003d9864 * uVar6) < iVar8)) {
          *(short *)((int)&DAT_0034bc0d + iVar5) =
               (short)((int)((uVar6 * DAT_003d9864 - iVar4) * 0x100) /
                      (int)(*(ushort *)((int)&DAT_0034bbfb + iVar5) - 0x40));
        }
      }
      else {
        *(undefined2 *)((int)&DAT_0034bc0d + iVar5) = 0xff;
      }
    }
    uVar7 = FUN_0005430b();
    if (*(int *)((int)&DAT_0034bbdd + iVar5) != 0) {
      uVar7 = (**(code **)((int)&DAT_0034bbdd + iVar5))();
    }
    uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),1);
    goto LAB_0005499e;
  }
  if (local_20 != -1) {
    iVar4 = local_20 * 0x39;
    pbVar10 = &DAT_0034bbd6 + iVar4;
    if (DAT_003d987e == '\0') {
      if ((DAT_003d987f != '\0') && (local_1c = 1, *(int *)(&DAT_0034bbe1 + iVar4) != 0))
      goto LAB_00058482;
    }
    else {
      local_1c = 1;
      if ((*(int *)((int)&DAT_0034bbdd + iVar4) != 0) ||
         ((((*pbVar10 & 2) != 0 || (*(int *)((int)&DAT_0034bc05 + iVar4) != 0)) ||
          ((&DAT_0034bbdc)[iVar4] == '\x03')))) {
LAB_00058482:
        local_1c = 1;
        FUN_000587a6();
        pbVar10 = extraout_ECX_01;
      }
    }
    if (DAT_0034b25c == '\0') {
      if (DAT_0034b25d != '\0') {
        local_1c = 1;
        if ((DAT_002ee79f != 0) && (*(short *)(pbVar10 + 4) == DAT_002ee79f)) {
          DAT_002ee79f = 0;
        }
        if (*(int *)(pbVar10 + 0xb) != 0) {
          _DAT_0034cf09 = (int)*(short *)(pbVar10 + 4);
          DAT_0034b25d = '\0';
          goto LAB_00058533;
        }
      }
    }
    else {
      local_1c = 1;
      if ((DAT_002ee79f != 0) && (*(short *)(pbVar10 + 4) == DAT_002ee79f)) {
        DAT_002ee79f = 0;
      }
      if ((((*(int *)(pbVar10 + 7) != 0) || ((*pbVar10 & 2) != 0)) ||
          (*(int *)(pbVar10 + 0x2f) != 0)) || (pbVar10[6] == 3)) {
        _DAT_0034cf05 = (int)*(short *)(pbVar10 + 4);
        DAT_0034b25c = '\0';
LAB_00058533:
        local_1c = 1;
        FUN_00058718();
      }
    }
  }
  for (cVar9 = '\0'; cVar9 < 0x56; cVar9 = cVar9 + '\x01') {
    iVar4 = cVar9 * 0x39;
    pbVar10 = &DAT_0034bbd6 + iVar4;
    if ((((*pbVar10 & 1) != 0) && ((local_20 == -1 || (cVar9 != local_20)))) &&
       (((&DAT_0034bbdc)[iVar4] != '\x03' && (pbVar10 != DAT_0034cf1f)))) {
      (&DAT_0034bbd7)[iVar4] = 0;
      (&DAT_0034bbd8)[iVar4] = 0;
      *pbVar10 = *pbVar10 & 0xef;
    }
  }
  pbVar10 = (byte *)(int)local_20;
  if (pbVar10 != (byte *)0xffffffff) {
    iVar4 = (int)pbVar10 * 0x39;
    pbVar10 = &DAT_0034bbd6 + iVar4;
    if (((&DAT_0034bbd7)[iVar4] == '\0') || (DAT_0034b25a == '\0')) {
      if (((&DAT_0034bbd8)[iVar4] != '\0') &&
         ((DAT_0034b25b != '\0' && (local_1c = 1, *(int *)(&DAT_0034bbe1 + iVar4) != 0)))) {
        DAT_0034b25b = '\0';
        goto LAB_000585f6;
      }
    }
    else {
      local_1c = 1;
      if ((((*(int *)((int)&DAT_0034bbdd + iVar4) != 0) || ((*pbVar10 & 2) != 0)) ||
          (*(int *)((int)&DAT_0034bc05 + iVar4) != 0)) || ((&DAT_0034bbdc)[iVar4] == '\x03')) {
        DAT_0034b25a = '\0';
LAB_000585f6:
        local_1c = 1;
        pbVar10 = (byte *)FUN_000587ff();
      }
    }
  }
  if (((in_EAX != 0) && (pbVar10 = (byte *)(int)DAT_0034bad2, pbVar10 == (byte *)0x0)) &&
     (DAT_0034cfe3 == '\0')) {
    FUN_000dc150();
    iVar4 = FUN_0007825a();
    pbVar10 = (byte *)0x0;
    if (((iVar4 != 0) &&
        (pbVar10 = (byte *)(DAT_002f10ce._3_1_ * 0x4ef),
        (*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(local_31,local_33) * 5 + 1) >> 0x1c &
        1 << (pbVar10[0x19d0f3] & 0x1f)) != 0)) &&
       (pbVar1 = pbVar10 + 0x19d0ff, pbVar10 = (byte *)0x0, *pbVar1 != 1)) {
      uVar6 = FUN_0005bf63();
      pbVar10 = (byte *)(uVar6 & 0xff);
      if (pbVar10 == (byte *)0x0) {
        uVar6 = FUN_0005c053();
        pbVar10 = (byte *)(uVar6 & 0xff);
        if (pbVar10 == (byte *)0x0) {
          uVar6 = FUN_0005be78();
          pbVar10 = (byte *)(uVar6 & 0xff);
          if (pbVar10 == (byte *)0x0) {
            uVar6 = FUN_0005bd22();
            pbVar10 = (byte *)(uVar6 & 0xff);
            if (pbVar10 == (byte *)0x0) {
              DAT_0034bad4 = 0;
              DAT_0034bac9 = 0;
            }
          }
        }
      }
    }
  }
  if (DAT_0034b2c4 == '\0') {
    pbVar10 = (byte *)FUN_0005ceca();
  }
  uVar7 = CONCAT31((int3)((uint)pbVar10 >> 8),local_1c);
LAB_0005499e:
  return CONCAT44(in_EDX,uVar7);
}

/******************************************************************************
 * Function : sub_058718 (Ghidra: FUN_00058718)
 * Prototype: void sub_058718(void);
 * Address  : 0x58718 (Size: 142 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x57fe4, 0x5cda7
 * Callees  : 3 -> 0x54324, 0x5435a, 0x5cee9
 ******************************************************************************/
void FUN_00058718(void)

{
  undefined1 *puVar1;
  byte *in_EAX;
  byte *in_EDX;
  undefined1 *extraout_EDX;
  code *unaff_EBX;
  
  puVar1 = *(undefined1 **)(in_EAX + 0x33);
  if ((in_EAX[6] != 3) || (in_EAX + 2 != in_EDX)) {
    if ((*in_EAX & 8) == 0) {
      return;
    }
    switch(in_EAX[6]) {
    case 0:
    case 2:
    case 5:
    case 6:
      *in_EDX = 1;
      return;
    case 3:
      if ((*(int *)(in_EAX + 0x33) != 0) && (*in_EDX == 0)) {
        FUN_0005cee9();
        FUN_00054324();
        *puVar1 = 1;
        *extraout_EDX = 1;
        FUN_0005435a();
      }
      if (unaff_EBX != (code *)0x0) {
        (*unaff_EBX)();
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0587a6 (Ghidra: FUN_000587a6)
 * Prototype: void sub_0587a6(void);
 * Address  : 0x587a6 (Size: 89 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x57fe4, 0x5cda7
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000587a6(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *in_EDX;
  code *unaff_EBX;
  
  if ((in_EAX[6] != 3) || (in_EAX + 2 != in_EDX)) {
    if ((*in_EAX & 8) == 0) {
      return;
    }
    bVar1 = in_EAX[6];
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        if ((*in_EDX < 6) || (unaff_EBX == (code *)0x0)) {
          *in_EDX = *in_EDX + 1;
          return;
        }
LAB_000587c7:
        (*unaff_EBX)();
        return;
      }
    }
    else if (((3 < bVar1) && (4 < bVar1)) && (5 < bVar1)) {
      if (bVar1 != 6) {
        return;
      }
      if (unaff_EBX != (code *)0x0) goto LAB_000587c7;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0587ff (Ghidra: FUN_000587ff)
 * Prototype: void sub_0587ff(void);
 * Address  : 0x587ff (Size: 183 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 4 -> 0x53ccc, 0x5b1bc, 0x5cee9, 0x5cef9
 ******************************************************************************/
void FUN_000587ff(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *in_EDX;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  undefined1 *puVar3;
  undefined1 *extraout_EDX_01;
  undefined1 *extraout_EDX_02;
  code *unaff_EBX;
  
  pbVar2 = *(byte **)(in_EAX + 0x33);
  if ((in_EAX[6] != 3) || (in_EAX + 2 != in_EDX)) {
    bVar1 = in_EAX[6];
    if (bVar1 < 3) {
      if ((1 < bVar1) && (*pbVar2 = *pbVar2 + 1, *(short *)(in_EAX + 0x2d) < (short)(ushort)*pbVar2)
         ) {
        *pbVar2 = 0;
      }
      if ((*in_EDX != 0) && (unaff_EBX != (code *)0x0)) {
        FUN_0005cee9();
        (*unaff_EBX)();
        in_EAX = extraout_ECX_00;
        in_EDX = extraout_EDX_00;
      }
      *in_EDX = 0;
    }
    else if (((3 < bVar1) && (4 < bVar1)) && (bVar1 < 6)) {
      DAT_0034cf1f = in_EAX;
      FUN_0005b1bc();
      in_EAX = extraout_ECX;
      in_EDX = extraout_EDX;
    }
    if (in_EAX + 1 == in_EDX) {
      puVar3 = &DAT_0034bad6 + (char)in_EAX[3] * 0x20;
      if (*(int *)(in_EAX + 0x2f) != 0) {
        FUN_00053ccc();
        in_EAX = extraout_ECX_01;
        puVar3 = extraout_EDX_01;
      }
      if (((*in_EAX & 2) != 0) && (in_EAX[6] != 5)) {
        if (unaff_EBX == (code *)0x0) {
          FUN_0005cef9();
          puVar3 = extraout_EDX_02;
        }
        puVar3[1] = 3;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0588b6 (Ghidra: FUN_000588b6)
 * Prototype: ulonglong sub_0588b6(void);
 * Address  : 0x588b6 (Size: 107 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5449e, 0x5c848
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong FUN_000588b6(void)

{
  short *psVar1;
  char cVar2;
  int in_EAX;
  undefined3 uVar3;
  undefined4 in_EDX;
  
  cVar2 = *(char *)(in_EAX + 1);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      uVar3 = (undefined3)((uint)in_EAX >> 8);
      if (*(short *)(in_EAX + 2) == 0) {
        *(undefined2 *)(in_EAX + 2) = 1;
        return (ulonglong)CONCAT43(in_EDX,uVar3) << 8;
      }
      psVar1 = (short *)(in_EAX + 2);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        if (*(short *)(*(int *)(in_EAX + 0x15) + 2) == 0) {
          *(undefined2 *)(in_EAX + 2) = 1;
        }
        else {
          *(undefined2 *)(in_EAX + 2) = *(undefined2 *)(*(int *)(in_EAX + 0x15) + 2);
        }
        *(undefined1 *)(in_EAX + 1) = 2;
        return CONCAT44(in_EDX,CONCAT31(uVar3,1));
      }
    }
    else if (cVar2 == '\x03') {
      if (*(short *)(in_EAX + 2) != 0) {
        *(short *)(in_EAX + 2) = *(short *)(in_EAX + 2) + -1;
        in_EAX = (int)*(short *)(in_EAX + 2);
        if (0 < in_EAX) goto LAB_0005891d;
      }
      return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),0xff));
    }
  }
LAB_0005891d:
  return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : dk_jonty_here_am_writing_058921 (Ghidra: FUN_00058921)
 * Prototype: void dk_jonty_here_am_writing_058921(void);
 * Address  : 0x58921 (Size: 349 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : String 'JONTY HERE   : ...I AM WRITING THIS AT 4AM ON KEEPERS LAST D'
 * Callers  : 1 -> 0x57fe4
 * Callees  : 3 -> 0xdc150, 0xe7714, 0xe8ca8
 * Strings  :
 *   - 0x165ebe: "%s: %s"
 *   - 0x17c298: "JONTY HERE   : ...I AM WRITING THIS AT 4AM ON KEEPERS LAST DAY. I LOOK AROUND THE OFFICE AND ALL I SEE ARE THE TIRED PALE FACES OF THE KEEPER TEAM. THIS PROJECT HAS DESTROYED THE HEALTH AND SOCIAL LIVES OF EACH MEMBER, SO I HOPE YOU LIKE THE GAME. AMAZINGLY AFTER SIXTEEN HOURS A DAY, 7 DAYS A WEEK, FOR NEARLY 5 MONTHS WE STILL DO. THIS GAME HAS BEEN WRITTEN WITH A PASSION I AM PROUD TO BE PART OF.... I DO NOT JUST HOPE YOU LIKE IT, I ALSO HOPE YOU ARE AWARE OF THE HUGE AMOUNT OF WORK WE HAVE ALL DONE. ENOUGH WAFFLE AND ON TO THE REASON FOR THIS TEXT... THE ENDLESS GREETINGS... GREETINGS GO OUT TO IN RANDOM ORDER... RAB C, JACOON, BUCK, SI, BARRIE, KIK, CHRIS, PROC, RUSS, RIK, ALEX NEEDS, LARRY MOOR, EMMA TEUTON - AN ALE DUE TO EACH ONE OF YOU - THE LIST GOES ON.... LOUISE GEE, MY GOOD SIS NICOLA, GEMMA, JENNY, HALEY, JO EVANS...  SARAH TELFORD.. PETER AND STEVEN, AMELIA, SARAH, ISY, SALLY, MARK, MATT WOODCOCK, PAUL NETTLETON, PETE BANFORD, TOM, DAVE BANHAM, DAVE KEENS, ALISON BOSSON, MIKE LINCOLN, KIRSTY, DARREN SAWYER... AND ALL UEA NORWICH PAST AND PRESENT. NICK ARNOTT, BAVERSTOCK, SARAH BANKS, SEANY, MARK STACEY, GILEY MILEY COOKSON [WHERE ARE YOU?], STEVE CLARIDGE, DEUBERT, JAMES GREENGRASS, SIMON ONG, KEVIN RUSSELL, CLARE WRIGHTON, ELTON [GIB IS JUST A DAY AWAY], NICOLA GOULD, STEVE LAST, KEN MALCOLN, RICO, ANDY CAKEBREAD, ROBBO, CARR, AND THE LITTLE ONE, CROFTY, SCOOPER, JASON STANTON [A CUP OF COFFEE], AARON SENNA, MIKE DORELL, IAN HOWIE, HELEN THAIN, ALEX FOREST-HAY, LEE HAZELWOOD, VICKY ARNOLD, GUY SIMMONS, SHIN, VAL TAYLOR.... IF I FORGOT YOU I AM SORRY... BUT SLEEP IS DUE TO ME... AND I HAVE A DREAM TO LIVE... .          "
 *   - 0x165ec8: "%-6s: %s"
 ******************************************************************************/
void FUN_00058921(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  if (*(short *)(in_EAX + 0x2b) == 0xc9) {
    return;
  }
  if (DAT_002ee920 == '\0') {
    return;
  }
  DAT_0034b2c4 = 1;
  FUN_000e8ca8();
  sVar1 = *(short *)(in_EAX + 0x2b);
  if ((sVar1 == 0x1c8) || (sVar1 == 0x1c7)) {
    iVar2 = *(int *)(DAT_0034bac5 + 0x33) * 0x4ef;
    if ((&DAT_0019d0dd)[iVar2] == '\0') {
      FUN_000e7714(&DAT_0034b2c5,&DAT_00165ec5,(&DAT_0033319b)[*(ushort *)(in_EAX + 0x2b)]);
      goto LAB_00058a49;
    }
    puVar3 = &DAT_0019d0dd + iVar2;
    uVar6 = (&DAT_0033319b)[*(ushort *)(in_EAX + 0x2b)];
    pcVar5 = s__s___s_00165ebe;
  }
  else {
    if ((sVar1 == 0x292) && (0x10 < (byte)(&DAT_002e0e5d)[DAT_002f10ce._3_1_ * 0x1508])) {
      FUN_000e8ca8();
      goto LAB_00058a49;
    }
    if (*(short *)(in_EAX + 0x2b) != 0x2dd) goto LAB_00058a49;
    if (*(short *)(in_EAX + 0x1b) == 0) {
      bVar4 = 0x17;
    }
    else {
      bVar4 = *(byte *)(&DAT_0034d1a8 + (int)*(short *)(in_EAX + 0x1b) + (int)DAT_0034d0e5);
    }
    puVar3 = (undefined *)(&DAT_0033319b)[*(ushort *)(in_EAX + 0x2b)];
    uVar6 = (&DAT_0033319b)[*(ushort *)(&DAT_00188bf7 + (uint)bVar4 * 5)];
    pcVar5 = s___6s___s_00165ec8;
  }
  FUN_000e7714(&DAT_0034b2c5,pcVar5,uVar6,puVar3);
LAB_00058a49:
  if (in_EAX != DAT_0034bac5) {
    DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
    DAT_0034bac5 = in_EAX;
    sVar1 = FUN_000dc150();
    DAT_0034bad0 = sVar1 + 0x56;
  }
  return;
}

/******************************************************************************
 * Function : sub_058a7e (Ghidra: FUN_00058a7e)
 * Prototype: void sub_058a7e(void);
 * Address  : 0x58a7e (Size: 163 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x58ba8
 * Callees  : 3 -> 0x58b21, 0x58b37, 0xefdb4
 ******************************************************************************/
void FUN_00058a7e(void)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar2 = FUN_00058b21();
  iVar6 = 10 - iVar2;
  iVar3 = FUN_000efdb4();
  iVar3 = iVar3 + 9;
  if (0 < iVar6) {
    puVar5 = (undefined1 *)(iVar3 + in_EAX);
    puVar4 = puVar5 + -iVar6;
    for (; 9 < iVar3; iVar3 = iVar3 + -1) {
      uVar1 = *puVar4;
      puVar4 = puVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + -1;
    }
    puVar5 = (undefined1 *)(iVar3 + in_EAX);
    for (; iVar2 <= iVar3; iVar3 = iVar3 + -1) {
      *puVar5 = 0x20;
      puVar5 = puVar5 + -1;
    }
    puVar5 = (undefined1 *)(in_EAX + 9);
    puVar4 = puVar5 + -(iVar6 / 2);
    for (iVar2 = 9; iVar6 / 2 <= iVar2; iVar2 = iVar2 + -1) {
      uVar1 = *puVar4;
      puVar4 = puVar4 + -1;
      *puVar5 = uVar1;
      puVar5 = puVar5 + -1;
    }
    puVar5 = (undefined1 *)(iVar2 + in_EAX);
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      *puVar5 = 0x20;
      puVar5 = puVar5 + -1;
    }
  }
  FUN_00058b37();
  return;
}

/******************************************************************************
 * Function : sub_058b21 (Ghidra: FUN_00058b21)
 * Prototype: int sub_058b21(void);
 * Address  : 0x58b21 (Size: 22 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x58a7e
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00058b21(void)

{
  char *in_EAX;
  char in_DL;
  int iVar1;
  
  iVar1 = 0;
  for (; (in_DL != *in_EAX && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

/******************************************************************************
 * Function : dk_this_bloody_tooltip_long_058b37 (Ghidra: FUN_00058b37)
 * Prototype: int dk_this_bloody_tooltip_long_058b37(void);
 * Address  : 0x58b37 (Size: 113 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:6287 ("This bloody tooltip is too long")
 * Naming   : String 'This bloody tooltip is too long'
 * Callers  : 1 -> 0x58a7e
 * Callees  : 4 -> 0xddaf0, 0xe6c1c, 0xe7714, 0xf323f
 * Strings  :
 *   - 0x165ef3: "newgui.cpp"
 *   - 0x165ed3: "This bloody tooltip is too long"
 ******************************************************************************/
int FUN_00058b37(void)

{
  char *in_EAX;
  int extraout_ECX;
  int iVar1;
  int extraout_ECX_00;
  char extraout_DL;
  
  FUN_000e7714(&DAT_0019cbac,&DAT_00165ed1);
  iVar1 = extraout_ECX;
  for (; (extraout_DL != *in_EAX && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    iVar1 = iVar1 + 1;
  }
  if (0x100 < iVar1) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 6287, "This bloody tooltip is too long") */
  }
  FUN_000f323f();
  (&DAT_0019cbac)[extraout_ECX_00] = 0;
  iVar1 = FUN_000e6c1c();
  return iVar1 * (uint)DAT_0019cba6;
}

/******************************************************************************
 * Function : sub_058ba8 (Ghidra: FUN_00058ba8)
 * Prototype: void sub_058ba8(void);
 * Address  : 0x58ba8 (Size: 255 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x8685c, 0x872a4, 0x872b8, 0x87694, 0x87870
 * Callees  : 6 -> 0x58a7e, 0x58ca7, 0xdc150, 0xe6b20, 0xe6c1c, 0xe6d20
 ******************************************************************************/
void FUN_00058ba8(void)

{
  ushort uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  uVar1 = DAT_003d9874;
  piVar2 = &local_18;
  DAT_003d98b4 = DAT_001991b8;
  if (DAT_0034b2c4 != '\0') {
    DAT_003d9874 = DAT_003d9874 & 0xffbf;
    uStack_1c = 0x58bf3;
    local_18 = FUN_00058a7e();
    uStack_1c = 0x58c00;
    FUN_000e6c1c();
    uStack_1c = 0x58c14;
    iStack_20 = FUN_000e6d20();
    iStack_20 = (uint)DAT_0019cba6 * iStack_20;
    DAT_003d9874 = uVar1;
    if ((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x04') {
      uStack_1c = 0x58c43;
      uVar3 = FUN_000dc150();
      iStack_20 = (int)((ulonglong)uVar3 >> 0x20);
    }
    uStack_1c = local_18;
    piVar2 = &iStack_20;
    FUN_00058ca7();
  }
  *(undefined4 *)((int)piVar2 + -4) = 0x58c9b;
  FUN_000e6b20();
  DAT_0034b2c4 = 0;
  return;
}

/******************************************************************************
 * Function : sub_058ca7 (Ghidra: FUN_00058ca7)
 * Prototype: void sub_058ca7(undefined4 param_1,int param_2);
 * Address  : 0x58ca7 (Size: 373 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x58ba8
 * Callees  : 3 -> 0x58e1c, 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_00058ca7(undefined4 param_1,int param_2)

{
  ushort uVar1;
  char *in_EAX;
  int in_ECX;
  
  uVar1 = DAT_003d9874;
  if (param_2 < in_ECX) {
    if (DAT_0034b2c0 < 1) {
      if (-in_ECX < DAT_0034b2bc) {
        DAT_0034b2bc = DAT_0034b2bc + -4;
      }
      else {
        DAT_0034b2bc = param_2;
      }
    }
    else {
      DAT_0034b2c0 = DAT_0034b2c0 + -1;
      if (DAT_0034b2c0 == 0) {
        DAT_0034b2bc = 0;
      }
    }
  }
  if ((in_EAX != (char *)0x0) && (DAT_003d9874 = DAT_003d9874 & 0xffbf, *in_EAX != '\0')) {
    FUN_000e6b20();
    FUN_00058e1c();
    DAT_003d9874 = 0;
    FUN_000e6d80();
  }
  FUN_000e6b20();
  DAT_003d9874 = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_058e1c (Ghidra: FUN_00058e1c)
 * Prototype: void sub_058e1c(void);
 * Address  : 0x58e1c (Size: 732 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x58ca7, 0x8685c, 0x8d998, 0x8dcd0
 * Callees  : 2 -> 0xe8c83, 0x13a710
 ******************************************************************************/
void FUN_00058e1c(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int in_EDX;
  int unaff_EBX;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  
  uVar4 = (uint)DAT_0019cba6;
  iVar1 = in_EAX / (int)uVar4;
  iVar2 = in_EDX / (int)uVar4;
  local_10 = in_ECX / (int)uVar4;
  iVar3 = unaff_EBX / (int)uVar4;
  if (iVar1 < 0) {
    iVar3 = iVar3 + iVar1;
    iVar1 = 0;
  }
  if (iVar2 < 0) {
    local_10 = local_10 + iVar2;
    iVar2 = 0;
  }
  if ((int)((uint)DAT_0019cba6 * DAT_003d982c) < iVar1 + iVar3) {
    iVar3 = (uint)DAT_0019cba6 * DAT_003d982c - iVar1;
  }
  if ((int)(uint)DAT_0019cba2 < local_10 + iVar2) {
    local_10 = (uint)DAT_0019cba2 - iVar2;
  }
  iVar1 = iVar3 + -0x40;
  local_18 = 0;
  do {
    if (local_10 <= local_18) {
      iVar3 = in_EAX + 10;
      while (iVar3 < in_EAX + unaff_EBX + -0xc) {
        FUN_0013a710();
        FUN_0013a710();
        iVar3 = extraout_ECX_02;
      }
      iVar3 = in_EDX + 10;
      while (iVar3 < in_EDX + in_ECX + -0xc) {
        FUN_0013a710();
        FUN_0013a710();
        iVar3 = extraout_ECX_03;
      }
      FUN_0013a710();
      FUN_0013a710();
      FUN_0013a710();
      FUN_0013a710();
      return;
    }
    if (iVar3 < 0x40) {
LAB_00058ee4:
      FUN_000e8c83();
      iVar3 = extraout_ECX;
    }
    else {
      FUN_000e8c83();
      local_20 = 0x40;
      iVar3 = extraout_ECX_00;
      while (local_20 < iVar1) {
        local_20 = local_20 + 0x40;
        FUN_000e8c83();
        iVar3 = extraout_ECX_01;
      }
      if (iVar3 != local_20 && -1 < iVar3 - local_20) goto LAB_00058ee4;
    }
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0590f8 (Ghidra: FUN_000590f8)
 * Prototype: void sub_0590f8(void);
 * Address  : 0x590f8 (Size: 555 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x59a23
 * Callees  : 2 -> 0xf0870, 0x13a710
 ******************************************************************************/
void FUN_000590f8(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  int in_EDX;
  int unaff_EBX;
  undefined4 uVar6;
  undefined2 uVar7;
  
  uVar1 = (uint)DAT_003d9874;
  iVar2 = (in_ECX + -8) / (int)(uint)DAT_0019cba6;
  uVar6 = 1;
  DAT_003d9874 = DAT_003d9874 & 0xffeb;
  DAT_003d9874 = DAT_003d9874 | 4;
  FUN_000f0870(1,(in_EDX + 4) / (int)(uint)DAT_0019cba6,iVar2);
  iVar3 = in_ECX + in_EDX + -4;
  iVar5 = in_EAX + 0x22;
  DAT_003d9874 = DAT_003d9874 & 0xfffb;
  while (iVar5 < in_EAX + unaff_EBX + -0x22) {
    FUN_0013a710(uVar6,in_EDX / (int)(uint)DAT_0019cba6,DAT_00199230 + 0x5ac,iVar3);
    iVar2 = DAT_00199230 + 0x5d0;
    FUN_0013a710(uVar6,iVar3 / (int)(uint)DAT_0019cba6,iVar2);
    iVar5 = extraout_ECX;
  }
  iVar5 = in_EDX + 0x1c;
  iVar4 = unaff_EBX + in_EAX + -4;
  while (iVar5 < in_EDX + in_ECX + -0x1c) {
    FUN_0013a710(uVar6,iVar5 / (int)(uint)DAT_0019cba6,DAT_00199230 + 0x5b8,iVar3,uVar1,iVar4);
    iVar2 = DAT_00199230 + 0x5c4;
    FUN_0013a710(uVar6,extraout_ECX_00 / (int)(uint)DAT_0019cba6,iVar2);
    iVar5 = extraout_ECX_01;
  }
  FUN_0013a710(uVar6,DAT_00199230 + 0x5a6,iVar2,iVar3,uVar1,iVar4);
  uVar7 = (undefined2)uVar1;
  FUN_0013a710(uVar6,in_EDX / (int)(uint)DAT_0019cba6);
  FUN_0013a710(uVar6,(uint)DAT_0019cba6,(in_EDX + in_ECX + -0x1c) / (int)(uint)DAT_0019cba6);
  FUN_0013a710();
  DAT_003d9874 = uVar7;
  return;
}

/******************************************************************************
 * Function : sub_059323 (Ghidra: FUN_00059323)
 * Prototype: void sub_059323(void);
 * Address  : 0x59323 (Size: 648 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5990a
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_00059323(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = in_EDX + -4;
  iVar5 = in_ECX + in_EDX;
  iVar1 = in_EAX + 10;
  iVar3 = in_EAX + unaff_EBX + -0xc;
  while (iVar1 < iVar3) {
    FUN_0013a710();
    FUN_0013a710();
    iVar1 = extraout_ECX;
  }
  iVar1 = in_EDX + 10;
  while (iVar1 < in_EDX + in_ECX + -0x10) {
    FUN_0013a710();
    FUN_0013a710();
    iVar1 = extraout_ECX_00;
  }
  FUN_0013a710();
  FUN_0013a710();
  iVar1 = in_ECX + in_EDX;
  iVar2 = iVar1 + -0x1c;
  FUN_0013a710(iVar1,iVar2,iVar2 / (int)(uint)DAT_0019cba6,(uint)DAT_0019cba6,iVar4,iVar3,iVar5);
  FUN_0013a710(iVar1,iVar2,iVar2 / (int)(uint)DAT_0019cba6,DAT_001991c0 + 0x72);
  FUN_0013a710(iVar1,iVar2,DAT_0019cba6);
  FUN_0013a710(iVar1,iVar2,DAT_001991c0 + 0x42,(iVar1 + -0x4e) / (int)(uint)DAT_0019cba6);
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 1;
  FUN_0013a710();
  FUN_0013a710();
  DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfe;
  return;
}

/******************************************************************************
 * Function : sub_0595ab (Ghidra: FUN_000595ab)
 * Prototype: void sub_0595ab(void);
 * Address  : 0x595ab (Size: 863 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5990a, 0x623aa
 * Callees  : 2 -> 0xe8c83, 0x13a710
 ******************************************************************************/
void FUN_000595ab(void)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int unaff_EBX;
  undefined4 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  do {
    if (in_ECX / (int)(uint)DAT_0019cba6 <= local_18) {
      iVar1 = in_EAX + 10;
      while (iVar1 < in_EAX + unaff_EBX + -0xc) {
        FUN_0013a710();
        FUN_0013a710();
        iVar1 = extraout_ECX;
      }
      iVar1 = in_EDX + 10;
      while (iVar1 < in_EDX + in_ECX + -0x10) {
        FUN_0013a710();
        FUN_0013a710();
        iVar1 = extraout_ECX_00;
      }
      FUN_0013a710();
      FUN_0013a710();
      FUN_0013a710();
      FUN_0013a710();
      FUN_0013a710();
      FUN_0013a710();
      DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 1;
      FUN_0013a710();
      FUN_0013a710();
      DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xfe;
      return;
    }
    if (unaff_EBX < 0x40) {
LAB_00059636:
      FUN_000e8c83();
    }
    else {
      FUN_000e8c83();
      local_10 = 0x40;
      while (local_10 < unaff_EBX / (int)(uint)DAT_0019cba6 + -0x40) {
        local_10 = local_10 + 0x40;
        FUN_000e8c83();
      }
      if (unaff_EBX != local_10 && -1 < unaff_EBX - local_10) goto LAB_00059636;
    }
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_05990a (Ghidra: FUN_0005990a)
 * Prototype: void sub_05990a(void);
 * Address  : 0x5990a (Size: 281 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x59323, 0x595ab
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005990a(void)

{
  int in_EAX;
  
  if (_DAT_00165efe <= (double)_DAT_002e8c0d) {
    if (0 < *(short *)(*(int *)(in_EAX + 0x15) + 2)) goto LAB_00059970;
  }
  else {
    if (*(char *)(in_EAX + 1) != '\x01') goto LAB_00059970;
    *(undefined2 *)(in_EAX + 2) = 1;
  }
  *(undefined1 *)(in_EAX + 1) = 2;
LAB_00059970:
  if ((*(char *)(in_EAX + 1) == '\x01') || (*(char *)(in_EAX + 1) == '\x03')) {
    FUN_00059323();
  }
  else {
    FUN_000595ab();
  }
  return;
}

/******************************************************************************
 * Function : sub_059a23 (Ghidra: FUN_00059a23)
 * Prototype: void sub_059a23(void);
 * Address  : 0x59a23 (Size: 204 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x590f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059a23(void)

{
  int in_EAX;
  
  if (_DAT_00165f06 <= (double)_DAT_002e8c0d) {
    if (0 < *(short *)(*(int *)(in_EAX + 0x15) + 2)) goto LAB_00059a78;
  }
  else {
    if (*(char *)(in_EAX + 1) != '\x01') goto LAB_00059a78;
    *(undefined2 *)(in_EAX + 2) = 1;
  }
  *(undefined1 *)(in_EAX + 1) = 2;
LAB_00059a78:
  FUN_000590f8();
  return;
}

/******************************************************************************
 * Function : sub_059aef (Ghidra: FUN_00059aef)
 * Prototype: void sub_059aef(void);
 * Address  : 0x59aef (Size: 386 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xdc150
 ******************************************************************************/
void FUN_00059aef(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  short extraout_CX;
  int extraout_EDX;
  short sVar3;
  short sVar4;
  
  sVar3 = (&DAT_0034bade)[*(char *)(in_EAX + 3) * 0x10];
  sVar4 = (&DAT_0034bae0)[*(char *)(in_EAX + 3) * 0x10];
  sVar1 = (short)DAT_003d9864 * DAT_0019cba6;
  if (DAT_0017d179 != -999) {
    sVar1 = FUN_000dc150();
    sVar3 = sVar3 - extraout_CX;
    sVar4 = sVar4 - ((short)DAT_0017d17b - sVar1);
    if (sVar3 < 0) {
      sVar3 = 0;
    }
    else if ((int)((uint)DAT_0019cba4 - (uint)*(ushort *)(extraout_EDX + 0xc)) < (int)sVar3) {
      sVar3 = DAT_0019cba4 - *(short *)(extraout_EDX + 0xc);
    }
    if (sVar4 < 0) {
      sVar4 = 0;
    }
    else if ((int)((uint)DAT_0019cba2 - (uint)*(ushort *)(extraout_EDX + 0xe)) < (int)sVar4) {
      sVar4 = DAT_0019cba2 - *(short *)(extraout_EDX + 0xe);
    }
    for (sVar1 = 0; sVar1 < 0x56; sVar1 = sVar1 + 1) {
      iVar2 = sVar1 * 0x39;
      if ((((&DAT_0034bbd6)[iVar2] & 1) != 0) && ((&DAT_0034bbd9)[iVar2] == *(char *)(in_EAX + 3)))
      {
        *(short *)((int)&DAT_0034bbf3 + iVar2) =
             *(short *)((int)&DAT_0034bbf3 + iVar2) + (sVar3 - *(short *)(extraout_EDX + 8));
        *(short *)(&DAT_0034bbf5 + iVar2) =
             *(short *)(&DAT_0034bbf5 + iVar2) + (sVar4 - *(short *)(extraout_EDX + 10));
        *(short *)(&DAT_0034bbf7 + iVar2) =
             *(short *)(&DAT_0034bbf7 + iVar2) + (sVar3 - *(short *)(extraout_EDX + 8));
        *(short *)((int)&DAT_0034bbf9 + iVar2) =
             *(short *)((int)&DAT_0034bbf9 + iVar2) + (sVar4 - *(short *)(extraout_EDX + 10));
      }
    }
    if (DAT_0017d175 != -999) {
      DAT_0017d175 = DAT_0017d175 + (sVar3 - *(short *)(extraout_EDX + 8));
      DAT_0017d177 = DAT_0017d177 + (sVar4 - *(short *)(extraout_EDX + 10));
    }
    if (DAT_0034b2c4 != '\0') {
      DAT_0034bace = DAT_0034bace + (sVar3 - *(short *)(extraout_EDX + 8));
      DAT_0034bad0 = DAT_0034bad0 + (sVar4 - *(short *)(extraout_EDX + 10));
    }
    *(short *)(extraout_EDX + 8) = sVar3;
    *(short *)(extraout_EDX + 10) = sVar4;
    sVar1 = (short)DAT_003d9864 * DAT_0019cba6;
  }
  DAT_0017d179 = sVar1;
  DAT_0017d17b._0_2_ = FUN_000dc150();
  return;
}

/******************************************************************************
 * Function : sub_059c71 (Ghidra: FUN_00059c71)
 * Prototype: void sub_059c71(void);
 * Address  : 0x59c71 (Size: 18 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00059c71(void)

{
  if ('\0' < DAT_0034d0e5) {
    DAT_0034d0e5 = DAT_0034d0e5 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_059c83 (Ghidra: FUN_00059c83)
 * Prototype: void sub_059c83(void);
 * Address  : 0x59c83 (Size: 30 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00059c83(void)

{
  if (DAT_0034d0e5 + 6 < (int)DAT_0034d0e4) {
    DAT_0034d0e5 = DAT_0034d0e5 + '\x01';
  }
  return;
}

/******************************************************************************
 * Function : sub_059ca1 (Ghidra: FUN_00059ca1)
 * Prototype: void sub_059ca1(void);
 * Address  : 0x59ca1 (Size: 22 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x165f1f: "newgui.cpp"
 ******************************************************************************/
void FUN_00059ca1(void)

{
  FUN_000ddaf0();
  return;
}

/******************************************************************************
 * Function : sub_059ccb (Ghidra: FUN_00059ccb)
 * Prototype: void sub_059ccb(void);
 * Address  : 0x59ccb (Size: 88 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5b645, 0x5b940
 * Callees  : 1 -> 0x53c6b
 ******************************************************************************/
void FUN_00059ccb(void)

{
  int iVar1;
  int extraout_ECX;
  byte *pbVar2;
  byte *extraout_EDX;
  
  iVar1 = FUN_00053c6b();
  if (iVar1 != -1) {
    pbVar2 = &DAT_0034bbd6;
    (&DAT_0034baf3)[iVar1 * 0x20] = 1;
    do {
      if ((((*pbVar2 & 1) != 0) && ((char)pbVar2[3] == iVar1)) && (*(int *)(pbVar2 + 0x17) != 0)) {
        (**(code **)(pbVar2 + 0x17))();
        iVar1 = extraout_ECX;
        pbVar2 = extraout_EDX;
      }
      pbVar2 = pbVar2 + 0x39;
    } while (pbVar2 != &DAT_0034cefc);
  }
  return;
}

/******************************************************************************
 * Function : sub_059d02 (Ghidra: FUN_00059d02)
 * Prototype: void sub_059d02(void);
 * Address  : 0x59d02 (Size: 24 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5b645, 0x5b940
 * Callees  : 1 -> 0x53c6b
 ******************************************************************************/
void FUN_00059d02(void)

{
  int iVar1;
  
  iVar1 = FUN_00053c6b();
  if (iVar1 != -1) {
    (&DAT_0034baf3)[iVar1 * 0x20] = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_059d1a (Ghidra: FUN_00059d1a)
 * Prototype: void sub_059d1a(void);
 * Address  : 0x59d1a (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00059d1a(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_059d40 (Ghidra: FUN_00059d40)
 * Prototype: void sub_059d40(void);
 * Address  : 0x59d40 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00059d40(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_059d66 (Ghidra: FUN_00059d66)
 * Prototype: void sub_059d66(void);
 * Address  : 0x59d66 (Size: 94 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_00059d66(void)

{
  int in_EAX;
  
  FUN_0005ddee(0,0);
  DAT_002ee8ad = *(int *)(in_EAX + 0x33);
  DAT_002ee8b1 = (uint)*(ushort *)(&DAT_0018f7c9 + *(int *)(in_EAX + 0x33) * 6);
  DAT_002ee8b5 = (uint)*(ushort *)(in_EAX + 0x2b);
  return;
}

/******************************************************************************
 * Function : dk_stupid_spell_chosen_059dc4 (Ghidra: FUN_00059dc4)
 * Prototype: void dk_stupid_spell_chosen_059dc4(void);
 * Address  : 0x59dc4 (Size: 291 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:6930 ("Stupid spell chosen")
 * Naming   : String 'Stupid spell chosen'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x5ddee, 0x6ea5a, 0xddaf0
 * Strings  :
 *   - 0x165f3e: "newgui.cpp"
 *   - 0x165f2a: "Stupid spell chosen"
 ******************************************************************************/
void FUN_00059dc4(void)

{
  int in_EAX;
  
  if (*(int *)(&DAT_0018e973 + DAT_002ee8b9 * 0x1b) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 6930, "Stupid spell chosen") */
  }
  else if (((*(int *)(&DAT_0018e977 + *(int *)(in_EAX + 0x33) * 0x1b) == 6) &&
           ((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] == '\x06')) ||
          ((*(int *)(&DAT_0018e977 + *(int *)(in_EAX + 0x33) * 0x1b) == 8 &&
           ((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] == '\b')))) {
    FUN_0005ddee(0,0);
  }
  else {
    FUN_0005ddee(0,0);
    FUN_0006ea5a();
  }
  DAT_002ee8b9 = *(int *)(in_EAX + 0x33);
  DAT_002ee8bd = (uint)*(ushort *)(&DAT_0018e97c + *(int *)(in_EAX + 0x33) * 0x1b);
  DAT_002ee8c1 = (uint)*(ushort *)(in_EAX + 0x2b);
  return;
}

/******************************************************************************
 * Function : sub_059ee7 (Ghidra: FUN_00059ee7)
 * Prototype: void sub_059ee7(void);
 * Address  : 0x59ee7 (Size: 106 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5cf2d
 ******************************************************************************/
void FUN_00059ee7(void)

{
  int in_EAX;
  
  DAT_002ee8b9 = *(int *)(in_EAX + 0x33);
  DAT_002ee8c1 = (uint)*(ushort *)(in_EAX + 0x2b);
  DAT_002ee8bd = (uint)*(ushort *)(&DAT_0018e97c + DAT_002ee8b9 * 0x1b);
  if ((*(int *)(&DAT_002eae11 + DAT_002ee8b9 * 0x4c) <
       (int)(&DAT_002e1082)[DAT_002f10ce._3_1_ * 0x542]) &&
     ((DAT_002ee8b9 == 0x13 || (DAT_002ee8b9 == 9)))) {
    FUN_0005cf2d();
  }
  return;
}

/******************************************************************************
 * Function : sub_059f51 (Ghidra: FUN_00059f51)
 * Prototype: void sub_059f51(void);
 * Address  : 0x59f51 (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x50007
 ******************************************************************************/
void FUN_00059f51(void)

{
  int extraout_EDX;
  
  FUN_00050007();
  DAT_002ee8b9 = *(int *)(extraout_EDX + 0x33);
  DAT_002ee8bd = (uint)*(ushort *)(&DAT_0018e97c + *(int *)(extraout_EDX + 0x33) * 0x1b);
  DAT_002ee8c1 = (uint)*(ushort *)(extraout_EDX + 0x2b);
  return;
}

/******************************************************************************
 * Function : sub_059f7e (Ghidra: FUN_00059f7e)
 * Prototype: void sub_059f7e(void);
 * Address  : 0x59f7e (Size: 86 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_00059f7e(void)

{
  DAT_002ee8ad = 0;
  DAT_002ee8b1 = 0;
  DAT_002ee8b5 = 0;
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_059fd4 (Ghidra: FUN_00059fd4)
 * Prototype: void sub_059fd4(void);
 * Address  : 0x59fd4 (Size: 48 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00059fd4(void)

{
  DAT_002ee8c5 = 0;
  DAT_002ee8c9 = 0;
  DAT_002ee8cd = 0;
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a004 (Ghidra: FUN_0005a004)
 * Prototype: void sub_05a004(void);
 * Address  : 0x5a004 (Size: 105 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005a004(void)

{
  int in_EAX;
  
  FUN_0005ddee(0,0);
  DAT_002ee8c5 = *(int *)(in_EAX + 0x33);
  DAT_002ee8c9 = (uint)*(ushort *)(&DAT_0018ed39 + *(int *)(in_EAX + 0x33) * 0x10);
  DAT_002ee8cd = (uint)*(ushort *)(in_EAX + 0x2b);
  return;
}

/******************************************************************************
 * Function : sub_05a06d (Ghidra: FUN_0005a06d)
 * Prototype: void sub_05a06d(void);
 * Address  : 0x5a06d (Size: 122 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005a06d(void)

{
  int in_EAX;
  
  if ((&DAT_002e918d)
      [(uint)*(byte *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)]
                      + 0x1a) * 0xe6 + (uint)*(byte *)(in_EAX + 0x33)] != '\0') {
    FUN_0005ddee(0,0);
    DAT_0019d0b9 = DAT_0019d0b9 & 0xf7;
    (&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] = (&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 0xf7
    ;
  }
  return;
}

/******************************************************************************
 * Function : sub_05a0e7 (Ghidra: FUN_0005a0e7)
 * Prototype: void sub_05a0e7(void);
 * Address  : 0x5a0e7 (Size: 42 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a0e7(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : dk_illegal_autopilot_type_05a111 (Ghidra: FUN_0005a111)
 * Prototype: void dk_illegal_autopilot_type_05a111(void);
 * Address  : 0x5a111 (Size: 111 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:7051 ("ILLEGAL AUTOPILOT TYPE")
 * Naming   : String 'ILLEGAL AUTOPILOT TYPE'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x165f60: "newgui.cpp"
 *   - 0x165f49: "ILLEGAL AUTOPILOT TYPE"
 ******************************************************************************/
void FUN_0005a111(void)

{
  if ((((DAT_002ee8a3 == '\0') && (DAT_002ee8a4 == '\0')) && (DAT_002ee8a5 == '\0')) &&
     (DAT_002ee8a6 == '\0')) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 7051, "ILLEGAL AUTOPILOT TYPE") */
  }
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a180 (Ghidra: FUN_0005a180)
 * Prototype: void sub_05a180(void);
 * Address  : 0x5a180 (Size: 10 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a180(void)

{
  FUN_00084704();
  return;
}

/******************************************************************************
 * Function : sub_05a18a (Ghidra: FUN_0005a18a)
 * Prototype: void sub_05a18a(void);
 * Address  : 0x5a18a (Size: 18 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x84704
 ******************************************************************************/
void FUN_0005a18a(void)

{
  FUN_00084704();
  return;
}

/******************************************************************************
 * Function : sub_05a19c (Ghidra: FUN_0005a19c)
 * Prototype: void sub_05a19c(void);
 * Address  : 0x5a19c (Size: 8 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a19c(void)

{
  FUN_00084704();
  return;
}

/******************************************************************************
 * Function : sub_05a1a4 (Ghidra: FUN_0005a1a4)
 * Prototype: void sub_05a1a4(void);
 * Address  : 0x5a1a4 (Size: 18 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a1a4(void)

{
  FUN_00084750();
  return;
}

/******************************************************************************
 * Function : sub_05a1b6 (Ghidra: FUN_0005a1b6)
 * Prototype: void sub_05a1b6(void);
 * Address  : 0x5a1b6 (Size: 27 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x84750
 ******************************************************************************/
void FUN_0005a1b6(void)

{
  FUN_00084750();
  return;
}

/******************************************************************************
 * Function : sub_05a1d1 (Ghidra: FUN_0005a1d1)
 * Prototype: void sub_05a1d1(void);
 * Address  : 0x5a1d1 (Size: 9 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a1d1(void)

{
  FUN_00084750();
  return;
}

/******************************************************************************
 * Function : sub_05a1da (Ghidra: FUN_0005a1da)
 * Prototype: void sub_05a1da(void);
 * Address  : 0x5a1da (Size: 40 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a1da(void)

{
  FUN_00084704();
  return;
}

/******************************************************************************
 * Function : sub_05a202 (Ghidra: FUN_0005a202)
 * Prototype: void sub_05a202(void);
 * Address  : 0x5a202 (Size: 41 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a202(void)

{
  FUN_00084750();
  return;
}

/******************************************************************************
 * Function : sub_05a22b (Ghidra: FUN_0005a22b)
 * Prototype: void sub_05a22b(void);
 * Address  : 0x5a22b (Size: 59 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x84704
 ******************************************************************************/
void FUN_0005a22b(void)

{
  FUN_00084704();
  return;
}

/******************************************************************************
 * Function : sub_05a266 (Ghidra: FUN_0005a266)
 * Prototype: void sub_05a266(void);
 * Address  : 0x5a266 (Size: 61 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a266(void)

{
  FUN_00084750();
  return;
}

/******************************************************************************
 * Function : sub_05a2b1 (Ghidra: FUN_0005a2b1)
 * Prototype: void sub_05a2b1(void);
 * Address  : 0x5a2b1 (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a2b1(void)

{
  DAT_002ee8d2 = DAT_0034cf1a;
  return;
}

/******************************************************************************
 * Function : sub_05a2bc (Ghidra: FUN_0005a2bc)
 * Prototype: void sub_05a2bc(void);
 * Address  : 0x5a2bc (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a2bc(void)

{
  DAT_002ee8d3 = DAT_0034cf1b;
  return;
}

/******************************************************************************
 * Function : sub_05a2c7 (Ghidra: FUN_0005a2c7)
 * Prototype: void sub_05a2c7(void);
 * Address  : 0x5a2c7 (Size: 102 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x2a355, 0x5ddee
 ******************************************************************************/
void FUN_0005a2c7(void)

{
  FUN_0005ddee(0,0);
  FUN_0002a355();
  return;
}

/******************************************************************************
 * Function : sub_05a338 (Ghidra: FUN_0005a338)
 * Prototype: void sub_05a338(void);
 * Address  : 0x5a338 (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a338(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a365 (Ghidra: FUN_0005a365)
 * Prototype: void sub_05a365(void);
 * Address  : 0x5a365 (Size: 67 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a365(void)

{
  DAT_0034cf1e = (byte)((ulonglong)(DAT_0034cf1e + 1) % 5);
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a3a8 (Ghidra: FUN_0005a3a8)
 * Prototype: void sub_05a3a8(void);
 * Address  : 0x5a3a8 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a3a8(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a3ce (Ghidra: FUN_0005a3ce)
 * Prototype: void sub_05a3ce(void);
 * Address  : 0x5a3ce (Size: 73 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x2a355, 0x6ea5a, 0xf3264, 0xf32ae
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a3ce(void)

{
  int in_EAX;
  
  if ((*(short *)(in_EAX + 4) == 0x4b) && (DAT_002ee8d7 != _DAT_0034cf0d)) {
    FUN_0006ea5a();
  }
  DAT_002ee8d7 = DAT_0034cf0d;
  FUN_0002a355();
  FUN_000f32ae();
  FUN_000f3264();
  return;
}

/******************************************************************************
 * Function : sub_05a417 (Ghidra: FUN_0005a417)
 * Prototype: void sub_05a417(void);
 * Address  : 0x5a417 (Size: 27 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x2a355, 0xecf70
 ******************************************************************************/
void FUN_0005a417(void)

{
  DAT_002ee8d8 = DAT_0034cf11;
  FUN_0002a355();
  FUN_000ecf70();
  return;
}

/******************************************************************************
 * Function : sub_05a432 (Ghidra: FUN_0005a432)
 * Prototype: void sub_05a432(void);
 * Address  : 0x5a432 (Size: 77 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:7264 ("Error in load!")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x2c833, 0xddaf0
 * Strings  :
 *   - 0x165f7a: "newgui.cpp"
 *   - 0x165f6b: "Error in load!"
 ******************************************************************************/
void FUN_0005a432(void)

{
  int iVar1;
  
  iVar1 = FUN_0002c833();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 7264, "Error in load!") */
  }
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a47f (Ghidra: FUN_0005a47f)
 * Prototype: void sub_05a47f(void);
 * Address  : 0x5a47f (Size: 117 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:7280 ("Error in save!")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x2c785, 0xddaf0, 0xe8ca8, 0xf09e5
 * Strings  :
 *   - 0x165f94: "newgui.cpp"
 *   - 0x165f85: "Error in save!"
 ******************************************************************************/
void FUN_0005a47f(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_000f09e5();
  if (iVar1 != 0) {
    FUN_000e8ca8();
    (&DAT_002e6ff4)[(uint)*(byte *)(in_EAX + 0x1b) * 0x11] = 1;
    iVar1 = FUN_0002c785();
    if (iVar1 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 7280, "Error in save!") */
    }
  }
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05a521 (Ghidra: FUN_0005a521)
 * Prototype: void sub_05a521(void);
 * Address  : 0x5a521 (Size: 5 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a521(void)

{
  byte bVar1;
  
  FUN_0005afda();
  bVar1 = DAT_0019d0b8 & 0x3f;
  DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
  DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 >> 5) << 6;
  if (((DAT_0019d0b6 & 1) != 0) || (0x140 < DAT_003d982c)) {
    bVar1 = FUN_0005b645();
    DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
    DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 & 1) << 6;
  }
  FUN_0005ddee(0,0);
  FUN_0005c2e3();
  return;
}

/******************************************************************************
 * Function : sub_05a526 (Ghidra: FUN_0005a526)
 * Prototype: void sub_05a526(void);
 * Address  : 0x5a526 (Size: 65 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005a526(void)

{
  if ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] != '\x02') {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05a567 (Ghidra: FUN_0005a567)
 * Prototype: void sub_05a567(void);
 * Address  : 0x5a567 (Size: 78 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005a567(void)

{
  if (*(ushort *)(&DAT_0019d518 + DAT_002f10ce._3_1_ * 0x4ef) < 0x800) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05a5b5 (Ghidra: FUN_0005a5b5)
 * Prototype: void sub_05a5b5(void);
 * Address  : 0x5a5b5 (Size: 75 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005a5b5(void)

{
  if (0x80 < *(ushort *)(&DAT_0019d518 + DAT_002f10ce._3_1_ * 0x4ef)) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05a600 (Ghidra: FUN_0005a600)
 * Prototype: void sub_05a600(void);
 * Address  : 0x5a600 (Size: 73 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5bb49, 0x5c377
 ******************************************************************************/
void FUN_0005a600(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x33) + DAT_002f10ce._3_1_ * 0x1508;
  if ((&DAT_002e16fc)[DAT_002f10ce._3_1_ * 0x1508] == (&DAT_002e1930)[iVar1]) {
    FUN_0005bb49();
    return;
  }
  if ((&DAT_002e1930)[iVar1] != '\0') {
    FUN_0005c377();
  }
  return;
}

/******************************************************************************
 * Function : sub_05a649 (Ghidra: FUN_0005a649)
 * Prototype: void sub_05a649(void);
 * Address  : 0x5a649 (Size: 73 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005a649(void)

{
  if ((&DAT_002e16fc)[DAT_002f10ce._3_1_ * 0x1508] != '\0') {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05a692 (Ghidra: FUN_0005a692)
 * Prototype: void sub_05a692(void);
 * Address  : 0x5a692 (Size: 20 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a692(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508;
  if ((&DAT_002e16ff)[iVar3] != '\0') {
    cVar1 = FUN_00014188((&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]);
    if (cVar1 != '\0') {
      (&DAT_002e16ff)[iVar3] = cVar1;
      uVar2 = FUN_00014235();
      (&DAT_002e16fe)[iVar3] = uVar2;
      uVar2 = FUN_00014235();
      (&DAT_002e16fd)[iVar3] = uVar2;
    }
  }
  FUN_0005d15e();
  return;
}

/******************************************************************************
 * Function : sub_05a6a6 (Ghidra: FUN_0005a6a6)
 * Prototype: void sub_05a6a6(void);
 * Address  : 0x5a6a6 (Size: 95 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x49a9a
 * Callees  : 3 -> 0x14188, 0x14235, 0x5d15e
 ******************************************************************************/
void FUN_0005a6a6(void)

{
  byte in_AL;
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = (uint)in_AL * 0x1508;
  if ((&DAT_002e16ff)[iVar3] != '\0') {
    cVar1 = FUN_00014188();
    if (cVar1 != '\0') {
      (&DAT_002e16ff)[iVar3] = cVar1;
      uVar2 = FUN_00014235();
      (&DAT_002e16fe)[iVar3] = uVar2;
      uVar2 = FUN_00014235();
      (&DAT_002e16fd)[iVar3] = uVar2;
    }
  }
  FUN_0005d15e();
  return;
}

/******************************************************************************
 * Function : sub_05a705 (Ghidra: FUN_0005a705)
 * Prototype: void sub_05a705(void);
 * Address  : 0x5a705 (Size: 103 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x14188, 0x14235
 ******************************************************************************/
void FUN_0005a705(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508;
  if ((&DAT_002e16fd)[iVar3] != '\0') {
    cVar1 = FUN_00014235((&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]);
    if (cVar1 != '\0') {
      (&DAT_002e16fd)[iVar3] = cVar1;
      uVar2 = FUN_00014188();
      (&DAT_002e16fe)[iVar3] = uVar2;
      uVar2 = FUN_00014188();
      (&DAT_002e16ff)[iVar3] = uVar2;
    }
  }
  FUN_0005d15e();
  return;
}

/******************************************************************************
 * Function : sub_05a76c (Ghidra: FUN_0005a76c)
 * Prototype: void sub_05a76c(void);
 * Address  : 0x5a76c (Size: 209 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a76c(void)

{
  int in_EAX;
  int iVar1;
  
  if ((((DAT_0034d1a6 == 0) &&
       ((&DAT_002e16fd)[(int)*(short *)(in_EAX + 0x1b) + DAT_002f10ce._3_1_ * 0x1508] != '\0')) &&
      (iVar1 = 6 - (int)((uint)DAT_0019cba6 * DAT_003d9864 - (int)*(short *)(in_EAX + 0x1d)) /
                   (int)(*(ushort *)(in_EAX + 0x25) / 7), iVar1 < 7)) &&
     ((iVar1 = (&DAT_001ae9fc)
               [*(ushort *)(&DAT_0034d146 + iVar1 * 2 + *(short *)(in_EAX + 0x1b) * 0x10)],
      iVar1 != DAT_001ae9fc &&
      ((*(uint *)((int)&DAT_00279203 +
                 (uint)CONCAT11(*(undefined1 *)(iVar1 + 0x10),*(undefined1 *)(iVar1 + 0xe)) * 5 + 1)
        >> 0x1c & 1 << ((&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] & 0x1f)) != 0)))) {
    DAT_0034d1a6 = *(short *)(iVar1 + 0x1b);
  }
  return;
}

/******************************************************************************
 * Function : sub_05a83d (Ghidra: FUN_0005a83d)
 * Prototype: void sub_05a83d(void);
 * Address  : 0x5a83d (Size: 182 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005a83d(void)

{
  int in_EAX;
  int iVar1;
  
  if ((((DAT_0034d1a6 == 0) &&
       ((&DAT_002e16fd)[(int)*(short *)(in_EAX + 0x1b) + DAT_002f10ce._3_1_ * 0x1508] != '\0')) &&
      (iVar1 = (int)((uint)DAT_0019cba6 * DAT_003d9864 - (int)*(short *)(in_EAX + 0x1d)) /
               (int)(*(ushort *)(in_EAX + 0x25) / 7), iVar1 < 7)) &&
     ((iVar1 = (&DAT_001ae9fc)
               [*(ushort *)(&DAT_0034d176 + iVar1 * 2 + *(short *)(in_EAX + 0x1b) * 0x10)],
      iVar1 != DAT_001ae9fc &&
      ((*(uint *)((int)&DAT_00279203 +
                 (uint)CONCAT11(*(undefined1 *)(iVar1 + 0x10),*(undefined1 *)(iVar1 + 0xe)) * 5 + 1)
        >> 0x1c & 1 << ((&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] & 0x1f)) != 0)))) {
    DAT_0034d1a6 = *(short *)(iVar1 + 0x1b);
  }
  return;
}

/******************************************************************************
 * Function : dk_eek_this_what_you_05a8f3 (Ghidra: FUN_0005a8f3)
 * Prototype: void dk_eek_this_what_you_05a8f3(void);
 * Address  : 0x5a8f3 (Size: 513 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:7459 ("EEK! This is what you just picked up a second ago!")
 * Naming   : String 'EEK! This is what you just picked up a second ago!'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x5003d, 0x5ddee, 0xddaf0
 * Strings  :
 *   - 0x165fd2: "newgui.cpp"
 *   - 0x165f9f: "EEK! This is what you just picked up a second ago!"
 ******************************************************************************/
void FUN_0005a8f3(void)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  
  pbVar1 = (byte *)(&DAT_001ae9fc)[DAT_0034d1a6];
  if (DAT_0034d1a6 == 0) {
    return;
  }
  iVar4 = DAT_002f10ce._3_1_ * 0x4ef;
  local_18 = (&DAT_00191780)[(byte)(&DAT_0019d51b)[iVar4]];
  if (local_18 != 0) {
    iVar5 = (uint)local_18 * 0x1b;
    if ((&DAT_0018e98c)[iVar5] == '\0') {
      DAT_0034d1a6 = 0;
      return;
    }
    if (((int)(char)pbVar1[6] != (uint)(byte)(&DAT_0019d0f3)[iVar4]) &&
       ((&DAT_0018e98d)[iVar5] == '\0')) {
      DAT_0034d1a6 = 0;
      return;
    }
    uStack_1c = 0;
    uStack_20 = 0x5a994;
    cVar2 = FUN_0005003d();
    if (cVar2 == '\0') {
      DAT_0034d1a6 = 0;
      return;
    }
    puVar6 = &uStack_24;
    uStack_24 = 0;
    goto LAB_0005aadc;
  }
  if ((int)(char)pbVar1[6] != (uint)(byte)(&DAT_0019d0f3)[iVar4]) {
    DAT_0034d1a6 = 0;
    return;
  }
  if ((*pbVar1 & 0x10) != 0) {
    DAT_0034d1a6 = 0;
    return;
  }
  if ((pbVar1[1] & 2) != 0) {
    DAT_0034d1a6 = 0;
    return;
  }
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x6e) != 0) {
    DAT_0034d1a6 = 0;
    return;
  }
  if (pbVar1[7] == 0xe) {
    bVar3 = pbVar1[8];
  }
  else {
    bVar3 = pbVar1[7];
  }
  if (bVar3 == 0x29) {
LAB_0005aa6a:
    if ((&DAT_002ddd1e)[(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0x7e) * 0x45]
        != pbVar1[6]) {
      DAT_0034d1a6 = 0;
      return;
    }
  }
  else {
    if (pbVar1[7] == 0xe) {
      bVar3 = pbVar1[8];
    }
    else {
      bVar3 = pbVar1[7];
    }
    if (bVar3 == 0x28) goto LAB_0005aa6a;
    if (pbVar1[7] == 0xe) {
      bVar3 = pbVar1[8];
    }
    else {
      bVar3 = pbVar1[7];
    }
    if (bVar3 == 0x2b) goto LAB_0005aa6a;
    if (pbVar1[7] == 0xe) {
      bVar3 = pbVar1[8];
    }
    else {
      bVar3 = pbVar1[7];
    }
    if (bVar3 == 0x2a) goto LAB_0005aa6a;
  }
  if (*(ushort *)(&DAT_002e05bc + DAT_002f10ce._3_1_ * 0x1508) == DAT_0034d1a6) {
    uStack_1c = 0x5aab8;
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 7459, "EEK! This is what you just picked up a second ago!") */
    DAT_0034d1a6 = 0;
    return;
  }
  uStack_1c = 0;
  puVar6 = &uStack_20;
LAB_0005aadc:
  uStack_20 = 0;
  *(undefined4 *)((int)puVar6 + -4) = 0x5aae6;
  FUN_0005ddee();
  DAT_0034d1a6 = 0;
  return;
}

/******************************************************************************
 * Function : sub_05aaf4 (Ghidra: FUN_0005aaf4)
 * Prototype: void sub_05aaf4(void);
 * Address  : 0x5aaf4 (Size: 81 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005aaf4(void)

{
  if (DAT_0034d1a6 != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05ab45 (Ghidra: FUN_0005ab45)
 * Prototype: void sub_05ab45(void);
 * Address  : 0x5ab45 (Size: 60 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ab45(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05ab81 (Ghidra: FUN_0005ab81)
 * Prototype: void sub_05ab81(void);
 * Address  : 0x5ab81 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x275f6
 * Callees  : 1 -> 0x5c848
 ******************************************************************************/
void FUN_0005ab81(void)

{
  uint in_EAX;
  char in_DL;
  
  if ((in_DL == (&DAT_002e16fc)[in_EAX * 0x1508]) &&
     ((&DAT_002e16fc)[in_EAX * 0x1508] = 0,
     in_EAX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])) {
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005c848();
  }
  return;
}

/******************************************************************************
 * Function : sub_05abd1 (Ghidra: FUN_0005abd1)
 * Prototype: void sub_05abd1(void);
 * Address  : 0x5abd1 (Size: 34 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x53c6b, 0x5aee2, 0x5cf2d
 ******************************************************************************/
void FUN_0005abd1(void)

{
  int iVar1;
  
  iVar1 = FUN_00053c6b();
  if (iVar1 == -1) {
    FUN_0005aee2();
    FUN_0005cf2d();
  }
  return;
}

/******************************************************************************
 * Function : sub_05abf3 (Ghidra: FUN_0005abf3)
 * Prototype: void sub_05abf3(void);
 * Address  : 0x5abf3 (Size: 32 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005abf3(void)

{
  char cVar1;
  byte *in_EAX;
  
  cVar1 = (&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef];
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (cVar1 != '\x02') << 3;
  return;
}

/******************************************************************************
 * Function : sub_05ac13 (Ghidra: FUN_0005ac13)
 * Prototype: void sub_05ac13(void);
 * Address  : 0x5ac13 (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ac13(void)

{
  int in_EAX;
  
  *(undefined1 *)(*(int *)(in_EAX + 0x33) + 0x404) = 1;
  return;
}

/******************************************************************************
 * Function : sub_05ac1e (Ghidra: FUN_0005ac1e)
 * Prototype: void sub_05ac1e(void);
 * Address  : 0x5ac1e (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ac1e(void)

{
  int in_EAX;
  
  *(undefined1 *)(*(int *)(in_EAX + 0x33) + 0x404) = 2;
  return;
}

/******************************************************************************
 * Function : sub_05ac4a (Ghidra: FUN_0005ac4a)
 * Prototype: void sub_05ac4a(void);
 * Address  : 0x5ac4a (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xcfeb4
 ******************************************************************************/
void FUN_0005ac4a(void)

{
  int extraout_EDX;
  
  FUN_000cfeb4();
  DAT_002ee8ad = *(int *)(extraout_EDX + 0x33);
  DAT_002ee8b1 = (uint)*(ushort *)(&DAT_0018f7c9 + *(int *)(extraout_EDX + 0x33) * 6);
  DAT_002ee8b5 = (uint)*(ushort *)(extraout_EDX + 0x2b);
  return;
}

/******************************************************************************
 * Function : sub_05ac77 (Ghidra: FUN_0005ac77)
 * Prototype: void sub_05ac77(void);
 * Address  : 0x5ac77 (Size: 9 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ac77(void)

{
  int in_EAX;
  
  DAT_0017d17b._3_1_ = *(undefined1 *)(in_EAX + 0x33);
  return;
}

/******************************************************************************
 * Function : sub_05ac80 (Ghidra: FUN_0005ac80)
 * Prototype: void sub_05ac80(void);
 * Address  : 0x5ac80 (Size: 76 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x76800
 ******************************************************************************/
void FUN_0005ac80(void)

{
  int in_EAX;
  
  FUN_00076800();
  DAT_002ee8c5 = *(int *)(in_EAX + 0x33);
  DAT_002ee8c9 = (uint)*(ushort *)(&DAT_0018ed39 + *(int *)(in_EAX + 0x33) * 0x10);
  DAT_002ee8cd = (uint)*(ushort *)(in_EAX + 0x2b);
  return;
}

/******************************************************************************
 * Function : sub_05accc (Ghidra: FUN_0005accc)
 * Prototype: void sub_05accc(void);
 * Address  : 0x5accc (Size: 43 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2313c
 ******************************************************************************/
void FUN_0005accc(void)

{
  int in_EAX;
  
  FUN_0002313c();
  DAT_002ee8c5 = *(int *)(in_EAX + 0x33);
  DAT_002ee8c9 = (uint)*(ushort *)(&DAT_0018ed39 + *(int *)(in_EAX + 0x33) * 0x10);
  DAT_002ee8cd = (uint)*(ushort *)(in_EAX + 0x2b);
  return;
}

/******************************************************************************
 * Function : sub_05acf7 (Ghidra: FUN_0005acf7)
 * Prototype: void sub_05acf7(void);
 * Address  : 0x5acf7 (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005acf7(void)

{
  int in_EAX;
  
  DAT_0017d180 = (&DAT_0018ed35)[(uint)*(byte *)(in_EAX + 0x33) * 0x10];
  return;
}

/******************************************************************************
 * Function : sub_05ad0a (Ghidra: FUN_0005ad0a)
 * Prototype: void sub_05ad0a(void);
 * Address  : 0x5ad0a (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ad0a(void)

{
  int in_EAX;
  
  DAT_0017d17f = (&DAT_0018ed35)[(uint)*(byte *)(in_EAX + 0x33) * 0x10];
  return;
}

/******************************************************************************
 * Function : sub_05ad26 (Ghidra: FUN_0005ad26)
 * Prototype: void sub_05ad26(void);
 * Address  : 0x5ad26 (Size: 250 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ad26(void)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  for (uVar2 = 1; uVar2 < 0x1f; uVar2 = (uint)(byte)((char)uVar2 + 1)) {
    if ((&DAT_002e0ea3)[DAT_002f10ce._3_1_ * 0x1508 + uVar2] != '\0') {
      while( true ) {
        bVar1 = (byte)(uVar2 >> 8);
        if (((int)DAT_0034d0e4 <= (int)(uint)bVar1) ||
           ((uint)(ushort)(&DAT_0034d1a8)[bVar1] == (uVar2 & 0xff))) break;
        uVar2 = (uint)CONCAT11(bVar1 + 1,(char)uVar2);
      }
      if ((uint)bVar1 == (int)DAT_0034d0e4) {
        DAT_0034d0e4 = DAT_0034d0e4 + '\x01';
        (&DAT_0034d1a8)[bVar1] = (ushort)uVar2 & 0xff;
      }
    }
  }
  uVar2 = 1;
  while( true ) {
    if (0x1e < uVar2) {
      return;
    }
    if (((&DAT_002e0ea3)[DAT_002f10ce._3_1_ * 0x1508 + uVar2] == '\0') && (uVar2 != 0x17)) break;
LAB_0005aded:
    uVar2 = (uint)(byte)((char)uVar2 + 1);
  }
  bVar1 = 0;
LAB_0005ad99:
  if ((int)(uint)bVar1 < (int)DAT_0034d0e4) {
    if ((ushort)(&DAT_0034d1a8)[bVar1] != uVar2) goto LAB_0005ad97;
    uVar3 = CONCAT11(bVar1,(char)uVar2);
    while( true ) {
      uVar2 = (uint)uVar3;
      bVar1 = (byte)(uVar3 >> 8);
      uVar4 = (uint)bVar1;
      if (DAT_0034d0e4 + -1 <= (int)uVar4) break;
      uVar3 = CONCAT11(bVar1 + 1,(char)uVar3);
      (&DAT_0034d1a8)[uVar4] = (&DAT_0034d1aa)[uVar4];
    }
    DAT_0034d0e4 = DAT_0034d0e4 + -1;
    (&DAT_0034d1a8)[uVar4] = 0;
  }
  goto LAB_0005aded;
LAB_0005ad97:
  bVar1 = bVar1 + 1;
  goto LAB_0005ad99;
}

/******************************************************************************
 * Function : sub_05ae20 (Ghidra: FUN_0005ae20)
 * Prototype: longlong sub_05ae20(void);
 * Address  : 0x5ae20 (Size: 112 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x49160, 0x49426
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0005ae20(void)

{
  char cVar1;
  short sVar2;
  undefined4 in_EDX;
  
  sVar2 = 0;
  while( true ) {
    if ((int)DAT_0034cf04 <= (int)sVar2) {
      return (ulonglong)CONCAT43(in_EDX,(int3)(char)((ushort)sVar2 >> 8)) << 8;
    }
    cVar1 = (&DAT_0034cefc)[sVar2];
    if (((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) &&
        ((((cVar1 != '\x04' && (cVar1 != '\x05')) &&
          ((cVar1 != '\a' && ((cVar1 != '\x06' && (cVar1 != '\x10')))))) && (cVar1 != '\x1f')))) &&
       ((((cVar1 != '#' && (cVar1 != ' ')) && (cVar1 != '\"')) &&
        ((cVar1 != '&' && (cVar1 != '\x1b')))))) break;
    sVar2 = sVar2 + 1;
  }
  return CONCAT44(in_EDX,CONCAT31(cVar1 >> 7,1));
}

/******************************************************************************
 * Function : sub_05ae90 (Ghidra: FUN_0005ae90)
 * Prototype: void sub_05ae90(void);
 * Address  : 0x5ae90 (Size: 82 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x36ff4, 0xdd6c8
 * Callees  : 4 -> 0x52b58, 0x5aee2, 0x5afda, 0x5c848
 ******************************************************************************/
void FUN_0005ae90(void)

{
  char cVar1;
  
  FUN_0005aee2();
  FUN_0005afda();
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_05aee2 (Ghidra: FUN_0005aee2)
 * Prototype: void sub_05aee2(void);
 * Address  : 0x5aee2 (Size: 248 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x49426, 0x5abd1, 0x5ae90, 0x5f6c5
 * Callees  : 4 -> 0x52b58, 0x53c6b, 0x5c848, 0x5d34c
 ******************************************************************************/
void FUN_0005aee2(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00053c6b();
  if (iVar2 != -1) {
    FUN_0005d34c();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_05afda (Ghidra: FUN_0005afda)
 * Prototype: undefined8 sub_05afda(void);
 * Address  : 0x5afda (Size: 482 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x47bcd, 0x47ea3, 0x49160, 0x49426, 0x4991c, 0x4b222, 0x4b5ca, 0x4b6ae, 0x5ae90, 0x85f80
 * Callees  : 3 -> 0x52b58, 0x5c848, 0x5ddee
 ******************************************************************************/
undefined8 FUN_0005afda(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 auStack_24 [5];
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  auStack_24[4] = 0x5afe8;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    auStack_24[4] = 0x5affd;
    FUN_0005c848();
  }
  uVar4 = (uint)(cVar1 != '\0');
  auStack_24[4] = 0x5b007;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    auStack_24[4] = 0;
    puVar2 = auStack_24 + 3;
    auStack_24[3] = 0;
    FUN_0005ddee();
    uVar4 = 1;
    FUN_0005c848();
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x5b052;
  cVar1 = FUN_00052b58();
  puVar3 = (undefined1 *)puVar2;
  if (cVar1 != '\0') {
    *(undefined4 *)((int)puVar2 + -4) = 0;
    puVar3 = (undefined1 *)((int)puVar2 + -8);
    *(undefined4 *)((int)puVar2 + -8) = 0;
    *(undefined4 *)((int)puVar2 + -0xc) = 0x5b084;
    FUN_0005ddee();
    uVar4 = 1;
    *(undefined4 *)((int)puVar2 + -0xc) = 0x5b093;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b09d;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b0b0;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b0ba;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b0cd;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b0d7;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b0ea;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b0f4;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b107;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b111;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b124;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b12e;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b141;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b14b;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b15e;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b168;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b17b;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b185;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b198;
    FUN_0005c848();
  }
  *(undefined4 *)(puVar3 + -4) = 0x5b1a2;
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    uVar4 = 1;
    *(undefined4 *)(puVar3 + -4) = 0x5b1b5;
    FUN_0005c848();
  }
  return CONCAT44(*(undefined4 *)(puVar3 + 4),uVar4);
}

/******************************************************************************
 * Function : dk_backup_input_field_small_05b1bc (Ghidra: FUN_0005b1bc)
 * Prototype: void dk_backup_input_field_small_05b1bc(void);
 * Address  : 0x5b1bc (Size: 159 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:7871 ("backup_input_field too small")
 * Naming   : String 'backup_input_field too small'
 * Callers  : 1 -> 0x587ff
 * Callees  : 7 -> 0xddaf0, 0xe6a10, 0xe7714, 0xe8ca8, 0xea290, 0xefdb4, 0xf323f
 * Strings  :
 *   - 0x165ffa: "newgui.cpp"
 *   - 0x165fdd: "backup_input_field too small"
 ******************************************************************************/
void FUN_0005b1bc(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_003db5fc = 0;
  FUN_000e6a10();
  uVar1 = FUN_000efdb4();
  if (uVar1 < 0x40) {
    FUN_000e8ca8();
  }
  else {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 7871, "backup_input_field too small") */
    FUN_000f323f();
    DAT_0034cf62 = 0;
  }
  FUN_000e7714(&DAT_0019cbac,DAT_00333733);
  iVar2 = FUN_000ea290();
  if (iVar2 == 0) {
    FUN_000e6a10();
  }
  return;
}

/******************************************************************************
 * Function : sub_05b25b (Ghidra: FUN_0005b25b)
 * Prototype: undefined4 sub_05b25b(void);
 * Address  : 0x5b25b (Size: 386 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 5 -> 0x52be7, 0xe69fc, 0xe8ca8, 0xe9dd6, 0xefdb4
 ******************************************************************************/
undefined4 FUN_0005b25b(void)

{
  char cVar1;
  byte *in_EAX;
  uint uVar2;
  int iVar3;
  char *extraout_ECX;
  undefined8 uVar4;
  
  uVar4 = FUN_000efdb4();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  uVar2 = (uint)DAT_003db5fc;
  if ((DAT_003db5fc & 0x80) != 0) {
    (&DAT_003db4fc)[DAT_003db5fc] = 0;
    DAT_003db5fc = 0;
    return 0;
  }
  if ((iVar3 == -1) && ((DAT_003db526 != '\0' || (DAT_003db532 != '\0')))) {
    if (DAT_003db5fc == 0x2a) {
      DAT_003db5fc = 0;
      return 0;
    }
    if (DAT_003db5fc == 0x36) {
      DAT_003db5fc = 0;
      return 0;
    }
    cVar1 = (&DAT_001954d8)[uVar2];
  }
  else {
    cVar1 = (&DAT_00195458)[uVar2];
  }
  if (uVar2 == 0x1c) {
    if (((*(short *)(in_EAX + 0x2d) < 0) || (*extraout_ECX != '\0')) || (iVar3 == -3)) {
      in_EAX[1] = 0;
      (**(code **)(in_EAX + 7))();
      DAT_0034cf1f = 0;
      if ((*in_EAX & 2) != 0) {
        (&DAT_0034bad7)[(char)in_EAX[3] * 0x20] = 3;
        FUN_00052be7();
      }
    }
  }
  else if (uVar2 == 1) {
    FUN_000e8ca8();
    DAT_0034cf1f = 0;
  }
  else if (uVar2 == 0xe) {
    (extraout_ECX + (int)uVar4)[-1] = '\0';
    extraout_ECX[(int)uVar4] = '\0';
  }
  else {
    iVar3 = FUN_000e69fc();
    uVar4 = FUN_000efdb4();
    if ((uint)uVar4 < iVar3 - 1U) {
      if ((int)((ulonglong)uVar4 >> 0x20) == -1) {
        if (((&DAT_0017469c)[(byte)(cVar1 + 1U)] & 8) == 0) goto LAB_0005b3ac;
      }
      else if ((((int)(char)(&DAT_0017469c)[(byte)(cVar1 + 1U)] & 0xe0U) == 0) && (cVar1 != ' '))
      goto LAB_0005b3ac;
      FUN_000e9dd6();
    }
  }
LAB_0005b3ac:
  (&DAT_003db4fc)[uVar2] = 0;
  DAT_003db5fc = 0;
  return 1;
}

/******************************************************************************
 * Function : sub_05b3dd (Ghidra: FUN_0005b3dd)
 * Prototype: void sub_05b3dd(void);
 * Address  : 0x5b3dd (Size: 31 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5c848
 * Callees  : 1 -> 0xe8ca8
 ******************************************************************************/
void FUN_0005b3dd(void)

{
  FUN_000e8ca8();
  DAT_0034cf1f = 0;
  return;
}

/******************************************************************************
 * Function : sub_05b3fc (Ghidra: FUN_0005b3fc)
 * Prototype: void sub_05b3fc(void);
 * Address  : 0x5b3fc (Size: 235 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x537af
 * Callees  : 2 -> 0xe7714, 0xe9dd6
 * Strings  :
 *   - 0x166005: "Avatar"
 ******************************************************************************/
void FUN_0005b3fc(void)

{
  int in_EAX;
  undefined2 extraout_CX;
  uint extraout_ECX;
  uint uVar1;
  
  if (*(char *)(in_EAX + 0x1a) == '\a') {
    FUN_000e7714();
    return;
  }
  FUN_000e7714();
  uVar1 = extraout_ECX;
  while ((byte)(uVar1 >> 8) < (byte)uVar1) {
    FUN_000e9dd6();
    uVar1 = (uint)CONCAT11((char)((ushort)extraout_CX >> 8) + '\x01',(char)extraout_CX);
  }
  return;
}

/******************************************************************************
 * Function : sub_05b4e7 (Ghidra: FUN_0005b4e7)
 * Prototype: void sub_05b4e7(void);
 * Address  : 0x5b4e7 (Size: 42 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2c785
 * Callees  : 2 -> 0x5cf2d, 0xe8ca8
 ******************************************************************************/
void FUN_0005b4e7(void)

{
  if (DAT_002e6f2d == '\0') {
    FUN_000e8ca8();
    FUN_0005cf2d();
  }
  return;
}

/******************************************************************************
 * Function : sub_05b5e1 (Ghidra: FUN_0005b5e1)
 * Prototype: void sub_05b5e1(void);
 * Address  : 0x5b5e1 (Size: 20 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x47bcd, 0x47ea3
 * Callees  : 1 -> 0x2a355
 ******************************************************************************/
void FUN_0005b5e1(void)

{
  DAT_002ee920 = DAT_002ee920 == '\0';
  FUN_0002a355();
  return;
}

/******************************************************************************
 * Function : sub_05b5f5 (Ghidra: FUN_0005b5f5)
 * Prototype: undefined4 sub_05b5f5(void);
 * Address  : 0x5b5f5 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x53ccc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0005b5f5(void)

{
  byte in_AL;
  bool bVar1;
  
  if (in_AL < 0x1f) {
    if (in_AL < 5) {
      if (in_AL != 0) {
        return 1;
      }
      return 0;
    }
    if (in_AL < 8) {
      return 1;
    }
    if (in_AL < 0x10) {
      return 0;
    }
    if (in_AL < 0x11) {
      return 1;
    }
    bVar1 = in_AL == 0x1b;
  }
  else {
    if (in_AL < 0x20) {
      return 1;
    }
    if (in_AL < 0x22) {
      bVar1 = in_AL == 0x20;
    }
    else {
      if (in_AL < 0x23) {
        return 1;
      }
      if (in_AL < 0x24) {
        return 1;
      }
      bVar1 = in_AL == 0x26;
    }
  }
  if (bVar1) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_05b645 (Ghidra: FUN_0005b645)
 * Prototype: undefined8 sub_05b645(void);
 * Address  : 0x5b645 (Size: 763 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x462a3, 0x4823a, 0x4991c, 0x499ce, 0x4bdfa, 0x4bef7, 0x5b9c0, 0x809d0, 0x80a94, 0x80c84
 * Callees  : 3 -> 0x53c6b, 0x59ccb, 0x59d02
 ******************************************************************************/
undefined8 FUN_0005b645(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 in_EDX;
  uint uVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  undefined4 extraout_EDX_12;
  uint extraout_EDX_13;
  
  iVar1 = FUN_00053c6b();
  uVar2 = (uint)(byte)(&DAT_0034baf3)[iVar1 * 0x20];
  if (in_EAX != uVar2) {
    if (in_EAX == 0) {
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2ad = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2ae = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2af = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b0 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b1 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b2 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b3 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b4 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b5 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b6 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b7 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b8 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      iVar1 = FUN_00053c6b();
      DAT_0034b2b9 = (&DAT_0034baf3)[iVar1 * 0x20];
      FUN_00059d02();
      uVar2 = extraout_EDX_13;
    }
    else {
      FUN_00059ccb();
      uVar2 = extraout_EDX;
      if (DAT_0034b2ad != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_00;
      }
      if (DAT_0034b2ae != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_01;
      }
      if (DAT_0034b2af != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_02;
      }
      if (DAT_0034b2b0 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_03;
      }
      if (DAT_0034b2b2 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_04;
      }
      if (DAT_0034b2b3 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_05;
      }
      if (DAT_0034b2b1 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_06;
      }
      if (DAT_0034b2b4 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_07;
      }
      if (DAT_0034b2b5 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_08;
      }
      if (DAT_0034b2b6 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_09;
      }
      if (DAT_0034b2b8 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_10;
      }
      if (DAT_0034b2b7 != '\0') {
        FUN_00059ccb();
        uVar2 = extraout_EDX_11;
      }
      if (DAT_0034b2b9 != '\0') {
        FUN_00059ccb();
        return CONCAT44(in_EDX,extraout_EDX_12);
      }
    }
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_05b940 (Ghidra: FUN_0005b940)
 * Prototype: undefined4 sub_05b940(void);
 * Address  : 0x5b940 (Size: 115 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5b9c0
 * Callees  : 3 -> 0x53c6b, 0x59ccb, 0x59d02
 ******************************************************************************/
undefined4 FUN_0005b940(void)

{
  int in_EAX;
  int iVar1;
  
  if (in_EAX == 0) {
    iVar1 = FUN_00053c6b();
    DAT_0034b2ba = (&DAT_0034baf3)[iVar1 * 0x20];
    FUN_00059d02();
    iVar1 = FUN_00053c6b();
    DAT_0034b2bb = (&DAT_0034baf3)[iVar1 * 0x20];
    FUN_00059d02();
  }
  else if ((DAT_0034b2ba != '\0') || (DAT_0034b2bb != '\0')) {
    FUN_00059ccb();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_05b9b3 (Ghidra: FUN_0005b9b3)
 * Prototype: void sub_05b9b3(void);
 * Address  : 0x5b9b3 (Size: 13 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x47bcd, 0x480aa, 0x49426
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005b9b3(void)

{
  byte bVar1;
  
  bVar1 = DAT_0019d0b8 & 0x20;
  DAT_0019d0b8 = DAT_0019d0b8 & 0xdf;
  DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 == 0) << 5;
  if ((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02') {
    FUN_0005b940();
  }
  else {
    FUN_0005b645();
  }
  FUN_000780df();
  return;
}

/******************************************************************************
 * Function : sub_05b9c0 (Ghidra: FUN_0005b9c0)
 * Prototype: void sub_05b9c0(void);
 * Address  : 0x5b9c0 (Size: 163 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x402e5, 0x5d280
 * Callees  : 3 -> 0x5b645, 0x5b940, 0x780df
 ******************************************************************************/
void FUN_0005b9c0(void)

{
  byte in_AL;
  
  DAT_0019d0b8 = DAT_0019d0b8 & 0xdf;
  DAT_0019d0b8 = DAT_0019d0b8 | (in_AL & 1) << 5;
  if ((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02') {
    FUN_0005b940();
  }
  else {
    FUN_0005b645();
  }
  FUN_000780df();
  return;
}

/******************************************************************************
 * Function : sub_05ba63 (Ghidra: FUN_0005ba63)
 * Prototype: void sub_05ba63(void);
 * Address  : 0x5ba63 (Size: 29 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x47fe2
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ba63(void)

{
  byte bVar1;
  
  bVar1 = DAT_0019d0b8 & 0x20;
  DAT_0019d0b8 = DAT_0019d0b8 & 0xdf;
  DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 == 0) << 5;
  return;
}

/******************************************************************************
 * Function : sub_05ba80 (Ghidra: FUN_0005ba80)
 * Prototype: void sub_05ba80(void);
 * Address  : 0x5ba80 (Size: 189 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x691a2, 0xde6a8
 * Callees  : 3 -> 0x274ad, 0x27553, 0x85ad4
 ******************************************************************************/
void FUN_0005ba80(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  undefined2 uVar2;
  byte local_10;
  
  for (local_10 = 0; local_10 < 0xd; local_10 = local_10 + 1) {
    if ((&DAT_002e7087)[(uint)(byte)(&DAT_002e1930)[(uint)local_10 + in_EAX * 0x1508] * 0x15] ==
        '\x03') {
      FUN_00027553(0);
      return;
    }
  }
  if ((in_EDX == 0xff) && (unaff_EBX == 0xff)) {
    iVar1 = FUN_00085ad4();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(undefined2 *)(iVar1 + 0x1b);
  }
  else {
    uVar2 = 0;
  }
  FUN_000274ad(uVar2);
  return;
}

/******************************************************************************
 * Function : sub_05bb49 (Ghidra: FUN_0005bb49)
 * Prototype: void sub_05bb49(void);
 * Address  : 0x5bb49 (Size: 83 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5a600
 * Callees  : 2 -> 0x5c848, 0x5ddee
 ******************************************************************************/
void FUN_0005bb49(void)

{
  FUN_0005ddee(0,0);
  FUN_0005c848();
  FUN_0005c848();
  FUN_0005c848();
  return;
}

/******************************************************************************
 * Function : sub_05bb9c (Ghidra: FUN_0005bb9c)
 * Prototype: undefined8 sub_05bb9c(void);
 * Address  : 0x5bb9c (Size: 293 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x57739, 0x5789a
 * Callees  : 2 -> 0xe6cc4, 0xe8ca8
 ******************************************************************************/
undefined8 FUN_0005bb9c(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  undefined4 in_EDX;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte local_424 [1024];
  int local_24;
  int local_20;
  int local_1c;
  
  pbVar7 = local_424;
  local_20 = 0;
  if (DAT_003d98b4 != 0) {
    FUN_000e8ca8();
    iVar2 = DAT_003d988c - DAT_003d98a0;
    local_1c = iVar2;
    iVar4 = extraout_ECX;
    iVar6 = iVar2;
    while( true ) {
      local_20 = iVar4 + 1;
      if (*pbVar7 == 0) break;
      if (*pbVar7 < 0x21) {
        bVar1 = *pbVar7;
        if (bVar1 == 0x20) {
          if (DAT_003d98b4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (uint)*(byte *)(DAT_003d98b4 + 10);
          }
LAB_0005bc04:
          local_24 = (iVar6 + uVar3) - local_1c;
          uVar8 = FUN_000e6cc4();
          local_20 = extraout_ECX_00;
          iVar5 = (int)((ulonglong)uVar8 >> 0x20);
          if (DAT_003d9894 < (int)uVar8 + local_24) {
            local_20 = extraout_ECX_00 + 1;
            iVar5 = iVar2;
          }
        }
        else {
          iVar5 = iVar2;
          if (bVar1 != 10) {
            if (bVar1 == 9) {
              if (DAT_003d98b4 == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = (uint)*(byte *)(DAT_003d98b4 + 10);
              }
              uVar3 = uVar3 * DAT_00195430;
              goto LAB_0005bc04;
            }
            local_20 = iVar4;
            iVar5 = iVar6;
            if (bVar1 == 0xe) {
              pbVar7 = pbVar7 + 1;
            }
          }
        }
      }
      else {
        if (DAT_003d98b4 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)*(byte *)((*pbVar7 - 0x1f) * 6 + DAT_003d98b4 + 4);
        }
        local_20 = iVar4;
        iVar5 = iVar6 + uVar3;
      }
      pbVar7 = pbVar7 + 1;
      iVar4 = local_20;
      iVar6 = iVar5;
    }
  }
  if (DAT_003d98b4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
  }
  return CONCAT44(in_EDX,(uint)DAT_0019cba6 * local_20 * uVar3);
}

/******************************************************************************
 * Function : sub_05bcc1 (Ghidra: FUN_0005bcc1)
 * Prototype: void sub_05bcc1(void);
 * Address  : 0x5bcc1 (Size: 22 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x691a2, 0xde6a8
 * Callees  : 1 -> 0xe8ca8
 ******************************************************************************/
void FUN_0005bcc1(void)

{
  FUN_000e8ca8();
  DAT_0034cf15 = 1;
  return;
}

/******************************************************************************
 * Function : sub_05bcd7 (Ghidra: FUN_0005bcd7)
 * Prototype: void sub_05bcd7(void);
 * Address  : 0x5bcd7 (Size: 75 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x27390
 ******************************************************************************/
void FUN_0005bcd7(void)

{
  int in_EAX;
  
  FUN_00027390(-in_EAX);
  return;
}

/******************************************************************************
 * Function : sub_05bd22 (Ghidra: FUN_0005bd22)
 * Prototype: ulonglong sub_05bd22(void);
 * Address  : 0x5bd22 (Size: 342 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 2 -> 0xdc150, 0xe7714
 ******************************************************************************/
ulonglong FUN_0005bd22(void)

{
  ushort uVar1;
  undefined1 *in_EAX;
  int iVar2;
  undefined4 in_EDX;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  if (DAT_002ee920 == '\0') {
LAB_0005be73:
    return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
  }
  iVar2 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[(byte)in_EAX[1]] + (&DAT_0019033b)[(byte)in_EAX[3]] * 0x55)
                       * 6] * 0x45;
  in_EAX = &DAT_002ddd1b + iVar2;
  if ((in_EAX == (undefined1 *)0x0) ||
     (*(short *)(&DAT_0018ebbd + (uint)*(ushort *)(&DAT_002ddd25 + iVar2) * 0x17) == 0xc9))
  goto LAB_0005be73;
  if (in_EAX != DAT_0034bac9) {
    DAT_0034bad4 = 0;
    DAT_0034bac9 = in_EAX;
  }
  if ((DAT_0034bad4 < 0x15) && ((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] != '\f')) {
    DAT_0034bad4 = DAT_0034bad4 + 1;
    goto LAB_0005be6e;
  }
  uVar1 = *(ushort *)(&DAT_002ddd25 + iVar2);
  if (uVar1 < 8) {
    if (1 < uVar1) goto LAB_0005be01;
LAB_0005bdda:
    uVar5 = (&DAT_0033319b)
            [*(ushort *)(&DAT_0018ebbd + (uint)*(ushort *)(&DAT_002ddd25 + iVar2) * 0x17)];
    puVar4 = &DAT_00166012;
  }
  else {
    if (((0xd < uVar1) && (0xe < uVar1)) && (uVar1 != 0x10)) goto LAB_0005bdda;
LAB_0005be01:
    uVar5 = (&DAT_0033319b)
            [*(ushort *)(&DAT_0018ebbd + (uint)*(ushort *)(&DAT_002ddd25 + iVar2) * 0x17)];
    puVar4 = &DAT_0016600f;
  }
  FUN_000e7714(&DAT_0034b2c5,puVar4,uVar5);
  DAT_0034b2c4 = 1;
  DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
  uVar3 = FUN_000dc150();
  in_EAX = (undefined1 *)((int)uVar3 + 0x56 + (int)((ulonglong)uVar3 >> 0x20));
  DAT_0034bacd = 1;
  DAT_0034bad0 = SUB42(in_EAX,0);
LAB_0005be6e:
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),1));
}

/******************************************************************************
 * Function : sub_05be78 (Ghidra: FUN_0005be78)
 * Prototype: ulonglong sub_05be78(void);
 * Address  : 0x5be78 (Size: 235 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 2 -> 0xdc150, 0xe7714
 ******************************************************************************/
ulonglong FUN_0005be78(void)

{
  byte *pbVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 in_EDX;
  uint uVar4;
  
  uVar2 = ((&DAT_0019033b)[*(byte *)(in_EAX + 1)] + (&DAT_0019033b)[*(byte *)(in_EAX + 3)] * 0x55) *
          6;
  pbVar1 = &DAT_002d33c5 + uVar2;
  if (DAT_002ee920 != '\0') {
    uVar4 = (uint)*pbVar1;
    uVar2 = (uint)*(ushort *)(&DAT_001921c0 + uVar4 * 0x16);
    if (uVar2 != 0xc9) {
      if (uVar4 != DAT_0034bac9) {
        DAT_0034bad4 = 0;
        DAT_0034bac9 = uVar4;
      }
      if ((DAT_0034bad4 < 0x15) &&
         (uVar2 = (uint)(byte)(&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef], uVar2 != 0xc)) {
        DAT_0034bad4 = DAT_0034bad4 + 1;
      }
      else {
        DAT_0034b2c4 = 1;
        FUN_000e7714(&DAT_0034b2c5,
                     (&DAT_0033319b)[*(ushort *)(&DAT_001921c0 + (uint)*pbVar1 * 0x16)]);
        DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
        iVar3 = FUN_000dc150();
        uVar2 = iVar3 + 0x56;
        DAT_0034bacd = 2;
        DAT_0034bad0 = (undefined2)uVar2;
      }
      return CONCAT44(in_EDX,CONCAT31((int3)(uVar2 >> 8),1));
    }
  }
  return CONCAT44(in_EDX,uVar2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_05bf63 (Ghidra: FUN_0005bf63)
 * Prototype: ulonglong sub_05bf63(void);
 * Address  : 0x5bf63 (Size: 240 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 3 -> 0x76789, 0xdc150, 0xe7714
 ******************************************************************************/
ulonglong FUN_0005bf63(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = FUN_00076789();
  uVar2 = 0;
  if ((iVar1 != 0) &&
     ((*(char *)(iVar1 + 0x18) != '\0' ||
      (uVar2 = (uint)*(char *)(iVar1 + 6),
      uVar2 == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])))) {
    if (iVar1 != DAT_0034bac9) {
      DAT_0034bad4 = 0;
      DAT_0034bac9 = iVar1;
    }
    if ((DAT_0034bad4 < 0x15) &&
       (uVar2 = (uint)(byte)(&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef], uVar2 != 0xc)) {
      DAT_0034bad4 = DAT_0034bad4 + 1;
    }
    else {
      DAT_0034b2c4 = 1;
      FUN_000e7714(&DAT_0034b2c5,
                   (&DAT_0033319b)
                   [*(ushort *)(&DAT_0018ed3d + (uint)*(byte *)(iVar1 + 0x1a) * 0x10)]);
      DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
      iVar1 = FUN_000dc150();
      uVar2 = iVar1 + 0x56;
      DAT_0034bacd = 4;
      DAT_0034bad0 = (undefined2)uVar2;
    }
    return CONCAT44(in_EDX,CONCAT31((int3)(uVar2 >> 8),1));
  }
  return CONCAT44(in_EDX,uVar2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_05c053 (Ghidra: FUN_0005c053)
 * Prototype: ulonglong sub_05c053(void);
 * Address  : 0x5c053 (Size: 656 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 8 -> 0xc65f0, 0xc6758, 0xc688c, 0xc68b4, 0xc69e8, 0xdc150, 0xe7714, 0xe8ca8
 * Strings  :
 *   - 0x166015: "%s %s"
 ******************************************************************************/
ulonglong FUN_0005c053(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined8 uVar6;
  
  iVar5 = 0;
  if ((&DAT_001ae9fc)[*(ushort *)(&DAT_0019d0fd + DAT_002f10ce._3_1_ * 0x4ef)] != 0) {
    uVar6 = FUN_000c688c();
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      iVar5 = extraout_ECX;
    }
  }
  if (iVar5 == 0) {
    iVar5 = FUN_000c68b4();
    if (iVar5 != 0) goto LAB_0005c09f;
    iVar5 = FUN_000c65f0();
    if (iVar5 != 0) {
      if (iVar5 != DAT_0034bac9) {
        DAT_0034bad4 = 0;
        DAT_0034bac9 = iVar5;
      }
      uVar2 = *(ushort *)
               (&DAT_0018e980 + (uint)(byte)(&DAT_0019103e)[*(byte *)(iVar5 + 0x1a)] * 0x1b);
      goto LAB_0005c0c9;
    }
    iVar5 = FUN_000c6758();
    if (iVar5 == 0) {
      iVar5 = 0;
      if (DAT_002ee920 == '\0') {
LAB_0005c2dd:
        return CONCAT44(in_EDX,iVar5) & 0xffffffffffffff00;
      }
      iVar4 = FUN_000c69e8();
      iVar5 = 0;
      if (iVar4 == 0) goto LAB_0005c2dd;
      if (*(byte *)(iVar4 + 0x1a) == 0x31) {
        FUN_000e7714(&DAT_0019cbac,DAT_00333a1f);
        iVar5 = extraout_EDX;
      }
      else {
        iVar5 = (uint)*(byte *)(iVar4 + 0x1a) * 0x16;
        if ((&DAT_0018b919)[iVar5] == '\0') goto LAB_0005c2dd;
        FUN_000e7714(&DAT_0019cbac,s__s__s_00166015,
                     (&DAT_0033319b)
                     [*(ushort *)(&DAT_00188bf7 + (uint)(byte)(&DAT_0018b919)[iVar5] * 5)],
                     DAT_00333b1f);
        iVar5 = extraout_EDX_00;
      }
      if (iVar5 != DAT_0034bac9) {
        DAT_0034bad4 = 0;
        DAT_0034bac9 = iVar5;
      }
      if ((DAT_0034bad4 < 0x15) &&
         (uVar3 = (uint)(byte)(&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef], uVar3 != 0xc)) {
        DAT_0034bad4 = DAT_0034bad4 + 1;
      }
      else {
        DAT_0034b2c4 = 1;
        FUN_000e8ca8();
        DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
        iVar5 = FUN_000dc150();
        uVar3 = iVar5 + 0x56;
        DAT_0034bacd = 5;
        DAT_0034bad0 = (undefined2)uVar3;
      }
      goto LAB_0005c10f;
    }
    if (iVar5 != DAT_0034bac9) {
      DAT_0034bad4 = 0;
      DAT_0034bac9 = iVar5;
    }
    bVar1 = *(byte *)(iVar5 + 0x1a);
    DAT_0034b2c4 = 1;
    if ((&DAT_001911f3)[bVar1] == '\b') {
      uVar3 = (uint)*(ushort *)(&DAT_0018ed3d + (uint)(byte)(&DAT_0019116c)[bVar1] * 0x10);
    }
    else {
      uVar3 = (uint)*(short *)(&DAT_0018ede1 + (uint)(byte)(&DAT_0019116c)[bVar1] * 2);
    }
    FUN_000e7714(&DAT_0034b2c5,(&DAT_0033319b)[uVar3]);
  }
  else {
LAB_0005c09f:
    if (iVar5 != DAT_0034bac9) {
      DAT_0034bad4 = 0;
      DAT_0034bac9 = iVar5;
    }
    uVar2 = *(ushort *)(&DAT_0018425f + (uint)(byte)(&DAT_001910c5)[*(byte *)(iVar5 + 0x1a)] * 2);
LAB_0005c0c9:
    FUN_000e7714(&DAT_0034b2c5,(&DAT_0033319b)[uVar2]);
    DAT_0034b2c4 = 1;
  }
  DAT_0034bace = (short)DAT_003d9864 * DAT_0019cba6;
  iVar5 = FUN_000dc150();
  uVar3 = iVar5 + 0x56;
  DAT_0034bacd = 5;
  DAT_0034bad0 = (undefined2)uVar3;
LAB_0005c10f:
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),1));
}

/******************************************************************************
 * Function : sub_05c2e3 (Ghidra: FUN_0005c2e3)
 * Prototype: void sub_05c2e3(void);
 * Address  : 0x5c2e3 (Size: 148 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4991c, 0x809d0, 0x80a94, 0x80c84
 * Callees  : 2 -> 0x52b58, 0x5c848
 ******************************************************************************/
void FUN_0005c2e3(void)

{
  char cVar1;
  
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
  }
  cVar1 = FUN_00052b58();
  if (cVar1 != '\0') {
    FUN_0005c848();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_05c377 (Ghidra: FUN_0005c377)
 * Prototype: void sub_05c377(void);
 * Address  : 0x5c377 (Size: 41 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x53021, 0x5a600
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005c377(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : dk_undefined_event_type_05c408 (Ghidra: FUN_0005c408)
 * Prototype: void dk_undefined_event_type_05c408(void);
 * Address  : 0x5c408 (Size: 822 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:9093
 * Naming   : String 'Undefined event type: %d'
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x14083, 0x5c4f3, 0x5c544, 0x5c848, 0x5cf2d, 0xddaf0, 0xe7714, 0xe8ca8
 * Strings  :
 *   - 0x16609c: "newgui.cpp"
 *   - 0x16601b: "%s:\n %s"
 *   - 0x166023: "%s:\n %s"
 *   - 0x16602b: "%s:\n %s"
 *   - 0x166033: "%s:\n %s"
 *   - 0x16603b: "%s:\n %s"
 *   - 0x166043: "%s:\n %s"
 *   - 0x16604b: "%s:\n %d"
 *   - 0x166053: "%s:\n %s"
 *   - 0x16605b: "%s:\n %s"
 *   - 0x166063: "%s:\n %s"
 *   - 0x16606b: "%s:\n %s"
 *   - 0x166073: "%s:\n %s"
 *   - 0x166083: "Undefined event type: %d"
 ******************************************************************************/
void FUN_0005c408(void)

{
  byte *pbVar1;
  undefined1 uVar2;
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  int iVar3;
  int iVar4;
  
  iVar4 = in_EDX * 0x15;
  (&DAT_002e16fc)[in_EAX * 0x1508] = (char)in_EDX;
  if ((DAT_002f10ce._3_1_ == in_EAX) &&
     (*(short *)(&DAT_00191380 + (uint)(byte)(&DAT_002e7087)[iVar4] * 0x10) != 0xc9)) {
    FUN_000e8ca8();
  }
  if ((&DAT_002e7087)[iVar4] == '\x02') {
    uVar2 = FUN_00014083();
    (&DAT_002e16fd)[in_EAX * 0x1508] = uVar2;
  }
  if (DAT_002f10ce._3_1_ != in_EAX) {
    return;
  }
  switch((&DAT_002e7087)[iVar4]) {
  case 1:
  case 4:
  case 0xb:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
    break;
  case 2:
    FUN_0005c848();
    goto LAB_0005c55b;
  case 3:
    FUN_000e8ca8();
    iVar3 = 0xd;
    iVar4 = in_EAX * 0x1508 + 0xd;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) goto code_r0x0005c4f3;
      pbVar1 = (byte *)(iVar4 + 0x2e192f);
      iVar4 = iVar4 + -1;
    } while ((&DAT_002e7087)[(uint)*pbVar1 * 0x15] != '\x03');
    FUN_0005cf2d();
    DAT_0034cf15 = 0;
code_r0x0005c4f3:
    FUN_00052c47();
    if (extraout_ECX != 0) {
      FUN_0005c848();
      FUN_0005c848();
      FUN_0005c848();
      FUN_0005c848();
    }
    return;
  case 5:
    FUN_000e7714(&DAT_002edf85,s__s___s_0016601b,&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)(&DAT_0018ebbd + *(int *)(&DAT_002e7088 + iVar4) * 0x17)]);
    break;
  case 6:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_00188bf7 +
                   (uint)*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)] + 0x1a) * 5)]);
    return;
  case 7:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)(&DAT_0018e980 + *(int *)(&DAT_002e7088 + iVar4) * 0x1b)]);
    return;
  case 8:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)(&DAT_0018ed3d + *(int *)(&DAT_002e7088 + iVar4) * 0x10)]);
    return;
  case 9:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)[*(short *)(&DAT_0018ede1 + *(int *)(&DAT_002e7088 + iVar4) * 2)]);
    return;
  case 10:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_00188bf7 +
                   (uint)*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)] + 0x1a) * 5)]);
    return;
  case 0xc:
    FUN_0005c544(&DAT_002edf85,*(undefined4 *)(&DAT_002e7088 + iVar4));
    return;
  case 0xe:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_0018e980 +
                   (uint)(byte)(&DAT_0019103e)
                               [*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)] + 0x1a)]
                   * 0x1b)]);
    return;
  case 0xf:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)(&DAT_0018ebbd + *(int *)(&DAT_002e7088 + iVar4) * 0x17)]);
    return;
  case 0x10:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_00188bf7 +
                   (uint)*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)] + 0x1a) * 5)]);
    return;
  case 0x15:
    if (*(int *)(&DAT_002e7088 + iVar4) < 0) {
      *(int *)(&DAT_002e7088 + iVar4) = -*(int *)(&DAT_002e7088 + iVar4);
    }
    FUN_000e8ca8();
    FUN_000e8ca8();
    break;
  case 0x18:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_0018ed3d +
                   (uint)(byte)(&DAT_0019116c)
                               [*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)] + 0x1a)]
                   * 0x10)]);
    return;
  case 0x19:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(short *)(&DAT_0018ede1 +
                            (uint)(byte)(&DAT_0019116c)
                                        [*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)]
                                                  + 0x1a)] * 2)]);
    return;
  case 0x1a:
    FUN_0005c544(&DAT_002edf85,
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_0018425f +
                   (uint)(byte)(&DAT_001910c5)
                               [*(byte *)((&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar4)] + 0x1a)]
                   * 2)]);
    return;
  default:
    FUN_000e7714(&DAT_0019cbac,s_Undefined_event_type___d_00166083,(&DAT_002e7087)[iVar4]);
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 9093, g_log_buf) */
    FUN_0005c4f3();
    return;
  }
LAB_0005c55b:
  FUN_0005cf2d();
  FUN_0005c4f3();
  return;
}

/******************************************************************************
 * Function : sub_05c4f3 (Ghidra: FUN_0005c4f3)
 * Prototype: void sub_05c4f3(void);
 * Address  : 0x5c4f3 (Size: 53 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5c408, 0x5c544
 * Callees  : 2 -> 0x52c47, 0x5c848
 ******************************************************************************/
void FUN_0005c4f3(void)

{
  int extraout_ECX;
  
  FUN_00052c47();
  if (extraout_ECX != 0) {
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005c848();
  }
  return;
}

/******************************************************************************
 * Function : sub_05c544 (Ghidra: FUN_0005c544)
 * Prototype: void sub_05c544(void);
 * Address  : 0x5c544 (Size: 30 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5c408, 0x5c74d
 * Callees  : 3 -> 0x5c4f3, 0x5cf2d, 0xe7714
 ******************************************************************************/
void FUN_0005c544(void)

{
  FUN_000e7714(&DAT_002edf85);
  FUN_0005cf2d();
  FUN_0005c4f3();
  return;
}

/******************************************************************************
 * Function : sub_05c74d (Ghidra: FUN_0005c74d)
 * Prototype: void sub_05c74d(void);
 * Address  : 0x5c74d (Size: 51 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5c544
 * Strings  :
 *   - 0x16607b: "%s:\n %s"
 ******************************************************************************/
void FUN_0005c74d(void)

{
  int unaff_EBX;
  
  FUN_0005c544(&DAT_002edf85,
               (&DAT_0033319b)
               [*(ushort *)
                 (&DAT_0018425f +
                 (uint)(byte)(&DAT_001910c5)
                             [*(byte *)((&DAT_001ae9fc)[*(int *)(unaff_EBX + 0xc)] + 0x1a)] * 2)]);
  return;
}

/******************************************************************************
 * Function : sub_05c7c4 (Ghidra: FUN_0005c7c4)
 * Prototype: void sub_05c7c4(void);
 * Address  : 0x5c7c4 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005c7c4(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05c7ea (Ghidra: FUN_0005c7ea)
 * Prototype: void sub_05c7ea(void);
 * Address  : 0x5c7ea (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005c7ea(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05c810 (Ghidra: FUN_0005c810)
 * Prototype: void sub_05c810(void);
 * Address  : 0x5c810 (Size: 31 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x49eff
 ******************************************************************************/
void FUN_0005c810(void)

{
  FUN_00049eff();
  return;
}

/******************************************************************************
 * Function : sub_05c82f (Ghidra: FUN_0005c82f)
 * Prototype: void sub_05c82f(void);
 * Address  : 0x5c82f (Size: 25 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x49160, 0x5f6c5
 * Callees  : 1 -> 0x5c848
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00052c3d) */

void FUN_0005c82f(void)

{
  char cVar1;
  undefined4 extraout_EDX;
  
  FUN_0005c848();
  FUN_0005c848();
  cVar1 = FUN_00053c6b(extraout_EDX);
  if (cVar1 != -1) {
    if ((DAT_0034cf1f != 0) && (cVar1 == *(char *)(DAT_0034cf1f + 3))) {
      FUN_0005b3dd();
    }
    (&DAT_0034bad7)[cVar1 * 0x20] = 3;
    cVar1 = FUN_000588b6();
    if (cVar1 == -1) {
      FUN_00054089();
      FUN_00052be7();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05c848 (Ghidra: FUN_0005c848)
 * Prototype: void sub_05c848(void);
 * Address  : 0x5c848 (Size: 126 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 19 -> 0x2e8a7, 0x49426, 0x4b222, 0x4b5ca, 0x4b6ae, 0x5ab81, 0x5ae90, 0x5aee2, 0x5afda, 0x5bb49 ...
 * Callees  : 6 -> 0x2a355, 0x52be7, 0x53c6b, 0x54089, 0x588b6, 0x5b3dd
 ******************************************************************************/
void FUN_0005c848(void)

{
  byte in_AL;
  char cVar1;
  
  if ((0xc < in_AL) && (in_AL < 0xf)) {
    FUN_0002a355();
  }
  cVar1 = FUN_00053c6b();
  if (cVar1 != -1) {
    if ((DAT_0034cf1f != 0) && (cVar1 == *(char *)(DAT_0034cf1f + 3))) {
      FUN_0005b3dd();
    }
    (&DAT_0034bad7)[cVar1 * 0x20] = 3;
    cVar1 = FUN_000588b6();
    if (cVar1 == -1) {
      FUN_00054089();
      FUN_00052be7();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05c8bc (Ghidra: FUN_0005c8bc)
 * Prototype: void sub_05c8bc(void);
 * Address  : 0x5c8bc (Size: 62 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_0005c8bc(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 8) != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05c8fa (Ghidra: FUN_0005c8fa)
 * Prototype: void sub_05c8fa(undefined4 param_1,int param_2);
 * Address  : 0x5c8fa (Size: 139 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x537af, 0x55701, 0x56699, 0x5674c, 0x5686f, 0x574b5
 * Callees  : 1 -> 0xf0870
 ******************************************************************************/
void FUN_0005c8fa(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_000f0870(DAT_001992a0);
  }
  return;
}

/******************************************************************************
 * Function : sub_05c985 (Ghidra: FUN_0005c985)
 * Prototype: void sub_05c985(void);
 * Address  : 0x5c985 (Size: 74 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x53021
 * Callees  : 2 -> 0x52b58, 0x5cf2d
 ******************************************************************************/
void FUN_0005c985(void)

{
  char cVar1;
  uint in_EAX;
  
  if ((&DAT_002e7087)[(in_EAX & 0xff) * 0x15] == '\x02') {
    cVar1 = FUN_00052b58();
    if (cVar1 == '\0') {
      FUN_0005cf2d();
      return;
    }
  }
  else {
    cVar1 = FUN_00052b58();
    if (cVar1 == '\0') {
      FUN_0005cf2d();
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05c9cf (Ghidra: FUN_0005c9cf)
 * Prototype: void sub_05c9cf(int param_1);
 * Address  : 0x5c9cf (Size: 236 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5cabb
 * Callees  : 1 -> 0xf0870
 ******************************************************************************/
void FUN_0005c9cf(int param_1)

{
  int unaff_EBX;
  
  FUN_000f0870(DAT_001992a0,unaff_EBX / (int)(uint)DAT_0019cba6);
  FUN_000f0870((&DAT_00191774)[*(char *)(param_1 + 6)]);
  return;
}

/******************************************************************************
 * Function : sub_05cabb (Ghidra: FUN_0005cabb)
 * Prototype: void sub_05cabb(void);
 * Address  : 0x5cabb (Size: 399 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x571cf, 0x57348
 * Callees  : 3 -> 0x5c9cf, 0xf3300, 0x13a710
 ******************************************************************************/
void FUN_0005cabb(void)

{
  int in_EAX;
  int unaff_EBX;
  
  if ((in_EAX != DAT_001ae9fc) && (in_EAX != 0)) {
    if ((*(short *)(in_EAX + 0x17) == 0) || (((byte)DAT_002e8bee & 1) == 0)) {
      FUN_0013a710();
    }
    else {
      FUN_000f3300((&DAT_0019177a)[*(char *)(in_EAX + 6)],
                   (int)(unaff_EBX -
                        ((uint)*(byte *)(*(short *)(&DAT_00187b9c +
                                                   (uint)*(byte *)(in_EAX + 0x1a) * 0x2c) * 6 +
                                         DAT_00199230 + 5) * (uint)DAT_0019cba6) / 2) /
                   (int)(uint)DAT_0019cba6);
    }
    FUN_0005c9cf();
    FUN_0013a710();
  }
  return;
}

/******************************************************************************
 * Function : sub_05cc4a (Ghidra: FUN_0005cc4a)
 * Prototype: void sub_05cc4a(void);
 * Address  : 0x5cc4a (Size: 12 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2c502, 0xdd624, 0xdd6c8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005cc4a(void)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  
  DAT_002ee79f = in_EAX;
  DAT_002ee7a3 = in_EDX;
  return;
}

/******************************************************************************
 * Function : sub_05cc56 (Ghidra: FUN_0005cc56)
 * Prototype: void sub_05cc56(void);
 * Address  : 0x5cc56 (Size: 159 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5449e
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005cc56(void)

{
  int in_EAX;
  
  if ((*(short *)(in_EAX + 4) != 0) && (*(short *)(in_EAX + 4) == DAT_002ee79f)) {
    FUN_0013a710(DAT_001991c0 + ((DAT_002e8bee >> 1 & 7) + 0xb0) * 6);
  }
  return;
}

/******************************************************************************
 * Function : dk_cycle_button_have_gui_05ccf5 (Ghidra: FUN_0005ccf5)
 * Prototype: void dk_cycle_button_have_gui_05ccf5(void);
 * Address  : 0x5ccf5 (Size: 96 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:10013 ("Cycle button cannot have a 'gui_area_normal_button' draw function!")
 * Naming   : String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1660ea: "newgui.cpp"
 *   - 0x1660a7: "Cycle button cannot have a 'gui_area_normal_button' draw function!"
 ******************************************************************************/
void FUN_0005ccf5(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 6) == '\x02') {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 10013, "Cycle button cannot have a 'gui_area_normal_button' draw function!") */
  }
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_05cd55 (Ghidra: FUN_0005cd55)
 * Prototype: void sub_05cd55(void);
 * Address  : 0x5cd55 (Size: 82 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x543dd, 0x5d280, 0x5d32c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005cd55(void)

{
  int in_EAX;
  
  if ((((in_EAX == 7) || (in_EAX == 0x1f)) || (in_EAX == 0x23)) || (in_EAX == 0x20)) {
    DAT_0034cf16 = 1;
  }
  else {
    DAT_0034cf16 = 0;
  }
  DAT_0017d17b._2_1_ = in_EAX == 2;
  DAT_0034cf17 = in_EAX == 3;
  DAT_0034cf18 = in_EAX == 4;
  DAT_0034cf19 = in_EAX == 5;
  return;
}

/******************************************************************************
 * Function : sub_05cda7 (Ghidra: FUN_0005cda7)
 * Prototype: void sub_05cda7(void);
 * Address  : 0x5cda7 (Size: 150 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x47bcd
 * Callees  : 2 -> 0x58718, 0x587a6
 ******************************************************************************/
void FUN_0005cda7(void)

{
  int in_EAX;
  byte *pbVar1;
  byte *pbVar2;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  pbVar1 = &DAT_0034bbd6;
  do {
    pbVar2 = pbVar1;
    if ((((*pbVar1 & 1) != 0) && ((&DAT_0034baf3)[(char)pbVar1[3] * 0x20] != '\0')) &&
       (*(short *)(pbVar1 + 4) == in_EAX)) {
      if (((*(int *)(pbVar1 + 7) != 0) || ((*pbVar1 & 2) != 0)) ||
         ((*(int *)(pbVar1 + 0x2f) != 0 || (pbVar1[6] == 3)))) {
        FUN_000587a6();
        pbVar2 = extraout_ECX;
      }
      if (((*(int *)(pbVar1 + 7) != 0) || ((*pbVar1 & 2) != 0)) ||
         ((*(int *)(pbVar1 + 0x2f) != 0 || (pbVar1[6] == 3)))) {
        FUN_00058718();
        pbVar2 = extraout_ECX_00;
      }
    }
    pbVar1 = pbVar2 + 0x39;
  } while (pbVar1 != &DAT_0034cefc);
  return;
}

/******************************************************************************
 * Function : sub_05ce3d (Ghidra: FUN_0005ce3d)
 * Prototype: void sub_05ce3d(void);
 * Address  : 0x5ce3d (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ce3d(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : dk_create_floating_spirit_05ce63 (Ghidra: FUN_0005ce63)
 * Prototype: void dk_create_floating_spirit_05ce63(void);
 * Address  : 0x5ce63 (Size: 103 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:10108 ("Unable to create floating spirit")
 * Naming   : String 'Unable to create floating spirit'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x780a3, 0x80c84, 0xddaf0
 * Strings  :
 *   - 0x166116: "newgui.cpp"
 *   - 0x1660f5: "Unable to create floating spirit"
 ******************************************************************************/
void FUN_0005ce63(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000780a3();
  *(int *)(&DAT_0019d57e + (int)((ulonglong)uVar2 >> 0x20)) = (int)uVar2;
  iVar1 = FUN_00080c84();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 10108, "Unable to create floating spirit") */
    return;
  }
  *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 1) | 2;
  return;
}

/******************************************************************************
 * Function : sub_05ceca (Ghidra: FUN_0005ceca)
 * Prototype: void sub_05ceca(void);
 * Address  : 0x5ceca (Size: 21 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ceca(void)

{
  DAT_0034b2bc = 0;
  DAT_0034b2c0 = 0x19;
  return;
}

/******************************************************************************
 * Function : sub_05cee9 (Ghidra: FUN_0005cee9)
 * Prototype: void sub_05cee9(void);
 * Address  : 0x5cee9 (Size: 26 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x58718, 0x587ff
 * Callees  : 1 -> 0x6e9ab
 ******************************************************************************/
void FUN_0005cee9(void)

{
  int in_EAX;
  
  if ((*(ushort *)(in_EAX + 4) != 0) && (*(ushort *)(in_EAX + 4) < 6)) {
    FUN_0006e9ab();
    return;
  }
  FUN_0006e9ab();
  return;
}

/******************************************************************************
 * Function : sub_05cef9 (Ghidra: FUN_0005cef9)
 * Prototype: void sub_05cef9(void);
 * Address  : 0x5cef9 (Size: 10 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x587ff
 * Callees  : 1 -> 0x6e9ab
 ******************************************************************************/
void FUN_0005cef9(void)

{
  FUN_0006e9ab();
  return;
}

/******************************************************************************
 * Function : sub_05cf03 (Ghidra: FUN_0005cf03)
 * Prototype: void sub_05cf03(void);
 * Address  : 0x5cf03 (Size: 110 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4b5ca, 0x4b6ae, 0x5f6c5, 0x85f80
 * Callees  : 2 -> 0x53c6b, 0x5cf2d
 ******************************************************************************/
void FUN_0005cf03(void)

{
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  int extraout_EDX_01;
  
  cVar1 = FUN_00053c6b();
  uVar2 = extraout_EDX;
  if (cVar1 == -1) {
    FUN_0005cf2d();
    uVar2 = extraout_EDX_00;
  }
  if (DAT_0034cf16 != '\0') {
    cVar1 = FUN_00053ccc(uVar2);
    if ((cVar1 != '\0') && (*(char *)(*(int *)(&DAT_0017d186 + extraout_EDX_01) + 0x1f) != '\0')) {
      DAT_002ee8a2 = 7;
    }
    return;
  }
  if (DAT_0017d17b._2_1_ != '\0') {
    FUN_0005cf2d();
    return;
  }
  if (DAT_0034cf17 != '\0') {
    FUN_0005cf2d();
    return;
  }
  if (DAT_0034cf18 != '\0') {
    FUN_0005cf2d();
    return;
  }
  if (DAT_0034cf19 != '\0') {
    FUN_0005cf2d();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_05cf2d (Ghidra: FUN_0005cf2d)
 * Prototype: void sub_05cf2d(void);
 * Address  : 0x5cf2d (Size: 46 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x2e8a7, 0x402e5, 0x49160, 0x49426, 0x4b478, 0x59ee7, 0x5abd1, 0x5b4e7, 0x5c408, 0x5c544 ...
 * Callees  : 1 -> 0x53ccc
 ******************************************************************************/
void FUN_0005cf2d(void)

{
  undefined1 in_AL;
  char cVar1;
  int extraout_EDX;
  
  cVar1 = FUN_00053ccc();
  if ((cVar1 != '\0') && (*(char *)(*(int *)(&DAT_0017d186 + extraout_EDX) + 0x1f) != '\0')) {
    DAT_002ee8a2 = in_AL;
  }
  return;
}

/******************************************************************************
 * Function : sub_05cf9f (Ghidra: FUN_0005cf9f)
 * Prototype: void sub_05cf9f(void);
 * Address  : 0x5cf9f (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x57739, 0x57bba, 0x57cac, 0xe7714
 ******************************************************************************/
void FUN_0005cf9f(void)

{
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  
  *(undefined2 *)(in_EAX + 0x27) = 0x20;
  if ((*(char *)(in_EAX + 1) == '\0') && (*(char *)(in_EAX + 2) == '\0')) {
    FUN_00057bba();
    iVar1 = extraout_ECX_00;
  }
  else {
    FUN_00057bba();
    FUN_00057cac();
    iVar1 = extraout_ECX;
  }
  if (*(int *)(iVar1 + 0x33) != 0) {
    FUN_000e7714(&DAT_0019cbac,&DAT_00166121,*(undefined4 *)(iVar1 + 0x33));
    FUN_00057739();
  }
  return;
}

/******************************************************************************
 * Function : sub_05d01f (Ghidra: FUN_0005d01f)
 * Prototype: void sub_05d01f(void);
 * Address  : 0x5d01f (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005d01f(void)

{
  byte bVar1;
  byte *in_EAX;
  
  bVar1 = (&DAT_002e6ff4)[*(short *)(in_EAX + 0x1b) * 0x11];
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (bVar1 & 1) << 3;
  return;
}

/******************************************************************************
 * Function : sub_05d032 (Ghidra: FUN_0005d032)
 * Prototype: void sub_05d032(void);
 * Address  : 0x5d032 (Size: 300 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x57fe4
 * Callees  : 2 -> 0x14188, 0x5d19c
 ******************************************************************************/
void FUN_0005d032(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  uint uVar4;
  byte bVar6;
  uint uVar5;
  int iVar7;
  
  uVar4 = (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
  while( true ) {
    bVar6 = (byte)(uVar4 >> 8);
    if (2 < bVar6) break;
    iVar2 = (uint)bVar6 + (uVar4 & 0xff) * 0x1508;
    if (*(int *)(&DAT_002ed450 + (uint)(byte)(&DAT_002e16fd)[iVar2] * 0x11) == 0) {
      (&DAT_002e16fd)[iVar2] = 0;
    }
    uVar4 = (uint)CONCAT11(bVar6 + 1,(char)uVar4);
  }
  uVar5 = 0;
  do {
    if (1 < uVar5) {
      uVar4 = uVar4 & 0xff;
      while( true ) {
        uVar3 = (undefined2)uVar4;
        if (2 < uVar4 >> 8) break;
        iVar2 = (uVar4 >> 8) + (uVar4 & 0xff) * 0x1508;
        if (((&DAT_002e16fd)[iVar2] == '\0') &&
           (cVar1 = FUN_00014188(), uVar3 = extraout_CX, cVar1 != '\0')) {
          (&DAT_002e16fd)[iVar2] = cVar1;
        }
        uVar4 = (uint)CONCAT11((char)((ushort)uVar3 >> 8) + '\x01',(char)uVar3);
      }
      uVar4 = uVar4 & 0xff;
      while( true ) {
        uVar3 = (undefined2)uVar4;
        if (2 < uVar4 >> 8) break;
        if ((&DAT_002e16fd)[(uVar4 & 0xff) * 0x1508 + (uVar4 >> 8)] != '\0') {
          FUN_0005d19c();
          uVar3 = extraout_CX_00;
        }
        uVar4 = (uint)CONCAT11((char)((ushort)uVar3 >> 8) + '\x01',(char)uVar3);
      }
      return;
    }
    if ((&DAT_002e16fd)[uVar5 + (uVar4 & 0xff) * 0x1508] == '\0') {
      uVar5 = (uint)CONCAT11((char)uVar5,(char)uVar5);
      do {
        bVar6 = (char)(uVar5 >> 8) + 1;
        uVar5 = (uint)CONCAT11(bVar6,(char)uVar5);
        if (2 < bVar6) goto LAB_0005d08b;
        iVar7 = (uVar4 & 0xff) * 0x1508;
        iVar2 = (uint)bVar6 + iVar7;
      } while ((&DAT_002e16fd)[iVar2] == '\0');
      (&DAT_002e16fd)[iVar7 + (uVar5 & 0xff)] = (&DAT_002e16fd)[iVar2];
      (&DAT_002e16fd)[iVar2] = 0;
    }
LAB_0005d08b:
    uVar5 = (uint)(byte)((char)uVar5 + 1);
  } while( true );
}

/******************************************************************************
 * Function : sub_05d15e (Ghidra: FUN_0005d15e)
 * Prototype: bool sub_05d15e(void);
 * Address  : 0x5d15e (Size: 22 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x49a9a, 0x5a6a6
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_0005d15e(void)

{
  uint in_EAX;
  
  return (&DAT_002e16fd)[(in_EAX & 0xff) * 0x1508] != '\0';
}

/******************************************************************************
 * Function : sub_05d174 (Ghidra: FUN_0005d174)
 * Prototype: undefined1 sub_05d174(void);
 * Address  : 0x5d174 (Size: 40 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_0005d174(void)

{
  byte in_AL;
  byte bVar1;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    (&DAT_002e16fd)[(uint)in_AL * 0x1508 + (uint)bVar1] = 0;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_dead_thing_friend_enemy_05d19c (Ghidra: FUN_0005d19c)
 * Prototype: void dk_dead_thing_friend_enemy_05d19c(void);
 * Address  : 0x5d19c (Size: 228 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp:10378 ("Dead thing in friend/enemy battle-list")
 * Naming   : String 'Dead thing in friend/enemy battle-list'
 * Callers  : 1 -> 0x5d032
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16614b: "newgui.cpp"
 *   - 0x166124: "Dead thing in friend/enemy battle-list"
 ******************************************************************************/
void FUN_0005d19c(void)

{
  ushort uVar1;
  byte in_AL;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint extraout_ECX;
  uint uVar5;
  undefined2 *in_EDX;
  undefined2 *unaff_EBX;
  int local_20;
  byte local_1c;
  byte local_14;
  
  local_1c = 0;
  local_14 = 0;
  puVar2 = unaff_EBX;
  puVar4 = in_EDX;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar4 != in_EDX + 7);
  uVar1 = *(ushort *)(&DAT_002ed45d + (uint)in_AL * 0x11);
  for (local_20 = 0; (uVar5 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar5 && (local_20 < 1000));
      local_20 = local_20 + 1) {
    if (*(char *)(uVar5 + 0x1f) == '\x05') {
      if ((int)*(char *)(uVar5 + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        uVar3 = (uint)local_1c;
        if (uVar3 < 7) {
          local_1c = local_1c + 1;
          in_EDX[uVar3] = *(undefined2 *)(uVar5 + 0x1b);
        }
      }
      else {
        uVar3 = (uint)local_14;
        if (uVar3 < 7) {
          local_14 = local_14 + 1;
          unaff_EBX[uVar3] = *(undefined2 *)(uVar5 + 0x1b);
        }
      }
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("newgui.cpp", line 10378, "Dead thing in friend/enemy battle-list") */
      uVar5 = extraout_ECX;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar5 + 100)] + 0x2f3);
  }
  return;
}

/******************************************************************************
 * Function : sub_05d280 (Ghidra: FUN_0005d280)
 * Prototype: void sub_05d280(void);
 * Address  : 0x5d280 (Size: 172 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2ca74
 * Callees  : 5 -> 0x53c6b, 0x5b9c0, 0x5cd55, 0x5cf2d, 0x5d34c
 ******************************************************************************/
void FUN_0005d280(void)

{
  char cVar1;
  int iVar2;
  
  if ((((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02') ||
      ((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x03')) ||
     (FUN_0005cf2d(), DAT_002ee8a2 == '\0')) {
    FUN_0005cf2d();
  }
  else {
    FUN_0005cd55();
    FUN_0005cf2d();
    iVar2 = FUN_00053c6b();
    if (iVar2 != -1) {
      FUN_0005d34c();
    }
  }
  cVar1 = (&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef];
  if (((cVar1 != '\x04') && (cVar1 != '\x05')) && (cVar1 != '\x06')) {
    FUN_0005b9c0();
    return;
  }
  FUN_0005b9c0();
  return;
}

