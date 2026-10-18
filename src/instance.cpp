/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: instance.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 63
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0499ce (Ghidra: FUN_000499ce)
 * Prototype: void sub_0499ce(void);
 * Address  : 0x499ce (Size: 132 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x47ea3, 0x49426
 * Callees  : 2 -> 0x5b645, 0x5ddee
 ******************************************************************************/
void FUN_000499ce(void)

{
  if (((DAT_0019d0b6 & 1) != 0) || (0x140 < DAT_003d982c)) {
    FUN_0005b645();
  }
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_049a52 (Ghidra: FUN_00049a52)
 * Prototype: ulonglong sub_049a52(void);
 * Address  : 0x49a52 (Size: 72 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x47bcd
 * Callees  : 2 -> 0x45f23, 0xcfefc
 ******************************************************************************/
ulonglong FUN_00049a52(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  int local_14;
  
  iVar2 = 10;
  while( true ) {
    if (0x18 < iVar2) {
      return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
    }
    iVar2 = FUN_00045f23();
    if (iVar2 != 0) break;
    iVar2 = extraout_ECX + 1;
    in_EAX = 0;
  }
  (&DAT_003db4fc)[local_14] = 0;
  uVar1 = FUN_000cfefc();
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar1 >> 8),1));
}

/******************************************************************************
 * Function : sub_049a9a (Ghidra: FUN_00049a9a)
 * Prototype: void sub_049a9a(void);
 * Address  : 0x49a9a (Size: 87 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x47bcd
 * Callees  : 3 -> 0x5a6a6, 0x5d15e, 0x5ddee
 ******************************************************************************/
void FUN_00049a9a(void)

{
  char cVar1;
  
  cVar1 = FUN_0005d15e();
  if (cVar1 != '\0') {
    FUN_0005ddee(0,0);
    FUN_0005a6a6();
  }
  return;
}

/******************************************************************************
 * Function : sub_049af1 (Ghidra: FUN_00049af1)
 * Prototype: void sub_049af1(void);
 * Address  : 0x49af1 (Size: 247 bytes)
 * Module   : instance.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45cc1
 * Callees  : 1 -> 0x51374
 ******************************************************************************/
void FUN_00049af1(void)

{
  if (DAT_003db526 != '\0') {
    if ((DAT_003482c1 == 0) && (DAT_003db5fc == '\x1f')) {
      DAT_003482c1 = 1;
      DAT_003db5fc = '\0';
    }
    if ((DAT_003482c1 == 1) && (DAT_003db5fc == '%')) {
      DAT_003482c1 = 2;
      DAT_003db5fc = '\0';
    }
    if ((DAT_003482c1 == 2) && (DAT_003db5fc == '\x12')) {
      DAT_003482c1 = 3;
      DAT_003db5fc = '\0';
    }
    if ((DAT_003482c1 == 3) && (DAT_003db5fc == '%')) {
      DAT_003482c1 = 4;
      DAT_003db5fc = '\0';
    }
    if ((DAT_003482c1 == 4) && (DAT_003db5fc == '\x1f')) {
      DAT_003482c1 = 5;
      DAT_003db5fc = '\0';
    }
    if ((DAT_003482c1 == 5) && (DAT_003db5fc == '\x17')) {
      DAT_003482c1 = 6;
      DAT_003db5fc = '\0';
    }
    if ((DAT_003482c1 == 6) && (DAT_003db5fc == '\x1f')) {
      DAT_003db5fc = '\0';
      DAT_003482c1 = 7;
      FUN_00051374();
    }
    if (DAT_003db5fc == '\0') {
      return;
    }
  }
  DAT_003482c1 = 0;
  return;
}

/******************************************************************************
 * Function : dk_negative_instance_049bfc (Ghidra: FUN_00049bfc)
 * Prototype: void dk_negative_instance_049bfc(undefined2 *param_1);
 * Address  : 0x49bfc (Size: 477 bytes)
 * Module   : instance.cpp [direct_file_string_xref]
 * OrigLine : instance.cpp:26 ("Negative instance")
 * Naming   : String 'Negative instance'
 * Callers  : 33 -> 0x10ed3, 0x110ed, 0x15a23, 0x169a5, 0x16b29, 0x16e9b, 0x286d5, 0x28eb4, 0x291bc, 0x29696 ...
 * Callees  : 2 -> 0xddad0, 0xddaf0
 * Strings  :
 *   - 0x16568e: "instance.cpp"
 *   - 0x16567c: "Negative instance"
 ******************************************************************************/
void FUN_00049bfc(undefined2 *param_1)

