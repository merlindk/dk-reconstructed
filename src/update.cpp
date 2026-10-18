/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: update.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 49
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0dc440 (Ghidra: FUN_000dc440)
 * Prototype: int sub_0dc440(void);
 * Address  : 0xdc440 (Size: 96 bytes)
 * Module   : update.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 40 -> 0x138c9, 0x15be4, 0x16498, 0x189d4, 0x22660, 0x25cf7, 0x2649f, 0x2666b, 0x2683b, 0x26ac9 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000dc440(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *in_EAX;
  ushort *in_EDX;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)((uint)*in_EAX - (uint)*in_EDX) >> 0x1f;
  uVar4 = (int)((uint)in_EAX[1] - (uint)in_EDX[1]) >> 0x1f;
  if ((int)(((uint)in_EAX[1] - (uint)in_EDX[1] ^ uVar4) - uVar4) <
      (int)(((uint)*in_EAX - (uint)*in_EDX ^ uVar3) - uVar3)) {
    uVar1 = *in_EAX;
    uVar2 = *in_EDX;
  }
  else {
    uVar1 = in_EAX[1];
    uVar2 = in_EDX[1];
  }
  uVar3 = (int)((uint)uVar1 - (uint)uVar2) >> 0x1f;
  return ((uint)uVar1 - (uint)uVar2 ^ uVar3) - uVar3;
}

/******************************************************************************
 * Function : sub_0dd20c (Ghidra: FUN_000dd20c)
 * Prototype: uint sub_0dd20c(void);
 * Address  : 0xdd20c (Size: 228 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x65d3e
 * Callees  : 1 -> 0xd0fc0
 ******************************************************************************/
uint FUN_000dd20c(void)

