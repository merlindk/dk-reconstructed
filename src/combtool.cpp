/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: combtool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 32
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0173e8 (Ghidra: FUN_000173e8)
 * Prototype: int sub_0173e8(void);
 * Address  : 0x173e8 (Size: 200 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x162f2, 0x174b0, 0x175fa, 0x176c6, 0x1781a, 0x18119
 * Callees  : 1 -> 0x15db4
 ******************************************************************************/
int FUN_000173e8(void)

{
  int in_EAX;
  int in_ECX;
  int extraout_ECX;
  int in_EDX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  iVar2 = 1;
  if ((&DAT_002e918a)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\x02') {
    if (unaff_EBX != 2) {
      uVar3 = FUN_00015db4();
      iVar1 = (int)((ulonglong)uVar3 >> 0x20);
      in_ECX = extraout_ECX;
      if ((int)uVar3 == 0) goto LAB_00017458;
    }
    iVar2 = (4 - (uint)*(byte *)(iVar1 + 0x1c)) * 0x102 + 0x102;
    if (0x14ff < in_ECX) {
      in_ECX = 0x1500;
    }
  }
  else {
    if (unaff_EBX != 2) {
      iVar2 = 0x102;
    }
LAB_00017458:
    if (unaff_EBX == 2) {
      iVar2 = iVar2 + (4 - (uint)*(byte *)(iVar1 + 0x1c)) * 0x102;
    }
    else {
      iVar2 = iVar2 + (4 - (uint)*(byte *)(iVar1 + 0x1b)) * 0x102 + 0x80;
    }
    if (0x14ff < in_ECX) {
      in_ECX = 0x1500;
    }
  }
  return ((0x1500 - in_ECX) * 0x100) / 0x1500 + iVar2;
}

/******************************************************************************
 * Function : sub_0176c6 (Ghidra: FUN_000176c6)
 * Prototype: int sub_0176c6(void);
 * Address  : 0x176c6 (Size: 340 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1781a
 * Callees  : 3 -> 0x16175, 0x173e8, 0x189d4
 ******************************************************************************/
int FUN_000176c6(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *in_EDX;
  int unaff_EBX;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int aiStack_50 [4];
  undefined4 *local_40;
  int *local_3c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  piVar4 = aiStack_50 + 2;
  local_1c = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_10 = 0;
  local_40 = in_EDX;
  local_3c = in_ECX;
  if (*(char *)(local_1c + 0x1b) != '\0') {
    aiStack_50[2] = local_1c + 8;
    piVar5 = aiStack_50 + 2;
    local_18 = local_1c;
    do {
      piVar4 = piVar5;
      if (*(ushort *)(local_18 + 0xb) != 0) {
        uVar1 = (&DAT_001ae9fc)[*(ushort *)(local_18 + 0xb)];
        *(undefined4 *)((int)piVar5 + -4) = 0x17728;
        iVar2 = FUN_000189d4();
        if (iVar2 < unaff_EBX) {
          *(undefined4 *)((int)piVar5 + -4) = 0;
          *(undefined4 *)((int)piVar5 + -8) = 0x17743;
          iVar2 = FUN_00016175();
          piVar4 = (int *)((int)piVar5 + -4);
          if (0 < iVar2) {
            *(undefined4 *)((int)piVar5 + -8) = 0x17759;
            iVar3 = FUN_000173e8();
            piVar4 = (int *)((int)piVar5 + -4);
            if (local_10 < iVar3) {
              piVar4 = (int *)((int)piVar5 + -4);
              local_28 = uVar1;
              local_20 = iVar2;
              local_10 = iVar3;
            }
          }
        }
      }
      local_18 = local_18 + 2;
      piVar5 = piVar4;
    } while (local_18 != aiStack_50[2]);
    if (local_10 != 0) goto LAB_00017775;
  }
  if (*(char *)(local_1c + 0x1c) != '\0') {
    aiStack_50[3] = local_1c + 8;
    puVar7 = (undefined1 *)piVar4;
    do {
      puVar6 = puVar7;
      if (*(ushort *)(local_1c + 0x13) != 0) {
        uVar1 = (&DAT_001ae9fc)[*(ushort *)(local_1c + 0x13)];
        *(undefined4 *)(puVar7 + -4) = 0x177c8;
        iVar2 = FUN_000189d4();
        if (iVar2 < unaff_EBX) {
          *(undefined4 *)(puVar7 + -4) = 0;
          *(undefined4 *)(puVar7 + -8) = 0x177e2;
          iVar2 = FUN_00016175();
          puVar6 = puVar7 + -4;
          if (0 < iVar2) {
            *(undefined4 *)(puVar7 + -8) = 0x177f7;
            iVar3 = FUN_000173e8();
            puVar6 = puVar7 + -4;
            if (local_10 < iVar3) {
              puVar6 = puVar7 + -4;
              local_28 = uVar1;
              local_20 = iVar2;
              local_10 = iVar3;
            }
          }
        }
      }
      local_1c = local_1c + 2;
      puVar7 = puVar6;
    } while (local_1c != aiStack_50[3]);
    if (local_10 != 0) {
LAB_00017775:
      *local_40 = local_28;
      *local_3c = local_10;
      return local_20;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01781a (Ghidra: FUN_0001781a)
 * Prototype: int sub_01781a(void);
 * Address  : 0x1781a (Size: 204 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15be4
 * Callees  : 6 -> 0x15ef2, 0x15f21, 0x16175, 0x173e8, 0x176c6, 0x189d4
 ******************************************************************************/
int FUN_0001781a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EDX;
  int unaff_EBX;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  int aiStack_34 [5];
  
  piVar5 = aiStack_34 + 2;
  aiStack_34[3] = 0;
  aiStack_34[4] = FUN_000176c6();
  uVar6 = DAT_002e6eb6;
  if (0 < aiStack_34[4]) {
    *in_EDX = aiStack_34[2];
    return aiStack_34[4];
  }
  while (iVar1 = (&DAT_001ae9fc)[uVar6], iVar1 != DAT_001ae9fc) {
    *(undefined4 *)((int)piVar5 + -4) = 0x17877;
    iVar2 = FUN_00015f21();
    puVar4 = (undefined1 *)piVar5;
    if (iVar2 != 0) {
      *(undefined4 *)((int)piVar5 + -4) = 0x17884;
      iVar2 = FUN_00015ef2();
      if (iVar2 == 0) {
        *(undefined4 *)((int)piVar5 + -4) = 0x17891;
        iVar2 = FUN_000189d4();
        if (iVar2 < unaff_EBX) {
          *(undefined4 *)((int)piVar5 + -4) = 0;
          *(undefined4 *)((int)piVar5 + -8) = 0x178a8;
          iVar2 = FUN_00016175();
          puVar4 = (undefined1 *)((int)piVar5 + -4);
          if (0 < iVar2) {
            *(undefined4 *)((int)piVar5 + -8) = 0x178bd;
            iVar3 = FUN_000173e8();
            puVar4 = (undefined1 *)((int)piVar5 + -4);
            if (aiStack_34[3] < iVar3) {
              puVar4 = (undefined1 *)((int)piVar5 + -4);
              aiStack_34[2] = iVar1;
              aiStack_34[3] = iVar3;
              aiStack_34[4] = iVar2;
            }
          }
        }
      }
    }
    piVar5 = (int *)puVar4;
    uVar6 = (uint)*(ushort *)(iVar1 + 0x67);
  }
  if (aiStack_34[3] == 0) {
    return 0;
  }
  *in_EDX = aiStack_34[2];
  return aiStack_34[4];
}

/******************************************************************************
 * Function : sub_0178e6 (Ghidra: FUN_000178e6)
 * Prototype: undefined4 sub_0178e6(void);
 * Address  : 0x178e6 (Size: 7 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x18119
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000178e6(void)

{
  return 0;
}

/******************************************************************************
 * Function : dk_creature_combat_already_adding_0178ed (Ghidra: FUN_000178ed)
 * Prototype: undefined4 dk_creature_combat_already_adding_0178ed(void);
 * Address  : 0x178ed (Size: 161 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:365 ("I Cannot Add A Melee Attacker - NOT POSSIBLE")
 * Naming   : String 'CREATURE IN COMBAT ALREADY - ADDING MELEE'
 * Callers  : 1 -> 0x17e7e
 * Callees  : 2 -> 0x13bae, 0xddaf0
 * Strings  :
 *   - 0x1606da: "combtool.cpp"
 *   - 0x160714: "combtool.cpp"
 *   - 0x1606b0: "CREATURE IN COMBAT ALREADY - ADDING MELEE"
 *   - 0x1606e7: "I Cannot Add A Melee Attacker - NOT POSSIBLE"
 ******************************************************************************/
undefined4 FUN_000178ed(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (*(char *)(iVar2 + 3) == '\0') {
    if (3 < *(byte *)(iVar1 + 0x1b)) {
      return 0;
    }
    *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 1;
    *(undefined2 *)(iVar2 + 0xa2) = *(undefined2 *)(in_EDX + 0x1b);
    *(undefined4 *)(iVar2 + 0x9e) = *(undefined4 *)(in_EDX + 9);
    iVar2 = iVar1;
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*(short *)(iVar2 + 0xb) == 0) {
        *(char *)(iVar1 + 0x1b) = *(char *)(iVar1 + 0x1b) + '\x01';
        *(undefined2 *)(iVar2 + 0xb) = *(undefined2 *)(in_EAX + 0x1b);
        FUN_00013bae();
        return 1;
      }
      iVar2 = iVar2 + 2;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 365, "I Cannot Add A Melee Attacker - NOT POSSIBLE") */
  return 0;
}

/******************************************************************************
 * Function : dk_creature_combat_already_adding_01798e (Ghidra: FUN_0001798e)
 * Prototype: undefined4 dk_creature_combat_already_adding_01798e(void);
 * Address  : 0x1798e (Size: 161 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:419 ("I Cannot Add A Ranged Attacker - NOT POSSIBLE")
 * Naming   : String 'CREATURE IN COMBAT ALREADY - ADDING RANGED'
 * Callers  : 1 -> 0x17e7e
 * Callees  : 2 -> 0x13bae, 0xddaf0
 * Strings  :
 *   - 0x16074c: "combtool.cpp"
 *   - 0x160787: "combtool.cpp"
 *   - 0x160721: "CREATURE IN COMBAT ALREADY - ADDING RANGED"
 *   - 0x160759: "I Cannot Add A Ranged Attacker - NOT POSSIBLE"
 ******************************************************************************/
undefined4 FUN_0001798e(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (*(char *)(iVar2 + 3) == '\0') {
    if (3 < *(byte *)(iVar1 + 0x1c)) {
      return 0;
    }
    *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) | 2;
    *(undefined2 *)(iVar2 + 0xa2) = *(undefined2 *)(in_EDX + 0x1b);
    *(undefined4 *)(iVar2 + 0x9e) = *(undefined4 *)(in_EDX + 9);
    iVar2 = iVar1;
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*(short *)(iVar2 + 0x13) == 0) {
        *(char *)(iVar1 + 0x1c) = *(char *)(iVar1 + 0x1c) + '\x01';
        *(undefined2 *)(iVar2 + 0x13) = *(undefined2 *)(in_EAX + 0x1b);
        FUN_00013bae();
        return 1;
      }
      iVar2 = iVar2 + 2;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 419, "I Cannot Add A Ranged Attacker - NOT POSSIBLE") */
  return 0;
}

/******************************************************************************
 * Function : dk_creature_combat_already_waiting_017a2f (Ghidra: FUN_00017a2f)
 * Prototype: undefined4 dk_creature_combat_already_waiting_017a2f(void);
 * Address  : 0x17a2f (Size: 80 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:438 ("CREATURE IN COMBAT ALREADY - WAITING")
 * Naming   : String 'CREATURE IN COMBAT ALREADY - WAITING'
 * Callers  : 1 -> 0x17e7e
 * Callees  : 2 -> 0x13bae, 0xddaf0
 * Strings  :
 *   - 0x1607b9: "combtool.cpp"
 *   - 0x160794: "CREATURE IN COMBAT ALREADY - WAITING"
 ******************************************************************************/
undefined4 FUN_00017a2f(void)

{
  int in_EAX;
  int extraout_ECX;
  int iVar1;
  int in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar1 + 3) != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 438, "CREATURE IN COMBAT ALREADY - WAITING") */
    iVar1 = extraout_ECX;
  }
  *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 4;
  *(undefined2 *)(iVar1 + 0xa2) = *(undefined2 *)(in_EDX + 0x1b);
  *(undefined4 *)(iVar1 + 0x9e) = *(undefined4 *)(in_EDX + 9);
  FUN_00013bae();
  return 0;
}

