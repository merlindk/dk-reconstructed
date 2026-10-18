/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: scrsupp.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 15
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_068cee (Ghidra: FUN_00068cee)
 * Prototype: void sub_068cee(void);
 * Address  : 0x68cee (Size: 138 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00068cee(void)

{
  byte bVar1;
  undefined2 uVar3;
  code cVar4;
  char cVar6;
  uint in_EAX;
  uint uVar5;
  char cVar7;
  char *in_ECX;
  int iVar8;
  byte bVar9;
  code cVar10;
  uint *in_EDX;
  undefined4 unaff_EBX;
  char *pcVar12;
  uint uVar14;
  int unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  code *pcVar15;
  undefined2 in_ES;
  undefined2 in_CS;
  byte bVar2;
  char *pcVar11;
  char cVar13;
  
  uVar14 = (uint)&stack0x00000000 & *in_EDX;
  bVar1 = *unaff_ESI;
  bVar9 = (byte)in_EDX;
  bVar2 = *unaff_ESI;
  *unaff_ESI = (bVar2 - bVar9) - (in_EAX < 0x191a1b1c);
  uVar5 = (uint)(bVar1 < bVar9 || (byte)(bVar2 - bVar9) < (in_EAX < 0x191a1b1c));
  cVar7 = (char)in_ECX;
  *unaff_EDI = *unaff_EDI + cVar7 +
               (0xeeedeceb < in_EAX + 0xe6e5e4e4 || CARRY4(in_EAX + 0xf7f7f7f8,uVar5));
  *(undefined2 *)(uVar14 - 4) = in_CS;
  uVar5 = in_EAX + 0xf7f7f7f8 + uVar5 | 0x90a0b0c;
  *unaff_EDI = *unaff_EDI | (byte)uVar5;
  *(undefined2 *)(uVar14 - 8) = in_ES;
  pcVar11 = (char *)(uVar5 + 0xb291628e);
  *pcVar11 = *pcVar11 + (char)unaff_EBX;
  unaff_ESI[-0x21fff973] = unaff_ESI[-0x21fff973] + (char)((uint)in_EDX >> 8);
  cVar13 = (char)((uint)unaff_EBX >> 8);
  *in_ECX = *in_ECX + cVar13;
  unaff_ESI[-0x72] = unaff_ESI[-0x72] + cVar7;
  *(undefined2 *)(uVar14 - 0xc) = *(undefined2 *)unaff_ESI;
  cVar10 = (code)(bVar9 + cVar7);
  pcVar11 = (char *)CONCAT31((int3)((uint)in_EDX >> 8),cVar10);
  cVar6 = (char)((uint)unaff_ESI >> 8);
  cVar13 = cVar13 + cVar6;
  pcVar12 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar13,(char)unaff_EBX));
  cVar6 = cVar6 + cVar13;
  iVar8 = CONCAT22((short)((uint)unaff_ESI >> 0x10),CONCAT11(cVar6,(char)unaff_ESI));
  uVar3 = *(undefined2 *)unaff_ESI;
  *in_ECX = *in_ECX + (char)cVar10;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uVar14 - 0xc);
  *unaff_ESI = *unaff_ESI + cVar6;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uVar14 - 8);
  *pcVar12 = *pcVar12 + cVar13;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uVar14 - 4);
  *(char *)(iVar8 + -0x71) = *(char *)(iVar8 + -0x71) + (char)cVar10;
  *(undefined2 *)(uVar14 - 4) = uVar3;
  *(char *)(unaff_EBP + -0x71) = *(char *)(unaff_EBP + -0x71) + cVar6;
  *(undefined2 *)(uVar14 - 8) = uVar3;
  pcVar11[-0x71] = pcVar11[-0x71] + cVar13;
  *(undefined2 *)(uVar14 - 0xc) = uVar3;
  unaff_EDI[-0x5bfff971] = unaff_EDI[-0x5bfff971] + cVar7;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uVar14 - 0xc);
  in_ECX[-0x17fff971] = in_ECX[-0x17fff971] + cVar13;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uVar14 - 8);
  *pcVar11 = *pcVar11 + (char)unaff_ESI;
  *(undefined2 *)(uVar14 - 8) = uVar3;
  *unaff_ESI = *unaff_ESI + (char)cVar10;
  *(undefined2 *)(uVar14 - 0xc) = uVar3;
  cVar6 = (char)((uint)in_ECX >> 8);
  *unaff_EDI = *unaff_EDI + cVar6;
  *(undefined2 *)(uVar14 - 0x10) = uVar3;
  *(char *)(iVar8 + -0x70) = *(char *)(iVar8 + -0x70) + cVar6;
  *(undefined2 *)(uVar14 - 0x14) = uVar3;
  pcVar11 = (char *)(iVar8 + 6 + (int)pcVar11 * 4);
  *pcVar11 = *pcVar11 + cVar13;
  in_ECX[-0x59fff970] = in_ECX[-0x59fff970] + (char)cVar10;
  *(undefined2 *)(uVar14 - 0x18) = uVar3;
  in_ECX[0x56] = in_ECX[0x56] + (char)cVar10;
  *(byte **)(uVar14 - 0x1c) = unaff_EDI;
  *(int *)(uVar14 - 0x20) = unaff_EBP;
  iVar8 = 0x1c;
  pcVar15 = FUN_00068cee;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar4 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar10 != cVar4);
                    /* WARNING: Could not recover jumptable at 0x00068d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar8 * 4 + 0x68d09))();
  return;
}

/******************************************************************************
 * Function : sub_068d79 (Ghidra: FUN_00068d79)
 * Prototype: void sub_068d79(void);
 * Address  : 0x68d79 (Size: 31 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x68b37
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00068d79(void)

{
  code cVar1;
  int iVar2;
  code in_DL;
  code *pcVar3;
  
  iVar2 = 0x1c;
  pcVar3 = FUN_00068cee;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (in_DL != cVar1);
                    /* WARNING: Could not recover jumptable at 0x00068d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x68d09))();
  return;
}

/******************************************************************************
 * Function : sub_06916d (Ghidra: FUN_0006916d)
 * Prototype: undefined8 sub_06916d(void);
 * Address  : 0x6916d (Size: 53 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x68b37
 * Callees  : 1 -> 0x698d0
 ******************************************************************************/
