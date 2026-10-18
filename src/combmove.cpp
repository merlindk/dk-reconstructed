/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: combmove.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 5
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_room_state_016640 (Ghidra: FUN_00016640)
 * Prototype: undefined4 dk_room_state_016640(void);
 * Address  : 0x16640 (Size: 218 bytes)
 * Module   : combmove.cpp [direct_file_string_xref]
 * OrigLine : combmove.cpp:47 ("NO ROOM FOR STATE"); combmove.cpp:50 ("HMMM CANNOT GET TO GUARD POST!")
 * Naming   : String 'NO ROOM FOR STATE'
 * Callers  : 3 -> 0x168a2, 0x169a5, 0x16b29
 * Callees  : 4 -> 0x671e9, 0xcc4a0, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x1604fe: "combmove.cpp"
 *   - 0x16052a: "combmove.cpp"
 *   - 0x1604ec: "NO ROOM FOR STATE"
 *   - 0x16050b: "HMMM CANNOT GET TO GUARD POST!"
 ******************************************************************************/
undefined4 FUN_00016640(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 in_DL;
  
  iVar1 = FUN_000d0f50();
  if (((iVar1 == 0) || (*(short *)(iVar1 + 10) != 0x10)) ||
     (*(short *)(iVar1 + 1) != *(short *)(extraout_ECX + 0x7c))) {
    if (*(short *)(extraout_ECX + 0x7c) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("combmove.cpp", line 47, "NO ROOM FOR STATE") */
      FUN_000ddaf0(); /* LbErrorLog("combmove.cpp", line 50, "HMMM CANNOT GET TO GUARD POST!") */
      iVar1 = extraout_ECX_01;
    }
    else {
      iVar2 = (uint)*(ushort *)(extraout_ECX + 0x7c) * 0x45;
      iVar1 = extraout_ECX;
      if (((((&DAT_002ddd1b)[iVar2] & 1) != 0) && ((&DAT_002ddd1e)[iVar2] == *(char *)(in_EAX + 6)))
         && (*(short *)(&DAT_002ddd25 + iVar2) == 0x10)) {
        iVar1 = FUN_000671e9();
        if (iVar1 < 0x1b01) {
          return 0;
        }
        iVar1 = FUN_000cc4a0();
        if (iVar1 == 0) {
          *(undefined2 *)(extraout_ECX_00 + 0x2b1) = 0;
          return 0;
        }
        *(undefined1 *)(in_EAX + 8) = in_DL;
        return 1;
      }
    }
    *(undefined2 *)(iVar1 + 0x2b1) = 0;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01671a (Ghidra: FUN_0001671a)
 * Prototype: undefined4 sub_01671a(void);
 * Address  : 0x1671a (Size: 392 bytes)
 * Module   : combmove.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x168a2, 0x169a5, 0x16b29, 0x66247, 0x752c3
 * Callees  : 4 -> 0xb28e8, 0xb3d90, 0xb4ac4, 0xe69fc
 ******************************************************************************/
undefined4 FUN_0001671a(void)

{
  uint uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int in_EDX;
  undefined1 unaff_BL;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  
  iVar3 = (uint)*(ushort *)(in_EDX + 0xd) - (uint)*(ushort *)(in_EAX + 0xd);
  iVar4 = (uint)*(ushort *)(in_EDX + 0xf) - (uint)*(ushort *)(in_EAX + 0xf);
  puVar6 = (undefined4 *)&local_1c;
  if (((in_ECX != 0) &&
      (puVar6 = (undefined4 *)&local_1c,
      (*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 3) & 0x10) == 0)) &&
     (puVar6 = (undefined4 *)&local_1c,
     (*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 3) & 8) == 0)) {
    local_1c = *(short *)(in_EAX + 0xd) - (short)iVar3;
    local_1a = *(short *)(in_EAX + 0xf) - (short)iVar4;
    uStack_20 = 0x1677a;
    local_18 = FUN_000b28e8();
    puVar6 = &uStack_20;
    uStack_20 = 1;
    iVar5 = FUN_000b4ac4();
    if (iVar5 != -1) {
      return 1;
    }
  }
  local_1c = *(short *)(in_EAX + 0xd);
  local_1a = *(short *)(in_EAX + 0xf);
  *(undefined4 *)((int)puVar6 + -4) = 0x167b2;
  FUN_000e69fc();
  *(undefined4 *)((int)puVar6 + -4) = 0x167bb;
  uVar7 = FUN_000e69fc();
  if ((int)uVar7 < (int)((ulonglong)uVar7 >> 0x20)) {
    if (iVar3 < 1) {
      local_1c = CONCAT11(local_1c._1_1_ + '\x01',(undefined1)local_1c);
    }
    else {
      local_1c = local_1c + -0x100;
    }
  }
  else if (iVar4 < 1) {
    local_1a = CONCAT11(local_1a._1_1_ + '\x01',(undefined1)local_1a);
  }
  else {
    local_1a = local_1a + -0x100;
  }
  *(undefined4 *)((int)puVar6 + -4) = 0x167eb;
  local_18 = FUN_000b28e8();
  *(undefined4 *)((int)puVar6 + -4) = 0x167fb;
  sVar2 = FUN_000b3d90();
  if (sVar2 == 0) {
    local_1c = *(short *)(in_EAX + 0xd);
    local_1a = *(short *)(in_EAX + 0xf);
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar1 = DAT_002e8bf6 >> 0xd;
    DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
    if ((uVar1 & 1) == 0) {
      sVar2 = 1;
    }
    else {
      sVar2 = -1;
    }
    *(undefined4 *)((int)puVar6 + -4) = 0x1685f;
    FUN_000e69fc();
    *(undefined4 *)((int)puVar6 + -4) = 0x16868;
    uVar7 = FUN_000e69fc();
    if ((int)uVar7 < (int)((ulonglong)uVar7 >> 0x20)) {
      local_1a = local_1a + sVar2 * 0x300;
    }
    else {
      local_1c = local_1c + sVar2 * 0x300;
    }
    *(undefined4 *)((int)puVar6 + -4) = 0x16880;
    local_18 = FUN_000b28e8();
    *(undefined4 *)((int)puVar6 + -4) = 0x16890;
    sVar2 = FUN_000b3d90();
    if (sVar2 == 0) {
      return 1;
    }
  }
  *(undefined1 *)(in_EAX + 8) = unaff_BL;
  return 1;
}