/******************************************************************************
 * Function : dk_combat_count_incorrect_017a7f (Ghidra: FUN_00017a7f)
 * Prototype: void dk_combat_count_incorrect_017a7f(void);
 * Address  : 0x17a7f (Size: 221 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:460 ("COMBAT COUNT INCORRECT"); combtool.cpp:469 ("TRYING TO REMOVE NULL MELEE ENEMY!"); combtool.cpp:506 ("Thing has no melee attackers to be removed!")
 * Naming   : String 'COMBAT COUNT INCORRECT'
 * Callers  : 2 -> 0x17c99, 0x1836b
 * Callees  : 2 -> 0x13e1b, 0xddaf0
 * Strings  :
 *   - 0x1607dd: "combtool.cpp"
 *   - 0x16080d: "combtool.cpp"
 *   - 0x160846: "combtool.cpp"
 *   - 0x1607c6: "COMBAT COUNT INCORRECT"
 *   - 0x1607ea: "TRYING TO REMOVE NULL MELEE ENEMY!"
 *   - 0x16081a: "Thing has no melee attackers to be removed!"
 ******************************************************************************/
void FUN_00017a7f(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar2 = *(char *)(in_EAX + 6) * 0x1508;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (*(int *)(&DAT_002e1a32 + iVar2) < 1) {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 460, "COMBAT COUNT INCORRECT") */
    iVar3 = extraout_ECX;
  }
  else {
    *(int *)(&DAT_002e1a32 + iVar2) = *(int *)(&DAT_002e1a32 + iVar2) + -1;
  }
  if (in_EDX == DAT_001ae9fc) {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 469, "TRYING TO REMOVE NULL MELEE ENEMY!") */
  }
  else {
    if (*(char *)(iVar1 + 0x1b) == '\0') {
      FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 506, "Thing has no melee attackers to be removed!") */
    }
    else {
      iVar2 = iVar1;
      for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
        if (*(short *)(iVar2 + 0xb) == *(short *)(in_EAX + 0x1b)) {
          *(char *)(iVar1 + 0x1b) = *(char *)(iVar1 + 0x1b) + -1;
          *(undefined2 *)(iVar2 + 0xb) = 0;
          break;
        }
        iVar2 = iVar2 + 2;
      }
      *(undefined2 *)(iVar3 + 0xa2) = 0;
      *(undefined1 *)(iVar3 + 0xa9) = 0;
      *(undefined4 *)(iVar3 + 0x9e) = 0;
      *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) & 0xfe;
    }
    FUN_00013e1b();
  }
  return;
}

