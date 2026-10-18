/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: combobj.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_016cd0 (Ghidra: FUN_00016cd0)
 * Prototype: void sub_016cd0(void);
 * Address  : 0x16cd0 (Size: 104 bytes)
 * Module   : combobj.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16d38
 * Callees  : 1 -> 0x15e26
 ******************************************************************************/
void FUN_00016cd0(void)

{
  byte bVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_EDX;
  int iVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(in_EAX + 0x1a);
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar3 + 0xa2) = *(undefined2 *)(in_EDX + 0x1b);
  uVar2 = *(undefined4 *)(in_EDX + 9);
  *(undefined1 *)(iVar3 + 0xaa) = 0;
  *(undefined4 *)(iVar3 + 0x9e) = uVar2;
  *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 8;
  if ((&DAT_002e918a)[(uint)bVar1 * 0xe6] == '\x02') {
    uVar4 = FUN_00015e26();
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      *(undefined1 *)(iVar3 + 0xa6) = 2;
      return;
    }
  }
  *(undefined1 *)(iVar3 + 0xa6) = 1;
  return;
}

/******************************************************************************
 * Function : sub_016d38 (Ghidra: FUN_00016d38)
 * Prototype: undefined4 sub_016d38(void);
 * Address  : 0x16d38 (Size: 42 bytes)
 * Module   : combobj.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x15b37, 0x38edc, 0x63dd3, 0xe1b88
 * Callees  : 2 -> 0x16cd0, 0x64a5f
 ******************************************************************************/
undefined4 FUN_00016d38(void)

