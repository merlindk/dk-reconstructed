/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: room.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 102
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0c6374 (Ghidra: FUN_000c6374)
 * Prototype: void sub_0c6374(void);
 * Address  : 0xc6374 (Size: 288 bytes)
 * Module   : room.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x25f6f, 0xc8654
 ******************************************************************************/
void FUN_000c6374(void)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int in_EAX;
  uint uVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(&DAT_002e05a2 + in_EAX * 0x1508);
  uVar3 = *(ushort *)(&DAT_002ddd52 + (uint)uVar2 * 0x45);
  while (uVar6 = (uint)uVar3, uVar6 != 0) {
    uVar3 = *(ushort *)(&DAT_002d33c6 + uVar6 * 6);
    uVar5 = (uVar6 % 0x55) * 3;
    iVar7 = (uVar6 / 0x55) * 3;
    if (*(int *)(&DAT_002ddd1b + (uint)uVar2 * 0x45) >> 0x18 != (uint)DAT_002eb543) {
      *(short *)(&DAT_002e105e + (*(int *)(&DAT_002ddd1b + (uint)uVar2 * 0x45) >> 0x18) * 0x1508) =
           *(short *)(&DAT_002e105e +
                     (*(int *)(&DAT_002ddd1b + (uint)uVar2 * 0x45) >> 0x18) * 0x1508) + 1;
    }
    FUN_000c8654();
    iVar1 = iVar7 + 3;
    iVar4 = iVar7 - iVar1;
    while (SBORROW4(iVar7,iVar1) != iVar4 < 0) {
      uVar6 = uVar5;
      if (uVar5 < uVar5 + 3) {
        do {
          uVar6 = uVar6 + 1;
          FUN_00025f6f();
        } while ((int)uVar6 < (int)(uVar5 + 3));
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar7 - iVar1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0c6ba4 (Ghidra: FUN_000c6ba4)
 * Prototype: void sub_0c6ba4(void);
 * Address  : 0xc6ba4 (Size: 58 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xc6b04
 ******************************************************************************/
void FUN_000c6ba4(void)

{
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  
  if (*(short *)(in_EAX + 0x37) == 0) {
    return;
  }
  do {
    if (in_EDX == 0) {
      return;
    }
    in_EDX = FUN_000c6b04();
  } while (*(short *)(&DAT_002d33c6 + extraout_ECX) != 0);
  return;
}

/******************************************************************************
 * Function : sub_0c6be0 (Ghidra: FUN_000c6be0)
 * Prototype: undefined8 sub_0c6be0(void);
 * Address  : 0xc6be0 (Size: 482 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x50d90, 0x50e37, 0x50ea6, 0x72af4, 0x73d8d, 0x7df48, 0xb2398, 0xc6b04, 0xd0f50
 ******************************************************************************/
undefined8 FUN_000c6be0(void)

{
  byte bVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  bool bVar7;
  
  iVar3 = FUN_0007df48();
  if (iVar3 != 0) {
    iVar3 = FUN_000b2398();
    if ((iVar3 < 0x126) || (0x12e < iVar3)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      FUN_000d0f50();
      FUN_00073d8d();
      FUN_00072af4();
      uVar4 = 0xffffffff;
      goto LAB_000c6dbc;
    }
    bVar1 = *(byte *)(in_EAX + 0x1a);
    if (bVar1 < 6) {
      if (bVar1 != 3) goto LAB_000c6c64;
LAB_000c6c44:
      bVar7 = true;
    }
    else {
      if ((bVar1 < 7) || ((0x2a < bVar1 && ((bVar1 < 0x2c || (bVar1 == 0x80)))))) goto LAB_000c6c44;
LAB_000c6c64:
      bVar7 = false;
    }
    if ((bVar7) || (*(char *)(in_EAX + 0x1a) == -0x80)) {
      if (*(int *)(in_EAX + 0x13) == 0) {
        FUN_00072af4();
        return CONCAT44(in_EDX,0xffffffff);
      }
      puVar5 = (undefined1 *)FUN_000d0f50();
      if ((&DAT_002ddd1b < puVar5) &&
         (((*(char *)(in_EAX + 6) == puVar5[3] ||
           (*(int *)(in_EAX + 3) >> 0x18 == (uint)DAT_002eb543)) && (*(short *)(puVar5 + 10) == 2)))
         ) {
        iVar3 = FUN_000c6b04();
        *(int *)(in_EAX + 0x13) = iVar3;
        if (iVar3 != 0) {
          sVar2 = *(short *)(extraout_ECX + 0x37);
          while ((sVar2 != 0 && (bVar7 = iVar3 != 0, iVar3 = 0, bVar7))) {
            iVar3 = FUN_000c6b04();
            sVar2 = *(short *)(&DAT_002d33c6 + extraout_ECX_00);
          }
          *(int *)(in_EAX + 0x13) = iVar3;
        }
        if (*(int *)(in_EAX + 0x13) == 0) {
          FUN_00072af4();
          return CONCAT44(in_EDX,0xffffffff);
        }
      }
      if (*(char *)(in_EAX + 0x1a) == -0x80) {
        FUN_00050ea6();
        FUN_00072af4();
        return CONCAT44(in_EDX,0xffffffff);
      }
      uVar6 = FUN_00050d90();
      if (DAT_001ae9fc < uVar6) {
        FUN_00050e37();
        FUN_00072af4();
        return CONCAT44(in_EDX,0xffffffff);
      }
    }
    *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_EAX + 8);
  }
  uVar4 = 1;
LAB_000c6dbc:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0c6ec0 (Ghidra: FUN_000c6ec0)
 * Prototype: uint sub_0c6ec0(void);
 * Address  : 0xc6ec0 (Size: 376 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xb3dac, 0xb4894, 0xb4994
 * Callees  : 1 -> 0x7e134
 ******************************************************************************/
uint FUN_000c6ec0(void)

{
  int in_EAX;
  int iVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar2;
  undefined2 *in_EDX;
  undefined2 uVar3;
  undefined2 uVar4;
  
  FUN_0007e134(*in_EDX,*(undefined2 *)(in_EAX + 0x11));
  FUN_0007e134(*(undefined2 *)(in_EAX + 0xd),*(undefined2 *)(in_EAX + 0x11));
  uVar3 = *(undefined2 *)(in_EAX + 0xd);
  uVar4 = in_EDX[2];
  iVar1 = FUN_0007e134(uVar3,uVar4);
  uVar2 = extraout_ECX;
  if (iVar1 != 0) {
    uVar2 = extraout_ECX | 4;
  }
  switch(uVar2) {
  case 0:
    iVar1 = FUN_0007e134(uVar3,uVar4);
    uVar2 = extraout_ECX_00;
    if (iVar1 != 0) {
      return 7;
    }
    break;
  case 1:
    iVar1 = FUN_0007e134(*(undefined2 *)(in_EAX + 0xd),in_EDX[2]);
    if (iVar1 != 0) {
      return 7;
    }
    return 1;
  case 2:
    iVar1 = FUN_0007e134(*in_EDX,in_EDX[2]);
    if (iVar1 != 0) {
      return 7;
    }
    return 2;
  case 4:
    iVar1 = FUN_0007e134(*in_EDX,*(undefined2 *)(in_EAX + 0x11));
    uVar2 = extraout_ECX_01;
    if (iVar1 != 0) {
      uVar2 = 7;
    }
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0c7058 (Ghidra: FUN_000c7058)
 * Prototype: byte sub_0c7058(void);
 * Address  : 0xc7058 (Size: 414 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x6ca16, 0x6cee6, 0x6d4df, 0xb3dac, 0xb444c, 0xb45b4
 * Callees  : 1 -> 0x7dbc0
 ******************************************************************************/
byte FUN_000c7058(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *in_EDX;
  byte bVar2;
  
  iVar1 = FUN_0007dbc0(*in_EDX,*(undefined2 *)(in_EAX + 0x11));
  bVar2 = iVar1 != 0;
  iVar1 = FUN_0007dbc0(*(undefined2 *)(in_EAX + 0xd),*(undefined2 *)(in_EAX + 0x11));
  if (iVar1 != 0) {
    bVar2 = bVar2 | 2;
  }
  iVar1 = FUN_0007dbc0(*(undefined2 *)(in_EAX + 0xd),*(undefined2 *)(extraout_ECX + 4));
  if (iVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  switch(bVar2) {
  case 0:
    iVar1 = FUN_0007dbc0(*extraout_ECX_00,extraout_ECX_00[2]);
    if (iVar1 != 0) {
      return 7;
    }
    break;
  case 1:
    iVar1 = FUN_0007dbc0(*(undefined2 *)(in_EAX + 0xd),extraout_ECX_00[2]);
    if (iVar1 != 0) {
      return 7;
    }
    break;
  case 2:
    iVar1 = FUN_0007dbc0(*extraout_ECX_00,extraout_ECX_00[2]);
    if (iVar1 != 0) {
      return 7;
    }
    break;
  case 4:
    iVar1 = FUN_0007dbc0(*extraout_ECX_00,*(undefined2 *)(in_EAX + 0x11));
    if (iVar1 != 0) {
      bVar2 = 7;
    }
  }
  return bVar2;
}

/******************************************************************************
 * Function : sub_0c7218 (Ghidra: FUN_000c7218)
 * Prototype: void sub_0c7218(void);
 * Address  : 0xc7218 (Size: 791 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x6ca16, 0x6d4df, 0xb3dac, 0xb444c, 0xb45b4, 0xb4894, 0xb4994
 * Callees  : 1 -> 0xc7970
 ******************************************************************************/
void FUN_000c7218(void)

{
  ushort uVar1;
  ushort uVar2;
  int in_EAX;
  ushort uVar3;
  ushort uVar4;
  ushort *in_EDX;
  undefined4 unaff_EBX;
  byte bVar5;
  undefined4 local_10;
  ushort local_c [2];
  
  bVar5 = 0;
  switch(unaff_EBX) {
  default:
    return;
  case 1:
    break;
  case 2:
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar3 = *(ushort *)(in_EAX + 0xf);
    uVar4 = in_EDX[1];
    if (uVar3 != uVar4) {
      if (uVar3 < uVar4) {
        uVar3 = ((uVar4 + uVar2 & 0xff00) - 1) - uVar2;
      }
      else {
        uVar3 = (uVar4 - uVar2 & 0xff00) + 0x100 + uVar2;
      }
    }
    in_EDX[1] = uVar3;
    return;
  case 3:
    uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar3 = *in_EDX;
    if (*(ushort *)(in_EAX + 0xd) != uVar3) {
      if (*(ushort *)(in_EAX + 0xd) < uVar3) {
        uVar3 = ((uVar3 + uVar4 & 0xff00) - 1) - uVar4;
      }
      else {
        uVar3 = uVar4 + (uVar3 - uVar4 & 0xff00) + 0x100;
      }
    }
    uVar1 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar4 = *(ushort *)(in_EAX + 0xf);
    uVar2 = in_EDX[1];
    if (uVar4 != uVar2) {
      if (uVar4 < uVar2) {
        uVar4 = ((uVar2 + uVar1 & 0xff00) - 1) - uVar1;
      }
      else {
        uVar4 = (uVar2 - uVar1 & 0xff00) + 0x100 + uVar1;
      }
    }
    in_EDX[1] = uVar4;
    *in_EDX = uVar3;
    return;
  case 5:
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar3 = *(ushort *)(in_EAX + 0xd);
    uVar4 = *in_EDX;
    if (uVar3 != uVar4) {
      if (uVar3 < uVar4) {
        uVar3 = ((uVar4 + uVar2 & 0xff00) - 1) - uVar2;
      }
      else {
        uVar3 = (uVar4 - uVar2 & 0xff00) + 0x100 + uVar2;
      }
    }
    *in_EDX = uVar3;
    uVar3 = FUN_000c7970();
    in_EDX[2] = uVar3;
    return;
  case 6:
    uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar3 = in_EDX[1];
    if (*(ushort *)(in_EAX + 0xf) != uVar3) {
      if (*(ushort *)(in_EAX + 0xf) < uVar3) {
        uVar3 = ((uVar3 + uVar4 & 0xff00) - 1) - uVar4;
      }
      else {
        uVar3 = uVar4 + (uVar3 - uVar4 & 0xff00) + 0x100;
      }
    }
    in_EDX[1] = uVar3;
  case 4:
    uVar3 = FUN_000c7970();
    in_EDX[2] = uVar3;
    return;
  case 7:
    uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar3 = *in_EDX;
    if (*(ushort *)(in_EAX + 0xd) != uVar3) {
      if (*(ushort *)(in_EAX + 0xd) < uVar3) {
        uVar3 = ((uVar3 + uVar4 & 0xff00) - 1) - uVar4;
      }
      else {
        uVar3 = uVar4 + (uVar3 - uVar4 & 0xff00) + 0x100;
      }
    }
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
    uVar4 = in_EDX[1];
    if (*(ushort *)(in_EAX + 0xf) != uVar4) {
      if (*(ushort *)(in_EAX + 0xf) < uVar4) {
        uVar4 = ((uVar4 + uVar2 & 0xff00) - 1) - uVar2;
      }
      else {
        uVar4 = uVar2 + (uVar4 - uVar2 & 0xff00) + 0x100;
      }
    }
    local_10 = CONCAT22(uVar4,uVar3);
    in_EDX[1] = uVar4;
    *in_EDX = uVar3;
    local_c[0] = FUN_000c7970();
    *(undefined4 *)in_EDX = local_10;
    in_EDX[(uint)bVar5 * -4 + 2] = local_c[(uint)bVar5 * -4];
    return;
  }
  uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  uVar3 = *in_EDX;
  if (*(ushort *)(in_EAX + 0xd) != uVar3) {
    if (*(ushort *)(in_EAX + 0xd) < uVar3) {
      *in_EDX = ((uVar3 + uVar4 & 0xff00) - 1) - uVar4;
      return;
    }
    uVar3 = uVar4 + (uVar3 - uVar4 & 0xff00) + 0x100;
  }
  *in_EDX = uVar3;
  return;
}

/******************************************************************************
 * Function : sub_0c7550 (Ghidra: FUN_000c7550)
 * Prototype: void sub_0c7550(void);
 * Address  : 0xc7550 (Size: 65 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0xb444c, 0xb45b4, 0xb4894, 0xb4994
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000c7550(void)

{
  int in_EAX;
  undefined4 unaff_EBX;
  
  switch(unaff_EBX) {
  default:
    return;
  case 1:
    *(undefined2 *)(in_EAX + 0x2c) = 0;
    return;
  case 3:
    *(undefined2 *)(in_EAX + 0x2c) = 0;
  case 2:
    *(undefined2 *)(in_EAX + 0x2e) = 0;
    return;
  case 5:
    *(undefined2 *)(in_EAX + 0x2c) = 0;
    *(undefined2 *)(in_EAX + 0x30) = 0;
    return;
  case 7:
    *(undefined2 *)(in_EAX + 0x2c) = 0;
  case 6:
    *(undefined2 *)(in_EAX + 0x2e) = 0;
  case 4:
    *(undefined2 *)(in_EAX + 0x30) = 0;
    return;
  }
}

/******************************************************************************
 * Function : sub_0c7594 (Ghidra: FUN_000c7594)
 * Prototype: void sub_0c7594(void);
 * Address  : 0xc7594 (Size: 32 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Instruction at (ram,0x000c75b3) overlaps instruction at (ram,0x000c75b2)
    */

void FUN_000c7594(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *in_EAX;
  int iVar4;
  byte *in_ECX;
  char cVar5;
  byte bVar6;
  char cVar8;
  undefined2 *in_EDX;
  int iVar7;
  char *unaff_EBX;
  int iVar9;
  int unaff_EBP;
  int iVar10;
  char *unaff_EDI;
  char *pcVar11;
  undefined1 auStack_8 [8];
  
  bVar3 = (byte)in_EAX;
  if ((char)(bVar3 - *unaff_EDI) < '\0') {
LAB_000c75a3:
    bVar2 = *in_EAX;
    bVar6 = (byte)in_EDX;
    *in_EAX = *in_EAX + bVar6;
    if (CARRY1(bVar2,bVar6) || *in_EAX == 0) goto LAB_000c75a7;
    in_ECX[0x56] = in_ECX[0x56] + bVar6;
  }
  else {
    cVar5 = (char)in_EDX;
    cVar8 = (char)((uint)in_EDX >> 8) + (char)unaff_EBX;
    in_EDX = (undefined2 *)CONCAT22((short)((uint)in_EDX >> 0x10),CONCAT11(cVar8,cVar5));
    if (cVar8 == '\0') {
      in_EAX[0x76] = in_EAX[0x76] + cVar5;
      goto LAB_000c75a3;
    }
LAB_000c75a7:
    pbVar1 = (byte *)(unaff_EBP + -0x2ffff389);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar3;
    pcVar11 = unaff_EDI + 1;
    if (!CARRY1(bVar2,bVar3) && *pbVar1 != 0) goto LAB_000c75bb;
    *(byte *)(in_EDX + 0x3c) = *(char *)(in_EDX + 0x3c) + bVar3;
    register0x00000010 = (BADSPACEBASE *)auStack_8;
  }
  *(char **)((int)register0x00000010 + -4) = unaff_EDI + 1;
  in_ECX = in_EAX;
  pcVar11 = unaff_EBX;
LAB_000c75bb:
  iVar4 = *(int *)(in_EAX + 0x2a) >> 0x10;
  iVar9 = *(int *)(in_ECX + 0x2c) >> 0x10;
  iVar10 = *(int *)(in_ECX + 0x2e) >> 0x10;
  switch(pcVar11) {
  case (char *)0x1:
    *in_EDX = *(undefined2 *)(in_ECX + 0xd);
    iVar9 = (int)-((uint)in_ECX[0x22] * iVar4) >> 0x1f;
    *(short *)(in_ECX + 0x2c) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar4) + iVar9 * -0x80) - (uint)(iVar9 << 6 < 0)) >>
                7);
    iVar4 = (*(int *)(in_ECX + 0x2c) >> 0x10) * (0x100 - (uint)in_ECX[0x23]);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x2e) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    iVar4 = (*(int *)(in_ECX + 0x2e) >> 0x10) * (0x100 - (uint)in_ECX[0x23]);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x30) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    return;
  case (char *)0x2:
    in_EDX[1] = *(undefined2 *)(in_ECX + 0xf);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar9) >> 0x1f;
    *(short *)(in_ECX + 0x2e) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar9) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    iVar4 = (0x100 - (uint)in_ECX[0x23]) * (*(int *)(in_ECX + 0x2a) >> 0x10);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x2c) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    iVar4 = (0x100 - (uint)in_ECX[0x23]) * (*(int *)(in_ECX + 0x2e) >> 0x10);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x30) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    return;
  case (char *)0x3:
    *in_EDX = *(undefined2 *)(in_ECX + 0xd);
    in_EDX[1] = *(undefined2 *)(in_ECX + 0xf);
    iVar10 = (int)-((uint)in_ECX[0x22] * iVar4) >> 0x1f;
    *(short *)(in_ECX + 0x2c) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar4) + iVar10 * -0x80) - (uint)(iVar10 << 6 < 0))
                >> 7);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar9) >> 0x1f;
    *(short *)(in_ECX + 0x2e) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar9) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    return;
  case (char *)0x4:
    in_EDX[2] = *(undefined2 *)(in_ECX + 0x11);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar10) >> 0x1f;
    *(short *)(in_ECX + 0x30) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar10) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    iVar4 = (0x100 - (uint)in_ECX[0x23]) * (*(int *)(in_ECX + 0x2a) >> 0x10);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x2c) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    iVar4 = (0x100 - (uint)in_ECX[0x23]) * (*(int *)(in_ECX + 0x2c) >> 0x10);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x2e) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    return;
  case (char *)0x5:
    in_EDX[2] = *(undefined2 *)(in_ECX + 0x11);
    *in_EDX = *(undefined2 *)(in_ECX + 0xd);
    iVar9 = (int)-((uint)in_ECX[0x22] * iVar4) >> 0x1f;
    *(short *)(in_ECX + 0x2c) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar4) + iVar9 * -0x80) - (uint)(iVar9 << 6 < 0)) >>
                7);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar10) >> 0x1f;
    *(short *)(in_ECX + 0x30) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar10) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    return;
  case (char *)0x6:
    in_EDX[1] = *(undefined2 *)(in_ECX + 0xf);
    in_EDX[2] = *(undefined2 *)(in_ECX + 0x11);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar9) >> 0x1f;
    *(short *)(in_ECX + 0x2e) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar9) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar10) >> 0x1f;
    *(short *)(in_ECX + 0x30) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar10) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    iVar4 = (0x100 - (uint)in_ECX[0x23]) * (*(int *)(in_ECX + 0x2a) >> 0x10);
    iVar9 = iVar4 >> 0x1f;
    *(short *)(in_ECX + 0x2c) = (short)((iVar4 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0) >> 8);
    return;
  case (char *)0x7:
    *in_EDX = *(undefined2 *)(in_ECX + 0xd);
    in_EDX[1] = *(undefined2 *)(in_ECX + 0xf);
    in_EDX[2] = *(undefined2 *)(in_ECX + 0x11);
    iVar7 = (int)-((uint)in_ECX[0x22] * iVar4) >> 0x1f;
    *(short *)(in_ECX + 0x2c) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar4) + iVar7 * -0x80) - (uint)(iVar7 << 6 < 0)) >>
                7);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar9) >> 0x1f;
    *(short *)(in_ECX + 0x2e) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar9) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
    iVar4 = (int)-((uint)in_ECX[0x22] * iVar10) >> 0x1f;
    *(short *)(in_ECX + 0x30) =
         (short)((int)((-((uint)in_ECX[0x22] * iVar10) + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >>
                7);
  }
  return;
}

/******************************************************************************
 * Function : sub_0c75b4 (Ghidra: FUN_000c75b4)
 * Prototype: void sub_0c75b4(void);
 * Address  : 0xc75b4 (Size: 766 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6ca16, 0x6cee6
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000c75b4(void)

{
  int in_EAX;
  int iVar1;
  undefined2 *in_EDX;
  int iVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_EAX + 0x2a) >> 0x10;
  iVar3 = *(int *)(in_EAX + 0x2c) >> 0x10;
  iVar4 = *(int *)(in_EAX + 0x2e) >> 0x10;
  switch(unaff_EBX) {
  case 1:
    *in_EDX = *(undefined2 *)(in_EAX + 0xd);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar1);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    iVar1 = (*(int *)(in_EAX + 0x2c) >> 0x10) * (0x100 - (uint)*(byte *)(in_EAX + 0x23));
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2e) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    iVar1 = (*(int *)(in_EAX + 0x2e) >> 0x10) * (0x100 - (uint)*(byte *)(in_EAX + 0x23));
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x30) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    return;
  case 2:
    in_EDX[1] = *(undefined2 *)(in_EAX + 0xf);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar3);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2e) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    iVar1 = (0x100 - (uint)*(byte *)(in_EAX + 0x23)) * (*(int *)(in_EAX + 0x2a) >> 0x10);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    iVar1 = (0x100 - (uint)*(byte *)(in_EAX + 0x23)) * (*(int *)(in_EAX + 0x2e) >> 0x10);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x30) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    return;
  case 3:
    *in_EDX = *(undefined2 *)(in_EAX + 0xd);
    in_EDX[1] = *(undefined2 *)(in_EAX + 0xf);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar1);
    iVar4 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) =
         (short)((int)((iVar1 + iVar4 * -0x80) - (uint)(iVar4 << 6 < 0)) >> 7);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar3);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2e) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    return;
  case 4:
    in_EDX[2] = *(undefined2 *)(in_EAX + 0x11);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar4);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x30) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    iVar1 = (0x100 - (uint)*(byte *)(in_EAX + 0x23)) * (*(int *)(in_EAX + 0x2a) >> 0x10);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    iVar1 = (0x100 - (uint)*(byte *)(in_EAX + 0x23)) * (*(int *)(in_EAX + 0x2c) >> 0x10);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2e) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    return;
  case 5:
    in_EDX[2] = *(undefined2 *)(in_EAX + 0x11);
    *in_EDX = *(undefined2 *)(in_EAX + 0xd);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar1);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar4);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x30) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    return;
  case 6:
    in_EDX[1] = *(undefined2 *)(in_EAX + 0xf);
    in_EDX[2] = *(undefined2 *)(in_EAX + 0x11);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar3);
    iVar3 = iVar1 >> 0x1f;
    iVar4 = -((uint)*(byte *)(in_EAX + 0x22) * iVar4);
    *(short *)(in_EAX + 0x2e) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    iVar1 = iVar4 >> 0x1f;
    *(short *)(in_EAX + 0x30) =
         (short)((int)((iVar4 + iVar1 * -0x80) - (uint)(iVar1 << 6 < 0)) >> 7);
    iVar1 = (0x100 - (uint)*(byte *)(in_EAX + 0x23)) * (*(int *)(in_EAX + 0x2a) >> 0x10);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) = (short)((iVar1 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
    return;
  case 7:
    *in_EDX = *(undefined2 *)(in_EAX + 0xd);
    in_EDX[1] = *(undefined2 *)(in_EAX + 0xf);
    in_EDX[2] = *(undefined2 *)(in_EAX + 0x11);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar1);
    iVar2 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2c) =
         (short)((int)((iVar1 + iVar2 * -0x80) - (uint)(iVar2 << 6 < 0)) >> 7);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar3);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x2e) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
    iVar1 = -((uint)*(byte *)(in_EAX + 0x22) * iVar4);
    iVar3 = iVar1 >> 0x1f;
    *(short *)(in_EAX + 0x30) =
         (short)((int)((iVar1 + iVar3 * -0x80) - (uint)(iVar3 << 6 < 0)) >> 7);
  }
  return;
}

/******************************************************************************
 * Function : sub_0c7910 (Ghidra: FUN_000c7910)
 * Prototype: uint sub_0c7910(void);
 * Address  : 0xc7910 (Size: 93 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000c7910(void)

{
  int in_EAX;
  uint uVar1;
  int in_EDX;
  uint uVar2;
  
  uVar1 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  uVar2 = (uint)*(ushort *)(in_EDX + 2);
  if (*(ushort *)(in_EAX + 0xf) == uVar2) {
    return uVar2;
  }
  if (*(ushort *)(in_EAX + 0xf) < uVar2) {
    return ((uVar2 + uVar1 & 0xff00) - 1) - uVar1;
  }
  return uVar1 + (uVar2 - uVar1 & 0xff00) + 0x100;
}

/******************************************************************************
 * Function : sub_0c7970 (Ghidra: FUN_000c7970)
 * Prototype: uint sub_0c7970(void);
 * Address  : 0xc7970 (Size: 90 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc7218
 * Callees  : 1 -> 0xb33e4
 ******************************************************************************/
