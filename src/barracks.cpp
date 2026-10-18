/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: barracks.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 12
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0130c5 (Ghidra: FUN_000130c5)
 * Prototype: void sub_0130c5(void);
 * Address  : 0x130c5 (Size: 64 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x11e00, 0x13105
 * Callees  : 3 -> 0x13359, 0xb28e8, 0xdc354
 ******************************************************************************/
void FUN_000130c5(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int in_EDX;
  
  FUN_00013359(in_EDX + 0xc);
  uVar1 = FUN_000b28e8();
  *(undefined2 *)(in_EDX + 0x10) = uVar1;
  uVar2 = FUN_000dc354();
  *(undefined4 *)(in_EDX + 0x62) = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_013105 (Ghidra: FUN_00013105)
 * Prototype: undefined4 sub_013105(void);
 * Address  : 0x13105 (Size: 100 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x12002
 * Callees  : 2 -> 0x11e00, 0x130c5
 ******************************************************************************/
undefined4 FUN_00013105(void)

{
  undefined4 uVar1;
  int in_EDX;
  
  if (*(byte *)(in_EDX + 0x28) < *(byte *)(in_EDX + 0x51)) {
    *(char *)(in_EDX + 0x28) = *(char *)(in_EDX + 0x28) + '\x01';
    if (*(byte *)(in_EDX + 0x51) == *(byte *)(in_EDX + 0x28)) {
      if (*(byte *)(in_EDX + 0x51) < *(byte *)(in_EDX + 0x52)) {
        uVar1 = FUN_00011e00();
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      FUN_000130c5();
      FUN_0001211a();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_013359 (Ghidra: FUN_00013359)
 * Prototype: void sub_013359(void);
 * Address  : 0x13359 (Size: 209 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x130c5
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00013359(void)

{
  char cVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int in_EAX;
  short *in_ECX;
  int in_EDX;
  short sVar5;
  int unaff_EBX;
  int iVar6;
  
  iVar6 = unaff_EBX * 4 + in_EDX;
  if (unaff_EBX == *(byte *)(in_EDX + 0x52) - 1) {
    *in_ECX = *(short *)(iVar6 + 0x29);
    in_ECX[1] = *(short *)(iVar6 + 0x2b);
    return;
  }
  uVar4 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) / 2;
  cVar1 = *(char *)(iVar6 + 0x29);
  cVar2 = *(char *)(iVar6 + 0x2b);
  *in_ECX = *(short *)(iVar6 + 0x29) + 1;
  sVar3 = *(short *)(iVar6 + 0x2b);
  *(undefined1 *)in_ECX = 0;
  sVar5 = uVar4 + 1;
  in_ECX[1] = sVar3 + 1;
  *(undefined1 *)(in_ECX + 1) = 0;
  if (cVar1 == -1) {
    if (cVar2 == -1) {
      *in_ECX = *in_ECX - sVar5;
      goto LAB_000133d9;
    }
    if (cVar2 == '\0') {
      *in_ECX = *in_ECX - sVar5;
      return;
    }
    *in_ECX = *in_ECX - sVar5;
  }
  else if (cVar1 == '\0') {
    if (cVar2 == -1) {
LAB_000133d9:
      in_ECX[1] = in_ECX[1] - sVar5;
      return;
    }
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    if (cVar2 == -1) {
      *in_ECX = *in_ECX + uVar4;
      goto LAB_000133d9;
    }
    if (cVar2 == '\0') {
      *in_ECX = *in_ECX + uVar4;
      return;
    }
    *in_ECX = *in_ECX + uVar4;
  }
  in_ECX[1] = in_ECX[1] + uVar4;
  return;
}

/******************************************************************************
 * Function : sub_01342a (Ghidra: FUN_0001342a)
 * Prototype: void sub_01342a(undefined1 *param_1);
 * Address  : 0x1342a (Size: 736 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x13169
 * Callees  : 3 -> 0x128cd, 0x12c46, 0xb28e8
 ******************************************************************************/
void FUN_0001342a(undefined1 *param_1)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined2 *in_ECX;
  int in_EDX;
  uint unaff_EBX;
  byte bVar3;
  undefined4 local_4c;
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined2 auStack_40 [2];
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar3 = 0;
  local_44 = *(undefined4 *)(in_EAX + 0xd);
  auStack_40[0] = *(undefined2 *)(in_EAX + 0x11);
  local_34 = (uint)*(ushort *)(in_EAX + 0x52);
  local_38 = (uint)*(byte *)(in_EDX + 0x20);
  local_3c = (int)*(short *)(in_EDX + 0x26);
  if (unaff_EBX < 0x200) {
    if (unaff_EBX != 0) goto LAB_000134e1;
    local_10 = 0x600;
    local_14 = 2;
    local_1c = 0x200;
  }
  else if (unaff_EBX < 0x201) {
    local_10 = 0;
    local_14 = 2;
    local_1c = 0x400;
  }
  else {
    if (unaff_EBX < 0x400) goto LAB_000134e1;
    if (unaff_EBX < 0x401) {
      local_10 = 0x200;
      local_14 = 2;
      local_1c = 0x600;
    }
    else {
      if (unaff_EBX != 0x600) goto LAB_000134e1;
      local_10 = 0x400;
      local_14 = 2;
      local_1c = 0;
    }
  }
  local_14 = 2;
  local_18 = 1;
LAB_000134e1:
  *(undefined2 *)(in_EDX + 0x26) = 0x100;
  local_28 = ((int)(uint)*(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2) >> 9) + 2
  ;
  local_2c = local_28;
  local_30 = local_28;
  *(short *)(in_EAX + 0x52) = (short)local_10;
  local_24 = 0;
  *(undefined1 *)(in_EDX + 0x20) = (undefined1)local_14;
  for (; local_24 < local_28; local_24 = local_24 + 1) {
    uVar1 = FUN_000128cd();
    if (uVar1 != 0xffffffff) {
      if (uVar1 != unaff_EBX) {
        local_4c = CONCAT22((short)((uint)-((int)(&PTR_LAB_00192fe0)[uVar1] *
                                            (int)*(short *)(in_EDX + 0x26) >> 8) >> 8) +
                            *(short *)(in_EAX + 0xf),
                            (short)((uint)((int)*(short *)(in_EDX + 0x26) * (&DAT_001927e0)[uVar1])
                                   >> 0x10) + *(short *)(in_EAX + 0xd));
        local_48[0] = FUN_000b28e8();
        iVar2 = FUN_00012c46();
        if (iVar2 == 0) {
          *(undefined4 *)(in_EAX + 0xd) = local_4c;
          *(undefined2 *)(in_EAX + 0x11 + (uint)bVar3 * -8) = local_48[(uint)bVar3 * -4];
          goto LAB_0001352e;
        }
      }
      local_2c = local_24;
      break;
    }
LAB_0001352e:
  }
  *(short *)(in_EAX + 0x52) = (short)local_1c;
  *(undefined1 *)(in_EDX + 0x20) = (undefined1)local_18;
  local_20 = 0;
  *(undefined4 *)(in_EAX + 0xd) = local_44;
  *(undefined2 *)(in_EAX + 0x11 + (uint)bVar3 * -8) = auStack_40[(uint)bVar3 * -4];
  do {
    if (local_28 <= local_20) {
LAB_0001369c:
      *(undefined4 *)(in_EAX + 0xd) = local_44;
      *(undefined2 *)(in_EAX + 0x11 + (uint)bVar3 * -8) = auStack_40[(uint)bVar3 * -4];
      *(short *)(in_EAX + 0x52) = (short)local_34;
      *(undefined1 *)(in_EDX + 0x20) = (undefined1)local_38;
      *(short *)(in_EDX + 0x26) = (short)local_3c;
      if (local_2c < local_30) {
        *in_ECX = (short)local_10;
      }
      else if (local_30 < local_2c) {
        *in_ECX = (short)local_1c;
        local_14._0_1_ = (undefined1)local_18;
      }
      else {
        *in_ECX = (short)local_10;
      }
      *param_1 = (undefined1)local_14;
      return;
    }
    uVar1 = FUN_000128cd();
    if (uVar1 != 0xffffffff) {
      if (uVar1 != unaff_EBX) {
        local_4c = CONCAT22(*(short *)(in_EAX + 0xf) +
                            (short)((uint)-((int)*(short *)(in_EDX + 0x26) *
                                            (int)(&PTR_LAB_00192fe0)[uVar1] >> 8) >> 8),
                            *(short *)(in_EAX + 0xd) +
                            (short)((uint)((int)*(short *)(in_EDX + 0x26) * (&DAT_001927e0)[uVar1])
                                   >> 0x10));
        local_48[0] = FUN_000b28e8();
        iVar2 = FUN_00012c46();
        if (iVar2 == 0) {
          *(undefined4 *)(in_EAX + 0xd) = local_4c;
          *(undefined2 *)(in_EAX + 0x11 + (uint)bVar3 * -8) = local_48[(uint)bVar3 * -4];
          goto LAB_000135f9;
        }
      }
      local_30 = local_20;
      goto LAB_0001369c;
    }
LAB_000135f9:
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_013730 (Ghidra: FUN_00013730)
 * Prototype: undefined4 sub_013730(void);
 * Address  : 0x13730 (Size: 23 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x137af
 * Callees  : 1 -> 0xce0e4
 ******************************************************************************/
undefined4 FUN_00013730(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = FUN_000ce0e4();
  if (iVar1 != 0) {
    *(undefined1 *)(in_EAX + 8) = 0x41;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_013747 (Ghidra: FUN_00013747)
 * Prototype: longlong sub_013747(void);
 * Address  : 0x13747 (Size: 104 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x64ae7, 0xcd85c, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_00013747(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  iVar2 = FUN_000d0f50();
  if (((iVar2 != 0) && (*(short *)(iVar2 + 10) == 0xc)) &&
     (*(char *)(iVar2 + 3) == *(char *)(in_EAX + 6))) {
    cVar1 = FUN_000cd85c();
    if (cVar1 != '\0') {
      FUN_00064ae7();
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0137af (Ghidra: FUN_000137af)
 * Prototype: longlong sub_0137af(void);
 * Address  : 0x137af (Size: 90 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x13730, 0x63b6d, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_000137af(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  undefined8 uVar2;
  
  uVar2 = FUN_000d0f50();
  iVar1 = (int)uVar2;
  if ((((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xc)) &&
      (*(short *)(iVar1 + 1) == *(short *)((int)((ulonglong)uVar2 >> 0x20) + 0x7e))) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    FUN_00013730();
    return CONCAT44(in_EDX,1);
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_013809 (Ghidra: FUN_00013809)
 * Prototype: undefined8 sub_013809(void);
 * Address  : 0x13809 (Size: 192 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1b88
 * Callees  : 6 -> 0x39d83, 0x63b6d, 0x64a2e, 0x64a5f, 0x64bce, 0xcb33c
 ******************************************************************************/
undefined8 FUN_00013809(void)

{
  ushort uVar1;
  int in_EAX;
  byte *pbVar2;
  undefined4 in_EDX;
  undefined8 uVar3;
  
  pbVar2 = (byte *)FUN_00039d83();
  if (pbVar2 == (byte *)0x0) {
    FUN_00063b6d();
    goto LAB_000138bf;
  }
  if ((*pbVar2 & 0x20) == 0) {
    uVar3 = FUN_00064bce();
    uVar1 = *(ushort *)((int)uVar3 + 0x21);
    if (uVar1 == 0) goto LAB_000138bf;
    if (1 < uVar1) {
      if (uVar1 == 2) {
        if ((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e) !=
             *(short *)((&DAT_001b0a00)[*(ushort *)((int)((ulonglong)uVar3 >> 0x20) + 100)] + 0x7e))
           && (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) !=
               *(short *)((&DAT_001b0a00)[*(ushort *)((int)((ulonglong)uVar3 >> 0x20) + 100)] + 0x7e
                         ))) {
          FUN_00064a2e();
          FUN_000cb33c();
        }
      }
      goto LAB_000138bf;
    }
  }
  if (*(char *)(in_EAX + 7) != 'U') {
    FUN_00064a5f();
  }
LAB_000138bf:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0138c9 (Ghidra: FUN_000138c9)
 * Prototype: undefined8 sub_0138c9(void);
 * Address  : 0x138c9 (Size: 516 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x10010, 0x39c3e, 0x39d83, 0x39e90, 0x63b6d, 0xb4ac4, 0xdc440
 ******************************************************************************/
undefined8 FUN_000138c9(void)

{
  byte *pbVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_EDX;
  
  iVar3 = FUN_00039d83();
  bVar2 = false;
  if ((iVar3 != 0) && (iVar3 != in_EAX)) {
    if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xad) & 0x10) == 0) {
      iVar4 = FUN_00039e90();
      for (iVar6 = 0; iVar6 < iVar4 * 3; iVar6 = iVar6 + 3) {
        if (((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + iVar6 + 0x294) & 2) != 0) &&
           ((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + iVar6 + 0x294) & 1) == 0)) {
          bVar2 = true;
          pbVar1 = (byte *)(iVar6 + 0x294 + (&DAT_001b0a00)[*(ushort *)(iVar3 + 100)]);
          *pbVar1 = *pbVar1 | 1;
          break;
        }
      }
      if (bVar2) {
        iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
        if (*(byte *)(iVar3 + 0x307) < 9) {
          if ((*(char *)(iVar3 + 0x307) == '\0') ||
             (*(int *)(iVar3 + 0x303) + 0x10U <= DAT_002e8bee)) {
            *(uint *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x303) = DAT_002e8bee;
            iVar3 = FUN_000dc440();
            if ((iVar3 < 0x601) && ((iVar3 < 0x101 && (iVar3 < 1)))) {
              FUN_00010010();
            }
            else {
              iVar3 = FUN_000b4ac4(0);
              if (iVar3 == -1) {
                uVar5 = 0;
                *(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x307) =
                     *(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x307) + '\x01';
                goto LAB_00013ac6;
              }
            }
            *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x307) = 0;
          }
        }
        else {
          FUN_00039c3e();
        }
        uVar5 = 0;
        goto LAB_00013ac6;
      }
    }
    else {
      FUN_00039c3e();
    }
  }
  FUN_00063b6d();
  uVar5 = 1;
LAB_00013ac6:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_013acd (Ghidra: FUN_00013acd)
 * Prototype: undefined4 sub_013acd(void);
 * Address  : 0x13acd (Size: 118 bytes)
 * Module   : barracks.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x13b43
 * Callees  : 2 -> 0x39a74, 0x39ba4
 ******************************************************************************/
undefined4 FUN_00013acd(void)

{
  ushort uVar1;
  uint uVar2;
  uint in_EAX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int in_EDX;
  
  uVar1 = *(ushort *)(in_EDX + 0x3d);
  do {
    if ((&DAT_001ae9fc)[uVar1] <= DAT_001ae9fc) {
LAB_00013b05:
      uVar1 = *(ushort *)(in_EDX + 0x3d);
      while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
        if (uVar2 != in_EAX) {
          FUN_00039a74();
          in_EAX = extraout_ECX_00;
        }
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2aa);
      }
      return 1;
    }
    if ((&DAT_001ae9fc)[uVar1] != in_EAX) {
      FUN_00039ba4();
      in_EAX = extraout_ECX;
      goto LAB_00013b05;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2aa);
  } while( true );
}

/******************************************************************************
 * Function : dk_barrack_party_class_013b43 (Ghidra: FUN_00013b43)
 * Prototype: longlong dk_barrack_party_class_013b43(void);
 * Address  : 0x13b43 (Size: 83 bytes)
 * Module   : barracks.cpp [direct_file_string_xref]
 * OrigLine : barracks.cpp:438 ("INVALID BARRACK PARTY CLASS")
 * Naming   : String 'INVALID BARRACK PARTY CLASS'
 * Callers  : 1 -> 0x80a94
 * Callees  : 3 -> 0x13acd, 0xd0f50, 0xddaf0
 * Strings  :
 *   - 0x160178: "barracks.cpp"
 *   - 0x16015c: "INVALID BARRACK PARTY CLASS"
 ******************************************************************************/
longlong FUN_00013b43(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint in_EDX;
  
  if (*(char *)(in_EAX + 0x1f) != '\x05') {
    FUN_000ddaf0(); /* LbErrorLog("barracks.cpp", line 438, "INVALID BARRACK PARTY CLASS") */
    return (ulonglong)in_EDX << 0x20;
  }
  iVar1 = FUN_000d0f50();
  if (((iVar1 != 0) && (*(short *)(iVar1 + 10) == 0xc)) &&
     (*(char *)(iVar1 + 3) == *(char *)(in_EAX + 6))) {
    uVar2 = FUN_00013acd();
    return CONCAT44(in_EDX,uVar2);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_013b98 (Ghidra: FUN_00013b98)
 * Prototype: void sub_013b98(void);
 * Address  : 0x13b98 (Size: 22 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x404f7
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00013b98(void)

{
  FUN_000e6a10();
  return;
}