/******************************************************************************
 * Function : dk_fight_count_incorrect_017b5c (Ghidra: FUN_00017b5c)
 * Prototype: void dk_fight_count_incorrect_017b5c(void);
 * Address  : 0x17b5c (Size: 211 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:523 ("FIGHT COUNT INCORRECT"); combtool.cpp:534 ("TRYING TO REMOVE NULL RANGED ENEMY!")
 * Naming   : String 'FIGHT COUNT INCORRECT'
 * Callers  : 2 -> 0x17c99, 0x1836b
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x160869: "combtool.cpp"
 *   - 0x16089a: "combtool.cpp"
 *   - 0x1608d4: "combtool.cpp"
 *   - 0x160853: "FIGHT COUNT INCORRECT"
 *   - 0x160876: "TRYING TO REMOVE NULL RANGED ENEMY!"
 *   - 0x1608a7: "Thing has no ranged attackers to be removed!"
 ******************************************************************************/
void FUN_00017b5c(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar2 = *(char *)(in_EAX + 6) * 0x1508;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (*(int *)(&DAT_002e1a32 + iVar2) < 1) {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 523, "FIGHT COUNT INCORRECT") */
    iVar3 = extraout_ECX;
  }
  else {
    *(int *)(&DAT_002e1a32 + iVar2) = *(int *)(&DAT_002e1a32 + iVar2) + -1;
  }
  if (in_EDX == DAT_001ae9fc) {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 534, "TRYING TO REMOVE NULL RANGED ENEMY!") */
  }
  else {
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_000ddaf0();
    }
    else {
      iVar2 = iVar1;
      for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
        if (*(short *)(iVar2 + 0x13) == *(short *)(in_EAX + 0x1b)) {
          *(char *)(iVar1 + 0x1c) = *(char *)(iVar1 + 0x1c) + -1;
          *(undefined2 *)(iVar2 + 0x13) = 0;
          break;
        }
        iVar2 = iVar2 + 2;
      }
      *(undefined2 *)(iVar3 + 0xa2) = 0;
      *(undefined1 *)(iVar3 + 0xa9) = 0;
      *(undefined4 *)(iVar3 + 0x9e) = 0;
      *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) & 0xfd;
    }
    FUN_00013e1b();
  }
  return;
}

/******************************************************************************
 * Function : dk_fight_count_incorrect_017c2f (Ghidra: FUN_00017c2f)
 * Prototype: void dk_fight_count_incorrect_017c2f(void);
 * Address  : 0x17c2f (Size: 106 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:587 ("FIGHT COUNT INCORRECT")
 * Naming   : String 'FIGHT COUNT INCORRECT'
 * Callers  : 1 -> 0x17c99
 * Callees  : 2 -> 0x13e1b, 0xddaf0
 * Strings  :
 *   - 0x1608f7: "combtool.cpp"
 *   - 0x1608e1: "FIGHT COUNT INCORRECT"
 ******************************************************************************/
