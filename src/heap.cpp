/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: heap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_graphics_heap_already_allocated_03a3d4 (Ghidra: FUN_0003a3d4)
 * Prototype: undefined8 dk_graphics_heap_already_allocated_03a3d4(void);
 * Address  : 0x3a3d4 (Size: 231 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp:47 ("Graphics heap already allocated"); heap.cpp:80 ("Unable to allocate Graphic Heap")
 * Naming   : String 'Graphics heap already allocated'
 * Callers  : 1 -> 0x6a689
 * Callees  : 4 -> 0xddaf0, 0xe9484, 0xe94b0, 0xf0f8c
 * Strings  :
 *   - 0x164b10: "heap.cpp"
 *   - 0x164b39: "heap.cpp"
 *   - 0x164af0: "Graphics heap already allocated"
 *   - 0x164b19: "Unable to allocate Graphic Heap"
 *   - 0x164b42: "GraphicsHeap Size %d"
 ******************************************************************************/
undefined8 FUN_0003a3d4(void)

{
  bool bVar1;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00334065;
  bVar1 = true;
  if (DAT_00333187 != 0) {
    FUN_000ddaf0(); /* LbErrorLog("heap.cpp", line 47, "Graphics heap already allocated") */
    FUN_000e94b0();
    DAT_00333187 = 0;
    in_ECX = extraout_ECX;
  }
  do {
    do {
      if (DAT_00333187 != 0) {
        uVar3 = 1;
        FUN_000f0f8c(s_GraphicsHeap_Size__d_00164b42,in_ECX);
LAB_0003a4b3:
        return CONCAT44(in_EDX,uVar3);
      }
      if (iVar2 == 0x20) {
        iVar2 = 0x18;
      }
      else if (iVar2 == 0x18) {
        iVar2 = 0x10;
      }
      else if (iVar2 == 0x10) {
        iVar2 = 8;
      }
      else if (bVar1) {
        bVar1 = false;
      }
      DAT_00333187 = FUN_000e9484();
      in_ECX = extraout_ECX_00;
    } while ((iVar2 != 8) || (DAT_00333187 != 0));
    if (extraout_ECX_00 < 0x80000) {
      FUN_000ddaf0(); /* LbErrorLog("heap.cpp", line 80, "Unable to allocate Graphic Heap") */
      uVar3 = 0;
      goto LAB_0003a4b3;
    }
    in_ECX = extraout_ECX_00 + -0x4000;
  } while( true );
}

/******************************************************************************
 * Function : sub_03a4bb (Ghidra: FUN_0003a4bb)
 * Prototype: void sub_03a4bb(void);
 * Address  : 0x3a4bb (Size: 21 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6a689, 0x6aac0
 * Callees  : 1 -> 0xe94b0
 ******************************************************************************/
void FUN_0003a4bb(void)

{
  FUN_000e94b0();
  DAT_00333187 = 0;
  return;
}

/******************************************************************************
 * Function : dk_graphics_heap_allocated_03a4e3 (Ghidra: FUN_0003a4e3)
 * Prototype: void dk_graphics_heap_allocated_03a4e3(void);
 * Address  : 0x3a4e3 (Size: 155 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp:147 ("Graphics Heap not allocated"); heap.cpp:156 ("NOT ENOUGH MEMORY TO INITIALISE HEAP.")
 * Naming   : String 'Graphics Heap not allocated'
 * Callers  : 2 -> 0x404f7, 0x6a689
 * Callees  : 4 -> 0x3a7b8, 0x3a8a8, 0xddaf0, 0xe6a10
 * Strings  :
 *   - 0x164b73: "heap.cpp"
 *   - 0x164ba2: "heap.cpp"
 *   - 0x164b57: "Graphics Heap not allocated"
 *   - 0x164b7c: "NOT ENOUGH MEMORY TO INITIALISE HEAP."
 ******************************************************************************/
void FUN_0003a4e3(void)

{
  if (DAT_00333187 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("heap.cpp", line 147, "Graphics Heap not allocated") */
    return;
  }
  DAT_0033f29c = FUN_0003a8a8();
  if (DAT_0033f29c == 0) {
    FUN_000ddaf0(); /* LbErrorLog("heap.cpp", line 156, "NOT ENOUGH MEMORY TO INITIALISE HEAP.") */
  }
  FUN_0003a7b8();
  FUN_000e6a10();
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_03a57e (Ghidra: FUN_0003a57e)
 * Prototype: void sub_03a57e(void);
 * Address  : 0x3a57e (Size: 44 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x404f7, 0x6a689, 0x6aac0
 * Callees  : 2 -> 0x3a839, 0xe6a10
 ******************************************************************************/
void FUN_0003a57e(void)

{
  FUN_0003a839();
  FUN_000e6a10();
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_03a5aa (Ghidra: FUN_0003a5aa)
 * Prototype: undefined8 sub_03a5aa(void);
 * Address  : 0x3a5aa (Size: 33 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4c7eb, 0x4ca51
 * Callees  : 3 -> 0x3a6a4, 0x3a6f3, 0x3a742
 ******************************************************************************/
undefined8 FUN_0003a5aa(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  
  FUN_0003a6a4();
  uVar1 = FUN_0003a742();
  FUN_0003a6f3();
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_find_freeable_item_03a5cb (Ghidra: FUN_0003a5cb)
 * Prototype: undefined8 dk_find_freeable_item_03a5cb(void);
 * Address  : 0x3a5cb (Size: 217 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp:314 ("Unable to find freeable item")
 * Naming   : String 'Unable to find freeable item'
 * Callers  : 1 -> 0x3a742
 * Callees  : 5 -> 0x3a857, 0x3a8f7, 0x3aa62, 0x3ad39, 0xddaf0
 * Strings  :
 *   - 0x164bc8: "heap.cpp"
 *   - 0x164bfa: "heap.cpp"
 *   - 0x164c1b: "heap.cpp"
 *   - 0x164bab: "Unable to find freeable item"
 *   - 0x164bd1: "Unable to make room for new item on heap"
 *   - 0x164c03: "Load Fail On KeepSprite"
 ******************************************************************************/
undefined8 FUN_0003a5cb(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_CX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar4;
  undefined4 in_EDX;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar1 = FUN_0003a8f7();
    uVar4 = extraout_ECX;
    if (iVar1 != 0) break;
    iVar2 = FUN_0003aa62();
    if (iVar2 < 0) {
      FUN_0003ad39();
      iVar1 = FUN_0003a8f7();
      uVar4 = extraout_ECX_01;
      if (iVar1 == 0) goto LAB_0003a631;
      break;
    }
    iVar5 = iVar5 + 1;
    *(undefined4 *)(&DAT_0033f2a0 + iVar2 * 4) = 0;
    *(undefined4 *)(&DAT_003363a8 + iVar2 * 4) = 0;
    uVar4 = extraout_ECX_00;
  } while (iVar5 < 100);
  if (iVar5 < 100) {
    iVar5 = FUN_0003a857();
    if (iVar5 != 0) {
      *(int *)(&DAT_0033f2a0 + (uVar4 & 0xffff) * 4) = iVar1;
      *(int *)(&DAT_003363a8 + (uVar4 & 0xffff) * 4) = iVar1;
      uVar3 = 1;
      *(undefined2 *)(iVar1 + 10) = extraout_CX;
      goto LAB_0003a4b5;
    }
  }
LAB_0003a631:
  FUN_000ddaf0(); /* LbErrorLog("heap.cpp", line 314, "Unable to find freeable item") */
  uVar3 = 0;
LAB_0003a4b5:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_03a6a4 (Ghidra: FUN_0003a6a4)
 * Prototype: void sub_03a6a4(void);
 * Address  : 0x3a6a4 (Size: 79 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a5aa
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003a6a4(void)

{
  uint in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = DAT_002f10da + (in_EAX & 0xffff) * 0x10;
  if (*(char *)(iVar1 + 8) == '\0') {
    uVar3 = (uint)*(byte *)(iVar1 + 9);
  }
  else {
    uVar3 = (uint)*(byte *)(iVar1 + 9) * 5;
  }
  piVar2 = (int *)(&DAT_0033f2a0 + (in_EAX & 0xffff) * 4);
  for (iVar1 = 0; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
    if (*piVar2 != 0) {
      *(byte *)(*piVar2 + 8) = *(byte *)(*piVar2 + 8) | 2;
    }
    piVar2 = piVar2 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_03a6f3 (Ghidra: FUN_0003a6f3)
 * Prototype: void sub_03a6f3(void);
 * Address  : 0x3a6f3 (Size: 79 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a5aa
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0003a6f3(void)

{
  uint in_EAX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = DAT_002f10da + (in_EAX & 0xffff) * 0x10;
  if (*(char *)(iVar1 + 8) == '\0') {
    uVar3 = (uint)*(byte *)(iVar1 + 9);
  }
  else {
    uVar3 = (uint)*(byte *)(iVar1 + 9) * 5;
  }
  piVar2 = (int *)(&DAT_0033f2a0 + (in_EAX & 0xffff) * 4);
  for (iVar1 = 0; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
    if (*piVar2 != 0) {
      *(byte *)(*piVar2 + 8) = *(byte *)(*piVar2 + 8) & 0xfd;
    }
    piVar2 = piVar2 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_03a742 (Ghidra: FUN_0003a742)
 * Prototype: undefined8 sub_03a742(void);
 * Address  : 0x3a742 (Size: 118 bytes)
 * Module   : heap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a5aa
 * Callees  : 2 -> 0x3a5cb, 0x3aa24
 ******************************************************************************/
undefined8 FUN_0003a742(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  iVar3 = (in_EAX & 0xffff) * 0x10 + DAT_002f10da;
  if (*(char *)(iVar3 + 8) == '\0') {
    uVar5 = (uint)*(byte *)(iVar3 + 9);
  }
  else {
    uVar5 = (uint)*(byte *)(iVar3 + 9) * 5;
  }
  piVar4 = (int *)(&DAT_0033f2a0 + (in_EAX & 0xffff) * 4);
  for (iVar3 = 0; iVar3 < (int)uVar5; iVar3 = iVar3 + 1) {
    if (*piVar4 == 0) {
      iVar1 = FUN_0003a5cb();
      uVar2 = 0;
      if (iVar1 == 0) goto LAB_0003a4b5;
      *(byte *)(*piVar4 + 8) = *(byte *)(*piVar4 + 8) | 2;
    }
    else {
      FUN_0003aa24();
    }
    piVar4 = piVar4 + 1;
  }
  uVar2 = 1;
LAB_0003a4b5:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_open_keeper_data_file_03a7b8 (Ghidra: FUN_0003a7b8)
 * Prototype: undefined8 dk_open_keeper_data_file_03a7b8(void);
 * Address  : 0x3a7b8 (Size: 129 bytes)
 * Module   : heap.cpp [direct_file_string_xref]
 * OrigLine : heap.cpp:470 ("can not open creature.jty <open_keeper_data_file()>")
 * Naming   : References 'can not open creature.jty <open_keeper_data_file()>'
 * Callers  : 1 -> 0x3a4e3
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xddaf0, 0xe7714, 0xe8980
 * Strings  :
 *   - 0x164c6f: "heap.cpp"
 *   - 0x164c24: "DATA"
 *   - 0x164c2b: "%s\creature.jty"
 *   - 0x164c3b: "can not open creature.jty <open_keeper_data_file()>"
 ******************************************************************************/
undefined8 FUN_0003a7b8(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined1 local_4c [64];
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(local_4c,s__s_creature_jty_00164c2b,uVar1);
  DAT_0017bfec = FUN_000e8980();
  if (DAT_0017bfec == -1) {
    FUN_000150f0();
    DAT_0017bfec = FUN_000e8980();
    if (DAT_0017bfec == -1) {
      FUN_000ddaf0(); /* LbErrorLog("heap.cpp", line 470, "can not open creature.jty <open_keeper_data_file()>") */
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_03a839 (Ghidra: FUN_0003a839)
 * Prototype: void sub_03a839(void);
 * Address  : 0x3a839 (Size: 30 bytes)
 * Module   : heap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a57e
 * Callees  : 1 -> 0xe8a1c
 ******************************************************************************/
void FUN_0003a839(void)

{
  if (DAT_0017bfec != -1) {
    FUN_000e8a1c();
    DAT_0017bfec = -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_03a857 (Ghidra: FUN_0003a857)
 * Prototype: undefined4 sub_03a857(void);
 * Address  : 0x3a857 (Size: 79 bytes)
 * Module   : heap.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x3a5cb
 * Callees  : 2 -> 0xe8a34, 0xe8a80
 ******************************************************************************/
undefined4 FUN_0003a857(void)

{
  if (DAT_0017bfec != -1) {
    FUN_000e8a34();
    FUN_000e8a80();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_03a8a8 (Ghidra: FUN_0003a8a8)
 * Prototype: int * sub_03a8a8(void);
 * Address  : 0x3a8a8 (Size: 79 bytes)
 * Module   : heap.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3a4e3, 0x6deac
 * Callees  : 0 -> 
 ******************************************************************************/
int * FUN_0003a8a8(void)

{
  int *in_EAX;
  int in_EDX;
  int unaff_EBX;
  int iVar1;
  
  iVar1 = in_EDX - (unaff_EBX * 0x1c + 0x24);
  if (iVar1 < 1) {
    return (int *)0x0;
  }
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[2] = iVar1;
  in_EAX[3] = unaff_EBX;
  *in_EAX = (int)(in_EAX + unaff_EBX * 7 + 9);
  in_EAX[1] = (int)in_EAX + in_EDX;
  return in_EAX;
}

