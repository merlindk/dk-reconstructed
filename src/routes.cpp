/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: routes.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 22
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0d13f0 (Ghidra: FUN_000d13f0)
 * Prototype: undefined4 sub_0d13f0(void);
 * Address  : 0xd13f0 (Size: 6 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000d13f0(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_0d1420 (Ghidra: FUN_000d1420)
 * Prototype: void sub_0d1420(void);
 * Address  : 0xd1420 (Size: 35 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe6584
 * Callees  : 1 -> 0xc206c
 ******************************************************************************/
void FUN_000d1420(void)

{
  FUN_000c206c();
  return;
}

/******************************************************************************
 * Function : sub_0d1444 (Ghidra: FUN_000d1444)
 * Prototype: void sub_0d1444(void);
 * Address  : 0xd1444 (Size: 258 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb3c00
 * Callees  : 4 -> 0x7dbc0, 0xb28e8, 0xb516c, 0xc2bc0
 ******************************************************************************/
void FUN_000d1444(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  char in_CL;
  ushort *in_EDX;
  undefined2 *unaff_EBX;
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  uint local_10;
  
  if (((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0') ||
     ((*(byte *)(in_EAX + 0x25) & 0x20) != 0)) {
    DAT_003d9528 = 1;
  }
  else {
    DAT_003d9528 = 0;
  }
  if (in_CL == '\0') {
    DAT_003d9524 = *(int *)(in_EAX + 3) >> 0x18;
    uVar1 = in_EDX[1];
    uVar2 = *in_EDX;
  }
  else {
    uVar1 = in_EDX[1];
    uVar2 = *(ushort *)(in_EAX + 0xd);
    DAT_003d9524 = -1;
  }
  local_10 = (uint)uVar2;
  FUN_000c2bc0(uVar1,local_18,local_14);
  *unaff_EBX = local_18[0];
  unaff_EBX[1] = local_14[0];
  uVar3 = FUN_000b28e8();
  unaff_EBX[2] = uVar3;
  iVar4 = FUN_0007dbc0();
  if (iVar4 != 0) {
    FUN_000b516c();
  }
  DAT_003d9528 = 0;
  return;
}

/******************************************************************************
 * Function : sub_0d1548 (Ghidra: FUN_000d1548)
 * Prototype: int sub_0d1548(void);
 * Address  : 0xd1548 (Size: 308 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1612a
 * Callees  : 2 -> 0xc241c, 0xdc354
 ******************************************************************************/
int FUN_000d1548(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  int in_EAX;
  int iVar4;
  int extraout_ECX;
  short *in_EDX;
  char unaff_BL;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 auStack_24 [2];
  int local_20;
  undefined4 local_14;
  
  bVar7 = 0;
  iVar6 = 0;
  local_14 = 0;
  if ((*(short *)(in_EAX + 0xd) == *in_EDX) && (*(short *)(in_EAX + 0xf) == in_EDX[1])) {
    local_20 = 0;
  }
  else {
    if (((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0') ||
       ((*(byte *)(in_EAX + 0x25) & 0x20) != 0)) {
      DAT_003d9528 = 1;
    }
    else {
      DAT_003d9528 = 0;
    }
    if (unaff_BL == '\0') {
      DAT_003d9524 = *(int *)(in_EAX + 3) >> 0x18;
      uVar3 = *(ushort *)(in_EAX + 0x56);
    }
    else {
      uVar3 = *(ushort *)(in_EAX + 0x56);
      DAT_003d9524 = -1;
    }
    local_28 = (uint)(byte)((&DAT_00190d3d)[uVar3] - 1);
    uStack_2c = 0xfffffffe;
    FUN_000c241c(in_EDX[1]);
    DAT_003d9528 = 0;
    if (DAT_003d8d20 == 0) {
      return 0x7fffffff;
    }
    uVar8 = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(&uStack_2c + (uint)bVar7 * -2) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
    if (0 < DAT_003d8d20) {
      iVar5 = 0;
      do {
        puVar1 = (undefined2 *)((int)&DAT_003d8d24 + iVar5);
        puVar2 = (undefined2 *)((int)&DAT_003d8d28 + iVar5);
        iVar5 = iVar5 + 8;
        local_28 = CONCAT22(*puVar2,*puVar1);
        iVar6 = iVar6 + 1;
        iVar4 = FUN_000dc354(uVar8);
        *(undefined2 *)(&uStack_2c + (uint)bVar7 * -2) = auStack_24[(uint)bVar7 * -4];
        local_20 = extraout_ECX + iVar4;
        uVar8 = local_28;
      } while (iVar6 < DAT_003d8d20);
    }
  }
  return local_20;
}

/******************************************************************************
 * Function : sub_0d167c (Ghidra: FUN_000d167c)
 * Prototype: undefined4 sub_0d167c(void);
 * Address  : 0xd167c (Size: 300 bytes)
 * Module   : routes.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x14a68, 0x23042, 0x230d3
 * Callees  : 2 -> 0xbfaec, 0xd1904
 ******************************************************************************/
undefined4 FUN_000d167c(void)

{
  int iVar1;
  undefined1 uVar2;
  int in_EAX;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  
  if (DAT_003d952c == 0) {
    iVar4 = 0;
    do {
      iVar3 = 0;
      do {
        uVar2 = FUN_000d1904();
        iVar3 = iVar3 + 1;
        (&DAT_00269202)[extraout_ECX] = uVar2;
      } while (iVar3 < 0xff);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xff);
    DAT_003d952c = 1;
  }
  local_1c = in_EAX;
  if (unaff_EBX < in_EAX) {
    local_1c = unaff_EBX;
  }
  local_18 = in_EDX;
  if (in_ECX < in_EDX) {
    local_18 = in_ECX;
  }
  local_1c = local_1c + -1;
  if (local_1c < 3) {
    local_1c = 2;
  }
  local_18 = local_18 + -1;
  if (local_18 < 3) {
    local_18 = 2;
  }
  iVar4 = unaff_EBX + 1;
  if (0xfb < iVar4) {
    iVar4 = 0xfc;
  }
  iVar3 = in_ECX + 1;
  if (0xfb < iVar3) {
    iVar3 = 0xfc;
  }
  for (; iVar1 = local_1c, local_18 <= iVar3; local_18 = local_18 + 1) {
    for (; iVar1 <= iVar4; iVar1 = iVar1 + 1) {
      uVar2 = FUN_000d1904();
      (&DAT_00269203)[extraout_ECX_00] = uVar2;
    }
  }
  FUN_000bfaec(iVar3);
  return 1;
}

/******************************************************************************
 * Function : sub_0d17a8 (Ghidra: FUN_000d17a8)
 * Prototype: undefined8 sub_0d17a8(void);
 * Address  : 0xd17a8 (Size: 122 bytes)
 * Module   : routes.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2ca74, 0x404f7
 * Callees  : 3 -> 0xc01fc, 0xd1904, 0xe6a10
 ******************************************************************************/
undefined8 FUN_000d17a8(void)

{
  undefined1 uVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  int iVar2;
  int iVar3;
  
  FUN_000e6a10();
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      uVar1 = FUN_000d1904();
      iVar2 = iVar2 + 1;
      (&DAT_00269202)[extraout_ECX] = uVar1;
    } while (iVar2 < 0xff);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xff);
  DAT_003d952c = 1;
  FUN_000c01fc();
  PTR_FUN_000b5550_0019212c = FUN_000d1a48;
  DAT_002ebaf7 = 1;
  return CONCAT44(in_EDX,extraout_EDX);
}

/******************************************************************************
 * Function : sub_0d18d0 (Ghidra: FUN_000d18d0)
 * Prototype: void sub_0d18d0(undefined1 param_1);
 * Address  : 0xd18d0 (Size: 52 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb4ae4
 * Callees  : 1 -> 0x12002
 ******************************************************************************/
void FUN_000d18d0(undefined1 param_1)

{
  int in_EAX;
  
  if (DAT_002ebaf7 != '\0') {
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23a) = 1;
  }
  FUN_00012002(param_1);
  return;
}

/******************************************************************************
 * Function : dk_navigation_door_has_player_0d1904 (Ghidra: FUN_000d1904)
 * Prototype: byte dk_navigation_door_has_player_0d1904(void);
 * Address  : 0xd1904 (Size: 321 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp:884 ("Navigation cannot find door for flagged position")
 * Naming   : String 'Navigation door has player of larger than 6'
 * Callers  : 2 -> 0xd167c, 0xd17a8
 * Callees  : 3 -> 0x22b3a, 0xb2398, 0xddaf0
 * Strings  :
 *   - 0x16c4fc: "routes.cpp"
 *   - 0x16c538: "routes.cpp"
 *   - 0x16c4d0: "Navigation door has player of larger than 6"
 *   - 0x16c507: "Navigation cannot find door for flagged position"
 ******************************************************************************/
byte FUN_000d1904(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int in_EDX;
  byte local_c;
  
  iVar2 = (in_EAX + in_EDX * 0x100) * 5;
  if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x40) == 0) {
    if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) != 0) {
      return 0xf;
    }
    local_c = *(byte *)((int)&DAT_0019e973 +
                       (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18 + 2) >> 4;
    if (0xf < local_c) {
      local_c = 0xf;
    }
    uVar3 = FUN_000b2398();
    if ((uVar3 & 0xfffffffe) != 0x28) {
      iVar2 = FUN_000b2398();
      if ((iVar2 < 0x126) || (0x12e < iVar2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return local_c;
      }
    }
    return local_c | 0x10;
  }
  iVar2 = FUN_00022b3a();
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x18) == '\0') {
      return 1;
    }
    uVar3 = *(int *)(iVar2 + 3) >> 0x18;
    if (uVar3 == DAT_002eb542) {
      uVar3 = 5;
    }
    else if (uVar3 == DAT_002eb543) {
      uVar3 = 6;
    }
    if ((int)uVar3 < 7) {
      return ((char)uVar3 + '\x01') * ' ' | 1;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 884, "Navigation cannot find door for flagged position") */
  return 1;
}

/******************************************************************************
 * Function : sub_0d1a48 (Ghidra: FUN_000d1a48)
 * Prototype: uint sub_0d1a48(void);
 * Address  : 0xd1a48 (Size: 123 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000d1a48(void)

{
  uint in_EAX;
  uint uVar1;
  uint in_EDX;
  
  if (1 < (int)((in_EDX & 0xf) - (in_EAX & 0xf))) {
    return 0;
  }
  if ((in_EDX & 0xf0) != 0) {
    if (DAT_003d9524 != 0xffffffff) {
      uVar1 = ((int)in_EDX >> 5 & 7U) - 1;
      if (uVar1 == 5) {
        uVar1 = (uint)DAT_002eb542;
      }
      else if (uVar1 == 6) {
        uVar1 = (uint)DAT_002eb543;
      }
      if (uVar1 == DAT_003d9524) {
        return uVar1 ^ DAT_003d9524;
      }
    }
    if ((((in_EDX & 0x10) != 0) && ((in_EAX & 0x10) == 0)) && (DAT_003d9528 == 0)) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0d1ac4 (Ghidra: FUN_000d1ac4)
 * Prototype: void sub_0d1ac4(void);
 * Address  : 0xd1ac4 (Size: 28 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb4c30
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000d1ac4(void)

{
  undefined1 *in_EAX;
  undefined4 *unaff_EBX;
  
  *in_EAX = 1;
  *(undefined4 *)(in_EAX + 0x21) = *unaff_EBX;
  *(undefined2 *)(in_EAX + 0x25) = *(undefined2 *)(unaff_EBX + 1);
  in_EAX[3] = 0;
  in_EAX[2] = 0;
  in_EAX[4] = 0;
  return;
}

/******************************************************************************
 * Function : dk_ve_been_pushing_very_0d1ae0 (Ghidra: FUN_000d1ae0)
 * Prototype: undefined4 dk_ve_been_pushing_very_0d1ae0(void);
 * Address  : 0xd1ae0 (Size: 2463 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp:1130 ("I've been pushing for a very long time now..."); routes.cpp:1219 ("A legal collision with a solid object? Come on..."); routes.cpp:1224 ("And it has something to do with doors"); routes.cpp:1224 ("And it has something to do with doors"); routes.cpp:1231 ("I've been given a shite position")
 * Naming   : String 'I've been pushing for a very long time now...'
 * Callers  : 0 -> 
 * Callees  : 12 -> 0x10c1a, 0x7e868, 0xb28e8, 0xd2480, 0xd2510, 0xd29ac, 0xd3f64, 0xd402c, 0xd5624, 0xdc440 ...
 * Strings  :
 *   - 0x16c571: "routes.cpp"
 *   - 0x16c5ae: "routes.cpp"
 *   - 0x16c5df: "routes.cpp"
 *   - 0x16c60b: "routes.cpp"
 *   - 0x16c63f: "routes.cpp"
 *   - 0x16c543: "I've been pushing for a very long time now..."
 *   - 0x16c57c: "A legal collision with a solid object? Come on..."
 *   - 0x16c5b9: "And it has something to do with doors"
 *   - 0x16c5ea: "I've been given a shite position"
 *   - 0x16c616: "It's even more shit than I first thought"
 ******************************************************************************/