void FUN_00017c2f(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  iVar1 = *(char *)(in_EAX + 6) * 0x1508;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(int *)(&DAT_002e1a32 + iVar1) < 1) {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 587, "FIGHT COUNT INCORRECT") */
    iVar2 = extraout_ECX;
  }
  else {
    *(int *)(&DAT_002e1a32 + iVar1) = *(int *)(&DAT_002e1a32 + iVar1) + -1;
  }
  *(undefined2 *)(iVar2 + 0xa2) = 0;
  *(undefined1 *)(iVar2 + 0xa9) = 0;
  *(undefined4 *)(iVar2 + 0x9e) = 0;
  *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0xfb;
  FUN_00013e1b();
  return;
}

/******************************************************************************
 * Function : sub_017c99 (Ghidra: FUN_00017c99)
 * Prototype: void sub_017c99(void);
 * Address  : 0x17c99 (Size: 57 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x180e7, 0x1836b
 * Callees  : 3 -> 0x17a7f, 0x17b5c, 0x17c2f
 ******************************************************************************/
void FUN_00017c99(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(byte *)(iVar1 + 3) & 1) != 0) {
    FUN_00017a7f();
    return;
  }
  if ((*(byte *)(iVar1 + 3) & 2) != 0) {
    FUN_00017b5c();
    return;
  }
  if ((*(byte *)(iVar1 + 3) & 4) != 0) {
    FUN_00017c2f();
  }
  return;
}

/******************************************************************************
 * Function : dk_creature_has_dungeon_heart_017cd2 (Ghidra: FUN_00017cd2)
 * Prototype: undefined4 dk_creature_has_dungeon_heart_017cd2(void);
 * Address  : 0x17cd2 (Size: 222 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:661 ("CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE DESIGN ERROR")
 * Naming   : String 'CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE '
 * Callers  : 1 -> 0x17db0
 * Callees  : 2 -> 0x38f2b, 0xddaf0
 * Strings  :
 *   - 0x16094d: "combtool.cpp"
 *   - 0x160904: "CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE DESIGN ERROR"
 ******************************************************************************/
undefined4 FUN_00017cd2(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 *in_EDX;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar4 = (uint)*(char *)(in_EAX + 6);
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((int)uVar4 < (int)(uint)DAT_002eb542) {
    if (*(ushort *)(iVar1 + 0x6a) == 0) {
      if ((&DAT_002e0589)[uVar4 * 0xa84] == 0) {
        iVar3 = uVar4 * 0x4ef;
        if (((((&DAT_0019d0c8)[iVar3] & 1) != 0) && ((&DAT_0019d0f4)[iVar3] == '\x01')) &&
           ((&DAT_0019d0f1)[iVar3] != '\x02')) {
          FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 661, "CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE DESIGN ERROR") */
          return 0;
        }
        in_EDX = (undefined4 *)(iVar1 + 0x288);
      }
      else {
        in_EAX = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[uVar4 * 0xa84]];
      }
    }
    else {
      in_EAX = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x6a)];
    }
  }
  else if ((uVar4 != DAT_002eb542) || (in_EAX = FUN_00038f2b(), in_EAX == 0)) {
    if ((*(short *)(iVar1 + 0x288) != 0) || (uVar2 = 0, *(short *)(iVar1 + 0x28a) != 0)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  *in_EDX = *(undefined4 *)(in_EAX + 0xd);
  *(undefined2 *)(in_EDX + (uint)bVar5 * -2 + 1) = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar5 * -8)
  ;
  return 1;
}

/******************************************************************************
 * Function : dk_couldn_get_flee_position_017db0 (Ghidra: FUN_00017db0)
 * Prototype: void dk_couldn_get_flee_position_017db0(void);
 * Address  : 0x17db0 (Size: 82 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:695 ("COULDN'T GET A FLEE POSITION")
 * Naming   : String 'COULDN'T GET A FLEE POSITION'
 * Callers  : 4 -> 0x17fee, 0x1829f, 0x50349, 0x74038
 * Callees  : 2 -> 0x17cd2, 0xddaf0
 * Strings  :
 *   - 0x160977: "combtool.cpp"
 *   - 0x16095a: "COULDN'T GET A FLEE POSITION"
 ******************************************************************************/
void FUN_00017db0(void)

{
  int in_EAX;
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  iVar1 = FUN_00017cd2();
  if (iVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 695, "COULDN'T GET A FLEE POSITION") */
    iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    *(undefined4 *)(iVar1 + 0x288) = *(undefined4 *)(in_EAX + 0xd);
    *(undefined2 *)(iVar1 + 0x28c + (uint)bVar2 * -8) =
         *(undefined2 *)(in_EAX + 0x11 + (uint)bVar2 * -8);
  }
  return;
}

/******************************************************************************
 * Function : sub_017e02 (Ghidra: FUN_00017e02)
 * Prototype: undefined4 sub_017e02(void);
 * Address  : 0x17e02 (Size: 124 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1829f
 * Callees  : 1 -> 0x15db4
 ******************************************************************************/