{
  ushort *in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short extraout_CX;
  ushort *in_EDX;
  uint unaff_EBX;
  int iVar5;
  short sVar6;
  undefined8 uVar7;
  
  iVar1 = (uint)*in_EDX - (uint)*in_EAX;
  iVar2 = (uint)in_EDX[1] - (uint)in_EAX[1];
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar2 < 0) {
    iVar5 = -0x50;
    iVar2 = -iVar2;
  }
  else {
    iVar5 = 0x50;
  }
  iVar1 = iVar1 + 1;
  uVar3 = iVar1 / 0x50;
  iVar2 = iVar2 + 1;
  uVar4 = uVar3;
  if (iVar1 != iVar2) {
    if (iVar2 < iVar1) {
      uVar4 = (iVar2 * iVar5) / iVar1;
    }
    else {
      uVar4 = iVar2 / 0x50;
      uVar3 = uVar4;
    }
  }
  sVar6 = (short)*(undefined4 *)in_EAX;
  if (uVar3 != 0) {
    do {
      uVar7 = FUN_000d0fc0(sVar6);
      uVar4 = (uint)uVar7;
      if (uVar4 != unaff_EBX) {
        return uVar4 & 0xffffff00;
      }
      sVar6 = sVar6 + extraout_CX;
    } while ((int)((ulonglong)uVar7 >> 0x20) != 1);
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/******************************************************************************
 * Function : sub_0dd2f0 (Ghidra: FUN_000dd2f0)
 * Prototype: uint sub_0dd2f0(void);
 * Address  : 0xdd2f0 (Size: 144 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x43bb3, 0x44b13, 0x4ac70, 0x65283, 0x811d8, 0x84904, 0xe2a14
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000dd2f0(void)

{
  int in_EAX;
  uint uVar1;
  byte in_DL;
  
  if ((DAT_00191d3c == '\x02') || (DAT_00191d3c == '\x03')) {
    uVar1 = (uint)*(ushort *)
                   (&DAT_00187b74 + (uint)in_DL * 2 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c);
    if (-1 < *(int *)(&DAT_002f29d1 +
                     (uint)*(ushort *)
                            (&DAT_00187b74 + (uint)in_DL * 2 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c
                            ) * 2) >> 0x10) {
      return *(int *)(&DAT_002f29d1 +
                     (uint)*(ushort *)
                            (&DAT_00187b74 + (uint)in_DL * 2 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c
                            ) * 2) >> 0x10;
    }
  }
  else {
    uVar1 = *(int *)((int)&DAT_002f2223 +
                    (uint)*(ushort *)
                           (&DAT_00187b74 + (uint)in_DL * 2 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c)
                    * 2 + 2) >> 0x10;
    if ((int)uVar1 < 0) {
      uVar1 = (uint)*(ushort *)
                     (&DAT_00187b74 + (uint)in_DL * 2 + (uint)*(byte *)(in_EAX + 0x1a) * 0x2c);
    }
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_0dd380 (Ghidra: FUN_000dd380)
 * Prototype: undefined4 sub_0dd380(int *param_1);
 * Address  : 0xdd380 (Size: 146 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000dd380(int *param_1)

{
  ushort uVar1;
  ushort *in_EAX;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  iVar2 = (uint)DAT_0019cba6 * (((*(int *)(in_EAX + 1) >> 0x10) << 5) >> 8);
  if (iVar2 < 2) {
    iVar2 = 2;
  }
  else if (0x20 < iVar2) {
    iVar2 = 0x20;
  }
  uVar1 = in_EAX[1];
  *in_ECX = ((int)((in_EDX - (uint)*in_EAX) * iVar2) >> 8) + 0xaa;
  iVar2 = ((int)(iVar2 * (unaff_EBX - (uint)uVar1)) >> 8) + 0xaa;
  *param_1 = iVar2;
  if ((((*in_ECX < 0x96) || (0x1e8 < *in_ECX)) || (iVar2 < 0x38)) || (0x18a < iVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_0dd414 (Ghidra: FUN_000dd414)
 * Prototype: void sub_0dd414(int param_1,int param_2);
 * Address  : 0xdd414 (Size: 155 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6b820
 * Callees  : 1 -> 0x7da18
 ******************************************************************************/
void FUN_000dd414(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *in_EAX;
  short extraout_CX;
  int in_ECX;
  undefined4 *in_EDX;
  int extraout_EDX;
  int unaff_EBX;
  byte bVar3;
  short local_18;
  short sStack_16;
  short local_14 [2];
  int local_10;
  
  bVar3 = 0;
  iVar1 = (&DAT_001927e0)[unaff_EBX];
  local_10 = param_1 * (&DAT_001927e0)[in_ECX] >> 0x10;
  local_18 = (short)*in_EAX;
  sStack_16 = (short)((uint)*in_EAX >> 0x10);
  local_14[0] = *(short *)(in_EAX + 1);
  if (param_2 != 0) {
    do {
      cVar2 = FUN_0007da18();
      if (cVar2 != '\0') break;
      local_18 = local_18 + (short)((uint)(param_1 * iVar1) >> 0x10);
      sStack_16 = sStack_16 + extraout_CX;
      local_14[0] = local_14[0] + (short)local_10;
    } while (extraout_EDX != 1);
  }
  *in_EDX = CONCAT22(sStack_16,local_18);
  *(short *)(in_EDX + (uint)bVar3 * -2 + 1) = local_14[(uint)bVar3 * -4];
  return;
}

/******************************************************************************
 * Function : sub_0dd4b0 (Ghidra: FUN_000dd4b0)
 * Prototype: undefined4 sub_0dd4b0(void);
 * Address  : 0xdd4b0 (Size: 80 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000dd4b0(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  
  iVar1 = (DAT_002f10ce >> 0x18) * 0x4ef;
  if ((((*(short *)(&DAT_0019d518 + iVar1) != 0) &&
       ((int)(uint)*(ushort *)(&DAT_0019d514 + iVar1) <= in_EAX)) &&
      (in_EAX < (int)(*(ushort *)(&DAT_0019d514 + iVar1) + 0x74))) &&
     (((int)(uint)*(ushort *)(&DAT_0019d516 + iVar1) <= in_EDX &&
      (in_EDX < (int)(*(ushort *)(&DAT_0019d516 + iVar1) + 0x74))))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0dd500 (Ghidra: FUN_000dd500)
 * Prototype: void sub_0dd500(void);
 * Address  : 0xdd500 (Size: 292 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x23519, 0x68ab1
 * Callees  : 3 -> 0x35e3c, 0x51374, 0x85b1c
 ******************************************************************************/
void FUN_000dd500(void)

{
  undefined1 *in_EAX;
  int iVar1;
  int iVar2;
  
  if (in_EAX[0x29] == '\0') {
    if (in_EAX[0x2b] == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
      FUN_00035e3c();
    }
    iVar1 = (uint)(byte)in_EAX[0x2b] * 0x1508;
    in_EAX[0x29] = 1;
    iVar2 = (&DAT_002e107a)[(uint)(byte)in_EAX[0x2b] * 0x542];
    if ((DAT_0019d0b6 & 1) == 0) {
      iVar2 = iVar2 + (int)((uint)DAT_002e78e9 * 10 * iVar2) / 100;
    }
    else {
      iVar2 = iVar2 * 2;
    }
    if ((&DAT_0019d0f1)[(uint)(byte)in_EAX[0x2b] * 0x4ef] == '\x02') {
      iVar2 = iVar2 / 2;
    }
    *(undefined4 *)(&DAT_002e18a0 + iVar1) = 1;
    *(int *)(&DAT_002e18a4 + iVar1) = iVar2;
    if ((DAT_0019d0b6 & 1) == 0) {
      *(int *)(in_EAX + 0x4eb) = DAT_002e8bee + 300;
    }
    if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
      iVar2 = FUN_00085b1c();
      if (iVar2 != 0) {
        (&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] =
             (&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] | 0x10;
      }
      FUN_00051374();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0dd624 (Ghidra: FUN_000dd624)
 * Prototype: void sub_0dd624(void);
 * Address  : 0xdd624 (Size: 164 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x4823a, 0x4845c, 0x4ed3d, 0x5cc4a, 0x72af4, 0xe6a10
 ******************************************************************************/
void FUN_000dd624(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar3;
  int iVar4;
  
  bVar1 = *(byte *)(in_EAX + 0x2b);
  iVar4 = (uint)bVar1 * 0x1508;
  FUN_000e6a10();
  iVar2 = (&DAT_002e0e0d)[(uint)bVar1 * 0x542];
  (&DAT_002e05ec)[iVar4] = 0;
  puVar3 = extraout_ECX;
  if (iVar2 != 0) {
    FUN_0004ed3d();
    puVar3 = extraout_ECX_00;
  }
  if (*(short *)(&DAT_002e0b61 + iVar4) != 0) {
    FUN_00072af4();
    *(undefined2 *)(&DAT_002e0b61 + iVar4) = 0;
    puVar3 = extraout_ECX_01;
  }
  if (puVar3 == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
    FUN_0005cc4a();
  }
  FUN_0004823a();
  FUN_0004845c();
  return;
}

/******************************************************************************
 * Function : sub_0dd6c8 (Ghidra: FUN_000dd6c8)
 * Prototype: void sub_0dd6c8(void);
 * Address  : 0xdd6c8 (Size: 459 bytes)
 * Module   : update.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x2347d, 0x68ac4, 0xde6a8
 * Callees  : 11 -> 0x21527, 0x35e3c, 0x4823a, 0x4845c, 0x4ed3d, 0x51374, 0x5ae90, 0x5cc4a, 0x70c0c, 0x72af4 ...
 ******************************************************************************/
void FUN_000dd6c8(void)

{
  byte bVar1;
  undefined1 *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  
  bVar1 = in_EAX[0x2b];
  iVar2 = (uint)bVar1 * 0x1508;
  if (in_EAX[0x29] == '\0') {
    if (in_EAX[0x2b] == (&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
      FUN_00035e3c();
      in_EAX = extraout_ECX;
    }
    in_EAX[0x29] = 2;
    iVar3 = (&DAT_002e107a)[(uint)bVar1 * 0x542];
    if ((DAT_0019d0b6 & 1) == 0) {
      iVar3 = iVar3 + (int)((uint)DAT_002e78e9 * 10 * iVar3) / 100;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    if ((&DAT_0019d0f1)[(uint)(byte)in_EAX[0x2b] * 0x4ef] == '\x02') {
      iVar3 = iVar3 / 2;
    }
    iVar4 = DAT_002f10ce >> 0x18;
    *(int *)(&DAT_002e18a4 + iVar2) = iVar3;
    if (in_EAX == &DAT_0019d0c8 + iVar4 * 0x4ef) {
      FUN_00051374();
      FUN_0005ae90();
      DAT_002ee892 = 0;
      DAT_002ee893 = 0;
      in_EAX = extraout_ECX_00;
    }
    bVar1 = in_EAX[0x2b];
    iVar4 = (uint)bVar1 * 0x1508;
    FUN_000e6a10();
    iVar3 = (&DAT_002e0e0d)[(uint)bVar1 * 0x542];
    (&DAT_002e05ec)[iVar4] = 0;
    if (iVar3 != 0) {
      FUN_0004ed3d();
    }
    if (*(short *)(&DAT_002e0b61 + iVar4) != 0) {
      FUN_00072af4();
      *(undefined2 *)(&DAT_002e0b61 + iVar4) = 0;
    }
    if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
      FUN_0005cc4a();
    }
    FUN_0004823a();
    FUN_0004845c();
    if ((DAT_0019d0b6 & 1) == 0) {
      *(int *)(extraout_ECX_01 + 0x4eb) = DAT_002e8bee + 300;
    }
    if ((DAT_0019d0b6 & 1) != 0) {
      FUN_00070c0c();
    }
    if (((&DAT_002e0593)[iVar2] & 1) != 0) {
      FUN_00021527();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0dd894 (Ghidra: FUN_000dd894)
 * Prototype: void sub_0dd894(void);
 * Address  : 0xdd894 (Size: 85 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x70bf9, 0xedc70
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dd894(void)

{
  undefined1 *in_EAX;
  int iVar1;
  
  if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
    if ((DAT_0019d0b6 & 1) == 0) {
      iVar1 = FUN_00070bf9();
      if (iVar1 == 0) {
        DAT_002e78ea = DAT_002e78ea + 1;
      }
      _DAT_0019d0c2 = (uint)DAT_002e78ea;
    }
    else {
      FUN_000edc70();
    }
    DAT_0019a2a0 = 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0dd8ec (Ghidra: FUN_000dd8ec)
 * Prototype: void sub_0dd8ec(void);
 * Address  : 0xdd8ec (Size: 49 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xedc70
 ******************************************************************************/
void FUN_000dd8ec(void)

{
  undefined1 *in_EAX;
  
  if (in_EAX == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
    if ((DAT_0019d0b6 & 1) != 0) {
      FUN_000edc70();
    }
    DAT_0019a2a0 = 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0dd920 (Ghidra: FUN_000dd920)
 * Prototype: undefined * sub_0dd920(void);
 * Address  : 0xdd920 (Size: 26 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 58 -> 0x29738, 0x29800, 0x298b5, 0x29979, 0x299f8, 0x29ac2, 0x29b54, 0x29bfe, 0x29d32, 0x29d96 ...
 * Callees  : 1 -> 0xe7714
 * Strings  :
 *   - 0x16c950: "%s%s"
 ******************************************************************************/
undefined * FUN_000dd920(void)

{
  FUN_000e7714(&DAT_0019cfac,&DAT_0016c950); /* 0x16c950="%s%s" */
  return &DAT_0019cfac;
}

/******************************************************************************
 * Function : coord3d_equal (Ghidra: FUN_000dd93c)
 * Prototype: bool coord3d_equal(void);
 * Address  : 0xdd93c (Size: 37 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : 6-byte equality comparison between two Coord3d structures
 * Callers  : 3 -> 0xb45b4, 0xb4894, 0xb4994
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000dd93c(void)

{
  byte *in_EAX;
  int iVar1;
  int iVar2;
  byte *in_EDX;
  bool bVar3;
  bool bVar4;
  
  iVar2 = 6;
  bVar3 = false;
  iVar1 = 0;
  bVar4 = true;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar3 = *in_EAX < *in_EDX;
    bVar4 = *in_EAX == *in_EDX;
    in_EAX = in_EAX + 1;
    in_EDX = in_EDX + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
  }
  return iVar1 == 0;
}

/******************************************************************************
 * Function : things_collide_at (Ghidra: FUN_000dd964)
 * Prototype: undefined4 things_collide_at(void);
 * Address  : 0xdd964 (Size: 217 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : 3D bounding-box collision check between two Coord3d positions for a Thing
 * Callers  : 1 -> 0xb45b4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000dd964(void)

{
  int in_EAX;
  uint uVar1;
  ushort *in_EDX;
  ushort *unaff_EBX;
  
  uVar1 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  if (((int)(*in_EDX - uVar1) >> 8 == (int)(*unaff_EBX - uVar1) >> 8) &&
     ((int)(*in_EDX + uVar1) >> 8 == (int)(*unaff_EBX + uVar1) >> 8)) {
    if (((int)(in_EDX[1] - uVar1) >> 8 == (int)(unaff_EBX[1] - uVar1) >> 8) &&
       ((int)(in_EDX[1] + uVar1) >> 8 == (int)(uVar1 + unaff_EBX[1]) >> 8)) {
      if ((*(int *)(in_EDX + 1) >> 0x18 == *(int *)(unaff_EBX + 1) >> 0x18) &&
         ((int)((*(int *)(in_EDX + 1) >> 0x10) + (uint)*(ushort *)(in_EAX + 0x58)) >> 8 ==
          (int)((*(int *)(unaff_EBX + 1) >> 0x10) + (uint)*(ushort *)(in_EAX + 0x58)) >> 8)) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0ddad0 (Ghidra: FUN_000ddad0)
 * Prototype: int sub_0ddad0(void);
 * Address  : 0xddad0 (Size: 29 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x444a9, 0x44b13, 0x44f33, 0x49bfc
 * Callees  : 1 -> 0x4c2eb
 ******************************************************************************/
int FUN_000ddad0(void)

{
  undefined1 uVar1;
  int in_EDX;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_0004c2eb();
  return (CONCAT31((int3)((uint)extraout_EDX >> 8),uVar1) << 8) / in_EDX;
}

/******************************************************************************
 * Function : LbErrorLog (Ghidra: FUN_000ddaf0)
 * Prototype: undefined4 LbErrorLog(void);
 * Address  : 0xddaf0 (Size: 8 bytes)
 * Module   : update.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Bullfrog ERRORLOG(__FILE__, __LINE__, msg) stub (676 call sites)
 * Callers  : 439 -> 0x1073a, 0x109ea, 0x119bc, 0x1264b, 0x1277d, 0x13b43, 0x13bae, 0x13d3b, 0x13e1b, 0x14127 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000ddaf0(void)

{
  return 1;
}

/******************************************************************************
 * Function : LbWarnLog (Ghidra: FUN_000ddaf8)
 * Prototype: void LbWarnLog(void);
 * Address  : 0xddaf8 (Size: 1 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Bullfrog WARNLOG/SYNCLOG(__FILE__, __LINE__, msg) stub (8 call sites)
 * Callers  : 7 -> 0x63670, 0x6385d, 0xb4f00, 0xb4fa0, 0xd1ae0, 0xd29ac, 0xd4188
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000ddaf8(void)

{
  return;
}

/******************************************************************************
 * Function : compute_things_checksum (Ghidra: FUN_000ddafc)
 * Prototype: undefined8 compute_things_checksum(void);
 * Address  : 0xddafc (Size: 91 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Deterministic lockstep checksum across all 2,048 Thing slots (0x001ae9fc)
 * Callers  : 2 -> 0x61883, 0x619be
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000ddafc(void)

{
  byte *pbVar1;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar2);
    if (((*pbVar1 & 1) != 0) && (pbVar1[0x1f] != 0xc)) {
      iVar3 = iVar3 + (uint)*(ushort *)(pbVar1 + 0x52) +
                      (*(int *)(pbVar1 + 0xf) >> 0x10) +
                      (uint)*(ushort *)(pbVar1 + 0xd) + (uint)*(ushort *)(pbVar1 + 0xf) +
                      (*(int *)(pbVar1 + 3) >> 0x18);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x2000);
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0ddb5c (Ghidra: FUN_000ddb5c)
 * Prototype: undefined4 sub_0ddb5c(void);
 * Address  : 0xddb5c (Size: 101 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xddbe0
 * Callees  : 3 -> 0x22b3a, 0x7da18, 0xb3afc
 ******************************************************************************/
undefined4 FUN_000ddb5c(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = FUN_000b3afc();
  if (iVar2 != 0) {
    return 2;
  }
  cVar1 = FUN_0007da18();
  if ((cVar1 != '\0') &&
     (((iVar2 = FUN_00022b3a(), iVar2 == 0 || (*(int *)(iVar2 + 3) >> 0x18 != extraout_ECX)) ||
      (*(char *)(iVar2 + 0x18) != '\0')))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0ddbe0 (Ghidra: FUN_000ddbe0)
 * Prototype: uint sub_0ddbe0(void);
 * Address  : 0xddbe0 (Size: 1063 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x102c0
 * Callees  : 1 -> 0xddb5c
 ******************************************************************************/
uint FUN_000ddbe0(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  uint *in_EAX;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *in_EDX;
  uint uVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  undefined4 uVar16;
  short sVar17;
  ushort auStack_50 [2];
  uint local_4c;
  ushort auStack_48 [2];
  undefined1 local_44;
  byte bStack_43;
  undefined2 uStack_42;
  ushort local_40 [2];
  undefined1 local_3c;
  char local_3b;
  undefined2 local_3a;
  ushort auStack_38 [2];
  byte *local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  undefined4 local_14;
  
  bVar15 = 0;
  iVar9 = (uint)*in_EDX - (uint)(ushort)*in_EAX;
  local_30 = (uint)in_EDX[1] - (uint)*(ushort *)((int)in_EAX + 2);
  iVar13 = (*(int *)(in_EDX + 1) >> 0x10) - (*(int *)((int)in_EAX + 2) >> 0x10);
  uVar12 = 0;
  if ((*(char *)((int)in_EAX + 1) != *(char *)((int)in_EDX + 1)) ||
     (*(char *)((int)in_EDX + 3) != *(char *)((int)in_EAX + 3))) {
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      local_28 = -0x100;
    }
    else {
      local_28 = 0x100;
    }
    if (local_30 < 0) {
      local_30 = -local_30;
      local_24 = -0x100;
    }
    else {
      local_24 = 0x100;
    }
    if (iVar13 < 0) {
      iVar13 = -iVar13;
      local_18 = -0x100;
    }
    else {
      local_18 = 0x100;
    }
    local_1c = (byte *)((int)in_EAX + 1);
    local_34 = (byte *)((int)in_EDX + 1);
    if (iVar9 == local_30) {
      uVar10 = (uint)*local_34 - (uint)*local_1c;
    }
    else {
      if (local_30 < iVar9) {
        local_24 = (local_30 * local_24) / iVar9;
        bVar1 = *local_34;
        bVar2 = *local_1c;
      }
      else {
        local_28 = (local_28 * iVar9) / local_30;
        bVar1 = *(byte *)((int)in_EDX + 3);
        bVar2 = *(byte *)((int)in_EAX + 3);
        iVar9 = local_30;
      }
      uVar10 = (uint)bVar1 - (uint)bVar2;
    }
    local_18 = (iVar13 * local_18) / iVar9;
    local_4c = *in_EAX;
    auStack_48[0] = (ushort)in_EAX[1];
    uStack_42 = *(ushort *)((int)in_EAX + 2) + (short)local_24;
    local_40[0] = (ushort)in_EAX[1] + (short)local_18;
    _local_44 = (ushort)*in_EAX + (short)local_28;
    for (iVar9 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f); iVar9 != 0;
        iVar9 = iVar9 + -1) {
      uVar11 = FUN_000ddb5c();
      sVar5 = local_3a;
      cVar8 = local_3b;
      uVar7 = local_3c;
      uVar10 = local_4c;
      uVar12 = uVar12 | uVar11;
      if ((uVar12 & 1) != 0) {
        return 0;
      }
      local_14 = 3;
      local_20 = (uStack_42._1_1_ / 3) * 0x300;
      if ((*(byte *)((int)&DAT_00279203 + ((bStack_43 / 3) * 3 + local_20 + 0x101) * 5) & 0x40) != 0
         ) {
        return 0;
      }
      iVar14 = (uint)bStack_43 - (local_4c >> 8 & 0xff);
      iVar13 = (uint)uStack_42._1_1_ - (local_4c >> 0x18);
      sVar4 = uStack_42;
      if ((iVar14 != 0) && (iVar13 != 0)) {
        local_3c = (undefined1)local_4c;
        local_3b = (char)(local_4c >> 8);
        local_3a._0_1_ = (undefined1)(local_4c >> 0x10);
        local_3a._1_1_ = (char)(local_4c >> 0x18);
        cVar6 = local_3a._1_1_;
        sVar3 = (short)local_4c;
        sVar17 = (short)(local_4c >> 0x10);
        switch(iVar13 * 2 + iVar14) {
        case 1:
          auStack_38[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          auStack_50[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          local_3a._1_1_ = local_3a._1_1_ + '\x01';
          uVar16 = CONCAT22(sVar17,sVar3 + -0x100);
          uVar10 = FUN_000ddb5c(uVar16);
          if (((uVar12 | uVar10) & 1) != 0) {
            return 0;
          }
          uVar11 = FUN_000ddb5c(uVar16);
          uVar12 = uVar12 | uVar10 | uVar11;
          uVar7 = local_3c;
          cVar8 = local_3b;
          sVar4 = uStack_42;
          sVar5 = CONCAT11(local_3a._1_1_,(undefined1)local_3a);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          break;
        case 3:
          auStack_38[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          auStack_50[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          uVar16 = CONCAT13(cVar6 + '\x01',(int3)uVar10);
          local_3b = local_3b + '\x01';
          uVar10 = FUN_000ddb5c(uVar16);
          if (((uVar12 | uVar10) & 1) != 0) {
            return 0;
          }
          uVar11 = FUN_000ddb5c(uVar16);
          uVar12 = uVar12 | uVar10 | uVar11;
          uVar7 = local_3c;
          cVar8 = local_3b;
          sVar4 = uStack_42;
          sVar5 = CONCAT11(local_3a._1_1_,(undefined1)local_3a);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          break;
        case -3:
          auStack_38[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          auStack_50[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          local_3a = CONCAT11(local_3a._1_1_,(undefined1)local_3a) + -0x100;
          uVar16 = CONCAT22(sVar17,sVar3 + -0x100);
          uVar10 = FUN_000ddb5c(uVar16);
          if (((uVar12 | uVar10) & 1) != 0) {
            return 0;
          }
          uVar11 = FUN_000ddb5c(uVar16);
          uVar12 = uVar12 | uVar10 | uVar11;
          uVar7 = local_3c;
          cVar8 = local_3b;
          sVar4 = uStack_42;
          sVar5 = local_3a;
          if ((uVar12 & 1) != 0) {
            return 0;
          }
          break;
        case -1:
          auStack_38[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          auStack_50[(uint)bVar15 * -4] = auStack_48[(uint)bVar15 * -4];
          uVar16 = CONCAT22(sVar17 + -0x100,sVar3);
          local_3b = local_3b + '\x01';
          uVar10 = FUN_000ddb5c(uVar16);
          if (((uVar12 | uVar10) & 1) != 0) {
            return 0;
          }
          uVar11 = FUN_000ddb5c(uVar16);
          uVar12 = uVar12 | uVar10 | uVar11;
          uVar7 = local_3c;
          cVar8 = local_3b;
          sVar4 = uStack_42;
          sVar5 = CONCAT11(local_3a._1_1_,(undefined1)local_3a);
          if ((uVar12 & 1) != 0) {
            return 0;
          }
        }
      }
      local_3b = cVar8;
      local_3c = uVar7;
      uStack_42._1_1_ = (byte)((ushort)sVar4 >> 8);
      uStack_42._0_1_ = (undefined1)sVar4;
      sVar3 = (short)local_28;
      local_4c = CONCAT13(uStack_42._1_1_,CONCAT12((undefined1)uStack_42,_local_44));
      uStack_42 = sVar4;
      local_3a = sVar5;
      auStack_48[(uint)bVar15 * -4] = local_40[(uint)bVar15 * -4];
      uStack_42 = uStack_42 + (short)local_24;
      local_40[0] = local_40[0] + (short)local_18;
      _local_44 = _local_44 + sVar3;
    }
    if (uVar12 != 0) {
      return uVar12;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0de008 (Ghidra: FUN_000de008)
 * Prototype: undefined4 sub_0de008(void);
 * Address  : 0xde008 (Size: 77 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x22b3a, 0x7da18, 0xb3afc
 ******************************************************************************/
undefined4 FUN_000de008(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  iVar1 = FUN_00022b3a();
  if (iVar1 == 0) {
    iVar1 = FUN_000b3afc();
    if (iVar1 != 0) {
      return 2;
    }
    uVar2 = FUN_0007da18();
    return uVar2;
  }
  if (iVar1 == extraout_ECX) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0de074 (Ghidra: FUN_000de074)
 * Prototype: uint sub_0de074(void);
 * Address  : 0xde074 (Size: 1541 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x102c0
 * Callees  : 3 -> 0x22b3a, 0x7da18, 0xb3afc
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000de662) */

uint FUN_000de074(void)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  ushort *in_EAX;
  int iVar8;
  int iVar9;
  uint uVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  ushort *in_EDX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  undefined1 local_5c;
  byte bStack_5b;
  undefined2 uStack_5a;
  ushort local_58 [2];
  undefined4 local_54;
  ushort auStack_50 [2];
  undefined1 local_4c;
  byte local_4b;
  undefined2 local_4a;
  ushort auStack_48 [3];
  undefined2 uStack_42;
  ushort auStack_40 [2];
  byte *local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  
  bVar14 = 0;
  iVar8 = (uint)*in_EDX - (uint)*in_EAX;
  local_2c = (uint)in_EDX[1] - (uint)in_EAX[1];
  iVar9 = (*(int *)(in_EDX + 1) >> 0x10) - (*(int *)(in_EAX + 1) >> 0x10);
  uVar13 = 0;
  if ((*(char *)((int)in_EAX + 1) != *(char *)((int)in_EDX + 1)) ||
     (*(char *)((int)in_EAX + 3) != *(char *)((int)in_EDX + 3))) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      local_28 = -0x100;
    }
    else {
      local_28 = 0x100;
    }
    if (local_2c < 0) {
      local_2c = -local_2c;
      local_18 = -0x100;
    }
    else {
      local_18 = 0x100;
    }
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      local_34 = -0x100;
    }
    else {
      local_34 = 0x100;
    }
    iVar9 = iVar9 * local_34;
    local_24 = (byte *)((int)in_EAX + 1);
    local_20 = (byte *)((int)in_EDX + 1);
    if (iVar8 == local_2c) {
      local_34 = iVar9 / iVar8;
      uVar10 = (uint)*local_20;
      uVar11 = (uint)*local_24;
    }
    else if (local_2c < iVar8) {
      local_18 = (local_2c * local_18) / iVar8;
      local_34 = iVar9 / iVar8;
      uVar10 = (uint)*local_20;
      uVar11 = (uint)*local_24;
    }
    else {
      local_28 = (local_28 * iVar8) / local_2c;
      local_34 = iVar9 / local_2c;
      uVar10 = (uint)*(byte *)((int)in_EDX + 3);
      uVar11 = (uint)*(byte *)((int)in_EAX + 3);
    }
    uVar12 = (int)(uVar10 - uVar11) >> 0x1f;
    local_30 = (uVar10 - uVar11 ^ uVar12) - uVar12;
    local_54 = *(undefined4 *)in_EAX;
    auStack_50[0] = in_EAX[2];
    sVar7 = *in_EAX + (short)local_28;
    uStack_5a = in_EAX[1] + (short)local_18;
    local_58[0] = in_EAX[2] + (short)local_34;
    if (local_30 != 0) {
      local_1c = &local_4b;
      local_3c = &local_4b;
      local_14 = &bStack_5b;
      do {
        bStack_5b = (byte)((ushort)sVar7 >> 8);
        local_5c = (undefined1)sVar7;
        iVar8 = FUN_00022b3a();
        if (iVar8 == 0) {
          iVar8 = FUN_000b3afc();
          if (iVar8 == 0) {
            cVar5 = FUN_0007da18();
            sVar1 = uStack_5a;
            sVar2 = local_4a;
          }
          else {
            cVar5 = '\x02';
            sVar1 = uStack_5a;
            sVar2 = local_4a;
          }
        }
        else {
          sVar1 = uStack_5a;
          sVar2 = local_4a;
          if (iVar8 == extraout_ECX) {
            cVar5 = '\0';
          }
          else {
            cVar5 = '\x01';
          }
        }
        uVar4 = auStack_48[2];
        uVar3 = local_4c;
        uStack_5a._1_1_ = (byte)((ushort)sVar1 >> 8);
        uVar13 = uVar13 | (int)cVar5;
        if ((uVar13 & 1) != 0) {
          return 0;
        }
        if (((uint)bStack_5b - (uint)local_54._1_1_ != 0) &&
           ((uint)uStack_5a._1_1_ - (uint)local_54._3_1_ != 0)) {
          local_4c = (undefined1)local_54;
          local_4a._0_1_ = (undefined1)((uint)local_54 >> 0x10);
          auStack_48[2] = (ushort)local_54;
          sVar7 = (short)((uint)local_54 >> 0x10);
          uStack_42._0_1_ = (undefined1)local_4a;
          local_4a._1_1_ = local_54._3_1_;
          uStack_42._1_1_ = local_54._3_1_;
          uStack_5a = sVar1;
          switch(((uint)uStack_5a._1_1_ - (uint)local_54._3_1_) * 2 +
                 ((uint)bStack_5b - (uint)local_54._1_1_)) {
          case 1:
            auStack_48[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            auStack_40[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            auStack_48[2] = auStack_48[2] + -0x100;
            local_4a._1_1_ = local_54._3_1_ + 1;
            local_4b = local_54._1_1_;
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar5 = FUN_0007da18();
              }
              else {
                cVar5 = '\x02';
              }
            }
            else if (iVar8 == extraout_ECX_04) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\x01';
            }
            if (((uVar13 | (int)cVar5) & 1) != 0) {
              return 0;
            }
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar6 = FUN_0007da18();
                sVar1 = uStack_5a;
              }
              else {
                cVar6 = '\x02';
                sVar1 = uStack_5a;
              }
            }
            else {
              sVar1 = uStack_5a;
              if (iVar8 == extraout_ECX_05) {
                cVar6 = '\0';
              }
              else {
                cVar6 = '\x01';
              }
            }
            uVar13 = uVar13 | (int)cVar5 | (int)cVar6;
            uVar3 = local_4c;
            uVar4 = auStack_48[2];
            sVar2 = CONCAT11(local_4a._1_1_,(undefined1)local_4a);
            if ((uVar13 & 1) != 0) {
              return 0;
            }
            break;
          case 3:
            auStack_48[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            auStack_40[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            uStack_42._1_1_ = local_54._3_1_ + 1;
            local_4b = local_54._1_1_ + 1;
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar5 = FUN_0007da18();
              }
              else {
                cVar5 = '\x02';
              }
            }
            else if (iVar8 == extraout_ECX_06) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\x01';
            }
            if (((uVar13 | (int)cVar5) & 1) != 0) {
              return 0;
            }
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar6 = FUN_0007da18();
                sVar1 = uStack_5a;
              }
              else {
                cVar6 = '\x02';
                sVar1 = uStack_5a;
              }
            }
            else {
              sVar1 = uStack_5a;
              if (iVar8 == extraout_ECX_07) {
                cVar6 = '\0';
              }
              else {
                cVar6 = '\x01';
              }
            }
            uVar13 = uVar13 | (int)cVar5 | (int)cVar6;
            uVar3 = local_4c;
            uVar4 = auStack_48[2];
            sVar2 = CONCAT11(local_4a._1_1_,(undefined1)local_4a);
            if ((uVar13 & 1) != 0) {
              return 0;
            }
            break;
          case 0xfffffffd:
            auStack_48[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            auStack_40[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            auStack_48[2] = auStack_48[2] + -0x100;
            local_4b = local_54._1_1_;
            local_4a = sVar7 + -0x100;
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar5 = FUN_0007da18();
              }
              else {
                cVar5 = '\x02';
              }
            }
            else if (iVar8 == extraout_ECX_00) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\x01';
            }
            if (((uVar13 | (int)cVar5) & 1) != 0) {
              return 0;
            }
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar6 = FUN_0007da18();
                sVar1 = uStack_5a;
              }
              else {
                cVar6 = '\x02';
                sVar1 = uStack_5a;
              }
            }
            else {
              sVar1 = uStack_5a;
              if (iVar8 == extraout_ECX_01) {
                cVar6 = '\0';
              }
              else {
                cVar6 = '\x01';
              }
            }
            uVar13 = uVar13 | (int)cVar5 | (int)cVar6;
            uVar3 = local_4c;
            uVar4 = auStack_48[2];
            sVar2 = local_4a;
            if ((uVar13 & 1) != 0) {
              return 0;
            }
            break;
          case 0xffffffff:
            auStack_48[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            auStack_40[(uint)bVar14 * -4] = auStack_50[(uint)bVar14 * -4];
            local_4b = local_54._1_1_ + 1;
            uStack_42 = sVar7 + -0x100;
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar5 = FUN_0007da18();
              }
              else {
                cVar5 = '\x02';
              }
            }
            else if (iVar8 == extraout_ECX_02) {
              cVar5 = '\0';
            }
            else {
              cVar5 = '\x01';
            }
            if (((uVar13 | (int)cVar5) & 1) != 0) {
              return 0;
            }
            iVar8 = FUN_00022b3a();
            if (iVar8 == 0) {
              iVar8 = FUN_000b3afc();
              if (iVar8 == 0) {
                cVar6 = FUN_0007da18();
                sVar1 = uStack_5a;
              }
              else {
                cVar6 = '\x02';
                sVar1 = uStack_5a;
              }
            }
            else {
              sVar1 = uStack_5a;
              if (iVar8 == extraout_ECX_03) {
                cVar6 = '\0';
              }
              else {
                cVar6 = '\x01';
              }
            }
            uVar13 = uVar13 | (int)cVar5 | (int)cVar6;
            uVar3 = local_4c;
            uVar4 = auStack_48[2];
            sVar2 = CONCAT11(local_4a._1_1_,(undefined1)local_4a);
            if ((uVar13 & 1) != 0) {
              return 0;
            }
          }
        }
        auStack_48[2] = uVar4;
        local_4c = uVar3;
        uStack_5a._1_1_ = (byte)((ushort)sVar1 >> 8);
        uStack_5a._0_1_ = (undefined1)sVar1;
        sVar7 = CONCAT11(bStack_5b,local_5c) + (short)local_28;
        local_54 = CONCAT13(uStack_5a._1_1_,
                            CONCAT12((undefined1)uStack_5a,CONCAT11(bStack_5b,local_5c)));
        local_4a = sVar2;
        auStack_50[(uint)bVar14 * -4] = local_58[(uint)bVar14 * -4];
        uStack_5a = sVar1 + (short)local_18;
        local_58[0] = local_58[0] + (short)local_34;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      if (uVar13 != 0) {
        return uVar13;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : dk_go_first_person_without_0de6a8 (Ghidra: FUN_000de6a8)
 * Prototype: undefined8 dk_go_first_person_without_0de6a8(void);
 * Address  : 0xde6a8 (Size: 4090 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:2207 ("Cannot go first person without controlling creature")
 * Naming   : String 'Cannot go first person without controlling creature'
 * Callers  : 1 -> 0x36ff4
 * Callees  : 42 -> 0x21369, 0x23250, 0x24344, 0x275c1, 0x2764f, 0x27892, 0x49f4e, 0x51374, 0x51417, 0x5ba80 ...
 * Strings  :
 *   - 0x16c98c: "update.cpp"
 *   - 0x16c958: "Cannot go first person without controlling creature"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000de6a8(void)

{
  undefined1 uVar1;
  int *piVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  int extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  int extraout_ECX_07;
  ushort extraout_DX;
  ushort extraout_DX_00;
  int iVar12;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int iVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  int *piVar16;
  int iVar17;
  byte bVar18;
  uint auStack_1024 [1012];
  undefined1 auStack_54 [8];
  uint auStack_4c [12];
  uint local_1c;
  
  bVar18 = 0;
  piVar16 = (int *)auStack_54;
  puVar15 = auStack_54;
  if ((DAT_0019d0b8 & 1) == 0) {
    switch((&DAT_0019d0ff)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
    case 1:
    case 2:
    case 5:
      DAT_002e8c09 = 0x1e;
      DAT_002e8c05 = 0x1e;
    }
    FUN_000ac694();
  }
  uVar9 = FUN_0005dc27();
  if (DAT_0019a2a0 == '\0') {
    uVar9 = 1;
    puVar15 = auStack_54;
    if (DAT_002ebaf6 != '\x01') {
      if ((DAT_0019d0b8 & 1) == 0) {
        if (((&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] & 8) != 0) {
          FUN_000627b5();
          (&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] =
               (&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0xf7;
        }
        for (local_1c = 0; (local_1c & 0xffff) <= (uint)DAT_002eb542; local_1c = local_1c + 1) {
          FUN_000e6a10();
          FUN_000e6a10();
          FUN_000e6a10();
        }
        DAT_002ed3dd = 1;
        for (uVar7 = 1; uVar7 < 0x20; uVar7 = uVar7 + 1) {
          if (*(int *)(&DAT_002ed35d + (uint)uVar7 * 4) != 0) {
            DAT_002ed3dd = 0;
          }
        }
        if ((DAT_002e8bee & 1) != 0) {
          DAT_003d97ac = (DAT_003d97ac + 1) % 8;
          iVar12 = DAT_003d97ac * 2;
          iVar13 = 0;
          do {
            piVar16 = (int *)(&DAT_002e78e9 + iVar12);
            iVar10 = iVar13 + 4;
            iVar12 = iVar12 + 0x10;
            *(undefined4 *)((int)&DAT_002f2163 + iVar13) = (&DAT_002f18e3)[*piVar16 >> 0x10];
            iVar13 = iVar10;
          } while (iVar10 != 0xc0);
        }
        FUN_000df760();
        FUN_000c7be4();
        FUN_00023250();
        uVar11 = 1;
        iVar13 = 0;
        iVar12 = 0;
        do {
          if ((((&DAT_0019d0c8)[iVar12] & (byte)uVar11) != 0) && ((&DAT_0019d0f4)[iVar12] == '\x01')
             ) {
            FUN_00066b28();
            uVar11 = extraout_ECX;
            iVar12 = extraout_EDX;
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 0x4ef;
        } while (iVar13 < 5);
        iVar13 = 0;
        iVar12 = 0;
        do {
          if ((((&DAT_0019d0c8)[iVar12] & 1) != 0) && ((&DAT_0019d0f4)[iVar12] == '\x01')) {
            FUN_00076b29();
            iVar12 = extraout_EDX_00;
          }
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 0x4ef;
        } while (iVar13 < 5);
        FUN_0002764f();
        FUN_00027892();
        FUN_0006809c();
        if ((DAT_0019d0b9 & 4) != 0) {
          FUN_00021369();
        }
        pbVar14 = &DAT_0019d0c8;
        iVar12 = 0;
        do {
          if ((*pbVar14 & 1) != 0) {
            FUN_00049f4e();
            iVar12 = extraout_EDX_01;
          }
          iVar12 = iVar12 + 1;
          pbVar14 = pbVar14 + 0x4ef;
        } while (iVar12 < 5);
        pbVar14 = &DAT_0019d0c8;
        iVar12 = 0;
        do {
          if ((((*pbVar14 & 1) != 0) && ((*pbVar14 & 0x40) == 0)) && (pbVar14[0x453] == 0xf)) {
            **(undefined2 **)(pbVar14 + 0x38) =
                 *(undefined2 *)((int)(&DAT_001ae9fc)[*(ushort *)(pbVar14 + 0x2f)] + 0xd);
            *(undefined2 *)(*(int *)(pbVar14 + 0x38) + 2) =
                 *(undefined2 *)((int)(&DAT_001ae9fc)[*(ushort *)(pbVar14 + 0x2f)] + 0xf);
          }
          iVar12 = iVar12 + 1;
          pbVar14 = pbVar14 + 0x4ef;
        } while (iVar12 < 5);
        iVar12 = 0;
        do {
          iVar12 = iVar12 + 1;
        } while (iVar12 < 5);
        pbVar14 = &DAT_0019d0c8;
        do {
          if (((*pbVar14 & 1) != 0) && (pbVar14[0x2c] == 1)) {
            FUN_000e612c();
            FUN_000e612c();
            FUN_00024344();
            if (((DAT_0019d0b6 & 1) != 0) &&
               ((*(int *)(extraout_ECX_00 + 0x4eb) == 0 && (extraout_ECX_00[0x29] != 0)))) {
              *(uint *)(extraout_ECX_00 + 0x4eb) = DAT_002e8bee + 1;
            }
            pbVar14 = extraout_ECX_00;
            if (*(uint *)(extraout_ECX_00 + 0x4eb) == DAT_002e8bee) {
              iVar12 = CONCAT31((uint3)(*(uint *)(extraout_ECX_00 + 0x4eb) >> 8) ^
                                (uint3)(DAT_002e8bee >> 8),extraout_ECX_00[0x29]);
              if (iVar12 == 1) {
                if (extraout_ECX_00 == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
                  FUN_0005bcc1();
                }
                FUN_0005ba80();
                pbVar14 = extraout_ECX_01;
              }
              else if (iVar12 == 2) {
                if (extraout_ECX_00 == &DAT_0019d0c8 + (DAT_002f10ce >> 0x18) * 0x4ef) {
                  FUN_0005bcc1();
                }
                FUN_0005ba80();
                pbVar14 = extraout_ECX_02;
              }
            }
          }
          pbVar14 = pbVar14 + 0x4ef;
        } while (pbVar14 <= &DAT_0019e484);
        FUN_00069a90();
        piVar16 = (int *)auStack_54;
        if ((&DAT_0019d0ff)[(DAT_002f10ce >> 0x18) * 0x4ef] == '\x01') {
          auStack_4c[4] = DAT_001927d4;
          auStack_4c[(uint)bVar18 * -2 + 5] = (&DAT_001927d8)[(uint)bVar18 * -2];
          auStack_4c[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 6] =
               (&DAT_001927dc)[(uint)bVar18 * -2 + (uint)bVar18 * -2];
          piVar16 = (int *)auStack_54;
          if (DAT_003d97b0 != 0) {
            FUN_000e6a10();
            pbVar14 = (&DAT_001ae9fc)[DAT_002e6ec6];
            if (DAT_001ae9fc < pbVar14) {
              do {
                if (((&DAT_0018b916)[(uint)pbVar14[0x1a] * 0x16] != '\0') &&
                   (iVar12 = FUN_000dc440(), pbVar14 = extraout_ECX_03, iVar12 < (int)auStack_4c[4])
                   ) {
                  iVar13 = 8;
                  do {
                    *(undefined4 *)((int)auStack_4c + iVar13 + 4) =
                         *(undefined4 *)((int)auStack_4c + iVar13);
                    *(undefined4 *)((int)auStack_4c + iVar13 + 0x10) =
                         *(undefined4 *)((int)auStack_4c + iVar13 + 0xc);
                    iVar13 = iVar13 + -4;
                  } while (iVar13 != 0);
                  auStack_4c[1] = (uint)*(ushort *)(extraout_ECX_03 + 0x1b);
                  auStack_4c[4] = iVar12;
                }
                pbVar14 = (&DAT_001ae9fc)[*(ushort *)(pbVar14 + 0x67)];
              } while (DAT_001ae9fc < pbVar14);
            }
            iVar12 = 0;
            puVar15 = auStack_54;
            do {
              piVar16 = (int *)puVar15;
              if (*(int *)(puVar15 + iVar12 + 0xc) == 0) break;
              if (*(char *)((int)(&DAT_001ae9fc)[*(int *)(puVar15 + iVar12 + 0xc)] + 0x66) == '\0')
              {
LAB_000dec53:
                *(undefined4 *)(puVar15 + -4) = 0x100;
                *(undefined4 *)(puVar15 + -8) = 2;
                *(undefined4 *)(puVar15 + -0xc) = 1;
                piVar16 = (int *)(puVar15 + -0x10);
                *(undefined4 *)(puVar15 + -0x10) = 3;
                *(undefined4 *)(puVar15 + -0x14) = 0xdec71;
                FUN_0006e538();
              }
              else {
                *(undefined4 *)(puVar15 + -4) = 0xdec4f;
                iVar13 = FUN_0006f865();
                if (iVar13 == 0) goto LAB_000dec53;
              }
              iVar12 = iVar12 + 4;
              puVar15 = (undefined1 *)piVar16;
            } while (iVar12 < 0xc);
          }
          DAT_003d97b0 = (byte)((DAT_003d97b0 + 1) % 4);
        }
        *piVar16 = DAT_001927c8;
        piVar16[(uint)bVar18 * -2 + 1] = (&DAT_001927cc)[(uint)bVar18 * -2];
        (piVar16 + (uint)bVar18 * -2 + 1)[(uint)bVar18 * -2 + 1] =
             (&DAT_001927d0)[(uint)bVar18 * -2 + (uint)bVar18 * -2];
        piVar2 = *(int **)((int)&DAT_0019d100 + (DAT_002f10ce >> 0x18) * 0x4ef);
        piVar16[9] = *piVar2;
        *(short *)(piVar16 + (uint)bVar18 * -2 + 10) = (short)piVar2[(uint)bVar18 * -2 + 1];
        if (DAT_003d97b4 == 0) {
          piVar16[-1] = 0xdecda;
          FUN_000e6a10();
          pbVar14 = (&DAT_001ae9fc)[DAT_002e6eb6];
          if (pbVar14 != DAT_001ae9fc) {
            do {
              bVar18 = pbVar14[1];
              pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar14 + 0x67)];
              pbVar14[1] = bVar18 & 0xdf;
              if ((((*pbVar14 & 0x10) == 0) && ((bVar18 & 2) == 0)) &&
                 (*(int *)(&DAT_001880f4 + (uint)pbVar14[0x1a] * 0x58) != 0)) {
                iVar12 = (&DAT_001b0a00)[*(ushort *)(pbVar14 + 100)];
                piVar16[-1] = 0xded4d;
                iVar13 = FUN_000dc440();
                if ((iVar13 < *piVar16) &&
                   (((*(short *)(iVar12 + 9) != 0 &&
                     (*(int *)(extraout_ECX_04 + 0xf) >> 0x10 <=
                      (int)(uint)*(ushort *)(extraout_ECX_04 + 0x60))) ||
                    ((*(byte *)(extraout_ECX_04 + 0x25) & 0x20) != 0)))) {
                  iVar12 = 8;
                  do {
                    *(undefined4 *)((int)&DAT_003d97b8 + iVar12) =
                         *(undefined4 *)((int)&DAT_003d97b4 + iVar12);
                    *(undefined4 *)((int)piVar16 + iVar12) =
                         *(undefined4 *)((int)piVar16 + iVar12 + -4);
                    iVar12 = iVar12 + -4;
                  } while (iVar12 != 0);
                  DAT_003d97b8 = (uint)*(ushort *)(extraout_ECX_04 + 0x1b);
                  *piVar16 = iVar13;
                }
              }
              pbVar14 = pbVar3;
            } while (pbVar3 != DAT_001ae9fc);
          }
        }
        iVar12 = 0;
        do {
          if (*(int *)((int)&DAT_003d97b8 + iVar12) == 0) break;
          if (*(char *)((int)(&DAT_001ae9fc)[*(int *)((int)&DAT_003d97b8 + iVar12)] + 0x1f) ==
              '\x05') {
            pbVar14 = (byte *)((int)(&DAT_001ae9fc)[*(int *)((int)&DAT_003d97b8 + iVar12)] + 1);
            *pbVar14 = *pbVar14 | 0x20;
            piVar16[-1] = 0xdedcf;
            FUN_0006e61e();
          }
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xc);
        if ((DAT_003d97b4 == 0) &&
           (pbVar14 = (&DAT_001ae9fc)[DAT_002e6eb6], pbVar14 != DAT_001ae9fc)) {
          do {
            pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar14 + 0x67)];
            if ((pbVar14[0x1a] == 0x13) && (-1 < (char)(pbVar14[1] << 2))) {
              piVar16[-1] = 0xdee37;
              iVar12 = FUN_0006f865();
              if (iVar12 != 0) {
                piVar16[-1] = 0xdee49;
                FUN_0006f72b();
              }
            }
            pbVar14 = pbVar3;
          } while (pbVar3 != DAT_001ae9fc);
        }
        DAT_003d97b4 = (DAT_003d97b4 + 1) % 4;
        piVar16[-1] = 0xdee85;
        FUN_00062578();
        if (DAT_002ed402 != 0) {
          if ((DAT_002e8bee < (uint)(DAT_002ed402 + DAT_002ee894)) &&
             ((((&DAT_0019d0f1)[(ram0x002ed407 >> 0x18) * 0x4ef] == '\x02' ||
               ((&DAT_002e0589)[(ram0x002ed407 >> 0x18) * 0xa84] == 0)) ||
              (*(char *)((int)(&DAT_001ae9fc)
                              [(ushort)(&DAT_002e0589)[(ram0x002ed407 >> 0x18) * 0xa84]] + 7) ==
               '\x03')))) {
            DAT_002ed402 = 0;
          }
          if (DAT_002ed402 + DAT_002ee894 == DAT_002e8bee) {
            uVar11 = 1;
            iVar12 = 0;
            do {
              if ((((&DAT_0019d0c8)[iVar12] & (byte)uVar11) != 0) &&
                 ((&DAT_0019d0f4)[iVar12] == '\x01')) {
                piVar16[-1] = 0xdef4a;
                FUN_00070c0c();
                uVar11 = extraout_EDX_02;
              }
              iVar12 = iVar12 + 0x4ef;
            } while (iVar12 != 0x18ab);
          }
          if ((uint)(DAT_002ed402 + DAT_002ee894) < DAT_002e8bee) {
            uVar9 = 0;
            iVar12 = 0;
            iVar13 = 0;
            do {
              if (((((&DAT_0019d0c8)[iVar12] & 1) != 0) && ((&DAT_0019d0f4)[iVar12] == '\x01')) &&
                 (((&DAT_0019d0f1)[iVar12] == '\0' && ((&DAT_002e0ea2)[iVar13] == '\0')))) {
                piVar16[-1] = 0xdefbf;
                FUN_000275c1();
                piVar16[-1] = 0xdefc7;
                FUN_000dd6c8();
                uVar9 = extraout_ECX_05;
                uVar7 = extraout_DX;
                if (extraout_ECX_05 == (byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
                  piVar16[-1] = DAT_00199210;
                  piVar16[-2] = 0xdeff0;
                  FUN_000e846c();
                  uVar9 = extraout_ECX_06;
                  uVar7 = extraout_DX_00;
                }
                if (uVar7 != *(ushort *)((int)&DAT_002e0589 + iVar13)) {
                  *(undefined2 *)
                   ((int)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_002e0589 + iVar13)] + 0x5e) = 0xffff;
                }
              }
              iVar12 = iVar12 + 0x4ef;
              uVar9 = uVar9 + 1;
              iVar13 = iVar13 + 0x1508;
            } while ((int)uVar9 < 5);
          }
        }
      }
      *(undefined4 *)((int)piVar16 + -4) = 0xdf021;
      FUN_0008ed2c();
      *(undefined4 *)((int)piVar16 + 0x34) = 0;
      do {
        iVar12 = *(int *)((int)piVar16 + 0x34);
        if ((((&DAT_0019d0c8)[iVar12] & 1) != 0) && (((&DAT_0019d0c8)[iVar12] & 0x40) == 0)) {
          *(undefined4 *)((int)piVar16 + -4) = 0xdf0bf;
          FUN_00077b8d();
          puVar4 = *(undefined2 **)((int)&DAT_0019d100 + iVar12);
          uVar1 = *(undefined1 *)(puVar4 + 3);
          *(undefined4 *)((int)piVar16 + 0x30) = extraout_EDX_03;
          switch(uVar1) {
          case 1:
            if (*(ushort *)((int)&DAT_0019d0f7 + iVar12) == 0) {
              if ((&DAT_0019d578)[iVar12] != '\v') {
                *(undefined4 *)((int)piVar16 + -4) = 0xdf4e3;
                FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2207, "Cannot go first person without controlling creature") */
              }
            }
            else {
              iVar12 = (int)(&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar12)];
              *(undefined **)((int)piVar16 + 0x2c) =
                   &DAT_002e910d + (uint)*(byte *)(iVar12 + 0x1a) * 0xe6;
              *(undefined4 *)((int)piVar16 + -4) = 0xdf130;
              cVar6 = FUN_00081dd8();
              if (*(char *)(iVar12 + 0x1f) == '\x05') {
                iVar13 = (&DAT_001b0a00)[*(ushort *)(iVar12 + 100)];
                if ((*(int *)(iVar13 + 0xc6) >> 0x10 == 0) ||
                   ((int)(uint)*(ushort *)(iVar12 + 0x60) < *(int *)(iVar12 + 0xf) >> 0x10)) {
                  *(undefined1 *)(iVar13 + 0x1e9) = 0;
                }
                else {
                  *(char *)(iVar13 + 0x1e9) = cVar6 << 4;
                }
                iVar17 = (uint)*(ushort *)(iVar12 + 0xd) +
                         ((&DAT_001927e0)[*(ushort *)(iVar12 + 0x52)] * -0x5a >> 0x10);
                iVar10 = (uint)*(ushort *)(iVar12 + 0xf) +
                         (-((int)(&PTR_LAB_00192fe0)[*(ushort *)(iVar12 + 0x52)] * -0x5a >> 8) >> 8)
                ;
                if (iVar17 < 0) {
                  iVar17 = 0;
                }
                else if (0xffff < iVar17) {
                  iVar17 = 0xffff;
                }
                if (iVar10 < 0) {
                  iVar10 = 0;
                }
                else if (0xffff < iVar10) {
                  iVar10 = 0xffff;
                }
                if ((*(byte *)(iVar12 + 0x25) & 0x20) == 0) {
                  *puVar4 = (short)iVar17;
                  puVar4[1] = (short)iVar10;
                  *(uint *)((int)puVar4 + 7) = (uint)*(ushort *)(iVar12 + 0x52);
                  uVar7 = *(ushort *)(iVar12 + 0x54);
                  *(undefined4 *)((int)puVar4 + 0xf) = 0;
                  *(uint *)((int)puVar4 + 0xb) = (uint)uVar7;
                  iVar10 = *(int *)(iVar12 + 0xf) >> 0x10;
                  uVar9 = (uint)*(ushort *)(*(int *)((int)piVar16 + 0x2c) + 0x55);
                  iVar17 = *(int *)(puVar4 + 1) >> 0x10;
                  sVar8 = (short)((uint)*(int *)(puVar4 + 1) >> 0x10);
                  if (iVar17 < (int)(iVar10 + uVar9)) {
                    puVar4[2] = (short)((int)((iVar10 + (*(int *)(iVar13 + 0x1e6) >> 0x18) + uVar9)
                                             - iVar17) / 2) + sVar8;
                    iVar10 = *(int *)((int)piVar16 + 0x2c);
                    if ((int)((uint)*(ushort *)(iVar10 + 0x55) +
                             (*(int *)(iVar12 + 0xf) >> 0x10) + (*(int *)(iVar13 + 0x1e6) >> 0x18))
                        < *(int *)(puVar4 + 1) >> 0x10) {
LAB_000df2e9:
                      puVar4[2] = *(short *)(iVar12 + 0x11) + (short)*(char *)(iVar13 + 0x1e9) +
                                  *(short *)(iVar10 + 0x55);
                    }
                  }
                  else {
                    puVar4[2] = (short)((int)((iVar10 + (*(int *)(iVar13 + 0x1e6) >> 0x18) + uVar9)
                                             - iVar17) / 2) + sVar8;
                    iVar10 = *(int *)((int)piVar16 + 0x2c);
                    if (*(int *)(puVar4 + 1) >> 0x10 <
                        (int)((*(int *)(iVar12 + 0xf) >> 0x10) + (*(int *)(iVar13 + 0x1e6) >> 0x18)
                             + (uint)*(ushort *)(iVar10 + 0x55))) goto LAB_000df2e9;
                  }
                }
                else {
                  *puVar4 = (short)iVar17;
                  puVar4[1] = (short)iVar10;
                  puVar4[2] = *(undefined2 *)(iVar12 + 0x11);
                  puVar4[2] = puVar4[2] + *(short *)(*(int *)((int)piVar16 + 0x2c) + 0x55);
                  *(uint *)((int)puVar4 + 7) = (uint)*(ushort *)(iVar12 + 0x52);
                  *(uint *)((int)puVar4 + 0xb) = (uint)*(ushort *)(iVar12 + 0x54);
                  *(int *)((int)puVar4 + 0xf) = *(int *)(iVar13 + 0xca) >> 0x10;
                }
                iVar12 = (uint)*(byte *)(iVar12 + 0xe) + (uint)*(byte *)(iVar12 + 0x10) * 0x100;
                iVar12 = (int)(((*(uint *)((int)&DAT_00279203 + iVar12 * 5 + 1) & 0xfffffff) >> 0x18
                               ) * 0x100 +
                               ((*(uint *)((int)&DAT_00279203 + (iVar12 + 1) * 5 + 1) & 0xfffffff)
                               >> 0x18) * 0x100 +
                               ((*(uint *)((int)&DAT_00279203 + (iVar12 + 0x100) * 5 + 1) &
                                0xfffffff) >> 0x18) * 0x100 +
                              ((*(uint *)((int)&DAT_00279203 + (iVar12 + 0x101) * 5 + 1) & 0xfffffff
                               ) >> 0x18) * 0x100) >> 2;
                if (iVar12 + -0x40 < *(int *)(puVar4 + 1) >> 0x10) {
                  puVar4[2] = (short)iVar12 + -0x40;
                }
              }
              else if (*(char *)(iVar12 + 0x1a) == '\n') {
                *puVar4 = *(undefined2 *)(iVar12 + 0xd);
                puVar4[1] = *(undefined2 *)(iVar12 + 0xf);
                puVar4[2] = *(short *)(iVar12 + 0x11) + 0xf0;
                *(uint *)((int)puVar4 + 7) = (uint)*(ushort *)(iVar12 + 0x52);
                uVar7 = *(ushort *)(iVar12 + 0x54);
                *(undefined4 *)((int)puVar4 + 0xf) = 0;
                *(uint *)((int)puVar4 + 0xb) = (uint)uVar7;
                iVar13 = *(int *)(iVar12 + 0x13) >> 0x18;
                *(undefined2 *)(iVar12 + 0x54) = 0;
                if (iVar13 != 0) {
                  cVar6 = (char)((uint)*(int *)(iVar12 + 0x13) >> 0x18);
                  if (iVar13 < 4) {
                    *(short *)(iVar12 + 0x54) = cVar6 * -0x74 + 0x800;
                  }
                  else {
                    *(short *)(iVar12 + 0x54) = (cVar6 + -3) * 0x74 + 0x6a4;
                  }
                }
              }
              else {
                *puVar4 = *(undefined2 *)(iVar12 + 0xd);
                puVar4[1] = *(undefined2 *)(iVar12 + 0xf);
                *(uint *)((int)puVar4 + 7) = (uint)*(ushort *)(iVar12 + 0x52);
                uVar7 = *(ushort *)(iVar12 + 0x54);
                *(undefined4 *)((int)puVar4 + 0xf) = 0;
                *(uint *)((int)puVar4 + 0xb) = (uint)uVar7;
                iVar13 = *(int *)(iVar12 + 0xf) >> 0x10;
                iVar10 = *(int *)(puVar4 + 1) >> 0x10;
                sVar8 = (short)(((iVar13 + 0x40) - iVar10) / 2) +
                        (short)((uint)*(int *)(puVar4 + 1) >> 0x10);
                if (iVar10 < iVar13 + 0x20) {
                  puVar4[2] = sVar8;
                  if ((*(int *)(iVar12 + 0xf) >> 0x10) + 0x40 < *(int *)(puVar4 + 1) >> 0x10) {
                    puVar4[2] = *(short *)(iVar12 + 0x11) + 0x40;
                  }
                }
                else {
                  puVar4[2] = sVar8;
                  if (*(int *)(puVar4 + 1) >> 0x10 < (*(int *)(iVar12 + 0xf) >> 0x10) + 0x40) {
                    puVar4[2] = *(short *)(iVar12 + 0x11) + 0x40;
                  }
                }
              }
            }
            break;
          case 2:
            *(undefined2 *)(&DAT_0019d182 + iVar12) = *puVar4;
            *(undefined2 *)(&DAT_0019d184 + iVar12) =
                 *(undefined2 *)(*(int *)((int)&DAT_0019d100 + iVar12) + 2);
            break;
          case 5:
            *(undefined2 *)(&DAT_0019d104 + iVar12) = *puVar4;
            *(undefined2 *)(&DAT_0019d106 + iVar12) =
                 *(undefined2 *)(*(int *)((int)&DAT_0019d100 + iVar12) + 2);
          }
          iVar12 = *(int *)(*(int *)((int)piVar16 + 0x30) + 0xea0);
          if (iVar12 != 0) {
            *(int *)(*(int *)((int)piVar16 + 0x30) + 0xea0) = iVar12 + -1;
          }
          iVar12 = *(int *)(*(int *)((int)piVar16 + 0x30) + 0xea4);
          if (0 < iVar12) {
            *(int *)(*(int *)((int)piVar16 + 0x30) + 0xea4) = iVar12 + -0x20;
          }
        }
        iVar12 = *(int *)((int)piVar16 + 0x34);
        *(int *)((int)piVar16 + 0x34) = iVar12 + 0x4ef;
      } while (iVar12 + 0x4ef != 0x18ab);
      if ((DAT_0019d0b8 & 1) == 0) {
        *(undefined4 *)((int)piVar16 + -4) = 0xdf4fa;
        FUN_00051417();
        if (DAT_00334019 == 0) {
          if (((DAT_0019d0bd & 0x10) == 0) && (DAT_0019d0bf != '\0')) {
            *(undefined4 *)((int)piVar16 + -4) = 0xdf521;
            FUN_000ecabc();
          }
          *(undefined4 *)((int)piVar16 + -4) = 0xdf54e;
          FUN_0006f816();
          *(undefined4 *)((int)piVar16 + -4) = 0xdf570;
          FUN_0006f82f();
        }
        DAT_002e8bee = DAT_002e8bee + 1;
      }
      *(undefined4 *)((int)piVar16 + -4) = 0xdf57b;
      FUN_000670b2();
      *(undefined4 *)((int)piVar16 + -4) = 0xdf580;
      FUN_0006f98e();
      iVar12 = (int)(DAT_002ee88e - DAT_002e8bee) / 2;
      *(undefined4 *)((int)piVar16 + -4) = 0xdf5a7;
      uVar9 = FUN_00070bf9();
      if ((uVar9 != 0) &&
         ((extraout_ECX_07 == 0 ||
          ((0 < extraout_ECX_07 &&
           ((((iVar12 < 0x65 && (iVar12 % 10 == 0)) || ((iVar12 < 0x12d && (iVar12 % 0x32 == 0))))
            || (uVar9 = iVar12 / 0xfa, iVar12 % 0xfa == 0)))))))) {
        *(undefined4 *)((int)piVar16 + -4) = 0xdf5fe;
        uVar9 = FUN_0006e9ab();
      }
      puVar15 = (undefined1 *)piVar16;
      if (DAT_002e8bee != 0) {
        uVar9 = DAT_002e8bee / 20000;
        if ((int)((ulonglong)DAT_002e8bee % 20000) == 0) {
          uVar9 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = uVar9 >> 0xd | uVar9 * 0x80000;
          uVar5 = (ulonglong)DAT_002e8bee % 20000 << 0x20 | (ulonglong)DAT_002e8bf6;
          uVar9 = (uint)(uVar5 / 2000);
          if ((int)(uVar5 % 2000) == 0) {
            uVar9 = DAT_002e8bfa * 0x24a1 + 0x24df;
            DAT_002e8bfa = uVar9 >> 0xd | uVar9 * 0x80000;
            *(undefined4 *)((int)piVar16 + -4) = 0xdf690;
            uVar9 = FUN_00051374();
          }
        }
      }
    }
    DAT_002ebaf7 = 0;
  }
  return CONCAT44(*(undefined4 *)(puVar15 + 0x48),uVar9);
}

/******************************************************************************
 * Function : sub_0df760 (Ghidra: FUN_000df760)
 * Prototype: void sub_0df760(void);
 * Address  : 0xdf760 (Size: 2606 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 19 -> 0x24998, 0x444a9, 0x44dae, 0x4ef8a, 0x50349, 0x64a2e, 0x6f671, 0x6f69c, 0x6f6b8, 0x72af4 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000df760(void)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int extraout_ECX;
  int iVar9;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  byte *pbVar10;
  uint uVar11;
  ushort *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined8 uVar15;
  undefined4 auStack_5c [3];
  undefined1 local_50 [24];
  int local_38;
  
  puVar12 = (ushort *)local_50;
  puVar13 = local_50;
  local_38 = 0;
  _DAT_003d97c4 = 0;
  _DAT_003d97c8 = 0;
  DAT_003d97cc = DAT_001e31f9;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6eb6];
  if ((&DAT_001ae9fc)[DAT_002e6eb6] != DAT_001ae9fc) {
    do {
      pbVar8 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((*pbVar10 & 0x40) == 0) {
        if ((*pbVar10 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      FUN_00073fb9();
      pbVar10 = pbVar8;
    } while (pbVar8 != DAT_001ae9fc);
  }
  FUN_000e01f4();
  local_38 = local_38 + extraout_ECX;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6eee];
  iVar9 = 0;
  if (pbVar10 != DAT_001ae9fc) {
    do {
      bVar2 = *pbVar10;
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((bVar2 & 0x40) == 0) {
        if ((bVar2 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      iVar9 = FUN_00073fb9();
      iVar9 = extraout_ECX_00 + iVar9;
    } while (pbVar10 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ebe];
  iVar9 = 0;
  if (pbVar10 != DAT_001ae9fc) {
    do {
      bVar2 = *pbVar10;
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((bVar2 & 0x40) == 0) {
        if ((bVar2 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      iVar9 = FUN_00073fb9();
      iVar9 = extraout_ECX_01 + iVar9;
    } while (pbVar10 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  iVar9 = 0;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ec6];
  if ((&DAT_001ae9fc)[DAT_002e6ec6] != DAT_001ae9fc) {
    do {
      pbVar8 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((*pbVar10 & 0x40) == 0) {
        if ((*pbVar10 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      iVar9 = FUN_00073fb9();
      iVar9 = extraout_ECX_02 + iVar9;
      pbVar10 = pbVar8;
    } while (pbVar8 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ede];
  iVar9 = 0;
  if (pbVar10 != DAT_001ae9fc) {
    do {
      bVar2 = *pbVar10;
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((bVar2 & 0x40) == 0) {
        if ((bVar2 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      iVar9 = FUN_00073fb9();
      iVar9 = extraout_ECX_03 + iVar9;
    } while (pbVar10 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ece];
  if (pbVar10 != DAT_001ae9fc) {
    do {
      bVar2 = *pbVar10;
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((bVar2 & 0x40) == 0) {
        if ((bVar2 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      FUN_00073fb9();
    } while (pbVar10 != DAT_001ae9fc);
  }
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ed6];
  iVar9 = 0;
  if (pbVar10 != DAT_001ae9fc) {
    do {
      bVar2 = *pbVar10;
      pbVar10 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((bVar2 & 0x40) == 0) {
        if ((bVar2 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      iVar9 = FUN_00073fb9();
      iVar9 = extraout_ECX_04 + iVar9;
    } while (pbVar10 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  iVar9 = 0;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ee6];
  if ((&DAT_001ae9fc)[DAT_002e6ee6] != DAT_001ae9fc) {
    do {
      pbVar8 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if ((*pbVar10 & 0x40) == 0) {
        if ((*pbVar10 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      iVar9 = FUN_00073fb9();
      iVar9 = extraout_ECX_05 + iVar9;
      pbVar10 = pbVar8;
    } while (pbVar8 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6ef6];
  iVar9 = 0;
  if (pbVar10 != DAT_001ae9fc) {
    do {
      if ((*pbVar10 & 0x40) == 0) {
        if ((*pbVar10 & 0x10) == 0) {
          FUN_000e0880();
        }
        else {
          FUN_000e413c();
        }
      }
      uVar15 = FUN_00073fb9();
      pbVar10 = (byte *)((ulonglong)uVar15 >> 0x20);
      iVar9 = extraout_ECX_06 + (int)uVar15;
    } while (pbVar10 != DAT_001ae9fc);
  }
  local_38 = local_38 + iVar9;
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6efe];
  if ((&DAT_001ae9fc)[DAT_002e6efe] != DAT_001ae9fc) {
    do {
      pbVar8 = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      if (pbVar10[0x66] != 0) {
        iVar9 = FUN_0006f6b8();
        if (iVar9 == 0) {
          FUN_0006f69c();
        }
        else {
          FUN_0006f671();
          pbVar10[0x66] = 0;
        }
      }
      pbVar10 = pbVar8;
    } while (pbVar8 != DAT_001ae9fc);
  }
  pbVar10 = (&DAT_001ae9fc)[DAT_002e6f06];
  if (pbVar10 != DAT_001ae9fc) {
    do {
      *(byte **)(puVar12 + 10) = (&DAT_001ae9fc)[*(ushort *)(pbVar10 + 0x67)];
      iVar9 = _DAT_002eb049 / 5;
      pbVar10[0x4f] = pbVar10[0x4f] | 1;
      *(short *)(pbVar10 + 0x5e) = *(short *)(pbVar10 + 0x5e) + -1;
      *(byte *)(puVar12 + 0x1a) = pbVar10[6];
      if (*(int *)(pbVar10 + 0x5c) >> 0x10 < 1) {
        puVar12[-0xffffffff00000002] = -0x420;
        puVar12[-0xffffffff00000001] = 0xd;
        FUN_00072af4();
      }
      else {
        if (DAT_002e8bee % 3 == 0) {
          uVar5 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar5 = uVar5 >> 0xd | uVar5 * 0x80000;
          uVar11 = uVar5 % 9;
          puVar12[0x18] = 0x2c0;
          puVar12[0x19] = 0;
          uVar5 = uVar5 * 0x24a1 + 0x24df;
          uVar5 = uVar5 >> 0xd | uVar5 * 0x80000;
          *(uint *)(puVar12 + 0x18) =
               (*(int *)((int)&DAT_0018b647 + uVar11 * 2) >> 0x18) *
               (uVar5 % *(uint *)(puVar12 + 0x18));
          *puVar12 = *(short *)(pbVar10 + 0xd) + (short)*(undefined4 *)(puVar12 + 0x18);
          uVar5 = uVar5 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = uVar5 >> 0xd | uVar5 * 0x80000;
          puVar12[1] = (short)(char)((uint)*(undefined4 *)((int)&DAT_0018b647 + uVar11 * 2 + 1) >>
                                    0x18) * (short)((ulonglong)DAT_002e8bf6 % 0x2c0) +
                       *(short *)(pbVar10 + 0xf);
          puVar12[-0xffffffff00000002] = -0x314;
          puVar12[-0xffffffff00000001] = 0xd;
          sVar3 = FUN_000b2440();
          puVar12[2] = sVar3 + -0x80;
          puVar12[-0xffffffff00000002] = -0x2fc;
          puVar12[-0xffffffff00000001] = 0xd;
          iVar6 = FUN_000444a9();
          if (iVar6 != 0) {
            *(undefined2 *)(iVar6 + 0x5e) = DAT_002eb049;
          }
        }
        uVar5 = DAT_002e8bee - *(int *)(pbVar10 + 9);
        if ((uVar5 != 0) &&
           ((int)uVar5 % iVar9 ==
            ((int)((iVar9 + (iVar9 >> 0x1f) * -4) - (uint)((iVar9 >> 0x1f) << 1 < 0)) >> 2) * 3)) {
          *puVar12 = *(short *)(pbVar10 + 0xd) + 0x80;
          puVar12[1] = *(short *)(pbVar10 + 0xf) + 0x80;
          puVar12[-0xffffffff00000002] = -0x29a;
          puVar12[-0xffffffff00000001] = 0xd;
          sVar3 = FUN_000b3788();
          puVar12[2] = sVar3 + 0x180;
          puVar12[-0xffffffff00000002] = -0x285;
          puVar12[-0xffffffff00000001] = 0xd;
          FUN_00024998();
        }
        if (uVar5 % DAT_002ed41c == 0) {
          bVar2 = pbVar10[0x10];
          puVar12[0xe] = 0;
          puVar12[0xf] = 0;
          *(uint *)(puVar12 + 0x16) = bVar2 - 1;
          do {
            bVar2 = pbVar10[0xe];
            *(uint *)((int)puVar12 + 0x20) = bVar2 - 1;
            *(undefined4 *)((int)puVar12 + 0x24) = 0;
            *(uint *)((int)puVar12 + 0x28) = (bVar2 - 1) * 5 + *(int *)((int)puVar12 + 0x2c) * 0x500
            ;
            do {
              pbVar8 = (&DAT_001ae9fc)
                       [(*(uint *)((int)&DAT_00279203 + *(int *)((int)puVar12 + 0x28) + 1) &
                        0x3fffff) >> 0xb];
              if (DAT_001ae9fc < pbVar8) {
                iVar9 = *(int *)((int)puVar12 + 0x28);
                do {
                  if (pbVar8[0x1f] == 5) {
                    *(undefined4 *)((int)puVar12 + -4) = 0xdfe99;
                    FUN_00081c10();
                    if (*(int *)(pbVar8 + 0x5c) >> 0x10 < 0) {
                      *(undefined4 *)((int)puVar12 + -4) = 0;
                      *(undefined4 *)((int)puVar12 + -8) = 1;
                      *(undefined4 *)((int)puVar12 + -0xc) = 0xdfebf;
                      FUN_0008608c();
                      pbVar8 = (&DAT_001ae9fc)
                               [(*(uint *)((int)&DAT_00279203 + iVar9 + 1) & 0x3fffff) >> 0xb];
                      puVar12 = (ushort *)((int)puVar12 + -8);
                    }
                    else if ((*pbVar8 & 0x20) == 0) {
                      bVar2 = pbVar8[7];
                      if (bVar2 == 0xe) {
                        bVar2 = pbVar8[8];
                      }
                      if (bVar2 != 0x8f) {
                        *(undefined4 *)((int)puVar12 + -4) = 0xdfe07;
                        iVar6 = FUN_00064a2e();
                        if (iVar6 != 0) {
                          *(undefined4 *)((int)puVar12 + -4) = 0xdfe12;
                          iVar6 = FUN_00050349();
                          if (iVar6 != 0) {
                            pbVar8[8] = 0x8f;
                          }
                        }
                      }
                    }
                  }
                  pbVar8 = (&DAT_001ae9fc)[*(ushort *)(pbVar8 + 2)];
                } while (DAT_001ae9fc < pbVar8);
              }
              iVar9 = *(int *)((int)puVar12 + 0x24);
              *(int *)((int)puVar12 + 0x24) = iVar9 + 1;
              *(int *)((int)puVar12 + 0x28) = *(int *)((int)puVar12 + 0x28) + 5;
              *(int *)((int)puVar12 + 0x20) = *(int *)((int)puVar12 + 0x20) + 1;
            } while (iVar9 + 1 < 3);
            iVar9 = *(int *)((int)puVar12 + 0x1c);
            *(int *)((int)puVar12 + 0x1c) = iVar9 + 1;
            *(int *)((int)puVar12 + 0x2c) = *(int *)((int)puVar12 + 0x2c) + 1;
          } while (iVar9 + 1 < 3);
        }
        iVar9 = *(int *)(pbVar10 + 0x5c) >> 0x10;
        if (((iVar9 <= (_DAT_002eb049 << 3) / 10) && ((_DAT_002eb049 * 2) / 10 <= iVar9)) &&
           (lVar1 = (longlong)iVar9 % (longlong)(_DAT_002eb049 / 10), (int)lVar1 == 0)) {
          uVar5 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = uVar5 >> 0xd | uVar5 * 0x80000;
          iVar9 = (int)((lVar1 << 0x20 | (ulonglong)DAT_002e8bf6) % 9) * 2;
          iVar6 = *(int *)((int)&DAT_0018b647 + iVar9 + 1);
          *puVar12 = *(short *)(&DAT_0019033b +
                               (*(int *)((int)&DAT_0018b647 + iVar9) >> 0x18) * 3 +
                               (uint)pbVar10[0xe]) * 3 + 1;
          sVar3 = *(short *)(&DAT_0019033b + (iVar6 >> 0x18) * 3 + (uint)pbVar10[0x10]);
          puVar12[2] = 0;
          uVar4 = sVar3 * 3 + 1;
          puVar12[1] = uVar4;
          if ((*puVar12 < 0xff) && (uVar4 < 0xff)) {
            puVar12[-0xffffffff00000002] = 0xfff1;
            puVar12[-0xffffffff00000001] = 0xd;
            iVar9 = FUN_0004ef8a();
            if (iVar9 != 0) {
              uVar5 = (*(uint *)((int)&DAT_00279203 +
                                ((uint)*puVar12 + (uint)puVar12[1] * 0x100) * 5 + 1) & 0x3fffff) >>
                      0xb;
              while ((uVar5 != 0 && (*(char *)((int)(&DAT_001ae9fc)[uVar5] + 0x1f) != '\r'))) {
                uVar5 = (uint)*(ushort *)((int)(&DAT_001ae9fc)[uVar5] + 2);
              }
              if (uVar5 == 0) {
                *puVar12 = (short)(*(int *)puVar12 << 8);
                puVar12[1] = (ushort)(*(int *)(puVar12 + 1) << 8);
                puVar12[4] = (ushort)pbVar10[0x13] << 8;
                puVar12[5] = (ushort)pbVar10[0x14] << 8;
                puVar12[-0xffffffff00000002] = 0x80;
                puVar12[-0xffffffff00000001] = 0xe;
                uVar7 = FUN_000dc440();
                *(undefined4 *)(puVar12 + 8) = uVar7;
                if ((int)(uint)*(byte *)((int)puVar12 + 0x11) <=
                    *(int *)(&DAT_002eb04d + (uint)pbVar10[0x17] * 4)) {
                  puVar12[-0xffffffff00000002] = 0xa9;
                  puVar12[-0xffffffff00000001] = 0xe;
                  pbVar8 = (byte *)FUN_00044dae();
                  if ((DAT_001ae9fc < pbVar8) &&
                     (*(short *)(pbVar8 + 0x5e) = *(short *)(pbVar10 + 0x5e) + 5,
                     0 < *(int *)(pbVar8 + 0x5c) >> 0x10)) {
                    pbVar8[0x13] = pbVar10[0x13];
                    pbVar8[0x14] = pbVar10[0x14];
                  }
                }
              }
            }
          }
        }
      }
      pbVar10 = *(byte **)((int)puVar12 + 0x14);
      puVar13 = (undefined1 *)puVar12;
    } while (pbVar10 != DAT_001ae9fc);
  }
  iVar9 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar9] & 1) != 0) && (((&DAT_0019d0c8)[iVar9] & 0x40) == 0)) {
      puVar12 = *(ushort **)((int)&DAT_0019d100 + iVar9);
      iVar14 = *(int *)(puVar13 + 0x18) +
               (*(int *)(puVar12 + 1) >> 0x10) + (uint)*puVar12 + (uint)puVar12[1];
      iVar6 = *(int *)((int)&DAT_0019d579 + iVar9);
      bVar2 = (&DAT_0019d578)[iVar9];
      *(int *)(puVar13 + 0x18) = iVar14;
      *(uint *)(puVar13 + 0x18) = iVar14 + (uint)bVar2 + iVar6;
    }
    iVar9 = iVar9 + 0x4ef;
  } while (iVar9 != 0x18ab);
  iVar9 = (DAT_002f10ce >> 0x18) * 0x4ef;
  (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar9] * 0x11] = puVar13[0x18];
  (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar9] * 0x11] =
       (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar9] * 0x11] + (char)DAT_002e8bf6;
  return;
}

/******************************************************************************
 * Function : dk_some_thing_has_been_0e01f4 (Ghidra: FUN_000e01f4)
 * Prototype: void dk_some_thing_has_been_0e01f4(void);
 * Address  : 0xe01f4 (Size: 113 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:597 ("Some THING has been deleted during the processing of another thing")
 * Naming   : String 'Some THING has been deleted during the processing of another'
 * Callers  : 1 -> 0xdf760
 * Callees  : 3 -> 0xddaf0, 0xe0880, 0xe413c
 * Strings  :
 *   - 0x16c9da: "update.cpp"
 *   - 0x16c997: "Some THING has been deleted during the processing of another thing"
 ******************************************************************************/
void FUN_000e01f4(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  
  pbVar2 = (&DAT_001ae9fc)[DAT_002e6eb6];
  if (pbVar2 == DAT_001ae9fc) {
    return;
  }
  do {
    if (*(short *)(pbVar2 + 0x1b) == 0) {
      FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 597, "Some THING has been deleted during the processing of another thing") */
      return;
    }
    bVar1 = *pbVar2;
    pbVar2 = (&DAT_001ae9fc)[*(ushort *)(pbVar2 + 0x67)];
    if ((bVar1 & 0x40) != 0) {
      if ((bVar1 & 0x10) == 0) {
        FUN_000e0880();
        pbVar2 = extraout_EDX;
      }
      else {
        FUN_000e413c();
        pbVar2 = extraout_EDX_00;
      }
    }
  } while (pbVar2 != DAT_001ae9fc);
  return;
}

/******************************************************************************
 * Function : sub_0e0880 (Ghidra: FUN_000e0880)
 * Prototype: longlong sub_0e0880(void);
 * Address  : 0xe0880 (Size: 667 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xdf760, 0xe01f4
 * Callees  : 7 -> 0x6f671, 0x6f69c, 0x6f6b8, 0xacdfc, 0xaced0, 0xe413c, 0xe6a10
 ******************************************************************************/
longlong FUN_000e0880(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  int iVar3;
  byte bVar4;
  short local_24 [6];
  
  bVar4 = 0;
  if ((*(byte *)(in_EAX + 0x25) & 0x40) == 0) {
    if ((*(byte *)(in_EAX + 1) & 4) != 0) {
      *(short *)(in_EAX + 0x2c) = *(short *)(in_EAX + 0x2c) + *(short *)(in_EAX + 0x32);
      *(short *)(in_EAX + 0x2e) = *(short *)(in_EAX + 0x2e) + *(short *)(in_EAX + 0x34);
      *(short *)(in_EAX + 0x30) = *(short *)(in_EAX + 0x30) + *(short *)(in_EAX + 0x36);
      FUN_000e6a10();
      *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) & 0xfb;
    }
    *(undefined4 *)(in_EAX + 0x38) = *(undefined4 *)(in_EAX + 0x2c);
    *(undefined2 *)(in_EAX + 0x3c + (uint)bVar4 * -8) =
         *(undefined2 *)(in_EAX + 0x30 + (uint)bVar4 * -8);
    if ((*(byte *)(in_EAX + 1) & 8) != 0) {
      *(short *)(in_EAX + 0x38) = *(short *)(in_EAX + 0x38) + *(short *)(in_EAX + 0x26);
      *(short *)(in_EAX + 0x3c) = *(short *)(in_EAX + 0x3c) + *(short *)(in_EAX + 0x2a);
      *(short *)(in_EAX + 0x3a) = *(short *)(in_EAX + 0x3a) + *(short *)(in_EAX + 0x28);
      FUN_000e6a10();
      *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) & 0xf7;
    }
  }
  iVar2 = (uint)*(byte *)(in_EAX + 0x1f) * 4;
  if (*(int *)(&DAT_00190303 + iVar2) != 0) {
    iVar2 = (**(code **)(&DAT_00190303 + iVar2))();
    if (-1 < iVar2) {
      if ((*(byte *)(in_EAX + 0x25) & 0x40) == 0) {
        if ((int)(uint)*(ushort *)(in_EAX + 0x60) < *(int *)(in_EAX + 0xf) >> 0x10) {
          if (*(short *)(in_EAX + 0x2c) != 0) {
            iVar2 = (0x100 - (uint)*(byte *)(in_EAX + 0x24)) * (*(int *)(in_EAX + 0x2a) >> 0x10);
            iVar3 = iVar2 >> 0x1f;
            *(short *)(in_EAX + 0x2c) =
                 (short)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
          }
          if (*(short *)(in_EAX + 0x2e) != 0) {
            iVar2 = (0x100 - (uint)*(byte *)(in_EAX + 0x24)) * (*(int *)(in_EAX + 0x2c) >> 0x10);
            iVar3 = iVar2 >> 0x1f;
            *(short *)(in_EAX + 0x2e) =
                 (short)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
          }
          if ((*(byte *)(in_EAX + 0x25) & 0x20) == 0) {
            local_24[2] = 0;
            local_24[3] = 0;
            local_24[4] = -(short)*(char *)(in_EAX + 0x20);
            *(short *)(in_EAX + 0x36) = *(short *)(in_EAX + 0x36) + local_24[4];
            *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 4;
          }
        }
        else {
          if (*(short *)(in_EAX + 0x2c) != 0) {
            iVar2 = (*(int *)(in_EAX + 0x2a) >> 0x10) * (0x100 - (uint)*(byte *)(in_EAX + 0x23));
            iVar3 = iVar2 >> 0x1f;
            *(short *)(in_EAX + 0x2c) =
                 (short)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
          }
          if (*(short *)(in_EAX + 0x2e) != 0) {
            iVar2 = (0x100 - (uint)*(byte *)(in_EAX + 0x23)) * (*(int *)(in_EAX + 0x2c) >> 0x10);
            iVar3 = iVar2 >> 0x1f;
            *(short *)(in_EAX + 0x2e) =
                 (short)((iVar2 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0) >> 8);
          }
          *(undefined2 *)(in_EAX + 0x11) = *(undefined2 *)(in_EAX + 0x60);
          if ((*(byte *)(in_EAX + 0x25) & 8) != 0) {
            *(undefined2 *)(in_EAX + 0x30) = 0;
          }
        }
      }
      FUN_000e413c();
      if (*(char *)(in_EAX + 0x66) != '\0') {
        iVar2 = FUN_0006f6b8();
        if (iVar2 == 0) {
          FUN_0006f69c();
        }
        else {
          FUN_0006f671();
          *(undefined1 *)(in_EAX + 0x66) = 0;
        }
      }
      if ((DAT_003d97cc != '\0') && (*(short *)(in_EAX + 0x62) != 0)) {
        iVar2 = FUN_000aced0();
        if (iVar2 == 0) {
          *(undefined2 *)(in_EAX + 0x62) = 0;
        }
        else {
          uVar1 = *(undefined4 *)(in_EAX + 0xd);
          local_24[(uint)bVar4 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar4 * -8);
          local_24[0] = (short)local_24._0_4_ + *(short *)(in_EAX + 0x58);
          FUN_000acdfc(uVar1);
        }
      }
      return CONCAT44(in_EDX,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_state_return_type_human_0e0b1c (Ghidra: FUN_000e0b1c)
 * Prototype: longlong dk_state_return_type_human_0e0b1c(void);
 * Address  : 0xe0b1c (Size: 3811 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:968 ("A state return type for a human controlled creature?")
 * Naming   : String 'A state return type for a human controlled creature?'
 * Callers  : 0 -> 
 * Callees  : 28 -> 0x10434, 0x24998, 0x29696, 0x39e7e, 0x39eca, 0x43ac3, 0x49df5, 0x627b5, 0x63b6d, 0x64a2e ...
 * Strings  :
 *   - 0x16ca1a: "update.cpp"
 *   - 0x16c9e5: "A state return type for a human controlled creature?"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

longlong FUN_000e0b1c(void)

{
  short *psVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  short sVar5;
  short sVar6;
  byte *pbVar7;
  char cVar8;
  undefined2 uVar9;
  byte *in_EAX;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint extraout_ECX;
  undefined2 extraout_var;
  uint in_EDX;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint unaff_EDI;
  bool bVar15;
  byte bVar16;
  undefined2 auStack_830 [1010];
  undefined4 auStack_4c [3];
  undefined4 local_40;
  short local_3c [2];
  undefined4 local_38;
  int local_34 [6];
  byte *local_1c;
  
  bVar16 = 0;
  puVar14 = &local_40;
  local_34[5] = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_34[2] = 1;
  if ((in_EAX[7] == 0x43) &&
     ((*(byte *)((int)&DAT_00279203 + ((uint)in_EAX[0xe] + (uint)in_EAX[0x10] * 0x100) * 5) & 0x40)
      != 0)) {
    auStack_4c[2] = 1;
    puVar14 = auStack_4c + 1;
    auStack_4c[1] = 0;
    FUN_0008608c();
    local_34[0] = 0;
    goto LAB_000e19f1;
  }
  if (*(int *)(in_EAX + 0x5c) >> 0x10 < 0) {
    auStack_4c[2] = 0;
    auStack_4c[1] = 0;
    FUN_0008608c();
    return (ulonglong)unaff_EDI << 0x20;
  }
  if (((DAT_002ed402 != 0) && (*(uint *)(local_34[5] + 0x2ef) != 0)) &&
     (*(uint *)(local_34[5] + 0x2ef) <= DAT_002e8bee)) {
    *(undefined4 *)(local_34[5] + 0x2ef) = 0;
    auStack_4c[2] = 0xe0c08;
    FUN_00024998();
    auStack_4c[2] = 0xe0c14;
    FUN_000b3b10();
  }
  if (*(char *)(local_34[5] + 0xb1) != '\0') {
    *(char *)(local_34[5] + 0xb1) = *(char *)(local_34[5] + 0xb1) + -1;
  }
  if (*(char *)(local_34[5] + 0x8b) == '\0') {
    *(undefined1 *)(local_34[5] + 0x8b) = DAT_002ebaf7;
  }
  if (*(char *)(local_34[5] + 0x302) == '\0') {
    auStack_4c[2] = 0xe0c5c;
    FUN_00049df5();
  }
  auStack_4c[2] = 0xe0c63;
  FUN_000e5e04();
  if ((*in_EAX & 0x20) == 0) {
    if (*(char *)(local_34[5] + 0xab) == '\0') {
      if (*(char *)(local_34[5] + 0x302) == '\0') {
        auStack_4c[2] = 0xe0c8e;
        iVar10 = FUN_000e1b88();
        if (iVar10 != 0) {
          return (ulonglong)in_EDX << 0x20;
        }
      }
      else {
        *(char *)(local_34[5] + 0x302) = *(char *)(local_34[5] + 0x302) + -1;
      }
    }
  }
  else {
    if (*(char *)(local_34[5] + 0xab) == '\0') {
      if (*(char *)(local_34[5] + 0x302) == '\0') {
        auStack_4c[2] = 0xe0cda;
        iVar10 = FUN_000e1b88();
        if (iVar10 != 0) {
          auStack_4c[2] = 0xe0cf2;
          FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 968, "A state return type for a human controlled creature?") */
        }
      }
      else {
        *(char *)(local_34[5] + 0x302) = *(char *)(local_34[5] + 0x302) + -1;
      }
    }
    if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xab) & 2) == 0) {
      if (((&DAT_0019d0cb)[(*(int *)(in_EAX + 3) >> 0x18) * 0x4ef] & 4) != 0) goto LAB_000e0d4c;
    }
    else if (((&DAT_0019d0cb)[(*(int *)(in_EAX + 3) >> 0x18) * 0x4ef] & 4) == 0) {
LAB_000e0d4c:
      auStack_4c[2] = 0xe0d56;
      FUN_000627b5();
    }
  }
  iVar10 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar12 = 0;
  if (*(char *)(iVar10 + 0xab) == '\0') {
    if ((*in_EAX & 0x20) == 0) {
      if ((*(byte *)(iVar10 + 2) & 1) == 0) {
        if (*(short *)(iVar10 + 200) != 0) {
          *(short *)(iVar10 + 0xbb) =
               (short)((uint)((*(int *)(iVar10 + 0xc6) >> 0x10) *
                             (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52)]) >> 0x10);
          puVar4 = (&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52)];
          *(undefined2 *)(iVar10 + 0xbf) = 0;
          uVar12 = 1;
          *(short *)(iVar10 + 0xbd) =
               (short)((uint)-((*(int *)(iVar10 + 0xc6) >> 0x10) * (int)puVar4 >> 8) >> 8);
        }
      }
      else {
        uVar12 = 1;
        *(byte *)(iVar10 + 2) = *(byte *)(iVar10 + 2) & 0xfe;
      }
    }
    else if ((in_EAX[0x25] & 0x20) == 0) {
      bVar15 = *(short *)(iVar10 + 200) != 0;
      if (bVar15) {
        *(short *)(iVar10 + 0xbb) =
             (short)((uint)((*(int *)(iVar10 + 0xc6) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52)]) >> 0x10);
        *(short *)(iVar10 + 0xbd) =
             (short)((uint)-((*(int *)(iVar10 + 0xc6) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52)] >> 8) >> 8);
      }
      uVar12 = (uint)bVar15;
      if (*(short *)(iVar10 + 0xca) != 0) {
        *(short *)(iVar10 + 0xbb) =
             (short)((uint)*(undefined4 *)(iVar10 + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(iVar10 + 200) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff]) >> 0x10);
        uVar12 = 1;
        *(short *)(iVar10 + 0xbd) =
             (short)((uint)*(undefined4 *)(iVar10 + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(iVar10 + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff] >>
                            8) >> 8);
      }
    }
    else {
      if (*(short *)(iVar10 + 200) != 0) {
        *(short *)(iVar10 + 0xbb) =
             (short)((uint)(((int)(&DAT_001927e0)[*(ushort *)(in_EAX + 0x52)] >> 8) *
                           ((*(int *)(iVar10 + 0xc6) >> 0x10) *
                            (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x54)] >> 8)) >> 0x10);
        *(short *)(iVar10 + 0xbd) =
             (short)((uint)-(((int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52)] >> 8) *
                             ((*(int *)(iVar10 + 0xc6) >> 0x10) *
                              (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x54)] >> 8) >> 8) >> 8)
        ;
        *(short *)(iVar10 + 0xbf) =
             (short)((uint)((*(int *)(iVar10 + 0xc6) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x54)]) >> 0x10);
      }
      if (*(short *)(iVar10 + 0xca) != 0) {
        *(short *)(iVar10 + 0xbb) =
             (short)((uint)*(undefined4 *)(iVar10 + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(iVar10 + 200) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff]) >> 0x10);
        *(short *)(iVar10 + 0xbd) =
             (short)((uint)*(undefined4 *)(iVar10 + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(iVar10 + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff] >>
                            8) >> 8);
      }
    }
    if (((in_EAX[0x25] & 0x20) == 0) || ((*in_EAX & 0x20) != 0)) goto LAB_000e10bd;
    auStack_4c[2] = 0xe102d;
    iVar11 = FUN_000b3040();
    iVar11 = (iVar11 + 0x100) - (*(int *)(in_EAX + 0xf) >> 0x10);
    psVar1 = (short *)(iVar10 + 0xbf);
    if (0 < iVar11) {
      if (0x20 < iVar11) {
        iVar11 = 0x20;
      }
      uVar12 = 1;
      *psVar1 = *psVar1 + (short)iVar11;
      goto LAB_000e10bd;
    }
    uVar12 = extraout_ECX;
    if (-1 < iVar11) goto LAB_000e10bd;
    iVar10 = -iVar11;
    if (iVar11 != -0x20 && 0x1f < iVar10) {
      iVar10 = 0x20;
    }
    *psVar1 = *psVar1 - (short)iVar10;
    bVar15 = true;
  }
  else {
    *(undefined2 *)(iVar10 + 0xbb) = 0;
    *(undefined2 *)(iVar10 + 0xbd) = 0;
    *(undefined2 *)(iVar10 + 0xbf) = 0;
    *(undefined2 *)(iVar10 + 200) = 0;
    uVar12 = 1;
    *(byte *)(iVar10 + 2) = *(byte *)(iVar10 + 2) & 0xfe;
LAB_000e10bd:
    if (uVar12 == 0) {
      if (((*(short *)(iVar10 + 0xbb) == 0) && (*(short *)(iVar10 + 0xbd) == 0)) &&
         (*(short *)(iVar10 + 0xbf) == 0)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
    }
    else {
      bVar15 = true;
    }
  }
  if (bVar15) {
    *(short *)(in_EAX + 0x38) = *(short *)(in_EAX + 0x38) + *(short *)(local_34[5] + 0xbb);
    *(short *)(in_EAX + 0x3a) = *(short *)(in_EAX + 0x3a) + *(short *)(local_34[5] + 0xbd);
    *(short *)(in_EAX + 0x3c) = *(short *)(in_EAX + 0x3c) + *(short *)(local_34[5] + 0xbf);
  }
  auStack_4c[2] = 0xe1139;
  FUN_000b3dac();
  if ((*in_EAX & 0x20) != 0) {
    if ((*(byte *)(local_34[5] + 1) & 0x40) == 0) {
      *(short *)(local_34[5] + 200) = *(short *)(local_34[5] + 200) / 2;
    }
    if ((*(byte *)(local_34[5] + 1) & 0x80) == 0) {
      *(short *)(local_34[5] + 0xca) = *(short *)(local_34[5] + 0xca) / 2;
    }
  }
  if ((*in_EAX & 0x20) == 0) {
    *(undefined2 *)(local_34[5] + 200) = 0;
  }
  auStack_4c[2] = 0xe11a1;
  FUN_0007231c();
  local_34[4] = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  in_EAX[0x25] = in_EAX[0x25] & 0x7c;
  *(undefined2 *)(local_34[4] + 0xb9) = 0;
  if (*(int *)(in_EAX + 0xf) >> 0x10 ==
      (uint)((&DAT_00269203)[(uint)in_EAX[0x10] * 0x100 + (uint)in_EAX[0xe]] & 0xf) << 8) {
    auStack_4c[2] = 0xe11fc;
    local_1c = in_EAX;
    uVar12 = FUN_000b23ec();
    if ((uVar12 & 0xfffffffe) == 0x28) {
      auStack_4c[2] = 0xe122e;
      FUN_00081c10();
      in_EAX[0x25] = in_EAX[0x25] | 2;
    }
    else if (uVar12 == 0x27) {
      in_EAX[0x25] = in_EAX[0x25] | 1;
    }
    pbVar7 = local_1c;
    if ((local_1c[0x25] & 1) == 0) {
      if (*(char *)(local_34[4] + 0xc1) == '\0') {
        puVar14 = &local_40;
        uVar12 = local_38;
        if (DAT_002e7bed == '\x02') {
          auStack_4c[2] = 0xe12b0;
          iVar10 = FUN_00081d84();
          local_38 = *(uint *)(pbVar7 + 0xd);
          uVar12 = local_38;
          *(undefined2 *)(local_34 + (uint)bVar16 * -2) =
               *(undefined2 *)(pbVar7 + (uint)bVar16 * -8 + 0x11);
          puVar14 = &local_40;
          if ((&DAT_002d33c5)
              [((&DAT_0019033b)[local_38 >> 0x18] * 0x55 + (&DAT_0019033b)[local_38 >> 8 & 0xff]) *
               6] == '\n') {
            local_1c[0x25] = local_1c[0x25] | 0x80;
            local_38._2_2_ = (short)(local_38 >> 0x10);
            if (iVar10 == 1) {
              sVar5 = (short)((uint)((&DAT_001927e0)[*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff]
                                    << 6) >> 0x10);
              sVar6 = (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                            [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6) >>
                                     8) >> 8);
            }
            else {
              puVar14 = &local_40;
              if (iVar10 != 2) goto LAB_000e16f9;
              sVar5 = -(short)((uint)((&DAT_001927e0)[*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff]
                                     << 6) >> 0x10);
              sVar6 = -(short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                             [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6) >>
                                      8) >> 8);
            }
            auStack_4c[2] = 0xffffffff;
            local_38 = CONCAT22(local_38._2_2_ + sVar6,(short)local_38 + sVar5);
            auStack_4c[1] = 0xe16f9;
            FUN_00043ac3();
            puVar14 = auStack_4c + 2;
            uVar12 = local_38;
          }
        }
      }
      else {
        auStack_4c[2] = 0xe14fb;
        iVar10 = FUN_00081d84();
        local_34[3] = (&DAT_001b0a00)[CONCAT22(extraout_var,*(undefined2 *)(local_1c + 100))];
        bVar3 = local_1c[0x1a];
        uVar2 = *(undefined4 *)(local_1c + 0xd);
        local_3c[(uint)bVar16 * -4] = *(short *)(local_1c + (uint)bVar16 * -8 + 0x11);
        bVar3 = (&DAT_0018b70c)[(uint)bVar3 * 0x10];
        if (bVar3 < 3) {
LAB_000e153e:
          local_40._0_2_ = (short)uVar2;
          local_40._2_2_ = (short)((uint)uVar2 >> 0x10);
          if (iVar10 == 1) {
            auStack_4c[2] = 0xffffffff;
            local_40 = CONCAT22(local_40._2_2_ +
                                (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                      [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff]
                                                << 6) >> 8) >> 8),
                                (short)local_40 +
                                (short)((uint)((&DAT_001927e0)
                                               [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6)
                                       >> 0x10));
            auStack_4c[1] = 0xe15bd;
            FUN_00043ac3();
            *(char *)(local_34[2] + 0xc1) = *(char *)(local_34[2] + 0xc1) + -1;
            puVar13 = auStack_4c + 2;
            uVar2 = local_40;
          }
          else {
            puVar13 = &local_40;
            if (iVar10 == 2) {
              auStack_4c[2] = 0xffffffff;
              local_40 = CONCAT22(local_40._2_2_ -
                                  (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                        [*(ushort *)(local_1c + 0x52) - 0x200 &
                                                         0x7ff] << 6) >> 8) >> 8),
                                  (short)local_40 -
                                  (short)((uint)((&DAT_001927e0)
                                                 [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6
                                                ) >> 0x10));
              auStack_4c[1] = 0xe14df;
              FUN_00043ac3();
              *(char *)(local_34[2] + 0xc1) = *(char *)(local_34[2] + 0xc1) + -1;
              puVar13 = auStack_4c + 2;
              uVar2 = local_40;
            }
          }
        }
        else {
          puVar13 = &local_40;
          if (4 < bVar3) {
            if (bVar3 != 5) goto LAB_000e153e;
            puVar13 = &local_40;
            if (iVar10 != 0) {
              puVar13 = auStack_4c + 2;
              auStack_4c[2] = 0xffffffff;
              auStack_4c[1] = 0xe13a1;
              local_40 = uVar2;
              FUN_00043ac3();
              *(char *)(local_34[2] + 0xc1) = *(char *)(local_34[2] + 0xc1) + -1;
              uVar2 = local_40;
            }
          }
        }
        local_40 = uVar2;
        iVar10 = puVar13[9];
        puVar13[0xffffffff] = 0xe13bc;
        iVar11 = FUN_00081d84();
        puVar13[2] = *(undefined4 *)(iVar10 + 0xd);
        *(undefined2 *)(puVar13 + (uint)bVar16 * -2 + 3) =
             *(undefined2 *)(iVar10 + 0x11 + (uint)bVar16 * -8);
        if (iVar11 == 1) {
          *(short *)(puVar13 + 2) =
               *(short *)(puVar13 + 2) +
               (short)((uint)((&DAT_001927e0)[*(ushort *)(puVar13[9] + 0x52) - 0x200 & 0x7ff] << 6)
                      >> 0x10);
          puVar4 = (&PTR_LAB_00192fe0)[*(ushort *)(puVar13[9] + 0x52) - 0x200 & 0x7ff];
          puVar13[0xffffffff] = 0xffffffff;
          *(short *)((int)puVar13 + 10) =
               *(short *)((int)puVar13 + 10) + (short)((uint)-(((int)puVar4 << 6) >> 8) >> 8);
          puVar13[0xfffffffe] = 0xe1451;
          FUN_00043ac3();
          *(char *)(puVar13[6] + 0xc1) = *(char *)(puVar13[6] + 0xc1) + -1;
          puVar14 = puVar13 + 0xffffffff;
          uVar12 = local_38;
        }
        else {
          puVar14 = puVar13;
          uVar12 = local_38;
          if (iVar11 == 2) {
            *(short *)(puVar13 + 2) =
                 *(short *)(puVar13 + 2) -
                 (short)((uint)((&DAT_001927e0)[*(ushort *)(puVar13[9] + 0x52) - 0x200 & 0x7ff] << 6
                               ) >> 0x10);
            puVar4 = (&PTR_LAB_00192fe0)[*(ushort *)(puVar13[9] + 0x52) - 0x200 & 0x7ff];
            puVar14 = puVar13 + 0xffffffff;
            puVar13[0xffffffff] = 0xffffffff;
            *(short *)((int)puVar13 + 10) =
                 *(short *)((int)puVar13 + 10) - (short)((uint)-(((int)puVar4 << 6) >> 8) >> 8);
            puVar13[0xfffffffe] = 0xe165b;
            FUN_00043ac3();
            *(char *)(puVar13[6] + 0xc1) = *(char *)(puVar13[6] + 0xc1) + -1;
            uVar12 = local_38;
          }
        }
      }
    }
    else {
      auStack_4c[2] = 0xe1254;
      iVar10 = FUN_00081d84();
      if (iVar10 != 0) {
        auStack_4c[2] = 0xe126e;
        FUN_00024998();
      }
      *(undefined1 *)(local_34[4] + 0xc1) = 0;
      puVar14 = &local_40;
      uVar12 = local_38;
    }
LAB_000e16f9:
    local_38 = uVar12;
    iVar10 = puVar14[9];
    iVar11 = *(int *)(iVar10 + 3);
    puVar14[4] = (&DAT_001b0a00)[*(ushort *)(iVar10 + 100)];
    if (iVar11 >> 0x18 == (uint)DAT_002eb542) {
      iVar10 = (&DAT_001ae9fc)
               [(*(uint *)((int)&DAT_00279203 +
                          ((uint)*(byte *)(puVar14[9] + 0x10) * 0x100 +
                          (uint)*(byte *)(iVar10 + 0xe)) * 5 + 1) & 0x3fffff) >> 0xb];
      if (iVar10 != DAT_001ae9fc) {
LAB_000e1786:
        if (*(char *)(iVar10 + 0x1f) != '\x04') goto LAB_000e1767;
        iVar11 = puVar14[4];
        *(undefined1 *)(iVar11 + 0xc1) = 0x14;
        uVar9 = *(undefined2 *)(iVar10 + 0x1b);
LAB_000e1864:
        *(undefined2 *)(iVar11 + 0xb9) = uVar9;
      }
    }
    else {
      for (iVar10 = (&DAT_001ae9fc)
                    [(*(uint *)((int)&DAT_00279203 +
                               (uint)CONCAT11(*(undefined1 *)(puVar14[9] + 0x10),
                                              *(byte *)(iVar10 + 0xe)) * 5 + 1) & 0x3fffff) >> 0xb];
          iVar10 != DAT_001ae9fc; iVar10 = (&DAT_001ae9fc)[*(ushort *)(iVar10 + 2)]) {
        if (*(char *)(iVar10 + 0x1f) == '\x04') {
          puVar14[0xffffffff] = 0xe1851;
          FUN_00010434();
          *(undefined1 *)(puVar14[4] + 0xc1) = 0x14;
          iVar11 = puVar14[4];
          uVar9 = *(undefined2 *)(iVar10 + 0x1b);
          goto LAB_000e1864;
        }
      }
    }
  }
