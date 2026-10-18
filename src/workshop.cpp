/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: workshop.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 35
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0768fb (Ghidra: FUN_000768fb)
 * Prototype: undefined4 sub_0768fb(void);
 * Address  : 0x768fb (Size: 35 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4fe44
 * Callees  : 1 -> 0x7691e
 ******************************************************************************/
undefined4 FUN_000768fb(void)

{
  int in_EAX;
  int in_EDX;
  undefined8 uVar1;
  
  if ((*(char *)(in_EAX + 6) == in_EDX) && (*(char *)(in_EAX + 0x1a) == '\x01')) {
    uVar1 = FUN_0007691e();
    if ((int)uVar1 != 0) {
      return (int)((ulonglong)uVar1 >> 0x20);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_07691e (Ghidra: FUN_0007691e)
 * Prototype: longlong sub_07691e(void);
 * Address  : 0x7691e (Size: 31 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x768fb, 0xe2c58
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0007691e(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (('\0' < *(char *)(in_EAX + 0x13)) && (*(uint *)(in_EAX + 0x14) <= DAT_002e8bee)) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_076944 (Ghidra: FUN_00076944)
 * Prototype: void sub_076944(void);
 * Address  : 0x76944 (Size: 30 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00076944(void)

{
  short sVar1;
  int in_EAX;
  short *in_EDX;
  
  *(short *)(in_EAX + 0x32) = *(short *)(in_EAX + 0x32) + *in_EDX;
  *(short *)(in_EAX + 0x34) = *(short *)(in_EAX + 0x34) + in_EDX[1];
  sVar1 = in_EDX[2];
  *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 4;
  *(short *)(in_EAX + 0x36) = *(short *)(in_EAX + 0x36) + sVar1;
  return;
}

/******************************************************************************
 * Function : sub_076964 (Ghidra: FUN_00076964)
 * Prototype: undefined4 sub_076964(void);
 * Address  : 0x76964 (Size: 6 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00076964(void)

{
  return 0x100;
}

/******************************************************************************
 * Function : sub_076970 (Ghidra: FUN_00076970)
 * Prototype: undefined8 sub_076970(void);
 * Address  : 0x76970 (Size: 122 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x64ae7, 0x77647, 0xcd85c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00076970(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  iVar2 = FUN_000d0f50();
  if ((((iVar2 != 0) && (*(short *)(iVar2 + 10) == 8)) &&
      (*(char *)(iVar2 + 3) == *(char *)(in_EAX + 6))) &&
     (*(ushort *)(iVar2 + 0x10) < *(ushort *)(iVar2 + 0xe))) {
    cVar1 = FUN_000cd85c();
    if (cVar1 != '\0') {
      FUN_00064ae7();
      FUN_00077647();
      goto LAB_000769e0;
    }
  }
  FUN_00063b6d();
LAB_000769e0:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0769ea (Ghidra: FUN_000769ea)
 * Prototype: undefined8 sub_0769ea(void);
 * Address  : 0x769ea (Size: 319 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x51374, 0x63b6d, 0x67018, 0x77033, 0xcd9b0, 0xd0f50
 ******************************************************************************/
undefined8 FUN_000769ea(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar5;
  undefined8 uVar6;
  
  cVar1 = *(char *)(in_EAX + 6);
  iVar2 = cVar1 * 0x1508;
  uVar6 = FUN_000d0f50();
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  iVar5 = (int)uVar6;
  if ((((iVar5 != 0) && (*(short *)(iVar5 + 10) == 8)) &&
      (*(short *)(iVar5 + 1) == *(short *)(iVar3 + 0x7e))) &&
     ((*(char *)(iVar5 + 3) == *(char *)(extraout_ECX + 6) &&
      (*(short *)(iVar5 + 1) == *(short *)(iVar3 + 0x7e))))) {
    if (*(ushort *)(iVar5 + 0x10) <= *(ushort *)(iVar5 + 0xe)) {
      if ((&DAT_002e1712)[iVar2] != '\0') {
        iVar3 = FUN_00067018((&DAT_002e91a7)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0xe6],100);
        iVar3 = iVar3 * (uint)*(ushort *)(iVar5 + 0x3f);
        iVar5 = iVar3 >> 0x1f;
        iVar5 = (int)((iVar3 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8;
        *(int *)(&DAT_002e170e + iVar2) = *(int *)(&DAT_002e170e + iVar2) + iVar5;
        (&DAT_002e170a)[cVar1 * 0x542] = (&DAT_002e170a)[cVar1 * 0x542] + iVar5;
      }
      FUN_00077033();
      uVar4 = 1;
      goto LAB_00076ae3;
    }
    if ((int)*(char *)(extraout_ECX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
    {
      FUN_00051374();
    }
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  uVar4 = 0;
LAB_00076ae3:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_door_choice_076b29 (Ghidra: FUN_00076b29)
 * Prototype: undefined8 dk_door_choice_076b29(void);
 * Address  : 0x76b29 (Size: 491 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:139 ("BAD DOOR CHOICE")
 * Naming   : String 'BAD DOOR CHOICE'
 * Callers  : 1 -> 0xde6a8
 * Callees  : 7 -> 0x51374, 0x76d56, 0x76ee6, 0x76f1e, 0xca65c, 0xd129c, 0xddaf0
 * Strings  :
 *   - 0x167d04: "workshop.cpp"
 *   - 0x167d21: "workshop.cpp"
 *   - 0x167d42: "workshop.cpp"
 *   - 0x167d72: "workshop.cpp"
 *   - 0x167cf4: "BAD DOOR CHOICE"
 *   - 0x167d11: "BAD TRAP CHOICE"
 *   - 0x167d2e: "INVALID MANUFACTURE"
 *   - 0x167d4f: "COULD NOT CREATE MANUFACTURED ITEM"
 ******************************************************************************/
undefined8 FUN_00076b29(void)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 in_EDX;
  
  iVar3 = FUN_000d129c();
  if (iVar3 != 0) {
    if ((&DAT_002e1712)[extraout_ECX] == '\0') {
LAB_00076d04:
      FUN_00076f1e();
    }
    else {
      iVar3 = FUN_00076ee6();
      if (iVar3 * 0x100 <= *(int *)(extraout_ECX_00 + 0x1185)) {
        iVar4 = FUN_000ca65c();
        if (iVar4 == 0) {
          *(undefined1 *)(extraout_ECX_01 + 0x1189) = 0;
          uVar5 = 0;
          goto LAB_00076d0e;
        }
        iVar4 = FUN_00076d56();
        if (iVar4 != 0) {
          if (*(char *)(extraout_ECX_02 + 0x1189) == '\t') {
            iVar4 = (uint)*(byte *)(extraout_ECX_02 + 0x118a) + extraout_ECX_02;
            if (*(byte *)(iVar4 + 0x101d) < 199) {
              pcVar1 = (char *)(iVar4 + 0x101d);
              *pcVar1 = *pcVar1 + '\x01';
              *(int *)(extraout_ECX_02 + 0x122b) = *(int *)(extraout_ECX_02 + 0x122b) + 1;
              *(undefined1 *)(extraout_ECX_02 + 0x1027 + (uint)*(byte *)(extraout_ECX_02 + 0x118a))
                   = 1;
              bVar2 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
joined_r0x00076c8f:
              iVar4 = extraout_ECX_02;
              if (bVar2 == in_EAX) {
                FUN_00051374();
                iVar4 = extraout_ECX_03;
              }
              *(int *)(iVar4 + 0x1185) = *(int *)(iVar4 + 0x1185) + iVar3 * -0x100;
              *(undefined4 *)(iVar4 + 0x118b) = DAT_002e8bee;
              *(int *)(iVar4 + 0x1233) = *(int *)(iVar4 + 0x1233) + 1;
              goto LAB_00076d04;
            }
          }
          else if ((*(char *)(extraout_ECX_02 + 0x1189) == '\b') &&
                  (iVar4 = (uint)*(byte *)(extraout_ECX_02 + 0x118a) + extraout_ECX_02,
                  *(byte *)(iVar4 + 0x1008) < 199)) {
            pcVar1 = (char *)(iVar4 + 0x1008);
            *pcVar1 = *pcVar1 + '\x01';
            *(int *)(extraout_ECX_02 + 0x122f) = *(int *)(extraout_ECX_02 + 0x122f) + 1;
            *(undefined1 *)(extraout_ECX_02 + 0x1016 + (uint)*(byte *)(extraout_ECX_02 + 0x118a)) =
                 1;
            bVar2 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
            goto joined_r0x00076c8f;
          }
        }
        FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 139, "BAD DOOR CHOICE") */
        uVar5 = 0;
        goto LAB_00076d0e;
      }
    }
  }
  uVar5 = 1;
LAB_00076d0e:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_076d14 (Ghidra: FUN_00076d14)
 * Prototype: longlong sub_076d14(void);
 * Address  : 0x76d14 (Size: 66 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x731f3
 * Callees  : 1 -> 0x76ee6
 ******************************************************************************/
longlong FUN_00076d14(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint in_EDX;
  
  iVar1 = in_EAX * 0x1508;
  if ((&DAT_002e1712)[iVar1] != '\0') {
    iVar2 = FUN_00076ee6();
    iVar2 = iVar2 * 0x100;
    if (iVar2 <= *(int *)(&DAT_002e170e + iVar1)) {
      iVar2 = *(int *)(&DAT_002e170e + iVar1);
    }
    *(int *)(&DAT_002e170e + iVar1) = iVar2;
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_what_hell_have_we_076d56 (Ghidra: FUN_00076d56)
 * Prototype: undefined4 dk_what_hell_have_we_076d56(void);
 * Address  : 0x76d56 (Size: 400 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:238 ("WHAT THE HELL HAVE WE CREATED?"); workshop.cpp:277 ("Could not find room for thing"); workshop.cpp:290 ("COULD NOT CREATE SPELL")
 * Naming   : String 'WHAT THE HELL HAVE WE CREATED?'
 * Callers  : 1 -> 0x76b29
 * Callees  : 10 -> 0x24998, 0x27390, 0x43f07, 0x6e538, 0x72af4, 0xb28e8, 0xb3b10, 0xc9e8c, 0xccf10, 0xddaf0
 * Strings  :
 *   - 0x167d9e: "workshop.cpp"
 *   - 0x167dc9: "workshop.cpp"
 *   - 0x167de8: "workshop.cpp"
 *   - 0x167e0c: "workshop.cpp"
 *   - 0x167d7f: "WHAT THE HELL HAVE WE CREATED?"
 *   - 0x167dab: "Could not find room for thing"
 *   - 0x167dd6: "NO ROOM FOR THING"
 *   - 0x167df5: "COULD NOT CREATE SPELL"
 ******************************************************************************/
undefined4 FUN_00076d56(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  int *piVar3;
  int iStack_28;
  
  if ((in_EDX == 8) || (in_EDX == 9)) {
    iStack_28 = 0x76d8b;
    iVar2 = FUN_00043f07();
  }
  else {
    iStack_28 = 0x76dc0;
    FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 238, "WHAT THE HELL HAVE WE CREATED?") */
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    iStack_28 = 0x76edf;
    FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 277, "Could not find room for thing") */
  }
  else {
    iStack_28 = 0x76ddc;
    iVar2 = FUN_000c9e8c();
    if (iVar2 != 0) {
      iStack_28 = 0x76df2;
      cVar1 = FUN_000ccf10();
      if (cVar1 != '\0') {
        iStack_28 = 0x76e04;
        FUN_000b28e8();
        iStack_28 = 0x76e12;
        FUN_000b3b10();
        *(short *)(extraout_ECX + 0x10) = *(short *)(extraout_ECX + 0x10) + 1;
        *(int *)(extraout_ECX + 0x17) = *(int *)(extraout_ECX + 0x17) + 1;
        iVar2 = in_EAX * 0x1508 + unaff_EBX;
        if (in_EDX == 8) {
          cVar1 = (&DAT_002e159f)[iVar2];
        }
        else {
          cVar1 = (&DAT_002e15b0)[iVar2];
        }
        piVar3 = (int *)&stack0xffffffdc;
        if (cVar1 == '\0') {
          piVar3 = &iStack_28;
          iStack_28 = unaff_EBX;
          FUN_00027390();
        }
        *(undefined4 *)((int)piVar3 + -4) = 0x76e73;
        FUN_00024998();
        *(undefined4 *)((int)piVar3 + -4) = 0x100;
        *(undefined4 *)((int)piVar3 + -8) = 2;
        *(undefined4 *)((int)piVar3 + -0xc) = 0;
        *(undefined4 *)((int)piVar3 + -0x10) = 3;
        *(undefined4 *)((int)piVar3 + -0x14) = 0x76e91;
        FUN_0006e538();
        return 1;
      }
    }
    iStack_28 = 0x76eaf;
    FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 290, "COULD NOT CREATE SPELL") */
    iStack_28 = 0x76eb8;
    FUN_00072af4();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_076ee6 (Ghidra: FUN_00076ee6)
 * Prototype: undefined4 sub_076ee6(void);
 * Address  : 0x76ee6 (Size: 56 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:310 ("INVALID TYPE")
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x5686f, 0x76b29, 0x76d14
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167e26: "workshop.cpp"
 *   - 0x167e19: "INVALID TYPE"
 ******************************************************************************/
undefined4 FUN_00076ee6(void)

{
  int in_EAX;
  int in_EDX;
  
  if (in_EAX == 8) {
    return *(undefined4 *)(&DAT_001ae898 + in_EDX * 0x14);
  }
  if (in_EAX == 9) {
    return *(undefined4 *)(&DAT_001ae924 + in_EDX * 0x14);
  }
  FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 310, "INVALID TYPE") */
  return 0;
}

/******************************************************************************
 * Function : sub_076f1e (Ghidra: FUN_00076f1e)
 * Prototype: undefined8 sub_076f1e(void);
 * Address  : 0x76f1e (Size: 277 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x76b29
 * Callees  : 1 -> 0x77547
 ******************************************************************************/
undefined8 FUN_00076f1e(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_EDX;
  int extraout_EDX;
  uint uVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_00077547();
  cVar2 = '\0';
  uVar5 = 0x7fffffff;
  local_1c = 1;
  iVar3 = 0x14;
  iVar6 = 0x7fffffff;
  iVar1 = extraout_EDX;
  do {
    if ((((*(char *)(iVar1 + 0x1023) != '\0') &&
         (*(int *)(&DAT_001ae920 + iVar3) <= *(int *)(extraout_EDX + 0x118f))) &&
        (uVar4 = (uint)*(byte *)(iVar1 + 0x101e), uVar4 < 199)) &&
       ((uVar4 < uVar5 || ((uVar5 == uVar4 && (*(int *)(&DAT_001ae920 + iVar3) < iVar6)))))) {
      local_24 = local_1c;
      cVar2 = '\t';
      iVar6 = *(int *)(&DAT_001ae920 + iVar3);
      uVar5 = uVar4;
    }
    local_1c = local_1c + 1;
    iVar3 = iVar3 + 0x14;
    iVar1 = iVar1 + 1;
  } while (local_1c < 5);
  local_20 = 1;
  iVar3 = 0x14;
  iVar1 = extraout_EDX;
  do {
    if ((((*(char *)(iVar1 + 0x1010) != '\0') &&
         (*(int *)(&DAT_001ae894 + iVar3) <= *(int *)(extraout_EDX + 0x118f))) &&
        (uVar4 = (uint)*(byte *)(iVar1 + 0x1009), uVar4 < 199)) &&
       ((uVar4 < uVar5 || ((uVar5 == uVar4 && (*(int *)(&DAT_001ae894 + iVar3) < iVar6)))))) {
      local_24 = local_20;
      cVar2 = '\b';
      iVar6 = *(int *)(&DAT_001ae894 + iVar3);
      uVar5 = uVar4;
    }
    local_20 = local_20 + 1;
    iVar3 = iVar3 + 0x14;
    iVar1 = iVar1 + 1;
  } while (local_20 < 7);
  if (cVar2 != '\0') {
    *(char *)(extraout_EDX + 0x1189) = cVar2;
    *(undefined1 *)(extraout_EDX + 0x118a) = (undefined1)local_24;
  }
  return CONCAT44(in_EDX,(uint)(cVar2 != '\0'));
}

/******************************************************************************
 * Function : sub_077033 (Ghidra: FUN_00077033)
 * Prototype: undefined4 sub_077033(void);
 * Address  : 0x77033 (Size: 1300 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x769ea
 * Callees  : 7 -> 0x10010, 0x49bfc, 0x63b6d, 0x775be, 0x77647, 0x7779d, 0xb4ac4
 ******************************************************************************/
undefined4 FUN_00077033(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int iVar5;
  short *psVar6;
  undefined4 uStack_3c;
  short local_38;
  short local_36;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  
  psVar6 = &local_38;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (((uint)(DAT_002e8bee - *(int *)(&DAT_002e1714 + *(char *)(in_EAX + 6) * 0x1508)) < 0x32) &&
     (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 3) == 0)) {
    if (*(char *)(iVar1 + 0xd2) != '\0') {
      return 1;
    }
LAB_00077535:
    uStack_3c = 0;
    FUN_00049bfc();
    return 1;
  }
  if (*(char *)(iVar1 + 0xd2) != '\0') {
    return 1;
  }
  cVar2 = *(char *)(iVar1 + 0x9a);
  if (cVar2 == '\x01') {
    *(char *)(iVar1 + 0x9e) = *(char *)(iVar1 + 0x9e) + -1;
    if (*(char *)(iVar1 + 0x9e) < '\x01') {
      uStack_3c = 0x770d3;
      FUN_0007779d();
      *(undefined1 *)(iVar1 + 0x9e) = 0x32;
      return 1;
    }
    psVar6 = (short *)&uStack_3c;
    uStack_3c = 0;
    cVar2 = FUN_000b4ac4();
    if (cVar2 != '\x01') {
LAB_000771a1:
      if (cVar2 != -1) {
        return 1;
      }
      FUN_00063b6d();
      return 1;
    }
    for (uVar4 = (*(uint *)((int)&DAT_00279203 +
                           (((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1) * 0x100 +
                           (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] * 3 + 1) * 5 + 1) & 0x3fffff) >>
                 0xb; uVar4 != 0; uVar4 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar4] + 2)) {
      if (((*(char *)((&DAT_001ae9fc)[uVar4] + 0x1f) == '\x01') &&
          ((cVar2 = *(char *)((&DAT_001ae9fc)[uVar4] + 0x1a), cVar2 == 'r' || (cVar2 == '\x1a'))))
         && (*(char *)((&DAT_001ae9fc)[uVar4] + 6) == *(char *)(in_EAX + 6))) {
        *(undefined1 *)(iVar1 + 0x9a) = 2;
        *(undefined1 *)(iVar1 + 0x9e) = 0x32;
        return 1;
      }
    }
  }
  else if (cVar2 == '\x02') {
    local_2c = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
    local_18 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
    local_20 = 0;
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 2) {
      local_28 = local_18 + (char)(&DAT_0018b67f)[iVar3];
      iVar5 = *(char *)((int)&DAT_0018b67b + iVar3 + 3) + local_2c;
      if ((&DAT_002d33c5)[(local_28 * 0x55 + iVar5) * 6] == '\x1c') {
        local_24 = local_28 * 3;
        local_30 = (uint)((&DAT_002d33ca)
                          [((&DAT_0019033f)[iVar5 * 3] + (&DAT_0019033f)[local_28 * 3] * 0x55) * 6]
                         & 7);
        if ((int)*(char *)(in_EAX + 6) == local_30) {
          local_30 = ((char)(&DAT_001917b9)[iVar3] + local_24) * 0x100;
          uVar4 = (*(uint *)((int)&DAT_00279203 +
                            ((int)(char)(&DAT_001917b8)[iVar3] + iVar5 * 3 + local_30) * 5 + 1) &
                  0x3fffff) >> 0xb;
          while ((uVar4 != 0 &&
                 (((iVar5 = (&DAT_001ae9fc)[uVar4], *(char *)(iVar5 + 0x1f) != '\x05' ||
                   (*(char *)(iVar5 + 7) != '-')) ||
                  ((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0x9a) < 2 ||
                   (*(char *)(iVar5 + 6) != *(char *)(in_EAX + 6)))))))) {
            uVar4 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar4] + 2);
          }
          if (uVar4 == 0) {
            uVar4 = (*(uint *)((int)&DAT_00279203 +
                              ((*(char *)((int)&DAT_0018b67b + iVar3 + 3) + local_2c) * 3 +
                               ((char)(&DAT_0018b67f)[iVar3] + local_18) * 0x300 + 0x101) * 5 + 1) &
                    0x3fffff) >> 0xb;
            while ((uVar4 != 0 &&
                   ((*(char *)((&DAT_001ae9fc)[uVar4] + 0x1f) != '\x01' ||
                    (((cVar2 = *(char *)((&DAT_001ae9fc)[uVar4] + 0x1a), cVar2 != 'r' &&
                      (cVar2 != '\x1a')) ||
                     (*(char *)((&DAT_001ae9fc)[uVar4] + 6) != *(char *)(in_EAX + 6)))))))) {
              uVar4 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar4] + 2);
            }
          }
          if (uVar4 == 0) {
            *(char *)(iVar1 + 0x9c) =
                 *(char *)(&DAT_0019033b + *(byte *)(in_EAX + 0xe)) * '\x03' + '\x01';
            *(char *)(iVar1 + 0x9d) =
                 *(char *)(&DAT_0019033b + *(byte *)(in_EAX + 0x10)) * '\x03' + '\x01';
            local_2c = (*(char *)((int)&DAT_0018b67b + local_20 * 2 + 3) + local_2c) * 3 +
                       (int)(char)(&DAT_001917b8)[local_20 * 2];
            local_18 = ((char)(&DAT_0018b67f)[local_20 * 2] + local_18) * 3 +
                       (int)(char)(&DAT_001917b9)[local_20 * 2];
            uStack_3c = 0x773c4;
            FUN_000775be();
            *(undefined1 *)(iVar1 + 0x9a) = 3;
            break;
          }
        }
      }
      local_20 = local_20 + 1;
    }
    psVar6 = &local_38;
    if (*(char *)(iVar1 + 0x9a) != '\x02') {
      return 1;
    }
  }
  else {
    if (cVar2 == '\x03') {
      uStack_3c = 0;
      cVar2 = FUN_000b4ac4();
      if (cVar2 == '\x01') {
        uVar4 = (*(uint *)((int)&DAT_00279203 +
                          (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),
                                         *(undefined1 *)(in_EAX + 0xe)) * 5 + 1) & 0x3fffff) >> 0xb;
        do {
          iVar3 = 0;
          if (uVar4 == 0) {
LAB_000774a8:
            if (iVar3 != 0) {
              return 1;
            }
            *(undefined1 *)(iVar1 + 0x9a) = 4;
            return 1;
          }
          if ((((in_EAX != (&DAT_001ae9fc)[uVar4]) &&
               (iVar3 = (&DAT_001ae9fc)[uVar4], *(char *)(iVar3 + 0x1f) == '\x05')) &&
              (*(char *)(iVar3 + 7) == '-')) &&
             ((1 < *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x9a) &&
              (*(char *)(iVar3 + 6) == *(char *)(in_EAX + 6))))) {
            FUN_00077647();
            iVar3 = extraout_ECX;
            goto LAB_000774a8;
          }
          uVar4 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar4] + 2);
        } while( true );
      }
      goto LAB_000771a1;
    }
    if (cVar2 == '\x04') {
      local_38 = (ushort)*(byte *)(iVar1 + 0x9c) * 0x100 + 0x80;
      local_36 = (ushort)*(byte *)(iVar1 + 0x9d) * 0x100 + 0x80;
      uStack_3c = 0x774f3;
      iVar3 = FUN_00010010();
      if (0x37 < iVar3) {
        return 1;
      }
      *(undefined1 *)(iVar1 + 0x9a) = 5;
      *(undefined1 *)(iVar1 + 0x9b) = 0x4b;
      return 1;
    }
    *(char *)(iVar1 + 0x9b) = *(char *)(iVar1 + 0x9b) + -1;
    if (0 < *(char *)(iVar1 + 0x9b)) {
      if ((int)*(char *)(iVar1 + 0x9b) % 8 != 0) {
        return 1;
      }
      goto LAB_00077535;
    }
  }
  *(undefined4 *)((int)psVar6 + -4) = 0x773ea;
  FUN_00077647();
  return 1;
}

/******************************************************************************
 * Function : sub_077547 (Ghidra: FUN_00077547)
 * Prototype: undefined8 sub_077547(void);
 * Address  : 0x77547 (Size: 119 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x76f1e
 * Callees  : 1 -> 0xd11f4
 ******************************************************************************/
undefined8 FUN_00077547(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = FUN_000d11f4();
  if (uVar1 < 0x11) {
    if (uVar1 < 10) {
      *(undefined4 *)(in_EAX + 0x118f) = 0;
    }
    else {
      *(undefined4 *)(in_EAX + 0x118f) = 1;
    }
    goto LAB_000775b6;
  }
  if (uVar1 < 0x14) {
LAB_00077583:
    *(undefined4 *)(in_EAX + 0x118f) = 2;
  }
  else {
    if (0x14 < uVar1) {
      if (uVar1 < 0x1a) goto LAB_00077583;
      if (uVar1 < 0x25) {
        *(undefined4 *)(in_EAX + 0x118f) = 3;
        goto LAB_000775b6;
      }
    }
    *(undefined4 *)(in_EAX + 0x118f) = 4;
  }
LAB_000775b6:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_illegal_setup_0775be (Ghidra: FUN_000775be)
 * Prototype: void dk_illegal_setup_0775be(void);
 * Address  : 0x775be (Size: 137 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:661
 * Naming   : String 'Illegal setup to X%d Y%d'
 * Callers  : 3 -> 0x77033, 0x77647, 0x7779d
 * Callees  : 5 -> 0x63b6d, 0x7dbc0, 0xb28e8, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x167e4c: "workshop.cpp"
 *   - 0x167e33: "Illegal setup to X%d Y%d"
 ******************************************************************************/
void FUN_000775be(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(char *)(iVar1 + 0x2e) = (char)(in_EDX % 0x100);
  *(undefined1 *)(iVar1 + 0x2d) = 0x80;
  *(char *)(iVar1 + 0x30) = (char)(in_EDX / 0x100);
  *(undefined1 *)(iVar1 + 0x2f) = 0x80;
  uVar2 = FUN_000b28e8();
  *(undefined2 *)(iVar1 + 0x31) = uVar2;
  iVar3 = FUN_0007dbc0();
  if (iVar3 != 0) {
    FUN_000e7714(&DAT_0019cbac,s_Illegal_setup_to_X_d_Y_d_00167e33,*(undefined1 *)(iVar1 + 0x2e),
                 *(undefined1 *)(iVar1 + 0x30));
    FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 661, g_log_buf) */
    FUN_00063b6d();
  }
  return;
}

/******************************************************************************
 * Function : sub_077647 (Ghidra: FUN_00077647)
 * Prototype: void sub_077647(void);
 * Address  : 0x77647 (Size: 342 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x76970, 0x77033, 0x7779d
 * Callees  : 1 -> 0x775be
 ******************************************************************************/
void FUN_00077647(void)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (unaff_EBX != 0) {
    *(undefined1 *)(iVar2 + 0x9e) = 0x32;
  }
  *(undefined1 *)(iVar2 + 0x9a) = 1;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  local_18 = 0;
  iVar2 = 0;
  uVar4 = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = uVar4 | DAT_002e8bf6 * 0x80000;
  uVar4 = uVar4 & 7;
  do {
    if ((1 < iVar2) || (8 < local_18)) {
      if (1 < iVar2) {
        FUN_000775be();
      }
      return;
    }
    iVar2 = 0;
    iVar3 = (int)*(short *)((int)&DAT_0018b624 + uVar4 * 2 + 2) +
            (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe));
    while (((*(byte *)((int)&DAT_00279203 + iVar3 * 5) & 2) != 0 &&
           ((*(byte *)((int)&DAT_00279203 + iVar3 * 5) & 0x10) == 0))) {
      iVar1 = ((&DAT_0019033b)[iVar3 % 0x100] +
              (&DAT_0019033b)
              [(int)((iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0)) >> 8] *
              0x55) * 6;
      if (((uint)((&DAT_002d33ca)[iVar1] & 7) != (int)*(char *)(in_EAX + 6)) ||
         ((*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar1] * 0x45) != 8 || (7 < iVar2)
          ))) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + *(short *)((int)&DAT_0018b624 + uVar4 * 2 + 2);
    }
    if (iVar2 < 2) {
      uVar4 = uVar4 + 1 & 7;
    }
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_07779d (Ghidra: FUN_0007779d)
 * Prototype: void sub_07779d(void);
 * Address  : 0x7779d (Size: 355 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x77033
 * Callees  : 2 -> 0x775be, 0x77647
 ******************************************************************************/
void FUN_0007779d(void)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_24;
  int local_20;
  
  iVar4 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                       (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45;
  local_24 = 0xffffffff;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar5 = DAT_002e8bf6 % (uint)*(ushort *)(&DAT_002ddd56 + iVar4);
  uVar2 = *(ushort *)(&DAT_002ddd52 + iVar4);
  while ((uVar6 = (uint)uVar2, 0 < (int)uVar5 && (uVar6 != 0))) {
    uVar5 = uVar5 - 1;
    uVar2 = *(ushort *)(&DAT_002d33c6 + uVar6 * 6);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(ushort *)(&DAT_002ddd56 + iVar4);
      local_20 = local_20 + 1) {
    if (uVar6 == 0) {
      uVar6 = (uint)*(ushort *)(&DAT_002ddd52 + iVar4);
    }
    uVar5 = (*(uint *)((int)&DAT_00279203 +
                      ((uVar6 % 0x55) * 3 + 0x101 + (uVar6 / 0x55) * 0x300) * 5 + 1) & 0x3fffff) >>
            0xb;
    while ((uVar3 = local_24, uVar5 != 0 &&
           ((*(char *)((&DAT_001ae9fc)[uVar5] + 0x1f) != '\x01' ||
            (((cVar1 = *(char *)((&DAT_001ae9fc)[uVar5] + 0x1a), cVar1 != 'r' && (cVar1 != '\x1a'))
             || (uVar3 = uVar5, *(char *)((&DAT_001ae9fc)[uVar5] + 6) != *(char *)(in_EAX + 6)))))))
          ) {
      uVar5 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar5] + 2);
    }
    local_24 = uVar3;
    uVar6 = (uint)*(ushort *)(&DAT_002d33c6 + uVar6 * 6);
  }
  if (local_24 == 0xffffffff) {
    FUN_00077647();
  }
  else {
    FUN_000775be();
  }
  return;
}

/******************************************************************************
 * Function : dk_workshop_content_077900 (Ghidra: FUN_00077900)
 * Prototype: longlong dk_workshop_content_077900(void);
 * Address  : 0x77900 (Size: 60 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:791 ("INVALID WORKSHOP CONTENT")
 * Naming   : String 'INVALID WORKSHOP CONTENT'
 * Callers  : 2 -> 0x645dd, 0x7795d
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167e72: "workshop.cpp"
 *   - 0x167e59: "INVALID WORKSHOP CONTENT"
 ******************************************************************************/
longlong FUN_00077900(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((*(short *)(in_EAX + 0x10) != 0) && (0 < *(int *)(in_EAX + 0x17))) {
    *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + -1;
    *(int *)(in_EAX + 0x17) = *(int *)(in_EAX + 0x17) + -1;
    return CONCAT44(in_EDX,1);
  }
  FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 791, "INVALID WORKSHOP CONTENT") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_07793c (Ghidra: FUN_0007793c)
 * Prototype: longlong sub_07793c(void);
 * Address  : 0x7793c (Size: 33 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x647b6
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0007793c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe)) {
    *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
    *(int *)(in_EAX + 0x17) = *(int *)(in_EAX + 0x17) + 1;
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_crate_workshop_ok_07795d (Ghidra: FUN_0007795d)
 * Prototype: undefined4 dk_crate_workshop_ok_07795d(void);
 * Address  : 0x7795d (Size: 158 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:830 ("CRATE NOT IN A WORKSHOP - ok")
 * Naming   : String 'CRATE NOT IN A WORKSHOP - ok'
 * Callers  : 3 -> 0x1cd80, 0x5f6c5, 0x61d43
 * Callees  : 5 -> 0x24998, 0x72af4, 0x77900, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x167e9c: "workshop.cpp"
 *   - 0x167e7f: "CRATE NOT IN A WORKSHOP - ok"
 ******************************************************************************/
undefined4 FUN_0007795d(void)

{
  byte *pbVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint in_EDX;
  
  uVar3 = DAT_002e6ec6;
  while( true ) {
    pbVar1 = (&DAT_001ae9fc)[uVar3];
    if (pbVar1 == DAT_001ae9fc) {
      return 0;
    }
    if (((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == in_EDX)) && ((char)pbVar1[6] == in_EAX)) &&
       (((*pbVar1 & 0x10) == 0 && ((pbVar1[1] & 2) == 0)))) break;
    uVar3 = (uint)*(ushort *)(pbVar1 + 0x67);
  }
  iVar2 = FUN_000d0f50();
  if ((iVar2 == 0) || (*(short *)(iVar2 + 10) != 8)) {
    FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 830, "CRATE NOT IN A WORKSHOP - ok") */
  }
  else {
    FUN_00077900();
  }
  FUN_00024998();
  FUN_00072af4();
  return 1;
}

