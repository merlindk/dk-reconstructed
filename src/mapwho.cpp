/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: mapwho.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 23
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_050c38 (Ghidra: FUN_00050c38)
 * Prototype: void sub_050c38(void);
 * Address  : 0x50c38 (Size: 113 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 22 -> 0x24998, 0x43bb3, 0x43f07, 0x442ca, 0x444a9, 0x447fb, 0x449a4, 0x44b13, 0x44ca6, 0x44dae ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00050c38(void)

{
  uint *puVar1;
  int iVar2;
  byte *in_EAX;
  ushort uVar3;
  
  uVar3 = (ushort)((uint)(*(int *)((int)&DAT_00279203 +
                                  (uint)CONCAT11(in_EAX[0x10],in_EAX[0xe]) * 5 + 1) << 10) >> 0x15);
  *(ushort *)(in_EAX + 2) = uVar3;
  if (uVar3 != 0) {
    *(undefined2 *)((&DAT_001ae9fc)[uVar3] + 4) = *(undefined2 *)(in_EAX + 0x1b);
  }
  uVar3 = *(ushort *)(in_EAX + 0x1b);
  iVar2 = (uint)CONCAT11(in_EAX[0x10],in_EAX[0xe]) * 5;
  puVar1 = (uint *)((int)&DAT_00279203 + iVar2 + 1);
  *puVar1 = *puVar1 & 0xffc007ff;
  puVar1 = (uint *)((int)&DAT_00279203 + iVar2 + 1);
  *puVar1 = *puVar1 | (uVar3 & 0x7ff) << 0xb;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  *in_EAX = *in_EAX | 2;
  return;
}

/******************************************************************************
 * Function : sub_050ca9 (Ghidra: FUN_00050ca9)
 * Prototype: void sub_050ca9(void);
 * Address  : 0x50ca9 (Size: 124 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x4d2c3, 0x72af4, 0x81eac, 0x81ed4, 0x84904, 0xb3b10, 0xb3dac, 0xb41d8, 0xb444c, 0xb45b4 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00050ca9(void)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte *in_EAX;
  
  if ((*in_EAX & 2) != 0) {
    if (*(short *)(in_EAX + 4) == 0) {
      uVar2 = *(ushort *)(in_EAX + 2);
      iVar3 = (uint)CONCAT11(in_EAX[0x10],in_EAX[0xe]) * 5;
      puVar1 = (uint *)((int)&DAT_00279203 + iVar3 + 1);
      *puVar1 = *puVar1 & 0xffc007ff;
      puVar1 = (uint *)((int)&DAT_00279203 + iVar3 + 1);
      *puVar1 = *puVar1 | (uVar2 & 0x7ff) << 0xb;
    }
    else {
      *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 4)] + 2) = *(undefined2 *)(in_EAX + 2);
    }
    if (*(short *)(in_EAX + 2) != 0) {
      *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(in_EAX + 2)] + 4) = *(undefined2 *)(in_EAX + 4);
    }
    in_EAX[4] = 0;
    in_EAX[5] = 0;
    in_EAX[2] = 0;
    in_EAX[3] = 0;
    *in_EAX = *in_EAX & 0xfd;
  }
  return;
}

/******************************************************************************
 * Function : sub_050d25 (Ghidra: FUN_00050d25)
 * Prototype: void sub_050d25(void);
 * Address  : 0x50d25 (Size: 23 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x36ff4, 0x40d25, 0x40db9
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00050d25(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 5;
    puVar1 = (uint *)((int)&DAT_00279203 + iVar3 + 1);
    *puVar1 = *puVar1 & 0xffc007ff;
    iVar3 = iVar2;
  } while (iVar2 != 0x50000);
  return;
}

/******************************************************************************
 * Function : sub_050d3c (Ghidra: FUN_00050d3c)
 * Prototype: uint sub_050d3c(void);
 * Address  : 0x50d3c (Size: 84 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x23014, 0x38668, 0x386e1, 0x50e72, 0x50ea6, 0x744d5, 0xc7f7c, 0xc8654, 0xc8d10, 0xc9178 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00050d3c(void)

{
  char in_AL;
  uint uVar1;
  uint in_ECX;
  ushort in_DX;
  uint unaff_EBX;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 + ((in_ECX & 0xffff) * 0x100 + (unaff_EBX & 0xffff)) * 5 + 1
                    ) & 0x3fffff) >> 0xb;
  do {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x1f) == in_AL) {
      if (*(byte *)(uVar1 + 0x1a) == in_DX) {
        return uVar1;
      }
      if (in_DX == 0xffff) {
        return uVar1;
      }
    }
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  } while( true );
}

/******************************************************************************
 * Function : sub_050d90 (Ghidra: FUN_00050d90)
 * Prototype: longlong sub_050d90(void);
 * Address  : 0x50d90 (Size: 83 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc6be0
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00050d90(void)

{
  uint in_EAX;
  uint in_EDX;
  uint uVar1;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 +
                    (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe)) * 5
                    + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (((*(char *)(in_EAX + 0x1f) == *(char *)(uVar1 + 0x1f)) &&
        (*(char *)(in_EAX + 0x1a) == *(char *)(uVar1 + 0x1a))) && (uVar1 != in_EAX)) break;
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_050de3 (Ghidra: FUN_00050de3)
 * Prototype: uint sub_050de3(void);
 * Address  : 0x50de3 (Size: 84 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x6484c, 0x65d3e
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_00050de3(void)

{
  char in_AL;
  uint uVar1;
  ushort in_DX;
  int unaff_EBX;
  
  uVar1 = (*(uint *)((int)&DAT_00279203 +
                    (uint)CONCAT11(*(undefined1 *)(unaff_EBX + 3),*(undefined1 *)(unaff_EBX + 1)) *
                    5 + 1) & 0x3fffff) >> 0xb;
  do {
    uVar1 = (&DAT_001ae9fc)[uVar1];
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (in_AL == *(char *)(uVar1 + 0x1f)) {
      if (*(byte *)(uVar1 + 0x1a) == in_DX) {
        return uVar1;
      }
      if (in_DX == 0xffff) {
        return uVar1;
      }
    }
    uVar1 = (uint)*(ushort *)(uVar1 + 2);
  } while( true );
}

/******************************************************************************
 * Function : sub_050e37 (Ghidra: FUN_00050e37)
 * Prototype: void sub_050e37(void);
 * Address  : 0x50e37 (Size: 59 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x50ea6, 0xc6494, 0xc6be0
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00050e37(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  
  *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) + in_EDX;
  if (in_EDX + *(int *)(in_EAX + 0x13) < (int)DAT_002eb9f0) {
    iVar1 = *(int *)(in_EAX + 0x13) / 2 + 0x96;
    if (599 < iVar1) {
      iVar1 = 600;
    }
    *(short *)(in_EAX + 0x46) = (short)iVar1;
    return;
  }
  *(undefined2 *)(in_EAX + 0x46) = 600;
  return;
}

/******************************************************************************
 * Function : sub_050e72 (Ghidra: FUN_00050e72)
 * Prototype: undefined4 sub_050e72(void);
 * Address  : 0x50e72 (Size: 52 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x3ef50, 0x3fcd0
 * Callees  : 1 -> 0x50d3c
 ******************************************************************************/
undefined4 FUN_00050e72(void)

{
  int iVar1;
  
  iVar1 = FUN_00050d3c();
  if ((iVar1 != 0) && ((int)DAT_002eb9f0 <= *(int *)(iVar1 + 0x13))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_050ea6 (Ghidra: FUN_00050ea6)
 * Prototype: int sub_050ea6(void);
 * Address  : 0x50ea6 (Size: 116 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x3ef50, 0x6c681, 0xc6be0, 0xc9280, 0xce418, 0xce630
 * Callees  : 3 -> 0x43f07, 0x50d3c, 0x50e37
 ******************************************************************************/
int FUN_00050ea6(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00050d3c();
  if (iVar1 == 0) {
    iVar1 = FUN_00043f07();
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x13) = in_EAX;
      iVar2 = in_EAX / 2 + 0x96;
      if (599 < iVar2) {
        iVar2 = 600;
      }
      *(short *)(iVar1 + 0x46) = (short)iVar2;
    }
  }
  else {
    FUN_00050e37();
  }
  return iVar1;
}

/******************************************************************************
 * Function : dk_trying_create_gold_hoarde_050f1a (Ghidra: FUN_00050f1a)
 * Prototype: int dk_trying_create_gold_hoarde_050f1a(void);
 * Address  : 0x50f1a (Size: 275 bytes)
 * Module   : mapwho.cpp [direct_file_string_xref]
 * OrigLine : mapwho.cpp:315
 * Naming   : String 'Trying to create a gold hoarde with %d gold'
 * Callers  : 3 -> 0x3f238, 0xc6b04, 0xce630
 * Callees  : 3 -> 0x43f07, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1659f8: "mapwho.cpp"
 *   - 0x1659cc: "Trying to create a gold hoarde with %d gold"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00050f1a(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar1 = ((_DAT_002eb9ea * 9) / 5) *
          (int)((ulonglong)*(ushort *)(in_EAX + 0xe) /
               (ulonglong)(longlong)(int)(uint)*(ushort *)(in_EAX + 0x3b));
  if (unaff_EBX < 1) {
    FUN_000e7714(&DAT_0019cbac,s_Trying_to_create_a_gold_hoarde_w_001659cc);
    FUN_000ddaf0(); /* LbErrorLog("mapwho.cpp", line 315, g_log_buf) */
    return 0;
  }
  if (iVar1 < unaff_EBX) {
    unaff_EBX = iVar1;
  }
  iVar1 = FUN_00043f07((int)*(char *)(in_EAX + 3));
  if (iVar1 != 0) {
    iVar2 = _DAT_002eb9ea * 9;
    if (unaff_EBX < _DAT_002eb9ea * 9) {
      iVar2 = unaff_EBX;
    }
    *(int *)(iVar1 + 0x13) = iVar2;
    *(int *)(in_EAX + 0x17) = *(int *)(in_EAX + 0x17) + iVar2;
    (&DAT_002e1082)[*(char *)(in_EAX + 3) * 0x542] =
         (&DAT_002e1082)[*(char *)(in_EAX + 3) * 0x542] + *(int *)(iVar1 + 0x13);
    iVar2 = *(int *)(iVar1 + 0x13) / ((_DAT_002eb9ea * 9) / 5);
    if (3 < iVar2) {
      iVar2 = 4;
    }
    *(short *)(in_EAX + 0x10) = *(short *)(in_EAX + 0x10) + (short)iVar2;
  }
  return iVar1;
}