LAB_000e186b:
  if ((((**(byte **)((int)puVar14 + 0x24) & 0x20) == 0) &&
      (((*(byte **)((int)puVar14 + 0x24))[0x25] & 2) != 0)) &&
     (iVar10 = *(int *)((int)puVar14 + 0x24),
     (&DAT_002e9125)[(uint)*(byte *)(iVar10 + 0x1a) * 0xe6] != '\0')) {
    cVar8 = *(char *)(iVar10 + 7);
    if (cVar8 == '\x0e') {
      cVar8 = *(char *)(iVar10 + 8);
    }
    if ((cVar8 != -0x71) && (*(int *)(*(int *)((int)puVar14 + 0x1c) + 0x2fe) + 0x40U < DAT_002e8bee)
       ) {
      *(uint *)(*(int *)((int)puVar14 + 0x1c) + 0x2fe) = DAT_002e8bee;
      *(undefined4 *)((int)puVar14 + -4) = 0xe18e1;
      iVar10 = FUN_00064a2e();
      if (iVar10 != 0) {
        *(undefined4 *)((int)puVar14 + -4) = 0xe18ee;
        iVar10 = FUN_000655fa();
        if (iVar10 == 0) {
          *(undefined4 *)((int)puVar14 + -4) = 0xe1905;
          FUN_00063b6d();
        }
        else {
          *(undefined1 *)(*(int *)((int)puVar14 + 0x24) + 8) = 0x8f;
        }
      }
    }
  }
  *(undefined4 *)((int)puVar14 + -4) = 0xe190f;
  FUN_000e1a00();
  *(undefined4 *)((int)puVar14 + -4) = 0xe1916;
  FUN_000b3b10();
  *(undefined4 *)((int)puVar14 + -4) = 0xe191d;
  FUN_000811d8();
  if (*(char *)(*(int *)((int)puVar14 + 0x20) + 0x2b0) != '\0') {
    *(undefined4 *)((int)puVar14 + -4) = 0xe1931;
    FUN_00072739();
  }
  if (0 < *(int *)(in_EAX + 0x15) >> 0x10) {
    *(short *)(in_EAX + 0x17) = *(short *)(in_EAX + 0x17) + -1;
  }
  if ((*(ushort *)(*(int *)((int)puVar14 + 0x20) + 0x7a) & 0xfff) != 0) {
    *(undefined4 *)((int)puVar14 + -4) = 0xe1952;
    iVar10 = FUN_00039e7e();
    if (iVar10 != 0) {
      *(undefined4 *)((int)puVar14 + -4) = 0xe195d;
      FUN_00039eca();
    }
  }
  if ((*(short *)(*(int *)((int)puVar14 + 0x20) + 0x6e) != 0) &&
     ((*(byte *)((&DAT_001ae9fc)[*(ushort *)(*(int *)((int)puVar14 + 0x20) + 0x6e)] + 1) & 1) == 1))
  {
    *(undefined4 *)((int)puVar14 + -4) = 0xe1992;
    FUN_000b3b10();
  }
  *(undefined4 *)((int)puVar14 + -4) = 0xe1999;
  iVar10 = FUN_00081fec();
  if (iVar10 == -1) {
    *(undefined4 *)((int)puVar14 + 0x14) = 0;
    return CONCAT44(*(undefined4 *)((int)puVar14 + 0x34),*(undefined4 *)((int)puVar14 + 0x14));
  }
  *(undefined4 *)((int)puVar14 + -4) = 0xe19be;
  FUN_00029696();
  *(undefined4 *)((int)puVar14 + -4) = 0xe19ce;
  FUN_000e6a10();
  iVar10 = *(int *)((int)puVar14 + 0x20);
  *(byte *)(iVar10 + 1) = *(byte *)(iVar10 + 1) & 0x3f;
  *(byte *)(iVar10 + 0xad) = *(byte *)(iVar10 + 0xad) & 0xfb;
  *(undefined4 *)((int)puVar14 + -4) = 0xe19f1;
  FUN_00071416();
