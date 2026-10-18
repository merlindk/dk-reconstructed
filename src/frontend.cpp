/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: frontend.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 89
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_02d8e2 (Ghidra: FUN_0002d8e2)
 * Prototype: void sub_02d8e2(int param_1,int param_2);
 * Address  : 0x2d8e2 (Size: 61 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x87da4
 * Callees  : 1 -> 0x2d4a7
 ******************************************************************************/
void FUN_0002d8e2(int param_1,int param_2)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  
  DAT_0033462c = in_EDX;
  DAT_00334630 = in_EAX;
  DAT_00334634 = in_ECX;
  DAT_00334638 = unaff_EBX;
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    FUN_0002d4a7();
  }
  return;
}

/******************************************************************************
 * Function : sub_02d920 (Ghidra: FUN_0002d920)
 * Prototype: void sub_02d920(void);
 * Address  : 0x2d920 (Size: 84 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dcec
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002d920(void)

{
  int *in_EAX;
  int *in_EDX;
  int *unaff_EBX;
  
  *in_EAX = unaff_EBX[1] * in_EDX[1] + *unaff_EBX * *in_EDX + unaff_EBX[2] * in_EDX[2];
  in_EAX[1] = unaff_EBX[1] * in_EDX[5] + *unaff_EBX * in_EDX[4] + unaff_EBX[2] * in_EDX[6];
  in_EAX[2] = *unaff_EBX * in_EDX[8] + unaff_EBX[1] * in_EDX[9] + unaff_EBX[2] * in_EDX[10];
  return;
}

/******************************************************************************
 * Function : sub_02d974 (Ghidra: FUN_0002d974)
 * Prototype: void sub_02d974(void);
 * Address  : 0x2d974 (Size: 314 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dbac
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002d974(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *in_EAX;
  int *in_EDX;
  int *unaff_EBX;
  
  *in_EAX = *in_EDX * *unaff_EBX + in_EDX[1] * unaff_EBX[4] + in_EDX[2] * unaff_EBX[8];
  in_EAX[1] = *in_EDX * unaff_EBX[1] + in_EDX[1] * unaff_EBX[5] + in_EDX[2] * unaff_EBX[9];
  in_EAX[2] = in_EDX[1] * unaff_EBX[6] + *in_EDX * unaff_EBX[2] + in_EDX[2] * unaff_EBX[10];
  in_EAX[4] = in_EDX[4] * *unaff_EBX + in_EDX[5] * unaff_EBX[4] + in_EDX[6] * unaff_EBX[8];
  in_EAX[5] = in_EDX[4] * unaff_EBX[1] + in_EDX[5] * unaff_EBX[5] + in_EDX[6] * unaff_EBX[9];
  in_EAX[6] = in_EDX[4] * unaff_EBX[2] + in_EDX[5] * unaff_EBX[6] + in_EDX[6] * unaff_EBX[10];
  in_EAX[8] = in_EDX[8] * *unaff_EBX + in_EDX[9] * unaff_EBX[4] + in_EDX[10] * unaff_EBX[8];
  in_EAX[9] = in_EDX[8] * unaff_EBX[1] + in_EDX[9] * unaff_EBX[5] + in_EDX[10] * unaff_EBX[9];
  iVar1 = in_EDX[8];
  iVar2 = unaff_EBX[2];
  iVar3 = in_EDX[9];
  iVar4 = unaff_EBX[6];
  iVar5 = in_EDX[10];
  iVar6 = unaff_EBX[10];
  *in_EAX = *in_EAX >> 0xe;
  in_EAX[1] = in_EAX[1] >> 0xe;
  in_EAX[4] = in_EAX[4] >> 0xe;
  in_EAX[5] = in_EAX[5] >> 0xe;
  in_EAX[3] = *in_EAX * in_EAX[1];
  in_EAX[8] = in_EAX[8] >> 0xe;
  in_EAX[9] = in_EAX[9] >> 0xe;
  in_EAX[7] = in_EAX[4] * in_EAX[5];
  in_EAX[2] = in_EAX[2] >> 0xe;
  in_EAX[6] = in_EAX[6] >> 0xe;
  in_EAX[10] = iVar3 * iVar4 + iVar1 * iVar2 + iVar5 * iVar6;
  in_EAX[10] = in_EAX[10] >> 0xe;
  in_EAX[0xb] = in_EAX[8] * in_EAX[9];
  return;
}

/******************************************************************************
 * Function : sub_02daae (Ghidra: FUN_0002daae)
 * Prototype: void sub_02daae(void);
 * Address  : 0x2daae (Size: 94 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe8cc8
 ******************************************************************************/
void FUN_0002daae(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  int *piVar4;
  
  piVar4 = (int *)((in_EDX & 0xff) * 4 + in_EAX);
  iVar1 = *piVar4;
  iVar2 = piVar4[8];
  iVar3 = FUN_000e8cc8(iVar1 * iVar1);
  iVar3 = iVar3 + 1;
  *piVar4 = (iVar1 << 0xe) / iVar3;
  piVar4[4] = (extraout_ECX << 0xe) / iVar3;
  piVar4[8] = (iVar2 << 0xe) / iVar3;
  return;
}

/******************************************************************************
 * Function : sub_02db0c (Ghidra: FUN_0002db0c)
 * Prototype: void sub_02db0c(void);
 * Address  : 0x2db0c (Size: 56 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dcec
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002db0c(void)

{
  int *in_EAX;
  int *in_EDX;
  int *unaff_EBX;
  
  *in_EAX = in_EDX[1] * unaff_EBX[2] - in_EDX[2] * unaff_EBX[1];
  in_EAX[1] = in_EDX[2] * *unaff_EBX - *in_EDX * unaff_EBX[2];
  in_EAX[2] = *in_EDX * unaff_EBX[1] - in_EDX[1] * *unaff_EBX;
  return;
}

/******************************************************************************
 * Function : sub_02dbac (Ghidra: FUN_0002dbac)
 * Prototype: void sub_02dbac(void);
 * Address  : 0x2dbac (Size: 11 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dbb7
 * Callees  : 1 -> 0x2d974
 ******************************************************************************/
void FUN_0002dbac(void)

{
  FUN_0002d974();
  return;
}

/******************************************************************************
 * Function : sub_02dbb7 (Ghidra: FUN_0002dbb7)
 * Prototype: void sub_02dbb7(void);
 * Address  : 0x2dbb7 (Size: 106 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2dbac
 ******************************************************************************/
void FUN_0002dbb7(void)

{
  ushort in_AX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 local_44 [12];
  
  puVar2 = local_44;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *in_EDX;
    in_EDX = in_EDX + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0002dbac((int)(&PTR_LAB_00192fe0)[(short)(in_AX & 0x7ff)] >> 2,0,
               (int)(&DAT_001927e0)[(short)(in_AX & 0x7ff)] >> 2);
  return;
}

/******************************************************************************
 * Function : sub_02dc8e (Ghidra: FUN_0002dc8e)
 * Prototype: void sub_02dc8e(void);
 * Address  : 0x2dc8e (Size: 94 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dcec
 * Callees  : 1 -> 0xe8cc8
 ******************************************************************************/
void FUN_0002dc8e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  uint in_EDX;
  undefined8 uVar5;
  
  piVar1 = (int *)(in_EAX + (in_EDX & 0xff) * 0x10);
  iVar2 = piVar1[1];
  iVar3 = piVar1[2];
  uVar5 = FUN_000e8cc8(*piVar1 * *piVar1);
  iVar4 = (int)uVar5;
  *piVar1 = ((int)((ulonglong)uVar5 >> 0x20) << 0xe) / iVar4;
  piVar1[1] = (iVar2 << 0xe) / iVar4;
  piVar1[2] = (iVar3 << 0xe) / iVar4;
  return;
}

/******************************************************************************
 * Function : sub_02dcec (Ghidra: FUN_0002dcec)
 * Prototype: void sub_02dcec(void);
 * Address  : 0x2dcec (Size: 704 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xa3aa0
 * Callees  : 3 -> 0x2d920, 0x2db0c, 0x2dc8e
 ******************************************************************************/
void FUN_0002dcec(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  ushort in_DX;
  byte unaff_BL;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_50;
  int local_4c;
  int local_48;
  byte local_1c;
  byte local_18;
  byte local_14;
  
  if (unaff_BL < 2) {
    if (unaff_BL == 1) {
      local_18 = 0;
      local_14 = 2;
      local_1c = 1;
    }
  }
  else if (unaff_BL < 3) {
    local_18 = 1;
    local_1c = 0;
    local_14 = 2;
  }
  else if (unaff_BL == 3) {
    local_18 = 2;
    local_1c = 0;
    local_14 = 1;
  }
  iVar4 = (uint)local_18 * 0x10;
  iVar2 = *(int *)(in_EAX + 4 + iVar4);
  iVar3 = *(int *)(in_EAX + iVar4);
  iVar4 = *(int *)(in_EAX + 8 + iVar4);
  iVar5 = iVar3 * iVar3 >> 0xe;
  iVar6 = 0x4000 - ((int)(&PTR_LAB_00192fe0)[(short)(in_DX & 0x7ff)] >> 2);
  piVar1 = (int *)(in_EAX + (uint)local_1c * 0x10);
  FUN_0002d920(((0x4000 - iVar5) * ((int)(&PTR_LAB_00192fe0)[(short)(in_DX & 0x7ff)] >> 2) >> 0xe) +
               iVar5,((iVar2 * iVar3 >> 0xe) * iVar6 >> 0xe) -
                     (((int)(&DAT_001927e0)[(short)(in_DX & 0x7ff)] >> 2) * iVar4 >> 0xe),
               ((iVar3 * iVar4 >> 0xe) * iVar6 >> 0xe) +
               (iVar2 * ((int)(&DAT_001927e0)[(short)(in_DX & 0x7ff)] >> 2) >> 0xe));
  *piVar1 = local_50 >> 0xe;
  piVar1[1] = local_4c >> 0xe;
  piVar1[2] = local_48 >> 0xe;
  piVar1 = (int *)(extraout_ECX + (uint)local_14 * 0x10);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  iVar4 = piVar1[2];
  FUN_0002d920();
  *piVar1 = local_50 >> 0xe;
  piVar1[1] = local_4c >> 0xe;
  piVar1[2] = local_48 >> 0xe;
  FUN_0002dc8e();
  FUN_0002db0c();
  *(int *)(extraout_ECX_00 + 0x10) = iVar2 >> 0xe;
  *(int *)(extraout_ECX_00 + 0x14) = iVar3 >> 0xe;
  *(int *)(extraout_ECX_00 + 0x18) = iVar4 >> 0xe;
  FUN_0002dc8e();
  FUN_0002db0c();
  *extraout_ECX_01 = iVar2 >> 0xe;
  extraout_ECX_01[1] = iVar3 >> 0xe;
  extraout_ECX_01[2] = iVar4 >> 0xe;
  FUN_0002dc8e();
  extraout_ECX_02[3] = *extraout_ECX_02 * extraout_ECX_02[1];
  extraout_ECX_02[7] = extraout_ECX_02[4] * extraout_ECX_02[5];
  extraout_ECX_02[0xb] = extraout_ECX_02[8] * extraout_ECX_02[9];
  return;
}