undefined4 FUN_00017e02(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  int unaff_EBX;
  undefined8 uVar2;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  if (unaff_EBX == 2) {
    if (*(byte *)(iVar1 + 0x1c) < 4) {
      return 2;
    }
  }
  else {
    if ((&DAT_002e918a)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\x02') {
      uVar2 = FUN_00015db4();
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      if (((int)uVar2 != 0) && (*(byte *)(iVar1 + 0x1c) < 4)) {
        return 2;
      }
    }
    if (*(byte *)(iVar1 + 0x1b) < 4) {
      return 3;
    }
    uVar2 = FUN_00015db4();
    if (((int)uVar2 != 0) && (*(byte *)((int)((ulonglong)uVar2 >> 0x20) + 0x1c) < 4)) {
      return 2;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_017e7e (Ghidra: FUN_00017e7e)
 * Prototype: void sub_017e7e(void);
 * Address  : 0x17e7e (Size: 368 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x17fee, 0x18087, 0x180e7
 * Callees  : 6 -> 0x15db4, 0x178ed, 0x1798e, 0x17a2f, 0x51374, 0x6edb9
 ******************************************************************************/
void FUN_00017e7e(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(int *)(&DAT_002e1a32 + *(char *)(in_EAX + 6) * 0x1508) =
       *(int *)(&DAT_002e1a32 + *(char *)(in_EAX + 6) * 0x1508) + 1;
  *(char *)(iVar1 + 0xa7) = (char)unaff_EBX;
  if ((((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 3) & 1) == 0) &&
      ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 3) & 2) == 0)) &&
     (((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] ||
      ((int)*(char *)(in_EDX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])))) {
    FUN_00051374();
  }
  if (unaff_EBX == 2) {
    iVar2 = FUN_0001798e();
  }
  else {
    if ((((&DAT_002e918a)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\x02') &&
        (iVar2 = FUN_00015db4(), iVar2 != 0)) && (iVar2 = FUN_0001798e(), iVar2 != 0))
    goto LAB_00017f44;
    iVar2 = FUN_000178ed();
    if (iVar2 != 0) {
      FUN_0006edb9();
      *(undefined1 *)(iVar1 + 0xa6) = 3;
      return;
    }
    iVar2 = FUN_00015db4();
    if (iVar2 == 0) goto LAB_00017fd9;
    iVar2 = FUN_0001798e();
  }
  if (iVar2 == 0) {
LAB_00017fd9:
    FUN_00017a2f();
    *(undefined1 *)(iVar1 + 0xa6) = 1;
    return;
  }
LAB_00017f44:
  FUN_0006edb9();
  *(undefined1 *)(iVar1 + 0xa6) = 2;
  return;
}

/******************************************************************************
 * Function : dk_creature_combat_already_state_017fee (Ghidra: FUN_00017fee)
 * Prototype: void dk_creature_combat_already_state_017fee(void);
 * Address  : 0x17fee (Size: 153 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:812
 * Naming   : String 'CREATURE IN COMBAT ALREADY - STATE(%d)'
 * Callers  : 1 -> 0x1829f
 * Callees  : 5 -> 0x17db0, 0x17e7e, 0x64a5f, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1609ab: "combtool.cpp"
 *   - 0x160984: "CREATURE IN COMBAT ALREADY - STATE(%d)"
 ******************************************************************************/
void FUN_00017fee(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined1 uVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (((*(char *)(iVar1 + 3) != '\0') && ((*(byte *)(iVar1 + 3) & 0x10) == 0)) &&
     ((*(byte *)(iVar1 + 3) & 8) == 0)) {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      uVar3 = *(undefined1 *)(in_EAX + 8);
    }
    else {
      uVar3 = *(undefined1 *)(in_EAX + 7);
    }
    FUN_000e7714(&DAT_0019cbac,s_CREATURE_IN_COMBAT_ALREADY___STA_00160984,uVar3);
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 812, g_log_buf) */
    return;
  }
  cVar2 = FUN_00064a5f();
  if (cVar2 != '\0') {
    *(undefined1 *)(iVar1 + 0xaa) = 0;
    *(undefined1 *)(iVar1 + 0xa9) = 0;
    FUN_00017e7e();
    FUN_00017db0();
  }
  return;
}

/******************************************************************************
 * Function : dk_creature_combat_already_adding_018087 (Ghidra: FUN_00018087)
 * Prototype: undefined4 dk_creature_combat_already_adding_018087(void);
 * Address  : 0x18087 (Size: 96 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:842 ("CREATURE IN COMBAT ALREADY - ADDING TILL DEATH")
 * Naming   : String 'CREATURE IN COMBAT ALREADY - ADDING TILL DEATH'
 * Callers  : 3 -> 0x11408, 0x15be4, 0x4d8d2
 * Callees  : 3 -> 0x17e7e, 0x64a5f, 0xddaf0
 * Strings  :
 *   - 0x1609e7: "combtool.cpp"
 *   - 0x1609b8: "CREATURE IN COMBAT ALREADY - ADDING TILL DEATH"
 ******************************************************************************/
undefined4 FUN_00018087(void)