uint FUN_000c7970(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(ushort *)(in_EAX + 0x58);
  iVar1 = FUN_000b33e4();
  uVar2 = *(int *)(extraout_ECX + 2) >> 0x10;
  uVar4 = *(int *)(in_EAX + 0xf) >> 0x10;
  if (iVar1 + -1 <= (int)(uVar2 + uVar3)) {
    return (iVar1 - uVar3) - 1;
  }
  if (uVar4 != uVar2) {
    if ((int)uVar4 < (int)uVar2) {
      return (((int)(uVar2 + uVar3) >> 8) * 0x100 + -1) - uVar3;
    }
    uVar2 = (uVar2 & 0xff00) + 0x100;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0c79e0 (Ghidra: FUN_000c79e0)
 * Prototype: bool sub_0c79e0(void);
 * Address  : 0xc79e0 (Size: 117 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x7e134, 0x7e868, 0x7f310
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000c79e0(void)

{
  ushort *in_EAX;
  ushort *in_EDX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)((uint)*in_EDX - (uint)*in_EAX) < 0) {
    uVar1 = (uint)(byte)*in_EAX;
  }
  else {
    uVar1 = 0xff - (byte)*in_EAX;
  }
  if ((int)((uint)in_EDX[1] - (uint)in_EAX[1]) < 0) {
    uVar2 = (uint)(byte)in_EAX[1];
  }
  else {
    uVar2 = 0xff - (byte)in_EAX[1];
  }
  uVar2 = uVar2 * ((uint)*in_EDX - (uint)*in_EAX);
  uVar3 = (int)uVar2 >> 0x1f;
  uVar1 = ((uint)in_EDX[1] - (uint)in_EAX[1]) * uVar1;
  uVar4 = (int)uVar1 >> 0x1f;
  return (int)((uVar1 ^ uVar4) - uVar4) < (int)((uVar2 ^ uVar3) - uVar3);
}

/******************************************************************************
 * Function : sub_0c7a58 (Ghidra: FUN_000c7a58)
 * Prototype: bool sub_0c7a58(void);
 * Address  : 0xc7a58 (Size: 119 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x7e134, 0x7e868, 0x7f310
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000c7a58(void)

{
  ushort *in_EAX;
  uint uVar1;
  uint uVar2;
  ushort *in_EDX;
  uint uVar3;
  uint uVar4;
  
  if ((int)((uint)*in_EDX - (uint)*in_EAX) < 0) {
    uVar2 = (uint)(byte)*in_EAX;
  }
  else {
    uVar2 = 0xff - (byte)*in_EAX;
  }
  if ((int)((uint)in_EDX[1] - (uint)in_EAX[1]) < 0) {
    uVar1 = (uint)(byte)in_EAX[1];
  }
  else {
    uVar1 = 0xff - (byte)in_EAX[1];
  }
  uVar2 = ((uint)in_EDX[1] - (uint)in_EAX[1]) * uVar2;
  uVar3 = (int)uVar2 >> 0x1f;
  uVar1 = ((uint)*in_EDX - (uint)*in_EAX) * uVar1;
  uVar4 = (int)uVar1 >> 0x1f;
  return (int)((uVar1 ^ uVar4) - uVar4) < (int)((uVar2 ^ uVar3) - uVar3);
}

/******************************************************************************
 * Function : sub_0c7ad0 (Ghidra: FUN_000c7ad0)
 * Prototype: undefined4 sub_0c7ad0(void);
 * Address  : 0xc7ad0 (Size: 274 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000c7ad0(void)

{
  ushort uVar1;
  undefined1 *in_EAX;
  uint uVar2;
  int iVar3;
  char *in_EDX;
  uint uVar4;
  int iVar5;
  undefined1 *unaff_EBX;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 local_14;
  
  uVar6 = (uint)*(ushort *)(in_EAX + 0x37);
  uVar4 = uVar6 % 0x55;
  uVar2 = uVar6 / 0x55;
  uVar1 = *(ushort *)(&DAT_002d33c6 + uVar6 * 6);
  while (uVar6 = (uint)uVar1, uVar6 != 0) {
    uVar4 = uVar4 + uVar6 % 0x55;
    uVar2 = uVar2 + uVar6 / 0x55;
    uVar1 = *(ushort *)(&DAT_002d33c6 + uVar6 * 6);
  }
  pcVar7 = (char *)&DAT_002ee9c1;
  iVar3 = 0;
  do {
    iVar8 = ((int)*pcVar7 + (int)uVar2 / (int)(uint)*(ushort *)(in_EAX + 0x3b)) * 3 + 1;
    iVar5 = (int)pcVar7[1] + (int)uVar4 / (int)(uint)*(ushort *)(in_EAX + 0x3b);
    if (&DAT_002ddd1b +
        (uint)(byte)(&DAT_002d33c8)
                    [((&DAT_0019033f)[iVar5 * 3] + (&DAT_0019033b)[iVar8] * 0x55) * 6] * 0x45 ==
        in_EAX) {
      *in_EDX = (char)iVar5 * '\x03' + '\x01';
      local_14 = (undefined1)iVar8;
      *unaff_EBX = local_14;
      return 1;
    }
    iVar3 = iVar3 + 1;
    pcVar7 = pcVar7 + 4;
  } while (iVar3 < 0x100);
  return 0;
}

/******************************************************************************
 * Function : sub_0c7be4 (Ghidra: FUN_000c7be4)
 * Prototype: void sub_0c7be4(void);
 * Address  : 0xc7be4 (Size: 917 bytes)
 * Module   : room.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 3 -> 0x444a9, 0xb28e8, 0xc7f7c
 * Strings  :
 *   - 0x1921a4: "789:"
 ******************************************************************************/
void FUN_000c7be4(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  byte *extraout_ECX;
  byte *pbVar11;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *pbVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  char cStack_2d;
  uint local_24;
  
  if (DAT_002f10d6 <= DAT_002f10d2) {
LAB_000c7ecd:
    local_24 = 0;
    uVar10 = 1;
    iVar15 = 0;
    DAT_002e0ec3 = 0;
    iVar9 = 0;
    while( true ) {
      do {
        if ((uVar10 != 1) && (uVar10 != 7)) {
          cVar13 = '\0';
          for (uVar4 = *(ushort *)(&DAT_002e0594 + (uVar10 & 0xff) * 2 + (local_24 & 0xff) * 0x1508)
              ; &DAT_002ddd1b < &DAT_002ddd1b + (uint)uVar4 * 0x45;
              uVar4 = *(ushort *)(&DAT_002ddd21 + (uint)uVar4 * 0x45)) {
            cVar13 = cVar13 + '\x01';
          }
          (&DAT_002e0ec3)[iVar15] = (&DAT_002e0ec3)[iVar15] + cVar13;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 0x11);
      local_24 = local_24 + 1;
      iVar15 = iVar9 + 0x1508;
      if (4 < (int)local_24) break;
      uVar10 = 1;
      (&DAT_002e23cb)[iVar9] = 0;
      iVar9 = iVar15;
    }
    return;
  }
  bVar1 = *DAT_002f10d2;
  pbVar12 = DAT_002f10d2;
  do {
    if ((bVar1 & 1) != 0) {
      pbVar11 = pbVar12;
      if (*(short *)(pbVar12 + 10) == 0xd) {
        FUN_000c7f7c();
        pbVar11 = extraout_ECX;
      }
      (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[(DAT_002f10ce >> 0x18) * 0x4ef] * 0x11] =
           (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[(DAT_002f10ce >> 0x18) * 0x4ef] * 0x11] +
           pbVar11[8] + pbVar11[9] + pbVar11[0x3b];
      pbVar12 = pbVar11;
      if ((DAT_0019d0b9 & 0x40) != 0) {
        bVar1 = pbVar11[0x43];
        bVar2 = pbVar11[0x44];
        iVar9 = (uint)bVar1 * 3 + (uint)bVar2;
        uVar4 = *(ushort *)(pbVar11 + 0x41);
        if (*(short *)(pbVar11 + 10) != 7) {
          sVar7 = (short)((uint)*(undefined4 *)(&DAT_00192172 + iVar9 * 4) >> 0x10) +
                  (uVar4 % 0x55) * 0x300 + 0x180;
          uVar5 = *(undefined4 *)(&DAT_00192174 + iVar9 * 4);
          if (*(int *)pbVar11 >> 0x18 == (uint)DAT_002eb543) {
            iVar9 = FUN_000444a9(sVar7,0);
            pbVar12 = extraout_ECX_00;
            if (iVar9 != 0) {
              sVar8 = FUN_000b28e8();
              *(short *)(iVar9 + 0x11) = sVar8;
              *(short *)(iVar9 + 0x11) = sVar8 + 10;
              uVar10 = (uint)*(ushort *)(extraout_ECX_01 + 0x3f);
              uVar14 = *(ushort *)(iVar9 + 0x46) - 0x50;
              pbVar12 = extraout_ECX_01;
LAB_000c7d8b:
              iVar15 = (int)(uVar14 * uVar10) >> 0x1f;
              *(short *)(iVar9 + 0x46) =
                   (short)((uVar14 * uVar10 + iVar15 * -0x100) - (uint)(iVar15 << 7 < 0) >> 8) +
                   0x50;
            }
          }
          else if ((u_789__001921a4[*(int *)pbVar11 >> 0x18] != L'\0') &&
                  (iVar9 = FUN_000444a9(sVar7,0), pbVar12 = extraout_ECX_02, iVar9 != 0)) {
            sVar8 = FUN_000b28e8();
            *(short *)(iVar9 + 0x11) = sVar8;
            *(short *)(iVar9 + 0x11) = sVar8 + 10;
            uVar14 = (uint)*(ushort *)(extraout_ECX_03 + 0x3f);
            uVar10 = *(ushort *)(iVar9 + 0x46) - 0x50;
            pbVar12 = extraout_ECX_03;
            goto LAB_000c7d8b;
          }
          if (bVar2 == 2) {
            uVar14 = (uint)bVar1;
            uVar10 = (uint)(byte)((char)((ushort)sVar7 >> 8) +
                                 *(char *)((int)&DAT_0018b67b + uVar14 * 2 + 3));
            cStack_2d = (char)((ushort)((uVar4 / 0x55) * 0x300 + 0x180 +
                                       (short)((uint)uVar5 >> 0x10)) >> 8);
            if (pbVar11 ==
                &DAT_002ddd1b +
                (uint)(byte)(&DAT_002d33c8)
                            [((&DAT_0019033b)[(byte)((&DAT_0018b67f)[uVar14 * 2] + cStack_2d)] *
                              0x55 + (&DAT_0019033b)[uVar10]) * 6] * 0x45) {
              uVar6 = (ulonglong)(longlong)(int)(uVar14 + 3) % 4;
              iVar9 = (int)uVar6;
              if (pbVar11 ==
                  &DAT_002ddd1b +
                  (uint)(byte)(&DAT_002d33c8)
                              [((&DAT_0019033b)
                                [(uint)(byte)((&DAT_0018b67f)[uVar14 * 2] + cStack_2d) +
                                 (*(int *)((int)&DAT_0018b67b + iVar9 * 2 + 1) >> 0x18)] * 0x55 +
                               (&DAT_0019033b)
                               [(*(int *)((int)&DAT_0018b67b + iVar9 * 2) >> 0x18) + uVar10]) * 6] *
                  0x45) {
                cVar13 = (&DAT_001921b0)[uVar14];
                sVar7 = *(short *)(pbVar11 + 0x41);
                *(short *)(pbVar11 + 0x41) = sVar7 + cVar13;
                cVar3 = (&DAT_001921b0)[iVar9];
                pbVar11[0x43] = (byte)uVar6;
                *(short *)(pbVar11 + 0x41) = sVar7 + cVar13 + (short)cVar3;
              }
              else {
                *(short *)(pbVar11 + 0x41) =
                     *(short *)(pbVar11 + 0x41) + (short)(char)(&DAT_001921b0)[uVar14];
              }
            }
            else {
              pbVar11[0x43] = (byte)((ulonglong)(longlong)(int)(uVar14 + 1) % 4);
            }
          }
          pbVar11[0x44] = (byte)((pbVar11[0x44] + 1) % 3);
        }
      }
    }
    pbVar12 = pbVar12 + 0x45;
    if (DAT_002f10d6 <= pbVar12) goto LAB_000c7ecd;
    bVar1 = *pbVar12;
  } while( true );
}

/******************************************************************************
 * Function : dk_created_chicken_wall_0c7f7c (Ghidra: FUN_000c7f7c)
 * Prototype: undefined8 dk_created_chicken_wall_0c7f7c(void);
 * Address  : 0xc7f7c (Size: 747 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:191 ("Created chicken in a wall"); room.cpp:205 ("Cannot Create Food!")
 * Naming   : String 'Created chicken in a wall'
 * Callers  : 1 -> 0xc7be4
 * Callees  : 5 -> 0x43f07, 0x50d3c, 0x7dbc0, 0xb28e8, 0xddaf0
 * Strings  :
 *   - 0x16bece: "room.cpp"
 *   - 0x16beeb: "room.cpp"
 *   - 0x16beb4: "Created chicken in a wall"
 *   - 0x16bed7: "Cannot Create Food!"
 ******************************************************************************/
undefined8 FUN_000c7f7c(void)

{
  bool bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_EDX;
  char local_34;
  char local_30;
  uint local_24;
  ushort uStack_20;
  short sStack_1c;
  
  if ((*(ushort *)(in_EAX + 0xe) <= *(ushort *)(in_EAX + 0x10)) ||
     (DAT_002e8bee % ((uint)DAT_002ebaf4 / (uint)*(ushort *)(in_EAX + 0xe) + 1) != 0)) {
LAB_000c825b:
    uVar7 = 0;
LAB_000c825d:
    return CONCAT44(in_EDX,uVar7);
  }
  do {
    do {
      uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
      local_24 = DAT_002e8bf6 % (uint)*(ushort *)(in_EAX + 0x3b);
      uVar4 = local_24;
      for (sStack_1c = *(short *)(in_EAX + 0x37); ((uVar4 & 0xffff) != 0 && (sStack_1c != 0));
          sStack_1c = *(short *)(&DAT_002d33c6 + sStack_1c * 6)) {
        uVar4 = uVar4 - 1;
      }
      uStack_20 = 0;
    } while (*(short *)(in_EAX + 0x3b) == 0);
    do {
      if ((ushort)local_24 == *(ushort *)(in_EAX + 0x3b)) {
        local_24 = local_24 ^ *(ushort *)(in_EAX + 0x3b);
        sStack_1c = *(short *)(in_EAX + 0x37);
      }
      uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar4 = uVar4 >> 0xd | uVar4 * 0x80000;
      DAT_002e8bf6 = uVar4;
      for (uVar2 = 0; uVar4 = uVar4 % 9, uVar2 < 9; uVar2 = uVar2 + 1) {
        local_30 = (char)((int)sStack_1c % 0x55) * '\x03' +
                   (char)((ulonglong)(longlong)(int)uVar4 % 3);
        local_34 = (char)((int)sStack_1c / 0x55) * '\x03' +
                   (char)((ulonglong)(longlong)(int)uVar4 / 3);
        iVar5 = FUN_00050d3c();
        if (((iVar5 == 0) && (iVar5 = FUN_00050d3c(), iVar5 == 0)) &&
           (*(byte *)((int)&DAT_0019e973 +
                     (*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(local_34,local_30) * 5 + 1) &
                     0x7ff) * 0x18 + 2) >> 4 == 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar5 = FUN_00043f07(0x80);
          if (iVar5 == 0) {
            FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 191, "Created chicken in a wall") */
            goto LAB_000c825b;
          }
          uVar3 = FUN_000b28e8();
          *(undefined2 *)(iVar5 + 0x11) = uVar3;
          iVar6 = FUN_0007dbc0();
          if (iVar6 != 0) {
            FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 205, "Cannot Create Food!") */
          }
          *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
          *(short *)(iVar5 + 0x13) =
               (short)((int)((uint)*(byte *)(iVar5 + 0x49) << 8) / (*(int *)(iVar5 + 0x3c) >> 0x10))
               + -1;
          uVar7 = 1;
          goto LAB_000c825d;
        }
        uVar4 = uVar4 + 1;
      }
      uStack_20 = uStack_20 + 1;
      local_24 = local_24 + 1;
      sStack_1c = *(short *)(&DAT_002d33c6 + sStack_1c * 6);
    } while (uStack_20 < *(ushort *)(in_EAX + 0x3b));
  } while( true );
}

/******************************************************************************
 * Function : sub_0c8268 (Ghidra: FUN_000c8268)
 * Prototype: int sub_0c8268(void);
 * Address  : 0xc8268 (Size: 553 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0xc856c, 0xc8654, 0xcae40, 0xcd4dc, 0xd0118, 0xd0488
 * Callees  : 1 -> 0xda698
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 ******************************************************************************/
int FUN_000c8268(void)

{
  bool bVar1;
  byte bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint in_EDX;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = true;
  iVar7 = 2;
  iVar4 = 0;
  do {
    iVar6 = (*(int *)((int)&DAT_0018b69e + iVar7) >> 0x10) + in_EAX;
    iVar5 = iVar6 % 0x55;
    iVar3 = iVar6 / 0x55;
    if ((((&DAT_002d33ca)[((&DAT_0019033b)[iVar5 * 3] + (&DAT_0019033b)[iVar3 * 3] * 0x55) * 6] & 7)
         == in_EDX) && ((&DAT_002d33c5)[iVar6 * 6] == (&DAT_002d33c5)[in_EAX * 6])) {
      iVar4 = iVar4 + 2;
    }
    else {
      bVar1 = false;
      bVar2 = FUN_000da698();
      if (bVar2 < 10) {
        if ((bVar2 < 2) || (bVar2 < 3)) {
LAB_000c82ee:
          iVar4 = extraout_ECX + 1;
        }
        else {
          iVar4 = extraout_ECX;
          if ((bVar2 == 4) &&
             (iVar4 = extraout_ECX,
             ((&DAT_002d33ca)[((&DAT_0019033b)[iVar3 * 3] * 0x55 + (&DAT_0019033b)[iVar5 * 3]) * 6]
             & 7) == in_EDX)) {
            iVar4 = extraout_ECX + 2;
          }
        }
      }
      else {
        iVar4 = extraout_ECX;
        if ((0xb < bVar2) && (iVar4 = extraout_ECX, 0x33 < bVar2)) {
          if (bVar2 < 0x35) goto LAB_000c82ee;
          iVar4 = extraout_ECX;
          if ((bVar2 == 99) &&
             (iVar4 = extraout_ECX,
             ((&DAT_002d33ca)[((&DAT_0019033b)[iVar3 * 3] * 0x55 + (&DAT_0019033b)[iVar5 * 3]) * 6]
             & 7) == in_EDX)) {
            iVar4 = extraout_ECX + 2;
          }
        }
      }
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 != 0x12);
  if (bVar1) {
    iVar7 = 0;
    do {
      iVar3 = (*(int *)((int)&DAT_0018b69e + iVar7) >> 0x10) + in_EAX;
      if ((((&DAT_002d33ca)
            [((&DAT_0019033b)[(iVar3 % 0x55) * 3] + (&DAT_0019033b)[(iVar3 / 0x55) * 3] * 0x55) * 6]
           & 7) != in_EDX) || ((&DAT_002d33c5)[iVar3 * 6] != (&DAT_002d33c5)[in_EAX * 6])) {
        bVar1 = false;
        break;
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x12);
  }
  if (bVar1) {
    iVar4 = iVar4 + 2;
  }
  return iVar4;
}

/******************************************************************************
 * Function : dk_how_room_exist_slabs_0c856c (Ghidra: FUN_000c856c)
 * Prototype: void dk_how_room_exist_slabs_0c856c(void);
 * Address  : 0xc856c (Size: 232 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 2 -> 0x457bd, 0xda6fc
 * Callees  : 2 -> 0xc8268, 0xddaf0
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 *   - 0x16bef4: "HOW CAN A ROOM EXIST WITH NO SLABS?"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000c85c7) */

void FUN_000c856c(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  
  uVar2 = *(ushort *)(in_EAX + 0x3b);
  if (uVar2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
    iVar5 = 0;
  }
  else {
    if (uVar2 < 2) {
      iVar5 = 0;
    }
    else if (uVar2 == 2) {
      iVar5 = 4;
    }
    else {
      iVar5 = (uint)*(ushort *)(in_EAX + 0x3b) * 4 + -4;
    }
    uVar4 = (uint)*(ushort *)(in_EAX + 0x3b);
    if (0x31 < *(ushort *)(in_EAX + 0x3b)) {
      uVar4 = 0x31;
    }
    bVar1 = (&DAT_0018b6d4)[uVar4];
    iVar6 = 0;
    uVar2 = *(ushort *)(in_EAX + 0x3b);
    for (uVar3 = *(ushort *)(in_EAX + 0x37); uVar3 != 0;
        uVar3 = *(ushort *)(&DAT_002d33c6 + (uint)uVar3 * 6)) {
      iVar6 = FUN_000c8268();
      iVar6 = extraout_ECX + iVar6;
    }
    iVar5 = ((iVar6 - iVar5) * 0x100) / (int)(((uint)uVar2 * 8 + (uint)bVar1 * 2) - iVar5);
    if (0x100 < iVar5) {
      iVar5 = 0x100;
    }
  }
  *(short *)(in_EAX + 0x3f) = (short)iVar5;
  return;
}

/******************************************************************************
 * Function : dk_how_room_exist_slabs_0c8654 (Ghidra: FUN_000c8654)
 * Prototype: undefined4 dk_how_room_exist_slabs_0c8654(void);
 * Address  : 0xc8654 (Size: 1724 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 7 -> 0x4a916, 0x5f6c5, 0x6d909, 0xc3c3c, 0xc4f70, 0xc6374, 0xcae40
 * Callees  : 17 -> 0x23787, 0x444a9, 0x50d3c, 0x63b6d, 0x72af4, 0xc8268, 0xc8d10, 0xc9040, 0xc9280, 0xc98d0 ...
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 *   - 0x16bef4: "HOW CAN A ROOM EXIST WITH NO SLABS?"
 ******************************************************************************/
undefined4 FUN_000c8654(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  uint uVar11;
  int extraout_EDX;
  undefined1 unaff_BL;
  int *piVar12;
  int local_24;
  
  iVar8 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[in_EAX * 3] + (&DAT_0019033b)[in_EDX * 3] * 0x55) * 6] *
          0x45;
  piVar12 = (int *)(&DAT_002ddd1b + iVar8);
  uVar11 = in_EAX + in_EDX * 0x55;
  FUN_00023787();
  FUN_000c9280();
  if (*(short *)(&DAT_002ddd56 + iVar8) == 1) {
    if (((*(short *)(&DAT_002ddd25 + iVar8) != 7) && (*(short *)(&DAT_002ddd25 + iVar8) != 1)) &&
       (iVar7 = FUN_00050d3c(), iVar7 != 0)) {
      FUN_00072af4();
    }
    FUN_000c9040(unaff_BL);
    sVar6 = *(short *)(&DAT_002ddd52 + iVar8);
    while (sVar6 != 0) {
      iVar7 = sVar6 * 6;
      sVar6 = *(short *)(&DAT_002d33c6 + iVar7);
      FUN_000c9280();
      *(undefined2 *)(&DAT_002d33c6 + iVar7) = 0;
    }
    if (((*(short *)(&DAT_002ddd25 + iVar8) != 7) && (*(short *)(&DAT_002ddd25 + iVar8) != 1)) &&
       (iVar8 = FUN_00050d3c(), iVar8 != 0)) {
      FUN_00072af4();
    }
    FUN_000c98d0();
    FUN_000da6fc();
    return 0;
  }
  uVar9 = (uint)*(ushort *)(&DAT_002ddd52 + iVar8);
  if (uVar9 == uVar11) {
    if (((*(short *)(&DAT_002ddd25 + iVar8) != 7) && (*(short *)(&DAT_002ddd25 + iVar8) != 1)) &&
       (iVar7 = FUN_00050d3c(), iVar7 != 0)) {
      FUN_00072af4();
    }
    *(undefined2 *)(&DAT_002ddd52 + iVar8) = *(undefined2 *)(&DAT_002d33c6 + uVar11 * 6);
    FUN_000d0d80();
  }
  else if (uVar9 != 0) {
    do {
      if (*(ushort *)(&DAT_002d33c6 + uVar9 * 6) == uVar11) {
        *(undefined2 *)(&DAT_002d33c6 + uVar9 * 6) = *(undefined2 *)(&DAT_002d33c6 + uVar11 * 6);
      }
      uVar9 = (uint)*(ushort *)(&DAT_002d33c6 + uVar9 * 6);
    } while (uVar9 != 0);
  }
  FUN_000c9040(unaff_BL);
  uVar3 = *(ushort *)(&DAT_002ddd52 + iVar8);
  while (uVar11 = (uint)uVar3, uVar11 != 0) {
    (&DAT_002d33c8)[(uVar11 % 0x55 + (uVar11 / 0x55) * 0x55) * 6] = 0;
    uVar3 = *(ushort *)(&DAT_002d33c6 + uVar11 * 6);
  }
  uVar3 = *(ushort *)(&DAT_002ddd52 + iVar8);
  while (uVar3 != 0) {
    uVar4 = *(ushort *)(&DAT_002d33c6 + (uint)uVar3 * 6);
    iVar7 = FUN_000caa90();
    if (iVar7 == 0) {
      FUN_000c8d10();
      iVar7 = FUN_000444a9(CONCAT22((uVar3 / 0x55) * 0x300 + 0x80,(uVar3 % 0x55) * 0x300 + 0x80),
                           0x180);
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0x13) = extraout_ECX_00;
      }
      (&DAT_002e1086)[(*piVar12 >> 0x18) * 0x542] =
           (&DAT_002e1086)[(*piVar12 >> 0x18) * 0x542] + extraout_ECX_00;
      (&DAT_002e1082)[(*piVar12 >> 0x18) * 0x542] =
           (&DAT_002e1082)[(*piVar12 >> 0x18) * 0x542] + extraout_ECX_00;
      uVar3 = uVar4;
    }
    else {
      uVar3 = *(ushort *)(iVar7 + 0x3b);
      if (uVar3 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
        iVar10 = 0;
      }
      else {
        if (uVar3 < 2) {
          local_24 = 0;
        }
        else if (uVar3 == 2) {
          local_24 = 4;
        }
        else {
          local_24 = (uint)*(ushort *)(iVar7 + 0x3b) * 4 + -4;
        }
        uVar11 = (uint)*(ushort *)(iVar7 + 0x3b);
        if (0x31 < *(ushort *)(iVar7 + 0x3b)) {
          uVar11 = 0x31;
        }
        bVar2 = (&DAT_0018b6d4)[uVar11];
        uVar3 = *(ushort *)(iVar7 + 0x3b);
        iVar10 = 0;
        for (uVar5 = *(ushort *)(iVar7 + 0x37); uVar5 != 0;
            uVar5 = *(ushort *)(&DAT_002d33c6 + (uint)uVar5 * 6)) {
          iVar10 = FUN_000c8268();
          iVar10 = extraout_ECX + iVar10;
        }
        iVar10 = ((iVar10 - local_24) * 0x100) /
                 (int)(((uint)uVar3 * 8 + (uint)bVar2 * 2) - local_24);
        if (0x100 < iVar10) {
          iVar10 = 0x100;
        }
      }
      *(short *)(iVar7 + 0x3f) = (short)iVar10;
      FUN_000cb144();
      uVar3 = uVar4;
    }
  }
  if (*piVar12 >> 0x18 != (uint)DAT_002eb543) {
    uVar11 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_002ddd58 + iVar8)];
    if (DAT_001ae9fc < uVar11) {
      do {
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(uVar11 + 100)] + 0x7e) = 0xffff;
        uVar11 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar11 + 100)] + 0x2aa)];
      } while (DAT_001ae9fc < uVar11);
    }
    uVar11 = (&DAT_001ae9fc)[DAT_002e6eb6];
    if (DAT_001ae9fc < uVar11) {
      do {
        if (*(short *)((&DAT_001b0a00)[*(ushort *)(uVar11 + 100)] + 0x7e) == -1) {
          if ((uint)(byte)(&DAT_002d33c8)
                          [((&DAT_0019033b)[*(byte *)(uVar11 + 0xe)] +
                           (&DAT_0019033b)[*(byte *)(uVar11 + 0x10)] * 0x55) * 6] * 0x45 == 0) {
            pbVar1 = (byte *)((&DAT_001b0a00)[*(ushort *)(uVar11 + 100)] + 1);
            *pbVar1 = *pbVar1 & 0xdf;
            *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(uVar11 + 100)] + 0x7e) = 0;
            FUN_00063b6d();
          }
          else {
            FUN_000cdaec();
            FUN_000cd85c();
          }
        }
        uVar11 = (&DAT_001ae9fc)[*(ushort *)(uVar11 + 0x67)];
      } while (DAT_001ae9fc < uVar11);
    }
  }
  FUN_000c98d0();
  *(undefined2 *)(&DAT_002d33c6 + extraout_EDX * 6) = 0;
  return 0;
}

/******************************************************************************
 * Function : sub_0c8d10 (Ghidra: FUN_000c8d10)
 * Prototype: undefined4 sub_0c8d10(void);
 * Address  : 0xc8d10 (Size: 815 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xc8654, 0xcd4dc
 * Callees  : 8 -> 0x23787, 0x50d3c, 0x72af4, 0xc9040, 0xc9280, 0xc98d0, 0xd0d80, 0xda6fc
 ******************************************************************************/
undefined4 FUN_000c8d10(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int in_EDX;
  undefined1 unaff_BL;
  uint uVar5;
  
  iVar3 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[in_EAX * 3] + (&DAT_0019033b)[in_EDX * 3] * 0x55) * 6] *
          0x45;
  uVar5 = in_EAX + in_EDX * 0x55;
  FUN_00023787();
  FUN_000c9280();
  if (*(short *)(&DAT_002ddd56 + iVar3) != 1) {
    uVar4 = (uint)*(ushort *)(&DAT_002ddd52 + iVar3);
    if (uVar5 == uVar4) {
      if (((*(short *)(&DAT_002ddd25 + iVar3) != 7) && (*(short *)(&DAT_002ddd25 + iVar3) != 1)) &&
         (iVar2 = FUN_00050d3c((uVar4 % 0x55) * 3 + 1), iVar2 != 0)) {
        FUN_00072af4();
      }
      *(undefined2 *)(&DAT_002ddd52 + iVar3) = *(undefined2 *)(&DAT_002d33c6 + uVar5 * 6);
      FUN_000d0d80();
    }
    else if (uVar4 != 0) {
      do {
        if (*(ushort *)(&DAT_002d33c6 + uVar4 * 6) == uVar5) {
          *(undefined2 *)(&DAT_002d33c6 + uVar4 * 6) = *(undefined2 *)(&DAT_002d33c6 + uVar5 * 6);
        }
        uVar4 = (uint)*(ushort *)(&DAT_002d33c6 + uVar4 * 6);
      } while (uVar4 != 0);
    }
    FUN_000c9040(unaff_BL);
    *(undefined2 *)(&DAT_002d33c6 + uVar5 * 6) = 0;
    return 0;
  }
  if (((*(short *)(&DAT_002ddd25 + iVar3) != 7) && (*(short *)(&DAT_002ddd25 + iVar3) != 1)) &&
     (iVar2 = FUN_00050d3c(), iVar2 != 0)) {
    FUN_00072af4();
  }
  FUN_000c9040(unaff_BL);
  sVar1 = *(short *)(&DAT_002ddd52 + iVar3);
  while (sVar1 != 0) {
    sVar1 = *(short *)(&DAT_002d33c6 + sVar1 * 6);
    FUN_000c9280();
    *(undefined2 *)(&DAT_002d33c6 + extraout_ECX) = 0;
  }
  if (((*(short *)(&DAT_002ddd25 + iVar3) != 7) && (*(short *)(&DAT_002ddd25 + iVar3) != 1)) &&
     (iVar3 = FUN_00050d3c(), iVar3 != 0)) {
    FUN_00072af4();
  }
  FUN_000c98d0();
  FUN_000da6fc();
  return 0;
}

/******************************************************************************
 * Function : dk_how_come_this_bridge_0c9040 (Ghidra: FUN_000c9040)
 * Prototype: void dk_how_come_this_bridge_0c9040(char param_1);
 * Address  : 0xc9040 (Size: 312 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:524 ("How come this bridge was placed on path? Hmmm?")
 * Naming   : String 'How come this bridge was placed on path? Hmmm?'
 * Callers  : 2 -> 0xc8654, 0xc8d10
 * Callees  : 3 -> 0x2371b, 0xd7688, 0xddaf0
 * Strings  :
 *   - 0x16bf92: "room.cpp"
 *   - 0x16bf63: "How come this bridge was placed on path? Hmmm?"
 ******************************************************************************/
void FUN_000c9040(char param_1)

{
  byte bVar1;
  int in_EAX;
  int in_EDX;
  int unaff_EBX;
  
  if (*(short *)(in_EAX + 10) == 0xf) {
    bVar1 = ((&DAT_002d33ca)[(in_EDX + unaff_EBX * 0x55) * 6] & 0x1f) >> 3;
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        FUN_000d7688(0);
        return;
      }
      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 524, "How come this bridge was placed on path? Hmmm?") */
      FUN_000d7688(0);
      return;
    }
    FUN_000d7688(0);
  }
  else {
    if (param_1 != '\0') {
      FUN_000d7688(0);
      return;
    }
    FUN_000d7688(0);
    FUN_0002371b();
  }
  return;
}

/******************************************************************************
 * Function : sub_0c9178 (Ghidra: FUN_000c9178)
 * Prototype: longlong sub_0c9178(void);
 * Address  : 0xc9178 (Size: 209 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x50d3c, 0x72af4, 0xc9280, 0xc98d0
 ******************************************************************************/