/******************************************************************************
 * Function : dk_why_are_we_here_02dfac (Ghidra: FUN_0002dfac)
 * Prototype: void dk_why_are_we_here_02dfac(void);
 * Address  : 0x2dfac (Size: 1242 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp:739; frontend.cpp:1006 ("Why are we here")
 * Naming   : String 'Why are we here'
 * Callers  : 1 -> 0x36ff4
 * Callees  : 30 -> 0x2c833, 0x2e8a7, 0x2faf6, 0x2fc49, 0x2fda1, 0x2feca, 0x30ca0, 0x30cd9, 0x30e04, 0x30e88 ...
 * Strings  :
 *   - 0x163409: "frontend.cpp"
 *   - 0x163426: "frontend.cpp"
 *   - 0x163416: "Why are we here"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002dfac(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char extraout_CL;
  char extraout_CL_00;
  uint extraout_EDX;
  longdouble lVar4;
  double dVar5;
  
  lVar4 = (longdouble)FUN_00065724();
  _DAT_0033401d = (float)lVar4;
  dVar5 = (double)lVar4;
  if ((lVar4 <= (longdouble)_DAT_00163433) || (_DAT_0016343b <= dVar5)) {
    DAT_002ee88d = 0;
  }
  else {
    DAT_002ee88d = 1;
  }
  if ((DAT_0019d0bd & 1) != 0) {
    DAT_002e6f2d = '\0';
  }
  DAT_0019d0c1 = -1;
  FUN_0002feca();
  if ((DAT_002e6f2d == '\0') || (DAT_002e6ff3 != '\0')) {
    if ((DAT_0019d0b8 & 2) == 0) {
      iVar2 = FUN_0006aac0();
      if (iVar2 == 0) {
        DAT_00334021 = 1;
        FUN_000e8ca8();
        DAT_0019a2a1 = 1;
        return;
      }
      FUN_000e7904(0);
      FUN_000e79fc();
      iVar2 = FUN_00030cd9();
      if (iVar2 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 739, g_log_buf) */
        DAT_0019a2a1 = 1;
        return;
      }
      FUN_000e6a10();
      FUN_000e846c(DAT_00199228);
      if ((DAT_0019d0bd & 0x40) == 0) {
        if ((DAT_0019d0b6 & 1) == 0) {
          iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
          if ((((&DAT_0019d0ce)[iVar2] & 2) == 0) && ((&DAT_0019d0f1)[iVar2] != '\0')) {
            if ((DAT_0019d0bd & 1) == 0) {
              if ((&DAT_0019d0f1)[iVar2] == '\x01') {
                if (DAT_002e78ea < 0x15) {
                  if (((&DAT_0019d0cb)[iVar2] & 0x10) != 0) goto LAB_0002e0f4;
                  FUN_00070bf9();
                }
                else {
                  FUN_00070bf9();
                }
              }
            }
            else {
              DAT_0019d0bd = DAT_0019d0bd & 0xfe;
            }
          }
        }
        else if (((&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 0x10) == 0) {
          if (((&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 2) != 0) {
            FUN_00033156();
          }
        }
        else {
          iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
LAB_0002e0f4:
          (&DAT_0019d0cb)[iVar2] = (&DAT_0019d0cb)[iVar2] & 0xef;
        }
      }
      else if ((_DAT_0033401d <= (float)_DAT_00163433) || ((float)_DAT_0016343b <= _DAT_0033401d)) {
        FUN_00030e04();
      }
      FUN_0002e8a7();
      iVar2 = 0;
      DAT_0019d0bd = DAT_0019d0bd & 0xbf;
      while (iVar2 == 0) {
        iVar3 = FUN_000e8560();
        if ((iVar3 == 0) && ((DAT_0019d0b6 & 1) == 0)) {
          iVar2 = 1;
          DAT_0019a2a1 = '\x01';
          break;
        }
        FUN_00052934();
        DAT_00334a58 = DAT_00334738;
        DAT_00334738 = 0;
        FUN_0002faf6();
        if ((DAT_0019a2a1 != '\0') || (FUN_0002fc49(), DAT_0019a2a1 != '\0')) {
          iVar2 = 1;
          break;
        }
        if ((iVar2 == 0) && (iVar3 = FUN_000e797c(), iVar3 != 0)) {
          FUN_0002fda1();
          FUN_000e79fc();
        }
        if (DAT_00334019 == 0) {
          FUN_0006f98e();
          FUN_0006dfd3();
          FUN_000ead2f();
        }
        if (DAT_00335130 != '\0') {
          FUN_00030ca0();
          DAT_00335130 = '\0';
        }
      }
      FUN_000e8d80(dVar5,iVar2);
      FUN_000e7904(0);
      FUN_000e79fc();
      FUN_0002e8a7();
      if (DAT_0019a2a1 != '\0') goto LAB_0002e46d;
      iVar2 = FUN_00030e88();
      if (iVar2 == 0) {
        return;
      }
      FUN_0006ae80();
      bVar1 = DAT_0019d0b6 & 0xfe;
      if (extraout_EDX < 8) {
        if (extraout_EDX != 7) goto LAB_0002e46d;
        DAT_002f10ce._3_1_ = '\0';
        DAT_002ebaf6 = 2;
        DAT_0019d0f4 = 1;
        DAT_002e78e9 = DAT_0019d0c2;
        DAT_0019d0b6 = bVar1;
      }
      else {
        if (8 < extraout_EDX) {
          if (extraout_EDX < 10) goto LAB_0002e46d;
          if (extraout_EDX < 0xb) {
            if (DAT_0019d0c1 == -2) {
              DAT_0019d0b6 = bVar1;
              FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 1006, "Why are we here") */
              DAT_0019d0c1 = extraout_CL;
            }
            else {
              DAT_0019d0b6 = bVar1;
              FUN_000e7904(0);
              FUN_000e79fc();
              FUN_0002c833();
              DAT_0019d0c1 = extraout_CL_00;
            }
            goto LAB_0002e46d;
          }
          if (extraout_EDX != 0x19) goto LAB_0002e46d;
          DAT_0019d0bd = DAT_0019d0bd | 1;
          goto LAB_0002e023;
        }
        DAT_002e78e9 = DAT_0019d0c2;
        DAT_002ebaf6 = 5;
        DAT_0019d0b6 = DAT_0019d0b6 | 1;
        (&DAT_0019d0f4)[DAT_002f10ce._3_1_ * 0x4ef] = 1;
      }
    }
    else {
      iVar2 = FUN_00030e88();
      if (iVar2 == 0) {
        return;
      }
      DAT_002f10ce._3_1_ = '\0';
      DAT_002ebaf6 = 2;
      DAT_0019d0f4 = 1;
      DAT_002e78e9 = DAT_0019d0c2;
    }
    FUN_0005d35c();
  }
  else {
    iVar2 = FUN_00030e88();
    if (iVar2 == 0) {
      return;
    }
LAB_0002e023:
    FUN_0005da11();
  }
LAB_0002e46d:
  (&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] = (&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 0xfd;
  return;
}

/******************************************************************************
 * Function : sub_02e486 (Ghidra: FUN_0002e486)
 * Prototype: void sub_02e486(void);
 * Address  : 0x2e486 (Size: 4 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e486(void)

{
  byte *in_EAX;
  
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : sub_02e48a (Ghidra: FUN_0002e48a)
 * Prototype: void sub_02e48a(void);
 * Address  : 0x2e48a (Size: 118 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2e8a7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e48a(void)

{
  int iVar1;
  int iVar2;
  
  DAT_002e78ea = 1;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0x4ef;
    (&DAT_0019d0ce)[iVar2] = (&DAT_0019d0ce)[iVar2] & 0xfd;
    iVar2 = iVar1;
  } while (iVar1 != 0x18ab);
  DAT_002ee892 = 0;
  DAT_002ee893 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_002ee888)[iVar2] = 0;
    iVar2 = iVar1;
  } while (iVar1 < 6);
  if ((_DAT_0033401d <= (float)_DAT_00163443) || (_DAT_0016344b <= (double)_DAT_0033401d)) {
    DAT_002ee88d = 0;
  }
  else {
    DAT_002ee88d = 1;
  }
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_02e500 (Ghidra: FUN_0002e500)
 * Prototype: void sub_02e500(void);
 * Address  : 0x2e500 (Size: 52 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2efb4
 ******************************************************************************/
void FUN_0002e500(void)

{
  FUN_0002efb4();
  return;
}

/******************************************************************************
 * Function : sub_02e534 (Ghidra: FUN_0002e534)
 * Prototype: void sub_02e534(void);
 * Address  : 0x2e534 (Size: 45 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e534(void)

{
  FUN_0002efb4();
  return;
}

/******************************************************************************
 * Function : sub_02e561 (Ghidra: FUN_0002e561)
 * Prototype: void sub_02e561(void);
 * Address  : 0x2e561 (Size: 42 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e561(void)

{
  FUN_0002efb4();
  return;
}

/******************************************************************************
 * Function : sub_02e58b (Ghidra: FUN_0002e58b)
 * Prototype: void sub_02e58b(void);
 * Address  : 0x2e58b (Size: 153 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0002e58b(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x33) + DAT_00334de8 + -0x2d;
  uVar2 = (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3];
  if ((*(int *)(in_EAX + 0x33) != 0) && (DAT_00334738 == *(int *)(in_EAX + 0x33))) {
    uVar2 = 2;
  }
  DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + uVar2 * 4);
  DAT_003d9874 = 0x20;
  FUN_000e6b20();
  iVar1 = 0;
  do {
    if (0x87 < iVar1) {
      return;
    }
    if ((&DAT_00334d5c)[iVar1] != '\0') {
      if (iVar3 == 0) {
        FUN_000e6d80();
        return;
      }
      iVar3 = iVar3 + -1;
    }
    iVar1 = iVar1 + 0x11;
  } while( true );
}

/******************************************************************************
 * Function : sub_02e624 (Ghidra: FUN_0002e624)
 * Prototype: void sub_02e624(void);
 * Address  : 0x2e624 (Size: 35 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e624(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = *(int *)(in_EAX + 0x33) + DAT_00334de8 + -0x2d < DAT_00334dec;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02e647 (Ghidra: FUN_0002e647)
 * Prototype: void sub_02e647(void);
 * Address  : 0x2e647 (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e647(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00334de8 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02e654 (Ghidra: FUN_0002e654)
 * Prototype: void sub_02e654(void);
 * Address  : 0x2e654 (Size: 19 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e654(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_00334de8 < DAT_00334dec + -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02e667 (Ghidra: FUN_0002e667)
 * Prototype: void sub_02e667(void);
 * Address  : 0x2e667 (Size: 47 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xeb818
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e667(void)

{
  int in_EAX;
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(in_EAX + 6) == '\x05') {
    iVar1 = (int)*(short *)(in_EAX + 0x1b);
  }
  else {
    iVar1 = *(int *)(in_EAX + 0x33);
  }
  if (iVar1 != DAT_00334a58) {
    uVar2 = FUN_000eb818();
    iVar1 = (int)((ulonglong)uVar2 >> 0x20);
    _DAT_0033473c = (undefined4)uVar2;
  }
  DAT_00334738 = iVar1;
  return;
}

/******************************************************************************
 * Function : sub_02e696 (Ghidra: FUN_0002e696)
 * Prototype: void sub_02e696(void);
 * Address  : 0x2e696 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e696(void)

{
  if (DAT_00334de8 != 0) {
    DAT_00334de8 = DAT_00334de8 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_02e6a6 (Ghidra: FUN_0002e6a6)
 * Prototype: void sub_02e6a6(void);
 * Address  : 0x2e6a6 (Size: 21 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002e6a6(void)

{
  if (DAT_00334de8 < DAT_00334dec + -1) {
    DAT_00334de8 = DAT_00334de8 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_02e6bb (Ghidra: FUN_0002e6bb)
 * Prototype: void sub_02e6bb(void);
 * Address  : 0x2e6bb (Size: 9 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2e8a7
 ******************************************************************************/
