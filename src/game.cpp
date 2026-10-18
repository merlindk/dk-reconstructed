/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: game.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 9
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_036f48 (Ghidra: FUN_00036f48)
 * Prototype: void sub_036f48(void);
 * Address  : 0x36f48 (Size: 172 bytes)
 * Module   : game.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36ff4
 * Callees  : 2 -> 0xe8d4a, 0xf0ab2
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036f48(void)

{
  uint extraout_ECX;
  
  DAT_00336364 = FUN_000e8d4a();
  if (DAT_00336364 != DAT_0033635c) {
    if (DAT_002e8bee - _DAT_00336360 == 0) {
      DAT_00336368 = 0;
    }
    else if (extraout_ECX <
             (uint)((ulonglong)(uint)((DAT_002e8bee - _DAT_00336360) * 0x100) /
                   ((ulonglong)(uint)((DAT_00336364 - DAT_0033635c) * 0x100) / 100))) {
      DAT_00336368 = DAT_00336368 + 2;
    }
    else {
      DAT_00336368 = DAT_00336368 + -2;
      if (DAT_00336368 < 1) {
        DAT_00336368 = 0;
      }
    }
    _DAT_00336360 = DAT_002e8bee;
    DAT_0033635c = DAT_00336364;
  }
  if (DAT_00336368 != 0) {
    FUN_000f0ab2();
  }
  return;
}

/******************************************************************************
 * Function : dk_out_sync_gameturn_036ff4 (Ghidra: FUN_00036ff4)
 * Prototype: void dk_out_sync_gameturn_036ff4(void);
 * Address  : 0x36ff4 (Size: 860 bytes)
 * Module   : game.cpp [direct_file_string_xref]
 * OrigLine : game.cpp:399; game.cpp:413
 * Naming   : String 'OUT OF SYNC (GameTurn %d)'
 * Callers  : 1 -> 0x633c4
 * Callees  : 32 -> 0x2700c, 0x270e0, 0x2dfac, 0x36f48, 0x37350, 0x374c3, 0x377eb, 0x45cc1, 0x49eff, 0x50d25 ...
 * Strings  :
 *   - 0x1647be: "game.cpp"
 *   - 0x1647f2: "game.cpp"
 *   - 0x1647a4: "OUT OF SYNC (GameTurn %d)"
 *   - 0x1647c7: "OUT OF SYNC"
 *   - 0x1647d3: "SEED OUT OF SYNC (GameTurn %d)"
 *   - 0x1647fb: "SEED OUT OF SYNC"
 ******************************************************************************/