longlong FUN_000c9178(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  uint in_EDX;
  
  sVar1 = *(short *)(in_EAX + 0x37);
  while (sVar1 != 0) {
    sVar1 = *(short *)(&DAT_002d33c6 + sVar1 * 6);
    FUN_000c9280();
    *(undefined2 *)(&DAT_002d33c6 + extraout_ECX) = 0;
  }
  if ((*(short *)(in_EAX + 10) != 7) && (*(short *)(in_EAX + 10) != 1)) {
    iVar2 = FUN_00050d3c();
    if (iVar2 != 0) {
      FUN_00072af4();
    }
  }
  FUN_000c98d0();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_lair_thinks_it_belongs_0c9280 (Ghidra: FUN_000c9280)
 * Prototype: void dk_lair_thinks_it_belongs_0c9280(void);
 * Address  : 0xc9280 (Size: 1616 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:747 ("Lair thinks it belongs to a creature, but the creature disagrees."); room.cpp:752 ("This lair has no owner!!!")
 * Naming   : String 'Lair thinks it belongs to a creature, but the creature disag'
 * Callers  : 3 -> 0xc8654, 0xc8d10, 0xc9178
 * Callees  : 15 -> 0x24998, 0x4d3d4, 0x4dc89, 0x4fdac, 0x50ea6, 0x5131e, 0x63b6d, 0x72af4, 0x77a5b, 0x8608c ...
 * Strings  :
 *   - 0x16bfdd: "room.cpp"
 *   - 0x16c000: "room.cpp"
 *   - 0x16bf9b: "Lair thinks it belongs to a creature, but the creature disagrees."
 *   - 0x16bfe6: "This lair has no owner!!!"
 ******************************************************************************/
void FUN_000c9280(void)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  byte *pbVar7;
  int iVar8;
  byte in_DL;
  short sVar9;
  byte unaff_BL;
  undefined1 *puVar10;
  int iVar11;
  bool bVar12;
  undefined4 auStack_44 [3];
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined2 uStack_1a;
  short sStack_18;
  
  puVar10 = local_38;
  iVar4 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[(uint)in_DL * 3] +
                       (&DAT_0019033b)[(uint)unaff_BL * 3] * 0x55) * 6] * 0x45;
  sVar9 = (ushort)unaff_BL * 0x55 + (ushort)in_DL;
  _uStack_1a = CONCAT22(sVar9,uStack_1a);
  local_28 = ((int)sVar9 % 0x55) * 3;
  local_30 = ((int)sVar9 / 0x55) * 3;
  local_24 = local_28 + 3;
  local_2c = local_30 + 3;
  (&DAT_002d33c8)[((uint)unaff_BL * 0x55 + (uint)in_DL) * 6] = 0;
  iVar8 = local_30 - local_2c;
  bVar12 = SBORROW4(local_30,local_2c);
  while (bVar12 != iVar8 < 0) {
    *(int *)(puVar10 + 0x18) = *(int *)(puVar10 + 0x10);
    if (*(int *)(puVar10 + 0x10) < *(int *)(puVar10 + 0x14)) {
      *(int *)(puVar10 + 0x1c) = *(int *)(puVar10 + 0x10) * 5 + *(int *)(puVar10 + 8) * 0x500;
      do {
        pbVar7 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb];
        if (DAT_001ae9fc < pbVar7) {
          iVar8 = *(int *)(puVar10 + 0x1c);
          do {
            if (pbVar7[0x1f] == 5) {
              if ((pbVar7[7] == 0x58) || (pbVar7[7] == 0x5c)) {
                *(undefined4 *)(puVar10 + -4) = 0;
                *(undefined4 *)(puVar10 + -8) = 0;
                *(undefined4 *)(puVar10 + -0xc) = 0xc940d;
                FUN_0008608c();
                pbVar7 = (&DAT_001ae9fc)
                         [(*(uint *)((int)&DAT_00279203 + iVar8 + 1) & 0x3fffff) >> 0xb];
                puVar10 = puVar10 + -8;
              }
              else if (pbVar7[6] == (&DAT_002ddd1e)[iVar4]) {
                *(undefined4 *)(puVar10 + -4) = 0xc9431;
                FUN_00063b6d();
              }
            }
            pbVar7 = (&DAT_001ae9fc)[*(ushort *)(pbVar7 + 2)];
          } while (DAT_001ae9fc < pbVar7);
        }
        switch(*(undefined2 *)(&DAT_002ddd25 + iVar4)) {
        case 2:
          if (*(byte *)((int)&DAT_0019e973 +
                       (*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x7ff) * 0x18
                       + 2) >> 4 == 1) {
            *(undefined4 *)(puVar10 + -4) = 0xc94a0;
            iVar8 = FUN_0005131e();
            if (iVar8 != 0) {
              bVar1 = puVar10[0x24];
              *(int *)(&DAT_002ddd32 + iVar4) =
                   *(int *)(&DAT_002ddd32 + iVar4) - *(int *)(iVar8 + 0x13);
              (&DAT_002e1082)[(uint)bVar1 * 0x542] =
                   (&DAT_002e1082)[(uint)bVar1 * 0x542] - *(int *)(iVar8 + 0x13);
              *(undefined4 *)(puVar10 + -4) = 0xc94d5;
              FUN_00050ea6();
              *(undefined4 *)(puVar10 + -4) = 0xc94de;
              FUN_00072af4();
            }
          }
          break;
        case 3:
          pbVar7 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb
                   ];
          if ((&DAT_001ae9fc)
              [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb] !=
              DAT_001ae9fc) {
            do {
              pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar7 + 2)];
              if (((pbVar7[0x1f] == 1) && ((&DAT_0019103e)[pbVar7[0x1a]] != '\0')) &&
                 ((*pbVar7 & 0x80) == 0)) {
                *(undefined4 *)(puVar10 + -4) = 0xc9554;
                cVar5 = FUN_000cd1d4();
                if (cVar5 == '\0') {
                  *(undefined4 *)(puVar10 + -4) = 0xc958d;
                  iVar8 = FUN_000ccd6c();
                  if (iVar8 == 0) {
                    if (*(int *)(pbVar7 + 3) >> 0x18 != (uint)DAT_002eb543) {
                      *(undefined4 *)(puVar10 + -4) = 0xc9642;
                      FUN_0004fdac();
                    }
                    *(undefined4 *)(puVar10 + -4) = 0xc964b;
                    FUN_00072af4();
                  }
                  else {
                    *(undefined4 *)(puVar10 + -4) = 0xc959e;
                    uVar6 = FUN_000b28e8();
                    *(undefined2 *)(puVar10 + 4) = uVar6;
                    *(undefined4 *)(puVar10 + -4) = 0xc95ae;
                    FUN_000b3b10();
                    *(undefined4 *)(puVar10 + -4) = 0xc95bd;
                    FUN_00024998();
                    iVar8 = (uint)*(ushort *)
                                   (&DAT_002ddd25 +
                                   (uint)(byte)(&DAT_002d33c8)
                                               [((&DAT_0019033b)[pbVar7[0xe]] +
                                                (&DAT_0019033b)[pbVar7[0x10]] * 0x55) * 6] * 0x45) *
                            0x17;
                    if (*(int *)(&DAT_0018ebb1 + iVar8) != 0) {
                      pcVar2 = *(code **)(&DAT_0018ebb1 + iVar8);
                      *(undefined4 *)(puVar10 + -4) = 0xc960a;
                      (*pcVar2)();
                    }
                    if (*(int *)(&DAT_0018ebb5 + iVar8) != 0) {
                      pcVar2 = *(code **)(&DAT_0018ebb5 + iVar8);
                      *(undefined4 *)(puVar10 + -4) = 0xc9619;
                      (*pcVar2)();
                    }
                  }
                }
                else {
                  *(undefined4 *)(puVar10 + -4) = 0xc9561;
                  uVar6 = FUN_000b28e8();
                  *(undefined2 *)(puVar10 + 4) = uVar6;
                  *(undefined4 *)(puVar10 + -4) = 0xc9571;
                  FUN_000b3b10();
                  *(undefined4 *)(puVar10 + -4) = 0xc9580;
                  FUN_00024998();
                }
              }
              pbVar7 = pbVar3;
            } while (pbVar3 != DAT_001ae9fc);
          }
          break;
        case 8:
          pbVar7 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb
                   ];
          if ((&DAT_001ae9fc)
              [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb] !=
              DAT_001ae9fc) {
            do {
              pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar7 + 2)];
              if (((pbVar7[0x1f] == 1) && ((&DAT_0019116c)[pbVar7[0x1a]] != '\0')) &&
                 ((pbVar7[1] & 1) == 0)) {
                *(undefined4 *)(puVar10 + -4) = 0xc96c3;
                cVar5 = FUN_000cd1d4();
                if (cVar5 == '\0') {
                  *(undefined4 *)(puVar10 + -4) = 0xc96fc;
                  iVar8 = FUN_000ccd6c();
                  if (iVar8 == 0) {
                    *(undefined4 *)(puVar10 + -4) = 0xc97ab;
                    FUN_00077a5b();
                    *(undefined4 *)(puVar10 + -4) = 0xc97b4;
                    FUN_00072af4();
                  }
                  else {
                    *(undefined4 *)(puVar10 + -4) = 0xc970d;
                    uVar6 = FUN_000b28e8();
                    *(undefined2 *)(puVar10 + 4) = uVar6;
                    *(undefined4 *)(puVar10 + -4) = 0xc971d;
                    FUN_000b3b10();
                    *(undefined4 *)(puVar10 + -4) = 0xc972c;
                    FUN_00024998();
                    iVar8 = (uint)*(ushort *)
                                   (&DAT_002ddd25 +
                                   (uint)(byte)(&DAT_002d33c8)
                                               [((&DAT_0019033b)[pbVar7[0xe]] +
                                                (&DAT_0019033b)[pbVar7[0x10]] * 0x55) * 6] * 0x45) *
                            0x17;
                    if (*(int *)(&DAT_0018ebb1 + iVar8) != 0) {
                      pcVar2 = *(code **)(&DAT_0018ebb1 + iVar8);
                      *(undefined4 *)(puVar10 + -4) = 0xc9779;
                      (*pcVar2)();
                    }
                    if (*(int *)(&DAT_0018ebb5 + iVar8) != 0) {
                      pcVar2 = *(code **)(&DAT_0018ebb5 + iVar8);
                      *(undefined4 *)(puVar10 + -4) = 0xc9788;
                      (*pcVar2)();
                    }
                  }
                }
                else {
                  *(undefined4 *)(puVar10 + -4) = 0xc96d0;
                  uVar6 = FUN_000b28e8();
                  *(undefined2 *)(puVar10 + 4) = uVar6;
                  *(undefined4 *)(puVar10 + -4) = 0xc96e0;
                  FUN_000b3b10();
                  *(undefined4 *)(puVar10 + -4) = 0xc96ef;
                  FUN_00024998();
                }
              }
              pbVar7 = pbVar3;
            } while (pbVar3 != DAT_001ae9fc);
          }
          break;
        case 0xd:
          pbVar7 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb
                   ];
          if ((&DAT_001ae9fc)
              [(*(uint *)((int)&DAT_00279203 + *(int *)(puVar10 + 0x1c) + 1) & 0x3fffff) >> 0xb] !=
              DAT_001ae9fc) {
            do {
              pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar7 + 2)];
              if ((pbVar7[0x1f] == 1) &&
                 ((((bVar1 = pbVar7[0x1a], bVar1 == 9 || (bVar1 == 0x28)) || (bVar1 == 0x29)) ||
                  ((bVar1 == 0x2a || (bVar1 == 10)))))) {
                *(undefined4 *)(puVar10 + -4) = 0xc982a;
                FUN_00072af4();
              }
              pbVar7 = pbVar3;
            } while (pbVar3 != DAT_001ae9fc);
          }
          break;
        case 0xe:
          *(undefined4 *)(puVar10 + -4) = 0xc983f;
          iVar8 = FUN_0004dc89();
          if (iVar8 != 0) {
            if (*(short *)(iVar8 + 0x13) == 0) {
              *(undefined4 *)(puVar10 + -4) = 0xc98a3;
              FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 747, "Lair thinks it belongs to a creature, but the creature disagrees.") */
            }
            else if (*(short *)(iVar8 + 0x1b) ==
                     *(short *)((&DAT_001b0a00)
                                [*(ushort *)((int)(&DAT_001ae9fc)[*(ushort *)(iVar8 + 0x13)] + 100)]
                               + 0x6a)) {
              *(undefined4 *)(puVar10 + -4) = 0xc9877;
              FUN_0004d3d4();
            }
            else {
              *(undefined4 *)(puVar10 + -4) = 0xc988d;
              FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 752, "This lair has no owner!!!") */
            }
          }
        }
        iVar8 = *(int *)(puVar10 + 0x18);
        *(int *)(puVar10 + 0x1c) = *(int *)(puVar10 + 0x1c) + 5;
        *(int *)(puVar10 + 0x18) = iVar8 + 1;
      } while (iVar8 + 1 < *(int *)(puVar10 + 0x14));
    }
    iVar11 = *(int *)(puVar10 + 8) + 1;
    *(int *)(puVar10 + 8) = iVar11;
    iVar8 = iVar11 - *(int *)(puVar10 + 0xc);
    bVar12 = SBORROW4(iVar11,*(int *)(puVar10 + 0xc));
  }
  return;
}

/******************************************************************************
 * Function : sub_0c98d0 (Ghidra: FUN_000c98d0)
 * Prototype: void sub_0c98d0(void);
 * Address  : 0xc98d0 (Size: 181 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0xc8654, 0xc8d10, 0xc9178, 0xcc65c, 0xcd4dc
 * Callees  : 1 -> 0x72c25
 ******************************************************************************/
void FUN_000c98d0(void)

{
  ushort uVar1;
  int *in_EAX;
  int iVar2;
  
  if (*in_EAX >> 0x18 != (uint)DAT_002eb543) {
    iVar2 = (*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10) * 2;
    if (*(short *)((int)in_EAX + 1) == *(short *)(&DAT_002e0594 + iVar2)) {
      *(undefined2 *)(&DAT_002e0594 + iVar2) = *(undefined2 *)((int)in_EAX + 6);
      *(undefined2 *)(&DAT_002ddd1f + (uint)*(ushort *)((int)in_EAX + 6) * 0x45) = 0;
    }
    else {
      uVar1 = *(ushort *)(in_EAX + 1);
      *(ushort *)(&DAT_002ddd1f + (uint)*(ushort *)((int)in_EAX + 6) * 0x45) = uVar1;
      *(undefined2 *)(&DAT_002ddd21 + (uint)uVar1 * 0x45) = *(undefined2 *)((int)in_EAX + 6);
    }
    (&DAT_002e0b4b)[(uint)*(ushort *)((int)in_EAX + 10) + (*in_EAX >> 0x18) * 0x1508] =
         (&DAT_002e0b4b)[(uint)*(ushort *)((int)in_EAX + 10) + (*in_EAX >> 0x18) * 0x1508] + -1;
  }
  FUN_00072c25();
  return;
}

/******************************************************************************
 * Function : sub_0c9988 (Ghidra: FUN_000c9988)
 * Prototype: undefined1 * sub_0c9988(void);
 * Address  : 0xc9988 (Size: 419 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x11b51, 0x26c6d, 0x26dbc, 0x3a2ad, 0x525b2, 0xab2c8, 0xc3c3c, 0xc4f70
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000c9988(void)

{
  char cVar1;
  int in_EAX;
  undefined1 *puVar2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  char in_DL;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  int iVar8;
  undefined1 *local_1c;
  char cStack_14;
  
  iVar7 = 0x7fffffff;
  local_1c = (undefined1 *)0x0;
  if (unaff_BL == -1) {
    for (cStack_14 = '\x01'; cStack_14 < 0x11; cStack_14 = cStack_14 + '\x01') {
      puVar2 = &DAT_002ddd1b +
               (uint)*(ushort *)(&DAT_002e0594 + cStack_14 * 2 + in_DL * 0x1508) * 0x45;
      if (&DAT_002ddd1b < puVar2) {
        do {
          uVar3 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar2[8];
          uVar4 = (int)uVar3 >> 0x1f;
          uVar5 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar2[9];
          uVar6 = (int)uVar5 >> 0x1f;
          iVar8 = ((uVar3 ^ uVar4) - uVar4) + ((uVar5 ^ uVar6) - uVar6);
          if (((iVar8 < iVar7) && (cVar1 = FUN_000ccc08(), puVar2 = extraout_ECX, cVar1 != '\0')) &&
             ((*(char *)(in_EAX + 0x1f) != '\x05' ||
              (cVar1 = FUN_00082774(), puVar2 = extraout_ECX_00, cVar1 != '\0')))) {
            iVar7 = iVar8;
            local_1c = puVar2;
          }
          puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
        } while (&DAT_002ddd1b < puVar2);
      }
    }
  }
  else {
    puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + in_DL * 0x1508) * 0x45
    ;
    if (&DAT_002ddd1b < puVar2) {
      do {
        uVar3 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar2[8];
        uVar4 = (int)uVar3 >> 0x1f;
        uVar5 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar2[9];
        uVar6 = (int)uVar5 >> 0x1f;
        iVar8 = ((uVar3 ^ uVar4) - uVar4) + ((uVar5 ^ uVar6) - uVar6);
        if (((iVar8 < iVar7) && (cVar1 = FUN_000ccc08(), puVar2 = extraout_ECX_01, cVar1 != '\0'))
           && ((*(char *)(in_EAX + 0x1f) != '\x05' ||
               (cVar1 = FUN_00082774(), puVar2 = extraout_ECX_02, cVar1 != '\0')))) {
          iVar7 = iVar8;
          local_1c = puVar2;
        }
        puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
      } while (&DAT_002ddd1b < puVar2);
    }
  }
  return local_1c;
}

/******************************************************************************
 * Function : sub_0c9b2c (Ghidra: FUN_000c9b2c)
 * Prototype: undefined4 sub_0c9b2c(void);
 * Address  : 0xc9b2c (Size: 864 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x52362, 0xac094
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined4 FUN_000c9b2c(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  char in_DL;
  char unaff_BL;
  int iVar6;
  uint uVar7;
  int local_24;
  undefined4 local_20;
  undefined4 local_13;
  
  iVar2 = (int)unaff_BL;
  local_20 = 0;
  if (iVar2 == -1) {
    uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar7 >> 0xd | uVar7 * 0x80000;
    local_24 = 0;
    local_13 = CONCAT13((char)((ulonglong)DAT_002e8bf6 % 0x11),(undefined3)local_13);
    do {
      iVar2 = local_13 >> 0x18;
      uVar7 = 0;
      puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + iVar2 * 2 + in_DL * 0x1508) * 0x45;
      if (&DAT_002ddd1b < puVar3) {
        do {
          puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
          uVar7 = uVar7 + 1;
        } while (&DAT_002ddd1b < puVar3);
      }
      if (uVar7 != 0) {
        uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
        uVar4 = DAT_002e8bf6 % uVar7;
        puVar3 = &DAT_002ddd1b +
                 (uint)*(ushort *)(&DAT_002e0594 + iVar2 * 2 + in_DL * 0x1508) * 0x45;
        if (&DAT_002ddd1b < puVar3) {
          do {
            if ((int)uVar4 < 1) break;
            puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
            uVar4 = uVar4 - 1;
          } while (&DAT_002ddd1b < puVar3);
        }
        iVar6 = 0;
        if (0 < (int)uVar7) {
          do {
            cVar1 = FUN_000ccc08();
            if (cVar1 != '\0') {
              if (*(char *)(in_EAX + 0x1f) != '\x05') {
                return extraout_ECX;
              }
              cVar1 = FUN_00082774();
              if (cVar1 != '\0') {
                return extraout_ECX_00;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar7);
        }
      }
      local_24 = local_24 + 1;
      local_13 = CONCAT13((char)((iVar2 + 1) % 0x11),(undefined3)local_13);
    } while (local_24 < 0x11);
  }
  else {
    uVar7 = 0;
    puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + iVar2 * 2 + in_DL * 0x1508) * 0x45;
    if (&DAT_002ddd1b < puVar3) {
      do {
        puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
        uVar7 = uVar7 + 1;
      } while (&DAT_002ddd1b < puVar3);
    }
    if (uVar7 != 0) {
      uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
      uVar4 = DAT_002e8bf6 % uVar7;
      puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + iVar2 * 2 + in_DL * 0x1508) * 0x45;
      if (&DAT_002ddd1b < puVar3) {
        do {
          if ((int)uVar4 < 1) break;
          puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
          uVar4 = uVar4 - 1;
        } while (&DAT_002ddd1b < puVar3);
      }
      iVar2 = 0;
      if ((int)uVar7 < 1) {
        return 0;
      }
      do {
        cVar1 = FUN_000ccc08();
        if ((cVar1 != '\0') &&
           ((uVar5 = extraout_ECX_01, *(char *)(in_EAX + 0x1f) != '\x05' ||
            (cVar1 = FUN_00082774(), uVar5 = extraout_ECX_02, cVar1 != '\0')))) {
          return uVar5;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar7);
    }
  }
  return local_20;
}

/******************************************************************************
 * Function : sub_0c9e8c (Ghidra: FUN_000c9e8c)
 * Prototype: int sub_0c9e8c(void);
 * Address  : 0xc9e8c (Size: 955 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x66dc2, 0x76d56
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
int FUN_000c9e8c(void)

{
  char cVar1;
  int in_EAX;
  undefined1 *puVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char in_DL;
  int iVar4;
  uint uVar5;
  char unaff_BL;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_24;
  int iStack_20;
  undefined4 local_17;
  
  local_24 = 0;
  iVar4 = (int)in_DL;
  if (unaff_BL == -1) {
    uVar8 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar8 >> 0xd | uVar8 * 0x80000;
    iStack_20 = 0;
    local_17 = CONCAT13((char)((ulonglong)DAT_002e8bf6 % 0x11),(undefined3)local_17);
    do {
      iVar7 = local_17 >> 0x18;
      uVar8 = 0;
      puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + iVar7 * 2 + in_DL * 0x1508) * 0x45;
      if (&DAT_002ddd1b < puVar2) {
        do {
          if (*(int *)(puVar2 + 0x17) < (int)(uint)*(ushort *)(puVar2 + 0xe)) {
            uVar8 = uVar8 + 1;
          }
          puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
        } while (&DAT_002ddd1b < puVar2);
      }
      if (uVar8 != 0) {
        uVar5 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = uVar5 >> 0xd | uVar5 * 0x80000;
        uVar5 = DAT_002e8bf6 % uVar8;
        puVar2 = &DAT_002ddd1b +
                 (uint)*(ushort *)(&DAT_002e0594 + iVar7 * 2 + in_DL * 0x1508) * 0x45;
        if (&DAT_002ddd1b < puVar2) {
          while (-1 < (int)uVar5) {
            if (((*(int *)(puVar2 + 0x17) < (int)(uint)*(ushort *)(puVar2 + 0xe)) &&
                (uVar5 = uVar5 - 1, (int)uVar5 < 0)) ||
               (puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45,
               puVar2 <= &DAT_002ddd1b)) break;
          }
        }
        iVar6 = 0;
        if (0 < (int)uVar8) {
          do {
            if (*(int *)(puVar2 + 0x17) < (int)(uint)*(ushort *)(puVar2 + 0xe)) {
              cVar1 = FUN_000ccc08();
              iVar3 = extraout_ECX;
              if (cVar1 != '\0') {
                if (*(char *)(in_EAX + 0x1f) != '\x05') {
                  return extraout_ECX;
                }
                cVar1 = FUN_00082774();
                iVar3 = extraout_ECX_00;
                if (cVar1 != '\0') {
                  return extraout_ECX_00;
                }
              }
              puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(iVar3 + 6) * 0x45;
              if (puVar2 == &DAT_002ddd1b) {
                puVar2 = &DAT_002ddd1b +
                         (uint)*(ushort *)(&DAT_002e0594 + iVar7 * 2 + iVar4 * 0x1508) * 0x45;
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar8);
        }
      }
      iStack_20 = iStack_20 + 1;
      local_17 = CONCAT13((char)((iVar7 + 1) % 0x11),(undefined3)local_17);
    } while (iStack_20 < 0x11);
  }
  else {
    puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + iVar4 * 0x1508) * 0x45
    ;
    uVar8 = 0;
    if (&DAT_002ddd1b < puVar2) {
      do {
        if (*(int *)(puVar2 + 0x17) < (int)(uint)*(ushort *)(puVar2 + 0xe)) {
          uVar8 = uVar8 + 1;
        }
        puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
      } while (&DAT_002ddd1b < puVar2);
    }
    if (uVar8 != 0) {
      uVar5 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar5 >> 0xd | uVar5 * 0x80000;
      uVar5 = DAT_002e8bf6 % uVar8;
      puVar2 = &DAT_002ddd1b +
               (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + iVar4 * 0x1508) * 0x45;
      if (&DAT_002ddd1b < puVar2) {
        do {
          if (((int)uVar5 < 0) ||
             ((*(int *)(puVar2 + 0x17) < (int)(uint)*(ushort *)(puVar2 + 0xe) &&
              (uVar5 = uVar5 - 1, (int)uVar5 < 0)))) break;
          puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
        } while (&DAT_002ddd1b < puVar2);
      }
      iVar7 = 0;
      if ((int)uVar8 < 1) {
        return 0;
      }
      do {
        if (*(int *)(puVar2 + 0x17) < (int)(uint)*(ushort *)(puVar2 + 0xe)) {
          cVar1 = FUN_000ccc08();
          iVar6 = extraout_ECX_01;
          if ((cVar1 != '\0') &&
             ((*(char *)(in_EAX + 0x1f) != '\x05' ||
              (cVar1 = FUN_00082774(), iVar6 = extraout_ECX_02, cVar1 != '\0')))) {
            return iVar6;
          }
          puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(iVar6 + 6) * 0x45;
          if (puVar2 == &DAT_002ddd1b) {
            puVar2 = &DAT_002ddd1b +
                     (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + iVar4 * 0x1508) * 0x45;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar8);
    }
  }
  return local_24;
}

/******************************************************************************
 * Function : sub_0ca248 (Ghidra: FUN_000ca248)
 * Prototype: undefined1 * sub_0ca248(void);
 * Address  : 0xca248 (Size: 259 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000ca248(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char in_DL;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  int iVar8;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  
  iVar7 = 0x7fffffff;
  local_24 = (undefined1 *)0x0;
  local_20 = 1;
  local_1c = 2;
  do {
    if ((unaff_BL != local_20) &&
       (puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + in_DL * 0x1508 + local_1c) * 0x45
       , &DAT_002ddd1b < puVar3)) {
      do {
        uVar4 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar3[8];
        uVar5 = (int)uVar4 >> 0x1f;
        uVar2 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar3[9];
        uVar6 = (int)uVar2 >> 0x1f;
        iVar8 = ((uVar4 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6);
        if (((iVar8 < iVar7) && (cVar1 = FUN_000ccc08(), puVar3 = extraout_ECX, cVar1 != '\0')) &&
           ((*(char *)(in_EAX + 0x1f) != '\x05' ||
            (cVar1 = FUN_00082774(), puVar3 = extraout_ECX_00, cVar1 != '\0')))) {
          iVar7 = iVar8;
          local_24 = puVar3;
        }
        puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
      } while (&DAT_002ddd1b < puVar3);
    }
    local_1c = local_1c + 2;
    local_20 = local_20 + 1;
  } while (local_20 < 0x11);
  return local_24;
}

/******************************************************************************
 * Function : sub_0ca34c (Ghidra: FUN_000ca34c)
 * Prototype: undefined1 * sub_0ca34c(void);
 * Address  : 0xca34c (Size: 295 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x119bc, 0x38faa
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000ca34c(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  char in_CL;
  undefined1 *puVar3;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char in_DL;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  int iVar8;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  
  iVar7 = 0x7fffffff;
  local_1c = (undefined1 *)0x0;
  local_24 = 1;
  local_20 = 2;
  do {
    if (((unaff_BL != local_24) && (in_CL != local_24)) &&
       (puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + in_DL * 0x1508 + local_20) * 0x45
       , &DAT_002ddd1b < puVar3)) {
      do {
        uVar4 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar3[8];
        uVar5 = (int)uVar4 >> 0x1f;
        uVar2 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar3[9];
        uVar6 = (int)uVar2 >> 0x1f;
        iVar8 = ((uVar4 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6);
        if (((iVar8 < iVar7) && (cVar1 = FUN_000ccc08(), puVar3 = extraout_ECX, cVar1 != '\0')) &&
           ((*(char *)(in_EAX + 0x1f) != '\x05' ||
            (cVar1 = FUN_00082774(), puVar3 = extraout_ECX_00, cVar1 != '\0')))) {
          iVar7 = iVar8;
          local_1c = puVar3;
        }
        puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
      } while (&DAT_002ddd1b < puVar3);
    }
    local_20 = local_20 + 2;
    local_24 = local_24 + 1;
  } while (local_24 < 0x11);
  return local_1c;
}

/******************************************************************************
 * Function : sub_0ca474 (Ghidra: FUN_000ca474)
 * Prototype: undefined1 * sub_0ca474(int param_1);
 * Address  : 0xca474 (Size: 241 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x11a81, 0x28851, 0x52362, 0x525b2, 0x6616d, 0xaafd4, 0xab2c8
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000ca474(int param_1)

{
  char cVar1;
  int in_EAX;
  undefined1 *puVar2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char in_DL;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  int iVar8;
  undefined1 *local_14;
  
  iVar7 = 0x7fffffff;
  local_14 = (undefined1 *)0x0;
  puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + in_DL * 0x1508) * 0x45;
  if (&DAT_002ddd1b < puVar2) {
    do {
      if ((((param_1 <= (int)(uint)*(ushort *)(puVar2 + 0x10)) &&
           (uVar3 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar2[8],
           uVar4 = (int)uVar3 >> 0x1f,
           uVar5 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar2[9],
           uVar6 = (int)uVar5 >> 0x1f, iVar8 = ((uVar3 ^ uVar4) - uVar4) + ((uVar5 ^ uVar6) - uVar6)
           , iVar8 < iVar7)) && (cVar1 = FUN_000ccc08(), puVar2 = extraout_ECX, cVar1 != '\0')) &&
         ((*(char *)(in_EAX + 0x1f) != '\x05' ||
          (cVar1 = FUN_00082774(), puVar2 = extraout_ECX_00, cVar1 != '\0')))) {
        iVar7 = iVar8;
        local_14 = puVar2;
      }
      puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
    } while (&DAT_002ddd1b < puVar2);
  }
  return local_14;
}

/******************************************************************************
 * Function : sub_0ca568 (Ghidra: FUN_000ca568)
 * Prototype: undefined1 * sub_0ca568(int param_1);
 * Address  : 0xca568 (Size: 244 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x1073a, 0x2796f, 0x3c91b, 0x3ca68, 0x3df64, 0x3e33a, 0x3e493, 0x641a6, 0x64365, 0x64900
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000ca568(int param_1)

{
  char cVar1;
  int in_EAX;
  undefined1 *puVar2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char in_DL;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  int iVar8;
  undefined1 *local_14;
  
  iVar7 = 0x7fffffff;
  local_14 = (undefined1 *)0x0;
  puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + in_DL * 0x1508) * 0x45;
  if (puVar2 < &DAT_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    uVar3 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar2[8];
    uVar4 = (int)uVar3 >> 0x1f;
    uVar5 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar2[9];
    uVar6 = (int)uVar5 >> 0x1f;
    iVar8 = ((uVar3 ^ uVar4) - uVar4) + ((uVar5 ^ uVar6) - uVar6);
    if ((iVar8 < iVar7) &&
       ((int)(param_1 + (uint)*(ushort *)(puVar2 + 0x10)) <= (int)(uint)*(ushort *)(puVar2 + 0xe)))
    {
      cVar1 = FUN_000ccc08();
      puVar2 = extraout_ECX;
      if (cVar1 != '\0') {
        if (*(char *)(in_EAX + 0x1f) == '\x05') {
          cVar1 = FUN_00082774();
          puVar2 = extraout_ECX_00;
          if (cVar1 == '\0') goto LAB_000ca5c1;
        }
        iVar7 = iVar8;
        local_14 = puVar2;
      }
    }
LAB_000ca5c1:
    puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
    if (puVar2 < &DAT_002ddd1c) {
      return local_14;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0ca65c (Ghidra: FUN_000ca65c)
 * Prototype: undefined1 * sub_0ca65c(void);
 * Address  : 0xca65c (Size: 96 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x3bdb1, 0x3bfa4, 0x3c53a, 0x3c762, 0x3e493, 0x66b28, 0x76b29
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_000ca65c(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  char in_DL;
  
  puVar1 = &DAT_002ddd1b +
           (uint)*(ushort *)(&DAT_002e0594 + in_DL * 2 + (in_EAX & 0xff) * 0x1508) * 0x45;
  if (puVar1 < &DAT_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    if (*(int *)(puVar1 + 0x17) < (int)(uint)*(ushort *)(puVar1 + 0xe)) {
      return puVar1;
    }
    puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(puVar1 + 6) * 0x45;
  } while (&DAT_002ddd1b < puVar1);
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : sub_0ca6bc (Ghidra: FUN_000ca6bc)
 * Prototype: undefined1 * sub_0ca6bc(void);
 * Address  : 0xca6bc (Size: 239 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x3c53a, 0x3c762, 0x3e493, 0x64703
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000ca6bc(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char in_DL;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char unaff_BL;
  int iVar7;
  int iVar8;
  undefined1 *local_14;
  
  iVar7 = 0x7fffffff;
  local_14 = (undefined1 *)0x0;
  puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + unaff_BL * 2 + in_DL * 0x1508) * 0x45;
  if (&DAT_002ddd1b < puVar3) {
    do {
      uVar4 = (uint)*(byte *)(in_EAX + 0xe) - (uint)(byte)puVar3[8];
      uVar5 = (int)uVar4 >> 0x1f;
      uVar2 = (uint)*(byte *)(in_EAX + 0x10) - (uint)(byte)puVar3[9];
      uVar6 = (int)uVar2 >> 0x1f;
      iVar8 = ((uVar4 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6);
      if ((((iVar8 < iVar7) && (*(int *)(puVar3 + 0x17) < (int)(uint)*(ushort *)(puVar3 + 0xe))) &&
          (cVar1 = FUN_000ccc08(), puVar3 = extraout_ECX, cVar1 != '\0')) &&
         ((*(char *)(in_EAX + 0x1f) != '\x05' ||
          (cVar1 = FUN_00082774(), puVar3 = extraout_ECX_00, cVar1 != '\0')))) {
        iVar7 = iVar8;
        local_14 = puVar3;
      }
      puVar3 = &DAT_002ddd1b + (uint)*(ushort *)(puVar3 + 6) * 0x45;
    } while (&DAT_002ddd1b < puVar3);
  }
  return local_14;
}

/******************************************************************************
 * Function : sub_0ca7ac (Ghidra: FUN_000ca7ac)
 * Prototype: undefined1 * sub_0ca7ac(void);
 * Address  : 0xca7ac (Size: 98 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3bb93, 0x3bcbe
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_000ca7ac(void)

{
  int in_EAX;
  undefined1 *puVar1;
  char in_DL;
  int unaff_EBX;
  
  puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + in_DL * 2 + in_EAX * 0x1508) * 0x45;
  if (puVar1 < &DAT_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    if ((int)((uint)*(ushort *)(puVar1 + 0x10) + unaff_EBX) <= (int)(uint)*(ushort *)(puVar1 + 0xe))
    {
      return puVar1;
    }
    puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(puVar1 + 6) * 0x45;
  } while (&DAT_002ddd1b < puVar1);
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : sub_0ca8c0 (Ghidra: FUN_000ca8c0)
 * Prototype: undefined1 * sub_0ca8c0(void);
 * Address  : 0xca8c0 (Size: 103 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x2796f, 0x3c17e, 0x3c91b, 0x3ca68, 0x3df64, 0x3e33a, 0x3e493, 0x4ce57
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_000ca8c0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  char in_DL;
  int unaff_EBX;
  
  puVar1 = &DAT_002ddd1b +
           (uint)*(ushort *)(&DAT_002e0594 + in_DL * 2 + (in_EAX & 0xff) * 0x1508) * 0x45;
  if (puVar1 < &DAT_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    if ((int)((uint)*(ushort *)(puVar1 + 0x10) + unaff_EBX) <= (int)(uint)*(ushort *)(puVar1 + 0xe))
    {
      return puVar1;
    }
    puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(puVar1 + 6) * 0x45;
  } while (&DAT_002ddd1b < puVar1);
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : sub_0ca928 (Ghidra: FUN_000ca928)
 * Prototype: undefined1 * sub_0ca928(int param_1);
 * Address  : 0xca928 (Size: 166 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2796f
 * Callees  : 2 -> 0x82774, 0xccc08
 ******************************************************************************/