/******************************************************************************
 * Function : sub_0168a2 (Ghidra: FUN_000168a2)
 * Prototype: undefined4 sub_0168a2(void);
 * Address  : 0x168a2 (Size: 259 bytes)
 * Module   : combmove.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x15a23, 0x16e9b
 * Callees  : 8 -> 0x10010, 0x10c1a, 0x10c5f, 0x163c9, 0x16640, 0x1671a, 0x63b6d, 0xb4ac4
 ******************************************************************************/
undefined4 FUN_000168a2(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int unaff_EBX;
  int *piVar3;
  int iStack_18;
  undefined1 local_14 [4];
  
  piVar3 = (int *)local_14;
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0') {
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2b1) == 0x200) {
      iStack_18 = 0x168e4;
      iVar2 = FUN_00016640();
      if (iVar2 != 0) {
        return 0;
      }
    }
    iStack_18 = 0x168f8;
    iVar2 = FUN_000163c9();
    if (iVar2 == 0) {
      iStack_18 = iVar2;
      iVar2 = FUN_000b4ac4();
      if (iVar2 == -1) {
        FUN_00063b6d();
      }
    }
    else {
      if (unaff_EBX < 0x300) {
        iStack_18 = 0x1691f;
        FUN_0001671a();
        piVar3 = (int *)local_14;
      }
      else if (0x800 < unaff_EBX) {
        piVar3 = &iStack_18;
        iStack_18 = 0;
        FUN_000b4ac4();
      }
      uVar1 = *(ushort *)(&DAT_002e918b + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
      *(undefined4 *)((int)piVar3 + -4) = 0x1695a;
      FUN_00010c1a();
      *(undefined4 *)((int)piVar3 + -4) = 0x16967;
      iVar2 = FUN_00010c5f();
      if (iVar2 < (int)(uint)uVar1) {
        return 1;
      }
    }
  }
  else {
    iStack_18 = 0x1699f;
    FUN_00010010();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0169a5 (Ghidra: FUN_000169a5)
 * Prototype: undefined4 sub_0169a5(void);
 * Address  : 0x169a5 (Size: 388 bytes)
 * Module   : combmove.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x15ac2, 0x16df5
 * Callees  : 12 -> 0x10010, 0x10c1a, 0x10c5f, 0x15db4, 0x163c9, 0x16640, 0x1671a, 0x17381, 0x18593, 0x49bfc ...
 ******************************************************************************/
undefined4 FUN_000169a5(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar2 + 0xd2) != '\0') {
    FUN_00010010();
    return 0;
  }
  if ((*(short *)(iVar2 + 0x2b1) == 0x200) && (iVar1 = FUN_00016640(), iVar1 != 0)) {
    return 0;
  }
  if (unaff_EBX < 0x9c) {
    FUN_0001671a();
    *(undefined1 *)(iVar2 + 0xaa) = 0;
  }
  else {
    if (0x11c < unaff_EBX) {
      *(undefined1 *)(iVar2 + 0xaa) = 0;
      FUN_00010c1a();
      iVar1 = FUN_00010c5f();
      if ((((iVar1 < extraout_ECX) && (iVar1 = FUN_00015db4(), iVar1 != 0)) &&
          ((*(byte *)(iVar2 + 3) & 0x10) == 0)) &&
         ((((*(byte *)(iVar2 + 3) & 8) == 0 && (iVar2 = FUN_000163c9(), iVar2 != 0)) &&
          (iVar2 = FUN_00018593(), 0 < iVar2)))) {
        FUN_00049bfc(0);
        return 0;
      }
      iVar2 = FUN_000b4ac4(0);
      if (iVar2 != -1) {
        return 0;
      }
      FUN_00063b6d();
      return 0;
    }
    iVar2 = FUN_00017381();
    if (iVar2 != 0) {
      return 0;
    }
  }
  FUN_00010c1a();
  iVar2 = FUN_00010c5f();
  if (extraout_ECX_00 <= iVar2) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_016b29 (Ghidra: FUN_00016b29)
 * Prototype: undefined4 sub_016b29(void);
 * Address  : 0x16b29 (Size: 422 bytes)
 * Module   : combmove.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15b37
 * Callees  : 9 -> 0x10010, 0x15db4, 0x163c9, 0x16640, 0x1671a, 0x18593, 0x49bfc, 0x7df48, 0xb4ac4
 ******************************************************************************/