void FUN_00036ff4(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char extraout_CL;
  
  while( true ) {
    if (DAT_0019a2a1 != '\0') {
      return;
    }
    FUN_00052934();
    FUN_0002dfac();
    if (DAT_0019a2a1 != '\0') break;
    if (DAT_002ebaf6 == '\x02') {
      if (DAT_0019d0c1 == -1) {
        FUN_00049eff();
      }
      else {
        DAT_0019d0c1 = -1;
        DAT_0019d0b8 = DAT_0019d0b8 & 0xfe;
      }
    }
    FUN_000eb818();
    uVar2 = FUN_000eb818();
    iVar3 = (int)DAT_002f10ce._3_1_;
    *(undefined4 *)(&DAT_002e17c0 + iVar3 * 0x1508) = uVar2;
    *(undefined4 *)(&DAT_002e17c4 + iVar3 * 0x1508) = uVar2;
    FUN_000e7904(0);
    FUN_000e79fc();
    FUN_000627b5();
    if ((DAT_0019d0b8 & 2) != 0) {
      FUN_0002700c();
    }
    while ((DAT_0019a2a0 == '\0' && (DAT_0019a2a1 == '\0'))) {
      if (((DAT_0019d0ba & 0x10) != 0) && (DAT_002e8bee == 4)) {
        FUN_000ed034();
      }
      cVar1 = FUN_00037350();
      if (cVar1 == '\0') {
        FUN_000e797c();
      }
      FUN_00052934();
      FUN_0006ef5a();
      FUN_00045cc1();
      FUN_000de6a8();
      if (extraout_CL != '\0') {
        FUN_000e7904(0);
        iVar3 = FUN_000e797c();
        if (iVar3 == 1) {
          FUN_000780df();
          FUN_0008685c();
          FUN_000e797c();
        }
      }
      FUN_000377eb();
      iVar3 = FUN_000e797c();
      if (iVar3 == 1) {
        if ((DAT_0019d0b6 & 2) != 0) {
          FUN_000e7714(&DAT_0019cbac,s_OUT_OF_SYNC__GameTurn__d__001647a4,DAT_002e8bee);
          FUN_000ddaf0(); /* LbErrorLog("game.cpp", line 399, g_log_buf) */
          if (DAT_003d9818 != 0) {
            FUN_000e6d80();
          }
        }
        if ((DAT_0019d0b6 & 4) != 0) {
          FUN_000e7714(&DAT_0019cbac,s_SEED_OUT_OF_SYNC__GameTurn__d__001647d3,DAT_002e8bee);
          FUN_000ddaf0(); /* LbErrorLog("game.cpp", line 413, g_log_buf) */
          if (DAT_003d9818 != 0) {
            FUN_000e6d80();
          }
        }
        FUN_000e797c();
      }
      if (((DAT_00334019 == 0) && (DAT_002e6fe0 == 0)) && (DAT_002e6fe4 == '\0')) {
        FUN_000ead2f();
        FUN_0006dfd3();
      }
      if (extraout_CL != '\0') {
        FUN_000374c3();
      }
      if (((DAT_002e6f2d == '\0') || (DAT_002e6fe0 == 0)) &&
         (((DAT_0019d0b9 & 0x10) != 0 || (DAT_002ed3de == 0)))) {
        FUN_00036f48();
      }
      if (DAT_002e8bee == DAT_002e6fee) {
        DAT_0019a2a1 = '\x01';
      }
    }
    FUN_000ebc10();
    FUN_000e7904(0);
    FUN_000e79fc();
    FUN_000ecd76();
    FUN_000f0ab8();
    FUN_0005ae90();
    FUN_00072810();
    FUN_00050d25();
    FUN_000eb818();
    DAT_0019a2a0 = '\0';
    FUN_000270e0();
    if (DAT_002e6fc4 != '\0') {
      FUN_000e8a1c();
      DAT_002e6fc4 = '\0';
      DAT_002e6fc5 = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_037350 (Ghidra: FUN_00037350)
 * Prototype: ulonglong sub_037350(void);
 * Address  : 0x37350 (Size: 108 bytes)
 * Module   : game.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36ff4
 * Callees  : 2 -> 0x373bc, 0x3743b
 ******************************************************************************/
ulonglong FUN_00037350(void)

{
  uint in_EAX;
  undefined4 in_EDX;
  
  if ((DAT_0019d0b8 & 1) == 0) {
    if ((DAT_002e6fe0 == 0) && (DAT_002e6fe4 == '\0')) {
      in_EAX = FUN_000373bc();
      if ((DAT_002ed3de != 0) &&
         (in_EAX = DAT_002e8bee / DAT_002ed3de, DAT_002e8bee % DAT_002ed3de != 0)) {
LAB_000373b8:
        return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
      }
    }
    else {
      if (((DAT_002e8bee & 0x3f) != 0) && ((DAT_002e6fe4 == '\0' || ((DAT_002e8bee & 7) != 0))))
      goto LAB_000373b8;
      in_EAX = FUN_0003743b();
    }
  }
  return CONCAT44(in_EDX,CONCAT31((int3)(in_EAX >> 8),1));
}

/******************************************************************************
 * Function : sub_0373bc (Ghidra: FUN_000373bc)
 * Prototype: void sub_0373bc(void);
 * Address  : 0x373bc (Size: 127 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37350
 * Callees  : 2 -> 0xe8d4a, 0xe8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000373bc(void)

{
  longdouble lVar1;
  
  DAT_0033637c = DAT_0033637c + 1;
  _DAT_00336378 = FUN_000e8d4a();
  if (99 < (uint)(_DAT_00336378 - _DAT_00336374)) {
    _DAT_0033636c =
         ((double)DAT_0033637c * _DAT_0016480c) / (double)(uint)(_DAT_00336378 - _DAT_00336374);
    DAT_0033637c = 0;
    _DAT_00336374 = _DAT_00336378;
    lVar1 = (longdouble)FUN_000e8d50();
    _DAT_002e8c0d = (int)ROUND(lVar1);
  }
  return;
}

/******************************************************************************
 * Function : sub_03743b (Ghidra: FUN_0003743b)
 * Prototype: void sub_03743b(void);
 * Address  : 0x3743b (Size: 136 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37350
 * Callees  : 2 -> 0xe8d4a, 0xe8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003743b(void)

{
  int in_EAX;
  longdouble lVar1;
  
  _DAT_00336390 = FUN_000e8d4a();
  if (499 < (uint)(_DAT_00336390 - _DAT_0033638c)) {
    _DAT_00336384 =
         ((double)(in_EAX + _DAT_00336398) * _DAT_0016481c) /
         (double)(uint)(_DAT_00336390 - _DAT_0033638c);
    _DAT_00336398 = 0;
    _DAT_0033638c = _DAT_00336390;
    lVar1 = (longdouble)FUN_000e8d50();
    _DAT_002e8c0d = (int)ROUND(lVar1);
    return;
  }
  _DAT_00336398 = in_EAX + _DAT_00336398;
  return;
}

/******************************************************************************
 * Function : sub_0374c3 (Ghidra: FUN_000374c3)
 * Prototype: void sub_0374c3(void);
 * Address  : 0x374c3 (Size: 103 bytes)
 * Module   : game.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36ff4
 * Callees  : 6 -> 0x3752a, 0xe6a10, 0xe7904, 0xe797c, 0xe79fc, 0xf0b60
 ******************************************************************************/
void FUN_000374c3(void)

{
  int iVar1;
  
  if ((DAT_0019d0ba & 8) != 0) {
    FUN_0003752a();
    FUN_000e7904(0);
    return;
  }
  if (DAT_003d9878 == 0xd) {
    iVar1 = FUN_000e797c();
    if (iVar1 == 1) {
      FUN_000f0b60();
      FUN_000e6a10();
      FUN_000e797c();
    }
  }
  FUN_000e79fc();
  return;
}

/******************************************************************************
 * Function : sub_03752a (Ghidra: FUN_0003752a)
 * Prototype: void sub_03752a(void);
 * Address  : 0x3752a (Size: 705 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x374c3
 * Callees  : 5 -> 0xe6d80, 0xe8c83, 0xeb840, 0xeb974, 0xf0d1c
 ******************************************************************************/
void FUN_0003752a(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar5;
  undefined1 *extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint uVar6;
  uint extraout_ECX_06;
  int extraout_ECX_07;
  uint local_44;
  undefined1 *local_3c;
  int local_34;
  int local_30;
  int local_24;
  undefined1 *local_1c;
  
  if (DAT_003d9818 != 0) {
    FUN_000e6d80();
  }
  FUN_000eb840();
  if (DAT_003d987a == '\0') {
    FUN_000e8c83();
  }
  else {
    iVar2 = DAT_003d982c + -0x8c;
    local_1c = (undefined1 *)(DAT_003d9818 + 0x8c);
    FUN_000f0d1c();
    local_44 = (uint)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6) / 2;
    uVar6 = extraout_ECX;
    while (local_44 = local_44 - 1, -1 < (int)local_44) {
      if (uVar6 + 0x8c < 0xb0001) {
        FUN_000e8c83();
        puVar5 = extraout_ECX_00;
        if ((undefined1 *)0xaffff < extraout_ECX_00) {
          FUN_000f0d1c();
          puVar5 = extraout_ECX_01;
        }
      }
      else {
        FUN_000e8c83();
        FUN_000f0d1c();
        FUN_000e8c83();
        puVar5 = extraout_ECX_02;
      }
      if (puVar5 + iVar2 < (undefined1 *)0xb0001) {
        local_34 = 0;
        puVar3 = local_1c;
        local_3c = puVar5;
        while (local_34 < iVar2 / 2) {
          local_34 = local_34 + 1;
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *local_3c = uVar1;
          local_3c = local_3c + 2;
        }
        puVar5 = puVar5 + iVar2;
        if ((undefined1 *)0xaffff < puVar5) {
          FUN_000f0d1c();
          puVar5 = extraout_ECX_03;
        }
      }
      else {
        iVar4 = 0xb0000 - (int)puVar5;
        local_30 = 0;
        puVar3 = local_1c;
        while (local_30 < iVar4 / 2) {
          local_30 = local_30 + 1;
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 2;
        }
        FUN_000f0d1c();
        local_24 = 0;
        puVar5 = local_1c + iVar4;
        while (local_24 < ((iVar2 - iVar4) / 2) * 2) {
          uVar1 = *puVar5;
          puVar3 = (undefined1 *)(DAT_003d9814 + local_24);
          puVar5 = puVar5 + 1;
          local_24 = local_24 + 2;
          *puVar3 = uVar1;
        }
        puVar5 = (undefined1 *)(extraout_ECX_04 + iVar2 + -0x10000);
      }
      local_1c = local_1c + DAT_003d9834;
      if (puVar5 + 0x8c < (undefined1 *)0xb0001) {
        FUN_000e8c83();
        uVar6 = extraout_ECX_05 + DAT_003d9834;
        if (0xaffff < uVar6) {
          FUN_000f0d1c();
          uVar6 = extraout_ECX_06;
        }
      }
      else {
        FUN_000e8c83(0xb0000 - (int)puVar5);
        FUN_000f0d1c();
        FUN_000e8c83();
        uVar6 = (extraout_ECX_07 + DAT_003d9834) - 0x10000;
      }
    }
  }
  FUN_000eb974();
  return;
}

/******************************************************************************
 * Function : sub_0377eb (Ghidra: FUN_000377eb)
 * Prototype: void sub_0377eb(void);
 * Address  : 0x377eb (Size: 81 bytes)
 * Module   : game.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36ff4
 * Callees  : 3 -> 0xe7714, 0xe797c, 0xe8560
 * Strings  :
 *   - 0x164839: "alex"
 ******************************************************************************/
void FUN_000377eb(void)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_000e8560();
    if (iVar1 == 0) {
      if ((DAT_0019d0b6 & 1) == 0) {
        DAT_0019a2a1 = 1;
        return;
      }
      FUN_000e7714(&DAT_0019cbac,&DAT_00164839); /* 0x164839="alex" */
    }
    if ((DAT_0019d0b6 & 1) != 0) {
      return;
    }
    iVar1 = FUN_000e797c();
    if (iVar1 != 0) {
      return;
    }
    if (DAT_0019a2a1 != '\0') break;
    if (DAT_0019a2a0 != '\0') {
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_03783c (Ghidra: FUN_0003783c)
 * Prototype: longlong sub_03783c(void);
 * Address  : 0x3783c (Size: 56 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37964
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0003783c(void)

{
  uint in_EDX;
  
  if (((DAT_002eb9d8 == -1) || ((uint)(int)DAT_002eb9d8 <= (uint)(DAT_002e8bee - _DAT_002eb9e0))) &&
     (DAT_002ed402 == 0)) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