undefined4 FUN_000d1ae0(void)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  short sVar7;
  int in_EAX;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 *in_EDX;
  ushort uVar12;
  byte bVar13;
  int *piVar14;
  int *piVar15;
  byte bVar16;
  short asStack_850 [1018];
  int local_5c [2];
  undefined1 local_54 [16];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 *local_3c;
  undefined4 *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  ushort *local_24;
  uint local_20;
  
  bVar16 = 0;
  piVar15 = (int *)local_54;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  pcVar1 = (char *)(iVar3 + 0x1ea);
  local_2c = (uint)*(ushort *)(iVar3 + 0xc4);
  local_30 = 0x10;
  local_34 = in_EDX;
  if (*pcVar1 != '\x01') {
    if (*pcVar1 != '\x02') {
      return 1;
    }
    if ((*(short *)(iVar3 + 0x205) != *(short *)(in_EAX + 0xd)) ||
       (*(short *)(iVar3 + 0x207) != *(short *)(in_EAX + 0xf))) {
      local_5c[1] = 0xd1f75;
      iVar8 = FUN_000dc440();
      if (iVar8 <= *(int *)(iVar3 + 499)) {
        local_5c[1] = 0xd1f8b;
        iVar8 = FUN_0007e868();
        if (iVar8 == 0) {
          return 1;
        }
      }
      *pcVar1 = '\x01';
      *(undefined4 *)(iVar3 + 0x20b) = *local_34;
      *(undefined2 *)(iVar3 + 0x20f + (uint)bVar16 * -8) =
           *(undefined2 *)(local_34 + (uint)bVar16 * -2 + 1);
      *(undefined1 *)(iVar3 + 0x1ed) = 0;
      *(undefined1 *)(iVar3 + 0x1ec) = 0;
      *(undefined1 *)(iVar3 + 0x1ee) = 0;
      return 1;
    }
    local_5c[1] = 0xd1fc6;
    iVar8 = FUN_000dc440();
    if (iVar8 < *(int *)(iVar3 + 0x1ef)) {
      local_5c[1] = 0;
      piVar15 = local_5c;
      local_5c[0] = 1;
      iVar8 = FUN_000d402c();
      if (iVar8 != 0) {
        *pcVar1 = '\x01';
        *(undefined4 *)(iVar3 + 0x20b) = *local_3c;
        *(undefined2 *)(iVar3 + 0x20f + (uint)bVar16 * -8) =
             *(undefined2 *)(local_3c + (uint)bVar16 * -2 + 1);
        *(undefined1 *)(iVar3 + 0x1ed) = 0;
        *(undefined1 *)(iVar3 + 0x1ec) = 0;
        *(undefined1 *)(iVar3 + 0x1ee) = 0;
        return 1;
      }
    }
    if ((uint)*(ushort *)(*(int *)((int)piVar15 + 0x2c) + 0x52) != *(uint *)(iVar3 + 0x1f7)) {
      return 1;
    }
    *(short *)((int)piVar15 + -4) = 0x2033;
    *(short *)((int)piVar15 + -2) = 0xd;
    iVar10 = FUN_000d2510();
    iVar8 = *(int *)(iVar3 + 0x1f7);
    *(int *)((int)piVar15 + 0x30) = iVar10;
    if (iVar10 != iVar8) {
      *(short *)((int)piVar15 + 8) =
           (short)((uint)(*(int *)((int)piVar15 + 0x28) * (&DAT_001927e0)[iVar8]) >> 0x10) +
           *(short *)(*(int *)((int)piVar15 + 0x2c) + 0xd);
      *(short *)((int)piVar15 + 10) =
           (short)((uint)-(*(int *)((int)piVar15 + 0x28) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(iVar3 + 0x1f7)] >> 8) >> 8) +
           *(short *)(*(int *)((int)piVar15 + 0x2c) + 0xf);
      *(short *)((int)piVar15 + -4) = 0x209b;
      *(short *)((int)piVar15 + -2) = 0xd;
      sVar7 = FUN_000b28e8();
      *(short *)((int)piVar15 + 0xc) = sVar7;
      *(short *)((int)piVar15 + -4) = 0x20b1;
      *(short *)((int)piVar15 + -2) = 0xd;
      iVar8 = FUN_0007e868();
      if (iVar8 == 4) {
        iVar8 = *(int *)((int)piVar15 + 0x2c);
        *(short *)((int)piVar15 + -4) = 0x20cf;
        *(short *)((int)piVar15 + -2) = 0xd;
        uVar11 = FUN_000d3f64();
        uVar12 = *(ushort *)(iVar8 + 0x56);
        *(uint *)((int)piVar15 + 0x34) = uVar11;
        uVar12 = *(ushort *)(&DAT_0019073b + (uint)uVar12 * 2) / 2;
        *(undefined2 *)piVar15 = *(undefined2 *)(iVar8 + 0xd);
        *(short *)((int)piVar15 + 2) = *(short *)(iVar8 + 0xf);
        if ((uVar11 & 1) != 0) {
          uVar2 = *(ushort *)(iVar8 + 0xd);
          if ((ushort)*(undefined4 *)((int)piVar15 + 8) < uVar2) {
            *(ushort *)piVar15 = uVar2 - uVar12;
            *(undefined1 *)piVar15 = 1;
            *(ushort *)piVar15 = *(short *)piVar15 + uVar12;
          }
          else {
            *(ushort *)piVar15 = uVar2 + uVar12;
            *(undefined1 *)piVar15 = 0xff;
            *(ushort *)piVar15 = *(short *)piVar15 - uVar12;
          }
          *(short *)((int)piVar15 + -4) = 0x2147;
          *(short *)((int)piVar15 + -2) = 0xd;
          sVar7 = FUN_000b28e8();
          *(short *)((int)piVar15 + 4) = sVar7;
        }
        if ((*(byte *)((int)piVar15 + 0x34) & 2) != 0) {
          uVar2 = *(ushort *)(iVar8 + 0xf);
          if (*(ushort *)((int)piVar15 + 10) < uVar2) {
            *(ushort *)((int)piVar15 + 2) = uVar2 - uVar12;
            *(undefined1 *)((int)piVar15 + 2) = 1;
            *(short *)((int)piVar15 + 2) = *(short *)((int)piVar15 + 2) + uVar12;
          }
          else {
            *(ushort *)((int)piVar15 + 2) = uVar2 + uVar12;
            *(undefined1 *)((int)piVar15 + 2) = 0xff;
            *(short *)((int)piVar15 + 2) = *(short *)((int)piVar15 + 2) - uVar12;
          }
          *(short *)((int)piVar15 + -4) = 0x2193;
          *(short *)((int)piVar15 + -2) = 0xd;
          sVar7 = FUN_000b28e8();
          *(short *)((int)piVar15 + 4) = sVar7;
        }
        if ((*(byte *)((int)piVar15 + 0x34) & 4) != 0) {
          uVar2 = *(ushort *)(iVar8 + 0xd);
          if (*(ushort *)((int)piVar15 + 8) < uVar2) {
            *(ushort *)piVar15 = uVar2 - uVar12;
            *(undefined1 *)piVar15 = 1;
            *(ushort *)piVar15 = *(short *)piVar15 + uVar12;
          }
          else {
            *(ushort *)piVar15 = uVar2 + uVar12;
            *(undefined1 *)piVar15 = 0xff;
            *(ushort *)piVar15 = *(short *)piVar15 - uVar12;
          }
          uVar2 = *(ushort *)(iVar8 + 0xf);
          if (*(ushort *)((int)piVar15 + 10) < uVar2) {
            *(ushort *)((int)piVar15 + 2) = uVar2 - uVar12;
            *(undefined1 *)((int)piVar15 + 2) = 1;
            *(short *)((int)piVar15 + 2) = *(short *)((int)piVar15 + 2) + uVar12;
          }
          else {
            *(ushort *)((int)piVar15 + 2) = uVar2 + uVar12;
            *(undefined1 *)((int)piVar15 + 2) = 0xff;
            *(short *)((int)piVar15 + 2) = *(short *)((int)piVar15 + 2) - uVar12;
          }
          *(short *)((int)piVar15 + -4) = 0x2212;
          *(short *)((int)piVar15 + -2) = 0xd;
          sVar7 = FUN_000b28e8();
          *(short *)((int)piVar15 + 4) = sVar7;
        }
        *(int *)((int)piVar15 + 8) = *piVar15;
        *(short *)((int)piVar15 + ((uint)bVar16 * -4 + 6) * 2) =
             *(short *)((int)piVar15 + ((uint)bVar16 * -4 + 2) * 2);
        if (((short)*(undefined4 *)((int)piVar15 + 8) !=
             *(short *)(*(int *)((int)piVar15 + 0x2c) + 0xd)) ||
           ((short)*(undefined4 *)((int)piVar15 + 10) !=
            *(short *)(*(int *)((int)piVar15 + 0x2c) + 0xf))) {
          *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)((int)piVar15 + 8);
          *(short *)(iVar3 + 0x209 + (uint)bVar16 * -8) =
               *(short *)((int)piVar15 + ((uint)bVar16 * -4 + 6) * 2);
          *(short *)((int)piVar15 + -4) = 0x224d;
          *(short *)((int)piVar15 + -2) = 0xd;
          uVar9 = FUN_000dc440();
          *(undefined4 *)(iVar3 + 499) = uVar9;
          return 1;
        }
      }
    }
    *(short *)((int)piVar15 + -4) = 0x2269;
    *(short *)((int)piVar15 + -2) = 0xd;
    cVar5 = FUN_000d2480();
    if (cVar5 != '\0') {
      puVar4 = *(undefined4 **)((int)piVar15 + 0x20);
      *pcVar1 = '\x01';
      *(undefined4 *)(iVar3 + 0x20b) = *puVar4;
      *(undefined2 *)(iVar3 + 0x20f + (uint)bVar16 * -8) =
           *(undefined2 *)(puVar4 + (uint)bVar16 * -2 + 1);
      *(undefined1 *)(iVar3 + 0x1ed) = 0;
      *(undefined1 *)(iVar3 + 0x1ec) = 0;
      *(undefined1 *)(iVar3 + 0x1ee) = 0;
      return 1;
    }
    iVar8 = *(int *)((int)piVar15 + 0x30);
    *(int *)(iVar3 + 0x1f7) = iVar8;
    iVar10 = *(int *)((int)piVar15 + 0x2c);
    *(short *)(iVar3 + 0x205) =
         (short)((uint)(*(int *)((int)piVar15 + 0x28) * (&DAT_001927e0)[iVar8]) >> 0x10) +
         *(short *)(iVar10 + 0xd);
    *(short *)(iVar3 + 0x207) =
         (short)((uint)-(*(int *)((int)piVar15 + 0x28) *
                         (int)(&PTR_LAB_00192fe0)[*(int *)(iVar3 + 0x1f7)] >> 8) >> 8) +
         *(short *)(iVar10 + 0xf);
    uVar9 = *(undefined4 *)((int)piVar15 + 0x28);
    *(short *)((int)piVar15 + -4) = 0x22f6;
    *(short *)((int)piVar15 + -2) = 0xd;
    uVar6 = FUN_000b28e8();
    *(short *)((int)piVar15 + -4) = 0;
    *(short *)((int)piVar15 + -2) = 0;
    *(undefined4 *)((int)piVar15 + -8) = uVar9;
    *(short *)((int)piVar15 + -0xc) = 0x10;
    *(short *)((int)piVar15 + -10) = 0;
    *(undefined2 *)(iVar3 + 0x209) = uVar6;
    *(short *)((int)piVar15 + -0x10) = 0x2312;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    FUN_000d5624();
    *(short *)((int)piVar15 + -0x10) = 0x2326;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    uVar9 = FUN_000dc440();
    *(undefined4 *)(iVar3 + 499) = uVar9;
    *(short *)((int)piVar15 + -0x10) = 0x2334;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    iVar8 = FUN_0007e868();
    if (iVar8 == 1) {
      *(short *)((int)piVar15 + -0x10) = 0x234d;
      *(short *)((int)piVar15 + -0xe) = 0xd;
      FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 1130, "I've been pushing for a very long time now...") */
      if ((*(byte *)((int)&DAT_00279203 +
                    ((uint)*(byte *)(iVar3 + 0x206) + (uint)*(byte *)(iVar3 + 0x208) * 0x100) * 5) &
          0x40) != 0) {
        *(short *)((int)piVar15 + -0x10) = 0x2382;
        *(short *)((int)piVar15 + -0xe) = 0xd;
        FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 1219, "A legal collision with a solid object? Come on...") */
      }
      *(short *)((int)piVar15 + -0x10) = 0x2387;
      *(short *)((int)piVar15 + -0xe) = 0xd;
      FUN_000ddaf8(); /* LbErrorLog("routes.cpp", line 1224, "And it has something to do with doors") */
    }
    *(short *)((int)piVar15 + -0x10) = 0x2399;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    iVar8 = FUN_0007e868();
    if (iVar8 == 0) {
      return 1;
    }
    *(short *)((int)piVar15 + -0x10) = 0x23b5;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    FUN_000ddaf0(); /* LbWarnLog("routes.cpp", line 1224, "And it has something to do with doors") */
    *(short *)((int)piVar15 + -0x10) = 0x23ba;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    FUN_000ddaf8(); /* LbErrorLog("routes.cpp", line 1231, "I've been given a shite position") */
    iVar8 = *(int *)(iVar3 + 0x1f7);
    *(short *)((int)piVar15 + 4) =
         (short)((uint)(*(int *)((int)piVar15 + 0x1c) * (&DAT_001927e0)[iVar8]) >> 0x10) +
         *(short *)(*(int *)((int)piVar15 + 0x20) + 0xd);
    *(short *)((int)piVar15 + 6) =
         (short)((uint)-(*(int *)((int)piVar15 + 0x1c) * (int)(&PTR_LAB_00192fe0)[iVar8] >> 8) >> 8)
         + *(short *)(*(int *)((int)piVar15 + 0x20) + 0xf);
    *(short *)((int)piVar15 + -0x10) = 0x2413;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    sVar7 = FUN_000b28e8();
    *(short *)((int)piVar15 + 8) = sVar7;
    *(short *)((int)piVar15 + -0x10) = 0x2429;
    *(short *)((int)piVar15 + -0xe) = 0xd;
    iVar8 = FUN_0007e868();
    if (iVar8 == 4) {
      *(short *)((int)piVar15 + -0x10) = 0x244a;
      *(short *)((int)piVar15 + -0xe) = 0xd;
      FUN_000ddaf0(); /* LbWarnLog("routes.cpp", line 1231, "I've been given a shite position") */
    }
    puVar4 = *(undefined4 **)((int)piVar15 + 0x14);
    *pcVar1 = '\x01';
    *(undefined4 *)(iVar3 + 0x20b) = *puVar4;
    *(undefined2 *)(iVar3 + 0x20f + (uint)bVar16 * -8) =
         *(undefined2 *)(puVar4 + (uint)bVar16 * -2 + 1);
    *(undefined1 *)(iVar3 + 0x1ed) = 0;
    *(undefined1 *)(iVar3 + 0x1ec) = 0;
    *(undefined1 *)(iVar3 + 0x1ee) = 0;
    iVar8 = *(int *)((int)piVar15 + 0x20);
    *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)(iVar8 + 0xd);
    *(undefined2 *)(iVar3 + 0x209 + (uint)bVar16 * -8) =
         *(undefined2 *)(iVar8 + 0x11 + (uint)bVar16 * -8);
    return 1;
  }
  local_5c[1] = 0xd1b3f;
  local_28 = in_EAX;
  iVar8 = FUN_000dc440();
  if (*(int *)(iVar3 + 499) <= iVar8) {
    *(undefined1 *)(iVar3 + 0x1ee) = 0;
  }
  piVar14 = (int *)local_54;
  if (*(char *)(iVar3 + 0x1ee) != '\0') goto LAB_000d1e11;
  local_5c[1] = 0xd1b64;
  iVar8 = FUN_00010c1a();
  *(short *)(iVar3 + 0x205) =
       *(short *)(local_28 + 0xd) + (short)((&DAT_001927e0)[iVar8] * local_2c >> 0x10);
  *(short *)(iVar3 + 0x207) =
       (short)((uint)-((int)(local_2c * (int)(&PTR_LAB_00192fe0)[iVar8]) >> 8) >> 8) +
       *(short *)(local_28 + 0xf);
  local_5c[1] = 0xd1bb9;
  uVar6 = FUN_000b28e8();
  *(undefined2 *)(iVar3 + 0x209) = uVar6;
  *(undefined4 *)(iVar3 + 0x1f7) = extraout_ECX;
  local_5c[1] = 0xd1bcb;
  FUN_000dc440();
  local_5c[1] = 0xd1bd6;
  iVar8 = FUN_000dc440();
  if (extraout_ECX_00 < iVar8) {
    *(undefined4 *)(iVar3 + 0x205) = *local_34;
    *(undefined2 *)(iVar3 + 0x209 + (uint)bVar16 * -8) =
         *(undefined2 *)(local_34 + (uint)bVar16 * -2 + 1);
  }
  local_5c[1] = 0xd1bf8;
  iVar8 = FUN_0007e868();
  piVar14 = (int *)local_54;
  if (iVar8 == 0) goto LAB_000d1e11;
  local_5c[1] = 0;
  piVar14 = local_5c;
  local_5c[0] = local_30;
  cVar5 = FUN_000d29ac();
  iVar8 = local_30;
  if (cVar5 == '\0') {
    *pcVar1 = '\x01';
    *(undefined4 *)(iVar3 + 0x20b) = *local_3c;
    *(undefined2 *)(iVar3 + 0x20f + (uint)bVar16 * -8) =
         *(undefined2 *)(local_3c + (uint)bVar16 * -2 + 1);
    *(undefined1 *)(iVar3 + 0x1ed) = 0;
    *(undefined1 *)(iVar3 + 0x1ec) = 0;
    *(undefined1 *)(iVar3 + 0x1ee) = 0;
    goto LAB_000d1e11;
  }
  local_20 = FUN_000d3f64();
  uVar12 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(iVar8 + 0x56) * 2) / 2;
  local_24 = (ushort *)(iVar3 + 0x205);
  local_44 = *(undefined4 *)(iVar8 + 0xd);
  if ((local_20 & 1) != 0) {
    uVar2 = *(ushort *)(iVar8 + 0xd);
    local_44._2_2_ = (short)((uint)*(undefined4 *)(iVar8 + 0xd) >> 0x10);
    uVar6 = local_44._2_2_;
    if (*(ushort *)(iVar3 + 0x205) < uVar2) {
      local_44 = CONCAT22(local_44._2_2_,uVar2 - uVar12);
      local_44 = CONCAT31(local_44._1_3_,1);
      local_44._0_2_ = (short)local_44 + uVar12;
    }
    else {
      local_44 = CONCAT22(local_44._2_2_,uVar2 + uVar12);
      local_44 = CONCAT31(local_44._1_3_,0xff);
      local_44._0_2_ = (short)local_44 - uVar12;
    }
    local_44 = CONCAT22(uVar6,(short)local_44);
    local_40[0] = FUN_000b28e8();
  }
  if ((local_20 & 2) != 0) {
    uVar2 = *(ushort *)(iVar8 + 0xf);
    if (local_24[1] < uVar2) {
      local_44._3_1_ = (undefined1)((ushort)(uVar2 - uVar12) >> 8);
      local_44._0_3_ = CONCAT12(1,(short)local_44);
      local_44._2_2_ = local_44._2_2_ + uVar12;
    }
    else {
      local_44._3_1_ = (undefined1)((ushort)(uVar2 + uVar12) >> 8);
      local_44._0_3_ = CONCAT12(0xff,(short)local_44);
      local_44._2_2_ = local_44._2_2_ - uVar12;
    }
    local_40[0] = FUN_000b28e8();
  }
  if ((local_20 & 4) != 0) {
    uVar2 = *(ushort *)(iVar8 + 0xd);
    if (*local_24 < uVar2) {
      local_44._1_3_ = (uint3)(byte)((ushort)(uVar2 - uVar12) >> 8);
      local_44 = CONCAT31(local_44._1_3_,1);
      local_44._0_2_ = (short)local_44 + uVar12;
    }
    else {
      local_44._1_3_ = (uint3)(byte)((ushort)(uVar2 + uVar12) >> 8);
      local_44 = CONCAT31(local_44._1_3_,0xff);
      local_44._0_2_ = (short)local_44 - uVar12;
    }
    uVar2 = *(ushort *)(iVar8 + 0xf);
    if (local_24[1] < uVar2) {
      local_44._3_1_ = (undefined1)((ushort)(uVar2 - uVar12) >> 8);
      local_44._0_3_ = CONCAT12(1,(short)local_44);
      local_44._2_2_ = local_44._2_2_ + uVar12;
    }
    else {
      local_44._3_1_ = (undefined1)((ushort)(uVar2 + uVar12) >> 8);
      local_44._0_3_ = CONCAT12(0xff,(short)local_44);
      local_44._2_2_ = local_44._2_2_ - uVar12;
    }
    local_40[0] = FUN_000b28e8();
  }
  *(undefined4 *)local_24 = local_44;
  local_24[(uint)bVar16 * -4 + 2] = local_40[(uint)bVar16 * -4];
  if (local_20 == 4) {
    iVar8 = *(int *)(iVar3 + 0x1f7);
    if ((iVar8 == 0) || (iVar8 == 0x400)) {
      *(undefined2 *)(iVar3 + 0x207) = *(undefined2 *)(local_30 + 0xf);
    }
    else {
      if ((iVar8 != 0x200) && (iVar8 != 0x600)) goto LAB_000d1df4;
      *(undefined2 *)(iVar3 + 0x205) = *(undefined2 *)(local_30 + 0xd);
    }
    uVar6 = FUN_000b28e8();
    *(undefined2 *)(iVar3 + 0x209) = uVar6;
  }
LAB_000d1df4:
  *(undefined1 *)(iVar3 + 0x1ee) = 1;
  piVar14 = local_5c;
LAB_000d1e11:
  if (*(char *)(iVar3 + 0x1ee) != '\0') {
    bVar13 = *(char *)(iVar3 + 0x1ee) + 1;
    *(byte *)(iVar3 + 0x1ee) = bVar13;
    if (0x20 < bVar13) {
      *(undefined4 *)((int)piVar14 + -4) = 0xd1e40;
      FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 1235, "It's even more shit than I first thought") */
    }
    if ((*(short *)(iVar3 + 0x205) == *(short *)(*(int *)((int)piVar14 + 0x2c) + 0xd)) &&
       (*(short *)(iVar3 + 0x207) == *(short *)(*(int *)((int)piVar14 + 0x2c) + 0xf))) {
      *(undefined1 *)(iVar3 + 0x1ee) = 0;
      *pcVar1 = '\x02';
      iVar8 = *(int *)((int)piVar14 + 0x2c);
      *(short *)(iVar3 + 0x205) =
           *(short *)(iVar8 + 0xd) +
           (short)((uint)(*(int *)((int)piVar14 + 0x28) * (&DAT_001927e0)[*(int *)(iVar3 + 0x1f7)])
                  >> 0x10);
      uVar9 = *(undefined4 *)((int)piVar14 + 0x28);
      *(short *)(iVar3 + 0x207) =
           (short)((uint)-(*(int *)((int)piVar14 + 0x28) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(iVar3 + 0x1f7)] >> 8) >> 8) +
           *(short *)(iVar8 + 0xf);
      *(undefined4 *)((int)piVar14 + -4) = 0xd1ec7;
      uVar6 = FUN_000b28e8();
      *(undefined4 *)((int)piVar14 + -4) = 0;
      *(undefined2 *)(iVar3 + 0x209) = uVar6;
      *(undefined4 *)((int)piVar14 + -8) = uVar9;
      *(undefined4 *)((int)piVar14 + -0xc) = *(undefined4 *)((int)piVar14 + 0x24);
      *(undefined4 *)((int)piVar14 + -0x10) = 0xd1ee4;
      FUN_000d5624();
      *(undefined4 *)((int)piVar14 + -0x10) = 0xd1ef8;
      uVar9 = FUN_000dc440();
      *(undefined4 *)(iVar3 + 499) = uVar9;
      *(undefined4 *)((int)piVar14 + -0x10) = 0xd1f06;
      iVar8 = FUN_0007e868();
      if (iVar8 != 0) {
        iVar8 = *(int *)((int)piVar14 + 0x20);
        *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)(iVar8 + 0xd);
        *(undefined2 *)(iVar3 + 0x209 + (uint)bVar16 * -8) =
             *(undefined2 *)(iVar8 + 0x11 + (uint)bVar16 * -8);
        *(undefined4 *)(iVar3 + 499) = 0;
      }
      *(undefined4 *)((int)piVar14 + -0x10) = 0xd1f2e;
      uVar9 = FUN_000dc440();
      *(undefined4 *)(iVar3 + 0x1ef) = uVar9;
      return 1;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0d2480 (Ghidra: FUN_000d2480)
 * Prototype: bool sub_0d2480(void);
 * Address  : 0xd2480 (Size: 142 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd1ae0, 0xd4188
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000d2480(void)

{
  uint uVar1;
  int in_EAX;
  int in_EDX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_EAX + 0xd);
  if ((in_EDX + 0x200U & 0x7ff) == uVar1) {
    if (*(char *)(in_EAX + 3) == '\x01') {
      *(char *)(in_EAX + 2) = *(char *)(in_EAX + 2) + '\x01';
    }
    else {
      *(undefined1 *)(in_EAX + 3) = 1;
      *(undefined1 *)(in_EAX + 2) = 1;
    }
  }
  else {
    uVar2 = in_EDX - 0x200U & 0x7ff;
    if (uVar2 == uVar1) {
      if (CONCAT31((uint3)(uVar2 >> 8) ^ (uint3)(uVar1 >> 8),*(undefined1 *)(in_EAX + 3)) == 2) {
        *(char *)(in_EAX + 2) = *(char *)(in_EAX + 2) + '\x01';
        return 3 < *(byte *)(in_EAX + 2);
      }
      *(undefined1 *)(in_EAX + 3) = 2;
      *(undefined1 *)(in_EAX + 2) = 1;
      return 3 < *(byte *)(in_EAX + 2);
    }
    *(undefined1 *)(in_EAX + 2) = 0;
    *(undefined1 *)(in_EAX + 3) = 0;
  }
  return 3 < *(byte *)(in_EAX + 2);
}

