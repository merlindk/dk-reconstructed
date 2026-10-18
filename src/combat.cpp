/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: combat.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 15
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_015861 (Ghidra: FUN_00015861)
 * Prototype: void sub_015861(void);
 * Address  : 0x15861 (Size: 69 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x15502
 ******************************************************************************/
void FUN_00015861(void)

{
  uint *puVar1;
  int iVar2;
  uint extraout_ECX;
  uint in_EDX;
  uint unaff_EBX;
  
  FUN_00015502();
  iVar2 = ((in_EDX & 0xff) + (unaff_EBX & 0xff) * 0x100) * 5;
  *(undefined1 *)((int)&DAT_00279203 + iVar2 + 1) = 0;
  *(byte *)((int)&DAT_00279205 + iVar2) = *(byte *)((int)&DAT_00279205 + iVar2) & 0xf8;
  puVar1 = (uint *)((int)&DAT_00279203 + iVar2 + 1);
  *puVar1 = *puVar1 | extraout_ECX & 0x7ff;
  *(short *)(&DAT_0019e973 + extraout_ECX * 6) = *(short *)(&DAT_0019e973 + extraout_ECX * 6) + 1;
  return;
}

/******************************************************************************
 * Function : sub_0158a6 (Ghidra: FUN_000158a6)
 * Prototype: void sub_0158a6(void);
 * Address  : 0x158a6 (Size: 167 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 2 -> 0x15318, 0x157ac
 ******************************************************************************/
void FUN_000158a6(void)

{
  byte bVar1;
  char cVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  short *extraout_EDX;
  
  psVar6 = (short *)&DAT_0019e98b;
  do {
    psVar3 = psVar6;
    if (*psVar6 != 0) {
      FUN_00015318();
      cVar2 = FUN_000157ac();
      *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) & 0xf;
      *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) | cVar2 << 4;
      uVar5 = (uint)(*(byte *)(extraout_EDX + 1) >> 4);
      for (psVar3 = extraout_EDX + uVar5; ((int)uVar5 < 8 && (psVar3[4] == 0)); psVar3 = psVar3 + 1)
      {
        uVar5 = uVar5 + 1;
      }
      psVar3 = extraout_EDX;
      if ((int)uVar5 < 8) {
        psVar4 = psVar6 + 7;
        bVar1 = 0;
        do {
          if (psVar4[4] != 0) {
            *(byte *)(psVar6 + 1) = *(byte *)(psVar6 + 1) & 0xf1;
            *(byte *)(psVar6 + 1) = *(byte *)(psVar6 + 1) | (bVar1 & 7) * '\x02';
          }
          psVar4 = psVar4 + -1;
          bVar1 = bVar1 + 1;
        } while (psVar4 != psVar6);
      }
      else {
        *(byte *)(psVar6 + 1) = *(byte *)(psVar6 + 1) & 0xf1;
      }
    }
    psVar6 = psVar3 + 0xc;
  } while (psVar6 != (short *)&DAT_001aa973);
  return;
}

/******************************************************************************
 * Function : dk_get_flee_015950 (Ghidra: FUN_00015950)
 * Prototype: longlong dk_get_flee_015950(void);
 * Address  : 0x15950 (Size: 203 bytes)
 * Module   : combat.cpp [direct_file_string_xref]
 * OrigLine : combat.cpp:42 ("CANNOT GET IN FLEE"); combat.cpp:31 ("NO VALID FIGHT STATE")
 * Naming   : String 'CANNOT GET IN FLEE'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x16423, 0x1660d, 0x63b6d, 0x64a5f, 0xddaf0
 * Strings  :
 *   - 0x160471: "combat.cpp"
 *   - 0x16048f: "combat.cpp"
 *   - 0x16047c: "CANNOT GET IN FLEE"
 *   - 0x16045c: "NO VALID FIGHT STATE"
 ******************************************************************************/
