/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: specials.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 31
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0701e3 (Ghidra: FUN_000701e3)
 * Prototype: int sub_0701e3(void);
 * Address  : 0x701e3 (Size: 10 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x6f72b, 0x6f7b2, 0x6faa0, 0x6fca5, 0x6ff7f, 0x6ffd9
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000701e3(void)

{
  int in_EAX;
  
  return *(ushort *)(in_EAX + 2) + 4000;
}

/******************************************************************************
 * Function : sub_0701ed (Ghidra: FUN_000701ed)
 * Prototype: int sub_0701ed(void);
 * Address  : 0x701ed (Size: 5 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7019c
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000701ed(void)

{
  int in_EAX;
  
  return *(int *)(in_EAX + 0x19) + 4000;
}

/******************************************************************************
 * Function : sub_0701f2 (Ghidra: FUN_000701f2)
 * Prototype: undefined4 sub_0701f2(void);
 * Address  : 0x701f2 (Size: 12 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000701f2(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_070234 (Ghidra: FUN_00070234)
 * Prototype: int sub_070234(void);
 * Address  : 0x70234 (Size: 71 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
int FUN_00070234(void)

{
  int iVar1;
  int extraout_ECX;
  
  FUN_000e69fc();
  iVar1 = FUN_000e69fc();
  if (iVar1 < extraout_ECX) {
    iVar1 = *(int *)(&DAT_0017a4d0 + ((iVar1 << 8) / extraout_ECX) * 8) * extraout_ECX;
  }
  else {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(&DAT_0017a4d0 + ((extraout_ECX << 8) / iVar1) * 8) * iVar1;
  }
  return iVar1 >> 0xd;
}

/******************************************************************************
 * Function : sub_07027c (Ghidra: FUN_0007027c)
 * Prototype: longlong sub_07027c(void);
 * Address  : 0x7027c (Size: 32 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4e120, 0x708fa
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0007027c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if (((*(char *)(in_EAX + 0x1f) == '\x01') && (0x55 < *(byte *)(in_EAX + 0x1a))) &&
     (*(byte *)(in_EAX + 0x1a) < 0x5e)) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0702e6 (Ghidra: FUN_000702e6)
 * Prototype: void sub_0702e6(void);
 * Address  : 0x702e6 (Size: 58 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x5ddee
 ******************************************************************************/
void FUN_000702e6(void)

{
  FUN_0005ddee(0,0);
  return;
}

/******************************************************************************
 * Function : sub_070320 (Ghidra: FUN_00070320)
 * Prototype: void sub_070320(void);
 * Address  : 0x70320 (Size: 399 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xe6b20, 0xe6d80, 0xe7714, 0xf0870
 * Strings  :
 *   - 0x167714: " %s"
 *   - 0x167718: "%s %d "
 ******************************************************************************/
void FUN_00070320(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_003d9874;
  uVar4 = 0;
  DAT_003d9874 = 4;
  FUN_000f0870(0,(int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6);
  DAT_003d98b4 = DAT_001991b8;
  FUN_000e6b20(uVar4,(int)((ulonglong)*(ushort *)(in_EAX + 0x25) /
                          (ulonglong)(longlong)(int)(uint)DAT_0019cba6));
  iVar2 = DAT_002f10ce._3_1_ * 0x1508;
  if (*(int *)(&DAT_002e1928 + iVar2) == 0x40) {
    iVar3 = *(short *)(in_EAX + 0x1b) + DAT_003772da;
    if (iVar3 < 0x40) {
      iVar3 = (*(int *)(&DAT_002e192c + iVar2) + iVar3) % 0x40;
      goto LAB_00070400;
    }
  }
  else {
    iVar3 = *(short *)(in_EAX + 0x1b) + DAT_003772da;
    if (iVar3 < *(int *)(&DAT_002e1928 + iVar2)) goto LAB_00070400;
  }
  iVar3 = -1;
LAB_00070400:
  if (iVar3 != -1) {
    DAT_003d9874 = 0x20;
    FUN_000e7714(&DAT_0019cbac,&DAT_00167714, /* 0x167714=" %s" */
                 (&DAT_0033319b)
                 [*(ushort *)
                   (&DAT_00188bf7 +
                   (uint)(byte)(&DAT_002e18a8)[DAT_002f10ce._3_1_ * 0x1508 + iVar3 * 2] * 5)]);
    FUN_000e6d80();
    DAT_003d9874 = 0x80;
    FUN_000e7714(&DAT_0019cbac,s__s__d_00167718,DAT_003337f3,
                 (byte)(&DAT_002e18a9)[DAT_002f10ce._3_1_ * 0x1508 + extraout_ECX] + 1);
    FUN_000e6d80();
  }
  DAT_003d9874 = uVar1;
  return;
}

/******************************************************************************
 * Function : sub_0704af (Ghidra: FUN_000704af)
 * Prototype: void sub_0704af(void);
 * Address  : 0x704af (Size: 16 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000704af(void)

{
  if (DAT_003772da != 0) {
    DAT_003772da = DAT_003772da + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0704bf (Ghidra: FUN_000704bf)
 * Prototype: void sub_0704bf(void);
 * Address  : 0x704bf (Size: 36 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000704bf(void)

{
  if (DAT_003772da < *(int *)(&DAT_002e1928 + DAT_002f10ce._3_1_ * 0x1508)) {
    DAT_003772da = DAT_003772da + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0704e3 (Ghidra: FUN_000704e3)
 * Prototype: void sub_0704e3(void);
 * Address  : 0x704e3 (Size: 109 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000704e3(void)

{
  byte *in_EAX;
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_002f10ce._3_1_ * 0x1508;
  if ((*(int *)(&DAT_002e1928 + iVar1) <= DAT_003772da) && (*(int *)(&DAT_002e1928 + iVar1) != 0)) {
    DAT_003772de = *(int *)(&DAT_002e1928 + iVar1) + -1;
  }
  if (*(short *)(in_EAX + 0x1b) == 1) {
    bVar2 = DAT_003772da != 0;
  }
  else {
    bVar2 = DAT_003772da < *(int *)(&DAT_002e1928 + DAT_002f10ce._3_1_ * 0x1508) + -1;
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar2 << 3;
  return;
}

/******************************************************************************
 * Function : sub_070550 (Ghidra: FUN_00070550)
 * Prototype: void sub_070550(void);
 * Address  : 0x70550 (Size: 173 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5c848, 0x5ddee
 ******************************************************************************/
void FUN_00070550(void)

{
  int in_EAX;
  
  if (*(short *)(in_EAX + 0x1b) + DAT_003772da <
      *(int *)(&DAT_002e1928 + DAT_002f10ce._3_1_ * 0x1508)) {
    FUN_0005ddee(0,0);
    FUN_0005c848();
  }
  return;
}

/******************************************************************************
 * Function : sub_0705fd (Ghidra: FUN_000705fd)
 * Prototype: void sub_0705fd(void);
 * Address  : 0x705fd (Size: 48 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000705fd(void)

{
  int iVar1;
  byte *in_EAX;
  int iVar2;
  
  iVar2 = *(short *)(in_EAX + 0x1b) + DAT_003772da;
  iVar1 = *(int *)(&DAT_002e1928 + DAT_002f10ce._3_1_ * 0x1508);
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (iVar2 < iVar1) << 3;
  return;
}

/******************************************************************************
 * Function : sub_07062d (Ghidra: FUN_0007062d)
 * Prototype: void sub_07062d(void);
 * Address  : 0x7062d (Size: 335 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xe6b20, 0xe6d80, 0xe7714, 0xf0870
 * Strings  :
 *   - 0x16771f: " %s"
 *   - 0x167723: "%s %d "
 ******************************************************************************/
void FUN_0007062d(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = DAT_003d9874;
  uVar5 = 0;
  DAT_003d9874 = 4;
  FUN_000f0870(0,(int)((ulonglong)*(ushort *)(in_EAX + 0x25) /
                      (ulonglong)(longlong)(int)(uint)DAT_0019cba6));
  DAT_003d98b4 = DAT_001991b8;
  FUN_000e6b20(uVar5,(int)*(short *)(in_EAX + 0x1f) / (int)(uint)DAT_0019cba6);
  iVar4 = *(short *)(in_EAX + 0x1b) + DAT_003772de;
  if (iVar4 < (int)(uint)(byte)(&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508]) {
    uVar1 = (&DAT_002e05b6)[DAT_002f10ce._3_1_ * 0xa84];
    for (; (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2 && (iVar4 != 0));
        iVar4 = iVar4 + -1) {
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
    }
    if (DAT_001ae9fc < uVar2) {
      DAT_003d9874 = 0x20;
      FUN_000e7714(&DAT_0019cbac,&DAT_0016771f, /* 0x16771f=" %s" */
                   (&DAT_0033319b)[*(ushort *)(&DAT_00188bf7 + (uint)*(byte *)(uVar2 + 0x1a) * 5)]);
      FUN_000e6d80();
      DAT_003d9874 = 0x80;
      FUN_000e7714(&DAT_0019cbac,s__s__d_00167723,DAT_003337f3,
                   *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x23) + 1);
      FUN_000e6d80();
    }
  }
  DAT_003d9874 = uVar3;
  return;
}

/******************************************************************************
 * Function : sub_07077c (Ghidra: FUN_0007077c)
 * Prototype: void sub_07077c(void);
 * Address  : 0x7077c (Size: 39 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0007077c(void)

{
  byte bVar1;
  byte *in_EAX;
  int iVar2;
  
  bVar1 = (&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508];
  iVar2 = *(short *)(in_EAX + 0x1b) + DAT_003772de;
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | (iVar2 < (int)(uint)bVar1) << 3;
  return;
}

/******************************************************************************
 * Function : sub_0707a3 (Ghidra: FUN_000707a3)
 * Prototype: void sub_0707a3(void);
 * Address  : 0x707a3 (Size: 16 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000707a3(void)

{
  if (DAT_003772de != 0) {
    DAT_003772de = DAT_003772de + -1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0707b3 (Ghidra: FUN_000707b3)
 * Prototype: void sub_0707b3(void);
 * Address  : 0x707b3 (Size: 35 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000707b3(void)

{
  if (DAT_003772de < (int)(uint)(byte)(&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508]) {
    DAT_003772de = DAT_003772de + 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0707d6 (Ghidra: FUN_000707d6)
 * Prototype: void sub_0707d6(void);
 * Address  : 0x707d6 (Size: 100 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000707d6(void)

{
  byte *in_EAX;
  bool bVar1;
  
  if ((int)(uint)(byte)(&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508] <= DAT_003772de) {
    DAT_003772de = (byte)(&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508] - 1;
  }
  if (*(short *)(in_EAX + 0x1b) == 1) {
    bVar1 = DAT_003772de != 0;
  }
  else {
    bVar1 = DAT_003772de < (int)((byte)(&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508] - 1);
  }
  *in_EAX = *in_EAX & 0xf7;
  *in_EAX = *in_EAX | bVar1 << 3;
  return;
}

/******************************************************************************
 * Function : sub_07083a (Ghidra: FUN_0007083a)
 * Prototype: void sub_07083a(void);
 * Address  : 0x7083a (Size: 160 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x5c848, 0x5ddee
 ******************************************************************************/
void FUN_0007083a(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  
  puVar4 = (undefined4 *)auStack_c;
  iVar3 = *(short *)(in_EAX + 0x1b) + DAT_003772de;
  if (iVar3 < (int)(uint)(byte)(&DAT_002e0ea2)[DAT_002f10ce._3_1_ * 0x1508]) {
    uVar1 = (&DAT_002e05b6)[DAT_002f10ce._3_1_ * 0xa84];
    for (; (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2 && (iVar3 != 0));
        iVar3 = iVar3 + -1) {
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
    }
    if (DAT_001ae9fc < uVar2) {
      uStack_10 = 0;
      puVar4 = &uStack_14;
      uStack_14 = 0;
      FUN_0005ddee();
    }
    *(undefined4 *)((int)puVar4 + -4) = 0x708d6;
    FUN_0005c848();
  }
  return;
}

/******************************************************************************
 * Function : dk_dungeon_special_model_0708fa (Ghidra: FUN_000708fa)
 * Prototype: void dk_dungeon_special_model_0708fa(void);
 * Address  : 0x708fa (Size: 322 bytes)
 * Module   : specials.cpp [direct_file_string_xref]
 * OrigLine : specials.cpp:357
 * Naming   : String 'Invalid dungeon special (Model %d)'
 * Callers  : 3 -> 0x4e120, 0x5eb8d, 0xc599c
 * Callees  : 15 -> 0x2778e, 0x51374, 0x7027c, 0x70c0c, 0x70c96, 0x70d0d, 0x70d86, 0x70e59, 0x711f3, 0x71312 ...
 * Strings  :
 *   - 0x16774d: "specials.cpp"
 *   - 0x16772a: "Invalid dungeon special (Model %d)"
 ******************************************************************************/
void FUN_000708fa(void)

{
  bool bVar1;
  byte *in_EAX;
  int iVar2;
  undefined1 *extraout_ECX;
  undefined1 *puVar3;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  
  bVar1 = false;
  if ((*in_EAX & 1) == 0) {
    return;
  }
  iVar2 = FUN_0007027c(*(undefined4 *)(in_EAX + 0xd),*(undefined2 *)(in_EAX + 0x11),
                       in_EAX[0x1a] - 0x56);
  if (iVar2 == 0) {
    return;
  }
  switch(in_EAX[0x1a]) {
  case 0x56:
    FUN_00070c0c();
    break;
  case 0x57:
    FUN_00071312();
    puVar3 = extraout_ECX_00;
    goto LAB_0007095b;
  case 0x58:
    FUN_00071367();
    puVar3 = extraout_ECX_01;
    goto LAB_0007095b;
  case 0x59:
    iVar2 = FUN_000711f3();
    puVar3 = extraout_ECX_02;
    if (iVar2 == 0) goto LAB_0007095b;
    break;
  case 0x5a:
    FUN_00070d86();
    break;
  case 0x5b:
    FUN_00070c96();
    break;
  case 0x5c:
    FUN_00070e59();
    break;
  case 0x5d:
    FUN_00070d0d();
    break;
  default:
    FUN_000e7714(&DAT_0019cbac,s_Invalid_dungeon_special__Model___0016772a,in_EAX[0x1a]);
    FUN_000ddaf0(); /* LbErrorLog("specials.cpp", line 357, g_log_buf) */
    puVar3 = extraout_ECX_03;
    goto LAB_0007095b;
  }
  FUN_0002778e();
  bVar1 = true;
  FUN_00072af4();
  puVar3 = extraout_ECX;
LAB_0007095b:
  if (bVar1) {
    if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == puVar3) {
      FUN_00051374();
    }
    FUN_000713bc();
  }
  return;
}