{
  int iVar1;
  short sVar2;
  byte *in_EAX;
  int iVar3;
  uint uVar4;
  undefined2 in_CX;
  int iVar5;
  uint in_EDX;
  int iVar6;
  undefined1 local_18;
  
  iVar5 = in_EDX * 0x2a;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (in_EDX != 0) {
    if (*(int *)(&DAT_0018edec + iVar5) == -1) {
      FUN_000ddaf0(); /* LbErrorLog("instance.cpp", line 26, "Negative instance") */
    }
    else {
      if (*(short *)(&DAT_0018ee06 + iVar5) != 0) {
        sVar2 = *(short *)(iVar1 + 0xaf);
        if (sVar2 <= *(short *)(&DAT_0018ee06 + iVar5)) {
          sVar2 = *(short *)(&DAT_0018ee06 + iVar5);
        }
        *(short *)(iVar1 + 0xaf) = sVar2;
      }
      if ((*in_EAX & 0x20) == 0) {
        iVar3 = *(int *)(&DAT_0018edec + iVar5);
        iVar5 = *(int *)(&DAT_0018edf4 + iVar5);
      }
      else {
        iVar3 = *(int *)(&DAT_0018edf0 + iVar5);
        iVar5 = *(int *)(&DAT_0018edf8 + iVar5);
      }
      if ((*(byte *)(iVar1 + 0xac) & 1) != 0) {
        iVar5 = iVar5 * 2;
        iVar3 = iVar3 * 2;
      }
      if ((*(byte *)(iVar1 + 0xac) & 2) == 0) {
        if (*(short *)(iVar1 + 0x21) == 0) {
          if (((uint)DAT_002eb543 != (int)(char)in_EAX[6]) &&
             (*(int *)(&DAT_002e0e11 + (char)in_EAX[6] * 0x1508) != 0)) {
            iVar5 = iVar5 - ((int)((iVar5 + (iVar5 >> 0x1f) * -4) - (uint)((iVar5 >> 0x1f) << 1 < 0)
                                  ) >> 2);
            iVar3 = iVar3 - ((int)((iVar3 + (iVar3 >> 0x1f) * -4) - (uint)((iVar3 >> 0x1f) << 1 < 0)
                                  ) >> 2);
          }
        }
        else {
          iVar6 = iVar5 * 3 >> 0x1f;
          iVar5 = (int)((iVar5 * 3 + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
          iVar6 = iVar3 * 3 >> 0x1f;
          iVar3 = (int)((iVar3 * 3 + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
        }
      }
      else {
        iVar5 = iVar5 / 2;
        iVar3 = iVar3 / 2;
      }
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      uVar4 = (uint)*(byte *)(iVar1 + 0xd2);
      if (((uVar4 == 0) || (uVar4 != in_EDX)) || ((&DAT_0018ee05)[uVar4 * 0x2a] == '\0')) {
        *(undefined2 *)(iVar1 + 0xd4) = 0;
        local_18 = (undefined1)in_EDX;
        *(short *)(iVar1 + 0xd8) = (short)iVar3;
        *(undefined1 *)(iVar1 + 0xd2) = local_18;
        *(undefined2 *)(iVar1 + 0xda) = in_CX;
        *(short *)(iVar1 + 0xd6) = (short)iVar5;
        iVar5 = FUN_000ddad0();
        *(short *)(iVar1 + 0x1ce) = (short)(iVar5 / iVar3);
        if (param_1 == (undefined2 *)0x0) {
          *(undefined1 *)(iVar1 + 0xdc) = 0;
          *(undefined1 *)(iVar1 + 0xdd) = 0;
        }
        else {
          *(char *)(iVar1 + 0xdc) = (char)((ushort)*param_1 >> 8);
          *(char *)(iVar1 + 0xdd) = (char)((ushort)param_1[1] >> 8);
        }
      }
      else {
        *(undefined1 *)(iVar1 + 0xd3) = 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_049dd9 (Ghidra: FUN_00049dd9)
 * Prototype: void sub_049dd9(void);
 * Address  : 0x49dd9 (Size: 28 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x1e119, 0x3ef50, 0x3f12c, 0x3f42b, 0x64a2e, 0x64ae7, 0x824dc, 0x847d4, 0x84904, 0x8608c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00049dd9(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined1 *)(iVar1 + 0xd2) = 0;
  *(undefined2 *)(iVar1 + 0xd4) = 0;
  return;
}

/******************************************************************************
 * Function : sub_049df5 (Ghidra: FUN_00049df5)
 * Prototype: void sub_049df5(void);
 * Address  : 0x49df5 (Size: 160 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00049df5(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar1 + 0xd2) != '\0') {
    *(short *)(iVar1 + 0xd4) = *(short *)(iVar1 + 0xd4) + 1;
    if ((*(short *)(iVar1 + 0xd4) == *(short *)(iVar1 + 0xd6)) &&
       (iVar2 = (uint)*(byte *)(iVar1 + 0xd2) * 0x2a, *(int *)(&DAT_0018ee09 + iVar2) != 0)) {
      (**(code **)(&DAT_0018ee09 + iVar2))();
    }
    if (*(short *)(iVar1 + 0xd4) == *(short *)(iVar1 + 0xd8)) {
      if (*(char *)(iVar1 + 0xd3) == '\0') {
        *(undefined4 *)(iVar1 + 0xde + (uint)*(byte *)(iVar1 + 0xd2) * 4) = DAT_002e8bee;
        *(undefined1 *)(iVar1 + 0xd2) = 0;
      }
      else {
        *(short *)(iVar1 + 0xd4) = *(short *)(iVar1 + 0xd4) + -1;
      }
    }
    *(undefined1 *)(iVar1 + 0xd3) = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_049e95 (Ghidra: FUN_00049e95)
 * Prototype: undefined1 sub_049e95(void);
 * Address  : 0x49e95 (Size: 20 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 16 -> 0x1840a, 0x18593, 0x18607, 0x18671, 0x186d2, 0x18736, 0x2796f, 0x294ca, 0x480aa, 0x4b478 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_00049e95(void)

{
  int in_EAX;
  int in_EDX;
  
  return *(undefined1 *)(in_EDX + 0x19e + (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)]);
}

/******************************************************************************
 * Function : sub_049ea9 (Ghidra: FUN_00049ea9)
 * Prototype: bool sub_049ea9(void);
 * Address  : 0x49ea9 (Size: 86 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x1840a, 0x18593, 0x18607, 0x18671, 0x186d2, 0x18736, 0x294ca, 0x55701, 0x5ec71, 0x5f049 ...
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00049ea9(void)

{
  byte *in_EAX;
  int in_EDX;
  int iVar1;
  bool bVar2;
  
  if ((*in_EAX & 0x20) == 0) {
    iVar1 = DAT_002e8bee - *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + in_EDX * 4 + 0xde);
    bVar2 = SBORROW4(iVar1,*(int *)(&DAT_0018edfc + in_EDX * 0x2a));
    iVar1 = iVar1 - *(int *)(&DAT_0018edfc + in_EDX * 0x2a);
  }
  else {
    iVar1 = DAT_002e8bee - *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + in_EDX * 4 + 0xde);
    bVar2 = SBORROW4(iVar1,*(int *)(&DAT_0018ee00 + in_EDX * 0x2a));
    iVar1 = iVar1 - *(int *)(&DAT_0018ee00 + in_EDX * 0x2a);
  }
  return bVar2 == iVar1 < 0;
}

/******************************************************************************
 * Function : sub_049eff (Ghidra: FUN_00049eff)
 * Prototype: void sub_049eff(void);
 * Address  : 0x49eff (Size: 79 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 23 -> 0x14280, 0x276d0, 0x36ff4, 0x4823a, 0x49426, 0x4af38, 0x4b2a7, 0x4b478, 0x4b59e, 0x4b5ca ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00049eff(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  int unaff_EBX;
  
  if (((*(byte *)(in_EAX + 0x4b0) == 0) ||
      (*(int *)(&DAT_0018f857 + (uint)*(byte *)(in_EAX + 0x4b0) * 0x2c) != 1)) || (unaff_EBX != 0))
  {
    *(char *)(in_EAX + 0x4b0) = (char)in_EDX;
    iVar1 = in_EDX * 0x2c;
    *(undefined4 *)(in_EAX + 0x4b1) = *(undefined4 *)(&DAT_0018f853 + iVar1);
    if (*(int *)(&DAT_0018f85b + iVar1) != 0) {
      (**(code **)(&DAT_0018f85b + iVar1))();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_049f4e (Ghidra: FUN_00049f4e)
 * Prototype: void sub_049f4e(void);
 * Address  : 0x49f4e (Size: 140 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xde6a8, 0xe4ffc
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00049f4e(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(char *)(in_EAX + 0x4b0) != '\0') {
    if (*(int *)(in_EAX + 0x4b1) != 0) {
      iVar1 = (uint)*(byte *)(in_EAX + 0x4b0) * 0x2c;
      *(int *)(in_EAX + 0x4b1) = *(int *)(in_EAX + 0x4b1) + -1;
      if (*(int *)(&DAT_0018f85f + iVar1) != 0) {
        (**(code **)(&DAT_0018f85f + iVar1))();
      }
    }
    if (*(int *)(in_EAX + 0x4b1) == 0) {
      iVar1 = (uint)*(byte *)(in_EAX + 0x4b0) * 0x2c;
      *(undefined1 *)(in_EAX + 0x4b0) = 0;
      if (*(int *)(&DAT_0018f863 + iVar1) != 0) {
        (**(code **)(&DAT_0018f863 + iVar1))();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_049fda (Ghidra: FUN_00049fda)
 * Prototype: undefined4 sub_049fda(void);
 * Address  : 0x49fda (Size: 159 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4ab11
 * Callees  : 1 -> 0x6b820
 ******************************************************************************/
undefined4 FUN_00049fda(void)

{
  int iVar1;
  byte *in_EAX;
  undefined4 uVar2;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar1 + 0xda) == 0) {
    if ((*in_EAX & 0x20) == 0) {
LAB_0004a03e:
      uVar2 = 4;
      goto LAB_0004a040;
    }
  }
  else if ((*in_EAX & 0x20) == 0) {
    if (*(char *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xda)] + 0x1f) != '\x01') {
      if (*(byte *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xda)] + 6) != in_EAX[6]) goto LAB_0004a03e;
      goto LAB_0004a014;
    }
  }
  else if (*(char *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0xda)] + 0x1f) != '\x01') {
LAB_0004a014:
    uVar2 = 2;
    goto LAB_0004a040;
  }
  uVar2 = 1;
LAB_0004a040:
  FUN_0006b820(uVar2);
  return 0;
}

/******************************************************************************
 * Function : sub_04a079 (Ghidra: FUN_0004a079)
 * Prototype: undefined4 sub_04a079(void);
 * Address  : 0x4a079 (Size: 93 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x72109, 0x7220a
 ******************************************************************************/
undefined4 FUN_0004a079(void)