LAB_000e19f1:
  return CONCAT44(puVar14[0xd],puVar14[5]);
LAB_000e1767:
  iVar10 = (&DAT_001ae9fc)[*(ushort *)(iVar10 + 2)];
  if (iVar10 == DAT_001ae9fc) goto LAB_000e186b;
  goto LAB_000e1786;
}

/******************************************************************************
 * Function : sub_0e1a00 (Ghidra: FUN_000e1a00)
 * Prototype: undefined8 sub_0e1a00(void);
 * Address  : 0xe1a00 (Size: 392 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 2 -> 0x717de, 0x81c10
 ******************************************************************************/
undefined8 FUN_000e1a00(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 in_EDX;
  int iVar6;
  
  uVar5 = (uint)*(ushort *)(in_EAX + 100);
  iVar3 = (&DAT_001b0a00)[uVar5];
  if ((*(byte *)(iVar3 + 0xad) & 1) != 0) {
    uVar5 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = uVar5 >> 0xd | uVar5 * 0x80000;
    if (DAT_002e8bf6 % 100 < (uint)DAT_002ed3ff) {
      bVar1 = *(byte *)(in_EAX + 0x10);
      bVar2 = *(byte *)(in_EAX + 0xe);
      iVar6 = 0;
      do {
        uVar5 = (&DAT_001ae9fc)
                [(*(uint *)((int)&DAT_00279203 +
                           ((*(int *)((int)&DAT_0018b624 + iVar6) >> 0x10) +
                           (uint)bVar2 + (uint)bVar1 * 0x100) * 5 + 1) & 0x3fffff) >> 0xb];
        if (DAT_001ae9fc < uVar5) {
          do {
            if ((((*(char *)(uVar5 + 0x1f) == '\x05') && (*(char *)(uVar5 + 0x1a) != '\x17')) &&
                (*(int *)(uVar5 + 3) >> 0x18 != (uint)*(byte *)(iVar3 + 0xb6))) &&
               ((*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar5 + 100)] + 0xad) & 1) == 0)) {
              FUN_000717de();
              *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0xb6) =
                   *(undefined1 *)(iVar3 + 0xb6);
              uVar5 = extraout_ECX;
            }
            uVar5 = (&DAT_001ae9fc)[*(ushort *)(uVar5 + 2)];
          } while (DAT_001ae9fc < uVar5);
        }
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0x12);
    }
    uVar4 = DAT_002e8bee - *(int *)(iVar3 + 0x2eb);
    uVar5 = uVar4 / DAT_002ed401;
    if (uVar4 % (uint)DAT_002ed401 == 0) {
      uVar5 = FUN_00081c10();
    }
  }
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : dk_creature_has_illegal_state_0e1b88 (Ghidra: FUN_000e1b88)
 * Prototype: undefined8 dk_creature_has_illegal_state_0e1b88(void);
 * Address  : 0xe1b88 (Size: 827 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:1557; update.cpp:1571 ("GoldPile with no gold!")
 * Naming   : String 'Creature has illegal state[1], T%d, S%d, TCS%d'
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 19 -> 0x10434, 0x13809, 0x15ed7, 0x16d38, 0x16f8b, 0x1829f, 0x22b3a, 0x39e7e, 0x52834, 0x63b6d ...
 * Strings  :
 *   - 0x16ca54: "update.cpp"
 *   - 0x16ca76: "update.cpp"
 *   - 0x16ca25: "Creature has illegal state[1], T%d, S%d, TCS%d"
 *   - 0x16ca5f: "GoldPile with no gold!"
 ******************************************************************************/
undefined8 FUN_000e1b88(void)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint uVar8;
  undefined4 in_EDX;
  int iVar9;
  undefined8 uVar10;
  
  FUN_00052834();
  iVar4 = FUN_00015ed7();
  iVar5 = extraout_ECX;
  if ((((iVar4 != 0) && (iVar4 = FUN_0001829f(), iVar5 = extraout_ECX_00, iVar4 == 0)) &&
      (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 3) == '\0')) &&
     ((*(char *)(in_EAX + 0x1a) != '\x17' &&
      (iVar4 = FUN_00084f04(), iVar5 = extraout_ECX_01, iVar4 != 0)))) {
    FUN_00016d38();
    iVar5 = extraout_ECX_02;
  }
  if ((((*(byte *)(iVar5 + 3) & 0x10) == 0) && (*(short *)(iVar5 + 0x1d0) != 0)) &&
     (((*(byte *)(iVar5 + 1) & 2) == 0 &&
      (((cVar2 = FUN_00064c4d(), iVar5 = extraout_ECX_03, cVar2 != '\0' &&
        (iVar4 = FUN_00022b3a(), iVar5 = extraout_ECX_04, iVar4 != 0)) &&
       (*(char *)(iVar4 + 6) != *(char *)(in_EAX + 6))))))) {
    FUN_00016f8b();
    iVar5 = extraout_ECX_05;
  }
  *(undefined2 *)(iVar5 + 0x1d0) = 0;
  if (((*(ushort *)(iVar5 + 0x7a) & 0xfff) != 0) && (iVar5 = FUN_00039e7e(), iVar5 == 0)) {
    FUN_00013809();
  }
  if ((*(byte *)(in_EAX + 7) == 0) || (0x90 < *(byte *)(in_EAX + 7))) {
    FUN_000e7714(&DAT_0019cbac,s_Creature_has_illegal_state_1___T_0016ca25,
                 *(undefined2 *)(in_EAX + 0x1b),*(undefined1 *)(in_EAX + 7),
                 *(undefined1 *)(in_EAX + 8));
    FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 1557, g_log_buf) */
    FUN_00063b6d();
  }
  if (((*(byte *)(in_EAX + 0x25) & 0x20) == 0) && (*(char *)(in_EAX + 0x1a) != '\x17')) {
    bVar1 = *(byte *)(in_EAX + 0x10);
    iVar5 = 0;
    uVar6 = (uint)*(byte *)(in_EAX + 0xe);
    do {
      iVar9 = (*(int *)((int)&DAT_0018b647 + iVar5) >> 0x18) + uVar6;
      iVar4 = (*(int *)((int)&DAT_0018b647 + iVar5 + 1) >> 0x18) + (uint)bVar1;
      if ((((-1 < iVar9) && (iVar9 < 0x100)) && (-1 < iVar4)) &&
         (((iVar4 < 0x100 &&
           (iVar4 = (iVar4 * 0x100 + iVar9) * 5, (*(byte *)((int)&DAT_00279203 + iVar4) & 0x10) == 0
           )) && (uVar8 = (&DAT_001ae9fc)
                          [(*(uint *)((int)&DAT_00279203 + iVar4 + 1) & 0x3fffff) >> 0xb],
                 DAT_001ae9fc < uVar8)))) {
        do {
          if (*(char *)(uVar8 + 0x1f) == '\x01') {
            if (*(char *)(uVar8 + 0x1a) == '+') {
              uVar10 = FUN_0007df48();
              uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
              uVar6 = extraout_ECX_06;
              if ((int)uVar10 != 0) goto LAB_000e1dd1;
            }
            if (*(char *)(uVar8 + 0x1a) == '\n') {
              uVar10 = FUN_000d0f50();
              uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
              if (((undefined *)uVar10 < &DAT_002ddd1c) ||
                 (((sVar3 = *(short *)((undefined *)uVar10 + 10), uVar6 = extraout_ECX_07,
                   sVar3 != 0xd && (sVar3 != 5)) && (sVar3 != 4)))) goto LAB_000e1dd1;
            }
          }
          uVar8 = (&DAT_001ae9fc)[*(ushort *)(uVar8 + 2)];
        } while (DAT_001ae9fc < uVar8);
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 < 0x10);
    uVar8 = 0;
LAB_000e1dd1:
    if (uVar8 != 0) {
      if (*(char *)(uVar8 + 0x1a) == '+') {
        if (*(int *)(uVar8 + 0x13) == 0) {
          FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 1571, "GoldPile with no gold!") */
          FUN_00072af4();
        }
        else {
          uVar6 = (uint)*(ushort *)(&DAT_002e912a + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6);
          iVar5 = *(int *)(in_EAX + 0x13);
          if (iVar5 < (int)uVar6) {
            iVar4 = *(int *)(uVar8 + 0x13) + iVar5;
            if ((int)uVar6 < iVar4) {
              *(uint *)(in_EAX + 0x13) = iVar5 + (uVar6 - iVar5);
              *(int *)(uVar8 + 0x13) = *(int *)(uVar8 + 0x13) - (uVar6 - iVar5);
            }
            else {
              *(int *)(in_EAX + 0x13) = iVar4;
              FUN_00072af4();
            }
          }
        }
        FUN_00010434();
      }
      else if ((*(char *)(uVar8 + 0x1a) == '\n') && (iVar5 = FUN_00085954(), iVar5 == 0)) {
        FUN_00085cc4();
      }
    }
  }
  iVar5 = (uint)*(byte *)(in_EAX + 7) * 0x29;
  if ((*(int *)(&DAT_0018c4a0 + iVar5) == 0) ||
     (sVar3 = (**(code **)(&DAT_0018c4a0 + iVar5))(), sVar3 != -1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return CONCAT44(in_EDX,uVar7);
}

/******************************************************************************
 * Function : sub_0e1ec4 (Ghidra: FUN_000e1ec4)
 * Prototype: longlong sub_0e1ec4(void);
 * Address  : 0xe1ec4 (Size: 1791 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 24 -> 0x10c1a, 0x10c44, 0x10d08, 0x24998, 0x250ef, 0x25780, 0x2585f, 0x25cf7, 0x263c9, 0x2649e ...
 ******************************************************************************/
longlong FUN_000e1ec4(void)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined2 auStack_874 [1018];
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [56];
  char local_38 [20];
  undefined *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  bVar12 = 0;
  iVar5 = (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  local_24 = &DAT_00188c94 + iVar5;
  local_1c = 0;
  local_20 = 0;
  if (*(short *)(in_EAX + 0x1d) != *(short *)(in_EAX + 0x1b)) {
    local_20 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  puVar11 = (undefined4 *)local_70;
  if (*(short *)(&DAT_00188cb2 + iVar5) != 0) {
    local_74 = 0xe1f27;
    iVar5 = FUN_0006f865();
    puVar11 = (undefined4 *)local_70;
    if (iVar5 == 0) {
      local_74 = 0x100;
      local_78 = 2;
      puVar11 = &uStack_80;
      uStack_80 = 3;
      iStack_7c = iVar5;
      FUN_0006e538();
    }
  }
  if (*(char *)(puVar11[0x13] + 0x47) != '\0') {
    *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + -1;
  }
  if (*(int *)(in_EAX + 0x5c) >> 0x10 < 0) {
    *(undefined1 *)(puVar11 + 0x15) = 1;
  }
  else {
    bVar1 = *(byte *)(in_EAX + 0x1a);
    puVar11[0x12] = in_EAX + 0xd;
    if (bVar1 < 0xf) {
      if (bVar1 < 6) {
        if (1 < bVar1) {
          if (bVar1 < 3) {
            iVar5 = 0;
            puVar10 = puVar11;
            do {
              uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
              uVar7 = uVar7 >> 0xd | uVar7 * 0x80000;
              *(short *)((int)puVar10 + 0x40) =
                   (*(short *)(in_EAX + 0xd) + 0x40) - (short)((ulonglong)uVar7 % 0x7f);
              uVar7 = uVar7 * 0x24a1 + 0x24df;
              uVar7 = uVar7 >> 0xd | uVar7 * 0x80000;
              *(short *)((int)puVar10 + 0x42) =
                   (*(short *)(in_EAX + 0xf) + 0x40) - (short)((ulonglong)uVar7 % 0x7f);
              uVar7 = uVar7 * 0x24a1 + 0x24df;
              DAT_002e8bf6 = uVar7 >> 0xd | uVar7 * 0x80000;
              uVar8 = *(undefined4 *)(in_EAX + 0xf);
              puVar11 = (undefined4 *)((int)puVar10 + -4);
              *(undefined4 *)((int)puVar10 + -4) = 0xffffffff;
              *(short *)((int)puVar10 + 0x44) =
                   ((short)((uint)uVar8 >> 0x10) + 0x40) - (short)((ulonglong)DAT_002e8bf6 % 0x7f);
              iVar5 = iVar5 + 1;
              *(undefined4 *)((int)puVar10 + -8) = 0xe2141;
              FUN_00043ac3();
              puVar10 = (undefined4 *)((int)puVar10 + -4);
            } while (iVar5 < 2);
          }
          else if (bVar1 == 4) {
            puVar11[-1] = 0xe232a;
            iVar5 = FUN_0002683b();
            if ((((iVar5 != 0) &&
                 ((uint)(byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] ==
                  *(int *)(in_EAX + 3) >> 0x18)) && (*(short *)(in_EAX + 0x1d) != 0)) &&
               (*(short *)(in_EAX + 0x1d) ==
                *(short *)((int)&DAT_0019d0f7 + (DAT_002f10ce >> 0x18) * 0x4ef))) {
              puVar11[-1] = 0xe239c;
              FUN_000627b5();
              (&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] =
                   (&DAT_0019d0cb)[(DAT_002f10ce >> 0x18) * 0x4ef] | 8;
            }
          }
        }
      }
      else if (bVar1 < 7) {
        if ((*(ushort *)(in_EAX + 0x17) != 0) &&
           (iVar5 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x17)], *(char *)(iVar5 + 0x1f) == '\x05'))
        {
          puVar11[6] = *(undefined4 *)(iVar5 + 0xd);
          *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 7) =
               *(undefined2 *)(iVar5 + 0x11 + (uint)bVar12 * -8);
          *(short *)(puVar11 + 7) =
               (short)((uint)*(undefined4 *)((int)puVar11 + 0x1a) >> 0x10) +
               (short)((int)(uint)*(ushort *)(iVar5 + 0x58) >> 1);
          puVar11[-1] = 0xe21a9;
          uVar4 = FUN_00010c1a();
          *(undefined2 *)(in_EAX + 0x52) = uVar4;
          puVar11[-1] = 0xe21be;
          uVar4 = FUN_00010c44();
          *(undefined2 *)(in_EAX + 0x54) = uVar4;
          puVar11[-1] = 0xe21dd;
          FUN_00010d08();
          sVar2 = *(short *)(in_EAX + 0x2e);
          *(short *)(puVar11 + 2) = (short)puVar11[0xc] - *(short *)(in_EAX + 0x2c);
          sVar3 = *(short *)(in_EAX + 0x30);
          *(short *)((int)puVar11 + 10) = (short)*(undefined4 *)((int)puVar11 + 0x32) - sVar2;
          *(short *)(puVar11 + 3) = (short)puVar11[0xd] - sVar3;
          *puVar11 = puVar11[2];
          *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 1) =
               *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 3);
          puVar11[0xc] = puVar11[2];
          *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 0xd) =
               *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 3);
          puVar11[-1] = 0xe2245;
          iVar5 = FUN_000e8cc8();
          if (0x80 < iVar5) {
            *(short *)(puVar11 + 8) = (short)(puVar11[0xc] << 7);
            *(short *)(puVar11 + 9) = (short)(puVar11[0xd] << 7);
            *(short *)((int)puVar11 + 0x22) = (short)(*(int *)((int)puVar11 + 0x32) << 7);
            puVar11[0xe] = puVar11[8];
            *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 0xf) =
                 *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 9);
            puVar11[0xc] = puVar11[8];
            *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 0xd) =
                 *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 9);
            *(short *)(puVar11 + 4) = (short)((*(int *)((int)puVar11 + 0x2e) >> 0x10) / iVar5);
            *(short *)((int)puVar11 + 0x12) = (short)(((int)puVar11[0xc] >> 0x10) / iVar5);
            *(short *)(puVar11 + 5) = (short)((*(int *)((int)puVar11 + 0x32) >> 0x10) / iVar5);
            puVar11[10] = puVar11[4];
            *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 0xb) =
                 *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 5);
            puVar11[0xc] = puVar11[4];
            *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 0xd) =
                 *(undefined2 *)(puVar11 + (uint)bVar12 * -2 + 5);
          }
          *(short *)(in_EAX + 0x32) = *(short *)(in_EAX + 0x32) + (short)puVar11[0xc];
          *(short *)(in_EAX + 0x34) =
               *(short *)(in_EAX + 0x34) + (short)*(undefined4 *)((int)puVar11 + 0x32);
          *(short *)(in_EAX + 0x36) = *(short *)(in_EAX + 0x36) + (short)puVar11[0xd];
          *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) | 4;
        }
      }
      else if (7 < bVar1) {
        if (bVar1 < 9) {
          iVar5 = 0;
          puVar10 = puVar11;
          do {
            puVar9 = (undefined1 *)puVar10;
            uVar7 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            uVar6 = uVar7 >> 0xd;
            DAT_002e8bf6._0_2_ = (ushort)uVar6;
            uVar6 = (uVar6 | uVar7 * 0x80000) * 0x24a1 + 0x24df;
            *(ushort *)(puVar9 + 0x40) =
                 CONCAT11((char)((ushort)*(undefined2 *)(in_EAX + 0xd) >> 8) + '\x02',
                          (char)*(undefined2 *)(in_EAX + 0xd)) - ((ushort)DAT_002e8bf6 & 0x3ff);
            uVar7 = uVar6 >> 0xd;
            DAT_002e8bf6._0_2_ = (ushort)uVar7;
            uVar7 = (uVar7 | uVar6 * 0x80000) * 0x24a1 + 0x24df;
            *(ushort *)(puVar9 + 0x42) =
                 CONCAT11((char)((ushort)*(undefined2 *)(in_EAX + 0xf) >> 8) + '\x02',
                          (char)*(undefined2 *)(in_EAX + 0xf)) - ((ushort)DAT_002e8bf6 & 0x3ff);
            uVar6 = uVar7 >> 0xd;
            uVar4 = *(undefined2 *)(in_EAX + 0x11);
            DAT_002e8bf6._0_2_ = (ushort)uVar6;
            puVar11 = (undefined4 *)(puVar9 + -4);
            *(undefined4 *)(puVar9 + -4) = 0xffffffff;
            *(ushort *)(puVar9 + 0x44) =
                 CONCAT11((char)((ushort)uVar4 >> 8) + '\x02',(char)uVar4) -
                 ((ushort)DAT_002e8bf6 & 0x3ff);
            iVar5 = iVar5 + 1;
            *(undefined4 *)(puVar9 + -8) = 0xe2064;
            DAT_002e8bf6 = uVar6 | uVar7 * 0x80000;
            FUN_00043ac3();
            puVar10 = (undefined4 *)(puVar9 + -4);
          } while (iVar5 < 10);
          *(undefined4 *)(puVar9 + -8) = 0xe2074;
          FUN_00025cf7();
        }
        else if (bVar1 == 0xb) {
          *(ushort *)(in_EAX + 0x52) = *(short *)(in_EAX + 0x52) + 0x71U & 0x7ff;
        }
      }
    }
    else if (bVar1 < 0x10) {
LAB_000e23ed:
      puVar11[-1] = 0xe23f4;
      iVar5 = FUN_0006d4df();
      if (iVar5 != 0) {
        *(undefined1 *)(puVar11 + 0x15) = 1;
      }
    }
    else if (bVar1 < 0x13) {
      if (bVar1 < 0x11) {
        puVar11[-1] = 0xe23bd;
        FUN_00025780();
        puVar11[-1] = 0xe23c4;
        FUN_0002684f();
      }
      else if (bVar1 == 0x12) {
        puVar11[-1] = 0xe23dc;
        FUN_0002649e();
      }
    }
    else if (bVar1 < 0x14) {
      puVar11[-1] = 0xe23e8;
      FUN_0002649f();
    }
    else if (bVar1 < 0x18) {
      if (bVar1 == 0x14) goto LAB_000e23ed;
    }
    else if (bVar1 < 0x19) {
      puVar11[-1] = 0xe23d0;
      FUN_000266af();
    }
    else if ((bVar1 == 0x1d) && ((DAT_002e8bee - *(int *)(in_EAX + 9)) % 0x10 == 0)) {
      *(undefined1 *)(in_EAX + 0x19) = 5;
      puVar11[-1] = 0xe242e;
      FUN_00026795();
      if (*(short *)(in_EAX + 0x17) != 0) {
        puVar11[-1] = 0xe245d;
        FUN_000250ef();
        puVar11[-1] = 0xe247e;
        FUN_00081c10();
      }
    }
    if (*(char *)((int)puVar11 + 0x54) == '\0') {
      *(undefined4 *)((int)puVar11 + -4) = 0xe2513;
      uVar8 = FUN_000b41d8();
      return CONCAT44(*(undefined4 *)((int)puVar11 + 100),uVar8);
    }
  }
  if (*(char *)((int)puVar11 + 0x54) == '\0') {
    return (ulonglong)*(uint *)((int)puVar11 + 100) << 0x20;
  }
  bVar12 = *(byte *)(in_EAX + 0x1a);
  if (bVar12 < 0xf) {
    if (bVar12 < 4) goto LAB_000e25ae;
    if (4 < bVar12) {
      if (bVar12 == 0xb) {
        *(undefined4 *)((int)puVar11 + -4) = 0xe2531;
        FUN_00024998();
        *(undefined4 *)((int)puVar11 + -4) = 0xe2542;
        FUN_00024998();
        *(uint *)((int)puVar11 + -4) = (uint)*(byte *)(in_EAX + 0x16);
        *(undefined4 *)((int)puVar11 + -8) = 0xe255d;
        FUN_0002585f();
        puVar11 = (undefined4 *)((int)puVar11 + -4);
      }
      goto LAB_000e25ae;
    }
  }
  else {
    if (bVar12 < 0x10) {
      *(undefined4 *)((int)puVar11 + -4) = 0xe258b;
      FUN_000263c9();
      goto LAB_000e25ae;
    }
    if ((0x10 < bVar12) && (bVar12 != 0x18)) goto LAB_000e25ae;
  }
  *(undefined4 *)((int)puVar11 + -4) = 0xe257d;
  FUN_000627b5();