/******************************************************************************
 * Function : sub_070a3c (Ghidra: FUN_00070a3c)
 * Prototype: undefined1 sub_070a3c(void);
 * Address  : 0x70a3c (Size: 138 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5eb8d
 * Callees  : 6 -> 0x2778e, 0x43bb3, 0x51374, 0x713bc, 0x72af4, 0x8240c
 ******************************************************************************/
undefined1 FUN_00070a3c(void)

{
  byte *in_EAX;
  int iVar1;
  char in_DL;
  undefined1 unaff_BL;
  
  if ((((*in_EAX & 1) != 0) && (in_EAX[0x1f] == 1)) && (in_EAX[0x1a] == 0x57)) {
    iVar1 = FUN_00043bb3();
    if (iVar1 != 0) {
      FUN_0008240c();
      if (in_DL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
    }
    FUN_000713bc();
    FUN_0002778e();
    unaff_BL = FUN_00072af4();
  }
  return unaff_BL;
}

/******************************************************************************
 * Function : sub_070ac6 (Ghidra: FUN_00070ac6)
 * Prototype: void sub_070ac6(void);
 * Address  : 0x70ac6 (Size: 307 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5eb8d
 * Callees  : 5 -> 0x2778e, 0x51374, 0x713bc, 0x72af4, 0x8608c
 ******************************************************************************/
void FUN_00070ac6(void)

{
  byte *in_EAX;
  int iVar1;
  byte *in_EDX;
  int iVar2;
  byte unaff_BL;
  uint uVar3;
  undefined2 *puVar4;
  
  uVar3 = (uint)unaff_BL;
  iVar2 = uVar3 * 0x1508;
  if (((((*in_EAX & 1) != 0) && (in_EAX[0x1f] == 1)) && (in_EAX[0x1a] == 0x58)) &&
     ((((*in_EDX & 1) != 0 && (in_EDX[0x1f] == 5)) && ((int)(char)in_EDX[6] == uVar3)))) {
    if (unaff_BL == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
      DAT_002ee892 = in_EDX[0x1a];
      DAT_002ee893 = *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x23);
    }
    for (iVar1 = 0; iVar1 < (int)(uint)(byte)(&DAT_002e05ec)[iVar2]; iVar1 = iVar1 + 1) {
      puVar4 = &DAT_002e0589 + uVar3 * 0xa84 + iVar1;
      if (*(short *)((int)(&DAT_002e0589 + uVar3 * 0xa84 + iVar1) + 0x33) ==
          *(short *)(in_EDX + 0x1b)) {
        for (; iVar1 < (int)((byte)(&DAT_002e05ec)[iVar2] - 1); iVar1 = iVar1 + 1) {
          *(undefined2 *)((int)puVar4 + 0x33) = *(undefined2 *)((int)puVar4 + 0x35);
          puVar4 = puVar4 + 1;
        }
        (&DAT_002e05ec)[iVar2] = (&DAT_002e05ec)[iVar2] + -1;
        *(undefined2 *)(&DAT_002e05bc + (uint)(byte)(&DAT_002e05ec)[iVar2] * 2 + iVar2) = 0;
      }
    }
    FUN_0008608c(0,0);
    FUN_000713bc();
    FUN_0002778e();
    FUN_00072af4();
    if ((&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == unaff_BL) {
      FUN_00051374();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_070bf9 (Ghidra: FUN_00070bf9)
 * Prototype: undefined4 sub_070bf9(void);
 * Address  : 0x70bf9 (Size: 19 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2dfac, 0x8685c, 0xdd894, 0xde6a8, 0xe5b3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00070bf9(void)

{
  int in_EAX;
  
  if ((99 < in_EAX) && (in_EAX < 0x6a)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_070c0c (Ghidra: FUN_00070c0c)
 * Prototype: void sub_070c0c(void);
 * Address  : 0x70c0c (Size: 138 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x708fa, 0xdd6c8, 0xde6a8
 * Callees  : 2 -> 0x23de2, 0x63122
 ******************************************************************************/
void FUN_00070c0c(void)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  bVar1 = *(byte *)(in_EAX + 0x2b);
  iVar4 = 0;
  do {
    local_20 = 0;
    do {
      local_20 = local_20 + 1;
      FUN_00023de2();
    } while (local_20 < 0x55);
    iVar4 = iVar4 + 1;
    puVar3 = extraout_ECX;
  } while (iVar4 < 0x55);
  for (; puVar3 < &DAT_002c91ff; puVar3 = (undefined4 *)((int)puVar3 + 5)) {
    uVar2 = *(uint *)((int)puVar3 + 1);
    *(uint *)((int)puVar3 + 1) = uVar2 & 0xfffffff;
    *(uint *)((int)puVar3 + 1) =
         *(uint *)((int)puVar3 + 1) |
         ((uint)(byte)('\x01' << (bVar1 & 0x1f)) | uVar2 >> 0x1c) << 0x1c;
  }
  FUN_00063122();
  return;
}

/******************************************************************************
 * Function : sub_070c96 (Ghidra: FUN_00070c96)
 * Prototype: void sub_070c96(void);
 * Address  : 0x70c96 (Size: 119 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x708fa
 * Callees  : 1 -> 0x81f5c
 ******************************************************************************/
void FUN_00070c96(void)

{
  ushort uVar1;
  int in_EAX;
  int extraout_EDX;
  int extraout_EDX_00;
  
  uVar1 = (&DAT_002e05b6)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84];
  while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]) {
    FUN_00081f5c();
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX + 100)] + 0x1f);
  }
  uVar1 = (&DAT_002e05b8)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84];
  while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]) {
    FUN_00081f5c();
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX_00 + 100)] + 0x1f);
  }
  return;
}