undefined1 * FUN_000ca928(int param_1)

{
  char cVar1;
  int in_EAX;
  undefined1 *puVar2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  uint in_EDX;
  char unaff_BL;
  
  puVar2 = &DAT_002ddd1b +
           (uint)*(ushort *)(&DAT_002e0594 + (in_EDX & 0xff) * 0x1508 + unaff_BL * 2) * 0x45;
  if (&DAT_002ddd1b < puVar2) {
    do {
      if ((param_1 <= (int)(uint)*(ushort *)(puVar2 + 0x10)) &&
         (cVar1 = FUN_000ccc08(), puVar2 = extraout_ECX, cVar1 != '\0')) {
        if (*(char *)(in_EAX + 0x1f) != '\x05') {
          return extraout_ECX;
        }
        cVar1 = FUN_00082774();
        puVar2 = extraout_ECX_00;
        if (cVar1 != '\0') {
          return extraout_ECX_00;
        }
      }
      puVar2 = &DAT_002ddd1b + (uint)*(ushort *)(puVar2 + 6) * 0x45;
    } while (&DAT_002ddd1b < puVar2);
  }
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : dk_this_should_happen_room_0ca9d0 (Ghidra: FUN_000ca9d0)
 * Prototype: undefined1 * dk_this_should_happen_room_0ca9d0(void);
 * Address  : 0xca9d0 (Size: 190 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:1643 ("THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?")
 * Naming   : String 'THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?'
 * Callers  : 1 -> 0x37deb
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16c034: "room.cpp"
 *   - 0x16c009: "THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?"
 ******************************************************************************/
undefined1 * FUN_000ca9d0(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int in_EDX;
  int iVar2;
  uint uVar3;
  
  iVar2 = in_EDX + in_EAX * 0x1508;
  if ((&DAT_002e0b4b)[iVar2] == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    uVar3 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar3 >> 0xd | uVar3 * 0x80000;
    uVar3 = DAT_002e8bf6 % (uint)(byte)(&DAT_002e0b4b)[iVar2];
    puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + in_EDX * 2 + in_EAX * 0x1508) * 0x45;
    if (&DAT_002ddd1b < puVar1) {
      do {
        if (uVar3 == 0) break;
        puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(puVar1 + 6) * 0x45;
        uVar3 = uVar3 - 1;
      } while (&DAT_002ddd1b < puVar1);
    }
    if (puVar1 == &DAT_002ddd1b) {
      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 1643, "THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?") */
      return (undefined1 *)0x0;
    }
  }
  return puVar1;
}

/******************************************************************************
 * Function : sub_0caa90 (Ghidra: FUN_000caa90)
 * Prototype: undefined1 * sub_0caa90(void);
 * Address  : 0xcaa90 (Size: 839 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x457bd, 0xc8654, 0xcae40, 0xcd4dc
 * Callees  : 4 -> 0x728e9, 0x729ff, 0xcc65c, 0xd0d80
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_000caa90(void)

{
  ushort uVar1;
  byte in_AL;
  short sVar2;
  uint uVar3;
  ushort in_CX;
  byte in_DL;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint unaff_EBX;
  uint uVar8;
  char *pcVar9;
  short sVar10;
  undefined1 *local_20;
  undefined1 local_18;
  
  sVar10 = *(short *)(&DAT_0019033b + in_CX) * 0x55 +
           *(short *)(&DAT_0019033b + (unaff_EBX & 0xffff));
  local_20 = (undefined1 *)FUN_000cc65c();
  if (local_20 == (undefined1 *)0x0) {
    sVar2 = FUN_000728e9();
    if (sVar2 == 0) {
      return (undefined1 *)0x0;
    }
    local_20 = (undefined1 *)FUN_000729ff();
    local_20[3] = in_AL;
    *(ushort *)(local_20 + 10) = (ushort)in_DL;
    if (in_DL == 1) {
      if (DAT_002eb9e4 != 0) {
        *(ushort *)(local_20 + 0x19) = DAT_002eb9e4;
        *(undefined2 *)(&DAT_002ddd32 + (uint)DAT_002eb9e4 * 0x45) = *(undefined2 *)(local_20 + 1);
      }
      DAT_002eb9e4 = *(ushort *)(local_20 + 1);
      _DAT_002eb9e6 = _DAT_002eb9e6 + 1;
    }
    if (in_AL != DAT_002eb543) {
      iVar4 = (uint)in_AL * 0x1508;
      *(undefined2 *)(local_20 + 6) =
           *(undefined2 *)(&DAT_002e0594 + (uint)*(ushort *)(local_20 + 10) * 2 + iVar4);
      *(undefined2 *)
       (&DAT_002ddd1f +
       (uint)*(ushort *)(&DAT_002e0594 + (uint)*(ushort *)(local_20 + 10) * 2 + iVar4) * 0x45) =
           *(undefined2 *)(local_20 + 1);
      *(undefined2 *)(&DAT_002e0594 + iVar4 + (uint)*(ushort *)(local_20 + 10) * 2) =
           *(undefined2 *)(local_20 + 1);
      (&DAT_002e0b4b)[(uint)*(ushort *)(local_20 + 10) + iVar4] =
           (&DAT_002e0b4b)[(uint)*(ushort *)(local_20 + 10) + iVar4] + '\x01';
    }
    *(short *)(local_20 + 0x37) = sVar10;
    *(short *)(local_20 + 0x39) = sVar10;
    *(undefined2 *)(&DAT_002d33c6 + sVar10 * 6) = 0;
    uVar1 = *(ushort *)(local_20 + 0x37);
    *(undefined2 *)(local_20 + 0x3b) = 0;
    while (uVar5 = (uint)uVar1, uVar5 != 0) {
      *(short *)(local_20 + 0x3b) = *(short *)(local_20 + 0x3b) + 1;
      (&DAT_002d33c8)[(uVar5 % 0x55 + (uVar5 / 0x55) * 0x55) * 6] = local_20[1];
      uVar1 = *(ushort *)(&DAT_002d33c6 + uVar5 * 6);
    }
    FUN_000d0d80();
  }
  else {
    uVar1 = *(ushort *)(local_20 + 0x37);
    *(undefined2 *)(local_20 + 0x3b) = 0;
    while (uVar5 = (uint)uVar1, uVar5 != 0) {
      *(short *)(local_20 + 0x3b) = *(short *)(local_20 + 0x3b) + 1;
      (&DAT_002d33c8)[(uVar5 % 0x55 + (uVar5 / 0x55) * 0x55) * 6] = local_20[1];
      uVar1 = *(ushort *)(&DAT_002d33c6 + uVar5 * 6);
    }
  }
  uVar8 = (uint)*(ushort *)(local_20 + 0x37);
  uVar5 = uVar8 % 0x55;
  uVar3 = uVar8 / 0x55;
  uVar1 = *(ushort *)(&DAT_002d33c6 + uVar8 * 6);
  while (uVar8 = (uint)uVar1, uVar8 != 0) {
    uVar5 = uVar5 + uVar8 % 0x55;
    uVar3 = uVar3 + uVar8 / 0x55;
    uVar1 = *(ushort *)(&DAT_002d33c6 + uVar8 * 6);
  }
  pcVar9 = (char *)&DAT_002ee9c1;
  iVar4 = 0;
  do {
    iVar6 = ((int)pcVar9[1] + (int)uVar5 / (int)(uint)*(ushort *)(local_20 + 0x3b)) * 3 + 1;
    iVar7 = (int)*pcVar9 + (int)uVar3 / (int)(uint)*(ushort *)(local_20 + 0x3b);
    if (&DAT_002ddd1b +
        (uint)(byte)(&DAT_002d33c8)
                    [((&DAT_0019033f)[iVar7 * 3] * 0x55 + (&DAT_0019033b)[iVar6]) * 6] * 0x45 ==
        local_20) {
      local_18 = (undefined1)iVar6;
      local_20[8] = local_18;
      local_20[9] = (char)iVar7 * '\x03' + '\x01';
      return local_20;
    }
    iVar4 = iVar4 + 1;
    pcVar9 = pcVar9 + 4;
  } while (iVar4 < 0x100);
  return local_20;
}

/******************************************************************************
 * Function : sub_0cadd8 (Ghidra: FUN_000cadd8)
 * Prototype: void sub_0cadd8(void);
 * Address  : 0xcadd8 (Size: 101 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000cadd8(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  
  uVar1 = *(ushort *)(in_EAX + 0x37);
  *(undefined2 *)(in_EAX + 0x3b) = 0;
  while (uVar2 = (uint)uVar1, uVar2 != 0) {
    *(short *)(in_EAX + 0x3b) = *(short *)(in_EAX + 0x3b) + 1;
    (&DAT_002d33c8)[(uVar2 % 0x55 + (uVar2 / 0x55) * 0x55) * 6] = *(undefined1 *)(in_EAX + 1);
    uVar1 = *(ushort *)(&DAT_002d33c6 + uVar2 * 6);
  }
  return;
}

/******************************************************************************
 * Function : dk_how_room_exist_slabs_0cae40 (Ghidra: FUN_000cae40)
 * Prototype: int dk_how_room_exist_slabs_0cae40(void);
 * Address  : 0xcae40 (Size: 771 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 12 -> 0x23734, 0x23754, 0x63122, 0xc8268, 0xc8654, 0xcaa90, 0xcb144, 0xd7688, 0xd8b7c, 0xda6fc ...
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 *   - 0x16bef4: "HOW CAN A ROOM EXIST WITH NO SLABS?"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000cb084) */

int FUN_000cae40(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 in_AL;
  int iVar4;
  uint uVar5;
  ushort in_CX;
  int iVar6;
  int extraout_ECX;
  char in_DL;
  ushort unaff_BX;
  int iVar7;
  int local_28;
  byte local_18;
  
  DAT_002ebaf7 = 1;
  if ((uint)(byte)(&DAT_002d33c8)[((&DAT_0019033b)[unaff_BX] + (&DAT_0019033b)[in_CX] * 0x55) * 6] *
      0x45 == 0) {
    FUN_00023754();
    FUN_00023734();
  }
  else {
    FUN_000c8654();
  }
  local_18 = (char)*(undefined2 *)(&DAT_0019033b + unaff_BX) +
             (char)*(undefined2 *)(&DAT_0019033b + in_CX) * 'U';
  iVar4 = FUN_000caa90();
  if (iVar4 != 0) {
    if ((in_DL == '\x10') || (in_DL == '\x0f')) {
      FUN_000dae68();
      FUN_000d8b7c(in_AL);
    }
    else {
      FUN_000dae68();
      FUN_000d7688(0);
    }
    FUN_000da6fc();
    uVar2 = *(ushort *)(iVar4 + 0x3b);
    iVar7 = iVar4;
    if (uVar2 == 0) {
      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
      iVar6 = 0;
    }
    else {
      if (uVar2 < 2) {
        local_28 = 0;
      }
      else if (uVar2 == 2) {
        local_28 = 4;
      }
      else {
        local_28 = (uint)*(ushort *)(iVar4 + 0x3b) * 4 + -4;
      }
      uVar5 = (uint)*(ushort *)(iVar4 + 0x3b);
      if (0x31 < *(ushort *)(iVar4 + 0x3b)) {
        uVar5 = 0x31;
      }
      bVar1 = (&DAT_0018b6d4)[uVar5];
      uVar2 = *(ushort *)(iVar4 + 0x3b);
      iVar6 = 0;
      for (uVar3 = *(ushort *)(iVar4 + 0x37); uVar3 != 0;
          uVar3 = *(ushort *)(&DAT_002d33c6 + (uint)uVar3 * 6)) {
        iVar6 = FUN_000c8268();
        iVar6 = extraout_ECX + iVar6;
      }
      iVar6 = ((iVar6 - local_28) * 0x100) / (int)(((uint)uVar2 * 8 + (uint)bVar1 * 2) - local_28);
      if (0x100 < iVar6) {
        iVar6 = 0x100;
      }
    }
    *(short *)(iVar7 + 0x3f) = (short)iVar6;
    FUN_000cb144();
    if (local_18 != DAT_002eb543) {
      *(int *)(&DAT_002e17fc + (uint)local_18 * 0x1508) =
           *(int *)(&DAT_002e17fc + (uint)local_18 * 0x1508) + 1;
    }
    FUN_00063122();
  }
  return iVar4;
}

/******************************************************************************
 * Function : sub_0cb144 (Ghidra: FUN_000cb144)
 * Prototype: void sub_0cb144(void);
 * Address  : 0xcb144 (Size: 322 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x2a219, 0x457bd, 0xc8654, 0xcae40, 0xcd4dc, 0xd0118, 0xd0488, 0xda6fc
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000cb144(void)

{
  int in_EAX;
  int in_EDX;
  undefined *puVar1;
  undefined *extraout_EDX;
  undefined *extraout_EDX_00;
  int iVar2;
  short sVar3;
  
  iVar2 = (uint)*(ushort *)(in_EAX + 10) * 0x17;
  puVar1 = &DAT_0018ebaa + iVar2;
  if ((in_EDX == 0) || (*(int *)(&DAT_0018ebb9 + iVar2) != 0)) {
    *(ushort *)(in_EAX + 0xc) = *(short *)(in_EAX + 0x3b) * (ushort)DAT_002ed417;
    if (*(int *)(&DAT_0018ebad + iVar2) != 0) {
      (**(code **)(&DAT_0018ebad + iVar2))();
      puVar1 = extraout_EDX;
    }
    if (*(int *)(puVar1 + 7) != 0) {
      (**(code **)(puVar1 + 7))();
      puVar1 = extraout_EDX_00;
    }
    if (*(int *)(puVar1 + 0xb) != 0) {
      (**(code **)(puVar1 + 0xb))();
    }
    if (*(short *)(in_EAX + 10) != 7) {
      sVar3 = *(short *)(in_EAX + 0x37);
      while (iVar2 = (int)sVar3, iVar2 != 0) {
        if (&DAT_002ddd1b +
            (uint)(byte)(&DAT_002d33c8)
                        [((&DAT_0019033b)[(iVar2 % 0x55) * 3] +
                         (&DAT_0019033b)[(iVar2 / 0x55) * 3] * 0x55) * 6] * 0x45 !=
            &DAT_002ddd1b +
            (uint)(byte)(&DAT_002d33c8)
                        [((&DAT_0019033b)[((iVar2 + -0x55) / 0x55) * 3] * 0x55 +
                         (&DAT_0019033b)[((iVar2 + -0x55) % 0x55) * 3]) * 6] * 0x45) {
          *(undefined1 *)(in_EAX + 0x43) = 1;
          *(undefined1 *)(in_EAX + 0x44) = 0;
          *(short *)(in_EAX + 0x41) = sVar3;
          return;
        }
        sVar3 = *(short *)(&DAT_002d33c6 + iVar2 * 6);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0cb33c (Ghidra: FUN_000cb33c)
 * Prototype: undefined4 sub_0cb33c(void);
 * Address  : 0xcb33c (Size: 4322 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x1073a, 0x13809, 0x2796f, 0x45394, 0x63dd3
 * Callees  : 13 -> 0x10434, 0x27944, 0x4d022, 0x51374, 0x64a5f, 0x66334, 0x6dda0, 0x72f08, 0x75b48, 0x85890 ...
 ******************************************************************************/
undefined4 FUN_000cb33c(void)

