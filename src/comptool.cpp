/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: comptool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_01d917 (Ghidra: FUN_0001d917)
 * Prototype: undefined8 sub_01d917(void);
 * Address  : 0x1d917 (Size: 79 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x19d32, 0x1b119, 0x1e38d
 * Callees  : 1 -> 0x1d5f7
 ******************************************************************************/
undefined8 FUN_0001d917(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  iVar2 = FUN_0001d5f7();
  for (uVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x2d)]; DAT_001ae9fc < uVar3;
      uVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0x1f)]) {
    iVar2 = iVar2 - (uint)*(ushort *)(&DAT_002e91a5 + (uint)*(byte *)(uVar3 + 0x1a) * 0xe6);
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_01d966 (Ghidra: FUN_0001d966)
 * Prototype: uint sub_01d966(void);
 * Address  : 0x1d966 (Size: 563 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1b3d7
 * Callees  : 1 -> 0x1dd33
 ******************************************************************************/
uint FUN_0001d966(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  int extraout_ECX;
  int in_EDX;
  byte bVar7;
  int unaff_EBX;
  undefined1 *puVar8;
  uint uVar9;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  iVar1 = *(int *)(in_EAX + 0x24);
  uVar9 = 1 << (*(byte *)(iVar1 + 0xe9f) & 0x1f);
  uVar2 = ((in_EDX - in_ECX / 2) / 3) * 3;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  local_14 = ((unaff_EBX - in_ECX / 2) / 3) * 3;
  if ((int)local_14 < 0) {
    local_14 = 0;
  }
  uVar3 = ((in_ECX / 2 + in_EDX) / 3) * 3;
  if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  uVar4 = ((in_ECX / 2 + unaff_EBX) / 3) * 3;
  if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  local_20 = local_14 << 2;
  do {
    if (uVar4 <= local_14) {
      if (uVar9 == 1 << (*(byte *)(iVar1 + 0xe9f) & 0x1f)) {
        return 0xffffffff;
      }
      return uVar9;
    }
    local_1c = uVar2 << 2;
    for (local_18 = uVar2; local_18 < uVar3; local_18 = local_18 + 3) {
      bVar7 = (&DAT_002d33ca)
              [(*(int *)((int)&DAT_0019033b + local_20) * 0x55 +
               *(int *)((int)&DAT_0019033b + local_1c)) * 6] & 7;
      if (((uint)bVar7 != (int)*(char *)(iVar1 + 0xe9f)) &&
         (((bVar7 != DAT_002eb543 ||
           ((((&DAT_001921c6)
              [(uint)(byte)(&DAT_002d33c5)[(local_18 / 3 + (local_14 / 3) * 0x55) * 6] * 0x16] &
             0x29) == 0 &&
            ((byte)(&DAT_002d33c5)[(local_18 / 3 + (local_14 / 3) * 0x55) * 6] != 0xc)))) &&
          ((uVar9 & 1 << bVar7) == 0)))) {
        iVar5 = FUN_0001dd33();
        if (iVar5 != 0) {
          iVar5 = in_EAX + extraout_ECX * 0x18a;
          puVar8 = (undefined1 *)
                   (*(short *)(iVar5 + 0xa14) * 6 + in_EAX + extraout_ECX * 0x18a + 0xa1a);
          *(short *)(iVar5 + 0xa14) = (short)((*(short *)(iVar5 + 0xa14) + 1) % 0x40);
          *(undefined4 *)(iVar5 + 0xa10) = DAT_002e8bee;
          puVar8[1] = (undefined1)local_18;
          *puVar8 = 0;
          puVar8[2] = 0;
          puVar8[3] = (undefined1)local_14;
          uVar9 = uVar9 | 1 << bVar7;
          uVar6 = (1 << (DAT_002eb543 + 1 & 0x1f)) - 1;
          if (uVar9 == uVar6) {
            return uVar6;
          }
        }
      }
      local_1c = local_1c + 0xc;
    }
    local_20 = local_20 + 0xc;
    local_14 = local_14 + 3;
  } while( true );
}

/******************************************************************************
 * Function : sub_01db99 (Ghidra: FUN_0001db99)
 * Prototype: undefined4 sub_01db99(void);
 * Address  : 0x1db99 (Size: 35 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1ab14, 0x1ab74, 0x1e5de
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001db99(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x24) + in_EDX;
  if (*(char *)(iVar1 + 0xf8f) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (*(char *)(iVar1 + 0xf7e) != '\x01') {
      return 4;
    }
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_01dbbc (Ghidra: FUN_0001dbbc)
 * Prototype: void sub_01dbbc(void);
 * Address  : 0x1dbbc (Size: 375 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x18ffe, 0x1b561, 0x1b629
 * Callees  : 3 -> 0x1ddd4, 0x401aa, 0xe69fc
 ******************************************************************************/
void FUN_0001dbbc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int *piVar4;
  int *in_EDX;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined8 uVar8;
  int local_20;
  int *local_1c;
  int local_18;
  
  iVar7 = 0;
  piVar4 = in_EDX;
  iVar5 = in_EAX;
  do {
    iVar3 = *(int *)(iVar5 + 0xa16);
    piVar4[2] = 0;
    piVar4[3] = 0x7fffffff;
    *piVar4 = iVar3;
    iVar5 = iVar5 + 0x18a;
    piVar4[1] = iVar7;
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 4;
  } while (iVar7 < 5);
  iVar5 = 0;
  piVar4 = in_EDX;
  do {
    if (*piVar4 < piVar4[4]) {
      iVar7 = *piVar4;
      iVar3 = piVar4[1];
      iVar1 = piVar4[2];
      iVar2 = piVar4[3];
      *piVar4 = piVar4[4];
      piVar4[1] = piVar4[5];
      piVar4[2] = piVar4[6];
      piVar4[3] = piVar4[7];
      piVar4[4] = iVar7;
      piVar4[5] = iVar3;
      piVar4[6] = iVar1;
      piVar4[7] = iVar2;
    }
    piVar4 = piVar4 + 4;
  } while ((piVar4 != in_EDX + 0x10) || (iVar5 = iVar5 + 1, piVar4 = in_EDX, iVar5 < 5));
  local_1c = in_EDX;
  do {
    iVar5 = local_1c[1] * 0x18a + in_EAX + 0xa10;
    local_18 = (int)*(short *)(iVar5 + 4);
    if (local_18 != 0) {
      local_18 = local_18 + -1;
    }
    local_20 = 0;
    do {
      psVar6 = (short *)(local_18 * 6 + iVar5 + 10);
      if (*psVar6 != 0) {
        iVar7 = FUN_0001ddd4();
        if ((iVar7 == 0x19) || (iVar7 = FUN_000401aa(), -1 < iVar7)) {
          *psVar6 = 0;
        }
        else {
          FUN_000e69fc();
          uVar8 = FUN_000e69fc();
          iVar7 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
          if (iVar7 <= local_1c[3]) {
            local_1c[3] = iVar7;
            local_1c[2] = (int)psVar6;
          }
        }
      }
      local_18 = (local_18 + 1) % 0x40;
      local_20 = local_20 + 1;
    } while (local_20 < 0x40);
    local_1c = local_1c + 4;
  } while (local_1c != in_EDX + 0x14);
  return;
}

/******************************************************************************
 * Function : sub_01dd33 (Ghidra: FUN_0001dd33)
 * Prototype: undefined4 sub_01dd33(void);
 * Address  : 0x1dd33 (Size: 161 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x18e3c, 0x1b762, 0x1c3d3, 0x1c73c, 0x1d966
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001dd33(void)

{
  int in_EAX;
  int in_EDX;
  uint unaff_EBX;
  
  if (((((&DAT_002d33ca)[((&DAT_0019033b)[in_EAX] + (&DAT_0019033b)[in_EDX] * 0x55) * 6] & 7) ==
        unaff_EBX) || (unaff_EBX == 0xffffffff)) &&
     (((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] * 0x16]
        & 0x10) == 0 && ((byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] != 0xc)) ||
      (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] * 0x16]
       & 2) != 0)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01ddd4 (Ghidra: FUN_0001ddd4)
 * Prototype: int sub_01ddd4(void);
 * Address  : 0x1ddd4 (Size: 184 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1d10e, 0x1d807, 0x1dbbc
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_0001ddd4(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  int iVar4;
  code *in_ECX;
  uint uVar5;
  uint extraout_ECX;
  int unaff_EBX;
  int iVar6;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_10;
  
  iVar6 = 0;
  local_20 = 0;
  local_1c = 0;
  bVar3 = false;
  local_10 = (uint)*(byte *)(in_EAX + 3);
  uVar5 = (uint)*(byte *)(in_EAX + 1);
  do {
    if (bVar3) {
      local_1c = local_1c + 1;
    }
    iVar1 = *(int *)(&DAT_00174dd0 + local_20 * 8);
    iVar2 = *(int *)(&DAT_00174dd4 + local_20 * 8);
    for (local_18 = local_1c; local_18 != 0; local_18 = local_18 + -1) {
      if ((uVar5 < 0xff) && (local_10 < 0xff)) {
        iVar4 = (*in_ECX)();
        if (iVar4 != 0) {
          *(char *)(in_EAX + 1) = (char)extraout_ECX;
          *(undefined1 *)(in_EAX + 3) = (undefined1)local_10;
          if (iVar4 == -1) {
            iVar6 = -iVar6;
          }
          return iVar6;
        }
        iVar6 = iVar6 + 1;
        uVar5 = extraout_ECX;
        if (unaff_EBX <= iVar6) {
          return iVar6;
        }
      }
      uVar5 = uVar5 + iVar1;
      local_10 = local_10 + iVar2;
    }
    local_20 = local_20 + 1 & 3;
    bVar3 = (bool)(bVar3 ^ 1);
  } while( true );
}

/******************************************************************************
 * Function : sub_01de8c (Ghidra: FUN_0001de8c)
 * Prototype: undefined4 sub_01de8c(void);
 * Address  : 0x1de8c (Size: 156 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x197a9, 0x1ff84
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
undefined4 FUN_0001de8c(void)

{
  ushort uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *extraout_ECX;
  int *in_EDX;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_14;
  
  iVar8 = *(int *)(in_EAX + 0x24);
  iVar9 = 0;
  *in_EDX = 0;
  uVar2 = (uint)*(byte *)(unaff_EBX + 1);
  local_14 = 0xffffffff;
  uVar3 = (uint)*(byte *)(unaff_EBX + 3);
  iVar6 = iVar8 + 0x22;
  do {
    uVar1 = *(ushort *)(iVar8 + 0xb);
    while (&DAT_002ddd1b < &DAT_002ddd1b + (uint)uVar1 * 0x45) {
      iVar4 = FUN_000e69fc(iVar6,uVar3,uVar2);
      uVar10 = FUN_000e69fc();
      iVar7 = (int)((ulonglong)uVar10 >> 0x20);
      uVar5 = (int)uVar10 + iVar4;
      if (uVar5 < local_14) {
        iVar9 = iVar7;
        local_14 = uVar5;
      }
      in_EDX = extraout_ECX;
      uVar1 = *(ushort *)(iVar7 + 6);
    }
    iVar8 = iVar8 + 2;
  } while (iVar8 != iVar6);
  if (iVar9 != 0) {
    *in_EDX = iVar9;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01df65 (Ghidra: FUN_0001df65)
 * Prototype: undefined4 sub_01df65(int param_1);
 * Address  : 0x1df65 (Size: 252 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1d10e
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
undefined4 FUN_0001df65(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (in_ECX <= param_1) {
    in_ECX = param_1;
  }
  iVar5 = in_EDX + in_ECX * -3;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  uVar2 = *(ushort *)(in_EAX + 0x14c6);
  do {
    iVar3 = (uint)uVar2 * 0x94;
    if (&DAT_002c9203 + iVar3 < &DAT_002c9204) {
      return 1;
    }
    cVar1 = (&DAT_002c9205)[iVar3];
    if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
      sVar4 = *(short *)(&DAT_002c927f + iVar3);
      if (sVar4 <= *(short *)(&DAT_002c9281 + iVar3)) {
        sVar4 = *(short *)(&DAT_002c9281 + iVar3);
      }
      iVar8 = sVar4 * 3;
      iVar6 = (uint)(byte)(&DAT_002c9268)[iVar3] - iVar8 / 2;
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      uVar7 = FUN_000e69fc(iVar8,iVar6,iVar5);
      if (((int)uVar7 <= (int)((ulonglong)uVar7 >> 0x20)) &&
         (uVar7 = FUN_000e69fc(iVar8,iVar6,iVar5), (int)uVar7 <= (int)((ulonglong)uVar7 >> 0x20))) {
        return 0;
      }
    }
    uVar2 = *(ushort *)(&DAT_002c9295 + iVar3);
  } while( true );
}

/******************************************************************************
 * Function : sub_01e061 (Ghidra: FUN_0001e061)
 * Prototype: undefined4 sub_01e061(void);
 * Address  : 0x1e061 (Size: 184 bytes)
 * Module   : comptool.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x1a08c, 0x1a158, 0x1a4a1, 0x1e119, 0x1e226
 * Callees  : 1 -> 0xdc19c
 ******************************************************************************/
undefined4 FUN_0001e061(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined1 *in_EDX;
  int iVar6;
  char local_20;
  char local_1c;
  int local_18;
  
  local_18 = 0;
  do {
    if (0x11 < local_18) {
      return 0;
    }
    cVar1 = (&DAT_0018b65c)[local_18];
    cVar2 = in_EDX[1];
    cVar3 = (&DAT_0018b65d)[local_18];
    cVar4 = in_EDX[3];
    for (iVar6 = 0; iVar6 < 0x12; iVar6 = iVar6 + 2) {
      local_20 = cVar2 + cVar1 * '\x03' + (&DAT_0018b65c)[iVar6];
      local_1c = cVar4 + cVar3 * '\x03' + (&DAT_0018b65d)[iVar6];
      iVar5 = FUN_000dc19c();
      if (iVar5 == 1) {
        in_EDX[1] = local_20;
        *in_EDX = 0x80;
        in_EDX[2] = 0x80;
        in_EDX[3] = local_1c;
        return 1;
      }
    }
    local_18 = local_18 + 2;
  } while( true );
}

/******************************************************************************
 * Function : dk_computer_thing_hand_01e119 (Ghidra: FUN_0001e119)
 * Prototype: undefined4 dk_computer_thing_hand_01e119(void);
 * Address  : 0x1e119 (Size: 269 bytes)
 * Module   : comptool.cpp [direct_file_string_xref]
 * OrigLine : comptool.cpp:715
 * Naming   : String 'COMPUTER INVALID THING FOR HAND C%d M%d'
 * Callers  : 4 -> 0x1c73c, 0x1c7fa, 0x1c897, 0x1cc83
 * Callees  : 9 -> 0x1e061, 0x49dd9, 0x64a5f, 0x81eac, 0x84d98, 0x84ff8, 0xc57c4, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1624e4: "comptool.cpp"
 *   - 0x162520: "comptool.cpp"
 *   - 0x1624bc: "COMPUTER INVALID THING FOR HAND C%d M%d"
 *   - 0x1624f1: "COMPUTER TRIES TO PICK UP INVALID CREATURE M%d"
 ******************************************************************************/
undefined4 FUN_0001e119(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  byte *in_EDX;
  
  if ((in_EDX[0x1f] == 5) || ((in_EDX[0x1f] == 1 && (iVar2 = FUN_000c57c4(), iVar2 != 0)))) {
    iVar2 = FUN_00084ff8();
    if (iVar2 != 0) {
      if ((*in_EDX & 0x20) != 0) {
        return 0;
      }
      iVar2 = FUN_0001e061();
      if (iVar2 == 0) {
        return 0;
      }
      cVar1 = FUN_00084d98();
      if (cVar1 == '\0') {
        return 0;
      }
      if (in_EDX[0x1f] == 5) {
        FUN_00049dd9();
        FUN_00064a5f();
      }
      FUN_00081eac();
      *(undefined2 *)(in_EAX + 0x14c8) = *(undefined2 *)(in_EDX + 0x1b);
      *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + -1;
      return 1;
    }
    FUN_000e7714(&DAT_0019cbac,s_COMPUTER_TRIES_TO_PICK_UP_INVALI_001624f1,in_EDX[0x1a]);
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s_COMPUTER_INVALID_THING_FOR_HAND_C_001624bc,in_EDX[0x1f],
                 in_EDX[0x1a]);
  }
  FUN_000ddaf0(); /* LbErrorLog("comptool.cpp", line 715, g_log_buf) */
  return 0;
}