/******************************************************************************
 * Function : dk_bonus_level_assigned_this_070d0d (Ghidra: FUN_00070d0d)
 * Prototype: void dk_bonus_level_assigned_this_070d0d(void);
 * Address  : 0x70d0d (Size: 121 bytes)
 * Module   : specials.cpp [direct_file_string_xref]
 * OrigLine : specials.cpp:507 ("No Bonus level assigned to this level")
 * Naming   : String 'No Bonus level assigned to this level'
 * Callers  : 1 -> 0x708fa
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x167780: "specials.cpp"
 *   - 0x16775a: "No Bonus level assigned to this level"
 ******************************************************************************/
void FUN_00070d0d(void)

{
  DAT_0019d0ba = DAT_0019d0ba | 2;
  if (DAT_002e78e9 < 0xf) {
    if (7 < DAT_002e78e9) {
      if (DAT_002e78e9 < 9) {
        DAT_002ee888 = 1;
        goto LAB_00070d7c;
      }
      if (DAT_002e78e9 == 9) {
        DAT_002ee889 = 1;
        goto LAB_00070d7c;
      }
    }
  }
  else {
    if (DAT_002e78e9 < 0x10) {
      DAT_002ee88a = 1;
      goto LAB_00070d7c;
    }
    if (0x10 < DAT_002e78e9) {
      if (DAT_002e78e9 < 0x12) {
        DAT_002ee88b = 1;
        goto LAB_00070d7c;
      }
      if (DAT_002e78e9 == 0x12) {
        DAT_002ee88c = 1;
        goto LAB_00070d7c;
      }
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("specials.cpp", line 507, "No Bonus level assigned to this level") */
LAB_00070d7c:
  DAT_0019d0b8 = DAT_0019d0b8 & 0xfd;
  return;
}

/******************************************************************************
 * Function : sub_070d86 (Ghidra: FUN_00070d86)
 * Prototype: void sub_070d86(void);
 * Address  : 0x70d86 (Size: 211 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x708fa
 * Callees  : 2 -> 0x43bb3, 0x82204
 ******************************************************************************/
void FUN_00070d86(void)

{
  byte bVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  
  bVar1 = *(byte *)(in_EAX + 0x2b);
  uVar2 = (&DAT_002e05b6)[(uint)bVar1 * 0xa84];
  while( true ) {
    if ((&DAT_001ae9fc)[uVar2] <= DAT_001ae9fc) {
      uVar2 = (&DAT_002e05b8)[(uint)bVar1 * 0xa84];
      while ((DAT_001ae9fc < (&DAT_001ae9fc)[uVar2] && (iVar3 = FUN_00043bb3(), iVar3 != 0))) {
        FUN_00082204();
        *(undefined2 *)(iVar3 + 0x5e) = *(undefined2 *)(extraout_ECX_00 + 0x5e);
        uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x1f);
      }
      return;
    }
    iVar3 = FUN_00043bb3();
    if (iVar3 == 0) break;
    FUN_00082204();
    *(undefined2 *)(iVar3 + 0x5e) = *(undefined2 *)(extraout_ECX + 0x5e);
    uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x1f);
  }
  return;
}