{
  int iVar1;
  uint3 uVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  undefined2 uVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int *in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar8 = *in_EDX >> 0x18;
  switch(*(undefined2 *)((int)in_EDX + 10)) {
  case 3:
    uVar5 = 4;
    break;
  default:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = 8;
    break;
  case 8:
    uVar5 = 0x10;
    break;
  case 9:
    uVar5 = 0x20;
    break;
  case 10:
    uVar5 = 0x1000;
    break;
  case 0x10:
    uVar5 = 0x200;
  }
  if ((*(ushort *)(&DAT_002e9111 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) & uVar5) != 0) {
    FUN_00010434();
    FUN_00064a5f();
    *(undefined2 *)(iVar1 + 0x282) = 0x32;
    return 0;
  }
  sVar6 = *(short *)((int)in_EDX + 10);
  if (0xf < (ushort)(sVar6 - 1U)) {
    return 0;
  }
  iVar9 = DAT_002f10ce >> 0x18;
  uVar2 = (uint3)((uint)*in_EDX >> 8);
  switch(sVar6) {
  case 1:
    if (((*(int *)(in_EAX + 3) >> 0x18 == iVar8) &&
        (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                  *(undefined1 *)(in_EAX + 0x1a)) != 0x17)) && (sVar6 = FUN_000b3b58(), sVar6 != 0))
    {
      *(undefined1 *)(in_EAX + 8) = 0x5a;
      *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
      return 1;
    }
    break;
  case 2:
    if (*(int *)(in_EAX + 3) >> 0x18 == iVar8) {
      if (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                   *(undefined1 *)(in_EAX + 0x1a)) == 0x17) {
        if (*(int *)(in_EAX + 0x13) != 0) {
          if ((*(short *)((int)in_EDX + 10) == 1) && (sVar6 = FUN_000b3b58(), sVar6 != 0)) {
            bVar3 = true;
          }
          else {
            cVar4 = FUN_000cc968();
            if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
          if (bVar3) {
            *(undefined1 *)(in_EAX + 8) = 7;
            *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
            return 1;
          }
        }
      }
      else if ((short)in_EDX[4] != 0) {
        if ((*(short *)((int)in_EDX + 10) == 1) && (sVar6 = FUN_000b3b58(), sVar6 != 0)) {
          bVar3 = true;
        }
        else {
          cVar4 = FUN_000cc968();
          if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        if (bVar3) {
          *(undefined1 *)(in_EAX + 8) = 0x4c;
          *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
          return 1;
        }
      }
    }
    break;
  case 3:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    iVar8 = FUN_00066334();
    iVar9 = DAT_002f10ce >> 0x18;
    if (iVar8 == 0) {
      if (*(int *)(in_EAX + 3) >> 0x18 == (uint)DAT_002eb543) {
        return 0;
      }
      if ((&DAT_002e91a1)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0') {
        return 0;
      }
      if (-1 < *(int *)(&DAT_002e1501 + (*(int *)(in_EAX + 3) >> 0x18) * 0x1508)) {
        return 0;
      }
      if (*in_EDX >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    if (*(short *)((int)in_EDX + 10) == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)*(ushort *)(in_EDX + 4) +
          (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6]) goto LAB_000cb8cf;
      bVar3 = true;
    }
    else if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) {
LAB_000cb8cf:
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x1e;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
    else if (*in_EDX >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
      if (((&DAT_002e0593)[iVar9 * 0x1508] & 1) == 0) {
        FUN_00051374();
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    break;
  case 4:
    if ((*(int *)(in_EAX + 3) >> 0x18 != iVar8) ||
       (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) != 0x17)) {
      if ((*(short *)((int)in_EDX + 10) == 1) && (sVar6 = FUN_000b3b58(), sVar6 != 0)) {
        bVar3 = true;
      }
      else {
        cVar4 = FUN_000cc968();
        if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      if (bVar3) {
        *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 2;
        *(undefined1 *)(in_EAX + 8) = 0x28;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
    break;
  case 5:
    if ((*(int *)(in_EAX + 3) >> 0x18 == iVar8) &&
       (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) == 0x17)) {
      return 0;
    }
    if (*(short *)((int)in_EDX + 10) == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] +
          (uint)*(ushort *)(in_EDX + 4)) {
LAB_000cbaaa:
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) goto LAB_000cbaaa;
      bVar3 = true;
    }
    if (bVar3) {
      if ((*(short *)((int)in_EDX + 10) == 1) && (sVar6 = FUN_000b3b58(), sVar6 != 0)) {
        bVar3 = true;
      }
      else {
        cVar4 = FUN_000cc968();
        if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      if (bVar3) {
        if ((*(int *)(in_EAX + 3) >> 0x18 == iVar8) && (iVar8 = FUN_00027944(), iVar8 != 0)) {
          *(undefined1 *)(in_EAX + 8) = 0x6d;
        }
        else {
          *(undefined1 *)(in_EAX + 8) = 0x2a;
        }
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 2;
        return 1;
      }
    }
    else if (*in_EDX >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
      if (((&DAT_002e0593)[iVar9 * 0x1508] & 1) == 0) {
        FUN_00051374();
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    break;
  case 6:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    iVar8 = FUN_00075b48();
    if (iVar8 == 0) {
      return 0;
    }
    if (*(short *)((int)in_EDX + 10) == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] +
          (uint)*(ushort *)(in_EDX + 4)) goto LAB_000cb639;
      bVar3 = true;
    }
    else if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) {
LAB_000cb639:
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(char *)(in_EAX + 0x1a) == '\x17') {
        cVar4 = FUN_000ccc08();
        if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(undefined1 *)(in_EAX + 8) = 0x20;
          uVar7 = *(undefined2 *)((int)in_EDX + 1);
          *(undefined1 *)(iVar1 + 0x94) = 4;
          *(undefined2 *)(iVar1 + 0x80) = uVar7;
          return 1;
        }
      }
      else {
        cVar4 = FUN_000ccc08();
        if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(undefined1 *)(in_EAX + 8) = 0x20;
          *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
          return 1;
        }
      }
    }
    else if (*(int *)(in_EAX + 3) >> 0x18 ==
             (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
      if (((&DAT_002e0593)[(DAT_002f10ce >> 0x18) * 0x1508] & 1) == 0) {
        FUN_00051374();
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    break;
  case 8:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    if (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) == 0x17) {
      return 0;
    }
    if ((&DAT_002e91a7)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0') {
      return 0;
    }
    if (*(short *)((int)in_EDX + 10) == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] +
          (uint)*(ushort *)(in_EDX + 4)) goto LAB_000cbd7a;
      bVar3 = true;
    }
    else if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) {
LAB_000cbd7a:
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x2c;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
    else if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
      if (((&DAT_002e0593)[iVar9 * 0x1508] & 1) == 0) {
        FUN_00051374();
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    break;
  case 9:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    if (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) == 0x17) {
      return 0;
    }
    if ((&DAT_002e9132)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0') {
      return 0;
    }
    if (*(short *)((int)in_EDX + 10) == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] +
          (uint)*(ushort *)(in_EDX + 4)) goto LAB_000cbef4;
      bVar3 = true;
    }
    else if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) {
LAB_000cbef4:
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x2e;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
    else if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
      FUN_00051374();
      return 0;
    }
    break;
  case 10:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    if (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) == 0x17) {
      return 0;
    }
    if (*(short *)((int)in_EDX + 10) == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] +
          (uint)*(ushort *)(in_EDX + 4)) {
LAB_000cc29f:
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) goto LAB_000cc29f;
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x52;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        FUN_00072f08();
        return 1;
      }
    }
    else if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
      if (((&DAT_002e0593)[iVar9 * 0x1508] & 1) == 0) {
        FUN_00051374();
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    break;
  case 0xc:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    iVar8 = CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                     *(undefined1 *)(in_EAX + 0x1a));
    if (iVar8 == 0x17) {
      return 0;
    }
    if (sVar6 == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)*(ushort *)(in_EDX + 4) + (uint)(byte)(&DAT_002e9124)[iVar8 * 0xe6]) {
LAB_000cc012:
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) goto LAB_000cc012;
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x40;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
    else if (*(int *)(in_EAX + 3) >> 0x18 == (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef]) {
      if (((&DAT_002e0593)[iVar9 * 0x1508] & 1) == 0) {
        FUN_00051374();
        return 0;
      }
      FUN_00051374();
      return 0;
    }
    break;
  case 0xd:
    if ((*(int *)(in_EAX + 3) >> 0x18 == iVar8) &&
       (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) != 0x17)) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x13;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
    break;
  case 0xe:
    if ((*(int *)(in_EAX + 3) >> 0x18 == iVar8) &&
       (CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                 *(undefined1 *)(in_EAX + 0x1a)) != 0x17)) {
      *(undefined2 *)(iVar1 + 0x21) = 0;
      uVar7 = FUN_00085890();
      *(undefined2 *)(iVar1 + 0xc4) = uVar7;
      cVar4 = FUN_0006dda0();
      if (cVar4 != '\0') {
        if (((*(short *)(iVar1 + 0x68) != 0) &&
            (*(short *)(iVar1 + 0x68) == *(short *)((int)in_EDX + 1))) &&
           (iVar8 = FUN_0004d022(), iVar8 != 0)) {
          *(undefined1 *)(in_EAX + 8) = 0x19;
          return 1;
        }
        cVar4 = FUN_000ccc08();
        if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(undefined1 *)(in_EAX + 8) = 0x50;
          *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
          return 1;
        }
      }
    }
    break;
  case 0x10:
    if (*(int *)(in_EAX + 3) >> 0x18 != iVar8) {
      return 0;
    }
    iVar8 = CONCAT31((int3)((uint3)((uint)*(int *)(in_EAX + 3) >> 8) ^ uVar2) >> 0x17,
                     *(undefined1 *)(in_EAX + 0x1a));
    if (iVar8 == 0x17) {
      return 0;
    }
    if (sVar6 == 0xe) {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) <
          (uint)*(ushort *)(in_EDX + 4) + (uint)(byte)(&DAT_002e9124)[iVar8 * 0xe6]) {
LAB_000cb7ec:
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)in_EDX + 0xe) < *(ushort *)(in_EDX + 4) + 1) goto LAB_000cb7ec;
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_000ccc08();
      if ((cVar4 == '\0') || (sVar6 = FUN_000b3b58(), sVar6 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined1 *)(in_EAX + 8) = 0x68;
        *(undefined2 *)(iVar1 + 0x80) = *(undefined2 *)((int)in_EDX + 1);
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0cc420 (Ghidra: FUN_000cc420)
 * Prototype: undefined4 sub_0cc420(void);
 * Address  : 0xcc420 (Size: 57 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4d683
 * Callees  : 2 -> 0x827fc, 0xccc08
 ******************************************************************************/
undefined4 FUN_000cc420(void)

{
  char cVar1;
  
  cVar1 = FUN_000ccc08();
  if (cVar1 != '\0') {
    cVar1 = FUN_000827fc();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0cc45c (Ghidra: FUN_000cc45c)
 * Prototype: undefined4 sub_0cc45c(void);
 * Address  : 0xcc45c (Size: 65 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x29254
 * Callees  : 2 -> 0xb3b58, 0xccc08
 ******************************************************************************/
undefined4 FUN_000cc45c(void)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_000ccc08();
  if ((cVar1 != '\0') && (sVar2 = FUN_000b3b58(), sVar2 != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0cc4a0 (Ghidra: FUN_000cc4a0)
 * Prototype: undefined4 sub_0cc4a0(void);
 * Address  : 0xcc4a0 (Size: 124 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x119bc, 0x11a81, 0x11b51, 0x16640, 0x26c6d, 0x26dbc, 0x2796f, 0x28851, 0x38faa, 0x3a2ad ...
 * Callees  : 2 -> 0xb3b58, 0xcc968
 ******************************************************************************/
undefined4 FUN_000cc4a0(void)

{
  char cVar1;
  short sVar2;
  int in_EDX;
  
  if ((*(short *)(in_EDX + 10) == 1) && (sVar2 = FUN_000b3b58(), sVar2 != 0)) {
    return 1;
  }
  cVar1 = FUN_000cc968();
  if ((cVar1 != '\0') && (sVar2 = FUN_000b3b58(), sVar2 != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0cc51c (Ghidra: FUN_000cc51c)
 * Prototype: undefined4 sub_0cc51c(void);
 * Address  : 0xcc51c (Size: 319 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3e33a, 0x3f238
 * Callees  : 2 -> 0x5131e, 0xb3b58
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000cc51c(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
  int in_EDX;
  uint uVar7;
  int iVar8;
  
  iVar8 = ((uint)*(ushort *)(in_EDX + 0xe) / (uint)*(ushort *)(in_EDX + 0x3b)) *
          (((_DAT_002eb9e8 >> 0x10) * 9) / 5);
  uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = uVar7 >> 0xd | uVar7 * 0x80000;
  uVar7 = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
  uVar6 = 0xffffffff;
  uVar1 = *(ushort *)(in_EDX + 0x37);
  while (uVar2 = (uint)uVar1, uVar2 != 0) {
    iVar4 = FUN_0005131e();
    if ((iVar4 == 0) ||
       (uVar6 = extraout_ECX, iVar8 - *(int *)(iVar4 + 0x13) != 0 && *(int *)(iVar4 + 0x13) <= iVar8
       )) {
      uVar6 = uVar2;
    }
    uVar7 = uVar7 - 1;
    if (((int)uVar7 < 0) && (uVar6 != 0xffffffff)) break;
    uVar1 = *(ushort *)(&DAT_002d33c6 + uVar2 * 6);
  }
  if ((uVar6 == 0xffffffff) || (sVar3 = FUN_000b3b58(), sVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

/******************************************************************************
 * Function : sub_0cc65c (Ghidra: FUN_000cc65c)
 * Prototype: undefined1 * sub_0cc65c(void);
 * Address  : 0xcc65c (Size: 779 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xcaa90
 * Callees  : 5 -> 0x50d3c, 0x72af4, 0xc98d0, 0xcd85c, 0xcdaec
 ******************************************************************************/
undefined1 * FUN_000cc65c(void)

{
  undefined2 uVar1;
  uint uVar2;
  char in_AL;
  int iVar3;
  byte in_CL;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  undefined1 *puVar4;
  ushort uVar5;
  int unaff_EBX;
  undefined1 *local_20;
  char cStack_10;
  
  local_20 = (undefined1 *)0x0;
  cStack_10 = '\0';
  uVar5 = *(short *)(&DAT_0019033b + unaff_EBX) * 0x55 + *(short *)(&DAT_0019033b + in_EDX);
  do {
    iVar3 = (int)cStack_10;
    if (3 < iVar3) {
LAB_000cc75c:
      if (cStack_10 == '\x04') {
        local_20 = (undefined1 *)0x0;
      }
      else {
        while( true ) {
          cStack_10 = cStack_10 + '\x01';
          iVar3 = (int)cStack_10;
          if (3 < iVar3) break;
          iVar3 = (uint)(byte)(&DAT_002d33c8)
                              [((&DAT_0019033b)
                                [(*(int *)((int)&DAT_0018b67b + iVar3 * 2 + 1) >> 0x18) * 3 +
                                 unaff_EBX] * 0x55 +
                               (&DAT_0019033b)
                               [(*(int *)((int)&DAT_0018b67b + iVar3 * 2) >> 0x18) * 3 + in_EDX]) *
                               6] * 0x45;
          puVar4 = &DAT_002ddd1b + iVar3;
          if (((puVar4 != &DAT_002ddd1b) && (in_AL == (&DAT_002ddd1e)[iVar3])) &&
             ((*(ushort *)(&DAT_002ddd25 + iVar3) == (ushort)in_CL && (puVar4 != local_20)))) {
            *(undefined2 *)(&DAT_002d33c6 + (uint)*(ushort *)(local_20 + 0x39) * 6) =
                 *(undefined2 *)(&DAT_002ddd52 + iVar3);
            uVar1 = *(undefined2 *)(&DAT_002ddd54 + iVar3);
            *(undefined2 *)(local_20 + 0x3b) = 0;
            uVar5 = *(ushort *)(local_20 + 0x37);
            *(undefined2 *)(local_20 + 0x39) = uVar1;
            while (uVar2 = (uint)uVar5, uVar2 != 0) {
              *(short *)(local_20 + 0x3b) = *(short *)(local_20 + 0x3b) + 1;
              (&DAT_002d33c8)[(uVar2 % 0x55 + (uVar2 / 0x55) * 0x55) * 6] = local_20[1];
              uVar5 = *(ushort *)(&DAT_002d33c6 + uVar2 * 6);
            }
            if (*(int *)(&DAT_0018ebad + (uint)*(ushort *)(local_20 + 10) * 0x17) != 0) {
              (**(code **)(&DAT_0018ebad + (uint)*(ushort *)(local_20 + 10) * 0x17))();
              puVar4 = extraout_ECX;
            }
            if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(puVar4 + 0x3d)]) {
              do {
                FUN_000cdaec();
                FUN_000cd85c();
              } while (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(extraout_ECX_00 + 0x3d)]);
            }
            if (((*(short *)(&DAT_002ddd25 + iVar3) != 7) &&
                (*(short *)(&DAT_002ddd25 + iVar3) != 1)) && (iVar3 = FUN_00050d3c(), iVar3 != 0)) {
              FUN_00072af4();
            }
            FUN_000c98d0();
          }
        }
      }
      return local_20;
    }
    iVar3 = (uint)(byte)(&DAT_002d33c8)
                        [((&DAT_0019033b)
                          [(*(int *)((int)&DAT_0018b67b + iVar3 * 2 + 1) >> 0x18) * 3 + unaff_EBX] *
                          0x55 + (&DAT_0019033b)
                                 [(*(int *)((int)&DAT_0018b67b + iVar3 * 2) >> 0x18) * 3 + in_EDX])
                         * 6] * 0x45;
    local_20 = &DAT_002ddd1b + iVar3;
    if (((local_20 != &DAT_002ddd1b) && ((&DAT_002ddd1e)[iVar3] == in_AL)) &&
       (*(ushort *)(&DAT_002ddd25 + iVar3) == (ushort)in_CL)) {
      *(undefined2 *)(&DAT_002ddd29 + iVar3) = 0;
      *(ushort *)(&DAT_002d33c6 + (uint)*(ushort *)(&DAT_002ddd54 + iVar3) * 6) = uVar5;
      *(undefined2 *)(&DAT_002d33c6 + (uint)uVar5 * 6) = 0;
      *(ushort *)(&DAT_002ddd54 + iVar3) = uVar5;
      goto LAB_000cc75c;
    }
    cStack_10 = cStack_10 + '\x01';
  } while( true );
}

/******************************************************************************
 * Function : dk_number_slabs_room_zero_0cc968 (Ghidra: FUN_000cc968)
 * Prototype: uint dk_number_slabs_room_zero_0cc968(void);
 * Address  : 0xcc968 (Size: 672 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:2730 ("Number of slabs for room is zero"); room.cpp:2737 ("Room used structure is ZERO"); room.cpp:2781 ("Could not find valid RANDOM point in room for creature")
 * Naming   : String 'Number of slabs for room is zero'
 * Callers  : 16 -> 0x119bc, 0x11a81, 0x26b04, 0x286d5, 0x28aa0, 0x38faa, 0x39901, 0x641a6, 0x64900, 0x6738b ...
 * Callees  : 3 -> 0x7ddf8, 0xb2cb4, 0xddaf0
 * Strings  :
 *   - 0x16c05e: "room.cpp"
 *   - 0x16c082: "room.cpp"
 *   - 0x16c0a7: "room.cpp"
 *   - 0x16c0e7: "room.cpp"
 *   - 0x16c03d: "Number of slabs for room is zero"
 *   - 0x16c067: "Room used structure is set"
 *   - 0x16c08b: "Room used structure is ZERO"
 *   - 0x16c0b0: "Could not find valid RANDOM point in room for creature"
 ******************************************************************************/
uint FUN_000cc968(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  undefined1 *in_EDX;
  int iVar5;
  short *unaff_EBX;
  int iVar6;
  int local_34;
  uint local_20;
  uint local_1c;
  
  if (&DAT_002ddd1b < in_EDX) {
    local_1c = (uint)*(ushort *)(in_EDX + 0x37);
    if (*(short *)(in_EDX + 0x3b) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 2730, "Number of slabs for room is zero") */
      uVar2 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 2737, "Room used structure is ZERO") */
      goto LAB_000ccbfe;
    }
    uVar2 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar2 >> 0xd | uVar2 * 0x80000;
    local_20 = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
    iVar3 = 0;
    if (local_20 != 0) {
      do {
        local_1c = (uint)*(ushort *)(&DAT_002d33c6 + local_1c * 6);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_20);
    }
    for (iVar3 = 0; iVar3 < (int)(uint)*(ushort *)(in_EDX + 0x3b); iVar3 = iVar3 + 1) {
      if (*(ushort *)(in_EDX + 0x3b) == local_20) {
        local_1c = CONCAT22((short)(local_20 >> 0x10),*(undefined2 *)(in_EDX + 0x37));
        local_20 = 0;
      }
      uVar2 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar2 >> 0xd | uVar2 * 0x80000;
      uVar2 = DAT_002e8bf6 % 9;
      local_34 = 0;
      do {
        iVar6 = ((int)local_1c % 0x55) * 3 + (int)uVar2 % 3;
        iVar5 = ((int)local_1c / 0x55) * 3 + (int)uVar2 / 3;
        iVar4 = iVar6 + iVar5 * 0x100;
        if (((*(byte *)((int)&DAT_00279203 + iVar4 * 5) & 0x10) == 0) &&
           (((&DAT_00269203)[iVar4] & 0xf) < 4)) {
          *unaff_EBX = (short)iVar6 * 0x100 + 0x80;
          unaff_EBX[1] = (short)iVar5 * 0x100 + 0x80;
          sVar1 = FUN_000b2cb4();
          unaff_EBX[2] = sVar1;
          iVar4 = FUN_0007ddf8();
          uVar2 = extraout_ECX;
          if (iVar4 == 0) {
            return 1;
          }
        }
        local_34 = local_34 + 1;
        uVar2 = (int)(uVar2 + 1) % 9;
      } while (local_34 < 9);
      local_1c = (uint)*(ushort *)(&DAT_002d33c6 + local_1c * 6);
      local_20 = local_20 + 1;
    }
  }
  uVar2 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 2781, "Could not find valid RANDOM point in room for creature") */
LAB_000ccbfe:
  return uVar2 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_could_find_valid_first_0ccc08 (Ghidra: FUN_000ccc08)
 * Prototype: uint dk_could_find_valid_first_0ccc08(void);
 * Address  : 0xccc08 (Size: 355 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:2868 ("Could not find valid FIRST point in room for creature")
 * Naming   : String 'Could not find valid FIRST point in room for creature'
 * Callers  : 13 -> 0x29254, 0xc9988, 0xc9b2c, 0xc9e8c, 0xca248, 0xca34c, 0xca474, 0xca568, 0xca6bc, 0xca928 ...
 * Callees  : 3 -> 0x7ddf8, 0xb2cb4, 0xddaf0
 * Strings  :
 *   - 0x16c126: "room.cpp"
 *   - 0x16c0f0: "Could not find valid FIRST point in room for creature"
 ******************************************************************************/
uint FUN_000ccc08(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  undefined1 *in_EDX;
  int iVar6;
  short *unaff_EBX;
  int iVar7;
  
  if (&DAT_002ddd1b < in_EDX) {
    uVar1 = *(ushort *)(in_EDX + 0x37);
    while (uVar4 = (uint)uVar1, uVar4 != 0) {
      iVar5 = 0;
      do {
        iVar7 = (uVar4 % 0x55) * 3 + iVar5 % 3;
        iVar6 = (uVar4 / 0x55) * 3 + iVar5 / 3;
        iVar3 = iVar7 + iVar6 * 0x100;
        if (((*(byte *)((int)&DAT_00279203 + iVar3 * 5) & 0x10) == 0) &&
           (((&DAT_00269203)[iVar3] & 0xf) < 4)) {
          *unaff_EBX = (short)iVar7 * 0x100 + 0x80;
          unaff_EBX[1] = (short)iVar6 * 0x100 + 0x80;
          sVar2 = FUN_000b2cb4();
          unaff_EBX[2] = sVar2;
          iVar3 = FUN_0007ddf8();
          iVar5 = extraout_ECX;
          if (iVar3 == 0) {
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 9);
      uVar1 = *(ushort *)(&DAT_002d33c6 + uVar4 * 6);
    }
  }
  uVar4 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 2868, "Could not find valid FIRST point in room for creature") */
  return uVar4 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0ccd6c (Ghidra: FUN_000ccd6c)
 * Prototype: undefined4 sub_0ccd6c(void);
 * Address  : 0xccd6c (Size: 417 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc9280
 * Callees  : 1 -> 0xccf10
 ******************************************************************************/
undefined4 FUN_000ccd6c(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int extraout_ECX;
  int *in_EDX;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (uint)*(ushort *)((int)in_EDX + 10);
  iVar5 = *in_EDX >> 0x18;
  uVar7 = 0;
  piVar3 = (int *)(&DAT_002ddd1b +
                  (uint)*(ushort *)(&DAT_002e0594 + uVar2 * 2 + iVar5 * 0x1508) * 0x45);
  if (&DAT_002ddd1b < piVar3) {
    do {
      if ((piVar3 != in_EDX) &&
         (*(int *)((int)piVar3 + 0x17) < (int)(uint)*(ushort *)((int)piVar3 + 0xe))) {
        uVar7 = uVar7 + 1;
      }
      piVar3 = (int *)(&DAT_002ddd1b + (uint)*(ushort *)((int)piVar3 + 6) * 0x45);
    } while (&DAT_002ddd1b < piVar3);
  }
  if (uVar7 != 0) {
    uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
    uVar4 = DAT_002e8bf6 % uVar7;
    piVar3 = (int *)(&DAT_002ddd1b +
                    (uint)*(ushort *)(&DAT_002e0594 + uVar2 * 2 + iVar5 * 0x1508) * 0x45);
    if (&DAT_002ddd1b < piVar3) {
      while ((piVar3 == in_EDX || (-1 < (int)uVar4))) {
        if ((piVar3 != in_EDX) &&
           (*(int *)((int)piVar3 + 0x17) < (int)(uint)*(ushort *)((int)piVar3 + 0xe))) {
          uVar4 = uVar4 - 1;
        }
        if (((int)uVar4 < 0) ||
           (piVar3 = (int *)(&DAT_002ddd1b + (uint)*(ushort *)((int)piVar3 + 6) * 0x45),
           piVar3 < &DAT_002ddd1c)) break;
      }
    }
    iVar6 = 0;
    if (0 < (int)uVar7) {
      do {
        if ((piVar3 != in_EDX) &&
           (*(int *)((int)piVar3 + 0x17) < (int)(uint)*(ushort *)((int)piVar3 + 0xe))) {
          cVar1 = FUN_000ccf10();
          if (cVar1 != '\0') {
            return 1;
          }
          piVar3 = (int *)(&DAT_002ddd1b + (uint)*(ushort *)(extraout_ECX + 6) * 0x45);
          if (piVar3 == (int *)&DAT_002ddd1b) {
            piVar3 = (int *)(&DAT_002ddd1b +
                            (uint)*(ushort *)(&DAT_002e0594 + iVar5 * 0x1508 + uVar2 * 2) * 0x45);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar7);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : dk_number_slabs_room_zero_0ccf10 (Ghidra: FUN_000ccf10)
 * Prototype: uint dk_number_slabs_room_zero_0ccf10(void);
 * Address  : 0xccf10 (Size: 707 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:2949 ("Number of slabs for room is zero"); room.cpp:2956 ("Room used structure is ZERO"); room.cpp:3004 ("Could not find valid RANDOM point in room for thing")
 * Naming   : String 'Number of slabs for room is zero'
 * Callers  : 5 -> 0x64365, 0x64703, 0x66dc2, 0x76d56, 0xccd6c
 * Callees  : 4 -> 0x50d3c, 0x7ddf8, 0xb2cb4, 0xddaf0
 * Strings  :
 *   - 0x16c150: "room.cpp"
 *   - 0x16c174: "room.cpp"
 *   - 0x16c199: "room.cpp"
 *   - 0x16c1d6: "room.cpp"
 *   - 0x16c12f: "Number of slabs for room is zero"
 *   - 0x16c159: "Room used structure is set"
 *   - 0x16c17d: "Room used structure is ZERO"
 *   - 0x16c1a2: "Could not find valid RANDOM point in room for thing"
 ******************************************************************************/
uint FUN_000ccf10(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *in_EDX;
  int iVar5;
  short *unaff_EBX;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_18;
  
  if (&DAT_002ddd1b < in_EDX) {
    local_2c = (uint)*(ushort *)(in_EDX + 0x37);
    if (*(short *)(in_EDX + 0x3b) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 2949, "Number of slabs for room is zero") */
      uVar2 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 2956, "Room used structure is ZERO") */
      goto LAB_000cd1c9;
    }
    uVar2 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar2 >> 0xd | uVar2 * 0x80000;
    local_30 = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
    iVar3 = 0;
    if (local_30 != 0) {
      do {
        local_2c = (uint)*(ushort *)(&DAT_002d33c6 + local_2c * 6);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_30);
    }
    for (local_34 = 0; local_34 < (int)(uint)*(ushort *)(in_EDX + 0x3b); local_34 = local_34 + 1) {
      if (*(ushort *)(in_EDX + 0x3b) == local_30) {
        local_2c = CONCAT22((short)(local_30 >> 0x10),*(undefined2 *)(in_EDX + 0x37));
        local_30 = 0;
      }
      uVar2 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar2 >> 0xd | uVar2 * 0x80000;
      uVar2 = DAT_002e8bf6 % 9;
      local_18 = 0;
      do {
        iVar3 = ((int)local_2c % 0x55) * 3 + (int)uVar2 % 3;
        iVar5 = ((int)local_2c / 0x55) * 3 + (int)uVar2 / 3;
        if ((*(byte *)((int)&DAT_0019e973 +
                      (*(uint *)((int)&DAT_00279203 + (iVar5 * 0x100 + iVar3) * 5 + 1) & 0x7ff) *
                      0x18 + 2) >> 4 == 1) && (iVar4 = FUN_00050d3c(), iVar4 == 0)) {
          *unaff_EBX = (short)iVar3 * 0x100 + 0x80;
          unaff_EBX[1] = (short)iVar5 * 0x100 + 0x80;
          sVar1 = FUN_000b2cb4();
          unaff_EBX[2] = sVar1;
          iVar3 = FUN_0007ddf8();
          if (iVar3 == 0) {
            return 1;
          }
        }
        uVar2 = (int)(uVar2 + 1) % 9;
        local_18 = local_18 + 1;
      } while (local_18 < 9);
      local_2c = (uint)*(ushort *)(&DAT_002d33c6 + local_2c * 6);
      local_30 = local_30 + 1;
    }
  }
  uVar2 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 3004, "Could not find valid RANDOM point in room for thing") */
LAB_000cd1c9:
  return uVar2 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_could_find_valid_random_0cd1d4 (Ghidra: FUN_000cd1d4)
 * Prototype: uint dk_could_find_valid_random_0cd1d4(void);
 * Address  : 0xcd1d4 (Size: 657 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:3073 ("Could not find valid RANDOM point in room for thing")
 * Naming   : String 'Could not find valid RANDOM point in room for thing'
 * Callers  : 1 -> 0xc9280
 * Callees  : 4 -> 0x50d3c, 0x7ddf8, 0xb2cb4, 0xddaf0
 * Strings  :
 *   - 0x16c213: "room.cpp"
 *   - 0x16c1df: "Could not find valid RANDOM point in room for thing"
 ******************************************************************************/
uint FUN_000cd1d4(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint in_ECX;
  undefined1 *in_EDX;
  uint uVar4;
  int iVar5;
  short *unaff_EBX;
  uint local_3c;
  int local_34;
  int local_20;
  uint local_1c;
  
  uVar4 = (uint)*(ushort *)(in_EDX + 0x3b);
  if (1 < *(ushort *)(in_EDX + 0x3b)) {
    if (&DAT_002ddd1b < in_EDX) {
      local_1c = (uint)*(ushort *)(in_EDX + 0x37);
      uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
      local_3c = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
      iVar2 = 0;
      if (local_3c != 0) {
        do {
          local_1c = (uint)*(ushort *)(&DAT_002d33c6 + local_1c * 6);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)local_3c);
      }
      for (local_20 = 0; local_20 < (int)(uint)*(ushort *)(in_EDX + 0x3b); local_20 = local_20 + 1)
      {
        if (*(ushort *)(in_EDX + 0x3b) == local_3c) {
          local_1c = CONCAT22((short)(local_3c >> 0x10),*(undefined2 *)(in_EDX + 0x37));
          local_3c = 0;
        }
        if (local_1c != in_ECX) {
          uVar4 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = uVar4 >> 0xd | uVar4 * 0x80000;
          uVar4 = DAT_002e8bf6 % 9;
          local_34 = 0;
          do {
            iVar2 = ((int)local_1c % 0x55) * 3 + (int)uVar4 % 3;
            iVar5 = ((int)local_1c / 0x55) * 3 + (int)uVar4 / 3;
            iVar3 = iVar5 * 0x100 + iVar2;
            if ((((*(byte *)((int)&DAT_00279203 + iVar3 * 5) & 0x10) == 0) &&
                (((&DAT_00269203)[iVar3] & 0xf) < 5)) && (iVar3 = FUN_00050d3c(), iVar3 == 0)) {
              *unaff_EBX = (short)iVar2 * 0x100 + 0x80;
              unaff_EBX[1] = (short)iVar5 * 0x100 + 0x80;
              sVar1 = FUN_000b2cb4();
              unaff_EBX[2] = sVar1;
              iVar2 = FUN_0007ddf8();
              if (iVar2 == 0) {
                return 1;
              }
            }
            local_34 = local_34 + 1;
            uVar4 = (int)(uVar4 + 1) % 9;
          } while (local_34 < 9);
        }
        local_1c = (uint)*(ushort *)(&DAT_002d33c6 + local_1c * 6);
        local_3c = local_3c + 1;
      }
    }
    uVar4 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 3073, "Could not find valid RANDOM point in room for thing") */
  }
  return uVar4 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_how_room_exist_slabs_0cd4dc (Ghidra: FUN_000cd4dc)
 * Prototype: uint dk_how_room_exist_slabs_0cd4dc(void);
 * Address  : 0xcd4dc (Size: 896 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 0 -> 
 * Callees  : 10 -> 0x444a9, 0x63b6d, 0xc8268, 0xc8d10, 0xc98d0, 0xcaa90, 0xcb144, 0xcd85c, 0xcdaec, 0xddaf0
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 *   - 0x16bef4: "HOW CAN A ROOM EXIST WITH NO SLABS?"
 ******************************************************************************/
uint FUN_000cd4dc(void)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int *in_EAX;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int local_14;
  
  uVar3 = *(ushort *)((int)in_EAX + 0x37);
  while (uVar7 = (uint)uVar3, uVar7 != 0) {
    (&DAT_002d33c8)[(uVar7 % 0x55 + (uVar7 / 0x55) * 0x55) * 6] = 0;
    uVar3 = *(ushort *)(&DAT_002d33c6 + uVar7 * 6);
  }
  uVar3 = *(ushort *)((int)in_EAX + 0x37);
  while (uVar3 != 0) {
    uVar4 = *(ushort *)(&DAT_002d33c6 + (uint)uVar3 * 6);
    iVar6 = FUN_000caa90();
    if (iVar6 == 0) {
      FUN_000c8d10();
      iVar6 = FUN_000444a9((uVar3 % 0x55) * 0x300 + 0x80,0x180,iVar6);
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x13) = extraout_ECX_00;
      }
      (&DAT_002e1086)[(*in_EAX >> 0x18) * 0x542] =
           (&DAT_002e1086)[(*in_EAX >> 0x18) * 0x542] + extraout_ECX_00;
      (&DAT_002e1082)[(*in_EAX >> 0x18) * 0x542] =
           (&DAT_002e1082)[(*in_EAX >> 0x18) * 0x542] + extraout_ECX_00;
      uVar3 = uVar4;
    }
    else {
      uVar3 = *(ushort *)(iVar6 + 0x3b);
      if (uVar3 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
        iVar8 = 0;
      }
      else {
        if (uVar3 < 2) {
          local_14 = 0;
        }
        else if (uVar3 == 2) {
          local_14 = 4;
        }
        else {
          local_14 = (uint)*(ushort *)(iVar6 + 0x3b) * 4 + -4;
        }
        uVar7 = (uint)*(ushort *)(iVar6 + 0x3b);
        if (0x31 < *(ushort *)(iVar6 + 0x3b)) {
          uVar7 = 0x31;
        }
        bVar2 = (&DAT_0018b6d4)[uVar7];
        uVar3 = *(ushort *)(iVar6 + 0x3b);
        iVar8 = 0;
        for (uVar5 = *(ushort *)(iVar6 + 0x37); uVar5 != 0;
            uVar5 = *(ushort *)(&DAT_002d33c6 + (uint)uVar5 * 6)) {
          iVar8 = FUN_000c8268();
          iVar8 = extraout_ECX + iVar8;
        }
        iVar8 = ((iVar8 - local_14) * 0x100) / (int)(((uint)uVar3 * 8 + (uint)bVar2 * 2) - local_14)
        ;
        if (0x100 < iVar8) {
          iVar8 = 0x100;
        }
      }
      *(short *)(iVar6 + 0x3f) = (short)iVar8;
      FUN_000cb144();
      uVar3 = uVar4;
    }
  }
  if (*in_EAX >> 0x18 != (uint)DAT_002eb543) {
    uVar7 = (&DAT_001ae9fc)[*(ushort *)((int)in_EAX + 0x3d)];
    if (DAT_001ae9fc < uVar7) {
      do {
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x7e) = 0xffff;
        uVar7 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x2aa)];
      } while (DAT_001ae9fc < uVar7);
    }
    uVar7 = (&DAT_001ae9fc)[DAT_002e6eb6];
    if (DAT_001ae9fc < uVar7) {
      do {
        if (*(short *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x7e) == -1) {
          if ((uint)(byte)(&DAT_002d33c8)
                          [((&DAT_0019033b)[*(byte *)(uVar7 + 0x10)] * 0x55 +
                           (&DAT_0019033b)[*(byte *)(uVar7 + 0xe)]) * 6] * 0x45 == 0) {
            pbVar1 = (byte *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 1);
            *pbVar1 = *pbVar1 & 0xdf;
            *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x7e) = 0;
            FUN_00063b6d();
          }
          else {
            FUN_000cdaec();
            FUN_000cd85c();
          }
        }
        uVar7 = (&DAT_001ae9fc)[*(ushort *)(uVar7 + 0x67)];
      } while (DAT_001ae9fc < uVar7);
    }
  }
  uVar7 = FUN_000c98d0();
  return uVar7 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_attempt_add_creature_room_0cd85c (Ghidra: FUN_000cd85c)
 * Prototype: uint dk_attempt_add_creature_room_0cd85c(void);
 * Address  : 0xcd85c (Size: 338 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:3231; room.cpp:3275 ("Attempt to add creature to a room when he is in the list of another")
 * Naming   : String 'Attempt to add creature to room type %d when he is a member '
 * Callers  : 14 -> 0x13747, 0x3818c, 0x65b07, 0x66447, 0x67861, 0x73038, 0x74616, 0x74d42, 0x74e70, 0x76970 ...
 * Callees  : 3 -> 0xcd9b0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c263: "room.cpp"
 *   - 0x16c2b0: "room.cpp"
 *   - 0x16c21c: "Attempt to add creature to room type %d when he is a member of type %d"
 *   - 0x16c26c: "Attempt to add creature to a room when he is in the list of another"
 ******************************************************************************/
uint FUN_000cd85c(void)

{
  byte *pbVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int extraout_ECX;
  int in_EDX;
  
  if (*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) != 0) {
    FUN_000e7714(&DAT_0019cbac,s_Attempt_to_add_creature_to_room_t_0016c21c,
                 *(undefined2 *)(in_EDX + 10),
                 *(undefined2 *)
                  (&DAT_002ddd25 +
                  (uint)*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) * 0x45));
    FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 3231, g_log_buf) */
    FUN_000cd9b0();
    in_EDX = extraout_ECX;
  }
  if ((char)(*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) << 2) < '\0') {
    uVar3 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 3275, "Attempt to add creature to a room when he is in the list of another") */
  }
  else {
    uVar3 = *(ushort *)(in_EDX + 0x10) + 1;
    if (uVar3 <= *(ushort *)(in_EDX + 0xe)) {
      *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) + 1;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) =
           *(undefined2 *)(in_EDX + 1);
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2aa) =
           *(undefined2 *)(in_EDX + 0x3d);
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2ac) = 0;
      if (*(ushort *)(in_EDX + 0x3d) != 0) {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(in_EDX + 0x3d)] + 100)] + 0x2ac) =
             *(undefined2 *)(in_EAX + 0x1b);
      }
      *(undefined2 *)(in_EDX + 0x3d) = *(undefined2 *)(in_EAX + 0x1b);
      iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
      pbVar1 = (byte *)(iVar2 + 1);
      *pbVar1 = *pbVar1 | 0x20;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_attempt_remove_creature_room_0cd9b0 (Ghidra: FUN_000cd9b0)
 * Prototype: ulonglong dk_attempt_remove_creature_room_0cd9b0(void);
 * Address  : 0xcd9b0 (Size: 313 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:3313
 * Naming   : String 'Attempt to remove a creature from room type %d with too litt'
 * Callers  : 15 -> 0x13747, 0x137af, 0x3818c, 0x38212, 0x64a5f, 0x64b0c, 0x64e59, 0x66447, 0x6655e, 0x67d9f ...
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c303: "room.cpp"
 *   - 0x16c2b9: "Attempt to remove a creature from room type %d with too little used space"
 ******************************************************************************/
ulonglong FUN_000cd9b0(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined2 uVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 in_EDX;
  
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = (uint)*(ushort *)(iVar5 + 0x7e) * 0x45;
  if ((*(short *)(iVar5 + 0x7e) != 0) && ((*(byte *)(iVar5 + 1) & 0x20) != 0)) {
    iVar3 = *(ushort *)(&DAT_002ddd2b + iVar2) - 1;
    if (iVar3 < 0) {
      FUN_000e7714(&DAT_0019cbac,s_Attempt_to_remove_a_creature_fro_0016c2b9,
                   *(undefined2 *)(&DAT_002ddd25 + iVar2));
      iVar3 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 3313, g_log_buf) */
      iVar5 = extraout_ECX;
    }
    else {
      *(short *)(&DAT_002ddd2b + iVar2) = *(short *)(&DAT_002ddd2b + iVar2) + -1;
    }
    if (*(ushort *)(iVar5 + 0x2ac) == 0) {
      uVar4 = (undefined2)((uint)iVar3 >> 0x10);
      *(undefined2 *)((int)&DAT_002ddd58 + iVar2) = *(undefined2 *)(iVar5 + 0x2aa);
    }
    else {
      uVar4 = 0;
      *(undefined2 *)
       ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar5 + 0x2ac)] + 100)] + 0x2aa) =
           *(undefined2 *)(iVar5 + 0x2aa);
    }
    if (*(short *)(iVar5 + 0x2aa) != 0) {
      uVar4 = 0;
      *(undefined2 *)
       ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar5 + 0x2aa)] + 100)] + 0x2ac) =
           *(undefined2 *)(iVar5 + 0x2ac);
    }
    *(undefined2 *)(iVar5 + 0x2aa) = 0;
    *(undefined2 *)(iVar5 + 0x2ac) = 0;
    uVar1 = *(undefined2 *)(iVar5 + 0x7e);
    *(undefined2 *)(iVar5 + 0x7e) = 0;
    *(undefined2 *)(iVar5 + 0x7c) = uVar1;
    *(byte *)(iVar5 + 1) = *(byte *)(iVar5 + 1) & 0xdf;
    return CONCAT44(in_EDX,CONCAT31((int3)(CONCAT22(uVar4,uVar1) >> 8),1));
  }
  return CONCAT44(in_EDX,iVar5) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : dk_attempt_remove_creature_room_0cdaec (Ghidra: FUN_000cdaec)
 * Prototype: int dk_attempt_remove_creature_room_0cdaec(void);
 * Address  : 0xcdaec (Size: 272 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:3393
 * Naming   : String 'Attempt to remove a creature from room type %d with too litt'
 * Callers  : 4 -> 0xc8654, 0xcc65c, 0xcd4dc, 0xcdbfc
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c356: "room.cpp"
 *   - 0x16c30c: "Attempt to remove a creature from room type %d with too little used space"
 ******************************************************************************/
int FUN_000cdaec(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  undefined2 uVar3;
  int extraout_ECX;
  int iVar4;
  int in_EDX;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(byte *)(iVar4 + 1) & 0x20) != 0) {
    iVar2 = *(ushort *)(in_EDX + 0x10) - 1;
    if (iVar2 < 0) {
      FUN_000e7714(&DAT_0019cbac,s_Attempt_to_remove_a_creature_fro_0016c30c,
                   *(undefined2 *)(in_EDX + 10));
      iVar2 = FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 3393, g_log_buf) */
      iVar4 = extraout_ECX;
    }
    else {
      *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) + -1;
    }
    if (*(ushort *)(iVar4 + 0x2ac) == 0) {
      uVar3 = (undefined2)((uint)iVar2 >> 0x10);
      *(undefined2 *)(in_EDX + 0x3d) = *(undefined2 *)(iVar4 + 0x2aa);
    }
    else {
      uVar3 = 0;
      *(undefined2 *)
       ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x2ac)] + 100)] + 0x2aa) =
           *(undefined2 *)(iVar4 + 0x2aa);
    }
    if (*(ushort *)(iVar4 + 0x2aa) != 0) {
      uVar3 = 0;
      *(undefined2 *)
       ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar4 + 0x2aa)] + 100)] + 0x2ac) =
           *(undefined2 *)(iVar4 + 0x2ac);
    }
    *(undefined2 *)(iVar4 + 0x2aa) = 0;
    *(undefined2 *)(iVar4 + 0x2ac) = 0;
    uVar1 = *(undefined2 *)(iVar4 + 0x7e);
    *(undefined2 *)(iVar4 + 0x7e) = 0;
    *(undefined2 *)(iVar4 + 0x7c) = uVar1;
    *(byte *)(iVar4 + 1) = *(byte *)(iVar4 + 1) & 0xdf;
    return CONCAT31((int3)(CONCAT22(uVar3,uVar1) >> 8),1);
  }
  return (uint)(byte)(*(ushort *)(in_EAX + 100) >> 8) << 8;
}