{
  int in_EAX;
  int *in_EDX;
  
  if (((&DAT_0018f5cb)[*in_EDX * 0x11] == '\0') ||
     (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xda) == 0)) {
    FUN_00072109(*(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xdd));
  }
  else {
    FUN_0007220a();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04a0d6 (Ghidra: FUN_0004a0d6)
 * Prototype: undefined4 sub_04a0d6(void);
 * Address  : 0x4a0d6 (Size: 822 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x14afe, 0x14d45, 0x246f2, 0x24998, 0x274ad, 0x400da, 0x51374, 0x6e538, 0x82cac
 ******************************************************************************/
undefined4 FUN_0004a0d6(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  
  local_2c = (uint)*(char *)(in_EAX + 6);
  local_20 = (uint)(byte)(&DAT_002e1094)
                         [(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x91) * 3 +
                          local_2c * 0x1508];
  local_40 = (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8f);
  uVar2 = (uint)*(ushort *)
                 (&DAT_002e1094 +
                  (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x91) * 3 +
                  local_2c * 0x1508 + 1);
  if (local_40 != uVar2) {
    return 0;
  }
  uVar2 = (int)uVar2 >> 8;
  local_40 = local_40 % 0x100;
  iVar3 = ((&DAT_0019033b)[local_40] + (&DAT_0019033b)[uVar2] * 0x55) * 6;
  local_38 = (uVar2 / 3) * 0x55;
  local_18 = 3;
  local_28 = (uint)(byte)(&DAT_002d33c5)[(local_40 / 3 + local_38) * 6];
  local_1c = DAT_002ebc40;
  if (((&DAT_002d33ca)[iVar3] & 7) != local_2c) {
    local_1c = DAT_002ebc3c;
  }
  local_3c = iVar3;
  local_34 = local_40;
  if (local_1c < (int)(uint)(byte)(&DAT_002d33c9)[iVar3]) {
    if (local_28 != 0x34) {
      (&DAT_002d33c9)[iVar3] = (&DAT_002d33c9)[iVar3] - (char)local_1c;
    }
    uStack_44 = 0x100;
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    FUN_0006e538(3,0,2);
    FUN_00024998();
    if (local_20 != 2) {
      return 0;
    }
    iVar3 = (DAT_002eb9e8 * local_1c) / (int)DAT_002eb9b6;
    if ((local_28 == 0x34) && (iVar3 = iVar3 / 6, iVar3 < 1)) {
      iVar3 = 1;
    }
    *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) + iVar3;
    *(int *)(&DAT_002e17ac + *(char *)(in_EAX + 6) * 0x1508) =
         *(int *)(&DAT_002e17ac + *(char *)(in_EAX + 6) * 0x1508) + iVar3;
    return 0;
  }
  uStack_44 = 0x4a1db;
  FUN_000400da();
  local_24 = local_34 * 0x100 + 0x80;
  local_30 = uVar2 * 0x100 + 0x80;
  if (local_20 == 2) {
    iVar3 = (int)((uint)(byte)(&DAT_002d33c9)[iVar3] * (int)DAT_002eb9e8) / (int)DAT_002eb9b6;
    *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) + iVar3;
    *(int *)(&DAT_002e17ac + *(char *)(in_EAX + 6) * 0x1508) =
         *(int *)(&DAT_002e17ac + *(char *)(in_EAX + 6) * 0x1508) + iVar3;
    uStack_44 = 0x4a23c;
    FUN_00014d45();
    uStack_44 = 0x4a24a;
    cVar1 = FUN_000246f2();
    puVar4 = &local_40;
    if (cVar1 == '\0') goto LAB_0004a2ef;
    uStack_44 = 0;
    FUN_000274ad();
    puVar4 = &uStack_44;
    if ((int)*(char *)(in_EAX + 6) != (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
    goto LAB_0004a2ef;
  }
  else {
    puVar4 = &local_40;
    if (local_20 != 1) goto LAB_0004a2ef;
    uStack_44 = 0x4a29a;
    FUN_00014afe();
    uStack_44 = 0x4a2a8;
    cVar1 = FUN_000246f2();
    puVar4 = &local_40;
    if (cVar1 == '\0') goto LAB_0004a2ef;
    puVar4 = &uStack_44;
    uStack_44 = 0;
    FUN_000274ad();
    if ((int)*(char *)(in_EAX + 6) != (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
    goto LAB_0004a2ef;
  }
  FUN_00051374();
  puVar4 = &uStack_44;
LAB_0004a2ef:
  *(undefined4 *)((int)puVar4 + -4) = 0x4a2fb;
  FUN_00082cac();
  *(undefined4 *)((int)puVar4 + -4) = 0x100;
  *(undefined4 *)((int)puVar4 + -8) = 4;
  *(undefined4 *)((int)puVar4 + -0xc) = 0;
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  *(undefined4 *)((int)puVar4 + -0x10) = 3;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  *(undefined4 *)((int)puVar4 + -0x14) = 0x4a349;
  FUN_0006e538();
  return 1;
}

/******************************************************************************
 * Function : sub_04a40c (Ghidra: FUN_0004a40c)
 * Prototype: undefined4 sub_04a40c(void);
 * Address  : 0x4a40c (Size: 253 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4ab11
 * Callees  : 8 -> 0x15030, 0x2371b, 0x24998, 0x6e538, 0x76753, 0x767f1, 0xd7688, 0xda6fc
 ******************************************************************************/
undefined4 FUN_0004a40c(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(in_EAX + 6);
  FUN_00024998((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)],(&DAT_0019033b)[*(byte *)(in_EAX + 0x10)]);
  FUN_0006e538(3,0,2,0x100);
  FUN_000d7688(1);
  FUN_00015030();
  FUN_000da6fc();
  FUN_0002371b();
  iVar3 = 0;
  *(int *)(&DAT_002e1810 + cVar1 * 0x1508) = *(int *)(&DAT_002e1810 + cVar1 * 0x1508) + 1;
  do {
    iVar2 = FUN_00076753();
    if (iVar2 != 0) {
      FUN_000767f1();
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 != 0x12);
  return 1;
}

/******************************************************************************
 * Function : sub_04a562 (Ghidra: FUN_0004a562)
 * Prototype: undefined4 sub_04a562(void);
 * Address  : 0x4a562 (Size: 17 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4a573
 * Callees  : 1 -> 0x6e538
 ******************************************************************************/
undefined4 FUN_0004a562(void)

{
  FUN_0006e538();
  return 1;
}

/******************************************************************************
 * Function : sub_04a573 (Ghidra: FUN_0004a573)
 * Prototype: void sub_04a573(void);
 * Address  : 0x4a573 (Size: 102 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x24998, 0x4a562
 ******************************************************************************/
void FUN_0004a573(void)

{
  int iVar1;
  
  iVar1 = FUN_00024998();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x16) = 4;
  }
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  FUN_0004a562(0,4,0x100);
  return;
}

/******************************************************************************
 * Function : sub_04a5d9 (Ghidra: FUN_0004a5d9)
 * Prototype: undefined4 sub_04a5d9(void);
 * Address  : 0x4a5d9 (Size: 201 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x14afe, 0x6e538
 ******************************************************************************/
undefined4 FUN_0004a5d9(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = ((&DAT_0019033b)
           [(int)(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1ff) >> 8] * 0x55
          + (&DAT_0019033b)
            [(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1ff) % 0x100]) * 6;
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  FUN_0006e538(3,0,2,0x100);
  if ((byte)(&DAT_002d33c9)[iVar1] < 2) {
    FUN_00014afe();
  }
  else {
    (&DAT_002d33c9)[iVar1] = (&DAT_002d33c9)[iVar1] + -1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_04a6a2 (Ghidra: FUN_0004a6a2)
 * Prototype: undefined4 sub_04a6a2(void);
 * Address  : 0x4a6a2 (Size: 575 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x14c9a, 0x23754, 0x24998, 0x274ad, 0x6e538, 0x76753, 0x767f1, 0xd0118, 0xd0488
 ******************************************************************************/
undefined4 FUN_0004a6a2(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined1 local_2c;
  char local_2b;
  undefined1 local_2a;
  char local_29;
  undefined1 local_28;
  undefined1 local_27;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  
  puVar5 = (undefined4 *)&local_2c;
  bVar1 = *(byte *)(in_EAX + 0xe);
  local_18 = (uint)*(byte *)(in_EAX + 0x10);
  iVar4 = ((&DAT_0019033b)[local_18] * 0x55 + (&DAT_0019033b)[bVar1]) * 6;
  iVar2 = (uint)(byte)(&DAT_002d33c8)[iVar4] * 0x45;
  local_1c = 1;
  if ((iVar2 == 0) ||
     (local_24 = (uint)((&DAT_002d33ca)[iVar4] & 7), (int)*(char *)(in_EAX + 6) == local_24)) {
    if ((byte)(&DAT_002d33c9)[iVar4] < 2) {
      if (((&DAT_002d33ca)[((&DAT_0019033b)[bVar1] + (&DAT_0019033b)[local_18] * 0x55) * 6] & 7) !=
          DAT_002eb543) {
        *(int *)(&DAT_002e17f8 +
                (uint)((&DAT_002d33ca)
                       [((&DAT_0019033b)[bVar1] + (&DAT_0019033b)[local_18] * 0x55) * 6] & 7) *
                0x1508) =
             *(int *)(&DAT_002e17f8 +
                     (uint)((&DAT_002d33ca)
                            [((&DAT_0019033b)[bVar1] + (&DAT_0019033b)[local_18] * 0x55) * 6] & 7) *
                     0x1508) + 1;
      }
      local_24 = local_18 << 2;
      uStack_30 = 0x4a863;
      FUN_00023754();
      uStack_30 = 0x4a871;
      FUN_00014c9a();
      iVar2 = 0;
      do {
        local_24 = (&DAT_0019033b)[bVar1] * 3;
        local_20 = (int)*(char *)((int)&DAT_0018b647 + iVar2 + 3);
        uStack_30 = 0x4a8b0;
        iVar4 = FUN_00076753();
        if (iVar4 != 0) {
          uStack_30 = 0x4a8b9;
          FUN_000767f1();
        }
        iVar2 = iVar2 + 2;
      } while (iVar2 != 0x12);
      *(int *)(&DAT_002e17f4 + *(char *)(in_EAX + 6) * 0x1508) =
           *(int *)(&DAT_002e17f4 + *(char *)(in_EAX + 6) * 0x1508) + 1;
      return 1;
    }
    (&DAT_002d33c9)[iVar4] = (&DAT_002d33c9)[iVar4] + -1;
  }
  else if (*(ushort *)(&DAT_002ddd27 + iVar2) < 2) {
    if ((int)(char)(&DAT_002ddd1e)[iVar2] == (uint)DAT_002eb543) {
      uStack_30 = 0x4a73a;
      FUN_000d0118();
    }
    else {
      puVar5 = &uStack_30;
      uStack_30 = 0;
      FUN_000274ad();
      FUN_000d0488();
    }
    *(undefined4 *)((int)puVar5 + -4) = 0x100;
    *(undefined4 *)((int)puVar5 + -8) = 2;
    *(undefined4 *)((int)puVar5 + -0xc) = 0;
    *(undefined4 *)((int)puVar5 + -0x10) = 3;
    *(undefined4 *)((int)puVar5 + -0x14) = 0x4a78c;
    FUN_0006e538();
    sVar3 = *(short *)(&DAT_002ddd52 + iVar2);
    while (iVar2 = (int)sVar3, iVar2 != 0) {
      local_2b = (char)(iVar2 % 0x55) * '\x03' + '\x01';
      local_2c = 0x80;
      local_2a = 0x80;
      local_27 = 1;
      local_29 = (char)(iVar2 / 0x55) * '\x03' + '\x01';
      local_28 = 0x80;
      *(undefined4 *)((int)puVar5 + -0x14) = 0x4a7da;
      FUN_00024998();
      sVar3 = *(short *)(&DAT_002d33c6 + iVar2 * 6);
    }
  }
  else {
    *(short *)(&DAT_002ddd27 + iVar2) = *(short *)(&DAT_002ddd27 + iVar2) + -1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04a8e1 (Ghidra: FUN_0004a8e1)
 * Prototype: undefined4 sub_04a8e1(void);
 * Address  : 0x4a8e1 (Size: 47 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x81cec
 ******************************************************************************/
undefined4 FUN_0004a8e1(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar1 + 0x41) != '\0') {
    *(char *)(iVar1 + 0x41) = *(char *)(iVar1 + 0x41) + -1;
  }
  FUN_00081cec();
  *(undefined4 *)(iVar1 + 0x39) = 0;
  return 1;
}

/******************************************************************************
 * Function : sub_04a910 (Ghidra: FUN_0004a910)
 * Prototype: undefined4 sub_04a910(void);
 * Address  : 0x4a910 (Size: 6 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004a910(void)

{
  return 1;
}

/******************************************************************************
 * Function : dk_thing_room_04a916 (Ghidra: FUN_0004a916)
 * Prototype: undefined4 dk_thing_room_04a916(void);
 * Address  : 0x4a916 (Size: 272 bytes)
 * Module   : instance.cpp [direct_file_string_xref]
 * OrigLine : instance.cpp:674 ("THING NOT ON ROOM")
 * Naming   : String 'THING NOT ON ROOM'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x24998, 0xc8654, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x1656ad: "instance.cpp"
 *   - 0x16569b: "THING NOT ON ROOM"
 ******************************************************************************/
undefined4 FUN_0004a916(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = ((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
          (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)]) * 6;
  if ((byte)(&DAT_002d33c9)[iVar1] < 3) {
    iVar1 = FUN_000d0f50();
    if (iVar1 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("instance.cpp", line 674, "THING NOT ON ROOM") */
    }
    else if ((int)*(char *)(iVar1 + 3) != (uint)DAT_002eb543) {
      *(short *)(&DAT_002e105e + *(char *)(iVar1 + 3) * 0x1508) =
           *(short *)(&DAT_002e105e + *(char *)(iVar1 + 3) * 0x1508) + 1;
    }
    FUN_000c8654();
    FUN_00024998();
  }
  else {
    (&DAT_002d33c9)[iVar1] = (&DAT_002d33c9)[iVar1] + -2;
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  }
  FUN_0006e538(3,0,2,0x100);
  return 1;
}

/******************************************************************************
 * Function : sub_04aa26 (Ghidra: FUN_0004aa26)
 * Prototype: undefined4 sub_04aa26(void);
 * Address  : 0x4aa26 (Size: 235 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xd7688, 0xda6fc
 ******************************************************************************/
undefined4 FUN_0004aa26(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  puVar2 = &local_20;
  iVar1 = (int)(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x284) >> 8;
  local_1c = iVar1 * 4;
  local_18 = (&DAT_0019033b)[iVar1] * 0x55;
  iVar1 = ((&DAT_0019033b)
           [(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x284) % 0x100] +
          local_18) * 6;
  local_20 = 2;
  if ((byte)(&DAT_002d33c9)[iVar1] < 3) {
    puVar2 = &uStack_24;
    uStack_24 = 0;
    FUN_000d7688();
    FUN_000da6fc();
  }
  else {
    (&DAT_002d33c9)[iVar1] = (&DAT_002d33c9)[iVar1] + -2;
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x100;
  *(undefined4 *)((int)puVar2 + -8) = 2;
  *(undefined4 *)((int)puVar2 + -0xc) = 0;
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  *(undefined4 *)((int)puVar2 + -0x10) = 3;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  *(undefined4 *)((int)puVar2 + -0x14) = 0x4a349;
  FUN_0006e538();
  return 1;
}

/******************************************************************************
 * Function : sub_04ab11 (Ghidra: FUN_0004ab11)
 * Prototype: undefined4 sub_04ab11(void);
 * Address  : 0x4ab11 (Size: 78 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x3aef2, 0x49fda, 0x4a40c
 ******************************************************************************/
undefined4 FUN_0004ab11(void)

{
  int iVar1;
  
  iVar1 = FUN_0003aef2();
  if (iVar1 == 0) {
    FUN_00049fda(0x17);
  }
  else {
    FUN_0004a40c();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_04ab5f (Ghidra: FUN_0004ab5f)
 * Prototype: undefined4 sub_04ab5f(void);
 * Address  : 0x4ab5f (Size: 93 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x61ca3
 ******************************************************************************/
undefined4 FUN_0004ab5f(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)];
  iVar2 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  if ((&DAT_002e05ec)[iVar2] != '\0') {
    *(undefined2 *)(&DAT_002e05cc + iVar2) = 0x3c;
    *(undefined2 *)(&DAT_002e05dc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x28;
  }
  if (DAT_001ae9fc < uVar1) {
    FUN_00061ca3();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04abbc (Ghidra: FUN_0004abbc)
 * Prototype: undefined4 sub_04abbc(void);
 * Address  : 0x4abbc (Size: 180 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004abbc(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar1 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43e)];
  if (*(char *)(iVar1 + 0x1f) == '\x05') {
    iVar2 = *(short *)(&DAT_0018fe87 + (uint)*(byte *)(iVar1 + 0x1a) * 8) + -0x3c >> 0x1f;
    iVar3 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
    *(short *)(&DAT_002e05cc + iVar3) =
         *(short *)(&DAT_002e05cc + iVar3) +
         (short)((int)((*(short *)(&DAT_0018fe87 + (uint)*(byte *)(iVar1 + 0x1a) * 8) + -0x3c +
                       iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    iVar2 = *(short *)(&DAT_0018fe89 + (uint)*(byte *)(iVar1 + 0x1a) * 8) + -0x28 >> 0x1f;
    iVar3 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
    *(short *)(&DAT_002e05dc + iVar3) =
         *(short *)(&DAT_002e05dc + iVar3) +
         (short)((int)((*(short *)(&DAT_0018fe89 + (uint)*(byte *)(iVar1 + 0x1a) * 8) + -0x28 +
                       iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  }
  else {
    *(undefined2 *)(&DAT_002e05cc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x3c;
    *(undefined2 *)(&DAT_002e05dc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x28;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04ac70 (Ghidra: FUN_0004ac70)
 * Prototype: undefined4 sub_04ac70(void);
 * Address  : 0x4ac70 (Size: 400 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x4fbd8, 0x61ca3, 0x64a5f, 0x81eac, 0x8485c, 0x8ccec, 0xc57c4, 0xc599c, 0xdd2f0
 ******************************************************************************/
undefined4 FUN_0004ac70(void)

{
  byte *pbVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint *puVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  local_18 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)];
  pbVar1 = (byte *)(&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43e)];
  if (((*pbVar1 & 1) != 0) && (*(int *)(in_EAX + 0x440) == *(int *)(pbVar1 + 9))) {
    if (pbVar1[0x1f] == 5) {
LAB_0004acde:
      uStack_1c = 0x4ace7;
      FUN_0004fbd8();
      if (pbVar1[0x1f] == 5) {
        uStack_1c = 0x4ad00;
        cVar2 = FUN_00064a5f();
        if (cVar2 == '\0') {
          return 0;
        }
        if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar1 + 100)] + 0xad) & 2) == 0) {
          uStack_1c = 2;
          uStack_20 = 0;
          uStack_24 = 0xffffffff;
          FUN_000dd2f0();
        }
        else {
          uStack_1c = 2;
          uStack_20 = 0;
          uStack_24 = 0xffffffff;
        }
        FUN_0008ccec();
        puVar4 = &uStack_24;
      }
      else {
        puVar4 = &local_18;
        if (pbVar1[0x1f] == 1) {
          uStack_1c = 0x4ad9e;
          iVar3 = FUN_000c599c();
          puVar4 = &local_18;
          if (iVar3 == 0) {
            *(undefined2 *)(in_EAX + 0x43e) = 0;
            *(undefined4 *)(in_EAX + 0x440) = 0;
            return 0;
          }
        }
      }
      if (DAT_001ae9fc < local_18) {
        *(undefined4 *)((int)puVar4 + -4) = 0x4add6;
        FUN_00061ca3();
      }
      *(undefined4 *)((int)puVar4 + -4) = 0x4ade1;
      FUN_0008485c();
      *(undefined2 *)(in_EAX + 0x43e) = 0;
      *(undefined4 *)(in_EAX + 0x440) = 0;
      *(undefined4 *)((int)puVar4 + -4) = 0x4adfb;
      FUN_00081eac();
      return 0;
    }
    if (pbVar1[0x1f] == 1) {
      uStack_1c = 0x4acc2;
      iVar3 = FUN_000c57c4();
      if (iVar3 != 0) goto LAB_0004acde;
    }
  }
  *(undefined2 *)(in_EAX + 0x43e) = 0;
  *(undefined4 *)(in_EAX + 0x440) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_04ae00 (Ghidra: FUN_0004ae00)
 * Prototype: undefined4 sub_04ae00(void);
 * Address  : 0x4ae00 (Size: 70 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x61ca3
 ******************************************************************************/
undefined4 FUN_0004ae00(void)

{
  uint uVar1;
  int in_EAX;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)];
  *(undefined2 *)(in_EAX + 0x43e) =
       *(undefined2 *)(&DAT_002e05bc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508);
  if (DAT_001ae9fc < uVar1) {
    FUN_00061ca3();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04ae46 (Ghidra: FUN_0004ae46)
 * Prototype: undefined4 sub_04ae46(void);
 * Address  : 0x4ae46 (Size: 99 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004ae46(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  *(short *)(&DAT_002e05cc + iVar1) =
       (short)((0x3c - *(short *)(&DAT_002e05cc + iVar1)) / (*(int *)(in_EAX + 0x4b1) + 1)) +
       *(short *)(&DAT_002e05cc + iVar1);
  iVar1 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  *(short *)(&DAT_002e05dc + iVar1) =
       (short)((0x28 - *(short *)(&DAT_002e05dc + iVar1)) / (*(int *)(in_EAX + 0x4b1) + 1)) +
       *(short *)(&DAT_002e05dc + iVar1);
  return 0;
}

/******************************************************************************
 * Function : sub_04aea9 (Ghidra: FUN_0004aea9)
 * Prototype: undefined4 sub_04aea9(void);
 * Address  : 0x4aea9 (Size: 97 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x61ca3
 ******************************************************************************/
undefined4 FUN_0004aea9(void)

{
  uint uVar1;
  int in_EAX;
  int extraout_ECX;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)];
  *(undefined2 *)(&DAT_002e05cc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x3c;
  *(undefined2 *)(&DAT_002e05dc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x28;
  if (DAT_001ae9fc < uVar1) {
    FUN_00061ca3();
    in_EAX = extraout_ECX;
  }
  *(undefined2 *)(in_EAX + 0x43e) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_04af0a (Ghidra: FUN_0004af0a)
 * Prototype: undefined4 sub_04af0a(void);
 * Address  : 0x4af0a (Size: 46 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x61ca3
 ******************************************************************************/
undefined4 FUN_0004af0a(void)

{
  int in_EAX;
  
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)]) {
    FUN_00061ca3();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04af38 (Ghidra: FUN_0004af38)
 * Prototype: undefined4 sub_04af38(void);
 * Address  : 0x4af38 (Size: 654 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x24998, 0x49eff, 0x4fe44, 0x6e538, 0x76569, 0x824dc, 0x8608c, 0xc595c, 0xc5980
 ******************************************************************************/
undefined4 FUN_0004af38(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 local_20;
  short local_1c [2];
  byte *local_18;
  
  bVar8 = 0;
  local_18 = (byte *)(&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43e)];
  local_24 = in_EAX;
  if (((*local_18 & 1) != 0) && (*(int *)(in_EAX + 0x440) == *(int *)(local_18 + 9))) {
    uStack_28 = 0x4af77;
    iVar5 = FUN_0004fe44();
    pbVar2 = local_18;
    if (iVar5 != 0) {
      bVar1 = local_18[0x1f];
      if (bVar1 == 5) {
        if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(local_18 + 100)] + 0xab) & 2) == 0) {
          uStack_28 = 0x4afea;
          FUN_000824dc();
          pbVar3 = local_18;
          local_20 = *(undefined4 *)(pbVar2 + 0xd);
          local_1c[(uint)bVar8 * -4] = *(short *)(pbVar2 + (uint)bVar8 * -8 + 0x11);
          local_1c[0] = local_1c[0] + *(ushort *)(pbVar3 + 0x58) / 2;
          if (DAT_002ee9b9 == 3) {
            uVar6 = (uint)local_18[0x1a];
            if (((&DAT_002e91e7)[uVar6 * 0xe6] == '\0') || ((uVar6 != 0 && (uVar6 < 0xe)))) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x01';
            }
          }
          else {
            cVar4 = (&DAT_002e91e7)[(uint)local_18[0x1a] * 0xe6];
          }
          if (cVar4 != '\0') {
            uStack_28 = 0x4b068;
            FUN_00024998();
          }
          uStack_28 = 0x100;
          uStack_2c = 3;
          uStack_30 = 0;
          uStack_34 = 3;
          FUN_0006e538();
          piVar7 = &uStack_34;
          if (*(int *)(local_24 + 0x38) != 0) {
            *(short *)(local_18 + 0x2c) =
                 *(short *)(local_18 + 0x2c) +
                 (short)((uint)((&DAT_001927e0)[*(int *)(*(int *)(local_24 + 0x38) + 7)] << 6) >>
                        0x10);
            *(short *)(local_18 + 0x2e) =
                 *(short *)(local_18 + 0x2e) +
                 (short)((uint)-(((int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(local_24 + 0x38) + 7)]
                                 << 6) >> 8) >> 8);
            piVar7 = &uStack_34;
          }
        }
        else {
          uStack_28 = 0;
          uStack_2c = 0;
          uStack_30 = 0x4afd4;
          FUN_0008608c();
          piVar7 = &uStack_2c;
        }
      }
      else if (bVar1 == 2) {
        if (local_18[0x1a] == 0xf) {
          *(undefined2 *)(local_18 + 0x52) = *(undefined2 *)(*(int *)(local_24 + 0x38) + 7);
          *(short *)(local_18 + 0x5e) = *(short *)(local_18 + 0x5e) - DAT_002ee7b0;
          piVar7 = &local_24;
        }
        else {
          piVar7 = &local_24;
          if (local_18[0x1a] == 0x14) {
            *(undefined2 *)(local_18 + 0x52) = *(undefined2 *)(*(int *)(local_24 + 0x38) + 7);
            piVar7 = &local_24;
          }
        }
      }
      else if (bVar1 == 8) {
        piVar7 = &local_24;
        if (local_18[0x1a] == 1) {
          uStack_28 = 0x4b159;
          FUN_00076569();
          piVar7 = &local_24;
        }
      }
      else {
        piVar7 = &local_24;
        if (bVar1 == 1) {
          uStack_28 = 0x4b16f;
          iVar5 = FUN_000c595c();
          piVar7 = &local_24;
          if (iVar5 != 0) {
            uStack_28 = 0x4b18a;
            iVar5 = FUN_00024998();
            piVar7 = &local_24;
            if (iVar5 != 0) {
              uStack_28 = 0x100;
              uStack_2c = 3;
              uStack_30 = 0;
              piVar7 = &uStack_34;
              uStack_34 = 3;
              FUN_0006e538();
            }
            *(undefined4 *)((int)piVar7 + -4) = 0x4b1b2;
            FUN_000c5980();
          }
        }
      }
      *(undefined4 *)((int)piVar7 + -4) = 0x4b1c1;
      FUN_00049eff();
      return 0;
    }
  }
  *(undefined2 *)(local_24 + 0x43e) = 0;
  *(undefined4 *)(local_24 + 0x440) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_04b1c6 (Ghidra: FUN_0004b1c6)
 * Prototype: undefined4 sub_04b1c6(void);
 * Address  : 0x4b1c6 (Size: 46 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x61ca3
 ******************************************************************************/
undefined4 FUN_0004b1c6(void)

{
  int in_EAX;
  
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)]) {
    FUN_00061ca3();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04b1f4 (Ghidra: FUN_0004b1f4)
 * Prototype: undefined4 sub_04b1f4(void);
 * Address  : 0x4b1f4 (Size: 46 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x61ca3
 ******************************************************************************/
undefined4 FUN_0004b1f4(void)

{
  int in_EAX;
  
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43a)]) {
    FUN_00061ca3();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04b222 (Ghidra: FUN_0004b222)
 * Prototype: undefined4 sub_04b222(void);
 * Address  : 0x4b222 (Size: 133 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x5afda, 0x5c848, 0x6e9ab, 0x780a3
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004b222(void)

{
  byte *in_EAX;
  undefined4 uVar1;
  
  *in_EAX = *in_EAX | 0x80;
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    *(undefined4 *)(&DAT_0019d58d + DAT_002f10ce._3_1_ * 0x4ef) = 1;
    FUN_0005afda();
    FUN_0005c848();
    FUN_0005c848();
    _DAT_002ed43a = 0;
    DAT_0019d0ba = DAT_0019d0ba | 4;
  }
  *in_EAX = *in_EAX | 0x10;
  uVar1 = FUN_000780a3();
  *(undefined4 *)(in_EAX + 0x4b6) = uVar1;
  if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == in_EAX) {
    FUN_0006e9ab();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04b2a7 (Ghidra: FUN_0004b2a7)
 * Prototype: undefined4 sub_04b2a7(void);
 * Address  : 0x4b2a7 (Size: 465 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x49eff, 0x627b5, 0x77f16, 0x780c2
 ******************************************************************************/
undefined4 FUN_0004b2a7(void)

{
  int *piVar1;
  short *psVar2;
  ushort *puVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar6;
  int extraout_ECX_01;
  int iVar7;
  int iVar8;
  
  if (((*(ushort *)(in_EAX + 0x43e) == 0) ||
      (*(char *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43e)] + 0x1f) == '\x04')) ||
     (*(short *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43e)] + 0x5e) < 0)) {
    FUN_000780c2();
    pbVar6 = extraout_ECX;
    if (extraout_ECX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
      FUN_000627b5();
      pbVar6 = extraout_ECX_00;
    }
    pbVar6[0x43e] = 0;
    pbVar6[0x43f] = 0;
    *pbVar6 = *pbVar6 & 0x6f;
    FUN_00049eff();
  }
  else if (*(char *)(in_EAX + 0x37) != '\x05') {
    FUN_00077f16();
    uVar4 = ((uint)*(ushort *)((&DAT_001ae9fc)[*(ushort *)(extraout_ECX_01 + 0x43e)] + 0x52) -
            *(int *)(*(int *)(extraout_ECX_01 + 0x38) + 7)) + 0x800 & 0x7ff;
    if (0x400 < uVar4) {
      uVar4 = uVar4 - 0x800;
    }
    if ((int)uVar4 < -0xaa) {
      uVar4 = 0xffffff56;
    }
    else if (0xaa < (int)uVar4) {
      uVar4 = 0xaa;
    }
    piVar1 = (int *)(*(int *)(extraout_ECX_01 + 0x38) + 7);
    *piVar1 = *piVar1 + uVar4;
    *(uint *)(*(int *)(extraout_ECX_01 + 0x38) + 7) =
         *(uint *)(*(int *)(extraout_ECX_01 + 0x38) + 7) & 0x7ff;
    iVar5 = (&DAT_001ae9fc)[*(ushort *)(extraout_ECX_01 + 0x43e)];
    iVar7 = (int)*(short *)(iVar5 + 0x11) +
            (uint)*(ushort *)(&DAT_002e9162 + (uint)*(byte *)(iVar5 + 0x1a) * 0xe6);
    puVar3 = *(ushort **)(extraout_ECX_01 + 0x38);
    iVar8 = ((uint)*(ushort *)(iVar5 + 0xd) +
            (iVar7 * (&DAT_001927e0)[*(int *)((int)puVar3 + 7)] >> 0x10)) - (uint)*puVar3;
    iVar5 = ((uint)*(ushort *)(iVar5 + 0xf) -
            (iVar7 * (int)(&PTR_LAB_00192fe0)[*(int *)((int)puVar3 + 7)] >> 0x10)) - (uint)puVar3[1]
    ;
    if (iVar8 < -0x80) {
      iVar8 = -0x80;
    }
    else if (0x80 < iVar8) {
      iVar8 = 0x80;
    }
    if (iVar5 < -0x80) {
      iVar5 = -0x80;
    }
    else if (0x80 < iVar5) {
      iVar5 = 0x80;
    }
    **(short **)(extraout_ECX_01 + 0x38) = **(short **)(extraout_ECX_01 + 0x38) + (short)iVar8;
    psVar2 = (short *)(*(int *)(extraout_ECX_01 + 0x38) + 2);
    *psVar2 = *psVar2 + (short)iVar5;
    iVar5 = *(int *)(extraout_ECX_01 + 0x38);
    if (*(int *)(iVar5 + 7) < 0) {
      *(int *)(iVar5 + 7) = *(int *)(iVar5 + 7) + 0x800;
    }
    else if (0x7ff < *(int *)(iVar5 + 7)) {
      *(int *)(iVar5 + 7) = *(int *)(iVar5 + 7) + -0x800;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04b478 (Ghidra: FUN_0004b478)
 * Prototype: undefined4 sub_04b478(void);
 * Address  : 0x4b478 (Size: 294 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x49e95, 0x49eff, 0x4c0ac, 0x5cf2d, 0x627b5, 0x780c2, 0x80a94
 ******************************************************************************/
undefined4 FUN_0004b478(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar5;
  undefined1 *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *pbVar6;
  
  iVar2 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x43e)];
  if ((*(short *)(in_EAX + 0x43e) == 0) || (iVar3 = FUN_00080a94(), iVar3 == 0)) {
    FUN_000780c2();
    pbVar6 = extraout_ECX_03;
    if (extraout_ECX_03 == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
      FUN_000627b5();
      pbVar6 = extraout_ECX_04;
    }
    *pbVar6 = *pbVar6 & 0x6f;
    return 0;
  }
  FUN_00049eff();
  puVar5 = extraout_ECX;
  if (*(char *)(iVar2 + 0x1f) == '\x05') {
    FUN_0004c0ac();
    puVar5 = extraout_ECX_00;
    if ((extraout_ECX_00 == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) &&
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0xab) & 2) != 0)) {
      FUN_000627b5();
      puVar5 = extraout_ECX_01;
    }
    for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
      uVar1 = (&DAT_002e918d)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6 + iVar3];
      iVar4 = FUN_00049e95();
      puVar5 = extraout_ECX_02;
      if (iVar4 != 0) {
        *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x1e8) = uVar1;
        break;
      }
    }
  }
  if (puVar5 != &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    return 0;
  }
  FUN_0005cf2d();
  return 0;
}

/******************************************************************************
 * Function : sub_04b59e (Ghidra: FUN_0004b59e)
 * Prototype: undefined4 sub_04b59e(void);
 * Address  : 0x4b59e (Size: 44 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x49eff, 0x809d0
 ******************************************************************************/
undefined4 FUN_0004b59e(void)

{
  FUN_000809d0();
  FUN_00049eff();
  return 0;
}

/******************************************************************************
 * Function : sub_04b5ca (Ghidra: FUN_0004b5ca)
 * Prototype: undefined4 sub_04b5ca(void);
 * Address  : 0x4b5ca (Size: 228 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x49eff, 0x5afda, 0x5c848, 0x5cf03, 0x627b5, 0x6e9ab, 0x80e04, 0x85aa4, 0xad54c
 ******************************************************************************/
undefined4 FUN_0004b5ca(void)

{
  byte bVar1;
  byte *in_EAX;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_ECX_01;
  
  if (*(short *)(in_EAX + 0x43e) == 0) {
    FUN_00049eff();
    return 0;
  }
  *in_EAX = *in_EAX | 0x80;
  FUN_00085aa4();
  if (extraout_ECX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    FUN_000627b5();
    *(undefined4 *)(extraout_ECX_00 + 0x4c5) = 0xb;
    FUN_0005afda();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005cf03();
    bVar1 = DAT_0019d0b8 & 0x3f;
    DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
    DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 >> 5) << 6;
  }
  FUN_00080e04();
  extraout_ECX_01[0x43e] = 0;
  extraout_ECX_01[0x43f] = 0;
  *extraout_ECX_01 = *extraout_ECX_01 | 0x10;
  FUN_000ad54c();
  FUN_0006e9ab();
  return 0;
}

/******************************************************************************
 * Function : sub_04b6ae (Ghidra: FUN_0004b6ae)
 * Prototype: undefined4 sub_04b6ae(void);
 * Address  : 0x4b6ae (Size: 228 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x49eff, 0x5afda, 0x5c848, 0x5cf03, 0x627b5, 0x6e9ab, 0x80fbc, 0x85aa4, 0xad54c
 ******************************************************************************/
undefined4 FUN_0004b6ae(void)

{
  byte bVar1;
  byte *in_EAX;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_ECX_01;
  
  if (*(short *)(in_EAX + 0x43e) == 0) {
    FUN_00049eff();
    return 0;
  }
  *in_EAX = *in_EAX | 0x80;
  FUN_00085aa4();
  if (extraout_ECX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    FUN_000627b5();
    *(undefined4 *)(extraout_ECX_00 + 0x4c5) = 0xb;
    FUN_0005afda();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005c848();
    FUN_0005cf03();
    bVar1 = DAT_0019d0b8 & 0x3f;
    DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
    DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 >> 5) << 6;
  }
  FUN_00080fbc();
  extraout_ECX_01[0x43e] = 0;
  extraout_ECX_01[0x43f] = 0;
  *extraout_ECX_01 = *extraout_ECX_01 | 0x10;
  FUN_000ad54c();
  FUN_0006e9ab();
  return 0;
}

/******************************************************************************
 * Function : sub_04b792 (Ghidra: FUN_0004b792)
 * Prototype: undefined4 sub_04b792(void);
 * Address  : 0x4b792 (Size: 66 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x77fdc, 0x780a3, 0x780c2
 ******************************************************************************/
undefined4 FUN_0004b792(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  
  if (*(char *)(in_EAX + 0x37) != '\x05') {
    FUN_00077fdc();
    iVar1 = FUN_000780a3();
    if (iVar1 < *(int *)(extraout_ECX + 0x4b6)) {
      FUN_000780c2();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04b7d4 (Ghidra: FUN_0004b7d4)
 * Prototype: undefined4 sub_04b7d4(void);
 * Address  : 0x4b7d4 (Size: 57 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x627b5, 0x780c2
 ******************************************************************************/
undefined4 FUN_0004b7d4(void)

{
  byte *in_EAX;
  
  FUN_000780c2();
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    FUN_000627b5();
  }
  *in_EAX = *in_EAX & 0x6f;
  return 0;
}

/******************************************************************************
 * Function : sub_04b80d (Ghidra: FUN_0004b80d)
 * Prototype: undefined4 sub_04b80d(void);
 * Address  : 0x4b80d (Size: 221 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004b80d(void)

{
  byte *in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  in_EAX[0x2f] = 0;
  in_EAX[0x30] = 0;
  in_EAX[0x31] = 0;
  in_EAX[0x32] = 0;
  in_EAX[0x33] = 0;
  in_EAX[0x34] = 0;
  *in_EAX = *in_EAX | 0x90;
  iVar2 = (uint)*(ushort *)(in_EAX + 0xe4) - (uint)**(ushort **)(in_EAX + 0x38);
  iVar3 = iVar2 >> 0x1f;
  *(int *)(in_EAX + 0x4db) = (int)((iVar2 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
  iVar2 = (uint)*(ushort *)(in_EAX + 0xe6) - (uint)(*(ushort **)(in_EAX + 0x38))[1];
  iVar3 = iVar2 >> 0x1f;
  *(int *)(in_EAX + 0x4df) = (int)((iVar2 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
  if (*(int *)(in_EAX + 0x4db) < 0) {
    if (*(int *)(in_EAX + 0x4db) < -0xff) {
      uVar1 = *(undefined4 *)(in_EAX + 0x4db);
    }
    else {
      uVar1 = 0xffffff00;
    }
  }
  else if (*(int *)(in_EAX + 0x4db) < 0x100) {
    uVar1 = 0x100;
  }
  else {
    uVar1 = *(undefined4 *)(in_EAX + 0x4db);
  }
  *(undefined4 *)(in_EAX + 0x4db) = uVar1;
  if (*(int *)(in_EAX + 0x4df) < 0) {
    if (*(int *)(in_EAX + 0x4df) < -0xff) {
      uVar1 = *(undefined4 *)(in_EAX + 0x4df);
    }
    else {
      uVar1 = 0xffffff00;
    }
  }
  else if (*(int *)(in_EAX + 0x4df) < 0x100) {
    uVar1 = 0x100;
  }
  else {
    uVar1 = *(undefined4 *)(in_EAX + 0x4df);
  }
  *(undefined4 *)(in_EAX + 0x4df) = uVar1;
  return 0;
}

/******************************************************************************
 * Function : sub_04b8ea (Ghidra: FUN_0004b8ea)
 * Prototype: undefined4 sub_04b8ea(void);
 * Address  : 0x4b8ea (Size: 162 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
undefined4 FUN_0004b8ea(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar1 = **(ushort **)(in_EAX + 0x38);
  iVar2 = FUN_000e69fc();
  iVar3 = FUN_000e69fc();
  if (iVar2 < iVar3) {
    uVar6 = (uint)*(ushort *)(in_EAX + 0xe4);
  }
  else {
    uVar6 = (uint)uVar1 + *(int *)(in_EAX + 0x4db);
  }
  iVar2 = FUN_000e69fc();
  uVar7 = FUN_000e69fc();
  puVar5 = (undefined2 *)((ulonglong)uVar7 >> 0x20);
  if (iVar2 < (int)uVar7) {
    uVar4 = (uint)*(ushort *)(in_EAX + 0xe6);
  }
  else {
    uVar4 = extraout_ECX + *(int *)(in_EAX + 0x4df);
  }
  if ((uVar6 == *(ushort *)(in_EAX + 0xe4)) && (uVar4 == *(ushort *)(in_EAX + 0xe6))) {
    *(undefined4 *)(in_EAX + 0x4b1) = 0;
  }
  *puVar5 = (short)uVar6;
  puVar5[1] = (short)uVar4;
  return 0;
}

/******************************************************************************
 * Function : sub_04b98c (Ghidra: FUN_0004b98c)
 * Prototype: undefined4 sub_04b98c(void);
 * Address  : 0x4b98c (Size: 6 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004b98c(void)

{
  byte *in_EAX;
  
  *in_EAX = *in_EAX & 0x6f;
  return 0;
}

/******************************************************************************
 * Function : sub_04b992 (Ghidra: FUN_0004b992)
 * Prototype: undefined4 sub_04b992(void);
 * Address  : 0x4b992 (Size: 58 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x4845c, 0x780a3, 0x81e7c
 ******************************************************************************/
undefined4 FUN_0004b992(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  
  uVar1 = FUN_000780a3();
  *(undefined4 *)(extraout_ECX + 0x4b6) = uVar1;
  FUN_00081e7c();
  FUN_0004845c();
  return 0;
}

/******************************************************************************
 * Function : sub_04b9cc (Ghidra: FUN_0004b9cc)
 * Prototype: undefined4 sub_04b9cc(void);
 * Address  : 0x4b9cc (Size: 34 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x4845c
 ******************************************************************************/
undefined4 FUN_0004b9cc(void)

{
  int extraout_ECX;
  
  FUN_0004845c();
  *(undefined2 *)(extraout_ECX + 0x2f) = 0;
  *(undefined4 *)(extraout_ECX + 0x31) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_04b9ee (Ghidra: FUN_0004b9ee)
 * Prototype: undefined4 sub_04b9ee(void);
 * Address  : 0x4b9ee (Size: 191 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x80c84, 0xad66c, 0xe6a10
 ******************************************************************************/
undefined4 FUN_0004b9ee(void)

{
  int iVar1;
  int extraout_ECX;
  byte *extraout_ECX_00;
  
  FUN_000e6a10();
  FUN_000ad66c();
  iVar1 = FUN_00080c84(*(undefined2 *)
                        ((&DAT_001ae9fc)
                         [(ushort)(&DAT_002e0589)[(uint)*(byte *)(extraout_ECX + 0x2b) * 0xa84]] +
                        0xd),CONCAT11((char)((ushort)*(undefined2 *)
                                                      ((&DAT_001ae9fc)
                                                       [(ushort)(&DAT_002e0589)
                                                                [(uint)*(byte *)(extraout_ECX + 0x2b
                                                                                ) * 0xa84]] + 0x11)
                                            >> 8) + '\x01',
                                      (char)*(undefined2 *)
                                             ((&DAT_001ae9fc)
                                              [(ushort)(&DAT_002e0589)
                                                       [(uint)*(byte *)(extraout_ECX + 0x2b) * 0xa84
                                                       ]] + 0x11)));
  if (iVar1 != 0) {
    *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 1) =
         *(byte *)((&DAT_001b0a00)[*(ushort *)(iVar1 + 100)] + 1) | 2;
    *extraout_ECX_00 = *extraout_ECX_00 | 0x90;
    DAT_0019d0b9 = DAT_0019d0b9 | 8;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04baad (Ghidra: FUN_0004baad)
 * Prototype: undefined4 sub_04baad(void);
 * Address  : 0x4baad (Size: 86 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xb3b10, 0xe8d80
 ******************************************************************************/
undefined4 FUN_0004baad(void)

{
  undefined4 uVar1;
  int in_EAX;
  
  uVar1 = *(undefined4 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x2f)] + 0xd);
  FUN_000b3b10(CONCAT22((short)((uint)uVar1 >> 0x10) + -0x70,(short)uVar1),
               *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x2f)] + 0x11));
  if (*(int *)(in_EAX + 0x4b1) < 9) {
    FUN_000e8d80();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04bb03 (Ghidra: FUN_0004bb03)
 * Prototype: undefined4 sub_04bb03(void);
 * Address  : 0x4bb03 (Size: 22 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x49eff, 0xe8f24
 ******************************************************************************/
undefined4 FUN_0004bb03(void)

{
  FUN_00049eff();
  FUN_000e8f24();
  return 0;
}

/******************************************************************************
 * Function : sub_04bb19 (Ghidra: FUN_0004bb19)
 * Prototype: undefined4 sub_04bb19(void);
 * Address  : 0x4bb19 (Size: 203 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x4823a, 0x80fbc
 ******************************************************************************/
undefined4 FUN_0004bb19(void)

{
  int iVar1;
  int in_EAX;
  
  FUN_00080fbc();
  FUN_0004823a();
  **(undefined2 **)(in_EAX + 0x38) =
       *(undefined2 *)
        ((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]] + 0xd);
  if (*(char *)(in_EAX + 0x37) == '\x05') {
    *(undefined2 *)(*(int *)(in_EAX + 0x38) + 2) =
         *(undefined2 *)
          ((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]] + 0xf);
    *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x17) = 0x10000;
  }
  else {
    iVar1 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]];
    *(ushort *)(*(int *)(in_EAX + 0x38) + 2) =
         (*(short *)(iVar1 + 0xf) - *(short *)(iVar1 + 0x11)) - *(ushort *)(iVar1 + 0x58) / 2;
    *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x17) = 24000;
  }
  *(undefined4 *)(*(int *)(in_EAX + 0x38) + 7) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_04bbe4 (Ghidra: FUN_0004bbe4)
 * Prototype: undefined4 sub_04bbe4(void);
 * Address  : 0x4bbe4 (Size: 337 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe8d80
 ******************************************************************************/
undefined4 FUN_0004bbe4(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x37) != '\x05') {
    piVar1 = (int *)(*(int *)(in_EAX + 0x38) + 0x17);
    *piVar1 = *piVar1 + -0x3dc;
    piVar1 = (int *)(*(int *)(in_EAX + 0x38) + 7);
    *piVar1 = *piVar1 + 0x10;
    iVar2 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]];
    *(short *)(in_EAX + 0x3c) =
         *(short *)(iVar2 + 0xd) +
         (short)(((int)*(short *)(iVar2 + 0x11) + *(ushort *)(iVar2 + 0x58) / 2) *
                 (&DAT_001927e0)[*(int *)(*(int *)(in_EAX + 0x38) + 7)] >> 0x10);
    iVar2 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]];
    *(short *)(in_EAX + 0x3e) =
         *(short *)(iVar2 + 0xf) -
         (short)(((int)*(short *)(iVar2 + 0x11) + *(ushort *)(iVar2 + 0x58) / 2) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(in_EAX + 0x38) + 7)] >> 0x10);
    iVar2 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]];
    *(short *)(in_EAX + 0xba) =
         (short)((&DAT_001927e0)[*(int *)(*(int *)(in_EAX + 0x38) + 7)] *
                 ((int)*(short *)(iVar2 + 0x11) + *(ushort *)(iVar2 + 0x58) / 2) >> 0x10) +
         *(short *)(iVar2 + 0xd);
    iVar2 = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]];
    *(short *)(in_EAX + 0xbc) =
         *(short *)(iVar2 + 0xf) -
         (short)(((int)*(short *)(iVar2 + 0x11) + *(ushort *)(iVar2 + 0x58) / 2) *
                 (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(in_EAX + 0x38) + 7)] >> 0x10);
  }
  if (7 < *(int *)(in_EAX + 0x4b1)) {
    FUN_000e8d80();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04bd35 (Ghidra: FUN_0004bd35)
 * Prototype: undefined4 sub_04bd35(void);
 * Address  : 0x4bd35 (Size: 96 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x627b5, 0xad54c, 0xe8f24
 ******************************************************************************/
undefined4 FUN_0004bd35(void)

{
  byte *in_EAX;
  int iVar1;
  
  FUN_000e8f24();
  if (in_EAX[0x37] != 5) {
    *(undefined4 *)(*(int *)(in_EAX + 0x38) + 0x17) = 0x2000;
    *(undefined4 *)(*(int *)(in_EAX + 0x38) + 7) = 0x100;
  }
  FUN_000ad54c();
  iVar1 = (int)DAT_002f10ce._3_1_;
  *in_EAX = *in_EAX & 0x6f;
  DAT_0019d0b9 = DAT_0019d0b9 & 0xf7;
  if (in_EAX == &DAT_0019d0c8 + iVar1 * 0x4ef) {
    FUN_000627b5();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04bd95 (Ghidra: FUN_0004bd95)
 * Prototype: undefined4 sub_04bd95(void);
 * Address  : 0x4bd95 (Size: 6 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004bd95(void)

{
  byte *in_EAX;
  
  *in_EAX = *in_EAX | 0x80;
  return 0;
}

/******************************************************************************
 * Function : sub_04bd9b (Ghidra: FUN_0004bd9b)
 * Prototype: undefined4 sub_04bd9b(void);
 * Address  : 0x4bd9b (Size: 72 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x627b5, 0xad66c
 ******************************************************************************/
undefined4 FUN_0004bd9b(void)

{
  byte *in_EAX;
  
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    FUN_000627b5();
  }
  *in_EAX = *in_EAX & 0xef;
  FUN_000ad66c();
  *in_EAX = *in_EAX & 0x7f;
  return 0;
}

/******************************************************************************
 * Function : sub_04bdf7 (Ghidra: FUN_0004bdf7)
 * Prototype: undefined4 sub_04bdf7(void);
 * Address  : 0x4bdf7 (Size: 3 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004bdf7(void)

{
  return 0;
}

/******************************************************************************
 * Function : sub_04bdfa (Ghidra: FUN_0004bdfa)
 * Prototype: undefined4 sub_04bdfa(void);
 * Address  : 0x4bdfa (Size: 105 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5b645, 0x784ae
 ******************************************************************************/
undefined4 FUN_0004bdfa(void)

{
  byte bVar1;
  byte *in_EAX;
  
  in_EAX[0x4bd] = 0;
  in_EAX[0x4be] = 0;
  in_EAX[0x4bf] = 0;
  in_EAX[0x4c0] = 0;
  *in_EAX = *in_EAX | 0x80;
  in_EAX[0x4b5] = *(byte *)(*(int *)(in_EAX + 0x38) + 6);
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    in_EAX[1] = in_EAX[1] & 0xfd;
    in_EAX[1] = in_EAX[1] | (DAT_002ee920 & 1) * '\x02';
    DAT_002ee920 = 0;
    bVar1 = FUN_0005b645();
    in_EAX[1] = in_EAX[1] & 0xfe;
    in_EAX[1] = in_EAX[1] | bVar1 & 1;
  }
  FUN_000784ae();
  return 0;
}

/******************************************************************************
 * Function : sub_04be63 (Ghidra: FUN_0004be63)
 * Prototype: undefined4 sub_04be63(void);
 * Address  : 0x4be63 (Size: 58 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x4823a
 ******************************************************************************/
undefined4 FUN_0004be63(void)

{
  byte *in_EAX;
  
  FUN_0004823a();
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    DAT_002ee920 = ((&DAT_0019d0c9)[DAT_002f10ce._3_1_ * 0x4ef] & 3) >> 1;
  }
  *in_EAX = *in_EAX & 0x7f;
  return 0;
}

/******************************************************************************
 * Function : sub_04be9d (Ghidra: FUN_0004be9d)
 * Prototype: undefined4 sub_04be9d(void);
 * Address  : 0x4be9d (Size: 90 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x4823a
 ******************************************************************************/
undefined4 FUN_0004be9d(void)

{
  byte *in_EAX;
  
  *in_EAX = *in_EAX | 0x80;
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    in_EAX[1] = in_EAX[1] & 0xfd;
    in_EAX[1] = in_EAX[1] | (DAT_002ee920 & 1) * '\x02';
    DAT_002ee920 = 0;
    DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
  }
  in_EAX[0x4bd] = 0x20;
  in_EAX[0x4be] = 0;
  in_EAX[0x4bf] = 0;
  in_EAX[0x4c0] = 0;
  FUN_0004823a();
  FUN_000784ae();
  return 0;
}

/******************************************************************************
 * Function : sub_04bef7 (Ghidra: FUN_0004bef7)
 * Prototype: undefined4 sub_04bef7(void);
 * Address  : 0x4bef7 (Size: 73 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5b645, 0x784ae
 ******************************************************************************/
undefined4 FUN_0004bef7(void)

{
  byte *in_EAX;
  
  FUN_000784ae();
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    DAT_002ee920 = ((&DAT_0019d0c9)[DAT_002f10ce._3_1_ * 0x4ef] & 3) >> 1;
    FUN_0005b645();
  }
  *in_EAX = *in_EAX & 0x7f;
  return 0;
}