/******************************************************************************
 * Function : sub_05102d (Ghidra: FUN_0005102d)
 * Prototype: int sub_05102d(void);
 * Address  : 0x5102d (Size: 336 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x10fdf, 0x23868, 0x4faf1, 0xce418
 * Callees  : 1 -> 0x72af4
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0005102d(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  int local_14;
  
  if (unaff_EBX != 0) {
    if (*(int *)(in_EAX + 0x13) < unaff_EBX) {
      unaff_EBX = *(int *)(in_EAX + 0x13);
    }
    local_14 = *(int *)(in_EAX + 0x13) / ((_DAT_002eb9ea * 9) / 5);
    if (3 < local_14) {
      local_14 = 4;
    }
    *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) - (short)local_14;
    *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) - unaff_EBX;
    *(int *)(in_EDX + 0x17) = *(int *)(in_EDX + 0x17) - unaff_EBX;
    (&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542] =
         (&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542] - unaff_EBX;
    if (*(int *)(in_EAX + 0x13) == 0) {
      FUN_00072af4();
    }
    else {
      iVar2 = *(int *)(in_EAX + 0x13) / ((_DAT_002eb9ea * 9) / 5);
      if (3 < iVar2) {
        iVar2 = 4;
      }
      *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) + (short)iVar2;
      iVar2 = *(int *)(in_EAX + 0x13) / ((_DAT_002eb9ea * 9) / 5);
      if (3 < iVar2) {
        iVar2 = 4;
      }
      bVar1 = (&DAT_0017c978)[iVar2 * 2];
      *(byte *)(in_EAX + 0x1a) = bVar1;
      iVar2 = (uint)bVar1 * 0x16;
      FUN_0008ccec(0,0,(&DAT_0018b917)[iVar2],*(undefined2 *)(&DAT_0018b913 + iVar2));
    }
  }
  return unaff_EBX;
}

/******************************************************************************
 * Function : sub_05117d (Ghidra: FUN_0005117d)
 * Prototype: int sub_05117d(void);
 * Address  : 0x5117d (Size: 367 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x2ab14, 0x3f238, 0xc6b04, 0xce630
 * Callees  : 1 -> 0x8ccec
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0005117d(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  int unaff_EBX;
  int local_18;
  
  iVar2 = ((_DAT_002eb9ea * 9) / 5) *
          (int)((ulonglong)*(ushort *)(in_EDX + 0xe) /
               (ulonglong)(longlong)(int)(uint)*(ushort *)(in_EDX + 0x3b));
  if (iVar2 < *(int *)(in_EAX + 0x13) + unaff_EBX) {
    unaff_EBX = iVar2 - *(int *)(in_EAX + 0x13);
  }
  if (unaff_EBX != 0) {
    local_18 = *(int *)(in_EAX + 0x13) / ((_DAT_002eb9ea * 9) / 5);
    if (3 < local_18) {
      local_18 = 4;
    }
    *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) - (short)local_18;
    *(int *)(in_EAX + 0x13) = *(int *)(in_EAX + 0x13) + unaff_EBX;
    *(int *)(in_EDX + 0x17) = *(int *)(in_EDX + 0x17) + unaff_EBX;
    if ((int)*(char *)(in_EAX + 6) != (uint)DAT_002eb543) {
      (&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542] =
           (&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542] + unaff_EBX;
    }
    iVar2 = *(int *)(in_EAX + 0x13) / ((_DAT_002eb9ea * 9) / 5);
    if (3 < iVar2) {
      iVar2 = 4;
    }
    *(short *)(in_EDX + 0x10) = *(short *)(in_EDX + 0x10) + (short)iVar2;
    iVar2 = *(int *)(in_EAX + 0x13) / ((_DAT_002eb9ea * 9) / 5);
    if (3 < iVar2) {
      iVar2 = 4;
    }
    bVar1 = (&DAT_0017c978)[iVar2 * 2];
    *(byte *)(in_EAX + 0x1a) = bVar1;
    FUN_0008ccec(0,0,(&DAT_0018b917)[(uint)bVar1 * 0x16]);
  }
  return unaff_EBX;
}

/******************************************************************************
 * Function : sub_0512ec (Ghidra: FUN_000512ec)
 * Prototype: longlong sub_0512ec(void);
 * Address  : 0x512ec (Size: 50 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5131e, 0xd08a8
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000512ec(void)

{
  char cVar1;
  int in_EAX;
  uint in_EDX;
  
  if ((*(char *)(in_EAX + 0x1f) == '\x01') &&
     ((((cVar1 = *(char *)(in_EAX + 0x1a), cVar1 == '4' || (cVar1 == '5')) || (cVar1 == '6')) ||
      ((cVar1 == '7' || (cVar1 == '8')))))) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_05131e (Ghidra: FUN_0005131e)
 * Prototype: uint sub_05131e(void);
 * Address  : 0x5131e (Size: 84 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 8 -> 0x10fdf, 0x23868, 0x3f238, 0x7d674, 0xc6b04, 0xc9280, 0xcc51c, 0xce418
 * Callees  : 1 -> 0x512ec
 ******************************************************************************/