/******************************************************************************
 * Function : sub_0d2510 (Ghidra: FUN_000d2510)
 * Prototype: int sub_0d2510(void);
 * Address  : 0xd2510 (Size: 1177 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xd1ae0, 0xd29ac, 0xd4188
 * Callees  : 3 -> 0x10d93, 0x7e868, 0xb28e8
 ******************************************************************************/
int FUN_000d2510(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int unaff_EBX;
  
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1eb) == '\x01') {
    iVar2 = FUN_00010d93();
    FUN_000b28e8();
    iVar3 = FUN_0007e868();
    if (iVar3 != 4) {
      return (iVar2 - 1U & 3) * 0x200;
    }
    uVar4 = FUN_00010d93();
    FUN_000b28e8();
    iVar2 = FUN_0007e868();
    if (iVar2 != 4) {
      return (uVar4 & 3) * 0x200;
    }
    iVar2 = FUN_00010d93();
    uVar4 = iVar2 + 1U & 3;
    sVar5 = (short)((uint)((&DAT_001927e0)[uVar4 * 0x200] * unaff_EBX) >> 0x10) +
            *(short *)(in_EAX + 0xd);
    uVar1 = FUN_000b28e8(sVar5);
    iVar2 = FUN_0007e868(sVar5,uVar1);
    if (iVar2 != 4) {
      return uVar4 * 0x200;
    }
    iVar2 = FUN_00010d93();
    uVar4 = iVar2 + 2U & 3;
    FUN_000b28e8(sVar5,uVar1,
                 (short)((uint)((&DAT_001927e0)[uVar4 * 0x200] * unaff_EBX) >> 0x10) +
                 *(short *)(in_EAX + 0xd));
    iVar2 = FUN_0007e868();
    if (iVar2 != 4) {
      return uVar4 * 0x200;
    }
  }
  else if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1eb) == '\x02') {
    iVar2 = FUN_00010d93();
    FUN_000b28e8();
    iVar3 = FUN_0007e868();
    if (iVar3 != 4) {
      return (iVar2 + 1U & 3) * 0x200;
    }
    uVar4 = FUN_00010d93();
    FUN_000b28e8();
    iVar2 = FUN_0007e868();
    if (iVar2 != 4) {
      return (uVar4 & 3) * 0x200;
    }
    iVar2 = FUN_00010d93();
    FUN_000b28e8();
    iVar3 = FUN_0007e868();
    if (iVar3 != 4) {
      return (iVar2 - 1U & 3) * 0x200;
    }
    iVar2 = FUN_00010d93();
    FUN_000b28e8();
    iVar3 = FUN_0007e868();
    if (iVar3 != 4) {
      return (iVar2 + 2U & 3) * 0x200;
    }
  }
  return -1;
}

/******************************************************************************
 * Function : dk_illegal_block_direction_lookahead_0d29ac (Ghidra: FUN_000d29ac)
 * Prototype: undefined1 dk_illegal_block_direction_lookahead_0d29ac(void);
 * Address  : 0xd29ac (Size: 5435 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp:1416 ("Illegal block direction for lookahead"); routes.cpp:1416 ("Illegal block direction for lookahead")
 * Naming   : String 'Illegal block direction for lookahead'
 * Callers  : 2 -> 0xd1ae0, 0xd4188
 * Callees  : 10 -> 0x7e868, 0xb28e8, 0xd2510, 0xd3f64, 0xd402c, 0xd5624, 0xdc324, 0xdc440, 0xddaf0, 0xddaf8
 * Strings  :
 *   - 0x16c670: "routes.cpp"
 *   - 0x16c64a: "Illegal block direction for lookahead"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d310c) */
/* WARNING: Removing unreachable block (ram,0x000d3a52) */

undefined1 FUN_000d29ac(void)

