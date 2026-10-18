/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: magic.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 38
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_04e4ad (Ghidra: FUN_0004e4ad)
 * Prototype: undefined8 sub_04e4ad(void);
 * Address  : 0x4e4ad (Size: 216 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x235e8, 0x48c77
 * Callees  : 2 -> 0x6e9ab, 0x85890
 ******************************************************************************/
undefined8 FUN_0004e4ad(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint in_EAX;
  int iVar3;
  undefined4 in_EDX;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar3 = (in_EAX & 0xffff) * 0x1508;
  if (*(int *)(&DAT_002e0e11 + iVar3) == 0) {
    *(undefined4 *)(&DAT_002e0e11 + iVar3) = DAT_002e8bee;
    FUN_0006e9ab();
  }
  else {
    *(undefined4 *)(&DAT_002e0e11 + iVar3) = 0;
  }
  uVar1 = (&DAT_002e05b6)[(in_EAX & 0xffff) * 0xa84];
  while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]) {
    uVar2 = FUN_00085890();
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uVar2;
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX + 100)] + 0x1f);
  }
  uVar1 = (&DAT_002e05b8)[(in_EAX & 0xffff) * 0xa84];
  while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]) {
    uVar2 = FUN_00085890();
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX_00 + 100)] + 0xc4) = uVar2;
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX_00 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_04e585 (Ghidra: FUN_0004e585)
 * Prototype: undefined4 sub_04e585(void);
 * Address  : 0x4e585 (Size: 136 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 2 -> 0x49eff, 0x85450
 ******************************************************************************/
undefined4 FUN_0004e585(void)

{
  uint in_EAX;
  int iVar1;
  int extraout_ECX;
  int iVar2;
  
  if (((&DAT_0019d578)[(in_EAX & 0xffff) * 0x4ef] != '\x03') &&
     (iVar2 = (in_EAX & 0xffff) * 0x1508,
     10 < (uint)(DAT_002e8bee - *(int *)(&DAT_002e1a37 + iVar2)))) {
    iVar1 = FUN_00085450();
    if (iVar1 != 0) {
      *(undefined2 *)(&DAT_0019d506 + extraout_ECX) = *(undefined2 *)(iVar1 + 0x1b);
      *(undefined4 *)(&DAT_0019d508 + extraout_ECX) = *(undefined4 *)(iVar1 + 9);
      FUN_00049eff();
      *(int *)(&DAT_002e17dc + iVar2) = *(int *)(&DAT_002e17dc + iVar2) + 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04e60d (Ghidra: FUN_0004e60d)
 * Prototype: undefined4 sub_04e60d(void);
 * Address  : 0x4e60d (Size: 98 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x48c77
 * Callees  : 1 -> 0x49eff
 ******************************************************************************/
undefined4 FUN_0004e60d(void)

{
  uint in_EAX;
  int iVar1;
  int extraout_ECX;
  int in_EDX;
  
  iVar1 = (in_EAX & 0xffff) * 0x4ef;
  if ((((&DAT_0019d578)[iVar1] != '\x03') &&
      (10 < (uint)(DAT_002e8bee - *(int *)(&DAT_002e1a37 + (in_EAX & 0xffff) * 0x1508)))) &&
     (in_EDX != 0)) {
    *(undefined2 *)(&DAT_0019d506 + iVar1) = *(undefined2 *)(in_EDX + 0x1b);
    *(undefined4 *)(&DAT_0019d508 + iVar1) = *(undefined4 *)(in_EDX + 9);
    FUN_00049eff();
    *(int *)(&DAT_002e17dc + extraout_ECX) = *(int *)(&DAT_002e17dc + extraout_ECX) + 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04e66f (Ghidra: FUN_0004e66f)
 * Prototype: undefined4 sub_04e66f(void);
 * Address  : 0x4e66f (Size: 350 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 4 -> 0x23868, 0x4fc98, 0x51374, 0x6e538
 ******************************************************************************/
undefined4 FUN_0004e66f(void)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  undefined1 in_DL;
  int iVar3;
  int iVar4;
  undefined1 unaff_BL;
  int iVar5;
  
  iVar5 = (in_EAX & 0xff) * 0x1508;
  if (*(short *)(&DAT_002e0b61 + iVar5) == 0) {
    iVar5 = FUN_00023868();
    if (-1 < iVar5) {
      FUN_0004fc98();
      FUN_0006e538(3,0,3,0x100);
      return 1;
    }
    if (&DAT_0019d0c8 + (in_EAX & 0xff) * 0x4ef == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
      FUN_00051374();
    }
  }
  else {
    iVar3 = *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar5] * 4) >> 0x1f;
    iVar3 = (*(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar5] * 4) + iVar3 * -4) -
            (uint)(iVar3 << 1 < 0);
    iVar4 = iVar3 >> 0x1f;
    iVar4 = ((iVar3 >> 2) + iVar4 * -4) - (uint)(iVar4 << 1 < 0);
    iVar2 = iVar4 >> 2;
    iVar3 = DAT_002e8bee - *(int *)(&DAT_002e0b5d + iVar5);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    iVar1 = *(int *)(&DAT_0018f82f + (uint)(byte)(&DAT_002e0b63)[iVar5] * 4);
    *(int *)(&DAT_002e0b5d + iVar5) =
         DAT_002e8bee - *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar5] * 4);
    *(int *)(&DAT_002e0b5d + iVar5) =
         *(int *)(&DAT_002e0b5d + iVar5) -
         (iVar1 - iVar3 / (int)(CONCAT44(iVar4 >> 0x1f,iVar2) / (longlong)iVar1));
    if (DAT_002e8bee - *(int *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + iVar5)] + 9) <
        *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar5] * 4)) {
      (&DAT_002e0593)[iVar5] = (&DAT_002e0593)[iVar5] | 4;
      (&DAT_002e0b64)[iVar5] = in_DL;
      (&DAT_002e0b65)[iVar5] = unaff_BL;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04e7cd (Ghidra: FUN_0004e7cd)
 * Prototype: void sub_04e7cd(void);
 * Address  : 0x4e7cd (Size: 143 bytes)
 * Module   : magic.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4fdac
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0004e7cd(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = in_EAX * 0x1508;
  iVar4 = *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4) >> 0x1f;
  iVar4 = (*(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4) + iVar4 * -4) -
          (uint)(iVar4 << 1 < 0);
  iVar5 = iVar4 >> 0x1f;
  iVar5 = ((iVar4 >> 2) + iVar5 * -4) - (uint)(iVar5 << 1 < 0);
  iVar3 = iVar5 >> 2;
  iVar4 = DAT_002e8bee - *(int *)(&DAT_002e0b5d + iVar2);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  iVar1 = *(int *)(&DAT_0018f82f + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
  *(int *)(&DAT_002e0b5d + iVar2) =
       DAT_002e8bee - *(int *)(&DAT_002eafb5 + (uint)(byte)(&DAT_002e0b63)[iVar2] * 4);
  *(int *)(&DAT_002e0b5d + iVar2) =
       *(int *)(&DAT_002e0b5d + iVar2) -
       (iVar1 - iVar4 / (int)(CONCAT44(iVar5 >> 0x1f,iVar3) / (longlong)iVar1));
  return;
}

/******************************************************************************
 * Function : sub_04e85c (Ghidra: FUN_0004e85c)
 * Prototype: undefined4 sub_04e85c(undefined4 param_1);
 * Address  : 0x4e85c (Size: 678 bytes)
 * Module   : magic.cpp [direct_file_string_xref]
 * OrigLine : magic.cpp:443
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 11 -> 0x43f07, 0x5003d, 0x63b6d, 0x64a5f, 0x6e9ab, 0x827fc, 0xb28e8, 0xb3b58, 0xc3780, 0xc38a4 ...
 * Strings  :
 *   - 0x165933: "magic.cpp"
 ******************************************************************************/
undefined4 FUN_0004e85c(undefined4 param_1)

{
  ushort uVar1;
  byte *pbVar2;
  byte in_AL;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 in_CL;
  int extraout_ECX;
  short in_DX;
  int extraout_EDX;
  undefined1 unaff_BL;
  int iVar8;
  uint uVar9;
  undefined1 local_14;
  
  uVar9 = (uint)in_AL;
  iVar8 = uVar9 * 0x1508;
  cVar3 = FUN_0005003d(param_1,in_DX * 0x100 + 0x80);
  if (cVar3 == '\0') {
    if (in_AL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_0006e9ab();
    }
LAB_0004eafb:
    uVar7 = 0;
  }
  else {
    local_14 = (undefined1)in_DX;
    if (((&DAT_002e0e0d)[uVar9 * 0x542] == 0) && (*(short *)(&DAT_0019d504 + uVar9 * 0x4ef) == 0)) {
      iVar6 = FUN_00043f07();
      if (iVar6 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("magic.cpp", line 443, g_log_buf) */
        goto LAB_0004eafb;
      }
      (&DAT_002e0e0d)[uVar9 * 0x542] = DAT_002e8bee;
      (&DAT_002e0e0c)[iVar8] = in_CL;
      (&DAT_002e0e0a)[iVar8] = local_14;
      (&DAT_002e0e0b)[iVar8] = unaff_BL;
      *(undefined2 *)(&DAT_0019d504 + uVar9 * 0x4ef) = *(undefined2 *)(iVar6 + 0x1b);
      uVar5 = FUN_000b28e8();
      *(undefined2 *)(iVar6 + 0x11) = uVar5;
      FUN_000c3780();
    }
    else {
      (&DAT_002e0e0d)[uVar9 * 0x542] = DAT_002e8bee;
      (&DAT_002e0e0a)[iVar8] = local_14;
      (&DAT_002e0e0b)[iVar8] = unaff_BL;
      FUN_000c38a4();
      uVar1 = (&DAT_002e05b6)[extraout_EDX * 0xa84];
      while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
        if (((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) && (pbVar2[7] != 0x43)) &&
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0xad) & 8) != 0)) {
          if (pbVar2[7] == 0xe) {
            bVar4 = pbVar2[8];
          }
          else {
            bVar4 = pbVar2[7];
          }
          if ((&DAT_0018c4c8)[(uint)bVar4 * 0x29] == '\0') {
            if (pbVar2[7] == 0xe) {
              bVar4 = pbVar2[8];
            }
            else {
              bVar4 = pbVar2[7];
            }
            if (bVar4 != 0x27) {
              if (pbVar2[7] == 0xe) {
                bVar4 = pbVar2[8];
              }
              else {
                bVar4 = pbVar2[7];
              }
              if (bVar4 != 0x74) goto LAB_0004ea52;
            }
          }
          cVar3 = FUN_000827fc();
          if (cVar3 == '\0') {
            FUN_00063b6d();
            *(byte *)(extraout_ECX + 0xad) = *(byte *)(extraout_ECX + 0xad) & 0xf7;
          }
          else {
            if (pbVar2[7] == 0xe) {
              bVar4 = pbVar2[8];
            }
            else {
              bVar4 = pbVar2[7];
            }
            if (bVar4 != 0x27) {
              if (pbVar2[7] == 0xe) {
                bVar4 = pbVar2[8];
              }
              else {
                bVar4 = pbVar2[7];
              }
              if (bVar4 != 0x74) {
                cVar3 = FUN_00064a5f();
                if (cVar3 == '\0') {
                  FUN_00063b6d();
                  goto LAB_0004ea52;
                }
              }
            }
            FUN_000b3b58();
            pbVar2[8] = 0x27;
          }
        }
LAB_0004ea52:
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}