void FUN_0002e6bb(void)

{
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_02e6c4 (Ghidra: FUN_0002e6c4)
 * Prototype: void sub_02e6c4(void);
 * Address  : 0x2e6c4 (Size: 243 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x2c736, 0x2e8a7, 0x2feca, 0xdd920, 0xe7714, 0xe8980, 0xe8a1c, 0xe8a80
 * Strings  :
 *   - 0x16345a: "%s\GAME%04d.SAV"
 ******************************************************************************/
void FUN_0002e6c4(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_b8 [164];
  
  iVar4 = 0;
  iVar1 = 0;
  for (iVar3 = 0; iVar3 < 0x88; iVar3 = iVar3 + 0x11) {
    if ((&DAT_00334d5c)[iVar3] != '\0') {
      if (iVar1 == *(int *)(in_EAX + 0x33) + DAT_00334de8 + -0x2d) {
        DAT_0019d0c1 = (undefined1)iVar4;
        break;
      }
      iVar1 = iVar1 + 1;
    }
    iVar4 = iVar4 + 1;
  }
  FUN_000dd920(iVar4);
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_b8,s__s_GAME_04d_SAV_0016345a,uVar2);
  iVar1 = FUN_000e8980();
  if (iVar1 == -1) {
    (&DAT_00334d5c)[iVar4 * 0x11] = 0;
    FUN_0002c736();
    FUN_0002feca();
  }
  else {
    iVar1 = FUN_000e8a80();
    if (iVar1 == 10) {
      FUN_000e8a1c();
      goto LAB_0002e7ac;
    }
    (&DAT_00334d5c)[iVar4 * 0x11] = 0;
    FUN_0002c736();
    FUN_0002feca();
    FUN_000e8a1c();
  }
  if (DAT_00334dec != 0) {
    return;
  }
LAB_0002e7ac:
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : dk_load_frontend_palette_02e8a7 (Ghidra: FUN_0002e8a7)
 * Prototype: void dk_load_frontend_palette_02e8a7(void);
 * Address  : 0x2e8a7 (Size: 1046 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp:1303 ("Unable to load FRONTEND PALETTE"); frontend.cpp:1420 ("Unhandled FRONTEND state"); frontend.cpp:1588 ("Unhandled FRONTEND state")
 * Naming   : String 'Unable to load FRONTEND PALETTE'
 * Callers  : 23 -> 0x2dfac, 0x2e48a, 0x2e6bb, 0x2e6c4, 0x2ed41, 0x2f541, 0x2f8a2, 0x2f9f5, 0x2faf6, 0x2fc49 ...
 * Callees  : 37 -> 0x150f0, 0x2a355, 0x2ff2e, 0x2ffe4, 0x30057, 0x30322, 0x306e4, 0x30cb9, 0x30cd9, 0x30ef8 ...
 * Strings  :
 *   - 0x16349d: "frontend.cpp"
 *   - 0x1634c3: "frontend.cpp"
 *   - 0x1634e9: "frontend.cpp"
 *   - 0x16346a: "%s\LDATA\FRONT.PAL"
 *   - 0x16347d: "Unable to load FRONTEND PALETTE"
 *   - 0x1634aa: "Unhandled FRONTEND state"
 *   - 0x1634d0: "Unhandled FRONTEND state"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e8a7(void)

{
  undefined4 in_EAX;
  int iVar1;
  
  switch(DAT_00334a44) {
  case 0:
    FUN_000543dd();
    FUN_000e7714(&DAT_0019cbac,s__s_LDATA_FRONT_PAL_0016346a,&DAT_002ee923);
    FUN_000150f0();
    iVar1 = FUN_000e984c();
    if (iVar1 != 0x300) {
      FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 1303, "Unable to load FRONTEND PALETTE") */
    }
    FUN_00030322();
    FUN_000ebf9c();
    FUN_00052934();
    break;
  case 1:
    goto LAB_0002e953;
  case 2:
    goto LAB_0002e953;
  case 3:
    FUN_00031213();
    goto LAB_0002e969;
  case 4:
    goto LAB_0002e953;
  case 5:
    goto LAB_0002e953;
  case 6:
    goto LAB_0002e953;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0x15:
  case 0x19:
    break;
  case 0xc:
  case 0x1d:
    FUN_00030057();
    break;
  case 0xf:
    FUN_0005c848();
    FUN_00035bbf();
    break;
  case 0x10:
    FUN_0005c848();
    FUN_00035bbf();
    break;
  case 0x11:
    FUN_000eae8a();
    goto LAB_0002e953;
  case 0x12:
LAB_0002e953:
    FUN_0005c848();
    break;
  case 0x13:
    FUN_0003699b();
    goto LAB_0002e969;
  default:
    FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 1420, "Unhandled FRONTEND state") */
    break;
  case 0x18:
    FUN_00031bd6();
LAB_0002e969:
    FUN_00030cd9();
    break;
  case 0x1a:
    FUN_0005c848();
    FUN_0002a355();
    break;
  case 0x1b:
    FUN_0005c848();
  case 0xd:
    if ((DAT_0019d0bd & 0x10) == 0) {
      FUN_000ecd76();
    }
  }
  if (DAT_00334a44 != 0) {
    FUN_00030cb9();
  }
  DAT_00335130 = 1;
  switch(in_EAX) {
  case 0:
    goto LAB_0002ea32;
  case 1:
    FUN_000ebc10();
    DAT_00334de4 = FUN_0002ff2e();
    FUN_0005cf2d();
    _DAT_00334e08 = FUN_000eb818();
    DAT_00334e0c = DAT_003d9864 * (uint)DAT_0019cba6;
    DAT_00334e10 = FUN_000dc150();
    DAT_00334a50 = 1;
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfe;
    break;
  case 2:
    FUN_0005cf2d();
LAB_0002ea32:
    FUN_000ebc10();
    break;
  case 3:
    iVar1 = FUN_00030ef8();
    if (iVar1 == 0) {
      in_EAX = 7;
    }
    break;
  case 4:
    FUN_0005cf2d();
    FUN_00033ead();
    break;
  case 5:
    FUN_0005cf2d();
    FUN_0003468f();
    FUN_000ebc10();
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfe;
    break;
  case 6:
    FUN_0005cf2d();
    FUN_00034ed8();
    FUN_000ebc10();
    DAT_0019d0b6 = DAT_0019d0b6 | 1;
    break;
  case 8:
    if ((DAT_0019d0ba & 0x10) != 0) {
      FUN_000ed034();
    }
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0x15:
  case 0x19:
    DAT_00335130 = 0;
    break;
  case 0xc:
  case 0x1d:
    FUN_0002ffe4();
    break;
  case 0xd:
    DAT_0033512c = 0;
    DAT_00335128 = DAT_003d9830;
    FUN_000e6b20();
    DAT_003d9874 = 0x100;
    break;
  case 0xf:
    FUN_0005cf2d();
    FUN_000344c8();
    break;
  case 0x10:
    FUN_0005cf2d();
    FUN_0003409c();
    break;
  case 0x11:
    FUN_0005cf2d();
    FUN_000ebc10();
    FUN_00036008();
    break;
  case 0x12:
    FUN_0005cf2d();
    if (*(int *)(&DAT_002e18a0 + DAT_002f10ce._3_1_ * 0x1508) != 0) {
      *(undefined4 *)(&DAT_002e18a0 + DAT_002f10ce._3_1_ * 0x1508) = 0;
      FUN_000306e4();
    }
    FUN_000ebc10();
    DAT_003db5fc = 0;
    break;
  case 0x13:
    FUN_000ebc10();
    FUN_00036654();
    break;
  default:
    FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 1588, "Unhandled FRONTEND state") */
    break;
  case 0x18:
    FUN_000ebc10();
    FUN_00031a51();
    break;
  case 0x1a:
    DAT_00335135 = 0;
    DAT_00335131 = 0;
    goto LAB_0002ea55;
  case 0x1b:
LAB_0002ea55:
    FUN_0005cf2d();
  }
  DAT_00334a44 = in_EAX;
  return;
}

/******************************************************************************
 * Function : dk_why_are_we_here_02ecbd (Ghidra: FUN_0002ecbd)
 * Prototype: void dk_why_are_we_here_02ecbd(void);
 * Address  : 0x2ecbd (Size: 119 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp:1599 ("Why are we here when it's not a new level")
 * Naming   : String 'Why are we here when it's not a new level'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xdd920, 0xddaf0, 0xe7714, 0xe98c8
 * Strings  :
 *   - 0x163520: "frontend.cpp"
 *   - 0x1634f6: "Why are we here when it's not a new level"
 *   - 0x16352d: "CONTINUE.SAV"
 *   - 0x16353a: "SAVE"
 *   - 0x163541: "%s\%s"
 ******************************************************************************/
void FUN_0002ecbd(void)

{
  undefined1 in_AL;
  undefined4 uVar1;
  int extraout_ECX;
  int in_EDX;
  
  if (in_EDX == 0) {
    FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 1599, "Why are we here when it's not a new level") */
  }
  FUN_000dd920(s_CONTINUE_SAV_0016352d);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s__s_00163541,uVar1);
  if (extraout_ECX == 0) {
    in_AL = 0;
  }
  DAT_0019d0b4._1_1_ = in_AL;
  FUN_000e98c8();
  return;
}

/******************************************************************************
 * Function : sub_02ed34 (Ghidra: FUN_0002ed34)
 * Prototype: void sub_02ed34(void);
 * Address  : 0x2ed34 (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002ed34(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00334de4 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : dk_continue_sav_02ed41 (Ghidra: FUN_0002ed41)
 * Prototype: void dk_continue_sav_02ed41(void);
 * Address  : 0x2ed41 (Size: 191 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'CONTINUE.SAV'
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x150f0, 0x2e8a7, 0xdd920, 0xe7714, 0xe8980, 0xe8a1c, 0xe8a80, 0xe8a98
 * Strings  :
 *   - 0x163547: "CONTINUE.SAV"
 *   - 0x163554: "SAVE"
 *   - 0x16355b: "%s\%s"
 ******************************************************************************/
void FUN_0002ed41(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined2 auStackY_100c [2028];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  
  bVar4 = 0;
  FUN_000dd920(s_CONTINUE_SAV_00163547);
  uVar2 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s__s_0016355b,uVar2);
  FUN_000150f0();
  iVar3 = FUN_000e8a98();
  if ((iVar3 == 0x151825) && (iVar3 = FUN_000e8980(), iVar3 != -1)) {
    FUN_000e8a80();
    FUN_000e8a1c();
    bVar1 = uStack_1c._1_1_;
    if ((uStack_1c._1_1_ != 0) && (uStack_1c._1_1_ < 0x15)) {
      uStack_1c._1_1_ = 0;
      DAT_002e78ea = bVar1;
      DAT_0019d0ac = local_24;
      (&DAT_0019d0b0)[(uint)bVar4 * -2] = (&uStack_20)[(uint)bVar4 * -2];
      (&DAT_0019d0b4)[(uint)bVar4 * -4 + (uint)bVar4 * -4] =
           (&uStack_1c)[(uint)bVar4 * -4 + (uint)bVar4 * -4];
      FUN_0002e8a7();
      return;
    }
  }
  DAT_00334de4 = 0;
  return;
}