/******************************************************************************
 * Function : sub_04bf40 (Ghidra: FUN_0004bf40)
 * Prototype: undefined4 sub_04bf40(void);
 * Address  : 0x4bf40 (Size: 364 bytes)
 * Module   : instance.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x14e9f, 0x24998, 0x3b0a0, 0x6e538, 0x6f865, 0xb3788
 ******************************************************************************/
undefined4 FUN_0004bf40(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined2 in_stack_ffffffdc;
  undefined1 uVar9;
  
  uVar9 = (undefined1)((ushort)in_stack_ffffffdc >> 8);
  uVar6 = (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8d) % 0x100;
  uVar3 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x8d) / 0x100;
  uVar4 = uVar3 / 3;
  iVar5 = FUN_0003b0a0();
  if (0 < iVar5) {
    if (*(byte *)(extraout_ECX + 0x93) < 0x1a) {
      *(char *)(extraout_ECX + 0x93) = *(char *)(extraout_ECX + 0x93) + '\x01';
      iVar5 = FUN_0006f865();
      if (iVar5 != 0) {
        return 0;
      }
      uVar7 = 2;
    }
    else {
      *(undefined1 *)(extraout_ECX + 0x93) = 0;
      FUN_00014e9f();
      uVar8 = 0x80;
      uVar2 = CONCAT11(uVar9,0x80);
      iVar5 = 0;
      do {
        iVar1 = ((uint)(byte)((char)uVar6 + *(char *)((int)&DAT_0018b67b + iVar5 + 3) * '\x02') +
                (uint)(byte)((char)uVar3 + (&DAT_0018b67f)[iVar5] * '\x02') * 0x100) * 5;
        if (((*(uint *)((int)&DAT_00279203 + iVar1 + 1) >> 0x1c &
             1 << (*(byte *)(in_EAX + 6) & 0x1f)) != 0) &&
           ((*(byte *)((int)&DAT_00279203 + iVar1) & 0x10) == 0)) {
          uVar2 = FUN_000b3788(uVar8,uVar2,uVar6,uVar3,uVar4);
          FUN_00024998();
        }
        iVar5 = iVar5 + 2;
      } while (iVar5 != 8);
      uVar7 = 3;
    }
    FUN_0006e538(3,0,uVar7,0x100);
  }
  return 0;
}

