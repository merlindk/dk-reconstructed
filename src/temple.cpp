/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: temple.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_creatures_temple_072eab (Ghidra: FUN_00072eab)
 * Prototype: longlong dk_creatures_temple_072eab(void);
 * Address  : 0x72eab (Size: 76 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp:23 ("NO CREATURES IN TEMPLE")
 * Naming   : String 'NO CREATURES IN TEMPLE'
 * Callers  : 1 -> 0x72ef7
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1679a3: "temple.cpp"
 *   - 0x16798c: "NO CREATURES IN TEMPLE"
 ******************************************************************************/
longlong FUN_00072eab(void)

{
  char *pcVar1;
  int iVar2;
  int in_EAX;
  uint in_EDX;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) + *(char *)(in_EAX + 6) * 0x1508;
  if (*(char *)((int)&DAT_002e0589 + iVar2 + 0x8b4) == '\0') {
    FUN_000ddaf0(); /* LbErrorLog("temple.cpp", line 23, "NO CREATURES IN TEMPLE") */
    return (ulonglong)in_EDX << 0x20;
  }
  pcVar1 = (char *)((int)&DAT_002e0589 + iVar2 + 0x8b4);
  *pcVar1 = *pcVar1 + -1;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_072ef7 (Ghidra: FUN_00072ef7)
 * Prototype: undefined8 sub_072ef7(void);
 * Address  : 0x72ef7 (Size: 17 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x64e59, 0x72eab
 ******************************************************************************/
undefined8 FUN_00072ef7(void)

{
  undefined4 in_EDX;
  
  FUN_00072eab();
  FUN_00064e59();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_072f08 (Ghidra: FUN_00072f08)
 * Prototype: undefined8 sub_072f08(void);
 * Address  : 0x72f08 (Size: 74 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x72fbc, 0xcb33c
 * Callees  : 1 -> 0x71edd
 ******************************************************************************/
undefined8 FUN_00072f08(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(byte *)(iVar1 + 0xad) & 1) != 0) {
    FUN_00071edd();
  }
  if ((*(byte *)(iVar1 + 0xad) & 2) != 0) {
    FUN_00071edd();
  }
  *(undefined4 *)(iVar1 + 0x3d) = DAT_002e8bee;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_072f52 (Ghidra: FUN_00072f52)
 * Prototype: undefined4 sub_072f52(void);
 * Address  : 0x72f52 (Size: 106 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x730e8
 * Callees  : 2 -> 0x49bfc, 0x73d41
 ******************************************************************************/
undefined4 FUN_00072f52(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar1 + 0xd2) == '\0') {
    if (*(int *)(iVar1 + 0x82) < 0x79) {
      iVar1 = FUN_00073d41();
      if (iVar1 != 0) {
        return 1;
      }
    }
    else if (*(int *)(iVar1 + 0x82) + -0x78 < 0x32) {
      FUN_00049bfc(0);
    }
    else {
      *(undefined4 *)(iVar1 + 0x82) = 0;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_072fbc (Ghidra: FUN_00072fbc)
 * Prototype: undefined8 sub_072fbc(void);
 * Address  : 0x72fbc (Size: 124 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x730e8
 * Callees  : 5 -> 0x10434, 0x63b6d, 0x67018, 0x6709c, 0x72f08
 ******************************************************************************/
undefined8 FUN_00072fbc(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = FUN_0006709c();
  if (iVar2 != 0) {
    FUN_00067018();
    FUN_00010434();
    FUN_00072f08();
    *(int *)(iVar1 + 0x82) = *(int *)(iVar1 + 0x82) + 1;
  }
  else {
    FUN_00063b6d();
  }
  return CONCAT44(in_EDX,(uint)(iVar2 == 0));
}

/******************************************************************************
 * Function : sub_073038 (Ghidra: FUN_00073038)
 * Prototype: longlong sub_073038(void);
 * Address  : 0x73038 (Size: 176 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x51374, 0x63b6d, 0x64ae7, 0x72e88, 0xcd85c, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_00073038(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar1 + 0x80) = 0;
  iVar3 = FUN_000d0f50();
  if (((iVar3 != 0) && (*(short *)(iVar3 + 10) == 10)) &&
     (*(char *)(iVar3 + 3) == *(char *)(extraout_ECX + 6))) {
    cVar2 = FUN_000cd85c();
    if (cVar2 != '\0') {
      FUN_00064ae7();
      FUN_00072e88();
      *(undefined4 *)(iVar1 + 0x82) = 0;
      return CONCAT44(in_EDX,1);
    }
    if ((int)*(char *)(iVar3 + 3) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
    }
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0730e8 (Ghidra: FUN_000730e8)
 * Prototype: longlong sub_0730e8(void);
 * Address  : 0x730e8 (Size: 101 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x72f52, 0x72fbc, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_000730e8(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = FUN_000d0f50();
  if ((((iVar1 != 0) && (*(short *)(iVar1 + 10) == 10)) &&
      (*(short *)(iVar1 + 1) == *(short *)(extraout_ECX + 0x7e))) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    iVar1 = FUN_00072fbc();
    if (iVar1 == 0) {
      FUN_00072f52();
    }
    return CONCAT44(in_EDX,1);
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_07314d (Ghidra: FUN_0007314d)
 * Prototype: longlong sub_07314d(void);
 * Address  : 0x7314d (Size: 47 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x73d8d
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0007314d(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = *(char *)(in_EAX + 6) * 0x1508;
  if (*(char *)(in_EAX + 0x1a) == '\n') {
    (&DAT_002e0e5d)[iVar1] = (&DAT_002e0e5d)[iVar1] + '\x01';
    return (ulonglong)in_EDX << 0x20;
  }
  (&DAT_002e0e5e)[iVar1] = (&DAT_002e0e5e)[iVar1] + '\x01';
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_could_create_creature_07317c (Ghidra: FUN_0007317c)
 * Prototype: undefined4 dk_could_create_creature_07317c(void);
 * Address  : 0x7317c (Size: 119 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp:288 ("COULD NOT CREATE CREATURE")
 * Naming   : String 'COULD NOT CREATE CREATURE'
 * Callers  : 1 -> 0x731f3
 * Callees  : 4 -> 0x43bb3, 0x64ae7, 0x8240c, 0xddaf0
 * Strings  :
 *   - 0x1679c8: "temple.cpp"
 *   - 0x1679ae: "COULD NOT CREATE CREATURE"
 ******************************************************************************/
undefined4 FUN_0007317c(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBX;
  
  *(int *)(&DAT_002e17d8 + unaff_EBX * 0x1508) = *(int *)(&DAT_002e17d8 + unaff_EBX * 0x1508) + 1;
  iVar1 = FUN_00043bb3();
  if (iVar1 != 0) {
    FUN_0008240c();
    FUN_00064ae7();
    *(int *)(&DAT_002e17d8 + extraout_ECX) = *(int *)(&DAT_002e17d8 + extraout_ECX) + 1;
    *(byte *)(iVar1 + 0x25) = *(byte *)(iVar1 + 0x25) | 4;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 0x9c) = 0x30;
    return 1;
  }
  FUN_000ddaf0(); /* LbErrorLog("temple.cpp", line 288, "COULD NOT CREATE CREATURE") */
  return 0;
}

/******************************************************************************
 * Function : dk_how_you_sacrifice_neutral_0731f3 (Ghidra: FUN_000731f3)
 * Prototype: undefined4 dk_how_you_sacrifice_neutral_0731f3(void);
 * Address  : 0x731f3 (Size: 977 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp:496 ("HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?")
 * Naming   : String 'HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?'
 * Callers  : 1 -> 0x73765
 * Callees  : 7 -> 0x11db9, 0x66d65, 0x71e97, 0x7317c, 0x76d14, 0xabf38, 0xddaf0
 * Strings  :
 *   - 0x1679fd: "temple.cpp"
 *   - 0x1679d3: "HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?"
 ******************************************************************************/
undefined4 FUN_000731f3(void)

{
  char cVar1;
  uint in_EDX;
  int unaff_EBX;
  int iVar2;
  
  if (4 < unaff_EBX) {
    FUN_000ddaf0(); /* LbErrorLog("temple.cpp", line 496, "HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?") */
    return 0;
  }
  iVar2 = unaff_EBX * 0x1508;
  if (in_EDX < 0x16) {
    if (in_EDX < 0x10) {
      if (in_EDX != 0xe) {
        return 0;
      }
      if ((&DAT_002e0e6d)[iVar2] == '\0') {
        return 0xffffffff;
      }
      FUN_00011db9();
      (&DAT_002e0e6d)[iVar2] = 0;
      (&DAT_002e0e8d)[iVar2] = 0;
      return 3;
    }
    if (in_EDX < 0x11) {
LAB_000733ea:
      if ((((&DAT_002e0e73)[iVar2] != '\0') && ((&DAT_002e0e75)[iVar2] != '\0')) &&
         ((&DAT_002e0e6f)[iVar2] != '\0')) {
        FUN_0007317c();
        (&DAT_002e0e73)[iVar2] = 0;
        (&DAT_002e0e75)[iVar2] = 0;
        (&DAT_002e0e6f)[iVar2] = 0;
        (&DAT_002e0e93)[iVar2] = 0;
        (&DAT_002e0e95)[iVar2] = 0;
        (&DAT_002e0e8f)[iVar2] = 0;
        return 2;
      }
      return 1;
    }
    if (in_EDX < 0x13) {
      return 0;
    }
    if (0x13 < in_EDX) {
      if (in_EDX != 0x14) {
        return 0;
      }
      goto LAB_000733ea;
    }
    if (1 < (byte)(&DAT_002e0e72)[iVar2]) {
      FUN_00066d65();
      (&DAT_002e0e72)[iVar2] = 0;
      (&DAT_002e0e92)[iVar2] = 0;
      return 2;
    }
    if ((&DAT_002e0e72)[iVar2] == '\0') {
      return 1;
    }
    if ((&DAT_002e0e79)[iVar2] == '\0') {
      return 1;
    }
LAB_00073287:
    FUN_0007317c();
    (&DAT_002e0e72)[iVar2] = 0;
    (&DAT_002e0e92)[iVar2] = 0;
  }
  else {
    if (in_EDX < 0x17) {
      if (1 < (byte)(&DAT_002e0e75)[iVar2]) {
        FUN_00071e97();
        (&DAT_002e0e75)[iVar2] = 0;
        (&DAT_002e0e95)[iVar2] = 0;
        return 3;
      }
      goto LAB_000733ea;
    }
    if (in_EDX < 0x19) {
      if (in_EDX < 0x18) {
        return 1;
      }
      if (1 < (byte)(&DAT_002e0e77)[iVar2]) {
        FUN_00076d14();
        (&DAT_002e0e77)[iVar2] = 0;
        (&DAT_002e0e97)[iVar2] = 0;
        return 2;
      }
      if ((&DAT_002e0e77)[iVar2] == '\0') {
        return 1;
      }
      cVar1 = (&DAT_002e0e79)[iVar2];
    }
    else {
      if (in_EDX < 0x1a) {
        if ((byte)(&DAT_002e0e78)[iVar2] < 2) {
          return 0xffffffff;
        }
        FUN_00071e97();
        (&DAT_002e0e78)[iVar2] = 0;
        (&DAT_002e0e98)[iVar2] = 0;
        return 3;
      }
      if (0x1a < in_EDX) {
        if (in_EDX != 0x1c) {
          return 0;
        }
        if ((&DAT_002e0e7b)[iVar2] == '\0') {
          return 0xffffffff;
        }
        FUN_000abf38();
        (&DAT_002e0e7b)[iVar2] = 0;
        (&DAT_002e0e9b)[iVar2] = 0;
        return 3;
      }
      if (2 < (byte)(&DAT_002e0e79)[iVar2]) {
        FUN_0007317c();
        goto LAB_00073302;
      }
      if (((&DAT_002e0e72)[iVar2] != '\0') && ((&DAT_002e0e79)[iVar2] != '\0')) goto LAB_00073287;
      if ((&DAT_002e0e77)[iVar2] == '\0') {
        return 1;
      }
      cVar1 = (&DAT_002e0e79)[iVar2];
    }
    if (cVar1 == '\0') {
      return 1;
    }
    FUN_0007317c();
    (&DAT_002e0e77)[iVar2] = 0;
    (&DAT_002e0e97)[iVar2] = 0;
  }
LAB_00073302:
  (&DAT_002e0e79)[iVar2] = 0;
  (&DAT_002e0e99)[iVar2] = 0;
  return 2;
}

/******************************************************************************
 * Function : dk_how_you_sacrifice_neutral_0735c4 (Ghidra: FUN_000735c4)
 * Prototype: void dk_how_you_sacrifice_neutral_0735c4(void);
 * Address  : 0x735c4 (Size: 67 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp:516 ("HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?")
 * Naming   : String 'HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?'
 * Callers  : 1 -> 0x73765
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167a32: "temple.cpp"
 *   - 0x167a08: "HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?"
 ******************************************************************************/
void FUN_000735c4(void)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  char unaff_BL;
  
  if (in_EAX < 5) {
    iVar2 = in_EAX * 0x1508;
    pcVar1 = (char *)((int)&DAT_002e0589 + in_EDX + 0x8d6 + iVar2);
    *pcVar1 = *pcVar1 + '\x01';
    pcVar1 = (char *)((int)&DAT_002e0589 + in_EDX + 0x8f6 + iVar2);
    *pcVar1 = *pcVar1 + unaff_BL + '\x01';
    *(int *)(&DAT_002e17d0 + iVar2) = *(int *)(&DAT_002e17d0 + iVar2) + 1;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("temple.cpp", line 516, "HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?") */
  return;
}

/******************************************************************************
 * Function : sub_073607 (Ghidra: FUN_00073607)
 * Prototype: undefined8 sub_073607(void);
 * Address  : 0x73607 (Size: 330 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x24998, 0x63b6d, 0x64ae7, 0x7df48, 0xb2398, 0xb28e8, 0xb4ac4
 ******************************************************************************/
undefined8 FUN_00073607(void)

{
  short sVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  
  if ((*(byte *)(in_EAX + 0x25) & 0x20) != 0) {
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
  }
  sVar1 = *(short *)(in_EAX + 0x11);
  iVar3 = FUN_000b2398((*(short *)(&DAT_0019033b + *(byte *)(in_EAX + 0xe)) * 3 + 1) * 0x100 + 0x80)
  ;
  if ((iVar3 < 0x126) || (0x12e < iVar3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = FUN_000b4ac4(0);
    if (iVar3 != 0) {
      iVar3 = FUN_000b28e8();
      if (sVar1 == iVar3) {
        iVar3 = FUN_0007df48();
        if (iVar3 != 0) {
          *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a) = 0x30;
          *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9c) = 0x30;
          *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 4;
          FUN_00064ae7();
          *(undefined4 *)(in_EAX + 0x13) = 0;
          FUN_00024998();
        }
        goto LAB_00073686;
      }
    }
    uVar4 = 0;
  }
  else {
    FUN_00063b6d();
LAB_00073686:
    uVar4 = 1;
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_sacrifice_return_073765 (Ghidra: FUN_00073765)
 * Prototype: undefined8 dk_sacrifice_return_073765(void);
 * Address  : 0x73765 (Size: 364 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp:619 ("INVALID SACRIFICE RETURN")
 * Naming   : String 'INVALID SACRIFICE RETURN'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x10132, 0x51374, 0x731f3, 0x735c4, 0x8608c, 0xddaf0
 * Strings  :
 *   - 0x167a56: "temple.cpp"
 *   - 0x167a3d: "INVALID SACRIFICE RETURN"
 ******************************************************************************/
undefined8 FUN_00073765(void)

{
  short *psVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 in_EDX;
  byte bVar4;
  undefined2 auStack_24 [2];
  uint local_20;
  uint local_1c;
  
  bVar4 = 0;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  psVar1 = (short *)(iVar2 + 0x9a);
  *psVar1 = *psVar1 + -1;
  if (0 < *(short *)(iVar2 + 0x9a)) {
    FUN_00010132();
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
    uVar3 = 0;
    goto LAB_00073032;
  }
  local_1c = (uint)*(byte *)(in_EAX + 0x1a);
  local_20 = (uint)((&DAT_002d33ca)
                    [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                     (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] & 7);
  FUN_000735c4();
  auStack_24[(uint)bVar4 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar4 * -8);
  FUN_0008608c(0,0);
  uVar3 = FUN_000731f3();
  if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_20) {
    switch(uVar3) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 0xffffffff:
      break;
    default:
      FUN_000ddaf0(); /* LbErrorLog("temple.cpp", line 619, "INVALID SACRIFICE RETURN") */
      goto LAB_000738a6;
    }
    FUN_00051374();
  }
LAB_000738a6:
  uVar3 = 0xffffffff;
LAB_00073032:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_0738d1 (Ghidra: FUN_000738d1)
 * Prototype: undefined8 sub_0738d1(void);
 * Address  : 0x738d1 (Size: 33 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000738d1(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  if ((&DAT_002e9188)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0') {
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 0x20;
  }
  *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xfb;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0738f2 (Ghidra: FUN_000738f2)
 * Prototype: longlong sub_0738f2(void);
 * Address  : 0x738f2 (Size: 199 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x10132, 0x24998, 0x4ccc2, 0x63b6d
 ******************************************************************************/
longlong FUN_000738f2(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [8];
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar1 + 0x9a) == 0) {
    FUN_0004ccc2(local_1c,local_24,local_20);
    FUN_00024998();
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 4;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a) = 1;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9c) = 0x30;
  }
  else {
    *(short *)(iVar1 + 0x9a) = *(short *)(iVar1 + 0x9a) + 1;
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9c) < *(short *)(iVar1 + 0x9a)) {
      *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xfb;
      FUN_00063b6d();
    }
    else {
      FUN_00010132();
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0739b9 (Ghidra: FUN_000739b9)
 * Prototype: undefined4 sub_0739b9(void);
 * Address  : 0x739b9 (Size: 904 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x73d41
 * Callees  : 4 -> 0x7ddf8, 0xb2398, 0xb2cb4, 0xd0ee0
 ******************************************************************************/
undefined4 FUN_000739b9(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int in_EDX;
  uint uVar6;
  undefined4 *unaff_EBX;
  int iVar7;
  byte bVar8;
  int local_60 [4];
  undefined4 local_50;
  undefined2 local_4c [2];
  int local_44;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  bVar8 = 0;
  iVar2 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
          (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar6 = DAT_002e8bf6 % 9;
  if (*(short *)(in_EDX + 0x3b) == 1) {
    for (local_30 = 0; local_30 < 9; local_30 = local_30 + 1) {
      iVar3 = (iVar2 % 0x55) * 3 + (int)uVar6 % 3;
      iVar7 = (iVar2 / 0x55) * 3 + (int)uVar6 / 3;
      if ((*(byte *)((int)&DAT_00279203 + (iVar7 * 0x100 + iVar3) * 5) & 0x10) == 0) {
        local_50 = CONCAT22((short)iVar7 * 0x100 + 0x80,(short)iVar3 * 0x100 + 0x80);
        local_4c[0] = FUN_000b2cb4();
        iVar2 = FUN_0007ddf8();
joined_r0x00073d32:
        if (iVar2 != 0) {
          return 0;
        }
        *unaff_EBX = local_50;
        *(undefined2 *)(unaff_EBX + (uint)bVar8 * -2 + 1) = local_4c[(uint)bVar8 * -4];
        return 1;
      }
      uVar6 = (int)(uVar6 + 1) % 9;
    }
  }
  else {
    local_28 = 0;
    iVar7 = 0;
    do {
      puVar4 = (undefined *)FUN_000d0ee0();
      iVar3 = FUN_000b2398();
      if ((puVar4 < &DAT_002ddd1c) || (*(short *)(puVar4 + 1) != *(short *)(in_EDX + 1))) {
LAB_00073b2d:
        *(undefined4 *)((int)local_60 + iVar7) = 0;
      }
      else {
        if ((iVar3 < 0x126) || (0x12e < iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_00073b2d;
        *(undefined4 *)((int)local_60 + iVar7) = 1;
      }
      local_28 = local_28 + 2;
      iVar7 = iVar7 + 4;
    } while (local_28 != 8);
    if (local_60[0] == 0) {
      if (local_60[1] == 0) {
        iVar7 = 2;
      }
      else if (local_60[3] == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = ((int)((uint)*(ushort *)(in_EAX + 0x52) % 0x800) >> 10) * 2 + 1;
      }
    }
    else if (local_60[2] == 0) {
      if (local_60[1] == 0) {
        iVar7 = 3;
      }
      else {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = ((int)((*(ushort *)(in_EAX + 0x52) + 0x200) % 0x800) >> 10) * 2;
    }
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      if (local_60[iVar7] != 0) {
        local_2c = uVar6;
        for (local_44 = 0; local_44 < 9; local_44 = local_44 + 1) {
          iVar5 = ((*(short *)(&DAT_0018b6b2 + iVar7 * 2) + iVar2) % 0x55) * 3 + (int)local_2c % 3;
          iVar3 = ((*(short *)(&DAT_0018b6b2 + iVar7 * 2) + iVar2) / 0x55) * 3 + (int)local_2c / 3;
          if ((*(byte *)((int)&DAT_00279203 + (iVar3 * 0x100 + iVar5) * 5) & 0x10) == 0) {
            local_50 = CONCAT22((short)iVar3 * 0x100 + 0x80,(short)iVar5 * 0x100 + 0x80);
            local_4c[0] = FUN_000b2cb4();
            iVar2 = FUN_0007ddf8();
            goto joined_r0x00073d32;
          }
          local_2c = (int)(local_2c + 1) % 9;
        }
      }
      iVar7 = (iVar7 + 1) % 4;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_this_should_happen_073d41 (Ghidra: FUN_00073d41)
 * Prototype: undefined4 dk_this_should_happen_073d41(void);
 * Address  : 0x73d41 (Size: 76 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp:833 ("THIS SHOULD NOT HAPPEN")
 * Naming   : String 'THIS SHOULD NOT HAPPEN'
 * Callers  : 1 -> 0x72f52
 * Callees  : 3 -> 0x739b9, 0xb3be4, 0xddaf0
 * Strings  :
 *   - 0x167a78: "temple.cpp"
 *   - 0x167a61: "THIS SHOULD NOT HAPPEN"
 ******************************************************************************/
undefined4 FUN_00073d41(void)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = FUN_000739b9();
  if (iVar2 != 0) {
    sVar1 = FUN_000b3be4();
    if (sVar1 != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x53;
      return 1;
    }
    FUN_000ddaf0(); /* LbErrorLog("temple.cpp", line 833, "THIS SHOULD NOT HAPPEN") */
  }
  return 0;
}

/******************************************************************************
 * Function : sub_073d8d (Ghidra: FUN_00073d8d)
 * Prototype: void sub_073d8d(void);
 * Address  : 0x73d8d (Size: 538 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc6be0
 * Callees  : 4 -> 0x51374, 0x7314d, 0xabf38, 0xc57a4
 ******************************************************************************/
void FUN_00073d8d(void)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_EDX;
  int iVar6;
  int iVar7;
  
  bVar1 = (&DAT_002d33ca)
          [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
           (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] & 7;
  uVar2 = (uint)bVar1;
  if (*(char *)(in_EAX + 0x1a) == '\n') {
    FUN_0007314d();
    FUN_000abf38();
    bVar1 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
  }
  else {
    iVar3 = FUN_000c57a4();
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(in_EAX + 0x13) == 0) {
      return;
    }
    FUN_0007314d();
    if ((DAT_0019d0b6 & 1) == 0) {
      bVar1 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
    }
    else {
      iVar3 = 0;
      uVar4 = 0;
      iVar6 = 0;
      do {
        if ((((uVar4 != uVar2) && (uVar5 = (uint)DAT_002eb543, uVar2 != uVar5)) && (uVar4 != uVar5))
           && (((((uint)(byte)(&DAT_0019d0f2)[uVar2 * 0x4ef] & 1 << ((byte)uVar4 & 0x1f)) != 0 &&
                (uVar4 != uVar5)) &&
               ((uVar2 != uVar5 && ((1 << bVar1 & (uint)(byte)(&DAT_0019d0f2)[iVar6]) != 0)))))) {
          iVar3 = iVar3 + 1;
        }
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x4ef;
      } while ((int)uVar4 < 5);
      if (iVar3 != 0) {
        iVar3 = *(int *)(in_EAX + 0x13) / iVar3;
        uVar4 = 0;
        iVar7 = 0;
        iVar6 = 0;
        do {
          if ((((uVar4 != uVar2) && (uVar5 = (uint)DAT_002eb543, uVar5 != uVar2)) &&
              ((uVar4 != uVar5 &&
               (((((uint)(byte)(&DAT_0019d0f2)[uVar2 * 0x4ef] & 1 << ((byte)uVar4 & 0x1f)) != 0 &&
                 (uVar4 != uVar5)) && (uVar5 != uVar2)))))) &&
             ((1 << bVar1 & (uint)(byte)(&DAT_0019d0f2)[iVar7]) != 0)) {
            *(int *)((int)&DAT_002e1086 + iVar6) = *(int *)((int)&DAT_002e1086 + iVar6) + iVar3;
            *(int *)((int)&DAT_002e1082 + iVar6) = *(int *)((int)&DAT_002e1082 + iVar6) + iVar3;
          }
          iVar7 = iVar7 + 0x4ef;
          uVar4 = uVar4 + 1;
          iVar6 = iVar6 + 0x1508;
        } while ((int)uVar4 < 5);
        return;
      }
      bVar1 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
    }
  }
  if (bVar1 == in_EDX) {
    FUN_00051374();
  }
  return;
}

/******************************************************************************
 * Function : sub_073fa8 (Ghidra: FUN_00073fa8)
 * Prototype: void sub_073fa8(void);
 * Address  : 0x73fa8 (Size: 17 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x811d8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00073fa8(void)

{
  int in_EAX;
  undefined1 in_DL;
  byte unaff_BL;
  
  *(undefined1 *)(in_EAX + 0x51) = in_DL;
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xf3;
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | (unaff_BL & 3) << 2;
  return;
}

/******************************************************************************
 * Function : sub_073fb9 (Ghidra: FUN_00073fb9)
 * Prototype: undefined8 sub_073fb9(void);
 * Address  : 0x73fb9 (Size: 103 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdf760
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00073fb9(void)

{
  int in_EAX;
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) +
          (uint)*(ushort *)(in_EAX + 0xf) + (uint)*(ushort *)(in_EAX + 0xd) +
          (int)*(short *)(in_EAX + 0x11) + (int)*(short *)(in_EAX + 0x5e) +
          (int)*(char *)(in_EAX + 6) + (uint)*(byte *)(in_EAX + 0x1f);
  if (*(byte *)(in_EAX + 0x1f) == 5) {
    iVar1 = iVar1 + (uint)*(byte *)(in_EAX + 0x48) + (uint)*(byte *)(in_EAX + 0x49) +
            (int)*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd4) +
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2);
  }
  return CONCAT44(in_EDX,(uint)*(ushort *)(in_EAX + 0x1b) * iVar1);
}

/******************************************************************************
 * Function : sub_074020 (Ghidra: FUN_00074020)
 * Prototype: undefined1 * sub_074020(void);
 * Address  : 0x74020 (Size: 24 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x81e5c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_00074020(void)

{
  byte *in_EAX;
  
  if ((*in_EAX & 0x20) != 0) {
    return &DAT_0019d0c8 + (char)in_EAX[6] * 0x4ef;
  }
  return (undefined1 *)0x0;
}