/******************************************************************************
 * Function : sub_04eb02 (Ghidra: FUN_0004eb02)
 * Prototype: undefined8 sub_04eb02(void);
 * Address  : 0x4eb02 (Size: 571 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x235e8
 * Callees  : 8 -> 0x10434, 0x23868, 0x4ed3d, 0x51374, 0x64a5f, 0x827fc, 0xb3b58, 0xdc440
 ******************************************************************************/
undefined8 FUN_0004eb02(void)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  uint in_EAX;
  int iVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 in_EDX;
  
  iVar6 = in_EAX * 0x1508;
  iVar8 = DAT_002e8bee - (&DAT_002e0e0d)[in_EAX * 0x542];
  if ((iVar8 % DAT_002eaffd == 0) &&
     (((&DAT_002d33ca)
       [((&DAT_0019033b)[(byte)(&DAT_002e0e0a)[iVar6]] +
        (&DAT_0019033b)[(byte)(&DAT_002e0e0b)[iVar6]] * 0x55) * 6] & 7) != in_EAX)) {
    iVar7 = FUN_00023868();
    iVar8 = extraout_ECX;
    if (iVar7 < 0) {
      if (in_EAX == (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
      iVar7 = FUN_0004ed3d();
      goto LAB_0004e855;
    }
  }
  iVar7 = iVar8 / 0x10;
  if (iVar8 % 0x10 == 0) {
    iVar8 = *(int *)(&DAT_002eb001 + (uint)(byte)(&DAT_002e0e0c)[iVar6] * 4);
    sVar5 = (ushort)(byte)(&DAT_002e0e0a)[iVar6] * 0x100 + 0x80;
    iVar7 = (uint)(byte)(&DAT_002e0e0b)[iVar6] * 0x100 + 0x80;
    uVar1 = (&DAT_002e05b6)[in_EAX * 0xa84];
    while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
      if ((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) && (pbVar2[7] != 0x43)) {
        iVar6 = (&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)];
        if ((*(byte *)(iVar6 + 0xad) & 8) == 0) {
LAB_0004ec33:
          if (pbVar2[7] == 0xe) {
            bVar3 = pbVar2[8];
          }
          else {
            bVar3 = pbVar2[7];
          }
          if ((&DAT_0018c4c8)[(uint)bVar3 * 0x29] != '\0') {
            if ((*(byte *)(iVar6 + 0xad) & 8) == 0) {
              iVar7 = FUN_000dc440(sVar5);
              if (iVar8 << 8 <= iVar7) goto LAB_0004ecd5;
            }
            if (pbVar2[7] == 0x1a) {
              FUN_00010434();
            }
            cVar4 = FUN_000827fc();
            if (cVar4 != '\0') {
              cVar4 = FUN_00064a5f();
              if (cVar4 != '\0') {
                FUN_000b3b58();
                pbVar2[8] = 0x27;
                *(byte *)(iVar6 + 0xad) = *(byte *)(iVar6 + 0xad) | 8;
              }
            }
          }
        }
        else if ((*(byte *)(iVar6 + 0xad) & 8) != 0) {
          if (pbVar2[7] == 0xe) {
            bVar3 = pbVar2[8];
          }
          else {
            bVar3 = pbVar2[7];
          }
          if ((&DAT_0018c4c8)[(uint)bVar3 * 0x29] != '\0') goto LAB_0004ec33;
        }
      }
LAB_0004ecd5:
      iVar7 = (&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)];
      uVar1 = *(ushort *)(iVar7 + 0x1f);
    }
  }
LAB_0004e855:
  return CONCAT44(in_EDX,iVar7);
}

/******************************************************************************
 * Function : sub_04ed3d (Ghidra: FUN_0004ed3d)
 * Prototype: void sub_04ed3d(void);
 * Address  : 0x4ed3d (Size: 239 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x48c77, 0x4eb02, 0x4fdac, 0xdd624, 0xdd6c8
 * Callees  : 2 -> 0x63b6d, 0xc3828
 ******************************************************************************/
void FUN_0004ed3d(void)