undefined8 FUN_0006916d(void)

{
  uint uVar1;
  undefined4 in_EDX;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_000698d0();
  iVar2 = (int)(uVar3 >> 0x20);
  uVar1 = 0;
  if ((uVar3 & 0xff) != 0) {
    if (*(char *)(iVar2 + 3) == '\b') {
      return CONCAT44(in_EDX,1);
    }
    uVar1 = (uint)uVar3 & 0xff & 1 << (*(byte *)(iVar2 + 3) & 0x1f);
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0691a2 (Ghidra: FUN_000691a2)
 * Prototype: void sub_0691a2(void);
 * Address  : 0x691a2 (Size: 110 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5ba80, 0x5bcc1
 ******************************************************************************/
void FUN_000691a2(void)

{
  FUN_0005bcc1();
  FUN_0005ba80();
  return;
}

/******************************************************************************
 * Function : sub_069220 (Ghidra: FUN_00069220)
 * Prototype: bool sub_069220(void);
 * Address  : 0x69220 (Size: 70 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x68b37
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00069220(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  if (in_EDX - 0x1eU < 4) {
    iVar1 = in_EAX * 0x1508 + unaff_EBX;
    switch(in_EDX) {
    case 0x1e:
      uVar2 = (uint)(byte)(&DAT_002e1569)[iVar1];
      break;
    case 0x1f:
      uVar2 = (uint)(byte)(&DAT_002e1591)[iVar1];
      break;
    case 0x20:
      uVar2 = (uint)(byte)(&DAT_002e15a6)[iVar1];
      break;
    case 0x21:
      uVar2 = (uint)(byte)(&DAT_002e1507)[iVar1];
    }
    return uVar2 == in_ECX;
  }
  return false;
}

/******************************************************************************
 * Function : dk_allocate_light_new_hero_069268 (Ghidra: FUN_00069268)
 * Prototype: undefined2 dk_allocate_light_new_hero_069268(char param_1);
 * Address  : 0x69268 (Size: 620 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp:79 ("Cannot allocate light to new hero")
 * Naming   : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> 0x68788, 0x689a7
 * Callees  : 10 -> 0x43ac3, 0x51374, 0x72af4, 0x7dbc0, 0x82774, 0xacaf8, 0xad834, 0xb28e8, 0xb5100, 0xddaf0
 * Strings  :
 *   - 0x166cfa: "scrsupp.cpp"
 *   - 0x166cd8: "Cannot allocate light to new hero"
 ******************************************************************************/
undefined2 FUN_00069268(char param_1)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  byte bVar7;
  undefined4 uVar8;
  undefined2 uStack_1e;
  undefined1 local_1b;
  short local_18;
  short local_16;
  int local_10;
  
  bVar7 = 0;
  if ((in_EAX != 0) && (iVar5 = in_EAX * 10, ((&DAT_002eb401)[iVar5] & 1) != 0)) {
    if ((param_1 == '\0') || (*(short *)(&DAT_002eb406 + iVar5) == 0)) {
      local_18 = *(short *)(&DAT_002eb402 + iVar5);
      local_16 = *(short *)(&DAT_002eb404 + iVar5);
    }
    else {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar1 = DAT_002e8bf6 >> 0xd;
      DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
      uVar1 = uVar1 & 0x7ff;
      local_10 = (int)((uint)*(ushort *)(&DAT_002eb406 + iVar5) * (&DAT_001927e0)[uVar1]) >> 0x10;
      local_18 = *(short *)(&DAT_002eb402 + iVar5) +
                 (short)((uint)*(ushort *)(&DAT_002eb406 + iVar5) * (&DAT_001927e0)[uVar1] >> 0x10);
      local_16 = (short)((uint)-((int)((int)(&PTR_LAB_00192fe0)[uVar1] *
                                      (uint)*(ushort *)(&DAT_002eb406 + iVar5)) >> 8) >> 8) +
                 *(short *)(&DAT_002eb404 + iVar5);
    }
    uVar8 = 0xffffffff;
    iVar5 = FUN_00043ac3(0xffffffff);
    if (iVar5 != 0) {
      uVar3 = FUN_000b28e8();
      *(undefined2 *)(iVar5 + 0x11) = uVar3;
      iVar6 = FUN_0007dbc0();
      iVar5 = extraout_ECX;
      if ((iVar6 == 0) || (cVar2 = FUN_000b5100(), iVar5 = extraout_ECX_00, cVar2 != '\0')) {
        if (((&DAT_002e0589)[(uint)DAT_002eb542 * 0xa84] == 0) ||
           (cVar2 = FUN_00082774(), iVar5 = extraout_ECX_01, cVar2 == '\0')) {
          iVar6 = (&DAT_001b0a00)[*(ushort *)(iVar5 + 100)];
        }
        else {
          *(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_01 + 100)] + 0xae) =
               *(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_01 + 100)] + 0xae) | 1;
          iVar6 = (&DAT_001b0a00)[*(ushort *)(extraout_ECX_01 + 100)];
        }
        *(undefined4 *)(iVar6 + 0x288) = *(undefined4 *)(iVar5 + 0xd);
        *(undefined2 *)(iVar6 + 0x28c + (uint)bVar7 * -8) =
             *(undefined2 *)(iVar5 + 0x11 + (uint)bVar7 * -8);
        uVar3 = FUN_000b28e8();
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_02 + 100)] + 0x28c) = uVar3;
        *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_02 + 100)] + 0x89) = 0xff;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        uVar1 = DAT_002e8bf6 >> 0xd;
        DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
        iVar5 = extraout_ECX_02;
        if ((uVar1 & 3) == 0) {
          (&uStack_1e)[(uint)bVar7 * -4] =
               *(undefined2 *)(extraout_ECX_02 + 0x11 + (uint)bVar7 * -8);
          local_1b = 1;
          sVar4 = FUN_000acaf8(uVar8,0xa00);
          *(short *)(extraout_ECX_03 + 0x62) = sVar4;
          if (sVar4 == 0) {
            FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 79, "Cannot allocate light to new hero") */
            iVar5 = extraout_ECX_04;
          }
          else {
            FUN_000ad834();
            iVar5 = extraout_ECX_05;
          }
        }
        if ((*(char *)(iVar5 + 0x1a) == '\x06') || (*(char *)(iVar5 + 0x1a) == '\a')) {
          FUN_00051374();
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          FUN_00051374();
          iVar5 = extraout_ECX_06;
        }
        return *(undefined2 *)(iVar5 + 0x1b);
      }
      FUN_00072af4();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_script_could_find_hero_0694d4 (Ghidra: FUN_000694d4)
 * Prototype: undefined2 dk_script_could_find_hero_0694d4(void);
 * Address  : 0x694d4 (Size: 600 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp:123 ("Script error - could not find hero door"); scrsupp.cpp:166 ("Cannot allocate light to new hero")
 * Naming   : String 'Script error - could not find hero door'
 * Callers  : 2 -> 0x68788, 0x689a7
 * Callees  : 8 -> 0x43ac3, 0x72af4, 0x7dbc0, 0xacaf8, 0xad834, 0xb28e8, 0xb5100, 0xddaf0
 * Strings  :
 *   - 0x166d2e: "scrsupp.cpp"
 *   - 0x166d5c: "scrsupp.cpp"
 *   - 0x166d06: "Script error - could not find hero door"
 *   - 0x166d3a: "Cannot allocate light to new hero"
 ******************************************************************************/
undefined2 FUN_000694d4(void)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  uint in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  byte bVar8;
  undefined4 uVar9;
  undefined2 uStack_26;
  undefined1 local_23;
  short local_20;
  short sStack_1e;
  short local_1c;
  undefined2 local_18;
  undefined2 local_16;
  short local_14;
  
  bVar8 = 0;
  if (in_EAX != 0) {
    bVar1 = false;
    for (uVar7 = DAT_002e6ec6; uVar7 = (&DAT_001ae9fc)[uVar7], DAT_001ae9fc < uVar7;
        uVar7 = (uint)*(ushort *)(uVar7 + 0x67)) {
      if ((*(char *)(uVar7 + 0x1a) == '1') && (*(byte *)(uVar7 + 0x13) == in_EAX)) {
        bVar1 = true;
        break;
      }
    }
    if (bVar1) {
      local_18 = *(undefined2 *)(uVar7 + 0xd);
      local_16 = *(undefined2 *)(uVar7 + 0xf);
      uVar9 = 0xffffffff;
      local_14 = *(short *)(uVar7 + 0x11) + 0x180;
      iVar5 = FUN_00043ac3(0xffffffff);
      if (iVar5 != 0) {
        uVar3 = FUN_000b28e8();
        *(undefined2 *)(iVar5 + 0x11) = uVar3;
        iVar6 = FUN_0007dbc0();
        iVar5 = extraout_ECX_00;
        if ((iVar6 == 0) || (cVar2 = FUN_000b5100(), iVar5 = extraout_ECX_01, cVar2 != '\0')) {
          *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0xae) =
               *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0xae) | 2;
          iVar6 = (&DAT_001b0a00)[*(ushort *)(iVar5 + 100)];
          *(undefined4 *)(iVar6 + 0x288) = *(undefined4 *)(iVar5 + 0xd);
          *(undefined2 *)(iVar6 + 0x28c + (uint)bVar8 * -8) =
               *(undefined2 *)(iVar5 + 0x11 + (uint)bVar8 * -8);
          uVar3 = FUN_000b28e8();
          *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_02 + 100)] + 0x28c) = uVar3;
          *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_02 + 100)] + 0x89) = 0xff;
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar7 = DAT_002e8bf6 >> 0xd;
          DAT_002e8bf6 = uVar7 | DAT_002e8bf6 * 0x80000;
          iVar5 = extraout_ECX_02;
          if ((uVar7 & 3) == 0) {
            (&uStack_26)[(uint)bVar8 * -4] =
                 *(undefined2 *)(extraout_ECX_02 + 0x11 + (uint)bVar8 * -8);
            local_23 = 1;
            sVar4 = FUN_000acaf8(uVar9,0xa00);
            *(short *)(extraout_ECX_03 + 0x62) = sVar4;
            if (sVar4 == 0) {
              FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 123, "Script error - could not find hero door") */
              iVar5 = extraout_ECX_04;
            }
            else {
              FUN_000ad834();
              iVar5 = extraout_ECX_05;
            }
          }
          *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0xad) =
               *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar5 + 100)] + 0xad) | 0x20;
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar7 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          local_20 = (short)((ulonglong)uVar7 % 0xc0) + -0x60;
          DAT_002e8bf6 = uVar7 * 0x24a1 + 0x24df;
          uVar7 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          sStack_1e = (short)((ulonglong)uVar7 % 0xc0) + -0x60;
          DAT_002e8bf6 = uVar7 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          local_1c = (short)((ulonglong)DAT_002e8bf6 % 0x60) + 0x50;
          *(short *)(iVar5 + 0x32) = *(short *)(iVar5 + 0x32) + local_20;
          *(short *)(iVar5 + 0x34) = *(short *)(iVar5 + 0x34) + sStack_1e;
          *(short *)(iVar5 + 0x36) = *(short *)(iVar5 + 0x36) + local_1c;
          *(byte *)(iVar5 + 1) = *(byte *)(iVar5 + 1) | 4;
          if ((*(char *)(iVar5 + 0x1a) == '\x06') || (*(char *)(iVar5 + 0x1a) == '\a')) {
            FUN_00051374();
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            FUN_00051374();
            iVar5 = extraout_ECX;
          }
          return *(undefined2 *)(iVar5 + 0x1b);
        }
        FUN_00072af4();
      }
    }
    else {
      FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 166, "Cannot allocate light to new hero") */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_light_new_hero_06972c (Ghidra: FUN_0006972c)
 * Prototype: undefined2 dk_allocate_light_new_hero_06972c(void);
 * Address  : 0x6972c (Size: 420 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp:221 ("Cannot allocate light to new hero"); scrsupp.cpp:238 ("SCRIPT SUPPORT - Dungeon heart created thing in wall"); scrsupp.cpp:246
 * Naming   : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> 0x68788, 0x689a7
 * Callees  : 9 -> 0x43bb3, 0x51374, 0x72af4, 0x7dbc0, 0xacaf8, 0xad834, 0xb28e8, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x166d8a: "scrsupp.cpp"
 *   - 0x166dcb: "scrsupp.cpp"
 *   - 0x166e07: "scrsupp.cpp"
 *   - 0x166d68: "Cannot allocate light to new hero"
 *   - 0x166d96: "SCRIPT SUPPORT - Dungeon heart created thing in wall"
 *   - 0x166dd7: "SCRIPT SUPPORT - Player %d has no dungeon heart"
 ******************************************************************************/
undefined2 FUN_0006972c(void)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 in_DL;
  uint unaff_EBX;
  byte bVar5;
  undefined2 uStack_1a;
  undefined1 local_17;
  int local_14;
  
  bVar5 = 0;
  if ((&DAT_002e0589)[(unaff_EBX & 0xff) * 0xa84] == 0) {
    FUN_000e7714(&DAT_0019cbac,s_SCRIPT_SUPPORT___Player__d_has_n_00166dd7,in_DL);
    FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 221, "Cannot allocate light to new hero") */
  }
  else {
    local_14 = FUN_00043bb3();
    if (local_14 != 0) {
      uVar2 = FUN_000b28e8();
      *(undefined2 *)(extraout_ECX + 0x11) = uVar2;
      iVar4 = FUN_0007dbc0();
      if (iVar4 == 0) {
        *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x89) = 0xff;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        uVar1 = DAT_002e8bf6 >> 0xd;
        DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
        if ((uVar1 & 3) == 0) {
          (&uStack_1a)[(uint)bVar5 * -4] =
               *(undefined2 *)(extraout_ECX_00 + 0x11 + (uint)bVar5 * -8);
          local_17 = 1;
          sVar3 = FUN_000acaf8(0xa00);
          *(short *)(extraout_ECX_01 + 0x62) = sVar3;
          if (sVar3 == 0) {
            FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 238, "SCRIPT SUPPORT - Dungeon heart created thing in wall") */
          }
          else {
            FUN_000ad834();
          }
        }
        if ((*(char *)(local_14 + 0x1a) == '\x06') || (*(char *)(local_14 + 0x1a) == '\a')) {
          FUN_00051374();
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          FUN_00051374();
        }
        return *(undefined2 *)(local_14 + 0x1b);
      }
      FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 246, g_log_buf) */
      FUN_00072af4();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0698d0 (Ghidra: FUN_000698d0)
 * Prototype: undefined4 sub_0698d0(void);
 * Address  : 0x698d0 (Size: 10 bytes)
 * Module   : scrsupp.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6916d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000698d0(void)

