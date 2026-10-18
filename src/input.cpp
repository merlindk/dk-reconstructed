/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: input.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 19
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0473e1 (Ghidra: FUN_000473e1)
 * Prototype: void sub_0473e1(void);
 * Address  : 0x473e1 (Size: 884 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 4 -> 0x45f23, 0x5dde9, 0xdc150, 0xebf9c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00047601) */
/* WARNING: Removing unreachable block (ram,0x0004763f) */

void FUN_000473e1(void)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_000dc150();
  iVar8 = (int)uVar9;
  iVar6 = DAT_002f10ce._3_1_ * 0x4ef;
  iVar2 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar6)];
  *(undefined2 *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar6] * 0x11) = 0x7f;
  *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[iVar6] * 0x11) = 0x7f;
  if (DAT_003d9878 == 0xd) {
    iVar8 = iVar8 + 0x28;
  }
  if (((&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 8) != 0) {
    return;
  }
  uVar7 = DAT_003d9864 * (uint)DAT_0019cba6;
  iVar6 = (uint)DAT_0019cba6 * DAT_003d9868;
  while ((uVar7 != DAT_0019cba4 / 2 || (iVar8 != iVar6))) {
    FUN_000ebf9c();
    uVar7 = DAT_003d9864 * (uint)DAT_0019cba6;
    iVar6 = DAT_003d9868 * (uint)DAT_0019cba6;
  }
  if (DAT_002ee921 == '\0') {
    uVar5 = (undefined2)((iVar6 * 0xff) / (int)(uint)DAT_0019cba2);
  }
  else {
    uVar5 = (undefined2)((int)(((uint)DAT_0019cba2 - iVar6) * 0xff) / (int)(uint)DAT_0019cba2);
  }
  *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11) =
       uVar5;
  iVar8 = DAT_002f10ce._3_1_ * 0x4ef;
  *(short *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar8] * 0x11) =
       (short)(((int)((ulonglong)uVar9 >> 0x20) * 0xff) / (int)(uint)DAT_0019cba4);
  iVar6 = (uint)(byte)(&DAT_0019d0d3)[iVar8] * 0x11;
  uVar7 = DAT_002ee922 + 1;
  if (uVar7 < 6) {
    *(short *)(&DAT_002e90c2 + iVar6) =
         (short)((int)(*(ushort *)(&DAT_002e90c2 + iVar6) - 0x7f) / (int)(6 - uVar7)) + 0x7f;
    sVar3 = (short)((int)(*(ushort *)(&DAT_002e90c4 + iVar6) - 0x7f) / (int)(6 - uVar7));
    bVar1 = (&DAT_0019d0d3)[iVar8];
  }
  else {
    if (uVar7 < 7) goto LAB_000475df;
    uVar4 = (ushort)DAT_002ee922;
    *(ushort *)(&DAT_002e90c2 + iVar6) =
         (short)(*(ushort *)(&DAT_002e90c2 + iVar6) - 0x7f) * (uVar4 - 5) + 0x7f;
    sVar3 = (uVar4 - 5) * (short)(*(ushort *)(&DAT_002e90c4 + iVar6) - 0x7f);
    bVar1 = (&DAT_0019d0d3)[iVar8];
  }
  *(short *)(&DAT_002e90c4 + (uint)bVar1 * 0x11) = sVar3 + 0x7f;