/******************************************************************************
 * Function : dk_illegal_item_class_0779fb (Ghidra: FUN_000779fb)
 * Prototype: undefined4 dk_illegal_item_class_0779fb(void);
 * Address  : 0x779fb (Size: 96 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:889 ("ILLEGAL ITEM CLASS")
 * Naming   : String 'ILLEGAL ITEM CLASS'
 * Callers  : 3 -> 0x647b6, 0xcf19c, 0xd08a8
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167ebc: "workshop.cpp"
 *   - 0x167ea9: "ILLEGAL ITEM CLASS"
 ******************************************************************************/
undefined4 FUN_000779fb(void)

{
  char *pcVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  iVar2 = unaff_EBX + in_EAX * 0x1508;
  if (in_EDX == 8) {
    *(undefined1 *)((int)&DAT_002e0589 + iVar2 + 0x1016) = 1;
    pcVar1 = (char *)((int)&DAT_002e0589 + iVar2 + 0x1008);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    if (in_EDX != 9) {
      FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 889, "ILLEGAL ITEM CLASS") */
      return 0;
    }
    *(undefined1 *)((int)&DAT_002e0589 + iVar2 + 0x1027) = 1;
    pcVar1 = (char *)((int)&DAT_002e0589 + iVar2 + 0x101d);
    *pcVar1 = *pcVar1 + '\x01';
  }
  return 1;
}