uint FUN_0005131e(void)

{
  uint in_EAX;
  uint in_EDX;
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (&DAT_001ae9fc)
          [(*(uint *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1)
           & 0x3fffff) >> 0xb];
  do {
    if (uVar1 <= DAT_001ae9fc) {
      return 0;
    }
    if (*(char *)(uVar1 + 0x1f) == '\x01') {
      uVar2 = FUN_000512ec();
      uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
      if ((int)uVar2 != 0) {
        return uVar1;
      }
    }
    uVar1 = (&DAT_001ae9fc)[*(ushort *)(uVar1 + 2)];
  } while( true );
}

/******************************************************************************
 * Function : sub_051417 (Ghidra: FUN_00051417)
 * Prototype: void sub_051417(void);
 * Address  : 0x51417 (Size: 59 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 3 -> 0x51374, 0x51533, 0x6ebff
 ******************************************************************************/
void FUN_00051417(void)

{
  int iVar1;
  
  iVar1 = FUN_0006ebff();
  if ((iVar1 == 0) && (DAT_0034b238 = iVar1, DAT_0034b214 != '\0')) {
    FUN_00051533();
    FUN_00051374();
  }
  return;
}

/******************************************************************************
 * Function : sub_051452 (Ghidra: FUN_00051452)
 * Prototype: void sub_051452(void);
 * Address  : 0x51452 (Size: 22 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x404f7, 0x51468
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00051452(void)

{
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : sub_051468 (Ghidra: FUN_00051468)
 * Prototype: void sub_051468(void);
 * Address  : 0x51468 (Size: 28 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x404f7, 0x6f3d6
 * Callees  : 1 -> 0x51452
 ******************************************************************************/