{
  int in_EAX;
  
  return CONCAT31((int3)((uint)(in_EAX * 10) >> 8),(&DAT_002eb40a)[in_EAX * 10]);
}

/******************************************************************************
 * Function : dk_script_support_dungeon_heart_0698da (Ghidra: FUN_000698da)
 * Prototype: undefined4 dk_script_support_dungeon_heart_0698da(void);
 * Address  : 0x698da (Size: 80 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp:268 ("SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!")
 * Naming   : String 'SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!'
 * Callers  : 1 -> 0x689a7
 * Callees  : 2 -> 0x390af, 0xddaf0
 * Strings  :
 *   - 0x166e4b: "scrsupp.cpp"
 *   - 0x166e13: "SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!"
 ******************************************************************************/
undefined4 FUN_000698da(void)

{
  uint in_EDX;
  
  if ((&DAT_002e0589)[(in_EDX & 0xff) * 0xa84] != 0) {
    FUN_000390af();
    return 1;
  }
  FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 268, "SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!") */
  return 0;
}

/******************************************************************************
 * Function : dk_script_support_dungeon_heart_06992a (Ghidra: FUN_0006992a)
 * Prototype: bool dk_script_support_dungeon_heart_06992a(void);
 * Address  : 0x6992a (Size: 93 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp:286 ("SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!")
 * Naming   : String 'SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!'
 * Callers  : 1 -> 0x689a7
 * Callees  : 3 -> 0x239ee, 0x390af, 0xddaf0
 * Strings  :
 *   - 0x166e8f: "scrsupp.cpp"
 *   - 0x166e57: "SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!"
 ******************************************************************************/