/******************************************************************************
 * Function : dk_item_class_077a5b (Ghidra: FUN_00077a5b)
 * Prototype: undefined4 dk_item_class_077a5b(void);
 * Address  : 0x77a5b (Size: 115 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp:924 ("INVALID DOOR")
 * Naming   : String 'INVALID ITEM CLASS'
 * Callers  : 8 -> 0x1cd80, 0x48c77, 0x5f6c5, 0x61d43, 0x645dd, 0xc9280, 0xcf19c, 0xd08a8
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167ed6: "workshop.cpp"
 *   - 0x167ef6: "workshop.cpp"
 *   - 0x167ec9: "INVALID DOOR"
 *   - 0x167ee3: "INVALID ITEM CLASS"
 ******************************************************************************/
undefined4 FUN_00077a5b(void)

{
  char *pcVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  iVar2 = unaff_EBX + in_EAX * 0x1508;
  if (in_EDX == 8) {
    if (*(char *)((int)&DAT_002e0589 + iVar2 + 0x1008) != '\0') {
      pcVar1 = (char *)((int)&DAT_002e0589 + iVar2 + 0x1008);
      *pcVar1 = *pcVar1 + -1;
      return 1;
    }
  }
  else {
    if ((in_EDX == 9) && (*(char *)((int)&DAT_002e0589 + iVar2 + 0x101d) != '\0')) {
      pcVar1 = (char *)((int)&DAT_002e0589 + iVar2 + 0x101d);
      *pcVar1 = *pcVar1 + -1;
      *(int *)(&DAT_002e1808 + in_EAX * 0x1508) = *(int *)(&DAT_002e1808 + in_EAX * 0x1508) + 1;
      return 1;
    }
    FUN_000ddaf0(); /* LbErrorLog("workshop.cpp", line 924, "INVALID DOOR") */
  }
  return 0;
}