{
  char cVar1;
  int in_EAX;
  int extraout_ECX;
  
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 3) != '\0') {
    FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 842, "CREATURE IN COMBAT ALREADY - ADDING TILL DEATH") */
    return 0;
  }
  cVar1 = FUN_00064a5f();
  if (cVar1 != '\0') {
    FUN_00017e7e();
    *(undefined1 *)(extraout_ECX + 0xaa) = 0;
    *(undefined1 *)(extraout_ECX + 0xa9) = 1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0180e7 (Ghidra: FUN_000180e7)
 * Prototype: void sub_0180e7(void);
 * Address  : 0x180e7 (Size: 50 bytes)
 * Module   : combtool.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x18119, 0x18938
 * Callees  : 2 -> 0x17c99, 0x17e7e
 ******************************************************************************/
void FUN_000180e7(void)

{
  FUN_00017c99();
  FUN_00017e7e();
  return;
}

/******************************************************************************
 * Function : dk_ranged_attackers_serious_018119 (Ghidra: FUN_00018119)
 * Prototype: undefined4 dk_ranged_attackers_serious_018119(void);
 * Address  : 0x18119 (Size: 390 bytes)
 * Module   : combtool.cpp [direct_file_string_xref]
 * OrigLine : combtool.cpp:943 ("NO MELEE ATTACKERS - SERIOUS")
 * Naming   : String 'NO RANGED ATTACKERS - SERIOUS'
 * Callers  : 1 -> 0x18938
 * Callees  : 7 -> 0x1652b, 0x173e8, 0x178e6, 0x180e7, 0x189d4, 0x63b6d, 0xddaf0
 * Strings  :
 *   - 0x160a12: "combtool.cpp"
 *   - 0x160a3c: "combtool.cpp"
 *   - 0x1609f4: "NO RANGED ATTACKERS - SERIOUS"
 *   - 0x160a1f: "NO MELEE ATTACKERS - SERIOUS"
 ******************************************************************************/
undefined4 FUN_00018119(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int unaff_EBX;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = (&DAT_001b0a00)[*(ushort *)(in_EDX + 100)];
  FUN_000189d4();
  iVar2 = FUN_000173e8();
  iVar1 = local_1c + 8;
  local_14 = iVar2;
  if (unaff_EBX == 2) {
    if (*(char *)(local_1c + 0x1c) != '\0') {
      do {
        if (*(short *)(local_1c + 0x13) != 0) {
          FUN_000189d4();
          iVar3 = FUN_000173e8();
          iVar4 = FUN_0001652b();
          if (iVar4 != 0) {
            iVar3 = extraout_ECX + -0x200;
          }
          if (iVar3 < local_14) {
            local_14 = iVar3;
          }
        }
        local_1c = local_1c + 2;
      } while (local_1c != iVar1);
      goto LAB_00018279;
    }
  }
  else {
    local_18 = local_1c;
    if (*(char *)(local_1c + 0x1b) != '\0') {
      do {
        if (*(short *)(local_18 + 0xb) != 0) {
          FUN_000189d4();
          iVar3 = FUN_000173e8();
          iVar4 = FUN_0001652b();
          if (iVar4 != 0) {
            iVar3 = extraout_ECX_00 + -0x200;
          }
          if (iVar3 < local_14) {
            local_14 = iVar3;
          }
        }
        local_18 = local_18 + 2;
      } while (local_18 != iVar1);
      goto LAB_00018279;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("combtool.cpp", line 943, "NO MELEE ATTACKERS - SERIOUS") */
LAB_00018279:
  if (local_14 == iVar2) {
    return 0;
  }
  FUN_00063b6d();
  FUN_000180e7();
  uVar5 = FUN_000178e6();
  return uVar5;
}

/******************************************************************************
 * Function : sub_01829f (Ghidra: FUN_0001829f)
 * Prototype: undefined8 sub_01829f(void);
 * Address  : 0x1829f (Size: 204 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x63dd3, 0xe1b88
 * Callees  : 6 -> 0x1660d, 0x175fa, 0x17db0, 0x17e02, 0x17fee, 0x64a5f
 ******************************************************************************/
undefined8 FUN_0001829f(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = FUN_000175fa();
  if (iVar3 < 1) {
LAB_0001834b:
    if ((*(char *)(iVar1 + 0x1b) != '\0') || (*(char *)(iVar1 + 0x1c) != '\0')) {
      cVar2 = FUN_00064a5f();
      if (cVar2 != '\0') {
LAB_0001832d:
        FUN_00017db0();
        *(undefined4 *)(iVar1 + 0x28e) = DAT_002e8bee;
        goto LAB_0001833f;
      }
    }
  }
  else {
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 3) == '\0') {
LAB_000182ed:
      iVar3 = FUN_0001660d();
      if (iVar3 != 0) {
        if (((*(byte *)(iVar1 + 0xac) & 0x20) != 0) && (*(short *)(iVar1 + 0xaf) < 1))
        goto LAB_0001834b;
        cVar2 = FUN_00064a5f();
        if (cVar2 == '\0') goto LAB_00018367;
        goto LAB_0001832d;
      }
      FUN_00017fee();
LAB_0001833f:
      uVar4 = 1;
      goto LAB_00018344;
    }
    iVar3 = FUN_00017e02();
    if (iVar3 != 1) goto LAB_000182ed;
  }
LAB_00018367:
  uVar4 = 0;
LAB_00018344:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_01836b (Ghidra: FUN_0001836b)
 * Prototype: undefined8 sub_01836b(void);
 * Address  : 0x1836b (Size: 159 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x15a1b, 0x8485c, 0x8608c
 * Callees  : 5 -> 0x14322, 0x17a7f, 0x17b5c, 0x17c99, 0x63b6d
 ******************************************************************************/
undefined8 FUN_0001836b(void)

{
  int iVar1;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(char *)(iVar3 + 3) != '\0') && (*(short *)(iVar3 + 0xa2) != 0)) {
    FUN_00017c99();
    iVar3 = extraout_ECX;
  }
  iVar1 = iVar3 + 8;
  iVar2 = iVar3;
  do {
    if (*(short *)(iVar2 + 0x13) != 0) {
      FUN_00017b5c();
      FUN_00063b6d();
      iVar3 = extraout_ECX_00;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 != iVar1);
  iVar1 = iVar3 + 8;
  do {
    if (*(short *)(iVar3 + 0xb) != 0) {
      FUN_00017a7f();
      FUN_00063b6d();
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 != iVar1);
  FUN_00014322();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_01840a (Ghidra: FUN_0001840a)
 * Prototype: longlong sub_01840a(void);
 * Address  : 0x1840a (Size: 393 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x18593, 0x18607
 * Callees  : 2 -> 0x49e95, 0x49ea9
 ******************************************************************************/
longlong FUN_0001840a(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  uint in_EDX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(byte *)(iVar2 + 0xad) & 4) != 0) {
    iVar1 = FUN_00049e95();
    iVar2 = extraout_ECX;
    if (iVar1 != 0) {
      iVar1 = FUN_00049ea9();
      iVar2 = extraout_ECX_00;
      if (iVar1 != 0) {
        return CONCAT44(in_EDX,0x16);
      }
    }
  }
  if ((*(byte *)(iVar2 + 0xac) & 0x20) == 0) {
    iVar2 = FUN_00049e95();
    if (iVar2 != 0) {
      iVar2 = FUN_00049ea9();
      if (iVar2 != 0) {
        return CONCAT44(in_EDX,0xd);
      }
    }
  }
  iVar1 = FUN_00049e95();
  iVar2 = extraout_ECX_01;
  if ((iVar1 != 0) &&
     ((int)*(short *)(in_EAX + 0x5e) < (int)(*(ushort *)(extraout_ECX_01 + 0xc6) / 3))) {
    iVar1 = FUN_00049ea9();
    iVar2 = extraout_ECX_02;
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,0xb);
    }
  }
  if ((*(byte *)(iVar2 + 0xac) & 4) == 0) {
    iVar1 = FUN_00049e95();
    iVar2 = extraout_ECX_03;
    if (iVar1 != 0) {
      iVar1 = FUN_00049ea9();
      iVar2 = extraout_ECX_04;
      if (iVar1 != 0) {
        return CONCAT44(in_EDX,8);
      }
    }
  }
  if ((*(byte *)(iVar2 + 0xac) & 2) == 0) {
    iVar1 = FUN_00049e95();
    iVar2 = extraout_ECX_05;
    if (iVar1 != 0) {
      iVar1 = FUN_00049ea9();
      iVar2 = extraout_ECX_06;
      if (iVar1 != 0) {
        return CONCAT44(in_EDX,0xf);
      }
    }
  }
  if ((*(byte *)(iVar2 + 0xac) & 8) == 0) {
    iVar1 = FUN_00049e95();
    iVar2 = extraout_ECX_07;
    if (iVar1 != 0) {
      iVar1 = FUN_00049ea9();
      iVar2 = extraout_ECX_08;
      if (iVar1 != 0) {
        return CONCAT44(in_EDX,10);
      }
    }
  }
  if ((*(byte *)(iVar2 + 0xac) & 0x10) == 0) {
    iVar2 = FUN_00049e95();
    if (iVar2 != 0) {
      iVar2 = FUN_00049ea9();
      if (iVar2 != 0) {
        return CONCAT44(in_EDX,0x18);
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_018593 (Ghidra: FUN_00018593)
 * Prototype: int sub_018593(void);
 * Address  : 0x18593 (Size: 116 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x15a23, 0x169a5, 0x16b29
 * Callees  : 3 -> 0x1840a, 0x49e95, 0x49ea9
 ******************************************************************************/
int FUN_00018593(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar2 = FUN_0001840a();
  if (iVar2 == 0) {
    iVar2 = 0;
    for (iVar4 = 0; iVar4 < 0xc0; iVar4 = iVar4 + 0xc) {
      iVar1 = *(int *)((int)&DAT_00174bcc + iVar4);
      iVar3 = FUN_00049e95();
      if (iVar3 != 0) {
        iVar3 = FUN_00049ea9();
        if (((iVar3 != 0) && (*(int *)((int)&DAT_00174bd0 + iVar4) <= in_EDX)) &&
           (in_EDX <= *(int *)((int)&DAT_00174bd4 + iVar4))) {
          return iVar1;
        }
        if (iVar2 == 0) {
          iVar2 = -iVar1;
        }
      }
    }
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_018607 (Ghidra: FUN_00018607)
 * Prototype: int sub_018607(void);
 * Address  : 0x18607 (Size: 106 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15ac2
 * Callees  : 3 -> 0x1840a, 0x49e95, 0x49ea9
 ******************************************************************************/
int FUN_00018607(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  iVar2 = FUN_0001840a();
  if (iVar2 == 0) {
    iVar2 = 0;
    for (iVar4 = 0; iVar4 < 0x54; iVar4 = iVar4 + 0xc) {
      iVar1 = *(int *)((int)&DAT_00174c8c + iVar4);
      iVar3 = FUN_00049e95();
      if (iVar3 != 0) {
        iVar3 = FUN_00049ea9();
        if (((iVar3 != 0) && (*(int *)((int)&DAT_00174c90 + iVar4) <= in_EDX)) &&
           (in_EDX <= *(int *)((int)&DAT_00174c94 + iVar4))) {
          return iVar1;
        }
        if (iVar2 == 0) {
          iVar2 = -iVar1;
        }
      }
    }
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_018671 (Ghidra: FUN_00018671)
 * Prototype: int sub_018671(void);
 * Address  : 0x18671 (Size: 97 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x16df5, 0x17052
 * Callees  : 2 -> 0x49e95, 0x49ea9
 ******************************************************************************/
int FUN_00018671(void)

{
  int iVar1;
  int extraout_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (0x3b < iVar2) {
      return iVar3;
    }
    iVar1 = FUN_00049e95();
    if (iVar1 != 0) {
      iVar1 = FUN_00049ea9();
      if (((iVar1 != 0) && (*(int *)((int)&DAT_00174d74 + iVar2) <= in_EDX)) &&
         (in_EDX <= *(int *)((int)&DAT_00174d78 + iVar2))) {
        return extraout_ECX;
      }
      if (iVar3 == 0) {
        iVar3 = -extraout_ECX;
      }
    }
    iVar2 = iVar2 + 0xc;
  } while( true );
}

/******************************************************************************
 * Function : sub_0186d2 (Ghidra: FUN_000186d2)
 * Prototype: int sub_0186d2(void);
 * Address  : 0x186d2 (Size: 100 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16e9b
 * Callees  : 2 -> 0x49e95, 0x49ea9
 ******************************************************************************/
int FUN_000186d2(void)

{
  int iVar1;
  int extraout_ECX;
  int in_EDX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (0x8f < iVar2) {
      return iVar3;
    }
    iVar1 = FUN_00049e95();
    if (iVar1 != 0) {
      iVar1 = FUN_00049ea9();
      if (((iVar1 != 0) && (*(int *)((int)&DAT_00174ce4 + iVar2) <= in_EDX)) &&
         (in_EDX <= *(int *)((int)&DAT_00174ce8 + iVar2))) {
        return extraout_ECX;
      }
      if (iVar3 == 0) {
        iVar3 = -extraout_ECX;
      }
    }
    iVar2 = iVar2 + 0xc;
  } while( true );
}

/******************************************************************************
 * Function : sub_018736 (Ghidra: FUN_00018736)
 * Prototype: undefined8 sub_018736(void);
 * Address  : 0x18736 (Size: 514 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x666a8
 * Callees  : 2 -> 0x49e95, 0x49ea9
 ******************************************************************************/
undefined8 FUN_00018736(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,5);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,4);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,0x13);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,0x14);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,9);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,0x1b);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,0x1a);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    iVar1 = FUN_00049ea9();
    if (iVar1 != 0) {
      return CONCAT44(in_EDX,0xc);
    }
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xfffffffb);
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xfffffffc);
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xffffffed);
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xffffffec);
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xfffffff7);
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xffffffe5);
  }
  iVar1 = FUN_00049e95();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xffffffe6);
  }
  iVar1 = FUN_00049e95();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xfffffff4;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_018938 (Ghidra: FUN_00018938)
 * Prototype: undefined8 sub_018938(void);
 * Address  : 0x18938 (Size: 156 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15b37
 * Callees  : 5 -> 0x1629a, 0x16376, 0x175fa, 0x180e7, 0x18119
 ******************************************************************************/
undefined8 FUN_00018938(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EDX;
  int local_18;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 7) == 0) {
    iVar2 = FUN_000175fa();
    if (iVar2 != 0) {
      if (*(short *)(local_18 + 0x1b) == *(short *)(iVar3 + 0xa2)) {
        iVar2 = FUN_0001629a();
        if (iVar2 != 0) {
          if (*(char *)(iVar3 + 0xa6) != '\x01') goto LAB_0001895b;
          iVar3 = FUN_00016376();
          if (iVar3 == 0) {
            iVar3 = FUN_00018119();
            if (iVar3 == 0) {
              uVar1 = 0;
              goto LAB_000189ce;
            }
            goto LAB_000189c9;
          }
        }
      }
      FUN_000180e7();
    }
LAB_000189c9:
    uVar1 = 1;
  }
  else {
LAB_0001895b:
    uVar1 = 0;
  }