LAB_000e25ae:
  *(undefined4 *)((int)puVar11 + -4) = 0xe25b7;
  FUN_00072af4();
  return (ulonglong)*(uint *)((int)puVar11 + 100) << 0x20;
}

/******************************************************************************
 * Function : sub_0e25c4 (Ghidra: FUN_000e25c4)
 * Prototype: undefined8 sub_0e25c4(void);
 * Address  : 0xe25c4 (Size: 259 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x72af4, 0x7df48, 0xabe58, 0xb2398, 0xb3afc, 0xb444c
 ******************************************************************************/
undefined8 FUN_000e25c4(void)

{
  byte bVar1;
  byte *in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  if (*(int *)(&DAT_0018dbed + (uint)in_EAX[0x1a] * 4) != 0) {
    iVar2 = (**(code **)(&DAT_0018dbed + (uint)in_EAX[0x1a] * 4))();
    if (iVar2 < 1) goto LAB_000e26c3;
  }
  if (*(int *)(&DAT_0018dbd9 + (uint)in_EAX[7] * 4) != 0) {
    iVar2 = (**(code **)(&DAT_0018dbd9 + (uint)in_EAX[7] * 4))();
    if (iVar2 < 1) goto LAB_000e26c3;
  }
  bVar1 = in_EAX[0x25];
  in_EAX[0x25] = bVar1 & 0xfc;
  if ((bVar1 & 0x40) == 0) {
    iVar2 = FUN_0007df48();
    if (iVar2 != 0) {
      iVar2 = FUN_000b3afc();
      if (iVar2 == 0) {
        iVar2 = FUN_000b2398();
        if (iVar2 == 0x27) {
          in_EAX[0x25] = in_EAX[0x25] | 1;
        }
      }
      else {
        in_EAX[0x25] = in_EAX[0x25] | 2;
        if ((((&DAT_0018b918)[(uint)in_EAX[0x1a] * 0x16] != '\0') && ((in_EAX[1] & 1) == 0)) &&
           ((*in_EAX & 0x80) == 0)) {
          if (in_EAX[0x1a] == 10) {
            FUN_000abe58();
          }
          else {
            FUN_00072af4();
          }
          return CONCAT44(in_EDX,0xffffffff);
        }
      }
    }
  }
  if ((in_EAX[0x25] & 0x40) == 0) {
    uVar3 = FUN_000b444c();
    return CONCAT44(in_EDX,uVar3);
  }
  iVar2 = 1;
LAB_000e26c3:
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : dk_illegal_effect_element_bounce_0e26dc (Ghidra: FUN_000e26dc)
 * Prototype: undefined8 dk_illegal_effect_element_bounce_0e26dc(void);
 * Address  : 0xe26dc (Size: 822 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:2559; update.cpp:2001 ("Invalid effect element move type!")
 * Naming   : String 'Illegal effect element bounce life: %d'
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x444a9, 0x44f33, 0x72af4, 0x7df48, 0xb2398, 0xb45b4, 0xddaf0, 0xe66ec, 0xe7714
 * Strings  :
 *   - 0x16caa8: "update.cpp"
 *   - 0x16cad5: "update.cpp"
 *   - 0x16ca81: "Illegal effect element bounce life: %d"
 *   - 0x16cab3: "Invalid effect element move type!"
 ******************************************************************************/
undefined8 FUN_000e26dc(void)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  int in_EAX;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 in_EDX;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0x4e;
  if (*(int *)(in_EAX + 0x5c) >> 0x10 < 1) {
    if (*(short *)(&DAT_0018996b + iVar1) == 0) {
      FUN_00072af4();
    }
    else {
      FUN_00044f33();
    }
    uVar4 = 0;
    goto LAB_000e28a4;
  }
  *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + -1;
  if (((&DAT_00189946)[iVar1] == '\0') &&
     (*(int *)(in_EAX + 0xf) >> 0x10 <= (int)(uint)*(ushort *)(in_EAX + 0x60))) {
    *(undefined2 *)(in_EAX + 0x3e) = 0;
  }
  if ((&DAT_00189949)[iVar1] != '\0') {
    *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xfc;
    iVar5 = FUN_0007df48();
    in_EAX = extraout_ECX;
    if (iVar5 != 0) {
      uVar6 = FUN_000b2398();
      in_EAX = extraout_ECX_00;
      if (uVar6 == 0x27) {
        *(byte *)(extraout_ECX_00 + 0x25) = *(byte *)(extraout_ECX_00 + 0x25) | 1;
      }
      else if ((uVar6 & 0xfffffffe) == 0x28) {
        *(byte *)(extraout_ECX_00 + 0x25) = *(byte *)(extraout_ECX_00 + 0x25) | 2;
      }
    }
  }
  if ((*(ushort *)(&DAT_00189954 + iVar1) != 0) &&
     ((uint)(*(int *)(in_EAX + 9) - DAT_002e8bee) % (uint)*(ushort *)(&DAT_00189954 + iVar1) == 0))
  {
    FUN_000444a9();
    in_EAX = extraout_ECX_01;
  }
  switch((&DAT_00189935)[iVar1]) {
  case 2:
    *(short *)(in_EAX + 0x2c) = (short)(((*(int *)(in_EAX + 0x2a) >> 0x10) * 2) / 3);
    *(short *)(in_EAX + 0x2e) = (short)(((*(int *)(in_EAX + 0x2c) >> 0x10) * 2) / 3);
    iVar5 = *(int *)(in_EAX + 0x2e) >> 0x10;
    uVar2 = (undefined2)((iVar5 * 2) / 3);
    if (iVar5 < 0x21) {
      if (iVar5 < 0x11) {
        if (iVar5 < -0x10) {
          *(undefined2 *)(in_EAX + 0x30) = uVar2;
          FUN_000b45b4();
          break;
        }
        *(short *)(in_EAX + 0x30) = *(short *)(in_EAX + 0x30) + 0x10;
        if (0x10 < *(int *)(in_EAX + 0x2e) >> 0x10) goto LAB_000e2883;
      }
      else {
        *(short *)(in_EAX + 0x30) = *(short *)(in_EAX + 0x30) + -0x10;
        if (*(int *)(in_EAX + 0x2e) >> 0x10 < 0x10) {
LAB_000e2883:
          *(undefined2 *)(in_EAX + 0x30) = 0x10;
        }
      }
    }
    else {
      *(undefined2 *)(in_EAX + 0x30) = uVar2;
    }
    FUN_000b45b4();
    break;
  case 3:
    *(undefined2 *)(in_EAX + 0x30) = 0x20;
    FUN_000b45b4();
    break;
  case 4:
    iVar5 = *(int *)(in_EAX + 0x5c) >> 0x10;
    if ((iVar5 < 0) || (0xf < iVar5)) {
      FUN_000e7714(&DAT_0019cbac,s_Illegal_effect_element_bounce_li_0016ca81,
                   *(int *)(in_EAX + 0x5c) >> 0x10);
      FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2559, g_log_buf) */
    }
    else {
      *(undefined2 *)(in_EAX + 0x30) = *(undefined2 *)(&DAT_00192788 + iVar5 * 4);
    }
  case 1:
    FUN_000b45b4();
    break;
  case 5:
    break;
  default:
    FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2001, "Invalid effect element move type!") */
  }
  if (((&DAT_00189936)[iVar1] != '\0') && ((&DAT_00189936)[iVar1] == '\x01')) {
    uVar3 = FUN_000e66ec();
    uVar6 = (uint)uVar3 % 0x800 - 0x200 & 0x7ff;
    if (0x400 < uVar6) {
      uVar6 = uVar6 - 0x400;
    }
    uVar6 = (int)((uVar6 + ((int)uVar6 >> 0x1f) * -0x80) - (uint)(((int)uVar6 >> 0x1f) << 6 < 0)) >>
            7;
    uVar3 = FUN_000e66ec();
    *(undefined2 *)(extraout_ECX_02 + 0x3e) = 0;
    *(char *)(extraout_ECX_02 + 0x48) = (char)uVar6;
    *(ushort *)(extraout_ECX_02 + 0x52) = uVar3 % 0x800;
    *(uint *)(extraout_ECX_02 + 0x40) = (uVar6 & 0xff) << 8;
    return CONCAT44(in_EDX,1);
  }
  uVar4 = 1;