/******************************************************************************
 * Function : sub_077ad0 (Ghidra: FUN_00077ad0)
 * Prototype: void sub_077ad0(void);
 * Address  : 0x77ad0 (Size: 63 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f163
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_00077ad0(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int in_EDX;
  
  *(int *)(in_EAX + 0x25) = *(int *)(in_EAX + 0x25) + in_EDX;
  iVar1 = FUN_000e69fc();
  if (-*(int *)(extraout_ECX + 0x25) == iVar1 || -iVar1 < *(int *)(extraout_ECX + 0x25)) {
    iVar3 = FUN_000e69fc();
    iVar1 = extraout_ECX_01;
    if (iVar3 < *(int *)(extraout_ECX_01 + 0x25)) {
      uVar2 = FUN_000e69fc();
      *(undefined4 *)(extraout_ECX_02 + 0x25) = uVar2;
      iVar1 = extraout_ECX_02;
    }
  }
  else {
    uVar2 = FUN_000e69fc();
    *(undefined4 *)(extraout_ECX_00 + 0x25) = uVar2;
    *(int *)(extraout_ECX_00 + 0x25) = -*(int *)(extraout_ECX_00 + 0x25);
    iVar1 = extraout_ECX_00;
  }
  *(undefined1 *)(iVar1 + 0x29) = 1;
  return;
}

/******************************************************************************
 * Function : sub_077b0f (Ghidra: FUN_00077b0f)
 * Prototype: void sub_077b0f(void);
 * Address  : 0x77b0f (Size: 63 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f163
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_00077b0f(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int in_EDX;
  
  *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + in_EDX;
  iVar1 = FUN_000e69fc();
  if (-*(int *)(extraout_ECX + 0x20) == iVar1 || -iVar1 < *(int *)(extraout_ECX + 0x20)) {
    iVar3 = FUN_000e69fc();
    iVar1 = extraout_ECX_01;
    if (iVar3 < *(int *)(extraout_ECX_01 + 0x20)) {
      uVar2 = FUN_000e69fc();
      *(undefined4 *)(extraout_ECX_02 + 0x20) = uVar2;
      iVar1 = extraout_ECX_02;
    }
  }
  else {
    uVar2 = FUN_000e69fc();
    *(undefined4 *)(extraout_ECX_00 + 0x20) = uVar2;
    *(int *)(extraout_ECX_00 + 0x20) = -*(int *)(extraout_ECX_00 + 0x20);
    iVar1 = extraout_ECX_00;
  }
  *(undefined1 *)(iVar1 + 0x24) = 1;
  return;
}

/******************************************************************************
 * Function : sub_077b4e (Ghidra: FUN_00077b4e)
 * Prototype: void sub_077b4e(void);
 * Address  : 0x77b4e (Size: 63 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f163
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_00077b4e(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int in_EDX;
  
  *(int *)(in_EAX + 0x1b) = *(int *)(in_EAX + 0x1b) + in_EDX;
  iVar1 = FUN_000e69fc();
  if (-*(int *)(extraout_ECX + 0x1b) == iVar1 || -iVar1 < *(int *)(extraout_ECX + 0x1b)) {
    iVar3 = FUN_000e69fc();
    iVar1 = extraout_ECX_01;
    if (iVar3 < *(int *)(extraout_ECX_01 + 0x1b)) {
      uVar2 = FUN_000e69fc();
      *(undefined4 *)(extraout_ECX_02 + 0x1b) = uVar2;
      iVar1 = extraout_ECX_02;
    }
  }
  else {
    uVar2 = FUN_000e69fc();
    *(undefined4 *)(extraout_ECX_00 + 0x1b) = uVar2;
    *(int *)(extraout_ECX_00 + 0x1b) = -*(int *)(extraout_ECX_00 + 0x1b);
    iVar1 = extraout_ECX_00;
  }
  *(undefined1 *)(iVar1 + 0x1f) = 1;
  return;
}

/******************************************************************************
 * Function : sub_077b8d (Ghidra: FUN_00077b8d)
 * Prototype: void sub_077b8d(void);
 * Address  : 0x77b8d (Size: 185 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xde6a8, 0xe2cd0, 0xe31b8
 * Callees  : 5 -> 0x77c46, 0x77cf1, 0x77da0, 0x77e5c, 0xe69fc
 ******************************************************************************/