LAB_000189ce:
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0189d4 (Ghidra: FUN_000189d4)
 * Prototype: int sub_0189d4(void);
 * Address  : 0x189d4 (Size: 43 bytes)
 * Module   : combtool.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 21 -> 0x11408, 0x15a23, 0x15ac2, 0x15b37, 0x16242, 0x162f2, 0x1660d, 0x16df5, 0x16e9b, 0x17052 ...
 * Callees  : 1 -> 0xdc440
 ******************************************************************************/
int FUN_000189d4(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_000dc440();
  return iVar1 - ((uint)*(ushort *)(extraout_ECX + 0x56) + (uint)*(ushort *)(in_EAX + 0x56)) / 2;
}

/******************************************************************************
 * Function : sub_018a0c (Ghidra: FUN_00018a0c)
 * Prototype: undefined8 sub_018a0c(void);
 * Address  : 0x18a0c (Size: 73 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x21416
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00018a0c(void)

{
  int in_EAX;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = in_EAX + 0x620;
  while (((*(byte *)(iVar1 + 4) & 2) == 0 && (0 < *(int *)(in_EAX + 0x10)))) {
    if (((*(byte *)(iVar1 + 4) & 1) == 0) &&
       (*(int *)(iVar1 + 8) < DAT_002e8bee - *(int *)(iVar1 + 0x1c))) {
      (**(code **)(iVar1 + 0xc))();
      *(int *)(iVar1 + 0x1c) = DAT_002e8bee;
      in_EAX = extraout_ECX;
    }
    iVar1 = iVar1 + 0x20;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_018a55 (Ghidra: FUN_00018a55)
 * Prototype: undefined4 sub_018a55(void);
 * Address  : 0x18a55 (Size: 483 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x1d5a1, 0x1f0fb, 0x1f127
 ******************************************************************************/