LAB_000e28a4:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0e2a14 (Ghidra: FUN_000e2a14)
 * Prototype: longlong sub_0e2a14(void);
 * Address  : 0xe2a14 (Size: 579 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 10 -> 0x24998, 0x399d8, 0x44b13, 0x72af4, 0x81e5c, 0x8ccec, 0xb2398, 0xb3afc, 0xb4894, 0xdd2f0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_000e2a14(void)

{
  byte bVar1;
  char cVar2;
  byte *in_EAX;
  int iVar3;
  uint in_EDX;
  undefined4 *puVar4;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 local_1e;
  short sStack_1c;
  
  puVar4 = (undefined4 *)&uStack_20;
  if ((*in_EAX & 0x80) == 0) {
    if (in_EAX[7] == 1) {
      uStack_20 = (undefined2)*(undefined4 *)(in_EAX + 0xd);
      local_1e = (undefined2)((uint)*(undefined4 *)(in_EAX + 0xd) >> 0x10);
      sStack_1c = *(short *)(in_EAX + 0x11) +
                  (short)((int)((uint)*(ushort *)(in_EAX + 0x58) * 3) >> 2);
      if (DAT_002ee9b9 == 3) {
        bVar1 = in_EAX[0x1a];
        if (((&DAT_002e91e7)[(uint)bVar1 * 0xe6] == '\0') || ((bVar1 != 0 && (bVar1 < 0xe)))) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
      }
      else {
        cVar2 = (&DAT_002e91e7)[(uint)in_EAX[0x1a] * 0xe6];
      }
      if (cVar2 != '\0') {
        uStack_24 = 0xe2ac9;
        FUN_00024998();
      }
      if (*(short *)(in_EAX + 0x5e) != 0) {
        *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + -1;
      }
      puVar4 = (undefined4 *)&uStack_20;
      if (*(int *)(in_EAX + 0x5c) >> 0x10 == 0) {
        uStack_24 = 2;
        uStack_2c = 1;
        in_EAX[7] = 2;
        iStack_28 = *(int *)(in_EAX + 0x5c) >> 0x10;
        FUN_000dd2f0();
        FUN_0008ccec();
        puVar4 = &uStack_2c;
      }
    }
    else {
      uStack_24 = 0xe2b81;
      iVar3 = FUN_00081e5c();
      puVar4 = (undefined4 *)&uStack_20;
      if (iVar3 != 0) {
        if (in_EAX[0x14] == 0) {
          puVar4 = (undefined4 *)&uStack_20;
          if ((uint)(_DAT_002eb9fa >> 0x10) < (uint)(DAT_002e8bee - *(int *)(in_EAX + 9))) {
            uStack_24 = 0xe2be7;
            FUN_00072af4();
            return (ulonglong)in_EDX << 0x20;
          }
        }
        else {
          if (*(short *)(in_EAX + 0x5e) != 0) {
            *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + -1;
          }
          puVar4 = (undefined4 *)&uStack_20;
          if (*(short *)(in_EAX + 0x5e) == 0) {
            uStack_24 = 0xe2bad;
            FUN_000399d8();
            uStack_24 = 0xe2bb6;
            FUN_00072af4();
            return (ulonglong)in_EDX << 0x20;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0xe2b1f;
  iVar3 = FUN_000b2398();
  if (iVar3 == 0x27) {
    in_EAX[0x25] = in_EAX[0x25] | 1;
  }
  if ((*in_EAX & 0x20) == 0) {
    *(undefined4 *)((int)puVar4 + -4) = 0xe2b49;
    iVar3 = FUN_000b3afc();
    if (((iVar3 != 0) && ((in_EAX[1] & 1) == 0)) && ((*in_EAX & 0x80) == 0)) {
      *(undefined4 *)((int)puVar4 + -4) = 0xe2b6e;
      FUN_00072af4();
      return (ulonglong)*(uint *)((int)puVar4 + 0x14) << 0x20;
    }
    if ((*(byte *)((int)&DAT_00279203 + ((uint)in_EAX[0x10] * 0x100 + (uint)in_EAX[0xe]) * 5) & 0x40
        ) != 0) {
      *(undefined4 *)((int)puVar4 + -4) = 0xe2c1c;
      FUN_00072af4();
      *(uint *)((int)puVar4 + -4) = (uint)in_EAX[0x13];
      *(undefined4 *)((int)puVar4 + -8) = 0xe2c35;
      FUN_00044b13();
      return (ulonglong)*(uint *)((int)puVar4 + 0x10) << 0x20;
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0xe2c48;
  FUN_000b4894();
  return CONCAT44(*(undefined4 *)((int)puVar4 + 0x14),1);
}

/******************************************************************************
 * Function : sub_0e2c58 (Ghidra: FUN_000e2c58)
 * Prototype: longlong sub_0e2c58(void);
 * Address  : 0xe2c58 (Size: 98 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x72af4, 0x75ba4, 0x7691e, 0xb3afc
 ******************************************************************************/
longlong FUN_000e2c58(void)

{
  byte *in_EAX;
  int iVar1;
  uint in_EDX;
  
  if (*(int *)(in_EAX + 0x5c) >> 0x10 < 0) {
    FUN_00072af4();
    return (ulonglong)in_EDX << 0x20;
  }
  iVar1 = FUN_0007691e();
  if (iVar1 != 0) {
    FUN_00075ba4();
  }
  iVar1 = FUN_000b3afc();
  if (((iVar1 != 0) && ((in_EAX[1] & 1) == 0)) && ((*in_EAX & 0x80) == 0)) {
    FUN_00072af4();
    return (ulonglong)in_EDX << 0x20;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_go_first_person_without_0e2cd0 (Ghidra: FUN_000e2cd0)
 * Prototype: void dk_go_first_person_without_0e2cd0(void);
 * Address  : 0xe2cd0 (Size: 1236 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:2207 ("Cannot go first person without controlling creature")
 * Naming   : String 'Cannot go first person without controlling creature'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x77b8d, 0x81dd8, 0xddaf0
 * Strings  :
 *   - 0x16c98c: "update.cpp"
 *   - 0x16c958: "Cannot go first person without controlling creature"
 ******************************************************************************/
void FUN_000e2cd0(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar8;
  int iVar9;
  int local_24;
  
  local_24 = 0;
  do {
    if ((((&DAT_0019d0c8)[local_24] & 1) != 0) && (((&DAT_0019d0c8)[local_24] & 0x40) == 0)) {
      FUN_00077b8d();
      puVar2 = *(undefined2 **)((int)&DAT_0019d100 + local_24);
      switch(*(undefined1 *)(puVar2 + 3)) {
      case 1:
        if (*(ushort *)((int)&DAT_0019d0f7 + local_24) == 0) {
          if ((&DAT_0019d578)[local_24] != '\v') {
            FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2207, "Cannot go first person without controlling creature") */
          }
        }
        else {
          iVar6 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + local_24)];
          cVar3 = FUN_00081dd8();
          if (*(char *)(iVar6 + 0x1f) == '\x05') {
            iVar7 = (&DAT_001b0a00)[*(ushort *)(iVar6 + 100)];
            if ((*(int *)(iVar7 + 0xc6) >> 0x10 == 0) ||
               ((int)(uint)*(ushort *)(iVar6 + 0x60) < *(int *)(iVar6 + 0xf) >> 0x10)) {
              *(undefined1 *)(iVar7 + 0x1e9) = 0;
            }
            else {
              *(char *)(iVar7 + 0x1e9) = cVar3 << 4;
            }
            iVar9 = (uint)*(ushort *)(iVar6 + 0xd) +
                    ((&DAT_001927e0)[*(ushort *)(iVar6 + 0x52)] * -0x5a >> 0x10);
            iVar5 = (uint)*(ushort *)(iVar6 + 0xf) +
                    (-((int)(&PTR_LAB_00192fe0)[*(ushort *)(iVar6 + 0x52)] * -0x5a >> 8) >> 8);
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xffff < iVar9) {
              iVar9 = 0xffff;
            }
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            else if (0xffff < iVar5) {
              iVar5 = 0xffff;
            }
            if ((*(byte *)(iVar6 + 0x25) & 0x20) == 0) {
              *extraout_ECX = (short)iVar9;
              extraout_ECX[1] = (short)iVar5;
              *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar6 + 0x52);
              uVar1 = *(ushort *)(iVar6 + 0x54);
              *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
              *(uint *)((int)extraout_ECX + 0xb) = (uint)uVar1;
              uVar8 = (uint)*(ushort *)(extraout_EDX_00 + 0x55);
              iVar5 = *(int *)(iVar6 + 0xf) >> 0x10;
              iVar9 = *(int *)(extraout_ECX + 1) >> 0x10;
              sVar4 = (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
              if (iVar9 < (int)(iVar5 + uVar8)) {
                extraout_ECX[2] =
                     (short)((int)((uVar8 + iVar5 + (*(int *)(iVar7 + 0x1e6) >> 0x18)) - iVar9) / 2)
                     + sVar4;
                if ((int)((*(int *)(iVar6 + 0xf) >> 0x10) + (*(int *)(iVar7 + 0x1e6) >> 0x18) +
                         (uint)*(ushort *)(extraout_EDX_00 + 0x55)) <
                    *(int *)(extraout_ECX + 1) >> 0x10) {
LAB_000e2fa4:
                  extraout_ECX[2] =
                       *(short *)(iVar6 + 0x11) + (short)*(char *)(iVar7 + 0x1e9) +
                       *(short *)(extraout_EDX_00 + 0x55);
                }
              }
              else {
                extraout_ECX[2] =
                     (short)((int)((uVar8 + iVar5 + (*(int *)(iVar7 + 0x1e6) >> 0x18)) - iVar9) / 2)
                     + sVar4;
                if (*(int *)(extraout_ECX + 1) >> 0x10 <
                    (int)((*(int *)(iVar6 + 0xf) >> 0x10) + (*(int *)(iVar7 + 0x1e6) >> 0x18) +
                         (uint)*(ushort *)(extraout_EDX_00 + 0x55))) goto LAB_000e2fa4;
              }
            }
            else {
              *extraout_ECX = (short)iVar9;
              extraout_ECX[1] = (short)iVar5;
              extraout_ECX[2] = *(undefined2 *)(iVar6 + 0x11);
              extraout_ECX[2] = extraout_ECX[2] + *(short *)(extraout_EDX_00 + 0x55);
              *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar6 + 0x52);
              *(uint *)((int)extraout_ECX + 0xb) = (uint)*(ushort *)(iVar6 + 0x54);
              *(int *)((int)extraout_ECX + 0xf) = *(int *)(iVar7 + 0xca) >> 0x10;
            }
            iVar6 = (uint)*(byte *)(iVar6 + 0x10) * 0x100 + (uint)*(byte *)(iVar6 + 0xe);
            iVar6 = (int)(((*(uint *)((int)&DAT_00279203 + iVar6 * 5 + 1) & 0xfffffff) >> 0x18) *
                          0x100 + ((*(uint *)((int)&DAT_00279203 + (iVar6 + 1) * 5 + 1) & 0xfffffff)
                                  >> 0x18) * 0x100 +
                          ((*(uint *)((int)&DAT_00279203 + (iVar6 + 0x100) * 5 + 1) & 0xfffffff) >>
                          0x18) * 0x100 +
                         ((*(uint *)((int)&DAT_00279203 + (iVar6 + 0x101) * 5 + 1) & 0xfffffff) >>
                         0x18) * 0x100) >> 2;
            if (iVar6 + -0x40 < *(int *)(extraout_ECX + 1) >> 0x10) {
              extraout_ECX[2] = (short)iVar6 + -0x40;
            }
          }
          else if (*(char *)(iVar6 + 0x1a) == '\n') {
            *extraout_ECX = *(undefined2 *)(iVar6 + 0xd);
            extraout_ECX[1] = *(undefined2 *)(iVar6 + 0xf);
            extraout_ECX[2] = *(short *)(iVar6 + 0x11) + 0xf0;
            *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar6 + 0x52);
            uVar1 = *(ushort *)(iVar6 + 0x54);
            *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
            *(uint *)((int)extraout_ECX + 0xb) = (uint)uVar1;
            iVar7 = *(int *)(iVar6 + 0x13) >> 0x18;
            *(undefined2 *)(iVar6 + 0x54) = 0;
            if (iVar7 != 0) {
              cVar3 = (char)((uint)*(int *)(iVar6 + 0x13) >> 0x18);
              if (iVar7 < 4) {
                *(short *)(iVar6 + 0x54) = cVar3 * -0x74 + 0x800;
              }
              else {
                *(short *)(iVar6 + 0x54) = (cVar3 + -3) * 0x74 + 0x6a4;
              }
            }
          }
          else {
            *extraout_ECX = *(undefined2 *)(iVar6 + 0xd);
            extraout_ECX[1] = *(undefined2 *)(iVar6 + 0xf);
            *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar6 + 0x52);
            uVar1 = *(ushort *)(iVar6 + 0x54);
            *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
            *(uint *)((int)extraout_ECX + 0xb) = (uint)uVar1;
            iVar7 = *(int *)(iVar6 + 0xf) >> 0x10;
            iVar5 = *(int *)(extraout_ECX + 1) >> 0x10;
            sVar4 = (short)(((iVar7 + 0x40) - iVar5) / 2) +
                    (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
            if (iVar5 < iVar7 + 0x20) {
              extraout_ECX[2] = sVar4;
              if ((*(int *)(iVar6 + 0xf) >> 0x10) + 0x40 < *(int *)(extraout_ECX + 1) >> 0x10) {
                extraout_ECX[2] = *(short *)(iVar6 + 0x11) + 0x40;
              }
            }
            else {
              extraout_ECX[2] = sVar4;
              if (*(int *)(extraout_ECX + 1) >> 0x10 < (*(int *)(iVar6 + 0xf) >> 0x10) + 0x40) {
                extraout_ECX[2] = *(short *)(iVar6 + 0x11) + 0x40;
              }
            }
          }
        }
        break;
      case 2:
        *(undefined2 *)(&DAT_0019d182 + local_24) = *puVar2;
        *(undefined2 *)(&DAT_0019d184 + local_24) =
             *(undefined2 *)(*(int *)((int)&DAT_0019d100 + local_24) + 2);
        break;
      case 5:
        *(undefined2 *)(&DAT_0019d104 + local_24) = *puVar2;
        *(undefined2 *)(&DAT_0019d106 + local_24) =
             *(undefined2 *)(*(int *)((int)&DAT_0019d100 + local_24) + 2);
      }
      if (*(int *)(extraout_EDX + 0xea0) != 0) {
        *(int *)(extraout_EDX + 0xea0) = *(int *)(extraout_EDX + 0xea0) + -1;
      }
      if (0 < *(int *)(extraout_EDX + 0xea4)) {
        *(int *)(extraout_EDX + 0xea4) = *(int *)(extraout_EDX + 0xea4) + -0x20;
      }
    }
    local_24 = local_24 + 0x4ef;
    if (local_24 == 0x18ab) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : dk_go_first_person_without_0e31b8 (Ghidra: FUN_000e31b8)
 * Prototype: void dk_go_first_person_without_0e31b8(void);
 * Address  : 0xe31b8 (Size: 1234 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:2207 ("Cannot go first person without controlling creature")
 * Naming   : String 'Cannot go first person without controlling creature'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x77b8d, 0x81dd8, 0xddaf0
 * Strings  :
 *   - 0x16c98c: "update.cpp"
 *   - 0x16c958: "Cannot go first person without controlling creature"
 ******************************************************************************/
void FUN_000e31b8(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  char cVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 *extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar8;
  int iVar9;
  
  FUN_00077b8d();
  puVar2 = *(undefined2 **)(in_EAX + 0x38);
  switch(*(undefined1 *)(puVar2 + 3)) {
  case 1:
    if (*(ushort *)(in_EAX + 0x2f) == 0) {
      if (*(char *)(in_EAX + 0x4b0) != '\v') {
        FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2207, "Cannot go first person without controlling creature") */
      }
      break;
    }
    iVar9 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x2f)];
    cVar3 = FUN_00081dd8();
    if (*(char *)(iVar9 + 0x1f) != '\x05') {
      if (*(char *)(iVar9 + 0x1a) == '\n') {
        *extraout_ECX = *(undefined2 *)(iVar9 + 0xd);
        extraout_ECX[1] = *(undefined2 *)(iVar9 + 0xf);
        extraout_ECX[2] = *(short *)(iVar9 + 0x11) + 0xf0;
        *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar9 + 0x52);
        uVar1 = *(ushort *)(iVar9 + 0x54);
        *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
        *(uint *)((int)extraout_ECX + 0xb) = (uint)uVar1;
        iVar7 = *(int *)(iVar9 + 0x13) >> 0x18;
        *(undefined2 *)(iVar9 + 0x54) = 0;
        if (iVar7 != 0) {
          cVar3 = (char)((uint)*(int *)(iVar9 + 0x13) >> 0x18);
          if (iVar7 < 4) {
            *(short *)(iVar9 + 0x54) = cVar3 * -0x74 + 0x800;
          }
          else {
            *(short *)(iVar9 + 0x54) = (cVar3 + -3) * 0x74 + 0x6a4;
          }
        }
      }
      else {
        *extraout_ECX = *(undefined2 *)(iVar9 + 0xd);
        extraout_ECX[1] = *(undefined2 *)(iVar9 + 0xf);
        *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar9 + 0x52);
        uVar1 = *(ushort *)(iVar9 + 0x54);
        *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
        *(uint *)((int)extraout_ECX + 0xb) = (uint)uVar1;
        iVar7 = *(int *)(iVar9 + 0xf) >> 0x10;
        iVar5 = *(int *)(extraout_ECX + 1) >> 0x10;
        sVar4 = (short)(((iVar7 + 0x40) - iVar5) / 2) +
                (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
        if (iVar5 < iVar7 + 0x20) {
          extraout_ECX[2] = sVar4;
          if ((*(int *)(iVar9 + 0xf) >> 0x10) + 0x40 < *(int *)(extraout_ECX + 1) >> 0x10) {
            extraout_ECX[2] = *(short *)(iVar9 + 0x11) + 0x40;
          }
        }
        else {
          extraout_ECX[2] = sVar4;
          if (*(int *)(extraout_ECX + 1) >> 0x10 < (*(int *)(iVar9 + 0xf) >> 0x10) + 0x40) {
            extraout_ECX[2] = *(short *)(iVar9 + 0x11) + 0x40;
          }
        }
      }
      break;
    }
    iVar7 = (&DAT_001b0a00)[*(ushort *)(iVar9 + 100)];
    if ((*(int *)(iVar7 + 0xc6) >> 0x10 == 0) ||
       ((int)(uint)*(ushort *)(iVar9 + 0x60) < *(int *)(iVar9 + 0xf) >> 0x10)) {
      *(undefined1 *)(iVar7 + 0x1e9) = 0;
    }
    else {
      *(char *)(iVar7 + 0x1e9) = cVar3 << 4;
    }
    iVar5 = (uint)*(ushort *)(iVar9 + 0xd) +
            ((&DAT_001927e0)[*(ushort *)(iVar9 + 0x52)] * -0x5a >> 0x10);
    iVar8 = (uint)*(ushort *)(iVar9 + 0xf) +
            (-((int)(&PTR_LAB_00192fe0)[*(ushort *)(iVar9 + 0x52)] * -0x5a >> 8) >> 8);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (0xffff < iVar5) {
      iVar5 = 0xffff;
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    if ((*(byte *)(iVar9 + 0x25) & 0x20) == 0) {
      *extraout_ECX = (short)iVar5;
      extraout_ECX[1] = (short)iVar8;
      *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar9 + 0x52);
      uVar1 = *(ushort *)(iVar9 + 0x54);
      *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
      *(uint *)((int)extraout_ECX + 0xb) = (uint)uVar1;
      iVar8 = *(int *)(iVar9 + 0xf) >> 0x10;
      uVar6 = (uint)*(ushort *)(extraout_EDX_00 + 0x55);
      iVar5 = *(int *)(extraout_ECX + 1) >> 0x10;
      sVar4 = (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
      if (iVar5 < (int)(iVar8 + uVar6)) {
        extraout_ECX[2] =
             (short)((int)((iVar8 + (*(int *)(iVar7 + 0x1e6) >> 0x18) + uVar6) - iVar5) / 2) + sVar4
        ;
        if ((int)((uint)*(ushort *)(extraout_EDX_00 + 0x55) +
                 (*(int *)(iVar9 + 0xf) >> 0x10) + (*(int *)(iVar7 + 0x1e6) >> 0x18)) <
            *(int *)(extraout_ECX + 1) >> 0x10) {
LAB_000e3464:
          extraout_ECX[2] =
               *(short *)(iVar9 + 0x11) + (short)*(char *)(iVar7 + 0x1e9) +
               *(short *)(extraout_EDX_00 + 0x55);
        }
      }
      else {
        extraout_ECX[2] =
             (short)((int)((iVar8 + (*(int *)(iVar7 + 0x1e6) >> 0x18) + uVar6) - iVar5) / 2) + sVar4
        ;
        if (*(int *)(extraout_ECX + 1) >> 0x10 <
            (int)((uint)*(ushort *)(extraout_EDX_00 + 0x55) +
                 (*(int *)(iVar9 + 0xf) >> 0x10) + (*(int *)(iVar7 + 0x1e6) >> 0x18)))
        goto LAB_000e3464;
      }
    }
    else {
      *extraout_ECX = (short)iVar5;
      extraout_ECX[1] = (short)iVar8;
      extraout_ECX[2] = *(undefined2 *)(iVar9 + 0x11);
      extraout_ECX[2] = extraout_ECX[2] + *(short *)(extraout_EDX_00 + 0x55);
      *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(iVar9 + 0x52);
      *(uint *)((int)extraout_ECX + 0xb) = (uint)*(ushort *)(iVar9 + 0x54);
      *(int *)((int)extraout_ECX + 0xf) = *(int *)(iVar7 + 0xca) >> 0x10;
    }
    iVar9 = (uint)*(byte *)(iVar9 + 0xe) + (uint)*(byte *)(iVar9 + 0x10) * 0x100;
    iVar9 = (int)(((*(uint *)((int)&DAT_00279203 + (iVar9 + 1) * 5 + 1) & 0xfffffff) >> 0x18) *
                  0x100 + ((*(uint *)((int)&DAT_00279203 + iVar9 * 5 + 1) & 0xfffffff) >> 0x18) *
                          0x100 +
                  ((*(uint *)((int)&DAT_00279203 + (iVar9 + 0x100) * 5 + 1) & 0xfffffff) >> 0x18) *
                  0x100 + ((*(uint *)(&DAT_00279709 + iVar9 * 5) & 0xfffffff) >> 0x18) * 0x100) >> 2
    ;
    if (iVar9 + -0x40 < *(int *)(extraout_ECX + 1) >> 0x10) {
      extraout_ECX[2] = (short)iVar9 + -0x40;
    }
    break;
  case 2:
    *(undefined2 *)(in_EAX + 0xba) = *puVar2;
    *(undefined2 *)(in_EAX + 0xbc) = *(undefined2 *)(*(int *)(in_EAX + 0x38) + 2);
    break;
  case 5:
    *(undefined2 *)(in_EAX + 0x3c) = *puVar2;
    *(undefined2 *)(in_EAX + 0x3e) = *(undefined2 *)(*(int *)(in_EAX + 0x38) + 2);
  }
  if (*(int *)(extraout_EDX + 0xea0) != 0) {
    *(int *)(extraout_EDX + 0xea0) = *(int *)(extraout_EDX + 0xea0) + -1;
  }
  if (0 < *(int *)(extraout_EDX + 0xea4)) {
    *(int *)(extraout_EDX + 0xea4) = *(int *)(extraout_EDX + 0xea4) + -0x20;
  }
  return;
}

/******************************************************************************
 * Function : sub_0e3a8c (Ghidra: FUN_000e3a8c)
 * Prototype: undefined8 sub_0e3a8c(void);
 * Address  : 0xe3a8c (Size: 470 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x6e61e, 0x6f72b, 0x6f865, 0xdc440, 0xe6a10
 ******************************************************************************/
undefined8 FUN_000e3a8c(void)

{
  byte bVar1;
  undefined4 *in_EAX;
  int iVar2;
  byte *pbVar3;
  byte *extraout_ECX;
  byte *pbVar4;
  undefined4 in_EDX;
  int iVar5;
  int extraout_EDX;
  int aiStack_30 [5];
  undefined2 uStack_1c;
  
  aiStack_30[1] = DAT_001927c8;
  aiStack_30[2] = DAT_001927cc;
  aiStack_30[3] = DAT_001927d0;
  aiStack_30[4] = *in_EAX;
  uStack_1c = *(undefined2 *)(in_EAX + 1);
  if (DAT_003d97b4 == 0) {
    aiStack_30[0] = 0xe3ac5;
    FUN_000e6a10();
    pbVar4 = (&DAT_001ae9fc)[DAT_002e6eb6];
    if ((&DAT_001ae9fc)[DAT_002e6eb6] != DAT_001ae9fc) {
      do {
        pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar4 + 0x67)];
        bVar1 = pbVar4[1];
        pbVar4[1] = bVar1 & 0xdf;
        if ((((*pbVar4 & 0x10) == 0) && ((bVar1 & 2) == 0)) &&
           (*(int *)(&DAT_001880f4 + (uint)pbVar4[0x1a] * 0x58) != 0)) {
          iVar5 = (&DAT_001b0a00)[*(ushort *)(pbVar4 + 100)];
          aiStack_30[0] = 0xe3b3c;
          iVar2 = FUN_000dc440();
          pbVar3 = extraout_ECX;
          if ((iVar2 < aiStack_30[1]) &&
             (((*(short *)(iVar5 + 9) != 0 &&
               (*(int *)(pbVar4 + 0xf) >> 0x10 <= (int)(uint)*(ushort *)(pbVar4 + 0x60))) ||
              ((pbVar4[0x25] & 0x20) != 0)))) {
            iVar5 = 8;
            do {
              *(undefined4 *)((int)&DAT_003d97b8 + iVar5) =
                   *(undefined4 *)((int)&DAT_003d97b4 + iVar5);
              *(undefined4 *)((int)aiStack_30 + iVar5 + 4) =
                   *(undefined4 *)((int)aiStack_30 + iVar5);
              iVar5 = iVar5 + -4;
            } while (iVar5 != 0);
            DAT_003d97b8 = (uint)*(ushort *)(pbVar4 + 0x1b);
            aiStack_30[1] = iVar2;
          }
        }
        pbVar4 = pbVar3;
      } while (pbVar3 != DAT_001ae9fc);
    }
  }
  iVar5 = 0;
  do {
    if (*(int *)((int)&DAT_003d97b8 + iVar5) == 0) break;
    if (*(char *)((int)(&DAT_001ae9fc)[*(int *)((int)&DAT_003d97b8 + iVar5)] + 0x1f) == '\x05') {
      pbVar4 = (byte *)((int)(&DAT_001ae9fc)[*(int *)((int)&DAT_003d97b8 + iVar5)] + 1);
      *pbVar4 = *pbVar4 | 0x20;
      aiStack_30[0] = 0xe3bba;
      FUN_0006e61e();
      iVar5 = extraout_EDX;
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0xc);
  if ((DAT_003d97b4 == 0) && (pbVar4 = (&DAT_001ae9fc)[DAT_002e6eb6], pbVar4 != DAT_001ae9fc)) {
    do {
      pbVar3 = (&DAT_001ae9fc)[*(ushort *)(pbVar4 + 0x67)];
      if ((pbVar4[0x1a] == 0x13) && (-1 < (char)(pbVar4[1] << 2))) {
        aiStack_30[0] = 0xe3c22;
        iVar5 = FUN_0006f865();
        if (iVar5 != 0) {
          aiStack_30[0] = 0xe3c34;
          FUN_0006f72b();
        }
      }
      pbVar4 = pbVar3;
    } while (pbVar3 != DAT_001ae9fc);
  }
  iVar5 = DAT_003d97b4 + 1;
  DAT_003d97b4 = iVar5 % 4;
  return CONCAT44(in_EDX,iVar5 / 4);
}

/******************************************************************************
 * Function : dk_illegal_effect_element_bounce_0e3db8 (Ghidra: FUN_000e3db8)
 * Prototype: void dk_illegal_effect_element_bounce_0e3db8(void);
 * Address  : 0xe3db8 (Size: 80 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:2559
 * Naming   : String 'Illegal effect element bounce life: %d'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16caa8: "update.cpp"
 *   - 0x16ca81: "Illegal effect element bounce life: %d"
 ******************************************************************************/
void FUN_000e3db8(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x5c) >> 0x10;
  if ((-1 < iVar1) && (iVar1 < 0x10)) {
    *(undefined2 *)(in_EAX + 0x30) = *(undefined2 *)(&DAT_00192788 + iVar1 * 4);
    return;
  }
  FUN_000e7714(&DAT_0019cbac,s_Illegal_effect_element_bounce_li_0016ca81,
               *(int *)(in_EAX + 0x5c) >> 0x10);
  FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2559, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : sub_0e3e08 (Ghidra: FUN_000e3e08)
 * Prototype: undefined8 sub_0e3e08(void);
 * Address  : 0xe3e08 (Size: 80 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x6f671, 0x6f69c, 0x6f6b8
 ******************************************************************************/
undefined8 FUN_000e3e08(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_EDX;
  int extraout_EDX;
  
  if (*(char *)(in_EAX + 0x66) != '\0') {
    iVar1 = FUN_0006f6b8();
    if (iVar1 == 0) {
      FUN_0006f69c();
    }
    else {
      FUN_0006f671();
      *(undefined1 *)(extraout_EDX + 0x66) = 0;
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_illegal_primary_target_type_0e3e78 (Ghidra: FUN_000e3e78)
 * Prototype: undefined2 dk_illegal_primary_target_type_0e3e78(void);
 * Address  : 0xe3e78 (Size: 639 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:2654 ("Illegal primary target type for shot")
 * Naming   : String 'Illegal primary target type for shot'
 * Callers  : 2 -> 0x5ec71, 0x5f049
 * Callees  : 4 -> 0x101c2, 0x10c1a, 0x10c5f, 0xddaf0
 * Strings  :
 *   - 0x16cb05: "update.cpp"
 *   - 0x16cae0: "Illegal primary target type for shot"
 ******************************************************************************/
undefined2 FUN_000e3e78(void)

{
  char cVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  undefined4 in_EDX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_2c;
  int local_28;
  int local_20;
  
  iVar3 = *(byte *)(in_EAX + 0xe) - 0x14;
  uVar2 = 0;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  local_2c = *(byte *)(in_EAX + 0x10) - 0x14;
  if (local_2c < 0) {
    local_2c = 0;
  }
  uVar7 = *(byte *)(in_EAX + 0xe) + 0x14;
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  uVar8 = *(byte *)(in_EAX + 0x10) + 0x14;
  if (0xff < uVar8) {
    uVar8 = 0xff;
  }
  iVar9 = 0x7fffffff;
  if (local_2c <= (int)uVar8) {
    local_28 = local_2c * 0x500;
    do {
      if (iVar3 <= (int)uVar7) {
        local_20 = iVar3 * 5 + local_28;
        do {
          iVar6 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + local_20 + 1) & 0x3fffff) >> 0xb];
          if (iVar6 != DAT_001ae9fc) {
            do {
              if (iVar6 != in_EAX) {
                switch(in_EDX) {
                case 1:
                case 7:
                  if (*(char *)(iVar6 + 0x1f) != '\x05') {
                    if (*(char *)(iVar6 + 0x1f) != '\x01') goto LAB_000e3f7f;
                    cVar1 = *(char *)(iVar6 + 0x1a);
                    goto joined_r0x000e3fff;
                  }
                  break;
                case 2:
                  cVar1 = *(char *)(iVar6 + 0x1f);
joined_r0x000e3fff:
                  if (cVar1 != '\x05') goto LAB_000e3f7f;
                  break;
                case 3:
                  if (((*(char *)(iVar6 + 0x1f) != '\x05') &&
                      ((*(char *)(iVar6 + 0x1f) != '\x01' || (*(char *)(iVar6 + 0x1a) != '\x05'))))
                     || (*(char *)(iVar6 + 6) == *(char *)(in_EAX + 6))) goto LAB_000e3f7f;
                  break;
                case 4:
                  if ((*(char *)(iVar6 + 0x1f) != '\x05') ||
                     (*(char *)(iVar6 + 6) == *(char *)(in_EAX + 6))) goto LAB_000e3f7f;
                  break;
                case 5:
                  if (((*(char *)(iVar6 + 0x1f) != '\x05') &&
                      ((*(char *)(iVar6 + 0x1f) != '\x01' || (*(char *)(iVar6 + 0x1a) != '\x05'))))
                     || (*(char *)(iVar6 + 6) != *(char *)(in_EAX + 6))) goto LAB_000e3f7f;
                  break;
                case 6:
                  if ((*(char *)(iVar6 + 0x1f) != '\x05') ||
                     (*(char *)(iVar6 + 6) != *(char *)(in_EAX + 6))) goto LAB_000e3f7f;
                  break;
                case 8:
                  break;
                default:
                  FUN_000ddaf0(); /* LbErrorLog("update.cpp", line 2654, "Illegal primary target type for shot") */
                }
                FUN_00010c1a();
                iVar4 = FUN_00010c5f();
                iVar6 = extraout_ECX;
                if ((0x26 < iVar4) || (iVar5 = FUN_000101c2(), iVar6 = extraout_ECX_00, iVar5 == 0))
                {
                  iVar4 = 0x7fffffff;
                }
                if (iVar4 < iVar9) {
                  uVar2 = *(undefined2 *)(iVar6 + 0x1b);
                  iVar9 = iVar4;
                }
              }
LAB_000e3f7f:
              iVar6 = (&DAT_001ae9fc)[*(ushort *)(iVar6 + 2)];
            } while (iVar6 != DAT_001ae9fc);
          }
          local_20 = local_20 + 5;
        } while (local_20 <= (int)(local_28 + uVar7 * 5));
      }
      local_28 = local_28 + 0x500;
      local_2c = local_2c + 1;
    } while (local_2c <= (int)uVar8);
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_0e40f8 (Ghidra: FUN_000e40f8)
 * Prototype: int sub_0e40f8(void);
 * Address  : 0xe40f8 (Size: 65 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x101c2, 0x10c1a, 0x10c5f
 ******************************************************************************/
int FUN_000e40f8(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  FUN_00010c1a();
  iVar1 = FUN_00010c5f();
  if (iVar1 < unaff_EBX) {
    iVar2 = FUN_000101c2();
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0x7fffffff;
}

/******************************************************************************
 * Function : sub_0e413c (Ghidra: FUN_000e413c)
 * Prototype: void sub_0e413c(void);
 * Address  : 0xe413c (Size: 228 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xdf760, 0xe01f4, 0xe0880
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000e413c(void)

{
  int in_EAX;
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xce) =
         *(undefined4 *)(in_EAX + 0x40);
  }
  if ((*(short *)(in_EAX + 0x3e) != 0) && (*(char *)(in_EAX + 0x49) != '\0')) {
    iVar3 = *(int *)(in_EAX + 0x40) + (*(int *)(in_EAX + 0x3c) >> 0x10);
    *(int *)(in_EAX + 0x40) = iVar3;
    while (iVar3 < 0) {
      iVar3 = *(int *)(in_EAX + 0x40) + (uint)*(byte *)(in_EAX + 0x49) * 0x100;
      *(int *)(in_EAX + 0x40) = iVar3;
    }
    iVar2 = (uint)*(byte *)(in_EAX + 0x49) * 0x100;
    iVar3 = iVar2 + -1;
    if (iVar3 < *(int *)(in_EAX + 0x40)) {
      if ((*(byte *)(in_EAX + 0x4f) & 0x40) == 0) {
        iVar3 = *(int *)(in_EAX + 0x40) % iVar2;
      }
      else {
        *(undefined2 *)(in_EAX + 0x3e) = 0;
      }
      *(int *)(in_EAX + 0x40) = iVar3;
    }
    *(char *)(in_EAX + 0x48) = (char)((uint)*(undefined4 *)(in_EAX + 0x40) >> 8);
  }
  if (*(char *)(in_EAX + 0x4a) == '\0') {
    return;
  }
  uVar1 = *(short *)(in_EAX + 0x46) + (short)*(char *)(in_EAX + 0x4a);
  *(ushort *)(in_EAX + 0x46) = uVar1;
  if (*(ushort *)(in_EAX + 0x4b) < uVar1) {
    if (uVar1 < *(ushort *)(in_EAX + 0x4d)) {
      return;
    }
    *(ushort *)(in_EAX + 0x46) = *(ushort *)(in_EAX + 0x4d);
    if ((*(byte *)(in_EAX + 0x50) & 2) != 0) {
      *(char *)(in_EAX + 0x4a) = -*(char *)(in_EAX + 0x4a);
      return;
    }
  }
  else {
    *(ushort *)(in_EAX + 0x46) = *(ushort *)(in_EAX + 0x4b);
    if ((*(byte *)(in_EAX + 0x50) & 2) != 0) {
      *(char *)(in_EAX + 0x4a) = -*(char *)(in_EAX + 0x4a);
      return;
    }
  }
  *(undefined1 *)(in_EAX + 0x4a) = 0;
  return;
}

/******************************************************************************
 * Function : sub_0e4220 (Ghidra: FUN_000e4220)
 * Prototype: longlong sub_0e4220(void);
 * Address  : 0xe4220 (Size: 928 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xb3040
 ******************************************************************************/
longlong FUN_000e4220(void)

{
  short *psVar1;
  undefined *puVar2;
  byte *in_EAX;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  uint in_EDX;
  bool bVar5;
  
  iVar4 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  bVar5 = false;
  if (*(char *)(iVar4 + 0xab) == '\0') {
    if ((*in_EAX & 0x20) == 0) {
      if ((*(byte *)(iVar4 + 2) & 1) == 0) {
        if (*(short *)(iVar4 + 200) != 0) {
          *(short *)(iVar4 + 0xbb) =
               (short)((uint)((*(int *)(iVar4 + 0xc6) >> 0x10) *
                             (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52)]) >> 0x10);
          puVar2 = (&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52)];
          *(undefined2 *)(iVar4 + 0xbf) = 0;
          bVar5 = true;
          *(short *)(iVar4 + 0xbd) =
               (short)((uint)-((*(int *)(iVar4 + 0xc6) >> 0x10) * (int)puVar2 >> 8) >> 8);
        }
      }
      else {
        bVar5 = true;
        *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) & 0xfe;
      }
    }
    else if ((in_EAX[0x25] & 0x20) == 0) {
      bVar5 = *(short *)(iVar4 + 200) != 0;
      if (bVar5) {
        *(short *)(iVar4 + 0xbb) =
             (short)((uint)((*(int *)(iVar4 + 0xc6) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52)]) >> 0x10);
        *(short *)(iVar4 + 0xbd) =
             (short)((uint)-((*(int *)(iVar4 + 0xc6) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52)] >> 8) >> 8);
      }
      if (*(short *)(iVar4 + 0xca) != 0) {
        *(short *)(iVar4 + 0xbb) =
             (short)((uint)*(undefined4 *)(iVar4 + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(iVar4 + 200) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff]) >> 0x10);
        bVar5 = true;
        *(short *)(iVar4 + 0xbd) =
             (short)((uint)*(undefined4 *)(iVar4 + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(iVar4 + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff] >>
                            8) >> 8);
      }
    }
    else {
      if (*(short *)(iVar4 + 200) != 0) {
        *(short *)(iVar4 + 0xbb) =
             (short)((uint)(((int)(&DAT_001927e0)[*(ushort *)(in_EAX + 0x52)] >> 8) *
                           ((*(int *)(iVar4 + 0xc6) >> 0x10) *
                            (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x54)] >> 8)) >> 0x10);
        *(short *)(iVar4 + 0xbd) =
             (short)((uint)-(((int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52)] >> 8) *
                             ((*(int *)(iVar4 + 0xc6) >> 0x10) *
                              (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x54)] >> 8) >> 8) >> 8)
        ;
        *(short *)(iVar4 + 0xbf) =
             (short)((uint)((*(int *)(iVar4 + 0xc6) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x54)]) >> 0x10);
      }
      if (*(short *)(iVar4 + 0xca) != 0) {
        *(short *)(iVar4 + 0xbb) =
             (short)((uint)*(undefined4 *)(iVar4 + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(iVar4 + 200) >> 0x10) *
                           (&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff]) >> 0x10);
        *(short *)(iVar4 + 0xbd) =
             (short)((uint)*(undefined4 *)(iVar4 + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(iVar4 + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52) + 0x600 & 0x7ff] >>
                            8) >> 8);
      }
    }
    if (((in_EAX[0x25] & 0x20) != 0) && ((*in_EAX & 0x20) == 0)) {
      iVar3 = FUN_000b3040();
      iVar3 = (iVar3 + 0x100) - (*(int *)(extraout_ECX + 0xf) >> 0x10);
      psVar1 = (short *)(iVar4 + 0xbf);
      if (iVar3 < 1) {
        if (iVar3 < 0) {
          iVar4 = -iVar3;
          if (iVar3 != -0x20 && 0x1f < iVar4) {
            iVar4 = 0x20;
          }
          *psVar1 = *psVar1 - (short)iVar4;
          return CONCAT44(in_EDX,1);
        }
      }
      else {
        if (0x20 < iVar3) {
          iVar3 = 0x20;
        }
        *psVar1 = *psVar1 + (short)iVar3;
        bVar5 = true;
      }
    }
  }
  else {
    *(undefined2 *)(iVar4 + 0xbb) = 0;
    *(undefined2 *)(iVar4 + 0xbd) = 0;
    *(undefined2 *)(iVar4 + 0xbf) = 0;
    *(undefined2 *)(iVar4 + 200) = 0;
    bVar5 = true;
    *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) & 0xfe;
  }
  if (!bVar5) {
    if (((*(short *)(iVar4 + 0xbb) == 0) && (*(short *)(iVar4 + 0xbd) == 0)) &&
       (*(short *)(iVar4 + 0xbf) == 0)) {
      return (ulonglong)in_EDX << 0x20;
    }
    return CONCAT44(in_EDX,1);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0e45c0 (Ghidra: FUN_000e45c0)
 * Prototype: void sub_0e45c0(void);
 * Address  : 0xe45c0 (Size: 1780 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x10434, 0x24998, 0x43ac3, 0x63b6d, 0x64a2e, 0x655fa, 0x81c10, 0x81d84, 0xb23ec
 ******************************************************************************/
void FUN_000e45c0(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  byte *in_EAX;
  uint uVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  byte bVar12;
  short asStack_82c [1014];
  undefined4 auStack_40 [3];
  undefined4 local_34;
  short asStack_30 [2];
  undefined4 local_2c;
  int aiStack_28 [4];
  
  bVar12 = 0;
  psVar11 = (short *)&local_34;
  aiStack_28[1] = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  in_EAX[0x25] = in_EAX[0x25] & 0x7c;
  *(undefined2 *)(aiStack_28[1] + 0xb9) = 0;
  if (*(int *)(in_EAX + 0xf) >> 0x10 !=
      (uint)((&DAT_00269203)[(uint)in_EAX[0x10] * 0x100 + (uint)in_EAX[0xe]] & 0xf) << 8)
  goto LAB_000e4c25;
  auStack_40[2] = 0xe4621;
  uVar7 = FUN_000b23ec();
  if ((uVar7 & 0xfffffffe) == 0x28) {
    auStack_40[2] = 0xe4653;
    FUN_00081c10();
    in_EAX[0x25] = in_EAX[0x25] | 2;
  }
  else if (uVar7 == 0x27) {
    in_EAX[0x25] = in_EAX[0x25] | 1;
  }
  if ((in_EAX[0x25] & 1) == 0) {
    if (*(char *)(aiStack_28[1] + 0xc1) == '\0') {
      psVar11 = (short *)&local_34;
      uVar7 = local_34;
      if (DAT_002e7bed == '\x02') {
        auStack_40[2] = 0xe46c7;
        iVar8 = FUN_00081d84();
        local_34 = *(uint *)(in_EAX + 0xd);
        uVar7 = local_34;
        asStack_30[(uint)bVar12 * -4] = *(short *)(in_EAX + (uint)bVar12 * -8 + 0x11);
        psVar11 = (short *)&local_34;
        if ((&DAT_002d33c5)
            [((&DAT_0019033b)[local_34 >> 0x18] * 0x55 + (&DAT_0019033b)[local_34 >> 8 & 0xff]) * 6]
            == '\n') {
          in_EAX[0x25] = in_EAX[0x25] | 0x80;
          local_34._2_2_ = (short)(local_34 >> 0x10);
          if (iVar8 == 1) {
            sVar4 = (short)((uint)((&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6)
                           >> 0x10);
            sVar5 = (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                          [*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6) >> 8)
                           >> 8);
          }
          else {
            psVar11 = (short *)&local_34;
            if (iVar8 != 2) goto LAB_000e4aca;
            sVar4 = -(short)((uint)((&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6
                                   ) >> 0x10);
            sVar5 = -(short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                           [*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6) >> 8)
                            >> 8);
          }
          auStack_40[2] = 0xffffffff;
          local_34 = CONCAT22(local_34._2_2_ + sVar5,(short)local_34 + sVar4);
          FUN_00043ac3();
          psVar11 = (short *)(auStack_40 + 2);
          uVar7 = local_34;
        }
      }
    }
    else {
      auStack_40[2] = 0xe48e6;
      iVar8 = FUN_00081d84();
      aiStack_28[3] = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
      bVar2 = in_EAX[0x1a];
      uVar1 = *(undefined4 *)(in_EAX + 0xd);
      *(undefined2 *)(aiStack_28 + (uint)bVar12 * -2) =
           *(undefined2 *)(in_EAX + (uint)bVar12 * -8 + 0x11);
      bVar2 = (&DAT_0018b70c)[(uint)bVar2 * 0x10];
      if (bVar2 < 3) {
LAB_000e492b:
        local_2c._0_2_ = (short)uVar1;
        local_2c._2_2_ = (short)((uint)uVar1 >> 0x10);
        if (iVar8 == 1) {
          auStack_40[2] = 0xffffffff;
          local_2c = CONCAT22(local_2c._2_2_ +
                              (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                    [*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] <<
                                              6) >> 8) >> 8),
                              (short)local_2c +
                              (short)((uint)((&DAT_001927e0)
                                             [*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6) >>
                                     0x10));
          FUN_00043ac3();
          *(char *)(aiStack_28[2] + 0xc1) = *(char *)(aiStack_28[2] + 0xc1) + -1;
          psVar10 = (short *)(auStack_40 + 2);
          uVar1 = local_2c;
        }
        else {
          psVar10 = (short *)&local_34;
          if (iVar8 == 2) {
            auStack_40[2] = 0xffffffff;
            local_2c = CONCAT22(local_2c._2_2_ -
                                (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                      [*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff]
                                                << 6) >> 8) >> 8),
                                (short)local_2c -
                                (short)((uint)((&DAT_001927e0)
                                               [*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6) >>
                                       0x10));
            FUN_00043ac3();
            *(char *)(aiStack_28[2] + 0xc1) = *(char *)(aiStack_28[2] + 0xc1) + -1;
            psVar10 = (short *)(auStack_40 + 2);
            uVar1 = local_2c;
          }
        }
      }
      else {
        psVar10 = (short *)&local_34;
        if (4 < bVar2) {
          if (bVar2 != 5) goto LAB_000e492b;
          psVar10 = (short *)&local_34;
          if (iVar8 != 0) {
            psVar10 = (short *)(auStack_40 + 2);
            auStack_40[2] = 0xffffffff;
            local_2c = uVar1;
            FUN_00043ac3();
            *(char *)(aiStack_28[2] + 0xc1) = *(char *)(aiStack_28[2] + 0xc1) + -1;
            uVar1 = local_2c;
          }
        }
      }
      local_2c = uVar1;
      psVar10[-0xffffffff00000002] = 0x47b7;
      psVar10[-0xffffffff00000001] = 0xe;
      iVar8 = FUN_00081d84();
      *(undefined4 *)psVar10 = *(undefined4 *)(in_EAX + 0xd);
      psVar10[(uint)bVar12 * -4 + 2] = *(short *)(in_EAX + (uint)bVar12 * -8 + 0x11);
      if (iVar8 == 1) {
        *psVar10 = *psVar10 +
                   (short)((uint)((&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6)
                          >> 0x10);
        puVar3 = (&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff];
        psVar10[-0xffffffff00000002] = -1;
        psVar10[-0xffffffff00000001] = -1;
        psVar10[1] = psVar10[1] + (short)((uint)-(((int)puVar3 << 6) >> 8) >> 8);
        psVar10[-0xffffffff00000004] = 0x483e;
        psVar10[-0xffffffff00000003] = 0xe;
        FUN_00043ac3();
        *(char *)(*(int *)(psVar10 + 6) + 0xc1) = *(char *)(*(int *)(psVar10 + 6) + 0xc1) + -1;
        psVar11 = psVar10 + -2;
        uVar7 = local_34;
      }
      else {
        psVar11 = psVar10;
        uVar7 = local_34;
        if (iVar8 == 2) {
          *psVar10 = *psVar10 -
                     (short)((uint)((&DAT_001927e0)[*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff] << 6
                                   ) >> 0x10);
          puVar3 = (&PTR_LAB_00192fe0)[*(ushort *)(in_EAX + 0x52) - 0x200 & 0x7ff];
          psVar11 = psVar10 + -2;
          psVar10[-0xffffffff00000002] = -1;
          psVar10[-0xffffffff00000001] = -1;
          psVar10[1] = psVar10[1] - (short)((uint)-(((int)puVar3 << 6) >> 8) >> 8);
          psVar10[-0xffffffff00000004] = 0x4a3e;
          psVar10[-0xffffffff00000003] = 0xe;
          FUN_00043ac3();
          *(char *)(*(int *)(psVar10 + 6) + 0xc1) = *(char *)(*(int *)(psVar10 + 6) + 0xc1) + -1;
          uVar7 = local_34;
        }
      }
    }
  }
  else {
    auStack_40[2] = 0xe4677;
    iVar8 = FUN_00081d84();
    if (iVar8 != 0) {
      auStack_40[2] = 0xe468d;
      FUN_00024998();
    }
    *(undefined1 *)(aiStack_28[1] + 0xc1) = 0;
    psVar11 = (short *)&local_34;
    uVar7 = local_34;
  }
LAB_000e4aca:
  local_34 = uVar7;
  iVar8 = *(int *)(in_EAX + 3);
  *(undefined4 *)((int)psVar11 + 0x14) = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (iVar8 >> 0x18 == (uint)DAT_002eb542) {
    for (iVar8 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(in_EAX[0x10],in_EAX[0xe]) * 5 + 1)
                  & 0x3fffff) >> 0xb]; iVar8 != DAT_001ae9fc;
        iVar8 = (&DAT_001ae9fc)[*(ushort *)(iVar8 + 2)]) {
      if (*(char *)(iVar8 + 0x1f) == '\x04') {
        iVar9 = *(int *)((int)psVar11 + 0x14);
        *(undefined1 *)(iVar9 + 0xc1) = 0x14;
        uVar6 = *(undefined2 *)(iVar8 + 0x1b);
LAB_000e4c1e:
        *(undefined2 *)(iVar9 + 0xb9) = uVar6;
        break;
      }
    }
  }
  else {
    for (iVar8 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(in_EAX[0x10],in_EAX[0xe]) * 5 + 1)
                  & 0x3fffff) >> 0xb]; iVar8 != DAT_001ae9fc;
        iVar8 = (&DAT_001ae9fc)[*(ushort *)(iVar8 + 2)]) {
      if (*(char *)(iVar8 + 0x1f) == '\x04') {
        *(undefined4 *)((int)psVar11 + -4) = 0xe4c0b;
        FUN_00010434();
        *(undefined1 *)(*(int *)((int)psVar11 + 0x14) + 0xc1) = 0x14;
        iVar9 = *(int *)((int)psVar11 + 0x14);
        uVar6 = *(undefined2 *)(iVar8 + 0x1b);
        goto LAB_000e4c1e;
      }
    }
  }