{
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  ushort *puVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  int in_EAX;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar15;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_ECX_06;
  ushort *in_EDX;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ushort uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  byte bVar24;
  undefined1 auStack_17c [48];
  undefined4 local_14c [12];
  undefined4 local_11c;
  ushort local_118 [14];
  undefined4 local_fc;
  undefined2 local_f8 [14];
  uint local_dc;
  undefined4 local_d8;
  ushort *local_d0;
  uint local_cc;
  uint local_3c;
  undefined1 local_10;
  
  bVar24 = 0;
  puVar21 = (undefined4 *)auStack_17c;
  iVar12 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_dc = (uint)*(ushort *)(iVar12 + 0xc4);
  local_d8 = 0xff;
  uVar16 = (uint)*(ushort *)(in_EAX + 0xf);
  bVar6 = uVar16 == in_EDX[1] || (int)(uVar16 - in_EDX[1]) < 0;
  uVar9 = (uint)*(ushort *)(in_EAX + 0xd);
  bVar7 = uVar9 == *in_EDX || (int)(uVar9 - *in_EDX) < 0;
  uVar20 = *(ushort *)(iVar12 + 0x20d);
  uVar9 = uVar9 - *(ushort *)(iVar12 + 0x20b);
  uVar17 = (uint)*(ushort *)(in_EAX + 0xf) - (uint)*(ushort *)(iVar12 + 0x20d);
  uVar18 = (int)uVar17 >> 0x1f;
  uVar10 = FUN_000d3f64();
  if ((uVar10 & 1) == 0) {
    if ((uVar10 & 2) == 0) {
      if ((uVar10 & 4) == 0) {
        FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 1416, "Illegal block direction for lookahead") */
        FUN_000ddaf8(); /* LbWarnLog("routes.cpp", line 1416, "Illegal block direction for lookahead") */
        return 0;
      }
      iVar14 = (uint)bVar6 * 0xc + (uint)bVar7 * 6;
      iVar15 = (uint)((int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) <
                     (int)((uVar17 ^ uVar18) - uVar18)) * 3;
      local_3c = (uint)*(ushort *)(&DAT_0018e91b + iVar15 + iVar14);
      local_10 = (&DAT_0018e91d)[iVar15 + iVar14];
    }
    else {
      iVar14 = (uint)bVar6 * 6;
      iVar15 = (uint)((int)uVar9 < 1) * 3;
      local_3c = (uint)*(ushort *)(&DAT_0018e90f + iVar15 + iVar14);
      local_10 = (&DAT_0018e911)[iVar15 + iVar14];
    }
  }
  else {
    iVar14 = (uint)bVar7 * 6;
    iVar15 = (uint)((int)(uVar16 - uVar20) < 1) * 3;
    local_3c = (uint)*(ushort *)(&DAT_0018e903 + iVar15 + iVar14);
    local_10 = (&DAT_0018e905)[iVar15 + iVar14];
  }
  local_fc = *(undefined4 *)(in_EAX + 0xd);
  local_d0 = in_EDX;
  local_f8[(uint)bVar24 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar24 * -8);
  puVar22 = (undefined4 *)(iVar12 + 0x1ea);
  puVar23 = local_14c;
  for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
    puVar23 = puVar23 + (uint)bVar24 * -2 + 1;
  }
  *(undefined1 *)puVar23 = *(undefined1 *)puVar22;
  *(short *)(in_EAX + 0x52) = (short)local_3c;
  *(undefined1 *)(iVar12 + 0x1eb) = local_10;
  uVar11 = FUN_000dc324();
  *(undefined4 *)(iVar12 + 0x1ef) = uVar11;
  uVar9 = FUN_000d3f64();
  local_cc = uVar9;
  uVar20 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  local_11c = *(undefined4 *)(in_EAX + 0xd);
  if ((uVar9 & 1) != 0) {
    local_11c._2_2_ = (short)((uint)*(undefined4 *)(in_EAX + 0xd) >> 0x10);
    uVar8 = local_11c._2_2_;
    if (*in_EDX < *(ushort *)(in_EAX + 0xd)) {
      local_11c = CONCAT22(local_11c._2_2_,*(short *)(in_EAX + 0xd) - uVar20);
      local_11c = CONCAT31(local_11c._1_3_,1);
      local_11c._0_2_ = (short)local_11c + uVar20;
    }
    else {
      local_11c = CONCAT22(local_11c._2_2_,*(short *)(in_EAX + 0xd) + uVar20);
      local_11c = CONCAT31(local_11c._1_3_,0xff);
      local_11c._0_2_ = (short)local_11c - uVar20;
    }
    local_11c = CONCAT22(uVar8,(short)local_11c);
    local_118[0] = FUN_000b28e8();
    uVar9 = extraout_ECX;
  }
  if ((uVar9 & 2) != 0) {
    uVar2 = *(ushort *)(in_EAX + 0xf);
    if (in_EDX[1] < uVar2) {
      local_11c._3_1_ = (undefined1)((ushort)(uVar2 - uVar20) >> 8);
      local_11c._0_3_ = CONCAT12(1,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ + uVar20;
    }
    else {
      local_11c._3_1_ = (undefined1)((ushort)(uVar2 + uVar20) >> 8);
      local_11c._0_3_ = CONCAT12(0xff,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ - uVar20;
    }
    local_118[0] = FUN_000b28e8();
    uVar9 = extraout_ECX_00;
  }
  if ((uVar9 & 4) != 0) {
    uVar2 = *(ushort *)(in_EAX + 0xd);
    if (*in_EDX < uVar2) {
      local_11c._1_3_ = (uint3)(byte)((ushort)(uVar2 - uVar20) >> 8);
      local_11c = CONCAT31(local_11c._1_3_,1);
      local_11c._0_2_ = (short)local_11c + uVar20;
    }
    else {
      local_11c._1_3_ = (uint3)(byte)((ushort)(uVar2 + uVar20) >> 8);
      local_11c = CONCAT31(local_11c._1_3_,0xff);
      local_11c._0_2_ = (short)local_11c - uVar20;
    }
    uVar2 = *(ushort *)(in_EAX + 0xf);
    if (in_EDX[1] < uVar2) {
      local_11c._3_1_ = (undefined1)((ushort)(uVar2 - uVar20) >> 8);
      local_11c._0_3_ = CONCAT12(1,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ + uVar20;
    }
    else {
      local_11c._3_1_ = (undefined1)((ushort)(uVar2 + uVar20) >> 8);
      local_11c._0_3_ = CONCAT12(0xff,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ - uVar20;
    }
    local_118[0] = FUN_000b28e8();
    uVar9 = extraout_ECX_01;
  }
  *(undefined4 *)in_EDX = local_11c;
  in_EDX[(uint)bVar24 * -4 + 2] = local_118[(uint)bVar24 * -4];
  if (uVar9 == 4) {
    if ((local_3c == 0) || (local_3c == 0x400)) {
      *(ushort *)(in_EAX + 0xd) = *local_d0;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar8;
    }
    else if ((local_3c == 0x200) || (local_3c == 0x600)) {
      *(ushort *)(in_EAX + 0xf) = local_d0[1];
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(in_EAX + 0x11) = uVar8;
    }
  }
  else {
    *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)local_d0;
    *(ushort *)(in_EAX + 0x11 + (uint)bVar24 * -8) = local_d0[(uint)bVar24 * -4 + 2];
  }
  *(uint *)(iVar12 + 0x1f7) = local_3c;
  do {
    *(undefined1 *)((int)puVar21 + 0x150) = 0;
    *(undefined4 *)((int)puVar21 + -4) = 0xd3003;
    iVar12 = FUN_000dc324();
    puVar19 = (undefined1 *)puVar21;
    if (iVar12 < *(int *)(*(int *)((int)puVar21 + 0x130) + 5)) {
      *(uint *)((int)puVar21 + -4) = (uint)*(byte *)((int)puVar21 + 0x168);
      puVar19 = (undefined1 *)((int)puVar21 + -8);
      *(undefined4 *)((int)puVar21 + -8) = *(undefined4 *)((int)puVar21 + 0xf4);
      *(undefined4 *)((int)puVar21 + -0xc) = 0xd303d;
      iVar12 = FUN_000d402c();
      if (iVar12 != 0) {
        *(undefined4 *)((int)puVar21 + -0xc) = 0xd3054;
        iVar12 = FUN_000dc324();
        *(int *)((int)puVar21 + 0x100) = iVar12;
        *(int *)((int)puVar21 + 0x100) = -iVar12;
        puVar21 = (undefined4 *)((int)puVar21 + -8);
        break;
      }
    }
    if (*(int *)(puVar19 + 0xbc) == 0) {
      sVar3 = *(short *)(in_EAX + 0x52);
      if (*(char *)(*(int *)(puVar19 + 0x130) + 1) == '\x01') {
        *(char *)(in_EAX + 0x53) = *(char *)(in_EAX + 0x53) + '\x02';
        if (0x7ff < *(ushort *)(in_EAX + 0x52)) {
          *(ushort *)(in_EAX + 0x52) = *(ushort *)(in_EAX + 0x52) - 0x800;
        }
      }
      else {
        *(short *)(in_EAX + 0x52) = sVar3 + -0x200;
      }
      *(undefined4 *)(puVar19 + -4) = 0xd312e;
      uVar11 = FUN_000d2510();
      *(undefined4 *)(puVar19 + 0xdc) = uVar11;
      *(short *)(in_EAX + 0x52) = sVar3;
    }
    else {
      *(undefined4 *)(puVar19 + -4) = 0xd30b0;
      uVar11 = FUN_000d2510();
      *(undefined4 *)(puVar19 + 0xdc) = uVar11;
    }
    if ((*(int *)(puVar19 + 0xbc) == 0) ||
       (*(int *)(puVar19 + 0xdc) != *(int *)(*(int *)(puVar19 + 0x130) + 0xd))) {
      *(short *)(puVar19 + 0x98) =
           (short)((uint)(*(int *)(puVar19 + 0x128) *
                         (&DAT_001927e0)[*(int *)(*(int *)(puVar19 + 0x130) + 0xd)]) >> 0x10) +
           *(short *)(in_EAX + 0xd);
      *(short *)(puVar19 + 0x9a) =
           *(short *)(in_EAX + 0xf) +
           (short)((uint)-(*(int *)(puVar19 + 0x128) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(puVar19 + 0x130) + 0xd)] >> 8)
                  >> 8);
      *(undefined4 *)(puVar19 + -4) = 0xd31d9;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(puVar19 + 0x9c) = uVar8;
      *(undefined4 *)(puVar19 + -4) = 0xd31ef;
      iVar12 = FUN_0007e868();
      if (iVar12 == 4) {
        *(undefined4 *)(puVar19 + -4) = 0xd320f;
        uVar9 = FUN_000d3f64();
        *(uint *)(puVar19 + 0x110) = uVar9;
        uVar20 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
        *(undefined2 *)(puVar19 + 0x90) = *(undefined2 *)(in_EAX + 0xd);
        *(undefined2 *)(puVar19 + 0x92) = *(undefined2 *)(in_EAX + 0xf);
        if ((uVar9 & 1) != 0) {
          uVar2 = *(ushort *)(in_EAX + 0xd);
          if ((ushort)*(undefined4 *)(puVar19 + 0x98) < uVar2) {
            *(ushort *)(puVar19 + 0x90) = uVar2 - uVar20;
            puVar19[0x90] = 1;
            *(ushort *)(puVar19 + 0x90) = *(short *)(puVar19 + 0x90) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x90) = uVar2 + uVar20;
            puVar19[0x90] = 0xff;
            *(ushort *)(puVar19 + 0x90) = *(short *)(puVar19 + 0x90) - uVar20;
          }
          *(undefined4 *)(puVar19 + -4) = 0xd32b3;
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(puVar19 + 0x94) = uVar8;
        }
        if ((puVar19[0x110] & 2) != 0) {
          uVar2 = *(ushort *)(in_EAX + 0xf);
          if (*(ushort *)(puVar19 + 0x9a) < uVar2) {
            *(ushort *)(puVar19 + 0x92) = uVar2 - uVar20;
            puVar19[0x92] = 1;
            *(ushort *)(puVar19 + 0x92) = *(short *)(puVar19 + 0x92) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x92) = uVar2 + uVar20;
            puVar19[0x92] = 0xff;
            *(ushort *)(puVar19 + 0x92) = *(short *)(puVar19 + 0x92) - uVar20;
          }
          *(undefined4 *)(puVar19 + -4) = 0xd331b;
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(puVar19 + 0x94) = uVar8;
        }
        if ((puVar19[0x110] & 4) != 0) {
          uVar2 = *(ushort *)(in_EAX + 0xd);
          if (*(ushort *)(puVar19 + 0x98) < uVar2) {
            *(ushort *)(puVar19 + 0x90) = uVar2 - uVar20;
            puVar19[0x90] = 1;
            *(ushort *)(puVar19 + 0x90) = *(short *)(puVar19 + 0x90) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x90) = uVar2 + uVar20;
            puVar19[0x90] = 0xff;
            *(ushort *)(puVar19 + 0x90) = *(short *)(puVar19 + 0x90) - uVar20;
          }
          uVar2 = *(ushort *)(in_EAX + 0xf);
          if (*(ushort *)(puVar19 + 0x9a) < uVar2) {
            *(ushort *)(puVar19 + 0x92) = uVar2 - uVar20;
            puVar19[0x92] = 1;
            *(ushort *)(puVar19 + 0x92) = *(short *)(puVar19 + 0x92) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x92) = uVar2 + uVar20;
            puVar19[0x92] = 0xff;
            *(ushort *)(puVar19 + 0x92) = *(short *)(puVar19 + 0x92) - uVar20;
          }
          *(undefined4 *)(puVar19 + -4) = 0xd33ce;
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(puVar19 + 0x94) = uVar8;
        }
        *(undefined4 *)(puVar19 + 0x98) = *(undefined4 *)(puVar19 + 0x90);
        *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x9c) =
             *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x94);
        if (((short)*(undefined4 *)(puVar19 + 0x98) != *(short *)(in_EAX + 0xd)) ||
           ((short)*(undefined4 *)(puVar19 + 0x9a) != *(short *)(in_EAX + 0xf))) {
          *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)(puVar19 + 0x98);
          *(undefined2 *)(in_EAX + 0x11 + (uint)bVar24 * -8) =
               *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x9c);
          *(undefined4 *)(puVar19 + -4) = 0xd341a;
          uVar11 = FUN_000dc440();
          *(undefined4 *)(*(int *)(puVar19 + 0x130) + 9) = uVar11;
          puVar19[0x150] = 1;
        }
      }
    }
    puVar21 = (undefined4 *)puVar19;
    if (puVar19[0x150] == '\0') {
      iVar12 = *(int *)(puVar19 + 0x130);
      *(undefined4 *)(iVar12 + 0xd) = *(undefined4 *)(puVar19 + 0xdc);
      *(undefined2 *)(in_EAX + 0x52) = *(undefined2 *)(iVar12 + 0xd);
      *(short *)(puVar19 + 0x98) =
           (short)((uint)(*(int *)(puVar19 + 0x128) * (&DAT_001927e0)[*(int *)(iVar12 + 0xd)]) >>
                  0x10) + *(short *)(in_EAX + 0xd);
      *(short *)(puVar19 + 0x9a) =
           *(short *)(in_EAX + 0xf) +
           (short)((uint)-(*(int *)(puVar19 + 0x128) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(puVar19 + 0x130) + 0xd)] >> 8)
                  >> 8);
      *(undefined4 *)(puVar19 + -4) = 0xd34c2;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(puVar19 + 0x9c) = uVar8;
      *(uint *)(puVar19 + -4) = (uint)(byte)puVar19[0x168];
      *(undefined4 *)(puVar19 + -8) = extraout_ECX_02;
      puVar21 = (undefined4 *)(puVar19 + -0xc);
      *(undefined4 *)(puVar19 + -0xc) = *(undefined4 *)(puVar19 + 0x124);
      *(undefined4 *)(puVar19 + -0x10) = 0xd3504;
      FUN_000d5624();
      *(undefined4 *)(in_EAX + 0xd) = *(undefined4 *)(puVar19 + 0x98);
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar24 * -8) =
           *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x9c);
    }
    iVar12 = *(int *)((int)puVar21 + 0x128);
    iVar14 = *(int *)((int)puVar21 + 0xd0);
    *(undefined4 *)((int)puVar21 + -4) = 0xd352d;
    iVar15 = FUN_000dc324();
    *(int *)((int)puVar21 + 0xd0) = iVar14 + iVar12;
    if ((iVar15 < *(int *)((int)puVar21 + 0x108)) &&
       (*(int *)((int)puVar21 + 0x108) = iVar15, iVar15 < 0x10000)) {
      *(int *)((int)puVar21 + 0x108) = -iVar15;
      break;
    }
    iVar12 = *(int *)((int)puVar21 + 0xbc);
    *(int *)((int)puVar21 + 0xbc) = iVar12 + 1;
  } while (iVar12 + 1 < 100);
  iVar14 = puVar21[0x34] * puVar21[0x34];
  iVar12 = puVar21[0x42];
  if (iVar12 < 0) {
    puVar21[0x42] = iVar12 - iVar14;
  }
  else {
    puVar21[0x42] = iVar12 + iVar14;
  }
  uVar11 = puVar21[0x4f];
  uVar4 = puVar21[0x3c];
  *(undefined4 *)(in_EAX + 0xd) = puVar21[0x20];
  *(undefined2 *)(in_EAX + 0x11 + (uint)bVar24 * -8) =
       *(undefined2 *)(puVar21 + (uint)bVar24 * -2 + 0x21);
  puVar21[0x45] = uVar4;
  puVar22 = (undefined4 *)puVar21[0x4c];
  uVar4 = puVar21[0x3b];
  *(short *)(in_EAX + 0x52) = (short)uVar11;
  uVar11 = puVar21[0x42];
  iVar12 = puVar21[0x33];
  puVar21[0x31] = uVar4;
  puVar23 = puVar21 + 0xc;
  for (iVar14 = 0xb; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = *puVar23;
    puVar23 = puVar23 + (uint)bVar24 * -2 + 1;
    puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
  }
  *(undefined1 *)puVar22 = *(undefined1 *)puVar23;
  puVar21[0x2a] = uVar11;
  puVar21[0x48] = puVar21[0x60];
  puVar21[0x43] = 0x7fffffff;
  puVar21[0x3a] = (uint)*(ushort *)(puVar21 + 0x4d);
  uVar11 = puVar21[0x28];
  puVar21[0x1e] = *(undefined4 *)(iVar12 + 0xd);
  *(undefined2 *)(puVar21 + (uint)bVar24 * -2 + 0x1f) =
       *(undefined2 *)(iVar12 + 0x11 + (uint)bVar24 * -8);
  puVar21[0x3f] = uVar11;
  puVar21[0x4b] = puVar21[0x29];
  *(undefined1 *)(puVar21 + 0x59) = *(undefined1 *)(puVar21 + 0x61);
  iVar14 = puVar21[0x3c];
  puVar21[0x4e] = CONCAT22((short)((uint)puVar21[0x29] >> 0x10),*(undefined2 *)(iVar12 + 0x52));
  puVar22 = (undefined4 *)puVar21[0x3c];
  puVar23 = puVar21;
  for (iVar15 = 0xb; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
    puVar23 = puVar23 + (uint)bVar24 * -2 + 1;
  }
  *(undefined1 *)puVar23 = *(undefined1 *)puVar22;
  *(short *)(iVar12 + 0x52) = (short)puVar21[0x3a];
  *(undefined1 *)(iVar14 + 1) = *(undefined1 *)(puVar21 + 0x53);
  puVar21[-1] = 0xd3695;
  uVar11 = FUN_000dc324();
  puVar5 = (ushort *)puVar21[0x3b];
  *(undefined4 *)(puVar21[0x3c] + 5) = uVar11;
  puVar21[0x41] = 0;
  puVar21[-1] = 0xd36bf;
  uVar9 = FUN_000d3f64();
  uVar20 = *(ushort *)(iVar12 + 0x56);
  puVar21[0x2c] = uVar9;
  uVar20 = *(ushort *)(&DAT_0019073b + (uint)uVar20 * 2) / 2;
  *(undefined2 *)(puVar21 + 0x22) = *(undefined2 *)(iVar12 + 0xd);
  *(undefined2 *)((int)puVar21 + 0x8a) = *(undefined2 *)(iVar12 + 0xf);
  if ((*(byte *)(puVar21 + 0x2c) & 1) != 0) {
    if (*puVar5 < *(ushort *)(iVar12 + 0xd)) {
      *(ushort *)(puVar21 + 0x22) = *(short *)(iVar12 + 0xd) - uVar20;
      *(undefined1 *)(puVar21 + 0x22) = 1;
      *(ushort *)(puVar21 + 0x22) = *(short *)(puVar21 + 0x22) + uVar20;
    }
    else {
      *(ushort *)(puVar21 + 0x22) = *(short *)(iVar12 + 0xd) + uVar20;
      *(undefined1 *)(puVar21 + 0x22) = 0xff;
      *(ushort *)(puVar21 + 0x22) = *(short *)(puVar21 + 0x22) - uVar20;
    }
    puVar21[-1] = 0xd3761;
    uVar8 = FUN_000b28e8();
    *(undefined2 *)(puVar21 + 0x23) = uVar8;
    uVar9 = extraout_ECX_03;
  }
  if ((uVar9 & 2) != 0) {
    uVar2 = *(ushort *)(iVar12 + 0xf);
    if (puVar5[1] < uVar2) {
      *(ushort *)((int)puVar21 + 0x8a) = uVar2 - uVar20;
      *(undefined1 *)((int)puVar21 + 0x8a) = 1;
      *(short *)((int)puVar21 + 0x8a) = *(short *)((int)puVar21 + 0x8a) + uVar20;
    }
    else {
      *(ushort *)((int)puVar21 + 0x8a) = uVar2 + uVar20;
      *(undefined1 *)((int)puVar21 + 0x8a) = 0xff;
      *(short *)((int)puVar21 + 0x8a) = *(short *)((int)puVar21 + 0x8a) - uVar20;
    }
    puVar21[-1] = 0xd37c4;
    uVar8 = FUN_000b28e8();
    *(undefined2 *)(puVar21 + 0x23) = uVar8;
    uVar9 = extraout_ECX_04;
  }
  if ((uVar9 & 4) != 0) {
    uVar2 = *(ushort *)(iVar12 + 0xd);
    if (*puVar5 < uVar2) {
      *(ushort *)(puVar21 + 0x22) = uVar2 - uVar20;
      *(undefined1 *)(puVar21 + 0x22) = 1;
      *(ushort *)(puVar21 + 0x22) = *(short *)(puVar21 + 0x22) + uVar20;
    }
    else {
      *(ushort *)(puVar21 + 0x22) = uVar2 + uVar20;
      *(undefined1 *)(puVar21 + 0x22) = 0xff;
      *(ushort *)(puVar21 + 0x22) = *(short *)(puVar21 + 0x22) - uVar20;
    }
    uVar2 = *(ushort *)(iVar12 + 0xf);
    if (puVar5[1] < uVar2) {
      *(ushort *)((int)puVar21 + 0x8a) = uVar2 - uVar20;
      *(undefined1 *)((int)puVar21 + 0x8a) = 1;
      *(short *)((int)puVar21 + 0x8a) = *(short *)((int)puVar21 + 0x8a) + uVar20;
    }
    else {
      *(ushort *)((int)puVar21 + 0x8a) = uVar2 + uVar20;
      *(undefined1 *)((int)puVar21 + 0x8a) = 0xff;
      *(short *)((int)puVar21 + 0x8a) = *(short *)((int)puVar21 + 0x8a) - uVar20;
    }
    puVar21[-1] = 0xd3872;
    uVar8 = FUN_000b28e8();
    *(undefined2 *)(puVar21 + 0x23) = uVar8;
    uVar9 = extraout_ECX_05;
  }
  *(undefined4 *)puVar5 = puVar21[0x22];
  puVar5[(uint)bVar24 * -4 + 2] = *(ushort *)(puVar21 + (uint)bVar24 * -2 + 0x23);
  if (uVar9 == 4) {
    iVar14 = puVar21[0x3a];
    if ((iVar14 == 0) || (iVar14 == 0x400)) {
      *(undefined2 *)(iVar12 + 0xd) = *(undefined2 *)puVar21[0x31];
      puVar21[-1] = 0xd38b4;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(iVar12 + 0x11) = uVar8;
    }
    else if ((iVar14 == 0x200) || (iVar14 == 0x600)) {
      *(undefined2 *)(iVar12 + 0xf) = *(undefined2 *)(puVar21[0x31] + 2);
      puVar21[-1] = 0xd38e3;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(iVar12 + 0x11) = uVar8;
    }
  }
  else {
    puVar22 = (undefined4 *)puVar21[0x31];
    *(undefined4 *)(iVar12 + 0xd) = *puVar22;
    *(undefined2 *)(iVar12 + 0x11 + (uint)bVar24 * -8) =
         *(undefined2 *)(puVar22 + (uint)bVar24 * -2 + 1);
  }
  iVar14 = puVar21[0x45];
  *(undefined4 *)(iVar14 + 0xd) = puVar21[0x3a];
  puVar21[0x36] = iVar14 + 0x21;
  puVar21[0x47] = iVar12 + 0xd;
  puVar21[0x32] = 0;
  puVar21[0x40] = iVar14 + 0x1b;
  do {
    *(undefined1 *)((int)puVar21 + 0x148) = 0;
    *(undefined4 *)((int)puVar21 + -4) = 0xd394a;
    iVar14 = FUN_000dc324();
    puVar19 = (undefined1 *)puVar21;
    if (iVar14 < *(int *)(*(int *)((int)puVar21 + 0x114) + 5)) {
      *(uint *)((int)puVar21 + -4) = (uint)*(byte *)((int)puVar21 + 0x164);
      puVar19 = (undefined1 *)((int)puVar21 + -8);
      *(undefined4 *)((int)puVar21 + -8) = *(undefined4 *)((int)puVar21 + 0xfc);
      *(undefined4 *)((int)puVar21 + -0xc) = 0xd3984;
      iVar14 = FUN_000d402c();
      if (iVar14 != 0) {
        *(undefined4 *)((int)puVar21 + -0xc) = 0xd399b;
        iVar14 = FUN_000dc324();
        *(int *)((int)puVar21 + 0x104) = iVar14;
        *(int *)((int)puVar21 + 0x104) = -iVar14;
        puVar21 = (undefined4 *)((int)puVar21 + -8);
        break;
      }
    }
    if (*(int *)(puVar19 + 200) == 0) {
      sVar3 = *(short *)(iVar12 + 0x52);
      if (*(char *)(*(int *)(puVar19 + 0x114) + 1) == '\x01') {
        *(char *)(iVar12 + 0x53) = *(char *)(iVar12 + 0x53) + '\x02';
        if (0x7ff < *(ushort *)(iVar12 + 0x52)) {
          *(ushort *)(iVar12 + 0x52) = *(ushort *)(iVar12 + 0x52) - 0x800;
        }
      }
      else {
        *(short *)(iVar12 + 0x52) = sVar3 + -0x200;
      }
      *(undefined4 *)(puVar19 + -4) = 0xd3a74;
      uVar11 = FUN_000d2510();
      *(undefined4 *)(puVar19 + 0xb8) = uVar11;
      *(short *)(iVar12 + 0x52) = sVar3;
    }
    else {
      *(undefined4 *)(puVar19 + -4) = 0xd39f8;
      uVar11 = FUN_000d2510();
      *(undefined4 *)(puVar19 + 0xb8) = uVar11;
    }
    if ((*(int *)(puVar19 + 200) == 0) ||
       (*(int *)(puVar19 + 0xb8) != *(int *)(*(int *)(puVar19 + 0x114) + 0xd))) {
      *(short *)(puVar19 + 0x70) =
           (short)((uint)(*(int *)(puVar19 + 300) *
                         (&DAT_001927e0)[*(int *)(*(int *)(puVar19 + 0x114) + 0xd)]) >> 0x10) +
           *(short *)(iVar12 + 0xd);
      *(short *)(puVar19 + 0x72) =
           *(short *)(iVar12 + 0xf) +
           (short)((uint)-(*(int *)(puVar19 + 300) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(puVar19 + 0x114) + 0xd)] >> 8)
                  >> 8);
      *(undefined4 *)(puVar19 + -4) = 0xd3b16;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(puVar19 + 0x74) = uVar8;
      *(undefined4 *)(puVar19 + -4) = 0xd3b26;
      iVar14 = FUN_0007e868();
      if (iVar14 == 4) {
        *(undefined4 *)(puVar19 + -4) = 0xd3b47;
        uVar9 = FUN_000d3f64();
        uVar20 = *(ushort *)(iVar12 + 0x56);
        *(uint *)(puVar19 + 0xd4) = uVar9;
        uVar20 = *(ushort *)(&DAT_0019073b + (uint)uVar20 * 2) / 2;
        *(undefined2 *)(puVar19 + 0x68) = *(undefined2 *)(iVar12 + 0xd);
        *(undefined2 *)(puVar19 + 0x6a) = *(undefined2 *)(iVar12 + 0xf);
        if ((uVar9 & 1) != 0) {
          uVar2 = *(ushort *)(iVar12 + 0xd);
          if ((ushort)*(undefined4 *)(puVar19 + 0x70) < uVar2) {
            *(ushort *)(puVar19 + 0x68) = uVar2 - uVar20;
            puVar19[0x68] = 1;
            *(ushort *)(puVar19 + 0x68) = *(short *)(puVar19 + 0x68) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x68) = uVar2 + uVar20;
            puVar19[0x68] = 0xff;
            *(ushort *)(puVar19 + 0x68) = *(short *)(puVar19 + 0x68) - uVar20;
          }
          *(undefined4 *)(puVar19 + -4) = 0xd3bca;
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(puVar19 + 0x6c) = uVar8;
        }
        if ((puVar19[0xd4] & 2) != 0) {
          uVar2 = *(ushort *)(iVar12 + 0xf);
          if (*(ushort *)(puVar19 + 0x72) < uVar2) {
            *(ushort *)(puVar19 + 0x6a) = uVar2 - uVar20;
            puVar19[0x6a] = 1;
            *(ushort *)(puVar19 + 0x6a) = *(short *)(puVar19 + 0x6a) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x6a) = uVar2 + uVar20;
            puVar19[0x6a] = 0xff;
            *(ushort *)(puVar19 + 0x6a) = *(short *)(puVar19 + 0x6a) - uVar20;
          }
          *(undefined4 *)(puVar19 + -4) = 0xd3c1a;
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(puVar19 + 0x6c) = uVar8;
        }
        if ((puVar19[0xd4] & 4) != 0) {
          uVar2 = *(ushort *)(iVar12 + 0xd);
          if (*(ushort *)(puVar19 + 0x70) < uVar2) {
            *(ushort *)(puVar19 + 0x68) = uVar2 - uVar20;
            puVar19[0x68] = 1;
            *(ushort *)(puVar19 + 0x68) = *(short *)(puVar19 + 0x68) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x68) = uVar2 + uVar20;
            puVar19[0x68] = 0xff;
            *(ushort *)(puVar19 + 0x68) = *(short *)(puVar19 + 0x68) - uVar20;
          }
          uVar2 = *(ushort *)(iVar12 + 0xf);
          if (*(ushort *)(puVar19 + 0x72) < uVar2) {
            *(ushort *)(puVar19 + 0x6a) = uVar2 - uVar20;
            puVar19[0x6a] = 1;
            *(ushort *)(puVar19 + 0x6a) = *(short *)(puVar19 + 0x6a) + uVar20;
          }
          else {
            *(ushort *)(puVar19 + 0x6a) = uVar2 + uVar20;
            puVar19[0x6a] = 0xff;
            *(ushort *)(puVar19 + 0x6a) = *(short *)(puVar19 + 0x6a) - uVar20;
          }
          *(undefined4 *)(puVar19 + -4) = 0xd3ca3;
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(puVar19 + 0x6c) = uVar8;
        }
        *(undefined4 *)(puVar19 + 0x70) = *(undefined4 *)(puVar19 + 0x68);
        *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x74) =
             *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x6c);
        if (((short)*(undefined4 *)(puVar19 + 0x70) != *(short *)(iVar12 + 0xd)) ||
           ((short)*(undefined4 *)(puVar19 + 0x72) != *(short *)(iVar12 + 0xf))) {
          *(undefined4 *)(iVar12 + 0xd) = *(undefined4 *)(puVar19 + 0x70);
          *(undefined2 *)(iVar12 + 0x11 + (uint)bVar24 * -8) =
               *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x74);
          *(undefined4 *)(puVar19 + -4) = 0xd3ce0;
          uVar11 = FUN_000dc440();
          *(undefined4 *)(*(int *)(puVar19 + 0x114) + 9) = uVar11;
          puVar19[0x148] = 1;
        }
      }
    }
    puVar21 = (undefined4 *)puVar19;
    if (puVar19[0x148] == '\0') {
      iVar14 = *(int *)(puVar19 + 0x114);
      *(undefined4 *)(iVar14 + 0xd) = *(undefined4 *)(puVar19 + 0xb8);
      *(undefined2 *)(iVar12 + 0x52) = *(undefined2 *)(iVar14 + 0xd);
      *(short *)(puVar19 + 0x70) =
           *(short *)(iVar12 + 0xd) +
           (short)((uint)(*(int *)(puVar19 + 300) * (&DAT_001927e0)[*(int *)(iVar14 + 0xd)]) >> 0x10
                  );
      *(short *)(puVar19 + 0x72) =
           (short)((uint)-(*(int *)(puVar19 + 300) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(puVar19 + 0x114) + 0xd)] >> 8)
                  >> 8) + *(short *)(iVar12 + 0xf);
      *(undefined4 *)(puVar19 + -4) = 0xd3d7f;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(puVar19 + 0x74) = uVar8;
      *(uint *)(puVar19 + -4) = (uint)(byte)puVar19[0x164];
      *(undefined4 *)(puVar19 + -8) = extraout_ECX_06;
      puVar21 = (undefined4 *)(puVar19 + -0xc);
      *(undefined4 *)(puVar19 + -0xc) = *(undefined4 *)(puVar19 + 0x120);
      *(undefined4 *)(puVar19 + -0x10) = 0xd3db8;
      FUN_000d5624();
      *(undefined4 *)(iVar12 + 0xd) = *(undefined4 *)(puVar19 + 0x70);
      *(undefined2 *)(iVar12 + 0x11 + (uint)bVar24 * -8) =
           *(undefined2 *)(puVar19 + (uint)bVar24 * -8 + 0x74);
    }
    iVar14 = *(int *)((int)puVar21 + 300);
    iVar15 = *(int *)((int)puVar21 + 0x104);
    *(undefined4 *)((int)puVar21 + -4) = 0xd3de1;
    iVar13 = FUN_000dc324();
    *(int *)((int)puVar21 + 0x104) = iVar15 + iVar14;
    if ((iVar13 < *(int *)((int)puVar21 + 0x10c)) &&
       (*(int *)((int)puVar21 + 0x10c) = iVar13, iVar13 < 0x10000)) {
      *(int *)((int)puVar21 + 0x10c) = -iVar13;
      break;
    }
    iVar14 = *(int *)((int)puVar21 + 200);
    *(int *)((int)puVar21 + 200) = iVar14 + 1;
  } while (iVar14 + 1 < 100);
  iVar15 = puVar21[0x41] * puVar21[0x41];
  iVar14 = puVar21[0x43];
  if (iVar14 < 0) {
    puVar21[0x43] = iVar14 - iVar15;
  }
  else {
    puVar21[0x43] = iVar14 + iVar15;
  }
  uVar11 = puVar21[0x4e];
  *(undefined4 *)(iVar12 + 0xd) = puVar21[0x1e];
  *(undefined2 *)(iVar12 + 0x11 + (uint)bVar24 * -8) =
       *(undefined2 *)(puVar21 + (uint)bVar24 * -2 + 0x1f);
  puVar22 = (undefined4 *)puVar21[0x45];
  *(short *)(iVar12 + 0x52) = (short)uVar11;
  puVar23 = puVar21;
  for (iVar12 = 0xb; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar22 = *puVar23;
    puVar23 = puVar23 + (uint)bVar24 * -2 + 1;
    puVar22 = puVar22 + (uint)bVar24 * -2 + 1;
  }
  *(undefined1 *)puVar22 = *(undefined1 *)puVar23;
  iVar12 = puVar21[0x2a];
  if (iVar12 < 0) {
    if (((int)puVar21[0x43] < 0) && (iVar12 < (int)puVar21[0x43])) {
LAB_000d3eb4:
      *(uint *)puVar21[0x2d] = (uint)*(ushort *)(puVar21 + 0x4d);
      puVar19 = (undefined1 *)puVar21[0x39];
      uVar1 = *(undefined1 *)(puVar21 + 0x53);
      goto LAB_000d3ed5;
    }
  }
  else if (((int)puVar21[0x43] < 0) || ((int)puVar21[0x43] <= iVar12)) goto LAB_000d3eb4;
  *(uint *)puVar21[0x2d] = (uint)*(ushort *)(puVar21 + 0x50);
  puVar19 = (undefined1 *)puVar21[0x39];
  uVar1 = *(undefined1 *)(puVar21 + 0x5b);