/******************************************************************************
 * Function : sub_0cdbfc (Ghidra: FUN_000cdbfc)
 * Prototype: void sub_0cdbfc(void);
 * Address  : 0xcdbfc (Size: 211 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xcd85c, 0xcdaec
 ******************************************************************************/
void FUN_000cdbfc(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  
  uVar1 = *(ushort *)(in_EDX + 0x37);
  *(undefined2 *)(in_EDX + 0x3b) = 0;
  while (uVar3 = (uint)uVar1, uVar3 != 0) {
    *(short *)(in_EDX + 0x3b) = *(short *)(in_EDX + 0x3b) + 1;
    (&DAT_002d33c8)[(uVar3 % 0x55 + (uVar3 / 0x55) * 0x55) * 6] = *(undefined1 *)(in_EDX + 1);
    uVar1 = *(ushort *)(&DAT_002d33c6 + uVar3 * 6);
  }
  iVar2 = (uint)*(ushort *)(in_EDX + 10) * 0x17;
  if (*(int *)(&DAT_0018ebad + iVar2) != 0) {
    (**(code **)(&DAT_0018ebad + iVar2))();
    in_EAX = extraout_ECX;
  }
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x3d)]) {
    do {
      FUN_000cdaec();
      FUN_000cd85c();
    } while (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(extraout_ECX_00 + 0x3d)]);
  }
  return;
}

/******************************************************************************
 * Function : sub_0cdcd0 (Ghidra: FUN_000cdcd0)
 * Prototype: undefined4 sub_0cdcd0(void);
 * Address  : 0xcdcd0 (Size: 1042 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3818c, 0x3826c, 0xce0e4
 * Callees  : 3 -> 0x7ddf8, 0xb2398, 0xb2cb4
 ******************************************************************************/
undefined4 FUN_000cdcd0(void)

{
  int in_EAX;
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int iVar5;
  uint uVar6;
  undefined4 *unaff_EBX;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined4 local_3c;
  undefined2 local_38 [2];
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined1 local_14;
  
  bVar10 = 0;
  local_30 = ((uint)(byte)(&DAT_00190d3d)[*(ushort *)(in_EAX + 0x56)] * 0x100) / 2;
  iVar5 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
          (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55;
  uVar1 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar1 = uVar1 >> 0xd | uVar1 * 0x80000;
  uVar6 = uVar1 % 9;
  uVar1 = uVar1 * 0x24a1 + 0x24df;
  local_2c = uVar1 >> 0xd;
  DAT_002e8bf6 = local_2c | uVar1 * 0x80000;
  local_2c = local_2c & 3;
  local_28 = 0;
  do {
    iVar7 = (*(int *)(&DAT_0018b6b0 + local_2c * 2) >> 0x10) + iVar5;
    uVar1 = (iVar7 % 0x55) * 3;
    local_34 = (iVar7 / 0x55) * 3;
    local_14 = (undefined1)uVar1;
    puVar2 = (undefined1 *)0x0;
    if ((*(byte *)((int)&DAT_00279203 + (uint)CONCAT11((undefined1)local_34,local_14) * 5) & 2) != 0
       ) {
      puVar2 = &DAT_002ddd1b +
               (uint)(byte)(&DAT_002d33c8)
                           [((&DAT_0019033b)[local_34 & 0xff] * 0x55 + (&DAT_0019033b)[uVar1 & 0xff]
                            ) * 6] * 0x45;
    }
    if ((&DAT_002ddd1b < puVar2) && (*(short *)(puVar2 + 1) == *(short *)(in_EDX + 1))) {
      iVar7 = 0;
      uVar4 = uVar6;
      do {
        iVar9 = uVar1 + (int)uVar4 % 3;
        iVar8 = local_34 + (int)uVar4 / 3;
        if (((*(byte *)((int)&DAT_00279203 + (iVar8 * 0x100 + iVar9) * 5) & 0x10) == 0) &&
           (((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0' ||
            (uVar3 = FUN_000b2398(), iVar7 = extraout_ECX, (uVar3 & 0xfffffffe) != 0x28)))) {
          local_3c = CONCAT22((short)iVar8 * 0x100 + 0x80,(short)iVar9 * 0x100 + 0x80);
          local_38[0] = FUN_000b2cb4();
          iVar5 = FUN_0007ddf8();
          if (iVar5 != 0) {
            return 0;
          }
          *unaff_EBX = local_3c;
          *(undefined2 *)(unaff_EBX + (uint)bVar10 * -2 + 1) = local_38[(uint)bVar10 * -4];
          return 1;
        }
        uVar4 = (int)(uVar4 + 1) % 9;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 9);
    }
    local_2c = (int)(local_2c + 1) % 4;
    local_28 = local_28 + 1;
  } while (local_28 < 4);
  uVar1 = (iVar5 % 0x55) * 3;
  local_34 = (iVar5 / 0x55) * 3;
  local_14 = (undefined1)uVar1;
  puVar2 = (undefined1 *)0x0;
  if ((*(byte *)((int)&DAT_00279203 + (uint)CONCAT11((undefined1)local_34,local_14) * 5) & 2) != 0)
  {
    puVar2 = &DAT_002ddd1b +
             (uint)(byte)(&DAT_002d33c8)
                         [((&DAT_0019033b)[uVar1 & 0xff] + (&DAT_0019033b)[local_34 & 0xff] * 0x55)
                          * 6] * 0x45;
  }
  if ((&DAT_002ddd1b < puVar2) && (*(short *)(puVar2 + 1) == *(short *)(in_EDX + 1))) {
    iVar5 = 0;
    do {
      iVar7 = uVar1 + (int)uVar6 % 3;
      iVar9 = local_34 + (int)uVar6 / 3;
      if (((*(byte *)((int)&DAT_00279203 + (iVar9 * 0x100 + iVar7) * 5) & 0x10) == 0) &&
         (((&DAT_002e9125)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == '\0' ||
          (uVar4 = FUN_000b2398(), iVar5 = extraout_ECX_00, (uVar4 & 0xfffffffe) != 0x28)))) {
        local_3c = CONCAT22((short)iVar9 * 0x100 + 0x80,(short)iVar7 * 0x100 + 0x80);
        local_38[0] = FUN_000b2cb4();
        iVar5 = FUN_0007ddf8();
        if (iVar5 != 0) {
          return 0;
        }
        *unaff_EBX = local_3c;
        *(undefined2 *)(unaff_EBX + (uint)bVar10 * -2 + 1) = local_38[(uint)bVar10 * -4];
        return 1;
      }
      uVar6 = (int)(uVar6 + 1) % 9;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 9);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0ce0e4 (Ghidra: FUN_000ce0e4)
 * Prototype: undefined4 sub_0ce0e4(void);
 * Address  : 0xce0e4 (Size: 61 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x13730, 0x65af0, 0x67374, 0x744bf, 0xaafd4
 * Callees  : 2 -> 0xb3b58, 0xcdcd0
 ******************************************************************************/
undefined4 FUN_000ce0e4(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_000cdcd0();
  if ((iVar2 != 0) && (sVar1 = FUN_000b3b58(), sVar1 != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0ce148 (Ghidra: FUN_000ce148)
 * Prototype: void sub_0ce148(void);
 * Address  : 0xce148 (Size: 224 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce148(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sStack_1c;
  
  *(undefined2 *)(in_EAX + 0xe) = 0;
  for (sStack_1c = *(short *)(in_EAX + 0x37); iVar4 = (int)sStack_1c, iVar4 != 0;
      sStack_1c = *(short *)(&DAT_002d33c6 + sStack_1c * 6)) {
    iVar2 = (iVar4 % 0x55) * 3;
    iVar5 = iVar2 + 3;
    iVar7 = (iVar4 / 0x55) * 3;
    iVar1 = iVar7 + 3;
    if (iVar7 < iVar1) {
      iVar6 = (iVar4 / 0x55) * 0xf00;
      do {
        if (iVar2 < iVar5) {
          iVar3 = (iVar4 % 0x55) * 0xf + iVar6;
          do {
            if (*(byte *)((int)&DAT_0019e973 +
                         (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2) >> 4 == 1)
            {
              *(short *)(in_EAX + 0xe) = *(short *)(in_EAX + 0xe) + 1;
            }
            iVar3 = iVar3 + 5;
          } while (iVar3 < iVar5 * 5 + iVar6);
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x500;
      } while (iVar7 < iVar1);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0ce228 (Ghidra: FUN_000ce228)
 * Prototype: void sub_0ce228(void);
 * Address  : 0xce228 (Size: 124 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce228(void)

{
  int in_EAX;
  short sVar1;
  int iVar2;
  
  *(undefined2 *)(in_EAX + 0xe) = 0;
  for (sVar1 = *(short *)(in_EAX + 0x37); iVar2 = (int)sVar1, iVar2 != 0;
      sVar1 = *(short *)(&DAT_002d33c6 + sVar1 * 6)) {
    if (*(byte *)((int)&DAT_0019e973 +
                 (*(uint *)((int)&DAT_00279203 +
                           (((iVar2 / 0x55) * 3 + 1) * 0x100 + (iVar2 % 0x55) * 3 + 1) * 5 + 1) &
                 0x7ff) * 0x18 + 2) >> 4 == 1) {
      *(short *)(in_EAX + 0xe) = *(short *)(in_EAX + 0xe) + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0ce2a4 (Ghidra: FUN_000ce2a4)
 * Prototype: void sub_0ce2a4(void);
 * Address  : 0xce2a4 (Size: 11 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce2a4(void)

{
  int in_EAX;
  
  *(undefined2 *)(in_EAX + 0xe) = *(undefined2 *)(in_EAX + 0x3b);
  return;
}

/******************************************************************************
 * Function : sub_0ce2b0 (Ghidra: FUN_000ce2b0)
 * Prototype: void sub_0ce2b0(void);
 * Address  : 0xce2b0 (Size: 36 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce2b0(void)

{
  undefined2 uVar1;
  int in_EAX;
  uint uVar2;
  
  uVar2 = *(ushort *)(in_EAX + 0x3b) / 2;
  uVar1 = (undefined2)uVar2;
  if (uVar2 == 0) {
    uVar1 = 1;
  }
  *(undefined2 *)(in_EAX + 0xe) = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_0ce2d4 (Ghidra: FUN_000ce2d4)
 * Prototype: void sub_0ce2d4(void);
 * Address  : 0xce2d4 (Size: 75 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce2d4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar3;
  
  *(undefined2 *)(in_EAX + 0xe) = *(undefined2 *)(in_EAX + 0x3b);
  iVar4 = (uint)*(ushort *)(in_EAX + 0x3f) * (uint)*(ushort *)(in_EAX + 0xe);
  iVar5 = iVar4 >> 0x1f;
  uVar1 = (ushort)((iVar4 + iVar5 * -0x100) - (uint)(iVar5 << 7 < 0) >> 8);
  *(ushort *)(in_EAX + 0xe) = uVar1;
  uVar3 = uVar1 / 2;
  uVar2 = (undefined2)uVar3;
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  *(undefined2 *)(in_EAX + 0xe) = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_0ce340 (Ghidra: FUN_000ce340)
 * Prototype: void sub_0ce340(void);
 * Address  : 0xce340 (Size: 56 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce340(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  *(ushort *)(in_EAX + 0xe) = *(ushort *)(in_EAX + 0x3b);
  iVar1 = (uint)*(ushort *)(in_EAX + 0x3b) * (uint)*(ushort *)(in_EAX + 0x3f);
  iVar2 = iVar1 >> 0x1f;
  iVar1 = (int)((iVar1 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(short *)(in_EAX + 0xe) = (short)iVar1;
  return;
}

/******************************************************************************
 * Function : sub_0ce378 (Ghidra: FUN_000ce378)
 * Prototype: void sub_0ce378(void);
 * Address  : 0xce378 (Size: 56 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce378(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  *(ushort *)(in_EAX + 0xe) = *(ushort *)(in_EAX + 0x3b);
  iVar1 = (uint)*(ushort *)(in_EAX + 0x3b) * (uint)*(ushort *)(in_EAX + 0x3f);
  iVar2 = iVar1 >> 0x1f;
  iVar1 = (int)((iVar1 + iVar2 * -0x100) - (uint)(iVar2 << 7 < 0)) >> 8;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  *(short *)(in_EAX + 0xe) = (short)iVar1;
  return;
}

/******************************************************************************
 * Function : sub_0ce3b0 (Ghidra: FUN_000ce3b0)
 * Prototype: void sub_0ce3b0(void);
 * Address  : 0xce3b0 (Size: 101 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ce3b0(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = (uint)*(ushort *)(in_EAX + 0x3f) * (uint)*(ushort *)(in_EAX + 0x3b);
  iVar3 = iVar2 >> 0x1f;
  iVar2 = (int)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (iVar2 == 1) {
    sVar1 = *(short *)(in_EAX + 0x3b);
  }
  else {
    iVar2 = (iVar2 * 5) / (int)(uint)*(ushort *)(in_EAX + 0x3b);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    sVar1 = (short)iVar2 * *(short *)(in_EAX + 0x3b);
  }
  *(short *)(in_EAX + 0xe) = sVar1;
  return;
}

/******************************************************************************
 * Function : sub_0ce418 (Ghidra: FUN_000ce418)
 * Prototype: void sub_0ce418(void);
 * Address  : 0xce418 (Size: 536 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x50ea6, 0x5102d, 0x5131e, 0xce630
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce418(void)

{
  undefined4 uVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  byte bVar5;
  undefined2 auStack_30 [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  bVar5 = 0;
  local_24 = ((uint)*(ushort *)(in_EAX + 0xe) / (uint)*(ushort *)(in_EAX + 0x3b)) *
             (((_DAT_002eb9e8 >> 0x10) * 9) / 5);
  uVar2 = *(ushort *)(in_EAX + 0x37);
  local_1c = 0;
  local_2c = 0;
  local_20 = in_EAX;
  for (; uVar2 != 0; uVar2 = *(ushort *)(&DAT_002d33c6 + (uint)uVar2 * 6)) {
    local_28 = FUN_0005131e();
    if (local_28 == 0) {
      uVar4 = FUN_000ce630();
      if (DAT_001ae9fc < uVar4) {
        iVar3 = *(int *)(uVar4 + 0x13) / (((_DAT_002eb9e8 >> 0x10) * 9) / 5);
        if (3 < iVar3) {
          iVar3 = 4;
        }
        local_2c = local_2c + iVar3;
        local_1c = local_1c + *(int *)(uVar4 + 0x13);
      }
    }
    else if (local_24 < *(int *)(local_28 + 0x13)) {
      uVar1 = *(undefined4 *)(local_28 + 0xd);
      auStack_30[(uint)bVar5 * -4] = *(undefined2 *)(local_28 + 0x11 + (uint)bVar5 * -8);
      FUN_0005102d(uVar1);
      FUN_00050ea6();
      iVar3 = *(int *)(extraout_ECX + 0x13) / (((_DAT_002eb9e8 >> 0x10) * 9) / 5);
      if (3 < iVar3) {
        iVar3 = 4;
      }
      local_2c = local_2c + iVar3;
      local_1c = local_1c + *(int *)(local_28 + 0x13);
    }
    else {
      uVar4 = FUN_000ce630();
      if (DAT_001ae9fc < uVar4) {
        iVar3 = *(int *)(uVar4 + 0x13) / (((_DAT_002eb9e8 >> 0x10) * 9) / 5);
        if (3 < iVar3) {
          iVar3 = 4;
        }
        local_2c = local_2c + iVar3;
        local_1c = local_1c + *(int *)(uVar4 + 0x13);
      }
    }
  }
  *(short *)(local_20 + 0x10) = (short)local_2c;
  *(int *)(local_20 + 0x17) = local_1c;
  return;
}

/******************************************************************************
 * Function : sub_0ce630 (Ghidra: FUN_000ce630)
 * Prototype: int sub_0ce630(void);
 * Address  : 0xce630 (Size: 418 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xce418
 * Callees  : 6 -> 0x50d3c, 0x50ea6, 0x50f1a, 0x5117d, 0x72af4, 0xb3788
 ******************************************************************************/
int FUN_000ce630(void)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  int *in_EAX;
  uint uVar4;
  int in_ECX;
  int extraout_ECX;
  short in_DX;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  
  local_18 = in_ECX;
  if (*in_EAX >> 0x18 != (uint)DAT_002eb543) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      uVar4 = FUN_00050d3c();
      if (DAT_001ae9fc < uVar4) {
        iVar5 = iVar5 + *(int *)(uVar4 + 0x13);
        FUN_00072af4();
      }
      uVar4 = FUN_00050d3c();
      if (DAT_001ae9fc < uVar4) {
        FUN_00072af4();
        iVar5 = iVar5 + extraout_ECX;
      }
      uVar4 = FUN_00050d3c();
      if (DAT_001ae9fc < uVar4) {
        iVar1 = *(int *)(uVar4 + 0x13);
        FUN_00072af4();
        iVar5 = iVar5 + iVar1;
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 != 0x12);
    if (iVar5 != 0) {
      sVar2 = (in_DX * 3 + 1) * 0x100 + 0x80;
      uVar3 = FUN_000b3788(sVar2);
      if (extraout_EDX == 0) {
        local_18 = FUN_00050f1a();
        if (local_18 != 0) {
          iVar5 = iVar5 - *(int *)(local_18 + 0x13);
        }
      }
      else {
        iVar6 = FUN_0005117d(sVar2,uVar3);
        iVar5 = iVar5 - iVar6;
      }
      if (iVar5 != 0) {
        FUN_00050ea6();
      }
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : sub_0ce7d4 (Ghidra: FUN_000ce7d4)
 * Prototype: void sub_0ce7d4(void);
 * Address  : 0xce7d4 (Size: 768 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x43f07, 0x72af4, 0x7dbc0
 ******************************************************************************/
void FUN_000ce7d4(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_34;
  int local_30;
  byte local_1c;
  
  *(undefined2 *)(in_EAX + 0x10) = 0;
  iVar11 = 0;
  iVar12 = 0;
  local_1c = 0;
  do {
    if (1 < local_1c) {
      return;
    }
    for (sVar6 = *(short *)(in_EAX + 0x37); iVar10 = (int)sVar6, iVar10 != 0;
        sVar6 = *(short *)(&DAT_002d33c6 + sVar6 * 6)) {
      iVar5 = (iVar10 % 0x55) * 3;
      local_30 = (iVar10 / 0x55) * 3;
      iVar1 = local_30 + 3;
      iVar7 = local_30 - iVar1;
      while (SBORROW4(local_30,iVar1) != iVar7 < 0) {
        if (iVar5 < iVar5 + 3) {
          iVar7 = (iVar10 % 0x55) * 0xf + local_30 * 0x500;
          local_34 = iVar5;
          do {
            if (*(byte *)((int)&DAT_0019e973 +
                         (*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x7ff) * 0x18 + 2) >> 4 == 0)
            {
              uVar8 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x3fffff) >> 0xb]
              ;
              iVar9 = 0;
              if (DAT_001ae9fc < uVar8) {
                do {
                  if ((*(char *)(uVar8 + 0x1f) == '\x01') &&
                     ((((cVar2 = *(char *)(uVar8 + 0x1a), cVar2 == '\n' || (cVar2 == '\t')) ||
                       (cVar2 == '(')) || ((cVar2 == ')' || (cVar2 == '*')))))) {
                    if (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe)) {
                      iVar9 = FUN_0007dbc0();
                      if (iVar9 != 0) goto LAB_000cea13;
                      iVar9 = 1;
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                    }
                    else {
                      FUN_00072af4();
                      iVar9 = extraout_ECX;
                    }
                  }
                  uVar8 = (&DAT_001ae9fc)[*(ushort *)(uVar8 + 2)];
                } while (DAT_001ae9fc < uVar8);
              }
              if ((iVar9 == 0) && (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe))) {
                if (iVar11 < 1) {
                  if ((0 < iVar12) && (iVar9 = FUN_00043f07(0x80,0), iVar9 != 0)) {
                    iVar12 = iVar12 + -1;
                    *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                  }
                }
                else {
                  iVar9 = FUN_00043f07(0x80,0);
                  if (iVar9 != 0) {
                    iVar11 = iVar11 + -1;
                    *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                  }
                }
              }
            }
            else {
LAB_000cea13:
              uVar8 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar7 + 1) & 0x3fffff) >> 0xb]
              ;
              if (DAT_001ae9fc < uVar8) {
                do {
                  uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar8 + 2)];
                  if (*(char *)(uVar8 + 0x1f) == '\x01') {
                    bVar3 = *(byte *)(uVar8 + 0x1a);
                    if (bVar3 < 10) {
                      if (bVar3 == 9) {
LAB_000cea88:
                        iVar11 = iVar11 + 1;
                        FUN_00072af4();
                        uVar4 = extraout_ECX_01;
                      }
                    }
                    else if (bVar3 < 0xb) {
LAB_000cea7e:
                      iVar12 = iVar12 + 1;
                      FUN_00072af4();
                      uVar4 = extraout_ECX_00;
                    }
                    else if (0x27 < bVar3) {
                      if (bVar3 < 0x2a) goto LAB_000cea88;
                      if (bVar3 == 0x2a) goto LAB_000cea7e;
                    }
                  }
                  uVar8 = uVar4;
                } while (DAT_001ae9fc < uVar8);
              }
            }
            iVar7 = iVar7 + 5;
            local_34 = local_34 + 1;
          } while (local_34 < iVar5 + 3);
        }
        local_30 = local_30 + 1;
        iVar7 = local_30 - iVar1;
      }
    }
    if ((iVar11 == 0) && (iVar12 == 0)) {
      return;
    }
    if (*(ushort *)(in_EAX + 0xe) <= *(ushort *)(in_EAX + 0x10)) {
      return;
    }
    local_1c = local_1c + 1;
  } while( true );
}

/******************************************************************************
 * Function : dk_bloody_hell_spells_reposition_0cead4 (Ghidra: FUN_000cead4)
 * Prototype: void dk_bloody_hell_spells_reposition_0cead4(void);
 * Address  : 0xcead4 (Size: 936 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:None ("BLOODY HELL >10 SPELLS TO REPOSITION!!!")
 * Naming   : String 'BLOODY HELL >10 SPELLS TO REPOSITION!!!'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x43f07, 0x4fd81, 0x4fdac, 0x72af4, 0x7dbc0, 0xddaf0
 * Strings  :
 *   - 0x16c387: "room.cpp"
 *   - 0x16c35f: "BLOODY HELL >10 SPELLS TO REPOSITION!!!"
 ******************************************************************************/
void FUN_000cead4(void)

{
  byte *pbVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  byte *extraout_ECX;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint local_6c [10];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined2 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  short local_20;
  byte local_1c;
  
  puVar7 = &DAT_003d8c8c;
  puVar8 = local_6c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x17) = 0;
  local_24._0_2_ = 0;
  local_24._2_2_ = 0;
  iVar3 = 0;
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    local_20 = *(short *)(in_EAX + 0x37);
    while( true ) {
      iVar5 = (int)local_20;
      if (iVar5 == 0) break;
      local_30 = (iVar5 % 0x55) * 3;
      local_38 = (iVar5 / 0x55) * 3;
      local_2c = local_30 + 3;
      local_34 = local_38 + 3;
      for (; local_38 < local_34; local_38 = local_38 + 1) {
        local_28 = local_30;
        if (local_30 < local_2c) {
          local_3c = local_30 * 5 + local_38 * 0x500;
          do {
            if (*(byte *)((int)&DAT_0019e973 +
                         (*(uint *)((int)&DAT_00279203 + local_3c + 1) & 0x7ff) * 0x18 + 2) >> 4 ==
                1) {
              pbVar4 = (&DAT_001ae9fc)
                       [(*(uint *)((int)&DAT_00279203 + local_3c + 1) & 0x3fffff) >> 0xb];
              bVar6 = false;
              if (DAT_001ae9fc < pbVar4) {
                do {
                  if (((pbVar4[0x1f] == 1) && ((&DAT_0019103e)[pbVar4[0x1a]] != '\0')) &&
                     ((*pbVar4 & 0x80) == 0)) {
                    local_24 = iVar3;
                    if (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe)) {
                      iVar5 = FUN_0007dbc0();
                      iVar3 = local_24;
                      if (iVar5 != 0) goto LAB_000ced55;
                      bVar6 = true;
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                    }
                    else {
                      if (*(int *)(pbVar4 + 3) >> 0x18 != (uint)DAT_002eb543) {
                        FUN_0004fdac();
                      }
                      FUN_00072af4();
                      iVar3 = local_24;
                    }
                  }
                  pbVar4 = (&DAT_001ae9fc)[*(ushort *)(pbVar4 + 2)];
                } while (DAT_001ae9fc < pbVar4);
              }
              if (((!bVar6) && (iVar3 != 0)) &&
                 (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe))) {
                iVar9 = 0;
                iVar5 = 0;
                do {
                  if (*(int *)((int)local_6c + iVar5) != 0) {
                    local_43 = (undefined1)local_28;
                    local_44 = 0x80;
                    local_42 = 0x80;
                    local_40 = 0;
                    local_41 = (undefined1)local_38;
                    local_24 = iVar3;
                    iVar2 = FUN_00043f07();
                    iVar3 = local_24;
                    if (iVar2 != 0) {
                      if (*(int *)(iVar2 + 3) >> 0x18 != (uint)DAT_002eb543) {
                        FUN_0004fd81();
                      }
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                      local_6c[iVar9] = 0;
                      iVar3 = local_24 + -1;
                      local_24._0_2_ = (undefined2)iVar3;
                      local_24._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
                      break;
                    }
                  }
                  iVar5 = iVar5 + 4;
                  iVar9 = iVar9 + 1;
                } while (iVar5 < 0x28);
              }
            }
            else {
LAB_000ced55:
              pbVar4 = (&DAT_001ae9fc)
                       [(*(uint *)((int)&DAT_00279203 + local_3c + 1) & 0x3fffff) >> 0xb];
              if (DAT_001ae9fc < pbVar4) {
                do {
                  pbVar1 = (&DAT_001ae9fc)[*(ushort *)(pbVar4 + 2)];
                  if (((pbVar4[0x1f] == 1) && ((&DAT_0019103e)[pbVar4[0x1a]] != '\0')) &&
                     ((*pbVar4 & 0x80) == 0)) {
                    iVar3 = iVar3 + 1;
                    local_24._0_2_ = (undefined2)iVar3;
                    local_24._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
                    if (iVar3 < 0xb) {
                      iVar5 = 0;
                      do {
                        if (*(int *)((int)local_6c + iVar5) == 0) {
                          *(uint *)((int)local_6c + iVar5) = (uint)pbVar4[0x1a];
                          break;
                        }
                        iVar5 = iVar5 + 4;
                      } while (iVar5 < 0x28);
                    }
                    else {
                      local_24 = iVar3;
                      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line ?, "BLOODY HELL >10 SPELLS TO REPOSITION!!!") */
                      iVar3 = 10;
                      pbVar4 = extraout_ECX;
                    }
                    local_24 = iVar3;
                    if (*(int *)(pbVar4 + 3) >> 0x18 != (uint)DAT_002eb543) {
                      FUN_0004fdac();
                    }
                    FUN_00072af4();
                    iVar3 = local_24;
                  }
                  pbVar4 = pbVar1;
                } while (DAT_001ae9fc < pbVar1);
              }
            }
            local_28 = local_28 + 1;
            local_3c = local_3c + 5;
          } while (local_28 < local_2c);
        }
      }
      local_20 = *(short *)(&DAT_002d33c6 + local_20 * 6);
    }
    if ((iVar3 == 0) || (*(ushort *)(in_EAX + 0xe) <= *(ushort *)(in_EAX + 0x10))) break;
  }
  *(uint *)(in_EAX + 0x17) = (uint)*(ushort *)(in_EAX + 0x10);
  return;
}

/******************************************************************************
 * Function : dk_bloody_hell_bodies_reposition_0cee7c (Ghidra: FUN_000cee7c)
 * Prototype: void dk_bloody_hell_bodies_reposition_0cee7c(void);
 * Address  : 0xcee7c (Size: 799 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:None ("BLOODY HELL >10 BODIES TO REPOSITION!!!")
 * Naming   : String 'BLOODY HELL >10 BODIES TO REPOSITION!!!'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x44b13, 0x72af4, 0x7dbc0, 0xddaf0
 * Strings  :
 *   - 0x16c3b8: "room.cpp"
 *   - 0x16c390: "BLOODY HELL >10 BODIES TO REPOSITION!!!"
 ******************************************************************************/
void FUN_000cee7c(void)

{
  uint uVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint auStack_80 [12];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 local_44 [4];
  undefined2 local_40 [4];
  int local_38 [3];
  undefined1 local_2c [16];
  undefined1 local_1c;
  
  puVar7 = auStack_80 + 2;
  puVar9 = &DAT_003d8cb4;
  puVar10 = auStack_80 + 2;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_50 = DAT_003d8cdc;
  uStack_4c = DAT_003d8ce0;
  uStack_48 = DAT_003d8ce4;
  *(undefined2 *)(in_EAX + 0x10) = 0;
  local_38[1] = 0;
  local_1c = 0;
  do {
    if (1 < *(byte *)((int)puVar7 + 0x5c)) {
      return;
    }
    uVar2 = *(undefined2 *)(in_EAX + 0x37);
    while( true ) {
      *(undefined2 *)((int)puVar7 + 0x58) = uVar2;
      iVar5 = *(int *)((int)puVar7 + 0x56) >> 0x10;
      if (iVar5 == 0) break;
      *(int *)((int)puVar7 + 0x50) = (iVar5 % 0x55) * 3;
      iVar3 = (iVar5 / 0x55) * 3;
      *(int *)((int)puVar7 + 0x54) = *(int *)((int)puVar7 + 0x50) + 3;
      iVar5 = iVar3 + 3;
      *(int *)((int)puVar7 + 0x3c) = iVar5;
      while (*(int *)((int)puVar7 + 0x4c) = iVar3, iVar3 < iVar5) {
        iVar5 = *(int *)((int)puVar7 + 0x50);
        *(int *)((int)puVar7 + 0x40) = iVar5;
        if (iVar5 < *(int *)((int)puVar7 + 0x54)) {
          *(int *)((int)puVar7 + 0x48) = iVar5 * 5 + *(int *)((int)puVar7 + 0x4c) * 0x500;
          do {
            if (*(byte *)((int)&DAT_0019e973 +
                         (*(uint *)((int)&DAT_00279203 + *(int *)((int)puVar7 + 0x48) + 1) & 0x7ff)
                         * 0x18 + 2) >> 4 == 1) {
              uVar6 = (&DAT_001ae9fc)
                      [(*(uint *)((int)&DAT_00279203 + *(int *)((int)puVar7 + 0x48) + 1) & 0x3fffff)
                       >> 0xb];
              iVar5 = 0;
              if (DAT_001ae9fc < uVar6) {
                do {
                  if ((*(char *)(uVar6 + 0x1f) == '\x04') && (*(char *)(uVar6 + 0x14) != '\0')) {
                    if (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe)) {
                      *(undefined4 *)((int)puVar7 + -4) = 0xceff4;
                      iVar5 = FUN_0007dbc0();
                      if (iVar5 != 0) goto LAB_000cf0ac;
                      iVar5 = 1;
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                    }
                    else {
                      *(undefined4 *)((int)puVar7 + -4) = 0xcefe8;
                      FUN_00072af4();
                      iVar5 = extraout_ECX;
                    }
                  }
                  uVar6 = (&DAT_001ae9fc)[*(ushort *)(uVar6 + 2)];
                } while (DAT_001ae9fc < uVar6);
              }
              if (((iVar5 == 0) && (*(int *)((int)puVar7 + 0x44) != 0)) &&
                 (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe))) {
                iVar3 = 0;
                iVar5 = 0;
                puVar8 = (undefined1 *)puVar7;
                do {
                  puVar7 = (uint *)puVar8;
                  if (*(int *)(puVar8 + iVar5) != 0) {
                    puVar8[0x35] = puVar8[0x40];
                    puVar8[0x34] = 0x80;
                    puVar8[0x36] = 0x80;
                    puVar8[0x37] = puVar8[0x4c];
                    *(undefined2 *)(puVar8 + 0x38) = 0;
                    puVar7 = (uint *)(puVar8 + -4);
                    *(uint *)(puVar8 + -4) = (uint)(byte)puVar8[iVar3 + 0x28];
                    *(undefined4 *)(puVar8 + -8) = 0xcf085;
                    iVar4 = FUN_00044b13();
                    if (iVar4 != 0) {
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                      *(undefined1 *)(iVar4 + 0x14) = 1;
                      *(undefined2 *)(iVar4 + 0x5e) = DAT_002eb9fe;
                      iVar3 = *(int *)(puVar8 + 0x40);
                      *(undefined4 *)(puVar8 + iVar5 + -4) = 0;
                      *(int *)(puVar8 + 0x40) = iVar3 + -1;
                      puVar7 = (uint *)(puVar8 + -4);
                      break;
                    }
                  }
                  iVar3 = iVar3 + 1;
                  iVar5 = iVar5 + 4;
                  puVar8 = (undefined1 *)puVar7;
                } while (iVar3 < 10);
              }
            }
            else {
LAB_000cf0ac:
              uVar6 = (&DAT_001ae9fc)
                      [(*(uint *)((int)&DAT_00279203 + *(int *)((int)puVar7 + 0x48) + 1) & 0x3fffff)
                       >> 0xb];
              if (DAT_001ae9fc < uVar6) {
                do {
                  uVar1 = (&DAT_001ae9fc)[*(ushort *)(uVar6 + 2)];
                  if ((*(char *)(uVar6 + 0x1f) == '\x04') && (*(char *)(uVar6 + 0x14) != '\0')) {
                    iVar5 = *(int *)((int)puVar7 + 0x44);
                    *(int *)((int)puVar7 + 0x44) = iVar5 + 1;
                    if (iVar5 + 1 < 0xb) {
                      iVar3 = 0;
                      iVar5 = 0;
                      do {
                        if (*(int *)((int)puVar7 + iVar5) == 0) {
                          *(uint *)((int)puVar7 + iVar5) = (uint)*(byte *)(uVar6 + 0x1a);
                          *(undefined1 *)((int)puVar7 + iVar3 + 0x28) =
                               *(undefined1 *)(uVar6 + 0x13);
                          break;
                        }
                        iVar5 = iVar5 + 4;
                        iVar3 = iVar3 + 1;
                      } while (iVar5 < 0x28);
                    }
                    else {
                      *(undefined4 *)((int)puVar7 + -4) = 0xcf141;
                      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line ?, "BLOODY HELL >10 BODIES TO REPOSITION!!!") */
                      *(undefined4 *)((int)puVar7 + 0x44) = 10;
                    }
                    *(undefined4 *)((int)puVar7 + -4) = 0xcf177;
                    FUN_00072af4();
                  }
                  uVar6 = uVar1;
                } while (DAT_001ae9fc < uVar1);
              }
            }
            iVar5 = *(int *)((int)puVar7 + 0x40);
            *(int *)((int)puVar7 + 0x48) = *(int *)((int)puVar7 + 0x48) + 5;
            *(int *)((int)puVar7 + 0x40) = iVar5 + 1;
          } while (iVar5 + 1 < *(int *)((int)puVar7 + 0x54));
        }
        iVar5 = *(int *)((int)puVar7 + 0x3c);
        iVar3 = *(int *)((int)puVar7 + 0x4c) + 1;
      }
      uVar2 = *(undefined2 *)(&DAT_002d33c6 + (*(int *)((int)puVar7 + 0x56) >> 0x10) * 6);
    }
    if (*(int *)((int)puVar7 + 0x44) == 0) {
      return;
    }
    if (*(ushort *)(in_EAX + 0xe) <= *(ushort *)(in_EAX + 0x10)) {
      return;
    }
    *(char *)((int)puVar7 + 0x5c) = *(char *)((int)puVar7 + 0x5c) + '\x01';
  } while( true );
}

/******************************************************************************
 * Function : dk_bloody_hell_spells_reposition_0cf19c (Ghidra: FUN_000cf19c)
 * Prototype: void dk_bloody_hell_spells_reposition_0cf19c(void);
 * Address  : 0xcf19c (Size: 890 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:4344 ("BLOODY HELL >10 SPELLS TO REPOSITION!!!")
 * Naming   : String 'BLOODY HELL >10 SPELLS TO REPOSITION!!!'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x43f07, 0x72af4, 0x779fb, 0x77a5b, 0x7dbc0, 0xddaf0
 * Strings  :
 *   - 0x16c3e9: "room.cpp"
 *   - 0x16c3c1: "BLOODY HELL >10 SPELLS TO REPOSITION!!!"
 ******************************************************************************/
void FUN_000cf19c(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  uint local_68 [10];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined2 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte local_1c;
  
  puVar5 = &DAT_003d8ce8;
  puVar7 = local_68;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x17) = 0;
  local_24 = 0;
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    local_34 = (uint)*(ushort *)(in_EAX + 0x37);
    while (local_34 != 0) {
      local_38 = (local_34 % 0x55) * 3;
      local_2c = (local_34 / 0x55) * 3;
      local_28 = local_38 + 3;
      local_30 = local_2c + 3;
      iVar3 = local_2c - local_30;
      bVar8 = SBORROW4(local_2c,local_30);
      while (bVar8 != iVar3 < 0) {
        local_20 = local_38;
        if (local_38 < local_28) {
          iVar3 = local_38 * 5 + local_2c * 0x500;
          do {
            if (*(byte *)((int)&DAT_0019e973 +
                         (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2) >> 4 == 1)
            {
              uVar4 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb]
              ;
              bVar8 = false;
              if (DAT_001ae9fc < uVar4) {
                do {
                  if (((*(char *)(uVar4 + 0x1f) == '\x01') &&
                      ((&DAT_0019116c)[*(byte *)(uVar4 + 0x1a)] != '\0')) &&
                     ((*(byte *)(uVar4 + 1) & 1) == 0)) {
                    if (*(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe)) {
                      iVar6 = FUN_0007dbc0();
                      if (iVar6 != 0) goto LAB_000cf406;
                      bVar8 = true;
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                      uVar4 = extraout_ECX_00;
                    }
                    else {
                      FUN_00077a5b();
                      FUN_00072af4();
                      uVar4 = extraout_ECX;
                    }
                  }
                  uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)];
                } while (DAT_001ae9fc < uVar4);
              }
              if (((!bVar8) && (local_24 != 0)) &&
                 (iVar6 = 0, *(ushort *)(in_EAX + 0x10) < *(ushort *)(in_EAX + 0xe))) {
                do {
                  if (*(int *)((int)local_68 + iVar6) != 0) {
                    local_3f = (undefined1)local_20;
                    local_40 = 0x80;
                    local_3e = 0x80;
                    local_3d = (undefined1)local_2c;
                    local_3c = 0;
                    iVar2 = FUN_00043f07();
                    if (iVar2 != 0) {
                      FUN_000779fb();
                      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
                      local_24 = local_24 + -1;
                      *(undefined4 *)((int)local_68 + iVar6) = 0;
                      break;
                    }
                  }
                  iVar6 = iVar6 + 4;
                } while (iVar6 < 0x28);
              }
            }
            else {
LAB_000cf406:
              uVar4 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb]
              ;
              if (DAT_001ae9fc <
                  (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb]) {
                do {
                  uVar1 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)];
                  if (((*(char *)(uVar4 + 0x1f) == '\x01') &&
                      ((&DAT_0019116c)[*(byte *)(uVar4 + 0x1a)] != '\0')) &&
                     ((*(byte *)(uVar4 + 1) & 1) == 0)) {
                    local_24 = local_24 + 1;
                    if (local_24 < 0xb) {
                      iVar6 = 0;
                      do {
                        if (*(int *)((int)local_68 + iVar6) == 0) {
                          *(uint *)((int)local_68 + iVar6) = (uint)*(byte *)(uVar4 + 0x1a);
                          break;
                        }
                        iVar6 = iVar6 + 4;
                      } while (iVar6 < 0x28);
                    }
                    else {
                      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 4344, "BLOODY HELL >10 SPELLS TO REPOSITION!!!") */
                      local_24 = 10;
                    }
                    FUN_00077a5b();
                    FUN_00072af4();
                  }
                  uVar4 = uVar1;
                } while (DAT_001ae9fc < uVar1);
              }
            }
            local_20 = local_20 + 1;
            iVar3 = iVar3 + 5;
          } while (local_20 < local_28);
        }
        local_2c = local_2c + 1;
        iVar3 = local_2c - local_30;
        bVar8 = SBORROW4(local_2c,local_30);
      }
      local_34 = (uint)*(ushort *)(&DAT_002d33c6 + local_34 * 6);
    }
    if ((local_24 == 0) || (*(ushort *)(in_EAX + 0xe) <= *(ushort *)(in_EAX + 0x10))) break;
  }
  *(uint *)(in_EAX + 0x17) = (uint)*(ushort *)(in_EAX + 0x10);
  return;
}

