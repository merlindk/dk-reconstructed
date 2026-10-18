/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: combold.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 5
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0171cc (Ghidra: FUN_000171cc)
 * Prototype: void sub_0171cc(void);
 * Address  : 0x171cc (Size: 24 bytes)
 * Module   : combold.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x17381
 * Callees  : 1 -> 0x7f8e0
 ******************************************************************************/
void FUN_000171cc(void)

{
  FUN_0007f8e0(0,0);
  return;
}

/******************************************************************************
 * Function : dk_thing_stuck_finding_melee_0171e4 (Ghidra: FUN_000171e4)
 * Prototype: undefined4 dk_thing_stuck_finding_melee_0171e4(void);
 * Address  : 0x171e4 (Size: 413 bytes)
 * Module   : combold.cpp [direct_file_string_xref]
 * OrigLine : combold.cpp:84
 * Naming   : String 'THING STUCK FINDING A MELEE POS - COUNT =%d'
 * Callers  : 1 -> 0x17381
 * Callees  : 8 -> 0x10c1a, 0x10c5f, 0x7dbc0, 0xb28e8, 0xb39e4, 0xb3be4, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1606a4: "combold.cpp"
 *   - 0x160678: "THING STUCK FINDING A MELEE POS - COUNT =%d"
 ******************************************************************************/
