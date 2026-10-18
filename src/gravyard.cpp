/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: gravyard.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 11
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0391e9 (Ghidra: FUN_000391e9)
 * Prototype: void sub_0391e9(void);
 * Address  : 0x391e9 (Size: 25 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x39202
 * Callees  : 1 -> 0x1295e0
 ******************************************************************************/
void FUN_000391e9(void)

{
  FUN_001295e0();
  FUN_001295e0();
  return;
}

/******************************************************************************
 * Function : sub_039202 (Ghidra: FUN_00039202)
 * Prototype: void sub_039202(void);
 * Address  : 0x39202 (Size: 195 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3919b
 * Callees  : 1 -> 0x391e9
 ******************************************************************************/
void FUN_00039202(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int in_EAX;
  
  uVar2 = DAT_00186fad;
  uVar1 = DAT_00184290;
  DAT_00184290 = (&DAT_002f18e3)[in_EAX];
  DAT_00186fad = 5;
  FUN_000391e9();
  DAT_00184290 = uVar1;
  DAT_00186fad = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_0392c5 (Ghidra: FUN_000392c5)
 * Prototype: void sub_0392c5(int param_1,int param_2,int param_3);
 * Address  : 0x392c5 (Size: 1278 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3915c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000392c5(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  int *piVar3;
  int in_ECX;
  uint in_EDX;
  int unaff_EBX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 local_1228;
  undefined4 local_828;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  byte *local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  byte *local_7c;
  int local_78;
  byte *local_74;
  byte *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_84 = in_EAX;
  if (in_EDX < 0x30) {
    if (in_EDX < 0x10) {
      if (in_EDX != 0) {
        return;
      }
      local_2c = (int)(0x1fffff / (longlong)param_2);
      local_30 = (int)(0x1fffff / (longlong)param_3);
      local_1c = 0;
    }
    else {
      if (0x10 < in_EDX) {
        if (in_EDX != 0x20) {
          return;
        }
        local_2c = (int)(0x1fffff / (longlong)param_2);
        local_30 = (int)(-0x1fffff / (longlong)param_3);
        local_1c = 0;
        local_20 = 0x1fffff;
        goto LAB_00039382;
      }
      local_2c = (int)(-0x1fffff / (longlong)param_2);
      local_30 = (int)(0x1fffff / (longlong)param_3);
      local_1c = 0x1fffff;
    }
    local_20 = 0;
LAB_00039382:
    if (in_ECX < 0) {
      param_2 = param_2 + in_ECX;
      if (param_2 < 0) {
        return;
      }
      local_1c = local_1c - in_ECX * local_2c;
      in_ECX = 0;
    }
    if ((in_ECX + param_2 <= DAT_0018429c) || (param_2 = DAT_0018429c - in_ECX, -1 < param_2)) {
      if (param_1 < 0) {
        param_3 = param_3 + param_1;
        if (param_3 < 0) {
          return;
        }
        local_20 = local_20 - param_1 * local_30;
        param_1 = 0;
      }
      if ((param_1 + param_3 <= DAT_001842a0) || (param_3 = DAT_001842a0 - param_1, -1 < param_3)) {
        local_78 = param_2;
        local_3c = &local_1228;
        while (local_78 != 0) {
          local_78 = local_78 + -1;
          *local_3c = local_1c;
          local_3c = local_3c + 1;
          local_1c = local_1c + local_2c;
        }
        local_6c = param_3;
        local_48 = &local_828;
        while (local_6c != 0) {
          local_6c = local_6c + -1;
          *local_48 = local_20;
          local_48 = local_48 + 1;
          local_20 = local_20 + local_30;
        }
        puVar5 = (undefined1 *)(param_1 * DAT_00184298 + DAT_0018428c + in_ECX);
        local_80 = (&DAT_002f18e3)[local_84];
        piVar3 = &local_828;
        local_a4 = (byte *)((int)&local_1228 + 2);
        if (unaff_EBX < 0) {
          local_a8 = local_a4;
          for (local_64 = param_3; local_64 != 0; local_64 = local_64 + -1) {
            local_98 = local_80 + (*piVar3 >> 8 & 0xff00U);
            local_4c = param_2;
            local_74 = local_a4;
            puVar4 = puVar5;
            while (local_4c != 0) {
              bVar1 = *local_74;
              local_4c = local_4c + -1;
              local_74 = local_74 + 4;
              *puVar4 = *(undefined1 *)(local_98 + (uint)bVar1);
              puVar4 = puVar4 + 1;
            }
            piVar3 = piVar3 + 1;
            puVar5 = puVar5 + DAT_00184298;
          }
        }
        else {
          for (local_60 = param_3; local_60 != 0; local_60 = local_60 + -1) {
            local_50 = puVar5;
            local_44 = param_2;
            local_94 = local_80 + (*piVar3 >> 8 & 0xff00U);
            pbVar2 = local_a4;
            while (puVar4 = local_50, local_44 != 0) {
              bVar1 = *pbVar2;
              local_44 = local_44 + -1;
              pbVar2 = pbVar2 + 4;
              local_50 = local_50 + 1;
              *puVar4 = (&DAT_00361c10)[(uint)*(byte *)((uint)bVar1 + local_94) + unaff_EBX * 0x100]
              ;
            }
            piVar3 = piVar3 + 1;
            puVar5 = puVar5 + DAT_00184298;
          }
        }
      }
    }
    return;
  }
  if (in_EDX < 0x31) {
    local_2c = (int)(-0x1fffff / (longlong)param_2);
    local_30 = (int)(-0x1fffff / (longlong)param_3);
    local_1c = 0x1fffff;
    local_20 = 0x1fffff;
    goto LAB_00039382;
  }
  if (in_EDX < 0x50) {
    if (in_EDX != 0x40) {
      return;
    }
    local_28 = (int)(0x1fffff / (longlong)param_3);
    local_24 = (int)(0x1fffff / (longlong)param_2);
    local_14 = 0;
  }
  else {
    if (in_EDX < 0x51) {
      local_28 = (int)(0x1fffff / (longlong)param_3);
      local_24 = (int)(-0x1fffff / (longlong)param_2);
      local_14 = 0;
      local_18 = 0x1fffff;
      goto LAB_000395b2;
    }
    if (in_EDX < 0x60) {
      return;
    }
    if (0x60 < in_EDX) {
      if (in_EDX != 0x70) {
        return;
      }
      local_28 = (int)(-0x1fffff / (longlong)param_3);
      local_24 = (int)(-0x1fffff / (longlong)param_2);
      local_14 = 0x1fffff;
      local_18 = 0x1fffff;
      goto LAB_000395b2;
    }
    local_28 = (int)(-0x1fffff / (longlong)param_3);
    local_24 = (int)(0x1fffff / (longlong)param_2);
    local_14 = 0x1fffff;
  }
  local_18 = 0;
LAB_000395b2:
  if (in_ECX < 0) {
    param_2 = param_2 + in_ECX;
    if (param_2 < 0) {
      return;
    }
    local_18 = local_18 - in_ECX * local_24;
    in_ECX = 0;
  }
  if ((DAT_0018429c < in_ECX + param_2) && (param_2 = DAT_0018429c - in_ECX, param_2 < 0)) {
    return;
  }
  if (param_1 < 0) {
    param_3 = param_3 + param_1;
    if (param_3 < 0) {
      return;
    }
    local_14 = local_14 - param_1 * local_28;
    param_1 = 0;
  }
  if ((DAT_001842a0 < param_1 + param_3) && (param_3 = DAT_001842a0 - param_1, param_3 < 0)) {
    return;
  }
  piVar3 = &local_1228;
  local_54 = param_3;
  while (local_54 != 0) {
    local_54 = local_54 + -1;
    *piVar3 = local_14;
    piVar3 = piVar3 + 1;
    local_14 = local_14 + local_28;
  }
  local_34 = param_2;
  local_40 = &local_828;
  while (local_34 != 0) {
    local_34 = local_34 + -1;
    *local_40 = local_18;
    local_40 = local_40 + 1;
    local_18 = local_18 + local_24;
  }
  puVar5 = (undefined1 *)(DAT_00184298 * param_1 + DAT_0018428c + in_ECX);
  local_88 = (&DAT_002f18e3)[local_84];
  local_9c = (byte *)((int)&local_828 + 2);
  piVar3 = &local_1228;
  if (unaff_EBX < 0) {
    local_a0 = local_9c;
    for (local_68 = param_3; local_68 != 0; local_68 = local_68 + -1) {
      local_90 = local_88 + (*piVar3 >> 0x10 & 0xffU);
      local_5c = param_2;
      local_70 = local_9c;
      puVar4 = puVar5;
      while (local_5c != 0) {
        bVar1 = *local_70;
        local_5c = local_5c + -1;
        local_70 = local_70 + 4;
        *puVar4 = *(undefined1 *)((uint)bVar1 * 0x100 + local_90);
        puVar4 = puVar4 + 1;
      }
      piVar3 = piVar3 + 1;
      puVar5 = puVar5 + DAT_00184298;
    }
    return;
  }
  for (local_38 = param_3; local_38 != 0; local_38 = local_38 + -1) {
    local_8c = local_88 + (*piVar3 >> 0x10 & 0xffU);
    local_58 = param_2;
    local_7c = local_9c;
    puVar4 = puVar5;
    while (local_58 != 0) {
      bVar1 = *local_7c;
      local_58 = local_58 + -1;
      local_7c = local_7c + 4;
      *puVar4 = (&DAT_00361c10)[(uint)*(byte *)((uint)bVar1 * 0x100 + local_8c) + unaff_EBX * 0x100]
      ;
      puVar4 = puVar4 + 1;
    }
    piVar3 = piVar3 + 1;
    puVar5 = puVar5 + DAT_00184298;
  }
  return;
}

/******************************************************************************
 * Function : sub_0397c3 (Ghidra: FUN_000397c3)
 * Prototype: void sub_0397c3(void);
 * Address  : 0x397c3 (Size: 239 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_000397c3(void)

{
  byte *extraout_ECX;
  byte *pbVar1;
  byte *unaff_EBX;
  int iVar2;
  byte *pbVar3;
  int local_18;
  int local_10;
  
  local_18 = 0;
  pbVar3 = unaff_EBX;
  do {
    if ((int)(uint)unaff_EBX[1] <= local_18) {
      return;
    }
    pbVar1 = pbVar3;
    for (local_10 = 0; local_10 < (int)(uint)*unaff_EBX; local_10 = local_10 + 1) {
      iVar2 = local_18;
      if (*(short *)(pbVar1 + 2) == 0) {
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 < 0) break;
        } while (*(short *)(unaff_EBX + local_10 * 2 + iVar2 * 0x14 + 2) == 0);
      }
      else {
        FUN_0013a710();
        pbVar1 = extraout_ECX;
      }
      pbVar1 = pbVar1 + 2;
    }
    pbVar3 = pbVar3 + 0x14;
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : dk_creature_already_decomposing_graveyard_0398b4 (Ghidra: FUN_000398b4)
 * Prototype: void dk_creature_already_decomposing_graveyard_0398b4(void);
 * Address  : 0x398b4 (Size: 77 bytes)
 * Module   : gravyard.cpp [direct_file_string_xref]
 * OrigLine : gravyard.cpp:21 ("Graveyard has no space for another corpse")
 * Naming   : String 'Creature already decomposing in graveyard'
 * Callers  : 1 -> 0x649ad
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16498a: "gravyard.cpp"
 *   - 0x1649c1: "gravyard.cpp"
 *   - 0x164960: "Creature already decomposing in graveyard"
 *   - 0x164997: "Graveyard has no space for another corpse"
 ******************************************************************************/
void FUN_000398b4(void)

{
  undefined2 uVar1;
  int in_EAX;
  int in_EDX;
  
  if ((*(ushort *)(in_EDX + 0x10) < *(ushort *)(in_EDX + 0xe)) && (*(char *)(in_EAX + 0x14) == '\0')
     ) {
    *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) + 1;
    uVar1 = DAT_002eb9fe;
    *(undefined1 *)(in_EAX + 0x14) = 1;
    *(undefined2 *)(in_EAX + 0x5e) = uVar1;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("gravyard.cpp", line 21, "Graveyard has no space for another corpse") */
  return;
}

/******************************************************************************
 * Function : dk_could_find_valid_position_039901 (Ghidra: FUN_00039901)
 * Prototype: undefined8 dk_could_find_valid_position_039901(void);
 * Address  : 0x39901 (Size: 215 bytes)
 * Module   : gravyard.cpp [direct_file_string_xref]
 * OrigLine : gravyard.cpp:58 ("COULD NOT FIND VALID POSITION IN ROOM"); gravyard.cpp:68 ("COULD NOT CREATE CREATURE")
 * Naming   : String 'COULD NOT FIND VALID POSITION IN ROOM'
 * Callers  : 1 -> 0x399d8
 * Callees  : 7 -> 0x24998, 0x43bb3, 0x51374, 0x72af4, 0xb3b10, 0xcc968, 0xddaf0
 * Strings  :
 *   - 0x1649f4: "gravyard.cpp"
 *   - 0x164a1b: "gravyard.cpp"
 *   - 0x1649ce: "COULD NOT FIND VALID POSITION IN ROOM"
 *   - 0x164a01: "COULD NOT CREATE CREATURE"
 ******************************************************************************/
undefined8 FUN_00039901(void)

{
  char cVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  
  cVar1 = *(char *)(in_EAX + 3);
  iVar3 = FUN_00043bb3();
  if (iVar3 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("gravyard.cpp", line 58, "COULD NOT FIND VALID POSITION IN ROOM") */
  }
  else {
    cVar2 = FUN_000cc968();
    if (cVar2 != '\0') {
      FUN_000b3b10();
      *(int *)(&DAT_002e1840 + cVar1 * 0x1508) = *(int *)(&DAT_002e1840 + cVar1 * 0x1508) + 1;
      FUN_00024998();
      if ((int)cVar1 == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
      uVar4 = 1;
      goto LAB_000399d1;
    }
    FUN_000ddaf0(); /* LbErrorLog("gravyard.cpp", line 68, "COULD NOT CREATE CREATURE") */
    FUN_00072af4();
  }
  uVar4 = 0;
LAB_000399d1:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_thing_was_graveyard_removed_0399d8 (Ghidra: FUN_000399d8)
 * Prototype: void dk_thing_was_graveyard_removed_0399d8(void);
 * Address  : 0x399d8 (Size: 156 bytes)
 * Module   : gravyard.cpp [direct_file_string_xref]
 * OrigLine : gravyard.cpp:107 ("Graveyard had no capacity to remove body from")
 * Naming   : String 'Thing was not in graveyard to be removed'
 * Callers  : 1 -> 0xe2a14
 * Callees  : 3 -> 0x39901, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x164a51: "gravyard.cpp"
 *   - 0x164a8c: "gravyard.cpp"
 *   - 0x164a28: "Thing was not in graveyard to be removed"
 *   - 0x164a5e: "Graveyard had no capacity to remove body from"
 ******************************************************************************/
void FUN_000399d8(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_000d0f50();
  if ((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xb)) {
    if ((*(short *)(iVar1 + 0x10) == 0) || (*(char *)(in_EAX + 0x14) == '\0')) {
      FUN_000ddaf0(); /* LbErrorLog("gravyard.cpp", line 107, "Graveyard had no capacity to remove body from") */
    }
    else {
      *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + -1;
      *(undefined1 *)(in_EAX + 0x14) = 0;
      iVar1 = *(char *)(iVar1 + 3) * 0x1508;
      (&DAT_002e19e9)[iVar1] = (&DAT_002e19e9)[iVar1] + '\x01';
      *(int *)(&DAT_002e183c + iVar1) = *(int *)(&DAT_002e183c + iVar1) + 1;
      if (DAT_002ed44f < (byte)(&DAT_002e19e9)[iVar1]) {
        (&DAT_002e19e9)[iVar1] = (&DAT_002e19e9)[iVar1] - DAT_002ed44f;
        FUN_00039901();
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_039a74 (Ghidra: FUN_00039a74)
 * Prototype: undefined4 sub_039a74(void);
 * Address  : 0x39a74 (Size: 304 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x11214, 0x13acd, 0x688a4, 0x6bdda
 * Callees  : 2 -> 0x39c3e, 0x39dab
 ******************************************************************************/
undefined4 FUN_00039a74(void)

{
  ushort *puVar1;
  ushort uVar2;
  byte *in_EAX;
  undefined4 extraout_ECX;
  int iVar3;
  byte *pbVar4;
  undefined4 extraout_EDX;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00039dab();
  pbVar4 = (byte *)((ulonglong)uVar6 >> 0x20);
  if ((in_EAX != pbVar4) && (in_EAX[6] == pbVar4[6])) {
    if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff) != 0) {
      FUN_00039c3e();
      uVar6 = CONCAT44(extraout_EDX,extraout_ECX);
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    iVar3 = (int)uVar6;
    if (iVar3 == 0) {
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x78) =
           *(undefined2 *)(iVar5 + 0x1b);
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x76) =
           *(undefined2 *)(in_EAX + 0x1b);
      uVar2 = *(ushort *)(iVar5 + 0x1b);
      iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
      puVar1 = (ushort *)(iVar3 + 0x7a);
      *puVar1 = *puVar1 & 0xf000;
      puVar1 = (ushort *)(iVar3 + 0x7a);
      *puVar1 = *puVar1 | uVar2 & 0xfff;
      uVar2 = *(ushort *)(iVar5 + 0x1b);
      iVar3 = (&DAT_001b0a00)[*(ushort *)(iVar5 + 100)];
      puVar1 = (ushort *)(iVar3 + 0x7a);
      *puVar1 = *puVar1 & 0xf000;
      puVar1 = (ushort *)(iVar3 + 0x7a);
      *puVar1 = *puVar1 | uVar2 & 0xfff;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x76) = 0;
      *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7b) =
           *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7b) & 0xf;
    }
    else {
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x78) =
           *(undefined2 *)(iVar3 + 0x1b);
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x76) =
           *(undefined2 *)(in_EAX + 0x1b);
      uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x7a);
      iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
      puVar1 = (ushort *)(iVar3 + 0x7a);
      *puVar1 = *puVar1 & 0xf000;
      puVar1 = (ushort *)(iVar3 + 0x7a);
      *puVar1 = *puVar1 | uVar2 & 0xfff;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x76) = 0;
    }
    *in_EAX = *in_EAX | 0x40;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_039ba4 (Ghidra: FUN_00039ba4)
 * Prototype: undefined4 sub_039ba4(void);
 * Address  : 0x39ba4 (Size: 154 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x11214, 0x13acd, 0x39d55, 0x688a4, 0x68ad7
 * Callees  : 3 -> 0x39c3e, 0x39d83, 0x39de2
 ******************************************************************************/
undefined4 FUN_00039ba4(void)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  byte *in_EAX;
  byte *extraout_ECX;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00039d83();
  pbVar5 = (byte *)((ulonglong)uVar6 >> 0x20);
  pbVar4 = (byte *)uVar6;
  if ((byte *)uVar6 == (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  if ((in_EAX != pbVar5) && (in_EAX[6] == pbVar5[6])) {
    if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff) != 0) {
      FUN_00039c3e();
      pbVar4 = extraout_ECX;
    }
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x76) =
         *(undefined2 *)(pbVar4 + 0x1b);
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x78) =
         *(undefined2 *)(in_EAX + 0x1b);
    *pbVar4 = *pbVar4 | 0x40;
    uVar2 = *(ushort *)(in_EAX + 0x1b);
    iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
    puVar1 = (ushort *)(iVar3 + 0x7a);
    *puVar1 = *puVar1 & 0xf000;
    puVar1 = (ushort *)(iVar3 + 0x7a);
    *puVar1 = *puVar1 | uVar2 & 0xfff;
    FUN_00039de2();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_039d55 (Ghidra: FUN_00039d55)
 * Prototype: longlong sub_039d55(void);
 * Address  : 0x39d55 (Size: 46 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5f6c5, 0x80a94
 * Callees  : 3 -> 0x39ba4, 0x39c3e, 0x39d83
 ******************************************************************************/
longlong FUN_00039d55(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_00039d83();
  if ((iVar1 != 0) && (iVar1 != in_EAX)) {
    FUN_00039c3e();
    FUN_00039ba4();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_039d83 (Ghidra: FUN_00039d83)
 * Prototype: undefined4 sub_039d83(void);
 * Address  : 0x39d83 (Size: 40 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x11214, 0x13809, 0x138c9, 0x39ba4, 0x39d55, 0x39e36, 0x39e7e, 0x39e90, 0x63dd3
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00039d83(void)

{
  int in_EAX;
  
  if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff) != 0) {
    return (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7a) & 0xfff];
  }
  return 0;
}

