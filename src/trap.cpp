/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: trap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_illegal_trap_trigger_type_075ba4 (Ghidra: FUN_00075ba4)
 * Prototype: void dk_illegal_trap_trigger_type_075ba4(void);
 * Address  : 0x75ba4 (Size: 140 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp:41 ("Illegal trap trigger type")
 * Naming   : String 'Illegal trap trigger type'
 * Callers  : 1 -> 0xe2c58
 * Callees  : 3 -> 0x75c30, 0x761cd, 0xddaf0
 * Strings  :
 *   - 0x167c36: "trap.cpp"
 *   - 0x167c1c: "Illegal trap trigger type"
 ******************************************************************************/
void FUN_00075ba4(void)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  if (*(char *)(in_EAX + 0x13) != '\0') {
    bVar1 = (&DAT_0018fd21)[(uint)*(byte *)(in_EAX + 0x1a) * 0x36];
    if (bVar1 == 0) {
LAB_00075be1:
      FUN_000ddaf0(); /* LbErrorLog("trap.cpp", line 41, "Illegal trap trigger type") */
      return;
    }
    if (bVar1 < 2) {
      cVar2 = FUN_00075c30();
      iVar3 = extraout_EDX;
    }
    else {
      if (bVar1 != 2) goto LAB_00075be1;
      cVar2 = FUN_000761cd();
      iVar3 = extraout_EDX_00;
    }
    if (((cVar2 != '\0') &&
        (*(int *)(iVar3 + 0x14) =
              DAT_002e8bee + *(int *)(&DAT_001ae8a0 + (uint)*(byte *)(iVar3 + 0x1a) * 0x14),
        *(char *)(iVar3 + 0x13) != -1)) &&
       (*(char *)(iVar3 + 0x13) = *(char *)(iVar3 + 0x13) + -1, *(char *)(iVar3 + 0x13) == '\0')) {
      *(byte *)(iVar3 + 0x4f) = *(byte *)(iVar3 + 0x4f) & 0xcf;
      *(byte *)(iVar3 + 0x4f) = *(byte *)(iVar3 + 0x4f) | 0x20;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_075c30 (Ghidra: FUN_00075c30)
 * Prototype: undefined8 sub_075c30(void);
 * Address  : 0x75c30 (Size: 1437 bytes)
 * Module   : trap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x75ba4
 * Callees  : 1 -> 0x76319
 ******************************************************************************/
undefined8 FUN_00075c30(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_EDX;
  int iVar9;
  int iVar10;
  int local_b4;
  int local_a8;
  int local_a4;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int local_34;
  int local_30;
  
  uVar1 = *(ushort *)(in_EAX + 0x56) / 2;
  iVar2 = *(ushort *)(in_EAX + 0xd) - uVar1;
  iVar9 = iVar2 >> 0x1f;
  iVar2 = (int)((iVar2 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  uVar3 = (int)(*(ushort *)(in_EAX + 0xd) + uVar1) >> 8;
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  iVar9 = *(ushort *)(in_EAX + 0xf) - uVar1;
  iVar10 = iVar9 >> 0x1f;
  local_54 = (int)((iVar9 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8;
  if (local_54 < 1) {
    local_54 = 0;
  }
  uVar1 = (int)(*(ushort *)(in_EAX + 0xf) + uVar1) >> 8;
  if (0xfe < uVar1) {
    uVar1 = 0xff;
  }
  local_b4 = local_54 + -0x14;
  if (local_b4 < 1) {
    local_b4 = 0;
  }
  local_34 = iVar2 * 5;
  for (local_a8 = iVar2; local_a8 <= (int)uVar3; local_a8 = local_a8 + 1) {
    local_48 = local_54;
    for (iVar9 = local_54 * 0x500 + local_34; local_34 + local_b4 * 0x500 <= iVar9;
        iVar9 = iVar9 + -0x500) {
      if ((*(byte *)((int)&DAT_00279203 + iVar9) & 0x10) != 0) {
        local_b4 = local_48 + 1;
        break;
      }
      for (uVar4 = (*(uint *)((int)&DAT_00279203 + iVar9 + 1) & 0x3fffff) >> 0xb;
          uVar4 = (&DAT_001ae9fc)[uVar4], DAT_001ae9fc < uVar4; uVar4 = (uint)*(ushort *)(uVar4 + 2)
          ) {
        if ((((*(char *)(uVar4 + 0x1f) == '\x05') && (*(char *)(uVar4 + 6) != *(char *)(in_EAX + 6))
             ) && ((*(byte *)(uVar4 + 1) & 1) == 0)) && (*(char *)(uVar4 + 7) != 'C')) {
          uVar6 = (uint)*(char *)(uVar4 + 6);
          uVar7 = (uint)DAT_002eb543;
          if ((((uVar6 == uVar7) || (uVar8 = (uint)*(char *)(in_EAX + 6), uVar8 == uVar7)) ||
              ((((uint)(byte)(&DAT_0019d0f2)[uVar6 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f))
                == 0 || ((uVar8 == uVar7 || (uVar6 == uVar7)))))) ||
             (((uint)(byte)(&DAT_0019d0f2)[uVar8 * 0x4ef] & 1 << (*(byte *)(uVar4 + 6) & 0x1f)) == 0
             )) goto LAB_00075de1;
        }
      }
      local_48 = local_48 + -1;
    }
    local_34 = local_34 + 5;
  }
  local_78 = uVar1 + 0x14;
  if (0xff < local_78) {
    local_78 = 0x100;
  }
  local_30 = iVar2 * 5;
  for (local_58 = iVar2; local_58 <= (int)uVar3; local_58 = local_58 + 1) {
    local_50 = uVar1;
    for (iVar9 = uVar1 * 0x500 + local_30; iVar9 < (int)(local_30 + local_78 * 0x500);
        iVar9 = iVar9 + 0x500) {
      if ((*(byte *)((int)&DAT_00279203 + iVar9) & 0x10) != 0) {
        local_78 = local_50;
        break;
      }
      for (uVar4 = (*(uint *)((int)&DAT_00279203 + iVar9 + 1) & 0x3fffff) >> 0xb;
          uVar4 = (&DAT_001ae9fc)[uVar4], DAT_001ae9fc < uVar4; uVar4 = (uint)*(ushort *)(uVar4 + 2)
          ) {
        if ((((*(char *)(uVar4 + 0x1f) == '\x05') && (*(char *)(uVar4 + 6) != *(char *)(in_EAX + 6))
             ) && ((*(byte *)(uVar4 + 1) & 1) == 0)) && (*(char *)(uVar4 + 7) != 'C')) {
          uVar6 = (uint)*(char *)(uVar4 + 6);
          uVar7 = (uint)DAT_002eb543;
          if (((uVar6 == uVar7) || (uVar8 = (uint)*(char *)(in_EAX + 6), uVar8 == uVar7)) ||
             (((((uint)(byte)(&DAT_0019d0f2)[uVar6 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f))
                == 0 || ((uVar8 == uVar7 || (uVar6 == uVar7)))) ||
              (((uint)(byte)(&DAT_0019d0f2)[uVar8 * 0x4ef] & 1 << (*(byte *)(uVar4 + 6) & 0x1f)) ==
               0)))) goto LAB_00075de1;
        }
      }
      local_50 = local_50 + 1;
    }
    local_30 = local_30 + 5;
  }
  local_7c = iVar2 + -0x14;
  if (local_7c < 1) {
    local_7c = 0;
  }
  local_a4 = local_54 * 0x500;
  for (local_4c = local_54; local_4c <= (int)uVar1; local_4c = local_4c + 1) {
    local_5c = iVar2;
    for (iVar9 = iVar2 * 5 + local_a4; local_a4 + local_7c * 5 <= iVar9; iVar9 = iVar9 + -5) {
      if ((*(byte *)((int)&DAT_00279203 + iVar9) & 0x10) != 0) {
        local_7c = local_5c + 1;
        break;
      }
      for (uVar4 = (*(uint *)((int)&DAT_00279203 + iVar9 + 1) & 0x3fffff) >> 0xb;
          uVar4 = (&DAT_001ae9fc)[uVar4], DAT_001ae9fc < uVar4; uVar4 = (uint)*(ushort *)(uVar4 + 2)
          ) {
        if ((((*(char *)(uVar4 + 0x1f) == '\x05') && (*(char *)(uVar4 + 6) != *(char *)(in_EAX + 6))
             ) && ((*(byte *)(uVar4 + 1) & 1) == 0)) && (*(char *)(uVar4 + 7) != 'C')) {
          uVar6 = (uint)*(char *)(uVar4 + 6);
          uVar7 = (uint)DAT_002eb543;
          if ((((uVar6 == uVar7) || (uVar8 = (uint)*(char *)(in_EAX + 6), uVar8 == uVar7)) ||
              ((((uint)(byte)(&DAT_0019d0f2)[uVar6 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f))
                == 0 || ((uVar8 == uVar7 || (uVar6 == uVar7)))))) ||
             (((uint)(byte)(&DAT_0019d0f2)[uVar8 * 0x4ef] & 1 << (*(byte *)(uVar4 + 6) & 0x1f)) == 0
             )) goto LAB_00075de1;
        }
      }
      local_5c = local_5c + -1;
    }
    local_a4 = local_a4 + 0x500;
  }
  local_74 = uVar3 + 0x14;
  if (0xff < local_74) {
    local_74 = 0x100;
  }
  local_3c = local_54 * 0x500;
  for (; local_54 <= (int)uVar1; local_54 = local_54 + 1) {
    local_60 = uVar3;
    for (iVar2 = uVar3 * 5 + local_3c; iVar2 < (int)(local_3c + local_74 * 5); iVar2 = iVar2 + 5) {
      if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) != 0) {
        local_74 = local_60;
        break;
      }
      for (uVar4 = (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x3fffff) >> 0xb;
          uVar4 = (&DAT_001ae9fc)[uVar4], DAT_001ae9fc < uVar4; uVar4 = (uint)*(ushort *)(uVar4 + 2)
          ) {
        if ((((*(char *)(uVar4 + 0x1f) == '\x05') && (*(char *)(uVar4 + 6) != *(char *)(in_EAX + 6))
             ) && ((*(byte *)(uVar4 + 1) & 1) == 0)) && (*(char *)(uVar4 + 7) != 'C')) {
          uVar6 = (uint)*(char *)(uVar4 + 6);
          uVar7 = (uint)DAT_002eb543;
          if (((uVar7 == uVar6) || (uVar8 = (uint)*(char *)(in_EAX + 6), uVar7 == uVar8)) ||
             (((((uint)(byte)(&DAT_0019d0f2)[uVar6 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f))
                == 0 || ((uVar7 == uVar8 || (uVar7 == uVar6)))) ||
              (((uint)(byte)(&DAT_0019d0f2)[uVar8 * 0x4ef] & 1 << (*(byte *)(uVar4 + 6) & 0x1f)) ==
               0)))) goto LAB_00075de1;
        }
      }
      local_60 = local_60 + 1;
    }
    local_3c = local_3c + 0x500;
  }
  uVar5 = 0;
LAB_000761c0:
  return CONCAT44(in_EDX,uVar5);
LAB_00075de1:
  FUN_00076319();
  uVar5 = 1;
  goto LAB_000761c0;
}

/******************************************************************************
 * Function : sub_0761cd (Ghidra: FUN_000761cd)
 * Prototype: undefined8 sub_0761cd(void);
 * Address  : 0x761cd (Size: 316 bytes)
 * Module   : trap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x75ba4
 * Callees  : 1 -> 0x76319
 ******************************************************************************/
undefined8 FUN_000761cd(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_EDX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_20;
  int local_1c;
  
  uVar1 = *(byte *)(in_EAX + 0xe) / 3;
  uVar2 = *(byte *)(in_EAX + 0x10) / 3;
  local_20 = uVar2 * 3;
  iVar7 = local_20 + 3;
  local_1c = uVar2 * 0xf00;
  do {
    if (iVar7 <= local_20) {
      uVar3 = 0;
LAB_000761c7:
      return CONCAT44(in_EDX,uVar3);
    }
    for (iVar6 = uVar1 * 0xf + local_1c; iVar6 < (int)(local_1c + (uVar1 * 3 + 3) * 5);
        iVar6 = iVar6 + 5) {
      for (uVar2 = (*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x3fffff) >> 0xb;
          uVar2 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < uVar2; uVar2 = (uint)*(ushort *)(uVar2 + 2)
          ) {
        if ((((*(char *)(uVar2 + 0x1f) == '\x05') && (*(char *)(uVar2 + 6) != *(char *)(in_EAX + 6))
             ) && ((*(byte *)(uVar2 + 1) & 1) == 0)) && (*(char *)(uVar2 + 7) != 'C')) {
          uVar4 = (uint)*(char *)(uVar2 + 6);
          uVar8 = (uint)DAT_002eb543;
          if ((((uVar8 == uVar4) || (uVar5 = (uint)*(char *)(in_EAX + 6), uVar8 == uVar5)) ||
              ((((uint)(byte)(&DAT_0019d0f2)[uVar4 * 0x4ef] & 1 << (*(byte *)(in_EAX + 6) & 0x1f))
                == 0 || ((uVar8 == uVar5 || (uVar8 == uVar4)))))) ||
             (((uint)(byte)(&DAT_0019d0f2)[uVar5 * 0x4ef] & 1 << (*(byte *)(uVar2 + 6) & 0x1f)) == 0
             )) {
            FUN_00076319();
            uVar3 = 1;
            goto LAB_000761c7;
          }
        }
      }
    }
    local_1c = local_1c + 0x500;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : dk_illegal_trap_activation_type_076319 (Ghidra: FUN_00076319)
 * Prototype: void dk_illegal_trap_activation_type_076319(void);
 * Address  : 0x76319 (Size: 187 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp:251 ("Illegal trap activation type")
 * Naming   : String 'Illegal trap activation type'
 * Callers  : 2 -> 0x75c30, 0x761cd
 * Callees  : 7 -> 0x27390, 0x6e538, 0x763d4, 0x76643, 0x7668c, 0x766fa, 0xddaf0
 * Strings  :
 *   - 0x167c5c: "trap.cpp"
 *   - 0x167c3f: "Illegal trap activation type"
 ******************************************************************************/
void FUN_00076319(void)

{
  int in_EAX;
  undefined **ppuVar1;
  undefined4 uStack_1c;
  undefined *local_18;
  
  ppuVar1 = &local_18;
  *(undefined1 *)(in_EAX + 0x18) = 1;
  local_18 = &DAT_0018fd09 + (uint)*(byte *)(in_EAX + 0x1a) * 0x36;
  if (*(char *)(in_EAX + 0x1a) == '\x02') {
    ppuVar1 = (undefined **)&uStack_1c;
    uStack_1c = 0;
    FUN_00027390();
  }
  *(undefined4 *)((int)ppuVar1 + -4) = 0x100;
  *(undefined4 *)((int)ppuVar1 + -8) = 2;
  *(undefined4 *)((int)ppuVar1 + -0xc) = 0;
  *(undefined4 *)((int)ppuVar1 + -0x10) = 3;
  *(undefined4 *)((int)ppuVar1 + -0x14) = 0x76377;
  FUN_0006e538();
  switch(local_18[0x19]) {
  case 1:
    *(undefined4 *)((int)ppuVar1 + -0x14) = 0x76397;
    FUN_000763d4();
    break;
  case 2:
    *(undefined4 *)((int)ppuVar1 + -0x14) = 0x763a2;
    FUN_00076643();
    break;
  case 3:
    *(undefined4 *)((int)ppuVar1 + -0x14) = 0x763ad;
    FUN_0007668c();
    break;
  case 4:
    *(undefined4 *)((int)ppuVar1 + -0x14) = 0x763b8;
    FUN_000766fa();
    break;
  default:
    *(undefined4 *)((int)ppuVar1 + -0x14) = 0x763ce;
    FUN_000ddaf0(); /* LbErrorLog("trap.cpp", line 251, "Illegal trap activation type") */
  }
  return;
}

/******************************************************************************
 * Function : dk_trap_activation_shot_0763d4 (Ghidra: FUN_000763d4)
 * Prototype: void dk_trap_activation_shot_0763d4(void);
 * Address  : 0x763d4 (Size: 405 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * Naming   : String 'Trap activation of shot 0'
 * Callers  : 1 -> 0x76319
 * Callees  : 4 -> 0x10d08, 0x442ca, 0x6e538, 0xe69fc
 * Strings  :
 *   - 0x167c7f: "trap.cpp"
 *   - 0x167c65: "Trap activation of shot 0"
 ******************************************************************************/
void FUN_000763d4(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_2c;
  short sStack_2a;
  short local_28;
  undefined *local_24;
  undefined *local_20;
  uint local_1c;
  uint local_18;
  
  psVar4 = &local_2c;
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0x36;
  local_24 = &DAT_0018fd09 + iVar1;
  if ((&DAT_0018fd23)[iVar1] == '\0') {
    uStack_30 = 0x763ce;
    FUN_000ddaf0();
  }
  else {
    local_20 = &DAT_00188c94 + (uint)(byte)(&DAT_0018fd23)[iVar1] * 0x65;
    uStack_30 = 0x76418;
    iVar1 = FUN_000442ca();
    if (iVar1 != 0) {
      local_1c = (uint)*(ushort *)(in_EAX + 0xd);
      uStack_30 = 0x76437;
      iVar2 = FUN_000e69fc();
      local_1c = (uint)*(ushort *)(in_EAX + 0xf);
      local_18 = (uint)*(ushort *)(extraout_ECX + 0xf);
      uStack_30 = 0x76452;
      uVar5 = FUN_000e69fc();
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 < iVar2) {
        if (*(ushort *)(extraout_ECX_00 + 0xd) < *(ushort *)(in_EAX + 0xd)) {
          *(undefined2 *)(iVar3 + 0x52) = 0x600;
        }
        else {
          *(undefined2 *)(iVar3 + 0x52) = 0x200;
        }
      }
      else if (*(ushort *)(extraout_ECX_00 + 0xf) < *(ushort *)(in_EAX + 0xf)) {
        *(undefined2 *)(iVar3 + 0x52) = 0;
      }
      else {
        *(undefined2 *)(iVar3 + 0x52) = 0x400;
      }
      *(undefined2 *)(iVar1 + 0x54) = 0;
      uStack_30 = 0x764a3;
      FUN_00010d08();
      *(short *)(iVar1 + 0x32) = *(short *)(iVar1 + 0x32) + local_2c;
      *(short *)(iVar1 + 0x34) = *(short *)(iVar1 + 0x34) + sStack_2a;
      *(short *)(iVar1 + 0x36) = *(short *)(iVar1 + 0x36) + local_28;
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 4;
      *(undefined *)(iVar1 + 0x16) = local_24[0x1b];
      if (*(short *)(local_20 + 0x1b) != 0) {
        uStack_30 = 0x100;
        uStack_34 = 6;
        uStack_38 = 0;
        DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
        psVar4 = (short *)&uStack_3c;
        uStack_3c = 3;
        DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
        FUN_0006e538();
      }
      if (*(short *)(local_20 + 0x1e) != 0) {
        *(undefined4 *)((int)psVar4 + -4) = 0x100;
        *(undefined4 *)((int)psVar4 + -8) = 2;
        *(undefined4 *)((int)psVar4 + -0xc) = 0;
        *(undefined4 *)((int)psVar4 + -0x10) = 3;
        *(undefined4 *)((int)psVar4 + -0x14) = 0x76550;
        FUN_0006e538();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_trap_activation_shot_076569 (Ghidra: FUN_00076569)
 * Prototype: void dk_trap_activation_shot_076569(void);
 * Address  : 0x76569 (Size: 218 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * Naming   : String 'Trap activation of shot 0'
 * Callers  : 1 -> 0x4af38
 * Callees  : 2 -> 0x10d08, 0x442ca
 * Strings  :
 *   - 0x167ca2: "trap.cpp"
 *   - 0x167c88: "Trap activation of shot 0"
 ******************************************************************************/
void FUN_00076569(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined2 extraout_CX;
  short local_20;
  short sStack_1e;
  short local_1c;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0x36;
  if ((&DAT_0018fd23)[iVar1] == '\0') {
    FUN_000ddaf0();
  }
  else {
    iVar2 = FUN_000442ca();
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x54) = 0;
      *(undefined2 *)(iVar2 + 0x52) = extraout_CX;
      FUN_00010d08();
      *(short *)(iVar2 + 0x32) = *(short *)(iVar2 + 0x32) + local_20;
      *(short *)(iVar2 + 0x34) = *(short *)(iVar2 + 0x34) + sStack_1e;
      *(short *)(iVar2 + 0x36) = *(short *)(iVar2 + 0x36) + local_1c;
      *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 4;
      *(undefined *)(iVar2 + 0x16) = (&DAT_0018fd24)[iVar1];
      *(int *)(in_EAX + 0x14) =
           DAT_002e8bee + *(int *)(&DAT_001ae8a0 + (uint)*(byte *)(in_EAX + 0x1a) * 0x14);
      if ((*(char *)(in_EAX + 0x13) != -1) &&
         (*(char *)(in_EAX + 0x13) = *(char *)(in_EAX + 0x13) + -1, *(char *)(in_EAX + 0x13) == '\0'
         )) {
        *(undefined2 *)(in_EAX + 0x5e) = 0xffff;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_trap_activation_effect_076643 (Ghidra: FUN_00076643)
 * Prototype: void dk_trap_activation_effect_076643(void);
 * Address  : 0x76643 (Size: 73 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp:372 ("Trap activation of effect 0")
 * Naming   : String 'Trap activation of effect 0'
 * Callers  : 1 -> 0x76319
 * Callees  : 2 -> 0x24998, 0xddaf0
 * Strings  :
 *   - 0x167cc7: "trap.cpp"
 *   - 0x167cab: "Trap activation of effect 0"
 ******************************************************************************/
void FUN_00076643(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  
  if ((&DAT_0018fd23)[(uint)*(byte *)(in_EAX + 0x1a) * 0x36] == '\0') {
    FUN_000ddaf0(); /* LbErrorLog("trap.cpp", line 372, "Trap activation of effect 0") */
  }
  else {
    iVar1 = FUN_00024998();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x16) = *(undefined1 *)(extraout_ECX + 0x1b);
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_trap_activation_shot_07668c (Ghidra: FUN_0007668c)
 * Prototype: void dk_trap_activation_shot_07668c(void);
 * Address  : 0x7668c (Size: 110 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp:402 ("Trap activation of shot 0")
 * Naming   : String 'Trap activation of shot 0'
 * Callers  : 1 -> 0x76319
 * Callees  : 2 -> 0x442ca, 0xddaf0
 * Strings  :
 *   - 0x167cea: "trap.cpp"
 *   - 0x167cd0: "Trap activation of shot 0"
 ******************************************************************************/
void FUN_0007668c(void)

{
  undefined1 uVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  
  if ((&DAT_0018fd23)[(uint)*(byte *)(in_EAX + 0x1a) * 0x36] == '\0') {
    FUN_000ddaf0(); /* LbErrorLog("trap.cpp", line 402, "Trap activation of shot 0") */
  }
  else {
    iVar3 = FUN_000442ca();
    if (iVar3 != 0) {
      uVar1 = *(undefined1 *)(extraout_ECX + 0x1b);
      *(undefined2 *)(iVar3 + 0x1d) = 0;
      *(undefined1 *)(iVar3 + 0x16) = uVar1;
      *(short *)(iVar3 + 0x32) = *(short *)(iVar3 + 0x32) + *(short *)(extraout_ECX + 0x30);
      *(short *)(iVar3 + 0x34) = *(short *)(iVar3 + 0x34) + *(short *)(extraout_ECX + 0x32);
      sVar2 = *(short *)(extraout_ECX + 0x34);
      *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) | 4;
      *(short *)(iVar3 + 0x36) = *(short *)(iVar3 + 0x36) + sVar2;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0766fa (Ghidra: FUN_000766fa)
 * Prototype: void sub_0766fa(void);
 * Address  : 0x766fa (Size: 89 bytes)
 * Module   : trap.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x76319
 * Callees  : 2 -> 0xd7688, 0xda6fc
 ******************************************************************************/
void FUN_000766fa(void)

{
  int in_EAX;
  
  FUN_000d7688(0,*(undefined1 *)(in_EAX + 0xe),*(undefined1 *)(in_EAX + 0x10));
  FUN_000da6fc();
  return;
}

/******************************************************************************
 * Function : sub_076753 (Ghidra: FUN_00076753)
 * Prototype: uint sub_076753(void);
 * Address  : 0x76753 (Size: 54 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4a40c, 0x4a6a2, 0x5f6c5, 0xc4b0c
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00076753(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 + (in_EAX + in_EDX * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x1f) == '\b') break;
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_076789 (Ghidra: FUN_00076789)
 * Prototype: uint sub_076789(void);
 * Address  : 0x76789 (Size: 104 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x5bf63, 0x5f6c5, 0x8f518, 0x8f75c, 0x8f924, 0x8fb10
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00076789(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (0x11 < iVar2) {
      return 0;
    }
    uVar1 = (*(uint *)((int)&DAT_00279203 +
                      ((int)*(char *)((int)&DAT_0018b647 + iVar2 + 3) + in_EAX * 3 + 1 +
                      ((int)(char)(&DAT_0018b64b)[iVar2] + in_EDX * 3 + 1) * 0x100) * 5 + 1) &
            0x3fffff) >> 0xb;
    while( true ) {
      uVar1 = (&DAT_001ae9fc)[uVar1];
      if (uVar1 <= DAT_001ae9fc) break;
      if (*(char *)(uVar1 + 0x1f) == '\b') {
        return uVar1;
      }
      uVar1 = (uint)*(ushort *)(uVar1 + 2);
    }
    iVar2 = iVar2 + 2;
  } while( true );
}

/******************************************************************************
 * Function : sub_0767f1 (Ghidra: FUN_000767f1)
 * Prototype: undefined8 sub_0767f1(void);
 * Address  : 0x767f1 (Size: 15 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4a40c, 0x4a6a2, 0x5f6c5, 0xc4b0c
 * Callees  : 1 -> 0x72af4
 ******************************************************************************/
undefined8 FUN_000767f1(void)

{
  undefined4 in_EDX;
  
  FUN_00072af4();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_076800 (Ghidra: FUN_00076800)
 * Prototype: void sub_076800(void);
 * Address  : 0x76800 (Size: 198 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5ac80
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_00076800(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  char in_DL;
  
  if (*(short *)(&DAT_003776e4 + in_EAX * 2) != 0) {
    iVar1 = (&DAT_001ae9fc)[*(ushort *)(&DAT_003776e4 + in_EAX * 2)];
    do {
      iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x67)];
      if (iVar1 == DAT_001ae9fc) break;
    } while ((in_DL != *(char *)(iVar1 + 6)) || (*(byte *)(iVar1 + 0x1a) != in_EAX));
    *(undefined2 *)(&DAT_003776e4 + in_EAX * 2) = *(undefined2 *)(iVar1 + 0x1b);
  }
  uVar2 = DAT_002e6eee;
  if (*(short *)(&DAT_003776e4 + in_EAX * 2) == 0) {
    while (iVar1 = (&DAT_001ae9fc)[uVar2], iVar1 != DAT_001ae9fc) {
      if ((in_DL == *(char *)(iVar1 + 6)) && (*(byte *)(iVar1 + 0x1a) == in_EAX)) {
        *(undefined2 *)(&DAT_003776e4 + in_EAX * 2) = *(undefined2 *)(iVar1 + 0x1b);
        break;
      }
      uVar2 = (uint)*(ushort *)(iVar1 + 0x67);
    }
  }
  if (*(short *)(&DAT_003776e4 + in_EAX * 2) != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_0768c6 (Ghidra: FUN_000768c6)
 * Prototype: int sub_0768c6(void);
 * Address  : 0x768c6 (Size: 53 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x55e33
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000768c6(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  uint3 uVar3;
  char in_DL;
  
  uVar2 = DAT_002e6eee;
  while( true ) {
    iVar1 = (&DAT_001ae9fc)[uVar2];
    uVar3 = (uint3)((uint)iVar1 >> 8);
    if (iVar1 == DAT_001ae9fc) {
      return (uint)uVar3 << 8;
    }
    if ((in_DL == *(char *)(iVar1 + 6)) && (*(byte *)(iVar1 + 0x1a) == in_EAX)) break;
    uVar2 = (uint)*(ushort *)(iVar1 + 0x67);
  }
  return CONCAT31(uVar3,1);
}