void FUN_00077b8d(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x20) < 0) {
    FUN_000e69fc();
    FUN_00077da0();
  }
  else if (0 < *(int *)(in_EAX + 0x20)) {
    FUN_000e69fc();
    FUN_00077e5c();
  }
  if (*(char *)(in_EAX + 0x24) == '\0') {
    *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) / 2;
  }
  else {
    *(undefined1 *)(in_EAX + 0x24) = 0;
  }
  if (*(int *)(in_EAX + 0x25) < 0) {
    FUN_000e69fc();
    FUN_00077c46();
  }
  else if (0 < *(int *)(in_EAX + 0x25)) {
    FUN_000e69fc();
    FUN_00077cf1();
  }
  if (*(char *)(in_EAX + 0x29) == '\0') {
    *(int *)(in_EAX + 0x25) = *(int *)(in_EAX + 0x25) / 2;
  }
  else {
    *(undefined1 *)(in_EAX + 0x29) = 0;
  }
  if (*(int *)(in_EAX + 0x1b) != 0) {
    *(uint *)(in_EAX + 7) = *(int *)(in_EAX + 7) + *(int *)(in_EAX + 0x1b) & 0x7ff;
  }
  if (*(char *)(in_EAX + 0x1f) != '\0') {
    *(undefined1 *)(in_EAX + 0x1f) = 0;
    return;
  }
  *(int *)(in_EAX + 0x1b) = *(int *)(in_EAX + 0x1b) / 2;
  return;
}