void FUN_00051468(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00051452();
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 0xc;
    *(undefined4 *)((int)&DAT_0017cb84 + iVar2) = 0;
    iVar2 = iVar1;
  } while (iVar1 != 0x5e8);
  return;
}

/******************************************************************************
 * Function : sub_051484 (Ghidra: FUN_00051484)
 * Prototype: undefined8 sub_051484(void);
 * Address  : 0x51484 (Size: 62 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51374
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00051484(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  return CONCAT44(in_EDX,u________________0123456789__<_>___0017ca04[in_EAX * 3 + 0x5e] +
                         DAT_002e8bfa % *(uint *)(&DAT_0017cb80 + in_EAX * 0xc));
}

/******************************************************************************
 * Function : sub_0514c2 (Ghidra: FUN_000514c2)
 * Prototype: undefined4 sub_0514c2(void);
 * Address  : 0x514c2 (Size: 8 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51374
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000514c2(void)

{
  int in_EAX;
  
  return *(undefined4 *)(&DAT_0017c984 + in_EAX * 4);
}

/******************************************************************************
 * Function : sub_0514ca (Ghidra: FUN_000514ca)
 * Prototype: longlong sub_0514ca(void);
 * Address  : 0x514ca (Size: 46 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51374
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000514ca(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while( true ) {
    if (0x23 < iVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (((&DAT_0034b214)[iVar1] == '\x01') && (in_EAX == *(int *)((int)&DAT_0034b215 + iVar1)))
    break;
    iVar1 = iVar1 + 9;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0514f8 (Ghidra: FUN_000514f8)
 * Prototype: undefined4 sub_0514f8(void);
 * Address  : 0x514f8 (Size: 59 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51374
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000514f8(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while( true ) {
    if (0x23 < iVar1) {
      return 0;
    }
    if ((&DAT_0034b214)[iVar1] == '\0') break;
    iVar1 = iVar1 + 9;
  }
  (&DAT_0034b214)[iVar1] = 1;
  *(undefined4 *)((int)&DAT_0034b215 + iVar1) = in_EAX;
  *(undefined4 *)((int)&DAT_0034b219 + iVar1) = in_EDX;
  return 1;
}

/******************************************************************************
 * Function : sub_051533 (Ghidra: FUN_00051533)
 * Prototype: longlong sub_051533(void);
 * Address  : 0x51533 (Size: 102 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x51417
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
longlong FUN_00051533(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  int iVar2;
  
  if ((&DAT_0034b214)[in_EAX * 9] != '\x01') {
    return (ulonglong)in_EDX << 0x20;
  }
  iVar2 = in_EAX + 1;
  for (iVar1 = iVar2 * 9; iVar1 < 0x24; iVar1 = iVar1 + 9) {
    *(undefined4 *)((int)&DAT_0034b208 + iVar1 + 3) = *(undefined4 *)(&DAT_0034b214 + iVar1);
    *(undefined4 *)((int)&DAT_0034b20c + iVar1 + 3) =
         *(undefined4 *)((int)&DAT_0034b215 + iVar1 + 3);
    *(undefined1 *)((int)&DAT_0034b210 + iVar1 + 3) =
         *(undefined1 *)((int)&DAT_0034b219 + iVar1 + 3);
    if ((&DAT_0034b214)[iVar1] == '\0') break;
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 4) {
    FUN_000e6a10();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_05159c (Ghidra: FUN_0005159c)
 * Prototype: undefined8 sub_05159c(int param_1);
 * Address  : 0x5159c (Size: 66 bytes)
 * Module   : mapwho.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0005159c(int param_1)

{
  int in_EAX;
  int in_ECX;
  int iVar1;
  undefined4 *in_EDX;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)(in_EAX + in_ECX * 0x500 + unaff_EBX);
  iVar2 = 0x1e0;
  puVar4 = in_EDX;
  do {
    for (iVar1 = 0xa0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = puVar3 + 0xa0;
    puVar4 = (undefined4 *)((int)puVar4 + param_1 + -0x280);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return CONCAT44(in_EDX,in_EAX);
}

