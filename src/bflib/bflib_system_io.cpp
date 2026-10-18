/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: bflib/bflib_system_io.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 449
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0e5b3c (Ghidra: FUN_000e5b3c)
 * Prototype: undefined8 sub_0e5b3c(void);
 * Address  : 0xe5b3c (Size: 133 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x6e9ab, 0x70bf9
 ******************************************************************************/
undefined8 FUN_000e5b3c(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  
  iVar1 = (DAT_002ee88e - DAT_002e8bee) / 2;
  iVar2 = FUN_00070bf9();
  if ((iVar2 != 0) &&
     ((extraout_ECX == 0 ||
      ((0 < extraout_ECX &&
       ((((iVar1 < 0x65 && (iVar1 % 10 == 0)) || ((iVar1 < 0x12d && (iVar1 % 0x32 == 0)))) ||
        (iVar2 = iVar1 / 0xfa, iVar1 % 0xfa == 0)))))))) {
    iVar2 = FUN_0006e9ab();
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0e5e04 (Ghidra: FUN_000e5e04)
 * Prototype: void sub_0e5e04(void);
 * Address  : 0xe5e04 (Size: 320 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 2 -> 0x10575, 0x84ff8
 ******************************************************************************/
void FUN_000e5e04(void)

{
  byte *in_EAX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  
  if (((((*in_EAX & 1) != 0) && (*(int *)(in_EAX + 3) >> 0x18 <= (int)(uint)DAT_002eb542)) &&
      ((*in_EAX & 0x10) == 0)) && (((in_EAX[1] & 2) == 0 && (in_EAX[7] != 0x43)))) {
    iVar1 = (uint)in_EAX[7] * 0x29;
    if ((&DAT_0018c4be)[iVar1] == '\x06') {
      iVar1 = (uint)in_EAX[8] * 0x29;
    }
    *(short *)(&DAT_002e05ed +
              (uint)(byte)(&DAT_0018c4be)[iVar1] * 2 +
              (*(int *)(in_EAX + 3) >> 0x18) * 0x1508 + (uint)in_EAX[0x1a] * 0x1e) =
         *(short *)(&DAT_002e05ed +
                   (uint)(byte)(&DAT_0018c4be)[iVar1] * 2 +
                   (*(int *)(in_EAX + 3) >> 0x18) * 0x1508 + (uint)in_EAX[0x1a] * 0x1e) + 1;
    iVar1 = FUN_00084ff8();
    if ((iVar1 != 0) && (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) == 0)) {
      *(short *)(&DAT_002e09ad +
                *(int *)(&DAT_0019133e + (uint)*(byte *)(extraout_ECX + 0x1e) * 4) * 2 +
                (*(int *)(in_EAX + 3) >> 0x18) * 0x1508 + (uint)in_EAX[0x1a] * 6) =
           *(short *)(&DAT_002e09ad +
                     *(int *)(&DAT_0019133e + (uint)*(byte *)(extraout_ECX + 0x1e) * 4) * 2 +
                     (*(int *)(in_EAX + 3) >> 0x18) * 0x1508 + (uint)in_EAX[0x1a] * 6) + 1;
    }
    iVar1 = FUN_00010575();
    if (iVar1 != 0) {
      *(short *)(&DAT_002e0a6d +
                *(int *)(&DAT_0019133e + (uint)*(byte *)(extraout_ECX_00 + 0x1e) * 4) * 2 +
                (*(int *)(in_EAX + 3) >> 0x18) * 0x1508 + (uint)in_EAX[0x1a] * 6) =
           *(short *)(&DAT_002e0a6d +
                     *(int *)(&DAT_0019133e + (uint)*(byte *)(extraout_ECX_00 + 0x1e) * 4) * 2 +
                     (*(int *)(in_EAX + 3) >> 0x18) * 0x1508 + (uint)in_EAX[0x1a] * 6) + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0e5f50 (Ghidra: FUN_000e5f50)
 * Prototype: int sub_0e5f50(void);
 * Address  : 0xe5f50 (Size: 28 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000e5f50(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  int iVar2;
  
  iVar1 = (0x100 - in_EDX) * in_EAX;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8;
}

/******************************************************************************
 * Function : sub_0e5f70 (Ghidra: FUN_000e5f70)
 * Prototype: undefined4 sub_0e5f70(void);
 * Address  : 0xe5f70 (Size: 444 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x409ba
 * Callees  : 2 -> 0xe6584, 0xe8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e5f70(void)

{
  int *in_EAX;
  int iVar1;
  int extraout_ECX;
  int *piVar2;
  int extraout_ECX_00;
  byte in_DL;
  undefined1 unaff_BL;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longdouble lVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  undefined4 uVar10;
  
  *(undefined1 *)((int)in_EAX + 0x15) = unaff_BL;
  *(byte *)((int)in_EAX + 0x16) = in_DL;
  in_EAX[1] = 0;
  iVar9 = 0;
  in_EAX[2] = 0;
  piVar2 = DAT_00199228;
  *(char *)((int)in_EAX + 0x17) = '\x01' << (in_DL & 0x1f);
  in_EAX[3] = 0x14;
  in_EAX[4] = 4;
  *(undefined1 *)(in_EAX + 5) = 0;
  iVar3 = 0;
  piVar5 = piVar2;
  do {
    uVar10 = 0x55;
    iVar1 = FUN_000e6584();
    piVar4 = piVar5;
    if (iVar1 != 0) {
      piVar4 = piVar5 + 1;
      iVar9 = iVar9 + 1;
      *piVar5 = extraout_ECX;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar4;
  } while (iVar3 < 0x1c39);
  if (iVar9 != 0) {
    if (iVar9 < 0xc9) {
      iVar3 = 0;
      if (0 < iVar9) {
        do {
          iVar1 = *piVar2;
          *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x18) = (char)((longlong)iVar1 % 0x100);
          *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x19) = (char)((longlong)iVar1 / 0x100);
          in_EAX[1] = (in_EAX[1] + 1) % 200;
          if (*in_EAX < 200) {
            *in_EAX = *in_EAX + 1;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < iVar9);
      }
    }
    else {
      dVar7 = (double)iVar9 / _DAT_0016cb80;
      iVar3 = 0;
      dVar8 = 0.0;
      do {
        lVar6 = (longdouble)FUN_000e8d50(dVar7,dVar8,iVar9,uVar10);
        iVar1 = piVar2[(int)ROUND(lVar6)];
        uVar10 = 0x100;
        *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x18) = (char)(iVar1 % 0x100);
        *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x19) =
             (char)((iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0) >> 8);
        in_EAX[1] = (in_EAX[1] + 1) % extraout_ECX_00;
        if (*in_EAX < extraout_ECX_00) {
          *in_EAX = *in_EAX + 1;
        }
        dVar8 = dVar8 + dVar7;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 200);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0e612c (Ghidra: FUN_000e612c)
 * Prototype: undefined8 sub_0e612c(void);
 * Address  : 0xe612c (Size: 539 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 2 -> 0xe6584, 0xe8d50
 ******************************************************************************/
undefined8 FUN_000e612c(void)

{
  int *in_EAX;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longdouble lVar5;
  int local_84 [20];
  double local_34;
  double local_2c;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar4 = in_EAX[2];
  local_1c = 0;
  local_20 = 0;
  iVar1 = iVar4 % 0x55;
  iVar3 = iVar1 * 3 + (iVar4 / 0x55) * 0x300 + 0x101;
  if (0 < in_EAX[3]) {
    iVar2 = 0;
    do {
      iVar4 = FUN_000e6584();
      if (iVar4 != 0) {
        iVar4 = local_1c + 1;
        *(int *)((int)local_84 + iVar2) = iVar3;
        local_1c = iVar4;
        iVar2 = iVar2 + 4;
        if (((char)in_EAX[5] != '\0') && (iVar4 == in_EAX[4])) {
          iVar4 = (in_EAX[2] + in_EAX[3]) % 0x1c39;
          break;
        }
      }
      iVar1 = iVar1 + 1;
      iVar4 = extraout_ECX + 1;
      if (iVar1 < 0x55) {
        iVar3 = iVar3 + 3;
      }
      else {
        iVar1 = 0;
        if (0x1c38 < iVar4) {
          iVar4 = 0;
        }
        local_24 = 0x55;
        iVar3 = (iVar4 / 0x55) * 0x300 + (iVar4 % 0x55) * 3 + 0x101;
      }
      local_20 = local_20 + 1;
    } while (local_20 < in_EAX[3]);
  }
  in_EAX[2] = iVar4;
  if (local_1c != 0) {
    if (in_EAX[4] < local_1c) {
      local_2c = (double)local_1c / (double)in_EAX[4];
      iVar4 = 0;
      local_34 = 0.0;
      if (0 < in_EAX[4]) {
        do {
          lVar5 = (longdouble)FUN_000e8d50();
          local_24 = (int)ROUND(lVar5);
          iVar1 = local_84[(int)ROUND(lVar5)];
          *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x18) = (char)((longlong)iVar1 % 0x100);
          *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x19) = (char)((longlong)iVar1 / 0x100);
          in_EAX[1] = (in_EAX[1] + 1) % 200;
          if (*in_EAX < 200) {
            *in_EAX = *in_EAX + 1;
          }
          iVar4 = iVar4 + 1;
          local_34 = local_34 + local_2c;
        } while (iVar4 < in_EAX[4]);
      }
    }
    else if (0 < local_1c) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)((int)local_84 + iVar4);
        *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x18) = (char)((longlong)iVar1 % 0x100);
        *(char *)((int)in_EAX + in_EAX[1] * 2 + 0x19) = (char)((longlong)iVar1 / 0x100);
        in_EAX[1] = (in_EAX[1] + 1) % 200;
        if (*in_EAX < 200) {
          *in_EAX = *in_EAX + 1;
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < local_1c * 4);
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e6348 (Ghidra: FUN_000e6348)
 * Prototype: bool sub_0e6348(void);
 * Address  : 0xe6348 (Size: 99 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x239ee
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000e6348(void)

{
  uint uVar1;
  uint *in_EAX;
  short *in_EDX;
  uint uVar2;
  
  uVar1 = *in_EAX;
  if (uVar1 != 0) {
    uVar2 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar2 >> 0xd | uVar2 * 0x80000;
    uVar2 = DAT_002e8bf6 % *in_EAX;
    *in_EDX = (ushort)*(byte *)((int)in_EAX + uVar2 * 2 + 0x18) << 8;
    in_EDX[1] = (ushort)*(byte *)((int)in_EAX + uVar2 * 2 + 0x19) << 8;
  }
  return uVar1 != 0;
}

/******************************************************************************
 * Function : dk_nops_currp_slbp_nopstotest_0e63ac (Ghidra: FUN_000e63ac)
 * Prototype: void dk_nops_currp_slbp_nopstotest_0e63ac(void);
 * Address  : 0xe63ac (Size: 290 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'NoPs %d, CurrP %d, SlbP %d, NoPsToTest %d, NoPsToUpdate %d, '
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe7714, 0xf0f8c
 * Strings  :
 *   - 0x16cba7: "NoPs %d, CurrP %d, SlbP %d, NoPsToTest %d, NoPsToUpdate %d, ExpPlayer %d"
 *   - 0x16cbf0: "Explored Wander Point N%d, Player%d, X%d, Y%d"
 *   - 0x16cc1e: "NoPs %d, CurrP %d, SlbP %d, NoPsToTest %d, NoPsToUpdate %d, ExpPlayer %d"
 *   - 0x16cc67: "UnExplored Wander Point N%d, Player%d, X%d, Y%d"
 ******************************************************************************/
void FUN_000e63ac(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar2;
  int extraout_EDX_03;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  do {
    if (((&DAT_0019d0c8)[iVar1 * 0x4ef] & 1) != 0) {
      FUN_000e7714(&DAT_0019cbac,s_i_Wander_point_log_for_player__d_0016cb86 + 2,iVar1);
      FUN_000f0f8c(&DAT_0019cbac);
      FUN_000e7714(&DAT_0019cbac,s_NoPs__d__CurrP__d__SlbP__d__NoPs_0016cba7,*extraout_EDX,
                   extraout_EDX[1],extraout_EDX[2],extraout_EDX[3],extraout_EDX[4],
                   *(undefined1 *)((int)extraout_EDX + 0x17));
      iVar3 = 0;
      FUN_000f0f8c(&DAT_0019cbac);
      iVar1 = extraout_ECX;
      iVar2 = extraout_EDX_00;
      do {
        FUN_000e7714(&DAT_0019cbac,s_Explored_Wander_Point_N_d__Playe_0016cbf0,iVar3,iVar1,
                     *(undefined1 *)(iVar2 + 0x18),*(undefined1 *)(iVar2 + 0x19));
        iVar3 = iVar3 + 1;
        FUN_000f0f8c(&DAT_0019cbac);
        iVar1 = extraout_ECX_00;
        iVar2 = extraout_EDX_01;
      } while (iVar3 < 200);
      iVar1 = extraout_ECX_00 * 0x4ef;
      puVar4 = (undefined4 *)(&DAT_0019d35a + iVar1);
      FUN_000e7714(&DAT_0019cbac,s_NoPs__d__CurrP__d__SlbP__d__NoPs_0016cc1e,*puVar4,
                   *(undefined4 *)(&DAT_0019d35e + iVar1),*(undefined4 *)(&DAT_0019d362 + iVar1),
                   *(undefined4 *)(&DAT_0019d366 + iVar1),*(undefined4 *)(&DAT_0019d36a + iVar1),
                   (&DAT_0019d371)[iVar1]);
      FUN_000f0f8c(&DAT_0019cbac);
      iVar1 = extraout_ECX_01;
      iVar2 = extraout_EDX_02;
      do {
        FUN_000e7714(&DAT_0019cbac,s_UnExplored_Wander_Point_N_d__Pla_0016cc67,iVar2,iVar1,
                     *(undefined1 *)(puVar4 + 6),*(undefined *)((int)puVar4 + 0x19));
        puVar4 = (undefined4 *)((int)puVar4 + 2);
        FUN_000f0f8c(&DAT_0019cbac);
        iVar1 = extraout_ECX_02;
        iVar2 = extraout_EDX_03;
      } while (extraout_EDX_03 < 200);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}

/******************************************************************************
 * Function : sub_0e6584 (Ghidra: FUN_000e6584)
 * Prototype: undefined4 sub_0e6584(void);
 * Address  : 0xe6584 (Size: 277 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe5f70, 0xe612c
 * Callees  : 1 -> 0xd1420
 ******************************************************************************/
undefined4 FUN_000e6584(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  iVar1 = in_EDX * 5;
  if (*(char *)(in_EAX + 0x15) == '\0') {
    if ((((((uint)*(byte *)(in_EAX + 0x17) & 1 << (DAT_002eb542 & 0x1f)) == 0) &&
         ((*(uint *)((int)&DAT_00279203 + iVar1 + 1) >> 0x1c & (uint)*(byte *)(in_EAX + 0x17)) == 0)
         ) && ((*(byte *)((int)&DAT_00279203 + iVar1) & 0x10) == 0)) &&
       ((((&DAT_00269203)[in_EDX] & 0x10) == 0 &&
        (iVar1 = FUN_000d1420((short)(in_EDX % 0x100 << 8)), iVar1 != 0)))) {
      return 1;
    }
  }
  else if (((((uint)*(byte *)(in_EAX + 0x17) & 1 << (DAT_002eb542 & 0x1f)) != 0) ||
           ((*(uint *)((int)&DAT_00279203 + iVar1 + 1) >> 0x1c & (uint)*(byte *)(in_EAX + 0x17)) !=
            0)) && (((*(byte *)((int)&DAT_00279203 + in_EDX * 5) & 0x10) == 0 &&
                    (((&DAT_00269203)[in_EDX] & 0x10) == 0)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0e66ec (Ghidra: FUN_000e66ec)
 * Prototype: undefined8 sub_0e66ec(void);
 * Address  : 0xe66ec (Size: 268 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x10010, 0x1009d, 0x10c1a, 0x1e5de, 0x216d8, 0x6fda2, 0x7bb10, 0x7bc8d, 0x88e2c, 0xadbc0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e66ec(void)

{
  ulonglong uVar1;
  uint in_EAX;
  uint uVar2;
  uint in_EDX;
  
  if ((in_EAX == 0) && (in_EDX == 0)) {
    return 0;
  }
  if (-1 < (int)in_EAX) {
    if ((int)in_EDX < 0) {
      if ((int)in_EAX < (int)-in_EDX) {
        uVar1 = (ulonglong)(in_EAX << 8) / (ulonglong)-in_EDX;
        return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                        *(undefined2 *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2)));
      }
      uVar1 = (ulonglong)(in_EDX * -0x100) / (ulonglong)in_EAX;
      return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                      0x200 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2)));
    }
    if ((int)in_EAX < (int)in_EDX) {
      uVar1 = (ulonglong)(in_EAX << 8) / (ulonglong)in_EDX;
      return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                      0x400 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2)));
    }
    uVar1 = (ulonglong)(in_EDX << 8) / (ulonglong)in_EAX;
    return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                    *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2) + 0x200));
  }
  uVar2 = -in_EAX;
  if ((int)in_EDX < 0) {
    if ((int)uVar2 < (int)-in_EDX) {
      uVar1 = (ulonglong)(in_EAX * -0x100) / (ulonglong)-in_EDX;
      return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                      0x800 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2)));
    }
    uVar1 = (ulonglong)(in_EDX * -0x100) / (ulonglong)uVar2;
    return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                    *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2) + 0x600));
  }
  if ((int)uVar2 < (int)in_EDX) {
    uVar1 = (ulonglong)(in_EAX * -0x100) / (ulonglong)in_EDX;
    return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                    *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2) + 0x400));
  }
  uVar1 = (ulonglong)(in_EDX << 8) / (ulonglong)uVar2;
  return CONCAT44(in_EDX,CONCAT22((short)(uVar1 >> 0x10),
                                  0x600 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uVar1 * 2)));
}

/******************************************************************************
 * Function : sub_0e69fc (Ghidra: FUN_000e69fc)
 * Prototype: void sub_0e69fc(void);
 * Address  : 0xe69fc (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 52 -> 0x10c5f, 0x10c85, 0x11606, 0x13169, 0x15d7c, 0x15df9, 0x1671a, 0x197a9, 0x1d391, 0x1d601 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e69fc(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0e6a10 (Ghidra: FUN_000e6a10)
 * Prototype: undefined4 sub_0e6a10(void);
 * Address  : 0xe6a10 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 178 -> 0x11e00, 0x13b98, 0x1b15c, 0x1ba46, 0x1d10e, 0x21008, 0x21056, 0x2213c, 0x23ad0, 0x23ece ...
 * Callees  : 1 -> 0xf69e0
 ******************************************************************************/
undefined4 FUN_000e6a10(void)

{
  undefined4 in_EAX;
  
  FUN_000f69e0();
  return in_EAX;
}

/******************************************************************************
 * Function : sub_0e6a30 (Ghidra: FUN_000e6a30)
 * Prototype: longlong sub_0e6a30(void);
 * Address  : 0xe6a30 (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6a689, 0xe7750
 * Callees  : 1 -> 0xe79ac
 ******************************************************************************/
longlong FUN_000e6a30(void)

{
  char in_AL;
  int iVar1;
  char extraout_DL;
  uint in_EDX;
  
  if (DAT_003d980c == 0) {
    iVar1 = FUN_000e79ac();
    if (iVar1 != 1) {
      return (ulonglong)in_EDX << 0x20;
    }
    DAT_003d980c = 1;
    in_AL = extraout_DL;
  }
  return CONCAT44(in_EDX,*(undefined4 *)(&DAT_00194fe6 + in_AL * 0x26));
}

/******************************************************************************
 * Function : sub_0e6a6c (Ghidra: FUN_000e6a6c)
 * Prototype: undefined4 sub_0e6a6c(void);
 * Address  : 0xe6a6c (Size: 168 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x6a553, 0x6a689, 0x6aac0, 0x8bde8, 0xa43b4, 0xa6990, 0xe7750, 0xebab0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000e6a6c(void)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar1 = unaff_EBX + in_EAX;
  iVar2 = in_ECX + in_EDX;
  DAT_003d983c = in_EAX;
  if (iVar1 < in_EAX) {
    DAT_003d983c = iVar1;
    iVar1 = in_EAX;
  }
  DAT_003d9840 = in_EDX;
  if (iVar2 < in_EDX) {
    DAT_003d9840 = iVar2;
    iVar2 = in_EDX;
  }
  if (DAT_003d983c < 0) {
    DAT_003d983c = 0;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (DAT_003d9840 < 0) {
    DAT_003d9840 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (DAT_003d9834 < DAT_003d983c) {
    DAT_003d983c = DAT_003d9834;
  }
  if (DAT_003d9834 < iVar1) {
    iVar1 = DAT_003d9834;
  }
  if (DAT_003d9838 < DAT_003d9840) {
    DAT_003d9840 = DAT_003d9838;
  }
  if (DAT_003d9838 < iVar2) {
    iVar2 = DAT_003d9838;
  }
  DAT_003d9844 = iVar1 - DAT_003d983c;
  DAT_003d9848 = iVar2 - DAT_003d9840;
  DAT_003d9824 = DAT_003d9818 + in_EDX * DAT_003d9834 + in_EAX;
  return 1;
}

/******************************************************************************
 * Function : sub_0e6b14 (Ghidra: FUN_000e6b14)
 * Prototype: undefined4 sub_0e6b14(void);
 * Address  : 0xe6b14 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000e6b14(void)

{
  return DAT_003d9810;
}

/******************************************************************************
 * Function : sub_0e6b20 (Ghidra: FUN_000e6b20)
 * Prototype: undefined4 sub_0e6b20(void);
 * Address  : 0xe6b20 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 45 -> 0x2e58b, 0x2e8a7, 0x2ee3e, 0x2eeb9, 0x2efb4, 0x2f769, 0x30061, 0x300a7, 0x3012d, 0x303ad ...
 * Callees  : 2 -> 0xe6b44, 0xe6b74
 ******************************************************************************/
undefined4 FUN_000e6b20(void)

{
  FUN_000e6b44();
  FUN_000e6b74();
  return 1;
}

/******************************************************************************
 * Function : sub_0e6b44 (Ghidra: FUN_000e6b44)
 * Prototype: undefined4 sub_0e6b44(void);
 * Address  : 0xe6b44 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x57739, 0x57a52, 0xe6b20
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e6b44(void)

{
  int in_EAX;
  int in_EDX;
  undefined4 unaff_EBX;
  
  DAT_003d9894 = unaff_EBX;
  DAT_003d9890 = in_EDX;
  DAT_003d988c = in_EAX;
  _DAT_003d989c = in_EDX * DAT_003d9834 + DAT_003d9818 + in_EAX;
  return 1;
}

/******************************************************************************
 * Function : sub_0e6b74 (Ghidra: FUN_000e6b74)
 * Prototype: undefined4 sub_0e6b74(void);
 * Address  : 0xe6b74 (Size: 168 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x57739, 0x57a52, 0xe6b20
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000e6b74(void)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar1 = unaff_EBX + in_EAX;
  iVar2 = in_ECX + in_EDX;
  DAT_003d98a0 = in_EAX;
  if (iVar1 < in_EAX) {
    DAT_003d98a0 = iVar1;
    iVar1 = in_EAX;
  }
  DAT_003d98a4 = in_EDX;
  if (iVar2 < in_EDX) {
    DAT_003d98a4 = iVar2;
    iVar2 = in_EDX;
  }
  if (DAT_003d98a0 < 0) {
    DAT_003d98a0 = 0;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (DAT_003d98a4 < 0) {
    DAT_003d98a4 = 0;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (DAT_003d9834 < DAT_003d98a0) {
    DAT_003d98a0 = DAT_003d9834;
  }
  if (DAT_003d9834 < iVar1) {
    iVar1 = DAT_003d9834;
  }
  if (DAT_003d9838 < DAT_003d98a4) {
    DAT_003d98a4 = DAT_003d9838;
  }
  if (DAT_003d9838 < iVar2) {
    iVar2 = DAT_003d9838;
  }
  DAT_003d98a8 = iVar1 - DAT_003d98a0;
  DAT_003d98ac = iVar2 - DAT_003d98a4;
  DAT_003d98b0 = DAT_003d9818 + in_EDX * DAT_003d9834 + in_EAX;
  return 1;
}

/******************************************************************************
 * Function : sub_0e6c1c (Ghidra: FUN_000e6c1c)
 * Prototype: undefined8 sub_0e6c1c(void);
 * Address  : 0xe6c1c (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x2eeb9, 0x2f414, 0x30a2d, 0x322e9, 0x35758, 0x47755, 0x49426, 0x58b37, 0x58ba8, 0x6f0cd ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e6c1c(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *in_EAX;
  int iVar3;
  int iVar4;
  undefined4 in_EDX;
  uint uVar5;
  
  iVar4 = 0;
  if (DAT_003d98b4 != 0) {
    iVar3 = 0;
    bVar2 = *in_EAX;
    while (bVar2 != 0) {
      bVar2 = *in_EAX;
      if (bVar2 < 0x20) {
        if (bVar2 == 9) {
          if (DAT_003d98b4 == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (uint)*(byte *)(DAT_003d98b4 + 10);
          }
          iVar3 = iVar3 + uVar5 * DAT_00195430;
        }
        else if (bVar2 == 10) {
          if (iVar4 < iVar3) {
            iVar4 = iVar3;
          }
          iVar3 = 0;
        }
      }
      else {
        if (DAT_003d98b4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)*(byte *)(DAT_003d98b4 + 4 + (bVar2 - 0x1f) * 6);
        }
        iVar3 = iVar3 + uVar5;
      }
      pbVar1 = in_EAX + 1;
      in_EAX = in_EAX + 1;
      bVar2 = *pbVar1;
    }
    if (iVar4 < iVar3) goto LAB_000e6cb9;
  }
  iVar3 = iVar4;
LAB_000e6cb9:
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0e6cc4 (Ghidra: FUN_000e6cc4)
 * Prototype: undefined8 sub_0e6cc4(void);
 * Address  : 0xe6cc4 (Size: 90 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5bb9c, 0xe6d80
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e6cc4(void)

{
  byte bVar1;
  byte *in_EAX;
  undefined4 in_EDX;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_003d98b4 != 0) {
    for (; (((bVar1 = *in_EAX, bVar1 != 0x20 && (bVar1 != 9)) && (bVar1 != 10)) && (*in_EAX != 0));
        in_EAX = in_EAX + 1) {
      if (0x20 < *in_EAX) {
        if (DAT_003d98b4 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (uint)*(byte *)(DAT_003d98b4 + 4 + (*in_EAX - 0x1f) * 6);
        }
        iVar3 = iVar3 + uVar2;
      }
    }
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0e6d20 (Ghidra: FUN_000e6d20)
 * Prototype: longlong sub_0e6d20(void);
 * Address  : 0xe6d20 (Size: 77 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x58ba8, 0x6f0cd, 0x8685c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000e6d20(void)

{
  char *in_EAX;
  uint uVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 1;
  if ((DAT_003d98b4 != 0) && (in_EAX != (char *)0x0)) {
    for (; *in_EAX != '\0'; in_EAX = in_EAX + 1) {
      if (*in_EAX == '\n') {
        iVar2 = iVar2 + 1;
      }
    }
    if (DAT_003d98b4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    return CONCAT44(in_EDX,uVar1 * iVar2);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0e6d80 (Ghidra: FUN_000e6d80)
 * Prototype: undefined4 sub_0e6d80(void);
 * Address  : 0xe6d80 (Size: 1817 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 40 -> 0x2e58b, 0x2ee3e, 0x2efb4, 0x2f769, 0x300a7, 0x3012d, 0x303ad, 0x3078d, 0x322e9, 0x3378f ...
 * Callees  : 2 -> 0xe6cc4, 0xe74d4
 ******************************************************************************/
undefined4 FUN_000e6d80(void)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  short sVar4;
  byte *unaff_EBX;
  uint *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint auStack_4c [13];
  int local_14;
  
  puVar5 = auStack_4c + 2;
  if (DAT_003d98b4 != 0) {
    auStack_4c[2] = DAT_003d983c;
    auStack_4c[3] = DAT_003d9840;
    auStack_4c[4] = DAT_003d9844;
    auStack_4c[5] = DAT_003d9848;
    auStack_4c[6] = DAT_003d9824;
    DAT_003d983c = DAT_003d98a0;
    DAT_003d9840 = DAT_003d98a4;
    DAT_003d9844 = DAT_003d98a8;
    DAT_003d9848 = DAT_003d98ac;
    DAT_003d9824 = DAT_003d98b0;
    auStack_4c[0xc] = DAT_003d988c - DAT_003d98a0;
    sVar4 = 0;
    iVar6 = in_EAX + (DAT_003d988c - DAT_003d98a0);
    local_14 = iVar6;
    for (; puVar5[5] = puVar5[0xc] + (DAT_003d9894 - (iVar6 - puVar5[10])), *unaff_EBX != 0;
        unaff_EBX = unaff_EBX + 1) {
      bVar1 = *unaff_EBX;
      if (bVar1 < 0x21) {
        if (bVar1 == 0x20) {
          if (DAT_003d98b4 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (uint)*(byte *)(DAT_003d98b4 + 10);
          }
          iVar6 = iVar6 + uVar2;
          puVar5[-1] = 0xe6e6a;
          uVar7 = FUN_000e6cc4();
          if (DAT_003d9894 < (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20)) {
            if (DAT_003d98b4 == 0) {
              puVar5[9] = 0;
            }
            else {
              puVar5[9] = (uint)*(byte *)(DAT_003d98b4 + 10);
            }
            iVar3 = puVar5[9];
            if (((byte)DAT_003d9874 & 0x20) == 0) {
              if (((byte)DAT_003d9874 & 0x80) == 0) {
                if ((DAT_003d9874._1_1_ & 1) == 0) {
                  if ((DAT_003d9874._1_1_ & 2) != 0) {
                    if (0 < sVar4) {
                      if (DAT_003d98b4 == 0) {
                        puVar5[6] = 0;
                      }
                      else {
                        puVar5[6] = (uint)*(byte *)(DAT_003d98b4 + 10);
                      }
                      iVar3 = iVar3 + (DAT_003d9894 - ((iVar6 - puVar5[6]) - puVar5[10])) /
                                      (uint)(int)sVar4;
                    }
                    iVar6 = puVar5[0xc];
                    puVar5[-1] = iVar3;
                    puVar5[-2] = 0xe701e;
                    FUN_000e74d4();
                    puVar5[10] = (uint)(unaff_EBX + 1);
                    goto LAB_000e7036;
                  }
                  goto LAB_000e7038;
                }
                puVar5[-1] = iVar3;
                iVar6 = puVar5[0xc];
                puVar5[-2] = 0xe6f90;
                FUN_000e74d4();
                puVar5[10] = (uint)(unaff_EBX + 1);
                if (DAT_003d98b4 == 0) goto LAB_000e6fb2;
                sVar4 = 0;
                puVar5 = puVar5 + -1;
              }
              else {
                puVar5[-1] = iVar3;
                iVar6 = puVar5[0xc];
                puVar5[-2] = 0xe6f13;
                FUN_000e74d4();
                puVar5[10] = (uint)(unaff_EBX + 1);
                if (DAT_003d98b4 == 0) goto LAB_000e6fb2;
                sVar4 = 0;
                puVar5 = puVar5 + -1;
              }
            }
            else {
              iVar6 = puVar5[0xc];
              puVar5[-1] = iVar3;
              puVar5[-2] = 0xe6eb5;
              FUN_000e74d4();
              puVar5[10] = (uint)(unaff_EBX + 1);
              if (DAT_003d98b4 == 0) {
LAB_000e6fb2:
                sVar4 = 0;
                puVar5 = puVar5 + -1;
              }
              else {
LAB_000e7036:
                puVar5 = puVar5 + -1;
LAB_000e7038:
                sVar4 = 0;
              }
            }
          }
          else {
            sVar4 = sVar4 + 1;
          }
        }
        else if (bVar1 == 10) {
          if (DAT_003d98b4 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (uint)*(byte *)(DAT_003d98b4 + 10);
          }
          puVar5[-1] = uVar2;
          iVar6 = puVar5[0xc];
          puVar5[-2] = 0xe709f;
          FUN_000e74d4();
          puVar5[10] = (uint)unaff_EBX;
          sVar4 = 0;
          puVar5 = puVar5 + -1;
        }
        else if (bVar1 == 9) {
          uVar2 = 0;
          if (DAT_003d98b4 != 0) {
            uVar2 = (uint)*(byte *)(DAT_003d98b4 + 10);
          }
          iVar6 = iVar6 + uVar2 * DAT_00195430;
          puVar5[-1] = 0xe70f9;
          uVar7 = FUN_000e6cc4();
          if (DAT_003d9894 < (int)uVar7 + (int)((ulonglong)uVar7 >> 0x20)) {
            if (DAT_003d98b4 == 0) {
              puVar5[8] = 0;
            }
            else {
              puVar5[8] = (uint)*(byte *)(DAT_003d98b4 + 10);
            }
            iVar3 = puVar5[8];
            if (((byte)DAT_003d9874 & 0x20) == 0) {
              if (((byte)DAT_003d9874 & 0x80) == 0) {
                if ((DAT_003d9874._1_1_ & 1) == 0) {
                  if ((DAT_003d9874._1_1_ & 2) == 0) goto LAB_000e72e7;
                  if (0 < sVar4) {
                    if (DAT_003d98b4 == 0) {
                      puVar5[7] = 0;
                    }
                    else {
                      puVar5[7] = (uint)*(byte *)(DAT_003d98b4 + 10);
                    }
                    iVar3 = iVar3 + (DAT_003d9894 - ((iVar6 - puVar5[7]) - puVar5[10])) /
                                    (uint)(int)sVar4;
                  }
                  iVar6 = puVar5[0xc];
                  puVar5[-1] = iVar3;
                  puVar5[-2] = 0xe72c1;
                  FUN_000e74d4();
                  puVar5[10] = (uint)(unaff_EBX + 1);
                  if (DAT_003d98b4 == 0) goto LAB_000e72e5;
                  sVar4 = 0;
                  puVar5 = puVar5 + -1;
                }
                else {
                  puVar5[-1] = iVar3;
                  iVar6 = puVar5[0xc];
                  puVar5[-2] = 0xe7239;
                  FUN_000e74d4();
                  puVar5[10] = (uint)(unaff_EBX + 1);
                  if (DAT_003d98b4 == 0) goto LAB_000e725b;
                  sVar4 = 0;
                  puVar5 = puVar5 + -1;
                }
              }
              else {
                puVar5[-1] = iVar3;
                iVar6 = puVar5[0xc];
                puVar5[-2] = 0xe71b5;
                FUN_000e74d4();
                puVar5[10] = (uint)(unaff_EBX + 1);
                if (DAT_003d98b4 == 0) {
LAB_000e725b:
                  sVar4 = 0;
                  puVar5 = puVar5 + -1;
                }
                else {
                  sVar4 = 0;
                  puVar5 = puVar5 + -1;
                }
              }
            }
            else {
              iVar6 = puVar5[0xc];
              puVar5[-1] = iVar3;
              puVar5[-2] = 0xe7146;
              FUN_000e74d4();
              puVar5[10] = (uint)(unaff_EBX + 1);
LAB_000e72e5:
              puVar5 = puVar5 + -1;
LAB_000e72e7:
              sVar4 = 0;
            }
          }
          else {
            sVar4 = sVar4 + (ushort)DAT_00195430;
          }
        }
        else if ((((bVar1 == 6) || (bVar1 == 7)) || (bVar1 == 8)) || (bVar1 == 9)) {
          if (DAT_003d9894 < (int)(iVar6 - puVar5[10])) {
            iVar6 = puVar5[0xc];
            if (DAT_003d98b4 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = (uint)*(byte *)(DAT_003d98b4 + 10);
            }
            puVar5[-1] = uVar2;
            puVar5[-2] = 0xe7354;
            FUN_000e74d4();
            puVar5[10] = (uint)unaff_EBX;
            sVar4 = 0;
            puVar5 = puVar5 + -1;
          }
          switch(*unaff_EBX) {
          case 6:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 0x20;
            break;
          case 7:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 0x80;
            break;
          case 8:
            DAT_003d9874._1_1_ = DAT_003d9874._1_1_ ^ 1;
            break;
          case 9:
            DAT_003d9874._1_1_ = DAT_003d9874._1_1_ ^ 2;
          }
        }
        else if (bVar1 == 0xe) {
          unaff_EBX = unaff_EBX + 1;
        }
      }
      else if (DAT_003d98b4 != 0) {
        iVar6 = iVar6 + (uint)*(byte *)((*unaff_EBX - 0x1f) * 6 + 4 + DAT_003d98b4);
      }
    }
    if (DAT_003d98b4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(DAT_003d98b4 + 10);
    }
    puVar5[-1] = uVar2;
    puVar5[-2] = 0xe7460;
    FUN_000e74d4();
    DAT_003d983c = puVar5[-1];
    DAT_003d9840 = *puVar5;
    DAT_003d9844 = puVar5[1];
    DAT_003d9848 = puVar5[2];
    DAT_003d9824 = puVar5[3];
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0e74d4 (Ghidra: FUN_000e74d4)
 * Prototype: void sub_0e74d4(void);
 * Address  : 0xe74d4 (Size: 557 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe6d80
 * Callees  : 3 -> 0xf3300, 0xf6a84, 0x13a710
 ******************************************************************************/
void FUN_000e74d4(void)

{
  byte bVar1;
  byte *in_EAX;
  byte *in_EDX;
  undefined1 *puVar2;
  uint *puVar3;
  uint auStack_20 [3];
  byte *local_14;
  byte *local_10;
  
  puVar3 = auStack_20 + 2;
  local_14 = in_EDX;
  local_10 = in_EAX;
  if (in_EAX < in_EDX) {
    do {
      bVar1 = *local_10;
      puVar2 = (undefined1 *)puVar3;
      if (bVar1 < 0x21) {
        if (bVar1 == 0x20) {
          if ((DAT_003d9874._1_1_ & 4) != 0) {
            *(uint *)((int)puVar3 + -4) = (uint)DAT_003d9885;
            *(undefined4 *)((int)puVar3 + -8) = 0xe75ff;
            FUN_000f6a84();
            puVar2 = (undefined1 *)((int)puVar3 + -4);
          }
        }
        else if (bVar1 == 9) {
          if ((DAT_003d9874._1_1_ & 4) != 0) {
            *(uint *)((int)puVar3 + -4) = (uint)DAT_003d9885;
            *(undefined4 *)((int)puVar3 + -8) = 0xe7666;
            FUN_000f6a84();
            puVar2 = (undefined1 *)((int)puVar3 + -4);
          }
        }
        else {
          switch(*local_10) {
          case 1:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 4;
            break;
          case 2:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 8;
            break;
          case 3:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 0x10;
            break;
          case 4:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 1;
            break;
          case 5:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 2;
            break;
          case 0xb:
            DAT_003d9874._1_1_ = DAT_003d9874._1_1_ ^ 4;
            break;
          case 0xc:
            DAT_003d9874._0_1_ = (byte)DAT_003d9874 ^ 0x40;
            break;
          case 0xe:
            local_10 = local_10 + 1;
            DAT_003d9885 = *local_10;
          }
        }
      }
      else {
        auStack_20[2] = (uint)bVar1 * 6 + DAT_003d98b4 + -0xba;
        if (((byte)DAT_003d9874 & 0x40) == 0) {
          *(undefined4 *)((int)puVar3 + -4) = 0xe754f;
          FUN_0013a710();
        }
        else {
          *(undefined4 *)((int)puVar3 + -4) = 0xe7542;
          FUN_000f3300();
        }
        if ((DAT_003d9874._1_1_ & 4) != 0) {
          puVar2 = (undefined1 *)((int)puVar3 + -4);
          *(uint *)((int)puVar3 + -4) = (uint)DAT_003d9885;
          *(undefined4 *)((int)puVar3 + -8) = 0xe759e;
          FUN_000f6a84();
        }
      }
      local_10 = local_10 + 1;
      puVar3 = (uint *)puVar2;
    } while (local_10 < local_14);
  }
  return;
}

/******************************************************************************
 * Function : sub_0e7701 (Ghidra: FUN_000e7701)
 * Prototype: void sub_0e7701(void);
 * Address  : 0xe7701 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e7701(void)

{
  undefined1 *puVar1;
  int *in_EAX;
  undefined1 in_DL;
  
  puVar1 = (undefined1 *)*in_EAX;
  *in_EAX = (int)(puVar1 + 1);
  *puVar1 = in_DL;
  in_EAX[4] = in_EAX[4] + 1;
  return;
}

/******************************************************************************
 * Function : dk_sprintf (Ghidra: FUN_000e7714)
 * Prototype: void dk_sprintf(int param_1);
 * Address  : 0xe7714 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Formatted string builder targeting global/stack char buffers
 * Callers  : 238 -> 0x144d2, 0x150f0, 0x16423, 0x16df5, 0x17052, 0x171e4, 0x17fee, 0x1e119, 0x23868, 0x27130 ...
 * Callees  : 1 -> 0xf6c65
 ******************************************************************************/
void FUN_000e7714(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_000f6c65(&stack0x0000000c);
  *(undefined1 *)(param_1 + iVar1) = 0;
  return;
}

/******************************************************************************
 * Function : sub_0e7750 (Ghidra: FUN_000e7750)
 * Prototype: undefined8 sub_0e7750(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
 * Address  : 0xe7750 (Size: 373 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6a689, 0x6aac0, 0x6b4c7
 * Callees  : 8 -> 0xe6a30, 0xe6a6c, 0xe6b20, 0xe846c, 0xebeec, 0xf0cc0, 0xf7780, 0xf7786
 ******************************************************************************/
undefined8 FUN_000e7750(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char extraout_CL;
  char extraout_CL_00;
  char cVar3;
  char extraout_CL_01;
  char extraout_CL_02;
  undefined4 in_EDX;
  byte local_4c;
  
  FUN_000f7780();
  iVar1 = FUN_000e6a30();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_000ebeec();
    cVar3 = extraout_CL;
    if (DAT_003d9876 == 0) {
      FUN_000f7786();
      DAT_003d9876 = (ushort)local_4c;
      cVar3 = extraout_CL_00;
    }
    if (*(int *)(&DAT_00194fea + cVar3 * 0x26) < 0x100) {
      DAT_003d987a = 0;
      FUN_000f7786();
      cVar3 = extraout_CL_02;
    }
    else {
      DAT_003d987a = 1;
      FUN_000f0cc0();
      cVar3 = extraout_CL_01;
    }
    DAT_003d9814 = 0xa0000;
    DAT_003d982c = (uint)*(ushort *)(&DAT_00194fe0 + cVar3 * 0x26);
    DAT_003d9874 = 0;
    DAT_003d9830 = (uint)*(ushort *)(&DAT_00194fe2 + cVar3 * 0x26);
    DAT_003d9885 = 0;
    DAT_003d9834 = param_2;
    DAT_003d9838 = param_3;
    DAT_003d9878 = (short)cVar3;
    FUN_000e6a6c();
    FUN_000e6b20();
    if (param_4 != 0) {
      FUN_000e846c(param_4);
    }
    uVar2 = 1;
    DAT_003d98c4 = 1;
    DAT_003d9810 = 1;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0e7904 (Ghidra: FUN_000e7904)
 * Prototype: undefined8 sub_0e7904(void);
 * Address  : 0xe7904 (Size: 39 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x150f0, 0x2dfac, 0x2f9f5, 0x30cb9, 0x32d8c, 0x36ff4, 0x374c3, 0x6a689, 0x6aac0, 0x6ae80 ...
 * Callees  : 1 -> 0xf77d0
 ******************************************************************************/
undefined8 FUN_000e7904(void)

{
  undefined4 in_EDX;
  
  FUN_000f77d0();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e792c (Ghidra: FUN_000e792c)
 * Prototype: undefined8 sub_0e792c(void);
 * Address  : 0xe792c (Size: 79 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6a652, 0x6a689, 0x6aac0
 * Callees  : 2 -> 0xebeec, 0xf7786
 ******************************************************************************/
undefined8 FUN_000e792c(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  
  if (DAT_003d98c4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_000ebeec();
    FUN_000f7786();
    uVar1 = 1;
    DAT_003d98c4 = 0;
    DAT_003d9810 = 0;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0e797c (Ghidra: FUN_000e797c)
 * Prototype: undefined4 sub_0e797c(void);
 * Address  : 0xe797c (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x150f0, 0x15251, 0x2dfac, 0x2fda1, 0x35c1e, 0x35c5a, 0x35d29, 0x35e19, 0x36ff4, 0x374c3 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000e797c(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_0e79ac (Ghidra: FUN_000e79ac)
 * Prototype: undefined8 sub_0e79ac(void);
 * Address  : 0xe79ac (Size: 80 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe6a30
 * Callees  : 2 -> 0xf0d90, 0xf0e64
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000e79ac(void)

{
  undefined4 in_EDX;
  int iVar1;
  undefined8 uVar2;
  
  FUN_000f0d90();
  for (iVar1 = 0x26; *(short *)(&DAT_00194fe0 + iVar1) != 0; iVar1 = iVar1 + 0x26) {
    if (0xff < *(int *)(&DAT_00194fea + iVar1)) {
      uVar2 = FUN_000f0e64();
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      *(int *)(&DAT_00194fe6 + iVar1) = (int)uVar2;
    }
  }
  _DAT_0019500c = 1;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e79fc (Ghidra: FUN_000e79fc)
 * Prototype: undefined8 sub_0e79fc(void);
 * Address  : 0xe79fc (Size: 175 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x150f0, 0x2dfac, 0x2f9f5, 0x32d8c, 0x35c1e, 0x35d29, 0x35e19, 0x36ff4, 0x374c3, 0x623aa ...
 * Callees  : 3 -> 0xeb840, 0xeb974, 0xf0d1c
 ******************************************************************************/
undefined8 FUN_000e79fc(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  int extraout_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  short sVar6;
  
  bVar5 = 0;
  FUN_000eb840();
  if (DAT_003d987a == '\0') {
    puVar2 = DAT_003d9818;
    puVar3 = DAT_003d9814;
    for (iVar1 = DAT_003d9834 * DAT_003d9838 >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    }
  }
  else {
    puVar2 = DAT_003d9818;
    sVar6 = 0;
    if (DAT_003d9834 * DAT_003d9838 == 0) {
      FUN_000eb974();
      return CONCAT44(in_EDX,1);
    }
    do {
      FUN_000f0d1c(sVar6);
      puVar3 = puVar2;
      puVar4 = DAT_003d9814;
      for (iVar1 = extraout_ECX >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puVar2 = puVar2 + 0x4000;
      sVar6 = sVar6 + 1;
    } while (extraout_EDX != 0);
  }
  FUN_000eb974();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e7aac (Ghidra: FUN_000e7aac)
 * Prototype: undefined8 sub_0e7aac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6, uint param_7,undefined1 param_8);
 * Address  : 0xe7aac (Size: 440 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xe6a10, 0xeb840, 0xeb974, 0xf0d1c
 ******************************************************************************/
undefined8
FUN_000e7aac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
            uint param_7,undefined1 param_8)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  undefined4 in_EDX;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  
  bVar7 = 0;
  FUN_000eb840();
  local_20 = extraout_EDX + param_5 * DAT_003d982c;
  local_28 = extraout_EDX + param_6 + param_5 * DAT_003d982c;
  local_2c = local_20 >> 0x10;
  puVar4 = (undefined4 *)(param_1 + param_2 + param_3 * DAT_003d9834);
  if (DAT_003d987a != '\0') {
    FUN_000f0d1c();
  }
  for (local_1c = 0; (local_1c & 0xffff) < param_7; local_1c = local_1c + 1) {
    uVar2 = local_20 >> 0x10;
    if (uVar2 != local_2c) {
      FUN_000f0d1c();
      uVar2 = extraout_EDX_00;
    }
    puVar6 = (undefined4 *)((local_20 & 0xffff) + 0xa0000);
    if (uVar2 == local_28 >> 0x10) {
      puVar5 = puVar4;
      for (uVar3 = param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      for (uVar3 = param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
      }
      FUN_000e6a10();
      local_2c = uVar2;
    }
    else {
      uVar3 = 0x10000 - (local_20 & 0xffff);
      iVar1 = param_6 - uVar3;
      puVar5 = puVar4;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
      }
      FUN_000e6a10(uVar3,iVar1,param_8);
      FUN_000f0d1c();
      puVar6 = (undefined4 *)(uVar3 + (int)puVar4);
      puVar5 = (undefined4 *)0xa0000;
      for (uVar2 = extraout_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      }
      for (uVar2 = extraout_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      }
      FUN_000e6a10(uVar3,iVar1,(undefined4 *)(uVar3 + (int)puVar4));
      local_2c = local_28 >> 0x10;
    }
    local_20 = local_20 + DAT_003d9834;
    local_28 = local_28 + DAT_003d982c;
    puVar4 = (undefined4 *)((int)puVar4 + DAT_003d9834);
  }
  FUN_000eb974();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e7c64 (Ghidra: FUN_000e7c64)
 * Prototype: undefined8 sub_0e7c64(byte param_1);
 * Address  : 0xe7c64 (Size: 253 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xeb840, 0xeb974, 0xf0d1c
 ******************************************************************************/
undefined8 FUN_000e7c64(byte param_1)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int iVar7;
  short sVar8;
  
  bVar6 = 0;
  FUN_000eb840();
  iVar2 = DAT_003d9834 * DAT_003d9838;
  if (DAT_003d987a == '\0') {
    iVar2 = iVar2 >> 2;
    puVar3 = DAT_003d9818;
    puVar4 = DAT_003d9814;
    do {
      *puVar4 = *puVar3;
      (puVar3 + (uint)bVar6 * -2 + 1)[-1] =
           (uint)param_1 * 0x1000000 + (uint)CONCAT12(param_1,CONCAT11(param_1,param_1));
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    } while (iVar2 != 0);
  }
  else {
    puVar3 = DAT_003d9818;
    sVar8 = 0;
    if (iVar2 == 0) {
      FUN_000eb974();
      return CONCAT44(in_EDX,1);
    }
    do {
      iVar7 = iVar2;
      if (0xffff < iVar2) {
        iVar7 = 0x10000;
      }
      FUN_000f0d1c(iVar7,sVar8);
      iVar1 = iVar7 >> 2;
      puVar4 = puVar3;
      puVar5 = DAT_003d9814;
      do {
        *puVar5 = *puVar4;
        (puVar4 + (uint)bVar6 * -2 + 1)[-1] =
             (uint)CONCAT12(param_1,CONCAT11(param_1,param_1)) + (uint)param_1 * 0x1000000;
        iVar1 = iVar1 + -1;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      } while (iVar1 != 0);
      iVar2 = iVar2 - iVar7;
      puVar3 = puVar3 + 0x4000;
      sVar8 = sVar8 + 1;
    } while (iVar2 != 0);
  }
  FUN_000eb974();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e8214 (Ghidra: FUN_000e8214)
 * Prototype: undefined8 sub_0e8214(void);
 * Address  : 0xe8214 (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x62578, 0x627b5, 0xe8d80, 0xefe94, 0xf0064
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e8214(void)

{
  byte bVar1;
  undefined4 in_EDX;
  
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e8230 (Ghidra: FUN_000e8230)
 * Prototype: void sub_0e8230(void);
 * Address  : 0xe8230 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2f1c8, 0x2f1d2
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e8230(void)

{
  undefined *in_EAX;
  
  PTR_FUN_000e8238_00195434 = in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_0e8238 (Ghidra: FUN_000e8238)
 * Prototype: void sub_0e8238(void);
 * Address  : 0xe8238 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe823c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e8238(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0e823c (Ghidra: FUN_000e823c)
 * Prototype: undefined8 sub_0e823c(void);
 * Address  : 0xe823c (Size: 205 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6a356, 0xe830c
 * Callees  : 5 -> 0xe8238, 0xe83c8, 0xe9498, 0xe97a0, 0xe984c
 ******************************************************************************/
undefined8 FUN_000e823c(void)

{
  int in_EAX;
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_EDX;
  code *local_18;
  
  if ((*(byte *)(in_EAX + 0x28) & 1) == 0) {
    local_18 = FUN_000e9484;
  }
  else {
    local_18 = FUN_000e9498;
  }
  FUN_000e83c8();
  pcVar1 = (char *)(*(code *)PTR_FUN_000e8238_00195434)();
  if (*pcVar1 == '*') {
    uVar2 = (*local_18)();
    **(undefined4 **)(in_EAX + 0x1c) = uVar2;
    if (**(int **)(in_EAX + 0x1c) != 0) {
LAB_000e82e8:
      if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
        **(int **)(in_EAX + 0x20) = **(int **)(in_EAX + 0x1c) + *(int *)(in_EAX + 0x24);
      }
      uVar2 = 1;
      goto LAB_000e8300;
    }
  }
  else {
    iVar3 = FUN_000e97a0();
    *(int *)(in_EAX + 0x24) = iVar3;
    if (iVar3 < 1) {
      uVar2 = 0xffffff9b;
      goto LAB_000e8300;
    }
    uVar2 = (*local_18)();
    **(undefined4 **)(in_EAX + 0x1c) = uVar2;
    if (**(int **)(in_EAX + 0x1c) != 0) {
      iVar3 = FUN_000e984c();
      if (iVar3 != *(int *)(in_EAX + 0x24)) {
        **(undefined4 **)(in_EAX + 0x1c) = 0;
        **(undefined4 **)(in_EAX + 0x20) = 0;
        uVar2 = 0xffffff9b;
        *(undefined4 *)(in_EAX + 0x24) = 0;
        goto LAB_000e8300;
      }
      goto LAB_000e82e8;
    }
  }
  uVar2 = 0xffffff9c;
LAB_000e8300:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_LbDataLoadAll_0e830c (Ghidra: FUN_000e830c)
 * Prototype: undefined8 dk_LbDataLoadAll_0e830c(void);
 * Address  : 0xe830c (Size: 186 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : References 'LbDataLoadAll'
 * Callers  : 11 -> 0x150f0, 0x2ffe4, 0x30ef8, 0x31a51, 0x36654, 0x4c0ac, 0x6a553, 0x6a689, 0x6aac0, 0x6b0c8 ...
 * Callees  : 5 -> 0xe7714, 0xe823c, 0xe83c8, 0xe8568, 0xf0f8c
 * Strings  :
 *   - 0x16cc98: "LbDataLoadAll"
 *   - 0x16cca6: "ERROR: Allocation %s.\n"
 *   - 0x16ccbd: "LbDataLoadAll() : Memory alloaction error before loading file: %s"
 *   - 0x16ccff: "ERROR: File %s.\n"
 *   - 0x16cd10: "LbDataLoadAll() : Error loading file: %s"
 ******************************************************************************/
undefined8 FUN_000e830c(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  int extraout_EDX;
  int iVar2;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int extraout_EDX_03;
  ushort uVar3;
  undefined8 uVar4;
  undefined1 local_148 [152];
  undefined1 local_b0 [152];
  
  FUN_000f0f8c(s_LbDataLoadAll_0016cc98);
  uVar3 = 0;
  iVar2 = *(int *)(extraout_ECX + 0x1c);
  iVar1 = extraout_ECX;
  while (iVar2 != 0) {
    FUN_000e83c8();
    iVar1 = extraout_ECX_00;
    iVar2 = *(int *)(extraout_EDX + 0x48);
  }
  for (iVar2 = *(int *)(iVar1 + 0x1c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x48)) {
    uVar4 = FUN_000e823c();
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == -100) {
      FUN_000e8568(s_ERROR__Allocation__s__0016cca6,iVar2);
      uVar3 = uVar3 + 1;
      FUN_000e7714(local_b0,s_LbDataLoadAll_____Memory_alloact_0016ccbd,extraout_EDX_00);
      iVar2 = extraout_EDX_01;
    }
    else if ((int)uVar4 == -0x65) {
      FUN_000e8568(s_ERROR__File__s__0016ccff,iVar2);
      uVar3 = uVar3 + 1;
      FUN_000e7714(local_148,s_LbDataLoadAll_____Error_loading_f_0016cd10,extraout_EDX_02);
      iVar2 = extraout_EDX_03;
    }
  }
  return CONCAT44(in_EDX,(uint)uVar3);
}

/******************************************************************************
 * Function : sub_0e83c8 (Ghidra: FUN_000e83c8)
 * Prototype: undefined8 sub_0e83c8(void);
 * Address  : 0xe83c8 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6a356, 0xe823c, 0xe830c, 0xe83f0
 * Callees  : 1 -> 0xe94b0
 ******************************************************************************/
undefined8 FUN_000e83c8(void)

{
  int in_EAX;
  undefined4 in_EDX;
  int extraout_EDX;
  
  if (**(int **)(in_EAX + 0x1c) != 0) {
    FUN_000e94b0();
    **(undefined4 **)(extraout_EDX + 0x1c) = 0;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e83f0 (Ghidra: FUN_000e83f0)
 * Prototype: undefined8 sub_0e83f0(void);
 * Address  : 0xe83f0 (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x150f0, 0x30057, 0x31213, 0x31bd6, 0x3699b, 0x4c14e, 0x6a652, 0x6a689, 0x6aac0, 0x6b12b ...
 * Callees  : 1 -> 0xe83c8
 ******************************************************************************/
undefined8 FUN_000e83f0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  int extraout_EDX;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  while (iVar1 != 0) {
    FUN_000e83c8();
    iVar1 = *(int *)(extraout_EDX + 0x48);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e8420 (Ghidra: FUN_000e8420)
 * Prototype: undefined8 sub_0e8420(int param_1);
 * Address  : 0xe8420 (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8d80
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e8420(int param_1)

{
  undefined1 uVar1;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  
  out(0x3c7,0);
  iVar2 = 0;
  do {
    uVar1 = in(0x3c9);
    *(undefined1 *)(param_1 + iVar2) = uVar1;
    uVar1 = in(0x3c9);
    *(undefined1 *)(param_1 + iVar2 + 1) = uVar1;
    iVar3 = iVar2 + 2;
    uVar1 = in(0x3c9);
    iVar2 = iVar2 + 3;
    *(undefined1 *)(param_1 + iVar3) = uVar1;
  } while (iVar2 < 0x300);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e846c (Ghidra: FUN_000e846c)
 * Prototype: undefined8 sub_0e846c(undefined1 *param_1);
 * Address  : 0xe846c (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x150f0, 0x2347d, 0x24ab9, 0x2dfac, 0x2f9f5, 0x2ffe4, 0x30ef8, 0x32d30, 0x62578, 0x627b5 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e846c(undefined1 *param_1)

{
  ushort uVar1;
  undefined4 in_EDX;
  undefined1 *puVar2;
  
  out(0x3c6,0xff);
  uVar1 = 0;
  while (uVar1 < 0x100) {
    out(0x3c8,(char)uVar1);
    out(0x3c9,*param_1);
    puVar2 = param_1 + 2;
    out(0x3c9,param_1[1]);
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 3;
    out(0x3c9,*puVar2);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e8560 (Ghidra: FUN_000e8560)
 * Prototype: undefined4 sub_0e8560(void);
 * Address  : 0xe8560 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x150f0, 0x2dfac, 0x35c1e, 0x35c5a, 0x35d29, 0x377eb, 0x6b4c7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000e8560(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_0e8568 (Ghidra: FUN_000e8568)
 * Prototype: void sub_0e8568(void);
 * Address  : 0xe8568 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe830c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e8568(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0e8830 (Ghidra: FUN_000e8830)
 * Prototype: undefined8 sub_0e8830(void);
 * Address  : 0xe8830 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xeb818
 ******************************************************************************/
undefined8 FUN_000e8830(void)

{
  undefined4 in_EDX;
  undefined8 uVar1;
  
  uVar1 = FUN_000eb818();
  return CONCAT44(in_EDX,(uint)((uint)((int)((ulonglong)uVar1 >> 0x20) * 2) <
                               (uint)((int)uVar1 - DAT_003d9ac8)));
}

/******************************************************************************
 * Function : sub_0e8858 (Ghidra: FUN_000e8858)
 * Prototype: undefined8 sub_0e8858(void);
 * Address  : 0xe8858 (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x150f0
 * Callees  : 1 -> 0xeb818
 ******************************************************************************/
undefined8 FUN_000e8858(void)

{
  int iVar1;
  undefined4 in_EDX;
  undefined8 uVar2;
  
  iVar1 = FUN_000eb818();
  do {
    uVar2 = FUN_000eb818();
  } while ((uint)((int)uVar2 - iVar1) < (uint)((ulonglong)uVar2 >> 0x20));
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e8876 (Ghidra: FUN_000e8876)
 * Prototype: longlong sub_0e8876(void);
 * Address  : 0xe8876 (Size: 60 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x151f8
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_000e8876(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  undefined2 in_DX;
  uint unaff_retaddr;
  
  _FUN_0019543e = in_EAX;
  _DAT_00195442 = in_DX;
  if ((DAT_00195902 < 2) || (7 < DAT_00195902)) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0e88b2 (Ghidra: FUN_000e88b2)
 * Prototype: void sub_0e88b2(void);
 * Address  : 0xe88b2 (Size: 161 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xf4714, 0x19543e
 ******************************************************************************/
/* WARNING: This function may have set the stack pointer */

void FUN_000e88b2(void)

{
  uint extraout_EDX;
  uint unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined2 in_CS;
  undefined2 in_SS;
  ushort in_DS;
  undefined1 auStack_24 [4];
  
  FUN_000f4714();
  DAT_00195444 = DAT_001958e4;
  DAT_001958e4 = &DAT_003d9acc;
  DAT_003d9ec4 = (unaff_EBP & 0xffff) * 0x10 + (unaff_ESI & 0xffff);
  if ((DAT_00195902 < 2) || (7 < DAT_00195902)) {
    if (DAT_00195902 == 1) {
      DAT_003d9ec8 = (uint)in_DS;
    }
    else {
      DAT_003d9ec8 = 0x34;
    }
  }
  else {
    DAT_003d9ec8 = 0x34;
  }
  DAT_003d9ebc = extraout_EDX & 0xffff;
  DAT_003d9ec0 = unaff_EDI & 0xffff;
  DAT_003d9eb4 = 0xe8936;
  DAT_00195438._0_4_ = auStack_24;
  DAT_00195438._4_2_ = in_SS;
  DAT_003d9eb8 = in_CS;
  FUN_0019543e();
  DAT_001958e4 = (undefined *)DAT_00195444;
  return;
}

/******************************************************************************
 * Function : sub_0e8960 (Ghidra: FUN_000e8960)
 * Prototype: undefined8 sub_0e8960(void);
 * Address  : 0xe8960 (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 19 -> 0x29738, 0x29800, 0x298b5, 0x29979, 0x299f8, 0x29ac2, 0x29b54, 0x29bfe, 0x29d32, 0x29d96 ...
 * Callees  : 1 -> 0xf78b2
 ******************************************************************************/
undefined8 FUN_000e8960(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000f78b2();
  return CONCAT44(in_EDX,(uint)(iVar1 == 0));
}

/******************************************************************************
 * Function : sub_0e8974 (Ghidra: FUN_000e8974)
 * Prototype: void sub_0e8974(void);
 * Address  : 0xe8974 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0xe98f0, 0xf2188, 0xf23de, 0xf25b4, 0xfdad0, 0x114acb
 * Callees  : 1 -> 0xf78ed
 ******************************************************************************/
void FUN_000e8974(void)

{
  FUN_000f78ed();
  return;
}

/******************************************************************************
 * Function : sub_0e8980 (Ghidra: FUN_000e8980)
 * Prototype: undefined4 sub_0e8980(void);
 * Address  : 0xe8980 (Size: 154 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 23 -> 0x151f8, 0x2c833, 0x2d32d, 0x2e6c4, 0x2ed41, 0x2ff2e, 0x35b51, 0x35bbf, 0x3a7b8, 0x617c9 ...
 * Callees  : 5 -> 0xe8960, 0xf78fe, 0xf790b, 0xf79b7, 0xf79e0
 ******************************************************************************/
undefined4 FUN_000e8980(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  byte in_DL;
  char extraout_DL;
  
  iVar1 = FUN_000e8960();
  if (iVar1 == 0) {
    if (extraout_DL == '\x02') {
      return 0xffffffff;
    }
    if (extraout_DL == '\x01') {
      in_DL = in_DL ^ 1;
    }
  }
  uVar3 = extraout_ECX;
  if (in_DL == 0) {
    FUN_000f78fe();
    FUN_000f790b();
    FUN_000f79b7();
    uVar3 = extraout_ECX_00;
  }
  uVar2 = 0xffffffff;
  if (in_DL == 0) {
    uVar2 = FUN_000f79e0(uVar3,0x222,0x40);
  }
  else if (in_DL < 2) {
    uVar2 = FUN_000f79e0(uVar3,0x202,0x40);
  }
  else if (in_DL == 2) {
    uVar2 = FUN_000f79e0(uVar3,0x200,0x40);
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0e8a1c (Ghidra: FUN_000e8a1c)
 * Prototype: undefined4 sub_0e8a1c(void);
 * Address  : 0xe8a1c (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 26 -> 0x151f8, 0x2c833, 0x2d32d, 0x2e6c4, 0x2ed41, 0x2ff2e, 0x35b51, 0x35bbf, 0x36ff4, 0x3a839 ...
 * Callees  : 1 -> 0xf79b7
 ******************************************************************************/
undefined4 FUN_000e8a1c(void)

{
  int iVar1;
  
  iVar1 = FUN_000f79b7();
  if (iVar1 == 0) {
    return 1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0e8a34 (Ghidra: FUN_000e8a34)
 * Prototype: undefined4 sub_0e8a34(void);
 * Address  : 0xe8a34 (Size: 75 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x3a857, 0x61883, 0x619be, 0x6e2aa, 0xe98f0, 0xeaa28, 0xead2f, 0xeb021, 0xeb30c, 0xeb6b6 ...
 * Callees  : 1 -> 0xf7c2e
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000e8a7b) */

undefined4 FUN_000e8a34(void)

{
  undefined4 uVar1;
  byte unaff_BL;
  
  if (unaff_BL == 0) {
    uVar1 = FUN_000f7c2e();
    return uVar1;
  }
  if (unaff_BL < 2) {
    uVar1 = FUN_000f7c2e();
    return uVar1;
  }
  if (unaff_BL == 2) {
    uVar1 = FUN_000f7c2e();
    return uVar1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0e8a80 (Ghidra: FUN_000e8a80)
 * Prototype: void sub_0e8a80(void);
 * Address  : 0xe8a80 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 25 -> 0x151f8, 0x2c833, 0x2d32d, 0x2e6c4, 0x2ed41, 0x2ff2e, 0x35b51, 0x3a857, 0x618f5, 0x619be ...
 * Callees  : 1 -> 0xf7c71
 ******************************************************************************/
void FUN_000e8a80(void)

{
  FUN_000f7c71();
  return;
}

/******************************************************************************
 * Function : sub_0e8a8c (Ghidra: FUN_000e8a8c)
 * Prototype: void sub_0e8a8c(void);
 * Address  : 0xe8a8c (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x35bbf, 0x617c9, 0x61883, 0xe98c8
 * Callees  : 1 -> 0xf7d6c
 ******************************************************************************/
void FUN_000e8a8c(void)

{
  FUN_000f7d6c();
  return;
}

/******************************************************************************
 * Function : sub_0e8a98 (Ghidra: FUN_000e8a98)
 * Prototype: undefined8 sub_0e8a98(void);
 * Address  : 0xe8a98 (Size: 41 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x2b36c, 0x2c502, 0x2c833, 0x2ed41, 0x2ff2e, 0xe97a0, 0xeb531, 0x114cf2
 * Callees  : 3 -> 0xe8980, 0xe8a1c, 0xf7f41
 ******************************************************************************/
undefined8 FUN_000e8a98(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000e8980();
  if (iVar1 != -1) {
    iVar1 = FUN_000f7f41();
    FUN_000e8a1c();
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_0e8ac4 (Ghidra: FUN_000e8ac4)
 * Prototype: undefined4 sub_0e8ac4(void);
 * Address  : 0xe8ac4 (Size: 41 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xeb531
 * Callees  : 2 -> 0xe8b48, 0xf7f7e
 ******************************************************************************/
undefined4 FUN_000e8ac4(void)

{
  int iVar1;
  
  iVar1 = FUN_000f7f7e();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_000e8b48();
  return 1;
}

/******************************************************************************
 * Function : sub_0e8af0 (Ghidra: FUN_000e8af0)
 * Prototype: undefined8 sub_0e8af0(void);
 * Address  : 0xe8af0 (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xeb531
 * Callees  : 2 -> 0xe8b48, 0xf7f9b
 ******************************************************************************/
undefined8 FUN_000e8af0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000f7f9b();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  FUN_000e8b48();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e8b30 (Ghidra: FUN_000e8b30)
 * Prototype: undefined4 sub_0e8b30(void);
 * Address  : 0xe8b30 (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xea1ef
 ******************************************************************************/
undefined4 FUN_000e8b30(void)

{
  int iVar1;
  
  iVar1 = FUN_000ea1ef();
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0e8b48 (Ghidra: FUN_000e8b48)
 * Prototype: void sub_0e8b48(void);
 * Address  : 0xe8b48 (Size: 315 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe8ac4, 0xe8af0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e8b48(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = in_EAX + 0xd6;
  pcVar2 = pcVar3;
  pcVar4 = in_EAX;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar2 = in_EAX + 0x90;
  do {
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(in_EAX + 0xa2) = *(undefined4 *)(in_EAX + 0xd2);
  *(int *)(in_EAX + 0x9e) = *(int *)(in_EAX + 0xca) >> 0x18;
  in_EAX[0xaf] = in_EAX[0xd0] & 0x1f;
  in_EAX[0xa6] = '\0';
  in_EAX[0xb0] = (char)((*(ushort *)(in_EAX + 0xd0) & 0x1e0) >> 5);
  in_EAX[0xa7] = '\0';
  in_EAX[0xa8] = '\0';
  in_EAX[0xa9] = '\0';
  in_EAX[0xaa] = '\0';
  *(ushort *)(in_EAX + 0xb1) = (*(ushort *)(in_EAX + 0xd0) >> 9) + 0x7bc;
  in_EAX[0xae] = '\0';
  in_EAX[0xad] = '\0';
  in_EAX[0xb6] = (in_EAX[0xce] & 0x1fU) * '\x02';
  in_EAX[0xac] = '\0';
  in_EAX[0xab] = '\0';
  in_EAX[0xb5] = (char)((*(ushort *)(in_EAX + 0xce) & 0x7e0) >> 5);
  in_EAX[0xb3] = '\0';
  in_EAX[0xb7] = '\0';
  in_EAX[0xb4] = (byte)((ushort)*(undefined2 *)(in_EAX + 0xce) >> 0xb);
  return;
}

/******************************************************************************
 * Function : sub_0e8c83 (Ghidra: FUN_000e8c83)
 * Prototype: undefined4 * sub_0e8c83(void);
 * Address  : 0xe8c83 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 25 -> 0x15251, 0x29738, 0x2d4a7, 0x2ee00, 0x31bd6, 0x32612, 0x327b5, 0x329ae, 0x32b21, 0x34f38 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 * FUN_000e8c83(void)

{
  undefined4 *in_EAX;
  uint uVar1;
  undefined4 *in_EDX;
  uint unaff_EBX;
  undefined4 *puVar2;
  
  puVar2 = in_EAX;
  for (uVar1 = unaff_EBX >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = unaff_EBX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_EDX;
    in_EDX = (undefined4 *)((int)in_EDX + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return in_EAX;
}

/******************************************************************************
 * Function : sub_0e8ca8 (Ghidra: FUN_000e8ca8)
 * Prototype: char * sub_0e8ca8(void);
 * Address  : 0xe8ca8 (Size: 31 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 42 -> 0x1b8c4, 0x2a0be, 0x2dfac, 0x2eeb9, 0x2f414, 0x2f8a2, 0x2f9f5, 0x303ad, 0x306e4, 0x30e88 ...
 * Callees  : 0 -> 
 ******************************************************************************/
char * FUN_000e8ca8(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = in_EAX;
  do {
    cVar1 = *in_EDX;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return in_EAX;
    }
    cVar1 = in_EDX[1];
    in_EDX = in_EDX + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return in_EAX;
}

/******************************************************************************
 * Function : sub_0e8cc8 (Ghidra: FUN_000e8cc8)
 * Prototype: longlong sub_0e8cc8(void);
 * Address  : 0xe8cc8 (Size: 66 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x1cf1c, 0x2daae, 0x2dc8e, 0x498d9, 0x62d70, 0x6ff36, 0x9ef3c, 0xbe524, 0xc0740, 0xc0b9c ...
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000e8cc8(void)

{
  int iVar1;
  uint in_EAX;
  uint in_EDX;
  uint uVar2;
  
  if (in_EAX != 0) {
    iVar1 = 0x1f;
    if (in_EAX != 0) {
      for (; in_EAX >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    for (uVar2 = (uint)*(ushort *)(&DAT_000e8d0a + iVar1 * 2); (int)(in_EAX / uVar2) < (int)uVar2;
        uVar2 = uVar2 + in_EAX / uVar2 >> 1) {
    }
    return CONCAT44(in_EDX,uVar2);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0e8d4a (Ghidra: FUN_000e8d4a)
 * Prototype: undefined8 sub_0e8d4a(void);
 * Address  : 0xe8d4a (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 27 -> 0x2252b, 0x36f48, 0x373bc, 0x3743b, 0xeb818, 0x1012c0, 0x101c78, 0x102e4c, 0x1032d8, 0x1037c8 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e8d4a(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = FUN_000f802e();
  if (uVar1 < DAT_003df164) {
    uVar1 = uVar1 + 0x83d600;
  }
  return CONCAT44(in_EDX,uVar1 - DAT_003df164);
}

/******************************************************************************
 * Function : sub_0e8d50 (Ghidra: FUN_000e8d50)
 * Prototype: longdouble sub_0e8d50(void);
 * Address  : 0xe8d50 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x2252b, 0x2d545, 0x373bc, 0x3743b, 0x4de8c, 0x51954, 0x65864, 0x659ab, 0xd4188, 0xe5f70 ...
 * Callees  : 0 -> 
 ******************************************************************************/
longdouble FUN_000e8d50(void)

{
  longdouble in_ST0;
  
  return ROUND(in_ST0);
}

/******************************************************************************
 * Function : sub_0e8d6e (Ghidra: FUN_000e8d6e)
 * Prototype: longdouble sub_0e8d6e(void);
 * Address  : 0xe8d6e (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f80e8) */

longdouble FUN_000e8d6e(void)

{
  int unaff_EBP;
  
  if (unaff_EBP != 0) {
    FUN_000f8108();
  }
  return (longdouble)0;
}

/******************************************************************************
 * Function : sub_0e8d73 (Ghidra: FUN_000e8d73)
 * Prototype: void sub_0e8d73(void);
 * Address  : 0xe8d73 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10ef5b
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e8d73(void)

{
  code *pcVar1;
  char cVar2;
  
  if (DAT_0019595c != '\x01') {
    return;
  }
  if (DAT_00195904 == '\0') {
    if (DAT_00195902 == '\t') {
      (**(code **)(DAT_001955b8 + 0x30))();
    }
    else if (DAT_00195902 == '\0') {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else if (DAT_00195902 == '\x01') {
      FUN_00113662();
    }
    else {
      cVar2 = FUN_00113662();
      if (cVar2 != '\x01') {
        FUN_000f82d7();
      }
    }
  }
  else {
    FUN_000f8312();
  }
  DAT_0019595c = 0;
  return;
}

/******************************************************************************
 * Function : sub_0e8d80 (Ghidra: FUN_000e8d80)
 * Prototype: uint sub_0e8d80(void);
 * Address  : 0xe8d80 (Size: 419 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x24ab9, 0x2dfac, 0x30782, 0x32d30, 0x4baad, 0x4bbe4
 * Callees  : 4 -> 0xe6a10, 0xe8214, 0xe8420, 0xe846c
 ******************************************************************************/
uint FUN_000e8d80(void)

{
  undefined1 *in_EAX;
  short sVar1;
  byte in_DL;
  char unaff_BL;
  int iVar2;
  char acStackY_8314 [32764];
  char local_314 [768];
  byte local_14;
  
  local_14 = in_DL;
  if (unaff_BL == '\x01') {
    FUN_000e8420(&DAT_003da1cc);
    if (in_EAX == (undefined1 *)0x0) {
      in_EAX = &DAT_003d9ecc;
      FUN_000e6a10();
    }
    for (DAT_003da4cc = 0; (int)DAT_003da4cc <= (int)(uint)local_14; DAT_003da4cc = DAT_003da4cc + 1
        ) {
      for (sVar1 = 0; iVar2 = (int)sVar1, iVar2 < 0x300; sVar1 = sVar1 + 1) {
        local_314[iVar2] =
             (char)((int)((int)(short)((ushort)(byte)in_EAX[iVar2] -
                                      (ushort)(byte)(&DAT_003da1cc)[iVar2]) * DAT_003da4cc) /
                   (int)(uint)local_14) + (&DAT_003da1cc)[iVar2];
      }
      FUN_000e8214();
      FUN_000e846c(local_314);
    }
    DAT_003da4d0 = 0;
    return DAT_003da4cc;
  }
  if (DAT_003da4d0 == '\0') {
    DAT_003da4cc = 0;
    DAT_003da4d0 = '\x01';
    FUN_000e8420(&DAT_003da1cc);
    if (in_EAX == (undefined1 *)0x0) {
      FUN_000e6a10();
    }
  }
  else {
    DAT_003da4cc = DAT_003da4cc + 1;
    if (in_DL == DAT_003da4cc) {
      DAT_003da4d0 = '\0';
    }
  }
  if (in_EAX == (undefined1 *)0x0) {
    in_EAX = &DAT_003d9ecc;
  }
  for (sVar1 = 0; iVar2 = (int)sVar1, iVar2 < 0x300; sVar1 = sVar1 + 1) {
    local_314[iVar2] =
         (char)((int)((int)(short)((ushort)(byte)in_EAX[iVar2] -
                                  (ushort)(byte)(&DAT_003da1cc)[iVar2]) * DAT_003da4cc) /
               (int)(uint)local_14) + (&DAT_003da1cc)[iVar2];
  }
  FUN_000e8214();
  FUN_000e846c(local_314);
  return DAT_003da4cc;
}

/******************************************************************************
 * Function : sub_0e8f24 (Ghidra: FUN_000e8f24)
 * Prototype: undefined4 sub_0e8f24(void);
 * Address  : 0xe8f24 (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x24ab9, 0x31273, 0x32d8c, 0x4bb03, 0x4bd35, 0x6ae80
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000e8f24(void)

{
  DAT_003da4d0 = 0;
  return 1;
}

/******************************************************************************
 * Function : sub_0e8f34 (Ghidra: FUN_000e8f34)
 * Prototype: undefined1 sub_0e8f34(void);
 * Address  : 0xe8f34 (Size: 1061 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x430ba, 0x5067c, 0x69c7f, 0x69edc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_000e8f34(void)

{
  byte *in_EAX;
  byte *pbVar1;
  ushort uVar2;
  uint in_ECX;
  uint in_EDX;
  uint uVar3;
  uint unaff_EBX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_23c [256];
  byte local_13c [256];
  int local_3c;
  uint local_38;
  byte *local_34;
  uint local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  int local_1c;
  undefined1 *local_18;
  uint local_14;
  byte local_10;
  
  uVar8 = in_EDX & 0xff;
  uVar6 = unaff_EBX & 0xff;
  uVar7 = in_ECX & 0xff;
  uVar2 = 0;
  uVar4 = 0;
  local_2c = 0x100;
  local_14 = 0;
  local_1c = 999999;
  pbVar1 = in_EAX;
  do {
    local_38 = (uVar8 - *pbVar1) * (uVar8 - *pbVar1) + (uVar6 - pbVar1[1]) * (uVar6 - pbVar1[1]);
    local_3c = (uVar7 - pbVar1[2]) * (uVar7 - pbVar1[2]);
    local_3c = local_38 + local_3c;
    if ((local_3c < local_1c) && (local_1c = local_3c, local_3c == 0)) goto LAB_000e934d;
    uVar4 = uVar4 + 1;
    pbVar1 = pbVar1 + 3;
  } while (uVar4 < 0x100);
  uVar4 = 0;
  local_18 = local_23c;
  local_20 = in_EAX;
  do {
    local_38 = (uVar8 - *in_EAX) * (uVar8 - *in_EAX) + (uVar6 - in_EAX[1]) * (uVar6 - in_EAX[1]);
    local_3c = (uVar7 - in_EAX[2]) * (uVar7 - in_EAX[2]);
    if (local_38 + local_3c == local_1c) {
      uVar2 = uVar2 + 1;
      *local_18 = (char)uVar4;
      local_18 = local_18 + 1;
    }
    uVar4 = uVar4 + 1;
    in_EAX = in_EAX + 3;
  } while (uVar4 < local_2c);
  if (uVar2 == 1) {
    local_10 = local_23c[0];
  }
  else {
    local_28 = 999999;
    for (iVar5 = 0; iVar5 < (int)(uint)uVar2; iVar5 = iVar5 + 1) {
      local_34 = local_20 + (uint)local_23c[iVar5] * 3;
      uVar4 = (int)(uVar8 - *local_34) >> 0x1f;
      uVar3 = (int)(uVar6 - local_34[1]) >> 0x1f;
      local_3c = ((uVar8 - *local_34 ^ uVar4) - uVar4) + ((uVar6 - local_34[1] ^ uVar3) - uVar3);
      local_38 = (uint)local_34[2];
      uVar4 = uVar7 - local_34[2];
      uVar3 = (int)uVar4 >> 0x1f;
      local_3c = ((uVar4 ^ uVar3) - uVar3) + local_3c;
      if (local_3c < local_28) {
        local_28 = local_3c;
      }
    }
    local_24 = local_13c;
    for (iVar5 = 0; iVar5 < (int)(uint)uVar2; iVar5 = iVar5 + 1) {
      pbVar1 = local_20 + (uint)local_23c[iVar5] * 3;
      uVar4 = (int)(uVar8 - *pbVar1) >> 0x1f;
      local_3c = (uVar8 - *pbVar1 ^ uVar4) - uVar4;
      uVar4 = (int)(uVar6 - pbVar1[1]) >> 0x1f;
      local_38 = local_3c + ((uVar6 - pbVar1[1] ^ uVar4) - uVar4);
      local_34 = (byte *)(uint)pbVar1[2];
      uVar4 = uVar7 - pbVar1[2];
      uVar3 = (int)uVar4 >> 0x1f;
      if (((uVar4 ^ uVar3) - uVar3) + local_38 == local_28) {
        *local_24 = local_23c[iVar5];
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
      }
    }
    if ((short)local_14 == 1) {
      return local_13c[0];
    }
    uVar4 = 999999;
    for (iVar5 = 0; iVar5 < (int)(local_14 & 0xffff); iVar5 = iVar5 + 1) {
      pbVar1 = local_20 + (uint)local_13c[iVar5] * 3;
      uVar6 = (uint)pbVar1[2] * (uint)pbVar1[2] +
              (uint)*pbVar1 * (uint)*pbVar1 * 2 + (uint)pbVar1[1] * 2 * (uint)pbVar1[1];
      if (uVar6 < uVar4) {
        local_10 = local_13c[iVar5];
        uVar4 = uVar6;
      }
    }
  }
  uVar4 = (uint)local_10;
LAB_000e934d:
  return (char)uVar4;
}

/******************************************************************************
 * Function : sub_0e9460 (Ghidra: FUN_000e9460)
 * Prototype: void sub_0e9460(void);
 * Address  : 0xe9460 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe9554, 0xf844b
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e9460(void)

{
  undefined4 extraout_EDX;
  
  FUN_000f844b();
  FUN_000e9554();
  _DAT_00195454 = extraout_EDX;
  return;
}

/******************************************************************************
 * Function : sub_0e9484 (Ghidra: FUN_000e9484)
 * Prototype: void sub_0e9484(void);
 * Address  : 0xe9484 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x2700c, 0x3a3d4, 0x6adc5, 0x6b16f, 0x6b4c7, 0xeb1dd, 0xeb6b6, 0xed4e0, 0xeeb20, 0xef8e8 ...
 * Callees  : 1 -> 0xe9594
 ******************************************************************************/
void FUN_000e9484(void)

{
  FUN_000e9594();
  return;
}

/******************************************************************************
 * Function : sub_0e9498 (Ghidra: FUN_000e9498)
 * Prototype: void sub_0e9498(void);
 * Address  : 0xe9498 (Size: 22 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6a356, 0xe823c
 * Callees  : 1 -> 0xe9594
 ******************************************************************************/
void FUN_000e9498(void)

{
  FUN_000e9594();
  return;
}

/******************************************************************************
 * Function : sub_0e94b0 (Ghidra: FUN_000e94b0)
 * Prototype: undefined8 sub_0e94b0(void);
 * Address  : 0xe94b0 (Size: 31 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 22 -> 0x2700c, 0x270e0, 0x3a3d4, 0x3a4bb, 0x6a356, 0x6a652, 0x6b16f, 0x6b4c7, 0xe83c8, 0xeb28b ...
 * Callees  : 1 -> 0xe9670
 ******************************************************************************/
undefined8 FUN_000e94b0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000e9670();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,1);
  }
  return CONCAT44(in_EDX,0xffffffff);
}

/******************************************************************************
 * Function : sub_0e94d0 (Ghidra: FUN_000e94d0)
 * Prototype: undefined8 sub_0e94d0(void);
 * Address  : 0xe94d0 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000e94d0(void)

{
  undefined4 in_EDX;
  
  if (DAT_003db4f4 == 0) {
    DAT_003da4d4 = DAT_003db4f4;
    DAT_003db4f4 = 1;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e94f8 (Ghidra: FUN_000e94f8)
 * Prototype: undefined8 sub_0e94f8(void);
 * Address  : 0xe94f8 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a652
 * Callees  : 1 -> 0xe9644
 ******************************************************************************/
undefined8 FUN_000e94f8(void)

{
  undefined4 in_EDX;
  
  DAT_003db4f4 = 0;
  DAT_003da4d4 = 0;
  FUN_000e9644();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e9554 (Ghidra: FUN_000e9554)
 * Prototype: void sub_0e9554(void);
 * Address  : 0xe9554 (Size: 60 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9460
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e9554(void)

{
  int *in_EAX;
  int *piVar1;
  int *piVar2;
  
  in_EAX[0x401] = 0;
  piVar1 = in_EAX;
  piVar2 = in_EAX;
  do {
    piVar2 = piVar2 + 4;
    *piVar1 = (int)piVar2;
    piVar1 = piVar1 + 4;
  } while (piVar1 != in_EAX + 0x3fc);
  in_EAX[0x3fc] = 0;
  in_EAX[0x400] = (int)in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_0e9590 (Ghidra: FUN_000e9590)
 * Prototype: void sub_0e9590(void);
 * Address  : 0xe9590 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e9590(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0e9594 (Ghidra: FUN_000e9594)
 * Prototype: undefined4 sub_0e9594(void);
 * Address  : 0xe9594 (Size: 175 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe9484, 0xe9498
 * Callees  : 3 -> 0xe6a10, 0xe970c, 0xf4cb8
 ******************************************************************************/
undefined4 FUN_000e9594(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar2;
  int in_EDX;
  int unaff_EBX;
  undefined8 uVar3;
  
  if (in_EDX == 0) {
    return 0;
  }
  if (*(int *)(in_EAX + 0x1000) != 0) {
    if (unaff_EBX == 0) {
      iVar1 = FUN_000f4cb8();
      if (iVar1 == 0) {
        return 0;
      }
      FUN_000e6a10();
      *(undefined2 *)(extraout_ECX_00 + 3) = 0;
      extraout_ECX_00[1] = iVar1;
      extraout_ECX_00[2] = in_EDX;
      puVar2 = extraout_ECX_00;
    }
    else {
      uVar3 = FUN_000e970c();
      iVar1 = (int)((ulonglong)uVar3 >> 0x20);
      if ((uint)uVar3 == 0) {
        return 0;
      }
      *(int *)(iVar1 + 8) = in_EDX;
      *(short *)(iVar1 + 0xc) = (short)((ulonglong)uVar3 >> 0x10);
      *(uint *)(iVar1 + 4) = ((uint)uVar3 & 0xffff) << 4;
      FUN_000e6a10();
      puVar2 = extraout_ECX;
    }
    DAT_003da4d4 = DAT_003da4d4 + in_EDX;
    *(undefined4 *)(in_EAX + 0x1000) = **(undefined4 **)(in_EAX + 0x1000);
    *puVar2 = *(undefined4 *)(in_EAX + 0x1004);
    *(undefined4 **)(in_EAX + 0x1004) = puVar2;
    return puVar2[1];
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0e9644 (Ghidra: FUN_000e9644)
 * Prototype: void sub_0e9644(void);
 * Address  : 0xe9644 (Size: 42 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe94f8
 * Callees  : 1 -> 0xe9670
 ******************************************************************************/
void FUN_000e9644(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1004);
  while (iVar1 != 0) {
    FUN_000e9670();
    iVar1 = *(int *)(in_EAX + 0x1004);
  }
  return;
}

/******************************************************************************
 * Function : sub_0e9670 (Ghidra: FUN_000e9670)
 * Prototype: undefined4 sub_0e9670(void);
 * Address  : 0xe9670 (Size: 156 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe94b0, 0xe9644
 * Callees  : 2 -> 0xe9760, 0xf4d9b
 ******************************************************************************/
undefined4 FUN_000e9670(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int in_EDX;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *puVar4;
  
  if (in_EDX != 0) {
    puVar4 = *(undefined4 **)(in_EAX + 0x1004);
    puVar2 = *(undefined4 **)(in_EAX + 0x1004);
    while ((puVar1 = puVar4, puVar1 != (undefined4 *)0x0 && (in_EDX != puVar1[1]))) {
      puVar2 = puVar1;
      puVar4 = (undefined4 *)*puVar1;
    }
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    DAT_003da4d4 = DAT_003da4d4 - puVar1[2];
    if (*(short *)(puVar1 + 3) == 0) {
      FUN_000f4d9b();
      iVar3 = extraout_ECX_00;
      puVar4 = extraout_EDX_00;
    }
    else {
      FUN_000e9760();
      iVar3 = extraout_ECX;
      puVar4 = extraout_EDX;
    }
    if (puVar4 == *(undefined4 **)(iVar3 + 0x1004)) {
      *(undefined4 *)(iVar3 + 0x1004) = **(undefined4 **)(iVar3 + 0x1004);
    }
    else {
      *puVar2 = *puVar4;
    }
    *puVar4 = *(undefined4 *)(iVar3 + 0x1000);
    *(undefined4 **)(iVar3 + 0x1000) = puVar4;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0e970c (Ghidra: FUN_000e970c)
 * Prototype: undefined8 sub_0e970c(void);
 * Address  : 0xe970c (Size: 83 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9594
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
undefined8 FUN_000e970c(void)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_ECX;
  undefined4 in_EDX;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_2c;
  
  uVar1 = 0;
  if (in_EAX < 0xa0000) {
    FUN_000f7786();
    uVar1 = extraout_ECX;
    if (local_2c == 0) {
      uVar1 = local_38 << 0x10 | local_44 & 0xffff;
    }
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0e9760 (Ghidra: FUN_000e9760)
 * Prototype: void sub_0e9760(void);
 * Address  : 0xe9760 (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9670
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
void FUN_000e9760(void)

{
  short in_AX;
  
  if (in_AX != 0) {
    FUN_000f7786();
  }
  return;
}

/******************************************************************************
 * Function : sub_0e97a0 (Ghidra: FUN_000e97a0)
 * Prototype: undefined8 sub_0e97a0(void);
 * Address  : 0xe97a0 (Size: 170 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x329ae, 0x618f5, 0x6adc5, 0xe823c, 0xe984c
 * Callees  : 5 -> 0xe8980, 0xe8a1c, 0xe8a80, 0xe8a98, 0xea1f4
 ******************************************************************************/
undefined8 FUN_000e97a0(void)

{
  int iVar1;
  undefined4 in_EDX;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  iVar1 = FUN_000e8980();
  if (iVar1 != -1) {
    iVar1 = FUN_000e8a80();
    if (iVar1 == -1) {
      FUN_000e8a1c();
      iVar1 = -1;
    }
    else {
      FUN_000e8a1c();
      iVar1 = FUN_000ea1f4();
      if (iVar1 == 0) {
        iVar1 = (((uint)local_1c * 0x100 + (uint)local_1b) * 0x100 + (uint)local_1a) * 0x100 +
                (uint)local_19;
      }
      else {
        iVar1 = FUN_000e8a98();
      }
    }
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_0e984c (Ghidra: FUN_000e984c)
 * Prototype: int sub_0e984c(void);
 * Address  : 0xe984c (Size: 121 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 41 -> 0x27130, 0x29738, 0x29800, 0x298b5, 0x29979, 0x299f8, 0x29ac2, 0x29b54, 0x29bfe, 0x29d32 ...
 * Callees  : 6 -> 0xe8980, 0xe8a1c, 0xe8a80, 0xe97a0, 0xf0f8c, 0xf845c
 * Strings  :
 *   - 0x16ce34: "ERROR decompressing %s\n"
 ******************************************************************************/
int FUN_000e984c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000e97a0();
  if (((iVar1 == -1) || (iVar2 = FUN_000e8980(), iVar2 == -1)) ||
     (iVar2 = FUN_000e8a80(), iVar2 == -1)) {
    return -1;
  }
  FUN_000e8a1c();
  iVar2 = FUN_000f845c();
  if (iVar2 < 0) {
    FUN_000f0f8c(s_ERROR_decompressing__s_0016ce34);
    return -1;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0e98c8 (Ghidra: FUN_000e98c8)
 * Prototype: int sub_0e98c8(void);
 * Address  : 0xe98c8 (Size: 39 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x2a355, 0x2a3ac, 0x2a427, 0x2a558, 0x2a653, 0x2a6c5, 0x2a9f0, 0x2c736, 0x2c785, 0x2d239 ...
 * Callees  : 3 -> 0xe8980, 0xe8a1c, 0xe8a8c
 ******************************************************************************/
int FUN_000e98c8(void)

{
  int iVar1;
  
  iVar1 = FUN_000e8980();
  if (iVar1 != -1) {
    iVar1 = FUN_000e8a8c();
    FUN_000e8a1c();
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0e98f0 (Ghidra: FUN_000e98f0)
 * Prototype: int sub_0e98f0(uint param_1);
 * Address  : 0xe98f0 (Size: 596 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xe8974, 0xe8a34, 0xe8a80, 0xe9d2c
 ******************************************************************************/
int FUN_000e98f0(uint param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint in_ECX;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar5;
  char *in_EDX;
  undefined4 *unaff_EBX;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  char acStack_b4 [132];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar11 = 0;
  pcVar9 = acStack_b4;
  if (in_ECX < 0x100) {
    iVar2 = -3;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar8 = in_EDX;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_10 = ~uVar4 - 1;
    if (0x80 < local_10) {
      return -4;
    }
    iVar2 = FUN_000e8974();
    if (iVar2 != -1) {
      local_14 = -2;
      if ((param_1 & 2) == 0) {
        do {
          cVar1 = *in_EDX;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = in_EDX[1];
          in_EDX = in_EDX + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      else {
        pcVar9 = acStack_b4 + 1;
        local_10 = extraout_ECX + 1;
        acStack_b4[0] = '\n';
        do {
          cVar1 = *in_EDX;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = in_EDX[1];
          in_EDX = in_EDX + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
      local_18 = FUN_000e8a80();
      local_1c = extraout_ECX_00;
      do {
        if (local_18 < local_10) break;
        iVar6 = 0;
        if (-1 < local_18 - local_10) {
          do {
            iVar3 = FUN_000e9d2c();
            if (iVar3 != 0) {
              local_14 = iVar2 + local_1c + iVar6;
              if (acStack_b4[0] == '\n') {
                local_14 = local_14 + 1;
              }
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 <= local_18 - local_10);
        }
        if (local_14 == -2) {
          uVar4 = local_18 - iVar6;
          puVar7 = (undefined4 *)((int)unaff_EBX + iVar6);
          puVar10 = unaff_EBX;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar11 * -2 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
          }
          local_1c = local_1c + iVar6;
          local_18 = FUN_000e8a80();
          if (local_18 == -1) {
            return -1;
          }
          local_18 = uVar4 + local_18;
        }
      } while (local_14 == -2);
      iVar2 = FUN_000e8a34();
      if (iVar2 != -1) {
        iVar2 = local_14;
      }
    }
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0e9b44 (Ghidra: FUN_000e9b44)
 * Prototype: undefined4 sub_0e9b44(uint param_1);
 * Address  : 0xe9b44 (Size: 246 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf0ec0
 * Callees  : 1 -> 0xea370
 ******************************************************************************/
undefined4 FUN_000e9b44(uint param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  char *in_ECX;
  char *extraout_ECX;
  uint uVar3;
  char *in_EDX;
  uint uVar4;
  char *unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar4 = 0;
  if (in_EAX != 0) {
    iVar2 = FUN_000ea370();
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    uVar4 = 0xffffffff;
    pcVar5 = extraout_ECX;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    in_ECX[uVar4 - 1] = '\\';
    in_ECX[uVar4] = '\0';
  }
  if (in_EDX != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = in_EDX;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    uVar4 = uVar4 + (~uVar3 - 1);
    if (param_1 - 2 <= uVar4) {
      return 0xffffffff;
    }
    iVar2 = -1;
    pcVar5 = in_ECX;
    do {
      pcVar6 = pcVar5;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    pcVar5 = in_EDX;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    if (in_EDX[uVar4 - 1] != '\\') {
      in_ECX[uVar4] = '\\';
      uVar4 = uVar4 + 1;
      in_ECX[uVar4] = '\0';
    }
  }
  uVar3 = 0xffffffff;
  pcVar5 = unaff_EBX;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (param_1 <= uVar4 + (~uVar3 - 1)) {
    return 0xffffffff;
  }
  iVar2 = -1;
  do {
    pcVar5 = in_ECX;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = in_ECX + (uint)bVar7 * -2 + 1;
    cVar1 = *in_ECX;
    in_ECX = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *unaff_EBX;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = unaff_EBX[1];
    unaff_EBX = unaff_EBX + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  return 1;
}

/******************************************************************************
 * Function : sub_0e9d2c (Ghidra: FUN_000e9d2c)
 * Prototype: bool sub_0e9d2c(void);
 * Address  : 0xe9d2c (Size: 78 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe98f0
 * Callees  : 2 -> 0xea1f4, 0xf43c7
 ******************************************************************************/
bool FUN_000e9d2c(void)

{
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  uint unaff_EBX;
  uint uVar2;
  
  if (in_ECX == 0) {
    iVar1 = FUN_000ea1f4();
    return iVar1 == 0;
  }
  uVar2 = 0;
  if (unaff_EBX != 0) {
    do {
      FUN_000f43c7();
      iVar1 = FUN_000f43c7();
      if (extraout_ECX != iVar1) {
        return false;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < unaff_EBX);
  }
  return true;
}

/******************************************************************************
 * Function : sub_0e9d7a (Ghidra: FUN_000e9d7a)
 * Prototype: int sub_0e9d7a(void);
 * Address  : 0xe9d7a (Size: 83 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x29eef, 0x10ed88, 0x1263ec
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000e9d7a(void)

{
  byte bVar2;
  byte *in_EAX;
  uint uVar1;
  undefined1 *in_EDX;
  int unaff_EBX;
  
  while( true ) {
    if (unaff_EBX == 0) {
      return 0;
    }
    bVar2 = *in_EAX;
    uVar1 = (uint)CONCAT11(*in_EDX,bVar2);
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      uVar1 = (uint)CONCAT11(*in_EDX,bVar2 + 0x20);
    }
    bVar2 = (byte)(uVar1 >> 8);
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      uVar1 = (uint)CONCAT11(bVar2 + 0x20,(char)uVar1);
    }
    bVar2 = (byte)(uVar1 >> 8);
    if ((byte)uVar1 != bVar2) break;
    if (bVar2 == 0) {
      return 0;
    }
    in_EAX = in_EAX + 1;
    in_EDX = in_EDX + 1;
    unaff_EBX = unaff_EBX + -1;
  }
  return (uVar1 & 0xff) - (uint)bVar2;
}

/******************************************************************************
 * Function : sub_0e9dd0 (Ghidra: FUN_000e9dd0)
 * Prototype: void sub_0e9dd0(void);
 * Address  : 0xe9dd0 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x29eef
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e9dd0(void)

{
  undefined4 in_EAX;
  
  DAT_00195558 = in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_0e9dd6 (Ghidra: FUN_000e9dd6)
 * Prototype: char * sub_0e9dd6(void);
 * Address  : 0xe9dd6 (Size: 51 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x2a0be, 0x2eeb9, 0x303ad, 0x3078d, 0x35d29, 0x57739, 0x5b25b, 0x5b3fc, 0xeb531
 * Callees  : 0 -> 
 ******************************************************************************/
char * FUN_000e9dd6(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  char *in_EDX;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  pcVar3 = in_EAX;
  do {
    pcVar4 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *in_EDX;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return in_EAX;
    }
    cVar1 = in_EDX[1];
    in_EDX = in_EDX + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return in_EAX;
}

/******************************************************************************
 * Function : sub_0e9e09 (Ghidra: FUN_000e9e09)
 * Prototype: undefined8 sub_0e9e09(void);
 * Address  : 0xe9e09 (Size: 209 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe9f9e, 0xea049
 * Callees  : 2 -> 0xf8761, 0xf8774
 ******************************************************************************/
undefined8 FUN_000e9e09(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_EDX;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_000f8761();
  uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar2 = (uint)uVar6 & 0xff;
  if (((uVar2 != 0x72) && (uVar2 != 0x77)) && (uVar2 != 0x61)) {
    FUN_000f8774();
    uVar3 = 0;
    goto LAB_000e9ed2;
  }
  cVar1 = *(char *)(in_EAX + 1);
  uVar2 = uVar3 | 3;
  if (cVar1 == '+') {
    uVar4 = CONCAT22((short)((ulonglong)uVar6 >> 0x30),(short)uVar2) | 0x40;
    if (*(char *)(in_EAX + 2) == 'b') {
LAB_000e9e76:
      uVar3 = uVar4;
    }
    else {
      uVar3 = uVar2;
      if (*(char *)(in_EAX + 2) != 't') {
        bVar5 = DAT_00195d09 == 0x200;
LAB_000e9e74:
        if (bVar5) goto LAB_000e9e76;
      }
    }
  }
  else {
    uVar4 = uVar3 | 0x40;
    if (cVar1 == 'b') {
      uVar3 = uVar4;
      if (*(char *)(in_EAX + 2) == '+') {
        uVar4 = CONCAT31((int3)((ulonglong)uVar6 >> 0x28),(char)uVar4) | 3;
LAB_000e9eb2:
        uVar3 = uVar4;
      }
    }
    else {
      if (cVar1 == 't') {
        bVar5 = *(char *)(in_EAX + 2) == '+';
        uVar4 = uVar2;
        goto LAB_000e9e74;
      }
      if (DAT_00195d09 == 0x200) goto LAB_000e9eb2;
    }
  }
  uVar2 = (uint)uVar6 & 0xff;
  if (uVar2 == 0x77) {
    uVar3 = uVar3 | 2;
  }
  else if (uVar2 == 0x61) {
    uVar3 = uVar3 | 0x82;
  }
  else {
    uVar3 = uVar3 | 1;
  }
LAB_000e9ed2:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_0e9eda (Ghidra: FUN_000e9eda)
 * Prototype: undefined4 sub_0e9eda(int param_1);
 * Address  : 0xe9eda (Size: 196 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe9f9e, 0xea049
 * Callees  : 5 -> 0xf79e0, 0xf8761, 0xf8849, 0xf88e2, 0xf89de
 ******************************************************************************/
undefined4 FUN_000e9eda(int param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint unaff_EBX;
  
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfc;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | unaff_EBX;
  FUN_000f8761();
  uVar1 = FUN_000f79e0();
  *(undefined4 *)(extraout_ECX + 0x10) = uVar1;
  if (*(int *)(extraout_ECX + 0x10) == -1) {
    FUN_000f8849();
    return 0;
  }
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  if ((unaff_EBX & 0x80) != 0) {
    FUN_000f88e2();
  }
  FUN_000f89de();
  return extraout_ECX_00;
}

/******************************************************************************
 * Function : sub_0e9f9e (Ghidra: FUN_000e9f9e)
 * Prototype: undefined4 sub_0e9f9e(void);
 * Address  : 0xe9f9e (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9fd7
 * Callees  : 3 -> 0xe9e09, 0xe9eda, 0xf87a3
 ******************************************************************************/
undefined4 FUN_000e9f9e(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000e9e09();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_000f87a3();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_000e9eda(iVar1);
    }
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0e9fd7 (Ghidra: FUN_000e9fd7)
 * Prototype: void sub_0e9fd7(void);
 * Address  : 0xe9fd7 (Size: 10 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x2a0be, 0xb5694, 0xb62e4, 0xb6aac, 0xbfaec, 0xc206c, 0xc241c
 * Callees  : 1 -> 0xe9f9e
 ******************************************************************************/
void FUN_000e9fd7(void)

{
  FUN_000e9f9e();
  return;
}

/******************************************************************************
 * Function : sub_0e9fe1 (Ghidra: FUN_000e9fe1)
 * Prototype: longlong sub_0e9fe1(void);
 * Address  : 0xe9fe1 (Size: 104 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea049
 * Callees  : 2 -> 0xea15f, 0xf8774
 ******************************************************************************/
longlong FUN_000e9fe1(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint in_EDX;
  undefined4 *puVar2;
  
  puVar1 = DAT_003df16c;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = &DAT_003df168;
      do {
        puVar2 = puVar1;
        puVar1 = (undefined4 *)*puVar2;
        if (puVar1 == (undefined4 *)0x0) {
          FUN_000f8774();
          return (ulonglong)in_EDX << 0x20;
        }
      } while (in_EAX != puVar1[1]);
      *puVar2 = *puVar1;
      *puVar1 = DAT_003df16c;
      DAT_003df16c = puVar1;
LAB_000ea008:
      return CONCAT44(in_EDX,in_EAX);
    }
    if (in_EAX == puVar1[1]) {
      if ((*(byte *)(puVar1[1] + 0xc) & 3) != 0) {
        FUN_000ea15f();
      }
      goto LAB_000ea008;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0ea049 (Ghidra: FUN_000ea049)
 * Prototype: undefined4 sub_0ea049(void);
 * Address  : 0xea049 (Size: 66 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe9e09, 0xe9eda, 0xe9fe1
 ******************************************************************************/
undefined4 FUN_000ea049(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000e9e09();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_000e9fe1();
    uVar2 = 0;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0x4000;
      uVar2 = FUN_000e9eda(iVar1);
    }
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0ea08b (Ghidra: FUN_000ea08b)
 * Prototype: void sub_0ea08b(void);
 * Address  : 0xea08b (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a0be
 * Callees  : 1 -> 0xf8a21
 ******************************************************************************/
void FUN_000ea08b(void)

{
  FUN_000f8a21(&stack0x0000000c);
  return;
}

/******************************************************************************
 * Function : sub_0ea0ac (Ghidra: FUN_000ea0ac)
 * Prototype: undefined8 sub_0ea0ac(void);
 * Address  : 0xea0ac (Size: 45 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a0be
 * Callees  : 1 -> 0xea0d9
 ******************************************************************************/
undefined8 FUN_000ea0ac(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  puVar1 = DAT_003df16c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return CONCAT44(in_EDX,0xffffffff);
    }
    if (in_EAX == puVar1[1]) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  uVar2 = FUN_000ea0d9();
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0ea0d9 (Ghidra: FUN_000ea0d9)
 * Prototype: undefined4 sub_0ea0d9(void);
 * Address  : 0xea0d9 (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xea0ac, 0x11398b
 * Callees  : 2 -> 0xea15f, 0xf8849
 ******************************************************************************/
undefined4 FUN_000ea0d9(void)

{
  undefined4 extraout_EDX;
  
  FUN_000ea15f();
  FUN_000f8849();
  return extraout_EDX;
}

/******************************************************************************
 * Function : sub_0ea0ee (Ghidra: FUN_000ea0ee)
 * Prototype: int sub_0ea0ee(void);
 * Address  : 0xea0ee (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea0fa
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000ea0ee(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX + 0x30;
  if (0x39 < iVar1) {
    iVar1 = in_EAX + 0x57;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0ea0fa (Ghidra: FUN_000ea0fa)
 * Prototype: void sub_0ea0fa(void);
 * Address  : 0xea0fa (Size: 101 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea15f
 * Callees  : 2 -> 0xea0ee, 0xf8aa0
 ******************************************************************************/
void FUN_000ea0fa(void)

{
  undefined1 uVar1;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined1 *extraout_EDX;
  
  FUN_000f8aa0();
  *extraout_ECX = 0x74;
  do {
    uVar1 = FUN_000ea0ee();
    *extraout_EDX = uVar1;
  } while (extraout_EDX + -1 != extraout_ECX);
  *(undefined1 *)(extraout_ECX_00 + 5) = 0x5f;
  uVar1 = FUN_000ea0ee();
  *(undefined1 *)(extraout_ECX_01 + 6) = uVar1;
  uVar1 = FUN_000ea0ee();
  *(undefined1 *)(extraout_ECX_02 + 8) = 0x2e;
  *(undefined1 *)(extraout_ECX_02 + 9) = 0x74;
  *(undefined1 *)(extraout_ECX_02 + 10) = 0x6d;
  *(undefined1 *)(extraout_ECX_02 + 0xb) = 0x70;
  *(undefined1 *)(extraout_ECX_02 + 0xc) = 0;
  *(undefined1 *)(extraout_ECX_02 + 7) = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_0ea15f (Ghidra: FUN_000ea15f)
 * Prototype: uint sub_0ea15f(void);
 * Address  : 0xea15f (Size: 144 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe9fe1, 0xea0d9
 * Callees  : 7 -> 0xea0fa, 0xea1ef, 0xf4d9b, 0xf7c2e, 0xf8aa6, 0xf8b7f, 0xf8baf
 ******************************************************************************/
uint FUN_000ea15f(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  int in_EDX;
  
  if (*(int *)(in_EAX + 0xc) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    if ((*(byte *)(in_EAX + 0xd) & 0x10) != 0) {
      uVar1 = FUN_000f8aa6();
    }
    iVar2 = FUN_000f8b7f();
    iVar4 = extraout_ECX;
    if (iVar2 != -1) {
      FUN_000f7c2e();
      iVar4 = extraout_ECX_00;
    }
    if (in_EDX != 0) {
      uVar3 = FUN_000f8baf();
      uVar1 = uVar1 | uVar3;
      iVar4 = extraout_ECX_01;
    }
    if ((*(byte *)(iVar4 + 0xc) & 8) != 0) {
      FUN_000f4d9b();
      *(undefined4 *)(extraout_ECX_02 + 8) = 0;
      iVar4 = extraout_ECX_02;
    }
    if ((*(byte *)(iVar4 + 0xd) & 8) != 0) {
      FUN_000ea0fa();
      FUN_000ea1ef();
    }
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_0ea1ef (Ghidra: FUN_000ea1ef)
 * Prototype: longlong sub_0ea1ef(void);
 * Address  : 0xea1ef (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2ae22, 0x2af6d, 0x617c9, 0xe8b30, 0xea15f
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000ea1ef(void)

{
  code *pcVar1;
  undefined4 uVar2;
  byte in_CF;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) != 0) {
    uVar2 = FUN_00110060();
    return CONCAT44(unaff_retaddr,uVar2);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0ea1f4 (Ghidra: FUN_000ea1f4)
 * Prototype: int sub_0ea1f4(void);
 * Address  : 0xea1f4 (Size: 41 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x2b36c, 0xe97a0, 0xe9d2c, 0xf0d90
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000ea1f4(void)

{
  byte *in_EAX;
  byte *in_EDX;
  int unaff_EBX;
  
  while( true ) {
    if (unaff_EBX == 0) {
      return 0;
    }
    if (*in_EAX != *in_EDX) break;
    if (*in_EAX == 0) {
      return 0;
    }
    in_EAX = in_EAX + 1;
    in_EDX = in_EDX + 1;
    unaff_EBX = unaff_EBX + -1;
  }
  return (uint)*in_EAX - (uint)*in_EDX;
}

/******************************************************************************
 * Function : sub_0ea21d (Ghidra: FUN_000ea21d)
 * Prototype: undefined8 sub_0ea21d(void);
 * Address  : 0xea21d (Size: 109 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x2b36c, 0x2d32d, 0x330ae, 0x34bdc, 0x78ada, 0x798e3, 0x79b68, 0x7a754, 0x7abe0, 0x7ad6f
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000ea21d(void)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  undefined4 in_EDX;
  int iVar3;
  
  while (((&DAT_0017469c)[(byte)(*in_EAX + 1)] & 2) != 0) {
    in_EAX = in_EAX + 1;
  }
  bVar1 = *in_EAX;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    in_EAX = in_EAX + 1;
  }
  iVar3 = 0;
  while (((&DAT_0017469c)[(byte)(*in_EAX + 1)] & 0x20) != 0) {
    bVar2 = *in_EAX;
    in_EAX = in_EAX + 1;
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  if (bVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : dk_stricmp (Ghidra: FUN_000ea290)
 * Prototype: uint dk_stricmp(void);
 * Address  : 0xea290 (Size: 161 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Case-insensitive ASCII string comparison
 * Callers  : 11 -> 0x3442b, 0x345fd, 0x34a8a, 0x5b1bc, 0x7909c, 0x79702, 0x798e3, 0x7a2c0, 0x7ad6f, 0xeb531 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000ea290(void)

{
  byte bVar1;
  uint *in_EAX;
  byte bVar3;
  uint uVar4;
  uint *in_EDX;
  bool bVar5;
  uint uVar2;
  
  if (in_EAX != in_EDX) {
    do {
      uVar2 = *in_EAX;
      uVar4 = *in_EDX;
      if (uVar4 != uVar2) {
LAB_000ea309:
        bVar1 = (byte)uVar2;
        bVar5 = bVar1 < (byte)uVar4;
        if (bVar1 == (byte)uVar4) {
          if (bVar1 == 0) {
            return 0;
          }
          bVar1 = (byte)(uVar2 >> 8);
          bVar3 = (byte)(uVar4 >> 8);
          bVar5 = bVar1 < bVar3;
          if (bVar1 == bVar3) {
            if (bVar1 == 0) {
              return 0;
            }
            bVar1 = (byte)(uVar2 >> 0x10);
            bVar3 = (byte)(uVar4 >> 0x10);
            bVar5 = bVar1 < bVar3;
            if (bVar1 == bVar3) {
              if (bVar1 == 0) {
                return 0;
              }
              bVar5 = (byte)(uVar2 >> 0x18) < (byte)(uVar4 >> 0x18);
            }
          }
        }
        return -(uint)bVar5 | 1;
      }
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = in_EAX[1];
      uVar4 = in_EDX[1];
      if (uVar4 != uVar2) goto LAB_000ea309;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = in_EAX[2];
      uVar4 = in_EDX[2];
      if (uVar4 != uVar2) goto LAB_000ea309;
      if ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) {
        return 0;
      }
      uVar2 = in_EAX[3];
      uVar4 = in_EDX[3];
      if (uVar4 != uVar2) goto LAB_000ea309;
      in_EAX = in_EAX + 4;
      in_EDX = in_EDX + 4;
    } while ((uVar2 + 0xfefefeff & ~uVar4 & 0x80808080) == 0);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0ea370 (Ghidra: FUN_000ea370)
 * Prototype: undefined4 sub_0ea370(void);
 * Address  : 0xea370 (Size: 100 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9b44
 * Callees  : 1 -> 0xf8c47
 ******************************************************************************/
undefined4 FUN_000ea370(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar2 = FUN_000f8c47();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  pcVar4 = in_EAX;
  pcVar5 = in_EAX;
  if (in_EAX[1] == ':') {
    do {
      cVar1 = pcVar5[2];
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[3];
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  uVar3 = 0xffffffff;
  pcVar5 = in_EAX;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  if ((0 < (int)(uVar3 - 1)) && (in_EAX[uVar3 - 2] == '\\')) {
    in_EAX[uVar3 - 2] = '\0';
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0ea3d4 (Ghidra: FUN_000ea3d4)
 * Prototype: undefined8 sub_0ea3d4(void);
 * Address  : 0xea3d4 (Size: 63 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xf78b2, 0xf8ccf
 ******************************************************************************/
undefined8 FUN_000ea3d4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined4 local_48;
  
  iVar1 = FUN_000f78b2();
  if (iVar1 == 0) {
    iVar1 = FUN_000f8ccf();
    if (iVar1 != -1) {
      uVar2 = (uint)(((byte)((uint)local_48 >> 8) & 0xf0) == 0x40);
      goto LAB_000ea40d;
    }
  }
  uVar2 = 0;
LAB_000ea40d:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0ea430 (Ghidra: FUN_000ea430)
 * Prototype: char sub_0ea430(undefined1 param_1);
 * Address  : 0xea430 (Size: 555 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d6a9
 * Callees  : 1 -> 0xea65c
 ******************************************************************************/
char FUN_000ea430(undefined1 param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  char local_14;
  
  iVar1 = in_EAX - unaff_EBX;
  iVar2 = unaff_EBX - (DAT_003d9844 + -1);
  if (in_EAX < 0) {
    if (unaff_EBX < 0) {
      return '\x01';
    }
    in_EDX = in_EDX - ((in_EDX - in_ECX) * in_EAX) / iVar1;
    if (DAT_003d9844 <= unaff_EBX) {
      in_ECX = in_ECX - (iVar2 * (in_ECX - in_EDX)) / unaff_EBX;
    }
  }
  else if (in_EAX < DAT_003d9844) {
    if (unaff_EBX < 0) {
      in_ECX = in_ECX - ((in_ECX - in_EDX) * unaff_EBX) / (unaff_EBX - in_EAX);
    }
    else if (DAT_003d9844 <= unaff_EBX) {
      in_ECX = in_ECX - ((in_ECX - in_EDX) * iVar2) / (unaff_EBX - in_EAX);
    }
  }
  else {
    if (DAT_003d9844 <= unaff_EBX) {
      return '\x01';
    }
    in_EDX = in_EDX - ((in_EDX - in_ECX) * (in_EAX - (DAT_003d9844 + -1))) / iVar1;
    if (unaff_EBX < 0) {
      in_ECX = in_ECX - ((in_ECX - in_EDX) * unaff_EBX) / iVar2;
    }
  }
  local_14 = (char)in_ECX - ((char)DAT_003d9848 + -1);
  if (in_EDX < 0) {
    if (in_ECX < 0) {
      return '\x01';
    }
  }
  else if ((DAT_003d9848 <= in_EDX) && (DAT_003d9848 <= in_ECX)) {
    return '\x01';
  }
  FUN_000ea65c(param_1,iVar1,in_EDX - in_ECX);
  return local_14;
}

/******************************************************************************
 * Function : sub_0ea65c (Ghidra: FUN_000ea65c)
 * Prototype: void sub_0ea65c(byte param_1);
 * Address  : 0xea65c (Size: 726 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea430
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ea65c(byte param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int in_EDX;
  int iVar7;
  int unaff_EBX;
  uint uVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar8 = unaff_EBX - in_EAX;
  iVar3 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  iVar1 = iVar3 * 2;
  if ((int)uVar8 < 1) {
    iVar9 = -1;
  }
  else {
    iVar9 = 1;
  }
  uVar8 = in_ECX - in_EDX;
  iVar4 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
  iVar2 = iVar4 * 2;
  if ((int)uVar8 < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = 1;
  }
  iVar7 = DAT_003d9834 * iVar5;
  local_28 = iVar2 - (iVar1 >> 1);
  local_24 = iVar1 - (iVar2 >> 1);
  iVar6 = in_EDX * DAT_003d9834 + in_EAX;
  if (((byte)DAT_003d9874 & 4) == 0) {
    if (((byte)DAT_003d9874 & 8) == 0) {
      if (iVar1 + iVar4 * -2 == 0 || iVar1 < iVar2) {
        for (; *(byte *)(DAT_003d9824 + iVar6) = param_1, in_EDX != in_ECX; in_EDX = in_EDX + iVar5)
        {
          local_14 = local_24;
          if (-1 < local_24) {
            local_14 = local_24 + iVar4 * -2;
            iVar6 = iVar6 + iVar9;
          }
          local_24 = local_14 + iVar1;
          iVar6 = iVar6 + iVar7;
        }
      }
      else {
        for (; *(byte *)(DAT_003d9824 + iVar6) = param_1, in_EAX != unaff_EBX;
            in_EAX = in_EAX + iVar9) {
          local_18 = local_28;
          if (-1 < local_28) {
            local_18 = local_28 + iVar3 * -2;
            iVar6 = iVar6 + iVar7;
          }
          local_28 = local_18 + iVar2;
          iVar6 = iVar6 + iVar9;
        }
      }
    }
    else if (iVar1 + iVar4 * -2 == 0 || iVar1 < iVar2) {
      for (; *(byte *)(DAT_003d9824 + iVar6) =
                  *(byte *)((uint)param_1 + (uint)*(byte *)(DAT_003d9824 + iVar6) * 0x100 +
                           DAT_003d981c), in_EDX != in_ECX; in_EDX = in_EDX + iVar5) {
        local_1c = local_24;
        if (-1 < local_24) {
          local_1c = local_24 + iVar4 * -2;
          iVar6 = iVar6 + iVar9;
        }
        local_24 = local_1c + iVar1;
        iVar6 = iVar6 + iVar7;
      }
    }
    else {
      for (; *(byte *)(DAT_003d9824 + iVar6) =
                  *(byte *)((uint)param_1 + (uint)*(byte *)(DAT_003d9824 + iVar6) * 0x100 +
                           DAT_003d981c), in_EAX != unaff_EBX; in_EAX = in_EAX + iVar9) {
        local_20 = local_28;
        if (-1 < local_28) {
          local_20 = local_28 + iVar3 * -2;
          iVar6 = iVar6 + iVar7;
        }
        local_28 = local_20 + iVar2;
        iVar6 = iVar6 + iVar9;
      }
    }
  }
  else if (iVar1 + iVar4 * -2 == 0 || iVar1 < iVar2) {
    for (; *(byte *)(DAT_003d9824 + iVar6) =
                *(byte *)((uint)param_1 * 0x100 + (uint)*(byte *)(DAT_003d9824 + iVar6) +
                         DAT_003d981c), in_EDX != in_ECX; in_EDX = in_EDX + iVar5) {
      if (-1 < local_24) {
        local_24 = local_24 + iVar4 * -2;
        iVar6 = iVar6 + iVar9;
      }
      local_24 = local_24 + iVar1;
      iVar6 = iVar6 + iVar7;
    }
  }
  else {
    for (; *(byte *)(DAT_003d9824 + iVar6) =
                *(byte *)((uint)param_1 * 0x100 + (uint)*(byte *)(DAT_003d9824 + iVar6) +
                         DAT_003d981c), in_EAX != unaff_EBX; in_EAX = in_EAX + iVar9) {
      if (-1 < local_28) {
        local_28 = local_28 + iVar3 * -2;
        iVar6 = iVar6 + iVar7;
      }
      local_28 = local_28 + iVar2;
      iVar6 = iVar6 + iVar9;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0ea934 (Ghidra: FUN_000ea934)
 * Prototype: undefined4 sub_0ea934(void);
 * Address  : 0xea934 (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x31854
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000ea934(void)

{
  if ((DAT_003db7b8 == 0) && (DAT_0019555c == -1)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0ea9f9 (Ghidra: FUN_000ea9f9)
 * Prototype: void sub_0ea9f9(void);
 * Address  : 0xea9f9 (Size: 47 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf4c6c
 * Callees  : 3 -> 0xe8a1c, 0xeaf13, 0xeb28b
 ******************************************************************************/
void FUN_000ea9f9(void)

{
  if (DAT_0019555c != -1) {
    FUN_000e8a1c();
    DAT_0019555c = -1;
  }
  FUN_000eaf13();
  FUN_000eb28b();
  DAT_003db694 = 0;
  return;
}

/******************************************************************************
 * Function : sub_0ead2f (Ghidra: FUN_000ead2f)
 * Prototype: void sub_0ead2f(void);
 * Address  : 0xead2f (Size: 285 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2dfac, 0x36ff4
 * Callees  : 7 -> 0xe8a1c, 0xe8a34, 0xe8a80, 0xeb147, 0xeb30c, 0xfb0ca, 0xfb128
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ead2f(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((DAT_003db694 != '\0') && (DAT_00195564 != '\0')) {
    if ((DAT_003db7c4 & 2) == 0) {
      if ((DAT_003db7c4 & 1) == 0) {
        if ((DAT_0019555c != -1) && (iVar1 = FUN_000fb0ca(DAT_003db696), iVar1 != -1)) {
          while (iVar3 < 0x4000) {
            iVar2 = FUN_000e8a80();
            iVar3 = iVar3 + iVar2;
            if (DAT_003db7a4 == 0) break;
            if (iVar3 < 0x4000) {
              DAT_003db7c8 = 0;
              _DAT_003db7cc = -iVar3;
              FUN_000e8a34();
              if (0 < DAT_003db7a4) {
                DAT_003db7a4 = DAT_003db7a4 + -1;
              }
            }
          }
          FUN_000fb128(DAT_003db696,iVar1,(&DAT_003db7a8)[iVar1],iVar3);
          DAT_003db7c8 = DAT_003db7c8 + 1;
          if (iVar3 < 0x4000) {
            FUN_000e8a1c();
            DAT_0019555c = -1;
          }
        }
      }
      else {
        FUN_000eb147();
      }
    }
    else {
      FUN_000eb30c();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0eae4c (Ghidra: FUN_000eae4c)
 * Prototype: void sub_0eae4c(void);
 * Address  : 0xeae4c (Size: 62 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31854, 0x32738
 * Callees  : 1 -> 0xfaaf9
 ******************************************************************************/
void FUN_000eae4c(void)

{
  int in_EAX;
  int iVar1;
  
  if ((((DAT_003db694 != '\0') && (-1 < in_EAX)) && (in_EAX < 0x80)) && (in_EAX != DAT_00195560)) {
    iVar1 = in_EAX;
    if (DAT_00195d1c == '\0') {
      iVar1 = in_EAX >> 1;
    }
    DAT_00195560 = in_EAX;
    FUN_000faaf9(DAT_003db696,iVar1);
  }
  return;
}

/******************************************************************************
 * Function : sub_0eae8a (Ghidra: FUN_000eae8a)
 * Prototype: void sub_0eae8a(void);
 * Address  : 0xeae8a (Size: 137 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2e8a7, 0x31213
 * Callees  : 4 -> 0xe6a10, 0xe8a1c, 0xfaa37, 0xfdd51
 ******************************************************************************/
void FUN_000eae8a(void)

{
  if (DAT_003db694 != '\0') {
    FUN_000faa37(DAT_003db696);
    FUN_000e6a10();
    FUN_000e6a10();
    if (DAT_0019555c != -1) {
      FUN_000e8a1c();
      DAT_0019555c = -1;
    }
    if (DAT_003db7b8 != 0) {
      FUN_000fdd51();
      DAT_003db7b8 = 0;
    }
    if (DAT_003db7e0 != '\0') {
      DAT_003db7e0 = '\0';
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0eaf13 (Ghidra: FUN_000eaf13)
 * Prototype: void sub_0eaf13(void);
 * Address  : 0xeaf13 (Size: 157 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea9f9
 * Callees  : 4 -> 0xe6a10, 0xe8a1c, 0xfaa37, 0xfdd51
 ******************************************************************************/
void FUN_000eaf13(void)

{
  if ((DAT_003db694 != '\0') && (DAT_00195564 != '\0')) {
    FUN_000faa37(DAT_003db696);
    FUN_000e6a10();
    FUN_000e6a10();
    if (DAT_0019555c != -1) {
      FUN_000e8a1c();
      DAT_0019555c = -1;
    }
    if (DAT_003db7b8 != 0) {
      FUN_000fdd51();
      DAT_003db7b8 = 0;
    }
    if (DAT_003db7e0 != '\0') {
      DAT_003db7e0 = '\0';
    }
    DAT_00195564 = '\0';
  }
  return;
}

/******************************************************************************
 * Function : sub_0eafb8 (Ghidra: FUN_000eafb8)
 * Prototype: longlong sub_0eafb8(void);
 * Address  : 0xeafb8 (Size: 105 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xfb27e
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_000eafb8(void)

{
  int iVar1;
  int iVar2;
  uint in_EDX;
  
  if ((DAT_003db694 != '\0') && (DAT_003db7c8 != 0)) {
    iVar1 = DAT_003db7c8 + -1;
    if ((DAT_003db7c4 & 1) != 0) {
      iVar1 = iVar1 * DAT_003db7c0;
      iVar2 = FUN_000fb27e(DAT_003db696);
      return CONCAT44(in_EDX,iVar2 + iVar1 * 8);
    }
    iVar2 = FUN_000fb27e(DAT_003db696);
    return CONCAT44(in_EDX,iVar2 + iVar1 * 0x4000 + _DAT_003db7cc);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0eb021 (Ghidra: FUN_000eb021)
 * Prototype: void sub_0eb021(void);
 * Address  : 0xeb021 (Size: 73 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe8a34
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb021(void)

{
  uint extraout_ECX;
  
  if (((DAT_003db694 != '\0') && ((DAT_003db7c4 & 1) == 0)) && (DAT_0019555c != -1)) {
    FUN_000e8a34();
    _DAT_003db7cc = extraout_ECX & 0x3fff;
    DAT_003db7c8 = (extraout_ECX >> 0xe) + 1;
  }
  return;
}

/******************************************************************************
 * Function : dk_bf101_open_file_0eb0cc (Ghidra: FUN_000eb0cc)
 * Prototype: void dk_bf101_open_file_0eb0cc(void);
 * Address  : 0xeb0cc (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'BF101 - cannot open file %s'
 * Callers  : 1 -> 0xeaa28
 * Callees  : 4 -> 0xe7714, 0xf9610, 0xfdad0, 0xfdd51
 * Strings  :
 *   - 0x16cf41: "BF101 - cannot open file %s\n"
 *   - 0x16cf5e: "BF103 - oversized ADPCM chunks (%ld)\n"
 ******************************************************************************/
void FUN_000eb0cc(void)

{
  DAT_003db7b8 = FUN_000fdad0();
  if (DAT_003db7b8 == 0) {
    FUN_000e7714(&DAT_003df651,s_BF101___cannot_open_file__s_0016cf41);
    FUN_000f9610();
  }
  if (0x1000 < DAT_003db7bc) {
    FUN_000e7714(&DAT_003df651,s_BF103___oversized_ADPCM_chunks___0016cf5e,DAT_003db7bc);
    FUN_000f9610();
    FUN_000fdd51();
    DAT_003db7b8 = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0eb147 (Ghidra: FUN_000eb147)
 * Prototype: void sub_0eb147(void);
 * Address  : 0xeb147 (Size: 150 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xead2f
 * Callees  : 4 -> 0xfb0ca, 0xfb128, 0xfdd51, 0xfdd6f
 ******************************************************************************/
void FUN_000eb147(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int local_1c;
  
  if (DAT_003db7b8 != 0) {
    iVar1 = FUN_000fb0ca(DAT_003db696);
    if (iVar1 != -1) {
      iVar2 = 0;
      for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
        local_1c = FUN_000fdd6f();
        iVar2 = extraout_ECX + DAT_003db7c0;
        if (local_1c == 0) break;
      }
      FUN_000fb128(DAT_003db696,iVar1,(&DAT_003db7a8)[iVar1],iVar2);
      DAT_003db7c8 = DAT_003db7c8 + 1;
      if (local_1c == 0) {
        FUN_000fdd51();
        DAT_003db7b8 = 0;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_alloc_lock_0eb1dd (Ghidra: FUN_000eb1dd)
 * Prototype: longlong dk_alloc_lock_0eb1dd(void);
 * Address  : 0xeb1dd (Size: 174 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'Error alloc lock [0]'
 * Callers  : 1 -> 0xea94f
 * Callees  : 4 -> 0xe7714, 0xe9484, 0xf9610, 0xfe896
 * Strings  :
 *   - 0x16cf84: "Error alloc lock [0]\n"
 *   - 0x16cf9a: "Error alloc lock [1]\n"
 *   - 0x16cfb0: "Error allocating mix buffer\n"
 *   - 0x16cfcd: "Error allocating adpcm buffer\n"
 *   - 0x16cfec: "allocated all stream buffers\n"
 ******************************************************************************/
longlong FUN_000eb1dd(void)

{
  uint in_EDX;
  char *pcVar1;
  
  DAT_003db7a8 = FUN_000fe896(0x4000);
  if (DAT_003db7a8 == 0) {
    pcVar1 = s_Error_alloc_lock__0__0016cf84;
  }
  else {
    DAT_003db7ac = FUN_000fe896(0x4000);
    if (DAT_003db7ac == 0) {
      pcVar1 = s_Error_alloc_lock__1__0016cf9a;
    }
    else {
      DAT_003db7dc = FUN_000e9484();
      if (DAT_003db7dc == 0) {
        pcVar1 = s_Error_allocating_mix_buffer_0016cfb0;
      }
      else {
        DAT_003db7b4 = FUN_000e9484();
        if (DAT_003db7b4 != 0) {
          FUN_000e7714(&DAT_003df651,s_allocated_all_stream_buffers_0016cfec);
          FUN_000f9610();
          return CONCAT44(in_EDX,1);
        }
        pcVar1 = s_Error_allocating_adpcm_buffer_0016cfcd;
        DAT_003db7b4 = 0;
      }
    }
  }
  FUN_000e7714(&DAT_003df651,pcVar1);
  FUN_000f9610();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0eb28b (Ghidra: FUN_000eb28b)
 * Prototype: void sub_0eb28b(void);
 * Address  : 0xeb28b (Size: 129 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xea94f, 0xea9f9, 0xeaa28
 * Callees  : 2 -> 0xe94b0, 0xfe8c1
 ******************************************************************************/
void FUN_000eb28b(void)

{
  if (DAT_003db7a8 != 0) {
    FUN_000fe8c1(DAT_003db7a8);
    DAT_003db7a8 = 0;
  }
  if (DAT_003db7ac != 0) {
    FUN_000fe8c1(DAT_003db7ac);
    DAT_003db7ac = 0;
  }
  if (DAT_003db7b4 != 0) {
    FUN_000e94b0();
    DAT_003db7b4 = 0;
  }
  if (DAT_003db7dc != 0) {
    FUN_000e94b0();
    DAT_003db7dc = 0;
  }
  return;
}

/******************************************************************************
 * Function : dk_pan_position_pan_target_0eb30c (Ghidra: FUN_000eb30c)
 * Prototype: void dk_pan_position_pan_target_0eb30c(void);
 * Address  : 0xeb30c (Size: 303 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'Pan Position = %d, pan target = %d, pan direction = %d'
 * Callers  : 1 -> 0xead2f
 * Callees  : 6 -> 0xe7714, 0xe8a34, 0xe8a80, 0xeb43b, 0xf9610, 0xfb0ca
 * Strings  :
 *   - 0x16d00a: "Pan Position = %d, pan target = %d, pan direction = %d\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb30c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_003db7e0 != '\0') {
    iVar1 = FUN_000fb0ca(DAT_003db696);
    if (iVar1 != -1) {
      while (iVar4 < 0x8000) {
        iVar2 = FUN_000e8a80();
        iVar4 = iVar4 + iVar2;
        if (DAT_003db7a4 == 0) break;
        if (iVar4 < 0x8000) {
          DAT_003db7c8 = 0;
          _DAT_003db7cc = -iVar4;
          FUN_000e8a34();
          if (0 < DAT_003db7a4) {
            DAT_003db7a4 = DAT_003db7a4 + -1;
          }
        }
      }
      if (DAT_003db7d4 == 0) {
        uVar3 = 0;
      }
      else if (DAT_003db7d4 < 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 1;
      }
      FUN_000eb43b(uVar3);
      if (DAT_003db7d4 == 0) {
        uVar3 = 0;
      }
      else if (DAT_003db7d4 < 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 1;
      }
      FUN_000e7714(&DAT_003df651,s_Pan_Position____d__pan_target_____0016d00a,DAT_003db7d0,
                   DAT_003db7d8,uVar3);
      FUN_000f9610();
      FUN_000fb128(DAT_003db696,iVar1,(&DAT_003db7a8)[iVar1],iVar4 >> 1);
      DAT_003db7c8 = DAT_003db7c8 + 1;
      if (iVar4 < 0x4000) {
        FUN_000e8a1c();
        DAT_0019555c = 0xffffffff;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0eb43b (Ghidra: FUN_000eb43b)
 * Prototype: int sub_0eb43b(int param_1);
 * Address  : 0xeb43b (Size: 246 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xeb30c
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
int FUN_000eb43b(int param_1)

{
  short sVar1;
  short *in_EAX;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int extraout_ECX;
  short *in_EDX;
  int unaff_EBX;
  short *psVar4;
  uint local_1c;
  int local_14;
  uint local_10;
  
  local_14 = 0x80 - in_ECX;
  if (in_ECX != DAT_003db7d8) {
    if (in_ECX < DAT_003db7d8) {
      uVar2 = DAT_003db7d8 - in_ECX;
    }
    else {
      uVar2 = in_ECX - DAT_003db7d8;
    }
    iVar3 = FUN_000e69fc();
    local_1c = (uint)(iVar3 * unaff_EBX) / uVar2;
    in_ECX = extraout_ECX;
    local_10 = local_1c;
  }
  if (in_ECX == DAT_003db7d8) {
    local_10 = 1;
    local_1c = 1;
  }
  if ((in_ECX == 0) && (param_1 == 0)) {
    while (unaff_EBX = unaff_EBX + -1, unaff_EBX != -1) {
      sVar1 = *in_EAX;
      in_EAX = in_EAX + 2;
      *in_EDX = sVar1;
      in_EDX = in_EDX + 1;
    }
  }
  else if ((local_14 == 0) && (param_1 == 0)) {
    while (unaff_EBX = unaff_EBX + -1, unaff_EBX != -1) {
      psVar4 = in_EAX + 1;
      in_EAX = in_EAX + 2;
      *in_EDX = *psVar4;
      in_EDX = in_EDX + 1;
    }
  }
  else {
    while (unaff_EBX != 0) {
      for (; (local_10 = local_10 - 1, local_10 != 0xffffffff && (unaff_EBX != 0));
          unaff_EBX = unaff_EBX + -1) {
        sVar1 = *in_EAX;
        psVar4 = in_EAX + 1;
        in_EAX = in_EAX + 2;
        *in_EDX = (short)(sVar1 * local_14 + *psVar4 * in_ECX >> 7);
        in_EDX = in_EDX + 1;
      }
      local_14 = local_14 - param_1;
      in_ECX = in_ECX + param_1;
      local_10 = local_1c;
    }
    if (in_ECX == DAT_003db7d8) {
      DAT_003db7d4 = 0;
    }
  }
  return in_ECX;
}

/******************************************************************************
 * Function : sub_0eb531 (Ghidra: FUN_000eb531)
 * Prototype: undefined * sub_0eb531(void);
 * Address  : 0xeb531 (Size: 389 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xeb531, 0xeb6b6
 * Callees  : 8 -> 0xe7714, 0xe8a98, 0xe8ac4, 0xe8af0, 0xe8ca8, 0xe9dd6, 0xea290, 0xeb531
 * Strings  :
 *   - 0x16d042: "%s%s"
 *   - 0x16d047: "%s%s"
 *   - 0x16d051: "%s%s/"
 *   - 0x16d057: "%s%s"
 ******************************************************************************/
undefined * FUN_000eb531(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar4;
  undefined4 extraout_ECX_03;
  undefined1 local_2a4 [228];
  undefined1 local_1c0 [288];
  char local_a0 [144];
  
  FUN_000e8ca8();
  FUN_000e8ca8();
  local_2a4[0] = 0;
  FUN_000e9dd6();
  iVar1 = FUN_000e8ac4();
  FUN_000e8ca8();
  while( true ) {
    FUN_000e9dd6();
    iVar2 = FUN_000e8a98();
    if ((0x4fffff < iVar2) || (iVar1 == -1)) break;
    iVar1 = FUN_000e8af0();
  }
  FUN_000e7714(local_1c0,&DAT_0016d042,extraout_ECX,local_2a4); /* 0x16d042="%s%s" */
  uVar4 = extraout_ECX_00;
  if ((iVar1 == -1) || (iVar2 = FUN_000e8a98(), uVar4 = extraout_ECX_01, iVar2 < 0x500000)) {
    FUN_000e7714(local_1c0,&DAT_0016d047,uVar4); /* 0x16d047="%s%s" */
    iVar1 = FUN_000e8ac4();
    while ((iVar2 = FUN_000ea290(), iVar2 == 0 ||
           (iVar2 = FUN_000ea290(), uVar4 = extraout_ECX_02, iVar2 == 0))) {
      iVar1 = FUN_000e8af0();
    }
    while (iVar1 != -1) {
      FUN_000e7714(local_1c0,s__s_s__0016d051,uVar4,local_2a4);
      FUN_000eb531();
      FUN_000e8ca8();
      if (local_a0[0] != '\0') goto LAB_000eb696;
      iVar1 = FUN_000e8af0();
      uVar4 = extraout_ECX_03;
    }
    puVar3 = (undefined *)0x0;
  }
  else {
    if (iVar1 == 1) {
      FUN_000e7714(local_a0,&DAT_0016d057,extraout_ECX_01,local_2a4); /* 0x16d057="%s%s" */
    }
LAB_000eb696:
    FUN_000e8ca8();
    puVar3 = &DAT_003db604;
  }
  return puVar3;
}

/******************************************************************************
 * Function : dk_time_elapsed_between_reads_0eb6b6 (Ghidra: FUN_000eb6b6)
 * Prototype: undefined8 dk_time_elapsed_between_reads_0eb6b6(void);
 * Address  : 0xeb6b6 (Size: 236 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'time elapsed between reads = %d'
 * Callers  : 0 -> 
 * Callees  : 9 -> 0xe7714, 0xe8980, 0xe8a34, 0xe8a80, 0xe9484, 0xe94b0, 0xeb531, 0xf1abb, 0xf9610
 * Strings  :
 *   - 0x16d05c: "*.*"
 *   - 0x16d060: "d:/"
 *   - 0x16d064: "time elapsed between reads = %d\n"
 ******************************************************************************/
undefined8 FUN_000eb6b6(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined4 in_EDX;
  int iVar7;
  
  bVar1 = false;
  if (in_EAX == 0) {
    iVar2 = FUN_000e9484();
    iVar3 = 0;
    if (iVar2 != 0) {
      bVar1 = true;
      FUN_000eb531();
      goto LAB_000eb6f7;
    }
  }
  else {
LAB_000eb6f7:
    iVar2 = FUN_000e9484();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_000e8980();
      if (iVar3 != -1) {
        FUN_000e8a34();
        iVar4 = FUN_000f1abb();
        iVar2 = iVar3;
        for (iVar7 = 0; iVar7 < 0x500000; iVar7 = iVar7 + 0x19000) {
          iVar3 = FUN_000e8a80();
          if (iVar3 != 0x19000) goto LAB_000eb6db;
        }
        iVar3 = FUN_000f1abb(iVar4,iVar2);
        FUN_000e7714(&DAT_003df651,s_time_elapsed_between_reads____d_0016d064,iVar3 - iVar4);
        FUN_000f9610();
        uVar5 = FUN_000e94b0();
        if (bVar1) {
          uVar5 = FUN_000e94b0();
        }
        uVar6 = (undefined3)((uint)uVar5 >> 8);
        if ((uint)(iVar3 - iVar4) < 0xe) {
          uVar5 = CONCAT31(uVar6,4);
        }
        else {
          uVar5 = CONCAT31(uVar6,2);
        }
        goto LAB_000eb1d6;
      }
    }
  }
LAB_000eb6db:
  uVar5 = CONCAT31((int3)((uint)iVar3 >> 8),0xff);
LAB_000eb1d6:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_0eb7b0 (Ghidra: FUN_000eb7b0)
 * Prototype: undefined8 sub_0eb7b0(void);
 * Address  : 0xeb7b0 (Size: 50 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x30e04, 0x30e47
 * Callees  : 1 -> 0xfece8
 ******************************************************************************/
undefined8 FUN_000eb7b0(void)

{
  undefined4 in_EDX;
  undefined1 *extraout_EDX;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 uStack_8;
  undefined4 local_a;
  
  FUN_000fece8();
  *extraout_EDX = local_c;
  extraout_EDX[1] = local_b;
  *(short *)(extraout_EDX + 2) = (short)local_a;
  extraout_EDX[4] = uStack_8;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0eb818 (Ghidra: FUN_000eb818)
 * Prototype: undefined8 sub_0eb818(void);
 * Address  : 0xeb818 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 37 -> 0x2e667, 0x2e8a7, 0x2eeb9, 0x2efb4, 0x2faf6, 0x2fc49, 0x2ffe4, 0x303ad, 0x30ef8, 0x31273 ...
 * Callees  : 1 -> 0xe8d4a
 ******************************************************************************/
undefined8 FUN_000eb818(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000e8d4a();
  return CONCAT44(in_EDX,(uint)(iVar1 * 1000) / 100);
}

/******************************************************************************
 * Function : sub_0eb840 (Ghidra: FUN_000eb840)
 * Prototype: undefined8 sub_0eb840(void);
 * Address  : 0xeb840 (Size: 306 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x3752a, 0xe79fc, 0xe7aac, 0xe7c64
 * Callees  : 1 -> 0xec420
 ******************************************************************************/
undefined8 FUN_000eb840(void)

{
  char *pcVar1;
  undefined4 in_EDX;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  int local_20;
  char *local_1c;
  
  DAT_003dd824 = 1;
  if (DAT_003d9828 != 0) {
    DAT_003dc804 = DAT_003d9864 + DAT_003dc81c;
    DAT_003dc808 = DAT_003d9868 + DAT_003dc820;
    uVar6 = FUN_000ec420();
    DAT_003db7f4 = (int)uVar6;
    if (DAT_003db7f4 == (int)((ulonglong)uVar6 >> 0x20)) {
      pcVar4 = &DAT_003db804;
      local_1c = &DAT_003dc824 + (uint)*(byte *)(DAT_003d9828 + 4) * DAT_003dc810 + DAT_003dc80c;
      DAT_003db800 = DAT_003dc804 + DAT_003dc80c + DAT_003d9834 * (DAT_003dc808 + DAT_003dc810);
      pcVar5 = (char *)(DAT_003d9818 + DAT_003db800);
      local_20 = 0;
      if (0 < DAT_003db7fc) {
        do {
          iVar3 = 0;
          pcVar1 = pcVar5;
          pcVar2 = local_1c;
          if (0 < DAT_003db7f8) {
            do {
              *pcVar4 = *pcVar1;
              if (*pcVar2 != -2) {
                *pcVar1 = *pcVar2;
              }
              iVar3 = iVar3 + 1;
              pcVar4 = pcVar4 + 1;
              pcVar1 = pcVar1 + 1;
              pcVar2 = pcVar2 + 1;
            } while (iVar3 < DAT_003db7f8);
          }
          pcVar5 = pcVar5 + DAT_003d9834;
          local_1c = local_1c + *(byte *)(DAT_003d9828 + 4);
          local_20 = local_20 + 1;
        } while (local_20 < DAT_003db7fc);
      }
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0eb974 (Ghidra: FUN_000eb974)
 * Prototype: undefined8 sub_0eb974(void);
 * Address  : 0xeb974 (Size: 194 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x3752a, 0xe79fc, 0xe7aac, 0xe7c64
 * Callees  : 3 -> 0xec3c8, 0xec534, 0xec780
 ******************************************************************************/
undefined8 FUN_000eb974(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_EDX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if (DAT_003db7f4 != 0) {
    puVar4 = &DAT_003db804;
    iVar6 = 0;
    puVar5 = (undefined1 *)(DAT_003d9818 + DAT_003db800);
    if (0 < DAT_003db7fc) {
      do {
        iVar2 = 0;
        puVar3 = puVar5;
        if (0 < DAT_003db7f8) {
          do {
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar3 = uVar1;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar2 < DAT_003db7f8);
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + DAT_003d9834;
      } while (iVar6 < DAT_003db7fc);
    }
  }
  if (DAT_003dd838 != 0) {
    DAT_003d9864 = DAT_003d9864 + DAT_003dd830;
    DAT_003d9868 = DAT_003d9868 + DAT_003dd834;
    FUN_000ec3c8();
    if (DAT_003d98c0 == 0) {
      FUN_000ec780();
      FUN_000ec534();
    }
    DAT_003dd838 = 0;
  }
  DAT_003dd824 = 0;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0eba38 (Ghidra: FUN_000eba38)
 * Prototype: undefined4 sub_0eba38(void);
 * Address  : 0xeba38 (Size: 117 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6a553, 0x6a689, 0x6aac0, 0xebc10
 * Callees  : 2 -> 0xec534, 0xec780
 ******************************************************************************/
undefined4 FUN_000eba38(void)

{
  int in_EAX;
  int in_EDX;
  int extraout_EDX;
  
  if (DAT_003db7f0 == 0) {
    return 0xffffffff;
  }
  DAT_003dd824 = 1;
  if (DAT_003d98c0 == 0) {
    FUN_000ec780();
    in_EDX = extraout_EDX;
  }
  DAT_003dc81c = -in_EAX;
  DAT_003dc820 = -in_EDX;
  if (DAT_003d98c0 == 0) {
    FUN_000ec534();
  }
  DAT_003dd824 = 0;
  return 1;
}

/******************************************************************************
 * Function : sub_0ebab0 (Ghidra: FUN_000ebab0)
 * Prototype: undefined8 sub_0ebab0(void);
 * Address  : 0xebab0 (Size: 352 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x2f9f5, 0x30ef8, 0x31213, 0x31a51, 0xebc10, 0xebc98
 * Callees  : 5 -> 0xe6a10, 0xe6a6c, 0xec534, 0xec780, 0x13a710
 ******************************************************************************/
undefined8 FUN_000ebab0(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  if (DAT_003db7f0 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (in_EAX == DAT_003d9828) {
      return CONCAT44(in_EDX,1);
    }
    if ((in_EAX != 0) && ((0x40 < *(byte *)(in_EAX + 4) || (0x40 < *(byte *)(in_EAX + 5))))) {
      return CONCAT44(in_EDX,0xffffffff);
    }
    DAT_003dd824 = 1;
    if (DAT_003d98c0 == 0) {
      FUN_000ec780();
    }
    DAT_003d9828 = in_EAX;
    FUN_000e6a10();
    uVar2 = DAT_003d9874;
    uVar1 = DAT_003d9834;
    uVar3 = DAT_003d9818;
    if (in_EAX != 0) {
      DAT_003d9818 = &DAT_003dc824;
      DAT_003d9834 = (uint)*(byte *)(in_EAX + 4);
      DAT_003d9874 = 0;
      FUN_000e6a6c(DAT_003d983c,DAT_003d9848);
      FUN_0013a710();
      DAT_003d9818 = (undefined *)uVar3;
      DAT_003d9834 = uVar1;
      DAT_003d9874 = uVar2;
      FUN_000e6a6c();
    }
    if (DAT_003d98c0 == 0) {
      FUN_000ec534();
    }
    uVar3 = 1;
    DAT_003dd824 = 0;
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_0ebc10 (Ghidra: FUN_000ebc10)
 * Prototype: undefined4 sub_0ebc10(void);
 * Address  : 0xebc10 (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x2e8a7, 0x36654, 0x36ff4, 0x6a689, 0x6b12b, 0x8685c, 0x8a194, 0x8a9f4, 0x8abc4, 0x8ac9c ...
 * Callees  : 2 -> 0xeba38, 0xebab0
 ******************************************************************************/
undefined4 FUN_000ebc10(void)

{
  int iVar1;
  
  iVar1 = FUN_000ebab0();
  if (iVar1 == 1) {
    FUN_000eba38();
    return 1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0ebc34 (Ghidra: FUN_000ebc34)
 * Prototype: undefined4 sub_0ebc34(void);
 * Address  : 0xebc34 (Size: 75 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xebc98
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000ebc34(void)

{
  uint in_EAX;
  uint uVar1;
  uint in_EDX;
  uint uVar2;
  
  if (DAT_003db7f0 == 0) {
    return 0xffffffff;
  }
  uVar1 = in_EAX & 0xff;
  if ((uVar1 != 0) && (uVar1 < 0x40)) {
    uVar2 = in_EDX & 0xff;
    if ((uVar2 != 0) && (uVar2 < 0x40)) {
      DAT_003dc814 = uVar1;
      DAT_003dc818 = uVar2;
      return 1;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0ebc80 (Ghidra: FUN_000ebc80)
 * Prototype: undefined4 sub_0ebc80(void);
 * Address  : 0xebc80 (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000ebc80(void)

{
  if (DAT_003db7f0 != 0) {
    return 1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0ebc98 (Ghidra: FUN_000ebc98)
 * Prototype: undefined8 sub_0ebc98(void);
 * Address  : 0xebc98 (Size: 462 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6a553, 0x6a689, 0x6aac0
 * Callees  : 8 -> 0xe6a10, 0xebab0, 0xebc34, 0xebf50, 0xebf9c, 0xf7786, 0xfed1d, 0xfed45
 ******************************************************************************/
undefined8 FUN_000ebc98(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined2 local_48;
  
  if (DAT_003db7f0 == 0) {
    if (DAT_003dd828 == 0) {
      FUN_000fed1d();
      FUN_000f7786(0);
      if (local_48 != -1) {
        return CONCAT44(in_EDX,0xffffffff);
      }
    }
    DAT_003db7f0 = 1;
    DAT_003dc814 = 1;
    DAT_003dc81c = 0;
    DAT_003dc820 = 0;
    DAT_003dc818 = 1;
    FUN_000e6a10();
    DAT_003d9828 = 0;
    DAT_003dd824 = 0;
    FUN_000e6a10();
    iVar2 = FUN_000ebf50();
    if (iVar2 != extraout_ECX) {
      DAT_003db7f0 = 0;
      return CONCAT44(in_EDX,0xffffffff);
    }
    iVar2 = FUN_000ebc34();
    if (iVar2 != extraout_ECX) {
      DAT_003db7f0 = 0;
      return CONCAT44(in_EDX,0xffffffff);
    }
    iVar2 = FUN_000ebf9c();
    if (iVar2 != extraout_ECX) {
      DAT_003db7f0 = 0;
      return CONCAT44(in_EDX,0xffffffff);
    }
    iVar2 = FUN_000ebab0();
    if (iVar2 != extraout_ECX) {
      DAT_003db7f0 = 0;
      return CONCAT44(in_EDX,0xffffffff);
    }
    if (DAT_003dd828 == 0) {
      FUN_000fed45(0xc);
      DAT_003dd828 = 1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ebe68 (Ghidra: FUN_000ebe68)
 * Prototype: undefined8 sub_0ebe68(void);
 * Address  : 0xebe68 (Size: 130 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a652
 * Callees  : 3 -> 0xe6a10, 0xec780, 0xf7786
 ******************************************************************************/
undefined8 FUN_000ebe68(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  
  if (DAT_003db7f0 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    DAT_003dd824 = 1;
    if (DAT_003d98c0 == 0) {
      FUN_000ec780();
    }
    FUN_000e6a10();
    FUN_000f7786();
    uVar1 = 1;
    DAT_003dd828 = 0;
    DAT_003d9828 = 0;
    DAT_003db7f0 = 0;
    DAT_003dd824 = 0;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ebeec (Ghidra: FUN_000ebeec)
 * Prototype: undefined8 sub_0ebeec(void);
 * Address  : 0xebeec (Size: 98 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe7750, 0xe792c
 * Callees  : 2 -> 0xe6a10, 0xec780
 ******************************************************************************/
undefined8 FUN_000ebeec(void)

{
  undefined4 in_EDX;
  
  if (DAT_003db7f0 == 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  DAT_003dd824 = 1;
  if (DAT_003d98c0 == 0) {
    FUN_000ec780();
  }
  FUN_000e6a10();
  DAT_003d9828 = 0;
  DAT_003db7f0 = 0;
  DAT_003dd824 = 0;
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0ebf50 (Ghidra: FUN_000ebf50)
 * Prototype: undefined4 sub_0ebf50(void);
 * Address  : 0xebf50 (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xebc98
 * Callees  : 1 -> 0xec3c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ebf50(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  if (DAT_003db7f0 == 0) {
    return 0xffffffff;
  }
  DAT_003d984c = in_EAX;
  DAT_003d9850 = in_EDX;
  _DAT_003d9854 = unaff_EBX;
  DAT_003d9858 = in_ECX;
  FUN_000ec3c8();
  FUN_000ec3c8();
  return 1;
}

/******************************************************************************
 * Function : sub_0ebf9c (Ghidra: FUN_000ebf9c)
 * Prototype: undefined4 sub_0ebf9c(void);
 * Address  : 0xebf9c (Size: 139 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x2e8a7, 0x2f9f5, 0x30ef8, 0x31a51, 0x31c23, 0x31def, 0x473e1, 0x48675, 0x4897f, 0x6a689 ...
 * Callees  : 3 -> 0xec3c8, 0xec534, 0xec780
 ******************************************************************************/
undefined4 FUN_000ebf9c(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 in_EDX;
  
  if (DAT_003db7f0 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    DAT_003dd824 = 1;
    if (DAT_003d98c0 == 0) {
      FUN_000ec780();
    }
    FUN_000ec3c8();
    DAT_003d985c = in_EAX;
    DAT_003d9860 = in_EDX;
    DAT_003d9864 = in_EAX;
    DAT_003d9868 = in_EDX;
    if (DAT_003d98c0 == 0) {
      FUN_000ec534();
    }
    uVar1 = 1;
    DAT_003dd824 = 0;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_0ec028 (Ghidra: FUN_000ec028)
 * Prototype: undefined8 sub_0ec028(void);
 * Address  : 0xec028 (Size: 64 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xec3c8
 ******************************************************************************/
undefined8 FUN_000ec028(void)

{
  undefined4 in_EDX;
  
  if (DAT_003dd838 != 0) {
    DAT_003d9864 = DAT_003d9864 + DAT_003dd830;
    DAT_003d9868 = DAT_003d9868 + DAT_003dd834;
    FUN_000ec3c8();
    DAT_003dd838 = 0;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0ec068 (Ghidra: FUN_000ec068)
 * Prototype: undefined8 sub_0ec068(void);
 * Address  : 0xec068 (Size: 863 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xec3c8, 0xec534, 0xec780, 0xf0d1c, 0xf4714
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000ec068(void)

{
  char cVar1;
  char cVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 in_EDX;
  short unaff_SI;
  short unaff_DI;
  
  uVar3 = FUN_000f4714();
  cVar2 = DAT_003d987d;
  cVar1 = DAT_003d987c;
  if (DAT_003db7f0 != 0) {
    if (uVar3 != 1) {
      if (((uVar3 & 2) != 0) && (DAT_003d987e = 1, DAT_003d987b == '\0')) {
        DAT_003d987b = '\x01';
        DAT_003d985c = DAT_003d9864;
        DAT_003d9860 = DAT_003d9868;
        DAT_003d9881 = '\0';
      }
      if (((uVar3 & 4) != 0) && (DAT_003d987e = 0, DAT_003d9881 == '\0')) {
        DAT_003d9881 = '\x01';
        _DAT_003d986c = DAT_003d9864;
        _DAT_003d9870 = DAT_003d9868;
      }
      if ((uVar3 & 8) != 0) {
        DAT_003d987f = 1;
        if (DAT_003d987c == '\0') {
          DAT_003d987c = '\x01';
          DAT_003d985c = DAT_003d9864;
          DAT_003d9860 = DAT_003d9868;
          DAT_003d9883 = cVar1;
        }
      }
      if (((uVar3 & 0x10) != 0) && (DAT_003d987f = 0, DAT_003d9883 == '\0')) {
        DAT_003d9883 = '\x01';
        _DAT_003d986c = DAT_003d9864;
        _DAT_003d9870 = DAT_003d9868;
      }
      if ((uVar3 & 0x20) != 0) {
        DAT_003d9880 = 1;
        if (DAT_003d987d == '\0') {
          DAT_003d987d = '\x01';
          DAT_003d985c = DAT_003d9864;
          DAT_003d9860 = DAT_003d9868;
          DAT_003d9882 = cVar2;
        }
      }
      if (((uVar3 & 0x40) != 0) && (DAT_003d9880 = 0, DAT_003d9882 == '\0')) {
        DAT_003d9882 = '\x01';
        _DAT_003d986c = DAT_003d9864;
        _DAT_003d9870 = DAT_003d9868;
      }
    }
    if ((uVar3 & 1) != 0) {
      DAT_003db7e2._2_2_ = DAT_003dd82c;
      _DAT_003db7e6 = DAT_003dd82e;
      DAT_003dd834 = 0;
      DAT_003dd830 = 0;
      iVar4 = (int)unaff_SI - (int)DAT_003dd82c;
      if (iVar4 != 0) {
        if (iVar4 < 1) {
          DAT_003dd830 = iVar4 / DAT_003dc814;
          DAT_003db7e8 = DAT_003db7e8 + iVar4 % DAT_003dc814;
          if (DAT_003db7e8 < 0) {
            DAT_003dd830 = DAT_003dd830 + -1;
            DAT_003db7e8 = DAT_003dc814 + DAT_003db7e8 % DAT_003dc814;
          }
        }
        else {
          iVar4 = iVar4 + DAT_003db7e8;
          DAT_003db7e8 = iVar4 % DAT_003dc814;
          DAT_003dd830 = iVar4 / DAT_003dc814;
        }
        DAT_003dd838 = 1;
      }
      iVar4 = (int)unaff_DI - (int)DAT_003dd82e;
      if (iVar4 != 0) {
        if (iVar4 < 1) {
          DAT_003dd834 = iVar4 / DAT_003dc818;
          DAT_003db7ec = DAT_003db7ec + iVar4 % DAT_003dc818;
          if (DAT_003db7ec < 0) {
            DAT_003dd834 = DAT_003dd834 + -1;
            DAT_003db7ec = DAT_003dc818 + DAT_003db7ec % DAT_003dc818;
          }
        }
        else {
          iVar4 = iVar4 + DAT_003db7ec;
          DAT_003db7ec = iVar4 % DAT_003dc818;
          DAT_003dd834 = iVar4 / DAT_003dc818;
        }
        DAT_003dd838 = 1;
      }
      DAT_003dd82c = unaff_SI;
      DAT_003dd82e = unaff_DI;
      if ((DAT_003dd824 == 0) && (DAT_003d98c0 == 0)) {
        DAT_003d9864 = DAT_003d9864 + DAT_003dd830;
        DAT_003d9868 = DAT_003d9868 + DAT_003dd834;
        FUN_000ec3c8();
        FUN_000ec780();
        FUN_000ec534();
        if (DAT_003d987a != '\0') {
          FUN_000f0d1c();
        }
        DAT_003dd838 = 0;
      }
    }
  }
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0ec3c8 (Ghidra: FUN_000ec3c8)
 * Prototype: undefined4 sub_0ec3c8(void);
 * Address  : 0xec3c8 (Size: 88 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xeb974, 0xebf50, 0xebf9c, 0xec028, 0xec068
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000ec3c8(void)

{
  int *in_EAX;
  undefined4 uVar1;
  int iVar2;
  int *in_EDX;
  
  uVar1 = 0;
  iVar2 = DAT_003d984c;
  if (DAT_003d984c <= *in_EAX) {
    if (*in_EAX < DAT_003d984c + _DAT_003d9854) goto LAB_000ec3ee;
    iVar2 = DAT_003d984c + _DAT_003d9854 + -1;
  }
  uVar1 = 1;
  *in_EAX = iVar2;
LAB_000ec3ee:
  if (*in_EDX < DAT_003d9850) {
    *in_EDX = DAT_003d9850;
    return 1;
  }
  if (DAT_003d9858 + DAT_003d9850 <= *in_EDX) {
    uVar1 = 1;
    *in_EDX = DAT_003d9858 + DAT_003d9850 + -1;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_0ec420 (Ghidra: FUN_000ec420)
 * Prototype: longlong sub_0ec420(void);
 * Address  : 0xec420 (Size: 276 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xeb840, 0xec534
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000ec420(void)

{
  undefined4 uVar1;
  uint in_EDX;
  
  DAT_003db7f8 = (uint)*(byte *)(DAT_003d9828 + 4);
  DAT_003db7fc = (uint)*(byte *)(DAT_003d9828 + 5);
  DAT_003dc80c = 0;
  DAT_003dc810 = 0;
  if (((int)-DAT_003db7f8 < DAT_003dc804) && (DAT_003dc804 < DAT_003d9834)) {
    if ((DAT_003dc808 <= (int)-DAT_003db7fc) || (DAT_003d9838 <= DAT_003dc808)) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (DAT_003dc804 < 0) {
      DAT_003dc80c = -DAT_003dc804;
      DAT_003db7f8 = DAT_003db7f8 + DAT_003dc804;
    }
    if (DAT_003d9834 < (int)(DAT_003dc804 + DAT_003db7f8)) {
      DAT_003db7f8 = DAT_003d9834 - DAT_003dc804;
    }
    if (DAT_003dc808 < 0) {
      DAT_003dc810 = -DAT_003dc808;
      DAT_003db7fc = DAT_003db7fc + DAT_003dc808;
    }
    if (DAT_003d9838 < (int)(DAT_003dc808 + DAT_003db7fc)) {
      DAT_003db7fc = DAT_003d9838 - DAT_003dc808;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ec534 (Ghidra: FUN_000ec534)
 * Prototype: undefined8 sub_0ec534(void);
 * Address  : 0xec534 (Size: 585 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xeb974, 0xeba38, 0xebab0, 0xebf9c, 0xec068
 * Callees  : 2 -> 0xec420, 0xf0d1c
 ******************************************************************************/
undefined8 FUN_000ec534(void)

{
  undefined4 uVar1;
  char *pcVar2;
  char *extraout_ECX;
  undefined4 in_EDX;
  char *pcVar3;
  char *extraout_EDX;
  char *extraout_EDX_00;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  
  if (DAT_003db7f0 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (DAT_003d9828 != 0) {
      DAT_003dc804 = DAT_003d9864 + DAT_003dc81c;
      DAT_003dc808 = DAT_003d9868 + DAT_003dc820;
      DAT_003db7f4 = FUN_000ec420();
      if (DAT_003db7f4 == 1) {
        pcVar3 = &DAT_003db804;
        local_28 = &DAT_003dc824 + (uint)*(byte *)(DAT_003d9828 + 4) * DAT_003dc810 + DAT_003dc80c;
        DAT_003db800 = DAT_003dc804 + DAT_003dc80c + DAT_003d982c * (DAT_003dc808 + DAT_003dc810);
        if (DAT_003d987a == '\0') {
          local_2c = (char *)(DAT_003db800 + DAT_003d9814);
          iVar8 = DAT_003db7fc;
          while (iVar8 = iVar8 + -1, iVar8 != -1) {
            iVar5 = 0;
            iVar7 = -DAT_003db7f8;
            bVar9 = SBORROW4(0,DAT_003db7f8);
            pcVar2 = local_2c;
            pcVar4 = local_28;
            while (bVar9 != iVar7 < 0) {
              *pcVar3 = *pcVar2;
              pcVar3 = pcVar3 + 1;
              if (*pcVar4 != -2) {
                *pcVar2 = *pcVar4;
              }
              iVar5 = iVar5 + 1;
              pcVar2 = pcVar2 + 1;
              pcVar4 = pcVar4 + 1;
              iVar7 = iVar5 - DAT_003db7f8;
              bVar9 = SBORROW4(iVar5,DAT_003db7f8);
            }
            local_2c = local_2c + DAT_003d982c;
            local_28 = local_28 + *(byte *)(DAT_003d9828 + 4);
          }
        }
        else {
          FUN_000f0d1c();
          local_24 = (char *)(DAT_003d9814 + (DAT_003db800 & 0xffff));
          local_30 = DAT_003db7fc;
          pcVar3 = extraout_EDX;
          while (iVar8 = DAT_003db7f8, local_30 = local_30 + -1, local_30 != -1) {
            pcVar2 = local_28;
            pcVar4 = local_24;
            if ((char *)0xaffff < local_24 + DAT_003db7f8) {
              iVar5 = 0xb0000 - (int)local_24;
              bVar9 = SBORROW4(0,iVar5);
              iVar7 = -iVar5;
              if (0 < iVar5) {
                iVar6 = 0;
                while (bVar9 != iVar7 < 0) {
                  *pcVar3 = *pcVar4;
                  pcVar3 = pcVar3 + 1;
                  if (*pcVar2 != -2) {
                    *pcVar4 = *pcVar2;
                  }
                  iVar6 = iVar6 + 1;
                  pcVar4 = pcVar4 + 1;
                  pcVar2 = pcVar2 + 1;
                  iVar7 = iVar6 - iVar5;
                  bVar9 = SBORROW4(iVar6,iVar5);
                }
                iVar8 = iVar8 - iVar5;
              }
              FUN_000f0d1c();
              local_24 = local_24 + -0x10000;
              pcVar4 = pcVar4 + -0x10000;
              pcVar2 = extraout_ECX;
              pcVar3 = extraout_EDX_00;
            }
            iVar7 = 0;
            if (0 < iVar8) {
              do {
                *pcVar3 = *pcVar4;
                pcVar3 = pcVar3 + 1;
                if (*pcVar2 != -2) {
                  *pcVar4 = *pcVar2;
                }
                iVar7 = iVar7 + 1;
                pcVar4 = pcVar4 + 1;
                pcVar2 = pcVar2 + 1;
              } while (iVar7 < iVar8);
            }
            local_24 = local_24 + DAT_003d982c;
            local_28 = local_28 + *(byte *)(DAT_003d9828 + 4);
          }
        }
      }
    }
    uVar1 = 1;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ec780 (Ghidra: FUN_000ec780)
 * Prototype: undefined8 sub_0ec780(void);
 * Address  : 0xec780 (Size: 354 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0xeb974, 0xeba38, 0xebab0, 0xebe68, 0xebeec, 0xebf9c, 0xec068
 * Callees  : 1 -> 0xf0d1c
 ******************************************************************************/
undefined8 FUN_000ec780(void)

{
  undefined1 uVar1;
  short sVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 in_EDX;
  undefined1 *puVar6;
  undefined1 *extraout_EDX;
  undefined1 *extraout_EDX_00;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  
  if (DAT_003db7f0 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((((DAT_003d9864 != DAT_003dc804) || (DAT_003d9868 != DAT_003dc808)) || (in_EAX != 0)) &&
       (DAT_003db7f4 != 0)) {
      puVar6 = &DAT_003db804;
      if (DAT_003d987a == '\0') {
        puVar11 = (undefined1 *)(DAT_003d9814 + DAT_003db800);
        iVar9 = DAT_003db7fc;
        while (iVar9 = iVar9 + -1, iVar9 != -1) {
          iVar7 = 0;
          iVar10 = -DAT_003db7f8;
          bVar12 = SBORROW4(0,DAT_003db7f8);
          puVar4 = puVar11;
          while (bVar12 != iVar10 < 0) {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar4 = uVar1;
            iVar7 = iVar7 + 1;
            puVar4 = puVar4 + 1;
            iVar10 = iVar7 - DAT_003db7f8;
            bVar12 = SBORROW4(iVar7,DAT_003db7f8);
          }
          puVar11 = puVar11 + DAT_003d982c;
        }
      }
      else {
        sVar2 = (short)(DAT_003db800 >> 0x10);
        FUN_000f0d1c();
        puVar11 = (undefined1 *)(DAT_003d9814 + (DAT_003db800 & 0xffff));
        puVar6 = extraout_EDX;
        iVar9 = DAT_003db7fc;
        while (iVar10 = DAT_003db7f8, iVar9 = iVar9 + -1, iVar9 != -1) {
          puVar4 = puVar11;
          if ((undefined1 *)0xaffff < puVar11 + DAT_003db7f8) {
            iVar7 = 0xb0000 - (int)puVar11;
            if (0 < iVar7) {
              iVar5 = 0;
              puVar8 = puVar11;
              if (0 < iVar7) {
                do {
                  puVar4 = puVar8 + 1;
                  uVar1 = *puVar6;
                  puVar6 = puVar6 + 1;
                  iVar5 = iVar5 + 1;
                  *puVar8 = uVar1;
                  puVar8 = puVar4;
                } while (iVar5 < iVar7);
              }
              iVar10 = iVar10 - iVar7;
            }
            sVar2 = sVar2 + 1;
            puVar4 = puVar4 + -0x10000;
            puVar11 = puVar11 + -0x10000;
            FUN_000f0d1c(iVar9,sVar2);
            puVar6 = extraout_EDX_00;
          }
          iVar7 = 0;
          if (0 < iVar10) {
            do {
              uVar1 = *puVar6;
              puVar6 = puVar6 + 1;
              iVar7 = iVar7 + 1;
              *puVar4 = uVar1;
              puVar4 = puVar4 + 1;
            } while (iVar7 < iVar10);
          }
          puVar11 = puVar11 + DAT_003d982c;
        }
      }
      DAT_003db7f4 = 0;
    }
    uVar3 = 1;
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_redbook_countdown_ended_0ec8e4 (Ghidra: FUN_000ec8e4)
 * Prototype: void dk_redbook_countdown_ended_0ec8e4(void);
 * Address  : 0xec8e4 (Size: 91 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'Redbook countdown ended'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe7714, 0xf9610, 0xfa30a
 * Strings  :
 *   - 0x16d088: " Redbook countdown ended \n"
 ******************************************************************************/
void FUN_000ec8e4(void)

{
  if ((DAT_003dd855 != 0) && (DAT_003dd855 = DAT_003dd855 + -5, DAT_003dd855 == 0)) {
    FUN_000e7714(&DAT_003df651,s_Redbook_countdown_ended_0016d088);
    FUN_000f9610();
    DAT_003dd840 = 0;
    FUN_000fa30a(DAT_003dd85a);
    DAT_003dd859 = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0eca60 (Ghidra: FUN_000eca60)
 * Prototype: void sub_0eca60(void);
 * Address  : 0xeca60 (Size: 92 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf4c6c
 * Callees  : 4 -> 0xf98ca, 0xfc91b, 0xfcce5, 0xfce5d
 ******************************************************************************/
void FUN_000eca60(void)

{
  if (DAT_003dd849 != 0) {
    FUN_000fcce5(DAT_003dd83c);
    DAT_003dd844 = 0;
    FUN_000fce5d(DAT_003dd83c,DAT_00195568);
    FUN_000fc91b(DAT_003dd83c);
    if ((DAT_003df8d1 == '\0') && (DAT_003df514 == '\0')) {
      FUN_000f98ca();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0ecf0b (Ghidra: FUN_000ecf0b)
 * Prototype: undefined8 sub_0ecf0b(void);
 * Address  : 0xecf0b (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xfca93
 ******************************************************************************/
undefined8 FUN_000ecf0b(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  
  if (DAT_003dd849 == 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  uVar1 = FUN_000fca93(DAT_003dd83c);
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ecf4c (Ghidra: FUN_000ecf4c)
 * Prototype: undefined8 sub_0ecf4c(void);
 * Address  : 0xecf4c (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xfca35
 ******************************************************************************/
undefined8 FUN_000ecf4c(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  
  if (DAT_003dd849 == 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  uVar1 = FUN_000fca35(DAT_003dd83c);
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_bf110_set_redbook_volume_0ecf70 (Ghidra: FUN_000ecf70)
 * Prototype: void dk_bf110_set_redbook_volume_0ecf70(void);
 * Address  : 0xecf70 (Size: 94 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'BF110 - set redbook volume to %d'
 * Callers  : 10 -> 0x30ef8, 0x31213, 0x31854, 0x31a51, 0x31bd6, 0x31def, 0x5a417, 0x620e6, 0x6a412, 0xec93f
 * Callees  : 3 -> 0xe7714, 0xf9610, 0xfce5d
 * Strings  :
 *   - 0x16d321: "BF110 - set redbook volume to %d\n"
 ******************************************************************************/
void FUN_000ecf70(void)

{
  int in_EAX;
  undefined4 extraout_EDX;
  
  if ((((DAT_003dd849 != 0) && (in_EAX < 0x80)) && (-1 < in_EAX)) && (DAT_003dd844 == '\0')) {
    if (DAT_003debd4 != 0) {
      DAT_003dd844 = '\x01';
    }
    FUN_000e7714(&DAT_003df651,s_BF110___set_redbook_volume_to__d_0016d321);
    FUN_000f9610();
    FUN_000fce5d(DAT_003dd83c,extraout_EDX);
  }
  return;
}

/******************************************************************************
 * Function : sub_0ecfce (Ghidra: FUN_000ecfce)
 * Prototype: undefined8 sub_0ecfce(void);
 * Address  : 0xecfce (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xec93f
 * Callees  : 1 -> 0xfcdff
 ******************************************************************************/
undefined8 FUN_000ecfce(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  
  if (DAT_003dd849 == 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  uVar1 = FUN_000fcdff(DAT_003dd83c);
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ecff2 (Ghidra: FUN_000ecff2)
 * Prototype: longlong sub_0ecff2(void);
 * Address  : 0xecff2 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xfcbbf
 ******************************************************************************/
longlong FUN_000ecff2(void)

{
  undefined4 uVar1;
  uint in_EDX;
  
  if (DAT_003dd849 == 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  uVar1 = FUN_000fcbbf(DAT_003dd83c);
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0ed020 (Ghidra: FUN_000ed020)
 * Prototype: void sub_0ed020(void);
 * Address  : 0xed020 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1008d0, 0x101158, 0x11e314
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ed020(void)

{
  FUN_000e9594();
  return;
}

/******************************************************************************
 * Function : sub_0ed028 (Ghidra: FUN_000ed028)
 * Prototype: undefined8 sub_0ed028(void);
 * Address  : 0xed028 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x103134, 0x11e254, 0x11f3f0, 0x11fbe0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000ed028(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000e9670();
  if (iVar1 != 0) {
    return CONCAT44(in_EDX,1);
  }
  return CONCAT44(in_EDX,0xffffffff);
}

/******************************************************************************
 * Function : sub_0ed034 (Ghidra: FUN_000ed034)
 * Prototype: void sub_0ed034(void);
 * Address  : 0xed034 (Size: 23 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2e8a7, 0x3315b, 0x36ff4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ed034(void)

{
  int in_EAX;
  
  DAT_003dde30 = in_EAX * 1000;
  return;
}

/******************************************************************************
 * Function : dk_new_players_are_allowed_0ed0ac (Ghidra: FUN_000ed0ac)
 * Prototype: undefined8 dk_new_players_are_allowed_0ed0ac(void);
 * Address  : 0xed0ac (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'NEW PLAYERS ARE ALLOWED TO JOIN'
 * Callers  : 2 -> 0x31a51, 0x31def
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16d39a: "NEW PLAYERS ARE ALLOWED TO JOIN\n"
 *   - 0x16d3bb: "NEW PLAYERS ARE NOT ALLOWED TO JOIN\n"
 ******************************************************************************/
undefined8 FUN_000ed0ac(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 in_EDX;
  char *pcVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),0xff);
  if (DAT_003dd8a0 != 0) {
    if (in_EAX == 0) {
      pcVar2 = s_NEW_PLAYERS_ARE_NOT_ALLOWED_TO_J_0016d3bb;
    }
    else {
      pcVar2 = s_NEW_PLAYERS_ARE_ALLOWED_TO_JOIN_0016d39a;
    }
    FUN_000efd90(pcVar2);
    uVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x24))();
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_requested_servicetype_out_range_0ed1b0 (Ghidra: FUN_000ed1b0)
 * Prototype: void dk_requested_servicetype_out_range_0ed1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 *param_9);
 * Address  : 0xed1b0 (Size: 395 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'The requested serviceType %d is out of range'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xed4e0, 0xefd90
 * Strings  :
 *   - 0x16d3f1: "The requested serviceType %d is out of range\n"
 ******************************************************************************/
void FUN_000ed1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 *param_9)

{
  char in_AL;
  char cVar1;
  undefined4 *puVar2;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined1 *puStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = DAT_003d97d0;
  local_28 = &DAT_00174590;
  DAT_003d97d0 = &local_2c;
  local_24 = 0;
  if (param_9 == (undefined4 *)0x0) {
    param_9 = (undefined4 *)(undefined1 *)0x0;
  }
  else {
    switch(in_AL) {
    case '\x02':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      local_54 = *(undefined4 *)((int)param_9 + 0x19);
      local_4c = *(undefined4 *)((int)param_9 + 9);
      local_48 = *(undefined4 *)((int)param_9 + 0xd);
      local_44 = *(undefined4 *)((int)param_9 + 0x11);
      local_40 = *(undefined4 *)((int)param_9 + 0x15);
      param_9 = &local_5c;
      break;
    case '\x03':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      local_54 = *(undefined4 *)((int)param_9 + 9);
      param_9 = &local_5c;
      break;
    case '\x04':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      param_9 = &local_5c;
      break;
    case '\x05':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      local_4c = *(undefined4 *)((int)param_9 + 9);
      local_48 = *(undefined4 *)((int)param_9 + 0xd);
      local_44 = *(undefined4 *)((int)param_9 + 0x11);
      local_40 = *(undefined4 *)((int)param_9 + 0x15);
      param_9 = &local_5c;
    }
  }
  local_1c = param_6;
  local_20 = param_7;
  local_3c = param_1;
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  cVar1 = '\0';
  switch(in_AL) {
  case '\x01':
  case '\x06':
    break;
  case '\x02':
  case '\x05':
    break;
  case '\x03':
  case '\x04':
    break;
  default:
    puStack_60 = (undefined1 *)(int)in_AL;
    pcStack_64 = s_The_requested_serviceType__d_is_o_0016d3f1;
    uStack_68 = 0xed2f4;
    FUN_000efd90();
    cVar1 = -1;
  }
  puVar2 = &local_5c;
  if (cVar1 == '\0') {
    pcStack_64 = (char *)param_8;
    uStack_68 = local_20;
    uStack_6c = local_1c;
    uStack_70 = param_5;
    uStack_74 = local_30;
    uStack_78 = local_34;
    uStack_7c = local_38;
    puVar2 = &uStack_80;
    uStack_80 = local_3c;
    puStack_60 = (undefined1 *)param_9;
    FUN_000ed4e0();
  }
  DAT_003d97d0 = (undefined4 *)*(undefined4 *)((int)puVar2 + 0x30);
  return;
}

/******************************************************************************
 * Function : dk_requested_servicetype_out_range_0ed354 (Ghidra: FUN_000ed354)
 * Prototype: void dk_requested_servicetype_out_range_0ed354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9);
 * Address  : 0xed354 (Size: 182 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'The requested serviceType %d is out of range'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xed4e0, 0xefd90
 * Strings  :
 *   - 0x16d3f1: "The requested serviceType %d is out of range\n"
 ******************************************************************************/
void FUN_000ed354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  char in_AL;
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  int iStack_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  
  local_24 = DAT_003d97d0;
  cVar1 = '\0';
  local_20 = &DAT_00174594;
  local_1c = 0;
  switch(in_AL) {
  case '\x01':
  case '\x06':
    DAT_003d97d0 = &local_24;
    break;
  case '\x02':
  case '\x05':
    DAT_003d97d0 = &local_24;
    break;
  case '\x03':
  case '\x04':
    DAT_003d97d0 = &local_24;
    break;
  default:
    iStack_28 = (int)in_AL;
    pcStack_2c = s_The_requested_serviceType__d_is_o_0016d3f1;
    uStack_30 = 0xed3b8;
    DAT_003d97d0 = &local_24;
    FUN_000efd90();
    cVar1 = -1;
  }
  puVar2 = &local_24;
  if (cVar1 == '\0') {
    iStack_28 = param_9;
    pcStack_2c = (char *)param_8;
    uStack_30 = param_7;
    uStack_34 = param_6;
    uStack_38 = param_5;
    uStack_3c = param_4;
    uStack_40 = param_3;
    uStack_44 = param_2;
    puVar2 = &local_48;
    local_48 = param_1;
    FUN_000ed4e0();
  }
  DAT_003d97d0 = (undefined4 *)*puVar2;
  return;
}

/******************************************************************************
 * Function : sub_0ef460 (Ghidra: FUN_000ef460)
 * Prototype: void sub_0ef460(undefined4 param_1,char *param_2);
 * Address  : 0xef460 (Size: 72 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xef600
 ******************************************************************************/
void FUN_000ef460(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_2b [35];
  
  pcVar2 = local_2b;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  FUN_000ef600();
  return;
}

/******************************************************************************
 * Function : sub_0ef514 (Ghidra: FUN_000ef514)
 * Prototype: void sub_0ef514(undefined4 param_1);
 * Address  : 0xef514 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ef514(undefined4 param_1)

{
  DAT_003dd8a8 = param_1;
  return;
}

/******************************************************************************
 * Function : sub_0ef5b8 (Ghidra: FUN_000ef5b8)
 * Prototype: void sub_0ef5b8(void);
 * Address  : 0xef5b8 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xef600
 ******************************************************************************/
void FUN_000ef5b8(void)

{
  FUN_000ef600();
  return;
}

/******************************************************************************
 * Function : dk_Warning_0ef5c4 (Ghidra: FUN_000ef5c4)
 * Prototype: undefined * dk_Warning_0ef5c4(undefined4 param_1,uint param_2);
 * Address  : 0xef5c4 (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Log prefix 'Warning: UnidirectionalMsgCallback invalid length %d vs %d'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16e429: "  Warning: UnidirectionalMsgCallback invalid length %d vs %d"
 ******************************************************************************/
undefined * FUN_000ef5c4(undefined4 param_1,uint param_2)

{
  undefined *extraout_EDX;
  undefined *puVar1;
  
  if (param_2 < 0x20d) {
    puVar1 = &DAT_003def20;
    DAT_003df12c = 1;
  }
  else {
    FUN_000efd90(s_Warning__UnidirectionalMsgCallba_0016e429,param_2,0x20c);
    puVar1 = extraout_EDX;
  }
  return puVar1;
}

/******************************************************************************
 * Function : sub_0ef600 (Ghidra: FUN_000ef600)
 * Prototype: undefined8 sub_0ef600(void);
 * Address  : 0xef600 (Size: 339 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xef460, 0xef5b8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000ef600(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int in_EAX;
  uint uVar4;
  undefined3 uVar5;
  undefined4 in_EDX;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_20;
  char local_1c;
  
  uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),0xff00);
  bVar3 = false;
  local_1c = -1;
  if (in_EAX != 0) {
    uVar6 = 0;
    if (DAT_003dd884 != 0) {
      uVar4 = 0;
      do {
        if ((*(int *)((int)&DAT_003dd8b4 + uVar4) != 0) &&
           (*(int *)((int)&DAT_003dd8b0 + uVar4) == *(int *)(in_EAX + 1))) {
          bVar3 = true;
          local_20 = uVar6;
        }
        uVar6 = uVar6 + 1;
        uVar4 = uVar4 + 0x2c;
      } while (uVar6 < DAT_003dd884);
    }
    if (bVar3) {
      local_1c = '\0';
    }
    else {
      bVar2 = true;
      uVar6 = 0;
      uVar4 = 0;
      do {
        if (*(int *)((int)&DAT_003dd8b4 + uVar4) == 0) {
          bVar3 = true;
LAB_000ef683:
          bVar2 = false;
        }
        else {
          uVar6 = uVar6 + 1;
          uVar4 = uVar4 + 0x2c;
          if (DAT_003dd884 <= uVar6) goto LAB_000ef683;
        }
      } while (bVar2);
      if (bVar3) {
        *(undefined4 *)((int)&DAT_003dd8b0 + uVar4) = *(undefined4 *)(in_EAX + 1);
        *(undefined4 *)((int)&DAT_003dd8b4 + uVar4) = 1;
        pcVar8 = (char *)(in_EAX + 0xd);
        pcVar9 = &DAT_003dd8bc + uVar4;
        pcVar7 = pcVar8;
        do {
          cVar1 = *pcVar7;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        uVar4 = uVar6 * 0x24;
        pcVar9 = (char *)(DAT_003dd864 + uVar4);
        local_1c = '\0';
        pcVar9[0x20] = '\x01';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        do {
          cVar1 = *pcVar8;
          uVar5 = (undefined3)(uVar4 >> 8);
          uVar4 = CONCAT31(uVar5,cVar1);
          *pcVar9 = cVar1;
          local_20 = uVar6;
          if (cVar1 == '\0') break;
          cVar1 = pcVar8[1];
          uVar4 = CONCAT31(uVar5,cVar1);
          pcVar8 = pcVar8 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
      }
    }
    if (local_1c == '\0') {
      if (*(int *)(in_EAX + 9) != 0) {
        uVar4 = *(uint *)(in_EAX + 1);
        DAT_003dd8a8 = uVar4;
      }
      if (*(int *)(in_EAX + 5) != 0) {
        DAT_003dd88c = *(undefined4 *)(in_EAX + 1);
        DAT_003dd888 = local_20;
        uVar4 = local_20;
      }
    }
  }
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar4 >> 8),local_1c));
}

/******************************************************************************
 * Function : sub_0ef754 (Ghidra: FUN_000ef754)
 * Prototype: undefined8 sub_0ef754(void);
 * Address  : 0xef754 (Size: 82 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000ef754(void)

{
  bool bVar1;
  uint *in_EAX;
  int iVar2;
  undefined4 in_EDX;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = true;
  uVar4 = 0;
  uVar3 = 0;
  iVar2 = 0;
  do {
    if (uVar3 < DAT_003dd884) {
      if ((*(int *)((int)&DAT_003dd8b4 + iVar2) != 0) &&
         (*(uint *)((int)&DAT_003dd8b0 + iVar2) == *in_EAX)) {
        uVar4 = 1;
        *in_EAX = uVar3;
      }
      iVar2 = iVar2 + 0x2c;
      uVar3 = uVar3 + 1;
    }
    else {
      bVar1 = false;
    }
  } while (bVar1);
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0efcf0 (Ghidra: FUN_000efcf0)
 * Prototype: undefined8 sub_0efcf0(void);
 * Address  : 0xefcf0 (Size: 145 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xff040, 0x1012c0
 ******************************************************************************/
undefined8 FUN_000efcf0(void)

{
  int iVar1;
  undefined1 extraout_DL;
  undefined4 in_EDX;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined1 local_18;
  
  local_28 = DAT_003d97d0;
  local_24 = &DAT_001745e4;
  local_20 = 0;
  local_18 = 0;
  DAT_003d97d0 = &local_28;
  FUN_000ff040();
  iVar1 = FUN_001012c0();
  *(undefined4 *)(iVar1 + 0x723) = 0;
  *(undefined4 *)(iVar1 + 0x727) = 0;
  *(undefined1 *)(iVar1 + 0x72b) = extraout_DL;
  *(undefined ***)(iVar1 + -4) = &PTR_FUN_00103134_00174668;
  DAT_003d97d0 = (undefined4 *)local_28;
  return CONCAT44(in_EDX,iVar1 + -0xd80);
}

/******************************************************************************
 * Function : sub_0efd90 (Ghidra: FUN_000efd90)
 * Prototype: void sub_0efd90(void);
 * Address  : 0xefd90 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 84 -> 0xed0ac, 0xed1b0, 0xed354, 0xed4e0, 0xed84c, 0xeda20, 0xedc70, 0xedd8c, 0xeddf0, 0xee3c0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000efd90(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0efda0 (Ghidra: FUN_000efda0)
 * Prototype: void sub_0efda0(void);
 * Address  : 0xefda0 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000efda0(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 1) = 0;
  *(undefined4 *)(in_EAX + 5) = 0;
  *(undefined1 *)(in_EAX + 9) = 0;
  return;
}

/******************************************************************************
 * Function : sub_0efdb4 (Ghidra: FUN_000efdb4)
 * Prototype: int sub_0efdb4(void);
 * Address  : 0xefdb4 (Size: 25 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x2eeb9, 0x35758, 0x58a7e, 0x5b1bc, 0x5b25b, 0x5f4d9
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000efdb4(void)

{
  char cVar1;
  char *in_EAX;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}

/******************************************************************************
 * Function : sub_0efde0 (Ghidra: FUN_000efde0)
 * Prototype: void sub_0efde0(void);
 * Address  : 0xefde0 (Size: 56 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2f9f5, 0x6b4c7
 * Callees  : 2 -> 0xefe94, 0xf0064
 ******************************************************************************/
void FUN_000efde0(void)

{
  byte unaff_BL;
  
  DAT_003d987b = 0;
  if ((DAT_003de9a4 == 0) && ((unaff_BL & 0x8c) == 0)) {
    FUN_000efe94();
    return;
  }
  FUN_000f0064();
  return;
}

/******************************************************************************
 * Function : sub_0efe18 (Ghidra: FUN_000efe18)
 * Prototype: undefined8 sub_0efe18(void);
 * Address  : 0xefe18 (Size: 124 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0xf27dc, 0x10a7b0, 0x10ade0, 0x10bef0, 0x10c1f0, 0x10c770, 0x10cb20
 ******************************************************************************/
undefined8 FUN_000efe18(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar7 = (undefined4 *)&stack0xffffffe8;
  uStack_1c = 0xefe25;
  iVar1 = FUN_000f27dc();
  uVar3 = 0;
  if (iVar1 != 0) {
    uStack_1c = 0xefe32;
    uStack_1c = FUN_000f27dc();
    uStack_20 = 0xefe38;
    FUN_0010a7b0();
    uStack_24 = 0x2040;
    puVar4 = &uStack_28;
    puVar6 = &uStack_28;
    puVar7 = &uStack_28;
    uStack_28 = 0xffffffff;
    iVar1 = FUN_0010cb20();
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar8 = 0;
      if (*(int *)(iVar1 + 0xc) != 0) {
        do {
          *(int *)((int)puVar4 + -4) = iVar1;
          *(undefined4 *)((int)puVar4 + -8) = 0xefe5e;
          FUN_0010c1f0();
          puVar5 = (undefined1 *)((int)puVar4 + -4);
          if (uVar8 != *(uint *)(iVar1 + 0xc)) {
            *(int *)((int)puVar4 + -8) = iVar1;
            *(undefined4 *)((int)puVar4 + -0xc) = 0xefe69;
            FUN_0010bef0();
            puVar5 = (undefined1 *)((int)puVar4 + -8);
          }
          do {
            puVar6 = (undefined4 *)puVar5;
            if (DAT_003db518 != '\0') goto LAB_000efe82;
            puVar4 = (undefined4 *)(puVar5 + -4);
            puVar6 = (undefined4 *)(puVar5 + -4);
            *(int *)(puVar5 + -4) = iVar1;
            *(undefined4 *)(puVar5 + -8) = 0xefe78;
            iVar2 = FUN_0010ade0();
            puVar5 = puVar5 + -4;
          } while (iVar2 != 0);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar1 + 0xc));
      }
LAB_000efe82:
      puVar7 = (undefined4 *)((int)puVar6 + -4);
      *(int *)((int)puVar6 + -4) = iVar1;
      *(undefined4 *)((int)puVar6 + -8) = 0xefe88;
      FUN_0010c770();
      uVar3 = 1;
    }
  }
  return CONCAT44(*(undefined4 *)((int)puVar7 + 0xc),uVar3);
}

/******************************************************************************
 * Function : sub_0efe94 (Ghidra: FUN_000efe94)
 * Prototype: undefined4 sub_0efe94(void);
 * Address  : 0xefe94 (Size: 464 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xefde0
 * Callees  : 11 -> 0xe79fc, 0xe8214, 0xe846c, 0xf27dc, 0x10a7b0, 0x10ade0, 0x10b730, 0x10bef0, 0x10c1f0, 0x10c770 ...
 ******************************************************************************/
undefined4 FUN_000efe94(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint unaff_EBX;
  byte *pbVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 local_1c;
  
  pbVar6 = &stack0xffffffe8;
  if ((unaff_EBX & 1) == 0) {
    local_1c = 0xefeb7;
    iVar1 = FUN_000f27dc();
    pbVar6 = &stack0xffffffe8;
    if (iVar1 != 0) {
      local_1c = 0xefec0;
      local_1c = FUN_000f27dc();
      FUN_0010a7b0();
      pbVar6 = (byte *)&local_1c;
    }
  }
  if ((*pbVar6 & 1) == 0) {
    uVar2 = 0xfe000;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(pbVar6 + -4) = in_EAX;
  *(undefined4 *)(pbVar6 + -8) = uVar2;
  pbVar6[-0xffffffff0000000c] = 0xff;
  pbVar6[-0xffffffff0000000b] = 0xff;
  pbVar6[-0xffffffff0000000a] = 0xff;
  pbVar6[-0xffffffff00000009] = 0xff;
  pbVar6[-0xffffffff00000010] = 0xe3;
  pbVar6[-0xffffffff0000000f] = 0xfe;
  pbVar6[-0xffffffff0000000e] = 0xe;
  pbVar6[-0xffffffff0000000d] = 0;
  iVar1 = FUN_0010cb20();
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((pbVar6[-0xb] & 1) == 0) {
      iVar3 = *(int *)(iVar1 + 4);
      iVar5 = *(int *)(iVar1 + 8);
      *(int *)(pbVar6 + -0x10) = iVar1;
      *(uint *)(pbVar6 + -0x14) = (uint)(DAT_003d9834 - iVar3) >> 1;
      *(uint *)(pbVar6 + -0x18) = (uint)(DAT_003d9838 - iVar5) >> 1;
      *(int *)(pbVar6 + -0x1c) = DAT_003d9834;
      *(int *)(pbVar6 + -0x20) = DAT_003d9838;
      *(undefined4 *)(pbVar6 + -0x24) = DAT_003d9818;
    }
    else {
      iVar3 = *(int *)(iVar1 + 4);
      *(int *)(pbVar6 + -0x10) = iVar1;
      iVar5 = *(int *)(iVar1 + 8);
      *(uint *)(pbVar6 + -0x14) = 0x140U - iVar3 >> 1;
      *(uint *)(pbVar6 + -0x18) = 200U - iVar5 >> 1;
      pbVar6[-0xffffffff0000001c] = 0x40;
      pbVar6[-0xffffffff0000001b] = 1;
      pbVar6[-0xffffffff0000001a] = 0;
      pbVar6[-0xffffffff00000019] = 0;
      pbVar6[-0xffffffff00000020] = 200;
      pbVar6[-0xffffffff0000001f] = 0;
      pbVar6[-0xffffffff0000001e] = 0;
      pbVar6[-0xffffffff0000001d] = 0;
      pbVar6[-0xffffffff00000024] = 0;
      pbVar6[-0xffffffff00000023] = 0;
      pbVar6[-0xffffffff00000022] = 10;
      pbVar6[-0xffffffff00000021] = 0;
    }
    puVar8 = (uint *)(pbVar6 + -0x28);
    pbVar6[-0xffffffff00000028] = 0;
    pbVar6[-0xffffffff00000027] = 0;
    pbVar6[-0xffffffff00000026] = 0;
    pbVar6[-0xffffffff00000025] = 0;
    pbVar6[-0xffffffff0000002c] = 0x5c;
    pbVar6[-0xffffffff0000002b] = 0xff;
    pbVar6[-0xffffffff0000002a] = 0xe;
    pbVar6[-0xffffffff00000029] = 0;
    FUN_0010b730();
    for (uVar9 = 0; ((*(byte *)((int)puVar8 + 1) & 4) != 0 || (uVar9 < *(uint *)(iVar1 + 0xc)));
        uVar9 = uVar9 + 1) {
      if ((*(byte *)((int)puVar8 + 1) & 1) == 0) {
        iVar3 = *(int *)(iVar1 + 0x68);
        *(char *)((int)puVar8 + 4) = '\0';
        if (iVar3 != 0) {
          *(char *)((int)puVar8 + 4) = '\x01';
          iVar3 = 0;
          iVar5 = iVar1;
          do {
            pbVar6 = (byte *)(iVar5 + 0x6c);
            iVar4 = iVar3 + 1;
            iVar5 = iVar5 + 1;
            (&DAT_003de650)[iVar3] = (char)((int)(uint)*pbVar6 >> 2);
            iVar3 = iVar4;
          } while (iVar4 < 0x300);
        }
        *(int *)((int)puVar8 + -4) = iVar1;
        *(char *)((int)puVar8 + -0xffffffff00000008) = -100;
        *(char *)((int)puVar8 + -0xffffffff00000007) = -1;
        *(char *)((int)puVar8 + -0xffffffff00000006) = '\x0e';
        *(char *)((int)puVar8 + -0xffffffff00000005) = '\0';
        FUN_0010c1f0();
        if (*(char *)puVar8 != '\0') {
          *(char *)((int)puVar8 + -0xffffffff00000008) = -0x58;
          *(char *)((int)puVar8 + -0xffffffff00000007) = -1;
          *(char *)((int)puVar8 + -0xffffffff00000006) = '\x0e';
          *(char *)((int)puVar8 + -0xffffffff00000005) = '\0';
          FUN_000e8214();
          *(undefined1 **)((int)puVar8 + -8) = &DAT_003de650;
          *(char *)((int)puVar8 + -0xffffffff0000000c) = -0x4e;
          *(char *)((int)puVar8 + -0xffffffff0000000b) = -1;
          *(char *)((int)puVar8 + -0xffffffff0000000a) = '\x0e';
          *(char *)((int)puVar8 + -0xffffffff00000009) = '\0';
          FUN_000e846c();
        }
        *(char *)((int)puVar8 + -0xffffffff00000008) = -0x46;
        *(char *)((int)puVar8 + -0xffffffff00000007) = -1;
        *(char *)((int)puVar8 + -0xffffffff00000006) = '\x0e';
        *(char *)((int)puVar8 + -0xffffffff00000005) = '\0';
        FUN_000e79fc();
      }
      else {
        if (*(int *)(iVar1 + 0x68) != 0) {
          iVar3 = 0;
          iVar5 = iVar1;
          do {
            pbVar6 = (byte *)(iVar5 + 0x6c);
            iVar4 = iVar3 + 1;
            iVar5 = iVar5 + 1;
            (&DAT_003de650)[iVar3] = (char)((int)(uint)*pbVar6 >> 2);
            iVar3 = iVar4;
          } while (iVar4 < 0x300);
          *(undefined1 **)((int)puVar8 + -4) = &DAT_003de650;
          *(char *)((int)puVar8 + -0xffffffff00000008) = 'C';
          *(char *)((int)puVar8 + -0xffffffff00000007) = '\0';
          *(char *)((int)puVar8 + -0xffffffff00000006) = '\x0f';
          *(char *)((int)puVar8 + -0xffffffff00000005) = '\0';
          FUN_000e846c();
        }
        *(int *)((int)puVar8 + -4) = iVar1;
        *(char *)((int)puVar8 + -0xffffffff00000008) = 'L';
        *(char *)((int)puVar8 + -0xffffffff00000007) = '\0';
        *(char *)((int)puVar8 + -0xffffffff00000006) = '\x0f';
        *(char *)((int)puVar8 + -0xffffffff00000005) = '\0';
        FUN_0010c1f0();
      }
      *(int *)((int)puVar8 + -8) = iVar1;
      *(char *)((int)puVar8 + -0xffffffff0000000c) = -0x40;
      *(char *)((int)puVar8 + -0xffffffff0000000b) = -1;
      *(char *)((int)puVar8 + -0xffffffff0000000a) = '\x0e';
      *(char *)((int)puVar8 + -0xffffffff00000009) = '\0';
      FUN_0010bef0();
      puVar7 = (uint *)((int)puVar8 + -8);
      do {
        if (((*puVar7 & 2) == 0) &&
           ((((DAT_003db4fd != '\0' || (DAT_003db518 != '\0')) || (DAT_003db535 != '\0')) ||
            (DAT_003d987b != '\0')))) {
          puVar7[-1] = iVar1;
          puVar7[-2] = 0xeffef;
          FUN_0010c770();
          return 2;
        }
        puVar8 = puVar7 + -1;
        puVar7[-1] = iVar1;
        puVar7[-2] = 0xefffc;
        iVar3 = FUN_0010ade0();
        puVar7 = puVar7 + -1;
      } while (iVar3 != 0);
    }
    *(int *)((int)puVar8 + -4) = iVar1;
    *(char *)((int)puVar8 + -0xffffffff00000008) = 'W';
    *(char *)((int)puVar8 + -0xffffffff00000007) = '\0';
    *(char *)((int)puVar8 + -0xffffffff00000006) = '\x0f';
    *(char *)((int)puVar8 + -0xffffffff00000005) = '\0';
    FUN_0010c770();
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0f0064 (Ghidra: FUN_000f0064)
 * Prototype: undefined4 sub_0f0064(void);
 * Address  : 0xf0064 (Size: 357 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xefde0
 * Callees  : 13 -> 0xe8214, 0xe846c, 0xe9484, 0xe94b0, 0xf01f8, 0xf27dc, 0x10a7b0, 0x10ade0, 0x10b730, 0x10bef0 ...
 ******************************************************************************/
undefined4 FUN_000f0064(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint unaff_EBX;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_18;
  
  pbVar7 = &stack0xffffffec;
  if ((unaff_EBX & 1) == 0) {
    local_18 = 0xf0087;
    iVar1 = FUN_000f27dc();
    pbVar7 = &stack0xffffffec;
    if (iVar1 != 0) {
      local_18 = 0xf0090;
      local_18 = FUN_000f27dc();
      FUN_0010a7b0();
      pbVar7 = (byte *)&local_18;
    }
  }
  if ((*pbVar7 & 1) == 0) {
    uVar2 = 0xfe000;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(pbVar7 + -4) = in_EAX;
  *(undefined4 *)(pbVar7 + -8) = uVar2;
  pbVar7[-0xffffffff0000000c] = 0xff;
  pbVar7[-0xffffffff0000000b] = 0xff;
  pbVar7[-0xffffffff0000000a] = 0xff;
  pbVar7[-0xffffffff00000009] = 0xff;
  pbVar7[-0xffffffff00000010] = 0xb3;
  pbVar7[-0xffffffff0000000f] = 0;
  pbVar7[-0xffffffff0000000e] = 0xf;
  pbVar7[-0xffffffff0000000d] = 0;
  iVar1 = FUN_0010cb20();
  uVar2 = 0;
  if (iVar1 != 0) {
    pbVar7[-0xffffffff00000010] = 0xcb;
    pbVar7[-0xffffffff0000000f] = 0;
    pbVar7[-0xffffffff0000000e] = 0xf;
    pbVar7[-0xffffffff0000000d] = 0;
    uVar9 = FUN_000e9484();
    iVar3 = (int)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 == 0) {
      *(int *)(pbVar7 + -0x10) = iVar3;
      pbVar7[-0xffffffff00000014] = 0xd7;
      pbVar7[-0xffffffff00000013] = 0;
      pbVar7[-0xffffffff00000012] = 0xf;
      pbVar7[-0xffffffff00000011] = 0;
      FUN_0010c770();
      uVar2 = 0;
    }
    else {
      *(int *)(pbVar7 + -0x10) = iVar3;
      pbVar7[-0xffffffff00000014] = 0;
      pbVar7[-0xffffffff00000013] = 0;
      pbVar7[-0xffffffff00000012] = 0;
      pbVar7[-0xffffffff00000011] = 0;
      pbVar7[-0xffffffff00000018] = 0;
      pbVar7[-0xffffffff00000017] = 0;
      pbVar7[-0xffffffff00000016] = 0;
      pbVar7[-0xffffffff00000015] = 0;
      *(undefined4 *)(pbVar7 + -0x1c) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(pbVar7 + -0x20) = *(undefined4 *)(iVar3 + 8);
      *(int *)(pbVar7 + -0x24) = (int)uVar9;
      pbVar6 = pbVar7 + -0x28;
      pbVar7[-0xffffffff00000028] = 0;
      pbVar7[-0xffffffff00000027] = 0;
      pbVar7[-0xffffffff00000026] = 0;
      pbVar7[-0xffffffff00000025] = 0;
      pbVar7[-0xffffffff0000002c] = 0xf5;
      pbVar7[-0xffffffff0000002b] = 0;
      pbVar7[-0xffffffff0000002a] = 0xf;
      pbVar7[-0xffffffff00000029] = 0;
      FUN_0010b730();
      for (uVar8 = 0; ((pbVar6[1] & 4) != 0 || (uVar8 < *(uint *)(iVar1 + 0xc))); uVar8 = uVar8 + 1)
      {
        if (*(int *)(iVar1 + 0x68) != 0) {
          iVar3 = 0;
          iVar5 = iVar1;
          do {
            pbVar7 = (byte *)(iVar5 + 0x6c);
            iVar4 = iVar3 + 1;
            iVar5 = iVar5 + 1;
            (&DAT_003de650)[iVar3] = (char)((int)(uint)*pbVar7 >> 2);
            iVar3 = iVar4;
          } while (iVar4 < 0x300);
        }
        *(int *)(pbVar6 + -4) = iVar1;
        *(undefined4 *)(pbVar6 + -8) = 0xf0139;
        FUN_0010c1f0();
        *(undefined4 *)(pbVar6 + -8) = 0xf013e;
        FUN_000e8214();
        if (*(int *)(iVar1 + 0x68) != 0) {
          *(undefined1 **)(pbVar6 + -8) = &DAT_003de650;
          *(undefined4 *)(pbVar6 + -0xc) = 0xf014e;
          FUN_000e846c();
        }
        *(undefined4 *)(pbVar6 + -8) = 0xf0161;
        FUN_000f01f8();
        *(int *)(pbVar6 + -8) = iVar1;
        *(undefined4 *)(pbVar6 + -0xc) = 0xf0167;
        FUN_0010bef0();
        pbVar7 = pbVar6 + -8;
        do {
          if (((*pbVar7 & 2) == 0) &&
             ((((DAT_003db4fd != '\0' || (DAT_003db518 != '\0')) || (DAT_003db535 != '\0')) ||
              (DAT_003d987b != '\0')))) {
            *(int *)(pbVar7 + -4) = iVar1;
            pbVar7[-0xffffffff00000008] = 0x9b;
            pbVar7[-0xffffffff00000007] = 1;
            pbVar7[-0xffffffff00000006] = 0xf;
            pbVar7[-0xffffffff00000005] = 0;
            FUN_0010c770();
            pbVar7[-0xffffffff00000008] = 0xa2;
            pbVar7[-0xffffffff00000007] = 1;
            pbVar7[-0xffffffff00000006] = 0xf;
            pbVar7[-0xffffffff00000005] = 0;
            FUN_000e94b0();
            return 2;
          }
          pbVar6 = pbVar7 + -4;
          *(int *)(pbVar7 + -4) = iVar1;
          pbVar7[-0xffffffff00000008] = 0xfd;
          pbVar7[-0xffffffff00000007] = 0;
          pbVar7[-0xffffffff00000006] = 0xf;
          pbVar7[-0xffffffff00000005] = 0;
          iVar3 = FUN_0010ade0();
          pbVar7 = pbVar7 + -4;
        } while (iVar3 != 0);
      }
      *(int *)(pbVar6 + -4) = iVar1;
      *(undefined4 *)(pbVar6 + -8) = 0xf01b5;
      FUN_0010c770();
      *(undefined4 *)(pbVar6 + -8) = 0xf01bc;
      FUN_000e94b0();
      uVar2 = 1;
    }
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0f01cc (Ghidra: FUN_000f01cc)
 * Prototype: undefined4 sub_0f01cc(int param_1);
 * Address  : 0xf01cc (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x10a990, 0x10b320, 0x10b730, 0x10b950, 0x10cb20, 0x10d3c0, 0x10e0a0
 * Callees  : 1 -> 0xe9484
 ******************************************************************************/
undefined4 FUN_000f01cc(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_1 != -1)) {
    uVar1 = (*(code *)PTR_FUN_000e9484_00195598)();
    return uVar1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0f01e8 (Ghidra: FUN_000f01e8)
 * Prototype: void sub_0f01e8(void);
 * Address  : 0xf01e8 (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x10a8e0, 0x10a990, 0x10b730, 0x10b950, 0x10c770, 0x10cb20, 0x10d3c0
 * Callees  : 1 -> 0xe94b0
 ******************************************************************************/
void FUN_000f01e8(void)

{
  (*(code *)PTR_FUN_000e94b0_0019559c)();
  return;
}

/******************************************************************************
 * Function : sub_0f01f8 (Ghidra: FUN_000f01f8)
 * Prototype: void sub_0f01f8(void);
 * Address  : 0xf01f8 (Size: 897 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf0064
 * Callees  : 1 -> 0xe79fc
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f055d) */

void FUN_000f01f8(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar8;
  uint in_ECX;
  uint uVar6;
  uint uVar7;
  undefined1 uVar9;
  uint in_EDX;
  uint unaff_EBX;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_10;
  
  piVar10 = &local_34;
  if ((DAT_003d9878 == 1) && (DAT_003de9a4 == (code *)0x0)) {
    local_1c = 0x140;
    puVar12 = (undefined4 *)0xc8;
    iVar11 = 0xa0000;
  }
  else {
    local_1c = DAT_003d9834;
    puVar12 = DAT_003d9838;
    iVar11 = DAT_003d9818;
  }
  if (((in_ECX & 4) == 0) && ((in_ECX & 8) == 0)) {
    iVar1 = -unaff_EBX;
  }
  else {
    iVar1 = unaff_EBX * -2;
  }
  if ((in_ECX & 0x80) == 0) {
    iVar2 = -in_EDX;
  }
  else {
    iVar2 = in_EDX * -2;
  }
  puVar12 = (undefined4 *)
            (iVar11 + ((uint)((int)puVar12 + iVar1) >> 1) * local_1c +
            ((uint)(local_1c + iVar2) >> 1));
  iVar11 = local_1c * 2;
  local_10 = in_EAX;
  if ((in_ECX & 4) == 0) {
    if ((in_ECX & 0x80) == 0) {
      if ((in_ECX & 8) == 0) {
        uVar6 = 0;
        if (unaff_EBX != 0) {
          do {
            puStack_38 = puVar12;
            puVar12 = local_10;
            puVar13 = puStack_38;
            for (uVar7 = in_EDX >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            for (uVar7 = in_EDX & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            uVar6 = uVar6 + 1;
            local_10 = (undefined4 *)((int)local_10 + in_EDX);
            puVar12 = (undefined4 *)((int)puStack_38 + local_1c);
          } while (uVar6 < unaff_EBX);
        }
      }
      else {
        uVar6 = 0;
        if (unaff_EBX != 0) {
          do {
            puStack_38 = puVar12;
            puVar12 = local_10;
            puVar13 = puStack_38;
            for (uVar7 = in_EDX >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            for (uVar7 = in_EDX & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            uVar6 = uVar6 + 1;
            local_10 = (undefined4 *)((int)local_10 + in_EDX);
            puVar12 = (undefined4 *)((int)puStack_38 + iVar11);
          } while (uVar6 < unaff_EBX);
        }
      }
    }
    else if ((in_ECX & 8) == 0) {
      local_28 = 0;
      if (unaff_EBX != 0) {
        do {
          puStack_38 = puVar12;
          uVar6 = in_EDX >> 2;
          puVar12 = local_10;
          puVar13 = puStack_38;
          do {
            uVar4 = *puVar12;
            uVar9 = (undefined1)((uint)uVar4 >> 8);
            uVar8 = (undefined1)((uint)uVar4 >> 0x18);
            uVar5 = (undefined1)((uint)uVar4 >> 0x10);
            *puVar13 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11((char)uVar4,(char)uVar4));
            puVar13[1] = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar5,uVar5));
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          local_28 = local_28 + 1;
          local_10 = (undefined4 *)((int)local_10 + in_EDX);
          puVar12 = (undefined4 *)((int)puStack_38 + local_1c);
        } while (local_28 < unaff_EBX);
      }
    }
    else {
      local_20 = 0;
      if (unaff_EBX != 0) {
        do {
          puStack_38 = puVar12;
          uVar6 = in_EDX >> 2;
          puVar12 = local_10;
          puVar13 = puStack_38;
          do {
            uVar4 = *puVar12;
            uVar9 = (undefined1)((uint)uVar4 >> 8);
            uVar8 = (undefined1)((uint)uVar4 >> 0x18);
            uVar5 = (undefined1)((uint)uVar4 >> 0x10);
            *puVar13 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11((char)uVar4,(char)uVar4));
            puVar13[1] = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar5,uVar5));
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          local_20 = local_20 + 1;
          local_10 = (undefined4 *)((int)local_10 + in_EDX);
          puVar12 = (undefined4 *)((int)puStack_38 + iVar11);
          local_2c = iVar11;
        } while (local_20 < unaff_EBX);
      }
    }
  }
  else if ((in_ECX & 0x80) == 0) {
    uVar6 = 0;
    if (unaff_EBX != 0) {
      do {
        uVar7 = in_EDX >> 2;
        puVar13 = local_10;
        puVar14 = puVar12;
        do {
          uVar4 = *puVar13;
          *puVar14 = uVar4;
          *(undefined4 *)((int)puVar14 + local_1c) = uVar4;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        uVar6 = uVar6 + 1;
        puVar12 = (undefined4 *)((int)puVar12 + iVar11);
        local_10 = (undefined4 *)((int)local_10 + in_EDX);
        local_30 = iVar11;
      } while (uVar6 < unaff_EBX);
    }
  }
  else {
    local_24 = 0;
    if (unaff_EBX != 0) {
      do {
        uVar6 = in_EDX >> 2;
        puVar13 = local_10;
        puVar14 = puVar12;
        do {
          uVar4 = *puVar13;
          uVar5 = (undefined1)((uint)uVar4 >> 8);
          uVar3 = CONCAT22(CONCAT11(uVar5,uVar5),CONCAT11((char)uVar4,(char)uVar4));
          *puVar14 = uVar3;
          *(undefined4 *)((int)puVar14 + local_1c) = uVar3;
          uVar8 = (undefined1)((uint)uVar4 >> 0x18);
          uVar5 = (undefined1)((uint)uVar4 >> 0x10);
          uVar4 = CONCAT22(CONCAT11(uVar8,uVar8),CONCAT11(uVar5,uVar5));
          puVar14[1] = uVar4;
          *(undefined4 *)((int)puVar14 + local_1c + 4) = uVar4;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        local_24 = local_24 + 1;
        local_10 = (undefined4 *)((int)local_10 + in_EDX);
        puVar12 = (undefined4 *)((int)puVar12 + iVar11);
        local_34 = iVar11;
      } while (local_24 < unaff_EBX);
    }
  }
  if ((DAT_003d9878 != 1) || (DAT_003de9a4 != (code *)0x0)) {
    if (DAT_003de9a4 != (code *)0x0) {
      puStack_38 = DAT_003d9838;
      iStack_3c = DAT_003d9834;
      piVar10 = &iStack_40;
      iStack_40 = DAT_003d9818;
      (*DAT_003de9a4)();
    }
    *(undefined4 *)((int)piVar10 + -4) = 0xf0559;
    FUN_000e79fc();
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0580 (Ghidra: FUN_000f0580)
 * Prototype: undefined4 sub_0f0580(void);
 * Address  : 0xf0580 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f0580(void)

{
  uint *in_EAX;
  uint *in_EDX;
  uint unaff_EBX;
  
  for (; in_EAX < in_EDX; in_EAX = (uint *)((int)in_EAX + 6)) {
    if (unaff_EBX <= *in_EAX) {
      *in_EAX = *in_EAX - unaff_EBX;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f05d8 (Ghidra: FUN_000f05d8)
 * Prototype: undefined4 sub_0f05d8(void);
 * Address  : 0xf05d8 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x30cd9, 0x6b0c8, 0xf05f0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f05d8(void)

{
  uint *in_EAX;
  uint *in_EDX;
  uint unaff_EBX;
  
  for (; in_EAX < in_EDX; in_EAX = (uint *)((int)in_EAX + 6)) {
    if (*in_EAX < unaff_EBX) {
      *in_EAX = *in_EAX + unaff_EBX;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f05f0 (Ghidra: FUN_000f05f0)
 * Prototype: undefined8 sub_0f05f0(void);
 * Address  : 0xf05f0 (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x2ffe4, 0x30ef8, 0x31a51, 0x36654, 0x4c0ac, 0x6a553, 0x6a689, 0x6aac0
 * Callees  : 1 -> 0xf05d8
 ******************************************************************************/
undefined8 FUN_000f05f0(void)

{
  int iVar1;
  int *in_EAX;
  int extraout_ECX;
  undefined4 in_EDX;
  
  iVar1 = *in_EAX;
  while (iVar1 != 0) {
    FUN_000f05d8();
    iVar1 = *(int *)(extraout_ECX + 0xc);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0f0624 (Ghidra: FUN_000f0624)
 * Prototype: undefined4 sub_0f0624(int param_1);
 * Address  : 0xf0624 (Size: 105 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xa5240, 0xa596c
 * Callees  : 2 -> 0x1384c0, 0x13a3f8
 ******************************************************************************/
undefined4 FUN_000f0624(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((0 < in_ECX) && (0 < param_1)) {
    if ((DAT_003d9874._1_1_ & 8) != 0) {
      DAT_003de9a8 = DAT_003d9820 + (uint)(DAT_003d9884 & 0x3f) * 0x100;
    }
    FUN_0013a3f8();
    uVar1 = FUN_001384c0();
    return uVar1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f06f4 (Ghidra: FUN_000f06f4)
 * Prototype: undefined * sub_0f06f4(void);
 * Address  : 0xf06f4 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf06fa, 0xf071e
 * Callees  : 0 -> 
 ******************************************************************************/
undefined * FUN_000f06f4(void)

{
  return &DAT_001955a0;
}

/******************************************************************************
 * Function : sub_0f06fa (Ghidra: FUN_000f06fa)
 * Prototype: undefined8 sub_0f06fa(void);
 * Address  : 0xf06fa (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2ffe4, 0x7909c
 * Callees  : 1 -> 0xf06f4
 ******************************************************************************/
undefined8 FUN_000f06fa(void)

{
  uint *puVar1;
  undefined4 in_EDX;
  uint uVar2;
  
  puVar1 = (uint *)FUN_000f06f4();
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1 * 0x41c64e6d + 0x3039;
    *puVar1 = uVar2;
    uVar2 = uVar2 >> 0x10 & 0x7fff;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0f071e (Ghidra: FUN_000f071e)
 * Prototype: void sub_0f071e(void);
 * Address  : 0xf071e (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2ffe4, 0x633c4
 * Callees  : 1 -> 0xf06f4
 ******************************************************************************/
void FUN_000f071e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_000f06f4();
  if ((undefined4 *)uVar1 != (undefined4 *)0x0) {
    *(undefined4 *)uVar1 = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0730 (Ghidra: FUN_000f0730)
 * Prototype: void sub_0f0730(void);
 * Address  : 0xf0730 (Size: 93 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x31213, 0x3699b, 0x6b16f, 0x10f6c8
 * Callees  : 3 -> 0xfaa37, 0x10e3f4, 0x10e5f5
 ******************************************************************************/
void FUN_000f0730(void)

{
  undefined4 *puVar1;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_00195d1a != '\0')) {
    FUN_0010e3f4();
    for (puVar1 = &DAT_003df170; puVar1 <= DAT_003df510; puVar1 = (undefined4 *)((int)puVar1 + 0x1d)
        ) {
      FUN_000faa37(*puVar1);
      *(undefined2 *)((int)puVar1 + 0x12) = 0;
      *(undefined4 *)((int)puVar1 + 0xe) = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      *(undefined1 *)((int)puVar1 + 0x15) = 0;
    }
    FUN_0010e5f5();
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0790 (Ghidra: FUN_000f0790)
 * Prototype: void sub_0f0790(void);
 * Address  : 0xf0790 (Size: 214 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x31854, 0x36e52, 0x6fca5
 * Callees  : 2 -> 0xfaaf9, 0xfac8f
 ******************************************************************************/
void FUN_000f0790(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  short in_DX;
  short unaff_BX;
  int *piVar2;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_00195d1a != '\0')) {
    if ((in_DX == 0) && (in_EAX == 0)) {
      for (piVar2 = &DAT_003df170; piVar2 <= DAT_003df510; piVar2 = (int *)((int)piVar2 + 0x1d)) {
        if (((*piVar2 == in_ECX) && (iVar1 = FUN_000fac8f(*piVar2), iVar1 == 4)) &&
           ((iVar1 = (int)unaff_BX, -1 < iVar1 && ((iVar1 < 0x80 && (iVar1 != piVar2[1])))))) {
LAB_000f0851:
          FUN_000faaf9(*piVar2,(int)unaff_BX);
          piVar2[1] = (int)unaff_BX;
          return;
        }
      }
    }
    else {
      for (piVar2 = &DAT_003df170; piVar2 <= DAT_003df510; piVar2 = (int *)((int)piVar2 + 0x1d)) {
        if (((in_EAX == *(int *)((int)piVar2 + 0xe)) && (*(short *)((int)piVar2 + 0x12) == in_DX))
           && ((iVar1 = FUN_000fac8f(*piVar2), iVar1 == 4 &&
               (((iVar1 = (int)unaff_BX, -1 < iVar1 && (iVar1 < 0x80)) && (iVar1 != piVar2[1]))))))
        goto LAB_000f0851;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0870 (Ghidra: FUN_000f0870)
 * Prototype: undefined4 sub_0f0870(byte param_1);
 * Address  : 0xf0870 (Size: 192 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x322e9, 0x53a18, 0x54eeb, 0x5542b, 0x56ee6, 0x571cf, 0x57348, 0x574b5, 0x590f8, 0x5c8fa ...
 * Callees  : 2 -> 0xf6a84, 0x10e6bc
 ******************************************************************************/
undefined4 FUN_000f0870(byte param_1)

{
  uint uVar1;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int local_18;
  
  uVar1 = (uint)param_1;
  if (((byte)DAT_003d9874 & 0x10) == 0) {
    FUN_0010e6bc(uVar1);
  }
  else {
    if ((unaff_EBX < 1) || (in_ECX < 1)) {
      return 0xffffffff;
    }
    FUN_000f6a84(uVar1);
    FUN_000f6a84(in_ECX);
    if (2 < (uint)(local_18 + in_EDX)) {
      FUN_000f6a84(local_18,uVar1 - 2);
      FUN_000f6a84(local_18 + in_EDX);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f0964 (Ghidra: FUN_000f0964)
 * Prototype: undefined8 sub_0f0964(void);
 * Address  : 0xf0964 (Size: 109 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x3442b, 0x345fd, 0x63412, 0x7909c, 0xf1b38
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f0964(void)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  undefined4 in_EDX;
  int iVar3;
  
  while (((&DAT_0017469c)[(byte)(*in_EAX + 1)] & 2) != 0) {
    in_EAX = in_EAX + 1;
  }
  bVar1 = *in_EAX;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    in_EAX = in_EAX + 1;
  }
  iVar3 = 0;
  while (((&DAT_0017469c)[(byte)(*in_EAX + 1)] & 0x20) != 0) {
    bVar2 = *in_EAX;
    in_EAX = in_EAX + 1;
    iVar3 = iVar3 * 10 + (uint)bVar2 + -0x30;
  }
  if (bVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0f09d1 (Ghidra: FUN_000f09d1)
 * Prototype: void sub_0f09d1(void);
 * Address  : 0xf09d1 (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x34a8a, 0xf8e19
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f09d1(void)

{
  char cVar1;
  char *in_EAX;
  char in_DL;
  
  do {
    if (in_DL == *in_EAX) {
      return;
    }
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  return;
}

/******************************************************************************
 * Function : sub_0f09e5 (Ghidra: FUN_000f09e5)
 * Prototype: int sub_0f09e5(void);
 * Address  : 0xf09e5 (Size: 71 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x35546, 0x5a47f, 0x63412, 0x7b6df, 0x7b7d9, 0x7b8d8, 0xf143c, 0xf174e, 0xf8eec, 0xfe128 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000f09e5(void)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  byte *in_EDX;
  
  while( true ) {
    bVar1 = *in_EAX;
    bVar2 = *in_EDX;
    if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
      bVar1 = bVar1 + 0x20;
    }
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 + 0x20;
    }
    if ((bVar1 != bVar2) || (bVar2 == 0)) break;
    in_EAX = in_EAX + 1;
    in_EDX = in_EDX + 1;
  }
  return (uint)bVar1 - (uint)bVar2;
}

/******************************************************************************
 * Function : sub_0f0a2c (Ghidra: FUN_000f0a2c)
 * Prototype: void sub_0f0a2c(void);
 * Address  : 0xf0a2c (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x35bbf, 0x7909c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f0a2c(void)

{
  char cVar1;
  char *in_EAX;
  
  for (; cVar1 = *in_EAX, cVar1 != '\0'; in_EAX = in_EAX + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *in_EAX = cVar1 + -0x20;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0a54 (Ghidra: FUN_000f0a54)
 * Prototype: void sub_0f0a54(void);
 * Address  : 0xf0a54 (Size: 94 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x36e52, 0x6e09b
 * Callees  : 2 -> 0xfaa37, 0xfac8f
 ******************************************************************************/
void FUN_000f0a54(void)

{
  int in_EAX;
  int iVar1;
  short in_DX;
  undefined4 *puVar2;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_00195d1a != '\0')) {
    for (puVar2 = &DAT_003df170; puVar2 <= DAT_003df510; puVar2 = (undefined4 *)((int)puVar2 + 0x1d)
        ) {
      if (((in_EAX == *(int *)((int)puVar2 + 0xe)) && (in_DX == *(short *)((int)puVar2 + 0x12))) &&
         (iVar1 = FUN_000fac8f(*puVar2), iVar1 != 2)) {
        FUN_000faa37(*puVar2);
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0ab2 (Ghidra: FUN_000f0ab2)
 * Prototype: void sub_0f0ab2(void);
 * Address  : 0xf0ab2 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x36f48, 0x125c34
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f0ab2(void)

{
  code *pcVar1;
  int in_EAX;
  uint uVar2;
  
  if (in_EAX != 0) {
    uVar2 = (in_EAX * DAT_003e0304 + 500U) / 1000;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    do {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0ab8 (Ghidra: FUN_000f0ab8)
 * Prototype: void sub_0f0ab8(void);
 * Address  : 0xf0ab8 (Size: 168 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x36ff4, 0x402e5, 0x6f3d6, 0xf2188
 * Callees  : 4 -> 0xfa30a, 0xfb83c, 0xfb8f8, 0xfba8e
 ******************************************************************************/
void FUN_000f0ab8(void)

{
  int iVar1;
  
  if ((((DAT_003df8d1 != '\0') && (DAT_00195d98 != '\0')) && (DAT_00195d99 != '\0')) &&
     (DAT_003df8d9 != 0)) {
    if (DAT_003df8fa != '\0') {
      FUN_000fa30a(DAT_003df8f1);
    }
    DAT_003df8fb = 0;
    DAT_003df8fa = '\0';
    DAT_00195d9a = 1;
    DAT_003df8f9 = 0;
    DAT_00195d9b = 0xff;
    iVar1 = FUN_000fba8e(DAT_003df8ed);
    if (iVar1 != 2) {
      FUN_000fb83c(DAT_003df8ed);
      FUN_000fb8f8(DAT_003df8ed);
    }
    DAT_003df8d9 = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0b60 (Ghidra: FUN_000f0b60)
 * Prototype: void sub_0f0b60(void);
 * Address  : 0xf0b60 (Size: 77 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x374c3, 0x3aa92, 0x3acde, 0x3ad39, 0x8ecb0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f0b60(void)

{
  undefined4 *in_EAX;
  uint uVar1;
  undefined4 *in_EDX;
  uint unaff_EBX;
  undefined4 *puVar2;
  undefined2 *puVar3;
  
  if (in_EDX != in_EAX) {
    if ((in_EDX < in_EAX) && (in_EAX < (undefined4 *)((int)in_EDX + unaff_EBX))) {
      uVar1 = unaff_EBX >> 1;
      puVar2 = (undefined4 *)((int)in_EDX + unaff_EBX);
      puVar3 = (undefined2 *)((int)in_EAX + unaff_EBX);
      while( true ) {
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        puVar3[-1] = *(undefined2 *)((int)puVar2 - 2U);
        puVar2 = (undefined4 *)((int)puVar2 - 2U);
        puVar3 = puVar3 + -1;
      }
      uVar1 = (uint)((unaff_EBX & 1) != 0);
      while( true ) {
        puVar3 = (undefined2 *)((int)puVar3 + -1);
        puVar2 = (undefined4 *)((int)puVar2 - 1);
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
      }
      return;
    }
    for (uVar1 = unaff_EBX >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *in_EAX = *in_EDX;
      in_EDX = in_EDX + 1;
      in_EAX = in_EAX + 1;
    }
    for (uVar1 = unaff_EBX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)in_EAX = *(undefined1 *)in_EDX;
      in_EDX = (undefined4 *)((int)in_EDX + 1);
      in_EAX = (undefined4 *)((int)in_EAX + 1);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f0bb0 (Ghidra: FUN_000f0bb0)
 * Prototype: undefined8 sub_0f0bb0(void);
 * Address  : 0xf0bb0 (Size: 271 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf0cc0
 * Callees  : 3 -> 0xe6a10, 0xfed1d, 0xfed45
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f0bb0(void)

{
  short extraout_CX;
  undefined4 in_EDX;
  undefined4 local_88 [6];
  int local_70;
  undefined4 local_6c;
  undefined2 local_66;
  undefined2 local_64;
  undefined4 local_50;
  undefined1 *local_40;
  
  FUN_000e6a10();
  local_6c = 0x4f01;
  local_66 = (undefined2)(DAT_003de9b4 >> 4);
  local_70 = (int)extraout_CX;
  local_88[0] = 0;
  local_64 = local_66;
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000fed1d();
  local_50 = 0x10;
  local_40 = (undefined1 *)local_88;
  FUN_000fed45();
  _DAT_003de9ba = (ushort)*(byte *)(DAT_003de9b4 + 5) * 0x100 + (ushort)*(byte *)(DAT_003de9b4 + 4);
  _DAT_003de9ac =
       (ushort)*(byte *)(DAT_003de9b4 + 0x11) * 0x100 + (ushort)*(byte *)(DAT_003de9b4 + 0x10);
  _DAT_003de9ae =
       (ushort)*(byte *)(DAT_003de9b4 + 0x13) * 0x100 + (ushort)*(byte *)(DAT_003de9b4 + 0x12);
  _DAT_003de9b0 =
       (ushort)*(byte *)(DAT_003de9b4 + 0x15) * 0x100 + (ushort)*(byte *)(DAT_003de9b4 + 0x14);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0f0cc0 (Ghidra: FUN_000f0cc0)
 * Prototype: undefined8 sub_0f0cc0(void);
 * Address  : 0xf0cc0 (Size: 90 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe7750
 * Callees  : 3 -> 0xe6a10, 0xf0bb0, 0xf7786
 ******************************************************************************/
undefined8 FUN_000f0cc0(void)

{
  undefined2 extraout_CX;
  undefined4 in_EDX;
  
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000f7786(2,extraout_CX);
  FUN_000f0bb0();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0f0d1c (Ghidra: FUN_000f0d1c)
 * Prototype: undefined8 sub_0f0d1c(void);
 * Address  : 0xf0d1c (Size: 113 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3752a, 0x6ae37, 0xe79fc, 0xe7aac, 0xe7c64, 0xec068, 0xec534, 0xec780
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f0d1c(void)

{
  code *pcVar1;
  short in_AX;
  undefined1 *puVar2;
  undefined1 auStack_c [8];
  
  puVar2 = &stack0xffffffec;
  if (in_AX != DAT_003de9b8) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    puVar2 = auStack_c;
    DAT_003de9b8 = in_AX;
  }
  return CONCAT44(*(undefined4 *)(puVar2 + 8),1);
}

/******************************************************************************
 * Function : sub_0f0e64 (Ghidra: FUN_000f0e64)
 * Prototype: longlong sub_0f0e64(void);
 * Address  : 0xf0e64 (Size: 80 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe79ac
 * Callees  : 1 -> 0xf0d90
 ******************************************************************************/
longlong FUN_000f0e64(void)

{
  short in_AX;
  int iVar1;
  short *psVar2;
  uint in_EDX;
  
  iVar1 = FUN_000f0d90();
  if (iVar1 == 1) {
    for (psVar2 = (short *)((uint)*(ushort *)(DAT_003de9b4 + 0x10) * 0x10 +
                           (uint)*(ushort *)(DAT_003de9b4 + 0xe)); *psVar2 != -1;
        psVar2 = psVar2 + 1) {
      if (in_AX == *psVar2) {
        return CONCAT44(in_EDX,1);
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0f0ec0 (Ghidra: FUN_000f0ec0)
 * Prototype: int sub_0f0ec0(void);
 * Address  : 0xf0ec0 (Size: 152 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x63412
 * Callees  : 3 -> 0xe9b44, 0x10e8f0, 0x10ea34
 * Strings  :
 *   - 0x16e770: "ERROR.LOG"
 *   - 0x16e77a: "Error: "
 ******************************************************************************/
int FUN_000f0ec0(void)

{
  int iVar1;
  int extraout_ECX;
  
  if (DAT_003de9bc != 0) {
    return -1;
  }
  iVar1 = FUN_000e9b44(0x90);
  if (iVar1 != -1) {
    iVar1 = FUN_0010e8f0();
    if (iVar1 != 1) {
      return -1;
    }
    FUN_0010ea34();
    iVar1 = extraout_ECX;
    DAT_003de9bc = extraout_ECX;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_0f0f8c (Ghidra: FUN_000f0f8c)
 * Prototype: undefined8 sub_0f0f8c(void);
 * Address  : 0xf0f8c (Size: 140 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x3a3d4, 0x51d41, 0x5d7b5, 0x6b04d, 0x6b16f, 0xe63ac, 0xe830c, 0xe984c
 * Callees  : 2 -> 0x10e9bc, 0x10eb2a
 ******************************************************************************/
undefined8 FUN_000f0f8c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_EDX;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  char local_218 [512];
  undefined1 *local_18;
  char *pcVar6;
  
  bVar7 = 0;
  if (DAT_003de9bc == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = &stack0x00000008;
    pcVar4 = &DAT_0016e782;
    FUN_0010eb2a();
    local_18 = (undefined1 *)0x0;
    iVar3 = -1;
    pcVar6 = local_218;
    do {
      pcVar5 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar5;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    uVar2 = FUN_0010e9bc(&DAT_003de9c0,local_218);
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0f1018 (Ghidra: FUN_000f1018)
 * Prototype: longlong sub_0f1018(void);
 * Address  : 0xf1018 (Size: 58 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xf113f, 0xf11e4, 0xf129d, 0xf1342, 0xf143c
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
longlong FUN_000f1018(void)

{
  int in_EAX;
  undefined4 local_18;
  undefined4 local_c;
  
  FUN_000f7786(0x100,in_EAX + 0xf >> 4);
  if (local_c != 0) {
    return 0;
  }
  return (ulonglong)local_18 << 0x20;
}

/******************************************************************************
 * Function : sub_0f1052 (Ghidra: FUN_000f1052)
 * Prototype: int sub_0f1052(void);
 * Address  : 0xf1052 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf13e7, 0xf174e
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
int FUN_000f1052(void)

{
  undefined4 local_c;
  
  FUN_000f7786(0x101);
  return (local_c == 0) - 1;
}

/******************************************************************************
 * Function : sub_0f1082 (Ghidra: FUN_000f1082)
 * Prototype: undefined8 sub_0f1082(void);
 * Address  : 0xf1082 (Size: 55 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf11e4
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
undefined8 FUN_000f1082(void)

{
  undefined4 in_EDX;
  undefined4 local_10;
  
  FUN_000f7786();
  if (local_10 != 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  return CONCAT44(in_EDX,2);
}

/******************************************************************************
 * Function : sub_0f10b9 (Ghidra: FUN_000f10b9)
 * Prototype: undefined8 sub_0f10b9(void);
 * Address  : 0xf10b9 (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0xf113f, 0xf11e4, 0xf129d, 0xf1342
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
undefined8 FUN_000f10b9(void)

{
  undefined4 in_EDX;
  undefined2 local_20;
  undefined2 local_1c;
  undefined4 local_10;
  
  FUN_000f7786(6);
  if (local_10 != 0) {
    return CONCAT44(in_EDX,0xffffffff);
  }
  return CONCAT44(in_EDX,((int)(uint)local_1c >> 4) + (uint)local_20 * 0x1000);
}

/******************************************************************************
 * Function : sub_0f10fc (Ghidra: FUN_000f10fc)
 * Prototype: undefined8 sub_0f10fc(void);
 * Address  : 0xf10fc (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf143c
 * Callees  : 1 -> 0xf9c40
 ******************************************************************************/
undefined8 FUN_000f10fc(void)

{
  int in_EAX;
  undefined4 in_EDX;
  short local_18 [2];
  undefined2 local_14;
  short local_12;
  char local_10;
  
  local_14 = 0x10;
  FUN_000f9c40(*(undefined4 *)(in_EAX + 4),0x506,local_18,local_18);
  if (local_18[0] == 0) {
    return CONCAT44(in_EDX,(int)local_12 << (local_10 + 0x10U & 0x1f));
  }
  return CONCAT44(in_EDX,0xffffffff);
}

/******************************************************************************
 * Function : sub_0f113f (Ghidra: FUN_000f113f)
 * Prototype: int sub_0f113f(void);
 * Address  : 0xf113f (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf143c
 * Callees  : 3 -> 0xf1018, 0xf10b9, 0xf9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f113f(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined2 in_DX;
  int in_GS_OFFSET;
  int6 iVar2;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  iVar2 = CONCAT24(_DAT_003dea98,DAT_003dea94);
  if ((DAT_003dea94 == 0) && (iVar2 = CONCAT24(_DAT_003dea98,DAT_003dea94), _DAT_003dea98 == 0)) {
    iVar2 = FUN_000f1018();
    _DAT_003dea98 = (short)((uint6)iVar2 >> 0x20);
    DAT_003dea94 = (int)iVar2;
    if (iVar2 == 0) {
      return -1;
    }
  }
  _DAT_003dea98 = (short)((uint6)iVar2 >> 0x20);
  DAT_003dea94 = (int)iVar2;
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94) = in_DX;
  uVar1 = FUN_000f10b9();
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94 + 2) = uVar1;
  local_14 = 0x11;
  local_12 = FUN_000f10b9();
  local_10 = 0;
  FUN_000f9c40(*(undefined4 *)(in_EAX + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : sub_0f11e4 (Ghidra: FUN_000f11e4)
 * Prototype: undefined8 sub_0f11e4(void);
 * Address  : 0xf11e4 (Size: 185 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf143c
 * Callees  : 4 -> 0xf1018, 0xf1082, 0xf10b9, 0xf9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f11e4(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined2 in_DX;
  int iVar3;
  int in_GS_OFFSET;
  int6 iVar4;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  short local_10;
  
  iVar4 = CONCAT24(_DAT_003dea98,DAT_003dea94);
  if ((DAT_003dea94 == 0) && (iVar4 = CONCAT24(_DAT_003dea98,DAT_003dea94), _DAT_003dea98 == 0)) {
    iVar4 = FUN_000f1018();
    if (iVar4 == 0) {
      DAT_003dea94 = (int)iVar4;
      _DAT_003dea98 = (short)((uint6)iVar4 >> 0x20);
      return 0;
    }
  }
  _DAT_003dea98 = (short)((uint6)iVar4 >> 0x20);
  DAT_003dea94 = (int)iVar4;
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94) = in_DX;
  uVar1 = FUN_000f10b9();
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94 + 2) = uVar1;
  local_14 = 0x17;
  local_12 = FUN_000f10b9();
  local_10 = 0;
  FUN_000f9c40(*(undefined4 *)(in_EAX + 4),0x506,local_18,local_18);
  if (local_18[0] == 0) {
    iVar3 = (int)local_10;
    uVar2 = FUN_000f1082();
    return CONCAT44(uVar2,iVar3);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0f129d (Ghidra: FUN_000f129d)
 * Prototype: int sub_0f129d(void);
 * Address  : 0xf129d (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf143c
 * Callees  : 3 -> 0xf1018, 0xf10b9, 0xf9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f129d(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined2 in_DX;
  int in_GS_OFFSET;
  int6 iVar2;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  iVar2 = CONCAT24(_DAT_003dea98,DAT_003dea94);
  if ((DAT_003dea94 == 0) && (iVar2 = CONCAT24(_DAT_003dea98,DAT_003dea94), _DAT_003dea98 == 0)) {
    iVar2 = FUN_000f1018();
    _DAT_003dea98 = (short)((uint6)iVar2 >> 0x20);
    DAT_003dea94 = (int)iVar2;
    if (iVar2 == 0) {
      return -1;
    }
  }
  _DAT_003dea98 = (short)((uint6)iVar2 >> 0x20);
  DAT_003dea94 = (int)iVar2;
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94) = in_DX;
  uVar1 = FUN_000f10b9();
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94 + 2) = uVar1;
  local_14 = 0x18;
  local_12 = FUN_000f10b9();
  local_10 = 0;
  FUN_000f9c40(*(undefined4 *)(in_EAX + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : sub_0f1342 (Ghidra: FUN_000f1342)
 * Prototype: int sub_0f1342(void);
 * Address  : 0xf1342 (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf143c
 * Callees  : 3 -> 0xf1018, 0xf10b9, 0xf9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f1342(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined2 in_DX;
  int in_GS_OFFSET;
  int6 iVar2;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  iVar2 = CONCAT24(_DAT_003dea98,DAT_003dea94);
  if ((DAT_003dea94 == 0) && (iVar2 = CONCAT24(_DAT_003dea98,DAT_003dea94), _DAT_003dea98 == 0)) {
    iVar2 = FUN_000f1018();
    _DAT_003dea98 = (short)((uint6)iVar2 >> 0x20);
    DAT_003dea94 = (int)iVar2;
    if (iVar2 == 0) {
      return -1;
    }
  }
  _DAT_003dea98 = (short)((uint6)iVar2 >> 0x20);
  DAT_003dea94 = (int)iVar2;
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94) = in_DX;
  uVar1 = FUN_000f10b9();
  *(undefined2 *)(in_GS_OFFSET + DAT_003dea94 + 2) = uVar1;
  local_14 = 0x19;
  local_12 = FUN_000f10b9();
  local_10 = 0;
  FUN_000f9c40(*(undefined4 *)(in_EAX + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : sub_0f13e7 (Ghidra: FUN_000f13e7)
 * Prototype: int sub_0f13e7(void);
 * Address  : 0xf13e7 (Size: 85 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf174e
 * Callees  : 2 -> 0xf1052, 0xf9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f13e7(void)

{
  int in_EAX;
  short local_18 [2];
  undefined2 local_14;
  
  FUN_000f1052();
  local_14 = 0x12;
  _DAT_003dea98 = 0;
  DAT_003dea94 = 0;
  FUN_000f9c40(*(undefined4 *)(in_EAX + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : sub_0f17d0 (Ghidra: FUN_000f17d0)
 * Prototype: void sub_0f17d0(int param_1,uint param_2);
 * Address  : 0xf17d0 (Size: 164 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xfb83c, 0xfb89a, 0xfc70b
 ******************************************************************************/
void FUN_000f17d0(int param_1,uint param_2)

{
  if (param_1 == 0) {
    DAT_003df8fb = 1;
    if (DAT_003df8f8 == '\0') {
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,param_2 | 0xb0,0xb,0);
      (&DAT_003dea9c)[param_2] = 1;
    }
    else {
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,param_2 | 0xb0,0x6b,0x7f);
      DAT_003df8fb = 0;
    }
  }
  if (param_1 == 1) {
    FUN_000fb83c(DAT_003df8ed);
    FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,param_2 | 0xb0,0,1);
    FUN_000fb89a(DAT_003df8ed);
  }
  return;
}

/******************************************************************************
 * Function : sub_0f1874 (Ghidra: FUN_000f1874)
 * Prototype: void sub_0f1874(void);
 * Address  : 0xf1874 (Size: 583 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x402e5, 0x6f3d6
 * Callees  : 9 -> 0xfa30a, 0xfb774, 0xfb7de, 0xfb83c, 0xfb8f8, 0xfb9c0, 0xfba8e, 0xfc255, 0xfc70b
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1874(void)

{
  byte bVar1;
  ushort in_AX;
  int iVar2;
  byte in_DL;
  byte local_14;
  
  if (_DAT_003debdc != 0) {
    in_AX = DAT_003debdc;
  }
  if ((((DAT_003df8d1 != '\0') && (DAT_00195d98 != '\0')) && (DAT_00195d99 != '\0')) &&
     (((int)(short)in_AX <= (int)(uint)DAT_003df8db && ((uint)DAT_003df8d9 != (int)(short)in_AX))))
  {
    if (DAT_003df8fa != '\0') {
      FUN_000fa30a(DAT_003df8f1);
    }
    DAT_003df8fb = 0;
    DAT_003df8fa = '\0';
    DAT_00195d9a = 1;
    DAT_003df8f9 = 0;
    DAT_00195d9b = 0xff;
    if (DAT_003df8d9 != 0) {
      iVar2 = FUN_000fba8e(DAT_003df8ed);
      if (iVar2 != 2) {
        FUN_000fb83c(DAT_003df8ed);
        FUN_000fb8f8(DAT_003df8ed);
      }
      DAT_003df8d9 = 0;
    }
    FUN_000fb774(DAT_003df8ed,*(undefined4 *)((short)in_AX * 0x20 + 0x12 + DAT_003df8dd),0);
    local_14 = 0;
    FUN_000fc255(DAT_003df8ed,FUN_000f17d0);
    while (local_14 < 0x10) {
      (&DAT_003dea9c)[local_14] = 0;
      bVar1 = local_14 | 0xb0;
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,0,0);
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,7,0);
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,local_14 | 0xe0,0,0x40);
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,0xb,0x7f);
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,1,0);
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,0x5b,0);
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,0x5d,0);
      local_14 = local_14 + 1;
      FUN_000fc70b(DAT_003df8e9,DAT_003df8ed,bVar1,0x6b,0);
    }
    if (in_DL < 0x7f) {
      FUN_000fb9c0(DAT_003df8ed,in_DL,0);
    }
    FUN_000fb7de(DAT_003df8ed);
    _DAT_003df8d7 = 100;
    DAT_003df8d9 = in_AX;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f1abb (Ghidra: FUN_000f1abb)
 * Prototype: undefined8 sub_0f1abb(void);
 * Address  : 0xf1abb (Size: 47 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x404f7, 0x65a61, 0xeb6b6, 0xfee88
 * Callees  : 2 -> 0x10eb71, 0x10ec34
 ******************************************************************************/
undefined8 FUN_000f1abb(void)

{
  undefined4 in_EDX;
  undefined4 *puVar1;
  undefined8 uVar2;
  
  FUN_0010eb71();
  uVar2 = FUN_0010ec34();
  puVar1 = (undefined4 *)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (int)uVar2;
  }
  return CONCAT44(in_EDX,(int)uVar2);
}

/******************************************************************************
 * Function : sub_0f239b (Ghidra: FUN_000f239b)
 * Prototype: void sub_0f239b(void);
 * Address  : 0xf239b (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf23de
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f239b(void)

{
  uint uVar1;
  
  if ((DAT_003df8dd != 0) && (DAT_003df8e5 != 0)) {
    DAT_003df8db = 0;
    uVar1 = DAT_003df8dd;
    while (uVar1 + 0x20 < DAT_003df8e1) {
      DAT_003df8db = DAT_003df8db + 1;
      *(int *)(uVar1 + 0x32) = *(int *)(uVar1 + 0x32) + DAT_003df8e5;
      uVar1 = uVar1 + 0x20;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f23de (Ghidra: FUN_000f23de)
 * Prototype: int sub_0f23de(void);
 * Address  : 0xf23de (Size: 470 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf2188
 * Callees  : 6 -> 0xe8974, 0xe8a34, 0xe8a80, 0xf239b, 0xf845c, 0xfb774
 ******************************************************************************/
int FUN_000f23de(void)

{
  char *pcVar1;
  int iVar2;
  char *extraout_ECX;
  byte in_DL;
  byte bVar3;
  int aiStack_54 [15];
  byte local_18;
  
  local_18 = in_DL;
  FUN_000e8974();
  FUN_000e8a80();
  pcVar1 = DAT_003df8e5;
  if (((aiStack_54[(uint)local_18 * 4] == -1) || (DAT_003df8e5 == (char *)0x0)) ||
     (DAT_003df8dd == 0)) {
    iVar2 = (uint)(local_18 >> 4) << 8;
  }
  else {
    DAT_003df8e1 = DAT_003df8dd + aiStack_54[(uint)local_18 * 4 + 1];
    FUN_000e8a34();
    FUN_000e8a80();
    if (((*pcVar1 == 'R') && (pcVar1[1] == 'N')) && (pcVar1[2] == 'C')) {
      FUN_000e8a80();
      FUN_000f845c();
    }
    else {
      FUN_000e8a80();
    }
    FUN_000e8a34();
    FUN_000e8a80();
    if (((*extraout_ECX == 'R') && (extraout_ECX[1] == 'N')) && (extraout_ECX[2] == 'C')) {
      FUN_000e8a80();
      FUN_000f845c();
    }
    else {
      FUN_000e8a80();
    }
    FUN_000f239b();
    for (bVar3 = 1; (uint)bVar3 <= (uint)DAT_003df8db; bVar3 = bVar3 + 1) {
      FUN_000fb774(DAT_003df8ed,*(undefined4 *)(DAT_003df8dd + 0x12 + (uint)bVar3 * 0x20),0);
    }
    DAT_00195d98 = 1;
    iVar2 = 1;
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0f25b4 (Ghidra: FUN_000f25b4)
 * Prototype: undefined8 sub_0f25b4(void);
 * Address  : 0xf25b4 (Size: 439 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfe128
 * Callees  : 9 -> 0xe6a10, 0xe7714, 0xe8974, 0xe8980, 0xe8a1c, 0xe8a34, 0xe8a80, 0xe9484, 0xe94b0
 * Strings  :
 *   - 0x16f11f: "%s/MUSIC.DAT"
 ******************************************************************************/
undefined8 FUN_000f25b4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_000e7714(&DAT_003dec60,s__s_MUSIC_DAT_0016f11f,&DAT_003deaac); /* 0x16f11f="%s/MUSIC.DAT" */
  iVar1 = FUN_000e8980();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
    goto LAB_000f2394;
  }
  FUN_000e6a10();
  FUN_000e8a34();
  uVar2 = FUN_000e8974();
  FUN_000e8a34(uVar2);
  FUN_000e8a34();
  FUN_000e8a80();
  iVar4 = 0;
  FUN_000e8a1c();
  iVar1 = 0;
  if (DAT_003df8d2 < 0x57) {
    if (DAT_003df8d2 < 0x47) {
      bVar6 = DAT_003df8d2 == 0x46;
LAB_000f26e1:
      iVar3 = iVar1;
      iVar5 = iVar4;
      if (bVar6) {
        iVar3 = DAT_003dec40;
        iVar5 = DAT_003dec44;
      }
    }
    else {
      iVar3 = DAT_003dec50;
      iVar5 = DAT_003dec54;
      if ((0x47 < DAT_003df8d2) && (iVar3 = iVar1, iVar5 = iVar4, DAT_003df8d2 == 0x52)) {
LAB_000f2600:
        iVar3 = DAT_003dec48;
        iVar5 = DAT_003dec4c;
      }
    }
  }
  else {
    iVar3 = DAT_003dec58;
    iVar5 = DAT_003dec5c;
    if (0x57 < DAT_003df8d2) {
      if (DAT_003df8d2 < 0x67) {
        bVar6 = DAT_003df8d2 == 0x66;
        goto LAB_000f26e1;
      }
      iVar3 = DAT_003dec50;
      iVar5 = DAT_003dec54;
      if ((0x67 < DAT_003df8d2) && (iVar3 = iVar1, iVar5 = iVar4, 0x71 < DAT_003df8d2)) {
        if (DAT_003df8d2 < 0x73) goto LAB_000f2600;
        iVar3 = DAT_003dec58;
        iVar5 = DAT_003dec5c;
        if (DAT_003df8d2 != 0x77) {
          iVar3 = iVar1;
          iVar5 = iVar4;
        }
      }
    }
  }
  if ((iVar3 == 0) || (iVar5 == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    DAT_003df8e5 = FUN_000e9484();
    DAT_003df8dd = FUN_000e9484();
    if ((DAT_003df8e5 == 0) || (DAT_003df8dd == 0)) {
      FUN_000e94b0();
      FUN_000e94b0();
      uVar2 = 0;
    }
    else {
      FUN_000e6a10();
      FUN_000e6a10();
      uVar2 = 1;
    }
  }
LAB_000f2394:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0f27b7 (Ghidra: FUN_000f27b7)
 * Prototype: undefined1 sub_0f27b7(void);
 * Address  : 0xf27b7 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45bb8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_000f27b7(void)

{
  return DAT_003df514;
}

/******************************************************************************
 * Function : sub_0f27d0 (Ghidra: FUN_000f27d0)
 * Prototype: undefined4 sub_0f27d0(void);
 * Address  : 0xf27d0 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x670b2, 0x6e538, 0x6e9ab, 0x6ea5a, 0x6eb1a, 0x6ebff
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f27d0(void)

{
  return DAT_00195d1e;
}

/******************************************************************************
 * Function : sub_0f27dc (Ghidra: FUN_000f27dc)
 * Prototype: undefined4 sub_0f27dc(void);
 * Address  : 0xf27dc (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xefe18, 0xefe94, 0xf0064
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f27dc(void)

{
  return DAT_003df526;
}

/******************************************************************************
 * Function : sub_0f27e8 (Ghidra: FUN_000f27e8)
 * Prototype: undefined4 * sub_0f27e8(void);
 * Address  : 0xf27e8 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6dfd3, 0x6e09b
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 * FUN_000f27e8(void)

{
  return &DAT_003df170;
}

/******************************************************************************
 * Function : sub_0f27ee (Ghidra: FUN_000f27ee)
 * Prototype: undefined4 sub_0f27ee(void);
 * Address  : 0xf27ee (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6dfd3, 0x6e09b
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f27ee(void)

{
  return DAT_003df510;
}

/******************************************************************************
 * Function : sub_0f2800 (Ghidra: FUN_000f2800)
 * Prototype: undefined4 sub_0f2800(void);
 * Address  : 0xf2800 (Size: 2623 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x5482c, 0x548cb, 0x549a4, 0x54a22, 0x54add, 0x54bab, 0x54d8a, 0x54eeb, 0x551e4, 0x5542b ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f2800(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int in_ECX;
  int in_EDX;
  int iVar7;
  byte *pbVar8;
  undefined4 *unaff_EBX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  uint local_b0;
  byte local_a0;
  byte local_9c;
  byte *local_98;
  uint local_94;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  uint local_84;
  byte *local_7c;
  byte *local_78;
  byte *local_74;
  byte local_70;
  byte local_6c;
  byte local_68;
  byte local_64;
  byte local_60;
  byte local_54;
  byte local_4c;
  byte local_3c;
  byte local_1c;
  byte local_18;
  byte local_14;
  
  if ((*(char *)(unaff_EBX + 1) == '\0') || (*(char *)((int)unaff_EBX + 5) == '\0')) {
    return 1;
  }
  if ((DAT_003d9844 == 0) || (DAT_003d9848 == 0)) {
    return 1;
  }
  iVar10 = in_EAX + DAT_003d983c;
  iVar7 = in_EDX + DAT_003d9840;
  iVar2 = DAT_003d983c - iVar10;
  bVar4 = *(byte *)(unaff_EBX + 1);
  if (iVar2 < 1) {
    local_70 = 0;
  }
  else {
    if ((int)(uint)bVar4 <= iVar2) {
      return 1;
    }
    local_70 = (byte)iVar2;
  }
  iVar2 = (iVar10 + (uint)bVar4) - (DAT_003d983c + DAT_003d9844);
  if (0 < iVar2) {
    if ((int)(uint)bVar4 <= iVar2) {
      return 1;
    }
    bVar4 = bVar4 - (char)iVar2;
  }
  iVar2 = DAT_003d9840 - iVar7;
  bVar1 = *(byte *)((int)unaff_EBX + 5);
  if (iVar2 < 1) {
    local_94 = (uint)bVar1;
  }
  else {
    if ((int)(uint)bVar1 <= iVar2) {
      return 1;
    }
    local_94 = (uint)CONCAT11((char)iVar2,bVar1);
  }
  iVar2 = (iVar7 + (local_94 & 0xff)) - (DAT_003d9840 + DAT_003d9848);
  cVar6 = (char)local_94;
  uVar9 = local_94;
  if (0 < iVar2) {
    if ((int)(local_94 & 0xff) <= iVar2) {
      return 1;
    }
    uVar9 = (uint)(byte)(cVar6 - (char)iVar2);
  }
  uVar11 = uVar9 & 0xff;
  bVar1 = (byte)(local_94 >> 8);
  if (((byte)DAT_003d9874 & 2) == 0) {
    pbVar8 = (byte *)((uint)local_70 + iVar10 + (iVar7 + (uint)bVar1) * DAT_003d9834 + DAT_003d9818)
    ;
    iVar2 = DAT_003d9834;
  }
  else {
    iVar7 = iVar7 + uVar11;
    uVar11 = (uint)(byte)(cVar6 - bVar1);
    pbVar8 = (byte *)((uint)local_70 + iVar10 + (iVar7 + -1) * DAT_003d9834 + DAT_003d9818);
    local_94 = (uint)(byte)(cVar6 - (char)uVar9) << 8;
    iVar2 = -DAT_003d9834;
  }
  cVar6 = (char)(local_94 >> 8);
  bVar1 = (char)uVar11 - cVar6;
  local_94 = local_94 >> 8;
  bVar5 = bVar4 - local_70;
  pbVar3 = (byte *)*unaff_EBX;
  if (cVar6 != '\0') {
    do {
      for (; iVar7 = (int)(char)*pbVar3, 0 < iVar7; pbVar3 = pbVar3 + iVar7 + 1) {
      }
      pbVar3 = pbVar3 + 1;
    } while ((iVar7 != 0) || (local_94 = local_94 - 1, local_94 != 0));
  }
  if (((byte)DAT_003d9874 & 0xd) == 0) {
    local_88 = pbVar8 + iVar2;
    local_84 = (uint)bVar1;
    uVar9 = (uint)bVar5;
    if (local_70 != 0) goto LAB_000f3129;
LAB_000f3076:
    do {
      if (0 < (int)uVar9) {
        uVar11 = (uint)(char)*pbVar3;
        if ((int)uVar11 < 1) {
          if (-1 < (int)uVar11) {
            if (local_84 == 1) {
              return 1;
            }
            pbVar3 = pbVar3 + 1;
            goto LAB_000f311e;
          }
          pbVar3 = pbVar3 + 1;
          uVar9 = uVar9 + uVar11;
          pbVar8 = pbVar8 + -uVar11;
        }
        else {
          if ((int)uVar9 <= (int)uVar11) {
            uVar11 = uVar9;
          }
          pbVar12 = pbVar3;
          local_90 = pbVar8;
          while (pbVar12 = pbVar12 + 1, local_90 < pbVar8 + uVar11) {
            *local_90 = *(byte *)((uint)*pbVar12 + in_ECX);
            local_90 = local_90 + 1;
          }
          iVar7 = (int)(char)*pbVar3;
          uVar9 = uVar9 - iVar7;
          pbVar8 = pbVar8 + iVar7;
          pbVar3 = pbVar3 + iVar7 + 1;
        }
        goto LAB_000f3076;
      }
      if (local_84 == 1) {
        return 1;
      }
      do {
        for (; iVar7 = (int)(char)*pbVar3, 0 < iVar7; pbVar3 = pbVar3 + iVar7 + 1) {
        }
        pbVar3 = pbVar3 + 1;
      } while (iVar7 != 0);
LAB_000f311e:
      local_84 = local_84 - 1;
      pbVar8 = local_88;
      local_88 = local_88 + iVar2;
LAB_000f3129:
      uVar9 = (uint)bVar5;
    } while (local_70 == 0);
    local_64 = local_70;
LAB_000f3139:
    iVar7 = (int)(char)*pbVar3;
    if (iVar7 < 1) {
      if (iVar7 == 0) {
        uVar9 = 0;
        goto LAB_000f3076;
      }
      if (iVar7 < (int)-(uint)local_64) {
        local_3c = -local_64 - *pbVar3;
        if (bVar5 < (byte)(-local_64 - *pbVar3)) {
          local_3c = bVar5;
        }
        pbVar3 = pbVar3 + 1;
        pbVar8 = pbVar8 + local_3c;
        uVar9 = uVar9 - local_3c;
        goto LAB_000f3076;
      }
      bVar4 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    }
    else {
      if ((int)(uint)local_64 < iVar7) {
        local_18 = *pbVar3 - local_64;
        if (bVar5 < (byte)(*pbVar3 - local_64)) {
          local_18 = bVar5;
        }
        local_98 = pbVar3 + local_64 + 1;
        local_8c = pbVar8;
        while (local_8c < pbVar8 + local_18) {
          bVar4 = *local_98;
          local_98 = local_98 + 1;
          *local_8c = *(byte *)((uint)bVar4 + in_ECX);
          local_8c = local_8c + 1;
        }
        pbVar8 = pbVar8 + local_18;
        uVar9 = uVar9 - local_18;
        pbVar3 = pbVar3 + (char)*pbVar3 + 1;
        goto LAB_000f3076;
      }
      bVar4 = -*pbVar3;
      pbVar3 = pbVar3 + iVar7 + 1;
    }
    local_64 = local_64 + bVar4;
    if (local_64 == 0) goto LAB_000f3076;
    goto LAB_000f3139;
  }
  bVar13 = ((byte)DAT_003d9874 & 1) != 0;
  if (bVar13) {
    local_70 = *(char *)(unaff_EBX + 1) - bVar4;
    pbVar8 = pbVar8 + (bVar5 - 1);
  }
  local_74 = pbVar8 + iVar2;
  local_b0 = (uint)bVar1;
  uVar9 = (uint)bVar5;
  if (((byte)DAT_003d9874 & 0xc) == 0) {
    if (local_70 != 0) goto LAB_000f2f66;
LAB_000f2eb1:
    do {
      if (0 < (int)uVar9) {
        local_9c = *pbVar3;
        iVar7 = (int)(char)local_9c;
        if (iVar7 < 1) {
          if (-1 < iVar7) {
            if (local_b0 == 1) {
              return 1;
            }
            pbVar3 = pbVar3 + 1;
            goto LAB_000f2f5b;
          }
          pbVar3 = pbVar3 + 1;
          uVar9 = uVar9 + iVar7;
          pbVar8 = pbVar8 + iVar7;
        }
        else {
          if ((int)uVar9 <= iVar7) {
            local_9c = (byte)uVar9;
          }
          pbVar12 = pbVar3;
          for (bVar4 = 0; pbVar12 = pbVar12 + 1, bVar4 < local_9c; bVar4 = bVar4 + 1) {
            *pbVar8 = *(byte *)((uint)*pbVar12 + in_ECX);
            pbVar8 = pbVar8 + -1;
          }
          uVar9 = uVar9 - (int)(char)*pbVar3;
          pbVar3 = pbVar3 + (char)*pbVar3 + 1;
        }
        goto LAB_000f2eb1;
      }
      if (local_b0 == 1) {
        return 1;
      }
      do {
        for (; iVar7 = (int)(char)*pbVar3, 0 < iVar7; pbVar3 = pbVar3 + iVar7 + 1) {
        }
        pbVar3 = pbVar3 + 1;
      } while (iVar7 != 0);
LAB_000f2f5b:
      local_b0 = local_b0 - 1;
      pbVar8 = local_74;
      local_74 = local_74 + iVar2;
LAB_000f2f66:
      uVar9 = (uint)bVar5;
    } while (local_70 == 0);
    local_6c = local_70;
LAB_000f2f76:
    iVar7 = (int)(char)*pbVar3;
    if (iVar7 < 1) {
      if (iVar7 == 0) {
        uVar9 = 0;
        goto LAB_000f2eb1;
      }
      if (iVar7 < (int)-(uint)local_6c) {
        local_60 = -local_6c - *pbVar3;
        if (bVar5 < (byte)(-local_6c - *pbVar3)) {
          local_60 = bVar5;
        }
        pbVar3 = pbVar3 + 1;
        pbVar8 = pbVar8 + -(uint)local_60;
        uVar9 = uVar9 - local_60;
        goto LAB_000f2eb1;
      }
      bVar4 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    }
    else {
      if ((int)(uint)local_6c < iVar7) {
        local_1c = *pbVar3 - local_6c;
        if (bVar5 < (byte)(*pbVar3 - local_6c)) {
          local_1c = bVar5;
        }
        pbVar12 = pbVar3 + local_6c + 1;
        for (local_4c = 0; local_4c < local_1c; local_4c = local_4c + 1) {
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          *pbVar8 = *(byte *)((uint)bVar4 + in_ECX);
          pbVar8 = pbVar8 + -1;
        }
        pbVar3 = pbVar3 + (char)*pbVar3 + 1;
        uVar9 = uVar9 - local_1c;
        goto LAB_000f2eb1;
      }
      bVar4 = -*pbVar3;
      pbVar3 = pbVar3 + iVar7 + 1;
    }
    local_6c = local_6c + bVar4;
    if (local_6c == 0) goto LAB_000f2eb1;
    goto LAB_000f2f76;
  }
  if (local_70 != 0) goto LAB_000f2c60;
LAB_000f2a37:
  do {
    if ((int)uVar9 < 1) {
      if (local_b0 == 1) {
        return 1;
      }
      do {
        for (; iVar7 = (int)(char)*pbVar3, 0 < iVar7; pbVar3 = pbVar3 + iVar7 + 1) {
        }
        pbVar3 = pbVar3 + 1;
      } while (iVar7 != 0);
LAB_000f2c55:
      local_b0 = local_b0 - 1;
      uVar9 = (uint)bVar5;
      pbVar8 = local_74;
      local_74 = local_74 + iVar2;
LAB_000f2c60:
      if (local_70 != 0) {
        local_54 = local_70;
LAB_000f2c70:
        iVar7 = (int)(char)*pbVar3;
        if (iVar7 < 1) {
          if (iVar7 == 0) {
            uVar9 = 0;
            goto LAB_000f2a37;
          }
          if (iVar7 < (int)-(uint)local_54) {
            local_14 = -local_54 - *pbVar3;
            if (bVar5 < (byte)(-local_54 - *pbVar3)) {
              local_14 = bVar5;
            }
            pbVar3 = pbVar3 + 1;
            if (bVar13) {
              uVar11 = -(uint)local_14;
            }
            else {
              uVar11 = (uint)local_14;
            }
            pbVar8 = pbVar8 + uVar11;
            uVar9 = uVar9 - local_14;
            goto LAB_000f2a37;
          }
          bVar4 = *pbVar3;
          pbVar3 = pbVar3 + 1;
        }
        else {
          if ((int)(uint)local_54 < iVar7) {
            local_78 = pbVar3 + local_54 + 1;
            local_68 = *pbVar3 - local_54;
            if (bVar5 < (byte)(*pbVar3 - local_54)) {
              local_68 = bVar5;
            }
            if (bVar13) {
              if (((byte)DAT_003d9874 & 4) == 0) {
                uVar11 = (uint)bVar5;
                while( true ) {
                  bVar4 = (byte)(uVar11 >> 8);
                  bVar5 = (byte)uVar11;
                  if (local_68 <= bVar4) break;
                  *pbVar8 = *(byte *)((uint)*(byte *)((uint)*local_78 + in_ECX) +
                                     DAT_003d981c + (uint)*pbVar8 * 0x100);
                  local_78 = local_78 + 1;
                  uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
                  pbVar8 = pbVar8 + -1;
                }
                pbVar3 = pbVar3 + (char)*pbVar3 + 1;
                uVar9 = uVar9 - local_68;
                goto LAB_000f2a37;
              }
              uVar11 = (uint)bVar5;
              while( true ) {
                bVar4 = (byte)(uVar11 >> 8);
                bVar5 = (byte)uVar11;
                if (local_68 <= bVar4) break;
                *pbVar8 = *(byte *)((uint)*pbVar8 +
                                   (uint)*(byte *)((uint)*local_78 + in_ECX) * 0x100 + DAT_003d981c)
                ;
                local_78 = local_78 + 1;
                uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
                pbVar8 = pbVar8 + -1;
              }
            }
            else {
              if (((byte)DAT_003d9874 & 4) != 0) {
                uVar11 = (uint)bVar5;
                while( true ) {
                  bVar4 = (byte)(uVar11 >> 8);
                  bVar5 = (byte)uVar11;
                  if (local_68 <= bVar4) break;
                  *pbVar8 = *(byte *)((uint)*pbVar8 +
                                     DAT_003d981c +
                                     (uint)*(byte *)((uint)*local_78 + in_ECX) * 0x100);
                  local_78 = local_78 + 1;
                  uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
                  pbVar8 = pbVar8 + 1;
                }
                pbVar3 = pbVar3 + (char)*pbVar3 + 1;
                uVar9 = uVar9 - local_68;
                goto LAB_000f2a37;
              }
              uVar11 = (uint)bVar5;
              while( true ) {
                bVar4 = (byte)(uVar11 >> 8);
                bVar5 = (byte)uVar11;
                if (local_68 <= bVar4) break;
                *pbVar8 = *(byte *)((uint)*(byte *)((uint)*local_78 + in_ECX) +
                                   DAT_003d981c + (uint)*pbVar8 * 0x100);
                local_78 = local_78 + 1;
                uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
                pbVar8 = pbVar8 + 1;
              }
            }
            pbVar3 = pbVar3 + (char)*pbVar3 + 1;
            uVar9 = uVar9 - local_68;
            goto LAB_000f2a37;
          }
          bVar4 = -*pbVar3;
          pbVar3 = pbVar3 + iVar7 + 1;
        }
        local_54 = local_54 + bVar4;
        if (local_54 == 0) goto LAB_000f2a37;
        goto LAB_000f2c70;
      }
      goto LAB_000f2a37;
    }
    local_a0 = *pbVar3;
    iVar7 = (int)(char)local_a0;
    if (iVar7 < 1) {
      if (-1 < iVar7) {
        if (local_b0 == 1) {
          return 1;
        }
        pbVar3 = pbVar3 + 1;
        goto LAB_000f2c55;
      }
      uVar9 = uVar9 + iVar7;
      if (!bVar13) {
        iVar7 = -iVar7;
      }
      pbVar8 = pbVar8 + iVar7;
      pbVar3 = pbVar3 + 1;
    }
    else {
      if ((int)uVar9 <= iVar7) {
        local_a0 = (byte)uVar9;
      }
      local_7c = pbVar3 + 1;
      uVar11 = (uint)CONCAT11(bVar13,bVar5);
      if (bVar13) {
        if (((byte)DAT_003d9874 & 4) == 0) {
          uVar11 = uVar11 & 0xff;
          while( true ) {
            bVar4 = (byte)(uVar11 >> 8);
            bVar5 = (byte)uVar11;
            if (local_a0 <= bVar4) break;
            *pbVar8 = *(byte *)(DAT_003d981c + (uint)*pbVar8 * 0x100 +
                               (uint)*(byte *)((uint)*local_7c + in_ECX));
            local_7c = local_7c + 1;
            uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
            pbVar8 = pbVar8 + -1;
          }
          uVar9 = uVar9 - (int)(char)*pbVar3;
          pbVar3 = pbVar3 + (char)*pbVar3 + 1;
        }
        else {
          uVar11 = uVar11 & 0xff;
          while( true ) {
            bVar4 = (byte)(uVar11 >> 8);
            bVar5 = (byte)uVar11;
            if (local_a0 <= bVar4) break;
            *pbVar8 = *(byte *)((uint)*pbVar8 +
                               (uint)*(byte *)((uint)*local_7c + in_ECX) * 0x100 + DAT_003d981c);
            local_7c = local_7c + 1;
            uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
            pbVar8 = pbVar8 + -1;
          }
LAB_000f2be0:
          uVar9 = uVar9 - (int)(char)*pbVar3;
          pbVar3 = pbVar3 + (char)*pbVar3 + 1;
        }
      }
      else {
        if (((byte)DAT_003d9874 & 4) == 0) {
          uVar11 = uVar11 & 0xff;
          while( true ) {
            bVar4 = (byte)(uVar11 >> 8);
            bVar5 = (byte)uVar11;
            if (local_a0 <= bVar4) break;
            *pbVar8 = *(byte *)((uint)*(byte *)((uint)*local_7c + in_ECX) +
                               DAT_003d981c + (uint)*pbVar8 * 0x100);
            local_7c = local_7c + 1;
            uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
            pbVar8 = pbVar8 + 1;
          }
          goto LAB_000f2be0;
        }
        uVar11 = uVar11 & 0xff;
        while( true ) {
          bVar4 = (byte)(uVar11 >> 8);
          bVar5 = (byte)uVar11;
          if (local_a0 <= bVar4) break;
          *pbVar8 = *(byte *)((uint)*pbVar8 +
                             DAT_003d981c + (uint)*(byte *)((uint)*local_7c + in_ECX) * 0x100);
          local_7c = local_7c + 1;
          uVar11 = (uint)CONCAT11(bVar4 + 1,bVar5);
          pbVar8 = pbVar8 + 1;
        }
        uVar9 = uVar9 - (int)(char)*pbVar3;
        pbVar3 = pbVar3 + (char)*pbVar3 + 1;
      }
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0f323f (Ghidra: FUN_000f323f)
 * Prototype: void sub_0f323f(void);
 * Address  : 0xf323f (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x58b37, 0x5b1bc, 0xf8c47, 0xf8ccf
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f323f(void)

{
  char *in_EAX;
  char *in_EDX;
  int unaff_EBX;
  
  for (; (unaff_EBX != 0 && (*in_EDX != '\0')); in_EDX = in_EDX + 1) {
    unaff_EBX = unaff_EBX + -1;
    *in_EAX = *in_EDX;
    in_EAX = in_EAX + 1;
  }
  for (; unaff_EBX != 0; unaff_EBX = unaff_EBX + -1) {
    *in_EAX = '\0';
    in_EAX = in_EAX + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f3264 (Ghidra: FUN_000f3264)
 * Prototype: void sub_0f3264(void);
 * Address  : 0xf3264 (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x5a3ce, 0x620e6, 0x6a412, 0xfe128
 * Callees  : 1 -> 0xfbc06
 ******************************************************************************/
void FUN_000f3264(void)

{
  int in_EAX;
  
  if ((((DAT_00195d98 != '\0') && (DAT_003df8d1 != '\0')) && (in_EAX != DAT_00195d94)) &&
     (((in_EAX < 0x80 && (-1 < in_EAX)) && (DAT_003debcc == 0)))) {
    FUN_000fbc06(DAT_003df8e9);
    DAT_00195d94 = in_EAX;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f32ae (Ghidra: FUN_000f32ae)
 * Prototype: void sub_0f32ae(void);
 * Address  : 0xf32ae (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x5a3ce, 0x620e6, 0x6a412
 * Callees  : 1 -> 0xfae65
 ******************************************************************************/
void FUN_000f32ae(void)

{
  int in_EAX;
  
  if ((((DAT_00195d18 != '\0') && (DAT_003df514 != '\0')) && (in_EAX != DAT_00195d1e)) &&
     (((in_EAX < 0x80 && (-1 < in_EAX)) && (DAT_003debd0 == 0)))) {
    FUN_000fae65(DAT_003df526);
    DAT_00195d1e = in_EAX;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f3300 (Ghidra: FUN_000f3300)
 * Prototype: undefined4 sub_0f3300(void);
 * Address  : 0xf3300 (Size: 2114 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x5cabb, 0x8bde8, 0xa5240, 0xe74d4
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
undefined4 FUN_000f3300(void)

{
  int in_EAX;
  byte in_CL;
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  byte bVar5;
  int in_EDX;
  int iVar6;
  byte bVar7;
  char cVar8;
  undefined4 *unaff_EBX;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  uint local_30;
  int local_2c;
  uint local_28;
  byte local_24;
  byte local_1c;
  
  if ((*(char *)(unaff_EBX + 1) == '\0') || (*(char *)((int)unaff_EBX + 5) == '\0')) {
    return 1;
  }
  if ((DAT_003d9844 == 0) || (DAT_003d9848 == 0)) {
    return 1;
  }
  iVar13 = in_EAX + DAT_003d983c;
  bVar7 = *(byte *)(unaff_EBX + 1);
  uVar2 = DAT_003d983c - iVar13;
  iVar6 = in_EDX + DAT_003d9840;
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  else if ((int)(uint)bVar7 <= (int)uVar2) {
    return 1;
  }
  local_24 = (byte)uVar2;
  iVar3 = (iVar13 + (uint)bVar7) - (DAT_003d983c + DAT_003d9844);
  if (0 < iVar3) {
    if ((int)(uint)bVar7 <= iVar3) {
      return 1;
    }
    bVar7 = bVar7 - (char)iVar3;
  }
  iVar3 = DAT_003d9840 - iVar6;
  bVar1 = *(byte *)((int)unaff_EBX + 5);
  if (iVar3 < 1) {
    uVar14 = (uint)bVar1 << 8;
  }
  else {
    if ((int)(uint)bVar1 <= iVar3) {
      return 1;
    }
    uVar14 = (uint)CONCAT11(bVar1,(char)iVar3);
  }
  iVar3 = (iVar6 + (uVar14 >> 8)) - (DAT_003d9840 + DAT_003d9848);
  bVar5 = (byte)(uVar14 >> 8);
  bVar1 = bVar5;
  if (0 < iVar3) {
    if ((int)(uVar14 >> 8) <= iVar3) {
      return 1;
    }
    bVar1 = bVar5 - (char)iVar3;
  }
  cVar8 = (char)uVar14;
  if (((byte)DAT_003d9874 & 2) == 0) {
    local_2c = DAT_003d9834;
    pbVar12 = (byte *)((uVar2 & 0xff) +
                      iVar13 + (iVar6 + (uVar14 & 0xff)) * DAT_003d9834 + DAT_003d9818);
  }
  else {
    pbVar12 = (byte *)((uVar2 & 0xff) +
                      (iVar6 + (uint)bVar1 + -1) * DAT_003d9834 + DAT_003d9818 + iVar13);
    local_2c = -DAT_003d9834;
    uVar14 = (uint)(byte)(bVar5 - bVar1);
    bVar1 = bVar5 - cVar8;
  }
  bVar1 = bVar1 - (char)uVar14;
  bVar5 = bVar7 - local_24;
  pcVar4 = (char *)*unaff_EBX;
  if ((char)uVar14 != '\0') {
    uVar14 = uVar14 & 0xff;
    do {
      for (; iVar6 = (int)*pcVar4, 0 < iVar6; pcVar4 = pcVar4 + iVar6 + 1) {
      }
      pcVar4 = pcVar4 + 1;
    } while ((iVar6 != 0) || (uVar14 = uVar14 - 1, uVar14 != 0));
  }
  if (((byte)DAT_003d9874 & 0xd) == 0) {
    uVar2 = (uint)bVar5;
    local_30 = (uint)bVar1;
    if (local_24 != 0) goto LAB_000f3a93;
LAB_000f3a08:
    do {
      if (0 < (int)uVar2) {
        iVar6 = (int)*pcVar4;
        if (iVar6 < 1) {
          if (-1 < iVar6) {
            local_30 = local_30 - 1;
            if (local_30 == 0) {
              return 1;
            }
            pcVar4 = pcVar4 + 1;
            goto LAB_000f3a93;
          }
          pcVar4 = pcVar4 + 1;
          uVar2 = uVar2 + iVar6;
        }
        else {
          FUN_000e6a10();
          uVar2 = uVar2 - (int)*extraout_ECX_01;
          pcVar4 = extraout_ECX_01 + *extraout_ECX_01 + 1;
        }
        goto LAB_000f3a08;
      }
      local_30 = local_30 - 1;
      if (local_30 == 0) {
        return 1;
      }
      do {
        for (; iVar6 = (int)*pcVar4, 0 < iVar6; pcVar4 = pcVar4 + iVar6 + 1) {
        }
        pcVar4 = pcVar4 + 1;
      } while (iVar6 != 0);
LAB_000f3a93:
      uVar2 = (uint)bVar5;
      for (bVar7 = local_24; bVar7 != 0; bVar7 = bVar7 + cVar8) {
        iVar6 = (int)*pcVar4;
        if (iVar6 < 1) {
          if (iVar6 == 0) {
            uVar2 = 0;
            break;
          }
          if (iVar6 < (int)-(uint)bVar7) {
            bVar7 = -bVar7 - *pcVar4;
            uVar14 = (uint)CONCAT11(bVar7,bVar7);
            if (bVar5 < bVar7) {
              uVar14 = (uint)bVar5;
            }
            pcVar4 = pcVar4 + 1;
            uVar2 = uVar2 - (uVar14 & 0xff);
            break;
          }
          cVar8 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        }
        else {
          if ((int)(uint)bVar7 < iVar6) {
            local_1c = *pcVar4 - bVar7;
            if (bVar5 < (byte)(*pcVar4 - bVar7)) {
              local_1c = bVar5;
            }
            FUN_000e6a10();
            pcVar4 = extraout_ECX_02 + *extraout_ECX_02 + 1;
            uVar2 = uVar2 - local_1c;
            break;
          }
          cVar8 = -*pcVar4;
          pcVar4 = pcVar4 + iVar6 + 1;
        }
      }
    } while( true );
  }
  bVar15 = ((byte)DAT_003d9874 & 1) == 0;
  if (!bVar15) {
    local_24 = *(char *)(unaff_EBX + 1) - bVar7;
    pbVar12 = pbVar12 + (bVar5 - 1);
  }
  uVar2 = (uint)bVar5;
  local_28 = (uint)bVar1;
  pbVar10 = pbVar12 + local_2c;
  if (((byte)DAT_003d9874 & 0xc) == 0) {
    if (local_24 != 0) goto LAB_000f393d;
LAB_000f38aa:
    do {
      if (0 < (int)uVar2) {
        iVar6 = (int)*pcVar4;
        if (iVar6 < 1) {
          if (-1 < iVar6) {
            local_28 = local_28 - 1;
            if (local_28 == 0) {
              return 1;
            }
            pcVar4 = pcVar4 + 1;
            goto LAB_000f393d;
          }
          pcVar4 = pcVar4 + 1;
          uVar2 = uVar2 + iVar6;
        }
        else {
          FUN_000e6a10();
          uVar2 = uVar2 - (int)*extraout_ECX;
          pcVar4 = extraout_ECX + *extraout_ECX + 1;
        }
        goto LAB_000f38aa;
      }
      local_28 = local_28 - 1;
      if (local_28 == 0) {
        return 1;
      }
      do {
        for (; iVar6 = (int)*pcVar4, 0 < iVar6; pcVar4 = pcVar4 + iVar6 + 1) {
        }
        pcVar4 = pcVar4 + 1;
      } while (iVar6 != 0);
LAB_000f393d:
      uVar2 = (uint)bVar5;
      for (bVar7 = local_24; bVar7 != 0; bVar7 = bVar7 + cVar8) {
        iVar6 = (int)*pcVar4;
        if (iVar6 < 1) {
          if (iVar6 == 0) {
            uVar2 = 0;
            break;
          }
          if (iVar6 < (int)-(uint)bVar7) {
            bVar7 = -bVar7 - *pcVar4;
            uVar14 = (uint)CONCAT11(bVar7,bVar7);
            if (bVar5 < bVar7) {
              uVar14 = (uint)bVar5;
            }
            pcVar4 = pcVar4 + 1;
            uVar2 = uVar2 - (uVar14 & 0xff);
            break;
          }
          cVar8 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        }
        else {
          if ((int)(uint)bVar7 < iVar6) {
            bVar7 = *pcVar4 - bVar7;
            uVar14 = (uint)CONCAT11(bVar7,bVar7);
            if (bVar5 < bVar7) {
              uVar14 = (uint)bVar5;
            }
            FUN_000e6a10();
            uVar2 = uVar2 - (uVar14 & 0xff);
            pcVar4 = extraout_ECX_00 + *extraout_ECX_00 + 1;
            break;
          }
          cVar8 = -*pcVar4;
          pcVar4 = pcVar4 + iVar6 + 1;
        }
      }
    } while( true );
  }
  pbVar11 = pbVar10;
  if (local_24 != 0) goto LAB_000f36b3;
LAB_000f350c:
  do {
    if ((int)uVar2 < 1) {
      local_28 = local_28 - 1;
      if (local_28 == 0) {
        return 1;
      }
      do {
        for (; iVar6 = (int)*pcVar4, 0 < iVar6; pcVar4 = pcVar4 + iVar6 + 1) {
        }
        pcVar4 = pcVar4 + 1;
      } while (iVar6 != 0);
      pbVar10 = pbVar11 + local_2c;
      pbVar12 = pbVar11;
LAB_000f36b3:
      uVar2 = (uint)bVar5;
      pbVar11 = pbVar10;
      bVar7 = local_24;
      if (local_24 != 0) {
LAB_000f36c1:
        iVar6 = (int)*pcVar4;
        if (iVar6 < 1) {
          if (iVar6 == 0) {
            uVar2 = 0;
            goto LAB_000f350c;
          }
          if (iVar6 < (int)-(uint)bVar7) {
            bVar7 = -bVar7 - *pcVar4;
            uVar14 = (uint)CONCAT11(bVar7,bVar7);
            if (bVar5 < bVar7) {
              uVar14 = (uint)bVar5;
            }
            pcVar4 = pcVar4 + 1;
            if (bVar15) {
              uVar9 = uVar14 & 0xff;
            }
            else {
              uVar9 = -(uVar14 & 0xff);
            }
            pbVar12 = pbVar12 + uVar9;
            uVar2 = uVar2 - (uVar14 & 0xff);
            goto LAB_000f350c;
          }
          cVar8 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        }
        else {
          if ((int)(uint)bVar7 < iVar6) {
            bVar1 = *pcVar4 - bVar7;
            if (bVar5 < (byte)(*pcVar4 - bVar7)) {
              bVar1 = bVar5;
            }
            uVar14 = (uint)CONCAT11(bVar5,bVar1);
            if (bVar15) {
              if (((byte)DAT_003d9874 & 4) != 0) {
                uVar14 = uVar14 & 0xff;
                while( true ) {
                  bVar7 = (byte)(uVar14 >> 8);
                  if ((byte)uVar14 <= bVar7) break;
                  uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
                  *pbVar12 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar12);
                  pbVar12 = pbVar12 + 1;
                }
                pcVar4 = pcVar4 + *pcVar4 + 1;
                uVar2 = uVar2 - (uVar14 & 0xff);
                goto LAB_000f350c;
              }
              uVar14 = uVar14 & 0xff;
              while( true ) {
                bVar7 = (byte)(uVar14 >> 8);
                if ((byte)uVar14 <= bVar7) break;
                uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
                *pbVar12 = *(byte *)(DAT_003d981c + (uint)*pbVar12 * 0x100 + (uint)in_CL);
                pbVar12 = pbVar12 + 1;
              }
            }
            else {
              if (((byte)DAT_003d9874 & 4) == 0) {
                uVar14 = uVar14 & 0xff;
                while( true ) {
                  bVar7 = (byte)(uVar14 >> 8);
                  if ((byte)uVar14 <= bVar7) break;
                  uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
                  *pbVar12 = *(byte *)(DAT_003d981c + (uint)*pbVar12 * 0x100 + (uint)in_CL);
                  pbVar12 = pbVar12 + -1;
                }
                pcVar4 = pcVar4 + *pcVar4 + 1;
                uVar2 = uVar2 - (uVar14 & 0xff);
                goto LAB_000f350c;
              }
              uVar14 = uVar14 & 0xff;
              while( true ) {
                bVar7 = (byte)(uVar14 >> 8);
                if ((byte)uVar14 <= bVar7) break;
                uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
                *pbVar12 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar12);
                pbVar12 = pbVar12 + -1;
              }
            }
            pcVar4 = pcVar4 + *pcVar4 + 1;
            uVar2 = uVar2 - (uVar14 & 0xff);
            goto LAB_000f350c;
          }
          cVar8 = -*pcVar4;
          pcVar4 = pcVar4 + iVar6 + 1;
        }
        bVar7 = bVar7 + cVar8;
        if (bVar7 == 0) goto LAB_000f350c;
        goto LAB_000f36c1;
      }
      goto LAB_000f350c;
    }
    uVar14 = (uint)*pcVar4;
    if ((int)uVar14 < 1) {
      if (-1 < (int)uVar14) {
        local_28 = local_28 - 1;
        if (local_28 == 0) {
          return 1;
        }
        pcVar4 = pcVar4 + 1;
        pbVar10 = pbVar11 + local_2c;
        pbVar12 = pbVar11;
        goto LAB_000f36b3;
      }
      uVar2 = uVar2 + uVar14;
      if (bVar15) {
        uVar14 = -uVar14;
      }
      pbVar12 = pbVar12 + uVar14;
      pcVar4 = pcVar4 + 1;
    }
    else {
      if ((int)uVar2 <= (int)uVar14) {
        uVar14 = uVar2;
      }
      if (bVar15) {
        if (((byte)DAT_003d9874 & 4) == 0) {
          uVar14 = uVar14 & 0xff;
          while( true ) {
            bVar7 = (byte)(uVar14 >> 8);
            if ((byte)uVar14 <= bVar7) break;
            uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
            *pbVar12 = *(byte *)(DAT_003d981c + (uint)*pbVar12 * 0x100 + (uint)in_CL);
            pbVar12 = pbVar12 + 1;
          }
          goto LAB_000f363a;
        }
        uVar14 = uVar14 & 0xff;
        while( true ) {
          bVar7 = (byte)(uVar14 >> 8);
          if ((byte)uVar14 <= bVar7) break;
          uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
          *pbVar12 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar12);
          pbVar12 = pbVar12 + 1;
        }
        uVar2 = uVar2 - (int)*pcVar4;
        pcVar4 = pcVar4 + *pcVar4 + 1;
      }
      else if (((byte)DAT_003d9874 & 4) == 0) {
        uVar14 = uVar14 & 0xff;
        while( true ) {
          bVar7 = (byte)(uVar14 >> 8);
          if ((byte)uVar14 <= bVar7) break;
          uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
          *pbVar12 = *(byte *)(DAT_003d981c + (uint)*pbVar12 * 0x100 + (uint)in_CL);
          pbVar12 = pbVar12 + -1;
        }
        uVar2 = uVar2 - (int)*pcVar4;
        pcVar4 = pcVar4 + *pcVar4 + 1;
      }
      else {
        uVar14 = uVar14 & 0xff;
        while( true ) {
          bVar7 = (byte)(uVar14 >> 8);
          if ((byte)uVar14 <= bVar7) break;
          uVar14 = (uint)CONCAT11(bVar7 + 1,(byte)uVar14);
          *pbVar12 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar12);
          pbVar12 = pbVar12 + -1;
        }
LAB_000f363a:
        uVar2 = uVar2 - (int)*pcVar4;
        pcVar4 = pcVar4 + *pcVar4 + 1;
      }
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0f43c7 (Ghidra: FUN_000f43c7)
 * Prototype: void sub_0f43c7(void);
 * Address  : 0xf43c7 (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x5f4d9, 0xe9d2c, 0xf7766
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f43c7(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0f43d5 (Ghidra: FUN_000f43d5)
 * Prototype: undefined8 sub_0f43d5(void);
 * Address  : 0xf43d5 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x61883, 0xea94f, 0xf69c6
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f43d5(void)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 in_EDX;
  undefined4 *extraout_EDX;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0xffffffff;
  iVar3 = 0;
  for (puVar2 = DAT_003df16c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (((*(uint *)(puVar2[1] + 0xc) & uVar1) != 0) &&
       (iVar3 = iVar3 + 1, (*(byte *)(puVar2[1] + 0xd) & 0x10) != 0)) {
      FUN_000f8aa6();
      uVar1 = extraout_ECX;
      puVar2 = extraout_EDX;
    }
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0f43da (Ghidra: FUN_000f43da)
 * Prototype: undefined8 sub_0f43da(void);
 * Address  : 0xf43da (Size: 47 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x127761
 * Callees  : 1 -> 0xf8aa6
 ******************************************************************************/
undefined8 FUN_000f43da(void)

{
  uint in_EAX;
  uint extraout_ECX;
  undefined4 in_EDX;
  undefined4 *extraout_EDX;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = DAT_003df16c; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    if (((*(uint *)(puVar1[1] + 0xc) & in_EAX) != 0) &&
       (iVar2 = iVar2 + 1, (*(byte *)(puVar1[1] + 0xd) & 0x10) != 0)) {
      FUN_000f8aa6();
      in_EAX = extraout_ECX;
      puVar1 = extraout_EDX;
    }
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0f4409 (Ghidra: FUN_000f4409)
 * Prototype: void sub_0f4409(void);
 * Address  : 0xf4409 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x633c4, 0x63412, 0xf9610
 * Callees  : 1 -> 0xf8a21
 ******************************************************************************/
void FUN_000f4409(void)

{
  FUN_000f8a21(&stack0x00000008);
  return;
}

/******************************************************************************
 * Function : sub_0f442b (Ghidra: FUN_000f442b)
 * Prototype: char * sub_0f442b(void);
 * Address  : 0xf442b (Size: 26 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x63412
 * Callees  : 0 -> 
 ******************************************************************************/
char * FUN_000f442b(void)

{
  char cVar1;
  char *in_EAX;
  char in_DL;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    if (in_DL == *in_EAX) {
      pcVar2 = in_EAX;
    }
    cVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}

/******************************************************************************
 * Function : _watcom_entry (Ghidra: _entry)
 * Prototype: undefined4 _watcom_entry(undefined2 param_1);
 * Address  : 0xf4448 (Size: 2 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : DOS/4GW Watcom C/C++ entry point (EIP Obj 1 + 0xe4448)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _entry(undefined2 param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  short extraout_CX;
  uint uVar5;
  int iVar6;
  short extraout_DX;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined2 in_ES;
  undefined2 in_DS;
  short in_GS;
  bool bVar15;
  undefined8 uVar16;
  
  DAT_001958e0 = 0x24;
  pcVar1 = (code *)swi(0x21);
  DAT_001958d4 = (undefined1 *)register0x00000010;
  DAT_001958e8 = (undefined1 *)register0x00000010;
  uVar16 = (*pcVar1)();
  iVar6 = (int)((ulonglong)uVar16 >> 0x20);
  DAT_0019590b = (undefined1)uVar16;
  DAT_0019590c = (undefined1)((ulonglong)uVar16 >> 8);
  iVar9 = 0;
  pcVar12 = &DAT_00000081;
  sVar3 = (short)((ulonglong)uVar16 >> 0x10);
  if (sVar3 == 0x4458) {
    DAT_001958d4 = (undefined1 *)(_DAT_0000005c + 0xfffU & 0xfffff000);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    DAT_00195909 = 0x2c;
  }
  else {
    if (sVar3 != 0x4243) {
      pcVar1 = (code *)swi(0x21);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
        DAT_00195909 = 0x2c;
        param_1 = 0;
        puVar8 = &stack0x00000008;
      }
      else {
        if (in_GS != 0) {
          DAT_001955bc = in_GS;
        }
        pcVar1 = (code *)swi(0x31);
        (*pcVar1)();
        param_1 = 1;
        puVar8 = &stack0x0000000c;
        DAT_001958e0 = in_ES;
        DAT_00195909 = _DAT_0000002c;
        if (extraout_DX != 0 || extraout_CX != 0) {
          param_1 = 0x101;
          puVar8 = &stack0x0000000c;
        }
      }
      goto LAB_000f45d5;
    }
    pcVar1 = (code *)swi(0x21);
    DAT_001955b8 = iVar6;
    (*pcVar1)();
    iVar6 = *(int *)(iVar6 + 0x10);
    pcVar12 = (char *)(iVar6 + 0x81);
    iVar9 = (uint)*(ushort *)(iVar6 + 0x2c) << 4;
    param_1 = 9;
    DAT_001958e0 = in_DS;
    DAT_00195909 = in_DS;
  }
  puVar8 = &stack0x00000008;
LAB_000f45d5:
  DAT_00195902 = (char)param_1;
  DAT_00195903 = (undefined1)((ushort)param_1 >> 8);
  *(int *)(puVar8 + -4) = iVar9;
  pcVar7 = &DAT_003e9570;
  bVar15 = true;
  uVar5 = (uint)(byte)pcVar12[-1];
  do {
    pcVar13 = pcVar12;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar13 = pcVar12 + 1;
    bVar15 = *pcVar12 == ' ';
    pcVar12 = pcVar13;
  } while (bVar15);
  DAT_000f471d = in_DS;
  DAT_00195905 = iVar9;
  if (!bVar15) {
    pcVar12 = pcVar13 + -1;
    for (iVar6 = uVar5 + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pcVar7 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  *pcVar7 = '\0';
  pcVar7[1] = '\0';
  puVar11 = *(uint **)(puVar8 + -4);
  *(char **)(puVar8 + -4) = pcVar7 + 1;
  *(uint *)(puVar8 + -8) = CONCAT22(0x3e,in_DS);
  _DAT_00195900 = 0;
  do {
    if (((*puVar11 | 0x20202020) == 0x37386f6e) && ((char)puVar11[1] == '=')) {
      _DAT_00195900 = _DAT_00195900 + 1;
    }
    do {
      puVar10 = puVar11;
      puVar11 = (uint *)((int)puVar10 + 1);
    } while ((char)*puVar10 != '\0');
  } while (*(char *)puVar11 != '\0');
  puVar11 = puVar10 + 1;
  pcVar12 = pcVar7 + 1;
  do {
    uVar5 = *puVar11;
    DAT_001958e4 = pcVar12 + 1;
    *pcVar12 = (char)*puVar11;
    puVar11 = (uint *)((int)puVar11 + 1);
    pcVar12 = DAT_001958e4;
  } while ((char)uVar5 != '\0');
  DAT_001958dc = *(undefined4 *)(puVar8 + -4);
  uVar5 = 0x2503c8;
  if (DAT_00195902 == '\x01') {
    uVar5 = 0x1000;
  }
  puVar14 = &DAT_001991a0;
  _DAT_001958d0 = puVar8;
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  DAT_001958d8 = &DAT_003e9570;
  *(undefined4 *)(puVar8 + -4) = 0xf46d0;
  FUN_0010ef10();
  *(undefined4 *)(puVar8 + -4) = 0xf46d7;
  uVar4 = FUN_0010eec1();
  *(undefined4 *)(puVar8 + -4) = uVar4;
  *(undefined4 *)(puVar8 + -8) = 0xf470c;
  FUN_0010ef5b();
  pcVar1 = (code *)swi(0x21);
  uVar4 = (*pcVar1)();
  return uVar4;
}

/******************************************************************************
 * Function : sub_0f44bc (Ghidra: FUN_000f44bc)
 * Prototype: undefined4 sub_0f44bc(undefined2 param_1);
 * Address  : 0xf44bc (Size: 3 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f44bc(undefined2 param_1)

{
  ushort *puVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  short extraout_CX;
  uint uVar6;
  int iVar7;
  short extraout_DX;
  char *pcVar8;
  undefined1 *puVar9;
  ushort unaff_BP;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  int unaff_EDI;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined2 in_ES;
  undefined2 in_DS;
  short in_GS;
  bool bVar16;
  undefined8 uVar17;
  
  puVar1 = (ushort *)(unaff_EDI + 0x6e);
  sVar4 = (unaff_BP & 3) - (*puVar1 & 3);
  *puVar1 = *puVar1 + (ushort)(0 < sVar4) * sVar4;
  DAT_001958e0 = 0x24;
  pcVar2 = (code *)swi(0x21);
  DAT_001958d4 = (undefined1 *)register0x00000010;
  DAT_001958e8 = (undefined1 *)register0x00000010;
  uVar17 = (*pcVar2)();
  iVar7 = (int)((ulonglong)uVar17 >> 0x20);
  DAT_0019590b = (undefined1)uVar17;
  DAT_0019590c = (undefined1)((ulonglong)uVar17 >> 8);
  iVar10 = 0;
  pcVar13 = &DAT_00000081;
  sVar4 = (short)((ulonglong)uVar17 >> 0x10);
  if (sVar4 == 0x4458) {
    DAT_001958d4 = (undefined1 *)(_DAT_0000005c + 0xfffU & 0xfffff000);
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    DAT_00195909 = 0x2c;
  }
  else {
    if (sVar4 != 0x4243) {
      pcVar2 = (code *)swi(0x21);
      cVar3 = (*pcVar2)();
      if (cVar3 == '\0') {
        DAT_00195909 = 0x2c;
        param_1 = 0;
        puVar9 = &stack0x00000008;
      }
      else {
        if (in_GS != 0) {
          DAT_001955bc = in_GS;
        }
        pcVar2 = (code *)swi(0x31);
        (*pcVar2)();
        param_1 = 1;
        puVar9 = &stack0x0000000c;
        DAT_001958e0 = in_ES;
        DAT_00195909 = _DAT_0000002c;
        if (extraout_DX != 0 || extraout_CX != 0) {
          param_1 = 0x101;
          puVar9 = &stack0x0000000c;
        }
      }
      goto LAB_000f45d5;
    }
    pcVar2 = (code *)swi(0x21);
    DAT_001955b8 = iVar7;
    (*pcVar2)();
    iVar7 = *(int *)(iVar7 + 0x10);
    pcVar13 = (char *)(iVar7 + 0x81);
    iVar10 = (uint)*(ushort *)(iVar7 + 0x2c) << 4;
    param_1 = 9;
    DAT_001958e0 = in_DS;
    DAT_00195909 = in_DS;
  }
  puVar9 = &stack0x00000008;
LAB_000f45d5:
  DAT_00195902 = (char)param_1;
  DAT_00195903 = (undefined1)((ushort)param_1 >> 8);
  *(int *)(puVar9 + -4) = iVar10;
  pcVar8 = &DAT_003e9570;
  bVar16 = true;
  uVar6 = (uint)(byte)pcVar13[-1];
  do {
    pcVar14 = pcVar13;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar13 + 1;
    bVar16 = *pcVar13 == ' ';
    pcVar13 = pcVar14;
  } while (bVar16);
  DAT_000f471d = in_DS;
  DAT_00195905 = iVar10;
  if (!bVar16) {
    pcVar13 = pcVar14 + -1;
    for (iVar7 = uVar6 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pcVar8 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  *pcVar8 = '\0';
  pcVar8[1] = '\0';
  puVar12 = *(uint **)(puVar9 + -4);
  *(char **)(puVar9 + -4) = pcVar8 + 1;
  *(uint *)(puVar9 + -8) = CONCAT22(0x3e,in_DS);
  _DAT_00195900 = 0;
  do {
    if (((*puVar12 | 0x20202020) == 0x37386f6e) && ((char)puVar12[1] == '=')) {
      _DAT_00195900 = _DAT_00195900 + 1;
    }
    do {
      puVar11 = puVar12;
      puVar12 = (uint *)((int)puVar11 + 1);
    } while ((char)*puVar11 != '\0');
  } while (*(char *)puVar12 != '\0');
  puVar12 = puVar11 + 1;
  pcVar13 = pcVar8 + 1;
  do {
    uVar6 = *puVar12;
    DAT_001958e4 = pcVar13 + 1;
    *pcVar13 = (char)*puVar12;
    puVar12 = (uint *)((int)puVar12 + 1);
    pcVar13 = DAT_001958e4;
  } while ((char)uVar6 != '\0');
  DAT_001958dc = *(undefined4 *)(puVar9 + -4);
  uVar6 = 0x2503c8;
  if (DAT_00195902 == '\x01') {
    uVar6 = 0x1000;
  }
  puVar15 = &DAT_001991a0;
  _DAT_001958d0 = puVar9;
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  DAT_001958d8 = &DAT_003e9570;
  *(undefined4 *)(puVar9 + -4) = 0xf46d0;
  FUN_0010ef10();
  *(undefined4 *)(puVar9 + -4) = 0xf46d7;
  uVar5 = FUN_0010eec1();
  *(undefined4 *)(puVar9 + -4) = uVar5;
  *(undefined4 *)(puVar9 + -8) = 0xf470c;
  FUN_0010ef5b();
  pcVar2 = (code *)swi(0x21);
  uVar5 = (*pcVar2)();
  return uVar5;
}

/******************************************************************************
 * Function : sub_0f44c0 (Ghidra: FUN_000f44c0)
 * Prototype: undefined4 sub_0f44c0(undefined2 param_1);
 * Address  : 0xf44c0 (Size: 537 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x10eec1, 0x10ef10
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f44c0(undefined2 param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  short extraout_CX;
  uint uVar5;
  int iVar6;
  short extraout_DX;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined2 in_ES;
  undefined2 in_DS;
  short in_GS;
  bool bVar15;
  undefined8 uVar16;
  
  DAT_001958e0 = 0x24;
  pcVar1 = (code *)swi(0x21);
  DAT_001958d4 = (undefined1 *)register0x00000010;
  DAT_001958e8 = (undefined1 *)register0x00000010;
  uVar16 = (*pcVar1)();
  iVar6 = (int)((ulonglong)uVar16 >> 0x20);
  DAT_0019590b = (undefined1)uVar16;
  DAT_0019590c = (undefined1)((ulonglong)uVar16 >> 8);
  iVar9 = 0;
  pcVar12 = &DAT_00000081;
  sVar3 = (short)((ulonglong)uVar16 >> 0x10);
  if (sVar3 == 0x4458) {
    DAT_001958d4 = (undefined1 *)(_DAT_0000005c + 0xfffU & 0xfffff000);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    DAT_00195909 = 0x2c;
  }
  else {
    if (sVar3 != 0x4243) {
      pcVar1 = (code *)swi(0x21);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
        DAT_00195909 = 0x2c;
        param_1 = 0;
        puVar8 = &stack0x00000008;
      }
      else {
        if (in_GS != 0) {
          DAT_001955bc = in_GS;
        }
        pcVar1 = (code *)swi(0x31);
        (*pcVar1)();
        param_1 = 1;
        puVar8 = &stack0x0000000c;
        DAT_001958e0 = in_ES;
        DAT_00195909 = _DAT_0000002c;
        if (extraout_DX != 0 || extraout_CX != 0) {
          param_1 = 0x101;
          puVar8 = &stack0x0000000c;
        }
      }
      goto LAB_000f45d5;
    }
    pcVar1 = (code *)swi(0x21);
    DAT_001955b8 = iVar6;
    (*pcVar1)();
    iVar6 = *(int *)(iVar6 + 0x10);
    pcVar12 = (char *)(iVar6 + 0x81);
    iVar9 = (uint)*(ushort *)(iVar6 + 0x2c) << 4;
    param_1 = 9;
    DAT_001958e0 = in_DS;
    DAT_00195909 = in_DS;
  }
  puVar8 = &stack0x00000008;
LAB_000f45d5:
  DAT_00195902 = (char)param_1;
  DAT_00195903 = (undefined1)((ushort)param_1 >> 8);
  *(int *)(puVar8 + -4) = iVar9;
  pcVar7 = &DAT_003e9570;
  bVar15 = true;
  uVar5 = (uint)(byte)pcVar12[-1];
  do {
    pcVar13 = pcVar12;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar13 = pcVar12 + 1;
    bVar15 = *pcVar12 == ' ';
    pcVar12 = pcVar13;
  } while (bVar15);
  DAT_000f471d = in_DS;
  DAT_00195905 = iVar9;
  if (!bVar15) {
    pcVar12 = pcVar13 + -1;
    for (iVar6 = uVar5 + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pcVar7 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  *pcVar7 = '\0';
  pcVar7[1] = '\0';
  puVar11 = *(uint **)(puVar8 + -4);
  *(char **)(puVar8 + -4) = pcVar7 + 1;
  *(uint *)(puVar8 + -8) = CONCAT22(0x3e,in_DS);
  _DAT_00195900 = 0;
  do {
    if (((*puVar11 | 0x20202020) == 0x37386f6e) && ((char)puVar11[1] == '=')) {
      _DAT_00195900 = _DAT_00195900 + 1;
    }
    do {
      puVar10 = puVar11;
      puVar11 = (uint *)((int)puVar10 + 1);
    } while ((char)*puVar10 != '\0');
  } while (*(char *)puVar11 != '\0');
  puVar11 = puVar10 + 1;
  pcVar12 = pcVar7 + 1;
  do {
    uVar5 = *puVar11;
    DAT_001958e4 = pcVar12 + 1;
    *pcVar12 = (char)*puVar11;
    puVar11 = (uint *)((int)puVar11 + 1);
    pcVar12 = DAT_001958e4;
  } while ((char)uVar5 != '\0');
  DAT_001958dc = *(undefined4 *)(puVar8 + -4);
  uVar5 = 0x2503c8;
  if (DAT_00195902 == '\x01') {
    uVar5 = 0x1000;
  }
  puVar14 = &DAT_001991a0;
  _DAT_001958d0 = puVar8;
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
  }
  DAT_001958d8 = &DAT_003e9570;
  *(undefined4 *)(puVar8 + -4) = 0xf46d0;
  FUN_0010ef10();
  *(undefined4 *)(puVar8 + -4) = 0xf46d7;
  uVar4 = FUN_0010eec1();
  *(undefined4 *)(puVar8 + -4) = uVar4;
  *(undefined4 *)(puVar8 + -8) = 0xf470c;
  FUN_0010ef5b();
  pcVar1 = (code *)swi(0x21);
  uVar4 = (*pcVar1)();
  return uVar4;
}

/******************************************************************************
 * Function : sub_0f46d9 (Ghidra: FUN_000f46d9)
 * Prototype: undefined4 sub_0f46d9(void);
 * Address  : 0xf46d9 (Size: 59 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x12070b
 * Callees  : 1 -> 0x10ef5b
 ******************************************************************************/
undefined4 FUN_000f46d9(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  char *in_EDX;
  
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  do {
    cVar1 = *in_EDX;
    in_EDX = in_EDX + 1;
  } while (cVar1 != '\0');
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  FUN_0010ef5b();
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  return uVar3;
}

/******************************************************************************
 * Function : sub_0f4714 (Ghidra: FUN_000f4714)
 * Prototype: void sub_0f4714(void);
 * Address  : 0xf4714 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0xe88b2, 0xec068, 0xf4ae0, 0x110774, 0x12531c, 0x125348, 0x125374, 0x1253a0, 0x126813, 0x1268a8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f4714(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0f471f (Ghidra: FUN_000f471f)
 * Prototype: undefined8 sub_0f471f(void);
 * Address  : 0xf471f (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f471f(void)

{
  char in_DL;
  int unaff_EBP;
  longdouble lVar1;
  
  *(char *)(unaff_EBP + -0x77) = *(char *)(unaff_EBP + -0x77) + in_DL;
  in(0x50);
  lVar1 = (longdouble)
          FUN_0010f15e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       unaff_EBP + -0x14);
  if (lVar1 < (longdouble)0) {
    *(double *)(unaff_EBP + -0x14) = *(double *)(unaff_EBP + -0x14) + _DAT_0016f56c;
  }
  return CONCAT44(*(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -4));
}

/******************************************************************************
 * Function : sub_0f4720 (Ghidra: FUN_000f4720)
 * Prototype: undefined8 sub_0f4720(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf4720 (Size: 60 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x65864, 0x659ab, 0xf475c, 0x1208a5
 * Callees  : 1 -> 0x10f15e
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f4720(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined4 in_EDX;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  local_10 = in_EDX;
  FUN_0010f15e(param_1,param_2,local_18);
  return CONCAT44(local_10,in_EAX);
}

/******************************************************************************
 * Function : sub_0f475c (Ghidra: FUN_000f475c)
 * Prototype: undefined4 sub_0f475c(double param_1);
 * Address  : 0xf475c (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65864
 * Callees  : 1 -> 0xf4720
 ******************************************************************************/
undefined4 FUN_000f475c(double param_1)

{
  undefined4 local_10;
  
  FUN_000f4720();
  local_10 = SUB84(-param_1,0);
  return local_10;
}

/******************************************************************************
 * Function : sub_0f4777 (Ghidra: FUN_000f4777)
 * Prototype: int sub_0f4777(void);
 * Address  : 0xf4777 (Size: 277 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xf488c, 0x10ec34, 0x11df04
 * Callees  : 1 -> 0x10f177
 ******************************************************************************/
int FUN_000f4777(void)

{
  ulonglong uVar1;
  int in_EAX;
  undefined4 *in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((in_EDX < 0xa8c0) && (0 < unaff_EBX)) {
    uVar4 = (in_EDX + 0x15180) - unaff_EBX;
    uVar6 = (in_EAX + uVar4 / 0x15180) - 1;
  }
  else {
    uVar4 = in_EDX - unaff_EBX;
    uVar6 = in_EAX + uVar4 / 0x15180;
  }
  in_ECX[2] = (int)(((ulonglong)uVar4 % 0x15180) / 0xe10);
  uVar1 = ((ulonglong)uVar4 % 0x15180) % 0xe10;
  in_ECX[1] = (int)(uVar1 / 0x3c);
  *in_ECX = (int)(uVar1 % 0x3c);
  uVar4 = uVar6 / 0x16e;
  uVar3 = uVar6 + uVar4 * -0x16d;
  if (uVar4 != 0) {
    uVar3 = uVar3 - (uVar4 - 1 >> 2);
  }
  uVar7 = FUN_0010f177();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar4 = (int)uVar7 + 0x16d;
  for (; uVar4 <= uVar3; uVar3 = uVar3 - uVar4) {
    iVar2 = iVar2 + 1;
  }
  ppuVar5 = (undefined **)&DAT_00174858;
  *(int *)(extraout_ECX + 0x14) = iVar2;
  *(uint *)(extraout_ECX + 0x1c) = uVar3;
  iVar2 = FUN_0010f177();
  if (iVar2 != 0) {
    ppuVar5 = &PTR_DAT_00174872;
  }
  uVar4 = uVar3 / 0x1f;
  if ((uint)(*(int *)((int)ppuVar5 + uVar4 * 2) >> 0x10) <= uVar3) {
    uVar4 = uVar4 + 1;
  }
  *(uint *)(extraout_ECX_00 + 0x10) = uVar4;
  *(uint *)(extraout_ECX_00 + 0xc) = (uVar3 - (int)*(short *)((int)ppuVar5 + uVar4 * 2)) + 1;
  *(uint *)(extraout_ECX_00 + 0x18) = (uVar6 + 1) % 7;
  return extraout_ECX_00;
}

/******************************************************************************
 * Function : sub_0f488c (Ghidra: FUN_000f488c)
 * Prototype: void sub_0f488c(void);
 * Address  : 0xf488c (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf48aa
 * Callees  : 1 -> 0xf4777
 ******************************************************************************/
void FUN_000f488c(void)

{
  int in_EDX;
  
  *(undefined4 *)(in_EDX + 0x20) = 0;
  FUN_000f4777();
  return;
}

/******************************************************************************
 * Function : sub_0f48aa (Ghidra: FUN_000f48aa)
 * Prototype: void sub_0f48aa(void);
 * Address  : 0xf48aa (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65a61
 * Callees  : 1 -> 0xf488c
 ******************************************************************************/
void FUN_000f48aa(void)

{
  FUN_000f488c();
  return;
}

/******************************************************************************
 * Function : sub_0f48c0 (Ghidra: FUN_000f48c0)
 * Prototype: undefined4 sub_0f48c0(void);
 * Address  : 0xf48c0 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f48c0(void)

{
  if ((DAT_003df158 == 0) && (DAT_003df15c == 0)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f4908 (Ghidra: FUN_000f4908)
 * Prototype: undefined8 sub_0f4908(void);
 * Address  : 0xf4908 (Size: 87 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 3 -> 0xe6a10, 0x10f5be, 0x10f5f0
 ******************************************************************************/
undefined8 FUN_000f4908(void)

{
  undefined4 in_EDX;
  undefined6 uVar1;
  
  if ((DAT_003df158 == 0) && (DAT_003df15c == 0)) {
    FUN_000e6a10();
    uVar1 = FUN_0010f5be();
    DAT_003df15c = (short)((uint6)uVar1 >> 0x20);
    DAT_003df158 = (int)uVar1;
    FUN_0010f5f0();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0f4960 (Ghidra: FUN_000f4960)
 * Prototype: undefined4 sub_0f4960(void);
 * Address  : 0xf4960 (Size: 69 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a652
 * Callees  : 1 -> 0x10f5f0
 ******************************************************************************/
undefined4 FUN_000f4960(void)

{
  if ((DAT_003df158 != 0) || (DAT_003df15c != 0)) {
    FUN_0010f5f0();
    DAT_003df15c = 0;
    DAT_003df158 = 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f49a8 (Ghidra: FUN_000f49a8)
 * Prototype: void sub_0f49a8(void);
 * Address  : 0xf49a8 (Size: 102 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
void FUN_000f49a8(void)

{
  code *pcVar1;
  undefined1 extraout_AH;
  bool bVar2;
  byte local_24;
  
  FUN_000f7786();
  DAT_003db600 = (local_24 & 3) != 0;
  if ((local_24 & 4) != 0) {
    DAT_003db600 = DAT_003db600 | 2;
  }
  if ((local_24 & 8) != 0) {
    DAT_003db600 = DAT_003db600 | 4;
  }
  bVar2 = true;
  DAT_003db5fc = 0;
  pcVar1 = (code *)swi(0x16);
  (*pcVar1)();
  if (!bVar2) {
    pcVar1 = (code *)swi(0x16);
    (*pcVar1)();
    DAT_003db5fc = extraout_AH;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f4a30 (Ghidra: FUN_000f4a30)
 * Prototype: undefined8 sub_0f4a30(void);
 * Address  : 0xf4a30 (Size: 174 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf4ae0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f4a30(void)

{
  uint in_EAX;
  undefined4 in_EDX;
  
  if (in_EAX == 0x2b) {
    in_EAX = 0x56;
  }
  else {
    switch(DAT_00195558) {
    case 2:
      if (0x26 < in_EAX) {
        if (in_EAX < 0x28) {
          return CONCAT44(in_EDX,0x32);
        }
        if (in_EAX < 0x32) {
          if (in_EAX != 0x2c) {
            return CONCAT44(in_EDX,in_EAX);
          }
          return CONCAT44(in_EDX,0x11);
        }
        if (in_EAX < 0x33) {
          return CONCAT44(in_EDX,0x33);
        }
        if (in_EAX != 0x33) {
          return CONCAT44(in_EDX,in_EAX);
        }
        return CONCAT44(in_EDX,0x27);
      }
      if (in_EAX < 0x11) {
        if (in_EAX != 0x10) {
          return CONCAT44(in_EDX,in_EAX);
        }
        return CONCAT44(in_EDX,0x1e);
      }
      if (0x11 < in_EAX) {
        if (in_EAX != 0x1e) {
          return CONCAT44(in_EDX,in_EAX);
        }
        return CONCAT44(in_EDX,0x10);
      }
LAB_000f4a4f:
      return CONCAT44(in_EDX,0x2c);
    case 3:
      if (0x14 < in_EAX) {
        if (0x15 < in_EAX) {
          if (in_EAX != 0x2c) {
            return CONCAT44(in_EDX,in_EAX);
          }
LAB_000f4aa3:
          return CONCAT44(in_EDX,0x15);
        }
        goto LAB_000f4a4f;
      }
      break;
    case 7:
      if (0x14 < in_EAX) {
        if (0x15 < in_EAX) {
          if (in_EAX != 0x2c) {
            return CONCAT44(in_EDX,in_EAX);
          }
          goto LAB_000f4aa3;
        }
        goto LAB_000f4a4f;
      }
    }
  }
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0f4ae0 (Ghidra: FUN_000f4ae0)
 * Prototype: undefined8 sub_0f4ae0(void);
 * Address  : 0xf4ae0 (Size: 394 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xf4714, 0xf4a30
 ******************************************************************************/
undefined8 FUN_000f4ae0(void)

{
  byte bVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_EDX;
  int extraout_EDX;
  
  FUN_000f4714();
  DAT_003db5fc = in(0x60);
  if (DAT_003df154 == -0x20) {
    DAT_003db4f8 = 1;
    if ((DAT_003db5fc == 0x2a) || (DAT_003db5fc == 0xaa)) {
      DAT_003db5fc = 0x80;
    }
    else {
      uVar2 = FUN_000f4a30();
      (&DAT_003db4fc)[uVar2 & 0xffff] = DAT_003db5fc < 0x80;
    }
  }
  else {
    DAT_003db4f8 = 0;
    uVar2 = FUN_000f4a30();
    (&DAT_003db4fc)[uVar2 & 0xffff] = DAT_003db5fc < 0x80;
  }
  DAT_003df154 = DAT_003db5fc;
  DAT_003db5fc = FUN_000f4a30();
  DAT_003db5fd = 0;
  if ((DAT_003db526 != '\0') || (DAT_003db532 != '\0')) {
    DAT_003db5fd = 0x10;
  }
  if ((DAT_003db519 != '\0') || (DAT_003db599 != '\0')) {
    DAT_003db5fd = DAT_003db5fd | 0x20;
  }
  if ((DAT_003db534 != '\0') || (DAT_003db5b4 != '\0')) {
    DAT_003db5fd = DAT_003db5fd | 0x40;
  }
  if ((&DAT_003db4fc)[extraout_EDX] != '\0') {
    (&DAT_003db4fc)[extraout_EDX] = (&DAT_003db4fc)[extraout_EDX] | DAT_003db5fd;
  }
  bVar1 = in(0x61);
  out(0x61,bVar1 | 0x80);
  out(0x61,bVar1);
  if ((DAT_003db5fc < 0x80) && (DAT_003db5fe == 0)) {
    DAT_003db5fe = DAT_003db5fc;
    DAT_003db5ff = DAT_003db5fd;
  }
  out(0x20,0x20);
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0f4c6c (Ghidra: FUN_000f4c6c)
 * Prototype: void sub_0f4c6c(void);
 * Address  : 0xf4c6c (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a652
 * Callees  : 4 -> 0xea9f9, 0xeca60, 0x10f620, 0x10f6c8
 ******************************************************************************/
void FUN_000f4c6c(void)

{
  if (DAT_003db694 != '\0') {
    FUN_000ea9f9();
  }
  FUN_000eca60();
  FUN_0010f620();
  FUN_0010f6c8();
  return;
}

/******************************************************************************
 * Function : sub_0f4c89 (Ghidra: FUN_000f4c89)
 * Prototype: void sub_0f4c89(void);
 * Address  : 0xf4c89 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf4c8a, 0xf4ca2
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f4c89(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0f4c8a (Ghidra: FUN_000f4c8a)
 * Prototype: void sub_0f4c8a(void);
 * Address  : 0xf4c8a (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6adc5, 0x10eec1
 * Callees  : 2 -> 0xf4c89, 0xf4ca2
 ******************************************************************************/
void FUN_000f4c8a(void)

{
  (*(code *)PTR_FUN_000f4c89_001955c8)();
  (*(code *)PTR_FUN_000f4c89_001955cc)();
  FUN_000f4ca2();
  return;
}

/******************************************************************************
 * Function : sub_0f4ca2 (Ghidra: FUN_000f4ca2)
 * Prototype: undefined4 sub_0f4ca2(void);
 * Address  : 0xf4ca2 (Size: 22 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf4c8a
 * Callees  : 1 -> 0xf4c89
 ******************************************************************************/
undefined4 FUN_000f4ca2(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  
  (*(code *)PTR_FUN_000f4c89_001955cc)();
  (*(code *)PTR_FUN_000f4c89_001955d0)();
  FUN_0010ef5b(extraout_EDX);
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  return uVar2;
}

/******************************************************************************
 * Function : sub_0f4cb8 (Ghidra: FUN_000f4cb8)
 * Prototype: undefined8 sub_0f4cb8(void);
 * Address  : 0xf4cb8 (Size: 227 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x6b04d, 0xe9594, 0xf87a3, 0xf8c47, 0xfed8f, 0x10efaa, 0x10fe9e, 0x113903, 0x12673f
 * Callees  : 3 -> 0x10f72e, 0x10fcd2, 0x10fe9b
 ******************************************************************************/
undefined8 FUN_000f4cb8(void)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar4;
  undefined8 uVar5;
  
  if ((in_EAX == 0) || (0xffffffd4 < in_EAX)) {
    iVar2 = 0;
  }
  else {
    bVar1 = false;
    uVar4 = in_EAX + 3 & 0xfffffffc;
    while( true ) {
      while( true ) {
        uVar3 = uVar4;
        if (uVar4 < 0xc) {
          uVar3 = 0xc;
        }
        if ((uVar3 <= DAT_001955dc) || (iVar2 = DAT_001955d8, DAT_001955d8 == 0)) {
          DAT_001955dc = 0;
          iVar2 = DAT_001955d4;
        }
        while (iVar2 != 0) {
          DAT_001955d8 = iVar2;
          iVar2 = FUN_0010f72e();
          if (iVar2 != 0) goto LAB_000f4d82;
          if (DAT_001955dc < *(uint *)(extraout_ECX + 0x14)) {
            DAT_001955dc = *(uint *)(extraout_ECX + 0x14);
          }
          iVar2 = *(int *)(extraout_ECX + 8);
        }
        if ((bVar1) || (iVar2 = FUN_0010fcd2(), iVar2 == 0)) break;
        bVar1 = true;
      }
      uVar5 = FUN_0010fe9b();
      iVar2 = (int)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) break;
      bVar1 = false;
    }
LAB_000f4d82:
    DAT_003e0324 = 0;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0f4d9b (Ghidra: FUN_000f4d9b)
 * Prototype: void sub_0f4d9b(void);
 * Address  : 0xf4d9b (Size: 130 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x6b04d, 0xe9670, 0xea15f, 0xf8882, 0xfeda2, 0x10fc22, 0x10fcd2, 0x12673f
 * Callees  : 1 -> 0x10f7d6
 ******************************************************************************/
void FUN_000f4d9b(void)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_ECX;
  
  if (in_EAX != 0) {
    uVar1 = DAT_001955d4;
    if (((DAT_003df160 == 0) || (in_EAX < DAT_003df160)) || (*(uint *)(DAT_003df160 + 8) <= in_EAX))
    {
      for (; (*(uint *)(uVar1 + 8) != 0 && ((in_EAX < uVar1 || (*(uint *)(uVar1 + 8) <= in_EAX))));
          uVar1 = *(uint *)(uVar1 + 8)) {
      }
    }
    FUN_0010f7d6();
    if ((extraout_ECX < DAT_001955d8) && (DAT_001955dc < *(uint *)(extraout_ECX + 0x14))) {
      DAT_001955dc = *(uint *)(extraout_ECX + 0x14);
    }
    DAT_003e0324 = 0;
    DAT_003df160 = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f4e20 (Ghidra: FUN_000f4e20)
 * Prototype: undefined4 sub_0f4e20(void);
 * Address  : 0xf4e20 (Size: 180 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6dfd3, 0x6e09b, 0x6f8fd, 0x6f98e
 * Callees  : 1 -> 0xfac8f
 ******************************************************************************/
undefined4 FUN_000f4e20(void)

{
  int in_EAX;
  int iVar1;
  short in_DX;
  undefined4 *puVar2;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_00195d1a != '\0')) {
    if ((in_DX == 0) && (in_EAX == 0)) {
      iVar1 = FUN_000fac8f();
      if (iVar1 == 4) {
        return 1;
      }
    }
    else if (in_DX == 0) {
      for (puVar2 = &DAT_003df170; puVar2 <= DAT_003df510;
          puVar2 = (undefined4 *)((int)puVar2 + 0x1d)) {
        if ((in_EAX == *(int *)((int)puVar2 + 0xe)) && (iVar1 = FUN_000fac8f(*puVar2), iVar1 == 4))
        {
          return 1;
        }
      }
    }
    else {
      for (puVar2 = &DAT_003df170; puVar2 <= DAT_003df510;
          puVar2 = (undefined4 *)((int)puVar2 + 0x1d)) {
        if (((in_EAX == *(int *)((int)puVar2 + 0xe)) && (in_DX == *(short *)((int)puVar2 + 0x12)))
           && (iVar1 = FUN_000fac8f(*puVar2), iVar1 == 4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_playsadd_id_num_vol_0f4ed4 (Ghidra: FUN_000f4ed4)
 * Prototype: int * dk_playsadd_id_num_vol_0f4ed4(ushort param_1,char param_2,undefined4 param_3,int param_4,int param_5);
 * Address  : 0xf4ed4 (Size: 657 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'PLAYSADD    id-%08d    num-%03d    vol-%03d    pan-%03d    p'
 * Callers  : 1 -> 0x6e159
 * Callees  : 10 -> 0xe7714, 0xf9610, 0xfa77e, 0xfa7dc, 0xfa91d, 0xfaa95, 0xfaaf9, 0xfab5d, 0xfabc1, 0xfac8f
 * Strings  :
 *   - 0x16f574: "PLAYSADD    id-%08d    num-%03d    vol-%03d    pan-%03d    ptch-%03d    type-%d    pri-%03d\n"
 ******************************************************************************/
int * FUN_000f4ed4(ushort param_1,char param_2,undefined4 param_3,int param_4,int param_5)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_ECX;
  byte extraout_DL;
  short in_DX;
  int unaff_EBX;
  int *piVar3;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (DAT_003df514 == '\0') {
    return (int *)0x0;
  }
  if (DAT_00195d18 == '\0') {
    return (int *)0x0;
  }
  if (DAT_00195d1a == '\0') {
    return (int *)0x0;
  }
  if (param_5 == 0xff) {
    return (int *)0x0;
  }
  FUN_000e7714(&DAT_003df651,s_PLAYSADD_id__08d_num__03d_vol__0_0016f574);
  FUN_000f9610();
  if (extraout_DL < 2) {
    if (extraout_DL == 1) {
      for (piVar3 = &DAT_003df170; unaff_ESI = (int *)0x0, piVar3 <= DAT_003df510;
          piVar3 = (int *)((int)piVar3 + 0x1d)) {
        iVar2 = FUN_000fac8f(*piVar3);
        if (iVar2 == 2) goto LAB_000f4f43;
      }
    }
  }
  else if (extraout_DL < 3) {
    piVar3 = &DAT_003df170;
    while ((unaff_EDI = (int *)0x0, piVar3 <= DAT_003df510 &&
           (((*(int *)((int)piVar3 + 0xe) != in_EAX || (*(short *)((int)piVar3 + 0x12) != in_DX)) ||
            (iVar2 = FUN_000fac8f(*piVar3), unaff_EDI = piVar3, iVar2 == 2))))) {
      piVar3 = (int *)((int)piVar3 + 0x1d);
    }
    if (unaff_EDI == (int *)0x0) {
      piVar3 = &DAT_003df170;
      while ((unaff_ESI = (int *)0x0, piVar3 <= DAT_003df510 &&
             (iVar2 = FUN_000fac8f(*piVar3), unaff_ESI = piVar3, iVar2 != 2))) {
        piVar3 = (int *)((int)piVar3 + 0x1d);
      }
    }
  }
  else if (extraout_DL == 3) {
    bVar1 = false;
    for (piVar3 = &DAT_003df170; piVar3 <= DAT_003df510; piVar3 = (int *)((int)piVar3 + 0x1d)) {
      if ((*(int *)((int)piVar3 + 0xe) == in_EAX) && (*(short *)((int)piVar3 + 0x12) == in_DX)) {
        bVar1 = true;
        unaff_EDI = (int *)0x0;
        unaff_ESI = piVar3;
        break;
      }
    }
    if ((!bVar1) && (param_5 != 0)) {
      for (piVar3 = &DAT_003df170; unaff_ESI = (int *)0x0, piVar3 <= DAT_003df510;
          piVar3 = (int *)((int)piVar3 + 0x1d)) {
        if ((*(int *)((int)piVar3 + 0xe) == in_EAX) && (*(int *)((int)piVar3 + 0x19) == param_5)) {
          bVar1 = true;
          unaff_EDI = (int *)0x0;
          unaff_ESI = piVar3;
          break;
        }
      }
    }
    if (!bVar1) {
      for (piVar3 = &DAT_003df170; unaff_ESI = (int *)0x0, piVar3 <= DAT_003df510;
          piVar3 = (int *)((int)piVar3 + 0x1d)) {
        iVar2 = FUN_000fac8f(*piVar3);
        if (iVar2 == 2) goto LAB_000f4f43;
      }
    }
  }
LAB_000f509a:
  if (((unaff_ESI != (int *)0x0) && (unaff_EDI == (int *)0x0)) &&
     (FUN_000fa77e(*unaff_ESI), param_4 != 0)) {
    FUN_000fa7dc(*unaff_ESI,param_4,1);
    FUN_000faaf9(*unaff_ESI,unaff_EBX);
    if (DAT_00195d1c != '\0') {
      FUN_000fab5d(*unaff_ESI,in_ECX);
    }
    if (param_1 != 100) {
      FUN_000faa95(*unaff_ESI,(int)((uint)param_1 * *(int *)(*unaff_ESI + 0x4c)) / 100);
    }
    FUN_000fabc1(*unaff_ESI,param_2 + 1);
    FUN_000fa91d(*unaff_ESI);
    *(int *)((int)unaff_ESI + 0xe) = in_EAX;
    *(short *)((int)unaff_ESI + 0x12) = in_DX;
    unaff_ESI[1] = unaff_EBX;
    *(short *)((int)unaff_ESI + 10) = (short)in_ECX;
    *(ushort *)(unaff_ESI + 2) = param_1;
    *(undefined1 *)(unaff_ESI + 5) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x15) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x17) = 0;
    *(int *)((int)unaff_ESI + 0x19) = param_5;
    return unaff_ESI;
  }
  return (int *)0x0;
LAB_000f4f43:
  unaff_EDI = (int *)0x0;
  unaff_ESI = piVar3;
  goto LAB_000f509a;
}

/******************************************************************************
 * Function : sub_0f5168 (Ghidra: FUN_000f5168)
 * Prototype: void sub_0f5168(void);
 * Address  : 0xf5168 (Size: 192 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6fca5
 * Callees  : 2 -> 0xfab5d, 0xfac8f
 ******************************************************************************/
void FUN_000f5168(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  short in_DX;
  short unaff_BX;
  int *piVar2;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_00195d1a != '\0')) {
    if ((in_DX == 0) && (in_EAX == 0)) {
      for (piVar2 = &DAT_003df170; piVar2 <= DAT_003df510; piVar2 = (int *)((int)piVar2 + 0x1d)) {
        if (((*piVar2 == in_ECX) && (iVar1 = FUN_000fac8f(*piVar2), iVar1 == 4)) &&
           (unaff_BX != *(short *)((int)piVar2 + 10))) {
LAB_000f5212:
          FUN_000fab5d(*piVar2,unaff_BX);
          *(short *)((int)piVar2 + 10) = unaff_BX;
          return;
        }
      }
    }
    else {
      for (piVar2 = &DAT_003df170; piVar2 <= DAT_003df510; piVar2 = (int *)((int)piVar2 + 0x1d)) {
        if (((*(int *)((int)piVar2 + 0xe) == in_EAX) && (in_DX == *(short *)((int)piVar2 + 0x12)))
           && ((iVar1 = FUN_000fac8f(*piVar2), iVar1 == 4 &&
               (unaff_BX != *(short *)((int)piVar2 + 10))))) goto LAB_000f5212;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f5228 (Ghidra: FUN_000f5228)
 * Prototype: void sub_0f5228(void);
 * Address  : 0xf5228 (Size: 222 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6fca5
 * Callees  : 2 -> 0xfaa95, 0xfac8f
 ******************************************************************************/
void FUN_000f5228(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  short in_DX;
  short unaff_BX;
  int *piVar2;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_00195d1a != '\0')) {
    if ((in_DX == 0) && (in_EAX == 0)) {
      for (piVar2 = &DAT_003df170; piVar2 <= DAT_003df510; piVar2 = (int *)((int)piVar2 + 0x1d)) {
        if ((((*piVar2 == in_ECX) && (iVar1 = FUN_000fac8f(*piVar2), iVar1 == 4)) && (0 < unaff_BX))
           && ((uint)*(ushort *)(piVar2 + 2) != (int)unaff_BX)) {
LAB_000f52e4:
          FUN_000faa95(*piVar2,(unaff_BX * DAT_003df52b) / 100);
          *(short *)(piVar2 + 2) = unaff_BX;
          return;
        }
      }
    }
    else {
      for (piVar2 = &DAT_003df170; piVar2 <= DAT_003df510; piVar2 = (int *)((int)piVar2 + 0x1d)) {
        if (((*(int *)((int)piVar2 + 0xe) == in_EAX) && (in_DX == *(short *)((int)piVar2 + 0x12)))
           && ((iVar1 = FUN_000fac8f(*piVar2), iVar1 == 4 &&
               ((0 < unaff_BX && ((uint)*(ushort *)(piVar2 + 2) != (int)unaff_BX))))))
        goto LAB_000f52e4;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f532b (Ghidra: FUN_000f532b)
 * Prototype: void sub_0f532b(void);
 * Address  : 0xf532b (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf5375
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f532b(void)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  char *in_EDX;
  uint unaff_EBX;
  char local_37 [35];
  
  pcVar3 = local_37;
  do {
    uVar2 = in_EAX / unaff_EBX;
    *pcVar3 = "0123456789abcdefghijklmnopqrstuvwxyz"[in_EAX % unaff_EBX];
    pcVar3 = pcVar3 + 1;
    in_EAX = uVar2;
  } while (uVar2 != 0);
  do {
    pcVar3 = pcVar3 + -1;
    cVar1 = *pcVar3;
    *in_EDX = cVar1;
    in_EDX = in_EDX + 1;
  } while (cVar1 != '\0');
  return;
}

/******************************************************************************
 * Function : sub_0f5375 (Ghidra: FUN_000f5375)
 * Prototype: undefined4 sub_0f5375(void);
 * Address  : 0xf5375 (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x7909c, 0xf7123, 0xf7181, 0xf727d
 * Callees  : 1 -> 0xf532b
 ******************************************************************************/
undefined4 FUN_000f5375(void)

{
  int in_EAX;
  undefined4 extraout_ECX;
  undefined1 *in_EDX;
  int unaff_EBX;
  
  if ((unaff_EBX == 10) && (in_EAX < 0)) {
    *in_EDX = 0x2d;
  }
  FUN_000f532b();
  return extraout_ECX;
}

/******************************************************************************
 * Function : sub_0f5390 (Ghidra: FUN_000f5390)
 * Prototype: undefined8 sub_0f5390(void);
 * Address  : 0xf5390 (Size: 53 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x88698, 0x8de90, 0x90c14
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f5390(void)

{
  int in_EAX;
  int in_EDX;
  undefined1 unaff_BL;
  
  *(undefined1 *)(in_EDX * DAT_003d9834 + in_EAX + DAT_003d9824) = unaff_BL;
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0f53c5 (Ghidra: FUN_000f53c5)
 * Prototype: undefined8 sub_0f53c5(void);
 * Address  : 0xf53c5 (Size: 141 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf5460
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f53c5(void)

{
  int in_EAX;
  int in_EDX;
  undefined1 unaff_BL;
  undefined1 *puVar1;
  
  if ((((-1 < in_EAX) && (in_EAX < DAT_003d9844)) && (-1 < in_EDX)) && (in_EDX < DAT_003d9848)) {
    puVar1 = (undefined1 *)(in_EAX + in_EDX * DAT_003d9834 + DAT_003d9824);
    if ((DAT_003d9874 & 4) == 0) {
      if ((DAT_003d9874 & 8) == 0) {
        *puVar1 = unaff_BL;
      }
      else {
        *puVar1 = *(undefined1 *)((uint)CONCAT11(*puVar1,unaff_BL) + DAT_003d981c);
      }
    }
    else {
      *puVar1 = *(undefined1 *)((uint)CONCAT11(unaff_BL,*puVar1) + DAT_003d981c);
    }
  }
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0f5460 (Ghidra: FUN_000f5460)
 * Prototype: undefined4 sub_0f5460(void);
 * Address  : 0xf5460 (Size: 5352 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x88698
 * Callees  : 2 -> 0xf53c5, 0xf6a84
 ******************************************************************************/
undefined4 FUN_000f5460(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  byte in_CL;
  int in_EDX;
  int iVar3;
  uint unaff_EBX;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int local_68;
  int local_64;
  int local_60;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  if (((byte)DAT_003d9874 & 0x10) == 0) {
    if (unaff_EBX == 0) {
      local_44 = 0xf66e2;
      FUN_000f53c5();
    }
    else {
      if (unaff_EBX == 1) {
        local_44 = 0xf66f5;
        FUN_000f53c5();
        local_44 = 0xf6705;
        FUN_000f53c5();
        local_44 = 0xf6715;
        FUN_000f53c5();
        local_44 = 0xf6725;
        FUN_000f53c5();
        local_44 = 0xf6734;
        FUN_000f53c5();
        return 1;
      }
      uVar11 = (uint)in_CL;
      puVar6 = &local_44;
      local_1c = unaff_EBX * -2 + 3;
      local_48 = 0xf6777;
      local_44 = uVar11;
      FUN_000f6a84();
      if (local_20 < 0) {
        local_20 = local_20 + 6;
      }
      else {
        local_4c = 0xf679c;
        local_48 = uVar11;
        FUN_000f6a84();
        puVar6 = &local_4c;
        local_4c = uVar11;
        FUN_000f6a84();
        local_24 = unaff_EBX - 1;
        local_28 = unaff_EBX * -4 + local_28 + 10;
      }
      iVar8 = *(int *)((int)puVar6 + 0x2c);
      *(int *)((int)puVar6 + 0x18) = *(int *)((int)puVar6 + 0x28);
      *(int *)((int)puVar6 + 0x2c) = iVar8 + 1;
      *(int *)((int)puVar6 + 0x14) = iVar8 + 1;
      *(int *)((int)puVar6 + 0x10) = *(int *)((int)puVar6 + 0x2c) << 2;
      *(int *)((int)puVar6 + 0x1c) = *(int *)((int)puVar6 + 0xc) - *(int *)((int)puVar6 + 0x28);
      puVar5 = (undefined1 *)puVar6;
      if (*(int *)((int)puVar6 + 0x2c) < *(int *)((int)puVar6 + 0x28)) {
        do {
          *(uint *)(puVar5 + -4) = (uint)(byte)puVar5[0x30];
          *(uint *)(puVar5 + 0x20) = (uint)(byte)puVar5[0x30];
          *(undefined4 *)(puVar5 + -8) = 0xf6837;
          FUN_000f6a84();
          puVar6 = (uint *)(puVar5 + -8);
          *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(puVar5 + 0x1c);
          *(undefined4 *)(puVar5 + -0xc) = 0xf684b;
          FUN_000f6a84();
          if (*(int *)(puVar5 + 0x1c) < 0) {
            *(int *)(puVar5 + 0x1c) = *(int *)(puVar5 + 0x1c) + 6 + *(int *)(puVar5 + 8);
          }
          else {
            *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(puVar5 + 0x18);
            *(int *)(puVar5 + -8) = *(int *)(puVar5 + 4) + *(int *)(puVar5 + 0xc);
            *(int *)(puVar5 + -4) = *(int *)(puVar5 + 4) - *(int *)(puVar5 + 0xc);
            *(undefined4 *)(puVar5 + -0x10) = 0xf6893;
            FUN_000f6a84();
            puVar6 = (uint *)(puVar5 + -0x10);
            *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(puVar5 + 0x14);
            *(undefined4 *)(puVar5 + -0x14) = 0xf68b0;
            FUN_000f6a84();
            *(int *)(puVar5 + 0x14) =
                 (*(int *)(puVar5 + 0x1c) - *(int *)(puVar5 + 0x18)) * 4 + *(int *)(puVar5 + 0x14) +
                 10;
            *(int *)(puVar5 + 0xc) = *(int *)(puVar5 + 0xc) + 1;
            *(int *)(puVar5 + 0x18) = *(int *)(puVar5 + 0x18) + -1;
          }
          iVar8 = *(int *)((int)puVar6 + 0x2c) + 1;
          *(int *)((int)puVar6 + 0x10) = *(int *)((int)puVar6 + 0x10) + 4;
          *(int *)((int)puVar6 + 0x2c) = iVar8;
          *(int *)((int)puVar6 + 0x14) = iVar8;
          *(int *)((int)puVar6 + 0x18) = *(int *)((int)puVar6 + 0x28);
          puVar5 = (undefined1 *)puVar6;
        } while (iVar8 < *(int *)((int)puVar6 + 0x28));
      }
      if (puVar6[0xb] == puVar6[10]) {
        uVar2 = CONCAT31((uint3)(puVar6[0xb] >> 8) ^ (uint3)(puVar6[10] >> 8),
                         *(undefined1 *)(puVar6 + 0xc));
        puVar6[-1] = uVar2;
        puVar6[1] = uVar2;
        puVar6[-2] = 0xf692b;
        FUN_000f6a84();
        puVar6[-2] = *puVar6;
        puVar6[-3] = 0xf693f;
        FUN_000f6a84();
      }
    }
    return 1;
  }
  local_44 = unaff_EBX * -2 + 3;
  iVar3 = in_EDX * DAT_003d9834 + in_EAX;
  local_38 = in_EAX + unaff_EBX;
  iVar8 = in_EDX + unaff_EBX;
  if (((byte)DAT_003d9874 & 4) == 0) {
    if (((byte)DAT_003d9874 & 8) == 0) {
      if (unaff_EBX < 2) {
        if (((-1 < in_EAX) && (in_EAX < DAT_003d9844)) && ((-1 < in_EDX && (in_EDX < DAT_003d9848)))
           ) {
          *(byte *)(iVar3 + DAT_003d9824) = in_CL;
          return 1;
        }
      }
      else {
        local_48 = 0;
        local_20 = -unaff_EBX + in_EAX;
        iVar3 = -unaff_EBX + in_EDX;
        local_64 = 0;
        iVar1 = in_EAX;
        iVar4 = in_EDX;
        iVar9 = in_EDX;
        local_1c = in_EAX;
        while( true ) {
          iVar7 = DAT_003d9834 * iVar3 + iVar1;
          if ((int)unaff_EBX <= (int)local_48) break;
          if (((-1 < iVar1) && (iVar1 < DAT_003d9844)) && ((-1 < iVar3 && (iVar3 < DAT_003d9848))))
          {
            *(byte *)(DAT_003d9824 + iVar7) = in_CL;
          }
          if ((((-1 < local_1c) && (local_1c < DAT_003d9844)) && (-1 < iVar3)) &&
             (iVar3 < DAT_003d9848)) {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar3 + local_1c) = in_CL;
          }
          if (((-1 < iVar1) && (iVar1 < DAT_003d9844)) && ((-1 < iVar8 && (iVar8 < DAT_003d9848))))
          {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar8 + iVar1) = in_CL;
          }
          if (((-1 < local_1c) && (local_1c < DAT_003d9844)) &&
             ((-1 < iVar8 && (iVar8 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar8 + local_1c) = in_CL;
          }
          if ((((-1 < local_20) && (local_20 < DAT_003d9844)) && (-1 < iVar4)) &&
             (iVar4 < DAT_003d9848)) {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar4 + local_20) = in_CL;
          }
          if (((-1 < local_38) && (local_38 < DAT_003d9844)) &&
             ((-1 < iVar4 && (iVar4 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar4 + local_38) = in_CL;
          }
          if (((-1 < local_20) && (local_20 < DAT_003d9844)) &&
             ((-1 < iVar9 && (iVar9 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar9 + local_20) = in_CL;
          }
          if ((((-1 < local_38) && (local_38 < DAT_003d9844)) && (-1 < iVar9)) &&
             (iVar9 < DAT_003d9848)) {
            *(byte *)(DAT_003d9824 + DAT_003d9834 * iVar9 + local_38) = in_CL;
          }
          if ((int)local_44 < 0) {
            local_44 = local_44 + local_64 + 6;
          }
          else {
            local_44 = local_44 + (local_48 - unaff_EBX) * 4 + 10;
            local_20 = local_20 + 1;
            local_38 = local_38 + -1;
            iVar3 = iVar3 + 1;
            unaff_EBX = unaff_EBX - 1;
            iVar8 = iVar8 + -1;
          }
          local_1c = local_1c + 1;
          local_64 = local_64 + 4;
          iVar1 = iVar1 + -1;
          iVar4 = iVar4 + -1;
          local_48 = local_48 + 1;
          iVar9 = iVar9 + 1;
        }
        if (local_48 == unaff_EBX) {
          if ((((-1 < iVar1) && (iVar1 < DAT_003d9844)) && (-1 < iVar3)) && (iVar3 < DAT_003d9848))
          {
            *(byte *)(DAT_003d9824 + iVar7) = in_CL;
          }
          iVar8 = in_EAX + local_48;
          if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
             ((iVar3 = in_EDX - unaff_EBX, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
            *(byte *)(iVar3 * DAT_003d9834 + iVar8 + DAT_003d9824) = in_CL;
          }
          iVar8 = in_EAX - local_48;
          if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
             ((iVar3 = in_EDX + unaff_EBX, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8) = in_CL;
          }
          iVar8 = in_EAX + local_48;
          if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX + unaff_EBX, -1 < iVar3))
             && (iVar3 < DAT_003d9848)) {
            *(byte *)(DAT_003d9824 + iVar8 + iVar3 * DAT_003d9834) = in_CL;
          }
          iVar8 = in_EAX - unaff_EBX;
          if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
             ((iVar3 = in_EDX - local_48, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8) = in_CL;
          }
          iVar8 = in_EAX + unaff_EBX;
          if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
             ((iVar3 = in_EDX - local_48, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8) = in_CL;
          }
          iVar8 = in_EAX - unaff_EBX;
          if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX + local_48, -1 < iVar3))
             && (iVar3 < DAT_003d9848)) {
            *(byte *)(DAT_003d9824 + iVar8 + iVar3 * DAT_003d9834) = in_CL;
          }
          iVar8 = in_EAX + unaff_EBX;
          if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
             ((iVar3 = in_EDX + local_48, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
            *(byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8) = in_CL;
          }
        }
      }
    }
    else if (unaff_EBX < 2) {
      if ((((-1 < in_EAX) && (in_EAX < DAT_003d9844)) && (-1 < in_EDX)) && (in_EDX < DAT_003d9848))
      {
        *(undefined1 *)(iVar3 + DAT_003d9824) =
             *(undefined1 *)
              (DAT_003d981c + (uint)CONCAT11(*(undefined1 *)(iVar3 + DAT_003d9824),in_CL));
        return 1;
      }
    }
    else {
      local_4c = 0;
      iVar3 = in_EDX + -unaff_EBX;
      iVar4 = in_EAX + -unaff_EBX;
      local_60 = 0;
      iVar1 = in_EAX;
      local_40 = local_44;
      local_30 = in_EAX;
      local_24 = in_EDX;
      local_14 = in_EDX;
      while( true ) {
        iVar9 = DAT_003d9834 * iVar3 + iVar1;
        if ((int)unaff_EBX <= (int)local_4c) break;
        if (((-1 < iVar1) && (iVar1 < DAT_003d9844)) && ((-1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(iVar9 + DAT_003d9824);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if (((-1 < local_30) && (local_30 < DAT_003d9844)) &&
           ((-1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + local_30 + DAT_003d9834 * iVar3);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if ((((-1 < iVar1) && (iVar1 < DAT_003d9844)) && (-1 < iVar8)) && (iVar8 < DAT_003d9848)) {
          pbVar10 = (byte *)(DAT_003d9824 + DAT_003d9834 * iVar8 + iVar1);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if (((-1 < local_30) && (local_30 < DAT_003d9844)) &&
           ((-1 < iVar8 && (iVar8 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + local_30 + DAT_003d9834 * iVar8);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if (((-1 < iVar4) && (iVar4 < DAT_003d9844)) &&
           ((-1 < local_24 && (local_24 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + local_24 * DAT_003d9834 + iVar4);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if ((((-1 < local_38) && (local_38 < DAT_003d9844)) && (-1 < local_24)) &&
           (local_24 < DAT_003d9848)) {
          pbVar10 = (byte *)(DAT_003d9824 + local_38 + local_24 * DAT_003d9834);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if (((-1 < iVar4) && (iVar4 < DAT_003d9844)) &&
           ((-1 < local_14 && (local_14 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + local_14 * DAT_003d9834 + iVar4);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if (((-1 < local_38) && (local_38 < DAT_003d9844)) &&
           ((-1 < local_14 && (local_14 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + local_38 + local_14 * DAT_003d9834);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)*pbVar10 * 0x100 + (uint)in_CL);
        }
        if ((int)local_40 < 0) {
          local_40 = local_40 + local_60 + 6;
        }
        else {
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
          iVar4 = iVar4 + 1;
          local_40 = (local_4c - unaff_EBX) * 4 + local_40 + 10;
          unaff_EBX = unaff_EBX - 1;
          local_38 = local_38 + -1;
        }
        iVar1 = iVar1 + -1;
        local_30 = local_30 + 1;
        local_24 = local_24 + -1;
        local_14 = local_14 + 1;
        local_60 = local_60 + 4;
        local_4c = local_4c + 1;
      }
      if (local_4c == unaff_EBX) {
        if (((-1 < iVar1) && (iVar1 < DAT_003d9844)) && ((-1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(iVar9 + DAT_003d9824);
          *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL + (uint)*pbVar10 * 0x100);
        }
        iVar8 = in_EAX + local_4c;
        if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX - unaff_EBX, -1 < iVar3))
           && (iVar3 < DAT_003d9848)) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
        }
        iVar8 = in_EAX - local_4c;
        if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
           ((iVar3 = in_EDX + unaff_EBX, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
        }
        iVar8 = in_EAX + local_4c;
        if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
           ((iVar3 = in_EDX + unaff_EBX, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
        }
        iVar8 = in_EAX - unaff_EBX;
        if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX - local_4c, -1 < iVar3)) &&
           (iVar3 < DAT_003d9848)) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
        }
        iVar8 = in_EAX + unaff_EBX;
        if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
           ((iVar3 = in_EDX - local_4c, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
        }
        iVar8 = in_EAX - unaff_EBX;
        if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
           ((iVar3 = in_EDX + local_4c, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
        }
        iVar8 = in_EAX + unaff_EBX;
        if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX + local_4c, -1 < iVar3)) &&
           (iVar3 < DAT_003d9848)) {
          pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
          *pbVar10 = *(byte *)((uint)in_CL + (uint)*pbVar10 * 0x100 + DAT_003d981c);
          return 1;
        }
      }
    }
  }
  else if (unaff_EBX < 2) {
    if (((-1 < in_EAX) && (in_EAX < DAT_003d9844)) && ((-1 < in_EDX && (in_EDX < DAT_003d9848)))) {
      *(byte *)(iVar3 + DAT_003d9824) =
           *(byte *)(DAT_003d981c + (uint)*(byte *)(iVar3 + DAT_003d9824) + (uint)in_CL * 0x100);
    }
  }
  else {
    local_50 = 0;
    iVar3 = in_EDX + -unaff_EBX;
    local_28 = -unaff_EBX + in_EAX;
    local_68 = 0;
    iVar1 = in_EAX;
    iVar4 = in_EDX;
    local_3c = local_44;
    local_34 = in_EAX;
    local_2c = in_EDX;
    local_10 = local_38;
    while( true ) {
      iVar9 = DAT_003d9834 * iVar3 + iVar1;
      if ((int)unaff_EBX <= (int)local_50) break;
      if ((((-1 < iVar1) && (iVar1 < DAT_003d9844)) && (-1 < iVar3)) && (iVar3 < DAT_003d9848)) {
        pbVar10 = (byte *)(iVar9 + DAT_003d9824);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if (((-1 < local_34) && (local_34 < DAT_003d9844)) && ((-1 < iVar3 && (iVar3 < DAT_003d9848)))
         ) {
        pbVar10 = (byte *)(DAT_003d9824 + local_34 + DAT_003d9834 * iVar3);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if (((-1 < iVar1) && (iVar1 < DAT_003d9844)) && ((-1 < iVar8 && (iVar8 < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + DAT_003d9834 * iVar8 + iVar1);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if ((((-1 < local_34) && (local_34 < DAT_003d9844)) && (-1 < iVar8)) && (iVar8 < DAT_003d9848)
         ) {
        pbVar10 = (byte *)(DAT_003d9824 + local_34 + DAT_003d9834 * iVar8);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if (((-1 < local_28) && (local_28 < DAT_003d9844)) &&
         ((-1 < local_2c && (local_2c < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + local_28 + local_2c * DAT_003d9834);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if (((-1 < local_10) && (local_10 < DAT_003d9844)) &&
         ((-1 < local_2c && (local_2c < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + local_10 + local_2c * DAT_003d9834);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if ((((-1 < local_28) && (local_28 < DAT_003d9844)) && (-1 < iVar4)) && (iVar4 < DAT_003d9848)
         ) {
        pbVar10 = (byte *)(DAT_003d9824 + local_28 + DAT_003d9834 * iVar4);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if (((-1 < local_10) && (local_10 < DAT_003d9844)) && ((-1 < iVar4 && (iVar4 < DAT_003d9848)))
         ) {
        pbVar10 = (byte *)(DAT_003d9824 + local_10 + DAT_003d9834 * iVar4);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      if ((int)local_3c < 0) {
        local_3c = local_3c + local_68 + 6;
      }
      else {
        local_3c = (local_50 - unaff_EBX) * 4 + local_3c + 10;
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + -1;
        local_28 = local_28 + 1;
        local_10 = local_10 + -1;
        unaff_EBX = unaff_EBX - 1;
      }
      iVar1 = iVar1 + -1;
      iVar4 = iVar4 + 1;
      local_34 = local_34 + 1;
      local_2c = local_2c + -1;
      local_68 = local_68 + 4;
      local_50 = local_50 + 1;
    }
    if (local_50 == unaff_EBX) {
      if (((-1 < iVar1) && (iVar1 < DAT_003d9844)) && ((-1 < iVar3 && (iVar3 < DAT_003d9848)))) {
        pbVar10 = (byte *)(iVar9 + DAT_003d9824);
        *pbVar10 = *(byte *)(DAT_003d981c + (uint)in_CL * 0x100 + (uint)*pbVar10);
      }
      iVar8 = in_EAX + local_50;
      if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
         ((iVar3 = in_EDX - unaff_EBX, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)*pbVar10 + (uint)in_CL * 0x100 + DAT_003d981c);
      }
      iVar8 = in_EAX - local_50;
      if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX + unaff_EBX, -1 < iVar3)) &&
         (iVar3 < DAT_003d9848)) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)*pbVar10 + (uint)in_CL * 0x100 + DAT_003d981c);
      }
      iVar8 = in_EAX + local_50;
      if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
         ((iVar3 = in_EDX + unaff_EBX, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)in_CL * 0x100 + (uint)*pbVar10 + DAT_003d981c);
      }
      iVar8 = in_EAX - unaff_EBX;
      if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
         ((iVar3 = in_EDX - local_50, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)*pbVar10 + (uint)in_CL * 0x100 + DAT_003d981c);
      }
      iVar8 = in_EAX + unaff_EBX;
      if ((((-1 < iVar8) && (iVar8 < DAT_003d9844)) && (iVar3 = in_EDX - local_50, -1 < iVar3)) &&
         (iVar3 < DAT_003d9848)) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)*pbVar10 + (uint)in_CL * 0x100 + DAT_003d981c);
      }
      iVar8 = in_EAX - unaff_EBX;
      if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
         ((iVar3 = in_EDX + local_50, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)in_CL * 0x100 + (uint)*pbVar10 + DAT_003d981c);
      }
      iVar8 = in_EAX + unaff_EBX;
      if (((-1 < iVar8) && (iVar8 < DAT_003d9844)) &&
         ((iVar3 = in_EDX + local_50, -1 < iVar3 && (iVar3 < DAT_003d9848)))) {
        pbVar10 = (byte *)(DAT_003d9824 + iVar3 * DAT_003d9834 + iVar8);
        *pbVar10 = *(byte *)((uint)in_CL * 0x100 + (uint)*pbVar10 + DAT_003d981c);
        return 1;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f694b (Ghidra: FUN_000f694b)
 * Prototype: int sub_0f694b(void);
 * Address  : 0xf694b (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0xb5694, 0xb62e4, 0xb6aac, 0xbfaec, 0xc206c, 0xc241c, 0x1285b6
 * Callees  : 3 -> 0xf8aa6, 0x10fe9e, 0x10ff15
 ******************************************************************************/
int FUN_000f694b(void)

{
  char *in_EAX;
  int iVar1;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *pcVar2;
  int in_EDX;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(in_EDX + 8) == 0) {
    FUN_0010fe9e();
    in_EAX = extraout_ECX;
  }
  bVar4 = (*(byte *)(in_EDX + 0xd) & 4) != 0;
  if (bVar4) {
    *(byte *)(in_EDX + 0xd) = *(byte *)(in_EDX + 0xd) & 0xf9 | 2;
  }
  iVar3 = 0;
  pcVar2 = in_EAX;
  do {
    if (*pcVar2 == '\0') goto LAB_000f6998;
    iVar1 = FUN_0010ff15();
    pcVar2 = extraout_ECX_00;
  } while (iVar1 != -1);
  iVar3 = -1;
LAB_000f6998:
  if ((bVar4) && (*(byte *)(in_EDX + 0xd) = *(byte *)(in_EDX + 0xd) & 0xf9 | 4, iVar3 == 0)) {
    iVar3 = FUN_000f8aa6();
    pcVar2 = extraout_ECX_01;
  }
  if (iVar3 == 0) {
    iVar3 = (int)pcVar2 - (int)in_EAX;
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_0f69c6 (Ghidra: FUN_000f69c6)
 * Prototype: int sub_0f69c6(void);
 * Address  : 0xf69c6 (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0xb5694, 0xb62e4, 0xb6aac, 0xbfaec, 0xc206c, 0xc241c
 * Callees  : 1 -> 0xf43d5
 ******************************************************************************/
int FUN_000f69c6(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  
  if (in_EAX == (undefined4 *)0x0) {
    FUN_000f43d5();
    return 0;
  }
  iVar2 = 0;
  if ((*(byte *)((int)in_EAX + 0xd) & 0x10) == 0) {
    if ((in_EAX[2] != 0) &&
       (*(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) & 0xef,
       (*(byte *)((int)in_EAX + 0xd) & 0x20) == 0)) {
      iVar3 = 0;
      if (in_EAX[1] != 0) {
        iVar3 = FUN_000f7c2e();
        in_EAX = extraout_ECX_01;
      }
      if (iVar3 == -1) {
        *(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) | 0x20;
        iVar2 = -1;
      }
    }
  }
  else {
    *(byte *)((int)in_EAX + 0xd) = *(byte *)((int)in_EAX + 0xd) & 0xef;
    if (((*(byte *)(in_EAX + 3) & 2) != 0) && (in_EAX[2] != 0)) {
      iVar3 = in_EAX[1];
      while ((iVar3 != 0 && (iVar2 == 0))) {
        iVar1 = FUN_001139e3();
        in_EAX = extraout_ECX;
        if (iVar1 == -1) {
          *(byte *)(extraout_ECX + 3) = *(byte *)(extraout_ECX + 3) | 0x20;
          iVar2 = -1;
        }
        else if (iVar1 == 0) {
          FUN_000f8774();
          iVar2 = -1;
          *(byte *)(extraout_ECX_00 + 3) = *(byte *)(extraout_ECX_00 + 3) | 0x20;
          in_EAX = extraout_ECX_00;
          iVar1 = extraout_EDX;
        }
        iVar3 = iVar3 - iVar1;
      }
    }
  }
  in_EAX[1] = 0;
  *in_EAX = in_EAX[2];
  return iVar2;
}

/******************************************************************************
 * Function : sub_0f69e0 (Ghidra: FUN_000f69e0)
 * Prototype: void sub_0f69e0(void);
 * Address  : 0xf69e0 (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe6a10
 * Callees  : 1 -> 0xf6a17
 ******************************************************************************/
void FUN_000f69e0(void)

{
  undefined1 *in_EAX;
  undefined1 *puVar1;
  uint in_ECX;
  uint uVar2;
  undefined1 uVar3;
  uint in_EDX;
  undefined6 uVar4;
  
  if (in_ECX != 0) {
    do {
      if (((uint)in_EAX & 3) == 0) break;
      *in_EAX = (char)in_EDX;
      in_EAX = in_EAX + 1;
      in_EDX = in_EDX >> 8 | in_EDX << 0x18;
      in_ECX = in_ECX - 1;
    } while (in_ECX != 0);
    uVar4 = FUN_000f6a17();
    puVar1 = (undefined1 *)uVar4;
    uVar2 = in_ECX & 3;
    if (uVar2 != 0) {
      uVar3 = (undefined1)((uint6)uVar4 >> 0x20);
      *puVar1 = uVar3;
      if ((uVar2 != 1) && (puVar1[1] = (char)((uint6)uVar4 >> 0x28), uVar2 != 2)) {
        puVar1[2] = uVar3;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f6a17 (Ghidra: FUN_000f6a17)
 * Prototype: void sub_0f6a17(void);
 * Address  : 0xf6a17 (Size: 108 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf69e0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f6a17(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  uint in_ECX;
  int iVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  if (in_ECX != 0) {
    do {
      if (((uint)in_EAX & 0x1f) == 0) break;
      *in_EAX = in_EDX;
      in_EAX = in_EAX + 1;
      in_ECX = in_ECX - 1;
    } while (in_ECX != 0);
    if (in_ECX >> 2 != 0) {
      iVar2 = (in_ECX >> 2) - 1;
      if (iVar2 != 0) {
        do {
          puVar1 = in_EAX;
          *puVar1 = in_EDX;
          puVar1[1] = in_EDX;
          puVar1[2] = in_EDX;
          puVar1[3] = in_EDX;
          if (iVar2 == 1) goto LAB_000f6a56;
          puVar1[4] = in_EDX;
          puVar1[5] = in_EDX;
          iVar2 = iVar2 + -2;
          puVar1[6] = in_EDX;
          puVar1[7] = in_EDX;
          in_EAX = puVar1 + 8;
        } while (iVar2 != 0);
        puVar1 = puVar1 + 4;
LAB_000f6a56:
        in_EAX = puVar1 + 4;
      }
      *in_EAX = in_EDX;
      in_EAX[1] = in_EDX;
      in_EAX[2] = in_EDX;
      in_EAX[3] = in_EDX;
      in_EAX = in_EAX + 4;
    }
    uVar3 = in_ECX & 3;
    if (uVar3 != 0) {
      *in_EAX = in_EDX;
      if (uVar3 != 1) {
        in_EAX[1] = in_EDX;
        if (uVar3 != 2) {
          in_EAX[2] = in_EDX;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f6a84 (Ghidra: FUN_000f6a84)
 * Prototype: undefined8 sub_0f6a84(byte param_1);
 * Address  : 0xf6a84 (Size: 481 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xe74d4, 0xf0870, 0xf5460
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f6a84(byte param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar4;
  byte *pbVar5;
  int local_14;
  int iVar6;
  int local_c;
  int local_8;
  
  iVar1 = DAT_003d981c;
  iVar2 = DAT_003d9844 + -1;
  iVar4 = DAT_003d9848 + -1;
  if (unaff_EBX < in_EAX) {
    if (in_EAX < 0) {
      return CONCAT44(in_EDX,in_EAX);
    }
    if (iVar2 < unaff_EBX) {
      return CONCAT44(in_EDX,in_EAX);
    }
    if (unaff_EBX < 0) {
      unaff_EBX = 0;
    }
    iVar6 = in_EAX;
    local_8 = unaff_EBX;
    if (iVar2 < in_EAX) {
      iVar6 = iVar2;
    }
  }
  else {
    if (unaff_EBX < 0) {
      return CONCAT44(in_EDX,in_EAX);
    }
    if (iVar2 < in_EAX) {
      return CONCAT44(in_EDX,in_EAX);
    }
    local_8 = in_EAX;
    if (in_EAX < 0) {
      local_8 = 0;
    }
    iVar6 = unaff_EBX;
    if (iVar2 < unaff_EBX) {
      iVar6 = iVar2;
    }
  }
  if (in_ECX < in_EDX) {
    if (in_EDX < 0) {
      return CONCAT44(in_EDX,in_EAX);
    }
    if (iVar4 < in_ECX) {
      return CONCAT44(in_EDX,in_EAX);
    }
    if (in_ECX < 0) {
      in_ECX = 0;
    }
    local_14 = in_EDX;
    local_c = in_ECX;
    if (iVar4 < in_EDX) {
      local_14 = iVar4;
    }
  }
  else {
    if (in_ECX < 0) {
      return CONCAT44(in_EDX,in_EAX);
    }
    if (iVar4 < in_EDX) {
      return CONCAT44(in_EDX,in_EAX);
    }
    local_c = in_EDX;
    if (in_EDX < 0) {
      local_c = 0;
    }
    local_14 = in_ECX;
    if (iVar4 < in_ECX) {
      local_14 = iVar4;
    }
  }
  pbVar5 = (byte *)(local_c * DAT_003d9834 + local_8 + DAT_003d9824);
  if (iVar6 - local_8 == 0) {
    iVar2 = (local_14 - local_c) + 1;
    if ((DAT_003d9874 & 4) == 0) {
      if ((DAT_003d9874 & 8) == 0) {
        do {
          *pbVar5 = param_1;
          pbVar5 = pbVar5 + DAT_003d9834;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      else {
        uVar3 = (uint)param_1;
        do {
          uVar3 = (uint)CONCAT11(*pbVar5,(char)uVar3);
          *pbVar5 = *(byte *)(uVar3 + iVar1);
          pbVar5 = pbVar5 + DAT_003d9834;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar4 = (uint)param_1 << 8;
      do {
        iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),*pbVar5);
        *pbVar5 = *(byte *)(iVar4 + iVar1);
        pbVar5 = pbVar5 + DAT_003d9834;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = (iVar6 - local_8) + 1;
    if ((DAT_003d9874 & 4) == 0) {
      if ((DAT_003d9874 & 8) == 0) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pbVar5 = param_1;
          pbVar5 = pbVar5 + 1;
        }
      }
      else {
        uVar3 = (uint)param_1;
        do {
          uVar3 = (uint)CONCAT11(*pbVar5,(char)uVar3);
          *pbVar5 = *(byte *)(uVar3 + iVar1);
          pbVar5 = pbVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar4 = (uint)param_1 << 8;
      do {
        iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),*pbVar5);
        *pbVar5 = *(byte *)(iVar4 + iVar1);
        pbVar5 = pbVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0f6c65 (Ghidra: FUN_000f6c65)
 * Prototype: undefined4 sub_0f6c65(void);
 * Address  : 0xf6c65 (Size: 730 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xe7714, 0xf8a21, 0x10eb2a
 * Callees  : 2 -> 0xf6f3f, 0xf727d
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f6e96) */
/* WARNING: Removing unreachable block (ram,0x000f6ea5) */
/* WARNING: Removing unreachable block (ram,0x000f6dab) */
/* WARNING: Removing unreachable block (ram,0x000f6d4b) */
/* WARNING: Removing unreachable block (ram,0x000f6d67) */
/* WARNING: Removing unreachable block (ram,0x000f6d82) */
/* WARNING: Removing unreachable block (ram,0x000f6d70) */
/* WARNING: Removing unreachable block (ram,0x000f6d79) */
/* WARNING: Removing unreachable block (ram,0x000f6d53) */
/* WARNING: Removing unreachable block (ram,0x000f6cd8) */
/* WARNING: Removing unreachable block (ram,0x000f6cf3) */
/* WARNING: Removing unreachable block (ram,0x000f6d31) */
/* WARNING: Removing unreachable block (ram,0x000f6cfc) */
/* WARNING: Removing unreachable block (ram,0x000f6ce0) */
/* WARNING: Removing unreachable block (ram,0x000f6d93) */
/* WARNING: Removing unreachable block (ram,0x000f6cea) */
/* WARNING: Removing unreachable block (ram,0x000f6f06) */
/* WARNING: Removing unreachable block (ram,0x000f6f11) */
/* WARNING: Removing unreachable block (ram,0x000f6f24) */

undefined4 FUN_000f6c65(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  code *in_ECX;
  char *extraout_ECX;
  char *in_EDX;
  undefined4 *unaff_EBX;
  bool bVar6;
  int local_30;
  int local_2c;
  int local_28;
  char local_1e;
  char local_1d [5];
  code *local_18;
  undefined1 local_14;
  
  local_14 = 0;
  local_18 = in_ECX;
  while( true ) {
    while( true ) {
      cVar3 = *in_EDX;
      if (cVar3 == '\0') {
        return 0;
      }
      in_EDX = in_EDX + 1;
      if (cVar3 == '%') break;
      (*local_18)();
    }
    pcVar5 = (char *)FUN_000f6f3f();
    cVar3 = *pcVar5;
    in_EDX = pcVar5 + 1;
    if (cVar3 == '\0') break;
    if (cVar3 == 'n') {
      puVar4 = (undefined4 *)*unaff_EBX;
      *unaff_EBX = puVar4 + 1;
      *(undefined4 *)*puVar4 = 0;
    }
    else {
      FUN_000f727d();
      if (local_1e == ' ') {
        while (local_30 = local_30 + -1, -1 < local_30) {
          (*local_18)();
        }
      }
      pcVar5 = local_1d;
      while (*pcVar5 != '\0') {
        (*local_18)();
        pcVar5 = extraout_ECX;
      }
      while (iVar1 = local_28 + -1, local_28 != 0) {
        (*local_18)();
        local_28 = iVar1;
      }
      if (local_1e != ' ') {
        while (local_30 = local_30 + -1, -1 < local_30) {
          (*local_18)();
        }
      }
      if ((cVar3 == 's') || (cVar3 == 'S')) {
        while (iVar2 = local_2c + -1, bVar6 = local_2c != 0, local_2c = iVar2, local_28 = iVar1,
              bVar6) {
          (*local_18)();
        }
      }
      else {
        while (iVar2 = local_2c + -1, bVar6 = local_2c != 0, local_2c = iVar2, local_28 = iVar1,
              bVar6) {
          (*local_18)();
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0f6f3f (Ghidra: FUN_000f6f3f)
 * Prototype: byte * sub_0f6f3f(void);
 * Address  : 0xf6f3f (Size: 318 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf6c65
 * Callees  : 1 -> 0xf707d
 ******************************************************************************/
byte * FUN_000f6f3f(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int *in_EDX;
  int unaff_EBX;
  
  *(undefined1 *)(unaff_EBX + 0x17) = 0;
  *(undefined1 *)(unaff_EBX + 0x16) = 0x20;
  pbVar3 = (byte *)FUN_000f707d();
  *(undefined4 *)(unaff_EBX + 4) = 0;
  if ((*pbVar3 < 0x30) || (0x39 < *pbVar3)) {
    if (*pbVar3 == 0x2a) {
      piVar1 = (int *)*in_EDX;
      *in_EDX = (int)(piVar1 + 1);
      iVar2 = *piVar1;
      *(int *)(unaff_EBX + 4) = iVar2;
      if (iVar2 < 0) {
        *(int *)(unaff_EBX + 4) = -iVar2;
        *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) | 8;
      }
      pbVar3 = pbVar3 + 1;
    }
  }
  else {
    do {
      bVar5 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      *(uint *)(unaff_EBX + 4) = *(int *)(unaff_EBX + 4) * 10 + (bVar5 - 0x30);
      if (*pbVar3 < 0x30) break;
    } while (*pbVar3 < 0x3a);
  }
  *(undefined4 *)(unaff_EBX + 8) = 0xffffffff;
  pbVar4 = pbVar3;
  if (*pbVar3 == 0x2e) {
    pbVar4 = pbVar3 + 1;
    *(undefined4 *)(unaff_EBX + 8) = 0;
    if (*pbVar4 == 0x2a) {
      piVar1 = (int *)*in_EDX;
      *in_EDX = (int)(piVar1 + 1);
      iVar2 = *piVar1;
      *(int *)(unaff_EBX + 8) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(unaff_EBX + 8) = 0xffffffff;
      }
      pbVar4 = pbVar3 + 2;
    }
    else {
      while( true ) {
        bVar5 = *pbVar4;
        if ((bVar5 < 0x30) || (bVar5 != 0x39 && 0x38 < bVar5)) break;
        pbVar4 = pbVar4 + 1;
        *(uint *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) * 10 + (bVar5 - 0x30);
      }
    }
  }
  bVar5 = *pbVar4;
  pbVar3 = pbVar4 + 1;
  if (bVar5 < 0x4e) {
    if (0x45 < bVar5) {
      if (0x46 < bVar5) {
        if (bVar5 == 0x4c) {
          *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) | 0x40;
          return pbVar3;
        }
        return pbVar4;
      }
      bVar5 = *(byte *)(unaff_EBX + 0x14) | 0x80;
LAB_000f704d:
      *(byte *)(unaff_EBX + 0x14) = bVar5;
      return pbVar4 + 1;
    }
  }
  else if (bVar5 < 0x4f) {
    *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) | 0x40;
    pbVar4 = pbVar3;
  }
  else {
    if (0x6b < bVar5) {
      if ((0x6c < bVar5) && (bVar5 != 0x77)) {
        return pbVar4;
      }
      bVar5 = *(byte *)(unaff_EBX + 0x14) | 0x20;
      goto LAB_000f704d;
    }
    if (bVar5 != 0x68) {
      return pbVar4;
    }
    *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) | 0x10;
    pbVar4 = pbVar3;
  }
  return pbVar4;
}

/******************************************************************************
 * Function : sub_0f707d (Ghidra: FUN_000f707d)
 * Prototype: char * sub_0f707d(void);
 * Address  : 0xf707d (Size: 95 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf6f3f
 * Callees  : 0 -> 
 ******************************************************************************/
char * FUN_000f707d(void)

{
  char cVar1;
  char *in_EAX;
  int in_EDX;
  
  *(undefined1 *)(in_EDX + 0x14) = 0;
  do {
    cVar1 = *in_EAX;
    if (cVar1 == '-') {
      *(byte *)(in_EDX + 0x14) = *(byte *)(in_EDX + 0x14) | 8;
    }
    else if (cVar1 == '#') {
      *(byte *)(in_EDX + 0x14) = *(byte *)(in_EDX + 0x14) | 1;
    }
    else if (cVar1 == '+') {
      *(byte *)(in_EDX + 0x14) = *(byte *)(in_EDX + 0x14) & 0xfd | 4;
    }
    else if (cVar1 == ' ') {
      if ((*(byte *)(in_EDX + 0x14) & 4) == 0) {
        *(byte *)(in_EDX + 0x14) = *(byte *)(in_EDX + 0x14) | 2;
      }
    }
    else {
      if (cVar1 != '0') {
        return in_EAX;
      }
      *(undefined1 *)(in_EDX + 0x16) = 0x30;
    }
    in_EAX = in_EAX + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0f70dc (Ghidra: FUN_000f70dc)
 * Prototype: void sub_0f70dc(void);
 * Address  : 0xf70dc (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf727d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f70dc(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  int unaff_EBX;
  
  for (iVar2 = 0; (cVar1 = *in_EAX, in_EAX = in_EAX + 1, cVar1 != '\0' && (iVar2 != unaff_EBX));
      iVar2 = iVar2 + 1) {
  }
  return;
}

/******************************************************************************
 * Function : sub_0f7100 (Ghidra: FUN_000f7100)
 * Prototype: void sub_0f7100(void);
 * Address  : 0xf7100 (Size: 35 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf727d
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f7100(void)

{
  short sVar1;
  short *in_EAX;
  int iVar2;
  int unaff_EBX;
  
  for (iVar2 = 0; (sVar1 = *in_EAX, in_EAX = in_EAX + 1, sVar1 != 0 && (iVar2 != unaff_EBX));
      iVar2 = iVar2 + 1) {
  }
  return;
}

/******************************************************************************
 * Function : sub_0f7123 (Ghidra: FUN_000f7123)
 * Prototype: void sub_0f7123(void);
 * Address  : 0xf7123 (Size: 94 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf727d
 * Callees  : 1 -> 0xf5375
 ******************************************************************************/
void FUN_000f7123(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *in_EDX;
  char *pcVar4;
  int unaff_EBX;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  FUN_000f5375();
  uVar3 = 0xffffffff;
  pcVar4 = in_EDX;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  iVar2 = unaff_EBX + -1;
  pcVar4 = in_EDX + (~uVar3 - 1);
  pcVar5 = in_EDX + iVar2;
  while (pcVar4 != in_EDX) {
    pcVar4 = pcVar4 + -1;
    iVar2 = iVar2 + -1;
    *pcVar5 = *pcVar4;
    pcVar5 = pcVar5 + -1;
  }
  pcVar4 = in_EDX + iVar2;
  for (; -1 < iVar2; iVar2 = iVar2 + -1) {
    *pcVar4 = '0';
    pcVar4 = pcVar4 + -1;
  }
  in_EDX[unaff_EBX] = '\0';
  return;
}

/******************************************************************************
 * Function : sub_0f7181 (Ghidra: FUN_000f7181)
 * Prototype: void sub_0f7181(void);
 * Address  : 0xf7181 (Size: 245 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf727d
 * Callees  : 1 -> 0xf5375
 ******************************************************************************/
void FUN_000f7181(void)

{
  undefined1 *in_EAX;
  int iVar1;
  char *extraout_ECX;
  char *pcVar2;
  char *pcVar3;
  uint in_EDX;
  uint uVar4;
  int unaff_EBX;
  undefined4 local_10;
  
  local_10 = in_EDX;
  if ((int)in_EDX < 0) {
    local_10 = -in_EDX;
    *in_EAX = 0x2d;
  }
  if (*(int *)(unaff_EBX + 8) == -1) {
    *(undefined4 *)(unaff_EBX + 8) = 4;
  }
  FUN_000f5375();
  pcVar3 = extraout_ECX;
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (*(int *)(unaff_EBX + 8) != 0) {
    *pcVar2 = '.';
    for (iVar1 = 0; iVar1 < *(int *)(unaff_EBX + 8); iVar1 = iVar1 + 1) {
      local_10 = local_10 & 0xffff;
      uVar4 = local_10 * 10;
      local_10._2_1_ = (char)(uVar4 >> 0x10);
      *pcVar3 = local_10._2_1_ + '0';
      pcVar3 = pcVar3 + 1;
      local_10 = uVar4;
    }
    *pcVar3 = '\0';
    pcVar2 = pcVar3;
  }
  if ((local_10 & 0x8000) != 0) {
    while (pcVar2 != extraout_ECX) {
      pcVar3 = pcVar2 + -1;
      if (*pcVar3 == '.') {
        pcVar3 = pcVar2 + -2;
      }
      if (*pcVar3 != '9') {
        *pcVar3 = *pcVar3 + '\x01';
        return;
      }
      *pcVar3 = '0';
      pcVar2 = pcVar3;
    }
    *extraout_ECX = '1';
    pcVar3 = extraout_ECX + 1;
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar2 + 1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == '.') {
      *pcVar2 = '0';
      pcVar2[1] = '.';
      for (pcVar2 = pcVar2 + 2; *pcVar2 == '0'; pcVar2 = pcVar2 + 1) {
      }
    }
    *pcVar2 = '0';
    pcVar2[1] = '\0';
  }
  return;
}

/******************************************************************************
 * Function : sub_0f7276 (Ghidra: FUN_000f7276)
 * Prototype: void sub_0f7276(void);
 * Address  : 0xf7276 (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf727d
 * Callees  : 1 -> 0x10ffb9
 ******************************************************************************/
void FUN_000f7276(void)

{
  (*(code *)PTR_FUN_0010ffb9_00195e90)();
  return;
}

/******************************************************************************
 * Function : sub_0f727d (Ghidra: FUN_000f727d)
 * Prototype: ulonglong sub_0f727d(void);
 * Address  : 0xf727d (Size: 1257 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf6c65
 * Callees  : 9 -> 0xf5375, 0xf70dc, 0xf7100, 0xf7123, 0xf7181, 0xf7276, 0xf7766, 0x10fff0, 0x11003a
 ******************************************************************************/
ulonglong FUN_000f727d(void)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  bool bVar6;
  ushort *in_EAX;
  uint uVar7;
  int iVar8;
  ushort *in_ECX;
  undefined1 *extraout_ECX;
  undefined1 *puVar9;
  ushort *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  ushort *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  short extraout_DX;
  int *in_EDX;
  int unaff_EBX;
  uint unaff_EBP;
  short in_DS;
  bool bVar10;
  
  bVar6 = true;
  bVar1 = *(byte *)(unaff_EBX + 0x15);
  *(undefined4 *)(unaff_EBX + 0xc) = 0;
  if (bVar1 < 0x69) {
    if (0x57 < bVar1) {
      if (bVar1 < 0x59) goto LAB_000f72d4;
      if (bVar1 == 100) goto LAB_000f7317;
    }
  }
  else {
    if (0x69 < bVar1) {
      if (bVar1 < 0x75) {
        bVar10 = bVar1 == 0x6f;
      }
      else {
        if (bVar1 < 0x76) goto LAB_000f72d4;
        bVar10 = bVar1 == 0x78;
      }
      if (!bVar10) goto LAB_000f7321;
LAB_000f72d4:
      if ((*(byte *)(unaff_EBX + 0x14) & 0x20) == 0) {
        if ((*(byte *)(unaff_EBX + 0x14) & 0x10) == 0) {
          puVar2 = (uint *)*in_EDX;
          *in_EDX = (int)(puVar2 + 1);
          unaff_EBP = *puVar2;
        }
        else {
          puVar4 = (ushort *)*in_EDX;
          *in_EDX = (int)(puVar4 + 2);
          unaff_EBP = (uint)*puVar4;
        }
      }
      else {
        puVar2 = (uint *)*in_EDX;
        *in_EDX = (int)(puVar2 + 1);
        unaff_EBP = *puVar2;
      }
      *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) & 0xf9;
    }
LAB_000f7317:
    if (*(int *)(unaff_EBX + 8) != -1) {
      *(undefined1 *)(unaff_EBX + 0x16) = 0x20;
    }
  }
LAB_000f7321:
  bVar1 = *(byte *)(unaff_EBX + 0x15);
  if (bVar1 < 0x65) {
    if (bVar1 < 0x50) {
      if (bVar1 < 0x46) {
        bVar10 = bVar1 == 0x45;
      }
      else {
        if (bVar1 < 0x47) goto LAB_000f73dc;
        bVar10 = bVar1 == 0x47;
      }
      if (!bVar10) goto LAB_000f768b;
      goto LAB_000f740e;
    }
    if (0x50 < bVar1) {
      if (bVar1 < 0x58) {
        if (bVar1 != 0x53) goto LAB_000f768b;
LAB_000f74b9:
        if ((*(byte *)(unaff_EBX + 0x14) & 0x80) == 0) {
          if ((*(byte *)(unaff_EBX + 0x14) & 0x40) == 0) {
            puVar3 = (undefined4 *)*in_EDX;
            *in_EDX = (int)(puVar3 + 1);
            puVar4 = (ushort *)*puVar3;
          }
          else {
            puVar3 = (undefined4 *)*in_EDX;
            *in_EDX = (int)(puVar3 + 1);
            puVar4 = (ushort *)*puVar3;
          }
          if (puVar4 != (ushort *)0x0) {
            in_ECX = puVar4;
          }
        }
        else {
          puVar3 = (undefined4 *)*in_EDX;
          *in_EDX = (int)(puVar3 + 2);
          if (((ushort *)*puVar3 != (ushort *)0x0) || (*(short *)(puVar3 + 1) != 0)) {
            in_ECX = (ushort *)*puVar3;
            in_DS = *(short *)(puVar3 + 1);
          }
        }
        bVar1 = *(byte *)(unaff_EBX + 0x14);
        bVar6 = false;
        *(byte *)(unaff_EBX + 0x14) = bVar1 & 0xf9;
        if (*(char *)(unaff_EBX + 0x15) == 'S') {
          if ((bVar1 & 0x20) == 0) {
            uVar7 = (uint)(byte)*in_ECX;
            in_EAX = (ushort *)((int)in_ECX + 1);
          }
          else {
            uVar7 = (uint)*in_ECX;
            in_EAX = in_ECX + 1;
          }
        }
        else {
          if ((bVar1 & 0x20) == 0) goto LAB_000f745e;
          uVar7 = FUN_000f7100();
          in_EAX = extraout_ECX_03;
        }
      }
      else {
        if (bVar1 < 0x59) {
LAB_000f7582:
          if (((*(byte *)(unaff_EBX + 0x14) & 1) != 0) && (unaff_EBP != 0)) {
            *(undefined1 *)(unaff_EBX + 0x17) = 0x30;
            *(undefined1 *)(unaff_EBX + 0x19) = 0;
            *(undefined1 *)(unaff_EBX + 0x18) = *(undefined1 *)(unaff_EBX + 0x15);
          }
LAB_000f75a5:
          FUN_0010fff0();
          puVar9 = extraout_ECX_04;
          if (*(char *)(unaff_EBX + 0x15) == 'X') {
            FUN_000f7766();
            puVar9 = extraout_ECX_05;
          }
          goto LAB_000f7442;
        }
        if (bVar1 < 99) goto LAB_000f768b;
        if (99 < bVar1) goto LAB_000f7468;
        pbVar5 = (byte *)*in_EDX;
        *in_EDX = (int)(pbVar5 + 4);
        bVar1 = *pbVar5;
        *(byte *)((int)in_EAX + 1) = 0;
        *(byte *)in_EAX = bVar1;
        *(undefined4 *)(unaff_EBX + 8) = 1;
        bVar6 = false;
        uVar7 = 1;
        *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) & 0xf9;
      }
      goto LAB_000f76b4;
    }
LAB_000f75c8:
    if (*(int *)(unaff_EBX + 4) == 0) {
      if ((*(byte *)(unaff_EBX + 0x14) & 0x80) == 0) {
        *(undefined4 *)(unaff_EBX + 4) = 8;
      }
      else {
        *(undefined4 *)(unaff_EBX + 4) = 0xd;
      }
    }
    *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) & 0xf9;
    iVar8 = *in_EDX;
    *in_EDX = iVar8 + 4;
    if ((*(byte *)(unaff_EBX + 0x14) & 0x80) != 0) {
      *in_EDX = iVar8 + 8;
      FUN_000f7123();
      *(byte *)(in_EAX + 2) = 0x3a;
    }
    FUN_000f7123();
    if (*(char *)(unaff_EBX + 0x15) == 'P') {
      FUN_000f7766();
    }
LAB_000f745e:
    uVar7 = FUN_000f70dc();
    in_EAX = extraout_ECX_00;
  }
  else {
    if (bVar1 < 0x66) {
LAB_000f740e:
      FUN_000f7276();
      in_DS = extraout_DX;
      goto LAB_000f745e;
    }
    if (bVar1 < 0x6f) {
      if (bVar1 < 0x67) {
LAB_000f73dc:
        if ((*(byte *)(unaff_EBX + 0x14) & 0x10) != 0) {
          *in_EDX = *in_EDX + 4;
          FUN_000f7181();
          goto LAB_000f745e;
        }
      }
      else if (0x67 < bVar1) {
        if (bVar1 == 0x69) {
LAB_000f7468:
          if ((*(byte *)(unaff_EBX + 0x14) & 0x20) == 0) {
            if ((*(byte *)(unaff_EBX + 0x14) & 0x10) == 0) {
              *in_EDX = *in_EDX + 4;
              FUN_000f5375();
              puVar9 = extraout_ECX_02;
              goto LAB_000f7442;
            }
            *in_EDX = *in_EDX + 4;
          }
          else {
            *in_EDX = *in_EDX + 4;
          }
          FUN_0011003a();
          puVar9 = extraout_ECX_01;
          goto LAB_000f7442;
        }
        goto LAB_000f768b;
      }
      goto LAB_000f740e;
    }
    if (bVar1 < 0x70) {
      if ((*(byte *)(unaff_EBX + 0x14) & 1) != 0) {
        *(byte *)in_EAX = 0x30;
        in_EAX = (ushort *)((int)in_EAX + 1);
      }
      FUN_0011003a();
      puVar9 = extraout_ECX;
LAB_000f7442:
      if ((*(int *)(unaff_EBX + 8) == 0) && ((byte)*in_EAX == 0x30)) {
        *puVar9 = 0;
      }
      goto LAB_000f745e;
    }
    if (bVar1 < 0x73) {
      if (bVar1 == 0x70) goto LAB_000f75c8;
    }
    else {
      if (bVar1 < 0x74) goto LAB_000f74b9;
      if (0x74 < bVar1) {
        if (bVar1 < 0x76) goto LAB_000f75a5;
        if (bVar1 == 0x78) goto LAB_000f7582;
      }
    }
LAB_000f768b:
    *(undefined4 *)(unaff_EBX + 4) = 0;
    bVar1 = *(byte *)(unaff_EBX + 0x15);
    *(byte *)((int)in_EAX + 1) = 0;
    *(byte *)in_EAX = bVar1;
    *(undefined4 *)(unaff_EBX + 8) = 1;
    bVar6 = false;
    *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) & 0xf9;
    uVar7 = 1;
  }
LAB_000f76b4:
  if (!bVar6) goto LAB_000f7709;
  if ((byte)*in_EAX == 0x2d) {
    *(undefined1 *)(unaff_EBX + 0x17) = 0x2d;
    uVar7 = uVar7 - 1;
LAB_000f76f2:
    *(undefined1 *)(unaff_EBX + 0x18) = 0;
  }
  else {
    if ((*(byte *)(unaff_EBX + 0x14) & 2) != 0) {
      *(undefined1 *)(unaff_EBX + 0x17) = 0x20;
      goto LAB_000f76f2;
    }
    if ((*(byte *)(unaff_EBX + 0x14) & 4) != 0) {
      *(undefined1 *)(unaff_EBX + 0x17) = 0x2b;
      goto LAB_000f76f2;
    }
  }
  if (*(int *)(unaff_EBX + 8) < (int)uVar7) {
    *(uint *)(unaff_EBX + 8) = uVar7;
  }
  else {
    *(uint *)(unaff_EBX + 0xc) = *(int *)(unaff_EBX + 8) - uVar7;
  }
LAB_000f7709:
  if (*(char *)(unaff_EBX + 0x16) == '*') {
    *(undefined1 *)(unaff_EBX + 0x17) = 0;
    *(byte *)(unaff_EBX + 0x14) = *(byte *)(unaff_EBX + 0x14) & 0xf9;
  }
  if (((*(int *)(unaff_EBX + 8) == -1) || ((int)uVar7 < *(int *)(unaff_EBX + 8))) &&
     (*(char *)(unaff_EBX + 0x15) != 'c')) {
    *(uint *)(unaff_EBX + 8) = uVar7;
  }
  iVar8 = FUN_000f70dc();
  *(int *)(unaff_EBX + 4) =
       *(int *)(unaff_EBX + 4) - (iVar8 + *(int *)(unaff_EBX + 8) + *(int *)(unaff_EBX + 0xc));
  return (ulonglong)CONCAT24(in_DS,extraout_ECX_06);
}

/******************************************************************************
 * Function : sub_0f7766 (Ghidra: FUN_000f7766)
 * Prototype: void sub_0f7766(void);
 * Address  : 0xf7766 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf727d
 * Callees  : 1 -> 0xf43c7
 ******************************************************************************/
void FUN_000f7766(void)

{
  undefined1 uVar1;
  char *in_EAX;
  undefined1 *extraout_EDX;
  
  while (*in_EAX != '\0') {
    uVar1 = FUN_000f43c7();
    *extraout_EDX = uVar1;
    in_EAX = extraout_EDX + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f7780 (Ghidra: FUN_000f7780)
 * Prototype: undefined4 sub_0f7780(void);
 * Address  : 0xf7780 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe7750
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f7780(void)

{
  return DAT_001955e4;
}

/******************************************************************************
 * Function : sub_0f7786 (Ghidra: FUN_000f7786)
 * Prototype: void sub_0f7786(void);
 * Address  : 0xf7786 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 22 -> 0xe7750, 0xe792c, 0xe970c, 0xe9760, 0xebc98, 0xebe68, 0xf0cc0, 0xf1018, 0xf1052, 0xf1082 ...
 * Callees  : 2 -> 0xfed1d, 0xfed45
 ******************************************************************************/
void FUN_000f7786(void)

{
  FUN_000fed1d();
  FUN_000fed45();
  return;
}

/******************************************************************************
 * Function : sub_0f77b0 (Ghidra: FUN_000f77b0)
 * Prototype: void sub_0f77b0(void);
 * Address  : 0xf77b0 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f77b0(void)

{
  undefined4 *in_EAX;
  uint uVar1;
  undefined4 *in_EDX;
  uint unaff_EBX;
  
  for (uVar1 = unaff_EBX >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *in_EAX = *in_EDX;
    in_EDX = in_EDX + 1;
    in_EAX = in_EAX + 1;
  }
  for (uVar1 = unaff_EBX & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)in_EAX = *(undefined1 *)in_EDX;
    in_EDX = (undefined4 *)((int)in_EDX + 1);
    in_EAX = (undefined4 *)((int)in_EAX + 1);
  }
  return;
}

/******************************************************************************
 * Function : sub_0f77d0 (Ghidra: FUN_000f77d0)
 * Prototype: void sub_0f77d0(void);
 * Address  : 0xf77d0 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe7904
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_000f77d0(void)

{
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_0f77dc (Ghidra: FUN_000f77dc)
 * Prototype: undefined8 sub_0f77dc(void);
 * Address  : 0xf77dc (Size: 100 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Switch with 1 destination removed at 0x000f7832 : 3 cases all go to same destination */

undefined8 FUN_000f77dc(void)

{
  int in_EAX;
  undefined1 in_CL;
  int iVar1;
  int in_EDX;
  char *unaff_EBX;
  int iVar2;
  
  iVar2 = in_EDX * DAT_003d9834 + in_EAX + DAT_003d9824;
  while( true ) {
    if (*unaff_EBX == '\0') break;
    iVar1 = 6;
    do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      *(undefined1 *)(iVar2 + 2) = in_CL;
      iVar2 = iVar2 + DAT_003d9834;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar2 = iVar2 + DAT_003d9834 * -6 + 4;
    unaff_EBX = unaff_EBX + 1;
  }
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : sub_0f7894 (Ghidra: FUN_000f7894)
 * Prototype: undefined8 sub_0f7894(void);
 * Address  : 0xf7894 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000f7894(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auStack_4 [4];
  
  uVar2 = DAT_001958f4;
  DAT_001958f4 = 0;
  puVar3 = (undefined4 *)auStack_4;
  if (uVar2 == 0) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    uVar2 = uVar2 & 0xff;
    puVar3 = (undefined4 *)register0x00000010;
  }
  return CONCAT44(*puVar3,uVar2);
}

/******************************************************************************
 * Function : sub_0f78b1 (Ghidra: FUN_000f78b1)
 * Prototype: void sub_0f78b1(void);
 * Address  : 0xf78b1 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x110984
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f78b1(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0f78b2 (Ghidra: FUN_000f78b2)
 * Prototype: void sub_0f78b2(void);
 * Address  : 0xf78b2 (Size: 59 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe8960, 0xea3d4
 * Callees  : 1 -> 0x110055
 ******************************************************************************/
void FUN_000f78b2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_00110055();
  return;
}

/******************************************************************************
 * Function : sub_0f78ed (Ghidra: FUN_000f78ed)
 * Prototype: void sub_0f78ed(void);
 * Address  : 0xf78ed (Size: 17 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xe8974, 0xf88e2, 0xf8b7f
 * Callees  : 1 -> 0xf7c2e
 ******************************************************************************/
void FUN_000f78ed(void)

{
  FUN_000f7c2e();
  return;
}

/******************************************************************************
 * Function : sub_0f78fe (Ghidra: FUN_000f78fe)
 * Prototype: void sub_0f78fe(void);
 * Address  : 0xf78fe (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8980
 * Callees  : 1 -> 0xf79bc
 ******************************************************************************/
void FUN_000f78fe(void)

{
  FUN_000f79bc();
  return;
}

/******************************************************************************
 * Function : sub_0f790b (Ghidra: FUN_000f790b)
 * Prototype: int sub_0f790b(void);
 * Address  : 0xf790b (Size: 172 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8980
 * Callees  : 3 -> 0xf8774, 0x1100d1, 0x110126
 ******************************************************************************/
int FUN_000f790b(void)

{
  int iVar1;
  byte bVar4;
  int in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  
  uVar2 = FUN_001100d1();
  if (uVar2 != 0) {
    if ((uVar2 & 0x40) == 0) {
      iVar5 = 0x100;
    }
    else {
      iVar5 = 0x200;
    }
    if (extraout_ECX != iVar5) {
      if ((extraout_ECX != 0x200) && (extraout_ECX != 0x100)) goto LAB_000f7922;
      FUN_00110126();
      for (puVar3 = DAT_003df16c; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
        iVar1 = puVar3[1];
        if ((*(int *)(iVar1 + 0xc) != 0) && (in_EAX == *(int *)(iVar1 + 0x10))) {
          bVar4 = *(byte *)(iVar1 + 0xc) & 0xbf;
          *(byte *)(iVar1 + 0xc) = bVar4;
          if (extraout_ECX_00 != 0x200) {
            return iVar5;
          }
          *(byte *)(iVar1 + 0xc) = bVar4 | 0x40;
          return iVar5;
        }
      }
    }
    return iVar5;
  }
LAB_000f7922:
  FUN_000f8774();
  return -1;
}

/******************************************************************************
 * Function : sub_0f79b7 (Ghidra: FUN_000f79b7)
 * Prototype: longlong sub_0f79b7(void);
 * Address  : 0xf79b7 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe8980, 0xe8a1c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000f79b7(void)

{
  code *pcVar1;
  uint in_ECX;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) == 0) {
    FUN_00110126();
    return (ulonglong)in_ECX << 0x20;
  }
  FUN_000f8774();
  return CONCAT44(in_ECX,0xffffffff);
}

/******************************************************************************
 * Function : sub_0f79bc (Ghidra: FUN_000f79bc)
 * Prototype: void sub_0f79bc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xf79bc (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf78fe
 * Callees  : 1 -> 0xf79e0
 ******************************************************************************/
void FUN_000f79bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000f79e0(param_1,param_2,0,param_3);
  return;
}

/******************************************************************************
 * Function : sub_0f79e0 (Ghidra: FUN_000f79e0)
 * Prototype: undefined8 sub_0f79e0(char *param_1,uint param_2,uint param_3);
 * Address  : 0xf79e0 (Size: 489 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xe8980, 0xe9eda, 0xf79bc
 * Callees  : 5 -> 0xf8774, 0x110060, 0x1100d1, 0x110126, 0x11013b
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000f79e0(char *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  uint auStack_20 [2];
  uint local_18;
  undefined4 local_8;
  
  for (; *param_1 == ' '; param_1 = param_1 + 1) {
  }
  auStack_20[1] = param_2 & 0x83;
  bVar9 = 0;
  uVar8 = 0xffffffff;
  pcVar1 = (code *)swi(0x21);
  iVar4 = (*pcVar1)();
  bVar3 = (bVar9 & 1) != 0;
  uVar2 = (iVar4 << 1 | (uint)bVar9) >> 1;
  auStack_20[1] = uVar2 | (uint)bVar3 << 0x1f;
  if (!bVar3) {
    uVar8 = uVar2 & 0xffff;
  }
  puVar6 = auStack_20 + 1;
  if ((((param_3 & 3) == 0) || (puVar6 = auStack_20 + 1, uVar8 == 0xffffffff)) ||
     (uVar10 = FUN_0011013b(), puVar6 = auStack_20 + 1, (int)uVar10 != 0)) goto LAB_000f7aad;
  if (((param_3 & 0x400) != 0) && ((uVar10 & 0x2000000000) != 0)) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    auStack_20[1] = 0xf7a6b;
    FUN_000f8774();
    uVar8 = 0xffffffff;
    puVar7 = &local_18;
    goto LAB_000f7bc0;
  }
  puVar6 = auStack_20 + 1;
  if ((param_3 & 0x40) == 0) {
LAB_000f7aad:
    puVar7 = puVar6;
    if (uVar8 != 0xffffffff) goto LAB_000f7b4f;
    psVar5 = (short *)puVar6;
    if (((*(byte *)((int)puVar6 + 0x28) & 0x20) != 0) && (*(short *)puVar6 == 2)) {
      bVar9 = 0;
      pcVar1 = (code *)swi(0x21);
      iVar4 = (*pcVar1)();
      psVar5 = (short *)((int)puVar6 + 4);
      puVar7 = (uint *)((int)puVar6 + 4);
      bVar3 = (bVar9 & 1) != 0;
      *(uint *)((int)puVar6 + 4) = (iVar4 << 1 | (uint)bVar9) >> 1 | (uint)bVar3 << 0x1f;
      if (!bVar3) {
        uVar8 = (uint)*(ushort *)((int)puVar6 + 4);
        bVar9 = 0;
        if (*(int *)((int)puVar6 + 0x30) == 0) {
LAB_000f7b4f:
          *(undefined4 *)((int)puVar7 + -4) = 0xf7b56;
          FUN_001100d1();
          *(undefined4 *)((int)puVar7 + -4) = 0xf7b61;
          FUN_0011013b();
          *(byte *)((int)puVar7 + 4) = *(byte *)((int)puVar7 + 4) & 0x7f;
          *(undefined4 *)((int)puVar7 + -4) = 0xf7bbe;
          FUN_00110126();
          goto LAB_000f7bc0;
        }
        pcVar1 = (code *)swi(0x21);
        iVar4 = (*pcVar1)();
        psVar5 = (short *)((int)puVar6 + 8);
        bVar3 = (bVar9 & 1) != 0;
        *(uint *)((int)puVar6 + 8) = (iVar4 << 1 | (uint)bVar9) >> 1 | (uint)bVar3 << 0x1f;
        if (!bVar3) {
          bVar9 = 0;
          pcVar1 = (code *)swi(0x21);
          iVar4 = (*pcVar1)();
          psVar5 = (short *)((int)puVar6 + 0xc);
          puVar7 = (uint *)((int)puVar6 + 0xc);
          bVar3 = (bVar9 & 1) != 0;
          *(uint *)((int)puVar6 + 0xc) = (iVar4 << 1 | (uint)bVar9) >> 1 | (uint)bVar3 << 0x1f;
          if (!bVar3) {
            uVar8 = (uint)*(ushort *)((int)puVar6 + 0xc);
            goto LAB_000f7b4f;
          }
        }
      }
    }
  }
  else {
    bVar9 = 0;
    pcVar1 = (code *)swi(0x21);
    iVar4 = (*pcVar1)();
    puVar6 = &local_18;
    bVar3 = (bVar9 & 1) != 0;
    local_18 = (iVar4 << 1 | (uint)bVar9) >> 1 | (uint)bVar3 << 0x1f;
    if (!bVar3) goto LAB_000f7aad;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    psVar5 = (short *)&stack0xffffffec;
  }
  *(undefined4 *)((int)psVar5 + -4) = 0xf7aa8;
  uVar8 = FUN_00110060();
  puVar7 = (uint *)psVar5;
LAB_000f7bc0:
  return CONCAT44(*(undefined4 *)((int)puVar7 + 0x14),uVar8);
}

/******************************************************************************
 * Function : sub_0f7bc9 (Ghidra: FUN_000f7bc9)
 * Prototype: undefined8 sub_0f7bc9(void);
 * Address  : 0xf7bc9 (Size: 101 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x110060, 0x1100d1, 0x110126
 ******************************************************************************/
undefined8 FUN_000f7bc9(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint in_EDX;
  int extraout_EDX;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  undefined1 auStack_14 [4];
  uint local_c [2];
  
  puVar6 = (uint *)auStack_14;
  local_c[0] = in_EDX;
  uVar3 = FUN_001100d1();
  FUN_00110126();
  bVar7 = 0;
  if ((uVar3 >> 8 & 0x20) == 0) {
LAB_000f7c24:
    uVar4 = 0;
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    puVar5 = (uint *)&stack0xfffffff0;
    if ((bVar7 & 1) == 0) {
      bVar7 = 0;
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      puVar6 = local_c;
      puVar5 = local_c;
      bVar2 = (bVar7 & 1) != 0;
      local_c[0] = (extraout_EDX << 1 | (uint)bVar7) >> 1 | (uint)bVar2 << 0x1f;
      if (!bVar2) goto LAB_000f7c24;
    }
    *(undefined4 *)((int)puVar5 + -4) = 0xf7c07;
    uVar4 = FUN_00110060();
    puVar6 = puVar5;
  }
  return CONCAT44(*(undefined4 *)((int)puVar6 + 8),uVar4);
}

/******************************************************************************
 * Function : sub_0f7c2e (Ghidra: FUN_000f7c2e)
 * Prototype: undefined4 sub_0f7c2e(void);
 * Address  : 0xf7c2e (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0xe8a34, 0xea15f, 0xf143c, 0xf78ed, 0xf7c71, 0xf7f41, 0xf88e2, 0xf8aa6
 * Callees  : 1 -> 0x110060
 ******************************************************************************/
undefined4 FUN_000f7c2e(void)

{
  code *pcVar1;
  uint in_EDX;
  undefined4 unaff_EDI;
  byte bVar2;
  
  bVar2 = (in_EDX >> 0xf & 1) != 0;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bVar2 & 1) != 0) {
    FUN_00110060();
    unaff_EDI = 0xffffffff;
  }
  return unaff_EDI;
}

/******************************************************************************
 * Function : sub_0f7c71 (Ghidra: FUN_000f7c71)
 * Prototype: uint sub_0f7c71(void);
 * Address  : 0xf7c71 (Size: 251 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8a80
 * Callees  : 4 -> 0xf7c2e, 0xf8774, 0x110060, 0x1100d1
 ******************************************************************************/
uint FUN_000f7c71(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *in_EDX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined4 local_24;
  undefined1 local_20 [4];
  uint local_1c;
  
  local_1c = FUN_001100d1();
  if ((local_1c == 0) || ((local_1c & 1) == 0)) {
    FUN_000f8774();
    uVar3 = 0xffffffff;
  }
  else {
    bVar10 = 0;
    if ((local_1c & 0x40) == 0) {
      uVar3 = 0;
      puVar9 = &local_24;
      while( true ) {
        bVar10 = 0;
        pcVar1 = (code *)swi(0x21);
        iVar4 = (*pcVar1)();
        puVar8 = puVar9 + 1;
        bVar2 = (bVar10 & 1) != 0;
        uVar5 = (iVar4 << 1 | (uint)bVar10) >> 1 | (uint)bVar2 << 0x1f;
        puVar9[2] = uVar5;
        if (bVar2) break;
        if (uVar5 == 0) {
          return uVar3;
        }
        puVar9[5] = in_EDX + uVar5;
        iVar4 = 0;
        for (pcVar6 = in_EDX; pcVar6 < (char *)puVar9[5]; pcVar6 = pcVar6 + 1) {
          if (*pcVar6 == '\x1a') {
            *puVar9 = 0xf7d2d;
            FUN_000f7c2e();
            return uVar3;
          }
          iVar7 = iVar4;
          if (*pcVar6 != '\r') {
            uVar3 = uVar3 + 1;
            iVar7 = iVar4 + 1;
            in_EDX[iVar4] = *pcVar6;
          }
          iVar4 = iVar7;
        }
        iVar7 = puVar9[4];
        in_EDX = in_EDX + iVar4;
        puVar9[4] = iVar7 - iVar4;
        if ((*(byte *)((int)puVar9 + 0xd) & 0x20) != 0) {
          return uVar3;
        }
        puVar9 = puVar9 + 1;
        if (iVar7 - iVar4 == 0) {
          return uVar3;
        }
      }
    }
    else {
      pcVar1 = (code *)swi(0x21);
      iVar4 = (*pcVar1)();
      puVar8 = (undefined4 *)local_20;
      bVar2 = (bVar10 & 1) != 0;
      if (!bVar2) {
        return (iVar4 << 1 | (uint)bVar10) >> 1 | (uint)bVar2 << 0x1f;
      }
    }
    *(undefined4 *)((int)puVar8 + -4) = 0xf7cce;
    uVar3 = FUN_00110060();
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_0f7d6c (Ghidra: FUN_000f7d6c)
 * Prototype: uint sub_0f7d6c(void);
 * Address  : 0xf7d6c (Size: 469 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8a8c
 * Callees  : 5 -> 0xf8774, 0x110060, 0x1100d1, 0x110162, 0x1101a5
 ******************************************************************************/
uint FUN_000f7d6c(void)

{
  code *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  char *in_EDX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint unaff_EBX;
  char *pcVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte bVar13;
  char *local_30 [2];
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  uint local_1c;
  char *local_18;
  uint local_14;
  
  ppcVar8 = (char **)&stack0xffffffcc;
  local_30[0] = in_EDX;
  local_24 = FUN_001100d1();
  if ((local_24 == 0) || ((local_24 & 2) == 0)) {
    FUN_000f8774();
    return 0xffffffff;
  }
  if ((local_24 & 0x80) != 0) {
    bVar13 = 0;
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    ppcVar7 = local_30;
    ppcVar8 = local_30;
    bVar2 = (bVar13 & 1) != 0;
    local_1c = CONCAT22((ushort)((ushort)((extraout_EDX & 0xffff) << 1) | (ushort)bVar13) >> 1 |
                        (ushort)bVar2 << 0xf,uVar3);
    if (bVar2) goto LAB_000f7dca;
  }
  bVar13 = 0;
  if ((local_24 & 0x40) == 0) {
    ppcVar8[-1] = (char *)0xf7e1a;
    uVar4 = FUN_00110162();
    if (uVar4 < 0xb0) {
      ppcVar8[-1] = (char *)0xf7e28;
      FUN_001101a5();
      uVar4 = extraout_EDX_00;
    }
    uVar12 = 0x200;
    if (uVar4 < 0x230) {
      uVar12 = 0x80;
    }
    uVar4 = 0;
    local_20 = (undefined1 *)((int)ppcVar8 + -uVar12);
    local_14 = 0;
    local_28 = 0;
    local_18 = local_30[0];
    puVar9 = (undefined4 *)((int)ppcVar8 + -uVar12);
    while (local_14 < unaff_EBX) {
      puVar11 = puVar9;
      if (*local_18 == '\n') {
        local_20[uVar4] = 0xd;
        uVar4 = uVar4 + 1;
        bVar13 = uVar4 < uVar12;
        if (uVar4 == uVar12) {
          pcVar1 = (code *)swi(0x21);
          iVar5 = (*pcVar1)();
          ppcVar7 = (char **)(puVar9 + 1);
          puVar11 = puVar9 + 1;
          bVar2 = (bVar13 & 1) != 0;
          uVar4 = (iVar5 << 1 | (uint)bVar13) >> 1 | (uint)bVar2 << 0x1f;
          local_1c = uVar4;
          if (bVar2) goto LAB_000f7dca;
          puVar10 = puVar9;
          if (uVar4 != uVar12) goto LAB_000f7e9a;
          uVar4 = uVar4 ^ uVar12;
          local_28 = local_14;
        }
      }
      pcVar6 = local_18 + 1;
      local_14 = local_14 + 1;
      local_20[uVar4] = *local_18;
      uVar4 = uVar4 + 1;
      bVar13 = uVar4 < uVar12;
      puVar9 = puVar11;
      local_18 = pcVar6;
      if (uVar4 == uVar12) {
        pcVar1 = (code *)swi(0x21);
        iVar5 = (*pcVar1)();
        ppcVar7 = (char **)((int)puVar11 + 4);
        puVar9 = (undefined4 *)((int)puVar11 + 4);
        bVar2 = (bVar13 & 1) != 0;
        uVar4 = (iVar5 << 1 | (uint)bVar13) >> 1 | (uint)bVar2 << 0x1f;
        local_1c = uVar4;
        if (bVar2) goto LAB_000f7dca;
        puVar10 = puVar11;
        if (uVar4 != uVar12) {
LAB_000f7e9a:
          local_1c = uVar4;
          *puVar10 = 0xf7ea4;
          FUN_000f8774();
          return local_28 + uVar4;
        }
        local_28 = local_14;
        uVar4 = uVar4 ^ uVar12;
      }
    }
    bVar13 = 0;
    if (uVar4 == 0) {
      return unaff_EBX;
    }
    pcVar1 = (code *)swi(0x21);
    iVar5 = (*pcVar1)();
    ppcVar7 = (char **)(puVar9 + 1);
    bVar2 = (bVar13 & 1) != 0;
    uVar12 = (iVar5 << 1 | (uint)bVar13) >> 1 | (uint)bVar2 << 0x1f;
    local_1c = uVar12;
    if (!bVar2) {
      if (uVar12 == uVar4) {
        return unaff_EBX;
      }
      *puVar9 = 0xf7f30;
      FUN_000f8774();
      return local_28 + uVar12;
    }
  }
  else {
    pcVar1 = (code *)swi(0x21);
    iVar5 = (*pcVar1)();
    ppcVar7 = ppcVar8 + 1;
    bVar2 = (bVar13 & 1) != 0;
    uVar4 = (iVar5 << 1 | (uint)bVar13) >> 1 | (uint)bVar2 << 0x1f;
    local_1c = uVar4;
    if (!bVar2) {
      if (uVar4 == unaff_EBX) {
        return unaff_EBX;
      }
      *ppcVar8 = (char *)0xf7e0d;
      FUN_000f8774();
      return uVar4;
    }
  }
LAB_000f7dca:
  *(undefined4 *)((int)ppcVar7 + -4) = 0xf7dd5;
  uVar4 = FUN_00110060();
  return uVar4;
}

/******************************************************************************
 * Function : sub_0f7f41 (Ghidra: FUN_000f7f41)
 * Prototype: undefined8 sub_0f7f41(void);
 * Address  : 0xf7f41 (Size: 61 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe8a98, 0xf143c
 * Callees  : 1 -> 0xf7c2e
 ******************************************************************************/
undefined8 FUN_000f7f41(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000f7c2e();
  if (iVar1 != -1) {
    iVar1 = FUN_000f7c2e();
    FUN_000f7c2e();
  }
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_0f7f7e (Ghidra: FUN_000f7f7e)
 * Prototype: void sub_0f7f7e(void);
 * Address  : 0xf7f7e (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8ac4
 * Callees  : 2 -> 0xf7fba, 0x1101b4
 ******************************************************************************/
void FUN_000f7f7e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_001101b4();
  FUN_000f7fba();
  return;
}

/******************************************************************************
 * Function : sub_0f7f9b (Ghidra: FUN_000f7f9b)
 * Prototype: void sub_0f7f9b(void);
 * Address  : 0xf7f9b (Size: 28 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe8af0
 * Callees  : 3 -> 0xf7fba, 0xf7fdd, 0x1101b4
 ******************************************************************************/
void FUN_000f7f9b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_000f7fdd();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_001101b4();
  FUN_000f7fba();
  return;
}

/******************************************************************************
 * Function : sub_0f7fba (Ghidra: FUN_000f7fba)
 * Prototype: void sub_0f7fba(void);
 * Address  : 0xf7fba (Size: 35 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf7f7e, 0xf7f9b
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f7fba(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *extraout_EDX;
  undefined1 *unaff_EBX;
  undefined1 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (DAT_00195902 == '\t') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    puVar3 = extraout_EDX;
    for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *unaff_EBX;
      unaff_EBX = unaff_EBX + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f7fdd (Ghidra: FUN_000f7fdd)
 * Prototype: void sub_0f7fdd(void);
 * Address  : 0xf7fdd (Size: 35 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf7f9b
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f7fdd(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *extraout_EDX;
  undefined1 *unaff_EBX;
  undefined1 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (DAT_00195902 == '\t') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    puVar3 = extraout_EDX;
    for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *unaff_EBX = *puVar3;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      unaff_EBX = unaff_EBX + (uint)bVar4 * -2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f8000 (Ghidra: FUN_000f8000)
 * Prototype: undefined4 sub_0f8000(void);
 * Address  : 0xf8000 (Size: 46 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x110060
 ******************************************************************************/
undefined4 FUN_000f8000(void)

{
  code *pcVar1;
  undefined4 uVar2;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) != 0) {
    uVar2 = FUN_00110060();
    return uVar2;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0f802e (Ghidra: FUN_000f802e)
 * Prototype: undefined8 sub_0f802e(void);
 * Address  : 0xf802e (Size: 91 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf8089, 0xf8094
 * Callees  : 1 -> 0x1101c7
 ******************************************************************************/
undefined8 FUN_000f802e(void)

{
  undefined4 in_EDX;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_14;
  undefined1 local_13;
  
  FUN_001101c7();
  return CONCAT44(in_EDX,(uint)local_14 +
                         (((uint)local_18 + (uint)local_17 * 0x3c) * 0x3c + (uint)local_13) * 100);
}

/******************************************************************************
 * Function : sub_0f8089 (Ghidra: FUN_000f8089)
 * Prototype: void sub_0f8089(void);
 * Address  : 0xf8089 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf802e
 ******************************************************************************/
void FUN_000f8089(void)

{
  DAT_003df164 = FUN_000f802e();
  return;
}

/******************************************************************************
 * Function : sub_0f8094 (Ghidra: FUN_000f8094)
 * Prototype: undefined8 sub_0f8094(void);
 * Address  : 0xf8094 (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf802e
 ******************************************************************************/
undefined8 FUN_000f8094(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = FUN_000f802e();
  if (uVar1 < DAT_003df164) {
    uVar1 = uVar1 + 0x83d600;
  }
  return CONCAT44(in_EDX,uVar1 - DAT_003df164);
}

/******************************************************************************
 * Function : sub_0f80bc (Ghidra: FUN_000f80bc)
 * Prototype: void sub_0f80bc(void);
 * Address  : 0xf80bc (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f80bc(void)

{
  PTR_FUN_0010ffb9_00195e90 = FUN_00110215;
  PTR_FUN_0010ffb9_00195e94 = FUN_00110358;
  return;
}

/******************************************************************************
 * Function : sub_0f80d8 (Ghidra: FUN_000f80d8)
 * Prototype: longdouble sub_0f80d8(void);
 * Address  : 0xf80d8 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf8108
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f80e8) */

longdouble FUN_000f80d8(void)

{
  int unaff_EBP;
  
  if (unaff_EBP != 0) {
    FUN_000f8108();
  }
  return (longdouble)0;
}

/******************************************************************************
 * Function : sub_0f8108 (Ghidra: FUN_000f8108)
 * Prototype: void sub_0f8108(void);
 * Address  : 0xf8108 (Size: 203 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf80d8
 * Callees  : 4 -> 0xf81d3, 0xf81f0, 0xf823d, 0x11358e
 ******************************************************************************/
void FUN_000f8108(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ushort in_CR0;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  DAT_00195448 = 3;
  DAT_0019595c = 1;
  DAT_0019595a = in_CR0 & 6;
  uVar1 = InterruptDescriptorTableRegister();
  uStack_6 = (undefined2)((uint)uVar1 >> 0x10);
  iVar3 = CONCAT22(uStack_4,uStack_6);
  if (DAT_00195904 == '\0') {
    if (DAT_00195902 == '\0') {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
    else if (DAT_00195902 == '\t') {
      FUN_000f81d3();
      *(undefined4 *)(iVar3 + 0x38) = extraout_EDX_00;
      *(undefined4 *)(iVar3 + 0x3c) = extraout_ECX_00;
      (**(code **)(DAT_001955b8 + 0x30))();
    }
    else if (DAT_00195902 == '\x01') {
      FUN_0011358e();
    }
    else {
      cVar4 = FUN_0011358e();
      if (cVar4 != '\x01') {
        FUN_000f81f0();
      }
    }
  }
  else {
    FUN_000f81d3();
    *(undefined4 *)(iVar3 + 0x38) = extraout_EDX;
    *(undefined4 *)(iVar3 + 0x3c) = extraout_ECX;
    FUN_000f823d();
  }
  return;
}

/******************************************************************************
 * Function : sub_0f81d3 (Ghidra: FUN_000f81d3)
 * Prototype: void sub_0f81d3(void);
 * Address  : 0xf81d3 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf8108
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f81d3(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0f81f0 (Ghidra: FUN_000f81f0)
 * Prototype: void sub_0f81f0(void);
 * Address  : 0xf81f0 (Size: 77 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf8108
 * Callees  : 1 -> 0xf823d
 ******************************************************************************/
void FUN_000f81f0(void)

{
  code *pcVar1;
  undefined4 unaff_EBX;
  undefined2 in_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  DAT_00195954 = unaff_EBX;
  DAT_00195958 = in_ES;
  if (DAT_00195902 < '\x03') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_000f823d();
  }
  return;
}

/******************************************************************************
 * Function : sub_0f823d (Ghidra: FUN_000f823d)
 * Prototype: void sub_0f823d(void);
 * Address  : 0xf823d (Size: 32 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf8108, 0xf81f0
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f823d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  _DAT_00195914 = _DAT_00195914 & 0xfffffffd | 4;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}

/******************************************************************************
 * Function : sub_0f825d (Ghidra: FUN_000f825d)
 * Prototype: void sub_0f825d(void);
 * Address  : 0xf825d (Size: 122 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xf82d7, 0xf8312, 0x113662
 ******************************************************************************/
void FUN_000f825d(void)

{
  code *pcVar1;
  char cVar2;
  
  if (DAT_0019595c != '\x01') {
    return;
  }
  if (DAT_00195904 == '\0') {
    if (DAT_00195902 == '\t') {
      (**(code **)(DAT_001955b8 + 0x30))();
    }
    else if (DAT_00195902 == '\0') {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    else if (DAT_00195902 == '\x01') {
      FUN_00113662();
    }
    else {
      cVar2 = FUN_00113662();
      if (cVar2 != '\x01') {
        FUN_000f82d7();
      }
    }
  }
  else {
    FUN_000f8312();
  }
  DAT_0019595c = 0;
  return;
}

/******************************************************************************
 * Function : sub_0f82d7 (Ghidra: FUN_000f82d7)
 * Prototype: void sub_0f82d7(void);
 * Address  : 0xf82d7 (Size: 59 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf825d
 * Callees  : 1 -> 0xf8312
 ******************************************************************************/
void FUN_000f82d7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ('\x02' < DAT_00195902) {
    FUN_000f8312();
  }
  return;
}

/******************************************************************************
 * Function : sub_0f8312 (Ghidra: FUN_000f8312)
 * Prototype: void sub_0f8312(void);
 * Address  : 0xf8312 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf825d, 0xf82d7
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8312(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  _DAT_00195914 = (uint)DAT_0019595a;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}

/******************************************************************************
 * Function : sub_0f8333 (Ghidra: FUN_000f8333)
 * Prototype: void sub_0f8333(void);
 * Address  : 0xf8333 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f8333(void)

{
  undefined2 *in_EAX;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  undefined4 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  *in_EAX = in_FPUControlWord;
  in_EAX[2] = in_FPUStatusWord;
  in_EAX[4] = in_FPUTagWord;
  *(undefined4 *)(in_EAX + 10) = in_FPUDataPointer;
  *(undefined4 *)(in_EAX + 6) = in_FPUInstructionPointer;
  in_EAX[9] = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(in_EAX + 0xe) = in_ST0;
  *(unkbyte10 *)(in_EAX + 0x13) = in_ST1;
  *(unkbyte10 *)(in_EAX + 0x18) = in_ST2;
  *(unkbyte10 *)(in_EAX + 0x1d) = in_ST3;
  *(unkbyte10 *)(in_EAX + 0x22) = in_ST4;
  *(unkbyte10 *)(in_EAX + 0x27) = in_ST5;
  *(unkbyte10 *)(in_EAX + 0x2c) = in_ST6;
  *(unkbyte10 *)(in_EAX + 0x31) = in_ST7;
  return;
}

/******************************************************************************
 * Function : sub_0f8338 (Ghidra: FUN_000f8338)
 * Prototype: unkbyte10 sub_0f8338(void);
 * Address  : 0xf8338 (Size: 4 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
unkbyte10 FUN_000f8338(void)

{
  int in_EAX;
  
  return *(unkbyte10 *)(in_EAX + 0x1c);
}

/******************************************************************************
 * Function : sub_0f833c (Ghidra: FUN_000f833c)
 * Prototype: void sub_0f833c(void);
 * Address  : 0xf833c (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf8377
 * Callees  : 1 -> 0x1136bc
 ******************************************************************************/
void FUN_000f833c(void)

{
  if (DAT_00195449 != '\0') {
    PTR_FUN_001136bb_00195fa0 = FUN_000f8333;
    PTR_FUN_001136bb_00195fa4 = FUN_000f8338;
  }
  FUN_001136bc();
  return;
}

/******************************************************************************
 * Function : sub_0f8377 (Ghidra: FUN_000f8377)
 * Prototype: void sub_0f8377(void);
 * Address  : 0xf8377 (Size: 70 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf833c
 ******************************************************************************/
void FUN_000f8377(void)

{
  char cVar1;
  
  if (DAT_00195448 == '\0') {
    DAT_00195449 = DAT_00195448;
    cVar1 = FUN_000f833c();
    if (DAT_00195900 == '\0') {
      DAT_00195448 = cVar1;
      DAT_00195449 = cVar1;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_undefined_constructor_destructor_called_0f83c0 (Ghidra: FUN_000f83c0)
 * Prototype: void dk_undefined_constructor_destructor_called_0f83c0(void);
 * Address  : 0xf83c0 (Size: 18 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'undefined constructor or destructor called!'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1136e4
 * Strings  :
 *   - 0x16f5d4: "undefined constructor or destructor called!"
 ******************************************************************************/
void FUN_000f83c0(void)

{
  FUN_001136e4();
  return;
}

/******************************************************************************
 * Function : sub_0f83d4 (Ghidra: FUN_000f83d4)
 * Prototype: void sub_0f83d4(void);
 * Address  : 0xf83d4 (Size: 92 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1138d2
 ******************************************************************************/
void FUN_000f83d4(void)

{
  undefined4 *extraout_EDX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  while (DAT_00195fac != (undefined4 *)0x0) {
    local_18 = DAT_003d97d0;
    local_14 = DAT_00195fac[1];
    local_10 = DAT_00195fac[2];
    if (*(int *)DAT_00195fac[1] == 4) {
      local_c = DAT_00195fac[3];
    }
    DAT_00195fac = (undefined4 *)*DAT_00195fac;
    DAT_003d97d0 = &local_18;
    FUN_001138d2();
    *extraout_EDX = 0;
    DAT_003d97d0 = (undefined4 *)*DAT_003d97d0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f8430 (Ghidra: FUN_000f8430)
 * Prototype: int sub_0f8430(void);
 * Address  : 0xf8430 (Size: 4 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000f8430(void)

{
  int in_EAX;
  
  return in_EAX + 4;
}

/******************************************************************************
 * Function : sub_0f8434 (Ghidra: FUN_000f8434)
 * Prototype: undefined4 sub_0f8434(void);
 * Address  : 0xf8434 (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f8434(void)

{
  int in_EAX;
  int in_EDX;
  
  return *(undefined4 *)(*(int *)(in_EAX + 4) + in_EDX * 8);
}

/******************************************************************************
 * Function : sub_0f843b (Ghidra: FUN_000f843b)
 * Prototype: void sub_0f843b(void);
 * Address  : 0xf843b (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f843b(void)

{
  int in_EAX;
  
  *(undefined1 *)(in_EAX + 8) = 0;
  return;
}

/******************************************************************************
 * Function : sub_0f8440 (Ghidra: FUN_000f8440)
 * Prototype: void sub_0f8440(void);
 * Address  : 0xf8440 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8440(void)

{
  _DAT_003d9800 = &PTR_FUN_000f8430_00195960;
  return;
}

/******************************************************************************
 * Function : sub_0f844b (Ghidra: FUN_000f844b)
 * Prototype: void sub_0f844b(void);
 * Address  : 0xf844b (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe9460, 0x1244d0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f844b(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = DAT_00195fac;
  DAT_00195fac = in_EAX;
  return;
}

/******************************************************************************
 * Function : sub_0f845c (Ghidra: FUN_000f845c)
 * Prototype: undefined8 sub_0f845c(void);
 * Address  : 0xf845c (Size: 401 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xe984c, 0xf23de, 0x114acb
 * Callees  : 4 -> 0xf85f9, 0xf8602, 0xf8645, 0xf86c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000f845c(void)

{
  ushort uVar1;
  short *in_EAX;
  short extraout_CX;
  uint uVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  ushort uVar4;
  ushort *in_EDX;
  ushort *puVar5;
  ushort *puVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  if ((*in_EAX == 0x4e52) && (in_EAX[1] == 0x143)) {
    DAT_00195aec = FUN_000f85f9();
    _DAT_00195af0 = FUN_000f85f9();
    DAT_00195afc = *(char *)((int)in_EAX + 9);
    puVar8 = (ushort *)(in_EAX + 5);
    puVar5 = (ushort *)((int)in_EAX + _DAT_00195af0 + 0x12);
    if ((in_EDX < puVar5) &&
       (puVar6 = (ushort *)((int)in_EDX + (uint)*(byte *)(in_EAX + 8) + DAT_00195aec),
       puVar5 < puVar6)) {
      uVar2 = _DAT_00195af0 >> 2;
      puVar8 = puVar6;
      while( true ) {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        *(undefined4 *)(puVar8 + -2) = *(undefined4 *)(puVar5 + -2);
        puVar5 = puVar5 + -2;
        puVar8 = puVar8 + -2;
      }
      uVar2 = _DAT_00195af0 & 3;
      if ((short)uVar2 != 0) {
        while( true ) {
          puVar5 = (ushort *)((int)puVar5 + -1);
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          *(undefined1 *)((int)puVar8 + -1) = *(undefined1 *)puVar5;
          puVar8 = (ushort *)((int)puVar8 + -1);
        }
      }
      bVar9 = 0;
    }
    DAT_00195afd = 0;
    DAT_00195af8 = *puVar8;
    FUN_000f8645();
    puVar5 = in_EDX;
    do {
      FUN_000f86c8();
      FUN_000f86c8();
      FUN_000f86c8();
      _DAT_00195af6 = FUN_000f8645();
      while( true ) {
        FUN_000f8602();
        iVar3 = extraout_ECX_00;
        if ((short)extraout_ECX_00 != 0) {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(char *)puVar5 = (char)*puVar8;
            puVar8 = (ushort *)((int)puVar8 + (uint)bVar9 * -2 + 1);
            puVar5 = (ushort *)((int)puVar5 + (uint)bVar9 * -2 + 1);
          }
          uVar1 = *puVar8;
          uVar4 = (1 << (DAT_00195afd & 0x1f)) - 1;
          DAT_00195af8 = DAT_00195af8 & uVar4;
          DAT_00195afa = puVar8[1] << (DAT_00195afd & 0x1f) |
                         uVar4 & (uVar1 << (DAT_00195afd & 0xf) |
                                 uVar1 >> 0x10 - (DAT_00195afd & 0xf));
          DAT_00195af8 = DAT_00195af8 | uVar1 << (DAT_00195afd & 0x1f);
        }
        _DAT_00195af6 = _DAT_00195af6 + -1;
        if (_DAT_00195af6 == 0) break;
        FUN_000f8602();
        FUN_000f8602();
        puVar7 = (undefined1 *)((int)puVar5 - (uint)(ushort)(extraout_CX + 1));
        for (iVar3 = CONCAT22((short)((uint)extraout_ECX >> 0x10),(short)extraout_ECX + 2);
            iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar5 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar5 = (ushort *)((int)puVar5 + (uint)bVar9 * -2 + 1);
        }
      }
      DAT_00195afc = DAT_00195afc + -1;
      iVar3 = DAT_00195aec;
    } while (DAT_00195afc != '\0');
  }
  else {
    iVar3 = 0;
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0f85f9 (Ghidra: FUN_000f85f9)
 * Prototype: undefined4 sub_0f85f9(void);
 * Address  : 0xf85f9 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf845c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f85f9(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  return CONCAT22(CONCAT11((char)uVar1,(char)((uint)uVar1 >> 8)),
                  CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18)));
}

/******************************************************************************
 * Function : sub_0f8602 (Ghidra: FUN_000f8602)
 * Prototype: ushort sub_0f8602(void);
 * Address  : 0xf8602 (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf845c
 * Callees  : 1 -> 0xf8645
 ******************************************************************************/
ushort FUN_000f8602(void)

{
  ushort *puVar1;
  ushort uVar2;
  byte extraout_CL;
  byte extraout_CL_00;
  ushort *in_EDX;
  
  do {
    puVar1 = in_EDX + 1;
    uVar2 = *in_EDX;
    in_EDX = in_EDX + 2;
  } while (*puVar1 != (uVar2 & DAT_00195af8));
  uVar2 = FUN_000f8645();
  if (1 < extraout_CL) {
    uVar2 = FUN_000f8645();
    uVar2 = uVar2 | 1 << (extraout_CL_00 & 0x1f);
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0f8645 (Ghidra: FUN_000f8645)
 * Prototype: ushort sub_0f8645(void);
 * Address  : 0xf8645 (Size: 131 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xf845c, 0xf8602, 0xf86c8
 * Callees  : 0 -> 
 ******************************************************************************/
ushort FUN_000f8645(void)

{
  byte in_AL;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int unaff_ESI;
  
  uVar3 = (1 << (in_AL & 0x1f)) - 1U & DAT_00195af8;
  cVar1 = DAT_00195afd - in_AL;
  if (DAT_00195afd < in_AL) {
    bVar2 = cVar1 + in_AL;
    uVar4 = (1 << (bVar2 & 0x1f)) - 1U & DAT_00195afa;
    DAT_00195af8 = DAT_00195af8 >> (bVar2 & 0x1f) |
                   uVar4 >> (bVar2 & 0xf) | uVar4 << 0x10 - (bVar2 & 0xf);
    DAT_00195afa = *(ushort *)(unaff_ESI + 2);
    in_AL = in_AL - bVar2;
    cVar1 = '\x10' - in_AL;
  }
  uVar4 = (1 << (in_AL & 0x1f)) - 1U & DAT_00195afa;
  DAT_00195afa = DAT_00195afa >> (in_AL & 0x1f);
  DAT_00195af8 = DAT_00195af8 >> (in_AL & 0x1f) |
                 uVar4 >> (in_AL & 0xf) | uVar4 << 0x10 - (in_AL & 0xf);
  DAT_00195afd = cVar1;
  return uVar3;
}

/******************************************************************************
 * Function : sub_0f86c8 (Ghidra: FUN_000f86c8)
 * Prototype: void sub_0f86c8(void);
 * Address  : 0xf86c8 (Size: 153 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf845c
 * Callees  : 1 -> 0xf8645
 ******************************************************************************/
void FUN_000f86c8(void)

{
  int iVar1;
  uint3 uVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  int extraout_ECX;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  ushort *in_EDX;
  ushort uVar11;
  ushort uVar12;
  byte *pbVar13;
  ushort *puVar14;
  bool bVar15;
  byte bVar16;
  undefined1 auStack_28 [8];
  undefined2 uStack_20;
  undefined2 uStack_1e;
  byte local_18 [16];
  ushort *local_8;
  
  bVar16 = 0;
  pbVar13 = local_18;
  local_8 = in_EDX;
  uVar6 = FUN_000f8645();
  if (uVar6 != 0) {
    do {
      uStack_20 = 0x86e6;
      uStack_1e = 0xf;
      uVar4 = FUN_000f8645();
      *pbVar13 = uVar4;
      pbVar13 = pbVar13 + 1;
    } while (extraout_ECX != 1);
    bVar5 = 1;
    uVar11 = 0;
    uVar10 = 0x8000;
    uVar9 = (uint)uVar6;
    pbVar13 = local_18;
    do {
      do {
        if (bVar5 == *pbVar13) {
          puVar14 = local_8 + (uint)bVar16 * -2 + 1;
          *local_8 = (1 << (bVar5 & 0x1f)) - 1;
          iVar8 = CONCAT31((int3)(uVar9 >> 8),bVar5);
          bVar15 = false;
          uVar7 = 0;
          uVar12 = uVar11 >> (0x10 - bVar5 & 0x1f);
          do {
            uVar2 = CONCAT12(bVar15,uVar12);
            bVar3 = (uVar12 & 1) != 0;
            iVar1 = uVar7 << 1;
            bVar15 = (uVar7 & 0x8000) != 0;
            iVar8 = iVar8 + -1;
            uVar7 = (uVar7 & 0x7fff) << 1 | (uint)bVar3;
            uVar12 = (ushort)(uVar2 >> 1);
          } while (iVar8 != 0);
          local_8 = puVar14 + (uint)bVar16 * -2 + 1;
          *puVar14 = (ushort)iVar1 | (ushort)bVar3;
          local_8[0x1e] = CONCAT11(*pbVar13,((char)pbVar13 - (char)auStack_28) + -0x10);
          uVar9 = uVar9 & 0xffff;
          uVar11 = uVar11 + uVar10;
        }
        uVar9 = uVar9 - 1;
        pbVar13 = pbVar13 + 1;
      } while (uVar9 != 0);
      uVar10 = uVar10 >> 1;
      bVar5 = bVar5 + 1;
      uVar9 = (uint)uVar6;
      pbVar13 = local_18;
    } while (bVar5 != 0x11);
  }
  return;
}

/******************************************************************************
 * Function : sub_0f8761 (Ghidra: FUN_000f8761)
 * Prototype: void sub_0f8761(void);
 * Address  : 0xf8761 (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xe9e09, 0xe9eda, 0xf8ccf, 0x11fdee, 0x12235f
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f8761(void)

{
  return;
}

/******************************************************************************
 * Function : sub_0f876f (Ghidra: FUN_000f876f)
 * Prototype: void sub_0f876f(void);
 * Address  : 0xf876f (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1285fe
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f876f(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001138f7();
  *(undefined4 *)uVar1 = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

/******************************************************************************
 * Function : sub_0f8774 (Ghidra: FUN_000f8774)
 * Prototype: void sub_0f8774(void);
 * Address  : 0xf8774 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 18 -> 0xe9e09, 0xe9fe1, 0xf790b, 0xf79e0, 0xf7c71, 0xf7d6c, 0xf8780, 0xf87a3, 0xf88e2, 0xf8aa6 ...
 * Callees  : 1 -> 0x1138f7
 ******************************************************************************/
void FUN_000f8774(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001138f7();
  *(undefined4 *)uVar1 = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

/******************************************************************************
 * Function : sub_0f8780 (Ghidra: FUN_000f8780)
 * Prototype: void sub_0f8780(void);
 * Address  : 0xf8780 (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x120af4, 0x1285fe
 * Callees  : 1 -> 0xf8774
 ******************************************************************************/
void FUN_000f8780(void)

{
  FUN_000f8774();
  return;
}

/******************************************************************************
 * Function : sub_0f8797 (Ghidra: FUN_000f8797)
 * Prototype: void sub_0f8797(void);
 * Address  : 0xf8797 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x110060
 * Callees  : 1 -> 0x1138fd
 ******************************************************************************/
void FUN_000f8797(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001138fd();
  *(undefined4 *)uVar1 = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

/******************************************************************************
 * Function : sub_0f87a3 (Ghidra: FUN_000f87a3)
 * Prototype: undefined8 sub_0f87a3(void);
 * Address  : 0xf87a3 (Size: 166 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9f9e
 * Callees  : 3 -> 0xe6a10, 0xf4cb8, 0xf8774
 ******************************************************************************/
undefined8 FUN_000f87a3(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar4;
  
  if (DAT_003df168 == (undefined4 *)0x0) {
    for (puVar3 = &DAT_00195b00; puVar3 < &DAT_00195d08; puVar3 = puVar3 + 0x1a) {
      if ((puVar3[0xc] & 3) == 0) {
        puVar1 = (undefined4 *)FUN_000f4cb8();
        if (puVar1 == (undefined4 *)0x0) goto LAB_000f8837;
        uVar4 = 3;
        goto LAB_000f8812;
      }
    }
    uVar4 = 0x4003;
    puVar1 = (undefined4 *)FUN_000f4cb8();
    if (puVar1 == (undefined4 *)0x0) {
LAB_000f8837:
      FUN_000f8774();
      iVar2 = 0;
      goto LAB_000f8843;
    }
  }
  else {
    uVar4 = (uint)((ushort)*(undefined4 *)(DAT_003df168[1] + 0xc) & 0x4003 | 3);
    puVar1 = DAT_003df168;
    DAT_003df168 = (undefined4 *)*DAT_003df168;
  }
LAB_000f8812:
  FUN_000e6a10();
  *(uint *)(extraout_ECX + 0xc) = uVar4;
  puVar1[1] = extraout_ECX;
  *puVar1 = DAT_003df16c;
  DAT_003df16c = puVar1;
  iVar2 = extraout_ECX;
LAB_000f8843:
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0f8849 (Ghidra: FUN_000f8849)
 * Prototype: void sub_0f8849(void);
 * Address  : 0xf8849 (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe9eda, 0xea0d9
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f8849(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  puVar1 = &DAT_003df16c;
  do {
    puVar2 = puVar1;
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
  } while (in_EAX != puVar1[1]);
  *(byte *)(in_EAX + 0xc) = *(byte *)(puVar1[1] + 0xc) | 3;
  *puVar2 = *puVar1;
  *puVar1 = DAT_003df168;
  DAT_003df168 = puVar1;
  return;
}

/******************************************************************************
 * Function : sub_0f8882 (Ghidra: FUN_000f8882)
 * Prototype: void sub_0f8882(void);
 * Address  : 0xf8882 (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11397a
 * Callees  : 1 -> 0xf4d9b
 ******************************************************************************/
void FUN_000f8882(void)

{
  int extraout_EDX;
  
  while (DAT_003df168 != 0) {
    FUN_000f4d9b();
    DAT_003df168 = extraout_EDX;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f88a0 (Ghidra: FUN_000f88a0)
 * Prototype: undefined4 sub_0f88a0(void);
 * Address  : 0xf88a0 (Size: 66 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf88e2
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f88a0(void)

{
  int in_EAX;
  int *in_EDX;
  
  *(byte *)(in_EDX + 3) = *(byte *)(in_EDX + 3) & 0xef;
  if ((in_EAX <= in_EDX[1]) && (in_EDX[2] - *in_EDX <= in_EAX)) {
    *in_EDX = *in_EDX + in_EAX;
    in_EDX[1] = in_EDX[1] - in_EAX;
    return 0;
  }
  in_EDX[1] = 0;
  *in_EDX = in_EDX[2];
  return 1;
}

/******************************************************************************
 * Function : sub_0f88e2 (Ghidra: FUN_000f88e2)
 * Prototype: undefined4 sub_0f88e2(void);
 * Address  : 0xf88e2 (Size: 252 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe9eda
 * Callees  : 5 -> 0xf78ed, 0xf7c2e, 0xf8774, 0xf88a0, 0xf8aa6
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f895c) */

undefined4 FUN_000f88e2(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *extraout_ECX;
  int in_EDX;
  uint unaff_EBX;
  
  if ((*(byte *)(in_EAX + 3) & 6) == 0) {
    if (unaff_EBX == 0) {
      FUN_000f78ed();
      iVar1 = FUN_000f88a0();
      if ((iVar1 != 0) && (iVar1 = FUN_000f7c2e(), iVar1 == -1)) {
        return 0xffffffff;
      }
    }
    else if (unaff_EBX < 2) {
      iVar1 = FUN_000f88a0();
      if ((iVar1 != 0) && (iVar1 = FUN_000f7c2e(), iVar1 == -1)) {
        return 0xffffffff;
      }
    }
    else {
      if (unaff_EBX != 2) goto LAB_000f8908;
      *in_EAX = in_EAX[2];
      *(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) & 0xef;
      in_EAX[1] = 0;
      iVar1 = FUN_000f7c2e();
      if (iVar1 == -1) {
        return 0xffffffff;
      }
    }
  }
  else {
    if ((*(byte *)((int)in_EAX + 0xd) & 0x10) == 0) {
      in_EAX[1] = 0;
      *in_EAX = in_EAX[2];
    }
    else {
      iVar1 = FUN_000f8aa6();
      in_EAX = extraout_ECX;
      if (iVar1 != 0) {
        if (unaff_EBX != 0) {
          return 0xffffffff;
        }
        if (-1 < in_EDX) {
          return 0xffffffff;
        }
LAB_000f8908:
        FUN_000f8774();
        return 0xffffffff;
      }
    }
    *(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) & 0xeb;
    iVar1 = FUN_000f7c2e();
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0f89de (Ghidra: FUN_000f89de)
 * Prototype: void sub_0f89de(void);
 * Address  : 0xf89de (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xe9eda, 0x10fe9e, 0x114f1f
 * Callees  : 1 -> 0x11013b
 ******************************************************************************/
void FUN_000f89de(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(in_EAX + 0xd) & 0x20) == 0) {
    uVar3 = FUN_0011013b();
    iVar2 = (int)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      bVar1 = *(byte *)(iVar2 + 0xd);
      *(byte *)(iVar2 + 0xd) = bVar1 | 0x20;
      if ((bVar1 & 7) == 0) {
        *(byte *)(iVar2 + 0xd) = bVar1 | 0x22;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f8a10 (Ghidra: FUN_000f8a10)
 * Prototype: void sub_0f8a10(void);
 * Address  : 0xf8a10 (Size: 17 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x10ff15
 ******************************************************************************/
void FUN_000f8a10(void)

{
  int in_EAX;
  
  FUN_0010ff15();
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}

/******************************************************************************
 * Function : sub_0f8a21 (Ghidra: FUN_000f8a21)
 * Prototype: undefined4 sub_0f8a21(void);
 * Address  : 0xf8a21 (Size: 127 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xea08b, 0xf4409
 * Callees  : 3 -> 0xf6c65, 0xf8aa6, 0x10fe9e
 ******************************************************************************/
undefined4 FUN_000f8a21(void)

{
  uint uVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  bool bVar3;
  
  uVar1 = *(uint *)(in_EAX + 0xc);
  *(byte *)(in_EAX + 0xc) = *(byte *)(in_EAX + 0xc) & 0xcf;
  if (*(int *)(in_EAX + 8) == 0) {
    FUN_0010fe9e();
  }
  bVar3 = (*(byte *)(in_EAX + 0xd) & 4) != 0;
  if (bVar3) {
    *(byte *)(in_EAX + 0xd) = *(byte *)(in_EAX + 0xd) & 0xfa | 1;
  }
  uVar2 = FUN_000f6c65();
  if (bVar3) {
    *(byte *)(in_EAX + 0xd) = *(byte *)(in_EAX + 0xd) & 0xfa | 4;
    FUN_000f8aa6();
    uVar2 = extraout_EDX;
  }
  if ((*(byte *)(in_EAX + 0xc) & 0x20) != 0) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(in_EAX + 0xc) = *(uint *)(in_EAX + 0xc) | uVar1 & 0x30;
  return uVar2;
}

/******************************************************************************
 * Function : sub_0f8aa0 (Ghidra: FUN_000f8aa0)
 * Prototype: undefined4 sub_0f8aa0(void);
 * Address  : 0xf8aa0 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea0fa
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f8aa0(void)

{
  return _DAT_001958e0;
}

/******************************************************************************
 * Function : sub_0f8aa6 (Ghidra: FUN_000f8aa6)
 * Prototype: undefined8 sub_0f8aa6(void);
 * Address  : 0xf8aa6 (Size: 217 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0xea15f, 0xf43da, 0xf694b, 0xf88e2, 0xf8a21, 0x10ff15
 * Callees  : 3 -> 0xf7c2e, 0xf8774, 0x1139e3
 ******************************************************************************/
undefined8 FUN_000f8aa6(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 in_EDX;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((*(byte *)((int)in_EAX + 0xd) & 0x10) == 0) {
    if ((in_EAX[2] != 0) &&
       (*(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) & 0xef,
       (*(byte *)((int)in_EAX + 0xd) & 0x20) == 0)) {
      iVar3 = 0;
      if (in_EAX[1] != 0) {
        iVar3 = FUN_000f7c2e();
        in_EAX = extraout_ECX_01;
      }
      if (iVar3 == -1) {
        *(byte *)(in_EAX + 3) = *(byte *)(in_EAX + 3) | 0x20;
        iVar2 = -1;
      }
    }
  }
  else {
    *(byte *)((int)in_EAX + 0xd) = *(byte *)((int)in_EAX + 0xd) & 0xef;
    if (((*(byte *)(in_EAX + 3) & 2) != 0) && (in_EAX[2] != 0)) {
      iVar3 = in_EAX[1];
      while ((iVar3 != 0 && (iVar2 == 0))) {
        iVar1 = FUN_001139e3();
        in_EAX = extraout_ECX;
        if (iVar1 == -1) {
          *(byte *)(extraout_ECX + 3) = *(byte *)(extraout_ECX + 3) | 0x20;
          iVar2 = -1;
        }
        else if (iVar1 == 0) {
          FUN_000f8774();
          iVar2 = -1;
          *(byte *)(extraout_ECX_00 + 3) = *(byte *)(extraout_ECX_00 + 3) | 0x20;
          in_EAX = extraout_ECX_00;
          iVar1 = extraout_EDX;
        }
        iVar3 = iVar3 - iVar1;
      }
    }
  }
  in_EAX[1] = 0;
  *in_EAX = in_EAX[2];
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_0f8b7f (Ghidra: FUN_000f8b7f)
 * Prototype: undefined8 sub_0f8b7f(void);
 * Address  : 0xf8b7f (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea15f
 * Callees  : 1 -> 0xf78ed
 ******************************************************************************/
undefined8 FUN_000f8b7f(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_000f78ed();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar3 = (int)uVar4;
  if ((iVar3 != -1) && (iVar1 = *(int *)(iVar2 + 4), iVar1 != 0)) {
    if ((*(byte *)(iVar2 + 0xd) & 0x10) == 0) {
      iVar3 = iVar3 - iVar1;
    }
    else {
      iVar3 = iVar1 + iVar3;
    }
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0f8baf (Ghidra: FUN_000f8baf)
 * Prototype: longlong sub_0f8baf(void);
 * Address  : 0xf8baf (Size: 53 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea15f
 * Callees  : 2 -> 0xf8774, 0x110126
 ******************************************************************************/
longlong FUN_000f8baf(void)

{
  code *pcVar1;
  uint in_ECX;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) == 0) {
    FUN_00110126();
    return (ulonglong)in_ECX << 0x20;
  }
  FUN_000f8774();
  return CONCAT44(in_ECX,0xffffffff);
}

/******************************************************************************
 * Function : sub_0f8be4 (Ghidra: FUN_000f8be4)
 * Prototype: longlong sub_0f8be4(void);
 * Address  : 0xf8be4 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x110060
 ******************************************************************************/
longlong FUN_000f8be4(void)

{
  code *pcVar1;
  undefined4 uVar2;
  byte in_CF;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) != 0) {
    uVar2 = FUN_00110060();
    return CONCAT44(unaff_retaddr,uVar2);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0f8c05 (Ghidra: FUN_000f8c05)
 * Prototype: longlong sub_0f8c05(void);
 * Address  : 0xf8c05 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf8ccf
 * Callees  : 1 -> 0x110060
 ******************************************************************************/
longlong FUN_000f8c05(void)

{
  code *pcVar1;
  undefined4 uVar2;
  byte in_CF;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) != 0) {
    uVar2 = FUN_00110060();
    return CONCAT44(unaff_retaddr,uVar2);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0f8c26 (Ghidra: FUN_000f8c26)
 * Prototype: longlong sub_0f8c26(void);
 * Address  : 0xf8c26 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x110060
 ******************************************************************************/
longlong FUN_000f8c26(void)

{
  code *pcVar1;
  undefined4 uVar2;
  byte in_CF;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) != 0) {
    uVar2 = FUN_00110060();
    return CONCAT44(unaff_retaddr,uVar2);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0f8c47 (Ghidra: FUN_000f8c47)
 * Prototype: undefined4 sub_0f8c47(void);
 * Address  : 0xf8c47 (Size: 136 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xea370, 0xf8ccf
 * Callees  : 3 -> 0xf323f, 0xf4cb8, 0xf8774
 ******************************************************************************/
undefined4 FUN_000f8c47(void)

{
  code *pcVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uStack_a0;
  char local_9c [136];
  
  bVar8 = 0;
  bVar7 = 0;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar5 = (char *)&uStack_a0;
  if ((bVar7 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    cVar2 = (*pcVar1)();
    pcVar5 = local_9c;
    local_9c[0] = cVar2 + 'A';
    local_9c[2] = 0x5c;
    local_9c[1] = 0x3a;
    iVar4 = -1;
    pcVar6 = local_9c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    } while (cVar2 != '\0');
    if (in_EAX == 0) {
      uStack_a0 = 0xf8cab;
      iVar4 = FUN_000f4cb8();
      if (iVar4 == 0) goto LAB_000f8c6d;
    }
    uStack_a0 = 0xf8cc3;
    uVar3 = FUN_000f323f();
  }
  else {
LAB_000f8c6d:
    *(undefined4 *)(pcVar5 + -4) = 0xf8c72;
    FUN_000f8774();
    uVar3 = 0;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_0f8ccf (Ghidra: FUN_000f8ccf)
 * Prototype: undefined4 sub_0f8ccf(void);
 * Address  : 0xf8ccf (Size: 330 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea3d4
 * Callees  : 8 -> 0xf323f, 0xf8761, 0xf8774, 0xf8c05, 0xf8c47, 0xf8e19, 0x113a57, 0x113aa1
 ******************************************************************************/
undefined4 FUN_000f8ccf(void)

{
  byte bVar1;
  code *pcVar2;
  undefined2 uVar3;
  byte *in_EAX;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *in_EDX;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  undefined1 local_80 [8];
  undefined1 auStack_78 [81];
  byte local_27;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_22;
  
  puVar9 = local_80;
  puVar8 = local_80;
  if ((*in_EAX != 0) && (iVar4 = FUN_00113a57(), puVar8 = local_80, iVar4 == 0)) {
    pbVar5 = in_EAX;
    if (in_EAX[1] == 0x3a) {
      pbVar5 = in_EAX + 2;
    }
    bVar1 = *pbVar5;
    if (((bVar1 == 0x5c) || (bVar10 = bVar1 < 0x2f, bVar1 == 0x2f)) &&
       (bVar10 = false, pbVar5[1] == 0)) {
      FUN_000f8c47();
      iVar4 = FUN_000f8c05();
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      FUN_000f8c05();
      local_27 = 0x10;
      local_26 = 0;
      local_24 = 0;
      local_22 = 0;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
      puVar9 = auStack_78;
      puVar8 = auStack_78;
      if ((bVar10 & 1) != 0) goto LAB_000f8ced;
    }
    if (in_EAX[1] == 0x3a) {
      *(undefined4 *)(puVar9 + -4) = 0xf8d8a;
      iVar4 = FUN_000f8761();
      uVar6 = iVar4 - 0x61;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)();
      puVar9 = puVar9 + 4;
      uVar6 = uVar6 & 0xff;
    }
    *in_EDX = uVar6;
    *(uint *)((int)in_EDX + 0x12) = *in_EDX;
    *(undefined4 *)((int)in_EDX + 0x16) = local_22;
    *(undefined4 *)(puVar9 + -4) = 0xf8daf;
    uVar3 = FUN_000f8e19();
    *(undefined2 *)(in_EDX + 2) = uVar3;
    *(undefined4 *)(puVar9 + -4) = 0xf8dc0;
    uVar7 = FUN_00113aa1();
    *(undefined2 *)(in_EDX + 4) = 0;
    *(undefined4 *)((int)in_EDX + 0x1e) = uVar7;
    *(undefined4 *)((int)in_EDX + 0x26) = uVar7;
    *(undefined4 *)((int)in_EDX + 0x22) = uVar7;
    *(undefined4 *)((int)in_EDX + 0x1a) = uVar7;
    *(undefined2 *)((int)in_EDX + 10) = 1;
    in_EDX[3] = (int)(short)in_EDX[4];
    in_EDX[1] = (int)(short)in_EDX[4];
    *(undefined4 *)((int)in_EDX + 0x2e) = 0;
    *(undefined4 *)((int)in_EDX + 0x32) = 0;
    *(undefined2 *)((int)in_EDX + 0x36) = 0;
    *(uint *)((int)in_EDX + 0x2a) = (uint)local_27;
    *(undefined1 *)(in_EDX + 0xe) = 0;
    *(undefined4 *)(puVar9 + -4) = 0xf8e12;
    FUN_000f323f();
    return 0;
  }
LAB_000f8ced:
  *(undefined4 *)(puVar8 + -4) = 0xf8cf7;
  FUN_000f8774();
  return 0xffffffff;
}

/******************************************************************************
 * Function : sub_0f8e19 (Ghidra: FUN_000f8e19)
 * Prototype: uint sub_0f8e19(void);
 * Address  : 0xf8e19 (Size: 112 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf8ccf
 * Callees  : 2 -> 0xea290, 0xf09d1
 * Strings  :
 *   - 0x16f603: "EXE"
 *   - 0x16f607: "COM"
 ******************************************************************************/
uint FUN_000f8e19(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((in_EAX & 0x10) == 0) {
    if ((in_EAX & 0x40) == 0) {
      uVar2 = 0x8000;
      iVar1 = FUN_000f09d1();
      if (iVar1 != 0) {
        iVar1 = FUN_000ea290();
        if (iVar1 != 0) {
          iVar1 = FUN_000ea290();
          if (iVar1 != 0) goto LAB_000f8e74;
        }
        uVar2 = 0x8049;
      }
    }
    else {
      uVar2 = 0x2000;
    }
  }
  else {
    uVar2 = 0x4049;
  }
LAB_000f8e74:
  uVar3 = uVar2 | 0x124;
  if ((in_EAX & 1) == 0) {
    uVar3 = uVar2 | 0x1b6;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_0f8e89 (Ghidra: FUN_000f8e89)
 * Prototype: longlong sub_0f8e89(void);
 * Address  : 0xf8e89 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x110060
 ******************************************************************************/
longlong FUN_000f8e89(void)

{
  code *pcVar1;
  undefined4 uVar2;
  byte in_CF;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((in_CF & 1) != 0) {
    uVar2 = FUN_00110060();
    return CONCAT44(unaff_retaddr,uVar2);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0f8eac (Ghidra: FUN_000f8eac)
 * Prototype: void sub_0f8eac(void);
 * Address  : 0xf8eac (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Control flow encountered bad instruction data */

void FUN_000f8eac(void)

{
  undefined1 uVar1;
  short in_DX;
  int unaff_EBX;
  undefined2 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  uVar1 = in(in_DX);
  *unaff_EDI = uVar1;
  *(char *)((int)unaff_ESI + -0x6d) =
       *(char *)((int)unaff_ESI + -0x6d) + (char)((uint)(unaff_EBX + -1) >> 8);
  TaskRegister(*unaff_ESI);
  LocalDescriptorTableRegister((short)(unaff_EBX + -1));
  LocalDescriptorTableRegister(in_DX + -1);
  LocalDescriptorTableRegister();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/******************************************************************************
 * Function : sub_0f9460 (Ghidra: FUN_000f9460)
 * Prototype: void sub_0f9460(void);
 * Address  : 0xf9460 (Size: 56 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f9460(void)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int extraout_EDX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  code *pcVar6;
  byte bVar7;
  uint auStack_28 [8];
  undefined4 uStack_8;
  
  bVar7 = 0;
  uVar1 = in((short)in_EDX);
  *unaff_EDI = uVar1;
  uStack_8 = 0x54065606;
  iVar5 = *(int *)(unaff_EBX + -1);
  iVar3 = *in_EAX;
  verr();
  uVar4 = LocalDescriptorTableRegister();
  *(undefined4 *)(unaff_ESI + 0x78000f95) = uVar4;
  verw();
  TaskRegister(*(undefined2 *)((int)in_EAX + (in_EDX + -1) * 4 + 0xf));
  *(char *)(unaff_ESI + -0x6b) = *(char *)(unaff_ESI + -0x6b) + (char)in_ECX;
  uVar4 = LocalDescriptorTableRegister();
  *(undefined4 *)(unaff_EBP + iVar5 + -0x6b) = uVar4;
  LocalDescriptorTableRegister(*(undefined2 *)(in_ECX + 0x52));
  *(undefined1 **)((int)auStack_28 + iVar3 + 0x10) = unaff_EDI + 1;
  iVar5 = 0;
  while( true ) {
    if (0 < iVar5) {
      return;
    }
    *(uint *)((int)auStack_28 + iVar3 + 0xc) = (uint)DAT_003df524;
    *(char **)((int)auStack_28 + iVar3 + 8) = s_BF19____d_0016f912;
    *(undefined **)((int)auStack_28 + iVar3 + 4) = &DAT_003df651;
    *(undefined4 *)((int)auStack_28 + iVar3) = 0xf94be;
    FUN_000e7714();
    *(undefined4 *)((int)auStack_28 + iVar3 + 0xc) = 0xf94cb;
    FUN_000f9610();
    *(undefined4 *)((int)auStack_28 + iVar3 + 0xc) = 0xf94d7;
    iVar5 = FUN_00114cf2();
    if (iVar5 < 1) break;
    *(char **)((int)auStack_28 + iVar3 + 0xc) = s___allocation_successful_0016f95e;
    *(undefined **)((int)auStack_28 + iVar3 + 8) = &DAT_003df651;
    *(undefined4 *)((int)auStack_28 + iVar3 + 4) = 0xf95da;
    FUN_000e7714();
    *(undefined4 *)((int)auStack_28 + iVar3 + 0xc) = 0xf95e7;
    FUN_000f9610();
    iVar5 = extraout_EDX;
  }
  if (iVar5 == -1) {
    *(char **)((int)auStack_28 + iVar3 + 0xc) = s___no_sound_dat_0016f91c;
    *(undefined **)((int)auStack_28 + iVar3 + 8) = &DAT_003df651;
    *(undefined4 *)((int)auStack_28 + iVar3 + 4) = 0xf94f5;
    FUN_000e7714();
    *(undefined4 *)((int)auStack_28 + iVar3 + 0xc) = 0xf9502;
    FUN_000f9610();
    DAT_003df524 = 0;
    return;
  }
  if (iVar5 == 0) {
    *(char **)((int)auStack_28 + iVar3 + 0xc) = s___cannot_allocate_0016f92d;
  }
  else {
    if (iVar5 != -2) goto LAB_000f95b0;
    *(char **)((int)auStack_28 + iVar3 + 0xc) = s___not_present_in_sound_dat_0016f941;
  }
  *(undefined **)((int)auStack_28 + iVar3 + 8) = &DAT_003df651;
  *(undefined4 *)((int)auStack_28 + iVar3 + 4) = 0xf9522;
  FUN_000e7714();
  *(undefined4 *)((int)auStack_28 + iVar3 + 0xc) = 0xf952f;
  FUN_000f9610();
LAB_000f95b0:
  iVar5 = 10;
  pcVar6 = FUN_000f9460;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    uVar2 = *(ushort *)pcVar6;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 2;
  } while (DAT_003df524 != uVar2);
                    /* WARNING: Could not recover jumptable at 0x000f95c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar5 * 4 + 0xf9472))();
  return;
}

/******************************************************************************
 * Function : sub_0f95f0 (Ghidra: FUN_000f95f0)
 * Prototype: void sub_0f95f0(void);
 * Address  : 0xf95f0 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xea94f
 * Callees  : 1 -> 0x114f1f
 ******************************************************************************/
void FUN_000f95f0(void)

{
  FUN_00114f1f();
  return;
}

/******************************************************************************
 * Function : sub_0f9610 (Ghidra: FUN_000f9610)
 * Prototype: void sub_0f9610(void);
 * Address  : 0xf9610 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 22 -> 0xea94f, 0xeaa28, 0xeb0cc, 0xeb1dd, 0xeb30c, 0xeb6b6, 0xec8e4, 0xec93f, 0xecabc, 0xeccb6 ...
 * Callees  : 1 -> 0xf4409
 ******************************************************************************/
void FUN_000f9610(void)

{
  if (DAT_003df650 != '\0') {
    FUN_000f4409();
  }
  return;
}

/******************************************************************************
 * Function : sub_0f9623 (Ghidra: FUN_000f9623)
 * Prototype: void sub_0f9623(void);
 * Address  : 0xf9623 (Size: 128 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfed5e
 * Callees  : 2 -> 0xfe993, 0xfeaaa
 ******************************************************************************/
void FUN_000f9623(void)

{
  if (DAT_00195d2c == 0) {
    FUN_000fe993(FUN_000f9623,FUN_000fdaaa);
    FUN_000feaaa(&DAT_003df814,4);
    FUN_000feaaa(&DAT_003df818,4);
    FUN_000feaaa(&DAT_003df81c,4);
    FUN_000feaaa(&DAT_003df824,4);
    FUN_000feaaa(&DAT_00195d28,4);
    FUN_000feaaa(&DAT_003df820,4);
    DAT_00195d2c = 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0f96a3 (Ghidra: FUN_000f96a3)
 * Prototype: void sub_0f96a3(char *param_1);
 * Address  : 0xf96a3 (Size: 42 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0xf96cd, 0xf970b, 0xf9733, 0xf9767, 0xf979c, 0xf97d6, 0xf9819, 0xf98ca, 0xfa368, 0xfee88
 * Callees  : 1 -> 0x115acb
 ******************************************************************************/
void FUN_000f96a3(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00115acb(DAT_003df824,param_1,~uVar2 - 1);
  return;
}

/******************************************************************************
 * Function : sub_0f96cd (Ghidra: FUN_000f96cd)
 * Prototype: void sub_0f96cd(void);
 * Address  : 0xf96cd (Size: 43 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf99cc, 0xf9d16
 * Callees  : 1 -> 0xf96a3
 * Strings  :
 *   - 0x16f978: "Result = %d\r\n"
 ******************************************************************************/
void FUN_000f96cd(void)

{
  undefined1 local_54 [4];
  undefined1 local_50 [64];
  
  (*DAT_00195db0)(local_54,1,s_Result____d_0016f978,local_50);
  FUN_000f96a3(local_50);
  return;
}

/******************************************************************************
 * Function : sub_0f96f8 (Ghidra: FUN_000f96f8)
 * Prototype: void sub_0f96f8(void);
 * Address  : 0xf96f8 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfa41b
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16f986: "Result = 0x%X\r\n"
 ******************************************************************************/
void FUN_000f96f8(void)

{
  undefined1 auStack_54 [4];
  undefined1 local_50 [64];
  
  (*DAT_00195db0)(auStack_54,1,s_Result___0x_X_0016f986,local_50);
  FUN_000f96a3(local_50);
  return;
}

/******************************************************************************
 * Function : sub_0f970b (Ghidra: FUN_000f970b)
 * Prototype: void sub_0f970b(void);
 * Address  : 0xf970b (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 55 -> 0xf996b, 0xf9a8c, 0xf9bc6, 0xf9cb3, 0xf9d16, 0xf9f10, 0xfa1a4, 0xfa257, 0xfa30a, 0xfa3bd ...
 * Callees  : 1 -> 0xf96a3
 ******************************************************************************/
void FUN_000f970b(void)

{
  undefined1 local_90 [4];
  undefined1 local_8c [128];
  
  (*DAT_00195db0)(local_90,1);
  FUN_000f96a3(local_8c);
  return;
}

/******************************************************************************
 * Function : sub_0f9733 (Ghidra: FUN_000f9733)
 * Prototype: void sub_0f9733(void);
 * Address  : 0xf9733 (Size: 52 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 32 -> 0xf99cc, 0xf9aea, 0xf9d16, 0xf9f71, 0xf9fd5, 0xfa039, 0xfa41b, 0xfa593, 0xfaa95, 0xfaaf9 ...
 * Callees  : 1 -> 0xf96a3
 ******************************************************************************/
void FUN_000f9733(void)

{
  undefined1 local_90 [128];
  undefined1 local_10 [4];
  
  (*DAT_00195db0)(local_10,2);
  FUN_000f96a3(local_90);
  return;
}

/******************************************************************************
 * Function : sub_0f9767 (Ghidra: FUN_000f9767)
 * Prototype: void sub_0f9767(void);
 * Address  : 0xf9767 (Size: 53 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0xf9b55, 0xfa7dc, 0xfa849, 0xfa8b3, 0xfaf2a, 0xfaff6, 0xfb060, 0xfb46c, 0xfb774, 0xfb956 ...
 * Callees  : 1 -> 0xf96a3
 ******************************************************************************/
void FUN_000f9767(void)

{
  undefined1 local_90 [128];
  undefined1 local_10 [4];
  
  (*DAT_00195db0)(local_10,3);
  FUN_000f96a3(local_90);
  return;
}

/******************************************************************************
 * Function : sub_0f979c (Ghidra: FUN_000f979c)
 * Prototype: void sub_0f979c(void);
 * Address  : 0xf979c (Size: 58 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xf9819, 0xf9c40, 0xfaf2a, 0xfb128, 0xfcaf1
 * Callees  : 1 -> 0xf96a3
 ******************************************************************************/
void FUN_000f979c(void)

{
  undefined1 local_94 [128];
  undefined1 local_14 [4];
  
  (*DAT_00195db0)(local_14,4);
  FUN_000f96a3(local_94);
  return;
}

/******************************************************************************
 * Function : sub_0f97d6 (Ghidra: FUN_000f97d6)
 * Prototype: void sub_0f97d6(void);
 * Address  : 0xf97d6 (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xfb19f, 0xfc70b
 * Callees  : 1 -> 0xf96a3
 ******************************************************************************/
void FUN_000f97d6(void)

{
  undefined1 local_98 [128];
  undefined1 local_18 [4];
  
  (*DAT_00195db0)(local_18,5);
  FUN_000f96a3(local_98);
  return;
}

/******************************************************************************
 * Function : sub_0f9819 (Ghidra: FUN_000f9819)
 * Prototype: undefined4 sub_0f9819(void);
 * Address  : 0xf9819 (Size: 177 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 109 -> 0xf98ca, 0xf996b, 0xf99cc, 0xf9a8c, 0xf9aea, 0xf9b55, 0xf9bc6, 0xf9c40, 0xf9cb3, 0xf9d16 ...
 * Callees  : 4 -> 0xf96a3, 0xf979c, 0x114f96, 0x115acb
 * Strings  :
 *   - 0x16f996: "[%.02u:%.02u:%.02u.%.03u] "
 *   - 0x16f9b1: "               "
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9819(void)

{
  int iVar1;
  
  iVar1 = FUN_00114f96();
  if (DAT_003df814 == 1) {
    FUN_000f979c((uint)(iVar1 - _DAT_003df820) % 1000);
  }
  else {
    FUN_000f96a3(s__0016f9b1,(int)(((ulonglong)(uint)(iVar1 - _DAT_003df820) / 60000) % 0x3c));
  }
  if (1 < DAT_003df814) {
    FUN_00115acb(DAT_003df824,&DAT_0016f9c1,DAT_003df814 - 1);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0f9a82 (Ghidra: FUN_000f9a82)
 * Prototype: void sub_0f9a82(void);
 * Address  : 0xf9a82 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x115246, 0x11575f, 0x11583f, 0x115880, 0x1158a2, 0x1158c3, 0x1158e3, 0x11590d, 0x11592d, 0x115957 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f9a82(void)

{
  DAT_00196266 = DAT_00196266 + 1;
  return;
}

/******************************************************************************
 * Function : sub_0f9a87 (Ghidra: FUN_000f9a87)
 * Prototype: void sub_0f9a87(void);
 * Address  : 0xf9a87 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x115246, 0x11575f, 0x11583f, 0x115880, 0x1158a2, 0x1158c3, 0x1158e3, 0x11590d, 0x11592d, 0x115957 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000f9a87(void)

{
  DAT_00196266 = DAT_00196266 + -1;
  return;
}

/******************************************************************************
 * Function : sub_0f9c2b (Ghidra: FUN_000f9c2b)
 * Prototype: uint sub_0f9c2b(void);
 * Address  : 0xf9c2b (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x113c03, 0x116069
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000f9c2b(void)

{
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  return (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
         (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
         (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
         (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000
         | (uint)(in_AC & 1) * 0x40000;
}

/******************************************************************************
 * Function : sub_0f9c30 (Ghidra: FUN_000f9c30)
 * Prototype: void sub_0f9c30(undefined4 param_1);
 * Address  : 0xf9c30 (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x113c03, 0x116069
 * Callees  : 1 -> 0x1156f8
 ******************************************************************************/
void FUN_000f9c30(undefined4 param_1)

{
  FUN_001156f8(param_1);
  return;
}

/******************************************************************************
 * Function : sub_0f9d11 (Ghidra: FUN_000f9d11)
 * Prototype: undefined4 sub_0f9d11(void);
 * Address  : 0xf9d11 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1188ac, 0x119f04
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000f9d11(void)

{
  return DAT_00196262;
}

/******************************************************************************
 * Function : sub_0fdaaa (Ghidra: FUN_000fdaaa)
 * Prototype: void sub_0fdaaa(void);
 * Address  : 0xfdaaa (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xfea1b
 ******************************************************************************/
void FUN_000fdaaa(void)

{
  if (DAT_00195d2c != 0) {
    FUN_000fea1b(FUN_000f9623,FUN_000fdaaa);
    DAT_00195d2c = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_0fdad0 (Ghidra: FUN_000fdad0)
 * Prototype: undefined4 sub_0fdad0(void);
 * Address  : 0xfdad0 (Size: 641 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xeb0cc
 * Callees  : 6 -> 0xe6a10, 0xe8974, 0xe8980, 0xe8a1c, 0xe8a34, 0xe8a80
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000fdb78) */
/* WARNING: Removing unreachable block (ram,0x000fdb96) */
/* WARNING: Removing unreachable block (ram,0x000fdb62) */
/* WARNING: Removing unreachable block (ram,0x000fdca3) */
/* WARNING: Removing unreachable block (ram,0x000fdc56) */
/* WARNING: Removing unreachable block (ram,0x000fdca5) */
/* WARNING: Removing unreachable block (ram,0x000fdcb2) */
/* WARNING: Removing unreachable block (ram,0x000fdbab) */
/* WARNING: Removing unreachable block (ram,0x000fdbc9) */
/* WARNING: Removing unreachable block (ram,0x000fdbc2) */
/* WARNING: Removing unreachable block (ram,0x000fdbcc) */
/* WARNING: Removing unreachable block (ram,0x000fdc33) */
/* WARNING: Removing unreachable block (ram,0x000fdc49) */
/* WARNING: Removing unreachable block (ram,0x000fdc6d) */
/* WARNING: Removing unreachable block (ram,0x000fdcb4) */
/* WARNING: Removing unreachable block (ram,0x000fdcc1) */
/* WARNING: Removing unreachable block (ram,0x000fdc3f) */
/* WARNING: Removing unreachable block (ram,0x000fdc44) */
/* WARNING: Removing unreachable block (ram,0x000fdc51) */
/* WARNING: Removing unreachable block (ram,0x000fdcde) */
/* WARNING: Removing unreachable block (ram,0x000fdcee) */
/* WARNING: Removing unreachable block (ram,0x000fdcfe) */
/* WARNING: Removing unreachable block (ram,0x000fdd39) */
/* WARNING: Removing unreachable block (ram,0x000fdd48) */

undefined4 FUN_000fdad0(void)

{
  int iVar1;
  int local_18;
  
  if ((DAT_00195d50 == -1) && (DAT_00195d50 = FUN_000e8980(), DAT_00195d50 != -1)) {
    iVar1 = FUN_000e8a80();
    if ((iVar1 != -1) && ((local_18 == 0x46464952 && (iVar1 = FUN_000e8a80(), iVar1 != -1)))) {
      FUN_000e8a80();
    }
    FUN_000e8a1c();
    DAT_00195d50 = -1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0fdd51 (Ghidra: FUN_000fdd51)
 * Prototype: void sub_0fdd51(void);
 * Address  : 0xfdd51 (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xeaa28, 0xeae8a, 0xeaf13, 0xeb0cc, 0xeb147
 * Callees  : 1 -> 0xe8a1c
 ******************************************************************************/
void FUN_000fdd51(void)

{
  if (DAT_00195d50 != -1) {
    FUN_000e8a1c();
    DAT_00195d50 = -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0fdd6f (Ghidra: FUN_000fdd6f)
 * Prototype: undefined4 sub_0fdd6f(void);
 * Address  : 0xfdd6f (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xeb147
 * Callees  : 2 -> 0xfdd97, 0xfdf16
 ******************************************************************************/
undefined4 FUN_000fdd6f(void)

{
  undefined4 uVar1;
  
  if (DAT_00195d50 == -1) {
    return 0;
  }
  if (DAT_003df82a == 1) {
    uVar1 = FUN_000fdd97();
    return uVar1;
  }
  uVar1 = FUN_000fdf16();
  return uVar1;
}

/******************************************************************************
 * Function : sub_0fdd97 (Ghidra: FUN_000fdd97)
 * Prototype: undefined4 sub_0fdd97(void);
 * Address  : 0xfdd97 (Size: 383 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfdd6f
 * Callees  : 2 -> 0xe6a10, 0xe8a80
 ******************************************************************************/
undefined4 FUN_000fdd97(void)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  char *in_EAX;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *extraout_ECX;
  short *psVar8;
  int iVar9;
  uint uVar10;
  byte local_40;
  short local_3f;
  short local_3d;
  short local_3b;
  int local_20;
  int local_1c;
  char local_18;
  
  bVar3 = true;
  iVar5 = DAT_003df83e - DAT_003df846;
  if (DAT_003df842 < DAT_003df83e - DAT_003df846) {
    iVar5 = DAT_003df842;
  }
  uVar7 = 0;
  if (iVar5 != 0) {
    FUN_000e8a80();
    FUN_000e8a80();
    local_1c = (int)local_3f;
    sVar1 = *(short *)(&DAT_003df84a + (uint)local_40 * 4);
    sVar2 = *(short *)(&DAT_003df84c + (uint)local_40 * 4);
    psVar8 = extraout_ECX;
    if (0 < iVar5) {
      *extraout_ECX = local_3b;
      psVar8 = extraout_ECX + 1;
    }
    uVar10 = (uint)(0 < iVar5);
    iVar9 = (int)local_3b;
    iVar6 = (int)local_3d;
    if ((int)uVar10 < iVar5) {
      uVar10 = uVar10 + 1;
      *psVar8 = local_3d;
      psVar8 = psVar8 + 1;
    }
    while (local_20 = iVar6, (int)uVar10 < iVar5) {
      bVar3 = !bVar3;
      if (bVar3) {
        cVar4 = local_18 << 4;
      }
      else {
        cVar4 = *in_EAX;
        in_EAX = in_EAX + 1;
        local_18 = cVar4;
      }
      iVar6 = local_1c * (cVar4 >> 4) + (local_20 * sVar1 + iVar9 * sVar2 >> 8);
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      *psVar8 = (short)iVar6;
      uVar10 = uVar10 + 1;
      local_1c = local_1c * *(int *)(&DAT_00195d54 + ((int)(cVar4 >> 4) & 0xfU) * 4) >> 8;
      psVar8 = psVar8 + 1;
      iVar9 = local_20;
      if (local_1c < 0x10) {
        local_1c = 0x10;
      }
    }
    DAT_003df846 = DAT_003df846 + uVar10;
    if (DAT_003df846 < DAT_003df83e) {
      uVar7 = 1;
    }
    else {
      FUN_000e6a10();
      uVar7 = 0;
    }
  }
  return uVar7;
}

/******************************************************************************
 * Function : sub_0fdf16 (Ghidra: FUN_000fdf16)
 * Prototype: undefined4 sub_0fdf16(void);
 * Address  : 0xfdf16 (Size: 529 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfdd6f
 * Callees  : 1 -> 0xe8a80
 ******************************************************************************/
undefined4 FUN_000fdf16(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char *in_EAX;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  short *extraout_ECX;
  short *psVar10;
  int iVar11;
  uint uVar12;
  byte local_58;
  byte local_57;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  int local_48;
  int local_44;
  int local_34;
  char *local_24;
  int local_20;
  int local_1c;
  
  iVar6 = DAT_003df83e - DAT_003df846;
  if (DAT_003df842 < DAT_003df83e - DAT_003df846) {
    iVar6 = DAT_003df842;
  }
  uVar9 = 0;
  if (iVar6 != 0) {
    FUN_000e8a80();
    FUN_000e8a80();
    local_48 = (int)local_4e;
    local_20 = (int)local_4c;
    local_1c = (int)local_54;
    sVar2 = *(short *)(&DAT_003df84a + (uint)local_58 * 4);
    iVar11 = (int)local_56;
    sVar3 = *(short *)(&DAT_003df84c + (uint)local_58 * 4);
    sVar4 = *(short *)(&DAT_003df84a + (uint)local_57 * 4);
    sVar5 = *(short *)(&DAT_003df84c + (uint)local_57 * 4);
    psVar10 = extraout_ECX;
    if (0 < iVar6) {
      *extraout_ECX = local_4e;
      extraout_ECX[1] = local_4c;
      psVar10 = extraout_ECX + 2;
    }
    uVar12 = (uint)(0 < iVar6);
    local_44 = (int)local_50;
    local_34 = (int)local_52;
    local_24 = in_EAX;
    if ((int)uVar12 < iVar6) {
      *psVar10 = local_52;
      uVar12 = uVar12 + 1;
      psVar10[1] = local_50;
      psVar10 = psVar10 + 2;
    }
    for (; (int)uVar12 < iVar6; uVar12 = uVar12 + 1) {
      cVar1 = *local_24;
      iVar7 = (cVar1 >> 4) * iVar11 + (local_48 * sVar3 + local_34 * sVar2 >> 8);
      local_24 = local_24 + 1;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      else if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      *psVar10 = (short)iVar7;
      iVar11 = iVar11 * *(int *)(&DAT_00195d54 + (uint)(byte)(cVar1 >> 4) * 4) >> 8;
      if (iVar11 < 0x10) {
        iVar11 = 0x10;
      }
      local_48 = local_34;
      iVar8 = ((char)(cVar1 << 4) >> 4) * local_1c + (local_44 * sVar4 + local_20 * sVar5 >> 8);
      if (iVar8 < -0x8000) {
        iVar8 = -0x8000;
      }
      else if (0x7fff < iVar8) {
        iVar8 = 0x7fff;
      }
      psVar10[1] = (short)iVar8;
      local_1c = local_1c * *(int *)(&DAT_00195d54 + (uint)(byte)((char)(cVar1 << 4) >> 4) * 4) >> 8
      ;
      psVar10 = psVar10 + 2;
      if (local_1c < 0x10) {
        local_1c = 0x10;
      }
      local_20 = local_44;
      local_44 = iVar8;
      local_34 = iVar7;
    }
    DAT_003df846 = DAT_003df846 + uVar12;
    if (DAT_003df846 < DAT_003df83e) {
      uVar9 = 1;
    }
    else {
      FUN_000e6a10();
      uVar9 = 0;
    }
  }
  return uVar9;
}

/******************************************************************************
 * Function : sub_0fe870 (Ghidra: FUN_000fe870)
 * Prototype: undefined4 sub_0fe870(undefined4 param_1);
 * Address  : 0xfe870 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf8eec, 0xfe128
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000fe870(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00195da0;
  DAT_00195da0 = param_1;
  return uVar1;
}

/******************************************************************************
 * Function : sub_0fe883 (Ghidra: FUN_000fe883)
 * Prototype: undefined4 sub_0fe883(undefined4 param_1);
 * Address  : 0xfe883 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xf8eec, 0xfe128
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000fe883(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00195da4;
  DAT_00195da4 = param_1;
  return uVar1;
}

/******************************************************************************
 * Function : sub_0fe896 (Ghidra: FUN_000fe896)
 * Prototype: int * sub_0fe896(int param_1);
 * Address  : 0xfe896 (Size: 43 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0xeb1dd, 0xfeb45, 0x11419b, 0x116704, 0x1193e6, 0x11b68b, 0x11bef4, 0x11c6b4, 0x11c724, 0x11cfae
 * Callees  : 1 -> 0xfeaaa
 ******************************************************************************/
int * FUN_000fe896(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  param_1 = param_1 + 4;
  piVar1 = (int *)(*DAT_00195da0)(param_1);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    FUN_000feaaa(piVar1,param_1);
    piVar2 = piVar1 + 1;
    *piVar1 = param_1;
  }
  return piVar2;
}

/******************************************************************************
 * Function : sub_0fe8c1 (Ghidra: FUN_000fe8c1)
 * Prototype: void sub_0fe8c1(int param_1);
 * Address  : 0xfe8c1 (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0xeb28b, 0xfeb45, 0x11419b, 0x114475, 0x116687, 0x116704, 0x116cb6, 0x11939c, 0x1193e6, 0x119a6e ...
 * Callees  : 1 -> 0xfeac2
 ******************************************************************************/
void FUN_000fe8c1(int param_1)

{
  if (param_1 != 0) {
    FUN_000feac2(param_1,*(undefined4 *)(param_1 + -4));
    (*DAT_00195da4)(param_1 + -4);
  }
  return;
}

/******************************************************************************
 * Function : sub_0fe8e5 (Ghidra: FUN_000fe8e5)
 * Prototype: bool sub_0fe8e5(int param_1,int *param_2,uint *param_3,uint *param_4);
 * Address  : 0xfe8e5 (Size: 124 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x11419b, 0x116704, 0x11bb5b
 * Callees  : 1 -> 0xfe993
 ******************************************************************************/
bool FUN_000fe8e5(int param_1,int *param_2,uint *param_3,uint *param_4)

{
  undefined4 local_44;
  int local_40;
  uint local_28 [3];
  uint local_1c;
  int local_10;
  
  local_40 = param_1;
  local_44 = 0x100;
  (*DAT_00195dac)(local_28,&local_44,0x31);
  if (local_10 == 0) {
    *param_3 = local_28[0] << 0x10;
    *param_4 = local_1c & 0xffff;
    *param_2 = (local_28[0] & 0xffff) << 4;
    FUN_000fe993(*param_3 >> 0xc,param_1 * 0x10 + (*param_3 >> 0xc) + -1);
  }
  return local_10 == 0;
}

/******************************************************************************
 * Function : sub_0fe961 (Ghidra: FUN_000fe961)
 * Prototype: void sub_0fe961(undefined4 param_1,undefined4 param_2,uint param_3);
 * Address  : 0xfe961 (Size: 50 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x11419b, 0x114475, 0x116687, 0x116704, 0x11bc18
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000fe961(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_40 [3];
  uint local_34;
  undefined1 local_24 [28];
  
  local_34 = param_3 & 0xffff;
  local_40[0] = 0x101;
  (*DAT_00195dac)(local_24,local_40,0x31);
  return;
}

/******************************************************************************
 * Function : sub_0fe993 (Ghidra: FUN_000fe993)
 * Prototype: bool sub_0fe993(uint param_1,uint param_2);
 * Address  : 0xfe993 (Size: 136 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0xf9623, 0xfe8e5, 0xfeaaa, 0xfed5e, 0x113b7c, 0x115b91, 0x115bb6, 0x117561, 0x117ccb, 0x11af08 ...
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000fe993(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_28 [24];
  int local_10;
  
  puVar2 = local_44;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  local_44[1] = param_1;
  if (param_2 <= param_1) {
    local_44[1] = param_2;
  }
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  local_44[2] = local_44[1] & 0xffff;
  local_30 = (param_1 - local_44[1]) + 1;
  local_44[0] = 0x600;
  local_34 = local_30 >> 0x10;
  local_44[1] = local_44[1] >> 0x10;
  local_30 = local_30 & 0xffff;
  (*DAT_00195dac)(local_28,local_44,0x31);
  return local_10 == 0;
}

/******************************************************************************
 * Function : sub_0fea1b (Ghidra: FUN_000fea1b)
 * Prototype: bool sub_0fea1b(uint param_1,uint param_2);
 * Address  : 0xfea1b (Size: 143 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0xfdaaa, 0xfeac2, 0xfefe4, 0x114791, 0x1174a9, 0x117ca1, 0x11ac05, 0x11b895, 0x11cbbc, 0x11dae3
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000fea1b(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_4c [4];
  uint local_3c;
  uint local_38;
  undefined1 local_30 [24];
  int local_18;
  uint local_14;
  
  uVar2 = param_2;
  if (param_1 < param_2) {
    uVar2 = param_1;
  }
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  local_14 = (param_1 - uVar2) + 1;
  puVar3 = local_4c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (uint *)((int)puVar3 + 1);
  }
  local_4c[1] = uVar2 >> 0x10;
  local_3c = local_14 >> 0x10;
  local_38 = local_14 & 0xffff;
  local_4c[2] = uVar2 & 0xffff;
  local_4c[0] = 0x601;
  (*DAT_00195dac)(local_30,local_4c,0x31);
  return local_18 == 0;
}

/******************************************************************************
 * Function : sub_0feaaa (Ghidra: FUN_000feaaa)
 * Prototype: void sub_0feaaa(int param_1,int param_2);
 * Address  : 0xfeaaa (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0xf9623, 0xfe896, 0x10a990, 0x113b7c, 0x115bb6, 0x117ccb, 0x11c2ae, 0x11cbe6
 * Callees  : 1 -> 0xfe993
 ******************************************************************************/
void FUN_000feaaa(int param_1,int param_2)

{
  FUN_000fe993(param_1,param_1 + param_2 + -1);
  return;
}

/******************************************************************************
 * Function : sub_0feac2 (Ghidra: FUN_000feac2)
 * Prototype: void sub_0feac2(int param_1,int param_2);
 * Address  : 0xfeac2 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xfe8c1, 0x10a8e0, 0x114791, 0x1174a9, 0x11ac05
 * Callees  : 1 -> 0xfea1b
 ******************************************************************************/
void FUN_000feac2(int param_1,int param_2)

{
  FUN_000fea1b(param_1,param_1 + param_2 + -1);
  return;
}

/******************************************************************************
 * Function : sub_0feae0 (Ghidra: FUN_000feae0)
 * Prototype: int sub_0feae0(undefined4 param_1);
 * Address  : 0xfeae0 (Size: 101 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x115a13, 0x115b37, 0x115b3d
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000feae0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_00195d9c = 0;
  iVar1 = FUN_00115a13(param_1,0);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    iVar2 = FUN_00115b37(iVar1,0);
    if (iVar2 == -1) {
      _DAT_00195d9c = 5;
    }
    FUN_00115b3d(iVar1);
    return iVar2;
  }
  _DAT_00195d9c = 3;
  return -1;
}

/******************************************************************************
 * Function : sub_0feb45 (Ghidra: FUN_000feb45)
 * Prototype: int * sub_0feb45(undefined4 param_1,int *param_2);
 * Address  : 0xfeb45 (Size: 210 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x116cb6, 0x119a6e, 0x11c6b4
 * Callees  : 7 -> 0xfe896, 0xfe8c1, 0x115a13, 0x115a89, 0x115b0d, 0x115b37, 0x115b3d
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000feb45(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  _DAT_00195d9c = 0;
  iVar1 = FUN_00115a13(param_1,0);
  if ((iVar1 == 0) || (iVar1 == -1)) {
    _DAT_00195d9c = 3;
  }
  else {
    iVar2 = FUN_00115b37(iVar1,0);
    FUN_00115b0d(iVar1,0);
    if ((param_2 == (int *)0x0) || (piVar3 = param_2, param_2 == (int *)0xffffffff)) {
      piVar3 = (int *)FUN_000fe896(iVar2 + 4);
    }
    if (piVar3 == (int *)0x0) {
      _DAT_00195d9c = 2;
    }
    else {
      piVar5 = piVar3;
      if (param_2 == (int *)0xffffffff) {
        piVar5 = piVar3 + 1;
        *piVar3 = iVar2;
      }
      iVar4 = FUN_00115a89(iVar1,piVar5,iVar2);
      if (iVar4 == iVar2) {
        FUN_00115b3d(iVar1);
        return piVar3;
      }
      if (piVar3 != param_2) {
        FUN_000fe8c1(piVar3);
      }
      _DAT_00195d9c = 5;
    }
    FUN_00115b3d(iVar1);
  }
  return (int *)0x0;
}

/******************************************************************************
 * Function : sub_0fec17 (Ghidra: FUN_000fec17)
 * Prototype: undefined4 sub_0fec17(undefined4 param_1,undefined4 param_2,int param_3);
 * Address  : 0xfec17 (Size: 104 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x115a2f, 0x115acb, 0x115b3d
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000fec62) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fec17(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  _DAT_00195d9c = 0;
  iVar1 = FUN_00115a2f(param_1);
  if (((iVar1 != 0) && (iVar1 != -1)) &&
     (iVar2 = FUN_00115acb(iVar1,param_2,param_3), iVar2 == param_3)) {
    FUN_00115b3d(iVar1);
    return 1;
  }
  _DAT_00195d9c = 4;
  return 0;
}

/******************************************************************************
 * Function : sub_0fec7f (Ghidra: FUN_000fec7f)
 * Prototype: undefined4 sub_0fec7f(undefined4 param_1,undefined4 param_2,int param_3);
 * Address  : 0xfec7f (Size: 104 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x115a4a, 0x115acb, 0x115b3d
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000fecca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fec7f(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  _DAT_00195d9c = 0;
  iVar1 = FUN_00115a4a(param_1);
  if (((iVar1 != 0) && (iVar1 != -1)) &&
     (iVar2 = FUN_00115acb(iVar1,param_2,param_3), iVar2 == param_3)) {
    FUN_00115b3d(iVar1);
    return 1;
  }
  _DAT_00195d9c = 4;
  return 0;
}

/******************************************************************************
 * Function : sub_0fece8 (Ghidra: FUN_000fece8)
 * Prototype: longlong sub_0fece8(void);
 * Address  : 0xfece8 (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xeb7b0
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000fece8(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *in_EAX;
  undefined2 extraout_CX;
  undefined2 extraout_DX;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  *(undefined2 *)(in_EAX + 2) = extraout_CX;
  in_EAX[1] = (char)((ushort)extraout_DX >> 8);
  *in_EAX = (char)extraout_DX;
  in_EAX[4] = uVar2;
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0fed03 (Ghidra: FUN_000fed03)
 * Prototype: longlong sub_0fed03(void);
 * Address  : 0xfed03 (Size: 26 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000fed03(void)

{
  code *pcVar1;
  undefined1 *in_EAX;
  undefined2 extraout_CX;
  undefined2 extraout_DX;
  uint unaff_retaddr;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *in_EAX = (char)((ushort)extraout_CX >> 8);
  in_EAX[1] = (char)extraout_CX;
  in_EAX[2] = (char)((ushort)extraout_DX >> 8);
  in_EAX[3] = (char)extraout_DX;
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : sub_0fed1d (Ghidra: FUN_000fed1d)
 * Prototype: void sub_0fed1d(void);
 * Address  : 0xfed1d (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0xebc98, 0xf0bb0, 0xf0d90, 0xf7786, 0x101360, 0x101c78, 0x101f88, 0x102108, 0x102264, 0x102344 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000fed1d(void)

{
  undefined2 *in_EAX;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  
  in_EAX[1] = in_CS;
  in_EAX[3] = in_DS;
  *in_EAX = in_ES;
  in_EAX[2] = in_SS;
  in_EAX[4] = in_FS;
  in_EAX[5] = in_GS;
  return;
}

/******************************************************************************
 * Function : sub_0fed45 (Ghidra: FUN_000fed45)
 * Prototype: undefined4 sub_0fed45(void);
 * Address  : 0xfed45 (Size: 25 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0xebc98, 0xf0bb0, 0xf0d90, 0xf7786, 0x101360, 0x101c78, 0x101f88, 0x102108, 0x102264, 0x102344 ...
 * Callees  : 1 -> 0x11db26
 ******************************************************************************/
undefined4 FUN_000fed45(void)

{
  undefined4 *unaff_EBX;
  
  FUN_0011db26();
  return *unaff_EBX;
}

/******************************************************************************
 * Function : sub_0fed5e (Ghidra: FUN_000fed5e)
 * Prototype: void sub_0fed5e(void);
 * Address  : 0xfed5e (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfee88
 * Callees  : 2 -> 0xf9623, 0xfe993
 ******************************************************************************/
void FUN_000fed5e(void)

{
  if (DAT_00195db4 == 0) {
    FUN_000fe993(FUN_000fed5e,FUN_000fefe4);
    DAT_00195db4 = 1;
    FUN_000f9623();
  }
  return;
}

/******************************************************************************
 * Function : sub_0fed8f (Ghidra: FUN_000fed8f)
 * Prototype: undefined4 sub_0fed8f(void);
 * Address  : 0xfed8f (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf4cb8
 ******************************************************************************/
undefined4 FUN_000fed8f(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000f4cb8();
  return uVar1;
}

/******************************************************************************
 * Function : sub_0feda2 (Ghidra: FUN_000feda2)
 * Prototype: void sub_0feda2(void);
 * Address  : 0xfeda2 (Size: 15 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf4d9b
 ******************************************************************************/
void FUN_000feda2(void)

{
  FUN_000f4d9b();
  return;
}

/******************************************************************************
 * Function : sub_0fedb1 (Ghidra: FUN_000fedb1)
 * Prototype: undefined4 sub_0fedb1(void);
 * Address  : 0xfedb1 (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xfee88
 * Callees  : 1 -> 0x10ed88
 ******************************************************************************/
undefined4 FUN_000fedb1(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0010ed88();
  return uVar1;
}

/******************************************************************************
 * Function : sub_0fedbe (Ghidra: FUN_000fedbe)
 * Prototype: void sub_0fedbe(void);
 * Address  : 0xfedbe (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
void FUN_000fedbe(void)

{
  FUN_000f7786();
  return;
}

/******************************************************************************
 * Function : sub_0fedeb (Ghidra: FUN_000fedeb)
 * Prototype: void sub_0fedeb(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfedeb (Size: 143 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe7714
 ******************************************************************************/
void FUN_000fedeb(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_2) {
  case 0:
    FUN_000e7714(param_4,param_3);
    return;
  case 1:
    FUN_000e7714(param_4,param_3,*param_1);
    return;
  case 2:
    FUN_000e7714(param_4,param_3,*param_1,param_1[1]);
    return;
  case 3:
    FUN_000e7714(param_4,param_3,*param_1,param_1[1],param_1[2]);
    return;
  case 4:
    FUN_000e7714(param_4,param_3,*param_1,param_1[1],param_1[2],param_1[3]);
    return;
  case 5:
    FUN_000e7714(param_4,param_3,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  }
  return;
}

/******************************************************************************
 * Function : sub_0fee0c (Ghidra: FUN_000fee0c)
 * Prototype: void sub_0fee0c(void);
 * Address  : 0xfee0c (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe7714
 ******************************************************************************/
void FUN_000fee0c(void)

{
  FUN_000e7714();
  return;
}

/******************************************************************************
 * Function : sub_0fefe4 (Ghidra: FUN_000fefe4)
 * Prototype: void sub_0fefe4(void);
 * Address  : 0xfefe4 (Size: 42 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xfea1b
 ******************************************************************************/
void FUN_000fefe4(void)

{
  if (DAT_00195db4 != 0) {
    FUN_000fea1b(FUN_000fed5e,FUN_000fefe4);
    DAT_00195db4 = 0;
  }
  return;
}

/******************************************************************************
 * Function : dk_pure_virtual_function_called_0ff00e (Ghidra: FUN_000ff00e)
 * Prototype: void dk_pure_virtual_function_called_0ff00e(void);
 * Address  : 0xff00e (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'pure virtual function called!'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x1136e4
 * Strings  :
 *   - 0x1713f0: "pure virtual function called!"
 ******************************************************************************/
void FUN_000ff00e(void)

{
  if (DAT_00195fa8 == 0) {
    DAT_00195fa8 = 1;
    FUN_001136e4();
  }
  return;
}

/******************************************************************************
 * Function : sub_0ff040 (Ghidra: FUN_000ff040)
 * Prototype: undefined8 sub_0ff040(void);
 * Address  : 0xff040 (Size: 169 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xed4e0, 0xef8e8, 0xefcf0, 0x11e100, 0x11e174
 * Callees  : 1 -> 0x11e0b0
 ******************************************************************************/
undefined8 FUN_000ff040(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_EDX;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar5;
  
  iVar3 = FUN_0011e0b0();
  puVar1 = (undefined4 *)(iVar3 + -4);
  *(undefined ***)(iVar3 + 0xd78) = &PTR_FUN_000ff0ec_001747b4;
  *puVar1 = 0;
  puVar5 = puVar1;
  do {
    puVar4 = (undefined4 *)((int)puVar5 + 0x3d);
    *(undefined4 *)((int)puVar5 + 9) = 0;
    puVar5 = puVar4;
  } while (puVar4 != (undefined4 *)(iVar3 + 0x79c));
  *(undefined4 *)(iVar3 + 0x7a0) = 0;
  pcVar6 = &DAT_00171410;
  *(undefined4 *)(iVar3 + 0x7a4) = 0;
  pcVar7 = (char *)(iVar3 + 0xd4c);
  *(undefined4 *)(iVar3 + 0x7a8) = 0;
  do {
    cVar2 = *pcVar6;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  *(undefined4 *)(iVar3 + 0xd70) = 0;
  *(undefined4 *)(iVar3 + 0xd74) = 0;
  *(undefined ***)(iVar3 + 0xd6c) = &PTR_FUN_000ff904_00195db8;
  return CONCAT44(in_EDX,puVar1);
}

/******************************************************************************
 * Function : sub_0ff308 (Ghidra: FUN_000ff308)
 * Prototype: uint sub_0ff308(void);
 * Address  : 0xff308 (Size: 143 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xffb54, 0x1002dc
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000ff308(void)

{
  bool bVar1;
  int in_EAX;
  uint uVar2;
  uint in_ECX;
  int iVar3;
  int in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  bVar1 = false;
  uVar2 = 0;
  iVar3 = in_EAX;
  if (*(int *)(in_EAX + 0x7ac) != 0) {
    do {
      if (in_EDX == *(int *)(iVar3 + 0x7b1)) {
        bVar1 = true;
        in_ECX = uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x2d;
    } while (uVar2 < *(uint *)(in_EAX + 0x7ac));
  }
  if (bVar1) {
    uVar2 = *(int *)(in_EAX + 0x7ac) - 1;
    if (in_ECX != uVar2) {
      uVar2 = in_ECX * 0x2d + 0x2d + in_EAX;
      while (in_ECX < *(int *)(in_EAX + 0x7ac) - 1U) {
        puVar5 = (undefined4 *)(uVar2 + 0x783);
        puVar4 = (undefined4 *)(uVar2 + 0x7b0);
        uVar2 = uVar2 + 0x2d;
        in_ECX = in_ECX + 1;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      }
    }
    *(int *)(in_EAX + 0x7ac) = *(int *)(in_EAX + 0x7ac) + -1;
  }
  return uVar2 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0ff398 (Ghidra: FUN_000ff398)
 * Prototype: void sub_0ff398(void);
 * Address  : 0xff398 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x103528, 0x1037c8, 0x11e484, 0x11e554, 0x11eaf8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ff398(void)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x7ac) = 0;
  return;
}

/******************************************************************************
 * Function : sub_0ff3a4 (Ghidra: FUN_000ff3a4)
 * Prototype: undefined8 sub_0ff3a4(void);
 * Address  : 0xff3a4 (Size: 306 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1044e0, 0x11e9e8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000ff3a4(void)

{
  char cVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int in_EDX;
  char *pcVar5;
  char *unaff_EBX;
  int iVar6;
  char *pcVar7;
  int local_18;
  uint local_14;
  
  bVar2 = false;
  iVar3 = 0;
  local_14 = 0;
  iVar6 = in_EAX;
  do {
    if ((*(int *)(iVar6 + 9) != 0) && (*(int *)(iVar6 + 5) == in_EDX)) {
      bVar2 = true;
      iVar3 = in_EAX + 4 + local_14 * 0x3d;
    }
    local_14 = local_14 + 1;
    iVar6 = iVar6 + 0x3d;
  } while (local_14 < 0x20);
  if (!bVar2) {
    bVar2 = true;
    iVar6 = in_EAX + 4;
    local_14 = 0;
    local_18 = iVar6;
    do {
      if (*(int *)(in_EAX + 9) == 0) {
        iVar6 = local_14 * 0x3d + iVar6;
        *(int *)(in_EAX + 5) = in_EDX;
        pcVar5 = (char *)(iVar6 + 9);
        if ((pcVar5 == (char *)0x0) || (unaff_EBX == (char *)0x0)) goto LAB_000ff487;
        uVar4 = 0xffffffff;
        pcVar7 = unaff_EBX;
        goto code_r0x000ff43d;
      }
      in_EAX = in_EAX + 0x3d;
      local_18 = local_18 + 0x3d;
      local_14 = local_14 + 1;
      if (0x1f < local_14) {
        bVar2 = false;
      }
    } while (bVar2);
  }
  return CONCAT44(local_14,iVar3);
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\0') break;
code_r0x000ff43d:
    if (uVar4 == 0) break;
  }
  pcVar7 = pcVar5;
  if (~uVar4 - 1 < 0x20) {
    do {
      cVar1 = *unaff_EBX;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = unaff_EBX[1];
      unaff_EBX = unaff_EBX + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  else {
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)unaff_EBX;
      unaff_EBX = unaff_EBX + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pcVar5 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      pcVar5 = pcVar5 + 1;
    }
    *(undefined1 *)(iVar6 + 0x28) = 0;
    pcVar5 = (char *)(iVar6 + 0x29);
  }
LAB_000ff487:
  *(undefined4 *)(in_EAX + 9) = 1;
  return CONCAT44(pcVar5,local_18);
}

/******************************************************************************
 * Function : sub_0ff4d8 (Ghidra: FUN_000ff4d8)
 * Prototype: void sub_0ff4d8(void);
 * Address  : 0xff4d8 (Size: 25 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1044e0, 0x11e9e8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ff4d8(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = in_EAX;
  do {
    iVar1 = iVar2 + 0x3d;
    *(undefined4 *)(iVar2 + 9) = 0;
    iVar2 = iVar1;
  } while (iVar1 != in_EAX + 0x7a0);
  return;
}

/******************************************************************************
 * Function : sub_0ff4f4 (Ghidra: FUN_000ff4f4)
 * Prototype: undefined1 sub_0ff4f4(void);
 * Address  : 0xff4f4 (Size: 70 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x11ea38
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_000ff4f4(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_2c [8];
  int aiStack_24 [4];
  undefined1 local_14;
  
  piVar3 = aiStack_24 + 3;
  uVar1 = 0;
  local_14 = 0;
  if (*(int *)(in_EAX + 0x7ac) != 0) {
    iVar4 = in_EAX + 0x7b0;
    piVar2 = aiStack_24 + 3;
    do {
      piVar2[-1] = unaff_EBX;
      piVar3 = piVar2 + -2;
      piVar2[-2] = iVar4;
      uVar1 = uVar1 + 1;
      piVar2[-3] = 0xff521;
      (*(code *)*piVar2)();
      iVar4 = iVar4 + 0x2d;
      piVar2 = piVar2 + -2;
    } while (uVar1 < *(uint *)(in_EAX + 0x7ac));
  }
  return *(undefined1 *)((int)piVar3 + 4);
}

/******************************************************************************
 * Function : sub_0ff53c (Ghidra: FUN_000ff53c)
 * Prototype: int sub_0ff53c(void);
 * Address  : 0xff53c (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x11e554, 0x11ee0c
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000ff53c(void)

{
  char cVar1;
  uint uVar2;
  char *in_EDX;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *in_EDX;
    in_EDX = in_EDX + 1;
  } while (cVar1 != '\0');
  return ~uVar2 + 8;
}

/******************************************************************************
 * Function : sub_0ff628 (Ghidra: FUN_000ff628)
 * Prototype: undefined4 sub_0ff628(void);
 * Address  : 0xff628 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0xee3c0, 0xee694, 0xeedc0, 0x100bb8, 0x100e14, 0x11eaf8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000ff628(void)

{
  return 8;
}

/******************************************************************************
 * Function : sub_0ff678 (Ghidra: FUN_000ff678)
 * Prototype: undefined4 sub_0ff678(void);
 * Address  : 0xff678 (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x10646c, 0x1082bc, 0x109acc, 0x10a3b0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000ff678(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  
  for (iVar1 = 1; in_EAX = in_EAX + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_EDX = *in_EAX;
    in_EDX = in_EDX + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)in_EDX = *(undefined1 *)in_EAX;
    in_EAX = (undefined4 *)((int)in_EAX + 1);
    in_EDX = (undefined4 *)((int)in_EDX + 1);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0ff834 (Ghidra: FUN_000ff834)
 * Prototype: void sub_0ff834(void);
 * Address  : 0xff834 (Size: 96 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x103528, 0x1037c8, 0x1044e0, 0x109428, 0x11e484
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ff834(void)

{
  char cVar1;
  char *in_EAX;
  uint uVar2;
  char *in_EDX;
  uint unaff_EBX;
  char *pcVar3;
  
  if ((in_EAX != (char *)0x0) && (in_EDX != (char *)0x0)) {
    uVar2 = 0xffffffff;
    pcVar3 = in_EDX;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < unaff_EBX) {
      do {
        cVar1 = *in_EDX;
        *in_EAX = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = in_EDX[1];
        in_EDX = in_EDX + 2;
        in_EAX[1] = cVar1;
        in_EAX = in_EAX + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar3 = in_EAX;
    for (uVar2 = unaff_EBX - 1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)in_EDX;
      in_EDX = in_EDX + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar2 = unaff_EBX - 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar3 = *in_EDX;
      in_EDX = in_EDX + 1;
      pcVar3 = pcVar3 + 1;
    }
    in_EAX[unaff_EBX - 1] = '\0';
  }
  return;
}

/******************************************************************************
 * Function : sub_0ff9f8 (Ghidra: FUN_000ff9f8)
 * Prototype: uint sub_0ff9f8(void);
 * Address  : 0xff9f8 (Size: 312 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xffb54, 0x1002dc
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000ff9f8(void)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 *in_EDX;
  uint uVar4;
  uint unaff_EBP;
  int *piVar5;
  int local_28 [4];
  uint local_18;
  
  piVar5 = local_28;
  local_18 = in_EAX;
  for (iVar3 = 1; in_EDX = in_EDX + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *in_EDX;
    piVar5 = piVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)piVar5 = *(undefined1 *)in_EDX;
    in_EDX = (undefined4 *)((int)in_EDX + 1);
    piVar5 = (undefined4 *)((int)piVar5 + 1);
  }
  uVar4 = 0;
  local_28[2] = 0;
  uVar2 = local_18;
  if (*(int *)(local_18 + 0x7ac) != 0) {
    do {
      if ((local_28[0] == *(int *)(uVar2 + 0x7b1)) && (*(int *)(uVar2 + 0x7b9) != 0)) {
        local_28[2] = 1;
        local_28[1] = uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 0x2d;
    } while (uVar4 < *(uint *)(local_18 + 0x7ac));
  }
  uVar2 = local_18;
  if (local_28[2] != 0) {
    bVar1 = false;
    uVar4 = 0;
    if (*(int *)(local_18 + 0x7ac) != 0) {
      do {
        if (*(int *)(uVar2 + 0x7b9) == 0) {
          if (bVar1) {
            if (*(uint *)(uVar2 + 0x7b1) < unaff_EBP) {
              unaff_EBP = *(uint *)(uVar2 + 0x7b1);
              local_28[3] = uVar4;
            }
          }
          else {
            bVar1 = true;
            unaff_EBP = *(uint *)(uVar2 + 0x7b1);
            local_28[3] = uVar4;
          }
        }
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 + 0x2d;
      } while (uVar4 < *(uint *)(local_18 + 0x7ac));
    }
    if (bVar1) {
      *(undefined4 *)(local_28[3] * 0x2d + local_18 + 0x7b9) = 1;
      *(undefined4 *)(local_28[1] * 0x2d + local_18 + 0x7b9) = 0;
      uVar2 = *(uint *)(local_18 + 0xd70);
      if (*(int *)(uVar2 + 8) != 0) {
        uVar2 = (**(code **)(uVar2 + 8))(unaff_EBP,*(undefined4 *)(local_18 + 0xd78));
      }
    }
  }
  return uVar2 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_100708 (Ghidra: FUN_00100708)
 * Prototype: void sub_100708(void);
 * Address  : 0x100708 (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x11e554, 0x11ea38
 * Callees  : 1 -> 0xffb54
 ******************************************************************************/
void FUN_00100708(void)

{
  FUN_000ffb54();
  return;
}

/******************************************************************************
 * Function : sub_1008a8 (Ghidra: FUN_001008a8)
 * Prototype: undefined1 sub_1008a8(void);
 * Address  : 0x1008a8 (Size: 3 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_001008a8(void)

{
  return 0;
}

/******************************************************************************
 * Function : sub_1012c0 (Ghidra: FUN_001012c0)
 * Prototype: undefined8 sub_1012c0(void);
 * Address  : 0x1012c0 (Size: 86 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xed4e0, 0xef8e8, 0xefcf0
 * Callees  : 2 -> 0xe6a10, 0xe8d4a
 ******************************************************************************/
undefined8 FUN_001012c0(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 in_EDX;
  
  *(undefined4 *)(in_EAX + 0x1e) = 0;
  *(undefined4 *)(in_EAX + 0x16) = 0;
  *(undefined2 *)(in_EAX + 0x3e) = 0;
  *(undefined2 *)(in_EAX + 0x40) = 0;
  *(undefined2 *)(in_EAX + 0x42) = 0;
  *(undefined2 *)(in_EAX + 0x44) = 0;
  *(undefined2 *)(in_EAX + 0x46) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  uVar1 = FUN_000e8d4a();
  *extraout_ECX = uVar1;
  FUN_000e6a10();
  return CONCAT44(in_EDX,extraout_ECX_00);
}

/******************************************************************************
 * Function : sub_101318 (Ghidra: FUN_00101318)
 * Prototype: undefined4 sub_101318(void);
 * Address  : 0x101318 (Size: 71 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x103134
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
undefined4 FUN_00101318(void)

{
  int in_EAX;
  undefined4 extraout_ECX;
  
  *(undefined4 *)(in_EAX + 0x1e) = 0;
  *(undefined4 *)(in_EAX + 0x16) = 0;
  *(undefined2 *)(in_EAX + 0x40) = 0;
  *(undefined2 *)(in_EAX + 0x42) = 0;
  *(undefined2 *)(in_EAX + 0x44) = 0;
  *(undefined2 *)(in_EAX + 0x46) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  FUN_000e6a10();
  return extraout_ECX;
}

/******************************************************************************
 * Function : sub_101f88 (Ghidra: FUN_00101f88)
 * Prototype: undefined4 sub_101f88(void);
 * Address  : 0x101f88 (Size: 100 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe6a10, 0xfed1d, 0xfed45
 ******************************************************************************/
undefined4 FUN_00101f88(void)

{
  int extraout_ECX;
  undefined2 in_DX;
  int unaff_EBX;
  
  FUN_000e6a10();
  FUN_000fed1d(0x300,in_DX);
  *(undefined2 *)(unaff_EBX + 0x30) = *(undefined2 *)(extraout_ECX + 0x36);
  *(undefined2 *)(unaff_EBX + 0x2e) = *(undefined2 *)(extraout_ECX + 0x38);
  FUN_000fed45();
  return *(undefined4 *)(unaff_EBX + 0x1c);
}

/******************************************************************************
 * Function : dk_use_this_vector_101fec (Ghidra: FUN_00101fec)
 * Prototype: longlong dk_use_this_vector_101fec(void);
 * Address  : 0x101fec (Size: 283 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'CAN USE THIS VECTOR 0x%x'
 * Callers  : 1 -> 0x101360
 * Callees  : 3 -> 0xe6a10, 0xf7786, 0x103100
 * Strings  :
 *   - 0x17261e: "CAN USE THIS VECTOR 0x%x\n"
 ******************************************************************************/
longlong FUN_00101fec(void)

{
  bool bVar1;
  int in_EAX;
  undefined1 extraout_CL;
  undefined2 extraout_CX;
  int extraout_ECX;
  uint in_EDX;
  short sVar2;
  undefined4 in_stack_ffffffd0;
  undefined2 uVar3;
  uint in_stack_ffffffd8;
  short sVar4;
  uint in_stack_ffffffdc;
  
  while( true ) {
    uVar3 = (undefined2)((uint)in_stack_ffffffd0 >> 0x10);
    FUN_000e6a10();
    in_stack_ffffffd0 = CONCAT22(uVar3,0x200);
    FUN_000f7786(in_stack_ffffffd0,extraout_CL);
    sVar4 = (short)in_stack_ffffffdc;
    sVar2 = (short)in_stack_ffffffd8;
    if ((sVar2 == 0) && (sVar4 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (*(char *)((in_stack_ffffffd8 & 0xffff) << 4 | in_stack_ffffffdc & 0xffff) == 0xcf)) {
      bVar1 = false;
    }
    if (!bVar1) break;
    if (0x65 < extraout_ECX + 1) {
      return (ulonglong)in_EDX << 0x20;
    }
  }
  FUN_00103100(s_CAN_USE_THIS_VECTOR_0x_x_0017261e,extraout_ECX);
  *(undefined2 *)(in_EAX + 0x3e) = extraout_CX;
  *(short *)(in_EAX + 0x40) = sVar2;
  *(short *)(in_EAX + 0x42) = sVar4;
  FUN_000e6a10();
  FUN_000f7786(0x201,*(undefined2 *)(in_EAX + 0x3e),*(uint *)(in_EAX + 0x1e) >> 4 & 0xffff,
               *(int *)(in_EAX + 0x1e) + (*(uint *)(in_EAX + 0x1e) >> 4 & 0xffff) * -0x10);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_open_socket_return_code_102264 (Ghidra: FUN_00102264)
 * Prototype: uint dk_open_socket_return_code_102264(void);
 * Address  : 0x102264 (Size: 222 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'OPEN SOCKET 0x%x, RETURN CODE 0x%x'
 * Callers  : 1 -> 0x1032d8
 * Callees  : 4 -> 0xe6a10, 0xfed1d, 0xfed45, 0x103100
 * Strings  :
 *   - 0x172672: "OPEN SOCKET 0x%x, RETURN CODE 0x%x\n"
 ******************************************************************************/
uint FUN_00102264(void)

{
  int in_EAX;
  ushort extraout_CX;
  ushort extraout_CX_00;
  int iVar1;
  ushort *in_EDX;
  undefined4 *puVar2;
  ushort *puVar3;
  byte bVar4;
  undefined1 auStack_68 [20];
  uint local_54;
  uint local_4c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_20;
  
  bVar4 = 0;
  FUN_000e6a10();
  local_4c = (uint)extraout_CX;
  local_54 = (int)(uint)*in_EDX >> 8 | (*in_EDX & 0xff) << 8;
  FUN_000e6a10();
  local_30 = (uint)extraout_CX_00;
  local_34 = 0x300;
  FUN_000fed1d();
  local_38 = *(undefined2 *)(in_EAX + 0x36);
  local_3a = *(undefined2 *)(in_EAX + 0x38);
  local_20 = auStack_68;
  FUN_000fed45();
  *in_EDX = (ushort)local_54;
  puVar2 = (undefined4 *)(in_EAX + 0xc);
  puVar3 = in_EDX + 3;
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -4 + 2;
  }
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar4 * -2 + 1);
    puVar3 = (ushort *)((int)puVar3 + (uint)bVar4 * -2 + 1);
  }
  FUN_00103100(s_OPEN_SOCKET_0x_x__RETURN_CODE_0x_00172672,local_54,local_4c);
  return local_4c;
}

/******************************************************************************
 * Function : dk_closing_socket_102344 (Ghidra: FUN_00102344)
 * Prototype: void dk_closing_socket_102344(void);
 * Address  : 0x102344 (Size: 174 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'CLOSING SOCKET %x'
 * Callers  : 2 -> 0x1032d8, 0x103464
 * Callees  : 4 -> 0xe6a10, 0xfed1d, 0xfed45, 0x103100
 * Strings  :
 *   - 0x1725cc: "CLOSING SOCKET %x\n"
 *   - 0x1725df: "SOCKET CLOSED\n"
 ******************************************************************************/
void FUN_00102344(void)

{
  ushort uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  ushort *in_EDX;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  uint local_54;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_20;
  
  FUN_00103100(s_CLOSING_SOCKET__x_001725cc,*in_EDX);
  FUN_000e6a10();
  local_58 = 1;
  local_54 = (uint)*in_EDX;
  uVar1 = *(ushort *)(extraout_ECX + 0x3e);
  FUN_000e6a10();
  local_30 = (uint)uVar1;
  local_34 = 0x300;
  FUN_000fed1d();
  local_38 = *(undefined2 *)(extraout_ECX_00 + 0x36);
  local_3a = *(undefined2 *)(extraout_ECX_00 + 0x38);
  local_20 = auStack_68;
  FUN_000fed45();
  FUN_00103100(s_SOCKET_CLOSED_001725df);
  return;
}

/******************************************************************************
 * Function : sub_1023f4 (Ghidra: FUN_001023f4)
 * Prototype: void sub_1023f4(uint param_1);
 * Address  : 0x1023f4 (Size: 460 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x1029e0, 0x102dd0, 0x102e4c, 0x1037c8, 0x1044e0, 0x104d44, 0x1056a8, 0x106234, 0x10646c, 0x106bc8 ...
 * Callees  : 2 -> 0xe6a10, 0x102834
 ******************************************************************************/
void FUN_001023f4(uint param_1)

{
  int in_EAX;
  undefined4 *in_ECX;
  int iVar1;
  uint uVar2;
  undefined2 *in_EDX;
  undefined2 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined2 local_20;
  ushort local_1e;
  undefined2 local_1c;
  int local_18;
  undefined4 *local_14;
  
  bVar6 = 0;
  do {
    *(short *)(in_EAX + 0x44) = *(short *)(in_EAX + 0x44) + 1;
    if (0x1f < *(ushort *)(in_EAX + 0x44)) {
      *(undefined2 *)(in_EAX + 0x44) = 1;
    }
    puVar3 = (undefined4 *)((*(ushort *)(in_EAX + 0x44) - 1) * 0x26a + *(int *)(in_EAX + 0x16));
  } while (*(char *)(puVar3 + 2) != '\0');
  local_18 = in_EAX;
  local_14 = in_ECX;
  FUN_000e6a10();
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(local_18 + 0x3a);
  *(short *)((int)puVar3 + 6) = (short)(*(uint *)(local_18 + 0x1e) >> 4);
  *(undefined2 *)((int)puVar3 + 10) = *in_EDX;
  *(undefined2 *)((int)puVar3 + 0x22) = 1;
  *(ushort *)(puVar3 + 9) = (ushort)((byte)puVar3 + 0x2a & 0xf);
  *(undefined1 *)(puVar3 + 2) = 1;
  *(undefined1 *)((int)puVar3 + 9) = 0;
  *(short *)((int)puVar3 + 0x26) = (short)((int)puVar3 + 0x2aU >> 4);
  *(undefined2 *)(puVar3 + 0xb) = 0x1e00;
  *(short *)(puVar3 + 10) = (short)param_1 + 0x1e;
  *(undefined1 *)((int)puVar3 + 0x2f) = 0;
  *(undefined2 *)((int)puVar3 + 0x3a) = *unaff_EBX;
  puVar4 = (undefined4 *)(unaff_EBX + 5);
  puVar5 = puVar3 + 7;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
  }
  puVar4 = (undefined4 *)(unaff_EBX + 5);
  puVar5 = puVar3 + 0xd;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
  }
  puVar4 = (undefined4 *)(unaff_EBX + 3);
  puVar5 = puVar3 + 0xc;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
  }
  puVar4 = puVar3 + 0x12;
  for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *local_14;
    local_14 = local_14 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)local_14;
    local_14 = (undefined4 *)((int)local_14 + (uint)bVar6 * -2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
  }
  local_1c = (short)((uint)puVar3 >> 4);
  local_20 = 3;
  local_1e = (ushort)((byte)puVar3 & 0xf);
  *(short *)(local_18 + 0x46) = *(short *)(local_18 + 0x46) + 1;
  if (*(ushort *)(local_18 + 0x46) < 0x1e) {
    puVar3 = (undefined4 *)&local_20;
    puVar4 = (undefined4 *)
             ((*(ushort *)(local_18 + 0x46) - 1) * 6 + *(int *)(local_18 + 0x1e) + 0x90);
    for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar6 * -2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    }
  }
  else {
    *(undefined2 *)(local_18 + 0x46) = 0x1f;
    FUN_00102834();
  }
  return;
}

/******************************************************************************
 * Function : sub_1025c0 (Ghidra: FUN_001025c0)
 * Prototype: void sub_1025c0(void);
 * Address  : 0x1025c0 (Size: 239 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x1029e0, 0x102e4c, 0x1032d8, 0x1037c8, 0x1044e0, 0x104d44, 0x1056a8, 0x106da4, 0x1073e0, 0x1079f8 ...
 * Callees  : 2 -> 0xe6a10, 0x102834
 ******************************************************************************/
void FUN_001025c0(void)

{
  int in_EAX;
  undefined4 *extraout_ECX;
  int iVar1;
  ushort uVar2;
  undefined2 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined2 local_14;
  ushort local_12;
  undefined2 local_10;
  
  bVar5 = 0;
  FUN_000e6a10();
  *extraout_ECX = 0;
  *(undefined2 *)(extraout_ECX + 1) = *(undefined2 *)(in_EAX + 0x3c);
  *(short *)((int)extraout_ECX + 6) = (short)(*(uint *)(in_EAX + 0x1e) >> 4);
  *(undefined2 *)((int)extraout_ECX + 10) = *unaff_EBX;
  *(undefined2 *)((int)extraout_ECX + 0x22) = 1;
  *(undefined2 *)(extraout_ECX + 10) = 0x240;
  *(undefined1 *)(extraout_ECX + 2) = 1;
  *(ushort *)(extraout_ECX + 9) = (ushort)((byte)extraout_ECX + 0x2a & 0xf);
  *(undefined1 *)((int)extraout_ECX + 9) = 0;
  *(undefined2 *)(extraout_ECX + 0xb) = 0x1e00;
  *(short *)((int)extraout_ECX + 0x26) = (short)((int)extraout_ECX + 0x2aU >> 4);
  local_14 = 4;
  local_10 = (short)((uint)extraout_ECX >> 4);
  local_12 = (ushort)((byte)extraout_ECX & 0xf);
  uVar2 = *(short *)(in_EAX + 0x46) + 1;
  *(ushort *)(in_EAX + 0x46) = uVar2;
  if (uVar2 < 0x1e) {
    puVar3 = (undefined4 *)&local_14;
    puVar4 = (undefined4 *)(*(int *)(in_EAX + 0x1e) + 0x90 + (uVar2 - 1) * 6);
    for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
  }
  else {
    *(undefined2 *)(in_EAX + 0x46) = 0x1f;
    FUN_00102834();
  }
  return;
}

/******************************************************************************
 * Function : sub_1026b0 (Ghidra: FUN_001026b0)
 * Prototype: int sub_1026b0(void);
 * Address  : 0x1026b0 (Size: 115 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x102e4c, 0x1037c8, 0x1044e0, 0x104d44, 0x1056a8, 0x106da4, 0x1073e0, 0x1079f8, 0x108b74, 0x1099cc
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_001026b0(void)

{
  ushort uVar1;
  undefined2 *in_ECX;
  int iVar2;
  int in_EDX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  if ((*(char *)(in_EDX + 8) == '\0') && (*(char *)(in_EDX + 9) == '\0')) {
    uVar1 = *(ushort *)(in_EDX + 0x2c);
    *in_ECX = *(undefined2 *)(in_EDX + 0x46);
    puVar4 = (undefined4 *)(in_EDX + 0x3c);
    puVar5 = (undefined4 *)(in_ECX + 3);
    for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    iVar3 = (ushort)(uVar1 >> 8 | uVar1 << 8) - 0x1e;
    puVar4 = (undefined4 *)(in_EDX + 0x40);
    puVar5 = (undefined4 *)(in_ECX + 5);
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_102724 (Ghidra: FUN_00102724)
 * Prototype: undefined8 sub_102724(void);
 * Address  : 0x102724 (Size: 52 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00102724(void)

{
  int in_EAX;
  undefined4 in_EDX;
  int iVar1;
  
  do {
    *(short *)(in_EAX + 0x44) = *(short *)(in_EAX + 0x44) + 1;
    if (0x1f < *(ushort *)(in_EAX + 0x44)) {
      *(undefined2 *)(in_EAX + 0x44) = 1;
    }
    iVar1 = (*(ushort *)(in_EAX + 0x44) - 1) * 0x26a + *(int *)(in_EAX + 0x16);
  } while (*(char *)(iVar1 + 8) != '\0');
  return CONCAT44(in_EDX,iVar1);
}

/******************************************************************************
 * Function : sub_102758 (Ghidra: FUN_00102758)
 * Prototype: void sub_102758(void);
 * Address  : 0x102758 (Size: 130 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x102834
 ******************************************************************************/
void FUN_00102758(void)

{
  int in_EAX;
  ushort uVar1;
  int iVar2;
  uint in_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined2 local_14;
  
  local_18._0_2_ = 3;
  local_14 = (short)(in_EDX >> 4);
  local_18._2_2_ = (ushort)in_EDX & 0xf;
  uVar1 = *(short *)(in_EAX + 0x46) + 1;
  *(ushort *)(in_EAX + 0x46) = uVar1;
  if (uVar1 < 0x1e) {
    puVar3 = &local_18;
    puVar4 = (undefined4 *)(*(int *)(in_EAX + 0x1e) + 0x90 + (uVar1 - 1) * 6);
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  else {
    *(undefined2 *)(in_EAX + 0x46) = 0x1f;
    FUN_00102834();
  }
  return;
}

/******************************************************************************
 * Function : sub_102834 (Ghidra: FUN_00102834)
 * Prototype: void sub_102834(void);
 * Address  : 0x102834 (Size: 261 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 22 -> 0x1023f4, 0x1025c0, 0x102758, 0x1029e0, 0x102dd0, 0x102e4c, 0x1032d8, 0x1037c8, 0x1044e0, 0x104d44 ...
 * Callees  : 3 -> 0xe6a10, 0xfed1d, 0xfed45
 ******************************************************************************/
void FUN_00102834(void)

{
  int in_EAX;
  ushort extraout_CX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_7c [16];
  undefined4 local_6c;
  uint local_60;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 *local_34;
  undefined4 local_20;
  undefined2 local_1c;
  
  if (*(short *)(in_EAX + 0x46) != 0) {
    *(short *)(in_EAX + 0x46) = *(short *)(in_EAX + 0x46) + 1;
    if (*(ushort *)(in_EAX + 0x46) < 0x20) {
      local_20._0_2_ = 10;
      local_20._2_2_ = 0;
      local_1c = 0;
      puVar2 = &local_20;
      puVar3 = (undefined4 *)((*(ushort *)(in_EAX + 0x46) - 1) * 6 + *(int *)(in_EAX + 0x1e) + 0x90)
      ;
      for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    FUN_000e6a10();
    local_6c = 0xffff;
    local_60 = (uint)*(ushort *)(in_EAX + 0x46);
    FUN_000e6a10();
    local_44 = (uint)extraout_CX;
    local_48 = 0x300;
    FUN_000fed1d();
    local_4c = *(undefined2 *)(in_EAX + 0x36);
    local_4e = *(undefined2 *)(in_EAX + 0x38);
    local_34 = auStack_7c;
    FUN_000fed45();
    *(undefined2 *)(in_EAX + 0x46) = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_10293c (Ghidra: FUN_0010293c)
 * Prototype: int sub_10293c(void);
 * Address  : 0x10293c (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1032d8
 * Callees  : 2 -> 0xe6a10, 0xf7786
 ******************************************************************************/
int FUN_0010293c(void)

{
  int iVar1;
  uint *unaff_EBX;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  FUN_000f7786();
  if (local_14 == 0) {
    if (&stack0x00000000 != (undefined1 *)0x10) {
      local_10 = local_20;
    }
    iVar1 = 0x1000;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    FUN_000e6a10();
    *unaff_EBX = local_10 & 0xffff;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_1029b8 (Ghidra: FUN_001029b8)
 * Prototype: void sub_1029b8(void);
 * Address  : 0x1029b8 (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x103464
 * Callees  : 1 -> 0xf7786
 ******************************************************************************/
void FUN_001029b8(void)

{
  FUN_000f7786(0x101);
  return;
}

/******************************************************************************
 * Function : dk_open_socket_return_code_1029e0 (Ghidra: FUN_001029e0)
 * Prototype: undefined4 dk_open_socket_return_code_1029e0(void);
 * Address  : 0x1029e0 (Size: 1007 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'OPEN SOCKET 0x%x, RETURN CODE 0x%x'
 * Callers  : 2 -> 0x102e4c, 0x103528
 * Callees  : 7 -> 0xe6a10, 0xfed1d, 0xfed45, 0x1023f4, 0x1025c0, 0x102834, 0x103100
 * Strings  :
 *   - 0x172672: "OPEN SOCKET 0x%x, RETURN CODE 0x%x\n"
 ******************************************************************************/
undefined4 FUN_001029e0(void)

{
  char cVar1;
  int in_EAX;
  ushort extraout_CX;
  ushort extraout_CX_00;
  undefined2 *in_ECX;
  int iVar2;
  char *unaff_EBX;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  byte bVar7;
  char local_138 [48];
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined1 local_f8 [20];
  uint local_e4;
  int local_dc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined1 local_c4 [20];
  uint local_b0;
  int local_a8;
  undefined2 local_96;
  undefined2 local_94;
  undefined4 local_90;
  uint local_8c;
  undefined1 *local_7c;
  undefined4 local_74;
  uint local_70;
  undefined1 *local_60;
  uint local_58;
  undefined4 auStack_52 [2];
  undefined2 local_48;
  undefined2 *local_20;
  undefined4 *local_1c;
  
  bVar7 = 0;
  local_20 = in_ECX;
  if (*(int *)(in_EAX + 8) == 0) {
    *(undefined2 *)(in_EAX + 0x48) = 0x452;
    local_58 = CONCAT22(local_58._2_2_,0x452);
    FUN_000e6a10();
    local_a8 = 0;
    local_b0 = (int)(local_58 & 0xffff) >> 8 | (local_58 & 0xff) << 8;
    FUN_000e6a10();
    local_8c = (uint)extraout_CX;
    local_90 = 0x300;
    FUN_000fed1d();
    local_94 = *(undefined2 *)(in_EAX + 0x36);
    local_96 = *(undefined2 *)(in_EAX + 0x38);
    local_7c = local_c4;
    FUN_000fed45();
    local_58 = CONCAT22(local_58._2_2_,(short)local_b0);
    local_1c = auStack_52;
    puVar5 = (undefined4 *)(in_EAX + 0xc);
    puVar4 = local_1c;
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    }
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar7 * -2 + 1);
    }
    FUN_00103100(s_OPEN_SOCKET_0x_x__RETURN_CODE_0x_00172672,local_b0,local_a8);
    if (local_a8 == 0) {
      *(undefined4 *)(in_EAX + 8) = 1;
      *(short *)(in_EAX + 0x48) = (short)local_58;
      for (uVar3 = 0; uVar3 < 0x20; uVar3 = uVar3 + 1) {
        FUN_001025c0();
      }
    }
    else {
      *(undefined2 *)(in_EAX + 0x48) = 0x4141;
      local_58 = CONCAT22(local_58._2_2_,0x4141);
      FUN_000e6a10();
      local_dc = 0;
      local_e4 = (int)(local_58 & 0xffff) >> 8 | (local_58 & 0xff) << 8;
      FUN_000e6a10();
      local_70 = (uint)extraout_CX_00;
      local_74 = 0x300;
      FUN_000fed1d();
      puVar5 = local_1c;
      local_c8 = *(undefined2 *)(in_EAX + 0x36);
      local_ca = *(undefined2 *)(in_EAX + 0x38);
      local_60 = local_f8;
      FUN_000fed45();
      local_58 = CONCAT22(local_58._2_2_,(short)local_e4);
      puVar4 = (undefined4 *)(in_EAX + 0xc);
      for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      }
      for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar7 * -2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      }
      FUN_00103100(s_OPEN_SOCKET_0x_x__RETURN_CODE_0x_00172672,local_e4,local_dc);
      if (local_dc != 0) goto LAB_00102ccd;
      *(undefined4 *)(in_EAX + 8) = 1;
      for (uVar3 = 0; uVar3 < 0x20; uVar3 = uVar3 + 1) {
        FUN_001025c0();
      }
    }
    FUN_00102834();
  }
LAB_00102ccd:
  if (*(int *)(in_EAX + 8) == 0) {
    return 1;
  }
  FUN_000e6a10();
  local_48 = *(undefined2 *)(in_EAX + 0x48);
  FUN_000e6a10();
  local_fc = 0x100;
  local_fe = *local_20;
  puVar5 = (undefined4 *)(in_EAX + 0xc);
  puVar4 = &local_108;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar7 * -2 + 1);
  }
  puVar5 = (undefined4 *)(in_EAX + 0x10);
  puVar4 = &local_104;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
  }
  for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar7 * -2 + 1);
  }
  pcVar6 = local_138;
  do {
    cVar1 = *unaff_EBX;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = unaff_EBX[1];
    unaff_EBX = unaff_EBX + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  FUN_001023f4(0x42);
  FUN_00102834();
  return 0;
}

/******************************************************************************
 * Function : sub_102dd0 (Ghidra: FUN_00102dd0)
 * Prototype: void sub_102dd0(void);
 * Address  : 0x102dd0 (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1044e0
 * Callees  : 3 -> 0xe6a10, 0x1023f4, 0x102834
 ******************************************************************************/
void FUN_00102dd0(void)

{
  undefined2 uVar1;
  
  FUN_000e6a10();
  uVar1 = 0;
  FUN_001023f4(4,0x5204);
  FUN_001023f4(4,CONCAT22(uVar1,0x4141));
  FUN_00102834();
  return;
}

/******************************************************************************
 * Function : sub_102e4c (Ghidra: FUN_00102e4c)
 * Prototype: void sub_102e4c(void);
 * Address  : 0x102e4c (Size: 678 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1056a8
 * Callees  : 7 -> 0xe6a10, 0xe8d4a, 0x1023f4, 0x1025c0, 0x1026b0, 0x102834, 0x1029e0
 ******************************************************************************/
void FUN_00102e4c(void)

{
  char cVar1;
  int *in_EAX;
  undefined2 *in_ECX;
  int iVar2;
  int iVar3;
  char *unaff_EBX;
  undefined2 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  int aiStack_ac [2];
  undefined2 local_a4 [2];
  char local_a0 [48];
  int local_70;
  int local_6c;
  undefined2 local_66;
  undefined2 local_60 [24];
  uint local_2c [7];
  short local_10 [2];
  
  bVar15 = 0;
  if (in_EAX[2] != 0) {
    FUN_000e6a10();
    local_a4[0] = 0x200;
    local_66 = *in_ECX;
    piVar6 = in_EAX + 3;
    piVar9 = &local_70;
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar9 = *piVar6;
      piVar6 = piVar6 + (uint)bVar15 * -2 + 1;
      piVar9 = piVar9 + (uint)bVar15 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)piVar9 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + (uint)bVar15 * -2 + 1);
      piVar9 = (int *)((int)piVar9 + (uint)bVar15 * -2 + 1);
    }
    piVar6 = in_EAX + 4;
    piVar9 = &local_6c;
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar9 = *piVar6;
      piVar6 = piVar6 + (uint)bVar15 * -2 + 1;
      piVar9 = piVar9 + (uint)bVar15 * -2 + 1;
    }
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)piVar9 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + (uint)bVar15 * -2 + 1);
      piVar9 = (int *)((int)piVar9 + (uint)bVar15 * -2 + 1);
    }
    pcVar10 = local_a0;
    do {
      cVar1 = *unaff_EBX;
      *pcVar10 = cVar1;
      puVar4 = local_a4;
      if (cVar1 == '\0') break;
      cVar1 = unaff_EBX[1];
      unaff_EBX = unaff_EBX + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
      puVar4 = local_a4;
    } while (cVar1 != '\0');
    while (*(uint *)((int)puVar4 + 0x88) < *(int *)((int)in_EAX + 0x1a) + 0x4d40U) {
      *(undefined4 *)((int)puVar4 + -4) = 0x102fc6;
      iVar2 = FUN_001026b0();
      puVar5 = (undefined1 *)puVar4;
      if (iVar2 != 0) {
        iVar3 = 6;
        bVar13 = false;
        iVar2 = 0;
        bVar14 = true;
        pbVar7 = *(byte **)((int)puVar4 + 0x8c);
        pbVar11 = *(byte **)((int)puVar4 + 0x78);
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar13 = *pbVar7 < *pbVar11;
          bVar14 = *pbVar7 == *pbVar11;
          pbVar7 = pbVar7 + (uint)bVar15 * -2 + 1;
          pbVar11 = pbVar11 + (uint)bVar15 * -2 + 1;
        } while (bVar14);
        if (!bVar14) {
          iVar2 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        }
        if (((iVar2 != 0) && (**(short **)((int)puVar4 + 0x84) == 0x100)) &&
           ((short)*(undefined4 *)((int)puVar4 + 0x90) == (*(short **)((int)puVar4 + 0x84))[1])) {
          *(undefined2 *)((int)puVar4 + 0x44) = *(undefined2 *)(*(int *)((int)puVar4 + 0x88) + 0x46)
          ;
          *(undefined4 **)((int)puVar4 + -4) = (undefined4 *)((int)puVar4 + 0x4a);
          puVar8 = *(undefined4 **)((int)puVar4 + 0x80);
          puVar12 = (undefined4 *)((int)puVar4 + 0x4a);
          for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar15 * -2 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar15 * -2 + 1);
          }
          *(undefined4 **)((int)puVar4 + -4) = (undefined4 *)((int)puVar4 + 0x4e);
          puVar8 = *(undefined4 **)((int)puVar4 + 0x8c);
          puVar12 = (undefined4 *)((int)puVar4 + 0x4e);
          for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + (uint)bVar15 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
          }
          for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar15 * -2 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar15 * -2 + 1);
          }
          puVar5 = (undefined1 *)((int)puVar4 + -4);
          *(undefined4 *)((int)puVar4 + -4) = 0x42;
          *(undefined4 *)((int)puVar4 + -8) = 0x103072;
          FUN_001023f4();
        }
        *(short *)(puVar5 + 100) = (short)in_EAX[0x12];
        *(int *)(puVar5 + 0x94) = *(int *)(puVar5 + 0x94) + 1;
        *(undefined4 *)(puVar5 + -4) = 0x10309c;
        FUN_001025c0();
      }
      *(int *)(puVar5 + 0x8c) = *(int *)(puVar5 + 0x8c) + 0x26a;
      *(int *)(puVar5 + 0x84) = *(int *)(puVar5 + 0x84) + 0x26a;
      *(int *)(puVar5 + 0x80) = *(int *)(puVar5 + 0x80) + 0x26a;
      *(int *)(puVar5 + 0x88) = *(int *)(puVar5 + 0x88) + 0x26a;
      puVar4 = (undefined2 *)puVar5;
    }
    *(undefined4 *)((int)puVar4 + -4) = 0x1030a6;
    iVar2 = FUN_000e8d4a();
    in_EAX[1] = iVar2;
    if ((uint)(iVar2 - *in_EAX) < 0xfa1) {
      if (*(short *)((int)puVar4 + 0x94) != 0) {
        *(undefined4 *)((int)puVar4 + -4) = 0x1030e8;
        FUN_00102834();
      }
    }
    else {
      *(undefined4 *)((int)puVar4 + -4) = 0x1030ce;
      FUN_001029e0();
      *in_EAX = in_EAX[1];
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_103100 (Ghidra: FUN_00103100)
 * Prototype: void sub_103100(void);
 * Address  : 0x103100 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x101360, 0x101c78, 0x101fec, 0x102108, 0x102264, 0x102344, 0x1029e0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00103100(void)

{
  return;
}

/******************************************************************************
 * Function : sub_103110 (Ghidra: FUN_00103110)
 * Prototype: undefined1 sub_103110(void);
 * Address  : 0x103110 (Size: 3 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_00103110(void)

{
  return 0;
}

/******************************************************************************
 * Function : sub_103114 (Ghidra: FUN_00103114)
 * Prototype: undefined1 sub_103114(void);
 * Address  : 0x103114 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_00103114(void)

{
  int in_EAX;
  undefined1 uVar1;
  undefined4 in_EDX;
  
  uVar1 = 0xff;
  if (*(int *)(in_EAX + 0x7a8) != 0) {
    uVar1 = 0;
    *(undefined4 *)(in_EAX + 0x1832) = in_EDX;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_103134 (Ghidra: FUN_00103134)
 * Prototype: int sub_103134(void);
 * Address  : 0x103134 (Size: 180 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xed028, 0xff0ec, 0x101318, 0x11fc54, 0x11fc74
 ******************************************************************************/
int FUN_00103134(void)

{
  int in_EAX;
  uint extraout_ECX;
  uint in_EDX;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  
  if ((in_EDX & 4) == 0) {
    local_20 = DAT_003d97d0;
    local_1c = &DAT_00174814;
    local_18 = 2;
    DAT_003d97d0 = &local_20;
    *(undefined ***)(in_EAX + 0xd7c) = &PTR_FUN_00103134_00174668;
    FUN_000ff0ec();
    *(undefined2 *)(in_EAX + 0x17ed) = 0;
    local_18 = 1;
    FUN_00101318();
    local_18 = 0;
    in_EAX = FUN_000ff0ec();
    if ((extraout_ECX & 2) != 0) {
      FUN_000ed028();
    }
    DAT_003d97d0 = (undefined4 *)local_20;
  }
  else {
    FUN_0011fc54();
    FUN_0011fc74();
  }
  return in_EAX;
}

/******************************************************************************
 * Function : sub_1037c8 (Ghidra: FUN_001037c8)
 * Prototype: undefined1 sub_1037c8(void);
 * Address  : 0x1037c8 (Size: 2706 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 11 -> 0xe6a10, 0xe8d4a, 0xe9484, 0xe94b0, 0xff398, 0xff834, 0x1023f4, 0x1025c0, 0x1026b0, 0x102834 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00103978) */
/* WARNING: Removing unreachable block (ram,0x00103d66) */

undefined1 FUN_001037c8(void)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint extraout_ECX;
  uint uVar8;
  char extraout_DL;
  int in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  uint *puVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined4 auStack_1960 [1525];
  undefined1 auStack_18c [8];
  undefined4 local_184;
  undefined4 auStack_180 [26];
  undefined4 local_116 [6];
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 auStack_ec [18];
  undefined4 local_a4;
  byte local_9e [14];
  undefined4 local_90;
  byte local_8a [18];
  int local_78 [4];
  int local_68;
  uint local_5c;
  uint local_58;
  int local_54 [11];
  undefined1 local_28 [8];
  short local_20;
  
  bVar22 = 0;
  puVar12 = (undefined4 *)auStack_18c;
  if (*(int *)(in_EAX + 0xd74) != 0) {
    local_78[3] = in_EAX;
    local_68 = in_EDX;
    if (in_EDX != 0) {
      puVar12 = (undefined4 *)(in_EDX + 0x29);
      puVar10 = &local_a4;
      for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar6 = 2; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    puVar12 = (undefined4 *)auStack_18c;
    if (((*(int *)(local_78[3] + 0x7a8) == 0) &&
        (puVar12 = (undefined4 *)auStack_18c, *(uint *)(local_68 + 1) < 0x20)) &&
       (puVar12 = (undefined4 *)auStack_18c,
       *(short *)(*(uint *)(local_68 + 1) * 0x36 + local_78[3] + 0xdd2) != 0)) {
      puVar12 = &local_a4;
      puVar10 = &local_90;
      for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      auStack_1960[0x5f4] = 0x1038df;
      FUN_000e6a10();
      puVar12 = auStack_1960 + 0x5f4;
      auStack_1960[0x5f4] = 0x56;
      local_fc = 0x48515542;
      puVar10 = (undefined4 *)(local_78[3] + 0x158b + (uint)bVar22 * -8);
      local_f0 = *(undefined4 *)(local_78[3] + 0x1587);
      puVar11 = puVar10 + (uint)bVar22 * -2 + 1;
      auStack_ec[(uint)bVar22 * -2] = *puVar10;
      auStack_ec[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] = *puVar11;
      (auStack_ec + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1] =
           puVar11[(uint)bVar22 * -2 + 1];
      auStack_1960[0x5f3] = 0x103911;
      FUN_001023f4();
      if ((DAT_003e02b0 & 1) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 1;
        auStack_1960[0x5f3] = 0x103937;
        DAT_003e02a4 = FUN_000e8d4a();
      }
      if ((DAT_003e02b0 & 2) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 2;
        auStack_1960[0x5f3] = 0x103955;
        DAT_003e02a8 = FUN_000e8d4a();
      }
      auStack_1960[0x5f3] = 0x10395f;
      DAT_003e02a8 = FUN_000e8d4a();
      DAT_003e02ac = DAT_003e02ac + 1;
      auStack_1960[0x5f3] = 0x103999;
      FUN_00102834();
      if (99 < (uint)(extraout_EDX - DAT_003e02a4)) {
        DAT_003e02ac = 0;
        DAT_003e02a4 = extraout_EDX;
      }
      auStack_1960[0x5f3] = 0x1039ba;
      iVar6 = FUN_000e8d4a();
joined_r0x001039ca:
      if (local_54[2] == 0) {
        auStack_1960[0x5f3] = 0x103a02;
        iVar4 = FUN_000e8d4a();
        if (200 < (uint)(iVar4 - iVar6)) goto LAB_00103bfd;
        uVar8 = *(uint *)(local_78[2] + 0xdca);
        puVar5 = (uint *)(uVar8 + 0x48);
        for (; uVar8 < *(int *)(local_78[2] + 0xdca) + 0x4d40U; uVar8 = uVar8 + 0x26a) {
          auStack_1960[0x5f3] = 0x103b7a;
          iVar4 = FUN_001026b0();
          if (iVar4 != 0) {
            iVar7 = 6;
            bVar20 = false;
            iVar4 = 0;
            bVar21 = true;
            pbVar13 = local_8a;
            pbVar16 = local_9e;
            do {
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              bVar20 = *pbVar13 < *pbVar16;
              bVar21 = *pbVar13 == *pbVar16;
              pbVar13 = pbVar13 + (uint)bVar22 * -2 + 1;
              pbVar16 = pbVar16 + (uint)bVar22 * -2 + 1;
            } while (bVar21);
            if (!bVar21) {
              iVar4 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            }
            if (iVar4 == 0) {
              cVar3 = -1;
              uVar1 = *puVar5;
              if (uVar1 < 0x4a435542) {
                if (uVar1 < 0x47445542) {
                  if (0x41535541 < uVar1) {
                    if (uVar1 < 0x41535543) goto LAB_00103a24;
                    bVar20 = uVar1 == 0x44535542;
                    goto LAB_00103a95;
                  }
                }
                else {
                  if (uVar1 < 0x47445543) goto LAB_00103a42;
                  if (uVar1 < 0x49435542) {
                    bVar20 = uVar1 == 0x48515542;
                  }
                  else {
                    if (uVar1 < 0x49435543) goto LAB_00103a24;
                    bVar20 = uVar1 == 0x49485542;
                  }
LAB_00103a95:
                  if (bVar20) goto LAB_00103a24;
                }
              }
              else {
                if (0x4a435542 < uVar1) {
                  if (uVar1 < 0x4e445542) {
                    if (uVar1 < 0x4c435542) {
                      bVar20 = uVar1 == 0x4b535542;
                    }
                    else {
                      if (uVar1 < 0x4c435543) goto LAB_00103a24;
                      bVar20 = uVar1 == 0x4c485542;
                    }
                  }
                  else {
                    if (uVar1 < 0x4e445543) goto LAB_00103a42;
                    if (uVar1 < 0x504e5542) {
                      bVar20 = uVar1 == 0x50485542;
                    }
                    else {
                      if (uVar1 < 0x504e5543) goto LAB_00103a24;
                      bVar20 = uVar1 == 0x50515542;
                    }
                  }
                  goto LAB_00103a95;
                }
LAB_00103a24:
                iVar7 = 0x10;
                bVar20 = false;
                iVar4 = 0;
                bVar21 = true;
                pbVar13 = (byte *)(local_78[2] + 0x1587);
                puVar15 = puVar5 + 3;
                do {
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  bVar20 = *pbVar13 < (byte)*puVar15;
                  bVar21 = *pbVar13 == (byte)*puVar15;
                  pbVar13 = pbVar13 + (uint)bVar22 * -2 + 1;
                  puVar15 = (uint *)((int)puVar15 + (uint)bVar22 * -2 + 1);
                } while (bVar21);
                if (!bVar21) {
                  iVar4 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                }
                if (iVar4 == 0) {
LAB_00103a42:
                  cVar3 = '\0';
                }
              }
              if (((cVar3 == '\0') && (*puVar5 == 0x49485542)) && (local_20 == (short)puVar5[0x12]))
              {
                local_5c = (uint)*(ushort *)((int)puVar5 + 0x46);
                local_58 = (uint)(ushort)puVar5[0x11];
                local_54[2] = 1;
                auStack_1960[0x5f3] = 0x103af9;
                FUN_001025c0();
                break;
              }
            }
            auStack_1960[0x5f3] = 0x103b21;
            FUN_001025c0();
          }
          puVar5 = (uint *)((int)puVar5 + 0x26a);
        }
        goto joined_r0x001039ca;
      }
LAB_00103bfd:
      if (local_54[2] == 1) {
        if (local_5c <= local_58) {
          return 0xff;
        }
        auStack_1960[0x5f3] = 0x103c48;
        uVar23 = FUN_000e9484();
        *(int *)((int)((ulonglong)uVar23 >> 0x20) + 0xdce) = (int)uVar23;
        if ((int)uVar23 == 0) {
          return 0xff;
        }
        auStack_1960[0x5f3] = 0x103c78;
        FUN_000e6a10();
        auStack_1960[0x5f3] = 0x103c8b;
        FUN_000e6a10();
        auStack_1960[0x5f4] = 0x4a435542;
        puVar12 = (undefined4 *)(local_78[2] + 0x158b + (uint)bVar22 * -8);
        local_184 = *(undefined4 *)(local_78[2] + 0x1587);
        puVar10 = puVar12 + (uint)bVar22 * -2 + 1;
        auStack_180[(uint)bVar22 * -2] = *puVar12;
        auStack_180[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1] = *puVar10;
        (auStack_180 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)[(uint)bVar22 * -2 + 1] =
             puVar10[(uint)bVar22 * -2 + 1];
        puVar12 = (undefined4 *)(local_78[2] + 0x1492);
        puVar10 = local_116;
        for (uVar8 = extraout_ECX >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar12;
          puVar12 = puVar12 + (uint)bVar22 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar22 * -2 + 1;
        }
        for (uVar8 = extraout_ECX & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + (uint)bVar22 * -2 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar22 * -2 + 1);
        }
        auStack_1960[0x5f3] = 0x103cdb;
        FUN_000ff834();
        puVar12 = auStack_1960 + 0x5f3;
        auStack_1960[0x5f3] = 0x8e;
        FUN_001023f4();
        if ((DAT_003e02b0 & 1) == 0) {
          DAT_003e02b0 = DAT_003e02b0 | 1;
          DAT_003e02a4 = FUN_000e8d4a();
        }
        if ((DAT_003e02b0 & 2) == 0) {
          DAT_003e02b0 = DAT_003e02b0 | 2;
          DAT_003e02a8 = FUN_000e8d4a();
        }
        DAT_003e02a8 = FUN_000e8d4a();
        DAT_003e02ac = DAT_003e02ac + 1;
        FUN_00102834();
        if (99 < (uint)(extraout_EDX_00 - DAT_003e02a4)) {
          DAT_003e02ac = 0;
          DAT_003e02a4 = extraout_EDX_00;
        }
        local_78[0] = FUN_000e8d4a();
LAB_00103e1f:
        *(undefined4 *)((int)puVar12 + -4) = 0x103e24;
        iVar6 = FUN_000e8d4a();
        if ((uint)(iVar6 - *(int *)((int)puVar12 + 0x11c)) < 0x3e9) {
          if (0x19 < (uint)(iVar6 - *(int *)((int)puVar12 + 0x140))) {
            puVar9 = (undefined1 *)((int)puVar12 + -4);
            *(undefined4 *)((int)puVar12 + -4) = 0x8e;
            *(int *)((int)puVar12 + 0x140) = iVar6;
            *(undefined4 *)((int)puVar12 + -8) = 0x103e79;
            FUN_001023f4();
            if ((DAT_003e02b0 & 1) == 0) {
              DAT_003e02b0 = DAT_003e02b0 | 1;
              *(undefined4 *)((int)puVar12 + -8) = 0x103e9d;
              DAT_003e02a4 = FUN_000e8d4a();
            }
            if ((DAT_003e02b0 & 2) == 0) {
              DAT_003e02b0 = DAT_003e02b0 | 2;
              *(undefined4 *)((int)puVar12 + -8) = 0x103ebd;
              DAT_003e02a8 = FUN_000e8d4a();
            }
            *(undefined4 *)((int)puVar12 + -8) = 0x103ec7;
            iVar6 = FUN_000e8d4a();
            if ((extraout_DL == '\0') || (0x32 < (uint)(iVar6 - DAT_003e02a8))) {
              *(undefined4 *)((int)puVar12 + -8) = 0x103efb;
              DAT_003e02a8 = iVar6;
              DAT_003e02ac = DAT_003e02ac + 1;
              FUN_00102834();
            }
            puVar12 = (undefined4 *)((int)puVar12 + -4);
            if (99 < (uint)(iVar6 - DAT_003e02a4)) {
              DAT_003e02ac = 0;
              puVar12 = (undefined4 *)puVar9;
              DAT_003e02a4 = iVar6;
            }
          }
          uVar8 = *(uint *)(*(int *)((int)puVar12 + 0x120) + 0xdca);
          *(uint *)((int)puVar12 + 0x168) = uVar8 + 0x48;
          for (; uVar8 < *(int *)(*(int *)((int)puVar12 + 0x120) + 0xdca) + 0x4d40U;
              uVar8 = uVar8 + 0x26a) {
            *(undefined4 *)((int)puVar12 + 0x130) = *(undefined4 *)((int)puVar12 + 0x168);
            *(undefined4 *)((int)puVar12 + -4) = 0x1041b4;
            iVar6 = FUN_001026b0();
            if (iVar6 != 0) {
              iVar4 = 6;
              bVar20 = false;
              iVar6 = 0;
              bVar21 = true;
              pbVar13 = (byte *)((int)puVar12 + 0x116);
              pbVar16 = (byte *)((int)puVar12 + 0xf2);
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar20 = *pbVar13 < *pbVar16;
                bVar21 = *pbVar13 == *pbVar16;
                pbVar13 = pbVar13 + (uint)bVar22 * -2 + 1;
                pbVar16 = pbVar16 + (uint)bVar22 * -2 + 1;
              } while (bVar21);
              if (!bVar21) {
                iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              }
              if (iVar6 == 0) {
                cVar3 = -1;
                uVar1 = **(uint **)((int)puVar12 + 0x168);
                if (uVar1 < 0x4a435542) {
                  if (uVar1 < 0x47445542) {
                    if (0x41535541 < uVar1) {
                      if (uVar1 < 0x41535543) goto LAB_00103f34;
                      bVar20 = uVar1 == 0x44535542;
                      goto LAB_00103fa5;
                    }
                  }
                  else {
                    if (uVar1 < 0x47445543) goto LAB_00103f52;
                    if (uVar1 < 0x49435542) {
                      bVar20 = uVar1 == 0x48515542;
                    }
                    else {
                      if (uVar1 < 0x49435543) goto LAB_00103f34;
                      bVar20 = uVar1 == 0x49485542;
                    }
LAB_00103fa5:
                    if (bVar20) goto LAB_00103f34;
                  }
                }
                else {
                  if (0x4a435542 < uVar1) {
                    if (uVar1 < 0x4e445542) {
                      if (uVar1 < 0x4c435542) {
                        bVar20 = uVar1 == 0x4b535542;
                      }
                      else {
                        if (uVar1 < 0x4c435543) goto LAB_00103f34;
                        bVar20 = uVar1 == 0x4c485542;
                      }
                    }
                    else {
                      if (uVar1 < 0x4e445543) goto LAB_00103f52;
                      if (uVar1 < 0x504e5542) {
                        bVar20 = uVar1 == 0x50485542;
                      }
                      else {
                        if (uVar1 < 0x504e5543) goto LAB_00103f34;
                        bVar20 = uVar1 == 0x50515542;
                      }
                    }
                    goto LAB_00103fa5;
                  }
LAB_00103f34:
                  iVar4 = 0x10;
                  bVar20 = false;
                  iVar6 = 0;
                  bVar21 = true;
                  pbVar13 = (byte *)(*(int *)((int)puVar12 + 0x120) + 0x1587);
                  pbVar16 = (byte *)(*(int *)((int)puVar12 + 0x168) + 0xc);
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar20 = *pbVar13 < *pbVar16;
                    bVar21 = *pbVar13 == *pbVar16;
                    pbVar13 = pbVar13 + (uint)bVar22 * -2 + 1;
                    pbVar16 = pbVar16 + (uint)bVar22 * -2 + 1;
                  } while (bVar21);
                  if (!bVar21) {
                    iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                  }
                  if (iVar6 == 0) {
LAB_00103f52:
                    cVar3 = '\0';
                  }
                }
                if ((cVar3 == '\0') && (**(int **)((int)puVar12 + 0x130) == 0x504e5542)) {
                  iVar4 = 0x10;
                  bVar20 = false;
                  iVar6 = 0;
                  bVar21 = true;
                  pbVar13 = *(byte **)((int)puVar12 + 0x15c);
                  pbVar16 = (byte *)((int)*(int **)((int)puVar12 + 0x130) + 0x76);
                  do {
                    if (iVar4 == 0) break;
                    iVar4 = iVar4 + -1;
                    bVar20 = *pbVar13 < *pbVar16;
                    bVar21 = *pbVar13 == *pbVar16;
                    pbVar13 = pbVar13 + (uint)bVar22 * -2 + 1;
                    pbVar16 = pbVar16 + (uint)bVar22 * -2 + 1;
                  } while (bVar21);
                  if (!bVar21) {
                    iVar6 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
                  }
                  if (iVar6 == 0) {
                    *(undefined4 *)((int)puVar12 + -4) = 0x103ff7;
                    FUN_000e6a10();
                    pcVar17 = *(char **)((int)puVar12 + 0x158);
                    pcVar14 = (char *)(*(int *)(*(int *)((int)puVar12 + 0x124) + 1) * 0x36 +
                                       *(int *)((int)puVar12 + 0x154) + 0x10);
                    *(char **)((int)puVar12 + -4) = pcVar17;
                    goto LAB_00104014;
                  }
                }
              }
              *(undefined4 *)((int)puVar12 + -4) = 0x104156;
              FUN_001025c0();
            }
            *(int *)((int)puVar12 + 0x168) = *(int *)((int)puVar12 + 0x168) + 0x26a;
          }
          goto LAB_00104099;
        }
        goto LAB_001040a7;
      }
    }
  }
LAB_00104249:
  return *(undefined1 *)((int)puVar12 + 0x178);
  while( true ) {
    cVar3 = pcVar14[1];
    pcVar14 = pcVar14 + 2;
    pcVar17[1] = cVar3;
    pcVar17 = pcVar17 + 2;
    if (cVar3 == '\0') break;
LAB_00104014:
    cVar3 = *pcVar14;
    *pcVar17 = cVar3;
    if (cVar3 == '\0') break;
  }
  iVar6 = *(int *)((int)puVar12 + 0x120);
  *(undefined4 *)(iVar6 + 0x156d) = *(undefined4 *)(*(int *)((int)puVar12 + 0x124) + 1);
  iVar4 = *(int *)((int)puVar12 + 0x130);
  puVar18 = (undefined4 *)(iVar6 + 0x1541 + (uint)bVar22 * -8);
  puVar10 = (undefined4 *)(iVar6 + 0x158b + (uint)bVar22 * -8);
  *(undefined4 *)(iVar6 + 0x153d) = *(undefined4 *)(iVar6 + 0x1587);
  puVar19 = puVar18 + (uint)bVar22 * -2 + 1;
  puVar11 = puVar10 + (uint)bVar22 * -2 + 1;
  *puVar18 = *puVar10;
  *puVar19 = *puVar11;
  puVar19[(uint)bVar22 * -2 + 1] = puVar11[(uint)bVar22 * -2 + 1];
  *(undefined4 *)(iVar6 + 0x1575) = *(undefined4 *)(iVar4 + 0x52);
  *(undefined4 *)(iVar6 + 0x1571) = *(undefined4 *)(*(int *)((int)puVar12 + 0x130) + 0x40);
  *(undefined4 *)((int)puVar12 + 0x16c) = 1;
  *(undefined4 *)((int)puVar12 + -4) = 0x104099;
  FUN_001025c0();
LAB_00104099:
  if (*(int *)((int)puVar12 + 0x16c) != 0) goto LAB_001040a7;
  goto LAB_00103e1f;
LAB_001040a7:
  if (*(int *)((int)puVar12 + 0x16c) == 1) {
    *(undefined4 *)((int)puVar12 + -4) = 0x1040ca;
    FUN_000ff398();
    *(undefined4 *)((int)puVar12 + -4) = 0x1040d6;
    cVar3 = FUN_00106da4();
    if (cVar3 == '\0') {
      iVar6 = *(int *)((int)puVar12 + 0x120);
      *(undefined2 *)(iVar6 + 0x17ef) = 2;
      *(undefined1 *)(iVar6 + 0x17f1) = 0;
      *(undefined4 *)(iVar6 + 0x7a8) = 1;
      iVar4 = iVar6;
      do {
        iVar7 = iVar4 + 1;
        *(undefined1 *)(iVar4 + 0x17f2) = 0;
        *(undefined1 *)(iVar4 + 0x1812) = 0;
        iVar4 = iVar7;
      } while (iVar7 != iVar6 + 0x20);
      uVar2 = *(undefined4 *)(*(int *)((int)puVar12 + 0x120) + 0x1575);
      *(undefined1 *)((int)puVar12 + 0x178) = 0;
      **(undefined4 **)((int)puVar12 + 0x120) = uVar2;
      return *(undefined1 *)((int)puVar12 + 0x178);
    }
  }
  *(undefined4 *)((int)puVar12 + -4) = 0x104249;
  FUN_000e94b0();
  goto LAB_00104249;
}

/******************************************************************************
 * Function : sub_10425c (Ghidra: FUN_0010425c)
 * Prototype: undefined8 sub_10425c(void);
 * Address  : 0x10425c (Size: 363 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xe6a10, 0xe94b0, 0xeb818, 0x1073e0
 ******************************************************************************/
undefined8 FUN_0010425c(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined4 auStackY_183c [1524];
  undefined4 uVar8;
  
  bVar6 = 0;
  if ((*(int *)(in_EAX + 0xd74) != 0) && (*(int *)(in_EAX + 0x7a8) != 0)) {
    FUN_000eb818();
    do {
      uVar7 = FUN_000eb818();
    } while ((uint)((int)uVar7 - (int)((ulonglong)uVar7 >> 0x20)) < 700);
    *(undefined4 *)(in_EAX + 0x1832) = 0;
    if ((*(short *)(in_EAX + 0x17ef) == 1) || (*(short *)(in_EAX + 0x17ef) == 2)) {
      if (*(short *)(in_EAX + 0x17ef) == 1) {
        uVar1 = *(ushort *)(in_EAX + 0x1523);
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0x1579);
      }
      if (1 < uVar1) {
        FUN_000e6a10();
        uVar8 = 0x44535542;
        *(char *)(in_EAX + 0x17f1) = *(char *)(in_EAX + 0x17f1) + '\x01';
        puVar4 = (undefined4 *)(in_EAX + 0x158b + (uint)bVar6 * -8);
        puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
        *(undefined4 *)(&stack0xffffffa4 + (uint)bVar6 * -8) = *puVar4;
        *(undefined4 *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) = *puVar5;
        *(undefined4 *)
         ((int)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4
         ) = puVar5[(uint)bVar6 * -2 + 1];
        puVar4 = (undefined4 *)(*(int *)(in_EAX + 0xdce) + extraout_ECX * 0x38);
        puVar5 = (undefined4 *)&stack0xffffffb0;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
        }
        FUN_001073e0(uVar8,extraout_ECX);
      }
      if (*(int *)(in_EAX + 0xdce) != 0) {
        FUN_000e94b0();
        *(undefined4 *)(in_EAX + 0xdce) = 0;
        *(undefined2 *)(in_EAX + 0x17ef) = 0;
        *(undefined1 *)(in_EAX + 0x17f1) = 0;
        iVar3 = in_EAX;
        do {
          iVar2 = iVar3 + 1;
          *(undefined1 *)(iVar3 + 0x17f2) = 0;
          *(undefined1 *)(iVar3 + 0x1812) = 0;
          iVar3 = iVar2;
        } while (iVar2 != in_EAX + 0x20);
      }
    }
    *(undefined4 *)(in_EAX + 0x7a8) = 0;
    in_EAX = FUN_000e6a10();
  }
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),0xff));
}

/******************************************************************************
 * Function : sub_1043c8 (Ghidra: FUN_001043c8)
 * Prototype: char sub_1043c8(void);
 * Address  : 0x1043c8 (Size: 54 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xefd90, 0x10962c
 * Strings  :
 *   - 0x172873: "ERROR SendMessageToPlayer\n"
 ******************************************************************************/
char FUN_001043c8(void)

{
  char cVar1;
  char extraout_DL;
  
  cVar1 = FUN_0010962c();
  if (cVar1 == -1) {
    FUN_000efd90(s_ERROR_SendMessageToPlayer_00172873);
    cVar1 = extraout_DL;
  }
  return cVar1;
}

/******************************************************************************
 * Function : sub_104400 (Ghidra: FUN_00104400)
 * Prototype: void sub_104400(void);
 * Address  : 0x104400 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x104410
 ******************************************************************************/
void FUN_00104400(void)

{
  FUN_00104410(0);
  return;
}

/******************************************************************************
 * Function : sub_104408 (Ghidra: FUN_00104408)
 * Prototype: void sub_104408(void);
 * Address  : 0x104408 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x104410
 ******************************************************************************/
void FUN_00104408(void)

{
  FUN_00104410(1);
  return;
}

/******************************************************************************
 * Function : sub_104410 (Ghidra: FUN_00104410)
 * Prototype: undefined4 sub_104410(char param_1);
 * Address  : 0x104410 (Size: 208 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x104400, 0x104408
 * Callees  : 2 -> 0xff8c0, 0x1056a8
 ******************************************************************************/
undefined4 FUN_00104410(char param_1)

{
  bool bVar1;
  int in_EAX;
  uint *in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 *in_EDX;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int local_1c;
  undefined4 local_14;
  
  bVar6 = 0;
  bVar1 = false;
  local_14 = 0;
  puVar4 = *(undefined4 **)(in_EAX + 0x1597);
  do {
    if ((undefined4 *)(*(int *)(in_EAX + 0x1597) + 0x4380) <= puVar4) {
LAB_00104458:
      if (!bVar1) {
        puVar4 = (undefined4 *)0x0;
      }
      if (puVar4 == (undefined4 *)0x0) {
        *in_ECX = 0;
        FUN_001056a8();
      }
      else {
        *in_EDX = puVar4[0x86];
        FUN_000ff8c0();
        uVar2 = local_1c + 4;
        if (uVar2 <= *in_ECX) {
          local_14 = 1;
          puVar5 = puVar4;
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *unaff_EBX = *puVar5;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
            unaff_EBX = unaff_EBX + (uint)bVar6 * -2 + 1;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)unaff_EBX = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar6 * -2 + 1);
            unaff_EBX = (undefined4 *)((int)unaff_EBX + (uint)bVar6 * -2 + 1);
          }
          *in_ECX = local_1c + 4;
          if (param_1 == '\0') {
            *(undefined2 *)((int)puVar4 + 0x216) = 0;
          }
        }
      }
      return local_14;
    }
    if (*(short *)((int)puVar4 + 0x216) != 0) {
      bVar1 = true;
      goto LAB_00104458;
    }
    puVar4 = puVar4 + 0x87;
  } while( true );
}

/******************************************************************************
 * Function : dk_bu_gi_1044e0 (Ghidra: FUN_001044e0)
 * Prototype: undefined1 dk_bu_gi_1044e0(void);
 * Address  : 0x1044e0 (Size: 2148 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : String 'BU.GI.'
 * Callers  : 0 -> 
 * Callees  : 11 -> 0xe6a10, 0xe8d4a, 0xff3a4, 0xff4d8, 0xff834, 0x1023f4, 0x1025c0, 0x1026b0, 0x102834, 0x102dd0 ...
 * Strings  :
 *   - 0x17288e: "BU.GI."
 ******************************************************************************/
undefined1 FUN_001044e0(void)

{
  uint *puVar1;
  short sVar2;
  int in_EAX;
  undefined4 uVar3;
  char extraout_CL;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint uVar6;
  char cVar7;
  code *in_EDX;
  byte *pbVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  short *psVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  uint *puVar18;
  char *pcVar19;
  int iVar20;
  short *psVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  int aiStack_10c [33];
  undefined2 local_88 [8];
  int local_78 [8];
  int aiStack_58 [4];
  int local_40 [3];
  int local_34 [5];
  char acStack_20 [8];
  char local_18 [4];
  byte local_14 [4];
  
  bVar26 = 0;
  piVar11 = aiStack_10c + 2;
  piVar9 = aiStack_10c + 2;
  if (*(int *)(in_EAX + 0xd74) == 0) goto LAB_001045c1;
  if (*(int *)(in_EAX + 0x7a8) == 0) {
    aiStack_10c[1] = 0x1045d8;
    FUN_000ff4d8();
    aiStack_10c[1] = 0x1045dd;
    FUN_000e8d4a();
    iVar13 = in_EAX + 0x1492;
    iVar20 = in_EAX + 0xd80;
    aiStack_10c[1] = 0x10461a;
    FUN_00102dd0();
    aiStack_58[3] = iVar13;
    local_78[5] = iVar20;
    local_78[2] = in_EAX + 0xdd2;
    aiStack_58[2] = iVar13;
    local_78[6] = iVar20;
    local_78[1] = *(int *)(in_EAX + 0xdca) + 0x48;
    aiStack_58[1] = iVar13;
    local_78[7] = iVar20;
    local_78[0] = *(int *)(in_EAX + 0xdca) + 0x54;
    while ((uint)piVar9[0x36] < *(int *)(piVar9[0x32] + 0xdca) + 0x4d40U) {
      piVar9[-1] = 0x104abe;
      iVar13 = FUN_001026b0();
      if (iVar13 != 0) {
        puVar1 = (uint *)piVar9[0x24];
        piVar9[0x35] = piVar9[0x24];
        if ((short)*puVar1 == 0x200) {
          iVar20 = 6;
          piVar9[0x31] = piVar9[0x32];
          *(undefined1 *)(piVar9 + 0x3b) = 0xff;
          bVar24 = false;
          iVar13 = 0;
          bVar25 = true;
          puVar18 = puVar1 + 1;
          pbVar8 = &DAT_0017288e; /* 0x17288e="BU.GI." */
          do {
            if (iVar20 == 0) break;
            iVar20 = iVar20 + -1;
            bVar24 = (byte)*puVar18 < *pbVar8;
            bVar25 = (byte)*puVar18 == *pbVar8;
            puVar18 = (uint *)((int)puVar18 + (uint)bVar26 * -2 + 1);
            pbVar8 = pbVar8 + (uint)bVar26 * -2 + 1;
          } while (bVar25);
          if (!bVar25) {
            iVar13 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
          }
          if (iVar13 == 0) {
            piVar9[0x33] = (int)(piVar9 + 0x1b);
            *(undefined1 *)(piVar9 + 0x3c) = 0;
            psVar14 = (short *)((int)puVar1 + 10);
LAB_00104b39:
            if (*(byte *)(piVar9 + 0x3c) < 4) {
              piVar9[-1] = 0x104b5b;
              FUN_000e6a10();
              uVar6 = 0;
              do {
                uVar4 = 0xffffffff;
                psVar21 = (short *)((int)puVar1 + 10);
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  sVar2 = *psVar21;
                  psVar21 = (short *)((int)psVar21 + (uint)bVar26 * -2 + 1);
                } while ((char)sVar2 != '\0');
                if (~uVar4 - 1 <= uVar6) goto LAB_001046b5;
                sVar2 = *psVar14;
                psVar14 = (short *)((int)psVar14 + 1);
                if ((char)sVar2 == '.') goto LAB_001046b5;
                *(char *)((int)piVar9 + uVar6 + 0x58) = (char)sVar2;
                uVar6 = uVar6 + 1;
              } while( true );
            }
            iVar20 = 0x10;
            bVar24 = false;
            iVar13 = 0;
            bVar25 = true;
            pbVar8 = (byte *)(piVar9[0x31] + 0x1587);
            pbVar16 = (byte *)(piVar9 + 0x1b);
            do {
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              bVar24 = *pbVar8 < *pbVar16;
              bVar25 = *pbVar8 == *pbVar16;
              pbVar8 = pbVar8 + (uint)bVar26 * -2 + 1;
              pbVar16 = pbVar16 + (uint)bVar26 * -2 + 1;
            } while (bVar25);
            if (!bVar25) {
              iVar13 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
            }
            if (iVar13 == 0) {
              *(undefined1 *)(piVar9 + 0x3b) = 0;
            }
          }
          if (*(char *)(piVar9 + 0x3b) == '\0') {
            piVar9[-1] = (int)piVar9 + 0x86;
            puVar15 = (undefined4 *)(piVar9[0x35] + 0x38);
            puVar17 = (undefined4 *)((int)piVar9 + 0x86);
            for (iVar13 = 1; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = *puVar15;
              puVar15 = puVar15 + (uint)bVar26 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar26 * -2 + 1;
            }
            for (iVar13 = 2; iVar13 != 0; iVar13 = iVar13 + -1) {
              *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
              puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar26 * -2 + 1);
              puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar26 * -2 + 1);
            }
            piVar9[-1] = (int)piVar9 + 0x82;
            puVar15 = (undefined4 *)(piVar9[0x35] + 0x34);
            puVar17 = (undefined4 *)((int)piVar9 + 0x82);
            for (iVar13 = 1; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar17 = *puVar15;
              puVar15 = puVar15 + (uint)bVar26 * -2 + 1;
              puVar17 = puVar17 + (uint)bVar26 * -2 + 1;
            }
            for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
              *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
              puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar26 * -2 + 1);
              puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar26 * -2 + 1);
            }
            iVar13 = piVar9[0x32];
            *(undefined2 *)(piVar9 + 0x1f) = *(undefined2 *)(piVar9[0x35] + 0x3e);
            piVar9[-1] = 0x1047a5;
            FUN_000e6a10();
            piVar9[-1] = 0x56;
            *piVar9 = 0x48515542;
            puVar22 = piVar9 + (uint)bVar26 * -2 + 4;
            puVar15 = (undefined4 *)(iVar13 + 0x158b + (uint)bVar26 * -8);
            piVar9[3] = *(undefined4 *)(iVar13 + 0x1587);
            puVar17 = puVar15 + (uint)bVar26 * -2 + 1;
            *puVar22 = *puVar15;
            puVar22[(uint)bVar26 * -2 + 1] = *puVar17;
            (puVar22 + (uint)bVar26 * -2 + 1)[(uint)bVar26 * -2 + 1] =
                 puVar17[(uint)bVar26 * -2 + 1];
            piVar9[-2] = 0x1047cf;
            FUN_001023f4();
            piVar9 = piVar9 + -1;
          }
        }
        else {
          piVar9[0x37] = (int)puVar1;
          uVar6 = *puVar1;
          cVar7 = -1;
          if (uVar6 < 0x4a435542) {
            if (uVar6 < 0x47445542) {
              if (0x41535541 < uVar6) {
                if (uVar6 < 0x41535543) goto LAB_001047d4;
                bVar24 = uVar6 == 0x44535542;
                goto LAB_0010488a;
              }
            }
            else {
              if (uVar6 < 0x47445543) goto LAB_001047f2;
              if (uVar6 < 0x49435542) {
                bVar24 = uVar6 == 0x48515542;
              }
              else {
                if (uVar6 < 0x49435543) goto LAB_001047d4;
                bVar24 = uVar6 == 0x49485542;
              }
LAB_0010488a:
              if (bVar24) goto LAB_001047d4;
            }
          }
          else {
            if (0x4a435542 < uVar6) {
              if (uVar6 < 0x4e445542) {
                if (uVar6 < 0x4c435542) {
                  bVar24 = uVar6 == 0x4b535542;
                }
                else {
                  if (uVar6 < 0x4c435543) goto LAB_001047d4;
                  bVar24 = uVar6 == 0x4c485542;
                }
              }
              else {
                if (uVar6 < 0x4e445543) goto LAB_001047f2;
                if (uVar6 < 0x504e5542) {
                  bVar24 = uVar6 == 0x50485542;
                }
                else {
                  if (uVar6 < 0x504e5543) goto LAB_001047d4;
                  bVar24 = uVar6 == 0x50515542;
                }
              }
              goto LAB_0010488a;
            }
LAB_001047d4:
            iVar20 = 0x10;
            bVar24 = false;
            iVar13 = 0;
            bVar25 = true;
            pbVar8 = (byte *)(piVar9[0x32] + 0x1587);
            pbVar16 = (byte *)piVar9[0x23];
            do {
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              bVar24 = *pbVar8 < *pbVar16;
              bVar25 = *pbVar8 == *pbVar16;
              pbVar8 = pbVar8 + (uint)bVar26 * -2 + 1;
              pbVar16 = pbVar16 + (uint)bVar26 * -2 + 1;
            } while (bVar25);
            if (!bVar25) {
              iVar13 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
            }
            if (iVar13 == 0) {
LAB_001047f2:
              cVar7 = '\0';
            }
          }
          if ((cVar7 == '\0') && (*(int *)piVar9[0x37] == 0x49485542)) {
            iVar13 = 0;
            pbVar8 = (byte *)(piVar9[0x25] + 10);
LAB_001048bd:
            if (iVar13 <= (int)(uint)*(ushort *)(piVar9[0x32] + 0x17ed)) {
              iVar5 = 6;
              piVar9[0x38] = piVar9[0x25] + iVar13 * 0x36;
              bVar24 = false;
              iVar20 = 0;
              bVar25 = true;
              pbVar16 = pbVar8;
              pbVar23 = (byte *)((int)piVar9 + 0x86);
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar24 = *pbVar16 < *pbVar23;
                bVar25 = *pbVar16 == *pbVar23;
                pbVar16 = pbVar16 + (uint)bVar26 * -2 + 1;
                pbVar23 = pbVar23 + (uint)bVar26 * -2 + 1;
              } while (bVar25);
              if (!bVar25) {
                iVar20 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
              }
              if (iVar20 != 0) goto LAB_001048b9;
              puVar15 = (undefined4 *)piVar9[0x38];
              iVar20 = iVar13 * 0x36 + piVar9[0x32];
              *(int *)(iVar20 + 0xe02) = piVar9[0x34];
              piVar9[-1] = (int)puVar15;
              puVar17 = piVar9 + 0x1f;
              for (iVar13 = 4; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar15 = *puVar17;
                puVar17 = puVar17 + (uint)bVar26 * -2 + 1;
                puVar15 = puVar15 + (uint)bVar26 * -2 + 1;
              }
              for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
                *(undefined1 *)puVar15 = *(undefined1 *)puVar17;
                puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar26 * -2 + 1);
                puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar26 * -2 + 1);
              }
              piVar9[-1] = 0x104952;
              FUN_000ff834();
              iVar13 = -1;
              *(undefined2 *)(iVar20 + 0xe06) = *(undefined2 *)(piVar9[0x37] + 0x48);
            }
            if (iVar13 == -1) goto LAB_00104a2f;
            iVar13 = piVar9[0x32];
            iVar20 = 0;
LAB_00104981:
            if (iVar20 <= (int)(uint)*(ushort *)(piVar9[0x32] + 0x17ed)) {
              if (*(int *)(iVar13 + 0xe02) != 0) goto LAB_0010497d;
              piVar9[-1] = iVar20 * 0x36 + piVar9[0x25];
              puVar15 = piVar9 + 0x1f;
              puVar17 = (undefined4 *)(iVar20 * 0x36 + piVar9[0x25]);
              for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar17 = *puVar15;
                puVar15 = puVar15 + (uint)bVar26 * -2 + 1;
                puVar17 = puVar17 + (uint)bVar26 * -2 + 1;
              }
              for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
                *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
                puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar26 * -2 + 1);
                puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar26 * -2 + 1);
              }
              piVar9[-1] = 0x1049e0;
              FUN_000ff834();
              *(int *)(iVar13 + 0xe02) = piVar9[0x34];
              *(undefined2 *)(iVar13 + 0xe06) = *(undefined2 *)(piVar9[0x37] + 0x48);
              iVar20 = -1;
            }
            if ((iVar20 != -1) && (iVar13 = piVar9[0x32], *(ushort *)(iVar13 + 0x17ed) < 0x20)) {
              *(short *)(iVar13 + 0x17ed) = *(short *)(iVar13 + 0x17ed) + 1;
            }
          }
        }
LAB_00104a2f:
        *(undefined4 *)((int)piVar9 + -4) = 0x104a49;
        FUN_001025c0();
      }
      *(int *)((int)piVar9 + 0x90) = *(int *)((int)piVar9 + 0x90) + 0x26a;
      *(int *)((int)piVar9 + 0x8c) = *(int *)((int)piVar9 + 0x8c) + 0x26a;
      *(int *)((int)piVar9 + 0xd8) = *(int *)((int)piVar9 + 0xd8) + 0x26a;
    }
    *(undefined1 *)(piVar9 + 0x39) = 0;
    if ((DAT_003e02b0 & 1) == 0) {
      DAT_003e02b0 = DAT_003e02b0 | 1;
      piVar9[-1] = 0x104b8d;
      DAT_003e02a4 = FUN_000e8d4a();
    }
    if ((DAT_003e02b0 & 2) == 0) {
      DAT_003e02b0 = DAT_003e02b0 | 2;
      piVar9[-1] = 0x104bab;
      DAT_003e02a8 = FUN_000e8d4a();
    }
    piVar9[-1] = 0x104bb5;
    iVar13 = FUN_000e8d4a();
    if ((*(char *)(piVar9 + 0x39) == '\0') || (0x32 < (uint)(iVar13 - DAT_003e02a8))) {
      piVar9[-1] = 0x104bef;
      DAT_003e02a8 = iVar13;
      DAT_003e02ac = DAT_003e02ac + 1;
      FUN_00102834();
    }
    if (99 < (uint)(iVar13 - DAT_003e02a4)) {
      DAT_003e02ac = 0;
      DAT_003e02a4 = iVar13;
    }
    iVar13 = piVar9[0x32];
    for (iVar20 = 0; iVar5 = piVar9[0x32], iVar20 <= (int)(uint)*(ushort *)(iVar5 + 0x17ed);
        iVar20 = iVar20 + 1) {
      if ((*(int *)(iVar13 + 0xe02) != 0) && (700 < (uint)(piVar9[0x34] - *(int *)(iVar13 + 0xe02)))
         ) {
        piVar9[-1] = 0x104c69;
        FUN_000e6a10();
        iVar20 = extraout_ECX;
      }
      iVar13 = iVar13 + 0x36;
    }
    piVar9[0x2b] = iVar5 + 0xdd2;
    piVar9[0x27] = iVar5;
    piVar11 = piVar9;
    for (iVar13 = 0; iVar13 <= (int)(uint)*(ushort *)(*(int *)((int)piVar11 + 200) + 0x17ed);
        iVar13 = iVar13 + 1) {
      puVar10 = (undefined1 *)piVar11;
      if (*(int *)(*(int *)((int)piVar11 + 0x9c) + 0xe02) != 0) {
        *(int *)((int)piVar11 + 0x98) = *(int *)((int)piVar11 + 0xac) + iVar13 * 0x36;
        *(undefined4 *)((int)piVar11 + -4) = 0x104ce6;
        iVar20 = FUN_000ff3a4();
        *(undefined4 **)((int)piVar11 + -4) = (undefined4 *)(iVar20 + 0x29);
        puVar15 = *(undefined4 **)((int)piVar11 + 0x98);
        puVar17 = (undefined4 *)(iVar20 + 0x29);
        for (uVar6 = extraout_ECX_00 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar17 = *puVar15;
          puVar15 = puVar15 + (uint)bVar26 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar26 * -2 + 1;
        }
        for (uVar6 = extraout_ECX_00 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar26 * -2 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar26 * -2 + 1);
        }
        *(undefined4 **)((int)piVar11 + -4) = (undefined4 *)(iVar20 + 0x39);
        puVar15 = (undefined4 *)(*(int *)((int)piVar11 + 0x98) + 0x34);
        puVar17 = (undefined4 *)(iVar20 + 0x39);
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *puVar15;
          puVar15 = puVar15 + (uint)bVar26 * -2 + 1;
          puVar17 = puVar17 + (uint)bVar26 * -2 + 1;
        }
        for (iVar5 = 2; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar26 * -2 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar26 * -2 + 1);
        }
        *(undefined4 *)((int)piVar11 + -4) = *(undefined4 *)((int)piVar11 + 0xbc);
        puVar10 = (undefined1 *)((int)piVar11 + -8);
        *(int *)((int)piVar11 + -8) = iVar20;
        *(undefined4 *)((int)piVar11 + -0xc) = 0x104d36;
        (**(code **)((int)piVar11 + 0xc0))();
        *(undefined1 *)((int)piVar11 + 0xe0) = 0;
      }
      *(int *)(puVar10 + 0x9c) = *(int *)(puVar10 + 0x9c) + 0x36;
      piVar11 = (int *)puVar10;
    }
    goto LAB_001045c1;
  }
  pcVar19 = (char *)(in_EAX + 0x14ab);
  if (*(short *)(in_EAX + 0x17ef) == 1) {
    pcVar12 = (char *)(in_EAX + 0x14fb);
    do {
      cVar7 = *pcVar12;
      *pcVar19 = cVar7;
      if (cVar7 == '\0') break;
      cVar7 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar19[1] = cVar7;
      pcVar19 = pcVar19 + 2;
    } while (cVar7 != '\0');
    uVar3 = *(undefined4 *)(in_EAX + 0x151b);
LAB_00104596:
    *(undefined4 *)(in_EAX + 0x14a3) = uVar3;
  }
  else if (*(short *)(in_EAX + 0x17ef) == 2) {
    pcVar12 = (char *)(in_EAX + 0x154d);
    do {
      cVar7 = *pcVar12;
      *pcVar19 = cVar7;
      if (cVar7 == '\0') break;
      cVar7 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar19[1] = cVar7;
      pcVar19 = pcVar19 + 2;
    } while (cVar7 != '\0');
    uVar3 = *(undefined4 *)(in_EAX + 0x156d);
    goto LAB_00104596;
  }
  aiStack_10c[0] = in_EAX + 0x14a2;
  piVar11 = aiStack_10c;
  (*in_EDX)();
LAB_001045c1:
  return *(undefined1 *)((int)piVar11 + 0xe8);
LAB_001048b9:
  pbVar8 = pbVar8 + 0x36;
  iVar13 = iVar13 + 1;
  goto LAB_001048bd;
LAB_0010497d:
  iVar13 = iVar13 + 0x36;
  iVar20 = iVar20 + 1;
  goto LAB_00104981;
LAB_001046b5:
  piVar9[-1] = 0x1046cc;
  uVar3 = FUN_0011fddc();
  puVar15 = (undefined4 *)piVar9[0x33];
  *(char *)(piVar9 + 0x3c) = extraout_CL + '\x01';
  *puVar15 = uVar3;
  piVar9[0x33] = (int)(puVar15 + 1);
  goto LAB_00104b39;
}

/******************************************************************************
 * Function : sub_104d44 (Ghidra: FUN_00104d44)
 * Prototype: undefined4 sub_104d44(void);
 * Address  : 0x104d44 (Size: 2403 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0xe6a10, 0xe8d4a, 0x100828, 0x1023f4, 0x1025c0, 0x1026b0, 0x102834, 0x109428
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x001050f2) */
/* WARNING: Removing unreachable block (ram,0x00104eed) */

undefined4 FUN_00104d44(void)

{
  char cVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int extraout_ECX_01;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  int in_EDX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  uint uVar15;
  byte *pbVar16;
  char *pcVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  undefined8 uVar21;
  undefined4 auStack_18cc [1543];
  undefined4 local_ae;
  int local_64;
  int local_60;
  int local_50;
  undefined4 local_48;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  
  bVar20 = 0;
  puVar11 = auStack_18cc + 0x5f4;
  local_64 = 0x20;
  local_48 = 0x20;
  uVar2 = 0xff;
  if (*(int *)(in_EAX + 0xd74) != 0) {
    if (*(int *)(in_EAX + 0x7a8) == 0) {
      if (*(uint *)(in_EDX + 1) < 0x20) {
        if (*(int *)(*(uint *)(in_EDX + 1) * 0x36 + in_EAX + 0xe02) != 0) {
          auStack_18cc[0x5f3] = 0x104e0b;
          local_38 = in_EDX;
          FUN_000e6a10();
          auStack_18cc[0x5f4] = 0x50515542;
          puVar11 = (undefined4 *)(in_EAX + 0x158b + (uint)bVar20 * -8);
          auStack_18cc[0x5f7] = *(undefined4 *)(in_EAX + 0x1587);
          puVar12 = puVar11 + (uint)bVar20 * -2 + 1;
          auStack_18cc[(uint)bVar20 * -2 + 0x5f8] = *puVar11;
          auStack_18cc[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x5f9] = *puVar12;
          (auStack_18cc + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 0x5f9)[(uint)bVar20 * -2 + 1] =
               puVar12[(uint)bVar20 * -2 + 1];
          local_ae = 0;
          local_30 = in_EAX + 0xdd2 + *(int *)(local_38 + 1) * 0x36;
          auStack_18cc[0x5f3] = 0x104e59;
          local_34 = FUN_000e8d4a();
          auStack_18cc[0x5f3] = 0x104e72;
          local_3c = FUN_000e8d4a();
          puVar11 = auStack_18cc + 0x5f3;
          auStack_18cc[0x5f3] = 0x56;
          FUN_001023f4();
          if ((DAT_003e02b0 & 1) == 0) {
            DAT_003e02b0 = DAT_003e02b0 | 1;
            DAT_003e02a4 = FUN_000e8d4a();
          }
          if ((DAT_003e02b0 & 2) == 0) {
            DAT_003e02b0 = DAT_003e02b0 | 2;
            DAT_003e02a8 = FUN_000e8d4a();
          }
          DAT_003e02a8 = FUN_000e8d4a();
          DAT_003e02ac = DAT_003e02ac + 1;
          FUN_00102834();
          if (99 < (uint)(extraout_ECX - DAT_003e02a4)) {
            DAT_003e02ac = 0;
            DAT_003e02a4 = extraout_ECX;
          }
          local_64 = local_60 + 0x1492;
          local_28 = local_60 + 0xd80;
          local_50 = local_60 + 0xdd2;
LAB_00104f63:
          if (*(char *)((int)puVar11 + 0xec) == '\0') {
            *(undefined4 *)((int)puVar11 + -4) = 0x104f76;
            iVar3 = FUN_000e8d4a();
            *(int *)((int)puVar11 + 0xbc) = iVar3;
            *(undefined4 *)((int)puVar11 + -4) = 0x104f8b;
            uVar21 = FUN_000e8d4a();
            *(int *)((int)puVar11 + 0xb8) = (int)uVar21;
            if (300 < (uint)((int)uVar21 - (int)((ulonglong)uVar21 >> 0x20))) {
              *(undefined1 *)((int)puVar11 + 0xec) = 0xff;
              goto LAB_0010564b;
            }
            if (0x19 < (uint)(iVar3 - *(int *)((int)puVar11 + 200))) {
              iVar5 = *(int *)(*(int *)((int)puVar11 + 0xc4) + 1);
              puVar6 = (undefined1 *)((int)puVar11 + -4);
              *(undefined4 *)((int)puVar11 + -4) = 0x56;
              *(int *)((int)puVar11 + 200) = iVar3;
              *(int *)((int)puVar11 + 0xcc) = *(int *)((int)puVar11 + 0xb0) + iVar5 * 0x36;
              *(undefined4 *)((int)puVar11 + -8) = 0x104ff9;
              FUN_001023f4();
              if ((DAT_003e02b0 & 1) == 0) {
                DAT_003e02b0 = DAT_003e02b0 | 1;
                *(undefined4 *)((int)puVar11 + -8) = 0x10501d;
                DAT_003e02a4 = FUN_000e8d4a();
              }
              if ((DAT_003e02b0 & 2) == 0) {
                DAT_003e02b0 = DAT_003e02b0 | 2;
                *(undefined4 *)((int)puVar11 + -8) = 0x10503b;
                DAT_003e02a8 = FUN_000e8d4a();
              }
              *(undefined4 *)((int)puVar11 + -8) = 0x105045;
              iVar3 = FUN_000e8d4a();
              if ((extraout_DL == '\0') || (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
                *(undefined4 *)((int)puVar11 + -8) = 0x105079;
                DAT_003e02a8 = iVar3;
                DAT_003e02ac = DAT_003e02ac + 1;
                FUN_00102834();
                iVar3 = extraout_ECX_00;
              }
              puVar11 = (undefined4 *)((int)puVar11 + -4);
              if (99 < (uint)(iVar3 - DAT_003e02a4)) {
                DAT_003e02ac = 0;
                puVar11 = (undefined4 *)puVar6;
                DAT_003e02a4 = iVar3;
              }
            }
            iVar3 = *(int *)(*(int *)((int)puVar11 + 0xa0) + 0xdca);
            *(int *)((int)puVar11 + 0xa4) = iVar3;
            *(int *)((int)puVar11 + 0xd0) = iVar3 + 0x54;
            *(int *)((int)puVar11 + 0xd4) = *(int *)((int)puVar11 + 0xa4) + 0x48;
            while (*(uint *)((int)puVar11 + 0xa4) <
                   *(int *)(*(int *)((int)puVar11 + 0xa0) + 0xdca) + 0x4d40U) {
              *(undefined4 *)((int)puVar11 + -4) = 0x10563e;
              iVar3 = FUN_001026b0();
              if (iVar3 != 0) {
                *(uint **)((int)puVar11 + 0xa8) = *(uint **)((int)puVar11 + 0xd4);
                uVar15 = **(uint **)((int)puVar11 + 0xd4);
                if (uVar15 < 0x4a435542) {
                  if (uVar15 < 0x47445542) {
                    if (uVar15 < 0x41535542) goto LAB_001055a7;
                    if (0x41535542 < uVar15) {
                      bVar18 = uVar15 == 0x44535542;
                      goto LAB_001051bd;
                    }
                    goto LAB_001050ca;
                  }
                  if (uVar15 < 0x47445543) goto LAB_00105574;
                  if (uVar15 < 0x49435542) {
                    if (uVar15 == 0x48515542) goto LAB_001050ca;
                  }
                  else if ((uVar15 < 0x49435543) || (uVar15 == 0x49485542)) goto LAB_001050ca;
                }
                else {
                  if (0x4a435542 < uVar15) {
                    if (uVar15 < 0x4e445542) {
                      if (uVar15 < 0x4c435542) {
                        bVar18 = uVar15 == 0x4b535542;
                      }
                      else {
                        if (uVar15 < 0x4c435543) goto LAB_001050ca;
                        bVar18 = uVar15 == 0x4c485542;
                      }
                    }
                    else {
                      if (uVar15 < 0x4e445543) goto LAB_00105574;
                      if (uVar15 < 0x504e5542) {
                        bVar18 = uVar15 == 0x50485542;
                      }
                      else {
                        if (uVar15 < 0x504e5543) goto LAB_001050ca;
                        bVar18 = uVar15 == 0x50515542;
                      }
                    }
LAB_001051bd:
                    if (!bVar18) goto LAB_001055a7;
                  }
LAB_001050ca:
                  iVar5 = 0x10;
                  bVar18 = false;
                  iVar3 = 0;
                  bVar19 = true;
                  pbVar13 = (byte *)(*(int *)((int)puVar11 + 0xa0) + 0x1587);
                  pbVar16 = *(byte **)((int)puVar11 + 0xd0);
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar18 = *pbVar13 < *pbVar16;
                    bVar19 = *pbVar13 == *pbVar16;
                    pbVar13 = pbVar13 + (uint)bVar20 * -2 + 1;
                    pbVar16 = pbVar16 + (uint)bVar20 * -2 + 1;
                  } while (bVar19);
                  if (!bVar19) {
                    iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                  }
                  if (iVar3 == 0) {
LAB_00105574:
                    uVar15 = **(uint **)((int)puVar11 + 0xa8);
                    if (0x49485541 < uVar15) {
                      if (uVar15 < 0x49485543) {
                        *(undefined4 *)((int)puVar11 + -4) = 0x1051ea;
                        FUN_00109428();
                      }
                      else if (uVar15 == 0x50485542) {
                        iVar5 = 6;
                        bVar18 = false;
                        iVar3 = 0;
                        bVar19 = true;
                        pbVar13 = (byte *)((int)puVar11 + 0x92);
                        pbVar16 = (byte *)(*(int *)(*(int *)((int)puVar11 + 0xc4) + 1) * 0x36 +
                                           *(int *)((int)puVar11 + 0xb0) + 10);
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar18 = *pbVar13 < *pbVar16;
                          bVar19 = *pbVar13 == *pbVar16;
                          pbVar13 = pbVar13 + (uint)bVar20 * -2 + 1;
                          pbVar16 = pbVar16 + (uint)bVar20 * -2 + 1;
                        } while (bVar19);
                        if (!bVar19) {
                          iVar3 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                        }
                        if (iVar3 == 0) {
                          if ((uint)*(ushort *)(*(int *)((int)puVar11 + 0xa8) + 0x44) ==
                              *(uint *)((int)puVar11 + 0x98)) {
                            if (*(int *)((int)puVar11 + 0x4e) ==
                                *(int *)(*(int *)((int)puVar11 + 0xa8) + 0x4a)) {
                              *(undefined4 *)((int)puVar11 + 0xc0) =
                                   *(undefined4 *)((int)puVar11 + 0xb8);
                              *(undefined4 *)((int)puVar11 + 200) =
                                   *(undefined4 *)((int)puVar11 + 0xbc);
                              *(undefined4 *)((int)puVar11 + 0x5d) = 0;
                              piVar4 = (int *)(*(int *)((int)puVar11 + 0xa8) + 0x52);
                              *(undefined4 *)((int)puVar11 + 0xac) = 0;
                              pcVar10 = (char *)(*(int *)((int)puVar11 + 0xa8) + 0x56);
                              puVar8 = (undefined1 *)puVar11;
                              do {
                                puVar7 = puVar8;
                                if ((short)piVar4[9] != 0) {
                                  iVar3 = *piVar4;
                                  iVar5 = *(int *)(*(int *)(puVar8 + 0xa8) + 0x40);
                                  *(int *)(puVar8 + 0xe4) = *(int *)(puVar8 + 0xe4) + 1;
                                  pcVar17 = puVar8 + 0x65;
                                  *(uint *)(puVar8 + 0x61) = (uint)(iVar3 == iVar5);
                                  *(char **)(puVar8 + -4) = pcVar17;
                                  pcVar14 = pcVar10;
                                  do {
                                    cVar1 = *pcVar14;
                                    *pcVar17 = cVar1;
                                    if (cVar1 == '\0') break;
                                    cVar1 = pcVar14[1];
                                    pcVar14 = pcVar14 + 2;
                                    pcVar17[1] = cVar1;
                                    pcVar17 = pcVar17 + 2;
                                  } while (cVar1 != '\0');
                                  iVar3 = *piVar4;
                                  *(undefined4 *)(puVar8 + -4) = *(undefined4 *)(puVar8 + 0xe0);
                                  *(int *)(puVar8 + 0x59) = iVar3;
                                  puVar7 = puVar8 + -8;
                                  *(undefined1 **)(puVar8 + -8) = puVar8 + 0x58;
                                  *(undefined4 *)(puVar8 + -0xc) = 0x10530f;
                                  (**(code **)(puVar8 + 0xdc))();
                                }
                                iVar3 = *(int *)(puVar7 + 0xac);
                                pcVar10 = pcVar10 + 0x38;
                                piVar4 = piVar4 + 0xe;
                                *(uint *)(puVar7 + 0xac) = iVar3 + 1U;
                                puVar8 = puVar7;
                              } while (iVar3 + 1U < 6);
                              puVar11 = (undefined4 *)puVar7;
                              if (*(uint *)(puVar7 + 0xe4) < *(uint *)(puVar7 + 0x98)) {
                                uVar15 = *(int *)(puVar7 + 0x4e) + 1;
                                *(uint *)(puVar7 + 0x4e) = uVar15;
                                if ((uint)(*(int *)(puVar7 + 0xb4) * 6) < uVar15 ||
                                    *(int *)(puVar7 + 0xb4) * 6 - uVar15 == 0) {
                                  puVar7[0xec] = 0xff;
                                  *(undefined4 *)(puVar7 + -4) = 0x1053a1;
                                  FUN_001025c0();
                                }
                                else {
                                  *(undefined4 *)(puVar7 + -4) = 0x56;
                                  *(undefined4 *)(puVar7 + -8) = 0x1053c6;
                                  FUN_001023f4();
                                  if ((DAT_003e02b0 & 1) == 0) {
                                    DAT_003e02b0 = DAT_003e02b0 | 1;
                                    *(undefined4 *)(puVar7 + -8) = 0x1053ea;
                                    DAT_003e02a4 = FUN_000e8d4a();
                                  }
                                  if ((DAT_003e02b0 & 2) == 0) {
                                    DAT_003e02b0 = DAT_003e02b0 | 2;
                                    *(undefined4 *)(puVar7 + -8) = 0x10540a;
                                    DAT_003e02a8 = FUN_000e8d4a();
                                  }
                                  *(undefined4 *)(puVar7 + -8) = 0x105414;
                                  iVar3 = FUN_000e8d4a();
                                  if ((extraout_DL_00 == '\0') ||
                                     (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
                                    *(undefined4 *)(puVar7 + -8) = 0x105448;
                                    DAT_003e02a8 = iVar3;
                                    DAT_003e02ac = DAT_003e02ac + 1;
                                    FUN_00102834();
                                  }
                                  puVar11 = (undefined4 *)(puVar7 + -4);
                                  if (99 < (uint)(iVar3 - DAT_003e02a4)) {
                                    DAT_003e02ac = 0;
                                    puVar11 = (undefined4 *)(puVar7 + -4);
                                    DAT_003e02a4 = iVar3;
                                  }
                                }
                              }
                              else {
                                puVar7[0xec] = 1;
                                *(undefined4 *)(puVar7 + -4) = 0x105347;
                                FUN_001025c0();
                                *(undefined4 *)(puVar7 + -4) = 0x105353;
                                uVar21 = FUN_000e8d4a();
                                *(int *)(*(int *)((int)((ulonglong)uVar21 >> 0x20) + 1) * 0x36 +
                                         *(int *)(puVar7 + 0xa0) + 0xe02) = (int)uVar21;
                              }
                            }
                          }
                          else {
                            *(uint *)((int)puVar11 + 0x98) =
                                 (uint)*(ushort *)(*(int *)((int)puVar11 + 0xa8) + 0x44);
                            *(undefined4 *)((int)puVar11 + 0xe4) = 0;
                            *(uint *)((int)puVar11 + 0xb4) =
                                 (uint)*(ushort *)(*(int *)((int)puVar11 + 0xa8) + 0x46);
                            *(undefined4 *)((int)puVar11 + 0x4e) = 0;
                            *(undefined4 *)((int)puVar11 + -4) = 0x1054a4;
                            uVar2 = FUN_000e8d4a();
                            puVar9 = (undefined1 *)((int)puVar11 + -4);
                            *(undefined4 *)((int)puVar11 + -4) = 0x56;
                            *(undefined4 *)((int)puVar11 + 0xb8) = uVar2;
                            *(undefined4 *)((int)puVar11 + 0xbc) = uVar2;
                            *(undefined4 *)((int)puVar11 + 0xc0) = uVar2;
                            *(undefined4 *)((int)puVar11 + 200) = uVar2;
                            *(undefined4 *)((int)puVar11 + -8) = 0x1054d5;
                            FUN_001023f4();
                            if ((DAT_003e02b0 & 1) == 0) {
                              DAT_003e02b0 = DAT_003e02b0 | 1;
                              *(undefined4 *)((int)puVar11 + -8) = 0x1054f9;
                              DAT_003e02a4 = FUN_000e8d4a();
                            }
                            if ((DAT_003e02b0 & 2) == 0) {
                              DAT_003e02b0 = DAT_003e02b0 | 2;
                              *(undefined4 *)((int)puVar11 + -8) = 0x105517;
                              DAT_003e02a8 = FUN_000e8d4a();
                            }
                            *(undefined4 *)((int)puVar11 + -8) = 0x105521;
                            iVar3 = FUN_000e8d4a();
                            if ((extraout_DL_01 == '\0') || (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
                              *(undefined4 *)((int)puVar11 + -8) = 0x105555;
                              DAT_003e02a8 = iVar3;
                              DAT_003e02ac = DAT_003e02ac + 1;
                              FUN_00102834();
                              iVar3 = extraout_ECX_01;
                            }
                            puVar11 = (undefined4 *)((int)puVar11 + -4);
                            if (99 < (uint)(iVar3 - DAT_003e02a4)) {
                              DAT_003e02ac = 0;
                              puVar11 = (undefined4 *)puVar9;
                              DAT_003e02a4 = iVar3;
                            }
                          }
                        }
                      }
                    }
                    if (*(int *)((int)puVar11 + 0xe9) >> 0x18 != 0) break;
                  }
                }
LAB_001055a7:
                *(undefined4 *)((int)puVar11 + -4) = 0x1055c1;
                FUN_001025c0();
              }
              *(int *)((int)puVar11 + 0xd0) = *(int *)((int)puVar11 + 0xd0) + 0x26a;
              *(int *)((int)puVar11 + 0xd4) = *(int *)((int)puVar11 + 0xd4) + 0x26a;
              *(int *)((int)puVar11 + 0xa4) = *(int *)((int)puVar11 + 0xa4) + 0x26a;
            }
            goto LAB_00104f63;
          }
        }
LAB_0010564b:
        if (*(int *)((int)puVar11 + 0xe9) >> 0x18 == -1) {
          *(undefined4 *)((int)puVar11 + -4) = 0x10568f;
          FUN_000e6a10();
          return 0xff;
        }
        uVar2 = 0;
      }
    }
    else {
      auStack_18cc[0x5f3] = 0x104dbf;
      uVar2 = FUN_00100828();
    }
  }
  return uVar2;
}