/******************************************************************************
 * Function : sub_077c46 (Ghidra: FUN_00077c46)
 * Prototype: void sub_077c46(void);
 * Address  : 0x77c46 (Size: 171 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x77b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00077c46(void)

{
  byte bVar1;
  ushort *in_EAX;
  int in_EDX;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar1 = (byte)in_EAX[3];
  if (bVar1 < 3) {
    bVar4 = bVar1 == 2;
  }
  else {
    if (bVar1 < 4) {
      iVar2 = (uint)in_EAX[1] - in_EDX;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xffff < iVar2) {
        iVar2 = 0xffff;
      }
      goto LAB_00077cc1;
    }
    bVar4 = bVar1 == 5;
  }
  if (!bVar4) {
    return;
  }
  iVar3 = ((&DAT_001927e0)[*(int *)((int)in_EAX + 7)] * in_EDX >> 0x10) + (uint)*in_EAX;
  iVar2 = (-(in_EDX * (int)(&PTR_LAB_00192fe0)[*(int *)((int)in_EAX + 7)] >> 8) >> 8) +
          (uint)in_EAX[1];
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xffff < iVar3) {
    iVar3 = 0xffff;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  *in_EAX = (ushort)iVar3;
LAB_00077cc1:
  in_EAX[1] = (ushort)iVar2;
  return;
}

/******************************************************************************
 * Function : sub_077cf1 (Ghidra: FUN_00077cf1)
 * Prototype: void sub_077cf1(void);
 * Address  : 0x77cf1 (Size: 175 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x77b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00077cf1(void)

{
  byte bVar1;
  ushort *in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  bool bVar4;
  
  bVar1 = (byte)in_EAX[3];
  if (bVar1 < 3) {
    bVar4 = bVar1 == 2;
  }
  else {
    if (bVar1 < 4) {
      iVar2 = (uint)in_EAX[1] + in_EDX;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xffff < iVar2) {
        iVar2 = 0xffff;
      }
      goto LAB_00077d70;
    }
    bVar4 = bVar1 == 5;
  }
  if (!bVar4) {
    return;
  }
  iVar3 = (uint)*in_EAX - ((&DAT_001927e0)[*(int *)((int)in_EAX + 7)] * in_EDX >> 0x10);
  iVar2 = (uint)in_EAX[1] -
          (-(in_EDX * (int)(&PTR_LAB_00192fe0)[*(int *)((int)in_EAX + 7)] >> 8) >> 8);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xffff < iVar3) {
    iVar3 = 0xffff;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  *in_EAX = (ushort)iVar3;
LAB_00077d70:
  in_EAX[1] = (ushort)iVar2;
  return;
}

/******************************************************************************
 * Function : sub_077da0 (Ghidra: FUN_00077da0)
 * Prototype: void sub_077da0(void);
 * Address  : 0x77da0 (Size: 188 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x77b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00077da0(void)

{
  byte bVar1;
  ushort *in_EAX;
  int in_EDX;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar1 = (byte)in_EAX[3];
  if (bVar1 < 3) {
    bVar5 = bVar1 == 2;
  }
  else {
    if (bVar1 < 4) {
      iVar4 = (uint)*in_EAX - in_EDX;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      *in_EAX = (ushort)iVar4;
      return;
    }
    bVar5 = bVar1 == 5;
  }
  if (!bVar5) {
    return;
  }
  uVar2 = *(int *)((int)in_EAX + 7) + 0x200U & 0x7ff;
  iVar4 = (uint)*in_EAX - ((&DAT_001927e0)[uVar2] * in_EDX >> 0x10);
  iVar3 = (uint)in_EAX[1] - (-(in_EDX * (int)(&PTR_LAB_00192fe0)[uVar2] >> 8) >> 8);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xffff < iVar4) {
    iVar4 = 0xffff;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xffff < iVar3) {
    iVar3 = 0xffff;
  }
  *in_EAX = (ushort)iVar4;
  in_EAX[1] = (ushort)iVar3;
  return;
}

/******************************************************************************
 * Function : sub_077e5c (Ghidra: FUN_00077e5c)
 * Prototype: void sub_077e5c(void);
 * Address  : 0x77e5c (Size: 186 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x77b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00077e5c(void)

{
  byte bVar1;
  ushort *in_EAX;
  int in_EDX;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  bVar1 = (byte)in_EAX[3];
  if (bVar1 < 3) {
    bVar5 = bVar1 == 2;
  }
  else {
    if (bVar1 < 4) {
      iVar2 = (uint)*in_EAX + in_EDX;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xffff < iVar2) {
        iVar2 = 0xffff;
      }
      *in_EAX = (ushort)iVar2;
      return;
    }
    bVar5 = bVar1 == 5;
  }
  if (!bVar5) {
    return;
  }
  uVar3 = *(int *)((int)in_EAX + 7) + 0x200U & 0x7ff;
  iVar2 = ((&DAT_001927e0)[uVar3] * in_EDX >> 0x10) + (uint)*in_EAX;
  iVar4 = (uint)in_EAX[1] + (-(in_EDX * (int)(&PTR_LAB_00192fe0)[uVar3] >> 8) >> 8);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xffff < iVar4) {
    iVar4 = 0xffff;
  }
  *in_EAX = (ushort)iVar2;
  in_EAX[1] = (ushort)iVar4;
  return;
}

/******************************************************************************
 * Function : sub_077f16 (Ghidra: FUN_00077f16)
 * Prototype: void sub_077f16(void);
 * Address  : 0x77f16 (Size: 198 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4b2a7, 0x5f163
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00077f16(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  
  bVar1 = *(byte *)(in_EAX + 6);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      iVar2 = (*(int *)(in_EAX + 0x17) * 100) / 0x55;
      *(int *)(in_EAX + 0x17) = iVar2;
      if (iVar2 < unaff_EBX) {
        *(int *)(in_EAX + 0x17) = unaff_EBX;
        return;
      }
      if (in_EDX < iVar2) {
        *(int *)(in_EAX + 0x17) = in_EDX;
        return;
      }
    }
  }
  else if (bVar1 < 4) {
    iVar2 = *(short *)(in_EAX + 4) * 5;
    iVar3 = iVar2 >> 0x1f;
    iVar2 = (int)((iVar2 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2;
    if (*(short *)(in_EAX + 4) == iVar2) {
      *(short *)(in_EAX + 4) = *(short *)(in_EAX + 4) + 1;
    }
    else {
      *(short *)(in_EAX + 4) = (short)iVar2;
    }
    if (*(short *)(in_EAX + 4) < 0x10) {
      *(undefined2 *)(in_EAX + 4) = 0x10;
      return;
    }
    if (0x400 < *(short *)(in_EAX + 4)) {
      *(undefined2 *)(in_EAX + 4) = 0x400;
      return;
    }
  }
  else {
    if (bVar1 != 5) {
      return;
    }
    iVar2 = (*(int *)(in_EAX + 0x17) * 100) / 0x55;
    *(int *)(in_EAX + 0x17) = iVar2;
    if (iVar2 < 0x4000) {
      *(undefined4 *)(in_EAX + 0x17) = 0x4000;
      return;
    }
    if (0x10000 < iVar2) {
      *(undefined4 *)(in_EAX + 0x17) = 0x10000;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_077fdc (Ghidra: FUN_00077fdc)
 * Prototype: void sub_077fdc(void);
 * Address  : 0x77fdc (Size: 199 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4b792, 0x5f163
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00077fdc(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  
  bVar1 = *(byte *)(in_EAX + 6);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      iVar2 = (*(int *)(in_EAX + 0x17) * 0x55) / 100;
      *(int *)(in_EAX + 0x17) = iVar2;
      if (iVar2 < unaff_EBX) {
        *(int *)(in_EAX + 0x17) = unaff_EBX;
        return;
      }
      if (in_EDX < iVar2) {
        *(int *)(in_EAX + 0x17) = in_EDX;
        return;
      }
    }
  }
  else if (bVar1 < 4) {
    iVar2 = ((int)*(short *)(in_EAX + 4) << 2) / 5;
    if (*(short *)(in_EAX + 4) == iVar2) {
      *(short *)(in_EAX + 4) = *(short *)(in_EAX + 4) + 1;
    }
    else {
      *(short *)(in_EAX + 4) = (short)iVar2;
    }
    if (*(short *)(in_EAX + 4) < 0x10) {
      *(undefined2 *)(in_EAX + 4) = 0x10;
      return;
    }
    if (0x400 < *(short *)(in_EAX + 4)) {
      *(undefined2 *)(in_EAX + 4) = 0x400;
      return;
    }
  }
  else {
    if (bVar1 != 5) {
      return;
    }
    iVar2 = (*(int *)(in_EAX + 0x17) * 0x55) / 100;
    *(int *)(in_EAX + 0x17) = iVar2;
    if (iVar2 < 0x4000) {
      *(undefined4 *)(in_EAX + 0x17) = 0x4000;
      return;
    }
    if (0x10000 < iVar2) {
      *(undefined4 *)(in_EAX + 0x17) = 0x10000;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0780a3 (Ghidra: FUN_000780a3)
 * Prototype: longlong sub_0780a3(void);
 * Address  : 0x780a3 (Size: 31 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x4b222, 0x4b792, 0x4b992, 0x5ce63, 0x5f163
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000780a3(void)

{
  byte bVar1;
  int in_EAX;
  uint in_EDX;
  
  bVar1 = *(byte *)(in_EAX + 6);
  if (1 < bVar1) {
    if (bVar1 < 3) {
      return CONCAT44(in_EDX,*(undefined4 *)(in_EAX + 0x17));
    }
    if (bVar1 == 3) {
      return CONCAT44(in_EDX,(int)*(short *)(in_EAX + 4));
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0780c2 (Ghidra: FUN_000780c2)
 * Prototype: void sub_0780c2(void);
 * Address  : 0x780c2 (Size: 29 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x4b2a7, 0x4b478, 0x4b792, 0x4b7d4, 0x5f163, 0x85f80
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000780c2(void)

{
  byte bVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  bVar1 = *(byte *)(in_EAX + 6);
  if (1 < bVar1) {
    if (bVar1 < 3) {
      *(undefined4 *)(in_EAX + 0x17) = in_EDX;
      return;
    }
    if (bVar1 == 3) {
      *(short *)(in_EAX + 4) = (short)in_EDX;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0780df (Ghidra: FUN_000780df)
 * Prototype: void sub_0780df(void);
 * Address  : 0x780df (Size: 176 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x36ff4, 0x402e5, 0x4823a, 0x5b9c0, 0x5d7b5, 0x7818f, 0x781c8, 0x872b8, 0x87694, 0x87da4 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000780df(void)

{
  uint in_EAX;
  int in_ECX;
  uint in_EDX;
  int iVar1;
  int unaff_EBX;
  
  if ((DAT_0019d0b8 & 0x20) == 0) {
    if ((int)in_EAX < 0) {
      in_EAX = 0;
      goto LAB_0007811c;
    }
  }
  else if ((int)in_EAX < 0x8c) {
    in_EAX = 0x8c;
    goto LAB_0007811c;
  }
  if ((int)(uint)DAT_0019cba4 < (int)in_EAX) {
    in_EAX = (uint)DAT_0019cba4;
  }
LAB_0007811c:
  if ((int)in_EDX < 0) {
    in_EDX = 0;
  }
  else if ((int)(uint)DAT_0019cba2 < (int)in_EDX) {
    in_EDX = (uint)DAT_0019cba2;
  }
  if (unaff_EBX < 0) {
    unaff_EBX = 0;
  }
  if ((int)(uint)DAT_0019cba4 < (int)(in_EAX + unaff_EBX)) {
    unaff_EBX = DAT_0019cba4 - in_EAX;
  }
  if (in_ECX < 0) {
    in_ECX = 0;
  }
  else if ((int)(uint)DAT_0019cba2 < (int)(in_EDX + in_ECX)) {
    in_ECX = DAT_0019cba2 - in_EDX;
  }
  iVar1 = DAT_002f10ce._3_1_ * 0x4ef;
  *(short *)(&DAT_0019d510 + iVar1) = (short)in_EAX;
  *(short *)(&DAT_0019d512 + iVar1) = (short)in_EDX;
  *(short *)(&DAT_0019d50c + iVar1) = (short)unaff_EBX;
  *(short *)(&DAT_0019d50e + iVar1) = (short)in_ECX;
  return;
}

/******************************************************************************
 * Function : sub_07818f (Ghidra: FUN_0007818f)
 * Prototype: void sub_07818f(void);
 * Address  : 0x7818f (Size: 57 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x780df
 ******************************************************************************/
void FUN_0007818f(void)

{
  FUN_000780df();
  return;
}