LAB_000e4c25:
  if ((((*in_EAX & 0x20) == 0) && ((in_EAX[0x25] & 2) != 0)) &&
     ((&DAT_002e9125)[(uint)in_EAX[0x1a] * 0xe6] != '\0')) {
    bVar12 = in_EAX[7];
    if (bVar12 == 0xe) {
      bVar12 = in_EAX[8];
    }
    if ((bVar12 != 0x8f) && (*(int *)(*(int *)((int)psVar11 + 0x10) + 0x2fe) + 0x40U < DAT_002e8bee)
       ) {
      *(uint *)(*(int *)((int)psVar11 + 0x10) + 0x2fe) = DAT_002e8bee;
      *(undefined4 *)((int)psVar11 + -4) = 0xe4c8e;
      iVar8 = FUN_00064a2e();
      if (iVar8 != 0) {
        *(undefined4 *)((int)psVar11 + -4) = 0xe4c99;
        iVar8 = FUN_000655fa();
        if (iVar8 == 0) {
          *(undefined4 *)((int)psVar11 + -4) = 0xe4caa;
          FUN_00063b6d();
        }
        else {
          in_EAX[8] = 0x8f;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0e4cb4 (Ghidra: FUN_000e4cb4)
 * Prototype: void sub_0e4cb4(void);
 * Address  : 0xe4cb4 (Size: 343 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x10434
 ******************************************************************************/
void FUN_000e4cb4(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_EAX;
  int in_EDX;
  int iVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(int *)(in_EAX + 3) >> 0x18 == (uint)DAT_002eb542) {
    for (iVar3 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 +
                            ((uint)*(byte *)(in_EDX + 3) * 0x100 + (uint)*(byte *)(in_EDX + 1)) * 5
                            + 1) & 0x3fffff) >> 0xb]; iVar3 != DAT_001ae9fc;
        iVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 2)]) {
      if (*(char *)(iVar3 + 0x1f) == '\x04') {
        *(undefined1 *)(iVar1 + 0xc1) = 0x14;
        uVar2 = *(undefined2 *)(iVar3 + 0x1b);
        goto LAB_000e4dfe;
      }
    }
  }
  else {
    iVar3 = (&DAT_001ae9fc)
            [(*(uint *)((int)&DAT_00279203 +
                       (uint)CONCAT11(*(undefined1 *)(in_EDX + 3),*(byte *)(in_EDX + 1)) * 5 + 1) &
             0x3fffff) >> 0xb];
    if (iVar3 == DAT_001ae9fc) {
      return;
    }
    while (*(char *)(iVar3 + 0x1f) != '\x04') {
      iVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 2)];
      if (iVar3 == DAT_001ae9fc) {
        return;
      }
    }
    FUN_00010434();
    *(undefined1 *)(iVar1 + 0xc1) = 0x14;
    uVar2 = *(undefined2 *)(iVar3 + 0x1b);