/******************************************************************************
 * Function : sub_02ee00 (Ghidra: FUN_0002ee00)
 * Prototype: void sub_02ee00(void);
 * Address  : 0x2ee00 (Size: 62 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x30061, 0x300a7, 0x3012d
 * Callees  : 1 -> 0xe8c83
 ******************************************************************************/
void FUN_0002ee00(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < DAT_003d9830; iVar1 = iVar1 + 1) {
    FUN_000e8c83();
  }
  return;
}

/******************************************************************************
 * Function : sub_02ee3e (Ghidra: FUN_0002ee3e)
 * Prototype: void sub_02ee3e(void);
 * Address  : 0x2ee3e (Size: 123 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0002ee3e(void)

{
  byte *in_EAX;
  
  DAT_003d9874 = 0x20;
  DAT_003d98b4 = DAT_003346f0;
  if (((*in_EAX & 8) != 0) &&
     ((*(int *)(in_EAX + 0x33) == 0 ||
      (DAT_003d98b4 = DAT_003346ec, DAT_00334738 != *(int *)(in_EAX + 0x33))))) {
    DAT_003d98b4 = *(undefined4 *)
                    (&DAT_003346e4 + (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3] * 4);
  }
  FUN_000e6b20();
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_02eeb9 (Ghidra: FUN_0002eeb9)
 * Prototype: void sub_02eeb9(void);
 * Address  : 0x2eeb9 (Size: 218 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0xe6b20, 0xe6c1c, 0xe8ca8, 0xe9dd6, 0xeb818, 0xefdb4
 ******************************************************************************/
