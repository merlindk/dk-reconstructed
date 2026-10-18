/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: compturn.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 32
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0201ed (Ghidra: FUN_000201ed)
 * Prototype: longlong sub_0201ed(void);
 * Address  : 0x201ed (Size: 102 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1a4a1
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000201ed(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  uint in_EDX;
  
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2f);
  while( true ) {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    if (uVar2 <= DAT_001ae9fc) {
      uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
      while( true ) {
        uVar2 = (&DAT_001ae9fc)[uVar1];
        if (uVar2 <= DAT_001ae9fc) {
          return (ulonglong)in_EDX << 0x20;
        }
        if (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) != '\0') break;
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
      }
      return CONCAT44(in_EDX,uVar2);
    }
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) != '\0') break;
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_020253 (Ghidra: FUN_00020253)
 * Prototype: undefined8 sub_020253(void);
 * Address  : 0x20253 (Size: 263 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00020253(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 in_EDX;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  
  local_24 = -0x80000000;
  iVar2 = *(int *)(in_EAX + 0x24);
  puVar8 = (undefined1 *)0x0;
  uVar5 = 0;
  do {
    iVar4 = (uVar5 & 0xffff) * 5;
    if ((&DAT_00174df0)[iVar4] == '\0') {
      return CONCAT44(in_EDX,puVar8);
    }
    bVar1 = (&DAT_00174df0)[iVar4];
    if (bVar1 < 3) {
LAB_000202c2:
      uVar6 = *(ushort *)(iVar2 + 0xb + (uint)(byte)(&DAT_00174df0)[(uVar5 & 0xffff) * 5] * 2);
      iVar4 = 0;
      local_20 = 0;
      local_1c = (undefined1 *)0x0;
      while( true ) {
        iVar3 = (uint)uVar6 * 0x45;
        if (&DAT_002ddd1b + iVar3 < &DAT_002ddd1c) break;
        if (*(ushort *)(&DAT_002ddd2b + iVar3) < *(ushort *)(&DAT_002ddd29 + iVar3)) {
          iVar7 = (uint)*(ushort *)(&DAT_002ddd29 + iVar3) -
                  (uint)*(ushort *)(&DAT_002ddd2b + iVar3);
          iVar4 = iVar4 + iVar7;
          if (local_20 < iVar7) {
            local_20 = iVar7;
            local_1c = &DAT_002ddd1b + iVar3;
          }
        }
        uVar6 = *(ushort *)(&DAT_002ddd21 + iVar3);
      }
      if ((local_1c != (undefined1 *)0x0) &&
         (iVar4 = iVar4 * *(int *)((int)&DAT_00174df1 + (uVar5 & 0xffff) * 5),
         iVar4 - local_24 != 0 && local_24 <= iVar4)) {
        puVar8 = local_1c;
        local_24 = iVar4;
      }
    }
    else {
      if (3 < bVar1) {
        if (bVar1 == 8) {
          uVar6 = 1;
          while ((uVar6 < 7 &&
                 ((iVar4 = (uint)uVar6 + iVar2, *(char *)(iVar4 + 0x100f) == '\0' ||
                  (*(char *)(iVar4 + 0x1008) != '\0'))))) {
            uVar6 = uVar6 + 1;
          }
          if (uVar6 == 7) goto LAB_0002033f;
        }
        goto LAB_000202c2;
      }
      if (-1 < *(int *)(iVar2 + 0xf78)) goto LAB_000202c2;
    }
LAB_0002033f:
    uVar5 = uVar5 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_02035a (Ghidra: FUN_0002035a)
 * Prototype: undefined8 sub_02035a(void);
 * Address  : 0x2035a (Size: 150 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x18ffe, 0x1a158, 0x1a4a1, 0x1b762
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0002035a(void)

{
  ushort uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 in_EDX;
  
  iVar3 = 1;
  if (*(int *)(*(int *)(in_EAX + 0x24) + 0x884) != 0) {
    uVar1 = *(ushort *)(in_EAX + 0x14c6);
    while( true ) {
      iVar2 = (uint)uVar1 * 0x94;
      if (&DAT_002c9203 + iVar2 < &DAT_002c9204) break;
      if (((((&DAT_002c9203)[iVar2] & 1) != 0) && ((&DAT_002c9205)[iVar2] == '\b')) &&
         ((&DAT_002c9204)[iVar2] == '\x02')) {
        if (iVar3 == 1) {
          iVar3 = 0;
        }
        if ((uint)(*(int *)(&DAT_002c9263 + iVar2) -
                  (DAT_002e8bee - *(int *)(&DAT_002c925f + iVar2))) <
            (uint)(*(int *)(&DAT_002c9263 + iVar2) - *(int *)(&DAT_002c9263 + iVar2) / 10)) {
          iVar3 = -1;
          break;
        }
      }
      uVar1 = *(ushort *)(&DAT_002c9295 + iVar2);
    }
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0203f0 (Ghidra: FUN_000203f0)
 * Prototype: byte * sub_0203f0(void);
 * Address  : 0x203f0 (Size: 70 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 10 -> 0x18d28, 0x18dcd, 0x192c1, 0x19af8, 0x19d32, 0x1a158, 0x1a4a1, 0x1a8cb, 0x1ad1f, 0x1b119
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_000203f0(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  uint in_EDX;
  byte bVar4;
  
  uVar1 = *(ushort *)(in_EAX + 0x14c6);
  do {
    iVar2 = (uint)uVar1 * 0x94;
    pbVar3 = &DAT_002c9203 + iVar2;
    if (pbVar3 < &DAT_002c9204) {
      return (byte *)0x0;
    }
    if ((*pbVar3 & 1) != 0) {
      if ((&DAT_002c9205)[iVar2] == '\x10') {
        bVar4 = (&DAT_002c9206)[iVar2];
      }
      else {
        bVar4 = (&DAT_002c9205)[iVar2];
      }
      if (bVar4 == in_EDX) {
        return pbVar3;
      }
    }
    uVar1 = *(ushort *)(&DAT_002c9295 + iVar2);
  } while( true );
}

/******************************************************************************
 * Function : sub_020436 (Ghidra: FUN_00020436)
 * Prototype: int sub_020436(void);
 * Address  : 0x20436 (Size: 301 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1ae5c, 0x1bb96
 * Callees  : 2 -> 0x1ba46, 0x84ff8
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0002053f) */

int FUN_00020436(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  uint uVar7;
  uint extraout_ECX;
  int extraout_ECX_00;
  undefined4 *in_EDX;
  int unaff_EBX;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int local_1c;
  int local_14;
  uint uVar6;
  
  bVar10 = 0;
  local_1c = 0;
  iVar2 = *(int *)(in_EAX + 0x24);
  local_14 = 0;
  do {
    if (unaff_EBX <= local_14) {
      return local_1c;
    }
    uVar7 = 0;
    uVar1 = *(ushort *)(iVar2 + 0x2f);
    while (uVar3 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar3) {
      iVar5 = FUN_00084ff8();
      uVar7 = extraout_ECX;
      if (iVar5 != 0) {
        if (*(char *)(uVar3 + 7) == '\x0e') {
          bVar4 = *(byte *)(uVar3 + 8);
        }
        else {
          bVar4 = *(byte *)(uVar3 + 7);
        }
        uVar6 = (uint)bVar4;
        bVar4 = (&DAT_0018c4be)[uVar6 * 0x29];
        uVar7 = uVar3;
        if (bVar4 < 5) {
          if ((bVar4 == 0) || (1 < bVar4)) break;
LAB_000204a0:
          if (uVar6 < 7) {
            uVar7 = extraout_ECX;
            if (2 < uVar6) {
              bVar8 = uVar6 < 5;
              bVar9 = uVar6 == 5;
LAB_000204b6:
              uVar7 = extraout_ECX;
              if (bVar8 || bVar9) goto LAB_0002049c;
            }
          }
          else if (uVar6 < 8) {
LAB_0002049c:
            uVar7 = uVar3;
          }
          else {
            uVar7 = extraout_ECX;
            if (0x45 < uVar6) {
              if (uVar6 < 0x47) goto LAB_0002049c;
              uVar7 = extraout_ECX;
              if (0x60 < uVar6) {
                bVar8 = uVar6 < 0x62;
                bVar9 = uVar6 == 0x62;
                goto LAB_000204b6;
              }
            }
          }
        }
        else {
          uVar7 = extraout_ECX;
          if (5 < bVar4) {
            uVar7 = uVar3;
            if (bVar4 < 7) break;
            uVar7 = extraout_ECX;
            if ((7 < bVar4) && (uVar7 = extraout_ECX, bVar4 == 8)) goto LAB_000204a0;
          }
        }
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0x1f);
    }
    if (uVar7 == 0) {
      return local_1c;
    }
    iVar5 = FUN_0001ba46();
    if (iVar5 == 0) {
      return local_1c;
    }
    *(undefined1 *)(iVar5 + 2) = 0xb;
    *(undefined4 *)(iVar5 + 0x86) = *in_EDX;
    *(undefined2 *)(iVar5 + 0x8a + (uint)bVar10 * -8) =
         *(undefined2 *)(in_EDX + (uint)bVar10 * -2 + 1);
    *(undefined2 *)(iVar5 + 0x76) = *(undefined2 *)(extraout_ECX_00 + 0x1b);
    local_1c = local_1c + 1;
    local_14 = local_14 + 1;
    *(undefined4 *)(iVar5 + 10) = DAT_002e8bee;
  } while( true );
}

/******************************************************************************
 * Function : sub_020563 (Ghidra: FUN_00020563)
 * Prototype: undefined4 sub_020563(void);
 * Address  : 0x20563 (Size: 51 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x1bb96, 0x1c0ec, 0x1c1f1, 0x1c3d3, 0x1ca08
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00020563(void)

{
  int in_EAX;
  undefined4 *in_EDX;
  short *psVar1;
  
  psVar1 = (short *)(in_EAX + 0x134c);
  while( true ) {
    if ((short *)(in_EAX + 0x13c4U) <= psVar1) {
      return 0;
    }
    if (*psVar1 == 0) break;
    psVar1 = psVar1 + 3;
  }
  *(undefined4 *)psVar1 = *in_EDX;
  psVar1[2] = *(short *)(in_EDX + 1);
  return 1;
}

/******************************************************************************
 * Function : sub_020596 (Ghidra: FUN_00020596)
 * Prototype: undefined8 sub_020596(void);
 * Address  : 0x20596 (Size: 113 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x18ffe, 0x1b561, 0x1b629
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00020596(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  byte *pbVar4;
  undefined4 in_EDX;
  int iVar5;
  undefined4 local_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  
  local_20 = DAT_00179438;
  uStack_1c = DAT_0017943c;
  uStack_1a = DAT_0017943e;
  uVar2 = *(ushort *)(in_EAX + 0x14c6);
  while( true ) {
    iVar3 = (uint)uVar2 * 0x94;
    pbVar4 = &DAT_002c9203 + iVar3;
    if (pbVar4 < &DAT_002c9204) break;
    if ((*pbVar4 & 1) != 0) {
      if ((&DAT_002c9205)[iVar3] == '\x10') {
        cVar1 = (&DAT_002c9206)[iVar3];
      }
      else {
        cVar1 = (&DAT_002c9205)[iVar3];
      }
      for (iVar5 = 0; *(char *)((int)&local_20 + iVar5) != '\0'; iVar5 = iVar5 + 1) {
        if (cVar1 == *(char *)((int)&local_20 + iVar5)) goto LAB_0001f531;
      }
    }
    uVar2 = *(ushort *)(&DAT_002c9295 + iVar3);
  }
  pbVar4 = (byte *)0x0;
LAB_0001f531:
  return CONCAT44(in_EDX,pbVar4);
}

/******************************************************************************
 * Function : sub_020607 (Ghidra: FUN_00020607)
 * Prototype: undefined8 sub_020607(void);
 * Address  : 0x20607 (Size: 98 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1c563
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00020607(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  undefined4 in_EDX;
  int iVar3;
  char cVar4;
  
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  iVar3 = 0;
  do {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    if (uVar2 <= DAT_001ae9fc) {
      return CONCAT44(in_EDX,iVar3);
    }
    if (*(char *)(uVar2 + 7) == '\x0e') {
      cVar4 = *(char *)(uVar2 + 8);
    }
    else {
      cVar4 = *(char *)(uVar2 + 7);
    }
    if (cVar4 == '\'') {
LAB_00020638:
      iVar3 = iVar3 + 1;
    }
    else {
      if (*(char *)(uVar2 + 7) == '\x0e') {
        cVar4 = *(char *)(uVar2 + 8);
      }
      else {
        cVar4 = *(char *)(uVar2 + 7);
      }
      if (cVar4 == 't') goto LAB_00020638;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_020669 (Ghidra: FUN_00020669)
 * Prototype: undefined8 sub_020669(void);
 * Address  : 0x20669 (Size: 73 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1c563
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00020669(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  undefined4 in_EDX;
  int iVar3;
  char cVar4;
  
  iVar3 = 0;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    if (*(char *)(uVar2 + 7) == '\x0e') {
      cVar4 = *(char *)(uVar2 + 8);
    }
    else {
      cVar4 = *(char *)(uVar2 + 7);
    }
    if (cVar4 == 't') {
      iVar3 = iVar3 + 1;
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x1f);
  }
  return CONCAT44(in_EDX,iVar3);
}

/******************************************************************************
 * Function : sub_0206b2 (Ghidra: FUN_000206b2)
 * Prototype: byte * sub_0206b2(void);
 * Address  : 0x206b2 (Size: 257 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1c563
 * Callees  : 1 -> 0x64c4d
 ******************************************************************************/
byte * FUN_000206b2(void)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  byte *extraout_ECX;
  byte *pbVar5;
  int in_EDX;
  byte *pbVar6;
  uint uVar7;
  
  uVar7 = 0x80000000;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0x2d);
  pbVar6 = (byte *)0x0;
  do {
    pbVar5 = (&DAT_001ae9fc)[uVar1];
    if (pbVar5 <= DAT_001ae9fc) {
      return pbVar6;
    }
    if ((((*pbVar5 & 0x10) == 0) && ((pbVar5[1] & 2) == 0)) && (pbVar5[7] != 0x43)) {
      if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0xad) & 8) == 0) {
LAB_000206e3:
        if (pbVar5[7] == 0xe) {
          bVar2 = pbVar5[8];
        }
        else {
          bVar2 = pbVar5[7];
        }
        if ((((&DAT_0018c4c8)[(uint)bVar2 * 0x29] != '\0') &&
            (cVar3 = FUN_00064c4d(), pbVar5 = extraout_ECX, cVar3 != '\0')) &&
           ((uVar4 = uVar7, in_EDX == 0 ||
            ((uVar4 = (uint)(byte)(&DAT_002ebaf8)
                                  [(uint)extraout_ECX[0x1a] * 10 +
                                   (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)]
                                                  + 0x23)], (int)uVar7 <= (int)uVar4 ||
             (pbVar6 == (byte *)0x0)))))) {
          pbVar6 = extraout_ECX;
          uVar7 = uVar4;
        }
      }
      else if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0xad) & 8) != 0) {
        if (pbVar5[7] == 0xe) {
          bVar2 = pbVar5[8];
        }
        else {
          bVar2 = pbVar5[7];
        }
        if ((&DAT_0018c4c8)[(uint)bVar2 * 0x29] != '\0') goto LAB_000206e3;
      }
    }
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar5 + 100)] + 0x1f);
  } while( true );
}