{
  byte *pbVar1;
  ushort uVar2;
  byte bVar3;
  int in_EAX;
  int extraout_EDX;
  byte *extraout_EDX_00;
  byte *pbVar4;
  
  if ((&DAT_002e0e0d)[in_EAX * 0x542] != 0) {
    FUN_000c3828();
    *(undefined4 *)(extraout_EDX + 0x884) = 0;
    uVar2 = (&DAT_002e05b6)[in_EAX * 0xa84];
    while (pbVar4 = (&DAT_001ae9fc)[uVar2], DAT_001ae9fc < pbVar4) {
      if (((((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0xad) & 8) != 0) &&
           (pbVar1 = (byte *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0xad),
           *pbVar1 = *pbVar1 & 0xf7, (*pbVar4 & 0x10) == 0)) && ((pbVar4[1] & 2) == 0)) &&
         (pbVar4[7] != 0x43)) {
        if (pbVar4[7] == 0xe) {
          bVar3 = pbVar4[8];
        }
        else {
          bVar3 = pbVar4[7];
        }
        if (bVar3 != 0x8b) {
          if (pbVar4[7] == 0xe) {
            bVar3 = pbVar4[8];
          }
          else {
            bVar3 = pbVar4[7];
          }
          if (bVar3 != 0x27) {
            if (pbVar4[7] == 0xe) {
              bVar3 = pbVar4[8];
            }
            else {
              bVar3 = pbVar4[7];
            }
            if (bVar3 != 0x74) goto LAB_0004edcb;
          }
          FUN_00063b6d();
          pbVar4 = extraout_EDX_00;
        }
      }
LAB_0004edcb:
      uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x1f);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04ee2c (Ghidra: FUN_0004ee2c)
 * Prototype: void sub_04ee2c(void);
 * Address  : 0x4ee2c (Size: 350 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 5 -> 0x23868, 0x44dae, 0x5003d, 0x51374, 0x6e9ab
 ******************************************************************************/
void FUN_0004ee2c(void)

{
  char in_AL;
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  uint uVar3;
  int unaff_EBX;
  undefined4 uVar4;
  
  uVar4 = 0;
  cVar1 = FUN_0005003d(0);
  if (cVar1 == '\0') {
    if (in_AL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_0006e9ab();
    }
  }
  else {
    uVar3 = (*(uint *)((int)&DAT_00279203 +
                      ((&DAT_0019033b)[in_EDX] * 3 + (&DAT_0019033b)[unaff_EBX] * 0x300 + 0x101) * 5
                      + 1) & 0x3fffff) >> 0xb;
    while (((short)uVar3 != 0 &&
           ((*(char *)((&DAT_001ae9fc)[uVar3] + 0x1f) != '\x03' ||
            (*(char *)((&DAT_001ae9fc)[uVar3] + 0x1a) != '.'))))) {
      uVar3 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar3] + 2);
    }
    if ((short)uVar3 == 0) {
      if (in_AL != DAT_002eb543) {
        iVar2 = FUN_00023868();
        if (iVar2 < 0) {
          if (in_AL != (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
            return;
          }
          FUN_00051374();
          return;
        }
        *(int *)(&DAT_002e17e0 + extraout_ECX * 0x1508) =
             *(int *)(&DAT_002e17e0 + extraout_ECX * 0x1508) + 1;
      }
      FUN_00044dae(uVar4,(*(short *)(&DAT_0019033b + in_EDX) * 3 + 1) * 0x100,0);
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04ef8a (Ghidra: FUN_0004ef8a)
 * Prototype: undefined4 sub_04ef8a(void);
 * Address  : 0x4ef8a (Size: 74 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdf760
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0004ef8a(void)

{
  char in_AL;
  uint uVar1;
  int in_EDX;
  int unaff_EBX;
  
  if (((*(byte *)((int)&DAT_00279203 + (unaff_EBX * 0x100 + in_EDX) * 5) & 0x10) == 0) &&
     ((in_AL == DAT_002eb543 ||
      (uVar1 = CONCAT11((&DAT_002d33ca)
                        [((&DAT_0019033b)[in_EDX] + (&DAT_0019033b)[unaff_EBX] * 0x55) * 6],in_AL) &
               0xffff07ff, (char)(uVar1 >> 8) == (char)uVar1)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_04efd4 (Ghidra: FUN_0004efd4)
 * Prototype: void sub_04efd4(void);
 * Address  : 0x4efd4 (Size: 333 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5eb8d
 * Callees  : 5 -> 0x24998, 0x4fd30, 0x64b0c, 0x6e9ab, 0xb3b10
 ******************************************************************************/
void FUN_0004efd4(void)

{
  ushort uVar1;
  byte bVar2;
  uint in_EAX;
  int iVar3;
  byte *extraout_ECX;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = (in_EAX & 0xff) * 0x1508;
  if (*(int *)(&DAT_002e0e15 + iVar5) == 0) {
    iVar3 = FUN_0004fd30();
    if (iVar3 != 0) {
      uVar1 = (&DAT_002e05b6)[(in_EAX & 0xff) * 0xa84];
      *(undefined4 *)(&DAT_002e0e15 + iVar5) = DAT_002e8bee;
      while (pbVar4 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar4) {
        if (((*pbVar4 & 0x10) == 0) && ((pbVar4[1] & 2) == 0)) {
          if (pbVar4[7] == 0xe) {
            bVar2 = pbVar4[8];
          }
          else {
            bVar2 = pbVar4[7];
          }
          if (bVar2 != 0x2b) {
            if (pbVar4[7] == 0xe) {
              bVar2 = pbVar4[8];
            }
            else {
              bVar2 = pbVar4[7];
            }
            if (bVar2 != 0x2a) {
              if (pbVar4[7] == 0xe) {
                bVar2 = pbVar4[8];
              }
              else {
                bVar2 = pbVar4[7];
              }
              if (bVar2 != 0x29) {
                if (pbVar4[7] == 0xe) {
                  bVar2 = pbVar4[8];
                }
                else {
                  bVar2 = pbVar4[7];
                }
                if ((bVar2 != 0x28) && (pbVar4[7] != 0x43)) {
                  FUN_00024998();
                  FUN_000b3b10();
                  FUN_00064b0c();
                  *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x82) =
                       0xffffffff;
                  pbVar4 = extraout_ECX;
                }
              }
            }
          }
        }
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)] + 0x1f);
      }
      FUN_0006e9ab();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f121 (Ghidra: FUN_0004f121)
 * Prototype: void sub_04f121(void);
 * Address  : 0x4f121 (Size: 116 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x235e8
 * Callees  : 1 -> 0x63b6d
 ******************************************************************************/
void FUN_0004f121(void)

{
  ushort uVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  uint extraout_EDX;
  uint uVar4;
  
  iVar3 = (in_EAX & 0xffff) * 0x1508;
  if (DAT_002ed40b < (uint)(DAT_002e8bee - *(int *)(&DAT_002e0e15 + iVar3))) {
    *(undefined4 *)(&DAT_002e0e15 + iVar3) = 0;
    uVar1 = (&DAT_002e05b6)[(in_EAX & 0xffff) * 0xa84];
    while (uVar4 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar4) {
      if (*(char *)(uVar4 + 7) == '\x0e') {
        cVar2 = *(char *)(uVar4 + 8);
      }
      else {
        cVar2 = *(char *)(uVar4 + 7);
      }
      if (cVar2 == '4') {
        FUN_00063b6d();
        uVar4 = extraout_EDX;
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar4 + 100)] + 0x1f);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f195 (Ghidra: FUN_0004f195)
 * Prototype: void sub_04f195(void);
 * Address  : 0x4f195 (Size: 551 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 11 -> 0x23e65, 0x24998, 0x43f07, 0x442ca, 0x4fd30, 0x5003d, 0x6e538, 0x6e9ab, 0x81c10, 0xb28e8 ...
 ******************************************************************************/
void FUN_0004f195(void)

{
  byte in_AL;
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int extraout_ECX;
  byte *pbVar5;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  short in_DX;
  undefined1 local_20;
  
  cVar1 = FUN_0005003d(0,in_DX * 0x100 + 0x80,0);
  if ((cVar1 == '\0') || (iVar3 = FUN_0004fd30(), iVar3 == 0)) {
    if (in_AL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_0006e9ab();
    }
  }
  else {
    iVar3 = FUN_000442ca();
    if (iVar3 != 0) {
      sVar2 = FUN_000b28e8();
      *(short *)(extraout_ECX + 0x11) = sVar2 + 0x80;
      local_20 = (undefined1)in_ECX;
      *(undefined1 *)(extraout_ECX + 0x19) = local_20;
      *(undefined1 *)(extraout_ECX + 0x16) = 2;
      *(undefined4 *)(&DAT_002e142d + *(char *)(extraout_ECX + 6) * 0x1508) = 0x100;
      iVar3 = *(int *)(&DAT_002eb131 + in_ECX * 4);
      FUN_00023e65();
      iVar4 = FUN_00043f07();
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) | 1;
        *(undefined1 *)(iVar4 + 0x13) = local_20;
      }
      for (pbVar5 = (&DAT_001ae9fc)[DAT_002e6eb6]; DAT_001ae9fc < pbVar5;
          pbVar5 = (&DAT_001ae9fc)[*(ushort *)(pbVar5 + 0x67)]) {
        if (((((*pbVar5 & 0x10) == 0) && ((pbVar5[1] & 2) == 0)) &&
            ((int)(char)pbVar5[6] != (uint)in_AL)) &&
           (((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0xac) & 4) == 0 &&
            (iVar4 = FUN_000dc440(), pbVar5 = extraout_ECX_00, iVar4 < (iVar3 << 8) / 2)))) {
          FUN_00081c10();
          pbVar5 = extraout_ECX_01;
        }
      }
      FUN_00024998();
      FUN_0006e538(3,0,2,0x100);
      *(undefined4 *)(&DAT_0019d5ab + (uint)in_AL * 0x4ef) = DAT_002e8bee;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f3bc (Ghidra: FUN_0004f3bc)
 * Prototype: void sub_04f3bc(void);
 * Address  : 0x4f3bc (Size: 97 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 4 -> 0x4fd30, 0x6e538, 0x717de, 0x720ce
 ******************************************************************************/
void FUN_0004f3bc(void)

{
  int iVar1;
  
  iVar1 = FUN_000720ce();
  if (iVar1 == 0) {
    iVar1 = FUN_0004fd30();
    if (iVar1 != 0) {
      FUN_0006e538(3,0,2,0x100);
      FUN_000717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f41d (Ghidra: FUN_0004f41d)
 * Prototype: void sub_04f41d(void);
 * Address  : 0x4f41d (Size: 212 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 7 -> 0x4fd30, 0x5003d, 0x502a9, 0x6e538, 0x6e9ab, 0x717de, 0x720ce
 ******************************************************************************/
void FUN_0004f41d(void)

{
  char in_AL;
  char cVar1;
  int iVar2;
  int in_EDX;
  
  cVar1 = FUN_0005003d(0);
  if ((cVar1 == '\0') || (iVar2 = FUN_000502a9(), iVar2 == 0)) {
    if (in_AL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_0006e9ab();
    }
  }
  else {
    iVar2 = FUN_000720ce();
    if (((iVar2 == 0) && (iVar2 = FUN_0004fd30(), iVar2 != 0)) &&
       ((*(char *)(in_EDX + 0x1f) != '\x05' || (*(char *)(in_EDX + 0x1a) != '\a')))) {
      FUN_0006e538(3,0,2,0x100);
      FUN_000717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f4f1 (Ghidra: FUN_0004f4f1)
 * Prototype: void sub_04f4f1(void);
 * Address  : 0x4f4f1 (Size: 97 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 4 -> 0x4fd30, 0x6e538, 0x717de, 0x720ce
 ******************************************************************************/
void FUN_0004f4f1(void)

{
  int iVar1;
  
  iVar1 = FUN_000720ce();
  if (iVar1 == 0) {
    iVar1 = FUN_0004fd30();
    if (iVar1 != 0) {
      FUN_0006e538(3,0,2,0x100);
      FUN_000717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f552 (Ghidra: FUN_0004f552)
 * Prototype: void sub_04f552(void);
 * Address  : 0x4f552 (Size: 97 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 4 -> 0x4fd30, 0x6e538, 0x717de, 0x720ce
 ******************************************************************************/
void FUN_0004f552(void)

{
  int iVar1;
  
  iVar1 = FUN_000720ce();
  if (iVar1 == 0) {
    iVar1 = FUN_0004fd30();
    if (iVar1 != 0) {
      FUN_0006e538(3,0,2,0x100);
      FUN_000717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04f5b3 (Ghidra: FUN_0004f5b3)
 * Prototype: void sub_04f5b3(void);
 * Address  : 0x4f5b3 (Size: 139 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 3 -> 0x4fd30, 0x6e538, 0x717de
 ******************************************************************************/
void FUN_0004f5b3(void)

{
  int iVar1;
  int in_EDX;
  
  if ((int)*(short *)(in_EDX + 0x5e) <
      (int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EDX + 0x1a) * 0x73] *
            (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x23) * 0x23) / 100 +
      (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EDX + 0x1a) * 0x73]) {
    iVar1 = FUN_0004fd30();
    if (iVar1 != 0) {
      FUN_0006e538(3,0,2,0x100);
      FUN_000717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e (Ghidra: FUN_0004f63e)
 * Prototype: void dk_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e(void);
 * Address  : 0x4f63e (Size: 576 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : String 'XXXXOXXXXXXXX XXXXXXXO OXXXXOXO OXOXXOXO OXOXXXX   XXXX X   '
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 8 -> 0x14afe, 0x23de2, 0x4fd30, 0x5003d, 0x6e9ab, 0x82828, 0xd7688, 0xda6fc
 * Strings  :
 *   - 0x17c924: "XXXXOXXXXXXXX XXXXXXXO OXXXXOXO OXOXXOXO OXOXXXX   XXXX X   X XO O   O O         "
 ******************************************************************************/
void FUN_0004f63e(void)

{
  char in_AL;
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int *piVar4;
  bool bVar5;
  int aiStack_6c [5];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_20;
  
  piVar4 = aiStack_6c + 2;
  aiStack_6c[2] = 0;
  cVar1 = FUN_0005003d();
  if (cVar1 == '\0') {
    cVar1 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
    piVar4 = aiStack_6c + 2;
  }
  else {
    iVar2 = FUN_0004fd30();
    if (iVar2 == 0) {
      return;
    }
    local_54 = (&DAT_0019033b)[in_EDX] + -1;
    local_2c = (&DAT_0019033b)[unaff_EBX] + -1;
    local_58 = local_2c * 0x1fe;
    local_44 = local_2c * 0xf00;
    local_38 = local_54 * 0xf;
    aiStack_6c[4] = local_54 * 6;
    aiStack_6c[3] = local_54 * 3;
    local_48 = (&DAT_0019033b)[in_EDX] + 2;
    local_20 = 0;
    local_40 = in_ECX * 9;
    local_4c = (&DAT_0019033b)[unaff_EBX] + 2;
    for (; local_2c < local_4c; local_2c = local_2c + 1) {
      if ((local_2c < 1) || (0x54 < local_2c)) {
        local_20 = local_20 + 3;
      }
      else {
        local_3c = aiStack_6c[4] + local_58;
        local_28 = local_20 + local_40;
        iVar2 = local_38 + local_44;
        for (local_50 = local_54; local_50 < local_48; local_50 = local_50 + 1) {
          if ((((0 < local_50) && (local_50 < 0x55)) &&
              ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) != 0)) &&
             (((*(byte *)((int)&DAT_00279203 + iVar2) & 0x43) == 0 &&
              (uVar3 = (uint)(byte)(&DAT_002d33c5)[local_3c], uVar3 != 0)))) {
            if (s_XXXXOXXXXXXXX_XXXXXXXO_OXXXXOXO_O_0017c924[local_28] == 'O') {
              if ((&DAT_001921cf)[uVar3 * 0x16] != '\x03') {
                if (uVar3 != 2) {
                  bVar5 = uVar3 == 3;
                  goto LAB_0004f705;
                }
                goto LAB_0004f707;
              }
              *(undefined4 *)((int)piVar4 + -4) = 0;
              *(undefined4 *)((int)piVar4 + -8) = 0x4f7b8;
              FUN_000d7688();
              *(undefined4 *)((int)piVar4 + -8) = 0x4f7c5;
              FUN_000da6fc();
              piVar4 = (int *)((int)piVar4 + -4);
            }
            else {
              bVar5 = s_XXXXOXXXXXXXX_XXXXXXXO_OXXXXOXO_O_0017c924[local_28] == ' ';
LAB_0004f705:
              if (bVar5) {
LAB_0004f707:
                *(undefined4 *)((int)piVar4 + -4) = 0x4f717;
                FUN_00014afe();
                *(undefined4 *)((int)piVar4 + -4) = 0x4f724;
                FUN_00082828();
                *(undefined4 *)((int)piVar4 + -4) = 0x4f731;
                FUN_00023de2();
              }
            }
          }
          local_3c = local_3c + 6;
          local_28 = local_28 + 1;
          local_20 = local_20 + 1;
          iVar2 = iVar2 + 0xf;
        }
      }
      local_58 = local_58 + 0x1fe;
      local_44 = local_44 + 0xf00;
    }
    cVar1 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
  }
  if (in_AL == cVar1) {
    *(undefined4 *)((int)piVar4 + -4) = 0x4f87a;
    FUN_0006e9ab();
  }
  return;
}

/******************************************************************************
 * Function : sub_04f87e (Ghidra: FUN_0004f87e)
 * Prototype: void sub_04f87e(void);
 * Address  : 0x4f87e (Size: 177 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x48c77, 0x504ff, 0x5f6c5
 * Callees  : 6 -> 0x4fd30, 0x5003d, 0x502a9, 0x6e538, 0x717de, 0x720ce
 ******************************************************************************/
void FUN_0004f87e(void)

{
  char in_AL;
  char cVar1;
  int iVar2;
  int in_EDX;
  
  cVar1 = FUN_0005003d(0);
  if ((cVar1 == '\0') || (iVar2 = FUN_000502a9(), iVar2 == 0)) {
    if (in_AL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_0006e9ab();
    }
    return;
  }
  iVar2 = FUN_000720ce();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_0004fd30();
  if (iVar2 == 0) {
    return;
  }
  FUN_000717de();
  *(char *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xb6) = in_AL;
  FUN_0006e538(3,0,3,0x100);
  return;
}

/******************************************************************************
 * Function : sub_04f92f (Ghidra: FUN_0004f92f)
 * Prototype: void sub_04f92f(void);
 * Address  : 0x4f92f (Size: 300 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x4fd30, 0x6e9ab, 0x8608c
 ******************************************************************************/
void FUN_0004f92f(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int *piVar4;
  byte bVar5;
  int aiStack_30 [5];
  byte local_1c;
  
  bVar5 = 0;
  aiStack_30[3] = DAT_002e8bee + DAT_002ee894;
  if ((DAT_002ed402 == 0) && (aiStack_30[4] = aiStack_30[3], iVar2 = FUN_0004fd30(), iVar2 != 0)) {
    DAT_002ed402 = DAT_002e8bee;
    DAT_002ed40a = local_1c;
    DAT_002ee89c = *(undefined4 *)
                    ((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[extraout_ECX * 0xa84]] + 0xd);
    (&DAT_002ee8a0)[(uint)bVar5 * -4] =
         *(undefined2 *)
          ((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[extraout_ECX * 0xa84]] + 0x11 + (uint)bVar5 * -8)
    ;
    uVar3 = (&DAT_001ae9fc)[DAT_002e6eb6];
    piVar4 = aiStack_30 + 3;
    while (DAT_001ae9fc < uVar3) {
      uVar1 = (&DAT_001ae9fc)[*(ushort *)(uVar3 + 0x67)];
      iVar2 = (&DAT_001b0a00)[*(ushort *)(uVar3 + 100)];
      if ((*(byte *)(iVar2 + 0xad) & 2) == 0) {
        if ((int)*(char *)(uVar3 + 6) == (uint)local_1c) {
          *(int *)(iVar2 + 0x2ef) = aiStack_30[3];
          aiStack_30[3] = aiStack_30[3] + DAT_002ed40f;
          uVar3 = uVar1;
        }
        else {
          *(int *)(iVar2 + 0x2ef) = aiStack_30[3];
          aiStack_30[4] = aiStack_30[4] + DAT_002ed413;
          uVar3 = uVar1;
        }
      }
      else {
        *(undefined4 *)((int)piVar4 + -4) = 0;
        *(undefined4 *)((int)piVar4 + -8) = 1;
        *(undefined4 *)((int)piVar4 + -0xc) = 0x4fa32;
        FUN_0008608c();
        uVar3 = uVar1;
        piVar4 = (int *)((int)piVar4 + -8);
      }
    }
    iVar2 = aiStack_30[4];
    if (aiStack_30[4] <= aiStack_30[3]) {
      iVar2 = aiStack_30[3];
    }
    DAT_002ed406 = iVar2 + DAT_002ee898;
    *(undefined4 *)((int)piVar4 + -4) = 0x4fa56;
    FUN_0006e9ab();
  }
  return;
}

/******************************************************************************
 * Function : sub_04fa5b (Ghidra: FUN_0004fa5b)
 * Prototype: int sub_04fa5b(void);
 * Address  : 0x4fa5b (Size: 150 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5542b
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_0004fa5b(void)

{
  int iVar1;
  byte in_DL;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (4 < in_DL) {
    if (in_DL < 6) {
      if (*(ushort *)(&DAT_002e0b61 + DAT_002f10ce._3_1_ * 0x1508) != 0) {
        iVar1 = DAT_002e8bee -
                *(int *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + DAT_002f10ce._3_1_ * 0x1508)] +
                        9);
        iVar2 = *(int *)(&DAT_002eafb5 +
                        (uint)(byte)(&DAT_002e0b63)[DAT_002f10ce._3_1_ * 0x1508] * 4) + 8;
      }
    }
    else if ((in_DL == 6) && ((&DAT_002e0e0d)[DAT_002f10ce._3_1_ * 0x542] != 0)) {
      iVar1 = DAT_002e8bee - (&DAT_002e0e0d)[DAT_002f10ce._3_1_ * 0x542];
      iVar2 = DAT_002eaffd;
    }
  }
  if (iVar2 != 0) {
    return (iVar1 << 8) / iVar2;
  }
  return -1;
}

/******************************************************************************
 * Function : sub_04faf1 (Ghidra: FUN_0004faf1)
 * Prototype: int sub_04faf1(void);
 * Address  : 0x4faf1 (Size: 231 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc599c
 * Callees  : 3 -> 0x43f07, 0x444a9, 0x5102d
 ******************************************************************************/
int FUN_0004faf1(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int local_1c;
  
  iVar2 = in_EDX * 0x1508;
  local_1c = 0;
  if (*(short *)(&DAT_002e1a45 + iVar2) != *(short *)(in_EAX + 0x1b)) {
    *(undefined2 *)(&DAT_002e1a45 + iVar2) = *(undefined2 *)(in_EAX + 0x1b);
    iVar1 = *(int *)(in_EAX + 0x13) >> 0x1f;
    iVar1 = ((int)((*(int *)(in_EAX + 0x13) + iVar1 * -4) - (uint)(iVar1 << 1 < 0)) >> 2) + 1;
    if (iVar1 < 100) {
      iVar1 = 100;
    }
    *(int *)(&DAT_002e1a47 + iVar2) = iVar1;
  }
  uVar3 = *(undefined4 *)(in_EAX + 0xd);
  sVar4 = *(short *)(in_EAX + 0x11);
  iVar2 = FUN_0005102d(uVar3,sVar4);
  if (iVar2 != 0) {
    local_1c = FUN_00043f07();
    if (local_1c != 0) {
      *(int *)(local_1c + 0x13) = iVar2;
      iVar1 = FUN_000444a9(uVar3,sVar4 + 0x80);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x13) = iVar2;
      }
    }
  }
  return local_1c;
}

/******************************************************************************
 * Function : sub_04fbd8 (Ghidra: FUN_0004fbd8)
 * Prototype: void sub_04fbd8(void);
 * Address  : 0x4fbd8 (Size: 192 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x248e5, 0x4ac70, 0x61ca3, 0x849c8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0004fbd8(void)

{
  int in_EAX;
  int in_EDX;
  
  if (*(char *)(in_EDX + 0x1f) == '\x05') {
    if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xad) & 2) == 0) {
      *(undefined2 *)(&DAT_002e05cc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) =
           *(undefined2 *)(&DAT_0018fe87 + (uint)*(byte *)(in_EDX + 0x1a) * 8);
      *(undefined2 *)(&DAT_002e05dc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) =
           *(undefined2 *)(&DAT_0018fe89 + (uint)*(byte *)(in_EDX + 0x1a) * 8);
      return;
    }
  }
  else if ((*(char *)(in_EDX + 0x1f) != '\x01') || (*(char *)(in_EDX + 0x1a) != '\n')) {
    *(undefined2 *)(&DAT_002e05cc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x3c;
    *(undefined2 *)(&DAT_002e05dc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x28;
    return;
  }
  *(undefined2 *)(&DAT_002e05cc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0xb;
  *(undefined2 *)(&DAT_002e05dc + (uint)*(byte *)(in_EAX + 0x2b) * 0x1508) = 0x38;
  return;
}

/******************************************************************************
 * Function : sub_04fc98 (Ghidra: FUN_0004fc98)
 * Prototype: int sub_04fc98(void);
 * Address  : 0x4fc98 (Size: 152 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4e66f
 * Callees  : 2 -> 0x43f07, 0xe6a10
 ******************************************************************************/
int FUN_0004fc98(void)

{
  byte in_AL;
  int iVar1;
  undefined1 in_CL;
  int extraout_ECX;
  short in_DX;
  int iVar2;
  
  iVar2 = (uint)in_AL * 0x1508;
  iVar1 = FUN_00043f07(in_DX * 0x100 + 0x80,0x580);
  if (iVar1 != 0) {
    *(undefined4 *)(&DAT_002e0b5d + iVar2) = DAT_002e8bee;
    *(undefined2 *)(iVar1 + 0x5e) = 2;
    (&DAT_002e0b63)[iVar2] = in_CL;
    *(undefined2 *)(&DAT_002e0b61 + iVar2) = *(undefined2 *)(iVar1 + 0x1b);
    FUN_000e6a10();
    *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) | 1;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_04fd30 (Ghidra: FUN_0004fd30)
 * Prototype: undefined4 sub_04fd30(void);
 * Address  : 0x4fd30 (Size: 81 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x4efd4, 0x4f195, 0x4f3bc, 0x4f41d, 0x4f4f1, 0x4f552, 0x4f5b3, 0x4f63e, 0x4f87e, 0x4f92f
 * Callees  : 2 -> 0x23868, 0x51374
 ******************************************************************************/
undefined4 FUN_0004fd30(void)

{
  int iVar1;
  char extraout_CL;
  
  iVar1 = FUN_00023868();
  if (iVar1 < 0) {
    if (extraout_CL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      FUN_00051374();
    }
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_04fd81 (Ghidra: FUN_0004fd81)
 * Prototype: void sub_04fd81(void);
 * Address  : 0x4fd81 (Size: 43 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x644e9, 0x66dc2, 0xcead4, 0xd08a8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0004fd81(void)

{
  char *pcVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  
  iVar2 = in_EAX + in_EDX * 0x1508;
  if (*(char *)((int)&DAT_002e0589 + iVar2 + 0xfe0) != -1) {
    *(undefined1 *)((int)&DAT_002e0589 + iVar2 + 0xff4) = 1;
    pcVar1 = (char *)((int)&DAT_002e0589 + iVar2 + 0xfe0);
    *pcVar1 = *pcVar1 + '\x01';
  }
  return;
}

/******************************************************************************
 * Function : dk_remove_spell_player_as_04fdac (Ghidra: FUN_0004fdac)
 * Prototype: void dk_remove_spell_player_as_04fdac(void);
 * Address  : 0x4fdac (Size: 152 bytes)
 * Module   : magic.cpp [direct_file_string_xref]
 * OrigLine : magic.cpp:1560 ("CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!")
 * Naming   : String 'CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!'
 * Callers  : 4 -> 0x64365, 0xc9280, 0xcead4, 0xd08a8
 * Callees  : 3 -> 0x4e7cd, 0x4ed3d, 0xddaf0
 * Strings  :
 *   - 0x165976: "magic.cpp"
 *   - 0x16593d: "CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!"
 ******************************************************************************/
void FUN_0004fdac(void)

{
  char *pcVar1;
  uint in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar2 = in_EDX * 0x1508;
  if (*(char *)((int)&DAT_002e0589 + in_EAX + iVar2 + 0xfe0) == '\0') {
    FUN_000ddaf0(); /* LbErrorLog("magic.cpp", line 1560, "CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!") */
  }
  else {
    pcVar1 = (char *)((int)&DAT_002e0589 + in_EAX + iVar2 + 0xfe0);
    *pcVar1 = *pcVar1 + -1;
    if (in_EAX < 5) {
      if (in_EAX != 3) {
        return;
      }
      if (*(int *)(&DAT_002e0e11 + iVar2) != 0) {
        *(undefined4 *)(&DAT_002e0e11 + iVar2) = 0;
        return;
      }
    }
    else if (in_EAX < 6) {
      if (*(short *)(&DAT_002e0b61 + iVar2) != 0) {
        FUN_0004e7cd();
        return;
      }
    }
    else {
      if (in_EAX != 6) {
        return;
      }
      if ((&DAT_002e0e0d)[in_EDX * 0x542] != 0) {
        FUN_0004ed3d();
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_04fe44 (Ghidra: FUN_0004fe44)
 * Prototype: undefined4 sub_04fe44(void);
 * Address  : 0x4fe44 (Size: 451 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4af38, 0x85450, 0x85598
 * Callees  : 2 -> 0x768fb, 0xc595c
 ******************************************************************************/
undefined4 FUN_0004fe44(void)

{
  int in_EAX;
  undefined4 uVar1;
  int in_EDX;
  char cVar2;
  
  cVar2 = *(char *)(in_EAX + 0x1f);
  if (cVar2 == '\x05') {
    if (*(char *)(in_EAX + 6) == in_EDX) {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 == 'X') {
        return 0;
      }
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 != '\\') {
        if (*(char *)(in_EAX + 7) == '\x0e') {
          cVar2 = *(char *)(in_EAX + 8);
        }
        else {
          cVar2 = *(char *)(in_EAX + 7);
        }
        if (cVar2 != '_') {
          if (*(char *)(in_EAX + 7) == '\x0e') {
            cVar2 = *(char *)(in_EAX + 8);
          }
          else {
            cVar2 = *(char *)(in_EAX + 7);
          }
          if (cVar2 != ')') {
            if (*(char *)(in_EAX + 7) == '\x0e') {
              cVar2 = *(char *)(in_EAX + 8);
            }
            else {
              cVar2 = *(char *)(in_EAX + 7);
            }
            if (cVar2 != '(') {
              if (*(char *)(in_EAX + 7) == '\x0e') {
                cVar2 = *(char *)(in_EAX + 8);
              }
              else {
                cVar2 = *(char *)(in_EAX + 7);
              }
              if (cVar2 != '+') {
                if (*(char *)(in_EAX + 7) == '\x0e') {
                  cVar2 = *(char *)(in_EAX + 8);
                }
                else {
                  cVar2 = *(char *)(in_EAX + 7);
                }
                if (cVar2 != '*') {
                  return 1;
                }
              }
            }
          }
          if ((char)(&DAT_002ddd1e)
                    [(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) * 0x45] ==
              in_EDX) {
            return 1;
          }
          return 0;
        }
        return 0;
      }
      return 0;
    }
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar2 = *(char *)(in_EAX + 8);
    }
    else {
      cVar2 = *(char *)(in_EAX + 7);
    }
    if (cVar2 != ')') {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar2 = *(char *)(in_EAX + 8);
      }
      else {
        cVar2 = *(char *)(in_EAX + 7);
      }
      if (cVar2 != '(') {
        if (*(char *)(in_EAX + 7) == '\x0e') {
          cVar2 = *(char *)(in_EAX + 8);
        }
        else {
          cVar2 = *(char *)(in_EAX + 7);
        }
        if (cVar2 != '+') {
          if (*(char *)(in_EAX + 7) == '\x0e') {
            cVar2 = *(char *)(in_EAX + 8);
          }
          else {
            cVar2 = *(char *)(in_EAX + 7);
          }
          if (cVar2 != '*') {
            return 0;
          }
        }
      }
    }
    cVar2 = (&DAT_002ddd1e)
            [(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) * 0x45];
  }
  else {
    if (cVar2 == '\x01') {
      uVar1 = FUN_000c595c();
      return uVar1;
    }
    if ((cVar2 != '\x02') ||
       ((*(char *)(in_EAX + 0x1a) != '\x0f' && (*(char *)(in_EAX + 0x1a) != '\x14')))) {
      if (*(char *)(in_EAX + 0x1f) != '\b') {
        return 0;
      }
      uVar1 = FUN_000768fb();
      return uVar1;
    }
    cVar2 = *(char *)(in_EAX + 6);
  }
  if (cVar2 != in_EDX) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_050007 (Ghidra: FUN_00050007)
 * Prototype: void sub_050007(void);
 * Address  : 0x50007 (Size: 54 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x59f51
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_00050007(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_05003d (Ghidra: FUN_0005003d)
 * Prototype: undefined1 sub_05003d(int param_1);
 * Address  : 0x5003d (Size: 620 bytes)
 * Module   : magic.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 9 -> 0x4e1f2, 0x4e85c, 0x4ee2c, 0x4f195, 0x4f41d, 0x4f63e, 0x4f87e, 0x5a8f3, 0x8eeec
 * Callees  : 1 -> 0x23e65
 ******************************************************************************/
undefined1 FUN_0005003d(int param_1)

{
  byte in_AL;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte in_CL;
  undefined1 extraout_CH;
  undefined1 uVar5;
  undefined1 extraout_CH_00;
  undefined1 extraout_CH_01;
  byte in_DL;
  byte unaff_BL;
  bool bVar6;
  
  if (in_DL < 7) {
    if (4 < in_DL) {
      if (in_DL < 6) {
        return 1;
      }
      iVar3 = (uint)CONCAT11(in_CL,unaff_BL) * 5;
      if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x10) != 0) {
        return 0;
      }
      if ((*(uint *)((int)&DAT_00279203 + iVar3 + 1) >> 0x1c & 1 << (in_AL & 0x1f)) != 0) {
        return 1;
      }
      bVar6 = param_1 == 1;
      goto LAB_000500d6;
    }
    if (in_DL == 2) {
      if ((*(byte *)((int)&DAT_00279203 + (uint)CONCAT11(in_CL,unaff_BL) * 5) & 0x10) != 0) {
        return 0;
      }
      bVar1 = (&DAT_002d33ca)[((&DAT_0019033b)[in_CL] * 0x55 + (&DAT_0019033b)[unaff_BL]) * 6];
LAB_000500d1:
      bVar6 = (bVar1 & 7) == in_AL;
      goto LAB_000500d6;
    }
  }
  else {
    if (in_DL < 8) {
      iVar3 = (uint)CONCAT11(in_CL,unaff_BL) * 5;
      if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x10) != 0) {
        return 0;
      }
      iVar2 = FUN_00023e65();
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = *(uint *)((int)&DAT_00279203 + iVar3 + 1) >> 0x1c & 1 << (in_AL & 0x1f);
      uVar5 = extraout_CH;
LAB_00050123:
      if (uVar4 != 0) {
        return 1;
      }
      return uVar5;
    }
    if (in_DL < 0xe) {
      if (in_DL == 10) {
        iVar3 = (uint)CONCAT11(in_CL,unaff_BL) * 5;
        if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x10) != 0) {
          return 0;
        }
        iVar2 = FUN_00023e65();
        if ((iVar2 == 0) &&
           ((*(uint *)((int)&DAT_00279203 + iVar3 + 1) >> 0x1c & 1 << (in_AL & 0x1f)) == 0)) {
          return extraout_CH_00;
        }
        if (*(int *)(&DAT_0019d5ab + (uint)in_AL * 0x4ef) + 0x14U < DAT_002e8bee) {
          return 1;
        }
        return extraout_CH_00;
      }
    }
    else {
      if ((in_DL < 0xf) || (in_DL < 0x10)) {
        bVar1 = (&DAT_002d33ca)[((&DAT_0019033b)[in_CL] * 0x55 + (&DAT_0019033b)[unaff_BL]) * 6];
        goto LAB_000500d1;
      }
      if (in_DL == 0x10) {
        iVar3 = FUN_00023e65();
        if ((iVar3 == 0) &&
           ((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(in_CL,unaff_BL) * 5 + 1) >> 0x1c &
            1 << (in_AL & 0x1f)) == 0)) {
          return extraout_CH_01;
        }
        iVar3 = (uint)CONCAT11(in_CL,unaff_BL) * 5;
        if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x10) == 0) {
          return extraout_CH_01;
        }
        if ((*(byte *)((int)&DAT_00279203 + iVar3) & 0x43) != 0) {
          return extraout_CH_01;
        }
        uVar4 = (uint)(byte)(&DAT_002d33c5)
                            [((&DAT_0019033b)[unaff_BL] + (&DAT_0019033b)[in_CL] * 0x55) * 6];
        uVar5 = extraout_CH_01;
        goto LAB_00050123;
      }
    }
  }
  bVar6 = (*(byte *)((int)&DAT_00279203 + (uint)CONCAT11(in_CL,unaff_BL) * 5) & 0x10) == 0;
LAB_000500d6:
  if (bVar6) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0502a9 (Ghidra: FUN_000502a9)
 * Prototype: undefined4 sub_0502a9(void);
 * Address  : 0x502a9 (Size: 160 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4f41d, 0x4f87e, 0x8eeec
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000502a9(void)

{
  char cVar1;
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  if ((unaff_EBX != 0xe) || (in_EAX != *(char *)(in_EDX + 6))) {
    if (*(char *)(in_EDX + 7) == '\x0e') {
      cVar1 = *(char *)(in_EDX + 8);
    }
    else {
      cVar1 = *(char *)(in_EDX + 7);
    }
    if (cVar1 != ')') {
      if (*(char *)(in_EDX + 7) == '\x0e') {
        cVar1 = *(char *)(in_EDX + 8);
      }
      else {
        cVar1 = *(char *)(in_EDX + 7);
      }
      if (cVar1 != '(') {
        if (*(char *)(in_EDX + 7) == '\x0e') {
          cVar1 = *(char *)(in_EDX + 8);
        }
        else {
          cVar1 = *(char *)(in_EDX + 7);
        }
        if (cVar1 != '+') {
          if (*(char *)(in_EDX + 7) == '\x0e') {
            cVar1 = *(char *)(in_EDX + 8);
          }
          else {
            cVar1 = *(char *)(in_EDX + 7);
          }
          if (cVar1 != '*') {
            return 1;
          }
        }
      }
    }
    if ((char)(&DAT_002ddd1e)
              [(uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x7e) * 0x45] ==
        in_EAX) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_050349 (Ghidra: FUN_00050349)
 * Prototype: undefined8 sub_050349(void);
 * Address  : 0x50349 (Size: 438 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdf760
 * Callees  : 3 -> 0x17db0, 0xb3b58, 0xb3be4
 ******************************************************************************/
undefined8 FUN_00050349(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int in_EAX;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_EDX;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int local_24;
  int local_20;
  
  FUN_00017db0();
  sVar3 = FUN_000b3be4();
  if (sVar3 == 0) {
    iVar1 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
    local_24 = 0;
    iVar2 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
    pcVar8 = (char *)&DAT_002ee9c1;
    for (; local_24 < 0x20; local_24 = local_24 + 1) {
      iVar7 = iVar2 + *pcVar8;
      iVar6 = pcVar8[1] + iVar1;
      if ((((-1 < iVar6) && (iVar6 < 0x55)) && (-1 < iVar7)) &&
         ((iVar7 < 0x55 &&
          ((&DAT_001921d2)[(uint)(byte)(&DAT_002d33c5)[(iVar7 * 0x55 + iVar6) * 6] * 0x16] != '\0'))
         )) {
        uVar5 = (*(uint *)((int)&DAT_00279203 + (iVar6 * 3 + iVar7 * 0x300 + 0x101) * 5 + 1) &
                0x3fffff) >> 0xb;
        while (((short)uVar5 != 0 &&
               ((*(char *)((&DAT_001ae9fc)[uVar5] + 0x1f) != '\x03' ||
                (*(char *)((&DAT_001ae9fc)[uVar5] + 0x1a) != '.'))))) {
          uVar5 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar5] + 2);
        }
        if ((short)uVar5 == 0) {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          uVar5 = DAT_002e8bf6 % 9;
          for (local_20 = 0; local_20 < 9; local_20 = local_20 + 1) {
            if (((*(byte *)((int)&DAT_00279203 +
                           (((int)(char)(&DAT_0018b64b)[uVar5 * 2] + iVar7 * 3 + 1) * 0x100 +
                           (int)*(char *)((int)&DAT_0018b647 + uVar5 * 2 + 3) + iVar6 * 3 + 1) * 5)
                 & 0x10) == 0) && (sVar3 = FUN_000b3b58(), sVar3 != 0)) goto LAB_00050378;
            uVar5 = (int)(uVar5 + 1) % 9;
          }
        }
      }
      pcVar8 = pcVar8 + 4;
    }
    uVar4 = 0;
  }
  else {
LAB_00050378:
    uVar4 = 1;
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0504ff (Ghidra: FUN_000504ff)
 * Prototype: void sub_0504ff(void);
 * Address  : 0x504ff (Size: 381 bytes)
 * Module   : magic.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x49eff, 0x4e85c, 0x4f195, 0x4f3bc, 0x4f41d, 0x4f4f1, 0x4f552, 0x4f5b3, 0x4f87e
 ******************************************************************************/
void FUN_000504ff(void)

{
  byte in_AL;
  byte in_DL;
  ushort unaff_BX;
  
  if (((int)*(char *)((&DAT_001ae9fc)[unaff_BX] + 6) != (uint)in_AL) &&
     ((&DAT_0018e98d)[(uint)in_DL * 0x1b] == '\0')) {
    return;
  }
  if (in_DL < 0xc) {
    if (in_DL < 8) {
      if (in_DL == 6) {
        FUN_0004e85c(0);
        return;
      }
    }
    else {
      if (in_DL < 9) {
        FUN_0004f5b3();
        return;
      }
      if (9 < in_DL) {
        if (10 < in_DL) {
          FUN_0004f3bc();
          return;
        }
        FUN_0004f195();
        return;
      }
    }
    return;
  }
  if (in_DL < 0xd) {
    FUN_0004f4f1();
    return;
  }
  if (in_DL < 0xe) {
    FUN_0004f552();
    return;
  }
  if (in_DL < 0xf) {
    FUN_0004f87e();
    return;
  }
  if (0xf < in_DL) {
    if (in_DL != 0x12) {
      return;
    }
    *(ushort *)(&DAT_0019d506 + (uint)in_AL * 0x4ef) = unaff_BX;
    FUN_00049eff();
    return;
  }
  FUN_0004f41d();
  return;
}

/******************************************************************************
 * Function : sub_05067c (Ghidra: FUN_0005067c)
 * Prototype: void sub_05067c(void);
 * Address  : 0x5067c (Size: 140 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x50708, 0x508a9
 * Callees  : 3 -> 0xe8f34, 0xe984c, 0xe98c8
 ******************************************************************************/
void FUN_0005067c(void)

{
  undefined1 uVar1;
  int iVar2;
  int in_EDX;
  undefined1 *unaff_EBX;
  undefined1 *puVar3;
  int local_14;
  
  iVar2 = FUN_000e984c();
  if (iVar2 == -1) {
    local_14 = in_EDX;
    do {
      iVar2 = in_EDX;
      puVar3 = unaff_EBX;
      do {
        uVar1 = FUN_000e8f34();
        iVar2 = iVar2 + 3;
        unaff_EBX = puVar3 + 1;
        *puVar3 = uVar1;
        puVar3 = unaff_EBX;
      } while (iVar2 != in_EDX + 0x300);
      local_14 = local_14 + 3;
    } while (local_14 != in_EDX + 0x300);
    FUN_000e98c8();
  }
  return;
}

/******************************************************************************
 * Function : dk_data_mapfadeg_dat_050708 (Ghidra: FUN_00050708)
 * Prototype: undefined8 dk_data_mapfadeg_dat_050708(void);
 * Address  : 0x50708 (Size: 417 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : String 'DATA\MAPFADEG.DAT'
 * Callers  : 1 -> 0x8685c
 * Callees  : 9 -> 0x5067c, 0x50a47, 0x872a4, 0x872b8, 0x87694, 0xdd920, 0xe7714, 0xe8c83, 0xe984c
 * Strings  :
 *   - 0x165980: "DATA"
 *   - 0x165987: "%s\gmap.raw"
 *   - 0x165993: "DATA\MAPFADEG.DAT"
 ******************************************************************************/
undefined8 FUN_00050708(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 in_EDX;
  undefined *puVar3;
  int iVar4;
  
  if (in_EAX == 0) {
    DAT_0034b20c = &DAT_0030317f;
    DAT_0034b210 = &DAT_00312b7f;
    DAT_0034b208 = &DAT_002f317f;
    if ((&DAT_0019d57d)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02') {
      FUN_000872b8();
    }
    else {
      FUN_00087694();
    }
    iVar2 = 0;
    iVar4 = 0;
    while (iVar2 < (int)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6)) {
      puVar3 = DAT_0034b20c + iVar4;
      iVar4 = iVar4 + 0x140;
      FUN_000e8c83(puVar3);
      iVar2 = extraout_ECX;
    }
    FUN_000dd920();
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_gmap_raw_00165987,uVar1);
    iVar4 = 0;
    FUN_000e984c();
    FUN_000872a4();
    iVar2 = extraout_ECX_00;
    while (iVar2 < (int)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6)) {
      puVar3 = DAT_0034b210 + iVar4;
      iVar4 = iVar4 + 0x140;
      FUN_000e8c83(DAT_003d9834 * iVar2,puVar3);
      iVar2 = extraout_ECX_01;
    }
    FUN_0005067c();
  }
  iVar2 = in_EAX + 4;
  FUN_00050a47(DAT_0034b208);
  if (0x1f < iVar2) {
    iVar2 = 4;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : dk_data_mapfadeg_dat_0508a9 (Ghidra: FUN_000508a9)
 * Prototype: undefined8 dk_data_mapfadeg_dat_0508a9(void);
 * Address  : 0x508a9 (Size: 414 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : String 'DATA\MAPFADEG.DAT'
 * Callers  : 1 -> 0x8685c
 * Callees  : 9 -> 0x5067c, 0x50a47, 0x872a4, 0x872b8, 0x87694, 0xdd920, 0xe7714, 0xe8c83, 0xe984c
 * Strings  :
 *   - 0x1659a5: "DATA"
 *   - 0x1659ac: "%s\gmap.raw"
 *   - 0x1659b8: "DATA\MAPFADEG.DAT"
 ******************************************************************************/
undefined8 FUN_000508a9(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 in_EDX;
  undefined *puVar3;
  int iVar4;
  
  if (in_EAX == 0x20) {
    DAT_0034b20c = &DAT_0030317f;
    DAT_0034b210 = &DAT_00312b7f;
    DAT_0034b208 = &DAT_002f317f;
    if ((&DAT_0019d57d)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02') {
      FUN_000872b8();
    }
    else {
      FUN_00087694();
    }
    iVar2 = 0;
    iVar4 = 0;
    while (iVar2 < (int)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6)) {
      puVar3 = DAT_0034b20c + iVar4;
      iVar4 = iVar4 + 0x140;
      FUN_000e8c83(puVar3);
      iVar2 = extraout_ECX;
    }
    FUN_000dd920();
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_gmap_raw_001659ac,uVar1);
    iVar4 = 0;
    FUN_000e984c();
    FUN_000872a4();
    iVar2 = extraout_ECX_00;
    while (iVar2 < (int)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6)) {
      puVar3 = DAT_0034b210 + iVar4;
      iVar4 = iVar4 + 0x140;
      FUN_000e8c83(DAT_003d9834 * iVar2,puVar3);
      iVar2 = extraout_ECX_01;
    }
    FUN_0005067c();
  }
  iVar2 = in_EAX + -4;
  FUN_00050a47(DAT_0034b208);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_050a47 (Ghidra: FUN_00050a47)
 * Prototype: void sub_050a47(int param_1,int param_2,int param_3,int param_4,int param_5);
 * Address  : 0x50a47 (Size: 494 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x50708, 0x508a9
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00050a47(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_10;
  
  iVar4 = 0x20 - param_2;
  local_14 = 0;
  local_18 = 0;
  for (iVar5 = 0; iVar5 < param_3 << 3; iVar5 = iVar5 + 8) {
    iVar1 = local_14 / param_3 + param_2 * 4;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    *(int *)((int)&DAT_00348f0c + iVar5) = iVar1;
    iVar1 = local_18 / param_3 + iVar4 * 4;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    *(int *)((int)&DAT_00348f08 + iVar5) = iVar1;
    local_14 = local_14 + param_3 + param_2 * -8;
    local_18 = local_18 + param_3 + iVar4 * -8;
  }
  iVar1 = (param_4 << 3) / param_3;
  iVar5 = param_2 * 4 * iVar1;
  iVar3 = iVar5 >> 0x1f;
  iVar5 = (int)((iVar5 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
  iVar1 = iVar4 * 4 * iVar1;
  iVar3 = iVar1 >> 0x1f;
  iVar1 = (int)((iVar1 + iVar3 * -8) - (uint)(iVar3 << 2 < 0)) >> 3;
  local_24 = 0;
  local_1c = 0;
  for (iVar3 = 0; iVar3 < param_4 << 3; iVar3 = iVar3 + 8) {
    iVar2 = local_24 / param_4 + iVar5;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (param_4 < iVar2) {
      iVar2 = param_4;
    }
    *(int *)((int)&DAT_0034a30c + iVar3) = iVar2 * param_3;
    iVar2 = local_1c / param_4 + iVar1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (param_4 < iVar2) {
      iVar2 = param_4;
    }
    *(int *)((int)&DAT_0034a308 + iVar3) = iVar2 * param_3;
    local_24 = local_24 + param_4 + iVar5 * -2;
    local_1c = local_1c + param_4 + iVar1 * -2;
  }
  local_10 = in_EAX;
  for (iVar5 = 0; iVar5 < param_4 * 8; iVar5 = iVar5 + 8) {
    iVar1 = *(int *)((int)&DAT_0034a308 + iVar5);
    iVar3 = *(int *)((int)&DAT_0034a30c + iVar5);
    for (iVar2 = 0; iVar2 < param_3 << 3; iVar2 = iVar2 + 8) {
      *local_10 = *(undefined1 *)
                   ((uint)*(byte *)((uint)*(byte *)(in_EDX + iVar1 +
                                                   *(int *)((int)&DAT_00348f08 + iVar2)) +
                                    param_2 * 0x100 + in_ECX) +
                    (uint)*(byte *)((uint)*(byte *)(unaff_EBX + iVar3 +
                                                   *(int *)((int)&DAT_00348f0c + iVar2)) +
                                    iVar4 * 0x100 + in_ECX) * 0x100 + param_1);
      local_10 = local_10 + 1;
    }
    local_10 = local_10 + (param_5 - param_3);
  }
  return;
}