/******************************************************************************
 * Function : dk_infinite_loop_count_workers_0cf518 (Ghidra: FUN_000cf518)
 * Prototype: void dk_infinite_loop_count_workers_0cf518(void);
 * Address  : 0xcf518 (Size: 124 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:4410 ("Infinite loop in count_workers_in_room")
 * Naming   : String 'Infinite loop in count_workers_in_room'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16c419: "room.cpp"
 *   - 0x16c3f2: "Infinite loop in count_workers_in_room"
 ******************************************************************************/
void FUN_000cf518(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  uVar2 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x3d)];
  iVar1 = 0;
  if (DAT_001ae9fc < uVar2) {
    do {
      if (999 < iVar1) break;
      *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + 1;
      uVar2 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2aa)];
      iVar1 = iVar1 + 1;
    } while (DAT_001ae9fc < uVar2);
  }
  if (999 < iVar1) {
    FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 4410, "Infinite loop in count_workers_in_room") */
  }
  return;
}

/******************************************************************************
 * Function : sub_0cf594 (Ghidra: FUN_000cf594)
 * Prototype: void sub_0cf594(void);
 * Address  : 0xcf594 (Size: 278 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x24998, 0x4d375, 0x4dc89, 0xe6a10
 ******************************************************************************/
void FUN_000cf594(void)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  short sVar3;
  
  *(undefined2 *)(in_EAX + 0x10) = 0;
  FUN_000e6a10();
  for (sVar3 = *(short *)(in_EAX + 0x37); sVar3 != 0; sVar3 = *(short *)(&DAT_002d33c6 + sVar3 * 6))
  {
    iVar2 = FUN_0004dc89();
    if (iVar2 != 0) {
      iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 0x13)];
      if ((int)((uint)*(ushort *)(in_EAX + 0xe) -
               (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6]) <
          (int)(uint)*(ushort *)(in_EAX + 0x10)) {
        FUN_00024998();
        FUN_0004d375();
      }
      else {
        *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(iVar2 + 100)] + 0x68) =
             *(undefined2 *)(in_EAX + 1);
        pcVar1 = (char *)(*(byte *)(iVar2 + 0x1a) + 0x17 + in_EAX);
        *pcVar1 = *pcVar1 + '\x01';
        *(ushort *)(in_EAX + 0x10) =
             *(short *)(in_EAX + 0x10) +
             (ushort)(byte)(&DAT_002e9124)[(uint)*(byte *)(iVar2 + 0x1a) * 0xe6];
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0cf8cc (Ghidra: FUN_000cf8cc)
 * Prototype: undefined8 sub_0cf8cc(void);
 * Address  : 0xcf8cc (Size: 724 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x444a9, 0xb28e8
 * Strings  :
 *   - 0x1921a4: "789:"
 ******************************************************************************/
undefined8 FUN_000cf8cc(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  short sVar9;
  short sVar10;
  int *in_EAX;
  int iVar11;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 in_EDX;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  char cStack_25;
  
  uVar4 = *(ushort *)((int)in_EAX + 0x41);
  bVar1 = *(byte *)((int)in_EAX + 0x43);
  bVar2 = *(byte *)(in_EAX + 0x11);
  uVar14 = (uint)*(ushort *)((int)in_EAX + 10);
  if (uVar14 == 7) goto LAB_000cfb97;
  iVar11 = ((uint)bVar1 * 3 + (uint)bVar2) * 4;
  sVar9 = (uVar4 % 0x55) * 0x300 + 0x180 +
          (short)((uint)*(undefined4 *)(&DAT_00192172 + iVar11) >> 0x10);
  uVar7 = *(undefined4 *)(&DAT_00192174 + iVar11);
  if (*in_EAX >> 0x18 == (uint)DAT_002eb543) {
    iVar11 = FUN_000444a9(sVar9,0);
    in_EAX = extraout_ECX;
    if (iVar11 != 0) {
      sVar10 = FUN_000b28e8();
      *(short *)(iVar11 + 0x11) = sVar10;
      *(short *)(iVar11 + 0x11) = sVar10 + 10;
      uVar5 = *(ushort *)(iVar11 + 0x46);
      uVar6 = *(ushort *)((int)extraout_ECX_00 + 0x3f);
      in_EAX = extraout_ECX_00;
LAB_000cfa2a:
      iVar12 = (uint)uVar6 * (uVar5 - 0x50);
      iVar13 = iVar12 >> 0x1f;
      *(short *)(iVar11 + 0x46) =
           (short)((iVar12 + iVar13 * -0x100) - (uint)(iVar13 << 7 < 0) >> 8) + 0x50;
    }
  }
  else if (u_789__001921a4[*in_EAX >> 0x18] != L'\0') {
    iVar11 = FUN_000444a9(sVar9,0);
    in_EAX = extraout_ECX_01;
    if (iVar11 != 0) {
      sVar10 = FUN_000b28e8();
      *(short *)(iVar11 + 0x11) = sVar10;
      uVar5 = *(ushort *)(iVar11 + 0x46);
      *(short *)(iVar11 + 0x11) = sVar10 + 10;
      uVar6 = *(ushort *)((int)extraout_ECX_02 + 0x3f);
      in_EAX = extraout_ECX_02;
      goto LAB_000cfa2a;
    }
  }
  if (bVar2 == 2) {
    uVar14 = (uint)bVar1;
    cStack_25 = (char)((ushort)((uVar4 / 0x55) * 0x300 + 0x180 + (short)((uint)uVar7 >> 0x10)) >> 8)
    ;
    uVar15 = (uint)(byte)((char)((ushort)sVar9 >> 8) +
                         *(char *)((int)&DAT_0018b67b + uVar14 * 2 + 3));
    if (in_EAX == (int *)(&DAT_002ddd1b +
                         (uint)(byte)(&DAT_002d33c8)
                                     [((&DAT_0019033b)[uVar15] +
                                      (&DAT_0019033b)
                                      [(byte)(cStack_25 + (&DAT_0018b67f)[uVar14 * 2])] * 0x55) * 6]
                         * 0x45)) {
      uVar8 = (ulonglong)(longlong)(int)(uVar14 + 3) % 4;
      iVar11 = (int)uVar8;
      if (in_EAX == (int *)(&DAT_002ddd1b +
                           (uint)(byte)(&DAT_002d33c8)
                                       [((&DAT_0019033b)
                                         [uVar15 + (*(int *)((int)&DAT_0018b67b + iVar11 * 2) >>
                                                   0x18)] +
                                        (&DAT_0019033b)
                                        [(*(int *)((int)&DAT_0018b67b + iVar11 * 2 + 1) >> 0x18) +
                                         (uint)(byte)(cStack_25 + (&DAT_0018b67f)[uVar14 * 2])] *
                                        0x55) * 6] * 0x45)) {
        sVar9 = *(short *)((int)in_EAX + 0x41) + (short)(char)(&DAT_001921b0)[uVar14];
        *(short *)((int)in_EAX + 0x41) = sVar9;
        cVar3 = (&DAT_001921b0)[iVar11];
        *(char *)((int)in_EAX + 0x43) = (char)uVar8;
        *(short *)((int)in_EAX + 0x41) = sVar9 + cVar3;
      }
      else {
        *(short *)((int)in_EAX + 0x41) =
             *(short *)((int)in_EAX + 0x41) + (short)(char)(&DAT_001921b0)[uVar14];
      }
    }
    else {
      *(char *)((int)in_EAX + 0x43) = (char)((ulonglong)(longlong)(int)(uVar14 + 1) % 4);
    }
  }
  uVar14 = (*(byte *)(in_EAX + 0x11) + 1) / 3;
  *(char *)(in_EAX + 0x11) = (char)((*(byte *)(in_EAX + 0x11) + 1) % 3);
LAB_000cfb97:
  return CONCAT44(in_EDX,uVar14);
}

/******************************************************************************
 * Function : sub_0cfbd8 (Ghidra: FUN_000cfbd8)
 * Prototype: undefined4 sub_0cfbd8(void);
 * Address  : 0xcfbd8 (Size: 55 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x20ea3, 0x63dd3
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000cfbd8(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 3:
    return 4;
  default:
    return 0;
  case 6:
    return 8;
  case 8:
    return 0x10;
  case 9:
    return 0x20;
  case 10:
    return 0x1000;
  case 0x10:
    return 0x200;
  }
}

/******************************************************************************
 * Function : sub_0cfc48 (Ghidra: FUN_000cfc48)
 * Prototype: bool sub_0cfc48(void);
 * Address  : 0xcfc48 (Size: 102 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x1073a, 0x1e4a8, 0x1f153
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000cfc48(void)

{
  ushort uVar1;
  int in_EAX;
  int in_EDX;
  
  switch(*(undefined2 *)(in_EDX + 10)) {
  case 3:
    uVar1 = 4;
    break;
  default:
    uVar1 = 0;
    break;
  case 6:
    uVar1 = 8;
    break;
  case 8:
    uVar1 = 0x10;
    break;
  case 9:
    uVar1 = 0x20;
    break;
  case 10:
    uVar1 = 0x1000;
    break;
  case 0x10:
    uVar1 = 0x200;
  }
  return (*(ushort *)(&DAT_002e9111 + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) & uVar1) == 0;
}

/******************************************************************************
 * Function : sub_0cfcd8 (Ghidra: FUN_000cfcd8)
 * Prototype: undefined4 sub_0cfcd8(void);
 * Address  : 0xcfcd8 (Size: 99 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000cfcd8(void)

{
  uint in_EAX;
  
  if (in_EAX < 0x20) {
    if (in_EAX < 8) {
      if (in_EAX != 4) {
        return 0;
      }
      return 3;
    }
    if (8 < in_EAX) {
      if (in_EAX != 0x10) {
        return 0;
      }
      return 8;
    }
    return 6;
  }
  if (in_EAX < 0x21) {
    return 9;
  }
  if (0x1ff < in_EAX) {
    if (in_EAX < 0x201) {
      return 0x10;
    }
    if (in_EAX != 0x1000) {
      return 0;
    }
    return 10;
  }
  if (in_EAX != 0x40) {
    return 0;
  }
  return 5;
}

/******************************************************************************
 * Function : sub_0cfd4c (Ghidra: FUN_000cfd4c)
 * Prototype: undefined4 sub_0cfd4c(void);
 * Address  : 0xcfd4c (Size: 61 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000cfd4c(void)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 3:
    return 0x1e;
  default:
    return 0;
  case 5:
    return 0x6d;
  case 6:
    return 0x20;
  case 8:
    return 0x2c;
  case 9:
    return 0x2e;
  case 10:
    return 0x52;
  case 0x10:
    return 0x68;
  }
}

/******************************************************************************
 * Function : sub_0cfd8c (Ghidra: FUN_000cfd8c)
 * Prototype: undefined4 sub_0cfd8c(void);
 * Address  : 0xcfd8c (Size: 93 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4cfa0, 0x4d2c3, 0x4d683
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000cfd8c(void)

{
  int in_EAX;
  int in_EDX;
  
  if (*(short *)(in_EAX + 10) == 0xe) {
    if ((uint)*(ushort *)(in_EAX + 0x10) +
        (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EDX + 0x1a) * 0xe6] <=
        (uint)*(ushort *)(in_EAX + 0xe)) {
      return 1;
    }
  }
  else if (*(ushort *)(in_EAX + 0x10) + 1 <= (uint)*(ushort *)(in_EAX + 0xe)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0cfdec (Ghidra: FUN_000cfdec)
 * Prototype: void sub_0cfdec(void);
 * Address  : 0xcfdec (Size: 197 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd0118, 0xd0488
 * Callees  : 1 -> 0x4c1e3
 ******************************************************************************/
void FUN_000cfdec(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int in_EAX;
  int extraout_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  for (sVar3 = *(short *)(in_EAX + 0x37); iVar5 = (int)sVar3, iVar5 != 0;
      sVar3 = *(short *)(&DAT_002d33c6 + sVar3 * 6)) {
    iVar1 = (iVar5 % 0x55) * 3;
    iVar4 = (iVar5 / 0x55) * 3;
    iVar6 = iVar4 + 3;
    if (iVar4 < iVar6) {
      iVar5 = (iVar5 / 0x55) * 0xf00;
      iVar2 = iVar1;
      do {
        while (iVar2 < iVar1 + 3) {
          FUN_0004c1e3(iVar6,iVar5);
          iVar2 = extraout_ECX;
        }
        iVar5 = iVar5 + 0x500;
        iVar4 = iVar4 + 1;
        iVar2 = iVar1;
      } while (iVar4 < iVar6);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0cfeb4 (Ghidra: FUN_000cfeb4)
 * Prototype: void sub_0cfeb4(void);
 * Address  : 0xcfeb4 (Size: 70 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5ac4a
 * Callees  : 2 -> 0x5ddee, 0xcff7c
 ******************************************************************************/
void FUN_000cfeb4(void)

{
  short sVar1;
  
  sVar1 = FUN_000cff7c();
  if (sVar1 != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_0cfefc (Ghidra: FUN_000cfefc)
 * Prototype: void sub_0cfefc(void);
 * Address  : 0xcfefc (Size: 126 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x49a52
 * Callees  : 2 -> 0x5ddee, 0xcff7c
 ******************************************************************************/
void FUN_000cfefc(void)

{
  short sVar1;
  
  sVar1 = FUN_000cff7c();
  if (sVar1 != 0) {
    FUN_0005ddee(0,0);
  }
  return;
}

/******************************************************************************
 * Function : sub_0cff7c (Ghidra: FUN_000cff7c)
 * Prototype: undefined8 sub_0cff7c(void);
 * Address  : 0xcff7c (Size: 192 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xcfeb4, 0xcfefc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000cff7c(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 in_EDX;
  
  iVar1 = in_EAX * 2;
  if (*(short *)(&DAT_003d8c68 + iVar1) != 0) {
    iVar2 = (uint)*(ushort *)(&DAT_003d8c68 + iVar1) * 0x45;
    if (((((&DAT_002ddd1b)[iVar2] & 1) == 0) ||
        (*(int *)(&DAT_002ddd1b + iVar2) >> 0x18 !=
         (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) ||
       (*(ushort *)(&DAT_002ddd25 + iVar2) != in_EAX)) {
      *(undefined2 *)(&DAT_003d8c68 + in_EAX * 2) = 0;
    }
    else {
      *(undefined2 *)(&DAT_003d8c68 + iVar1) = *(undefined2 *)(&DAT_002ddd21 + iVar2);
    }
  }
  iVar1 = in_EAX * 2;
  if (*(short *)(&DAT_003d8c68 + iVar1) == 0) {
    *(undefined2 *)(&DAT_003d8c68 + iVar1) =
         *(undefined2 *)(&DAT_002e0594 + iVar1 + (DAT_002f10ce >> 0x18) * 0x1508);
  }
  return CONCAT44(in_EDX,CONCAT22((short)((uint)iVar1 >> 0x10),
                                  *(undefined2 *)(&DAT_003d8c68 + in_EAX * 2)));
}

/******************************************************************************
 * Function : sub_0d003c (Ghidra: FUN_000d003c)
 * Prototype: int sub_0d003c(void);
 * Address  : 0xd003c (Size: 91 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x36498, 0x54eeb
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000d003c(void)

{
  byte in_AL;
  undefined1 *puVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_002ddd1b +
           (uint)*(ushort *)(&DAT_002e0594 + (in_EDX & 0xff) * 2 + (uint)in_AL * 0x1508) * 0x45;
  if (&DAT_002ddd1b < puVar1) {
    do {
      puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(puVar1 + 6) * 0x45;
      iVar2 = iVar2 + 1;
    } while (&DAT_002ddd1b < puVar1);
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0d0098 (Ghidra: FUN_000d0098)
 * Prototype: int sub_0d0098(void);
 * Address  : 0xd0098 (Size: 128 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x54eeb
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000d0098(void)

{
  ushort uVar1;
  int iVar2;
  byte in_AL;
  uint in_EDX;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar1 = *(ushort *)(&DAT_002e0594 + (in_EDX & 0xff) * 2 + (uint)in_AL * 0x1508);
  while (iVar2 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar2) {
    iVar3 = iVar3 + (uint)*(ushort *)(&DAT_002ddd2b + iVar2);
    iVar4 = iVar4 + (uint)*(ushort *)(&DAT_002ddd29 + iVar2);
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
  }
  if (iVar4 == 0) {
    return -1;
  }
  return (iVar3 << 8) / iVar4;
}

/******************************************************************************
 * Function : dk_how_room_exist_slabs_0d0118 (Ghidra: FUN_000d0118)
 * Prototype: undefined4 dk_how_room_exist_slabs_0d0118(void);
 * Address  : 0xd0118 (Size: 878 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 1 -> 0x4a6a2
 * Callees  : 9 -> 0x15030, 0x27390, 0x51374, 0x6e538, 0xc8268, 0xcb144, 0xcfdec, 0xd08a8, 0xddaf0
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 *   - 0x16bef4: "HOW CAN A ROOM EXIST WITH NO SLABS?"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d0316) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000d0118(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int *in_EAX;
  uint uVar5;
  undefined2 extraout_var;
  int extraout_ECX;
  int iVar6;
  int extraout_ECX_00;
  int in_EDX;
  int local_20;
  
  if (((uint)DAT_002eb543 != *in_EAX >> 0x18) ||
     (*(int *)(in_EDX + 3) >> 0x18 == (uint)DAT_002eb543)) {
    return 0;
  }
  *(undefined1 *)((int)in_EAX + 3) = *(undefined1 *)(in_EDX + 6);
  *(ushort *)(in_EAX + 3) = *(short *)((int)in_EAX + 0x3b) * (ushort)DAT_002ed417;
  if (*in_EAX >> 0x18 != (uint)DAT_002eb543) {
    if (*(short *)(&DAT_002e0594 +
                  (*(int *)(in_EDX + 3) >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10) * 2)
        != 0) {
      *(short *)((int)in_EAX + 6) =
           *(short *)(&DAT_002e0594 +
                     (*(int *)(in_EDX + 3) >> 0x18) * 0x1508 +
                     (uint)*(ushort *)((int)in_EAX + 10) * 2);
      *(undefined2 *)
       (&DAT_002ddd1f +
       (uint)*(ushort *)
              (&DAT_002e0594 +
              (uint)*(ushort *)((int)in_EAX + 10) * 2 + (*(int *)(in_EDX + 3) >> 0x18) * 0x1508) *
       0x45) = *(undefined2 *)((int)in_EAX + 1);
    }
    *(undefined2 *)
     (&DAT_002e0594 + (*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10) * 2) =
         *(undefined2 *)((int)in_EAX + 1);
    (&DAT_002e0b4b)[(*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10)] =
         (&DAT_002e0b4b)[(*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10)] + '\x01';
  }
  FUN_000d08a8();
  FUN_000cfdec();
  if (CONCAT22(extraout_var,*(undefined2 *)((int)in_EAX + 0x37)) != 0) {
    do {
      FUN_00015030();
    } while (*(short *)(&DAT_002d33c6 + extraout_ECX) != 0);
  }
  uVar2 = *(ushort *)((int)in_EAX + 10);
  FUN_00027390();
  uVar3 = *(ushort *)((int)in_EAX + 0x3b);
  if (uVar3 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
    iVar6 = 0;
  }
  else {
    if (uVar3 < 2) {
      local_20 = 0;
    }
    else if (uVar3 == 2) {
      local_20 = 4;
    }
    else {
      local_20 = (uint)*(ushort *)((int)in_EAX + 0x3b) * 4 + -4;
    }
    uVar5 = (uint)*(ushort *)((int)in_EAX + 0x3b);
    if (0x31 < *(ushort *)((int)in_EAX + 0x3b)) {
      uVar5 = 0x31;
    }
    bVar1 = (&DAT_0018b6d4)[uVar5];
    uVar3 = *(ushort *)((int)in_EAX + 0x3b);
    iVar6 = 0;
    for (uVar4 = *(ushort *)((int)in_EAX + 0x37); uVar4 != 0;
        uVar4 = *(ushort *)(&DAT_002d33c6 + (uint)uVar4 * 6)) {
      iVar6 = FUN_000c8268();
      iVar6 = extraout_ECX_00 + iVar6;
    }
    iVar6 = ((iVar6 - local_20) * 0x100) / (int)(((uint)uVar3 * 8 + (uint)bVar1 * 2) - local_20);
    if (0x100 < iVar6) {
      iVar6 = 0x100;
    }
  }
  *(short *)(uVar2 + 0x3f) = (short)iVar6;
  FUN_000cb144();
  uVar5 = 0;
  FUN_0006e538(3,0,4);
  if (*(short *)((int)in_EAX + 10) == 1) {
    if (((byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] != uVar5) &&
       (_DAT_00000103 >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) {
      return 1;
    }
  }
  else {
    if (_DAT_00000103 >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
      return 1;
    }
    if (CONCAT31((int3)(_DAT_00000103 >> 0x1f),DAT_002eb543) == uVar5) {
      FUN_00051374();
      return 1;
    }
  }
  FUN_00051374();
  return 1;
}

/******************************************************************************
 * Function : dk_how_room_exist_slabs_0d0488 (Ghidra: FUN_000d0488)
 * Prototype: undefined4 dk_how_room_exist_slabs_0d0488(void);
 * Address  : 0xd0488 (Size: 1040 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:326 ("HOW CAN A ROOM EXIST WITH NO SLABS?")
 * Naming   : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 1 -> 0x4a6a2
 * Callees  : 9 -> 0x15030, 0x27390, 0x51374, 0x63b6d, 0xc8268, 0xcb144, 0xcfdec, 0xd08a8, 0xddaf0
 * Strings  :
 *   - 0x16bf18: "room.cpp"
 *   - 0x16bef4: "HOW CAN A ROOM EXIST WITH NO SLABS?"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d0748) */

undefined4 FUN_000d0488(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int *in_EAX;
  uint uVar5;
  undefined2 extraout_var;
  int extraout_ECX;
  int iVar6;
  int extraout_ECX_00;
  int in_EDX;
  int local_24;
  int local_20;
  
  if ((*(char *)((int)in_EAX + 3) == *(char *)(in_EDX + 6)) ||
     (*(int *)(in_EDX + 3) >> 0x18 == (uint)DAT_002eb543)) {
    return 0;
  }
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)((int)in_EAX + 0x3d)]) {
    do {
      FUN_00063b6d();
    } while (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)((int)in_EAX + 0x3d)]);
  }
  if (*in_EAX >> 0x18 != (uint)DAT_002eb543) {
    uVar2 = *(ushort *)(in_EAX + 1);
    uVar3 = *(ushort *)((int)in_EAX + 6);
    if (uVar2 == 0) {
      *(ushort *)
       (&DAT_002e0594 + (uint)*(ushort *)((int)in_EAX + 10) * 2 + (*in_EAX >> 0x18) * 0x1508) =
           uVar3;
    }
    else {
      *(ushort *)(&DAT_002ddd21 + (uint)uVar2 * 0x45) = uVar3;
    }
    if (uVar3 != 0) {
      *(ushort *)(&DAT_002ddd1f + (uint)uVar3 * 0x45) = uVar2;
    }
    *(undefined2 *)((int)in_EAX + 6) = 0;
    *(undefined2 *)(in_EAX + 1) = 0;
    (&DAT_002e0b4b)[(*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10)] =
         (&DAT_002e0b4b)[(*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10)] + -1;
  }
  *(undefined1 *)((int)in_EAX + 3) = *(undefined1 *)(in_EDX + 6);
  *(ushort *)(in_EAX + 3) = *(short *)((int)in_EAX + 0x3b) * (ushort)DAT_002ed417;
  if (*in_EAX >> 0x18 != (uint)DAT_002eb543) {
    if (*(short *)(&DAT_002e0594 +
                  (uint)*(ushort *)((int)in_EAX + 10) * 2 + (*(int *)(in_EDX + 3) >> 0x18) * 0x1508)
        != 0) {
      *(short *)((int)in_EAX + 6) =
           *(short *)(&DAT_002e0594 +
                     (uint)*(ushort *)((int)in_EAX + 10) * 2 +
                     (*(int *)(in_EDX + 3) >> 0x18) * 0x1508);
      *(undefined2 *)
       (&DAT_002ddd1f +
       (uint)*(ushort *)
              (&DAT_002e0594 +
              (uint)*(ushort *)((int)in_EAX + 10) * 2 + (*(int *)(in_EDX + 3) >> 0x18) * 0x1508) *
       0x45) = *(undefined2 *)((int)in_EAX + 1);
    }
    *(undefined2 *)
     (&DAT_002e0594 + (*in_EAX >> 0x18) * 0x1508 + (uint)*(ushort *)((int)in_EAX + 10) * 2) =
         *(undefined2 *)((int)in_EAX + 1);
    (&DAT_002e0b4b)[(uint)*(ushort *)((int)in_EAX + 10) + (*in_EAX >> 0x18) * 0x1508] =
         (&DAT_002e0b4b)[(uint)*(ushort *)((int)in_EAX + 10) + (*in_EAX >> 0x18) * 0x1508] + '\x01';
  }
  FUN_000d08a8();
  FUN_000cfdec();
  if (CONCAT22(extraout_var,*(undefined2 *)((int)in_EAX + 0x37)) != 0) {
    do {
      FUN_00015030();
    } while (*(short *)(&DAT_002d33c6 + extraout_ECX) != 0);
  }
  uVar2 = *(ushort *)((int)in_EAX + 10);
  FUN_00027390();
  uVar3 = *(ushort *)((int)in_EAX + 0x3b);
  if (uVar3 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
    iVar6 = 0;
  }
  else {
    if (uVar3 < 2) {
      local_24 = 0;
    }
    else if (uVar3 == 2) {
      local_24 = 4;
    }
    else {
      local_24 = (uint)*(ushort *)((int)in_EAX + 0x3b) * 4 + -4;
    }
    uVar5 = (uint)*(ushort *)((int)in_EAX + 0x3b);
    if (0x31 < *(ushort *)((int)in_EAX + 0x3b)) {
      uVar5 = 0x31;
    }
    bVar1 = (&DAT_0018b6d4)[uVar5];
    uVar3 = *(ushort *)((int)in_EAX + 0x3b);
    iVar6 = 0;
    for (uVar4 = *(ushort *)((int)in_EAX + 0x37); uVar4 != 0;
        uVar4 = *(ushort *)(&DAT_002d33c6 + (uint)uVar4 * 6)) {
      iVar6 = FUN_000c8268();
      iVar6 = extraout_ECX_00 + iVar6;
    }
    iVar6 = ((iVar6 - local_24) * 0x100) / (int)(((uint)uVar3 * 8 + (uint)bVar1 * 2) - local_24);
    if (0x100 < iVar6) {
      iVar6 = 0x100;
    }
  }
  *(short *)(uVar2 + 0x3f) = (short)iVar6;
  FUN_000cb144();
  if (*(short *)((int)in_EAX + 10) == 1) {
    if (((int *)(uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] != in_EAX) &&
       ((int *)(*(int *)(local_20 + 3) >> 0x18) !=
        (int *)(uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef])) {
      return 1;
    }
  }
  else {
    if (*(int *)(local_20 + 3) >> 0x18 !=
        (uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
      return 1;
    }
    if ((int *)CONCAT31((int3)(*(int *)(local_20 + 3) >> 0x1f),DAT_002eb543) == in_EAX) {
      FUN_00051374();
      return 1;
    }
  }
  FUN_00051374();
  return 1;
}

/******************************************************************************
 * Function : dk_lair_thinks_it_belongs_0d08a8 (Ghidra: FUN_000d08a8)
 * Prototype: void dk_lair_thinks_it_belongs_0d08a8(void);
 * Address  : 0xd08a8 (Size: 1238 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:5445 ("Lair thinks it belongs to a creature, but the creature disagrees."); room.cpp:5450 ("This lair has no owner!!!")
 * Naming   : String 'Lair thinks it belongs to a creature, but the creature disag'
 * Callers  : 2 -> 0xd0118, 0xd0488
 * Callees  : 14 -> 0x23734, 0x23787, 0x43f07, 0x4d3d4, 0x4fd81, 0x4fdac, 0x512ec, 0x63122, 0x72af4, 0x779fb ...
 * Strings  :
 *   - 0x16c464: "room.cpp"
 *   - 0x16c487: "room.cpp"
 *   - 0x16c422: "Lair thinks it belongs to a creature, but the creature disagrees."
 *   - 0x16c46d: "This lair has no owner!!!"
 ******************************************************************************/
void FUN_000d08a8(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  byte in_DL;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_34;
  int local_2c;
  short sStack_24;
  
  if (((&DAT_002d33ca)
       [((&DAT_0019033b)[((uint)*(ushort *)(in_EAX + 0x37) % 0x55) * 3] +
        (&DAT_0019033b)[(*(ushort *)(in_EAX + 0x37) / 0x55) * 3] * 0x55) * 6] & 7) != DAT_002eb543)
  {
    FUN_00023787();
  }
  FUN_00023734();
  sStack_24 = *(short *)(in_EAX + 0x37);
  do {
    if (sStack_24 == 0) {
      return;
    }
    local_34 = (int)sStack_24 / 0x55;
    iVar3 = local_34 * 3;
    iVar9 = iVar3;
    FUN_00082828();
    if (iVar3 < iVar3 + 3) {
      local_38 = local_34 * 0xf00;
      local_34 = local_34 * 0xc;
      iVar8 = extraout_ECX;
      do {
        if (iVar8 < extraout_ECX + 3) {
          local_2c = iVar8 * 5 + local_38;
          iVar4 = iVar8 << 2;
          iVar7 = (extraout_ECX + 3) * 4;
          do {
            iVar5 = (*(int *)((int)&DAT_0019033b + local_34) * 0x55 +
                    *(int *)((int)&DAT_0019033b + iVar4)) * 6;
            (&DAT_002d33ca)[iVar5] = (&DAT_002d33ca)[iVar5] & 0xf8;
            (&DAT_002d33ca)[iVar5] = (&DAT_002d33ca)[iVar5] | in_DL & 7;
            pbVar6 = (&DAT_001ae9fc)
                     [(*(uint *)((int)&DAT_00279203 + local_2c + 1) & 0x3fffff) >> 0xb];
            if (DAT_001ae9fc < pbVar6) {
              do {
                uVar2 = *(ushort *)(pbVar6 + 2);
                if (pbVar6[0x1f] == 1) {
                  if ((*(short *)(in_EAX + 10) == 0x10) &&
                     ((((bVar1 = pbVar6[0x1a], bVar1 == 0x73 || (bVar1 == 0x74)) || (bVar1 == 0x75))
                      || ((bVar1 == 0x76 || (bVar1 == 0x77)))))) {
                    FUN_00043f07();
LAB_000d0b49:
                    FUN_00072af4();
                  }
                  else if (*(ushort *)(pbVar6 + 0x1d) == 0xffff) {
                    if (((*(short *)(in_EAX + 10) == 3) && ((&DAT_0019103e)[pbVar6[0x1a]] != '\0'))
                       && ((*pbVar6 & 0x80) == 0)) {
                      pbVar6[6] = in_DL;
                      if (*(int *)(pbVar6 + 3) >> 0x18 != (uint)DAT_002eb543) {
                        FUN_0004fdac();
                        FUN_0004fd81();
                      }
                    }
                    else if (((*(short *)(in_EAX + 10) == 8) &&
                             ((&DAT_0019116c)[pbVar6[0x1a]] != '\0')) && ((pbVar6[1] & 1) == 0)) {
                      pbVar6[6] = in_DL;
                      FUN_00077a5b();
                      FUN_000779fb();
                    }
                    else if ((*(short *)(in_EAX + 10) == 2) &&
                            (iVar5 = FUN_000512ec(iVar7,iVar8,iVar9), iVar5 != 0)) {
                      (&DAT_002e1082)[(uint)in_DL * 0x542] =
                           (&DAT_002e1082)[(uint)in_DL * 0x542] + *(int *)(pbVar6 + 0x13);
                      if (*(int *)(pbVar6 + 3) >> 0x18 != (uint)DAT_002eb543) {
                        (&DAT_002e1082)[(*(int *)(pbVar6 + 3) >> 0x18) * 0x542] =
                             (&DAT_002e1082)[(*(int *)(pbVar6 + 3) >> 0x18) * 0x542] -
                             *(int *)(pbVar6 + 0x13);
                      }
switchD_000d0d6d_caseD_0:
                      pbVar6[6] = in_DL;
                    }
                    else if ((*(short *)(in_EAX + 10) == 0xe) &&
                            ((&DAT_0018b919)[(uint)pbVar6[0x1a] * 0x16] != '\0')) {
                      if (*(ushort *)(pbVar6 + 0x13) == 0) {
                        FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 5445, "Lair thinks it belongs to a creature, but the creature disagrees.") */
                      }
                      else if (*(short *)(pbVar6 + 0x1b) ==
                               *(short *)((&DAT_001b0a00)
                                          [*(ushort *)
                                            ((int)(&DAT_001ae9fc)[*(ushort *)(pbVar6 + 0x13)] + 100)
                                          ] + 0x6a)) {
                        FUN_0004d3d4();
                      }
                      else {
                        FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 5450, "This lair has no owner!!!") */
                      }
                    }
                    else {
                      switch((&DAT_0018b91a)[(uint)pbVar6[0x1a] * 0x16]) {
                      case 0:
                      case 1:
                      case 3:
                        goto switchD_000d0d6d_caseD_0;
                      case 2:
                        if (pbVar6[0x1a] != 10) goto LAB_000d0b49;
                        FUN_000abe58();
                      }
                    }
                  }
                  else if ((uint)*(ushort *)(pbVar6 + 0x1d) == (int)sStack_24) {
                    pbVar6[6] = in_DL;
                  }
                }
                pbVar6 = (&DAT_001ae9fc)[uVar2];
              } while (DAT_001ae9fc < pbVar6);
            }
            local_2c = local_2c + 5;
            iVar4 = iVar4 + 4;
          } while (iVar4 < iVar7);
        }
        local_38 = local_38 + 0x500;
        local_34 = local_34 + 4;
      } while (local_34 < (iVar3 + 3) * 4);
    }
    FUN_00063122();
    sStack_24 = *(short *)(&DAT_002d33c6 + sStack_24 * 6);
  } while( true );
}

/******************************************************************************
 * Function : dk_create_room_flag_0d0d80 (Ghidra: FUN_000d0d80)
 * Prototype: void dk_create_room_flag_0d0d80(void);
 * Address  : 0xd0d80 (Size: 229 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:5537 ("Cannot create room_flag")
 * Naming   : String 'Cannot create room_flag'
 * Callers  : 3 -> 0xc8654, 0xc8d10, 0xcaa90
 * Callees  : 3 -> 0x43f07, 0x50d3c, 0xddaf0
 * Strings  :
 *   - 0x16c4a8: "room.cpp"
 *   - 0x16c490: "Cannot create room_flag"
 ******************************************************************************/
void FUN_000d0d80(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  
  sVar1 = *(short *)(in_EAX + 10);
  if ((((sVar1 != 7) && (sVar1 != 1)) && (sVar1 != 0x10)) && (sVar1 != 0xf)) {
    iVar2 = FUN_00050d3c(((*(ushort *)(in_EAX + 0x37) % 0x55) * 3 + 1) * 0x100,0x200);
    if ((iVar2 == 0) && (iVar2 = FUN_00043f07(), iVar2 == 0)) {
      FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 5537, "Cannot create room_flag") */
      return;
    }
    *(undefined2 *)(iVar2 + 0x13) = *(undefined2 *)(in_EAX + 1);
  }
  return;
}

/******************************************************************************
 * Function : sub_0d0ee0 (Ghidra: FUN_000d0ee0)
 * Prototype: undefined1 * sub_0d0ee0(void);
 * Address  : 0xd0ee0 (Size: 109 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x739b9
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_000d0ee0(void)

{
  byte in_AL;
  uint in_EDX;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if ((*(byte *)((int)&DAT_00279203 + ((in_EDX & 0xff) * 0x100 + (uint)in_AL) * 5) & 2) != 0) {
    puVar1 = &DAT_002ddd1b +
             (uint)(byte)(&DAT_002d33c8)
                         [((&DAT_0019033b)[in_AL] + (&DAT_0019033b)[in_EDX & 0xff] * 0x55) * 6] *
             0x45;
  }
  return puVar1;
}

/******************************************************************************
 * Function : sub_0d0f50 (Ghidra: FUN_000d0f50)
 * Prototype: undefined8 sub_0d0f50(void);
 * Address  : 0xd0f50 (Size: 111 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 59 -> 0x13747, 0x137af, 0x13b43, 0x16640, 0x26ce2, 0x26dbc, 0x26faa, 0x28afb, 0x2ab14, 0x3818c ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000d0f50(void)

{
  int in_EAX;
  undefined4 in_EDX;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if ((*(byte *)((int)&DAT_00279203 +
                (uint)CONCAT11(*(byte *)(in_EAX + 0x10),*(byte *)(in_EAX + 0xe)) * 5) & 2) != 0) {
    puVar1 = &DAT_002ddd1b +
             (uint)(byte)(&DAT_002d33c8)
                         [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                          (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45;
  }
  return CONCAT44(in_EDX,puVar1);
}

/******************************************************************************
 * Function : sub_0d0fc0 (Ghidra: FUN_000d0fc0)
 * Prototype: undefined8 sub_0d0fc0(void);
 * Address  : 0xd0fc0 (Size: 111 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdd20c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000d0fc0(void)

{
  int in_EAX;
  undefined4 in_EDX;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if ((*(byte *)((int)&DAT_00279203 +
                (uint)CONCAT11(*(byte *)(in_EAX + 3),*(byte *)(in_EAX + 1)) * 5) & 2) != 0) {
    puVar1 = &DAT_002ddd1b +
             (uint)(byte)(&DAT_002d33c8)
                         [((&DAT_0019033b)[*(byte *)(in_EAX + 1)] +
                          (&DAT_0019033b)[*(byte *)(in_EAX + 3)] * 0x55) * 6] * 0x45;
  }
  return CONCAT44(in_EDX,puVar1);
}

/******************************************************************************
 * Function : dk_room_passed_0d1030 (Ghidra: FUN_000d1030)
 * Prototype: int dk_room_passed_0d1030(void);
 * Address  : 0xd1030 (Size: 451 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp:5655 ("INVALID ROOM PASSED")
 * Naming   : String 'INVALID ROOM PASSED'
 * Callers  : 1 -> 0x65d3e
 * Callees  : 2 -> 0x50d3c, 0xddaf0
 * Strings  :
 *   - 0x16c4c5: "room.cpp"
 *   - 0x16c4b1: "INVALID ROOM PASSED"
 ******************************************************************************/
int FUN_000d1030(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  undefined *unaff_EBX;
  int iVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  
  if (unaff_EBX < &DAT_002ddd1c) {
    FUN_000ddaf0(); /* LbErrorLog("room.cpp", line 5655, "INVALID ROOM PASSED") */
    iVar2 = extraout_ECX;
  }
  else {
    local_1c = (uint)*(ushort *)(unaff_EBX + 0x37);
    uVar1 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar1 >> 0xd | uVar1 * 0x80000;
    local_20 = DAT_002e8bf6 % (uint)*(ushort *)(unaff_EBX + 0x3b);
    iVar2 = 0;
    if (local_20 != 0) {
      do {
        local_1c = (uint)*(ushort *)(&DAT_002d33c6 + local_1c * 6);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)local_20);
    }
    local_24 = 0;
    while( true ) {
      iVar2 = 0;
      if ((int)(uint)*(ushort *)(unaff_EBX + 0x3b) <= local_24) break;
      if (*(ushort *)(unaff_EBX + 0x3b) == local_20) {
        local_1c = CONCAT22((short)(local_20 >> 0x10),*(undefined2 *)(unaff_EBX + 0x37));
        local_20 = 0;
      }
      uVar1 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = uVar1 >> 0xd | uVar1 * 0x80000;
      iVar2 = ((int)local_1c / 0x55) * 3;
      iVar4 = 0;
      do {
        iVar3 = FUN_00050d3c(iVar2);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 9);
      local_1c = (uint)*(ushort *)(&DAT_002d33c6 + local_1c * 6);
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    }
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0d11f4 (Ghidra: FUN_000d11f4)
 * Prototype: int sub_0d11f4(void);
 * Address  : 0xd11f4 (Size: 86 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x67290, 0x77547
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000d11f4(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = *(ushort *)(&DAT_002e0594 + in_EDX * 2 + in_EAX * 0x1508);
  while (iVar2 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar2) {
    iVar3 = iVar3 + (uint)*(ushort *)(&DAT_002ddd56 + iVar2);
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_0d124c (Ghidra: FUN_000d124c)
 * Prototype: int sub_0d124c(void);
 * Address  : 0xd124c (Size: 77 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x37e26
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000d124c(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = *(ushort *)(in_EDX * 2 + in_EAX + 0xb);
  while (iVar2 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar2) {
    iVar3 = iVar3 + (uint)*(ushort *)(&DAT_002ddd56 + iVar2);
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar2);
  }
  return iVar3;
}

/******************************************************************************
 * Function : sub_0d129c (Ghidra: FUN_000d129c)
 * Prototype: undefined1 * sub_0d129c(void);
 * Address  : 0xd129c (Size: 46 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x66b28, 0x76b29
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * FUN_000d129c(void)

{
  int in_EAX;
  undefined1 *puVar1;
  int in_EDX;
  
  puVar1 = &DAT_002ddd1b + (uint)*(ushort *)(&DAT_002e0594 + in_EAX * 0x1508 + in_EDX * 2) * 0x45;
  if (puVar1 == &DAT_002ddd1b) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}

/******************************************************************************
 * Function : sub_0d12cc (Ghidra: FUN_000d12cc)
 * Prototype: undefined4 sub_0d12cc(void);
 * Address  : 0xd12cc (Size: 93 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6db51
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000d12cc(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(in_EAX + 0x37);
  if (uVar2 == 0) {
    return 0;
  }
  do {
    iVar1 = 2;
    do {
      if ((byte)(&DAT_002d33c5)[((*(int *)((int)&DAT_0018b69e + iVar1) >> 0x10) + uVar2) * 6] ==
          in_EDX) {
        return 1;
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x12);
    uVar2 = (uint)*(ushort *)(&DAT_002d33c6 + uVar2 * 6);
  } while (uVar2 != 0);
  return 0;
}

/******************************************************************************
 * Function : sub_0d132c (Ghidra: FUN_000d132c)
 * Prototype: longlong sub_0d132c(void);
 * Address  : 0xd132c (Size: 79 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x64ae7, 0xd0f50
 ******************************************************************************/
longlong FUN_000d132c(void)

{
  int in_EAX;
  uint in_EDX;
  undefined8 uVar1;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) != 0) {
    uVar1 = FUN_000d0f50();
    if (((int)uVar1 != 0) &&
       (*(short *)((int)uVar1 + 1) == *(short *)((int)((ulonglong)uVar1 >> 0x20) + 0x80))) {
      FUN_00064ae7();
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0d137c (Ghidra: FUN_000d137c)
 * Prototype: void sub_0d137c(void);
 * Address  : 0xd137c (Size: 86 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x15030
 ******************************************************************************/
void FUN_000d137c(void)

{
  short sVar1;
  int in_EAX;
  int extraout_ECX;
  
  sVar1 = *(short *)(in_EAX + 0x37);
  while (sVar1 != 0) {
    FUN_00015030();
    sVar1 = *(short *)(&DAT_002d33c6 + extraout_ECX);
  }
  return;
}

/******************************************************************************
 * Function : sub_0d13d4 (Ghidra: FUN_000d13d4)
 * Prototype: undefined4 sub_0d13d4(void);
 * Address  : 0xd13d4 (Size: 6 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000d13d4(void)

{
  return 1;
}