/******************************************************************************
 * Function : sub_0207b3 (Ghidra: FUN_000207b3)
 * Prototype: int sub_0207b3(void);
 * Address  : 0x207b3 (Size: 115 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x1a85a, 0x1ab74
 * Callees  : 1 -> 0x378ba
 ******************************************************************************/
int FUN_000207b3(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  int iVar4;
  
  if (0xc < in_EDX) {
    if (in_EDX < 0xe) {
      return 9999;
    }
    if (in_EDX == 0xe) {
      if ((uint)*(ushort *)(*(int *)(in_EAX + 0x24) + 0x27) * 0x45 == 0) {
        return 9999;
      }
      iVar2 = FUN_000378ba();
      return iVar2;
    }
  }
  iVar2 = 0;
  iVar4 = 0;
  uVar1 = *(ushort *)(*(int *)(in_EAX + 0x24) + 0xb + in_EDX * 2);
  while (iVar3 = (uint)uVar1 * 0x45, &DAT_002ddd1b < &DAT_002ddd1b + iVar3) {
    iVar2 = iVar2 + (uint)*(ushort *)(&DAT_002ddd2b + iVar3);
    iVar4 = iVar4 + (uint)*(ushort *)(&DAT_002ddd29 + iVar3);
    uVar1 = *(ushort *)(&DAT_002ddd21 + iVar3);
  }
  if (iVar4 == 0) {
    return 9999;
  }
  return iVar4 - iVar2;
}

/******************************************************************************
 * Function : sub_020826 (Ghidra: FUN_00020826)
 * Prototype: uint sub_020826(void);
 * Address  : 0x20826 (Size: 1661 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1cc83
 * Callees  : 5 -> 0x10575, 0x10589, 0x20ea3, 0x84ff8, 0xe69fc
 ******************************************************************************/