/******************************************************************************
 * Function : dk_data_swpe_dat_04c0ac (Ghidra: FUN_0004c0ac)
 * Prototype: void dk_data_swpe_dat_04c0ac(void);
 * Address  : 0x4c0ac (Size: 162 bytes)
 * Module   : instance.cpp [direct_file_string_xref]
 * OrigLine : instance.cpp:1903 ("Unable to load swipe graphics")
 * Naming   : String 'data\swpe??.dat'
 * Callers  : 1 -> 0x4b478
 * Callees  : 5 -> 0x4c14e, 0xddaf0, 0xe7714, 0xe830c, 0xf05f0
 * Strings  :
 *   - 0x1656fc: "instance.cpp"
 *   - 0x17c0b4: "data\swpe??.dat"
 *   - 0x1656ba: "data\swpe%02d.dat"
 *   - 0x1656cc: "data\swpe%02d.tab"
 *   - 0x1656de: "Unable to load swipe graphics"
 ******************************************************************************/
void FUN_0004c0ac(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  char extraout_DL;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  char *pcVar2;
  
  if (((byte)(&DAT_0018b70e)[(uint)*(byte *)(in_EAX + 0x1a) * 0x10] != 0) &&
     ((int)DAT_002ee7ab != (uint)(byte)(&DAT_0018b70e)[(uint)*(byte *)(in_EAX + 0x1a) * 0x10])) {
    FUN_0004c14e();
    pcVar2 = s_data_swpe___dat_0017c0b4;
    iVar1 = (extraout_EDX + -1) * 5;
    do {
      FUN_000e7714(pcVar2,s_data_swpe_02d_dat_001656ba,iVar1);
      FUN_000e7714(pcVar2 + 0x2c,s_data_swpe_02d_tab_001656cc,extraout_EDX_00);
      pcVar2 = pcVar2 + 0x58;
      iVar1 = extraout_EDX_01;
    } while (extraout_ECX < 5);
    iVar1 = FUN_000e830c();
    if (iVar1 != 0) {
      FUN_0004c14e();
      FUN_000ddaf0(); /* LbErrorLog("instance.cpp", line 1903, "Unable to load swipe graphics") */
      return;
    }
    FUN_000f05f0();
    DAT_002ee7ab = extraout_DL;
  }
  return;
}

/******************************************************************************
 * Function : dk_data_swpe_dat_04c14e (Ghidra: FUN_0004c14e)
 * Prototype: void dk_data_swpe_dat_04c14e(void);
 * Address  : 0x4c14e (Size: 30 bytes)
 * Module   : instance.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : String 'data\swpe??.dat'
 * Callers  : 2 -> 0x404f7, 0x4c0ac
 * Callees  : 1 -> 0xe83f0
 * Strings  :
 *   - 0x17c0b4: "data\swpe??.dat"
 ******************************************************************************/
void FUN_0004c14e(void)

{
  if (DAT_002ee7ab != -1) {
    FUN_000e83f0();
    DAT_002ee7ab = -1;
  }
  return;
}