undefined4 FUN_00018a55(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  int in_EDX;
  int iVar9;
  undefined8 uVar10;
  undefined2 *local_20;
  uint local_1c;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  iVar2 = FUN_0001f0fb();
  iVar3 = FUN_0001f127();
  iVar4 = FUN_0001d5a1();
  local_1c = 0;
  local_20 = &DAT_002e0589;
  iVar9 = 0;
  do {
    uVar5 = (uint)*(char *)(iVar1 + 0xe9f);
    if ((((local_1c != uVar5) && (((&DAT_0019d0c8)[iVar9] & 1) != 0)) &&
        ((&DAT_0019d0f4)[iVar9] == '\x01')) &&
       ((((uVar6 = (uint)DAT_002eb543, uVar6 == uVar5 || (uVar6 == local_1c)) ||
         ((((uint)(byte)(&DAT_0019d0f2)[uVar5 * 0x4ef] & 1 << ((byte)local_1c & 0x1f)) == 0 ||
          ((uVar6 == local_1c || (uVar6 == uVar5)))))) ||
        (((uint)(byte)(&DAT_0019d0f2)[iVar9] & 1 << (*(byte *)(iVar1 + 0xe9f) & 0x1f)) == 0)))) {
      FUN_0001f0fb();
      FUN_0001f127();
      uVar10 = FUN_0001f0fb();
      if (iVar2 <= (int)uVar10) {
        *(int *)(in_EAX + 0xa16) = *(int *)(in_EAX + 0xa16) + 1;
      }
      if (iVar3 + iVar3 / 6 < (int)((ulonglong)uVar10 >> 0x20)) {
        *(int *)(in_EAX + 0xa16) = *(int *)(in_EAX + 0xa16) + 1;
      }
      if ((uint)*(byte *)(iVar1 + 0x93a) + *(byte *)(iVar1 + 0x93a) / 6 <
          (uint)*(byte *)(local_20 + 0x49d)) {
        *(int *)(in_EAX + 0xa16) = *(int *)(in_EAX + 0xa16) + 1;
      }
      iVar7 = FUN_0001d5a1();
      iVar8 = extraout_ECX;
      if (iVar4 < iVar7) {
        iVar8 = extraout_ECX + 1;
        *(int *)(in_EAX + 0xa16) = *(int *)(in_EAX + 0xa16) + 5;
      }
      if ((iVar8 == 0) && (*(uint *)(in_EDX + 0x10) < DAT_002e8bee)) {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        if (DAT_002e8bf6 % 100 < 0x14) {
          *(int *)(in_EAX + 0xa16) = *(int *)(in_EAX + 0xa16) + 1;
        }
      }
    }
    local_20 = local_20 + 0xa84;
    local_1c = local_1c + 1;
    iVar9 = iVar9 + 0x4ef;
    in_EAX = in_EAX + 0x18a;
  } while ((int)local_1c < 5);
  return 4;
}

/******************************************************************************
 * Function : sub_018d16 (Ghidra: FUN_00018d16)
 * Prototype: undefined4 sub_018d16(void);
 * Address  : 0x18d16 (Size: 11 bytes)
 * Module   : combtool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x18ffe, 0x1916a, 0x194e8, 0x197a9
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00018d16(void)

{
  return 1;
}