bool FUN_0006992a(void)

{
  short sVar1;
  uint in_EDX;
  
  sVar1 = (&DAT_002e0589)[(in_EDX & 0xff) * 0xa84];
  if (sVar1 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 286, "SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!") */
  }
  else {
    FUN_000239ee();
    FUN_000390af();
  }
  return sVar1 != 0;
}

/******************************************************************************
 * Function : dk_script_support_could_find_069987 (Ghidra: FUN_00069987)
 * Prototype: undefined8 dk_script_support_could_find_069987(void);
 * Address  : 0x69987 (Size: 89 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp:305 ("SCRIPT SUPPORT - Could not find appropriate dungeon to send tunneller to!")
 * Naming   : String 'SCRIPT SUPPORT - Could not find appropriate dungeon to send '
 * Callers  : 2 -> 0x38989, 0x689a7
 * Callees  : 4 -> 0x239ee, 0x23a48, 0x390af, 0xddaf0
 * Strings  :
 *   - 0x166ee5: "scrsupp.cpp"
 *   - 0x166e9b: "SCRIPT SUPPORT - Could not find appropriate dungeon to send tunneller to!"
 ******************************************************************************/
undefined8 FUN_00069987(void)

{
  char cVar1;
  undefined4 in_EDX;
  
  cVar1 = FUN_00023a48();
  if (cVar1 == -1) {
    FUN_000ddaf0(); /* LbErrorLog("scrsupp.cpp", line 305, "SCRIPT SUPPORT - Could not find appropriate dungeon to send tunneller to!") */
  }
  else {
    FUN_000239ee();
    FUN_000390af();
  }
  return CONCAT44(in_EDX,(uint)(cVar1 != -1));
}