{
  char cVar1;
  
  cVar1 = FUN_00064a5f();
  if (cVar1 != '\0') {
    FUN_00016cd0();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_object_combat_but_should_016d62 (Ghidra: FUN_00016d62)
 * Prototype: longlong dk_object_combat_but_should_016d62(void);
 * Address  : 0x16d62 (Size: 147 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp:93 ("Invalid fight object state")
 * Naming   : String 'NOT IN OBJECT COMBAT BUT SHOULD BE'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x16423, 0x63b6d, 0xddaf0
 * Strings  :
 *   - 0x16055b: "combobj.cpp"
 *   - 0x160582: "combobj.cpp"
 *   - 0x160538: "NOT IN OBJECT COMBAT BUT SHOULD BE"
 *   - 0x160567: "Invalid fight object state"
 ******************************************************************************/
longlong FUN_00016d62(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 0xa2)];
  if ((*(byte *)(iVar3 + 3) & 8) != 0) {
    iVar2 = FUN_00016423();
    if ((iVar2 == 0) || (*(char *)(iVar1 + 7) == '\x03')) goto LAB_00016de7;
    iVar3 = (uint)*(byte *)(iVar3 + 0xa6) * 4;
    if (*(int *)(&DAT_00174b94 + iVar3) != 0) {
      (**(code **)(&DAT_00174b94 + iVar3))();
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("combobj.cpp", line 93, "Invalid fight object state") */
LAB_00016de7:
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_creature_has_melee_instance_016df5 (Ghidra: FUN_00016df5)
 * Prototype: void dk_creature_has_melee_instance_016df5(void);
 * Address  : 0x16df5 (Size: 166 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp:121
 * Naming   : String 'CREATURE %d HAS NO MELEE INSTANCE IN FIGHT'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x169a5, 0x18671, 0x189d4, 0x63b6d, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1605b9: "combobj.cpp"
 *   - 0x16058e: "CREATURE %d HAS NO MELEE INSTANCE IN FIGHT"
 ******************************************************************************/
void FUN_00016df5(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  FUN_000189d4();
  iVar1 = FUN_00018671();
  if (iVar1 == 0) {
    FUN_000e7714(&DAT_0019cbac,s_CREATURE__d_HAS_NO_MELEE_INSTANC_0016058e,
                 *(undefined1 *)(in_EAX + 0x1a));
    FUN_000ddaf0(); /* LbErrorLog("combobj.cpp", line 121, g_log_buf) */
    FUN_00063b6d();
  }
  else {
    iVar2 = FUN_000169a5();
    if ((iVar2 != 0) && (0 < iVar1)) {
      FUN_00049bfc(0);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_016e9b (Ghidra: FUN_00016e9b)
 * Prototype: void sub_016e9b(void);
 * Address  : 0x16e9b (Size: 106 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x168a2, 0x186d2, 0x189d4, 0x49bfc
 ******************************************************************************/
void FUN_00016e9b(void)

{
  int iVar1;
  int iVar2;
  
  FUN_000189d4();
  iVar1 = FUN_000186d2();
  iVar2 = FUN_000168a2();
  if ((iVar2 != 0) && (0 < iVar1)) {
    FUN_00049bfc(0);
  }
  return;
}

/******************************************************************************
 * Function : sub_016f05 (Ghidra: FUN_00016f05)
 * Prototype: undefined4 sub_016f05(void);
 * Address  : 0x16f05 (Size: 30 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00016f05(void)

{
  byte *pbVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar2 + 0xa2) = 0;
  pbVar1 = (byte *)(iVar2 + 3);
  *pbVar1 = *pbVar1 & 0xf7;
  return 1;
}

/******************************************************************************
 * Function : sub_016f23 (Ghidra: FUN_00016f23)
 * Prototype: void sub_016f23(void);
 * Address  : 0x16f23 (Size: 104 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16f8b
 * Callees  : 1 -> 0x15e26
 ******************************************************************************/
void FUN_00016f23(void)

{
  byte bVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_EDX;
  int iVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(in_EAX + 0x1a);
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar3 + 0xa2) = *(undefined2 *)(in_EDX + 0x1b);
  uVar2 = *(undefined4 *)(in_EDX + 9);
  *(undefined1 *)(iVar3 + 0xaa) = 0;
  *(undefined4 *)(iVar3 + 0x9e) = uVar2;
  *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) | 0x10;
  if ((&DAT_002e918a)[(uint)bVar1 * 0xe6] == '\x02') {
    uVar4 = FUN_00015e26();
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      *(undefined1 *)(iVar3 + 0xa6) = 2;
      return;
    }
  }
  *(undefined1 *)(iVar3 + 0xa6) = 1;
  return;
}

/******************************************************************************
 * Function : sub_016f8b (Ghidra: FUN_00016f8b)
 * Prototype: void sub_016f8b(void);
 * Address  : 0x16f8b (Size: 32 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x115a4, 0x2855c, 0x63dd3, 0xe1b88
 * Callees  : 2 -> 0x16f23, 0x64a5f
 ******************************************************************************/
void FUN_00016f8b(void)

{
  char cVar1;
  
  cVar1 = FUN_00064a5f();
  if (cVar1 != '\0') {
    FUN_00016f23();
  }
  return;
}

/******************************************************************************
 * Function : dk_door_combat_but_should_016fab (Ghidra: FUN_00016fab)
 * Prototype: longlong dk_door_combat_but_should_016fab(void);
 * Address  : 0x16fab (Size: 167 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp:240 ("NOT IN DOOR COMBAT BUT SHOULD BE"); combobj.cpp:256 ("No valid fight door state")
 * Naming   : String 'NOT IN DOOR COMBAT BUT SHOULD BE'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x16423, 0x63b6d, 0x82cac, 0xddaf0
 * Strings  :
 *   - 0x1605e6: "combobj.cpp"
 *   - 0x16060c: "combobj.cpp"
 *   - 0x1605c5: "NOT IN DOOR COMBAT BUT SHOULD BE"
 *   - 0x1605f2: "No valid fight door state"
 ******************************************************************************/
longlong FUN_00016fab(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 0xa2)];
  if ((*(byte *)(iVar3 + 3) & 0x10) == 0) {
    FUN_000ddaf0(); /* LbErrorLog("combobj.cpp", line 240, "NOT IN DOOR COMBAT BUT SHOULD BE") */
  }
  else {
    iVar2 = FUN_00016423();
    if ((iVar2 != 0) && (*(char *)(iVar1 + 7) != '\x01')) {
      iVar3 = (uint)*(byte *)(iVar3 + 0xa6) * 4;
      if (*(int *)(&DAT_00174ba0 + iVar3) != 0) {
        (**(code **)(&DAT_00174ba0 + iVar3))();
        return CONCAT44(in_EDX,1);
      }
      FUN_000ddaf0(); /* LbErrorLog("combobj.cpp", line 256, "No valid fight door state") */
    }
    FUN_00082cac();
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_creature_has_melee_instance_017052 (Ghidra: FUN_00017052)
 * Prototype: void dk_creature_has_melee_instance_017052(void);
 * Address  : 0x17052 (Size: 126 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp:280
 * Naming   : String 'CREATURE %d HAS NO MELEE INSTANCE IN FIGHT'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x18671, 0x189d4, 0x63b6d, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x160643: "combobj.cpp"
 *   - 0x160618: "CREATURE %d HAS NO MELEE INSTANCE IN FIGHT"
 ******************************************************************************/
void FUN_00017052(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  FUN_000189d4();
  iVar2 = FUN_00018671();
  if (iVar2 == 0) {
    FUN_000e7714(&DAT_0019cbac,s_CREATURE__d_HAS_NO_MELEE_INSTANC_00160618,
                 *(undefined1 *)(in_EAX + 0x1a));
    FUN_000ddaf0(); /* LbErrorLog("combobj.cpp", line 280, g_log_buf) */
    FUN_00063b6d();
  }
  else {
    iVar1 = FUN_000169a5();
    if ((iVar1 != 0) && (0 < iVar2)) {
      FUN_00049bfc(0);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0170d0 (Ghidra: FUN_000170d0)
 * Prototype: void sub_0170d0(void);
 * Address  : 0x170d0 (Size: 59 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x189d4
 ******************************************************************************/
void FUN_000170d0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_000189d4();
  iVar1 = FUN_000186d2();
  iVar2 = FUN_000168a2();
  if ((iVar2 != 0) && (0 < iVar1)) {
    FUN_00049bfc(0);
  }
  return;
}

/******************************************************************************
 * Function : sub_01710b (Ghidra: FUN_0001710b)
 * Prototype: undefined4 sub_01710b(void);
 * Address  : 0x1710b (Size: 29 bytes)
 * Module   : combobj.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001710b(void)

{
  byte *pbVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar2 + 0xa2) = 0;
  pbVar1 = (byte *)(iVar2 + 3);
  *pbVar1 = *pbVar1 & 0xef;
  return 1;
}

/******************************************************************************
 * Function : dk_thing_this_check_017128 (Ghidra: FUN_00017128)
 * Prototype: longlong dk_thing_this_check_017128(void);
 * Address  : 0x17128 (Size: 91 bytes)
 * Module   : combobj.cpp [direct_file_string_xref]
 * OrigLine : combobj.cpp:334 ("INVALID THING FOR THIS CHECK")
 * Naming   : String 'INVALID THING FOR THIS CHECK'
 * Callers  : 2 -> 0x6bdda, 0x6c2cc
 * Callees  : 2 -> 0x63b6d, 0xddaf0
 * Strings  :
 *   - 0x16066c: "combobj.cpp"
 *   - 0x16064f: "INVALID THING FOR THIS CHECK"
 ******************************************************************************/
longlong FUN_00017128(void)

{
  int in_EAX;
  char cVar1;
  uint in_EDX;
  
  if (*(char *)(in_EAX + 0x1f) != '\x05') {
    FUN_000ddaf0(); /* LbErrorLog("combobj.cpp", line 334, "INVALID THING FOR THIS CHECK") */
    return (ulonglong)in_EDX << 0x20;
  }
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 3) & 0x10) != 0) {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar1 = *(char *)(in_EAX + 8);
    }
    else {
      cVar1 = *(char *)(in_EAX + 7);
    }
    if (cVar1 != 'W') {
      FUN_00063b6d();
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_017184 (Ghidra: FUN_00017184)
 * Prototype: undefined4 sub_017184(void);
 * Address  : 0x17184 (Size: 72 bytes)
 * Module   : combobj.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00017184(void)

{
  int iVar1;
  int in_EAX;
  int in_EDX;
  
  if ((((*(char *)(in_EAX + 0x1f) == '\x05') &&
       (iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)], *(char *)(iVar1 + 3) != '\0')) &&
      (*(char *)(iVar1 + 0xaa) != '\0')) &&
     ((*(char *)(iVar1 + 3) == *(char *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 3) &&
      (in_EAX != in_EDX)))) {
    return 1;
  }
  return 0;
}