LAB_000d3ed5:
  *puVar19 = uVar1;
  return 1;
}

/******************************************************************************
 * Function : sub_0d3ee8 (Ghidra: FUN_000d3ee8)
 * Prototype: bool sub_0d3ee8(void);
 * Address  : 0xd3ee8 (Size: 111 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x7e868, 0xb28e8
 ******************************************************************************/
bool FUN_000d3ee8(void)

{
  short sVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  int in_EDX;
  
  sVar1 = *(short *)(in_EAX + 0xd) + (short)((uint)((&DAT_001927e0)[in_EDX] * in_ECX) >> 0x10);
  uVar2 = FUN_000b28e8(sVar1);
  iVar3 = FUN_0007e868(sVar1,uVar2);
  return iVar3 != 4;
}

/******************************************************************************
 * Function : sub_0d3f64 (Ghidra: FUN_000d3f64)
 * Prototype: byte sub_0d3f64(void);
 * Address  : 0xd3f64 (Size: 199 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xd1ae0, 0xd29ac, 0xd4188
 * Callees  : 1 -> 0x7e868
 ******************************************************************************/
byte FUN_000d3f64(void)

{
  int in_EAX;
  int iVar1;
  undefined2 *in_EDX;
  byte bVar2;
  
  iVar1 = FUN_0007e868(*in_EDX,*(undefined2 *)(in_EAX + 0x11));
  bVar2 = iVar1 == 4;
  iVar1 = FUN_0007e868(*(undefined2 *)(in_EAX + 0xd),*(undefined2 *)(in_EAX + 0x11));
  if (iVar1 == 4) {
    bVar2 = bVar2 | 2;
  }
  if ((bVar2 == 0) && (iVar1 = FUN_0007e868(*in_EDX,*(undefined2 *)(in_EAX + 0x11)), iVar1 == 4)) {
    bVar2 = 4;
  }
  return bVar2;
}

/******************************************************************************
 * Function : sub_0d402c (Ghidra: FUN_000d402c)
 * Prototype: undefined4 sub_0d402c(int param_1);
 * Address  : 0xd402c (Size: 348 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xd1ae0, 0xd29ac, 0xd4188
 * Callees  : 3 -> 0x10c1a, 0x7e868, 0xb28e8
 ******************************************************************************/