LAB_000e4dfe:
    *(undefined2 *)(iVar1 + 0xb9) = uVar2;
  }
  return;
}

/******************************************************************************
 * Function : sub_0e4e0c (Ghidra: FUN_000e4e0c)
 * Prototype: void sub_0e4e0c(void);
 * Address  : 0xe4e0c (Size: 412 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x43ac3, 0x81d84
 ******************************************************************************/
void FUN_000e4e0c(void)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined8 uVar8;
  short sVar9;
  undefined2 auStack_1c [2];
  
  bVar7 = 0;
  uVar8 = FUN_00081d84();
  iVar6 = (int)((ulonglong)uVar8 >> 0x20);
  iVar5 = (int)uVar8;
  bVar2 = *(byte *)(iVar6 + 0x1a);
  uVar3 = *(ushort *)(iVar6 + 100);
  uVar1 = *(undefined4 *)(iVar6 + 0xd);
  auStack_1c[(uint)bVar7 * -4] = *(undefined2 *)(iVar6 + 0x11 + (uint)bVar7 * -8);
  bVar2 = (&DAT_0018b70c)[(uint)bVar2 * 0x10];
  iVar4 = (&DAT_001b0a00)[uVar3];
  if (2 < bVar2) {
    if (bVar2 < 5) {
      return;
    }
    if (bVar2 == 5) {
      if (iVar5 == 0) {
        return;
      }
      FUN_00043ac3(0xffffffff,uVar1);
      *(char *)(iVar4 + 0xc1) = *(char *)(iVar4 + 0xc1) + -1;
      return;
    }
  }
  sVar9 = (short)((uint)uVar1 >> 0x10);
  if (iVar5 == 1) {
    FUN_00043ac3(0xffffffff,
                 CONCAT22(sVar9 + (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                        [*(ushort *)(iVar6 + 0x52) - 0x200 & 0x7ff]
                                                  << 6) >> 8) >> 8),
                          (short)uVar1 +
                          (short)((uint)((&DAT_001927e0)[*(ushort *)(iVar6 + 0x52) - 0x200 & 0x7ff]
                                        << 6) >> 0x10)));
    *(char *)(iVar4 + 0xc1) = *(char *)(iVar4 + 0xc1) + -1;
    return;
  }
  if (iVar5 != 2) {
    return;
  }
  FUN_00043ac3(0xffffffff,
               CONCAT22(sVar9 - (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                      [*(ushort *)(iVar6 + 0x52) - 0x200 & 0x7ff] <<
                                                6) >> 8) >> 8),
                        (short)uVar1 -
                        (short)((uint)((&DAT_001927e0)[*(ushort *)(iVar6 + 0x52) - 0x200 & 0x7ff] <<
                                      6) >> 0x10)));
  *(char *)(iVar4 + 0xc1) = *(char *)(iVar4 + 0xc1) + -1;
  return;
}

/******************************************************************************
 * Function : sub_0e4fa8 (Ghidra: FUN_000e4fa8)
 * Prototype: void sub_0e4fa8(void);
 * Address  : 0xe4fa8 (Size: 84 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x7df48, 0xb2398
 ******************************************************************************/
void FUN_000e4fa8(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xfc;
  iVar1 = FUN_0007df48();
  if (iVar1 != 0) {
    uVar2 = FUN_000b2398();
    if (uVar2 == 0x27) {
      *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 1;
      return;
    }
    if ((uVar2 & 0xfffffffe) == 0x28) {
      *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 2;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0e4ffc (Ghidra: FUN_000e4ffc)
 * Prototype: void sub_0e4ffc(void);
 * Address  : 0xe4ffc (Size: 37 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:3472 ("Check door failed - flagged position but no door!")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x49f4e
 * Strings  :
 *   - 0x16cb42: "update.cpp"
 ******************************************************************************/
void FUN_000e4ffc(void)

{
  byte *pbVar1;
  byte *extraout_EDX;
  int iVar2;
  
  pbVar1 = &DAT_0019d0c8;
  iVar2 = 0;
  do {
    if ((*pbVar1 & 1) != 0) {
      FUN_00049f4e();
      pbVar1 = extraout_EDX;
    }
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x4ef;
  } while (iVar2 < 5);
  return;
}

/******************************************************************************
 * Function : dk_oh_fuck_illegal_bastard_0e5564 (Ghidra: FUN_000e5564)
 * Prototype: void dk_oh_fuck_illegal_bastard_0e5564(void);
 * Address  : 0xe5564 (Size: 145 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp:3692
 * Naming   : String 'Oh fuck, illegal bastard in room list'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16cb73: "update.cpp"
 *   - 0x16cb4d: "Oh fuck, illegal bastard in room list"
 ******************************************************************************/
void FUN_000e5564(void)

{
  uint uVar1;
  uint extraout_ECX;
  byte *pbVar2;
  
  pbVar2 = &DAT_002ddd1b;
  do {
    if (((*pbVar2 & 1) != 0) &&
       (uVar1 = (&DAT_001ae9fc)[*(ushort *)(pbVar2 + 0x3d)], DAT_001ae9fc < uVar1)) {
      do {
        if (*(short *)(uVar1 + 0x1b) == 0) {
          FUN_000ddaf0(); /* LbErrorLog(NULL, line 3692, g_log_buf) */
          uVar1 = extraout_ECX;
        }
        uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar1 + 100)] + 0x2aa)];
      } while (DAT_001ae9fc < uVar1);
    }
    pbVar2 = pbVar2 + 0x45;
  } while (pbVar2 <= &DAT_002e0544);
  return;
}