/******************************************************************************
 * Function : dk_thing_held_computer_unconsious_01e226 (Ghidra: FUN_0001e226)
 * Prototype: undefined4 dk_thing_held_computer_unconsious_01e226(void);
 * Address  : 0x1e226 (Size: 284 bytes)
 * Module   : comptool.cpp [direct_file_string_xref]
 * OrigLine : comptool.cpp:758 ("Thing Held By computer is unconsious")
 * Naming   : String 'Thing Held By computer is unconsious'
 * Callers  : 4 -> 0x1c73c, 0x1c7fa, 0x1c897, 0x1cc83
 * Callees  : 7 -> 0x1e061, 0x64b0c, 0x81ec8, 0x84d98, 0xb28e8, 0xb33e4, 0xddaf0
 * Strings  :
 *   - 0x162552: "comptool.cpp"
 *   - 0x16252d: "Thing Held By computer is unconsious"
 ******************************************************************************/
undefined4 FUN_0001e226(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int iVar3;
  int extraout_EDX;
  int unaff_EBX;
  byte bVar4;
  undefined4 local_18;
  short local_14 [2];
  
  bVar4 = 0;
  if (*(char *)(in_EDX + 7) == 'C') {
    FUN_000ddaf0(); /* LbErrorLog("comptool.cpp", line 758, "Thing Held By computer is unconsious") */
  }
  iVar2 = FUN_0001e061();
  if (iVar2 != 0) {
    cVar1 = FUN_00084d98();
    if (cVar1 != '\0') {
      local_18 = CONCAT22((ushort)*(byte *)(unaff_EBX + 3) * 0x100 + 0x80,
                          (ushort)*(byte *)(unaff_EBX + 1) * 0x100 + 0x80);
      local_14[0] = 0;
      local_14[0] = FUN_000b28e8();
      iVar2 = FUN_000b33e4();
      iVar3 = (uint)*(ushort *)(in_EDX + 0x58) + (int)local_14[0];
      if (iVar3 < iVar2) {
        iVar2 = iVar2 - iVar3;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x300 < iVar2) {
          iVar2 = 0x300;
        }
        *(undefined4 *)(in_EDX + 0xd) = local_18;
        *(short *)(in_EDX + 0x11 + (uint)bVar4 * -8) = local_14[(uint)bVar4 * -4];
        *(short *)(in_EDX + 0x11) = *(short *)(in_EDX + 0x11) + (short)iVar2;
        FUN_00081ec8();
        if (*(char *)(extraout_EDX + 0x1f) == '\x05') {
          FUN_00064b0c();
        }
        *(undefined2 *)(in_EAX + 0x14c8) = 0;
        *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + -1;
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_01e342 (Ghidra: FUN_0001e342)
 * Prototype: byte * sub_01e342(void);
 * Address  : 0x1e342 (Size: 75 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_0001e342(void)

{
  uint in_EAX;
  byte *pbVar1;
  uint in_EDX;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = -0x80000000;
  pbVar2 = (byte *)0x0;
  for (pbVar1 = &DAT_002e707c; pbVar1 < &DAT_002e78b0; pbVar1 = pbVar1 + 0x15) {
    if (((((*pbVar1 & 1) != 0) && (in_EAX == pbVar1[0xb])) &&
        ((in_EDX == pbVar1[10] || (in_EDX == 0xffffffff)))) && (iVar3 < *(int *)(pbVar1 + 0x10))) {
      iVar3 = *(int *)(pbVar1 + 0x10);
      pbVar2 = pbVar1;
    }
  }
  return pbVar2;
}

/******************************************************************************
 * Function : sub_01e38d (Ghidra: FUN_0001e38d)
 * Prototype: undefined4 sub_01e38d(void);
 * Address  : 0x1e38d (Size: 152 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x18e3c, 0x18ffe, 0x1916a, 0x1a158, 0x1a4a1, 0x1a60d, 0x1a68b, 0x1b35a, 0x1b762, 0x1ca68 ...
 * Callees  : 1 -> 0x1d917
 ******************************************************************************/
undefined4 FUN_0001e38d(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  bool bVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(in_EAX + 0x24) + in_EDX;
  if (*(char *)(iVar1 + 0xff4) == '\0') {
    return 0xffffffff;
  }
  if (*(char *)(iVar1 + 0xfe0) != '\0') {
    uVar5 = FUN_0001d917();
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar2 == 2) {
      iVar2 = *(char *)(*(int *)(in_EAX + 0x24) + 0xe9f) * 0x1508;
      iVar2 = ((byte)(&DAT_002e0ea1)[iVar2] + 1) - (uint)(byte)(&DAT_002e0e76)[iVar2];
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      iVar3 = (iVar2 * DAT_002eaea9) / 2;
      iVar2 = iVar1 - iVar3;
      bVar4 = iVar1 == iVar3;
    }
    else {
      iVar3 = extraout_ECX * *(int *)(&DAT_002eae11 + unaff_EBX * 4 + iVar2 * 0x4c);
      iVar2 = iVar1 - iVar3;
      bVar4 = iVar2 == 0;
    }
    if (!bVar4 && SBORROW4(iVar1,iVar3) == iVar2 < 0) {
      return 1;
    }
    return 0;
  }
  return 4;
}

/******************************************************************************
 * Function : sub_01e425 (Ghidra: FUN_0001e425)
 * Prototype: undefined1 * sub_01e425(void);
 * Address  : 0x1e425 (Size: 131 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x18ffe
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_0001e425(void)

{
  int in_EDX;
  uint uVar1;
  int iVar2;
  byte local_14 [4];
  
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar1 = DAT_002e8bf6 >> 0xd;
  iVar2 = 0;
  DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
  uVar1 = (uint)local_14[uVar1 & 3];
  while( true ) {
    if (0x10 < iVar2) {
      return (undefined1 *)0x0;
    }
    if (&DAT_002ddd1b <
        &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + uVar1 * 2 + in_EDX * 0x1508) * 0x45)
    break;
    iVar2 = iVar2 + 1;
    uVar1 = (int)(uVar1 + 1) % 0x11;
  }
  return &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + uVar1 * 2 + in_EDX * 0x1508) * 0x45;
}

/******************************************************************************
 * Function : sub_01e4a8 (Ghidra: FUN_0001e4a8)
 * Prototype: int sub_01e4a8(void);
 * Address  : 0x1e4a8 (Size: 310 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1a08c
 * Callees  : 2 -> 0xcfc48, 0xe69fc
 ******************************************************************************/
int FUN_0001e4a8(void)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBX;
  undefined8 uVar6;
  
  iVar5 = 0;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  do {
    pbVar2 = (&DAT_001ae9fc)[uVar1];
    if (pbVar2 <= DAT_001ae9fc) {
      return iVar5;
    }
    if (((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) && (pbVar2[7] != 0x43)) &&
       (*(char *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 3) == '\0')) {
      if (pbVar2[7] == 0xe) {
        bVar3 = pbVar2[8];
      }
      else {
        bVar3 = pbVar2[7];
      }
      if (bVar3 != 0x27) {
        if (pbVar2[7] == 0xe) {
          bVar3 = pbVar2[8];
        }
        else {
          bVar3 = pbVar2[7];
        }
        if (bVar3 != 0x74) {
          if (pbVar2[7] == 0xe) {
            bVar3 = pbVar2[8];
          }
          else {
            bVar3 = pbVar2[7];
          }
          if (bVar3 != 0x5b) {
            if (pbVar2[7] == 0xe) {
              bVar3 = pbVar2[8];
            }
            else {
              bVar3 = pbVar2[7];
            }
            if (((&DAT_0018c4be)[(uint)bVar3 * 0x29] != '\x01') || (in_ECX != 0)) {
              if (unaff_EBX == 0) {
                FUN_000e69fc();
                uVar6 = FUN_000e69fc();
                iVar5 = extraout_ECX_00;
                if (1 < (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20)) goto LAB_0001e585;
              }
              else {
                iVar4 = FUN_000cfc48();
                iVar5 = extraout_ECX;
                if (iVar4 != 0) {
LAB_0001e585:
                  iVar5 = iVar5 + 1;
                }
              }
            }
          }
        }
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_01e5de (Ghidra: FUN_0001e5de)
 * Prototype: undefined4 sub_01e5de(void);
 * Address  : 0x1e5de (Size: 2845 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x1ae5c, 0x1b15c, 0x1bb96, 0x1c0ec, 0x1c1f1, 0x1c3d3, 0x1ca08, 0x1d807
 * Callees  : 7 -> 0x1db99, 0x1df28, 0x21548, 0x216d8, 0x401aa, 0xdc354, 0xe66ec
 ******************************************************************************/
undefined4 FUN_0001e5de(void)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  int in_EAX;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int in_ECX;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar12;
  int extraout_ECX_01;
  undefined4 *in_EDX;
  int unaff_EBX;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar17;
  uint *puVar18;
  byte bVar19;
  uint auStack_58 [5];
  ushort local_18;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 *puVar16;
  
  bVar19 = 0;
  puVar14 = &stack0xffffffbc;
  iVar11 = *(int *)(in_EAX + 0x24);
  *(int *)((int)in_EDX + 0x46) = *(int *)((int)in_EDX + 0x46) + 1;
  if (0x163 < *(int *)((int)in_EDX + 0x46)) {
    return 0xfffffffe;
  }
  uVar5 = (*(byte *)((int)in_EDX + 0xd) / 3) * 3;
  uVar6 = (*(byte *)((int)in_EDX + 0xf) / 3) * 3;
  auStack_58[4] = 0x1e647;
  uVar7 = FUN_000e66ec();
  local_18 = (ushort)((int)((uVar7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9);
  auStack_58[4] = 0x1e67d;
  iVar8 = FUN_000dc354();
  sVar3 = 0;
  if ((int)in_EDX[6] < iVar8) {
    auStack_58[4] = (uint)*(byte *)(in_EDX + 7);
    auStack_58[3] = 0x1ef3b;
    iVar8 = FUN_00021548();
    if (iVar8 == -1) {
      return 0xfffffffe;
    }
    uVar5 = (short)((iVar8 % 0x100) / 3) * 3;
    iVar8 = (iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0);
    uVar13 = (int)(CONCAT44(iVar8 >> 0x1f,iVar8 >> 8) / 3) * 3;
    uVar12 = uVar13 & 0xffff;
    uVar7 = (uint)uVar5;
    puVar18 = auStack_58 + 4;
    if ((((&DAT_001921d4)[(uint)(byte)(&DAT_002d33c5)[(uVar7 / 3 + (uVar12 / 3) * 0x55) * 6] * 0x16]
          != '\0') &&
        (puVar18 = auStack_58 + 4,
        (byte)(&DAT_002d33c5)[(uVar7 / 3 + (uVar12 / 3) * 0x55) * 6] != 0x34)) &&
       ((iVar8 = (uVar12 * 0x100 + uVar7) * 5, (*(byte *)((int)&DAT_00279203 + iVar8) & 0x20) == 0
        || ((puVar18 = auStack_58 + 4, (*(byte *)((int)&DAT_00279203 + iVar8) & 0x20) != 0 &&
            (puVar18 = auStack_58 + 4,
            (uint)((&DAT_002d33ca)[((&DAT_0019033b)[uVar12] * 0x55 + (&DAT_0019033b)[uVar7]) * 6] &
                  7) == (int)*(char *)(iVar11 + 0xe9f))))))) {
      auStack_58[3] = 0x1f026;
      iVar11 = FUN_000401aa();
      puVar18 = auStack_58 + 4;
      if ((iVar11 < 0) && (puVar18 = auStack_58 + 4, unaff_EBX == 0)) {
        auStack_58[3] = 1;
        auStack_58[2] = 1;
        puVar18 = auStack_58;
        auStack_58[1] = uVar13 & 0xffff;
        iVar11 = FUN_0001df28();
        if (iVar11 < 1) {
          return 0xfffffffe;
        }
      }
    }
    *(undefined4 *)((int)puVar18 + -4) = 0x1f07e;
    uVar7 = FUN_000e66ec();
    *(char *)((int)in_EDX + 0x1d) = (char)((int)((uVar7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9);
    local_10 = (undefined1)uVar5;
    *(undefined1 *)((int)in_EDX + 0x13) = local_10;
    local_14 = (undefined1)uVar13;
    *(undefined1 *)((int)in_EDX + 0x15) = local_14;
    if ((uVar5 / 3 == *(byte *)((int)in_EDX + 7) / 3) &&
       (extraout_ECX_01 / 3 == *(byte *)((int)in_EDX + 9) / 3)) {
      return 0xffffffff;
    }
    *(undefined1 *)((int)in_EDX + 0xd) = local_10;
    *(undefined1 *)((int)in_EDX + 0xf) = local_14;
    return 0;
  }
  while( true ) {
    if ((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] * 0x16]
         & 0x29) == 0) && ((byte)(&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] != 0xc)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2 && (&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] != '\r') break;
LAB_0001e73d:
    if ((&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] == '\r' ||
        (&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] == '\f') {
      if (in_ECX == 2) {
        auStack_58[4] = 0x1e790;
        iVar8 = FUN_0001db99();
        if (iVar8 == 1) goto LAB_0001e799;
      }
      goto LAB_0001e8f3;
    }
LAB_0001e799:
    if (((uint)((&DAT_002d33ca)[((&DAT_0019033b)[uVar6] * 0x55 + (&DAT_0019033b)[uVar5]) * 6] & 7)
         != (int)*(char *)(iVar11 + 0xe9f)) &&
       (((((cVar1 = (&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6], cVar1 == '+' ||
           (cVar1 == '*')) || (cVar1 == '-')) || ((cVar1 == ',' || (cVar1 == '/')))) ||
        ((cVar1 == '.' || ((cVar1 == '1' || (cVar1 == '0')))))))) goto LAB_0001e8f3;
    local_10 = (undefined1)uVar5;
    *(undefined1 *)((int)in_EDX + 0x13) = local_10;
    local_14 = (undefined1)uVar6;
    *(undefined1 *)((int)in_EDX + 0x15) = local_14;
    if ((uVar5 / 3 == *(byte *)((int)in_EDX + 7) / 3) &&
       (uVar6 / 3 == *(byte *)((int)in_EDX + 9) / 3)) {
      return 0xffffffff;
    }
    auStack_58[4] = 0x1e8a6;
    uVar7 = FUN_000e66ec();
    iVar8 = (int)((uVar7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
    local_18 = (ushort)iVar8;
    uVar5 = uVar5 + *(char *)((int)&DAT_0018b67b + iVar8 * 2 + 3) * 3;
    uVar6 = uVar6 + (char)(&DAT_0018b67f)[iVar8 * 2] * 3;
  }
  auStack_58[4] = 0x1e735;
  iVar8 = FUN_000401aa();
  if (-1 < iVar8) goto LAB_0001e73d;
LAB_0001e8f3:
  if ((&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] == '\r' ||
      (&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] == '\f') {
    auStack_58[4] = 0x1e938;
    iVar8 = FUN_0001db99();
    if (iVar8 == 1) goto LAB_0001e93d;
  }
  iVar8 = *(int *)((int)in_EDX + 0x1e);
  while( true ) {
    local_10 = (undefined1)uVar5;
    local_14 = (undefined1)uVar6;
    puVar17 = puVar14;
    if (iVar8 == 0) break;
    uVar13 = (uint)uVar6;
    uVar7 = (uint)uVar5;
    if (((((&DAT_001921d4)
           [(uint)(byte)(&DAT_002d33c5)[(uVar7 / 3 + (uVar13 / 3) * 0x55) * 6] * 0x16] == '\0') ||
         ((byte)(&DAT_002d33c5)[(uVar7 / 3 + (uVar13 / 3) * 0x55) * 6] == 0x34)) ||
        ((iVar9 = (uVar13 * 0x100 + uVar7) * 5, (*(byte *)((int)&DAT_00279203 + iVar9) & 0x20) != 0
         && (((*(byte *)((int)&DAT_00279203 + iVar9) & 0x20) == 0 ||
             ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[uVar13] * 0x55 + (&DAT_0019033b)[uVar7]) * 6]
                    & 7) != (int)*(char *)(iVar11 + 0xe9f))))))) &&
       ((((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] * 0x16]
         & 1) == 0 || (in_ECX == 0)))) break;
    if (unaff_EBX == 0) {
      *(undefined4 *)(puVar14 + -4) = 1;
      *(undefined4 *)(puVar14 + -8) = 1;
      *(uint *)(puVar14 + -0xc) = (uint)uVar6;
      puVar17 = puVar14 + -0x10;
      puVar15 = puVar14 + -0x10;
      puVar16 = puVar14 + -0x10;
      *(uint *)(puVar14 + -0x10) = (uint)uVar5;
      *(undefined4 *)(puVar14 + -0x14) = 0x1ead7;
      iVar9 = FUN_0001df28();
      if (iVar9 < 1) break;
      puVar14 = puVar14 + -0x10;
      if ((in_ECX != 0) &&
         (puVar14 = puVar15,
         ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] * 0x16]
         & 1) != 0)) {
        *(int *)((int)in_EDX + 0x4a) = *(int *)((int)in_EDX + 0x4a) + 1;
        puVar14 = puVar16;
      }
    }
    *(undefined1 *)((int)in_EDX + 0x13) = local_10;
    *(undefined1 *)((int)in_EDX + 0x15) = local_14;
    sVar3 = sVar3 + 1;
    if ((uVar5 / 3 == *(byte *)((int)in_EDX + 7) / 3) &&
       (uVar6 / 3 == *(byte *)((int)in_EDX + 9) / 3)) {
      return 0xffffffff;
    }
    *(undefined4 *)(puVar14 + -4) = 0x1e986;
    uVar7 = FUN_000e66ec();
    iVar9 = (int)((uVar7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
    local_18 = (ushort)iVar9;
    iVar8 = iVar8 + -1;
    uVar5 = uVar5 + *(char *)((int)&DAT_0018b67b + iVar9 * 2 + 3) * 3;
    uVar6 = uVar6 + (char)(&DAT_0018b67f)[iVar9 * 2] * 3;
  }
  if ((uVar5 / 3 == *(byte *)((int)in_EDX + 7) / 3) && (uVar6 / 3 == *(byte *)((int)in_EDX + 9) / 3)
     ) {
    *(undefined1 *)((int)in_EDX + 0x13) = local_10;
    *(undefined1 *)((int)in_EDX + 0x15) = local_14;
    return 0xffffffff;
  }
  if (sVar3 != 0) {
    *(undefined1 *)((int)in_EDX + 0xd) = local_10;
    *(undefined1 *)((int)in_EDX + 0xf) = local_14;
    *(undefined4 *)(puVar17 + -4) = 0x1ebde;
    uVar10 = FUN_000dc354();
    in_EDX[6] = uVar10;
    return 0;
  }
  if (iVar8 == *(int *)(in_EAX + 0xc)) {
    uVar5 = uVar5 + *(char *)((int)&DAT_0018b67b + (uint)local_18 * 2 + 3) * -3;
    uVar6 = uVar6 + (char)(&DAT_0018b67f)[(uint)local_18 * 2] * -3;
    *(ushort *)(in_EDX + 3) = uVar5 * 0x100;
    *(undefined2 *)(in_EDX + 4) = 0;
    *(ushort *)((int)in_EDX + 0xe) = uVar6 * 0x100;
    *in_EDX = in_EDX[3];
    *(undefined2 *)(in_EDX + (uint)bVar19 * -2 + 1) =
         *(undefined2 *)(in_EDX + (uint)bVar19 * -2 + 4);
  }
  if (((*(short *)((int)in_EDX + 0x12) == 0) && (*(short *)(in_EDX + 5) == 0)) &&
     (*(short *)((int)in_EDX + 0x16) == 0)) {
    *(undefined4 *)((int)in_EDX + 0x12) = *in_EDX;
    *(undefined2 *)((int)in_EDX + (uint)bVar19 * -8 + 0x16) =
         *(undefined2 *)(in_EDX + (uint)bVar19 * -2 + 1);
  }
  *(int *)((int)in_EDX + 0x3a) = *(int *)((int)in_EDX + 0x3a) + 1;
  if (((*(int *)((int)in_EDX + 0x3a) < 0xb) || ((uint)uVar5 != *(uint *)((int)in_EDX + 0x3e))) ||
     ((uint)uVar6 != *(uint *)((int)in_EDX + 0x42))) {
    *(uint *)((int)in_EDX + 0x3e) = (uint)uVar5;
    *(uint *)((int)in_EDX + 0x42) = (uint)uVar6;
    *(undefined4 *)(puVar17 + -4) = 0x1eca2;
    uVar10 = FUN_000dc354();
    in_EDX[6] = uVar10;
    *(int *)(puVar17 + -4) = (int)*(char *)(iVar11 + 0xe9f);
    *(uint *)(puVar17 + -8) = (uint)local_18;
    *(uint *)(puVar17 + -0xc) = (uint)*(byte *)((int)in_EDX + 9);
    *(undefined4 *)(puVar17 + -0x10) = 0x1ecd1;
    uVar4 = FUN_000216d8();
    *(undefined1 *)(in_EDX + 7) = uVar4;
    *(uint *)(puVar17 + -0x10) = (uint)*(byte *)(in_EDX + 7);
    *(undefined4 *)(puVar17 + -0x14) = 0x1ed1d;
    iVar8 = FUN_00021548();
    if (iVar8 != -1) {
      uVar5 = (short)((iVar8 % 0x100) / 3) * 3;
      iVar8 = (iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0);
      uVar6 = (short)(CONCAT44(iVar8 >> 0x1f,iVar8 >> 8) / 3) * 3;
      if ((&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] == '\r' ||
          (&DAT_002d33c5)[(uVar5 / 3 + (uVar6 / 3) * 0x55) * 6] == '\f') {
        *(undefined4 *)(puVar17 + -0x14) = 0x1ed95;
        iVar8 = FUN_0001db99();
        if (iVar8 == 1) {
LAB_0001e93d:
          local_10 = (undefined1)uVar5;
          *(undefined1 *)((int)in_EDX + 0x13) = local_10;
          local_14 = (undefined1)uVar6;
          *(undefined1 *)((int)in_EDX + 0x15) = local_14;
          return 0xfffffffb;
        }
      }
      uVar7 = (uint)uVar6;
      *(undefined4 *)(puVar17 + -0x14) = 0x1edc5;
      uVar13 = FUN_000e66ec();
      *(char *)((int)in_EDX + 0x1d) = (char)((int)((uVar13 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9);
      if ((((&DAT_001921d4)
            [(uint)(byte)(&DAT_002d33c5)[(extraout_ECX / 3 + (uVar7 / 3) * 0x55) * 6] * 0x16] !=
            '\0') && ((byte)(&DAT_002d33c5)[(extraout_ECX / 3 + (uVar7 / 3) * 0x55) * 6] != 0x34))
         && ((iVar8 = (uVar7 * 0x100 + extraout_ECX) * 5,
             (*(byte *)((int)&DAT_00279203 + iVar8) & 0x20) == 0 ||
             (((*(byte *)((int)&DAT_00279203 + iVar8) & 0x20) != 0 &&
              ((uint)((&DAT_002d33ca)
                      [((&DAT_0019033b)[uVar7] * 0x55 + (&DAT_0019033b)[extraout_ECX]) * 6] & 7) ==
               (int)*(char *)(iVar11 + 0xe9f))))))) {
        *(undefined4 *)(puVar17 + -0x14) = 0x1ee94;
        iVar11 = FUN_000401aa();
        if ((iVar11 < 0) && (unaff_EBX == 0)) {
          *(undefined4 *)(puVar17 + -0x14) = 1;
          *(undefined4 *)(puVar17 + -0x18) = 1;
          *(uint *)(puVar17 + -0x1c) = (uint)uVar6;
          *(undefined4 *)(puVar17 + -0x20) = extraout_ECX_00;
          *(undefined4 *)(puVar17 + -0x24) = 0x1eebd;
          iVar11 = FUN_0001df28();
          if (iVar11 < 1) {
            return 0xfffffffe;
          }
        }
      }
      local_10 = (undefined1)uVar5;
      *(undefined1 *)((int)in_EDX + 0x13) = local_10;
      local_14 = (undefined1)uVar6;
      *(undefined1 *)((int)in_EDX + 0x15) = local_14;
      if ((uVar5 / 3 == *(byte *)((int)in_EDX + 7) / 3) &&
         (uVar6 / 3 == *(byte *)((int)in_EDX + 9) / 3)) {
        return 0xffffffff;
      }
      *(undefined1 *)((int)in_EDX + 0xd) = local_10;
      *(undefined1 *)((int)in_EDX + 0xf) = local_14;
      return 0;
    }
  }
  return 0xfffffffe;
}

/******************************************************************************
 * Function : sub_01f0fb (Ghidra: FUN_0001f0fb)
 * Prototype: undefined8 sub_01f0fb(void);
 * Address  : 0x1f0fb (Size: 44 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x18a55
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0001f0fb(void)

{
  ushort uVar1;
  int in_EAX;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(ushort *)(in_EAX + 0x2d); DAT_001ae9fc < (&DAT_001ae9fc)[uVar1];
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar1] + 100)] + 0x1f)) {
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_01f127 (Ghidra: FUN_0001f127)
 * Prototype: undefined8 sub_01f127(void);
 * Address  : 0x1f127 (Size: 44 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x18a55
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0001f127(void)

{
  ushort uVar1;
  int in_EAX;
  undefined4 in_EDX;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(ushort *)(in_EAX + 0x2f); DAT_001ae9fc < (&DAT_001ae9fc)[uVar1];
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar1] + 100)] + 0x1f)) {
    iVar2 = iVar2 + 1;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_01f153 (Ghidra: FUN_0001f153)
 * Prototype: uint sub_01f153(void);
 * Address  : 0x1f153 (Size: 511 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1c73c
 * Callees  : 3 -> 0x84ff8, 0xcfc48, 0xe69fc
 ******************************************************************************/
uint FUN_0001f153(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint extraout_ECX;
  uint uVar7;
  int in_EDX;
  int unaff_EBX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_14;
  
  local_14 = 0x80000000;
  iVar10 = *(int *)(in_EAX + 0x24);
  uVar8 = 0;
  uVar9 = 0;
  uVar11 = 0;
  if (in_EDX != 0) {
    uVar9 = (uint)*(byte *)(in_EDX + 1);
    uVar11 = (uint)*(byte *)(in_EDX + 3);
  }
  uVar1 = *(ushort *)(iVar10 + 0x2d);
  do {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    if (uVar2 <= DAT_001ae9fc) {
      return uVar8;
    }
    iVar5 = FUN_00084ff8(uVar9,iVar10,uVar11);
    if (iVar5 != 0) {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 != '[') {
        if (*(char *)(uVar2 + 7) == '\x0e') {
          bVar4 = *(byte *)(uVar2 + 8);
        }
        else {
          bVar4 = *(byte *)(uVar2 + 7);
        }
        if (((&DAT_0018c4be)[(uint)bVar4 * 0x29] != '\x01') || ((uVar8 == 0 && (in_ECX != 0)))) {
          if (unaff_EBX == 0) {
            iVar5 = FUN_000e69fc();
            iVar6 = FUN_000e69fc();
            if ((1 < iVar6 + iVar5) &&
               (((uVar7 = local_14, in_ECX == 0 ||
                 (uVar7 = (uint)(byte)(&DAT_002ebaf8)
                                      [(uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] +
                                                      0x23) + (uint)*(byte *)(uVar2 + 0x1a) * 10],
                 (int)local_14 <= (int)uVar7)) || (uVar8 == 0)))) goto LAB_0001f2a5;
          }
          else {
            iVar5 = FUN_000cfc48();
            if (iVar5 != 0) {
              uVar1 = *(ushort *)(unaff_EBX + 10);
              if (uVar1 < 6) {
                uVar7 = extraout_ECX;
                if (uVar1 == 3) {
                  uVar7 = (uint)(byte)(&DAT_002e91a1)[(uint)*(byte *)(uVar2 + 0x1a) * 0xe6];
                  iVar5 = uVar7 * *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23);
LAB_0001f239:
                  uVar7 = (uVar7 + (uint)(iVar5 * 0x23) / 100) * 100;
                  goto LAB_0001f249;
                }
              }
              else if (uVar1 < 7) {
                uVar7 = (uint)(byte)(&DAT_002ebaf8)
                                    [(uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] +
                                                    0x23) + (uint)*(byte *)(uVar2 + 0x1a) * 10];
LAB_0001f249:
                if ((int)uVar7 < (int)local_14) goto LAB_0001f2a7;
              }
              else {
                uVar7 = extraout_ECX;
                if (uVar1 == 8) {
                  uVar7 = (uint)(byte)(&DAT_002e91a7)[(uint)*(byte *)(uVar2 + 0x1a) * 0xe6];
                  iVar5 = *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23) * uVar7;
                  goto LAB_0001f239;
                }
              }
LAB_0001f2a5:
              local_14 = uVar7;
              uVar8 = uVar2;
            }
          }
        }
      }
    }
LAB_0001f2a7:
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_01f352 (Ghidra: FUN_0001f352)
 * Prototype: undefined8 sub_01f352(void);
 * Address  : 0x1f352 (Size: 486 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1a158, 0x1a4a1
 * Callees  : 1 -> 0x84ff8
 ******************************************************************************/
undefined8 FUN_0001f352(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  undefined4 in_EDX;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    iVar4 = FUN_00084ff8();
    if ((iVar4 != 0) && (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) == '\0')) {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 != 'W') {
        if (*(char *)(uVar2 + 7) == '\x0e') {
          cVar3 = *(char *)(uVar2 + 8);
        }
        else {
          cVar3 = *(char *)(uVar2 + 7);
        }
        if ((cVar3 != 'c') &&
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xad) & 2) == 0)) {
          if (*(char *)(uVar2 + 7) == '\x0e') {
            cVar3 = *(char *)(uVar2 + 8);
          }
          else {
            cVar3 = *(char *)(uVar2 + 7);
          }
          if ((cVar3 != '\x19') && (*(char *)(uVar2 + 7) != '\x1a')) {
            if (*(char *)(uVar2 + 7) == '\x0e') {
              cVar3 = *(char *)(uVar2 + 8);
            }
            else {
              cVar3 = *(char *)(uVar2 + 7);
            }
            if (cVar3 != 'Y') {
              if (*(char *)(uVar2 + 7) == '\x0e') {
                cVar3 = *(char *)(uVar2 + 8);
              }
              else {
                cVar3 = *(char *)(uVar2 + 7);
              }
              if (cVar3 != '\x15') {
                if (*(char *)(uVar2 + 7) == '\x0e') {
                  cVar3 = *(char *)(uVar2 + 8);
                }
                else {
                  cVar3 = *(char *)(uVar2 + 7);
                }
                if (cVar3 != '\x16') {
                  if (*(char *)(uVar2 + 7) == '\x0e') {
                    cVar3 = *(char *)(uVar2 + 8);
                  }
                  else {
                    cVar3 = *(char *)(uVar2 + 7);
                  }
                  if (cVar3 != '\x14') {
                    if (*(char *)(uVar2 + 7) == '\x0e') {
                      cVar3 = *(char *)(uVar2 + 8);
                    }
                    else {
                      cVar3 = *(char *)(uVar2 + 7);
                    }
                    if (cVar3 != 'P') {
                      if (*(char *)(uVar2 + 7) == '\x0e') {
                        cVar3 = *(char *)(uVar2 + 8);
                      }
                      else {
                        cVar3 = *(char *)(uVar2 + 7);
                      }
                      if (cVar3 != '~') {
                        if (*(char *)(uVar2 + 7) == '\x0e') {
                          cVar3 = *(char *)(uVar2 + 8);
                        }
                        else {
                          cVar3 = *(char *)(uVar2 + 7);
                        }
                        if ((cVar3 != '[') &&
                           (0x14 < (*(short *)(uVar2 + 0x5e) * 100) /
                                   ((int)(short)(&DAT_002e9114)
                                                [(uint)*(byte *)(uVar2 + 0x1a) * 0x73] +
                                   (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] +
                                                        0x23) *
                                         (int)(short)(&DAT_002e9114)
                                                     [(uint)*(byte *)(uVar2 + 0x1a) * 0x73] * 0x23)
                                   / 100))) {
                          iVar5 = iVar5 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,iVar5);
}

/******************************************************************************
 * Function : sub_01f538 (Ghidra: FUN_0001f538)
 * Prototype: undefined8 sub_01f538(void);
 * Address  : 0x1f538 (Size: 540 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1c897
 * Callees  : 1 -> 0x84ff8
 ******************************************************************************/
undefined8 FUN_0001f538(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined4 in_EDX;
  uint uVar6;
  int local_20;
  
  local_20 = -0x80000000;
  uVar6 = 0;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    iVar5 = FUN_00084ff8();
    if ((iVar5 != 0) && (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) == '\0')) {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 != 'W') {
        if (*(char *)(uVar2 + 7) == '\x0e') {
          cVar3 = *(char *)(uVar2 + 8);
        }
        else {
          cVar3 = *(char *)(uVar2 + 7);
        }
        if ((cVar3 != 'c') &&
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xad) & 2) == 0)) {
          if (*(char *)(uVar2 + 7) == '\x0e') {
            cVar3 = *(char *)(uVar2 + 8);
          }
          else {
            cVar3 = *(char *)(uVar2 + 7);
          }
          if ((cVar3 != '\x19') && (*(char *)(uVar2 + 7) != '\x1a')) {
            if (*(char *)(uVar2 + 7) == '\x0e') {
              cVar3 = *(char *)(uVar2 + 8);
            }
            else {
              cVar3 = *(char *)(uVar2 + 7);
            }
            if (cVar3 != 'Y') {
              if (*(char *)(uVar2 + 7) == '\x0e') {
                cVar3 = *(char *)(uVar2 + 8);
              }
              else {
                cVar3 = *(char *)(uVar2 + 7);
              }
              if (cVar3 != '\x15') {
                if (*(char *)(uVar2 + 7) == '\x0e') {
                  cVar3 = *(char *)(uVar2 + 8);
                }
                else {
                  cVar3 = *(char *)(uVar2 + 7);
                }
                if (cVar3 != '\x16') {
                  if (*(char *)(uVar2 + 7) == '\x0e') {
                    cVar3 = *(char *)(uVar2 + 8);
                  }
                  else {
                    cVar3 = *(char *)(uVar2 + 7);
                  }
                  if (cVar3 != '\x14') {
                    if (*(char *)(uVar2 + 7) == '\x0e') {
                      cVar3 = *(char *)(uVar2 + 8);
                    }
                    else {
                      cVar3 = *(char *)(uVar2 + 7);
                    }
                    if (cVar3 != 'P') {
                      if (*(char *)(uVar2 + 7) == '\x0e') {
                        cVar3 = *(char *)(uVar2 + 8);
                      }
                      else {
                        cVar3 = *(char *)(uVar2 + 7);
                      }
                      if (cVar3 != '~') {
                        if (*(char *)(uVar2 + 7) == '\x0e') {
                          cVar3 = *(char *)(uVar2 + 8);
                        }
                        else {
                          cVar3 = *(char *)(uVar2 + 7);
                        }
                        if (cVar3 != '[') {
                          iVar5 = (*(short *)(uVar2 + 0x5e) * 100) /
                                  ((int)(short)(&DAT_002e9114)[(uint)*(byte *)(uVar2 + 0x1a) * 0x73]
                                  + (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)]
                                                         + 0x23) *
                                          (int)(short)(&DAT_002e9114)
                                                      [(uint)*(byte *)(uVar2 + 0x1a) * 0x73] * 0x23)
                                    / 100);
                          iVar4 = (int)((uint)(byte)(&DAT_002ebaf8)
                                                    [(uint)*(byte *)(uVar2 + 0x1a) * 10 +
                                                     (uint)*(byte *)((&DAT_001b0a00)
                                                                     [*(ushort *)(uVar2 + 100)] +
                                                                    0x23)] * iVar5) / 100;
                          if ((local_20 < iVar4) && (0x14 < iVar5)) {
                            uVar6 = uVar2;
                            local_20 = iVar4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,uVar6);
}

/******************************************************************************
 * Function : sub_01f754 (Ghidra: FUN_0001f754)
 * Prototype: uint sub_01f754(void);
 * Address  : 0x1f754 (Size: 268 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x18ed3
 * Callees  : 2 -> 0x84ff8, 0xe69fc
 ******************************************************************************/
uint FUN_0001f754(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0x7fffffff;
  local_14 = 0x7fffffff;
  uVar6 = 0;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2f);
  local_1c = 0;
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    if (((*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) == '\0') &&
        (*(char *)(uVar2 + 7) != 'C')) &&
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xad) & 2) == 0)) {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar3 = *(char *)(uVar2 + 8);
      }
      else {
        cVar3 = *(char *)(uVar2 + 7);
      }
      if (cVar3 != '[') {
        iVar4 = FUN_00084ff8();
        if (iVar4 != 0) {
          FUN_000e69fc();
          uVar7 = FUN_000e69fc();
          iVar4 = (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20);
          if (*(char *)(uVar2 + 7) == '\x0e') {
            bVar5 = *(byte *)(uVar2 + 8);
          }
          else {
            bVar5 = *(byte *)(uVar2 + 7);
          }
          if ((&DAT_0018c4be)[(uint)bVar5 * 0x29] == '\x01') {
            if (iVar4 < local_18) {
              local_1c = uVar2;
              local_18 = iVar4;
            }
          }
          else if (iVar4 < local_14) {
            uVar6 = uVar2;
            local_14 = iVar4;
          }
        }
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  if (uVar6 != 0) {
    return uVar6;
  }
  return local_1c;
}

/******************************************************************************
 * Function : sub_01f860 (Ghidra: FUN_0001f860)
 * Prototype: undefined4 sub_01f860(void);
 * Address  : 0x1f860 (Size: 47 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001f860(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (iVar1 = in_EAX + 0x38; (*(byte *)(iVar1 + 0x44) & 2) == 0; iVar1 = iVar1 + 0x48) {
    if (*(int *)(iVar1 + 0x2c) == *(int *)(in_EDX + 0x18)) {
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      uVar2 = 1;
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xf6;
    }
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_01f8d4 (Ghidra: FUN_0001f8d4)
 * Prototype: undefined4 sub_01f8d4(void);
 * Address  : 0x1f8d4 (Size: 437 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x401aa
 ******************************************************************************/
undefined4 FUN_0001f8d4(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  uint uVar3;
  uint unaff_EBX;
  
  uVar3 = (uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6];
  if (((&DAT_001921cf)[uVar3 * 0x16] == '\x04') || (((&DAT_001921c6)[uVar3 * 0x16] & 2) != 0)) {
    return 0xffffffff;
  }
  if ((uVar3 != 0x34) &&
     ((&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] != '\r' && uVar3 != 0xc)) {
    if ((((&DAT_001921c6)
          [(uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] * 0x16] & 0x29) == 0)
       && ((byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] != 0xc)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] != '\r' && !bVar1) {
      iVar2 = FUN_000401aa();
      if (iVar2 < 0) {
        if ((&DAT_001921d4)
            [(uint)(byte)(&DAT_002d33c5)[(extraout_ECX / 3 + (in_EDX / 3) * 0x55) * 6] * 0x16] ==
            '\0') {
          return 1;
        }
        if ((byte)(&DAT_002d33c5)[(extraout_ECX / 3 + (in_EDX / 3) * 0x55) * 6] == 0x34) {
          return 1;
        }
        iVar2 = (extraout_ECX + in_EDX * 0x100) * 5;
        if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) != 0) {
          if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) == 0) {
            return 1;
          }
          if (((&DAT_002d33ca)[((&DAT_0019033b)[in_EDX] * 0x55 + (&DAT_0019033b)[extraout_ECX]) * 6]
              & 7) != unaff_EBX) {
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_01fa89 (Ghidra: FUN_0001fa89)
 * Prototype: undefined4 sub_01fa89(void);
 * Address  : 0x1fa89 (Size: 420 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x401aa
 ******************************************************************************/
undefined4 FUN_0001fa89(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  uint uVar3;
  uint unaff_EBX;
  
  uVar3 = (uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6];
  if (uVar3 == 0x34) {
    return 1;
  }
  iVar2 = uVar3 * 0x16;
  if (((&DAT_001921cf)[iVar2] != '\x04') && (((&DAT_001921c6)[iVar2] & 2) == 0)) {
    if ((((&DAT_001921c6)[iVar2] & 0x29) == 0) && (uVar3 != 0xc)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((((&DAT_002d33c5)[(in_EAX / 3 + (in_EDX / 3) * 0x55) * 6] != '\r' && !bVar1) &&
        (iVar2 = FUN_000401aa(), iVar2 < 0)) &&
       (((&DAT_001921c6)
         [(uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (extraout_ECX / 3) * 0x55) * 6] * 0x16] & 1) ==
        0)) {
      if ((&DAT_002d33c5)[(in_EAX / 3 + (extraout_ECX / 3) * 0x55) * 6] == '\r' ||
          (byte)(&DAT_002d33c5)[(in_EAX / 3 + (extraout_ECX / 3) * 0x55) * 6] == 0xc) {
        return 1;
      }
      if ((&DAT_001921d4)
          [(uint)(byte)(&DAT_002d33c5)[(in_EAX / 3 + (extraout_ECX / 3) * 0x55) * 6] * 0x16] == '\0'
         ) {
        return 1;
      }
      if ((byte)(&DAT_002d33c5)[(in_EAX / 3 + (extraout_ECX / 3) * 0x55) * 6] == 0x34) {
        return 1;
      }
      iVar2 = (extraout_ECX * 0x100 + in_EAX) * 5;
      if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) != 0) {
        if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) == 0) {
          return 1;
        }
        if (((&DAT_002d33ca)[((&DAT_0019033b)[extraout_ECX] * 0x55 + (&DAT_0019033b)[in_EAX]) * 6] &
            7) != unaff_EBX) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_01fc2d (Ghidra: FUN_0001fc2d)
 * Prototype: undefined4 sub_01fc2d(ushort param_1);
 * Address  : 0x1fc2d (Size: 855 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1d10e
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0001fc2d(ushort param_1)

{
  int iVar1;
  int in_EAX;
  char in_CL;
  uint uVar2;
  int in_EDX;
  byte unaff_BL;
  uint uVar3;
  uint uVar4;
  int local_20;
  uint local_1c;
  
  local_20 = 0;
  uVar3 = (uint)*(byte *)(in_EAX + 3);
  uVar2 = (uint)*(byte *)(in_EAX + 1);
  for (; (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] * 0x16]
          & 2) != 0 && (local_20 < (int)(uint)param_1)); local_20 = local_20 + 1) {
    uVar2 = uVar2 + *(char *)((int)&DAT_0018b67b + (uint)unaff_BL * 2 + 3) * 3;
    uVar3 = uVar3 + (char)(&DAT_0018b67f)[(uint)unaff_BL * 2] * 3;
    if (0xfe < uVar2) {
      return 0;
    }
    if (0xfe < uVar3) {
      return 0;
    }
  }
  *(char *)(in_EAX + 1) = (char)uVar2;
  local_1c = 0;
  *(char *)(in_EAX + 3) = (char)uVar3;
  for (; (((((&DAT_001921c6)
             [(uint)(byte)(&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] * 0x16] & 0x10) == 0
           && ((byte)(&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] != 0xc)) ||
          (((&DAT_001921c6)
            [(uint)(byte)(&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] * 0x16] & 2) != 0))
         && ((int)local_1c < (int)(uint)param_1)); local_1c = local_1c + 1) {
    uVar2 = uVar2 + *(char *)((int)&DAT_0018b67b + (uint)unaff_BL * 2 + 3) * 3;
    uVar3 = uVar3 + (char)(&DAT_0018b67f)[(uint)unaff_BL * 2] * 3;
    if ((0xfe < uVar2) || (0xfe < uVar3)) {
      return 0;
    }
  }
  if (param_1 != local_1c) {
    *(char *)(in_EAX + 1) = (char)uVar2;
    *(char *)(in_EAX + 3) = (char)uVar3;
    uVar4 = 0;
    while (((int)uVar4 < (int)(uint)param_1 &&
           ((((((&DAT_001921d4)
                [(uint)(byte)(&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] * 0x16] != '\0'
               && ((byte)(&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] != 0x34)) &&
              ((iVar1 = (uVar3 * 0x100 + uVar2) * 5,
               (*(byte *)((int)&DAT_00279203 + iVar1) & 0x20) == 0 ||
               (((*(byte *)((int)&DAT_00279203 + iVar1) & 0x20) != 0 &&
                ((uint)((&DAT_002d33ca)
                        [((&DAT_0019033b)[uVar2] + (&DAT_0019033b)[uVar3] * 0x55) * 6] & 7) ==
                 (int)in_CL)))))) && ((&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] != '\r')
             ) || ((((&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] == '\v' &&
                    ((int)in_CL ==
                     (uint)((&DAT_002d33ca)
                            [((&DAT_0019033b)[uVar2] + (&DAT_0019033b)[uVar3] * 0x55) * 6] & 7))) ||
                   ((&DAT_002d33c5)[(uVar2 / 3 + (uVar3 / 3) * 0x55) * 6] == '\n'))))))) {
      uVar2 = uVar2 + *(char *)((int)&DAT_0018b67b + (uint)unaff_BL * 2 + 3) * 3;
      uVar3 = uVar3 + (char)(&DAT_0018b67f)[(uint)unaff_BL * 2] * 3;
      if (0xfe < uVar2) {
        return 0;
      }
      if (0xfe < uVar3) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    }
    if (uVar4 != param_1) {
      return 0;
    }
  }
  *(char *)(in_EDX + 1) = (char)uVar2;
  *(char *)(in_EDX + 3) = (char)uVar3;
  return 1;
}

/******************************************************************************
 * Function : sub_01ff84 (Ghidra: FUN_0001ff84)
 * Prototype: undefined4 sub_01ff84(void);
 * Address  : 0x1ff84 (Size: 168 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1b561, 0x1b629
 * Callees  : 3 -> 0x1ba46, 0x1d2ff, 0x1de8c
 ******************************************************************************/
undefined4 FUN_0001ff84(void)

{
  int in_EAX;
  int iVar1;
  byte *pbVar2;
  undefined2 extraout_CX;
  int in_EDX;
  undefined4 *unaff_EBX;
  byte bVar3;
  int local_10;
  
  bVar3 = 0;
  iVar1 = FUN_0001de8c();
  if (iVar1 != 0) {
    pbVar2 = (byte *)FUN_0001ba46();
    if (pbVar2 != (byte *)0x0) {
      pbVar2[2] = 7;
      *(ushort *)(pbVar2 + 0x70) = (ushort)*(byte *)(local_10 + 8) << 8;
      *(ushort *)(pbVar2 + 0x72) = (ushort)*(byte *)(local_10 + 9) << 8;
      pbVar2[0x74] = 0;
      pbVar2[0x75] = 1;
      *(undefined4 *)(pbVar2 + 0x76) = *unaff_EBX;
      *(undefined2 *)(pbVar2 + (uint)bVar3 * -8 + 0x7a) =
           *(undefined2 *)(unaff_EBX + (uint)bVar3 * -2 + 1);
      pbVar2[0x5c] = 0;
      pbVar2[0x5d] = 0;
      pbVar2[0x5e] = 0;
      pbVar2[0x5f] = 0;
      *(undefined2 *)(pbVar2 + 0x86) = extraout_CX;
      *(short *)(pbVar2 + 0x8c) = (short)((in_EDX - (in_EAX + 0x38)) / 0x48);
      *pbVar2 = *pbVar2 | 4;
      FUN_0001d2ff(*(undefined4 *)(pbVar2 + 0x70),*(undefined4 *)(pbVar2 + 0x74),
                   *(undefined4 *)(pbVar2 + 0x76),*(undefined4 *)(pbVar2 + 0x7a));
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_02002c (Ghidra: FUN_0002002c)
 * Prototype: int sub_02002c(void);
 * Address  : 0x2002c (Size: 99 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x18ffe, 0x1b561, 0x1b629
 * Callees  : 1 -> 0x82774
 ******************************************************************************/
int FUN_0002002c(void)

{
  ushort uVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  uint extraout_ECX;
  int in_EDX;
  int iVar4;
  
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  iVar4 = 0;
  do {
    uVar3 = (&DAT_001ae9fc)[uVar1];
    if (uVar3 <= DAT_001ae9fc) {
      return iVar4;
    }
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 3) == '\0') {
      if (in_EDX != 0) {
        cVar2 = FUN_00082774();
        uVar3 = extraout_ECX;
        if (cVar2 == '\0') goto LAB_0002003d;
      }
      iVar4 = iVar4 + 1;
    }
LAB_0002003d:
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_02008f (Ghidra: FUN_0002008f)
 * Prototype: undefined8 sub_02008f(void);
 * Address  : 0x2008f (Size: 81 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1ab14, 0x1ab74
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0002008f(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  
  uVar2 = *(ushort *)(in_EAX + 0x14c6);
  iVar4 = 0;
  while( true ) {
    iVar3 = (uint)uVar2 * 0x94;
    if (&DAT_002c9203 + iVar3 < &DAT_002c9204) break;
    if ((((&DAT_002c9203)[iVar3] & 1) != 0) &&
       ((((cVar1 = (&DAT_002c9205)[iVar3], cVar1 == '\x01' || (cVar1 == '\x02')) ||
         (cVar1 == '\x03')) || (cVar1 == '\x04')))) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = *(ushort *)(&DAT_002c9295 + iVar3);
  }
  return CONCAT44(in_EDX,iVar4);
}

/******************************************************************************
 * Function : sub_0200e0 (Ghidra: FUN_000200e0)
 * Prototype: uint sub_0200e0(void);
 * Address  : 0x200e0 (Size: 269 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1a60d, 0x1a68b
 * Callees  : 1 -> 0x720ce
 ******************************************************************************/
uint FUN_000200e0(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  uint uVar5;
  uint local_18;
  
  iVar4 = *(int *)(in_EAX + 0x24);
  uVar5 = 0x80000000;
  uVar1 = *(ushort *)(iVar4 + 0x2d);
  local_18 = 0;
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    if ((*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) != '\0') &&
       (*(char *)(uVar2 + 7) != 'C')) {
      if (in_EDX != 0) {
        iVar3 = FUN_000720ce();
        in_EDX = extraout_ECX;
        if (iVar3 != 0) goto LAB_000200ff;
      }
      if ((int)uVar5 <
          (int)(uint)(byte)(&DAT_002ebaf8)
                           [(uint)*(byte *)(uVar2 + 0x1a) * 10 +
                            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23)]) {
        uVar5 = (uint)(byte)(&DAT_002ebaf8)
                            [(uint)*(byte *)(uVar2 + 0x1a) * 10 +
                             (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23)];
        local_18 = uVar2;
      }
    }
LAB_000200ff:
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  uVar1 = *(ushort *)(iVar4 + 0x2f);
  do {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    if (uVar2 <= DAT_001ae9fc) {
      return local_18;
    }
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) != '\0') {
      if (in_EDX != 0) {
        iVar4 = FUN_000720ce();
        in_EDX = extraout_ECX_00;
        if (iVar4 != 0) goto LAB_0002017c;
      }
      if ((int)uVar5 <
          (int)(uint)(byte)(&DAT_002ebaf8)
                           [(uint)*(byte *)(uVar2 + 0x1a) * 10 +
                            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23)]) {
        uVar5 = (uint)(byte)(&DAT_002ebaf8)
                            [(uint)*(byte *)(uVar2 + 0x1a) * 10 +
                             (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23)];
        local_18 = uVar2;
      }
    }
LAB_0002017c:
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  } while( true );
}