longlong FUN_00015950(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = FUN_00016423();
  if (iVar2 != 0) {
    iVar2 = FUN_0001660d();
    if (iVar2 != 0) {
      cVar1 = FUN_00064a5f();
      if (cVar1 == '\0') {
        FUN_000ddaf0(); /* LbErrorLog("combat.cpp", line 42, "CANNOT GET IN FLEE") */
      }
      else {
        *(undefined4 *)(iVar3 + 0x28e) = DAT_002e8bee;
      }
      goto LAB_00015a15;
    }
    iVar3 = (uint)*(byte *)(iVar3 + 0xa6) * 4;
    if (*(int *)(&DAT_00174b84 + iVar3) != 0) {
      (**(code **)(&DAT_00174b84 + iVar3))();
      return CONCAT44(in_EDX,1);
    }
    FUN_000ddaf0(); /* LbErrorLog("combat.cpp", line 31, "NO VALID FIGHT STATE") */
  }
  FUN_00063b6d();
LAB_00015a15:
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_015a1b (Ghidra: FUN_00015a1b)
 * Prototype: undefined4 sub_015a1b(void);
 * Address  : 0x15a1b (Size: 8 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1836b
 ******************************************************************************/
undefined4 FUN_00015a1b(void)

{
  FUN_0001836b();
  return 0;
}

/******************************************************************************
 * Function : sub_015a23 (Ghidra: FUN_00015a23)
 * Prototype: void sub_015a23(void);
 * Address  : 0x15a23 (Size: 159 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x16242, 0x1629a, 0x162f2, 0x168a2, 0x18593, 0x189d4, 0x49bfc, 0x63b6d
 ******************************************************************************/
void FUN_00015a23(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000162f2();
  if (iVar1 != 0) {
    FUN_00016242();
    iVar1 = FUN_0001629a();
    if (iVar1 != 0) {
      FUN_000189d4();
      iVar1 = FUN_00018593();
      if (iVar1 != 0) {
        iVar2 = FUN_000168a2();
        if (iVar2 == 0) {
          return;
        }
        if (iVar1 < 1) {
          return;
        }
        FUN_00049bfc(0);
        return;
      }
    }
  }
  FUN_00063b6d();
  return;
}

/******************************************************************************
 * Function : sub_015ac2 (Ghidra: FUN_00015ac2)
 * Prototype: void sub_015ac2(void);
 * Address  : 0x15ac2 (Size: 117 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x16242, 0x1629a, 0x162f2, 0x169a5, 0x18607, 0x189d4
 ******************************************************************************/
void FUN_00015ac2(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000162f2();
  if (iVar1 != 0) {
    FUN_00016242();
    iVar1 = FUN_0001629a();
    if (iVar1 != 0) {
      FUN_000189d4();
      iVar1 = FUN_00018607();
      if (iVar1 != 0) {
        iVar2 = FUN_000169a5();
        if (iVar2 == 0) {
          return;
        }
        if (iVar1 < 1) {
          return;
        }
        FUN_00049bfc(0);
        return;
      }
    }
  }
  FUN_00063b6d();
  return;
}

/******************************************************************************
 * Function : sub_015b37 (Ghidra: FUN_00015b37)
 * Prototype: void sub_015b37(void);
 * Address  : 0x15b37 (Size: 173 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x16242, 0x1629a, 0x162f2, 0x16b29, 0x16d38, 0x18938, 0x189d4, 0x63b6d, 0x84f04
 ******************************************************************************/
void FUN_00015b37(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_00018938();
  if (iVar1 == 0) {
    if ((((((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 7) == 0) &&
         (*(char *)(in_EAX + 0x1a) != '\x17')) && (iVar1 = FUN_00084f04(), iVar1 != 0)) &&
       (iVar1 = FUN_00016d38(), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_000162f2();
    if (iVar1 != 0) {
      FUN_00016242();
      iVar1 = FUN_0001629a();
      if (iVar1 != 0) {
        FUN_000189d4();
        FUN_00016b29();
        return;
      }
    }
    FUN_00063b6d();
  }
  return;
}

/******************************************************************************
 * Function : sub_015be4 (Ghidra: FUN_00015be4)
 * Prototype: undefined8 sub_015be4(void);
 * Address  : 0x15be4 (Size: 408 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x1781a, 0x18087, 0x63b6d, 0xb4ac4, 0xb5264, 0xdc440
 ******************************************************************************/
undefined8 FUN_00015be4(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_EDX;
  int iVar5;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar6 = DAT_002e8bee - *(int *)(iVar3 + 0x28e);
  iVar2 = FUN_000dc440();
  if (iVar2 < 0x600) {
    if (8 < iVar6) {
      iVar3 = FUN_0001781a();
      if (0 < iVar3) {
        FUN_00018087();
        goto LAB_00015ab2;
      }
    }
    if (iVar6 <= (int)(uint)DAT_002ebc44) {
LAB_00015c5e:
      sVar1 = FUN_000b5264();
      if (sVar1 != 0) {
        *(undefined1 *)(in_EAX + 8) = 0x57;
      }
      goto LAB_00015ab2;
    }
  }
  else {
    if (((*(char *)(iVar3 + 0x1b) != '\0') || (*(char *)(iVar3 + 0x1c) != '\0')) ||
       (iVar2 = (uint)(byte)(&DAT_002e9116)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] *
                ((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] +
                (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                      (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] * 0x23) /
                100), iVar5 = iVar2 >> 0x1f,
       (int)*(short *)(in_EAX + 0x5e) <
       (int)((iVar2 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8)) {
      iVar2 = FUN_000b4ac4(0);
      if (iVar2 == -1) {
        *(undefined4 *)(iVar3 + 0x288) = *(undefined4 *)(in_EAX + 0xd);
        *(undefined2 *)(iVar3 + 0x28c + (uint)bVar7 * -8) =
             *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
      }
      *(int *)(iVar3 + 0x28e) = DAT_002e8bee;
      goto LAB_00015ab2;
    }
    if (iVar6 <= (int)(uint)DAT_002ebc44) {
      uVar4 = (int)(uint)DAT_002ebc44 >> 2;
      if (uVar4 < 0x32) {
        uVar4 = 0x32;
      }
      if (iVar6 <= (int)uVar4) {
        iVar2 = FUN_000b4ac4(0);
        if (iVar2 == -1) {
          *(undefined4 *)(iVar3 + 0x288) = *(undefined4 *)(in_EAX + 0xd);
          *(undefined2 *)(iVar3 + 0x28c + (uint)bVar7 * -8) =
               *(undefined2 *)(in_EAX + 0x11 + (uint)bVar7 * -8);
        }
        goto LAB_00015ab2;
      }
      goto LAB_00015c5e;
    }
  }
  FUN_00063b6d();
LAB_00015ab2:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_015d7c (Ghidra: FUN_00015d7c)
 * Prototype: undefined4 sub_015d7c(void);
 * Address  : 0x15d7c (Size: 56 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15db4
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
undefined4 FUN_00015d7c(void)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_000e69fc();
  if (uVar1 < 0xc) {
    if (uVar1 < 4) {
      return 0;
    }
    if (uVar1 < 7) {
      return 1;
    }
    bVar2 = uVar1 == 9;
  }
  else {
    if (uVar1 < 0xd) {
      return 1;
    }
    if (uVar1 < 0x13) {
      bVar2 = uVar1 == 0x11;
    }
    else {
      if (uVar1 < 0x15) {
        return 1;
      }
      bVar2 = uVar1 == 0x1b;
    }
  }
  if (!bVar2) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_015db4 (Ghidra: FUN_00015db4)
 * Prototype: longlong sub_015db4(void);
 * Address  : 0x15db4 (Size: 63 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x16175, 0x1629a, 0x16376, 0x169a5, 0x16b29, 0x173e8, 0x17e02, 0x17e7e
 * Callees  : 1 -> 0x15d7c
 ******************************************************************************/
longlong FUN_00015db4(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 1;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  do {
    if (0x2f < iVar2) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (*(char *)(iVar1 + 0x19f) != '\0') {
      uVar3 = FUN_00015d7c();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        return CONCAT44(in_EDX,1);
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_015df9 (Ghidra: FUN_00015df9)
 * Prototype: undefined4 sub_015df9(void);
 * Address  : 0x15df9 (Size: 51 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15e26
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
undefined4 FUN_00015df9(void)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_000e69fc();
  if (uVar1 < 0x11) {
    if (uVar1 < 4) {
      return 0;
    }
    if (uVar1 < 7) {
      return 1;
    }
    bVar2 = uVar1 == 9;
  }
  else {
    if (uVar1 < 0x12) {
      return 1;
    }
    if (uVar1 < 0x13) {
      return 0;
    }
    if (uVar1 < 0x15) {
      return 1;
    }
    bVar2 = uVar1 == 0x1b;
  }
  if (!bVar2) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_015e26 (Ghidra: FUN_00015e26)
 * Prototype: longlong sub_015e26(void);
 * Address  : 0x15e26 (Size: 63 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x16cd0, 0x16f23
 * Callees  : 1 -> 0x15df9
 ******************************************************************************/
longlong FUN_00015e26(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 1;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  do {
    if (0x2f < iVar2) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (*(char *)(iVar1 + 0x19f) != '\0') {
      uVar3 = FUN_00015df9();
      iVar2 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar3 != 0) {
        return CONCAT44(in_EDX,1);
      }
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_015e65 (Ghidra: FUN_00015e65)
 * Prototype: longlong sub_015e65(void);
 * Address  : 0x15e65 (Size: 77 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x15eb2, 0x63dd3
 * Callees  : 1 -> 0x64c4d
 ******************************************************************************/
longlong FUN_00015e65(void)

{
  char cVar1;
  int in_EAX;
  uint in_EDX;
  
  if ((((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 2) == 0) &&
      ((int)*(char *)(in_EAX + 6) != (uint)DAT_002eb543)) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 2) == 0)) {
    cVar1 = FUN_00064c4d();
    if (cVar1 != '\0') {
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_015eb2 (Ghidra: FUN_00015eb2)
 * Prototype: longlong sub_015eb2(void);
 * Address  : 0x15eb2 (Size: 37 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15ed7
 * Callees  : 1 -> 0x15e65
 ******************************************************************************/
longlong FUN_00015eb2(void)

{
  int in_EAX;
  undefined4 uVar1;
  char cVar2;
  uint in_EDX;
  
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar2 = *(char *)(in_EAX + 8);
  }
  else {
    cVar2 = *(char *)(in_EAX + 7);
  }
  if (cVar2 != 'W') {
    uVar1 = FUN_00015e65();
    return CONCAT44(in_EDX,uVar1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_015ed7 (Ghidra: FUN_00015ed7)
 * Prototype: longlong sub_015ed7(void);
 * Address  : 0x15ed7 (Size: 27 bytes)
 * Module   : combat.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1b88
 * Callees  : 1 -> 0x15eb2
 ******************************************************************************/
longlong FUN_00015ed7(void)

{
  int in_EAX;
  undefined4 uVar1;
  uint in_EDX;
  
  if (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 7) == 0) {
    uVar1 = FUN_00015eb2();
    return CONCAT44(in_EDX,uVar1);
  }
  return (ulonglong)in_EDX << 0x20;
}