uint FUN_00020826(void)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *in_EDX;
  uint uVar7;
  int iVar8;
  uint unaff_EDI;
  undefined8 uVar9;
  int local_28;
  undefined1 *local_24;
  uint local_20;
  uint local_1c;
  
  iVar5 = *(int *)(in_EAX + 0x24);
  uVar1 = *(ushort *)(iVar5 + 0x2d);
  local_1c = 0;
  for (; DAT_001ae9fc < (&DAT_001ae9fc)[uVar1];
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[uVar1] + 100)] + 0x1f)) {
    local_1c = local_1c + 1;
  }
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar6 = (&DAT_001ae9fc)[*(ushort *)(iVar5 + 0x2d)];
  for (uVar7 = DAT_002e8bf6 % local_1c; (DAT_001ae9fc < uVar6 && (uVar7 != 0)); uVar7 = uVar7 - 1) {
    uVar6 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0x1f)];
  }
  for (local_20 = local_1c; uVar7 = 0, local_20 != 0; local_20 = local_20 - 1) {
    if (uVar6 <= DAT_001ae9fc) {
      uVar6 = (&DAT_001ae9fc)[*(ushort *)(iVar5 + 0x2d)];
    }
    iVar4 = FUN_00084ff8();
    iVar5 = extraout_ECX;
    if (iVar4 != 0) {
      if (*(char *)(uVar6 + 7) == '\x0e') {
        cVar2 = *(char *)(uVar6 + 8);
      }
      else {
        cVar2 = *(char *)(uVar6 + 7);
      }
      if (cVar2 != '[') {
        if (*(char *)(uVar6 + 7) == '\x0e') {
          bVar3 = *(byte *)(uVar6 + 8);
        }
        else {
          bVar3 = *(byte *)(uVar6 + 7);
        }
        uVar7 = uVar6;
        if ((((&DAT_0018c4be)[(uint)bVar3 * 0x29] == '\n') ||
            (iVar4 = FUN_00010589(), iVar5 = extraout_ECX_00, iVar4 != 0)) &&
           (*(short *)(iVar5 + 0xd) != 0)) {
          unaff_EDI = 1;
          break;
        }
        iVar4 = FUN_00010575();
        iVar5 = extraout_ECX_01;
        if (iVar4 == 0) {
LAB_000209ba:
          iVar4 = (&DAT_001b0a00)[*(ushort *)(uVar6 + 100)];
          if (((*(char *)(iVar4 + 3) == '\0') && ((*(byte *)(iVar4 + 3) & 1) == 0)) &&
             ((*(byte *)(iVar4 + 3) & 2) == 0)) {
            iVar4 = ((int)(short)(&DAT_002e9114)[(uint)*(byte *)(uVar6 + 0x1a) * 0x73] +
                    (int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(uVar6 + 0x1a) * 0x73] *
                          (uint)*(byte *)(iVar4 + 0x23) * 0x23) / 100) *
                    (uint)(byte)(&DAT_002e9117)[(uint)*(byte *)(uVar6 + 0x1a) * 0xe6];
            iVar8 = iVar4 >> 0x1f;
            if ((int)*(short *)(uVar6 + 0x5e) <
                (int)((iVar4 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8) {
              if (*(char *)(uVar6 + 7) != '\x1a') {
                if (*(char *)(uVar6 + 7) == '\x0e') {
                  cVar2 = *(char *)(uVar6 + 8);
                }
                else {
                  cVar2 = *(char *)(uVar6 + 7);
                }
                if ((cVar2 != '\x19') && (*(char *)(uVar6 + 7) != '\x1a')) {
                  if (*(char *)(uVar6 + 7) == '\x0e') {
                    cVar2 = *(char *)(uVar6 + 8);
                  }
                  else {
                    cVar2 = *(char *)(uVar6 + 7);
                  }
                  if (cVar2 != 'Y') {
                    if (*(char *)(uVar6 + 7) == '\x0e') {
                      cVar2 = *(char *)(uVar6 + 8);
                    }
                    else {
                      cVar2 = *(char *)(uVar6 + 7);
                    }
                    if (cVar2 != '\x15') {
                      if (*(char *)(uVar6 + 7) == '\x0e') {
                        cVar2 = *(char *)(uVar6 + 8);
                      }
                      else {
                        cVar2 = *(char *)(uVar6 + 7);
                      }
                      if (cVar2 != '\x16') {
                        if (*(char *)(uVar6 + 7) == '\x0e') {
                          cVar2 = *(char *)(uVar6 + 8);
                        }
                        else {
                          cVar2 = *(char *)(uVar6 + 7);
                        }
                        if (cVar2 != '\x14') {
                          if (*(char *)(uVar6 + 7) == '\x0e') {
                            cVar2 = *(char *)(uVar6 + 8);
                          }
                          else {
                            cVar2 = *(char *)(uVar6 + 7);
                          }
                          if (cVar2 != 'P') {
                            if (*(char *)(uVar6 + 7) == '\x0e') {
                              cVar2 = *(char *)(uVar6 + 8);
                            }
                            else {
                              cVar2 = *(char *)(uVar6 + 7);
                            }
                            if (cVar2 != '~') {
                              if (*(short *)(extraout_ECX_01 + 0x27) != 0) goto LAB_00020b2b;
                              goto LAB_00020c7c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_00020c7c:
              iVar4 = (uint)*(byte *)(uVar6 + 0x1a) * 0xe6;
              if ((*(short *)(&DAT_002e911f + iVar4) == 0) ||
                 (*(int *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0x39) <=
                  (int)*(short *)(&DAT_002e911f + iVar4))) {
LAB_00020d0b:
                if (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0x48) == '\0') {
LAB_00020d53:
                  if (*(char *)(uVar6 + 7) == '\x0e') {
                    bVar3 = *(byte *)(uVar6 + 8);
                  }
                  else {
                    bVar3 = *(byte *)(uVar6 + 7);
                  }
                  if (((&DAT_0018c4be)[(uint)bVar3 * 0x29] == '\0') &&
                     (iVar4 = FUN_00020ea3(), iVar5 = extraout_ECX_02, iVar4 != 0)) {
                    unaff_EDI = (uint)*(ushort *)(iVar4 + 10);
                    break;
                  }
                }
                else if (*(char *)(uVar6 + 7) != 'K') {
                  if (*(char *)(uVar6 + 7) == '\x0e') {
                    cVar2 = *(char *)(uVar6 + 8);
                  }
                  else {
                    cVar2 = *(char *)(uVar6 + 7);
                  }
                  if (cVar2 != 'L') {
                    if (*(short *)(extraout_ECX_01 + 0xf) == 0) goto LAB_00020d53;
                    unaff_EDI = 2;
                    break;
                  }
                }
              }
              else {
                if (*(char *)(uVar6 + 7) == '\x0e') {
                  cVar2 = *(char *)(uVar6 + 8);
                }
                else {
                  cVar2 = *(char *)(uVar6 + 7);
                }
                if ((cVar2 != '\x12') && (*(char *)(uVar6 + 7) != 'j')) {
                  if (*(char *)(uVar6 + 7) == '\x0e') {
                    cVar2 = *(char *)(uVar6 + 8);
                  }
                  else {
                    cVar2 = *(char *)(uVar6 + 7);
                  }
                  if (cVar2 != '\x13') {
                    if (*(short *)(extraout_ECX_01 + 0x25) == 0) goto LAB_00020d0b;
                    unaff_EDI = 0xd;
                    break;
                  }
                }
              }
            }
          }
          else {
            iVar4 = ((int)(short)(&DAT_002e9114)[(uint)*(byte *)(uVar6 + 0x1a) * 0x73] +
                    (int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(uVar6 + 0x1a) * 0x73] *
                          (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0x23) * 0x23)
                    / 100) * (uint)(byte)(&DAT_002e9117)[(uint)*(byte *)(uVar6 + 0x1a) * 0xe6];
            iVar8 = iVar4 >> 0x1f;
            if (((int)*(short *)(uVar6 + 0x5e) <
                 (int)((iVar4 + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8) &&
               (*(char *)(uVar6 + 7) != '\x1a')) {
              if (*(char *)(uVar6 + 7) == '\x0e') {
                cVar2 = *(char *)(uVar6 + 8);
              }
              else {
                cVar2 = *(char *)(uVar6 + 7);
              }
              if ((cVar2 != '\x19') && (*(char *)(uVar6 + 7) != '\x1a')) {
                if (*(char *)(uVar6 + 7) == '\x0e') {
                  cVar2 = *(char *)(uVar6 + 8);
                }
                else {
                  cVar2 = *(char *)(uVar6 + 7);
                }
                if (cVar2 != 'Y') {
                  if (*(char *)(uVar6 + 7) == '\x0e') {
                    cVar2 = *(char *)(uVar6 + 8);
                  }
                  else {
                    cVar2 = *(char *)(uVar6 + 7);
                  }
                  if (cVar2 != '\x15') {
                    if (*(char *)(uVar6 + 7) == '\x0e') {
                      cVar2 = *(char *)(uVar6 + 8);
                    }
                    else {
                      cVar2 = *(char *)(uVar6 + 7);
                    }
                    if (cVar2 != '\x16') {
                      if (*(char *)(uVar6 + 7) == '\x0e') {
                        cVar2 = *(char *)(uVar6 + 8);
                      }
                      else {
                        cVar2 = *(char *)(uVar6 + 7);
                      }
                      if (cVar2 != '\x14') {
                        if (*(char *)(uVar6 + 7) == '\x0e') {
                          cVar2 = *(char *)(uVar6 + 8);
                        }
                        else {
                          cVar2 = *(char *)(uVar6 + 7);
                        }
                        if (cVar2 != 'P') {
                          if (*(char *)(uVar6 + 7) == '\x0e') {
                            cVar2 = *(char *)(uVar6 + 8);
                          }
                          else {
                            cVar2 = *(char *)(uVar6 + 7);
                          }
                          if ((cVar2 != '~') && (*(short *)(extraout_ECX_01 + 0x27) != 0)) {
LAB_00020b2b:
                            unaff_EDI = 0xe;
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (*(char *)(uVar6 + 7) == '\x0e') {
            cVar2 = *(char *)(uVar6 + 8);
          }
          else {
            cVar2 = *(char *)(uVar6 + 7);
          }
          if (cVar2 != 'R') {
            if (*(char *)(uVar6 + 7) == '\x0e') {
              cVar2 = *(char *)(uVar6 + 8);
            }
            else {
              cVar2 = *(char *)(uVar6 + 7);
            }
            if (cVar2 != 'S') {
              if (*(short *)(extraout_ECX_01 + 0x1f) == 0) goto LAB_000209ba;
              unaff_EDI = 10;
              break;
            }
          }
        }
      }
    }
    uVar6 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0x1f)];
  }
  if (uVar7 != 0) {
    uVar1 = *(ushort *)(iVar5 + 0xb + unaff_EDI * 2);
    local_28 = 0x7fffffff;
    local_24 = (undefined1 *)0x0;
    while( true ) {
      iVar5 = (uint)uVar1 * 0x45;
      if (&DAT_002ddd1b + iVar5 < &DAT_002ddd1c) break;
      if (*(short *)(&DAT_002ddd25 + iVar5) == 2) {
        iVar4 = (uint)*(byte *)(uVar7 + 0x1a) * 0xe6;
        if (*(short *)(&DAT_002e19a9 +
                      (uint)*(byte *)(uVar7 + 0x1a) * 2 + *(char *)(uVar7 + 6) * 0x1508) == 0) {
          uVar6 = ((uint)*(ushort *)(&DAT_002e91a5 + iVar4) *
                   (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x23) * 0x23) / 100 +
                  (uint)*(ushort *)(&DAT_002e91a5 + iVar4);
        }
        else {
          uVar6 = (((uint)*(ushort *)(&DAT_002e91a5 + iVar4) *
                    (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(uVar7 + 100)] + 0x23) * 0x23) / 100
                  + (uint)*(ushort *)(&DAT_002e91a5 + iVar4)) / 2;
        }
        if (*(uint *)(&DAT_002ddd32 + iVar5) <= uVar6) goto LAB_00020e47;
      }
      else {
LAB_00020e47:
        FUN_000e69fc();
        uVar9 = FUN_000e69fc();
        iVar4 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
        if (iVar4 < local_28) {
          local_28 = iVar4;
          local_24 = &DAT_002ddd1b + iVar5;
        }
      }
      uVar1 = *(ushort *)(&DAT_002ddd21 + iVar5);
    }
    if (local_24 != (undefined1 *)0x0) {
      *in_EDX = local_24;
      return uVar7;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_020ea3 (Ghidra: FUN_00020ea3)
 * Prototype: undefined1 * sub_020ea3(void);
 * Address  : 0x20ea3 (Size: 357 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x20826
 * Callees  : 1 -> 0xcfbd8
 ******************************************************************************/
undefined1 * FUN_00020ea3(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  int in_EDX;
  undefined1 *puVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_2c;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  
  local_20 = (undefined1 *)0x0;
  local_1c = -0x80000000;
  uVar3 = 0;
  do {
    iVar2 = (uVar3 & 0xffff) * 5;
    if ((&DAT_00174df0)[iVar2] == '\0') {
      return local_20;
    }
    uVar5 = *(ushort *)(&DAT_002e9111 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6);
    uVar7 = FUN_000cfbd8();
    iVar6 = (int)((ulonglong)uVar7 >> 0x20);
    if (((uint)uVar5 & (uint)uVar7) == 0) {
      bVar1 = (&DAT_00174df0)[iVar2];
      if (bVar1 < 6) {
        if ((bVar1 == 3) && (*(int *)(iVar6 + 0xf78) < 0)) goto LAB_00020faa;
      }
      else if (bVar1 < 7) {
        if (*(int *)(iVar6 + 0xaf9) <= *(int *)(iVar6 + 0x14b8) * 2) goto LAB_00020faa;
      }
      else if (bVar1 == 8) {
        uVar5 = 1;
        while ((uVar5 < 7 &&
               ((iVar2 = (uint)uVar5 + iVar6, *(char *)(iVar2 + 0x100f) == '\0' ||
                (*(char *)(iVar2 + 0x1008) != '\0'))))) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 == 7) goto LAB_00020faa;
      }
      uVar5 = *(ushort *)
               (iVar6 + 0xb + (uint)(byte)(&DAT_00174df0)[(extraout_ECX & 0xffff) * 5] * 2);
      local_18 = 0;
      local_2c = 0;
      puVar4 = (undefined1 *)0x0;
      while( true ) {
        iVar2 = (uint)uVar5 * 0x45;
        if (&DAT_002ddd1b + iVar2 < &DAT_002ddd1c) break;
        if (*(ushort *)(&DAT_002ddd2b + iVar2) < *(ushort *)(&DAT_002ddd29 + iVar2)) {
          iVar6 = (uint)*(ushort *)(&DAT_002ddd29 + iVar2) -
                  (uint)*(ushort *)(&DAT_002ddd2b + iVar2);
          local_18 = local_18 + iVar6;
          if (local_2c < iVar6) {
            puVar4 = &DAT_002ddd1b + iVar2;
            local_2c = iVar6;
          }
        }
        uVar5 = *(ushort *)(&DAT_002ddd21 + iVar2);
      }
      if ((puVar4 != (undefined1 *)0x0) &&
         (local_18 = local_18 * *(int *)((int)&DAT_00174df1 + (extraout_ECX & 0xffff) * 5),
         local_18 - local_1c != 0 && local_1c <= local_18)) {
        local_20 = puVar4;
        local_1c = local_18;
      }
    }
LAB_00020faa:
    uVar3 = extraout_ECX + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_021008 (Ghidra: FUN_00021008)
 * Prototype: void sub_021008(void);
 * Address  : 0x21008 (Size: 78 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x40832
 * Callees  : 3 -> 0x21056, 0x2213c, 0xe6a10
 ******************************************************************************/
void FUN_00021008(void)

{
  uint uVar1;
  uint extraout_ECX;
  byte *pbVar2;
  
  FUN_0002213c();
  FUN_000e6a10();
  uVar1 = 0;
  pbVar2 = &DAT_0019d0c8;
  do {
    if (((*pbVar2 & 1) != 0) && (pbVar2[0x2c] == 1)) {
      FUN_00021056();
      uVar1 = extraout_ECX;
    }
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0x4ef;
  } while (uVar1 < 5);
  return;
}

/******************************************************************************
 * Function : sub_021056 (Ghidra: FUN_00021056)
 * Prototype: void sub_021056(void);
 * Address  : 0x21056 (Size: 448 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x21008, 0x21515, 0x69a12
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_00021056(void)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  uint extraout_ECX;
  int iVar5;
  int in_EDX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined4 *local_1c;
  
  bVar13 = 0;
  iVar2 = in_EAX * 0x14ca;
  puVar6 = (undefined4 *)(&DAT_002ccbd3 + iVar2);
  FUN_000e6a10();
  iVar3 = in_EDX * 0x464;
  *(undefined2 **)((int)&DAT_002ccbf7 + iVar2) = &DAT_002e0589 + extraout_ECX * 0xa84;
  ppuVar4 = &PTR_s_Build_and_defend_Computer_00175563 + in_EDX * 0x119;
  *(int *)((int)&DAT_002ccbfb + iVar2) = in_EDX;
  *(undefined4 *)(&DAT_002ccbeb + iVar2) = *(undefined4 *)(&DAT_0017556f + iVar3);
  *(undefined4 *)(&DAT_002ccbe7 + iVar2) = *(undefined4 *)(&DAT_0017556b + iVar3);
  *(undefined4 *)(&DAT_002ccc03 + iVar2) = *(undefined4 *)(&DAT_00175573 + iVar3);
  *(undefined4 *)(&DAT_002ccbff + iVar2) = *(undefined4 *)(&DAT_00175577 + iVar3);
  uVar1 = *(undefined4 *)(&DAT_0017557b + iVar3);
  *(undefined4 *)(&DAT_002ccbdf + iVar2) = 1;
  *puVar6 = 2;
  *(undefined4 *)(&DAT_002ccbf3 + iVar2) = uVar1;
  uVar9 = 0;
  puVar7 = puVar6;
  do {
    if (uVar9 == extraout_ECX) {
      *(undefined4 *)((int)puVar7 + 0xa16) = 0x80000000;
    }
    else {
      *(undefined4 *)((int)puVar7 + 0xa16) = 0;
    }
    uVar9 = uVar9 + 1;
    puVar7 = (undefined4 *)((int)puVar7 + 0x18a);
  } while (uVar9 < 5);
  *(undefined4 *)(&DAT_002ccbef + iVar2) = *(undefined4 *)(&DAT_00175567 + iVar3);
  iVar2 = 0;
  ppuVar8 = ppuVar4;
  local_1c = puVar6;
  while ((ppuVar8 < (undefined **)(iVar3 + 0x1755b3U) && (ppuVar8[8] != (undefined *)0x0))) {
    if ((*(code **)(ppuVar8[8] + 0x1c) == FUN_0001ac13) && (-1 < *(int *)(ppuVar8[8] + 0x14))) {
      for (iVar5 = 0;
          (iVar5 < 0x12 && (*(uint *)(ppuVar8[8] + 0x14) != (uint)(byte)(&DAT_00174e09)[iVar5]));
          iVar5 = iVar5 + 1) {
      }
      if (iVar5 == 0x12) {
        iVar5 = -1;
      }
      *(int *)(ppuVar8[8] + 0x14) = iVar5;
    }
    puVar7 = (undefined4 *)ppuVar8[8];
    puVar12 = local_1c + 0xe;
    for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar7;
      puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
    }
    iVar2 = iVar2 + 1;
    local_1c[0x19] = ppuVar8[8];
    ppuVar8 = ppuVar8 + 1;
    local_1c = local_1c + 0x12;
  }
  uVar9 = 0;
  *(byte *)(puVar6 + iVar2 * 0x12 + 0x1f) = *(byte *)(puVar6 + iVar2 * 0x12 + 0x1f) | 2;
  ppuVar8 = ppuVar4;
  while ((uVar9 < 0xf && (ppuVar8[0x1c] != (undefined *)0x0))) {
    iVar2 = uVar9 * 8;
    ppuVar11 = ppuVar8 + 0x1c;
    ppuVar8 = ppuVar8 + 8;
    uVar9 = uVar9 + 1;
    puVar7 = puVar6 + iVar2 + 0x188;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *ppuVar11;
      ppuVar11 = ppuVar11 + (uint)bVar13 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    }
  }
  uVar10 = 0;
  *(byte *)(puVar6 + uVar9 * 8 + 0x189) = *(byte *)(puVar6 + uVar9 * 8 + 0x189) | 2;
  while ((uVar10 < 0xc && (ppuVar4[0x94] != (undefined *)0x0))) {
    iVar2 = uVar10 * 0xb;
    ppuVar8 = ppuVar4 + 0x94;
    ppuVar4 = ppuVar4 + 0xb;
    uVar10 = uVar10 + 1;
    puVar7 = puVar6 + iVar2 + 0x200;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *ppuVar8;
      ppuVar8 = ppuVar8 + (uint)bVar13 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
    }
  }
  if (uVar10 < 0xc) {
    puVar6[uVar10 * 0xb + 0x200] = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_021216 (Ghidra: FUN_00021216)
 * Prototype: void sub_021216(void);
 * Address  : 0x21216 (Size: 303 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2ca74
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00021216(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte *pbVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int local_20;
  uint local_1c;
  
  local_20 = 0;
  puVar6 = &DAT_002ccbd3;
  pbVar3 = &DAT_0019d0c8;
  do {
    *(int *)(puVar6 + 0x24) = (int)&DAT_002e0589 + local_20;
    iVar7 = *(int *)(puVar6 + 0x28);
    if (((*pbVar3 & 1) != 0) && (pbVar3[0x2c] == 1)) {
      ppuVar2 = &PTR_s_Build_and_defend_Computer_00175563 + iVar7 * 0x119;
      puVar4 = puVar6;
      for (ppuVar1 = ppuVar2;
          (ppuVar1 < (undefined **)(iVar7 * 0x464 + 0x1755b3) && (ppuVar1[8] != (undefined *)0x0));
          ppuVar1 = ppuVar1 + 1) {
        *(undefined4 *)(puVar4 + 0x50) = *(undefined4 *)(ppuVar1[8] + 0x18);
        *(undefined4 *)(puVar4 + 0x54) = *(undefined4 *)(ppuVar1[8] + 0x1c);
        *(undefined4 *)(puVar4 + 0x58) = *(undefined4 *)(ppuVar1[8] + 0x20);
        *(undefined4 *)(puVar4 + 0x5c) = *(undefined4 *)(ppuVar1[8] + 0x24);
        *(undefined4 *)(puVar4 + 0x60) = *(undefined4 *)(ppuVar1[8] + 0x28);
        puVar4 = puVar4 + 0x48;
      }
      uVar5 = 0;
      for (ppuVar1 = ppuVar2;
          (uVar5 < 0xf && (iVar7 = uVar5 * 0x20, ppuVar1[0x1c] != (undefined *)0x0));
          ppuVar1 = ppuVar1 + 8) {
        uVar5 = uVar5 + 1;
        *(undefined **)(puVar6 + iVar7 + 0x62c) = ppuVar1[0x1f];
      }
      local_1c = 0;
      for (; (local_1c < 0xc && (ppuVar2[0x94] != (undefined *)0x0)); ppuVar2 = ppuVar2 + 0xb) {
        *(undefined **)(puVar6 + local_1c * 0x2c + 0x810) = ppuVar2[0x98];
        *(undefined **)(puVar6 + local_1c * 0x2c + 0x80c) = ppuVar2[0x97];
        *(undefined **)(puVar6 + local_1c * 0x2c + 0x818) = ppuVar2[0x9a];
        local_1c = local_1c + 1;
      }
    }
    local_20 = local_20 + 0x1508;
    puVar6 = puVar6 + 0x14ca;
    pbVar3 = pbVar3 + 0x4ef;
  } while (local_20 != 0x6928);
  return;
}

/******************************************************************************
 * Function : sub_021345 (Ghidra: FUN_00021345)
 * Prototype: int sub_021345(void);
 * Address  : 0x21345 (Size: 36 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x21369
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00021345(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX + 0x38;
  while( true ) {
    if ((*(byte *)(iVar1 + 0x44) & 2) != 0) {
      return 0;
    }
    if (*(code **)(iVar1 + 0x1c) == FUN_0001b15c) break;
    iVar1 = iVar1 + 0x48;
  }
  if ((*(byte *)(iVar1 + 0x44) & 4) != 0) {
    return iVar1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_021369 (Ghidra: FUN_00021369)
 * Prototype: void sub_021369(void);
 * Address  : 0x21369 (Size: 173 bytes)
 * Module   : compturn.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 3 -> 0x21345, 0x21416, 0x2213c
 ******************************************************************************/
void FUN_00021369(void)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint extraout_ECX;
  byte *pbVar4;
  int iVar5;
  undefined8 uVar6;
  
  bVar2 = false;
  pbVar4 = &DAT_0019d0c8;
  uVar3 = 0;
  iVar5 = 0;
  do {
    if (((*pbVar4 & 1) != 0) &&
       ((((*pbVar4 & 0x40) != 0 || (((&DAT_002e0593)[iVar5] & 1) != 0)) && (pbVar4[0x2c] == 1)))) {
      FUN_00021416();
      uVar6 = FUN_00021345();
      pbVar4 = (byte *)((ulonglong)uVar6 >> 0x20);
      uVar3 = extraout_ECX;
      if (((int)uVar6 != 0) && (DAT_001991a8 + 5000 < DAT_002e8bee)) {
        bVar2 = true;
        pbVar1 = (byte *)((int)uVar6 + 0x44);
        *pbVar1 = *pbVar1 & 0xfb;
      }
    }
    pbVar4 = pbVar4 + 0x4ef;
    iVar5 = iVar5 + 0x1508;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  if (bVar2) {
    DAT_001991a8 = DAT_002e8bee;
    FUN_0002213c();
  }
  return;
}

/******************************************************************************
 * Function : dk_process_computer_player_021416 (Ghidra: FUN_00021416)
 * Prototype: void dk_process_computer_player_021416(void);
 * Address  : 0x21416 (Size: 255 bytes)
 * Module   : compturn.cpp [direct_file_string_xref]
 * OrigLine : compturn.cpp:231 ("No Process for a computer player"); compturn.cpp:239 ("Computer performed more than one task")
 * Naming   : String 'No Process for a computer player'
 * Callers  : 1 -> 0x21369
 * Callees  : 5 -> 0x18a0c, 0x19fb4, 0x1a970, 0x1b8ff, 0xddaf0
 * Strings  :
 *   - 0x162581: "compturn.cpp"
 *   - 0x1625b4: "compturn.cpp"
 *   - 0x162560: "No Process for a computer player"
 *   - 0x16258e: "Computer performed more than one task"
 ******************************************************************************/
void FUN_00021416(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *extraout_ECX_02;
  uint *puVar4;
  uint *extraout_ECX_03;
  uint uVar5;
  
  iVar2 = in_EAX * 0x14ca;
  if ((*(int *)(&DAT_002ccbe7 + iVar2) == 0) || (DAT_002e8bee < *(uint *)(&DAT_002ccbff + iVar2))) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  *(int *)(&DAT_002ccbe3 + iVar2) = iVar3;
  if (iVar3 != 0) {
    FUN_00019fb4();
    FUN_00018a0c();
    uVar5 = extraout_ECX[4];
    puVar4 = extraout_ECX;
    while ((0 < (int)uVar5 && (puVar4[4] != 0))) {
      if (DAT_002e8bee % puVar4[6] == 0) {
        FUN_0001b8ff();
        puVar4 = extraout_ECX_03;
      }
      uVar1 = *puVar4;
      if (uVar1 < 2) {
        if ((uVar1 == 1) && (puVar4[2] = puVar4[2] - 1, (int)puVar4[2] < 1)) {
          puVar4[2] = puVar4[1];
          goto LAB_00021478;
        }
      }
      else if (uVar1 < 3) {
LAB_00021478:
        FUN_0001a970();
        puVar4 = extraout_ECX_00;
      }
      else if (uVar1 == 3) {
        if ((short)puVar4[0x531] == 0) {
          FUN_000ddaf0(); /* LbErrorLog("compturn.cpp", line 231, "No Process for a computer player") */
          *extraout_ECX_02 = 1;
          puVar4 = extraout_ECX_02;
        }
        else {
          (*(code *)puVar4[(uint)(ushort)puVar4[0x531] * 0x12 + 0x16])();
          puVar4 = extraout_ECX_01;
        }
      }
      uVar5 = uVar5 - 1;
    }
    if ((int)puVar4[4] < 0) {
      FUN_000ddaf0(); /* LbErrorLog("compturn.cpp", line 239, "Computer performed more than one task") */
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_021515 (Ghidra: FUN_00021515)
 * Prototype: undefined4 sub_021515(void);
 * Address  : 0x21515 (Size: 18 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x21056
 ******************************************************************************/
undefined4 FUN_00021515(void)

{
  FUN_00021056();
  return 1;
}

/******************************************************************************
 * Function : sub_021527 (Ghidra: FUN_00021527)
 * Prototype: undefined4 sub_021527(void);
 * Address  : 0x21527 (Size: 33 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x5dc27, 0x5eb8d, 0x61f77, 0xdd6c8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00021527(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX * 0x1508;
  if (((&DAT_002e0593)[iVar1] & 1) == 0) {
    (&DAT_002e0593)[iVar1] = (&DAT_002e0593)[iVar1] | 1;
  }
  else {
    (&DAT_002e0593)[iVar1] = (&DAT_002e0593)[iVar1] & 0xfe;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_021548 (Ghidra: FUN_00021548)
 * Prototype: int sub_021548(char param_1);
 * Address  : 0x21548 (Size: 400 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1e5de
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00021548(char param_1)

{
  int iVar1;
  ushort uVar2;
  char in_AL;
  char in_CL;
  byte bVar3;
  char cVar4;
  uint in_EDX;
  int iVar5;
  uint unaff_EBX;
  int iVar6;
  
  if (param_1 == '\0') {
    cVar4 = '\x03';
  }
  else {
    cVar4 = '\x01';
  }
  bVar3 = (in_CL - cVar4) + 4;
  uVar2 = 0;
  while( true ) {
    bVar3 = bVar3 & 3;
    if (3 < uVar2) {
      return -1;
    }
    iVar5 = (char)(&DAT_0018b67f)[(uint)bVar3 * 2] * 3 + (unaff_EBX & 0xffff);
    iVar6 = *(char *)((int)&DAT_0018b67b + (uint)bVar3 * 2 + 3) * 3 + (in_EDX & 0xffff);
    if (((((&DAT_001921d4)[(uint)(byte)(&DAT_002d33c5)[(iVar6 / 3 + (iVar5 / 3) * 0x55) * 6] * 0x16]
           != '\0') && ((byte)(&DAT_002d33c5)[(iVar6 / 3 + (iVar5 / 3) * 0x55) * 6] != 0x34)) &&
        ((iVar1 = (iVar5 * 0x100 + iVar6) * 5, (*(byte *)((int)&DAT_00279203 + iVar1) & 0x20) == 0
         || (((*(byte *)((int)&DAT_00279203 + iVar1) & 0x20) != 0 &&
             ((uint)((&DAT_002d33ca)[((&DAT_0019033b)[iVar5] * 0x55 + (&DAT_0019033b)[iVar6]) * 6] &
                    7) == (int)in_AL)))))) ||
       ((((&DAT_001921c6)
          [(uint)(byte)(&DAT_002d33c5)
                       [((int)((in_EDX & 0xffff) +
                              *(char *)((int)&DAT_0018b67b + (uint)bVar3 * 2 + 3) * 3) / 3 +
                        ((int)((unaff_EBX & 0xffff) + (char)(&DAT_0018b67f)[(uint)bVar3 * 2] * 3) /
                        3) * 0x55) * 6] * 0x16] & 0x29) == 0 &&
        ((byte)(&DAT_002d33c5)
               [((int)((in_EDX & 0xffff) + *(char *)((int)&DAT_0018b67b + (uint)bVar3 * 2 + 3) * 3)
                 / 3 + ((int)((unaff_EBX & 0xffff) + (char)(&DAT_0018b67f)[(uint)bVar3 * 2] * 3) / 3
                       ) * 0x55) * 6] != 0xc)))) break;
    bVar3 = bVar3 + cVar4;
    uVar2 = uVar2 + 1;
  }
  return (in_EDX & 0xffff) + *(char *)((int)&DAT_0018b67b + (uint)bVar3 * 2 + 3) * 3 +
         ((char)(&DAT_0018b67f)[(uint)bVar3 * 2] * 3 + (unaff_EBX & 0xffff)) * 0x100;
}

/******************************************************************************
 * Function : sub_0216d8 (Ghidra: FUN_000216d8)
 * Prototype: ushort sub_0216d8(ushort param_1,char param_2,ushort param_3);
 * Address  : 0x216d8 (Size: 2660 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1e5de
 * Callees  : 2 -> 0xe66ec, 0xe69fc
 ******************************************************************************/
ushort FUN_000216d8(ushort param_1,char param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort in_CX;
  ushort extraout_CX;
  ushort uVar10;
  uint extraout_ECX;
  ushort in_DX;
  ushort extraout_DX;
  int iVar11;
  ushort unaff_BX;
  ushort uVar12;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_24;
  char local_14;
  char local_10;
  
  local_34 = (byte)(param_2 + 1) & 0xffffff03;
  FUN_000e69fc();
  FUN_000e69fc();
  sVar5 = 0x96;
  iVar7 = FUN_000e69fc();
  local_3c = iVar7 - 1;
  local_30 = (byte)(param_2 + 3) & 0xffffff03;
  FUN_000e69fc();
  FUN_000e69fc();
  local_14 = '\0';
  iVar7 = FUN_000e69fc();
  local_24 = iVar7 - 1;
  local_10 = '\0';
  uVar12 = in_DX;
  while ((sVar5 != 0 && ((local_14 != '\x02' || (local_10 != '\x02'))))) {
    if (local_14 != '\x02') {
      uVar8 = FUN_000e66ec();
      iVar7 = (int)((uVar8 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
      FUN_000e69fc();
      FUN_000e69fc();
      iVar9 = FUN_000e69fc();
      if ((int)(local_3c & 0xffff) < iVar9) {
LAB_00021a99:
        if (local_14 == '\x01') {
          local_14 = '\x02';
        }
        else {
          bVar4 = (char)local_34 + 3;
          uVar10 = 0;
          while( true ) {
            uVar8 = (uint)bVar4;
            if (3 < uVar10) break;
            iVar7 = (uVar8 & 0xff03) * 2;
            iVar9 = (uint)unaff_BX + (char)(&DAT_0018b67f)[iVar7] * 3;
            iVar7 = *(char *)((int)&DAT_0018b67b + iVar7 + 3) * 3 + (uint)in_DX;
            if (((((&DAT_001921d4)
                   [(uint)(byte)(&DAT_002d33c5)[(iVar7 / 3 + (iVar9 / 3) * 0x55) * 6] * 0x16] !=
                   '\0') && ((byte)(&DAT_002d33c5)[(iVar7 / 3 + (iVar9 / 3) * 0x55) * 6] != 0x34))
                && ((iVar11 = (iVar9 * 0x100 + iVar7) * 5,
                    (*(byte *)((int)&DAT_00279203 + iVar11) & 0x20) == 0 ||
                    (((*(byte *)((int)&DAT_00279203 + iVar11) & 0x20) != 0 &&
                     (((&DAT_002d33ca)[((&DAT_0019033b)[iVar7] + (&DAT_0019033b)[iVar9] * 0x55) * 6]
                      & 7) == param_3)))))) ||
               ((iVar7 = (uVar8 & 0xff03) * 2,
                ((&DAT_001921c6)
                 [(uint)(byte)(&DAT_002d33c5)
                              [((int)(*(char *)((int)&DAT_0018b67b + iVar7 + 3) * 3 + (uint)in_DX) /
                                3 + ((int)((uint)unaff_BX + (char)(&DAT_0018b67f)[iVar7] * 3) / 3) *
                                    0x55) * 6] * 0x16] & 0x29) == 0 &&
                ((byte)(&DAT_002d33c5)
                       [((int)(*(char *)((int)&DAT_0018b67b + iVar7 + 3) * 3 + (uint)in_DX) / 3 +
                        ((int)((uint)unaff_BX + (char)(&DAT_0018b67f)[iVar7] * 3) / 3) * 0x55) * 6]
                 != 0xc)))) {
              in_DX = in_DX + *(char *)((int)&DAT_0018b67b + (uVar8 & 0xff03) * 2 + 3) * 3;
              unaff_BX = unaff_BX + (char)(&DAT_0018b67f)[(uVar8 & 0xff03) * 2] * 3;
              local_34 = uVar8 & 0xffffff03;
              break;
            }
            bVar4 = (char)(uVar8 & 0xffffff03) + 1;
            uVar10 = uVar10 + 1;
          }
        }
      }
      else {
        iVar9 = (uint)unaff_BX + (char)(&DAT_0018b67f)[iVar7 * 2] * 3;
        iVar11 = *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3 + (uint)in_DX;
        if (((((&DAT_001921d4)
               [(uint)(byte)(&DAT_002d33c5)[(iVar11 / 3 + (iVar9 / 3) * 0x55) * 6] * 0x16] == '\0')
             || ((byte)(&DAT_002d33c5)[(iVar11 / 3 + (iVar9 / 3) * 0x55) * 6] == 0x34)) ||
            ((iVar2 = (iVar9 * 0x100 + iVar11) * 5,
             (*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) != 0 &&
             (((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) == 0 ||
              (param_3 !=
               ((&DAT_002d33ca)[((&DAT_0019033b)[iVar11] + (&DAT_0019033b)[iVar9] * 0x55) * 6] & 7))
              ))))) &&
           ((((&DAT_001921c6)
              [(uint)(byte)(&DAT_002d33c5)
                           [((int)(*(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3 + (uint)in_DX)
                             / 3 + ((int)((uint)unaff_BX + (char)(&DAT_0018b67f)[iVar7 * 2] * 3) / 3
                                   ) * 0x55) * 6] * 0x16] & 0x29) != 0 ||
            ((byte)(&DAT_002d33c5)
                   [((int)(*(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3 + (uint)in_DX) / 3 +
                    ((int)((uint)unaff_BX + (char)(&DAT_0018b67f)[iVar7 * 2] * 3) / 3) * 0x55) * 6]
             == 0xc)))) goto LAB_00021a99;
        in_DX = in_DX + *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3;
        unaff_BX = unaff_BX + (char)(&DAT_0018b67f)[iVar7 * 2] * 3;
        FUN_000e69fc();
        FUN_000e69fc();
        local_3c = FUN_000e69fc();
        local_14 = '\x01';
      }
      if ((in_DX == in_CX) && (unaff_BX == param_1)) goto LAB_00021c54;
    }
    if (local_10 != '\x02') {
      uVar8 = FUN_000e66ec();
      iVar7 = (int)((uVar8 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
      FUN_000e69fc();
      FUN_000e69fc();
      iVar9 = FUN_000e69fc();
      uVar10 = (ushort)extraout_ECX;
      if ((int)(local_24 & 0xffff) < iVar9) {
LAB_00021ec0:
        if (local_10 == '\x01') {
          local_10 = '\x02';
        }
        else {
          bVar4 = (char)local_30 + 1;
          uVar3 = 0;
          while( true ) {
            uVar8 = (uint)bVar4;
            if (3 < uVar3) break;
            iVar7 = (uVar8 & 0xff03) * 2;
            iVar9 = (extraout_ECX & 0xffff) + (char)(&DAT_0018b67f)[iVar7] * 3;
            iVar7 = *(char *)((int)&DAT_0018b67b + iVar7 + 3) * 3 + (uint)uVar12;
            if (((((&DAT_001921d4)
                   [(uint)(byte)(&DAT_002d33c5)[(iVar7 / 3 + (iVar9 / 3) * 0x55) * 6] * 0x16] !=
                   '\0') && ((byte)(&DAT_002d33c5)[(iVar7 / 3 + (iVar9 / 3) * 0x55) * 6] != 0x34))
                && ((iVar11 = (iVar9 * 0x100 + iVar7) * 5,
                    (*(byte *)((int)&DAT_00279203 + iVar11) & 0x20) == 0 ||
                    (((*(byte *)((int)&DAT_00279203 + iVar11) & 0x20) != 0 &&
                     (((&DAT_002d33ca)[((&DAT_0019033b)[iVar7] + (&DAT_0019033b)[iVar9] * 0x55) * 6]
                      & 7) == param_3)))))) ||
               ((iVar7 = (uVar8 & 0xff03) * 2,
                ((&DAT_001921c6)
                 [(uint)(byte)(&DAT_002d33c5)
                              [((int)((uint)uVar12 + *(char *)((int)&DAT_0018b67b + iVar7 + 3) * 3)
                                / 3 + ((int)((extraout_ECX & 0xffff) +
                                            (char)(&DAT_0018b67f)[iVar7] * 3) / 3) * 0x55) * 6] *
                  0x16] & 0x29) == 0 &&
                ((byte)(&DAT_002d33c5)
                       [((int)((uint)uVar12 + *(char *)((int)&DAT_0018b67b + iVar7 + 3) * 3) / 3 +
                        ((int)((extraout_ECX & 0xffff) + (char)(&DAT_0018b67f)[iVar7] * 3) / 3) *
                        0x55) * 6] != 0xc)))) {
              uVar12 = uVar12 + *(char *)((int)&DAT_0018b67b + (uVar8 & 0xff03) * 2 + 3) * 3;
              uVar10 = uVar10 + (char)(&DAT_0018b67f)[(uVar8 & 0xff03) * 2] * 3;
              local_30 = uVar8 & 0xffffff03;
              break;
            }
            bVar4 = (char)(uVar8 & 0xffffff03) + 3;
            uVar3 = uVar3 + 1;
          }
        }
      }
      else {
        iVar9 = (char)(&DAT_0018b67f)[iVar7 * 2] * 3 + (extraout_ECX & 0xffff);
        iVar11 = *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3 + (uint)uVar12;
        if (((((&DAT_001921d4)
               [(uint)(byte)(&DAT_002d33c5)[(iVar11 / 3 + (iVar9 / 3) * 0x55) * 6] * 0x16] == '\0')
             || ((byte)(&DAT_002d33c5)[(iVar11 / 3 + (iVar9 / 3) * 0x55) * 6] == 0x34)) ||
            ((iVar2 = (iVar9 * 0x100 + iVar11) * 5,
             (*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) != 0 &&
             (((*(byte *)((int)&DAT_00279203 + iVar2) & 0x20) == 0 ||
              (param_3 !=
               ((&DAT_002d33ca)[((&DAT_0019033b)[iVar11] + (&DAT_0019033b)[iVar9] * 0x55) * 6] & 7))
              ))))) &&
           ((((&DAT_001921c6)
              [(uint)(byte)(&DAT_002d33c5)
                           [((int)((uint)uVar12 + *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3)
                             / 3 + ((int)((extraout_ECX & 0xffff) +
                                         (char)(&DAT_0018b67f)[iVar7 * 2] * 3) / 3) * 0x55) * 6] *
               0x16] & 0x29) != 0 ||
            ((byte)(&DAT_002d33c5)
                   [((int)((uint)uVar12 + *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3) / 3 +
                    ((int)((extraout_ECX & 0xffff) + (char)(&DAT_0018b67f)[iVar7 * 2] * 3) / 3) *
                    0x55) * 6] == 0xc)))) goto LAB_00021ec0;
        uVar12 = uVar12 + *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3) * 3;
        FUN_000e69fc();
        FUN_000e69fc();
        local_24 = FUN_000e69fc();
        local_10 = '\x01';
        uVar10 = extraout_CX;
      }
      if ((uVar12 == in_CX) && (uVar10 == param_1)) goto LAB_00022087;
    }
    sVar5 = sVar5 + -1;
  }
  if ((*(char *)(in_EAX + 0x1c) == '\0') || (*(char *)(in_EAX + 0x1c) == '\x01')) {
    uVar12 = (ushort)*(byte *)(in_EAX + 0x1c);
  }
  else {
    FUN_000e69fc();
    FUN_000e69fc();
    sVar5 = FUN_000e69fc();
    sVar6 = FUN_000e69fc();
    if (extraout_DX < (ushort)(sVar6 + sVar5)) {
LAB_00021c54:
      uVar12 = 1;
    }
    else if ((ushort)(sVar6 + sVar5) < extraout_DX) {
LAB_00022087:
      uVar12 = 0;
    }
    else {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      uVar8 = DAT_002e8bf6 >> 0xd;
      uVar1 = DAT_002e8bf6 * 0x80000;
      DAT_002e8bf6._0_2_ = (ushort)uVar8;
      uVar12 = (ushort)DAT_002e8bf6 & 1;
      DAT_002e8bf6 = uVar8 | uVar1;
    }
  }
  return uVar12;
}

/******************************************************************************
 * Function : sub_02213c (Ghidra: FUN_0002213c)
 * Prototype: void sub_02213c(void);
 * Address  : 0x2213c (Size: 725 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x21008, 0x21369
 * Callees  : 1 -> 0xe6a10
 ******************************************************************************/
void FUN_0002213c(void)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_1c;
  
  FUN_000e6a10();
  puVar3 = DAT_00199228;
  pcVar1 = DAT_00199228 + 0x1c39;
  iVar4 = 0;
  puVar9 = DAT_00199228;
  do {
    if (((&DAT_002d33c5)[iVar4] == '\x01') || ((&DAT_002d33c5)[iVar4] == '4')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    iVar4 = iVar4 + 6;
    *puVar9 = uVar7;
    puVar9 = puVar9 + 1;
  } while (iVar4 != 0xa956);
  local_24 = 0;
  local_48 = 0;
  local_30 = 0;
  do {
    local_40 = 0;
    pbVar8 = puVar3 + local_30;
    do {
      if (((*pbVar8 & 1) == 0) && ((*pbVar8 & 2) == 0)) {
        local_58 = 0;
        local_34 = 0;
        local_28 = 0;
        local_3c = 0;
        local_4c = local_40;
        local_1c = local_48;
        uVar6 = 0;
        *pbVar8 = *pbVar8 | 2;
        local_54 = 0;
        local_50 = 0;
        pcVar11 = pcVar1;
        do {
          local_58 = local_58 + local_4c;
          local_34 = local_34 + local_1c;
          iVar4 = local_4c + local_1c * 0x55;
          local_28 = local_28 + 1;
          if ((&DAT_002d33c5)[iVar4 * 6] == '4') {
            local_54 = local_54 + 1;
          }
          else {
            local_50 = local_50 + 1;
            if (((puVar3[iVar4 + -1] & 1) == 0) && ((puVar3[iVar4 + -1] & 2) == 0)) {
              puVar3[iVar4 + -1] = puVar3[iVar4 + -1] | 2;
              iVar4 = uVar6 * 2;
              pcVar1[iVar4] = (char)local_4c + -1;
              uVar6 = uVar6 + 1;
              (pcVar1 + iVar4)[1] = (char)local_1c;
            }
            iVar4 = local_1c * 0x55 + local_4c;
            if (((puVar3[iVar4 + 1] & 1) == 0) && ((puVar3[iVar4 + 1] & 2) == 0)) {
              puVar3[iVar4 + 1] = puVar3[iVar4 + 1] | 2;
              iVar4 = uVar6 * 2;
              pcVar1[iVar4] = (char)local_4c + '\x01';
              uVar6 = uVar6 + 1;
              (pcVar1 + iVar4)[1] = (char)local_1c;
            }
            pbVar10 = puVar3 + (local_1c + -1) * 0x55 + local_4c;
            if (((*pbVar10 & 1) == 0) && ((*pbVar10 & 2) == 0)) {
              *pbVar10 = *pbVar10 | 2;
              iVar4 = uVar6 * 2;
              pcVar1[iVar4] = (char)local_4c;
              uVar6 = uVar6 + 1;
              (pcVar1 + iVar4)[1] = (char)local_1c + -1;
            }
            pbVar10 = puVar3 + (local_1c + 1) * 0x55 + local_4c;
            if (((*pbVar10 & 1) == 0) && ((*pbVar10 & 2) == 0)) {
              *pbVar10 = *pbVar10 | 2;
              iVar4 = uVar6 * 2;
              pcVar1[iVar4] = (char)local_4c;
              uVar6 = uVar6 + 1;
              (pcVar1 + iVar4)[1] = (char)local_1c + '\x01';
            }
          }
          local_4c = (int)*pcVar11;
          local_3c = local_3c + 1;
          local_1c = (int)pcVar11[1];
          pcVar11 = pcVar11 + 2;
        } while (local_3c <= uVar6);
        if (local_24 < 0x28) {
          iVar4 = local_24;
          local_24 = local_24 + 1;
        }
        else if (local_54 == 0) {
          iVar12 = 0;
          for (iVar5 = 0;
              (iVar4 = -1, iVar5 < 0x460 &&
              ((*(int *)((int)&DAT_002eb562 + iVar5) != 0 ||
               (iVar4 = iVar12, (int)local_50 <= (int)(uint)*(ushort *)((int)&DAT_002eb55c + iVar5))
               ))); iVar5 = iVar5 + 0x1c) {
            iVar12 = iVar12 + 1;
          }
        }
        else {
          iVar4 = -1;
          local_2c = local_50;
          iVar12 = 0;
          local_38 = local_54;
          iVar5 = 0;
          do {
            iVar2 = *(int *)((int)&DAT_002eb562 + iVar5);
            if (iVar2 == local_38) {
              if ((int)(uint)*(ushort *)((int)&DAT_002eb55c + iVar5) < (int)local_2c) {
                iVar4 = iVar12;
                local_2c = (uint)*(ushort *)((int)&DAT_002eb55c + iVar5);
              }
            }
            else if (iVar2 < local_38) {
              local_2c = (uint)*(ushort *)((int)&DAT_002eb55c + iVar5);
              iVar4 = iVar12;
              local_38 = iVar2;
            }
            iVar12 = iVar12 + 1;
            iVar5 = iVar5 + 0x1c;
          } while (iVar12 < 0x28);
        }
        if (iVar4 != -1) {
          (&DAT_002eb558)[iVar4 * 0xe] = (short)(local_58 / local_28) * 3 + 1;
          (&DAT_002eb55e)[iVar4 * 0xe] = 0;
          (&DAT_002eb552)[iVar4 * 0x1c] = (&DAT_002eb552)[iVar4 * 0x1c] | 1;
          (&DAT_002eb55a)[iVar4 * 0xe] = (short)(local_34 / local_28) * 3 + 1;
          (&DAT_002eb55c)[iVar4 * 0xe] = (short)local_50;
          (&DAT_002eb560)[iVar4 * 0xe] = (short)local_50;
          (&DAT_002eb562)[iVar4 * 7] = local_54;
        }
      }
      local_40 = local_40 + 1;
      pbVar8 = pbVar8 + 1;
    } while (local_40 < 0x55);
    local_48 = local_48 + 1;
    local_30 = local_30 + 0x55;
  } while (local_48 < 0x55);
  return;
}

/******************************************************************************
 * Function : sub_022414 (Ghidra: FUN_00022414)
 * Prototype: void sub_022414(void);
 * Address  : 0x22414 (Size: 71 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2245b
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00022414(void)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  int *in_ECX;
  int *in_EDX;
  int *unaff_EBX;
  
  iVar1 = *in_EAX;
  if (iVar1 == 0) {
    piVar2 = (int *)cpuid_basic_info(0);
  }
  else if (iVar1 == 1) {
    piVar2 = (int *)cpuid_Version_info(1);
  }
  else if (iVar1 == 2) {
    piVar2 = (int *)cpuid_cache_tlb_info(2);
  }
  else if (iVar1 == 3) {
    piVar2 = (int *)cpuid_serial_info(3);
  }
  else if (iVar1 == 4) {
    piVar2 = (int *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (iVar1 == 5) {
    piVar2 = (int *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (iVar1 == 6) {
    piVar2 = (int *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (iVar1 == 7) {
    piVar2 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (iVar1 == 9) {
    piVar2 = (int *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (iVar1 == 10) {
    piVar2 = (int *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (iVar1 == 0xb) {
    piVar2 = (int *)cpuid_Extended_Topology_info(0xb);
  }
  else if (iVar1 == 0xd) {
    piVar2 = (int *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (iVar1 == 0xf) {
    piVar2 = (int *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (iVar1 == -0x7ffffffe) {
    piVar2 = (int *)cpuid_brand_part1_info(0x80000002);
  }
  else if (iVar1 == -0x7ffffffd) {
    piVar2 = (int *)cpuid_brand_part2_info(0x80000003);
  }
  else if (iVar1 == -0x7ffffffc) {
    piVar2 = (int *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    piVar2 = (int *)cpuid(iVar1);
  }
  DAT_001991ac = piVar2[1];
  DAT_001991b4 = piVar2[2];
  DAT_001991b0 = piVar2[3];
  *in_EAX = *piVar2;
  *in_EDX = DAT_001991ac;
  *unaff_EBX = DAT_001991b0;
  *in_ECX = DAT_001991b4;
  return;
}

/******************************************************************************
 * Function : sub_02245b (Ghidra: FUN_0002245b)
 * Prototype: void sub_02245b(void);
 * Address  : 0x2245b (Size: 208 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x29738, 0x6a412
 * Callees  : 1 -> 0x22414
 * Strings  :
 *   - 0x179440: "AnonymousCPU"
 ******************************************************************************/
void FUN_0002245b(void)

{
  int *in_EAX;
  uint uVar1;
  int iVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = 0xd;
  iVar2 = (int)in_EAX + 0xd;
  while( true ) {
    if (iVar4 + -1 < 0) break;
    *(undefined1 *)(iVar2 + 0xb) = *(undefined1 *)(iVar4 + 0x17943f);
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + -1;
  }
  in_EAX[2] = 0;
  *in_EAX = 0;
  in_EAX[1] = 0;
  uVar3 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar3 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar3) {
    FUN_00022414(0);
    in_EAX[3] = local_20;
    in_EAX[4] = local_18;
    in_EAX[5] = local_1c;
    iVar4 = 1;
    FUN_00022414();
    *in_EAX = iVar4;
    in_EAX[1] = local_18;
    if (*in_EAX == 0) {
      uVar1 = 4;
    }
    else {
      uVar1 = *in_EAX >> 8 & 0xf;
    }
    if ((4 < uVar1) && ((*(byte *)(in_EAX + 1) & 0x10) != 0)) {
      in_EAX[2] = 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_02252b (Ghidra: FUN_0002252b)
 * Prototype: undefined4 sub_02252b(void);
 * Address  : 0x2252b (Size: 146 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe8d4a, 0xe8d50
 ******************************************************************************/
undefined4 FUN_0002252b(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  longdouble lVar5;
  
  if (*(int *)(in_EAX + 8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_000e8d4a();
    do {
      iVar3 = FUN_000e8d4a();
      if (*(int *)(in_EAX + 8) != 0) {
        rdtsc();
      }
    } while (iVar3 == iVar2);
    do {
      uVar4 = FUN_000e8d4a();
      if (*(int *)(in_EAX + 8) != 0) {
        rdtsc();
      }
    } while (uVar4 < iVar3 + 0x65U);
    lVar5 = (longdouble)FUN_000e8d50((uVar4 - extraout_ECX) * 1000,0);
    uVar1 = (undefined4)(longlong)ROUND(lVar5);
  }
  return uVar1;
}

/******************************************************************************
 * Function : sub_0225c0 (Ghidra: FUN_000225c0)
 * Prototype: undefined8 sub_0225c0(void);
 * Address  : 0x225c0 (Size: 41 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10ef10
 * Callees  : 1 -> 0x7c1f0
 ******************************************************************************/
undefined8 FUN_000225c0(void)

{
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  
  FUN_0007c1f0();
  return CONCAT44(in_EDX,extraout_ECX);
}

/******************************************************************************
 * Function : sub_0225fc (Ghidra: FUN_000225fc)
 * Prototype: longlong sub_0225fc(void);
 * Address  : 0x225fc (Size: 100 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x22660, 0x228b1, 0x22905, 0x22933, 0x229e4, 0x22f53
 ******************************************************************************/
longlong FUN_000225fc(void)

{
  char cVar1;
  uint in_EDX;
  int extraout_EDX;
  
  cVar1 = FUN_00022f53();
  if ((cVar1 != '\0') && (-1 < *(short *)(extraout_EDX + 0x5e))) {
    switch(*(undefined1 *)(extraout_EDX + 7)) {
    case 1:
      FUN_000228b1();
      break;
    case 2:
      FUN_00022905();
      break;
    case 3:
      FUN_000229e4();
      break;
    case 4:
      FUN_00022933();
    }
    return CONCAT44(in_EDX,1);
  }
  *(undefined2 *)(extraout_EDX + 0x5e) = 0xffff;
  FUN_00022660();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_022660 (Ghidra: FUN_00022660)
 * Prototype: undefined8 sub_022660(void);
 * Address  : 0x22660 (Size: 581 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x225fc, 0x5f6c5, 0xc4b0c
 * Callees  : 10 -> 0x24998, 0x25fbb, 0x6e538, 0x72af4, 0x7c590, 0x82cac, 0x859fc, 0xd7688, 0xda6fc, 0xdc440
 ******************************************************************************/
undefined8 FUN_00022660(void)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_EDX;
  int *piVar6;
  byte bVar7;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined2 auStack_24 [2];
  uint local_20;
  uint local_1c;
  
  bVar7 = 0;
  piVar6 = &local_2c;
  local_20 = (uint)*(byte *)(in_EAX + 0xe);
  local_1c = (uint)*(byte *)(in_EAX + 0x10);
  uVar1 = (&DAT_001ae9fc)
          [(*(uint *)((int)&DAT_00279203 + (local_1c * 0x100 + local_20) * 5 + 1) & 0x3fffff) >> 0xb
          ];
  do {
    uVar2 = uVar1;
    local_2c = in_EAX;
    if (uVar2 <= DAT_001ae9fc) goto LAB_000226c7;
    uVar1 = (&DAT_001ae9fc)[*(ushort *)(uVar2 + 2)];
  } while ((*(char *)(uVar2 + 0x1f) != '\x01') || (*(char *)(uVar2 + 0x1a) != ','));
  uStack_30 = 0x226c7;
  FUN_00072af4();
LAB_000226c7:
  uStack_30 = 0x226e2;
  FUN_0007c590();
  uStack_30 = 0x226f9;
  FUN_00025fbb();
  if (*(short *)(local_2c + 0x13) == 0) {
    uStack_30 = 0x2273c;
    FUN_00025fbb();
  }
  else {
    uStack_30 = 0x22718;
    FUN_00025fbb();
  }
  uStack_30 = 0x22752;
  FUN_00025fbb();
  uStack_30 = 0x22769;
  iVar3 = FUN_00024998();
  if (iVar3 != 0) {
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    uStack_30 = 0x100;
    uStack_34 = 3;
    uStack_38 = 0;
    piVar6 = &uStack_3c;
    uStack_3c = 3;
    FUN_0006e538();
  }
  if ((int)*(char *)(local_2c + 6) != (uint)DAT_002eb543) {
    *(short *)(&DAT_002e0ec4 + *(char *)(local_2c + 6) * 0x1508) =
         *(short *)(&DAT_002e0ec4 + *(char *)(local_2c + 6) * 0x1508) + -1;
    *(int *)(&DAT_002e0ece + *(char *)(local_2c + 6) * 0x1508) =
         *(int *)(&DAT_002e0ece + *(char *)(local_2c + 6) * 0x1508) + 1;
  }
  local_28 = *(undefined4 *)(local_2c + 0xd);
  auStack_24[(uint)bVar7 * -4] = *(undefined2 *)(local_2c + 0x11 + (uint)bVar7 * -8);
  *(undefined4 *)((int)piVar6 + -4) = 0x22806;
  FUN_00072af4();
  *(undefined4 *)((int)piVar6 + -4) = 0;
  *(undefined4 *)((int)piVar6 + -8) = 0x2283a;
  FUN_000d7688();
  *(undefined4 *)((int)piVar6 + -8) = 0x2284f;
  FUN_000da6fc();
  iVar3 = 0;
  do {
    if (((&DAT_0019d0c8)[iVar3] & 1) != 0) {
      *(undefined4 *)((int)piVar6 + -8) = 0x2287f;
      iVar4 = FUN_000859fc();
      *(undefined4 *)((int)piVar6 + -8) = 0x22890;
      iVar5 = FUN_000dc440();
      if (iVar5 <= iVar4 * 0x300) {
        *(undefined4 *)((int)piVar6 + -8) = 0x228a3;
        FUN_00082cac();
      }
    }
    iVar3 = iVar3 + 0x4ef;
  } while (iVar3 != 0x18ab);
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0228a5 (Ghidra: FUN_000228a5)
 * Prototype: undefined8 sub_0228a5(void);
 * Address  : 0x228a5 (Size: 12 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x22933
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000228a5(void)

{
  int unaff_EBP;
  
  return CONCAT44(*(undefined4 *)(unaff_EBP + 0xc),1);
}

/******************************************************************************
 * Function : sub_0228b1 (Ghidra: FUN_000228b1)
 * Prototype: longlong sub_0228b1(void);
 * Address  : 0x228b1 (Size: 84 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x225fc
 * Callees  : 2 -> 0x22a72, 0x6e538
 ******************************************************************************/
longlong FUN_000228b1(void)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)&stack0xfffffff0;
  if (*(char *)(in_EAX + 0x18) != '\0') {
    *(undefined1 *)(in_EAX + 0x15) = 0;
  }
  uStack_14 = 0x228c8;
  iStack_1c = FUN_00022a72();
  if (iStack_1c == 0) {
    if (*(char *)(in_EAX + 0x15) == '\0') {
      uStack_14 = 0x100;
      uStack_18 = 2;
      puVar1 = &uStack_20;
      uStack_20 = 3;
      *(undefined1 *)(in_EAX + 7) = 4;
      FUN_0006e538();
    }
    else {
      *(char *)(in_EAX + 0x15) = *(char *)(in_EAX + 0x15) + -1;
    }
  }
  else {
    *(undefined1 *)(in_EAX + 0x15) = 10;
    puVar1 = (undefined4 *)&stack0xfffffff0;
  }
  return (ulonglong)*(uint *)((int)puVar1 + 4) << 0x20;
}