LAB_000475df:
  if (0xff < *(ushort *)
              (&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11)) {
    *(undefined2 *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11)
         = 0xff;
  }
  if (0xff < *(ushort *)
              (&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11)) {
    *(undefined2 *)(&DAT_002e90c4 + (uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11)
         = 0xff;
  }
  if (*(char *)(iVar2 + 0x1f) == '\x05') {
    if (DAT_0034b25c != '\0') {
      DAT_0034b25c = '\0';
      DAT_0034b25a = 0;
    }
    if (DAT_0034b25d != '\0') {
      DAT_0034b25d = '\0';
      DAT_0034b25b = 0;
    }
    iVar8 = FUN_00045f23();
    if (iVar8 != 0) {
      FUN_0005dde9();
    }
    iVar8 = FUN_00045f23();
    if (iVar8 != 0) {
      FUN_0005dde9();
    }
    iVar8 = FUN_00045f23();
    if (iVar8 != 0) {
      FUN_0005dde9();
    }
    iVar8 = FUN_00045f23();
    if (iVar8 != 0) {
      FUN_0005dde9();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_047755 (Ghidra: FUN_00047755)
 * Prototype: undefined8 sub_047755(void);
 * Address  : 0x47755 (Size: 1144 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 5 -> 0x45f23, 0x45fb9, 0x57fd9, 0x5ddee, 0xe6c1c
 ******************************************************************************/
undefined8 FUN_00047755(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_EDX;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int aiStack_34 [8];
  
  aiStack_34[6] = 0x47767;
  cVar1 = FUN_00057fd9();
  if ((cVar1 != '\0') && (DAT_0034cf1f == 0)) {
LAB_00047bc6:
    uVar3 = 0;
    goto LAB_0004688c;
  }
  if (((&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 4) == 0) {
    if (((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x01') && ((DAT_0019d0b6 & 1) != 0)) {
      aiStack_34[6] = 0x47899;
      iVar2 = FUN_00045fb9();
      if (iVar2 == 0) goto LAB_000478dc;
      DAT_003db518 = 0;
LAB_000478c4:
      aiStack_34[6] = 0;
      aiStack_34[5] = 0;
      piVar5 = aiStack_34 + 5;
LAB_000478c8:
      *(undefined4 *)((int)piVar5 + -4) = 0x478d2;
      FUN_0005ddee();
    }
    else {
LAB_000478dc:
      for (iVar2 = 0x3b; iVar2 < 0x43; iVar2 = iVar2 + 1) {
        aiStack_34[6] = 0x478f5;
        iVar4 = FUN_00045fb9();
        if (iVar4 != 0) {
          (&DAT_003db4fc)[iVar2] = 0;
          aiStack_34[6] = 0;
          piVar5 = aiStack_34 + 5;
          aiStack_34[5] = 0;
          goto LAB_000478c8;
        }
      }
      if ((((&DAT_0019d578)[DAT_002f10ce._3_1_ * 0x4ef] != '\x0e') &&
          ((&DAT_0019d578)[DAT_002f10ce._3_1_ * 0x4ef] != '\x0f')) && (DAT_0034cf1f == 0)) {
        aiStack_34[6] = 0x47960;
        iVar2 = FUN_00045f23();
        if (iVar2 != 0) {
          (&DAT_003db4fc)[aiStack_34[7]] = 0;
          goto LAB_000478c4;
        }
      }
      if ((DAT_0019d0b8 & 1) == 0) {
        aiStack_34[6] = 0x479af;
        iVar2 = FUN_00045fb9();
        if (iVar2 != 0) {
          DAT_003db54a = 0;
          DAT_002ed3de = DAT_002ed3de + 2;
          if (DAT_002ed3de < 0) {
            DAT_002ed3de = 0;
          }
          else if (0x40 < DAT_002ed3de) {
            DAT_002ed3de = 0x40;
          }
        }
        aiStack_34[6] = 0x479f8;
        iVar2 = FUN_00045fb9();
        if (iVar2 != 0) {
          DAT_003db546 = 0;
          DAT_002ed3de = DAT_002ed3de + -2;
          if (DAT_002ed3de < 0) {
            DAT_002ed3de = 0;
          }
          else if (0x40 < DAT_002ed3de) {
            DAT_002ed3de = 0x40;
          }
        }
        aiStack_34[6] = 0x47a3e;
        iVar2 = FUN_00045fb9();
        piVar6 = aiStack_34 + 7;
        if ((iVar2 != 0) &&
           (DAT_003db546 = 0, piVar6 = aiStack_34 + 7,
           *(ushort *)(&DAT_0019d518 + DAT_002f10ce._3_1_ * 0x4ef) < 0x800)) {
          aiStack_34[6] = 0;
          piVar6 = aiStack_34 + 5;
          aiStack_34[5] = 0;
          FUN_0005ddee();
        }
        *(undefined4 *)((int)piVar6 + -4) = 0x47a9c;
        iVar2 = FUN_00045fb9();
        puVar7 = (undefined1 *)piVar6;
        if ((iVar2 != 0) &&
           (DAT_003db54a = 0, 0x80 < *(ushort *)(&DAT_0019d518 + DAT_002f10ce._3_1_ * 0x4ef))) {
          *(undefined4 *)((int)piVar6 + -4) = 0;
          puVar7 = (undefined1 *)((int)piVar6 + -8);
          *(undefined4 *)((int)piVar6 + -8) = 0;
          *(undefined4 *)((int)piVar6 + -0xc) = 0x47aec;
          FUN_0005ddee();
        }
        *(undefined4 *)(puVar7 + -4) = 0x47afb;
        iVar2 = FUN_00045fb9();
        if (iVar2 != 0) {
          *(undefined4 *)(puVar7 + -4) = 0;
          piVar5 = (int *)(puVar7 + -8);
          *(undefined4 *)(puVar7 + -8) = 0;
          goto LAB_000478c8;
        }
        *(undefined4 *)(puVar7 + -4) = 0x47b32;
        iVar2 = FUN_00045fb9();
        if ((iVar2 == 0) || ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\0')) {
          *(undefined4 *)(puVar7 + -4) = 0x47b8a;
          iVar2 = FUN_00045f23();
          if (iVar2 != 0) {
            (&DAT_003db4fc)[aiStack_34[7]] = 0;
            *(undefined4 *)(puVar7 + -4) = 0;
            *(undefined4 *)(puVar7 + -8) = 0;
            *(undefined4 *)(puVar7 + -0xc) = 0x47bc6;
            FUN_0005ddee();
          }
          goto LAB_00047bc6;
        }
        *(undefined4 *)(puVar7 + -4) = 0;
        *(undefined4 *)(puVar7 + -8) = 0;
        *(undefined4 *)(puVar7 + -0xc) = 0x47b6f;
        FUN_0005ddee();
        DAT_003db535 = 0;
      }
    }
  }
  else {
    aiStack_34[6] = 0x4779e;
    iVar2 = FUN_00045fb9();
    if (iVar2 == 0) {
      DAT_003d98b4 = DAT_001991b8;
      if (DAT_003db5fc != '\x0e') {
        aiStack_34[6] = 0x47815;
        iVar2 = FUN_000e6c1c();
        if (0x1c1 < (int)(iVar2 * (uint)DAT_0019cba6)) goto LAB_000478d2;
      }
      aiStack_34[6] = 0;
      aiStack_34[5] = 0;
      FUN_0005ddee();
      DAT_003db5fc = '\0';
      DAT_003db4fc = 0;
    }
    else {
      aiStack_34[6] = 0;
      aiStack_34[5] = 0;
      FUN_0005ddee();
      DAT_003db5fc = '\0';
      DAT_003db518 = 0;
    }
  }
LAB_000478d2:
  uVar3 = 1;
LAB_0004688c:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_047bcd (Ghidra: FUN_00047bcd)
 * Prototype: longlong sub_047bcd(void);
 * Address  : 0x47bcd (Size: 726 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 13 -> 0x45f23, 0x45fb9, 0x4897f, 0x49343, 0x4991c, 0x49a52, 0x49a9a, 0x5afda, 0x5b5e1, 0x5b9b3 ...
 ******************************************************************************/
longlong FUN_00047bcd(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint in_EDX;
  int local_14;
  
  if ((&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] == '\0') {
    iVar3 = FUN_0004897f();
    if (iVar3 == 0) {
      iVar3 = FUN_00049343();
      if (iVar3 == 0) {
        if (DAT_003db53e != '\0') {
          DAT_003db53e = '\0';
          FUN_0005b5e1();
        }
        if ((DAT_003db50b != '\0') &&
           (((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02' ||
            ((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x05')))) {
          DAT_003db50b = '\0';
          FUN_0005b9b3();
        }
        iVar3 = FUN_00045f23();
        if (iVar3 == 0) {
          iVar3 = FUN_00045f23();
          if (iVar3 == 0) {
            cVar1 = FUN_00049a52();
            if (cVar1 == '\0') {
              iVar3 = FUN_00045f23();
              if (iVar3 == 0) {
                iVar3 = FUN_00045fb9();
                if (iVar3 != 0) {
                  DAT_003db51d = 0;
                  if ((DAT_0019d0bd & 0x80) == 0) {
                    DAT_0019d0bd = DAT_0019d0bd | 0x80;
                  }
                  else {
                    DAT_0019d0bd = DAT_0019d0bd & 0x7f;
                  }
                }
                iVar3 = FUN_00045fb9();
                if (iVar3 != 0) {
                  DAT_003db4fe = 0;
                  FUN_0005cda7();
                }
                iVar3 = FUN_00045fb9();
                if (iVar3 != 0) {
                  DAT_003db4ff = 0;
                  FUN_0005cda7();
                }
                iVar3 = FUN_00045fb9();
                if (iVar3 != 0) {
                  DAT_003db500 = 0;
                  FUN_0005cda7();
                }
                iVar3 = FUN_00045fb9();
                if (iVar3 != 0) {
                  DAT_003db501 = 0;
                  FUN_0005cda7();
                }
                iVar3 = FUN_00045fb9();
                if (iVar3 != 0) {
                  DAT_003db502 = 0;
                  FUN_0005cda7();
                }
                return (ulonglong)in_EDX << 0x20;
              }
              (&DAT_003db4fc)[local_14] = 0;
              if (((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] != '\a') && (DAT_002e90b1 != '\x02'))
              {
                FUN_0005afda();
                FUN_0004991c();
              }
            }
          }
          else {
            (&DAT_003db4fc)[local_14] = 0;
            sVar2 = FUN_000844f4();
            *(short *)(&DAT_002e1700 + DAT_002f10ce._3_1_ * 0x1508) = sVar2;
            if (sVar2 != 0) {
              FUN_0005ddee(0,0);
            }
          }
        }
        else {
          (&DAT_003db4fc)[local_14] = 0;
          FUN_00049a9a();
        }
      }
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_047ea3 (Ghidra: FUN_00047ea3)
 * Prototype: longlong sub_047ea3(void);
 * Address  : 0x47ea3 (Size: 319 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 6 -> 0x45f23, 0x499ce, 0x5afda, 0x5b5e1, 0x5ddee, 0xdc150
 ******************************************************************************/
longlong FUN_00047ea3(void)

{
  int iVar1;
  int extraout_ECX;
  int iVar2;
  uint in_EDX;
  int iVar3;
  int local_14;
  
  iVar1 = FUN_000dc150();
  iVar3 = iVar1 + -0x38 >> 0x1f;
  iVar2 = ((int)((extraout_ECX + (extraout_ECX >> 0x1f) * -4) -
                (uint)((extraout_ECX >> 0x1f) << 1 < 0)) >> 2) * 3 + 1;
  iVar1 = ((int)((iVar1 + -0x38 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2) * 3 + 1;
  if ((((-1 < iVar2) && (iVar2 < 0xff)) && (-1 < iVar1)) && (iVar1 < 0xff)) {
    if (DAT_0034b25c != '\0') {
      DAT_0034b25c = '\0';
    }
    if (DAT_0034b25a != '\0') {
      FUN_0005ddee(0,0);
      DAT_0034b25a = '\0';
      goto LAB_00047f7b;
    }
  }
  if (DAT_0034b25d != '\0') {
    DAT_0034b25d = '\0';
  }
  if (DAT_0034b25b == '\0') {
    if ((&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] != '\0')
    goto LAB_00047f7b;
    if (DAT_003db53e != '\0') {
      DAT_003db53e = '\0';
      FUN_0005b5e1();
    }
    iVar1 = FUN_00045f23();
    if (iVar1 == 0) {
      return (ulonglong)in_EDX << 0x20;
    }
    (&DAT_003db4fc)[local_14] = 0;
    FUN_0005afda();
  }
  else {
    DAT_0034b25b = '\0';
  }
  FUN_000499ce();
LAB_00047f7b:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_047fe2 (Ghidra: FUN_00047fe2)
 * Prototype: longlong sub_047fe2(void);
 * Address  : 0x47fe2 (Size: 200 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 4 -> 0x45fb9, 0x57fe4, 0x5ba63, 0x5ddee
 ******************************************************************************/
longlong FUN_00047fe2(void)

{
  int iVar1;
  uint in_EDX;
  undefined4 uVar2;
  
  if (((DAT_0019d0b8 & 1) == 0) || (((DAT_0019d0b8 & 1) != 0 && ((DAT_0019d0b8 & 0x80) != 0)))) {
    FUN_00057fe4();
  }
  iVar1 = DAT_002f10ce._3_1_ * 0x4ef;
  if (*(short *)((int)&DAT_0019d0f7 + iVar1) != 0) {
    if (((DAT_0034b25b != '\0') ||
        (*(int *)((byte *)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar1)] + 9) !=
         *(int *)(&DAT_0019d0f9 + iVar1))) ||
       ((*(byte *)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar1)] & 1) == 0)) {
      uVar2 = 0;
      FUN_0005ddee(0,0);
      return CONCAT44(uVar2,1);
    }
    iVar1 = FUN_00045fb9();
    if (iVar1 != 0) {
      DAT_003db50b = 0;
      FUN_0005ba63();
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0480aa (Ghidra: FUN_000480aa)
 * Prototype: longlong sub_0480aa(void);
 * Address  : 0x480aa (Size: 376 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 5 -> 0x45fb9, 0x49e95, 0x57fe4, 0x5b9b3, 0x5ddee
 ******************************************************************************/
longlong FUN_000480aa(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint auStack_1c [2];
  
  if (((DAT_0019d0b8 & 1) == 0) || (((DAT_0019d0b8 & 1) != 0 && ((DAT_0019d0b8 & 0x80) != 0)))) {
    auStack_1c[1] = 0x480d4;
    FUN_00057fe4();
  }
  iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
  puVar6 = (uint *)&stack0xffffffec;
  if ((*(short *)((int)&DAT_0019d0f7 + iVar2) != 0) &&
     ((((DAT_0034b25b != '\0' ||
        (pbVar1 = (byte *)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar2)],
        *(int *)(pbVar1 + 9) != *(int *)(&DAT_0019d0f9 + iVar2))) || ((*pbVar1 & 1) == 0)) ||
      (puVar6 = (uint *)&stack0xffffffec, pbVar1[7] == 0x43)))) {
    auStack_1c[1] = 0;
    puVar6 = auStack_1c;
    auStack_1c[0] = 0;
    DAT_0034b25b = '\0';
    FUN_0005ddee();
  }
  *(undefined4 *)((int)puVar6 + -4) = 0x48161;
  iVar2 = FUN_00045fb9();
  if (iVar2 != 0) {
    DAT_003db50b = 0;
    *(undefined4 *)((int)puVar6 + -4) = 0x48171;
    FUN_0005b9b3();
  }
  iVar2 = -1;
  for (iVar5 = 2; iVar5 < 0xc; iVar5 = iVar5 + 1) {
    *(undefined4 *)((int)puVar6 + -4) = 0x4818c;
    iVar3 = FUN_00045fb9();
    if (iVar3 != 0) {
      (&DAT_003db4fc)[iVar5] = 0;
      iVar2 = iVar5 + -2;
      break;
    }
  }
  puVar7 = (undefined1 *)puVar6;
  if (iVar2 != -1) {
    iVar3 = 0;
    for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
      *(undefined4 *)((int)puVar6 + -4) = 0x481e4;
      iVar4 = FUN_00049e95();
      if (iVar4 != 0) {
        if (iVar3 == iVar2) {
          *(undefined4 *)((int)puVar6 + -4) = 0;
          puVar7 = (undefined1 *)((int)puVar6 + -8);
          *(undefined4 *)((int)puVar6 + -8) = 0;
          *(undefined4 *)((int)puVar6 + -0xc) = 0x4821b;
          FUN_0005ddee();
          break;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
  return (ulonglong)*(uint *)(puVar7 + 8) << 0x20;
}

/******************************************************************************
 * Function : sub_04823a (Ghidra: FUN_0004823a)
 * Prototype: void sub_04823a(void);
 * Address  : 0x4823a (Size: 354 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x4bb19, 0x4be63, 0x4be9d, 0x809d0, 0x80a94, 0x80c84, 0x80e04, 0x80fbc, 0xdd624, 0xdd6c8
 * Callees  : 5 -> 0x49eff, 0x5b645, 0x6ec6f, 0x780df, 0x784ae
 ******************************************************************************/
void FUN_0004823a(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  byte in_DL;
  
  if (in_DL == in_EAX[0x452]) {
switchD_000482a9_default:
    return;
  }
  in_EAX[0x452] = in_DL;
  *in_EAX = *in_EAX & 0xf7;
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    DAT_0019d0b9 = DAT_0019d0b9 & 0xf6;
    DAT_0019d0b9 = DAT_0019d0b9 | 1;
  }
  if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
    FUN_0006ec6f();
    in_EAX = extraout_ECX;
  }
  switch(in_EAX[0x452]) {
  case 1:
    if (in_EAX[0x4b5] == 5) {
      FUN_000784ae();
    }
    FUN_000784ae();
    if (extraout_ECX_00 == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
      FUN_0005b645();
    }
    break;
  case 2:
  case 3:
    FUN_000784ae();
    if (extraout_ECX_01 == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
      DAT_0019d0b9 = DAT_0019d0b9 & 0xfe;
    }
    break;
  case 4:
    in_EAX[0x456] = in_EAX[0x453];
    FUN_000784ae();
    return;
  case 5:
    goto LAB_00048389;
  case 6:
LAB_00048389:
    FUN_00049eff();
    return;
  default:
    goto switchD_000482a9_default;
  }
  FUN_000780df();
  return;
}

/******************************************************************************
 * Function : sub_0485b8 (Ghidra: FUN_000485b8)
 * Prototype: void sub_0485b8(int param_1);
 * Address  : 0x485b8 (Size: 189 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48675, 0x4878e, 0x48897
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000485b8(int param_1)

{
  undefined *puVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int in_EDX;
  int iVar5;
  int *unaff_EBX;
  int iVar6;
  
  iVar6 = DAT_002f10ce._3_1_ * 0x4ef;
  uVar2 = -*(int *)(*(int *)((int)&DAT_0019d100 + iVar6) + 7) & 0x7ff;
  puVar1 = (&PTR_LAB_00192fe0)[uVar2];
  iVar5 = (&DAT_001927e0)[uVar2];
  iVar3 = in_EAX / (int)(uint)DAT_0019cba6;
  iVar4 = in_EDX / (int)(uint)DAT_0019cba6;
  *unaff_EBX = iVar4 * iVar5 + (int)puVar1 * iVar3 >> 0x10;
  *in_ECX = -iVar3 * iVar5 + iVar4 * (int)puVar1 >> 0x10;
  iVar5 = *unaff_EBX * param_1 >> 0x1f;
  *unaff_EBX = ((int)((*unaff_EBX * param_1 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8) +
               (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar6) + 1);
  iVar5 = *in_ECX * param_1 >> 0x1f;
  *in_ECX = ((int)((*in_ECX * param_1 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0)) >> 8) +
            (uint)*(byte *)(*(int *)((int)&DAT_0019d100 + iVar6) + 3);
  return;
}

/******************************************************************************
 * Function : sub_048675 (Ghidra: FUN_00048675)
 * Prototype: undefined1 sub_048675(undefined4 param_1);
 * Address  : 0x48675 (Size: 281 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4897f
 * Callees  : 3 -> 0x485b8, 0x5ddee, 0xebf9c
 ******************************************************************************/
undefined1 FUN_00048675(undefined4 param_1)

{
  int local_14;
  int local_10;
  undefined1 local_c;
  
  local_c = 0;
  if (DAT_0034b25a != '\0') {
    if (DAT_003482ad != 0) {
      if (DAT_003482ac == '\0') {
        FUN_000485b8(param_1);
        DAT_002ee8a9 = (undefined2)local_14;
        DAT_002ee8ab = (undefined2)local_10;
        if ((((-1 < local_14) && (local_14 < 0xff)) && (-1 < local_10)) && (local_10 < 0xff)) {
          local_c = 1;
          FUN_0005ddee(0,0);
        }
      }
      else {
        DAT_002e90b1 = 2;
        FUN_000ebf9c();
      }
    }
    DAT_003482ac = '\0';
    DAT_003482ad = 0;
    DAT_0034b25a = '\0';
  }
  return local_c;
}

/******************************************************************************
 * Function : sub_04878e (Ghidra: FUN_0004878e)
 * Prototype: undefined4 sub_04878e(undefined4 param_1);
 * Address  : 0x4878e (Size: 265 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4897f
 * Callees  : 3 -> 0x485b8, 0x5ddee, 0xe69fc
 ******************************************************************************/
undefined4 FUN_0004878e(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  if (DAT_003482ad == 0) {
    DAT_003482ac = '\0';
LAB_00048890:
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_000e69fc();
    if (iVar1 < 2) {
      iVar1 = FUN_000e69fc();
      if (iVar1 < 2) goto LAB_00048890;
    }
    if (DAT_003482ac == '\0') {
      DAT_003482ac = '\x01';
    }
    FUN_000485b8(param_1);
    DAT_002ee8a9 = (undefined2)local_14;
    DAT_002ee8ab = (undefined2)local_10;
    if ((((-1 < local_14) && (local_14 < 0xff)) && (-1 < local_10)) && (local_10 < 0xff)) {
      FUN_0005ddee(0,0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_048897 (Ghidra: FUN_00048897)
 * Prototype: undefined4 sub_048897(undefined4 param_1);
 * Address  : 0x48897 (Size: 232 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4897f
 * Callees  : 3 -> 0x485b8, 0x5ddee, 0x84d98
 ******************************************************************************/
undefined4 FUN_00048897(undefined4 param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  FUN_000485b8(param_1);
  DAT_002ee8a9 = (undefined2)local_c;
  DAT_002ee8ab = (undefined2)local_8;
  cVar1 = FUN_00084d98();
  if (cVar1 != '\0') {
    DAT_002e90b1 = 1;
  }
  if (DAT_0034b25d != '\0') {
    DAT_0034b25d = '\0';
  }
  if ((((DAT_0034b25b != '\0') && (DAT_0034b25b = '\0', -1 < local_c)) && (local_c < 0xff)) &&
     ((-1 < local_8 && (local_8 < 0xff)))) {
    FUN_0005ddee(0,0);
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04897f (Ghidra: FUN_0004897f)
 * Prototype: undefined1 sub_04897f(void);
 * Address  : 0x4897f (Size: 350 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x47bcd, 0x49426
 * Callees  : 6 -> 0x48675, 0x4878e, 0x48897, 0x498d9, 0xdc150, 0xebf9c
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0004897f(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 auStack_30 [4];
  undefined1 local_14;
  
  puVar5 = (undefined4 *)&stack0xffffffe0;
  local_14 = 0;
  auStack_30[3] = 0x489a6;
  uVar6 = FUN_000dc150();
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar3 = (undefined4)uVar6;
  _DAT_003482a0 = 1;
  if (DAT_003482ac == '\0') {
    DAT_002e90b1 = 0;
  }
  if ((DAT_0019d0b8 & 0x20) != 0) {
    auStack_30[3] = 0x489e7;
    _DAT_003482a4 = uVar4;
    _DAT_003482a8 = uVar3;
    cVar2 = FUN_000498d9();
    uVar6 = CONCAT44(_DAT_003482a4,_DAT_003482a8);
    if ((cVar2 != '\0') || (DAT_003482ac != '\0')) {
      if (DAT_0034b25c != '\0') {
        DAT_003482ad = 1;
        DAT_0034b25c = '\0';
      }
      auStack_30[2] = 0x48a20;
      auStack_30[3] = unaff_EBX;
      cVar2 = FUN_00048675();
      puVar1 = auStack_30 + 3;
      if (cVar2 == '\0') {
        auStack_30[1] = 0x48a36;
        auStack_30[2] = unaff_EBX;
        cVar2 = FUN_00048897();
        puVar1 = auStack_30 + 2;
        if (cVar2 == '\0') {
          puVar5 = auStack_30 + 1;
          auStack_30[1] = unaff_EBX;
          cVar2 = FUN_0004878e();
          uVar6 = CONCAT44(_DAT_003482a4,_DAT_003482a8);
          puVar1 = auStack_30 + 1;
          if (cVar2 == '\0') goto LAB_00048a60;
        }
      }
      puVar5 = puVar1;
      uVar6 = CONCAT44(_DAT_003482a4,_DAT_003482a8);
      local_14 = 1;
      goto LAB_00048a60;
    }
  }
  DAT_003482ad = 0;
LAB_00048a60:
  _DAT_003482a4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  _DAT_003482a8 = (undefined4)uVar6;
  if (DAT_003482ac != '\0') {
    puVar5[0xffffffff] = 0x48ab4;
    FUN_000ebf9c();
    uVar6 = CONCAT44(_DAT_003482a4,_DAT_003482a8);
  }
  _DAT_003482a4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  _DAT_003482a8 = (undefined4)uVar6;
  _DAT_003482b1 = uVar4;
  _DAT_003482b5 = uVar3;
  if (DAT_003482ac != '\0') {
    DAT_002e90b1 = 2;
  }
  return local_14;
}

/******************************************************************************
 * Function : sub_048add (Ghidra: FUN_00048add)
 * Prototype: void sub_048add(void);
 * Address  : 0x48add (Size: 298 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 1 -> 0x5dde9
 ******************************************************************************/
void FUN_00048add(void)

{
  if ((DAT_0019d0b8 & 1) == 0) {
    if (DAT_0034b258 != '\0') {
      FUN_0005dde9();
    }
    if (DAT_0034b259 != '\0') {
      FUN_0005dde9();
    }
    if (DAT_0034b25c != '\0') {
      FUN_0005dde9();
    }
    if (DAT_0034b25d != '\0') {
      FUN_0005dde9();
    }
    if (DAT_0034b25a != '\0') {
      FUN_0005dde9();
    }
    if (DAT_0034b25b != '\0') {
      FUN_0005dde9();
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_game_action_048c77 (Ghidra: FUN_00048c77)
 * Prototype: ushort dk_game_action_048c77(ushort param_1,ushort param_2);
 * Address  : 0x48c77 (Size: 1257 bytes)
 * Module   : input.cpp [direct_file_string_xref]
 * OrigLine : input.cpp:2634
 * Naming   : String 'UNKNOWN GAME ACTION -%d'
 * Callers  : 1 -> 0x1df28
 * Callees  : 33 -> 0x1458c, 0x23868, 0x447fb, 0x4e1f2, 0x4e4ad, 0x4e585, 0x4e60d, 0x4e66f, 0x4e85c, 0x4ed3d ...
 * Strings  :
 *   - 0x165670: "input.cpp"
 *   - 0x165658: "UNKNOWN GAME ACTION -%d"
 ******************************************************************************/
ushort FUN_00048c77(ushort param_1,ushort param_2)

{
  char in_AL;
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ushort in_CX;
  uint extraout_ECX;
  undefined2 in_DX;
  undefined2 unaff_BX;
  
  iVar5 = in_AL * 0x1508;
  switch(in_DX) {
  case 1:
    break;
  case 2:
    if ((&DAT_002e156a)[iVar5] != '\0') {
      iVar5 = FUN_00084904();
      if (-1 < iVar5) {
        return 1;
      }
      return 0xffff;
    }
    break;
  case 3:
    if ((&DAT_002e156a)[iVar5] != '\0') {
      sVar3 = FUN_000849c8();
      if (-1 < sVar3) {
        return 1;
      }
      return 0xffff;
    }
    break;
  case 4:
    if ((&DAT_002e156b)[iVar5] != '\0') {
      FUN_0004e1f2();
      return 1;
    }
    break;
  case 5:
    if ((&DAT_002e156d)[iVar5] != '\0') {
      uVar2 = FUN_0004e585();
      return uVar2;
    }
    break;
  case 6:
    if ((&DAT_002e156e)[iVar5] != '\0') {
      uVar2 = FUN_0004e66f();
      return uVar2;
    }
    break;
  case 7:
    if ((&DAT_002e156c)[iVar5] != '\0') {
      FUN_0004e4ad();
      return 1;
    }
    break;
  case 8:
    if ((&DAT_002e1571)[iVar5] != '\0') {
      FUN_0004f5b3(unaff_BX);
      return 1;
    }
    break;
  case 9:
    if ((&DAT_002e156f)[iVar5] != '\0') {
      uVar2 = FUN_0004e85c(1);
      return uVar2;
    }
    break;
  case 10:
    if ((&DAT_002e1570)[iVar5] != '\0') {
      FUN_0004ee2c();
      return 1;
    }
    break;
  case 0xb:
    FUN_0004ed3d();
    return 1;
  case 0xc:
    *(undefined4 *)(&DAT_002e0e15 + iVar5) = 0;
    return 1;
  case 0xd:
  case 0xe:
    if (((&DAT_002d33c5)
         [((uint)*(byte *)(&DAT_0019033b + param_1) * 0x55 + (uint)*(byte *)(&DAT_0019033b + in_CX))
          * 6] != '\f') &&
       ((&DAT_002d33c5)
        [((uint)*(byte *)(&DAT_0019033b + param_1) * 0x55 + (uint)*(byte *)(&DAT_0019033b + in_CX))
         * 6] != '\r')) {
      iVar5 = FUN_0001458c();
      return (ushort)(0 < iVar5);
    }
    FUN_000d7688(0);
    FUN_000da6fc();
    return 1;
  case 0xf:
  case 0x10:
    sVar3 = FUN_000728e9();
    if ((sVar3 == 0) || (iVar5 = FUN_00023868(), -1 < iVar5)) {
      iVar5 = FUN_000cae40();
      if (iVar5 != 0) {
        return *(ushort *)(iVar5 + 1);
      }
    }
    else if (extraout_ECX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
    }
    break;
  case 0x11:
    *(ushort *)(&DAT_002e0591 + iVar5) = param_2;
    return 1;
  case 0x12:
    if ((&DAT_002e1591)[iVar5 + (uint)param_2] != '\0') {
      uVar1 = 0x80;
      uVar4 = FUN_000b3788(0x80);
      FUN_000447fb(uVar1,uVar4);
      iVar6 = FUN_00077a5b();
      if (iVar6 != 0) {
        *(int *)(&DAT_002e1800 + iVar5) = *(int *)(&DAT_002e1800 + iVar5) + 1;
      }
      *(undefined4 *)(&DAT_002e142d + in_AL * 0x1508) = 0xc0;
      if ((int)in_AL != (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        return 1;
      }
      FUN_0006e9ab();
      return 1;
    }
    break;
  case 0x13:
    uVar1 = FUN_0008f924();
    uVar2 = FUN_00061d43(uVar1);
    return uVar2;
  case 0x14:
    FUN_0004f195();
    return 1;
  case 0x15:
    FUN_0004f3bc(unaff_BX);
    return 1;
  case 0x16:
    FUN_0004f4f1(unaff_BX);
    return 1;
  case 0x17:
    FUN_0004f552(unaff_BX);
    return 1;
  case 0x18:
    FUN_0004efd4();
    break;
  case 0x19:
    FUN_0004f87e(unaff_BX);
    return 1;
  case 0x1a:
    FUN_0004f41d(unaff_BX);
    return 1;
  default:
    FUN_000e7714(&DAT_0019cbac,s_UNKNOWN_GAME_ACTION___d_00165658,in_DX);
    FUN_000ddaf0(); /* LbErrorLog("input.cpp", line 2634, g_log_buf) */
    break;
  case 0x1c:
    if ((&DAT_002e156d)[iVar5] != '\0') {
      uVar2 = FUN_0004e60d();
      return uVar2;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_049160 (Ghidra: FUN_00049160)
 * Prototype: void sub_049160(void);
 * Address  : 0x49160 (Size: 483 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 7 -> 0x57f6b, 0x5ae20, 0x5afda, 0x5c82f, 0x5cf2d, 0x5dde9, 0x5ddee
 ******************************************************************************/
void FUN_00049160(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  
  if ((DAT_0019d0b8 & 1) != 0) {
    if ((DAT_0019d0b8 & 1) == 0) {
      return;
    }
    if ((DAT_0019d0b8 & 0x80) == 0) {
      return;
    }
  }
  iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
  cVar1 = (&DAT_0019d51a)[iVar2];
  if (cVar1 == '\x03') {
    puVar3 = (undefined4 *)auStack_c;
    if ((*(char *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar2)] + 0x1f) != '\x05') ||
       (puVar3 = (undefined4 *)auStack_c, DAT_0034b25b == '\0')) goto LAB_00049310;
    uStack_10 = 0x491d0;
    cVar1 = FUN_0005ae20();
    if (cVar1 != '\0') {
      DAT_0019d0b9 = DAT_0019d0b9 & 0xf7;
      (&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] =
           (&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 0xf7;
LAB_00049214:
      uStack_10 = 0x49219;
      FUN_0005afda();
      puVar3 = (undefined4 *)auStack_c;
      goto LAB_00049310;
    }
    DAT_0019d0b9 = DAT_0019d0b9 | 8;
    (&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] = (&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] | 8;
  }
  else {
    puVar3 = (undefined4 *)auStack_c;
    if ((((cVar1 == '\x02') || (puVar3 = (undefined4 *)auStack_c, cVar1 == '\x04')) ||
        (puVar3 = (undefined4 *)auStack_c, cVar1 == '\x05')) ||
       (puVar3 = (undefined4 *)auStack_c, cVar1 == '\x06')) goto LAB_00049310;
    if (DAT_0034b25b != '\0') {
      if (((&DAT_0019d51b)[iVar2] != '\x05') ||
         (puVar3 = (undefined4 *)auStack_c,
         *(short *)(&DAT_002e05bc + DAT_002f10ce._3_1_ * 0x1508) == 0)) {
        uStack_10 = 0x4927d;
        iVar2 = FUN_0005afda();
        puVar3 = (undefined4 *)auStack_c;
        if (iVar2 == 0) {
          cVar1 = (&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef];
          if (cVar1 == '\f') {
            uStack_10 = 0x492a3;
            FUN_0005c82f();
          }
          else {
            puVar3 = (undefined4 *)auStack_c;
            if ((cVar1 == '\x0f') || (puVar3 = (undefined4 *)auStack_c, cVar1 == '\x01'))
            goto LAB_00049310;
          }
          uStack_10 = 0;
          uStack_14 = 0;
          FUN_0005ddee();
          DAT_0034b25b = '\0';
          puVar3 = &uStack_14;
        }
      }
      goto LAB_00049310;
    }
    puVar3 = (undefined4 *)auStack_c;
    if (DAT_003db4fd == '\0') goto LAB_00049310;
    DAT_003db4fd = '\0';
    uStack_10 = 0x492fe;
    cVar1 = FUN_0005ae20();
    if (cVar1 != '\0') goto LAB_00049214;
  }
  uStack_10 = 0x49310;
  FUN_0005cf2d();
  puVar3 = (undefined4 *)auStack_c;
LAB_00049310:
  *(undefined4 *)((int)puVar3 + -4) = 0x49315;
  cVar1 = FUN_00057f6b();
  if (cVar1 != '\0') {
    *(undefined4 *)((int)puVar3 + -4) = 0x4933f;
    FUN_0005dde9();
  }
  return;
}

/******************************************************************************
 * Function : sub_049343 (Ghidra: FUN_00049343)
 * Prototype: longlong sub_049343(void);
 * Address  : 0x49343 (Size: 203 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x47bcd, 0x49426
 * Callees  : 2 -> 0x45fb9, 0x5ddee
 ******************************************************************************/
longlong FUN_00049343(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  int iVar3;
  uint *puVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  puVar4 = auStack_c;
  uVar2 = 2;
  iVar3 = 0;
  auStack_c[0] = in_EDX;
  while( true ) {
    if (6 < uVar2) {
      return (ulonglong)auStack_c[0] << 0x20;
    }
    uStack_10 = 0x49368;
    iVar1 = FUN_00045fb9();
    if (iVar1 != 0) break;
    uStack_10 = 0x493ba;
    iVar1 = FUN_00045fb9();
    if ((iVar1 != 0) && ((&DAT_003db4fc)[extraout_ECX_00] = 0, ((&DAT_002ed350)[iVar3] & 1) != 0)) {
      uStack_10 = 0;
      puVar4 = &uStack_14;
      uStack_14 = 0;
      FUN_0005ddee();
      goto LAB_000493a5;
    }
    iVar3 = iVar3 + 3;
    uVar2 = extraout_ECX_00 + 1;
  }
  (&DAT_003db4fc)[extraout_ECX] = 0;
  iVar1 = (int)DAT_002f10ce._3_1_;
  (&DAT_002ed34e)[iVar3] = *(undefined1 *)(*(int *)((int)&DAT_0019d100 + iVar1 * 0x4ef) + 1);
  (&DAT_002ed34f)[iVar3] = *(undefined1 *)(*(int *)((int)&DAT_0019d100 + iVar1 * 0x4ef) + 3);
  (&DAT_002ed350)[iVar3] = (&DAT_002ed350)[iVar3] | 1;
LAB_000493a5:
  return CONCAT44(*puVar4,1);
}

/******************************************************************************
 * Function : sub_049426 (Ghidra: FUN_00049426)
 * Prototype: void sub_049426(void);
 * Address  : 0x49426 (Size: 1203 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x462a3
 * Callees  : 20 -> 0x45f23, 0x45fb9, 0x46701, 0x4897f, 0x49343, 0x4991c, 0x499ce, 0x49eff, 0x52b58, 0x57fe4 ...
 ******************************************************************************/
void FUN_00049426(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_38 [8];
  
  piVar6 = aiStack_38 + 7;
  iVar3 = (uint)DAT_0019cba6 * DAT_003d9864 + -0x96;
  aiStack_38[6] = 0x49448;
  iVar2 = FUN_000dc150();
  if (((&DAT_0019d0c8)[DAT_002f10ce._3_1_ * 0x4ef] & 4) != 0) {
    aiStack_38[6] = 0x49471;
    iVar3 = FUN_00045fb9();
    if (iVar3 != 0) {
      aiStack_38[6] = 0;
      aiStack_38[5] = 0;
      FUN_0005ddee();
      DAT_003db518 = 0;
      DAT_003db5fc = 0;
      return;
    }
    DAT_003d98b4 = DAT_001991b8;
    if (DAT_003db5fc != '\x0e') {
      aiStack_38[6] = 0x494e8;
      iVar3 = FUN_000e6c1c();
      if (0x1c1 < (int)(iVar3 * (uint)DAT_0019cba6)) {
        return;
      }
    }
    aiStack_38[6] = 0;
    aiStack_38[5] = 0;
    FUN_0005ddee();
    DAT_003db5fc = 0;
    DAT_003db4fc = 0;
    return;
  }
  if ((DAT_0019d0b6 & 1) != 0) {
    aiStack_38[6] = 0x49563;
    iVar4 = FUN_00045fb9();
    if (iVar4 == 0) goto LAB_00049597;
    DAT_003db518 = 0;
    aiStack_38[6] = 0;
    piVar7 = aiStack_38 + 5;
    aiStack_38[5] = 0;
    goto LAB_00049882;
  }
LAB_00049597:
  aiStack_38[6] = 0x495a3;
  iVar4 = FUN_00045fb9();
  if (iVar4 != 0) {
    DAT_003db535 = 0;
    aiStack_38[6] = 0;
    piVar6 = aiStack_38 + 5;
    aiStack_38[5] = 0;
    FUN_0005ddee();
  }
  if ((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x04') {
    *(undefined4 *)((int)piVar6 + -4) = 0x49608;
    iVar4 = FUN_00045f23();
    if (iVar4 == 0) {
      if (DAT_0034b25b == '\0') {
        if (DAT_0034b25a != '\0') {
          iVar4 = iVar3 >> 0x1f;
          iVar5 = iVar2 + -0x38 >> 0x1f;
          iVar3 = ((int)((iVar3 + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2) * 3 + 1;
          iVar2 = ((int)((iVar2 + -0x38 + iVar5 * -4) - (uint)(iVar5 << 1 < 0)) >> 2) * 3 + 1;
          if ((((-1 < iVar3) && (iVar3 < 0xff)) && (-1 < iVar2)) && (iVar2 < 0xff)) {
            *(undefined4 *)((int)piVar6 + -4) = 0;
            *(undefined4 *)((int)piVar6 + -8) = 0;
            *(undefined4 *)((int)piVar6 + -0xc) = 0x496b7;
            FUN_0005ddee();
            DAT_0034b25a = '\0';
            piVar6 = (int *)((int)piVar6 + -8);
          }
        }
        goto LAB_0004972b;
      }
      DAT_0034b25b = '\0';
    }
    else {
      (&DAT_003db4fc)[aiStack_38[7]] = 0;
    }
    *(undefined4 *)((int)piVar6 + -4) = 0x4961b;
    FUN_000499ce();
  }
  else if ((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef] == '\x01') {
    if (DAT_003db50b == '\0') {
      *(undefined4 *)((int)piVar6 + -4) = 0x496ff;
      iVar3 = FUN_00045f23();
      if ((iVar3 != 0) &&
         ((&DAT_003db4fc)[aiStack_38[7]] = 0, (&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] != '\a'))
      {
        *(undefined4 *)((int)piVar6 + -4) = 0x4972b;
        FUN_0004991c();
      }
    }
    else if (((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02') ||
            ((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x05')) {
      DAT_003db50b = '\0';
      *(undefined4 *)((int)piVar6 + -4) = 0x496ee;
      FUN_0005b9b3();
    }
  }
LAB_0004972b:
  if (DAT_003db4fd != '\0') {
    DAT_003db4fd = '\0';
    *(undefined4 *)((int)piVar6 + -4) = 0x49744;
    cVar1 = FUN_0005ae20();
    if (cVar1 == '\0') {
      *(undefined4 *)((int)piVar6 + -4) = 0x4975c;
      FUN_0005cf2d();
    }
    else {
      *(undefined4 *)((int)piVar6 + -4) = 0x4974d;
      FUN_0005afda();
    }
  }
  switch((&DAT_0019d51a)[DAT_002f10ce._3_1_ * 0x4ef]) {
  case 1:
    *(undefined4 *)((int)piVar6 + -4) = 0x4978f;
    cVar1 = FUN_00052b58();
    if ((cVar1 == '\0') && ((DAT_0019d0b8 & 0x20) != 0)) {
      *(undefined4 *)((int)piVar6 + -4) = 0x497a6;
      FUN_0005d32c();
      *(undefined4 *)((int)piVar6 + -4) = 0x497ab;
      FUN_0005aee2();
      *(undefined4 *)((int)piVar6 + -4) = 0x497b5;
      FUN_0005cf2d();
    }
    *(undefined4 *)((int)piVar6 + -4) = 0x497bf;
    cVar1 = FUN_00057fe4();
    if (cVar1 == '\0') {
      if ((&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef] == '\x0f') {
        *(undefined4 *)((int)piVar6 + -4) = 0x497f3;
        FUN_00049eff();
      }
      else {
        *(undefined4 *)((int)piVar6 + -4) = 0x49827;
        iVar3 = FUN_0004897f();
        if (iVar3 == 0) {
          *(undefined4 *)((int)piVar6 + -4) = 0x49830;
          FUN_00049343();
        }
        *(undefined4 *)((int)piVar6 + -4) = 0x49835;
        FUN_00046701();
      }
    }
    break;
  case 2:
    if ((*(char *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)] +
                  0x1f) == '\x05') &&
       ((*(byte *)((&DAT_001b0a00)
                   [*(ushort *)
                     ((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + DAT_002f10ce._3_1_ * 0x4ef)]
                     + 100)] + 2) & 2) != 0)) {
      return;
    }
    *(undefined4 *)((int)piVar6 + -4) = 0;
    goto LAB_0004987e;
  case 3:
    *(undefined4 *)((int)piVar6 + -4) = 0;
LAB_0004987e:
    piVar7 = (int *)((int)piVar6 + -8);
    *(undefined4 *)((int)piVar6 + -8) = 0;
LAB_00049882:
    *(undefined4 *)((int)piVar7 + -4) = 0x4988c;
    FUN_0005ddee();
    break;
  case 4:
    *(undefined4 *)((int)piVar6 + -4) = 0x498b5;
    cVar1 = FUN_00052b58();
    if ((cVar1 != '\0') && ((DAT_0019d0b8 & 0x20) != 0)) {
      *(undefined4 *)((int)piVar6 + -4) = 0x498d4;
      FUN_0005c848();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0498d9 (Ghidra: FUN_000498d9)
 * Prototype: bool sub_0498d9(void);
 * Address  : 0x498d9 (Size: 67 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x4897f, 0x57fe4, 0x8a194, 0x8afd8
 * Callees  : 2 -> 0xdc150, 0xe8cc8
 ******************************************************************************/
bool FUN_000498d9(void)

{
  int iVar1;
  
  FUN_000dc150();
  iVar1 = FUN_000e8cc8();
  return iVar1 < 0x3a;
}

/******************************************************************************
 * Function : sub_04991c (Ghidra: FUN_0004991c)
 * Prototype: void sub_04991c(void);
 * Address  : 0x4991c (Size: 178 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x47bcd, 0x49426
 * Callees  : 4 -> 0x5afda, 0x5b645, 0x5c2e3, 0x5ddee
 ******************************************************************************/
void FUN_0004991c(void)

{
  byte bVar1;
  
  FUN_0005afda();
  bVar1 = DAT_0019d0b8 & 0x3f;
  DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
  DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 >> 5) << 6;
  if (((DAT_0019d0b6 & 1) != 0) || (0x140 < DAT_003d982c)) {
    bVar1 = FUN_0005b645();
    DAT_0019d0b8 = DAT_0019d0b8 & 0xbf;
    DAT_0019d0b8 = DAT_0019d0b8 | (bVar1 & 1) << 6;
  }
  FUN_0005ddee(0,0);
  FUN_0005c2e3();
  return;
}