/******************************************************************************
 * Function : sub_070e59 (Ghidra: FUN_00070e59)
 * Prototype: void sub_070e59(void);
 * Address  : 0x70e59 (Size: 922 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x708fa
 * Callees  : 4 -> 0x3f80c, 0xd7688, 0xd99f8, 0xe7714
 ******************************************************************************/
void FUN_00070e59(void)

{
  byte bVar1;
  char *pcVar2;
  int in_EAX;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  char *local_30;
  char *local_2c;
  byte local_28;
  byte local_24;
  byte local_20;
  byte local_1c;
  
  pcVar2 = DAT_00199228;
  puVar7 = &local_68;
  local_38 = (uint)*(byte *)(in_EAX + 0x2b);
  pbVar10 = &DAT_002d33c5;
  local_2c = DAT_00199228;
  pcVar3 = DAT_00199228 + 0x1c39;
  for (pcVar8 = DAT_00199228; pcVar8 < pcVar3; pcVar8 = pcVar8 + 1) {
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 6;
    *pcVar8 = ((&DAT_001921c6)[(uint)bVar1 * 0x16] & 0x29) != 0;
  }
  local_64 = (&DAT_0019033b)
             [*(byte *)((&DAT_001ae9fc)
                        [(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]] + 0x10)];
  local_3c = (&DAT_0019033b)
             [*(byte *)((&DAT_001ae9fc)
                        [(ushort)(&DAT_002e0589)[(uint)*(byte *)(in_EAX + 0x2b) * 0xa84]] + 0xe)];
  local_34 = 0;
  uVar9 = 0;
  pcVar2[local_64 * 0x55 + local_3c] = pcVar2[local_64 * 0x55 + local_3c] | 2;
  local_30 = pcVar3;
  do {
    if (0x9f < local_34) {
      *(uint *)((int)puVar7 + -4) = uVar9;
      *(undefined **)((int)puVar7 + -8) = &DAT_0016778d;
      *(undefined1 **)((int)puVar7 + -0xc) = &DAT_0019cbac;
      *(undefined4 *)((int)puVar7 + -0x10) = 0x70f04;
      FUN_000e7714();
    }
    iVar4 = local_64 * 0x55 + local_3c;
    local_1c = (char)local_3c - 1;
    puVar6 = (undefined1 *)puVar7;
    if ((local_2c[iVar4 + -1] & 1U) == 0) {
      if ((local_2c[iVar4 + -1] & 2U) == 0) {
        local_2c[iVar4 + -1] = local_2c[iVar4 + -1] | 2;
        iVar4 = uVar9 * 2;
        local_30[iVar4] = local_1c;
        uVar9 = uVar9 + 1;
        (local_30 + iVar4)[1] = (byte)local_64;
      }
    }
    else {
      local_2c[iVar4 + -1] = local_2c[iVar4 + -1] | 2;
      if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar4 + -1) * 6] * 0x16] == '\x01') {
        local_44 = local_64 & 0xff;
        local_4c = (uint)local_1c;
        *(undefined4 *)((int)puVar7 + -4) = 0x70f80;
        iVar4 = FUN_0003f80c();
        if (iVar4 != 0) {
          local_58 = (uint)(byte)((byte)local_64 * '\x03');
          puVar6 = (undefined1 *)((int)puVar7 + -4);
          *(undefined4 *)((int)puVar7 + -4) = 1;
          local_5c = (uint)(byte)(local_1c * '\x03');
          *(undefined4 *)((int)puVar7 + -8) = 0x70fad;
          FUN_000d99f8();
          *(undefined4 *)((int)puVar7 + -8) = 0x70fbb;
          FUN_000d7688();
        }
      }
    }
    iVar4 = local_64 * 0x55 + local_3c;
    local_28 = (char)local_3c + 1;
    puVar5 = puVar6;
    if ((local_2c[iVar4 + 1] & 1U) == 0) {
      if ((local_2c[iVar4 + 1] & 2U) == 0) {
        local_2c[iVar4 + 1] = local_2c[iVar4 + 1] | 2;
        iVar4 = uVar9 * 2;
        local_30[iVar4] = local_28;
        uVar9 = uVar9 + 1;
        (local_30 + iVar4)[1] = (byte)local_64;
      }
    }
    else {
      local_2c[iVar4 + 1] = local_2c[iVar4 + 1] | 2;
      if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar4 + 1) * 6] * 0x16] == '\x01') {
        local_48 = local_64 & 0xff;
        local_50 = (uint)local_28;
        *(undefined4 *)(puVar6 + -4) = 0x71034;
        iVar4 = FUN_0003f80c();
        if (iVar4 != 0) {
          local_58 = (uint)(byte)((byte)local_64 * '\x03');
          puVar5 = puVar6 + -4;
          *(undefined4 *)(puVar6 + -4) = 1;
          local_5c = (uint)(byte)(local_28 * '\x03');
          *(undefined4 *)(puVar6 + -8) = 0x71061;
          FUN_000d99f8();
          *(undefined4 *)(puVar6 + -8) = 0x7106f;
          FUN_000d7688();
        }
      }
    }
    iVar4 = local_3c + (local_64 - 1) * 0x55;
    local_20 = (byte)local_64 - 1;
    pbVar10 = (byte *)(local_2c + iVar4);
    puVar6 = puVar5;
    if ((*pbVar10 & 1) == 0) {
      if ((*pbVar10 & 2) == 0) {
        *pbVar10 = *pbVar10 | 2;
        iVar4 = uVar9 * 2;
        local_30[iVar4] = (char)local_3c;
        uVar9 = uVar9 + 1;
        (local_30 + iVar4)[1] = local_20;
      }
    }
    else {
      *pbVar10 = *pbVar10 | 2;
      if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[iVar4 * 6] * 0x16] == '\x01') {
        local_68 = (uint)local_20;
        local_40 = local_3c & 0xff;
        *(undefined4 *)(puVar5 + -4) = 0x710e6;
        iVar4 = FUN_0003f80c();
        if (iVar4 != 0) {
          local_5c = (uint)(byte)(local_20 * '\x03');
          puVar6 = puVar5 + -4;
          *(undefined4 *)(puVar5 + -4) = 1;
          local_58 = (uint)(byte)((char)local_3c * '\x03');
          *(undefined4 *)(puVar5 + -8) = 0x71113;
          FUN_000d99f8();
          *(undefined4 *)(puVar5 + -8) = 0x71121;
          FUN_000d7688();
        }
      }
    }
    iVar4 = local_3c + (local_64 + 1) * 0x55;
    local_24 = (byte)local_64 + 1;
    pbVar10 = (byte *)(local_2c + iVar4);
    puVar7 = (uint *)puVar6;
    if ((*pbVar10 & 1) == 0) {
      if ((*pbVar10 & 2) == 0) {
        *pbVar10 = *pbVar10 | 2;
        iVar4 = uVar9 * 2;
        local_30[iVar4] = (char)local_3c;
        uVar9 = uVar9 + 1;
        (local_30 + iVar4)[1] = local_24;
      }
    }
    else {
      *pbVar10 = *pbVar10 | 2;
      if ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[iVar4 * 6] * 0x16] == '\x01') {
        local_60 = (uint)local_24;
        local_54 = local_3c & 0xff;
        *(undefined4 *)(puVar6 + -4) = 0x71198;
        iVar4 = FUN_0003f80c();
        if (iVar4 != 0) {
          local_5c = (uint)(byte)(local_24 * '\x03');
          puVar7 = (uint *)(puVar6 + -4);
          *(undefined4 *)(puVar6 + -4) = 1;
          local_58 = (uint)(byte)((char)local_3c * '\x03');
          *(undefined4 *)(puVar6 + -8) = 0x711c5;
          FUN_000d99f8();
          *(undefined4 *)(puVar6 + -8) = 0x711d3;
          FUN_000d7688();
        }
      }
    }
    local_3c = (uint)*pcVar3;
    local_34 = local_34 + 1;
    local_64 = (uint)pcVar3[1];
    pcVar3 = pcVar3 + 2;
  } while (local_34 <= uVar9);
  *(undefined4 *)((int)puVar7 + -4) = 0x70c8f;
  FUN_00063122();
  return;
}