undefined4 FUN_000171e4(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined1 in_CL;
  int in_EDX;
  int unaff_EBX;
  int iVar6;
  undefined4 local_1c;
  int local_10;
  
  local_10 = 0;
  local_1c = *(undefined4 *)(in_EAX + 0xd);
  iVar6 = unaff_EBX + ((uint)*(ushort *)(in_EAX + 0x56) + (uint)*(ushort *)(in_EDX + 0x56)) / 2;
  do {
    iVar4 = FUN_00010c1a();
    do {
      iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x80) - (uint)((iVar4 >> 0x1f) << 6 < 0)) >> 7;
      uVar1 = (short)local_1c + (char)(&DAT_00174bac)[iVar4 * 2] * 0x80;
      uVar2 = local_1c._2_2_ + (char)(&DAT_00174bad)[iVar4 * 2] * 0x80;
      FUN_000b28e8();
      sVar3 = (short)iVar6;
      if ((int)(uint)uVar1 < (int)((uint)*(ushort *)(in_EDX + 0xd) - iVar6)) {
        uVar1 = *(short *)(in_EDX + 0xd) - sVar3;
      }
      else if ((int)((uint)*(ushort *)(in_EDX + 0xd) + iVar6) < (int)(uint)uVar1) {
        uVar1 = *(short *)(in_EDX + 0xd) + sVar3;
      }
      if ((int)(uint)uVar2 < (int)((uint)*(ushort *)(in_EDX + 0xf) - iVar6)) {
        uVar2 = *(short *)(in_EDX + 0xf) - sVar3;
      }
      else if ((int)((uint)*(ushort *)(in_EDX + 0xf) + iVar6) < (int)(uint)uVar2) {
        uVar2 = *(short *)(in_EDX + 0xf) + sVar3;
      }
      local_1c = CONCAT22(uVar2,uVar1);
      iVar4 = FUN_00010c1a();
      iVar5 = FUN_00010c5f();
    } while (iVar5 < 0x80);
    iVar4 = FUN_0007dbc0();
  } while (((iVar4 != 0) ||
           (((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0' &&
            (iVar4 = FUN_000b39e4(), iVar4 != 0)))) && (local_10 = local_10 + 1, local_10 < 0x12));
  if (local_10 == 0x12) {
    FUN_000e7714(&DAT_0019cbac,s_THING_STUCK_FINDING_A_MELEE_POS___00160678,0x12);
    FUN_000ddaf0(); /* LbErrorLog("combold.cpp", line 84, g_log_buf) */
  }
  else {
    sVar3 = FUN_000b3be4();
    if (sVar3 != 0) {
      *(undefined1 *)(in_EAX + 8) = in_CL;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_017381 (Ghidra: FUN_00017381)
 * Prototype: undefined4 sub_017381(void);
 * Address  : 0x17381 (Size: 100 bytes)
 * Module   : combold.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x169a5
 * Callees  : 3 -> 0x10010, 0x171cc, 0x171e4
 ******************************************************************************/
undefined4 FUN_00017381(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(byte *)(iVar1 + 3) & 0x10) == 0) {
    iVar2 = FUN_000171cc();
    if (iVar2 != 0) {
      *(undefined1 *)(iVar1 + 0xaa) = 0;
      uVar3 = FUN_000171e4();
      return uVar3;
    }
    *(undefined1 *)(iVar1 + 0xaa) = 1;
  }
  FUN_00010010();
  return 0;
}

/******************************************************************************
 * Function : sub_0174b0 (Ghidra: FUN_000174b0)
 * Prototype: int sub_0174b0(void);
 * Address  : 0x174b0 (Size: 330 bytes)
 * Module   : combold.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x162f2, 0x175fa
 * Callees  : 3 -> 0x16175, 0x173e8, 0x189d4
 ******************************************************************************/
int FUN_000174b0(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *in_EDX;
  int *unaff_EBX;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int aiStack_50 [5];
  undefined4 *local_3c;
  undefined4 local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_14;
  
  piVar4 = aiStack_50 + 2;
  local_20 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_14 = 0;
  local_3c = in_EDX;
  if (*(char *)(local_20 + 0x1b) != '\0') {
    aiStack_50[3] = local_20 + 8;
    piVar5 = aiStack_50 + 2;
    local_1c = local_20;
    do {
      piVar4 = piVar5;
      if (*(ushort *)(local_1c + 0xb) != 0) {
        uVar1 = (&DAT_001ae9fc)[*(ushort *)(local_1c + 0xb)];
        *(undefined4 *)((int)piVar5 + -4) = 0x17515;
        aiStack_50[4] = FUN_000189d4();
        *(undefined4 *)((int)piVar5 + -4) = 0;
        *(undefined4 *)((int)piVar5 + -8) = 0x17526;
        iVar2 = FUN_00016175();
        piVar4 = (int *)((int)piVar5 + -4);
        if (0 < iVar2) {
          *(undefined4 *)((int)piVar5 + -8) = 0x1753c;
          iVar3 = FUN_000173e8();
          piVar4 = (int *)((int)piVar5 + -4);
          if (local_14 < iVar3) {
            piVar4 = (int *)((int)piVar5 + -4);
            local_2c = uVar1;
            local_28 = iVar2;
            local_14 = iVar3;
          }
        }
      }
      local_1c = local_1c + 2;
      piVar5 = piVar4;
    } while (local_1c != aiStack_50[3]);
    if (local_14 != 0) goto LAB_00017558;
  }
  if (*(char *)(local_20 + 0x1c) != '\0') {
    aiStack_50[2] = local_20 + 8;
    puVar7 = (undefined1 *)piVar4;
    do {
      puVar6 = puVar7;
      if (*(ushort *)(local_20 + 0x13) != 0) {
        uVar1 = (&DAT_001ae9fc)[*(ushort *)(local_20 + 0x13)];
        *(undefined4 *)(puVar7 + -4) = 0x175b1;
        FUN_000189d4();
        *(undefined4 *)(puVar7 + -4) = 0;
        *(undefined4 *)(puVar7 + -8) = 0x175c1;
        iVar2 = FUN_00016175();
        puVar6 = puVar7 + -4;
        if (0 < iVar2) {
          *(undefined4 *)(puVar7 + -8) = 0x175d6;
          iVar3 = FUN_000173e8();
          puVar6 = puVar7 + -4;
          if (local_14 < iVar3) {
            puVar6 = puVar7 + -4;
            local_2c = uVar1;
            local_28 = iVar2;
            local_14 = iVar3;
          }
        }
      }
      local_20 = local_20 + 2;
      puVar7 = puVar6;
    } while (local_20 != aiStack_50[2]);
    if (local_14 != 0) {
LAB_00017558:
      *local_3c = local_2c;
      *unaff_EBX = local_14;
      return local_28;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0175fa (Ghidra: FUN_000175fa)
 * Prototype: int sub_0175fa(void);
 * Address  : 0x175fa (Size: 204 bytes)
 * Module   : combold.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1829f, 0x18938
 * Callees  : 6 -> 0x15ef2, 0x15f21, 0x16175, 0x173e8, 0x174b0, 0x189d4
 ******************************************************************************/
int FUN_000175fa(void)

{
  int iVar1;
  int iVar2;
  int *in_EDX;
  undefined1 *puVar3;
  int *piVar4;
  uint uVar5;
  int aiStack_34 [5];
  undefined4 local_20;
  int *local_1c;
  int local_18;
  
  piVar4 = aiStack_34 + 2;
  aiStack_34[3] = 0;
  local_1c = in_EDX;
  aiStack_34[4] = FUN_000174b0();
  uVar5 = DAT_002e6eb6;
  if (aiStack_34[4] < 1) {
    while (iVar1 = (&DAT_001ae9fc)[uVar5], iVar1 != DAT_001ae9fc) {
      *(undefined4 *)((int)piVar4 + -4) = 0x17655;
      iVar2 = FUN_00015f21();
      puVar3 = (undefined1 *)piVar4;
      if (iVar2 != 0) {
        *(undefined4 *)((int)piVar4 + -4) = 0x17662;
        iVar2 = FUN_00015ef2();
        if (iVar2 == 0) {
          *(undefined4 *)((int)piVar4 + -4) = 0x1766f;
          local_20 = FUN_000189d4();
          *(undefined4 *)((int)piVar4 + -4) = 0;
          *(undefined4 *)((int)piVar4 + -8) = 0x17681;
          local_18 = FUN_00016175();
          puVar3 = (undefined1 *)((int)piVar4 + -4);
          if (0 < local_18) {
            *(undefined4 *)((int)piVar4 + -8) = 0x17696;
            iVar2 = FUN_000173e8();
            puVar3 = (undefined1 *)((int)piVar4 + -4);
            if (aiStack_34[3] < iVar2) {
              aiStack_34[4] = local_18;
              puVar3 = (undefined1 *)((int)piVar4 + -4);
              aiStack_34[2] = iVar1;
              aiStack_34[3] = iVar2;
            }
          }
        }
      }
      piVar4 = (int *)puVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0x67);
    }
    if (aiStack_34[3] == 0) {
      aiStack_34[4] = 0;
    }
    else {
      *local_1c = aiStack_34[2];
    }
  }
  else {
    *local_1c = aiStack_34[2];
  }
  return aiStack_34[4];
}