void FUN_0002eeb9(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined8 uVar2;
  
  while (iVar1 = FUN_000e6c1c(), 0xf0 < iVar1) {
    uVar2 = FUN_000efdb4();
    *(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + -1 + (int)uVar2) = 0;
  }
  FUN_000e8ca8();
  iVar1 = extraout_ECX;
  if (in_EAX == DAT_0034cf1f) {
    FUN_000eb818();
    FUN_000e9dd6();
    iVar1 = extraout_ECX_00;
  }
  DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + iVar1 * 4);
  DAT_003d9874 = 0x20;
  FUN_000e6b20();
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_02ef93 (Ghidra: FUN_0002ef93)
 * Prototype: void sub_02ef93(void);
 * Address  : 0x2ef93 (Size: 33 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_0002ef93(void)

{
  FUN_0013a710();
  return;
}

/******************************************************************************
 * Function : sub_02efb4 (Ghidra: FUN_0002efb4)
 * Prototype: void sub_02efb4(void);
 * Address  : 0x2efb4 (Size: 470 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e500
 * Callees  : 4 -> 0xe6b20, 0xe6d80, 0xeb818, 0x13a710
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002efb4(void)

{
  byte *in_EAX;
  undefined2 in_CX;
  int in_EDX;
  int unaff_EBX;
  uint local_1c;
  
  local_1c = (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3];
  if ((*in_EAX & 8) == 0) {
    local_1c = 3;
  }
  else if ((*(int *)(in_EAX + 0x33) != 0) && (DAT_00334738 == *(int *)(in_EAX + 0x33))) {
    FUN_000eb818();
    local_1c = 2;
  }
  if (in_EDX == 2) {
    FUN_0013a710();
    FUN_0013a710();
  }
  else {
    if (in_EDX != 1) {
      FUN_0013a710();
      goto LAB_0002f0fc;
    }
    FUN_0013a710();
  }
  FUN_0013a710();
LAB_0002f0fc:
  FUN_0013a710();
  if (unaff_EBX != 0) {
    DAT_003d98b4 = *(undefined4 *)(&DAT_003346e4 + local_1c * 4);
    DAT_003d9874 = in_CX;
    FUN_000e6b20();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_02f18a (Ghidra: FUN_0002f18a)
 * Prototype: void sub_02f18a(void);
 * Address  : 0x2f18a (Size: 62 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x349d9, 0x34a8a
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f18a(void)

{
  char in_AL;
  int iVar1;
  
  iVar1 = in_AL * 0x4ef;
  *(undefined2 *)(&DAT_0019d510 + iVar1) = 0;
  *(undefined2 *)(&DAT_0019d512 + iVar1) = 0;
  *(undefined2 *)(&DAT_0019d50c + iVar1) = 0x280;
  *(undefined2 *)(&DAT_0019d50e + iVar1) = 0x1e0;
  DAT_002f10ce._3_1_ = in_AL;
  (&DAT_0019d0f3)[iVar1] = in_AL;
  return;
}

/******************************************************************************
 * Function : sub_02f1c8 (Ghidra: FUN_0002f1c8)
 * Prototype: void sub_02f1c8(void);
 * Address  : 0x2f1c8 (Size: 10 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2ffe4, 0x30ef8, 0x31a51, 0x36654, 0x6aac0
 * Callees  : 1 -> 0xe8230
 ******************************************************************************/
void FUN_0002f1c8(void)

{
  FUN_000e8230();
  return;
}

/******************************************************************************
 * Function : sub_02f1d2 (Ghidra: FUN_0002f1d2)
 * Prototype: void sub_02f1d2(void);
 * Address  : 0x2f1d2 (Size: 10 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2ffe4, 0x30ef8, 0x31a51, 0x36654, 0x6aac0
 * Callees  : 1 -> 0xe8230
 ******************************************************************************/
void FUN_0002f1d2(void)

{
  FUN_000e8230();
  return;
}

/******************************************************************************
 * Function : sub_02f1dc (Ghidra: FUN_0002f1dc)
 * Prototype: void sub_02f1dc(void);
 * Address  : 0x2f1dc (Size: 91 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2f237, 0x338fd
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_0002f1dc(void)

{
  int in_EAX;
  
  FUN_0013a710(*(undefined2 *)(in_EAX + 0x27));
  return;
}

/******************************************************************************
 * Function : sub_02f237 (Ghidra: FUN_0002f237)
 * Prototype: void sub_02f237(void);
 * Address  : 0x2f237 (Size: 26 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2f1dc
 ******************************************************************************/
void FUN_0002f237(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_02f251 (Ghidra: FUN_0002f251)
 * Prototype: void sub_02f251(void);
 * Address  : 0x2f251 (Size: 435 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x303ad, 0x13a710
 ******************************************************************************/
void FUN_0002f251(void)

{
  byte *pbVar1;
  int in_EAX;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint auStack_44 [5];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = 0xc;
  local_30 = 0;
  local_20 = (int)*(short *)(in_EAX + 0x1d);
  iVar4 = DAT_00334728 + 0x96;
  do {
    local_30 = local_30 + 1;
    FUN_0013a710();
    pbVar1 = (byte *)(iVar4 + 4);
    iVar4 = iVar4 + 6;
    local_20 = local_20 + (uint)*pbVar1;
  } while (local_30 < 6);
  for (; 0 < local_1c; local_1c = local_1c - iVar4) {
    if (local_1c < 3) {
      iVar4 = 0x21;
    }
    else {
      iVar4 = 0x28;
    }
    iVar4 = DAT_00334728 + iVar4 * 6;
    auStack_44[4] = (uint)*(short *)(in_EAX + 0x1d);
    local_2c = 0;
    do {
      local_2c = local_2c + 1;
      FUN_0013a710();
      pbVar1 = (byte *)(iVar4 + 4);
      iVar4 = iVar4 + 6;
      auStack_44[4] = auStack_44[4] + *pbVar1;
    } while (local_2c < 6);
    if (local_1c < 3) {
      iVar4 = 1;
    }
    else {
      iVar4 = 3;
    }
  }
  local_24 = 0;
  auStack_44[3] = (uint)*(short *)(in_EAX + 0x1d);
  iVar4 = DAT_00334728 + 0x11a;
  do {
    local_24 = local_24 + 1;
    FUN_0013a710();
    pbVar1 = (byte *)(iVar4 + 4);
    iVar4 = iVar4 + 6;
    auStack_44[3] = auStack_44[3] + *pbVar1;
  } while (local_24 < 6);
  DAT_003d98b4 = DAT_003346e8;
  auStack_44[2] = (int)*(short *)(in_EAX + 0x1d) + (uint)*(byte *)(DAT_00334728 + 0xca);
  DAT_003d9874 = 0;
  local_28 = (uint)*(byte *)(DAT_00334728 + 0x9b) + (int)*(short *)(in_EAX + 0x1f) + 3;
  iVar4 = 0;
  puVar3 = auStack_44 + 2;
  do {
    if (DAT_003d98b4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    *(uint *)((int)puVar3 + -4) = uVar2;
    *(undefined4 *)((int)puVar3 + -8) = 0x2f3cb;
    FUN_000303ad();
    if (DAT_003d98b4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    iVar4 = iVar4 + 1;
    local_28 = local_28 + uVar2;
    puVar3 = (uint *)((int)puVar3 + -4);
  } while (iVar4 < 10);
  return;
}

/******************************************************************************
 * Function : sub_02f404 (Ghidra: FUN_0002f404)
 * Prototype: void sub_02f404(void);
 * Address  : 0x2f404 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f404(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_0017ae42 == -1;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02f414 (Ghidra: FUN_0002f414)
 * Prototype: void sub_02f414(void);
 * Address  : 0x2f414 (Size: 301 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 3 -> 0x30309, 0xe6c1c, 0xe8ca8
 ******************************************************************************/
void FUN_0002f414(void)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (DAT_003db5fc == 0) {
    return;
  }
  if ((DAT_003db5fc & 0x80) != 0) {
    DAT_003db5fc = 0;
    return;
  }
  if (DAT_003db5fc == 0xe) {
    if (DAT_00335124 == 0) {
      DAT_003db5fc = 0;
      return;
    }
    DAT_00335124 = DAT_00335124 + -1;
  }
  else {
    if (DAT_003db5fc == 0x1c) {
      FUN_000e8ca8();
      DAT_0017ae42 = 0xffffffff;
      FUN_00030309();
      DAT_003db5fc = 0;
      return;
    }
    if (0x3e < DAT_00335124) {
      DAT_003db5fc = 0;
      return;
    }
    DAT_003d98b4 = DAT_003346e8;
    if ((DAT_003db526 == '\0') && (DAT_003db532 == '\0')) {
      bVar1 = (&DAT_00195458)[DAT_003db5fc];
    }
    else {
      bVar1 = (&DAT_001954d8)[DAT_003db5fc];
    }
    if (bVar1 == 0) {
      DAT_003d98b4 = DAT_003346e8;
      DAT_003db5fc = 0;
      return;
    }
    if (*(byte *)((bVar1 - 0x1f) * 6 + 4 + DAT_003346e8) < 2) {
      DAT_003d98b4 = DAT_003346e8;
      DAT_003db5fc = 0;
      return;
    }
    uVar2 = FUN_000e6c1c();
    if (299 < (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20)) {
      DAT_003db5fc = 0;
      return;
    }
    (&DAT_003350e4)[DAT_00335124] = bVar1;
    DAT_00335124 = DAT_00335124 + 1;
  }
  (&DAT_003350e4)[DAT_00335124] = 0;
  DAT_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : sub_02f541 (Ghidra: FUN_0002f541)
 * Prototype: void sub_02f541(void);
 * Address  : 0x2f541 (Size: 45 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x2e8a7, 0x32f6a
 ******************************************************************************/
void FUN_0002f541(void)

{
  int iVar1;
  
  iVar1 = FUN_00032f6a();
  if ((iVar1 == 0) && (DAT_00334a50 == 0)) {
    FUN_0002e8a7();
    return;
  }
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_02f56e (Ghidra: FUN_0002f56e)
 * Prototype: void sub_02f56e(void);
 * Address  : 0x2f56e (Size: 282 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_0002f56e(void)

{
  byte *in_EAX;
  int extraout_ECX;
  
  if ((*in_EAX & 8) != 0) {
    in_EAX[0x27] = 0x20;
    in_EAX[0x28] = 0;
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710((int)((uint)*(ushort *)(extraout_ECX + 0x37) *
                      (*(ushort *)(extraout_ECX + 0x25) - 0x40)) >> 8);
  }
  return;
}

/******************************************************************************
 * Function : sub_02f688 (Ghidra: FUN_0002f688)
 * Prototype: void sub_02f688(void);
 * Address  : 0x2f688 (Size: 205 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x13a710
 ******************************************************************************/
void FUN_0002f688(void)

{
  byte *in_EAX;
  int iVar1;
  int extraout_ECX;
  
  if ((*in_EAX & 8) != 0) {
    in_EAX[0x27] = 0x20;
    in_EAX[0x28] = 0;
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    if (*(char *)(extraout_ECX + 1) == '\0') {
      iVar1 = DAT_00334728 + 0x1d4;
    }
    else {
      iVar1 = DAT_00334728 + 0x222;
    }
    FUN_0013a710(iVar1);
  }
  return;
}

/******************************************************************************
 * Function : sub_02f755 (Ghidra: FUN_0002f755)
 * Prototype: void sub_02f755(void);
 * Address  : 0x2f755 (Size: 20 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2a355
 ******************************************************************************/
void FUN_0002f755(void)

{
  DAT_002ee921 = DAT_002ee921 == '\0';
  FUN_0002a355();
  return;
}

/******************************************************************************
 * Function : sub_02f769 (Ghidra: FUN_0002f769)
 * Prototype: void sub_02f769(void);
 * Address  : 0x2f769 (Size: 106 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0002f769(void)

{
  int in_EAX;
  
  DAT_003d98b4 = DAT_003346ec;
  if (DAT_00334738 != *(int *)(in_EAX + 0x33)) {
    DAT_003d98b4 = *(undefined4 *)
                    (&DAT_003346e4 + (uint)(byte)(&DAT_0017ad09)[*(int *)(in_EAX + 0x33) * 3] * 4);
  }
  FUN_000e6b20();
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_02f7d3 (Ghidra: FUN_0002f7d3)
 * Prototype: void sub_02f7d3(void);
 * Address  : 0x2f7d3 (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f7d3(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = 0 < DAT_00334dec;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02f7e0 (Ghidra: FUN_0002f7e0)
 * Prototype: void sub_02f7e0(void);
 * Address  : 0x2f7e0 (Size: 15 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x2a355
 ******************************************************************************/
void FUN_0002f7e0(void)

{
  DAT_002ee922 = DAT_00334a48;
  FUN_0002a355();
  return;
}

/******************************************************************************
 * Function : sub_02f7ef (Ghidra: FUN_0002f7ef)
 * Prototype: void sub_02f7ef(void);
 * Address  : 0x2f7ef (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f7ef(void)

{
  byte *in_EAX;
  bool bVar1;
  
  bVar1 = DAT_00335131 != 0;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02f7fc (Ghidra: FUN_0002f7fc)
 * Prototype: void sub_02f7fc(void);
 * Address  : 0x2f7fc (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f7fc(void)

{
  bool bVar1;
  byte *in_EAX;
  
  bVar1 = DAT_00335131 < 0x1f;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_02f809 (Ghidra: FUN_0002f809)
 * Prototype: void sub_02f809(void);
 * Address  : 0x2f809 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f809(void)

{
  if (DAT_00335131 != 0) {
    DAT_00335131 = DAT_00335131 + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_02f819 (Ghidra: FUN_0002f819)
 * Prototype: void sub_02f819(void);
 * Address  : 0x2f819 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f819(void)

{
  if (DAT_00335131 < 0x1f) {
    DAT_00335131 = DAT_00335131 + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_02f829 (Ghidra: FUN_0002f829)
 * Prototype: void sub_02f829(void);
 * Address  : 0x2f829 (Size: 19 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f829(void)

{
  byte *in_EAX;
  int iVar1;
  
  iVar1 = DAT_00335131 - *(int *)(in_EAX + 0x33);
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (iVar1 + -1 < 0x20) << 3;
  return;
}

/******************************************************************************
 * Function : sub_02f83c (Ghidra: FUN_0002f83c)
 * Prototype: void sub_02f83c(void);
 * Address  : 0x2f83c (Size: 19 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002f83c(void)

{
  FUN_0002f1dc();
  return;
}

/******************************************************************************
 * Function : sub_02f84f (Ghidra: FUN_0002f84f)
 * Prototype: void sub_02f84f(void);
 * Address  : 0x2f84f (Size: 37 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f84f(void)

{
  _DAT_0034cf11 = (uint)DAT_002ee8d8;
  _DAT_0034cf0d = (uint)DAT_002ee8d7;
  _DAT_00334a48 = (uint)DAT_002ee922;
  return;
}

/******************************************************************************
 * Function : dk_intromix_smk_02f874 (Ghidra: FUN_0002f874)
 * Prototype: void dk_intromix_smk_02f874(void);
 * Address  : 0x2f874 (Size: 46 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'INTROMIX.SMK'
 * Callers  : 1 -> 0x2fda1
 * Callees  : 2 -> 0x2f9f5, 0xe7714
 * Strings  :
 *   - 0x163565: "INTROMIX.SMK"
 *   - 0x163572: "%s\LDATA\%s"
 ******************************************************************************/
void FUN_0002f874(void)

{
  FUN_000e7714(&DAT_0019cbac,s__s_LDATA__s_00163572,&DAT_002ee923,s_INTROMIX_SMK_00163565);
  FUN_0002f9f5();
  return;
}

/******************************************************************************
 * Function : sub_02f8a2 (Ghidra: FUN_0002f8a2)
 * Prototype: void sub_02f8a2(void);
 * Address  : 0x2f8a2 (Size: 300 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 6 -> 0x150f0, 0x2c3d0, 0x2e8a7, 0x2f9f5, 0xe7714, 0xe8ca8
 * Strings  :
 *   - 0x16358b: "%s\LDATA\%s"
 *   - 0x163597: "%s\LDATA\%s"
 ******************************************************************************/
void FUN_0002f8a2(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  if (((DAT_002ed3ee != '\0') && ((&DAT_0017acf4)[DAT_00334650 * 5] == '\0')) &&
     (DAT_00334650 = DAT_00334650 + 1, (&DAT_0017acf4)[DAT_00334650 * 5] == '\x03')) {
    DAT_00334650 = 0;
  }
  iVar3 = DAT_00334650 * 5;
  bVar1 = (&DAT_0017acf4)[iVar3];
  if (bVar1 == 0) {
    FUN_000e7714(&DAT_0019cbac,s__s_LDATA__s_0016358b,&DAT_002ee923,
                 *(undefined4 *)((int)&DAT_0017acf5 + iVar3));
    FUN_0002f9f5();
  }
  else {
    if (bVar1 < 2) {
      FUN_000e7714(&DAT_0019cbac,s__s_LDATA__s_00163597,&DAT_002ee923,
                   *(undefined4 *)((int)&DAT_0017acf5 + iVar3));
      FUN_000150f0();
      cVar2 = FUN_0002c3d0();
      if (cVar2 == '\0') goto LAB_0002f9a9;
      FUN_000e8ca8();
      DAT_002e6f2d = 1;
      DAT_002e6fe0 = 0;
    }
    else if (bVar1 != 2) goto LAB_0002f9a9;
    FUN_0002e8a7();
  }
LAB_0002f9a9:
  DAT_00334650 = DAT_00334650 + 1;
  if ((&DAT_0017acf4)[DAT_00334650 * 5] == '\x03') {
    DAT_00334650 = 0;
  }
  return;
}

/******************************************************************************
 * Function : dk_outromix_smk_02f9ce (Ghidra: FUN_0002f9ce)
 * Prototype: void dk_outromix_smk_02f9ce(void);
 * Address  : 0x2f9ce (Size: 39 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'OUTROMIX.SMK'
 * Callers  : 1 -> 0x2fda1
 * Callees  : 1 -> 0xe7714
 * Strings  :
 *   - 0x1635a3: "OUTROMIX.SMK"
 *   - 0x1635b0: "%s\LDATA\%s"
 ******************************************************************************/
void FUN_0002f9ce(void)

{
  FUN_000e7714(&DAT_0019cbac,s__s_LDATA__s_001635b0,&DAT_002ee923,s_OUTROMIX_SMK_001635a3);
  FUN_0002f9f5();
  return;
}

/******************************************************************************
 * Function : sub_02f9f5 (Ghidra: FUN_0002f9f5)
 * Prototype: undefined4 sub_02f9f5(void);
 * Address  : 0x2f9f5 (Size: 257 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp:2326 ("Smacker error")
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2f874, 0x2f8a2
 * Callees  : 10 -> 0x2e8a7, 0x6aac0, 0xddaf0, 0xe7904, 0xe79fc, 0xe846c, 0xe8ca8, 0xebab0, 0xebf9c, 0xefde0
 * Strings  :
 *   - 0x1635ca: "frontend.cpp"
 *   - 0x1635bc: "Smacker error"
 ******************************************************************************/
undefined4 FUN_0002f9f5(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_0006aac0();
  if (iVar1 != 0) {
    FUN_000ebab0();
    FUN_000e7904(extraout_EDX);
    FUN_000e79fc();
    iVar1 = FUN_000efde0();
    if (iVar1 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 2326, "Smacker error") */
    }
  }
  iVar1 = FUN_0006aac0();
  if (iVar1 == 0) {
    DAT_00334021 = 1;
    FUN_000e8ca8();
    DAT_0019a2a1 = 1;
    return 0;
  }
  FUN_000e7904(0);
  FUN_000e79fc();
  FUN_000e846c(&DAT_00334740);
  if (extraout_ECX != -1) {
    FUN_0002e8a7();
  }
  DAT_003d987b = 0;
  DAT_003d987c = 0;
  DAT_003d987d = 0;
  FUN_000ebf9c();
  return 1;
}

/******************************************************************************
 * Function : sub_02faf6 (Ghidra: FUN_0002faf6)
 * Prototype: void sub_02faf6(void);
 * Address  : 0x2faf6 (Size: 339 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dfac
 * Callees  : 12 -> 0x2e8a7, 0x2f414, 0x30266, 0x302ba, 0x30996, 0x31273, 0x31c23, 0x35037, 0x36a59, 0x57fe4 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002faf6(void)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00334a44 < 0xd) {
    if (DAT_00334a44 < 3) {
      if ((DAT_00334a44 == 1) &&
         (((uint)DAT_0019cba6 * DAT_003d9864 - DAT_00334e0c != 0 ||
          (iVar1 = FUN_000dc150(), iVar1 != DAT_00334e10)))) {
        DAT_00334e0c = DAT_003d9864 * (uint)DAT_0019cba6;
        DAT_00334e10 = FUN_000dc150();
        _DAT_00334e08 = FUN_000eb818();
      }
      goto LAB_0002fb22;
    }
    if (DAT_00334a44 < 4) {
      FUN_00031273();
      return;
    }
    if (DAT_00334a44 < 6) goto LAB_0002fb22;
    if (DAT_00334a44 < 7) {
      FUN_00057fe4();
      FUN_00035037();
      return;
    }
    bVar2 = DAT_00334a44 == 0xc;
  }
  else {
    if (DAT_00334a44 < 0xe) {
      iVar1 = FUN_000302ba();
      if ((iVar1 != 0) || (DAT_0033512c != 0)) {
        FUN_0002e8a7();
      }
      FUN_00030266();
      return;
    }
    if (DAT_00334a44 < 0x18) {
      if (0x11 < DAT_00334a44) {
        if (DAT_00334a44 < 0x13) {
          FUN_00057fe4();
          FUN_0002f414();
          return;
        }
        if (DAT_00334a44 == 0x13) {
          FUN_00036a59();
          return;
        }
      }
      goto LAB_0002fb22;
    }
    if (DAT_00334a44 < 0x19) {
      FUN_00031c23();
      return;
    }
    if (DAT_00334a44 < 0x1a) goto LAB_0002fb22;
    if (DAT_00334a44 < 0x1b) {
      if (DAT_00335135 != 0) {
        FUN_00030996();
        return;
      }
      goto LAB_0002fb22;
    }
    bVar2 = DAT_00334a44 == 0x1d;
  }
  if (bVar2) {
    iVar1 = FUN_000302ba();
    if (iVar1 == 0) {
      return;
    }
    FUN_0002e8a7();
    return;
  }
LAB_0002fb22:
  FUN_00057fe4();
  return;
}

/******************************************************************************
 * Function : sub_02fc49 (Ghidra: FUN_0002fc49)
 * Prototype: void sub_02fc49(void);
 * Address  : 0x2fc49 (Size: 344 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dfac
 * Callees  : 14 -> 0x2e8a7, 0x2fefd, 0x31854, 0x31def, 0x33f26, 0x34105, 0x3457c, 0x346de, 0x34f38, 0x36188 ...
 ******************************************************************************/
void FUN_0002fc49(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_00334a44 < 9) {
    if (DAT_00334a44 < 4) {
      if (1 < DAT_00334a44) {
        if (2 < DAT_00334a44) {
          uVar2 = FUN_00031854();
          *(undefined4 *)((ulonglong)uVar2 >> 0x20) = (int)uVar2;
          return;
        }
        FUN_0002fefd();
        return;
      }
      if (DAT_00334a44 != 1) {
        return;
      }
      DAT_0017ad21 = 1;
      if (DAT_00334de4 == 0) {
        DAT_0017ad21 = 3;
      }
      FUN_000eb818();
      iVar1 = FUN_000e69fc();
      if (iVar1 < 0x7531) {
        return;
      }
      FUN_0002e8a7();
      return;
    }
    if (DAT_00334a44 < 5) {
      FUN_00033f26();
      return;
    }
    if (DAT_00334a44 < 6) {
      FUN_000346de();
      return;
    }
    if (DAT_00334a44 < 7) {
      FUN_00034f38();
      return;
    }
  }
  else if (DAT_00334a44 < 10) {
    DAT_0019a2a1 = 1;
  }
  else if (DAT_00334a44 < 0x11) {
    if (0xc < DAT_00334a44) {
      if (0xd < DAT_00334a44) {
        if (DAT_00334a44 < 0xf) {
          return;
        }
        if (0xf < DAT_00334a44) {
          FUN_00034105();
          return;
        }
        FUN_0003457c();
        return;
      }
      goto joined_r0x0002fd2f;
    }
    if (DAT_00334a44 != 10) {
      return;
    }
  }
  else {
    if (DAT_00334a44 < 0x12) {
      FUN_00036188();
      return;
    }
    if (DAT_00334a44 < 0x18) {
      if (DAT_00334a44 != 0x13) {
        return;
      }
      FUN_00036e52();
      return;
    }
    if (DAT_00334a44 < 0x19) {
      uVar2 = FUN_00031def();
      *(undefined4 *)((ulonglong)uVar2 >> 0x20) = (int)uVar2;
      return;
    }
    if (0x19 < DAT_00334a44) {
      if (DAT_00334a44 != 0x1b) {
        return;
      }
joined_r0x0002fd2f:
      if ((DAT_0019d0bd & 0x10) != 0) {
        return;
      }
      FUN_000ecabc();
      return;
    }
  }
  *in_EAX = 1;
  return;
}

/******************************************************************************
 * Function : sub_02fda1 (Ghidra: FUN_0002fda1)
 * Prototype: undefined8 sub_02fda1(void);
 * Address  : 0x2fda1 (Size: 297 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dfac
 * Callees  : 12 -> 0x2f874, 0x2f8a2, 0x2f9ce, 0x30061, 0x300a7, 0x3012d, 0x30a28, 0x31599, 0x322e9, 0x369c4 ...
 ******************************************************************************/
undefined8 FUN_0002fda1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  bool bVar2;
  undefined8 uVar3;
  
  uVar1 = 1;
  bVar2 = false;
  if (DAT_00334a44 < 0xe) {
    if (DAT_00334a44 == 0xb) {
      FUN_0002f874();
      goto LAB_0002fdc2;
    }
LAB_0002fdd4:
    bVar2 = true;
  }
  else {
    if (DAT_00334a44 < 0xf) {
      FUN_0002f8a2();
    }
    else {
      if (DAT_00334a44 != 0x15) goto LAB_0002fdd4;
      FUN_0002f9ce();
    }
LAB_0002fdc2:
    uVar1 = 0;
  }
  if (!bVar2) goto LAB_0002fec5;
  uVar3 = FUN_000e797c();
  if ((int)uVar3 != 1) {
    return CONCAT44(in_EDX,(int)((ulonglong)uVar3 >> 0x20));
  }
  if (DAT_00334a44 < 0xf) {
    if (DAT_00334a44 < 4) {
      if (DAT_00334a44 != 0) {
        if (DAT_00334a44 < 3) goto LAB_0002fdf9;
        FUN_00031599();
      }
    }
    else {
      if (DAT_00334a44 < 6) goto LAB_0002fdf9;
      if (DAT_00334a44 < 0xc) {
        bVar2 = DAT_00334a44 == 6;
        goto LAB_0002fe84;
      }
      if (DAT_00334a44 < 0xd) {
        FUN_00030061();
      }
      else if (DAT_00334a44 == 0xd) {
        FUN_0003012d();
      }
    }
  }
  else if (DAT_00334a44 < 0x13) {
LAB_0002fdf9:
    FUN_0005449e();
  }
  else if (DAT_00334a44 < 0x18) {
    if (DAT_00334a44 < 0x14) {
      FUN_000369c4();
    }
    else {
      bVar2 = DAT_00334a44 == 0x14;
LAB_0002fe84:
      if (bVar2) goto LAB_0002fdf9;
    }
  }
  else if (DAT_00334a44 < 0x19) {
    FUN_000322e9();
  }
  else if (DAT_00334a44 < 0x1b) {
    if ((DAT_00334a44 == 0x1a) && (FUN_0005449e(), DAT_00335135 != 0)) {
      FUN_00030a28();
    }
  }
  else {
    if (DAT_00334a44 < 0x1c) goto LAB_0002fdf9;
    if (DAT_00334a44 == 0x1d) {
      FUN_000300a7();
    }
  }
  FUN_000e797c();
  uVar1 = extraout_EDX;
LAB_0002fec5:
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_02feca (Ghidra: FUN_0002feca)
 * Prototype: void sub_02feca(void);
 * Address  : 0x2feca (Size: 51 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2dfac, 0x2e6c4
 * Callees  : 1 -> 0x2c6e2
 ******************************************************************************/
void FUN_0002feca(void)

{
  int iVar1;
  
  FUN_0002c6e2();
  DAT_00334dec = 0;
  iVar1 = 0;
  do {
    if ((&DAT_00334d5c)[iVar1] != '\0') {
      DAT_00334dec = DAT_00334dec + 1;
    }
    iVar1 = iVar1 + 0x11;
  } while (iVar1 != 0x88);
  return;
}

/******************************************************************************
 * Function : sub_02fefd (Ghidra: FUN_0002fefd)
 * Prototype: void sub_02fefd(void);
 * Address  : 0x2fefd (Size: 49 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002fefd(void)

{
  if ((DAT_00334dec == 0) || (DAT_00334de8 < 0)) {
    DAT_00334de8 = 0;
  }
  else if (DAT_00334dec + -1 < DAT_00334de8) {
    DAT_00334de8 = DAT_00334dec + -1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : dk_continue_sav_02ff2e (Ghidra: FUN_0002ff2e)
 * Prototype: longlong dk_continue_sav_02ff2e(void);
 * Address  : 0x2ff2e (Size: 182 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'CONTINUE.SAV'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 7 -> 0x150f0, 0xdd920, 0xe7714, 0xe8980, 0xe8a1c, 0xe8a80, 0xe8a98
 * Strings  :
 *   - 0x1635d7: "CONTINUE.SAV"
 *   - 0x1635e4: "SAVE"
 *   - 0x1635eb: "%s\%s"
 ******************************************************************************/
longlong FUN_0002ff2e(void)

{
  undefined4 uVar1;
  int iVar2;
  uint in_EDX;
  byte local_13;
  
  FUN_000dd920(s_CONTINUE_SAV_001635d7);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s__s_001635eb,uVar1);
  FUN_000150f0();
  iVar2 = FUN_000e8a98();
  if (iVar2 == 0x151825) {
    if (DAT_0017ad03 != 0) {
      iVar2 = FUN_000e8980();
      if (iVar2 != -1) {
        FUN_000e8a80();
        FUN_000e8a1c();
        if (local_13 != 0) {
          DAT_002e78ea = local_13;
        }
      }
      DAT_0017ad03 = 0;
    }
    if (DAT_002e78ea < 0x15) {
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_ldata_front_raw_02ffe4 (Ghidra: FUN_0002ffe4)
 * Prototype: undefined8 dk_ldata_front_raw_02ffe4(void);
 * Address  : 0x2ffe4 (Size: 115 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp:2759 ("Unable to Load FRONT STORY FILES")
 * Naming   : String 'LDATA\FRONT.RAW'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 10 -> 0x150f0, 0x2f1c8, 0x2f1d2, 0xddaf0, 0xe830c, 0xe846c, 0xeb818, 0xf05f0, 0xf06fa, 0xf071e
 * Strings  :
 *   - 0x163612: "frontend.cpp"
 *   - 0x17ae46: "LDATA\FRONT.RAW"
 *   - 0x1635f1: "Unable to Load FRONT STORY FILES"
 ******************************************************************************/
undefined8 FUN_0002ffe4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  FUN_000150f0();
  FUN_0002f1c8();
  iVar1 = FUN_000e830c();
  if (iVar1 != 0) {
    uVar2 = FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 2759, "Unable to Load FRONT STORY FILES") */
    return CONCAT44(in_EDX,uVar2);
  }
  FUN_0002f1d2();
  FUN_000f05f0();
  FUN_000e846c(&DAT_00334740);
  FUN_000eb818();
  FUN_000f071e();
  iVar1 = FUN_000f06fa();
  DAT_0033513d = iVar1 % 0x1a + 0x323;
  return CONCAT44(in_EDX,iVar1 / 0x1a);
}

/******************************************************************************
 * Function : dk_ldata_front_raw_030057 (Ghidra: FUN_00030057)
 * Prototype: void dk_ldata_front_raw_030057(void);
 * Address  : 0x30057 (Size: 10 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'LDATA\FRONT.RAW'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 1 -> 0xe83f0
 * Strings  :
 *   - 0x17ae46: "LDATA\FRONT.RAW"
 ******************************************************************************/
void FUN_00030057(void)

{
  FUN_000e83f0();
  return;
}

/******************************************************************************
 * Function : sub_030061 (Ghidra: FUN_00030061)
 * Prototype: void sub_030061(void);
 * Address  : 0x30061 (Size: 70 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 2 -> 0x2ee00, 0xe6b20
 ******************************************************************************/
void FUN_00030061(void)

{
  FUN_0002ee00();
  FUN_000e6b20();
  DAT_003d98b4 = DAT_00334df4;
  DAT_003d9874 = 0x100;
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_0300a7 (Ghidra: FUN_000300a7)
 * Prototype: void sub_0300a7(void);
 * Address  : 0x300a7 (Size: 134 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 5 -> 0x2e8a7, 0x2ee00, 0x30e47, 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_000300a7(void)

{
  int iVar1;
  
  FUN_0002ee00();
  FUN_000e6b20();
  DAT_003d9874 = 0x100;
  DAT_003d98b4 = DAT_00334df4;
  iVar1 = FUN_00030e47();
  if (iVar1 != 0) {
    FUN_000e6d80();
    FUN_000e6d80();
    return;
  }
  FUN_0002e8a7();
  return;
}

/******************************************************************************
 * Function : sub_03012d (Ghidra: FUN_0003012d)
 * Prototype: void sub_03012d(void);
 * Address  : 0x3012d (Size: 313 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 3 -> 0x2ee00, 0xe6b20, 0xe6d80
 ******************************************************************************/
void FUN_0003012d(void)

{
  bool bVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  int local_18;
  
  local_18 = 1;
  DAT_00335128 = DAT_00335128 - DAT_00334e04;
  FUN_0002ee00();
  DAT_003d9874 = 0x100;
  FUN_000e6b20();
  DAT_003d98b4 = DAT_003346e8;
  bVar1 = 0 < DAT_00335128;
  iVar4 = 0;
  for (iVar3 = DAT_00335128;
      ((&PTR_DAT_0017af0e)[iVar4] != (undefined *)0x0 && (iVar3 < DAT_003d9830));
      iVar3 = iVar3 + uVar2 + 2) {
    if (DAT_003d98b4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    if ((int)-uVar2 < iVar3) {
      if (*(&PTR_DAT_0017af0e)[iVar4] == '*') {
        iVar3 = 1;
        iVar4 = iVar4 + 1;
      }
      else {
        iVar3 = 2;
      }
      if (iVar3 != local_18) {
        DAT_003d98b4 = *(int *)(&DAT_003346e4 + iVar3 * 4);
        local_18 = iVar3;
      }
      FUN_000e6d80();
      bVar1 = true;
      iVar3 = extraout_ECX;
    }
    else if (*(&PTR_DAT_0017af0e)[iVar4] == '*') {
      iVar4 = iVar4 + 1;
    }
    if (DAT_003d98b4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)(DAT_003d98b4 + 0xb);
    }
    iVar4 = iVar4 + 1;
  }
  if (!bVar1) {
    DAT_00335128 = DAT_003d9830;
    DAT_0033512c = 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_030266 (Ghidra: FUN_00030266)
 * Prototype: void sub_030266(void);
 * Address  : 0x30266 (Size: 84 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00030266(void)

{
  DAT_00334e04 = 1;
  if (DAT_003db5cc == '\0') {
    if (((DAT_003db5c4 != '\0') && ((int)DAT_00335128 < 1)) &&
       (DAT_00334e04 = -(uint)*(byte *)(DAT_003346e8 + 0xc5),
       -DAT_00335128 == (uint)*(byte *)(DAT_003346e8 + 0xc5) ||
       (int)DAT_00334e04 < (int)DAT_00335128)) {
      DAT_00334e04 = DAT_00335128;
    }
  }
  else {
    DAT_00334e04 = (uint)*(byte *)(DAT_003346e8 + 0xc5);
  }
  return;
}

/******************************************************************************
 * Function : sub_0302ba (Ghidra: FUN_000302ba)
 * Prototype: undefined4 sub_0302ba(void);
 * Address  : 0x302ba (Size: 79 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000302ba(void)

{
  if (DAT_003db535 == '\0') {
    if (DAT_003db518 == '\0') {
      if (DAT_003db4fd == '\0') {
        if (DAT_0034b25c == '\0') {
          return 0;
        }
        DAT_0034b25c = '\0';
      }
      else {
        DAT_003db4fd = '\0';
      }
    }
    else {
      DAT_003db518 = '\0';
    }
  }
  else {
    DAT_003db535 = '\0';
  }
  return 1;
}

/******************************************************************************
 * Function : dk_data_hiscores_dat_030309 (Ghidra: FUN_00030309)
 * Prototype: void dk_data_hiscores_dat_030309(void);
 * Address  : 0x30309 (Size: 25 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'DATA\HISCORES.DAT'
 * Callers  : 2 -> 0x2f414, 0x30322
 * Callees  : 1 -> 0xe98c8
 * Strings  :
 *   - 0x16361f: "DATA\HISCORES.DAT"
 ******************************************************************************/
void FUN_00030309(void)

{
  FUN_000e98c8();
  return;
}

/******************************************************************************
 * Function : dk_data_hiscores_dat_030322 (Ghidra: FUN_00030322)
 * Prototype: void dk_data_hiscores_dat_030322(void);
 * Address  : 0x30322 (Size: 103 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : String 'DATA\HISCORES.DAT'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 4 -> 0x150f0, 0x30309, 0xe7714, 0xe984c
 * Strings  :
 *   - 0x163631: "DATA\HISCORES.DAT"
 *   - 0x163643: "Bullfrog"
 ******************************************************************************/
void FUN_00030322(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int extraout_ECX;
  int extraout_EDX;
  int iVar4;
  
  FUN_000150f0();
  iVar1 = FUN_000e984c();
  if (iVar1 != 0x2d0) {
    iVar4 = 1000;
    iVar1 = 0;
    puVar3 = &DAT_00334e18;
    do {
      FUN_000e7714(puVar3,s_Bullfrog_00163643);
      puVar3 = (undefined *)(extraout_ECX + 0x48);
      iVar2 = 10 - iVar1;
      *(int *)(&DAT_00334e14 + extraout_EDX) = iVar4;
      iVar4 = iVar4 + -100;
      iVar1 = iVar1 + 1;
      *(int *)(&DAT_00334e58 + extraout_EDX) = iVar2;
    } while (iVar1 < 10);
    FUN_00030309();
  }
  return;
}

/******************************************************************************
 * Function : sub_030389 (Ghidra: FUN_00030389)
 * Prototype: void sub_030389(void);
 * Address  : 0x30389 (Size: 1 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00030389(void)

{
  return;
}

/******************************************************************************
 * Function : sub_03038a (Ghidra: FUN_0003038a)
 * Prototype: void sub_03038a(void);
 * Address  : 0x3038a (Size: 35 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe7714
 * Strings  :
 *   - 0x16364c: "%s\%s"
 ******************************************************************************/
void FUN_0003038a(void)

{
  char *in_EAX;
  
  if (*in_EAX != '*') {
    FUN_000e7714(&DAT_00334654,s__s__s_0016364c,&DAT_002ee923);
  }
  return;
}

/******************************************************************************
 * Function : sub_0303ad (Ghidra: FUN_000303ad)
 * Prototype: void sub_0303ad(void);
 * Address  : 0x303ad (Size: 823 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2f251
 * Callees  : 6 -> 0xe6b20, 0xe6d80, 0xe7714, 0xe8ca8, 0xe9dd6, 0xeb818
 ******************************************************************************/
void FUN_000303ad(void)

{
  int in_EAX;
  int iVar1;
  
  DAT_003d9874 = 0x80;
  if ((in_EAX + 1) / 10 != 0) {
    FUN_000e6b20();
    FUN_000e7714(&DAT_0019cbac,&DAT_00163652,(in_EAX + 1) / 10);
    FUN_000e6d80();
  }
  FUN_000e6b20();
  FUN_000e7714(&DAT_0019cbac,&DAT_00163655,(in_EAX + 1) % 10);
  FUN_000e6d80();
  FUN_000e6b20();
  FUN_000e7714(&DAT_0019cbac,&DAT_00163658,*(undefined4 *)(&DAT_00334e14 + in_EAX * 0x48));
  FUN_000e6d80();
  if (*(int *)(&DAT_00334e58 + in_EAX * 0x48) / 10 != 0) {
    FUN_000e6b20();
    FUN_000e7714(&DAT_0019cbac,&DAT_0016365b,*(int *)(&DAT_00334e58 + in_EAX * 0x48) / 10);
    FUN_000e6d80();
  }
  FUN_000e6b20();
  FUN_000e7714(&DAT_0019cbac,&DAT_0016365e,*(int *)(&DAT_00334e58 + in_EAX * 0x48) % 10);
  FUN_000e6d80();
  DAT_003d9874 = 0;
  FUN_000e6b20();
  if (in_EAX == DAT_0017ae42) {
    iVar1 = FUN_000eb818();
    FUN_000e8ca8();
    if ((iVar1 / 200 & 1U) != 0) {
      FUN_000e9dd6();
    }
  }
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_0306e4 (Ghidra: FUN_000306e4)
 * Prototype: void sub_0306e4(void);
 * Address  : 0x306e4 (Size: 158 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 1 -> 0xe8ca8
 ******************************************************************************/
void FUN_000306e4(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar2;
  
  if (DAT_0033509c < in_EAX) {
    iVar1 = 9;
    for (iVar2 = 0x240; (0 < iVar1 && (*(int *)(&DAT_00334e14 + iVar2) < in_EAX));
        iVar2 = iVar2 + -0x48) {
      *(undefined4 *)(&DAT_00334e14 + iVar1 * 0x48) = *(undefined4 *)(&DAT_00334e14 + iVar2);
      *(undefined4 *)(&DAT_00334e58 + iVar1 * 0x48) = *(undefined4 *)(&DAT_00334e58 + iVar2);
      FUN_000e8ca8();
      iVar1 = extraout_ECX;
    }
    DAT_003350e4 = 0;
    DAT_0017ae42 = iVar1;
    *(int *)(&DAT_00334e14 + iVar1 * 0x48) = in_EAX;
    DAT_00335124 = 0;
    *(undefined4 *)(&DAT_00334e58 + iVar1 * 0x48) = in_EDX;
  }
  return;
}

/******************************************************************************
 * Function : sub_030782 (Ghidra: FUN_00030782)
 * Prototype: void sub_030782(void);
 * Address  : 0x30782 (Size: 11 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x30ca0, 0x30cb9, 0x6ae80
 * Callees  : 1 -> 0xe8d80
 ******************************************************************************/
void FUN_00030782(void)

{
  FUN_000e8d80();
  return;
}

/******************************************************************************
 * Function : sub_03078d (Ghidra: FUN_0003078d)
 * Prototype: void sub_03078d(void);
 * Address  : 0x3078d (Size: 485 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xe6b20, 0xe6d80, 0xe9dd6
 ******************************************************************************/
void FUN_0003078d(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined2 *puVar3;
  undefined2 local_1c;
  
  iVar1 = (DAT_00335131 - *(int *)(in_EAX + 0x33)) + -1;
  local_1c = DAT_00335141;
  if (iVar1 < 0x20) {
    iVar2 = *(int *)(&DAT_003772e4 + (uint)(byte)(&DAT_002ee8e0)[iVar1 * 2] * 4);
    if (iVar2 < 0) {
      puVar3 = &local_1c;
      local_1c = CONCAT11((char)((ushort)DAT_00335141 >> 8),-(char)iVar2);
    }
    else {
      puVar3 = (undefined2 *)(&DAT_0033319b)[iVar2];
    }
    DAT_003d98b4 = DAT_003346e8;
    if (DAT_00334738 == *(int *)(in_EAX + 0x33)) {
      DAT_003d98b4 = DAT_003346ec;
    }
    FUN_000e6b20(puVar3);
    DAT_003d9874 = 0x20;
    FUN_000e6d80();
    DAT_003d9874 = 0x80;
    DAT_0019cbac = 0;
    if (((&DAT_002ee8e1)[iVar1 * 2] & 2) != 0) {
      FUN_000e9dd6();
      FUN_000e9dd6();
    }
    if (((&DAT_002ee8e1)[iVar1 * 2] & 4) != 0) {
      FUN_000e9dd6();
      FUN_000e9dd6();
    }
    if (((&DAT_002ee8e1)[iVar1 * 2] & 1) != 0) {
      FUN_000e9dd6();
      FUN_000e9dd6();
    }
    FUN_000e9dd6();
    FUN_000e6d80();
  }
  return;
}

/******************************************************************************
 * Function : sub_030972 (Ghidra: FUN_00030972)
 * Prototype: void sub_030972(void);
 * Address  : 0x30972 (Size: 36 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00030972(void)

{
  int in_EAX;
  
  DAT_00335135 = 1;
  DAT_00335139 = (DAT_00335131 - *(int *)(in_EAX + 0x33)) + -1;
  DAT_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : sub_030996 (Ghidra: FUN_00030996)
 * Prototype: void sub_030996(void);
 * Address  : 0x30996 (Size: 146 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 1 -> 0x45dbb
 ******************************************************************************/
void FUN_00030996(void)

{
  int iVar1;
  
  if (DAT_003db5fc != '\x01') {
    if (DAT_003db5fc == '\0') {
      return;
    }
    if (DAT_003db4f8 != '\0') {
      DAT_003db5fc = DAT_003db5fc + -0x80;
    }
    iVar1 = FUN_00045dbb();
    if (iVar1 == 0) {
      DAT_003db5fc = 0;
      return;
    }
  }
  DAT_003db5fc = 0;
  DAT_00335135 = 0;
  return;
}

/******************************************************************************
 * Function : sub_030a28 (Ghidra: FUN_00030a28)
 * Prototype: void sub_030a28(void);
 * Address  : 0x30a28 (Size: 5 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00030a28(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  DAT_003d98b4 = DAT_003346e8;
  uVar3 = DAT_003338f3;
  iStack_1c = FUN_000e6c1c(DAT_003338f3);
  if (iStack_1c < 0x1b0) {
    iStack_1c = iStack_1c / 0x6c;
    iVar4 = 1;
  }
  else {
    iVar4 = iStack_1c / 0x144;
    iStack_1c = 4;
    if (4 < iVar4) {
      FUN_000ddaf0();
    }
  }
  if (iStack_1c < 2) {
    iStack_1c = 2;
  }
  else if (4 < iStack_1c) {
    iStack_1c = 4;
  }
  iVar1 = (iStack_1c + -2) * 0x6c + 0xea;
  iVar2 = (DAT_003d9830 + -0x5c) / 2;
  FUN_0013a710();
  for (iStack_20 = 0; iStack_20 < iStack_1c; iStack_20 = iStack_20 + 1) {
    FUN_0013a710(uVar3,DAT_00334728 + (iStack_20 % 4 + 0x1a) * 6,iVar1,iVar2,iVar4);
  }
  FUN_0013a710();
  FUN_0013a710();
  for (iStack_28 = 0; iStack_28 < iStack_1c; iStack_28 = iStack_28 + 1) {
    FUN_0013a710(uVar3,DAT_00334728 + (iStack_28 % 4 + 0x29) * 6);
  }
  FUN_0013a710();
  FUN_0013a710();
  for (iStack_24 = 0; iStack_24 < iStack_1c; iStack_24 = iStack_24 + 1) {
    FUN_0013a710(uVar3,DAT_00334728 + (iStack_24 % 4 + 0x30) * 6);
  }
  FUN_0013a710();
  DAT_003d9874 = 0x100;
  FUN_000e6b20();
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : dk_text_long_box_030a2d (Ghidra: FUN_00030a2d)
 * Prototype: void dk_text_long_box_030a2d(void);
 * Address  : 0x30a2d (Size: 627 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp:3295 ("Text too long for error box")
 * Naming   : String 'Text too long for error box'
 * Callers  : 3 -> 0x35c1e, 0x35d29, 0x35e19
 * Callees  : 4 -> 0xddaf0, 0xe6b20, 0xe6c1c, 0x13a710
 * Strings  :
 *   - 0x163685: "frontend.cpp"
 *   - 0x163669: "Text too long for error box"
 ******************************************************************************/
void FUN_00030a2d(void)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  DAT_003d98b4 = DAT_003346e8;
  iVar1 = FUN_000e6c1c();
  if (iVar1 < 0x1b0) {
    local_1c = iVar1 / 0x6c;
  }
  else {
    local_1c = 4;
    if (4 < iVar1 / 0x144) {
      FUN_000ddaf0(); /* LbErrorLog("frontend.cpp", line 3295, "Text too long for error box") */
    }
  }
  if (local_1c < 2) {
    local_1c = 2;
  }
  else if (4 < local_1c) {
    local_1c = 4;
  }
  FUN_0013a710();
  for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
    FUN_0013a710();
  }
  FUN_0013a710();
  FUN_0013a710();
  for (local_28 = 0; local_28 < local_1c; local_28 = local_28 + 1) {
    FUN_0013a710();
  }
  FUN_0013a710();
  FUN_0013a710();
  for (local_24 = 0; local_24 < local_1c; local_24 = local_24 + 1) {
    FUN_0013a710();
  }
  FUN_0013a710();
  DAT_003d9874 = 0x100;
  FUN_000e6b20();
  FUN_000e6d80();
  return;
}

/******************************************************************************
 * Function : sub_030ca0 (Ghidra: FUN_00030ca0)
 * Prototype: void sub_030ca0(void);
 * Address  : 0x30ca0 (Size: 25 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dfac
 * Callees  : 1 -> 0x30782
 ******************************************************************************/
void FUN_00030ca0(void)

{
  FUN_00030782();
  return;
}

/******************************************************************************
 * Function : sub_030cb9 (Ghidra: FUN_00030cb9)
 * Prototype: void sub_030cb9(void);
 * Address  : 0x30cb9 (Size: 32 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 2 -> 0x30782, 0xe7904
 ******************************************************************************/
void FUN_00030cb9(void)

{
  FUN_00030782();
  FUN_000e7904(0);
  return;
}

/******************************************************************************
 * Function : sub_030cd9 (Ghidra: FUN_00030cd9)
 * Prototype: longlong sub_030cd9(void);
 * Address  : 0x30cd9 (Size: 299 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2dfac, 0x2e8a7
 * Callees  : 5 -> 0x150f0, 0xdd920, 0xe7714, 0xe984c, 0xf05d8
 * Strings  :
 *   - 0x163692: "LDATA"
 *   - 0x16369a: "%s\FRONT.RAW"
 *   - 0x1636a7: "LDATA"
 *   - 0x1636af: "%s\FRONTBIT.DAT"
 *   - 0x1636bf: "LDATA"
 *   - 0x1636c7: "%s\FRONTBIT.TAB"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00030cd9(void)

{
  undefined4 uVar1;
  int iVar2;
  uint in_EDX;
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_FRONT_RAW_0016369a,uVar1);
  FUN_000150f0();
  iVar2 = FUN_000e984c();
  if (iVar2 == 0x4b000) {
    DAT_00334724 = &DAT_00279203;
    FUN_000dd920();
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_FRONTBIT_DAT_001636af,uVar1); /* 0x1636af="%s\FRONTBIT.DAT" */
    FUN_000150f0();
    iVar2 = FUN_000e984c();
    if (iVar2 != -1) {
      DAT_00334734 = (int)&DAT_002f317f + iVar2;
      DAT_00334730 = &DAT_002f317f;
      FUN_000dd920();
      uVar1 = FUN_000dd920();
      FUN_000e7714(&DAT_0019cbac,s__s_FRONTBIT_TAB_001636c7,uVar1);
      FUN_000150f0();
      iVar2 = FUN_000e984c();
      if (iVar2 != -1) {
        DAT_00334728 = DAT_00334734;
        _DAT_0033472c = DAT_00334734 + iVar2;
        FUN_000f05d8();
        return CONCAT44(in_EDX,1);
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_030e04 (Ghidra: FUN_00030e04)
 * Prototype: longlong sub_030e04(void);
 * Address  : 0x30e04 (Size: 67 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dfac
 * Callees  : 1 -> 0xeb7b0
 ******************************************************************************/
longlong FUN_00030e04(void)

{
  char *pcVar1;
  uint in_EDX;
  char local_14;
  char local_13;
  
  FUN_000eb7b0();
  pcVar1 = &DAT_0017b41a;
  while( true ) {
    if (*pcVar1 == '\0') {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*pcVar1 == local_14) && (pcVar1[1] == local_13)) break;
    pcVar1 = pcVar1 + 6;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_030e88 (Ghidra: FUN_00030e88)
 * Prototype: longlong sub_030e88(void);
 * Address  : 0x30e88 (Size: 110 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2dfac
 * Callees  : 3 -> 0x2a355, 0x6a689, 0xe8ca8
 ******************************************************************************/
longlong FUN_00030e88(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_0006a689();
  if (iVar1 == 0) {
    if ((DAT_002ee8dc != 0xd) || (iVar1 = FUN_0006a689(), iVar1 == 0)) {
      DAT_00334021 = 1;
      FUN_000e8ca8();
      DAT_0019a2a1 = 1;
      return (ulonglong)in_EDX << 0x20;
    }
    DAT_002ee8dc = 1;
    FUN_0002a355();
  }
  return CONCAT44(in_EDX,1);
}

