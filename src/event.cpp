/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: event.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_027348 (Ghidra: FUN_00027348)
 * Prototype: void sub_027348(void);
 * Address  : 0x27348 (Size: 72 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00027348(void)

{
  int extraout_ECX;
  
  do {
    FUN_000e6a10();
  } while (extraout_ECX != 0x2e8258);
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : dk_illegal_event_number_created_027390 (Ghidra: FUN_00027390)
 * Prototype: int dk_illegal_event_number_created_027390(undefined4 param_1);
 * Address  : 0x27390 (Size: 285 bytes)
 * Module   : event.cpp [direct_file_string_xref]
 * OrigLine : event.cpp:52 ("Illegal Event number created"); event.cpp:74 ("ILLEGAL MY_EVENT PLAYER ALLOCATION")
 * Naming   : String 'Illegal Event number created'
 * Callers  : 13 -> 0x26b04, 0x26e5e, 0x274ad, 0x27553, 0x5bcd7, 0x66b28, 0x66dc2, 0x67920, 0x76319, 0x76d56 ...
 * Callees  : 4 -> 0x27703, 0x2775f, 0x27824, 0xddaf0
 * Strings  :
 *   - 0x162851: "event.cpp"
 *   - 0x16287e: "event.cpp"
 *   - 0x162834: "Illegal Event number created"
 *   - 0x16285b: "ILLEGAL MY_EVENT PLAYER ALLOCATION"
 ******************************************************************************/
int FUN_00027390(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  byte in_CL;
  uint extraout_ECX;
  uint extraout_ECX_00;
  byte unaff_BL;
  uint uVar3;
  int iVar4;
  
  if (in_CL < DAT_002eb543) {
    uVar3 = (uint)in_CL;
    iVar4 = uVar3 * 0x1508;
    uVar1 = (uint)unaff_BL;
    if (uVar1 < 0x1b) {
      if ((((*(int *)(&DAT_002e0589 + uVar3 * 0xa84 + uVar1 * 2 + 0x9da) == 0) ||
           ((uint)(*(int *)(&DAT_002e0589 + uVar3 * 0xa84 + uVar1 * 2 + 0x9da) +
                  *(int *)(&DAT_00191386 + uVar1 * 0x10)) < DAT_002e8bee)) ||
          (*(int *)(&DAT_00191386 + uVar1 * 0x10) == 0)) && (iVar2 = FUN_00027703(), iVar2 != 0)) {
        FUN_0002775f(extraout_ECX & 0xff,param_1);
        uVar1 = 0xc;
        *(uint *)(iVar4 + 0x2e193d + (uint)unaff_BL * 4) = DAT_002e8bee;
        do {
          if (uVar1 == 0) {
LAB_0002748a:
            if ((uVar1 & 0xff) != 0) {
              return iVar2;
            }
            FUN_00027824();
            (&DAT_002e193c)[iVar4] = *(undefined1 *)(iVar2 + 1);
            return iVar2;
          }
          if ((&DAT_002e1930)[uVar1 + iVar4] == '\0') {
            if ((int)(char)(&DAT_002e1428)[iVar4] != (uint)*(byte *)(iVar2 + 10)) {
              FUN_000ddaf0(); /* LbErrorLog("event.cpp", line 52, "Illegal Event number created") */
              uVar1 = extraout_ECX_00;
            }
            (&DAT_002e1930)[(uVar1 & 0xff) + iVar4] = *(undefined1 *)(iVar2 + 1);
            goto LAB_0002748a;
          }
          uVar1 = (uint)(byte)((char)uVar1 - 1);
        } while( true );
      }
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("event.cpp", line 74, "ILLEGAL MY_EVENT PLAYER ALLOCATION") */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0274ad (Ghidra: FUN_000274ad)
 * Prototype: uint sub_0274ad(undefined4 param_1);
 * Address  : 0x274ad (Size: 166 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 20 -> 0x109ea, 0x23291, 0x2796f, 0x29254, 0x3806d, 0x387b3, 0x38faa, 0x3c53a, 0x3c762, 0x3e33a ...
 * Callees  : 3 -> 0x27390, 0x2775f, 0xdc2c8
 ******************************************************************************/
uint FUN_000274ad(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte in_CL;
  byte unaff_BL;
  byte *pbVar4;
  byte *local_18;
  
  local_18 = (byte *)0x0;
  pbVar4 = &DAT_002e7091;
  while ((pbVar1 = local_18, pbVar4 <= &DAT_002e789b &&
         (((((*pbVar4 & 1) == 0 || (pbVar4[10] != in_CL)) || (pbVar4[0xb] != unaff_BL)) ||
          (iVar2 = FUN_000dc2c8(), pbVar1 = pbVar4, 0x4ff < iVar2))))) {
    pbVar4 = pbVar4 + 0x15;
  }
  local_18 = pbVar1;
  if (local_18 == (byte *)0x0) {
    iVar2 = FUN_00027390(param_1);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (uint)*(byte *)(iVar2 + 1);
    }
  }
  else {
    FUN_0002775f(in_CL,param_1);
    uVar3 = -(uint)local_18[1];
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_027553 (Ghidra: FUN_00027553)
 * Prototype: uint sub_027553(undefined4 param_1);
 * Address  : 0x27553 (Size: 110 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1443f, 0x5ba80
 * Callees  : 2 -> 0x27390, 0x2775f
 ******************************************************************************/
uint FUN_00027553(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte in_CL;
  byte unaff_BL;
  byte *pbVar4;
  
  pbVar4 = (byte *)0x0;
  for (pbVar1 = &DAT_002e7091; pbVar1 < (byte *)0x2e789c; pbVar1 = pbVar1 + 0x15) {
    if ((((*pbVar1 & 1) != 0) && (in_CL == pbVar1[10])) && (unaff_BL == pbVar1[0xb])) {
      pbVar4 = pbVar1;
    }
  }
  if (pbVar4 == (byte *)0x0) {
    iVar2 = FUN_00027390(param_1);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = (uint)*(byte *)(iVar2 + 1);
    }
  }
  else {
    FUN_0002775f(in_CL,param_1);
    uVar3 = -(uint)pbVar4[1];
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_0275c1 (Ghidra: FUN_000275c1)
 * Prototype: void sub_0275c1(void);
 * Address  : 0x275c1 (Size: 53 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2347d, 0xde6a8
 * Callees  : 1 -> 0x275f6
 ******************************************************************************/
void FUN_000275c1(void)

{
  uint in_EAX;
  uint extraout_ECX;
  byte *pbVar1;
  
  for (pbVar1 = &DAT_002e7091; pbVar1 < (byte *)0x2e789c; pbVar1 = pbVar1 + 0x15) {
    if (((*pbVar1 & 1) != 0) && (pbVar1[10] == in_EAX)) {
      FUN_000275f6();
      in_EAX = extraout_ECX;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0275f6 (Ghidra: FUN_000275f6)
 * Prototype: void sub_0275f6(void);
 * Address  : 0x275f6 (Size: 89 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x275c1, 0x2764f, 0x2778e, 0x27824
 * Callees  : 2 -> 0x27746, 0x5ab81
 ******************************************************************************/
void FUN_000275f6(void)

{
  int in_EAX;
  uint in_EDX;
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = &DAT_002e0589 + in_EAX * 0xa84;
  *(undefined4 *)(in_EAX * 0x1508 + 0x2e193d + (uint)(byte)(&DAT_002e7087)[in_EDX * 0x15] * 4) =
       DAT_002e8bee;
  iVar1 = 0;
  do {
    if (0xc < iVar1) {
LAB_00027644:
      FUN_00027746();
      return;
    }
    if (*(byte *)((int)puVar2 + 0x13a7) == in_EDX) {
      FUN_0005ab81();
      *(undefined1 *)((int)puVar2 + 0x13a7) = 0;
      goto LAB_00027644;
    }
    puVar2 = (undefined2 *)((int)puVar2 + 1);
    iVar1 = iVar1 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_02764f (Ghidra: FUN_0002764f)
 * Prototype: void sub_02764f(void);
 * Address  : 0x2764f (Size: 79 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 1 -> 0x275f6
 ******************************************************************************/
void FUN_0002764f(void)

{
  byte *pbVar1;
  
  for (pbVar1 = &DAT_002e7091; pbVar1 < (byte *)0x2e789c; pbVar1 = pbVar1 + 0x15) {
    if ((*pbVar1 & 1) != 0) {
      if (0 < *(int *)(pbVar1 + 0x10)) {
        *(int *)(pbVar1 + 0x10) = *(int *)(pbVar1 + 0x10) + -1;
      }
      if ((*(int *)(pbVar1 + 0x10) == 0) &&
         ((&DAT_002e16fc)[(uint)pbVar1[10] * 0x1508] != pbVar1[1])) {
        FUN_000275f6();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_02769e (Ghidra: FUN_0002769e)
 * Prototype: byte * sub_02769e(void);
 * Address  : 0x2769e (Size: 50 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_0002769e(void)

{
  uint in_EAX;
  byte *pbVar1;
  uint in_EDX;
  
  pbVar1 = &DAT_002e7091;
  while( true ) {
    if (&DAT_002e789b < pbVar1) {
      return (byte *)0x0;
    }
    if ((((*pbVar1 & 1) != 0) && (pbVar1[10] == in_EDX)) && (pbVar1[0xb] == in_EAX)) break;
    pbVar1 = pbVar1 + 0x15;
  }
  return pbVar1;
}

/******************************************************************************
 * Function : sub_0276d0 (Ghidra: FUN_000276d0)
 * Prototype: undefined4 sub_0276d0(void);
 * Address  : 0x276d0 (Size: 51 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x49eff
 ******************************************************************************/
undefined4 FUN_000276d0(void)

{
  int in_EAX;
  int in_EDX;
  
  *(undefined2 *)(in_EAX + 0xe4) = *(undefined2 *)(&DAT_002e707e + in_EDX * 0x15);
  *(undefined2 *)(in_EAX + 0xe6) = *(undefined2 *)(&DAT_002e7082 + in_EDX * 0x15);
  FUN_00049eff();
  return 1;
}

/******************************************************************************
 * Function : sub_027703 (Ghidra: FUN_00027703)
 * Prototype: longlong sub_027703(void);
 * Address  : 0x27703 (Size: 67 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x27390
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00027703(void)

{
  int iVar1;
  char cVar2;
  uint in_EDX;
  
  cVar2 = '\x01';
  iVar1 = 0x15;
  while( true ) {
    if (0x833 < iVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (((&DAT_002e707c)[iVar1] & 1) == 0) break;
    iVar1 = iVar1 + 0x15;
    cVar2 = cVar2 + '\x01';
  }
  *(char *)(iVar1 + 0x2e707d) = cVar2;
  (&DAT_002e707c)[iVar1] = (&DAT_002e707c)[iVar1] | 1;
  return CONCAT44(in_EDX,&DAT_002e707c + iVar1);
}

/******************************************************************************
 * Function : sub_027746 (Ghidra: FUN_00027746)
 * Prototype: void sub_027746(void);
 * Address  : 0x27746 (Size: 25 bytes)
 * Module   : event.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x275f6
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00027746(void)

{
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_02775f (Ghidra: FUN_0002775f)
 * Prototype: void sub_02775f(undefined1 param_1,undefined4 param_2);
 * Address  : 0x2775f (Size: 47 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x27390, 0x274ad, 0x27553
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002775f(undefined1 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_EAX;
  byte in_CL;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  *(undefined4 *)(in_EAX + 2) = in_EDX;
  *(undefined1 *)(in_EAX + 10) = param_1;
  *(undefined4 *)(in_EAX + 6) = unaff_EBX;
  *(byte *)(in_EAX + 0xb) = in_CL;
  uVar1 = *(undefined4 *)(&DAT_00191382 + (uint)in_CL * 0x10);
  *(undefined1 *)(in_EAX + 0x14) = 1;
  *(undefined4 *)(in_EAX + 0x10) = uVar1;
  *(undefined4 *)(in_EAX + 0xc) = param_2;
  return;
}

/******************************************************************************
 * Function : sub_027824 (Ghidra: FUN_00027824)
 * Prototype: void sub_027824(void);
 * Address  : 0x27824 (Size: 110 bytes)
 * Module   : event.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x27390
 * Callees  : 2 -> 0x275f6, 0x52f78
 ******************************************************************************/
void FUN_00027824(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  
  iVar4 = -1;
  iVar2 = 0xc;
  local_1c = 0x7fffffff;
  iVar3 = in_EAX + 0xc;
  do {
    iVar1 = *(int *)((int)&DAT_002e708c + (uint)*(byte *)(iVar3 + 0x13a7) * 0x15);
    if ((iVar1 < local_1c) && (-1 < iVar1)) {
      iVar4 = iVar2;
      local_1c = iVar1;
    }
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (0 < iVar2);
  if (iVar4 != -1) {
    FUN_000275f6();
  }
  FUN_00052f78();
  return;
}