undefined4 FUN_000d402c(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *in_EDX;
  byte bVar7;
  short local_1c;
  ushort local_18 [6];
  
  bVar7 = 0;
  iVar5 = FUN_00010c1a();
  iVar5 = (&DAT_001927e0)[iVar5];
  local_1c = (short)*(undefined4 *)in_EDX;
  local_18[(uint)bVar7 * -4] = in_EDX[(uint)bVar7 * -4 + 2];
  uVar1 = local_1c + (short)((uint)(iVar5 * param_1) >> 0x10);
  local_18[0] = FUN_000b28e8();
  uVar2 = *in_EDX;
  if (uVar2 < uVar1) {
    uVar2 = uVar2 + (short)param_1;
  }
  else if (uVar1 < uVar2) {
    uVar2 = uVar2 - (short)param_1;
  }
  uVar3 = FUN_000b28e8();
  uVar1 = *in_EDX;
  uVar4 = FUN_000b28e8(uVar1);
  iVar5 = FUN_0007e868(uVar1,uVar4,uVar2,uVar3);
  if (((iVar5 == 4) || (iVar5 = FUN_0007e868(uVar1,uVar4,uVar2,uVar3), iVar5 == 4)) ||
     (iVar5 = FUN_0007e868(uVar1,uVar4,uVar2,uVar3), iVar5 == 4)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

/******************************************************************************
 * Function : dk_ve_been_pushing_very_0d4188 (Ghidra: FUN_000d4188)
 * Prototype: undefined4 dk_ve_been_pushing_very_0d4188(void);
 * Address  : 0xd4188 (Size: 5275 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp:1699 ("I've been pushing for a very long time now..."); routes.cpp:1848 ("I've been given a shite position"); routes.cpp:1848 ("I've been given a shite position"); routes.cpp:1852 ("It's even more shit than I first thought")
 * Naming   : String 'I've been pushing for a very long time now...'
 * Callers  : 1 -> 0xb4c30
 * Callees  : 15 -> 0x10c1a, 0x10c5f, 0x7e868, 0x7f310, 0xb28e8, 0xd2480, 0xd2510, 0xd29ac, 0xd3f64, 0xd402c ...
 * Strings  :
 *   - 0x16c6a9: "routes.cpp"
 *   - 0x16c6d5: "routes.cpp"
 *   - 0x16c709: "routes.cpp"
 *   - 0x16c67b: "I've been pushing for a very long time now..."
 *   - 0x16c6b4: "I've been given a shite position"
 *   - 0x16c6e0: "It's even more shit than I first thought"
 ******************************************************************************/
undefined4 FUN_000d4188(void)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined2 uVar8;
  short sVar9;
  int in_EAX;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  char extraout_CL_02;
  char extraout_CL_03;
  char extraout_CL_04;
  char extraout_CL_05;
  char extraout_CL_06;
  char extraout_CL_07;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  int extraout_ECX_05;
  byte bVar14;
  undefined4 *in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  byte unaff_BL;
  ushort uVar15;
  undefined4 **ppuVar16;
  undefined4 *puVar17;
  int *piVar18;
  byte bVar19;
  longdouble lVar20;
  undefined2 auStack_878 [1010];
  undefined4 *local_94;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  ushort local_80 [6];
  undefined2 local_74;
  undefined2 local_72;
  undefined1 local_70;
  char local_6f;
  undefined1 local_6e;
  char local_6d;
  undefined4 local_6c;
  undefined2 local_68 [8];
  ushort *local_58;
  int local_54;
  uint local_50;
  int local_48;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined4 *local_30;
  uint local_2c;
  uint local_20;
  uint local_1c;
  byte local_14;
  
  bVar19 = 0;
  piVar18 = (int *)local_88;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  pcVar1 = (char *)(iVar3 + 0x1ea);
  local_38 = (undefined4 *)(uint)*(ushort *)(iVar3 + 0xc4);
  local_34 = 0x21;
  local_2c = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  local_14 = unaff_BL | '\x01' << (*(byte *)(in_EAX + 6) & 0x1f);
  cVar7 = *pcVar1;
  local_48 = in_EAX;
  local_30 = in_EDX;
  if (cVar7 != '\x01') {
    if (cVar7 == '\x02') {
      local_8c = 0xd49e8;
      iVar10 = FUN_000dc440();
      if (0x10 < iVar10) {
        local_8c = 0xd49fc;
        iVar10 = FUN_000dc440();
        if (iVar10 <= *(int *)(iVar3 + 499)) {
          local_8c = 0xd4a1b;
          iVar10 = FUN_0007e868();
          if (iVar10 == 0) {
            return 1;
          }
        }
        *pcVar1 = '\x01';
        *(undefined4 *)(iVar3 + 0x20b) = *local_30;
        *(undefined2 *)(iVar3 + 0x20f + (uint)bVar19 * -8) =
             *(undefined2 *)(local_30 + (uint)bVar19 * -2 + 1);
        *(undefined1 *)(iVar3 + 0x1ed) = 0;
        *(undefined1 *)(iVar3 + 0x1ec) = 0;
        *(undefined1 *)(iVar3 + 0x1ee) = 0;
        return 1;
      }
      local_8c = 0xd4a5a;
      iVar10 = FUN_000dc440();
      if (iVar10 < *(int *)(iVar3 + 0x1ef)) {
        local_8c = (uint)local_14;
        piVar18 = &local_90;
        local_90 = 1;
        local_94 = (undefined4 *)0xd4a80;
        iVar10 = FUN_000d402c();
        if (iVar10 != 0) {
          *pcVar1 = '\x01';
          *(undefined4 *)(iVar3 + 0x20b) = *local_38;
          *(undefined2 *)(iVar3 + 0x20f + (uint)bVar19 * -8) =
               *(undefined2 *)(local_38 + (uint)bVar19 * -2 + 1);
          *(undefined1 *)(iVar3 + 0x1ed) = 0;
          *(undefined1 *)(iVar3 + 0x1ec) = 0;
          *(undefined1 *)(iVar3 + 0x1ee) = 0;
          return 1;
        }
      }
      if ((uint)*(ushort *)(*(int *)((int)piVar18 + 0x40) + 0x52) != *(uint *)(iVar3 + 0x1f7)) {
        return 1;
      }
      *(undefined4 *)((int)piVar18 + -4) = 0xd4ad5;
      iVar13 = FUN_000d2510();
      iVar10 = *(int *)(iVar3 + 0x1f7);
      *(int *)((int)piVar18 + 0x34) = iVar13;
      if (iVar13 != iVar10) {
        *(short *)((int)piVar18 + 0x18) =
             (short)((uint)(*(int *)((int)piVar18 + 0x50) * (&DAT_001927e0)[iVar10]) >> 0x10) +
             *(short *)(*(int *)((int)piVar18 + 0x40) + 0xd);
        *(short *)((int)piVar18 + 0x1a) =
             (short)((uint)-(*(int *)((int)piVar18 + 0x50) *
                             (int)(&PTR_LAB_00192fe0)[*(int *)(iVar3 + 0x1f7)] >> 8) >> 8) +
             *(short *)(*(int *)((int)piVar18 + 0x40) + 0xf);
        *(undefined4 *)((int)piVar18 + -4) = 0xd4b3f;
        uVar8 = FUN_000b28e8();
        *(undefined2 *)((int)piVar18 + 0x1c) = uVar8;
        *(undefined4 *)((int)piVar18 + -4) = 0xd4b55;
        iVar10 = FUN_0007e868();
        if (iVar10 == 4) {
          iVar10 = *(int *)((int)piVar18 + 0x40);
          *(undefined2 **)((int)piVar18 + 0x4c) = (undefined2 *)((int)piVar18 + 0x18);
          *(undefined4 *)((int)piVar18 + -4) = 0xd4b7b;
          uVar11 = FUN_000d3f64();
          *(uint *)((int)piVar18 + 0x48) = uVar11;
          uVar15 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(iVar10 + 0x56) * 2) / 2;
          *(undefined2 *)((int)piVar18 + 0x28) = *(undefined2 *)(iVar10 + 0xd);
          *(undefined2 *)((int)piVar18 + 0x2a) = *(undefined2 *)(iVar10 + 0xf);
          if ((uVar11 & 1) != 0) {
            uVar2 = *(ushort *)(iVar10 + 0xd);
            if ((ushort)*(undefined4 *)((int)piVar18 + 0x18) < uVar2) {
              *(ushort *)((int)piVar18 + 0x28) = uVar2 - uVar15;
              *(undefined1 *)((int)piVar18 + 0x28) = 1;
              *(short *)((int)piVar18 + 0x28) = *(short *)((int)piVar18 + 0x28) + uVar15;
            }
            else {
              *(ushort *)((int)piVar18 + 0x28) = uVar2 + uVar15;
              *(undefined1 *)((int)piVar18 + 0x28) = 0xff;
              *(short *)((int)piVar18 + 0x28) = *(short *)((int)piVar18 + 0x28) - uVar15;
            }
            *(undefined4 *)((int)piVar18 + -4) = 0xd4bf7;
            uVar8 = FUN_000b28e8();
            *(undefined2 *)((int)piVar18 + 0x2c) = uVar8;
          }
          if ((*(byte *)((int)piVar18 + 0x48) & 2) != 0) {
            uVar2 = *(ushort *)(iVar10 + 0xf);
            if (*(ushort *)(*(int *)((int)piVar18 + 0x4c) + 2) < uVar2) {
              *(ushort *)((int)piVar18 + 0x2a) = uVar2 - uVar15;
              *(undefined1 *)((int)piVar18 + 0x2a) = 1;
              *(short *)((int)piVar18 + 0x2a) = *(short *)((int)piVar18 + 0x2a) + uVar15;
            }
            else {
              *(ushort *)((int)piVar18 + 0x2a) = uVar2 + uVar15;
              *(undefined1 *)((int)piVar18 + 0x2a) = 0xff;
              *(short *)((int)piVar18 + 0x2a) = *(short *)((int)piVar18 + 0x2a) - uVar15;
            }
            *(undefined4 *)((int)piVar18 + -4) = 0xd4c45;
            uVar8 = FUN_000b28e8();
            *(undefined2 *)((int)piVar18 + 0x2c) = uVar8;
          }
          if ((*(byte *)((int)piVar18 + 0x48) & 4) != 0) {
            uVar2 = *(ushort *)(iVar10 + 0xd);
            if (**(ushort **)((int)piVar18 + 0x4c) < uVar2) {
              *(ushort *)((int)piVar18 + 0x28) = uVar2 - uVar15;
              *(undefined1 *)((int)piVar18 + 0x28) = 1;
              *(short *)((int)piVar18 + 0x28) = *(short *)((int)piVar18 + 0x28) + uVar15;
            }
            else {
              *(ushort *)((int)piVar18 + 0x28) = uVar2 + uVar15;
              *(undefined1 *)((int)piVar18 + 0x28) = 0xff;
              *(short *)((int)piVar18 + 0x28) = *(short *)((int)piVar18 + 0x28) - uVar15;
            }
            uVar2 = *(ushort *)(iVar10 + 0xf);
            if (*(ushort *)(*(int *)((int)piVar18 + 0x4c) + 2) < uVar2) {
              *(ushort *)((int)piVar18 + 0x2a) = uVar2 - uVar15;
              *(undefined1 *)((int)piVar18 + 0x2a) = 1;
              *(short *)((int)piVar18 + 0x2a) = *(short *)((int)piVar18 + 0x2a) + uVar15;
            }
            else {
              *(ushort *)((int)piVar18 + 0x2a) = uVar2 + uVar15;
              *(undefined1 *)((int)piVar18 + 0x2a) = 0xff;
              *(short *)((int)piVar18 + 0x2a) = *(short *)((int)piVar18 + 0x2a) - uVar15;
            }
            *(undefined4 *)((int)piVar18 + -4) = 0xd4ccf;
            uVar8 = FUN_000b28e8();
            *(undefined2 *)((int)piVar18 + 0x2c) = uVar8;
          }
          puVar4 = *(undefined4 **)((int)piVar18 + 0x4c);
          *puVar4 = *(undefined4 *)((int)piVar18 + 0x28);
          *(undefined2 *)(puVar4 + (uint)bVar19 * -2 + 1) =
               *(undefined2 *)((int)piVar18 + ((uint)bVar19 * -4 + 0x16) * 2);
          *(undefined4 *)((int)piVar18 + -4) = 0xd4cf1;
          iVar10 = FUN_000dc440();
          if (0x10 < iVar10) {
            *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)((int)piVar18 + 0x18);
            *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
                 *(undefined2 *)((int)piVar18 + ((uint)bVar19 * -4 + 0xe) * 2);
            *(undefined4 *)((int)piVar18 + -4) = 0xd4d0a;
            uVar12 = FUN_000dc440();
            *(undefined4 *)(iVar3 + 499) = uVar12;
            return 1;
          }
        }
      }
      *(undefined4 *)((int)piVar18 + -4) = 0xd4d25;
      cVar7 = FUN_000d2480();
      if (cVar7 != '\0') {
        puVar4 = *(undefined4 **)((int)piVar18 + 0x58);
        *pcVar1 = '\x01';
        *(undefined4 *)(iVar3 + 0x20b) = *puVar4;
        *(undefined2 *)(iVar3 + 0x20f + (uint)bVar19 * -8) =
             *(undefined2 *)(puVar4 + (uint)bVar19 * -2 + 1);
        *(undefined1 *)(iVar3 + 0x1ed) = 0;
        *(undefined1 *)(iVar3 + 0x1ec) = 0;
        *(undefined1 *)(iVar3 + 0x1ee) = 0;
        return 1;
      }
      iVar10 = *(int *)((int)piVar18 + 0x34);
      *(int *)(iVar3 + 0x1f7) = iVar10;
      iVar13 = *(int *)((int)piVar18 + 0x40);
      *(short *)(iVar3 + 0x205) =
           (short)((uint)(*(int *)((int)piVar18 + 0x50) * (&DAT_001927e0)[iVar10]) >> 0x10) +
           *(short *)(iVar13 + 0xd);
      *(short *)(iVar3 + 0x207) =
           *(short *)(iVar13 + 0xf) +
           (short)((uint)-(*(int *)((int)piVar18 + 0x50) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(iVar3 + 0x1f7)] >> 8) >> 8);
      *(undefined4 *)((int)piVar18 + -4) = 0xd4dad;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(iVar3 + 0x209) = uVar8;
      uVar12 = *(undefined4 *)((int)piVar18 + 0x54);
      *(uint *)((int)piVar18 + -4) = (uint)*(byte *)((int)piVar18 + 0x74);
      uVar5 = *(undefined4 *)((int)piVar18 + 0x50);
      *(undefined4 *)((int)piVar18 + 0x18) = *(undefined4 *)(iVar3 + 0x205);
      *(undefined2 *)((int)piVar18 + ((uint)bVar19 * -4 + 0xe) * 2) =
           *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8);
      *(undefined4 *)((int)piVar18 + -8) = uVar5;
      *(undefined4 *)((int)piVar18 + -0xc) = uVar12;
      *(undefined4 *)((int)piVar18 + -0x10) = 0xd4ddb;
      FUN_000d5624();
      *(undefined4 *)((int)piVar18 + -0x10) = 0xd4deb;
      iVar10 = FUN_000dc440();
      if (0x10 < iVar10) {
        *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)((int)piVar18 + 0xc);
        *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
             *(undefined2 *)((int)piVar18 + ((uint)bVar19 * -4 + 8) * 2);
      }
      *(undefined4 *)((int)piVar18 + -0x10) = 0xd4e0d;
      uVar12 = FUN_000dc440();
      *(undefined4 *)(iVar3 + 499) = uVar12;
      *(uint *)((int)piVar18 + 0x24) = (uint)*(byte *)((int)piVar18 + 0x68);
      *(undefined4 *)((int)piVar18 + -0x10) = 0xd4e2b;
      iVar10 = FUN_0007e868();
      if (iVar10 == 4) {
        *(undefined4 *)((int)piVar18 + -0x10) = 0xd4e48;
        FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 1699, "I've been pushing for a very long time now...") */
        *(undefined4 *)((int)piVar18 + -0x10) = 0xd4e4d;
        FUN_000ddaf8(); /* LbErrorLog("routes.cpp", line 1848, "I've been given a shite position") */
        iVar10 = *(int *)(iVar3 + 0x1f7);
        *(short *)((int)piVar18 + -4) =
             (short)((uint)(*(int *)((int)piVar18 + 0x44) * (&DAT_001927e0)[iVar10]) >> 0x10) +
             *(short *)(*(int *)((int)piVar18 + 0x34) + 0xd);
        *(short *)((int)piVar18 + -2) =
             (short)((uint)-(*(int *)((int)piVar18 + 0x44) * (int)(&PTR_LAB_00192fe0)[iVar10] >> 8)
                    >> 8) + *(short *)(*(int *)((int)piVar18 + 0x34) + 0xf);
        *(undefined4 *)((int)piVar18 + -0x10) = 0xd4ea8;
        uVar8 = FUN_000b28e8();
        *(undefined2 *)piVar18 = uVar8;
        *(undefined4 *)((int)piVar18 + -0x10) = 0xd4ebe;
        iVar10 = FUN_0007e868();
        if (iVar10 == 4) {
          *(undefined4 *)((int)piVar18 + -0x10) = 0xd4edf;
          FUN_000ddaf0(); /* LbWarnLog("routes.cpp", line 1848, "I've been given a shite position") */
        }
        puVar4 = *(undefined4 **)((int)piVar18 + 0x4c);
        *pcVar1 = '\x01';
        *(undefined4 *)(iVar3 + 0x20b) = *puVar4;
        *(undefined2 *)(iVar3 + 0x20f + (uint)bVar19 * -8) =
             *(undefined2 *)(puVar4 + (uint)bVar19 * -2 + 1);
        *(undefined1 *)(iVar3 + 0x1ed) = 0;
        *(undefined1 *)(iVar3 + 0x1ec) = 0;
        *(undefined1 *)(iVar3 + 0x1ee) = 0;
        iVar10 = *(int *)((int)piVar18 + 0x34);
        *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)(iVar10 + 0xd);
        *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
             *(undefined2 *)(iVar10 + 0x11 + (uint)bVar19 * -8);
        return 1;
      }
      if (iVar10 == 1) {
        *(undefined4 *)((int)piVar18 + -0x10) = 0;
        *(undefined4 *)((int)piVar18 + -0x14) = 0xd4f30;
        uVar15 = FUN_0007f310();
        *(ushort *)(iVar3 + 0x1ff) = uVar15;
        uVar11 = ((uint)uVar15 % 0x100) / 3;
        *(char *)((int)piVar18 + 9) = ((char)(uVar11 << 2) - (char)uVar11) + '\x01';
        *(undefined1 *)((int)piVar18 + 8) = 0x80;
        uVar6 = (ulonglong)(longlong)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3;
        *(char *)((int)piVar18 + 0xb) = ((char)((int)uVar6 << 2) - (char)uVar6) + '\x01';
        *(undefined1 *)((int)piVar18 + 10) = 0x80;
        *(undefined4 *)((int)piVar18 + 0x54) = 0xffff;
        bVar14 = 0;
        while (bVar14 < 4) {
          *(uint *)((int)piVar18 + 0x5c) =
               (uint)(ushort)(short)*(char *)((int)&DAT_0018b67b + (uint)bVar14 * 2 + 3);
          *(uint *)((int)piVar18 + 0x50) = (uint)*(ushort *)((int)piVar18 + 8);
          *(undefined4 *)((int)piVar18 + -0x14) = 0xd4fec;
          lVar20 = (longdouble)FUN_000e8d50();
          *(int *)((int)piVar18 + 0x50) = (int)ROUND(lVar20);
          *(short *)((int)piVar18 + 0x10) = (short)*(undefined4 *)((int)piVar18 + 0x50);
          *(uint *)((int)piVar18 + 0x5c) =
               CONCAT22((short)((uint)*(undefined4 *)((int)piVar18 + 0x50) >> 0x10),
                        (short)(char)(&DAT_0018b67f)[extraout_EDX_01]);
          *(uint *)((int)piVar18 + 0x50) = (uint)*(ushort *)((int)piVar18 + 10);
          *(undefined4 *)((int)piVar18 + -0x14) = 0xd5021;
          lVar20 = (longdouble)FUN_000e8d50();
          *(int *)((int)piVar18 + 0x50) = (int)ROUND(lVar20);
          *(short *)((int)piVar18 + 0x12) = (short)*(undefined4 *)((int)piVar18 + 0x50);
          cVar7 = extraout_CL_05;
          if ((*(byte *)((int)&DAT_00279203 +
                        ((uint)*(byte *)((int)piVar18 + 0x13) * 0x100 +
                        (uint)*(byte *)((int)piVar18 + 0x11)) * 5) & 0x10) == 0) {
            *(undefined4 *)((int)piVar18 + -0x14) = 0xd505a;
            iVar10 = FUN_000dc440();
            cVar7 = extraout_CL_06;
            if (iVar10 < (int)(uint)*(ushort *)((int)piVar18 + 0x54)) {
              *(undefined4 *)((int)piVar18 + -0x14) = 0xd5078;
              uVar12 = FUN_000dc440();
              *(undefined4 *)((int)piVar18 + 0x54) = uVar12;
              *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)((int)piVar18 + 0x10);
              *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
                   *(undefined2 *)((int)piVar18 + ((uint)bVar19 * -4 + 10) * 2);
              cVar7 = extraout_CL_07;
            }
          }
          bVar14 = cVar7 + 1;
        }
        *(undefined4 *)((int)piVar18 + -0x14) = 0xd5093;
        uVar12 = FUN_00010c1a();
        *(undefined1 *)(iVar3 + 0x1ec) = 0;
        *(undefined4 *)(iVar3 + 0x1f7) = uVar12;
        *(undefined1 *)(iVar3 + 0x1ed) = 0;
        *(undefined4 *)((int)piVar18 + -0x14) = 0xd50a7;
        uVar12 = FUN_000dc440();
        *pcVar1 = '\x04';
        *(undefined4 *)(iVar3 + 499) = uVar12;
        return 1;
      }
      *(undefined4 *)((int)piVar18 + -0x10) = 0xd50c4;
      uVar12 = FUN_000dc440();
      *(undefined4 *)(iVar3 + 499) = uVar12;
      return 1;
    }
    if (cVar7 != '\x04') {
      if (cVar7 == '\x03') {
        local_8c = 0xd5267;
        iVar10 = FUN_000dc440();
        if (0x10 < iVar10) {
          local_8c = 0xd5275;
          uVar12 = FUN_00010c1a();
          *pcVar1 = '\x03';
          *(undefined4 *)(iVar3 + 0x1f7) = uVar12;
          return 1;
        }
        uVar11 = ((uint)*(ushort *)(iVar3 + 0x1ff) % 0x100) / 3;
        *pcVar1 = '\x03';
        local_70 = 0x80;
        local_6f = ((char)(uVar11 << 2) - (char)uVar11) + '\x01';
        uVar6 = (ulonglong)(longlong)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3;
        local_6d = ((char)((int)uVar6 << 2) - (char)uVar6) + '\x01';
        local_6e = 0x80;
        local_8c = 0xd52f9;
        uVar12 = FUN_00010c1a();
        *(undefined4 *)(iVar3 + 0x1f7) = uVar12;
        local_8c = 0xd530d;
        iVar10 = FUN_00010c5f();
        if (iVar10 != 0) {
          return 1;
        }
        uVar6 = ((ulonglong)(longlong)(int)(uint)*(ushort *)(iVar3 + 0x1ff) % 0x100) / 3;
        *pcVar1 = '\x05';
        sVar9 = ((short)((int)uVar6 << 2) - (short)uVar6) +
                (short)((uint)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3) * 0x300 + 0x101;
        *(short *)(iVar3 + 0x1ff) = sVar9;
        *(short *)(iVar3 + 0x201) = sVar9;
      }
      else if (cVar7 == '\x06') {
        uVar15 = (short)(((ulonglong)(longlong)(int)(uint)*(ushort *)(iVar3 + 0x1ff) % 0x100) / 3) *
                 3 + (short)((uint)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3) * 0x300 + 0x101
        ;
        *(ushort *)(iVar3 + 0x1ff) = uVar15;
        *(ushort *)(iVar3 + 0x201) = uVar15;
        if ((*(byte *)((int)&DAT_00279203 + (uint)uVar15 * 5) & 0x10) == 0) {
          sVar9 = 0x180 - (short)local_2c;
          if (*(char *)(iVar3 + 0x1eb) == '\x01') {
            *(short *)(iVar3 + 0x205) =
                 *(short *)(iVar3 + 0x205) +
                 *(char *)((int)&DAT_0018b67b +
                          (((int)(*(ushort *)(in_EAX + 0x52) + 0x100) >> 9) + 3U & 3) * 2 + 3) *
                 sVar9;
            uVar11 = ((int)(*(ushort *)(in_EAX + 0x52) + 0x100) >> 9) + 3;
          }
          else {
            *(short *)(iVar3 + 0x205) =
                 *(short *)(iVar3 + 0x205) +
                 *(char *)((int)&DAT_0018b67b +
                          (((int)(*(ushort *)(in_EAX + 0x52) + 0x100) >> 9) + 1U & 3) * 2 + 3) *
                 sVar9;
            uVar11 = ((int)(*(ushort *)(in_EAX + 0x52) + 0x100) >> 9) + 1;
          }
          *(short *)(iVar3 + 0x207) =
               *(short *)(iVar3 + 0x207) + (char)(&DAT_0018b67f)[(uVar11 & 3) * 2] * sVar9;
          *(short *)(iVar3 + 0x205) =
               *(short *)(iVar3 + 0x205) +
               *(char *)((int)&DAT_0018b67b +
                        ((int)(*(ushort *)(in_EAX + 0x52) + 0x100) >> 9 & 3U) * 2 + 3) * 0x80;
          cVar7 = (&DAT_0018b67f)[((int)(*(ushort *)(in_EAX + 0x52) + 0x100) >> 9 & 3U) * 2];
          *pcVar1 = '\a';
          *(short *)(iVar3 + 0x207) = *(short *)(iVar3 + 0x207) + cVar7 * 0x80;
          return 1;
        }
      }
      else {
        if (cVar7 != '\x05') {
          if (cVar7 != '\a') {
            return 1;
          }
          local_8c = 0xd55db;
          iVar10 = FUN_000dc440();
          if (0x10 < iVar10) {
            return 1;
          }
          if (*(char *)(iVar3 + 0x1eb) == '\x01') {
            uVar11 = *(ushort *)(local_48 + 0x52) + 0x200;
          }
          else {
            uVar11 = *(ushort *)(local_48 + 0x52) + 0x600;
          }
          *(uint *)(iVar3 + 0x1f7) = uVar11 & 0x7ff;
          *pcVar1 = '\x02';
          return 1;
        }
        uVar15 = (short)(((ulonglong)(longlong)(int)(uint)*(ushort *)(iVar3 + 0x1ff) % 0x100) / 3) *
                 3 + (short)((uint)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3) * 0x300 + 0x101
        ;
        *(ushort *)(iVar3 + 0x1ff) = uVar15;
        *(ushort *)(iVar3 + 0x201) = uVar15;
        if ((*(byte *)((int)&DAT_00279203 + (uint)uVar15 * 5) & 0x10) == 0) {
          *pcVar1 = '\x01';
          return 1;
        }
      }
      return 2;
    }
    local_8c = 0xd50f0;
    iVar10 = FUN_000dc440();
    if (iVar10 < 0x11) {
      uVar11 = ((uint)*(ushort *)(iVar3 + 0x1ff) % 0x100) / 3;
      *pcVar1 = '\x04';
      local_6f = ((char)(uVar11 << 2) - (char)uVar11) + '\x01';
      local_70 = 0x80;
      uVar6 = (ulonglong)(longlong)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3;
      local_6d = ((char)((int)uVar6 << 2) - (char)uVar6) + '\x01';
      local_6e = 0x80;
      local_8c = 0xd51c2;
      uVar12 = FUN_00010c1a();
      *(undefined1 *)(iVar3 + 0x1ec) = 0;
      *(undefined1 *)(iVar3 + 0x1ed) = 0;
      *(undefined4 *)(iVar3 + 499) = 0;
      *(undefined4 *)(iVar3 + 0x1f7) = uVar12;
      local_8c = 0xd51e6;
      iVar10 = FUN_00010c5f();
      if (iVar10 != 0) {
        return 1;
      }
      uVar6 = ((ulonglong)(longlong)(int)(uint)*(ushort *)(iVar3 + 0x1ff) % 0x100) / 3;
      *pcVar1 = '\x06';
      sVar9 = ((short)((int)uVar6 << 2) - (short)uVar6) +
              (short)(((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / extraout_ECX_05) * 0x300 +
              0x101;
      *(short *)(iVar3 + 0x1ff) = sVar9;
      *(short *)(iVar3 + 0x201) = sVar9;
      return 2;
    }
    local_8c = 0xd50fe;
    iVar10 = FUN_000dc440();
    if (*(int *)(iVar3 + 499) < iVar10) {
      *pcVar1 = '\x01';
    }
    else {
      local_8c = 0xd5128;
      iVar10 = FUN_0007e868();
      if (iVar10 == 0) goto LAB_000d5146;
      *pcVar1 = '\x01';
    }
    *(undefined4 *)(iVar3 + 0x20b) = *local_30;
    *(undefined2 *)(iVar3 + 0x20f + (uint)bVar19 * -8) =
         *(undefined2 *)(local_30 + (uint)bVar19 * -2 + 1);
    *(undefined1 *)(iVar3 + 0x1ed) = 0;
    *(undefined1 *)(iVar3 + 0x1ec) = 0;
    *(undefined1 *)(iVar3 + 0x1ee) = 0;
LAB_000d5146:
    *pcVar1 = '\x04';
    return 1;
  }
  local_8c = 0xd421c;
  iVar10 = FUN_000dc440();
  if (*(int *)(iVar3 + 499) <= iVar10) {
    *(undefined1 *)(iVar3 + 0x1ee) = 0;
  }
  ppuVar16 = (undefined4 **)local_88;
  if (*(char *)(iVar3 + 0x1ee) == '\0') {
    local_8c = 0xd4241;
    iVar10 = FUN_00010c1a();
    *(short *)(iVar3 + 0x205) =
         (short)((uint)((int)local_38 * (&DAT_001927e0)[iVar10]) >> 0x10) +
         *(short *)(local_48 + 0xd);
    *(short *)(iVar3 + 0x207) =
         (short)((uint)-((int)local_38 * (int)(&PTR_LAB_00192fe0)[iVar10] >> 8) >> 8) +
         *(short *)(local_48 + 0xf);
    local_8c = 0xd4294;
    uVar8 = FUN_000b28e8();
    *(undefined2 *)(iVar3 + 0x209) = uVar8;
    *(undefined4 *)(iVar3 + 0x1f7) = extraout_ECX;
    local_8c = 0xd42a6;
    FUN_000dc440();
    local_8c = 0xd42b1;
    iVar10 = FUN_000dc440();
    if (extraout_ECX_00 < iVar10) {
      *(undefined4 *)(iVar3 + 0x205) = *local_30;
      *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
           *(undefined2 *)(local_30 + (uint)bVar19 * -2 + 1);
    }
    local_50 = (uint)local_14;
    local_8c = 0xd42e4;
    iVar10 = FUN_0007e868();
    if (iVar10 == 4) {
      local_8c = 0;
      local_90 = 0xd4301;
      iVar10 = FUN_0007f310();
      *(char *)(iVar3 + 0x203) =
           (char)(1 << ((&DAT_002d33ca)
                        [((&DAT_0019033b)[iVar10 % 0x100] +
                         (&DAT_0019033b)
                         [(int)((iVar10 + (iVar10 >> 0x1f) * -0x100) -
                               (uint)((iVar10 >> 0x1f) << 7 < 0)) >> 8] * 0x55) * 6] & 7));
      local_90 = local_54;
      local_94 = local_38;
      cVar7 = FUN_000d29ac();
      iVar10 = local_54;
      if (cVar7 == '\0') {
        *pcVar1 = '\x01';
        *(undefined4 *)(iVar3 + 0x20b) = *local_3c;
        *(undefined2 *)(iVar3 + 0x20f + (uint)bVar19 * -8) =
             *(undefined2 *)(local_3c + (uint)bVar19 * -2 + 1);
        *(undefined1 *)(iVar3 + 0x1ed) = 0;
        *(undefined1 *)(iVar3 + 0x1ec) = 0;
        *(undefined1 *)(iVar3 + 0x1ee) = 0;
        ppuVar16 = &local_94;
      }
      else {
        uVar11 = FUN_000d3f64();
        local_34 = uVar11;
        uVar15 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(iVar10 + 0x56) * 2) / 2;
        local_84 = *(undefined4 *)(iVar10 + 0xd);
        local_58 = (ushort *)(iVar3 + 0x205);
        if ((uVar11 & 1) != 0) {
          uVar2 = *(ushort *)(iVar10 + 0xd);
          local_84._2_2_ = (short)((uint)*(undefined4 *)(iVar10 + 0xd) >> 0x10);
          uVar8 = local_84._2_2_;
          if (*(ushort *)(iVar3 + 0x205) < uVar2) {
            local_84 = CONCAT22(local_84._2_2_,uVar2 - uVar15);
            local_84 = CONCAT31(local_84._1_3_,1);
            local_84._0_2_ = (short)local_84 + uVar15;
          }
          else {
            local_84 = CONCAT22(local_84._2_2_,uVar2 + uVar15);
            local_84 = CONCAT31(local_84._1_3_,0xff);
            local_84._0_2_ = (short)local_84 - uVar15;
          }
          local_84 = CONCAT22(uVar8,(short)local_84);
          local_80[0] = FUN_000b28e8();
          uVar11 = extraout_ECX_01;
        }
        if ((uVar11 & 2) != 0) {
          uVar2 = *(ushort *)(iVar10 + 0xf);
          if (local_58[1] < uVar2) {
            local_84._3_1_ = (undefined1)((ushort)(uVar2 - uVar15) >> 8);
            local_84._0_3_ = CONCAT12(1,(short)local_84);
            local_84._2_2_ = local_84._2_2_ + uVar15;
          }
          else {
            local_84._3_1_ = (undefined1)((ushort)(uVar2 + uVar15) >> 8);
            local_84._0_3_ = CONCAT12(0xff,(short)local_84);
            local_84._2_2_ = local_84._2_2_ - uVar15;
          }
          local_80[0] = FUN_000b28e8();
          uVar11 = extraout_ECX_02;
        }
        if ((uVar11 & 4) != 0) {
          uVar2 = *(ushort *)(iVar10 + 0xd);
          if (*local_58 < uVar2) {
            local_84._1_3_ = (uint3)(byte)((ushort)(uVar2 - uVar15) >> 8);
            local_84 = CONCAT31(local_84._1_3_,1);
            local_84._0_2_ = (short)local_84 + uVar15;
          }
          else {
            local_84._1_3_ = (uint3)(byte)((ushort)(uVar2 + uVar15) >> 8);
            local_84 = CONCAT31(local_84._1_3_,0xff);
            local_84._0_2_ = (short)local_84 - uVar15;
          }
          uVar2 = *(ushort *)(iVar10 + 0xf);
          if (local_58[1] < uVar2) {
            local_84._3_1_ = (undefined1)((ushort)(uVar2 - uVar15) >> 8);
            local_84._0_3_ = CONCAT12(1,(short)local_84);
            local_84._2_2_ = local_84._2_2_ + uVar15;
          }
          else {
            local_84._3_1_ = (undefined1)((ushort)(uVar2 + uVar15) >> 8);
            local_84._0_3_ = CONCAT12(0xff,(short)local_84);
            local_84._2_2_ = local_84._2_2_ - uVar15;
          }
          local_80[0] = FUN_000b28e8();
          uVar11 = extraout_ECX_03;
        }
        *(undefined4 *)local_58 = local_84;
        local_58[(uint)bVar19 * -4 + 2] = local_80[(uint)bVar19 * -4];
        if (uVar11 == 4) {
          iVar10 = *(int *)(iVar3 + 0x1f7);
          if ((iVar10 == 0) || (iVar10 == 0x400)) {
            *(undefined2 *)(iVar3 + 0x207) = *(undefined2 *)(local_54 + 0xf);
          }
          else {
            if ((iVar10 != 0x200) && (iVar10 != 0x600)) goto LAB_000d4551;
            *(undefined2 *)(iVar3 + 0x205) = *(undefined2 *)(local_54 + 0xd);
          }
          uVar8 = FUN_000b28e8();
          *(undefined2 *)(iVar3 + 0x209) = uVar8;
        }
LAB_000d4551:
        *(undefined1 *)(iVar3 + 0x1ee) = 1;
        ppuVar16 = &local_94;
      }
    }
    else {
      ppuVar16 = (undefined4 **)local_88;
      if (iVar10 == 1) {
        puVar17 = &local_8c;
        local_8c = 0;
        local_90 = 0xd4774;
        uVar15 = FUN_0007f310();
        *(ushort *)(iVar3 + 0x1ff) = uVar15;
        uVar11 = ((uint)uVar15 % 0x100) / 3;
        local_74 = CONCAT11(((char)(uVar11 << 2) - (char)uVar11) + '\x01',0x80);
        local_72 = CONCAT11((char)((uint)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3) * '\x03'
                            + '\x01',0x80);
        local_1c = 0xffff;
        bVar14 = 0;
        while (bVar14 < 4) {
          local_20 = (uint)(ushort)(short)*(char *)((int)&DAT_0018b67b + (uint)bVar14 * 2 + 3);
          local_2c = (uint)local_74;
          local_90 = 0xd4830;
          lVar20 = (longdouble)FUN_000e8d50();
          local_6c = CONCAT22(local_6c._2_2_,(short)(int)ROUND(lVar20));
          local_20 = CONCAT22((short)((uint)(int)ROUND(lVar20) >> 0x10),
                              (short)(char)(&DAT_0018b67f)[extraout_EDX]);
          local_2c = (uint)local_72;
          local_90 = 0xd4865;
          lVar20 = (longdouble)FUN_000e8d50();
          uVar11 = local_6c;
          local_2c = (uint)ROUND(lVar20);
          local_6c = CONCAT22((short)local_2c,(undefined2)local_6c);
          cVar7 = extraout_CL;
          if ((*(byte *)((int)&DAT_00279203 +
                        ((uVar11 >> 8 & 0xff) + (local_2c >> 8 & 0xff) * 0x100) * 5) & 0x10) == 0) {
            local_90 = 0xd489e;
            iVar10 = FUN_000dc440();
            cVar7 = extraout_CL_00;
            if (iVar10 < (int)(local_1c & 0xffff)) {
              local_90 = 0xd48bc;
              local_1c = FUN_000dc440();
              *(uint *)(iVar3 + 0x205) = local_6c;
              *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) = local_68[(uint)bVar19 * -4];
              cVar7 = extraout_CL_01;
            }
          }
          bVar14 = cVar7 + 1;
        }
        goto LAB_000d48cb;
      }
    }
  }
  if (*(char *)(iVar3 + 0x1ee) != '\0') {
    bVar14 = *(char *)(iVar3 + 0x1ee) + 1;
    *(byte *)(iVar3 + 0x1ee) = bVar14;
    if (0x20 < bVar14) {
      *(undefined4 *)((int)ppuVar16 + -4) = 0xd4584;
      FUN_000ddaf0(); /* LbErrorLog("routes.cpp", line 1852, "It's even more shit than I first thought") */
    }
    *(int *)((int)ppuVar16 + 0x44) = *(int *)((int)ppuVar16 + 0x40) + 0xd;
    *(undefined4 *)((int)ppuVar16 + -4) = 0xd4599;
    iVar10 = FUN_000dc440();
    if (iVar10 < 0x11) {
      *(undefined1 *)(iVar3 + 0x1ee) = 0;
      *pcVar1 = '\x02';
      iVar10 = *(int *)((int)ppuVar16 + 0x40);
      *(short *)(iVar3 + 0x205) =
           *(short *)(iVar10 + 0xd) +
           (short)((uint)(*(int *)((int)ppuVar16 + 0x50) * (&DAT_001927e0)[*(int *)(iVar3 + 0x1f7)])
                  >> 0x10);
      *(short *)(iVar3 + 0x207) =
           *(short *)(iVar10 + 0xf) +
           (short)((uint)-(*(int *)((int)ppuVar16 + 0x50) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(iVar3 + 0x1f7)] >> 8) >> 8);
      *(undefined4 *)((int)ppuVar16 + -4) = 0xd45f8;
      uVar8 = FUN_000b28e8();
      *(undefined2 *)(iVar3 + 0x209) = uVar8;
      bVar14 = *(byte *)((int)ppuVar16 + 0x74);
      *(undefined4 *)((int)ppuVar16 + 0x18) = *(undefined4 *)(iVar3 + 0x205);
      *(undefined2 *)((int)ppuVar16 + (uint)bVar19 * -8 + 0x1c) =
           *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8);
      *(uint *)((int)ppuVar16 + -4) = (uint)bVar14;
      *(undefined4 *)((int)ppuVar16 + -8) = *(undefined4 *)((int)ppuVar16 + 0x50);
      *(undefined4 *)((int)ppuVar16 + -0xc) = *(undefined4 *)((int)ppuVar16 + 0x54);
      *(undefined4 *)((int)ppuVar16 + -0x10) = 0xd462c;
      FUN_000d5624();
      *(undefined4 *)((int)ppuVar16 + -0x10) = 0xd4639;
      iVar10 = FUN_000dc440();
      if (0x10 < iVar10) {
        *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)((int)ppuVar16 + 0xc);
        *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
             *(undefined2 *)((int)ppuVar16 + (uint)bVar19 * -8 + 0x10);
      }
      *(undefined4 *)((int)ppuVar16 + -0x10) = 0xd4663;
      uVar12 = FUN_000dc440();
      *(undefined4 *)(iVar3 + 499) = uVar12;
      *(undefined4 *)((int)ppuVar16 + -0x10) = 0xd4671;
      iVar10 = FUN_0007e868();
      if (iVar10 == 4) {
        iVar13 = *(int *)((int)ppuVar16 + 0x34);
        *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)(iVar13 + 0xd);
        *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
             *(undefined2 *)(iVar13 + 0x11 + (uint)bVar19 * -8);
        *(undefined4 *)(iVar3 + 499) = 0;
      }
      *(undefined4 *)((int)ppuVar16 + -0x10) = 0xd469e;
      uVar12 = FUN_000dc440();
      *(undefined4 *)(iVar3 + 0x1ef) = uVar12;
      if (iVar10 == 1) {
        puVar17 = (undefined4 *)((int)ppuVar16 + -0x10);
        *(undefined4 *)((int)ppuVar16 + -0x10) = 0;
        *(undefined4 *)((int)ppuVar16 + -0x14) = 0xd46bf;
        uVar15 = FUN_0007f310();
        *(ushort *)(iVar3 + 0x1ff) = uVar15;
        uVar11 = ((uint)uVar15 % 0x100) / 3;
        *(char *)((int)ppuVar16 + 9) = ((char)(uVar11 << 2) - (char)uVar11) + '\x01';
        *(undefined1 *)((int)ppuVar16 + 8) = 0x80;
        uVar6 = (ulonglong)(longlong)((int)(uint)*(ushort *)(iVar3 + 0x1ff) >> 8) / 3;
        *(undefined1 *)((int)ppuVar16 + 10) = 0x80;
        *(undefined4 *)((int)ppuVar16 + 0x58) = 0xffff;
        *(char *)((int)ppuVar16 + 0xb) = ((char)((int)uVar6 << 2) - (char)uVar6) + '\x01';
        *(undefined4 *)((int)ppuVar16 + -0x14) = 0xd4736;
        FUN_00010c1a();
        uVar11 = extraout_ECX_04;
        while ((uVar11 & 0xff) < 4) {
          *(uint *)((int)ppuVar16 + 0x5c) =
               (uint)(ushort)(short)*(char *)((int)&DAT_0018b67b + (uVar11 & 0xff) * 2 + 3);
          *(uint *)((int)ppuVar16 + 0x50) = (uint)*(ushort *)((int)ppuVar16 + 8);
          *(undefined4 *)((int)ppuVar16 + -0x14) = 0xd4933;
          lVar20 = (longdouble)FUN_000e8d50();
          *(int *)((int)ppuVar16 + 0x50) = (int)ROUND(lVar20);
          *(short *)((int)ppuVar16 + 0x10) = (short)*(undefined4 *)((int)ppuVar16 + 0x50);
          *(uint *)((int)ppuVar16 + 0x5c) =
               CONCAT22((short)((uint)*(undefined4 *)((int)ppuVar16 + 0x50) >> 0x10),
                        (short)(char)(&DAT_0018b67f)[extraout_EDX_00]);
          *(uint *)((int)ppuVar16 + 0x50) = (uint)*(ushort *)((int)ppuVar16 + 10);
          *(undefined4 *)((int)ppuVar16 + -0x14) = 0xd4968;
          lVar20 = (longdouble)FUN_000e8d50();
          *(int *)((int)ppuVar16 + 0x50) = (int)ROUND(lVar20);
          *(short *)((int)ppuVar16 + 0x12) = (short)*(undefined4 *)((int)ppuVar16 + 0x50);
          cVar7 = extraout_CL_02;
          if ((*(byte *)((int)&DAT_00279203 +
                        (uint)CONCAT11(*(undefined1 *)((int)ppuVar16 + 0x13),
                                       *(undefined1 *)((int)ppuVar16 + 0x11)) * 5) & 0x10) == 0) {
            *(undefined4 *)((int)ppuVar16 + -0x14) = 0xd49a3;
            iVar10 = FUN_000dc440();
            cVar7 = extraout_CL_03;
            if (iVar10 < (int)(uint)*(ushort *)((int)ppuVar16 + 0x58)) {
              *(undefined4 *)((int)ppuVar16 + -0x14) = 0xd49c1;
              uVar12 = FUN_000dc440();
              *(undefined4 *)((int)ppuVar16 + 0x58) = uVar12;
              *(undefined4 *)(iVar3 + 0x205) = *(undefined4 *)((int)ppuVar16 + 0x10);
              *(undefined2 *)(iVar3 + 0x209 + (uint)bVar19 * -8) =
                   *(undefined2 *)((int)ppuVar16 + (uint)bVar19 * -8 + 0x14);
              cVar7 = extraout_CL_04;
            }
          }
          uVar11 = (uint)(byte)(cVar7 + 1);
        }
LAB_000d48cb:
        *(undefined4 *)((int)puVar17 + -4) = 0xd48d5;
        uVar12 = FUN_00010c1a();
        *pcVar1 = '\x03';
        *(undefined4 *)(iVar3 + 0x1f7) = uVar12;
        return 1;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0d5624 (Ghidra: FUN_000d5624)
 * Prototype: undefined4 sub_0d5624(undefined4 param_1,int param_2);
 * Address  : 0xd5624 (Size: 1178 bytes)
 * Module   : routes.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xd1ae0, 0xd29ac, 0xd4188
 * Callees  : 3 -> 0x10d93, 0x7e868, 0xb28e8
 ******************************************************************************/
undefined4 FUN_000d5624(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort *in_EDX;
  int unaff_EBX;
  byte bVar7;
  undefined2 auStack_44 [2];
  undefined4 local_40;
  undefined2 auStack_3c [2];
  undefined2 local_38;
  undefined2 uStack_36;
  ushort auStack_34 [4];
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  int local_18;
  
  bVar7 = 0;
  local_18 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1ea;
  uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  bVar2 = false;
  sVar6 = (short)uVar4;
  if (unaff_EBX == 0) {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((int)(*(ushort *)(in_EAX + 0xf) - uVar4) >> 8 <= (int)(in_EDX[1] - uVar4) >> 8)
    goto LAB_000d57f2;
    local_38._0_1_ = (undefined1)*in_EDX;
    local_38._1_1_ = (undefined1)(*in_EDX >> 8);
    uStack_36._1_1_ = (undefined1)((ushort)(*(short *)(in_EAX + 0xf) + sVar6 + -0x100) >> 8);
    uStack_36 = CONCAT11(uStack_36._1_1_,0xff) - sVar6;
    auStack_34[0] = FUN_000b28e8();
  }
  else if (unaff_EBX == 0x400) {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((uint)((int)(in_EDX[1] + uVar4) >> 8) <=
        (uint)((int)(*(ushort *)(in_EAX + 0xf) + uVar4) >> 8)) goto LAB_000d57f2;
    local_38._0_1_ = (undefined1)*in_EDX;
    local_38._1_1_ = (undefined1)(*in_EDX >> 8);
    uStack_36 = (short)CONCAT21(auStack_34[0],
                                (char)(*(ushort *)(in_EAX + 0xf) - uVar4 >> 8) + '\x01') * 0x100 +
                sVar6;
    auStack_34[0] = FUN_000b28e8();
  }
  else if (unaff_EBX == 0x600) {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((int)(*(ushort *)(in_EAX + 0xd) - uVar4) >> 8 <= (int)(*in_EDX - uVar4) >> 8)
    goto LAB_000d57f2;
    uStack_36._0_1_ = (undefined1)in_EDX[1];
    uStack_36._1_1_ = (undefined1)(in_EDX[1] >> 8);
    local_38._1_1_ = (undefined1)((ushort)(*(short *)(in_EAX + 0xd) + sVar6 + -0x100) >> 8);
    local_38 = CONCAT11(local_38._1_1_,0xff) - sVar6;
    auStack_34[0] = FUN_000b28e8();
  }
  else {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((unaff_EBX != 0x200) ||
       (local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38),
       uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36),
       (uint)((int)(*in_EDX + uVar4) >> 8) <= (uint)((int)(*(ushort *)(in_EAX + 0xd) + uVar4) >> 8))
       ) goto LAB_000d57f2;
    uStack_36._0_1_ = (undefined1)in_EDX[1];
    uStack_36._1_1_ = (undefined1)(in_EDX[1] >> 8);
    local_38 = CONCAT11((undefined1)uStack_36,
                        (char)(*(ushort *)(in_EAX + 0xd) - uVar4 >> 8) + '\x01') * 0x100 + sVar6;
    auStack_34[0] = FUN_000b28e8();
  }
  bVar2 = true;