undefined4 FUN_00016b29(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  int unaff_EBX;
  int *piVar4;
  int iStack_20;
  undefined1 local_1c [8];
  int local_14;
  
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0') {
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2b1) == 0x200) {
      iStack_20 = 0x16b69;
      iVar3 = FUN_00016640();
      if (iVar3 != 0) {
        return 0;
      }
    }
    if (unaff_EBX < 0x300) {
      iStack_20 = 0x16b88;
      FUN_0001671a();
    }
    else {
      local_14 = in_EDX + 0xd;
      if (unaff_EBX < 0x801) {
        iStack_20 = 0x16bbe;
        iVar3 = FUN_00010010();
        if (iVar3 < 0x55) {
          iStack_20 = 0x16bce;
          iVar3 = FUN_00015db4();
          piVar4 = (int *)local_1c;
          if (iVar3 != 0) {
            iStack_20 = 0x16bde;
            iStack_20 = FUN_000163c9();
            if (iStack_20 == 0) {
              piVar4 = &iStack_20;
              FUN_000b4ac4();
            }
            else {
              iStack_20 = 0x16bec;
              iVar3 = FUN_00018593();
              piVar4 = (int *)local_1c;
              if (0 < iVar3) {
                iStack_20 = 0;
                FUN_00049bfc();
                return 0;
              }
            }
          }
          *(undefined4 *)((int)piVar4 + -4) = 0x16c24;
          iVar3 = FUN_0007df48();
          if (iVar3 != 0) {
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            uVar1 = (ulonglong)DAT_002e8bf6;
            if ((int)(uVar1 % 6) == 0) {
              DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
              DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
              uVar2 = (ulonglong)DAT_002e8bf6;
              *(undefined2 *)(in_EAX + 0x32) = *(undefined2 *)(in_EAX + 0x32);
              *(undefined2 *)(in_EAX + 0x34) = *(undefined2 *)(in_EAX + 0x34);
              *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 4;
              *(short *)(in_EAX + 0x36) =
                   *(short *)(in_EAX + 0x36) + (short)((uVar1 % 6 << 0x20 | uVar2) % 0x50) + 0x28;
            }
          }
          return 1;
        }
      }
      else {
        iStack_20 = 0;
        FUN_000b4ac4();
      }
    }
  }
  else {
    iStack_20 = 0x16cc9;
    FUN_00010010();
  }
  return 0;
}