/******************************************************************************
 * Function : sub_0711f3 (Ghidra: FUN_000711f3)
 * Prototype: undefined4 sub_0711f3(void);
 * Address  : 0x711f3 (Size: 287 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x708fa
 * Callees  : 3 -> 0x43bb3, 0x63a25, 0xb3b10
 ******************************************************************************/
undefined4 FUN_000711f3(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if ((&DAT_002e0ea2)[(uint)DAT_002eb542 * 0x1508] != '\0') {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uVar5 = DAT_002e8bf6 % (uint)(byte)(&DAT_002e0ea2)[(uint)DAT_002eb542 * 0x1508];
    uVar1 = (&DAT_002e05b6)[(uint)DAT_002eb542 * 0xa84];
    while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
      if (((*(char *)(uVar2 + 0x1a) != '\x06') && (*(char *)(uVar2 + 0x1a) != '\a')) &&
         (uVar5 = uVar5 - 1, uVar4 = uVar2, uVar5 == 0)) {
        if (uVar2 != 0) break;
        uVar5 = 1;
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
    }
    if (uVar4 != 0) {
      FUN_000b3b10();
      FUN_00063a25();
      return 1;
    }
  }
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  iVar3 = FUN_00043bb3();
  if (iVar3 != 0) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_071312 (Ghidra: FUN_00071312)
 * Prototype: void sub_071312(void);
 * Address  : 0x71312 (Size: 85 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x708fa
 * Callees  : 2 -> 0x5c848, 0x5cf2d
 ******************************************************************************/
void FUN_00071312(void)

{
  undefined1 *in_EAX;
  int in_EDX;
  
  if ((*(int *)(&DAT_002e1928 + (uint)(byte)in_EAX[0x2b] * 0x1508) != 0) &&
     (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef)) {
    DAT_003772d8 = *(undefined2 *)(in_EDX + 0x1b);
    DAT_003772da = 0;
    FUN_0005c848();
    FUN_0005cf2d();
  }
  return;
}

/******************************************************************************
 * Function : sub_071367 (Ghidra: FUN_00071367)
 * Prototype: void sub_071367(void);
 * Address  : 0x71367 (Size: 85 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x708fa
 * Callees  : 2 -> 0x5c848, 0x5cf2d
 ******************************************************************************/
void FUN_00071367(void)

{
  undefined1 *in_EAX;
  int in_EDX;
  
  if (((&DAT_002e0ea2)[(uint)(byte)in_EAX[0x2b] * 0x1508] != '\0') &&
     (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef)) {
    DAT_003772d8 = *(undefined2 *)(in_EDX + 0x1b);
    DAT_003772de = 0;
    FUN_0005c848();
    FUN_0005cf2d();
  }
  return;
}

/******************************************************************************
 * Function : sub_0713bc (Ghidra: FUN_000713bc)
 * Prototype: void sub_0713bc(void);
 * Address  : 0x713bc (Size: 16 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x708fa, 0x70a3c, 0x70ac6
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
void FUN_000713bc(void)

{
  FUN_00024998();
  return;
}

