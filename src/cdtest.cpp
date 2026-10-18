/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: cdtest.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 8
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_014c9a (Ghidra: FUN_00014c9a)
 * Prototype: void sub_014c9a(void);
 * Address  : 0x14c9a (Size: 171 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4a6a2
 * Callees  : 2 -> 0xd7688, 0xda6fc
 ******************************************************************************/
void FUN_00014c9a(void)

{
  byte bVar1;
  int in_EAX;
  int in_EDX;
  undefined4 uVar2;
  
  bVar1 = ((&DAT_002d33ca)
           [((&DAT_0019033b)[(in_EAX / 3) * 3] + (&DAT_0019033b)[(in_EDX / 3) * 3] * 0x55) * 6] &
          0x1f) >> 3;
  if (bVar1 == 1) {
    uVar2 = 0;
  }
  else if (bVar1 == 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_000d7688(uVar2,(in_EDX / 3) * 3);
  FUN_000da6fc();
  return;
}

/******************************************************************************
 * Function : sub_014e9f (Ghidra: FUN_00014e9f)
 * Prototype: void sub_014e9f(void);
 * Address  : 0x14e9f (Size: 267 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4bf40
 * Callees  : 7 -> 0x400da, 0x401aa, 0xa5d4c, 0xd7688, 0xd99f8, 0xda6fc, 0xda7bc
 ******************************************************************************/
void FUN_00014e9f(void)

{
  int in_EAX;
  int iVar1;
  undefined1 unaff_BL;
  uint uVar2;
  
  FUN_000d99f8(unaff_BL);
  FUN_000d7688(0);
  FUN_000da6fc();
  uVar2 = 0;
  do {
    if (uVar2 != (int)*(char *)(in_EAX + 6)) {
      iVar1 = FUN_000401aa();
      if (-1 < iVar1) {
        FUN_000400da();
        if (uVar2 == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          FUN_000a5d4c();
        }
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  FUN_000da7bc();
  return;
}

/******************************************************************************
 * Function : sub_014faa (Ghidra: FUN_00014faa)
 * Prototype: undefined4 sub_014faa(void);
 * Address  : 0x14faa (Size: 134 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15030
 * Callees  : 1 -> 0x3f80c
 ******************************************************************************/
undefined4 FUN_00014faa(void)

{
  byte in_AL;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if (((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(unaff_EBX * 0x55 + in_EDX) * 6] * 0x16] ==
       '\x03') &&
     (in_AL != ((&DAT_002d33ca)
                [((&DAT_0019033b)[in_EDX * 3 + 1] + (&DAT_0019033b)[unaff_EBX * 3 + 1] * 0x55) * 6]
               & 7))) {
    iVar1 = FUN_0003f80c();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_015030 (Ghidra: FUN_00015030)
 * Prototype: void sub_015030(void);
 * Address  : 0x15030 (Size: 189 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x4a40c, 0xc4b0c, 0xd0118, 0xd0488, 0xd137c
 * Callees  : 5 -> 0x14faa, 0xd7688, 0xd9dc0, 0xda6fc, 0xdab3c
 ******************************************************************************/
void FUN_00015030(void)

{
  byte in_AL;
  int iVar1;
  undefined4 in_EDX;
  undefined1 *puVar2;
  uint *puVar3;
  uint auStack_3c [5];
  char local_1c;
  byte local_14;
  
  puVar3 = auStack_3c + 2;
  auStack_3c[4] = in_EDX;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_1c = (char)auStack_3c[4] + *(char *)((int)&DAT_0018b67b + (uint)local_14 * 2 + 3);
    auStack_3c[3] = (uint)in_AL;
    *(undefined4 *)((int)puVar3 + -4) = 0x15082;
    iVar1 = FUN_00014faa();
    puVar2 = (undefined1 *)puVar3;
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)((int)puVar3 + -4);
      *(undefined4 *)((int)puVar3 + -4) = 0;
      auStack_3c[2] = (uint)(byte)(local_1c * '\x03' + 1);
      *(undefined4 *)((int)puVar3 + -8) = 0x150c5;
      FUN_000d9dc0();
      *(undefined4 *)((int)puVar3 + -8) = 0x150d3;
      FUN_000d7688();
      *(undefined4 *)((int)puVar3 + -8) = 0x150df;
      FUN_000dab3c();
      *(undefined4 *)((int)puVar3 + -8) = 0x150e8;
      FUN_000da6fc();
    }
    puVar3 = (uint *)puVar2;
  }
  return;
}

/******************************************************************************
 * Function : dk_ldata_dkwind00_dat_0150f0 (Ghidra: FUN_000150f0)
 * Prototype: void dk_ldata_dkwind00_dat_0150f0(void);
 * Address  : 0x150f0 (Size: 258 bytes)
 * Module   : cdtest.cpp [direct_file_string_xref]
 * OrigLine : cdtest.cpp:61 ("Unable to test for CD in drive")
 * Naming   : String 'LDATA\DKWIND00.DAT'
 * Callers  : 41 -> 0x29738, 0x29800, 0x298b5, 0x29979, 0x299f8, 0x29ac2, 0x29b54, 0x29bfe, 0x29d32, 0x29d96 ...
 * Callees  : 12 -> 0x151f8, 0x15251, 0xddaf0, 0xe7714, 0xe7904, 0xe797c, 0xe79fc, 0xe830c, 0xe83f0, 0xe846c ...
 * Strings  :
 *   - 0x1603d8: "cdtest.cpp"
 *   - 0x1603a0: "LDATA\DKWIND00.DAT"
 *   - 0x1603b3: "%s\%s"
 *   - 0x174b00: "data\nocd.raw"
 *   - 0x1603b9: "Unable to test for CD in drive"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000150f0(void)

{
  int iVar1;
  int extraout_EDX;
  undefined8 uVar2;
  undefined1 local_9c [144];
  
  FUN_000e7714(local_9c,s__s__s_001603b3,&DAT_002ee923,s_LDATA_DKWIND00_DAT_001603a0); /* 0x1603a0="LDATA\DKWIND00.DAT" */
  uVar2 = FUN_000151f8();
  if ((int)uVar2 == 0) {
    if ((int)((ulonglong)uVar2 >> 0x20) != 0) {
      FUN_000e797c();
    }
    iVar1 = FUN_000e830c();
    if (iVar1 != 0) {
      FUN_000ddaf0(); /* LbErrorLog("cdtest.cpp", line 61, "Unable to test for CD in drive") */
      return;
    }
    FUN_000e7904(0);
    FUN_000e846c(_DAT_001991a4);
    while (DAT_0019a2a1 == '\0') {
      iVar1 = FUN_000151f8();
      if (iVar1 != 0) break;
      iVar1 = FUN_00015251();
      if (iVar1 != 0) {
        FUN_000e79fc();
      }
      while( true ) {
        iVar1 = FUN_000e8560();
        if (iVar1 == 0) break;
        iVar1 = FUN_000e797c();
        if (((iVar1 != 0) || (DAT_0019a2a1 != '\0')) || (DAT_0019a2a0 != '\0')) goto LAB_000151cf;
      }
      DAT_0019a2a1 = '\x01';
LAB_000151cf:
      FUN_000e8858();
    }
    FUN_000e83f0();
    if (extraout_EDX != 0) {
      FUN_000e797c();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0151f2 (Ghidra: FUN_000151f2)
 * Prototype: undefined4 sub_0151f2(void);
 * Address  : 0x151f2 (Size: 6 bytes)
 * Module   : cdtest.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000151f2(void)

{
  return 3;
}

/******************************************************************************
 * Function : sub_0151f8 (Ghidra: FUN_000151f8)
 * Prototype: longlong sub_0151f8(void);
 * Address  : 0x151f8 (Size: 89 bytes)
 * Module   : cdtest.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x150f0
 * Callees  : 4 -> 0xe8876, 0xe8980, 0xe8a1c, 0xe8a80
 ******************************************************************************/
longlong FUN_000151f8(void)

{
  int iVar1;
  uint in_EDX;
  
  FUN_000e8876();
  iVar1 = FUN_000e8980();
  if (iVar1 != -1) {
    iVar1 = FUN_000e8a80();
    if (iVar1 != -1) {
      FUN_000e8a1c();
      return CONCAT44(in_EDX,1);
    }
    FUN_000e8a1c();
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_015251 (Ghidra: FUN_00015251)
 * Prototype: undefined8 sub_015251(void);
 * Address  : 0x15251 (Size: 198 bytes)
 * Module   : cdtest.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x150f0
 * Callees  : 2 -> 0xe797c, 0xe8c83
 ******************************************************************************/
undefined8 FUN_00015251(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined1 *puVar6;
  
  iVar2 = FUN_000e797c();
  if (iVar2 == 1) {
    if ((DAT_003d9878 == 0xd) || (DAT_003d9878 == 10)) {
      puVar5 = DAT_003d9818;
      if (DAT_003d9878 == 0xd) {
        puVar5 = DAT_003d9818 + DAT_003d9834 * 0x28;
      }
      iVar2 = 0;
      puVar6 = DAT_001991a0;
      do {
        iVar3 = 0;
        do {
          uVar1 = *puVar6;
          *puVar5 = uVar1;
          iVar3 = iVar3 + 1;
          puVar6 = puVar6 + 1;
          puVar5[1] = uVar1;
          puVar5 = puVar5 + 2;
        } while (iVar3 < 0x140);
        iVar2 = iVar2 + 1;
        FUN_000e8c83();
        puVar5 = (undefined1 *)(extraout_ECX + DAT_003d9834);
      } while (iVar2 < 200);
    }
    else {
      iVar2 = 0;
      do {
        FUN_000e8c83();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 200);
    }
    FUN_000e797c();
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(in_EDX,uVar4);
}