LAB_000d57f2:
  if (bVar2) {
    if (*(char *)(local_18 + 1) == '\x01') {
      iVar5 = FUN_00010d93();
      sVar6 = *(short *)(in_EAX + 0xd) +
              (short)((uint)(param_2 * (&DAT_001927e0)[(iVar5 - 1U & 3) * 0x200]) >> 0x10);
      uVar3 = FUN_000b28e8(sVar6);
      iVar5 = FUN_0007e868(sVar6,uVar3);
      if (iVar5 == 4) {
        local_40 = *(undefined4 *)(in_EAX + 0xd);
        auStack_3c[(uint)bVar7 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
        *(uint *)(in_EAX + 0xd) = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38))
        ;
        *(ushort *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_34[(uint)bVar7 * -4];
        iVar5 = FUN_00010d93();
        uVar4 = iVar5 - 1U & 3;
        local_20 = *(short *)(in_EAX + 0xd) +
                   (short)((uint)(param_2 * (&DAT_001927e0)[uVar4 * 0x200]) >> 0x10);
        local_1e = (short)((uint)-(param_2 * (int)(&PTR_LAB_00192fe0)[uVar4 * 0x200] >> 8) >> 8) +
                   *(short *)(in_EAX + 0xf);
        local_1c = FUN_000b28e8();
        iVar5 = FUN_0007e868(sVar6,uVar3);
        if (iVar5 != 4) {
          *(uint *)in_EDX = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38));
          in_EDX[(uint)bVar7 * -4 + 2] = auStack_34[(uint)bVar7 * -4];
          *(undefined4 *)(in_EAX + 0xd) = local_40;
          *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_3c[(uint)bVar7 * -4];
          return 1;
        }
        *(undefined4 *)(in_EAX + 0xd) = local_40;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_3c[(uint)bVar7 * -4];
      }
    }
    if (*(char *)(local_18 + 1) == '\x02') {
      iVar5 = FUN_00010d93();
      uVar4 = iVar5 + 1U & 3;
      auStack_34[2] =
           *(short *)(in_EAX + 0xd) +
           (short)((uint)(param_2 * (&DAT_001927e0)[uVar4 * 0x200]) >> 0x10);
      auStack_34[3] =
           (short)((uint)-(param_2 * (int)(&PTR_LAB_00192fe0)[uVar4 * 0x200] >> 8) >> 8) +
           *(short *)(in_EAX + 0xf);
      local_2c = FUN_000b28e8();
      iVar5 = FUN_0007e868();
      if (iVar5 == 4) {
        uVar1 = *(undefined4 *)(in_EAX + 0xd);
        auStack_44[(uint)bVar7 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
        *(uint *)(in_EAX + 0xd) = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38))
        ;
        *(ushort *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_34[(uint)bVar7 * -4];
        iVar5 = FUN_00010d93();
        uVar4 = iVar5 + 1U & 3;
        local_28 = (short)((uint)(param_2 * (&DAT_001927e0)[uVar4 * 0x200]) >> 0x10) +
                   *(short *)(in_EAX + 0xd);
        local_26 = (short)((uint)-(param_2 * (int)(&PTR_LAB_00192fe0)[uVar4 * 0x200] >> 8) >> 8) +
                   *(short *)(in_EAX + 0xf);
        local_24 = FUN_000b28e8();
        iVar5 = FUN_0007e868();
        if (iVar5 != 4) {
          *(uint *)in_EDX = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38));
          in_EDX[(uint)bVar7 * -4 + 2] = auStack_34[(uint)bVar7 * -4];
          *(undefined4 *)(in_EAX + 0xd) = uVar1;
          *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_44[(uint)bVar7 * -4];
          return 1;
        }
        *(undefined4 *)(in_EAX + 0xd) = uVar1;
        *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8) = auStack_44[(uint)bVar7 * -4];
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0d5ac0 (Ghidra: FUN_000d5ac0)
 * Prototype: longlong sub_0d5ac0(void);
 * Address  : 0xd5ac0 (Size: 38 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x10229, 0x102c0, 0x11e00, 0x82774
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000d5ac0(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') &&
     ((*(byte *)(in_EAX + 0x25) & 0x20) == 0)) {
    return (ulonglong)in_EDX << 0x20;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0d5af0 (Ghidra: FUN_000d5af0)
 * Prototype: void sub_0d5af0(void);
 * Address  : 0xd5af0 (Size: 2931 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d6012) */
/* WARNING: Removing unreachable block (ram,0x000d65b2) */

void FUN_000d5af0(void)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  int local_b4;
  uint local_b0;
  uint local_a8;
  uint local_80;
  uint local_78;
  int local_60;
  int local_5c;
  undefined1 local_50;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_80 = 0;
  local_b4 = 0;
  local_30 = 3;
  DAT_001b89b8 = CONCAT22(0x200,(undefined2)DAT_001b89b8);
  do {
    local_34 = local_b4 * 2;
    local_38 = 4;
    do {
      *(short *)(&DAT_001b89bc + local_34) = (short)local_80;
      if (local_80 < (uint)(DAT_001b89b8 >> 0x10)) {
        local_a8 = 0;
        local_3c = 0;
        local_b0 = local_80;
        do {
          iVar10 = (*(int *)(&DAT_001926d6 + local_3c) >> 0x18) + local_30 + 1;
          uVar7 = (*(int *)(&DAT_001926d5 + local_3c) >> 0x18) + local_38;
          iVar2 = (iVar10 * 0x100 + uVar7) * 5;
          uVar9 = (undefined2)local_b4;
          if ((*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x3ff800) == 0) {
            uVar5 = local_a8 & 0xff;
            if (((uVar5 != 4) &&
                (uVar5 = *(uint *)((int)&DAT_00279203 +
                                  (((*(int *)(&DAT_001926d6 + uVar5 * 2) >> 0x18) + iVar10) * 0x100
                                  + (*(int *)(&DAT_001926d5 + uVar5 * 2) >> 0x18) + uVar7) * 5 + 1),
                (uVar5 & 0x3ff800) != 0)) && ((int)local_b0 < DAT_001b89b8 >> 0x10)) {
              for (iVar2 = (&DAT_001ae9fc)[(uVar5 & 0x3fffff) >> 0xb]; iVar2 != DAT_001ae9fc;
                  iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 2)]) {
                if ((*(char *)(iVar2 + 0x1f) == '\x01') || (*(char *)(iVar2 + 0x1f) == '\a')) {
                  iVar4 = local_b0 * 0xd;
                  (&DAT_001b93f6)[iVar4] = *(undefined1 *)(iVar2 + 0x1f);
                  (&DAT_001b93f7)[iVar4] = *(undefined1 *)(iVar2 + 0x1a);
                  local_50 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x13) >> 8);
                  (&DAT_001b93f8)[iVar4] = local_50;
                  (&DAT_001b93ef)[iVar4] = (undefined1)local_a8;
                  (&DAT_001b93ec)[iVar4] = 0;
                  *(undefined2 *)(&DAT_001b93ed + iVar4) = uVar9;
                  *(short *)(&DAT_001b93f0 + iVar4) =
                       *(short *)(iVar2 + 0xd) + (short)uVar7 * -0x100;
                  *(short *)(&DAT_001b93f2 + iVar4) =
                       *(short *)(iVar2 + 0xf) + (short)iVar10 * -0x100;
                  *(undefined2 *)(&DAT_001b93f4 + iVar4) = *(undefined2 *)(iVar2 + 0x11);
                  bVar1 = true;
                  goto LAB_000d5f96;
                }
              }
            }
          }
          else if ((int)local_b0 < DAT_001b89b8 >> 0x10) {
            for (iVar2 = (&DAT_001ae9fc)
                         [(*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x3fffff) >> 0xb];
                iVar2 != DAT_001ae9fc; iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 2)]) {
              if ((*(char *)(iVar2 + 0x1f) == '\x01') || (*(char *)(iVar2 + 0x1f) == '\a')) {
                iVar4 = local_b0 * 0xd;
                (&DAT_001b93f6)[iVar4] = *(undefined1 *)(iVar2 + 0x1f);
                (&DAT_001b93f7)[iVar4] = *(undefined1 *)(iVar2 + 0x1a);
                local_50 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x13) >> 8);
                (&DAT_001b93f8)[iVar4] = local_50;
                (&DAT_001b93ef)[iVar4] = (undefined1)local_a8;
                (&DAT_001b93ec)[iVar4] = 0;
                *(undefined2 *)(&DAT_001b93ed + iVar4) = uVar9;
                *(short *)(&DAT_001b93f0 + iVar4) = *(short *)(iVar2 + 0xd) + (short)uVar7 * -0x100;
                *(short *)(&DAT_001b93f2 + iVar4) = *(short *)(iVar2 + 0xf) + (short)iVar10 * -0x100
                ;
                *(undefined2 *)(&DAT_001b93f4 + iVar4) = *(undefined2 *)(iVar2 + 0x11);
                bVar1 = true;
                goto LAB_000d5f96;
              }
            }
          }
          bVar1 = false;
