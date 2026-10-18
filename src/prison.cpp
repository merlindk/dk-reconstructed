/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: prison.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 9
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_065c8e (Ghidra: FUN_00065c8e)
 * Prototype: undefined4 sub_065c8e(void);
 * Address  : 0x65c8e (Size: 176 bytes)
 * Module   : prison.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65ebd
 * Callees  : 2 -> 0x51374, 0x66016
 ******************************************************************************/
undefined4 FUN_00065c8e(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(short *)(in_EAX + 0x5e) < 0) &&
     ((&DAT_002e91a2)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0')) {
    if (1 < DAT_002ebc4c) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      if (DAT_002e8bf6 % (uint)DAT_002ebc4c != 0) {
        return 0;
      }
    }
    if ((int)*(char *)(in_EDX + 3) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
    }
    FUN_00066016();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_065d3e (Ghidra: FUN_00065d3e)
 * Prototype: undefined4 sub_065d3e(void);
 * Address  : 0x65d3e (Size: 383 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65ebd
 * Callees  : 10 -> 0x49bfc, 0x50de3, 0x64ae7, 0x6e538, 0x72af4, 0x85954, 0xaafa4, 0xb3b58, 0xd1030, 0xdd20c
 ******************************************************************************/
undefined4 FUN_00065d3e(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  
  uVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(&DAT_002e911f + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) {
    iVar3 = FUN_00050de3(uVar4);
    if (iVar3 != 0) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      FUN_0006e538(3,0,2,0x100);
      if (*(char *)(in_EAX + 7) != ')') {
        FUN_00064ae7();
      }
      FUN_00049bfc(0);
      FUN_00072af4();
      *(int *)(&DAT_002e181c + *(char *)(in_EDX + 3) * 0x1508) =
           *(int *)(&DAT_002e181c + *(char *)(in_EDX + 3) * 0x1508) + 1;
      return 1;
    }
    if ((((((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 0x3f) == 0) &&
         (iVar3 = FUN_00050de3(uVar4), iVar3 == 0)) && (iVar3 = FUN_000d1030(), iVar3 != 0)) &&
       (((iVar3 = FUN_00085954(), iVar3 == 0 && (cVar1 = FUN_000dd20c(), cVar1 != '\0')) &&
        (sVar2 = FUN_000b3b58(), sVar2 != 0)))) {
      *(undefined1 *)(in_EAX + 8) = 0x29;
      FUN_000aafa4();
      return extraout_EDX;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_065ebd (Ghidra: FUN_00065ebd)
 * Prototype: undefined8 sub_065ebd(void);
 * Address  : 0x65ebd (Size: 197 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65f8a
 * Callees  : 7 -> 0x51374, 0x522f0, 0x63b6d, 0x65c8e, 0x65d3e, 0x66111, 0x6709c
 ******************************************************************************/
undefined8 FUN_00065ebd(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar1 = *(ushort *)(iVar4 + 0x7e);
  iVar2 = FUN_0006709c();
  if (iVar2 == 0) {
LAB_00065eef:
    FUN_00063b6d();
  }
  else {
    FUN_000522f0();
    iVar2 = FUN_00065c8e();
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
      goto LAB_00065f84;
    }
    iVar2 = extraout_ECX;
    if (*(char *)(iVar4 + 0xd2) != '\0') {
LAB_00065f33:
      if (((uint)*(ushort *)(iVar2 + 0x1b) + DAT_002e8bee & 0x3f) == 0) {
        iVar4 = FUN_00066111();
        if (iVar4 != 0) {
          if ((int)(char)(&DAT_002ddd1e)[(uint)uVar1 * 0x45] ==
              (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
            FUN_00051374();
          }
          goto LAB_00065eef;
        }
      }
      uVar3 = 0;
      goto LAB_00065f84;
    }
    iVar4 = FUN_00065d3e();
    iVar2 = extraout_ECX_00;
    if (iVar4 == 0) goto LAB_00065f33;
  }
  uVar3 = 1;
LAB_00065f84:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_065f82 (Ghidra: FUN_00065f82)
 * Prototype: longlong sub_065f82(undefined4 param_1,uint param_2);
 * Address  : 0x65f82 (Size: 8 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x66247
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00065f82(undefined4 param_1,uint param_2)

{
  return (ulonglong)param_2 << 0x20;
}

/******************************************************************************
 * Function : sub_065f8a (Ghidra: FUN_00065f8a)
 * Prototype: longlong sub_065f8a(void);
 * Address  : 0x65f8a (Size: 140 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x51374, 0x63b6d, 0x65be8, 0x65ebd, 0xd0f50
 ******************************************************************************/
longlong FUN_00065f8a(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint in_EDX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = FUN_000d0f50();
  if (((iVar1 != 0) && (*(short *)(iVar1 + 10) == 4)) &&
     (*(short *)(iVar1 + 1) == *(short *)(iVar2 + 0x7e))) {
    if (*(ushort *)(iVar1 + 0x10) <= *(ushort *)(iVar1 + 0xe)) {
      iVar2 = FUN_00065ebd();
      if (iVar2 == 0) {
        FUN_00065be8();
      }
      return CONCAT44(in_EDX,iVar2);
    }
    if ((int)*(char *)(iVar1 + 3) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_couldn_create_skeleton_prison_066016 (Ghidra: FUN_00066016)
 * Prototype: void dk_couldn_create_skeleton_prison_066016(void);
 * Address  : 0x66016 (Size: 219 bytes)
 * Module   : prison.cpp [direct_file_string_xref]
 * OrigLine : prison.cpp:299 ("COULDN'T CREATE SKELETON IN PRISON")
 * Naming   : String 'COULDN'T CREATE SKELETON IN PRISON'
 * Callers  : 1 -> 0x65c8e
 * Callees  : 6 -> 0x263c9, 0x43bb3, 0x63b6d, 0x8240c, 0x8608c, 0xddaf0
 * Strings  :
 *   - 0x16690b: "prison.cpp"
 *   - 0x1668e8: "COULDN'T CREATE SKELETON IN PRISON"
 ******************************************************************************/
void FUN_00066016(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int in_EDX;
  
  iVar2 = FUN_00043bb3();
  if (iVar2 != 0) {
    FUN_0008240c();
    FUN_00063b6d();
    if (DAT_002ee9b9 == 3) {
      uVar3 = (uint)*(byte *)(in_EDX + 0x1a);
      if (((&DAT_002e91e7)[uVar3 * 0xe6] == '\0') || ((uVar3 != 0 && (uVar3 < 0xe)))) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
    }
    else {
      cVar1 = (&DAT_002e91e7)[(uint)*(byte *)(in_EDX + 0x1a) * 0xe6];
    }
    if (cVar1 != '\0') {
      FUN_000263c9();
    }
    FUN_0008608c(0,0);
    *(int *)(&DAT_002e182c + *(char *)(in_EAX + 3) * 0x1508) =
         *(int *)(&DAT_002e182c + *(char *)(in_EAX + 3) * 0x1508) + 1;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("prison.cpp", line 299, "COULDN'T CREATE SKELETON IN PRISON") */
  return;
}

/******************************************************************************
 * Function : sub_0660f1 (Ghidra: FUN_000660f1)
 * Prototype: undefined8 sub_0660f1(void);
 * Address  : 0x660f1 (Size: 32 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x64e59
 ******************************************************************************/
undefined8 FUN_000660f1(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 0xfd;
  FUN_00064e59();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_066111 (Ghidra: FUN_00066111)
 * Prototype: undefined4 sub_066111(void);
 * Address  : 0x66111 (Size: 92 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65ebd
 * Callees  : 1 -> 0x3f80c
 ******************************************************************************/
undefined4 FUN_00066111(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  
  if (*(char *)(in_EAX + 3) != in_EDX) {
    sVar1 = *(short *)(in_EAX + 0x37);
    while (sVar1 != 0) {
      iVar2 = FUN_0003f80c();
      if (iVar2 != 0) {
        return 1;
      }
      sVar1 = *(short *)(&DAT_002d33c6 + extraout_ECX * 6);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06616d (Ghidra: FUN_0006616d)
 * Prototype: undefined8 sub_06616d(void);
 * Address  : 0x6616d (Size: 218 bytes)
 * Module   : prison.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x66247
 * Callees  : 3 -> 0x713cc, 0xca474, 0xdc440
 ******************************************************************************/
undefined8 FUN_0006616d(void)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined4 in_EDX;
  uint uVar6;
  int local_20;
  
  local_20 = 0x7fffffff;
  uVar6 = 0;
  bVar3 = false;
  if ((*(char *)(in_EAX + 6) < '\x05') && (iVar4 = FUN_000ca474(1), iVar4 != 0)) {
    uVar1 = *(ushort *)(iVar4 + 0x3d);
    while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
      iVar5 = FUN_000dc440();
      iVar4 = local_20;
      if (bVar3) {
        if ((iVar5 < 0x7fffffff) &&
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xab) & 2) == 0))
        goto LAB_00066200;
      }
      else {
        if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xab) & 2) == 0) {
          bVar3 = true;
        }
        else {
          iVar4 = FUN_000713cc();
          if ((iVar4 < 1) || (local_20 <= iVar4)) goto LAB_000661b0;
        }
LAB_00066200:
        local_20 = iVar4;
        uVar6 = uVar2;
      }
LAB_000661b0:
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2aa);
    }
  }
  return CONCAT44(in_EDX,uVar6);
}