/******************************************************************************
 * Function : sub_0699e0 (Ghidra: FUN_000699e0)
 * Prototype: undefined4 sub_0699e0(void);
 * Address  : 0x699e0 (Size: 50 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x689a7
 * Callees  : 1 -> 0x390e3
 ******************************************************************************/
undefined4 FUN_000699e0(void)

{
  int in_EDX;
  
  FUN_000390e3(*(undefined2 *)(&DAT_002eb402 + in_EDX * 10));
  return 1;
}

/******************************************************************************
 * Function : sub_069a12 (Ghidra: FUN_00069a12)
 * Prototype: undefined4 sub_069a12(void);
 * Address  : 0x69a12 (Size: 47 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5d35c, 0x7a535
 * Callees  : 2 -> 0x21056, 0x40ee4
 ******************************************************************************/
undefined4 FUN_00069a12(void)

{
  byte in_AL;
  int iVar1;
  
  iVar1 = (uint)in_AL * 0x4ef;
  (&DAT_0019d0f4)[iVar1] = 1;
  (&DAT_0019d0f3)[iVar1] = in_AL;
  (&DAT_0019d0c8)[iVar1] = (&DAT_0019d0c8)[iVar1] | 0x41;
  FUN_00040ee4();
  FUN_00021056();
  return 1;
}

/******************************************************************************
 * Function : sub_069a41 (Ghidra: FUN_00069a41)
 * Prototype: void sub_069a41(void);
 * Address  : 0x69a41 (Size: 79 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00069a41(void)

{
  byte in_AL;
  uint uVar1;
  
  uVar1 = DAT_002e6ec6;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return;
    }
    if (((&DAT_001acd79)[(uint)*(byte *)(uVar1 + 0x1a) * 0x1d] != '\0') &&
       ((int)*(char *)(uVar1 + 6) == (uint)in_AL)) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 0x67);
  }
  (&DAT_002e0589)[(uint)in_AL * 0xa84] = *(undefined2 *)(uVar1 + 0x1b);
  return;
}