LAB_000d5f96:
          if (bVar1) {
            local_b0 = local_b0 + 1;
          }
          pbVar3 = &DAT_001bd61b;
          do {
            if (DAT_001b89b8 >> 0x10 <= (int)local_b0) goto LAB_000d5ee5;
            if ((((*pbVar3 & 1) != 0) && (pbVar3[0x29] == uVar7)) &&
               (uVar5 = DAT_001aea00, CONCAT31((int3)(uVar7 >> 8),pbVar3[0x2b]) == iVar10)) {
              for (; uVar5 < DAT_001b09f8; uVar5 = uVar5 + 0x6b) {
                if ((*(short *)(uVar5 + 0x62) == *(short *)(pbVar3 + 0xe)) &&
                   (*(char *)(uVar5 + 0x1f) != '\x0e')) goto LAB_000d5da7;
              }
              uVar5 = 0;
LAB_000d5da7:
              if (uVar5 == 0) {
                iVar2 = local_b0 * 0xd;
                (&DAT_001b93ec)[iVar2] = 1;
                *(undefined2 *)(&DAT_001b93ed + iVar2) = uVar9;
                (&DAT_001b93ef)[iVar2] = (undefined1)local_a8;
                *(short *)(&DAT_001b93f0 + iVar2) =
                     (short)((uint)*(ushort *)(pbVar3 + 0x28) + uVar7 * -0x100);
                *(short *)(&DAT_001b93f2 + iVar2) =
                     (short)((uint)*(ushort *)(pbVar3 + 0x2a) + iVar10 * -0x100);
                uVar9 = *(undefined2 *)(pbVar3 + 0x2c);
                (&DAT_001b93f6)[iVar2] = 0;
                *(undefined2 *)(&DAT_001b93f4 + iVar2) = uVar9;
                (&DAT_001b93f7)[iVar2] = pbVar3[2];
                (&DAT_001b93f8)[iVar2] = (char)((ushort)*(undefined2 *)(pbVar3 + 0x16) >> 8);
                bVar1 = true;
                goto LAB_000d5ee7;
              }
            }
            pbVar3 = pbVar3 + 0x2e;
          } while (pbVar3 < &DAT_001c1dcd);
          uVar5 = local_a8 & 0xff;
          if (uVar5 != 4) {
            pbVar3 = &DAT_001bd61b;
            uVar8 = uVar7 + (*(int *)(&DAT_001926d5 + uVar5 * 2) >> 0x18);
            do {
              if (DAT_001b89b8 >> 0x10 <= (int)local_b0) break;
              if ((((*pbVar3 & 1) != 0) && (pbVar3[0x29] == uVar8)) &&
                 (uVar6 = DAT_001aea00,
                 CONCAT31((int3)(uVar8 >> 8),pbVar3[0x2b]) ==
                 iVar10 + (*(int *)(&DAT_001926d6 + uVar5 * 2) >> 0x18))) {
                for (; uVar6 < DAT_001b09f8; uVar6 = uVar6 + 0x6b) {
                  if ((*(short *)(uVar6 + 0x62) == *(short *)(pbVar3 + 0xe)) &&
                     (*(char *)(uVar6 + 0x1f) != '\x0e')) goto LAB_000d5e84;
                }
                uVar6 = 0;
LAB_000d5e84:
                if (uVar6 == 0) {
                  iVar2 = local_b0 * 0xd;
                  (&DAT_001b93ec)[iVar2] = 1;
                  *(undefined2 *)(&DAT_001b93ed + iVar2) = uVar9;
                  (&DAT_001b93ef)[iVar2] = (undefined1)local_a8;
                  *(short *)(&DAT_001b93f0 + iVar2) =
                       (short)((uint)*(ushort *)(pbVar3 + 0x28) + uVar7 * -0x100);
                  *(short *)(&DAT_001b93f2 + iVar2) =
                       (short)((uint)*(ushort *)(pbVar3 + 0x2a) + iVar10 * -0x100);
                  uVar9 = *(undefined2 *)(pbVar3 + 0x2c);
                  (&DAT_001b93f6)[iVar2] = 0;
                  *(undefined2 *)(&DAT_001b93f4 + iVar2) = uVar9;
                  (&DAT_001b93f7)[iVar2] = pbVar3[2];
                  (&DAT_001b93f8)[iVar2] = (char)((ushort)*(undefined2 *)(pbVar3 + 0x16) >> 8);
                  bVar1 = true;
                  goto LAB_000d5ee7;
                }
              }
              pbVar3 = pbVar3 + 0x2e;
            } while (pbVar3 < &DAT_001c1dcd);
          }
LAB_000d5ee5:
          bVar1 = false;
LAB_000d5ee7:
          if (bVar1) {
            local_b0 = local_b0 + 1;
          }
          local_3c = local_3c + 2;
          local_a8 = local_a8 + 1;
          local_80 = local_b0;
        } while (local_a8 < 9);
      }
      if (local_80 == *(int *)((int)&DAT_001b89b8 + local_34 + 2) >> 0x10) {
        *(undefined2 *)(&DAT_001b89bc + local_34) = 0xffff;
      }
      local_34 = local_34 + 2;
      local_b4 = local_b4 + 1;
      local_38 = local_38 + 6;
    } while (local_38 != 0xac);
    local_30 = local_30 + 6;
  } while (local_30 != 0xff);
  local_5c = 3;
  do {
    local_60 = local_b4 * 2;
    local_28 = 0xac;
    do {
      *(short *)(&DAT_001b89bc + local_60) = (short)local_80;
      if (local_80 < (uint)(DAT_001b89b8 >> 0x10)) {
        local_78 = 0;
        local_2c = 0;
        do {
          iVar10 = (*(int *)(&DAT_001926d6 + local_2c) >> 0x18) + local_5c + 1;
          uVar7 = (*(int *)(&DAT_001926d5 + local_2c) >> 0x18) + local_28;
          iVar2 = (iVar10 * 0x100 + uVar7) * 5;
          uVar9 = (undefined2)local_b4;
          if ((*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x3ff800) == 0) {
            uVar5 = local_78 & 0xff;
            if (((uVar5 != 4) &&
                (uVar5 = *(uint *)((int)&DAT_00279203 +
                                  (((*(int *)(&DAT_001926d6 + uVar5 * 2) >> 0x18) + iVar10) * 0x100
                                  + (*(int *)(&DAT_001926d5 + uVar5 * 2) >> 0x18) + uVar7) * 5 + 1),
                (uVar5 & 0x3ff800) != 0)) && ((int)local_80 < DAT_001b89b8 >> 0x10)) {
              for (iVar2 = (&DAT_001ae9fc)[(uVar5 & 0x3fffff) >> 0xb]; iVar2 != DAT_001ae9fc;
                  iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 2)]) {
                if ((*(char *)(iVar2 + 0x1f) == '\x01') || (*(char *)(iVar2 + 0x1f) == '\a')) {
                  iVar4 = local_80 * 0xd;
                  (&DAT_001b93f6)[iVar4] = *(undefined1 *)(iVar2 + 0x1f);
                  (&DAT_001b93f7)[iVar4] = *(undefined1 *)(iVar2 + 0x1a);
                  local_50 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x13) >> 8);
                  (&DAT_001b93f8)[iVar4] = local_50;
                  (&DAT_001b93ef)[iVar4] = (undefined1)local_78;
                  (&DAT_001b93ec)[iVar4] = 0;
                  *(undefined2 *)(&DAT_001b93ed + iVar4) = uVar9;
                  *(short *)(&DAT_001b93f0 + iVar4) =
                       *(short *)(iVar2 + 0xd) + (short)uVar7 * -0x100;
                  *(short *)(&DAT_001b93f2 + iVar4) =
                       *(short *)(iVar2 + 0xf) + (short)iVar10 * -0x100;
                  *(undefined2 *)(&DAT_001b93f4 + iVar4) = *(undefined2 *)(iVar2 + 0x11);
                  bVar1 = true;
                  goto LAB_000d6536;
                }
              }
            }
          }
          else if ((int)local_80 < DAT_001b89b8 >> 0x10) {
            for (iVar2 = (&DAT_001ae9fc)
                         [(*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x3fffff) >> 0xb];
                iVar2 != DAT_001ae9fc; iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 2)]) {
              if ((*(char *)(iVar2 + 0x1f) == '\x01') || (*(char *)(iVar2 + 0x1f) == '\a')) {
                iVar4 = local_80 * 0xd;
                (&DAT_001b93f6)[iVar4] = *(undefined1 *)(iVar2 + 0x1f);
                (&DAT_001b93f7)[iVar4] = *(undefined1 *)(iVar2 + 0x1a);
                local_50 = (undefined1)((ushort)*(undefined2 *)(iVar2 + 0x13) >> 8);
                (&DAT_001b93f8)[iVar4] = local_50;
                (&DAT_001b93ef)[iVar4] = (undefined1)local_78;
                (&DAT_001b93ec)[iVar4] = 0;
                *(undefined2 *)(&DAT_001b93ed + iVar4) = uVar9;
                *(short *)(&DAT_001b93f0 + iVar4) = *(short *)(iVar2 + 0xd) + (short)uVar7 * -0x100;
                *(short *)(&DAT_001b93f2 + iVar4) = *(short *)(iVar2 + 0xf) + (short)iVar10 * -0x100
                ;
                *(undefined2 *)(&DAT_001b93f4 + iVar4) = *(undefined2 *)(iVar2 + 0x11);
                bVar1 = true;
                goto LAB_000d6536;
              }
            }
          }
          bVar1 = false;
LAB_000d6536:
          if (bVar1) {
            local_80 = local_80 + 1;
          }
          pbVar3 = &DAT_001bd61b;
          do {
            if (DAT_001b89b8 >> 0x10 <= (int)local_80) goto LAB_000d6479;
            if ((((*pbVar3 & 1) != 0) && (pbVar3[0x29] == uVar7)) &&
               (uVar5 = DAT_001aea00, CONCAT31((int3)(uVar7 >> 8),pbVar3[0x2b]) == iVar10)) {
              for (; uVar5 < DAT_001b09f8; uVar5 = uVar5 + 0x6b) {
                if ((*(short *)(uVar5 + 0x62) == *(short *)(pbVar3 + 0xe)) &&
                   (*(char *)(uVar5 + 0x1f) != '\x0e')) goto LAB_000d633b;
              }
              uVar5 = 0;
LAB_000d633b:
              if (uVar5 == 0) {
                iVar2 = local_80 * 0xd;
                (&DAT_001b93ec)[iVar2] = 1;
                *(undefined2 *)(&DAT_001b93ed + iVar2) = uVar9;
                (&DAT_001b93ef)[iVar2] = (undefined1)local_78;
                *(short *)(&DAT_001b93f0 + iVar2) =
                     (short)((uint)*(ushort *)(pbVar3 + 0x28) + uVar7 * -0x100);
                *(short *)(&DAT_001b93f2 + iVar2) =
                     (short)((uint)*(ushort *)(pbVar3 + 0x2a) + iVar10 * -0x100);
                uVar9 = *(undefined2 *)(pbVar3 + 0x2c);
                (&DAT_001b93f6)[iVar2] = 0;
                *(undefined2 *)(&DAT_001b93f4 + iVar2) = uVar9;
                (&DAT_001b93f7)[iVar2] = pbVar3[2];
                (&DAT_001b93f8)[iVar2] = (char)((ushort)*(undefined2 *)(pbVar3 + 0x16) >> 8);
                bVar1 = true;
                goto LAB_000d647b;
              }
            }
            pbVar3 = pbVar3 + 0x2e;
          } while (pbVar3 < &DAT_001c1dcd);
          uVar5 = local_78 & 0xff;
          if (uVar5 != 4) {
            pbVar3 = &DAT_001bd61b;
            uVar8 = uVar7 + (*(int *)(&DAT_001926d5 + uVar5 * 2) >> 0x18);
            do {
              if (DAT_001b89b8 >> 0x10 <= (int)local_80) break;
              if ((((*pbVar3 & 1) != 0) && (pbVar3[0x29] == uVar8)) &&
                 (uVar6 = DAT_001aea00,
                 CONCAT31((int3)(uVar8 >> 8),pbVar3[0x2b]) ==
                 iVar10 + (*(int *)(&DAT_001926d6 + uVar5 * 2) >> 0x18))) {
                for (; uVar6 < DAT_001b09f8; uVar6 = uVar6 + 0x6b) {
                  if ((*(short *)(uVar6 + 0x62) == *(short *)(pbVar3 + 0xe)) &&
                     (*(char *)(uVar6 + 0x1f) != '\x0e')) goto LAB_000d6418;
                }
                uVar6 = 0;
LAB_000d6418:
                if (uVar6 == 0) {
                  iVar2 = local_80 * 0xd;
                  (&DAT_001b93ec)[iVar2] = 1;
                  *(undefined2 *)(&DAT_001b93ed + iVar2) = uVar9;
                  (&DAT_001b93ef)[iVar2] = (undefined1)local_78;
                  *(short *)(&DAT_001b93f0 + iVar2) =
                       (short)((uint)*(ushort *)(pbVar3 + 0x28) + uVar7 * -0x100);
                  *(short *)(&DAT_001b93f2 + iVar2) =
                       (short)((uint)*(ushort *)(pbVar3 + 0x2a) + iVar10 * -0x100);
                  uVar9 = *(undefined2 *)(pbVar3 + 0x2c);
                  (&DAT_001b93f6)[iVar2] = 0;
                  *(undefined2 *)(&DAT_001b93f4 + iVar2) = uVar9;
                  (&DAT_001b93f7)[iVar2] = pbVar3[2];
                  (&DAT_001b93f8)[iVar2] = (char)((ushort)*(undefined2 *)(pbVar3 + 0x16) >> 8);
                  bVar1 = true;
                  goto LAB_000d647b;
                }
              }
              pbVar3 = pbVar3 + 0x2e;
            } while (pbVar3 < &DAT_001c1dcd);
          }
LAB_000d6479:
          bVar1 = false;
LAB_000d647b:
          if (bVar1) {
            local_80 = local_80 + 1;
          }
          local_2c = local_2c + 2;
          local_78 = local_78 + 1;
        } while (local_78 < 9);
      }
      if (local_80 == *(int *)((int)&DAT_001b89b8 + local_60 + 2) >> 0x10) {
        *(undefined2 *)(&DAT_001b89bc + local_60) = 0xffff;
      }
      local_60 = local_60 + 2;
      local_b4 = local_b4 + 1;
      local_28 = local_28 + 6;
    } while (local_28 != 0xdc);
    local_5c = local_5c + 6;
    if (local_5c == 99) {
      DAT_001b89b8 = CONCAT22((short)local_80,(undefined2)DAT_001b89b8);
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0d6664 (Ghidra: FUN_000d6664)
 * Prototype: void sub_0d6664(void);
 * Address  : 0xd6664 (Size: 251 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xacce4
 ******************************************************************************/
void FUN_000d6664(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int in_EDX;
  
  iVar2 = in_EAX * 3 + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar3 = in_EDX * 3 + -1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar4 = in_EAX * 3 + 4;
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  iVar5 = in_EDX * 3 + 4;
  if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  puVar6 = &DAT_001bd5ed + DAT_002e6f0e * 0x2e;
  if (&DAT_001bd5ed < &DAT_001bd5ed + DAT_002e6f0e * 0x2e) {
    do {
      uVar1 = *(ushort *)(puVar6 + 0x26);
      if ((((in_EDX * 0x55 + in_EAX == *(int *)(puVar6 + 0x12)) &&
           (iVar2 <= (int)(uint)(byte)puVar6[0x29])) && ((int)(uint)(byte)puVar6[0x29] <= iVar4)) &&
         ((iVar3 <= (int)(uint)(byte)puVar6[0x2b] && ((int)(uint)(byte)puVar6[0x2b] <= iVar5)))) {
        FUN_000acce4();
      }
      puVar6 = &DAT_001bd5ed + (uint)uVar1 * 0x2e;
    } while (&DAT_001bd5ed < &DAT_001bd5ed + (uint)uVar1 * 0x2e);
  }
  return;
}

